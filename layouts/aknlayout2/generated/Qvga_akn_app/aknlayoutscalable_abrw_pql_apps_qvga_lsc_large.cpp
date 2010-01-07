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

#include "aknlayoutscalable_abrw_pql_apps_qvga_lsc_large.h"
#include "AknLayout2ScalableDecode.h"
namespace AknLayoutScalable_Apps { extern const TUint8 KByteCodedData_AknLayoutScalable_Elaf_pqp_apps_qvga_prt[]; }

namespace AknLayoutScalable_Abrw_pql_apps_qvga_lsc_Large
{

extern const TUint16 KDataLookup[AknLayoutScalable_Apps::E_TApiId_TableSize];
const SCompDataImplData KImplData = { KDataLookup, AknLayoutScalable_Apps::KByteCodedData_AknLayoutScalable_Elaf_pqp_apps_qvga_prt + 0x0007dcf8 };

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
0x2f12,	// (0x00080c0a) Screen

0x2f1c,	// (0x00080c14) application_window

0x2f4b,	// (0x00080c43) area_bottom_pane_ParamLimits

0x2f4b,	// (0x00080c43) area_bottom_pane

0x2f7e,	// (0x00080c76) area_top_pane_ParamLimits

0x2f7e,	// (0x00080c76) area_top_pane

0xa761,	// (0x00088459) call_video_uplink_pane_ParamLimits

0xa761,	// (0x00088459) call_video_uplink_pane

0x2fef,	// (0x00080ce7) main_pane_ParamLimits

0x2fef,	// (0x00080ce7) main_pane

0xc395,	// (0x0008a08d) context_pane

0x5be3,	// (0x000838db) navi_pane

0x5c0c,	// (0x00083904) popup_cale_events_window_ParamLimits

0x5c0c,	// (0x00083904) popup_cale_events_window

0xc3a8,	// (0x0008a0a0) popup_mup_playback_window

0x5c24,	// (0x0008391c) signal_pane

0xaee4,	// (0x00088bdc) main_browser_pane

0x105b,	// (0x0007ed53) main_burst_pane

0x1bd0,	// (0x0007f8c8) main_calc_pane

0x105b,	// (0x0007ed53) main_cale_day_pane

0xb0ac,	// (0x00088da4) main_cale_month_pane

0x105b,	// (0x0007ed53) main_cale_week_pane

0x105b,	// (0x0007ed53) main_call_pane

0xab8e,	// (0x00088886) main_call_poc_pane

0x105b,	// (0x0007ed53) main_camera_pane

0x105b,	// (0x0007ed53) main_chi_dic_pane

0x0e5a,	// (0x0007eb52) main_clock_pane

0xab8e,	// (0x00088886) main_fmradio_pane

0x105b,	// (0x0007ed53) main_graph_messa_pane

0xab8e,	// (0x00088886) main_help_pane

0xaee4,	// (0x00088bdc) main_im_pane

0xade9,	// (0x00088ae1) main_image_pane_ParamLimits

0xade9,	// (0x00088ae1) main_image_pane

0xab8e,	// (0x00088886) main_location2_pane

0x105b,	// (0x0007ed53) main_location_pane

0xab8e,	// (0x00088886) main_messa_pane

0xab8e,	// (0x00088886) main_mp2_pane

0x105b,	// (0x0007ed53) main_mp_pane

0xab8e,	// (0x00088886) main_msg_pane

0xab8e,	// (0x00088886) main_mup_eq_pane

0xab8e,	// (0x00088886) main_mup_pane

0x105b,	// (0x0007ed53) main_notes_pane

0xab8e,	// (0x00088886) main_pec_pane

0xab8e,	// (0x00088886) main_phob_pane

0xab8e,	// (0x00088886) main_pinb_pane

0xab8e,	// (0x00088886) main_postcard_pane

0xab8e,	// (0x00088886) main_qdial_pane

0x105b,	// (0x0007ed53) main_skin_pane

0xab8e,	// (0x00088886) main_smil2_pane

0x105b,	// (0x0007ed53) main_smil_pane

0x105b,	// (0x0007ed53) main_video_pane

0x105b,	// (0x0007ed53) main_video_tele_pane

0xade9,	// (0x00088ae1) main_viewer_pane_ParamLimits

0xade9,	// (0x00088ae1) main_viewer_pane

0x105b,	// (0x0007ed53) main_vorec_pane

0x59c3,	// (0x000836bb) popup_blid_sat_info_window_ParamLimits

0x59c3,	// (0x000836bb) popup_blid_sat_info_window

0x5a19,	// (0x00083711) popup_dyc_status_message_window_ParamLimits

0x5a19,	// (0x00083711) popup_dyc_status_message_window

0x5a2f,	// (0x00083727) popup_grid_large_graphic_window_ParamLimits

0x5a2f,	// (0x00083727) popup_grid_large_graphic_window

0x5ac5,	// (0x000837bd) popup_loc_request_window_ParamLimits

0x5ac5,	// (0x000837bd) popup_loc_request_window

0x5bbd,	// (0x000838b5) popup_wml_address_window_ParamLimits

0x5bbd,	// (0x000838b5) popup_wml_address_window

0x5819,	// (0x00083511) call_muted_g1

0x553e,	// (0x00083236) popup_call_audio_conf_window_ParamLimits

0x553e,	// (0x00083236) popup_call_audio_conf_window

0x5829,	// (0x00083521) popup_call_audio_first_window_ParamLimits

0x5829,	// (0x00083521) popup_call_audio_first_window

0x5887,	// (0x0008357f) popup_call_audio_in_window_ParamLimits

0x5887,	// (0x0008357f) popup_call_audio_in_window

0x58b3,	// (0x000835ab) popup_call_audio_out_window_ParamLimits

0x58b3,	// (0x000835ab) popup_call_audio_out_window

0x58e1,	// (0x000835d9) popup_call_audio_second_window_ParamLimits

0x58e1,	// (0x000835d9) popup_call_audio_second_window

0x5927,	// (0x0008361f) popup_call_audio_wait_window_ParamLimits

0x5927,	// (0x0008361f) popup_call_audio_wait_window

0x595a,	// (0x00083652) popup_number_entry_window_ParamLimits

0x595a,	// (0x00083652) popup_number_entry_window

0xa77d,	// (0x00088475) bg_popup_call_pane_cp05_ParamLimits

0xa77d,	// (0x00088475) bg_popup_call_pane_cp05

0xa79d,	// (0x00088495) popup_number_entry_window_t1

0xa7b0,	// (0x000884a8) popup_number_entry_window_t2

0xa7c2,	// (0x000884ba) popup_number_entry_window_t3

0x0003,

0xf0fb,	// (0x0008cdf3) popup_number_entry_window_t

0xa7d4,	// (0x000884cc) text_title_cp2

0xa7e7,	// (0x000884df) bg_popup_call_pane_cp_ParamLimits

0xa7e7,	// (0x000884df) bg_popup_call_pane_cp

0xa7f5,	// (0x000884ed) call_thumbnail_pane

0xa7fd,	// (0x000884f5) popup_call_audio_in_window_g1_ParamLimits

0xa7fd,	// (0x000884f5) popup_call_audio_in_window_g1

0xa809,	// (0x00088501) popup_call_audio_in_window_g2_ParamLimits

0xa809,	// (0x00088501) popup_call_audio_in_window_g2

0xa815,	// (0x0008850d) popup_call_audio_in_window_g3_ParamLimits

0xa815,	// (0x0008850d) popup_call_audio_in_window_g3

0x0002,

0xf104,	// (0x0008cdfc) popup_call_audio_in_window_g_ParamLimits

0xf104,	// (0x0008cdfc) popup_call_audio_in_window_g

0xa821,	// (0x00088519) popup_call_audio_in_window_t1_ParamLimits

0xa821,	// (0x00088519) popup_call_audio_in_window_t1

0xa83c,	// (0x00088534) popup_call_audio_in_window_t2_ParamLimits

0xa83c,	// (0x00088534) popup_call_audio_in_window_t2

0xa857,	// (0x0008854f) popup_call_audio_in_window_t3_ParamLimits

0xa857,	// (0x0008854f) popup_call_audio_in_window_t3

0x0002,

0xf10b,	// (0x0008ce03) popup_call_audio_in_window_t_ParamLimits

0xf10b,	// (0x0008ce03) popup_call_audio_in_window_t

0xa7e7,	// (0x000884df) bg_popup_call_pane_cp01_ParamLimits

0xa7e7,	// (0x000884df) bg_popup_call_pane_cp01

0xa7f5,	// (0x000884ed) call_thumbnail_pane_cp02

0xa86a,	// (0x00088562) call_type_pane_cp022

0xa872,	// (0x0008856a) popup_call_audio_out_window_g1_ParamLimits

0xa872,	// (0x0008856a) popup_call_audio_out_window_g1

0xa884,	// (0x0008857c) popup_call_audio_out_window_g2_ParamLimits

0xa884,	// (0x0008857c) popup_call_audio_out_window_g2

0xa890,	// (0x00088588) popup_call_audio_out_window_g3_ParamLimits

0xa890,	// (0x00088588) popup_call_audio_out_window_g3

0x0002,

0xf112,	// (0x0008ce0a) popup_call_audio_out_window_g_ParamLimits

0xf112,	// (0x0008ce0a) popup_call_audio_out_window_g

0xa8a2,	// (0x0008859a) popup_call_audio_out_window_t1_ParamLimits

0xa8a2,	// (0x0008859a) popup_call_audio_out_window_t1

0xa8ba,	// (0x000885b2) popup_call_audio_out_window_t2_ParamLimits

0xa8ba,	// (0x000885b2) popup_call_audio_out_window_t2

0x0001,

0xf119,	// (0x0008ce11) popup_call_audio_out_window_t_ParamLimits

0xf119,	// (0x0008ce11) popup_call_audio_out_window_t

0xa8cf,	// (0x000885c7) bg_popup_call_pane_ParamLimits

0xa8cf,	// (0x000885c7) bg_popup_call_pane

0x3181,	// (0x00080e79) call_thumbnail_pane_cp_ParamLimits

0x3181,	// (0x00080e79) call_thumbnail_pane_cp

0xa953,	// (0x0008864b) call_type_pane_cp01_ParamLimits

0xa953,	// (0x0008864b) call_type_pane_cp01

0xa997,	// (0x0008868f) popup_call_audio_first_window_g1_ParamLimits

0xa997,	// (0x0008868f) popup_call_audio_first_window_g1

0xa9e3,	// (0x000886db) popup_call_audio_first_window_g2_ParamLimits

0xa9e3,	// (0x000886db) popup_call_audio_first_window_g2

0x0001,

0xf11e,	// (0x0008ce16) popup_call_audio_first_window_g_ParamLimits

0xf11e,	// (0x0008ce16) popup_call_audio_first_window_g

0xaa27,	// (0x0008871f) popup_call_audio_first_window_t1_ParamLimits

0xaa27,	// (0x0008871f) popup_call_audio_first_window_t1

0xaad3,	// (0x000887cb) popup_call_audio_first_window_t4_ParamLimits

0xaad3,	// (0x000887cb) popup_call_audio_first_window_t4

0xab5f,	// (0x00088857) popup_call_audio_first_window_t5_ParamLimits

0xab5f,	// (0x00088857) popup_call_audio_first_window_t5

0x0002,

0xf123,	// (0x0008ce1b) popup_call_audio_first_window_t_ParamLimits

0xf123,	// (0x0008ce1b) popup_call_audio_first_window_t

0xab8e,	// (0x00088886) bg_popup_call_pane_cp02

0xab98,	// (0x00088890) call_type_pane_cp023

0xaba0,	// (0x00088898) popup_call_audio_wait_window_g1

0xaba8,	// (0x000888a0) popup_call_audio_wait_window_g2

0x0001,

0xf12a,	// (0x0008ce22) popup_call_audio_wait_window_g

0xabb0,	// (0x000888a8) popup_call_audio_wait_window_t3

0xabbe,	// (0x000888b6) bg_popup_call_pane_cp03_ParamLimits

0xabbe,	// (0x000888b6) bg_popup_call_pane_cp03

0xac1e,	// (0x00088916) call_thumbnail_pane_cp011_ParamLimits

0xac1e,	// (0x00088916) call_thumbnail_pane_cp011

0xac2a,	// (0x00088922) call_type_pane_cp034_ParamLimits

0xac2a,	// (0x00088922) call_type_pane_cp034

0xac66,	// (0x0008895e) popup_call_audio_second_window_g1_ParamLimits

0xac66,	// (0x0008895e) popup_call_audio_second_window_g1

0xaca2,	// (0x0008899a) popup_call_audio_second_window_g2_ParamLimits

0xaca2,	// (0x0008899a) popup_call_audio_second_window_g2

0x0001,

0xf12f,	// (0x0008ce27) popup_call_audio_second_window_g_ParamLimits

0xf12f,	// (0x0008ce27) popup_call_audio_second_window_g

0xacde,	// (0x000889d6) popup_call_audio_second_window_t1_ParamLimits

0xacde,	// (0x000889d6) popup_call_audio_second_window_t1

0xad5f,	// (0x00088a57) popup_call_audio_second_window_t2_ParamLimits

0xad5f,	// (0x00088a57) popup_call_audio_second_window_t2

0xad95,	// (0x00088a8d) popup_call_audio_second_window_t3_ParamLimits

0xad95,	// (0x00088a8d) popup_call_audio_second_window_t3

0x0002,

0xf134,	// (0x0008ce2c) popup_call_audio_second_window_t_ParamLimits

0xf134,	// (0x0008ce2c) popup_call_audio_second_window_t

0xab8e,	// (0x00088886) bg_popup_call_pane_cp04

0xadcb,	// (0x00088ac3) list_conf_pane

0xadd3,	// (0x00088acb) popup_call_audio_conf_window_t1

0xade1,	// (0x00088ad9) call_thumbnail_pane_g1

0xade9,	// (0x00088ae1) bg_pinb_pane_ParamLimits

0xade9,	// (0x00088ae1) bg_pinb_pane

0xadf7,	// (0x00088aef) find_pinb_pane

0xae00,	// (0x00088af8) listscroll_pinb_pane_ParamLimits

0xae00,	// (0x00088af8) listscroll_pinb_pane

0xae0f,	// (0x00088b07) pinb_bg_pane_g1

0x31a5,	// (0x00080e9d) pinb_bg_pane_g2

0x31af,	// (0x00080ea7) pinb_bg_pane_g3

0x31b9,	// (0x00080eb1) pinb_bg_pane_g4

0x31c3,	// (0x00080ebb) pinb_bg_pane_g5

0x31cd,	// (0x00080ec5) pinb_bg_pane_g6

0x31d6,	// (0x00080ece) pinb_bg_pane_g7

0x31df,	// (0x00080ed7) pinb_bg_pane_g8

0x31ea,	// (0x00080ee2) pinb_bg_pane_g9

0x31f4,	// (0x00080eec) pinb_bg_pane_g10

0x0009,

0xf13b,	// (0x0008ce33) pinb_bg_pane_g

0x320f,	// (0x00080f07) grid_pinb_pane

0x3218,	// (0x00080f10) list_pinb_pane

0x3221,	// (0x00080f19) scroll_pane_cp01_ParamLimits

0x3221,	// (0x00080f19) scroll_pane_cp01

0xae19,	// (0x00088b11) find_pinb_pane_g1_ParamLimits

0xae19,	// (0x00088b11) find_pinb_pane_g1

0xae31,	// (0x00088b29) find_pinb_pane_t1

0xae43,	// (0x00088b3b) find_pinb_pane_t2

0x0001,

0xf155,	// (0x0008ce4d) find_pinb_pane_t

0xae58,	// (0x00088b50) input_focus_pane_cp01_ParamLimits

0xae58,	// (0x00088b50) input_focus_pane_cp01

0x3233,	// (0x00080f2b) cell_pinb_pane_ParamLimits

0x3233,	// (0x00080f2b) cell_pinb_pane

0x324e,	// (0x00080f46) cell_pinb_pane_g1_ParamLimits

0x324e,	// (0x00080f46) cell_pinb_pane_g1

0x325e,	// (0x00080f56) cell_pinb_pane_g2_ParamLimits

0x325e,	// (0x00080f56) cell_pinb_pane_g2

0xae64,	// (0x00088b5c) cell_pinb_pane_g3_ParamLimits

0xae64,	// (0x00088b5c) cell_pinb_pane_g3

0x0002,

0xf15a,	// (0x0008ce52) cell_pinb_pane_g_ParamLimits

0xf15a,	// (0x0008ce52) cell_pinb_pane_g

0xab8e,	// (0x00088886) grid_highlight_pane_cp01

0x326a,	// (0x00080f62) list_pinb_item_pane_ParamLimits

0x326a,	// (0x00080f62) list_pinb_item_pane

0xab8e,	// (0x00088886) list_highlight_pane_cp02

0x327c,	// (0x00080f74) list_pinb_item_pane_g1_ParamLimits

0x327c,	// (0x00080f74) list_pinb_item_pane_g1

0x3289,	// (0x00080f81) list_pinb_item_pane_g2_ParamLimits

0x3289,	// (0x00080f81) list_pinb_item_pane_g2

0x3295,	// (0x00080f8d) list_pinb_item_pane_g3_ParamLimits

0x3295,	// (0x00080f8d) list_pinb_item_pane_g3

0x32a6,	// (0x00080f9e) list_pinb_item_pane_g4_ParamLimits

0x32a6,	// (0x00080f9e) list_pinb_item_pane_g4

0x0003,

0xf161,	// (0x0008ce59) list_pinb_item_pane_g_ParamLimits

0xf161,	// (0x0008ce59) list_pinb_item_pane_g

0x32b2,	// (0x00080faa) list_pinb_item_pane_t1_ParamLimits

0x32b2,	// (0x00080faa) list_pinb_item_pane_t1

0x32e7,	// (0x00080fdf) calc_display_pane

0x3303,	// (0x00080ffb) calc_paper_pane

0x3324,	// (0x0008101c) grid_calc_pane

0xab8e,	// (0x00088886) bg_list_pane_cp01

0x3340,	// (0x00081038) clock_g1

0x3348,	// (0x00081040) clock_g2

0x0001,

0xf16a,	// (0x0008ce62) clock_g

0x3350,	// (0x00081048) clock_t1_ParamLimits

0x3350,	// (0x00081048) clock_t1

0x3365,	// (0x0008105d) clock_t2_ParamLimits

0x3365,	// (0x0008105d) clock_t2

0x3377,	// (0x0008106f) clock_t3_ParamLimits

0x3377,	// (0x0008106f) clock_t3

0x3389,	// (0x00081081) clock_t4_ParamLimits

0x3389,	// (0x00081081) clock_t4

0x339b,	// (0x00081093) clock_t5_ParamLimits

0x339b,	// (0x00081093) clock_t5

0x33b0,	// (0x000810a8) clock_t6_ParamLimits

0x33b0,	// (0x000810a8) clock_t6

0x33c2,	// (0x000810ba) clock_t7_ParamLimits

0x33c2,	// (0x000810ba) clock_t7

0x33d4,	// (0x000810cc) clock_t8_ParamLimits

0x33d4,	// (0x000810cc) clock_t8

0x33e6,	// (0x000810de) clock_t9_ParamLimits

0x33e6,	// (0x000810de) clock_t9

0x0008,

0xf16f,	// (0x0008ce67) clock_t_ParamLimits

0xf16f,	// (0x0008ce67) clock_t

0xae78,	// (0x00088b70) popup_clock_analogue_window_cp02

0xae78,	// (0x00088b70) popup_clock_digital_window_cp01

0xae80,	// (0x00088b78) listscroll_help_pane

0xab8e,	// (0x00088886) phob_pre_status_pane

0xae8a,	// (0x00088b82) grid_qdial_pane

0xab8e,	// (0x00088886) listscroll_mce_pane

0xae94,	// (0x00088b8c) bg_notes_pane

0xae9e,	// (0x00088b96) list_notes_pane

0x33f8,	// (0x000810f0) scroll_pane_cp06

0xaea8,	// (0x00088ba0) bg_calc_paper_pane

0xaeca,	// (0x00088bc2) list_calc_pane

0xaee4,	// (0x00088bdc) bg_calc_display_pane

0xaef0,	// (0x00088be8) calc_display_pane_t1

0xaf05,	// (0x00088bfd) calc_display_pane_t2

0xaf1a,	// (0x00088c12) calc_display_pane_t3

0x0002,

0xf182,	// (0x0008ce7a) calc_display_pane_t

0x3403,	// (0x000810fb) cell_calc_pane_ParamLimits

0x3403,	// (0x000810fb) cell_calc_pane

0xaf2c,	// (0x00088c24) bg_calc_paper_pane_g1

0xaf38,	// (0x00088c30) bg_calc_paper_pane_g2

0xaf44,	// (0x00088c3c) bg_calc_paper_pane_g3

0xaf50,	// (0x00088c48) bg_calc_paper_pane_g4

0xaf5c,	// (0x00088c54) bg_calc_paper_pane_g5

0x3436,	// (0x0008112e) bg_calc_paper_pane_g6

0x3445,	// (0x0008113d) bg_calc_paper_pane_g7

0x3454,	// (0x0008114c) bg_calc_paper_pane_g8

0x0007,

0xf189,	// (0x0008ce81) bg_calc_paper_pane_g

0x3463,	// (0x0008115b) calc_bg_paper_pane_g9

0x3472,	// (0x0008116a) list_calc_item_pane_ParamLimits

0x3472,	// (0x0008116a) list_calc_item_pane

0xaf68,	// (0x00088c60) list_calc_item_pane_g1

0xaf75,	// (0x00088c6d) list_calc_item_pane_t1_ParamLimits

0xaf75,	// (0x00088c6d) list_calc_item_pane_t1

0x3486,	// (0x0008117e) list_calc_item_pane_t2_ParamLimits

0x3486,	// (0x0008117e) list_calc_item_pane_t2

0x0001,

0xf19a,	// (0x0008ce92) list_calc_item_pane_t_ParamLimits

0xf19a,	// (0x0008ce92) list_calc_item_pane_t

0xaf87,	// (0x00088c7f) cell_calc_pane_g1

0xaf91,	// (0x00088c89) grid_highlight_pane_cp02

0xafb3,	// (0x00088cab) bg_calc_display_pane_g1

0xafbc,	// (0x00088cb4) bg_calc_display_pane_g2

0xafc6,	// (0x00088cbe) bg_calc_display_pane_g3

0x0002,

0xf1a4,	// (0x0008ce9c) bg_calc_display_pane_g

0x34b4,	// (0x000811ac) cell_qdial_pane_ParamLimits

0x34b4,	// (0x000811ac) cell_qdial_pane

0x34c6,	// (0x000811be) cell_qdial_pane_g1_ParamLimits

0x34c6,	// (0x000811be) cell_qdial_pane_g1

0x34dc,	// (0x000811d4) cell_qdial_pane_g2_ParamLimits

0x34dc,	// (0x000811d4) cell_qdial_pane_g2

0xafcf,	// (0x00088cc7) cell_qdial_pane_g3_ParamLimits

0xafcf,	// (0x00088cc7) cell_qdial_pane_g3

0x0003,

0xf1ab,	// (0x0008cea3) cell_qdial_pane_g_ParamLimits

0xf1ab,	// (0x0008cea3) cell_qdial_pane_g

0x3503,	// (0x000811fb) cell_qdial_pane_t1_ParamLimits

0x3503,	// (0x000811fb) cell_qdial_pane_t1

0x351b,	// (0x00081213) cell_qdial_pane_t2_ParamLimits

0x351b,	// (0x00081213) cell_qdial_pane_t2

0x352e,	// (0x00081226) cell_qdial_pane_t3_ParamLimits

0x352e,	// (0x00081226) cell_qdial_pane_t3

0x0002,

0xf1b4,	// (0x0008ceac) cell_qdial_pane_t_ParamLimits

0xf1b4,	// (0x0008ceac) cell_qdial_pane_t

0xab8e,	// (0x00088886) grid_highlight_pane_cp04

0xafdb,	// (0x00088cd3) thumbnail_qdial_pane_ParamLimits

0xafdb,	// (0x00088cd3) thumbnail_qdial_pane

0xb037,	// (0x00088d2f) list_help_pane

0xb041,	// (0x00088d39) scroll_pane_cp02

0x3541,	// (0x00081239) help_list_pane_t1_ParamLimits

0x3541,	// (0x00081239) help_list_pane_t1

0xb04a,	// (0x00088d42) bg_notes_pane_g2

0xb052,	// (0x00088d4a) bg_notes_pane_g3

0xb05a,	// (0x00088d52) notes_bg_pane_g1

0xb062,	// (0x00088d5a) notes_bg_pane_g4

0xb06a,	// (0x00088d62) notes_bg_pane_g5

0xb072,	// (0x00088d6a) notes_bg_pane_g6

0xb07a,	// (0x00088d72) notes_bg_pane_g7

0xb082,	// (0x00088d7a) notes_bg_pane_g8

0xb08a,	// (0x00088d82) notes_bg_pane_g9

0x0006,

0xf1d2,	// (0x0008ceca) notes_bg_pane_g

0x1bea,	// (0x0007f8e2) list_notes_text_pane_ParamLimits

0x1bea,	// (0x0007f8e2) list_notes_text_pane

0xb092,	// (0x00088d8a) list_notes_text_pane_g1

0x355d,	// (0x00081255) list_notes_text_pane_t1

0xb0ac,	// (0x00088da4) listscroll_cale_week_pane

0x3586,	// (0x0008127e) bg_cale_heading_pane

0xb0bb,	// (0x00088db3) bg_cale_pane_cp01

0x359a,	// (0x00081292) cale_week_corner_pane

0x35b0,	// (0x000812a8) cale_week_day_heading_pane

0x35c4,	// (0x000812bc) cale_week_scroll_pane_g1

0x35d5,	// (0x000812cd) cale_week_scroll_pane_g2

0x35e6,	// (0x000812de) cale_week_scroll_pane_g3

0x35f7,	// (0x000812ef) cale_week_scroll_pane_g4

0x3608,	// (0x00081300) cale_week_scroll_pane_g5

0x3619,	// (0x00081311) cale_week_scroll_pane_g6

0x362a,	// (0x00081322) cale_week_scroll_pane_g7

0x363b,	// (0x00081333) cale_week_scroll_pane_g8

0x364e,	// (0x00081346) cale_week_scroll_pane_g9

0x365f,	// (0x00081357) cale_week_scroll_pane_g10

0x3670,	// (0x00081368) cale_week_scroll_pane_g11

0x3681,	// (0x00081379) cale_week_scroll_pane_g12

0x3692,	// (0x0008138a) cale_week_scroll_pane_g13

0x36a3,	// (0x0008139b) cale_week_scroll_pane_g14

0x36b4,	// (0x000813ac) cale_week_scroll_pane_g15

0x000e,

0xf1e1,	// (0x0008ced9) cale_week_scroll_pane_g

0x36c5,	// (0x000813bd) cale_week_time_pane

0x36d8,	// (0x000813d0) grid_cale_week_pane

0x36eb,	// (0x000813e3) scroll_pane_cp08

0x3705,	// (0x000813fd) cell_cale_week_pane_ParamLimits

0x3705,	// (0x000813fd) cell_cale_week_pane

0x3741,	// (0x00081439) cale_week_day_heading_pane_t1

0x376b,	// (0x00081463) cale_week_day_heading_pane_t2

0x3795,	// (0x0008148d) cale_week_day_heading_pane_t3

0x37bf,	// (0x000814b7) cale_week_day_heading_pane_t4

0x37e9,	// (0x000814e1) cale_week_day_heading_pane_t5

0x3813,	// (0x0008150b) cale_week_day_heading_pane_t6

0x383d,	// (0x00081535) cale_week_day_heading_pane_t7

0x0006,

0xf200,	// (0x0008cef8) cale_week_day_heading_pane_t

0xb0e6,	// (0x00088dde) bg_cale_side_pane

0x3867,	// (0x0008155f) cale_week_time_pane_t1

0x3893,	// (0x0008158b) cale_week_time_pane_t2

0x38bf,	// (0x000815b7) cale_week_time_pane_t3

0x38eb,	// (0x000815e3) cale_week_time_pane_t4

0x3917,	// (0x0008160f) cale_week_time_pane_t5

0x3943,	// (0x0008163b) cale_week_time_pane_t6

0x396f,	// (0x00081667) cale_week_time_pane_t7

0x399b,	// (0x00081693) cale_week_time_pane_t8

0x0007,

0xf20f,	// (0x0008cf07) cale_week_time_pane_t

0x39c7,	// (0x000816bf) cell_cale_week_pane_g2

0x39e0,	// (0x000816d8) cell_cale_week_pane_g3_ParamLimits

0x39e0,	// (0x000816d8) cell_cale_week_pane_g3

0xb0f4,	// (0x00088dec) grid_highlight_pane_cp07

0xb0fc,	// (0x00088df4) listscroll_gms_pane

0xb106,	// (0x00088dfe) grid_gms_pane

0xb10f,	// (0x00088e07) listscroll_gms_pane_g1

0xb117,	// (0x00088e0f) listscroll_gms_pane_g2

0x0001,

0xf220,	// (0x0008cf18) listscroll_gms_pane_g

0x39f8,	// (0x000816f0) scroll_pane_cp010

0x3a03,	// (0x000816fb) cell_gms_pane_ParamLimits

0x3a03,	// (0x000816fb) cell_gms_pane

0x3a13,	// (0x0008170b) cell_gms_pane_g1

0xb11f,	// (0x00088e17) cell_gms_pane_g2

0xb092,	// (0x00088d8a) cell_gms_pane_g3

0xb127,	// (0x00088e1f) cell_gms_pane_g4

0x0003,

0xf225,	// (0x0008cf1d) cell_gms_pane_g

0xb130,	// (0x00088e28) grid_highlight_pane_cp09

0x57c7,	// (0x000834bf) phob_pre_status_pane_g1

0x57cf,	// (0x000834c7) phob_pre_status_pane_g2

0x57d7,	// (0x000834cf) phob_pre_status_pane_g3

0x57df,	// (0x000834d7) phob_pre_status_pane_g4

0x0004,

0xf627,	// (0x0008d31f) phob_pre_status_pane_g

0x57ef,	// (0x000834e7) phob_pre_status_pane_t1

0x57fd,	// (0x000834f5) phob_pre_status_pane_t2

0x580b,	// (0x00083503) phob_pre_status_pane_t3

0x0002,

0xf632,	// (0x0008d32a) phob_pre_status_pane_t

0xab8e,	// (0x00088886) bg_list_pane_cp05

0x3a23,	// (0x0008171b) grid_vorec_pane

0xb138,	// (0x00088e30) vorec_t1

0xb146,	// (0x00088e3e) vorec_t2

0xb154,	// (0x00088e4c) vorec_t3

0xb162,	// (0x00088e5a) vorec_t4

0xb170,	// (0x00088e68) vorec_t5

0xb17e,	// (0x00088e76) vorec_t6

0x0006,

0xf22e,	// (0x0008cf26) vorec_t

0xb19a,	// (0x00088e92) wait_bar_pane_cp01

0x3a2b,	// (0x00081723) cell_vorec_pane_ParamLimits

0x3a2b,	// (0x00081723) cell_vorec_pane

0xb1a2,	// (0x00088e9a) cell_vorec_pane_g1

0xab8e,	// (0x00088886) grid_highlight_pane_cp05

0x3a50,	// (0x00081748) cams_zoom_pane

0x3a5f,	// (0x00081757) image_vga_pane

0x3a77,	// (0x0008176f) main_camera_pane_g1

0x3a87,	// (0x0008177f) main_camera_pane_g2

0x3a97,	// (0x0008178f) main_camera_pane_g3

0x3aa7,	// (0x0008179f) main_camera_pane_g4

0x3ab7,	// (0x000817af) main_camera_pane_g5

0x3ac7,	// (0x000817bf) main_camera_pane_g6

0x3ad7,	// (0x000817cf) main_camera_pane_g7

0x0007,

0xf23d,	// (0x0008cf35) main_camera_pane_g

0x3ae7,	// (0x000817df) main_camera_pane_t1

0x3afd,	// (0x000817f5) main_camera_pane_t2

0x0001,

0xf24e,	// (0x0008cf46) main_camera_pane_t

0x3b2f,	// (0x00081827) cams_zoom_pane_cp_ParamLimits

0x3b2f,	// (0x00081827) cams_zoom_pane_cp

0x3b57,	// (0x0008184f) image_cif_pane_ParamLimits

0x3b57,	// (0x0008184f) image_cif_pane

0x3b88,	// (0x00081880) image_subqcif_pane

0x3b90,	// (0x00081888) main_video_pane_g1_ParamLimits

0x3b90,	// (0x00081888) main_video_pane_g1

0x3bb4,	// (0x000818ac) main_video_pane_g2_ParamLimits

0x3bb4,	// (0x000818ac) main_video_pane_g2

0x3be8,	// (0x000818e0) main_video_pane_g3_ParamLimits

0x3be8,	// (0x000818e0) main_video_pane_g3

0x3c16,	// (0x0008190e) main_video_pane_g4_ParamLimits

0x3c16,	// (0x0008190e) main_video_pane_g4

0x3c44,	// (0x0008193c) main_video_pane_g5_ParamLimits

0x3c44,	// (0x0008193c) main_video_pane_g5

0xb1b8,	// (0x00088eb0) main_video_pane_g6_ParamLimits

0xb1b8,	// (0x00088eb0) main_video_pane_g6

0x0006,

0xf253,	// (0x0008cf4b) main_video_pane_g_ParamLimits

0xf253,	// (0x0008cf4b) main_video_pane_g

0x3c6b,	// (0x00081963) main_video_pane_t1_ParamLimits

0x3c6b,	// (0x00081963) main_video_pane_t1

0xb1d2,	// (0x00088eca) cams_zoom_pane_g1

0xb1db,	// (0x00088ed3) cams_zoom_pane_g2

0xb1e4,	// (0x00088edc) cams_zoom_pane_g3

0xb1ed,	// (0x00088ee5) cams_zoom_pane_g4

0x0003,

0xf262,	// (0x0008cf5a) cams_zoom_pane_g

0x3cc8,	// (0x000819c0) grid_cams_pane

0x3cdd,	// (0x000819d5) linegrid_cams_pane

0x3cee,	// (0x000819e6) cell_cams_pane_ParamLimits

0x3cee,	// (0x000819e6) cell_cams_pane

0xb1f6,	// (0x00088eee) cams_burst_image_pane

0xb1fe,	// (0x00088ef6) cell_cams_pane_g1

0xab8e,	// (0x00088886) grid_highlight_pane_cp03

0xaf87,	// (0x00088c7f) mp_bg_pane_g1

0xab8e,	// (0x00088886) bg_list_pane_cp03

0xc271,	// (0x00089f69) bg_mp_pane

0xc279,	// (0x00089f71) grid_mp_pane

0xc281,	// (0x00089f79) media_player_g1

0xc289,	// (0x00089f81) media_player_t1

0xc297,	// (0x00089f8f) media_player_t2

0xc2a5,	// (0x00089f9d) media_player_t3

0xc2b3,	// (0x00089fab) media_player_t4

0xc2c1,	// (0x00089fb9) media_player_t5

0xc2cf,	// (0x00089fc7) media_player_t6

0xc2dd,	// (0x00089fd5) media_player_t7

0x0006,

0xf611,	// (0x0008d309) media_player_t

0xc2eb,	// (0x00089fe3) wait_bar_pane_cp02

0xf5f6,	// (0x0008d2ee) main_usb_pane_t

0x57be,	// (0x000834b6) cell_mp_pane

0xaf87,	// (0x00088c7f) cell_mp_pane_g1

0xab8e,	// (0x00088886) grid_highlight_pane_cp06

0xb2a6,	// (0x00088f9e) grid_skin_colour_pane

0xb2ae,	// (0x00088fa6) list_highlight_pane_cp03

0x3d62,	// (0x00081a5a) skin_g1

0xb2b6,	// (0x00088fae) skin_t1

0xb2c5,	// (0x00088fbd) skin_t2

0x0001,

0xf297,	// (0x0008cf8f) skin_t

0x3d6a,	// (0x00081a62) cell_skin_colour_pane_ParamLimits

0x3d6a,	// (0x00081a62) cell_skin_colour_pane

0xb2d3,	// (0x00088fcb) cell_skin_colour_pane_g1

0x3dbc,	// (0x00081ab4) call_video_g1_ParamLimits

0x3dbc,	// (0x00081ab4) call_video_g1

0x3dd2,	// (0x00081aca) call_video_g2_ParamLimits

0x3dd2,	// (0x00081aca) call_video_g2

0x0001,

0xf29c,	// (0x0008cf94) call_video_g_ParamLimits

0xf29c,	// (0x0008cf94) call_video_g

0x3e08,	// (0x00081b00) call_video_uplink_pane_cp1_ParamLimits

0x3e08,	// (0x00081b00) call_video_uplink_pane_cp1

0xb2ed,	// (0x00088fe5) call_video_uplink_pane_cp2

0x3e6f,	// (0x00081b67) video_down_crop_pane_ParamLimits

0x3e6f,	// (0x00081b67) video_down_crop_pane

0x3f17,	// (0x00081c0f) video_down_pane_ParamLimits

0x3f17,	// (0x00081c0f) video_down_pane

0xb2f5,	// (0x00088fed) video_down_subqcif_pane_ParamLimits

0xb2f5,	// (0x00088fed) video_down_subqcif_pane

0xb30d,	// (0x00089005) video_down_subqcif_pane_cp_ParamLimits

0xb30d,	// (0x00089005) video_down_subqcif_pane_cp

0xb331,	// (0x00089029) im_reading_pane_ParamLimits

0xb331,	// (0x00089029) im_reading_pane

0x3fa7,	// (0x00081c9f) im_writing_pane_ParamLimits

0x3fa7,	// (0x00081c9f) im_writing_pane

0x3fbd,	// (0x00081cb5) im_reading_pane_t1

0xb34b,	// (0x00089043) list_im_pane

0xb35c,	// (0x00089054) scroll_pane_cp07

0x3ff3,	// (0x00081ceb) im_writing_pane_t1_ParamLimits

0x3ff3,	// (0x00081ceb) im_writing_pane_t1

0xb375,	// (0x0008906d) im_writing_pane_t2_ParamLimits

0xb375,	// (0x0008906d) im_writing_pane_t2

0x0001,

0xf2a6,	// (0x0008cf9e) im_writing_pane_t_ParamLimits

0xf2a6,	// (0x0008cf9e) im_writing_pane_t

0xab8e,	// (0x00088886) input_focus_pane_cp04

0xab8e,	// (0x00088886) input_focus_pane_cp05

0x4008,	// (0x00081d00) list_im_single_pane_ParamLimits

0x4008,	// (0x00081d00) list_im_single_pane

0xb392,	// (0x0008908a) list_single_im_pane_t1

0x5784,	// (0x0008347c) blid_accuracy_pane

0x578c,	// (0x00083484) blid_compass_pane

0x5794,	// (0x0008348c) main_location_t1

0x57a2,	// (0x0008349a) main_location_t2

0x57b0,	// (0x000834a8) main_location_t3

0x0002,

0xf620,	// (0x0008d318) main_location_t

0xab8e,	// (0x00088886) aid_levels_location

0xaf87,	// (0x00088c7f) blid_accuracy_pane_g1

0xaf87,	// (0x00088c7f) blid_accuracy_pane_g2

0x0001,

0xf308,	// (0x0008d000) blid_accuracy_pane_g

0xb3cc,	// (0x000890c4) wml_content_pane

0xb40a,	// (0x00089102) wml_button_pane_ParamLimits

0xb40a,	// (0x00089102) wml_button_pane

0x401e,	// (0x00081d16) wml_list_single_large_pane_ParamLimits

0x401e,	// (0x00081d16) wml_list_single_large_pane

0x4032,	// (0x00081d2a) wml_list_single_medium_pane_ParamLimits

0x4032,	// (0x00081d2a) wml_list_single_medium_pane

0x4047,	// (0x00081d3f) wml_list_single_small_pane_ParamLimits

0x4047,	// (0x00081d3f) wml_list_single_small_pane

0xb41e,	// (0x00089116) wml_selection_box_pane_ParamLimits

0xb41e,	// (0x00089116) wml_selection_box_pane

0xb431,	// (0x00089129) wml_list_single_pane_t1

0xb440,	// (0x00089138) wml_list_single_medium_pane_t1

0xb44f,	// (0x00089147) wml_list_single_large_pane_t1

0xb45e,	// (0x00089156) input_focus_pane_cp02_ParamLimits

0xb45e,	// (0x00089156) input_focus_pane_cp02

0xb471,	// (0x00089169) wml_selection_box_pane_g1

0xb47a,	// (0x00089172) wml_selection_box_pane_t1_ParamLimits

0xb47a,	// (0x00089172) wml_selection_box_pane_t1

0xade9,	// (0x00088ae1) bg_wml_button_pane_ParamLimits

0xade9,	// (0x00088ae1) bg_wml_button_pane

0xb492,	// (0x0008918a) wml_button_pane_g1

0xb49a,	// (0x00089192) wml_button_pane_t1

0xb492,	// (0x0008918a) wml_button_bg_pane_g1

0xb4aa,	// (0x000891a2) wml_button_bg_pane_g2

0xb4b2,	// (0x000891aa) wml_button_bg_pane_g3

0xb4ba,	// (0x000891b2) wml_button_bg_pane_g4

0xb4c2,	// (0x000891ba) wml_button_bg_pane_g5

0xb4ca,	// (0x000891c2) wml_button_bg_pane_g6

0xb4d2,	// (0x000891ca) wml_button_bg_pane_g7

0xb4da,	// (0x000891d2) wml_button_bg_pane_g8

0xb4e2,	// (0x000891da) wml_button_bg_pane_g9

0x0008,

0xf2ab,	// (0x0008cfa3) wml_button_bg_pane_g

0x405e,	// (0x00081d56) bg_list_pane_cp02

0xb4ea,	// (0x000891e2) mce_header_pane_ParamLimits

0xb4ea,	// (0x000891e2) mce_header_pane

0xb4fe,	// (0x000891f6) mce_icon_pane

0xb4fe,	// (0x000891f6) mce_image_pane

0xb507,	// (0x000891ff) mce_text_pane_ParamLimits

0xb507,	// (0x000891ff) mce_text_pane

0x4067,	// (0x00081d5f) scroll_pane_cp03

0x4067,	// (0x00081d5f) scroll_pane_cp04

0xb51b,	// (0x00089213) scroll_pane_cp05_ParamLimits

0xb51b,	// (0x00089213) scroll_pane_cp05

0x4071,	// (0x00081d69) mce_header_field_pane_ParamLimits

0x4071,	// (0x00081d69) mce_header_field_pane

0x4088,	// (0x00081d80) mce_header_field_pane_2_ParamLimits

0x4088,	// (0x00081d80) mce_header_field_pane_2

0x409e,	// (0x00081d96) mce_header_field_pane_3

0x40a6,	// (0x00081d9e) list_single_mce_message_pane_ParamLimits

0x40a6,	// (0x00081d9e) list_single_mce_message_pane

0x40bb,	// (0x00081db3) list_single_mce_smart_pane_ParamLimits

0x40bb,	// (0x00081db3) list_single_mce_smart_pane

0xb527,	// (0x0008921f) input_focus_pane_cp03

0xb530,	// (0x00089228) list_header_data_pane

0x40db,	// (0x00081dd3) mce_header_field_pane_t1

0x40e9,	// (0x00081de1) list_single_mce_header_pane_ParamLimits

0x40e9,	// (0x00081de1) list_single_mce_header_pane

0xb538,	// (0x00089230) list_single_mce_header_pane_t1

0xb547,	// (0x0008923f) list_single_mce_message_pane_g1

0xb550,	// (0x00089248) list_single_mce_message_pane_t1

0x411b,	// (0x00081e13) bg_cale_heading_pane_cp01_ParamLimits

0x411b,	// (0x00081e13) bg_cale_heading_pane_cp01

0xb55f,	// (0x00089257) bg_cale_pane_cp02_ParamLimits

0xb55f,	// (0x00089257) bg_cale_pane_cp02

0x413e,	// (0x00081e36) cale_month_corner_pane

0x4154,	// (0x00081e4c) cale_month_day_heading_pane_ParamLimits

0x4154,	// (0x00081e4c) cale_month_day_heading_pane

0x4187,	// (0x00081e7f) cale_month_pane_g1_ParamLimits

0x4187,	// (0x00081e7f) cale_month_pane_g1

0x41a3,	// (0x00081e9b) cale_month_pane_g2_ParamLimits

0x41a3,	// (0x00081e9b) cale_month_pane_g2

0x41be,	// (0x00081eb6) cale_month_pane_g3_ParamLimits

0x41be,	// (0x00081eb6) cale_month_pane_g3

0x41ea,	// (0x00081ee2) cale_month_pane_g4_ParamLimits

0x41ea,	// (0x00081ee2) cale_month_pane_g4

0x4216,	// (0x00081f0e) cale_month_pane_g5_ParamLimits

0x4216,	// (0x00081f0e) cale_month_pane_g5

0x4242,	// (0x00081f3a) cale_month_pane_g6_ParamLimits

0x4242,	// (0x00081f3a) cale_month_pane_g6

0x426e,	// (0x00081f66) cale_month_pane_g7_ParamLimits

0x426e,	// (0x00081f66) cale_month_pane_g7

0x429a,	// (0x00081f92) cale_month_pane_g8_ParamLimits

0x429a,	// (0x00081f92) cale_month_pane_g8

0x42d6,	// (0x00081fce) cale_month_pane_g9_ParamLimits

0x42d6,	// (0x00081fce) cale_month_pane_g9

0x4310,	// (0x00082008) cale_month_pane_g10_ParamLimits

0x4310,	// (0x00082008) cale_month_pane_g10

0x434a,	// (0x00082042) cale_month_pane_g11_ParamLimits

0x434a,	// (0x00082042) cale_month_pane_g11

0x4384,	// (0x0008207c) cale_month_pane_g12_ParamLimits

0x4384,	// (0x0008207c) cale_month_pane_g12

0x43be,	// (0x000820b6) cale_month_pane_g13_ParamLimits

0x43be,	// (0x000820b6) cale_month_pane_g13

0x000c,

0xf2be,	// (0x0008cfb6) cale_month_pane_g_ParamLimits

0xf2be,	// (0x0008cfb6) cale_month_pane_g

0x43f8,	// (0x000820f0) cale_month_week_pane

0x440b,	// (0x00082103) grid_cale_month_pane_ParamLimits

0x440b,	// (0x00082103) grid_cale_month_pane

0x4439,	// (0x00082131) cale_month_day_heading_pane_t1

0x4497,	// (0x0008218f) cale_month_day_heading_pane_t2

0x44fc,	// (0x000821f4) cale_month_day_heading_pane_t3

0x4561,	// (0x00082259) cale_month_day_heading_pane_t4

0x45c6,	// (0x000822be) cale_month_day_heading_pane_t5

0x462b,	// (0x00082323) cale_month_day_heading_pane_t6

0x4690,	// (0x00082388) cale_month_day_heading_pane_t7

0x0006,

0xf2d9,	// (0x0008cfd1) cale_month_day_heading_pane_t

0xb0e6,	// (0x00088dde) bg_cale_side_pane_cp01

0x46fd,	// (0x000823f5) cale_month_week_pane_t1

0x4714,	// (0x0008240c) cale_month_week_pane_t2

0x472b,	// (0x00082423) cale_month_week_pane_t3

0x4742,	// (0x0008243a) cale_month_week_pane_t4

0x4759,	// (0x00082451) cale_month_week_pane_t5

0x4770,	// (0x00082468) cale_month_week_pane_t6

0x0005,

0xf2e8,	// (0x0008cfe0) cale_month_week_pane_t

0x4787,	// (0x0008247f) cell_cale_month_pane_ParamLimits

0x4787,	// (0x0008247f) cell_cale_month_pane

0xb5be,	// (0x000892b6) cell_cale_month_pane_g1

0x4835,	// (0x0008252d) cell_cale_month_pane_t1_ParamLimits

0x4835,	// (0x0008252d) cell_cale_month_pane_t1

0xb0f4,	// (0x00088dec) grid_highlight_pane_cp08

0xaf87,	// (0x00088c7f) main_smil_g1

0x4851,	// (0x00082549) smil_status_pane

0xb5ca,	// (0x000892c2) smil_text_pane

0xc151,	// (0x00089e49) bg_popup_call3_rect_pane_g8

0xc159,	// (0x00089e51) bg_popup_call3_rect_pane_g9

0x0008,

0xf5a1,	// (0x0008d299) bg_popup_call3_rect_pane_g

0xc40f,	// (0x0008a107) smil_status_volume_pane_g1

0xb5d4,	// (0x000892cc) smil_status_pane_t1

0xeb34,	// (0x0008c82c) volume_smil_pane

0xb5eb,	// (0x000892e3) list_smil_text_pane

0x4862,	// (0x0008255a) scroll_pane_cp011

0x486d,	// (0x00082565) smil_text_list_pane_t1_ParamLimits

0x486d,	// (0x00082565) smil_text_list_pane_t1

0xb5f5,	// (0x000892ed) aid_volume_smil_ParamLimits

0xb5f5,	// (0x000892ed) aid_volume_smil

0xaf87,	// (0x00088c7f) smil_volume_pane_g1

0xaf87,	// (0x00088c7f) smil_volume_pane_g2

0x0001,

0xf308,	// (0x0008d000) smil_volume_pane_g

0xaee4,	// (0x00088bdc) listscroll_cale_day_pane

0xb617,	// (0x0008930f) bg_cale_pane

0xb62f,	// (0x00089327) list_cale_pane

0xb640,	// (0x00089338) scroll_pane_cp09

0xb651,	// (0x00089349) cale_bg_pane_g1

0xb659,	// (0x00089351) cale_bg_pane_g2

0xb661,	// (0x00089359) cale_bg_pane_g3

0xb669,	// (0x00089361) cale_bg_pane_g4

0xb671,	// (0x00089369) cale_bg_pane_g5

0xb679,	// (0x00089371) cale_bg_pane_g6

0xb681,	// (0x00089379) cale_bg_pane_g7

0xb689,	// (0x00089381) cale_bg_pane_g8

0xb691,	// (0x00089389) cale_bg_pane_g9

0x0008,

0xf30d,	// (0x0008d005) cale_bg_pane_g

0x48ab,	// (0x000825a3) list_cale_time_pane_ParamLimits

0x48ab,	// (0x000825a3) list_cale_time_pane

0xb699,	// (0x00089391) list_cale_time_pane_g1_ParamLimits

0xb699,	// (0x00089391) list_cale_time_pane_g1

0xb6a5,	// (0x0008939d) list_cale_time_pane_g2_ParamLimits

0xb6a5,	// (0x0008939d) list_cale_time_pane_g2

0x48c0,	// (0x000825b8) list_cale_time_pane_g3_ParamLimits

0x48c0,	// (0x000825b8) list_cale_time_pane_g3

0x48ce,	// (0x000825c6) list_cale_time_pane_g4_ParamLimits

0x48ce,	// (0x000825c6) list_cale_time_pane_g4

0x48dc,	// (0x000825d4) list_cale_time_pane_g5_ParamLimits

0x48dc,	// (0x000825d4) list_cale_time_pane_g5

0x0005,

0xf320,	// (0x0008d018) list_cale_time_pane_g_ParamLimits

0xf320,	// (0x0008d018) list_cale_time_pane_g

0xb6bf,	// (0x000893b7) list_cale_time_pane_t1_ParamLimits

0xb6bf,	// (0x000893b7) list_cale_time_pane_t1

0xb6e7,	// (0x000893df) list_cale_time_pane_t2_ParamLimits

0xb6e7,	// (0x000893df) list_cale_time_pane_t2

0x4be0,	// (0x000828d8) aid_blid_cardinal_pane

0x4c1e,	// (0x00082916) compass_pane_t4

0xb70f,	// (0x00089407) list_cale_time_pane_t4_ParamLimits

0xb70f,	// (0x00089407) list_cale_time_pane_t4

0x4c2c,	// (0x00082924) compass_pane_t5

0x4c3a,	// (0x00082932) compass_pane_t6

0x4c48,	// (0x00082940) compass_pane_t7

0x0f5e,	// (0x0007ec56) navi_pane_cc_t1

0x1102,	// (0x0007edfa) aid_phob_thumbnail_center_pane

0x5236,	// (0x00082f2e) main_postcard_pane_g4_ParamLimits

0x0002,

0xf32d,	// (0x0008d025) list_cale_time_pane_t_ParamLimits

0xf32d,	// (0x0008d025) list_cale_time_pane_t

0xa7e7,	// (0x000884df) bg_popup_window_pane_cp02_ParamLimits

0xa7e7,	// (0x000884df) bg_popup_window_pane_cp02

0xb737,	// (0x0008942f) heading_pane_cp01_ParamLimits

0xb737,	// (0x0008942f) heading_pane_cp01

0xb743,	// (0x0008943b) loc_req_pane_ParamLimits

0xb743,	// (0x0008943b) loc_req_pane

0xb753,	// (0x0008944b) loc_type_pane_ParamLimits

0xb753,	// (0x0008944b) loc_type_pane

0xb765,	// (0x0008945d) loc_type_pane_t1_ParamLimits

0xb765,	// (0x0008945d) loc_type_pane_t1

0xb777,	// (0x0008946f) loc_type_pane_t2_ParamLimits

0xb777,	// (0x0008946f) loc_type_pane_t2

0xb789,	// (0x00089481) loc_type_pane_t3_ParamLimits

0xb789,	// (0x00089481) loc_type_pane_t3

0x0002,

0xf334,	// (0x0008d02c) loc_type_pane_t_ParamLimits

0xf334,	// (0x0008d02c) loc_type_pane_t

0xb79b,	// (0x00089493) list_loc_req_pane

0xb7a5,	// (0x0008949d) scroll_pane_cp012

0x48e8,	// (0x000825e0) list_single_loc_request_popup_menu_pane_ParamLimits

0x48e8,	// (0x000825e0) list_single_loc_request_popup_menu_pane

0xb7ae,	// (0x000894a6) list_single_loc_request_popup_menu_pane_g1_ParamLimits

0xb7ae,	// (0x000894a6) list_single_loc_request_popup_menu_pane_g1

0xb7ba,	// (0x000894b2) list_single_loc_request_popup_menu_pane_g2_ParamLimits

0xb7ba,	// (0x000894b2) list_single_loc_request_popup_menu_pane_g2

0x0001,

0xf33b,	// (0x0008d033) list_single_loc_request_popup_menu_pane_g_ParamLimits

0xf33b,	// (0x0008d033) list_single_loc_request_popup_menu_pane_g

0xb7c6,	// (0x000894be) list_single_loc_request_popup_menu_pane_t1_ParamLimits

0xb7c6,	// (0x000894be) list_single_loc_request_popup_menu_pane_t1

0xade9,	// (0x00088ae1) bg_popup_window_pane_cp03_ParamLimits

0xade9,	// (0x00088ae1) bg_popup_window_pane_cp03

0x1bde,	// (0x0007f8d6) heading_loc_req_pane_ParamLimits

0x1bde,	// (0x0007f8d6) heading_loc_req_pane

0x48f5,	// (0x000825ed) popup_dyc_status_message_window_g1_ParamLimits

0x48f5,	// (0x000825ed) popup_dyc_status_message_window_g1

0x4909,	// (0x00082601) popup_dyc_status_message_window_t1_ParamLimits

0x4909,	// (0x00082601) popup_dyc_status_message_window_t1

0x491e,	// (0x00082616) popup_dyc_status_message_window_t2_ParamLimits

0x491e,	// (0x00082616) popup_dyc_status_message_window_t2

0x4933,	// (0x0008262b) popup_dyc_status_message_window_t3_ParamLimits

0x4933,	// (0x0008262b) popup_dyc_status_message_window_t3

0x0002,

0xf340,	// (0x0008d038) popup_dyc_status_message_window_t_ParamLimits

0xf340,	// (0x0008d038) popup_dyc_status_message_window_t

0xab8e,	// (0x00088886) bg_heading_pane_cp01

0xb7dc,	// (0x000894d4) heading_loc_req_pane_g1

0xb7e4,	// (0x000894dc) heading_loc_req_pane_g2

0xb7ec,	// (0x000894e4) heading_loc_req_pane_g3

0x0002,

0xf347,	// (0x0008d03f) heading_loc_req_pane_g

0xb7f4,	// (0x000894ec) heading_loc_req_pane_t1

0xb89d,	// (0x00089595) bg_popup_sub_pane_cp01_ParamLimits

0xb89d,	// (0x00089595) bg_popup_sub_pane_cp01

0xb8ab,	// (0x000895a3) popup_cale_events_window_g1_ParamLimits

0xb8ab,	// (0x000895a3) popup_cale_events_window_g1

0xb8cb,	// (0x000895c3) popup_cale_events_window_g2_ParamLimits

0xb8cb,	// (0x000895c3) popup_cale_events_window_g2

0x0001,

0xf37b,	// (0x0008d073) popup_cale_events_window_g_ParamLimits

0xf37b,	// (0x0008d073) popup_cale_events_window_g

0xb8eb,	// (0x000895e3) popup_cale_events_window_t1_ParamLimits

0xb8eb,	// (0x000895e3) popup_cale_events_window_t1

0xb8fd,	// (0x000895f5) popup_cale_events_window_t2_ParamLimits

0xb8fd,	// (0x000895f5) popup_cale_events_window_t2

0xb93b,	// (0x00089633) popup_cale_events_window_t3_ParamLimits

0xb93b,	// (0x00089633) popup_cale_events_window_t3

0xb975,	// (0x0008966d) popup_cale_events_window_t4_ParamLimits

0xb975,	// (0x0008966d) popup_cale_events_window_t4

0x0003,

0xf380,	// (0x0008d078) popup_cale_events_window_t_ParamLimits

0xf380,	// (0x0008d078) popup_cale_events_window_t

0x49c3,	// (0x000826bb) call_type_pane

0x49d3,	// (0x000826cb) popup_call_status_window_g1

0x49e7,	// (0x000826df) popup_call_status_window_g2

0x49fb,	// (0x000826f3) popup_call_status_window_g3

0x0002,

0xf389,	// (0x0008d081) popup_call_status_window_g

0xb9ab,	// (0x000896a3) call_type_pane_g1

0xb9b4,	// (0x000896ac) call_type_pane_g2

0x0001,

0xf390,	// (0x0008d088) call_type_pane_g

0xab8e,	// (0x00088886) bg_popup_sub_pane_cp02

0xb9bd,	// (0x000896b5) listscroll_popup_wml_pane

0xb9c5,	// (0x000896bd) list_wml_pane

0xb9cf,	// (0x000896c7) scroll_pane_cp013

0x4a0b,	// (0x00082703) list_single_graphic_popup_wml_pane_ParamLimits

0x4a0b,	// (0x00082703) list_single_graphic_popup_wml_pane

0xaf87,	// (0x00088c7f) list_single_graphic_popup_wml_pane_g1

0xb9d8,	// (0x000896d0) list_single_graphic_popup_wml_pane_g2

0x0001,

0xf395,	// (0x0008d08d) list_single_graphic_popup_wml_pane_g

0xb9e0,	// (0x000896d8) list_single_graphic_popup_wml_pane_t1

0xb9f6,	// (0x000896ee) aid_call_pane

0xade1,	// (0x00088ad9) popup_clock_analogue_window_g1

0xade1,	// (0x00088ad9) popup_clock_analogue_window_g2

0xb9fe,	// (0x000896f6) popup_clock_analogue_window_g3

0xb9fe,	// (0x000896f6) popup_clock_analogue_window_g4

0xaf87,	// (0x00088c7f) popup_clock_analogue_window_g5

0x0004,

0xf39a,	// (0x0008d092) popup_clock_analogue_window_g

0xba06,	// (0x000896fe) popup_clock_analogue_window_t1

0xba14,	// (0x0008970c) clock_digital_number_pane_ParamLimits

0xba14,	// (0x0008970c) clock_digital_number_pane

0xba20,	// (0x00089718) clock_digital_number_pane_cp02_ParamLimits

0xba20,	// (0x00089718) clock_digital_number_pane_cp02

0xba2c,	// (0x00089724) clock_digital_number_pane_cp03_ParamLimits

0xba2c,	// (0x00089724) clock_digital_number_pane_cp03

0xba38,	// (0x00089730) clock_digital_number_pane_cp04_ParamLimits

0xba38,	// (0x00089730) clock_digital_number_pane_cp04

0xba44,	// (0x0008973c) clock_digital_separator_pane_ParamLimits

0xba44,	// (0x0008973c) clock_digital_separator_pane

0xba50,	// (0x00089748) popup_clock_digital_window_t1

0xaf87,	// (0x00088c7f) clock_digital_number_pane_g1

0xaf87,	// (0x00088c7f) clock_digital_number_pane_g2

0x0001,

0xf308,	// (0x0008d000) clock_digital_number_pane_g

0xaf87,	// (0x00088c7f) clock_digital_separator_pane_g1

0xaf87,	// (0x00088c7f) clock_digital_separator_pane_g2

0x0001,

0xf308,	// (0x0008d000) clock_digital_separator_pane_g

0xab8e,	// (0x00088886) bg_popup_window_pane_cp04

0xba6d,	// (0x00089765) heading_pane_cp03

0xba75,	// (0x0008976d) listscroll_popup_gms_pane

0xba7d,	// (0x00089775) grid_large_graphic_popup_pane

0xba87,	// (0x0008977f) listscroll_popup_gms_pane_g1

0x0d97,	// (0x0007ea8f) listscroll_popup_gms_pane_g2

0x0001,

0xf3a5,	// (0x0008d09d) listscroll_popup_gms_pane_g

0xb402,	// (0x000890fa) scroll_pane_cp014

0x4a1e,	// (0x00082716) cell_large_graphic_popup_pane_ParamLimits

0x4a1e,	// (0x00082716) cell_large_graphic_popup_pane

0x4a34,	// (0x0008272c) cell_large_graphic_popup_pane_g1_ParamLimits

0x4a34,	// (0x0008272c) cell_large_graphic_popup_pane_g1

0x0d9f,	// (0x0007ea97) cell_large_graphic_popup_pane_g2_ParamLimits

0x0d9f,	// (0x0007ea97) cell_large_graphic_popup_pane_g2

0x0dab,	// (0x0007eaa3) cell_large_graphic_popup_pane_g3_ParamLimits

0x0dab,	// (0x0007eaa3) cell_large_graphic_popup_pane_g3

0x0db8,	// (0x0007eab0) cell_large_graphic_popup_pane_g4_ParamLimits

0x0db8,	// (0x0007eab0) cell_large_graphic_popup_pane_g4

0x0003,

0xf3aa,	// (0x0008d0a2) cell_large_graphic_popup_pane_g_ParamLimits

0xf3aa,	// (0x0008d0a2) cell_large_graphic_popup_pane_g

0x0dc8,	// (0x0007eac0) grid_highlight_pane_cp010

0xaf87,	// (0x00088c7f) bg_popup_call_pane_g1

0x0dd2,	// (0x0007eaca) list_single_graphic_popup_conf_pane_ParamLimits

0x0dd2,	// (0x0007eaca) list_single_graphic_popup_conf_pane

0x0de5,	// (0x0007eadd) list_highlight_pane_cp01

0x0dee,	// (0x0007eae6) list_single_graphic_popup_conf_pane_g1

0x0df6,	// (0x0007eaee) list_single_graphic_popup_conf_pane_g2

0x0001,

0xf3b3,	// (0x0008d0ab) list_single_graphic_popup_conf_pane_g

0x0dfe,	// (0x0007eaf6) list_single_graphic_popup_conf_pane_t1

0x0e0c,	// (0x0007eb04) linegrid_cams_pane_g1

0x4a40,	// (0x00082738) linegrid_cams_pane_g2

0xb092,	// (0x00088d8a) linegrid_cams_pane_g3

0x0e15,	// (0x0007eb0d) linegrid_cams_pane_g4

0x4a49,	// (0x00082741) linegrid_cams_pane_g5

0x4a52,	// (0x0008274a) linegrid_cams_pane_g6

0xb127,	// (0x00088e1f) linegrid_cams_pane_g7

0x0006,

0xf3b8,	// (0x0008d0b0) linegrid_cams_pane_g

0x0e1e,	// (0x0007eb16) popup_clock_analogue_window

0x0e1e,	// (0x0007eb16) popup_clock_digital_window

0xab8e,	// (0x00088886) popup_phob_thumbnail_window

0xaf87,	// (0x00088c7f) call_video_uplink_pane_g1

0x0e27,	// (0x0007eb1f) call_video_uplink_pane_g2

0x0001,

0xf3c7,	// (0x0008d0bf) call_video_uplink_pane_g

0xb0f4,	// (0x00088dec) video_uplink_pane

0x0e2f,	// (0x0007eb27) mce_image_pane_g1

0x4a5b,	// (0x00082753) mce_image_pane_g2

0x4a63,	// (0x0008275b) mce_image_pane_g3

0x4a6b,	// (0x00082763) mce_image_pane_g4

0x4a73,	// (0x0008276b) mce_image_pane_g5

0x0004,

0xf3cc,	// (0x0008d0c4) mce_image_pane_g

0x0e39,	// (0x0007eb31) control_top_pane_stacon_cp01_ParamLimits

0x0e39,	// (0x0007eb31) control_top_pane_stacon_cp01

0x0e49,	// (0x0007eb41) uni_indicator_pane_stacon_cp01_ParamLimits

0x0e49,	// (0x0007eb41) uni_indicator_pane_stacon_cp01

0x0e5a,	// (0x0007eb52) bg_popup_sub_pane_cp03

0x0e64,	// (0x0007eb5c) chi_dic_find_pane

0x4a7b,	// (0x00082773) listscroll_chi_dic_pane

0x0e6c,	// (0x0007eb64) main_pane_chidic_g1

0x0e74,	// (0x0007eb6c) chi_dic_find_pane_t1

0x0e82,	// (0x0007eb7a) find_chidic_pane

0x0e8b,	// (0x0007eb83) chi_dic_list_pane_ParamLimits

0x0e8b,	// (0x0007eb83) chi_dic_list_pane

0x0e9c,	// (0x0007eb94) scroll_pane_cp020

0x0ea4,	// (0x0007eb9c) find_chidic_pane_t1

0xab8e,	// (0x00088886) input_focus_pane_cp06

0x4a8f,	// (0x00082787) list_chi_dic_pane_ParamLimits

0x4a8f,	// (0x00082787) list_chi_dic_pane

0x4aa1,	// (0x00082799) list_chi_dic_pane_t1_ParamLimits

0x4aa1,	// (0x00082799) list_chi_dic_pane_t1

0xab8e,	// (0x00088886) list_highlight_pane_cp020

0x0eb3,	// (0x0007ebab) bg_cale_heading_pane_g1

0x4ab4,	// (0x000827ac) bg_cale_heading_pane_g2

0x4abc,	// (0x000827b4) bg_cale_heading_pane_g3

0x4ac4,	// (0x000827bc) bg_cale_heading_pane_g4

0x4ace,	// (0x000827c6) bg_cale_heading_pane_g5

0x4ad8,	// (0x000827d0) bg_cale_heading_pane_g6

0x4ae0,	// (0x000827d8) bg_cale_heading_pane_g7

0x4ae8,	// (0x000827e0) bg_cale_heading_pane_g8

0x4af2,	// (0x000827ea) bg_cale_heading_pane_g9

0x0008,

0xf3d7,	// (0x0008d0cf) bg_cale_heading_pane_g

0x0eb3,	// (0x0007ebab) bg_cale_side_pane_g1

0x4afc,	// (0x000827f4) bg_cale_side_pane_g2

0x4b04,	// (0x000827fc) bg_cale_side_pane_g3

0x4b0c,	// (0x00082804) bg_cale_side_pane_g4

0x4b14,	// (0x0008280c) bg_cale_side_pane_g5

0x4b1c,	// (0x00082814) bg_cale_side_pane_g6

0x4b24,	// (0x0008281c) bg_cale_side_pane_g7

0x4b2c,	// (0x00082824) bg_cale_side_pane_g8

0x4b34,	// (0x0008282c) bg_cale_side_pane_g9

0x0008,

0xf3ea,	// (0x0008d0e2) bg_cale_side_pane_g

0x4b3c,	// (0x00082834) popup_call_status_window_ParamLimits

0x4b3c,	// (0x00082834) popup_call_status_window

0x0ebb,	// (0x0007ebb3) stacon_top_pane

0x0ec3,	// (0x0007ebbb) status_pane_ParamLimits

0x0ec3,	// (0x0007ebbb) status_pane

0x0edd,	// (0x0007ebd5) status_small_pane

0x0ee5,	// (0x0007ebdd) control_pane

0xab8e,	// (0x00088886) stacon_bottom_pane

0x0eed,	// (0x0007ebe5) list_single_mce_smart_pane_t1_ParamLimits

0x0eed,	// (0x0007ebe5) list_single_mce_smart_pane_t1

0x0f00,	// (0x0007ebf8) list_single_mce_smart_pane_t2_ParamLimits

0x0f00,	// (0x0007ebf8) list_single_mce_smart_pane_t2

0x0001,

0xf3fd,	// (0x0008d0f5) list_single_mce_smart_pane_t_ParamLimits

0xf3fd,	// (0x0008d0f5) list_single_mce_smart_pane_t

0x4b83,	// (0x0008287b) compass_pane

0x4b8c,	// (0x00082884) main_location2_pane_t1

0x4ba2,	// (0x0008289a) main_location2_pane_t2

0x4bb8,	// (0x000828b0) main_location2_pane_t3

0x0003,

0xf402,	// (0x0008d0fa) main_location2_pane_t

0x0f28,	// (0x0007ec20) compass_pane_g1_ParamLimits

0x0f28,	// (0x0007ec20) compass_pane_g1

0x4c00,	// (0x000828f8) compass_pane_t1

0x4c0f,	// (0x00082907) compass_pane_t2

0x0005,

0xf40b,	// (0x0008d103) compass_pane_t

0x4c56,	// (0x0008294e) text_secondary_cp61

0x0f55,	// (0x0007ec4d) navi_pane_cams_g5

0x0f96,	// (0x0007ec8e) navi_pane_im_t1

0x0fa4,	// (0x0007ec9c) navi_pane_mp_g1_ParamLimits

0x0fa4,	// (0x0007ec9c) navi_pane_mp_g1

0x0fb8,	// (0x0007ecb0) navi_pane_mp_g2_ParamLimits

0x0fb8,	// (0x0007ecb0) navi_pane_mp_g2

0x0fc4,	// (0x0007ecbc) navi_pane_mp_g3_ParamLimits

0x0fc4,	// (0x0007ecbc) navi_pane_mp_g3

0x0002,

0xf41f,	// (0x0008d117) navi_pane_mp_g_ParamLimits

0xf41f,	// (0x0008d117) navi_pane_mp_g

0x0fd0,	// (0x0007ecc8) navi_pane_mp_t1

0x0fde,	// (0x0007ecd6) navi_pane_mp_t2

0x0002,

0xf426,	// (0x0008d11e) navi_pane_mp_t

0x104b,	// (0x0007ed43) navi_pane_vt_g1

0x0fd0,	// (0x0007ecc8) navi_pane_vt_t1

0x1053,	// (0x0007ed4b) navi_slider_pane

0x105b,	// (0x0007ed53) zooming_pane

0x1063,	// (0x0007ed5b) navi_slider_pane_g1

0xba8f,	// (0x00089787) navi_slider_pane_g2

0x0006,

0xf42d,	// (0x0008d125) navi_slider_pane_g

0x1087,	// (0x0007ed7f) aid_levels_zoom

0x108f,	// (0x0007ed87) zooming_pane_g1

0x1097,	// (0x0007ed8f) zooming_pane_g2

0x1097,	// (0x0007ed8f) zooming_pane_g3

0x0002,

0xf43c,	// (0x0008d134) zooming_pane_g

0x109f,	// (0x0007ed97) level_10_zoom

0x10a8,	// (0x0007eda0) level_11_zoom

0x10b1,	// (0x0007eda9) level_1_zoom

0x10ba,	// (0x0007edb2) level_2_zoom

0x10c3,	// (0x0007edbb) level_3_zoom

0x10cc,	// (0x0007edc4) level_4_zoom

0x10d5,	// (0x0007edcd) level_5_zoom

0x10de,	// (0x0007edd6) level_6_zoom

0x10e7,	// (0x0007eddf) level_7_zoom

0x10f0,	// (0x0007ede8) level_8_zoom

0x10f9,	// (0x0007edf1) level_9_zoom

0x110a,	// (0x0007ee02) popup_phob_thumbnail_window_g1

0x1112,	// (0x0007ee0a) popup_phob_thumbnail_window_g2

0x0001,

0xf443,	// (0x0008d13b) popup_phob_thumbnail_window_g

0xc2f3,	// (0x00089feb) level_1_location

0xc2fb,	// (0x00089ff3) level_2_location

0xc303,	// (0x00089ffb) level_3_location

0xc30b,	// (0x0008a003) level_4_location

0x105b,	// (0x0007ed53) level_5_location

0x4ce1,	// (0x000829d9) mce_icon_pane_g1

0x4ce9,	// (0x000829e1) mce_icon_pane_g2

0x0001,

0xf448,	// (0x0008d140) mce_icon_pane_g

0x4cf1,	// (0x000829e9) main_mup_pane_g1_ParamLimits

0x4cf1,	// (0x000829e9) main_mup_pane_g1

0x4d07,	// (0x000829ff) main_mup_pane_g2_ParamLimits

0x4d07,	// (0x000829ff) main_mup_pane_g2

0x4d1f,	// (0x00082a17) main_mup_pane_g3_ParamLimits

0x4d1f,	// (0x00082a17) main_mup_pane_g3

0x4d37,	// (0x00082a2f) main_mup_pane_g4_ParamLimits

0x4d37,	// (0x00082a2f) main_mup_pane_g4

0x4d4f,	// (0x00082a47) main_mup_pane_g5_ParamLimits

0x4d4f,	// (0x00082a47) main_mup_pane_g5

0x4d69,	// (0x00082a61) main_mup_pane_g6_ParamLimits

0x4d69,	// (0x00082a61) main_mup_pane_g6

0x4d81,	// (0x00082a79) main_mup_pane_g7_ParamLimits

0x4d81,	// (0x00082a79) main_mup_pane_g7

0x4d99,	// (0x00082a91) main_mup_pane_g8_ParamLimits

0x4d99,	// (0x00082a91) main_mup_pane_g8

0x4db1,	// (0x00082aa9) main_mup_pane_g9_ParamLimits

0x4db1,	// (0x00082aa9) main_mup_pane_g9

0x4dc5,	// (0x00082abd) main_mup_pane_g10_ParamLimits

0x4dc5,	// (0x00082abd) main_mup_pane_g10

0x4dd9,	// (0x00082ad1) main_mup_pane_g11_ParamLimits

0x4dd9,	// (0x00082ad1) main_mup_pane_g11

0x4deb,	// (0x00082ae3) main_mup_pane_g12_ParamLimits

0x4deb,	// (0x00082ae3) main_mup_pane_g12

0x4dff,	// (0x00082af7) main_mup_pane_g13_ParamLimits

0x4dff,	// (0x00082af7) main_mup_pane_g13

0x000c,

0xf44d,	// (0x0008d145) main_mup_pane_g_ParamLimits

0xf44d,	// (0x0008d145) main_mup_pane_g

0x4e11,	// (0x00082b09) main_mup_pane_t1_ParamLimits

0x4e11,	// (0x00082b09) main_mup_pane_t1

0x4e2b,	// (0x00082b23) main_mup_pane_t2_ParamLimits

0x4e2b,	// (0x00082b23) main_mup_pane_t2

0x4e43,	// (0x00082b3b) main_mup_pane_t3_ParamLimits

0x4e43,	// (0x00082b3b) main_mup_pane_t3

0x4e5b,	// (0x00082b53) main_mup_pane_t4_ParamLimits

0x4e5b,	// (0x00082b53) main_mup_pane_t4

0x4e79,	// (0x00082b71) main_mup_pane_t5_ParamLimits

0x4e79,	// (0x00082b71) main_mup_pane_t5

0x4e8e,	// (0x00082b86) main_mup_pane_t6_ParamLimits

0x4e8e,	// (0x00082b86) main_mup_pane_t6

0x0005,

0xf468,	// (0x0008d160) main_mup_pane_t_ParamLimits

0xf468,	// (0x0008d160) main_mup_pane_t

0x4ea0,	// (0x00082b98) mup_progress_pane_ParamLimits

0x4ea0,	// (0x00082b98) mup_progress_pane

0x4eac,	// (0x00082ba4) mup_visualizer_pane_ParamLimits

0x4eac,	// (0x00082ba4) mup_visualizer_pane

0x4ed4,	// (0x00082bcc) mup_volume_pane_ParamLimits

0x4ed4,	// (0x00082bcc) mup_volume_pane

0x0d89,	// (0x0007ea81) mup_visualizer_pane_g1_ParamLimits

0x0d89,	// (0x0007ea81) mup_visualizer_pane_g1

0x0d89,	// (0x0007ea81) mup_visualizer_pane_g2_ParamLimits

0x0d89,	// (0x0007ea81) mup_visualizer_pane_g2

0x0f28,	// (0x0007ec20) mup_visualizer_pane_g3_ParamLimits

0x0f28,	// (0x0007ec20) mup_visualizer_pane_g3

0x0002,

0xf475,	// (0x0008d16d) mup_visualizer_pane_g_ParamLimits

0xf475,	// (0x0008d16d) mup_visualizer_pane_g

0xaf87,	// (0x00088c7f) mup_volume_pane_g1

0x1122,	// (0x0007ee1a) mup_volume_pane_g2

0x0001,

0xf47c,	// (0x0008d174) mup_volume_pane_g

0xaf87,	// (0x00088c7f) mup_progress_pane_g1

0x112b,	// (0x0007ee23) mup_progress_pane_g2

0x1134,	// (0x0007ee2c) mup_progress_pane_g3

0x0002,

0xf481,	// (0x0008d179) mup_progress_pane_g

0xab8e,	// (0x00088886) bg_popup_window_pane_cp05

0x113d,	// (0x0007ee35) heading_pane_cp02_ParamLimits

0x113d,	// (0x0007ee35) heading_pane_cp02

0x1157,	// (0x0007ee4f) list_popup_blid_pane

0x115f,	// (0x0007ee57) list_blid_sat_info_pane_ParamLimits

0x115f,	// (0x0007ee57) list_blid_sat_info_pane

0x1172,	// (0x0007ee6a) list_blid_sat_info_pane_g1

0x117a,	// (0x0007ee72) list_blid_sat_info_pane_t1

0x4fc4,	// (0x00082cbc) mup_equalizer_pane_ParamLimits

0x4fc4,	// (0x00082cbc) mup_equalizer_pane

0x4fdd,	// (0x00082cd5) mup_equalizer_pane_cp1_ParamLimits

0x4fdd,	// (0x00082cd5) mup_equalizer_pane_cp1

0x4ff6,	// (0x00082cee) mup_equalizer_pane_cp2_ParamLimits

0x4ff6,	// (0x00082cee) mup_equalizer_pane_cp2

0x500f,	// (0x00082d07) mup_equalizer_pane_cp3_ParamLimits

0x500f,	// (0x00082d07) mup_equalizer_pane_cp3

0x5028,	// (0x00082d20) mup_equalizer_pane_cp4_ParamLimits

0x5028,	// (0x00082d20) mup_equalizer_pane_cp4

0x5041,	// (0x00082d39) mup_equalizer_pane_cp5

0x5053,	// (0x00082d4b) mup_equalizer_pane_cp6

0x5065,	// (0x00082d5d) mup_equalizer_pane_cp7

0xc1d1,	// (0x00089ec9) bg_popup_call_poc_act_pane_g9

0xc1d9,	// (0x00089ed1) bg_popup_call_poc_act_pane_g10

0xc1e1,	// (0x00089ed9) bg_popup_call_poc_act_pane_g11

0x000a,

0xade9,	// (0x00088ae1) mup_scale_pane

0xaf87,	// (0x00088c7f) mup_scale_pane_g1

0x1188,	// (0x0007ee80) mup_scale_pane_g2

0x0006,

0xf49d,	// (0x0008d195) mup_scale_pane_g

0x11ac,	// (0x0007eea4) msg_data_pane

0x11b4,	// (0x0007eeac) scroll_pane_cp017

0x508b,	// (0x00082d83) bg_list_pane_cp04_ParamLimits

0x508b,	// (0x00082d83) bg_list_pane_cp04

0x11bc,	// (0x0007eeb4) msg_data_pane_g1

0x4a5b,	// (0x00082753) msg_data_pane_g2

0x4a63,	// (0x0008275b) msg_data_pane_g3

0x50a3,	// (0x00082d9b) msg_data_pane_g4

0x4a73,	// (0x0008276b) msg_data_pane_g5

0x4ce1,	// (0x000829d9) msg_data_pane_g6

0x50ab,	// (0x00082da3) msg_data_pane_g7

0x0006,

0xf4ac,	// (0x0008d1a4) msg_data_pane_g

0x50b3,	// (0x00082dab) msg_text_pane_ParamLimits

0x50b3,	// (0x00082dab) msg_text_pane

0x50d5,	// (0x00082dcd) qrid_highlight_pane_cp011_ParamLimits

0x50d5,	// (0x00082dcd) qrid_highlight_pane_cp011

0xab8e,	// (0x00088886) msg_body_pane

0xab8e,	// (0x00088886) msg_header_pane

0x11cd,	// (0x0007eec5) input_focus_pane_cp07

0x50f7,	// (0x00082def) msg_header_pane_t1_ParamLimits

0x50f7,	// (0x00082def) msg_header_pane_t1

0x5109,	// (0x00082e01) msg_header_pane_t2_ParamLimits

0x5109,	// (0x00082e01) msg_header_pane_t2

0x0001,

0xf4c0,	// (0x0008d1b8) msg_header_pane_t_ParamLimits

0xf4c0,	// (0x0008d1b8) msg_header_pane_t

0x11e2,	// (0x0007eeda) msg_body_pane_g1

0x511b,	// (0x00082e13) msg_body_pane_t1_ParamLimits

0x511b,	// (0x00082e13) msg_body_pane_t1

0x5146,	// (0x00082e3e) msg_body_pane_t2_ParamLimits

0x5146,	// (0x00082e3e) msg_body_pane_t2

0x5158,	// (0x00082e50) msg_body_pane_t3_ParamLimits

0x5158,	// (0x00082e50) msg_body_pane_t3

0x0002,

0xf4c5,	// (0x0008d1bd) msg_body_pane_t_ParamLimits

0xf4c5,	// (0x0008d1bd) msg_body_pane_t

0x51a0,	// (0x00082e98) main_viewer_pane_g1_ParamLimits

0x51a0,	// (0x00082e98) main_viewer_pane_g1

0x51ac,	// (0x00082ea4) main_viewer_pane_g2_ParamLimits

0x51ac,	// (0x00082ea4) main_viewer_pane_g2

0x51b8,	// (0x00082eb0) main_viewer_pane_g3_ParamLimits

0x51b8,	// (0x00082eb0) main_viewer_pane_g3

0x51c7,	// (0x00082ebf) main_viewer_pane_g4_ParamLimits

0x51c7,	// (0x00082ebf) main_viewer_pane_g4

0xeafd,	// (0x0008c7f5) main_viewer_pane_g5_ParamLimits

0xeafd,	// (0x0008c7f5) main_viewer_pane_g5

0xeafd,	// (0x0008c7f5) main_viewer_pane_g7_ParamLimits

0xeafd,	// (0x0008c7f5) main_viewer_pane_g7

0xeb0f,	// (0x0008c807) main_viewer_pane_g8_ParamLimits

0xeb0f,	// (0x0008c807) main_viewer_pane_g8

0x0007,

0xf4d5,	// (0x0008d1cd) main_viewer_pane_g_ParamLimits

0xf4d5,	// (0x0008d1cd) main_viewer_pane_g

0x11ea,	// (0x0007eee2) viewer_content_pane_ParamLimits

0x11ea,	// (0x0007eee2) viewer_content_pane

0x51fb,	// (0x00082ef3) main_postcard_pane_g1_ParamLimits

0x51fb,	// (0x00082ef3) main_postcard_pane_g1

0x520f,	// (0x00082f07) main_postcard_pane_g2_ParamLimits

0x520f,	// (0x00082f07) main_postcard_pane_g2

0x5223,	// (0x00082f1b) main_postcard_pane_g3_ParamLimits

0x5223,	// (0x00082f1b) main_postcard_pane_g3

0x0005,

0xf4e6,	// (0x0008d1de) main_postcard_pane_g_ParamLimits

0xf4e6,	// (0x0008d1de) main_postcard_pane_g

0x5236,	// (0x00082f2e) main_postcard_pane_g4

0xc422,	// (0x0008a11a) smil_status_volume_pane_g2

0x5271,	// (0x00082f69) postcard_pane_ParamLimits

0x5271,	// (0x00082f69) postcard_pane

0x1206,	// (0x0007eefe) postcard_pane_g1_ParamLimits

0x1206,	// (0x0007eefe) postcard_pane_g1

0x52b1,	// (0x00082fa9) postcard_pane_g2_ParamLimits

0x52b1,	// (0x00082fa9) postcard_pane_g2

0x52bd,	// (0x00082fb5) postcard_pane_g3_ParamLimits

0x52bd,	// (0x00082fb5) postcard_pane_g3

0x11f8,	// (0x0007eef0) postcard_pane_g4_ParamLimits

0x11f8,	// (0x0007eef0) postcard_pane_g4

0x52c9,	// (0x00082fc1) postcard_pane_g5_ParamLimits

0x52c9,	// (0x00082fc1) postcard_pane_g5

0x52de,	// (0x00082fd6) postcard_pane_g6_ParamLimits

0x52de,	// (0x00082fd6) postcard_pane_g6

0x1206,	// (0x0007eefe) postcard_pane_g7_ParamLimits

0x1206,	// (0x0007eefe) postcard_pane_g7

0x0006,

0xf4f3,	// (0x0008d1eb) postcard_pane_g_ParamLimits

0xf4f3,	// (0x0008d1eb) postcard_pane_g

0x52f2,	// (0x00082fea) main_mp2_pane_g1_ParamLimits

0x52f2,	// (0x00082fea) main_mp2_pane_g1

0x52fe,	// (0x00082ff6) main_mp2_pane_g2_ParamLimits

0x52fe,	// (0x00082ff6) main_mp2_pane_g2

0x530a,	// (0x00083002) main_mp2_pane_g3_ParamLimits

0x530a,	// (0x00083002) main_mp2_pane_g3

0x0002,

0xf502,	// (0x0008d1fa) main_mp2_pane_g_ParamLimits

0xf502,	// (0x0008d1fa) main_mp2_pane_g

0x5316,	// (0x0008300e) main_mp2_pane_t1_ParamLimits

0x5316,	// (0x0008300e) main_mp2_pane_t1

0x532b,	// (0x00083023) main_mp2_pane_t2_ParamLimits

0x532b,	// (0x00083023) main_mp2_pane_t2

0x533d,	// (0x00083035) main_mp2_pane_t3_ParamLimits

0x533d,	// (0x00083035) main_mp2_pane_t3

0x0002,

0xf509,	// (0x0008d201) main_mp2_pane_t_ParamLimits

0xf509,	// (0x0008d201) main_mp2_pane_t

0x1214,	// (0x0007ef0c) pec_content_pane_ParamLimits

0x1214,	// (0x0007ef0c) pec_content_pane

0xb402,	// (0x000890fa) scroll_pane_cp015

0x1226,	// (0x0007ef1e) pec_attribute_pane_ParamLimits

0x1226,	// (0x0007ef1e) pec_attribute_pane

0x534f,	// (0x00083047) pec_content_pane_g1_ParamLimits

0x534f,	// (0x00083047) pec_content_pane_g1

0x1236,	// (0x0007ef2e) pec_content_pane_t1_ParamLimits

0x1236,	// (0x0007ef2e) pec_content_pane_t1

0x1248,	// (0x0007ef40) pec_content_pane_t2_ParamLimits

0x1248,	// (0x0007ef40) pec_content_pane_t2

0x0001,

0xf510,	// (0x0008d208) pec_content_pane_t_ParamLimits

0xf510,	// (0x0008d208) pec_content_pane_t

0x535b,	// (0x00083053) list_single_graphic_pane_cp01_ParamLimits

0x535b,	// (0x00083053) list_single_graphic_pane_cp01

0xade9,	// (0x00088ae1) bg_popup_sub_pane_cp04

0x125a,	// (0x0007ef52) popup_mup_playback_window_g1

0x1266,	// (0x0007ef5e) popup_mup_playback_window_t1

0x127b,	// (0x0007ef73) popup_mup_playback_window_t2

0x0001,

0xf515,	// (0x0008d20d) popup_mup_playback_window_t

0x12b2,	// (0x0007efaa) main_image_pane_g1_ParamLimits

0x12b2,	// (0x0007efaa) main_image_pane_g1

0x12f5,	// (0x0007efed) scroll_pane_cp018_ParamLimits

0x12f5,	// (0x0007efed) scroll_pane_cp018

0x130d,	// (0x0007f005) scroll_pane_cp016_ParamLimits

0x130d,	// (0x0007f005) scroll_pane_cp016

0x5426,	// (0x0008311e) smil2_image_pane_ParamLimits

0x5426,	// (0x0008311e) smil2_image_pane

0x544e,	// (0x00083146) smil2_root_pane_ParamLimits

0x544e,	// (0x00083146) smil2_root_pane

0x5486,	// (0x0008317e) smil2_text_pane_ParamLimits

0x5486,	// (0x0008317e) smil2_text_pane

0xab8e,	// (0x00088886) bg_list_pane_cp06

0x1349,	// (0x0007f041) grid_radio_pane

0xab8e,	// (0x00088886) bg_popup_window_pane_cp06

0x1351,	// (0x0007f049) main_fmradio_pane_t1

0xba6d,	// (0x00089765) heading_pane_cp04

0x135f,	// (0x0007f057) main_fmradio_pane_t2

0xc229,	// (0x00089f21) popup_cale_lunar_info_window_g1

0x136d,	// (0x0007f065) main_fmradio_pane_t3

0xc231,	// (0x00089f29) popup_cale_lunar_info_window_g2

0x137b,	// (0x0007f073) main_fmradio_pane_t4

0x0001,

0x1389,	// (0x0007f081) main_fmradio_pane_t5

0x0004,

0xf603,	// (0x0008d2fb) popup_cale_lunar_info_window_g

0xf52a,	// (0x0008d222) main_fmradio_pane_t

0x1397,	// (0x0007f08f) wait_bar_pane_cp03

0x0d76,	// (0x0007ea6e) cell_fmradio_pane_ParamLimits

0x0d76,	// (0x0007ea6e) cell_fmradio_pane

0x1206,	// (0x0007eefe) cell_fmradio_pane_g1_ParamLimits

0x1206,	// (0x0007eefe) cell_fmradio_pane_g1

0xab8e,	// (0x00088886) grid_highlight_pane_cp011

0x139f,	// (0x0007f097) poc_content_pane_ParamLimits

0x139f,	// (0x0007f097) poc_content_pane

0x13b2,	// (0x0007f0aa) scroll_pane_cp019

0x54f2,	// (0x000831ea) popup_call_poc_act_window_ParamLimits

0x54f2,	// (0x000831ea) popup_call_poc_act_window

0x5512,	// (0x0008320a) popup_call_poc_inact_window_ParamLimits

0x5512,	// (0x0008320a) popup_call_poc_inact_window

0xf5c7,	// (0x0008d2bf) bg_popup_call_poc_act_pane_g

0xc1e9,	// (0x00089ee1) bg_popup_call_poc_inact_pane_g1

0xc1f1,	// (0x00089ee9) bg_popup_call_poc_inact_pane_g2

0x13ba,	// (0x0007f0b2) popup_call_poc_act_window_g2

0xc1f9,	// (0x00089ef1) bg_popup_call_poc_inact_pane_g3

0xc179,	// (0x00089e71) bg_popup_call_poc_inact_pane_g4

0xc201,	// (0x00089ef9) bg_popup_call_poc_inact_pane_g5

0x13c2,	// (0x0007f0ba) popup_call_poc_act_window_t1_ParamLimits

0x13c2,	// (0x0007f0ba) popup_call_poc_act_window_t1

0x13ea,	// (0x0007f0e2) popup_call_poc_act_window_t2_ParamLimits

0x13ea,	// (0x0007f0e2) popup_call_poc_act_window_t2

0x1412,	// (0x0007f10a) popup_call_poc_act_window_t3_ParamLimits

0x1412,	// (0x0007f10a) popup_call_poc_act_window_t3

0x143a,	// (0x0007f132) popup_call_poc_act_window_t4_ParamLimits

0x143a,	// (0x0007f132) popup_call_poc_act_window_t4

0x0003,

0xf535,	// (0x0008d22d) popup_call_poc_act_window_t_ParamLimits

0xf535,	// (0x0008d22d) popup_call_poc_act_window_t

0xc209,	// (0x00089f01) bg_popup_call_poc_inact_pane_g6

0xc211,	// (0x00089f09) bg_popup_call_poc_inact_pane_g7

0xc219,	// (0x00089f11) bg_popup_call_poc_inact_pane_g8

0x144c,	// (0x0007f144) popup_call_poc_inact_window_g2

0xc221,	// (0x00089f19) bg_popup_call_poc_inact_pane_g9

0x0008,

0xf5de,	// (0x0008d2d6) bg_popup_call_poc_inact_pane_g

0x1454,	// (0x0007f14c) popup_call_poc_inact_window_t1_ParamLimits

0x1454,	// (0x0007f14c) popup_call_poc_inact_window_t1

0x1469,	// (0x0007f161) popup_call_poc_inact_window_t2_ParamLimits

0x1469,	// (0x0007f161) popup_call_poc_inact_window_t2

0x147e,	// (0x0007f176) popup_call_poc_inact_window_t3_ParamLimits

0x147e,	// (0x0007f176) popup_call_poc_inact_window_t3

0x0002,

0xf53e,	// (0x0008d236) popup_call_poc_inact_window_t_ParamLimits

0xf53e,	// (0x0008d236) popup_call_poc_inact_window_t

0xc395,	// (0x0008a08d) context_pane_ParamLimits

0x5c24,	// (0x0008391c) signal_pane_ParamLimits

0x105b,	// (0x0007ed53) main_call2_pane

0xc383,	// (0x0008a07b) popup_phob_thumbnail2_window_ParamLimits

0xc383,	// (0x0008a07b) popup_phob_thumbnail2_window

0xeae5,	// (0x0008c7dd) aid_hotspot_pointer_arrow_pane

0xeaed,	// (0x0008c7e5) aid_hotspot_pointer_hand_pane

0x57e7,	// (0x000834df) phob_pre_status_pane_g5

0x3a50,	// (0x00081748) cams_zoom_pane_ParamLimits

0x3a5f,	// (0x00081757) image_vga_pane_ParamLimits

0x3a77,	// (0x0008176f) main_camera_pane_g1_ParamLimits

0x3a87,	// (0x0008177f) main_camera_pane_g2_ParamLimits

0x3a97,	// (0x0008178f) main_camera_pane_g3_ParamLimits

0x3aa7,	// (0x0008179f) main_camera_pane_g4_ParamLimits

0x3ab7,	// (0x000817af) main_camera_pane_g5_ParamLimits

0x3ac7,	// (0x000817bf) main_camera_pane_g6_ParamLimits

0x3ad7,	// (0x000817cf) main_camera_pane_g7_ParamLimits

0xf23d,	// (0x0008cf35) main_camera_pane_g_ParamLimits

0x3ae7,	// (0x000817df) main_camera_pane_t1_ParamLimits

0x3afd,	// (0x000817f5) main_camera_pane_t2_ParamLimits

0xf24e,	// (0x0008cf46) main_camera_pane_t_ParamLimits

0xade9,	// (0x00088ae1) bg_popup_preview_window_pane_cp01_ParamLimits

0xade9,	// (0x00088ae1) bg_popup_preview_window_pane_cp01

0x1493,	// (0x0007f18b) popup_phob_thumbnail2_window_g1_ParamLimits

0x1493,	// (0x0007f18b) popup_phob_thumbnail2_window_g1

0xab8e,	// (0x00088886) call2_cli_visual_pane

0x553e,	// (0x00083236) popup_call2_audio_conf_window_ParamLimits

0x553e,	// (0x00083236) popup_call2_audio_conf_window

0x555c,	// (0x00083254) popup_call2_audio_first_window_ParamLimits

0x555c,	// (0x00083254) popup_call2_audio_first_window

0x55d2,	// (0x000832ca) popup_call2_audio_in_window_ParamLimits

0x55d2,	// (0x000832ca) popup_call2_audio_in_window

0x5606,	// (0x000832fe) popup_call2_audio_out_window_ParamLimits

0x5606,	// (0x000832fe) popup_call2_audio_out_window

0x5658,	// (0x00083350) popup_call2_audio_second_window_ParamLimits

0x5658,	// (0x00083350) popup_call2_audio_second_window

0x56aa,	// (0x000833a2) popup_call2_audio_wait_window_ParamLimits

0x56aa,	// (0x000833a2) popup_call2_audio_wait_window

0xab8e,	// (0x00088886) bg_popup_call2_act_pane_cp03

0xadcb,	// (0x00088ac3) list_conf_pane_cp

0x149f,	// (0x0007f197) popup_call2_audio_conf_window_t1

0x0dd2,	// (0x0007eaca) list_single_graphic_popup_conf2_pane_ParamLimits

0x0dd2,	// (0x0007eaca) list_single_graphic_popup_conf2_pane

0x0de5,	// (0x0007eadd) list_highlight_pane_cp04

0x14ad,	// (0x0007f1a5) list_single_graphic_popup_conf2_pane_g1

0x0df6,	// (0x0007eaee) list_single_graphic_popup_conf2_pane_g2

0x0001,

0xf545,	// (0x0008d23d) list_single_graphic_popup_conf2_pane_g

0x14b5,	// (0x0007f1ad) list_single_graphic_popup_conf2_pane_t1

0x14c3,	// (0x0007f1bb) bg_popup_call2_act_pane_cp01_ParamLimits

0x14c3,	// (0x0007f1bb) bg_popup_call2_act_pane_cp01

0x154d,	// (0x0007f245) call_type_pane_cp05_ParamLimits

0x154d,	// (0x0007f245) call_type_pane_cp05

0x15a1,	// (0x0007f299) popup_call2_audio_second_window_g1_ParamLimits

0x15a1,	// (0x0007f299) popup_call2_audio_second_window_g1

0x15f5,	// (0x0007f2ed) popup_call2_audio_second_window_g2_ParamLimits

0x15f5,	// (0x0007f2ed) popup_call2_audio_second_window_g2

0x0002,

0xf54a,	// (0x0008d242) popup_call2_audio_second_window_g_ParamLimits

0xf54a,	// (0x0008d242) popup_call2_audio_second_window_g

0x165a,	// (0x0007f352) popup_call2_audio_second_window_t1_ParamLimits

0x165a,	// (0x0007f352) popup_call2_audio_second_window_t1

0x1715,	// (0x0007f40d) popup_call2_audio_second_window_t2_ParamLimits

0x1715,	// (0x0007f40d) popup_call2_audio_second_window_t2

0x1768,	// (0x0007f460) popup_call2_audio_second_window_t3_ParamLimits

0x1768,	// (0x0007f460) popup_call2_audio_second_window_t3

0x0003,

0xf551,	// (0x0008d249) popup_call2_audio_second_window_t_ParamLimits

0xf551,	// (0x0008d249) popup_call2_audio_second_window_t

0xab8e,	// (0x00088886) bg_popup_call2_in_pane_cp02

0xab98,	// (0x00088890) call_type_pane_cp04

0xaba0,	// (0x00088898) popup_call2_audio_wait_window_g1

0xaba8,	// (0x000888a0) popup_call2_audio_wait_window_g2

0x0001,

0xf12a,	// (0x0008ce22) popup_call2_audio_wait_window_g

0xabb0,	// (0x000888a8) popup_call2_audio_wait_window_t3

0x185b,	// (0x0007f553) bg_popup_call2_act_pane_ParamLimits

0x185b,	// (0x0007f553) bg_popup_call2_act_pane

0x191b,	// (0x0007f613) call_type_pane_cp03_ParamLimits

0x191b,	// (0x0007f613) call_type_pane_cp03

0x197f,	// (0x0007f677) popup_call2_audio_first_window_g1_ParamLimits

0x197f,	// (0x0007f677) popup_call2_audio_first_window_g1

0x19ef,	// (0x0007f6e7) popup_call2_audio_first_window_g2_ParamLimits

0x19ef,	// (0x0007f6e7) popup_call2_audio_first_window_g2

0x0d89,	// (0x0007ea81) popup_call2_audio_first_window_g3_ParamLimits

0x0d89,	// (0x0007ea81) popup_call2_audio_first_window_g3

0x0004,

0xf55a,	// (0x0008d252) popup_call2_audio_first_window_g_ParamLimits

0xf55a,	// (0x0008d252) popup_call2_audio_first_window_g

0x1acd,	// (0x0007f7c5) popup_call2_audio_first_window_t1_ParamLimits

0x1acd,	// (0x0007f7c5) popup_call2_audio_first_window_t1

0xbaa9,	// (0x000897a1) popup_call2_audio_first_window_t4_ParamLimits

0xbaa9,	// (0x000897a1) popup_call2_audio_first_window_t4

0xbb8c,	// (0x00089884) popup_call2_audio_first_window_t5_ParamLimits

0xbb8c,	// (0x00089884) popup_call2_audio_first_window_t5

0x0003,

0xf565,	// (0x0008d25d) popup_call2_audio_first_window_t_ParamLimits

0xf565,	// (0x0008d25d) popup_call2_audio_first_window_t

0xade1,	// (0x00088ad9) bg_popup_call2_act_pane_g1

0xc239,	// (0x00089f31) popup_cale_lunar_info_window_t1

0xc247,	// (0x00089f3f) popup_cale_lunar_info_window_t2

0xc255,	// (0x00089f4d) popup_cale_lunar_info_window_t3

0xab8e,	// (0x00088886) bg_popup_call2_bubble_pane

0xbc8d,	// (0x00089985) bg_popup_call2_in_pane_cp01_ParamLimits

0xbc8d,	// (0x00089985) bg_popup_call2_in_pane_cp01

0xa86a,	// (0x00088562) call_type_pane_cp02

0xbcd5,	// (0x000899cd) popup_call2_audio_out_window_g1_ParamLimits

0xbcd5,	// (0x000899cd) popup_call2_audio_out_window_g1

0xbd01,	// (0x000899f9) popup_call2_audio_out_window_g2_ParamLimits

0xbd01,	// (0x000899f9) popup_call2_audio_out_window_g2

0xbd29,	// (0x00089a21) popup_call2_audio_out_window_g3_ParamLimits

0xbd29,	// (0x00089a21) popup_call2_audio_out_window_g3

0x0003,

0xf56e,	// (0x0008d266) popup_call2_audio_out_window_g_ParamLimits

0xf56e,	// (0x0008d266) popup_call2_audio_out_window_g

0xbd64,	// (0x00089a5c) popup_call2_audio_out_window_t1_ParamLimits

0xbd64,	// (0x00089a5c) popup_call2_audio_out_window_t1

0xbdc3,	// (0x00089abb) popup_call2_audio_out_window_t2_ParamLimits

0xbdc3,	// (0x00089abb) popup_call2_audio_out_window_t2

0xbe17,	// (0x00089b0f) popup_call2_audio_out_window_t3_ParamLimits

0xbe17,	// (0x00089b0f) popup_call2_audio_out_window_t3

0xbe2d,	// (0x00089b25) popup_call2_audio_out_window_t4_ParamLimits

0xbe2d,	// (0x00089b25) popup_call2_audio_out_window_t4

0xbe43,	// (0x00089b3b) popup_call2_audio_out_window_t5_ParamLimits

0xbe43,	// (0x00089b3b) popup_call2_audio_out_window_t5

0x0005,

0xf577,	// (0x0008d26f) popup_call2_audio_out_window_t_ParamLimits

0xf577,	// (0x0008d26f) popup_call2_audio_out_window_t

0xbea7,	// (0x00089b9f) bg_popup_call2_in_pane_ParamLimits

0xbea7,	// (0x00089b9f) bg_popup_call2_in_pane

0xbf03,	// (0x00089bfb) popup_call2_audio_in_window_g1_ParamLimits

0xbf03,	// (0x00089bfb) popup_call2_audio_in_window_g1

0xbf3b,	// (0x00089c33) popup_call2_audio_in_window_g2_ParamLimits

0xbf3b,	// (0x00089c33) popup_call2_audio_in_window_g2

0xbf73,	// (0x00089c6b) popup_call2_audio_in_window_g3_ParamLimits

0xbf73,	// (0x00089c6b) popup_call2_audio_in_window_g3

0x0003,

0xf584,	// (0x0008d27c) popup_call2_audio_in_window_g_ParamLimits

0xf584,	// (0x0008d27c) popup_call2_audio_in_window_g

0xbfcb,	// (0x00089cc3) popup_call2_audio_in_window_t1_ParamLimits

0xbfcb,	// (0x00089cc3) popup_call2_audio_in_window_t1

0xc04b,	// (0x00089d43) popup_call2_audio_in_window_t2_ParamLimits

0xc04b,	// (0x00089d43) popup_call2_audio_in_window_t2

0xc0cb,	// (0x00089dc3) popup_call2_audio_in_window_t3_ParamLimits

0xc0cb,	// (0x00089dc3) popup_call2_audio_in_window_t3

0xc0e5,	// (0x00089ddd) popup_call2_audio_in_window_t4_ParamLimits

0xc0e5,	// (0x00089ddd) popup_call2_audio_in_window_t4

0xc0f7,	// (0x00089def) popup_call2_audio_in_window_t5_ParamLimits

0xc0f7,	// (0x00089def) popup_call2_audio_in_window_t5

0xc10c,	// (0x00089e04) popup_call2_audio_in_window_t6_ParamLimits

0xc10c,	// (0x00089e04) popup_call2_audio_in_window_t6

0x0005,

0xf58d,	// (0x0008d285) popup_call2_audio_in_window_t_ParamLimits

0xf58d,	// (0x0008d285) popup_call2_audio_in_window_t

0xade1,	// (0x00088ad9) bg_popup_call2_in_pane_g1

0xc263,	// (0x00089f5b) popup_cale_lunar_info_window_t4

0x0003,

0xf608,	// (0x0008d300) popup_cale_lunar_info_window_t

0xade9,	// (0x00088ae1) bg_popup_call2_rect_pane_ParamLimits

0xade9,	// (0x00088ae1) bg_popup_call2_rect_pane

0xab8e,	// (0x00088886) call2_cli_visual_graphic_pane

0xab8e,	// (0x00088886) call2_cli_visual_text_pane

0xeb27,	// (0x0008c81f) smil_status_volume_pane_g3

0x0002,

0xaf87,	// (0x00088c7f) call2_cli_visual_graphic_pane_g1

0xaf87,	// (0x00088c7f) call2_cli_visual_graphic_pane_g2

0xaf87,	// (0x00088c7f) call2_cli_visual_graphic_pane_g3

0x0002,

0xf59a,	// (0x0008d292) call2_cli_visual_graphic_pane_g

0xc121,	// (0x00089e19) bg_popup_call2_rect_pane_g1

0xb02f,	// (0x00088d27) bg_popup_call2_rect_pane_g2

0xc129,	// (0x00089e21) bg_popup_call2_rect_pane_g3

0xc131,	// (0x00089e29) bg_popup_call2_rect_pane_g4

0xc139,	// (0x00089e31) bg_popup_call2_rect_pane_g5

0xc141,	// (0x00089e39) bg_popup_call2_rect_pane_g6

0xc149,	// (0x00089e41) bg_popup_call2_rect_pane_g7

0xc151,	// (0x00089e49) bg_popup_call2_rect_pane_g8

0xc159,	// (0x00089e51) bg_popup_call2_rect_pane_g9

0x0008,

0xf5a1,	// (0x0008d299) bg_popup_call2_rect_pane_g

0xc161,	// (0x00089e59) bg_popup_call2_bubble_pane_g1

0xc169,	// (0x00089e61) bg_popup_call2_bubble_pane_g2

0xc171,	// (0x00089e69) bg_popup_call2_bubble_pane_g3

0xc179,	// (0x00089e71) bg_popup_call2_bubble_pane_g4

0xc181,	// (0x00089e79) bg_popup_call2_bubble_pane_g5

0xc189,	// (0x00089e81) bg_popup_call2_bubble_pane_g6

0xc191,	// (0x00089e89) bg_popup_call2_bubble_pane_g7

0xc199,	// (0x00089e91) bg_popup_call2_bubble_pane_g8

0xc1a1,	// (0x00089e99) bg_popup_call2_bubble_pane_g9

0x0008,

0xf5b4,	// (0x0008d2ac) bg_popup_call2_bubble_pane_g

0x3573,	// (0x0008126b) aid_cale_week_size_cell_pane

0x3b13,	// (0x0008180b) aid_cams_cif_uncrop_pane_ParamLimits

0x3b13,	// (0x0008180b) aid_cams_cif_uncrop_pane

0x3cb4,	// (0x000819ac) aid_cams_size_cell_ParamLimits

0x3cb4,	// (0x000819ac) aid_cams_size_cell

0x3cc8,	// (0x000819c0) grid_cams_pane_ParamLimits

0x3cdd,	// (0x000819d5) linegrid_cams_pane_ParamLimits

0x3de4,	// (0x00081adc) call_video_pane_t1

0x3df6,	// (0x00081aee) call_video_pane_t2

0x0001,

0xf2a1,	// (0x0008cf99) call_video_pane_t

0x40fd,	// (0x00081df5) aid_cale_month_size_cell_pane_ParamLimits

0x40fd,	// (0x00081df5) aid_cale_month_size_cell_pane

0xf651,	// (0x0008d349) smil_status_volume_pane_g

0xeb34,	// (0x0008c82c) volume_smil_pane_ParamLimits

0xa734,	// (0x0008842c) aid_popup2_width_pane

0x34ed,	// (0x000811e5) cell_qdial_pane_g4_ParamLimits

0x34ed,	// (0x000811e5) cell_qdial_pane_g4

0x4be0,	// (0x000828d8) aid_blid_cardinal_pane_ParamLimits

0x4bec,	// (0x000828e4) aid_blid_destination_pane_ParamLimits

0x4bec,	// (0x000828e4) aid_blid_destination_pane

0xade9,	// (0x00088ae1) bg_popup_call_poc_act_pane_ParamLimits

0xade9,	// (0x00088ae1) bg_popup_call_poc_act_pane

0xade9,	// (0x00088ae1) bg_popup_call_poc_inact_pane_ParamLimits

0xade9,	// (0x00088ae1) bg_popup_call_poc_inact_pane

0xc1a9,	// (0x00089ea1) bg_popup_call_poc_act_pane_g1

0xc1b1,	// (0x00089ea9) bg_popup_call_poc_act_pane_g2

0xc1b9,	// (0x00089eb1) bg_popup_call_poc_act_pane_g3

0xc179,	// (0x00089e71) bg_popup_call_poc_act_pane_g4

0xc181,	// (0x00089e79) bg_popup_call_poc_act_pane_g5

0xc1c1,	// (0x00089eb9) bg_popup_call_poc_act_pane_g6

0xc191,	// (0x00089e89) bg_popup_call_poc_act_pane_g7

0xc1c9,	// (0x00089ec1) bg_popup_call_poc_act_pane_g8

0xab8e,	// (0x00088886) main_usb_pane

0xc362,	// (0x0008a05a) popup_cale_lunar_info_window

0x3fbd,	// (0x00081cb5) im_reading_pane_t1_ParamLimits

0xb34b,	// (0x00089043) list_im_pane_ParamLimits

0xb35c,	// (0x00089054) scroll_pane_cp07_ParamLimits

0xab8e,	// (0x00088886) grid_highlight_pane_cp012

0xade9,	// (0x00088ae1) mup_scale_pane_ParamLimits

0x1206,	// (0x0007eefe) main_usb_pane_g1_ParamLimits

0x1206,	// (0x0007eefe) main_usb_pane_g1

0x5704,	// (0x000833fc) main_usb_pane_g2_ParamLimits

0x5704,	// (0x000833fc) main_usb_pane_g2

0x0001,

0xf5f1,	// (0x0008d2e9) main_usb_pane_g_ParamLimits

0xf5f1,	// (0x0008d2e9) main_usb_pane_g

0x5718,	// (0x00083410) main_usb_pane_t1_ParamLimits

0x5718,	// (0x00083410) main_usb_pane_t1

0x572a,	// (0x00083422) main_usb_pane_t2_ParamLimits

0x572a,	// (0x00083422) main_usb_pane_t2

0x573c,	// (0x00083434) main_usb_pane_t3_ParamLimits

0x573c,	// (0x00083434) main_usb_pane_t3

0x574e,	// (0x00083446) main_usb_pane_t4_ParamLimits

0x574e,	// (0x00083446) main_usb_pane_t4

0x5760,	// (0x00083458) main_usb_pane_t5_ParamLimits

0x5760,	// (0x00083458) main_usb_pane_t5

0x5772,	// (0x0008346a) main_usb_pane_t6_ParamLimits

0x5772,	// (0x0008346a) main_usb_pane_t6

0x0005,

0xf5f6,	// (0x0008d2ee) main_usb_pane_t_ParamLimits

0x0f1f,	// (0x0007ec17) aid_text_placing

0x4b8c,	// (0x00082884) main_location2_pane_t1_ParamLimits

0x4ba2,	// (0x0008289a) main_location2_pane_t2_ParamLimits

0x4bb8,	// (0x000828b0) main_location2_pane_t3_ParamLimits

0x4bce,	// (0x000828c6) main_location2_pane_t4_ParamLimits

0x4bce,	// (0x000828c6) main_location2_pane_t4

0xf402,	// (0x0008d0fa) main_location2_pane_t_ParamLimits

0xae25,	// (0x00088b1d) find_pinb_pane_g2_ParamLimits

0xae25,	// (0x00088b1d) find_pinb_pane_g2

0x0001,

0xf150,	// (0x0008ce48) find_pinb_pane_g_ParamLimits

0xf150,	// (0x0008ce48) find_pinb_pane_g

0xae31,	// (0x00088b29) find_pinb_pane_t1_ParamLimits

0xae43,	// (0x00088b3b) find_pinb_pane_t2_ParamLimits

0xf155,	// (0x0008ce4d) find_pinb_pane_t_ParamLimits

0xab8e,	// (0x00088886) main_call3_pane

0x4439,	// (0x00082131) cale_month_day_heading_pane_t1_ParamLimits

0x4497,	// (0x0008218f) cale_month_day_heading_pane_t2_ParamLimits

0x44fc,	// (0x000821f4) cale_month_day_heading_pane_t3_ParamLimits

0x4561,	// (0x00082259) cale_month_day_heading_pane_t4_ParamLimits

0x45c6,	// (0x000822be) cale_month_day_heading_pane_t5_ParamLimits

0x462b,	// (0x00082323) cale_month_day_heading_pane_t6_ParamLimits

0x4690,	// (0x00082388) cale_month_day_heading_pane_t7_ParamLimits

0xf2d9,	// (0x0008cfd1) cale_month_day_heading_pane_t_ParamLimits

0xb5e2,	// (0x000892da) smil_status_volume_pane

0x528d,	// (0x00082f85) postcard_address_pane_ParamLimits

0x528d,	// (0x00082f85) postcard_address_pane

0x529f,	// (0x00082f97) postcard_message_pane_ParamLimits

0x529f,	// (0x00082f97) postcard_message_pane

0x56e2,	// (0x000833da) call2_cli_visual_pane_t1_ParamLimits

0x56e2,	// (0x000833da) call2_cli_visual_pane_t1

0x5e40,	// (0x00083b38) postcard_message_pane_t1_ParamLimits

0x5e40,	// (0x00083b38) postcard_message_pane_t1

0x5e29,	// (0x00083b21) postcard_address_pane_t1_ParamLimits

0x5e29,	// (0x00083b21) postcard_address_pane_t1

0x5e17,	// (0x00083b0f) popup_call3_audio_in_window_ParamLimits

0x5e17,	// (0x00083b0f) popup_call3_audio_in_window

0x5ca6,	// (0x0008399e) bg_popup_call3_in_pane_ParamLimits

0x5ca6,	// (0x0008399e) bg_popup_call3_in_pane

0x5d18,	// (0x00083a10) popup_call3_audio_in_window_g1_ParamLimits

0x5d18,	// (0x00083a10) popup_call3_audio_in_window_g1

0x5d38,	// (0x00083a30) popup_call3_audio_in_window_g2_ParamLimits

0x5d38,	// (0x00083a30) popup_call3_audio_in_window_g2

0x5d58,	// (0x00083a50) popup_call3_audio_in_window_g3_ParamLimits

0x5d58,	// (0x00083a50) popup_call3_audio_in_window_g3

0x0003,

0xf658,	// (0x0008d350) popup_call3_audio_in_window_g_ParamLimits

0xf658,	// (0x0008d350) popup_call3_audio_in_window_g

0x5d89,	// (0x00083a81) popup_call3_audio_in_window_t1_ParamLimits

0x5d89,	// (0x00083a81) popup_call3_audio_in_window_t1

0x5dc7,	// (0x00083abf) popup_call3_audio_in_window_t2_ParamLimits

0x5dc7,	// (0x00083abf) popup_call3_audio_in_window_t2

0x5e05,	// (0x00083afd) popup_call3_audio_in_window_t3_ParamLimits

0x5e05,	// (0x00083afd) popup_call3_audio_in_window_t3

0x0002,

0xf661,	// (0x0008d359) popup_call3_audio_in_window_t_ParamLimits

0xf661,	// (0x0008d359) popup_call3_audio_in_window_t

0x105b,	// (0x0007ed53) bg_popup_call3_rect_pane

0xc121,	// (0x00089e19) bg_popup_call3_rect_pane_g1

0xb02f,	// (0x00088d27) bg_popup_call3_rect_pane_g2

0xc129,	// (0x00089e21) bg_popup_call3_rect_pane_g3

0xc131,	// (0x00089e29) bg_popup_call3_rect_pane_g4

0xc139,	// (0x00089e31) bg_popup_call3_rect_pane_g5

0xc141,	// (0x00089e39) bg_popup_call3_rect_pane_g6

0xc149,	// (0x00089e41) bg_popup_call3_rect_pane_g7

0x4eea,	// (0x00082be2) mup_visualizer_osc_pane

0x111a,	// (0x0007ee12) mup_visualizer_spec_pane

0x5cd6,	// (0x000839ce) call3_video_qcif_pane_ParamLimits

0x5cd6,	// (0x000839ce) call3_video_qcif_pane

0x5ce7,	// (0x000839df) call3_video_qcif_uncrop_pane_ParamLimits

0x5ce7,	// (0x000839df) call3_video_qcif_uncrop_pane

0x5cf3,	// (0x000839eb) call3_video_subqcif_pane_ParamLimits

0x5cf3,	// (0x000839eb) call3_video_subqcif_pane

0x5d07,	// (0x000839ff) call3_video_subqcif_uncrop_pane_ParamLimits

0x5d07,	// (0x000839ff) call3_video_subqcif_uncrop_pane

0x5d78,	// (0x00083a70) popup_call3_audio_in_window_g4_ParamLimits

0x5d78,	// (0x00083a70) popup_call3_audio_in_window_g4

0x5c95,	// (0x0008398d) mup_spec_half_pane

0x5c9e,	// (0x00083996) mup_spec_half_pane_cp

0xc3f5,	// (0x0008a0ed) mup_osc_middle_pane

0xc3fe,	// (0x0008a0f6) mup_visualizer_osc_pane_g1

0x5c76,	// (0x0008396e) mup_spec_bar_pane_ParamLimits

0x5c76,	// (0x0008396e) mup_spec_bar_pane

0xc3e2,	// (0x0008a0da) mup_spec_bar_pane_g1

0xc3ec,	// (0x0008a0e4) mup_spec_bar_pane_g2

0x0001,

0xf64c,	// (0x0008d344) mup_spec_bar_pane_g

0x3573,	// (0x0008126b) aid_cale_week_size_cell_pane_ParamLimits

0x3586,	// (0x0008127e) bg_cale_heading_pane_ParamLimits

0xb0bb,	// (0x00088db3) bg_cale_pane_cp01_ParamLimits

0x359a,	// (0x00081292) cale_week_corner_pane_ParamLimits

0x35b0,	// (0x000812a8) cale_week_day_heading_pane_ParamLimits

0x35c4,	// (0x000812bc) cale_week_scroll_pane_g1_ParamLimits

0x35d5,	// (0x000812cd) cale_week_scroll_pane_g2_ParamLimits

0x35e6,	// (0x000812de) cale_week_scroll_pane_g3_ParamLimits

0x35f7,	// (0x000812ef) cale_week_scroll_pane_g4_ParamLimits

0x3608,	// (0x00081300) cale_week_scroll_pane_g5_ParamLimits

0x3619,	// (0x00081311) cale_week_scroll_pane_g6_ParamLimits

0x362a,	// (0x00081322) cale_week_scroll_pane_g7_ParamLimits

0x363b,	// (0x00081333) cale_week_scroll_pane_g8_ParamLimits

0x364e,	// (0x00081346) cale_week_scroll_pane_g9_ParamLimits

0x365f,	// (0x00081357) cale_week_scroll_pane_g10_ParamLimits

0x3670,	// (0x00081368) cale_week_scroll_pane_g11_ParamLimits

0x3681,	// (0x00081379) cale_week_scroll_pane_g12_ParamLimits

0x3692,	// (0x0008138a) cale_week_scroll_pane_g13_ParamLimits

0x36a3,	// (0x0008139b) cale_week_scroll_pane_g14_ParamLimits

0x36b4,	// (0x000813ac) cale_week_scroll_pane_g15_ParamLimits

0xf1e1,	// (0x0008ced9) cale_week_scroll_pane_g_ParamLimits

0x36c5,	// (0x000813bd) cale_week_time_pane_ParamLimits

0x36d8,	// (0x000813d0) grid_cale_week_pane_ParamLimits

0xb0d4,	// (0x00088dcc) listscroll_cale_week_pane_t1

0x36eb,	// (0x000813e3) scroll_pane_cp08_ParamLimits

0x413e,	// (0x00081e36) cale_month_corner_pane_ParamLimits

0xb582,	// (0x0008927a) cale_month_pane_t1

0x43f8,	// (0x000820f0) cale_month_week_pane_ParamLimits

0x49d3,	// (0x000826cb) popup_call_status_window_g1_ParamLimits

0x49e7,	// (0x000826df) popup_call_status_window_g2_ParamLimits

0x49fb,	// (0x000826f3) popup_call_status_window_g3_ParamLimits

0xf389,	// (0x0008d081) popup_call_status_window_g_ParamLimits

0xb9ee,	// (0x000896e6) aid_call2_pane

0x50eb,	// (0x00082de3) msg_header_pane_g1

0x528d,	// (0x00082f85) postcard_address2_pane_ParamLimits

0x528d,	// (0x00082f85) postcard_address2_pane

0x529f,	// (0x00082f97) postcard_message2_pane_ParamLimits

0x529f,	// (0x00082f97) postcard_message2_pane

0x5c32,	// (0x0008392a) message2_row_pane_ParamLimits

0x5c32,	// (0x0008392a) message2_row_pane

0x5c4c,	// (0x00083944) address2_row_pane_ParamLimits

0x5c4c,	// (0x00083944) address2_row_pane

0xc3b0,	// (0x0008a0a8) postcard_message2_row_pane_g1

0xc3b8,	// (0x0008a0b0) postcard_message2_row_pane_t1

0xc3b0,	// (0x0008a0a8) address2_row_pane_g1

0xc3b8,	// (0x0008a0b0) address2_row_pane_t1

0x3a1b,	// (0x00081713) aid_size_cell_vorec

0xab8e,	// (0x00088886) main_rss_pane

0x5c5f,	// (0x00083957) rss_list_single_pane_ParamLimits

0x5c5f,	// (0x00083957) rss_list_single_pane

0xc3c6,	// (0x0008a0be) rss_list_single_pane_t1

0xc3d4,	// (0x0008a0cc) rss_list_single_pane_t2

0x0001,

0xf647,	// (0x0008d33f) rss_list_single_pane_t

0xab8e,	// (0x00088886) main_camera2_pane

0xab8e,	// (0x00088886) main_video2_pane

0x5e99,	// (0x00083b91) cams_zoom_pane_cp2_ParamLimits

0x5e99,	// (0x00083b91) cams_zoom_pane_cp2

0x5eb0,	// (0x00083ba8) image2_vga_pane_ParamLimits

0x5eb0,	// (0x00083ba8) image2_vga_pane

0x5ee6,	// (0x00083bde) main_camera2_pane_g1_ParamLimits

0x5ee6,	// (0x00083bde) main_camera2_pane_g1

0x5f06,	// (0x00083bfe) main_camera2_pane_g2_ParamLimits

0x5f06,	// (0x00083bfe) main_camera2_pane_g2

0x5f1d,	// (0x00083c15) main_camera2_pane_g3_ParamLimits

0x5f1d,	// (0x00083c15) main_camera2_pane_g3

0x5f34,	// (0x00083c2c) main_camera2_pane_g4_ParamLimits

0x5f34,	// (0x00083c2c) main_camera2_pane_g4

0x5f4b,	// (0x00083c43) main_camera2_pane_g5_ParamLimits

0x5f4b,	// (0x00083c43) main_camera2_pane_g5

0x5f62,	// (0x00083c5a) main_camera2_pane_g6_ParamLimits

0x5f62,	// (0x00083c5a) main_camera2_pane_g6

0x5f79,	// (0x00083c71) main_camera2_pane_g7_ParamLimits

0x5f79,	// (0x00083c71) main_camera2_pane_g7

0x5f90,	// (0x00083c88) main_camera2_pane_g8_ParamLimits

0x5f90,	// (0x00083c88) main_camera2_pane_g8

0x0008,

0xf668,	// (0x0008d360) main_camera2_pane_g_ParamLimits

0xf668,	// (0x0008d360) main_camera2_pane_g

0x5fbe,	// (0x00083cb6) main_camera2_pane_t1_ParamLimits

0x5fbe,	// (0x00083cb6) main_camera2_pane_t1

0x5fed,	// (0x00083ce5) main_camera2_pane_t2_ParamLimits

0x5fed,	// (0x00083ce5) main_camera2_pane_t2

0x600a,	// (0x00083d02) main_camera2_pane_t3_ParamLimits

0x600a,	// (0x00083d02) main_camera2_pane_t3

0x6056,	// (0x00083d4e) main_camera2_pane_t4_ParamLimits

0x6056,	// (0x00083d4e) main_camera2_pane_t4

0x0006,

0xf67b,	// (0x0008d373) main_camera2_pane_t_ParamLimits

0xf67b,	// (0x0008d373) main_camera2_pane_t

0x60cb,	// (0x00083dc3) cams_zoom_pane_cp4_ParamLimits

0x60cb,	// (0x00083dc3) cams_zoom_pane_cp4

0x60e1,	// (0x00083dd9) image2_cif_pane_ParamLimits

0x60e1,	// (0x00083dd9) image2_cif_pane

0x6104,	// (0x00083dfc) image2_subqcif_pane_ParamLimits

0x6104,	// (0x00083dfc) image2_subqcif_pane

0x611a,	// (0x00083e12) main_video2_pane_g1_ParamLimits

0x611a,	// (0x00083e12) main_video2_pane_g1

0x6134,	// (0x00083e2c) main_video2_pane_g2_ParamLimits

0x6134,	// (0x00083e2c) main_video2_pane_g2

0x614a,	// (0x00083e42) main_video2_pane_g3_ParamLimits

0x614a,	// (0x00083e42) main_video2_pane_g3

0x6160,	// (0x00083e58) main_video2_pane_g4_ParamLimits

0x6160,	// (0x00083e58) main_video2_pane_g4

0x6176,	// (0x00083e6e) main_video2_pane_g5_ParamLimits

0x6176,	// (0x00083e6e) main_video2_pane_g5

0x618c,	// (0x00083e84) main_video2_pane_g6_ParamLimits

0x618c,	// (0x00083e84) main_video2_pane_g6

0x0005,

0xf68a,	// (0x0008d382) main_video2_pane_g_ParamLimits

0xf68a,	// (0x0008d382) main_video2_pane_g

0x61a6,	// (0x00083e9e) main_video2_pane_t1_ParamLimits

0x61a6,	// (0x00083e9e) main_video2_pane_t1

0x61ca,	// (0x00083ec2) main_video2_pane_t2_ParamLimits

0x61ca,	// (0x00083ec2) main_video2_pane_t2

0x6214,	// (0x00083f0c) main_video2_pane_t3_ParamLimits

0x6214,	// (0x00083f0c) main_video2_pane_t3

0x0002,

0xf697,	// (0x0008d38f) main_video2_pane_t_ParamLimits

0xf697,	// (0x0008d38f) main_video2_pane_t

0x5821,	// (0x00083519) call_muted_g2

0x0001,

0xf639,	// (0x0008d331) call_muted_g

0xab8e,	// (0x00088886) main_mup2_pane

0x6256,	// (0x00083f4e) main_mup2_pane_g1_ParamLimits

0x6256,	// (0x00083f4e) main_mup2_pane_g1

0x6262,	// (0x00083f5a) main_mup2_pane_g2_ParamLimits

0x6262,	// (0x00083f5a) main_mup2_pane_g2

0xeb9d,	// (0x0008c895) main_mup_pane_g13_cp1

0xeba5,	// (0x0008c89d) mup_volume_pane_cp1

0x627e,	// (0x00083f76) main_mup2_pane_g4_ParamLimits

0x627e,	// (0x00083f76) main_mup2_pane_g4

0x628e,	// (0x00083f86) main_mup2_pane_g5_ParamLimits

0x628e,	// (0x00083f86) main_mup2_pane_g5

0x629e,	// (0x00083f96) main_mup2_pane_g6_ParamLimits

0x629e,	// (0x00083f96) main_mup2_pane_g6

0x62ae,	// (0x00083fa6) main_mup2_pane_g7_ParamLimits

0x62ae,	// (0x00083fa6) main_mup2_pane_g7

0x0006,

0xf69e,	// (0x0008d396) main_mup2_pane_g_ParamLimits

0xf69e,	// (0x0008d396) main_mup2_pane_g

0x62c6,	// (0x00083fbe) main_mup2_pane_t1_ParamLimits

0x62c6,	// (0x00083fbe) main_mup2_pane_t1

0x62dc,	// (0x00083fd4) main_mup2_pane_t2_ParamLimits

0x62dc,	// (0x00083fd4) main_mup2_pane_t2

0x62f2,	// (0x00083fea) main_mup2_pane_t3_ParamLimits

0x62f2,	// (0x00083fea) main_mup2_pane_t3

0x6308,	// (0x00084000) main_mup2_pane_t4_ParamLimits

0x6308,	// (0x00084000) main_mup2_pane_t4

0x6320,	// (0x00084018) main_mup2_pane_t5_ParamLimits

0x6320,	// (0x00084018) main_mup2_pane_t5

0x6338,	// (0x00084030) main_mup2_pane_t6_ParamLimits

0x6338,	// (0x00084030) main_mup2_pane_t6

0x0005,

0xf6ad,	// (0x0008d3a5) main_mup2_pane_t_ParamLimits

0xf6ad,	// (0x0008d3a5) main_mup2_pane_t

0x6368,	// (0x00084060) mup2_visualizer_pane_ParamLimits

0x6368,	// (0x00084060) mup2_visualizer_pane

0x6393,	// (0x0008408b) mup_progress_pane_cp_ParamLimits

0x6393,	// (0x0008408b) mup_progress_pane_cp

0xeb88,	// (0x0008c880) mup_volume_pane_cp_ParamLimits

0xeb88,	// (0x0008c880) mup_volume_pane_cp

0x63a7,	// (0x0008409f) mup2_visualizer_pane_g1_ParamLimits

0x63a7,	// (0x0008409f) mup2_visualizer_pane_g1

0xc435,	// (0x0008a12d) mup2_visualizer_pane_g2_ParamLimits

0xc435,	// (0x0008a12d) mup2_visualizer_pane_g2

0x63bc,	// (0x000840b4) mup2_visualizer_pane_g3_ParamLimits

0x63bc,	// (0x000840b4) mup2_visualizer_pane_g3

0x0002,

0xf6ba,	// (0x0008d3b2) mup2_visualizer_pane_g_ParamLimits

0xf6ba,	// (0x0008d3b2) mup2_visualizer_pane_g

0x1341,	// (0x0007f039) aid_size_cell_fmradio

0x597d,	// (0x00083675) aid_height_parent_landcape

0xb3e9,	// (0x000890e1) wml_content_pane_cp

0xb3f1,	// (0x000890e9) wml_tabs_pane

0xb3fa,	// (0x000890f2) popup_wml_miniature_window

0xb402,	// (0x000890fa) scroll_pane_cp021

0xb416,	// (0x0008910e) wml_content_pane_comp8

0xab8e,	// (0x00088886) bg_popup_sub_pane_cp05

0xc453,	// (0x0008a14b) popup_wml_miniature_window_g1

0xc45b,	// (0x0008a153) wml_miniature_view_pane

0x63c8,	// (0x000840c0) aid_size_wml_view

0x63d0,	// (0x000840c8) wml_miniature_view_pane_g1

0x63d9,	// (0x000840d1) wml_miniature_view_pane_g2

0x63e2,	// (0x000840da) wml_miniature_view_pane_g3

0x63ea,	// (0x000840e2) wml_miniature_view_pane_g4

0x63f2,	// (0x000840ea) wml_miniature_view_pane_g5

0x63fa,	// (0x000840f2) wml_miniature_view_pane_g6

0x6402,	// (0x000840fa) wml_miniature_view_pane_g7

0x640a,	// (0x00084102) wml_miniature_view_pane_g8

0x0007,

0xf6c1,	// (0x0008d3b9) wml_miniature_view_pane_g

0xc463,	// (0x0008a15b) background_graphic_ParamLimits

0xc463,	// (0x0008a15b) background_graphic

0xc46f,	// (0x0008a167) wml_tabs_2_pane

0xc478,	// (0x0008a170) wml_tabs_3_pane_ParamLimits

0xc478,	// (0x0008a170) wml_tabs_3_pane

0xc48a,	// (0x0008a182) wml_tabs_4_pane_ParamLimits

0xc48a,	// (0x0008a182) wml_tabs_4_pane

0xc4a0,	// (0x0008a198) wml_tabs_5_pane_ParamLimits

0xc4a0,	// (0x0008a198) wml_tabs_5_pane

0xc4ba,	// (0x0008a1b2) wml_tabs_pane_g2_ParamLimits

0xc4ba,	// (0x0008a1b2) wml_tabs_pane_g2

0xc4ce,	// (0x0008a1c6) wml_tabs_pane_g3_ParamLimits

0xc4ce,	// (0x0008a1c6) wml_tabs_pane_g3

0x6412,	// (0x0008410a) wml_tabs_2_active_pane_ParamLimits

0x6412,	// (0x0008410a) wml_tabs_2_active_pane

0x6422,	// (0x0008411a) wml_tabs_2_passive_pane_ParamLimits

0x6422,	// (0x0008411a) wml_tabs_2_passive_pane

0x6432,	// (0x0008412a) wml_tabs_3_active_pane_cp_ParamLimits

0x6432,	// (0x0008412a) wml_tabs_3_active_pane_cp

0x6443,	// (0x0008413b) wml_tabs_3_passive_pane_ParamLimits

0x6443,	// (0x0008413b) wml_tabs_3_passive_pane

0x6454,	// (0x0008414c) wml_tabs_3_passive_pane_cp_ParamLimits

0x6454,	// (0x0008414c) wml_tabs_3_passive_pane_cp

0x6465,	// (0x0008415d) tabs_4_active_pane

0x646d,	// (0x00084165) tabs_4_passive_pane

0x6475,	// (0x0008416d) tabs_4_passive_pane_cp

0x647d,	// (0x00084175) tabs_4_passive_pane_cp2

0x56fc,	// (0x000833f4) aid_height_text

0x4ec0,	// (0x00082bb8) mup_volume_cont_pane_ParamLimits

0x4ec0,	// (0x00082bb8) mup_volume_cont_pane

0x31fd,	// (0x00080ef5) aid_size_cell_pinb

0x3207,	// (0x00080eff) aid_size_list_pinb

0x637f,	// (0x00084077) mup2_volume_cont_pane_ParamLimits

0x637f,	// (0x00084077) mup2_volume_cont_pane

0xeb74,	// (0x0008c86c) mup2_volume_cont_pane_g1_ParamLimits

0xeb74,	// (0x0008c86c) mup2_volume_cont_pane_g1

0x2f26,	// (0x00080c1e) aid_size_cell_touch_ParamLimits

0x2f26,	// (0x00080c1e) aid_size_cell_touch

0x3105,	// (0x00080dfd) touch_pane_ParamLimits

0x3105,	// (0x00080dfd) touch_pane

0xa722,	// (0x0008841a) main_rss2_pane

0xc4eb,	// (0x0008a1e3) listscroll_rss2_pane

0xc4f4,	// (0x0008a1ec) rss2_navigation_pane

0xc4fc,	// (0x0008a1f4) list_rss2_pane

0x0e9c,	// (0x0007eb94) scroll_pane_cp22

0xc504,	// (0x0008a1fc) rss2_navigation_pane_g1

0xc50d,	// (0x0008a205) rss2_navigation_pane_g2

0xc515,	// (0x0008a20d) rss2_navigation_pane_g3

0x0002,

0xf6d2,	// (0x0008d3ca) rss2_navigation_pane_g

0xc51d,	// (0x0008a215) rss2_navigation_pane_t1

0x6485,	// (0x0008417d) rss2_list_single_pane_ParamLimits

0x6485,	// (0x0008417d) rss2_list_single_pane

0xc52b,	// (0x0008a223) rss2_list_single_pane_t2

0xc539,	// (0x0008a231) rss2_list_single_pane_t3_ParamLimits

0xc539,	// (0x0008a231) rss2_list_single_pane_t3

0xc556,	// (0x0008a24e) rss2_list_single_pane_t4

0x485a,	// (0x00082552) smil_status_pane_g1

0x1bd0,	// (0x0007f8c8) main_image2_pane_ParamLimits

0x1bd0,	// (0x0007f8c8) main_image2_pane

0x5fa7,	// (0x00083c9f) main_camera2_pane_g9_ParamLimits

0x5fa7,	// (0x00083c9f) main_camera2_pane_g9

0x6099,	// (0x00083d91) main_camera2_pane_t5_ParamLimits

0x6099,	// (0x00083d91) main_camera2_pane_t5

0xeb49,	// (0x0008c841) main_camera2_pane_t6_ParamLimits

0xeb49,	// (0x0008c841) main_camera2_pane_t6

0x6499,	// (0x00084191) main_image2_pane_g1_ParamLimits

0x6499,	// (0x00084191) main_image2_pane_g1

0x54b4,	// (0x000831ac) smil2_video_pane_ParamLimits

0x54b4,	// (0x000831ac) smil2_video_pane

0xa74c,	// (0x00088444) aid_zoom_text_primary_cp

0xa775,	// (0x0008846d) popup_preview_fixed_window

0xb343,	// (0x0008903b) im_reading_pane_g1

0x5e8d,	// (0x00083b85) cams2_bc_adjust_pane_cp_ParamLimits

0x5e8d,	// (0x00083b85) cams2_bc_adjust_pane_cp

0x60bf,	// (0x00083db7) cams2_bc_adjust_pane_ParamLimits

0x60bf,	// (0x00083db7) cams2_bc_adjust_pane

0xc564,	// (0x0008a25c) cams2_bc_adjust_pane_g1

0xebad,	// (0x0008c8a5) cams2_slider_pane

0xebb6,	// (0x0008c8ae) cams2_slider_pane_g1

0xebbf,	// (0x0008c8b7) cams2_slider_pane_g2

0x0006,

0xf6d9,	// (0x0008d3d1) cams2_slider_pane_g

0x32e7,	// (0x00080fdf) calc_display_pane_ParamLimits

0x3303,	// (0x00080ffb) calc_paper_pane_ParamLimits

0x3324,	// (0x0008101c) grid_calc_pane_ParamLimits

0xba50,	// (0x00089748) popup_clock_digital_window_t1_ParamLimits

0x12de,	// (0x0007efd6) main_image_pane_t1

0x32c9,	// (0x00080fc1) aid_size_cell_calc_ParamLimits

0x32c9,	// (0x00080fc1) aid_size_cell_calc

0x59ad,	// (0x000836a5) popup_blid_sat_info2_window_ParamLimits

0x59ad,	// (0x000836a5) popup_blid_sat_info2_window

0xc574,	// (0x0008a26c) aid_size_cell_blid

0xc57c,	// (0x0008a274) bg_popup_window_pane_cp07

0xc59f,	// (0x0008a297) grid_popup_blid_pane

0xc5a7,	// (0x0008a29f) heading_pane_cp05_ParamLimits

0xc5a7,	// (0x0008a29f) heading_pane_cp05

0xc66f,	// (0x0008a367) cell_popup_blid_pane_ParamLimits

0xc66f,	// (0x0008a367) cell_popup_blid_pane

0xc68f,	// (0x0008a387) cell_popup_blid_pane_g1

0xc697,	// (0x0008a38f) cell_popup_blid_pane_t1

0x6352,	// (0x0008404a) mup2_indicator_pane_ParamLimits

0x6352,	// (0x0008404a) mup2_indicator_pane

0x105b,	// (0x0007ed53) mup2_visualizer_osc_pane

0xc441,	// (0x0008a139) mup2_visualizer_spec_pane_ParamLimits

0xc441,	// (0x0008a139) mup2_visualizer_spec_pane

0x64ad,	// (0x000841a5) mup2_spec_half_pane

0x64b6,	// (0x000841ae) mup2_spec_half_pane_cp

0x64be,	// (0x000841b6) mup2_spec_bar_pane_ParamLimits

0x64be,	// (0x000841b6) mup2_spec_bar_pane

0xc3e2,	// (0x0008a0da) mup2_spec_bar_pane_g1

0xc3ec,	// (0x0008a0e4) mup2_spec_bar_pane_g2

0x0001,

0xf64c,	// (0x0008d344) mup2_spec_bar_pane_g

0x64dd,	// (0x000841d5) mup2_osc_middle_pane

0xc3fe,	// (0x0008a0f6) mup2_visualizer_osc_pane_g1

0xa79d,	// (0x00088495) popup_number_entry_window_t1_ParamLimits

0xa7b0,	// (0x000884a8) popup_number_entry_window_t2_ParamLimits

0xa7c2,	// (0x000884ba) popup_number_entry_window_t3_ParamLimits

0x314d,	// (0x00080e45) popup_number_entry_window_t5_ParamLimits

0x314d,	// (0x00080e45) popup_number_entry_window_t5

0xf0fb,	// (0x0008cdf3) popup_number_entry_window_t_ParamLimits

0xa7d4,	// (0x000884cc) text_title_cp2_ParamLimits

0xeaf5,	// (0x0008c7ed) aid_hotspot_pointer_text2_pane

0xeb1b,	// (0x0008c813) main_viewer_pane_g9_ParamLimits

0xeb1b,	// (0x0008c813) main_viewer_pane_g9

0xb582,	// (0x0008927a) cale_month_pane_t1_ParamLimits

0xb617,	// (0x0008930f) bg_cale_pane_ParamLimits

0xb62f,	// (0x00089327) list_cale_pane_ParamLimits

0xb0d4,	// (0x00088dcc) listscroll_cale_day_pane_t1

0xb640,	// (0x00089338) scroll_pane_cp09_ParamLimits

0x4ef2,	// (0x00082bea) main_mup_eq_pane_t1_ParamLimits

0x4ef2,	// (0x00082bea) main_mup_eq_pane_t1

0x4f0a,	// (0x00082c02) main_mup_eq_pane_t2_ParamLimits

0x4f0a,	// (0x00082c02) main_mup_eq_pane_t2

0x4f20,	// (0x00082c18) main_mup_eq_pane_t3_ParamLimits

0x4f20,	// (0x00082c18) main_mup_eq_pane_t3

0x4f36,	// (0x00082c2e) main_mup_eq_pane_t4_ParamLimits

0x4f36,	// (0x00082c2e) main_mup_eq_pane_t4

0x4f4c,	// (0x00082c44) main_mup_eq_pane_t5_ParamLimits

0x4f4c,	// (0x00082c44) main_mup_eq_pane_t5

0x4f62,	// (0x00082c5a) main_mup_eq_pane_t6_ParamLimits

0x4f62,	// (0x00082c5a) main_mup_eq_pane_t6

0x4f74,	// (0x00082c6c) main_mup_eq_pane_t7_ParamLimits

0x4f74,	// (0x00082c6c) main_mup_eq_pane_t7

0x4f86,	// (0x00082c7e) main_mup_eq_pane_t8_ParamLimits

0x4f86,	// (0x00082c7e) main_mup_eq_pane_t8

0x4f98,	// (0x00082c90) main_mup_eq_pane_t9_ParamLimits

0x4f98,	// (0x00082c90) main_mup_eq_pane_t9

0x4fae,	// (0x00082ca6) main_mup_eq_pane_t10_ParamLimits

0x4fae,	// (0x00082ca6) main_mup_eq_pane_t10

0x0009,

0xf488,	// (0x0008d180) main_mup_eq_pane_t_ParamLimits

0xf488,	// (0x0008d180) main_mup_eq_pane_t

0x5041,	// (0x00082d39) mup_equalizer_pane_cp5_ParamLimits

0x5053,	// (0x00082d4b) mup_equalizer_pane_cp6_ParamLimits

0x5065,	// (0x00082d5d) mup_equalizer_pane_cp7_ParamLimits

0xa722,	// (0x0008841a) main_gallery_pane

0xc407,	// (0x0008a0ff) smil2_volume_pane

0xc40f,	// (0x0008a107) smil_status_volume_pane_g1_ParamLimits

0xc422,	// (0x0008a11a) smil_status_volume_pane_g2_ParamLimits

0xeb27,	// (0x0008c81f) smil_status_volume_pane_g3_ParamLimits

0xf651,	// (0x0008d349) smil_status_volume_pane_g_ParamLimits

0xc57c,	// (0x0008a274) bg_popup_window_pane_cp07_ParamLimits

0xc58a,	// (0x0008a282) blid_firmament_pane

0x64e6,	// (0x000841de) aid_size_cell_gallery_ParamLimits

0x64e6,	// (0x000841de) aid_size_cell_gallery

0x64fc,	// (0x000841f4) grid_gallery_pane_ParamLimits

0x64fc,	// (0x000841f4) grid_gallery_pane

0x6510,	// (0x00084208) cell_gallery_pane_ParamLimits

0x6510,	// (0x00084208) cell_gallery_pane

0xc6a5,	// (0x0008a39d) bg_cell_gallery_focus_pane_ParamLimits

0xc6a5,	// (0x0008a39d) bg_cell_gallery_focus_pane

0xc6b7,	// (0x0008a3af) cell_gallery_pane_g1_ParamLimits

0xc6b7,	// (0x0008a3af) cell_gallery_pane_g1

0x6557,	// (0x0008424f) cell_gallery_pane_g2_ParamLimits

0x6557,	// (0x0008424f) cell_gallery_pane_g2

0x6564,	// (0x0008425c) cell_gallery_pane_g3_ParamLimits

0x6564,	// (0x0008425c) cell_gallery_pane_g3

0xc6c3,	// (0x0008a3bb) cell_gallery_pane_g4_ParamLimits

0xc6c3,	// (0x0008a3bb) cell_gallery_pane_g4

0x0003,

0xf6ff,	// (0x0008d3f7) cell_gallery_pane_g_ParamLimits

0xf6ff,	// (0x0008d3f7) cell_gallery_pane_g

0xc6cf,	// (0x0008a3c7) bg_cell_gallery_focus_pane_g1

0xc6d7,	// (0x0008a3cf) bg_cell_gallery_focus_pane_g2

0xc6df,	// (0x0008a3d7) bg_cell_gallery_focus_pane_g3

0xc6e7,	// (0x0008a3df) bg_cell_gallery_focus_pane_g4

0xc6ef,	// (0x0008a3e7) bg_cell_gallery_focus_pane_g5

0xc6f7,	// (0x0008a3ef) bg_cell_gallery_focus_pane_g6

0xc6ff,	// (0x0008a3f7) bg_cell_gallery_focus_pane_g7

0xc707,	// (0x0008a3ff) bg_cell_gallery_focus_pane_g8

0x0007,

0xf708,	// (0x0008d400) bg_cell_gallery_focus_pane_g

0xc70f,	// (0x0008a407) aid_firma_cardinal

0xc723,	// (0x0008a41b) blid_firmament_pane_t1

0xc73a,	// (0x0008a432) blid_firmament_pane_t2

0xc751,	// (0x0008a449) blid_firmament_pane_t3

0xc768,	// (0x0008a460) blid_firmament_pane_t4

0x0003,

0xf719,	// (0x0008d411) blid_firmament_pane_t

0xc77f,	// (0x0008a477) blid_sat_info_pane

0xc78f,	// (0x0008a487) blid_sat_info_pane_g1

0xc78f,	// (0x0008a487) blid_sat_info_pane_g2

0x0001,

0xf722,	// (0x0008d41a) blid_sat_info_pane_g

0xc799,	// (0x0008a491) blid_sat_info_pane_t1

0xc7a7,	// (0x0008a49f) smil2_volume_content_pane

0xc7b0,	// (0x0008a4a8) smil2_volume_pane_g1

0xc7b8,	// (0x0008a4b0) smil2_volume_content_pane_g1

0xc7c1,	// (0x0008a4b9) smil2_volume_content_pane_g2

0xc7ca,	// (0x0008a4c2) smil2_volume_content_pane_g3

0xc7d3,	// (0x0008a4cb) smil2_volume_content_pane_g4

0xc7dc,	// (0x0008a4d4) smil2_volume_content_pane_g5

0xc7e5,	// (0x0008a4dd) smil2_volume_content_pane_g6

0xc7ee,	// (0x0008a4e6) smil2_volume_content_pane_g7

0xc7f7,	// (0x0008a4ef) smil2_volume_content_pane_g8

0xc800,	// (0x0008a4f8) smil2_volume_content_pane_g9

0xc809,	// (0x0008a501) smil2_volume_content_pane_g10

0x0009,

0xf727,	// (0x0008d41f) smil2_volume_content_pane_g

0x3741,	// (0x00081439) cale_week_day_heading_pane_t1_ParamLimits

0x376b,	// (0x00081463) cale_week_day_heading_pane_t2_ParamLimits

0x3795,	// (0x0008148d) cale_week_day_heading_pane_t3_ParamLimits

0x37bf,	// (0x000814b7) cale_week_day_heading_pane_t4_ParamLimits

0x37e9,	// (0x000814e1) cale_week_day_heading_pane_t5_ParamLimits

0x3813,	// (0x0008150b) cale_week_day_heading_pane_t6_ParamLimits

0x383d,	// (0x00081535) cale_week_day_heading_pane_t7_ParamLimits

0xf200,	// (0x0008cef8) cale_week_day_heading_pane_t_ParamLimits

0xb0e6,	// (0x00088dde) bg_cale_side_pane_ParamLimits

0x3867,	// (0x0008155f) cale_week_time_pane_t1_ParamLimits

0x3893,	// (0x0008158b) cale_week_time_pane_t2_ParamLimits

0x38bf,	// (0x000815b7) cale_week_time_pane_t3_ParamLimits

0x38eb,	// (0x000815e3) cale_week_time_pane_t4_ParamLimits

0x3917,	// (0x0008160f) cale_week_time_pane_t5_ParamLimits

0x3943,	// (0x0008163b) cale_week_time_pane_t6_ParamLimits

0x396f,	// (0x00081667) cale_week_time_pane_t7_ParamLimits

0x399b,	// (0x00081693) cale_week_time_pane_t8_ParamLimits

0xf20f,	// (0x0008cf07) cale_week_time_pane_t_ParamLimits

0x39c7,	// (0x000816bf) cell_cale_week_pane_g2_ParamLimits

0xb0e6,	// (0x00088dde) bg_cale_side_pane_cp01_ParamLimits

0x46fd,	// (0x000823f5) cale_month_week_pane_t1_ParamLimits

0x4714,	// (0x0008240c) cale_month_week_pane_t2_ParamLimits

0x472b,	// (0x00082423) cale_month_week_pane_t3_ParamLimits

0x4742,	// (0x0008243a) cale_month_week_pane_t4_ParamLimits

0x4759,	// (0x00082451) cale_month_week_pane_t5_ParamLimits

0x4770,	// (0x00082468) cale_month_week_pane_t6_ParamLimits

0xf2e8,	// (0x0008cfe0) cale_month_week_pane_t_ParamLimits

0xb5be,	// (0x000892b6) cell_cale_month_pane_g1_ParamLimits

0xa722,	// (0x0008841a) main_cale_event_viewer_pane

0xa722,	// (0x0008841a) listscroll_cale_event_viewer_pane

0xc812,	// (0x0008a50a) list_cale_ev_pane

0xc81a,	// (0x0008a512) scroll_pane_cp023

0x6571,	// (0x00084269) field_cale_ev_pane_ParamLimits

0x6571,	// (0x00084269) field_cale_ev_pane

0xc826,	// (0x0008a51e) field_cale_ev_content_pane_ParamLimits

0xc826,	// (0x0008a51e) field_cale_ev_content_pane

0xc832,	// (0x0008a52a) field_cale_ev_pane_g1_ParamLimits

0xc832,	// (0x0008a52a) field_cale_ev_pane_g1

0xc83e,	// (0x0008a536) field_cale_ev_pane_g2_ParamLimits

0xc83e,	// (0x0008a536) field_cale_ev_pane_g2

0xc856,	// (0x0008a54e) field_cale_ev_pane_g3_ParamLimits

0xc856,	// (0x0008a54e) field_cale_ev_pane_g3

0x0002,

0xf73c,	// (0x0008d434) field_cale_ev_pane_g_ParamLimits

0xf73c,	// (0x0008d434) field_cale_ev_pane_g

0xc86e,	// (0x0008a566) field_cale_ev_pane_t1_ParamLimits

0xc86e,	// (0x0008a566) field_cale_ev_pane_t1

0x658b,	// (0x00084283) field_cale_ev_content_pane_t1_ParamLimits

0x658b,	// (0x00084283) field_cale_ev_content_pane_t1

0x11c4,	// (0x0007eebc) bg_button_pane_cp01

0xb0ac,	// (0x00088da4) listscroll_cale_week_pane_ParamLimits

0x356b,	// (0x00081263) popup_toolbar_window_cp01

0xb0d4,	// (0x00088dcc) listscroll_cale_week_pane_t1_ParamLimits

0xaee4,	// (0x00088bdc) listscroll_cale_day_pane_ParamLimits

0x356b,	// (0x00081263) popup_toolbar_window_cp02

0xb0d4,	// (0x00088dcc) listscroll_cale_day_pane_t1_ParamLimits

0xb0ac,	// (0x00088da4) main_cale_month_pane_ParamLimits

0x5ba9,	// (0x000838a1) popup_toolbar_window_cp03_ParamLimits

0x5ba9,	// (0x000838a1) popup_toolbar_window_cp03

0x538e,	// (0x00083086) main_image_pane_g2_ParamLimits

0x538e,	// (0x00083086) main_image_pane_g2

0x539f,	// (0x00083097) main_image_pane_g3_ParamLimits

0x539f,	// (0x00083097) main_image_pane_g3

0x0002,

0xf51a,	// (0x0008d212) main_image_pane_g_ParamLimits

0xf51a,	// (0x0008d212) main_image_pane_g

0x12de,	// (0x0007efd6) main_image_pane_t1_ParamLimits

0x53b0,	// (0x000830a8) main_image_pane_t2_ParamLimits

0x53b0,	// (0x000830a8) main_image_pane_t2

0x53c2,	// (0x000830ba) main_image_pane_t3_ParamLimits

0x53c2,	// (0x000830ba) main_image_pane_t3

0x53ea,	// (0x000830e2) main_image_pane_t4_ParamLimits

0x53ea,	// (0x000830e2) main_image_pane_t4

0x0003,

0xf521,	// (0x0008d219) main_image_pane_t_ParamLimits

0xf521,	// (0x0008d219) main_image_pane_t

0x540a,	// (0x00083102) popup_image_details_window_cp01

0x5412,	// (0x0008310a) popup_toobar_trans_pane_cp01_ParamLimits

0x5412,	// (0x0008310a) popup_toobar_trans_pane_cp01

0x5a76,	// (0x0008376e) popup_image_details_window_ParamLimits

0x5a76,	// (0x0008376e) popup_image_details_window

0xc36a,	// (0x0008a062) popup_image_focus_window

0x5e5b,	// (0x00083b53) camera2_autofocus_pane_ParamLimits

0x5e5b,	// (0x00083b53) camera2_autofocus_pane

0xa722,	// (0x0008841a) bg_popup_sub_pane_cp06

0xc885,	// (0x0008a57d) popup_image_focus_window_g1

0xc88d,	// (0x0008a585) popup_image_focus_window_g2

0xc895,	// (0x0008a58d) popup_image_focus_window_g3

0xc89d,	// (0x0008a595) popup_image_focus_window_g4

0x0003,

0xf743,	// (0x0008d43b) popup_image_focus_window_g

0xc8a5,	// (0x0008a59d) popup_image_focus_window_t1

0xc8b3,	// (0x0008a5ab) popup_image_focus_window_t2

0xc8c2,	// (0x0008a5ba) popup_image_focus_window_t3

0x0002,

0xf74c,	// (0x0008d444) popup_image_focus_window_t

0xc8d0,	// (0x0008a5c8) camera2_autofocus_pane_g1

0x1bd0,	// (0x0007f8c8) bg_tb_trans_pane_cp01

0xc8de,	// (0x0008a5d6) popup_image_details_window_g1

0xc8f1,	// (0x0008a5e9) popup_image_details_window_g2

0x0002,

0xf75e,	// (0x0008d456) popup_image_details_window_g

0xc91a,	// (0x0008a612) popup_image_details_window_t1

0xc92c,	// (0x0008a624) popup_image_details_window_t2

0xc945,	// (0x0008a63d) popup_image_details_window_t3

0xc959,	// (0x0008a651) popup_image_details_window_t4

0xc974,	// (0x0008a66c) popup_image_details_window_t5

0x0004,

0xf765,	// (0x0008d45d) popup_image_details_window_t

0xaea8,	// (0x00088ba0) bg_calc_paper_pane_ParamLimits

0xaec0,	// (0x00088bb8) grid_highlight_pane_cp013

0xaeca,	// (0x00088bc2) list_calc_pane_ParamLimits

0xaedc,	// (0x00088bd4) scroll_pane_cp024

0xaee4,	// (0x00088bdc) bg_calc_display_pane_ParamLimits

0xaef0,	// (0x00088be8) calc_display_pane_t1_ParamLimits

0xaf05,	// (0x00088bfd) calc_display_pane_t2_ParamLimits

0xaf1a,	// (0x00088c12) calc_display_pane_t3_ParamLimits

0xf182,	// (0x0008ce7a) calc_display_pane_t_ParamLimits

0x349c,	// (0x00081194) cell_calc_pane_g2

0x0001,

0xf19f,	// (0x0008ce97) cell_calc_pane_g

0x34a5,	// (0x0008119d) cell_calc_pane_t1

0xaf91,	// (0x00088c89) grid_highlight_pane_cp02_ParamLimits

0xafa7,	// (0x00088c9f) toolbar_button_pane_cp01_ParamLimits

0xafa7,	// (0x00088c9f) toolbar_button_pane_cp01

0x1323,	// (0x0007f01b) temp_image_control_pane_ParamLimits

0x1323,	// (0x0007f01b) temp_image_control_pane

0x1bd0,	// (0x0007f8c8) main_mp3_pane

0xc98e,	// (0x0008a686) temp_image_control_pane_g1_ParamLimits

0xc98e,	// (0x0008a686) temp_image_control_pane_g1

0xc99c,	// (0x0008a694) temp_image_control_pane_g2_ParamLimits

0xc99c,	// (0x0008a694) temp_image_control_pane_g2

0xc9ae,	// (0x0008a6a6) temp_image_control_pane_g3_ParamLimits

0xc9ae,	// (0x0008a6a6) temp_image_control_pane_g3

0x65d8,	// (0x000842d0) temp_image_control_pane_g4_ParamLimits

0x65d8,	// (0x000842d0) temp_image_control_pane_g4

0x0003,

0xf770,	// (0x0008d468) temp_image_control_pane_g_ParamLimits

0xf770,	// (0x0008d468) temp_image_control_pane_g

0xc98e,	// (0x0008a686) main_mp3_pane_g1

0x65e9,	// (0x000842e1) main_mp3_pane_g2

0x0007,

0xf779,	// (0x0008d471) main_mp3_pane_g

0xc9f1,	// (0x0008a6e9) main_mp3_pane_t1

0xb1ac,	// (0x00088ea4) main_camera_pane_g8_ParamLimits

0xb1ac,	// (0x00088ea4) main_camera_pane_g8

0x3c5c,	// (0x00081954) main_video_pane_g7_ParamLimits

0x3c5c,	// (0x00081954) main_video_pane_g7

0xeb62,	// (0x0008c85a) main_camera2_pane_t7_ParamLimits

0xeb62,	// (0x0008c85a) main_camera2_pane_t7

0xb3a9,	// (0x000890a1) scroll_pane_cp025_ParamLimits

0xb3a9,	// (0x000890a1) scroll_pane_cp025

0xb3bd,	// (0x000890b5) scroll_pane_cp026_ParamLimits

0xb3bd,	// (0x000890b5) scroll_pane_cp026

0xb3cc,	// (0x000890c4) wml_content_pane_ParamLimits

0xa722,	// (0x0008841a) main_touch_calib_pane

0x669f,	// (0x00084397) main_touch_calib_pane_g1

0x66ab,	// (0x000843a3) main_touch_calib_pane_g2

0x66b7,	// (0x000843af) main_touch_calib_pane_g3

0x66c3,	// (0x000843bb) main_touch_calib_pane_g4

0x0003,

0xf797,	// (0x0008d48f) main_touch_calib_pane_g

0x66cf,	// (0x000843c7) main_touch_calib_pane_t1

0x66e7,	// (0x000843df) main_touch_calib_pane_t2

0x0004,

0xf7a0,	// (0x0008d498) main_touch_calib_pane_t

0x0f4d,	// (0x0007ec45) mup_progress_pane_cp02

0x0f6c,	// (0x0007ec64) navi_pane_g1

0x0fec,	// (0x0007ece4) navi_pane_mp_t3

0x1bd0,	// (0x0007f8c8) main_mp3_pane_ParamLimits

0x5be3,	// (0x000838db) navi_pane_ParamLimits

0xc98e,	// (0x0008a686) main_mp3_pane_g1_ParamLimits

0x65e9,	// (0x000842e1) main_mp3_pane_g2_ParamLimits

0x65f5,	// (0x000842ed) main_mp3_pane_g3_ParamLimits

0x65f5,	// (0x000842ed) main_mp3_pane_g3

0x6601,	// (0x000842f9) main_mp3_pane_g4_ParamLimits

0x6601,	// (0x000842f9) main_mp3_pane_g4

0xc9be,	// (0x0008a6b6) main_mp3_pane_g5_ParamLimits

0xc9be,	// (0x0008a6b6) main_mp3_pane_g5

0xc9cc,	// (0x0008a6c4) main_mp3_pane_g6_ParamLimits

0xc9cc,	// (0x0008a6c4) main_mp3_pane_g6

0xc9d9,	// (0x0008a6d1) main_mp3_pane_g7_ParamLimits

0xc9d9,	// (0x0008a6d1) main_mp3_pane_g7

0xc9e5,	// (0x0008a6dd) main_mp3_pane_g8_ParamLimits

0xc9e5,	// (0x0008a6dd) main_mp3_pane_g8

0xf779,	// (0x0008d471) main_mp3_pane_g_ParamLimits

0x660d,	// (0x00084305) main_mp3_pane_t2

0x661b,	// (0x00084313) main_mp3_pane_t3

0xc9ff,	// (0x0008a6f7) main_mp3_pane_t4

0xca0d,	// (0x0008a705) main_mp3_pane_t5

0x0005,

0xf78a,	// (0x0008d482) main_mp3_pane_t

0xca1b,	// (0x0008a713) mup_progress_pane_cp01

0xa74c,	// (0x00088444) aid_zoom_text_secondary2

0xc812,	// (0x0008a50a) list_cale_ev2_pane

0xc81a,	// (0x0008a512) scroll_pane_cp023_ParamLimits

0x6735,	// (0x0008442d) field_cale_ev2_pane_ParamLimits

0x6735,	// (0x0008442d) field_cale_ev2_pane

0xca23,	// (0x0008a71b) field_cale_ev2_pane_g1_ParamLimits

0xca23,	// (0x0008a71b) field_cale_ev2_pane_g1

0xca2f,	// (0x0008a727) field_cale_ev2_pane_g2_ParamLimits

0xca2f,	// (0x0008a727) field_cale_ev2_pane_g2

0xca47,	// (0x0008a73f) field_cale_ev2_pane_g3_ParamLimits

0xca47,	// (0x0008a73f) field_cale_ev2_pane_g3

0x0003,

0xf7ab,	// (0x0008d4a3) field_cale_ev2_pane_g_ParamLimits

0xf7ab,	// (0x0008d4a3) field_cale_ev2_pane_g

0xca6b,	// (0x0008a763) field_cale_ev2_pane_t1_ParamLimits

0xca6b,	// (0x0008a763) field_cale_ev2_pane_t1

0xca82,	// (0x0008a77a) field_cale_ev2_pane_t2_ParamLimits

0xca82,	// (0x0008a77a) field_cale_ev2_pane_t2

0x0001,

0xf7b4,	// (0x0008d4ac) field_cale_ev2_pane_t_ParamLimits

0xf7b4,	// (0x0008d4ac) field_cale_ev2_pane_t

0x5249,	// (0x00082f41) main_postcard_pane_g5_ParamLimits

0x5249,	// (0x00082f41) main_postcard_pane_g5

0x525d,	// (0x00082f55) main_postcard_pane_g6_ParamLimits

0x525d,	// (0x00082f55) main_postcard_pane_g6

0x3a3e,	// (0x00081736) camera2_autofocus_pane_cp_ParamLimits

0x3a3e,	// (0x00081736) camera2_autofocus_pane_cp

0x1bd0,	// (0x0007f8c8) main_mup3_pane

0x676d,	// (0x00084465) main_mup3_pane_g1_ParamLimits

0x676d,	// (0x00084465) main_mup3_pane_g1

0x678f,	// (0x00084487) main_mup3_pane_g2_ParamLimits

0x678f,	// (0x00084487) main_mup3_pane_g2

0x67f7,	// (0x000844ef) main_mup3_pane_g3_ParamLimits

0x67f7,	// (0x000844ef) main_mup3_pane_g3

0x6835,	// (0x0008452d) main_mup3_pane_g4_ParamLimits

0x6835,	// (0x0008452d) main_mup3_pane_g4

0x6873,	// (0x0008456b) main_mup3_pane_g5_ParamLimits

0x6873,	// (0x0008456b) main_mup3_pane_g5

0x68b1,	// (0x000845a9) main_mup3_pane_g6_ParamLimits

0x68b1,	// (0x000845a9) main_mup3_pane_g6

0xca97,	// (0x0008a78f) main_mup3_pane_g7_ParamLimits

0xca97,	// (0x0008a78f) main_mup3_pane_g7

0x0007,

0xf7c4,	// (0x0008d4bc) main_mup3_pane_g_ParamLimits

0xf7c4,	// (0x0008d4bc) main_mup3_pane_g

0x6927,	// (0x0008461f) main_mup3_pane_t1_ParamLimits

0x6927,	// (0x0008461f) main_mup3_pane_t1

0x698f,	// (0x00084687) main_mup3_pane_t2_ParamLimits

0x698f,	// (0x00084687) main_mup3_pane_t2

0x6a57,	// (0x0008474f) main_mup3_pane_t4_ParamLimits

0x6a57,	// (0x0008474f) main_mup3_pane_t4

0x6aa5,	// (0x0008479d) main_mup3_pane_t5_ParamLimits

0x6aa5,	// (0x0008479d) main_mup3_pane_t5

0x6b53,	// (0x0008484b) main_mup3_pane_t6_ParamLimits

0x6b53,	// (0x0008484b) main_mup3_pane_t6

0x0005,

0xf7d5,	// (0x0008d4cd) main_mup3_pane_t_ParamLimits

0xf7d5,	// (0x0008d4cd) main_mup3_pane_t

0x6c07,	// (0x000848ff) mup3_progress_pane_ParamLimits

0x6c07,	// (0x000848ff) mup3_progress_pane

0x6c63,	// (0x0008495b) popup_mup3_control_window_ParamLimits

0x6c63,	// (0x0008495b) popup_mup3_control_window

0xcaa5,	// (0x0008a79d) popup_mup3_text_window

0x6c91,	// (0x00084989) mup3_progress_pane_t1

0x6ca7,	// (0x0008499f) mup3_progress_pane_t2

0xcaad,	// (0x0008a7a5) mup3_progress_pane_t3

0x0002,

0xf7e2,	// (0x0008d4da) mup3_progress_pane_t

0xcac4,	// (0x0008a7bc) mup_progress_pane_cp03

0xa722,	// (0x0008841a) bg_tb_trans_pane_cp04

0x6cbd,	// (0x000849b5) mup3_volume_pane

0x6cc5,	// (0x000849bd) popup_mup3_control_window_g1

0x6cce,	// (0x000849c6) mup3_volume_pane_g1

0x6cd7,	// (0x000849cf) mup3_volume_pane_g2

0x6ce0,	// (0x000849d8) mup3_volume_pane_g3

0x0002,

0xf7e9,	// (0x0008d4e1) mup3_volume_pane_g

0xa722,	// (0x0008841a) bg_tb_trans_pane_cp03

0xcad4,	// (0x0008a7cc) popup_mup3_text_window_g1

0xcadc,	// (0x0008a7d4) popup_mup3_text_window_t1

0xaf68,	// (0x00088c60) list_calc_item_pane_g1_ParamLimits

0xc4e2,	// (0x0008a1da) mup_volume_pane_cp_g1

0x66ff,	// (0x000843f7) main_touch_calib_pane_t3

0x6711,	// (0x00084409) main_touch_calib_pane_t4

0x6723,	// (0x0008441b) main_touch_calib_pane_t5

0xa72c,	// (0x00088424) aid_cell_size_toolbar2

0xa734,	// (0x0008842c) aid_popup3_width_pane

0xa73c,	// (0x00088434) aid_zoom_text_msg_primary

0xb18c,	// (0x00088e84) vorec_t7

0xaf2c,	// (0x00088c24) bg_calc_paper_pane_g1_ParamLimits

0xaf38,	// (0x00088c30) bg_calc_paper_pane_g2_ParamLimits

0xaf44,	// (0x00088c3c) bg_calc_paper_pane_g3_ParamLimits

0xaf50,	// (0x00088c48) bg_calc_paper_pane_g4_ParamLimits

0xaf5c,	// (0x00088c54) bg_calc_paper_pane_g5_ParamLimits

0x3436,	// (0x0008112e) bg_calc_paper_pane_g6_ParamLimits

0x3445,	// (0x0008113d) bg_calc_paper_pane_g7_ParamLimits

0x3454,	// (0x0008114c) bg_calc_paper_pane_g8_ParamLimits

0xf189,	// (0x0008ce81) bg_calc_paper_pane_g_ParamLimits

0x3463,	// (0x0008115b) calc_bg_paper_pane_g9_ParamLimits

0x3b72,	// (0x0008186a) image_qvga_pane_ParamLimits

0x3b72,	// (0x0008186a) image_qvga_pane

0xade9,	// (0x00088ae1) bg_popup_sub_pane_cp04_ParamLimits

0x125a,	// (0x0007ef52) popup_mup_playback_window_g1_ParamLimits

0x1266,	// (0x0007ef5e) popup_mup_playback_window_t1_ParamLimits

0x127b,	// (0x0007ef73) popup_mup_playback_window_t2_ParamLimits

0xf515,	// (0x0008d20d) popup_mup_playback_window_t_ParamLimits

0x6272,	// (0x00083f6a) main_mup2_pane_g3_ParamLimits

0x6272,	// (0x00083f6a) main_mup2_pane_g3

0x3e3f,	// (0x00081b37) popup_toolbar_window_cp04

0x1649,	// (0x0007f341) popup_call2_audio_second_window_g3_ParamLimits

0x1649,	// (0x0007f341) popup_call2_audio_second_window_g3

0x1a53,	// (0x0007f74b) popup_call2_audio_first_window_g4_ParamLimits

0x1a53,	// (0x0007f74b) popup_call2_audio_first_window_g4

0xbfab,	// (0x00089ca3) popup_call2_audio_in_window_g4_ParamLimits

0xbfab,	// (0x00089ca3) popup_call2_audio_in_window_g4

0x5370,	// (0x00083068) aid_area_sk_bg_cut_ParamLimits

0x5370,	// (0x00083068) aid_area_sk_bg_cut

0x1290,	// (0x0007ef88) aid_area_sk_bg_cut_2_ParamLimits

0x1290,	// (0x0007ef88) aid_area_sk_bg_cut_2

0x6547,	// (0x0008423f) aid_placing_details_win

0x654f,	// (0x00084247) aid_placing_details_win_2

0xc8d0,	// (0x0008a5c8) camera2_autofocus_pane_g1_ParamLimits

0x30ac,	// (0x00080da4) popup_fixed_preview_cale_window_ParamLimits

0x30ac,	// (0x00080da4) popup_fixed_preview_cale_window

0x106c,	// (0x0007ed64) navi_slider_pane_g3

0x1075,	// (0x0007ed6d) navi_slider_pane_g4

0x107e,	// (0x0007ed76) navi_slider_pane_g5

0x106c,	// (0x0007ed64) navi_slider_pane_g6

0xba98,	// (0x00089790) navi_slider_pane_g7

0x1191,	// (0x0007ee89) mup_scale_pane_g3

0x119a,	// (0x0007ee92) mup_scale_pane_g4

0x11a3,	// (0x0007ee9b) mup_scale_pane_g5

0x5079,	// (0x00082d71) mup_scale_pane_g6

0x5082,	// (0x00082d7a) mup_scale_pane_g7

0x106c,	// (0x0007ed64) cams2_slider_pane_g3

0xc56c,	// (0x0008a264) cams2_slider_pane_g4

0xebc8,	// (0x0008c8c0) cams2_slider_pane_g5

0x106c,	// (0x0007ed64) cams2_slider_pane_g6

0xebd0,	// (0x0008c8c8) cams2_slider_pane_g7

0xc78f,	// (0x0008a487) camera2_autofocus_pane_cp_g1

0xcaea,	// (0x0008a7e2) bg_popup_preview_window_pane_cp02_ParamLimits

0xcaea,	// (0x0008a7e2) bg_popup_preview_window_pane_cp02

0x6ce9,	// (0x000849e1) list_fp_cale_pane_ParamLimits

0x6ce9,	// (0x000849e1) list_fp_cale_pane

0xcaf6,	// (0x0008a7ee) popup_fixed_preview_cale_window_t1_ParamLimits

0xcaf6,	// (0x0008a7ee) popup_fixed_preview_cale_window_t1

0x6cf5,	// (0x000849ed) popup_fixed_preview_cale_window_t2_ParamLimits

0x6cf5,	// (0x000849ed) popup_fixed_preview_cale_window_t2

0x6d0a,	// (0x00084a02) popup_fixed_preview_cale_window_t3_ParamLimits

0x6d0a,	// (0x00084a02) popup_fixed_preview_cale_window_t3

0x0002,

0xf7f0,	// (0x0008d4e8) popup_fixed_preview_cale_window_t_ParamLimits

0xf7f0,	// (0x0008d4e8) popup_fixed_preview_cale_window_t

0x6d1f,	// (0x00084a17) list_single_fp_cale_pane_ParamLimits

0x6d1f,	// (0x00084a17) list_single_fp_cale_pane

0x6d33,	// (0x00084a2b) list_single_fp_cale_pane_g1_ParamLimits

0x6d33,	// (0x00084a2b) list_single_fp_cale_pane_g1

0xcb14,	// (0x0008a80c) list_single_fp_cale_pane_g2_ParamLimits

0xcb14,	// (0x0008a80c) list_single_fp_cale_pane_g2

0x0002,

0xf7f7,	// (0x0008d4ef) list_single_fp_cale_pane_g_ParamLimits

0xf7f7,	// (0x0008d4ef) list_single_fp_cale_pane_g

0x6d3f,	// (0x00084a37) list_single_fp_cale_pane_t1_ParamLimits

0x6d3f,	// (0x00084a37) list_single_fp_cale_pane_t1

0x6d51,	// (0x00084a49) list_single_fp_cale_pane_t2_ParamLimits

0x6d51,	// (0x00084a49) list_single_fp_cale_pane_t2

0x0001,

0xf7fe,	// (0x0008d4f6) list_single_fp_cale_pane_t_ParamLimits

0xf7fe,	// (0x0008d4f6) list_single_fp_cale_pane_t

0x0000,

0x0000,

0x0000,

0x0000,

0xa722,	// (0x0008841a) main_dialer_pane

0x6d84,	// (0x00084a7c) aid_cell_size_keypad

0x6d8e,	// (0x00084a86) dialer_ne_pane

0x6d96,	// (0x00084a8e) grid_dialer_command_1_pane

0x6d9e,	// (0x00084a96) grid_dialer_command_2_pane

0x6da6,	// (0x00084a9e) grid_dialer_keypad_pane

0x6db6,	// (0x00084aae) bg_popup_call_pane_cp06_ParamLimits

0x6db6,	// (0x00084aae) bg_popup_call_pane_cp06

0x6dc2,	// (0x00084aba) dialer_ne_clear_pane_ParamLimits

0x6dc2,	// (0x00084aba) dialer_ne_clear_pane

0xcb2d,	// (0x0008a825) dialer_ne_pane_g1

0xcb35,	// (0x0008a82d) dialer_ne_pane_t1_ParamLimits

0xcb35,	// (0x0008a82d) dialer_ne_pane_t1

0x6dce,	// (0x00084ac6) dialer_ne_pane_t2_ParamLimits

0x6dce,	// (0x00084ac6) dialer_ne_pane_t2

0x6df8,	// (0x00084af0) dialer_ne_pane_t3_ParamLimits

0x6df8,	// (0x00084af0) dialer_ne_pane_t3

0x0002,

0xf803,	// (0x0008d4fb) dialer_ne_pane_t_ParamLimits

0xf803,	// (0x0008d4fb) dialer_ne_pane_t

0x6e28,	// (0x00084b20) dialer_ne_pane_t3_copy1_ParamLimits

0x6e28,	// (0x00084b20) dialer_ne_pane_t3_copy1

0x6e57,	// (0x00084b4f) cell_dialer_keypad_pane_ParamLimits

0x6e57,	// (0x00084b4f) cell_dialer_keypad_pane

0x6e6c,	// (0x00084b64) cell_dialer_command_1_pane_ParamLimits

0x6e6c,	// (0x00084b64) cell_dialer_command_1_pane

0x6e82,	// (0x00084b7a) cell_dialer_command_2_pane_ParamLimits

0x6e82,	// (0x00084b7a) cell_dialer_command_2_pane

0xcb47,	// (0x0008a83f) bg_button_pane_cp02_ParamLimits

0xcb47,	// (0x0008a83f) bg_button_pane_cp02

0x6e91,	// (0x00084b89) cell_dialer_keypad_pane_g1_ParamLimits

0x6e91,	// (0x00084b89) cell_dialer_keypad_pane_g1

0xcb47,	// (0x0008a83f) bg_button_pane_cp03_ParamLimits

0xcb47,	// (0x0008a83f) bg_button_pane_cp03

0x6ea6,	// (0x00084b9e) cell_dialer_command_1_pane_g1_ParamLimits

0x6ea6,	// (0x00084b9e) cell_dialer_command_1_pane_g1

0xcb53,	// (0x0008a84b) bg_button_pane_cp04

0x6eba,	// (0x00084bb2) cell_dialer_command_2_pane_g1

0x105b,	// (0x0007ed53) bg_button_pane_cp06

0xcb5b,	// (0x0008a853) dialer_ne_clear_pane_g1

0x0f78,	// (0x0007ec70) navi_pane_g2

0x4c7e,	// (0x00082976) navi_pane_g3

0x0002,

0xf418,	// (0x0008d110) navi_pane_g

0x0ffa,	// (0x0007ecf2) navi_pane_mv_g2

0x1022,	// (0x0007ed1a) navi_pane_mv_g5

0x4ca3,	// (0x0008299b) navi_pane_mv_t1

0xaee4,	// (0x00088bdc) main_clock2_pane

0x6eee,	// (0x00084be6) main_clock2_list_pane_ParamLimits

0x6eee,	// (0x00084be6) main_clock2_list_pane

0x6f20,	// (0x00084c18) main_clock2_pane_t1_ParamLimits

0x6f20,	// (0x00084c18) main_clock2_pane_t1

0x6f57,	// (0x00084c4f) main_clock2_pane_t2_ParamLimits

0x6f57,	// (0x00084c4f) main_clock2_pane_t2

0x0004,

0xf80a,	// (0x0008d502) main_clock2_pane_t_ParamLimits

0xf80a,	// (0x0008d502) main_clock2_pane_t

0x6fd9,	// (0x00084cd1) popup_clock_analogue_window_cp03_ParamLimits

0x6fd9,	// (0x00084cd1) popup_clock_analogue_window_cp03

0x6ffc,	// (0x00084cf4) popup_clock_digital_window_cp02_ParamLimits

0x6ffc,	// (0x00084cf4) popup_clock_digital_window_cp02

0x706d,	// (0x00084d65) main_clock2_list_single_pane_ParamLimits

0x706d,	// (0x00084d65) main_clock2_list_single_pane

0x105b,	// (0x0007ed53) list_highlight_pane_cp05

0xcb63,	// (0x0008a85b) main_clock2_list_single_pane_t1

0x3e3f,	// (0x00081b37) popup_toolbar_window_cp04_ParamLimits

0x65a8,	// (0x000842a0) camera2_autofocus_pane_g2_ParamLimits

0x65a8,	// (0x000842a0) camera2_autofocus_pane_g2

0x65b4,	// (0x000842ac) camera2_autofocus_pane_g3_ParamLimits

0x65b4,	// (0x000842ac) camera2_autofocus_pane_g3

0x65c0,	// (0x000842b8) camera2_autofocus_pane_g4_ParamLimits

0x65c0,	// (0x000842b8) camera2_autofocus_pane_g4

0x65cc,	// (0x000842c4) camera2_autofocus_pane_g5_ParamLimits

0x65cc,	// (0x000842c4) camera2_autofocus_pane_g5

0x0004,

0xf753,	// (0x0008d44b) camera2_autofocus_pane_g_ParamLimits

0xf753,	// (0x0008d44b) camera2_autofocus_pane_g

0x674d,	// (0x00084445) camera2_autofocus_pane_cp_g2

0x6755,	// (0x0008444d) camera2_autofocus_pane_cp_g3

0x675d,	// (0x00084455) camera2_autofocus_pane_cp_g4

0x6765,	// (0x0008445d) camera2_autofocus_pane_cp_g5

0x0004,

0xf7b9,	// (0x0008d4b1) camera2_autofocus_pane_cp_g

0x6dae,	// (0x00084aa6) popup_dialer_spcha_window

0xa722,	// (0x0008841a) bg_popup_sub_pane_cp07

0xcb71,	// (0x0008a869) list_spcha_pane

0xcb79,	// (0x0008a871) list_single_spcha_pane_ParamLimits

0xcb79,	// (0x0008a871) list_single_spcha_pane

0xa722,	// (0x0008841a) list_highlight_pane_cp06

0xcb8a,	// (0x0008a882) list_single_spcha_pane_t1

0xbd55,	// (0x00089a4d) popup_call2_audio_out_window_g4_ParamLimits

0xbd55,	// (0x00089a4d) popup_call2_audio_out_window_g4

0xa722,	// (0x0008841a) main_imed2_pane

0xc372,	// (0x0008a06a) popup_imed_adjust2_window

0x5a8c,	// (0x00083784) popup_imed_trans_window_ParamLimits

0x5a8c,	// (0x00083784) popup_imed_trans_window

0xc5d3,	// (0x0008a2cb) popup_blid_sat_info2_window_t1

0xc5e1,	// (0x0008a2d9) popup_blid_sat_info2_window_t2

0x000a,

0xf6e8,	// (0x0008d3e0) popup_blid_sat_info2_window_t

0x7117,	// (0x00084e0f) aid_size_cell_colour_35

0x7137,	// (0x00084e2f) aid_size_cell_colour_112

0x7157,	// (0x00084e4f) aid_size_cell_effect

0xc34c,	// (0x0008a044) bg_tb_trans_pane_cp02

0xb737,	// (0x0008942f) heading_imed_pane

0x7177,	// (0x00084e6f) listscroll_imed_pane

0xcb98,	// (0x0008a890) heading_imed_pane_g1

0xcba0,	// (0x0008a898) heading_imed_pane_t1

0xcbae,	// (0x0008a8a6) grid_imed_colour_35_pane_ParamLimits

0xcbae,	// (0x0008a8a6) grid_imed_colour_35_pane

0x7183,	// (0x00084e7b) grid_imed_effect_pane

0xcbc1,	// (0x0008a8b9) list_imed_aspect_pane

0x7196,	// (0x00084e8e) scroll_pane_cp027_ParamLimits

0x7196,	// (0x00084e8e) scroll_pane_cp027

0x71a2,	// (0x00084e9a) cell_imed_effect_pane_ParamLimits

0x71a2,	// (0x00084e9a) cell_imed_effect_pane

0xcbc9,	// (0x0008a8c1) cell_imed_colour_pane_ParamLimits

0xcbc9,	// (0x0008a8c1) cell_imed_colour_pane

0xcc03,	// (0x0008a8fb) cell_imed_colour_pane_g1_ParamLimits

0xcc03,	// (0x0008a8fb) cell_imed_colour_pane_g1

0xcc14,	// (0x0008a90c) hgihlgiht_grid_pane_cp016_ParamLimits

0xcc14,	// (0x0008a90c) hgihlgiht_grid_pane_cp016

0x71c7,	// (0x00084ebf) cell_imed_effect_pane_g1

0x71cf,	// (0x00084ec7) grid_highlight_pane_cp017

0xcc25,	// (0x0008a91d) list_imed_single_pane_ParamLimits

0xcc25,	// (0x0008a91d) list_imed_single_pane

0xa722,	// (0x0008841a) list_highlight_pane_cp07

0xcc38,	// (0x0008a930) list_imed_aspect_pane_comp1_t1

0xc34c,	// (0x0008a044) bg_tb_trans_pane_cp05

0xcc58,	// (0x0008a950) popup_imed_adjust2_window_g1

0xcc7f,	// (0x0008a977) popup_imed_adjust2_window_t1

0xcc97,	// (0x0008a98f) slider_imed_adjust_pane

0xccab,	// (0x0008a9a3) slider_imed_adjust_pane_g1

0xccbb,	// (0x0008a9b3) slider_imed_adjust_pane_g2

0xcccb,	// (0x0008a9c3) slider_imed_adjust_pane_g3

0xccdc,	// (0x0008a9d4) slider_imed_adjust_pane_g4

0x0003,

0xf827,	// (0x0008d51f) slider_imed_adjust_pane_g

0x71d8,	// (0x00084ed0) aid_size_cell_clipart2

0x71e4,	// (0x00084edc) grid_imed_clipart_pane

0xcced,	// (0x0008a9e5) scroll_pane_cp031

0x71ee,	// (0x00084ee6) cell_imed_clipart_pane_ParamLimits

0x71ee,	// (0x00084ee6) cell_imed_clipart_pane

0x7206,	// (0x00084efe) cell_imed_clipart_pane_g1

0xa722,	// (0x0008841a) grid_highlight_pane_cp014

0x6f01,	// (0x00084bf9) main_clock2_pane_g1_ParamLimits

0x6f01,	// (0x00084bf9) main_clock2_pane_g1

0x7018,	// (0x00084d10) aid_call2_pane_cp10

0x702a,	// (0x00084d22) aid_call_pane_cp10

0x0f28,	// (0x0007ec20) popup_clock_analogue_window_cp10_g1

0x0f28,	// (0x0007ec20) popup_clock_analogue_window_cp10_g2

0x703c,	// (0x00084d34) popup_clock_analogue_window_cp10_g3

0x703c,	// (0x00084d34) popup_clock_analogue_window_cp10_g4

0x0f28,	// (0x0007ec20) popup_clock_analogue_window_cp10_g5

0x0004,

0xf815,	// (0x0008d50d) popup_clock_analogue_window_cp10_g

0x704e,	// (0x00084d46) popup_clock_analogue_window_cp10_t1

0x707f,	// (0x00084d77) clock_digital_number_pane_cp10_ParamLimits

0x707f,	// (0x00084d77) clock_digital_number_pane_cp10

0x7097,	// (0x00084d8f) clock_digital_number_pane_cp11_ParamLimits

0x7097,	// (0x00084d8f) clock_digital_number_pane_cp11

0x70af,	// (0x00084da7) clock_digital_number_pane_cp12_ParamLimits

0x70af,	// (0x00084da7) clock_digital_number_pane_cp12

0x70c7,	// (0x00084dbf) clock_digital_number_pane_cp13_ParamLimits

0x70c7,	// (0x00084dbf) clock_digital_number_pane_cp13

0x70df,	// (0x00084dd7) clock_digital_separator_pane_cp10_ParamLimits

0x70df,	// (0x00084dd7) clock_digital_separator_pane_cp10

0x70f7,	// (0x00084def) popup_clock_digital_window_cp02_t1_ParamLimits

0x70f7,	// (0x00084def) popup_clock_digital_window_cp02_t1

0xade1,	// (0x00088ad9) clock_digital_number_pane_cp10_g1

0xade1,	// (0x00088ad9) clock_digital_number_pane_cp10_g2

0x0001,

0xf830,	// (0x0008d528) clock_digital_number_pane_cp10_g

0xade1,	// (0x00088ad9) clock_digital_separator_pane_cp10_g1

0xade1,	// (0x00088ad9) clock_digital_separator_pane_g2_cp10

0x102b,	// (0x0007ed23) navi_pane_vded_g4

0x1034,	// (0x0007ed2c) navi_pane_vded_g5

0x103d,	// (0x0007ed35) navi_pane_vded_t1

0xa722,	// (0x0008841a) main_vded_pane

0x720f,	// (0x00084f07) main_vded_pane_g1

0x7219,	// (0x00084f11) main_vded_pane_g2

0x7221,	// (0x00084f19) main_vded_pane_g3

0x0002,

0xf835,	// (0x0008d52d) main_vded_pane_g

0x7229,	// (0x00084f21) main_vded_pane_t1

0x7237,	// (0x00084f2f) main_vded_pane_t2

0x0001,

0xf83c,	// (0x0008d534) main_vded_pane_t

0x7245,	// (0x00084f3d) vded_slider_pane

0x724d,	// (0x00084f45) vded_video_pane

0xccf5,	// (0x0008a9ed) vded_video_pane_g1

0x7255,	// (0x00084f4d) vded_video_pane_g2

0xc78f,	// (0x0008a487) vded_video_pane_g3

0x0002,

0xf841,	// (0x0008d539) vded_video_pane_g

0xccff,	// (0x0008a9f7) vded_slider_pane_g1

0xc4e2,	// (0x0008a1da) vded_slider_pane_g2

0xcd08,	// (0x0008aa00) vded_slider_pane_g3

0xcd11,	// (0x0008aa09) vded_slider_pane_g4

0xcd1a,	// (0x0008aa12) vded_slider_pane_g5

0x0004,

0xf848,	// (0x0008d540) vded_slider_pane_g

0x6c4d,	// (0x00084945) mup3_rocker_pane_ParamLimits

0x6c4d,	// (0x00084945) mup3_rocker_pane

0x725e,	// (0x00084f56) mup3_control_keys_pane_g1

0x7266,	// (0x00084f5e) mup3_control_keys_pane_g2

0x726e,	// (0x00084f66) mup3_control_keys_pane_g3

0x7276,	// (0x00084f6e) mup3_control_keys_pane_g4

0x0003,

0xf853,	// (0x0008d54b) mup3_control_keys_pane_g

0x30df,	// (0x00080dd7) popup_toolbar2_fixed_window_cp01_ParamLimits

0x30df,	// (0x00080dd7) popup_toolbar2_fixed_window_cp01

0x6c7b,	// (0x00084973) popup_toolbar2_fixed_window_cp02_ParamLimits

0x6c7b,	// (0x00084973) popup_toolbar2_fixed_window_cp02

0x17bb,	// (0x0007f4b3) popup_call2_audio_second_window_t4_ParamLimits

0x17bb,	// (0x0007f4b3) popup_call2_audio_second_window_t4

0xbbc2,	// (0x000898ba) popup_call2_audio_first_window_t6_ParamLimits

0xbbc2,	// (0x000898ba) popup_call2_audio_first_window_t6

0xbe58,	// (0x00089b50) popup_call2_audio_out_window_t6_ParamLimits

0xbe58,	// (0x00089b50) popup_call2_audio_out_window_t6

0xa722,	// (0x0008841a) main_vitu_pane

0x7286,	// (0x00084f7e) aid_size_cell_itu_ParamLimits

0x7286,	// (0x00084f7e) aid_size_cell_itu

0x1bd0,	// (0x0007f8c8) bg_popup_window_pane_cp08_ParamLimits

0x1bd0,	// (0x0007f8c8) bg_popup_window_pane_cp08

0x729c,	// (0x00084f94) field_vitu_entry_pane_ParamLimits

0x729c,	// (0x00084f94) field_vitu_entry_pane

0x72af,	// (0x00084fa7) grid_vitu_function_pane_ParamLimits

0x72af,	// (0x00084fa7) grid_vitu_function_pane

0x72c4,	// (0x00084fbc) grid_vitu_itu_pane_ParamLimits

0x72c4,	// (0x00084fbc) grid_vitu_itu_pane

0x72da,	// (0x00084fd2) cell_vitu_itu_pane_ParamLimits

0x72da,	// (0x00084fd2) cell_vitu_itu_pane

0x72fc,	// (0x00084ff4) cell_vitu_function_pane_ParamLimits

0x72fc,	// (0x00084ff4) cell_vitu_function_pane

0x1bd0,	// (0x0007f8c8) bg_popup_sub_pane_cp08_ParamLimits

0x1bd0,	// (0x0007f8c8) bg_popup_sub_pane_cp08

0x7315,	// (0x0008500d) field_vitu_entry_pane_t1_ParamLimits

0x7315,	// (0x0008500d) field_vitu_entry_pane_t1

0xcd3b,	// (0x0008aa33) field_vitu_entry_pane_t2_ParamLimits

0xcd3b,	// (0x0008aa33) field_vitu_entry_pane_t2

0x0001,

0xf861,	// (0x0008d559) field_vitu_entry_pane_t_ParamLimits

0xf861,	// (0x0008d559) field_vitu_entry_pane_t

0xcd58,	// (0x0008aa50) bg_button_pane_cp05_ParamLimits

0xcd58,	// (0x0008aa50) bg_button_pane_cp05

0x7331,	// (0x00085029) cell_vitu_itu_pane_g1

0x7349,	// (0x00085041) cell_vitu_itu_pane_t1_ParamLimits

0x7349,	// (0x00085041) cell_vitu_itu_pane_t1

0x735b,	// (0x00085053) cell_vitu_itu_pane_t2_ParamLimits

0x735b,	// (0x00085053) cell_vitu_itu_pane_t2

0x0002,

0xf866,	// (0x0008d55e) cell_vitu_itu_pane_t_ParamLimits

0xf866,	// (0x0008d55e) cell_vitu_itu_pane_t

0xcd66,	// (0x0008aa5e) bg_button_pane_cp07

0x7390,	// (0x00085088) cell_vitu_function_pane_g1

0xae70,	// (0x00088b68) main_calc_pane_g1

0x2f43,	// (0x00080c3b) aid_visual_content_pane

0xa722,	// (0x0008841a) main_vradio_pane

0x7399,	// (0x00085091) main_vradio_pane_g1_ParamLimits

0x7399,	// (0x00085091) main_vradio_pane_g1

0xcd70,	// (0x0008aa68) main_vradio_pane_g2_ParamLimits

0xcd70,	// (0x0008aa68) main_vradio_pane_g2

0x0001,

0xf86d,	// (0x0008d565) main_vradio_pane_g_ParamLimits

0xf86d,	// (0x0008d565) main_vradio_pane_g

0x73af,	// (0x000850a7) main_vradio_pane_t1_ParamLimits

0x73af,	// (0x000850a7) main_vradio_pane_t1

0x73c4,	// (0x000850bc) main_vradio_pane_t2_ParamLimits

0x73c4,	// (0x000850bc) main_vradio_pane_t2

0xcd7d,	// (0x0008aa75) main_vradio_pane_t3_ParamLimits

0xcd7d,	// (0x0008aa75) main_vradio_pane_t3

0x0002,

0xf872,	// (0x0008d56a) main_vradio_pane_t_ParamLimits

0xf872,	// (0x0008d56a) main_vradio_pane_t

0x73d9,	// (0x000850d1) vradio_rocker_control_pane_ParamLimits

0x73d9,	// (0x000850d1) vradio_rocker_control_pane

0x73eb,	// (0x000850e3) vradio_station_info_pane_ParamLimits

0x73eb,	// (0x000850e3) vradio_station_info_pane

0xcd8f,	// (0x0008aa87) vradio_frequency_info_pane_ParamLimits

0xcd8f,	// (0x0008aa87) vradio_frequency_info_pane

0xc78f,	// (0x0008a487) vradio_station_info_pane_g1

0xcd9e,	// (0x0008aa96) vradio_station_info_pane_t1_ParamLimits

0xcd9e,	// (0x0008aa96) vradio_station_info_pane_t1

0xcdc0,	// (0x0008aab8) vradio_station_info_pane_t2_ParamLimits

0xcdc0,	// (0x0008aab8) vradio_station_info_pane_t2

0x0001,

0xf879,	// (0x0008d571) vradio_station_info_pane_t_ParamLimits

0xf879,	// (0x0008d571) vradio_station_info_pane_t

0xcdd2,	// (0x0008aaca) vradio_tuning_pane

0xcdda,	// (0x0008aad2) vradio_rocker_control_pane_g1

0xcde2,	// (0x0008aada) vradio_rocker_control_pane_g2

0xcdea,	// (0x0008aae2) vradio_rocker_control_pane_g3

0xcdf2,	// (0x0008aaea) vradio_rocker_control_pane_g4

0xcdfa,	// (0x0008aaf2) vradio_rocker_control_pane_g5

0x0004,

0xf87e,	// (0x0008d576) vradio_rocker_control_pane_g

0x73fb,	// (0x000850f3) vradio_frequency_info_pane_g1

0xce02,	// (0x0008aafa) vradio_frequency_info_pane_t1_ParamLimits

0xce02,	// (0x0008aafa) vradio_frequency_info_pane_t1

0x7405,	// (0x000850fd) vradio_tuning_pane_g1

0x740e,	// (0x00085106) vradio_tuning_pane_t1

0xa754,	// (0x0008844c) area_side_right_pane_ParamLimits

0xa754,	// (0x0008844c) area_side_right_pane

0xc313,	// (0x0008a00b) status_small_pane_g1

0xc31b,	// (0x0008a013) status_small_pane_g2

0xc324,	// (0x0008a01c) status_small_pane_g3

0xc32d,	// (0x0008a025) status_small_pane_g4

0x0003,

0xf63e,	// (0x0008d336) status_small_pane_g

0xc336,	// (0x0008a02e) status_small_pane_t1

0xa722,	// (0x0008841a) main_video3_pane

0xce16,	// (0x0008ab0e) cams_zoom_vslider_pane

0xce1e,	// (0x0008ab16) image3_wide_pane_ParamLimits

0xce1e,	// (0x0008ab16) image3_wide_pane

0xce38,	// (0x0008ab30) image3_wide_small_pane

0xce42,	// (0x0008ab3a) main_video3_pane_g1_ParamLimits

0xce42,	// (0x0008ab3a) main_video3_pane_g1

0xce5e,	// (0x0008ab56) main_video3_pane_g2_ParamLimits

0xce5e,	// (0x0008ab56) main_video3_pane_g2

0x0001,

0xf889,	// (0x0008d581) main_video3_pane_g_ParamLimits

0xf889,	// (0x0008d581) main_video3_pane_g

0xce7a,	// (0x0008ab72) main_video3_pane_t1_ParamLimits

0xce7a,	// (0x0008ab72) main_video3_pane_t1

0xcea5,	// (0x0008ab9d) main_video3_pane_t2_ParamLimits

0xcea5,	// (0x0008ab9d) main_video3_pane_t2

0xced0,	// (0x0008abc8) main_video3_pane_t3_ParamLimits

0xced0,	// (0x0008abc8) main_video3_pane_t3

0x0002,

0xf88e,	// (0x0008d586) main_video3_pane_t_ParamLimits

0xf88e,	// (0x0008d586) main_video3_pane_t

0xcefb,	// (0x0008abf3) cams_zoom_vslider_pane_g1

0xcf04,	// (0x0008abfc) cams_zoom_vslider_pane_g2

0x0001,

0xf895,	// (0x0008d58d) cams_zoom_vslider_pane_g

0xcf0c,	// (0x0008ac04) small_slider_vertical_pane

0xc78f,	// (0x0008a487) small_slider_vertical_pane_g1

0xc78f,	// (0x0008a487) small_slider_vertical_pane_g2

0xcf14,	// (0x0008ac0c) small_slider_vertical_pane_g3

0x0002,

0xf89a,	// (0x0008d592) small_slider_vertical_pane_g

0xa722,	// (0x0008841a) main_hwr_training_pane

0xcf1d,	// (0x0008ac15) hwr_training_instruct_pane_ParamLimits

0xcf1d,	// (0x0008ac15) hwr_training_instruct_pane

0x741d,	// (0x00085115) hwr_training_navi_pane_ParamLimits

0x741d,	// (0x00085115) hwr_training_navi_pane

0x7434,	// (0x0008512c) hwr_training_write_pane_ParamLimits

0x7434,	// (0x0008512c) hwr_training_write_pane

0xa722,	// (0x0008841a) bg_frame_shadow_pane

0xcf4c,	// (0x0008ac44) hwr_training_write_pane_g1

0xcf54,	// (0x0008ac4c) hwr_training_write_pane_g2

0xcf5c,	// (0x0008ac54) hwr_training_write_pane_g3

0xcf64,	// (0x0008ac5c) hwr_training_write_pane_g4

0xcf6c,	// (0x0008ac64) hwr_training_write_pane_g5

0xcf74,	// (0x0008ac6c) hwr_training_write_pane_g6

0xcf7c,	// (0x0008ac74) hwr_training_write_pane_g7

0x0006,

0xf8a1,	// (0x0008d599) hwr_training_write_pane_g

0xebd9,	// (0x0008c8d1) hwr_training_navi_pane_g1_ParamLimits

0xebd9,	// (0x0008c8d1) hwr_training_navi_pane_g1

0xebeb,	// (0x0008c8e3) hwr_training_navi_pane_g2_ParamLimits

0xebeb,	// (0x0008c8e3) hwr_training_navi_pane_g2

0xebfd,	// (0x0008c8f5) hwr_training_navi_pane_g3_ParamLimits

0xebfd,	// (0x0008c8f5) hwr_training_navi_pane_g3

0xec0d,	// (0x0008c905) hwr_training_navi_pane_g4_ParamLimits

0xec0d,	// (0x0008c905) hwr_training_navi_pane_g4

0x0004,

0xf8b0,	// (0x0008d5a8) hwr_training_navi_pane_g_ParamLimits

0xf8b0,	// (0x0008d5a8) hwr_training_navi_pane_g

0xec1a,	// (0x0008c912) hwr_training_navi_pane_t1

0x7474,	// (0x0008516c) list_single_hwr_training_instruct_pane_ParamLimits

0x7474,	// (0x0008516c) list_single_hwr_training_instruct_pane

0xcf84,	// (0x0008ac7c) list_single_hwr_training_instruct_pane_t1

0xc6cf,	// (0x0008a3c7) bg_frame_shadow_pane_g1

0xcf93,	// (0x0008ac8b) bg_frame_shadow_pane_g2

0xcf9b,	// (0x0008ac93) bg_frame_shadow_pane_g3

0xcfa3,	// (0x0008ac9b) bg_frame_shadow_pane_g4

0xcfab,	// (0x0008aca3) bg_frame_shadow_pane_g5

0xcfb3,	// (0x0008acab) bg_frame_shadow_pane_g6

0xcfbb,	// (0x0008acb3) bg_frame_shadow_pane_g7

0xb007,	// (0x00088cff) bg_frame_shadow_pane_g8

0x0007,

0xf8bb,	// (0x0008d5b3) bg_frame_shadow_pane_g

0xa722,	// (0x0008841a) main_video_tele_dialer_pane

0x748c,	// (0x00085184) aid_size_cell_video_keypad_ParamLimits

0x748c,	// (0x00085184) aid_size_cell_video_keypad

0x74a6,	// (0x0008519e) grid_video_dialer_keypad_pane_ParamLimits

0x74a6,	// (0x0008519e) grid_video_dialer_keypad_pane

0x74e8,	// (0x000851e0) video_down_pane_cp_ParamLimits

0x74e8,	// (0x000851e0) video_down_pane_cp

0x7518,	// (0x00085210) cell_video_dialer_keypad_pane_ParamLimits

0x7518,	// (0x00085210) cell_video_dialer_keypad_pane

0xcfc3,	// (0x0008acbb) bg_button_pane_cp08_ParamLimits

0xcfc3,	// (0x0008acbb) bg_button_pane_cp08

0x753a,	// (0x00085232) cell_video_dialer_keypad_pane_g1_ParamLimits

0x753a,	// (0x00085232) cell_video_dialer_keypad_pane_g1

0x6c37,	// (0x0008492f) mup3_rocker2_pane_ParamLimits

0x6c37,	// (0x0008492f) mup3_rocker2_pane

0xc78f,	// (0x0008a487) mup3_rocker2_pane_g1

0x5985,	// (0x0008367d) main_dialer2_pane

0xa722,	// (0x0008841a) main_mp4_pane

0xec30,	// (0x0008c928) main_mp4_pane_g1_ParamLimits

0xec30,	// (0x0008c928) main_mp4_pane_g1

0xec30,	// (0x0008c928) main_mp4_pane_g2_ParamLimits

0xec30,	// (0x0008c928) main_mp4_pane_g2

0x7575,	// (0x0008526d) main_mp4_pane_g3_ParamLimits

0x7575,	// (0x0008526d) main_mp4_pane_g3

0xec3e,	// (0x0008c936) main_mp4_pane_g4_ParamLimits

0xec3e,	// (0x0008c936) main_mp4_pane_g4

0xec6c,	// (0x0008c964) main_mp4_pane_g5_ParamLimits

0xec6c,	// (0x0008c964) main_mp4_pane_g5

0x0005,

0xf8db,	// (0x0008d5d3) main_mp4_pane_g_ParamLimits

0xf8db,	// (0x0008d5d3) main_mp4_pane_g

0xecc8,	// (0x0008c9c0) main_mp4_pane_t1_ParamLimits

0xecc8,	// (0x0008c9c0) main_mp4_pane_t1

0xed20,	// (0x0008ca18) main_mp4_pane_t2_ParamLimits

0xed20,	// (0x0008ca18) main_mp4_pane_t2

0xcfcf,	// (0x0008acc7) main_mp4_pane_t3_ParamLimits

0xcfcf,	// (0x0008acc7) main_mp4_pane_t3

0xed72,	// (0x0008ca6a) main_mp4_pane_t4_ParamLimits

0xed72,	// (0x0008ca6a) main_mp4_pane_t4

0x0003,

0xf8e8,	// (0x0008d5e0) main_mp4_pane_t_ParamLimits

0xf8e8,	// (0x0008d5e0) main_mp4_pane_t

0xedb2,	// (0x0008caaa) mp4_progress_pane_ParamLimits

0xedb2,	// (0x0008caaa) mp4_progress_pane

0xedf6,	// (0x0008caee) mp4_rocker_pane_ParamLimits

0xedf6,	// (0x0008caee) mp4_rocker_pane

0xcffd,	// (0x0008acf5) mp4_progress_pane_t1

0xd014,	// (0x0008ad0c) mp4_progress_pane_t2

0x0001,

0xf8f1,	// (0x0008d5e9) mp4_progress_pane_t

0xd02b,	// (0x0008ad23) mup_progress_pane_cp04

0xd037,	// (0x0008ad2f) mp4_rocker_pane_g1

0x75a5,	// (0x0008529d) aid_cell_size_keypad2_ParamLimits

0x75a5,	// (0x0008529d) aid_cell_size_keypad2

0x75bf,	// (0x000852b7) dialer2_ne_pane_ParamLimits

0x75bf,	// (0x000852b7) dialer2_ne_pane

0x75d4,	// (0x000852cc) grid_dialer2_keypad_pane_ParamLimits

0x75d4,	// (0x000852cc) grid_dialer2_keypad_pane

0xc57c,	// (0x0008a274) bg_popup_call_pane_cp07_ParamLimits

0xc57c,	// (0x0008a274) bg_popup_call_pane_cp07

0x75ea,	// (0x000852e2) dialer2_ne_pane_t1_ParamLimits

0x75ea,	// (0x000852e2) dialer2_ne_pane_t1

0x7627,	// (0x0008531f) cell_dialer2_keypad_pane_ParamLimits

0x7627,	// (0x0008531f) cell_dialer2_keypad_pane

0xd053,	// (0x0008ad4b) bg_button_pane_pane_cp04_ParamLimits

0xd053,	// (0x0008ad4b) bg_button_pane_pane_cp04

0x7649,	// (0x00085341) cell_dialer2_keypad_pane_g1_ParamLimits

0x7649,	// (0x00085341) cell_dialer2_keypad_pane_g1

0x3d84,	// (0x00081a7c) aid_placing_vt_set_content_ParamLimits

0x3d84,	// (0x00081a7c) aid_placing_vt_set_content

0x3da2,	// (0x00081a9a) aid_placing_vt_set_title_ParamLimits

0x3da2,	// (0x00081a9a) aid_placing_vt_set_title

0xa722,	// (0x0008841a) main_image3_pane

0x76d8,	// (0x000853d0) area_side_right_pane_cp01_ParamLimits

0x76d8,	// (0x000853d0) area_side_right_pane_cp01

0xec30,	// (0x0008c928) main_image3_pane_g1_ParamLimits

0xec30,	// (0x0008c928) main_image3_pane_g1

0x76ef,	// (0x000853e7) main_image3_pane_g2_ParamLimits

0x76ef,	// (0x000853e7) main_image3_pane_g2

0x7715,	// (0x0008540d) main_image3_pane_g3_ParamLimits

0x7715,	// (0x0008540d) main_image3_pane_g3

0x773b,	// (0x00085433) main_image3_pane_g4_ParamLimits

0x773b,	// (0x00085433) main_image3_pane_g4

0x0003,

0xf900,	// (0x0008d5f8) main_image3_pane_g_ParamLimits

0xf900,	// (0x0008d5f8) main_image3_pane_g

0x7761,	// (0x00085459) main_image3_pane_t1_ParamLimits

0x7761,	// (0x00085459) main_image3_pane_t1

0x77b9,	// (0x000854b1) main_image3_pane_t2_ParamLimits

0x77b9,	// (0x000854b1) main_image3_pane_t2

0x780b,	// (0x00085503) main_image3_pane_t3_ParamLimits

0x780b,	// (0x00085503) main_image3_pane_t3

0x0003,

0xf909,	// (0x0008d601) main_image3_pane_t_ParamLimits

0xf909,	// (0x0008d601) main_image3_pane_t

0x1bd0,	// (0x0007f8c8) grid_sctrl_middle_pane_cp01_ParamLimits

0x1bd0,	// (0x0007f8c8) grid_sctrl_middle_pane_cp01

0x788b,	// (0x00085583) cell_sctrl_middle_pane_cp01_ParamLimits

0x788b,	// (0x00085583) cell_sctrl_middle_pane_cp01

0x78a8,	// (0x000855a0) cell_sctrl_middle_pane_cp01_g1_ParamLimits

0x78a8,	// (0x000855a0) cell_sctrl_middle_pane_cp01_g1

0xa722,	// (0x0008841a) main_call4_pane

0x78be,	// (0x000855b6) aid_size_button_call4_ParamLimits

0x78be,	// (0x000855b6) aid_size_button_call4

0x78eb,	// (0x000855e3) call4_windows_pane_ParamLimits

0x78eb,	// (0x000855e3) call4_windows_pane

0x7901,	// (0x000855f9) grid_call4_button_pane_ParamLimits

0x7901,	// (0x000855f9) grid_call4_button_pane

0xd077,	// (0x0008ad6f) call4_windows_conf_pane

0x7920,	// (0x00085618) popup_call4_audio_first_window_ParamLimits

0x7920,	// (0x00085618) popup_call4_audio_first_window

0x7940,	// (0x00085638) popup_call4_audio_second_window_ParamLimits

0x7940,	// (0x00085638) popup_call4_audio_second_window

0xd0aa,	// (0x0008ada2) popup_call4_audio_wait_window_ParamLimits

0xd0aa,	// (0x0008ada2) popup_call4_audio_wait_window

0x7952,	// (0x0008564a) cell_call4_button_pane_ParamLimits

0x7952,	// (0x0008564a) cell_call4_button_pane

0x7977,	// (0x0008566f) bg_button_pane_cp09_ParamLimits

0x7977,	// (0x0008566f) bg_button_pane_cp09

0x7983,	// (0x0008567b) cell_call4_button_pane_g1_ParamLimits

0x7983,	// (0x0008567b) cell_call4_button_pane_g1

0x79a9,	// (0x000856a1) cell_call4_button_pane_t1_ParamLimits

0x79a9,	// (0x000856a1) cell_call4_button_pane_t1

0xd0f0,	// (0x0008ade8) popup_call4_audio_conf_window_ParamLimits

0xd0f0,	// (0x0008ade8) popup_call4_audio_conf_window

0x6c91,	// (0x00084989) mup3_progress_pane_t1_ParamLimits

0x6ca7,	// (0x0008499f) mup3_progress_pane_t2_ParamLimits

0xcaad,	// (0x0008a7a5) mup3_progress_pane_t3_ParamLimits

0xf7e2,	// (0x0008d4da) mup3_progress_pane_t_ParamLimits

0xcac4,	// (0x0008a7bc) mup_progress_pane_cp03_ParamLimits

0x727e,	// (0x00084f76) mup3_control_keys_pane_g4_copy1

0xede0,	// (0x0008cad8) mp4_rocker2_pane_ParamLimits

0xede0,	// (0x0008cad8) mp4_rocker2_pane

0xd104,	// (0x0008adfc) mp4_rocker2_pane_g1

0xd10c,	// (0x0008ae04) mp4_rocker2_pane_g2

0xee46,	// (0x0008cb3e) mp4_rocker2_pane_g3

0xee4e,	// (0x0008cb46) mp4_rocker2_pane_g4

0xee56,	// (0x0008cb4e) mp4_rocker2_pane_g5

0x0004,

0xf912,	// (0x0008d60a) mp4_rocker2_pane_g

0xa722,	// (0x0008841a) main_camera4_pane

0xa722,	// (0x0008841a) main_video4_pane

0x74ba,	// (0x000851b2) main_video_tele_dialer_pane_t1_ParamLimits

0x74ba,	// (0x000851b2) main_video_tele_dialer_pane_t1

0x74d1,	// (0x000851c9) main_video_tele_dialer_pane_t2_ParamLimits

0x74d1,	// (0x000851c9) main_video_tele_dialer_pane_t2

0x0001,

0xf8cc,	// (0x0008d5c4) main_video_tele_dialer_pane_t_ParamLimits

0xf8cc,	// (0x0008d5c4) main_video_tele_dialer_pane_t

0x79e7,	// (0x000856df) cam4_autofocus_pane_ParamLimits

0x79e7,	// (0x000856df) cam4_autofocus_pane

0x79fb,	// (0x000856f3) cam4_image_uncrop_pane_ParamLimits

0x79fb,	// (0x000856f3) cam4_image_uncrop_pane

0x7a12,	// (0x0008570a) cam4_indicators_pane_ParamLimits

0x7a12,	// (0x0008570a) cam4_indicators_pane

0x7a36,	// (0x0008572e) main_camera4_pane_g1_ParamLimits

0x7a36,	// (0x0008572e) main_camera4_pane_g1

0x7a42,	// (0x0008573a) main_camera4_pane_g2_ParamLimits

0x7a42,	// (0x0008573a) main_camera4_pane_g2

0x7a42,	// (0x0008573a) main_camera4_pane_g3_ParamLimits

0x7a42,	// (0x0008573a) main_camera4_pane_g3

0x7a4e,	// (0x00085746) main_camera4_pane_g4_ParamLimits

0x7a4e,	// (0x00085746) main_camera4_pane_g4

0x7a5a,	// (0x00085752) main_camera4_pane_g5_ParamLimits

0x7a5a,	// (0x00085752) main_camera4_pane_g5

0x0005,

0xf91d,	// (0x0008d615) main_camera4_pane_g_ParamLimits

0xf91d,	// (0x0008d615) main_camera4_pane_g

0x7a77,	// (0x0008576f) main_camera4_pane_t1_ParamLimits

0x7a77,	// (0x0008576f) main_camera4_pane_t1

0xee6e,	// (0x0008cb66) bg_tb_trans_pane_cp06

0xee84,	// (0x0008cb7c) cam4_indicators_pane_g1

0xee94,	// (0x0008cb8c) cam4_indicators_pane_g2

0x0002,

0xf938,	// (0x0008d630) cam4_indicators_pane_g

0xeeb4,	// (0x0008cbac) cam4_indicators_pane_t1

0x7ade,	// (0x000857d6) main_video4_pane_g1_ParamLimits

0x7ade,	// (0x000857d6) main_video4_pane_g1

0x7af0,	// (0x000857e8) main_video4_pane_g2_ParamLimits

0x7af0,	// (0x000857e8) main_video4_pane_g2

0x7af0,	// (0x000857e8) main_video4_pane_g3_ParamLimits

0x7af0,	// (0x000857e8) main_video4_pane_g3

0x7aff,	// (0x000857f7) main_video4_pane_g4_ParamLimits

0x7aff,	// (0x000857f7) main_video4_pane_g4

0x0004,

0xf93f,	// (0x0008d637) main_video4_pane_g_ParamLimits

0xf93f,	// (0x0008d637) main_video4_pane_g

0x7b1d,	// (0x00085815) vid4_indicators_pane_ParamLimits

0x7b1d,	// (0x00085815) vid4_indicators_pane

0x7b45,	// (0x0008583d) video4_image_uncrop_cif_pane_ParamLimits

0x7b45,	// (0x0008583d) video4_image_uncrop_cif_pane

0x7b5d,	// (0x00085855) video4_image_uncrop_nhd_pane_ParamLimits

0x7b5d,	// (0x00085855) video4_image_uncrop_nhd_pane

0x7b71,	// (0x00085869) video4_image_uncrop_vga_pane_ParamLimits

0x7b71,	// (0x00085869) video4_image_uncrop_vga_pane

0xeed6,	// (0x0008cbce) bg_tb_trans_pane_cp07

0x7b89,	// (0x00085881) vid4_indicators_pane_g1

0x7b96,	// (0x0008588e) vid4_indicators_pane_g2

0x7ba3,	// (0x0008589b) vid4_indicators_pane_g3

0x0004,

0xf94a,	// (0x0008d642) vid4_indicators_pane_g

0x7bc8,	// (0x000858c0) vid4_indicators_pane_t1

0x7bda,	// (0x000858d2) cam4_autofocus_pane_g1

0x7be2,	// (0x000858da) cam4_autofocus_pane_g2

0x7bea,	// (0x000858e2) cam4_autofocus_pane_g3

0x0002,

0xf955,	// (0x0008d64d) cam4_autofocus_pane_g

0x7bf2,	// (0x000858ea) cam4_autofocus_pane_g3_copy1

0x74fc,	// (0x000851f4) video_down_pane_cp_t1

0x750a,	// (0x00085202) video_down_pane_cp_t2

0x0001,

0xf8d1,	// (0x0008d5c9) video_down_pane_cp_t

0x1bd0,	// (0x0007f8c8) popup_vitu2_window_ParamLimits

0x1bd0,	// (0x0007f8c8) popup_vitu2_window

0x7bfa,	// (0x000858f2) aid_size_cell2_itu2_ParamLimits

0x7bfa,	// (0x000858f2) aid_size_cell2_itu2

0x7c20,	// (0x00085918) aid_size_cell_itu2_ParamLimits

0x7c20,	// (0x00085918) aid_size_cell_itu2

0x7c72,	// (0x0008596a) bg_popup_window_pane_cp09_ParamLimits

0x7c72,	// (0x0008596a) bg_popup_window_pane_cp09

0x7c80,	// (0x00085978) field_vitu2_entry_pane_ParamLimits

0x7c80,	// (0x00085978) field_vitu2_entry_pane

0x7c9a,	// (0x00085992) grid_vitu2_function_pane_ParamLimits

0x7c9a,	// (0x00085992) grid_vitu2_function_pane

0x7cd5,	// (0x000859cd) grid_vitu2_itu_pane_ParamLimits

0x7cd5,	// (0x000859cd) grid_vitu2_itu_pane

0x7d3a,	// (0x00085a32) cell_vitu2_itu_pane_ParamLimits

0x7d3a,	// (0x00085a32) cell_vitu2_itu_pane

0x7d5c,	// (0x00085a54) cell_vitu2_function_pane_ParamLimits

0x7d5c,	// (0x00085a54) cell_vitu2_function_pane

0xd114,	// (0x0008ae0c) bg_popup_call_pane_cp08_ParamLimits

0xd114,	// (0x0008ae0c) bg_popup_call_pane_cp08

0xd12d,	// (0x0008ae25) field_vitu2_entry_pane_g1

0xd139,	// (0x0008ae31) field_vitu2_entry_pane_g2

0x0002,

0xf95c,	// (0x0008d654) field_vitu2_entry_pane_g

0xd153,	// (0x0008ae4b) field_vitu2_entry_pane_t1_ParamLimits

0xd153,	// (0x0008ae4b) field_vitu2_entry_pane_t1

0xd16e,	// (0x0008ae66) field_vitu2_entry_pane_t2_ParamLimits

0xd16e,	// (0x0008ae66) field_vitu2_entry_pane_t2

0x0001,

0xf963,	// (0x0008d65b) field_vitu2_entry_pane_t_ParamLimits

0xf963,	// (0x0008d65b) field_vitu2_entry_pane_t

0x7d9b,	// (0x00085a93) bg_button_pane_cp010_ParamLimits

0x7d9b,	// (0x00085a93) bg_button_pane_cp010

0x7da9,	// (0x00085aa1) cell_vitu2_itu_pane_g1

0x7dc7,	// (0x00085abf) cell_vitu2_itu_pane_t1_ParamLimits

0x7dc7,	// (0x00085abf) cell_vitu2_itu_pane_t1

0x2e36,	// (0x00080b2e) cell_vitu2_itu_pane_t2_ParamLimits

0x2e36,	// (0x00080b2e) cell_vitu2_itu_pane_t2

0x0002,

0xf96d,	// (0x0008d665) cell_vitu2_itu_pane_t_ParamLimits

0xf96d,	// (0x0008d665) cell_vitu2_itu_pane_t

0xeee4,	// (0x0008cbdc) bg_button_pane_cp011

0x7e2d,	// (0x00085b25) cell_vitu2_function_pane_g1

0xa722,	// (0x0008841a) main_myfav_hc_pane

0x7857,	// (0x0008554f) popup_image3_note_pane_ParamLimits

0x7857,	// (0x0008554f) popup_image3_note_pane

0x7871,	// (0x00085569) popup_image3_tool_bar_pane_ParamLimits

0x7871,	// (0x00085569) popup_image3_tool_bar_pane

0x2eba,	// (0x00080bb2) cell_vitu2_itu_pane_t3_ParamLimits

0x2eba,	// (0x00080bb2) cell_vitu2_itu_pane_t3

0xa722,	// (0x0008841a) bg_popup_trans_pane

0xd193,	// (0x0008ae8b) grid_image3_tool_bar_pane

0xd19d,	// (0x0008ae95) bg_popup_trans_pane_g1

0xb4b2,	// (0x000891aa) bg_popup_trans_pane_g2

0xd1a5,	// (0x0008ae9d) bg_popup_trans_pane_g3

0xd1ad,	// (0x0008aea5) bg_popup_trans_pane_g4

0xd1b5,	// (0x0008aead) bg_popup_trans_pane_g5

0xd1bd,	// (0x0008aeb5) bg_popup_trans_pane_g6

0xd1c5,	// (0x0008aebd) bg_popup_trans_pane_g7

0xd1cd,	// (0x0008aec5) bg_popup_trans_pane_g8

0xb492,	// (0x0008918a) bg_popup_trans_pane_g9

0x0008,

0xf974,	// (0x0008d66c) bg_popup_trans_pane_g

0x1bea,	// (0x0007f8e2) cell_image3_tool_bar_pane_ParamLimits

0x1bea,	// (0x0007f8e2) cell_image3_tool_bar_pane

0xc78f,	// (0x0008a487) cell_image3_tool_bar_pane_g1

0xa722,	// (0x0008841a) bg_popup_trans_pane_cp1

0xd1d5,	// (0x0008aecd) popup_image3_note_pane_t1

0xd1e3,	// (0x0008aedb) popup_image3_note_pane_t2

0xd1f1,	// (0x0008aee9) popup_image3_note_pane_t3

0x0002,

0xf987,	// (0x0008d67f) popup_image3_note_pane_t

0xd1ff,	// (0x0008aef7) popup_image3_note_pane_t3_copy1

0x7e41,	// (0x00085b39) bg_myfav_hc_instruction_pane_ParamLimits

0x7e41,	// (0x00085b39) bg_myfav_hc_instruction_pane

0x7e53,	// (0x00085b4b) cell_myfav_contact_pane_ParamLimits

0x7e53,	// (0x00085b4b) cell_myfav_contact_pane

0x7e6d,	// (0x00085b65) cell_myfav_contact_pane_cp1_ParamLimits

0x7e6d,	// (0x00085b65) cell_myfav_contact_pane_cp1

0x7e83,	// (0x00085b7b) cell_myfav_contact_pane_cp2_ParamLimits

0x7e83,	// (0x00085b7b) cell_myfav_contact_pane_cp2

0x7e99,	// (0x00085b91) cell_myfav_contact_pane_cp3_ParamLimits

0x7e99,	// (0x00085b91) cell_myfav_contact_pane_cp3

0x7eae,	// (0x00085ba6) cell_myfav_contact_pane_cp4_ParamLimits

0x7eae,	// (0x00085ba6) cell_myfav_contact_pane_cp4

0x7ec2,	// (0x00085bba) cell_myfav_contact_pane_cp5_ParamLimits

0x7ec2,	// (0x00085bba) cell_myfav_contact_pane_cp5

0x7ed6,	// (0x00085bce) cell_myfav_contact_pane_cp6_ParamLimits

0x7ed6,	// (0x00085bce) cell_myfav_contact_pane_cp6

0x7eea,	// (0x00085be2) cell_myfav_contact_pane_cp7_ParamLimits

0x7eea,	// (0x00085be2) cell_myfav_contact_pane_cp7

0xd20d,	// (0x0008af05) listscroll_gen_pane_cp05

0x7f02,	// (0x00085bfa) main_myfav_hc_pane_g1_ParamLimits

0x7f02,	// (0x00085bfa) main_myfav_hc_pane_g1

0x7f18,	// (0x00085c10) main_myfav_hc_pane_g2_ParamLimits

0x7f18,	// (0x00085c10) main_myfav_hc_pane_g2

0x0002,

0xf98e,	// (0x0008d686) main_myfav_hc_pane_g_ParamLimits

0xf98e,	// (0x0008d686) main_myfav_hc_pane_g

0x7f42,	// (0x00085c3a) main_myfav_hc_pane_t1_ParamLimits

0x7f42,	// (0x00085c3a) main_myfav_hc_pane_t1

0xd216,	// (0x0008af0e) main_myfav_hc_pane_t2_ParamLimits

0xd216,	// (0x0008af0e) main_myfav_hc_pane_t2

0xd228,	// (0x0008af20) main_myfav_hc_pane_t3_ParamLimits

0xd228,	// (0x0008af20) main_myfav_hc_pane_t3

0x7f57,	// (0x00085c4f) main_myfav_hc_pane_t4_ParamLimits

0x7f57,	// (0x00085c4f) main_myfav_hc_pane_t4

0x0004,

0xf995,	// (0x0008d68d) main_myfav_hc_pane_t_ParamLimits

0xf995,	// (0x0008d68d) main_myfav_hc_pane_t

0xc78f,	// (0x0008a487) bg_myfav_hc_instruction_pane_g1

0xd23a,	// (0x0008af32) cell_myfav_contact_pane_g1_ParamLimits

0xd23a,	// (0x0008af32) cell_myfav_contact_pane_g1

0xd23a,	// (0x0008af32) cell_myfav_contact_pane_g2_ParamLimits

0xd23a,	// (0x0008af32) cell_myfav_contact_pane_g2

0xd246,	// (0x0008af3e) cell_myfav_contact_pane_g3_ParamLimits

0xd246,	// (0x0008af3e) cell_myfav_contact_pane_g3

0xca97,	// (0x0008a78f) cell_myfav_contact_pane_g4_ParamLimits

0xca97,	// (0x0008a78f) cell_myfav_contact_pane_g4

0xd253,	// (0x0008af4b) cell_myfav_contact_pane_g5_ParamLimits

0xd253,	// (0x0008af4b) cell_myfav_contact_pane_g5

0x0004,

0xf9a0,	// (0x0008d698) cell_myfav_contact_pane_g_ParamLimits

0xf9a0,	// (0x0008d698) cell_myfav_contact_pane_g

0x7f2e,	// (0x00085c26) main_myfav_hc_pane_g3_ParamLimits

0x7f2e,	// (0x00085c26) main_myfav_hc_pane_g3

0x3065,	// (0x00080d5d) popup_adpt_find_window

0x7f7b,	// (0x00085c73) afind_page_pane_ParamLimits

0x7f7b,	// (0x00085c73) afind_page_pane

0x7f90,	// (0x00085c88) aid_size_cell_afind_ParamLimits

0x7f90,	// (0x00085c88) aid_size_cell_afind

0x7fae,	// (0x00085ca6) bg_popup_sub_pane_cp09_ParamLimits

0x7fae,	// (0x00085ca6) bg_popup_sub_pane_cp09

0x7fbb,	// (0x00085cb3) find_pane_cp01_ParamLimits

0x7fbb,	// (0x00085cb3) find_pane_cp01

0xd25f,	// (0x0008af57) grid_afind_control_pane_ParamLimits

0xd25f,	// (0x0008af57) grid_afind_control_pane

0x7fc8,	// (0x00085cc0) grid_afind_pane_ParamLimits

0x7fc8,	// (0x00085cc0) grid_afind_pane

0x7fe6,	// (0x00085cde) cell_afind_pane_ParamLimits

0x7fe6,	// (0x00085cde) cell_afind_pane

0xc78f,	// (0x0008a487) afind_page_pane_g1

0x8033,	// (0x00085d2b) afind_page_pane_g2

0x803c,	// (0x00085d34) afind_page_pane_g3

0x0002,

0xf9ab,	// (0x0008d6a3) afind_page_pane_g

0x8045,	// (0x00085d3d) afind_page_pane_t1

0xd273,	// (0x0008af6b) cell_afind_grid_control_pane_ParamLimits

0xd273,	// (0x0008af6b) cell_afind_grid_control_pane

0xd053,	// (0x0008ad4b) bg_button_pane_cp69_ParamLimits

0xd053,	// (0x0008ad4b) bg_button_pane_cp69

0x8065,	// (0x00085d5d) cell_afind_pane_g1_ParamLimits

0x8065,	// (0x00085d5d) cell_afind_pane_g1

0x8072,	// (0x00085d6a) cell_afind_pane_t1_ParamLimits

0x8072,	// (0x00085d6a) cell_afind_pane_t1

0xb1f6,	// (0x00088eee) bg_button_pane_cp72

0xd282,	// (0x0008af7a) cell_afind_grid_control_pane_g1

0x5527,	// (0x0008321f) aid_image_placing_area_ParamLimits

0x5527,	// (0x0008321f) aid_image_placing_area

0xcd23,	// (0x0008aa1b) field_vitu_entry_pane_g1_ParamLimits

0xcd23,	// (0x0008aa1b) field_vitu_entry_pane_g1

0xcd2f,	// (0x0008aa27) field_vitu_entry_pane_g2_ParamLimits

0xcd2f,	// (0x0008aa27) field_vitu_entry_pane_g2

0x0001,

0xf85c,	// (0x0008d554) field_vitu_entry_pane_g_ParamLimits

0xf85c,	// (0x0008d554) field_vitu_entry_pane_g

0x7331,	// (0x00085029) cell_vitu_itu_pane_g1_ParamLimits

0x7373,	// (0x0008506b) cell_vitu_itu_pane_t3_ParamLimits

0x7373,	// (0x0008506b) cell_vitu_itu_pane_t3

0xcffd,	// (0x0008acf5) mp4_progress_pane_t1_ParamLimits

0xd014,	// (0x0008ad0c) mp4_progress_pane_t2_ParamLimits

0xf8f1,	// (0x0008d5e9) mp4_progress_pane_t_ParamLimits

0xd02b,	// (0x0008ad23) mup_progress_pane_cp04_ParamLimits

0x7f69,	// (0x00085c61) main_myfav_hc_pane_t5_ParamLimits

0x7f69,	// (0x00085c61) main_myfav_hc_pane_t5

0xa744,	// (0x0008843c) aid_zoom_text_primary

0x3065,	// (0x00080d5d) popup_adpt_find_window_ParamLimits

0x1bd0,	// (0x0007f8c8) main_cam_set_pane

0x7a24,	// (0x0008571c) cam4_zoom_pane_ParamLimits

0x7a24,	// (0x0008571c) cam4_zoom_pane

0x8084,	// (0x00085d7c) main_cam_set_pane_g1_ParamLimits

0x8084,	// (0x00085d7c) main_cam_set_pane_g1

0x8092,	// (0x00085d8a) main_cam_set_pane_g2_ParamLimits

0x8092,	// (0x00085d8a) main_cam_set_pane_g2

0x0001,

0xf9b2,	// (0x0008d6aa) main_cam_set_pane_g_ParamLimits

0xf9b2,	// (0x0008d6aa) main_cam_set_pane_g

0x80b1,	// (0x00085da9) main_cam_set_pane_t1_ParamLimits

0x80b1,	// (0x00085da9) main_cam_set_pane_t1

0x80c3,	// (0x00085dbb) main_cset_listscroll_pane_ParamLimits

0x80c3,	// (0x00085dbb) main_cset_listscroll_pane

0x80e1,	// (0x00085dd9) main_cset_slider_pane_ParamLimits

0x80e1,	// (0x00085dd9) main_cset_slider_pane

0xd293,	// (0x0008af8b) main_cset_list_pane_ParamLimits

0xd293,	// (0x0008af8b) main_cset_list_pane

0xd2a3,	// (0x0008af9b) scroll_pane_cp028

0x8105,	// (0x00085dfd) aid_area_touch_slider

0x8121,	// (0x00085e19) cset_slider_pane

0x814b,	// (0x00085e43) main_cset_slider_pane_g1

0x8160,	// (0x00085e58) main_cset_slider_pane_g2

0x0011,

0xf9b7,	// (0x0008d6af) main_cset_slider_pane_g

0xd2dc,	// (0x0008afd4) main_cset_slider_pane_t1

0x821c,	// (0x00085f14) main_cset_slider_pane_t2

0x8236,	// (0x00085f2e) main_cset_slider_pane_t3

0x8250,	// (0x00085f48) main_cset_slider_pane_t4

0x826a,	// (0x00085f62) main_cset_slider_pane_t5

0x8284,	// (0x00085f7c) main_cset_slider_pane_t6

0x8299,	// (0x00085f91) main_cset_slider_pane_t7

0x000e,

0xf9dc,	// (0x0008d6d4) main_cset_slider_pane_t

0x839d,	// (0x00086095) cset_list_set_pane_ParamLimits

0x839d,	// (0x00086095) cset_list_set_pane

0x83ae,	// (0x000860a6) aid_position_infowindow_above

0x83b6,	// (0x000860ae) aid_position_infowindow_below

0x83be,	// (0x000860b6) cset_list_set_pane_g1_ParamLimits

0x83be,	// (0x000860b6) cset_list_set_pane_g1

0xd37c,	// (0x0008b074) cset_list_set_pane_g3_ParamLimits

0xd37c,	// (0x0008b074) cset_list_set_pane_g3

0x0001,

0xf9fb,	// (0x0008d6f3) cset_list_set_pane_g_ParamLimits

0xf9fb,	// (0x0008d6f3) cset_list_set_pane_g

0xd38b,	// (0x0008b083) cset_list_set_pane_t1_ParamLimits

0xd38b,	// (0x0008b083) cset_list_set_pane_t1

0x1bd0,	// (0x0007f8c8) list_highlight_pane_cp021_ParamLimits

0x1bd0,	// (0x0007f8c8) list_highlight_pane_cp021

0x1191,	// (0x0007ee89) cset_slider_pane_g1

0x11a3,	// (0x0007ee9b) cset_slider_pane_g2

0x119a,	// (0x0007ee92) cset_slider_pane_g3

0x0002,

0xfa00,	// (0x0008d6f8) cset_slider_pane_g

0xeef2,	// (0x0008cbea) aid_area_touch_cam4_zoom

0xeefa,	// (0x0008cbf2) cam4_zoom_cont_pane

0xef02,	// (0x0008cbfa) cam4_zoom_pane_g1

0xef0a,	// (0x0008cc02) cam4_zoom_pane_g2

0x83ca,	// (0x000860c2) cam4_zoom_pane_g3

0x0002,

0xfa07,	// (0x0008d6ff) cam4_zoom_pane_g

0xef12,	// (0x0008cc0a) cam4_zoom_cont_pane_g1

0xef1b,	// (0x0008cc13) cam4_zoom_cont_pane_g2

0xef24,	// (0x0008cc1c) cam4_zoom_cont_pane_g3

0x0002,

0xfa0e,	// (0x0008d706) cam4_zoom_cont_pane_g

0x78dc,	// (0x000855d4) call4_image_pane_ParamLimits

0x78dc,	// (0x000855d4) call4_image_pane

0xd077,	// (0x0008ad6f) call4_windows_conf_pane_ParamLimits

0xd08a,	// (0x0008ad82) popup_call4_audio_in_window_ParamLimits

0xd08a,	// (0x0008ad82) popup_call4_audio_in_window

0xa722,	// (0x0008841a) bg_popup_call2_act_pane_cp02

0xd0e8,	// (0x0008ade0) call4_list_conf_pane

0xc78f,	// (0x0008a487) call4_image_pane_g1

0xc78f,	// (0x0008a487) call4_image_pane_g2

0x0001,

0xf722,	// (0x0008d41a) call4_image_pane_g

0xd3a0,	// (0x0008b098) list_single_graphic_popup_conf4_pane_ParamLimits

0xd3a0,	// (0x0008b098) list_single_graphic_popup_conf4_pane

0xa722,	// (0x0008841a) list_highlight_pane_cp022

0xd3b3,	// (0x0008b0ab) list_single_graphic_popup_conf4_pane_g1

0x0df6,	// (0x0007eaee) list_single_graphic_popup_conf4_pane_g2

0x0001,

0xfa15,	// (0x0008d70d) list_single_graphic_popup_conf4_pane_g

0xd3bb,	// (0x0008b0b3) list_single_graphic_popup_conf4_pane_t1

0x3e59,	// (0x00081b51) popup_vtel_slider_window_ParamLimits

0x3e59,	// (0x00081b51) popup_vtel_slider_window

0xd041,	// (0x0008ad39) dialer2_ne_pane_t2_ParamLimits

0xd041,	// (0x0008ad39) dialer2_ne_pane_t2

0x0001,

0xf8f6,	// (0x0008d5ee) dialer2_ne_pane_t_ParamLimits

0xf8f6,	// (0x0008d5ee) dialer2_ne_pane_t

0xc57c,	// (0x0008a274) bg_popup_sub_pane_cp010_ParamLimits

0xc57c,	// (0x0008a274) bg_popup_sub_pane_cp010

0x83d2,	// (0x000860ca) popup_vtel_slider_window_g1_ParamLimits

0x83d2,	// (0x000860ca) popup_vtel_slider_window_g1

0x83e5,	// (0x000860dd) popup_vtel_slider_window_g2_ParamLimits

0x83e5,	// (0x000860dd) popup_vtel_slider_window_g2

0x0003,

0xfa1a,	// (0x0008d712) popup_vtel_slider_window_g_ParamLimits

0xfa1a,	// (0x0008d712) popup_vtel_slider_window_g

0x8439,	// (0x00086131) vtel_slider_pane_ParamLimits

0x8439,	// (0x00086131) vtel_slider_pane

0x845b,	// (0x00086153) vtel_slider_pane_g1_ParamLimits

0x845b,	// (0x00086153) vtel_slider_pane_g1

0x846f,	// (0x00086167) vtel_slider_pane_g2_ParamLimits

0x846f,	// (0x00086167) vtel_slider_pane_g2

0x8487,	// (0x0008617f) vtel_slider_pane_g3_ParamLimits

0x8487,	// (0x0008617f) vtel_slider_pane_g3

0x845b,	// (0x00086153) vtel_slider_pane_g4_ParamLimits

0x845b,	// (0x00086153) vtel_slider_pane_g4

0x849d,	// (0x00086195) vtel_slider_pane_g5_ParamLimits

0x849d,	// (0x00086195) vtel_slider_pane_g5

0x0004,

0xfa23,	// (0x0008d71b) vtel_slider_pane_g_ParamLimits

0xfa23,	// (0x0008d71b) vtel_slider_pane_g

0xa722,	// (0x0008841a) main_gallery2_pane

0x7c4c,	// (0x00085944) aid_size_row_itut2_dropdow_list_ParamLimits

0x7c4c,	// (0x00085944) aid_size_row_itut2_dropdow_list

0x7cb6,	// (0x000859ae) grid_vitu2_function_top_pane_ParamLimits

0x7cb6,	// (0x000859ae) grid_vitu2_function_top_pane

0x7cf9,	// (0x000859f1) popup_vitu2_dropdown_list_window_ParamLimits

0x7cf9,	// (0x000859f1) popup_vitu2_dropdown_list_window

0x7d18,	// (0x00085a10) popup_vitu2_match_list_window

0x84b3,	// (0x000861ab) cell_vitu2_function_top_pane_ParamLimits

0x84b3,	// (0x000861ab) cell_vitu2_function_top_pane

0x84d3,	// (0x000861cb) cell_vitu2_function_top_pane_cp01_ParamLimits

0x84d3,	// (0x000861cb) cell_vitu2_function_top_pane_cp01

0x84f3,	// (0x000861eb) cell_vitu2_function_top_wide_pane_ParamLimits

0x84f3,	// (0x000861eb) cell_vitu2_function_top_wide_pane

0xeee4,	// (0x0008cbdc) bg_button_pane_cp012

0x8511,	// (0x00086209) cell_vitu2_function_top_pane_g1

0xef2d,	// (0x0008cc25) bg_button_pane_cp013_ParamLimits

0xef2d,	// (0x0008cc25) bg_button_pane_cp013

0x8525,	// (0x0008621d) cell_vitu2_function_top_wide_pane_g1_ParamLimits

0x8525,	// (0x0008621d) cell_vitu2_function_top_wide_pane_g1

0xeee4,	// (0x0008cbdc) bg_popup_sub_pane_cp20

0x853d,	// (0x00086235) list_vitu2_match_list_pane

0xd19d,	// (0x0008ae95) bg_popup_sub_pane_cp20_g1

0xd1a5,	// (0x0008ae9d) bg_popup_sub_pane_cp20_g2

0xb4b2,	// (0x000891aa) bg_popup_sub_pane_cp20_g3

0xd1ad,	// (0x0008aea5) bg_popup_sub_pane_cp20_g4

0xb492,	// (0x0008918a) bg_popup_sub_pane_cp20_g5

0xd3d7,	// (0x0008b0cf) bg_popup_sub_pane_cp20_g6

0xd1bd,	// (0x0008aeb5) bg_popup_sub_pane_cp20_g7

0xd1c5,	// (0x0008aebd) bg_popup_sub_pane_cp20_g8

0xd1cd,	// (0x0008aec5) bg_popup_sub_pane_cp20_g9

0x0008,

0xfa2e,	// (0x0008d726) bg_popup_sub_pane_cp20_g

0xef49,	// (0x0008cc41) list_vitu2_match_list_item_pane_ParamLimits

0xef49,	// (0x0008cc41) list_vitu2_match_list_item_pane

0xef5b,	// (0x0008cc53) list_vitu2_match_list_item_pane_t1

0xaec0,	// (0x00088bb8) bg_popup_sub_pane_cp21

0xef69,	// (0x0008cc61) grid_vitu2_dropdown_list_pane

0x8587,	// (0x0008627f) cell_vitu2_dropdown_list_char_pane_ParamLimits

0x8587,	// (0x0008627f) cell_vitu2_dropdown_list_char_pane

0x85a8,	// (0x000862a0) cell_vitu2_dropdown_list_ctrl_pane_ParamLimits

0x85a8,	// (0x000862a0) cell_vitu2_dropdown_list_ctrl_pane

0xd3df,	// (0x0008b0d7) cell_vitu2_dropdown_list_char_pane_g1

0xd3e8,	// (0x0008b0e0) cell_vitu2_dropdown_list_char_pane_g2

0xd3f1,	// (0x0008b0e9) cell_vitu2_dropdown_list_char_pane_g3

0x0002,

0xfa4b,	// (0x0008d743) cell_vitu2_dropdown_list_char_pane_g

0x85d4,	// (0x000862cc) cell_vitu2_dropdown_list_char_pane_t1

0x85e2,	// (0x000862da) cell_vitu2_dropdown_list_ctrl_pane_g1_ParamLimits

0x85e2,	// (0x000862da) cell_vitu2_dropdown_list_ctrl_pane_g1

0x85ef,	// (0x000862e7) cell_vitu2_dropdown_list_ctrl_pane_g2_ParamLimits

0x85ef,	// (0x000862e7) cell_vitu2_dropdown_list_ctrl_pane_g2

0x85fc,	// (0x000862f4) cell_vitu2_dropdown_list_ctrl_pane_g3_ParamLimits

0x85fc,	// (0x000862f4) cell_vitu2_dropdown_list_ctrl_pane_g3

0x8609,	// (0x00086301) cell_vitu2_dropdown_list_ctrl_pane_g4_ParamLimits

0x8609,	// (0x00086301) cell_vitu2_dropdown_list_ctrl_pane_g4

0xee6e,	// (0x0008cb66) cell_vitu2_dropdown_list_ctrl_pane_g5_ParamLimits

0xee6e,	// (0x0008cb66) cell_vitu2_dropdown_list_ctrl_pane_g5

0x0004,

0xfa52,	// (0x0008d74a) cell_vitu2_dropdown_list_ctrl_pane_g_ParamLimits

0xfa52,	// (0x0008d74a) cell_vitu2_dropdown_list_ctrl_pane_g

0x8625,	// (0x0008631d) aid_size_cell_gallery2_ParamLimits

0x8625,	// (0x0008631d) aid_size_cell_gallery2

0x863b,	// (0x00086333) grid_gallery2_pane_ParamLimits

0x863b,	// (0x00086333) grid_gallery2_pane

0x864d,	// (0x00086345) scroll_pane_cp029_ParamLimits

0x864d,	// (0x00086345) scroll_pane_cp029

0x8659,	// (0x00086351) cell_gallery2_pane_ParamLimits

0x8659,	// (0x00086351) cell_gallery2_pane

0xd3fa,	// (0x0008b0f2) cell_gallery2_pane_g2

0x868b,	// (0x00086383) cell_gallery2_pane_g3

0xd404,	// (0x0008b0fc) cell_gallery2_pane_g4

0xd40c,	// (0x0008b104) cell_gallery2_pane_g5

0x105b,	// (0x0007ed53) grid_highlight_pane_cp10

0x7d18,	// (0x00085a10) popup_vitu2_match_list_window_ParamLimits

0x7d29,	// (0x00085a21) popup_vitu2_query_window_ParamLimits

0x7d29,	// (0x00085a21) popup_vitu2_query_window

0xaec0,	// (0x00088bb8) bg_vitu2_candi_button_pane

0xd3df,	// (0x0008b0d7) cell_vitu2_dropdown_list_char_pane_g1_copy1

0xd3e8,	// (0x0008b0e0) cell_vitu2_dropdown_list_char_pane_g2_copy1

0xd3f1,	// (0x0008b0e9) cell_vitu2_dropdown_list_char_pane_g2_copy2

0x8693,	// (0x0008638b) bg_button_pane_cp015

0x869b,	// (0x00086393) bg_button_pane_cp016

0x86a4,	// (0x0008639c) bg_button_pane_cp017

0x1bd0,	// (0x0007f8c8) bg_popup_sub_pane_cp22

0xd414,	// (0x0008b10c) popup_vitu2_query_window_g1

0x86ca,	// (0x000863c2) popup_vitu2_query_window_g2

0x0001,

0xfa5d,	// (0x0008d755) popup_vitu2_query_window_g

0x86d6,	// (0x000863ce) popup_vitu2_query_window_t1_ParamLimits

0x86d6,	// (0x000863ce) popup_vitu2_query_window_t1

0x86fe,	// (0x000863f6) popup_vitu2_query_window_t2_ParamLimits

0x86fe,	// (0x000863f6) popup_vitu2_query_window_t2

0x8710,	// (0x00086408) popup_vitu2_query_window_t3_ParamLimits

0x8710,	// (0x00086408) popup_vitu2_query_window_t3

0x8738,	// (0x00086430) popup_vitu2_query_window_t4_ParamLimits

0x8738,	// (0x00086430) popup_vitu2_query_window_t4

0x874a,	// (0x00086442) popup_vitu2_query_window_t5_ParamLimits

0x874a,	// (0x00086442) popup_vitu2_query_window_t5

0x0004,

0xfa62,	// (0x0008d75a) popup_vitu2_query_window_t_ParamLimits

0xfa62,	// (0x0008d75a) popup_vitu2_query_window_t

0xd28b,	// (0x0008af83) main_cset_text_pane

0x8105,	// (0x00085dfd) aid_area_touch_slider_ParamLimits

0x8121,	// (0x00085e19) cset_slider_pane_ParamLimits

0x814b,	// (0x00085e43) main_cset_slider_pane_g1_ParamLimits

0x8160,	// (0x00085e58) main_cset_slider_pane_g2_ParamLimits

0xd2ac,	// (0x0008afa4) main_cset_slider_pane_g3_ParamLimits

0xd2ac,	// (0x0008afa4) main_cset_slider_pane_g3

0x8175,	// (0x00085e6d) main_cset_slider_pane_g4_ParamLimits

0x8175,	// (0x00085e6d) main_cset_slider_pane_g4

0x8184,	// (0x00085e7c) main_cset_slider_pane_g5_ParamLimits

0x8184,	// (0x00085e7c) main_cset_slider_pane_g5

0x8190,	// (0x00085e88) main_cset_slider_pane_g6_ParamLimits

0x8190,	// (0x00085e88) main_cset_slider_pane_g6

0xf9b7,	// (0x0008d6af) main_cset_slider_pane_g_ParamLimits

0xd2dc,	// (0x0008afd4) main_cset_slider_pane_t1_ParamLimits

0x821c,	// (0x00085f14) main_cset_slider_pane_t2_ParamLimits

0x8236,	// (0x00085f2e) main_cset_slider_pane_t3_ParamLimits

0x8250,	// (0x00085f48) main_cset_slider_pane_t4_ParamLimits

0x826a,	// (0x00085f62) main_cset_slider_pane_t5_ParamLimits

0x8284,	// (0x00085f7c) main_cset_slider_pane_t6_ParamLimits

0x8299,	// (0x00085f91) main_cset_slider_pane_t7_ParamLimits

0x82c3,	// (0x00085fbb) main_cset_slider_pane_t8_ParamLimits

0x82c3,	// (0x00085fbb) main_cset_slider_pane_t8

0x82eb,	// (0x00085fe3) main_cset_slider_pane_t9_ParamLimits

0x82eb,	// (0x00085fe3) main_cset_slider_pane_t9

0x8313,	// (0x0008600b) main_cset_slider_pane_t10_ParamLimits

0x8313,	// (0x0008600b) main_cset_slider_pane_t10

0x833b,	// (0x00086033) main_cset_slider_pane_t11_ParamLimits

0x833b,	// (0x00086033) main_cset_slider_pane_t11

0x8363,	// (0x0008605b) main_cset_slider_pane_t12_ParamLimits

0x8363,	// (0x0008605b) main_cset_slider_pane_t12

0x8380,	// (0x00086078) main_cset_slider_pane_t13_ParamLimits

0x8380,	// (0x00086078) main_cset_slider_pane_t13

0xf9dc,	// (0x0008d6d4) main_cset_slider_pane_t_ParamLimits

0xa722,	// (0x0008841a) bg_popup_sub_pane_cp011

0xd420,	// (0x0008b118) main_cset_text_pane_g1

0xd428,	// (0x0008b120) main_cset_text_pane_t1

0xd436,	// (0x0008b12e) main_cset_text_pane_t2

0xd444,	// (0x0008b13c) main_cset_text_pane_t3

0xd452,	// (0x0008b14a) main_cset_text_pane_t4

0xd460,	// (0x0008b158) main_cset_text_pane_t5

0xd46e,	// (0x0008b166) main_cset_text_pane_t6

0xd47c,	// (0x0008b174) main_cset_text_pane_t7

0x0006,

0xfa6d,	// (0x0008d765) main_cset_text_pane_t

0xa722,	// (0x0008841a) main_cam4_burst_pane

0xa722,	// (0x0008841a) main_cam5_pane

0x8053,	// (0x00085d4b) bg_button_pane_cp019

0x805c,	// (0x00085d54) bg_button_pane_cp020

0xd2b8,	// (0x0008afb0) main_cset_slider_pane_g7_ParamLimits

0xd2b8,	// (0x0008afb0) main_cset_slider_pane_g7

0xd2c4,	// (0x0008afbc) main_cset_slider_pane_g8_ParamLimits

0xd2c4,	// (0x0008afbc) main_cset_slider_pane_g8

0x81a4,	// (0x00085e9c) main_cset_slider_pane_g9_ParamLimits

0x81a4,	// (0x00085e9c) main_cset_slider_pane_g9

0x81b0,	// (0x00085ea8) main_cset_slider_pane_g10_ParamLimits

0x81b0,	// (0x00085ea8) main_cset_slider_pane_g10

0x81bc,	// (0x00085eb4) main_cset_slider_pane_g11_ParamLimits

0x81bc,	// (0x00085eb4) main_cset_slider_pane_g11

0x81c8,	// (0x00085ec0) main_cset_slider_pane_g12_ParamLimits

0x81c8,	// (0x00085ec0) main_cset_slider_pane_g12

0x81d4,	// (0x00085ecc) main_cset_slider_pane_g13_ParamLimits

0x81d4,	// (0x00085ecc) main_cset_slider_pane_g13

0x81e0,	// (0x00085ed8) main_cset_slider_pane_g14_ParamLimits

0x81e0,	// (0x00085ed8) main_cset_slider_pane_g14

0x81ec,	// (0x00085ee4) main_cset_slider_pane_g15_ParamLimits

0x81ec,	// (0x00085ee4) main_cset_slider_pane_g15

0xd30a,	// (0x0008b002) main_cset_slider_pane_t14_ParamLimits

0xd30a,	// (0x0008b002) main_cset_slider_pane_t14

0xd343,	// (0x0008b03b) main_cset_slider_pane_t15_ParamLimits

0xd343,	// (0x0008b03b) main_cset_slider_pane_t15

0x875c,	// (0x00086454) aid_cam4_burst_size_cell_ParamLimits

0x875c,	// (0x00086454) aid_cam4_burst_size_cell

0x877c,	// (0x00086474) grid_cam4_burst_pane_ParamLimits

0x877c,	// (0x00086474) grid_cam4_burst_pane

0x87a2,	// (0x0008649a) linegrid_cam4_burst_pane_ParamLimits

0x87a2,	// (0x0008649a) linegrid_cam4_burst_pane

0x87c4,	// (0x000864bc) scroll_pane_cp30_ParamLimits

0x87c4,	// (0x000864bc) scroll_pane_cp30

0x87d0,	// (0x000864c8) cell_cam4_burst_pane_ParamLimits

0x87d0,	// (0x000864c8) cell_cam4_burst_pane

0xd48a,	// (0x0008b182) linegrid_cam4_burst_pane_g1_ParamLimits

0xd48a,	// (0x0008b182) linegrid_cam4_burst_pane_g1

0x8817,	// (0x0008650f) linegrid_cam4_burst_pane_g2_ParamLimits

0x8817,	// (0x0008650f) linegrid_cam4_burst_pane_g2

0xd497,	// (0x0008b18f) linegrid_cam4_burst_pane_g3_ParamLimits

0xd497,	// (0x0008b18f) linegrid_cam4_burst_pane_g3

0x0002,

0xfa7c,	// (0x0008d774) linegrid_cam4_burst_pane_g_ParamLimits

0xfa7c,	// (0x0008d774) linegrid_cam4_burst_pane_g

0x8828,	// (0x00086520) linegrid_cam4_burst_pane_g3_copy1_ParamLimits

0x8828,	// (0x00086520) linegrid_cam4_burst_pane_g3_copy1

0xd4a4,	// (0x0008b19c) linegrid_cam4_burst_pane_g4_ParamLimits

0xd4a4,	// (0x0008b19c) linegrid_cam4_burst_pane_g4

0x8842,	// (0x0008653a) linegrid_cam4_burst_pane_g5_ParamLimits

0x8842,	// (0x0008653a) linegrid_cam4_burst_pane_g5

0x8853,	// (0x0008654b) linegrid_cam4_burst_pane_g6_ParamLimits

0x8853,	// (0x0008654b) linegrid_cam4_burst_pane_g6

0xd4b1,	// (0x0008b1a9) linegrid_cam4_burst_pane_g7_ParamLimits

0xd4b1,	// (0x0008b1a9) linegrid_cam4_burst_pane_g7

0x8864,	// (0x0008655c) cell_cam4_burst_pane_g1

0xd4ca,	// (0x0008b1c2) main_cam5_pane_t1_ParamLimits

0xd4ca,	// (0x0008b1c2) main_cam5_pane_t1

0xd4dc,	// (0x0008b1d4) main_cam5_pane_t2_ParamLimits

0xd4dc,	// (0x0008b1d4) main_cam5_pane_t2

0xd4ee,	// (0x0008b1e6) main_cam5_pane_t3_ParamLimits

0xd4ee,	// (0x0008b1e6) main_cam5_pane_t3

0xd500,	// (0x0008b1f8) main_cam5_pane_t4_ParamLimits

0xd500,	// (0x0008b1f8) main_cam5_pane_t4

0xd516,	// (0x0008b20e) main_cam5_pane_t5_ParamLimits

0xd516,	// (0x0008b20e) main_cam5_pane_t5

0xd528,	// (0x0008b220) main_cam5_pane_t6_ParamLimits

0xd528,	// (0x0008b220) main_cam5_pane_t6

0xd53a,	// (0x0008b232) main_cam5_pane_t7_ParamLimits

0xd53a,	// (0x0008b232) main_cam5_pane_t7

0xd54c,	// (0x0008b244) main_cam5_pane_t8_ParamLimits

0xd54c,	// (0x0008b244) main_cam5_pane_t8

0xd568,	// (0x0008b260) main_cam5_pane_t9_ParamLimits

0xd568,	// (0x0008b260) main_cam5_pane_t9

0xd57a,	// (0x0008b272) main_cam5_pane_t10_ParamLimits

0xd57a,	// (0x0008b272) main_cam5_pane_t10

0xd58c,	// (0x0008b284) main_cam5_pane_t11_ParamLimits

0xd58c,	// (0x0008b284) main_cam5_pane_t11

0xd59e,	// (0x0008b296) main_cam5_pane_t12_ParamLimits

0xd59e,	// (0x0008b296) main_cam5_pane_t12

0xd5b3,	// (0x0008b2ab) main_cam5_pane_t13_ParamLimits

0xd5b3,	// (0x0008b2ab) main_cam5_pane_t13

0x000c,

0xfa88,	// (0x0008d780) main_cam5_pane_t_ParamLimits

0xfa88,	// (0x0008d780) main_cam5_pane_t

0x30c3,	// (0x00080dbb) popup_scut_keymap_window_ParamLimits

0x30c3,	// (0x00080dbb) popup_scut_keymap_window

0x8879,	// (0x00086571) aid_size_cell_brow_shortcut

0x105b,	// (0x0007ed53) bg_popup_window_pane_cp010

0x8885,	// (0x0008657d) grid_scut_pane

0x888f,	// (0x00086587) cell_scut_pane_ParamLimits

0x888f,	// (0x00086587) cell_scut_pane

0x88a4,	// (0x0008659c) cell_scut_pane_g1

0xd5d0,	// (0x0008b2c8) cell_scut_pane_t1

0xd5df,	// (0x0008b2d7) cell_scut_pane_t2

0x88ad,	// (0x000865a5) cell_scut_pane_t3

0x0002,

0xfaa3,	// (0x0008d79b) cell_scut_pane_t

0x68c0,	// (0x000845b8) main_mup3_pane_g8_ParamLimits

0x68c0,	// (0x000845b8) main_mup3_pane_g8

0x7c60,	// (0x00085958) area_vitu2_query_pane_ParamLimits

0x7c60,	// (0x00085958) area_vitu2_query_pane

0x86ad,	// (0x000863a5) input_focus_pane_cp08

0xd5ee,	// (0x0008b2e6) area_vitu2_query_pane_g1

0x88bb,	// (0x000865b3) area_vitu2_query_pane_g2

0x0001,

0xfaaa,	// (0x0008d7a2) area_vitu2_query_pane_g

0x88ca,	// (0x000865c2) area_vitu2_query_pane_t1_ParamLimits

0x88ca,	// (0x000865c2) area_vitu2_query_pane_t1

0x88dc,	// (0x000865d4) area_vitu2_query_pane_t2_ParamLimits

0x88dc,	// (0x000865d4) area_vitu2_query_pane_t2

0x88ee,	// (0x000865e6) area_vitu2_query_pane_t3_ParamLimits

0x88ee,	// (0x000865e6) area_vitu2_query_pane_t3

0xd5fa,	// (0x0008b2f2) area_vitu2_query_pane_t4_ParamLimits

0xd5fa,	// (0x0008b2f2) area_vitu2_query_pane_t4

0xd622,	// (0x0008b31a) area_vitu2_query_pane_t5_ParamLimits

0xd622,	// (0x0008b31a) area_vitu2_query_pane_t5

0xd64a,	// (0x0008b342) area_vitu2_query_pane_t6_ParamLimits

0xd64a,	// (0x0008b342) area_vitu2_query_pane_t6

0x0006,

0xfaaf,	// (0x0008d7a7) area_vitu2_query_pane_t_ParamLimits

0xfaaf,	// (0x0008d7a7) area_vitu2_query_pane_t

0x8916,	// (0x0008660e) bg_button_pane_cp018

0x8923,	// (0x0008661b) bg_button_pane_cp021

0x892f,	// (0x00086627) bg_button_pane_cp022

0x893e,	// (0x00086636) input_focus_pane_cp09

0x4c65,	// (0x0008295d) aid_size_touch_mv_arrow_left

0x0f34,	// (0x0007ec2c) aid_size_touch_mv_arrow_right

0x8204,	// (0x00085efc) main_cset_slider_pane_g16_ParamLimits

0x8204,	// (0x00085efc) main_cset_slider_pane_g16

0x8210,	// (0x00085f08) main_cset_slider_pane_g17_ParamLimits

0x8210,	// (0x00085f08) main_cset_slider_pane_g17

0x8864,	// (0x0008655c) cell_cam4_burst_pane_g1_ParamLimits

0xa722,	// (0x0008841a) compa_mode_pane

0x83f5,	// (0x000860ed) popup_vtel_slider_window_g3_ParamLimits

0x83f5,	// (0x000860ed) popup_vtel_slider_window_g3

0x840c,	// (0x00086104) popup_vtel_slider_window_g4_ParamLimits

0x840c,	// (0x00086104) popup_vtel_slider_window_g4

0x8423,	// (0x0008611b) popup_vtel_slider_window_t1_ParamLimits

0x8423,	// (0x0008611b) popup_vtel_slider_window_t1

0xa722,	// (0x0008841a) main_cl_pane

0xc372,	// (0x0008a06a) popup_imed_adjust2_window_ParamLimits

0xc34c,	// (0x0008a044) bg_tb_trans_pane_cp05_ParamLimits

0xcc58,	// (0x0008a950) popup_imed_adjust2_window_g1_ParamLimits

0xcc67,	// (0x0008a95f) popup_imed_adjust2_window_g2_ParamLimits

0xcc67,	// (0x0008a95f) popup_imed_adjust2_window_g2

0xcc73,	// (0x0008a96b) popup_imed_adjust2_window_g3_ParamLimits

0xcc73,	// (0x0008a96b) popup_imed_adjust2_window_g3

0x0002,

0xf820,	// (0x0008d518) popup_imed_adjust2_window_g_ParamLimits

0xf820,	// (0x0008d518) popup_imed_adjust2_window_g

0xcc7f,	// (0x0008a977) popup_imed_adjust2_window_t1_ParamLimits

0xcc97,	// (0x0008a98f) slider_imed_adjust_pane_ParamLimits

0xccab,	// (0x0008a9a3) slider_imed_adjust_pane_g1_ParamLimits

0xccbb,	// (0x0008a9b3) slider_imed_adjust_pane_g2_ParamLimits

0xcccb,	// (0x0008a9c3) slider_imed_adjust_pane_g3_ParamLimits

0xccdc,	// (0x0008a9d4) slider_imed_adjust_pane_g4_ParamLimits

0xf827,	// (0x0008d51f) slider_imed_adjust_pane_g_ParamLimits

0x79d3,	// (0x000856cb) aid_touch_area_cam4_ParamLimits

0x79d3,	// (0x000856cb) aid_touch_area_cam4

0xee5e,	// (0x0008cb56) battery_pane_cp01

0x7a6b,	// (0x00085763) main_camera4_pane_g6_ParamLimits

0x7a6b,	// (0x00085763) main_camera4_pane_g6

0x7a8c,	// (0x00085784) main_camera4_pane_t2_ParamLimits

0x7a8c,	// (0x00085784) main_camera4_pane_t2

0x0001,

0xf92a,	// (0x0008d622) main_camera4_pane_t_ParamLimits

0xf92a,	// (0x0008d622) main_camera4_pane_t

0x7acc,	// (0x000857c4) aid_touch_area_vid4_ParamLimits

0x7acc,	// (0x000857c4) aid_touch_area_vid4

0x7b0e,	// (0x00085806) main_video4_pane_g5_ParamLimits

0x7b0e,	// (0x00085806) main_video4_pane_g5

0x7b2f,	// (0x00085827) vid4_progress_pane_ParamLimits

0x7b2f,	// (0x00085827) vid4_progress_pane

0xd2d0,	// (0x0008afc8) main_cset_slider_pane_g18_ParamLimits

0xd2d0,	// (0x0008afc8) main_cset_slider_pane_g18

0xd4be,	// (0x0008b1b6) cell_cam4_burst_pane_g2_ParamLimits

0xd4be,	// (0x0008b1b6) cell_cam4_burst_pane_g2

0x0001,

0xfa83,	// (0x0008d77b) cell_cam4_burst_pane_g_ParamLimits

0xfa83,	// (0x0008d77b) cell_cam4_burst_pane_g

0xaee4,	// (0x00088bdc) bg_cl_pane_ParamLimits

0xaee4,	// (0x00088bdc) bg_cl_pane

0x894d,	// (0x00086645) cl_header_pane_ParamLimits

0x894d,	// (0x00086645) cl_header_pane

0x8961,	// (0x00086659) cl_listscroll_pane_ParamLimits

0x8961,	// (0x00086659) cl_listscroll_pane

0xd696,	// (0x0008b38e) bg_cl_pane_g1

0xd69e,	// (0x0008b396) bg_cl_pane_g2

0xd6a6,	// (0x0008b39e) bg_cl_pane_g3

0xd6ae,	// (0x0008b3a6) bg_cl_pane_g4

0xd6b6,	// (0x0008b3ae) bg_cl_pane_g5

0xd6be,	// (0x0008b3b6) bg_cl_pane_g6

0xd6c6,	// (0x0008b3be) bg_cl_pane_g7

0xd6ce,	// (0x0008b3c6) bg_cl_pane_g8

0xd6d6,	// (0x0008b3ce) bg_cl_pane_g9

0x0008,

0xfabe,	// (0x0008d7b6) bg_cl_pane_g

0x8971,	// (0x00086669) aid_height_cl_leading_ParamLimits

0x8971,	// (0x00086669) aid_height_cl_leading

0x897d,	// (0x00086675) aid_height_cl_text_ParamLimits

0x897d,	// (0x00086675) aid_height_cl_text

0x1bd0,	// (0x0007f8c8) bg_cl_header_pane_ParamLimits

0x1bd0,	// (0x0007f8c8) bg_cl_header_pane

0x899c,	// (0x00086694) cl_header_pane_g1_ParamLimits

0x899c,	// (0x00086694) cl_header_pane_g1

0x89b2,	// (0x000866aa) cl_header_pane_t1_ParamLimits

0x89b2,	// (0x000866aa) cl_header_pane_t1

0xd6de,	// (0x0008b3d6) cl_list_pane

0xd6e7,	// (0x0008b3df) hc_scroll_pane_cp01

0xb492,	// (0x0008918a) bg_cl_header_pane_g1

0xd19d,	// (0x0008ae95) bg_cl_header_pane_g2

0xb4b2,	// (0x000891aa) bg_cl_header_pane_g3

0xd1ad,	// (0x0008aea5) bg_cl_header_pane_g4

0xd1a5,	// (0x0008ae9d) bg_cl_header_pane_g5

0xd3d7,	// (0x0008b0cf) bg_cl_header_pane_g6

0xd1c5,	// (0x0008aebd) bg_cl_header_pane_g7

0xd1cd,	// (0x0008aec5) bg_cl_header_pane_g8

0xd1bd,	// (0x0008aeb5) bg_cl_header_pane_g9

0x0008,

0xfad1,	// (0x0008d7c9) bg_cl_header_pane_g

0x89cb,	// (0x000866c3) hc_cl_list_double_graphic_heading_pane_ParamLimits

0x89cb,	// (0x000866c3) hc_cl_list_double_graphic_heading_pane

0x89db,	// (0x000866d3) hc_cl_list_single_graphic_pane_ParamLimits

0x89db,	// (0x000866d3) hc_cl_list_single_graphic_pane

0x89ee,	// (0x000866e6) hc_cl_list_single_graphic_pane_g1_ParamLimits

0x89ee,	// (0x000866e6) hc_cl_list_single_graphic_pane_g1

0x89fa,	// (0x000866f2) hc_cl_list_single_graphic_pane_g2_ParamLimits

0x89fa,	// (0x000866f2) hc_cl_list_single_graphic_pane_g2

0x0001,

0xfae4,	// (0x0008d7dc) hc_cl_list_single_graphic_pane_g_ParamLimits

0xfae4,	// (0x0008d7dc) hc_cl_list_single_graphic_pane_g

0x8a0e,	// (0x00086706) hc_cl_list_single_graphic_pane_t1_ParamLimits

0x8a0e,	// (0x00086706) hc_cl_list_single_graphic_pane_t1

0x89ee,	// (0x000866e6) hc_cl_list_double_graphic_heading_pane_g1_ParamLimits

0x89ee,	// (0x000866e6) hc_cl_list_double_graphic_heading_pane_g1

0x8a23,	// (0x0008671b) hc_cl_list_double_graphic_heading_pane_g2_ParamLimits

0x8a23,	// (0x0008671b) hc_cl_list_double_graphic_heading_pane_g2

0x8a37,	// (0x0008672f) hc_cl_list_double_graphic_heading_pane_g3_ParamLimits

0x8a37,	// (0x0008672f) hc_cl_list_double_graphic_heading_pane_g3

0x0002,

0xfae9,	// (0x0008d7e1) hc_cl_list_double_graphic_heading_pane_g_ParamLimits

0xfae9,	// (0x0008d7e1) hc_cl_list_double_graphic_heading_pane_g

0x8a4b,	// (0x00086743) hc_cl_list_double_graphic_heading_pane_t1_ParamLimits

0x8a4b,	// (0x00086743) hc_cl_list_double_graphic_heading_pane_t1

0x8a60,	// (0x00086758) hc_cl_list_double_graphic_heading_pane_t2_ParamLimits

0x8a60,	// (0x00086758) hc_cl_list_double_graphic_heading_pane_t2

0x0001,

0xfaf0,	// (0x0008d7e8) hc_cl_list_double_graphic_heading_pane_t_ParamLimits

0xfaf0,	// (0x0008d7e8) hc_cl_list_double_graphic_heading_pane_t

0xef71,	// (0x0008cc69) vid4_progress_pane_g1

0xef80,	// (0x0008cc78) vid4_progress_pane_g2

0xef8f,	// (0x0008cc87) vid4_progress_pane_g3

0xef9e,	// (0x0008cc96) vid4_progress_pane_g4

0x0004,

0xfaf5,	// (0x0008d7ed) vid4_progress_pane_g

0xefb6,	// (0x0008ccae) vid4_progress_pane_t1

0xefcc,	// (0x0008ccc4) vid4_progress_pane_t2

0x0002,

0xfb00,	// (0x0008d7f8) vid4_progress_pane_t

0xeff6,	// (0x0008ccee) wait_bar_pane_cp07

0xc58a,	// (0x0008a282) blid_firmament_pane_ParamLimits

0xc5cb,	// (0x0008a2c3) popup_blid_sat_info2_window_g1

0xc5ef,	// (0x0008a2e7) popup_blid_sat_info2_window_t3

0xc5fd,	// (0x0008a2f5) popup_blid_sat_info2_window_t4

0xc60b,	// (0x0008a303) popup_blid_sat_info2_window_t5

0xc619,	// (0x0008a311) popup_blid_sat_info2_window_t6

0xc629,	// (0x0008a321) popup_blid_sat_info2_window_t7

0xc637,	// (0x0008a32f) popup_blid_sat_info2_window_t8

0xc645,	// (0x0008a33d) popup_blid_sat_info2_window_t9

0xc653,	// (0x0008a34b) popup_blid_sat_info2_window_t10

0xc70f,	// (0x0008a407) aid_firma_cardinal_ParamLimits

0xc723,	// (0x0008a41b) blid_firmament_pane_t1_ParamLimits

0xc73a,	// (0x0008a432) blid_firmament_pane_t2_ParamLimits

0xc751,	// (0x0008a449) blid_firmament_pane_t3_ParamLimits

0xc768,	// (0x0008a460) blid_firmament_pane_t4_ParamLimits

0xf719,	// (0x0008d411) blid_firmament_pane_t_ParamLimits

0xc77f,	// (0x0008a477) blid_sat_info_pane_ParamLimits

0x1bd0,	// (0x0007f8c8) main_cam_set_pane_ParamLimits

0x7117,	// (0x00084e0f) aid_size_cell_colour_35_ParamLimits

0x7137,	// (0x00084e2f) aid_size_cell_colour_112_ParamLimits

0x7157,	// (0x00084e4f) aid_size_cell_effect_ParamLimits

0xc34c,	// (0x0008a044) bg_tb_trans_pane_cp02_ParamLimits

0xb737,	// (0x0008942f) heading_imed_pane_ParamLimits

0x7177,	// (0x00084e6f) listscroll_imed_pane_ParamLimits

0x1a65,	// (0x0007f75d) popup_call2_audio_first_window_g5_ParamLimits

0x1a65,	// (0x0007f75d) popup_call2_audio_first_window_g5

0x7694,	// (0x0008538c) aid_size_touch_image3_arrow_left_ParamLimits

0x7694,	// (0x0008538c) aid_size_touch_image3_arrow_left

0x76b4,	// (0x000853ac) aid_size_touch_image3_arrow_right_ParamLimits

0x76b4,	// (0x000853ac) aid_size_touch_image3_arrow_right

0xefe1,	// (0x0008ccd9) vid4_progress_pane_t3

0x744b,	// (0x00085143) main_hwr_training_symbol_option_pane_ParamLimits

0x744b,	// (0x00085143) main_hwr_training_symbol_option_pane

0xcf37,	// (0x0008ac2f) popup_hwr_training_preview_window_ParamLimits

0xcf37,	// (0x0008ac2f) popup_hwr_training_preview_window

0x7467,	// (0x0008515f) hwr_training_navi_pane_g5_ParamLimits

0x7467,	// (0x0008515f) hwr_training_navi_pane_g5

0xd18b,	// (0x0008ae83) popup_char_count_window

0xeee4,	// (0x0008cbdc) bg_popup_sub_pane_cp20_ParamLimits

0x853d,	// (0x00086235) list_vitu2_match_list_pane_ParamLimits

0x854c,	// (0x00086244) vitu2_page_scroll_pane_ParamLimits

0x854c,	// (0x00086244) vitu2_page_scroll_pane

0xd74a,	// (0x0008b442) list_single_hwr_training_symbol_option_pane_ParamLimits

0xd74a,	// (0x0008b442) list_single_hwr_training_symbol_option_pane

0xd75d,	// (0x0008b455) list_single_hwr_training_symbol_option_pane_g1

0xd765,	// (0x0008b45d) list_single_hwr_training_symbol_option_pane_t1

0xd773,	// (0x0008b46b) bg_button_pane_cp023

0xd77c,	// (0x0008b474) bg_button_pane_cp024

0x8a75,	// (0x0008676d) vitu2_page_scroll_pane_g1

0x8a7d,	// (0x00086775) vitu2_page_scroll_pane_g2

0x0001,

0xfb07,	// (0x0008d7ff) vitu2_page_scroll_pane_g

0x8a85,	// (0x0008677d) vitu2_page_scroll_pane_t1

0xc4e2,	// (0x0008a1da) popup_char_count_window_g1

0xd7af,	// (0x0008b4a7) popup_char_count_window_g2

0xd7b8,	// (0x0008b4b0) popup_char_count_window_g3

0x0002,

0xfb0c,	// (0x0008d804) popup_char_count_window_g

0xd7c1,	// (0x0008b4b9) popup_char_count_window_t1

0xa722,	// (0x0008841a) main_vded2_pane

0xcc46,	// (0x0008a93e) aid_size_cell_imed_line

0xcc50,	// (0x0008a948) grid_imed_line_width_pane

0x7bb0,	// (0x000858a8) vid4_indicators_pane_g4

0xd7cf,	// (0x0008b4c7) cell_imed_line_width_pane_ParamLimits

0xd7cf,	// (0x0008b4c7) cell_imed_line_width_pane

0xd7e1,	// (0x0008b4d9) cell_imed_line_width_pane_g1

0xc564,	// (0x0008a25c) cell_imed_line_width_pane_g2

0x0001,

0xfb13,	// (0x0008d80b) cell_imed_line_width_pane_g

0x8a94,	// (0x0008678c) main_vded2_pane_g1_ParamLimits

0x8a94,	// (0x0008678c) main_vded2_pane_g1

0x8aaa,	// (0x000867a2) main_vded2_pane_g2_ParamLimits

0x8aaa,	// (0x000867a2) main_vded2_pane_g2

0x0001,

0xfb18,	// (0x0008d810) main_vded2_pane_g_ParamLimits

0xfb18,	// (0x0008d810) main_vded2_pane_g

0x8aba,	// (0x000867b2) vded2_slider_pane_ParamLimits

0x8aba,	// (0x000867b2) vded2_slider_pane

0x8acd,	// (0x000867c5) aid_size_touch_vded2_end

0x8ad5,	// (0x000867cd) aid_size_touch_vded2_playhead

0x8add,	// (0x000867d5) aid_size_touch_vded2_start

0x8ae5,	// (0x000867dd) vded2_slider_bg_pane

0x8aee,	// (0x000867e6) vded2_slider_pane_g1

0x8af7,	// (0x000867ef) vded2_slider_pane_g2

0x8aff,	// (0x000867f7) vded2_slider_pane_g3

0x0002,

0xfb1d,	// (0x0008d815) vded2_slider_pane_g

0x8b08,	// (0x00086800) vded2_slider_bg_pane_g1

0x8b11,	// (0x00086809) vded2_slider_bg_pane_g2

0x8b1a,	// (0x00086812) vded2_slider_bg_pane_g3

0x0002,

0xfb24,	// (0x0008d81c) vded2_slider_bg_pane_g

0x51d6,	// (0x00082ece) aid_postcard_touch_down_pane_ParamLimits

0x51d6,	// (0x00082ece) aid_postcard_touch_down_pane

0x51e8,	// (0x00082ee0) aid_postcard_touch_up_pane_ParamLimits

0x51e8,	// (0x00082ee0) aid_postcard_touch_up_pane

0xa722,	// (0x0008841a) main_blid2_pane

0xc35a,	// (0x0008a052) popup_blid2_search_window

0xa722,	// (0x0008841a) blid2_gps_pane

0xa722,	// (0x0008841a) blid2_navig_pane

0xa722,	// (0x0008841a) blid2_search_pane

0xa722,	// (0x0008841a) blid2_tripm_pane

0x8b23,	// (0x0008681b) blid2_search_pane_g1_ParamLimits

0x8b23,	// (0x0008681b) blid2_search_pane_g1

0x8b37,	// (0x0008682f) blid2_search_pane_t1_ParamLimits

0x8b37,	// (0x0008682f) blid2_search_pane_t1

0x8b49,	// (0x00086841) aid_size_cell_blid2_gps_ParamLimits

0x8b49,	// (0x00086841) aid_size_cell_blid2_gps

0x8b61,	// (0x00086859) blid2_gps_pane_g1_ParamLimits

0x8b61,	// (0x00086859) blid2_gps_pane_g1

0x8b75,	// (0x0008686d) grid_blid2_satellite_pane_ParamLimits

0x8b75,	// (0x0008686d) grid_blid2_satellite_pane

0x8b89,	// (0x00086881) blid2_navig_pane_g1_ParamLimits

0x8b89,	// (0x00086881) blid2_navig_pane_g1

0x8b95,	// (0x0008688d) blid2_navig_pane_t1_ParamLimits

0x8b95,	// (0x0008688d) blid2_navig_pane_t1

0x8bae,	// (0x000868a6) blid2_navig_pane_t2_ParamLimits

0x8bae,	// (0x000868a6) blid2_navig_pane_t2

0x0001,

0xfb2b,	// (0x0008d823) blid2_navig_pane_t_ParamLimits

0xfb2b,	// (0x0008d823) blid2_navig_pane_t

0x8bc7,	// (0x000868bf) blid2_navig_ring_pane_ParamLimits

0x8bc7,	// (0x000868bf) blid2_navig_ring_pane

0x8bdc,	// (0x000868d4) blid2_speed_pane_ParamLimits

0x8bdc,	// (0x000868d4) blid2_speed_pane

0x8be8,	// (0x000868e0) blid2_tripm_pane_g1_ParamLimits

0x8be8,	// (0x000868e0) blid2_tripm_pane_g1

0x8bfd,	// (0x000868f5) blid2_tripm_pane_g2_ParamLimits

0x8bfd,	// (0x000868f5) blid2_tripm_pane_g2

0x8c11,	// (0x00086909) blid2_tripm_pane_g3_ParamLimits

0x8c11,	// (0x00086909) blid2_tripm_pane_g3

0x8c25,	// (0x0008691d) blid2_tripm_pane_g4_ParamLimits

0x8c25,	// (0x0008691d) blid2_tripm_pane_g4

0x8c39,	// (0x00086931) blid2_tripm_pane_g5_ParamLimits

0x8c39,	// (0x00086931) blid2_tripm_pane_g5

0x0005,

0xfb30,	// (0x0008d828) blid2_tripm_pane_g_ParamLimits

0xfb30,	// (0x0008d828) blid2_tripm_pane_g

0x8c5b,	// (0x00086953) blid2_tripm_pane_t1_ParamLimits

0x8c5b,	// (0x00086953) blid2_tripm_pane_t1

0x8c72,	// (0x0008696a) blid2_tripm_pane_t2_ParamLimits

0x8c72,	// (0x0008696a) blid2_tripm_pane_t2

0x8c89,	// (0x00086981) blid2_tripm_pane_t3_ParamLimits

0x8c89,	// (0x00086981) blid2_tripm_pane_t3

0x0003,

0xfb3d,	// (0x0008d835) blid2_tripm_pane_t_ParamLimits

0xfb3d,	// (0x0008d835) blid2_tripm_pane_t

0x8ccc,	// (0x000869c4) cell_blid2_satellite_pane_ParamLimits

0x8ccc,	// (0x000869c4) cell_blid2_satellite_pane

0x8ce4,	// (0x000869dc) cell_blid2_satellite_pane_g1

0xd7ea,	// (0x0008b4e2) cell_blid2_satellite_pane_t1

0xc78f,	// (0x0008a487) blid2_speed_pane_g1

0xd7f8,	// (0x0008b4f0) blid2_speed_pane_t1

0xd806,	// (0x0008b4fe) blid2_speed_pane_t2

0x0001,

0xfb46,	// (0x0008d83e) blid2_speed_pane_t

0xc78f,	// (0x0008a487) blid2_navig_ring_pane_g1

0x8ced,	// (0x000869e5) blid2_navig_ring_pane_g2

0x8cf5,	// (0x000869ed) blid2_navig_ring_pane_g3

0x8cfd,	// (0x000869f5) blid2_navig_ring_pane_g4

0x8d05,	// (0x000869fd) blid2_navig_ring_pane_g5

0x0004,

0xfb4b,	// (0x0008d843) blid2_navig_ring_pane_g

0xa722,	// (0x0008841a) bg_popup_window_pane_cp011

0xd814,	// (0x0008b50c) popup_blid2_search_window_g1

0xd81c,	// (0x0008b514) popup_blid2_search_window_t1

0xd82a,	// (0x0008b522) popup_blid2_search_window_t2

0x0001,

0xfb56,	// (0x0008d84e) popup_blid2_search_window_t

0xb3a1,	// (0x00089099) main_browser_pane_g1

0xaee4,	// (0x00088bdc) main_browser_pane_ParamLimits

0xeee4,	// (0x0008cbdc) bg_button_pane_cp011_ParamLimits

0x7e2d,	// (0x00085b25) cell_vitu2_function_pane_g1_ParamLimits

0x1bd0,	// (0x0007f8c8) bg_popup_sub_pane_cp22_ParamLimits

0x86ad,	// (0x000863a5) input_focus_pane_cp08_ParamLimits

0x86ba,	// (0x000863b2) popup_vitu2_query_button_pane_ParamLimits

0x86ba,	// (0x000863b2) popup_vitu2_query_button_pane

0x8693,	// (0x0008638b) popup_vitu2_query_input_button_pane

0xd414,	// (0x0008b10c) popup_vitu2_query_window_g1_ParamLimits

0x86ca,	// (0x000863c2) popup_vitu2_query_window_g2_ParamLimits

0xfa5d,	// (0x0008d755) popup_vitu2_query_window_g_ParamLimits

0xa722,	// (0x0008841a) bg_button_pane_cp026

0x8d0d,	// (0x00086a05) popup_vitu2_query_input_button_pane_g1

0xa722,	// (0x0008841a) bg_button_pane_cp025

0xd838,	// (0x0008b530) popup_vitu2_query_button_pane_t1

0x6629,	// (0x00084321) main_mp3_pane_t6

0x6637,	// (0x0008432f) popup_slider_window_cp01

0xee7c,	// (0x0008cb74) cam4_battery_pane

0xee7c,	// (0x0008cb74) cam4_battery_pane_cp02

0xee7c,	// (0x0008cb74) cam4_battery_pane_cp01

0xee7c,	// (0x0008cb74) cam4_battery_pane_cp03

0xd037,	// (0x0008ad2f) cam4_battery_pane_g1

0xc78f,	// (0x0008a487) cam4_battery_pane_g2

0x0001,

0xfb5b,	// (0x0008d853) cam4_battery_pane_g

0xc661,	// (0x0008a359) popup_blid_sat_info2_window_t11

0x4c65,	// (0x0008295d) aid_size_touch_mv_arrow_left_ParamLimits

0x0f34,	// (0x0007ec2c) aid_size_touch_mv_arrow_right_ParamLimits

0x0f6c,	// (0x0007ec64) navi_pane_g1_ParamLimits

0x0f78,	// (0x0007ec70) navi_pane_g2_ParamLimits

0x4c7e,	// (0x00082976) navi_pane_g3_ParamLimits

0xf418,	// (0x0008d110) navi_pane_g_ParamLimits

0x4ca3,	// (0x0008299b) navi_pane_mv_t1_ParamLimits

0x7183,	// (0x00084e7b) grid_imed_effect_pane_ParamLimits

0xb2db,	// (0x00088fd3) aid_placing_vt_slider_lsc

0xb2e3,	// (0x00088fdb) aid_placing_vt_slider_prt

0x1bd0,	// (0x0007f8c8) bg_tb_trans_pane_cp01_ParamLimits

0xc8de,	// (0x0008a5d6) popup_image_details_window_g1_ParamLimits

0xc8f1,	// (0x0008a5e9) popup_image_details_window_g2_ParamLimits

0xc906,	// (0x0008a5fe) popup_image_details_window_g3_ParamLimits

0xc906,	// (0x0008a5fe) popup_image_details_window_g3

0xf75e,	// (0x0008d456) popup_image_details_window_g_ParamLimits

0xc91a,	// (0x0008a612) popup_image_details_window_t1_ParamLimits

0xc92c,	// (0x0008a624) popup_image_details_window_t2_ParamLimits

0xc945,	// (0x0008a63d) popup_image_details_window_t3_ParamLimits

0xc959,	// (0x0008a651) popup_image_details_window_t4_ParamLimits

0xc974,	// (0x0008a66c) popup_image_details_window_t5_ParamLimits

0xf765,	// (0x0008d45d) popup_image_details_window_t_ParamLimits

0x8989,	// (0x00086681) cl_header_name_pane_ParamLimits

0x8989,	// (0x00086681) cl_header_name_pane

0x8d15,	// (0x00086a0d) cl_header_name_pane_t1_ParamLimits

0x8d15,	// (0x00086a0d) cl_header_name_pane_t1

0x8d36,	// (0x00086a2e) cl_header_name_pane_t2_ParamLimits

0x8d36,	// (0x00086a2e) cl_header_name_pane_t2

0x8d78,	// (0x00086a70) cl_header_name_pane_t3_ParamLimits

0x8d78,	// (0x00086a70) cl_header_name_pane_t3

0x0002,

0xfb60,	// (0x0008d858) cl_header_name_pane_t_ParamLimits

0xfb60,	// (0x0008d858) cl_header_name_pane_t

0x0ffa,	// (0x0007ecf2) navi_pane_mv_g2_ParamLimits

0xd12d,	// (0x0008ae25) field_vitu2_entry_pane_g1_ParamLimits

0xd139,	// (0x0008ae31) field_vitu2_entry_pane_g2_ParamLimits

0xd145,	// (0x0008ae3d) field_vitu2_entry_pane_g3_ParamLimits

0xd145,	// (0x0008ae3d) field_vitu2_entry_pane_g3

0xf95c,	// (0x0008d654) field_vitu2_entry_pane_g_ParamLimits

0x7da9,	// (0x00085aa1) cell_vitu2_itu_pane_g1_ParamLimits

0x7db9,	// (0x00085ab1) cell_vitu2_itu_pane_g2_ParamLimits

0x7db9,	// (0x00085ab1) cell_vitu2_itu_pane_g2

0x0001,

0xf968,	// (0x0008d660) cell_vitu2_itu_pane_g_ParamLimits

0xf968,	// (0x0008d660) cell_vitu2_itu_pane_g

0xeee4,	// (0x0008cbdc) bg_vkb2_func_pane_cp05_ParamLimits

0xeee4,	// (0x0008cbdc) bg_vkb2_func_pane_cp05

0xeee4,	// (0x0008cbdc) bg_vkb2_func_pane_cp03

0xeee4,	// (0x0008cbdc) bg_vkb2_func_pane_cp04

0xeee4,	// (0x0008cbdc) bg_vkb2_func_pane_cp10_ParamLimits

0xeee4,	// (0x0008cbdc) bg_vkb2_func_pane_cp10

0x892f,	// (0x00086627) bg_vkb2_func_pane_cp08

0x8916,	// (0x0008660e) bg_vkb2_func_pane_cp06

0x8923,	// (0x0008661b) bg_vkb2_func_pane_cp07

0xd785,	// (0x0008b47d) bg_vkb2_func_pane_cp11_ParamLimits

0xd785,	// (0x0008b47d) bg_vkb2_func_pane_cp11

0xd79a,	// (0x0008b492) bg_vkb2_func_pane_cp12_ParamLimits

0xd79a,	// (0x0008b492) bg_vkb2_func_pane_cp12

0xa722,	// (0x0008841a) bg_vkb2_func_pane_cp09

0xd19d,	// (0x0008ae95) bg_vkb2_func_pane_g1

0xb4b2,	// (0x000891aa) bg_vkb2_func_pane_g2

0xd1a5,	// (0x0008ae9d) bg_vkb2_func_pane_g3

0xd1ad,	// (0x0008aea5) bg_vkb2_func_pane_g4

0xd3d7,	// (0x0008b0cf) bg_vkb2_func_pane_g5

0xd1c5,	// (0x0008aebd) bg_vkb2_func_pane_g6

0xd1cd,	// (0x0008aec5) bg_vkb2_func_pane_g7

0xd1bd,	// (0x0008aeb5) bg_vkb2_func_pane_g8

0xb492,	// (0x0008918a) bg_vkb2_func_pane_g9

0x0008,

0xfb67,	// (0x0008d85f) bg_vkb2_func_pane_g

0x8c4b,	// (0x00086943) blid2_tripm_pane_g6_ParamLimits

0x8c4b,	// (0x00086943) blid2_tripm_pane_g6

0xcff5,	// (0x0008aced) mp4_progress_pane_g1

0x8cba,	// (0x000869b2) blid2_tripm_values_pane_ParamLimits

0x8cba,	// (0x000869b2) blid2_tripm_values_pane

0x8da9,	// (0x00086aa1) blid2_tripm_values_pane_t1

0x8db7,	// (0x00086aaf) blid2_tripm_values_pane_t2

0x8dc5,	// (0x00086abd) blid2_tripm_values_pane_t3

0x8dd3,	// (0x00086acb) blid2_tripm_values_pane_t4

0x8de1,	// (0x00086ad9) blid2_tripm_values_pane_t5

0x8def,	// (0x00086ae7) blid2_tripm_values_pane_t6

0x8dfd,	// (0x00086af5) blid2_tripm_values_pane_t7

0x8e0b,	// (0x00086b03) blid2_tripm_values_pane_t8

0x8e19,	// (0x00086b11) blid2_tripm_values_pane_t9

0x0008,

0xfb7a,	// (0x0008d872) blid2_tripm_values_pane_t

0x3de4,	// (0x00081adc) call_video_pane_t1_ParamLimits

0x3df6,	// (0x00081aee) call_video_pane_t2_ParamLimits

0xf2a1,	// (0x0008cf99) call_video_pane_t_ParamLimits

0x50eb,	// (0x00082de3) msg_header_pane_g1_ParamLimits

0x11d6,	// (0x0007eece) msg_header_pane_g2_ParamLimits

0x11d6,	// (0x0007eece) msg_header_pane_g2

0x0001,

0xf4bb,	// (0x0008d1b3) msg_header_pane_g_ParamLimits

0xf4bb,	// (0x0008d1b3) msg_header_pane_g

0xaee4,	// (0x00088bdc) main_clock2_pane_ParamLimits

0x6ec2,	// (0x00084bba) grid_clock2_toolbar_pane_ParamLimits

0x6ec2,	// (0x00084bba) grid_clock2_toolbar_pane

0x6ec2,	// (0x00084bba) listscroll_clock2_pane_ParamLimits

0x6ec2,	// (0x00084bba) listscroll_clock2_pane

0x6f91,	// (0x00084c89) main_clock2_pane_t3_ParamLimits

0x6f91,	// (0x00084c89) main_clock2_pane_t3

0x6faa,	// (0x00084ca2) main_clock2_pane_t4_ParamLimits

0x6faa,	// (0x00084ca2) main_clock2_pane_t4

0xd846,	// (0x0008b53e) cell_clock2_toolbar_pane

0xd84e,	// (0x0008b546) cell_clock2_toolbar_pane_cp01

0xd84e,	// (0x0008b546) cell_clock2_toolbar_pane_cp02

0xd856,	// (0x0008b54e) cell_clock2_toolbar_pane_cp03

0xd85e,	// (0x0008b556) list_clock2_pane

0x0e9c,	// (0x0007eb94) scroll_pane_cp10

0xd866,	// (0x0008b55e) list_single_clock2_pane_ParamLimits

0xd866,	// (0x0008b55e) list_single_clock2_pane

0x105b,	// (0x0007ed53) list_highlight_pane_cp08

0xd873,	// (0x0008b56b) list_single_clock2_pane_t1

0xd881,	// (0x0008b579) list_single_clock2_pane_t2

0x0001,

0xfb8d,	// (0x0008d885) list_single_clock2_pane_t

0xa722,	// (0x0008841a) bg_button_pane_cp10

0xd88f,	// (0x0008b587) cell_clock2_toolbar_pane_g1

0x516a,	// (0x00082e62) aid_main_viewer_pane_g1_ParamLimits

0x516a,	// (0x00082e62) aid_main_viewer_pane_g1

0x5176,	// (0x00082e6e) aid_main_viewer_pane_g2_ParamLimits

0x5176,	// (0x00082e6e) aid_main_viewer_pane_g2

0x5182,	// (0x00082e7a) aid_main_viewer_pane_g3_ParamLimits

0x5182,	// (0x00082e7a) aid_main_viewer_pane_g3

0x5191,	// (0x00082e89) aid_main_viewer_pane_g4_ParamLimits

0x5191,	// (0x00082e89) aid_main_viewer_pane_g4

0x0003,

0xf4cc,	// (0x0008d1c4) aid_main_viewer_pane_g_ParamLimits

0xf4cc,	// (0x0008d1c4) aid_main_viewer_pane_g

0x1bd0,	// (0x0007f8c8) main_calc_pane_ParamLimits

0x5985,	// (0x0008367d) main_dialer2_pane_ParamLimits

0xa722,	// (0x0008841a) main_cam6_pane

0xa722,	// (0x0008841a) main_vid6_pane

0x6ece,	// (0x00084bc6) listscroll_gen_pane_cp06_ParamLimits

0x6ece,	// (0x00084bc6) listscroll_gen_pane_cp06

0x6fc3,	// (0x00084cbb) main_clock2_pane_t5_ParamLimits

0x6fc3,	// (0x00084cbb) main_clock2_pane_t5

0x7018,	// (0x00084d10) aid_call2_pane_cp10_ParamLimits

0x702a,	// (0x00084d22) aid_call_pane_cp10_ParamLimits

0x0f28,	// (0x0007ec20) popup_clock_analogue_window_cp10_g1_ParamLimits

0x0f28,	// (0x0007ec20) popup_clock_analogue_window_cp10_g2_ParamLimits

0x703c,	// (0x00084d34) popup_clock_analogue_window_cp10_g3_ParamLimits

0x703c,	// (0x00084d34) popup_clock_analogue_window_cp10_g4_ParamLimits

0x0f28,	// (0x0007ec20) popup_clock_analogue_window_cp10_g5_ParamLimits

0xf815,	// (0x0008d50d) popup_clock_analogue_window_cp10_g_ParamLimits

0x704e,	// (0x00084d46) popup_clock_analogue_window_cp10_t1_ParamLimits

0xd05f,	// (0x0008ad57) cell_dialer2_keypad_pane_g2_ParamLimits

0xd05f,	// (0x0008ad57) cell_dialer2_keypad_pane_g2

0x0001,

0xf8fb,	// (0x0008d5f3) cell_dialer2_keypad_pane_g_ParamLimits

0xf8fb,	// (0x0008d5f3) cell_dialer2_keypad_pane_g

0x765d,	// (0x00085355) cell_dialer2_keypad_pane_t1

0x80f7,	// (0x00085def) main_cset_text2_pane_ParamLimits

0x80f7,	// (0x00085def) main_cset_text2_pane

0xd5ee,	// (0x0008b2e6) area_vitu2_query_pane_g1_ParamLimits

0x88bb,	// (0x000865b3) area_vitu2_query_pane_g2_ParamLimits

0xfaaa,	// (0x0008d7a2) area_vitu2_query_pane_g_ParamLimits

0xd672,	// (0x0008b36a) area_vitu2_query_pane_t7_ParamLimits

0xd672,	// (0x0008b36a) area_vitu2_query_pane_t7

0x8916,	// (0x0008660e) bg_button_pane_cp018_ParamLimits

0x8923,	// (0x0008661b) bg_button_pane_cp021_ParamLimits

0x892f,	// (0x00086627) bg_button_pane_cp022_ParamLimits

0x892f,	// (0x00086627) bg_vkb2_func_pane_cp08_ParamLimits

0x8916,	// (0x0008660e) bg_vkb2_func_pane_cp06_ParamLimits

0x8923,	// (0x0008661b) bg_vkb2_func_pane_cp07_ParamLimits

0x893e,	// (0x00086636) input_focus_pane_cp09_ParamLimits

0xf006,	// (0x0008ccfe) cam6_autofocus_pane_ParamLimits

0xf006,	// (0x0008ccfe) cam6_autofocus_pane

0x8e27,	// (0x00086b1f) cam6_image_uncrop_pane_ParamLimits

0x8e27,	// (0x00086b1f) cam6_image_uncrop_pane

0x8e34,	// (0x00086b2c) cam6_indi_pane_ParamLimits

0x8e34,	// (0x00086b2c) cam6_indi_pane

0x8e4a,	// (0x00086b42) cam6_mode_pane_ParamLimits

0x8e4a,	// (0x00086b42) cam6_mode_pane

0x8e5c,	// (0x00086b54) cam6_timer_pane_ParamLimits

0x8e5c,	// (0x00086b54) cam6_timer_pane

0x8e68,	// (0x00086b60) cam6_zoom_pane_ParamLimits

0x8e68,	// (0x00086b60) cam6_zoom_pane

0x8e74,	// (0x00086b6c) cam6_mode_pane_g1_ParamLimits

0x8e74,	// (0x00086b6c) cam6_mode_pane_g1

0x8e84,	// (0x00086b7c) cam6_mode_pane_g2_ParamLimits

0x8e84,	// (0x00086b7c) cam6_mode_pane_g2

0x8e94,	// (0x00086b8c) cam6_mode_pane_g3_ParamLimits

0x8e94,	// (0x00086b8c) cam6_mode_pane_g3

0x8ea4,	// (0x00086b9c) cam6_mode_pane_g4_ParamLimits

0x8ea4,	// (0x00086b9c) cam6_mode_pane_g4

0x0003,

0xfb92,	// (0x0008d88a) cam6_mode_pane_g_ParamLimits

0xfb92,	// (0x0008d88a) cam6_mode_pane_g

0xd897,	// (0x0008b58f) bg_tb_trans_pane_cp08_ParamLimits

0xd897,	// (0x0008b58f) bg_tb_trans_pane_cp08

0xd8a5,	// (0x0008b59d) cam6_battery_pane_ParamLimits

0xd8a5,	// (0x0008b59d) cam6_battery_pane

0xd8bb,	// (0x0008b5b3) cam6_indi_pane_g1_ParamLimits

0xd8bb,	// (0x0008b5b3) cam6_indi_pane_g1

0xd8cd,	// (0x0008b5c5) cam6_indi_pane_g2_ParamLimits

0xd8cd,	// (0x0008b5c5) cam6_indi_pane_g2

0xd8df,	// (0x0008b5d7) cam6_indi_pane_g3_ParamLimits

0xd8df,	// (0x0008b5d7) cam6_indi_pane_g3

0x0002,

0xfb9b,	// (0x0008d893) cam6_indi_pane_g_ParamLimits

0xfb9b,	// (0x0008d893) cam6_indi_pane_g

0xd8f1,	// (0x0008b5e9) cam6_indi_pane_t1_ParamLimits

0xd8f1,	// (0x0008b5e9) cam6_indi_pane_t1

0x7be2,	// (0x000858da) cam6_autofocus_pane_g1

0x7bda,	// (0x000858d2) cam6_autofocus_pane_g2

0x7bf2,	// (0x000858ea) cam6_autofocus_pane_g3

0x7bea,	// (0x000858e2) cam6_autofocus_pane_g4

0x0003,

0xfba2,	// (0x0008d89a) cam6_autofocus_pane_g

0xd917,	// (0x0008b60f) cam6_timer_pane_g1

0xd91f,	// (0x0008b617) cam6_timer_pane_t1

0xd92d,	// (0x0008b625) cam6_zoom_cont_pane

0xd935,	// (0x0008b62d) cam6_zoom_pane_g1

0xd93d,	// (0x0008b635) cam6_zoom_pane_g2

0x8eb4,	// (0x00086bac) cam6_zoom_pane_g3

0x0002,

0xfbab,	// (0x0008d8a3) cam6_zoom_pane_g

0xc78f,	// (0x0008a487) cam6_battery_pane_g1

0xc78f,	// (0x0008a487) cam6_battery_pane_g2

0x0001,

0xf722,	// (0x0008d41a) cam6_battery_pane_g

0xd945,	// (0x0008b63d) cam6_zoom_cont_pane_g1

0xd94e,	// (0x0008b646) cam6_zoom_cont_pane_g2

0xd957,	// (0x0008b64f) cam6_zoom_cont_pane_g3

0x0002,

0xfbb2,	// (0x0008d8aa) cam6_zoom_cont_pane_g

0x8ed1,	// (0x00086bc9) cam6_mode_pane_cp_ParamLimits

0x8ed1,	// (0x00086bc9) cam6_mode_pane_cp

0x8ee3,	// (0x00086bdb) cam6_zoom_pane_cp_ParamLimits

0x8ee3,	// (0x00086bdb) cam6_zoom_pane_cp

0x8eef,	// (0x00086be7) vid6_image_uncrop_cif_pane_ParamLimits

0x8eef,	// (0x00086be7) vid6_image_uncrop_cif_pane

0x8efd,	// (0x00086bf5) vid6_image_uncrop_nhd_pane_ParamLimits

0x8efd,	// (0x00086bf5) vid6_image_uncrop_nhd_pane

0x8f0a,	// (0x00086c02) vid6_image_uncrop_vga_pane_ParamLimits

0x8f0a,	// (0x00086c02) vid6_image_uncrop_vga_pane

0x8f17,	// (0x00086c0f) vid6_image_uncrop_wvga_pane_ParamLimits

0x8f17,	// (0x00086c0f) vid6_image_uncrop_wvga_pane

0x8f24,	// (0x00086c1c) vid6_indi_pane_ParamLimits

0x8f24,	// (0x00086c1c) vid6_indi_pane

0xd897,	// (0x0008b58f) bg_tb_trans_pane_cp09_ParamLimits

0xd897,	// (0x0008b58f) bg_tb_trans_pane_cp09

0xd96b,	// (0x0008b663) cam6_battery_pane_cp_ParamLimits

0xd96b,	// (0x0008b663) cam6_battery_pane_cp

0xd977,	// (0x0008b66f) vid6_indi_pane_g1_ParamLimits

0xd977,	// (0x0008b66f) vid6_indi_pane_g1

0xd989,	// (0x0008b681) vid6_indi_pane_g2_ParamLimits

0xd989,	// (0x0008b681) vid6_indi_pane_g2

0xd99b,	// (0x0008b693) vid6_indi_pane_g3_ParamLimits

0xd99b,	// (0x0008b693) vid6_indi_pane_g3

0xd9b0,	// (0x0008b6a8) vid6_indi_pane_g4_ParamLimits

0xd9b0,	// (0x0008b6a8) vid6_indi_pane_g4

0xd9c5,	// (0x0008b6bd) vid6_indi_pane_g5_ParamLimits

0xd9c5,	// (0x0008b6bd) vid6_indi_pane_g5

0x0004,

0xfbb9,	// (0x0008d8b1) vid6_indi_pane_g_ParamLimits

0xfbb9,	// (0x0008d8b1) vid6_indi_pane_g

0xd9df,	// (0x0008b6d7) vid6_indi_pane_t1_ParamLimits

0xd9df,	// (0x0008b6d7) vid6_indi_pane_t1

0xd9f5,	// (0x0008b6ed) vid6_indi_pane_t2_ParamLimits

0xd9f5,	// (0x0008b6ed) vid6_indi_pane_t2

0xda1d,	// (0x0008b715) vid6_indi_pane_t3_ParamLimits

0xda1d,	// (0x0008b715) vid6_indi_pane_t3

0xda45,	// (0x0008b73d) vid6_indi_pane_t4_ParamLimits

0xda45,	// (0x0008b73d) vid6_indi_pane_t4

0x0003,

0xfbc4,	// (0x0008d8bc) vid6_indi_pane_t_ParamLimits

0xfbc4,	// (0x0008d8bc) vid6_indi_pane_t

0xda69,	// (0x0008b761) wait_bar_pane_cp08

0x8f3b,	// (0x00086c33) main_cset_text2_pane_t1_ParamLimits

0x8f3b,	// (0x00086c33) main_cset_text2_pane_t1

0x8ebc,	// (0x00086bb4) listscroll_gen_pane_cp06_t1_ParamLimits

0x8ebc,	// (0x00086bb4) listscroll_gen_pane_cp06_t1

0xa722,	// (0x0008841a) main_cam6_set_pane

0xee6e,	// (0x0008cb66) bg_tb_trans_pane_cp06_ParamLimits

0xee84,	// (0x0008cb7c) cam4_indicators_pane_g1_ParamLimits

0xee94,	// (0x0008cb8c) cam4_indicators_pane_g2_ParamLimits

0xf938,	// (0x0008d630) cam4_indicators_pane_g_ParamLimits

0xeeb4,	// (0x0008cbac) cam4_indicators_pane_t1_ParamLimits

0xeed6,	// (0x0008cbce) bg_tb_trans_pane_cp07_ParamLimits

0x7b89,	// (0x00085881) vid4_indicators_pane_g1_ParamLimits

0x7b96,	// (0x0008588e) vid4_indicators_pane_g2_ParamLimits

0x7ba3,	// (0x0008589b) vid4_indicators_pane_g3_ParamLimits

0x7bb0,	// (0x000858a8) vid4_indicators_pane_g4_ParamLimits

0xf94a,	// (0x0008d642) vid4_indicators_pane_g_ParamLimits

0x7bc8,	// (0x000858c0) vid4_indicators_pane_t1_ParamLimits

0xef71,	// (0x0008cc69) vid4_progress_pane_g1_ParamLimits

0xef80,	// (0x0008cc78) vid4_progress_pane_g2_ParamLimits

0xef8f,	// (0x0008cc87) vid4_progress_pane_g3_ParamLimits

0xef9e,	// (0x0008cc96) vid4_progress_pane_g4_ParamLimits

0xfaf5,	// (0x0008d7ed) vid4_progress_pane_g_ParamLimits

0xefb6,	// (0x0008ccae) vid4_progress_pane_t1_ParamLimits

0xefcc,	// (0x0008ccc4) vid4_progress_pane_t2_ParamLimits

0xefe1,	// (0x0008ccd9) vid4_progress_pane_t3_ParamLimits

0xfb00,	// (0x0008d7f8) vid4_progress_pane_t_ParamLimits

0xeff6,	// (0x0008ccee) wait_bar_pane_cp07_ParamLimits

0x8f55,	// (0x00086c4d) main_cam6_set_pane_g2_ParamLimits

0x8f55,	// (0x00086c4d) main_cam6_set_pane_g2

0x8f77,	// (0x00086c6f) main_cset6_listscroll_pane_ParamLimits

0x8f77,	// (0x00086c6f) main_cset6_listscroll_pane

0x8f91,	// (0x00086c89) main_cset6_slider_pane_ParamLimits

0x8f91,	// (0x00086c89) main_cset6_slider_pane

0x8fa7,	// (0x00086c9f) main_cset6_text2_pane_ParamLimits

0x8fa7,	// (0x00086c9f) main_cset6_text2_pane

0xda79,	// (0x0008b771) main_cset6_text_pane

0xd293,	// (0x0008af8b) main_cset_list_pane_copy1_ParamLimits

0xd293,	// (0x0008af8b) main_cset_list_pane_copy1

0xd2a3,	// (0x0008af9b) scroll_pane_cp028_copy1

0x8fb5,	// (0x00086cad) cset_list_set_pane_copy1

0x8fc7,	// (0x00086cbf) aid_position_infowindow_above_copy1

0x8fcf,	// (0x00086cc7) aid_position_infowindow_below_copy1

0x8fd7,	// (0x00086ccf) cset_list_set_pane_g1_copy1

0x8fdf,	// (0x00086cd7) cset_list_set_pane_g3_copy1_ParamLimits

0x8fdf,	// (0x00086cd7) cset_list_set_pane_g3_copy1

0x8fee,	// (0x00086ce6) cset_list_set_pane_t1_copy1_ParamLimits

0x8fee,	// (0x00086ce6) cset_list_set_pane_t1_copy1

0x1bd0,	// (0x0007f8c8) list_highlight_pane_cp021_copy1_ParamLimits

0x1bd0,	// (0x0007f8c8) list_highlight_pane_cp021_copy1

0xda81,	// (0x0008b779) cset6_slider_pane_ParamLimits

0xda81,	// (0x0008b779) cset6_slider_pane

0xdaad,	// (0x0008b7a5) main_cset6_slider_pane_g1_ParamLimits

0xdaad,	// (0x0008b7a5) main_cset6_slider_pane_g1

0x9003,	// (0x00086cfb) main_cset6_slider_pane_g2_ParamLimits

0x9003,	// (0x00086cfb) main_cset6_slider_pane_g2

0xd2b8,	// (0x0008afb0) main_cset6_slider_pane_g3_ParamLimits

0xd2b8,	// (0x0008afb0) main_cset6_slider_pane_g3

0x81bc,	// (0x00085eb4) main_cset6_slider_pane_g4_ParamLimits

0x81bc,	// (0x00085eb4) main_cset6_slider_pane_g4

0x8204,	// (0x00085efc) main_cset6_slider_pane_g5_ParamLimits

0x8204,	// (0x00085efc) main_cset6_slider_pane_g5

0xd2b8,	// (0x0008afb0) main_cset6_slider_pane_g7_ParamLimits

0xd2b8,	// (0x0008afb0) main_cset6_slider_pane_g7

0xd2c4,	// (0x0008afbc) main_cset6_slider_pane_g8_ParamLimits

0xd2c4,	// (0x0008afbc) main_cset6_slider_pane_g8

0x81a4,	// (0x00085e9c) main_cset6_slider_pane_g9_ParamLimits

0x81a4,	// (0x00085e9c) main_cset6_slider_pane_g9

0x81b0,	// (0x00085ea8) main_cset6_slider_pane_g10_ParamLimits

0x81b0,	// (0x00085ea8) main_cset6_slider_pane_g10

0x81bc,	// (0x00085eb4) main_cset6_slider_pane_g11_ParamLimits

0x81bc,	// (0x00085eb4) main_cset6_slider_pane_g11

0x81c8,	// (0x00085ec0) main_cset6_slider_pane_g12_ParamLimits

0x81c8,	// (0x00085ec0) main_cset6_slider_pane_g12

0x81d4,	// (0x00085ecc) main_cset6_slider_pane_g13_ParamLimits

0x81d4,	// (0x00085ecc) main_cset6_slider_pane_g13

0x81e0,	// (0x00085ed8) main_cset6_slider_pane_g14_ParamLimits

0x81e0,	// (0x00085ed8) main_cset6_slider_pane_g14

0x902b,	// (0x00086d23) main_cset6_slider_pane_g15_ParamLimits

0x902b,	// (0x00086d23) main_cset6_slider_pane_g15

0x8204,	// (0x00085efc) main_cset6_slider_pane_g16_ParamLimits

0x8204,	// (0x00085efc) main_cset6_slider_pane_g16

0x8210,	// (0x00085f08) main_cset6_slider_pane_g17_ParamLimits

0x8210,	// (0x00085f08) main_cset6_slider_pane_g17

0x0011,

0xfbcd,	// (0x0008d8c5) main_cset6_slider_pane_g_ParamLimits

0xfbcd,	// (0x0008d8c5) main_cset6_slider_pane_g

0xdad5,	// (0x0008b7cd) main_cset6_slider_pane_t1_ParamLimits

0xdad5,	// (0x0008b7cd) main_cset6_slider_pane_t1

0xdb16,	// (0x0008b80e) main_cset6_slider_pane_t2_ParamLimits

0xdb16,	// (0x0008b80e) main_cset6_slider_pane_t2

0xdb41,	// (0x0008b839) main_cset6_slider_pane_t3_ParamLimits

0xdb41,	// (0x0008b839) main_cset6_slider_pane_t3

0x9043,	// (0x00086d3b) main_cset6_slider_pane_t4_ParamLimits

0x9043,	// (0x00086d3b) main_cset6_slider_pane_t4

0x906e,	// (0x00086d66) main_cset6_slider_pane_t5_ParamLimits

0x906e,	// (0x00086d66) main_cset6_slider_pane_t5

0xdb6c,	// (0x0008b864) main_cset6_slider_pane_t7_ParamLimits

0xdb6c,	// (0x0008b864) main_cset6_slider_pane_t7

0x9099,	// (0x00086d91) main_cset6_slider_pane_t8_ParamLimits

0x9099,	// (0x00086d91) main_cset6_slider_pane_t8

0x90bd,	// (0x00086db5) main_cset6_slider_pane_t9_ParamLimits

0x90bd,	// (0x00086db5) main_cset6_slider_pane_t9

0x90e1,	// (0x00086dd9) main_cset6_slider_pane_t10_ParamLimits

0x90e1,	// (0x00086dd9) main_cset6_slider_pane_t10

0x9105,	// (0x00086dfd) main_cset6_slider_pane_t11_ParamLimits

0x9105,	// (0x00086dfd) main_cset6_slider_pane_t11

0xdba2,	// (0x0008b89a) main_cset6_slider_pane_t14_ParamLimits

0xdba2,	// (0x0008b89a) main_cset6_slider_pane_t14

0xdbdb,	// (0x0008b8d3) main_cset6_slider_pane_t15_ParamLimits

0xdbdb,	// (0x0008b8d3) main_cset6_slider_pane_t15

0x000b,

0xfbf2,	// (0x0008d8ea) main_cset6_slider_pane_t_ParamLimits

0xfbf2,	// (0x0008d8ea) main_cset6_slider_pane_t

0xdc14,	// (0x0008b90c) cset_slider_pane_g1_copy1

0xdc1d,	// (0x0008b915) cset_slider_pane_g2_copy1

0xdc26,	// (0x0008b91e) cset_slider_pane_g3_copy1

0xa722,	// (0x0008841a) bg_popup_sub_pane_cp011_copy1

0xd420,	// (0x0008b118) main_cset_text_pane_g1_copy1

0xd428,	// (0x0008b120) main_cset_text_pane_t1_copy1

0xd436,	// (0x0008b12e) main_cset_text_pane_t2_copy1

0xd444,	// (0x0008b13c) main_cset_text_pane_t3_copy1

0xd452,	// (0x0008b14a) main_cset_text_pane_t4_copy1

0xd460,	// (0x0008b158) main_cset_text_pane_t5_copy1

0xd46e,	// (0x0008b166) main_cset_text_pane_t6_copy1

0xd47c,	// (0x0008b174) main_cset_text_pane_t7_copy1

0x9129,	// (0x00086e21) main_cset_text2_pane_t1_copy1

0xa722,	// (0x0008841a) main_ncimui_pane

0x5b93,	// (0x0008388b) popup_query_ncimui_window_ParamLimits

0x5b93,	// (0x0008388b) popup_query_ncimui_window

0xca5f,	// (0x0008a757) field_cale_ev2_pane_g4_ParamLimits

0xca5f,	// (0x0008a757) field_cale_ev2_pane_g4

0x754f,	// (0x00085247) cell_video_dialer_keypad_pane_g2_ParamLimits

0x754f,	// (0x00085247) cell_video_dialer_keypad_pane_g2

0x0001,

0xf8d6,	// (0x0008d5ce) cell_video_dialer_keypad_pane_g_ParamLimits

0xf8d6,	// (0x0008d5ce) cell_video_dialer_keypad_pane_g

0x7567,	// (0x0008525f) cell_video_dialer_keypad_pane_t1

0xa722,	// (0x0008841a) bg_popup_window_pane_cp012

0xba6d,	// (0x00089765) heading_pane_cp06

0xdd18,	// (0x0008ba10) ncim_query_content_pane

0xa722,	// (0x0008841a) bg_popup_heading_pane_cp01

0xdd20,	// (0x0008ba18) ncim_heading_pane_t1

0xdd2e,	// (0x0008ba26) ncim_indicator_popup_pane

0xdd40,	// (0x0008ba38) ncim_query_button_pane

0xdd54,	// (0x0008ba4c) ncim_query_content_pane_t1

0xdd66,	// (0x0008ba5e) ncim_query_content_pane_t2

0x0005,

0xfc31,	// (0x0008d929) ncim_query_content_pane_t

0xdda0,	// (0x0008ba98) ncim_query_list_pane

0xddb2,	// (0x0008baaa) ncim_query_popup_pane

0xdd2e,	// (0x0008ba26) ncim_indicator_popup_pane_ParamLimits

0x9209,	// (0x00086f01) ncim_query_content_pane_g1_ParamLimits

0x9209,	// (0x00086f01) ncim_query_content_pane_g1

0xdd54,	// (0x0008ba4c) ncim_query_content_pane_t1_ParamLimits

0xdd66,	// (0x0008ba5e) ncim_query_content_pane_t2_ParamLimits

0x9215,	// (0x00086f0d) ncim_query_content_pane_t3_ParamLimits

0x9215,	// (0x00086f0d) ncim_query_content_pane_t3

0x923d,	// (0x00086f35) ncim_query_content_pane_t4_ParamLimits

0x923d,	// (0x00086f35) ncim_query_content_pane_t4

0x9265,	// (0x00086f5d) ncim_query_content_pane_t5_ParamLimits

0x9265,	// (0x00086f5d) ncim_query_content_pane_t5

0xdd78,	// (0x0008ba70) ncim_query_content_pane_t6_ParamLimits

0xdd78,	// (0x0008ba70) ncim_query_content_pane_t6

0xfc31,	// (0x0008d929) ncim_query_content_pane_t_ParamLimits

0xdda0,	// (0x0008ba98) ncim_query_list_pane_ParamLimits

0xddb2,	// (0x0008baaa) ncim_query_popup_pane_ParamLimits

0xddc6,	// (0x0008babe) wait_bar_pane_cp04

0xa722,	// (0x0008841a) input_focus_pane_cp011

0xddce,	// (0x0008bac6) ncim_query_popup_pane_t1

0xdddc,	// (0x0008bad4) ncim_list_query_list_pane_ParamLimits

0xdddc,	// (0x0008bad4) ncim_list_query_list_pane

0xa722,	// (0x0008841a) bg_button_pane_cp027

0xddef,	// (0x0008bae7) ncim_query_button_pane_g1

0xa722,	// (0x0008841a) list_highlight_pane_cp012

0xddf9,	// (0x0008baf1) ncim_list_query_list_pane_g1

0xde01,	// (0x0008baf9) ncim_list_query_list_pane_t1

0xeea4,	// (0x0008cb9c) cam4_indicators_pane_g3_ParamLimits

0xeea4,	// (0x0008cb9c) cam4_indicators_pane_g3

0x7bbc,	// (0x000858b4) vid4_indicators_pane_g5_ParamLimits

0x7bbc,	// (0x000858b4) vid4_indicators_pane_g5

0xefaa,	// (0x0008cca2) vid4_progress_pane_g5_ParamLimits

0xefaa,	// (0x0008cca2) vid4_progress_pane_g5

0x9153,	// (0x00086e4b) main_ncimui_pane_g1

0x9199,	// (0x00086e91) ncimui_group_query_pane_ParamLimits

0x9199,	// (0x00086e91) ncimui_group_query_pane

0x91cd,	// (0x00086ec5) ncimui_list_pane_ParamLimits

0x91cd,	// (0x00086ec5) ncimui_list_pane

0x91e5,	// (0x00086edd) ncimui_text_pane_ParamLimits

0x91e5,	// (0x00086edd) ncimui_text_pane

0x928d,	// (0x00086f85) ncimui_text_pane_t1_ParamLimits

0x928d,	// (0x00086f85) ncimui_text_pane_t1

0xde18,	// (0x0008bb10) ncimui_list_single_graphic_pane_ParamLimits

0xde18,	// (0x0008bb10) ncimui_list_single_graphic_pane

0x92b3,	// (0x00086fab) ncimui_query_pane_ParamLimits

0x92b3,	// (0x00086fab) ncimui_query_pane

0xa722,	// (0x0008841a) list_highlight_pane_cp013

0xde25,	// (0x0008bb1d) ncim_list_query_list_pane_t1_copy1

0xde33,	// (0x0008bb2b) ncim_list_single_graphic_pane_g1

0xde3b,	// (0x0008bb33) ncim_query_button_pane_cp01

0xde43,	// (0x0008bb3b) ncim_query_entry_pane_ParamLimits

0xde43,	// (0x0008bb3b) ncim_query_entry_pane

0xde53,	// (0x0008bb4b) ncimui_query_pane_g1

0xde5b,	// (0x0008bb53) ncimui_query_pane_t1_ParamLimits

0xde5b,	// (0x0008bb53) ncimui_query_pane_t1

0xa722,	// (0x0008841a) input_focus_pane_cp012

0xddce,	// (0x0008bac6) ncim_query_entry_pane_t1

0xaee4,	// (0x00088bdc) main_im_pane_ParamLimits

0x1bd0,	// (0x0007f8c8) main_mobtv_pane_ParamLimits

0x1bd0,	// (0x0007f8c8) main_mobtv_pane

0x81a4,	// (0x00085e9c) main_cset6_slider_pane_g18_ParamLimits

0x81a4,	// (0x00085e9c) main_cset6_slider_pane_g18

0x81d4,	// (0x00085ecc) main_cset6_slider_pane_g19_ParamLimits

0x81d4,	// (0x00085ecc) main_cset6_slider_pane_g19

0xde71,	// (0x0008bb69) bg_main_mobtv_pane_ParamLimits

0xde71,	// (0x0008bb69) bg_main_mobtv_pane

0x92c3,	// (0x00086fbb) main_mobtv_info_pane

0x92cc,	// (0x00086fc4) main_mobtv_loading_pane_ParamLimits

0x92cc,	// (0x00086fc4) main_mobtv_loading_pane

0xde7f,	// (0x0008bb77) main_mobtv_pg_channel_list_pane

0xde89,	// (0x0008bb81) main_mobtv_pg_hdr_pane

0x92d9,	// (0x00086fd1) main_mobtv_programe_curr_pane_ParamLimits

0x92d9,	// (0x00086fd1) main_mobtv_programe_curr_pane

0x92e6,	// (0x00086fde) main_mobtv_programe_next_pane_ParamLimits

0x92e6,	// (0x00086fde) main_mobtv_programe_next_pane

0xde92,	// (0x0008bb8a) popup_mobtv_noti_window

0xc78f,	// (0x0008a487) main_tv_pg_hdr_pane_g1

0xde9a,	// (0x0008bb92) main_tv_pg_hdr_pane_g2

0xdea2,	// (0x0008bb9a) main_tv_pg_hdr_pane_g3

0xdeaa,	// (0x0008bba2) main_tv_pg_hdr_pane_g4

0xdeb2,	// (0x0008bbaa) main_tv_pg_hdr_pane_g5

0xdeba,	// (0x0008bbb2) main_tv_pg_hdr_pane_g6

0xdec2,	// (0x0008bbba) main_tv_pg_hdr_pane_g7

0xdeca,	// (0x0008bbc2) main_tv_pg_hdr_pane_g8

0xded2,	// (0x0008bbca) main_tv_pg_hdr_pane_g9

0xdeda,	// (0x0008bbd2) main_tv_pg_hdr_pane_g10

0xdee4,	// (0x0008bbdc) main_tv_pg_hdr_pane_g11

0x000a,

0xfc3e,	// (0x0008d936) main_tv_pg_hdr_pane_g

0xdeee,	// (0x0008bbe6) main_tv_pg_hdr_pane_t1

0xdefc,	// (0x0008bbf4) main_tv_pg_hdr_pane_t2

0xdf0a,	// (0x0008bc02) main_tv_pg_hdr_pane_t3

0xdf18,	// (0x0008bc10) main_tv_pg_hdr_pane_t4

0xdf26,	// (0x0008bc1e) main_tv_pg_hdr_pane_t5

0x0004,

0xfc55,	// (0x0008d94d) main_tv_pg_hdr_pane_t

0xdf34,	// (0x0008bc2c) single_mobtv_pg_channel_pane_ParamLimits

0xdf34,	// (0x0008bc2c) single_mobtv_pg_channel_pane

0xdf46,	// (0x0008bc3e) single_mobtv_pg_channel_table_pane

0xdf4f,	// (0x0008bc47) single_mobtv_pg_channel_thumb_pane

0xdf58,	// (0x0008bc50) single_tv_pg_channel_pane_g1

0xdf61,	// (0x0008bc59) single_tv_pg_channel_pane_g2

0x0001,

0xfc60,	// (0x0008d958) single_tv_pg_channel_pane_g

0xc9be,	// (0x0008a6b6) bg_single_mobtv_pg_channel_thumb_pane_ParamLimits

0xc9be,	// (0x0008a6b6) bg_single_mobtv_pg_channel_thumb_pane

0xdf6a,	// (0x0008bc62) single_mobtv_pg_channel_thumb_pane_g1_ParamLimits

0xdf6a,	// (0x0008bc62) single_mobtv_pg_channel_thumb_pane_g1

0xdf78,	// (0x0008bc70) single_mobtv_pg_channel_thumb_pane_g2_ParamLimits

0xdf78,	// (0x0008bc70) single_mobtv_pg_channel_thumb_pane_g2

0xdf84,	// (0x0008bc7c) single_mobtv_pg_channel_thumb_pane_g3_ParamLimits

0xdf84,	// (0x0008bc7c) single_mobtv_pg_channel_thumb_pane_g3

0x0002,

0xfc65,	// (0x0008d95d) single_mobtv_pg_channel_thumb_pane_g_ParamLimits

0xfc65,	// (0x0008d95d) single_mobtv_pg_channel_thumb_pane_g

0xdf90,	// (0x0008bc88) single_mobtv_pg_channel_thumb_pane_t1

0xdf9e,	// (0x0008bc96) single_mobtv_pg_channel_thumb_pane_t2

0x0001,

0xfc6c,	// (0x0008d964) single_mobtv_pg_channel_thumb_pane_t

0xc78f,	// (0x0008a487) bg_single_mobtv_pg_channel_table_pane_g1

0xc78f,	// (0x0008a487) bg_single_mobtv_pg_channel_table_pane_g2

0x0001,

0xf722,	// (0x0008d41a) bg_single_mobtv_pg_channel_table_pane_g

0xdfac,	// (0x0008bca4) single_mobtv_pg_channel_table_pane_t1

0xdfba,	// (0x0008bcb2) single_mobtv_pg_channel_table_pane_t2

0x0001,

0xfc71,	// (0x0008d969) single_mobtv_pg_channel_table_pane_t

0x92fb,	// (0x00086ff3) main_mobtv_info_pane_g1_ParamLimits

0x92fb,	// (0x00086ff3) main_mobtv_info_pane_g1

0x9317,	// (0x0008700f) main_mobtv_info_pane_t1_ParamLimits

0x9317,	// (0x0008700f) main_mobtv_info_pane_t1

0x937d,	// (0x00087075) main_mobtv_info_pane_t2_ParamLimits

0x937d,	// (0x00087075) main_mobtv_info_pane_t2

0x0002,

0xfc7b,	// (0x0008d973) main_mobtv_info_pane_t_ParamLimits

0xfc7b,	// (0x0008d973) main_mobtv_info_pane_t

0x9400,	// (0x000870f8) wait_bar_pane_cp05

0x9410,	// (0x00087108) main_mobtv_loading_pane_g1_ParamLimits

0x9410,	// (0x00087108) main_mobtv_loading_pane_g1

0x9421,	// (0x00087119) main_mobtv_loading_pane_g2_ParamLimits

0x9421,	// (0x00087119) main_mobtv_loading_pane_g2

0x942d,	// (0x00087125) main_mobtv_loading_pane_g3_ParamLimits

0x942d,	// (0x00087125) main_mobtv_loading_pane_g3

0x0002,

0xfc82,	// (0x0008d97a) main_mobtv_loading_pane_g_ParamLimits

0xfc82,	// (0x0008d97a) main_mobtv_loading_pane_g

0xdfc8,	// (0x0008bcc0) main_mobtv_loading_pane_t1_ParamLimits

0xdfc8,	// (0x0008bcc0) main_mobtv_loading_pane_t1

0xdfe0,	// (0x0008bcd8) main_mobtv_loading_pane_t2_ParamLimits

0xdfe0,	// (0x0008bcd8) main_mobtv_loading_pane_t2

0x0001,

0xfc89,	// (0x0008d981) main_mobtv_loading_pane_t_ParamLimits

0xfc89,	// (0x0008d981) main_mobtv_loading_pane_t

0x943e,	// (0x00087136) wait_bar_pane_cp06_ParamLimits

0x943e,	// (0x00087136) wait_bar_pane_cp06

0xe004,	// (0x0008bcfc) main_mobtv_programe_curr_pane_t1

0xe012,	// (0x0008bd0a) main_mobtv_programe_curr_pane_t2

0x0001,

0xfc8e,	// (0x0008d986) main_mobtv_programe_curr_pane_t

0xe020,	// (0x0008bd18) main_mobtv_programe_next_pane_t1

0xe02e,	// (0x0008bd26) main_mobtv_programe_next_pane_t2

0xe03c,	// (0x0008bd34) main_mobtv_programe_next_pane_t3

0x0002,

0xfc93,	// (0x0008d98b) main_mobtv_programe_next_pane_t

0xa722,	// (0x0008841a) bg_popup_mobtv_noti_window_pane

0xe04a,	// (0x0008bd42) popup_mobtv_noti_window_g1

0xe052,	// (0x0008bd4a) popup_mobtv_noti_window_t1

0xe060,	// (0x0008bd58) popup_mobtv_noti_window_t2

0x0001,

0xfc9a,	// (0x0008d992) popup_mobtv_noti_window_t

0xc78f,	// (0x0008a487) bg_popup_mobtv_noti_window_pane_g1

0xa722,	// (0x0008841a) sc_clock_pane

0xa722,	// (0x0008841a) main_fs_bigclock_pane

0x8ca4,	// (0x0008699c) blid2_tripm_pane_t4_ParamLimits

0x8ca4,	// (0x0008699c) blid2_tripm_pane_t4

0x944d,	// (0x00087145) sc_clock_pane_g1_ParamLimits

0x944d,	// (0x00087145) sc_clock_pane_g1

0x945f,	// (0x00087157) sc_clock_pane_t1_ParamLimits

0x945f,	// (0x00087157) sc_clock_pane_t1

0x9481,	// (0x00087179) sc_clock_pane_t2_ParamLimits

0x9481,	// (0x00087179) sc_clock_pane_t2

0x9497,	// (0x0008718f) sc_clock_pane_t3_ParamLimits

0x9497,	// (0x0008718f) sc_clock_pane_t3

0x0004,

0xfc9f,	// (0x0008d997) sc_clock_pane_t_ParamLimits

0xfc9f,	// (0x0008d997) sc_clock_pane_t

0xa19b,	// (0x00087e93) main_fs_bigclock_indicator_pane_ParamLimits

0xa19b,	// (0x00087e93) main_fs_bigclock_indicator_pane

0xc98e,	// (0x0008a686) main_fs_bigclock_pane_g1_ParamLimits

0xc98e,	// (0x0008a686) main_fs_bigclock_pane_g1

0xa1a7,	// (0x00087e9f) main_fs_bigclock_pane_t1_ParamLimits

0xa1a7,	// (0x00087e9f) main_fs_bigclock_pane_t1

0xa1b9,	// (0x00087eb1) main_fs_bigclock_pane_t2_ParamLimits

0xa1b9,	// (0x00087eb1) main_fs_bigclock_pane_t2

0xa1cb,	// (0x00087ec3) main_fs_bigclock_pane_t3_ParamLimits

0xa1cb,	// (0x00087ec3) main_fs_bigclock_pane_t3

0x0002,

0xfe99,	// (0x0008db91) main_fs_bigclock_pane_t_ParamLimits

0xfe99,	// (0x0008db91) main_fs_bigclock_pane_t

0x0631,	// (0x0007e329) main_fs_bigclock_indicator_pane_g1

0xdd48,	// (0x0008ba40) ncim_query_content_pane_g2_ParamLimits

0xdd48,	// (0x0008ba40) ncim_query_content_pane_g2

0x0001,

0xfc2c,	// (0x0008d924) ncim_query_content_pane_g_ParamLimits

0xfc2c,	// (0x0008d924) ncim_query_content_pane_g

0x94ac,	// (0x000871a4) sc_clock_pane_t4_ParamLimits

0x94ac,	// (0x000871a4) sc_clock_pane_t4

0x1bd0,	// (0x0007f8c8) main_radioblah_pane

0xd0b6,	// (0x0008adae) cell_call4_button_pane_t1_copy1_ParamLimits

0xd0b6,	// (0x0008adae) cell_call4_button_pane_t1_copy1

0x915b,	// (0x00086e53) main_ncimui_pane_t1_ParamLimits

0x915b,	// (0x00086e53) main_ncimui_pane_t1

0x916d,	// (0x00086e65) main_ncimui_pane_t2_ParamLimits

0x916d,	// (0x00086e65) main_ncimui_pane_t2

0x0002,

0xfc25,	// (0x0008d91d) main_ncimui_pane_t_ParamLimits

0xfc25,	// (0x0008d91d) main_ncimui_pane_t

0xe18a,	// (0x0008be82) main_radioblah_anim_pane_ParamLimits

0xe18a,	// (0x0008be82) main_radioblah_anim_pane

0xe19b,	// (0x0008be93) main_radioblah_info_pane_ParamLimits

0xe19b,	// (0x0008be93) main_radioblah_info_pane

0xe1af,	// (0x0008bea7) main_radioblah_pane_t1_ParamLimits

0xe1af,	// (0x0008bea7) main_radioblah_pane_t1

0xe1cb,	// (0x0008bec3) main_radioblah_pane_t2_ParamLimits

0xe1cb,	// (0x0008bec3) main_radioblah_pane_t2

0x0003,

0xfcc0,	// (0x0008d9b8) main_radioblah_pane_t_ParamLimits

0xfcc0,	// (0x0008d9b8) main_radioblah_pane_t

0x9543,	// (0x0008723b) main_radioblah_rocker_ctrl_pane_ParamLimits

0x9543,	// (0x0008723b) main_radioblah_rocker_ctrl_pane

0xe213,	// (0x0008bf0b) main_radioblah_info_pane_t1_ParamLimits

0xe213,	// (0x0008bf0b) main_radioblah_info_pane_t1

0x9597,	// (0x0008728f) main_radioblah_info_pane_t2_ParamLimits

0x9597,	// (0x0008728f) main_radioblah_info_pane_t2

0x0003,

0xfcc9,	// (0x0008d9c1) main_radioblah_info_pane_t_ParamLimits

0xfcc9,	// (0x0008d9c1) main_radioblah_info_pane_t

0xc78f,	// (0x0008a487) main_radioblah_rocker_ctrl_pane_g1

0x9645,	// (0x0008733d) main_radioblah_rocker_ctrl_pane_g2

0x964d,	// (0x00087345) main_radioblah_rocker_ctrl_pane_g3

0x9655,	// (0x0008734d) main_radioblah_rocker_ctrl_pane_g4

0x965d,	// (0x00087355) main_radioblah_rocker_ctrl_pane_g5

0x9665,	// (0x0008735d) main_radioblah_rocker_ctrl_pane_g6

0x0005,

0xfcd2,	// (0x0008d9ca) main_radioblah_rocker_ctrl_pane_g

0x9129,	// (0x00086e21) main_cset_text2_pane_t1_copy1_ParamLimits

0xee66,	// (0x0008cb5e) cam4_image_uncrop_qvga_pane

0xeece,	// (0x0008cbc6) vid4_image_uncrop_qcif_pane

0xf006,	// (0x0008ccfe) cam6_image_uncrop_qvga_pane_ParamLimits

0xf006,	// (0x0008ccfe) cam6_image_uncrop_qvga_pane

0xd95f,	// (0x0008b657) vid6_image_uncrop_qcif_pane_ParamLimits

0xd95f,	// (0x0008b657) vid6_image_uncrop_qcif_pane

0xa722,	// (0x0008841a) bg_popup_preview_window_pane_cp03

0xdcfa,	// (0x0008b9f2) list_cset_text2_pane

0xdd02,	// (0x0008b9fa) main_cset6_text2_pane_g1

0xdd0a,	// (0x0008ba02) main_cset6_text2_pane_t1

0x966d,	// (0x00087365) list_cset_text2_pane_t1_ParamLimits

0x966d,	// (0x00087365) list_cset_text2_pane_t1

0x1bd0,	// (0x0007f8c8) main_radioblah_pane_ParamLimits

0x93ee,	// (0x000870e6) main_mobtv_info_pane_t3_ParamLimits

0x93ee,	// (0x000870e6) main_mobtv_info_pane_t3

0x9531,	// (0x00087229) main_radioblah_pane_g1

0x956b,	// (0x00087263) main_radioblah_info_pane_g1

0x95ea,	// (0x000872e2) main_radioblah_info_pane_t3_ParamLimits

0x95ea,	// (0x000872e2) main_radioblah_info_pane_t3

0x4817,	// (0x0008250f) highlight_cell_cale_month_pane_ParamLimits

0x4817,	// (0x0008250f) highlight_cell_cale_month_pane

0xa722,	// (0x0008841a) main_phob_fisheye_pane

0xcb08,	// (0x0008a800) scroll_pane_cp0031_ParamLimits

0xcb08,	// (0x0008a800) scroll_pane_cp0031

0xda69,	// (0x0008b761) wait_bar_pane_cp08_ParamLimits

0x8fb5,	// (0x00086cad) cset_list_set_pane_copy1_ParamLimits

0xe24d,	// (0x0008bf45) highlight_cell_cale_month_pane_g1

0x9686,	// (0x0008737e) highlight_cell_cale_month_pane_t1

0xe255,	// (0x0008bf4d) list_gen_pane_cp01

0xd2a3,	// (0x0008af9b) scroll_pane_01

0xe25e,	// (0x0008bf56) list_single_double_fisheye_pane

0x9694,	// (0x0008738c) list_double_fisheye_pane_g1_ParamLimits

0x9694,	// (0x0008738c) list_double_fisheye_pane_g1

0x96a0,	// (0x00087398) list_double_fisheye_pane_g2_ParamLimits

0x96a0,	// (0x00087398) list_double_fisheye_pane_g2

0x96b4,	// (0x000873ac) list_double_fisheye_pane_g3_ParamLimits

0x96b4,	// (0x000873ac) list_double_fisheye_pane_g3

0x0004,

0xfcdf,	// (0x0008d9d7) list_double_fisheye_pane_g_ParamLimits

0xfcdf,	// (0x0008d9d7) list_double_fisheye_pane_g

0x96dd,	// (0x000873d5) list_double_fisheye_pane_t1_ParamLimits

0x96dd,	// (0x000873d5) list_double_fisheye_pane_t1

0x96f8,	// (0x000873f0) list_double_fisheye_pane_t2_ParamLimits

0x96f8,	// (0x000873f0) list_double_fisheye_pane_t2

0x0001,

0xfcea,	// (0x0008d9e2) list_double_fisheye_pane_t_ParamLimits

0xfcea,	// (0x0008d9e2) list_double_fisheye_pane_t

0xa722,	// (0x0008841a) main_call5_pane

0x94d5,	// (0x000871cd) sc_swipe_pane_ParamLimits

0x94d5,	// (0x000871cd) sc_swipe_pane

0x972b,	// (0x00087423) call5_image_pane_ParamLimits

0x972b,	// (0x00087423) call5_image_pane

0x9740,	// (0x00087438) call5_swipe_1_pane_ParamLimits

0x9740,	// (0x00087438) call5_swipe_1_pane

0x9751,	// (0x00087449) call5_swipe_2_pane_ParamLimits

0x9751,	// (0x00087449) call5_swipe_2_pane

0x9776,	// (0x0008746e) popup_call5_audio_first_window_ParamLimits

0x9776,	// (0x0008746e) popup_call5_audio_first_window

0xc9be,	// (0x0008a6b6) call5_swipe_1_pane_g1_ParamLimits

0xc9be,	// (0x0008a6b6) call5_swipe_1_pane_g1

0xe267,	// (0x0008bf5f) call5_swipe_1_pane_g2_ParamLimits

0xe267,	// (0x0008bf5f) call5_swipe_1_pane_g2

0x0001,

0xfcef,	// (0x0008d9e7) call5_swipe_1_pane_g_ParamLimits

0xfcef,	// (0x0008d9e7) call5_swipe_1_pane_g

0xe273,	// (0x0008bf6b) call5_swipe_1_pane_t1_ParamLimits

0xe273,	// (0x0008bf6b) call5_swipe_1_pane_t1

0xc9be,	// (0x0008a6b6) call5_swipe_2_pane_g1_ParamLimits

0xc9be,	// (0x0008a6b6) call5_swipe_2_pane_g1

0xe288,	// (0x0008bf80) call5_swipe_2_pane_g2_ParamLimits

0xe288,	// (0x0008bf80) call5_swipe_2_pane_g2

0x0001,

0xfcf4,	// (0x0008d9ec) call5_swipe_2_pane_g_ParamLimits

0xfcf4,	// (0x0008d9ec) call5_swipe_2_pane_g

0xe294,	// (0x0008bf8c) call5_swipe_2_pane_t1_ParamLimits

0xe294,	// (0x0008bf8c) call5_swipe_2_pane_t1

0xe2a9,	// (0x0008bfa1) sc_swipe_pane_g1_ParamLimits

0xe2a9,	// (0x0008bfa1) sc_swipe_pane_g1

0xe2b6,	// (0x0008bfae) sc_swipe_pane_g2_ParamLimits

0xe2b6,	// (0x0008bfae) sc_swipe_pane_g2

0x0001,

0xfcf9,	// (0x0008d9f1) sc_swipe_pane_g_ParamLimits

0xfcf9,	// (0x0008d9f1) sc_swipe_pane_g

0xe2c2,	// (0x0008bfba) sc_swipe_pane_t1_ParamLimits

0xe2c2,	// (0x0008bfba) sc_swipe_pane_t1

0xa722,	// (0x0008841a) main_cmail_launcher_pane

0x9785,	// (0x0008747d) aid_size_cell_cmail_l_ParamLimits

0x9785,	// (0x0008747d) aid_size_cell_cmail_l

0x979e,	// (0x00087496) grid_cmail_l_pane_ParamLimits

0x979e,	// (0x00087496) grid_cmail_l_pane

0x97b3,	// (0x000874ab) cell_cmail_l_pane_ParamLimits

0x97b3,	// (0x000874ab) cell_cmail_l_pane

0x97d5,	// (0x000874cd) cell_cmail_l_pane_g1_ParamLimits

0x97d5,	// (0x000874cd) cell_cmail_l_pane_g1

0x97e5,	// (0x000874dd) cell_cmail_l_pane_t1_ParamLimits

0x97e5,	// (0x000874dd) cell_cmail_l_pane_t1

0xe2d7,	// (0x0008bfcf) cell_cmail_l_pane_t2_ParamLimits

0xe2d7,	// (0x0008bfcf) cell_cmail_l_pane_t2

0x0001,

0xfcfe,	// (0x0008d9f6) cell_cmail_l_pane_t_ParamLimits

0xfcfe,	// (0x0008d9f6) cell_cmail_l_pane_t

0x1bd0,	// (0x0007f8c8) grid_highlight_pane_cp018_ParamLimits

0x1bd0,	// (0x0007f8c8) grid_highlight_pane_cp018

0x2fd3,	// (0x00080ccb) main2_pane_ParamLimits

0x2fd3,	// (0x00080ccb) main2_pane

0xafe7,	// (0x00088cdf) popup_sp_fs_action_menu_bg_pane_g1

0xafef,	// (0x00088ce7) popup_sp_fs_action_menu_bg_pane_g2

0xaff7,	// (0x00088cef) popup_sp_fs_action_menu_bg_pane_g3

0xafff,	// (0x00088cf7) popup_sp_fs_action_menu_bg_pane_g4

0xb007,	// (0x00088cff) popup_sp_fs_action_menu_bg_pane_g5

0xb00f,	// (0x00088d07) popup_sp_fs_action_menu_bg_pane_g6

0xb017,	// (0x00088d0f) popup_sp_fs_action_menu_bg_pane_g7

0xb01f,	// (0x00088d17) popup_sp_fs_action_menu_bg_pane_g8

0xb027,	// (0x00088d1f) popup_sp_fs_action_menu_bg_pane_g9

0xb02f,	// (0x00088d27) popup_sp_fs_action_menu_bg_pane_g10

0xb02f,	// (0x00088d27) popup_sp_fs_action_menu_bg_pane_g11

0x000a,

0xf1bb,	// (0x0008ceb3) popup_sp_fs_action_menu_bg_pane_g

0xb206,	// (0x00088efe) list_medium_line_x2_t3_g3_g1_ParamLimits

0xb206,	// (0x00088efe) list_medium_line_x2_t3_g3_g1

0xb212,	// (0x00088f0a) list_medium_line_x2_t3_g3_g2_ParamLimits

0xb212,	// (0x00088f0a) list_medium_line_x2_t3_g3_g2

0xb21e,	// (0x00088f16) list_medium_line_x2_t3_g3_g3_ParamLimits

0xb21e,	// (0x00088f16) list_medium_line_x2_t3_g3_g3

0x0002,

0xf26b,	// (0x0008cf63) list_medium_line_x2_t3_g3_g_ParamLimits

0xf26b,	// (0x0008cf63) list_medium_line_x2_t3_g3_g

0xb22a,	// (0x00088f22) list_medium_line_x2_t3_g3_t1_ParamLimits

0xb22a,	// (0x00088f22) list_medium_line_x2_t3_g3_t1

0x3d0c,	// (0x00081a04) list_medium_line_x2_t3_g3_t2_ParamLimits

0x3d0c,	// (0x00081a04) list_medium_line_x2_t3_g3_t2

0xb23f,	// (0x00088f37) list_medium_line_x2_t3_g3_t3_ParamLimits

0xb23f,	// (0x00088f37) list_medium_line_x2_t3_g3_t3

0x0002,

0xf272,	// (0x0008cf6a) list_medium_line_x2_t3_g3_t_ParamLimits

0xf272,	// (0x0008cf6a) list_medium_line_x2_t3_g3_t

0xb206,	// (0x00088efe) list_medium_line_x2_t3_g2_g1_ParamLimits

0xb206,	// (0x00088efe) list_medium_line_x2_t3_g2_g1

0xb21e,	// (0x00088f16) list_medium_line_x2_t3_g2_g2_ParamLimits

0xb21e,	// (0x00088f16) list_medium_line_x2_t3_g2_g2

0x0001,

0xf279,	// (0x0008cf71) list_medium_line_x2_t3_g2_g_ParamLimits

0xf279,	// (0x0008cf71) list_medium_line_x2_t3_g2_g

0xb254,	// (0x00088f4c) list_medium_line_x2_t3_g2_t1_ParamLimits

0xb254,	// (0x00088f4c) list_medium_line_x2_t3_g2_t1

0xb26a,	// (0x00088f62) list_medium_line_x2_t3_g2_t2_ParamLimits

0xb26a,	// (0x00088f62) list_medium_line_x2_t3_g2_t2

0xb23f,	// (0x00088f37) list_medium_line_x2_t3_g2_t3_ParamLimits

0xb23f,	// (0x00088f37) list_medium_line_x2_t3_g2_t3

0x0002,

0xf27e,	// (0x0008cf76) list_medium_line_x2_t3_g2_t_ParamLimits

0xf27e,	// (0x0008cf76) list_medium_line_x2_t3_g2_t

0xb206,	// (0x00088efe) list_medium_line_x2_t4_g4_g1_ParamLimits

0xb206,	// (0x00088efe) list_medium_line_x2_t4_g4_g1

0xb27c,	// (0x00088f74) list_medium_line_x2_t4_g4_g2_ParamLimits

0xb27c,	// (0x00088f74) list_medium_line_x2_t4_g4_g2

0xb212,	// (0x00088f0a) list_medium_line_x2_t4_g4_g3_ParamLimits

0xb212,	// (0x00088f0a) list_medium_line_x2_t4_g4_g3

0xb288,	// (0x00088f80) list_medium_line_x2_t4_g4_g4_ParamLimits

0xb288,	// (0x00088f80) list_medium_line_x2_t4_g4_g4

0x0003,

0xf285,	// (0x0008cf7d) list_medium_line_x2_t4_g4_g_ParamLimits

0xf285,	// (0x0008cf7d) list_medium_line_x2_t4_g4_g

0x3d1e,	// (0x00081a16) list_medium_line_x2_t4_g4_t1_ParamLimits

0x3d1e,	// (0x00081a16) list_medium_line_x2_t4_g4_t1

0x3d38,	// (0x00081a30) list_medium_line_x2_t4_g4_t2_ParamLimits

0x3d38,	// (0x00081a30) list_medium_line_x2_t4_g4_t2

0x3d4d,	// (0x00081a45) list_medium_line_x2_t4_g4_t3_ParamLimits

0x3d4d,	// (0x00081a45) list_medium_line_x2_t4_g4_t3

0xb294,	// (0x00088f8c) list_medium_line_x2_t4_g4_t4_ParamLimits

0xb294,	// (0x00088f8c) list_medium_line_x2_t4_g4_t4

0x0003,

0xf28e,	// (0x0008cf86) list_medium_line_x2_t4_g4_t_ParamLimits

0xf28e,	// (0x0008cf86) list_medium_line_x2_t4_g4_t

0xb206,	// (0x00088efe) list_medium_line_x2_t2_g4_g1_ParamLimits

0xb206,	// (0x00088efe) list_medium_line_x2_t2_g4_g1

0xb27c,	// (0x00088f74) list_medium_line_x2_t2_g4_g2_ParamLimits

0xb27c,	// (0x00088f74) list_medium_line_x2_t2_g4_g2

0xb212,	// (0x00088f0a) list_medium_line_x2_t2_g4_g3_ParamLimits

0xb212,	// (0x00088f0a) list_medium_line_x2_t2_g4_g3

0xb21e,	// (0x00088f16) list_medium_line_x2_t2_g4_g4_ParamLimits

0xb21e,	// (0x00088f16) list_medium_line_x2_t2_g4_g4

0x0003,

0xf2f5,	// (0x0008cfed) list_medium_line_x2_t2_g4_g_ParamLimits

0xf2f5,	// (0x0008cfed) list_medium_line_x2_t2_g4_g

0xb594,	// (0x0008928c) list_medium_line_x2_t2_g4_t1_ParamLimits

0xb594,	// (0x0008928c) list_medium_line_x2_t2_g4_t1

0xb23f,	// (0x00088f37) list_medium_line_x2_t2_g4_t2_ParamLimits

0xb23f,	// (0x00088f37) list_medium_line_x2_t2_g4_t2

0x0001,

0xf2fe,	// (0x0008cff6) list_medium_line_x2_t2_g4_t_ParamLimits

0xf2fe,	// (0x0008cff6) list_medium_line_x2_t2_g4_t

0xb206,	// (0x00088efe) list_medium_line_x2_t2_g3_g1_ParamLimits

0xb206,	// (0x00088efe) list_medium_line_x2_t2_g3_g1

0xb212,	// (0x00088f0a) list_medium_line_x2_t2_g3_g2_ParamLimits

0xb212,	// (0x00088f0a) list_medium_line_x2_t2_g3_g2

0xb21e,	// (0x00088f16) list_medium_line_x2_t2_g3_g3_ParamLimits

0xb21e,	// (0x00088f16) list_medium_line_x2_t2_g3_g3

0x0002,

0xf26b,	// (0x0008cf63) list_medium_line_x2_t2_g3_g_ParamLimits

0xf26b,	// (0x0008cf63) list_medium_line_x2_t2_g3_g

0xb5a9,	// (0x000892a1) list_medium_line_x2_t2_g3_t1_ParamLimits

0xb5a9,	// (0x000892a1) list_medium_line_x2_t2_g3_t1

0xb23f,	// (0x00088f37) list_medium_line_x2_t2_g3_t2_ParamLimits

0xb23f,	// (0x00088f37) list_medium_line_x2_t2_g3_t2

0x0001,

0xf303,	// (0x0008cffb) list_medium_line_x2_t2_g3_t_ParamLimits

0xf303,	// (0x0008cffb) list_medium_line_x2_t2_g3_t

0x494f,	// (0x00082647) main_sp_fs_list_pane_ParamLimits

0x494f,	// (0x00082647) main_sp_fs_list_pane

0x495c,	// (0x00082654) sp_fs_scroll_pane_ParamLimits

0x495c,	// (0x00082654) sp_fs_scroll_pane

0x4969,	// (0x00082661) list_medium_line_x2_t3_t1

0x4979,	// (0x00082671) list_medium_line_x2_t3_t2

0xb803,	// (0x000894fb) list_medium_line_x2_t3_t3

0x0002,

0xf34e,	// (0x0008d046) list_medium_line_x2_t3_t

0x4987,	// (0x0008267f) list_medium_line_x3_t4_t1

0x4997,	// (0x0008268f) list_medium_line_x3_t4_t2

0xb811,	// (0x00089509) list_medium_line_x3_t4_t3

0xb81f,	// (0x00089517) list_medium_line_x3_t4_t4

0x0003,

0xf355,	// (0x0008d04d) list_medium_line_x3_t4_t

0x49a5,	// (0x0008269d) list_medium_line_x4_t5_t1

0x49b5,	// (0x000826ad) list_medium_line_x4_t5_t2

0xb811,	// (0x00089509) list_medium_line_x4_t5_t3

0xb82d,	// (0x00089525) list_medium_line_x4_t5_t4

0xb81f,	// (0x00089517) list_medium_line_x4_t5_t5

0x0004,

0xf35e,	// (0x0008d056) list_medium_line_x4_t5_t

0xb206,	// (0x00088efe) list_medium_line_t4_g4_g1_ParamLimits

0xb206,	// (0x00088efe) list_medium_line_t4_g4_g1

0xb288,	// (0x00088f80) list_medium_line_t4_g4_g2_ParamLimits

0xb288,	// (0x00088f80) list_medium_line_t4_g4_g2

0xb83b,	// (0x00089533) list_medium_line_t4_g4_g3_ParamLimits

0xb83b,	// (0x00089533) list_medium_line_t4_g4_g3

0xb21e,	// (0x00088f16) list_medium_line_t4_g4_g4_ParamLimits

0xb21e,	// (0x00088f16) list_medium_line_t4_g4_g4

0x0003,

0xf369,	// (0x0008d061) list_medium_line_t4_g4_g_ParamLimits

0xf369,	// (0x0008d061) list_medium_line_t4_g4_g

0xb847,	// (0x0008953f) list_medium_line_t4_g4_t1_ParamLimits

0xb847,	// (0x0008953f) list_medium_line_t4_g4_t1

0xb85c,	// (0x00089554) list_medium_line_t4_g4_t2_ParamLimits

0xb85c,	// (0x00089554) list_medium_line_t4_g4_t2

0xb872,	// (0x0008956a) list_medium_line_t4_g4_t3_ParamLimits

0xb872,	// (0x0008956a) list_medium_line_t4_g4_t3

0xb888,	// (0x00089580) list_medium_line_t4_g4_t4_ParamLimits

0xb888,	// (0x00089580) list_medium_line_t4_g4_t4

0x0003,

0xf372,	// (0x0008d06a) list_medium_line_t4_g4_t_ParamLimits

0xf372,	// (0x0008d06a) list_medium_line_t4_g4_t

0x4a84,	// (0x0008277c) chi_dic_find_pane_g1

0x5999,	// (0x00083691) main_tport_pane

0xd3c9,	// (0x0008b0c1) list_medium_line_plain_t1

0xb206,	// (0x00088efe) list_medium_line_t2_g2_g1_ParamLimits

0xb206,	// (0x00088efe) list_medium_line_t2_g2_g1

0xb212,	// (0x00088f0a) list_medium_line_t2_g2_g2_ParamLimits

0xb212,	// (0x00088f0a) list_medium_line_t2_g2_g2

0x0001,

0xfa41,	// (0x0008d739) list_medium_line_t2_g2_g_ParamLimits

0xfa41,	// (0x0008d739) list_medium_line_t2_g2_g

0x855b,	// (0x00086253) list_medium_line_t2_g2_t1_ParamLimits

0x855b,	// (0x00086253) list_medium_line_t2_g2_t1

0x8572,	// (0x0008626a) list_medium_line_t2_g2_t2_ParamLimits

0x8572,	// (0x0008626a) list_medium_line_t2_g2_t2

0x0001,

0xfa46,	// (0x0008d73e) list_medium_line_t2_g2_t_ParamLimits

0xfa46,	// (0x0008d73e) list_medium_line_t2_g2_t

0xd6f0,	// (0x0008b3e8) aid_sp_fs_list_icon_a_sm

0xd6f8,	// (0x0008b3f0) aid_sp_fs_list_icon_d

0xd700,	// (0x0008b3f8) aid_sp_fs_text_primary

0xd709,	// (0x0008b401) aid_sp_fs_text_secondary

0xd712,	// (0x0008b40a) list_medium_line

0xd712,	// (0x0008b40a) list_medium_line_g2

0xd712,	// (0x0008b40a) list_medium_line_g3

0xd712,	// (0x0008b40a) list_medium_line_plain

0xd712,	// (0x0008b40a) list_medium_line_plain_t2

0xd712,	// (0x0008b40a) list_medium_line_plain_t3

0xd712,	// (0x0008b40a) list_medium_line_right_icon

0xd712,	// (0x0008b40a) list_medium_line_right_iconx2

0xd712,	// (0x0008b40a) list_medium_line_t2

0xd712,	// (0x0008b40a) list_medium_line_t2_g2

0xd712,	// (0x0008b40a) list_medium_line_t2_g3

0xd712,	// (0x0008b40a) list_medium_line_t2_right_icon

0xd712,	// (0x0008b40a) list_medium_line_t2_right_iconx2

0xd712,	// (0x0008b40a) list_medium_line_t3

0xd712,	// (0x0008b40a) list_medium_line_t3_g2

0xd712,	// (0x0008b40a) list_medium_line_t3_g3

0xd712,	// (0x0008b40a) list_medium_line_t3_right_iconx2

0xd71b,	// (0x0008b413) list_medium_line_t4_g4

0xd724,	// (0x0008b41c) list_medium_line_x2

0xd724,	// (0x0008b41c) list_medium_line_x2_t2_g2

0xd724,	// (0x0008b41c) list_medium_line_x2_t2_g3

0xd724,	// (0x0008b41c) list_medium_line_x2_t2_g4

0xd724,	// (0x0008b41c) list_medium_line_x2_t3

0xd724,	// (0x0008b41c) list_medium_line_x2_t3_g2

0xd724,	// (0x0008b41c) list_medium_line_x2_t3_g3

0xd724,	// (0x0008b41c) list_medium_line_x2_t3_g4

0xd724,	// (0x0008b41c) list_medium_line_x2_t4_g2

0xd724,	// (0x0008b41c) list_medium_line_x2_t4_g4

0xd72d,	// (0x0008b425) list_medium_line_x3

0xd72d,	// (0x0008b425) list_medium_line_x3_t4

0xd72d,	// (0x0008b425) list_medium_line_x3_t4_g4

0xd71b,	// (0x0008b413) list_medium_line_x4_t4

0xd71b,	// (0x0008b413) list_medium_line_x4_t4_g7

0xd71b,	// (0x0008b413) list_medium_line_x4_t5

0xd736,	// (0x0008b42e) list_single_fs_dyc_pane_ParamLimits

0xd736,	// (0x0008b42e) list_single_fs_dyc_pane

0xb206,	// (0x00088efe) list_medium_line_x4_t4_g7_g1_ParamLimits

0xb206,	// (0x00088efe) list_medium_line_x4_t4_g7_g1

0xdc2f,	// (0x0008b927) list_medium_line_x4_t4_g7_g2_ParamLimits

0xdc2f,	// (0x0008b927) list_medium_line_x4_t4_g7_g2

0xdc3b,	// (0x0008b933) list_medium_line_x4_t4_g7_g3_ParamLimits

0xdc3b,	// (0x0008b933) list_medium_line_x4_t4_g7_g3

0xdc4a,	// (0x0008b942) list_medium_line_x4_t4_g7_g4_ParamLimits

0xdc4a,	// (0x0008b942) list_medium_line_x4_t4_g7_g4

0xdc56,	// (0x0008b94e) list_medium_line_x4_t4_g7_g5_ParamLimits

0xdc56,	// (0x0008b94e) list_medium_line_x4_t4_g7_g5

0xdc65,	// (0x0008b95d) list_medium_line_x4_t4_g7_g6_ParamLimits

0xdc65,	// (0x0008b95d) list_medium_line_x4_t4_g7_g6

0xdc74,	// (0x0008b96c) list_medium_line_x4_t4_g7_g7_ParamLimits

0xdc74,	// (0x0008b96c) list_medium_line_x4_t4_g7_g7

0x0006,

0xfc0b,	// (0x0008d903) list_medium_line_x4_t4_g7_g_ParamLimits

0xfc0b,	// (0x0008d903) list_medium_line_x4_t4_g7_g

0xdc80,	// (0x0008b978) list_medium_line_x4_t4_g7_t1_ParamLimits

0xdc80,	// (0x0008b978) list_medium_line_x4_t4_g7_t1

0xdc95,	// (0x0008b98d) list_medium_line_x4_t4_g7_t2_ParamLimits

0xdc95,	// (0x0008b98d) list_medium_line_x4_t4_g7_t2

0xdcaa,	// (0x0008b9a2) list_medium_line_x4_t4_g7_t3_ParamLimits

0xdcaa,	// (0x0008b9a2) list_medium_line_x4_t4_g7_t3

0xdcbf,	// (0x0008b9b7) list_medium_line_x4_t4_g7_t4_ParamLimits

0xdcbf,	// (0x0008b9b7) list_medium_line_x4_t4_g7_t4

0xdcd1,	// (0x0008b9c9) list_medium_line_x4_t4_g7_t5_ParamLimits

0xdcd1,	// (0x0008b9c9) list_medium_line_x4_t4_g7_t5

0x0004,

0xfc1a,	// (0x0008d912) list_medium_line_x4_t4_g7_t_ParamLimits

0xfc1a,	// (0x0008d912) list_medium_line_x4_t4_g7_t

0xdce3,	// (0x0008b9db) list_single_dyc_row_pane_ParamLimits

0xdce3,	// (0x0008b9db) list_single_dyc_row_pane

0x971a,	// (0x00087412) call5_gesture_pane_ParamLimits

0x971a,	// (0x00087412) call5_gesture_pane

0x9762,	// (0x0008745a) call5_windows_pane_ParamLimits

0x9762,	// (0x0008745a) call5_windows_pane

0x97fb,	// (0x000874f3) call5_swipe_1_pane_cp_ParamLimits

0x97fb,	// (0x000874f3) call5_swipe_1_pane_cp

0x9807,	// (0x000874ff) call5_swipe_2_pane_cp_ParamLimits

0x9807,	// (0x000874ff) call5_swipe_2_pane_cp

0x105b,	// (0x0007ed53) call5_image_pane_cp

0x9813,	// (0x0008750b) popup_call5_audio_first_window_cp_ParamLimits

0x9813,	// (0x0008750b) popup_call5_audio_first_window_cp

0xe2a9,	// (0x0008bfa1) call5_swipe_1_pane_g1_cp_ParamLimits

0xe2a9,	// (0x0008bfa1) call5_swipe_1_pane_g1_cp

0xe2e9,	// (0x0008bfe1) call5_swipe_1_pane_g2_cp

0xe2c2,	// (0x0008bfba) call5_swipe_1_pane_t1_cp_ParamLimits

0xe2c2,	// (0x0008bfba) call5_swipe_1_pane_t1_cp

0xe2a9,	// (0x0008bfa1) call5_swipe_2_pane_g1_cp_ParamLimits

0xe2a9,	// (0x0008bfa1) call5_swipe_2_pane_g1_cp

0xe2f1,	// (0x0008bfe9) call5_swipe_2_pane_g2_cp

0xe2f9,	// (0x0008bff1) call5_swipe_2_pane_t1_cp_ParamLimits

0xe2f9,	// (0x0008bff1) call5_swipe_2_pane_t1_cp

0x1bd0,	// (0x0007f8c8) main_sp_fs_email_pane

0xe30e,	// (0x0008c006) main_sp_fs_listscroll_pane_te

0x981f,	// (0x00087517) popup_sp_fs_action_menu_pane_ParamLimits

0x981f,	// (0x00087517) popup_sp_fs_action_menu_pane

0xc78f,	// (0x0008a487) bg_sp_fs_ctrlbar_pane_g1

0xe317,	// (0x0008c00f) bg_sp_fs_ctrlbar_ddmenu_pane_g1

0xe320,	// (0x0008c018) bg_sp_fs_ctrlbar_ddmenu_pane_g2

0xe329,	// (0x0008c021) bg_sp_fs_ctrlbar_ddmenu_pane_g3

0xc78f,	// (0x0008a487) bg_sp_fs_ctrlbar_ddmenu_pane_g4

0x0003,

0xfd03,	// (0x0008d9fb) bg_sp_fs_ctrlbar_ddmenu_pane_g

0xc57c,	// (0x0008a274) bg_sp_fs_ctrlbar_ddmenu_pane_ParamLimits

0xc57c,	// (0x0008a274) bg_sp_fs_ctrlbar_ddmenu_pane

0xe332,	// (0x0008c02a) main_sp_fs_ctrlbar_ddmenu_pane_g1_ParamLimits

0xe332,	// (0x0008c02a) main_sp_fs_ctrlbar_ddmenu_pane_g1

0x1bfe,	// (0x0007f8f6) main_sp_fs_ctrlbar_ddmenu_pane_g2_ParamLimits

0x1bfe,	// (0x0007f8f6) main_sp_fs_ctrlbar_ddmenu_pane_g2

0x0001,

0xfd0c,	// (0x0008da04) main_sp_fs_ctrlbar_ddmenu_pane_g_ParamLimits

0xfd0c,	// (0x0008da04) main_sp_fs_ctrlbar_ddmenu_pane_g

0xe33e,	// (0x0008c036) main_sp_fs_ctrlbar_ddmenu_pane_t1_ParamLimits

0xe33e,	// (0x0008c036) main_sp_fs_ctrlbar_ddmenu_pane_t1

0xe358,	// (0x0008c050) list_medium_line_t2_right_icon_g1

0xe360,	// (0x0008c058) list_medium_line_t2_right_icon_t1

0x984f,	// (0x00087547) list_medium_line_t2_right_icon_t2

0x0001,

0xfd11,	// (0x0008da09) list_medium_line_t2_right_icon_t

0xc34c,	// (0x0008a044) bg_sp_fs_ctrlbar_pane_ParamLimits

0xc34c,	// (0x0008a044) bg_sp_fs_ctrlbar_pane

0x98a6,	// (0x0008759e) main_sp_fs_ctrlbar_button_pane_cp01

0x98ae,	// (0x000875a6) main_sp_fs_ctrlbar_ddmenu_pane

0xe3a8,	// (0x0008c0a0) main_sp_fs_ctrlbar_pane_g1

0xe3b4,	// (0x0008c0ac) main_sp_fs_ctrlbar_pane_g2

0x0001,

0xfd16,	// (0x0008da0e) main_sp_fs_ctrlbar_pane_g

0xe3c0,	// (0x0008c0b8) main_sp_fs_ctrlbar_pane_t1

0x98b8,	// (0x000875b0) main_sp_fs_ctrlbar_pane

0x98d9,	// (0x000875d1) main_sp_fs_listscroll_pane_te_cp01

0x98f9,	// (0x000875f1) popup_sp_fs_action_menu_pane_cp01_ParamLimits

0x98f9,	// (0x000875f1) popup_sp_fs_action_menu_pane_cp01

0x1bd0,	// (0x0007f8c8) bg_sp_fs_highlight_list_pane_cp01_ParamLimits

0x1bd0,	// (0x0007f8c8) bg_sp_fs_highlight_list_pane_cp01

0x991e,	// (0x00087616) sp_fs_action_menu_list_gene_pane_g1_ParamLimits

0x991e,	// (0x00087616) sp_fs_action_menu_list_gene_pane_g1

0xe3d5,	// (0x0008c0cd) sp_fs_action_menu_list_gene_pane_g2_ParamLimits

0xe3d5,	// (0x0008c0cd) sp_fs_action_menu_list_gene_pane_g2

0x0001,

0xfd1b,	// (0x0008da13) sp_fs_action_menu_list_gene_pane_g_ParamLimits

0xfd1b,	// (0x0008da13) sp_fs_action_menu_list_gene_pane_g

0x992d,	// (0x00087625) sp_fs_action_menu_list_gene_pane_t1_ParamLimits

0x992d,	// (0x00087625) sp_fs_action_menu_list_gene_pane_t1

0x9945,	// (0x0008763d) sp_fs_action_menu_list_gene_pane_ParamLimits

0x9945,	// (0x0008763d) sp_fs_action_menu_list_gene_pane

0xe3e2,	// (0x0008c0da) popup_sp_fs_action_menu_bg_pane_ParamLimits

0xe3e2,	// (0x0008c0da) popup_sp_fs_action_menu_bg_pane

0x9962,	// (0x0008765a) sp_fs_action_menu_list_pane_ParamLimits

0x9962,	// (0x0008765a) sp_fs_action_menu_list_pane

0xe3f0,	// (0x0008c0e8) sp_fs_scroll_pane_cp01_ParamLimits

0xe3f0,	// (0x0008c0e8) sp_fs_scroll_pane_cp01

0x997e,	// (0x00087676) list_medium_line_plain_t2_t1

0x998e,	// (0x00087686) list_medium_line_plain_t2_t2

0x0001,

0xfd20,	// (0x0008da18) list_medium_line_plain_t2_t

0x999c,	// (0x00087694) list_medium_line_plain_t3_t1

0x99ac,	// (0x000876a4) list_medium_line_plain_t3_t2

0x99ba,	// (0x000876b2) list_medium_line_plain_t3_t3

0x0002,

0xfd25,	// (0x0008da1d) list_medium_line_plain_t3_t

0xb206,	// (0x00088efe) list_medium_line_x2_t2_g2_g1_ParamLimits

0xb206,	// (0x00088efe) list_medium_line_x2_t2_g2_g1

0xb21e,	// (0x00088f16) list_medium_line_x2_t2_g2_g2_ParamLimits

0xb21e,	// (0x00088f16) list_medium_line_x2_t2_g2_g2

0x0001,

0xf279,	// (0x0008cf71) list_medium_line_x2_t2_g2_g_ParamLimits

0xf279,	// (0x0008cf71) list_medium_line_x2_t2_g2_g

0xb847,	// (0x0008953f) list_medium_line_x2_t2_g2_t1_ParamLimits

0xb847,	// (0x0008953f) list_medium_line_x2_t2_g2_t1

0xb23f,	// (0x00088f37) list_medium_line_x2_t2_g2_t2_ParamLimits

0xb23f,	// (0x00088f37) list_medium_line_x2_t2_g2_t2

0x0001,

0xfd2c,	// (0x0008da24) list_medium_line_x2_t2_g2_t_ParamLimits

0xfd2c,	// (0x0008da24) list_medium_line_x2_t2_g2_t

0xb206,	// (0x00088efe) list_medium_line_x2_t4_g2_g1_ParamLimits

0xb206,	// (0x00088efe) list_medium_line_x2_t4_g2_g1

0xe416,	// (0x0008c10e) list_medium_line_x2_t4_g2_g2_ParamLimits

0xe416,	// (0x0008c10e) list_medium_line_x2_t4_g2_g2

0x0001,

0xfd31,	// (0x0008da29) list_medium_line_x2_t4_g2_g_ParamLimits

0xfd31,	// (0x0008da29) list_medium_line_x2_t4_g2_g

0x99c8,	// (0x000876c0) list_medium_line_x2_t4_g2_t1_ParamLimits

0x99c8,	// (0x000876c0) list_medium_line_x2_t4_g2_t1

0x99e2,	// (0x000876da) list_medium_line_x2_t4_g2_t2_ParamLimits

0x99e2,	// (0x000876da) list_medium_line_x2_t4_g2_t2

0x99f7,	// (0x000876ef) list_medium_line_x2_t4_g2_t3_ParamLimits

0x99f7,	// (0x000876ef) list_medium_line_x2_t4_g2_t3

0xb23f,	// (0x00088f37) list_medium_line_x2_t4_g2_t4_ParamLimits

0xb23f,	// (0x00088f37) list_medium_line_x2_t4_g2_t4

0x0003,

0xfd36,	// (0x0008da2e) list_medium_line_x2_t4_g2_t_ParamLimits

0xfd36,	// (0x0008da2e) list_medium_line_x2_t4_g2_t

0xe428,	// (0x0008c120) list_medium_line_t3_right_iconx2_g1

0xe358,	// (0x0008c050) list_medium_line_t3_right_iconx2_g2

0x9a0c,	// (0x00087704) list_medium_line_t3_right_iconx2_g3

0x0002,

0xfd3f,	// (0x0008da37) list_medium_line_t3_right_iconx2_g

0x9a14,	// (0x0008770c) list_medium_line_t3_right_iconx2_t1

0x9a24,	// (0x0008771c) list_medium_line_t3_right_iconx2_t2

0x0001,

0xfd46,	// (0x0008da3e) list_medium_line_t3_right_iconx2_t

0xb206,	// (0x00088efe) list_medium_line_x3_t4_g4_g1_ParamLimits

0xb206,	// (0x00088efe) list_medium_line_x3_t4_g4_g1

0xb212,	// (0x00088f0a) list_medium_line_x3_t4_g4_g2_ParamLimits

0xb212,	// (0x00088f0a) list_medium_line_x3_t4_g4_g2

0xb288,	// (0x00088f80) list_medium_line_x3_t4_g4_g3_ParamLimits

0xb288,	// (0x00088f80) list_medium_line_x3_t4_g4_g3

0xe430,	// (0x0008c128) list_medium_line_x3_t4_g4_g4_ParamLimits

0xe430,	// (0x0008c128) list_medium_line_x3_t4_g4_g4

0x0003,

0xfd4b,	// (0x0008da43) list_medium_line_x3_t4_g4_g_ParamLimits

0xfd4b,	// (0x0008da43) list_medium_line_x3_t4_g4_g

0x855b,	// (0x00086253) list_medium_line_x3_t4_g4_t1_ParamLimits

0x855b,	// (0x00086253) list_medium_line_x3_t4_g4_t1

0x8572,	// (0x0008626a) list_medium_line_x3_t4_g4_t2_ParamLimits

0x8572,	// (0x0008626a) list_medium_line_x3_t4_g4_t2

0xe43c,	// (0x0008c134) list_medium_line_x3_t4_g4_t3_ParamLimits

0xe43c,	// (0x0008c134) list_medium_line_x3_t4_g4_t3

0xe451,	// (0x0008c149) list_medium_line_x3_t4_g4_t4_ParamLimits

0xe451,	// (0x0008c149) list_medium_line_x3_t4_g4_t4

0x0003,

0xfd54,	// (0x0008da4c) list_medium_line_x3_t4_g4_t_ParamLimits

0xfd54,	// (0x0008da4c) list_medium_line_x3_t4_g4_t

0x9a32,	// (0x0008772a) list_single_dyc_row_text_pane_t1_ParamLimits

0x9a32,	// (0x0008772a) list_single_dyc_row_text_pane_t1

0x9a69,	// (0x00087761) list_single_dyc_row_text_pane_t2_ParamLimits

0x9a69,	// (0x00087761) list_single_dyc_row_text_pane_t2

0xe46e,	// (0x0008c166) list_single_dyc_row_text_pane_t3_ParamLimits

0xe46e,	// (0x0008c166) list_single_dyc_row_text_pane_t3

0x0002,

0xfd5d,	// (0x0008da55) list_single_dyc_row_text_pane_t_ParamLimits

0xfd5d,	// (0x0008da55) list_single_dyc_row_text_pane_t

0xe480,	// (0x0008c178) list_single_dyc_row_pane_g1_ParamLimits

0xe480,	// (0x0008c178) list_single_dyc_row_pane_g1

0xe48c,	// (0x0008c184) list_single_dyc_row_pane_g2_ParamLimits

0xe48c,	// (0x0008c184) list_single_dyc_row_pane_g2

0xe498,	// (0x0008c190) list_single_dyc_row_pane_g3_ParamLimits

0xe498,	// (0x0008c190) list_single_dyc_row_pane_g3

0xe4a4,	// (0x0008c19c) list_single_dyc_row_pane_g4_ParamLimits

0xe4a4,	// (0x0008c19c) list_single_dyc_row_pane_g4

0x0003,

0xfd64,	// (0x0008da5c) list_single_dyc_row_pane_g_ParamLimits

0xfd64,	// (0x0008da5c) list_single_dyc_row_pane_g

0xe4b0,	// (0x0008c1a8) list_single_dyc_row_text_pane_ParamLimits

0xe4b0,	// (0x0008c1a8) list_single_dyc_row_text_pane

0xa722,	// (0x0008841a) bg_sp_fs_scroll_pane

0xe4cf,	// (0x0008c1c7) thumb_sp_fs_scroll_pane

0xb206,	// (0x00088efe) list_medium_line_g1_ParamLimits

0xb206,	// (0x00088efe) list_medium_line_g1

0xb847,	// (0x0008953f) list_medium_line_t1_ParamLimits

0xb847,	// (0x0008953f) list_medium_line_t1

0xb206,	// (0x00088efe) list_medium_line_x2_g1_ParamLimits

0xb206,	// (0x00088efe) list_medium_line_x2_g1

0xb212,	// (0x00088f0a) list_medium_line_x2_g2_ParamLimits

0xb212,	// (0x00088f0a) list_medium_line_x2_g2

0x0001,

0xfa41,	// (0x0008d739) list_medium_line_x2_g_ParamLimits

0xfa41,	// (0x0008d739) list_medium_line_x2_g

0xe4d8,	// (0x0008c1d0) list_medium_line_x2_t1_ParamLimits

0xe4d8,	// (0x0008c1d0) list_medium_line_x2_t1

0xb206,	// (0x00088efe) list_medium_line_x3_g1_ParamLimits

0xb206,	// (0x00088efe) list_medium_line_x3_g1

0xb212,	// (0x00088f0a) list_medium_line_x3_g2_ParamLimits

0xb212,	// (0x00088f0a) list_medium_line_x3_g2

0x0001,

0xfa41,	// (0x0008d739) list_medium_line_x3_g_ParamLimits

0xfa41,	// (0x0008d739) list_medium_line_x3_g

0xe4d8,	// (0x0008c1d0) list_medium_line_x3_t1_ParamLimits

0xe4d8,	// (0x0008c1d0) list_medium_line_x3_t1

0xe4ee,	// (0x0008c1e6) thumb_sp_fs_scroll_pane_g1

0xe4f7,	// (0x0008c1ef) thumb_sp_fs_scroll_pane_g2

0xe500,	// (0x0008c1f8) thumb_sp_fs_scroll_pane_g3

0x0002,

0xfd6d,	// (0x0008da65) thumb_sp_fs_scroll_pane_g

0xe4ee,	// (0x0008c1e6) bg_sp_fs_scroll_pane_g1

0xe4f7,	// (0x0008c1ef) bg_sp_fs_scroll_pane_g2

0xe500,	// (0x0008c1f8) bg_sp_fs_scroll_pane_g3

0x0002,

0xfd6d,	// (0x0008da65) bg_sp_fs_scroll_pane_g

0xb206,	// (0x00088efe) list_medium_line_x2_t3_g4_g1_ParamLimits

0xb206,	// (0x00088efe) list_medium_line_x2_t3_g4_g1

0xb27c,	// (0x00088f74) list_medium_line_x2_t3_g4_g2_ParamLimits

0xb27c,	// (0x00088f74) list_medium_line_x2_t3_g4_g2

0xb212,	// (0x00088f0a) list_medium_line_x2_t3_g4_g3_ParamLimits

0xb212,	// (0x00088f0a) list_medium_line_x2_t3_g4_g3

0xb21e,	// (0x00088f16) list_medium_line_x2_t3_g4_g4_ParamLimits

0xb21e,	// (0x00088f16) list_medium_line_x2_t3_g4_g4

0x0003,

0xf2f5,	// (0x0008cfed) list_medium_line_x2_t3_g4_g_ParamLimits

0xf2f5,	// (0x0008cfed) list_medium_line_x2_t3_g4_g

0x9ac3,	// (0x000877bb) list_medium_line_x2_t3_g4_t1_ParamLimits

0x9ac3,	// (0x000877bb) list_medium_line_x2_t3_g4_t1

0x9ad9,	// (0x000877d1) list_medium_line_x2_t3_g4_t2_ParamLimits

0x9ad9,	// (0x000877d1) list_medium_line_x2_t3_g4_t2

0xb23f,	// (0x00088f37) list_medium_line_x2_t3_g4_t3_ParamLimits

0xb23f,	// (0x00088f37) list_medium_line_x2_t3_g4_t3

0x0002,

0xfd74,	// (0x0008da6c) list_medium_line_x2_t3_g4_t_ParamLimits

0xfd74,	// (0x0008da6c) list_medium_line_x2_t3_g4_t

0xb206,	// (0x00088efe) list_medium_line_g2_g1_ParamLimits

0xb206,	// (0x00088efe) list_medium_line_g2_g1

0xb212,	// (0x00088f0a) list_medium_line_g2_g2_ParamLimits

0xb212,	// (0x00088f0a) list_medium_line_g2_g2

0x0001,

0xfa41,	// (0x0008d739) list_medium_line_g2_g_ParamLimits

0xfa41,	// (0x0008d739) list_medium_line_g2_g

0xb5a9,	// (0x000892a1) list_medium_line_g2_t1_ParamLimits

0xb5a9,	// (0x000892a1) list_medium_line_g2_t1

0xb206,	// (0x00088efe) list_medium_line_t3_g2_g1_ParamLimits

0xb206,	// (0x00088efe) list_medium_line_t3_g2_g1

0xb212,	// (0x00088f0a) list_medium_line_t3_g2_g2_ParamLimits

0xb212,	// (0x00088f0a) list_medium_line_t3_g2_g2

0x0001,

0xfa41,	// (0x0008d739) list_medium_line_t3_g2_g_ParamLimits

0xfa41,	// (0x0008d739) list_medium_line_t3_g2_g

0x9af2,	// (0x000877ea) list_medium_line_t3_g2_t1_ParamLimits

0x9af2,	// (0x000877ea) list_medium_line_t3_g2_t1

0x9b09,	// (0x00087801) list_medium_line_t3_g2_t2_ParamLimits

0x9b09,	// (0x00087801) list_medium_line_t3_g2_t2

0x9b1e,	// (0x00087816) list_medium_line_t3_g2_t3_ParamLimits

0x9b1e,	// (0x00087816) list_medium_line_t3_g2_t3

0x0002,

0xfd7b,	// (0x0008da73) list_medium_line_t3_g2_t_ParamLimits

0xfd7b,	// (0x0008da73) list_medium_line_t3_g2_t

0xe358,	// (0x0008c050) list_medium_line_right_icon_g1

0xe509,	// (0x0008c201) list_medium_line_right_icon_t1

0xb206,	// (0x00088efe) list_medium_line_t2_g1_ParamLimits

0xb206,	// (0x00088efe) list_medium_line_t2_g1

0xe517,	// (0x0008c20f) list_medium_line_t2_t1_ParamLimits

0xe517,	// (0x0008c20f) list_medium_line_t2_t1

0x9b33,	// (0x0008782b) list_medium_line_t2_t2_ParamLimits

0x9b33,	// (0x0008782b) list_medium_line_t2_t2

0x0001,

0xfd82,	// (0x0008da7a) list_medium_line_t2_t_ParamLimits

0xfd82,	// (0x0008da7a) list_medium_line_t2_t

0xb206,	// (0x00088efe) list_medium_line_t3_g1_ParamLimits

0xb206,	// (0x00088efe) list_medium_line_t3_g1

0x9b48,	// (0x00087840) list_medium_line_t3_t1_ParamLimits

0x9b48,	// (0x00087840) list_medium_line_t3_t1

0x9b5f,	// (0x00087857) list_medium_line_t3_t2_ParamLimits

0x9b5f,	// (0x00087857) list_medium_line_t3_t2

0x9b74,	// (0x0008786c) list_medium_line_t3_t3_ParamLimits

0x9b74,	// (0x0008786c) list_medium_line_t3_t3

0x0002,

0xfd87,	// (0x0008da7f) list_medium_line_t3_t_ParamLimits

0xfd87,	// (0x0008da7f) list_medium_line_t3_t

0xb206,	// (0x00088efe) list_medium_line_g3_g1_ParamLimits

0xb206,	// (0x00088efe) list_medium_line_g3_g1

0xb27c,	// (0x00088f74) list_medium_line_g3_g2_ParamLimits

0xb27c,	// (0x00088f74) list_medium_line_g3_g2

0xb212,	// (0x00088f0a) list_medium_line_g3_g3_ParamLimits

0xb212,	// (0x00088f0a) list_medium_line_g3_g3

0x0002,

0xfd8e,	// (0x0008da86) list_medium_line_g3_g_ParamLimits

0xfd8e,	// (0x0008da86) list_medium_line_g3_g

0xb594,	// (0x0008928c) list_medium_line_g3_t1_ParamLimits

0xb594,	// (0x0008928c) list_medium_line_g3_t1

0xb206,	// (0x00088efe) list_medium_line_t2_g3_g1_ParamLimits

0xb206,	// (0x00088efe) list_medium_line_t2_g3_g1

0xb27c,	// (0x00088f74) list_medium_line_t2_g3_g2_ParamLimits

0xb27c,	// (0x00088f74) list_medium_line_t2_g3_g2

0xb212,	// (0x00088f0a) list_medium_line_t2_g3_g3_ParamLimits

0xb212,	// (0x00088f0a) list_medium_line_t2_g3_g3

0x0002,

0xfd8e,	// (0x0008da86) list_medium_line_t2_g3_g_ParamLimits

0xfd8e,	// (0x0008da86) list_medium_line_t2_g3_g

0x9b86,	// (0x0008787e) list_medium_line_t2_g3_t1_ParamLimits

0x9b86,	// (0x0008787e) list_medium_line_t2_g3_t1

0x9b9d,	// (0x00087895) list_medium_line_t2_g3_t2_ParamLimits

0x9b9d,	// (0x00087895) list_medium_line_t2_g3_t2

0x0001,

0xfd95,	// (0x0008da8d) list_medium_line_t2_g3_t_ParamLimits

0xfd95,	// (0x0008da8d) list_medium_line_t2_g3_t

0xb206,	// (0x00088efe) list_medium_line_t3_g3_g1_ParamLimits

0xb206,	// (0x00088efe) list_medium_line_t3_g3_g1

0xb27c,	// (0x00088f74) list_medium_line_t3_g3_g2_ParamLimits

0xb27c,	// (0x00088f74) list_medium_line_t3_g3_g2

0xb212,	// (0x00088f0a) list_medium_line_t3_g3_g3_ParamLimits

0xb212,	// (0x00088f0a) list_medium_line_t3_g3_g3

0x0002,

0xfd8e,	// (0x0008da86) list_medium_line_t3_g3_g_ParamLimits

0xfd8e,	// (0x0008da86) list_medium_line_t3_g3_g

0x9bb2,	// (0x000878aa) list_medium_line_t3_g3_t1_ParamLimits

0x9bb2,	// (0x000878aa) list_medium_line_t3_g3_t1

0x9bc6,	// (0x000878be) list_medium_line_t3_g3_t2_ParamLimits

0x9bc6,	// (0x000878be) list_medium_line_t3_g3_t2

0x9bd8,	// (0x000878d0) list_medium_line_t3_g3_t3_ParamLimits

0x9bd8,	// (0x000878d0) list_medium_line_t3_g3_t3

0x0002,

0xfd9a,	// (0x0008da92) list_medium_line_t3_g3_t_ParamLimits

0xfd9a,	// (0x0008da92) list_medium_line_t3_g3_t

0xe428,	// (0x0008c120) list_medium_line_right_iconx2_g1

0xe358,	// (0x0008c050) list_medium_line_right_iconx2_g2

0x0001,

0xfda1,	// (0x0008da99) list_medium_line_right_iconx2_g

0xe531,	// (0x0008c229) list_medium_line_right_iconx2_t1

0xe428,	// (0x0008c120) list_medium_line_t2_right_iconx2_g1

0xe358,	// (0x0008c050) list_medium_line_t2_right_iconx2_g2

0x0001,

0xfda1,	// (0x0008da99) list_medium_line_t2_right_iconx2_g

0x9bea,	// (0x000878e2) list_medium_line_t2_right_iconx2_t1

0x9bfa,	// (0x000878f2) list_medium_line_t2_right_iconx2_t2

0x0001,

0xfda6,	// (0x0008da9e) list_medium_line_t2_right_iconx2_t

0xd3c9,	// (0x0008b0c1) list_medium_line_x4_t4_t1

0x9c08,	// (0x00087900) list_medium_line_x4_t4_t2

0x9c18,	// (0x00087910) list_medium_line_x4_t4_t3

0x9c28,	// (0x00087920) list_medium_line_x4_t4_t4

0x0003,

0xfdab,	// (0x0008daa3) list_medium_line_x4_t4_t

0x9c73,	// (0x0008796b) tport_appsw_pane_ParamLimits

0x9c73,	// (0x0008796b) tport_appsw_pane

0x9c84,	// (0x0008797c) tport_contact_pane_ParamLimits

0x9c84,	// (0x0008797c) tport_contact_pane

0x9c99,	// (0x00087991) tport_listscroll_pane_ParamLimits

0x9c99,	// (0x00087991) tport_listscroll_pane

0x9cb2,	// (0x000879aa) cell_tport_appsw_pane_ParamLimits

0x9cb2,	// (0x000879aa) cell_tport_appsw_pane

0xd145,	// (0x0008ae3d) tport_appsw_pane_g1_ParamLimits

0xd145,	// (0x0008ae3d) tport_appsw_pane_g1

0xe53f,	// (0x0008c237) tport_contact_pane_g1

0xe548,	// (0x0008c240) tport_contact_pane_t1

0xe556,	// (0x0008c24e) tport_contact_pane_t2

0x0001,

0xfdb4,	// (0x0008daac) tport_contact_pane_t

0xe564,	// (0x0008c25c) list_tport_pane

0xb041,	// (0x00088d39) scroll_pane_cp_030

0xe575,	// (0x0008c26d) cell_tport_appsw_pane_g1

0xe585,	// (0x0008c27d) cell_tport_appsw_pane_t1

0xa722,	// (0x0008841a) grid_highlight_pane_cp019

0x9ce8,	// (0x000879e0) list_tport_double_graphic_pane_ParamLimits

0x9ce8,	// (0x000879e0) list_tport_double_graphic_pane

0x1bd0,	// (0x0007f8c8) list_highlight_pane_cp023_ParamLimits

0x1bd0,	// (0x0007f8c8) list_highlight_pane_cp023

0x9cf5,	// (0x000879ed) list_tport_double_graphic_pane_g1_ParamLimits

0x9cf5,	// (0x000879ed) list_tport_double_graphic_pane_g1

0x9d02,	// (0x000879fa) list_tport_double_graphic_pane_t1_ParamLimits

0x9d02,	// (0x000879fa) list_tport_double_graphic_pane_t1

0x9d17,	// (0x00087a0f) list_tport_double_graphic_pane_t2_ParamLimits

0x9d17,	// (0x00087a0f) list_tport_double_graphic_pane_t2

0x0001,

0xfdc0,	// (0x0008dab8) list_tport_double_graphic_pane_t_ParamLimits

0xfdc0,	// (0x0008dab8) list_tport_double_graphic_pane_t

0xa722,	// (0x0008841a) main_cale_note_pane

0x7d81,	// (0x00085a79) cell_vitu2_function_top_wide_pane_cp01_ParamLimits

0x7d81,	// (0x00085a79) cell_vitu2_function_top_wide_pane_cp01

0x9400,	// (0x000870f8) wait_bar_pane_cp05_ParamLimits

0xa722,	// (0x0008841a) listscroll_cmail_pane

0xe593,	// (0x0008c28b) list_cmail_pane

0x9d29,	// (0x00087a21) list_cmail_body_pane

0x9d29,	// (0x00087a21) list_single_cmail_header_caption_pane

0x9d3f,	// (0x00087a37) list_single_cmail_header_detail_pane_ParamLimits

0x9d3f,	// (0x00087a37) list_single_cmail_header_detail_pane

0xe5af,	// (0x0008c2a7) list_single_cmail_header_caption_pane_t1

0x9d67,	// (0x00087a5f) list_single_cmail_header_detail_pane_g1_ParamLimits

0x9d67,	// (0x00087a5f) list_single_cmail_header_detail_pane_g1

0xf012,	// (0x0008cd0a) list_single_cmail_header_detail_pane_g2_ParamLimits

0xf012,	// (0x0008cd0a) list_single_cmail_header_detail_pane_g2

0x0002,

0xfdc5,	// (0x0008dabd) list_single_cmail_header_detail_pane_g_ParamLimits

0xfdc5,	// (0x0008dabd) list_single_cmail_header_detail_pane_g

0xe5d2,	// (0x0008c2ca) list_single_cmail_header_detail_pane_t1_ParamLimits

0xe5d2,	// (0x0008c2ca) list_single_cmail_header_detail_pane_t1

0xe604,	// (0x0008c2fc) list_single_cmail_header_editor_pane_bg_ParamLimits

0xe604,	// (0x0008c2fc) list_single_cmail_header_editor_pane_bg

0xe616,	// (0x0008c30e) list_cmail_body_pane_g1

0xe61f,	// (0x0008c317) list_cmail_body_pane_t1

0xd19d,	// (0x0008ae95) list_single_cmail_header_editor_pane_bg_g1

0xb4b2,	// (0x000891aa) list_single_cmail_header_editor_pane_bg_g1_copy1

0xd1ad,	// (0x0008aea5) list_single_cmail_header_editor_pane_bg_g1_copy2

0xd1a5,	// (0x0008ae9d) list_single_cmail_header_editor_pane_bg_g1_copy3

0xd3d7,	// (0x0008b0cf) list_single_cmail_header_editor_pane_bg_g1_copy4

0xd1cd,	// (0x0008aec5) list_single_cmail_header_editor_pane_bg_g1_copy4_copy1

0xd1bd,	// (0x0008aeb5) list_single_cmail_header_editor_pane_bg_g1_copy4_copy2

0xd1c5,	// (0x0008aebd) list_single_cmail_header_editor_pane_bg_g1_copy4_copy3

0xb492,	// (0x0008918a) list_single_cmail_header_editor_pane_bg_g1_copy4_copy3_copy1

0x9da1,	// (0x00087a99) calenote_gesture_pane_ParamLimits

0x9da1,	// (0x00087a99) calenote_gesture_pane

0x9dbd,	// (0x00087ab5) calenote_window_pane_ParamLimits

0x9dbd,	// (0x00087ab5) calenote_window_pane

0xf01e,	// (0x0008cd16) popup_note_window_cp01

0x9dd9,	// (0x00087ad1) calenote_swipe_1_pane_ParamLimits

0x9dd9,	// (0x00087ad1) calenote_swipe_1_pane

0x9807,	// (0x000874ff) calenote_swipe_2_pane_ParamLimits

0x9807,	// (0x000874ff) calenote_swipe_2_pane

0xe2a9,	// (0x0008bfa1) calenote_swipe_1_pane_g1_ParamLimits

0xe2a9,	// (0x0008bfa1) calenote_swipe_1_pane_g1

0xe2b6,	// (0x0008bfae) calenote_swipe_1_pane_g2_ParamLimits

0xe2b6,	// (0x0008bfae) calenote_swipe_1_pane_g2

0x0001,

0xfcf9,	// (0x0008d9f1) calenote_swipe_1_pane_g_ParamLimits

0xfcf9,	// (0x0008d9f1) calenote_swipe_1_pane_g

0xf030,	// (0x0008cd28) calenote_swipe_1_pane_t1_ParamLimits

0xf030,	// (0x0008cd28) calenote_swipe_1_pane_t1

0xe2a9,	// (0x0008bfa1) calenote_swipe_2_pane_g1_ParamLimits

0xe2a9,	// (0x0008bfa1) calenote_swipe_2_pane_g1

0xf04f,	// (0x0008cd47) calenote_swipe_2_pane_g2_ParamLimits

0xf04f,	// (0x0008cd47) calenote_swipe_2_pane_g2

0x0001,

0xfdd1,	// (0x0008dac9) calenote_swipe_2_pane_g_ParamLimits

0xfdd1,	// (0x0008dac9) calenote_swipe_2_pane_g

0xf05b,	// (0x0008cd53) calenote_swipe_2_pane_t1_ParamLimits

0xf05b,	// (0x0008cd53) calenote_swipe_2_pane_t1

0xa722,	// (0x0008841a) main_mup_navstr_pane

0x6b65,	// (0x0008485d) main_mup3_pane_t7_ParamLimits

0x6b65,	// (0x0008485d) main_mup3_pane_t7

0xec9a,	// (0x0008c992) main_mp4_pane_g6_ParamLimits

0xec9a,	// (0x0008c992) main_mp4_pane_g6

0xee34,	// (0x0008cb2c) main_image3_pane_t4_ParamLimits

0xee34,	// (0x0008cb2c) main_image3_pane_t4

0x9dee,	// (0x00087ae6) popup_navstr_preview_pane_ParamLimits

0x9dee,	// (0x00087ae6) popup_navstr_preview_pane

0x9dfe,	// (0x00087af6) scroll_navstr_pane_ParamLimits

0x9dfe,	// (0x00087af6) scroll_navstr_pane

0xa722,	// (0x0008841a) bg_popup_preview_window_pane_cp04

0xf082,	// (0x0008cd7a) popup_navstr_preview_pane_t1

0x9e12,	// (0x00087b0a) scroll_navstr_pane_g1_ParamLimits

0x9e12,	// (0x00087b0a) scroll_navstr_pane_g1

0x9e26,	// (0x00087b1e) scroll_navstr_pane_t1_ParamLimits

0x9e26,	// (0x00087b1e) scroll_navstr_pane_t1

0xf027,	// (0x0008cd1f) bg_button_pane_cp014

0xf027,	// (0x0008cd1f) bg_button_pane_cp030

0x96c0,	// (0x000873b8) list_double_fisheye_pane_g4_ParamLimits

0x96c0,	// (0x000873b8) list_double_fisheye_pane_g4

0x96cc,	// (0x000873c4) list_double_fisheye_pane_g5_ParamLimits

0x96cc,	// (0x000873c4) list_double_fisheye_pane_g5

0xe5a3,	// (0x0008c29b) sp_fs_scroll_pane_cp03

0xe3a8,	// (0x0008c0a0) main_sp_fs_ctrlbar_pane_g1_ParamLimits

0xe3b4,	// (0x0008c0ac) main_sp_fs_ctrlbar_pane_g2_ParamLimits

0xfd16,	// (0x0008da0e) main_sp_fs_ctrlbar_pane_g_ParamLimits

0xe3c0,	// (0x0008c0b8) main_sp_fs_ctrlbar_pane_t1_ParamLimits

0xe59b,	// (0x0008c293) sp_fs_scroll_pane_cp02

0xb09b,	// (0x00088d93) popup_sp_fs_calendar_preview_list_single_pane_ParamLimits

0xb09b,	// (0x00088d93) popup_sp_fs_calendar_preview_list_single_pane

0xa722,	// (0x0008841a) main_cam6_pano_pane

0x1bd0,	// (0x0007f8c8) main_mup3_pane_ParamLimits

0xa722,	// (0x0008841a) main_phacti_pane

0x92f3,	// (0x00086feb) bg_button_pane_cp11

0x930b,	// (0x00087003) main_mobtv_info_pane_g2_ParamLimits

0x930b,	// (0x00087003) main_mobtv_info_pane_g2

0x0001,

0xfc76,	// (0x0008d96e) main_mobtv_info_pane_g_ParamLimits

0xfc76,	// (0x0008d96e) main_mobtv_info_pane_g

0x94be,	// (0x000871b6) sc_clock_pane_t5_ParamLimits

0x94be,	// (0x000871b6) sc_clock_pane_t5

0x9531,	// (0x00087229) main_radioblah_pane_g1_ParamLimits

0xe1e3,	// (0x0008bedb) main_radioblah_pane_t3_ParamLimits

0xe1e3,	// (0x0008bedb) main_radioblah_pane_t3

0xe1fb,	// (0x0008bef3) main_radioblah_pane_t4_ParamLimits

0xe1fb,	// (0x0008bef3) main_radioblah_pane_t4

0x9559,	// (0x00087251) main_radioblah_text_pane_ParamLimits

0x9559,	// (0x00087251) main_radioblah_text_pane

0x956b,	// (0x00087263) main_radioblah_info_pane_g1_ParamLimits

0x95fe,	// (0x000872f6) main_radioblah_info_pane_t4_ParamLimits

0x95fe,	// (0x000872f6) main_radioblah_info_pane_t4

0x1bd0,	// (0x0007f8c8) main_sp_fs_calendar_pane

0x9e3c,	// (0x00087b34) main_phacti_pane_g1

0x9e44,	// (0x00087b3c) phacti_note_pane_ParamLimits

0x9e44,	// (0x00087b3c) phacti_note_pane

0xf099,	// (0x0008cd91) phacti_term_pane_ParamLimits

0xf099,	// (0x0008cd91) phacti_term_pane

0xf0ae,	// (0x0008cda6) phacti_note_pane_t1_ParamLimits

0xf0ae,	// (0x0008cda6) phacti_note_pane_t1

0xe62d,	// (0x0008c325) phacti_term_pane_g1

0xe635,	// (0x0008c32d) phacti_term_pane_t1_ParamLimits

0xe635,	// (0x0008c32d) phacti_term_pane_t1

0xf0c5,	// (0x0008cdbd) popup_sp_fs_calendar_preview_list_single_pane_g1

0xf0cd,	// (0x0008cdc5) popup_sp_fs_calendar_preview_list_single_pane_g2

0x0001,

0xfddb,	// (0x0008dad3) popup_sp_fs_calendar_preview_list_single_pane_g

0xf0d5,	// (0x0008cdcd) popup_sp_fs_calendar_preview_list_single_pane_t1_ParamLimits

0xf0d5,	// (0x0008cdcd) popup_sp_fs_calendar_preview_list_single_pane_t1

0xf0eb,	// (0x0008cde3) aid_popup_sp_fs_bg_corner_pane

0xc78f,	// (0x0008a487) popup_sp_fs_calendar_preview_bg_pane_g1

0xa722,	// (0x0008841a) popup_sp_fs_calendar_preview_bg_pane

0xf0f3,	// (0x0008cdeb) popup_sp_fs_calendar_preview_list_pane

0x1bd0,	// (0x0007f8c8) bg_main_sp_fs_cale_pane_ParamLimits

0x1bd0,	// (0x0007f8c8) bg_main_sp_fs_cale_pane

0xe65f,	// (0x0008c357) listscroll_cale_mrui_pane_ParamLimits

0xe65f,	// (0x0008c357) listscroll_cale_mrui_pane

0xd20d,	// (0x0008af05) listscroll_sp_fs_schedule_track_pane

0xe673,	// (0x0008c36b) main_sp_fs_ctrlbar_pane_cp01_ParamLimits

0xe673,	// (0x0008c36b) main_sp_fs_ctrlbar_pane_cp01

0x0004,	// (0x0007dcfc) main_sp_fs_ribbon_pane

0xe684,	// (0x0008c37c) popup_sp_fs_cale_preview_window

0x9e93,	// (0x00087b8b) list_single_sp_fs_schedule_track_pane_ParamLimits

0x9e93,	// (0x00087b8b) list_single_sp_fs_schedule_track_pane

0x1bd0,	// (0x0007f8c8) bg_sp_fs_highlight_list_pane_cp03_ParamLimits

0x1bd0,	// (0x0007f8c8) bg_sp_fs_highlight_list_pane_cp03

0x9ea6,	// (0x00087b9e) list_single_sp_fs_schedule_track_pane_g1_ParamLimits

0x9ea6,	// (0x00087b9e) list_single_sp_fs_schedule_track_pane_g1

0x9eb2,	// (0x00087baa) list_single_sp_fs_schedule_track_pane_g2_ParamLimits

0x9eb2,	// (0x00087baa) list_single_sp_fs_schedule_track_pane_g2

0x0001,

0xfde0,	// (0x0008dad8) list_single_sp_fs_schedule_track_pane_g_ParamLimits

0xfde0,	// (0x0008dad8) list_single_sp_fs_schedule_track_pane_g

0x9ebe,	// (0x00087bb6) list_single_sp_fs_schedule_track_pane_t1_ParamLimits

0x9ebe,	// (0x00087bb6) list_single_sp_fs_schedule_track_pane_t1

0x9ed8,	// (0x00087bd0) sp_fs_schedule_track_pane_ParamLimits

0x9ed8,	// (0x00087bd0) sp_fs_schedule_track_pane

0x0061,	// (0x0007dd59) sp_fs_schedule_track_pane_g1

0x0069,	// (0x0007dd61) sp_fs_schedule_track_pane_g2

0x0071,	// (0x0007dd69) sp_fs_schedule_track_pane_g3

0x0079,	// (0x0007dd71) sp_fs_schedule_track_pane_g4

0x0081,	// (0x0007dd79) sp_fs_schedule_track_pane_g5

0x0004,

0xfde5,	// (0x0008dadd) sp_fs_schedule_track_pane_g

0xd19d,	// (0x0008ae95) bg_sp_fs_schedule_viewer_highlight_g1

0xb4b2,	// (0x000891aa) bg_sp_fs_schedule_viewer_highlight_g2

0xd1a5,	// (0x0008ae9d) bg_sp_fs_schedule_viewer_highlight_g3

0xd1ad,	// (0x0008aea5) bg_sp_fs_schedule_viewer_highlight_g4

0xd3d7,	// (0x0008b0cf) bg_sp_fs_schedule_viewer_highlight_g5

0xd1bd,	// (0x0008aeb5) bg_sp_fs_schedule_viewer_highlight_g6

0xd1c5,	// (0x0008aebd) bg_sp_fs_schedule_viewer_highlight_g7

0xd1cd,	// (0x0008aec5) bg_sp_fs_schedule_viewer_highlight_g8

0xb492,	// (0x0008918a) bg_sp_fs_schedule_viewer_highlight_g9

0x0008,

0xfdf0,	// (0x0008dae8) bg_sp_fs_schedule_viewer_highlight_g

0xa722,	// (0x0008841a) bg_main_sp_fs_ribbon_pane

0x9ee9,	// (0x00087be1) main_sp_fs_ribbon_pane_g1

0x0089,	// (0x0007dd81) main_sp_fs_ribbon_pane_t1

0x9ef2,	// (0x00087bea) main_sp_fs_ribbon_pane_t2

0x00a7,	// (0x0007dd9f) main_sp_fs_ribbon_pane_t3

0x0002,

0xfe03,	// (0x0008dafb) main_sp_fs_ribbon_pane_t

0x00b6,	// (0x0007ddae) main_sp_fs_ribbon_scheduler_pane

0x00be,	// (0x0007ddb6) bg_main_sp_fs_ribbon_pane_g1

0x00c7,	// (0x0007ddbf) bg_main_sp_fs_ribbon_pane_g2

0x00d0,	// (0x0007ddc8) bg_main_sp_fs_ribbon_pane_g3

0x0002,

0xfe0a,	// (0x0008db02) bg_main_sp_fs_ribbon_pane_g

0x00d8,	// (0x0007ddd0) main_sp_fs_ribbon_scheduler_pane_g1

0x00e1,	// (0x0007ddd9) main_sp_fs_ribbon_scheduler_pane_g2

0x00ea,	// (0x0007dde2) main_sp_fs_ribbon_scheduler_pane_g3

0x0002,

0xfe11,	// (0x0008db09) main_sp_fs_ribbon_scheduler_pane_g

0xe255,	// (0x0008bf4d) list_cale_mrui_pane

0x00f3,	// (0x0007ddeb) sp_fs_scroll_pane_cp07_ParamLimits

0x00f3,	// (0x0007ddeb) sp_fs_scroll_pane_cp07

0x9f01,	// (0x00087bf9) bg_sp_fs_schedule_viewer_highlight_ParamLimits

0x9f01,	// (0x00087bf9) bg_sp_fs_schedule_viewer_highlight

0x0115,	// (0x0007de0d) list_single_sp_fs_schedule_track_pane_cp01

0x011d,	// (0x0007de15) list_sp_fs_schedule_track_pane

0x0125,	// (0x0007de1d) sp_fs_scroll_pane_cp06_ParamLimits

0x0125,	// (0x0007de1d) sp_fs_scroll_pane_cp06

0xc78f,	// (0x0008a487) bgmain_sp_fs_calendar_pane_g1

0x9f11,	// (0x00087c09) list_single_cale_mrui_pane_ParamLimits

0x9f11,	// (0x00087c09) list_single_cale_mrui_pane

0xe696,	// (0x0008c38e) list_single_cale_mrui_row_pane_ParamLimits

0xe696,	// (0x0008c38e) list_single_cale_mrui_row_pane

0xe6a3,	// (0x0008c39b) list_single_cale_mrui_row_pane_g1_ParamLimits

0xe6a3,	// (0x0008c39b) list_single_cale_mrui_row_pane_g1

0xe6db,	// (0x0008c3d3) list_single_cale_mrui_row_pane_t1_ParamLimits

0xe6db,	// (0x0008c3d3) list_single_cale_mrui_row_pane_t1

0x9f34,	// (0x00087c2c) list_single_cale_mrui_row_pane_t2_ParamLimits

0x9f34,	// (0x00087c2c) list_single_cale_mrui_row_pane_t2

0xe6ed,	// (0x0008c3e5) list_single_cale_mrui_row_pane_t3_ParamLimits

0xe6ed,	// (0x0008c3e5) list_single_cale_mrui_row_pane_t3

0xe71c,	// (0x0008c414) list_single_cale_mrui_row_pane_t4_ParamLimits

0xe71c,	// (0x0008c414) list_single_cale_mrui_row_pane_t4

0x0003,

0xfe1d,	// (0x0008db15) list_single_cale_mrui_row_pane_t_ParamLimits

0xfe1d,	// (0x0008db15) list_single_cale_mrui_row_pane_t

0x9f9a,	// (0x00087c92) list_single_cmail_header_editor_pane_bg_cp01_ParamLimits

0x9f9a,	// (0x00087c92) list_single_cmail_header_editor_pane_bg_cp01

0x9fbe,	// (0x00087cb6) list_single_cmail_header_editor_pane_bg_cp02_ParamLimits

0x9fbe,	// (0x00087cb6) list_single_cmail_header_editor_pane_bg_cp02

0x9fdc,	// (0x00087cd4) main_radioblah_text_pane_t1_ParamLimits

0x9fdc,	// (0x00087cd4) main_radioblah_text_pane_t1

0x021d,	// (0x0007df15) cam6_indi_pane_cp01

0x0225,	// (0x0007df1d) cam6_mode_pane_cp01

0x022d,	// (0x0007df25) cam6_pano_pane

0x0236,	// (0x0007df2e) cam6_zoom_pane_cp01

0x023e,	// (0x0007df36) cam6_pano_image_pane

0x0247,	// (0x0007df3f) cam6_pano_pane_g1

0xdf61,	// (0x0008bc59) cam6_pano_pane_g2

0x0250,	// (0x0007df48) cam6_pano_pane_g3

0x0259,	// (0x0007df51) cam6_pano_pane_g4

0xccf5,	// (0x0008a9ed) cam6_pano_pane_g5

0x0262,	// (0x0007df5a) cam6_pano_pane_g6

0x026a,	// (0x0007df62) cam6_pano_pane_g7

0x0272,	// (0x0007df6a) cam6_pano_pane_g8

0x027b,	// (0x0007df73) cam6_pano_pane_g9

0x0008,

0xfe26,	// (0x0008db1e) cam6_pano_pane_g

0xa722,	// (0x0008841a) main_browser_tag_pane

0xf07a,	// (0x0008cd72) grid_navstr_albumart_pane

0x0284,	// (0x0007df7c) cell_navstr_albumart_pane_ParamLimits

0x0284,	// (0x0007df7c) cell_navstr_albumart_pane

0x11bc,	// (0x0007eeb4) cell_navstr_albumart_pane_g1

0xc129,	// (0x00089e21) cell_navstr_albumart_pane_g2

0xc139,	// (0x00089e31) cell_navstr_albumart_pane_g3

0xc131,	// (0x00089e29) cell_navstr_albumart_pane_g4

0x0003,

0xfe39,	// (0x0008db31) cell_navstr_albumart_pane_g

0x9ff5,	// (0x00087ced) bt_list_pane_ParamLimits

0x9ff5,	// (0x00087ced) bt_list_pane

0xa008,	// (0x00087d00) bt_list_pane_t1

0xa017,	// (0x00087d0f) bt_list_pane_t2

0x0001,

0xfe42,	// (0x0008db3a) bt_list_pane_t

0xa722,	// (0x0008841a) main_cale_prevew_pane

0xa026,	// (0x00087d1e) popup_cale_preview_window_ParamLimits

0xa026,	// (0x00087d1e) popup_cale_preview_window

0x1bd0,	// (0x0007f8c8) bg_popup_preview_window_pane_cp05_ParamLimits

0x1bd0,	// (0x0007f8c8) bg_popup_preview_window_pane_cp05

0x02e3,	// (0x0007dfdb) list_cale_preview_pane_ParamLimits

0x02e3,	// (0x0007dfdb) list_cale_preview_pane

0xa03b,	// (0x00087d33) list_double_cale_preview_pane_ParamLimits

0xa03b,	// (0x00087d33) list_double_cale_preview_pane

0xa04c,	// (0x00087d44) list_single_cale_preview_pane_ParamLimits

0xa04c,	// (0x00087d44) list_single_cale_preview_pane

0x0331,	// (0x0007e029) list_single_cale_preview_pane_g1

0x0339,	// (0x0007e031) list_single_cale_preview_pane_t1_ParamLimits

0x0339,	// (0x0007e031) list_single_cale_preview_pane_t1

0xa060,	// (0x00087d58) list_double_cale_preview_pane_g1

0xa068,	// (0x00087d60) list_double_cale_preview_pane_t1_ParamLimits

0xa068,	// (0x00087d60) list_double_cale_preview_pane_t1

0xa07d,	// (0x00087d75) list_double_cale_preview_pane_t2_ParamLimits

0xa07d,	// (0x00087d75) list_double_cale_preview_pane_t2

0x0001,

0xfe47,	// (0x0008db3f) list_double_cale_preview_pane_t_ParamLimits

0xfe47,	// (0x0008db3f) list_double_cale_preview_pane_t

0xa722,	// (0x0008841a) main_ezdial_pane

0x1bd0,	// (0x0007f8c8) main_sp_fs_email_pane_ParamLimits

0x985d,	// (0x00087555) cmail_ddmenu_btn01_pane_ParamLimits

0x985d,	// (0x00087555) cmail_ddmenu_btn01_pane

0x9870,	// (0x00087568) cmail_ddmenu_btn02_pane_ParamLimits

0x9870,	// (0x00087568) cmail_ddmenu_btn02_pane

0x9893,	// (0x0008758b) cmail_ddmenu_btn03_pane_ParamLimits

0x9893,	// (0x0008758b) cmail_ddmenu_btn03_pane

0x98b8,	// (0x000875b0) main_sp_fs_ctrlbar_pane_ParamLimits

0x98d9,	// (0x000875d1) main_sp_fs_listscroll_pane_te_cp01_ParamLimits

0x9d29,	// (0x00087a21) list_cmail_body_pane_ParamLimits

0xe5bd,	// (0x0008c2b5) bg_button_pane_cp12

0xe5c5,	// (0x0008c2bd) list_single_cmail_header_detail_pane_g3_ParamLimits

0xe5c5,	// (0x0008c2bd) list_single_cmail_header_detail_pane_g3

0x9d7d,	// (0x00087a75) list_single_cmail_header_detail_pane_t2_ParamLimits

0x9d7d,	// (0x00087a75) list_single_cmail_header_detail_pane_t2

0x0001,

0xfdcc,	// (0x0008dac4) list_single_cmail_header_detail_pane_t_ParamLimits

0xfdcc,	// (0x0008dac4) list_single_cmail_header_detail_pane_t

0xe64a,	// (0x0008c342) phacti_term_pane_t2_ParamLimits

0xe64a,	// (0x0008c342) phacti_term_pane_t2

0x0001,

0xfdd6,	// (0x0008dace) phacti_term_pane_t_ParamLimits

0xfdd6,	// (0x0008dace) phacti_term_pane_t

0x0366,	// (0x0007e05e) aid_size_list_single_double

0xa095,	// (0x00087d8d) popup_ezdial_listscroll_window

0xa0ab,	// (0x00087da3) popup_number_entry_window_cp01

0x105b,	// (0x0007ed53) bg_popup_call_pane_cp09

0x0397,	// (0x0007e08f) ezdial_list_pane

0x039f,	// (0x0007e097) scroll_pane_cp23

0xc34c,	// (0x0008a044) bg_button_pane_cp028_ParamLimits

0xc34c,	// (0x0008a044) bg_button_pane_cp028

0xa0b7,	// (0x00087daf) cmail_ddmenu_btn01_pane_g1_ParamLimits

0xa0b7,	// (0x00087daf) cmail_ddmenu_btn01_pane_g1

0xa0c6,	// (0x00087dbe) cmail_ddmenu_btn01_pane_g2_ParamLimits

0xa0c6,	// (0x00087dbe) cmail_ddmenu_btn01_pane_g2

0x0001,

0xfe4c,	// (0x0008db44) cmail_ddmenu_btn01_pane_g_ParamLimits

0xfe4c,	// (0x0008db44) cmail_ddmenu_btn01_pane_g

0x03c5,	// (0x0007e0bd) cmail_ddmenu_btn01_pane_t1_ParamLimits

0x03c5,	// (0x0007e0bd) cmail_ddmenu_btn01_pane_t1

0xc34c,	// (0x0008a044) bg_button_pane_cp029_ParamLimits

0xc34c,	// (0x0008a044) bg_button_pane_cp029

0xa0d6,	// (0x00087dce) cmail_ddmenu_btn02_pane_g1_ParamLimits

0xa0d6,	// (0x00087dce) cmail_ddmenu_btn02_pane_g1

0xa0f1,	// (0x00087de9) cmail_ddmenu_btn02_pane_t1_ParamLimits

0xa0f1,	// (0x00087de9) cmail_ddmenu_btn02_pane_t1

0x1bd0,	// (0x0007f8c8) bg_button_pane_cp031_ParamLimits

0x1bd0,	// (0x0007f8c8) bg_button_pane_cp031

0xa0d6,	// (0x00087dce) cmail_ddmenu_btn03_pane_g1_ParamLimits

0xa0d6,	// (0x00087dce) cmail_ddmenu_btn03_pane_g1

0xa0f1,	// (0x00087de9) cmail_ddmenu_btn03_pane_t1_ParamLimits

0xa0f1,	// (0x00087de9) cmail_ddmenu_btn03_pane_t1

0x765d,	// (0x00085355) cell_dialer2_keypad_pane_t1_ParamLimits

0x7677,	// (0x0008536f) cell_dialer2_keypad_pane_t1_copy1_ParamLimits

0x7677,	// (0x0008536f) cell_dialer2_keypad_pane_t1_copy1

0x9191,	// (0x00086e89) ncimui_group_button_pane

0x1bd0,	// (0x0007f8c8) main_sp_fs_calendar_pane_ParamLimits

0x9d29,	// (0x00087a21) list_single_cmail_header_caption_pane_ParamLimits

0xd709,	// (0x0008b401) aid_recal_txt_sm_pane

0xa722,	// (0x0008841a) mian_recal_day_pane

0xe684,	// (0x0008c37c) popup_sp_fs_cale_preview_window_ParamLimits

0xa722,	// (0x0008841a) list_recal_day_pane

0xe754,	// (0x0008c44c) list_single_recal_day_pane_ParamLimits

0xe754,	// (0x0008c44c) list_single_recal_day_pane

0x041a,	// (0x0007e112) list_single_recal_day_pane_g1_ParamLimits

0x041a,	// (0x0007e112) list_single_recal_day_pane_g1

0xe766,	// (0x0008c45e) list_single_recal_day_pane_g2_ParamLimits

0xe766,	// (0x0008c45e) list_single_recal_day_pane_g2

0xe772,	// (0x0008c46a) list_single_recal_day_pane_g3_ParamLimits

0xe772,	// (0x0008c46a) list_single_recal_day_pane_g3

0xa118,	// (0x00087e10) list_single_recal_day_pane_g4_ParamLimits

0xa118,	// (0x00087e10) list_single_recal_day_pane_g4

0xe77e,	// (0x0008c476) list_single_recal_day_pane_g5_ParamLimits

0xe77e,	// (0x0008c476) list_single_recal_day_pane_g5

0xe78a,	// (0x0008c482) list_single_recal_day_pane_g6_ParamLimits

0xe78a,	// (0x0008c482) list_single_recal_day_pane_g6

0x0005,

0xfe5b,	// (0x0008db53) list_single_recal_day_pane_g_ParamLimits

0xfe5b,	// (0x0008db53) list_single_recal_day_pane_g

0xe796,	// (0x0008c48e) list_single_recal_day_pane_t1

0xe7a4,	// (0x0008c49c) list_single_recal_day_pane_t2

0x0001,

0xfe68,	// (0x0008db60) list_single_recal_day_pane_t

0xa126,	// (0x00087e1e) ncimui_query_button_pane_ParamLimits

0xa126,	// (0x00087e1e) ncimui_query_button_pane

0xa136,	// (0x00087e2e) ncimui_query_button_pane_t1_ParamLimits

0xa136,	// (0x00087e2e) ncimui_query_button_pane_t1

0x0455,	// (0x0007e14d) ncimui_query_button_pane_t2_ParamLimits

0x0455,	// (0x0007e14d) ncimui_query_button_pane_t2

0x0001,

0xfe6d,	// (0x0008db65) ncimui_query_button_pane_t_ParamLimits

0xfe6d,	// (0x0008db65) ncimui_query_button_pane_t

0xa149,	// (0x00087e41) query_button_pane_ParamLimits

0xa149,	// (0x00087e41) query_button_pane

0xa722,	// (0x0008841a) bg_button_pane_cp0028

0x0475,	// (0x0007e16d) query_button_pane_t1

0x5999,	// (0x00083691) main_tport_pane_ParamLimits

0x9c38,	// (0x00087930) bg_popup_window_pane_cp01_ParamLimits

0x9c38,	// (0x00087930) bg_popup_window_pane_cp01

0x9c50,	// (0x00087948) heading_pane_cp08_ParamLimits

0x9c50,	// (0x00087948) heading_pane_cp08

0x9c62,	// (0x0008795a) heading_pane_cp07_ParamLimits

0x9c62,	// (0x0008795a) heading_pane_cp07

0xe575,	// (0x0008c26d) cell_tport_appsw_pane_g2

0x0002,

0xfdb9,	// (0x0008dab1) cell_tport_appsw_pane_g

0xbaa1,	// (0x00089799) input_candi_list_open_g1

0xb6b2,	// (0x000893aa) list_cale_time_pane_g6_ParamLimits

0xb6b2,	// (0x000893aa) list_cale_time_pane_g6

0x663f,	// (0x00084337) aid_size_touch_calib_1_ParamLimits

0x663f,	// (0x00084337) aid_size_touch_calib_1

0x664b,	// (0x00084343) aid_size_touch_calib_2_ParamLimits

0x664b,	// (0x00084343) aid_size_touch_calib_2

0x665f,	// (0x00084357) aid_size_touch_calib_3_ParamLimits

0x665f,	// (0x00084357) aid_size_touch_calib_3

0x6677,	// (0x0008436f) aid_size_touch_calib_4_ParamLimits

0x6677,	// (0x0008436f) aid_size_touch_calib_4

0x6689,	// (0x00084381) main_touch_calib_button_group_pane_ParamLimits

0x6689,	// (0x00084381) main_touch_calib_button_group_pane

0x669f,	// (0x00084397) main_touch_calib_pane_g1_ParamLimits

0x66ab,	// (0x000843a3) main_touch_calib_pane_g2_ParamLimits

0x66b7,	// (0x000843af) main_touch_calib_pane_g3_ParamLimits

0x66c3,	// (0x000843bb) main_touch_calib_pane_g4_ParamLimits

0xf797,	// (0x0008d48f) main_touch_calib_pane_g_ParamLimits

0x66cf,	// (0x000843c7) main_touch_calib_pane_t1_ParamLimits

0x66e7,	// (0x000843df) main_touch_calib_pane_t2_ParamLimits

0x66ff,	// (0x000843f7) main_touch_calib_pane_t3_ParamLimits

0x6711,	// (0x00084409) main_touch_calib_pane_t4_ParamLimits

0x6723,	// (0x0008441b) main_touch_calib_pane_t5_ParamLimits

0xf7a0,	// (0x0008d498) main_touch_calib_pane_t_ParamLimits

0xcb20,	// (0x0008a818) list_single_fp_cale_pane_g3_ParamLimits

0xcb20,	// (0x0008a818) list_single_fp_cale_pane_g3

0xeee4,	// (0x0008cbdc) bg_button_pane_cp012_ParamLimits

0xeee4,	// (0x0008cbdc) bg_vkb2_func_pane_cp03_ParamLimits

0x8511,	// (0x00086209) cell_vitu2_function_top_pane_g1_ParamLimits

0xeee4,	// (0x0008cbdc) bg_vkb2_func_pane_cp04_ParamLimits

0x9147,	// (0x00086e3f) main_ncimui_button_group_pane_ParamLimits

0x9147,	// (0x00086e3f) main_ncimui_button_group_pane

0x917f,	// (0x00086e77) main_ncimui_pane_t3_ParamLimits

0x917f,	// (0x00086e77) main_ncimui_pane_t3

0xf090,	// (0x0008cd88) phacti_button_group_pane

0x0366,	// (0x0007e05e) aid_size_list_single_double_ParamLimits

0xa095,	// (0x00087d8d) popup_ezdial_listscroll_window_ParamLimits

0xa0ab,	// (0x00087da3) popup_number_entry_window_cp01_ParamLimits

0xa15b,	// (0x00087e53) phacti_button_pane_ParamLimits

0xa15b,	// (0x00087e53) phacti_button_pane

0xa722,	// (0x0008841a) bg_button_pane_cp14

0x0492,	// (0x0007e18a) phacti_button_pane_t1

0xa16a,	// (0x00087e62) main_touch_calib_button_pane_ParamLimits

0xa16a,	// (0x00087e62) main_touch_calib_button_pane

0xaee4,	// (0x00088bdc) bg_button_pane_cp18_ParamLimits

0xaee4,	// (0x00088bdc) bg_button_pane_cp18

0x04b0,	// (0x0007e1a8) main_touch_calib_button_pane_t1_ParamLimits

0x04b0,	// (0x0007e1a8) main_touch_calib_button_pane_t1

0x04c6,	// (0x0007e1be) main_touch_calib_button_pane_t2_ParamLimits

0x04c6,	// (0x0007e1be) main_touch_calib_button_pane_t2

0x0001,

0xfe72,	// (0x0008db6a) main_touch_calib_button_pane_t_ParamLimits

0xfe72,	// (0x0008db6a) main_touch_calib_button_pane_t

0xa722,	// (0x0008841a) cell_ncimui_button_pane

0xa722,	// (0x0008841a) bg_button_pane_cp032

0x04e4,	// (0x0007e1dc) cell_ncimui_button_pane_t1

0xee14,	// (0x0008cb0c) image3_infobar_pane_ParamLimits

0xee14,	// (0x0008cb0c) image3_infobar_pane

0x94e6,	// (0x000871de) fs_bigclock_status_pane_ParamLimits

0x94e6,	// (0x000871de) fs_bigclock_status_pane

0x94f3,	// (0x000871eb) main_fs_bigclock_clock_pane_ParamLimits

0x94f3,	// (0x000871eb) main_fs_bigclock_clock_pane

0x9502,	// (0x000871fa) main_fs_bigclock_indi_pane_ParamLimits

0x9502,	// (0x000871fa) main_fs_bigclock_indi_pane

0x9516,	// (0x0008720e) main_fs_bigclock_swipe_pane_ParamLimits

0x9516,	// (0x0008720e) main_fs_bigclock_swipe_pane

0xa722,	// (0x0008841a) main_fs_clock_dumped_data

0xe06e,	// (0x0008bd66) list_single_fs_bigclock_indicator_pane_g1_ParamLimits

0xe06e,	// (0x0008bd66) list_single_fs_bigclock_indicator_pane_g1

0xe088,	// (0x0008bd80) list_single_fs_bigclock_indicator_pane_g2_ParamLimits

0xe088,	// (0x0008bd80) list_single_fs_bigclock_indicator_pane_g2

0xe0a2,	// (0x0008bd9a) list_single_fs_bigclock_indicator_pane_g3_ParamLimits

0xe0a2,	// (0x0008bd9a) list_single_fs_bigclock_indicator_pane_g3

0xe0bc,	// (0x0008bdb4) list_single_fs_bigclock_indicator_pane_g4_ParamLimits

0xe0bc,	// (0x0008bdb4) list_single_fs_bigclock_indicator_pane_g4

0x0004,

0xfcaa,	// (0x0008d9a2) list_single_fs_bigclock_indicator_pane_g_ParamLimits

0xfcaa,	// (0x0008d9a2) list_single_fs_bigclock_indicator_pane_g

0xe0e0,	// (0x0008bdd8) list_single_fs_bigclock_indicator_pane_t1_ParamLimits

0xe0e0,	// (0x0008bdd8) list_single_fs_bigclock_indicator_pane_t1

0xe108,	// (0x0008be00) list_single_fs_bigclock_indicator_pane_t2_ParamLimits

0xe108,	// (0x0008be00) list_single_fs_bigclock_indicator_pane_t2

0xe130,	// (0x0008be28) list_single_fs_bigclock_indicator_pane_t3_ParamLimits

0xe130,	// (0x0008be28) list_single_fs_bigclock_indicator_pane_t3

0xe158,	// (0x0008be50) list_single_fs_bigclock_indicator_pane_t4_ParamLimits

0xe158,	// (0x0008be50) list_single_fs_bigclock_indicator_pane_t4

0x0004,

0xfcb5,	// (0x0008d9ad) list_single_fs_bigclock_indicator_pane_t_ParamLimits

0xfcb5,	// (0x0008d9ad) list_single_fs_bigclock_indicator_pane_t

0x04f2,	// (0x0007e1ea) image3_infobar_fav_pane_ParamLimits

0x04f2,	// (0x0007e1ea) image3_infobar_fav_pane

0x0502,	// (0x0007e1fa) image3_infobar_loc_pane_ParamLimits

0x0502,	// (0x0007e1fa) image3_infobar_loc_pane

0x0516,	// (0x0007e20e) image3_infobar_time_pane_ParamLimits

0x0516,	// (0x0007e20e) image3_infobar_time_pane

0xc78f,	// (0x0008a487) image3_infobar_time_pane_g1

0x0526,	// (0x0007e21e) image3_infobar_time_pane_t1

0xc78f,	// (0x0008a487) image3_infobar_loc_pane_g1

0x0534,	// (0x0007e22c) image3_infobar_loc_pane_g2

0x0001,

0xfe77,	// (0x0008db6f) image3_infobar_loc_pane_g

0x053c,	// (0x0007e234) image3_infobar_loc_pane_t1

0xc78f,	// (0x0008a487) image3_infobar_fav_pane_g1

0x054a,	// (0x0007e242) image3_infobar_fav_pane_g2

0x0001,

0xfe7c,	// (0x0008db74) image3_infobar_fav_pane_g

0x0552,	// (0x0007e24a) fs_bigclock_status_battery_pane

0x055b,	// (0x0007e253) fs_bigclock_status_signal_pane

0x0564,	// (0x0007e25c) fs_bigclock_status_title_pane

0x056d,	// (0x0007e265) fs_bigclock_status_signal_pane_g1

0x0576,	// (0x0007e26e) fs_bigclock_status_signal_pane_g2

0x0001,

0xfe81,	// (0x0008db79) fs_bigclock_status_signal_pane_g

0x057e,	// (0x0007e276) fs_bigclock_status_battery_pane_g1

0x0587,	// (0x0007e27f) fs_bigclock_status_battery_pane_g2

0x0001,

0xfe86,	// (0x0008db7e) fs_bigclock_status_battery_pane_g

0x058f,	// (0x0007e287) fs_bigclock_status_title_pane_t1

0xc78f,	// (0x0008a487) main_fs_bigclock_clock_pane_g1

0x059d,	// (0x0007e295) main_fs_bigclock_clock_pane_g2

0x059d,	// (0x0007e295) main_fs_bigclock_clock_pane_g3

0x059d,	// (0x0007e295) main_fs_bigclock_clock_pane_g4

0x0003,

0xfe8b,	// (0x0008db83) main_fs_bigclock_clock_pane_g

0x05a5,	// (0x0007e29d) main_fs_bigclock_clock_pane_t1

0x05b3,	// (0x0007e2ab) main_fs_bigclock_clock_pane_t2

0x0001,

0xfe94,	// (0x0008db8c) main_fs_bigclock_clock_pane_t

0x05c2,	// (0x0007e2ba) list_single_fs_bigclock_indicator_pane_ParamLimits

0x05c2,	// (0x0007e2ba) list_single_fs_bigclock_indicator_pane

0xa17d,	// (0x00087e75) list_single_fs_bigclock_pane_ParamLimits

0xa17d,	// (0x00087e75) list_single_fs_bigclock_pane

0x063a,	// (0x0007e332) main_fs_bigclock_indicator_pane_t1

0x0649,	// (0x0007e341) list_single_fs_bigclock_pane_g1

0x0651,	// (0x0007e349) list_single_fs_bigclock_pane_t1

0xc78f,	// (0x0008a487) main_fs_bigclock_swipe_pane_g1

0x068f,	// (0x0007e387) main_fs_bigclock_swipe_pane_g2

0x0001,

0xfea5,	// (0x0008db9d) main_fs_bigclock_swipe_pane_g

0x0697,	// (0x0007e38f) main_fs_bigclock_swipe_pane_t1_ParamLimits

0x0697,	// (0x0007e38f) main_fs_bigclock_swipe_pane_t1

0x49c3,	// (0x000826bb) call_type_pane_ParamLimits

0xa722,	// (0x0008841a) main_btmg_pane

0xe6cf,	// (0x0008c3c7) list_single_cale_mrui_row_pane_g2_ParamLimits

0xe6cf,	// (0x0008c3c7) list_single_cale_mrui_row_pane_g2

0x0001,

0xfe18,	// (0x0008db10) list_single_cale_mrui_row_pane_g_ParamLimits

0xfe18,	// (0x0008db10) list_single_cale_mrui_row_pane_g

0x040a,	// (0x0007e102) list_recal_vselct_arw_lo_pane

0x0412,	// (0x0007e10a) list_recal_vselct_arw_up_pane

0xe74b,	// (0x0008c443) list_recal_vselct_pane

0x06b4,	// (0x0007e3ac) btmg_button_pane

0xa1dd,	// (0x00087ed5) main_btmg_pane_g1

0xa722,	// (0x0008841a) bg_button_pane_cp044

0x06c4,	// (0x0007e3bc) btmg_button_pane_t1

0xc344,	// (0x0008a03c) aid_listscroll_gen

0x1bd0,	// (0x0007f8c8) main_cntbar_detail_pane

0xe593,	// (0x0008c28b) list_cmail_folder_pane

0xe5a3,	// (0x0008c29b) sp_fs_scroll_pane_cp03_ParamLimits

0xa1e5,	// (0x00087edd) list_single_fs_dyc_pane_cp01_ParamLimits

0xa1e5,	// (0x00087edd) list_single_fs_dyc_pane_cp01

0x06e9,	// (0x0007e3e1) aid_size_cmail_indent

0xd712,	// (0x0008b40a) list_single_dyc_row_pane_cp01

0xa222,	// (0x00087f1a) cntbar_detail_list_pane_ParamLimits

0xa222,	// (0x00087f1a) cntbar_detail_list_pane

0xa268,	// (0x00087f60) main_cntbar_detail_cont_pane_ParamLimits

0xa268,	// (0x00087f60) main_cntbar_detail_cont_pane

0xa27c,	// (0x00087f74) scroll_pane_cp032_ParamLimits

0xa27c,	// (0x00087f74) scroll_pane_cp032

0xa288,	// (0x00087f80) cntbar_detail_list_event_pane_ParamLimits

0xa288,	// (0x00087f80) cntbar_detail_list_event_pane

0xa232,	// (0x00087f2a) cntbar_detail_list_shct_pane

0x076a,	// (0x0007e462) aid_list_gen

0xb041,	// (0x00088d39) aid_scroll

0xd6e7,	// (0x0008b3df) aid_size_touch_scroll_bar

0xe7b2,	// (0x0008c4aa) aid_list_double

0xa299,	// (0x00087f91) aid_list_single

0xe7bb,	// (0x0008c4b3) aid_list_single_lg

0xa2a2,	// (0x00087f9a) aid_list_z_g_a_sm

0xa2aa,	// (0x00087fa2) aid_list_z_g_d

0xa2b2,	// (0x00087faa) aid_txt_z_prm

0xa2c0,	// (0x00087fb8) aid_txt_z_prm_cp01

0xa2ce,	// (0x00087fc6) aid_txt_z_sec

0xa2dc,	// (0x00087fd4) main_cntbar_detail_cont_pane_g1_ParamLimits

0xa2dc,	// (0x00087fd4) main_cntbar_detail_cont_pane_g1

0xa2f0,	// (0x00087fe8) main_cntbar_detail_cont_pane_g2_ParamLimits

0xa2f0,	// (0x00087fe8) main_cntbar_detail_cont_pane_g2

0x0001,

0xfeaa,	// (0x0008dba2) main_cntbar_detail_cont_pane_g_ParamLimits

0xfeaa,	// (0x0008dba2) main_cntbar_detail_cont_pane_g

0x07d8,	// (0x0007e4d0) main_cntbar_detail_cont_pane_t1

0x07e6,	// (0x0007e4de) main_cntbar_detail_cont_pane_t2

0x07f4,	// (0x0007e4ec) main_cntbar_detail_cont_pane_t3

0x0002,

0xfeaf,	// (0x0008dba7) main_cntbar_detail_cont_pane_t

0xa300,	// (0x00087ff8) cell_cntbar_detail_list_shct_pane_ParamLimits

0xa300,	// (0x00087ff8) cell_cntbar_detail_list_shct_pane

0x0814,	// (0x0007e50c) cntbar_detail_list_shct_pane_g1

0x081d,	// (0x0007e515) cntbar_detail_list_shct_pane_g2

0x0001,

0xfeb6,	// (0x0008dbae) cntbar_detail_list_shct_pane_g

0xa312,	// (0x0008800a) cntbar_detail_list_event_pane_g1_ParamLimits

0xa312,	// (0x0008800a) cntbar_detail_list_event_pane_g1

0xa31e,	// (0x00088016) cntbar_detail_list_event_pane_g2_ParamLimits

0xa31e,	// (0x00088016) cntbar_detail_list_event_pane_g2

0x0005,

0xfebb,	// (0x0008dbb3) cntbar_detail_list_event_pane_g_ParamLimits

0xfebb,	// (0x0008dbb3) cntbar_detail_list_event_pane_g

0xa38a,	// (0x00088082) cntbar_detail_list_event_pane_t1_ParamLimits

0xa38a,	// (0x00088082) cntbar_detail_list_event_pane_t1

0xa39f,	// (0x00088097) cntbar_detail_list_event_pane_t2_ParamLimits

0xa39f,	// (0x00088097) cntbar_detail_list_event_pane_t2

0x0002,

0xfec8,	// (0x0008dbc0) cntbar_detail_list_event_pane_t_ParamLimits

0xfec8,	// (0x0008dbc0) cntbar_detail_list_event_pane_t

0xc78f,	// (0x0008a487) cell_cntbar_detail_list_shct_pane_g1

0x101a,	// (0x0007ed12) navi_pane_mv_g3

0x1bd0,	// (0x0007f8c8) main_cntbar_detail_pane_ParamLimits

0xa722,	// (0x0008841a) main_notif_wgt_pane

0xec28,	// (0x0008c920) aid_tch_main_mp4_pane_g4

0xee0c,	// (0x0008cb04) popup_slider_window_cp02

0xe74b,	// (0x0008c443) list_recal_day_event_pane

0xa1fa,	// (0x00087ef2) cntbar_detail_btn_pane_ParamLimits

0xa1fa,	// (0x00087ef2) cntbar_detail_btn_pane

0xa20d,	// (0x00087f05) cntbar_detail_btn_pane_cp01_ParamLimits

0xa20d,	// (0x00087f05) cntbar_detail_btn_pane_cp01

0xa232,	// (0x00087f2a) cntbar_detail_list_shct_pane_ParamLimits

0xa242,	// (0x00087f3a) cntbar_detail_pane_g1_ParamLimits

0xa242,	// (0x00087f3a) cntbar_detail_pane_g1

0xa252,	// (0x00087f4a) cntbar_detail_pane_t1_ParamLimits

0xa252,	// (0x00087f4a) cntbar_detail_pane_t1

0xa32a,	// (0x00088022) cntbar_detail_list_event_pane_g3_ParamLimits

0xa32a,	// (0x00088022) cntbar_detail_list_event_pane_g3

0xa342,	// (0x0008803a) cntbar_detail_list_event_pane_g4_ParamLimits

0xa342,	// (0x0008803a) cntbar_detail_list_event_pane_g4

0xa35a,	// (0x00088052) cntbar_detail_list_event_pane_g5_ParamLimits

0xa35a,	// (0x00088052) cntbar_detail_list_event_pane_g5

0xa372,	// (0x0008806a) cntbar_detail_list_event_pane_g6_ParamLimits

0xa372,	// (0x0008806a) cntbar_detail_list_event_pane_g6

0xa3b4,	// (0x000880ac) cntbar_detail_list_event_pane_t3_ParamLimits

0xa3b4,	// (0x000880ac) cntbar_detail_list_event_pane_t3

0xa3c6,	// (0x000880be) popup_notif_wgt_window_ParamLimits

0xa3c6,	// (0x000880be) popup_notif_wgt_window

0xa3db,	// (0x000880d3) popup_submenu_window_cp01_ParamLimits

0xa3db,	// (0x000880d3) popup_submenu_window_cp01

0x105b,	// (0x0007ed53) bg_popup_window_pane_cp10

0x08f4,	// (0x0007e5ec) listscroll_notif_wgt_pane

0x08fc,	// (0x0007e5f4) list_notif_wgt_window

0x0905,	// (0x0007e5fd) scroll_pane_cp033

0x090e,	// (0x0007e606) list_notif_wgt_row_pane_ParamLimits

0x090e,	// (0x0007e606) list_notif_wgt_row_pane

0x0920,	// (0x0007e618) aid_size_list_notif_wgt_del

0x0929,	// (0x0007e621) list_notif_wgt_row_pane_g1

0x0931,	// (0x0007e629) list_notif_wgt_row_pane_g2

0x0939,	// (0x0007e631) list_notif_wgt_row_pane_g3

0x0002,

0xfecf,	// (0x0008dbc7) list_notif_wgt_row_pane_g

0x0942,	// (0x0007e63a) list_notif_wgt_row_pane_t1

0x0950,	// (0x0007e648) list_notif_wgt_row_pane_t2

0x095e,	// (0x0007e656) list_notif_wgt_row_pane_t3

0x0002,

0xfed6,	// (0x0008dbce) list_notif_wgt_row_pane_t

0xd3f1,	// (0x0008b0e9) list_recal_day_event_pane_g1

0x096c,	// (0x0007e664) list_recal_day_event_pane_t1

0xa722,	// (0x0008841a) bg_button_pane_cp045

0xa3eb,	// (0x000880e3) cntbar_detail_btn_pane_t1

0xc34c,	// (0x0008a044) main_callh_pane_ParamLimits

0xc34c,	// (0x0008a044) main_callh_pane

0xa722,	// (0x0008841a) main_coverflow0_pane

0xa722,	// (0x0008841a) main_wgtman_pane

0x9522,	// (0x0008721a) main_fs_bigclock_unlock_btn_pane_ParamLimits

0x9522,	// (0x0008721a) main_fs_bigclock_unlock_btn_pane

0xe56d,	// (0x0008c265) bg_button_pane_cp16

0xe57d,	// (0x0008c275) cell_tport_appsw_pane_g3

0xa3f9,	// (0x000880f1) cf0_flow_pane_ParamLimits

0xa3f9,	// (0x000880f1) cf0_flow_pane

0x0998,	// (0x0007e690) listscroll_cf0_pane

0x09a1,	// (0x0007e699) main_cf0_pane_g1

0xa40e,	// (0x00088106) main_cf0_pane_t1_ParamLimits

0xa40e,	// (0x00088106) main_cf0_pane_t1

0xa424,	// (0x0008811c) main_cf0_pane_t2_ParamLimits

0xa424,	// (0x0008811c) main_cf0_pane_t2

0x0001,

0xfedd,	// (0x0008dbd5) main_cf0_pane_t_ParamLimits

0xfedd,	// (0x0008dbd5) main_cf0_pane_t

0x09cf,	// (0x0007e6c7) scroll_pane_cp11

0xa43a,	// (0x00088132) cf0_flow_pane_g1

0xa442,	// (0x0008813a) cf0_flow_pane_g2

0x0001,

0xfee2,	// (0x0008dbda) cf0_flow_pane_g

0xa44a,	// (0x00088142) cf0_flow_pane_t1

0xa722,	// (0x0008841a) main_call6_pane

0xa722,	// (0x0008841a) main_calllock_pane

0xa458,	// (0x00088150) call6_btn_grp_pane_ParamLimits

0xa458,	// (0x00088150) call6_btn_grp_pane

0xa46e,	// (0x00088166) call6_pane_g1_ParamLimits

0xa46e,	// (0x00088166) call6_pane_g1

0xa481,	// (0x00088179) popup_call6_1st_window_ParamLimits

0xa481,	// (0x00088179) popup_call6_1st_window

0xa490,	// (0x00088188) popup_call6_2nd_window_ParamLimits

0xa490,	// (0x00088188) popup_call6_2nd_window

0xa49f,	// (0x00088197) cell_call6_btn_pane_ParamLimits

0xa49f,	// (0x00088197) cell_call6_btn_pane

0x105b,	// (0x0007ed53) bg_popup_call2_in_pane_cp03

0x0a37,	// (0x0007e72f) popup_call6_1st_window_g1

0x0a3f,	// (0x0007e737) popup_call6_1st_window_g2

0x0a47,	// (0x0007e73f) popup_call6_1st_window_g3

0x0002,

0xfee7,	// (0x0008dbdf) popup_call6_1st_window_g

0x0a4f,	// (0x0007e747) popup_call6_1st_window_t1

0x0a5e,	// (0x0007e756) popup_call6_1st_window_t2

0x0a6c,	// (0x0007e764) popup_call6_1st_window_t3

0x0002,

0xfeee,	// (0x0008dbe6) popup_call6_1st_window_t

0x105b,	// (0x0007ed53) bg_popup_call2_in_pane_cp04

0x0a37,	// (0x0007e72f) popup_call6_2nd_window_g1

0x0a3f,	// (0x0007e737) popup_call6_2nd_window_g2

0x0a47,	// (0x0007e73f) popup_call6_2nd_window_g3

0x0002,

0xfee7,	// (0x0008dbdf) popup_call6_2nd_window_g

0x0a4f,	// (0x0007e747) popup_call6_2nd_window_t1

0xa722,	// (0x0008841a) bg_button_pane_cp15

0x0a7a,	// (0x0007e772) cell_call6_btn_pane_g1

0x0a83,	// (0x0007e77b) cell_call6_btn_pane_t1

0xa4b3,	// (0x000881ab) listscroll_wgtman_pane_ParamLimits

0xa4b3,	// (0x000881ab) listscroll_wgtman_pane

0xa4d2,	// (0x000881ca) wgtman_btn_pane_ParamLimits

0xa4d2,	// (0x000881ca) wgtman_btn_pane

0x0e9c,	// (0x0007eb94) aid_scroll_copy1

0x0adf,	// (0x0007e7d7) list_wgtman_pane

0xa512,	// (0x0008820a) wgtman_btn_pane_g1_ParamLimits

0xa512,	// (0x0008820a) wgtman_btn_pane_g1

0xa53e,	// (0x00088236) wgtman_btn_pane_t1_ParamLimits

0xa53e,	// (0x00088236) wgtman_btn_pane_t1

0x0b48,	// (0x0007e840) wgtman_btn_pane_t2_ParamLimits

0x0b48,	// (0x0007e840) wgtman_btn_pane_t2

0x0001,

0xfef5,	// (0x0008dbed) wgtman_btn_pane_t_ParamLimits

0xfef5,	// (0x0008dbed) wgtman_btn_pane_t

0xa57b,	// (0x00088273) listrow_wgtman_pane_ParamLimits

0xa57b,	// (0x00088273) listrow_wgtman_pane

0xa58c,	// (0x00088284) listrow_wgtman_pane_g1

0xa595,	// (0x0008828d) listrow_wgtman_pane_g2

0x0001,

0xfefa,	// (0x0008dbf2) listrow_wgtman_pane_g

0xa59d,	// (0x00088295) listrow_wgtman_pane_t1

0xa5ab,	// (0x000882a3) listrow_wgtman_pane_t2

0x0001,

0xfeff,	// (0x0008dbf7) listrow_wgtman_pane_t

0xa5b9,	// (0x000882b1) wait_bar_pane_cp09

0x0ba5,	// (0x0007e89d) main_calllock_btn_pane

0x0bad,	// (0x0007e8a5) main_calllock_pane_g1

0xa722,	// (0x0008841a) bg_button_pane_cp17

0x0bb6,	// (0x0007e8ae) main_calllock_btn_pane_g1

0x0bbf,	// (0x0007e8b7) main_calllock_btn_pane_t1

0xa722,	// (0x0008841a) main_dialer3_pane

0xa722,	// (0x0008841a) main_fmrd2_pane

0xc78f,	// (0x0008a487) main_fs_bigclock_unlock_btn_pane_g1

0x0bd6,	// (0x0007e8ce) main_fs_bigclock_unlock_btn_pane_t1

0xa5c1,	// (0x000882b9) area_fmrd2_info_pane_ParamLimits

0xa5c1,	// (0x000882b9) area_fmrd2_info_pane

0xa5d0,	// (0x000882c8) area_fmrd2_visual_pane_ParamLimits

0xa5d0,	// (0x000882c8) area_fmrd2_visual_pane

0xa5de,	// (0x000882d6) fmrd2_indi_pane_ParamLimits

0xa5de,	// (0x000882d6) fmrd2_indi_pane

0xa5eb,	// (0x000882e3) area_fmrd2_visual_pane_g1

0xa5f3,	// (0x000882eb) area_fmrd2_visual_pane_t1

0xa601,	// (0x000882f9) area_fmrd2_visual_pane_t2

0xa60f,	// (0x00088307) area_fmrd2_visual_pane_t3

0x0002,

0xff09,	// (0x0008dc01) area_fmrd2_visual_pane_t

0xa61d,	// (0x00088315) area_fmrd2_info_pane_g1

0xa625,	// (0x0008831d) area_fmrd2_info_pane_t1

0xa633,	// (0x0008832b) area_fmrd2_info_pane_t2

0xa641,	// (0x00088339) area_fmrd2_info_pane_t3

0xa64f,	// (0x00088347) area_fmrd2_info_pane_t4

0x0003,

0xff10,	// (0x0008dc08) area_fmrd2_info_pane_t

0xa65d,	// (0x00088355) fmrd2_indi_pane_t1

0xa66b,	// (0x00088363) fmrd2_indi_pane_t2

0xe7c4,	// (0x0008c4bc) fmrd2_indi_pane_t3

0x0002,

0xff19,	// (0x0008dc11) fmrd2_indi_pane_t

0xe0cb,	// (0x0008bdc3) list_single_fs_bigclock_indicator_pane_g5_ParamLimits

0xe0cb,	// (0x0008bdc3) list_single_fs_bigclock_indicator_pane_g5

0xe16d,	// (0x0008be65) list_single_fs_bigclock_indicator_pane_t5_ParamLimits

0xe16d,	// (0x0008be65) list_single_fs_bigclock_indicator_pane_t5

0x9e58,	// (0x00087b50) aid_cell_bcale_month_pane_ParamLimits

0x9e58,	// (0x00087b50) aid_cell_bcale_month_pane

0x9e6a,	// (0x00087b62) bcale_month_pane_ParamLimits

0x9e6a,	// (0x00087b62) bcale_month_pane

0x9e7c,	// (0x00087b74) bcale_preview_pane_ParamLimits

0x9e7c,	// (0x00087b74) bcale_preview_pane

0x0651,	// (0x0007e349) list_single_fs_bigclock_pane_t1_ParamLimits

0x066b,	// (0x0007e363) list_single_fs_bigclock_pane_t2_ParamLimits

0x066b,	// (0x0007e363) list_single_fs_bigclock_pane_t2

0x0001,

0xfea0,	// (0x0008db98) list_single_fs_bigclock_pane_t_ParamLimits

0xfea0,	// (0x0008db98) list_single_fs_bigclock_pane_t

0x0bce,	// (0x0007e8c6) main_fs_bigclock_unlock_btn_pane_g2

0x0001,

0xff04,	// (0x0008dbfc) main_fs_bigclock_unlock_btn_pane_g

0xe7d2,	// (0x0008c4ca) aid_dia3_key_size_ParamLimits

0xe7d2,	// (0x0008c4ca) aid_dia3_key_size

0xe7e1,	// (0x0008c4d9) aid_dia3_listrow_size_ParamLimits

0xe7e1,	// (0x0008c4d9) aid_dia3_listrow_size

0xe7f4,	// (0x0008c4ec) dia3_keypad_fun_pane_ParamLimits

0xe7f4,	// (0x0008c4ec) dia3_keypad_fun_pane

0xe808,	// (0x0008c500) dia3_keypad_num_pane_ParamLimits

0xe808,	// (0x0008c500) dia3_keypad_num_pane

0xe819,	// (0x0008c511) dia3_listscroll_pane_ParamLimits

0xe819,	// (0x0008c511) dia3_listscroll_pane

0xe82a,	// (0x0008c522) dia3_numentry_pane_ParamLimits

0xe82a,	// (0x0008c522) dia3_numentry_pane

0x1c48,	// (0x0007f940) dia3_list_pane

0x1c51,	// (0x0007f949) scroll_pane_cp12

0xa722,	// (0x0008841a) bg_dia3_numentry_pane

0xe83c,	// (0x0008c534) dia3_numentry_pane_t1

0xe84b,	// (0x0008c543) cell_dia3_key_num_pane

0xe853,	// (0x0008c54b) cell_dia3_key0_fun_pane_ParamLimits

0xe853,	// (0x0008c54b) cell_dia3_key0_fun_pane

0xe867,	// (0x0008c55f) cell_dia3_key1_fun_pane_ParamLimits

0xe867,	// (0x0008c55f) cell_dia3_key1_fun_pane

0xe87e,	// (0x0008c576) dia3_listrow_pane

0xddef,	// (0x0008bae7) bg_dia3_numentry_pane_g1

0xa722,	// (0x0008841a) bg_button_pane_cp21

0x1c98,	// (0x0007f990) cell_dia3_key_num_pane_t1

0x1ca6,	// (0x0007f99e) cell_dia3_key_num_pane_t2

0x1cb5,	// (0x0007f9ad) cell_dia3_key_num_pane_t3

0x1cc4,	// (0x0007f9bc) cell_dia3_key_num_pane_t4

0x0003,

0xff20,	// (0x0008dc18) cell_dia3_key_num_pane_t

0xa722,	// (0x0008841a) bg_button_pane_cp19

0x1cd3,	// (0x0007f9cb) cell_dia3_key0_fun_pane_g1

0xa722,	// (0x0008841a) bg_button_pane_cp20

0xe890,	// (0x0008c588) cell_dia3_key1_fun_pane_g1

0xe898,	// (0x0008c590) area_left_week_number_pane

0xe8a1,	// (0x0008c599) area_top_day_name_pane

0xe8aa,	// (0x0008c5a2) frame_month_view_pane

0xe8b2,	// (0x0008c5aa) grid_month_view_pane

0xe8bc,	// (0x0008c5b4) cell_top_day_name_pane_ParamLimits

0xe8bc,	// (0x0008c5b4) cell_top_day_name_pane

0xe8d2,	// (0x0008c5ca) cell_area_left_week_number_pane_ParamLimits

0xe8d2,	// (0x0008c5ca) cell_area_left_week_number_pane

0xe8e6,	// (0x0008c5de) cell_month_view_pane_ParamLimits

0xe8e6,	// (0x0008c5de) cell_month_view_pane

0x1d4c,	// (0x0007fa44) frm_month_g1

0xe901,	// (0x0008c5f9) frm_month_g2

0xe909,	// (0x0008c601) frm_month_g3

0xe911,	// (0x0008c609) frm_month_g4

0xe919,	// (0x0008c611) frm_month_g5

0xe921,	// (0x0008c619) frm_month_g6

0xe929,	// (0x0008c621) frm_month_g7

0x1d85,	// (0x0007fa7d) frm_month_g8

0xe931,	// (0x0008c629) frm_month_g9

0xe93a,	// (0x0008c632) frm_month_g10

0xe943,	// (0x0008c63b) frm_month_g11

0xe94c,	// (0x0008c644) frm_month_g12

0xe955,	// (0x0008c64d) frm_month_g13

0xe95e,	// (0x0008c656) frm_month_g14

0xe967,	// (0x0008c65f) frm_month_g15

0xe970,	// (0x0008c668) frm_month_g16

0x000f,

0xff29,	// (0x0008dc21) frm_month_g

0xe979,	// (0x0008c671) cell_top_day_name_pane_t1

0xe988,	// (0x0008c680) cell_area_left_week_number_pane_g1

0xe979,	// (0x0008c671) cell_area_left_week_number_pane_t1

0xc78f,	// (0x0008a487) cell_month_view_pane_g1

0xe990,	// (0x0008c688) cell_month_view_pane_t1

0xa722,	// (0x0008841a) main_fps_pane

0xe370,	// (0x0008c068) cmail_ddmenu_btn02_pane_cp1_ParamLimits

0xe370,	// (0x0008c068) cmail_ddmenu_btn02_pane_cp1

0xe38c,	// (0x0008c084) cmail_ddmenu_btn02_pane_cp2_ParamLimits

0xe38c,	// (0x0008c084) cmail_ddmenu_btn02_pane_cp2

0xa0e5,	// (0x00087ddd) cmail_ddmenu_btn02_pane_g2_ParamLimits

0xa0e5,	// (0x00087ddd) cmail_ddmenu_btn02_pane_g2

0x0001,

0xfe51,	// (0x0008db49) cmail_ddmenu_btn02_pane_g_ParamLimits

0xfe51,	// (0x0008db49) cmail_ddmenu_btn02_pane_g

0xa106,	// (0x00087dfe) cmail_ddmenu_btn02_pane_t2_ParamLimits

0xa106,	// (0x00087dfe) cmail_ddmenu_btn02_pane_t2

0x0001,

0xfe56,	// (0x0008db4e) cmail_ddmenu_btn02_pane_t_ParamLimits

0xfe56,	// (0x0008db4e) cmail_ddmenu_btn02_pane_t

0xe99f,	// (0x0008c697) fps_text_pane_ParamLimits

0xe99f,	// (0x0008c697) fps_text_pane

0xe9b5,	// (0x0008c6ad) main_fps_pane_g1_ParamLimits

0xe9b5,	// (0x0008c6ad) main_fps_pane_g1

0xe9cb,	// (0x0008c6c3) wait_bar_pane_cp010_ParamLimits

0xe9cb,	// (0x0008c6c3) wait_bar_pane_cp010

0xe9dc,	// (0x0008c6d4) fps_text_pane_t1_ParamLimits

0xe9dc,	// (0x0008c6d4) fps_text_pane_t1

0x7aa8,	// (0x000857a0) cam4_image_uncrop_pane_g1

0x7ab1,	// (0x000857a9) cam4_image_uncrop_pane_g2

0x7aba,	// (0x000857b2) cam4_image_uncrop_pane_g3

0x7ac3,	// (0x000857bb) cam4_image_uncrop_pane_g4

0x0003,

0xf92f,	// (0x0008d627) cam4_image_uncrop_pane_g

0xe87e,	// (0x0008c576) dia3_listrow_pane_ParamLimits

0xa722,	// (0x0008841a) main_phob2_pane

0x9cc3,	// (0x000879bb) cell_tport_appsw_pane_cp02_ParamLimits

0x9cc3,	// (0x000879bb) cell_tport_appsw_pane_cp02

0x9cd3,	// (0x000879cb) cell_tport_appsw_pane_cp03_ParamLimits

0x9cd3,	// (0x000879cb) cell_tport_appsw_pane_cp03

0xa722,	// (0x0008841a) phob2_contact_card_pane

0xa722,	// (0x0008841a) phob2_listscroll_pane

0x1e31,	// (0x0007fb29) phob2_list_pane

0x1e39,	// (0x0007fb31) scroll_pane_cp034

0xe9f4,	// (0x0008c6ec) phob2_cc_data_pane_ParamLimits

0xe9f4,	// (0x0008c6ec) phob2_cc_data_pane

0xea11,	// (0x0008c709) phob2_cc_listscroll_pane_ParamLimits

0xea11,	// (0x0008c709) phob2_cc_listscroll_pane

0xea2d,	// (0x0008c725) list_double_large_graphic_phob2_pane_ParamLimits

0xea2d,	// (0x0008c725) list_double_large_graphic_phob2_pane

0xea3f,	// (0x0008c737) list_double_large_graphic_phob2_pane_g1_ParamLimits

0xea3f,	// (0x0008c737) list_double_large_graphic_phob2_pane_g1

0xa679,	// (0x00088371) list_double_large_graphic_phob2_pane_g2_ParamLimits

0xa679,	// (0x00088371) list_double_large_graphic_phob2_pane_g2

0x0001,

0xff4a,	// (0x0008dc42) list_double_large_graphic_phob2_pane_g_ParamLimits

0xff4a,	// (0x0008dc42) list_double_large_graphic_phob2_pane_g

0xa685,	// (0x0008837d) list_double_large_graphic_phob2_pane_t1_ParamLimits

0xa685,	// (0x0008837d) list_double_large_graphic_phob2_pane_t1

0xa69a,	// (0x00088392) list_double_large_graphic_phob2_pane_t2_ParamLimits

0xa69a,	// (0x00088392) list_double_large_graphic_phob2_pane_t2

0x0001,

0xff4f,	// (0x0008dc47) list_double_large_graphic_phob2_pane_t_ParamLimits

0xff4f,	// (0x0008dc47) list_double_large_graphic_phob2_pane_t

0xa722,	// (0x0008841a) list_highlight_pane_cp024

0x1e91,	// (0x0007fb89) phob2_cc_button_pane

0xea4c,	// (0x0008c744) phob2_cc_data_pane_g1_ParamLimits

0xea4c,	// (0x0008c744) phob2_cc_data_pane_g1

0xea61,	// (0x0008c759) phob2_cc_data_pane_g2_ParamLimits

0xea61,	// (0x0008c759) phob2_cc_data_pane_g2

0x0001,

0xff54,	// (0x0008dc4c) phob2_cc_data_pane_g_ParamLimits

0xff54,	// (0x0008dc4c) phob2_cc_data_pane_g

0xea73,	// (0x0008c76b) phob2_cc_data_pane_t1_ParamLimits

0xea73,	// (0x0008c76b) phob2_cc_data_pane_t1

0xea8b,	// (0x0008c783) phob2_cc_data_pane_t2_ParamLimits

0xea8b,	// (0x0008c783) phob2_cc_data_pane_t2

0xeaa3,	// (0x0008c79b) phob2_cc_data_pane_t3_ParamLimits

0xeaa3,	// (0x0008c79b) phob2_cc_data_pane_t3

0x0002,

0xff59,	// (0x0008dc51) phob2_cc_data_pane_t_ParamLimits

0xff59,	// (0x0008dc51) phob2_cc_data_pane_t

0x1ee7,	// (0x0007fbdf) phob2_cc_list_pane_ParamLimits

0x1ee7,	// (0x0007fbdf) phob2_cc_list_pane

0x1ef3,	// (0x0007fbeb) scroll_pane_cp035_ParamLimits

0x1ef3,	// (0x0007fbeb) scroll_pane_cp035

0x1bd0,	// (0x0007f8c8) bg_button_pane_cp033

0x1eff,	// (0x0007fbf7) phob2_cc_button_pane_g1

0x1f0b,	// (0x0007fc03) phob2_cc_button_pane_t1

0x1f20,	// (0x0007fc18) phob2_cc_button_pane_t2

0x0001,

0xff60,	// (0x0008dc58) phob2_cc_button_pane_t

0xeabb,	// (0x0008c7b3) list_double_large_graphic_phob2_cc_pane_ParamLimits

0xeabb,	// (0x0008c7b3) list_double_large_graphic_phob2_cc_pane

0xeacd,	// (0x0008c7c5) list_double_large_graphic_phob2_cc_pane_g1_ParamLimits

0xeacd,	// (0x0008c7c5) list_double_large_graphic_phob2_cc_pane_g1

0xead9,	// (0x0008c7d1) list_double_large_graphic_phob2_cc_pane_g2_ParamLimits

0xead9,	// (0x0008c7d1) list_double_large_graphic_phob2_cc_pane_g2

0xa6ac,	// (0x000883a4) list_double_large_graphic_phob2_cc_pane_g3_ParamLimits

0xa6ac,	// (0x000883a4) list_double_large_graphic_phob2_cc_pane_g3

0xa6b8,	// (0x000883b0) list_double_large_graphic_phob2_cc_pane_g4_ParamLimits

0xa6b8,	// (0x000883b0) list_double_large_graphic_phob2_cc_pane_g4

0xa6c4,	// (0x000883bc) list_double_large_graphic_phob2_cc_pane_g5_ParamLimits

0xa6c4,	// (0x000883bc) list_double_large_graphic_phob2_cc_pane_g5

0x0004,

0xff65,	// (0x0008dc5d) list_double_large_graphic_phob2_cc_pane_g_ParamLimits

0xff65,	// (0x0008dc5d) list_double_large_graphic_phob2_cc_pane_g

0xa6d0,	// (0x000883c8) list_double_large_graphic_phob2_cc_pane_t1_ParamLimits

0xa6d0,	// (0x000883c8) list_double_large_graphic_phob2_cc_pane_t1

0xa6f9,	// (0x000883f1) list_double_large_graphic_phob2_cc_pane_t2_ParamLimits

0xa6f9,	// (0x000883f1) list_double_large_graphic_phob2_cc_pane_t2

0x0001,

0xff70,	// (0x0008dc68) list_double_large_graphic_phob2_cc_pane_t_ParamLimits

0xff70,	// (0x0008dc68) list_double_large_graphic_phob2_cc_pane_t

0x1f5e,	// (0x0007fc56) list_highlight_pane_cp025_ParamLimits

0x1f5e,	// (0x0007fc56) list_highlight_pane_cp025

0x1bd0,	// (0x0007f8c8) bg_button_pane_cp033_ParamLimits

0x1eff,	// (0x0007fbf7) phob2_cc_button_pane_g1_ParamLimits

0x1f0b,	// (0x0007fc03) phob2_cc_button_pane_t1_ParamLimits

0x1f20,	// (0x0007fc18) phob2_cc_button_pane_t2_ParamLimits

0xff60,	// (0x0008dc58) phob2_cc_button_pane_t_ParamLimits

0x30fd,	// (0x00080df5) popup_wgtman_window

0xde0f,	// (0x0008bb07) scroll_pane_cp038

0xa4f4,	// (0x000881ec) wgtman_btn_pane_cp_01_ParamLimits

0xa4f4,	// (0x000881ec) wgtman_btn_pane_cp_01

0x1f6c,	// (0x0007fc64) wgtman_content_pane

0x1f75,	// (0x0007fc6d) wgtman_heading_pane

0xa722,	// (0x0008841a) bg_heading_pane_cp02

0x1f7e,	// (0x0007fc76) wgtman_heading_pane_g1

0x1f86,	// (0x0007fc7e) wgtman_heading_pane_t1

0x1f94,	// (0x0007fc8c) scroll_pane_cp036

0x1f9c,	// (0x0007fc94) wgtman_list_pane

0x1fa4,	// (0x0007fc9c) wgtman_list_pane_t1_ParamLimits

0x1fa4,	// (0x0007fc9c) wgtman_list_pane_t1
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

} // end of namespace AknLayoutScalable_Abrw_pql_apps_qvga_lsc_Large
