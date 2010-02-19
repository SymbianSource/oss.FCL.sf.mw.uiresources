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

#include "aknlayoutscalable_abrw_phl_apps_qhd_lsc_tch_large.h"
#include "AknLayout2ScalableDecode.h"
namespace AknLayoutScalable_Apps { extern const TUint8 KByteCodedData_AknLayoutScalable_Elaf_php_apps_qhd_prt_tch[]; }

namespace AknLayoutScalable_Abrw_phl_apps_qhd_lsc_tch_Large
{

extern const TUint16 KDataLookup[AknLayoutScalable_Apps::E_TApiId_TableSize];
const SCompDataImplData KImplData = { KDataLookup, AknLayoutScalable_Apps::KByteCodedData_AknLayoutScalable_Elaf_php_apps_qhd_prt_tch + 0x0008de40 };

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
0x0be3,	// (0x0008ea23) Screen

0x0bef,	// (0x0008ea2f) application_window

0x0c61,	// (0x0008eaa1) area_bottom_pane_ParamLimits

0x0c61,	// (0x0008eaa1) area_bottom_pane

0x0cbe,	// (0x0008eafe) area_top_pane_ParamLimits

0x0cbe,	// (0x0008eafe) area_top_pane

0x0d1b,	// (0x0008eb5b) call_video_uplink_pane_ParamLimits

0x0d1b,	// (0x0008eb5b) call_video_uplink_pane

0x0d47,	// (0x0008eb87) main_pane_ParamLimits

0x0d47,	// (0x0008eb87) main_pane

0xa695,	// (0x000984d5) context_pane

0x496f,	// (0x000927af) navi_pane

0x4997,	// (0x000927d7) popup_cale_events_window_ParamLimits

0x4997,	// (0x000927d7) popup_cale_events_window

0xa6a8,	// (0x000984e8) popup_mup_playback_window

0x49af,	// (0x000927ef) signal_pane

0xe1b7,	// (0x0009bff7) main_browser_pane

0xec98,	// (0x0009cad8) main_burst_pane

0x46c1,	// (0x00092501) main_calc_pane

0xec98,	// (0x0009cad8) main_cale_day_pane

0xe1b7,	// (0x0009bff7) main_cale_month_pane

0xec98,	// (0x0009cad8) main_cale_week_pane

0xec98,	// (0x0009cad8) main_call_pane

0xde89,	// (0x0009bcc9) main_call_poc_pane

0xec98,	// (0x0009cad8) main_camera_pane

0xec98,	// (0x0009cad8) main_chi_dic_pane

0xeb0f,	// (0x0009c94f) main_clock_pane

0xde89,	// (0x0009bcc9) main_fmradio_pane

0xec98,	// (0x0009cad8) main_graph_messa_pane

0xde89,	// (0x0009bcc9) main_help_pane

0xe1b7,	// (0x0009bff7) main_im_pane

0xe0e4,	// (0x0009bf24) main_image_pane_ParamLimits

0xe0e4,	// (0x0009bf24) main_image_pane

0xde89,	// (0x0009bcc9) main_location2_pane

0xec98,	// (0x0009cad8) main_location_pane

0xde89,	// (0x0009bcc9) main_messa_pane

0xde89,	// (0x0009bcc9) main_mp2_pane

0xec98,	// (0x0009cad8) main_mp_pane

0xde89,	// (0x0009bcc9) main_msg_pane

0xde89,	// (0x0009bcc9) main_mup_eq_pane

0xde89,	// (0x0009bcc9) main_mup_pane

0xe1b7,	// (0x0009bff7) main_notes_pane

0xde89,	// (0x0009bcc9) main_pec_pane

0xde89,	// (0x0009bcc9) main_phob_pane

0xde89,	// (0x0009bcc9) main_pinb_pane

0xde89,	// (0x0009bcc9) main_postcard_pane

0xde89,	// (0x0009bcc9) main_qdial_pane

0xec98,	// (0x0009cad8) main_skin_pane

0xde89,	// (0x0009bcc9) main_smil2_pane

0xec98,	// (0x0009cad8) main_smil_pane

0xec98,	// (0x0009cad8) main_video_pane

0xec98,	// (0x0009cad8) main_video_tele_pane

0xe0e4,	// (0x0009bf24) main_viewer_pane_ParamLimits

0xe0e4,	// (0x0009bf24) main_viewer_pane

0xec98,	// (0x0009cad8) main_vorec_pane

0x4715,	// (0x00092555) popup_blid_sat_info_window_ParamLimits

0x4715,	// (0x00092555) popup_blid_sat_info_window

0x476d,	// (0x000925ad) popup_dyc_status_message_window_ParamLimits

0x476d,	// (0x000925ad) popup_dyc_status_message_window

0x4787,	// (0x000925c7) popup_grid_large_graphic_window_ParamLimits

0x4787,	// (0x000925c7) popup_grid_large_graphic_window

0x4843,	// (0x00092683) popup_loc_request_window_ParamLimits

0x4843,	// (0x00092683) popup_loc_request_window

0x4947,	// (0x00092787) popup_wml_address_window_ParamLimits

0x4947,	// (0x00092787) popup_wml_address_window

0x44fb,	// (0x0009233b) call_muted_g1

0x37fd,	// (0x0009163d) popup_call_audio_conf_window_ParamLimits

0x37fd,	// (0x0009163d) popup_call_audio_conf_window

0x450f,	// (0x0009234f) popup_call_audio_first_window_ParamLimits

0x450f,	// (0x0009234f) popup_call_audio_first_window

0x4585,	// (0x000923c5) popup_call_audio_in_window_ParamLimits

0x4585,	// (0x000923c5) popup_call_audio_in_window

0x45c1,	// (0x00092401) popup_call_audio_out_window_ParamLimits

0x45c1,	// (0x00092401) popup_call_audio_out_window

0x45fb,	// (0x0009243b) popup_call_audio_second_window_ParamLimits

0x45fb,	// (0x0009243b) popup_call_audio_second_window

0x4651,	// (0x00092491) popup_call_audio_wait_window_ParamLimits

0x4651,	// (0x00092491) popup_call_audio_wait_window

0x4686,	// (0x000924c6) popup_number_entry_window_ParamLimits

0x4686,	// (0x000924c6) popup_number_entry_window

0xda76,	// (0x0009b8b6) bg_popup_call_pane_cp05_ParamLimits

0xda76,	// (0x0009b8b6) bg_popup_call_pane_cp05

0xda96,	// (0x0009b8d6) popup_number_entry_window_t1

0xdaa9,	// (0x0009b8e9) popup_number_entry_window_t2

0xdabb,	// (0x0009b8fb) popup_number_entry_window_t3

0x0003,

0xf0e7,	// (0x0009cf27) popup_number_entry_window_t

0xdacd,	// (0x0009b90d) text_title_cp2

0xdae0,	// (0x0009b920) bg_popup_call_pane_cp_ParamLimits

0xdae0,	// (0x0009b920) bg_popup_call_pane_cp

0xdaee,	// (0x0009b92e) call_thumbnail_pane

0xdaf6,	// (0x0009b936) popup_call_audio_in_window_g1_ParamLimits

0xdaf6,	// (0x0009b936) popup_call_audio_in_window_g1

0xdb02,	// (0x0009b942) popup_call_audio_in_window_g2_ParamLimits

0xdb02,	// (0x0009b942) popup_call_audio_in_window_g2

0xdb0e,	// (0x0009b94e) popup_call_audio_in_window_g3_ParamLimits

0xdb0e,	// (0x0009b94e) popup_call_audio_in_window_g3

0x0002,

0xf0f0,	// (0x0009cf30) popup_call_audio_in_window_g_ParamLimits

0xf0f0,	// (0x0009cf30) popup_call_audio_in_window_g

0xdb1a,	// (0x0009b95a) popup_call_audio_in_window_t1_ParamLimits

0xdb1a,	// (0x0009b95a) popup_call_audio_in_window_t1

0xdb36,	// (0x0009b976) popup_call_audio_in_window_t2_ParamLimits

0xdb36,	// (0x0009b976) popup_call_audio_in_window_t2

0xdb52,	// (0x0009b992) popup_call_audio_in_window_t3_ParamLimits

0xdb52,	// (0x0009b992) popup_call_audio_in_window_t3

0x0002,

0xf0f7,	// (0x0009cf37) popup_call_audio_in_window_t_ParamLimits

0xf0f7,	// (0x0009cf37) popup_call_audio_in_window_t

0xdae0,	// (0x0009b920) bg_popup_call_pane_cp01_ParamLimits

0xdae0,	// (0x0009b920) bg_popup_call_pane_cp01

0xdaee,	// (0x0009b92e) call_thumbnail_pane_cp02

0xdb65,	// (0x0009b9a5) call_type_pane_cp022

0xdb6d,	// (0x0009b9ad) popup_call_audio_out_window_g1_ParamLimits

0xdb6d,	// (0x0009b9ad) popup_call_audio_out_window_g1

0xdb7f,	// (0x0009b9bf) popup_call_audio_out_window_g2_ParamLimits

0xdb7f,	// (0x0009b9bf) popup_call_audio_out_window_g2

0xdb8b,	// (0x0009b9cb) popup_call_audio_out_window_g3_ParamLimits

0xdb8b,	// (0x0009b9cb) popup_call_audio_out_window_g3

0x0002,

0xf0fe,	// (0x0009cf3e) popup_call_audio_out_window_g_ParamLimits

0xf0fe,	// (0x0009cf3e) popup_call_audio_out_window_g

0xdb9d,	// (0x0009b9dd) popup_call_audio_out_window_t1_ParamLimits

0xdb9d,	// (0x0009b9dd) popup_call_audio_out_window_t1

0xdbb5,	// (0x0009b9f5) popup_call_audio_out_window_t2_ParamLimits

0xdbb5,	// (0x0009b9f5) popup_call_audio_out_window_t2

0x0001,

0xf105,	// (0x0009cf45) popup_call_audio_out_window_t_ParamLimits

0xf105,	// (0x0009cf45) popup_call_audio_out_window_t

0xdbca,	// (0x0009ba0a) bg_popup_call_pane_ParamLimits

0xdbca,	// (0x0009ba0a) bg_popup_call_pane

0x0f07,	// (0x0008ed47) call_thumbnail_pane_cp_ParamLimits

0x0f07,	// (0x0008ed47) call_thumbnail_pane_cp

0xdc4e,	// (0x0009ba8e) call_type_pane_cp01_ParamLimits

0xdc4e,	// (0x0009ba8e) call_type_pane_cp01

0xdc92,	// (0x0009bad2) popup_call_audio_first_window_g1_ParamLimits

0xdc92,	// (0x0009bad2) popup_call_audio_first_window_g1

0xdcde,	// (0x0009bb1e) popup_call_audio_first_window_g2_ParamLimits

0xdcde,	// (0x0009bb1e) popup_call_audio_first_window_g2

0x0001,

0xf10a,	// (0x0009cf4a) popup_call_audio_first_window_g_ParamLimits

0xf10a,	// (0x0009cf4a) popup_call_audio_first_window_g

0xdd22,	// (0x0009bb62) popup_call_audio_first_window_t1_ParamLimits

0xdd22,	// (0x0009bb62) popup_call_audio_first_window_t1

0xddce,	// (0x0009bc0e) popup_call_audio_first_window_t4_ParamLimits

0xddce,	// (0x0009bc0e) popup_call_audio_first_window_t4

0xde5a,	// (0x0009bc9a) popup_call_audio_first_window_t5_ParamLimits

0xde5a,	// (0x0009bc9a) popup_call_audio_first_window_t5

0x0002,

0xf10f,	// (0x0009cf4f) popup_call_audio_first_window_t_ParamLimits

0xf10f,	// (0x0009cf4f) popup_call_audio_first_window_t

0xde89,	// (0x0009bcc9) bg_popup_call_pane_cp02

0xde93,	// (0x0009bcd3) call_type_pane_cp023

0xde9b,	// (0x0009bcdb) popup_call_audio_wait_window_g1

0xdea3,	// (0x0009bce3) popup_call_audio_wait_window_g2

0x0001,

0xf116,	// (0x0009cf56) popup_call_audio_wait_window_g

0xdeab,	// (0x0009bceb) popup_call_audio_wait_window_t3

0xdeb9,	// (0x0009bcf9) bg_popup_call_pane_cp03_ParamLimits

0xdeb9,	// (0x0009bcf9) bg_popup_call_pane_cp03

0xdf19,	// (0x0009bd59) call_thumbnail_pane_cp011_ParamLimits

0xdf19,	// (0x0009bd59) call_thumbnail_pane_cp011

0xdf25,	// (0x0009bd65) call_type_pane_cp034_ParamLimits

0xdf25,	// (0x0009bd65) call_type_pane_cp034

0xdf61,	// (0x0009bda1) popup_call_audio_second_window_g1_ParamLimits

0xdf61,	// (0x0009bda1) popup_call_audio_second_window_g1

0xdf9d,	// (0x0009bddd) popup_call_audio_second_window_g2_ParamLimits

0xdf9d,	// (0x0009bddd) popup_call_audio_second_window_g2

0x0001,

0xf11b,	// (0x0009cf5b) popup_call_audio_second_window_g_ParamLimits

0xf11b,	// (0x0009cf5b) popup_call_audio_second_window_g

0xdfd9,	// (0x0009be19) popup_call_audio_second_window_t1_ParamLimits

0xdfd9,	// (0x0009be19) popup_call_audio_second_window_t1

0xe05a,	// (0x0009be9a) popup_call_audio_second_window_t2_ParamLimits

0xe05a,	// (0x0009be9a) popup_call_audio_second_window_t2

0xe090,	// (0x0009bed0) popup_call_audio_second_window_t3_ParamLimits

0xe090,	// (0x0009bed0) popup_call_audio_second_window_t3

0x0002,

0xf120,	// (0x0009cf60) popup_call_audio_second_window_t_ParamLimits

0xf120,	// (0x0009cf60) popup_call_audio_second_window_t

0xde89,	// (0x0009bcc9) bg_popup_call_pane_cp04

0xe0c6,	// (0x0009bf06) list_conf_pane

0xe0ce,	// (0x0009bf0e) popup_call_audio_conf_window_t1

0xe0dc,	// (0x0009bf1c) call_thumbnail_pane_g1

0xe0e4,	// (0x0009bf24) bg_pinb_pane_ParamLimits

0xe0e4,	// (0x0009bf24) bg_pinb_pane

0xe0f2,	// (0x0009bf32) find_pinb_pane

0xe0fb,	// (0x0009bf3b) listscroll_pinb_pane_ParamLimits

0xe0fb,	// (0x0009bf3b) listscroll_pinb_pane

0xe10a,	// (0x0009bf4a) pinb_bg_pane_g1

0x0f2b,	// (0x0008ed6b) pinb_bg_pane_g2

0x0f37,	// (0x0008ed77) pinb_bg_pane_g3

0x0f43,	// (0x0008ed83) pinb_bg_pane_g4

0x0f4f,	// (0x0008ed8f) pinb_bg_pane_g5

0x0f5b,	// (0x0008ed9b) pinb_bg_pane_g6

0x0f66,	// (0x0008eda6) pinb_bg_pane_g7

0x0f71,	// (0x0008edb1) pinb_bg_pane_g8

0x0f7c,	// (0x0008edbc) pinb_bg_pane_g9

0x0f86,	// (0x0008edc6) pinb_bg_pane_g10

0x0009,

0xf127,	// (0x0009cf67) pinb_bg_pane_g

0x0fa3,	// (0x0008ede3) grid_pinb_pane

0x0fac,	// (0x0008edec) list_pinb_pane

0x0fb5,	// (0x0008edf5) scroll_pane_cp01_ParamLimits

0x0fb5,	// (0x0008edf5) scroll_pane_cp01

0xe114,	// (0x0009bf54) find_pinb_pane_g1_ParamLimits

0xe114,	// (0x0009bf54) find_pinb_pane_g1

0xe12c,	// (0x0009bf6c) find_pinb_pane_t1

0xe13e,	// (0x0009bf7e) find_pinb_pane_t2

0x0001,

0xf141,	// (0x0009cf81) find_pinb_pane_t

0xe153,	// (0x0009bf93) input_focus_pane_cp01_ParamLimits

0xe153,	// (0x0009bf93) input_focus_pane_cp01

0x0fc7,	// (0x0008ee07) cell_pinb_pane_ParamLimits

0x0fc7,	// (0x0008ee07) cell_pinb_pane

0x0ff0,	// (0x0008ee30) cell_pinb_pane_g1_ParamLimits

0x0ff0,	// (0x0008ee30) cell_pinb_pane_g1

0x1000,	// (0x0008ee40) cell_pinb_pane_g2_ParamLimits

0x1000,	// (0x0008ee40) cell_pinb_pane_g2

0xe15f,	// (0x0009bf9f) cell_pinb_pane_g3_ParamLimits

0xe15f,	// (0x0009bf9f) cell_pinb_pane_g3

0x0002,

0xf146,	// (0x0009cf86) cell_pinb_pane_g_ParamLimits

0xf146,	// (0x0009cf86) cell_pinb_pane_g

0xde89,	// (0x0009bcc9) grid_highlight_pane_cp01

0x100c,	// (0x0008ee4c) list_pinb_item_pane_ParamLimits

0x100c,	// (0x0008ee4c) list_pinb_item_pane

0xde89,	// (0x0009bcc9) list_highlight_pane_cp02

0x101e,	// (0x0008ee5e) list_pinb_item_pane_g1_ParamLimits

0x101e,	// (0x0008ee5e) list_pinb_item_pane_g1

0x102b,	// (0x0008ee6b) list_pinb_item_pane_g2_ParamLimits

0x102b,	// (0x0008ee6b) list_pinb_item_pane_g2

0x1037,	// (0x0008ee77) list_pinb_item_pane_g3_ParamLimits

0x1037,	// (0x0008ee77) list_pinb_item_pane_g3

0x1048,	// (0x0008ee88) list_pinb_item_pane_g4_ParamLimits

0x1048,	// (0x0008ee88) list_pinb_item_pane_g4

0x0003,

0xf14d,	// (0x0009cf8d) list_pinb_item_pane_g_ParamLimits

0xf14d,	// (0x0009cf8d) list_pinb_item_pane_g

0x1054,	// (0x0008ee94) list_pinb_item_pane_t1_ParamLimits

0x1054,	// (0x0008ee94) list_pinb_item_pane_t1

0x1089,	// (0x0008eec9) calc_display_pane

0x10b1,	// (0x0008eef1) calc_paper_pane

0x10d4,	// (0x0008ef14) grid_calc_pane

0xde89,	// (0x0009bcc9) bg_list_pane_cp01

0x1102,	// (0x0008ef42) clock_g1

0x110a,	// (0x0008ef4a) clock_g2

0x0001,

0xf156,	// (0x0009cf96) clock_g

0x1112,	// (0x0008ef52) clock_t1_ParamLimits

0x1112,	// (0x0008ef52) clock_t1

0x1127,	// (0x0008ef67) clock_t2_ParamLimits

0x1127,	// (0x0008ef67) clock_t2

0x1139,	// (0x0008ef79) clock_t3_ParamLimits

0x1139,	// (0x0008ef79) clock_t3

0x114b,	// (0x0008ef8b) clock_t4_ParamLimits

0x114b,	// (0x0008ef8b) clock_t4

0x115d,	// (0x0008ef9d) clock_t5_ParamLimits

0x115d,	// (0x0008ef9d) clock_t5

0x1172,	// (0x0008efb2) clock_t6_ParamLimits

0x1172,	// (0x0008efb2) clock_t6

0x1184,	// (0x0008efc4) clock_t7_ParamLimits

0x1184,	// (0x0008efc4) clock_t7

0x1196,	// (0x0008efd6) clock_t8_ParamLimits

0x1196,	// (0x0008efd6) clock_t8

0x11aa,	// (0x0008efea) clock_t9_ParamLimits

0x11aa,	// (0x0008efea) clock_t9

0x0008,

0xf15b,	// (0x0009cf9b) clock_t_ParamLimits

0xf15b,	// (0x0009cf9b) clock_t

0xe16b,	// (0x0009bfab) popup_clock_analogue_window_cp02

0xe16b,	// (0x0009bfab) popup_clock_digital_window_cp01

0xe173,	// (0x0009bfb3) listscroll_help_pane

0xde89,	// (0x0009bcc9) phob_pre_status_pane

0xe17d,	// (0x0009bfbd) grid_qdial_pane

0xde89,	// (0x0009bcc9) listscroll_mce_pane

0xe187,	// (0x0009bfc7) bg_notes_pane

0xe195,	// (0x0009bfd5) list_notes_pane

0x11be,	// (0x0008effe) scroll_pane_cp06

0xe1a3,	// (0x0009bfe3) bg_calc_paper_pane

0x9e8c,	// (0x00097ccc) list_calc_pane

0xe1b7,	// (0x0009bff7) bg_calc_display_pane

0x11d2,	// (0x0008f012) calc_display_pane_t1

0x11e4,	// (0x0008f024) calc_display_pane_t2

0x9ea6,	// (0x00097ce6) calc_display_pane_t3

0x0002,

0xf16e,	// (0x0009cfae) calc_display_pane_t

0x11f6,	// (0x0008f036) cell_calc_pane_ParamLimits

0x11f6,	// (0x0008f036) cell_calc_pane

0xe1c3,	// (0x0009c003) bg_calc_paper_pane_g1

0xe1cf,	// (0x0009c00f) bg_calc_paper_pane_g2

0xe1db,	// (0x0009c01b) bg_calc_paper_pane_g3

0xe1e7,	// (0x0009c027) bg_calc_paper_pane_g4

0xe1f3,	// (0x0009c033) bg_calc_paper_pane_g5

0x122b,	// (0x0008f06b) bg_calc_paper_pane_g6

0x123a,	// (0x0008f07a) bg_calc_paper_pane_g7

0x1249,	// (0x0008f089) bg_calc_paper_pane_g8

0x0007,

0xf175,	// (0x0009cfb5) bg_calc_paper_pane_g

0x125c,	// (0x0008f09c) calc_bg_paper_pane_g9

0x126f,	// (0x0008f0af) list_calc_item_pane_ParamLimits

0x126f,	// (0x0008f0af) list_calc_item_pane

0xe1ff,	// (0x0009c03f) list_calc_item_pane_g1

0x9eb8,	// (0x00097cf8) list_calc_item_pane_t1_ParamLimits

0x9eb8,	// (0x00097cf8) list_calc_item_pane_t1

0x1287,	// (0x0008f0c7) list_calc_item_pane_t2_ParamLimits

0x1287,	// (0x0008f0c7) list_calc_item_pane_t2

0x0001,

0xf186,	// (0x0009cfc6) list_calc_item_pane_t_ParamLimits

0xf186,	// (0x0009cfc6) list_calc_item_pane_t

0xe20c,	// (0x0009c04c) cell_calc_pane_g1

0xe216,	// (0x0009c056) grid_highlight_pane_cp02

0x12b9,	// (0x0008f0f9) bg_calc_display_pane_g1

0x12c2,	// (0x0008f102) bg_calc_display_pane_g2

0x12cc,	// (0x0008f10c) bg_calc_display_pane_g3

0x0002,

0xf190,	// (0x0009cfd0) bg_calc_display_pane_g

0x12d5,	// (0x0008f115) cell_qdial_pane_ParamLimits

0x12d5,	// (0x0008f115) cell_qdial_pane

0x12e9,	// (0x0008f129) cell_qdial_pane_g1_ParamLimits

0x12e9,	// (0x0008f129) cell_qdial_pane_g1

0x12ff,	// (0x0008f13f) cell_qdial_pane_g2_ParamLimits

0x12ff,	// (0x0008f13f) cell_qdial_pane_g2

0xe238,	// (0x0009c078) cell_qdial_pane_g3_ParamLimits

0xe238,	// (0x0009c078) cell_qdial_pane_g3

0x0003,

0xf197,	// (0x0009cfd7) cell_qdial_pane_g_ParamLimits

0xf197,	// (0x0009cfd7) cell_qdial_pane_g

0x1326,	// (0x0008f166) cell_qdial_pane_t1_ParamLimits

0x1326,	// (0x0008f166) cell_qdial_pane_t1

0x133e,	// (0x0008f17e) cell_qdial_pane_t2_ParamLimits

0x133e,	// (0x0008f17e) cell_qdial_pane_t2

0x1351,	// (0x0008f191) cell_qdial_pane_t3_ParamLimits

0x1351,	// (0x0008f191) cell_qdial_pane_t3

0x0002,

0xf1a0,	// (0x0009cfe0) cell_qdial_pane_t_ParamLimits

0xf1a0,	// (0x0009cfe0) cell_qdial_pane_t

0xde89,	// (0x0009bcc9) grid_highlight_pane_cp04

0xe244,	// (0x0009c084) thumbnail_qdial_pane_ParamLimits

0xe244,	// (0x0009c084) thumbnail_qdial_pane

0xe2a0,	// (0x0009c0e0) list_help_pane

0xe2a9,	// (0x0009c0e9) scroll_pane_cp02

0x1364,	// (0x0008f1a4) help_list_pane_t1_ParamLimits

0x1364,	// (0x0008f1a4) help_list_pane_t1

0x9eca,	// (0x00097d0a) bg_notes_pane_g2

0x9ed2,	// (0x00097d12) bg_notes_pane_g3

0x9eda,	// (0x00097d1a) notes_bg_pane_g1

0x9ee2,	// (0x00097d22) notes_bg_pane_g4

0x9eea,	// (0x00097d2a) notes_bg_pane_g5

0x9ef2,	// (0x00097d32) notes_bg_pane_g6

0x9efa,	// (0x00097d3a) notes_bg_pane_g7

0x9f02,	// (0x00097d42) notes_bg_pane_g8

0x9f0a,	// (0x00097d4a) notes_bg_pane_g9

0x0006,

0xf1be,	// (0x0009cffe) notes_bg_pane_g

0x1381,	// (0x0008f1c1) list_notes_text_pane_ParamLimits

0x1381,	// (0x0008f1c1) list_notes_text_pane

0xe2b2,	// (0x0009c0f2) list_notes_text_pane_g1

0x1396,	// (0x0008f1d6) list_notes_text_pane_t1

0xe1b7,	// (0x0009bff7) listscroll_cale_week_pane

0x13c1,	// (0x0008f201) bg_cale_heading_pane

0xe2cc,	// (0x0009c10c) bg_cale_pane_cp01

0x13d5,	// (0x0008f215) cale_week_corner_pane

0x13eb,	// (0x0008f22b) cale_week_day_heading_pane

0x13ff,	// (0x0008f23f) cale_week_scroll_pane_g1

0x1410,	// (0x0008f250) cale_week_scroll_pane_g2

0x1421,	// (0x0008f261) cale_week_scroll_pane_g3

0x1432,	// (0x0008f272) cale_week_scroll_pane_g4

0x1443,	// (0x0008f283) cale_week_scroll_pane_g5

0x1456,	// (0x0008f296) cale_week_scroll_pane_g6

0x1469,	// (0x0008f2a9) cale_week_scroll_pane_g7

0x147c,	// (0x0008f2bc) cale_week_scroll_pane_g8

0x148f,	// (0x0008f2cf) cale_week_scroll_pane_g9

0x14a0,	// (0x0008f2e0) cale_week_scroll_pane_g10

0x14b1,	// (0x0008f2f1) cale_week_scroll_pane_g11

0x14c2,	// (0x0008f302) cale_week_scroll_pane_g12

0x14d3,	// (0x0008f313) cale_week_scroll_pane_g13

0x14e4,	// (0x0008f324) cale_week_scroll_pane_g14

0x14f5,	// (0x0008f335) cale_week_scroll_pane_g15

0x000e,

0xf1cd,	// (0x0009d00d) cale_week_scroll_pane_g

0x1506,	// (0x0008f346) cale_week_time_pane

0x1519,	// (0x0008f359) grid_cale_week_pane

0x152e,	// (0x0008f36e) scroll_pane_cp08

0x1548,	// (0x0008f388) cell_cale_week_pane_ParamLimits

0x1548,	// (0x0008f388) cell_cale_week_pane

0x1588,	// (0x0008f3c8) cale_week_day_heading_pane_t1

0x15b2,	// (0x0008f3f2) cale_week_day_heading_pane_t2

0x15dc,	// (0x0008f41c) cale_week_day_heading_pane_t3

0x1606,	// (0x0008f446) cale_week_day_heading_pane_t4

0x1630,	// (0x0008f470) cale_week_day_heading_pane_t5

0x165a,	// (0x0008f49a) cale_week_day_heading_pane_t6

0x1686,	// (0x0008f4c6) cale_week_day_heading_pane_t7

0x0006,

0xf1ec,	// (0x0009d02c) cale_week_day_heading_pane_t

0xe2f7,	// (0x0009c137) bg_cale_side_pane

0x16b0,	// (0x0008f4f0) cale_week_time_pane_t1

0x16c8,	// (0x0008f508) cale_week_time_pane_t2

0x16e0,	// (0x0008f520) cale_week_time_pane_t3

0x16f8,	// (0x0008f538) cale_week_time_pane_t4

0x1710,	// (0x0008f550) cale_week_time_pane_t5

0x1728,	// (0x0008f568) cale_week_time_pane_t6

0x1740,	// (0x0008f580) cale_week_time_pane_t7

0x1758,	// (0x0008f598) cale_week_time_pane_t8

0x0007,

0xf1fb,	// (0x0009d03b) cale_week_time_pane_t

0x1770,	// (0x0008f5b0) cell_cale_week_pane_g2

0x1789,	// (0x0008f5c9) cell_cale_week_pane_g3_ParamLimits

0x1789,	// (0x0008f5c9) cell_cale_week_pane_g3

0xe305,	// (0x0009c145) grid_highlight_pane_cp07

0xe30d,	// (0x0009c14d) listscroll_gms_pane

0xe317,	// (0x0009c157) grid_gms_pane

0xe320,	// (0x0009c160) listscroll_gms_pane_g1

0xe328,	// (0x0009c168) listscroll_gms_pane_g2

0x0001,

0xf20c,	// (0x0009d04c) listscroll_gms_pane_g

0x17a1,	// (0x0008f5e1) scroll_pane_cp010

0x17ac,	// (0x0008f5ec) cell_gms_pane_ParamLimits

0x17ac,	// (0x0008f5ec) cell_gms_pane

0x17be,	// (0x0008f5fe) cell_gms_pane_g1

0xe330,	// (0x0009c170) cell_gms_pane_g2

0xe338,	// (0x0009c178) cell_gms_pane_g3

0xe341,	// (0x0009c181) cell_gms_pane_g4

0x0003,

0xf211,	// (0x0009d051) cell_gms_pane_g

0xe34a,	// (0x0009c18a) grid_highlight_pane_cp09

0x44a5,	// (0x000922e5) phob_pre_status_pane_g1

0x44ad,	// (0x000922ed) phob_pre_status_pane_g2

0x44b5,	// (0x000922f5) phob_pre_status_pane_g3

0x44bd,	// (0x000922fd) phob_pre_status_pane_g4

0x0004,

0xf5d8,	// (0x0009d418) phob_pre_status_pane_g

0x44cd,	// (0x0009230d) phob_pre_status_pane_t1

0x44db,	// (0x0009231b) phob_pre_status_pane_t2

0x44eb,	// (0x0009232b) phob_pre_status_pane_t3

0x0002,

0xf5e3,	// (0x0009d423) phob_pre_status_pane_t

0xde89,	// (0x0009bcc9) bg_list_pane_cp05

0x17ce,	// (0x0008f60e) grid_vorec_pane

0x9f12,	// (0x00097d52) vorec_t1

0x9f20,	// (0x00097d60) vorec_t2

0x9f2e,	// (0x00097d6e) vorec_t3

0x9f3c,	// (0x00097d7c) vorec_t4

0x9f4a,	// (0x00097d8a) vorec_t5

0x9f58,	// (0x00097d98) vorec_t6

0x0006,

0xf21a,	// (0x0009d05a) vorec_t

0x9f74,	// (0x00097db4) wait_bar_pane_cp01

0x17d6,	// (0x0008f616) cell_vorec_pane_ParamLimits

0x17d6,	// (0x0008f616) cell_vorec_pane

0xe352,	// (0x0009c192) cell_vorec_pane_g1

0xde89,	// (0x0009bcc9) grid_highlight_pane_cp05

0x1801,	// (0x0008f641) cams_zoom_pane

0x1810,	// (0x0008f650) image_vga_pane

0x182a,	// (0x0008f66a) main_camera_pane_g1

0x183c,	// (0x0008f67c) main_camera_pane_g2

0x184c,	// (0x0008f68c) main_camera_pane_g3

0x185c,	// (0x0008f69c) main_camera_pane_g4

0x186c,	// (0x0008f6ac) main_camera_pane_g5

0x187c,	// (0x0008f6bc) main_camera_pane_g6

0x188e,	// (0x0008f6ce) main_camera_pane_g7

0x0007,

0xf229,	// (0x0009d069) main_camera_pane_g

0x189e,	// (0x0008f6de) main_camera_pane_t1

0x18b4,	// (0x0008f6f4) main_camera_pane_t2

0x0001,

0xf23a,	// (0x0009d07a) main_camera_pane_t

0x18ee,	// (0x0008f72e) cams_zoom_pane_cp_ParamLimits

0x18ee,	// (0x0008f72e) cams_zoom_pane_cp

0x1916,	// (0x0008f756) image_cif_pane_ParamLimits

0x1916,	// (0x0008f756) image_cif_pane

0x1951,	// (0x0008f791) image_subqcif_pane

0x1959,	// (0x0008f799) main_video_pane_g1_ParamLimits

0x1959,	// (0x0008f799) main_video_pane_g1

0x197d,	// (0x0008f7bd) main_video_pane_g2_ParamLimits

0x197d,	// (0x0008f7bd) main_video_pane_g2

0x19b1,	// (0x0008f7f1) main_video_pane_g3_ParamLimits

0x19b1,	// (0x0008f7f1) main_video_pane_g3

0x19df,	// (0x0008f81f) main_video_pane_g4_ParamLimits

0x19df,	// (0x0008f81f) main_video_pane_g4

0x1a0d,	// (0x0008f84d) main_video_pane_g5_ParamLimits

0x1a0d,	// (0x0008f84d) main_video_pane_g5

0xe368,	// (0x0009c1a8) main_video_pane_g6_ParamLimits

0xe368,	// (0x0009c1a8) main_video_pane_g6

0x0006,

0xf23f,	// (0x0009d07f) main_video_pane_g_ParamLimits

0xf23f,	// (0x0009d07f) main_video_pane_g

0x1a36,	// (0x0008f876) main_video_pane_t1_ParamLimits

0x1a36,	// (0x0008f876) main_video_pane_t1

0xe382,	// (0x0009c1c2) cams_zoom_pane_g1

0xe38b,	// (0x0009c1cb) cams_zoom_pane_g2

0xe394,	// (0x0009c1d4) cams_zoom_pane_g3

0xe39d,	// (0x0009c1dd) cams_zoom_pane_g4

0x0003,

0xf24e,	// (0x0009d08e) cams_zoom_pane_g

0x1a93,	// (0x0008f8d3) grid_cams_pane

0x1aad,	// (0x0008f8ed) linegrid_cams_pane

0x1ac1,	// (0x0008f901) cell_cams_pane_ParamLimits

0x1ac1,	// (0x0008f901) cell_cams_pane

0xe3a6,	// (0x0009c1e6) cams_burst_image_pane

0xe3ae,	// (0x0009c1ee) cell_cams_pane_g1

0xde89,	// (0x0009bcc9) grid_highlight_pane_cp03

0xe20c,	// (0x0009c04c) mp_bg_pane_g1

0xde89,	// (0x0009bcc9) bg_list_pane_cp03

0xa56d,	// (0x000983ad) bg_mp_pane

0xa575,	// (0x000983b5) grid_mp_pane

0xa57d,	// (0x000983bd) media_player_g1

0xa585,	// (0x000983c5) media_player_t1

0xa593,	// (0x000983d3) media_player_t2

0xa5a1,	// (0x000983e1) media_player_t3

0xa5af,	// (0x000983ef) media_player_t4

0xa5bd,	// (0x000983fd) media_player_t5

0xa5cb,	// (0x0009840b) media_player_t6

0xa5d9,	// (0x00098419) media_player_t7

0x0006,

0xf5c2,	// (0x0009d402) media_player_t

0xa5e7,	// (0x00098427) wait_bar_pane_cp02

0xf5a7,	// (0x0009d3e7) main_usb_pane_t

0x449c,	// (0x000922dc) cell_mp_pane

0xe20c,	// (0x0009c04c) cell_mp_pane_g1

0xde89,	// (0x0009bcc9) grid_highlight_pane_cp06

0xe3b6,	// (0x0009c1f6) grid_skin_colour_pane

0xe3be,	// (0x0009c1fe) list_highlight_pane_cp03

0x1bf7,	// (0x0008fa37) skin_g1

0xe3c6,	// (0x0009c206) skin_t1

0xe3d5,	// (0x0009c215) skin_t2

0x0001,

0xf283,	// (0x0009d0c3) skin_t

0x1bff,	// (0x0008fa3f) cell_skin_colour_pane_ParamLimits

0x1bff,	// (0x0008fa3f) cell_skin_colour_pane

0xe3e3,	// (0x0009c223) cell_skin_colour_pane_g1

0x1c78,	// (0x0008fab8) call_video_g1_ParamLimits

0x1c78,	// (0x0008fab8) call_video_g1

0x1c94,	// (0x0008fad4) call_video_g2_ParamLimits

0x1c94,	// (0x0008fad4) call_video_g2

0x0001,

0xf288,	// (0x0009d0c8) call_video_g_ParamLimits

0xf288,	// (0x0009d0c8) call_video_g

0x1ce6,	// (0x0008fb26) call_video_uplink_pane_cp1_ParamLimits

0x1ce6,	// (0x0008fb26) call_video_uplink_pane_cp1

0xe3f5,	// (0x0009c235) call_video_uplink_pane_cp2

0x1d85,	// (0x0008fbc5) video_down_crop_pane_ParamLimits

0x1d85,	// (0x0008fbc5) video_down_crop_pane

0x1e7c,	// (0x0008fcbc) video_down_pane_ParamLimits

0x1e7c,	// (0x0008fcbc) video_down_pane

0xe3fd,	// (0x0009c23d) video_down_subqcif_pane_ParamLimits

0xe3fd,	// (0x0009c23d) video_down_subqcif_pane

0xe415,	// (0x0009c255) video_down_subqcif_pane_cp_ParamLimits

0xe415,	// (0x0009c255) video_down_subqcif_pane_cp

0xe43b,	// (0x0009c27b) im_reading_pane_ParamLimits

0xe43b,	// (0x0009c27b) im_reading_pane

0x1f8a,	// (0x0008fdca) im_writing_pane_ParamLimits

0x1f8a,	// (0x0008fdca) im_writing_pane

0x1fa0,	// (0x0008fde0) im_reading_pane_t1

0xe455,	// (0x0009c295) list_im_pane

0xe466,	// (0x0009c2a6) scroll_pane_cp07

0x1fd9,	// (0x0008fe19) im_writing_pane_t1_ParamLimits

0x1fd9,	// (0x0008fe19) im_writing_pane_t1

0xe47f,	// (0x0009c2bf) im_writing_pane_t2_ParamLimits

0xe47f,	// (0x0009c2bf) im_writing_pane_t2

0x0001,

0xf292,	// (0x0009d0d2) im_writing_pane_t_ParamLimits

0xf292,	// (0x0009d0d2) im_writing_pane_t

0xde89,	// (0x0009bcc9) input_focus_pane_cp04

0xde89,	// (0x0009bcc9) input_focus_pane_cp05

0x1fee,	// (0x0008fe2e) list_im_single_pane_ParamLimits

0x1fee,	// (0x0008fe2e) list_im_single_pane

0x2002,	// (0x0008fe42) list_single_im_pane_t1

0x445c,	// (0x0009229c) blid_accuracy_pane

0x4464,	// (0x000922a4) blid_compass_pane

0x446e,	// (0x000922ae) main_location_t1

0x447e,	// (0x000922be) main_location_t2

0x448e,	// (0x000922ce) main_location_t3

0x0002,

0xf5d1,	// (0x0009d411) main_location_t

0xde89,	// (0x0009bcc9) aid_levels_location

0xe20c,	// (0x0009c04c) blid_accuracy_pane_g1

0xe20c,	// (0x0009c04c) blid_accuracy_pane_g2

0x0001,

0xf2f4,	// (0x0009d134) blid_accuracy_pane_g

0xe4c7,	// (0x0009c307) wml_content_pane

0xe505,	// (0x0009c345) wml_button_pane_ParamLimits

0xe505,	// (0x0009c345) wml_button_pane

0x2011,	// (0x0008fe51) wml_list_single_large_pane_ParamLimits

0x2011,	// (0x0008fe51) wml_list_single_large_pane

0x2026,	// (0x0008fe66) wml_list_single_medium_pane_ParamLimits

0x2026,	// (0x0008fe66) wml_list_single_medium_pane

0x203c,	// (0x0008fe7c) wml_list_single_small_pane_ParamLimits

0x203c,	// (0x0008fe7c) wml_list_single_small_pane

0xe519,	// (0x0009c359) wml_selection_box_pane_ParamLimits

0xe519,	// (0x0009c359) wml_selection_box_pane

0xe52c,	// (0x0009c36c) wml_list_single_pane_t1

0xe53b,	// (0x0009c37b) wml_list_single_medium_pane_t1

0xe54a,	// (0x0009c38a) wml_list_single_large_pane_t1

0xe559,	// (0x0009c399) input_focus_pane_cp02_ParamLimits

0xe559,	// (0x0009c399) input_focus_pane_cp02

0xe56c,	// (0x0009c3ac) wml_selection_box_pane_g1

0xe575,	// (0x0009c3b5) wml_selection_box_pane_t1_ParamLimits

0xe575,	// (0x0009c3b5) wml_selection_box_pane_t1

0xe0e4,	// (0x0009bf24) bg_wml_button_pane_ParamLimits

0xe0e4,	// (0x0009bf24) bg_wml_button_pane

0xe58d,	// (0x0009c3cd) wml_button_pane_g1

0xe595,	// (0x0009c3d5) wml_button_pane_t1

0xe58d,	// (0x0009c3cd) wml_button_bg_pane_g1

0xe5a5,	// (0x0009c3e5) wml_button_bg_pane_g2

0xe5ad,	// (0x0009c3ed) wml_button_bg_pane_g3

0xe5b5,	// (0x0009c3f5) wml_button_bg_pane_g4

0xe5bd,	// (0x0009c3fd) wml_button_bg_pane_g5

0xe5c5,	// (0x0009c405) wml_button_bg_pane_g6

0xe5cd,	// (0x0009c40d) wml_button_bg_pane_g7

0xe5d5,	// (0x0009c415) wml_button_bg_pane_g8

0xe5dd,	// (0x0009c41d) wml_button_bg_pane_g9

0x0008,

0xf297,	// (0x0009d0d7) wml_button_bg_pane_g

0x2054,	// (0x0008fe94) bg_list_pane_cp02

0xe5e5,	// (0x0009c425) mce_header_pane_ParamLimits

0xe5e5,	// (0x0009c425) mce_header_pane

0xe5fb,	// (0x0009c43b) mce_icon_pane

0xe5fb,	// (0x0009c43b) mce_image_pane

0xe604,	// (0x0009c444) mce_text_pane_ParamLimits

0xe604,	// (0x0009c444) mce_text_pane

0x205c,	// (0x0008fe9c) scroll_pane_cp03

0xe4fd,	// (0x0009c33d) scroll_pane_cp04

0xe617,	// (0x0009c457) scroll_pane_cp05_ParamLimits

0xe617,	// (0x0009c457) scroll_pane_cp05

0x2066,	// (0x0008fea6) mce_header_field_pane_ParamLimits

0x2066,	// (0x0008fea6) mce_header_field_pane

0x207d,	// (0x0008febd) mce_header_field_pane_2_ParamLimits

0x207d,	// (0x0008febd) mce_header_field_pane_2

0x2093,	// (0x0008fed3) mce_header_field_pane_3

0x209b,	// (0x0008fedb) list_single_mce_message_pane_ParamLimits

0x209b,	// (0x0008fedb) list_single_mce_message_pane

0x20b0,	// (0x0008fef0) list_single_mce_smart_pane_ParamLimits

0x20b0,	// (0x0008fef0) list_single_mce_smart_pane

0xe623,	// (0x0009c463) input_focus_pane_cp03

0xe62c,	// (0x0009c46c) list_header_data_pane

0x20d0,	// (0x0008ff10) mce_header_field_pane_t1

0x20e0,	// (0x0008ff20) list_single_mce_header_pane_ParamLimits

0x20e0,	// (0x0008ff20) list_single_mce_header_pane

0xe634,	// (0x0009c474) list_single_mce_header_pane_t1

0xe643,	// (0x0009c483) list_single_mce_message_pane_g1

0xe64b,	// (0x0009c48b) list_single_mce_message_pane_t1

0x2112,	// (0x0008ff52) bg_cale_heading_pane_cp01_ParamLimits

0x2112,	// (0x0008ff52) bg_cale_heading_pane_cp01

0xe659,	// (0x0009c499) bg_cale_pane_cp02_ParamLimits

0xe659,	// (0x0009c499) bg_cale_pane_cp02

0x2135,	// (0x0008ff75) cale_month_corner_pane

0x214b,	// (0x0008ff8b) cale_month_day_heading_pane_ParamLimits

0x214b,	// (0x0008ff8b) cale_month_day_heading_pane

0x217e,	// (0x0008ffbe) cale_month_pane_g1_ParamLimits

0x217e,	// (0x0008ffbe) cale_month_pane_g1

0x219a,	// (0x0008ffda) cale_month_pane_g2_ParamLimits

0x219a,	// (0x0008ffda) cale_month_pane_g2

0x21b5,	// (0x0008fff5) cale_month_pane_g3_ParamLimits

0x21b5,	// (0x0008fff5) cale_month_pane_g3

0x21e1,	// (0x00090021) cale_month_pane_g4_ParamLimits

0x21e1,	// (0x00090021) cale_month_pane_g4

0x220d,	// (0x0009004d) cale_month_pane_g5_ParamLimits

0x220d,	// (0x0009004d) cale_month_pane_g5

0x2241,	// (0x00090081) cale_month_pane_g6_ParamLimits

0x2241,	// (0x00090081) cale_month_pane_g6

0x227d,	// (0x000900bd) cale_month_pane_g7_ParamLimits

0x227d,	// (0x000900bd) cale_month_pane_g7

0x22b9,	// (0x000900f9) cale_month_pane_g8_ParamLimits

0x22b9,	// (0x000900f9) cale_month_pane_g8

0x22f5,	// (0x00090135) cale_month_pane_g9_ParamLimits

0x22f5,	// (0x00090135) cale_month_pane_g9

0x232f,	// (0x0009016f) cale_month_pane_g10_ParamLimits

0x232f,	// (0x0009016f) cale_month_pane_g10

0x2369,	// (0x000901a9) cale_month_pane_g11_ParamLimits

0x2369,	// (0x000901a9) cale_month_pane_g11

0x23a3,	// (0x000901e3) cale_month_pane_g12_ParamLimits

0x23a3,	// (0x000901e3) cale_month_pane_g12

0x23dd,	// (0x0009021d) cale_month_pane_g13_ParamLimits

0x23dd,	// (0x0009021d) cale_month_pane_g13

0x000c,

0xf2aa,	// (0x0009d0ea) cale_month_pane_g_ParamLimits

0xf2aa,	// (0x0009d0ea) cale_month_pane_g

0x2417,	// (0x00090257) cale_month_week_pane

0x242a,	// (0x0009026a) grid_cale_month_pane_ParamLimits

0x242a,	// (0x0009026a) grid_cale_month_pane

0x2458,	// (0x00090298) cale_month_day_heading_pane_t1

0x24b6,	// (0x000902f6) cale_month_day_heading_pane_t2

0x251b,	// (0x0009035b) cale_month_day_heading_pane_t3

0x2580,	// (0x000903c0) cale_month_day_heading_pane_t4

0x25e5,	// (0x00090425) cale_month_day_heading_pane_t5

0x265a,	// (0x0009049a) cale_month_day_heading_pane_t6

0x26cf,	// (0x0009050f) cale_month_day_heading_pane_t7

0x0006,

0xf2c5,	// (0x0009d105) cale_month_day_heading_pane_t

0xe2f7,	// (0x0009c137) bg_cale_side_pane_cp01

0x2744,	// (0x00090584) cale_month_week_pane_t1

0x275b,	// (0x0009059b) cale_month_week_pane_t2

0x2772,	// (0x000905b2) cale_month_week_pane_t3

0x2789,	// (0x000905c9) cale_month_week_pane_t4

0x27a0,	// (0x000905e0) cale_month_week_pane_t5

0x27b7,	// (0x000905f7) cale_month_week_pane_t6

0x0005,

0xf2d4,	// (0x0009d114) cale_month_week_pane_t

0x27ce,	// (0x0009060e) cell_cale_month_pane_ParamLimits

0x27ce,	// (0x0009060e) cell_cale_month_pane

0x9f7c,	// (0x00097dbc) cell_cale_month_pane_g1

0x28ce,	// (0x0009070e) cell_cale_month_pane_t1_ParamLimits

0x28ce,	// (0x0009070e) cell_cale_month_pane_t1

0xe305,	// (0x0009c145) grid_highlight_pane_cp08

0xe20c,	// (0x0009c04c) main_smil_g1

0x28ea,	// (0x0009072a) smil_status_pane

0xe68e,	// (0x0009c4ce) smil_text_pane

0xa48d,	// (0x000982cd) bg_popup_call3_rect_pane_g8

0xa495,	// (0x000982d5) bg_popup_call3_rect_pane_g9

0x0008,

0xf565,	// (0x0009d3a5) bg_popup_call3_rect_pane_g

0xa70f,	// (0x0009854f) smil_status_volume_pane_g1

0xe698,	// (0x0009c4d8) smil_status_pane_t1

0xa742,	// (0x00098582) volume_smil_pane

0xe6af,	// (0x0009c4ef) list_smil_text_pane

0x28fd,	// (0x0009073d) scroll_pane_cp011

0x2908,	// (0x00090748) smil_text_list_pane_t1_ParamLimits

0x2908,	// (0x00090748) smil_text_list_pane_t1

0x9f88,	// (0x00097dc8) aid_volume_smil_ParamLimits

0x9f88,	// (0x00097dc8) aid_volume_smil

0xe20c,	// (0x0009c04c) smil_volume_pane_g1

0xe20c,	// (0x0009c04c) smil_volume_pane_g2

0x0001,

0xf2f4,	// (0x0009d134) smil_volume_pane_g

0xe1b7,	// (0x0009bff7) listscroll_cale_day_pane

0xe6b9,	// (0x0009c4f9) bg_cale_pane

0xe6d1,	// (0x0009c511) list_cale_pane

0xe6e2,	// (0x0009c522) scroll_pane_cp09

0xe6f3,	// (0x0009c533) cale_bg_pane_g1

0xe6fb,	// (0x0009c53b) cale_bg_pane_g2

0xe703,	// (0x0009c543) cale_bg_pane_g3

0xe70b,	// (0x0009c54b) cale_bg_pane_g4

0xe713,	// (0x0009c553) cale_bg_pane_g5

0xe71b,	// (0x0009c55b) cale_bg_pane_g6

0xe723,	// (0x0009c563) cale_bg_pane_g7

0xe72b,	// (0x0009c56b) cale_bg_pane_g8

0xe733,	// (0x0009c573) cale_bg_pane_g9

0x0008,

0xf2f9,	// (0x0009d139) cale_bg_pane_g

0x294e,	// (0x0009078e) list_cale_time_pane_ParamLimits

0x294e,	// (0x0009078e) list_cale_time_pane

0xe73b,	// (0x0009c57b) list_cale_time_pane_g1_ParamLimits

0xe73b,	// (0x0009c57b) list_cale_time_pane_g1

0xe747,	// (0x0009c587) list_cale_time_pane_g2_ParamLimits

0xe747,	// (0x0009c587) list_cale_time_pane_g2

0x2961,	// (0x000907a1) list_cale_time_pane_g3_ParamLimits

0x2961,	// (0x000907a1) list_cale_time_pane_g3

0x296f,	// (0x000907af) list_cale_time_pane_g4_ParamLimits

0x296f,	// (0x000907af) list_cale_time_pane_g4

0x297d,	// (0x000907bd) list_cale_time_pane_g5_ParamLimits

0x297d,	// (0x000907bd) list_cale_time_pane_g5

0x0005,

0xf30c,	// (0x0009d14c) list_cale_time_pane_g_ParamLimits

0xf30c,	// (0x0009d14c) list_cale_time_pane_g

0xe761,	// (0x0009c5a1) list_cale_time_pane_t1_ParamLimits

0xe761,	// (0x0009c5a1) list_cale_time_pane_t1

0xe789,	// (0x0009c5c9) list_cale_time_pane_t2_ParamLimits

0xe789,	// (0x0009c5c9) list_cale_time_pane_t2

0x2cee,	// (0x00090b2e) aid_blid_cardinal_pane

0x2d2c,	// (0x00090b6c) compass_pane_t4

0xe7b1,	// (0x0009c5f1) list_cale_time_pane_t4_ParamLimits

0xe7b1,	// (0x0009c5f1) list_cale_time_pane_t4

0x2d3a,	// (0x00090b7a) compass_pane_t5

0x2d48,	// (0x00090b88) compass_pane_t6

0x2d56,	// (0x00090b96) compass_pane_t7

0xebdc,	// (0x0009ca1c) navi_pane_cc_t1

0xed3f,	// (0x0009cb7f) aid_phob_thumbnail_center_pane

0x34a0,	// (0x000912e0) main_postcard_pane_g4_ParamLimits

0x0002,

0xf319,	// (0x0009d159) list_cale_time_pane_t_ParamLimits

0xf319,	// (0x0009d159) list_cale_time_pane_t

0xdae0,	// (0x0009b920) bg_popup_window_pane_cp02_ParamLimits

0xdae0,	// (0x0009b920) bg_popup_window_pane_cp02

0xe7d9,	// (0x0009c619) heading_pane_cp01_ParamLimits

0xe7d9,	// (0x0009c619) heading_pane_cp01

0xe7e5,	// (0x0009c625) loc_req_pane_ParamLimits

0xe7e5,	// (0x0009c625) loc_req_pane

0xe7f5,	// (0x0009c635) loc_type_pane_ParamLimits

0xe7f5,	// (0x0009c635) loc_type_pane

0xe807,	// (0x0009c647) loc_type_pane_t1_ParamLimits

0xe807,	// (0x0009c647) loc_type_pane_t1

0xe819,	// (0x0009c659) loc_type_pane_t2_ParamLimits

0xe819,	// (0x0009c659) loc_type_pane_t2

0xe82b,	// (0x0009c66b) loc_type_pane_t3_ParamLimits

0xe82b,	// (0x0009c66b) loc_type_pane_t3

0x0002,

0xf320,	// (0x0009d160) loc_type_pane_t_ParamLimits

0xf320,	// (0x0009d160) loc_type_pane_t

0xe83d,	// (0x0009c67d) list_loc_req_pane

0xe847,	// (0x0009c687) scroll_pane_cp012

0x298b,	// (0x000907cb) list_single_loc_request_popup_menu_pane_ParamLimits

0x298b,	// (0x000907cb) list_single_loc_request_popup_menu_pane

0xe852,	// (0x0009c692) list_single_loc_request_popup_menu_pane_g1_ParamLimits

0xe852,	// (0x0009c692) list_single_loc_request_popup_menu_pane_g1

0xe85e,	// (0x0009c69e) list_single_loc_request_popup_menu_pane_g2_ParamLimits

0xe85e,	// (0x0009c69e) list_single_loc_request_popup_menu_pane_g2

0x0001,

0xf327,	// (0x0009d167) list_single_loc_request_popup_menu_pane_g_ParamLimits

0xf327,	// (0x0009d167) list_single_loc_request_popup_menu_pane_g

0xe86a,	// (0x0009c6aa) list_single_loc_request_popup_menu_pane_t1_ParamLimits

0xe86a,	// (0x0009c6aa) list_single_loc_request_popup_menu_pane_t1

0xe0e4,	// (0x0009bf24) bg_popup_window_pane_cp03_ParamLimits

0xe0e4,	// (0x0009bf24) bg_popup_window_pane_cp03

0xefe2,	// (0x0009ce22) heading_loc_req_pane_ParamLimits

0xefe2,	// (0x0009ce22) heading_loc_req_pane

0x2998,	// (0x000907d8) popup_dyc_status_message_window_g1_ParamLimits

0x2998,	// (0x000907d8) popup_dyc_status_message_window_g1

0x29ac,	// (0x000907ec) popup_dyc_status_message_window_t1_ParamLimits

0x29ac,	// (0x000907ec) popup_dyc_status_message_window_t1

0x29c1,	// (0x00090801) popup_dyc_status_message_window_t2_ParamLimits

0x29c1,	// (0x00090801) popup_dyc_status_message_window_t2

0x29d6,	// (0x00090816) popup_dyc_status_message_window_t3_ParamLimits

0x29d6,	// (0x00090816) popup_dyc_status_message_window_t3

0x0002,

0xf32c,	// (0x0009d16c) popup_dyc_status_message_window_t_ParamLimits

0xf32c,	// (0x0009d16c) popup_dyc_status_message_window_t

0xde89,	// (0x0009bcc9) bg_heading_pane_cp01

0xe880,	// (0x0009c6c0) heading_loc_req_pane_g1

0xe888,	// (0x0009c6c8) heading_loc_req_pane_g2

0xe890,	// (0x0009c6d0) heading_loc_req_pane_g3

0x0002,

0xf333,	// (0x0009d173) heading_loc_req_pane_g

0xe898,	// (0x0009c6d8) heading_loc_req_pane_t1

0xe8a7,	// (0x0009c6e7) bg_popup_sub_pane_cp01_ParamLimits

0xe8a7,	// (0x0009c6e7) bg_popup_sub_pane_cp01

0xe8b5,	// (0x0009c6f5) popup_cale_events_window_g1_ParamLimits

0xe8b5,	// (0x0009c6f5) popup_cale_events_window_g1

0xe8d5,	// (0x0009c715) popup_cale_events_window_g2_ParamLimits

0xe8d5,	// (0x0009c715) popup_cale_events_window_g2

0x0001,

0xf367,	// (0x0009d1a7) popup_cale_events_window_g_ParamLimits

0xf367,	// (0x0009d1a7) popup_cale_events_window_g

0xe8f5,	// (0x0009c735) popup_cale_events_window_t1_ParamLimits

0xe8f5,	// (0x0009c735) popup_cale_events_window_t1

0xe907,	// (0x0009c747) popup_cale_events_window_t2_ParamLimits

0xe907,	// (0x0009c747) popup_cale_events_window_t2

0xe945,	// (0x0009c785) popup_cale_events_window_t3_ParamLimits

0xe945,	// (0x0009c785) popup_cale_events_window_t3

0xe97f,	// (0x0009c7bf) popup_cale_events_window_t4_ParamLimits

0xe97f,	// (0x0009c7bf) popup_cale_events_window_t4

0x0003,

0xf36c,	// (0x0009d1ac) popup_cale_events_window_t_ParamLimits

0xf36c,	// (0x0009d1ac) popup_cale_events_window_t

0x2ad9,	// (0x00090919) call_type_pane

0x2ae9,	// (0x00090929) popup_call_status_window_g1

0x2afd,	// (0x0009093d) popup_call_status_window_g2

0x2b11,	// (0x00090951) popup_call_status_window_g3

0x0002,

0xf375,	// (0x0009d1b5) popup_call_status_window_g

0xe9b5,	// (0x0009c7f5) call_type_pane_g1

0xe9be,	// (0x0009c7fe) call_type_pane_g2

0x0001,

0xf37c,	// (0x0009d1bc) call_type_pane_g

0xde89,	// (0x0009bcc9) bg_popup_sub_pane_cp02

0xe9c7,	// (0x0009c807) listscroll_popup_wml_pane

0xe9cf,	// (0x0009c80f) list_wml_pane

0xe9d9,	// (0x0009c819) scroll_pane_cp013

0xe9e4,	// (0x0009c824) list_single_graphic_popup_wml_pane_ParamLimits

0xe9e4,	// (0x0009c824) list_single_graphic_popup_wml_pane

0xe20c,	// (0x0009c04c) list_single_graphic_popup_wml_pane_g1

0xe9f8,	// (0x0009c838) list_single_graphic_popup_wml_pane_g2

0x0001,

0xf381,	// (0x0009d1c1) list_single_graphic_popup_wml_pane_g

0xea00,	// (0x0009c840) list_single_graphic_popup_wml_pane_t1

0xea16,	// (0x0009c856) aid_call_pane

0xe0dc,	// (0x0009bf1c) popup_clock_analogue_window_g1

0xe0dc,	// (0x0009bf1c) popup_clock_analogue_window_g2

0x9faa,	// (0x00097dea) popup_clock_analogue_window_g3

0x9faa,	// (0x00097dea) popup_clock_analogue_window_g4

0xe20c,	// (0x0009c04c) popup_clock_analogue_window_g5

0x0004,

0xf386,	// (0x0009d1c6) popup_clock_analogue_window_g

0x9fb2,	// (0x00097df2) popup_clock_analogue_window_t1

0x9fc0,	// (0x00097e00) clock_digital_number_pane_ParamLimits

0x9fc0,	// (0x00097e00) clock_digital_number_pane

0x9fcc,	// (0x00097e0c) clock_digital_number_pane_cp02_ParamLimits

0x9fcc,	// (0x00097e0c) clock_digital_number_pane_cp02

0x9fd8,	// (0x00097e18) clock_digital_number_pane_cp03_ParamLimits

0x9fd8,	// (0x00097e18) clock_digital_number_pane_cp03

0x9fe4,	// (0x00097e24) clock_digital_number_pane_cp04_ParamLimits

0x9fe4,	// (0x00097e24) clock_digital_number_pane_cp04

0x9ff4,	// (0x00097e34) clock_digital_separator_pane_ParamLimits

0x9ff4,	// (0x00097e34) clock_digital_separator_pane

0xa000,	// (0x00097e40) popup_clock_digital_window_t1

0xe20c,	// (0x0009c04c) clock_digital_number_pane_g1

0xe20c,	// (0x0009c04c) clock_digital_number_pane_g2

0x0001,

0xf2f4,	// (0x0009d134) clock_digital_number_pane_g

0xe20c,	// (0x0009c04c) clock_digital_separator_pane_g1

0xe20c,	// (0x0009c04c) clock_digital_separator_pane_g2

0x0001,

0xf2f4,	// (0x0009d134) clock_digital_separator_pane_g

0xde89,	// (0x0009bcc9) bg_popup_window_pane_cp04

0xea1e,	// (0x0009c85e) heading_pane_cp03

0xea26,	// (0x0009c866) listscroll_popup_gms_pane

0xea2e,	// (0x0009c86e) grid_large_graphic_popup_pane

0xea38,	// (0x0009c878) listscroll_popup_gms_pane_g1

0xea40,	// (0x0009c880) listscroll_popup_gms_pane_g2

0x0001,

0xf391,	// (0x0009d1d1) listscroll_popup_gms_pane_g

0xe4fd,	// (0x0009c33d) scroll_pane_cp014

0x2b20,	// (0x00090960) cell_large_graphic_popup_pane_ParamLimits

0x2b20,	// (0x00090960) cell_large_graphic_popup_pane

0x2b38,	// (0x00090978) cell_large_graphic_popup_pane_g1_ParamLimits

0x2b38,	// (0x00090978) cell_large_graphic_popup_pane_g1

0xea48,	// (0x0009c888) cell_large_graphic_popup_pane_g2_ParamLimits

0xea48,	// (0x0009c888) cell_large_graphic_popup_pane_g2

0xea54,	// (0x0009c894) cell_large_graphic_popup_pane_g3_ParamLimits

0xea54,	// (0x0009c894) cell_large_graphic_popup_pane_g3

0xea61,	// (0x0009c8a1) cell_large_graphic_popup_pane_g4_ParamLimits

0xea61,	// (0x0009c8a1) cell_large_graphic_popup_pane_g4

0x0003,

0xf396,	// (0x0009d1d6) cell_large_graphic_popup_pane_g_ParamLimits

0xf396,	// (0x0009d1d6) cell_large_graphic_popup_pane_g

0xea71,	// (0x0009c8b1) grid_highlight_pane_cp010

0xe20c,	// (0x0009c04c) bg_popup_call_pane_g1

0xea7b,	// (0x0009c8bb) list_single_graphic_popup_conf_pane_ParamLimits

0xea7b,	// (0x0009c8bb) list_single_graphic_popup_conf_pane

0xea8e,	// (0x0009c8ce) list_highlight_pane_cp01

0xea97,	// (0x0009c8d7) list_single_graphic_popup_conf_pane_g1

0xea9f,	// (0x0009c8df) list_single_graphic_popup_conf_pane_g2

0x0001,

0xf39f,	// (0x0009d1df) list_single_graphic_popup_conf_pane_g

0xeaa7,	// (0x0009c8e7) list_single_graphic_popup_conf_pane_t1

0xeab5,	// (0x0009c8f5) linegrid_cams_pane_g1

0x2b44,	// (0x00090984) linegrid_cams_pane_g2

0xe338,	// (0x0009c178) linegrid_cams_pane_g3

0xeabe,	// (0x0009c8fe) linegrid_cams_pane_g4

0x2b4d,	// (0x0009098d) linegrid_cams_pane_g5

0x2b56,	// (0x00090996) linegrid_cams_pane_g6

0xe341,	// (0x0009c181) linegrid_cams_pane_g7

0x0006,

0xf3a4,	// (0x0009d1e4) linegrid_cams_pane_g

0xeac7,	// (0x0009c907) popup_clock_analogue_window

0xeac7,	// (0x0009c907) popup_clock_digital_window

0xde89,	// (0x0009bcc9) popup_phob_thumbnail_window

0xe20c,	// (0x0009c04c) call_video_uplink_pane_g1

0xead0,	// (0x0009c910) call_video_uplink_pane_g2

0x0001,

0xf3b3,	// (0x0009d1f3) call_video_uplink_pane_g

0xead8,	// (0x0009c918) video_uplink_pane

0xeae0,	// (0x0009c920) mce_image_pane_g1

0x2b61,	// (0x000909a1) mce_image_pane_g2

0x2b6b,	// (0x000909ab) mce_image_pane_g3

0x2b73,	// (0x000909b3) mce_image_pane_g4

0x2b7b,	// (0x000909bb) mce_image_pane_g5

0x0004,

0xf3b8,	// (0x0009d1f8) mce_image_pane_g

0xeaea,	// (0x0009c92a) control_top_pane_stacon_cp01_ParamLimits

0xeaea,	// (0x0009c92a) control_top_pane_stacon_cp01

0xeafe,	// (0x0009c93e) uni_indicator_pane_stacon_cp01_ParamLimits

0xeafe,	// (0x0009c93e) uni_indicator_pane_stacon_cp01

0xeb0f,	// (0x0009c94f) bg_popup_sub_pane_cp03

0x2b83,	// (0x000909c3) chi_dic_find_pane

0x2b8b,	// (0x000909cb) listscroll_chi_dic_pane

0x2b94,	// (0x000909d4) main_pane_chidic_g1

0xeb19,	// (0x0009c959) chi_dic_find_pane_t1

0xeb27,	// (0x0009c967) find_chidic_pane

0xeb30,	// (0x0009c970) chi_dic_list_pane_ParamLimits

0xeb30,	// (0x0009c970) chi_dic_list_pane

0xeb41,	// (0x0009c981) scroll_pane_cp020

0xeb49,	// (0x0009c989) find_chidic_pane_t1

0xde89,	// (0x0009bcc9) input_focus_pane_cp06

0x2ba7,	// (0x000909e7) list_chi_dic_pane_ParamLimits

0x2ba7,	// (0x000909e7) list_chi_dic_pane

0x2bb9,	// (0x000909f9) list_chi_dic_pane_t1_ParamLimits

0x2bb9,	// (0x000909f9) list_chi_dic_pane_t1

0xde89,	// (0x0009bcc9) list_highlight_pane_cp020

0xeb58,	// (0x0009c998) bg_cale_heading_pane_g1

0x2bcc,	// (0x00090a0c) bg_cale_heading_pane_g2

0x2bd4,	// (0x00090a14) bg_cale_heading_pane_g3

0x2bdc,	// (0x00090a1c) bg_cale_heading_pane_g4

0x2be6,	// (0x00090a26) bg_cale_heading_pane_g5

0x2bf0,	// (0x00090a30) bg_cale_heading_pane_g6

0x2bf8,	// (0x00090a38) bg_cale_heading_pane_g7

0x2c00,	// (0x00090a40) bg_cale_heading_pane_g8

0x2c0a,	// (0x00090a4a) bg_cale_heading_pane_g9

0x0008,

0xf3c3,	// (0x0009d203) bg_cale_heading_pane_g

0xeb58,	// (0x0009c998) bg_cale_side_pane_g1

0x2c14,	// (0x00090a54) bg_cale_side_pane_g2

0x2c1c,	// (0x00090a5c) bg_cale_side_pane_g3

0x2c24,	// (0x00090a64) bg_cale_side_pane_g4

0x2c2c,	// (0x00090a6c) bg_cale_side_pane_g5

0x2c34,	// (0x00090a74) bg_cale_side_pane_g6

0x2c3c,	// (0x00090a7c) bg_cale_side_pane_g7

0x2c44,	// (0x00090a84) bg_cale_side_pane_g8

0x2c4c,	// (0x00090a8c) bg_cale_side_pane_g9

0x0008,

0xf3d6,	// (0x0009d216) bg_cale_side_pane_g

0x2c54,	// (0x00090a94) popup_call_status_window_ParamLimits

0x2c54,	// (0x00090a94) popup_call_status_window

0xeb60,	// (0x0009c9a0) stacon_top_pane

0xeb68,	// (0x0009c9a8) status_pane_ParamLimits

0xeb68,	// (0x0009c9a8) status_pane

0xeb7d,	// (0x0009c9bd) status_small_pane

0xeb85,	// (0x0009c9c5) control_pane

0xde89,	// (0x0009bcc9) stacon_bottom_pane

0xeb8d,	// (0x0009c9cd) list_single_mce_smart_pane_t1_ParamLimits

0xeb8d,	// (0x0009c9cd) list_single_mce_smart_pane_t1

0xeba0,	// (0x0009c9e0) list_single_mce_smart_pane_t2_ParamLimits

0xeba0,	// (0x0009c9e0) list_single_mce_smart_pane_t2

0x0001,

0xf3e9,	// (0x0009d229) list_single_mce_smart_pane_t_ParamLimits

0xf3e9,	// (0x0009d229) list_single_mce_smart_pane_t

0x2c9d,	// (0x00090add) compass_pane

0x2ca6,	// (0x00090ae6) main_location2_pane_t1

0x2cb8,	// (0x00090af8) main_location2_pane_t2

0x2cca,	// (0x00090b0a) main_location2_pane_t3

0x0003,

0xf3ee,	// (0x0009d22e) main_location2_pane_t

0xebbf,	// (0x0009c9ff) compass_pane_g1_ParamLimits

0xebbf,	// (0x0009c9ff) compass_pane_g1

0x2d0e,	// (0x00090b4e) compass_pane_t1

0x2d1d,	// (0x00090b5d) compass_pane_t2

0x0005,

0xf3f7,	// (0x0009d237) compass_pane_t

0x2d64,	// (0x00090ba4) text_secondary_cp61

0xebd3,	// (0x0009ca13) navi_pane_cams_g5

0xebf6,	// (0x0009ca36) navi_pane_im_t1

0xec04,	// (0x0009ca44) navi_pane_mp_g1_ParamLimits

0xec04,	// (0x0009ca44) navi_pane_mp_g1

0xec18,	// (0x0009ca58) navi_pane_mp_g2_ParamLimits

0xec18,	// (0x0009ca58) navi_pane_mp_g2

0xec24,	// (0x0009ca64) navi_pane_mp_g3_ParamLimits

0xec24,	// (0x0009ca64) navi_pane_mp_g3

0x0002,

0xf40b,	// (0x0009d24b) navi_pane_mp_g_ParamLimits

0xf40b,	// (0x0009d24b) navi_pane_mp_g

0xec30,	// (0x0009ca70) navi_pane_mp_t1

0xec3e,	// (0x0009ca7e) navi_pane_mp_t2

0x0002,

0xf412,	// (0x0009d252) navi_pane_mp_t

0xec88,	// (0x0009cac8) navi_pane_vt_g1

0xec30,	// (0x0009ca70) navi_pane_vt_t1

0xec90,	// (0x0009cad0) navi_slider_pane

0xec98,	// (0x0009cad8) zooming_pane

0xeca0,	// (0x0009cae0) navi_slider_pane_g1

0xa01d,	// (0x00097e5d) navi_slider_pane_g2

0x0006,

0xf419,	// (0x0009d259) navi_slider_pane_g

0xecc4,	// (0x0009cb04) aid_levels_zoom

0xeccc,	// (0x0009cb0c) zooming_pane_g1

0xecd4,	// (0x0009cb14) zooming_pane_g2

0xecd4,	// (0x0009cb14) zooming_pane_g3

0x0002,

0xf428,	// (0x0009d268) zooming_pane_g

0xecdc,	// (0x0009cb1c) level_10_zoom

0xece5,	// (0x0009cb25) level_11_zoom

0xecee,	// (0x0009cb2e) level_1_zoom

0xecf7,	// (0x0009cb37) level_2_zoom

0xed00,	// (0x0009cb40) level_3_zoom

0xed09,	// (0x0009cb49) level_4_zoom

0xed12,	// (0x0009cb52) level_5_zoom

0xed1b,	// (0x0009cb5b) level_6_zoom

0xed24,	// (0x0009cb64) level_7_zoom

0xed2d,	// (0x0009cb6d) level_8_zoom

0xed36,	// (0x0009cb76) level_9_zoom

0xed47,	// (0x0009cb87) popup_phob_thumbnail_window_g1

0xed4f,	// (0x0009cb8f) popup_phob_thumbnail_window_g2

0x0001,

0xf42f,	// (0x0009d26f) popup_phob_thumbnail_window_g

0xa5ef,	// (0x0009842f) level_1_location

0xa5f7,	// (0x00098437) level_2_location

0xa5ff,	// (0x0009843f) level_3_location

0xa607,	// (0x00098447) level_4_location

0xec98,	// (0x0009cad8) level_5_location

0x2e9f,	// (0x00090cdf) mce_icon_pane_g1

0x2ea7,	// (0x00090ce7) mce_icon_pane_g2

0x0001,

0xf434,	// (0x0009d274) mce_icon_pane_g

0x2eaf,	// (0x00090cef) main_mup_pane_g1_ParamLimits

0x2eaf,	// (0x00090cef) main_mup_pane_g1

0x2ec5,	// (0x00090d05) main_mup_pane_g2_ParamLimits

0x2ec5,	// (0x00090d05) main_mup_pane_g2

0x2edd,	// (0x00090d1d) main_mup_pane_g3_ParamLimits

0x2edd,	// (0x00090d1d) main_mup_pane_g3

0x2ef5,	// (0x00090d35) main_mup_pane_g4_ParamLimits

0x2ef5,	// (0x00090d35) main_mup_pane_g4

0x2f0d,	// (0x00090d4d) main_mup_pane_g5_ParamLimits

0x2f0d,	// (0x00090d4d) main_mup_pane_g5

0x2f29,	// (0x00090d69) main_mup_pane_g6_ParamLimits

0x2f29,	// (0x00090d69) main_mup_pane_g6

0x2f41,	// (0x00090d81) main_mup_pane_g7_ParamLimits

0x2f41,	// (0x00090d81) main_mup_pane_g7

0x2f59,	// (0x00090d99) main_mup_pane_g8_ParamLimits

0x2f59,	// (0x00090d99) main_mup_pane_g8

0x2f73,	// (0x00090db3) main_mup_pane_g9_ParamLimits

0x2f73,	// (0x00090db3) main_mup_pane_g9

0x2f8d,	// (0x00090dcd) main_mup_pane_g10_ParamLimits

0x2f8d,	// (0x00090dcd) main_mup_pane_g10

0x2fa7,	// (0x00090de7) main_mup_pane_g11_ParamLimits

0x2fa7,	// (0x00090de7) main_mup_pane_g11

0x2fbb,	// (0x00090dfb) main_mup_pane_g12_ParamLimits

0x2fbb,	// (0x00090dfb) main_mup_pane_g12

0x2fd1,	// (0x00090e11) main_mup_pane_g13_ParamLimits

0x2fd1,	// (0x00090e11) main_mup_pane_g13

0x000c,

0xf439,	// (0x0009d279) main_mup_pane_g_ParamLimits

0xf439,	// (0x0009d279) main_mup_pane_g

0x2fe5,	// (0x00090e25) main_mup_pane_t1_ParamLimits

0x2fe5,	// (0x00090e25) main_mup_pane_t1

0x2fff,	// (0x00090e3f) main_mup_pane_t2_ParamLimits

0x2fff,	// (0x00090e3f) main_mup_pane_t2

0x3017,	// (0x00090e57) main_mup_pane_t3_ParamLimits

0x3017,	// (0x00090e57) main_mup_pane_t3

0x302f,	// (0x00090e6f) main_mup_pane_t4_ParamLimits

0x302f,	// (0x00090e6f) main_mup_pane_t4

0x304d,	// (0x00090e8d) main_mup_pane_t5_ParamLimits

0x304d,	// (0x00090e8d) main_mup_pane_t5

0x3062,	// (0x00090ea2) main_mup_pane_t6_ParamLimits

0x3062,	// (0x00090ea2) main_mup_pane_t6

0x0005,

0xf454,	// (0x0009d294) main_mup_pane_t_ParamLimits

0xf454,	// (0x0009d294) main_mup_pane_t

0x3074,	// (0x00090eb4) mup_progress_pane_ParamLimits

0x3074,	// (0x00090eb4) mup_progress_pane

0x3080,	// (0x00090ec0) mup_visualizer_pane_ParamLimits

0x3080,	// (0x00090ec0) mup_visualizer_pane

0x30b0,	// (0x00090ef0) mup_volume_pane_ParamLimits

0x30b0,	// (0x00090ef0) mup_volume_pane

0xec4c,	// (0x0009ca8c) mup_visualizer_pane_g1_ParamLimits

0xec4c,	// (0x0009ca8c) mup_visualizer_pane_g1

0xec4c,	// (0x0009ca8c) mup_visualizer_pane_g2_ParamLimits

0xec4c,	// (0x0009ca8c) mup_visualizer_pane_g2

0xebbf,	// (0x0009c9ff) mup_visualizer_pane_g3_ParamLimits

0xebbf,	// (0x0009c9ff) mup_visualizer_pane_g3

0x0002,

0xf461,	// (0x0009d2a1) mup_visualizer_pane_g_ParamLimits

0xf461,	// (0x0009d2a1) mup_visualizer_pane_g

0xe20c,	// (0x0009c04c) mup_volume_pane_g1

0xed5f,	// (0x0009cb9f) mup_volume_pane_g2

0x0001,

0x0008,	// (0x0008de48) mup_volume_pane_g

0xe20c,	// (0x0009c04c) mup_progress_pane_g1

0xed68,	// (0x0009cba8) mup_progress_pane_g2

0xed71,	// (0x0009cbb1) mup_progress_pane_g3

0x0002,

0x000d,	// (0x0008de4d) mup_progress_pane_g

0xde89,	// (0x0009bcc9) bg_popup_window_pane_cp05

0xed7a,	// (0x0009cbba) heading_pane_cp02_ParamLimits

0xed7a,	// (0x0009cbba) heading_pane_cp02

0xed94,	// (0x0009cbd4) list_popup_blid_pane

0xed9c,	// (0x0009cbdc) list_blid_sat_info_pane_ParamLimits

0xed9c,	// (0x0009cbdc) list_blid_sat_info_pane

0xedaf,	// (0x0009cbef) list_blid_sat_info_pane_g1

0xedb7,	// (0x0009cbf7) list_blid_sat_info_pane_t1

0x31c6,	// (0x00091006) mup_equalizer_pane_ParamLimits

0x31c6,	// (0x00091006) mup_equalizer_pane

0x31df,	// (0x0009101f) mup_equalizer_pane_cp1_ParamLimits

0x31df,	// (0x0009101f) mup_equalizer_pane_cp1

0x31fc,	// (0x0009103c) mup_equalizer_pane_cp2_ParamLimits

0x31fc,	// (0x0009103c) mup_equalizer_pane_cp2

0x3219,	// (0x00091059) mup_equalizer_pane_cp3_ParamLimits

0x3219,	// (0x00091059) mup_equalizer_pane_cp3

0x323a,	// (0x0009107a) mup_equalizer_pane_cp4_ParamLimits

0x323a,	// (0x0009107a) mup_equalizer_pane_cp4

0x325b,	// (0x0009109b) mup_equalizer_pane_cp5

0x326f,	// (0x000910af) mup_equalizer_pane_cp6

0x3283,	// (0x000910c3) mup_equalizer_pane_cp7

0xa50d,	// (0x0009834d) bg_popup_call_poc_act_pane_g9

0xa515,	// (0x00098355) bg_popup_call_poc_act_pane_g10

0xa51d,	// (0x0009835d) bg_popup_call_poc_act_pane_g11

0x000a,

0xe0e4,	// (0x0009bf24) mup_scale_pane

0xe20c,	// (0x0009c04c) mup_scale_pane_g1

0xedc5,	// (0x0009cc05) mup_scale_pane_g2

0x0006,

0xf47d,	// (0x0009d2bd) mup_scale_pane_g

0xede9,	// (0x0009cc29) msg_data_pane

0xedf1,	// (0x0009cc31) scroll_pane_cp017

0x32a9,	// (0x000910e9) bg_list_pane_cp04_ParamLimits

0x32a9,	// (0x000910e9) bg_list_pane_cp04

0xedf9,	// (0x0009cc39) msg_data_pane_g1

0x32c9,	// (0x00091109) msg_data_pane_g2

0x32d3,	// (0x00091113) msg_data_pane_g3

0x32db,	// (0x0009111b) msg_data_pane_g4

0x32e3,	// (0x00091123) msg_data_pane_g5

0x32eb,	// (0x0009112b) msg_data_pane_g6

0x32f3,	// (0x00091133) msg_data_pane_g7

0x0006,

0xf48c,	// (0x0009d2cc) msg_data_pane_g

0x32fb,	// (0x0009113b) msg_text_pane_ParamLimits

0x32fb,	// (0x0009113b) msg_text_pane

0x331d,	// (0x0009115d) qrid_highlight_pane_cp011_ParamLimits

0x331d,	// (0x0009115d) qrid_highlight_pane_cp011

0xde89,	// (0x0009bcc9) msg_body_pane

0xde89,	// (0x0009bcc9) msg_header_pane

0xee0a,	// (0x0009cc4a) input_focus_pane_cp07

0x3341,	// (0x00091181) msg_header_pane_t1_ParamLimits

0x3341,	// (0x00091181) msg_header_pane_t1

0x3355,	// (0x00091195) msg_header_pane_t2_ParamLimits

0x3355,	// (0x00091195) msg_header_pane_t2

0x0001,

0xf4a0,	// (0x0009d2e0) msg_header_pane_t_ParamLimits

0xf4a0,	// (0x0009d2e0) msg_header_pane_t

0xee1f,	// (0x0009cc5f) msg_body_pane_g1

0x3367,	// (0x000911a7) msg_body_pane_t1_ParamLimits

0x3367,	// (0x000911a7) msg_body_pane_t1

0x3398,	// (0x000911d8) msg_body_pane_t2_ParamLimits

0x3398,	// (0x000911d8) msg_body_pane_t2

0x33aa,	// (0x000911ea) msg_body_pane_t3_ParamLimits

0x33aa,	// (0x000911ea) msg_body_pane_t3

0x0002,

0xf4a5,	// (0x0009d2e5) msg_body_pane_t_ParamLimits

0xf4a5,	// (0x0009d2e5) msg_body_pane_t

0x33f6,	// (0x00091236) main_viewer_pane_g1_ParamLimits

0x33f6,	// (0x00091236) main_viewer_pane_g1

0x3404,	// (0x00091244) main_viewer_pane_g2_ParamLimits

0x3404,	// (0x00091244) main_viewer_pane_g2

0x3412,	// (0x00091252) main_viewer_pane_g3_ParamLimits

0x3412,	// (0x00091252) main_viewer_pane_g3

0x3421,	// (0x00091261) main_viewer_pane_g4_ParamLimits

0x3421,	// (0x00091261) main_viewer_pane_g4

0xa047,	// (0x00097e87) main_viewer_pane_g5_ParamLimits

0xa047,	// (0x00097e87) main_viewer_pane_g5

0xa047,	// (0x00097e87) main_viewer_pane_g7_ParamLimits

0xa047,	// (0x00097e87) main_viewer_pane_g7

0xe852,	// (0x0009c692) main_viewer_pane_g8_ParamLimits

0xe852,	// (0x0009c692) main_viewer_pane_g8

0x0007,

0xf4b5,	// (0x0009d2f5) main_viewer_pane_g_ParamLimits

0xf4b5,	// (0x0009d2f5) main_viewer_pane_g

0xee27,	// (0x0009cc67) viewer_content_pane_ParamLimits

0xee27,	// (0x0009cc67) viewer_content_pane

0x345d,	// (0x0009129d) main_postcard_pane_g1_ParamLimits

0x345d,	// (0x0009129d) main_postcard_pane_g1

0x3473,	// (0x000912b3) main_postcard_pane_g2_ParamLimits

0x3473,	// (0x000912b3) main_postcard_pane_g2

0x3489,	// (0x000912c9) main_postcard_pane_g3_ParamLimits

0x3489,	// (0x000912c9) main_postcard_pane_g3

0x0005,

0xf4c6,	// (0x0009d306) main_postcard_pane_g_ParamLimits

0xf4c6,	// (0x0009d306) main_postcard_pane_g

0x34a0,	// (0x000912e0) main_postcard_pane_g4

0xa722,	// (0x00098562) smil_status_volume_pane_g2

0x34e3,	// (0x00091323) postcard_pane_ParamLimits

0x34e3,	// (0x00091323) postcard_pane

0xee35,	// (0x0009cc75) postcard_pane_g1_ParamLimits

0xee35,	// (0x0009cc75) postcard_pane_g1

0x3525,	// (0x00091365) postcard_pane_g2_ParamLimits

0x3525,	// (0x00091365) postcard_pane_g2

0x3531,	// (0x00091371) postcard_pane_g3_ParamLimits

0x3531,	// (0x00091371) postcard_pane_g3

0xee43,	// (0x0009cc83) postcard_pane_g4_ParamLimits

0xee43,	// (0x0009cc83) postcard_pane_g4

0x353d,	// (0x0009137d) postcard_pane_g5_ParamLimits

0x353d,	// (0x0009137d) postcard_pane_g5

0x3552,	// (0x00091392) postcard_pane_g6_ParamLimits

0x3552,	// (0x00091392) postcard_pane_g6

0xee35,	// (0x0009cc75) postcard_pane_g7_ParamLimits

0xee35,	// (0x0009cc75) postcard_pane_g7

0x0006,

0xf4d3,	// (0x0009d313) postcard_pane_g_ParamLimits

0xf4d3,	// (0x0009d313) postcard_pane_g

0x3566,	// (0x000913a6) main_mp2_pane_g1_ParamLimits

0x3566,	// (0x000913a6) main_mp2_pane_g1

0x3572,	// (0x000913b2) main_mp2_pane_g2_ParamLimits

0x3572,	// (0x000913b2) main_mp2_pane_g2

0x357e,	// (0x000913be) main_mp2_pane_g3_ParamLimits

0x357e,	// (0x000913be) main_mp2_pane_g3

0x0002,

0xf4e2,	// (0x0009d322) main_mp2_pane_g_ParamLimits

0xf4e2,	// (0x0009d322) main_mp2_pane_g

0x358a,	// (0x000913ca) main_mp2_pane_t1_ParamLimits

0x358a,	// (0x000913ca) main_mp2_pane_t1

0x359f,	// (0x000913df) main_mp2_pane_t2_ParamLimits

0x359f,	// (0x000913df) main_mp2_pane_t2

0x35b1,	// (0x000913f1) main_mp2_pane_t3_ParamLimits

0x35b1,	// (0x000913f1) main_mp2_pane_t3

0x0002,

0xf4e9,	// (0x0009d329) main_mp2_pane_t_ParamLimits

0xf4e9,	// (0x0009d329) main_mp2_pane_t

0xee51,	// (0x0009cc91) pec_content_pane_ParamLimits

0xee51,	// (0x0009cc91) pec_content_pane

0xe4fd,	// (0x0009c33d) scroll_pane_cp015

0xee63,	// (0x0009cca3) pec_attribute_pane_ParamLimits

0xee63,	// (0x0009cca3) pec_attribute_pane

0x35c3,	// (0x00091403) pec_content_pane_g1_ParamLimits

0x35c3,	// (0x00091403) pec_content_pane_g1

0xee73,	// (0x0009ccb3) pec_content_pane_t1_ParamLimits

0xee73,	// (0x0009ccb3) pec_content_pane_t1

0xee85,	// (0x0009ccc5) pec_content_pane_t2_ParamLimits

0xee85,	// (0x0009ccc5) pec_content_pane_t2

0x0001,

0x009c,	// (0x0008dedc) pec_content_pane_t_ParamLimits

0x009c,	// (0x0008dedc) pec_content_pane_t

0x35cf,	// (0x0009140f) list_single_graphic_pane_cp01_ParamLimits

0x35cf,	// (0x0009140f) list_single_graphic_pane_cp01

0xe0e4,	// (0x0009bf24) bg_popup_sub_pane_cp04

0xee97,	// (0x0009ccd7) popup_mup_playback_window_g1

0xeea3,	// (0x0009cce3) popup_mup_playback_window_t1

0xeeb8,	// (0x0009ccf8) popup_mup_playback_window_t2

0x0001,

0x00a1,	// (0x0008dee1) popup_mup_playback_window_t

0xeeef,	// (0x0009cd2f) main_image_pane_g1_ParamLimits

0xeeef,	// (0x0009cd2f) main_image_pane_g1

0xef32,	// (0x0009cd72) scroll_pane_cp018_ParamLimits

0xef32,	// (0x0009cd72) scroll_pane_cp018

0xef4a,	// (0x0009cd8a) scroll_pane_cp016_ParamLimits

0xef4a,	// (0x0009cd8a) scroll_pane_cp016

0x369c,	// (0x000914dc) smil2_image_pane_ParamLimits

0x369c,	// (0x000914dc) smil2_image_pane

0x36cc,	// (0x0009150c) smil2_root_pane_ParamLimits

0x36cc,	// (0x0009150c) smil2_root_pane

0x3704,	// (0x00091544) smil2_text_pane_ParamLimits

0x3704,	// (0x00091544) smil2_text_pane

0xde89,	// (0x0009bcc9) bg_list_pane_cp06

0xef86,	// (0x0009cdc6) grid_radio_pane

0xde89,	// (0x0009bcc9) bg_popup_window_pane_cp06

0xef8e,	// (0x0009cdce) main_fmradio_pane_t1

0xea1e,	// (0x0009c85e) heading_pane_cp04

0xef9c,	// (0x0009cddc) main_fmradio_pane_t2

0xa525,	// (0x00098365) popup_cale_lunar_info_window_g1

0xefaa,	// (0x0009cdea) main_fmradio_pane_t3

0xa52d,	// (0x0009836d) popup_cale_lunar_info_window_g2

0xefb8,	// (0x0009cdf8) main_fmradio_pane_t4

0x0001,

0xefc6,	// (0x0009ce06) main_fmradio_pane_t5

0x0004,

0xf5b4,	// (0x0009d3f4) popup_cale_lunar_info_window_g

0x00b6,	// (0x0008def6) main_fmradio_pane_t

0xefee,	// (0x0009ce2e) wait_bar_pane_cp03

0xeff6,	// (0x0009ce36) cell_fmradio_pane_ParamLimits

0xeff6,	// (0x0009ce36) cell_fmradio_pane

0xee35,	// (0x0009cc75) cell_fmradio_pane_g1_ParamLimits

0xee35,	// (0x0009cc75) cell_fmradio_pane_g1

0xde89,	// (0x0009bcc9) grid_highlight_pane_cp011

0xf009,	// (0x0009ce49) poc_content_pane_ParamLimits

0xf009,	// (0x0009ce49) poc_content_pane

0xf01b,	// (0x0009ce5b) scroll_pane_cp019

0x3784,	// (0x000915c4) popup_call_poc_act_window_ParamLimits

0x3784,	// (0x000915c4) popup_call_poc_act_window

0x37a8,	// (0x000915e8) popup_call_poc_inact_window_ParamLimits

0x37a8,	// (0x000915e8) popup_call_poc_inact_window

0xf58b,	// (0x0009d3cb) bg_popup_call_poc_act_pane_g

0xa49d,	// (0x000982dd) bg_popup_call_poc_inact_pane_g1

0xa4a5,	// (0x000982e5) bg_popup_call_poc_inact_pane_g2

0xf023,	// (0x0009ce63) popup_call_poc_act_window_g2

0xa4ad,	// (0x000982ed) bg_popup_call_poc_inact_pane_g3

0xa4b5,	// (0x000982f5) bg_popup_call_poc_inact_pane_g4

0xa4bd,	// (0x000982fd) bg_popup_call_poc_inact_pane_g5

0xf02b,	// (0x0009ce6b) popup_call_poc_act_window_t1_ParamLimits

0xf02b,	// (0x0009ce6b) popup_call_poc_act_window_t1

0xf053,	// (0x0009ce93) popup_call_poc_act_window_t2_ParamLimits

0xf053,	// (0x0009ce93) popup_call_poc_act_window_t2

0xf07b,	// (0x0009cebb) popup_call_poc_act_window_t3_ParamLimits

0xf07b,	// (0x0009cebb) popup_call_poc_act_window_t3

0xf0a3,	// (0x0009cee3) popup_call_poc_act_window_t4_ParamLimits

0xf0a3,	// (0x0009cee3) popup_call_poc_act_window_t4

0x0003,

0xf500,	// (0x0009d340) popup_call_poc_act_window_t_ParamLimits

0xf500,	// (0x0009d340) popup_call_poc_act_window_t

0xa4c5,	// (0x00098305) bg_popup_call_poc_inact_pane_g6

0xa4cd,	// (0x0009830d) bg_popup_call_poc_inact_pane_g7

0xa4d5,	// (0x00098315) bg_popup_call_poc_inact_pane_g8

0xf0b5,	// (0x0009cef5) popup_call_poc_inact_window_g2

0xa4dd,	// (0x0009831d) bg_popup_call_poc_inact_pane_g9

0x0008,

0xf578,	// (0x0009d3b8) bg_popup_call_poc_inact_pane_g

0xf0bd,	// (0x0009cefd) popup_call_poc_inact_window_t1_ParamLimits

0xf0bd,	// (0x0009cefd) popup_call_poc_inact_window_t1

0xf0d2,	// (0x0009cf12) popup_call_poc_inact_window_t2_ParamLimits

0xf0d2,	// (0x0009cf12) popup_call_poc_inact_window_t2

0x37c1,	// (0x00091601) popup_call_poc_inact_window_t3_ParamLimits

0x37c1,	// (0x00091601) popup_call_poc_inact_window_t3

0x0002,

0xf509,	// (0x0009d349) popup_call_poc_inact_window_t_ParamLimits

0xf509,	// (0x0009d349) popup_call_poc_inact_window_t

0xa695,	// (0x000984d5) context_pane_ParamLimits

0x49af,	// (0x000927ef) signal_pane_ParamLimits

0xec98,	// (0x0009cad8) main_call2_pane

0xa683,	// (0x000984c3) popup_phob_thumbnail2_window_ParamLimits

0xa683,	// (0x000984c3) popup_phob_thumbnail2_window

0xa02f,	// (0x00097e6f) aid_hotspot_pointer_arrow_pane

0xa037,	// (0x00097e77) aid_hotspot_pointer_hand_pane

0x44c5,	// (0x00092305) phob_pre_status_pane_g5

0x1801,	// (0x0008f641) cams_zoom_pane_ParamLimits

0x1810,	// (0x0008f650) image_vga_pane_ParamLimits

0x182a,	// (0x0008f66a) main_camera_pane_g1_ParamLimits

0x183c,	// (0x0008f67c) main_camera_pane_g2_ParamLimits

0x184c,	// (0x0008f68c) main_camera_pane_g3_ParamLimits

0x185c,	// (0x0008f69c) main_camera_pane_g4_ParamLimits

0x186c,	// (0x0008f6ac) main_camera_pane_g5_ParamLimits

0x187c,	// (0x0008f6bc) main_camera_pane_g6_ParamLimits

0x188e,	// (0x0008f6ce) main_camera_pane_g7_ParamLimits

0xf229,	// (0x0009d069) main_camera_pane_g_ParamLimits

0x189e,	// (0x0008f6de) main_camera_pane_t1_ParamLimits

0x18b4,	// (0x0008f6f4) main_camera_pane_t2_ParamLimits

0xf23a,	// (0x0009d07a) main_camera_pane_t_ParamLimits

0xe0e4,	// (0x0009bf24) bg_popup_preview_window_pane_cp01_ParamLimits

0xe0e4,	// (0x0009bf24) bg_popup_preview_window_pane_cp01

0x37d6,	// (0x00091616) popup_phob_thumbnail2_window_g1_ParamLimits

0x37d6,	// (0x00091616) popup_phob_thumbnail2_window_g1

0xde89,	// (0x0009bcc9) call2_cli_visual_pane

0x37fd,	// (0x0009163d) popup_call2_audio_conf_window_ParamLimits

0x37fd,	// (0x0009163d) popup_call2_audio_conf_window

0x381d,	// (0x0009165d) popup_call2_audio_first_window_ParamLimits

0x381d,	// (0x0009165d) popup_call2_audio_first_window

0x38b3,	// (0x000916f3) popup_call2_audio_in_window_ParamLimits

0x38b3,	// (0x000916f3) popup_call2_audio_in_window

0x38fb,	// (0x0009173b) popup_call2_audio_out_window_ParamLimits

0x38fb,	// (0x0009173b) popup_call2_audio_out_window

0x3965,	// (0x000917a5) popup_call2_audio_second_window_ParamLimits

0x3965,	// (0x000917a5) popup_call2_audio_second_window

0x39cb,	// (0x0009180b) popup_call2_audio_wait_window_ParamLimits

0x39cb,	// (0x0009180b) popup_call2_audio_wait_window

0xde89,	// (0x0009bcc9) bg_popup_call2_act_pane_cp03

0xe0c6,	// (0x0009bf06) list_conf_pane_cp

0x3a05,	// (0x00091845) popup_call2_audio_conf_window_t1

0xea7b,	// (0x0009c8bb) list_single_graphic_popup_conf2_pane_ParamLimits

0xea7b,	// (0x0009c8bb) list_single_graphic_popup_conf2_pane

0xea8e,	// (0x0009c8ce) list_highlight_pane_cp04

0x3a13,	// (0x00091853) list_single_graphic_popup_conf2_pane_g1

0xea9f,	// (0x0009c8df) list_single_graphic_popup_conf2_pane_g2

0x0001,

0xf510,	// (0x0009d350) list_single_graphic_popup_conf2_pane_g

0x3a1d,	// (0x0009185d) list_single_graphic_popup_conf2_pane_t1

0x3a2b,	// (0x0009186b) bg_popup_call2_act_pane_cp01_ParamLimits

0x3a2b,	// (0x0009186b) bg_popup_call2_act_pane_cp01

0x3ab5,	// (0x000918f5) call_type_pane_cp05_ParamLimits

0x3ab5,	// (0x000918f5) call_type_pane_cp05

0x3b09,	// (0x00091949) popup_call2_audio_second_window_g1_ParamLimits

0x3b09,	// (0x00091949) popup_call2_audio_second_window_g1

0x3b5d,	// (0x0009199d) popup_call2_audio_second_window_g2_ParamLimits

0x3b5d,	// (0x0009199d) popup_call2_audio_second_window_g2

0x0002,

0xf515,	// (0x0009d355) popup_call2_audio_second_window_g_ParamLimits

0xf515,	// (0x0009d355) popup_call2_audio_second_window_g

0x3bc2,	// (0x00091a02) popup_call2_audio_second_window_t1_ParamLimits

0x3bc2,	// (0x00091a02) popup_call2_audio_second_window_t1

0x3c7d,	// (0x00091abd) popup_call2_audio_second_window_t2_ParamLimits

0x3c7d,	// (0x00091abd) popup_call2_audio_second_window_t2

0x3cd0,	// (0x00091b10) popup_call2_audio_second_window_t3_ParamLimits

0x3cd0,	// (0x00091b10) popup_call2_audio_second_window_t3

0x0003,

0xf51c,	// (0x0009d35c) popup_call2_audio_second_window_t_ParamLimits

0xf51c,	// (0x0009d35c) popup_call2_audio_second_window_t

0xde89,	// (0x0009bcc9) bg_popup_call2_in_pane_cp02

0xde93,	// (0x0009bcd3) call_type_pane_cp04

0xde9b,	// (0x0009bcdb) popup_call2_audio_wait_window_g1

0xdea3,	// (0x0009bce3) popup_call2_audio_wait_window_g2

0x0001,

0xf116,	// (0x0009cf56) popup_call2_audio_wait_window_g

0xdeab,	// (0x0009bceb) popup_call2_audio_wait_window_t3

0x3dc3,	// (0x00091c03) bg_popup_call2_act_pane_ParamLimits

0x3dc3,	// (0x00091c03) bg_popup_call2_act_pane

0x3e83,	// (0x00091cc3) call_type_pane_cp03_ParamLimits

0x3e83,	// (0x00091cc3) call_type_pane_cp03

0x3ee7,	// (0x00091d27) popup_call2_audio_first_window_g1_ParamLimits

0x3ee7,	// (0x00091d27) popup_call2_audio_first_window_g1

0x3f57,	// (0x00091d97) popup_call2_audio_first_window_g2_ParamLimits

0x3f57,	// (0x00091d97) popup_call2_audio_first_window_g2

0xec4c,	// (0x0009ca8c) popup_call2_audio_first_window_g3_ParamLimits

0xec4c,	// (0x0009ca8c) popup_call2_audio_first_window_g3

0x0004,

0xf525,	// (0x0009d365) popup_call2_audio_first_window_g_ParamLimits

0xf525,	// (0x0009d365) popup_call2_audio_first_window_g

0x4035,	// (0x00091e75) popup_call2_audio_first_window_t1_ParamLimits

0x4035,	// (0x00091e75) popup_call2_audio_first_window_t1

0x4138,	// (0x00091f78) popup_call2_audio_first_window_t4_ParamLimits

0x4138,	// (0x00091f78) popup_call2_audio_first_window_t4

0x421b,	// (0x0009205b) popup_call2_audio_first_window_t5_ParamLimits

0x421b,	// (0x0009205b) popup_call2_audio_first_window_t5

0x0003,

0xf530,	// (0x0009d370) popup_call2_audio_first_window_t_ParamLimits

0xf530,	// (0x0009d370) popup_call2_audio_first_window_t

0xe0dc,	// (0x0009bf1c) bg_popup_call2_act_pane_g1

0xa535,	// (0x00098375) popup_cale_lunar_info_window_t1

0xa543,	// (0x00098383) popup_cale_lunar_info_window_t2

0xa551,	// (0x00098391) popup_cale_lunar_info_window_t3

0xde89,	// (0x0009bcc9) bg_popup_call2_bubble_pane

0x431c,	// (0x0009215c) bg_popup_call2_in_pane_cp01_ParamLimits

0x431c,	// (0x0009215c) bg_popup_call2_in_pane_cp01

0xdb65,	// (0x0009b9a5) call_type_pane_cp02

0x4364,	// (0x000921a4) popup_call2_audio_out_window_g1_ParamLimits

0x4364,	// (0x000921a4) popup_call2_audio_out_window_g1

0x4390,	// (0x000921d0) popup_call2_audio_out_window_g2_ParamLimits

0x4390,	// (0x000921d0) popup_call2_audio_out_window_g2

0xa065,	// (0x00097ea5) popup_call2_audio_out_window_g3_ParamLimits

0xa065,	// (0x00097ea5) popup_call2_audio_out_window_g3

0x0003,

0xf539,	// (0x0009d379) popup_call2_audio_out_window_g_ParamLimits

0xf539,	// (0x0009d379) popup_call2_audio_out_window_g

0xa0a0,	// (0x00097ee0) popup_call2_audio_out_window_t1_ParamLimits

0xa0a0,	// (0x00097ee0) popup_call2_audio_out_window_t1

0xa0ff,	// (0x00097f3f) popup_call2_audio_out_window_t2_ParamLimits

0xa0ff,	// (0x00097f3f) popup_call2_audio_out_window_t2

0xa153,	// (0x00097f93) popup_call2_audio_out_window_t3_ParamLimits

0xa153,	// (0x00097f93) popup_call2_audio_out_window_t3

0xa169,	// (0x00097fa9) popup_call2_audio_out_window_t4_ParamLimits

0xa169,	// (0x00097fa9) popup_call2_audio_out_window_t4

0xa17f,	// (0x00097fbf) popup_call2_audio_out_window_t5_ParamLimits

0xa17f,	// (0x00097fbf) popup_call2_audio_out_window_t5

0x0005,

0xf542,	// (0x0009d382) popup_call2_audio_out_window_t_ParamLimits

0xf542,	// (0x0009d382) popup_call2_audio_out_window_t

0xa1e3,	// (0x00098023) bg_popup_call2_in_pane_ParamLimits

0xa1e3,	// (0x00098023) bg_popup_call2_in_pane

0xa23f,	// (0x0009807f) popup_call2_audio_in_window_g1_ParamLimits

0xa23f,	// (0x0009807f) popup_call2_audio_in_window_g1

0xa277,	// (0x000980b7) popup_call2_audio_in_window_g2_ParamLimits

0xa277,	// (0x000980b7) popup_call2_audio_in_window_g2

0xa2af,	// (0x000980ef) popup_call2_audio_in_window_g3_ParamLimits

0xa2af,	// (0x000980ef) popup_call2_audio_in_window_g3

0x0003,

0xf54f,	// (0x0009d38f) popup_call2_audio_in_window_g_ParamLimits

0xf54f,	// (0x0009d38f) popup_call2_audio_in_window_g

0xa307,	// (0x00098147) popup_call2_audio_in_window_t1_ParamLimits

0xa307,	// (0x00098147) popup_call2_audio_in_window_t1

0xa387,	// (0x000981c7) popup_call2_audio_in_window_t2_ParamLimits

0xa387,	// (0x000981c7) popup_call2_audio_in_window_t2

0xa407,	// (0x00098247) popup_call2_audio_in_window_t3_ParamLimits

0xa407,	// (0x00098247) popup_call2_audio_in_window_t3

0xa421,	// (0x00098261) popup_call2_audio_in_window_t4_ParamLimits

0xa421,	// (0x00098261) popup_call2_audio_in_window_t4

0xa433,	// (0x00098273) popup_call2_audio_in_window_t5_ParamLimits

0xa433,	// (0x00098273) popup_call2_audio_in_window_t5

0xa448,	// (0x00098288) popup_call2_audio_in_window_t6_ParamLimits

0xa448,	// (0x00098288) popup_call2_audio_in_window_t6

0x0005,

0xf558,	// (0x0009d398) popup_call2_audio_in_window_t_ParamLimits

0xf558,	// (0x0009d398) popup_call2_audio_in_window_t

0xe0dc,	// (0x0009bf1c) bg_popup_call2_in_pane_g1

0xa55f,	// (0x0009839f) popup_cale_lunar_info_window_t4

0x0003,

0xf5b9,	// (0x0009d3f9) popup_cale_lunar_info_window_t

0xe0e4,	// (0x0009bf24) bg_popup_call2_rect_pane_ParamLimits

0xe0e4,	// (0x0009bf24) bg_popup_call2_rect_pane

0xde89,	// (0x0009bcc9) call2_cli_visual_graphic_pane

0xde89,	// (0x0009bcc9) call2_cli_visual_text_pane

0xa735,	// (0x00098575) smil_status_volume_pane_g3

0x0002,

0xe20c,	// (0x0009c04c) call2_cli_visual_graphic_pane_g1

0xe20c,	// (0x0009c04c) call2_cli_visual_graphic_pane_g2

0xe20c,	// (0x0009c04c) call2_cli_visual_graphic_pane_g3

0x0002,

0x0126,	// (0x0008df66) call2_cli_visual_graphic_pane_g

0xa45d,	// (0x0009829d) bg_popup_call2_rect_pane_g1

0xe298,	// (0x0009c0d8) bg_popup_call2_rect_pane_g2

0xa465,	// (0x000982a5) bg_popup_call2_rect_pane_g3

0xa46d,	// (0x000982ad) bg_popup_call2_rect_pane_g4

0xa475,	// (0x000982b5) bg_popup_call2_rect_pane_g5

0xa47d,	// (0x000982bd) bg_popup_call2_rect_pane_g6

0xa485,	// (0x000982c5) bg_popup_call2_rect_pane_g7

0xa48d,	// (0x000982cd) bg_popup_call2_rect_pane_g8

0xa495,	// (0x000982d5) bg_popup_call2_rect_pane_g9

0x0008,

0xf565,	// (0x0009d3a5) bg_popup_call2_rect_pane_g

0xa49d,	// (0x000982dd) bg_popup_call2_bubble_pane_g1

0xa4a5,	// (0x000982e5) bg_popup_call2_bubble_pane_g2

0xa4ad,	// (0x000982ed) bg_popup_call2_bubble_pane_g3

0xa4b5,	// (0x000982f5) bg_popup_call2_bubble_pane_g4

0xa4bd,	// (0x000982fd) bg_popup_call2_bubble_pane_g5

0xa4c5,	// (0x00098305) bg_popup_call2_bubble_pane_g6

0xa4cd,	// (0x0009830d) bg_popup_call2_bubble_pane_g7

0xa4d5,	// (0x00098315) bg_popup_call2_bubble_pane_g8

0xa4dd,	// (0x0009831d) bg_popup_call2_bubble_pane_g9

0x0008,

0xf578,	// (0x0009d3b8) bg_popup_call2_bubble_pane_g

0x13ae,	// (0x0008f1ee) aid_cale_week_size_cell_pane

0x18ca,	// (0x0008f70a) aid_cams_cif_uncrop_pane_ParamLimits

0x18ca,	// (0x0008f70a) aid_cams_cif_uncrop_pane

0x1a7f,	// (0x0008f8bf) aid_cams_size_cell_ParamLimits

0x1a7f,	// (0x0008f8bf) aid_cams_size_cell

0x1a93,	// (0x0008f8d3) grid_cams_pane_ParamLimits

0x1aad,	// (0x0008f8ed) linegrid_cams_pane_ParamLimits

0x1caa,	// (0x0008faea) call_video_pane_t1

0x1cc8,	// (0x0008fb08) call_video_pane_t2

0x0001,

0xf28d,	// (0x0009d0cd) call_video_pane_t

0x20f4,	// (0x0008ff34) aid_cale_month_size_cell_pane_ParamLimits

0x20f4,	// (0x0008ff34) aid_cale_month_size_cell_pane

0xf602,	// (0x0009d442) smil_status_volume_pane_g

0xa742,	// (0x00098582) volume_smil_pane_ParamLimits

0x0c0d,	// (0x0008ea4d) aid_popup2_width_pane

0x1310,	// (0x0008f150) cell_qdial_pane_g4_ParamLimits

0x1310,	// (0x0008f150) cell_qdial_pane_g4

0x2cee,	// (0x00090b2e) aid_blid_cardinal_pane_ParamLimits

0x2cfa,	// (0x00090b3a) aid_blid_destination_pane_ParamLimits

0x2cfa,	// (0x00090b3a) aid_blid_destination_pane

0xe0e4,	// (0x0009bf24) bg_popup_call_poc_act_pane_ParamLimits

0xe0e4,	// (0x0009bf24) bg_popup_call_poc_act_pane

0xe0e4,	// (0x0009bf24) bg_popup_call_poc_inact_pane_ParamLimits

0xe0e4,	// (0x0009bf24) bg_popup_call_poc_inact_pane

0xa4e5,	// (0x00098325) bg_popup_call_poc_act_pane_g1

0xa4ed,	// (0x0009832d) bg_popup_call_poc_act_pane_g2

0xa4f5,	// (0x00098335) bg_popup_call_poc_act_pane_g3

0xa4b5,	// (0x000982f5) bg_popup_call_poc_act_pane_g4

0xa4bd,	// (0x000982fd) bg_popup_call_poc_act_pane_g5

0xa4fd,	// (0x0009833d) bg_popup_call_poc_act_pane_g6

0xa4cd,	// (0x0009830d) bg_popup_call_poc_act_pane_g7

0xa505,	// (0x00098345) bg_popup_call_poc_act_pane_g8

0xde89,	// (0x0009bcc9) main_usb_pane

0xa65e,	// (0x0009849e) popup_cale_lunar_info_window

0x1fa0,	// (0x0008fde0) im_reading_pane_t1_ParamLimits

0xe455,	// (0x0009c295) list_im_pane_ParamLimits

0xe466,	// (0x0009c2a6) scroll_pane_cp07_ParamLimits

0xde89,	// (0x0009bcc9) grid_highlight_pane_cp012

0xe0e4,	// (0x0009bf24) mup_scale_pane_ParamLimits

0xee35,	// (0x0009cc75) main_usb_pane_g1_ParamLimits

0xee35,	// (0x0009cc75) main_usb_pane_g1

0x43da,	// (0x0009221a) main_usb_pane_g2_ParamLimits

0x43da,	// (0x0009221a) main_usb_pane_g2

0x0001,

0xf5a2,	// (0x0009d3e2) main_usb_pane_g_ParamLimits

0xf5a2,	// (0x0009d3e2) main_usb_pane_g

0x43f0,	// (0x00092230) main_usb_pane_t1_ParamLimits

0x43f0,	// (0x00092230) main_usb_pane_t1

0x4402,	// (0x00092242) main_usb_pane_t2_ParamLimits

0x4402,	// (0x00092242) main_usb_pane_t2

0x4414,	// (0x00092254) main_usb_pane_t3_ParamLimits

0x4414,	// (0x00092254) main_usb_pane_t3

0x4426,	// (0x00092266) main_usb_pane_t4_ParamLimits

0x4426,	// (0x00092266) main_usb_pane_t4

0x4438,	// (0x00092278) main_usb_pane_t5_ParamLimits

0x4438,	// (0x00092278) main_usb_pane_t5

0x444a,	// (0x0009228a) main_usb_pane_t6_ParamLimits

0x444a,	// (0x0009228a) main_usb_pane_t6

0x0005,

0xf5a7,	// (0x0009d3e7) main_usb_pane_t_ParamLimits

0x2c9d,	// (0x00090add) aid_text_placing

0x2ca6,	// (0x00090ae6) main_location2_pane_t1_ParamLimits

0x2cb8,	// (0x00090af8) main_location2_pane_t2_ParamLimits

0x2cca,	// (0x00090b0a) main_location2_pane_t3_ParamLimits

0x2cdc,	// (0x00090b1c) main_location2_pane_t4_ParamLimits

0x2cdc,	// (0x00090b1c) main_location2_pane_t4

0xf3ee,	// (0x0009d22e) main_location2_pane_t_ParamLimits

0xe120,	// (0x0009bf60) find_pinb_pane_g2_ParamLimits

0xe120,	// (0x0009bf60) find_pinb_pane_g2

0x0001,

0xf13c,	// (0x0009cf7c) find_pinb_pane_g_ParamLimits

0xf13c,	// (0x0009cf7c) find_pinb_pane_g

0xe12c,	// (0x0009bf6c) find_pinb_pane_t1_ParamLimits

0xe13e,	// (0x0009bf7e) find_pinb_pane_t2_ParamLimits

0xf141,	// (0x0009cf81) find_pinb_pane_t_ParamLimits

0xde89,	// (0x0009bcc9) main_call3_pane

0x2458,	// (0x00090298) cale_month_day_heading_pane_t1_ParamLimits

0x24b6,	// (0x000902f6) cale_month_day_heading_pane_t2_ParamLimits

0x251b,	// (0x0009035b) cale_month_day_heading_pane_t3_ParamLimits

0x2580,	// (0x000903c0) cale_month_day_heading_pane_t4_ParamLimits

0x25e5,	// (0x00090425) cale_month_day_heading_pane_t5_ParamLimits

0x265a,	// (0x0009049a) cale_month_day_heading_pane_t6_ParamLimits

0x26cf,	// (0x0009050f) cale_month_day_heading_pane_t7_ParamLimits

0xf2c5,	// (0x0009d105) cale_month_day_heading_pane_t_ParamLimits

0xe6a6,	// (0x0009c4e6) smil_status_volume_pane

0x3501,	// (0x00091341) postcard_address_pane_ParamLimits

0x3501,	// (0x00091341) postcard_address_pane

0x3513,	// (0x00091353) postcard_message_pane_ParamLimits

0x3513,	// (0x00091353) postcard_message_pane

0x43b8,	// (0x000921f8) call2_cli_visual_pane_t1_ParamLimits

0x43b8,	// (0x000921f8) call2_cli_visual_pane_t1

0x4bdc,	// (0x00092a1c) postcard_message_pane_t1_ParamLimits

0x4bdc,	// (0x00092a1c) postcard_message_pane_t1

0x4bc5,	// (0x00092a05) postcard_address_pane_t1_ParamLimits

0x4bc5,	// (0x00092a05) postcard_address_pane_t1

0x4bb1,	// (0x000929f1) popup_call3_audio_in_window_ParamLimits

0x4bb1,	// (0x000929f1) popup_call3_audio_in_window

0x4a3c,	// (0x0009287c) bg_popup_call3_in_pane_ParamLimits

0x4a3c,	// (0x0009287c) bg_popup_call3_in_pane

0x4ab2,	// (0x000928f2) popup_call3_audio_in_window_g1_ParamLimits

0x4ab2,	// (0x000928f2) popup_call3_audio_in_window_g1

0x4ad2,	// (0x00092912) popup_call3_audio_in_window_g2_ParamLimits

0x4ad2,	// (0x00092912) popup_call3_audio_in_window_g2

0x4af2,	// (0x00092932) popup_call3_audio_in_window_g3_ParamLimits

0x4af2,	// (0x00092932) popup_call3_audio_in_window_g3

0x0003,

0xf609,	// (0x0009d449) popup_call3_audio_in_window_g_ParamLimits

0xf609,	// (0x0009d449) popup_call3_audio_in_window_g

0x4b23,	// (0x00092963) popup_call3_audio_in_window_t1_ParamLimits

0x4b23,	// (0x00092963) popup_call3_audio_in_window_t1

0x4b61,	// (0x000929a1) popup_call3_audio_in_window_t2_ParamLimits

0x4b61,	// (0x000929a1) popup_call3_audio_in_window_t2

0x4b9f,	// (0x000929df) popup_call3_audio_in_window_t3_ParamLimits

0x4b9f,	// (0x000929df) popup_call3_audio_in_window_t3

0x0002,

0xf612,	// (0x0009d452) popup_call3_audio_in_window_t_ParamLimits

0xf612,	// (0x0009d452) popup_call3_audio_in_window_t

0xec98,	// (0x0009cad8) bg_popup_call3_rect_pane

0xa45d,	// (0x0009829d) bg_popup_call3_rect_pane_g1

0xe298,	// (0x0009c0d8) bg_popup_call3_rect_pane_g2

0xa465,	// (0x000982a5) bg_popup_call3_rect_pane_g3

0xa46d,	// (0x000982ad) bg_popup_call3_rect_pane_g4

0xa475,	// (0x000982b5) bg_popup_call3_rect_pane_g5

0xa47d,	// (0x000982bd) bg_popup_call3_rect_pane_g6

0xa485,	// (0x000982c5) bg_popup_call3_rect_pane_g7

0x30c6,	// (0x00090f06) mup_visualizer_osc_pane

0xed57,	// (0x0009cb97) mup_visualizer_spec_pane

0x4a6c,	// (0x000928ac) call3_video_qcif_pane_ParamLimits

0x4a6c,	// (0x000928ac) call3_video_qcif_pane

0x4a7f,	// (0x000928bf) call3_video_qcif_uncrop_pane_ParamLimits

0x4a7f,	// (0x000928bf) call3_video_qcif_uncrop_pane

0x4a8d,	// (0x000928cd) call3_video_subqcif_pane_ParamLimits

0x4a8d,	// (0x000928cd) call3_video_subqcif_pane

0x4aa1,	// (0x000928e1) call3_video_subqcif_uncrop_pane_ParamLimits

0x4aa1,	// (0x000928e1) call3_video_subqcif_uncrop_pane

0x4b12,	// (0x00092952) popup_call3_audio_in_window_g4_ParamLimits

0x4b12,	// (0x00092952) popup_call3_audio_in_window_g4

0x4a2b,	// (0x0009286b) mup_spec_half_pane

0x4a34,	// (0x00092874) mup_spec_half_pane_cp

0xa6f5,	// (0x00098535) mup_osc_middle_pane

0xa6fe,	// (0x0009853e) mup_visualizer_osc_pane_g1

0x4a0b,	// (0x0009284b) mup_spec_bar_pane_ParamLimits

0x4a0b,	// (0x0009284b) mup_spec_bar_pane

0xa6e2,	// (0x00098522) mup_spec_bar_pane_g1

0xa6ec,	// (0x0009852c) mup_spec_bar_pane_g2

0x0001,

0xf5fd,	// (0x0009d43d) mup_spec_bar_pane_g

0x13ae,	// (0x0008f1ee) aid_cale_week_size_cell_pane_ParamLimits

0x13c1,	// (0x0008f201) bg_cale_heading_pane_ParamLimits

0xe2cc,	// (0x0009c10c) bg_cale_pane_cp01_ParamLimits

0x13d5,	// (0x0008f215) cale_week_corner_pane_ParamLimits

0x13eb,	// (0x0008f22b) cale_week_day_heading_pane_ParamLimits

0x13ff,	// (0x0008f23f) cale_week_scroll_pane_g1_ParamLimits

0x1410,	// (0x0008f250) cale_week_scroll_pane_g2_ParamLimits

0x1421,	// (0x0008f261) cale_week_scroll_pane_g3_ParamLimits

0x1432,	// (0x0008f272) cale_week_scroll_pane_g4_ParamLimits

0x1443,	// (0x0008f283) cale_week_scroll_pane_g5_ParamLimits

0x1456,	// (0x0008f296) cale_week_scroll_pane_g6_ParamLimits

0x1469,	// (0x0008f2a9) cale_week_scroll_pane_g7_ParamLimits

0x147c,	// (0x0008f2bc) cale_week_scroll_pane_g8_ParamLimits

0x148f,	// (0x0008f2cf) cale_week_scroll_pane_g9_ParamLimits

0x14a0,	// (0x0008f2e0) cale_week_scroll_pane_g10_ParamLimits

0x14b1,	// (0x0008f2f1) cale_week_scroll_pane_g11_ParamLimits

0x14c2,	// (0x0008f302) cale_week_scroll_pane_g12_ParamLimits

0x14d3,	// (0x0008f313) cale_week_scroll_pane_g13_ParamLimits

0x14e4,	// (0x0008f324) cale_week_scroll_pane_g14_ParamLimits

0x14f5,	// (0x0008f335) cale_week_scroll_pane_g15_ParamLimits

0xf1cd,	// (0x0009d00d) cale_week_scroll_pane_g_ParamLimits

0x1506,	// (0x0008f346) cale_week_time_pane_ParamLimits

0x1519,	// (0x0008f359) grid_cale_week_pane_ParamLimits

0xe2e5,	// (0x0009c125) listscroll_cale_week_pane_t1

0x152e,	// (0x0008f36e) scroll_pane_cp08_ParamLimits

0x2135,	// (0x0008ff75) cale_month_corner_pane_ParamLimits

0xe67c,	// (0x0009c4bc) cale_month_pane_t1

0x2417,	// (0x00090257) cale_month_week_pane_ParamLimits

0x2ae9,	// (0x00090929) popup_call_status_window_g1_ParamLimits

0x2afd,	// (0x0009093d) popup_call_status_window_g2_ParamLimits

0x2b11,	// (0x00090951) popup_call_status_window_g3_ParamLimits

0xf375,	// (0x0009d1b5) popup_call_status_window_g_ParamLimits

0xea0e,	// (0x0009c84e) aid_call2_pane

0x3333,	// (0x00091173) msg_header_pane_g1

0x3501,	// (0x00091341) postcard_address2_pane_ParamLimits

0x3501,	// (0x00091341) postcard_address2_pane

0x3513,	// (0x00091353) postcard_message2_pane_ParamLimits

0x3513,	// (0x00091353) postcard_message2_pane

0x49bd,	// (0x000927fd) message2_row_pane_ParamLimits

0x49bd,	// (0x000927fd) message2_row_pane

0x49d9,	// (0x00092819) address2_row_pane_ParamLimits

0x49d9,	// (0x00092819) address2_row_pane

0xa6b0,	// (0x000984f0) postcard_message2_row_pane_g1

0xa6b8,	// (0x000984f8) postcard_message2_row_pane_t1

0xa6b0,	// (0x000984f0) address2_row_pane_g1

0xa6b8,	// (0x000984f8) address2_row_pane_t1

0x17c6,	// (0x0008f606) aid_size_cell_vorec

0xde89,	// (0x0009bcc9) main_rss_pane

0x49ec,	// (0x0009282c) rss_list_single_pane_ParamLimits

0x49ec,	// (0x0009282c) rss_list_single_pane

0xa6c6,	// (0x00098506) rss_list_single_pane_t1

0xa6d4,	// (0x00098514) rss_list_single_pane_t2

0x0001,

0xf5f8,	// (0x0009d438) rss_list_single_pane_t

0xde89,	// (0x0009bcc9) main_camera2_pane

0xde89,	// (0x0009bcc9) main_video2_pane

0x4c55,	// (0x00092a95) cams_zoom_pane_cp2_ParamLimits

0x4c55,	// (0x00092a95) cams_zoom_pane_cp2

0x4c75,	// (0x00092ab5) image2_vga_pane_ParamLimits

0x4c75,	// (0x00092ab5) image2_vga_pane

0x4cc6,	// (0x00092b06) main_camera2_pane_g1_ParamLimits

0x4cc6,	// (0x00092b06) main_camera2_pane_g1

0x4ce6,	// (0x00092b26) main_camera2_pane_g2_ParamLimits

0x4ce6,	// (0x00092b26) main_camera2_pane_g2

0x4d06,	// (0x00092b46) main_camera2_pane_g3_ParamLimits

0x4d06,	// (0x00092b46) main_camera2_pane_g3

0x4d26,	// (0x00092b66) main_camera2_pane_g4_ParamLimits

0x4d26,	// (0x00092b66) main_camera2_pane_g4

0x4d46,	// (0x00092b86) main_camera2_pane_g5_ParamLimits

0x4d46,	// (0x00092b86) main_camera2_pane_g5

0x4d66,	// (0x00092ba6) main_camera2_pane_g6_ParamLimits

0x4d66,	// (0x00092ba6) main_camera2_pane_g6

0x4d86,	// (0x00092bc6) main_camera2_pane_g7_ParamLimits

0x4d86,	// (0x00092bc6) main_camera2_pane_g7

0x4da6,	// (0x00092be6) main_camera2_pane_g8_ParamLimits

0x4da6,	// (0x00092be6) main_camera2_pane_g8

0x0008,

0xf619,	// (0x0009d459) main_camera2_pane_g_ParamLimits

0xf619,	// (0x0009d459) main_camera2_pane_g

0x4de6,	// (0x00092c26) main_camera2_pane_t1_ParamLimits

0x4de6,	// (0x00092c26) main_camera2_pane_t1

0x4e1b,	// (0x00092c5b) main_camera2_pane_t2_ParamLimits

0x4e1b,	// (0x00092c5b) main_camera2_pane_t2

0x4e41,	// (0x00092c81) main_camera2_pane_t3_ParamLimits

0x4e41,	// (0x00092c81) main_camera2_pane_t3

0x4e9f,	// (0x00092cdf) main_camera2_pane_t4_ParamLimits

0x4e9f,	// (0x00092cdf) main_camera2_pane_t4

0x0006,

0xf62c,	// (0x0009d46c) main_camera2_pane_t_ParamLimits

0xf62c,	// (0x0009d46c) main_camera2_pane_t

0x4f31,	// (0x00092d71) cams_zoom_pane_cp4_ParamLimits

0x4f31,	// (0x00092d71) cams_zoom_pane_cp4

0x4f47,	// (0x00092d87) image2_cif_pane_ParamLimits

0x4f47,	// (0x00092d87) image2_cif_pane

0x4f72,	// (0x00092db2) image2_subqcif_pane_ParamLimits

0x4f72,	// (0x00092db2) image2_subqcif_pane

0x4f8c,	// (0x00092dcc) main_video2_pane_g1_ParamLimits

0x4f8c,	// (0x00092dcc) main_video2_pane_g1

0x4fa6,	// (0x00092de6) main_video2_pane_g2_ParamLimits

0x4fa6,	// (0x00092de6) main_video2_pane_g2

0x4fbc,	// (0x00092dfc) main_video2_pane_g3_ParamLimits

0x4fbc,	// (0x00092dfc) main_video2_pane_g3

0x4fd2,	// (0x00092e12) main_video2_pane_g4_ParamLimits

0x4fd2,	// (0x00092e12) main_video2_pane_g4

0x4fe8,	// (0x00092e28) main_video2_pane_g5_ParamLimits

0x4fe8,	// (0x00092e28) main_video2_pane_g5

0x4ffe,	// (0x00092e3e) main_video2_pane_g6_ParamLimits

0x4ffe,	// (0x00092e3e) main_video2_pane_g6

0x0005,

0xf63b,	// (0x0009d47b) main_video2_pane_g_ParamLimits

0xf63b,	// (0x0009d47b) main_video2_pane_g

0x5018,	// (0x00092e58) main_video2_pane_t1_ParamLimits

0x5018,	// (0x00092e58) main_video2_pane_t1

0x503c,	// (0x00092e7c) main_video2_pane_t2_ParamLimits

0x503c,	// (0x00092e7c) main_video2_pane_t2

0x508a,	// (0x00092eca) main_video2_pane_t3_ParamLimits

0x508a,	// (0x00092eca) main_video2_pane_t3

0x0002,

0xf648,	// (0x0009d488) main_video2_pane_t_ParamLimits

0xf648,	// (0x0009d488) main_video2_pane_t

0x4505,	// (0x00092345) call_muted_g2

0x0001,

0xf5ea,	// (0x0009d42a) call_muted_g

0xde89,	// (0x0009bcc9) main_mup2_pane

0x50ce,	// (0x00092f0e) main_mup2_pane_g1_ParamLimits

0x50ce,	// (0x00092f0e) main_mup2_pane_g1

0x50da,	// (0x00092f1a) main_mup2_pane_g2_ParamLimits

0x50da,	// (0x00092f1a) main_mup2_pane_g2

0xa866,	// (0x000986a6) main_mup_pane_g13_cp1

0xa86e,	// (0x000986ae) mup_volume_pane_cp1

0x50f6,	// (0x00092f36) main_mup2_pane_g4_ParamLimits

0x50f6,	// (0x00092f36) main_mup2_pane_g4

0x5108,	// (0x00092f48) main_mup2_pane_g5_ParamLimits

0x5108,	// (0x00092f48) main_mup2_pane_g5

0x511a,	// (0x00092f5a) main_mup2_pane_g6_ParamLimits

0x511a,	// (0x00092f5a) main_mup2_pane_g6

0x512c,	// (0x00092f6c) main_mup2_pane_g7_ParamLimits

0x512c,	// (0x00092f6c) main_mup2_pane_g7

0x0006,

0xf64f,	// (0x0009d48f) main_mup2_pane_g_ParamLimits

0xf64f,	// (0x0009d48f) main_mup2_pane_g

0x5144,	// (0x00092f84) main_mup2_pane_t1_ParamLimits

0x5144,	// (0x00092f84) main_mup2_pane_t1

0x515a,	// (0x00092f9a) main_mup2_pane_t2_ParamLimits

0x515a,	// (0x00092f9a) main_mup2_pane_t2

0x5170,	// (0x00092fb0) main_mup2_pane_t3_ParamLimits

0x5170,	// (0x00092fb0) main_mup2_pane_t3

0x5186,	// (0x00092fc6) main_mup2_pane_t4_ParamLimits

0x5186,	// (0x00092fc6) main_mup2_pane_t4

0x519e,	// (0x00092fde) main_mup2_pane_t5_ParamLimits

0x519e,	// (0x00092fde) main_mup2_pane_t5

0x51b6,	// (0x00092ff6) main_mup2_pane_t6_ParamLimits

0x51b6,	// (0x00092ff6) main_mup2_pane_t6

0x0005,

0xf65e,	// (0x0009d49e) main_mup2_pane_t_ParamLimits

0xf65e,	// (0x0009d49e) main_mup2_pane_t

0x51e6,	// (0x00093026) mup2_visualizer_pane_ParamLimits

0x51e6,	// (0x00093026) mup2_visualizer_pane

0x5214,	// (0x00093054) mup_progress_pane_cp_ParamLimits

0x5214,	// (0x00093054) mup_progress_pane_cp

0xa848,	// (0x00098688) mup_volume_pane_cp_ParamLimits

0xa848,	// (0x00098688) mup_volume_pane_cp

0x5228,	// (0x00093068) mup2_visualizer_pane_g1_ParamLimits

0x5228,	// (0x00093068) mup2_visualizer_pane_g1

0xa787,	// (0x000985c7) mup2_visualizer_pane_g2_ParamLimits

0xa787,	// (0x000985c7) mup2_visualizer_pane_g2

0x523f,	// (0x0009307f) mup2_visualizer_pane_g3_ParamLimits

0x523f,	// (0x0009307f) mup2_visualizer_pane_g3

0x0002,

0xf66b,	// (0x0009d4ab) mup2_visualizer_pane_g_ParamLimits

0xf66b,	// (0x0009d4ab) mup2_visualizer_pane_g

0xef7e,	// (0x0009cdbe) aid_size_cell_fmradio

0x46b7,	// (0x000924f7) aid_height_parent_landcape

0xe4e4,	// (0x0009c324) wml_content_pane_cp

0xe4ec,	// (0x0009c32c) wml_tabs_pane

0xe4f5,	// (0x0009c335) popup_wml_miniature_window

0xe4fd,	// (0x0009c33d) scroll_pane_cp021

0xe511,	// (0x0009c351) wml_content_pane_comp8

0xde89,	// (0x0009bcc9) bg_popup_sub_pane_cp05

0xa7a5,	// (0x000985e5) popup_wml_miniature_window_g1

0xa7ad,	// (0x000985ed) wml_miniature_view_pane

0x524b,	// (0x0009308b) aid_size_wml_view

0x5253,	// (0x00093093) wml_miniature_view_pane_g1

0x525c,	// (0x0009309c) wml_miniature_view_pane_g2

0x5265,	// (0x000930a5) wml_miniature_view_pane_g3

0x526d,	// (0x000930ad) wml_miniature_view_pane_g4

0x5275,	// (0x000930b5) wml_miniature_view_pane_g5

0x527d,	// (0x000930bd) wml_miniature_view_pane_g6

0x5285,	// (0x000930c5) wml_miniature_view_pane_g7

0x528d,	// (0x000930cd) wml_miniature_view_pane_g8

0x0007,

0xf672,	// (0x0009d4b2) wml_miniature_view_pane_g

0xa7b5,	// (0x000985f5) background_graphic_ParamLimits

0xa7b5,	// (0x000985f5) background_graphic

0xa7c1,	// (0x00098601) wml_tabs_2_pane

0xa7ca,	// (0x0009860a) wml_tabs_3_pane_ParamLimits

0xa7ca,	// (0x0009860a) wml_tabs_3_pane

0xa7dc,	// (0x0009861c) wml_tabs_4_pane_ParamLimits

0xa7dc,	// (0x0009861c) wml_tabs_4_pane

0xa7f2,	// (0x00098632) wml_tabs_5_pane_ParamLimits

0xa7f2,	// (0x00098632) wml_tabs_5_pane

0xa80c,	// (0x0009864c) wml_tabs_pane_g2_ParamLimits

0xa80c,	// (0x0009864c) wml_tabs_pane_g2

0xa820,	// (0x00098660) wml_tabs_pane_g3_ParamLimits

0xa820,	// (0x00098660) wml_tabs_pane_g3

0x5295,	// (0x000930d5) wml_tabs_2_active_pane_ParamLimits

0x5295,	// (0x000930d5) wml_tabs_2_active_pane

0x52a9,	// (0x000930e9) wml_tabs_2_passive_pane_ParamLimits

0x52a9,	// (0x000930e9) wml_tabs_2_passive_pane

0x52bd,	// (0x000930fd) wml_tabs_3_active_pane_cp_ParamLimits

0x52bd,	// (0x000930fd) wml_tabs_3_active_pane_cp

0x52d2,	// (0x00093112) wml_tabs_3_passive_pane_ParamLimits

0x52d2,	// (0x00093112) wml_tabs_3_passive_pane

0x52e5,	// (0x00093125) wml_tabs_3_passive_pane_cp_ParamLimits

0x52e5,	// (0x00093125) wml_tabs_3_passive_pane_cp

0x52fc,	// (0x0009313c) tabs_4_active_pane

0x5304,	// (0x00093144) tabs_4_passive_pane

0x530e,	// (0x0009314e) tabs_4_passive_pane_cp

0x5316,	// (0x00093156) tabs_4_passive_pane_cp2

0x43d2,	// (0x00092212) aid_height_text

0x309c,	// (0x00090edc) mup_volume_cont_pane_ParamLimits

0x309c,	// (0x00090edc) mup_volume_cont_pane

0x0f91,	// (0x0008edd1) aid_size_cell_pinb

0x0f9b,	// (0x0008eddb) aid_size_list_pinb

0x5200,	// (0x00093040) mup2_volume_cont_pane_ParamLimits

0x5200,	// (0x00093040) mup2_volume_cont_pane

0xa834,	// (0x00098674) mup2_volume_cont_pane_g1_ParamLimits

0xa834,	// (0x00098674) mup2_volume_cont_pane_g1

0x0c19,	// (0x0008ea59) aid_size_cell_touch_ParamLimits

0x0c19,	// (0x0008ea59) aid_size_cell_touch

0x0e81,	// (0x0008ecc1) touch_pane_ParamLimits

0x0e81,	// (0x0008ecc1) touch_pane

0x0bfb,	// (0x0008ea3b) main_rss2_pane

0xa876,	// (0x000986b6) listscroll_rss2_pane

0xa87f,	// (0x000986bf) rss2_navigation_pane

0xa887,	// (0x000986c7) list_rss2_pane

0xeb41,	// (0x0009c981) scroll_pane_cp22

0xa88f,	// (0x000986cf) rss2_navigation_pane_g1

0xa898,	// (0x000986d8) rss2_navigation_pane_g2

0xa8a0,	// (0x000986e0) rss2_navigation_pane_g3

0x0002,

0xf683,	// (0x0009d4c3) rss2_navigation_pane_g

0xa8a8,	// (0x000986e8) rss2_navigation_pane_t1

0x5320,	// (0x00093160) rss2_list_single_pane_ParamLimits

0x5320,	// (0x00093160) rss2_list_single_pane

0xa8b6,	// (0x000986f6) rss2_list_single_pane_t2

0xa8c4,	// (0x00098704) rss2_list_single_pane_t3_ParamLimits

0xa8c4,	// (0x00098704) rss2_list_single_pane_t3

0xa8e1,	// (0x00098721) rss2_list_single_pane_t4

0x28f3,	// (0x00090733) smil_status_pane_g1

0xefd4,	// (0x0009ce14) main_image2_pane_ParamLimits

0xefd4,	// (0x0009ce14) main_image2_pane

0x4dc6,	// (0x00092c06) main_camera2_pane_g9_ParamLimits

0x4dc6,	// (0x00092c06) main_camera2_pane_g9

0x4ef4,	// (0x00092d34) main_camera2_pane_t5_ParamLimits

0x4ef4,	// (0x00092d34) main_camera2_pane_t5

0xa757,	// (0x00098597) main_camera2_pane_t6_ParamLimits

0xa757,	// (0x00098597) main_camera2_pane_t6

0x5335,	// (0x00093175) main_image2_pane_g1_ParamLimits

0x5335,	// (0x00093175) main_image2_pane_g1

0x373a,	// (0x0009157a) smil2_video_pane_ParamLimits

0x373a,	// (0x0009157a) smil2_video_pane

0x0c59,	// (0x0008ea99) aid_zoom_text_primary_cp

0x0e31,	// (0x0008ec71) popup_preview_fixed_window

0xe44d,	// (0x0009c28d) im_reading_pane_g1

0x4c3d,	// (0x00092a7d) cams2_bc_adjust_pane_cp_ParamLimits

0x4c3d,	// (0x00092a7d) cams2_bc_adjust_pane_cp

0x4f23,	// (0x00092d63) cams2_bc_adjust_pane_ParamLimits

0x4f23,	// (0x00092d63) cams2_bc_adjust_pane

0xa8ef,	// (0x0009872f) cams2_bc_adjust_pane_g1

0xa8f7,	// (0x00098737) cams2_slider_pane

0xa900,	// (0x00098740) cams2_slider_pane_g1

0xa909,	// (0x00098749) cams2_slider_pane_g2

0x0006,

0xf68a,	// (0x0009d4ca) cams2_slider_pane_g

0x1089,	// (0x0008eec9) calc_display_pane_ParamLimits

0x10b1,	// (0x0008eef1) calc_paper_pane_ParamLimits

0x10d4,	// (0x0008ef14) grid_calc_pane_ParamLimits

0xa000,	// (0x00097e40) popup_clock_digital_window_t1_ParamLimits

0xef1b,	// (0x0009cd5b) main_image_pane_t1

0x106b,	// (0x0008eeab) aid_size_cell_calc_ParamLimits

0x106b,	// (0x0008eeab) aid_size_cell_calc

0x46fd,	// (0x0009253d) popup_blid_sat_info2_window_ParamLimits

0x46fd,	// (0x0009253d) popup_blid_sat_info2_window

0xa92b,	// (0x0009876b) aid_size_cell_blid

0xa933,	// (0x00098773) bg_popup_window_pane_cp07

0xa956,	// (0x00098796) grid_popup_blid_pane

0xa960,	// (0x000987a0) heading_pane_cp05_ParamLimits

0xa960,	// (0x000987a0) heading_pane_cp05

0xaa2a,	// (0x0009886a) cell_popup_blid_pane_ParamLimits

0xaa2a,	// (0x0009886a) cell_popup_blid_pane

0xaa4e,	// (0x0009888e) cell_popup_blid_pane_g1

0xaa56,	// (0x00098896) cell_popup_blid_pane_t1

0x51d0,	// (0x00093010) mup2_indicator_pane_ParamLimits

0x51d0,	// (0x00093010) mup2_indicator_pane

0xec98,	// (0x0009cad8) mup2_visualizer_osc_pane

0xa793,	// (0x000985d3) mup2_visualizer_spec_pane_ParamLimits

0xa793,	// (0x000985d3) mup2_visualizer_spec_pane

0x534b,	// (0x0009318b) mup2_spec_half_pane

0x5354,	// (0x00093194) mup2_spec_half_pane_cp

0x535c,	// (0x0009319c) mup2_spec_bar_pane_ParamLimits

0x535c,	// (0x0009319c) mup2_spec_bar_pane

0xa6e2,	// (0x00098522) mup2_spec_bar_pane_g1

0xa6ec,	// (0x0009852c) mup2_spec_bar_pane_g2

0x0001,

0xf5fd,	// (0x0009d43d) mup2_spec_bar_pane_g

0x537c,	// (0x000931bc) mup2_osc_middle_pane

0xa6fe,	// (0x0009853e) mup2_visualizer_osc_pane_g1

0xda96,	// (0x0009b8d6) popup_number_entry_window_t1_ParamLimits

0xdaa9,	// (0x0009b8e9) popup_number_entry_window_t2_ParamLimits

0xdabb,	// (0x0009b8fb) popup_number_entry_window_t3_ParamLimits

0x0ed3,	// (0x0008ed13) popup_number_entry_window_t5_ParamLimits

0x0ed3,	// (0x0008ed13) popup_number_entry_window_t5

0xf0e7,	// (0x0009cf27) popup_number_entry_window_t_ParamLimits

0xdacd,	// (0x0009b90d) text_title_cp2_ParamLimits

0xa03f,	// (0x00097e7f) aid_hotspot_pointer_text2_pane

0xa059,	// (0x00097e99) main_viewer_pane_g9_ParamLimits

0xa059,	// (0x00097e99) main_viewer_pane_g9

0xe67c,	// (0x0009c4bc) cale_month_pane_t1_ParamLimits

0xe6b9,	// (0x0009c4f9) bg_cale_pane_ParamLimits

0xe6d1,	// (0x0009c511) list_cale_pane_ParamLimits

0xe2e5,	// (0x0009c125) listscroll_cale_day_pane_t1

0xe6e2,	// (0x0009c522) scroll_pane_cp09_ParamLimits

0x30ce,	// (0x00090f0e) main_mup_eq_pane_t1_ParamLimits

0x30ce,	// (0x00090f0e) main_mup_eq_pane_t1

0x30e8,	// (0x00090f28) main_mup_eq_pane_t2_ParamLimits

0x30e8,	// (0x00090f28) main_mup_eq_pane_t2

0x3102,	// (0x00090f42) main_mup_eq_pane_t3_ParamLimits

0x3102,	// (0x00090f42) main_mup_eq_pane_t3

0x311e,	// (0x00090f5e) main_mup_eq_pane_t4_ParamLimits

0x311e,	// (0x00090f5e) main_mup_eq_pane_t4

0x313a,	// (0x00090f7a) main_mup_eq_pane_t5_ParamLimits

0x313a,	// (0x00090f7a) main_mup_eq_pane_t5

0x3156,	// (0x00090f96) main_mup_eq_pane_t6_ParamLimits

0x3156,	// (0x00090f96) main_mup_eq_pane_t6

0x316a,	// (0x00090faa) main_mup_eq_pane_t7_ParamLimits

0x316a,	// (0x00090faa) main_mup_eq_pane_t7

0x317e,	// (0x00090fbe) main_mup_eq_pane_t8_ParamLimits

0x317e,	// (0x00090fbe) main_mup_eq_pane_t8

0x3192,	// (0x00090fd2) main_mup_eq_pane_t9_ParamLimits

0x3192,	// (0x00090fd2) main_mup_eq_pane_t9

0x31ac,	// (0x00090fec) main_mup_eq_pane_t10_ParamLimits

0x31ac,	// (0x00090fec) main_mup_eq_pane_t10

0x0009,

0xf468,	// (0x0009d2a8) main_mup_eq_pane_t_ParamLimits

0xf468,	// (0x0009d2a8) main_mup_eq_pane_t

0x325b,	// (0x0009109b) mup_equalizer_pane_cp5_ParamLimits

0x326f,	// (0x000910af) mup_equalizer_pane_cp6_ParamLimits

0x3283,	// (0x000910c3) mup_equalizer_pane_cp7_ParamLimits

0x0bfb,	// (0x0008ea3b) main_gallery_pane

0xa707,	// (0x00098547) smil2_volume_pane

0xa70f,	// (0x0009854f) smil_status_volume_pane_g1_ParamLimits

0xa722,	// (0x00098562) smil_status_volume_pane_g2_ParamLimits

0xa735,	// (0x00098575) smil_status_volume_pane_g3_ParamLimits

0xf602,	// (0x0009d442) smil_status_volume_pane_g_ParamLimits

0xa933,	// (0x00098773) bg_popup_window_pane_cp07_ParamLimits

0xa941,	// (0x00098781) blid_firmament_pane

0x5385,	// (0x000931c5) aid_size_cell_gallery_ParamLimits

0x5385,	// (0x000931c5) aid_size_cell_gallery

0x539b,	// (0x000931db) grid_gallery_pane_ParamLimits

0x539b,	// (0x000931db) grid_gallery_pane

0x53b4,	// (0x000931f4) cell_gallery_pane_ParamLimits

0x53b4,	// (0x000931f4) cell_gallery_pane

0xaa64,	// (0x000988a4) bg_cell_gallery_focus_pane_ParamLimits

0xaa64,	// (0x000988a4) bg_cell_gallery_focus_pane

0xaa76,	// (0x000988b6) cell_gallery_pane_g1_ParamLimits

0xaa76,	// (0x000988b6) cell_gallery_pane_g1

0x53fd,	// (0x0009323d) cell_gallery_pane_g2_ParamLimits

0x53fd,	// (0x0009323d) cell_gallery_pane_g2

0x540a,	// (0x0009324a) cell_gallery_pane_g3_ParamLimits

0x540a,	// (0x0009324a) cell_gallery_pane_g3

0xaa82,	// (0x000988c2) cell_gallery_pane_g4_ParamLimits

0xaa82,	// (0x000988c2) cell_gallery_pane_g4

0x0003,

0xf6b0,	// (0x0009d4f0) cell_gallery_pane_g_ParamLimits

0xf6b0,	// (0x0009d4f0) cell_gallery_pane_g

0xaa8e,	// (0x000988ce) bg_cell_gallery_focus_pane_g1

0xaa96,	// (0x000988d6) bg_cell_gallery_focus_pane_g2

0xaa9e,	// (0x000988de) bg_cell_gallery_focus_pane_g3

0xaaa6,	// (0x000988e6) bg_cell_gallery_focus_pane_g4

0xaaae,	// (0x000988ee) bg_cell_gallery_focus_pane_g5

0xaab6,	// (0x000988f6) bg_cell_gallery_focus_pane_g6

0xaabe,	// (0x000988fe) bg_cell_gallery_focus_pane_g7

0xaac6,	// (0x00098906) bg_cell_gallery_focus_pane_g8

0x0007,

0xf6b9,	// (0x0009d4f9) bg_cell_gallery_focus_pane_g

0xaace,	// (0x0009890e) aid_firma_cardinal

0xaae2,	// (0x00098922) blid_firmament_pane_t1

0xaaf9,	// (0x00098939) blid_firmament_pane_t2

0xab10,	// (0x00098950) blid_firmament_pane_t3

0xab27,	// (0x00098967) blid_firmament_pane_t4

0x0003,

0xf6ca,	// (0x0009d50a) blid_firmament_pane_t

0xab3e,	// (0x0009897e) blid_sat_info_pane

0xab4e,	// (0x0009898e) blid_sat_info_pane_g1

0xab4e,	// (0x0009898e) blid_sat_info_pane_g2

0x0001,

0xf6d3,	// (0x0009d513) blid_sat_info_pane_g

0xab58,	// (0x00098998) blid_sat_info_pane_t1

0xab66,	// (0x000989a6) smil2_volume_content_pane

0xab6f,	// (0x000989af) smil2_volume_pane_g1

0xab77,	// (0x000989b7) smil2_volume_content_pane_g1

0xab80,	// (0x000989c0) smil2_volume_content_pane_g2

0xab89,	// (0x000989c9) smil2_volume_content_pane_g3

0xab92,	// (0x000989d2) smil2_volume_content_pane_g4

0xab9b,	// (0x000989db) smil2_volume_content_pane_g5

0xaba4,	// (0x000989e4) smil2_volume_content_pane_g6

0xabad,	// (0x000989ed) smil2_volume_content_pane_g7

0xabb6,	// (0x000989f6) smil2_volume_content_pane_g8

0xabbf,	// (0x000989ff) smil2_volume_content_pane_g9

0xabc8,	// (0x00098a08) smil2_volume_content_pane_g10

0x0009,

0xf6d8,	// (0x0009d518) smil2_volume_content_pane_g

0x1588,	// (0x0008f3c8) cale_week_day_heading_pane_t1_ParamLimits

0x15b2,	// (0x0008f3f2) cale_week_day_heading_pane_t2_ParamLimits

0x15dc,	// (0x0008f41c) cale_week_day_heading_pane_t3_ParamLimits

0x1606,	// (0x0008f446) cale_week_day_heading_pane_t4_ParamLimits

0x1630,	// (0x0008f470) cale_week_day_heading_pane_t5_ParamLimits

0x165a,	// (0x0008f49a) cale_week_day_heading_pane_t6_ParamLimits

0x1686,	// (0x0008f4c6) cale_week_day_heading_pane_t7_ParamLimits

0xf1ec,	// (0x0009d02c) cale_week_day_heading_pane_t_ParamLimits

0xe2f7,	// (0x0009c137) bg_cale_side_pane_ParamLimits

0x16b0,	// (0x0008f4f0) cale_week_time_pane_t1_ParamLimits

0x16c8,	// (0x0008f508) cale_week_time_pane_t2_ParamLimits

0x16e0,	// (0x0008f520) cale_week_time_pane_t3_ParamLimits

0x16f8,	// (0x0008f538) cale_week_time_pane_t4_ParamLimits

0x1710,	// (0x0008f550) cale_week_time_pane_t5_ParamLimits

0x1728,	// (0x0008f568) cale_week_time_pane_t6_ParamLimits

0x1740,	// (0x0008f580) cale_week_time_pane_t7_ParamLimits

0x1758,	// (0x0008f598) cale_week_time_pane_t8_ParamLimits

0xf1fb,	// (0x0009d03b) cale_week_time_pane_t_ParamLimits

0x1770,	// (0x0008f5b0) cell_cale_week_pane_g2_ParamLimits

0xe2f7,	// (0x0009c137) bg_cale_side_pane_cp01_ParamLimits

0x2744,	// (0x00090584) cale_month_week_pane_t1_ParamLimits

0x275b,	// (0x0009059b) cale_month_week_pane_t2_ParamLimits

0x2772,	// (0x000905b2) cale_month_week_pane_t3_ParamLimits

0x2789,	// (0x000905c9) cale_month_week_pane_t4_ParamLimits

0x27a0,	// (0x000905e0) cale_month_week_pane_t5_ParamLimits

0x27b7,	// (0x000905f7) cale_month_week_pane_t6_ParamLimits

0xf2d4,	// (0x0009d114) cale_month_week_pane_t_ParamLimits

0x9f7c,	// (0x00097dbc) cell_cale_month_pane_g1_ParamLimits

0x0bfb,	// (0x0008ea3b) main_cale_event_viewer_pane

0x0bfb,	// (0x0008ea3b) listscroll_cale_event_viewer_pane

0xabd1,	// (0x00098a11) list_cale_ev_pane

0xabd9,	// (0x00098a19) scroll_pane_cp023

0xabe5,	// (0x00098a25) field_cale_ev_pane_ParamLimits

0xabe5,	// (0x00098a25) field_cale_ev_pane

0xac03,	// (0x00098a43) field_cale_ev_content_pane_ParamLimits

0xac03,	// (0x00098a43) field_cale_ev_content_pane

0xac0f,	// (0x00098a4f) field_cale_ev_pane_g1_ParamLimits

0xac0f,	// (0x00098a4f) field_cale_ev_pane_g1

0xac1b,	// (0x00098a5b) field_cale_ev_pane_g2_ParamLimits

0xac1b,	// (0x00098a5b) field_cale_ev_pane_g2

0xac33,	// (0x00098a73) field_cale_ev_pane_g3_ParamLimits

0xac33,	// (0x00098a73) field_cale_ev_pane_g3

0x0002,

0xf6ed,	// (0x0009d52d) field_cale_ev_pane_g_ParamLimits

0xf6ed,	// (0x0009d52d) field_cale_ev_pane_g

0xac4b,	// (0x00098a8b) field_cale_ev_pane_t1_ParamLimits

0xac4b,	// (0x00098a8b) field_cale_ev_pane_t1

0xac62,	// (0x00098aa2) field_cale_ev_content_pane_t1_ParamLimits

0xac62,	// (0x00098aa2) field_cale_ev_content_pane_t1

0xee01,	// (0x0009cc41) bg_button_pane_cp01

0xe1b7,	// (0x0009bff7) listscroll_cale_week_pane_ParamLimits

0x13a4,	// (0x0008f1e4) popup_toolbar_window_cp01

0xe2e5,	// (0x0009c125) listscroll_cale_week_pane_t1_ParamLimits

0xe1b7,	// (0x0009bff7) listscroll_cale_day_pane_ParamLimits

0x2944,	// (0x00090784) popup_toolbar_window_cp02

0xe2e5,	// (0x0009c125) listscroll_cale_day_pane_t1_ParamLimits

0xe1b7,	// (0x0009bff7) main_cale_month_pane_ParamLimits

0x4931,	// (0x00092771) popup_toolbar_window_cp03_ParamLimits

0x4931,	// (0x00092771) popup_toolbar_window_cp03

0x3602,	// (0x00091442) main_image_pane_g2_ParamLimits

0x3602,	// (0x00091442) main_image_pane_g2

0x3613,	// (0x00091453) main_image_pane_g3_ParamLimits

0x3613,	// (0x00091453) main_image_pane_g3

0x0002,

0xf4f0,	// (0x0009d330) main_image_pane_g_ParamLimits

0xf4f0,	// (0x0009d330) main_image_pane_g

0xef1b,	// (0x0009cd5b) main_image_pane_t1_ParamLimits

0x3624,	// (0x00091464) main_image_pane_t2_ParamLimits

0x3624,	// (0x00091464) main_image_pane_t2

0x3636,	// (0x00091476) main_image_pane_t3_ParamLimits

0x3636,	// (0x00091476) main_image_pane_t3

0x365e,	// (0x0009149e) main_image_pane_t4_ParamLimits

0x365e,	// (0x0009149e) main_image_pane_t4

0x0003,

0xf4f7,	// (0x0009d337) main_image_pane_t_ParamLimits

0xf4f7,	// (0x0009d337) main_image_pane_t

0x367e,	// (0x000914be) popup_image_details_window_cp01

0x3688,	// (0x000914c8) popup_toobar_trans_pane_cp01_ParamLimits

0x3688,	// (0x000914c8) popup_toobar_trans_pane_cp01

0x47dc,	// (0x0009261c) popup_image_details_window_ParamLimits

0x47dc,	// (0x0009261c) popup_image_details_window

0xa668,	// (0x000984a8) popup_image_focus_window

0x4bf7,	// (0x00092a37) camera2_autofocus_pane_ParamLimits

0x4bf7,	// (0x00092a37) camera2_autofocus_pane

0x0bfb,	// (0x0008ea3b) bg_popup_sub_pane_cp06

0xac80,	// (0x00098ac0) popup_image_focus_window_g1

0xac88,	// (0x00098ac8) popup_image_focus_window_g2

0xac90,	// (0x00098ad0) popup_image_focus_window_g3

0xac98,	// (0x00098ad8) popup_image_focus_window_g4

0x0003,

0xf6f4,	// (0x0009d534) popup_image_focus_window_g

0xaca0,	// (0x00098ae0) popup_image_focus_window_t1

0xacae,	// (0x00098aee) popup_image_focus_window_t2

0xacbe,	// (0x00098afe) popup_image_focus_window_t3

0x0002,

0xf6fd,	// (0x0009d53d) popup_image_focus_window_t

0xaccc,	// (0x00098b0c) camera2_autofocus_pane_g1

0xefd4,	// (0x0009ce14) bg_tb_trans_pane_cp01

0xacda,	// (0x00098b1a) popup_image_details_window_g1

0xaced,	// (0x00098b2d) popup_image_details_window_g2

0x0002,

0xf70f,	// (0x0009d54f) popup_image_details_window_g

0xad16,	// (0x00098b56) popup_image_details_window_t1

0xad28,	// (0x00098b68) popup_image_details_window_t2

0xad41,	// (0x00098b81) popup_image_details_window_t3

0xad55,	// (0x00098b95) popup_image_details_window_t4

0xad70,	// (0x00098bb0) popup_image_details_window_t5

0x0004,

0xf716,	// (0x0009d556) popup_image_details_window_t

0xe1a3,	// (0x0009bfe3) bg_calc_paper_pane_ParamLimits

0x9e82,	// (0x00097cc2) grid_highlight_pane_cp013

0x9e8c,	// (0x00097ccc) list_calc_pane_ParamLimits

0x9e9e,	// (0x00097cde) scroll_pane_cp024

0xe1b7,	// (0x0009bff7) bg_calc_display_pane_ParamLimits

0x11d2,	// (0x0008f012) calc_display_pane_t1_ParamLimits

0x11e4,	// (0x0008f024) calc_display_pane_t2_ParamLimits

0x9ea6,	// (0x00097ce6) calc_display_pane_t3_ParamLimits

0xf16e,	// (0x0009cfae) calc_display_pane_t_ParamLimits

0x12a1,	// (0x0008f0e1) cell_calc_pane_g2

0x0001,

0xf18b,	// (0x0009cfcb) cell_calc_pane_g

0x12aa,	// (0x0008f0ea) cell_calc_pane_t1

0xe216,	// (0x0009c056) grid_highlight_pane_cp02_ParamLimits

0xe22c,	// (0x0009c06c) toolbar_button_pane_cp01_ParamLimits

0xe22c,	// (0x0009c06c) toolbar_button_pane_cp01

0xef60,	// (0x0009cda0) temp_image_control_pane_ParamLimits

0xef60,	// (0x0009cda0) temp_image_control_pane

0xefd4,	// (0x0009ce14) main_mp3_pane

0xad8a,	// (0x00098bca) temp_image_control_pane_g1_ParamLimits

0xad8a,	// (0x00098bca) temp_image_control_pane_g1

0xad98,	// (0x00098bd8) temp_image_control_pane_g2_ParamLimits

0xad98,	// (0x00098bd8) temp_image_control_pane_g2

0xadaa,	// (0x00098bea) temp_image_control_pane_g3_ParamLimits

0xadaa,	// (0x00098bea) temp_image_control_pane_g3

0x5447,	// (0x00093287) temp_image_control_pane_g4_ParamLimits

0x5447,	// (0x00093287) temp_image_control_pane_g4

0x0003,

0xf721,	// (0x0009d561) temp_image_control_pane_g_ParamLimits

0xf721,	// (0x0009d561) temp_image_control_pane_g

0xad8a,	// (0x00098bca) main_mp3_pane_g1

0x545a,	// (0x0009329a) main_mp3_pane_g2

0x0007,

0xf72a,	// (0x0009d56a) main_mp3_pane_g

0xaded,	// (0x00098c2d) main_mp3_pane_t1

0xe35c,	// (0x0009c19c) main_camera_pane_g8_ParamLimits

0xe35c,	// (0x0009c19c) main_camera_pane_g8

0x1a25,	// (0x0008f865) main_video_pane_g7_ParamLimits

0x1a25,	// (0x0008f865) main_video_pane_g7

0xa775,	// (0x000985b5) main_camera2_pane_t7_ParamLimits

0xa775,	// (0x000985b5) main_camera2_pane_t7

0xe4a4,	// (0x0009c2e4) scroll_pane_cp025_ParamLimits

0xe4a4,	// (0x0009c2e4) scroll_pane_cp025

0xe4b8,	// (0x0009c2f8) scroll_pane_cp026_ParamLimits

0xe4b8,	// (0x0009c2f8) scroll_pane_cp026

0xe4c7,	// (0x0009c307) wml_content_pane_ParamLimits

0x0bfb,	// (0x0008ea3b) main_touch_calib_pane

0x5524,	// (0x00093364) main_touch_calib_pane_g1

0x5530,	// (0x00093370) main_touch_calib_pane_g2

0x553c,	// (0x0009337c) main_touch_calib_pane_g3

0x5548,	// (0x00093388) main_touch_calib_pane_g4

0x0003,

0xf748,	// (0x0009d588) main_touch_calib_pane_g

0x5554,	// (0x00093394) main_touch_calib_pane_t1

0x556e,	// (0x000933ae) main_touch_calib_pane_t2

0x0004,

0xf751,	// (0x0009d591) main_touch_calib_pane_t

0xebcb,	// (0x0009ca0b) mup_progress_pane_cp02

0xebea,	// (0x0009ca2a) navi_pane_g1

0xec5a,	// (0x0009ca9a) navi_pane_mp_t3

0xefd4,	// (0x0009ce14) main_mp3_pane_ParamLimits

0x496f,	// (0x000927af) navi_pane_ParamLimits

0xad8a,	// (0x00098bca) main_mp3_pane_g1_ParamLimits

0x545a,	// (0x0009329a) main_mp3_pane_g2_ParamLimits

0x5468,	// (0x000932a8) main_mp3_pane_g3_ParamLimits

0x5468,	// (0x000932a8) main_mp3_pane_g3

0x5476,	// (0x000932b6) main_mp3_pane_g4_ParamLimits

0x5476,	// (0x000932b6) main_mp3_pane_g4

0xadba,	// (0x00098bfa) main_mp3_pane_g5_ParamLimits

0xadba,	// (0x00098bfa) main_mp3_pane_g5

0xadc8,	// (0x00098c08) main_mp3_pane_g6_ParamLimits

0xadc8,	// (0x00098c08) main_mp3_pane_g6

0xadd5,	// (0x00098c15) main_mp3_pane_g7_ParamLimits

0xadd5,	// (0x00098c15) main_mp3_pane_g7

0xade1,	// (0x00098c21) main_mp3_pane_g8_ParamLimits

0xade1,	// (0x00098c21) main_mp3_pane_g8

0xf72a,	// (0x0009d56a) main_mp3_pane_g_ParamLimits

0x5482,	// (0x000932c2) main_mp3_pane_t2

0x5490,	// (0x000932d0) main_mp3_pane_t3

0xadfb,	// (0x00098c3b) main_mp3_pane_t4

0xae09,	// (0x00098c49) main_mp3_pane_t5

0x0005,

0xf73b,	// (0x0009d57b) main_mp3_pane_t

0xae17,	// (0x00098c57) mup_progress_pane_cp01

0x0c59,	// (0x0008ea99) aid_zoom_text_secondary2

0xabd1,	// (0x00098a11) list_cale_ev2_pane

0xabd9,	// (0x00098a19) scroll_pane_cp023_ParamLimits

0x55c4,	// (0x00093404) field_cale_ev2_pane_ParamLimits

0x55c4,	// (0x00093404) field_cale_ev2_pane

0x55e4,	// (0x00093424) field_cale_ev2_pane_g1_ParamLimits

0x55e4,	// (0x00093424) field_cale_ev2_pane_g1

0x55f0,	// (0x00093430) field_cale_ev2_pane_g2_ParamLimits

0x55f0,	// (0x00093430) field_cale_ev2_pane_g2

0x5608,	// (0x00093448) field_cale_ev2_pane_g3_ParamLimits

0x5608,	// (0x00093448) field_cale_ev2_pane_g3

0x0003,

0xf75c,	// (0x0009d59c) field_cale_ev2_pane_g_ParamLimits

0xf75c,	// (0x0009d59c) field_cale_ev2_pane_g

0xae2b,	// (0x00098c6b) field_cale_ev2_pane_t1_ParamLimits

0xae2b,	// (0x00098c6b) field_cale_ev2_pane_t1

0xae42,	// (0x00098c82) field_cale_ev2_pane_t2_ParamLimits

0xae42,	// (0x00098c82) field_cale_ev2_pane_t2

0x0001,

0xf765,	// (0x0009d5a5) field_cale_ev2_pane_t_ParamLimits

0xf765,	// (0x0009d5a5) field_cale_ev2_pane_t

0x34b7,	// (0x000912f7) main_postcard_pane_g5_ParamLimits

0x34b7,	// (0x000912f7) main_postcard_pane_g5

0x34cd,	// (0x0009130d) main_postcard_pane_g6_ParamLimits

0x34cd,	// (0x0009130d) main_postcard_pane_g6

0x17e9,	// (0x0008f629) camera2_autofocus_pane_cp_ParamLimits

0x17e9,	// (0x0008f629) camera2_autofocus_pane_cp

0xefd4,	// (0x0009ce14) main_mup3_pane

0x5640,	// (0x00093480) main_mup3_pane_g1_ParamLimits

0x5640,	// (0x00093480) main_mup3_pane_g1

0x5662,	// (0x000934a2) main_mup3_pane_g2_ParamLimits

0x5662,	// (0x000934a2) main_mup3_pane_g2

0x56e0,	// (0x00093520) main_mup3_pane_g3_ParamLimits

0x56e0,	// (0x00093520) main_mup3_pane_g3

0x5726,	// (0x00093566) main_mup3_pane_g4_ParamLimits

0x5726,	// (0x00093566) main_mup3_pane_g4

0x576c,	// (0x000935ac) main_mup3_pane_g5_ParamLimits

0x576c,	// (0x000935ac) main_mup3_pane_g5

0x57b2,	// (0x000935f2) main_mup3_pane_g6_ParamLimits

0x57b2,	// (0x000935f2) main_mup3_pane_g6

0xae57,	// (0x00098c97) main_mup3_pane_g7_ParamLimits

0xae57,	// (0x00098c97) main_mup3_pane_g7

0x0007,

0xf775,	// (0x0009d5b5) main_mup3_pane_g_ParamLimits

0xf775,	// (0x0009d5b5) main_mup3_pane_g

0x5830,	// (0x00093670) main_mup3_pane_t1_ParamLimits

0x5830,	// (0x00093670) main_mup3_pane_t1

0x58a4,	// (0x000936e4) main_mup3_pane_t2_ParamLimits

0x58a4,	// (0x000936e4) main_mup3_pane_t2

0x5978,	// (0x000937b8) main_mup3_pane_t4_ParamLimits

0x5978,	// (0x000937b8) main_mup3_pane_t4

0x59ce,	// (0x0009380e) main_mup3_pane_t5_ParamLimits

0x59ce,	// (0x0009380e) main_mup3_pane_t5

0x5a8a,	// (0x000938ca) main_mup3_pane_t6_ParamLimits

0x5a8a,	// (0x000938ca) main_mup3_pane_t6

0x0005,

0xf786,	// (0x0009d5c6) main_mup3_pane_t_ParamLimits

0xf786,	// (0x0009d5c6) main_mup3_pane_t

0x5b42,	// (0x00093982) mup3_progress_pane_ParamLimits

0x5b42,	// (0x00093982) mup3_progress_pane

0x5bd8,	// (0x00093a18) popup_mup3_control_window_ParamLimits

0x5bd8,	// (0x00093a18) popup_mup3_control_window

0xae65,	// (0x00098ca5) popup_mup3_text_window

0x5c0a,	// (0x00093a4a) mup3_progress_pane_t1

0x5c29,	// (0x00093a69) mup3_progress_pane_t2

0xae6d,	// (0x00098cad) mup3_progress_pane_t3

0x0002,

0xf793,	// (0x0009d5d3) mup3_progress_pane_t

0xae8a,	// (0x00098cca) mup_progress_pane_cp03

0x0bfb,	// (0x0008ea3b) bg_tb_trans_pane_cp04

0x5c48,	// (0x00093a88) mup3_volume_pane

0x5c50,	// (0x00093a90) popup_mup3_control_window_g1

0x5c59,	// (0x00093a99) mup3_volume_pane_g1

0x5c62,	// (0x00093aa2) mup3_volume_pane_g2

0x5c6b,	// (0x00093aab) mup3_volume_pane_g3

0x0002,

0xf79a,	// (0x0009d5da) mup3_volume_pane_g

0x0bfb,	// (0x0008ea3b) bg_tb_trans_pane_cp03

0xae9a,	// (0x00098cda) popup_mup3_text_window_g1

0xaea2,	// (0x00098ce2) popup_mup3_text_window_t1

0xe1ff,	// (0x0009c03f) list_calc_item_pane_g1_ParamLimits

0xa85d,	// (0x0009869d) mup_volume_pane_cp_g1

0x5588,	// (0x000933c8) main_touch_calib_pane_t3

0x559c,	// (0x000933dc) main_touch_calib_pane_t4

0x55b0,	// (0x000933f0) main_touch_calib_pane_t5

0x0c05,	// (0x0008ea45) aid_cell_size_toolbar2

0x0c0d,	// (0x0008ea4d) aid_popup3_width_pane

0x0c49,	// (0x0008ea89) aid_zoom_text_msg_primary

0x9f66,	// (0x00097da6) vorec_t7

0xe1c3,	// (0x0009c003) bg_calc_paper_pane_g1_ParamLimits

0xe1cf,	// (0x0009c00f) bg_calc_paper_pane_g2_ParamLimits

0xe1db,	// (0x0009c01b) bg_calc_paper_pane_g3_ParamLimits

0xe1e7,	// (0x0009c027) bg_calc_paper_pane_g4_ParamLimits

0xe1f3,	// (0x0009c033) bg_calc_paper_pane_g5_ParamLimits

0x122b,	// (0x0008f06b) bg_calc_paper_pane_g6_ParamLimits

0x123a,	// (0x0008f07a) bg_calc_paper_pane_g7_ParamLimits

0x1249,	// (0x0008f089) bg_calc_paper_pane_g8_ParamLimits

0xf175,	// (0x0009cfb5) bg_calc_paper_pane_g_ParamLimits

0x125c,	// (0x0008f09c) calc_bg_paper_pane_g9_ParamLimits

0x1937,	// (0x0008f777) image_qvga_pane_ParamLimits

0x1937,	// (0x0008f777) image_qvga_pane

0xe0e4,	// (0x0009bf24) bg_popup_sub_pane_cp04_ParamLimits

0xee97,	// (0x0009ccd7) popup_mup_playback_window_g1_ParamLimits

0xeea3,	// (0x0009cce3) popup_mup_playback_window_t1_ParamLimits

0xeeb8,	// (0x0009ccf8) popup_mup_playback_window_t2_ParamLimits

0x00a1,	// (0x0008dee1) popup_mup_playback_window_t_ParamLimits

0x50ea,	// (0x00092f2a) main_mup2_pane_g3_ParamLimits

0x50ea,	// (0x00092f2a) main_mup2_pane_g3

0x1d4b,	// (0x0008fb8b) popup_toolbar_window_cp04

0x3bb1,	// (0x000919f1) popup_call2_audio_second_window_g3_ParamLimits

0x3bb1,	// (0x000919f1) popup_call2_audio_second_window_g3

0x3fbb,	// (0x00091dfb) popup_call2_audio_first_window_g4_ParamLimits

0x3fbb,	// (0x00091dfb) popup_call2_audio_first_window_g4

0xa2e7,	// (0x00098127) popup_call2_audio_in_window_g4_ParamLimits

0xa2e7,	// (0x00098127) popup_call2_audio_in_window_g4

0x35e4,	// (0x00091424) aid_area_sk_bg_cut_ParamLimits

0x35e4,	// (0x00091424) aid_area_sk_bg_cut

0xeecd,	// (0x0009cd0d) aid_area_sk_bg_cut_2_ParamLimits

0xeecd,	// (0x0009cd0d) aid_area_sk_bg_cut_2

0x53ed,	// (0x0009322d) aid_placing_details_win

0x53f5,	// (0x00093235) aid_placing_details_win_2

0xaccc,	// (0x00098b0c) camera2_autofocus_pane_g1_ParamLimits

0x0e16,	// (0x0008ec56) popup_fixed_preview_cale_window_ParamLimits

0x0e16,	// (0x0008ec56) popup_fixed_preview_cale_window

0xeca9,	// (0x0009cae9) navi_slider_pane_g3

0xecb2,	// (0x0009caf2) navi_slider_pane_g4

0xecbb,	// (0x0009cafb) navi_slider_pane_g5

0xeca9,	// (0x0009cae9) navi_slider_pane_g6

0xa026,	// (0x00097e66) navi_slider_pane_g7

0xedce,	// (0x0009cc0e) mup_scale_pane_g3

0xedd7,	// (0x0009cc17) mup_scale_pane_g4

0xede0,	// (0x0009cc20) mup_scale_pane_g5

0x3297,	// (0x000910d7) mup_scale_pane_g6

0x32a0,	// (0x000910e0) mup_scale_pane_g7

0xeca9,	// (0x0009cae9) cams2_slider_pane_g3

0xa912,	// (0x00098752) cams2_slider_pane_g4

0xa91a,	// (0x0009875a) cams2_slider_pane_g5

0xeca9,	// (0x0009cae9) cams2_slider_pane_g6

0xa922,	// (0x00098762) cams2_slider_pane_g7

0xab4e,	// (0x0009898e) camera2_autofocus_pane_cp_g1

0xaeb0,	// (0x00098cf0) bg_popup_preview_window_pane_cp02_ParamLimits

0xaeb0,	// (0x00098cf0) bg_popup_preview_window_pane_cp02

0xaebc,	// (0x00098cfc) list_fp_cale_pane_ParamLimits

0xaebc,	// (0x00098cfc) list_fp_cale_pane

0xaec8,	// (0x00098d08) popup_fixed_preview_cale_window_t1_ParamLimits

0xaec8,	// (0x00098d08) popup_fixed_preview_cale_window_t1

0x5c74,	// (0x00093ab4) popup_fixed_preview_cale_window_t2_ParamLimits

0x5c74,	// (0x00093ab4) popup_fixed_preview_cale_window_t2

0x5c89,	// (0x00093ac9) popup_fixed_preview_cale_window_t3_ParamLimits

0x5c89,	// (0x00093ac9) popup_fixed_preview_cale_window_t3

0x0002,

0xf7a1,	// (0x0009d5e1) popup_fixed_preview_cale_window_t_ParamLimits

0xf7a1,	// (0x0009d5e1) popup_fixed_preview_cale_window_t

0x5c9e,	// (0x00093ade) list_single_fp_cale_pane_ParamLimits

0x5c9e,	// (0x00093ade) list_single_fp_cale_pane

0xaee6,	// (0x00098d26) list_single_fp_cale_pane_g1_ParamLimits

0xaee6,	// (0x00098d26) list_single_fp_cale_pane_g1

0xaef2,	// (0x00098d32) list_single_fp_cale_pane_g2_ParamLimits

0xaef2,	// (0x00098d32) list_single_fp_cale_pane_g2

0x0002,

0xf7a8,	// (0x0009d5e8) list_single_fp_cale_pane_g_ParamLimits

0xf7a8,	// (0x0009d5e8) list_single_fp_cale_pane_g

0xaf0b,	// (0x00098d4b) list_single_fp_cale_pane_t1_ParamLimits

0xaf0b,	// (0x00098d4b) list_single_fp_cale_pane_t1

0xaf1d,	// (0x00098d5d) list_single_fp_cale_pane_t2_ParamLimits

0xaf1d,	// (0x00098d5d) list_single_fp_cale_pane_t2

0x0001,

0xf7af,	// (0x0009d5ef) list_single_fp_cale_pane_t_ParamLimits

0xf7af,	// (0x0009d5ef) list_single_fp_cale_pane_t

0x0000,

0x0000,

0x0000,

0x0000,

0x0bfb,	// (0x0008ea3b) main_dialer_pane

0x5cb3,	// (0x00093af3) aid_cell_size_keypad

0x5cbd,	// (0x00093afd) dialer_ne_pane

0x5cc5,	// (0x00093b05) grid_dialer_command_1_pane

0x5ccd,	// (0x00093b0d) grid_dialer_command_2_pane

0x5cd5,	// (0x00093b15) grid_dialer_keypad_pane

0x5ce7,	// (0x00093b27) bg_popup_call_pane_cp06_ParamLimits

0x5ce7,	// (0x00093b27) bg_popup_call_pane_cp06

0x5cf3,	// (0x00093b33) dialer_ne_clear_pane_ParamLimits

0x5cf3,	// (0x00093b33) dialer_ne_clear_pane

0xaf50,	// (0x00098d90) dialer_ne_pane_g1

0xaf58,	// (0x00098d98) dialer_ne_pane_t1_ParamLimits

0xaf58,	// (0x00098d98) dialer_ne_pane_t1

0x5cff,	// (0x00093b3f) dialer_ne_pane_t2_ParamLimits

0x5cff,	// (0x00093b3f) dialer_ne_pane_t2

0x5d29,	// (0x00093b69) dialer_ne_pane_t3_ParamLimits

0x5d29,	// (0x00093b69) dialer_ne_pane_t3

0x0002,

0xf7b4,	// (0x0009d5f4) dialer_ne_pane_t_ParamLimits

0xf7b4,	// (0x0009d5f4) dialer_ne_pane_t

0x5d59,	// (0x00093b99) dialer_ne_pane_t3_copy1_ParamLimits

0x5d59,	// (0x00093b99) dialer_ne_pane_t3_copy1

0x5d88,	// (0x00093bc8) cell_dialer_keypad_pane_ParamLimits

0x5d88,	// (0x00093bc8) cell_dialer_keypad_pane

0x5d9f,	// (0x00093bdf) cell_dialer_command_1_pane_ParamLimits

0x5d9f,	// (0x00093bdf) cell_dialer_command_1_pane

0x5db5,	// (0x00093bf5) cell_dialer_command_2_pane_ParamLimits

0x5db5,	// (0x00093bf5) cell_dialer_command_2_pane

0xaf6a,	// (0x00098daa) bg_button_pane_cp02_ParamLimits

0xaf6a,	// (0x00098daa) bg_button_pane_cp02

0x5dc4,	// (0x00093c04) cell_dialer_keypad_pane_g1_ParamLimits

0x5dc4,	// (0x00093c04) cell_dialer_keypad_pane_g1

0xaf6a,	// (0x00098daa) bg_button_pane_cp03_ParamLimits

0xaf6a,	// (0x00098daa) bg_button_pane_cp03

0x5dd8,	// (0x00093c18) cell_dialer_command_1_pane_g1_ParamLimits

0x5dd8,	// (0x00093c18) cell_dialer_command_1_pane_g1

0xaf76,	// (0x00098db6) bg_button_pane_cp04

0x5dec,	// (0x00093c2c) cell_dialer_command_2_pane_g1

0xec98,	// (0x0009cad8) bg_button_pane_cp06

0xaf7e,	// (0x00098dbe) dialer_ne_clear_pane_g1

0x2ddb,	// (0x00090c1b) navi_pane_g2

0x2e09,	// (0x00090c49) navi_pane_g3

0x0002,

0xf404,	// (0x0009d244) navi_pane_g

0x2e32,	// (0x00090c72) navi_pane_mv_g2

0x2e59,	// (0x00090c99) navi_pane_mv_g5

0x2e61,	// (0x00090ca1) navi_pane_mv_t1

0xe1b7,	// (0x0009bff7) main_clock2_pane

0x5e24,	// (0x00093c64) main_clock2_list_pane_ParamLimits

0x5e24,	// (0x00093c64) main_clock2_list_pane

0x5e5c,	// (0x00093c9c) main_clock2_pane_t1_ParamLimits

0x5e5c,	// (0x00093c9c) main_clock2_pane_t1

0x5e98,	// (0x00093cd8) main_clock2_pane_t2_ParamLimits

0x5e98,	// (0x00093cd8) main_clock2_pane_t2

0x0004,

0xf7bb,	// (0x0009d5fb) main_clock2_pane_t_ParamLimits

0xf7bb,	// (0x0009d5fb) main_clock2_pane_t

0x5f35,	// (0x00093d75) popup_clock_analogue_window_cp03_ParamLimits

0x5f35,	// (0x00093d75) popup_clock_analogue_window_cp03

0x5f5a,	// (0x00093d9a) popup_clock_digital_window_cp02_ParamLimits

0x5f5a,	// (0x00093d9a) popup_clock_digital_window_cp02

0x5fcb,	// (0x00093e0b) main_clock2_list_single_pane_ParamLimits

0x5fcb,	// (0x00093e0b) main_clock2_list_single_pane

0xec98,	// (0x0009cad8) list_highlight_pane_cp05

0xaf86,	// (0x00098dc6) main_clock2_list_single_pane_t1

0x1d4b,	// (0x0008fb8b) popup_toolbar_window_cp04_ParamLimits

0x5417,	// (0x00093257) camera2_autofocus_pane_g2_ParamLimits

0x5417,	// (0x00093257) camera2_autofocus_pane_g2

0x5423,	// (0x00093263) camera2_autofocus_pane_g3_ParamLimits

0x5423,	// (0x00093263) camera2_autofocus_pane_g3

0x542f,	// (0x0009326f) camera2_autofocus_pane_g4_ParamLimits

0x542f,	// (0x0009326f) camera2_autofocus_pane_g4

0x543b,	// (0x0009327b) camera2_autofocus_pane_g5_ParamLimits

0x543b,	// (0x0009327b) camera2_autofocus_pane_g5

0x0004,

0xf704,	// (0x0009d544) camera2_autofocus_pane_g_ParamLimits

0xf704,	// (0x0009d544) camera2_autofocus_pane_g

0x5620,	// (0x00093460) camera2_autofocus_pane_cp_g2

0x5628,	// (0x00093468) camera2_autofocus_pane_cp_g3

0x5630,	// (0x00093470) camera2_autofocus_pane_cp_g4

0x5638,	// (0x00093478) camera2_autofocus_pane_cp_g5

0x0004,

0xf76a,	// (0x0009d5aa) camera2_autofocus_pane_cp_g

0x5cdf,	// (0x00093b1f) popup_dialer_spcha_window

0x0bfb,	// (0x0008ea3b) bg_popup_sub_pane_cp07

0xaf94,	// (0x00098dd4) list_spcha_pane

0xaf9c,	// (0x00098ddc) list_single_spcha_pane_ParamLimits

0xaf9c,	// (0x00098ddc) list_single_spcha_pane

0x0bfb,	// (0x0008ea3b) list_highlight_pane_cp06

0xafad,	// (0x00098ded) list_single_spcha_pane_t1

0xa091,	// (0x00097ed1) popup_call2_audio_out_window_g4_ParamLimits

0xa091,	// (0x00097ed1) popup_call2_audio_out_window_g4

0x0bfb,	// (0x0008ea3b) main_imed2_pane

0xa670,	// (0x000984b0) popup_imed_adjust2_window

0x47f4,	// (0x00092634) popup_imed_trans_window_ParamLimits

0x47f4,	// (0x00092634) popup_imed_trans_window

0xa98c,	// (0x000987cc) popup_blid_sat_info2_window_t1

0xa99a,	// (0x000987da) popup_blid_sat_info2_window_t2

0x000a,

0xf699,	// (0x0009d4d9) popup_blid_sat_info2_window_t

0x6075,	// (0x00093eb5) aid_size_cell_colour_35

0x6095,	// (0x00093ed5) aid_size_cell_colour_112

0x60b5,	// (0x00093ef5) aid_size_cell_effect

0xa648,	// (0x00098488) bg_tb_trans_pane_cp02

0xe7d9,	// (0x0009c619) heading_imed_pane

0x60d5,	// (0x00093f15) listscroll_imed_pane

0xafbb,	// (0x00098dfb) heading_imed_pane_g1

0xafc3,	// (0x00098e03) heading_imed_pane_t1

0xafd1,	// (0x00098e11) grid_imed_colour_35_pane_ParamLimits

0xafd1,	// (0x00098e11) grid_imed_colour_35_pane

0x60e1,	// (0x00093f21) grid_imed_effect_pane

0xafe8,	// (0x00098e28) list_imed_aspect_pane

0x60f7,	// (0x00093f37) scroll_pane_cp027_ParamLimits

0x60f7,	// (0x00093f37) scroll_pane_cp027

0x6108,	// (0x00093f48) cell_imed_effect_pane_ParamLimits

0x6108,	// (0x00093f48) cell_imed_effect_pane

0xaff0,	// (0x00098e30) cell_imed_colour_pane_ParamLimits

0xaff0,	// (0x00098e30) cell_imed_colour_pane

0xb032,	// (0x00098e72) cell_imed_colour_pane_g1_ParamLimits

0xb032,	// (0x00098e72) cell_imed_colour_pane_g1

0xb043,	// (0x00098e83) hgihlgiht_grid_pane_cp016_ParamLimits

0xb043,	// (0x00098e83) hgihlgiht_grid_pane_cp016

0x612f,	// (0x00093f6f) cell_imed_effect_pane_g1

0x6137,	// (0x00093f77) grid_highlight_pane_cp017

0xb054,	// (0x00098e94) list_imed_single_pane_ParamLimits

0xb054,	// (0x00098e94) list_imed_single_pane

0x0bfb,	// (0x0008ea3b) list_highlight_pane_cp07

0xb069,	// (0x00098ea9) list_imed_aspect_pane_comp1_t1

0xa648,	// (0x00098488) bg_tb_trans_pane_cp05

0xb08b,	// (0x00098ecb) popup_imed_adjust2_window_g1

0xb0b2,	// (0x00098ef2) popup_imed_adjust2_window_t1

0xb0ca,	// (0x00098f0a) slider_imed_adjust_pane

0xb0de,	// (0x00098f1e) slider_imed_adjust_pane_g1

0xb0ee,	// (0x00098f2e) slider_imed_adjust_pane_g2

0xb0fe,	// (0x00098f3e) slider_imed_adjust_pane_g3

0xb10f,	// (0x00098f4f) slider_imed_adjust_pane_g4

0x0003,

0xf7d8,	// (0x0009d618) slider_imed_adjust_pane_g

0x6140,	// (0x00093f80) aid_size_cell_clipart2

0x614c,	// (0x00093f8c) grid_imed_clipart_pane

0xb120,	// (0x00098f60) scroll_pane_cp031

0x6156,	// (0x00093f96) cell_imed_clipart_pane_ParamLimits

0x6156,	// (0x00093f96) cell_imed_clipart_pane

0x6178,	// (0x00093fb8) cell_imed_clipart_pane_g1

0x0bfb,	// (0x0008ea3b) grid_highlight_pane_cp014

0x5e39,	// (0x00093c79) main_clock2_pane_g1_ParamLimits

0x5e39,	// (0x00093c79) main_clock2_pane_g1

0x5f76,	// (0x00093db6) aid_call2_pane_cp10

0x5f88,	// (0x00093dc8) aid_call_pane_cp10

0xebbf,	// (0x0009c9ff) popup_clock_analogue_window_cp10_g1

0xebbf,	// (0x0009c9ff) popup_clock_analogue_window_cp10_g2

0x5f9a,	// (0x00093dda) popup_clock_analogue_window_cp10_g3

0x5f9a,	// (0x00093dda) popup_clock_analogue_window_cp10_g4

0xebbf,	// (0x0009c9ff) popup_clock_analogue_window_cp10_g5

0x0004,

0xf7c6,	// (0x0009d606) popup_clock_analogue_window_cp10_g

0x5fac,	// (0x00093dec) popup_clock_analogue_window_cp10_t1

0x5fdd,	// (0x00093e1d) clock_digital_number_pane_cp10_ParamLimits

0x5fdd,	// (0x00093e1d) clock_digital_number_pane_cp10

0x5ff5,	// (0x00093e35) clock_digital_number_pane_cp11_ParamLimits

0x5ff5,	// (0x00093e35) clock_digital_number_pane_cp11

0x600d,	// (0x00093e4d) clock_digital_number_pane_cp12_ParamLimits

0x600d,	// (0x00093e4d) clock_digital_number_pane_cp12

0x6025,	// (0x00093e65) clock_digital_number_pane_cp13_ParamLimits

0x6025,	// (0x00093e65) clock_digital_number_pane_cp13

0x603d,	// (0x00093e7d) clock_digital_separator_pane_cp10_ParamLimits

0x603d,	// (0x00093e7d) clock_digital_separator_pane_cp10

0x6055,	// (0x00093e95) popup_clock_digital_window_cp02_t1_ParamLimits

0x6055,	// (0x00093e95) popup_clock_digital_window_cp02_t1

0xe0dc,	// (0x0009bf1c) clock_digital_number_pane_cp10_g1

0xe0dc,	// (0x0009bf1c) clock_digital_number_pane_cp10_g2

0x0001,

0x03a9,	// (0x0008e1e9) clock_digital_number_pane_cp10_g

0xe0dc,	// (0x0009bf1c) clock_digital_separator_pane_cp10_g1

0xe0dc,	// (0x0009bf1c) clock_digital_separator_pane_g2_cp10

0xec68,	// (0x0009caa8) navi_pane_vded_g4

0xec71,	// (0x0009cab1) navi_pane_vded_g5

0xec7a,	// (0x0009caba) navi_pane_vded_t1

0x0bfb,	// (0x0008ea3b) main_vded_pane

0x6181,	// (0x00093fc1) main_vded_pane_g1

0x618b,	// (0x00093fcb) main_vded_pane_g2

0x6195,	// (0x00093fd5) main_vded_pane_g3

0x0002,

0xf7e1,	// (0x0009d621) main_vded_pane_g

0x619f,	// (0x00093fdf) main_vded_pane_t1

0x61ad,	// (0x00093fed) main_vded_pane_t2

0x0001,

0xf7e8,	// (0x0009d628) main_vded_pane_t

0x61bb,	// (0x00093ffb) vded_slider_pane

0x61c3,	// (0x00094003) vded_video_pane

0xb128,	// (0x00098f68) vded_video_pane_g1

0x61cb,	// (0x0009400b) vded_video_pane_g2

0xab4e,	// (0x0009898e) vded_video_pane_g3

0x0002,

0xf7ed,	// (0x0009d62d) vded_video_pane_g

0xb132,	// (0x00098f72) vded_slider_pane_g1

0xa85d,	// (0x0009869d) vded_slider_pane_g2

0xb13b,	// (0x00098f7b) vded_slider_pane_g3

0xb144,	// (0x00098f84) vded_slider_pane_g4

0xb14d,	// (0x00098f8d) vded_slider_pane_g5

0x0004,

0xf7f4,	// (0x0009d634) vded_slider_pane_g

0x5bc0,	// (0x00093a00) mup3_rocker_pane_ParamLimits

0x5bc0,	// (0x00093a00) mup3_rocker_pane

0x61d4,	// (0x00094014) mup3_control_keys_pane_g1

0x61dc,	// (0x0009401c) mup3_control_keys_pane_g2

0x61e4,	// (0x00094024) mup3_control_keys_pane_g3

0x61ec,	// (0x0009402c) mup3_control_keys_pane_g4

0x0003,

0xf7ff,	// (0x0009d63f) mup3_control_keys_pane_g

0x0e57,	// (0x0008ec97) popup_toolbar2_fixed_window_cp01_ParamLimits

0x0e57,	// (0x0008ec97) popup_toolbar2_fixed_window_cp01

0x5bf4,	// (0x00093a34) popup_toolbar2_fixed_window_cp02_ParamLimits

0x5bf4,	// (0x00093a34) popup_toolbar2_fixed_window_cp02

0x3d23,	// (0x00091b63) popup_call2_audio_second_window_t4_ParamLimits

0x3d23,	// (0x00091b63) popup_call2_audio_second_window_t4

0x4251,	// (0x00092091) popup_call2_audio_first_window_t6_ParamLimits

0x4251,	// (0x00092091) popup_call2_audio_first_window_t6

0xa194,	// (0x00097fd4) popup_call2_audio_out_window_t6_ParamLimits

0xa194,	// (0x00097fd4) popup_call2_audio_out_window_t6

0x0bfb,	// (0x0008ea3b) main_vitu_pane

0x61fc,	// (0x0009403c) aid_size_cell_itu_ParamLimits

0x61fc,	// (0x0009403c) aid_size_cell_itu

0xefd4,	// (0x0009ce14) bg_popup_window_pane_cp08_ParamLimits

0xefd4,	// (0x0009ce14) bg_popup_window_pane_cp08

0x6212,	// (0x00094052) field_vitu_entry_pane_ParamLimits

0x6212,	// (0x00094052) field_vitu_entry_pane

0x6229,	// (0x00094069) grid_vitu_function_pane_ParamLimits

0x6229,	// (0x00094069) grid_vitu_function_pane

0x6244,	// (0x00094084) grid_vitu_itu_pane_ParamLimits

0x6244,	// (0x00094084) grid_vitu_itu_pane

0x6262,	// (0x000940a2) cell_vitu_itu_pane_ParamLimits

0x6262,	// (0x000940a2) cell_vitu_itu_pane

0x6284,	// (0x000940c4) cell_vitu_function_pane_ParamLimits

0x6284,	// (0x000940c4) cell_vitu_function_pane

0xefd4,	// (0x0009ce14) bg_popup_sub_pane_cp08_ParamLimits

0xefd4,	// (0x0009ce14) bg_popup_sub_pane_cp08

0x629d,	// (0x000940dd) field_vitu_entry_pane_t1_ParamLimits

0x629d,	// (0x000940dd) field_vitu_entry_pane_t1

0xb16e,	// (0x00098fae) field_vitu_entry_pane_t2_ParamLimits

0xb16e,	// (0x00098fae) field_vitu_entry_pane_t2

0x0001,

0xf80d,	// (0x0009d64d) field_vitu_entry_pane_t_ParamLimits

0xf80d,	// (0x0009d64d) field_vitu_entry_pane_t

0xb18b,	// (0x00098fcb) bg_button_pane_cp05_ParamLimits

0xb18b,	// (0x00098fcb) bg_button_pane_cp05

0x62bb,	// (0x000940fb) cell_vitu_itu_pane_g1

0x62d3,	// (0x00094113) cell_vitu_itu_pane_t1_ParamLimits

0x62d3,	// (0x00094113) cell_vitu_itu_pane_t1

0x62e5,	// (0x00094125) cell_vitu_itu_pane_t2_ParamLimits

0x62e5,	// (0x00094125) cell_vitu_itu_pane_t2

0x0002,

0xf812,	// (0x0009d652) cell_vitu_itu_pane_t_ParamLimits

0xf812,	// (0x0009d652) cell_vitu_itu_pane_t

0xb199,	// (0x00098fd9) bg_button_pane_cp07

0x631a,	// (0x0009415a) cell_vitu_function_pane_g1

0x9e7a,	// (0x00097cba) main_calc_pane_g1

0x0c3d,	// (0x0008ea7d) aid_visual_content_pane

0x0bfb,	// (0x0008ea3b) main_vradio_pane

0x6323,	// (0x00094163) main_vradio_pane_g1_ParamLimits

0x6323,	// (0x00094163) main_vradio_pane_g1

0xb1a3,	// (0x00098fe3) main_vradio_pane_g2_ParamLimits

0xb1a3,	// (0x00098fe3) main_vradio_pane_g2

0x0001,

0xf819,	// (0x0009d659) main_vradio_pane_g_ParamLimits

0xf819,	// (0x0009d659) main_vradio_pane_g

0x633c,	// (0x0009417c) main_vradio_pane_t1_ParamLimits

0x633c,	// (0x0009417c) main_vradio_pane_t1

0x6351,	// (0x00094191) main_vradio_pane_t2_ParamLimits

0x6351,	// (0x00094191) main_vradio_pane_t2

0xb1b0,	// (0x00098ff0) main_vradio_pane_t3_ParamLimits

0xb1b0,	// (0x00098ff0) main_vradio_pane_t3

0x0002,

0xf81e,	// (0x0009d65e) main_vradio_pane_t_ParamLimits

0xf81e,	// (0x0009d65e) main_vradio_pane_t

0x6366,	// (0x000941a6) vradio_rocker_control_pane_ParamLimits

0x6366,	// (0x000941a6) vradio_rocker_control_pane

0x6378,	// (0x000941b8) vradio_station_info_pane_ParamLimits

0x6378,	// (0x000941b8) vradio_station_info_pane

0xb1c4,	// (0x00099004) vradio_frequency_info_pane_ParamLimits

0xb1c4,	// (0x00099004) vradio_frequency_info_pane

0xab4e,	// (0x0009898e) vradio_station_info_pane_g1

0xb1d3,	// (0x00099013) vradio_station_info_pane_t1_ParamLimits

0xb1d3,	// (0x00099013) vradio_station_info_pane_t1

0xb1f5,	// (0x00099035) vradio_station_info_pane_t2_ParamLimits

0xb1f5,	// (0x00099035) vradio_station_info_pane_t2

0x0001,

0xf825,	// (0x0009d665) vradio_station_info_pane_t_ParamLimits

0xf825,	// (0x0009d665) vradio_station_info_pane_t

0xb207,	// (0x00099047) vradio_tuning_pane

0xb20f,	// (0x0009904f) vradio_rocker_control_pane_g1

0xb217,	// (0x00099057) vradio_rocker_control_pane_g2

0xb21f,	// (0x0009905f) vradio_rocker_control_pane_g3

0xb227,	// (0x00099067) vradio_rocker_control_pane_g4

0xb22f,	// (0x0009906f) vradio_rocker_control_pane_g5

0x0004,

0xf82a,	// (0x0009d66a) vradio_rocker_control_pane_g

0x638a,	// (0x000941ca) vradio_frequency_info_pane_g1

0xb237,	// (0x00099077) vradio_frequency_info_pane_t1_ParamLimits

0xb237,	// (0x00099077) vradio_frequency_info_pane_t1

0x6394,	// (0x000941d4) vradio_tuning_pane_g1

0x639f,	// (0x000941df) vradio_tuning_pane_t1

0x0c9a,	// (0x0008eada) area_side_right_pane_ParamLimits

0x0c9a,	// (0x0008eada) area_side_right_pane

0xa60f,	// (0x0009844f) status_small_pane_g1

0xa617,	// (0x00098457) status_small_pane_g2

0xa620,	// (0x00098460) status_small_pane_g3

0xa629,	// (0x00098469) status_small_pane_g4

0x0003,

0xf5ef,	// (0x0009d42f) status_small_pane_g

0xa632,	// (0x00098472) status_small_pane_t1

0x0bfb,	// (0x0008ea3b) main_video3_pane

0xb24b,	// (0x0009908b) cams_zoom_vslider_pane

0xb253,	// (0x00099093) image3_wide_pane_ParamLimits

0xb253,	// (0x00099093) image3_wide_pane

0xb26d,	// (0x000990ad) image3_wide_small_pane

0xb279,	// (0x000990b9) main_video3_pane_g1_ParamLimits

0xb279,	// (0x000990b9) main_video3_pane_g1

0xb295,	// (0x000990d5) main_video3_pane_g2_ParamLimits

0xb295,	// (0x000990d5) main_video3_pane_g2

0x0001,

0xf835,	// (0x0009d675) main_video3_pane_g_ParamLimits

0xf835,	// (0x0009d675) main_video3_pane_g

0xb2b1,	// (0x000990f1) main_video3_pane_t1_ParamLimits

0xb2b1,	// (0x000990f1) main_video3_pane_t1

0xb2dc,	// (0x0009911c) main_video3_pane_t2_ParamLimits

0xb2dc,	// (0x0009911c) main_video3_pane_t2

0xb307,	// (0x00099147) main_video3_pane_t3_ParamLimits

0xb307,	// (0x00099147) main_video3_pane_t3

0x0002,

0xf83a,	// (0x0009d67a) main_video3_pane_t_ParamLimits

0xf83a,	// (0x0009d67a) main_video3_pane_t

0xb334,	// (0x00099174) cams_zoom_vslider_pane_g1

0xb33d,	// (0x0009917d) cams_zoom_vslider_pane_g2

0x0001,

0xf841,	// (0x0009d681) cams_zoom_vslider_pane_g

0xb345,	// (0x00099185) small_slider_vertical_pane

0xab4e,	// (0x0009898e) small_slider_vertical_pane_g1

0xab4e,	// (0x0009898e) small_slider_vertical_pane_g2

0xb34d,	// (0x0009918d) small_slider_vertical_pane_g3

0x0002,

0xf846,	// (0x0009d686) small_slider_vertical_pane_g

0x0bfb,	// (0x0008ea3b) main_hwr_training_pane

0xb356,	// (0x00099196) hwr_training_instruct_pane_ParamLimits

0xb356,	// (0x00099196) hwr_training_instruct_pane

0x63ae,	// (0x000941ee) hwr_training_navi_pane_ParamLimits

0x63ae,	// (0x000941ee) hwr_training_navi_pane

0x63cd,	// (0x0009420d) hwr_training_write_pane_ParamLimits

0x63cd,	// (0x0009420d) hwr_training_write_pane

0x0bfb,	// (0x0008ea3b) bg_frame_shadow_pane

0xb38d,	// (0x000991cd) hwr_training_write_pane_g1

0xb395,	// (0x000991d5) hwr_training_write_pane_g2

0xb39d,	// (0x000991dd) hwr_training_write_pane_g3

0xb3a5,	// (0x000991e5) hwr_training_write_pane_g4

0xb3ad,	// (0x000991ed) hwr_training_write_pane_g5

0xb3b5,	// (0x000991f5) hwr_training_write_pane_g6

0xb3bd,	// (0x000991fd) hwr_training_write_pane_g7

0x0006,

0xf84d,	// (0x0009d68d) hwr_training_write_pane_g

0xb3c5,	// (0x00099205) hwr_training_navi_pane_g1_ParamLimits

0xb3c5,	// (0x00099205) hwr_training_navi_pane_g1

0xb3d7,	// (0x00099217) hwr_training_navi_pane_g2_ParamLimits

0xb3d7,	// (0x00099217) hwr_training_navi_pane_g2

0xb3e9,	// (0x00099229) hwr_training_navi_pane_g3_ParamLimits

0xb3e9,	// (0x00099229) hwr_training_navi_pane_g3

0xb3f9,	// (0x00099239) hwr_training_navi_pane_g4_ParamLimits

0xb3f9,	// (0x00099239) hwr_training_navi_pane_g4

0x0004,

0xf85c,	// (0x0009d69c) hwr_training_navi_pane_g_ParamLimits

0xf85c,	// (0x0009d69c) hwr_training_navi_pane_g

0xb406,	// (0x00099246) hwr_training_navi_pane_t1

0x6415,	// (0x00094255) list_single_hwr_training_instruct_pane_ParamLimits

0x6415,	// (0x00094255) list_single_hwr_training_instruct_pane

0xb414,	// (0x00099254) list_single_hwr_training_instruct_pane_t1

0xaa8e,	// (0x000988ce) bg_frame_shadow_pane_g1

0xb423,	// (0x00099263) bg_frame_shadow_pane_g2

0xb42b,	// (0x0009926b) bg_frame_shadow_pane_g3

0xb433,	// (0x00099273) bg_frame_shadow_pane_g4

0xb43b,	// (0x0009927b) bg_frame_shadow_pane_g5

0xb443,	// (0x00099283) bg_frame_shadow_pane_g6

0xb44b,	// (0x0009928b) bg_frame_shadow_pane_g7

0xe270,	// (0x0009c0b0) bg_frame_shadow_pane_g8

0x0007,

0xf867,	// (0x0009d6a7) bg_frame_shadow_pane_g

0x0bfb,	// (0x0008ea3b) main_video_tele_dialer_pane

0x642a,	// (0x0009426a) aid_size_cell_video_keypad_ParamLimits

0x642a,	// (0x0009426a) aid_size_cell_video_keypad

0x6444,	// (0x00094284) grid_video_dialer_keypad_pane_ParamLimits

0x6444,	// (0x00094284) grid_video_dialer_keypad_pane

0x648e,	// (0x000942ce) video_down_pane_cp_ParamLimits

0x648e,	// (0x000942ce) video_down_pane_cp

0x649e,	// (0x000942de) cell_video_dialer_keypad_pane_ParamLimits

0x649e,	// (0x000942de) cell_video_dialer_keypad_pane

0xb46f,	// (0x000992af) bg_button_pane_cp08_ParamLimits

0xb46f,	// (0x000992af) bg_button_pane_cp08

0x64c0,	// (0x00094300) cell_video_dialer_keypad_pane_g1_ParamLimits

0x64c0,	// (0x00094300) cell_video_dialer_keypad_pane_g1

0x5baa,	// (0x000939ea) mup3_rocker2_pane_ParamLimits

0x5baa,	// (0x000939ea) mup3_rocker2_pane

0xab4e,	// (0x0009898e) mup3_rocker2_pane_g1

0x46d5,	// (0x00092515) main_dialer2_pane

0x0bfb,	// (0x0008ea3b) main_mp4_pane

0xd67c,	// (0x0009b4bc) main_mp4_pane_g1_ParamLimits

0xd67c,	// (0x0009b4bc) main_mp4_pane_g1

0xd67c,	// (0x0009b4bc) main_mp4_pane_g2_ParamLimits

0xd67c,	// (0x0009b4bc) main_mp4_pane_g2

0x64fa,	// (0x0009433a) main_mp4_pane_g3_ParamLimits

0x64fa,	// (0x0009433a) main_mp4_pane_g3

0xd68a,	// (0x0009b4ca) main_mp4_pane_g4_ParamLimits

0xd68a,	// (0x0009b4ca) main_mp4_pane_g4

0xd6b2,	// (0x0009b4f2) main_mp4_pane_g5_ParamLimits

0xd6b2,	// (0x0009b4f2) main_mp4_pane_g5

0x0005,

0xf887,	// (0x0009d6c7) main_mp4_pane_g_ParamLimits

0xf887,	// (0x0009d6c7) main_mp4_pane_g

0xd702,	// (0x0009b542) main_mp4_pane_t1_ParamLimits

0xd702,	// (0x0009b542) main_mp4_pane_t1

0xd75e,	// (0x0009b59e) main_mp4_pane_t2_ParamLimits

0xd75e,	// (0x0009b59e) main_mp4_pane_t2

0xb47b,	// (0x000992bb) main_mp4_pane_t3_ParamLimits

0xb47b,	// (0x000992bb) main_mp4_pane_t3

0xd7b0,	// (0x0009b5f0) main_mp4_pane_t4_ParamLimits

0xd7b0,	// (0x0009b5f0) main_mp4_pane_t4

0x0003,

0xf894,	// (0x0009d6d4) main_mp4_pane_t_ParamLimits

0xf894,	// (0x0009d6d4) main_mp4_pane_t

0xd7f4,	// (0x0009b634) mp4_progress_pane_ParamLimits

0xd7f4,	// (0x0009b634) mp4_progress_pane

0xd83e,	// (0x0009b67e) mp4_rocker_pane_ParamLimits

0xd83e,	// (0x0009b67e) mp4_rocker_pane

0xb4a3,	// (0x000992e3) mp4_progress_pane_t1

0xb4bc,	// (0x000992fc) mp4_progress_pane_t2

0x0001,

0xf89d,	// (0x0009d6dd) mp4_progress_pane_t

0xb4d5,	// (0x00099315) mup_progress_pane_cp04

0xb4e1,	// (0x00099321) mp4_rocker_pane_g1

0x6536,	// (0x00094376) aid_cell_size_keypad2_ParamLimits

0x6536,	// (0x00094376) aid_cell_size_keypad2

0x654c,	// (0x0009438c) dialer2_ne_pane_ParamLimits

0x654c,	// (0x0009438c) dialer2_ne_pane

0x6566,	// (0x000943a6) grid_dialer2_keypad_pane_ParamLimits

0x6566,	// (0x000943a6) grid_dialer2_keypad_pane

0xa933,	// (0x00098773) bg_popup_call_pane_cp07_ParamLimits

0xa933,	// (0x00098773) bg_popup_call_pane_cp07

0x6582,	// (0x000943c2) dialer2_ne_pane_t1_ParamLimits

0x6582,	// (0x000943c2) dialer2_ne_pane_t1

0x65bd,	// (0x000943fd) cell_dialer2_keypad_pane_ParamLimits

0x65bd,	// (0x000943fd) cell_dialer2_keypad_pane

0xb4fd,	// (0x0009933d) bg_button_pane_pane_cp04_ParamLimits

0xb4fd,	// (0x0009933d) bg_button_pane_pane_cp04

0x65df,	// (0x0009441f) cell_dialer2_keypad_pane_g1_ParamLimits

0x65df,	// (0x0009441f) cell_dialer2_keypad_pane_g1

0x1c1f,	// (0x0008fa5f) aid_placing_vt_set_content_ParamLimits

0x1c1f,	// (0x0008fa5f) aid_placing_vt_set_content

0x1c47,	// (0x0008fa87) aid_placing_vt_set_title_ParamLimits

0x1c47,	// (0x0008fa87) aid_placing_vt_set_title

0x0bfb,	// (0x0008ea3b) main_image3_pane

0x66a5,	// (0x000944e5) area_side_right_pane_cp01_ParamLimits

0x66a5,	// (0x000944e5) area_side_right_pane_cp01

0xd67c,	// (0x0009b4bc) main_image3_pane_g1_ParamLimits

0xd67c,	// (0x0009b4bc) main_image3_pane_g1

0x66bc,	// (0x000944fc) main_image3_pane_g2_ParamLimits

0x66bc,	// (0x000944fc) main_image3_pane_g2

0x66e4,	// (0x00094524) main_image3_pane_g3_ParamLimits

0x66e4,	// (0x00094524) main_image3_pane_g3

0x670e,	// (0x0009454e) main_image3_pane_g4_ParamLimits

0x670e,	// (0x0009454e) main_image3_pane_g4

0x0003,

0xf8ac,	// (0x0009d6ec) main_image3_pane_g_ParamLimits

0xf8ac,	// (0x0009d6ec) main_image3_pane_g

0x6738,	// (0x00094578) main_image3_pane_t1_ParamLimits

0x6738,	// (0x00094578) main_image3_pane_t1

0x6790,	// (0x000945d0) main_image3_pane_t2_ParamLimits

0x6790,	// (0x000945d0) main_image3_pane_t2

0x67e2,	// (0x00094622) main_image3_pane_t3_ParamLimits

0x67e2,	// (0x00094622) main_image3_pane_t3

0x0003,

0xf8b5,	// (0x0009d6f5) main_image3_pane_t_ParamLimits

0xf8b5,	// (0x0009d6f5) main_image3_pane_t

0xefd4,	// (0x0009ce14) grid_sctrl_middle_pane_cp01_ParamLimits

0xefd4,	// (0x0009ce14) grid_sctrl_middle_pane_cp01

0x686a,	// (0x000946aa) cell_sctrl_middle_pane_cp01_ParamLimits

0x686a,	// (0x000946aa) cell_sctrl_middle_pane_cp01

0x6887,	// (0x000946c7) cell_sctrl_middle_pane_cp01_g1_ParamLimits

0x6887,	// (0x000946c7) cell_sctrl_middle_pane_cp01_g1

0x0bfb,	// (0x0008ea3b) main_call4_pane

0x689d,	// (0x000946dd) aid_size_button_call4_ParamLimits

0x689d,	// (0x000946dd) aid_size_button_call4

0x68ce,	// (0x0009470e) call4_windows_pane_ParamLimits

0x68ce,	// (0x0009470e) call4_windows_pane

0x68ee,	// (0x0009472e) grid_call4_button_pane_ParamLimits

0x68ee,	// (0x0009472e) grid_call4_button_pane

0xb509,	// (0x00099349) call4_windows_conf_pane

0xb520,	// (0x00099360) popup_call4_audio_first_window_ParamLimits

0xb520,	// (0x00099360) popup_call4_audio_first_window

0xb56c,	// (0x000993ac) popup_call4_audio_second_window_ParamLimits

0xb56c,	// (0x000993ac) popup_call4_audio_second_window

0xb580,	// (0x000993c0) popup_call4_audio_wait_window_ParamLimits

0xb580,	// (0x000993c0) popup_call4_audio_wait_window

0x691b,	// (0x0009475b) cell_call4_button_pane_ParamLimits

0x691b,	// (0x0009475b) cell_call4_button_pane

0x6944,	// (0x00094784) bg_button_pane_cp09_ParamLimits

0x6944,	// (0x00094784) bg_button_pane_cp09

0x6950,	// (0x00094790) cell_call4_button_pane_g1_ParamLimits

0x6950,	// (0x00094790) cell_call4_button_pane_g1

0x6976,	// (0x000947b6) cell_call4_button_pane_t1_ParamLimits

0x6976,	// (0x000947b6) cell_call4_button_pane_t1

0xb5c8,	// (0x00099408) popup_call4_audio_conf_window_ParamLimits

0xb5c8,	// (0x00099408) popup_call4_audio_conf_window

0x5c0a,	// (0x00093a4a) mup3_progress_pane_t1_ParamLimits

0x5c29,	// (0x00093a69) mup3_progress_pane_t2_ParamLimits

0xae6d,	// (0x00098cad) mup3_progress_pane_t3_ParamLimits

0xf793,	// (0x0009d5d3) mup3_progress_pane_t_ParamLimits

0xae8a,	// (0x00098cca) mup_progress_pane_cp03_ParamLimits

0x61f4,	// (0x00094034) mup3_control_keys_pane_g4_copy1

0xd822,	// (0x0009b662) mp4_rocker2_pane_ParamLimits

0xd822,	// (0x0009b662) mp4_rocker2_pane

0xb5dc,	// (0x0009941c) mp4_rocker2_pane_g1

0xb5e4,	// (0x00099424) mp4_rocker2_pane_g2

0xd890,	// (0x0009b6d0) mp4_rocker2_pane_g3

0xd898,	// (0x0009b6d8) mp4_rocker2_pane_g4

0xd8a0,	// (0x0009b6e0) mp4_rocker2_pane_g5

0x0004,

0xf8be,	// (0x0009d6fe) mp4_rocker2_pane_g

0x0bfb,	// (0x0008ea3b) main_camera4_pane

0x0bfb,	// (0x0008ea3b) main_video4_pane

0x645c,	// (0x0009429c) main_video_tele_dialer_pane_t1_ParamLimits

0x645c,	// (0x0009429c) main_video_tele_dialer_pane_t1

0x6475,	// (0x000942b5) main_video_tele_dialer_pane_t2_ParamLimits

0x6475,	// (0x000942b5) main_video_tele_dialer_pane_t2

0x0001,

0xf878,	// (0x0009d6b8) main_video_tele_dialer_pane_t_ParamLimits

0xf878,	// (0x0009d6b8) main_video_tele_dialer_pane_t

0x69b4,	// (0x000947f4) cam4_autofocus_pane_ParamLimits

0x69b4,	// (0x000947f4) cam4_autofocus_pane

0x69ca,	// (0x0009480a) cam4_image_uncrop_pane_ParamLimits

0x69ca,	// (0x0009480a) cam4_image_uncrop_pane

0x69e4,	// (0x00094824) cam4_indicators_pane_ParamLimits

0x69e4,	// (0x00094824) cam4_indicators_pane

0x6a0f,	// (0x0009484f) main_camera4_pane_g1_ParamLimits

0x6a0f,	// (0x0009484f) main_camera4_pane_g1

0x6a22,	// (0x00094862) main_camera4_pane_g2_ParamLimits

0x6a22,	// (0x00094862) main_camera4_pane_g2

0x6a35,	// (0x00094875) main_camera4_pane_g3_ParamLimits

0x6a35,	// (0x00094875) main_camera4_pane_g3

0x6a48,	// (0x00094888) main_camera4_pane_g4_ParamLimits

0x6a48,	// (0x00094888) main_camera4_pane_g4

0x6a5b,	// (0x0009489b) main_camera4_pane_g5_ParamLimits

0x6a5b,	// (0x0009489b) main_camera4_pane_g5

0x0005,

0xf8c9,	// (0x0009d709) main_camera4_pane_g_ParamLimits

0xf8c9,	// (0x0009d709) main_camera4_pane_g

0x6a7f,	// (0x000948bf) main_camera4_pane_t1_ParamLimits

0x6a7f,	// (0x000948bf) main_camera4_pane_t1

0xd8c4,	// (0x0009b704) bg_tb_trans_pane_cp06

0xd8da,	// (0x0009b71a) cam4_indicators_pane_g1

0xd8eb,	// (0x0009b72b) cam4_indicators_pane_g2

0x0002,

0xf8e4,	// (0x0009d724) cam4_indicators_pane_g

0xd909,	// (0x0009b749) cam4_indicators_pane_t1

0x6ae3,	// (0x00094923) main_video4_pane_g1_ParamLimits

0x6ae3,	// (0x00094923) main_video4_pane_g1

0x6af6,	// (0x00094936) main_video4_pane_g2_ParamLimits

0x6af6,	// (0x00094936) main_video4_pane_g2

0x6b0a,	// (0x0009494a) main_video4_pane_g3_ParamLimits

0x6b0a,	// (0x0009494a) main_video4_pane_g3

0x6b1e,	// (0x0009495e) main_video4_pane_g4_ParamLimits

0x6b1e,	// (0x0009495e) main_video4_pane_g4

0x0004,

0xf8eb,	// (0x0009d72b) main_video4_pane_g_ParamLimits

0xf8eb,	// (0x0009d72b) main_video4_pane_g

0x6b46,	// (0x00094986) vid4_indicators_pane_ParamLimits

0x6b46,	// (0x00094986) vid4_indicators_pane

0x6b76,	// (0x000949b6) video4_image_uncrop_cif_pane_ParamLimits

0x6b76,	// (0x000949b6) video4_image_uncrop_cif_pane

0x6b90,	// (0x000949d0) video4_image_uncrop_nhd_pane_ParamLimits

0x6b90,	// (0x000949d0) video4_image_uncrop_nhd_pane

0x69ca,	// (0x0009480a) video4_image_uncrop_vga_pane_ParamLimits

0x69ca,	// (0x0009480a) video4_image_uncrop_vga_pane

0xd92b,	// (0x0009b76b) bg_tb_trans_pane_cp07

0x6ba4,	// (0x000949e4) vid4_indicators_pane_g1

0x6bb1,	// (0x000949f1) vid4_indicators_pane_g2

0x6bbe,	// (0x000949fe) vid4_indicators_pane_g3

0x0004,

0xf8f6,	// (0x0009d736) vid4_indicators_pane_g

0x6be3,	// (0x00094a23) vid4_indicators_pane_t1

0x6bf5,	// (0x00094a35) cam4_autofocus_pane_g1

0x6bfd,	// (0x00094a3d) cam4_autofocus_pane_g2

0x6c05,	// (0x00094a45) cam4_autofocus_pane_g3

0x0002,

0xf901,	// (0x0009d741) cam4_autofocus_pane_g

0x6c0d,	// (0x00094a4d) cam4_autofocus_pane_g3_copy1

0xb453,	// (0x00099293) video_down_pane_cp_t1

0xb461,	// (0x000992a1) video_down_pane_cp_t2

0x0001,

0xf87d,	// (0x0009d6bd) video_down_pane_cp_t

0xefd4,	// (0x0009ce14) popup_vitu2_window_ParamLimits

0xefd4,	// (0x0009ce14) popup_vitu2_window

0x6c15,	// (0x00094a55) aid_size_cell2_itu2_ParamLimits

0x6c15,	// (0x00094a55) aid_size_cell2_itu2

0x6c3b,	// (0x00094a7b) aid_size_cell_itu2_ParamLimits

0x6c3b,	// (0x00094a7b) aid_size_cell_itu2

0x6c97,	// (0x00094ad7) bg_popup_window_pane_cp09_ParamLimits

0x6c97,	// (0x00094ad7) bg_popup_window_pane_cp09

0x6ca5,	// (0x00094ae5) field_vitu2_entry_pane_ParamLimits

0x6ca5,	// (0x00094ae5) field_vitu2_entry_pane

0x6ccb,	// (0x00094b0b) grid_vitu2_function_pane_ParamLimits

0x6ccb,	// (0x00094b0b) grid_vitu2_function_pane

0x6d1c,	// (0x00094b5c) grid_vitu2_itu_pane_ParamLimits

0x6d1c,	// (0x00094b5c) grid_vitu2_itu_pane

0x6daf,	// (0x00094bef) cell_vitu2_itu_pane_ParamLimits

0x6daf,	// (0x00094bef) cell_vitu2_itu_pane

0x6dd3,	// (0x00094c13) cell_vitu2_function_pane_ParamLimits

0x6dd3,	// (0x00094c13) cell_vitu2_function_pane

0xb5fe,	// (0x0009943e) bg_popup_call_pane_cp08_ParamLimits

0xb5fe,	// (0x0009943e) bg_popup_call_pane_cp08

0xb617,	// (0x00099457) field_vitu2_entry_pane_g1

0xb623,	// (0x00099463) field_vitu2_entry_pane_g2

0x0002,

0xf908,	// (0x0009d748) field_vitu2_entry_pane_g

0xb63d,	// (0x0009947d) field_vitu2_entry_pane_t1_ParamLimits

0xb63d,	// (0x0009947d) field_vitu2_entry_pane_t1

0xb66c,	// (0x000994ac) field_vitu2_entry_pane_t2_ParamLimits

0xb66c,	// (0x000994ac) field_vitu2_entry_pane_t2

0x0001,

0xf90f,	// (0x0009d74f) field_vitu2_entry_pane_t_ParamLimits

0xf90f,	// (0x0009d74f) field_vitu2_entry_pane_t

0x6e12,	// (0x00094c52) bg_button_pane_cp010_ParamLimits

0x6e12,	// (0x00094c52) bg_button_pane_cp010

0x6e20,	// (0x00094c60) cell_vitu2_itu_pane_g1

0x6e3e,	// (0x00094c7e) cell_vitu2_itu_pane_t1_ParamLimits

0x6e3e,	// (0x00094c7e) cell_vitu2_itu_pane_t1

0x0b07,	// (0x0008e947) cell_vitu2_itu_pane_t2_ParamLimits

0x0b07,	// (0x0008e947) cell_vitu2_itu_pane_t2

0x0002,

0xf919,	// (0x0009d759) cell_vitu2_itu_pane_t_ParamLimits

0xf919,	// (0x0009d759) cell_vitu2_itu_pane_t

0xd943,	// (0x0009b783) bg_button_pane_cp011

0x6ea4,	// (0x00094ce4) cell_vitu2_function_pane_g1

0x0bfb,	// (0x0008ea3b) main_myfav_hc_pane

0x6832,	// (0x00094672) popup_image3_note_pane_ParamLimits

0x6832,	// (0x00094672) popup_image3_note_pane

0x684e,	// (0x0009468e) popup_image3_tool_bar_pane_ParamLimits

0x684e,	// (0x0009468e) popup_image3_tool_bar_pane

0x0b8b,	// (0x0008e9cb) cell_vitu2_itu_pane_t3_ParamLimits

0x0b8b,	// (0x0008e9cb) cell_vitu2_itu_pane_t3

0x0bfb,	// (0x0008ea3b) bg_popup_trans_pane

0xb691,	// (0x000994d1) grid_image3_tool_bar_pane

0xb69b,	// (0x000994db) bg_popup_trans_pane_g1

0xe5ad,	// (0x0009c3ed) bg_popup_trans_pane_g2

0xb6a3,	// (0x000994e3) bg_popup_trans_pane_g3

0xb6ab,	// (0x000994eb) bg_popup_trans_pane_g4

0xb6b3,	// (0x000994f3) bg_popup_trans_pane_g5

0xb6bb,	// (0x000994fb) bg_popup_trans_pane_g6

0xb6c3,	// (0x00099503) bg_popup_trans_pane_g7

0xb6cb,	// (0x0009950b) bg_popup_trans_pane_g8

0xe58d,	// (0x0009c3cd) bg_popup_trans_pane_g9

0x0008,

0xf920,	// (0x0009d760) bg_popup_trans_pane_g

0xb6d3,	// (0x00099513) cell_image3_tool_bar_pane_ParamLimits

0xb6d3,	// (0x00099513) cell_image3_tool_bar_pane

0xab4e,	// (0x0009898e) cell_image3_tool_bar_pane_g1

0x0bfb,	// (0x0008ea3b) bg_popup_trans_pane_cp1

0xb6e7,	// (0x00099527) popup_image3_note_pane_t1

0xb6f5,	// (0x00099535) popup_image3_note_pane_t2

0xb703,	// (0x00099543) popup_image3_note_pane_t3

0x0002,

0xf933,	// (0x0009d773) popup_image3_note_pane_t

0xb711,	// (0x00099551) popup_image3_note_pane_t3_copy1

0x6eb8,	// (0x00094cf8) bg_myfav_hc_instruction_pane_ParamLimits

0x6eb8,	// (0x00094cf8) bg_myfav_hc_instruction_pane

0x6ecc,	// (0x00094d0c) cell_myfav_contact_pane_ParamLimits

0x6ecc,	// (0x00094d0c) cell_myfav_contact_pane

0x6eea,	// (0x00094d2a) cell_myfav_contact_pane_cp1_ParamLimits

0x6eea,	// (0x00094d2a) cell_myfav_contact_pane_cp1

0x6f02,	// (0x00094d42) cell_myfav_contact_pane_cp2_ParamLimits

0x6f02,	// (0x00094d42) cell_myfav_contact_pane_cp2

0x6f1a,	// (0x00094d5a) cell_myfav_contact_pane_cp3_ParamLimits

0x6f1a,	// (0x00094d5a) cell_myfav_contact_pane_cp3

0x6f31,	// (0x00094d71) cell_myfav_contact_pane_cp4_ParamLimits

0x6f31,	// (0x00094d71) cell_myfav_contact_pane_cp4

0x6f49,	// (0x00094d89) cell_myfav_contact_pane_cp5_ParamLimits

0x6f49,	// (0x00094d89) cell_myfav_contact_pane_cp5

0x6f5d,	// (0x00094d9d) cell_myfav_contact_pane_cp6_ParamLimits

0x6f5d,	// (0x00094d9d) cell_myfav_contact_pane_cp6

0x6f73,	// (0x00094db3) cell_myfav_contact_pane_cp7_ParamLimits

0x6f73,	// (0x00094db3) cell_myfav_contact_pane_cp7

0xb71f,	// (0x0009955f) listscroll_gen_pane_cp05

0x6f8d,	// (0x00094dcd) main_myfav_hc_pane_g1_ParamLimits

0x6f8d,	// (0x00094dcd) main_myfav_hc_pane_g1

0x6fa7,	// (0x00094de7) main_myfav_hc_pane_g2_ParamLimits

0x6fa7,	// (0x00094de7) main_myfav_hc_pane_g2

0x0002,

0xf93a,	// (0x0009d77a) main_myfav_hc_pane_g_ParamLimits

0xf93a,	// (0x0009d77a) main_myfav_hc_pane_g

0x6fd9,	// (0x00094e19) main_myfav_hc_pane_t1_ParamLimits

0x6fd9,	// (0x00094e19) main_myfav_hc_pane_t1

0xb728,	// (0x00099568) main_myfav_hc_pane_t2_ParamLimits

0xb728,	// (0x00099568) main_myfav_hc_pane_t2

0xb73a,	// (0x0009957a) main_myfav_hc_pane_t3_ParamLimits

0xb73a,	// (0x0009957a) main_myfav_hc_pane_t3

0x6ff0,	// (0x00094e30) main_myfav_hc_pane_t4_ParamLimits

0x6ff0,	// (0x00094e30) main_myfav_hc_pane_t4

0x0004,

0xf941,	// (0x0009d781) main_myfav_hc_pane_t_ParamLimits

0xf941,	// (0x0009d781) main_myfav_hc_pane_t

0xab4e,	// (0x0009898e) bg_myfav_hc_instruction_pane_g1

0xb74c,	// (0x0009958c) cell_myfav_contact_pane_g1_ParamLimits

0xb74c,	// (0x0009958c) cell_myfav_contact_pane_g1

0xb74c,	// (0x0009958c) cell_myfav_contact_pane_g2_ParamLimits

0xb74c,	// (0x0009958c) cell_myfav_contact_pane_g2

0xb758,	// (0x00099598) cell_myfav_contact_pane_g3_ParamLimits

0xb758,	// (0x00099598) cell_myfav_contact_pane_g3

0xae57,	// (0x00098c97) cell_myfav_contact_pane_g4_ParamLimits

0xae57,	// (0x00098c97) cell_myfav_contact_pane_g4

0xb765,	// (0x000995a5) cell_myfav_contact_pane_g5_ParamLimits

0xb765,	// (0x000995a5) cell_myfav_contact_pane_g5

0x0004,

0xf94c,	// (0x0009d78c) cell_myfav_contact_pane_g_ParamLimits

0xf94c,	// (0x0009d78c) cell_myfav_contact_pane_g

0x6fc1,	// (0x00094e01) main_myfav_hc_pane_g3_ParamLimits

0x6fc1,	// (0x00094e01) main_myfav_hc_pane_g3

0x0daf,	// (0x0008ebef) popup_adpt_find_window

0x7018,	// (0x00094e58) afind_page_pane_ParamLimits

0x7018,	// (0x00094e58) afind_page_pane

0x702d,	// (0x00094e6d) aid_size_cell_afind_ParamLimits

0x702d,	// (0x00094e6d) aid_size_cell_afind

0x704b,	// (0x00094e8b) bg_popup_sub_pane_cp09_ParamLimits

0x704b,	// (0x00094e8b) bg_popup_sub_pane_cp09

0x7058,	// (0x00094e98) find_pane_cp01_ParamLimits

0x7058,	// (0x00094e98) find_pane_cp01

0xb771,	// (0x000995b1) grid_afind_control_pane_ParamLimits

0xb771,	// (0x000995b1) grid_afind_control_pane

0x7065,	// (0x00094ea5) grid_afind_pane_ParamLimits

0x7065,	// (0x00094ea5) grid_afind_pane

0x7087,	// (0x00094ec7) cell_afind_pane_ParamLimits

0x7087,	// (0x00094ec7) cell_afind_pane

0xab4e,	// (0x0009898e) afind_page_pane_g1

0x70e8,	// (0x00094f28) afind_page_pane_g2

0x70f1,	// (0x00094f31) afind_page_pane_g3

0x0002,

0xf957,	// (0x0009d797) afind_page_pane_g

0x70fa,	// (0x00094f3a) afind_page_pane_t1

0xb785,	// (0x000995c5) cell_afind_grid_control_pane_ParamLimits

0xb785,	// (0x000995c5) cell_afind_grid_control_pane

0xb4fd,	// (0x0009933d) bg_button_pane_cp69_ParamLimits

0xb4fd,	// (0x0009933d) bg_button_pane_cp69

0x711a,	// (0x00094f5a) cell_afind_pane_g1_ParamLimits

0x711a,	// (0x00094f5a) cell_afind_pane_g1

0x7127,	// (0x00094f67) cell_afind_pane_t1_ParamLimits

0x7127,	// (0x00094f67) cell_afind_pane_t1

0xe3a6,	// (0x0009c1e6) bg_button_pane_cp72

0xb794,	// (0x000995d4) cell_afind_grid_control_pane_g1

0x37e2,	// (0x00091622) aid_image_placing_area_ParamLimits

0x37e2,	// (0x00091622) aid_image_placing_area

0xb156,	// (0x00098f96) field_vitu_entry_pane_g1_ParamLimits

0xb156,	// (0x00098f96) field_vitu_entry_pane_g1

0xb162,	// (0x00098fa2) field_vitu_entry_pane_g2_ParamLimits

0xb162,	// (0x00098fa2) field_vitu_entry_pane_g2

0x0001,

0xf808,	// (0x0009d648) field_vitu_entry_pane_g_ParamLimits

0xf808,	// (0x0009d648) field_vitu_entry_pane_g

0x62bb,	// (0x000940fb) cell_vitu_itu_pane_g1_ParamLimits

0x62fd,	// (0x0009413d) cell_vitu_itu_pane_t3_ParamLimits

0x62fd,	// (0x0009413d) cell_vitu_itu_pane_t3

0xb4a3,	// (0x000992e3) mp4_progress_pane_t1_ParamLimits

0xb4bc,	// (0x000992fc) mp4_progress_pane_t2_ParamLimits

0xf89d,	// (0x0009d6dd) mp4_progress_pane_t_ParamLimits

0xb4d5,	// (0x00099315) mup_progress_pane_cp04_ParamLimits

0x7004,	// (0x00094e44) main_myfav_hc_pane_t5_ParamLimits

0x7004,	// (0x00094e44) main_myfav_hc_pane_t5

0x0c51,	// (0x0008ea91) aid_zoom_text_primary

0x0daf,	// (0x0008ebef) popup_adpt_find_window_ParamLimits

0xefd4,	// (0x0009ce14) main_cam_set_pane

0x69fb,	// (0x0009483b) cam4_zoom_pane_ParamLimits

0x69fb,	// (0x0009483b) cam4_zoom_pane

0x7139,	// (0x00094f79) main_cam_set_pane_g1_ParamLimits

0x7139,	// (0x00094f79) main_cam_set_pane_g1

0x7147,	// (0x00094f87) main_cam_set_pane_g2_ParamLimits

0x7147,	// (0x00094f87) main_cam_set_pane_g2

0x0001,

0xf95e,	// (0x0009d79e) main_cam_set_pane_g_ParamLimits

0xf95e,	// (0x0009d79e) main_cam_set_pane_g

0x7168,	// (0x00094fa8) main_cam_set_pane_t1_ParamLimits

0x7168,	// (0x00094fa8) main_cam_set_pane_t1

0x7183,	// (0x00094fc3) main_cset_listscroll_pane_ParamLimits

0x7183,	// (0x00094fc3) main_cset_listscroll_pane

0x71a3,	// (0x00094fe3) main_cset_slider_pane_ParamLimits

0x71a3,	// (0x00094fe3) main_cset_slider_pane

0xb7a5,	// (0x000995e5) main_cset_list_pane_ParamLimits

0xb7a5,	// (0x000995e5) main_cset_list_pane

0xb7b5,	// (0x000995f5) scroll_pane_cp028

0x71c9,	// (0x00095009) aid_area_touch_slider

0x71e5,	// (0x00095025) cset_slider_pane

0x720f,	// (0x0009504f) main_cset_slider_pane_g1

0x7224,	// (0x00095064) main_cset_slider_pane_g2

0x0011,

0xf963,	// (0x0009d7a3) main_cset_slider_pane_g

0xb7ee,	// (0x0009962e) main_cset_slider_pane_t1

0x72e0,	// (0x00095120) main_cset_slider_pane_t2

0x72fa,	// (0x0009513a) main_cset_slider_pane_t3

0x7314,	// (0x00095154) main_cset_slider_pane_t4

0x732e,	// (0x0009516e) main_cset_slider_pane_t5

0x7348,	// (0x00095188) main_cset_slider_pane_t6

0x735d,	// (0x0009519d) main_cset_slider_pane_t7

0x000e,

0xf988,	// (0x0009d7c8) main_cset_slider_pane_t

0x7461,	// (0x000952a1) cset_list_set_pane_ParamLimits

0x7461,	// (0x000952a1) cset_list_set_pane

0x7473,	// (0x000952b3) aid_position_infowindow_above

0x747b,	// (0x000952bb) aid_position_infowindow_below

0xb88e,	// (0x000996ce) cset_list_set_pane_g1_ParamLimits

0xb88e,	// (0x000996ce) cset_list_set_pane_g1

0xb89a,	// (0x000996da) cset_list_set_pane_g3_ParamLimits

0xb89a,	// (0x000996da) cset_list_set_pane_g3

0x0001,

0xf9a7,	// (0x0009d7e7) cset_list_set_pane_g_ParamLimits

0xf9a7,	// (0x0009d7e7) cset_list_set_pane_g

0xb8a9,	// (0x000996e9) cset_list_set_pane_t1_ParamLimits

0xb8a9,	// (0x000996e9) cset_list_set_pane_t1

0xefd4,	// (0x0009ce14) list_highlight_pane_cp021_ParamLimits

0xefd4,	// (0x0009ce14) list_highlight_pane_cp021

0xedce,	// (0x0009cc0e) cset_slider_pane_g1

0xede0,	// (0x0009cc20) cset_slider_pane_g2

0xedd7,	// (0x0009cc17) cset_slider_pane_g3

0x0002,

0x0579,	// (0x0008e3b9) cset_slider_pane_g

0xd951,	// (0x0009b791) aid_area_touch_cam4_zoom

0xd959,	// (0x0009b799) cam4_zoom_cont_pane

0xd961,	// (0x0009b7a1) cam4_zoom_pane_g1

0xd969,	// (0x0009b7a9) cam4_zoom_pane_g2

0x7483,	// (0x000952c3) cam4_zoom_pane_g3

0x0002,

0xf9ac,	// (0x0009d7ec) cam4_zoom_pane_g

0xd971,	// (0x0009b7b1) cam4_zoom_cont_pane_g1

0xd97a,	// (0x0009b7ba) cam4_zoom_cont_pane_g2

0xd983,	// (0x0009b7c3) cam4_zoom_cont_pane_g3

0x0002,

0xf9b3,	// (0x0009d7f3) cam4_zoom_cont_pane_g

0x68bb,	// (0x000946fb) call4_image_pane_ParamLimits

0x68bb,	// (0x000946fb) call4_image_pane

0xb509,	// (0x00099349) call4_windows_conf_pane_ParamLimits

0xb54a,	// (0x0009938a) popup_call4_audio_in_window_ParamLimits

0xb54a,	// (0x0009938a) popup_call4_audio_in_window

0x0bfb,	// (0x0008ea3b) bg_popup_call2_act_pane_cp02

0xb5c0,	// (0x00099400) call4_list_conf_pane

0xab4e,	// (0x0009898e) call4_image_pane_g1

0xab4e,	// (0x0009898e) call4_image_pane_g2

0x0001,

0xf6d3,	// (0x0009d513) call4_image_pane_g

0xb8be,	// (0x000996fe) list_single_graphic_popup_conf4_pane_ParamLimits

0xb8be,	// (0x000996fe) list_single_graphic_popup_conf4_pane

0x0bfb,	// (0x0008ea3b) list_highlight_pane_cp022

0xb8d1,	// (0x00099711) list_single_graphic_popup_conf4_pane_g1

0xea9f,	// (0x0009c8df) list_single_graphic_popup_conf4_pane_g2

0x0001,

0xf9ba,	// (0x0009d7fa) list_single_graphic_popup_conf4_pane_g

0xb8d9,	// (0x00099719) list_single_graphic_popup_conf4_pane_t1

0x1d6b,	// (0x0008fbab) popup_vtel_slider_window_ParamLimits

0x1d6b,	// (0x0008fbab) popup_vtel_slider_window

0xb4eb,	// (0x0009932b) dialer2_ne_pane_t2_ParamLimits

0xb4eb,	// (0x0009932b) dialer2_ne_pane_t2

0x0001,

0xf8a2,	// (0x0009d6e2) dialer2_ne_pane_t_ParamLimits

0xf8a2,	// (0x0009d6e2) dialer2_ne_pane_t

0xa933,	// (0x00098773) bg_popup_sub_pane_cp010_ParamLimits

0xa933,	// (0x00098773) bg_popup_sub_pane_cp010

0x748b,	// (0x000952cb) popup_vtel_slider_window_g1_ParamLimits

0x748b,	// (0x000952cb) popup_vtel_slider_window_g1

0x749e,	// (0x000952de) popup_vtel_slider_window_g2_ParamLimits

0x749e,	// (0x000952de) popup_vtel_slider_window_g2

0x0003,

0xf9bf,	// (0x0009d7ff) popup_vtel_slider_window_g_ParamLimits

0xf9bf,	// (0x0009d7ff) popup_vtel_slider_window_g

0x74f4,	// (0x00095334) vtel_slider_pane_ParamLimits

0x74f4,	// (0x00095334) vtel_slider_pane

0x7516,	// (0x00095356) vtel_slider_pane_g1_ParamLimits

0x7516,	// (0x00095356) vtel_slider_pane_g1

0x752a,	// (0x0009536a) vtel_slider_pane_g2_ParamLimits

0x752a,	// (0x0009536a) vtel_slider_pane_g2

0x7542,	// (0x00095382) vtel_slider_pane_g3_ParamLimits

0x7542,	// (0x00095382) vtel_slider_pane_g3

0x7516,	// (0x00095356) vtel_slider_pane_g4_ParamLimits

0x7516,	// (0x00095356) vtel_slider_pane_g4

0x7558,	// (0x00095398) vtel_slider_pane_g5_ParamLimits

0x7558,	// (0x00095398) vtel_slider_pane_g5

0x0004,

0xf9c8,	// (0x0009d808) vtel_slider_pane_g_ParamLimits

0xf9c8,	// (0x0009d808) vtel_slider_pane_g

0x0bfb,	// (0x0008ea3b) main_gallery2_pane

0x6c67,	// (0x00094aa7) aid_size_row_itut2_dropdow_list_ParamLimits

0x6c67,	// (0x00094aa7) aid_size_row_itut2_dropdow_list

0x6cf3,	// (0x00094b33) grid_vitu2_function_top_pane_ParamLimits

0x6cf3,	// (0x00094b33) grid_vitu2_function_top_pane

0x6d58,	// (0x00094b98) popup_vitu2_dropdown_list_window_ParamLimits

0x6d58,	// (0x00094b98) popup_vitu2_dropdown_list_window

0x6d81,	// (0x00094bc1) popup_vitu2_match_list_window

0x756e,	// (0x000953ae) cell_vitu2_function_top_pane_ParamLimits

0x756e,	// (0x000953ae) cell_vitu2_function_top_pane

0x758c,	// (0x000953cc) cell_vitu2_function_top_pane_cp01_ParamLimits

0x758c,	// (0x000953cc) cell_vitu2_function_top_pane_cp01

0x75aa,	// (0x000953ea) cell_vitu2_function_top_wide_pane_ParamLimits

0x75aa,	// (0x000953ea) cell_vitu2_function_top_wide_pane

0xd943,	// (0x0009b783) bg_button_pane_cp012

0x75c8,	// (0x00095408) cell_vitu2_function_top_pane_g1

0xd98c,	// (0x0009b7cc) bg_button_pane_cp013_ParamLimits

0xd98c,	// (0x0009b7cc) bg_button_pane_cp013

0x75dc,	// (0x0009541c) cell_vitu2_function_top_wide_pane_g1_ParamLimits

0x75dc,	// (0x0009541c) cell_vitu2_function_top_wide_pane_g1

0xd943,	// (0x0009b783) bg_popup_sub_pane_cp20

0x75f4,	// (0x00095434) list_vitu2_match_list_pane

0xb69b,	// (0x000994db) bg_popup_sub_pane_cp20_g1

0xb6a3,	// (0x000994e3) bg_popup_sub_pane_cp20_g2

0xe5ad,	// (0x0009c3ed) bg_popup_sub_pane_cp20_g3

0xb6ab,	// (0x000994eb) bg_popup_sub_pane_cp20_g4

0xe58d,	// (0x0009c3cd) bg_popup_sub_pane_cp20_g5

0xb8fd,	// (0x0009973d) bg_popup_sub_pane_cp20_g6

0xb6bb,	// (0x000994fb) bg_popup_sub_pane_cp20_g7

0xb6c3,	// (0x00099503) bg_popup_sub_pane_cp20_g8

0xb6cb,	// (0x0009950b) bg_popup_sub_pane_cp20_g9

0x0008,

0xf9d3,	// (0x0009d813) bg_popup_sub_pane_cp20_g

0xd9a8,	// (0x0009b7e8) list_vitu2_match_list_item_pane_ParamLimits

0xd9a8,	// (0x0009b7e8) list_vitu2_match_list_item_pane

0xd9ba,	// (0x0009b7fa) list_vitu2_match_list_item_pane_t1

0x9e82,	// (0x00097cc2) bg_popup_sub_pane_cp21

0xd9c8,	// (0x0009b808) grid_vitu2_dropdown_list_pane

0x7647,	// (0x00095487) cell_vitu2_dropdown_list_char_pane_ParamLimits

0x7647,	// (0x00095487) cell_vitu2_dropdown_list_char_pane

0x7668,	// (0x000954a8) cell_vitu2_dropdown_list_ctrl_pane_ParamLimits

0x7668,	// (0x000954a8) cell_vitu2_dropdown_list_ctrl_pane

0xb91d,	// (0x0009975d) cell_vitu2_dropdown_list_char_pane_g1

0xb926,	// (0x00099766) cell_vitu2_dropdown_list_char_pane_g2

0xb92f,	// (0x0009976f) cell_vitu2_dropdown_list_char_pane_g3

0x0002,

0xf9f0,	// (0x0009d830) cell_vitu2_dropdown_list_char_pane_g

0x7694,	// (0x000954d4) cell_vitu2_dropdown_list_char_pane_t1

0x76a2,	// (0x000954e2) cell_vitu2_dropdown_list_ctrl_pane_g1_ParamLimits

0x76a2,	// (0x000954e2) cell_vitu2_dropdown_list_ctrl_pane_g1

0x76af,	// (0x000954ef) cell_vitu2_dropdown_list_ctrl_pane_g2_ParamLimits

0x76af,	// (0x000954ef) cell_vitu2_dropdown_list_ctrl_pane_g2

0x76bc,	// (0x000954fc) cell_vitu2_dropdown_list_ctrl_pane_g3_ParamLimits

0x76bc,	// (0x000954fc) cell_vitu2_dropdown_list_ctrl_pane_g3

0x76c9,	// (0x00095509) cell_vitu2_dropdown_list_ctrl_pane_g4_ParamLimits

0x76c9,	// (0x00095509) cell_vitu2_dropdown_list_ctrl_pane_g4

0xd8c4,	// (0x0009b704) cell_vitu2_dropdown_list_ctrl_pane_g5_ParamLimits

0xd8c4,	// (0x0009b704) cell_vitu2_dropdown_list_ctrl_pane_g5

0x0004,

0xf9f7,	// (0x0009d837) cell_vitu2_dropdown_list_ctrl_pane_g_ParamLimits

0xf9f7,	// (0x0009d837) cell_vitu2_dropdown_list_ctrl_pane_g

0x76e5,	// (0x00095525) aid_size_cell_gallery2_ParamLimits

0x76e5,	// (0x00095525) aid_size_cell_gallery2

0x76fb,	// (0x0009553b) grid_gallery2_pane_ParamLimits

0x76fb,	// (0x0009553b) grid_gallery2_pane

0x770f,	// (0x0009554f) scroll_pane_cp029_ParamLimits

0x770f,	// (0x0009554f) scroll_pane_cp029

0x771b,	// (0x0009555b) cell_gallery2_pane_ParamLimits

0x771b,	// (0x0009555b) cell_gallery2_pane

0xb938,	// (0x00099778) cell_gallery2_pane_g2

0x7751,	// (0x00095591) cell_gallery2_pane_g3

0xb942,	// (0x00099782) cell_gallery2_pane_g4

0xb94a,	// (0x0009978a) cell_gallery2_pane_g5

0xec98,	// (0x0009cad8) grid_highlight_pane_cp10

0x6d81,	// (0x00094bc1) popup_vitu2_match_list_window_ParamLimits

0x6d98,	// (0x00094bd8) popup_vitu2_query_window_ParamLimits

0x6d98,	// (0x00094bd8) popup_vitu2_query_window

0x9e82,	// (0x00097cc2) bg_vitu2_candi_button_pane

0xb91d,	// (0x0009975d) cell_vitu2_dropdown_list_char_pane_g1_copy1

0xb926,	// (0x00099766) cell_vitu2_dropdown_list_char_pane_g2_copy1

0xb92f,	// (0x0009976f) cell_vitu2_dropdown_list_char_pane_g2_copy2

0x7759,	// (0x00095599) bg_button_pane_cp015

0x776b,	// (0x000955ab) bg_button_pane_cp016

0x777e,	// (0x000955be) bg_button_pane_cp017

0xa648,	// (0x00098488) bg_popup_sub_pane_cp22

0xb952,	// (0x00099792) popup_vitu2_query_window_g1

0x77c3,	// (0x00095603) popup_vitu2_query_window_g2

0x0002,

0xfa02,	// (0x0009d842) popup_vitu2_query_window_g

0x77e2,	// (0x00095622) popup_vitu2_query_window_t1_ParamLimits

0x77e2,	// (0x00095622) popup_vitu2_query_window_t1

0x7817,	// (0x00095657) popup_vitu2_query_window_t2_ParamLimits

0x7817,	// (0x00095657) popup_vitu2_query_window_t2

0x7829,	// (0x00095669) popup_vitu2_query_window_t3_ParamLimits

0x7829,	// (0x00095669) popup_vitu2_query_window_t3

0x7851,	// (0x00095691) popup_vitu2_query_window_t4_ParamLimits

0x7851,	// (0x00095691) popup_vitu2_query_window_t4

0x7872,	// (0x000956b2) popup_vitu2_query_window_t5_ParamLimits

0x7872,	// (0x000956b2) popup_vitu2_query_window_t5

0x0006,

0xfa09,	// (0x0009d849) popup_vitu2_query_window_t_ParamLimits

0xfa09,	// (0x0009d849) popup_vitu2_query_window_t

0xb79d,	// (0x000995dd) main_cset_text_pane

0x71c9,	// (0x00095009) aid_area_touch_slider_ParamLimits

0x71e5,	// (0x00095025) cset_slider_pane_ParamLimits

0x720f,	// (0x0009504f) main_cset_slider_pane_g1_ParamLimits

0x7224,	// (0x00095064) main_cset_slider_pane_g2_ParamLimits

0xb7be,	// (0x000995fe) main_cset_slider_pane_g3_ParamLimits

0xb7be,	// (0x000995fe) main_cset_slider_pane_g3

0x7239,	// (0x00095079) main_cset_slider_pane_g4_ParamLimits

0x7239,	// (0x00095079) main_cset_slider_pane_g4

0x7248,	// (0x00095088) main_cset_slider_pane_g5_ParamLimits

0x7248,	// (0x00095088) main_cset_slider_pane_g5

0x7254,	// (0x00095094) main_cset_slider_pane_g6_ParamLimits

0x7254,	// (0x00095094) main_cset_slider_pane_g6

0xf963,	// (0x0009d7a3) main_cset_slider_pane_g_ParamLimits

0xb7ee,	// (0x0009962e) main_cset_slider_pane_t1_ParamLimits

0x72e0,	// (0x00095120) main_cset_slider_pane_t2_ParamLimits

0x72fa,	// (0x0009513a) main_cset_slider_pane_t3_ParamLimits

0x7314,	// (0x00095154) main_cset_slider_pane_t4_ParamLimits

0x732e,	// (0x0009516e) main_cset_slider_pane_t5_ParamLimits

0x7348,	// (0x00095188) main_cset_slider_pane_t6_ParamLimits

0x735d,	// (0x0009519d) main_cset_slider_pane_t7_ParamLimits

0x7387,	// (0x000951c7) main_cset_slider_pane_t8_ParamLimits

0x7387,	// (0x000951c7) main_cset_slider_pane_t8

0x73af,	// (0x000951ef) main_cset_slider_pane_t9_ParamLimits

0x73af,	// (0x000951ef) main_cset_slider_pane_t9

0x73d7,	// (0x00095217) main_cset_slider_pane_t10_ParamLimits

0x73d7,	// (0x00095217) main_cset_slider_pane_t10

0x73ff,	// (0x0009523f) main_cset_slider_pane_t11_ParamLimits

0x73ff,	// (0x0009523f) main_cset_slider_pane_t11

0x7427,	// (0x00095267) main_cset_slider_pane_t12_ParamLimits

0x7427,	// (0x00095267) main_cset_slider_pane_t12

0x7444,	// (0x00095284) main_cset_slider_pane_t13_ParamLimits

0x7444,	// (0x00095284) main_cset_slider_pane_t13

0xf988,	// (0x0009d7c8) main_cset_slider_pane_t_ParamLimits

0x0bfb,	// (0x0008ea3b) bg_popup_sub_pane_cp011

0xb95e,	// (0x0009979e) main_cset_text_pane_g1

0xb966,	// (0x000997a6) main_cset_text_pane_t1

0xb974,	// (0x000997b4) main_cset_text_pane_t2

0xb982,	// (0x000997c2) main_cset_text_pane_t3

0xb990,	// (0x000997d0) main_cset_text_pane_t4

0xb99e,	// (0x000997de) main_cset_text_pane_t5

0xb9ac,	// (0x000997ec) main_cset_text_pane_t6

0xb9ba,	// (0x000997fa) main_cset_text_pane_t7

0x0006,

0xfa18,	// (0x0009d858) main_cset_text_pane_t

0x0bfb,	// (0x0008ea3b) main_cam4_burst_pane

0x0bfb,	// (0x0008ea3b) main_cam5_pane

0x7108,	// (0x00094f48) bg_button_pane_cp019

0x7111,	// (0x00094f51) bg_button_pane_cp020

0xb7ca,	// (0x0009960a) main_cset_slider_pane_g7_ParamLimits

0xb7ca,	// (0x0009960a) main_cset_slider_pane_g7

0xb7d6,	// (0x00099616) main_cset_slider_pane_g8_ParamLimits

0xb7d6,	// (0x00099616) main_cset_slider_pane_g8

0x7268,	// (0x000950a8) main_cset_slider_pane_g9_ParamLimits

0x7268,	// (0x000950a8) main_cset_slider_pane_g9

0x7274,	// (0x000950b4) main_cset_slider_pane_g10_ParamLimits

0x7274,	// (0x000950b4) main_cset_slider_pane_g10

0x7280,	// (0x000950c0) main_cset_slider_pane_g11_ParamLimits

0x7280,	// (0x000950c0) main_cset_slider_pane_g11

0x728c,	// (0x000950cc) main_cset_slider_pane_g12_ParamLimits

0x728c,	// (0x000950cc) main_cset_slider_pane_g12

0x7298,	// (0x000950d8) main_cset_slider_pane_g13_ParamLimits

0x7298,	// (0x000950d8) main_cset_slider_pane_g13

0x72a4,	// (0x000950e4) main_cset_slider_pane_g14_ParamLimits

0x72a4,	// (0x000950e4) main_cset_slider_pane_g14

0x72b0,	// (0x000950f0) main_cset_slider_pane_g15_ParamLimits

0x72b0,	// (0x000950f0) main_cset_slider_pane_g15

0xb81c,	// (0x0009965c) main_cset_slider_pane_t14_ParamLimits

0xb81c,	// (0x0009965c) main_cset_slider_pane_t14

0xb855,	// (0x00099695) main_cset_slider_pane_t15_ParamLimits

0xb855,	// (0x00099695) main_cset_slider_pane_t15

0x78e9,	// (0x00095729) aid_cam4_burst_size_cell_ParamLimits

0x78e9,	// (0x00095729) aid_cam4_burst_size_cell

0x7909,	// (0x00095749) grid_cam4_burst_pane_ParamLimits

0x7909,	// (0x00095749) grid_cam4_burst_pane

0x7941,	// (0x00095781) linegrid_cam4_burst_pane_ParamLimits

0x7941,	// (0x00095781) linegrid_cam4_burst_pane

0xb9c8,	// (0x00099808) scroll_pane_cp30_ParamLimits

0xb9c8,	// (0x00099808) scroll_pane_cp30

0x7965,	// (0x000957a5) cell_cam4_burst_pane_ParamLimits

0x7965,	// (0x000957a5) cell_cam4_burst_pane

0xb9d4,	// (0x00099814) linegrid_cam4_burst_pane_g1_ParamLimits

0xb9d4,	// (0x00099814) linegrid_cam4_burst_pane_g1

0x79b2,	// (0x000957f2) linegrid_cam4_burst_pane_g2_ParamLimits

0x79b2,	// (0x000957f2) linegrid_cam4_burst_pane_g2

0xb9e1,	// (0x00099821) linegrid_cam4_burst_pane_g3_ParamLimits

0xb9e1,	// (0x00099821) linegrid_cam4_burst_pane_g3

0x0002,

0xfa27,	// (0x0009d867) linegrid_cam4_burst_pane_g_ParamLimits

0xfa27,	// (0x0009d867) linegrid_cam4_burst_pane_g

0x79c3,	// (0x00095803) linegrid_cam4_burst_pane_g3_copy1_ParamLimits

0x79c3,	// (0x00095803) linegrid_cam4_burst_pane_g3_copy1

0xb9ee,	// (0x0009982e) linegrid_cam4_burst_pane_g4_ParamLimits

0xb9ee,	// (0x0009982e) linegrid_cam4_burst_pane_g4

0x79dd,	// (0x0009581d) linegrid_cam4_burst_pane_g5_ParamLimits

0x79dd,	// (0x0009581d) linegrid_cam4_burst_pane_g5

0x79ee,	// (0x0009582e) linegrid_cam4_burst_pane_g6_ParamLimits

0x79ee,	// (0x0009582e) linegrid_cam4_burst_pane_g6

0xb9fb,	// (0x0009983b) linegrid_cam4_burst_pane_g7_ParamLimits

0xb9fb,	// (0x0009983b) linegrid_cam4_burst_pane_g7

0x7a05,	// (0x00095845) cell_cam4_burst_pane_g1

0xba14,	// (0x00099854) main_cam5_pane_t1_ParamLimits

0xba14,	// (0x00099854) main_cam5_pane_t1

0xba26,	// (0x00099866) main_cam5_pane_t2_ParamLimits

0xba26,	// (0x00099866) main_cam5_pane_t2

0xba38,	// (0x00099878) main_cam5_pane_t3_ParamLimits

0xba38,	// (0x00099878) main_cam5_pane_t3

0xba4a,	// (0x0009988a) main_cam5_pane_t4_ParamLimits

0xba4a,	// (0x0009988a) main_cam5_pane_t4

0xba62,	// (0x000998a2) main_cam5_pane_t5_ParamLimits

0xba62,	// (0x000998a2) main_cam5_pane_t5

0xba76,	// (0x000998b6) main_cam5_pane_t6_ParamLimits

0xba76,	// (0x000998b6) main_cam5_pane_t6

0xba8a,	// (0x000998ca) main_cam5_pane_t7_ParamLimits

0xba8a,	// (0x000998ca) main_cam5_pane_t7

0xba9c,	// (0x000998dc) main_cam5_pane_t8_ParamLimits

0xba9c,	// (0x000998dc) main_cam5_pane_t8

0xbab8,	// (0x000998f8) main_cam5_pane_t9_ParamLimits

0xbab8,	// (0x000998f8) main_cam5_pane_t9

0xbaca,	// (0x0009990a) main_cam5_pane_t10_ParamLimits

0xbaca,	// (0x0009990a) main_cam5_pane_t10

0xbadc,	// (0x0009991c) main_cam5_pane_t11_ParamLimits

0xbadc,	// (0x0009991c) main_cam5_pane_t11

0xbaee,	// (0x0009992e) main_cam5_pane_t12_ParamLimits

0xbaee,	// (0x0009992e) main_cam5_pane_t12

0xbb03,	// (0x00099943) main_cam5_pane_t13_ParamLimits

0xbb03,	// (0x00099943) main_cam5_pane_t13

0x000c,

0xfa33,	// (0x0009d873) main_cam5_pane_t_ParamLimits

0xfa33,	// (0x0009d873) main_cam5_pane_t

0x0e3b,	// (0x0008ec7b) popup_scut_keymap_window_ParamLimits

0x0e3b,	// (0x0008ec7b) popup_scut_keymap_window

0x7a18,	// (0x00095858) aid_size_cell_brow_shortcut

0xec98,	// (0x0009cad8) bg_popup_window_pane_cp010

0x7a24,	// (0x00095864) grid_scut_pane

0x7a30,	// (0x00095870) cell_scut_pane_ParamLimits

0x7a30,	// (0x00095870) cell_scut_pane

0x7a47,	// (0x00095887) cell_scut_pane_g1

0xbb20,	// (0x00099960) cell_scut_pane_t1

0xbb2f,	// (0x0009996f) cell_scut_pane_t2

0x7a50,	// (0x00095890) cell_scut_pane_t3

0x0002,

0xfa4e,	// (0x0009d88e) cell_scut_pane_t

0x57c3,	// (0x00093603) main_mup3_pane_g8_ParamLimits

0x57c3,	// (0x00093603) main_mup3_pane_g8

0x6c7f,	// (0x00094abf) area_vitu2_query_pane_ParamLimits

0x6c7f,	// (0x00094abf) area_vitu2_query_pane

0x7791,	// (0x000955d1) input_focus_pane_cp08

0xbb3e,	// (0x0009997e) area_vitu2_query_pane_g1

0x7a5e,	// (0x0009589e) area_vitu2_query_pane_g2

0x0001,

0xfa55,	// (0x0009d895) area_vitu2_query_pane_g

0x7a6f,	// (0x000958af) area_vitu2_query_pane_t1_ParamLimits

0x7a6f,	// (0x000958af) area_vitu2_query_pane_t1

0x7a83,	// (0x000958c3) area_vitu2_query_pane_t2_ParamLimits

0x7a83,	// (0x000958c3) area_vitu2_query_pane_t2

0x7a97,	// (0x000958d7) area_vitu2_query_pane_t3_ParamLimits

0x7a97,	// (0x000958d7) area_vitu2_query_pane_t3

0xbb4a,	// (0x0009998a) area_vitu2_query_pane_t4_ParamLimits

0xbb4a,	// (0x0009998a) area_vitu2_query_pane_t4

0xbb72,	// (0x000999b2) area_vitu2_query_pane_t5_ParamLimits

0xbb72,	// (0x000999b2) area_vitu2_query_pane_t5

0xbb9a,	// (0x000999da) area_vitu2_query_pane_t6_ParamLimits

0xbb9a,	// (0x000999da) area_vitu2_query_pane_t6

0x0006,

0xfa5a,	// (0x0009d89a) area_vitu2_query_pane_t_ParamLimits

0xfa5a,	// (0x0009d89a) area_vitu2_query_pane_t

0x7abf,	// (0x000958ff) bg_button_pane_cp018

0x7acd,	// (0x0009590d) bg_button_pane_cp021

0x7ad9,	// (0x00095919) bg_button_pane_cp022

0x7ae8,	// (0x00095928) input_focus_pane_cp09

0x2d73,	// (0x00090bb3) aid_size_touch_mv_arrow_left

0x2d9c,	// (0x00090bdc) aid_size_touch_mv_arrow_right

0x72c8,	// (0x00095108) main_cset_slider_pane_g16_ParamLimits

0x72c8,	// (0x00095108) main_cset_slider_pane_g16

0x72d4,	// (0x00095114) main_cset_slider_pane_g17_ParamLimits

0x72d4,	// (0x00095114) main_cset_slider_pane_g17

0x7a05,	// (0x00095845) cell_cam4_burst_pane_g1_ParamLimits

0x0bfb,	// (0x0008ea3b) compa_mode_pane

0x74ae,	// (0x000952ee) popup_vtel_slider_window_g3_ParamLimits

0x74ae,	// (0x000952ee) popup_vtel_slider_window_g3

0x74c5,	// (0x00095305) popup_vtel_slider_window_g4_ParamLimits

0x74c5,	// (0x00095305) popup_vtel_slider_window_g4

0x74dc,	// (0x0009531c) popup_vtel_slider_window_t1_ParamLimits

0x74dc,	// (0x0009531c) popup_vtel_slider_window_t1

0x0bfb,	// (0x0008ea3b) main_cl_pane

0xa670,	// (0x000984b0) popup_imed_adjust2_window_ParamLimits

0xa648,	// (0x00098488) bg_tb_trans_pane_cp05_ParamLimits

0xb08b,	// (0x00098ecb) popup_imed_adjust2_window_g1_ParamLimits

0xb09a,	// (0x00098eda) popup_imed_adjust2_window_g2_ParamLimits

0xb09a,	// (0x00098eda) popup_imed_adjust2_window_g2

0xb0a6,	// (0x00098ee6) popup_imed_adjust2_window_g3_ParamLimits

0xb0a6,	// (0x00098ee6) popup_imed_adjust2_window_g3

0x0002,

0xf7d1,	// (0x0009d611) popup_imed_adjust2_window_g_ParamLimits

0xf7d1,	// (0x0009d611) popup_imed_adjust2_window_g

0xb0b2,	// (0x00098ef2) popup_imed_adjust2_window_t1_ParamLimits

0xb0ca,	// (0x00098f0a) slider_imed_adjust_pane_ParamLimits

0xb0de,	// (0x00098f1e) slider_imed_adjust_pane_g1_ParamLimits

0xb0ee,	// (0x00098f2e) slider_imed_adjust_pane_g2_ParamLimits

0xb0fe,	// (0x00098f3e) slider_imed_adjust_pane_g3_ParamLimits

0xb10f,	// (0x00098f4f) slider_imed_adjust_pane_g4_ParamLimits

0xf7d8,	// (0x0009d618) slider_imed_adjust_pane_g_ParamLimits

0x699c,	// (0x000947dc) aid_touch_area_cam4_ParamLimits

0x699c,	// (0x000947dc) aid_touch_area_cam4

0xd8a8,	// (0x0009b6e8) battery_pane_cp01

0x6a6c,	// (0x000948ac) main_camera4_pane_g6_ParamLimits

0x6a6c,	// (0x000948ac) main_camera4_pane_g6

0x6a96,	// (0x000948d6) main_camera4_pane_t2_ParamLimits

0x6a96,	// (0x000948d6) main_camera4_pane_t2

0x0001,

0xf8d6,	// (0x0009d716) main_camera4_pane_t_ParamLimits

0xf8d6,	// (0x0009d716) main_camera4_pane_t

0x6acb,	// (0x0009490b) aid_touch_area_vid4_ParamLimits

0x6acb,	// (0x0009490b) aid_touch_area_vid4

0x6b32,	// (0x00094972) main_video4_pane_g5_ParamLimits

0x6b32,	// (0x00094972) main_video4_pane_g5

0x6b5d,	// (0x0009499d) vid4_progress_pane_ParamLimits

0x6b5d,	// (0x0009499d) vid4_progress_pane

0xb7e2,	// (0x00099622) main_cset_slider_pane_g18_ParamLimits

0xb7e2,	// (0x00099622) main_cset_slider_pane_g18

0xba08,	// (0x00099848) cell_cam4_burst_pane_g2_ParamLimits

0xba08,	// (0x00099848) cell_cam4_burst_pane_g2

0x0001,

0xfa2e,	// (0x0009d86e) cell_cam4_burst_pane_g_ParamLimits

0xfa2e,	// (0x0009d86e) cell_cam4_burst_pane_g

0xe1b7,	// (0x0009bff7) bg_cl_pane_ParamLimits

0xe1b7,	// (0x0009bff7) bg_cl_pane

0x7af7,	// (0x00095937) cl_header_pane_ParamLimits

0x7af7,	// (0x00095937) cl_header_pane

0x7b0b,	// (0x0009594b) cl_listscroll_pane_ParamLimits

0x7b0b,	// (0x0009594b) cl_listscroll_pane

0xbbe6,	// (0x00099a26) bg_cl_pane_g1

0xbbee,	// (0x00099a2e) bg_cl_pane_g2

0xbbf6,	// (0x00099a36) bg_cl_pane_g3

0xbbfe,	// (0x00099a3e) bg_cl_pane_g4

0xbc06,	// (0x00099a46) bg_cl_pane_g5

0xbc0e,	// (0x00099a4e) bg_cl_pane_g6

0xbc16,	// (0x00099a56) bg_cl_pane_g7

0xbc1e,	// (0x00099a5e) bg_cl_pane_g8

0xbc26,	// (0x00099a66) bg_cl_pane_g9

0x0008,

0xfa69,	// (0x0009d8a9) bg_cl_pane_g

0x7b1b,	// (0x0009595b) aid_height_cl_leading_ParamLimits

0x7b1b,	// (0x0009595b) aid_height_cl_leading

0x7b27,	// (0x00095967) aid_height_cl_text_ParamLimits

0x7b27,	// (0x00095967) aid_height_cl_text

0xefd4,	// (0x0009ce14) bg_cl_header_pane_ParamLimits

0xefd4,	// (0x0009ce14) bg_cl_header_pane

0x7b46,	// (0x00095986) cl_header_pane_g1_ParamLimits

0x7b46,	// (0x00095986) cl_header_pane_g1

0x7b5c,	// (0x0009599c) cl_header_pane_t1_ParamLimits

0x7b5c,	// (0x0009599c) cl_header_pane_t1

0xbc2e,	// (0x00099a6e) cl_list_pane

0xb7b5,	// (0x000995f5) hc_scroll_pane_cp01

0xe58d,	// (0x0009c3cd) bg_cl_header_pane_g1

0xb69b,	// (0x000994db) bg_cl_header_pane_g2

0xe5ad,	// (0x0009c3ed) bg_cl_header_pane_g3

0xb6ab,	// (0x000994eb) bg_cl_header_pane_g4

0xb6a3,	// (0x000994e3) bg_cl_header_pane_g5

0xb8fd,	// (0x0009973d) bg_cl_header_pane_g6

0xb6c3,	// (0x00099503) bg_cl_header_pane_g7

0xb6cb,	// (0x0009950b) bg_cl_header_pane_g8

0xb6bb,	// (0x000994fb) bg_cl_header_pane_g9

0x0008,

0xfa7c,	// (0x0009d8bc) bg_cl_header_pane_g

0x7b75,	// (0x000959b5) hc_cl_list_double_graphic_heading_pane_ParamLimits

0x7b75,	// (0x000959b5) hc_cl_list_double_graphic_heading_pane

0x7b86,	// (0x000959c6) hc_cl_list_single_graphic_pane_ParamLimits

0x7b86,	// (0x000959c6) hc_cl_list_single_graphic_pane

0x7b9c,	// (0x000959dc) hc_cl_list_single_graphic_pane_g1_ParamLimits

0x7b9c,	// (0x000959dc) hc_cl_list_single_graphic_pane_g1

0x7ba8,	// (0x000959e8) hc_cl_list_single_graphic_pane_g2_ParamLimits

0x7ba8,	// (0x000959e8) hc_cl_list_single_graphic_pane_g2

0x0001,

0xfa8f,	// (0x0009d8cf) hc_cl_list_single_graphic_pane_g_ParamLimits

0xfa8f,	// (0x0009d8cf) hc_cl_list_single_graphic_pane_g

0x7bbc,	// (0x000959fc) hc_cl_list_single_graphic_pane_t1_ParamLimits

0x7bbc,	// (0x000959fc) hc_cl_list_single_graphic_pane_t1

0x7b9c,	// (0x000959dc) hc_cl_list_double_graphic_heading_pane_g1_ParamLimits

0x7b9c,	// (0x000959dc) hc_cl_list_double_graphic_heading_pane_g1

0x7bd1,	// (0x00095a11) hc_cl_list_double_graphic_heading_pane_g2_ParamLimits

0x7bd1,	// (0x00095a11) hc_cl_list_double_graphic_heading_pane_g2

0x7be5,	// (0x00095a25) hc_cl_list_double_graphic_heading_pane_g3_ParamLimits

0x7be5,	// (0x00095a25) hc_cl_list_double_graphic_heading_pane_g3

0x0002,

0xfa94,	// (0x0009d8d4) hc_cl_list_double_graphic_heading_pane_g_ParamLimits

0xfa94,	// (0x0009d8d4) hc_cl_list_double_graphic_heading_pane_g

0x7bf9,	// (0x00095a39) hc_cl_list_double_graphic_heading_pane_t1_ParamLimits

0x7bf9,	// (0x00095a39) hc_cl_list_double_graphic_heading_pane_t1

0x7c0e,	// (0x00095a4e) hc_cl_list_double_graphic_heading_pane_t2_ParamLimits

0x7c0e,	// (0x00095a4e) hc_cl_list_double_graphic_heading_pane_t2

0x0001,

0xfa9b,	// (0x0009d8db) hc_cl_list_double_graphic_heading_pane_t_ParamLimits

0xfa9b,	// (0x0009d8db) hc_cl_list_double_graphic_heading_pane_t

0xd9d8,	// (0x0009b818) vid4_progress_pane_g1

0xd9e8,	// (0x0009b828) vid4_progress_pane_g2

0xe852,	// (0x0009c692) vid4_progress_pane_g3

0xd9f8,	// (0x0009b838) vid4_progress_pane_g4

0x0004,

0xfaa0,	// (0x0009d8e0) vid4_progress_pane_g

0xda16,	// (0x0009b856) vid4_progress_pane_t1

0xda2b,	// (0x0009b86b) vid4_progress_pane_t2

0x0002,

0xfaab,	// (0x0009d8eb) vid4_progress_pane_t

0xda56,	// (0x0009b896) wait_bar_pane_cp07

0xa941,	// (0x00098781) blid_firmament_pane_ParamLimits

0xa984,	// (0x000987c4) popup_blid_sat_info2_window_g1

0xa9a8,	// (0x000987e8) popup_blid_sat_info2_window_t3

0xa9b6,	// (0x000987f6) popup_blid_sat_info2_window_t4

0xa9c4,	// (0x00098804) popup_blid_sat_info2_window_t5

0xa9d2,	// (0x00098812) popup_blid_sat_info2_window_t6

0xa9e2,	// (0x00098822) popup_blid_sat_info2_window_t7

0xa9f0,	// (0x00098830) popup_blid_sat_info2_window_t8

0xa9fe,	// (0x0009883e) popup_blid_sat_info2_window_t9

0xaa0c,	// (0x0009884c) popup_blid_sat_info2_window_t10

0xaace,	// (0x0009890e) aid_firma_cardinal_ParamLimits

0xaae2,	// (0x00098922) blid_firmament_pane_t1_ParamLimits

0xaaf9,	// (0x00098939) blid_firmament_pane_t2_ParamLimits

0xab10,	// (0x00098950) blid_firmament_pane_t3_ParamLimits

0xab27,	// (0x00098967) blid_firmament_pane_t4_ParamLimits

0xf6ca,	// (0x0009d50a) blid_firmament_pane_t_ParamLimits

0xab3e,	// (0x0009897e) blid_sat_info_pane_ParamLimits

0xefd4,	// (0x0009ce14) main_cam_set_pane_ParamLimits

0x6075,	// (0x00093eb5) aid_size_cell_colour_35_ParamLimits

0x6095,	// (0x00093ed5) aid_size_cell_colour_112_ParamLimits

0x60b5,	// (0x00093ef5) aid_size_cell_effect_ParamLimits

0xa648,	// (0x00098488) bg_tb_trans_pane_cp02_ParamLimits

0xe7d9,	// (0x0009c619) heading_imed_pane_ParamLimits

0x60d5,	// (0x00093f15) listscroll_imed_pane_ParamLimits

0x3fcd,	// (0x00091e0d) popup_call2_audio_first_window_g5_ParamLimits

0x3fcd,	// (0x00091e0d) popup_call2_audio_first_window_g5

0x6647,	// (0x00094487) aid_size_touch_image3_arrow_left_ParamLimits

0x6647,	// (0x00094487) aid_size_touch_image3_arrow_left

0x6673,	// (0x000944b3) aid_size_touch_image3_arrow_right_ParamLimits

0x6673,	// (0x000944b3) aid_size_touch_image3_arrow_right

0xda41,	// (0x0009b881) vid4_progress_pane_t3

0x63e8,	// (0x00094228) main_hwr_training_symbol_option_pane_ParamLimits

0x63e8,	// (0x00094228) main_hwr_training_symbol_option_pane

0xb378,	// (0x000991b8) popup_hwr_training_preview_window_ParamLimits

0xb378,	// (0x000991b8) popup_hwr_training_preview_window

0x6408,	// (0x00094248) hwr_training_navi_pane_g5_ParamLimits

0x6408,	// (0x00094248) hwr_training_navi_pane_g5

0xb689,	// (0x000994c9) popup_char_count_window

0xd943,	// (0x0009b783) bg_popup_sub_pane_cp20_ParamLimits

0x75f4,	// (0x00095434) list_vitu2_match_list_pane_ParamLimits

0x7603,	// (0x00095443) vitu2_page_scroll_pane_ParamLimits

0x7603,	// (0x00095443) vitu2_page_scroll_pane

0xbc91,	// (0x00099ad1) list_single_hwr_training_symbol_option_pane_ParamLimits

0xbc91,	// (0x00099ad1) list_single_hwr_training_symbol_option_pane

0xbca4,	// (0x00099ae4) list_single_hwr_training_symbol_option_pane_g1

0xbcac,	// (0x00099aec) list_single_hwr_training_symbol_option_pane_t1

0xbcba,	// (0x00099afa) bg_button_pane_cp023

0xbcc3,	// (0x00099b03) bg_button_pane_cp024

0x7c23,	// (0x00095a63) vitu2_page_scroll_pane_g1

0x7c2b,	// (0x00095a6b) vitu2_page_scroll_pane_g2

0x0001,

0xfab2,	// (0x0009d8f2) vitu2_page_scroll_pane_g

0x7c33,	// (0x00095a73) vitu2_page_scroll_pane_t1

0xbcf6,	// (0x00099b36) popup_char_count_window_g1

0xbcff,	// (0x00099b3f) popup_char_count_window_g2

0xbd08,	// (0x00099b48) popup_char_count_window_g3

0x0002,

0xfab7,	// (0x0009d8f7) popup_char_count_window_g

0xbd11,	// (0x00099b51) popup_char_count_window_t1

0x0bfb,	// (0x0008ea3b) main_vded2_pane

0xb077,	// (0x00098eb7) aid_size_cell_imed_line

0xb081,	// (0x00098ec1) grid_imed_line_width_pane

0x6bcb,	// (0x00094a0b) vid4_indicators_pane_g4

0xbd1f,	// (0x00099b5f) cell_imed_line_width_pane_ParamLimits

0xbd1f,	// (0x00099b5f) cell_imed_line_width_pane

0xbd33,	// (0x00099b73) cell_imed_line_width_pane_g1

0xa8ef,	// (0x0009872f) cell_imed_line_width_pane_g2

0x0001,

0xfabe,	// (0x0009d8fe) cell_imed_line_width_pane_g

0x7c42,	// (0x00095a82) main_vded2_pane_g1_ParamLimits

0x7c42,	// (0x00095a82) main_vded2_pane_g1

0x7c58,	// (0x00095a98) main_vded2_pane_g2_ParamLimits

0x7c58,	// (0x00095a98) main_vded2_pane_g2

0x0001,

0xfac3,	// (0x0009d903) main_vded2_pane_g_ParamLimits

0xfac3,	// (0x0009d903) main_vded2_pane_g

0x7c6a,	// (0x00095aaa) vded2_slider_pane_ParamLimits

0x7c6a,	// (0x00095aaa) vded2_slider_pane

0x7c7a,	// (0x00095aba) aid_size_touch_vded2_end

0x7c84,	// (0x00095ac4) aid_size_touch_vded2_playhead

0xbd3c,	// (0x00099b7c) aid_size_touch_vded2_start

0xbd44,	// (0x00099b84) vded2_slider_bg_pane

0xbd4d,	// (0x00099b8d) vded2_slider_pane_g1

0xbd56,	// (0x00099b96) vded2_slider_pane_g2

0x7c8e,	// (0x00095ace) vded2_slider_pane_g3

0x0002,

0xfac8,	// (0x0009d908) vded2_slider_pane_g

0xbd5e,	// (0x00099b9e) vded2_slider_bg_pane_g1

0xbd67,	// (0x00099ba7) vded2_slider_bg_pane_g2

0xbd70,	// (0x00099bb0) vded2_slider_bg_pane_g3

0x0002,

0xfacf,	// (0x0009d90f) vded2_slider_bg_pane_g

0x3430,	// (0x00091270) aid_postcard_touch_down_pane_ParamLimits

0x3430,	// (0x00091270) aid_postcard_touch_down_pane

0x3446,	// (0x00091286) aid_postcard_touch_up_pane_ParamLimits

0x3446,	// (0x00091286) aid_postcard_touch_up_pane

0x0bfb,	// (0x0008ea3b) main_blid2_pane

0xa656,	// (0x00098496) popup_blid2_search_window

0x0bfb,	// (0x0008ea3b) blid2_gps_pane

0x0bfb,	// (0x0008ea3b) blid2_navig_pane

0x0bfb,	// (0x0008ea3b) blid2_search_pane

0x0bfb,	// (0x0008ea3b) blid2_tripm_pane

0x7c99,	// (0x00095ad9) blid2_search_pane_g1_ParamLimits

0x7c99,	// (0x00095ad9) blid2_search_pane_g1

0x7cb3,	// (0x00095af3) blid2_search_pane_t1_ParamLimits

0x7cb3,	// (0x00095af3) blid2_search_pane_t1

0x7cc5,	// (0x00095b05) aid_size_cell_blid2_gps_ParamLimits

0x7cc5,	// (0x00095b05) aid_size_cell_blid2_gps

0x7cdd,	// (0x00095b1d) blid2_gps_pane_g1_ParamLimits

0x7cdd,	// (0x00095b1d) blid2_gps_pane_g1

0x7cf1,	// (0x00095b31) grid_blid2_satellite_pane_ParamLimits

0x7cf1,	// (0x00095b31) grid_blid2_satellite_pane

0x7d0b,	// (0x00095b4b) blid2_navig_pane_g1_ParamLimits

0x7d0b,	// (0x00095b4b) blid2_navig_pane_g1

0x7d17,	// (0x00095b57) blid2_navig_pane_t1_ParamLimits

0x7d17,	// (0x00095b57) blid2_navig_pane_t1

0x7d32,	// (0x00095b72) blid2_navig_pane_t2_ParamLimits

0x7d32,	// (0x00095b72) blid2_navig_pane_t2

0x0001,

0xfad6,	// (0x0009d916) blid2_navig_pane_t_ParamLimits

0xfad6,	// (0x0009d916) blid2_navig_pane_t

0x7d4d,	// (0x00095b8d) blid2_navig_ring_pane_ParamLimits

0x7d4d,	// (0x00095b8d) blid2_navig_ring_pane

0x7d66,	// (0x00095ba6) blid2_speed_pane_ParamLimits

0x7d66,	// (0x00095ba6) blid2_speed_pane

0x7d72,	// (0x00095bb2) blid2_tripm_pane_g1_ParamLimits

0x7d72,	// (0x00095bb2) blid2_tripm_pane_g1

0x7d8b,	// (0x00095bcb) blid2_tripm_pane_g2_ParamLimits

0x7d8b,	// (0x00095bcb) blid2_tripm_pane_g2

0x7d9f,	// (0x00095bdf) blid2_tripm_pane_g3_ParamLimits

0x7d9f,	// (0x00095bdf) blid2_tripm_pane_g3

0x7db3,	// (0x00095bf3) blid2_tripm_pane_g4_ParamLimits

0x7db3,	// (0x00095bf3) blid2_tripm_pane_g4

0x7dc7,	// (0x00095c07) blid2_tripm_pane_g5_ParamLimits

0x7dc7,	// (0x00095c07) blid2_tripm_pane_g5

0x0005,

0xfadb,	// (0x0009d91b) blid2_tripm_pane_g_ParamLimits

0xfadb,	// (0x0009d91b) blid2_tripm_pane_g

0x7ded,	// (0x00095c2d) blid2_tripm_pane_t1_ParamLimits

0x7ded,	// (0x00095c2d) blid2_tripm_pane_t1

0x7e08,	// (0x00095c48) blid2_tripm_pane_t2_ParamLimits

0x7e08,	// (0x00095c48) blid2_tripm_pane_t2

0x7e21,	// (0x00095c61) blid2_tripm_pane_t3_ParamLimits

0x7e21,	// (0x00095c61) blid2_tripm_pane_t3

0x0003,

0xfae8,	// (0x0009d928) blid2_tripm_pane_t_ParamLimits

0xfae8,	// (0x0009d928) blid2_tripm_pane_t

0x7e68,	// (0x00095ca8) cell_blid2_satellite_pane_ParamLimits

0x7e68,	// (0x00095ca8) cell_blid2_satellite_pane

0x7e86,	// (0x00095cc6) cell_blid2_satellite_pane_g1

0xbd79,	// (0x00099bb9) cell_blid2_satellite_pane_t1

0xab4e,	// (0x0009898e) blid2_speed_pane_g1

0xbd87,	// (0x00099bc7) blid2_speed_pane_t1

0xbd95,	// (0x00099bd5) blid2_speed_pane_t2

0x0001,

0xfaf1,	// (0x0009d931) blid2_speed_pane_t

0xab4e,	// (0x0009898e) blid2_navig_ring_pane_g1

0x7e8f,	// (0x00095ccf) blid2_navig_ring_pane_g2

0x7e97,	// (0x00095cd7) blid2_navig_ring_pane_g3

0x7e9f,	// (0x00095cdf) blid2_navig_ring_pane_g4

0x7ea7,	// (0x00095ce7) blid2_navig_ring_pane_g5

0x0004,

0xfaf6,	// (0x0009d936) blid2_navig_ring_pane_g

0x0bfb,	// (0x0008ea3b) bg_popup_window_pane_cp011

0xbda3,	// (0x00099be3) popup_blid2_search_window_g1

0xbdab,	// (0x00099beb) popup_blid2_search_window_t1

0xbdb9,	// (0x00099bf9) popup_blid2_search_window_t2

0x0001,

0xfb01,	// (0x0009d941) popup_blid2_search_window_t

0xe49c,	// (0x0009c2dc) main_browser_pane_g1

0xe1b7,	// (0x0009bff7) main_browser_pane_ParamLimits

0xd943,	// (0x0009b783) bg_button_pane_cp011_ParamLimits

0x6ea4,	// (0x00094ce4) cell_vitu2_function_pane_g1_ParamLimits

0xa648,	// (0x00098488) bg_popup_sub_pane_cp22_ParamLimits

0x7791,	// (0x000955d1) input_focus_pane_cp08_ParamLimits

0x77a8,	// (0x000955e8) popup_vitu2_query_button_pane_ParamLimits

0x77a8,	// (0x000955e8) popup_vitu2_query_button_pane

0x77b9,	// (0x000955f9) popup_vitu2_query_input_button_pane

0xb952,	// (0x00099792) popup_vitu2_query_window_g1_ParamLimits

0x77c3,	// (0x00095603) popup_vitu2_query_window_g2_ParamLimits

0xfa02,	// (0x0009d842) popup_vitu2_query_window_g_ParamLimits

0x0bfb,	// (0x0008ea3b) bg_button_pane_cp026

0x7eaf,	// (0x00095cef) popup_vitu2_query_input_button_pane_g1

0x0bfb,	// (0x0008ea3b) bg_button_pane_cp025

0xbdc7,	// (0x00099c07) popup_vitu2_query_button_pane_t1

0x549e,	// (0x000932de) main_mp3_pane_t6

0x54ac,	// (0x000932ec) popup_slider_window_cp01

0xd8d2,	// (0x0009b712) cam4_battery_pane

0xd939,	// (0x0009b779) cam4_battery_pane_cp02

0xd9d0,	// (0x0009b810) cam4_battery_pane_cp01

0xd9d0,	// (0x0009b810) cam4_battery_pane_cp03

0xb4e1,	// (0x00099321) cam4_battery_pane_g1

0xab4e,	// (0x0009898e) cam4_battery_pane_g2

0x0001,

0xfb06,	// (0x0009d946) cam4_battery_pane_g

0xaa1a,	// (0x0009885a) popup_blid_sat_info2_window_t11

0x2d73,	// (0x00090bb3) aid_size_touch_mv_arrow_left_ParamLimits

0x2d9c,	// (0x00090bdc) aid_size_touch_mv_arrow_right_ParamLimits

0xebea,	// (0x0009ca2a) navi_pane_g1_ParamLimits

0x2ddb,	// (0x00090c1b) navi_pane_g2_ParamLimits

0x2e09,	// (0x00090c49) navi_pane_g3_ParamLimits

0xf404,	// (0x0009d244) navi_pane_g_ParamLimits

0x2e61,	// (0x00090ca1) navi_pane_mv_t1_ParamLimits

0x60e1,	// (0x00093f21) grid_imed_effect_pane_ParamLimits

0x1c68,	// (0x0008faa8) aid_placing_vt_slider_lsc

0xe3eb,	// (0x0009c22b) aid_placing_vt_slider_prt

0xefd4,	// (0x0009ce14) bg_tb_trans_pane_cp01_ParamLimits

0xacda,	// (0x00098b1a) popup_image_details_window_g1_ParamLimits

0xaced,	// (0x00098b2d) popup_image_details_window_g2_ParamLimits

0xad02,	// (0x00098b42) popup_image_details_window_g3_ParamLimits

0xad02,	// (0x00098b42) popup_image_details_window_g3

0xf70f,	// (0x0009d54f) popup_image_details_window_g_ParamLimits

0xad16,	// (0x00098b56) popup_image_details_window_t1_ParamLimits

0xad28,	// (0x00098b68) popup_image_details_window_t2_ParamLimits

0xad41,	// (0x00098b81) popup_image_details_window_t3_ParamLimits

0xad55,	// (0x00098b95) popup_image_details_window_t4_ParamLimits

0xad70,	// (0x00098bb0) popup_image_details_window_t5_ParamLimits

0xf716,	// (0x0009d556) popup_image_details_window_t_ParamLimits

0x7b33,	// (0x00095973) cl_header_name_pane_ParamLimits

0x7b33,	// (0x00095973) cl_header_name_pane

0x7eb7,	// (0x00095cf7) cl_header_name_pane_t1_ParamLimits

0x7eb7,	// (0x00095cf7) cl_header_name_pane_t1

0x7ed8,	// (0x00095d18) cl_header_name_pane_t2_ParamLimits

0x7ed8,	// (0x00095d18) cl_header_name_pane_t2

0x7f1a,	// (0x00095d5a) cl_header_name_pane_t3_ParamLimits

0x7f1a,	// (0x00095d5a) cl_header_name_pane_t3

0x0002,

0xfb0b,	// (0x0009d94b) cl_header_name_pane_t_ParamLimits

0xfb0b,	// (0x0009d94b) cl_header_name_pane_t

0x2e32,	// (0x00090c72) navi_pane_mv_g2_ParamLimits

0xb617,	// (0x00099457) field_vitu2_entry_pane_g1_ParamLimits

0xb623,	// (0x00099463) field_vitu2_entry_pane_g2_ParamLimits

0xb62f,	// (0x0009946f) field_vitu2_entry_pane_g3_ParamLimits

0xb62f,	// (0x0009946f) field_vitu2_entry_pane_g3

0xf908,	// (0x0009d748) field_vitu2_entry_pane_g_ParamLimits

0x6e20,	// (0x00094c60) cell_vitu2_itu_pane_g1_ParamLimits

0x6e30,	// (0x00094c70) cell_vitu2_itu_pane_g2_ParamLimits

0x6e30,	// (0x00094c70) cell_vitu2_itu_pane_g2

0x0001,

0xf914,	// (0x0009d754) cell_vitu2_itu_pane_g_ParamLimits

0xf914,	// (0x0009d754) cell_vitu2_itu_pane_g

0xd943,	// (0x0009b783) bg_vkb2_func_pane_cp05_ParamLimits

0xd943,	// (0x0009b783) bg_vkb2_func_pane_cp05

0xd943,	// (0x0009b783) bg_vkb2_func_pane_cp03

0xd943,	// (0x0009b783) bg_vkb2_func_pane_cp04

0xd943,	// (0x0009b783) bg_vkb2_func_pane_cp10_ParamLimits

0xd943,	// (0x0009b783) bg_vkb2_func_pane_cp10

0x7ad9,	// (0x00095919) bg_vkb2_func_pane_cp08

0x7abf,	// (0x000958ff) bg_vkb2_func_pane_cp06

0x7acd,	// (0x0009590d) bg_vkb2_func_pane_cp07

0xbccc,	// (0x00099b0c) bg_vkb2_func_pane_cp11_ParamLimits

0xbccc,	// (0x00099b0c) bg_vkb2_func_pane_cp11

0xbce1,	// (0x00099b21) bg_vkb2_func_pane_cp12_ParamLimits

0xbce1,	// (0x00099b21) bg_vkb2_func_pane_cp12

0x0bfb,	// (0x0008ea3b) bg_vkb2_func_pane_cp09

0xb69b,	// (0x000994db) bg_vkb2_func_pane_g1

0xe5ad,	// (0x0009c3ed) bg_vkb2_func_pane_g2

0xb6a3,	// (0x000994e3) bg_vkb2_func_pane_g3

0xb6ab,	// (0x000994eb) bg_vkb2_func_pane_g4

0xb8fd,	// (0x0009973d) bg_vkb2_func_pane_g5

0xb6c3,	// (0x00099503) bg_vkb2_func_pane_g6

0xb6cb,	// (0x0009950b) bg_vkb2_func_pane_g7

0xb6bb,	// (0x000994fb) bg_vkb2_func_pane_g8

0xe58d,	// (0x0009c3cd) bg_vkb2_func_pane_g9

0x0008,

0xfb12,	// (0x0009d952) bg_vkb2_func_pane_g

0x7ddb,	// (0x00095c1b) blid2_tripm_pane_g6_ParamLimits

0x7ddb,	// (0x00095c1b) blid2_tripm_pane_g6

0xb49b,	// (0x000992db) mp4_progress_pane_g1

0x7e54,	// (0x00095c94) blid2_tripm_values_pane_ParamLimits

0x7e54,	// (0x00095c94) blid2_tripm_values_pane

0x7f4b,	// (0x00095d8b) blid2_tripm_values_pane_t1

0x7f59,	// (0x00095d99) blid2_tripm_values_pane_t2

0x7f67,	// (0x00095da7) blid2_tripm_values_pane_t3

0x7f75,	// (0x00095db5) blid2_tripm_values_pane_t4

0x7f83,	// (0x00095dc3) blid2_tripm_values_pane_t5

0x7f91,	// (0x00095dd1) blid2_tripm_values_pane_t6

0x7f9f,	// (0x00095ddf) blid2_tripm_values_pane_t7

0x7fad,	// (0x00095ded) blid2_tripm_values_pane_t8

0x7fbb,	// (0x00095dfb) blid2_tripm_values_pane_t9

0x0008,

0xfb25,	// (0x0009d965) blid2_tripm_values_pane_t

0x1caa,	// (0x0008faea) call_video_pane_t1_ParamLimits

0x1cc8,	// (0x0008fb08) call_video_pane_t2_ParamLimits

0xf28d,	// (0x0009d0cd) call_video_pane_t_ParamLimits

0x3333,	// (0x00091173) msg_header_pane_g1_ParamLimits

0xee13,	// (0x0009cc53) msg_header_pane_g2_ParamLimits

0xee13,	// (0x0009cc53) msg_header_pane_g2

0x0001,

0xf49b,	// (0x0009d2db) msg_header_pane_g_ParamLimits

0xf49b,	// (0x0009d2db) msg_header_pane_g

0xe1b7,	// (0x0009bff7) main_clock2_pane_ParamLimits

0x5df4,	// (0x00093c34) grid_clock2_toolbar_pane_ParamLimits

0x5df4,	// (0x00093c34) grid_clock2_toolbar_pane

0x5df4,	// (0x00093c34) listscroll_clock2_pane_ParamLimits

0x5df4,	// (0x00093c34) listscroll_clock2_pane

0x5ed6,	// (0x00093d16) main_clock2_pane_t3_ParamLimits

0x5ed6,	// (0x00093d16) main_clock2_pane_t3

0x5ef9,	// (0x00093d39) main_clock2_pane_t4_ParamLimits

0x5ef9,	// (0x00093d39) main_clock2_pane_t4

0xbdd5,	// (0x00099c15) cell_clock2_toolbar_pane

0xbddd,	// (0x00099c1d) cell_clock2_toolbar_pane_cp01

0xbddd,	// (0x00099c1d) cell_clock2_toolbar_pane_cp02

0xbde5,	// (0x00099c25) cell_clock2_toolbar_pane_cp03

0xbded,	// (0x00099c2d) list_clock2_pane

0xeb41,	// (0x0009c981) scroll_pane_cp10

0xbdf5,	// (0x00099c35) list_single_clock2_pane_ParamLimits

0xbdf5,	// (0x00099c35) list_single_clock2_pane

0xec98,	// (0x0009cad8) list_highlight_pane_cp08

0xbe02,	// (0x00099c42) list_single_clock2_pane_t1

0xbe10,	// (0x00099c50) list_single_clock2_pane_t2

0x0001,

0xfb38,	// (0x0009d978) list_single_clock2_pane_t

0x0bfb,	// (0x0008ea3b) bg_button_pane_cp10

0xbe1e,	// (0x00099c5e) cell_clock2_toolbar_pane_g1

0x33bc,	// (0x000911fc) aid_main_viewer_pane_g1_ParamLimits

0x33bc,	// (0x000911fc) aid_main_viewer_pane_g1

0x33ca,	// (0x0009120a) aid_main_viewer_pane_g2_ParamLimits

0x33ca,	// (0x0009120a) aid_main_viewer_pane_g2

0x33d8,	// (0x00091218) aid_main_viewer_pane_g3_ParamLimits

0x33d8,	// (0x00091218) aid_main_viewer_pane_g3

0x33e7,	// (0x00091227) aid_main_viewer_pane_g4_ParamLimits

0x33e7,	// (0x00091227) aid_main_viewer_pane_g4

0x0003,

0xf4ac,	// (0x0009d2ec) aid_main_viewer_pane_g_ParamLimits

0xf4ac,	// (0x0009d2ec) aid_main_viewer_pane_g

0x46c1,	// (0x00092501) main_calc_pane_ParamLimits

0x46d5,	// (0x00092515) main_dialer2_pane_ParamLimits

0x0bfb,	// (0x0008ea3b) main_cam6_pane

0x0bfb,	// (0x0008ea3b) main_vid6_pane

0x5e00,	// (0x00093c40) listscroll_gen_pane_cp06_ParamLimits

0x5e00,	// (0x00093c40) listscroll_gen_pane_cp06

0x5f1c,	// (0x00093d5c) main_clock2_pane_t5_ParamLimits

0x5f1c,	// (0x00093d5c) main_clock2_pane_t5

0x5f76,	// (0x00093db6) aid_call2_pane_cp10_ParamLimits

0x5f88,	// (0x00093dc8) aid_call_pane_cp10_ParamLimits

0xebbf,	// (0x0009c9ff) popup_clock_analogue_window_cp10_g1_ParamLimits

0xebbf,	// (0x0009c9ff) popup_clock_analogue_window_cp10_g2_ParamLimits

0x5f9a,	// (0x00093dda) popup_clock_analogue_window_cp10_g3_ParamLimits

0x5f9a,	// (0x00093dda) popup_clock_analogue_window_cp10_g4_ParamLimits

0xebbf,	// (0x0009c9ff) popup_clock_analogue_window_cp10_g5_ParamLimits

0xf7c6,	// (0x0009d606) popup_clock_analogue_window_cp10_g_ParamLimits

0x5fac,	// (0x00093dec) popup_clock_analogue_window_cp10_t1_ParamLimits

0x65f4,	// (0x00094434) cell_dialer2_keypad_pane_g2_ParamLimits

0x65f4,	// (0x00094434) cell_dialer2_keypad_pane_g2

0x0001,

0xf8a7,	// (0x0009d6e7) cell_dialer2_keypad_pane_g_ParamLimits

0xf8a7,	// (0x0009d6e7) cell_dialer2_keypad_pane_g

0x6610,	// (0x00094450) cell_dialer2_keypad_pane_t1

0x71bb,	// (0x00094ffb) main_cset_text2_pane_ParamLimits

0x71bb,	// (0x00094ffb) main_cset_text2_pane

0xbb3e,	// (0x0009997e) area_vitu2_query_pane_g1_ParamLimits

0x7a5e,	// (0x0009589e) area_vitu2_query_pane_g2_ParamLimits

0xfa55,	// (0x0009d895) area_vitu2_query_pane_g_ParamLimits

0xbbc2,	// (0x00099a02) area_vitu2_query_pane_t7_ParamLimits

0xbbc2,	// (0x00099a02) area_vitu2_query_pane_t7

0x7abf,	// (0x000958ff) bg_button_pane_cp018_ParamLimits

0x7acd,	// (0x0009590d) bg_button_pane_cp021_ParamLimits

0x7ad9,	// (0x00095919) bg_button_pane_cp022_ParamLimits

0x7ad9,	// (0x00095919) bg_vkb2_func_pane_cp08_ParamLimits

0x7abf,	// (0x000958ff) bg_vkb2_func_pane_cp06_ParamLimits

0x7acd,	// (0x0009590d) bg_vkb2_func_pane_cp07_ParamLimits

0x7ae8,	// (0x00095928) input_focus_pane_cp09_ParamLimits

0xda68,	// (0x0009b8a8) cam6_autofocus_pane_ParamLimits

0xda68,	// (0x0009b8a8) cam6_autofocus_pane

0x7fc9,	// (0x00095e09) cam6_image_uncrop_pane_ParamLimits

0x7fc9,	// (0x00095e09) cam6_image_uncrop_pane

0x7fd8,	// (0x00095e18) cam6_indi_pane_ParamLimits

0x7fd8,	// (0x00095e18) cam6_indi_pane

0x7fee,	// (0x00095e2e) cam6_mode_pane_ParamLimits

0x7fee,	// (0x00095e2e) cam6_mode_pane

0x8000,	// (0x00095e40) cam6_timer_pane_ParamLimits

0x8000,	// (0x00095e40) cam6_timer_pane

0x800c,	// (0x00095e4c) cam6_zoom_pane_ParamLimits

0x800c,	// (0x00095e4c) cam6_zoom_pane

0x8018,	// (0x00095e58) cam6_mode_pane_g1_ParamLimits

0x8018,	// (0x00095e58) cam6_mode_pane_g1

0x8028,	// (0x00095e68) cam6_mode_pane_g2_ParamLimits

0x8028,	// (0x00095e68) cam6_mode_pane_g2

0x8038,	// (0x00095e78) cam6_mode_pane_g3_ParamLimits

0x8038,	// (0x00095e78) cam6_mode_pane_g3

0x8048,	// (0x00095e88) cam6_mode_pane_g4_ParamLimits

0x8048,	// (0x00095e88) cam6_mode_pane_g4

0x0003,

0xfb3d,	// (0x0009d97d) cam6_mode_pane_g_ParamLimits

0xfb3d,	// (0x0009d97d) cam6_mode_pane_g

0xbe26,	// (0x00099c66) bg_tb_trans_pane_cp08_ParamLimits

0xbe26,	// (0x00099c66) bg_tb_trans_pane_cp08

0xbe34,	// (0x00099c74) cam6_battery_pane_ParamLimits

0xbe34,	// (0x00099c74) cam6_battery_pane

0xbe4a,	// (0x00099c8a) cam6_indi_pane_g1_ParamLimits

0xbe4a,	// (0x00099c8a) cam6_indi_pane_g1

0xbe5c,	// (0x00099c9c) cam6_indi_pane_g2_ParamLimits

0xbe5c,	// (0x00099c9c) cam6_indi_pane_g2

0xbe6e,	// (0x00099cae) cam6_indi_pane_g3_ParamLimits

0xbe6e,	// (0x00099cae) cam6_indi_pane_g3

0x0002,

0xfb46,	// (0x0009d986) cam6_indi_pane_g_ParamLimits

0xfb46,	// (0x0009d986) cam6_indi_pane_g

0xbe80,	// (0x00099cc0) cam6_indi_pane_t1_ParamLimits

0xbe80,	// (0x00099cc0) cam6_indi_pane_t1

0x8058,	// (0x00095e98) cam6_autofocus_pane_g1

0x8060,	// (0x00095ea0) cam6_autofocus_pane_g2

0x8068,	// (0x00095ea8) cam6_autofocus_pane_g3

0x8070,	// (0x00095eb0) cam6_autofocus_pane_g4

0x0003,

0xfb4d,	// (0x0009d98d) cam6_autofocus_pane_g

0xbea6,	// (0x00099ce6) cam6_timer_pane_g1

0xbeae,	// (0x00099cee) cam6_timer_pane_t1

0xbebc,	// (0x00099cfc) cam6_zoom_cont_pane

0xbec4,	// (0x00099d04) cam6_zoom_pane_g1

0xbecc,	// (0x00099d0c) cam6_zoom_pane_g2

0x8078,	// (0x00095eb8) cam6_zoom_pane_g3

0x0002,

0xfb56,	// (0x0009d996) cam6_zoom_pane_g

0xab4e,	// (0x0009898e) cam6_battery_pane_g1

0xab4e,	// (0x0009898e) cam6_battery_pane_g2

0x0001,

0xf6d3,	// (0x0009d513) cam6_battery_pane_g

0xbed4,	// (0x00099d14) cam6_zoom_cont_pane_g1

0xbedd,	// (0x00099d1d) cam6_zoom_cont_pane_g2

0xbee6,	// (0x00099d26) cam6_zoom_cont_pane_g3

0x0002,

0xfb5d,	// (0x0009d99d) cam6_zoom_cont_pane_g

0x8095,	// (0x00095ed5) cam6_mode_pane_cp_ParamLimits

0x8095,	// (0x00095ed5) cam6_mode_pane_cp

0x80a7,	// (0x00095ee7) cam6_zoom_pane_cp_ParamLimits

0x80a7,	// (0x00095ee7) cam6_zoom_pane_cp

0x80b3,	// (0x00095ef3) vid6_image_uncrop_cif_pane_ParamLimits

0x80b3,	// (0x00095ef3) vid6_image_uncrop_cif_pane

0x80c3,	// (0x00095f03) vid6_image_uncrop_nhd_pane_ParamLimits

0x80c3,	// (0x00095f03) vid6_image_uncrop_nhd_pane

0x80d2,	// (0x00095f12) vid6_image_uncrop_vga_pane_ParamLimits

0x80d2,	// (0x00095f12) vid6_image_uncrop_vga_pane

0x80e1,	// (0x00095f21) vid6_image_uncrop_wvga_pane_ParamLimits

0x80e1,	// (0x00095f21) vid6_image_uncrop_wvga_pane

0x80f0,	// (0x00095f30) vid6_indi_pane_ParamLimits

0x80f0,	// (0x00095f30) vid6_indi_pane

0xbe26,	// (0x00099c66) bg_tb_trans_pane_cp09_ParamLimits

0xbe26,	// (0x00099c66) bg_tb_trans_pane_cp09

0xbefe,	// (0x00099d3e) cam6_battery_pane_cp_ParamLimits

0xbefe,	// (0x00099d3e) cam6_battery_pane_cp

0xbf0a,	// (0x00099d4a) vid6_indi_pane_g1_ParamLimits

0xbf0a,	// (0x00099d4a) vid6_indi_pane_g1

0xbf1c,	// (0x00099d5c) vid6_indi_pane_g2_ParamLimits

0xbf1c,	// (0x00099d5c) vid6_indi_pane_g2

0xbf2e,	// (0x00099d6e) vid6_indi_pane_g3_ParamLimits

0xbf2e,	// (0x00099d6e) vid6_indi_pane_g3

0xbf43,	// (0x00099d83) vid6_indi_pane_g4_ParamLimits

0xbf43,	// (0x00099d83) vid6_indi_pane_g4

0xbf58,	// (0x00099d98) vid6_indi_pane_g5_ParamLimits

0xbf58,	// (0x00099d98) vid6_indi_pane_g5

0x0004,

0xfb64,	// (0x0009d9a4) vid6_indi_pane_g_ParamLimits

0xfb64,	// (0x0009d9a4) vid6_indi_pane_g

0xbf72,	// (0x00099db2) vid6_indi_pane_t1_ParamLimits

0xbf72,	// (0x00099db2) vid6_indi_pane_t1

0xbf88,	// (0x00099dc8) vid6_indi_pane_t2_ParamLimits

0xbf88,	// (0x00099dc8) vid6_indi_pane_t2

0xbfb0,	// (0x00099df0) vid6_indi_pane_t3_ParamLimits

0xbfb0,	// (0x00099df0) vid6_indi_pane_t3

0xbfd8,	// (0x00099e18) vid6_indi_pane_t4_ParamLimits

0xbfd8,	// (0x00099e18) vid6_indi_pane_t4

0x0003,

0xfb6f,	// (0x0009d9af) vid6_indi_pane_t_ParamLimits

0xfb6f,	// (0x0009d9af) vid6_indi_pane_t

0xbffc,	// (0x00099e3c) wait_bar_pane_cp08

0x8108,	// (0x00095f48) main_cset_text2_pane_t1_ParamLimits

0x8108,	// (0x00095f48) main_cset_text2_pane_t1

0x8080,	// (0x00095ec0) listscroll_gen_pane_cp06_t1_ParamLimits

0x8080,	// (0x00095ec0) listscroll_gen_pane_cp06_t1

0x0bfb,	// (0x0008ea3b) main_cam6_set_pane

0xd8c4,	// (0x0009b704) bg_tb_trans_pane_cp06_ParamLimits

0xd8da,	// (0x0009b71a) cam4_indicators_pane_g1_ParamLimits

0xd8eb,	// (0x0009b72b) cam4_indicators_pane_g2_ParamLimits

0xf8e4,	// (0x0009d724) cam4_indicators_pane_g_ParamLimits

0xd909,	// (0x0009b749) cam4_indicators_pane_t1_ParamLimits

0xd92b,	// (0x0009b76b) bg_tb_trans_pane_cp07_ParamLimits

0x6ba4,	// (0x000949e4) vid4_indicators_pane_g1_ParamLimits

0x6bb1,	// (0x000949f1) vid4_indicators_pane_g2_ParamLimits

0x6bbe,	// (0x000949fe) vid4_indicators_pane_g3_ParamLimits

0x6bcb,	// (0x00094a0b) vid4_indicators_pane_g4_ParamLimits

0xf8f6,	// (0x0009d736) vid4_indicators_pane_g_ParamLimits

0x6be3,	// (0x00094a23) vid4_indicators_pane_t1_ParamLimits

0xd9d8,	// (0x0009b818) vid4_progress_pane_g1_ParamLimits

0xd9e8,	// (0x0009b828) vid4_progress_pane_g2_ParamLimits

0xe852,	// (0x0009c692) vid4_progress_pane_g3_ParamLimits

0xd9f8,	// (0x0009b838) vid4_progress_pane_g4_ParamLimits

0xfaa0,	// (0x0009d8e0) vid4_progress_pane_g_ParamLimits

0xda16,	// (0x0009b856) vid4_progress_pane_t1_ParamLimits

0xda2b,	// (0x0009b86b) vid4_progress_pane_t2_ParamLimits

0xda41,	// (0x0009b881) vid4_progress_pane_t3_ParamLimits

0xfaab,	// (0x0009d8eb) vid4_progress_pane_t_ParamLimits

0xda56,	// (0x0009b896) wait_bar_pane_cp07_ParamLimits

0x8125,	// (0x00095f65) main_cam6_set_pane_g2_ParamLimits

0x8125,	// (0x00095f65) main_cam6_set_pane_g2

0x8149,	// (0x00095f89) main_cset6_listscroll_pane_ParamLimits

0x8149,	// (0x00095f89) main_cset6_listscroll_pane

0x8169,	// (0x00095fa9) main_cset6_slider_pane_ParamLimits

0x8169,	// (0x00095fa9) main_cset6_slider_pane

0x817f,	// (0x00095fbf) main_cset6_text2_pane_ParamLimits

0x817f,	// (0x00095fbf) main_cset6_text2_pane

0xc00b,	// (0x00099e4b) main_cset6_text_pane

0xc013,	// (0x00099e53) main_cset_list_pane_copy1_ParamLimits

0xc013,	// (0x00099e53) main_cset_list_pane_copy1

0xc023,	// (0x00099e63) scroll_pane_cp028_copy1

0x818d,	// (0x00095fcd) cset_list_set_pane_copy1

0x819e,	// (0x00095fde) aid_position_infowindow_above_copy1

0x81a6,	// (0x00095fe6) aid_position_infowindow_below_copy1

0x81ae,	// (0x00095fee) cset_list_set_pane_g1_copy1

0x81b6,	// (0x00095ff6) cset_list_set_pane_g3_copy1_ParamLimits

0x81b6,	// (0x00095ff6) cset_list_set_pane_g3_copy1

0x81c5,	// (0x00096005) cset_list_set_pane_t1_copy1_ParamLimits

0x81c5,	// (0x00096005) cset_list_set_pane_t1_copy1

0xefd4,	// (0x0009ce14) list_highlight_pane_cp021_copy1_ParamLimits

0xefd4,	// (0x0009ce14) list_highlight_pane_cp021_copy1

0xc02c,	// (0x00099e6c) cset6_slider_pane_ParamLimits

0xc02c,	// (0x00099e6c) cset6_slider_pane

0xc058,	// (0x00099e98) main_cset6_slider_pane_g1_ParamLimits

0xc058,	// (0x00099e98) main_cset6_slider_pane_g1

0x81da,	// (0x0009601a) main_cset6_slider_pane_g2_ParamLimits

0x81da,	// (0x0009601a) main_cset6_slider_pane_g2

0xc080,	// (0x00099ec0) main_cset6_slider_pane_g3_ParamLimits

0xc080,	// (0x00099ec0) main_cset6_slider_pane_g3

0x8202,	// (0x00096042) main_cset6_slider_pane_g4_ParamLimits

0x8202,	// (0x00096042) main_cset6_slider_pane_g4

0x820e,	// (0x0009604e) main_cset6_slider_pane_g5_ParamLimits

0x820e,	// (0x0009604e) main_cset6_slider_pane_g5

0xb7ca,	// (0x0009960a) main_cset6_slider_pane_g7_ParamLimits

0xb7ca,	// (0x0009960a) main_cset6_slider_pane_g7

0xb7d6,	// (0x00099616) main_cset6_slider_pane_g8_ParamLimits

0xb7d6,	// (0x00099616) main_cset6_slider_pane_g8

0x7268,	// (0x000950a8) main_cset6_slider_pane_g9_ParamLimits

0x7268,	// (0x000950a8) main_cset6_slider_pane_g9

0x7274,	// (0x000950b4) main_cset6_slider_pane_g10_ParamLimits

0x7274,	// (0x000950b4) main_cset6_slider_pane_g10

0x7280,	// (0x000950c0) main_cset6_slider_pane_g11_ParamLimits

0x7280,	// (0x000950c0) main_cset6_slider_pane_g11

0x728c,	// (0x000950cc) main_cset6_slider_pane_g12_ParamLimits

0x728c,	// (0x000950cc) main_cset6_slider_pane_g12

0x7298,	// (0x000950d8) main_cset6_slider_pane_g13_ParamLimits

0x7298,	// (0x000950d8) main_cset6_slider_pane_g13

0x72a4,	// (0x000950e4) main_cset6_slider_pane_g14_ParamLimits

0x72a4,	// (0x000950e4) main_cset6_slider_pane_g14

0x821a,	// (0x0009605a) main_cset6_slider_pane_g15_ParamLimits

0x821a,	// (0x0009605a) main_cset6_slider_pane_g15

0x72c8,	// (0x00095108) main_cset6_slider_pane_g16_ParamLimits

0x72c8,	// (0x00095108) main_cset6_slider_pane_g16

0x72d4,	// (0x00095114) main_cset6_slider_pane_g17_ParamLimits

0x72d4,	// (0x00095114) main_cset6_slider_pane_g17

0x0011,

0xfb78,	// (0x0009d9b8) main_cset6_slider_pane_g_ParamLimits

0xfb78,	// (0x0009d9b8) main_cset6_slider_pane_g

0xc08c,	// (0x00099ecc) main_cset6_slider_pane_t1_ParamLimits

0xc08c,	// (0x00099ecc) main_cset6_slider_pane_t1

0x824a,	// (0x0009608a) main_cset6_slider_pane_t2_ParamLimits

0x824a,	// (0x0009608a) main_cset6_slider_pane_t2

0x8275,	// (0x000960b5) main_cset6_slider_pane_t3_ParamLimits

0x8275,	// (0x000960b5) main_cset6_slider_pane_t3

0x82a0,	// (0x000960e0) main_cset6_slider_pane_t4_ParamLimits

0x82a0,	// (0x000960e0) main_cset6_slider_pane_t4

0x82cb,	// (0x0009610b) main_cset6_slider_pane_t5_ParamLimits

0x82cb,	// (0x0009610b) main_cset6_slider_pane_t5

0xc0cd,	// (0x00099f0d) main_cset6_slider_pane_t7_ParamLimits

0xc0cd,	// (0x00099f0d) main_cset6_slider_pane_t7

0x82f6,	// (0x00096136) main_cset6_slider_pane_t8_ParamLimits

0x82f6,	// (0x00096136) main_cset6_slider_pane_t8

0x831a,	// (0x0009615a) main_cset6_slider_pane_t9_ParamLimits

0x831a,	// (0x0009615a) main_cset6_slider_pane_t9

0x833e,	// (0x0009617e) main_cset6_slider_pane_t10_ParamLimits

0x833e,	// (0x0009617e) main_cset6_slider_pane_t10

0x8362,	// (0x000961a2) main_cset6_slider_pane_t11_ParamLimits

0x8362,	// (0x000961a2) main_cset6_slider_pane_t11

0xc103,	// (0x00099f43) main_cset6_slider_pane_t14_ParamLimits

0xc103,	// (0x00099f43) main_cset6_slider_pane_t14

0xc13c,	// (0x00099f7c) main_cset6_slider_pane_t15_ParamLimits

0xc13c,	// (0x00099f7c) main_cset6_slider_pane_t15

0x000b,

0xfb9d,	// (0x0009d9dd) main_cset6_slider_pane_t_ParamLimits

0xfb9d,	// (0x0009d9dd) main_cset6_slider_pane_t

0xc175,	// (0x00099fb5) cset_slider_pane_g1_copy1

0xc17e,	// (0x00099fbe) cset_slider_pane_g2_copy1

0xc187,	// (0x00099fc7) cset_slider_pane_g3_copy1

0x0bfb,	// (0x0008ea3b) bg_popup_sub_pane_cp011_copy1

0xb95e,	// (0x0009979e) main_cset_text_pane_g1_copy1

0xb966,	// (0x000997a6) main_cset_text_pane_t1_copy1

0xb974,	// (0x000997b4) main_cset_text_pane_t2_copy1

0xb982,	// (0x000997c2) main_cset_text_pane_t3_copy1

0xb990,	// (0x000997d0) main_cset_text_pane_t4_copy1

0xb99e,	// (0x000997de) main_cset_text_pane_t5_copy1

0xb9ac,	// (0x000997ec) main_cset_text_pane_t6_copy1

0xb9ba,	// (0x000997fa) main_cset_text_pane_t7_copy1

0x8108,	// (0x00095f48) main_cset_text2_pane_t1_copy1

0x0bfb,	// (0x0008ea3b) main_ncimui_pane

0x4917,	// (0x00092757) popup_query_ncimui_window_ParamLimits

0x4917,	// (0x00092757) popup_query_ncimui_window

0xae1f,	// (0x00098c5f) field_cale_ev2_pane_g4_ParamLimits

0xae1f,	// (0x00098c5f) field_cale_ev2_pane_g4

0x64d4,	// (0x00094314) cell_video_dialer_keypad_pane_g2_ParamLimits

0x64d4,	// (0x00094314) cell_video_dialer_keypad_pane_g2

0x0001,

0xf882,	// (0x0009d6c2) cell_video_dialer_keypad_pane_g_ParamLimits

0xf882,	// (0x0009d6c2) cell_video_dialer_keypad_pane_g

0x64ec,	// (0x0009432c) cell_video_dialer_keypad_pane_t1

0x0bfb,	// (0x0008ea3b) bg_popup_window_pane_cp012

0xea1e,	// (0x0009c85e) heading_pane_cp06

0xc27f,	// (0x0009a0bf) ncim_query_content_pane

0x0bfb,	// (0x0008ea3b) bg_popup_heading_pane_cp01

0xc287,	// (0x0009a0c7) ncim_heading_pane_t1

0xc295,	// (0x0009a0d5) ncim_indicator_popup_pane

0xc2a7,	// (0x0009a0e7) ncim_query_button_pane

0xc2bb,	// (0x0009a0fb) ncim_query_content_pane_t1

0xc2cd,	// (0x0009a10d) ncim_query_content_pane_t2

0x0005,

0xfbdc,	// (0x0009da1c) ncim_query_content_pane_t

0xc307,	// (0x0009a147) ncim_query_list_pane

0xc319,	// (0x0009a159) ncim_query_popup_pane

0xc295,	// (0x0009a0d5) ncim_indicator_popup_pane_ParamLimits

0x847f,	// (0x000962bf) ncim_query_content_pane_g1_ParamLimits

0x847f,	// (0x000962bf) ncim_query_content_pane_g1

0xc2bb,	// (0x0009a0fb) ncim_query_content_pane_t1_ParamLimits

0xc2cd,	// (0x0009a10d) ncim_query_content_pane_t2_ParamLimits

0x848b,	// (0x000962cb) ncim_query_content_pane_t3_ParamLimits

0x848b,	// (0x000962cb) ncim_query_content_pane_t3

0x84b3,	// (0x000962f3) ncim_query_content_pane_t4_ParamLimits

0x84b3,	// (0x000962f3) ncim_query_content_pane_t4

0x84db,	// (0x0009631b) ncim_query_content_pane_t5_ParamLimits

0x84db,	// (0x0009631b) ncim_query_content_pane_t5

0xc2df,	// (0x0009a11f) ncim_query_content_pane_t6_ParamLimits

0xc2df,	// (0x0009a11f) ncim_query_content_pane_t6

0xfbdc,	// (0x0009da1c) ncim_query_content_pane_t_ParamLimits

0xc307,	// (0x0009a147) ncim_query_list_pane_ParamLimits

0xc319,	// (0x0009a159) ncim_query_popup_pane_ParamLimits

0xc32d,	// (0x0009a16d) wait_bar_pane_cp04

0x0bfb,	// (0x0008ea3b) input_focus_pane_cp011

0xc335,	// (0x0009a175) ncim_query_popup_pane_t1

0xc343,	// (0x0009a183) ncim_list_query_list_pane_ParamLimits

0xc343,	// (0x0009a183) ncim_list_query_list_pane

0x0bfb,	// (0x0008ea3b) bg_button_pane_cp027

0xc350,	// (0x0009a190) ncim_query_button_pane_g1

0x0bfb,	// (0x0008ea3b) list_highlight_pane_cp012

0xc35a,	// (0x0009a19a) ncim_list_query_list_pane_g1

0xc362,	// (0x0009a1a2) ncim_list_query_list_pane_t1

0xd8fa,	// (0x0009b73a) cam4_indicators_pane_g3_ParamLimits

0xd8fa,	// (0x0009b73a) cam4_indicators_pane_g3

0x6bd7,	// (0x00094a17) vid4_indicators_pane_g5_ParamLimits

0x6bd7,	// (0x00094a17) vid4_indicators_pane_g5

0xda07,	// (0x0009b847) vid4_progress_pane_g5_ParamLimits

0xda07,	// (0x0009b847) vid4_progress_pane_g5

0x8398,	// (0x000961d8) main_ncimui_pane_g1

0x83ee,	// (0x0009622e) ncimui_group_query_pane_ParamLimits

0x83ee,	// (0x0009622e) ncimui_group_query_pane

0x842a,	// (0x0009626a) ncimui_list_pane_ParamLimits

0x842a,	// (0x0009626a) ncimui_list_pane

0x844b,	// (0x0009628b) ncimui_text_pane_ParamLimits

0x844b,	// (0x0009628b) ncimui_text_pane

0x8503,	// (0x00096343) ncimui_text_pane_t1_ParamLimits

0x8503,	// (0x00096343) ncimui_text_pane_t1

0xc370,	// (0x0009a1b0) ncimui_list_single_graphic_pane_ParamLimits

0xc370,	// (0x0009a1b0) ncimui_list_single_graphic_pane

0x8521,	// (0x00096361) ncimui_query_pane_ParamLimits

0x8521,	// (0x00096361) ncimui_query_pane

0x0bfb,	// (0x0008ea3b) list_highlight_pane_cp013

0xc380,	// (0x0009a1c0) ncim_list_query_list_pane_t1_copy1

0xc35a,	// (0x0009a19a) ncim_list_single_graphic_pane_g1

0xc38e,	// (0x0009a1ce) ncim_query_button_pane_cp01

0xc39a,	// (0x0009a1da) ncim_query_entry_pane_ParamLimits

0xc39a,	// (0x0009a1da) ncim_query_entry_pane

0xc3ad,	// (0x0009a1ed) ncimui_query_pane_g1

0xc3b9,	// (0x0009a1f9) ncimui_query_pane_t1_ParamLimits

0xc3b9,	// (0x0009a1f9) ncimui_query_pane_t1

0xefd4,	// (0x0009ce14) input_focus_pane_cp012

0xc3d2,	// (0x0009a212) ncim_query_entry_pane_t1

0xe1b7,	// (0x0009bff7) main_im_pane_ParamLimits

0xefd4,	// (0x0009ce14) main_mobtv_pane_ParamLimits

0xefd4,	// (0x0009ce14) main_mobtv_pane

0x8232,	// (0x00096072) main_cset6_slider_pane_g18_ParamLimits

0x8232,	// (0x00096072) main_cset6_slider_pane_g18

0x823e,	// (0x0009607e) main_cset6_slider_pane_g19_ParamLimits

0x823e,	// (0x0009607e) main_cset6_slider_pane_g19

0xc3e4,	// (0x0009a224) bg_main_mobtv_pane_ParamLimits

0xc3e4,	// (0x0009a224) bg_main_mobtv_pane

0x8534,	// (0x00096374) main_mobtv_info_pane

0x853d,	// (0x0009637d) main_mobtv_loading_pane_ParamLimits

0x853d,	// (0x0009637d) main_mobtv_loading_pane

0xc3f2,	// (0x0009a232) main_mobtv_pg_channel_list_pane

0xc3fc,	// (0x0009a23c) main_mobtv_pg_hdr_pane

0x854a,	// (0x0009638a) main_mobtv_programe_curr_pane_ParamLimits

0x854a,	// (0x0009638a) main_mobtv_programe_curr_pane

0x8557,	// (0x00096397) main_mobtv_programe_next_pane_ParamLimits

0x8557,	// (0x00096397) main_mobtv_programe_next_pane

0xc405,	// (0x0009a245) popup_mobtv_noti_window

0xab4e,	// (0x0009898e) main_tv_pg_hdr_pane_g1

0xc40d,	// (0x0009a24d) main_tv_pg_hdr_pane_g2

0xc415,	// (0x0009a255) main_tv_pg_hdr_pane_g3

0xc41d,	// (0x0009a25d) main_tv_pg_hdr_pane_g4

0xc425,	// (0x0009a265) main_tv_pg_hdr_pane_g5

0xc42f,	// (0x0009a26f) main_tv_pg_hdr_pane_g6

0xc439,	// (0x0009a279) main_tv_pg_hdr_pane_g7

0xc443,	// (0x0009a283) main_tv_pg_hdr_pane_g8

0xc44d,	// (0x0009a28d) main_tv_pg_hdr_pane_g9

0xc457,	// (0x0009a297) main_tv_pg_hdr_pane_g10

0xc461,	// (0x0009a2a1) main_tv_pg_hdr_pane_g11

0x000a,

0xfbe9,	// (0x0009da29) main_tv_pg_hdr_pane_g

0xc46b,	// (0x0009a2ab) main_tv_pg_hdr_pane_t1

0xc479,	// (0x0009a2b9) main_tv_pg_hdr_pane_t2

0xc487,	// (0x0009a2c7) main_tv_pg_hdr_pane_t3

0xc497,	// (0x0009a2d7) main_tv_pg_hdr_pane_t4

0xc4a7,	// (0x0009a2e7) main_tv_pg_hdr_pane_t5

0x0004,

0xfc00,	// (0x0009da40) main_tv_pg_hdr_pane_t

0xc4b7,	// (0x0009a2f7) single_mobtv_pg_channel_pane_ParamLimits

0xc4b7,	// (0x0009a2f7) single_mobtv_pg_channel_pane

0xc4c9,	// (0x0009a309) single_mobtv_pg_channel_table_pane

0xc4d2,	// (0x0009a312) single_mobtv_pg_channel_thumb_pane

0xc4db,	// (0x0009a31b) single_tv_pg_channel_pane_g1

0xc4e4,	// (0x0009a324) single_tv_pg_channel_pane_g2

0x0001,

0xfc0b,	// (0x0009da4b) single_tv_pg_channel_pane_g

0xadba,	// (0x00098bfa) bg_single_mobtv_pg_channel_thumb_pane_ParamLimits

0xadba,	// (0x00098bfa) bg_single_mobtv_pg_channel_thumb_pane

0xc4ed,	// (0x0009a32d) single_mobtv_pg_channel_thumb_pane_g1_ParamLimits

0xc4ed,	// (0x0009a32d) single_mobtv_pg_channel_thumb_pane_g1

0xc4fb,	// (0x0009a33b) single_mobtv_pg_channel_thumb_pane_g2_ParamLimits

0xc4fb,	// (0x0009a33b) single_mobtv_pg_channel_thumb_pane_g2

0xc507,	// (0x0009a347) single_mobtv_pg_channel_thumb_pane_g3_ParamLimits

0xc507,	// (0x0009a347) single_mobtv_pg_channel_thumb_pane_g3

0x0002,

0xfc10,	// (0x0009da50) single_mobtv_pg_channel_thumb_pane_g_ParamLimits

0xfc10,	// (0x0009da50) single_mobtv_pg_channel_thumb_pane_g

0xc513,	// (0x0009a353) single_mobtv_pg_channel_thumb_pane_t1

0xc521,	// (0x0009a361) single_mobtv_pg_channel_thumb_pane_t2

0x0001,

0xfc17,	// (0x0009da57) single_mobtv_pg_channel_thumb_pane_t

0xab4e,	// (0x0009898e) bg_single_mobtv_pg_channel_table_pane_g1

0xab4e,	// (0x0009898e) bg_single_mobtv_pg_channel_table_pane_g2

0x0001,

0xf6d3,	// (0x0009d513) bg_single_mobtv_pg_channel_table_pane_g

0xc52f,	// (0x0009a36f) single_mobtv_pg_channel_table_pane_t1

0xc53d,	// (0x0009a37d) single_mobtv_pg_channel_table_pane_t2

0x0001,

0xfc1c,	// (0x0009da5c) single_mobtv_pg_channel_table_pane_t

0x856c,	// (0x000963ac) main_mobtv_info_pane_g1_ParamLimits

0x856c,	// (0x000963ac) main_mobtv_info_pane_g1

0x858a,	// (0x000963ca) main_mobtv_info_pane_t1_ParamLimits

0x858a,	// (0x000963ca) main_mobtv_info_pane_t1

0x8602,	// (0x00096442) main_mobtv_info_pane_t2_ParamLimits

0x8602,	// (0x00096442) main_mobtv_info_pane_t2

0x0002,

0xfc26,	// (0x0009da66) main_mobtv_info_pane_t_ParamLimits

0xfc26,	// (0x0009da66) main_mobtv_info_pane_t

0x8691,	// (0x000964d1) wait_bar_pane_cp05

0x86a3,	// (0x000964e3) main_mobtv_loading_pane_g1_ParamLimits

0x86a3,	// (0x000964e3) main_mobtv_loading_pane_g1

0x86b6,	// (0x000964f6) main_mobtv_loading_pane_g2_ParamLimits

0x86b6,	// (0x000964f6) main_mobtv_loading_pane_g2

0x86c2,	// (0x00096502) main_mobtv_loading_pane_g3_ParamLimits

0x86c2,	// (0x00096502) main_mobtv_loading_pane_g3

0x0002,

0xfc2d,	// (0x0009da6d) main_mobtv_loading_pane_g_ParamLimits

0xfc2d,	// (0x0009da6d) main_mobtv_loading_pane_g

0xc54b,	// (0x0009a38b) main_mobtv_loading_pane_t1_ParamLimits

0xc54b,	// (0x0009a38b) main_mobtv_loading_pane_t1

0xc563,	// (0x0009a3a3) main_mobtv_loading_pane_t2_ParamLimits

0xc563,	// (0x0009a3a3) main_mobtv_loading_pane_t2

0x0001,

0xfc34,	// (0x0009da74) main_mobtv_loading_pane_t_ParamLimits

0xfc34,	// (0x0009da74) main_mobtv_loading_pane_t

0x86d5,	// (0x00096515) wait_bar_pane_cp06_ParamLimits

0x86d5,	// (0x00096515) wait_bar_pane_cp06

0xc587,	// (0x0009a3c7) main_mobtv_programe_curr_pane_t1

0xc595,	// (0x0009a3d5) main_mobtv_programe_curr_pane_t2

0x0001,

0xfc39,	// (0x0009da79) main_mobtv_programe_curr_pane_t

0xc5a3,	// (0x0009a3e3) main_mobtv_programe_next_pane_t1

0xc5b1,	// (0x0009a3f1) main_mobtv_programe_next_pane_t2

0xc5bf,	// (0x0009a3ff) main_mobtv_programe_next_pane_t3

0x0002,

0xfc3e,	// (0x0009da7e) main_mobtv_programe_next_pane_t

0x0bfb,	// (0x0008ea3b) bg_popup_mobtv_noti_window_pane

0xc5cd,	// (0x0009a40d) popup_mobtv_noti_window_g1

0xc5d5,	// (0x0009a415) popup_mobtv_noti_window_t1

0xc5e3,	// (0x0009a423) popup_mobtv_noti_window_t2

0x0001,

0xfc45,	// (0x0009da85) popup_mobtv_noti_window_t

0xab4e,	// (0x0009898e) bg_popup_mobtv_noti_window_pane_g1

0x0bfb,	// (0x0008ea3b) sc_clock_pane

0x0bfb,	// (0x0008ea3b) main_fs_bigclock_pane

0x7e3e,	// (0x00095c7e) blid2_tripm_pane_t4_ParamLimits

0x7e3e,	// (0x00095c7e) blid2_tripm_pane_t4

0x86e4,	// (0x00096524) sc_clock_pane_g1_ParamLimits

0x86e4,	// (0x00096524) sc_clock_pane_g1

0x86f6,	// (0x00096536) sc_clock_pane_t1_ParamLimits

0x86f6,	// (0x00096536) sc_clock_pane_t1

0x8718,	// (0x00096558) sc_clock_pane_t2_ParamLimits

0x8718,	// (0x00096558) sc_clock_pane_t2

0x8730,	// (0x00096570) sc_clock_pane_t3_ParamLimits

0x8730,	// (0x00096570) sc_clock_pane_t3

0x0004,

0xfc4a,	// (0x0009da8a) sc_clock_pane_t_ParamLimits

0xfc4a,	// (0x0009da8a) sc_clock_pane_t

0x952b,	// (0x0009736b) main_fs_bigclock_indicator_pane_ParamLimits

0x952b,	// (0x0009736b) main_fs_bigclock_indicator_pane

0xad8a,	// (0x00098bca) main_fs_bigclock_pane_g1_ParamLimits

0xad8a,	// (0x00098bca) main_fs_bigclock_pane_g1

0x9537,	// (0x00097377) main_fs_bigclock_pane_t1_ParamLimits

0x9537,	// (0x00097377) main_fs_bigclock_pane_t1

0x9549,	// (0x00097389) main_fs_bigclock_pane_t2_ParamLimits

0x9549,	// (0x00097389) main_fs_bigclock_pane_t2

0x955d,	// (0x0009739d) main_fs_bigclock_pane_t3_ParamLimits

0x955d,	// (0x0009739d) main_fs_bigclock_pane_t3

0x0002,

0xfe4e,	// (0x0009dc8e) main_fs_bigclock_pane_t_ParamLimits

0xfe4e,	// (0x0009dc8e) main_fs_bigclock_pane_t

0xd234,	// (0x0009b074) main_fs_bigclock_indicator_pane_g1

0xc2af,	// (0x0009a0ef) ncim_query_content_pane_g2_ParamLimits

0xc2af,	// (0x0009a0ef) ncim_query_content_pane_g2

0x0001,

0xfbd7,	// (0x0009da17) ncim_query_content_pane_g_ParamLimits

0xfbd7,	// (0x0009da17) ncim_query_content_pane_g

0x8749,	// (0x00096589) sc_clock_pane_t4_ParamLimits

0x8749,	// (0x00096589) sc_clock_pane_t4

0xefd4,	// (0x0009ce14) main_radioblah_pane

0xb58e,	// (0x000993ce) cell_call4_button_pane_t1_copy1_ParamLimits

0xb58e,	// (0x000993ce) cell_call4_button_pane_t1_copy1

0x83a0,	// (0x000961e0) main_ncimui_pane_t1_ParamLimits

0x83a0,	// (0x000961e0) main_ncimui_pane_t1

0x83ba,	// (0x000961fa) main_ncimui_pane_t2_ParamLimits

0x83ba,	// (0x000961fa) main_ncimui_pane_t2

0x0002,

0xfbd0,	// (0x0009da10) main_ncimui_pane_t_ParamLimits

0xfbd0,	// (0x0009da10) main_ncimui_pane_t

0xc729,	// (0x0009a569) main_radioblah_anim_pane_ParamLimits

0xc729,	// (0x0009a569) main_radioblah_anim_pane

0xc73a,	// (0x0009a57a) main_radioblah_info_pane_ParamLimits

0xc73a,	// (0x0009a57a) main_radioblah_info_pane

0xc74e,	// (0x0009a58e) main_radioblah_pane_t1_ParamLimits

0xc74e,	// (0x0009a58e) main_radioblah_pane_t1

0xc76a,	// (0x0009a5aa) main_radioblah_pane_t2_ParamLimits

0xc76a,	// (0x0009a5aa) main_radioblah_pane_t2

0x0003,

0xfc6b,	// (0x0009daab) main_radioblah_pane_t_ParamLimits

0xfc6b,	// (0x0009daab) main_radioblah_pane_t

0x87f7,	// (0x00096637) main_radioblah_rocker_ctrl_pane_ParamLimits

0x87f7,	// (0x00096637) main_radioblah_rocker_ctrl_pane

0xc7b2,	// (0x0009a5f2) main_radioblah_info_pane_t1_ParamLimits

0xc7b2,	// (0x0009a5f2) main_radioblah_info_pane_t1

0x884f,	// (0x0009668f) main_radioblah_info_pane_t2_ParamLimits

0x884f,	// (0x0009668f) main_radioblah_info_pane_t2

0x0003,

0xfc74,	// (0x0009dab4) main_radioblah_info_pane_t_ParamLimits

0xfc74,	// (0x0009dab4) main_radioblah_info_pane_t

0xab4e,	// (0x0009898e) main_radioblah_rocker_ctrl_pane_g1

0x88ff,	// (0x0009673f) main_radioblah_rocker_ctrl_pane_g2

0x8907,	// (0x00096747) main_radioblah_rocker_ctrl_pane_g3

0x890f,	// (0x0009674f) main_radioblah_rocker_ctrl_pane_g4

0x8917,	// (0x00096757) main_radioblah_rocker_ctrl_pane_g5

0x891f,	// (0x0009675f) main_radioblah_rocker_ctrl_pane_g6

0x0005,

0xfc7d,	// (0x0009dabd) main_radioblah_rocker_ctrl_pane_g

0x8108,	// (0x00095f48) main_cset_text2_pane_t1_copy1_ParamLimits

0xd8bc,	// (0x0009b6fc) cam4_image_uncrop_qvga_pane

0xd923,	// (0x0009b763) vid4_image_uncrop_qcif_pane

0xda68,	// (0x0009b8a8) cam6_image_uncrop_qvga_pane_ParamLimits

0xda68,	// (0x0009b8a8) cam6_image_uncrop_qvga_pane

0xbeee,	// (0x00099d2e) vid6_image_uncrop_qcif_pane_ParamLimits

0xbeee,	// (0x00099d2e) vid6_image_uncrop_qcif_pane

0x0bfb,	// (0x0008ea3b) bg_popup_preview_window_pane_cp03

0xc261,	// (0x0009a0a1) list_cset_text2_pane

0xc269,	// (0x0009a0a9) main_cset6_text2_pane_g1

0xc271,	// (0x0009a0b1) main_cset6_text2_pane_t1

0x8927,	// (0x00096767) list_cset_text2_pane_t1_ParamLimits

0x8927,	// (0x00096767) list_cset_text2_pane_t1

0xefd4,	// (0x0009ce14) main_radioblah_pane_ParamLimits

0x867d,	// (0x000964bd) main_mobtv_info_pane_t3_ParamLimits

0x867d,	// (0x000964bd) main_mobtv_info_pane_t3

0x87e5,	// (0x00096625) main_radioblah_pane_g1

0x881f,	// (0x0009665f) main_radioblah_info_pane_g1

0x88a4,	// (0x000966e4) main_radioblah_info_pane_t3_ParamLimits

0x88a4,	// (0x000966e4) main_radioblah_info_pane_t3

0x2886,	// (0x000906c6) highlight_cell_cale_month_pane_ParamLimits

0x2886,	// (0x000906c6) highlight_cell_cale_month_pane

0x0bfb,	// (0x0008ea3b) main_phob_fisheye_pane

0xaeda,	// (0x00098d1a) scroll_pane_cp0031_ParamLimits

0xaeda,	// (0x00098d1a) scroll_pane_cp0031

0xbffc,	// (0x00099e3c) wait_bar_pane_cp08_ParamLimits

0x818d,	// (0x00095fcd) cset_list_set_pane_copy1_ParamLimits

0xc7ec,	// (0x0009a62c) highlight_cell_cale_month_pane_g1

0x8940,	// (0x00096780) highlight_cell_cale_month_pane_t1

0xbc2e,	// (0x00099a6e) list_gen_pane_cp01

0xb7b5,	// (0x000995f5) scroll_pane_01

0x894e,	// (0x0009678e) list_single_double_fisheye_pane

0x8957,	// (0x00096797) list_double_fisheye_pane_g1_ParamLimits

0x8957,	// (0x00096797) list_double_fisheye_pane_g1

0x8963,	// (0x000967a3) list_double_fisheye_pane_g2_ParamLimits

0x8963,	// (0x000967a3) list_double_fisheye_pane_g2

0x8977,	// (0x000967b7) list_double_fisheye_pane_g3_ParamLimits

0x8977,	// (0x000967b7) list_double_fisheye_pane_g3

0x0004,

0xfc8a,	// (0x0009daca) list_double_fisheye_pane_g_ParamLimits

0xfc8a,	// (0x0009daca) list_double_fisheye_pane_g

0x89a0,	// (0x000967e0) list_double_fisheye_pane_t1_ParamLimits

0x89a0,	// (0x000967e0) list_double_fisheye_pane_t1

0x89bb,	// (0x000967fb) list_double_fisheye_pane_t2_ParamLimits

0x89bb,	// (0x000967fb) list_double_fisheye_pane_t2

0x0001,

0xfc95,	// (0x0009dad5) list_double_fisheye_pane_t_ParamLimits

0xfc95,	// (0x0009dad5) list_double_fisheye_pane_t

0x0bfb,	// (0x0008ea3b) main_call5_pane

0x8774,	// (0x000965b4) sc_swipe_pane_ParamLimits

0x8774,	// (0x000965b4) sc_swipe_pane

0x89f0,	// (0x00096830) call5_image_pane_ParamLimits

0x89f0,	// (0x00096830) call5_image_pane

0x8a0d,	// (0x0009684d) call5_swipe_1_pane_ParamLimits

0x8a0d,	// (0x0009684d) call5_swipe_1_pane

0x8a20,	// (0x00096860) call5_swipe_2_pane_ParamLimits

0x8a20,	// (0x00096860) call5_swipe_2_pane

0x8a4b,	// (0x0009688b) popup_call5_audio_first_window_ParamLimits

0x8a4b,	// (0x0009688b) popup_call5_audio_first_window

0xadba,	// (0x00098bfa) call5_swipe_1_pane_g1_ParamLimits

0xadba,	// (0x00098bfa) call5_swipe_1_pane_g1

0xc7f4,	// (0x0009a634) call5_swipe_1_pane_g2_ParamLimits

0xc7f4,	// (0x0009a634) call5_swipe_1_pane_g2

0x0001,

0xfc9a,	// (0x0009dada) call5_swipe_1_pane_g_ParamLimits

0xfc9a,	// (0x0009dada) call5_swipe_1_pane_g

0xc800,	// (0x0009a640) call5_swipe_1_pane_t1_ParamLimits

0xc800,	// (0x0009a640) call5_swipe_1_pane_t1

0xadba,	// (0x00098bfa) call5_swipe_2_pane_g1_ParamLimits

0xadba,	// (0x00098bfa) call5_swipe_2_pane_g1

0xc815,	// (0x0009a655) call5_swipe_2_pane_g2_ParamLimits

0xc815,	// (0x0009a655) call5_swipe_2_pane_g2

0x0001,

0xfc9f,	// (0x0009dadf) call5_swipe_2_pane_g_ParamLimits

0xfc9f,	// (0x0009dadf) call5_swipe_2_pane_g

0xc821,	// (0x0009a661) call5_swipe_2_pane_t1_ParamLimits

0xc821,	// (0x0009a661) call5_swipe_2_pane_t1

0xc836,	// (0x0009a676) sc_swipe_pane_g1_ParamLimits

0xc836,	// (0x0009a676) sc_swipe_pane_g1

0xc843,	// (0x0009a683) sc_swipe_pane_g2_ParamLimits

0xc843,	// (0x0009a683) sc_swipe_pane_g2

0x0001,

0xfca4,	// (0x0009dae4) sc_swipe_pane_g_ParamLimits

0xfca4,	// (0x0009dae4) sc_swipe_pane_g

0xc84f,	// (0x0009a68f) sc_swipe_pane_t1_ParamLimits

0xc84f,	// (0x0009a68f) sc_swipe_pane_t1

0x0bfb,	// (0x0008ea3b) main_cmail_launcher_pane

0x8a5c,	// (0x0009689c) aid_size_cell_cmail_l_ParamLimits

0x8a5c,	// (0x0009689c) aid_size_cell_cmail_l

0x8a76,	// (0x000968b6) grid_cmail_l_pane_ParamLimits

0x8a76,	// (0x000968b6) grid_cmail_l_pane

0x8a91,	// (0x000968d1) cell_cmail_l_pane_ParamLimits

0x8a91,	// (0x000968d1) cell_cmail_l_pane

0x8ab7,	// (0x000968f7) cell_cmail_l_pane_g1_ParamLimits

0x8ab7,	// (0x000968f7) cell_cmail_l_pane_g1

0x8ac3,	// (0x00096903) cell_cmail_l_pane_t1_ParamLimits

0x8ac3,	// (0x00096903) cell_cmail_l_pane_t1

0xc864,	// (0x0009a6a4) cell_cmail_l_pane_t2_ParamLimits

0xc864,	// (0x0009a6a4) cell_cmail_l_pane_t2

0x0001,

0xfca9,	// (0x0009dae9) cell_cmail_l_pane_t_ParamLimits

0xfca9,	// (0x0009dae9) cell_cmail_l_pane_t

0xefd4,	// (0x0009ce14) grid_highlight_pane_cp018_ParamLimits

0xefd4,	// (0x0009ce14) grid_highlight_pane_cp018

0x0d2f,	// (0x0008eb6f) main2_pane_ParamLimits

0x0d2f,	// (0x0008eb6f) main2_pane

0xe250,	// (0x0009c090) popup_sp_fs_action_menu_bg_pane_g1

0xe258,	// (0x0009c098) popup_sp_fs_action_menu_bg_pane_g2

0xe260,	// (0x0009c0a0) popup_sp_fs_action_menu_bg_pane_g3

0xe268,	// (0x0009c0a8) popup_sp_fs_action_menu_bg_pane_g4

0xe270,	// (0x0009c0b0) popup_sp_fs_action_menu_bg_pane_g5

0xe278,	// (0x0009c0b8) popup_sp_fs_action_menu_bg_pane_g6

0xe280,	// (0x0009c0c0) popup_sp_fs_action_menu_bg_pane_g7

0xe288,	// (0x0009c0c8) popup_sp_fs_action_menu_bg_pane_g8

0xe290,	// (0x0009c0d0) popup_sp_fs_action_menu_bg_pane_g9

0xe298,	// (0x0009c0d8) popup_sp_fs_action_menu_bg_pane_g10

0xe298,	// (0x0009c0d8) popup_sp_fs_action_menu_bg_pane_g11

0x000a,

0xf1a7,	// (0x0009cfe7) popup_sp_fs_action_menu_bg_pane_g

0x1ae1,	// (0x0008f921) list_medium_line_x2_t3_g3_g1_ParamLimits

0x1ae1,	// (0x0008f921) list_medium_line_x2_t3_g3_g1

0x1aed,	// (0x0008f92d) list_medium_line_x2_t3_g3_g2_ParamLimits

0x1aed,	// (0x0008f92d) list_medium_line_x2_t3_g3_g2

0x1af9,	// (0x0008f939) list_medium_line_x2_t3_g3_g3_ParamLimits

0x1af9,	// (0x0008f939) list_medium_line_x2_t3_g3_g3

0x0002,

0xf257,	// (0x0009d097) list_medium_line_x2_t3_g3_g_ParamLimits

0xf257,	// (0x0009d097) list_medium_line_x2_t3_g3_g

0x1b05,	// (0x0008f945) list_medium_line_x2_t3_g3_t1_ParamLimits

0x1b05,	// (0x0008f945) list_medium_line_x2_t3_g3_t1

0x1b1a,	// (0x0008f95a) list_medium_line_x2_t3_g3_t2_ParamLimits

0x1b1a,	// (0x0008f95a) list_medium_line_x2_t3_g3_t2

0x1b2e,	// (0x0008f96e) list_medium_line_x2_t3_g3_t3_ParamLimits

0x1b2e,	// (0x0008f96e) list_medium_line_x2_t3_g3_t3

0x0002,

0xf25e,	// (0x0009d09e) list_medium_line_x2_t3_g3_t_ParamLimits

0xf25e,	// (0x0009d09e) list_medium_line_x2_t3_g3_t

0x1ae1,	// (0x0008f921) list_medium_line_x2_t3_g2_g1_ParamLimits

0x1ae1,	// (0x0008f921) list_medium_line_x2_t3_g2_g1

0x1af9,	// (0x0008f939) list_medium_line_x2_t3_g2_g2_ParamLimits

0x1af9,	// (0x0008f939) list_medium_line_x2_t3_g2_g2

0x0001,

0xf265,	// (0x0009d0a5) list_medium_line_x2_t3_g2_g_ParamLimits

0xf265,	// (0x0009d0a5) list_medium_line_x2_t3_g2_g

0x1b43,	// (0x0008f983) list_medium_line_x2_t3_g2_t1_ParamLimits

0x1b43,	// (0x0008f983) list_medium_line_x2_t3_g2_t1

0x1b59,	// (0x0008f999) list_medium_line_x2_t3_g2_t2_ParamLimits

0x1b59,	// (0x0008f999) list_medium_line_x2_t3_g2_t2

0x1b6b,	// (0x0008f9ab) list_medium_line_x2_t3_g2_t3_ParamLimits

0x1b6b,	// (0x0008f9ab) list_medium_line_x2_t3_g2_t3

0x0002,

0xf26a,	// (0x0009d0aa) list_medium_line_x2_t3_g2_t_ParamLimits

0xf26a,	// (0x0009d0aa) list_medium_line_x2_t3_g2_t

0x1ae1,	// (0x0008f921) list_medium_line_x2_t4_g4_g1_ParamLimits

0x1ae1,	// (0x0008f921) list_medium_line_x2_t4_g4_g1

0x1b88,	// (0x0008f9c8) list_medium_line_x2_t4_g4_g2_ParamLimits

0x1b88,	// (0x0008f9c8) list_medium_line_x2_t4_g4_g2

0x1aed,	// (0x0008f92d) list_medium_line_x2_t4_g4_g3_ParamLimits

0x1aed,	// (0x0008f92d) list_medium_line_x2_t4_g4_g3

0x1b94,	// (0x0008f9d4) list_medium_line_x2_t4_g4_g4_ParamLimits

0x1b94,	// (0x0008f9d4) list_medium_line_x2_t4_g4_g4

0x0003,

0xf271,	// (0x0009d0b1) list_medium_line_x2_t4_g4_g_ParamLimits

0xf271,	// (0x0009d0b1) list_medium_line_x2_t4_g4_g

0x1ba0,	// (0x0008f9e0) list_medium_line_x2_t4_g4_t1_ParamLimits

0x1ba0,	// (0x0008f9e0) list_medium_line_x2_t4_g4_t1

0x1bba,	// (0x0008f9fa) list_medium_line_x2_t4_g4_t2_ParamLimits

0x1bba,	// (0x0008f9fa) list_medium_line_x2_t4_g4_t2

0x1bd0,	// (0x0008fa10) list_medium_line_x2_t4_g4_t3_ParamLimits

0x1bd0,	// (0x0008fa10) list_medium_line_x2_t4_g4_t3

0x1be5,	// (0x0008fa25) list_medium_line_x2_t4_g4_t4_ParamLimits

0x1be5,	// (0x0008fa25) list_medium_line_x2_t4_g4_t4

0x0003,

0xf27a,	// (0x0009d0ba) list_medium_line_x2_t4_g4_t_ParamLimits

0xf27a,	// (0x0009d0ba) list_medium_line_x2_t4_g4_t

0x1ae1,	// (0x0008f921) list_medium_line_x2_t2_g4_g1_ParamLimits

0x1ae1,	// (0x0008f921) list_medium_line_x2_t2_g4_g1

0x1b88,	// (0x0008f9c8) list_medium_line_x2_t2_g4_g2_ParamLimits

0x1b88,	// (0x0008f9c8) list_medium_line_x2_t2_g4_g2

0x1aed,	// (0x0008f92d) list_medium_line_x2_t2_g4_g3_ParamLimits

0x1aed,	// (0x0008f92d) list_medium_line_x2_t2_g4_g3

0x1af9,	// (0x0008f939) list_medium_line_x2_t2_g4_g4_ParamLimits

0x1af9,	// (0x0008f939) list_medium_line_x2_t2_g4_g4

0x0003,

0xf2e1,	// (0x0009d121) list_medium_line_x2_t2_g4_g_ParamLimits

0xf2e1,	// (0x0009d121) list_medium_line_x2_t2_g4_g

0x28a4,	// (0x000906e4) list_medium_line_x2_t2_g4_t1_ParamLimits

0x28a4,	// (0x000906e4) list_medium_line_x2_t2_g4_t1

0x1b2e,	// (0x0008f96e) list_medium_line_x2_t2_g4_t2_ParamLimits

0x1b2e,	// (0x0008f96e) list_medium_line_x2_t2_g4_t2

0x0001,

0xf2ea,	// (0x0009d12a) list_medium_line_x2_t2_g4_t_ParamLimits

0xf2ea,	// (0x0009d12a) list_medium_line_x2_t2_g4_t

0x1ae1,	// (0x0008f921) list_medium_line_x2_t2_g3_g1_ParamLimits

0x1ae1,	// (0x0008f921) list_medium_line_x2_t2_g3_g1

0x1aed,	// (0x0008f92d) list_medium_line_x2_t2_g3_g2_ParamLimits

0x1aed,	// (0x0008f92d) list_medium_line_x2_t2_g3_g2

0x1af9,	// (0x0008f939) list_medium_line_x2_t2_g3_g3_ParamLimits

0x1af9,	// (0x0008f939) list_medium_line_x2_t2_g3_g3

0x0002,

0xf257,	// (0x0009d097) list_medium_line_x2_t2_g3_g_ParamLimits

0xf257,	// (0x0009d097) list_medium_line_x2_t2_g3_g

0x28b9,	// (0x000906f9) list_medium_line_x2_t2_g3_t1_ParamLimits

0x28b9,	// (0x000906f9) list_medium_line_x2_t2_g3_t1

0x1b2e,	// (0x0008f96e) list_medium_line_x2_t2_g3_t2_ParamLimits

0x1b2e,	// (0x0008f96e) list_medium_line_x2_t2_g3_t2

0x0001,

0xf2ef,	// (0x0009d12f) list_medium_line_x2_t2_g3_t_ParamLimits

0xf2ef,	// (0x0009d12f) list_medium_line_x2_t2_g3_t

0x29f2,	// (0x00090832) main_sp_fs_list_pane_ParamLimits

0x29f2,	// (0x00090832) main_sp_fs_list_pane

0x29fe,	// (0x0009083e) sp_fs_scroll_pane_ParamLimits

0x29fe,	// (0x0009083e) sp_fs_scroll_pane

0x2a0a,	// (0x0009084a) list_medium_line_x2_t3_t1

0x2a1a,	// (0x0009085a) list_medium_line_x2_t3_t2

0x2a28,	// (0x00090868) list_medium_line_x2_t3_t3

0x0002,

0xf33a,	// (0x0009d17a) list_medium_line_x2_t3_t

0x2a36,	// (0x00090876) list_medium_line_x3_t4_t1

0x2a46,	// (0x00090886) list_medium_line_x3_t4_t2

0x2a54,	// (0x00090894) list_medium_line_x3_t4_t3

0x2a28,	// (0x00090868) list_medium_line_x3_t4_t4

0x0003,

0xf341,	// (0x0009d181) list_medium_line_x3_t4_t

0x2a62,	// (0x000908a2) list_medium_line_x4_t5_t1

0x2a72,	// (0x000908b2) list_medium_line_x4_t5_t2

0x2a54,	// (0x00090894) list_medium_line_x4_t5_t3

0x2a80,	// (0x000908c0) list_medium_line_x4_t5_t4

0x2a28,	// (0x00090868) list_medium_line_x4_t5_t5

0x0004,

0xf34a,	// (0x0009d18a) list_medium_line_x4_t5_t

0x1ae1,	// (0x0008f921) list_medium_line_t4_g4_g1_ParamLimits

0x1ae1,	// (0x0008f921) list_medium_line_t4_g4_g1

0x1b94,	// (0x0008f9d4) list_medium_line_t4_g4_g2_ParamLimits

0x1b94,	// (0x0008f9d4) list_medium_line_t4_g4_g2

0x2a8e,	// (0x000908ce) list_medium_line_t4_g4_g3_ParamLimits

0x2a8e,	// (0x000908ce) list_medium_line_t4_g4_g3

0x1af9,	// (0x0008f939) list_medium_line_t4_g4_g4_ParamLimits

0x1af9,	// (0x0008f939) list_medium_line_t4_g4_g4

0x0003,

0xf355,	// (0x0009d195) list_medium_line_t4_g4_g_ParamLimits

0xf355,	// (0x0009d195) list_medium_line_t4_g4_g

0x2a9a,	// (0x000908da) list_medium_line_t4_g4_t1_ParamLimits

0x2a9a,	// (0x000908da) list_medium_line_t4_g4_t1

0x2aaf,	// (0x000908ef) list_medium_line_t4_g4_t2_ParamLimits

0x2aaf,	// (0x000908ef) list_medium_line_t4_g4_t2

0x2ac4,	// (0x00090904) list_medium_line_t4_g4_t3_ParamLimits

0x2ac4,	// (0x00090904) list_medium_line_t4_g4_t3

0x1b2e,	// (0x0008f96e) list_medium_line_t4_g4_t4_ParamLimits

0x1b2e,	// (0x0008f96e) list_medium_line_t4_g4_t4

0x0003,

0xf35e,	// (0x0009d19e) list_medium_line_t4_g4_t_ParamLimits

0xf35e,	// (0x0009d19e) list_medium_line_t4_g4_t

0x2b9c,	// (0x000909dc) chi_dic_find_pane_g1

0x46e9,	// (0x00092529) main_tport_pane

0xb8ef,	// (0x0009972f) list_medium_line_plain_t1

0xb905,	// (0x00099745) list_medium_line_t2_g2_g1_ParamLimits

0xb905,	// (0x00099745) list_medium_line_t2_g2_g1

0xb911,	// (0x00099751) list_medium_line_t2_g2_g2_ParamLimits

0xb911,	// (0x00099751) list_medium_line_t2_g2_g2

0x0001,

0xf9e6,	// (0x0009d826) list_medium_line_t2_g2_g_ParamLimits

0xf9e6,	// (0x0009d826) list_medium_line_t2_g2_g

0x7612,	// (0x00095452) list_medium_line_t2_g2_t1_ParamLimits

0x7612,	// (0x00095452) list_medium_line_t2_g2_t1

0x762c,	// (0x0009546c) list_medium_line_t2_g2_t2_ParamLimits

0x762c,	// (0x0009546c) list_medium_line_t2_g2_t2

0x0001,

0xf9eb,	// (0x0009d82b) list_medium_line_t2_g2_t_ParamLimits

0xf9eb,	// (0x0009d82b) list_medium_line_t2_g2_t

0xbc37,	// (0x00099a77) aid_sp_fs_list_icon_a_sm

0xbc3f,	// (0x00099a7f) aid_sp_fs_list_icon_d

0xbc47,	// (0x00099a87) aid_sp_fs_text_primary

0xbc50,	// (0x00099a90) aid_sp_fs_text_secondary

0xbc59,	// (0x00099a99) list_medium_line

0xbc59,	// (0x00099a99) list_medium_line_g2

0xbc59,	// (0x00099a99) list_medium_line_g3

0xbc59,	// (0x00099a99) list_medium_line_plain

0xbc59,	// (0x00099a99) list_medium_line_plain_t2

0xbc59,	// (0x00099a99) list_medium_line_plain_t3

0xbc59,	// (0x00099a99) list_medium_line_right_icon

0xbc59,	// (0x00099a99) list_medium_line_right_iconx2

0xbc59,	// (0x00099a99) list_medium_line_t2

0xbc59,	// (0x00099a99) list_medium_line_t2_g2

0xbc59,	// (0x00099a99) list_medium_line_t2_g3

0xbc59,	// (0x00099a99) list_medium_line_t2_right_icon

0xbc59,	// (0x00099a99) list_medium_line_t2_right_iconx2

0xbc59,	// (0x00099a99) list_medium_line_t3

0xbc59,	// (0x00099a99) list_medium_line_t3_g2

0xbc59,	// (0x00099a99) list_medium_line_t3_g3

0xbc59,	// (0x00099a99) list_medium_line_t3_right_iconx2

0xbc62,	// (0x00099aa2) list_medium_line_t4_g4

0xbc6b,	// (0x00099aab) list_medium_line_x2

0xbc6b,	// (0x00099aab) list_medium_line_x2_t2_g2

0xbc6b,	// (0x00099aab) list_medium_line_x2_t2_g3

0xbc6b,	// (0x00099aab) list_medium_line_x2_t2_g4

0xbc6b,	// (0x00099aab) list_medium_line_x2_t3

0xbc6b,	// (0x00099aab) list_medium_line_x2_t3_g2

0xbc6b,	// (0x00099aab) list_medium_line_x2_t3_g3

0xbc6b,	// (0x00099aab) list_medium_line_x2_t3_g4

0xbc6b,	// (0x00099aab) list_medium_line_x2_t4_g2

0xbc6b,	// (0x00099aab) list_medium_line_x2_t4_g4

0xbc74,	// (0x00099ab4) list_medium_line_x3

0xbc74,	// (0x00099ab4) list_medium_line_x3_t4

0xbc74,	// (0x00099ab4) list_medium_line_x3_t4_g4

0xbc62,	// (0x00099aa2) list_medium_line_x4_t4

0xbc62,	// (0x00099aa2) list_medium_line_x4_t4_g7

0xbc62,	// (0x00099aa2) list_medium_line_x4_t5

0xbc7d,	// (0x00099abd) list_single_fs_dyc_pane_ParamLimits

0xbc7d,	// (0x00099abd) list_single_fs_dyc_pane

0x1ae1,	// (0x0008f921) list_medium_line_x4_t4_g7_g1_ParamLimits

0x1ae1,	// (0x0008f921) list_medium_line_x4_t4_g7_g1

0xc190,	// (0x00099fd0) list_medium_line_x4_t4_g7_g2_ParamLimits

0xc190,	// (0x00099fd0) list_medium_line_x4_t4_g7_g2

0xc19c,	// (0x00099fdc) list_medium_line_x4_t4_g7_g3_ParamLimits

0xc19c,	// (0x00099fdc) list_medium_line_x4_t4_g7_g3

0xc1ab,	// (0x00099feb) list_medium_line_x4_t4_g7_g4_ParamLimits

0xc1ab,	// (0x00099feb) list_medium_line_x4_t4_g7_g4

0xc1b7,	// (0x00099ff7) list_medium_line_x4_t4_g7_g5_ParamLimits

0xc1b7,	// (0x00099ff7) list_medium_line_x4_t4_g7_g5

0xc1c6,	// (0x0009a006) list_medium_line_x4_t4_g7_g6_ParamLimits

0xc1c6,	// (0x0009a006) list_medium_line_x4_t4_g7_g6

0xc1d5,	// (0x0009a015) list_medium_line_x4_t4_g7_g7_ParamLimits

0xc1d5,	// (0x0009a015) list_medium_line_x4_t4_g7_g7

0x0006,

0xfbb6,	// (0x0009d9f6) list_medium_line_x4_t4_g7_g_ParamLimits

0xfbb6,	// (0x0009d9f6) list_medium_line_x4_t4_g7_g

0xc1e1,	// (0x0009a021) list_medium_line_x4_t4_g7_t1_ParamLimits

0xc1e1,	// (0x0009a021) list_medium_line_x4_t4_g7_t1

0xc1f6,	// (0x0009a036) list_medium_line_x4_t4_g7_t2_ParamLimits

0xc1f6,	// (0x0009a036) list_medium_line_x4_t4_g7_t2

0xc20b,	// (0x0009a04b) list_medium_line_x4_t4_g7_t3_ParamLimits

0xc20b,	// (0x0009a04b) list_medium_line_x4_t4_g7_t3

0xc220,	// (0x0009a060) list_medium_line_x4_t4_g7_t4_ParamLimits

0xc220,	// (0x0009a060) list_medium_line_x4_t4_g7_t4

0xc232,	// (0x0009a072) list_medium_line_x4_t4_g7_t5_ParamLimits

0xc232,	// (0x0009a072) list_medium_line_x4_t4_g7_t5

0x0004,

0xfbc5,	// (0x0009da05) list_medium_line_x4_t4_g7_t_ParamLimits

0xfbc5,	// (0x0009da05) list_medium_line_x4_t4_g7_t

0xc244,	// (0x0009a084) list_single_dyc_row_pane_ParamLimits

0xc244,	// (0x0009a084) list_single_dyc_row_pane

0x89dd,	// (0x0009681d) call5_gesture_pane_ParamLimits

0x89dd,	// (0x0009681d) call5_gesture_pane

0x8a33,	// (0x00096873) call5_windows_pane_ParamLimits

0x8a33,	// (0x00096873) call5_windows_pane

0x8ad9,	// (0x00096919) call5_swipe_1_pane_cp_ParamLimits

0x8ad9,	// (0x00096919) call5_swipe_1_pane_cp

0x8ae5,	// (0x00096925) call5_swipe_2_pane_cp_ParamLimits

0x8ae5,	// (0x00096925) call5_swipe_2_pane_cp

0xec98,	// (0x0009cad8) call5_image_pane_cp

0x8af1,	// (0x00096931) popup_call5_audio_first_window_cp_ParamLimits

0x8af1,	// (0x00096931) popup_call5_audio_first_window_cp

0xc836,	// (0x0009a676) call5_swipe_1_pane_g1_cp_ParamLimits

0xc836,	// (0x0009a676) call5_swipe_1_pane_g1_cp

0xc876,	// (0x0009a6b6) call5_swipe_1_pane_g2_cp

0xc84f,	// (0x0009a68f) call5_swipe_1_pane_t1_cp_ParamLimits

0xc84f,	// (0x0009a68f) call5_swipe_1_pane_t1_cp

0xc836,	// (0x0009a676) call5_swipe_2_pane_g1_cp_ParamLimits

0xc836,	// (0x0009a676) call5_swipe_2_pane_g1_cp

0xc87e,	// (0x0009a6be) call5_swipe_2_pane_g2_cp

0xc886,	// (0x0009a6c6) call5_swipe_2_pane_t1_cp_ParamLimits

0xc886,	// (0x0009a6c6) call5_swipe_2_pane_t1_cp

0xefd4,	// (0x0009ce14) main_sp_fs_email_pane

0xc89b,	// (0x0009a6db) main_sp_fs_listscroll_pane_te

0xc8a4,	// (0x0009a6e4) popup_sp_fs_action_menu_pane_ParamLimits

0xc8a4,	// (0x0009a6e4) popup_sp_fs_action_menu_pane

0xab4e,	// (0x0009898e) bg_sp_fs_ctrlbar_pane_g1

0xc8e8,	// (0x0009a728) bg_sp_fs_ctrlbar_ddmenu_pane_g1

0xc8f1,	// (0x0009a731) bg_sp_fs_ctrlbar_ddmenu_pane_g2

0xc8fa,	// (0x0009a73a) bg_sp_fs_ctrlbar_ddmenu_pane_g3

0xab4e,	// (0x0009898e) bg_sp_fs_ctrlbar_ddmenu_pane_g4

0x0003,

0xfcae,	// (0x0009daee) bg_sp_fs_ctrlbar_ddmenu_pane_g

0xa933,	// (0x00098773) bg_sp_fs_ctrlbar_ddmenu_pane_ParamLimits

0xa933,	// (0x00098773) bg_sp_fs_ctrlbar_ddmenu_pane

0xc903,	// (0x0009a743) main_sp_fs_ctrlbar_ddmenu_pane_g1_ParamLimits

0xc903,	// (0x0009a743) main_sp_fs_ctrlbar_ddmenu_pane_g1

0xc90f,	// (0x0009a74f) main_sp_fs_ctrlbar_ddmenu_pane_g2_ParamLimits

0xc90f,	// (0x0009a74f) main_sp_fs_ctrlbar_ddmenu_pane_g2

0x0001,

0xfcb7,	// (0x0009daf7) main_sp_fs_ctrlbar_ddmenu_pane_g_ParamLimits

0xfcb7,	// (0x0009daf7) main_sp_fs_ctrlbar_ddmenu_pane_g

0xc91b,	// (0x0009a75b) main_sp_fs_ctrlbar_ddmenu_pane_t1_ParamLimits

0xc91b,	// (0x0009a75b) main_sp_fs_ctrlbar_ddmenu_pane_t1

0xc935,	// (0x0009a775) list_medium_line_t2_right_icon_g1

0x8aff,	// (0x0009693f) list_medium_line_t2_right_icon_t1

0x8b0f,	// (0x0009694f) list_medium_line_t2_right_icon_t2

0x0001,

0xfcbc,	// (0x0009dafc) list_medium_line_t2_right_icon_t

0xa648,	// (0x00098488) bg_sp_fs_ctrlbar_pane_ParamLimits

0xa648,	// (0x00098488) bg_sp_fs_ctrlbar_pane

0x8b6c,	// (0x000969ac) main_sp_fs_ctrlbar_button_pane_cp01

0x8b76,	// (0x000969b6) main_sp_fs_ctrlbar_ddmenu_pane

0xc975,	// (0x0009a7b5) main_sp_fs_ctrlbar_pane_g1

0xc981,	// (0x0009a7c1) main_sp_fs_ctrlbar_pane_g2

0x0001,

0xfcc1,	// (0x0009db01) main_sp_fs_ctrlbar_pane_g

0xc98d,	// (0x0009a7cd) main_sp_fs_ctrlbar_pane_t1

0x8b80,	// (0x000969c0) main_sp_fs_ctrlbar_pane

0x8ba4,	// (0x000969e4) main_sp_fs_listscroll_pane_te_cp01

0x8bc4,	// (0x00096a04) popup_sp_fs_action_menu_pane_cp01_ParamLimits

0x8bc4,	// (0x00096a04) popup_sp_fs_action_menu_pane_cp01

0xefd4,	// (0x0009ce14) bg_sp_fs_highlight_list_pane_cp01_ParamLimits

0xefd4,	// (0x0009ce14) bg_sp_fs_highlight_list_pane_cp01

0xc9b2,	// (0x0009a7f2) sp_fs_action_menu_list_gene_pane_g1_ParamLimits

0xc9b2,	// (0x0009a7f2) sp_fs_action_menu_list_gene_pane_g1

0xc9c1,	// (0x0009a801) sp_fs_action_menu_list_gene_pane_g2_ParamLimits

0xc9c1,	// (0x0009a801) sp_fs_action_menu_list_gene_pane_g2

0x0001,

0xfccb,	// (0x0009db0b) sp_fs_action_menu_list_gene_pane_g_ParamLimits

0xfccb,	// (0x0009db0b) sp_fs_action_menu_list_gene_pane_g

0xc9ce,	// (0x0009a80e) sp_fs_action_menu_list_gene_pane_t1_ParamLimits

0xc9ce,	// (0x0009a80e) sp_fs_action_menu_list_gene_pane_t1

0xc9e6,	// (0x0009a826) sp_fs_action_menu_list_gene_pane_ParamLimits

0xc9e6,	// (0x0009a826) sp_fs_action_menu_list_gene_pane

0xca07,	// (0x0009a847) popup_sp_fs_action_menu_bg_pane_ParamLimits

0xca07,	// (0x0009a847) popup_sp_fs_action_menu_bg_pane

0xca15,	// (0x0009a855) sp_fs_action_menu_list_pane_ParamLimits

0xca15,	// (0x0009a855) sp_fs_action_menu_list_pane

0xca37,	// (0x0009a877) sp_fs_scroll_pane_cp01_ParamLimits

0xca37,	// (0x0009a877) sp_fs_scroll_pane_cp01

0x8be0,	// (0x00096a20) list_medium_line_plain_t2_t1

0x8bf0,	// (0x00096a30) list_medium_line_plain_t2_t2

0x0001,

0xfcd0,	// (0x0009db10) list_medium_line_plain_t2_t

0x8c00,	// (0x00096a40) list_medium_line_plain_t3_t1

0x8c10,	// (0x00096a50) list_medium_line_plain_t3_t2

0x8c1e,	// (0x00096a5e) list_medium_line_plain_t3_t3

0x0002,

0xfcd5,	// (0x0009db15) list_medium_line_plain_t3_t

0x1ae1,	// (0x0008f921) list_medium_line_x2_t2_g2_g1_ParamLimits

0x1ae1,	// (0x0008f921) list_medium_line_x2_t2_g2_g1

0x1af9,	// (0x0008f939) list_medium_line_x2_t2_g2_g2_ParamLimits

0x1af9,	// (0x0008f939) list_medium_line_x2_t2_g2_g2

0x0001,

0xf265,	// (0x0009d0a5) list_medium_line_x2_t2_g2_g_ParamLimits

0xf265,	// (0x0009d0a5) list_medium_line_x2_t2_g2_g

0x2a9a,	// (0x000908da) list_medium_line_x2_t2_g2_t1_ParamLimits

0x2a9a,	// (0x000908da) list_medium_line_x2_t2_g2_t1

0x1b2e,	// (0x0008f96e) list_medium_line_x2_t2_g2_t2_ParamLimits

0x1b2e,	// (0x0008f96e) list_medium_line_x2_t2_g2_t2

0x0001,

0xfcdc,	// (0x0009db1c) list_medium_line_x2_t2_g2_t_ParamLimits

0xfcdc,	// (0x0009db1c) list_medium_line_x2_t2_g2_t

0x1ae1,	// (0x0008f921) list_medium_line_x2_t4_g2_g1_ParamLimits

0x1ae1,	// (0x0008f921) list_medium_line_x2_t4_g2_g1

0xca5d,	// (0x0009a89d) list_medium_line_x2_t4_g2_g2_ParamLimits

0xca5d,	// (0x0009a89d) list_medium_line_x2_t4_g2_g2

0x0001,

0xfce1,	// (0x0009db21) list_medium_line_x2_t4_g2_g_ParamLimits

0xfce1,	// (0x0009db21) list_medium_line_x2_t4_g2_g

0x8c2c,	// (0x00096a6c) list_medium_line_x2_t4_g2_t1_ParamLimits

0x8c2c,	// (0x00096a6c) list_medium_line_x2_t4_g2_t1

0x8c46,	// (0x00096a86) list_medium_line_x2_t4_g2_t2_ParamLimits

0x8c46,	// (0x00096a86) list_medium_line_x2_t4_g2_t2

0x8c5b,	// (0x00096a9b) list_medium_line_x2_t4_g2_t3_ParamLimits

0x8c5b,	// (0x00096a9b) list_medium_line_x2_t4_g2_t3

0x1b2e,	// (0x0008f96e) list_medium_line_x2_t4_g2_t4_ParamLimits

0x1b2e,	// (0x0008f96e) list_medium_line_x2_t4_g2_t4

0x0003,

0xfce6,	// (0x0009db26) list_medium_line_x2_t4_g2_t_ParamLimits

0xfce6,	// (0x0009db26) list_medium_line_x2_t4_g2_t

0xca6f,	// (0x0009a8af) list_medium_line_t3_right_iconx2_g1

0xc935,	// (0x0009a775) list_medium_line_t3_right_iconx2_g2

0x8c70,	// (0x00096ab0) list_medium_line_t3_right_iconx2_g3

0x0002,

0xfcef,	// (0x0009db2f) list_medium_line_t3_right_iconx2_g

0x8c7a,	// (0x00096aba) list_medium_line_t3_right_iconx2_t1

0x8c8a,	// (0x00096aca) list_medium_line_t3_right_iconx2_t2

0x0001,

0xfcf6,	// (0x0009db36) list_medium_line_t3_right_iconx2_t

0x1ae1,	// (0x0008f921) list_medium_line_x3_t4_g4_g1_ParamLimits

0x1ae1,	// (0x0008f921) list_medium_line_x3_t4_g4_g1

0x1aed,	// (0x0008f92d) list_medium_line_x3_t4_g4_g2_ParamLimits

0x1aed,	// (0x0008f92d) list_medium_line_x3_t4_g4_g2

0x1b94,	// (0x0008f9d4) list_medium_line_x3_t4_g4_g3_ParamLimits

0x1b94,	// (0x0008f9d4) list_medium_line_x3_t4_g4_g3

0xca77,	// (0x0009a8b7) list_medium_line_x3_t4_g4_g4_ParamLimits

0xca77,	// (0x0009a8b7) list_medium_line_x3_t4_g4_g4

0x0003,

0xfcfb,	// (0x0009db3b) list_medium_line_x3_t4_g4_g_ParamLimits

0xfcfb,	// (0x0009db3b) list_medium_line_x3_t4_g4_g

0x8c98,	// (0x00096ad8) list_medium_line_x3_t4_g4_t1_ParamLimits

0x8c98,	// (0x00096ad8) list_medium_line_x3_t4_g4_t1

0x8caf,	// (0x00096aef) list_medium_line_x3_t4_g4_t2_ParamLimits

0x8caf,	// (0x00096aef) list_medium_line_x3_t4_g4_t2

0x2aaf,	// (0x000908ef) list_medium_line_x3_t4_g4_t3_ParamLimits

0x2aaf,	// (0x000908ef) list_medium_line_x3_t4_g4_t3

0xca83,	// (0x0009a8c3) list_medium_line_x3_t4_g4_t4_ParamLimits

0xca83,	// (0x0009a8c3) list_medium_line_x3_t4_g4_t4

0x0003,

0xfd04,	// (0x0009db44) list_medium_line_x3_t4_g4_t_ParamLimits

0xfd04,	// (0x0009db44) list_medium_line_x3_t4_g4_t

0x8cca,	// (0x00096b0a) list_single_dyc_row_text_pane_t1_ParamLimits

0x8cca,	// (0x00096b0a) list_single_dyc_row_text_pane_t1

0x8d13,	// (0x00096b53) list_single_dyc_row_text_pane_t2_ParamLimits

0x8d13,	// (0x00096b53) list_single_dyc_row_text_pane_t2

0xcaa0,	// (0x0009a8e0) list_single_dyc_row_text_pane_t3_ParamLimits

0xcaa0,	// (0x0009a8e0) list_single_dyc_row_text_pane_t3

0x0002,

0xfd0d,	// (0x0009db4d) list_single_dyc_row_text_pane_t_ParamLimits

0xfd0d,	// (0x0009db4d) list_single_dyc_row_text_pane_t

0xcab2,	// (0x0009a8f2) list_single_dyc_row_pane_g1_ParamLimits

0xcab2,	// (0x0009a8f2) list_single_dyc_row_pane_g1

0xcabe,	// (0x0009a8fe) list_single_dyc_row_pane_g2_ParamLimits

0xcabe,	// (0x0009a8fe) list_single_dyc_row_pane_g2

0xcaca,	// (0x0009a90a) list_single_dyc_row_pane_g3_ParamLimits

0xcaca,	// (0x0009a90a) list_single_dyc_row_pane_g3

0xcad6,	// (0x0009a916) list_single_dyc_row_pane_g4_ParamLimits

0xcad6,	// (0x0009a916) list_single_dyc_row_pane_g4

0x0003,

0xfd14,	// (0x0009db54) list_single_dyc_row_pane_g_ParamLimits

0xfd14,	// (0x0009db54) list_single_dyc_row_pane_g

0xcae2,	// (0x0009a922) list_single_dyc_row_text_pane_ParamLimits

0xcae2,	// (0x0009a922) list_single_dyc_row_text_pane

0x0bfb,	// (0x0008ea3b) bg_sp_fs_scroll_pane

0xcb01,	// (0x0009a941) thumb_sp_fs_scroll_pane

0xb905,	// (0x00099745) list_medium_line_g1_ParamLimits

0xb905,	// (0x00099745) list_medium_line_g1

0xcb0a,	// (0x0009a94a) list_medium_line_t1_ParamLimits

0xcb0a,	// (0x0009a94a) list_medium_line_t1

0x1ae1,	// (0x0008f921) list_medium_line_x2_g1_ParamLimits

0x1ae1,	// (0x0008f921) list_medium_line_x2_g1

0x1aed,	// (0x0008f92d) list_medium_line_x2_g2_ParamLimits

0x1aed,	// (0x0008f92d) list_medium_line_x2_g2

0x0001,

0xfd1d,	// (0x0009db5d) list_medium_line_x2_g_ParamLimits

0xfd1d,	// (0x0009db5d) list_medium_line_x2_g

0xcb1f,	// (0x0009a95f) list_medium_line_x2_t1_ParamLimits

0xcb1f,	// (0x0009a95f) list_medium_line_x2_t1

0x1ae1,	// (0x0008f921) list_medium_line_x3_g1_ParamLimits

0x1ae1,	// (0x0008f921) list_medium_line_x3_g1

0x1aed,	// (0x0008f92d) list_medium_line_x3_g2_ParamLimits

0x1aed,	// (0x0008f92d) list_medium_line_x3_g2

0x0001,

0xfd1d,	// (0x0009db5d) list_medium_line_x3_g_ParamLimits

0xfd1d,	// (0x0009db5d) list_medium_line_x3_g

0xcb1f,	// (0x0009a95f) list_medium_line_x3_t1_ParamLimits

0xcb1f,	// (0x0009a95f) list_medium_line_x3_t1

0xcb35,	// (0x0009a975) thumb_sp_fs_scroll_pane_g1

0xcb3e,	// (0x0009a97e) thumb_sp_fs_scroll_pane_g2

0xcb47,	// (0x0009a987) thumb_sp_fs_scroll_pane_g3

0x0002,

0xfd22,	// (0x0009db62) thumb_sp_fs_scroll_pane_g

0xcb35,	// (0x0009a975) bg_sp_fs_scroll_pane_g1

0xcb3e,	// (0x0009a97e) bg_sp_fs_scroll_pane_g2

0xcb47,	// (0x0009a987) bg_sp_fs_scroll_pane_g3

0x0002,

0xfd22,	// (0x0009db62) bg_sp_fs_scroll_pane_g

0x1ae1,	// (0x0008f921) list_medium_line_x2_t3_g4_g1_ParamLimits

0x1ae1,	// (0x0008f921) list_medium_line_x2_t3_g4_g1

0x1b88,	// (0x0008f9c8) list_medium_line_x2_t3_g4_g2_ParamLimits

0x1b88,	// (0x0008f9c8) list_medium_line_x2_t3_g4_g2

0x1aed,	// (0x0008f92d) list_medium_line_x2_t3_g4_g3_ParamLimits

0x1aed,	// (0x0008f92d) list_medium_line_x2_t3_g4_g3

0x1af9,	// (0x0008f939) list_medium_line_x2_t3_g4_g4_ParamLimits

0x1af9,	// (0x0008f939) list_medium_line_x2_t3_g4_g4

0x0003,

0xf2e1,	// (0x0009d121) list_medium_line_x2_t3_g4_g_ParamLimits

0xf2e1,	// (0x0009d121) list_medium_line_x2_t3_g4_g

0x8d6d,	// (0x00096bad) list_medium_line_x2_t3_g4_t1_ParamLimits

0x8d6d,	// (0x00096bad) list_medium_line_x2_t3_g4_t1

0x8d87,	// (0x00096bc7) list_medium_line_x2_t3_g4_t2_ParamLimits

0x8d87,	// (0x00096bc7) list_medium_line_x2_t3_g4_t2

0x1b2e,	// (0x0008f96e) list_medium_line_x2_t3_g4_t3_ParamLimits

0x1b2e,	// (0x0008f96e) list_medium_line_x2_t3_g4_t3

0x0002,

0xfd29,	// (0x0009db69) list_medium_line_x2_t3_g4_t_ParamLimits

0xfd29,	// (0x0009db69) list_medium_line_x2_t3_g4_t

0xb905,	// (0x00099745) list_medium_line_g2_g1_ParamLimits

0xb905,	// (0x00099745) list_medium_line_g2_g1

0xb911,	// (0x00099751) list_medium_line_g2_g2_ParamLimits

0xb911,	// (0x00099751) list_medium_line_g2_g2

0x0001,

0xf9e6,	// (0x0009d826) list_medium_line_g2_g_ParamLimits

0xf9e6,	// (0x0009d826) list_medium_line_g2_g

0xcb50,	// (0x0009a990) list_medium_line_g2_t1_ParamLimits

0xcb50,	// (0x0009a990) list_medium_line_g2_t1

0xb905,	// (0x00099745) list_medium_line_t3_g2_g1_ParamLimits

0xb905,	// (0x00099745) list_medium_line_t3_g2_g1

0xb911,	// (0x00099751) list_medium_line_t3_g2_g2_ParamLimits

0xb911,	// (0x00099751) list_medium_line_t3_g2_g2

0x0001,

0xf9e6,	// (0x0009d826) list_medium_line_t3_g2_g_ParamLimits

0xf9e6,	// (0x0009d826) list_medium_line_t3_g2_g

0x8da1,	// (0x00096be1) list_medium_line_t3_g2_t1_ParamLimits

0x8da1,	// (0x00096be1) list_medium_line_t3_g2_t1

0x8db8,	// (0x00096bf8) list_medium_line_t3_g2_t2_ParamLimits

0x8db8,	// (0x00096bf8) list_medium_line_t3_g2_t2

0x8dcd,	// (0x00096c0d) list_medium_line_t3_g2_t3_ParamLimits

0x8dcd,	// (0x00096c0d) list_medium_line_t3_g2_t3

0x0002,

0xfd30,	// (0x0009db70) list_medium_line_t3_g2_t_ParamLimits

0xfd30,	// (0x0009db70) list_medium_line_t3_g2_t

0xc935,	// (0x0009a775) list_medium_line_right_icon_g1

0xcb65,	// (0x0009a9a5) list_medium_line_right_icon_t1

0xb905,	// (0x00099745) list_medium_line_t2_g1_ParamLimits

0xb905,	// (0x00099745) list_medium_line_t2_g1

0x8de6,	// (0x00096c26) list_medium_line_t2_t1_ParamLimits

0x8de6,	// (0x00096c26) list_medium_line_t2_t1

0x8e00,	// (0x00096c40) list_medium_line_t2_t2_ParamLimits

0x8e00,	// (0x00096c40) list_medium_line_t2_t2

0x0001,

0xfd37,	// (0x0009db77) list_medium_line_t2_t_ParamLimits

0xfd37,	// (0x0009db77) list_medium_line_t2_t

0xb905,	// (0x00099745) list_medium_line_t3_g1_ParamLimits

0xb905,	// (0x00099745) list_medium_line_t3_g1

0x8e19,	// (0x00096c59) list_medium_line_t3_t1_ParamLimits

0x8e19,	// (0x00096c59) list_medium_line_t3_t1

0x8e33,	// (0x00096c73) list_medium_line_t3_t2_ParamLimits

0x8e33,	// (0x00096c73) list_medium_line_t3_t2

0x8e48,	// (0x00096c88) list_medium_line_t3_t3_ParamLimits

0x8e48,	// (0x00096c88) list_medium_line_t3_t3

0x0002,

0xfd3c,	// (0x0009db7c) list_medium_line_t3_t_ParamLimits

0xfd3c,	// (0x0009db7c) list_medium_line_t3_t

0xb905,	// (0x00099745) list_medium_line_g3_g1_ParamLimits

0xb905,	// (0x00099745) list_medium_line_g3_g1

0xcb73,	// (0x0009a9b3) list_medium_line_g3_g2_ParamLimits

0xcb73,	// (0x0009a9b3) list_medium_line_g3_g2

0xb911,	// (0x00099751) list_medium_line_g3_g3_ParamLimits

0xb911,	// (0x00099751) list_medium_line_g3_g3

0x0002,

0xfd43,	// (0x0009db83) list_medium_line_g3_g_ParamLimits

0xfd43,	// (0x0009db83) list_medium_line_g3_g

0xcb7f,	// (0x0009a9bf) list_medium_line_g3_t1_ParamLimits

0xcb7f,	// (0x0009a9bf) list_medium_line_g3_t1

0xb905,	// (0x00099745) list_medium_line_t2_g3_g1_ParamLimits

0xb905,	// (0x00099745) list_medium_line_t2_g3_g1

0xcb73,	// (0x0009a9b3) list_medium_line_t2_g3_g2_ParamLimits

0xcb73,	// (0x0009a9b3) list_medium_line_t2_g3_g2

0xb911,	// (0x00099751) list_medium_line_t2_g3_g3_ParamLimits

0xb911,	// (0x00099751) list_medium_line_t2_g3_g3

0x0002,

0xfd43,	// (0x0009db83) list_medium_line_t2_g3_g_ParamLimits

0xfd43,	// (0x0009db83) list_medium_line_t2_g3_g

0x8e5d,	// (0x00096c9d) list_medium_line_t2_g3_t1_ParamLimits

0x8e5d,	// (0x00096c9d) list_medium_line_t2_g3_t1

0x8e77,	// (0x00096cb7) list_medium_line_t2_g3_t2_ParamLimits

0x8e77,	// (0x00096cb7) list_medium_line_t2_g3_t2

0x0001,

0xfd4a,	// (0x0009db8a) list_medium_line_t2_g3_t_ParamLimits

0xfd4a,	// (0x0009db8a) list_medium_line_t2_g3_t

0xb905,	// (0x00099745) list_medium_line_t3_g3_g1_ParamLimits

0xb905,	// (0x00099745) list_medium_line_t3_g3_g1

0xcb73,	// (0x0009a9b3) list_medium_line_t3_g3_g2_ParamLimits

0xcb73,	// (0x0009a9b3) list_medium_line_t3_g3_g2

0xb911,	// (0x00099751) list_medium_line_t3_g3_g3_ParamLimits

0xb911,	// (0x00099751) list_medium_line_t3_g3_g3

0x0002,

0xfd43,	// (0x0009db83) list_medium_line_t3_g3_g_ParamLimits

0xfd43,	// (0x0009db83) list_medium_line_t3_g3_g

0x8e92,	// (0x00096cd2) list_medium_line_t3_g3_t1_ParamLimits

0x8e92,	// (0x00096cd2) list_medium_line_t3_g3_t1

0x8ea6,	// (0x00096ce6) list_medium_line_t3_g3_t2_ParamLimits

0x8ea6,	// (0x00096ce6) list_medium_line_t3_g3_t2

0x8eb8,	// (0x00096cf8) list_medium_line_t3_g3_t3_ParamLimits

0x8eb8,	// (0x00096cf8) list_medium_line_t3_g3_t3

0x0002,

0xfd4f,	// (0x0009db8f) list_medium_line_t3_g3_t_ParamLimits

0xfd4f,	// (0x0009db8f) list_medium_line_t3_g3_t

0xca6f,	// (0x0009a8af) list_medium_line_right_iconx2_g1

0xc935,	// (0x0009a775) list_medium_line_right_iconx2_g2

0x0001,

0xfd56,	// (0x0009db96) list_medium_line_right_iconx2_g

0xcb94,	// (0x0009a9d4) list_medium_line_right_iconx2_t1

0xca6f,	// (0x0009a8af) list_medium_line_t2_right_iconx2_g1

0xc935,	// (0x0009a775) list_medium_line_t2_right_iconx2_g2

0x0001,

0xfd56,	// (0x0009db96) list_medium_line_t2_right_iconx2_g

0x8ecc,	// (0x00096d0c) list_medium_line_t2_right_iconx2_t1

0x8edc,	// (0x00096d1c) list_medium_line_t2_right_iconx2_t2

0x0001,

0xfd5b,	// (0x0009db9b) list_medium_line_t2_right_iconx2_t

0xcba2,	// (0x0009a9e2) list_medium_line_x4_t4_t1

0x8eee,	// (0x00096d2e) list_medium_line_x4_t4_t2

0x8efe,	// (0x00096d3e) list_medium_line_x4_t4_t3

0x8f0e,	// (0x00096d4e) list_medium_line_x4_t4_t4

0x0003,

0xfd60,	// (0x0009dba0) list_medium_line_x4_t4_t

0x8f61,	// (0x00096da1) tport_appsw_pane_ParamLimits

0x8f61,	// (0x00096da1) tport_appsw_pane

0x8f72,	// (0x00096db2) tport_contact_pane_ParamLimits

0x8f72,	// (0x00096db2) tport_contact_pane

0x8f8b,	// (0x00096dcb) tport_listscroll_pane_ParamLimits

0x8f8b,	// (0x00096dcb) tport_listscroll_pane

0x8fa6,	// (0x00096de6) cell_tport_appsw_pane_ParamLimits

0x8fa6,	// (0x00096de6) cell_tport_appsw_pane

0xb62f,	// (0x0009946f) tport_appsw_pane_g1_ParamLimits

0xb62f,	// (0x0009946f) tport_appsw_pane_g1

0xcbb0,	// (0x0009a9f0) tport_contact_pane_g1

0xc335,	// (0x0009a175) tport_contact_pane_t1

0xcbb9,	// (0x0009a9f9) tport_contact_pane_t2

0x0001,

0xfd69,	// (0x0009dba9) tport_contact_pane_t

0xcbc7,	// (0x0009aa07) list_tport_pane

0xcbd0,	// (0x0009aa10) scroll_pane_cp_030

0xcbe1,	// (0x0009aa21) cell_tport_appsw_pane_g1

0xcbf1,	// (0x0009aa31) cell_tport_appsw_pane_t1

0x0bfb,	// (0x0008ea3b) grid_highlight_pane_cp019

0x8fe6,	// (0x00096e26) list_tport_double_graphic_pane_ParamLimits

0x8fe6,	// (0x00096e26) list_tport_double_graphic_pane

0xefd4,	// (0x0009ce14) list_highlight_pane_cp023_ParamLimits

0xefd4,	// (0x0009ce14) list_highlight_pane_cp023

0x8ff3,	// (0x00096e33) list_tport_double_graphic_pane_g1_ParamLimits

0x8ff3,	// (0x00096e33) list_tport_double_graphic_pane_g1

0x9000,	// (0x00096e40) list_tport_double_graphic_pane_t1_ParamLimits

0x9000,	// (0x00096e40) list_tport_double_graphic_pane_t1

0x9015,	// (0x00096e55) list_tport_double_graphic_pane_t2_ParamLimits

0x9015,	// (0x00096e55) list_tport_double_graphic_pane_t2

0x0001,

0xfd75,	// (0x0009dbb5) list_tport_double_graphic_pane_t_ParamLimits

0xfd75,	// (0x0009dbb5) list_tport_double_graphic_pane_t

0x0bfb,	// (0x0008ea3b) main_cale_note_pane

0x6df8,	// (0x00094c38) cell_vitu2_function_top_wide_pane_cp01_ParamLimits

0x6df8,	// (0x00094c38) cell_vitu2_function_top_wide_pane_cp01

0x8691,	// (0x000964d1) wait_bar_pane_cp05_ParamLimits

0x0bfb,	// (0x0008ea3b) listscroll_cmail_pane

0xcc07,	// (0x0009aa47) list_cmail_pane

0xb8be,	// (0x000996fe) list_cmail_body_pane

0x9031,	// (0x00096e71) list_single_cmail_header_caption_pane

0x9047,	// (0x00096e87) list_single_cmail_header_detail_pane_ParamLimits

0x9047,	// (0x00096e87) list_single_cmail_header_detail_pane

0x9070,	// (0x00096eb0) list_single_cmail_header_caption_pane_t1

0x9080,	// (0x00096ec0) list_single_cmail_header_detail_pane_g1_ParamLimits

0x9080,	// (0x00096ec0) list_single_cmail_header_detail_pane_g1

0xcc28,	// (0x0009aa68) list_single_cmail_header_detail_pane_g2_ParamLimits

0xcc28,	// (0x0009aa68) list_single_cmail_header_detail_pane_g2

0x0002,

0xfd7a,	// (0x0009dbba) list_single_cmail_header_detail_pane_g_ParamLimits

0xfd7a,	// (0x0009dbba) list_single_cmail_header_detail_pane_g

0xcc41,	// (0x0009aa81) list_single_cmail_header_detail_pane_t1_ParamLimits

0xcc41,	// (0x0009aa81) list_single_cmail_header_detail_pane_t1

0xcc7b,	// (0x0009aabb) list_single_cmail_header_editor_pane_bg_ParamLimits

0xcc7b,	// (0x0009aabb) list_single_cmail_header_editor_pane_bg

0xc4e4,	// (0x0009a324) list_cmail_body_pane_g1

0xcc8d,	// (0x0009aacd) list_cmail_body_pane_t1

0xb69b,	// (0x000994db) list_single_cmail_header_editor_pane_bg_g1

0xe5ad,	// (0x0009c3ed) list_single_cmail_header_editor_pane_bg_g1_copy1

0xb6ab,	// (0x000994eb) list_single_cmail_header_editor_pane_bg_g1_copy2

0xb6a3,	// (0x000994e3) list_single_cmail_header_editor_pane_bg_g1_copy3

0xb8fd,	// (0x0009973d) list_single_cmail_header_editor_pane_bg_g1_copy4

0xb6cb,	// (0x0009950b) list_single_cmail_header_editor_pane_bg_g1_copy4_copy1

0xb6bb,	// (0x000994fb) list_single_cmail_header_editor_pane_bg_g1_copy4_copy2

0xb6c3,	// (0x00099503) list_single_cmail_header_editor_pane_bg_g1_copy4_copy3

0xe58d,	// (0x0009c3cd) list_single_cmail_header_editor_pane_bg_g1_copy4_copy3_copy1

0x90be,	// (0x00096efe) calenote_gesture_pane_ParamLimits

0x90be,	// (0x00096efe) calenote_gesture_pane

0x90de,	// (0x00096f1e) calenote_window_pane_ParamLimits

0x90de,	// (0x00096f1e) calenote_window_pane

0xcc9b,	// (0x0009aadb) popup_note_window_cp01

0x90fa,	// (0x00096f3a) calenote_swipe_1_pane_ParamLimits

0x90fa,	// (0x00096f3a) calenote_swipe_1_pane

0x8ae5,	// (0x00096925) calenote_swipe_2_pane_ParamLimits

0x8ae5,	// (0x00096925) calenote_swipe_2_pane

0xc836,	// (0x0009a676) calenote_swipe_1_pane_g1_ParamLimits

0xc836,	// (0x0009a676) calenote_swipe_1_pane_g1

0xc843,	// (0x0009a683) calenote_swipe_1_pane_g2_ParamLimits

0xc843,	// (0x0009a683) calenote_swipe_1_pane_g2

0x0001,

0xfca4,	// (0x0009dae4) calenote_swipe_1_pane_g_ParamLimits

0xfca4,	// (0x0009dae4) calenote_swipe_1_pane_g

0xccad,	// (0x0009aaed) calenote_swipe_1_pane_t1_ParamLimits

0xccad,	// (0x0009aaed) calenote_swipe_1_pane_t1

0xc836,	// (0x0009a676) calenote_swipe_2_pane_g1_ParamLimits

0xc836,	// (0x0009a676) calenote_swipe_2_pane_g1

0xcccc,	// (0x0009ab0c) calenote_swipe_2_pane_g2_ParamLimits

0xcccc,	// (0x0009ab0c) calenote_swipe_2_pane_g2

0x0001,

0xfd86,	// (0x0009dbc6) calenote_swipe_2_pane_g_ParamLimits

0xfd86,	// (0x0009dbc6) calenote_swipe_2_pane_g

0xccd8,	// (0x0009ab18) calenote_swipe_2_pane_t1_ParamLimits

0xccd8,	// (0x0009ab18) calenote_swipe_2_pane_t1

0x0bfb,	// (0x0008ea3b) main_mup_navstr_pane

0x5a9c,	// (0x000938dc) main_mup3_pane_t7_ParamLimits

0x5a9c,	// (0x000938dc) main_mup3_pane_t7

0xd6da,	// (0x0009b51a) main_mp4_pane_g6_ParamLimits

0xd6da,	// (0x0009b51a) main_mp4_pane_g6

0xd87e,	// (0x0009b6be) main_image3_pane_t4_ParamLimits

0xd87e,	// (0x0009b6be) main_image3_pane_t4

0x910f,	// (0x00096f4f) popup_navstr_preview_pane_ParamLimits

0x910f,	// (0x00096f4f) popup_navstr_preview_pane

0x9123,	// (0x00096f63) scroll_navstr_pane_ParamLimits

0x9123,	// (0x00096f63) scroll_navstr_pane

0x0bfb,	// (0x0008ea3b) bg_popup_preview_window_pane_cp04

0xccff,	// (0x0009ab3f) popup_navstr_preview_pane_t1

0x9137,	// (0x00096f77) scroll_navstr_pane_g1_ParamLimits

0x9137,	// (0x00096f77) scroll_navstr_pane_g1

0x914b,	// (0x00096f8b) scroll_navstr_pane_t1_ParamLimits

0x914b,	// (0x00096f8b) scroll_navstr_pane_t1

0xcca4,	// (0x0009aae4) bg_button_pane_cp014

0xcca4,	// (0x0009aae4) bg_button_pane_cp030

0x8983,	// (0x000967c3) list_double_fisheye_pane_g4_ParamLimits

0x8983,	// (0x000967c3) list_double_fisheye_pane_g4

0x898f,	// (0x000967cf) list_double_fisheye_pane_g5_ParamLimits

0x898f,	// (0x000967cf) list_double_fisheye_pane_g5

0xcc0f,	// (0x0009aa4f) sp_fs_scroll_pane_cp03

0xc975,	// (0x0009a7b5) main_sp_fs_ctrlbar_pane_g1_ParamLimits

0xc981,	// (0x0009a7c1) main_sp_fs_ctrlbar_pane_g2_ParamLimits

0xfcc1,	// (0x0009db01) main_sp_fs_ctrlbar_pane_g_ParamLimits

0xc98d,	// (0x0009a7cd) main_sp_fs_ctrlbar_pane_t1_ParamLimits

0x9027,	// (0x00096e67) sp_fs_scroll_pane_cp02

0xe2bb,	// (0x0009c0fb) popup_sp_fs_calendar_preview_list_single_pane_ParamLimits

0xe2bb,	// (0x0009c0fb) popup_sp_fs_calendar_preview_list_single_pane

0x0bfb,	// (0x0008ea3b) main_cam6_pano_pane

0xefd4,	// (0x0009ce14) main_mup3_pane_ParamLimits

0x0bfb,	// (0x0008ea3b) main_phacti_pane

0x8564,	// (0x000963a4) bg_button_pane_cp11

0x857e,	// (0x000963be) main_mobtv_info_pane_g2_ParamLimits

0x857e,	// (0x000963be) main_mobtv_info_pane_g2

0x0001,

0xfc21,	// (0x0009da61) main_mobtv_info_pane_g_ParamLimits

0xfc21,	// (0x0009da61) main_mobtv_info_pane_g

0x875b,	// (0x0009659b) sc_clock_pane_t5_ParamLimits

0x875b,	// (0x0009659b) sc_clock_pane_t5

0x87e5,	// (0x00096625) main_radioblah_pane_g1_ParamLimits

0xc782,	// (0x0009a5c2) main_radioblah_pane_t3_ParamLimits

0xc782,	// (0x0009a5c2) main_radioblah_pane_t3

0xc79a,	// (0x0009a5da) main_radioblah_pane_t4_ParamLimits

0xc79a,	// (0x0009a5da) main_radioblah_pane_t4

0x880d,	// (0x0009664d) main_radioblah_text_pane_ParamLimits

0x880d,	// (0x0009664d) main_radioblah_text_pane

0x881f,	// (0x0009665f) main_radioblah_info_pane_g1_ParamLimits

0x88b8,	// (0x000966f8) main_radioblah_info_pane_t4_ParamLimits

0x88b8,	// (0x000966f8) main_radioblah_info_pane_t4

0xefd4,	// (0x0009ce14) main_sp_fs_calendar_pane

0x9162,	// (0x00096fa2) main_phacti_pane_g1

0x916a,	// (0x00096faa) phacti_note_pane_ParamLimits

0x916a,	// (0x00096faa) phacti_note_pane

0xcd16,	// (0x0009ab56) phacti_term_pane_ParamLimits

0xcd16,	// (0x0009ab56) phacti_term_pane

0xcd2b,	// (0x0009ab6b) phacti_note_pane_t1_ParamLimits

0xcd2b,	// (0x0009ab6b) phacti_note_pane_t1

0xcd42,	// (0x0009ab82) phacti_term_pane_g1

0xcd4a,	// (0x0009ab8a) phacti_term_pane_t1_ParamLimits

0xcd4a,	// (0x0009ab8a) phacti_term_pane_t1

0xcd74,	// (0x0009abb4) popup_sp_fs_calendar_preview_list_single_pane_g1

0xe3ae,	// (0x0009c1ee) popup_sp_fs_calendar_preview_list_single_pane_g2

0x0001,

0xfd90,	// (0x0009dbd0) popup_sp_fs_calendar_preview_list_single_pane_g

0xcd7c,	// (0x0009abbc) popup_sp_fs_calendar_preview_list_single_pane_t1_ParamLimits

0xcd7c,	// (0x0009abbc) popup_sp_fs_calendar_preview_list_single_pane_t1

0xcd91,	// (0x0009abd1) aid_popup_sp_fs_bg_corner_pane

0xab4e,	// (0x0009898e) popup_sp_fs_calendar_preview_bg_pane_g1

0x0bfb,	// (0x0008ea3b) popup_sp_fs_calendar_preview_bg_pane

0xcd99,	// (0x0009abd9) popup_sp_fs_calendar_preview_list_pane

0xefd4,	// (0x0009ce14) bg_main_sp_fs_cale_pane_ParamLimits

0xefd4,	// (0x0009ce14) bg_main_sp_fs_cale_pane

0xcdaa,	// (0x0009abea) listscroll_cale_mrui_pane_ParamLimits

0xcdaa,	// (0x0009abea) listscroll_cale_mrui_pane

0xcdbe,	// (0x0009abfe) listscroll_sp_fs_schedule_track_pane

0xcdc7,	// (0x0009ac07) main_sp_fs_ctrlbar_pane_cp01_ParamLimits

0xcdc7,	// (0x0009ac07) main_sp_fs_ctrlbar_pane_cp01

0xcdd8,	// (0x0009ac18) main_sp_fs_ribbon_pane

0xcde0,	// (0x0009ac20) popup_sp_fs_cale_preview_window

0x91c5,	// (0x00097005) list_single_sp_fs_schedule_track_pane_ParamLimits

0x91c5,	// (0x00097005) list_single_sp_fs_schedule_track_pane

0xefd4,	// (0x0009ce14) bg_sp_fs_highlight_list_pane_cp03_ParamLimits

0xefd4,	// (0x0009ce14) bg_sp_fs_highlight_list_pane_cp03

0x91d7,	// (0x00097017) list_single_sp_fs_schedule_track_pane_g1_ParamLimits

0x91d7,	// (0x00097017) list_single_sp_fs_schedule_track_pane_g1

0x91e3,	// (0x00097023) list_single_sp_fs_schedule_track_pane_g2_ParamLimits

0x91e3,	// (0x00097023) list_single_sp_fs_schedule_track_pane_g2

0x0001,

0xfd95,	// (0x0009dbd5) list_single_sp_fs_schedule_track_pane_g_ParamLimits

0xfd95,	// (0x0009dbd5) list_single_sp_fs_schedule_track_pane_g

0x91ef,	// (0x0009702f) list_single_sp_fs_schedule_track_pane_t1_ParamLimits

0x91ef,	// (0x0009702f) list_single_sp_fs_schedule_track_pane_t1

0x9209,	// (0x00097049) sp_fs_schedule_track_pane_ParamLimits

0x9209,	// (0x00097049) sp_fs_schedule_track_pane

0xcdf2,	// (0x0009ac32) sp_fs_schedule_track_pane_g1

0xcdfa,	// (0x0009ac3a) sp_fs_schedule_track_pane_g2

0xce02,	// (0x0009ac42) sp_fs_schedule_track_pane_g3

0xce0a,	// (0x0009ac4a) sp_fs_schedule_track_pane_g4

0xce12,	// (0x0009ac52) sp_fs_schedule_track_pane_g5

0x0004,

0xfd9a,	// (0x0009dbda) sp_fs_schedule_track_pane_g

0xb69b,	// (0x000994db) bg_sp_fs_schedule_viewer_highlight_g1

0xe5ad,	// (0x0009c3ed) bg_sp_fs_schedule_viewer_highlight_g2

0xb6a3,	// (0x000994e3) bg_sp_fs_schedule_viewer_highlight_g3

0xb6ab,	// (0x000994eb) bg_sp_fs_schedule_viewer_highlight_g4

0xb8fd,	// (0x0009973d) bg_sp_fs_schedule_viewer_highlight_g5

0xb6bb,	// (0x000994fb) bg_sp_fs_schedule_viewer_highlight_g6

0xb6c3,	// (0x00099503) bg_sp_fs_schedule_viewer_highlight_g7

0xb6cb,	// (0x0009950b) bg_sp_fs_schedule_viewer_highlight_g8

0xe58d,	// (0x0009c3cd) bg_sp_fs_schedule_viewer_highlight_g9

0x0008,

0xfda5,	// (0x0009dbe5) bg_sp_fs_schedule_viewer_highlight_g

0x0bfb,	// (0x0008ea3b) bg_main_sp_fs_ribbon_pane

0x921a,	// (0x0009705a) main_sp_fs_ribbon_pane_g1

0xce1a,	// (0x0009ac5a) main_sp_fs_ribbon_pane_t1

0x9223,	// (0x00097063) main_sp_fs_ribbon_pane_t2

0xce29,	// (0x0009ac69) main_sp_fs_ribbon_pane_t3

0x0002,

0xfdb8,	// (0x0009dbf8) main_sp_fs_ribbon_pane_t

0xce38,	// (0x0009ac78) main_sp_fs_ribbon_scheduler_pane

0xce40,	// (0x0009ac80) bg_main_sp_fs_ribbon_pane_g1

0xce49,	// (0x0009ac89) bg_main_sp_fs_ribbon_pane_g2

0xce52,	// (0x0009ac92) bg_main_sp_fs_ribbon_pane_g3

0x0002,

0xfdbf,	// (0x0009dbff) bg_main_sp_fs_ribbon_pane_g

0xce5a,	// (0x0009ac9a) main_sp_fs_ribbon_scheduler_pane_g1

0xce63,	// (0x0009aca3) main_sp_fs_ribbon_scheduler_pane_g2

0xce6c,	// (0x0009acac) main_sp_fs_ribbon_scheduler_pane_g3

0x0002,

0xfdc6,	// (0x0009dc06) main_sp_fs_ribbon_scheduler_pane_g

0xce75,	// (0x0009acb5) list_cale_mrui_pane

0x9232,	// (0x00097072) sp_fs_scroll_pane_cp07_ParamLimits

0x9232,	// (0x00097072) sp_fs_scroll_pane_cp07

0x9246,	// (0x00097086) bg_sp_fs_schedule_viewer_highlight_ParamLimits

0x9246,	// (0x00097086) bg_sp_fs_schedule_viewer_highlight

0xce7e,	// (0x0009acbe) list_single_sp_fs_schedule_track_pane_cp01

0xce86,	// (0x0009acc6) list_sp_fs_schedule_track_pane

0xce8e,	// (0x0009acce) sp_fs_scroll_pane_cp06_ParamLimits

0xce8e,	// (0x0009acce) sp_fs_scroll_pane_cp06

0xab4e,	// (0x0009898e) bgmain_sp_fs_calendar_pane_g1

0x9256,	// (0x00097096) list_single_cale_mrui_pane_ParamLimits

0x9256,	// (0x00097096) list_single_cale_mrui_pane

0xcea0,	// (0x0009ace0) list_single_cale_mrui_row_pane_ParamLimits

0xcea0,	// (0x0009ace0) list_single_cale_mrui_row_pane

0xcead,	// (0x0009aced) list_single_cale_mrui_row_pane_g1_ParamLimits

0xcead,	// (0x0009aced) list_single_cale_mrui_row_pane_g1

0xcef2,	// (0x0009ad32) list_single_cale_mrui_row_pane_t1_ParamLimits

0xcef2,	// (0x0009ad32) list_single_cale_mrui_row_pane_t1

0x9276,	// (0x000970b6) list_single_cale_mrui_row_pane_t2_ParamLimits

0x9276,	// (0x000970b6) list_single_cale_mrui_row_pane_t2

0xcf04,	// (0x0009ad44) list_single_cale_mrui_row_pane_t3_ParamLimits

0xcf04,	// (0x0009ad44) list_single_cale_mrui_row_pane_t3

0xcf33,	// (0x0009ad73) list_single_cale_mrui_row_pane_t4_ParamLimits

0xcf33,	// (0x0009ad73) list_single_cale_mrui_row_pane_t4

0x0003,

0xfdd4,	// (0x0009dc14) list_single_cale_mrui_row_pane_t_ParamLimits

0xfdd4,	// (0x0009dc14) list_single_cale_mrui_row_pane_t

0x92de,	// (0x0009711e) list_single_cmail_header_editor_pane_bg_cp01_ParamLimits

0x92de,	// (0x0009711e) list_single_cmail_header_editor_pane_bg_cp01

0x9304,	// (0x00097144) list_single_cmail_header_editor_pane_bg_cp02_ParamLimits

0x9304,	// (0x00097144) list_single_cmail_header_editor_pane_bg_cp02

0x9324,	// (0x00097164) main_radioblah_text_pane_t1_ParamLimits

0x9324,	// (0x00097164) main_radioblah_text_pane_t1

0xcf62,	// (0x0009ada2) cam6_indi_pane_cp01

0xcf6a,	// (0x0009adaa) cam6_mode_pane_cp01

0xcf72,	// (0x0009adb2) cam6_pano_pane

0xcf7b,	// (0x0009adbb) cam6_zoom_pane_cp01

0xcf83,	// (0x0009adc3) cam6_pano_image_pane

0xcf8e,	// (0x0009adce) cam6_pano_pane_g1

0xc4e4,	// (0x0009a324) cam6_pano_pane_g2

0xcf97,	// (0x0009add7) cam6_pano_pane_g3

0xcfa0,	// (0x0009ade0) cam6_pano_pane_g4

0xb128,	// (0x00098f68) cam6_pano_pane_g5

0xcfa9,	// (0x0009ade9) cam6_pano_pane_g6

0xcfb3,	// (0x0009adf3) cam6_pano_pane_g7

0xcfbb,	// (0x0009adfb) cam6_pano_pane_g8

0xcfc4,	// (0x0009ae04) cam6_pano_pane_g9

0x0008,

0xfddd,	// (0x0009dc1d) cam6_pano_pane_g

0x0bfb,	// (0x0008ea3b) main_browser_tag_pane

0xccf7,	// (0x0009ab37) grid_navstr_albumart_pane

0xcfcf,	// (0x0009ae0f) cell_navstr_albumart_pane_ParamLimits

0xcfcf,	// (0x0009ae0f) cell_navstr_albumart_pane

0xcff2,	// (0x0009ae32) cell_navstr_albumart_pane_g1

0xa465,	// (0x000982a5) cell_navstr_albumart_pane_g2

0xa475,	// (0x000982b5) cell_navstr_albumart_pane_g3

0xa46d,	// (0x000982ad) cell_navstr_albumart_pane_g4

0x0003,

0xfdf0,	// (0x0009dc30) cell_navstr_albumart_pane_g

0x933e,	// (0x0009717e) bt_list_pane_ParamLimits

0x933e,	// (0x0009717e) bt_list_pane

0x9352,	// (0x00097192) bt_list_pane_t1

0x9361,	// (0x000971a1) bt_list_pane_t2

0x0001,

0xfdf9,	// (0x0009dc39) bt_list_pane_t

0x0bfb,	// (0x0008ea3b) main_cale_prevew_pane

0x9370,	// (0x000971b0) popup_cale_preview_window_ParamLimits

0x9370,	// (0x000971b0) popup_cale_preview_window

0xefd4,	// (0x0009ce14) bg_popup_preview_window_pane_cp05_ParamLimits

0xefd4,	// (0x0009ce14) bg_popup_preview_window_pane_cp05

0xcffa,	// (0x0009ae3a) list_cale_preview_pane_ParamLimits

0xcffa,	// (0x0009ae3a) list_cale_preview_pane

0x938b,	// (0x000971cb) list_double_cale_preview_pane_ParamLimits

0x938b,	// (0x000971cb) list_double_cale_preview_pane

0x939d,	// (0x000971dd) list_single_cale_preview_pane_ParamLimits

0x939d,	// (0x000971dd) list_single_cale_preview_pane

0x93b3,	// (0x000971f3) list_single_cale_preview_pane_g1

0x93bb,	// (0x000971fb) list_single_cale_preview_pane_t1_ParamLimits

0x93bb,	// (0x000971fb) list_single_cale_preview_pane_t1

0x93d0,	// (0x00097210) list_double_cale_preview_pane_g1

0x93d8,	// (0x00097218) list_double_cale_preview_pane_t1_ParamLimits

0x93d8,	// (0x00097218) list_double_cale_preview_pane_t1

0x93ed,	// (0x0009722d) list_double_cale_preview_pane_t2_ParamLimits

0x93ed,	// (0x0009722d) list_double_cale_preview_pane_t2

0x0001,

0xfdfe,	// (0x0009dc3e) list_double_cale_preview_pane_t_ParamLimits

0xfdfe,	// (0x0009dc3e) list_double_cale_preview_pane_t

0x0bfb,	// (0x0008ea3b) main_ezdial_pane

0xefd4,	// (0x0009ce14) main_sp_fs_email_pane_ParamLimits

0x8b21,	// (0x00096961) cmail_ddmenu_btn01_pane_ParamLimits

0x8b21,	// (0x00096961) cmail_ddmenu_btn01_pane

0x8b34,	// (0x00096974) cmail_ddmenu_btn02_pane_ParamLimits

0x8b34,	// (0x00096974) cmail_ddmenu_btn02_pane

0x8b57,	// (0x00096997) cmail_ddmenu_btn03_pane_ParamLimits

0x8b57,	// (0x00096997) cmail_ddmenu_btn03_pane

0x8b80,	// (0x000969c0) main_sp_fs_ctrlbar_pane_ParamLimits

0x8ba4,	// (0x000969e4) main_sp_fs_listscroll_pane_te_cp01_ParamLimits

0xb8be,	// (0x000996fe) list_cmail_body_pane_ParamLimits

0xcc1f,	// (0x0009aa5f) bg_button_pane_cp12

0xcc34,	// (0x0009aa74) list_single_cmail_header_detail_pane_g3_ParamLimits

0xcc34,	// (0x0009aa74) list_single_cmail_header_detail_pane_g3

0x9098,	// (0x00096ed8) list_single_cmail_header_detail_pane_t2_ParamLimits

0x9098,	// (0x00096ed8) list_single_cmail_header_detail_pane_t2

0x0001,

0xfd81,	// (0x0009dbc1) list_single_cmail_header_detail_pane_t_ParamLimits

0xfd81,	// (0x0009dbc1) list_single_cmail_header_detail_pane_t

0xcd5f,	// (0x0009ab9f) phacti_term_pane_t2_ParamLimits

0xcd5f,	// (0x0009ab9f) phacti_term_pane_t2

0x0001,

0xfd8b,	// (0x0009dbcb) phacti_term_pane_t_ParamLimits

0xfd8b,	// (0x0009dbcb) phacti_term_pane_t

0xd006,	// (0x0009ae46) aid_size_list_single_double

0x9405,	// (0x00097245) popup_ezdial_listscroll_window

0x9421,	// (0x00097261) popup_number_entry_window_cp01

0xec98,	// (0x0009cad8) bg_popup_call_pane_cp09

0xd012,	// (0x0009ae52) ezdial_list_pane

0xd01a,	// (0x0009ae5a) scroll_pane_cp23

0xa648,	// (0x00098488) bg_button_pane_cp028_ParamLimits

0xa648,	// (0x00098488) bg_button_pane_cp028

0x942f,	// (0x0009726f) cmail_ddmenu_btn01_pane_g1_ParamLimits

0x942f,	// (0x0009726f) cmail_ddmenu_btn01_pane_g1

0x943e,	// (0x0009727e) cmail_ddmenu_btn01_pane_g2_ParamLimits

0x943e,	// (0x0009727e) cmail_ddmenu_btn01_pane_g2

0x0001,

0xfe03,	// (0x0009dc43) cmail_ddmenu_btn01_pane_g_ParamLimits

0xfe03,	// (0x0009dc43) cmail_ddmenu_btn01_pane_g

0xd022,	// (0x0009ae62) cmail_ddmenu_btn01_pane_t1_ParamLimits

0xd022,	// (0x0009ae62) cmail_ddmenu_btn01_pane_t1

0xa648,	// (0x00098488) bg_button_pane_cp029_ParamLimits

0xa648,	// (0x00098488) bg_button_pane_cp029

0x944e,	// (0x0009728e) cmail_ddmenu_btn02_pane_g1_ParamLimits

0x944e,	// (0x0009728e) cmail_ddmenu_btn02_pane_g1

0x9469,	// (0x000972a9) cmail_ddmenu_btn02_pane_t1_ParamLimits

0x9469,	// (0x000972a9) cmail_ddmenu_btn02_pane_t1

0xefd4,	// (0x0009ce14) bg_button_pane_cp031_ParamLimits

0xefd4,	// (0x0009ce14) bg_button_pane_cp031

0x944e,	// (0x0009728e) cmail_ddmenu_btn03_pane_g1_ParamLimits

0x944e,	// (0x0009728e) cmail_ddmenu_btn03_pane_g1

0x9469,	// (0x000972a9) cmail_ddmenu_btn03_pane_t1_ParamLimits

0x9469,	// (0x000972a9) cmail_ddmenu_btn03_pane_t1

0x6610,	// (0x00094450) cell_dialer2_keypad_pane_t1_ParamLimits

0x662a,	// (0x0009446a) cell_dialer2_keypad_pane_t1_copy1_ParamLimits

0x662a,	// (0x0009446a) cell_dialer2_keypad_pane_t1_copy1

0x83e6,	// (0x00096226) ncimui_group_button_pane

0xefd4,	// (0x0009ce14) main_sp_fs_calendar_pane_ParamLimits

0x9031,	// (0x00096e71) list_single_cmail_header_caption_pane_ParamLimits

0xcda1,	// (0x0009abe1) aid_recal_txt_sm_pane

0x0bfb,	// (0x0008ea3b) mian_recal_day_pane

0xcde0,	// (0x0009ac20) popup_sp_fs_cale_preview_window_ParamLimits

0x0bfb,	// (0x0008ea3b) list_recal_day_pane

0xd05a,	// (0x0009ae9a) list_single_recal_day_pane_ParamLimits

0xd05a,	// (0x0009ae9a) list_single_recal_day_pane

0xd06c,	// (0x0009aeac) list_single_recal_day_pane_g1_ParamLimits

0xd06c,	// (0x0009aeac) list_single_recal_day_pane_g1

0xd078,	// (0x0009aeb8) list_single_recal_day_pane_g2_ParamLimits

0xd078,	// (0x0009aeb8) list_single_recal_day_pane_g2

0xd088,	// (0x0009aec8) list_single_recal_day_pane_g3_ParamLimits

0xd088,	// (0x0009aec8) list_single_recal_day_pane_g3

0x9490,	// (0x000972d0) list_single_recal_day_pane_g4_ParamLimits

0x9490,	// (0x000972d0) list_single_recal_day_pane_g4

0xd094,	// (0x0009aed4) list_single_recal_day_pane_g5_ParamLimits

0xd094,	// (0x0009aed4) list_single_recal_day_pane_g5

0xd0a4,	// (0x0009aee4) list_single_recal_day_pane_g6_ParamLimits

0xd0a4,	// (0x0009aee4) list_single_recal_day_pane_g6

0x0004,

0xfe12,	// (0x0009dc52) list_single_recal_day_pane_g_ParamLimits

0xfe12,	// (0x0009dc52) list_single_recal_day_pane_g

0xd0bb,	// (0x0009aefb) list_single_recal_day_pane_t1

0xd0cd,	// (0x0009af0d) list_single_recal_day_pane_t2

0x0001,

0xfe1d,	// (0x0009dc5d) list_single_recal_day_pane_t

0x94b0,	// (0x000972f0) ncimui_query_button_pane_ParamLimits

0x94b0,	// (0x000972f0) ncimui_query_button_pane

0x94c0,	// (0x00097300) ncimui_query_button_pane_t1_ParamLimits

0x94c0,	// (0x00097300) ncimui_query_button_pane_t1

0xd0e2,	// (0x0009af22) ncimui_query_button_pane_t2_ParamLimits

0xd0e2,	// (0x0009af22) ncimui_query_button_pane_t2

0x0001,

0xfe22,	// (0x0009dc62) ncimui_query_button_pane_t_ParamLimits

0xfe22,	// (0x0009dc62) ncimui_query_button_pane_t

0x94d3,	// (0x00097313) query_button_pane_ParamLimits

0x94d3,	// (0x00097313) query_button_pane

0x0bfb,	// (0x0008ea3b) bg_button_pane_cp0028

0xd0f5,	// (0x0009af35) query_button_pane_t1

0x46e9,	// (0x00092529) main_tport_pane_ParamLimits

0x8f1e,	// (0x00096d5e) bg_popup_window_pane_cp01_ParamLimits

0x8f1e,	// (0x00096d5e) bg_popup_window_pane_cp01

0x8f38,	// (0x00096d78) heading_pane_cp08_ParamLimits

0x8f38,	// (0x00096d78) heading_pane_cp08

0x8f4c,	// (0x00096d8c) heading_pane_cp07_ParamLimits

0x8f4c,	// (0x00096d8c) heading_pane_cp07

0xcbe1,	// (0x0009aa21) cell_tport_appsw_pane_g2

0x0002,

0xfd6e,	// (0x0009dbae) cell_tport_appsw_pane_g

0x32c1,	// (0x00091101) input_candi_list_open_g1

0xe754,	// (0x0009c594) list_cale_time_pane_g6_ParamLimits

0xe754,	// (0x0009c594) list_cale_time_pane_g6

0x54b6,	// (0x000932f6) aid_size_touch_calib_1_ParamLimits

0x54b6,	// (0x000932f6) aid_size_touch_calib_1

0x54c2,	// (0x00093302) aid_size_touch_calib_2_ParamLimits

0x54c2,	// (0x00093302) aid_size_touch_calib_2

0x54d8,	// (0x00093318) aid_size_touch_calib_3_ParamLimits

0x54d8,	// (0x00093318) aid_size_touch_calib_3

0x54f6,	// (0x00093336) aid_size_touch_calib_4_ParamLimits

0x54f6,	// (0x00093336) aid_size_touch_calib_4

0x550c,	// (0x0009334c) main_touch_calib_button_group_pane_ParamLimits

0x550c,	// (0x0009334c) main_touch_calib_button_group_pane

0x5524,	// (0x00093364) main_touch_calib_pane_g1_ParamLimits

0x5530,	// (0x00093370) main_touch_calib_pane_g2_ParamLimits

0x553c,	// (0x0009337c) main_touch_calib_pane_g3_ParamLimits

0x5548,	// (0x00093388) main_touch_calib_pane_g4_ParamLimits

0xf748,	// (0x0009d588) main_touch_calib_pane_g_ParamLimits

0x5554,	// (0x00093394) main_touch_calib_pane_t1_ParamLimits

0x556e,	// (0x000933ae) main_touch_calib_pane_t2_ParamLimits

0x5588,	// (0x000933c8) main_touch_calib_pane_t3_ParamLimits

0x559c,	// (0x000933dc) main_touch_calib_pane_t4_ParamLimits

0x55b0,	// (0x000933f0) main_touch_calib_pane_t5_ParamLimits

0xf751,	// (0x0009d591) main_touch_calib_pane_t_ParamLimits

0xaefe,	// (0x00098d3e) list_single_fp_cale_pane_g3_ParamLimits

0xaefe,	// (0x00098d3e) list_single_fp_cale_pane_g3

0xd943,	// (0x0009b783) bg_button_pane_cp012_ParamLimits

0xd943,	// (0x0009b783) bg_vkb2_func_pane_cp03_ParamLimits

0x75c8,	// (0x00095408) cell_vitu2_function_top_pane_g1_ParamLimits

0xd943,	// (0x0009b783) bg_vkb2_func_pane_cp04_ParamLimits

0x8386,	// (0x000961c6) main_ncimui_button_group_pane_ParamLimits

0x8386,	// (0x000961c6) main_ncimui_button_group_pane

0x83d4,	// (0x00096214) main_ncimui_pane_t3_ParamLimits

0x83d4,	// (0x00096214) main_ncimui_pane_t3

0xcd0d,	// (0x0009ab4d) phacti_button_group_pane

0xd006,	// (0x0009ae46) aid_size_list_single_double_ParamLimits

0x9405,	// (0x00097245) popup_ezdial_listscroll_window_ParamLimits

0x9421,	// (0x00097261) popup_number_entry_window_cp01_ParamLimits

0x94e6,	// (0x00097326) phacti_button_pane_ParamLimits

0x94e6,	// (0x00097326) phacti_button_pane

0x0bfb,	// (0x0008ea3b) bg_button_pane_cp14

0xd103,	// (0x0009af43) phacti_button_pane_t1

0x94f7,	// (0x00097337) main_touch_calib_button_pane_ParamLimits

0x94f7,	// (0x00097337) main_touch_calib_button_pane

0xe1b7,	// (0x0009bff7) bg_button_pane_cp18_ParamLimits

0xe1b7,	// (0x0009bff7) bg_button_pane_cp18

0xd111,	// (0x0009af51) main_touch_calib_button_pane_t1_ParamLimits

0xd111,	// (0x0009af51) main_touch_calib_button_pane_t1

0xd127,	// (0x0009af67) main_touch_calib_button_pane_t2_ParamLimits

0xd127,	// (0x0009af67) main_touch_calib_button_pane_t2

0x0001,

0xfe27,	// (0x0009dc67) main_touch_calib_button_pane_t_ParamLimits

0xfe27,	// (0x0009dc67) main_touch_calib_button_pane_t

0x0bfb,	// (0x0008ea3b) cell_ncimui_button_pane

0x0bfb,	// (0x0008ea3b) bg_button_pane_cp032

0xd145,	// (0x0009af85) cell_ncimui_button_pane_t1

0xd85e,	// (0x0009b69e) image3_infobar_pane_ParamLimits

0xd85e,	// (0x0009b69e) image3_infobar_pane

0x8787,	// (0x000965c7) fs_bigclock_status_pane_ParamLimits

0x8787,	// (0x000965c7) fs_bigclock_status_pane

0x8794,	// (0x000965d4) main_fs_bigclock_clock_pane_ParamLimits

0x8794,	// (0x000965d4) main_fs_bigclock_clock_pane

0x87a8,	// (0x000965e8) main_fs_bigclock_indi_pane_ParamLimits

0x87a8,	// (0x000965e8) main_fs_bigclock_indi_pane

0x87c1,	// (0x00096601) main_fs_bigclock_swipe_pane_ParamLimits

0x87c1,	// (0x00096601) main_fs_bigclock_swipe_pane

0x0bfb,	// (0x0008ea3b) main_fs_clock_dumped_data

0xc5f1,	// (0x0009a431) list_single_fs_bigclock_indicator_pane_g1_ParamLimits

0xc5f1,	// (0x0009a431) list_single_fs_bigclock_indicator_pane_g1

0xc617,	// (0x0009a457) list_single_fs_bigclock_indicator_pane_g2_ParamLimits

0xc617,	// (0x0009a457) list_single_fs_bigclock_indicator_pane_g2

0xc631,	// (0x0009a471) list_single_fs_bigclock_indicator_pane_g3_ParamLimits

0xc631,	// (0x0009a471) list_single_fs_bigclock_indicator_pane_g3

0xc64b,	// (0x0009a48b) list_single_fs_bigclock_indicator_pane_g4_ParamLimits

0xc64b,	// (0x0009a48b) list_single_fs_bigclock_indicator_pane_g4

0x0004,

0xfc55,	// (0x0009da95) list_single_fs_bigclock_indicator_pane_g_ParamLimits

0xfc55,	// (0x0009da95) list_single_fs_bigclock_indicator_pane_g

0xc674,	// (0x0009a4b4) list_single_fs_bigclock_indicator_pane_t1_ParamLimits

0xc674,	// (0x0009a4b4) list_single_fs_bigclock_indicator_pane_t1

0xc69c,	// (0x0009a4dc) list_single_fs_bigclock_indicator_pane_t2_ParamLimits

0xc69c,	// (0x0009a4dc) list_single_fs_bigclock_indicator_pane_t2

0xc6c4,	// (0x0009a504) list_single_fs_bigclock_indicator_pane_t3_ParamLimits

0xc6c4,	// (0x0009a504) list_single_fs_bigclock_indicator_pane_t3

0xc6ec,	// (0x0009a52c) list_single_fs_bigclock_indicator_pane_t4_ParamLimits

0xc6ec,	// (0x0009a52c) list_single_fs_bigclock_indicator_pane_t4

0x0004,

0xfc60,	// (0x0009daa0) list_single_fs_bigclock_indicator_pane_t_ParamLimits

0xfc60,	// (0x0009daa0) list_single_fs_bigclock_indicator_pane_t

0xd153,	// (0x0009af93) image3_infobar_fav_pane_ParamLimits

0xd153,	// (0x0009af93) image3_infobar_fav_pane

0xd163,	// (0x0009afa3) image3_infobar_loc_pane_ParamLimits

0xd163,	// (0x0009afa3) image3_infobar_loc_pane

0xd177,	// (0x0009afb7) image3_infobar_time_pane_ParamLimits

0xd177,	// (0x0009afb7) image3_infobar_time_pane

0xab4e,	// (0x0009898e) image3_infobar_time_pane_g1

0xd187,	// (0x0009afc7) image3_infobar_time_pane_t1

0xab4e,	// (0x0009898e) image3_infobar_loc_pane_g1

0xd195,	// (0x0009afd5) image3_infobar_loc_pane_g2

0x0001,

0xfe2c,	// (0x0009dc6c) image3_infobar_loc_pane_g

0xd19d,	// (0x0009afdd) image3_infobar_loc_pane_t1

0xab4e,	// (0x0009898e) image3_infobar_fav_pane_g1

0xd1ab,	// (0x0009afeb) image3_infobar_fav_pane_g2

0x0001,

0xfe31,	// (0x0009dc71) image3_infobar_fav_pane_g

0xd1b3,	// (0x0009aff3) fs_bigclock_status_battery_pane

0xd1bc,	// (0x0009affc) fs_bigclock_status_signal_pane

0xd1c5,	// (0x0009b005) fs_bigclock_status_title_pane

0xd1ce,	// (0x0009b00e) fs_bigclock_status_signal_pane_g1

0xd1d7,	// (0x0009b017) fs_bigclock_status_signal_pane_g2

0x0001,

0xfe36,	// (0x0009dc76) fs_bigclock_status_signal_pane_g

0xd1df,	// (0x0009b01f) fs_bigclock_status_battery_pane_g1

0xd1e8,	// (0x0009b028) fs_bigclock_status_battery_pane_g2

0x0001,

0xfe3b,	// (0x0009dc7b) fs_bigclock_status_battery_pane_g

0xd1f0,	// (0x0009b030) fs_bigclock_status_title_pane_t1

0xab4e,	// (0x0009898e) main_fs_bigclock_clock_pane_g1

0xd1fe,	// (0x0009b03e) main_fs_bigclock_clock_pane_g2

0xd1fe,	// (0x0009b03e) main_fs_bigclock_clock_pane_g3

0xd1fe,	// (0x0009b03e) main_fs_bigclock_clock_pane_g4

0x0003,

0xfe40,	// (0x0009dc80) main_fs_bigclock_clock_pane_g

0xd206,	// (0x0009b046) main_fs_bigclock_clock_pane_t1

0xd214,	// (0x0009b054) main_fs_bigclock_clock_pane_t2

0x0001,

0xfe49,	// (0x0009dc89) main_fs_bigclock_clock_pane_t

0xd223,	// (0x0009b063) list_single_fs_bigclock_indicator_pane_ParamLimits

0xd223,	// (0x0009b063) list_single_fs_bigclock_indicator_pane

0x950c,	// (0x0009734c) list_single_fs_bigclock_pane_ParamLimits

0x950c,	// (0x0009734c) list_single_fs_bigclock_pane

0xd23d,	// (0x0009b07d) main_fs_bigclock_indicator_pane_t1

0xd24c,	// (0x0009b08c) list_single_fs_bigclock_pane_g1

0xd254,	// (0x0009b094) list_single_fs_bigclock_pane_t1

0xab4e,	// (0x0009898e) main_fs_bigclock_swipe_pane_g1

0xd297,	// (0x0009b0d7) main_fs_bigclock_swipe_pane_g2

0x0001,

0xfe5a,	// (0x0009dc9a) main_fs_bigclock_swipe_pane_g

0xd29f,	// (0x0009b0df) main_fs_bigclock_swipe_pane_t1_ParamLimits

0xd29f,	// (0x0009b0df) main_fs_bigclock_swipe_pane_t1

0x2ad9,	// (0x00090919) call_type_pane_ParamLimits

0x0bfb,	// (0x0008ea3b) main_btmg_pane

0xced9,	// (0x0009ad19) list_single_cale_mrui_row_pane_g2_ParamLimits

0xced9,	// (0x0009ad19) list_single_cale_mrui_row_pane_g2

0x0002,

0xfdcd,	// (0x0009dc0d) list_single_cale_mrui_row_pane_g_ParamLimits

0xfdcd,	// (0x0009dc0d) list_single_cale_mrui_row_pane_g

0xd041,	// (0x0009ae81) list_recal_vselct_arw_lo_pane

0xd049,	// (0x0009ae89) list_recal_vselct_arw_up_pane

0xd051,	// (0x0009ae91) list_recal_vselct_pane

0xd2bc,	// (0x0009b0fc) btmg_button_pane

0x956f,	// (0x000973af) main_btmg_pane_g1

0x0bfb,	// (0x0008ea3b) bg_button_pane_cp044

0xd2c6,	// (0x0009b106) btmg_button_pane_t1

0xa640,	// (0x00098480) aid_listscroll_gen

0xefd4,	// (0x0009ce14) main_cntbar_detail_pane

0xcbff,	// (0x0009aa3f) list_cmail_folder_pane

0xcc0f,	// (0x0009aa4f) sp_fs_scroll_pane_cp03_ParamLimits

0x9579,	// (0x000973b9) list_single_fs_dyc_pane_cp01_ParamLimits

0x9579,	// (0x000973b9) list_single_fs_dyc_pane_cp01

0xd2d4,	// (0x0009b114) aid_size_cmail_indent

0xd2dd,	// (0x0009b11d) list_single_dyc_row_pane_cp01

0x95ba,	// (0x000973fa) cntbar_detail_list_pane_ParamLimits

0x95ba,	// (0x000973fa) cntbar_detail_list_pane

0x9606,	// (0x00097446) main_cntbar_detail_cont_pane_ParamLimits

0x9606,	// (0x00097446) main_cntbar_detail_cont_pane

0x29fe,	// (0x0009083e) scroll_pane_cp032_ParamLimits

0x29fe,	// (0x0009083e) scroll_pane_cp032

0x961a,	// (0x0009745a) cntbar_detail_list_event_pane_ParamLimits

0x961a,	// (0x0009745a) cntbar_detail_list_event_pane

0x95ca,	// (0x0009740a) cntbar_detail_list_shct_pane

0xe5fb,	// (0x0009c43b) aid_list_gen

0xd2e6,	// (0x0009b126) aid_scroll

0xd2ef,	// (0x0009b12f) aid_size_touch_scroll_bar

0x962a,	// (0x0009746a) aid_list_double

0xd2f8,	// (0x0009b138) aid_list_single

0x9633,	// (0x00097473) aid_list_single_lg

0xd301,	// (0x0009b141) aid_list_z_g_a_sm

0xd309,	// (0x0009b149) aid_list_z_g_d

0xd311,	// (0x0009b151) aid_txt_z_prm

0x963c,	// (0x0009747c) aid_txt_z_prm_cp01

0x964a,	// (0x0009748a) aid_txt_z_sec

0x9658,	// (0x00097498) main_cntbar_detail_cont_pane_g1_ParamLimits

0x9658,	// (0x00097498) main_cntbar_detail_cont_pane_g1

0x966c,	// (0x000974ac) main_cntbar_detail_cont_pane_g2_ParamLimits

0x966c,	// (0x000974ac) main_cntbar_detail_cont_pane_g2

0x0001,

0xfe5f,	// (0x0009dc9f) main_cntbar_detail_cont_pane_g_ParamLimits

0xfe5f,	// (0x0009dc9f) main_cntbar_detail_cont_pane_g

0xd31f,	// (0x0009b15f) main_cntbar_detail_cont_pane_t1

0xd32d,	// (0x0009b16d) main_cntbar_detail_cont_pane_t2

0xd33b,	// (0x0009b17b) main_cntbar_detail_cont_pane_t3

0x0002,

0xfe64,	// (0x0009dca4) main_cntbar_detail_cont_pane_t

0x967c,	// (0x000974bc) cell_cntbar_detail_list_shct_pane_ParamLimits

0x967c,	// (0x000974bc) cell_cntbar_detail_list_shct_pane

0xd349,	// (0x0009b189) cntbar_detail_list_shct_pane_g1

0xd352,	// (0x0009b192) cntbar_detail_list_shct_pane_g2

0x0001,

0xfe6b,	// (0x0009dcab) cntbar_detail_list_shct_pane_g

0x9690,	// (0x000974d0) cntbar_detail_list_event_pane_g1_ParamLimits

0x9690,	// (0x000974d0) cntbar_detail_list_event_pane_g1

0x969c,	// (0x000974dc) cntbar_detail_list_event_pane_g2_ParamLimits

0x969c,	// (0x000974dc) cntbar_detail_list_event_pane_g2

0x0005,

0xfe70,	// (0x0009dcb0) cntbar_detail_list_event_pane_g_ParamLimits

0xfe70,	// (0x0009dcb0) cntbar_detail_list_event_pane_g

0x9708,	// (0x00097548) cntbar_detail_list_event_pane_t1_ParamLimits

0x9708,	// (0x00097548) cntbar_detail_list_event_pane_t1

0x971d,	// (0x0009755d) cntbar_detail_list_event_pane_t2_ParamLimits

0x971d,	// (0x0009755d) cntbar_detail_list_event_pane_t2

0x0002,

0xfe7d,	// (0x0009dcbd) cntbar_detail_list_event_pane_t_ParamLimits

0xfe7d,	// (0x0009dcbd) cntbar_detail_list_event_pane_t

0xab4e,	// (0x0009898e) cell_cntbar_detail_list_shct_pane_g1

0x2e51,	// (0x00090c91) navi_pane_mv_g3

0xefd4,	// (0x0009ce14) main_cntbar_detail_pane_ParamLimits

0x0bfb,	// (0x0008ea3b) main_notif_wgt_pane

0xd674,	// (0x0009b4b4) aid_tch_main_mp4_pane_g4

0xd856,	// (0x0009b696) popup_slider_window_cp02

0xd037,	// (0x0009ae77) list_recal_day_event_pane

0x958e,	// (0x000973ce) cntbar_detail_btn_pane_ParamLimits

0x958e,	// (0x000973ce) cntbar_detail_btn_pane

0x95a4,	// (0x000973e4) cntbar_detail_btn_pane_cp01_ParamLimits

0x95a4,	// (0x000973e4) cntbar_detail_btn_pane_cp01

0x95ca,	// (0x0009740a) cntbar_detail_list_shct_pane_ParamLimits

0x95da,	// (0x0009741a) cntbar_detail_pane_g1_ParamLimits

0x95da,	// (0x0009741a) cntbar_detail_pane_g1

0x95ea,	// (0x0009742a) cntbar_detail_pane_t1_ParamLimits

0x95ea,	// (0x0009742a) cntbar_detail_pane_t1

0x96a8,	// (0x000974e8) cntbar_detail_list_event_pane_g3_ParamLimits

0x96a8,	// (0x000974e8) cntbar_detail_list_event_pane_g3

0x96c0,	// (0x00097500) cntbar_detail_list_event_pane_g4_ParamLimits

0x96c0,	// (0x00097500) cntbar_detail_list_event_pane_g4

0x96d8,	// (0x00097518) cntbar_detail_list_event_pane_g5_ParamLimits

0x96d8,	// (0x00097518) cntbar_detail_list_event_pane_g5

0x96f0,	// (0x00097530) cntbar_detail_list_event_pane_g6_ParamLimits

0x96f0,	// (0x00097530) cntbar_detail_list_event_pane_g6

0x9732,	// (0x00097572) cntbar_detail_list_event_pane_t3_ParamLimits

0x9732,	// (0x00097572) cntbar_detail_list_event_pane_t3

0x9744,	// (0x00097584) popup_notif_wgt_window_ParamLimits

0x9744,	// (0x00097584) popup_notif_wgt_window

0x975d,	// (0x0009759d) popup_submenu_window_cp01_ParamLimits

0x975d,	// (0x0009759d) popup_submenu_window_cp01

0xec98,	// (0x0009cad8) bg_popup_window_pane_cp10

0xd35b,	// (0x0009b19b) listscroll_notif_wgt_pane

0xd365,	// (0x0009b1a5) list_notif_wgt_window

0xd36e,	// (0x0009b1ae) scroll_pane_cp033

0xd377,	// (0x0009b1b7) list_notif_wgt_row_pane_ParamLimits

0xd377,	// (0x0009b1b7) list_notif_wgt_row_pane

0xd389,	// (0x0009b1c9) aid_size_list_notif_wgt_del

0xd392,	// (0x0009b1d2) list_notif_wgt_row_pane_g1

0xd39a,	// (0x0009b1da) list_notif_wgt_row_pane_g2

0xd3a2,	// (0x0009b1e2) list_notif_wgt_row_pane_g3

0x0002,

0xfe84,	// (0x0009dcc4) list_notif_wgt_row_pane_g

0xd3ab,	// (0x0009b1eb) list_notif_wgt_row_pane_t1

0xd3b9,	// (0x0009b1f9) list_notif_wgt_row_pane_t2

0xd3c7,	// (0x0009b207) list_notif_wgt_row_pane_t3

0x0002,

0xfe8b,	// (0x0009dccb) list_notif_wgt_row_pane_t

0xb92f,	// (0x0009976f) list_recal_day_event_pane_g1

0xd3d5,	// (0x0009b215) list_recal_day_event_pane_t1

0x0bfb,	// (0x0008ea3b) bg_button_pane_cp045

0xd3e4,	// (0x0009b224) cntbar_detail_btn_pane_t1

0xa648,	// (0x00098488) main_callh_pane_ParamLimits

0xa648,	// (0x00098488) main_callh_pane

0x0bfb,	// (0x0008ea3b) main_coverflow0_pane

0x0bfb,	// (0x0008ea3b) main_wgtman_pane

0x87cf,	// (0x0009660f) main_fs_bigclock_unlock_btn_pane_ParamLimits

0x87cf,	// (0x0009660f) main_fs_bigclock_unlock_btn_pane

0xcbd9,	// (0x0009aa19) bg_button_pane_cp16

0xcbe9,	// (0x0009aa29) cell_tport_appsw_pane_g3

0x976f,	// (0x000975af) cf0_flow_pane_ParamLimits

0x976f,	// (0x000975af) cf0_flow_pane

0xd3f2,	// (0x0009b232) listscroll_cf0_pane

0xd3fb,	// (0x0009b23b) main_cf0_pane_g1

0x9784,	// (0x000975c4) main_cf0_pane_t1_ParamLimits

0x9784,	// (0x000975c4) main_cf0_pane_t1

0x979b,	// (0x000975db) main_cf0_pane_t2_ParamLimits

0x979b,	// (0x000975db) main_cf0_pane_t2

0x0001,

0xfe92,	// (0x0009dcd2) main_cf0_pane_t_ParamLimits

0xfe92,	// (0x0009dcd2) main_cf0_pane_t

0xd405,	// (0x0009b245) scroll_pane_cp11

0x97b2,	// (0x000975f2) cf0_flow_pane_g1

0x97ba,	// (0x000975fa) cf0_flow_pane_g2

0x0001,

0xfe97,	// (0x0009dcd7) cf0_flow_pane_g

0x97c2,	// (0x00097602) cf0_flow_pane_t1

0x0bfb,	// (0x0008ea3b) main_call6_pane

0x0bfb,	// (0x0008ea3b) main_calllock_pane

0x97d0,	// (0x00097610) call6_btn_grp_pane_ParamLimits

0x97d0,	// (0x00097610) call6_btn_grp_pane

0x97ea,	// (0x0009762a) call6_pane_g1_ParamLimits

0x97ea,	// (0x0009762a) call6_pane_g1

0x97ff,	// (0x0009763f) popup_call6_1st_window_ParamLimits

0x97ff,	// (0x0009763f) popup_call6_1st_window

0x9810,	// (0x00097650) popup_call6_2nd_window_ParamLimits

0x9810,	// (0x00097650) popup_call6_2nd_window

0x9821,	// (0x00097661) cell_call6_btn_pane_ParamLimits

0x9821,	// (0x00097661) cell_call6_btn_pane

0xec98,	// (0x0009cad8) bg_popup_call2_in_pane_cp03

0xd410,	// (0x0009b250) popup_call6_1st_window_g1

0xd418,	// (0x0009b258) popup_call6_1st_window_g2

0xd420,	// (0x0009b260) popup_call6_1st_window_g3

0x0002,

0xfe9c,	// (0x0009dcdc) popup_call6_1st_window_g

0xd428,	// (0x0009b268) popup_call6_1st_window_t1

0xd437,	// (0x0009b277) popup_call6_1st_window_t2

0xd447,	// (0x0009b287) popup_call6_1st_window_t3

0x0002,

0xfea3,	// (0x0009dce3) popup_call6_1st_window_t

0xec98,	// (0x0009cad8) bg_popup_call2_in_pane_cp04

0xd410,	// (0x0009b250) popup_call6_2nd_window_g1

0xd418,	// (0x0009b258) popup_call6_2nd_window_g2

0xd420,	// (0x0009b260) popup_call6_2nd_window_g3

0x0002,

0xfe9c,	// (0x0009dcdc) popup_call6_2nd_window_g

0xd428,	// (0x0009b268) popup_call6_2nd_window_t1

0x0bfb,	// (0x0008ea3b) bg_button_pane_cp15

0xd457,	// (0x0009b297) cell_call6_btn_pane_g1

0xd460,	// (0x0009b2a0) cell_call6_btn_pane_t1

0x9835,	// (0x00097675) listscroll_wgtman_pane_ParamLimits

0x9835,	// (0x00097675) listscroll_wgtman_pane

0x9858,	// (0x00097698) wgtman_btn_pane_ParamLimits

0x9858,	// (0x00097698) wgtman_btn_pane

0xeb41,	// (0x0009c981) aid_scroll_copy1

0xd46f,	// (0x0009b2af) list_wgtman_pane

0x989b,	// (0x000976db) wgtman_btn_pane_g1_ParamLimits

0x989b,	// (0x000976db) wgtman_btn_pane_g1

0x98c7,	// (0x00097707) wgtman_btn_pane_t1_ParamLimits

0x98c7,	// (0x00097707) wgtman_btn_pane_t1

0xd479,	// (0x0009b2b9) wgtman_btn_pane_t2_ParamLimits

0xd479,	// (0x0009b2b9) wgtman_btn_pane_t2

0x0001,

0xfeaa,	// (0x0009dcea) wgtman_btn_pane_t_ParamLimits

0xfeaa,	// (0x0009dcea) wgtman_btn_pane_t

0x9904,	// (0x00097744) listrow_wgtman_pane_ParamLimits

0x9904,	// (0x00097744) listrow_wgtman_pane

0x9916,	// (0x00097756) listrow_wgtman_pane_g1

0x991f,	// (0x0009775f) listrow_wgtman_pane_g2

0x0001,

0xfeaf,	// (0x0009dcef) listrow_wgtman_pane_g

0x9929,	// (0x00097769) listrow_wgtman_pane_t1

0x9937,	// (0x00097777) listrow_wgtman_pane_t2

0x0001,

0xfeb4,	// (0x0009dcf4) listrow_wgtman_pane_t

0x9945,	// (0x00097785) wait_bar_pane_cp09

0xd490,	// (0x0009b2d0) main_calllock_btn_pane

0xd49a,	// (0x0009b2da) main_calllock_pane_g1

0x0bfb,	// (0x0008ea3b) bg_button_pane_cp17

0xd4a6,	// (0x0009b2e6) main_calllock_btn_pane_g1

0xd4af,	// (0x0009b2ef) main_calllock_btn_pane_t1

0x0bfb,	// (0x0008ea3b) main_dialer3_pane

0x0bfb,	// (0x0008ea3b) main_fmrd2_pane

0xab4e,	// (0x0009898e) main_fs_bigclock_unlock_btn_pane_g1

0xd4c6,	// (0x0009b306) main_fs_bigclock_unlock_btn_pane_t1

0x994d,	// (0x0009778d) area_fmrd2_info_pane_ParamLimits

0x994d,	// (0x0009778d) area_fmrd2_info_pane

0x995e,	// (0x0009779e) area_fmrd2_visual_pane_ParamLimits

0x995e,	// (0x0009779e) area_fmrd2_visual_pane

0x996c,	// (0x000977ac) fmrd2_indi_pane_ParamLimits

0x996c,	// (0x000977ac) fmrd2_indi_pane

0x9979,	// (0x000977b9) area_fmrd2_visual_pane_g1

0x9981,	// (0x000977c1) area_fmrd2_visual_pane_t1

0x9991,	// (0x000977d1) area_fmrd2_visual_pane_t2

0x99a1,	// (0x000977e1) area_fmrd2_visual_pane_t3

0x0002,

0xfebe,	// (0x0009dcfe) area_fmrd2_visual_pane_t

0x99b1,	// (0x000977f1) area_fmrd2_info_pane_g1

0x99b9,	// (0x000977f9) area_fmrd2_info_pane_t1

0x99c9,	// (0x00097809) area_fmrd2_info_pane_t2

0x99d9,	// (0x00097819) area_fmrd2_info_pane_t3

0x99e9,	// (0x00097829) area_fmrd2_info_pane_t4

0x0003,

0xfec5,	// (0x0009dd05) area_fmrd2_info_pane_t

0x99f7,	// (0x00097837) fmrd2_indi_pane_t1

0x9a07,	// (0x00097847) fmrd2_indi_pane_t2

0x9a17,	// (0x00097857) fmrd2_indi_pane_t3

0x0002,

0xfece,	// (0x0009dd0e) fmrd2_indi_pane_t

0xc65a,	// (0x0009a49a) list_single_fs_bigclock_indicator_pane_g5_ParamLimits

0xc65a,	// (0x0009a49a) list_single_fs_bigclock_indicator_pane_g5

0xc701,	// (0x0009a541) list_single_fs_bigclock_indicator_pane_t5_ParamLimits

0xc701,	// (0x0009a541) list_single_fs_bigclock_indicator_pane_t5

0x917e,	// (0x00096fbe) aid_cell_bcale_month_pane_ParamLimits

0x917e,	// (0x00096fbe) aid_cell_bcale_month_pane

0x9190,	// (0x00096fd0) bcale_month_pane_ParamLimits

0x9190,	// (0x00096fd0) bcale_month_pane

0x91aa,	// (0x00096fea) bcale_preview_pane_ParamLimits

0x91aa,	// (0x00096fea) bcale_preview_pane

0xd254,	// (0x0009b094) list_single_fs_bigclock_pane_t1_ParamLimits

0xd273,	// (0x0009b0b3) list_single_fs_bigclock_pane_t2_ParamLimits

0xd273,	// (0x0009b0b3) list_single_fs_bigclock_pane_t2

0x0001,

0xfe55,	// (0x0009dc95) list_single_fs_bigclock_pane_t_ParamLimits

0xfe55,	// (0x0009dc95) list_single_fs_bigclock_pane_t

0xd4be,	// (0x0009b2fe) main_fs_bigclock_unlock_btn_pane_g2

0x0001,

0xfeb9,	// (0x0009dcf9) main_fs_bigclock_unlock_btn_pane_g

0x9a27,	// (0x00097867) aid_dia3_key_size_ParamLimits

0x9a27,	// (0x00097867) aid_dia3_key_size

0x9a36,	// (0x00097876) aid_dia3_listrow_size_ParamLimits

0x9a36,	// (0x00097876) aid_dia3_listrow_size

0x9a4b,	// (0x0009788b) dia3_keypad_fun_pane_ParamLimits

0x9a4b,	// (0x0009788b) dia3_keypad_fun_pane

0x9a67,	// (0x000978a7) dia3_keypad_num_pane_ParamLimits

0x9a67,	// (0x000978a7) dia3_keypad_num_pane

0x9a82,	// (0x000978c2) dia3_listscroll_pane_ParamLimits

0x9a82,	// (0x000978c2) dia3_listscroll_pane

0x9a95,	// (0x000978d5) dia3_numentry_pane_ParamLimits

0x9a95,	// (0x000978d5) dia3_numentry_pane

0xd4d4,	// (0x0009b314) dia3_list_pane

0xd4df,	// (0x0009b31f) scroll_pane_cp12

0x0bfb,	// (0x0008ea3b) bg_dia3_numentry_pane

0x9aa9,	// (0x000978e9) dia3_numentry_pane_t1

0x9ab8,	// (0x000978f8) cell_dia3_key_num_pane

0x9ac0,	// (0x00097900) cell_dia3_key0_fun_pane_ParamLimits

0x9ac0,	// (0x00097900) cell_dia3_key0_fun_pane

0x9ad4,	// (0x00097914) cell_dia3_key1_fun_pane_ParamLimits

0x9ad4,	// (0x00097914) cell_dia3_key1_fun_pane

0x9aec,	// (0x0009792c) dia3_listrow_pane

0xc350,	// (0x0009a190) bg_dia3_numentry_pane_g1

0x0bfb,	// (0x0008ea3b) bg_button_pane_cp21

0xd4ea,	// (0x0009b32a) cell_dia3_key_num_pane_t1

0xd4f8,	// (0x0009b338) cell_dia3_key_num_pane_t2

0xd507,	// (0x0009b347) cell_dia3_key_num_pane_t3

0xd516,	// (0x0009b356) cell_dia3_key_num_pane_t4

0x0003,

0xfed5,	// (0x0009dd15) cell_dia3_key_num_pane_t

0x0bfb,	// (0x0008ea3b) bg_button_pane_cp19

0x9afe,	// (0x0009793e) cell_dia3_key0_fun_pane_g1

0x0bfb,	// (0x0008ea3b) bg_button_pane_cp20

0x9b06,	// (0x00097946) cell_dia3_key1_fun_pane_g1

0x9b0e,	// (0x0009794e) area_left_week_number_pane

0x9b17,	// (0x00097957) area_top_day_name_pane

0x9b20,	// (0x00097960) frame_month_view_pane

0x9b28,	// (0x00097968) grid_month_view_pane

0x9b32,	// (0x00097972) cell_top_day_name_pane_ParamLimits

0x9b32,	// (0x00097972) cell_top_day_name_pane

0x9b48,	// (0x00097988) cell_area_left_week_number_pane_ParamLimits

0x9b48,	// (0x00097988) cell_area_left_week_number_pane

0x9b5c,	// (0x0009799c) cell_month_view_pane_ParamLimits

0x9b5c,	// (0x0009799c) cell_month_view_pane

0xd525,	// (0x0009b365) frm_month_g1

0x9b77,	// (0x000979b7) frm_month_g2

0x9b7f,	// (0x000979bf) frm_month_g3

0x9b87,	// (0x000979c7) frm_month_g4

0x9b8f,	// (0x000979cf) frm_month_g5

0x9b97,	// (0x000979d7) frm_month_g6

0x9b9f,	// (0x000979df) frm_month_g7

0xd52e,	// (0x0009b36e) frm_month_g8

0x9ba7,	// (0x000979e7) frm_month_g9

0x9bb0,	// (0x000979f0) frm_month_g10

0x9bb9,	// (0x000979f9) frm_month_g11

0x9bc2,	// (0x00097a02) frm_month_g12

0x9bcb,	// (0x00097a0b) frm_month_g13

0x9bd4,	// (0x00097a14) frm_month_g14

0x9bdd,	// (0x00097a1d) frm_month_g15

0x9be6,	// (0x00097a26) frm_month_g16

0x000f,

0xfede,	// (0x0009dd1e) frm_month_g

0x9bef,	// (0x00097a2f) cell_top_day_name_pane_t1

0x9bfe,	// (0x00097a3e) cell_area_left_week_number_pane_g1

0x9bef,	// (0x00097a2f) cell_area_left_week_number_pane_t1

0xab4e,	// (0x0009898e) cell_month_view_pane_g1

0x9c06,	// (0x00097a46) cell_month_view_pane_t1

0x0bfb,	// (0x0008ea3b) main_fps_pane

0xc93d,	// (0x0009a77d) cmail_ddmenu_btn02_pane_cp1_ParamLimits

0xc93d,	// (0x0009a77d) cmail_ddmenu_btn02_pane_cp1

0xc959,	// (0x0009a799) cmail_ddmenu_btn02_pane_cp2_ParamLimits

0xc959,	// (0x0009a799) cmail_ddmenu_btn02_pane_cp2

0x945d,	// (0x0009729d) cmail_ddmenu_btn02_pane_g2_ParamLimits

0x945d,	// (0x0009729d) cmail_ddmenu_btn02_pane_g2

0x0001,

0xfe08,	// (0x0009dc48) cmail_ddmenu_btn02_pane_g_ParamLimits

0xfe08,	// (0x0009dc48) cmail_ddmenu_btn02_pane_g

0x947e,	// (0x000972be) cmail_ddmenu_btn02_pane_t2_ParamLimits

0x947e,	// (0x000972be) cmail_ddmenu_btn02_pane_t2

0x0001,

0xfe0d,	// (0x0009dc4d) cmail_ddmenu_btn02_pane_t_ParamLimits

0xfe0d,	// (0x0009dc4d) cmail_ddmenu_btn02_pane_t

0x9c15,	// (0x00097a55) fps_text_pane_ParamLimits

0x9c15,	// (0x00097a55) fps_text_pane

0x9c2c,	// (0x00097a6c) main_fps_pane_g1_ParamLimits

0x9c2c,	// (0x00097a6c) main_fps_pane_g1

0x9c46,	// (0x00097a86) wait_bar_pane_cp010_ParamLimits

0x9c46,	// (0x00097a86) wait_bar_pane_cp010

0x9c57,	// (0x00097a97) fps_text_pane_t1_ParamLimits

0x9c57,	// (0x00097a97) fps_text_pane_t1

0xb5ec,	// (0x0009942c) cam4_image_uncrop_pane_g1

0xb5f5,	// (0x00099435) cam4_image_uncrop_pane_g2

0x6ab7,	// (0x000948f7) cam4_image_uncrop_pane_g3

0x6ac0,	// (0x00094900) cam4_image_uncrop_pane_g4

0x0003,

0xf8db,	// (0x0009d71b) cam4_image_uncrop_pane_g

0x9aec,	// (0x0009792c) dia3_listrow_pane_ParamLimits

0x0bfb,	// (0x0008ea3b) main_phob2_pane

0x8fb7,	// (0x00096df7) cell_tport_appsw_pane_cp02_ParamLimits

0x8fb7,	// (0x00096df7) cell_tport_appsw_pane_cp02

0x8fcb,	// (0x00096e0b) cell_tport_appsw_pane_cp03_ParamLimits

0x8fcb,	// (0x00096e0b) cell_tport_appsw_pane_cp03

0x0bfb,	// (0x0008ea3b) phob2_contact_card_pane

0x0bfb,	// (0x0008ea3b) phob2_listscroll_pane

0xd537,	// (0x0009b377) phob2_list_pane

0xd53f,	// (0x0009b37f) scroll_pane_cp034

0x9c6f,	// (0x00097aaf) phob2_cc_data_pane_ParamLimits

0x9c6f,	// (0x00097aaf) phob2_cc_data_pane

0x9c8e,	// (0x00097ace) phob2_cc_listscroll_pane_ParamLimits

0x9c8e,	// (0x00097ace) phob2_cc_listscroll_pane

0x9cac,	// (0x00097aec) list_double_large_graphic_phob2_pane_ParamLimits

0x9cac,	// (0x00097aec) list_double_large_graphic_phob2_pane

0x9cbe,	// (0x00097afe) list_double_large_graphic_phob2_pane_g1_ParamLimits

0x9cbe,	// (0x00097afe) list_double_large_graphic_phob2_pane_g1

0x9ccb,	// (0x00097b0b) list_double_large_graphic_phob2_pane_g2_ParamLimits

0x9ccb,	// (0x00097b0b) list_double_large_graphic_phob2_pane_g2

0x0001,

0xfeff,	// (0x0009dd3f) list_double_large_graphic_phob2_pane_g_ParamLimits

0xfeff,	// (0x0009dd3f) list_double_large_graphic_phob2_pane_g

0x9cd7,	// (0x00097b17) list_double_large_graphic_phob2_pane_t1_ParamLimits

0x9cd7,	// (0x00097b17) list_double_large_graphic_phob2_pane_t1

0x9cec,	// (0x00097b2c) list_double_large_graphic_phob2_pane_t2_ParamLimits

0x9cec,	// (0x00097b2c) list_double_large_graphic_phob2_pane_t2

0x0001,

0xff04,	// (0x0009dd44) list_double_large_graphic_phob2_pane_t_ParamLimits

0xff04,	// (0x0009dd44) list_double_large_graphic_phob2_pane_t

0x0bfb,	// (0x0008ea3b) list_highlight_pane_cp024

0xd547,	// (0x0009b387) phob2_cc_button_pane

0x9cfe,	// (0x00097b3e) phob2_cc_data_pane_g1_ParamLimits

0x9cfe,	// (0x00097b3e) phob2_cc_data_pane_g1

0x9d13,	// (0x00097b53) phob2_cc_data_pane_g2_ParamLimits

0x9d13,	// (0x00097b53) phob2_cc_data_pane_g2

0x0001,

0xff09,	// (0x0009dd49) phob2_cc_data_pane_g_ParamLimits

0xff09,	// (0x0009dd49) phob2_cc_data_pane_g

0x9d25,	// (0x00097b65) phob2_cc_data_pane_t1_ParamLimits

0x9d25,	// (0x00097b65) phob2_cc_data_pane_t1

0x9d3d,	// (0x00097b7d) phob2_cc_data_pane_t2_ParamLimits

0x9d3d,	// (0x00097b7d) phob2_cc_data_pane_t2

0x9d55,	// (0x00097b95) phob2_cc_data_pane_t3_ParamLimits

0x9d55,	// (0x00097b95) phob2_cc_data_pane_t3

0x0002,

0xff0e,	// (0x0009dd4e) phob2_cc_data_pane_t_ParamLimits

0xff0e,	// (0x0009dd4e) phob2_cc_data_pane_t

0xd54f,	// (0x0009b38f) phob2_cc_list_pane_ParamLimits

0xd54f,	// (0x0009b38f) phob2_cc_list_pane

0xb9c8,	// (0x00099808) scroll_pane_cp035_ParamLimits

0xb9c8,	// (0x00099808) scroll_pane_cp035

0xefd4,	// (0x0009ce14) bg_button_pane_cp033

0xd55b,	// (0x0009b39b) phob2_cc_button_pane_g1

0xd567,	// (0x0009b3a7) phob2_cc_button_pane_t1

0xd57c,	// (0x0009b3bc) phob2_cc_button_pane_t2

0x0001,

0xff15,	// (0x0009dd55) phob2_cc_button_pane_t

0x9d6d,	// (0x00097bad) list_double_large_graphic_phob2_cc_pane_ParamLimits

0x9d6d,	// (0x00097bad) list_double_large_graphic_phob2_cc_pane

0x9d7f,	// (0x00097bbf) list_double_large_graphic_phob2_cc_pane_g1_ParamLimits

0x9d7f,	// (0x00097bbf) list_double_large_graphic_phob2_cc_pane_g1

0x9d8b,	// (0x00097bcb) list_double_large_graphic_phob2_cc_pane_g2_ParamLimits

0x9d8b,	// (0x00097bcb) list_double_large_graphic_phob2_cc_pane_g2

0x9d97,	// (0x00097bd7) list_double_large_graphic_phob2_cc_pane_g3_ParamLimits

0x9d97,	// (0x00097bd7) list_double_large_graphic_phob2_cc_pane_g3

0x9da3,	// (0x00097be3) list_double_large_graphic_phob2_cc_pane_g4_ParamLimits

0x9da3,	// (0x00097be3) list_double_large_graphic_phob2_cc_pane_g4

0x9daf,	// (0x00097bef) list_double_large_graphic_phob2_cc_pane_g5_ParamLimits

0x9daf,	// (0x00097bef) list_double_large_graphic_phob2_cc_pane_g5

0x0004,

0xff1a,	// (0x0009dd5a) list_double_large_graphic_phob2_cc_pane_g_ParamLimits

0xff1a,	// (0x0009dd5a) list_double_large_graphic_phob2_cc_pane_g

0x9dbb,	// (0x00097bfb) list_double_large_graphic_phob2_cc_pane_t1_ParamLimits

0x9dbb,	// (0x00097bfb) list_double_large_graphic_phob2_cc_pane_t1

0x9de4,	// (0x00097c24) list_double_large_graphic_phob2_cc_pane_t2_ParamLimits

0x9de4,	// (0x00097c24) list_double_large_graphic_phob2_cc_pane_t2

0x0001,

0xff25,	// (0x0009dd65) list_double_large_graphic_phob2_cc_pane_t_ParamLimits

0xff25,	// (0x0009dd65) list_double_large_graphic_phob2_cc_pane_t

0xd58e,	// (0x0009b3ce) list_highlight_pane_cp025_ParamLimits

0xd58e,	// (0x0009b3ce) list_highlight_pane_cp025

0xefd4,	// (0x0009ce14) bg_button_pane_cp033_ParamLimits

0xd55b,	// (0x0009b39b) phob2_cc_button_pane_g1_ParamLimits

0xd567,	// (0x0009b3a7) phob2_cc_button_pane_t1_ParamLimits

0xd57c,	// (0x0009b3bc) phob2_cc_button_pane_t2_ParamLimits

0xff15,	// (0x0009dd55) phob2_cc_button_pane_t_ParamLimits

0x0e75,	// (0x0008ecb5) popup_wgtman_window

0xb7b5,	// (0x000995f5) scroll_pane_cp038

0x987d,	// (0x000976bd) wgtman_btn_pane_cp_01_ParamLimits

0x987d,	// (0x000976bd) wgtman_btn_pane_cp_01

0xd59c,	// (0x0009b3dc) wgtman_content_pane

0xd5a5,	// (0x0009b3e5) wgtman_heading_pane

0x0bfb,	// (0x0008ea3b) bg_heading_pane_cp02

0xd5ae,	// (0x0009b3ee) wgtman_heading_pane_g1

0xd5b6,	// (0x0009b3f6) wgtman_heading_pane_t1

0xd5c4,	// (0x0009b404) scroll_pane_cp036

0xd5cc,	// (0x0009b40c) wgtman_list_pane

0xd5d4,	// (0x0009b414) wgtman_list_pane_t1_ParamLimits

0xd5d4,	// (0x0009b414) wgtman_list_pane_t1

0xd8b0,	// (0x0009b6f0) cam4_grid_pane

0x7759,	// (0x00095599) bg_button_pane_cp015_ParamLimits

0x776b,	// (0x000955ab) bg_button_pane_cp016_ParamLimits

0x777e,	// (0x000955be) bg_button_pane_cp017_ParamLimits

0x77d6,	// (0x00095616) popup_vitu2_query_window_g3_ParamLimits

0x77d6,	// (0x00095616) popup_vitu2_query_window_g3

0x7893,	// (0x000956d3) popup_vitu2_query_window_t6_ParamLimits

0x7893,	// (0x000956d3) popup_vitu2_query_window_t6

0x78be,	// (0x000956fe) popup_vitu2_query_window_t7_ParamLimits

0x78be,	// (0x000956fe) popup_vitu2_query_window_t7

0xb5ec,	// (0x0009942c) cam4_grid_pane_g1

0xb5f5,	// (0x00099435) cam4_grid_pane_g2

0xd5f1,	// (0x0009b431) cam4_grid_pane_g3

0xd5fa,	// (0x0009b43a) cam4_grid_pane_g4

0x0003,

0xff2a,	// (0x0009dd6a) cam4_grid_pane_g

0x1c68,	// (0x0008faa8) aid_placing_vt_slider_lsc_ParamLimits

0x1f73,	// (0x0008fdb3) vidtel_button_pane_ParamLimits

0x1f73,	// (0x0008fdb3) vidtel_button_pane

0xd605,	// (0x0009b445) bg_button_pane_cp034

0x9e0d,	// (0x00097c4d) vidtel_button_pane_g1

0xd60f,	// (0x0009b44f) vidtel_button_pane_t1

0xb8e7,	// (0x00099727) aid_size_vtel_slider_touch

0xb9c8,	// (0x00099808) scroll_pane_cp039

0xc38e,	// (0x0009a1ce) ncim_query_button_pane_cp01_ParamLimits

0xc3ad,	// (0x0009a1ed) ncimui_query_pane_g1_ParamLimits

0xefd4,	// (0x0009ce14) input_focus_pane_cp012_ParamLimits

0xc3d2,	// (0x0009a212) ncim_query_entry_pane_t1_ParamLimits

0xb9c8,	// (0x00099808) scroll_pane_cp039_ParamLimits

0x2dc5,	// (0x00090c05) navi_pane_bcale_mc_g1

0x2dcd,	// (0x00090c0d) navi_pane_bcale_mc_t1

0xc9a2,	// (0x0009a7e2) main_sp_fs_email_pane_g1

0xc9aa,	// (0x0009a7ea) main_sp_fs_email_pane_g2

0x0001,

0xfcc6,	// (0x0009db06) main_sp_fs_email_pane_g

0xcee5,	// (0x0009ad25) list_single_cale_mrui_row_pane_g3_ParamLimits

0xcee5,	// (0x0009ad25) list_single_cale_mrui_row_pane_g3

0x94a6,	// (0x000972e6) list_single_recal_day_pane_g5_event_pane

0xd0b3,	// (0x0009aef3) list_single_recal_day_pane_g7

0xd61d,	// (0x0009b45d) list_recal_day_event_pane_cp01

0xd626,	// (0x0009b466) list_recal_vselct_arw_lo_pane_cp01

0xd62e,	// (0x0009b46e) list_recal_vselct_arw_up_pane_cp01

0xd636,	// (0x0009b476) list_recal_vselct_pane_cp01

0xb92f,	// (0x0009976f) list_recal_day_event_pane_cp01_g1

0xd640,	// (0x0009b480) list_recal_day_event_pane_cp01_t1

0xd0bb,	// (0x0009aefb) list_single_recal_day_pane_t1_ParamLimits

0xd0cd,	// (0x0009af0d) list_single_recal_day_pane_t2_ParamLimits

0xfe1d,	// (0x0009dc5d) list_single_recal_day_pane_t_ParamLimits

0xe187,	// (0x0009bfc7) bg_notes_pane_ParamLimits

0xe195,	// (0x0009bfd5) list_notes_pane_ParamLimits

0x11be,	// (0x0008effe) scroll_pane_cp06_ParamLimits

0xe1b7,	// (0x0009bff7) main_notes_pane_ParamLimits

0x0bfb,	// (0x0008ea3b) main_welc_pane

0x9e15,	// (0x00097c55) main_welc_body_pane_ParamLimits

0x9e15,	// (0x00097c55) main_welc_body_pane

0x9e2a,	// (0x00097c6a) main_welc_opti_pane_ParamLimits

0x9e2a,	// (0x00097c6a) main_welc_opti_pane

0x9e3f,	// (0x00097c7f) main_welc_pane_t1_ParamLimits

0x9e3f,	// (0x00097c7f) main_welc_pane_t1

0x9e56,	// (0x00097c96) main_welc_body_row_pane_ParamLimits

0x9e56,	// (0x00097c96) main_welc_body_row_pane

0x9e6a,	// (0x00097caa) main_welc_opti_row_pane_ParamLimits

0x9e6a,	// (0x00097caa) main_welc_opti_row_pane

0xd64e,	// (0x0009b48e) main_welc_opti_row_pane_g1

0xd656,	// (0x0009b496) main_welc_opti_row_pane_t1

0xd665,	// (0x0009b4a5) main_welc_body_row_pane_t1
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
	};

} // end of namespace AknLayoutScalable_Abrw_phl_apps_qhd_lsc_tch_Large
