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

#include "aknlayoutscalable_abrw_pvp4_apps_vga4_prt_tch_large.h"
#include "AknLayout2ScalableDecode.h"
namespace AknLayoutScalable_Apps { extern const TUint8 KByteCodedData_AknLayoutScalable_Elaf_pvp4_apps_vga4_prt_tch[]; }

namespace AknLayoutScalable_Abrw_pvp4_apps_vga4_prt_tch_Large
{

extern const TUint16 KDataLookup[AknLayoutScalable_Apps::E_TApiId_TableSize];
const SCompDataImplData KImplData = { KDataLookup, AknLayoutScalable_Apps::KByteCodedData_AknLayoutScalable_Elaf_pvp4_apps_vga4_prt_tch + 0x00082559 };

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
0x4ba7,	// (0x00087100) Screen

0x4bb3,	// (0x0008710c) application_window

0x4c07,	// (0x00087160) area_bottom_pane_ParamLimits

0x4c07,	// (0x00087160) area_bottom_pane

0x4c65,	// (0x000871be) area_top_pane_ParamLimits

0x4c65,	// (0x000871be) area_top_pane

0x4cc9,	// (0x00087222) call_video_uplink_pane_ParamLimits

0x4cc9,	// (0x00087222) call_video_uplink_pane

0x4d08,	// (0x00087261) main_pane_ParamLimits

0x4d08,	// (0x00087261) main_pane

0x0a97,	// (0x00082ff0) context_pane

0x7d66,	// (0x0008a2bf) navi_pane

0x7d8f,	// (0x0008a2e8) popup_cale_events_window_ParamLimits

0x7d8f,	// (0x0008a2e8) popup_cale_events_window

0x0aaa,	// (0x00083003) popup_mup_playback_window

0x7da7,	// (0x0008a300) signal_pane

0xef71,	// (0x000914ca) main_browser_pane

0xd372,	// (0x0008f8cb) main_burst_pane

0x7bb6,	// (0x0008a10f) main_calc_pane

0x0a33,	// (0x00082f8c) main_cale_day_pane

0x7bc3,	// (0x0008a11c) main_cale_month_pane

0x0a33,	// (0x00082f8c) main_cale_week_pane

0xd372,	// (0x0008f8cb) main_call_pane

0xec29,	// (0x00091182) main_call_poc_pane

0xd372,	// (0x0008f8cb) main_camera_pane

0xd372,	// (0x0008f8cb) main_chi_dic_pane

0xdb8a,	// (0x000900e3) main_clock_pane

0xec29,	// (0x00091182) main_fmradio_pane

0xd372,	// (0x0008f8cb) main_graph_messa_pane

0xec29,	// (0x00091182) main_help_pane

0xef71,	// (0x000914ca) main_im_pane

0xee84,	// (0x000913dd) main_image_pane_ParamLimits

0xee84,	// (0x000913dd) main_image_pane

0xec29,	// (0x00091182) main_location2_pane

0xd372,	// (0x0008f8cb) main_location_pane

0xee84,	// (0x000913dd) main_messa_pane

0xec29,	// (0x00091182) main_mp2_pane

0xd372,	// (0x0008f8cb) main_mp_pane

0xec29,	// (0x00091182) main_msg_pane

0xec29,	// (0x00091182) main_mup_eq_pane

0xec29,	// (0x00091182) main_mup_pane

0xef71,	// (0x000914ca) main_notes_pane

0xec29,	// (0x00091182) main_pec_pane

0xec29,	// (0x00091182) main_phob_pane

0xec29,	// (0x00091182) main_pinb_pane

0xec29,	// (0x00091182) main_postcard_pane

0xec29,	// (0x00091182) main_qdial_pane

0xd372,	// (0x0008f8cb) main_skin_pane

0xec29,	// (0x00091182) main_smil2_pane

0xd372,	// (0x0008f8cb) main_smil_pane

0xd372,	// (0x0008f8cb) main_video_pane

0xd372,	// (0x0008f8cb) main_video_tele_pane

0xee84,	// (0x000913dd) main_viewer_pane_ParamLimits

0xee84,	// (0x000913dd) main_viewer_pane

0xd372,	// (0x0008f8cb) main_vorec_pane

0x7c16,	// (0x0008a16f) popup_blid_sat_info_window_ParamLimits

0x7c16,	// (0x0008a16f) popup_blid_sat_info_window

0x7c3c,	// (0x0008a195) popup_dyc_status_message_window_ParamLimits

0x7c3c,	// (0x0008a195) popup_dyc_status_message_window

0x7c4c,	// (0x0008a1a5) popup_grid_large_graphic_window_ParamLimits

0x7c4c,	// (0x0008a1a5) popup_grid_large_graphic_window

0x7ce1,	// (0x0008a23a) popup_loc_request_window_ParamLimits

0x7ce1,	// (0x0008a23a) popup_loc_request_window

0x7d3a,	// (0x0008a293) popup_wml_address_window_ParamLimits

0x7d3a,	// (0x0008a293) popup_wml_address_window

0x7a8e,	// (0x00089fe7) call_muted_g1

0x7706,	// (0x00089c5f) popup_call_audio_conf_window_ParamLimits

0x7706,	// (0x00089c5f) popup_call_audio_conf_window

0x7a9e,	// (0x00089ff7) popup_call_audio_first_window_ParamLimits

0x7a9e,	// (0x00089ff7) popup_call_audio_first_window

0x7ade,	// (0x0008a037) popup_call_audio_in_window_ParamLimits

0x7ade,	// (0x0008a037) popup_call_audio_in_window

0x7b02,	// (0x0008a05b) popup_call_audio_out_window_ParamLimits

0x7b02,	// (0x0008a05b) popup_call_audio_out_window

0x7b24,	// (0x0008a07d) popup_call_audio_second_window_ParamLimits

0x7b24,	// (0x0008a07d) popup_call_audio_second_window

0x7b54,	// (0x0008a0ad) popup_call_audio_wait_window_ParamLimits

0x7b54,	// (0x0008a0ad) popup_call_audio_wait_window

0x7b75,	// (0x0008a0ce) popup_number_entry_window_ParamLimits

0x7b75,	// (0x0008a0ce) popup_number_entry_window

0xe7d3,	// (0x00090d2c) bg_popup_call_pane_cp05_ParamLimits

0xe7d3,	// (0x00090d2c) bg_popup_call_pane_cp05

0xe7f3,	// (0x00090d4c) popup_number_entry_window_t1

0xe806,	// (0x00090d5f) popup_number_entry_window_t2

0xe818,	// (0x00090d71) popup_number_entry_window_t3

0x0003,

0xf06b,	// (0x000915c4) popup_number_entry_window_t

0xe86d,	// (0x00090dc6) text_title_cp2

0xe880,	// (0x00090dd9) bg_popup_call_pane_cp_ParamLimits

0xe880,	// (0x00090dd9) bg_popup_call_pane_cp

0xe88e,	// (0x00090de7) call_thumbnail_pane

0xe896,	// (0x00090def) popup_call_audio_in_window_g1_ParamLimits

0xe896,	// (0x00090def) popup_call_audio_in_window_g1

0xe8a2,	// (0x00090dfb) popup_call_audio_in_window_g2_ParamLimits

0xe8a2,	// (0x00090dfb) popup_call_audio_in_window_g2

0xe8ae,	// (0x00090e07) popup_call_audio_in_window_g3_ParamLimits

0xe8ae,	// (0x00090e07) popup_call_audio_in_window_g3

0x0002,

0xf074,	// (0x000915cd) popup_call_audio_in_window_g_ParamLimits

0xf074,	// (0x000915cd) popup_call_audio_in_window_g

0xe8ba,	// (0x00090e13) popup_call_audio_in_window_t1_ParamLimits

0xe8ba,	// (0x00090e13) popup_call_audio_in_window_t1

0xe8d6,	// (0x00090e2f) popup_call_audio_in_window_t2_ParamLimits

0xe8d6,	// (0x00090e2f) popup_call_audio_in_window_t2

0xe8f2,	// (0x00090e4b) popup_call_audio_in_window_t3_ParamLimits

0xe8f2,	// (0x00090e4b) popup_call_audio_in_window_t3

0x0002,

0xf07b,	// (0x000915d4) popup_call_audio_in_window_t_ParamLimits

0xf07b,	// (0x000915d4) popup_call_audio_in_window_t

0xe880,	// (0x00090dd9) bg_popup_call_pane_cp01_ParamLimits

0xe880,	// (0x00090dd9) bg_popup_call_pane_cp01

0xe88e,	// (0x00090de7) call_thumbnail_pane_cp02

0xe905,	// (0x00090e5e) call_type_pane_cp022

0xe90d,	// (0x00090e66) popup_call_audio_out_window_g1_ParamLimits

0xe90d,	// (0x00090e66) popup_call_audio_out_window_g1

0xe91f,	// (0x00090e78) popup_call_audio_out_window_g2_ParamLimits

0xe91f,	// (0x00090e78) popup_call_audio_out_window_g2

0xe92b,	// (0x00090e84) popup_call_audio_out_window_g3_ParamLimits

0xe92b,	// (0x00090e84) popup_call_audio_out_window_g3

0x0002,

0xf082,	// (0x000915db) popup_call_audio_out_window_g_ParamLimits

0xf082,	// (0x000915db) popup_call_audio_out_window_g

0xe93d,	// (0x00090e96) popup_call_audio_out_window_t1_ParamLimits

0xe93d,	// (0x00090e96) popup_call_audio_out_window_t1

0xe955,	// (0x00090eae) popup_call_audio_out_window_t2_ParamLimits

0xe955,	// (0x00090eae) popup_call_audio_out_window_t2

0x0001,

0xf089,	// (0x000915e2) popup_call_audio_out_window_t_ParamLimits

0xf089,	// (0x000915e2) popup_call_audio_out_window_t

0xe96a,	// (0x00090ec3) bg_popup_call_pane_ParamLimits

0xe96a,	// (0x00090ec3) bg_popup_call_pane

0x4ee9,	// (0x00087442) call_thumbnail_pane_cp_ParamLimits

0x4ee9,	// (0x00087442) call_thumbnail_pane_cp

0xe9ee,	// (0x00090f47) call_type_pane_cp01_ParamLimits

0xe9ee,	// (0x00090f47) call_type_pane_cp01

0xea32,	// (0x00090f8b) popup_call_audio_first_window_g1_ParamLimits

0xea32,	// (0x00090f8b) popup_call_audio_first_window_g1

0xea7e,	// (0x00090fd7) popup_call_audio_first_window_g2_ParamLimits

0xea7e,	// (0x00090fd7) popup_call_audio_first_window_g2

0x0001,

0xf08e,	// (0x000915e7) popup_call_audio_first_window_g_ParamLimits

0xf08e,	// (0x000915e7) popup_call_audio_first_window_g

0xeac2,	// (0x0009101b) popup_call_audio_first_window_t1_ParamLimits

0xeac2,	// (0x0009101b) popup_call_audio_first_window_t1

0xeb6e,	// (0x000910c7) popup_call_audio_first_window_t4_ParamLimits

0xeb6e,	// (0x000910c7) popup_call_audio_first_window_t4

0xebfa,	// (0x00091153) popup_call_audio_first_window_t5_ParamLimits

0xebfa,	// (0x00091153) popup_call_audio_first_window_t5

0x0002,

0xf093,	// (0x000915ec) popup_call_audio_first_window_t_ParamLimits

0xf093,	// (0x000915ec) popup_call_audio_first_window_t

0xec29,	// (0x00091182) bg_popup_call_pane_cp02

0xec33,	// (0x0009118c) call_type_pane_cp023

0xec3b,	// (0x00091194) popup_call_audio_wait_window_g1

0xec43,	// (0x0009119c) popup_call_audio_wait_window_g2

0x0001,

0xf09a,	// (0x000915f3) popup_call_audio_wait_window_g

0xec4b,	// (0x000911a4) popup_call_audio_wait_window_t3

0xec59,	// (0x000911b2) bg_popup_call_pane_cp03_ParamLimits

0xec59,	// (0x000911b2) bg_popup_call_pane_cp03

0xecb9,	// (0x00091212) call_thumbnail_pane_cp011_ParamLimits

0xecb9,	// (0x00091212) call_thumbnail_pane_cp011

0xecc5,	// (0x0009121e) call_type_pane_cp034_ParamLimits

0xecc5,	// (0x0009121e) call_type_pane_cp034

0xed01,	// (0x0009125a) popup_call_audio_second_window_g1_ParamLimits

0xed01,	// (0x0009125a) popup_call_audio_second_window_g1

0xed3d,	// (0x00091296) popup_call_audio_second_window_g2_ParamLimits

0xed3d,	// (0x00091296) popup_call_audio_second_window_g2

0x0001,

0xf09f,	// (0x000915f8) popup_call_audio_second_window_g_ParamLimits

0xf09f,	// (0x000915f8) popup_call_audio_second_window_g

0xed79,	// (0x000912d2) popup_call_audio_second_window_t1_ParamLimits

0xed79,	// (0x000912d2) popup_call_audio_second_window_t1

0xedfa,	// (0x00091353) popup_call_audio_second_window_t2_ParamLimits

0xedfa,	// (0x00091353) popup_call_audio_second_window_t2

0xee30,	// (0x00091389) popup_call_audio_second_window_t3_ParamLimits

0xee30,	// (0x00091389) popup_call_audio_second_window_t3

0x0002,

0xf0a4,	// (0x000915fd) popup_call_audio_second_window_t_ParamLimits

0xf0a4,	// (0x000915fd) popup_call_audio_second_window_t

0xec29,	// (0x00091182) bg_popup_call_pane_cp04

0xee66,	// (0x000913bf) list_conf_pane

0xee6e,	// (0x000913c7) popup_call_audio_conf_window_t1

0xee7c,	// (0x000913d5) call_thumbnail_pane_g1

0xee84,	// (0x000913dd) bg_pinb_pane_ParamLimits

0xee84,	// (0x000913dd) bg_pinb_pane

0xee92,	// (0x000913eb) find_pinb_pane

0xee84,	// (0x000913dd) listscroll_pinb_pane_ParamLimits

0xee84,	// (0x000913dd) listscroll_pinb_pane

0xee9c,	// (0x000913f5) pinb_bg_pane_g1

0xee9c,	// (0x000913f5) pinb_bg_pane_g2

0xee9c,	// (0x000913f5) pinb_bg_pane_g3

0xee9c,	// (0x000913f5) pinb_bg_pane_g4

0xee9c,	// (0x000913f5) pinb_bg_pane_g5

0xee9c,	// (0x000913f5) pinb_bg_pane_g6

0xee9c,	// (0x000913f5) pinb_bg_pane_g7

0xee9c,	// (0x000913f5) pinb_bg_pane_g8

0xee9c,	// (0x000913f5) pinb_bg_pane_g9

0xee9c,	// (0x000913f5) pinb_bg_pane_g10

0x0009,

0xf0ab,	// (0x00091604) pinb_bg_pane_g

0xe7c9,	// (0x00090d22) grid_pinb_pane

0xe7c9,	// (0x00090d22) list_pinb_pane

0xe82a,	// (0x00090d83) scroll_pane_cp01_ParamLimits

0xe82a,	// (0x00090d83) scroll_pane_cp01

0xeea6,	// (0x000913ff) find_pinb_pane_g1_ParamLimits

0xeea6,	// (0x000913ff) find_pinb_pane_g1

0xeebe,	// (0x00091417) find_pinb_pane_t1

0xeed0,	// (0x00091429) find_pinb_pane_t2

0x0001,

0xf0c5,	// (0x0009161e) find_pinb_pane_t

0xeee5,	// (0x0009143e) input_focus_pane_cp01_ParamLimits

0xeee5,	// (0x0009143e) input_focus_pane_cp01

0xeef1,	// (0x0009144a) cell_pinb_pane_ParamLimits

0xeef1,	// (0x0009144a) cell_pinb_pane

0xeeff,	// (0x00091458) cell_pinb_pane_g1_ParamLimits

0xeeff,	// (0x00091458) cell_pinb_pane_g1

0xef0d,	// (0x00091466) cell_pinb_pane_g2_ParamLimits

0xef0d,	// (0x00091466) cell_pinb_pane_g2

0xef0d,	// (0x00091466) cell_pinb_pane_g3_ParamLimits

0xef0d,	// (0x00091466) cell_pinb_pane_g3

0x0002,

0xf0ca,	// (0x00091623) cell_pinb_pane_g_ParamLimits

0xf0ca,	// (0x00091623) cell_pinb_pane_g

0xec29,	// (0x00091182) grid_highlight_pane_cp01

0xeef1,	// (0x0009144a) list_pinb_item_pane_ParamLimits

0xeef1,	// (0x0009144a) list_pinb_item_pane

0xe7c9,	// (0x00090d22) list_highlight_pane_cp02

0xef1b,	// (0x00091474) list_pinb_item_pane_g1_ParamLimits

0xef1b,	// (0x00091474) list_pinb_item_pane_g1

0xef0d,	// (0x00091466) list_pinb_item_pane_g2_ParamLimits

0xef0d,	// (0x00091466) list_pinb_item_pane_g2

0xeeff,	// (0x00091458) list_pinb_item_pane_g3_ParamLimits

0xeeff,	// (0x00091458) list_pinb_item_pane_g3

0xef0d,	// (0x00091466) list_pinb_item_pane_g4_ParamLimits

0xef0d,	// (0x00091466) list_pinb_item_pane_g4

0x0003,

0xf0d1,	// (0x0009162a) list_pinb_item_pane_g_ParamLimits

0xf0d1,	// (0x0009162a) list_pinb_item_pane_g

0xef29,	// (0x00091482) list_pinb_item_pane_t1_ParamLimits

0xef29,	// (0x00091482) list_pinb_item_pane_t1

0x4f27,	// (0x00087480) calc_display_pane

0x4f45,	// (0x0008749e) calc_paper_pane

0x4f61,	// (0x000874ba) grid_calc_pane

0xec29,	// (0x00091182) bg_list_pane_cp01

0x4f8d,	// (0x000874e6) clock_g1

0x4f95,	// (0x000874ee) clock_g2

0x0001,

0xf0da,	// (0x00091633) clock_g

0x4f9f,	// (0x000874f8) clock_t1_ParamLimits

0x4f9f,	// (0x000874f8) clock_t1

0x4fb4,	// (0x0008750d) clock_t2_ParamLimits

0x4fb4,	// (0x0008750d) clock_t2

0x4fc6,	// (0x0008751f) clock_t3_ParamLimits

0x4fc6,	// (0x0008751f) clock_t3

0x4fd8,	// (0x00087531) clock_t4_ParamLimits

0x4fd8,	// (0x00087531) clock_t4

0x4fea,	// (0x00087543) clock_t5_ParamLimits

0x4fea,	// (0x00087543) clock_t5

0x4fff,	// (0x00087558) clock_t6_ParamLimits

0x4fff,	// (0x00087558) clock_t6

0x5011,	// (0x0008756a) clock_t7_ParamLimits

0x5011,	// (0x0008756a) clock_t7

0x5023,	// (0x0008757c) clock_t8_ParamLimits

0x5023,	// (0x0008757c) clock_t8

0x5039,	// (0x00087592) clock_t9_ParamLimits

0x5039,	// (0x00087592) clock_t9

0x0008,

0xf0df,	// (0x00091638) clock_t_ParamLimits

0xf0df,	// (0x00091638) clock_t

0xef3d,	// (0x00091496) popup_clock_analogue_window_cp02

0xef3d,	// (0x00091496) popup_clock_digital_window_cp01

0xec29,	// (0x00091182) listscroll_help_pane

0xec29,	// (0x00091182) phob_pre_status_pane

0xef45,	// (0x0009149e) grid_qdial_pane

0x504f,	// (0x000875a8) listscroll_mce_pane

0xee84,	// (0x000913dd) bg_notes_pane

0xef4f,	// (0x000914a8) list_notes_pane

0x506d,	// (0x000875c6) scroll_pane_cp06

0xef5d,	// (0x000914b6) bg_calc_paper_pane

0x507c,	// (0x000875d5) list_calc_pane

0xef71,	// (0x000914ca) bg_calc_display_pane

0x5096,	// (0x000875ef) calc_display_pane_t1

0x50ab,	// (0x00087604) calc_display_pane_t2

0x50c0,	// (0x00087619) calc_display_pane_t3

0x0002,

0xf0f2,	// (0x0009164b) calc_display_pane_t

0x50d2,	// (0x0008762b) cell_calc_pane_ParamLimits

0x50d2,	// (0x0008762b) cell_calc_pane

0xef7d,	// (0x000914d6) bg_calc_paper_pane_g1

0xef89,	// (0x000914e2) bg_calc_paper_pane_g2

0xef95,	// (0x000914ee) bg_calc_paper_pane_g3

0xefa1,	// (0x000914fa) bg_calc_paper_pane_g4

0xefad,	// (0x00091506) bg_calc_paper_pane_g5

0x5101,	// (0x0008765a) bg_calc_paper_pane_g6

0x5112,	// (0x0008766b) bg_calc_paper_pane_g7

0x5123,	// (0x0008767c) bg_calc_paper_pane_g8

0x0007,

0xf0f9,	// (0x00091652) bg_calc_paper_pane_g

0x5134,	// (0x0008768d) calc_bg_paper_pane_g9

0x5145,	// (0x0008769e) list_calc_item_pane_ParamLimits

0x5145,	// (0x0008769e) list_calc_item_pane

0xefb9,	// (0x00091512) list_calc_item_pane_g1

0x5166,	// (0x000876bf) list_calc_item_pane_t1_ParamLimits

0x5166,	// (0x000876bf) list_calc_item_pane_t1

0x5178,	// (0x000876d1) list_calc_item_pane_t2_ParamLimits

0x5178,	// (0x000876d1) list_calc_item_pane_t2

0x0001,

0xf10a,	// (0x00091663) list_calc_item_pane_t_ParamLimits

0xf10a,	// (0x00091663) list_calc_item_pane_t

0xee9c,	// (0x000913f5) cell_calc_pane_g1

0xefc6,	// (0x0009151f) grid_highlight_pane_cp02

0x20a3,	// (0x000845fc) bg_calc_display_pane_g1

0x51a8,	// (0x00087701) bg_calc_display_pane_g2

0x2091,	// (0x000845ea) bg_calc_display_pane_g3

0x0002,

0xf114,	// (0x0009166d) bg_calc_display_pane_g

0x51b2,	// (0x0008770b) cell_qdial_pane_ParamLimits

0x51b2,	// (0x0008770b) cell_qdial_pane

0x51c8,	// (0x00087721) cell_qdial_pane_g1_ParamLimits

0x51c8,	// (0x00087721) cell_qdial_pane_g1

0x51d5,	// (0x0008772e) cell_qdial_pane_g2_ParamLimits

0x51d5,	// (0x0008772e) cell_qdial_pane_g2

0xefe8,	// (0x00091541) cell_qdial_pane_g3_ParamLimits

0xefe8,	// (0x00091541) cell_qdial_pane_g3

0x0003,

0xf11b,	// (0x00091674) cell_qdial_pane_g_ParamLimits

0xf11b,	// (0x00091674) cell_qdial_pane_g

0x51f3,	// (0x0008774c) cell_qdial_pane_t1_ParamLimits

0x51f3,	// (0x0008774c) cell_qdial_pane_t1

0x520b,	// (0x00087764) cell_qdial_pane_t2_ParamLimits

0x520b,	// (0x00087764) cell_qdial_pane_t2

0x521e,	// (0x00087777) cell_qdial_pane_t3_ParamLimits

0x521e,	// (0x00087777) cell_qdial_pane_t3

0x0002,

0xf124,	// (0x0009167d) cell_qdial_pane_t_ParamLimits

0xf124,	// (0x0009167d) cell_qdial_pane_t

0xec29,	// (0x00091182) grid_highlight_pane_cp04

0xeffd,	// (0x00091556) thumbnail_qdial_pane_ParamLimits

0xeffd,	// (0x00091556) thumbnail_qdial_pane

0xf059,	// (0x000915b2) list_help_pane

0xf062,	// (0x000915bb) scroll_pane_cp02

0x5231,	// (0x0008778a) help_list_pane_t1_ParamLimits

0x5231,	// (0x0008778a) help_list_pane_t1

0x5258,	// (0x000877b1) bg_notes_pane_g2

0x5260,	// (0x000877b9) bg_notes_pane_g3

0x5268,	// (0x000877c1) notes_bg_pane_g1

0x5270,	// (0x000877c9) notes_bg_pane_g4

0x5278,	// (0x000877d1) notes_bg_pane_g5

0x5280,	// (0x000877d9) notes_bg_pane_g6

0x5288,	// (0x000877e1) notes_bg_pane_g7

0x5290,	// (0x000877e9) notes_bg_pane_g8

0x5298,	// (0x000877f1) notes_bg_pane_g9

0x0006,

0xf142,	// (0x0009169b) notes_bg_pane_g

0x52a0,	// (0x000877f9) list_notes_text_pane_ParamLimits

0x52a0,	// (0x000877f9) list_notes_text_pane

0xd2c5,	// (0x0008f81e) list_notes_text_pane_g1

0x52c8,	// (0x00087821) list_notes_text_pane_t1

0x52d6,	// (0x0008782f) listscroll_cale_week_pane

0x5302,	// (0x0008785b) bg_cale_heading_pane

0x532b,	// (0x00087884) bg_cale_pane_cp01

0x534d,	// (0x000878a6) cale_week_corner_pane

0x536c,	// (0x000878c5) cale_week_day_heading_pane

0x539a,	// (0x000878f3) cale_week_scroll_pane_g1

0x53be,	// (0x00087917) cale_week_scroll_pane_g2

0x53d6,	// (0x0008792f) cale_week_scroll_pane_g3

0x53ee,	// (0x00087947) cale_week_scroll_pane_g4

0x5406,	// (0x0008795f) cale_week_scroll_pane_g5

0x541e,	// (0x00087977) cale_week_scroll_pane_g6

0x543e,	// (0x00087997) cale_week_scroll_pane_g7

0x545e,	// (0x000879b7) cale_week_scroll_pane_g8

0x547e,	// (0x000879d7) cale_week_scroll_pane_g9

0x549b,	// (0x000879f4) cale_week_scroll_pane_g10

0x54b8,	// (0x00087a11) cale_week_scroll_pane_g11

0x54d7,	// (0x00087a30) cale_week_scroll_pane_g12

0x54fc,	// (0x00087a55) cale_week_scroll_pane_g13

0x5525,	// (0x00087a7e) cale_week_scroll_pane_g14

0x554e,	// (0x00087aa7) cale_week_scroll_pane_g15

0x000f,

0xf151,	// (0x000916aa) cale_week_scroll_pane_g

0x5597,	// (0x00087af0) cale_week_time_pane

0x55b7,	// (0x00087b10) grid_cale_week_pane

0xd2fa,	// (0x0008f853) scroll_pane_cp08

0x55e8,	// (0x00087b41) cell_cale_week_pane_ParamLimits

0x55e8,	// (0x00087b41) cell_cale_week_pane

0x5678,	// (0x00087bd1) cale_week_day_heading_pane_t1

0x56a0,	// (0x00087bf9) cale_week_day_heading_pane_t2

0x56cd,	// (0x00087c26) cale_week_day_heading_pane_t3

0x56fa,	// (0x00087c53) cale_week_day_heading_pane_t4

0x5727,	// (0x00087c80) cale_week_day_heading_pane_t5

0x5754,	// (0x00087cad) cale_week_day_heading_pane_t6

0x5781,	// (0x00087cda) cale_week_day_heading_pane_t7

0x0006,

0xf172,	// (0x000916cb) cale_week_day_heading_pane_t

0xd317,	// (0x0008f870) bg_cale_side_pane

0x57a9,	// (0x00087d02) cale_week_time_pane_t1

0x57cd,	// (0x00087d26) cale_week_time_pane_t2

0x57f1,	// (0x00087d4a) cale_week_time_pane_t3

0x5815,	// (0x00087d6e) cale_week_time_pane_t4

0x5839,	// (0x00087d92) cale_week_time_pane_t5

0x585f,	// (0x00087db8) cale_week_time_pane_t6

0x5887,	// (0x00087de0) cale_week_time_pane_t7

0x58b3,	// (0x00087e0c) cale_week_time_pane_t8

0x0007,

0xf181,	// (0x000916da) cale_week_time_pane_t

0x58e3,	// (0x00087e3c) cell_cale_week_pane_g2

0x5907,	// (0x00087e60) cell_cale_week_pane_g3_ParamLimits

0x5907,	// (0x00087e60) cell_cale_week_pane_g3

0xd325,	// (0x0008f87e) grid_highlight_pane_cp07

0xd32d,	// (0x0008f886) listscroll_gms_pane

0xd337,	// (0x0008f890) grid_gms_pane

0xd340,	// (0x0008f899) listscroll_gms_pane_g1

0xd348,	// (0x0008f8a1) listscroll_gms_pane_g2

0x0001,

0xf192,	// (0x000916eb) listscroll_gms_pane_g

0x591f,	// (0x00087e78) scroll_pane_cp010

0x592a,	// (0x00087e83) cell_gms_pane_ParamLimits

0x592a,	// (0x00087e83) cell_gms_pane

0x593d,	// (0x00087e96) cell_gms_pane_g1

0xd350,	// (0x0008f8a9) cell_gms_pane_g2

0xd358,	// (0x0008f8b1) cell_gms_pane_g3

0xd361,	// (0x0008f8ba) cell_gms_pane_g4

0x0003,

0xf197,	// (0x000916f0) cell_gms_pane_g

0xd36a,	// (0x0008f8c3) grid_highlight_pane_cp09

0x7a12,	// (0x00089f6b) phob_pre_status_pane_g1

0x7a1a,	// (0x00089f73) phob_pre_status_pane_g2

0x7a22,	// (0x00089f7b) phob_pre_status_pane_g3

0x7a2a,	// (0x00089f83) phob_pre_status_pane_g4

0x0004,

0xf560,	// (0x00091ab9) phob_pre_status_pane_g

0x7a3a,	// (0x00089f93) phob_pre_status_pane_t1

0x7a4a,	// (0x00089fa3) phob_pre_status_pane_t2

0x7a5a,	// (0x00089fb3) phob_pre_status_pane_t3

0x0002,

0xf56b,	// (0x00091ac4) phob_pre_status_pane_t

0xd372,	// (0x0008f8cb) bg_list_pane_cp05

0x594d,	// (0x00087ea6) grid_vorec_pane

0x5957,	// (0x00087eb0) vorec_t1

0x5965,	// (0x00087ebe) vorec_t2

0x5973,	// (0x00087ecc) vorec_t3

0x5981,	// (0x00087eda) vorec_t4

0xcd8e,	// (0x0008f2e7) vorec_t5

0xcd9c,	// (0x0008f2f5) vorec_t6

0x0004,

0xf1a0,	// (0x000916f9) vorec_t

0xcdaa,	// (0x0008f303) wait_bar_pane_cp01

0x599d,	// (0x00087ef6) cell_vorec_pane_ParamLimits

0x599d,	// (0x00087ef6) cell_vorec_pane

0x59b2,	// (0x00087f0b) cell_vorec_pane_g1

0xec29,	// (0x00091182) grid_highlight_pane_cp05

0xeef1,	// (0x0009144a) cams_zoom_pane

0xeef1,	// (0x0009144a) image_vga_pane

0xef0d,	// (0x00091466) main_camera_pane_g1

0xef0d,	// (0x00091466) main_camera_pane_g2

0xef0d,	// (0x00091466) main_camera_pane_g3

0xef0d,	// (0x00091466) main_camera_pane_g4

0xef0d,	// (0x00091466) main_camera_pane_g5

0xef0d,	// (0x00091466) main_camera_pane_g6

0xef0d,	// (0x00091466) main_camera_pane_g7

0x0007,

0xf1ab,	// (0x00091704) main_camera_pane_g

0xd37a,	// (0x0008f8d3) main_camera_pane_t1

0xd37a,	// (0x0008f8d3) main_camera_pane_t2

0x0001,

0xf1bc,	// (0x00091715) main_camera_pane_t

0x59bc,	// (0x00087f15) cams_zoom_pane_cp_ParamLimits

0x59bc,	// (0x00087f15) cams_zoom_pane_cp

0x59ea,	// (0x00087f43) image_cif_pane_ParamLimits

0x59ea,	// (0x00087f43) image_cif_pane

0xe7c9,	// (0x00090d22) image_subqcif_pane

0x59f8,	// (0x00087f51) main_video_pane_g1_ParamLimits

0x59f8,	// (0x00087f51) main_video_pane_g1

0x5a20,	// (0x00087f79) main_video_pane_g2_ParamLimits

0x5a20,	// (0x00087f79) main_video_pane_g2

0x5a53,	// (0x00087fac) main_video_pane_g3_ParamLimits

0x5a53,	// (0x00087fac) main_video_pane_g3

0x5a53,	// (0x00087fac) main_video_pane_g4_ParamLimits

0x5a53,	// (0x00087fac) main_video_pane_g4

0x5a81,	// (0x00087fda) main_video_pane_g5_ParamLimits

0x5a81,	// (0x00087fda) main_video_pane_g5

0xd38e,	// (0x0008f8e7) main_video_pane_g6_ParamLimits

0xd38e,	// (0x0008f8e7) main_video_pane_g6

0x0006,

0xf1c1,	// (0x0009171a) main_video_pane_g_ParamLimits

0xf1c1,	// (0x0009171a) main_video_pane_g

0x5a9d,	// (0x00087ff6) main_video_pane_t1_ParamLimits

0x5a9d,	// (0x00087ff6) main_video_pane_t1

0xd3a8,	// (0x0008f901) cams_zoom_pane_g1

0xd3a8,	// (0x0008f901) cams_zoom_pane_g2

0xd3a8,	// (0x0008f901) cams_zoom_pane_g3

0xd3a8,	// (0x0008f901) cams_zoom_pane_g4

0x0003,

0xf1d0,	// (0x00091729) cams_zoom_pane_g

0x5ae3,	// (0x0008803c) grid_cams_pane

0x5af1,	// (0x0008804a) linegrid_cams_pane

0x5afd,	// (0x00088056) cell_cams_pane_ParamLimits

0x5afd,	// (0x00088056) cell_cams_pane

0xd3b2,	// (0x0008f90b) cams_burst_image_pane

0xd3ba,	// (0x0008f913) cell_cams_pane_g1

0xec29,	// (0x00091182) grid_highlight_pane_cp03

0xee9c,	// (0x000913f5) mp_bg_pane_g1

0xe7c9,	// (0x00090d22) bg_list_pane_cp03

0xe7c9,	// (0x00090d22) bg_mp_pane

0xe7c9,	// (0x00090d22) grid_mp_pane

0xd3a8,	// (0x0008f901) media_player_g1

0xd911,	// (0x0008fe6a) media_player_t1

0xd911,	// (0x0008fe6a) media_player_t2

0xd911,	// (0x0008fe6a) media_player_t3

0xd911,	// (0x0008fe6a) media_player_t4

0xd911,	// (0x0008fe6a) media_player_t5

0xd911,	// (0x0008fe6a) media_player_t6

0xd911,	// (0x0008fe6a) media_player_t7

0x0006,

0xf54a,	// (0x00091aa3) media_player_t

0xe7c9,	// (0x00090d22) wait_bar_pane_cp02

0xf52f,	// (0x00091a88) main_usb_pane_t

0xdb8a,	// (0x000900e3) cell_mp_pane

0xee9c,	// (0x000913f5) cell_mp_pane_g1

0xec29,	// (0x00091182) grid_highlight_pane_cp06

0xd3d6,	// (0x0008f92f) grid_skin_colour_pane

0xd3de,	// (0x0008f937) list_highlight_pane_cp03

0x5b12,	// (0x0008806b) skin_g1

0xd3e6,	// (0x0008f93f) skin_t1

0xd3f5,	// (0x0008f94e) skin_t2

0x0001,

0xf1fe,	// (0x00091757) skin_t

0x5b1c,	// (0x00088075) cell_skin_colour_pane_ParamLimits

0x5b1c,	// (0x00088075) cell_skin_colour_pane

0xd403,	// (0x0008f95c) cell_skin_colour_pane_g1

0x5b9c,	// (0x000880f5) call_video_g1_ParamLimits

0x5b9c,	// (0x000880f5) call_video_g1

0x5bac,	// (0x00088105) call_video_g2_ParamLimits

0x5bac,	// (0x00088105) call_video_g2

0x0001,

0xf203,	// (0x0009175c) call_video_g_ParamLimits

0xf203,	// (0x0009175c) call_video_g

0x5bfc,	// (0x00088155) call_video_uplink_pane_cp1_ParamLimits

0x5bfc,	// (0x00088155) call_video_uplink_pane_cp1

0xd415,	// (0x0008f96e) call_video_uplink_pane_cp2

0x5cca,	// (0x00088223) video_down_crop_pane_ParamLimits

0x5cca,	// (0x00088223) video_down_crop_pane

0x5dbc,	// (0x00088315) video_down_pane_ParamLimits

0x5dbc,	// (0x00088315) video_down_pane

0xd41d,	// (0x0008f976) video_down_subqcif_pane_ParamLimits

0xd41d,	// (0x0008f976) video_down_subqcif_pane

0xd437,	// (0x0008f990) video_down_subqcif_pane_cp_ParamLimits

0xd437,	// (0x0008f990) video_down_subqcif_pane_cp

0xd45f,	// (0x0008f9b8) im_reading_pane_ParamLimits

0xd45f,	// (0x0008f9b8) im_reading_pane

0x5ed9,	// (0x00088432) im_writing_pane_ParamLimits

0x5ed9,	// (0x00088432) im_writing_pane

0x5ef7,	// (0x00088450) im_reading_pane_t1

0xd479,	// (0x0008f9d2) list_im_pane

0xd48a,	// (0x0008f9e3) scroll_pane_cp07

0x5f39,	// (0x00088492) im_writing_pane_t1_ParamLimits

0x5f39,	// (0x00088492) im_writing_pane_t1

0xd4a3,	// (0x0008f9fc) im_writing_pane_t2_ParamLimits

0xd4a3,	// (0x0008f9fc) im_writing_pane_t2

0x0001,

0xf20d,	// (0x00091766) im_writing_pane_t_ParamLimits

0xf20d,	// (0x00091766) im_writing_pane_t

0xec29,	// (0x00091182) input_focus_pane_cp04

0xec29,	// (0x00091182) input_focus_pane_cp05

0x5f4b,	// (0x000884a4) list_im_single_pane_ParamLimits

0x5f4b,	// (0x000884a4) list_im_single_pane

0x5f64,	// (0x000884bd) list_single_im_pane_t1

0xd372,	// (0x0008f8cb) blid_accuracy_pane

0xd372,	// (0x0008f8cb) blid_compass_pane

0x09eb,	// (0x00082f44) main_location_t1

0x09eb,	// (0x00082f44) main_location_t2

0x09eb,	// (0x00082f44) main_location_t3

0x0002,

0xf559,	// (0x00091ab2) main_location_t

0xec29,	// (0x00091182) aid_levels_location

0xee9c,	// (0x000913f5) blid_accuracy_pane_g1

0xee9c,	// (0x000913f5) blid_accuracy_pane_g2

0x0001,

0xf261,	// (0x000917ba) blid_accuracy_pane_g

0xd4eb,	// (0x0008fa44) wml_content_pane

0xd529,	// (0x0008fa82) wml_button_pane_ParamLimits

0xd529,	// (0x0008fa82) wml_button_pane

0x5f73,	// (0x000884cc) wml_list_single_large_pane_ParamLimits

0x5f73,	// (0x000884cc) wml_list_single_large_pane

0x5f95,	// (0x000884ee) wml_list_single_medium_pane_ParamLimits

0x5f95,	// (0x000884ee) wml_list_single_medium_pane

0x5fb8,	// (0x00088511) wml_list_single_small_pane_ParamLimits

0x5fb8,	// (0x00088511) wml_list_single_small_pane

0xd53d,	// (0x0008fa96) wml_selection_box_pane_ParamLimits

0xd53d,	// (0x0008fa96) wml_selection_box_pane

0xd550,	// (0x0008faa9) wml_list_single_pane_t1

0xd55f,	// (0x0008fab8) wml_list_single_medium_pane_t1

0xd56e,	// (0x0008fac7) wml_list_single_large_pane_t1

0xd57d,	// (0x0008fad6) input_focus_pane_cp02_ParamLimits

0xd57d,	// (0x0008fad6) input_focus_pane_cp02

0xd590,	// (0x0008fae9) wml_selection_box_pane_g1

0xd599,	// (0x0008faf2) wml_selection_box_pane_t1_ParamLimits

0xd599,	// (0x0008faf2) wml_selection_box_pane_t1

0xee84,	// (0x000913dd) bg_wml_button_pane_ParamLimits

0xee84,	// (0x000913dd) bg_wml_button_pane

0xd5b1,	// (0x0008fb0a) wml_button_pane_g1

0xd5b9,	// (0x0008fb12) wml_button_pane_t1

0xd5b1,	// (0x0008fb0a) wml_button_bg_pane_g1

0xd5c9,	// (0x0008fb22) wml_button_bg_pane_g2

0xd5d1,	// (0x0008fb2a) wml_button_bg_pane_g3

0xd5d9,	// (0x0008fb32) wml_button_bg_pane_g4

0xd5e1,	// (0x0008fb3a) wml_button_bg_pane_g5

0xd5e9,	// (0x0008fb42) wml_button_bg_pane_g6

0xd5f1,	// (0x0008fb4a) wml_button_bg_pane_g7

0xd5f9,	// (0x0008fb52) wml_button_bg_pane_g8

0xd601,	// (0x0008fb5a) wml_button_bg_pane_g9

0x0008,

0xf212,	// (0x0009176b) wml_button_bg_pane_g

0x5fe0,	// (0x00088539) bg_list_pane_cp02

0xd609,	// (0x0008fb62) mce_header_pane_ParamLimits

0xd609,	// (0x0008fb62) mce_header_pane

0xd61f,	// (0x0008fb78) mce_icon_pane

0xd61f,	// (0x0008fb78) mce_image_pane

0xd628,	// (0x0008fb81) mce_text_pane_ParamLimits

0xd628,	// (0x0008fb81) mce_text_pane

0x5fe8,	// (0x00088541) scroll_pane_cp03

0xd521,	// (0x0008fa7a) scroll_pane_cp04

0xd63b,	// (0x0008fb94) scroll_pane_cp05_ParamLimits

0xd63b,	// (0x0008fb94) scroll_pane_cp05

0x5ff0,	// (0x00088549) mce_header_field_pane_ParamLimits

0x5ff0,	// (0x00088549) mce_header_field_pane

0x6012,	// (0x0008856b) mce_header_field_pane_2_ParamLimits

0x6012,	// (0x0008856b) mce_header_field_pane_2

0x6028,	// (0x00088581) mce_header_field_pane_3

0xd647,	// (0x0008fba0) list_single_mce_message_pane_ParamLimits

0xd647,	// (0x0008fba0) list_single_mce_message_pane

0xd656,	// (0x0008fbaf) list_single_mce_smart_pane_ParamLimits

0xd656,	// (0x0008fbaf) list_single_mce_smart_pane

0xd670,	// (0x0008fbc9) input_focus_pane_cp03

0xd679,	// (0x0008fbd2) list_header_data_pane

0x6030,	// (0x00088589) mce_header_field_pane_t1

0x603e,	// (0x00088597) list_single_mce_header_pane_ParamLimits

0x603e,	// (0x00088597) list_single_mce_header_pane

0xd681,	// (0x0008fbda) list_single_mce_header_pane_t1

0xd690,	// (0x0008fbe9) list_single_mce_message_pane_g1

0xd698,	// (0x0008fbf1) list_single_mce_message_pane_t1

0x6074,	// (0x000885cd) bg_cale_heading_pane_cp01_ParamLimits

0x6074,	// (0x000885cd) bg_cale_heading_pane_cp01

0xd6a6,	// (0x0008fbff) bg_cale_pane_cp02_ParamLimits

0xd6a6,	// (0x0008fbff) bg_cale_pane_cp02

0x60c6,	// (0x0008861f) cale_month_corner_pane

0x60e5,	// (0x0008863e) cale_month_day_heading_pane_ParamLimits

0x60e5,	// (0x0008863e) cale_month_day_heading_pane

0x6147,	// (0x000886a0) cale_month_pane_g1_ParamLimits

0x6147,	// (0x000886a0) cale_month_pane_g1

0x618e,	// (0x000886e7) cale_month_pane_g2_ParamLimits

0x618e,	// (0x000886e7) cale_month_pane_g2

0x61c6,	// (0x0008871f) cale_month_pane_g3_ParamLimits

0x61c6,	// (0x0008871f) cale_month_pane_g3

0x621a,	// (0x00088773) cale_month_pane_g4_ParamLimits

0x621a,	// (0x00088773) cale_month_pane_g4

0x626e,	// (0x000887c7) cale_month_pane_g5_ParamLimits

0x626e,	// (0x000887c7) cale_month_pane_g5

0x62c2,	// (0x0008881b) cale_month_pane_g6_ParamLimits

0x62c2,	// (0x0008881b) cale_month_pane_g6

0x6326,	// (0x0008887f) cale_month_pane_g7_ParamLimits

0x6326,	// (0x0008887f) cale_month_pane_g7

0x638a,	// (0x000888e3) cale_month_pane_g8_ParamLimits

0x638a,	// (0x000888e3) cale_month_pane_g8

0x63ee,	// (0x00088947) cale_month_pane_g9_ParamLimits

0x63ee,	// (0x00088947) cale_month_pane_g9

0x6448,	// (0x000889a1) cale_month_pane_g10_ParamLimits

0x6448,	// (0x000889a1) cale_month_pane_g10

0x649a,	// (0x000889f3) cale_month_pane_g11_ParamLimits

0x649a,	// (0x000889f3) cale_month_pane_g11

0x64e8,	// (0x00088a41) cale_month_pane_g12_ParamLimits

0x64e8,	// (0x00088a41) cale_month_pane_g12

0x6538,	// (0x00088a91) cale_month_pane_g13_ParamLimits

0x6538,	// (0x00088a91) cale_month_pane_g13

0x000c,

0xf225,	// (0x0009177e) cale_month_pane_g_ParamLimits

0xf225,	// (0x0009177e) cale_month_pane_g

0x6588,	// (0x00088ae1) cale_month_week_pane

0x65a8,	// (0x00088b01) grid_cale_month_pane_ParamLimits

0x65a8,	// (0x00088b01) grid_cale_month_pane

0x6601,	// (0x00088b5a) cale_month_day_heading_pane_t1

0x6683,	// (0x00088bdc) cale_month_day_heading_pane_t2

0x66fc,	// (0x00088c55) cale_month_day_heading_pane_t3

0x6775,	// (0x00088cce) cale_month_day_heading_pane_t4

0x67ee,	// (0x00088d47) cale_month_day_heading_pane_t5

0x686f,	// (0x00088dc8) cale_month_day_heading_pane_t6

0x68f8,	// (0x00088e51) cale_month_day_heading_pane_t7

0x0006,

0xf240,	// (0x00091799) cale_month_day_heading_pane_t

0xd317,	// (0x0008f870) bg_cale_side_pane_cp01

0x6981,	// (0x00088eda) cale_month_week_pane_t1

0x699a,	// (0x00088ef3) cale_month_week_pane_t2

0x69b3,	// (0x00088f0c) cale_month_week_pane_t3

0x69cc,	// (0x00088f25) cale_month_week_pane_t4

0x69e5,	// (0x00088f3e) cale_month_week_pane_t5

0x6a02,	// (0x00088f5b) cale_month_week_pane_t6

0x0005,

0xf24f,	// (0x000917a8) cale_month_week_pane_t

0x6a25,	// (0x00088f7e) cell_cale_month_pane_ParamLimits

0x6a25,	// (0x00088f7e) cell_cale_month_pane

0x6b53,	// (0x000890ac) cell_cale_month_pane_g1

0x6b5f,	// (0x000890b8) cell_cale_month_pane_t1_ParamLimits

0x6b5f,	// (0x000890b8) cell_cale_month_pane_t1

0xd325,	// (0x0008f87e) grid_highlight_pane_cp08

0xee9c,	// (0x000913f5) main_smil_g1

0x6b8b,	// (0x000890e4) smil_status_pane

0xd6e5,	// (0x0008fc3e) smil_text_pane

0x0901,	// (0x00082e5a) bg_popup_call3_rect_pane_g8

0x0909,	// (0x00082e62) bg_popup_call3_rect_pane_g9

0x0008,

0xf4ed,	// (0x00091a46) bg_popup_call3_rect_pane_g

0x0b32,	// (0x0008308b) smil_status_volume_pane_g1

0xd6ef,	// (0x0008fc48) smil_status_pane_t1

0x7ddc,	// (0x0008a335) volume_smil_pane

0xd706,	// (0x0008fc5f) list_smil_text_pane

0x6b9e,	// (0x000890f7) scroll_pane_cp011

0x6ba9,	// (0x00089102) smil_text_list_pane_t1_ParamLimits

0x6ba9,	// (0x00089102) smil_text_list_pane_t1

0x6bfd,	// (0x00089156) aid_volume_smil_ParamLimits

0x6bfd,	// (0x00089156) aid_volume_smil

0xee9c,	// (0x000913f5) smil_volume_pane_g1

0xee9c,	// (0x000913f5) smil_volume_pane_g2

0x0001,

0xf261,	// (0x000917ba) smil_volume_pane_g

0x52d6,	// (0x0008782f) listscroll_cale_day_pane

0xd710,	// (0x0008fc69) bg_cale_pane

0xd728,	// (0x0008fc81) list_cale_pane

0xd74b,	// (0x0008fca4) scroll_pane_cp09

0xd75c,	// (0x0008fcb5) cale_bg_pane_g1

0xd764,	// (0x0008fcbd) cale_bg_pane_g2

0xd76c,	// (0x0008fcc5) cale_bg_pane_g3

0xd774,	// (0x0008fccd) cale_bg_pane_g4

0xd77c,	// (0x0008fcd5) cale_bg_pane_g5

0xd784,	// (0x0008fcdd) cale_bg_pane_g6

0xd78c,	// (0x0008fce5) cale_bg_pane_g7

0xd794,	// (0x0008fced) cale_bg_pane_g8

0xd79c,	// (0x0008fcf5) cale_bg_pane_g9

0x0008,

0xf266,	// (0x000917bf) cale_bg_pane_g

0x6c27,	// (0x00089180) list_cale_time_pane_ParamLimits

0x6c27,	// (0x00089180) list_cale_time_pane

0xd7a4,	// (0x0008fcfd) list_cale_time_pane_g1_ParamLimits

0xd7a4,	// (0x0008fcfd) list_cale_time_pane_g1

0xd7b0,	// (0x0008fd09) list_cale_time_pane_g2_ParamLimits

0xd7b0,	// (0x0008fd09) list_cale_time_pane_g2

0x6c3e,	// (0x00089197) list_cale_time_pane_g3_ParamLimits

0x6c3e,	// (0x00089197) list_cale_time_pane_g3

0x6c4c,	// (0x000891a5) list_cale_time_pane_g4_ParamLimits

0x6c4c,	// (0x000891a5) list_cale_time_pane_g4

0x6c5a,	// (0x000891b3) list_cale_time_pane_g5_ParamLimits

0x6c5a,	// (0x000891b3) list_cale_time_pane_g5

0x0005,

0xf279,	// (0x000917d2) list_cale_time_pane_g_ParamLimits

0xf279,	// (0x000917d2) list_cale_time_pane_g

0xd7ca,	// (0x0008fd23) list_cale_time_pane_t1_ParamLimits

0xd7ca,	// (0x0008fd23) list_cale_time_pane_t1

0xd7f2,	// (0x0008fd4b) list_cale_time_pane_t2_ParamLimits

0xd7f2,	// (0x0008fd4b) list_cale_time_pane_t2

0x6f17,	// (0x00089470) aid_blid_cardinal_pane

0x6f59,	// (0x000894b2) compass_pane_t4

0xd81a,	// (0x0008fd73) list_cale_time_pane_t4_ParamLimits

0xd81a,	// (0x0008fd73) list_cale_time_pane_t4

0x6f67,	// (0x000894c0) compass_pane_t5

0x6f77,	// (0x000894d0) compass_pane_t6

0x6f85,	// (0x000894de) compass_pane_t7

0xdc4f,	// (0x000901a8) navi_pane_cc_t1

0xdd9c,	// (0x000902f5) aid_phob_thumbnail_center_pane

0x74a6,	// (0x000899ff) main_postcard_pane_g4_ParamLimits

0x0002,

0xf286,	// (0x000917df) list_cale_time_pane_t_ParamLimits

0xf286,	// (0x000917df) list_cale_time_pane_t

0xe880,	// (0x00090dd9) bg_popup_window_pane_cp02_ParamLimits

0xe880,	// (0x00090dd9) bg_popup_window_pane_cp02

0xd842,	// (0x0008fd9b) heading_pane_cp01_ParamLimits

0xd842,	// (0x0008fd9b) heading_pane_cp01

0xd84e,	// (0x0008fda7) loc_req_pane_ParamLimits

0xd84e,	// (0x0008fda7) loc_req_pane

0xd85e,	// (0x0008fdb7) loc_type_pane_ParamLimits

0xd85e,	// (0x0008fdb7) loc_type_pane

0xd870,	// (0x0008fdc9) loc_type_pane_t1_ParamLimits

0xd870,	// (0x0008fdc9) loc_type_pane_t1

0xd882,	// (0x0008fddb) loc_type_pane_t2_ParamLimits

0xd882,	// (0x0008fddb) loc_type_pane_t2

0xd894,	// (0x0008fded) loc_type_pane_t3_ParamLimits

0xd894,	// (0x0008fded) loc_type_pane_t3

0x0002,

0xf28d,	// (0x000917e6) loc_type_pane_t_ParamLimits

0xf28d,	// (0x000917e6) loc_type_pane_t

0xd8a6,	// (0x0008fdff) list_loc_req_pane

0xd8b0,	// (0x0008fe09) scroll_pane_cp012

0x6c68,	// (0x000891c1) list_single_loc_request_popup_menu_pane_ParamLimits

0x6c68,	// (0x000891c1) list_single_loc_request_popup_menu_pane

0xd8bb,	// (0x0008fe14) list_single_loc_request_popup_menu_pane_g1_ParamLimits

0xd8bb,	// (0x0008fe14) list_single_loc_request_popup_menu_pane_g1

0xd8c7,	// (0x0008fe20) list_single_loc_request_popup_menu_pane_g2_ParamLimits

0xd8c7,	// (0x0008fe20) list_single_loc_request_popup_menu_pane_g2

0x0001,

0xf294,	// (0x000917ed) list_single_loc_request_popup_menu_pane_g_ParamLimits

0xf294,	// (0x000917ed) list_single_loc_request_popup_menu_pane_g

0xd8d3,	// (0x0008fe2c) list_single_loc_request_popup_menu_pane_t1_ParamLimits

0xd8d3,	// (0x0008fe2c) list_single_loc_request_popup_menu_pane_t1

0x6c7a,	// (0x000891d3) bg_popup_window_pane_cp03_ParamLimits

0x6c7a,	// (0x000891d3) bg_popup_window_pane_cp03

0x6c88,	// (0x000891e1) heading_loc_req_pane_ParamLimits

0x6c88,	// (0x000891e1) heading_loc_req_pane

0x6c94,	// (0x000891ed) popup_dyc_status_message_window_g1_ParamLimits

0x6c94,	// (0x000891ed) popup_dyc_status_message_window_g1

0x6ca0,	// (0x000891f9) popup_dyc_status_message_window_t1_ParamLimits

0x6ca0,	// (0x000891f9) popup_dyc_status_message_window_t1

0x6cb2,	// (0x0008920b) popup_dyc_status_message_window_t2_ParamLimits

0x6cb2,	// (0x0008920b) popup_dyc_status_message_window_t2

0x6cc4,	// (0x0008921d) popup_dyc_status_message_window_t3_ParamLimits

0x6cc4,	// (0x0008921d) popup_dyc_status_message_window_t3

0x0002,

0xf299,	// (0x000917f2) popup_dyc_status_message_window_t_ParamLimits

0xf299,	// (0x000917f2) popup_dyc_status_message_window_t

0xec29,	// (0x00091182) bg_heading_pane_cp01

0xd8e9,	// (0x0008fe42) heading_loc_req_pane_g1

0xd8f1,	// (0x0008fe4a) heading_loc_req_pane_g2

0xd8f9,	// (0x0008fe52) heading_loc_req_pane_g3

0x0002,

0xf2a0,	// (0x000917f9) heading_loc_req_pane_g

0xd901,	// (0x0008fe5a) heading_loc_req_pane_t1

0xd921,	// (0x0008fe7a) bg_popup_sub_pane_cp01_ParamLimits

0xd921,	// (0x0008fe7a) bg_popup_sub_pane_cp01

0xd92f,	// (0x0008fe88) popup_cale_events_window_g1_ParamLimits

0xd92f,	// (0x0008fe88) popup_cale_events_window_g1

0xd94f,	// (0x0008fea8) popup_cale_events_window_g2_ParamLimits

0xd94f,	// (0x0008fea8) popup_cale_events_window_g2

0x0001,

0xf2c2,	// (0x0009181b) popup_cale_events_window_g_ParamLimits

0xf2c2,	// (0x0009181b) popup_cale_events_window_g

0xd96f,	// (0x0008fec8) popup_cale_events_window_t1_ParamLimits

0xd96f,	// (0x0008fec8) popup_cale_events_window_t1

0xd981,	// (0x0008feda) popup_cale_events_window_t2_ParamLimits

0xd981,	// (0x0008feda) popup_cale_events_window_t2

0xd9bf,	// (0x0008ff18) popup_cale_events_window_t3_ParamLimits

0xd9bf,	// (0x0008ff18) popup_cale_events_window_t3

0xd9f9,	// (0x0008ff52) popup_cale_events_window_t4_ParamLimits

0xd9f9,	// (0x0008ff52) popup_cale_events_window_t4

0x0003,

0xf2c7,	// (0x00091820) popup_cale_events_window_t_ParamLimits

0xf2c7,	// (0x00091820) popup_cale_events_window_t

0x6cee,	// (0x00089247) call_type_pane

0xda2f,	// (0x0008ff88) popup_call_status_window_g1

0x6cfa,	// (0x00089253) popup_call_status_window_g2

0x6d06,	// (0x0008925f) popup_call_status_window_g3

0x0002,

0xf2d0,	// (0x00091829) popup_call_status_window_g

0xda3d,	// (0x0008ff96) call_type_pane_g1

0xda46,	// (0x0008ff9f) call_type_pane_g2

0x0001,

0xf2d7,	// (0x00091830) call_type_pane_g

0xec29,	// (0x00091182) bg_popup_sub_pane_cp02

0xda4f,	// (0x0008ffa8) listscroll_popup_wml_pane

0xda57,	// (0x0008ffb0) list_wml_pane

0xda61,	// (0x0008ffba) scroll_pane_cp013

0xda6c,	// (0x0008ffc5) list_single_graphic_popup_wml_pane_ParamLimits

0xda6c,	// (0x0008ffc5) list_single_graphic_popup_wml_pane

0xee9c,	// (0x000913f5) list_single_graphic_popup_wml_pane_g1

0xda80,	// (0x0008ffd9) list_single_graphic_popup_wml_pane_g2

0x0001,

0xf2dc,	// (0x00091835) list_single_graphic_popup_wml_pane_g

0xda88,	// (0x0008ffe1) list_single_graphic_popup_wml_pane_t1

0xda9e,	// (0x0008fff7) aid_call_pane

0xee7c,	// (0x000913d5) popup_clock_analogue_window_g1

0xee7c,	// (0x000913d5) popup_clock_analogue_window_g2

0x6d12,	// (0x0008926b) popup_clock_analogue_window_g3

0x6d12,	// (0x0008926b) popup_clock_analogue_window_g4

0xee9c,	// (0x000913f5) popup_clock_analogue_window_g5

0x0004,

0xf2e1,	// (0x0009183a) popup_clock_analogue_window_g

0x6d1a,	// (0x00089273) popup_clock_analogue_window_t1

0x6d28,	// (0x00089281) clock_digital_number_pane_ParamLimits

0x6d28,	// (0x00089281) clock_digital_number_pane

0x6d34,	// (0x0008928d) clock_digital_number_pane_cp02_ParamLimits

0x6d34,	// (0x0008928d) clock_digital_number_pane_cp02

0x6d40,	// (0x00089299) clock_digital_number_pane_cp03_ParamLimits

0x6d40,	// (0x00089299) clock_digital_number_pane_cp03

0x6d4c,	// (0x000892a5) clock_digital_number_pane_cp04_ParamLimits

0x6d4c,	// (0x000892a5) clock_digital_number_pane_cp04

0x6d58,	// (0x000892b1) clock_digital_separator_pane_ParamLimits

0x6d58,	// (0x000892b1) clock_digital_separator_pane

0x6d64,	// (0x000892bd) popup_clock_digital_window_t1

0xee9c,	// (0x000913f5) clock_digital_number_pane_g1

0xee9c,	// (0x000913f5) clock_digital_number_pane_g2

0x0001,

0xf261,	// (0x000917ba) clock_digital_number_pane_g

0xee9c,	// (0x000913f5) clock_digital_separator_pane_g1

0xee9c,	// (0x000913f5) clock_digital_separator_pane_g2

0x0001,

0xf261,	// (0x000917ba) clock_digital_separator_pane_g

0xec29,	// (0x00091182) bg_popup_window_pane_cp04

0xdaa6,	// (0x0008ffff) heading_pane_cp03

0xd372,	// (0x0008f8cb) listscroll_popup_gms_pane

0xec29,	// (0x00091182) grid_large_graphic_popup_pane

0xdaaf,	// (0x00090008) listscroll_popup_gms_pane_g1

0xdab8,	// (0x00090011) listscroll_popup_gms_pane_g2

0x0001,

0xf2ec,	// (0x00091845) listscroll_popup_gms_pane_g

0xdac1,	// (0x0009001a) scroll_pane_cp014

0xeef1,	// (0x0009144a) cell_large_graphic_popup_pane_ParamLimits

0xeef1,	// (0x0009144a) cell_large_graphic_popup_pane

0xeeff,	// (0x00091458) cell_large_graphic_popup_pane_g1_ParamLimits

0xeeff,	// (0x00091458) cell_large_graphic_popup_pane_g1

0xdaca,	// (0x00090023) cell_large_graphic_popup_pane_g2_ParamLimits

0xdaca,	// (0x00090023) cell_large_graphic_popup_pane_g2

0xdad8,	// (0x00090031) cell_large_graphic_popup_pane_g3_ParamLimits

0xdad8,	// (0x00090031) cell_large_graphic_popup_pane_g3

0xdae6,	// (0x0009003f) cell_large_graphic_popup_pane_g4_ParamLimits

0xdae6,	// (0x0009003f) cell_large_graphic_popup_pane_g4

0x0003,

0xf2f1,	// (0x0009184a) cell_large_graphic_popup_pane_g_ParamLimits

0xf2f1,	// (0x0009184a) cell_large_graphic_popup_pane_g

0xec29,	// (0x00091182) grid_highlight_pane_cp010

0xee9c,	// (0x000913f5) bg_popup_call_pane_g1

0xdaf7,	// (0x00090050) list_single_graphic_popup_conf_pane_ParamLimits

0xdaf7,	// (0x00090050) list_single_graphic_popup_conf_pane

0xdb09,	// (0x00090062) list_highlight_pane_cp01

0xdb12,	// (0x0009006b) list_single_graphic_popup_conf_pane_g1

0xdb1a,	// (0x00090073) list_single_graphic_popup_conf_pane_g2

0x0001,

0xf2fa,	// (0x00091853) list_single_graphic_popup_conf_pane_g

0xdb22,	// (0x0009007b) list_single_graphic_popup_conf_pane_t1

0xdb30,	// (0x00090089) linegrid_cams_pane_g1

0x6d81,	// (0x000892da) linegrid_cams_pane_g2

0xd358,	// (0x0008f8b1) linegrid_cams_pane_g3

0xdb39,	// (0x00090092) linegrid_cams_pane_g4

0x6d8a,	// (0x000892e3) linegrid_cams_pane_g5

0x6d93,	// (0x000892ec) linegrid_cams_pane_g6

0xd361,	// (0x0008f8ba) linegrid_cams_pane_g7

0x0006,

0xf2ff,	// (0x00091858) linegrid_cams_pane_g

0xdb42,	// (0x0009009b) popup_clock_analogue_window

0xdb42,	// (0x0009009b) popup_clock_digital_window

0xec29,	// (0x00091182) popup_phob_thumbnail_window

0xee9c,	// (0x000913f5) call_video_uplink_pane_g1

0xdb4b,	// (0x000900a4) call_video_uplink_pane_g2

0x0001,

0xf30e,	// (0x00091867) call_video_uplink_pane_g

0xdb53,	// (0x000900ac) video_uplink_pane

0xdb5b,	// (0x000900b4) mce_image_pane_g1

0x6d9e,	// (0x000892f7) mce_image_pane_g2

0x6da8,	// (0x00089301) mce_image_pane_g3

0x6db2,	// (0x0008930b) mce_image_pane_g4

0x6dba,	// (0x00089313) mce_image_pane_g5

0x0004,

0xf313,	// (0x0009186c) mce_image_pane_g

0xdb65,	// (0x000900be) control_top_pane_stacon_cp01_ParamLimits

0xdb65,	// (0x000900be) control_top_pane_stacon_cp01

0xdb79,	// (0x000900d2) uni_indicator_pane_stacon_cp01_ParamLimits

0xdb79,	// (0x000900d2) uni_indicator_pane_stacon_cp01

0xdb8a,	// (0x000900e3) bg_popup_sub_pane_cp03

0x6dc2,	// (0x0008931b) chi_dic_find_pane

0x6dca,	// (0x00089323) listscroll_chi_dic_pane

0x6dd3,	// (0x0008932c) main_pane_chidic_g1

0x6de6,	// (0x0008933f) chi_dic_find_pane_t1

0xdb94,	// (0x000900ed) find_chidic_pane

0xdb9d,	// (0x000900f6) chi_dic_list_pane_ParamLimits

0xdb9d,	// (0x000900f6) chi_dic_list_pane

0xdbae,	// (0x00090107) scroll_pane_cp020

0x6df4,	// (0x0008934d) find_chidic_pane_t1

0xec29,	// (0x00091182) input_focus_pane_cp06

0xdbb6,	// (0x0009010f) list_chi_dic_pane_ParamLimits

0xdbb6,	// (0x0009010f) list_chi_dic_pane

0x6e03,	// (0x0008935c) list_chi_dic_pane_t1_ParamLimits

0x6e03,	// (0x0008935c) list_chi_dic_pane_t1

0xec29,	// (0x00091182) list_highlight_pane_cp020

0xdbcb,	// (0x00090124) bg_cale_heading_pane_g1

0x6e16,	// (0x0008936f) bg_cale_heading_pane_g2

0x6e1e,	// (0x00089377) bg_cale_heading_pane_g3

0x6e26,	// (0x0008937f) bg_cale_heading_pane_g4

0x6e30,	// (0x00089389) bg_cale_heading_pane_g5

0x6e3a,	// (0x00089393) bg_cale_heading_pane_g6

0x6e42,	// (0x0008939b) bg_cale_heading_pane_g7

0x6e4a,	// (0x000893a3) bg_cale_heading_pane_g8

0x6e54,	// (0x000893ad) bg_cale_heading_pane_g9

0x0008,

0xf31e,	// (0x00091877) bg_cale_heading_pane_g

0xdbcb,	// (0x00090124) bg_cale_side_pane_g1

0x6e5e,	// (0x000893b7) bg_cale_side_pane_g2

0x6e68,	// (0x000893c1) bg_cale_side_pane_g3

0x6e72,	// (0x000893cb) bg_cale_side_pane_g4

0x6e7c,	// (0x000893d5) bg_cale_side_pane_g5

0x6e86,	// (0x000893df) bg_cale_side_pane_g6

0x6e90,	// (0x000893e9) bg_cale_side_pane_g7

0x6e9a,	// (0x000893f3) bg_cale_side_pane_g8

0x6ea2,	// (0x000893fb) bg_cale_side_pane_g9

0x0008,

0xf331,	// (0x0009188a) bg_cale_side_pane_g

0x6eaa,	// (0x00089403) popup_call_status_window_ParamLimits

0x6eaa,	// (0x00089403) popup_call_status_window

0xdbd3,	// (0x0009012c) stacon_top_pane

0xdbdb,	// (0x00090134) status_pane_ParamLimits

0xdbdb,	// (0x00090134) status_pane

0xdbf0,	// (0x00090149) status_small_pane

0xdbf8,	// (0x00090151) control_pane

0xec29,	// (0x00091182) stacon_bottom_pane

0xdc00,	// (0x00090159) list_single_mce_smart_pane_t1_ParamLimits

0xdc00,	// (0x00090159) list_single_mce_smart_pane_t1

0xdc13,	// (0x0009016c) list_single_mce_smart_pane_t2_ParamLimits

0xdc13,	// (0x0009016c) list_single_mce_smart_pane_t2

0x0001,

0xf344,	// (0x0009189d) list_single_mce_smart_pane_t_ParamLimits

0xf344,	// (0x0009189d) list_single_mce_smart_pane_t

0x6eb6,	// (0x0008940f) compass_pane

0x6ec1,	// (0x0008941a) main_location2_pane_t1

0x6ed7,	// (0x00089430) main_location2_pane_t2

0x6eed,	// (0x00089446) main_location2_pane_t3

0x0003,

0xf349,	// (0x000918a2) main_location2_pane_t

0xdc32,	// (0x0009018b) compass_pane_g1_ParamLimits

0xdc32,	// (0x0009018b) compass_pane_g1

0x6f3b,	// (0x00089494) compass_pane_t1

0x6f4a,	// (0x000894a3) compass_pane_t2

0x0005,

0xf352,	// (0x000918ab) compass_pane_t

0x6f95,	// (0x000894ee) text_secondary_cp61

0xdc46,	// (0x0009019f) navi_pane_cams_g5

0xdc69,	// (0x000901c2) navi_pane_im_t1

0xdc77,	// (0x000901d0) navi_pane_mp_g1_ParamLimits

0xdc77,	// (0x000901d0) navi_pane_mp_g1

0xdc8b,	// (0x000901e4) navi_pane_mp_g2_ParamLimits

0xdc8b,	// (0x000901e4) navi_pane_mp_g2

0xdc97,	// (0x000901f0) navi_pane_mp_g3_ParamLimits

0xdc97,	// (0x000901f0) navi_pane_mp_g3

0x0002,

0xf366,	// (0x000918bf) navi_pane_mp_g_ParamLimits

0xf366,	// (0x000918bf) navi_pane_mp_g

0xdca3,	// (0x000901fc) navi_pane_mp_t1

0xdcb1,	// (0x0009020a) navi_pane_mp_t2

0x0002,

0xf36d,	// (0x000918c6) navi_pane_mp_t

0xdced,	// (0x00090246) navi_pane_vt_g1

0xdca3,	// (0x000901fc) navi_pane_vt_t1

0xdcf5,	// (0x0009024e) navi_slider_pane

0xd372,	// (0x0008f8cb) zooming_pane

0xdcfd,	// (0x00090256) navi_slider_pane_g1

0x70ca,	// (0x00089623) navi_slider_pane_g2

0x0006,

0xf374,	// (0x000918cd) navi_slider_pane_g

0xdd21,	// (0x0009027a) aid_levels_zoom

0xdd29,	// (0x00090282) zooming_pane_g1

0xdd31,	// (0x0009028a) zooming_pane_g2

0xdd31,	// (0x0009028a) zooming_pane_g3

0x0002,

0xf383,	// (0x000918dc) zooming_pane_g

0xdd39,	// (0x00090292) level_10_zoom

0xdd42,	// (0x0009029b) level_11_zoom

0xdd4b,	// (0x000902a4) level_1_zoom

0xdd54,	// (0x000902ad) level_2_zoom

0xdd5d,	// (0x000902b6) level_3_zoom

0xdd66,	// (0x000902bf) level_4_zoom

0xdd6f,	// (0x000902c8) level_5_zoom

0xdd78,	// (0x000902d1) level_6_zoom

0xdd81,	// (0x000902da) level_7_zoom

0xdd8a,	// (0x000902e3) level_8_zoom

0xdd93,	// (0x000902ec) level_9_zoom

0xdda4,	// (0x000902fd) popup_phob_thumbnail_window_g1

0xddac,	// (0x00090305) popup_phob_thumbnail_window_g2

0x0001,

0xf38a,	// (0x000918e3) popup_phob_thumbnail_window_g

0x7a6a,	// (0x00089fc3) level_1_location

0x7a72,	// (0x00089fcb) level_2_location

0x7a7a,	// (0x00089fd3) level_3_location

0x7a84,	// (0x00089fdd) level_4_location

0xd372,	// (0x0008f8cb) level_5_location

0x70dc,	// (0x00089635) mce_icon_pane_g1

0x70e4,	// (0x0008963d) mce_icon_pane_g2

0x0001,

0xf38f,	// (0x000918e8) mce_icon_pane_g

0x70ec,	// (0x00089645) main_mup_pane_g1_ParamLimits

0x70ec,	// (0x00089645) main_mup_pane_g1

0xef1b,	// (0x00091474) main_mup_pane_g2_ParamLimits

0xef1b,	// (0x00091474) main_mup_pane_g2

0xef1b,	// (0x00091474) main_mup_pane_g3_ParamLimits

0xef1b,	// (0x00091474) main_mup_pane_g3

0xef1b,	// (0x00091474) main_mup_pane_g4_ParamLimits

0xef1b,	// (0x00091474) main_mup_pane_g4

0xef1b,	// (0x00091474) main_mup_pane_g5_ParamLimits

0xef1b,	// (0x00091474) main_mup_pane_g5

0xef1b,	// (0x00091474) main_mup_pane_g6_ParamLimits

0xef1b,	// (0x00091474) main_mup_pane_g6

0xef1b,	// (0x00091474) main_mup_pane_g7_ParamLimits

0xef1b,	// (0x00091474) main_mup_pane_g7

0xef1b,	// (0x00091474) main_mup_pane_g8_ParamLimits

0xef1b,	// (0x00091474) main_mup_pane_g8

0xef1b,	// (0x00091474) main_mup_pane_g9_ParamLimits

0xef1b,	// (0x00091474) main_mup_pane_g9

0xef1b,	// (0x00091474) main_mup_pane_g10_ParamLimits

0xef1b,	// (0x00091474) main_mup_pane_g10

0xef1b,	// (0x00091474) main_mup_pane_g11_ParamLimits

0xef1b,	// (0x00091474) main_mup_pane_g11

0xef0d,	// (0x00091466) main_mup_pane_g12_ParamLimits

0xef0d,	// (0x00091466) main_mup_pane_g12

0xef1b,	// (0x00091474) main_mup_pane_g13_ParamLimits

0xef1b,	// (0x00091474) main_mup_pane_g13

0x000c,

0xf394,	// (0x000918ed) main_mup_pane_g_ParamLimits

0xf394,	// (0x000918ed) main_mup_pane_g

0xef29,	// (0x00091482) main_mup_pane_t1_ParamLimits

0xef29,	// (0x00091482) main_mup_pane_t1

0xef29,	// (0x00091482) main_mup_pane_t2_ParamLimits

0xef29,	// (0x00091482) main_mup_pane_t2

0xef29,	// (0x00091482) main_mup_pane_t3_ParamLimits

0xef29,	// (0x00091482) main_mup_pane_t3

0xd37a,	// (0x0008f8d3) main_mup_pane_t4_ParamLimits

0xd37a,	// (0x0008f8d3) main_mup_pane_t4

0xd37a,	// (0x0008f8d3) main_mup_pane_t5_ParamLimits

0xd37a,	// (0x0008f8d3) main_mup_pane_t5

0xd3c2,	// (0x0008f91b) main_mup_pane_t6_ParamLimits

0xd3c2,	// (0x0008f91b) main_mup_pane_t6

0x0005,

0xf3af,	// (0x00091908) main_mup_pane_t_ParamLimits

0xf3af,	// (0x00091908) main_mup_pane_t

0xe82a,	// (0x00090d83) mup_progress_pane_ParamLimits

0xe82a,	// (0x00090d83) mup_progress_pane

0x0bcb,	// (0x00083124) mup_visualizer_pane_ParamLimits

0x0bcb,	// (0x00083124) mup_visualizer_pane

0x0bcb,	// (0x00083124) mup_volume_pane_ParamLimits

0x0bcb,	// (0x00083124) mup_volume_pane

0xef0d,	// (0x00091466) mup_visualizer_pane_g1_ParamLimits

0xef0d,	// (0x00091466) mup_visualizer_pane_g1

0xddb4,	// (0x0009030d) mup_visualizer_pane_g2_ParamLimits

0xddb4,	// (0x0009030d) mup_visualizer_pane_g2

0xeeff,	// (0x00091458) mup_visualizer_pane_g3_ParamLimits

0xeeff,	// (0x00091458) mup_visualizer_pane_g3

0x0002,

0xf3bc,	// (0x00091915) mup_visualizer_pane_g_ParamLimits

0xf3bc,	// (0x00091915) mup_visualizer_pane_g

0xd3a8,	// (0x0008f901) mup_volume_pane_g1

0xd3a8,	// (0x0008f901) mup_volume_pane_g2

0x0001,

0xf3c3,	// (0x0009191c) mup_volume_pane_g

0xd3a8,	// (0x0008f901) mup_progress_pane_g1

0xd3a8,	// (0x0008f901) mup_progress_pane_g2

0xd3a8,	// (0x0008f901) mup_progress_pane_g3

0x0002,

0xf3c8,	// (0x00091921) mup_progress_pane_g

0xec29,	// (0x00091182) bg_popup_window_pane_cp05

0xddc2,	// (0x0009031b) heading_pane_cp02_ParamLimits

0xddc2,	// (0x0009031b) heading_pane_cp02

0xddde,	// (0x00090337) list_popup_blid_pane

0xdde6,	// (0x0009033f) list_blid_sat_info_pane_ParamLimits

0xdde6,	// (0x0009033f) list_blid_sat_info_pane

0xddf9,	// (0x00090352) list_blid_sat_info_pane_g1

0xde01,	// (0x0009035a) list_blid_sat_info_pane_t1

0x71fb,	// (0x00089754) mup_equalizer_pane_ParamLimits

0x71fb,	// (0x00089754) mup_equalizer_pane

0x721c,	// (0x00089775) mup_equalizer_pane_cp1_ParamLimits

0x721c,	// (0x00089775) mup_equalizer_pane_cp1

0x723d,	// (0x00089796) mup_equalizer_pane_cp2_ParamLimits

0x723d,	// (0x00089796) mup_equalizer_pane_cp2

0x725e,	// (0x000897b7) mup_equalizer_pane_cp3_ParamLimits

0x725e,	// (0x000897b7) mup_equalizer_pane_cp3

0x7283,	// (0x000897dc) mup_equalizer_pane_cp4_ParamLimits

0x7283,	// (0x000897dc) mup_equalizer_pane_cp4

0x72a8,	// (0x00089801) mup_equalizer_pane_cp5

0x72c0,	// (0x00089819) mup_equalizer_pane_cp6

0x72d8,	// (0x00089831) mup_equalizer_pane_cp7

0x0981,	// (0x00082eda) bg_popup_call_poc_act_pane_g9

0x0989,	// (0x00082ee2) bg_popup_call_poc_act_pane_g10

0x0991,	// (0x00082eea) bg_popup_call_poc_act_pane_g11

0x000a,

0xee84,	// (0x000913dd) mup_scale_pane

0xee9c,	// (0x000913f5) mup_scale_pane_g1

0xde0f,	// (0x00090368) mup_scale_pane_g2

0x0006,

0xf3e4,	// (0x0009193d) mup_scale_pane_g

0xde33,	// (0x0009038c) msg_data_pane

0xde3b,	// (0x00090394) scroll_pane_cp017

0x7302,	// (0x0008985b) bg_list_pane_cp04_ParamLimits

0x7302,	// (0x0008985b) bg_list_pane_cp04

0xde43,	// (0x0009039c) msg_data_pane_g1

0x7322,	// (0x0008987b) msg_data_pane_g2

0x732c,	// (0x00089885) msg_data_pane_g3

0x7336,	// (0x0008988f) msg_data_pane_g4

0x733e,	// (0x00089897) msg_data_pane_g5

0x7346,	// (0x0008989f) msg_data_pane_g6

0x734e,	// (0x000898a7) msg_data_pane_g7

0x0006,

0xf3f3,	// (0x0009194c) msg_data_pane_g

0x7356,	// (0x000898af) msg_text_pane_ParamLimits

0x7356,	// (0x000898af) msg_text_pane

0x7380,	// (0x000898d9) qrid_highlight_pane_cp011_ParamLimits

0x7380,	// (0x000898d9) qrid_highlight_pane_cp011

0xec29,	// (0x00091182) msg_body_pane

0xec29,	// (0x00091182) msg_header_pane

0xde54,	// (0x000903ad) input_focus_pane_cp07

0x00ea,	// (0x00082643) msg_header_pane_t1_ParamLimits

0x00ea,	// (0x00082643) msg_header_pane_t1

0x0100,	// (0x00082659) msg_header_pane_t2_ParamLimits

0x0100,	// (0x00082659) msg_header_pane_t2

0x0001,

0xf407,	// (0x00091960) msg_header_pane_t_ParamLimits

0xf407,	// (0x00091960) msg_header_pane_t

0xde69,	// (0x000903c2) msg_body_pane_g1

0x0117,	// (0x00082670) msg_body_pane_t1_ParamLimits

0x0117,	// (0x00082670) msg_body_pane_t1

0x0148,	// (0x000826a1) msg_body_pane_t2_ParamLimits

0x0148,	// (0x000826a1) msg_body_pane_t2

0x015a,	// (0x000826b3) msg_body_pane_t3_ParamLimits

0x015a,	// (0x000826b3) msg_body_pane_t3

0x0002,

0xf40c,	// (0x00091965) msg_body_pane_t_ParamLimits

0xf40c,	// (0x00091965) msg_body_pane_t

0x73f6,	// (0x0008994f) main_viewer_pane_g1_ParamLimits

0x73f6,	// (0x0008994f) main_viewer_pane_g1

0x7402,	// (0x0008995b) main_viewer_pane_g2_ParamLimits

0x7402,	// (0x0008995b) main_viewer_pane_g2

0x740e,	// (0x00089967) main_viewer_pane_g3_ParamLimits

0x740e,	// (0x00089967) main_viewer_pane_g3

0x741f,	// (0x00089978) main_viewer_pane_g4_ParamLimits

0x741f,	// (0x00089978) main_viewer_pane_g4

0x7430,	// (0x00089989) main_viewer_pane_g5_ParamLimits

0x7430,	// (0x00089989) main_viewer_pane_g5

0x7430,	// (0x00089989) main_viewer_pane_g7_ParamLimits

0x7430,	// (0x00089989) main_viewer_pane_g7

0x7442,	// (0x0008999b) main_viewer_pane_g8_ParamLimits

0x7442,	// (0x0008999b) main_viewer_pane_g8

0x0007,

0xf41c,	// (0x00091975) main_viewer_pane_g_ParamLimits

0xf41c,	// (0x00091975) main_viewer_pane_g

0xde71,	// (0x000903ca) viewer_content_pane_ParamLimits

0xde71,	// (0x000903ca) viewer_content_pane

0x747a,	// (0x000899d3) main_postcard_pane_g1_ParamLimits

0x747a,	// (0x000899d3) main_postcard_pane_g1

0x7488,	// (0x000899e1) main_postcard_pane_g2_ParamLimits

0x7488,	// (0x000899e1) main_postcard_pane_g2

0x7496,	// (0x000899ef) main_postcard_pane_g3_ParamLimits

0x7496,	// (0x000899ef) main_postcard_pane_g3

0x0005,

0xf42d,	// (0x00091986) main_postcard_pane_g_ParamLimits

0xf42d,	// (0x00091986) main_postcard_pane_g

0x74a6,	// (0x000899ff) main_postcard_pane_g4

0x0b1f,	// (0x00083078) smil_status_volume_pane_g2

0x74d2,	// (0x00089a2b) postcard_pane_ParamLimits

0x74d2,	// (0x00089a2b) postcard_pane

0xda2f,	// (0x0008ff88) postcard_pane_g1_ParamLimits

0xda2f,	// (0x0008ff88) postcard_pane_g1

0x750c,	// (0x00089a65) postcard_pane_g2_ParamLimits

0x750c,	// (0x00089a65) postcard_pane_g2

0x7518,	// (0x00089a71) postcard_pane_g3_ParamLimits

0x7518,	// (0x00089a71) postcard_pane_g3

0xde7f,	// (0x000903d8) postcard_pane_g4_ParamLimits

0xde7f,	// (0x000903d8) postcard_pane_g4

0x7524,	// (0x00089a7d) postcard_pane_g5_ParamLimits

0x7524,	// (0x00089a7d) postcard_pane_g5

0x7530,	// (0x00089a89) postcard_pane_g6_ParamLimits

0x7530,	// (0x00089a89) postcard_pane_g6

0xde8d,	// (0x000903e6) postcard_pane_g7_ParamLimits

0xde8d,	// (0x000903e6) postcard_pane_g7

0x0006,

0xf43a,	// (0x00091993) postcard_pane_g_ParamLimits

0xf43a,	// (0x00091993) postcard_pane_g

0x753e,	// (0x00089a97) main_mp2_pane_g1_ParamLimits

0x753e,	// (0x00089a97) main_mp2_pane_g1

0x754c,	// (0x00089aa5) main_mp2_pane_g2_ParamLimits

0x754c,	// (0x00089aa5) main_mp2_pane_g2

0x7558,	// (0x00089ab1) main_mp2_pane_g3_ParamLimits

0x7558,	// (0x00089ab1) main_mp2_pane_g3

0x0002,

0xf449,	// (0x000919a2) main_mp2_pane_g_ParamLimits

0xf449,	// (0x000919a2) main_mp2_pane_g

0x7564,	// (0x00089abd) main_mp2_pane_t1_ParamLimits

0x7564,	// (0x00089abd) main_mp2_pane_t1

0x757b,	// (0x00089ad4) main_mp2_pane_t2_ParamLimits

0x757b,	// (0x00089ad4) main_mp2_pane_t2

0x758f,	// (0x00089ae8) main_mp2_pane_t3_ParamLimits

0x758f,	// (0x00089ae8) main_mp2_pane_t3

0x0002,

0xf450,	// (0x000919a9) main_mp2_pane_t_ParamLimits

0xf450,	// (0x000919a9) main_mp2_pane_t

0xde9b,	// (0x000903f4) pec_content_pane_ParamLimits

0xde9b,	// (0x000903f4) pec_content_pane

0xd521,	// (0x0008fa7a) scroll_pane_cp015

0xdead,	// (0x00090406) pec_attribute_pane_ParamLimits

0xdead,	// (0x00090406) pec_attribute_pane

0x75a1,	// (0x00089afa) pec_content_pane_g1_ParamLimits

0x75a1,	// (0x00089afa) pec_content_pane_g1

0xdebd,	// (0x00090416) pec_content_pane_t1_ParamLimits

0xdebd,	// (0x00090416) pec_content_pane_t1

0xdecf,	// (0x00090428) pec_content_pane_t2_ParamLimits

0xdecf,	// (0x00090428) pec_content_pane_t2

0x0001,

0xf457,	// (0x000919b0) pec_content_pane_t_ParamLimits

0xf457,	// (0x000919b0) pec_content_pane_t

0x75ad,	// (0x00089b06) list_single_graphic_pane_cp01_ParamLimits

0x75ad,	// (0x00089b06) list_single_graphic_pane_cp01

0xee84,	// (0x000913dd) bg_popup_sub_pane_cp04

0xdee1,	// (0x0009043a) popup_mup_playback_window_g1

0xdeed,	// (0x00090446) popup_mup_playback_window_t1

0xdf02,	// (0x0009045b) popup_mup_playback_window_t2

0x0001,

0xf45c,	// (0x000919b5) popup_mup_playback_window_t

0xdf39,	// (0x00090492) main_image_pane_g1_ParamLimits

0xdf39,	// (0x00090492) main_image_pane_g1

0xdf7c,	// (0x000904d5) scroll_pane_cp018_ParamLimits

0xdf7c,	// (0x000904d5) scroll_pane_cp018

0xdf94,	// (0x000904ed) scroll_pane_cp016_ParamLimits

0xdf94,	// (0x000904ed) scroll_pane_cp016

0x763b,	// (0x00089b94) smil2_image_pane_ParamLimits

0x763b,	// (0x00089b94) smil2_image_pane

0x7671,	// (0x00089bca) smil2_root_pane_ParamLimits

0x7671,	// (0x00089bca) smil2_root_pane

0x769d,	// (0x00089bf6) smil2_text_pane_ParamLimits

0x769d,	// (0x00089bf6) smil2_text_pane

0xec29,	// (0x00091182) bg_list_pane_cp06

0xdfd0,	// (0x00090529) grid_radio_pane

0xec29,	// (0x00091182) bg_popup_window_pane_cp06

0xdfda,	// (0x00090533) main_fmradio_pane_t1

0x0999,	// (0x00082ef2) heading_pane_cp04

0xdfe8,	// (0x00090541) main_fmradio_pane_t2

0x09a1,	// (0x00082efa) popup_cale_lunar_info_window_g1

0xdff6,	// (0x0009054f) main_fmradio_pane_t3

0x09a9,	// (0x00082f02) popup_cale_lunar_info_window_g2

0xe006,	// (0x0009055f) main_fmradio_pane_t4

0x0001,

0xe014,	// (0x0009056d) main_fmradio_pane_t5

0x0004,

0xf53c,	// (0x00091a95) popup_cale_lunar_info_window_g

0xf471,	// (0x000919ca) main_fmradio_pane_t

0xe022,	// (0x0009057b) wait_bar_pane_cp03

0xe02a,	// (0x00090583) cell_fmradio_pane_ParamLimits

0xe02a,	// (0x00090583) cell_fmradio_pane

0xde8d,	// (0x000903e6) cell_fmradio_pane_g1_ParamLimits

0xde8d,	// (0x000903e6) cell_fmradio_pane_g1

0xec29,	// (0x00091182) grid_highlight_pane_cp011

0xe03f,	// (0x00090598) poc_content_pane_ParamLimits

0xe03f,	// (0x00090598) poc_content_pane

0xe051,	// (0x000905aa) scroll_pane_cp019

0x76dd,	// (0x00089c36) popup_call_poc_act_window_ParamLimits

0x76dd,	// (0x00089c36) popup_call_poc_act_window

0x76ea,	// (0x00089c43) popup_call_poc_inact_window_ParamLimits

0x76ea,	// (0x00089c43) popup_call_poc_inact_window

0xf513,	// (0x00091a6c) bg_popup_call_poc_act_pane_g

0x0911,	// (0x00082e6a) bg_popup_call_poc_inact_pane_g1

0x0919,	// (0x00082e72) bg_popup_call_poc_inact_pane_g2

0xe059,	// (0x000905b2) popup_call_poc_act_window_g2

0x0921,	// (0x00082e7a) bg_popup_call_poc_inact_pane_g3

0x0929,	// (0x00082e82) bg_popup_call_poc_inact_pane_g4

0x0931,	// (0x00082e8a) bg_popup_call_poc_inact_pane_g5

0xe061,	// (0x000905ba) popup_call_poc_act_window_t1_ParamLimits

0xe061,	// (0x000905ba) popup_call_poc_act_window_t1

0xe089,	// (0x000905e2) popup_call_poc_act_window_t2_ParamLimits

0xe089,	// (0x000905e2) popup_call_poc_act_window_t2

0xe0b1,	// (0x0009060a) popup_call_poc_act_window_t3_ParamLimits

0xe0b1,	// (0x0009060a) popup_call_poc_act_window_t3

0xe0d9,	// (0x00090632) popup_call_poc_act_window_t4_ParamLimits

0xe0d9,	// (0x00090632) popup_call_poc_act_window_t4

0x0003,

0xf47c,	// (0x000919d5) popup_call_poc_act_window_t_ParamLimits

0xf47c,	// (0x000919d5) popup_call_poc_act_window_t

0x0939,	// (0x00082e92) bg_popup_call_poc_inact_pane_g6

0x0941,	// (0x00082e9a) bg_popup_call_poc_inact_pane_g7

0x0949,	// (0x00082ea2) bg_popup_call_poc_inact_pane_g8

0xe0eb,	// (0x00090644) popup_call_poc_inact_window_g2

0x0951,	// (0x00082eaa) bg_popup_call_poc_inact_pane_g9

0x0008,

0xf500,	// (0x00091a59) bg_popup_call_poc_inact_pane_g

0xe0f3,	// (0x0009064c) popup_call_poc_inact_window_t1_ParamLimits

0xe0f3,	// (0x0009064c) popup_call_poc_inact_window_t1

0xe108,	// (0x00090661) popup_call_poc_inact_window_t2_ParamLimits

0xe108,	// (0x00090661) popup_call_poc_inact_window_t2

0xe11d,	// (0x00090676) popup_call_poc_inact_window_t3_ParamLimits

0xe11d,	// (0x00090676) popup_call_poc_inact_window_t3

0x0002,

0xf485,	// (0x000919de) popup_call_poc_inact_window_t_ParamLimits

0xf485,	// (0x000919de) popup_call_poc_inact_window_t

0x0a97,	// (0x00082ff0) context_pane_ParamLimits

0x7da7,	// (0x0008a300) signal_pane_ParamLimits

0xd372,	// (0x0008f8cb) main_call2_pane

0x7d13,	// (0x0008a26c) popup_phob_thumbnail2_window_ParamLimits

0x7d13,	// (0x0008a26c) popup_phob_thumbnail2_window

0x73a4,	// (0x000898fd) aid_hotspot_pointer_arrow_pane

0x73ac,	// (0x00089905) aid_hotspot_pointer_hand_pane

0x7a32,	// (0x00089f8b) phob_pre_status_pane_g5

0xeef1,	// (0x0009144a) cams_zoom_pane_ParamLimits

0xeef1,	// (0x0009144a) image_vga_pane_ParamLimits

0xef0d,	// (0x00091466) main_camera_pane_g1_ParamLimits

0xef0d,	// (0x00091466) main_camera_pane_g2_ParamLimits

0xef0d,	// (0x00091466) main_camera_pane_g3_ParamLimits

0xef0d,	// (0x00091466) main_camera_pane_g4_ParamLimits

0xef0d,	// (0x00091466) main_camera_pane_g5_ParamLimits

0xef0d,	// (0x00091466) main_camera_pane_g6_ParamLimits

0xef0d,	// (0x00091466) main_camera_pane_g7_ParamLimits

0xf1ab,	// (0x00091704) main_camera_pane_g_ParamLimits

0xd37a,	// (0x0008f8d3) main_camera_pane_t1_ParamLimits

0xd37a,	// (0x0008f8d3) main_camera_pane_t2_ParamLimits

0xf1bc,	// (0x00091715) main_camera_pane_t_ParamLimits

0xee84,	// (0x000913dd) bg_popup_preview_window_pane_cp01_ParamLimits

0xee84,	// (0x000913dd) bg_popup_preview_window_pane_cp01

0xe132,	// (0x0009068b) popup_phob_thumbnail2_window_g1_ParamLimits

0xe132,	// (0x0009068b) popup_phob_thumbnail2_window_g1

0xec29,	// (0x00091182) call2_cli_visual_pane

0x7706,	// (0x00089c5f) popup_call2_audio_conf_window_ParamLimits

0x7706,	// (0x00089c5f) popup_call2_audio_conf_window

0x771f,	// (0x00089c78) popup_call2_audio_first_window_ParamLimits

0x771f,	// (0x00089c78) popup_call2_audio_first_window

0x77bd,	// (0x00089d16) popup_call2_audio_in_window_ParamLimits

0x77bd,	// (0x00089d16) popup_call2_audio_in_window

0x7801,	// (0x00089d5a) popup_call2_audio_out_window_ParamLimits

0x7801,	// (0x00089d5a) popup_call2_audio_out_window

0x786b,	// (0x00089dc4) popup_call2_audio_second_window_ParamLimits

0x786b,	// (0x00089dc4) popup_call2_audio_second_window

0x78c9,	// (0x00089e22) popup_call2_audio_wait_window_ParamLimits

0x78c9,	// (0x00089e22) popup_call2_audio_wait_window

0xec29,	// (0x00091182) bg_popup_call2_act_pane_cp03

0xee66,	// (0x000913bf) list_conf_pane_cp

0xe13e,	// (0x00090697) popup_call2_audio_conf_window_t1

0xe14c,	// (0x000906a5) list_single_graphic_popup_conf2_pane_ParamLimits

0xe14c,	// (0x000906a5) list_single_graphic_popup_conf2_pane

0xdb09,	// (0x00090062) list_highlight_pane_cp04

0xe15f,	// (0x000906b8) list_single_graphic_popup_conf2_pane_g1

0xdb1a,	// (0x00090073) list_single_graphic_popup_conf2_pane_g2

0x0001,

0xf48c,	// (0x000919e5) list_single_graphic_popup_conf2_pane_g

0xe169,	// (0x000906c2) list_single_graphic_popup_conf2_pane_t1

0xe177,	// (0x000906d0) bg_popup_call2_act_pane_cp01_ParamLimits

0xe177,	// (0x000906d0) bg_popup_call2_act_pane_cp01

0xe201,	// (0x0009075a) call_type_pane_cp05_ParamLimits

0xe201,	// (0x0009075a) call_type_pane_cp05

0xe255,	// (0x000907ae) popup_call2_audio_second_window_g1_ParamLimits

0xe255,	// (0x000907ae) popup_call2_audio_second_window_g1

0xe2a9,	// (0x00090802) popup_call2_audio_second_window_g2_ParamLimits

0xe2a9,	// (0x00090802) popup_call2_audio_second_window_g2

0x0002,

0xf491,	// (0x000919ea) popup_call2_audio_second_window_g_ParamLimits

0xf491,	// (0x000919ea) popup_call2_audio_second_window_g

0xe30e,	// (0x00090867) popup_call2_audio_second_window_t1_ParamLimits

0xe30e,	// (0x00090867) popup_call2_audio_second_window_t1

0xe3c9,	// (0x00090922) popup_call2_audio_second_window_t2_ParamLimits

0xe3c9,	// (0x00090922) popup_call2_audio_second_window_t2

0xe41c,	// (0x00090975) popup_call2_audio_second_window_t3_ParamLimits

0xe41c,	// (0x00090975) popup_call2_audio_second_window_t3

0x0003,

0xf498,	// (0x000919f1) popup_call2_audio_second_window_t_ParamLimits

0xf498,	// (0x000919f1) popup_call2_audio_second_window_t

0xec29,	// (0x00091182) bg_popup_call2_in_pane_cp02

0xec33,	// (0x0009118c) call_type_pane_cp04

0x7908,	// (0x00089e61) popup_call2_audio_wait_window_g1

0x7910,	// (0x00089e69) popup_call2_audio_wait_window_g2

0x0001,

0xf4a1,	// (0x000919fa) popup_call2_audio_wait_window_g

0xec4b,	// (0x000911a4) popup_call2_audio_wait_window_t3

0xe50f,	// (0x00090a68) bg_popup_call2_act_pane_ParamLimits

0xe50f,	// (0x00090a68) bg_popup_call2_act_pane

0xe5cf,	// (0x00090b28) call_type_pane_cp03_ParamLimits

0xe5cf,	// (0x00090b28) call_type_pane_cp03

0xe633,	// (0x00090b8c) popup_call2_audio_first_window_g1_ParamLimits

0xe633,	// (0x00090b8c) popup_call2_audio_first_window_g1

0xe6a3,	// (0x00090bfc) popup_call2_audio_first_window_g2_ParamLimits

0xe6a3,	// (0x00090bfc) popup_call2_audio_first_window_g2

0xda2f,	// (0x0008ff88) popup_call2_audio_first_window_g3_ParamLimits

0xda2f,	// (0x0008ff88) popup_call2_audio_first_window_g3

0x0004,

0xf4a6,	// (0x000919ff) popup_call2_audio_first_window_g_ParamLimits

0xf4a6,	// (0x000919ff) popup_call2_audio_first_window_g

0x01ae,	// (0x00082707) popup_call2_audio_first_window_t1_ParamLimits

0x01ae,	// (0x00082707) popup_call2_audio_first_window_t1

0x02b1,	// (0x0008280a) popup_call2_audio_first_window_t4_ParamLimits

0x02b1,	// (0x0008280a) popup_call2_audio_first_window_t4

0x0394,	// (0x000828ed) popup_call2_audio_first_window_t5_ParamLimits

0x0394,	// (0x000828ed) popup_call2_audio_first_window_t5

0x0003,

0xf4b1,	// (0x00091a0a) popup_call2_audio_first_window_t_ParamLimits

0xf4b1,	// (0x00091a0a) popup_call2_audio_first_window_t

0xee7c,	// (0x000913d5) bg_popup_call2_act_pane_g1

0x09b3,	// (0x00082f0c) popup_cale_lunar_info_window_t1

0x09c1,	// (0x00082f1a) popup_cale_lunar_info_window_t2

0x09cf,	// (0x00082f28) popup_cale_lunar_info_window_t3

0xec29,	// (0x00091182) bg_popup_call2_bubble_pane

0x0495,	// (0x000829ee) bg_popup_call2_in_pane_cp01_ParamLimits

0x0495,	// (0x000829ee) bg_popup_call2_in_pane_cp01

0xe905,	// (0x00090e5e) call_type_pane_cp02

0x7918,	// (0x00089e71) popup_call2_audio_out_window_g1_ParamLimits

0x7918,	// (0x00089e71) popup_call2_audio_out_window_g1

0x04dd,	// (0x00082a36) popup_call2_audio_out_window_g2_ParamLimits

0x04dd,	// (0x00082a36) popup_call2_audio_out_window_g2

0x7944,	// (0x00089e9d) popup_call2_audio_out_window_g3_ParamLimits

0x7944,	// (0x00089e9d) popup_call2_audio_out_window_g3

0x0003,

0xf4ba,	// (0x00091a13) popup_call2_audio_out_window_g_ParamLimits

0xf4ba,	// (0x00091a13) popup_call2_audio_out_window_g

0x0514,	// (0x00082a6d) popup_call2_audio_out_window_t1_ParamLimits

0x0514,	// (0x00082a6d) popup_call2_audio_out_window_t1

0x0573,	// (0x00082acc) popup_call2_audio_out_window_t2_ParamLimits

0x0573,	// (0x00082acc) popup_call2_audio_out_window_t2

0x05c7,	// (0x00082b20) popup_call2_audio_out_window_t3_ParamLimits

0x05c7,	// (0x00082b20) popup_call2_audio_out_window_t3

0x05dd,	// (0x00082b36) popup_call2_audio_out_window_t4_ParamLimits

0x05dd,	// (0x00082b36) popup_call2_audio_out_window_t4

0x05f3,	// (0x00082b4c) popup_call2_audio_out_window_t5_ParamLimits

0x05f3,	// (0x00082b4c) popup_call2_audio_out_window_t5

0x0005,

0xf4c3,	// (0x00091a1c) popup_call2_audio_out_window_t_ParamLimits

0xf4c3,	// (0x00091a1c) popup_call2_audio_out_window_t

0x0657,	// (0x00082bb0) bg_popup_call2_in_pane_ParamLimits

0x0657,	// (0x00082bb0) bg_popup_call2_in_pane

0x06b3,	// (0x00082c0c) popup_call2_audio_in_window_g1_ParamLimits

0x06b3,	// (0x00082c0c) popup_call2_audio_in_window_g1

0x06eb,	// (0x00082c44) popup_call2_audio_in_window_g2_ParamLimits

0x06eb,	// (0x00082c44) popup_call2_audio_in_window_g2

0x0723,	// (0x00082c7c) popup_call2_audio_in_window_g3_ParamLimits

0x0723,	// (0x00082c7c) popup_call2_audio_in_window_g3

0x0003,

0xf4d0,	// (0x00091a29) popup_call2_audio_in_window_g_ParamLimits

0xf4d0,	// (0x00091a29) popup_call2_audio_in_window_g

0x077b,	// (0x00082cd4) popup_call2_audio_in_window_t1_ParamLimits

0x077b,	// (0x00082cd4) popup_call2_audio_in_window_t1

0x07fb,	// (0x00082d54) popup_call2_audio_in_window_t2_ParamLimits

0x07fb,	// (0x00082d54) popup_call2_audio_in_window_t2

0x087b,	// (0x00082dd4) popup_call2_audio_in_window_t3_ParamLimits

0x087b,	// (0x00082dd4) popup_call2_audio_in_window_t3

0x0895,	// (0x00082dee) popup_call2_audio_in_window_t4_ParamLimits

0x0895,	// (0x00082dee) popup_call2_audio_in_window_t4

0x08a7,	// (0x00082e00) popup_call2_audio_in_window_t5_ParamLimits

0x08a7,	// (0x00082e00) popup_call2_audio_in_window_t5

0x08bc,	// (0x00082e15) popup_call2_audio_in_window_t6_ParamLimits

0x08bc,	// (0x00082e15) popup_call2_audio_in_window_t6

0x0005,

0xf4d9,	// (0x00091a32) popup_call2_audio_in_window_t_ParamLimits

0xf4d9,	// (0x00091a32) popup_call2_audio_in_window_t

0xee7c,	// (0x000913d5) bg_popup_call2_in_pane_g1

0x09dd,	// (0x00082f36) popup_cale_lunar_info_window_t4

0x0003,

0xf541,	// (0x00091a9a) popup_cale_lunar_info_window_t

0xee84,	// (0x000913dd) bg_popup_call2_rect_pane_ParamLimits

0xee84,	// (0x000913dd) bg_popup_call2_rect_pane

0xec29,	// (0x00091182) call2_cli_visual_graphic_pane

0xec29,	// (0x00091182) call2_cli_visual_text_pane

0x7dcf,	// (0x0008a328) smil_status_volume_pane_g3

0x0002,

0xee9c,	// (0x000913f5) call2_cli_visual_graphic_pane_g1

0xee9c,	// (0x000913f5) call2_cli_visual_graphic_pane_g2

0xee9c,	// (0x000913f5) call2_cli_visual_graphic_pane_g3

0x0002,

0xf4e6,	// (0x00091a3f) call2_cli_visual_graphic_pane_g

0x08d1,	// (0x00082e2a) bg_popup_call2_rect_pane_g1

0xf051,	// (0x000915aa) bg_popup_call2_rect_pane_g2

0x08d9,	// (0x00082e32) bg_popup_call2_rect_pane_g3

0x08e1,	// (0x00082e3a) bg_popup_call2_rect_pane_g4

0x08e9,	// (0x00082e42) bg_popup_call2_rect_pane_g5

0x08f1,	// (0x00082e4a) bg_popup_call2_rect_pane_g6

0x08f9,	// (0x00082e52) bg_popup_call2_rect_pane_g7

0x0901,	// (0x00082e5a) bg_popup_call2_rect_pane_g8

0x0909,	// (0x00082e62) bg_popup_call2_rect_pane_g9

0x0008,

0xf4ed,	// (0x00091a46) bg_popup_call2_rect_pane_g

0x0911,	// (0x00082e6a) bg_popup_call2_bubble_pane_g1

0x0919,	// (0x00082e72) bg_popup_call2_bubble_pane_g2

0x0921,	// (0x00082e7a) bg_popup_call2_bubble_pane_g3

0x0929,	// (0x00082e82) bg_popup_call2_bubble_pane_g4

0x0931,	// (0x00082e8a) bg_popup_call2_bubble_pane_g5

0x0939,	// (0x00082e92) bg_popup_call2_bubble_pane_g6

0x0941,	// (0x00082e9a) bg_popup_call2_bubble_pane_g7

0x0949,	// (0x00082ea2) bg_popup_call2_bubble_pane_g8

0x0951,	// (0x00082eaa) bg_popup_call2_bubble_pane_g9

0x0008,

0xf500,	// (0x00091a59) bg_popup_call2_bubble_pane_g

0x52e8,	// (0x00087841) aid_cale_week_size_cell_pane

0xee84,	// (0x000913dd) aid_cams_cif_uncrop_pane_ParamLimits

0xee84,	// (0x000913dd) aid_cams_cif_uncrop_pane

0x5ad7,	// (0x00088030) aid_cams_size_cell_ParamLimits

0x5ad7,	// (0x00088030) aid_cams_size_cell

0x5ae3,	// (0x0008803c) grid_cams_pane_ParamLimits

0x5af1,	// (0x0008804a) linegrid_cams_pane_ParamLimits

0x5bc2,	// (0x0008811b) call_video_pane_t1

0x5bdf,	// (0x00088138) call_video_pane_t2

0x0001,

0xf208,	// (0x00091761) call_video_pane_t

0x604e,	// (0x000885a7) aid_cale_month_size_cell_pane_ParamLimits

0x604e,	// (0x000885a7) aid_cale_month_size_cell_pane

0xf585,	// (0x00091ade) smil_status_volume_pane_g

0x7ddc,	// (0x0008a335) volume_smil_pane_ParamLimits

0x4bc7,	// (0x00087120) aid_popup2_width_pane

0x51e6,	// (0x0008773f) cell_qdial_pane_g4_ParamLimits

0x51e6,	// (0x0008773f) cell_qdial_pane_g4

0x6f17,	// (0x00089470) aid_blid_cardinal_pane_ParamLimits

0x6f27,	// (0x00089480) aid_blid_destination_pane_ParamLimits

0x6f27,	// (0x00089480) aid_blid_destination_pane

0xee84,	// (0x000913dd) bg_popup_call_poc_act_pane_ParamLimits

0xee84,	// (0x000913dd) bg_popup_call_poc_act_pane

0xee84,	// (0x000913dd) bg_popup_call_poc_inact_pane_ParamLimits

0xee84,	// (0x000913dd) bg_popup_call_poc_inact_pane

0x0959,	// (0x00082eb2) bg_popup_call_poc_act_pane_g1

0x0961,	// (0x00082eba) bg_popup_call_poc_act_pane_g2

0x0969,	// (0x00082ec2) bg_popup_call_poc_act_pane_g3

0x0929,	// (0x00082e82) bg_popup_call_poc_act_pane_g4

0x0931,	// (0x00082e8a) bg_popup_call_poc_act_pane_g5

0x0971,	// (0x00082eca) bg_popup_call_poc_act_pane_g6

0x0941,	// (0x00082e9a) bg_popup_call_poc_act_pane_g7

0x0979,	// (0x00082ed2) bg_popup_call_poc_act_pane_g8

0xec29,	// (0x00091182) main_usb_pane

0x7c30,	// (0x0008a189) popup_cale_lunar_info_window

0x5ef7,	// (0x00088450) im_reading_pane_t1_ParamLimits

0xd479,	// (0x0008f9d2) list_im_pane_ParamLimits

0xd48a,	// (0x0008f9e3) scroll_pane_cp07_ParamLimits

0xec29,	// (0x00091182) grid_highlight_pane_cp012

0xee84,	// (0x000913dd) mup_scale_pane_ParamLimits

0xda2f,	// (0x0008ff88) main_usb_pane_g1_ParamLimits

0xda2f,	// (0x0008ff88) main_usb_pane_g1

0x799a,	// (0x00089ef3) main_usb_pane_g2_ParamLimits

0x799a,	// (0x00089ef3) main_usb_pane_g2

0x0001,

0xf52a,	// (0x00091a83) main_usb_pane_g_ParamLimits

0xf52a,	// (0x00091a83) main_usb_pane_g

0x79a6,	// (0x00089eff) main_usb_pane_t1_ParamLimits

0x79a6,	// (0x00089eff) main_usb_pane_t1

0x79b8,	// (0x00089f11) main_usb_pane_t2_ParamLimits

0x79b8,	// (0x00089f11) main_usb_pane_t2

0x79ca,	// (0x00089f23) main_usb_pane_t3_ParamLimits

0x79ca,	// (0x00089f23) main_usb_pane_t3

0x79dc,	// (0x00089f35) main_usb_pane_t4_ParamLimits

0x79dc,	// (0x00089f35) main_usb_pane_t4

0x79ee,	// (0x00089f47) main_usb_pane_t5_ParamLimits

0x79ee,	// (0x00089f47) main_usb_pane_t5

0x7a00,	// (0x00089f59) main_usb_pane_t6_ParamLimits

0x7a00,	// (0x00089f59) main_usb_pane_t6

0x0005,

0xf52f,	// (0x00091a88) main_usb_pane_t_ParamLimits

0x6eb6,	// (0x0008940f) aid_text_placing

0x6ec1,	// (0x0008941a) main_location2_pane_t1_ParamLimits

0x6ed7,	// (0x00089430) main_location2_pane_t2_ParamLimits

0x6eed,	// (0x00089446) main_location2_pane_t3_ParamLimits

0x6f03,	// (0x0008945c) main_location2_pane_t4_ParamLimits

0x6f03,	// (0x0008945c) main_location2_pane_t4

0xf349,	// (0x000918a2) main_location2_pane_t_ParamLimits

0xeeb2,	// (0x0009140b) find_pinb_pane_g2_ParamLimits

0xeeb2,	// (0x0009140b) find_pinb_pane_g2

0x0001,

0xf0c0,	// (0x00091619) find_pinb_pane_g_ParamLimits

0xf0c0,	// (0x00091619) find_pinb_pane_g

0xeebe,	// (0x00091417) find_pinb_pane_t1_ParamLimits

0xeed0,	// (0x00091429) find_pinb_pane_t2_ParamLimits

0xf0c5,	// (0x0009161e) find_pinb_pane_t_ParamLimits

0xec29,	// (0x00091182) main_call3_pane

0x6601,	// (0x00088b5a) cale_month_day_heading_pane_t1_ParamLimits

0x6683,	// (0x00088bdc) cale_month_day_heading_pane_t2_ParamLimits

0x66fc,	// (0x00088c55) cale_month_day_heading_pane_t3_ParamLimits

0x6775,	// (0x00088cce) cale_month_day_heading_pane_t4_ParamLimits

0x67ee,	// (0x00088d47) cale_month_day_heading_pane_t5_ParamLimits

0x686f,	// (0x00088dc8) cale_month_day_heading_pane_t6_ParamLimits

0x68f8,	// (0x00088e51) cale_month_day_heading_pane_t7_ParamLimits

0xf240,	// (0x00091799) cale_month_day_heading_pane_t_ParamLimits

0xd6fd,	// (0x0008fc56) smil_status_volume_pane

0x74f0,	// (0x00089a49) postcard_address_pane_ParamLimits

0x74f0,	// (0x00089a49) postcard_address_pane

0x74fe,	// (0x00089a57) postcard_message_pane_ParamLimits

0x74fe,	// (0x00089a57) postcard_message_pane

0x7970,	// (0x00089ec9) call2_cli_visual_pane_t1_ParamLimits

0x7970,	// (0x00089ec9) call2_cli_visual_pane_t1

0x0b7f,	// (0x000830d8) postcard_message_pane_t1_ParamLimits

0x0b7f,	// (0x000830d8) postcard_message_pane_t1

0x0b67,	// (0x000830c0) postcard_address_pane_t1_ParamLimits

0x0b67,	// (0x000830c0) postcard_address_pane_t1

0x7f13,	// (0x0008a46c) popup_call3_audio_in_window_ParamLimits

0x7f13,	// (0x0008a46c) popup_call3_audio_in_window

0x7df1,	// (0x0008a34a) bg_popup_call3_in_pane_ParamLimits

0x7df1,	// (0x0008a34a) bg_popup_call3_in_pane

0x7e59,	// (0x0008a3b2) popup_call3_audio_in_window_g1_ParamLimits

0x7e59,	// (0x0008a3b2) popup_call3_audio_in_window_g1

0x7e71,	// (0x0008a3ca) popup_call3_audio_in_window_g2_ParamLimits

0x7e71,	// (0x0008a3ca) popup_call3_audio_in_window_g2

0x7e89,	// (0x0008a3e2) popup_call3_audio_in_window_g3_ParamLimits

0x7e89,	// (0x0008a3e2) popup_call3_audio_in_window_g3

0x0003,

0xf58c,	// (0x00091ae5) popup_call3_audio_in_window_g_ParamLimits

0xf58c,	// (0x00091ae5) popup_call3_audio_in_window_g

0x7eb1,	// (0x0008a40a) popup_call3_audio_in_window_t1_ParamLimits

0x7eb1,	// (0x0008a40a) popup_call3_audio_in_window_t1

0x7ed9,	// (0x0008a432) popup_call3_audio_in_window_t2_ParamLimits

0x7ed9,	// (0x0008a432) popup_call3_audio_in_window_t2

0x7f01,	// (0x0008a45a) popup_call3_audio_in_window_t3_ParamLimits

0x7f01,	// (0x0008a45a) popup_call3_audio_in_window_t3

0x0002,

0xf595,	// (0x00091aee) popup_call3_audio_in_window_t_ParamLimits

0xf595,	// (0x00091aee) popup_call3_audio_in_window_t

0xd372,	// (0x0008f8cb) bg_popup_call3_rect_pane

0x08d1,	// (0x00082e2a) bg_popup_call3_rect_pane_g1

0xf051,	// (0x000915aa) bg_popup_call3_rect_pane_g2

0x08d9,	// (0x00082e32) bg_popup_call3_rect_pane_g3

0x08e1,	// (0x00082e3a) bg_popup_call3_rect_pane_g4

0x08e9,	// (0x00082e42) bg_popup_call3_rect_pane_g5

0x08f1,	// (0x00082e4a) bg_popup_call3_rect_pane_g6

0x08f9,	// (0x00082e52) bg_popup_call3_rect_pane_g7

0xe7c9,	// (0x00090d22) mup_visualizer_osc_pane

0xe7c9,	// (0x00090d22) mup_visualizer_spec_pane

0x7e11,	// (0x0008a36a) call3_video_qcif_pane_ParamLimits

0x7e11,	// (0x0008a36a) call3_video_qcif_pane

0x7e23,	// (0x0008a37c) call3_video_qcif_uncrop_pane_ParamLimits

0x7e23,	// (0x0008a37c) call3_video_qcif_uncrop_pane

0x7e33,	// (0x0008a38c) call3_video_subqcif_pane_ParamLimits

0x7e33,	// (0x0008a38c) call3_video_subqcif_pane

0x7e47,	// (0x0008a3a0) call3_video_subqcif_uncrop_pane_ParamLimits

0x7e47,	// (0x0008a3a0) call3_video_subqcif_uncrop_pane

0x7ea1,	// (0x0008a3fa) popup_call3_audio_in_window_g4_ParamLimits

0x7ea1,	// (0x0008a3fa) popup_call3_audio_in_window_g4

0xe7c9,	// (0x00090d22) mup_spec_half_pane

0xe7c9,	// (0x00090d22) mup_spec_half_pane_cp

0xe7c9,	// (0x00090d22) mup_osc_middle_pane

0xd3a8,	// (0x0008f901) mup_visualizer_osc_pane_g1

0x0af8,	// (0x00083051) mup_spec_bar_pane_ParamLimits

0x0af8,	// (0x00083051) mup_spec_bar_pane

0xd3a8,	// (0x0008f901) mup_spec_bar_pane_g1

0xd3a8,	// (0x0008f901) mup_spec_bar_pane_g2

0x0001,

0xf3c3,	// (0x0009191c) mup_spec_bar_pane_g

0x52e8,	// (0x00087841) aid_cale_week_size_cell_pane_ParamLimits

0x5302,	// (0x0008785b) bg_cale_heading_pane_ParamLimits

0x532b,	// (0x00087884) bg_cale_pane_cp01_ParamLimits

0x534d,	// (0x000878a6) cale_week_corner_pane_ParamLimits

0x536c,	// (0x000878c5) cale_week_day_heading_pane_ParamLimits

0x539a,	// (0x000878f3) cale_week_scroll_pane_g1_ParamLimits

0x53be,	// (0x00087917) cale_week_scroll_pane_g2_ParamLimits

0x53d6,	// (0x0008792f) cale_week_scroll_pane_g3_ParamLimits

0x53ee,	// (0x00087947) cale_week_scroll_pane_g4_ParamLimits

0x5406,	// (0x0008795f) cale_week_scroll_pane_g5_ParamLimits

0x541e,	// (0x00087977) cale_week_scroll_pane_g6_ParamLimits

0x543e,	// (0x00087997) cale_week_scroll_pane_g7_ParamLimits

0x545e,	// (0x000879b7) cale_week_scroll_pane_g8_ParamLimits

0x547e,	// (0x000879d7) cale_week_scroll_pane_g9_ParamLimits

0x549b,	// (0x000879f4) cale_week_scroll_pane_g10_ParamLimits

0x54b8,	// (0x00087a11) cale_week_scroll_pane_g11_ParamLimits

0x54d7,	// (0x00087a30) cale_week_scroll_pane_g12_ParamLimits

0x54fc,	// (0x00087a55) cale_week_scroll_pane_g13_ParamLimits

0x5525,	// (0x00087a7e) cale_week_scroll_pane_g14_ParamLimits

0x554e,	// (0x00087aa7) cale_week_scroll_pane_g15_ParamLimits

0xf151,	// (0x000916aa) cale_week_scroll_pane_g_ParamLimits

0x5597,	// (0x00087af0) cale_week_time_pane_ParamLimits

0x55b7,	// (0x00087b10) grid_cale_week_pane_ParamLimits

0xd2e8,	// (0x0008f841) listscroll_cale_week_pane_t1

0xd2fa,	// (0x0008f853) scroll_pane_cp08_ParamLimits

0x60c6,	// (0x0008861f) cale_month_corner_pane_ParamLimits

0xd6d3,	// (0x0008fc2c) cale_month_pane_t1

0x6588,	// (0x00088ae1) cale_month_week_pane_ParamLimits

0xda2f,	// (0x0008ff88) popup_call_status_window_g1_ParamLimits

0x6cfa,	// (0x00089253) popup_call_status_window_g2_ParamLimits

0x6d06,	// (0x0008925f) popup_call_status_window_g3_ParamLimits

0xf2d0,	// (0x00091829) popup_call_status_window_g_ParamLimits

0xda96,	// (0x0008ffef) aid_call2_pane

0x7396,	// (0x000898ef) msg_header_pane_g1

0x74f0,	// (0x00089a49) postcard_address2_pane_ParamLimits

0x74f0,	// (0x00089a49) postcard_address2_pane

0x74fe,	// (0x00089a57) postcard_message2_pane_ParamLimits

0x74fe,	// (0x00089a57) postcard_message2_pane

0x7db5,	// (0x0008a30e) message2_row_pane_ParamLimits

0x7db5,	// (0x0008a30e) message2_row_pane

0x0ab2,	// (0x0008300b) address2_row_pane_ParamLimits

0x0ab2,	// (0x0008300b) address2_row_pane

0x0ac5,	// (0x0008301e) postcard_message2_row_pane_g1

0x0acd,	// (0x00083026) postcard_message2_row_pane_t1

0x0ac5,	// (0x0008301e) address2_row_pane_g1

0x0acd,	// (0x00083026) address2_row_pane_t1

0x5945,	// (0x00087e9e) aid_size_cell_vorec

0xec29,	// (0x00091182) main_rss_pane

0x0adb,	// (0x00083034) rss_list_single_pane_ParamLimits

0x0adb,	// (0x00083034) rss_list_single_pane

0x0ae9,	// (0x00083042) rss_list_single_pane_t1

0x0ae9,	// (0x00083042) rss_list_single_pane_t2

0x0001,

0xf580,	// (0x00091ad9) rss_list_single_pane_t

0xec29,	// (0x00091182) main_camera2_pane

0xec29,	// (0x00091182) main_video2_pane

0x4e6e,	// (0x000873c7) cams_zoom_pane_cp2_ParamLimits

0x4e6e,	// (0x000873c7) cams_zoom_pane_cp2

0x4e6e,	// (0x000873c7) image2_vga_pane_ParamLimits

0x4e6e,	// (0x000873c7) image2_vga_pane

0xdaca,	// (0x00090023) main_camera2_pane_g1_ParamLimits

0xdaca,	// (0x00090023) main_camera2_pane_g1

0xdaca,	// (0x00090023) main_camera2_pane_g2_ParamLimits

0xdaca,	// (0x00090023) main_camera2_pane_g2

0xdaca,	// (0x00090023) main_camera2_pane_g3_ParamLimits

0xdaca,	// (0x00090023) main_camera2_pane_g3

0xdaca,	// (0x00090023) main_camera2_pane_g4_ParamLimits

0xdaca,	// (0x00090023) main_camera2_pane_g4

0xdaca,	// (0x00090023) main_camera2_pane_g5_ParamLimits

0xdaca,	// (0x00090023) main_camera2_pane_g5

0xdaca,	// (0x00090023) main_camera2_pane_g6_ParamLimits

0xdaca,	// (0x00090023) main_camera2_pane_g6

0xdaca,	// (0x00090023) main_camera2_pane_g7_ParamLimits

0xdaca,	// (0x00090023) main_camera2_pane_g7

0xdaca,	// (0x00090023) main_camera2_pane_g8_ParamLimits

0xdaca,	// (0x00090023) main_camera2_pane_g8

0x0008,

0xf59c,	// (0x00091af5) main_camera2_pane_g_ParamLimits

0xf59c,	// (0x00091af5) main_camera2_pane_g

0x7f30,	// (0x0008a489) main_camera2_pane_t1_ParamLimits

0x7f30,	// (0x0008a489) main_camera2_pane_t1

0x7f30,	// (0x0008a489) main_camera2_pane_t2_ParamLimits

0x7f30,	// (0x0008a489) main_camera2_pane_t2

0x7f30,	// (0x0008a489) main_camera2_pane_t3_ParamLimits

0x7f30,	// (0x0008a489) main_camera2_pane_t3

0x7f30,	// (0x0008a489) main_camera2_pane_t4_ParamLimits

0x7f30,	// (0x0008a489) main_camera2_pane_t4

0x0006,

0xf5af,	// (0x00091b08) main_camera2_pane_t_ParamLimits

0xf5af,	// (0x00091b08) main_camera2_pane_t

0x7f58,	// (0x0008a4b1) cams_zoom_pane_cp4_ParamLimits

0x7f58,	// (0x0008a4b1) cams_zoom_pane_cp4

0x7bd5,	// (0x0008a12e) image2_cif_pane_ParamLimits

0x7bd5,	// (0x0008a12e) image2_cif_pane

0x4e6e,	// (0x000873c7) image2_subqcif_pane_ParamLimits

0x4e6e,	// (0x000873c7) image2_subqcif_pane

0x7f66,	// (0x0008a4bf) main_video2_pane_g1_ParamLimits

0x7f66,	// (0x0008a4bf) main_video2_pane_g1

0x7f66,	// (0x0008a4bf) main_video2_pane_g2_ParamLimits

0x7f66,	// (0x0008a4bf) main_video2_pane_g2

0x7f66,	// (0x0008a4bf) main_video2_pane_g3_ParamLimits

0x7f66,	// (0x0008a4bf) main_video2_pane_g3

0x7f66,	// (0x0008a4bf) main_video2_pane_g4_ParamLimits

0x7f66,	// (0x0008a4bf) main_video2_pane_g4

0x7f66,	// (0x0008a4bf) main_video2_pane_g5_ParamLimits

0x7f66,	// (0x0008a4bf) main_video2_pane_g5

0x7f66,	// (0x0008a4bf) main_video2_pane_g6_ParamLimits

0x7f66,	// (0x0008a4bf) main_video2_pane_g6

0x0005,

0xf5be,	// (0x00091b17) main_video2_pane_g_ParamLimits

0xf5be,	// (0x00091b17) main_video2_pane_g

0x7f74,	// (0x0008a4cd) main_video2_pane_t1_ParamLimits

0x7f74,	// (0x0008a4cd) main_video2_pane_t1

0x7f74,	// (0x0008a4cd) main_video2_pane_t2_ParamLimits

0x7f74,	// (0x0008a4cd) main_video2_pane_t2

0x7f74,	// (0x0008a4cd) main_video2_pane_t3_ParamLimits

0x7f74,	// (0x0008a4cd) main_video2_pane_t3

0x0002,

0xf5cb,	// (0x00091b24) main_video2_pane_t_ParamLimits

0xf5cb,	// (0x00091b24) main_video2_pane_t

0x7a96,	// (0x00089fef) call_muted_g2

0x0001,

0xf572,	// (0x00091acb) call_muted_g

0xec29,	// (0x00091182) main_mup2_pane

0xef1b,	// (0x00091474) main_mup2_pane_g1_ParamLimits

0xef1b,	// (0x00091474) main_mup2_pane_g1

0xef1b,	// (0x00091474) main_mup2_pane_g2_ParamLimits

0xef1b,	// (0x00091474) main_mup2_pane_g2

0x217a,	// (0x000846d3) main_mup_pane_g13_cp1

0x4e88,	// (0x000873e1) mup_volume_pane_cp1

0xef1b,	// (0x00091474) main_mup2_pane_g4_ParamLimits

0xef1b,	// (0x00091474) main_mup2_pane_g4

0xef1b,	// (0x00091474) main_mup2_pane_g5_ParamLimits

0xef1b,	// (0x00091474) main_mup2_pane_g5

0xef1b,	// (0x00091474) main_mup2_pane_g6_ParamLimits

0xef1b,	// (0x00091474) main_mup2_pane_g6

0xef1b,	// (0x00091474) main_mup2_pane_g7_ParamLimits

0xef1b,	// (0x00091474) main_mup2_pane_g7

0x0006,

0xf5d2,	// (0x00091b2b) main_mup2_pane_g_ParamLimits

0xf5d2,	// (0x00091b2b) main_mup2_pane_g

0xef29,	// (0x00091482) main_mup2_pane_t1_ParamLimits

0xef29,	// (0x00091482) main_mup2_pane_t1

0xef29,	// (0x00091482) main_mup2_pane_t2_ParamLimits

0xef29,	// (0x00091482) main_mup2_pane_t2

0xef29,	// (0x00091482) main_mup2_pane_t3_ParamLimits

0xef29,	// (0x00091482) main_mup2_pane_t3

0xef29,	// (0x00091482) main_mup2_pane_t4_ParamLimits

0xef29,	// (0x00091482) main_mup2_pane_t4

0xef29,	// (0x00091482) main_mup2_pane_t5_ParamLimits

0xef29,	// (0x00091482) main_mup2_pane_t5

0xef29,	// (0x00091482) main_mup2_pane_t6_ParamLimits

0xef29,	// (0x00091482) main_mup2_pane_t6

0x0005,

0xf5e1,	// (0x00091b3a) main_mup2_pane_t_ParamLimits

0xf5e1,	// (0x00091b3a) main_mup2_pane_t

0x0bcb,	// (0x00083124) mup2_visualizer_pane_ParamLimits

0x0bcb,	// (0x00083124) mup2_visualizer_pane

0x0bcb,	// (0x00083124) mup_progress_pane_cp_ParamLimits

0x0bcb,	// (0x00083124) mup_progress_pane_cp

0x8043,	// (0x0008a59c) mup_volume_pane_cp_ParamLimits

0x8043,	// (0x0008a59c) mup_volume_pane_cp

0xeeff,	// (0x00091458) mup2_visualizer_pane_g1_ParamLimits

0xeeff,	// (0x00091458) mup2_visualizer_pane_g1

0xef0d,	// (0x00091466) mup2_visualizer_pane_g2_ParamLimits

0xef0d,	// (0x00091466) mup2_visualizer_pane_g2

0xef0d,	// (0x00091466) mup2_visualizer_pane_g3_ParamLimits

0xef0d,	// (0x00091466) mup2_visualizer_pane_g3

0x0002,

0xf0ca,	// (0x00091623) mup2_visualizer_pane_g_ParamLimits

0xf0ca,	// (0x00091623) mup2_visualizer_pane_g

0xdfc8,	// (0x00090521) aid_size_cell_fmradio

0x7bac,	// (0x0008a105) aid_height_parent_landcape

0xd508,	// (0x0008fa61) wml_content_pane_cp

0xd510,	// (0x0008fa69) wml_tabs_pane

0xd519,	// (0x0008fa72) popup_wml_miniature_window

0xd521,	// (0x0008fa7a) scroll_pane_cp021

0xd535,	// (0x0008fa8e) wml_content_pane_comp8

0xec29,	// (0x00091182) bg_popup_sub_pane_cp05

0x0bef,	// (0x00083148) popup_wml_miniature_window_g1

0x0bf7,	// (0x00083150) wml_miniature_view_pane

0x7f88,	// (0x0008a4e1) aid_size_wml_view

0x7f90,	// (0x0008a4e9) wml_miniature_view_pane_g1

0x7f99,	// (0x0008a4f2) wml_miniature_view_pane_g2

0x7fa2,	// (0x0008a4fb) wml_miniature_view_pane_g3

0x7faa,	// (0x0008a503) wml_miniature_view_pane_g4

0x7fb2,	// (0x0008a50b) wml_miniature_view_pane_g5

0x7fba,	// (0x0008a513) wml_miniature_view_pane_g6

0x7fc2,	// (0x0008a51b) wml_miniature_view_pane_g7

0x7fca,	// (0x0008a523) wml_miniature_view_pane_g8

0x0007,

0xf5ee,	// (0x00091b47) wml_miniature_view_pane_g

0x0bff,	// (0x00083158) background_graphic_ParamLimits

0x0bff,	// (0x00083158) background_graphic

0x0c0b,	// (0x00083164) wml_tabs_2_pane

0x0c14,	// (0x0008316d) wml_tabs_3_pane_ParamLimits

0x0c14,	// (0x0008316d) wml_tabs_3_pane

0x0c26,	// (0x0008317f) wml_tabs_4_pane_ParamLimits

0x0c26,	// (0x0008317f) wml_tabs_4_pane

0x0c3c,	// (0x00083195) wml_tabs_5_pane_ParamLimits

0x0c3c,	// (0x00083195) wml_tabs_5_pane

0x0c56,	// (0x000831af) wml_tabs_pane_g2_ParamLimits

0x0c56,	// (0x000831af) wml_tabs_pane_g2

0x0c6b,	// (0x000831c4) wml_tabs_pane_g3_ParamLimits

0x0c6b,	// (0x000831c4) wml_tabs_pane_g3

0x0c80,	// (0x000831d9) wml_tabs_2_active_pane_ParamLimits

0x0c80,	// (0x000831d9) wml_tabs_2_active_pane

0x0c80,	// (0x000831d9) wml_tabs_2_passive_pane_ParamLimits

0x0c80,	// (0x000831d9) wml_tabs_2_passive_pane

0x7fd2,	// (0x0008a52b) wml_tabs_3_active_pane_cp_ParamLimits

0x7fd2,	// (0x0008a52b) wml_tabs_3_active_pane_cp

0x7fe5,	// (0x0008a53e) wml_tabs_3_passive_pane_ParamLimits

0x7fe5,	// (0x0008a53e) wml_tabs_3_passive_pane

0x7ff6,	// (0x0008a54f) wml_tabs_3_passive_pane_cp_ParamLimits

0x7ff6,	// (0x0008a54f) wml_tabs_3_passive_pane_cp

0x800b,	// (0x0008a564) tabs_4_active_pane

0x8013,	// (0x0008a56c) tabs_4_passive_pane

0x801b,	// (0x0008a574) tabs_4_passive_pane_cp

0x8023,	// (0x0008a57c) tabs_4_passive_pane_cp2

0x7992,	// (0x00089eeb) aid_height_text

0x0bcb,	// (0x00083124) mup_volume_cont_pane_ParamLimits

0x0bcb,	// (0x00083124) mup_volume_cont_pane

0xe7c9,	// (0x00090d22) aid_size_cell_pinb

0xe7c9,	// (0x00090d22) aid_size_list_pinb

0x0bcb,	// (0x00083124) mup2_volume_cont_pane_ParamLimits

0x0bcb,	// (0x00083124) mup2_volume_cont_pane

0x802d,	// (0x0008a586) mup2_volume_cont_pane_g1_ParamLimits

0x802d,	// (0x0008a586) mup2_volume_cont_pane_g1

0x4bd3,	// (0x0008712c) aid_size_cell_touch_ParamLimits

0x4bd3,	// (0x0008712c) aid_size_cell_touch

0x4e92,	// (0x000873eb) touch_pane_ParamLimits

0x4e92,	// (0x000873eb) touch_pane

0x4e88,	// (0x000873e1) main_rss2_pane

0x0cad,	// (0x00083206) listscroll_rss2_pane

0x0cb6,	// (0x0008320f) rss2_navigation_pane

0x0cbe,	// (0x00083217) list_rss2_pane

0xdbae,	// (0x00090107) scroll_pane_cp22

0x0cc6,	// (0x0008321f) rss2_navigation_pane_g1

0x0ccf,	// (0x00083228) rss2_navigation_pane_g2

0x0cd7,	// (0x00083230) rss2_navigation_pane_g3

0x0002,

0xf5ff,	// (0x00091b58) rss2_navigation_pane_g

0x0cdf,	// (0x00083238) rss2_navigation_pane_t1

0x8059,	// (0x0008a5b2) rss2_list_single_pane_ParamLimits

0x8059,	// (0x0008a5b2) rss2_list_single_pane

0x0ced,	// (0x00083246) rss2_list_single_pane_t2

0x0cfb,	// (0x00083254) rss2_list_single_pane_t3_ParamLimits

0x0cfb,	// (0x00083254) rss2_list_single_pane_t3

0x0d18,	// (0x00083271) rss2_list_single_pane_t4

0x6b96,	// (0x000890ef) smil_status_pane_g1

0x7bd5,	// (0x0008a12e) main_image2_pane_ParamLimits

0x7bd5,	// (0x0008a12e) main_image2_pane

0xdaca,	// (0x00090023) main_camera2_pane_g9_ParamLimits

0xdaca,	// (0x00090023) main_camera2_pane_g9

0x7f30,	// (0x0008a489) main_camera2_pane_t5_ParamLimits

0x7f30,	// (0x0008a489) main_camera2_pane_t5

0x7f44,	// (0x0008a49d) main_camera2_pane_t6_ParamLimits

0x7f44,	// (0x0008a49d) main_camera2_pane_t6

0x807c,	// (0x0008a5d5) main_image2_pane_g1_ParamLimits

0x807c,	// (0x0008a5d5) main_image2_pane_g1

0x76c7,	// (0x00089c20) smil2_video_pane_ParamLimits

0x76c7,	// (0x00089c20) smil2_video_pane

0x4ad7,	// (0x00087030) aid_zoom_text_primary_cp

0x4e23,	// (0x0008737c) popup_preview_fixed_window

0xd471,	// (0x0008f9ca) im_reading_pane_g1

0x7f22,	// (0x0008a47b) cams2_bc_adjust_pane_cp_ParamLimits

0x7f22,	// (0x0008a47b) cams2_bc_adjust_pane_cp

0x4e6e,	// (0x000873c7) cams2_bc_adjust_pane_ParamLimits

0x4e6e,	// (0x000873c7) cams2_bc_adjust_pane

0x217a,	// (0x000846d3) cams2_bc_adjust_pane_g1

0x4e88,	// (0x000873e1) cams2_slider_pane

0x217a,	// (0x000846d3) cams2_slider_pane_g1

0x217a,	// (0x000846d3) cams2_slider_pane_g2

0x0006,

0xf606,	// (0x00091b5f) cams2_slider_pane_g

0x4f27,	// (0x00087480) calc_display_pane_ParamLimits

0x4f45,	// (0x0008749e) calc_paper_pane_ParamLimits

0x4f61,	// (0x000874ba) grid_calc_pane_ParamLimits

0x6d64,	// (0x000892bd) popup_clock_digital_window_t1_ParamLimits

0xdf65,	// (0x000904be) main_image_pane_t1

0x4f0d,	// (0x00087466) aid_size_cell_calc_ParamLimits

0x4f0d,	// (0x00087466) aid_size_cell_calc

0x7c06,	// (0x0008a15f) popup_blid_sat_info2_window_ParamLimits

0x7c06,	// (0x0008a15f) popup_blid_sat_info2_window

0x0d26,	// (0x0008327f) aid_size_cell_blid

0x0bcb,	// (0x00083124) bg_popup_window_pane_cp07

0x0d43,	// (0x0008329c) grid_popup_blid_pane

0x0d4d,	// (0x000832a6) heading_pane_cp05_ParamLimits

0x0d4d,	// (0x000832a6) heading_pane_cp05

0x0e17,	// (0x00083370) cell_popup_blid_pane_ParamLimits

0x0e17,	// (0x00083370) cell_popup_blid_pane

0x0e41,	// (0x0008339a) cell_popup_blid_pane_g1

0x0e49,	// (0x000833a2) cell_popup_blid_pane_t1

0x0bcb,	// (0x00083124) mup2_indicator_pane_ParamLimits

0x0bcb,	// (0x00083124) mup2_indicator_pane

0xe7c9,	// (0x00090d22) mup2_visualizer_osc_pane

0x0bd9,	// (0x00083132) mup2_visualizer_spec_pane_ParamLimits

0x0bd9,	// (0x00083132) mup2_visualizer_spec_pane

0xe7c9,	// (0x00090d22) mup2_spec_half_pane

0xe7c9,	// (0x00090d22) mup2_spec_half_pane_cp

0x0e57,	// (0x000833b0) mup2_spec_bar_pane_ParamLimits

0x0e57,	// (0x000833b0) mup2_spec_bar_pane

0xd3a8,	// (0x0008f901) mup2_spec_bar_pane_g1

0x0e76,	// (0x000833cf) mup2_spec_bar_pane_g2

0x0001,

0xf62c,	// (0x00091b85) mup2_spec_bar_pane_g

0xe7c9,	// (0x00090d22) mup2_osc_middle_pane

0xd3a8,	// (0x0008f901) mup2_visualizer_osc_pane_g1

0xe7f3,	// (0x00090d4c) popup_number_entry_window_t1_ParamLimits

0xe806,	// (0x00090d5f) popup_number_entry_window_t2_ParamLimits

0xe818,	// (0x00090d71) popup_number_entry_window_t3_ParamLimits

0xe838,	// (0x00090d91) popup_number_entry_window_t5_ParamLimits

0xe838,	// (0x00090d91) popup_number_entry_window_t5

0xf06b,	// (0x000915c4) popup_number_entry_window_t_ParamLimits

0xe86d,	// (0x00090dc6) text_title_cp2_ParamLimits

0x73b4,	// (0x0008990d) aid_hotspot_pointer_text2_pane

0x744e,	// (0x000899a7) main_viewer_pane_g9_ParamLimits

0x744e,	// (0x000899a7) main_viewer_pane_g9

0xd6d3,	// (0x0008fc2c) cale_month_pane_t1_ParamLimits

0xd710,	// (0x0008fc69) bg_cale_pane_ParamLimits

0xd728,	// (0x0008fc81) list_cale_pane_ParamLimits

0xd739,	// (0x0008fc92) listscroll_cale_day_pane_t1

0xd74b,	// (0x0008fca4) scroll_pane_cp09_ParamLimits

0x70ff,	// (0x00089658) main_mup_eq_pane_t1_ParamLimits

0x70ff,	// (0x00089658) main_mup_eq_pane_t1

0x711b,	// (0x00089674) main_mup_eq_pane_t2_ParamLimits

0x711b,	// (0x00089674) main_mup_eq_pane_t2

0x7137,	// (0x00089690) main_mup_eq_pane_t3_ParamLimits

0x7137,	// (0x00089690) main_mup_eq_pane_t3

0x7151,	// (0x000896aa) main_mup_eq_pane_t4_ParamLimits

0x7151,	// (0x000896aa) main_mup_eq_pane_t4

0x716b,	// (0x000896c4) main_mup_eq_pane_t5_ParamLimits

0x716b,	// (0x000896c4) main_mup_eq_pane_t5

0x7185,	// (0x000896de) main_mup_eq_pane_t6_ParamLimits

0x7185,	// (0x000896de) main_mup_eq_pane_t6

0x719b,	// (0x000896f4) main_mup_eq_pane_t7_ParamLimits

0x719b,	// (0x000896f4) main_mup_eq_pane_t7

0x71b1,	// (0x0008970a) main_mup_eq_pane_t8_ParamLimits

0x71b1,	// (0x0008970a) main_mup_eq_pane_t8

0x71c7,	// (0x00089720) main_mup_eq_pane_t9_ParamLimits

0x71c7,	// (0x00089720) main_mup_eq_pane_t9

0x71e3,	// (0x0008973c) main_mup_eq_pane_t10_ParamLimits

0x71e3,	// (0x0008973c) main_mup_eq_pane_t10

0x0009,

0xf3cf,	// (0x00091928) main_mup_eq_pane_t_ParamLimits

0xf3cf,	// (0x00091928) main_mup_eq_pane_t

0x72a8,	// (0x00089801) mup_equalizer_pane_cp5_ParamLimits

0x72c0,	// (0x00089819) mup_equalizer_pane_cp6_ParamLimits

0x72d8,	// (0x00089831) mup_equalizer_pane_cp7_ParamLimits

0x4e88,	// (0x000873e1) main_gallery_pane

0x0b17,	// (0x00083070) smil2_volume_pane

0x0b32,	// (0x0008308b) smil_status_volume_pane_g1_ParamLimits

0x0b1f,	// (0x00083078) smil_status_volume_pane_g2_ParamLimits

0x7dcf,	// (0x0008a328) smil_status_volume_pane_g3_ParamLimits

0xf585,	// (0x00091ade) smil_status_volume_pane_g_ParamLimits

0x0bcb,	// (0x00083124) bg_popup_window_pane_cp07_ParamLimits

0x0d2e,	// (0x00083287) blid_firmament_pane

0xeef1,	// (0x0009144a) aid_size_cell_gallery_ParamLimits

0xeef1,	// (0x0009144a) aid_size_cell_gallery

0xeef1,	// (0x0009144a) grid_gallery_pane_ParamLimits

0xeef1,	// (0x0009144a) grid_gallery_pane

0xe781,	// (0x00090cda) cell_gallery_pane_ParamLimits

0xe781,	// (0x00090cda) cell_gallery_pane

0xe82a,	// (0x00090d83) bg_cell_gallery_focus_pane_ParamLimits

0xe82a,	// (0x00090d83) bg_cell_gallery_focus_pane

0xeeff,	// (0x00091458) cell_gallery_pane_g1_ParamLimits

0xeeff,	// (0x00091458) cell_gallery_pane_g1

0xeeff,	// (0x00091458) cell_gallery_pane_g2_ParamLimits

0xeeff,	// (0x00091458) cell_gallery_pane_g2

0xeeff,	// (0x00091458) cell_gallery_pane_g3_ParamLimits

0xeeff,	// (0x00091458) cell_gallery_pane_g3

0xef0d,	// (0x00091466) cell_gallery_pane_g4_ParamLimits

0xef0d,	// (0x00091466) cell_gallery_pane_g4

0x0003,

0xf631,	// (0x00091b8a) cell_gallery_pane_g_ParamLimits

0xf631,	// (0x00091b8a) cell_gallery_pane_g

0x0e80,	// (0x000833d9) bg_cell_gallery_focus_pane_g1

0x0e88,	// (0x000833e1) bg_cell_gallery_focus_pane_g2

0x0e90,	// (0x000833e9) bg_cell_gallery_focus_pane_g3

0x0e98,	// (0x000833f1) bg_cell_gallery_focus_pane_g4

0x0ea0,	// (0x000833f9) bg_cell_gallery_focus_pane_g5

0x0ea8,	// (0x00083401) bg_cell_gallery_focus_pane_g6

0x0eb0,	// (0x00083409) bg_cell_gallery_focus_pane_g7

0x0eb8,	// (0x00083411) bg_cell_gallery_focus_pane_g8

0x0007,

0xf63a,	// (0x00091b93) bg_cell_gallery_focus_pane_g

0x0ec0,	// (0x00083419) aid_firma_cardinal

0x0ed4,	// (0x0008342d) blid_firmament_pane_t1

0x0eeb,	// (0x00083444) blid_firmament_pane_t2

0x0f02,	// (0x0008345b) blid_firmament_pane_t3

0x0f19,	// (0x00083472) blid_firmament_pane_t4

0x0003,

0xf64b,	// (0x00091ba4) blid_firmament_pane_t

0x0f30,	// (0x00083489) blid_sat_info_pane

0xd3a8,	// (0x0008f901) blid_sat_info_pane_g1

0xd3a8,	// (0x0008f901) blid_sat_info_pane_g2

0x0001,

0xf3c3,	// (0x0009191c) blid_sat_info_pane_g

0x0f40,	// (0x00083499) blid_sat_info_pane_t1

0x0f4e,	// (0x000834a7) smil2_volume_content_pane

0x0f57,	// (0x000834b0) smil2_volume_pane_g1

0xeff4,	// (0x0009154d) smil2_volume_content_pane_g1

0x0f5f,	// (0x000834b8) smil2_volume_content_pane_g2

0x0f68,	// (0x000834c1) smil2_volume_content_pane_g3

0x0f71,	// (0x000834ca) smil2_volume_content_pane_g4

0x0f7a,	// (0x000834d3) smil2_volume_content_pane_g5

0x0f83,	// (0x000834dc) smil2_volume_content_pane_g6

0x0f8c,	// (0x000834e5) smil2_volume_content_pane_g7

0x0f95,	// (0x000834ee) smil2_volume_content_pane_g8

0x0f9e,	// (0x000834f7) smil2_volume_content_pane_g9

0x0fa7,	// (0x00083500) smil2_volume_content_pane_g10

0x0009,

0xf654,	// (0x00091bad) smil2_volume_content_pane_g

0x5678,	// (0x00087bd1) cale_week_day_heading_pane_t1_ParamLimits

0x56a0,	// (0x00087bf9) cale_week_day_heading_pane_t2_ParamLimits

0x56cd,	// (0x00087c26) cale_week_day_heading_pane_t3_ParamLimits

0x56fa,	// (0x00087c53) cale_week_day_heading_pane_t4_ParamLimits

0x5727,	// (0x00087c80) cale_week_day_heading_pane_t5_ParamLimits

0x5754,	// (0x00087cad) cale_week_day_heading_pane_t6_ParamLimits

0x5781,	// (0x00087cda) cale_week_day_heading_pane_t7_ParamLimits

0xf172,	// (0x000916cb) cale_week_day_heading_pane_t_ParamLimits

0xd317,	// (0x0008f870) bg_cale_side_pane_ParamLimits

0x57a9,	// (0x00087d02) cale_week_time_pane_t1_ParamLimits

0x57cd,	// (0x00087d26) cale_week_time_pane_t2_ParamLimits

0x57f1,	// (0x00087d4a) cale_week_time_pane_t3_ParamLimits

0x5815,	// (0x00087d6e) cale_week_time_pane_t4_ParamLimits

0x5839,	// (0x00087d92) cale_week_time_pane_t5_ParamLimits

0x585f,	// (0x00087db8) cale_week_time_pane_t6_ParamLimits

0x5887,	// (0x00087de0) cale_week_time_pane_t7_ParamLimits

0x58b3,	// (0x00087e0c) cale_week_time_pane_t8_ParamLimits

0xf181,	// (0x000916da) cale_week_time_pane_t_ParamLimits

0x58e3,	// (0x00087e3c) cell_cale_week_pane_g2_ParamLimits

0xd317,	// (0x0008f870) bg_cale_side_pane_cp01_ParamLimits

0x6981,	// (0x00088eda) cale_month_week_pane_t1_ParamLimits

0x699a,	// (0x00088ef3) cale_month_week_pane_t2_ParamLimits

0x69b3,	// (0x00088f0c) cale_month_week_pane_t3_ParamLimits

0x69cc,	// (0x00088f25) cale_month_week_pane_t4_ParamLimits

0x69e5,	// (0x00088f3e) cale_month_week_pane_t5_ParamLimits

0x6a02,	// (0x00088f5b) cale_month_week_pane_t6_ParamLimits

0xf24f,	// (0x000917a8) cale_month_week_pane_t_ParamLimits

0x6b53,	// (0x000890ac) cell_cale_month_pane_g1_ParamLimits

0x4e88,	// (0x000873e1) main_cale_event_viewer_pane

0xe7c9,	// (0x00090d22) listscroll_cale_event_viewer_pane

0x0fb0,	// (0x00083509) list_cale_ev_pane

0x0fb8,	// (0x00083511) scroll_pane_cp023

0x8088,	// (0x0008a5e1) field_cale_ev_pane_ParamLimits

0x8088,	// (0x0008a5e1) field_cale_ev_pane

0x0fc4,	// (0x0008351d) field_cale_ev_content_pane_ParamLimits

0x0fc4,	// (0x0008351d) field_cale_ev_content_pane

0x0fd0,	// (0x00083529) field_cale_ev_pane_g1_ParamLimits

0x0fd0,	// (0x00083529) field_cale_ev_pane_g1

0x0fdc,	// (0x00083535) field_cale_ev_pane_g2_ParamLimits

0x0fdc,	// (0x00083535) field_cale_ev_pane_g2

0x0ff4,	// (0x0008354d) field_cale_ev_pane_g3_ParamLimits

0x0ff4,	// (0x0008354d) field_cale_ev_pane_g3

0x0002,

0xf669,	// (0x00091bc2) field_cale_ev_pane_g_ParamLimits

0xf669,	// (0x00091bc2) field_cale_ev_pane_g

0x100c,	// (0x00083565) field_cale_ev_pane_t1_ParamLimits

0x100c,	// (0x00083565) field_cale_ev_pane_t1

0x80ac,	// (0x0008a605) field_cale_ev_content_pane_t1_ParamLimits

0x80ac,	// (0x0008a605) field_cale_ev_content_pane_t1

0xde4b,	// (0x000903a4) bg_button_pane_cp01

0x52d6,	// (0x0008782f) listscroll_cale_week_pane_ParamLimits

0xd2df,	// (0x0008f838) popup_toolbar_window_cp01

0xd2e8,	// (0x0008f841) listscroll_cale_week_pane_t1_ParamLimits

0x52d6,	// (0x0008782f) listscroll_cale_day_pane_ParamLimits

0xd2df,	// (0x0008f838) popup_toolbar_window_cp02

0xd739,	// (0x0008fc92) listscroll_cale_day_pane_t1_ParamLimits

0x7bc3,	// (0x0008a11c) main_cale_month_pane_ParamLimits

0x7d25,	// (0x0008a27e) popup_toolbar_window_cp03_ParamLimits

0x7d25,	// (0x0008a27e) popup_toolbar_window_cp03

0x75d7,	// (0x00089b30) main_image_pane_g2_ParamLimits

0x75d7,	// (0x00089b30) main_image_pane_g2

0x75e3,	// (0x00089b3c) main_image_pane_g3_ParamLimits

0x75e3,	// (0x00089b3c) main_image_pane_g3

0x0002,

0xf461,	// (0x000919ba) main_image_pane_g_ParamLimits

0xf461,	// (0x000919ba) main_image_pane_g

0xdf65,	// (0x000904be) main_image_pane_t1_ParamLimits

0x75ef,	// (0x00089b48) main_image_pane_t2_ParamLimits

0x75ef,	// (0x00089b48) main_image_pane_t2

0x7601,	// (0x00089b5a) main_image_pane_t3_ParamLimits

0x7601,	// (0x00089b5a) main_image_pane_t3

0x7613,	// (0x00089b6c) main_image_pane_t4_ParamLimits

0x7613,	// (0x00089b6c) main_image_pane_t4

0x0003,

0xf468,	// (0x000919c1) main_image_pane_t_ParamLimits

0xf468,	// (0x000919c1) main_image_pane_t

0x7625,	// (0x00089b7e) popup_image_details_window_cp01

0x762f,	// (0x00089b88) popup_toobar_trans_pane_cp01_ParamLimits

0x762f,	// (0x00089b88) popup_toobar_trans_pane_cp01

0x7c67,	// (0x0008a1c0) popup_image_details_window_ParamLimits

0x7c67,	// (0x0008a1c0) popup_image_details_window

0x7c75,	// (0x0008a1ce) popup_image_focus_window

0x4e6e,	// (0x000873c7) camera2_autofocus_pane_ParamLimits

0x4e6e,	// (0x000873c7) camera2_autofocus_pane

0xe7c9,	// (0x00090d22) bg_popup_sub_pane_cp06

0x1023,	// (0x0008357c) popup_image_focus_window_g1

0x102b,	// (0x00083584) popup_image_focus_window_g2

0x1033,	// (0x0008358c) popup_image_focus_window_g3

0x103b,	// (0x00083594) popup_image_focus_window_g4

0x0003,

0xf670,	// (0x00091bc9) popup_image_focus_window_g

0x1043,	// (0x0008359c) popup_image_focus_window_t1

0x1051,	// (0x000835aa) popup_image_focus_window_t2

0x1061,	// (0x000835ba) popup_image_focus_window_t3

0x0002,

0xf679,	// (0x00091bd2) popup_image_focus_window_t

0xeeff,	// (0x00091458) camera2_autofocus_pane_g1

0xe82a,	// (0x00090d83) bg_tb_trans_pane_cp01

0x106f,	// (0x000835c8) popup_image_details_window_g1

0x1082,	// (0x000835db) popup_image_details_window_g2

0x0002,

0xf68b,	// (0x00091be4) popup_image_details_window_g

0x10ab,	// (0x00083604) popup_image_details_window_t1

0x10bd,	// (0x00083616) popup_image_details_window_t2

0x10d6,	// (0x0008362f) popup_image_details_window_t3

0x10ea,	// (0x00083643) popup_image_details_window_t4

0x1105,	// (0x0008365e) popup_image_details_window_t5

0x0004,

0xf692,	// (0x00091beb) popup_image_details_window_t

0xef5d,	// (0x000914b6) bg_calc_paper_pane_ParamLimits

0x4e88,	// (0x000873e1) grid_highlight_pane_cp013

0x507c,	// (0x000875d5) list_calc_pane_ParamLimits

0x508e,	// (0x000875e7) scroll_pane_cp024

0xef71,	// (0x000914ca) bg_calc_display_pane_ParamLimits

0x5096,	// (0x000875ef) calc_display_pane_t1_ParamLimits

0x50ab,	// (0x00087604) calc_display_pane_t2_ParamLimits

0x50c0,	// (0x00087619) calc_display_pane_t3_ParamLimits

0xf0f2,	// (0x0009164b) calc_display_pane_t_ParamLimits

0x5190,	// (0x000876e9) cell_calc_pane_g2

0x0001,

0xf10f,	// (0x00091668) cell_calc_pane_g

0x5199,	// (0x000876f2) cell_calc_pane_t1

0xefc6,	// (0x0009151f) grid_highlight_pane_cp02_ParamLimits

0xefdc,	// (0x00091535) toolbar_button_pane_cp01_ParamLimits

0xefdc,	// (0x00091535) toolbar_button_pane_cp01

0xdfaa,	// (0x00090503) temp_image_control_pane_ParamLimits

0xdfaa,	// (0x00090503) temp_image_control_pane

0x7bd5,	// (0x0008a12e) main_mp3_pane

0x111f,	// (0x00083678) temp_image_control_pane_g1_ParamLimits

0x111f,	// (0x00083678) temp_image_control_pane_g1

0x112d,	// (0x00083686) temp_image_control_pane_g2_ParamLimits

0x112d,	// (0x00083686) temp_image_control_pane_g2

0x113f,	// (0x00083698) temp_image_control_pane_g3_ParamLimits

0x113f,	// (0x00083698) temp_image_control_pane_g3

0x80c7,	// (0x0008a620) temp_image_control_pane_g4_ParamLimits

0x80c7,	// (0x0008a620) temp_image_control_pane_g4

0x0003,

0xf69d,	// (0x00091bf6) temp_image_control_pane_g_ParamLimits

0xf69d,	// (0x00091bf6) temp_image_control_pane_g

0x111f,	// (0x00083678) main_mp3_pane_g1

0x80d8,	// (0x0008a631) main_mp3_pane_g2

0x0007,

0xf6a6,	// (0x00091bff) main_mp3_pane_g

0x1174,	// (0x000836cd) main_mp3_pane_t1

0xef0d,	// (0x00091466) main_camera_pane_g8_ParamLimits

0xef0d,	// (0x00091466) main_camera_pane_g8

0x5a8f,	// (0x00087fe8) main_video_pane_g7_ParamLimits

0x5a8f,	// (0x00087fe8) main_video_pane_g7

0x7f30,	// (0x0008a489) main_camera2_pane_t7_ParamLimits

0x7f30,	// (0x0008a489) main_camera2_pane_t7

0xd4c8,	// (0x0008fa21) scroll_pane_cp025_ParamLimits

0xd4c8,	// (0x0008fa21) scroll_pane_cp025

0xd4dc,	// (0x0008fa35) scroll_pane_cp026_ParamLimits

0xd4dc,	// (0x0008fa35) scroll_pane_cp026

0xd4eb,	// (0x0008fa44) wml_content_pane_ParamLimits

0x4e88,	// (0x000873e1) main_touch_calib_pane

0x817c,	// (0x0008a6d5) main_touch_calib_pane_g1

0x8188,	// (0x0008a6e1) main_touch_calib_pane_g2

0x8194,	// (0x0008a6ed) main_touch_calib_pane_g3

0x81a0,	// (0x0008a6f9) main_touch_calib_pane_g4

0x0003,

0xf6c4,	// (0x00091c1d) main_touch_calib_pane_g

0x81ac,	// (0x0008a705) main_touch_calib_pane_t1

0x81c3,	// (0x0008a71c) main_touch_calib_pane_t2

0x0004,

0xf6cd,	// (0x00091c26) main_touch_calib_pane_t

0xdc3e,	// (0x00090197) mup_progress_pane_cp02

0xdc5d,	// (0x000901b6) navi_pane_g1

0xdcbf,	// (0x00090218) navi_pane_mp_t3

0x7bd5,	// (0x0008a12e) main_mp3_pane_ParamLimits

0x7d66,	// (0x0008a2bf) navi_pane_ParamLimits

0x111f,	// (0x00083678) main_mp3_pane_g1_ParamLimits

0x80d8,	// (0x0008a631) main_mp3_pane_g2_ParamLimits

0x80e4,	// (0x0008a63d) main_mp3_pane_g3_ParamLimits

0x80e4,	// (0x0008a63d) main_mp3_pane_g3

0x80f0,	// (0x0008a649) main_mp3_pane_g4_ParamLimits

0x80f0,	// (0x0008a649) main_mp3_pane_g4

0xeeff,	// (0x00091458) main_mp3_pane_g5_ParamLimits

0xeeff,	// (0x00091458) main_mp3_pane_g5

0x114f,	// (0x000836a8) main_mp3_pane_g6_ParamLimits

0x114f,	// (0x000836a8) main_mp3_pane_g6

0x115c,	// (0x000836b5) main_mp3_pane_g7_ParamLimits

0x115c,	// (0x000836b5) main_mp3_pane_g7

0x1168,	// (0x000836c1) main_mp3_pane_g8_ParamLimits

0x1168,	// (0x000836c1) main_mp3_pane_g8

0xf6a6,	// (0x00091bff) main_mp3_pane_g_ParamLimits

0x80fc,	// (0x0008a655) main_mp3_pane_t2

0x810c,	// (0x0008a665) main_mp3_pane_t3

0x1182,	// (0x000836db) main_mp3_pane_t4

0x1190,	// (0x000836e9) main_mp3_pane_t5

0x0005,

0xf6b7,	// (0x00091c10) main_mp3_pane_t

0x119e,	// (0x000836f7) mup_progress_pane_cp01

0x4ad7,	// (0x00087030) aid_zoom_text_secondary2

0x0fb0,	// (0x00083509) list_cale_ev2_pane

0x0fb8,	// (0x00083511) scroll_pane_cp023_ParamLimits

0x821e,	// (0x0008a777) field_cale_ev2_pane_ParamLimits

0x821e,	// (0x0008a777) field_cale_ev2_pane

0x8239,	// (0x0008a792) field_cale_ev2_pane_g1_ParamLimits

0x8239,	// (0x0008a792) field_cale_ev2_pane_g1

0x8245,	// (0x0008a79e) field_cale_ev2_pane_g2_ParamLimits

0x8245,	// (0x0008a79e) field_cale_ev2_pane_g2

0x825d,	// (0x0008a7b6) field_cale_ev2_pane_g3_ParamLimits

0x825d,	// (0x0008a7b6) field_cale_ev2_pane_g3

0x0003,

0xf6d8,	// (0x00091c31) field_cale_ev2_pane_g_ParamLimits

0xf6d8,	// (0x00091c31) field_cale_ev2_pane_g

0x8275,	// (0x0008a7ce) field_cale_ev2_pane_t1_ParamLimits

0x8275,	// (0x0008a7ce) field_cale_ev2_pane_t1

0x828c,	// (0x0008a7e5) field_cale_ev2_pane_t2_ParamLimits

0x828c,	// (0x0008a7e5) field_cale_ev2_pane_t2

0x0001,

0xf6e1,	// (0x00091c3a) field_cale_ev2_pane_t_ParamLimits

0xf6e1,	// (0x00091c3a) field_cale_ev2_pane_t

0x74b6,	// (0x00089a0f) main_postcard_pane_g5_ParamLimits

0x74b6,	// (0x00089a0f) main_postcard_pane_g5

0x74c4,	// (0x00089a1d) main_postcard_pane_g6_ParamLimits

0x74c4,	// (0x00089a1d) main_postcard_pane_g6

0xeef1,	// (0x0009144a) camera2_autofocus_pane_cp_ParamLimits

0xeef1,	// (0x0009144a) camera2_autofocus_pane_cp

0x7bd5,	// (0x0008a12e) main_mup3_pane

0x82e4,	// (0x0008a83d) main_mup3_pane_g1_ParamLimits

0x82e4,	// (0x0008a83d) main_mup3_pane_g1

0x8305,	// (0x0008a85e) main_mup3_pane_g2_ParamLimits

0x8305,	// (0x0008a85e) main_mup3_pane_g2

0x8379,	// (0x0008a8d2) main_mup3_pane_g3_ParamLimits

0x8379,	// (0x0008a8d2) main_mup3_pane_g3

0x83de,	// (0x0008a937) main_mup3_pane_g4_ParamLimits

0x83de,	// (0x0008a937) main_mup3_pane_g4

0x8443,	// (0x0008a99c) main_mup3_pane_g5_ParamLimits

0x8443,	// (0x0008a99c) main_mup3_pane_g5

0x84a8,	// (0x0008aa01) main_mup3_pane_g6_ParamLimits

0x84a8,	// (0x0008aa01) main_mup3_pane_g6

0xef0d,	// (0x00091466) main_mup3_pane_g7_ParamLimits

0xef0d,	// (0x00091466) main_mup3_pane_g7

0x0007,

0xf6f1,	// (0x00091c4a) main_mup3_pane_g_ParamLimits

0xf6f1,	// (0x00091c4a) main_mup3_pane_g

0x8522,	// (0x0008aa7b) main_mup3_pane_t1_ParamLimits

0x8522,	// (0x0008aa7b) main_mup3_pane_t1

0x858d,	// (0x0008aae6) main_mup3_pane_t2_ParamLimits

0x858d,	// (0x0008aae6) main_mup3_pane_t2

0x8656,	// (0x0008abaf) main_mup3_pane_t4_ParamLimits

0x8656,	// (0x0008abaf) main_mup3_pane_t4

0x86aa,	// (0x0008ac03) main_mup3_pane_t5_ParamLimits

0x86aa,	// (0x0008ac03) main_mup3_pane_t5

0x8762,	// (0x0008acbb) main_mup3_pane_t6_ParamLimits

0x8762,	// (0x0008acbb) main_mup3_pane_t6

0x0005,

0xf702,	// (0x00091c5b) main_mup3_pane_t_ParamLimits

0xf702,	// (0x00091c5b) main_mup3_pane_t

0x880c,	// (0x0008ad65) mup3_progress_pane_ParamLimits

0x880c,	// (0x0008ad65) mup3_progress_pane

0x888a,	// (0x0008ade3) popup_mup3_control_window_ParamLimits

0x888a,	// (0x0008ade3) popup_mup3_control_window

0x11b2,	// (0x0008370b) popup_mup3_text_window

0x88a7,	// (0x0008ae00) mup3_progress_pane_t1

0x88c5,	// (0x0008ae1e) mup3_progress_pane_t2

0x11ba,	// (0x00083713) mup3_progress_pane_t3

0x0002,

0xf70f,	// (0x00091c68) mup3_progress_pane_t

0x11d7,	// (0x00083730) mup_progress_pane_cp03

0xe7c9,	// (0x00090d22) bg_tb_trans_pane_cp04

0x88e3,	// (0x0008ae3c) mup3_volume_pane

0x88eb,	// (0x0008ae44) popup_mup3_control_window_g1

0x2103,	// (0x0008465c) mup3_volume_pane_g1

0x210c,	// (0x00084665) mup3_volume_pane_g2

0x2115,	// (0x0008466e) mup3_volume_pane_g3

0x0002,

0xf716,	// (0x00091c6f) mup3_volume_pane_g

0xe7c9,	// (0x00090d22) bg_tb_trans_pane_cp03

0x11e7,	// (0x00083740) popup_mup3_text_window_g1

0x11ef,	// (0x00083748) popup_mup3_text_window_t1

0xefb9,	// (0x00091512) list_calc_item_pane_g1_ParamLimits

0x0ca4,	// (0x000831fd) mup_volume_pane_cp_g1

0x81dc,	// (0x0008a735) main_touch_calib_pane_t3

0x81f2,	// (0x0008a74b) main_touch_calib_pane_t4

0x8208,	// (0x0008a761) main_touch_calib_pane_t5

0x4bbf,	// (0x00087118) aid_cell_size_toolbar2

0x4bc7,	// (0x00087120) aid_popup3_width_pane

0x4ac7,	// (0x00087020) aid_zoom_text_msg_primary

0x598f,	// (0x00087ee8) vorec_t7

0xef7d,	// (0x000914d6) bg_calc_paper_pane_g1_ParamLimits

0xef89,	// (0x000914e2) bg_calc_paper_pane_g2_ParamLimits

0xef95,	// (0x000914ee) bg_calc_paper_pane_g3_ParamLimits

0xefa1,	// (0x000914fa) bg_calc_paper_pane_g4_ParamLimits

0xefad,	// (0x00091506) bg_calc_paper_pane_g5_ParamLimits

0x5101,	// (0x0008765a) bg_calc_paper_pane_g6_ParamLimits

0x5112,	// (0x0008766b) bg_calc_paper_pane_g7_ParamLimits

0x5123,	// (0x0008767c) bg_calc_paper_pane_g8_ParamLimits

0xf0f9,	// (0x00091652) bg_calc_paper_pane_g_ParamLimits

0x5134,	// (0x0008768d) calc_bg_paper_pane_g9_ParamLimits

0xeef1,	// (0x0009144a) image_qvga_pane_ParamLimits

0xeef1,	// (0x0009144a) image_qvga_pane

0xee84,	// (0x000913dd) bg_popup_sub_pane_cp04_ParamLimits

0xdee1,	// (0x0009043a) popup_mup_playback_window_g1_ParamLimits

0xdeed,	// (0x00090446) popup_mup_playback_window_t1_ParamLimits

0xdf02,	// (0x0009045b) popup_mup_playback_window_t2_ParamLimits

0xf45c,	// (0x000919b5) popup_mup_playback_window_t_ParamLimits

0xeeff,	// (0x00091458) main_mup2_pane_g3_ParamLimits

0xeeff,	// (0x00091458) main_mup2_pane_g3

0x5c68,	// (0x000881c1) popup_toolbar_window_cp04

0xe2fd,	// (0x00090856) popup_call2_audio_second_window_g3_ParamLimits

0xe2fd,	// (0x00090856) popup_call2_audio_second_window_g3

0xe707,	// (0x00090c60) popup_call2_audio_first_window_g4_ParamLimits

0xe707,	// (0x00090c60) popup_call2_audio_first_window_g4

0x075b,	// (0x00082cb4) popup_call2_audio_in_window_g4_ParamLimits

0x075b,	// (0x00082cb4) popup_call2_audio_in_window_g4

0x75ca,	// (0x00089b23) aid_area_sk_bg_cut_ParamLimits

0x75ca,	// (0x00089b23) aid_area_sk_bg_cut

0xdf17,	// (0x00090470) aid_area_sk_bg_cut_2_ParamLimits

0xdf17,	// (0x00090470) aid_area_sk_bg_cut_2

0xe7c9,	// (0x00090d22) aid_placing_details_win

0xe7c9,	// (0x00090d22) aid_placing_details_win_2

0xeeff,	// (0x00091458) camera2_autofocus_pane_g1_ParamLimits

0x4e14,	// (0x0008736d) popup_fixed_preview_cale_window_ParamLimits

0x4e14,	// (0x0008736d) popup_fixed_preview_cale_window

0xdd06,	// (0x0009025f) navi_slider_pane_g3

0xdd0f,	// (0x00090268) navi_slider_pane_g4

0xdd18,	// (0x00090271) navi_slider_pane_g5

0xdd06,	// (0x0009025f) navi_slider_pane_g6

0x70d3,	// (0x0008962c) navi_slider_pane_g7

0xde18,	// (0x00090371) mup_scale_pane_g3

0xde21,	// (0x0009037a) mup_scale_pane_g4

0xde2a,	// (0x00090383) mup_scale_pane_g5

0x72f0,	// (0x00089849) mup_scale_pane_g6

0x72f9,	// (0x00089852) mup_scale_pane_g7

0x217a,	// (0x000846d3) cams2_slider_pane_g3

0x217a,	// (0x000846d3) cams2_slider_pane_g4

0x217a,	// (0x000846d3) cams2_slider_pane_g5

0x217a,	// (0x000846d3) cams2_slider_pane_g6

0x217a,	// (0x000846d3) cams2_slider_pane_g7

0xd3a8,	// (0x0008f901) camera2_autofocus_pane_cp_g1

0x0a33,	// (0x00082f8c) bg_popup_preview_window_pane_cp02_ParamLimits

0x0a33,	// (0x00082f8c) bg_popup_preview_window_pane_cp02

0x11fd,	// (0x00083756) list_fp_cale_pane_ParamLimits

0x11fd,	// (0x00083756) list_fp_cale_pane

0x1209,	// (0x00083762) popup_fixed_preview_cale_window_t1_ParamLimits

0x1209,	// (0x00083762) popup_fixed_preview_cale_window_t1

0x88f4,	// (0x0008ae4d) popup_fixed_preview_cale_window_t2_ParamLimits

0x88f4,	// (0x0008ae4d) popup_fixed_preview_cale_window_t2

0x8909,	// (0x0008ae62) popup_fixed_preview_cale_window_t3_ParamLimits

0x8909,	// (0x0008ae62) popup_fixed_preview_cale_window_t3

0x0002,

0xf71d,	// (0x00091c76) popup_fixed_preview_cale_window_t_ParamLimits

0xf71d,	// (0x00091c76) popup_fixed_preview_cale_window_t

0x891e,	// (0x0008ae77) list_single_fp_cale_pane_ParamLimits

0x891e,	// (0x0008ae77) list_single_fp_cale_pane

0x1227,	// (0x00083780) list_single_fp_cale_pane_g1_ParamLimits

0x1227,	// (0x00083780) list_single_fp_cale_pane_g1

0x1233,	// (0x0008378c) list_single_fp_cale_pane_g2_ParamLimits

0x1233,	// (0x0008378c) list_single_fp_cale_pane_g2

0x0002,

0xf724,	// (0x00091c7d) list_single_fp_cale_pane_g_ParamLimits

0xf724,	// (0x00091c7d) list_single_fp_cale_pane_g

0x124c,	// (0x000837a5) list_single_fp_cale_pane_t1_ParamLimits

0x124c,	// (0x000837a5) list_single_fp_cale_pane_t1

0x125e,	// (0x000837b7) list_single_fp_cale_pane_t2_ParamLimits

0x125e,	// (0x000837b7) list_single_fp_cale_pane_t2

0x0001,

0xf72b,	// (0x00091c84) list_single_fp_cale_pane_t_ParamLimits

0xf72b,	// (0x00091c84) list_single_fp_cale_pane_t

0x0000,

0x0000,

0x0000,

0x0000,

0x4e88,	// (0x000873e1) main_dialer_pane

0xe7c9,	// (0x00090d22) aid_cell_size_keypad

0xe7c9,	// (0x00090d22) dialer_ne_pane

0xe7c9,	// (0x00090d22) grid_dialer_command_1_pane

0xe7c9,	// (0x00090d22) grid_dialer_command_2_pane

0xe7c9,	// (0x00090d22) grid_dialer_keypad_pane

0x0bcb,	// (0x00083124) bg_popup_call_pane_cp06_ParamLimits

0x0bcb,	// (0x00083124) bg_popup_call_pane_cp06

0x0bcb,	// (0x00083124) dialer_ne_clear_pane_ParamLimits

0x0bcb,	// (0x00083124) dialer_ne_clear_pane

0xd3a8,	// (0x0008f901) dialer_ne_pane_g1

0xd37a,	// (0x0008f8d3) dialer_ne_pane_t1_ParamLimits

0xd37a,	// (0x0008f8d3) dialer_ne_pane_t1

0x14ba,	// (0x00083a13) dialer_ne_pane_t2_ParamLimits

0x14ba,	// (0x00083a13) dialer_ne_pane_t2

0x892e,	// (0x0008ae87) dialer_ne_pane_t3_ParamLimits

0x892e,	// (0x0008ae87) dialer_ne_pane_t3

0x0002,

0xf730,	// (0x00091c89) dialer_ne_pane_t_ParamLimits

0xf730,	// (0x00091c89) dialer_ne_pane_t

0x892e,	// (0x0008ae87) dialer_ne_pane_t3_copy1_ParamLimits

0x892e,	// (0x0008ae87) dialer_ne_pane_t3_copy1

0x1291,	// (0x000837ea) cell_dialer_keypad_pane_ParamLimits

0x1291,	// (0x000837ea) cell_dialer_keypad_pane

0xe82a,	// (0x00090d83) cell_dialer_command_1_pane_ParamLimits

0xe82a,	// (0x00090d83) cell_dialer_command_1_pane

0x12a8,	// (0x00083801) cell_dialer_command_2_pane_ParamLimits

0x12a8,	// (0x00083801) cell_dialer_command_2_pane

0xe82a,	// (0x00090d83) bg_button_pane_cp02_ParamLimits

0xe82a,	// (0x00090d83) bg_button_pane_cp02

0xeeff,	// (0x00091458) cell_dialer_keypad_pane_g1_ParamLimits

0xeeff,	// (0x00091458) cell_dialer_keypad_pane_g1

0xe82a,	// (0x00090d83) bg_button_pane_cp03_ParamLimits

0xe82a,	// (0x00090d83) bg_button_pane_cp03

0xeeff,	// (0x00091458) cell_dialer_command_1_pane_g1_ParamLimits

0xeeff,	// (0x00091458) cell_dialer_command_1_pane_g1

0xe7c9,	// (0x00090d22) bg_button_pane_cp04

0xd3a8,	// (0x0008f901) cell_dialer_command_2_pane_g1

0xe7c9,	// (0x00090d22) bg_button_pane_cp06

0xd3a8,	// (0x0008f901) dialer_ne_clear_pane_g1

0x700e,	// (0x00089567) navi_pane_g2

0x703c,	// (0x00089595) navi_pane_g3

0x0002,

0xf35f,	// (0x000918b8) navi_pane_g

0x7067,	// (0x000895c0) navi_pane_mv_g2

0x708e,	// (0x000895e7) navi_pane_mv_g5

0x7096,	// (0x000895ef) navi_pane_mv_t1

0xef71,	// (0x000914ca) main_clock2_pane

0xeef1,	// (0x0009144a) main_clock2_list_pane_ParamLimits

0xeef1,	// (0x0009144a) main_clock2_list_pane

0x89a3,	// (0x0008aefc) main_clock2_pane_t1_ParamLimits

0x89a3,	// (0x0008aefc) main_clock2_pane_t1

0x89d1,	// (0x0008af2a) main_clock2_pane_t2_ParamLimits

0x89d1,	// (0x0008af2a) main_clock2_pane_t2

0x0004,

0xf73c,	// (0x00091c95) main_clock2_pane_t_ParamLimits

0xf73c,	// (0x00091c95) main_clock2_pane_t

0x8a36,	// (0x0008af8f) popup_clock_analogue_window_cp03_ParamLimits

0x8a36,	// (0x0008af8f) popup_clock_analogue_window_cp03

0x8a54,	// (0x0008afad) popup_clock_digital_window_cp02_ParamLimits

0x8a54,	// (0x0008afad) popup_clock_digital_window_cp02

0x8ac9,	// (0x0008b022) main_clock2_list_single_pane_ParamLimits

0x8ac9,	// (0x0008b022) main_clock2_list_single_pane

0xd372,	// (0x0008f8cb) list_highlight_pane_cp05

0x12e9,	// (0x00083842) main_clock2_list_single_pane_t1

0x5c68,	// (0x000881c1) popup_toolbar_window_cp04_ParamLimits

0xef0d,	// (0x00091466) camera2_autofocus_pane_g2_ParamLimits

0xef0d,	// (0x00091466) camera2_autofocus_pane_g2

0xef0d,	// (0x00091466) camera2_autofocus_pane_g3_ParamLimits

0xef0d,	// (0x00091466) camera2_autofocus_pane_g3

0xef0d,	// (0x00091466) camera2_autofocus_pane_g4_ParamLimits

0xef0d,	// (0x00091466) camera2_autofocus_pane_g4

0xef0d,	// (0x00091466) camera2_autofocus_pane_g5_ParamLimits

0xef0d,	// (0x00091466) camera2_autofocus_pane_g5

0x0004,

0xf680,	// (0x00091bd9) camera2_autofocus_pane_g_ParamLimits

0xf680,	// (0x00091bd9) camera2_autofocus_pane_g

0x82a1,	// (0x0008a7fa) camera2_autofocus_pane_cp_g2

0x82a9,	// (0x0008a802) camera2_autofocus_pane_cp_g3

0x82b1,	// (0x0008a80a) camera2_autofocus_pane_cp_g4

0x82b9,	// (0x0008a812) camera2_autofocus_pane_cp_g5

0x0004,

0xf6e6,	// (0x00091c3f) camera2_autofocus_pane_cp_g

0xe7c9,	// (0x00090d22) popup_dialer_spcha_window

0xe7c9,	// (0x00090d22) bg_popup_sub_pane_cp07

0xe7c9,	// (0x00090d22) list_spcha_pane

0x12f7,	// (0x00083850) list_single_spcha_pane_ParamLimits

0x12f7,	// (0x00083850) list_single_spcha_pane

0xe7c9,	// (0x00090d22) list_highlight_pane_cp06

0xd911,	// (0x0008fe6a) list_single_spcha_pane_t1

0x0505,	// (0x00082a5e) popup_call2_audio_out_window_g4_ParamLimits

0x0505,	// (0x00082a5e) popup_call2_audio_out_window_g4

0x4e88,	// (0x000873e1) main_imed2_pane

0x7c7f,	// (0x0008a1d8) popup_imed_adjust2_window

0x7c92,	// (0x0008a1eb) popup_imed_trans_window_ParamLimits

0x7c92,	// (0x0008a1eb) popup_imed_trans_window

0x0d79,	// (0x000832d2) popup_blid_sat_info2_window_t1

0x0d87,	// (0x000832e0) popup_blid_sat_info2_window_t2

0x000a,

0xf615,	// (0x00091b6e) popup_blid_sat_info2_window_t

0x8b80,	// (0x0008b0d9) aid_size_cell_colour_35

0x8b9a,	// (0x0008b0f3) aid_size_cell_colour_112

0x8bb1,	// (0x0008b10a) aid_size_cell_effect

0xe82a,	// (0x00090d83) bg_tb_trans_pane_cp02

0xe78f,	// (0x00090ce8) heading_imed_pane

0x8bcb,	// (0x0008b124) listscroll_imed_pane

0x1309,	// (0x00083862) heading_imed_pane_g1

0x1311,	// (0x0008386a) heading_imed_pane_t1

0x131f,	// (0x00083878) grid_imed_colour_35_pane_ParamLimits

0x131f,	// (0x00083878) grid_imed_colour_35_pane

0x8bd7,	// (0x0008b130) grid_imed_effect_pane

0x133b,	// (0x00083894) list_imed_aspect_pane

0x8be7,	// (0x0008b140) scroll_pane_cp027_ParamLimits

0x8be7,	// (0x0008b140) scroll_pane_cp027

0x8bf3,	// (0x0008b14c) cell_imed_effect_pane_ParamLimits

0x8bf3,	// (0x0008b14c) cell_imed_effect_pane

0x1343,	// (0x0008389c) cell_imed_colour_pane_ParamLimits

0x1343,	// (0x0008389c) cell_imed_colour_pane

0x138d,	// (0x000838e6) cell_imed_colour_pane_g1_ParamLimits

0x138d,	// (0x000838e6) cell_imed_colour_pane_g1

0x139e,	// (0x000838f7) hgihlgiht_grid_pane_cp016_ParamLimits

0x139e,	// (0x000838f7) hgihlgiht_grid_pane_cp016

0x8c0f,	// (0x0008b168) cell_imed_effect_pane_g1

0x8c17,	// (0x0008b170) grid_highlight_pane_cp017

0x13af,	// (0x00083908) list_imed_single_pane_ParamLimits

0x13af,	// (0x00083908) list_imed_single_pane

0xe7c9,	// (0x00090d22) list_highlight_pane_cp07

0x13c3,	// (0x0008391c) list_imed_aspect_pane_comp1_t1

0xe781,	// (0x00090cda) bg_tb_trans_pane_cp05

0x13e5,	// (0x0008393e) popup_imed_adjust2_window_g1

0x140c,	// (0x00083965) popup_imed_adjust2_window_t1

0x1424,	// (0x0008397d) slider_imed_adjust_pane

0x1438,	// (0x00083991) slider_imed_adjust_pane_g1

0x1448,	// (0x000839a1) slider_imed_adjust_pane_g2

0x1458,	// (0x000839b1) slider_imed_adjust_pane_g3

0x1469,	// (0x000839c2) slider_imed_adjust_pane_g4

0x0003,

0xf759,	// (0x00091cb2) slider_imed_adjust_pane_g

0x8c20,	// (0x0008b179) aid_size_cell_clipart2

0x147a,	// (0x000839d3) grid_imed_clipart_pane

0x1484,	// (0x000839dd) scroll_pane_cp031

0x8c2c,	// (0x0008b185) cell_imed_clipart_pane_ParamLimits

0x8c2c,	// (0x0008b185) cell_imed_clipart_pane

0x8c4a,	// (0x0008b1a3) cell_imed_clipart_pane_g1

0xe7c9,	// (0x00090d22) grid_highlight_pane_cp014

0x8985,	// (0x0008aede) main_clock2_pane_g1_ParamLimits

0x8985,	// (0x0008aede) main_clock2_pane_g1

0x8a70,	// (0x0008afc9) aid_call2_pane_cp10

0x8a82,	// (0x0008afdb) aid_call_pane_cp10

0xdc32,	// (0x0009018b) popup_clock_analogue_window_cp10_g1

0xdc32,	// (0x0009018b) popup_clock_analogue_window_cp10_g2

0x8a94,	// (0x0008afed) popup_clock_analogue_window_cp10_g3

0x8a94,	// (0x0008afed) popup_clock_analogue_window_cp10_g4

0xdc32,	// (0x0009018b) popup_clock_analogue_window_cp10_g5

0x0004,

0xf747,	// (0x00091ca0) popup_clock_analogue_window_cp10_g

0x8aaa,	// (0x0008b003) popup_clock_analogue_window_cp10_t1

0x8adb,	// (0x0008b034) clock_digital_number_pane_cp10_ParamLimits

0x8adb,	// (0x0008b034) clock_digital_number_pane_cp10

0x8af5,	// (0x0008b04e) clock_digital_number_pane_cp11_ParamLimits

0x8af5,	// (0x0008b04e) clock_digital_number_pane_cp11

0x8b0f,	// (0x0008b068) clock_digital_number_pane_cp12_ParamLimits

0x8b0f,	// (0x0008b068) clock_digital_number_pane_cp12

0x8b29,	// (0x0008b082) clock_digital_number_pane_cp13_ParamLimits

0x8b29,	// (0x0008b082) clock_digital_number_pane_cp13

0x8b45,	// (0x0008b09e) clock_digital_separator_pane_cp10_ParamLimits

0x8b45,	// (0x0008b09e) clock_digital_separator_pane_cp10

0x8b5f,	// (0x0008b0b8) popup_clock_digital_window_cp02_t1_ParamLimits

0x8b5f,	// (0x0008b0b8) popup_clock_digital_window_cp02_t1

0xee7c,	// (0x000913d5) clock_digital_number_pane_cp10_g1

0xee7c,	// (0x000913d5) clock_digital_number_pane_cp10_g2

0x0001,

0xf762,	// (0x00091cbb) clock_digital_number_pane_cp10_g

0xee7c,	// (0x000913d5) clock_digital_separator_pane_cp10_g1

0xee7c,	// (0x000913d5) clock_digital_separator_pane_g2_cp10

0xdccd,	// (0x00090226) navi_pane_vded_g4

0xdcd6,	// (0x0009022f) navi_pane_vded_g5

0xdcdf,	// (0x00090238) navi_pane_vded_t1

0x4e88,	// (0x000873e1) main_vded_pane

0x8c53,	// (0x0008b1ac) main_vded_pane_g1

0x8c5f,	// (0x0008b1b8) main_vded_pane_g2

0x8c69,	// (0x0008b1c2) main_vded_pane_g3

0x0002,

0xf767,	// (0x00091cc0) main_vded_pane_g

0x8c73,	// (0x0008b1cc) main_vded_pane_t1

0x8c81,	// (0x0008b1da) main_vded_pane_t2

0x0001,

0xf76e,	// (0x00091cc7) main_vded_pane_t

0x8c8f,	// (0x0008b1e8) vded_slider_pane

0x8c99,	// (0x0008b1f2) vded_video_pane

0x148c,	// (0x000839e5) vded_video_pane_g1

0x8ca5,	// (0x0008b1fe) vded_video_pane_g2

0xd3a8,	// (0x0008f901) vded_video_pane_g3

0x0002,

0xf773,	// (0x00091ccc) vded_video_pane_g

0x1496,	// (0x000839ef) vded_slider_pane_g1

0x0ca4,	// (0x000831fd) vded_slider_pane_g2

0x149f,	// (0x000839f8) vded_slider_pane_g3

0x14a8,	// (0x00083a01) vded_slider_pane_g4

0x14b1,	// (0x00083a0a) vded_slider_pane_g5

0x0004,

0xf77a,	// (0x00091cd3) vded_slider_pane_g

0x887e,	// (0x0008add7) mup3_rocker_pane_ParamLimits

0x887e,	// (0x0008add7) mup3_rocker_pane

0x8cae,	// (0x0008b207) mup3_control_keys_pane_g1

0x8cb6,	// (0x0008b20f) mup3_control_keys_pane_g2

0x8cbe,	// (0x0008b217) mup3_control_keys_pane_g3

0x8cc6,	// (0x0008b21f) mup3_control_keys_pane_g4

0x0003,

0xf785,	// (0x00091cde) mup3_control_keys_pane_g

0x4e3c,	// (0x00087395) popup_toolbar2_fixed_window_cp01_ParamLimits

0x4e3c,	// (0x00087395) popup_toolbar2_fixed_window_cp01

0x889a,	// (0x0008adf3) popup_toolbar2_fixed_window_cp02_ParamLimits

0x889a,	// (0x0008adf3) popup_toolbar2_fixed_window_cp02

0xe46f,	// (0x000909c8) popup_call2_audio_second_window_t4_ParamLimits

0xe46f,	// (0x000909c8) popup_call2_audio_second_window_t4

0x03ca,	// (0x00082923) popup_call2_audio_first_window_t6_ParamLimits

0x03ca,	// (0x00082923) popup_call2_audio_first_window_t6

0x0608,	// (0x00082b61) popup_call2_audio_out_window_t6_ParamLimits

0x0608,	// (0x00082b61) popup_call2_audio_out_window_t6

0x4e88,	// (0x000873e1) main_vitu_pane

0xeef1,	// (0x0009144a) aid_size_cell_itu_ParamLimits

0xeef1,	// (0x0009144a) aid_size_cell_itu

0xeef1,	// (0x0009144a) bg_popup_window_pane_cp08_ParamLimits

0xeef1,	// (0x0009144a) bg_popup_window_pane_cp08

0xeef1,	// (0x0009144a) field_vitu_entry_pane_ParamLimits

0xeef1,	// (0x0009144a) field_vitu_entry_pane

0xeef1,	// (0x0009144a) grid_vitu_function_pane_ParamLimits

0xeef1,	// (0x0009144a) grid_vitu_function_pane

0xeef1,	// (0x0009144a) grid_vitu_itu_pane_ParamLimits

0xeef1,	// (0x0009144a) grid_vitu_itu_pane

0xeef1,	// (0x0009144a) cell_vitu_itu_pane_ParamLimits

0xeef1,	// (0x0009144a) cell_vitu_itu_pane

0xeef1,	// (0x0009144a) cell_vitu_function_pane_ParamLimits

0xeef1,	// (0x0009144a) cell_vitu_function_pane

0xe82a,	// (0x00090d83) bg_popup_sub_pane_cp08_ParamLimits

0xe82a,	// (0x00090d83) bg_popup_sub_pane_cp08

0xd3c2,	// (0x0008f91b) field_vitu_entry_pane_t1_ParamLimits

0xd3c2,	// (0x0008f91b) field_vitu_entry_pane_t1

0x14ba,	// (0x00083a13) field_vitu_entry_pane_t2_ParamLimits

0x14ba,	// (0x00083a13) field_vitu_entry_pane_t2

0x0001,

0xf78e,	// (0x00091ce7) field_vitu_entry_pane_t_ParamLimits

0xf78e,	// (0x00091ce7) field_vitu_entry_pane_t

0x0bcb,	// (0x00083124) bg_button_pane_cp05_ParamLimits

0x0bcb,	// (0x00083124) bg_button_pane_cp05

0x14d7,	// (0x00083a30) cell_vitu_itu_pane_g1

0xe79b,	// (0x00090cf4) cell_vitu_itu_pane_t1_ParamLimits

0xe79b,	// (0x00090cf4) cell_vitu_itu_pane_t1

0xe79b,	// (0x00090cf4) cell_vitu_itu_pane_t2_ParamLimits

0xe79b,	// (0x00090cf4) cell_vitu_itu_pane_t2

0x0002,

0xf793,	// (0x00091cec) cell_vitu_itu_pane_t_ParamLimits

0xf793,	// (0x00091cec) cell_vitu_itu_pane_t

0xe7c9,	// (0x00090d22) bg_button_pane_cp07

0xd3a8,	// (0x0008f901) cell_vitu_function_pane_g1

0x4f85,	// (0x000874de) main_calc_pane_g1

0x4bfb,	// (0x00087154) aid_visual_content_pane

0x4e88,	// (0x000873e1) main_vradio_pane

0xef0d,	// (0x00091466) main_vradio_pane_g1_ParamLimits

0xef0d,	// (0x00091466) main_vradio_pane_g1

0xef0d,	// (0x00091466) main_vradio_pane_g2_ParamLimits

0xef0d,	// (0x00091466) main_vradio_pane_g2

0x0001,

0xf79a,	// (0x00091cf3) main_vradio_pane_g_ParamLimits

0xf79a,	// (0x00091cf3) main_vradio_pane_g

0xd37a,	// (0x0008f8d3) main_vradio_pane_t1_ParamLimits

0xd37a,	// (0x0008f8d3) main_vradio_pane_t1

0xd37a,	// (0x0008f8d3) main_vradio_pane_t2_ParamLimits

0xd37a,	// (0x0008f8d3) main_vradio_pane_t2

0xd37a,	// (0x0008f8d3) main_vradio_pane_t3_ParamLimits

0xd37a,	// (0x0008f8d3) main_vradio_pane_t3

0x0002,

0xf79f,	// (0x00091cf8) main_vradio_pane_t_ParamLimits

0xf79f,	// (0x00091cf8) main_vradio_pane_t

0xeef1,	// (0x0009144a) vradio_rocker_control_pane_ParamLimits

0xeef1,	// (0x0009144a) vradio_rocker_control_pane

0xeef1,	// (0x0009144a) vradio_station_info_pane_ParamLimits

0xeef1,	// (0x0009144a) vradio_station_info_pane

0xe82a,	// (0x00090d83) vradio_frequency_info_pane_ParamLimits

0xe82a,	// (0x00090d83) vradio_frequency_info_pane

0xd3a8,	// (0x0008f901) vradio_station_info_pane_g1

0xe79b,	// (0x00090cf4) vradio_station_info_pane_t1_ParamLimits

0xe79b,	// (0x00090cf4) vradio_station_info_pane_t1

0xd37a,	// (0x0008f8d3) vradio_station_info_pane_t2_ParamLimits

0xd37a,	// (0x0008f8d3) vradio_station_info_pane_t2

0x0001,

0xf7a6,	// (0x00091cff) vradio_station_info_pane_t_ParamLimits

0xf7a6,	// (0x00091cff) vradio_station_info_pane_t

0xe7c9,	// (0x00090d22) vradio_tuning_pane

0x8cd6,	// (0x0008b22f) vradio_rocker_control_pane_g1

0x14f3,	// (0x00083a4c) vradio_rocker_control_pane_g2

0x8cde,	// (0x0008b237) vradio_rocker_control_pane_g3

0x8ce6,	// (0x0008b23f) vradio_rocker_control_pane_g4

0x8cf0,	// (0x0008b249) vradio_rocker_control_pane_g5

0x0004,

0xf7ab,	// (0x00091d04) vradio_rocker_control_pane_g

0xd3a8,	// (0x0008f901) vradio_frequency_info_pane_g1

0xd3c2,	// (0x0008f91b) vradio_frequency_info_pane_t1_ParamLimits

0xd3c2,	// (0x0008f91b) vradio_frequency_info_pane_t1

0x8cf8,	// (0x0008b251) vradio_tuning_pane_g1

0x8d05,	// (0x0008b25e) vradio_tuning_pane_t1

0x4c3c,	// (0x00087195) area_side_right_pane_ParamLimits

0x4c3c,	// (0x00087195) area_side_right_pane

0x09fa,	// (0x00082f53) status_small_pane_g1

0x0a02,	// (0x00082f5b) status_small_pane_g2

0x0a0b,	// (0x00082f64) status_small_pane_g3

0x0a14,	// (0x00082f6d) status_small_pane_g4

0x0003,

0xf577,	// (0x00091ad0) status_small_pane_g

0x0a1d,	// (0x00082f76) status_small_pane_t1

0x4e88,	// (0x000873e1) main_video3_pane

0x14fb,	// (0x00083a54) cams_zoom_vslider_pane

0x1503,	// (0x00083a5c) image3_wide_pane_ParamLimits

0x1503,	// (0x00083a5c) image3_wide_pane

0x151d,	// (0x00083a76) image3_wide_small_pane

0x1529,	// (0x00083a82) main_video3_pane_g1_ParamLimits

0x1529,	// (0x00083a82) main_video3_pane_g1

0x1545,	// (0x00083a9e) main_video3_pane_g2_ParamLimits

0x1545,	// (0x00083a9e) main_video3_pane_g2

0x0001,

0xf7b6,	// (0x00091d0f) main_video3_pane_g_ParamLimits

0xf7b6,	// (0x00091d0f) main_video3_pane_g

0x1561,	// (0x00083aba) main_video3_pane_t1_ParamLimits

0x1561,	// (0x00083aba) main_video3_pane_t1

0x158c,	// (0x00083ae5) main_video3_pane_t2_ParamLimits

0x158c,	// (0x00083ae5) main_video3_pane_t2

0x15b9,	// (0x00083b12) main_video3_pane_t3_ParamLimits

0x15b9,	// (0x00083b12) main_video3_pane_t3

0x0002,

0xf7bb,	// (0x00091d14) main_video3_pane_t_ParamLimits

0xf7bb,	// (0x00091d14) main_video3_pane_t

0x15e6,	// (0x00083b3f) cams_zoom_vslider_pane_g1

0x15ef,	// (0x00083b48) cams_zoom_vslider_pane_g2

0x0001,

0xf7c2,	// (0x00091d1b) cams_zoom_vslider_pane_g

0x15f7,	// (0x00083b50) small_slider_vertical_pane

0xd3a8,	// (0x0008f901) small_slider_vertical_pane_g1

0xd3a8,	// (0x0008f901) small_slider_vertical_pane_g2

0x15ff,	// (0x00083b58) small_slider_vertical_pane_g3

0x0002,

0xf7c7,	// (0x00091d20) small_slider_vertical_pane_g

0x4e88,	// (0x000873e1) main_hwr_training_pane

0x1608,	// (0x00083b61) hwr_training_instruct_pane_ParamLimits

0x1608,	// (0x00083b61) hwr_training_instruct_pane

0x8d14,	// (0x0008b26d) hwr_training_navi_pane_ParamLimits

0x8d14,	// (0x0008b26d) hwr_training_navi_pane

0x8d2e,	// (0x0008b287) hwr_training_write_pane_ParamLimits

0x8d2e,	// (0x0008b287) hwr_training_write_pane

0xe7c9,	// (0x00090d22) bg_frame_shadow_pane

0x163f,	// (0x00083b98) hwr_training_write_pane_g1

0x1647,	// (0x00083ba0) hwr_training_write_pane_g2

0x164f,	// (0x00083ba8) hwr_training_write_pane_g3

0x1657,	// (0x00083bb0) hwr_training_write_pane_g4

0x165f,	// (0x00083bb8) hwr_training_write_pane_g5

0x1667,	// (0x00083bc0) hwr_training_write_pane_g6

0x166f,	// (0x00083bc8) hwr_training_write_pane_g7

0x0006,

0xf7ce,	// (0x00091d27) hwr_training_write_pane_g

0x8d66,	// (0x0008b2bf) hwr_training_navi_pane_g1_ParamLimits

0x8d66,	// (0x0008b2bf) hwr_training_navi_pane_g1

0x8d78,	// (0x0008b2d1) hwr_training_navi_pane_g2_ParamLimits

0x8d78,	// (0x0008b2d1) hwr_training_navi_pane_g2

0x8d8a,	// (0x0008b2e3) hwr_training_navi_pane_g3_ParamLimits

0x8d8a,	// (0x0008b2e3) hwr_training_navi_pane_g3

0x8d9a,	// (0x0008b2f3) hwr_training_navi_pane_g4_ParamLimits

0x8d9a,	// (0x0008b2f3) hwr_training_navi_pane_g4

0x0004,

0xf7dd,	// (0x00091d36) hwr_training_navi_pane_g_ParamLimits

0xf7dd,	// (0x00091d36) hwr_training_navi_pane_g

0x8db4,	// (0x0008b30d) hwr_training_navi_pane_t1

0x8dc2,	// (0x0008b31b) list_single_hwr_training_instruct_pane_ParamLimits

0x8dc2,	// (0x0008b31b) list_single_hwr_training_instruct_pane

0x16c6,	// (0x00083c1f) list_single_hwr_training_instruct_pane_t1

0x0e80,	// (0x000833d9) bg_frame_shadow_pane_g1

0x16d5,	// (0x00083c2e) bg_frame_shadow_pane_g2

0x16dd,	// (0x00083c36) bg_frame_shadow_pane_g3

0x16e5,	// (0x00083c3e) bg_frame_shadow_pane_g4

0x16ed,	// (0x00083c46) bg_frame_shadow_pane_g5

0x16f5,	// (0x00083c4e) bg_frame_shadow_pane_g6

0x16fd,	// (0x00083c56) bg_frame_shadow_pane_g7

0xf029,	// (0x00091582) bg_frame_shadow_pane_g8

0x0007,

0xf7e8,	// (0x00091d41) bg_frame_shadow_pane_g

0x4e88,	// (0x000873e1) main_video_tele_dialer_pane

0x8ddb,	// (0x0008b334) aid_size_cell_video_keypad_ParamLimits

0x8ddb,	// (0x0008b334) aid_size_cell_video_keypad

0x8deb,	// (0x0008b344) grid_video_dialer_keypad_pane_ParamLimits

0x8deb,	// (0x0008b344) grid_video_dialer_keypad_pane

0x8e1d,	// (0x0008b376) video_down_pane_cp_ParamLimits

0x8e1d,	// (0x0008b376) video_down_pane_cp

0x8e47,	// (0x0008b3a0) cell_video_dialer_keypad_pane_ParamLimits

0x8e47,	// (0x0008b3a0) cell_video_dialer_keypad_pane

0x1705,	// (0x00083c5e) bg_button_pane_cp08_ParamLimits

0x1705,	// (0x00083c5e) bg_button_pane_cp08

0x8e5e,	// (0x0008b3b7) cell_video_dialer_keypad_pane_g1_ParamLimits

0x8e5e,	// (0x0008b3b7) cell_video_dialer_keypad_pane_g1

0x8872,	// (0x0008adcb) mup3_rocker2_pane_ParamLimits

0x8872,	// (0x0008adcb) mup3_rocker2_pane

0xd3a8,	// (0x0008f901) mup3_rocker2_pane_g1

0x7be3,	// (0x0008a13c) main_dialer2_pane

0x4e88,	// (0x000873e1) main_mp4_pane

0x8eb7,	// (0x0008b410) main_mp4_pane_g1_ParamLimits

0x8eb7,	// (0x0008b410) main_mp4_pane_g1

0x8ec5,	// (0x0008b41e) main_mp4_pane_g2_ParamLimits

0x8ec5,	// (0x0008b41e) main_mp4_pane_g2

0x8ed3,	// (0x0008b42c) main_mp4_pane_g3_ParamLimits

0x8ed3,	// (0x0008b42c) main_mp4_pane_g3

0x8f26,	// (0x0008b47f) main_mp4_pane_g4_ParamLimits

0x8f26,	// (0x0008b47f) main_mp4_pane_g4

0x8f54,	// (0x0008b4ad) main_mp4_pane_g5_ParamLimits

0x8f54,	// (0x0008b4ad) main_mp4_pane_g5

0x0007,

0xf808,	// (0x00091d61) main_mp4_pane_g_ParamLimits

0xf808,	// (0x00091d61) main_mp4_pane_g

0x8fc8,	// (0x0008b521) main_mp4_pane_t1_ParamLimits

0x8fc8,	// (0x0008b521) main_mp4_pane_t1

0x9024,	// (0x0008b57d) main_mp4_pane_t2_ParamLimits

0x9024,	// (0x0008b57d) main_mp4_pane_t2

0x188d,	// (0x00083de6) main_mp4_pane_t3_ParamLimits

0x188d,	// (0x00083de6) main_mp4_pane_t3

0x9076,	// (0x0008b5cf) main_mp4_pane_t4_ParamLimits

0x9076,	// (0x0008b5cf) main_mp4_pane_t4

0x0003,

0xf819,	// (0x00091d72) main_mp4_pane_t_ParamLimits

0xf819,	// (0x00091d72) main_mp4_pane_t

0x90b6,	// (0x0008b60f) mp4_progress_pane_ParamLimits

0x90b6,	// (0x0008b60f) mp4_progress_pane

0x9100,	// (0x0008b659) mp4_rocker_pane_ParamLimits

0x9100,	// (0x0008b659) mp4_rocker_pane

0x195d,	// (0x00083eb6) mp4_progress_pane_t1

0x1976,	// (0x00083ecf) mp4_progress_pane_t2

0x0001,

0xf822,	// (0x00091d7b) mp4_progress_pane_t

0x198f,	// (0x00083ee8) mup_progress_pane_cp04

0x217a,	// (0x000846d3) mp4_rocker_pane_g1

0x9120,	// (0x0008b679) aid_cell_size_keypad2_ParamLimits

0x9120,	// (0x0008b679) aid_cell_size_keypad2

0x9130,	// (0x0008b689) dialer2_ne_pane_ParamLimits

0x9130,	// (0x0008b689) dialer2_ne_pane

0x913c,	// (0x0008b695) grid_dialer2_keypad_pane_ParamLimits

0x913c,	// (0x0008b695) grid_dialer2_keypad_pane

0x0bbd,	// (0x00083116) bg_popup_call_pane_cp07_ParamLimits

0x0bbd,	// (0x00083116) bg_popup_call_pane_cp07

0x914a,	// (0x0008b6a3) dialer2_ne_pane_t1_ParamLimits

0x914a,	// (0x0008b6a3) dialer2_ne_pane_t1

0x916f,	// (0x0008b6c8) cell_dialer2_keypad_pane_ParamLimits

0x916f,	// (0x0008b6c8) cell_dialer2_keypad_pane

0x19b4,	// (0x00083f0d) bg_button_pane_pane_cp04_ParamLimits

0x19b4,	// (0x00083f0d) bg_button_pane_pane_cp04

0x9186,	// (0x0008b6df) cell_dialer2_keypad_pane_g1_ParamLimits

0x9186,	// (0x0008b6df) cell_dialer2_keypad_pane_g1

0x5b3a,	// (0x00088093) aid_placing_vt_set_content_ParamLimits

0x5b3a,	// (0x00088093) aid_placing_vt_set_content

0x5b62,	// (0x000880bb) aid_placing_vt_set_title_ParamLimits

0x5b62,	// (0x000880bb) aid_placing_vt_set_title

0x4e88,	// (0x000873e1) main_image3_pane

0x9220,	// (0x0008b779) area_side_right_pane_cp01_ParamLimits

0x9220,	// (0x0008b779) area_side_right_pane_cp01

0x924f,	// (0x0008b7a8) main_image3_pane_g1_ParamLimits

0x924f,	// (0x0008b7a8) main_image3_pane_g1

0x925d,	// (0x0008b7b6) main_image3_pane_g2_ParamLimits

0x925d,	// (0x0008b7b6) main_image3_pane_g2

0x9276,	// (0x0008b7cf) main_image3_pane_g3_ParamLimits

0x9276,	// (0x0008b7cf) main_image3_pane_g3

0x928f,	// (0x0008b7e8) main_image3_pane_g4_ParamLimits

0x928f,	// (0x0008b7e8) main_image3_pane_g4

0x0003,

0xf831,	// (0x00091d8a) main_image3_pane_g_ParamLimits

0xf831,	// (0x00091d8a) main_image3_pane_g

0x92a8,	// (0x0008b801) main_image3_pane_t1_ParamLimits

0x92a8,	// (0x0008b801) main_image3_pane_t1

0x92cd,	// (0x0008b826) main_image3_pane_t2_ParamLimits

0x92cd,	// (0x0008b826) main_image3_pane_t2

0x92ec,	// (0x0008b845) main_image3_pane_t3_ParamLimits

0x92ec,	// (0x0008b845) main_image3_pane_t3

0x0003,

0xf83a,	// (0x00091d93) main_image3_pane_t_ParamLimits

0xf83a,	// (0x00091d93) main_image3_pane_t

0xeef1,	// (0x0009144a) grid_sctrl_middle_pane_cp01_ParamLimits

0xeef1,	// (0x0009144a) grid_sctrl_middle_pane_cp01

0x934d,	// (0x0008b8a6) cell_sctrl_middle_pane_cp01_ParamLimits

0x934d,	// (0x0008b8a6) cell_sctrl_middle_pane_cp01

0x935e,	// (0x0008b8b7) cell_sctrl_middle_pane_cp01_g1_ParamLimits

0x935e,	// (0x0008b8b7) cell_sctrl_middle_pane_cp01_g1

0x4e88,	// (0x000873e1) main_call4_pane

0x936b,	// (0x0008b8c4) aid_size_button_call4_ParamLimits

0x936b,	// (0x0008b8c4) aid_size_button_call4

0x93a1,	// (0x0008b8fa) call4_windows_pane_ParamLimits

0x93a1,	// (0x0008b8fa) call4_windows_pane

0x93b6,	// (0x0008b90f) grid_call4_button_pane_ParamLimits

0x93b6,	// (0x0008b90f) grid_call4_button_pane

0x93e6,	// (0x0008b93f) call4_windows_conf_pane

0x93ff,	// (0x0008b958) popup_call4_audio_first_window_ParamLimits

0x93ff,	// (0x0008b958) popup_call4_audio_first_window

0x944f,	// (0x0008b9a8) popup_call4_audio_second_window_ParamLimits

0x944f,	// (0x0008b9a8) popup_call4_audio_second_window

0x9468,	// (0x0008b9c1) popup_call4_audio_wait_window_ParamLimits

0x9468,	// (0x0008b9c1) popup_call4_audio_wait_window

0x9476,	// (0x0008b9cf) cell_call4_button_pane_ParamLimits

0x9476,	// (0x0008b9cf) cell_call4_button_pane

0x9499,	// (0x0008b9f2) bg_button_pane_cp09_ParamLimits

0x9499,	// (0x0008b9f2) bg_button_pane_cp09

0x94a5,	// (0x0008b9fe) cell_call4_button_pane_g1_ParamLimits

0x94a5,	// (0x0008b9fe) cell_call4_button_pane_g1

0x94b2,	// (0x0008ba0b) cell_call4_button_pane_t1_ParamLimits

0x94b2,	// (0x0008ba0b) cell_call4_button_pane_t1

0x19c8,	// (0x00083f21) popup_call4_audio_conf_window_ParamLimits

0x19c8,	// (0x00083f21) popup_call4_audio_conf_window

0x88a7,	// (0x0008ae00) mup3_progress_pane_t1_ParamLimits

0x88c5,	// (0x0008ae1e) mup3_progress_pane_t2_ParamLimits

0x11ba,	// (0x00083713) mup3_progress_pane_t3_ParamLimits

0xf70f,	// (0x00091c68) mup3_progress_pane_t_ParamLimits

0x11d7,	// (0x00083730) mup_progress_pane_cp03_ParamLimits

0x8cce,	// (0x0008b227) mup3_control_keys_pane_g4_copy1

0x90e4,	// (0x0008b63d) mp4_rocker2_pane_ParamLimits

0x90e4,	// (0x0008b63d) mp4_rocker2_pane

0x19ea,	// (0x00083f43) mp4_rocker2_pane_g1

0x19e2,	// (0x00083f3b) mp4_rocker2_pane_g2

0x94f6,	// (0x0008ba4f) mp4_rocker2_pane_g3

0x94fe,	// (0x0008ba57) mp4_rocker2_pane_g4

0x9506,	// (0x0008ba5f) mp4_rocker2_pane_g5

0x0004,

0xf843,	// (0x00091d9c) mp4_rocker2_pane_g

0x4e88,	// (0x000873e1) main_camera4_pane

0x4e88,	// (0x000873e1) main_video4_pane

0x8df9,	// (0x0008b352) main_video_tele_dialer_pane_t1_ParamLimits

0x8df9,	// (0x0008b352) main_video_tele_dialer_pane_t1

0x8e0b,	// (0x0008b364) main_video_tele_dialer_pane_t2_ParamLimits

0x8e0b,	// (0x0008b364) main_video_tele_dialer_pane_t2

0x0001,

0xf7f9,	// (0x00091d52) main_video_tele_dialer_pane_t_ParamLimits

0xf7f9,	// (0x00091d52) main_video_tele_dialer_pane_t

0x9526,	// (0x0008ba7f) cam4_autofocus_pane_ParamLimits

0x9526,	// (0x0008ba7f) cam4_autofocus_pane

0x953e,	// (0x0008ba97) cam4_image_uncrop_pane_ParamLimits

0x953e,	// (0x0008ba97) cam4_image_uncrop_pane

0x9557,	// (0x0008bab0) cam4_indicators_pane_ParamLimits

0x9557,	// (0x0008bab0) cam4_indicators_pane

0x9573,	// (0x0008bacc) main_camera4_pane_g1_ParamLimits

0x9573,	// (0x0008bacc) main_camera4_pane_g1

0x957f,	// (0x0008bad8) main_camera4_pane_g2_ParamLimits

0x957f,	// (0x0008bad8) main_camera4_pane_g2

0x957f,	// (0x0008bad8) main_camera4_pane_g3_ParamLimits

0x957f,	// (0x0008bad8) main_camera4_pane_g3

0x958b,	// (0x0008bae4) main_camera4_pane_g4_ParamLimits

0x958b,	// (0x0008bae4) main_camera4_pane_g4

0x9597,	// (0x0008baf0) main_camera4_pane_g5_ParamLimits

0x9597,	// (0x0008baf0) main_camera4_pane_g5

0x0005,

0xf84e,	// (0x00091da7) main_camera4_pane_g_ParamLimits

0xf84e,	// (0x00091da7) main_camera4_pane_g

0x95b1,	// (0x0008bb0a) main_camera4_pane_t1_ParamLimits

0x95b1,	// (0x0008bb0a) main_camera4_pane_t1

0x2be3,	// (0x0008513c) bg_tb_trans_pane_cp06

0x9603,	// (0x0008bb5c) cam4_indicators_pane_g1

0x9614,	// (0x0008bb6d) cam4_indicators_pane_g2

0x0002,

0xf869,	// (0x00091dc2) cam4_indicators_pane_g

0x962c,	// (0x0008bb85) cam4_indicators_pane_t1

0x9656,	// (0x0008bbaf) main_video4_pane_g1_ParamLimits

0x9656,	// (0x0008bbaf) main_video4_pane_g1

0x9662,	// (0x0008bbbb) main_video4_pane_g2_ParamLimits

0x9662,	// (0x0008bbbb) main_video4_pane_g2

0x966e,	// (0x0008bbc7) main_video4_pane_g3_ParamLimits

0x966e,	// (0x0008bbc7) main_video4_pane_g3

0x967a,	// (0x0008bbd3) main_video4_pane_g4_ParamLimits

0x967a,	// (0x0008bbd3) main_video4_pane_g4

0x0004,

0xf870,	// (0x00091dc9) main_video4_pane_g_ParamLimits

0xf870,	// (0x00091dc9) main_video4_pane_g

0x969c,	// (0x0008bbf5) vid4_indicators_pane_ParamLimits

0x969c,	// (0x0008bbf5) vid4_indicators_pane

0x96bb,	// (0x0008bc14) video4_image_uncrop_cif_pane_ParamLimits

0x96bb,	// (0x0008bc14) video4_image_uncrop_cif_pane

0x96ca,	// (0x0008bc23) video4_image_uncrop_nhd_pane_ParamLimits

0x96ca,	// (0x0008bc23) video4_image_uncrop_nhd_pane

0x953e,	// (0x0008ba97) video4_image_uncrop_vga_pane_ParamLimits

0x953e,	// (0x0008ba97) video4_image_uncrop_vga_pane

0x7bd5,	// (0x0008a12e) bg_tb_trans_pane_cp07

0x96e3,	// (0x0008bc3c) vid4_indicators_pane_g1

0x96f9,	// (0x0008bc52) vid4_indicators_pane_g2

0x970d,	// (0x0008bc66) vid4_indicators_pane_g3

0x0004,

0xf87b,	// (0x00091dd4) vid4_indicators_pane_g

0x973e,	// (0x0008bc97) vid4_indicators_pane_t1

0x9755,	// (0x0008bcae) cam4_autofocus_pane_g1

0x975d,	// (0x0008bcb6) cam4_autofocus_pane_g2

0x9765,	// (0x0008bcbe) cam4_autofocus_pane_g3

0x0002,

0xf886,	// (0x00091ddf) cam4_autofocus_pane_g

0x976d,	// (0x0008bcc6) cam4_autofocus_pane_g3_copy1

0x8e2b,	// (0x0008b384) video_down_pane_cp_t1

0x8e39,	// (0x0008b392) video_down_pane_cp_t2

0x0001,

0xf7fe,	// (0x00091d57) video_down_pane_cp_t

0x4e6e,	// (0x000873c7) popup_vitu2_window_ParamLimits

0x4e6e,	// (0x000873c7) popup_vitu2_window

0x9775,	// (0x0008bcce) aid_size_cell2_itu2_ParamLimits

0x9775,	// (0x0008bcce) aid_size_cell2_itu2

0x9797,	// (0x0008bcf0) aid_size_cell_itu2_ParamLimits

0x9797,	// (0x0008bcf0) aid_size_cell_itu2

0x97db,	// (0x0008bd34) bg_popup_window_pane_cp09_ParamLimits

0x97db,	// (0x0008bd34) bg_popup_window_pane_cp09

0x97e9,	// (0x0008bd42) field_vitu2_entry_pane_ParamLimits

0x97e9,	// (0x0008bd42) field_vitu2_entry_pane

0x9809,	// (0x0008bd62) grid_vitu2_function_pane_ParamLimits

0x9809,	// (0x0008bd62) grid_vitu2_function_pane

0x984d,	// (0x0008bda6) grid_vitu2_itu_pane_ParamLimits

0x984d,	// (0x0008bda6) grid_vitu2_itu_pane

0x98c3,	// (0x0008be1c) cell_vitu2_itu_pane_ParamLimits

0x98c3,	// (0x0008be1c) cell_vitu2_itu_pane

0x98de,	// (0x0008be37) cell_vitu2_function_pane_ParamLimits

0x98de,	// (0x0008be37) cell_vitu2_function_pane

0x1a06,	// (0x00083f5f) bg_popup_call_pane_cp08_ParamLimits

0x1a06,	// (0x00083f5f) bg_popup_call_pane_cp08

0x1a1d,	// (0x00083f76) field_vitu2_entry_pane_g1

0x1a29,	// (0x00083f82) field_vitu2_entry_pane_g2

0x0002,

0xf88d,	// (0x00091de6) field_vitu2_entry_pane_g

0x1a35,	// (0x00083f8e) field_vitu2_entry_pane_t1_ParamLimits

0x1a35,	// (0x00083f8e) field_vitu2_entry_pane_t1

0x1a64,	// (0x00083fbd) field_vitu2_entry_pane_t2_ParamLimits

0x1a64,	// (0x00083fbd) field_vitu2_entry_pane_t2

0x0001,

0xf894,	// (0x00091ded) field_vitu2_entry_pane_t_ParamLimits

0xf894,	// (0x00091ded) field_vitu2_entry_pane_t

0x7f22,	// (0x0008a47b) bg_button_pane_cp010_ParamLimits

0x7f22,	// (0x0008a47b) bg_button_pane_cp010

0x9922,	// (0x0008be7b) cell_vitu2_itu_pane_g1

0x9948,	// (0x0008bea1) cell_vitu2_itu_pane_t1_ParamLimits

0x9948,	// (0x0008bea1) cell_vitu2_itu_pane_t1

0x4adf,	// (0x00087038) cell_vitu2_itu_pane_t2_ParamLimits

0x4adf,	// (0x00087038) cell_vitu2_itu_pane_t2

0x0002,

0xf89e,	// (0x00091df7) cell_vitu2_itu_pane_t_ParamLimits

0xf89e,	// (0x00091df7) cell_vitu2_itu_pane_t

0x7bd5,	// (0x0008a12e) bg_button_pane_cp011

0x9994,	// (0x0008beed) cell_vitu2_function_pane_g1

0x4e88,	// (0x000873e1) main_myfav_hc_pane

0x932e,	// (0x0008b887) popup_image3_note_pane_ParamLimits

0x932e,	// (0x0008b887) popup_image3_note_pane

0x933c,	// (0x0008b895) popup_image3_tool_bar_pane_ParamLimits

0x933c,	// (0x0008b895) popup_image3_tool_bar_pane

0x4b55,	// (0x000870ae) cell_vitu2_itu_pane_t3_ParamLimits

0x4b55,	// (0x000870ae) cell_vitu2_itu_pane_t3

0xe7c9,	// (0x00090d22) bg_popup_trans_pane

0x1a89,	// (0x00083fe2) grid_image3_tool_bar_pane

0x1a93,	// (0x00083fec) bg_popup_trans_pane_g1

0xd5d1,	// (0x0008fb2a) bg_popup_trans_pane_g2

0x1a9b,	// (0x00083ff4) bg_popup_trans_pane_g3

0x1aa3,	// (0x00083ffc) bg_popup_trans_pane_g4

0x1aab,	// (0x00084004) bg_popup_trans_pane_g5

0x1ab3,	// (0x0008400c) bg_popup_trans_pane_g6

0x1abb,	// (0x00084014) bg_popup_trans_pane_g7

0x1ac3,	// (0x0008401c) bg_popup_trans_pane_g8

0xd5b1,	// (0x0008fb0a) bg_popup_trans_pane_g9

0x0008,

0xf8a5,	// (0x00091dfe) bg_popup_trans_pane_g

0x1acb,	// (0x00084024) cell_image3_tool_bar_pane_ParamLimits

0x1acb,	// (0x00084024) cell_image3_tool_bar_pane

0xd3a8,	// (0x0008f901) cell_image3_tool_bar_pane_g1

0xe7c9,	// (0x00090d22) bg_popup_trans_pane_cp1

0x1ae1,	// (0x0008403a) popup_image3_note_pane_t1

0x1aef,	// (0x00084048) popup_image3_note_pane_t2

0x1afd,	// (0x00084056) popup_image3_note_pane_t3

0x0002,

0xf8b8,	// (0x00091e11) popup_image3_note_pane_t

0x1b0d,	// (0x00084066) popup_image3_note_pane_t3_copy1

0x99a8,	// (0x0008bf01) bg_myfav_hc_instruction_pane_ParamLimits

0x99a8,	// (0x0008bf01) bg_myfav_hc_instruction_pane

0x99c0,	// (0x0008bf19) cell_myfav_contact_pane_ParamLimits

0x99c0,	// (0x0008bf19) cell_myfav_contact_pane

0x99da,	// (0x0008bf33) cell_myfav_contact_pane_cp1_ParamLimits

0x99da,	// (0x0008bf33) cell_myfav_contact_pane_cp1

0x99f2,	// (0x0008bf4b) cell_myfav_contact_pane_cp2_ParamLimits

0x99f2,	// (0x0008bf4b) cell_myfav_contact_pane_cp2

0x9a0a,	// (0x0008bf63) cell_myfav_contact_pane_cp3_ParamLimits

0x9a0a,	// (0x0008bf63) cell_myfav_contact_pane_cp3

0x9a21,	// (0x0008bf7a) cell_myfav_contact_pane_cp4_ParamLimits

0x9a21,	// (0x0008bf7a) cell_myfav_contact_pane_cp4

0x9a37,	// (0x0008bf90) cell_myfav_contact_pane_cp5_ParamLimits

0x9a37,	// (0x0008bf90) cell_myfav_contact_pane_cp5

0x9a4b,	// (0x0008bfa4) cell_myfav_contact_pane_cp6_ParamLimits

0x9a4b,	// (0x0008bfa4) cell_myfav_contact_pane_cp6

0x9a5f,	// (0x0008bfb8) cell_myfav_contact_pane_cp7_ParamLimits

0x9a5f,	// (0x0008bfb8) cell_myfav_contact_pane_cp7

0x1b1b,	// (0x00084074) listscroll_gen_pane_cp05

0x9a77,	// (0x0008bfd0) main_myfav_hc_pane_g1_ParamLimits

0x9a77,	// (0x0008bfd0) main_myfav_hc_pane_g1

0x9a91,	// (0x0008bfea) main_myfav_hc_pane_g2_ParamLimits

0x9a91,	// (0x0008bfea) main_myfav_hc_pane_g2

0x0002,

0xf8bf,	// (0x00091e18) main_myfav_hc_pane_g_ParamLimits

0xf8bf,	// (0x00091e18) main_myfav_hc_pane_g

0x9ac3,	// (0x0008c01c) main_myfav_hc_pane_t1_ParamLimits

0x9ac3,	// (0x0008c01c) main_myfav_hc_pane_t1

0x1b24,	// (0x0008407d) main_myfav_hc_pane_t2_ParamLimits

0x1b24,	// (0x0008407d) main_myfav_hc_pane_t2

0x1b36,	// (0x0008408f) main_myfav_hc_pane_t3_ParamLimits

0x1b36,	// (0x0008408f) main_myfav_hc_pane_t3

0x9ada,	// (0x0008c033) main_myfav_hc_pane_t4_ParamLimits

0x9ada,	// (0x0008c033) main_myfav_hc_pane_t4

0x0004,

0xf8c6,	// (0x00091e1f) main_myfav_hc_pane_t_ParamLimits

0xf8c6,	// (0x00091e1f) main_myfav_hc_pane_t

0xd3a8,	// (0x0008f901) bg_myfav_hc_instruction_pane_g1

0x1b48,	// (0x000840a1) cell_myfav_contact_pane_g1_ParamLimits

0x1b48,	// (0x000840a1) cell_myfav_contact_pane_g1

0x1b48,	// (0x000840a1) cell_myfav_contact_pane_g2_ParamLimits

0x1b48,	// (0x000840a1) cell_myfav_contact_pane_g2

0x1b54,	// (0x000840ad) cell_myfav_contact_pane_g3_ParamLimits

0x1b54,	// (0x000840ad) cell_myfav_contact_pane_g3

0xef0d,	// (0x00091466) cell_myfav_contact_pane_g4_ParamLimits

0xef0d,	// (0x00091466) cell_myfav_contact_pane_g4

0x1b61,	// (0x000840ba) cell_myfav_contact_pane_g5_ParamLimits

0x1b61,	// (0x000840ba) cell_myfav_contact_pane_g5

0x0004,

0xf8d1,	// (0x00091e2a) cell_myfav_contact_pane_g_ParamLimits

0xf8d1,	// (0x00091e2a) cell_myfav_contact_pane_g

0x9aab,	// (0x0008c004) main_myfav_hc_pane_g3_ParamLimits

0x9aab,	// (0x0008c004) main_myfav_hc_pane_g3

0x4d76,	// (0x000872cf) popup_adpt_find_window

0x9b04,	// (0x0008c05d) afind_page_pane_ParamLimits

0x9b04,	// (0x0008c05d) afind_page_pane

0x9b11,	// (0x0008c06a) aid_size_cell_afind_ParamLimits

0x9b11,	// (0x0008c06a) aid_size_cell_afind

0x9b2b,	// (0x0008c084) bg_popup_sub_pane_cp09_ParamLimits

0x9b2b,	// (0x0008c084) bg_popup_sub_pane_cp09

0x9b38,	// (0x0008c091) find_pane_cp01_ParamLimits

0x9b38,	// (0x0008c091) find_pane_cp01

0x1b6d,	// (0x000840c6) grid_afind_control_pane_ParamLimits

0x1b6d,	// (0x000840c6) grid_afind_control_pane

0x9b45,	// (0x0008c09e) grid_afind_pane_ParamLimits

0x9b45,	// (0x0008c09e) grid_afind_pane

0x9b61,	// (0x0008c0ba) cell_afind_pane_ParamLimits

0x9b61,	// (0x0008c0ba) cell_afind_pane

0xd3a8,	// (0x0008f901) afind_page_pane_g1

0x9bad,	// (0x0008c106) afind_page_pane_g2

0x9bb6,	// (0x0008c10f) afind_page_pane_g3

0x0002,

0xf8dc,	// (0x00091e35) afind_page_pane_g

0x9bbf,	// (0x0008c118) afind_page_pane_t1

0x1b81,	// (0x000840da) cell_afind_grid_control_pane_ParamLimits

0x1b81,	// (0x000840da) cell_afind_grid_control_pane

0x19b4,	// (0x00083f0d) bg_button_pane_cp69_ParamLimits

0x19b4,	// (0x00083f0d) bg_button_pane_cp69

0x9bdf,	// (0x0008c138) cell_afind_pane_g1_ParamLimits

0x9bdf,	// (0x0008c138) cell_afind_pane_g1

0x9bec,	// (0x0008c145) cell_afind_pane_t1_ParamLimits

0x9bec,	// (0x0008c145) cell_afind_pane_t1

0xd3b2,	// (0x0008f90b) bg_button_pane_cp72

0x1b90,	// (0x000840e9) cell_afind_grid_control_pane_g1

0x76f7,	// (0x00089c50) aid_image_placing_area_ParamLimits

0x76f7,	// (0x00089c50) aid_image_placing_area

0xeeff,	// (0x00091458) field_vitu_entry_pane_g1_ParamLimits

0xeeff,	// (0x00091458) field_vitu_entry_pane_g1

0xeeff,	// (0x00091458) field_vitu_entry_pane_g2_ParamLimits

0xeeff,	// (0x00091458) field_vitu_entry_pane_g2

0x0001,

0xf1e7,	// (0x00091740) field_vitu_entry_pane_g_ParamLimits

0xf1e7,	// (0x00091740) field_vitu_entry_pane_g

0x14d7,	// (0x00083a30) cell_vitu_itu_pane_g1_ParamLimits

0x14ba,	// (0x00083a13) cell_vitu_itu_pane_t3_ParamLimits

0x14ba,	// (0x00083a13) cell_vitu_itu_pane_t3

0x195d,	// (0x00083eb6) mp4_progress_pane_t1_ParamLimits

0x1976,	// (0x00083ecf) mp4_progress_pane_t2_ParamLimits

0xf822,	// (0x00091d7b) mp4_progress_pane_t_ParamLimits

0x198f,	// (0x00083ee8) mup_progress_pane_cp04_ParamLimits

0x9aee,	// (0x0008c047) main_myfav_hc_pane_t5_ParamLimits

0x9aee,	// (0x0008c047) main_myfav_hc_pane_t5

0x4acf,	// (0x00087028) aid_zoom_text_primary

0x4d76,	// (0x000872cf) popup_adpt_find_window_ParamLimits

0x7bd5,	// (0x0008a12e) main_cam_set_pane

0x9565,	// (0x0008babe) cam4_zoom_pane_ParamLimits

0x9565,	// (0x0008babe) cam4_zoom_pane

0x9bfe,	// (0x0008c157) main_cam_set_pane_g1_ParamLimits

0x9bfe,	// (0x0008c157) main_cam_set_pane_g1

0x9c0c,	// (0x0008c165) main_cam_set_pane_g2_ParamLimits

0x9c0c,	// (0x0008c165) main_cam_set_pane_g2

0x0001,

0xf8e3,	// (0x00091e3c) main_cam_set_pane_g_ParamLimits

0xf8e3,	// (0x00091e3c) main_cam_set_pane_g

0x9c18,	// (0x0008c171) main_cam_set_pane_t1_ParamLimits

0x9c18,	// (0x0008c171) main_cam_set_pane_t1

0x9c34,	// (0x0008c18d) main_cset_listscroll_pane_ParamLimits

0x9c34,	// (0x0008c18d) main_cset_listscroll_pane

0x9c68,	// (0x0008c1c1) main_cset_slider_pane_ParamLimits

0x9c68,	// (0x0008c1c1) main_cset_slider_pane

0x1ba1,	// (0x000840fa) main_cset_list_pane_ParamLimits

0x1ba1,	// (0x000840fa) main_cset_list_pane

0x1bb1,	// (0x0008410a) scroll_pane_cp028

0x9c89,	// (0x0008c1e2) aid_area_touch_slider

0x9ca5,	// (0x0008c1fe) cset_slider_pane

0x9cc8,	// (0x0008c221) main_cset_slider_pane_g1

0x9cdd,	// (0x0008c236) main_cset_slider_pane_g2

0x0011,

0xf8e8,	// (0x00091e41) main_cset_slider_pane_g

0x1bea,	// (0x00084143) main_cset_slider_pane_t1

0x9d99,	// (0x0008c2f2) main_cset_slider_pane_t2

0x9db3,	// (0x0008c30c) main_cset_slider_pane_t3

0x9dcd,	// (0x0008c326) main_cset_slider_pane_t4

0x9de7,	// (0x0008c340) main_cset_slider_pane_t5

0x9e01,	// (0x0008c35a) main_cset_slider_pane_t6

0x9e16,	// (0x0008c36f) main_cset_slider_pane_t7

0x000e,

0xf90d,	// (0x00091e66) main_cset_slider_pane_t

0x9f1a,	// (0x0008c473) cset_list_set_pane_ParamLimits

0x9f1a,	// (0x0008c473) cset_list_set_pane

0x1c84,	// (0x000841dd) aid_position_infowindow_above

0x1c8c,	// (0x000841e5) aid_position_infowindow_below

0x9f2b,	// (0x0008c484) cset_list_set_pane_g1_ParamLimits

0x9f2b,	// (0x0008c484) cset_list_set_pane_g1

0x9f37,	// (0x0008c490) cset_list_set_pane_g3_ParamLimits

0x9f37,	// (0x0008c490) cset_list_set_pane_g3

0x0001,

0xf92c,	// (0x00091e85) cset_list_set_pane_g_ParamLimits

0xf92c,	// (0x00091e85) cset_list_set_pane_g

0x9f46,	// (0x0008c49f) cset_list_set_pane_t1_ParamLimits

0x9f46,	// (0x0008c49f) cset_list_set_pane_t1

0xe82a,	// (0x00090d83) list_highlight_pane_cp021_ParamLimits

0xe82a,	// (0x00090d83) list_highlight_pane_cp021

0xde18,	// (0x00090371) cset_slider_pane_g1

0xde2a,	// (0x00090383) cset_slider_pane_g2

0xde21,	// (0x0009037a) cset_slider_pane_g3

0x0002,

0xf931,	// (0x00091e8a) cset_slider_pane_g

0xdac1,	// (0x0009001a) aid_area_touch_cam4_zoom

0x9f5b,	// (0x0008c4b4) cam4_zoom_cont_pane

0x9f63,	// (0x0008c4bc) cam4_zoom_pane_g1

0x9f6b,	// (0x0008c4c4) cam4_zoom_pane_g2

0x9f73,	// (0x0008c4cc) cam4_zoom_pane_g3

0x0002,

0xf938,	// (0x00091e91) cam4_zoom_pane_g

0x9f7b,	// (0x0008c4d4) cam4_zoom_cont_pane_g1

0x9f84,	// (0x0008c4dd) cam4_zoom_cont_pane_g2

0x9f8d,	// (0x0008c4e6) cam4_zoom_cont_pane_g3

0x0002,

0xf93f,	// (0x00091e98) cam4_zoom_cont_pane_g

0x9385,	// (0x0008b8de) call4_image_pane_ParamLimits

0x9385,	// (0x0008b8de) call4_image_pane

0x93e6,	// (0x0008b93f) call4_windows_conf_pane_ParamLimits

0x942d,	// (0x0008b986) popup_call4_audio_in_window_ParamLimits

0x942d,	// (0x0008b986) popup_call4_audio_in_window

0xe7c9,	// (0x00090d22) bg_popup_call2_act_pane_cp02

0x19c0,	// (0x00083f19) call4_list_conf_pane

0xd3a8,	// (0x0008f901) call4_image_pane_g1

0xd3a8,	// (0x0008f901) call4_image_pane_g2

0x0001,

0xf3c3,	// (0x0009191c) call4_image_pane_g

0x1c9d,	// (0x000841f6) list_single_graphic_popup_conf4_pane_ParamLimits

0x1c9d,	// (0x000841f6) list_single_graphic_popup_conf4_pane

0xe7c9,	// (0x00090d22) list_highlight_pane_cp022

0x1cb2,	// (0x0008420b) list_single_graphic_popup_conf4_pane_g1

0xdb1a,	// (0x00090073) list_single_graphic_popup_conf4_pane_g2

0x0001,

0xf946,	// (0x00091e9f) list_single_graphic_popup_conf4_pane_g

0x1cba,	// (0x00084213) list_single_graphic_popup_conf4_pane_t1

0x5cbc,	// (0x00088215) popup_vtel_slider_window_ParamLimits

0x5cbc,	// (0x00088215) popup_vtel_slider_window

0x19a2,	// (0x00083efb) dialer2_ne_pane_t2_ParamLimits

0x19a2,	// (0x00083efb) dialer2_ne_pane_t2

0x0001,

0xf827,	// (0x00091d80) dialer2_ne_pane_t_ParamLimits

0xf827,	// (0x00091d80) dialer2_ne_pane_t

0xe82a,	// (0x00090d83) bg_popup_sub_pane_cp010_ParamLimits

0xe82a,	// (0x00090d83) bg_popup_sub_pane_cp010

0x9f96,	// (0x0008c4ef) popup_vtel_slider_window_g1_ParamLimits

0x9f96,	// (0x0008c4ef) popup_vtel_slider_window_g1

0x9fa2,	// (0x0008c4fb) popup_vtel_slider_window_g2_ParamLimits

0x9fa2,	// (0x0008c4fb) popup_vtel_slider_window_g2

0x0003,

0xf94b,	// (0x00091ea4) popup_vtel_slider_window_g_ParamLimits

0xf94b,	// (0x00091ea4) popup_vtel_slider_window_g

0x9fea,	// (0x0008c543) vtel_slider_pane_ParamLimits

0x9fea,	// (0x0008c543) vtel_slider_pane

0x9ff9,	// (0x0008c552) vtel_slider_pane_g1_ParamLimits

0x9ff9,	// (0x0008c552) vtel_slider_pane_g1

0xa006,	// (0x0008c55f) vtel_slider_pane_g2_ParamLimits

0xa006,	// (0x0008c55f) vtel_slider_pane_g2

0xa013,	// (0x0008c56c) vtel_slider_pane_g3_ParamLimits

0xa013,	// (0x0008c56c) vtel_slider_pane_g3

0x9ff9,	// (0x0008c552) vtel_slider_pane_g4_ParamLimits

0x9ff9,	// (0x0008c552) vtel_slider_pane_g4

0xa020,	// (0x0008c579) vtel_slider_pane_g5_ParamLimits

0xa020,	// (0x0008c579) vtel_slider_pane_g5

0x0004,

0xf954,	// (0x00091ead) vtel_slider_pane_g_ParamLimits

0xf954,	// (0x00091ead) vtel_slider_pane_g

0x7bd5,	// (0x0008a12e) main_gallery2_pane

0x97bd,	// (0x0008bd16) aid_size_row_itut2_dropdow_list_ParamLimits

0x97bd,	// (0x0008bd16) aid_size_row_itut2_dropdow_list

0x982b,	// (0x0008bd84) grid_vitu2_function_top_pane_ParamLimits

0x982b,	// (0x0008bd84) grid_vitu2_function_top_pane

0x9881,	// (0x0008bdda) popup_vitu2_dropdown_list_window_ParamLimits

0x9881,	// (0x0008bdda) popup_vitu2_dropdown_list_window

0x989f,	// (0x0008bdf8) popup_vitu2_match_list_window

0xa02d,	// (0x0008c586) cell_vitu2_function_top_pane_ParamLimits

0xa02d,	// (0x0008c586) cell_vitu2_function_top_pane

0xa047,	// (0x0008c5a0) cell_vitu2_function_top_pane_cp01_ParamLimits

0xa047,	// (0x0008c5a0) cell_vitu2_function_top_pane_cp01

0xa063,	// (0x0008c5bc) cell_vitu2_function_top_wide_pane_ParamLimits

0xa063,	// (0x0008c5bc) cell_vitu2_function_top_wide_pane

0x7bd5,	// (0x0008a12e) bg_button_pane_cp012

0xa081,	// (0x0008c5da) cell_vitu2_function_top_pane_g1

0xa095,	// (0x0008c5ee) bg_button_pane_cp013_ParamLimits

0xa095,	// (0x0008c5ee) bg_button_pane_cp013

0xa0b1,	// (0x0008c60a) cell_vitu2_function_top_wide_pane_g1_ParamLimits

0xa0b1,	// (0x0008c60a) cell_vitu2_function_top_wide_pane_g1

0x4e6e,	// (0x000873c7) bg_popup_sub_pane_cp20

0xa0c9,	// (0x0008c622) list_vitu2_match_list_pane

0x1a93,	// (0x00083fec) bg_popup_sub_pane_cp20_g1

0x1a9b,	// (0x00083ff4) bg_popup_sub_pane_cp20_g2

0xd5d1,	// (0x0008fb2a) bg_popup_sub_pane_cp20_g3

0x1aa3,	// (0x00083ffc) bg_popup_sub_pane_cp20_g4

0xd5b1,	// (0x0008fb0a) bg_popup_sub_pane_cp20_g5

0x1cd0,	// (0x00084229) bg_popup_sub_pane_cp20_g6

0x1ab3,	// (0x0008400c) bg_popup_sub_pane_cp20_g7

0x1abb,	// (0x00084014) bg_popup_sub_pane_cp20_g8

0x1ac3,	// (0x0008401c) bg_popup_sub_pane_cp20_g9

0x0008,

0xf95f,	// (0x00091eb8) bg_popup_sub_pane_cp20_g

0xa0e1,	// (0x0008c63a) list_vitu2_match_list_item_pane_ParamLimits

0xa0e1,	// (0x0008c63a) list_vitu2_match_list_item_pane

0xa0f3,	// (0x0008c64c) list_vitu2_match_list_item_pane_t1

0x4e88,	// (0x000873e1) bg_popup_sub_pane_cp21

0xd372,	// (0x0008f8cb) grid_vitu2_dropdown_list_pane

0xa101,	// (0x0008c65a) cell_vitu2_dropdown_list_char_pane_ParamLimits

0xa101,	// (0x0008c65a) cell_vitu2_dropdown_list_char_pane

0xa125,	// (0x0008c67e) cell_vitu2_dropdown_list_ctrl_pane_ParamLimits

0xa125,	// (0x0008c67e) cell_vitu2_dropdown_list_ctrl_pane

0x1cea,	// (0x00084243) cell_vitu2_dropdown_list_char_pane_g1

0x1ce1,	// (0x0008423a) cell_vitu2_dropdown_list_char_pane_g2

0x1cd8,	// (0x00084231) cell_vitu2_dropdown_list_char_pane_g3

0x0002,

0xf972,	// (0x00091ecb) cell_vitu2_dropdown_list_char_pane_g

0xa14f,	// (0x0008c6a8) cell_vitu2_dropdown_list_char_pane_t1

0xa15d,	// (0x0008c6b6) cell_vitu2_dropdown_list_ctrl_pane_g1_ParamLimits

0xa15d,	// (0x0008c6b6) cell_vitu2_dropdown_list_ctrl_pane_g1

0xa16d,	// (0x0008c6c6) cell_vitu2_dropdown_list_ctrl_pane_g2_ParamLimits

0xa16d,	// (0x0008c6c6) cell_vitu2_dropdown_list_ctrl_pane_g2

0xa17e,	// (0x0008c6d7) cell_vitu2_dropdown_list_ctrl_pane_g3_ParamLimits

0xa17e,	// (0x0008c6d7) cell_vitu2_dropdown_list_ctrl_pane_g3

0xa18e,	// (0x0008c6e7) cell_vitu2_dropdown_list_ctrl_pane_g4_ParamLimits

0xa18e,	// (0x0008c6e7) cell_vitu2_dropdown_list_ctrl_pane_g4

0x2be3,	// (0x0008513c) cell_vitu2_dropdown_list_ctrl_pane_g5_ParamLimits

0x2be3,	// (0x0008513c) cell_vitu2_dropdown_list_ctrl_pane_g5

0x0004,

0xf979,	// (0x00091ed2) cell_vitu2_dropdown_list_ctrl_pane_g_ParamLimits

0xf979,	// (0x00091ed2) cell_vitu2_dropdown_list_ctrl_pane_g

0xa1a7,	// (0x0008c700) aid_size_cell_gallery2_ParamLimits

0xa1a7,	// (0x0008c700) aid_size_cell_gallery2

0xa1c1,	// (0x0008c71a) grid_gallery2_pane_ParamLimits

0xa1c1,	// (0x0008c71a) grid_gallery2_pane

0xa1d8,	// (0x0008c731) scroll_pane_cp029_ParamLimits

0xa1d8,	// (0x0008c731) scroll_pane_cp029

0xa1e8,	// (0x0008c741) cell_gallery2_pane_ParamLimits

0xa1e8,	// (0x0008c741) cell_gallery2_pane

0x1cf3,	// (0x0008424c) cell_gallery2_pane_g2

0xa23f,	// (0x0008c798) cell_gallery2_pane_g3

0x1cfb,	// (0x00084254) cell_gallery2_pane_g4

0x1d03,	// (0x0008425c) cell_gallery2_pane_g5

0xd372,	// (0x0008f8cb) grid_highlight_pane_cp10

0x989f,	// (0x0008bdf8) popup_vitu2_match_list_window_ParamLimits

0x98b3,	// (0x0008be0c) popup_vitu2_query_window_ParamLimits

0x98b3,	// (0x0008be0c) popup_vitu2_query_window

0x4e88,	// (0x000873e1) bg_vitu2_candi_button_pane

0x1cea,	// (0x00084243) cell_vitu2_dropdown_list_char_pane_g1_copy1

0x1ce1,	// (0x0008423a) cell_vitu2_dropdown_list_char_pane_g2_copy1

0x1cd8,	// (0x00084231) cell_vitu2_dropdown_list_char_pane_g2_copy2

0xa247,	// (0x0008c7a0) bg_button_pane_cp015

0xa25c,	// (0x0008c7b5) bg_button_pane_cp016

0xa268,	// (0x0008c7c1) bg_button_pane_cp017

0xe781,	// (0x00090cda) bg_popup_sub_pane_cp22

0x1d0b,	// (0x00084264) popup_vitu2_query_window_g1

0xa2a9,	// (0x0008c802) popup_vitu2_query_window_g2

0x0002,

0xf984,	// (0x00091edd) popup_vitu2_query_window_g

0xa2cd,	// (0x0008c826) popup_vitu2_query_window_t1_ParamLimits

0xa2cd,	// (0x0008c826) popup_vitu2_query_window_t1

0xa300,	// (0x0008c859) popup_vitu2_query_window_t2_ParamLimits

0xa300,	// (0x0008c859) popup_vitu2_query_window_t2

0xa312,	// (0x0008c86b) popup_vitu2_query_window_t3_ParamLimits

0xa312,	// (0x0008c86b) popup_vitu2_query_window_t3

0xa33a,	// (0x0008c893) popup_vitu2_query_window_t4_ParamLimits

0xa33a,	// (0x0008c893) popup_vitu2_query_window_t4

0xa34e,	// (0x0008c8a7) popup_vitu2_query_window_t5_ParamLimits

0xa34e,	// (0x0008c8a7) popup_vitu2_query_window_t5

0x0006,

0xf98b,	// (0x00091ee4) popup_vitu2_query_window_t_ParamLimits

0xf98b,	// (0x00091ee4) popup_vitu2_query_window_t

0x1b99,	// (0x000840f2) main_cset_text_pane

0x9c89,	// (0x0008c1e2) aid_area_touch_slider_ParamLimits

0x9ca5,	// (0x0008c1fe) cset_slider_pane_ParamLimits

0x9cc8,	// (0x0008c221) main_cset_slider_pane_g1_ParamLimits

0x9cdd,	// (0x0008c236) main_cset_slider_pane_g2_ParamLimits

0x1bba,	// (0x00084113) main_cset_slider_pane_g3_ParamLimits

0x1bba,	// (0x00084113) main_cset_slider_pane_g3

0x9cf2,	// (0x0008c24b) main_cset_slider_pane_g4_ParamLimits

0x9cf2,	// (0x0008c24b) main_cset_slider_pane_g4

0x9d01,	// (0x0008c25a) main_cset_slider_pane_g5_ParamLimits

0x9d01,	// (0x0008c25a) main_cset_slider_pane_g5

0x9d0d,	// (0x0008c266) main_cset_slider_pane_g6_ParamLimits

0x9d0d,	// (0x0008c266) main_cset_slider_pane_g6

0xf8e8,	// (0x00091e41) main_cset_slider_pane_g_ParamLimits

0x1bea,	// (0x00084143) main_cset_slider_pane_t1_ParamLimits

0x9d99,	// (0x0008c2f2) main_cset_slider_pane_t2_ParamLimits

0x9db3,	// (0x0008c30c) main_cset_slider_pane_t3_ParamLimits

0x9dcd,	// (0x0008c326) main_cset_slider_pane_t4_ParamLimits

0x9de7,	// (0x0008c340) main_cset_slider_pane_t5_ParamLimits

0x9e01,	// (0x0008c35a) main_cset_slider_pane_t6_ParamLimits

0x9e16,	// (0x0008c36f) main_cset_slider_pane_t7_ParamLimits

0x9e40,	// (0x0008c399) main_cset_slider_pane_t8_ParamLimits

0x9e40,	// (0x0008c399) main_cset_slider_pane_t8

0x9e68,	// (0x0008c3c1) main_cset_slider_pane_t9_ParamLimits

0x9e68,	// (0x0008c3c1) main_cset_slider_pane_t9

0x9e90,	// (0x0008c3e9) main_cset_slider_pane_t10_ParamLimits

0x9e90,	// (0x0008c3e9) main_cset_slider_pane_t10

0x9eb8,	// (0x0008c411) main_cset_slider_pane_t11_ParamLimits

0x9eb8,	// (0x0008c411) main_cset_slider_pane_t11

0x9ee0,	// (0x0008c439) main_cset_slider_pane_t12_ParamLimits

0x9ee0,	// (0x0008c439) main_cset_slider_pane_t12

0x9efd,	// (0x0008c456) main_cset_slider_pane_t13_ParamLimits

0x9efd,	// (0x0008c456) main_cset_slider_pane_t13

0xf90d,	// (0x00091e66) main_cset_slider_pane_t_ParamLimits

0xe7c9,	// (0x00090d22) bg_popup_sub_pane_cp011

0x1d17,	// (0x00084270) main_cset_text_pane_g1

0x1d1f,	// (0x00084278) main_cset_text_pane_t1

0x1d2d,	// (0x00084286) main_cset_text_pane_t2

0x1d3b,	// (0x00084294) main_cset_text_pane_t3

0x1d49,	// (0x000842a2) main_cset_text_pane_t4

0x1d57,	// (0x000842b0) main_cset_text_pane_t5

0x1d65,	// (0x000842be) main_cset_text_pane_t6

0x1d73,	// (0x000842cc) main_cset_text_pane_t7

0x0006,

0xf99a,	// (0x00091ef3) main_cset_text_pane_t

0x4e88,	// (0x000873e1) main_cam4_burst_pane

0x4e88,	// (0x000873e1) main_cam5_pane

0x9bcd,	// (0x0008c126) bg_button_pane_cp019

0x9bd6,	// (0x0008c12f) bg_button_pane_cp020

0x1bc6,	// (0x0008411f) main_cset_slider_pane_g7_ParamLimits

0x1bc6,	// (0x0008411f) main_cset_slider_pane_g7

0x1bd2,	// (0x0008412b) main_cset_slider_pane_g8_ParamLimits

0x1bd2,	// (0x0008412b) main_cset_slider_pane_g8

0x9d21,	// (0x0008c27a) main_cset_slider_pane_g9_ParamLimits

0x9d21,	// (0x0008c27a) main_cset_slider_pane_g9

0x9d2d,	// (0x0008c286) main_cset_slider_pane_g10_ParamLimits

0x9d2d,	// (0x0008c286) main_cset_slider_pane_g10

0x9d39,	// (0x0008c292) main_cset_slider_pane_g11_ParamLimits

0x9d39,	// (0x0008c292) main_cset_slider_pane_g11

0x9d45,	// (0x0008c29e) main_cset_slider_pane_g12_ParamLimits

0x9d45,	// (0x0008c29e) main_cset_slider_pane_g12

0x9d51,	// (0x0008c2aa) main_cset_slider_pane_g13_ParamLimits

0x9d51,	// (0x0008c2aa) main_cset_slider_pane_g13

0x9d5d,	// (0x0008c2b6) main_cset_slider_pane_g14_ParamLimits

0x9d5d,	// (0x0008c2b6) main_cset_slider_pane_g14

0x9d69,	// (0x0008c2c2) main_cset_slider_pane_g15_ParamLimits

0x9d69,	// (0x0008c2c2) main_cset_slider_pane_g15

0x1c12,	// (0x0008416b) main_cset_slider_pane_t14_ParamLimits

0x1c12,	// (0x0008416b) main_cset_slider_pane_t14

0x1c4b,	// (0x000841a4) main_cset_slider_pane_t15_ParamLimits

0x1c4b,	// (0x000841a4) main_cset_slider_pane_t15

0xa3b8,	// (0x0008c911) aid_cam4_burst_size_cell_ParamLimits

0xa3b8,	// (0x0008c911) aid_cam4_burst_size_cell

0xa3d4,	// (0x0008c92d) grid_cam4_burst_pane_ParamLimits

0xa3d4,	// (0x0008c92d) grid_cam4_burst_pane

0xa406,	// (0x0008c95f) linegrid_cam4_burst_pane_ParamLimits

0xa406,	// (0x0008c95f) linegrid_cam4_burst_pane

0xa424,	// (0x0008c97d) scroll_pane_cp30_ParamLimits

0xa424,	// (0x0008c97d) scroll_pane_cp30

0xa430,	// (0x0008c989) cell_cam4_burst_pane_ParamLimits

0xa430,	// (0x0008c989) cell_cam4_burst_pane

0x1d8d,	// (0x000842e6) linegrid_cam4_burst_pane_g1_ParamLimits

0x1d8d,	// (0x000842e6) linegrid_cam4_burst_pane_g1

0xa470,	// (0x0008c9c9) linegrid_cam4_burst_pane_g2_ParamLimits

0xa470,	// (0x0008c9c9) linegrid_cam4_burst_pane_g2

0x1d9a,	// (0x000842f3) linegrid_cam4_burst_pane_g3_ParamLimits

0x1d9a,	// (0x000842f3) linegrid_cam4_burst_pane_g3

0x0002,

0xf9a9,	// (0x00091f02) linegrid_cam4_burst_pane_g_ParamLimits

0xf9a9,	// (0x00091f02) linegrid_cam4_burst_pane_g

0xa481,	// (0x0008c9da) linegrid_cam4_burst_pane_g3_copy1_ParamLimits

0xa481,	// (0x0008c9da) linegrid_cam4_burst_pane_g3_copy1

0x1da7,	// (0x00084300) linegrid_cam4_burst_pane_g4_ParamLimits

0x1da7,	// (0x00084300) linegrid_cam4_burst_pane_g4

0xa49b,	// (0x0008c9f4) linegrid_cam4_burst_pane_g5_ParamLimits

0xa49b,	// (0x0008c9f4) linegrid_cam4_burst_pane_g5

0xa4ac,	// (0x0008ca05) linegrid_cam4_burst_pane_g6_ParamLimits

0xa4ac,	// (0x0008ca05) linegrid_cam4_burst_pane_g6

0x1db4,	// (0x0008430d) linegrid_cam4_burst_pane_g7_ParamLimits

0x1db4,	// (0x0008430d) linegrid_cam4_burst_pane_g7

0xa4c3,	// (0x0008ca1c) cell_cam4_burst_pane_g1

0x1dcd,	// (0x00084326) main_cam5_pane_t1_ParamLimits

0x1dcd,	// (0x00084326) main_cam5_pane_t1

0x1ddf,	// (0x00084338) main_cam5_pane_t2_ParamLimits

0x1ddf,	// (0x00084338) main_cam5_pane_t2

0x1df1,	// (0x0008434a) main_cam5_pane_t3_ParamLimits

0x1df1,	// (0x0008434a) main_cam5_pane_t3

0x1e03,	// (0x0008435c) main_cam5_pane_t4_ParamLimits

0x1e03,	// (0x0008435c) main_cam5_pane_t4

0x1e1b,	// (0x00084374) main_cam5_pane_t5_ParamLimits

0x1e1b,	// (0x00084374) main_cam5_pane_t5

0x1e2f,	// (0x00084388) main_cam5_pane_t6_ParamLimits

0x1e2f,	// (0x00084388) main_cam5_pane_t6

0x1e43,	// (0x0008439c) main_cam5_pane_t7_ParamLimits

0x1e43,	// (0x0008439c) main_cam5_pane_t7

0x1e55,	// (0x000843ae) main_cam5_pane_t8_ParamLimits

0x1e55,	// (0x000843ae) main_cam5_pane_t8

0x1e73,	// (0x000843cc) main_cam5_pane_t9_ParamLimits

0x1e73,	// (0x000843cc) main_cam5_pane_t9

0x1e85,	// (0x000843de) main_cam5_pane_t10_ParamLimits

0x1e85,	// (0x000843de) main_cam5_pane_t10

0x1e97,	// (0x000843f0) main_cam5_pane_t11_ParamLimits

0x1e97,	// (0x000843f0) main_cam5_pane_t11

0x1eab,	// (0x00084404) main_cam5_pane_t12_ParamLimits

0x1eab,	// (0x00084404) main_cam5_pane_t12

0x1ec2,	// (0x0008441b) main_cam5_pane_t13_ParamLimits

0x1ec2,	// (0x0008441b) main_cam5_pane_t13

0x000c,

0xf9b5,	// (0x00091f0e) main_cam5_pane_t_ParamLimits

0xf9b5,	// (0x00091f0e) main_cam5_pane_t

0x4e2d,	// (0x00087386) popup_scut_keymap_window_ParamLimits

0x4e2d,	// (0x00087386) popup_scut_keymap_window

0xa4d6,	// (0x0008ca2f) aid_size_cell_brow_shortcut

0xd372,	// (0x0008f8cb) bg_popup_window_pane_cp010

0xa4e2,	// (0x0008ca3b) grid_scut_pane

0xa4ee,	// (0x0008ca47) cell_scut_pane_ParamLimits

0xa4ee,	// (0x0008ca47) cell_scut_pane

0xa509,	// (0x0008ca62) cell_scut_pane_g1

0x1ee5,	// (0x0008443e) cell_scut_pane_t1

0x1ef4,	// (0x0008444d) cell_scut_pane_t2

0xa512,	// (0x0008ca6b) cell_scut_pane_t3

0x0002,

0xf9d0,	// (0x00091f29) cell_scut_pane_t

0x84b6,	// (0x0008aa0f) main_mup3_pane_g8_ParamLimits

0x84b6,	// (0x0008aa0f) main_mup3_pane_g8

0x97cb,	// (0x0008bd24) area_vitu2_query_pane_ParamLimits

0x97cb,	// (0x0008bd24) area_vitu2_query_pane

0xa274,	// (0x0008c7cd) input_focus_pane_cp08

0x1f03,	// (0x0008445c) area_vitu2_query_pane_g1

0xa520,	// (0x0008ca79) area_vitu2_query_pane_g2

0x0001,

0xf9d7,	// (0x00091f30) area_vitu2_query_pane_g

0xa531,	// (0x0008ca8a) area_vitu2_query_pane_t1_ParamLimits

0xa531,	// (0x0008ca8a) area_vitu2_query_pane_t1

0xa545,	// (0x0008ca9e) area_vitu2_query_pane_t2_ParamLimits

0xa545,	// (0x0008ca9e) area_vitu2_query_pane_t2

0xa559,	// (0x0008cab2) area_vitu2_query_pane_t3_ParamLimits

0xa559,	// (0x0008cab2) area_vitu2_query_pane_t3

0x1f0f,	// (0x00084468) area_vitu2_query_pane_t4_ParamLimits

0x1f0f,	// (0x00084468) area_vitu2_query_pane_t4

0x1f37,	// (0x00084490) area_vitu2_query_pane_t5_ParamLimits

0x1f37,	// (0x00084490) area_vitu2_query_pane_t5

0x1f5f,	// (0x000844b8) area_vitu2_query_pane_t6_ParamLimits

0x1f5f,	// (0x000844b8) area_vitu2_query_pane_t6

0x0006,

0xf9dc,	// (0x00091f35) area_vitu2_query_pane_t_ParamLimits

0xf9dc,	// (0x00091f35) area_vitu2_query_pane_t

0xa25c,	// (0x0008c7b5) bg_button_pane_cp018

0xa581,	// (0x0008cada) bg_button_pane_cp021

0xa58d,	// (0x0008cae6) bg_button_pane_cp022

0xa5b0,	// (0x0008cb09) input_focus_pane_cp09

0x6fa4,	// (0x000894fd) aid_size_touch_mv_arrow_left

0x6fcf,	// (0x00089528) aid_size_touch_mv_arrow_right

0x9d81,	// (0x0008c2da) main_cset_slider_pane_g16_ParamLimits

0x9d81,	// (0x0008c2da) main_cset_slider_pane_g16

0x9d8d,	// (0x0008c2e6) main_cset_slider_pane_g17_ParamLimits

0x9d8d,	// (0x0008c2e6) main_cset_slider_pane_g17

0xa4c3,	// (0x0008ca1c) cell_cam4_burst_pane_g1_ParamLimits

0xe7c9,	// (0x00090d22) compa_mode_pane

0x9fae,	// (0x0008c507) popup_vtel_slider_window_g3_ParamLimits

0x9fae,	// (0x0008c507) popup_vtel_slider_window_g3

0x9fc2,	// (0x0008c51b) popup_vtel_slider_window_g4_ParamLimits

0x9fc2,	// (0x0008c51b) popup_vtel_slider_window_g4

0x9fd6,	// (0x0008c52f) popup_vtel_slider_window_t1_ParamLimits

0x9fd6,	// (0x0008c52f) popup_vtel_slider_window_t1

0x4e88,	// (0x000873e1) main_cl_pane

0x7c7f,	// (0x0008a1d8) popup_imed_adjust2_window_ParamLimits

0xe781,	// (0x00090cda) bg_tb_trans_pane_cp05_ParamLimits

0x13e5,	// (0x0008393e) popup_imed_adjust2_window_g1_ParamLimits

0x13f4,	// (0x0008394d) popup_imed_adjust2_window_g2_ParamLimits

0x13f4,	// (0x0008394d) popup_imed_adjust2_window_g2

0x1400,	// (0x00083959) popup_imed_adjust2_window_g3_ParamLimits

0x1400,	// (0x00083959) popup_imed_adjust2_window_g3

0x0002,

0xf752,	// (0x00091cab) popup_imed_adjust2_window_g_ParamLimits

0xf752,	// (0x00091cab) popup_imed_adjust2_window_g

0x140c,	// (0x00083965) popup_imed_adjust2_window_t1_ParamLimits

0x1424,	// (0x0008397d) slider_imed_adjust_pane_ParamLimits

0x1438,	// (0x00083991) slider_imed_adjust_pane_g1_ParamLimits

0x1448,	// (0x000839a1) slider_imed_adjust_pane_g2_ParamLimits

0x1458,	// (0x000839b1) slider_imed_adjust_pane_g3_ParamLimits

0x1469,	// (0x000839c2) slider_imed_adjust_pane_g4_ParamLimits

0xf759,	// (0x00091cb2) slider_imed_adjust_pane_g_ParamLimits

0x950e,	// (0x0008ba67) aid_touch_area_cam4_ParamLimits

0x950e,	// (0x0008ba67) aid_touch_area_cam4

0x951e,	// (0x0008ba77) battery_pane_cp01

0x95a5,	// (0x0008bafe) main_camera4_pane_g6_ParamLimits

0x95a5,	// (0x0008bafe) main_camera4_pane_g6

0x95c3,	// (0x0008bb1c) main_camera4_pane_t2_ParamLimits

0x95c3,	// (0x0008bb1c) main_camera4_pane_t2

0x0001,

0xf85b,	// (0x00091db4) main_camera4_pane_t_ParamLimits

0xf85b,	// (0x00091db4) main_camera4_pane_t

0x9646,	// (0x0008bb9f) aid_touch_area_vid4_ParamLimits

0x9646,	// (0x0008bb9f) aid_touch_area_vid4

0x9686,	// (0x0008bbdf) main_video4_pane_g5_ParamLimits

0x9686,	// (0x0008bbdf) main_video4_pane_g5

0x96ac,	// (0x0008bc05) vid4_progress_pane_ParamLimits

0x96ac,	// (0x0008bc05) vid4_progress_pane

0x1bde,	// (0x00084137) main_cset_slider_pane_g18_ParamLimits

0x1bde,	// (0x00084137) main_cset_slider_pane_g18

0x1dc1,	// (0x0008431a) cell_cam4_burst_pane_g2_ParamLimits

0x1dc1,	// (0x0008431a) cell_cam4_burst_pane_g2

0x0001,

0xf9b0,	// (0x00091f09) cell_cam4_burst_pane_g_ParamLimits

0xf9b0,	// (0x00091f09) cell_cam4_burst_pane_g

0xa5c1,	// (0x0008cb1a) bg_cl_pane_ParamLimits

0xa5c1,	// (0x0008cb1a) bg_cl_pane

0xa5cd,	// (0x0008cb26) cl_header_pane_ParamLimits

0xa5cd,	// (0x0008cb26) cl_header_pane

0xa5d9,	// (0x0008cb32) cl_listscroll_pane_ParamLimits

0xa5d9,	// (0x0008cb32) cl_listscroll_pane

0x1fab,	// (0x00084504) bg_cl_pane_g1

0x1fb3,	// (0x0008450c) bg_cl_pane_g2

0x1fbb,	// (0x00084514) bg_cl_pane_g3

0x1fc3,	// (0x0008451c) bg_cl_pane_g4

0x1fcb,	// (0x00084524) bg_cl_pane_g5

0x1fd3,	// (0x0008452c) bg_cl_pane_g6

0x1fdb,	// (0x00084534) bg_cl_pane_g7

0x1fe3,	// (0x0008453c) bg_cl_pane_g8

0x1feb,	// (0x00084544) bg_cl_pane_g9

0x0008,

0xf9eb,	// (0x00091f44) bg_cl_pane_g

0xa5e5,	// (0x0008cb3e) aid_height_cl_leading_ParamLimits

0xa5e5,	// (0x0008cb3e) aid_height_cl_leading

0xa5f1,	// (0x0008cb4a) aid_height_cl_text_ParamLimits

0xa5f1,	// (0x0008cb4a) aid_height_cl_text

0xeef1,	// (0x0009144a) bg_cl_header_pane_ParamLimits

0xeef1,	// (0x0009144a) bg_cl_header_pane

0xa609,	// (0x0008cb62) cl_header_pane_g1_ParamLimits

0xa609,	// (0x0008cb62) cl_header_pane_g1

0xa616,	// (0x0008cb6f) cl_header_pane_t1_ParamLimits

0xa616,	// (0x0008cb6f) cl_header_pane_t1

0x1ff3,	// (0x0008454c) cl_list_pane

0x1bb1,	// (0x0008410a) hc_scroll_pane_cp01

0xd5b1,	// (0x0008fb0a) bg_cl_header_pane_g1

0x1a93,	// (0x00083fec) bg_cl_header_pane_g2

0xd5d1,	// (0x0008fb2a) bg_cl_header_pane_g3

0x1aa3,	// (0x00083ffc) bg_cl_header_pane_g4

0x1a9b,	// (0x00083ff4) bg_cl_header_pane_g5

0x1cd0,	// (0x00084229) bg_cl_header_pane_g6

0x1abb,	// (0x00084014) bg_cl_header_pane_g7

0x1ac3,	// (0x0008401c) bg_cl_header_pane_g8

0x1ab3,	// (0x0008400c) bg_cl_header_pane_g9

0x0008,

0xf9fe,	// (0x00091f57) bg_cl_header_pane_g

0xa628,	// (0x0008cb81) hc_cl_list_double_graphic_heading_pane_ParamLimits

0xa628,	// (0x0008cb81) hc_cl_list_double_graphic_heading_pane

0xa638,	// (0x0008cb91) hc_cl_list_single_graphic_pane_ParamLimits

0xa638,	// (0x0008cb91) hc_cl_list_single_graphic_pane

0xa64a,	// (0x0008cba3) hc_cl_list_single_graphic_pane_g1_ParamLimits

0xa64a,	// (0x0008cba3) hc_cl_list_single_graphic_pane_g1

0xa656,	// (0x0008cbaf) hc_cl_list_single_graphic_pane_g2_ParamLimits

0xa656,	// (0x0008cbaf) hc_cl_list_single_graphic_pane_g2

0x0001,

0xfa11,	// (0x00091f6a) hc_cl_list_single_graphic_pane_g_ParamLimits

0xfa11,	// (0x00091f6a) hc_cl_list_single_graphic_pane_g

0xa66a,	// (0x0008cbc3) hc_cl_list_single_graphic_pane_t1_ParamLimits

0xa66a,	// (0x0008cbc3) hc_cl_list_single_graphic_pane_t1

0xa64a,	// (0x0008cba3) hc_cl_list_double_graphic_heading_pane_g1_ParamLimits

0xa64a,	// (0x0008cba3) hc_cl_list_double_graphic_heading_pane_g1

0xa67f,	// (0x0008cbd8) hc_cl_list_double_graphic_heading_pane_g2_ParamLimits

0xa67f,	// (0x0008cbd8) hc_cl_list_double_graphic_heading_pane_g2

0xa693,	// (0x0008cbec) hc_cl_list_double_graphic_heading_pane_g3_ParamLimits

0xa693,	// (0x0008cbec) hc_cl_list_double_graphic_heading_pane_g3

0x0002,

0xfa16,	// (0x00091f6f) hc_cl_list_double_graphic_heading_pane_g_ParamLimits

0xfa16,	// (0x00091f6f) hc_cl_list_double_graphic_heading_pane_g

0xa6a7,	// (0x0008cc00) hc_cl_list_double_graphic_heading_pane_t1_ParamLimits

0xa6a7,	// (0x0008cc00) hc_cl_list_double_graphic_heading_pane_t1

0xa6bc,	// (0x0008cc15) hc_cl_list_double_graphic_heading_pane_t2_ParamLimits

0xa6bc,	// (0x0008cc15) hc_cl_list_double_graphic_heading_pane_t2

0x0001,

0xfa1d,	// (0x00091f76) hc_cl_list_double_graphic_heading_pane_t_ParamLimits

0xfa1d,	// (0x00091f76) hc_cl_list_double_graphic_heading_pane_t

0xa6d9,	// (0x0008cc32) vid4_progress_pane_g1

0xa6e9,	// (0x0008cc42) vid4_progress_pane_g2

0xa6f9,	// (0x0008cc52) vid4_progress_pane_g3

0xa70b,	// (0x0008cc64) vid4_progress_pane_g4

0x0004,

0xfa22,	// (0x00091f7b) vid4_progress_pane_g

0xa729,	// (0x0008cc82) vid4_progress_pane_t1

0xa743,	// (0x0008cc9c) vid4_progress_pane_t2

0x0002,

0xfa2d,	// (0x00091f86) vid4_progress_pane_t

0xa76e,	// (0x0008ccc7) wait_bar_pane_cp07

0x0d2e,	// (0x00083287) blid_firmament_pane_ParamLimits

0x0d71,	// (0x000832ca) popup_blid_sat_info2_window_g1

0x0d95,	// (0x000832ee) popup_blid_sat_info2_window_t3

0x0da3,	// (0x000832fc) popup_blid_sat_info2_window_t4

0x0db1,	// (0x0008330a) popup_blid_sat_info2_window_t5

0x0dbf,	// (0x00083318) popup_blid_sat_info2_window_t6

0x0dcf,	// (0x00083328) popup_blid_sat_info2_window_t7

0x0ddd,	// (0x00083336) popup_blid_sat_info2_window_t8

0x0deb,	// (0x00083344) popup_blid_sat_info2_window_t9

0x0df9,	// (0x00083352) popup_blid_sat_info2_window_t10

0x0ec0,	// (0x00083419) aid_firma_cardinal_ParamLimits

0x0ed4,	// (0x0008342d) blid_firmament_pane_t1_ParamLimits

0x0eeb,	// (0x00083444) blid_firmament_pane_t2_ParamLimits

0x0f02,	// (0x0008345b) blid_firmament_pane_t3_ParamLimits

0x0f19,	// (0x00083472) blid_firmament_pane_t4_ParamLimits

0xf64b,	// (0x00091ba4) blid_firmament_pane_t_ParamLimits

0x0f30,	// (0x00083489) blid_sat_info_pane_ParamLimits

0x7bd5,	// (0x0008a12e) main_cam_set_pane_ParamLimits

0x8b80,	// (0x0008b0d9) aid_size_cell_colour_35_ParamLimits

0x8b9a,	// (0x0008b0f3) aid_size_cell_colour_112_ParamLimits

0x8bb1,	// (0x0008b10a) aid_size_cell_effect_ParamLimits

0xe82a,	// (0x00090d83) bg_tb_trans_pane_cp02_ParamLimits

0xe78f,	// (0x00090ce8) heading_imed_pane_ParamLimits

0x8bcb,	// (0x0008b124) listscroll_imed_pane_ParamLimits

0xe719,	// (0x00090c72) popup_call2_audio_first_window_g5_ParamLimits

0xe719,	// (0x00090c72) popup_call2_audio_first_window_g5

0x91ee,	// (0x0008b747) aid_size_touch_image3_arrow_left_ParamLimits

0x91ee,	// (0x0008b747) aid_size_touch_image3_arrow_left

0x9204,	// (0x0008b75d) aid_size_touch_image3_arrow_right_ParamLimits

0x9204,	// (0x0008b75d) aid_size_touch_image3_arrow_right

0xa759,	// (0x0008ccb2) vid4_progress_pane_t3

0x8d46,	// (0x0008b29f) main_hwr_training_symbol_option_pane_ParamLimits

0x8d46,	// (0x0008b29f) main_hwr_training_symbol_option_pane

0x162a,	// (0x00083b83) popup_hwr_training_preview_window_ParamLimits

0x162a,	// (0x00083b83) popup_hwr_training_preview_window

0x8da7,	// (0x0008b300) hwr_training_navi_pane_g5_ParamLimits

0x8da7,	// (0x0008b300) hwr_training_navi_pane_g5

0x1a81,	// (0x00083fda) popup_char_count_window

0x4e6e,	// (0x000873c7) bg_popup_sub_pane_cp20_ParamLimits

0xa0c9,	// (0x0008c622) list_vitu2_match_list_pane_ParamLimits

0xa0d5,	// (0x0008c62e) vitu2_page_scroll_pane_ParamLimits

0xa0d5,	// (0x0008c62e) vitu2_page_scroll_pane

0x200d,	// (0x00084566) list_single_hwr_training_symbol_option_pane_ParamLimits

0x200d,	// (0x00084566) list_single_hwr_training_symbol_option_pane

0x2020,	// (0x00084579) list_single_hwr_training_symbol_option_pane_g1

0x2028,	// (0x00084581) list_single_hwr_training_symbol_option_pane_t1

0x2036,	// (0x0008458f) bg_button_pane_cp023

0x203f,	// (0x00084598) bg_button_pane_cp024

0x2072,	// (0x000845cb) vitu2_page_scroll_pane_g1

0x207a,	// (0x000845d3) vitu2_page_scroll_pane_g2

0x0001,

0xfa34,	// (0x00091f8d) vitu2_page_scroll_pane_g

0x2082,	// (0x000845db) vitu2_page_scroll_pane_t1

0x2091,	// (0x000845ea) popup_char_count_window_g1

0x209a,	// (0x000845f3) popup_char_count_window_g2

0x20a3,	// (0x000845fc) popup_char_count_window_g3

0x0002,

0xfa39,	// (0x00091f92) popup_char_count_window_g

0x20ac,	// (0x00084605) popup_char_count_window_t1

0x4e88,	// (0x000873e1) main_vded2_pane

0x13d1,	// (0x0008392a) aid_size_cell_imed_line

0x13db,	// (0x00083934) grid_imed_line_width_pane

0x9720,	// (0x0008bc79) vid4_indicators_pane_g4

0x20ba,	// (0x00084613) cell_imed_line_width_pane_ParamLimits

0x20ba,	// (0x00084613) cell_imed_line_width_pane

0x20d0,	// (0x00084629) cell_imed_line_width_pane_g1

0x20d9,	// (0x00084632) cell_imed_line_width_pane_g2

0x0001,

0xfa40,	// (0x00091f99) cell_imed_line_width_pane_g

0xa795,	// (0x0008ccee) main_vded2_pane_g1_ParamLimits

0xa795,	// (0x0008ccee) main_vded2_pane_g1

0xa7a4,	// (0x0008ccfd) main_vded2_pane_g2_ParamLimits

0xa7a4,	// (0x0008ccfd) main_vded2_pane_g2

0x0001,

0xfa45,	// (0x00091f9e) main_vded2_pane_g_ParamLimits

0xfa45,	// (0x00091f9e) main_vded2_pane_g

0xa7b2,	// (0x0008cd0b) vded2_slider_pane_ParamLimits

0xa7b2,	// (0x0008cd0b) vded2_slider_pane

0xa7bf,	// (0x0008cd18) aid_size_touch_vded2_end

0xa7c9,	// (0x0008cd22) aid_size_touch_vded2_playhead

0x20e1,	// (0x0008463a) aid_size_touch_vded2_start

0x20e9,	// (0x00084642) vded2_slider_bg_pane

0x20f2,	// (0x0008464b) vded2_slider_pane_g1

0x20fb,	// (0x00084654) vded2_slider_pane_g2

0xa7d1,	// (0x0008cd2a) vded2_slider_pane_g3

0x0002,

0xfa4a,	// (0x00091fa3) vded2_slider_pane_g

0x2103,	// (0x0008465c) vded2_slider_bg_pane_g1

0x210c,	// (0x00084665) vded2_slider_bg_pane_g2

0x2115,	// (0x0008466e) vded2_slider_bg_pane_g3

0x0002,

0xf716,	// (0x00091c6f) vded2_slider_bg_pane_g

0x745a,	// (0x000899b3) aid_postcard_touch_down_pane_ParamLimits

0x745a,	// (0x000899b3) aid_postcard_touch_down_pane

0x746a,	// (0x000899c3) aid_postcard_touch_up_pane_ParamLimits

0x746a,	// (0x000899c3) aid_postcard_touch_up_pane

0x4e88,	// (0x000873e1) main_blid2_pane

0x7bfe,	// (0x0008a157) popup_blid2_search_window

0xe7c9,	// (0x00090d22) blid2_gps_pane

0xe7c9,	// (0x00090d22) blid2_navig_pane

0xe7c9,	// (0x00090d22) blid2_search_pane

0xe7c9,	// (0x00090d22) blid2_tripm_pane

0xa7da,	// (0x0008cd33) blid2_search_pane_g1_ParamLimits

0xa7da,	// (0x0008cd33) blid2_search_pane_g1

0xa7e6,	// (0x0008cd3f) blid2_search_pane_t1_ParamLimits

0xa7e6,	// (0x0008cd3f) blid2_search_pane_t1

0xa7f8,	// (0x0008cd51) aid_size_cell_blid2_gps_ParamLimits

0xa7f8,	// (0x0008cd51) aid_size_cell_blid2_gps

0xa808,	// (0x0008cd61) blid2_gps_pane_g1_ParamLimits

0xa808,	// (0x0008cd61) blid2_gps_pane_g1

0xa814,	// (0x0008cd6d) grid_blid2_satellite_pane_ParamLimits

0xa814,	// (0x0008cd6d) grid_blid2_satellite_pane

0xa822,	// (0x0008cd7b) blid2_navig_pane_g1_ParamLimits

0xa822,	// (0x0008cd7b) blid2_navig_pane_g1

0xa82e,	// (0x0008cd87) blid2_navig_pane_t1_ParamLimits

0xa82e,	// (0x0008cd87) blid2_navig_pane_t1

0xa840,	// (0x0008cd99) blid2_navig_pane_t2_ParamLimits

0xa840,	// (0x0008cd99) blid2_navig_pane_t2

0x0001,

0xfa51,	// (0x00091faa) blid2_navig_pane_t_ParamLimits

0xfa51,	// (0x00091faa) blid2_navig_pane_t

0xa852,	// (0x0008cdab) blid2_navig_ring_pane_ParamLimits

0xa852,	// (0x0008cdab) blid2_navig_ring_pane

0xa862,	// (0x0008cdbb) blid2_speed_pane_ParamLimits

0xa862,	// (0x0008cdbb) blid2_speed_pane

0xa86e,	// (0x0008cdc7) blid2_tripm_pane_g1_ParamLimits

0xa86e,	// (0x0008cdc7) blid2_tripm_pane_g1

0xa87e,	// (0x0008cdd7) blid2_tripm_pane_g2_ParamLimits

0xa87e,	// (0x0008cdd7) blid2_tripm_pane_g2

0xa88a,	// (0x0008cde3) blid2_tripm_pane_g3_ParamLimits

0xa88a,	// (0x0008cde3) blid2_tripm_pane_g3

0xa896,	// (0x0008cdef) blid2_tripm_pane_g4_ParamLimits

0xa896,	// (0x0008cdef) blid2_tripm_pane_g4

0xa8a2,	// (0x0008cdfb) blid2_tripm_pane_g5_ParamLimits

0xa8a2,	// (0x0008cdfb) blid2_tripm_pane_g5

0x0005,

0xfa56,	// (0x00091faf) blid2_tripm_pane_g_ParamLimits

0xfa56,	// (0x00091faf) blid2_tripm_pane_g

0xa8be,	// (0x0008ce17) blid2_tripm_pane_t1_ParamLimits

0xa8be,	// (0x0008ce17) blid2_tripm_pane_t1

0xa8d0,	// (0x0008ce29) blid2_tripm_pane_t2_ParamLimits

0xa8d0,	// (0x0008ce29) blid2_tripm_pane_t2

0xa8e2,	// (0x0008ce3b) blid2_tripm_pane_t3_ParamLimits

0xa8e2,	// (0x0008ce3b) blid2_tripm_pane_t3

0x0003,

0xfa63,	// (0x00091fbc) blid2_tripm_pane_t_ParamLimits

0xfa63,	// (0x00091fbc) blid2_tripm_pane_t

0xa914,	// (0x0008ce6d) cell_blid2_satellite_pane_ParamLimits

0xa914,	// (0x0008ce6d) cell_blid2_satellite_pane

0xa932,	// (0x0008ce8b) cell_blid2_satellite_pane_g1

0x211e,	// (0x00084677) cell_blid2_satellite_pane_t1

0xd3a8,	// (0x0008f901) blid2_speed_pane_g1

0x212c,	// (0x00084685) blid2_speed_pane_t1

0x213a,	// (0x00084693) blid2_speed_pane_t2

0x0001,

0xfa6c,	// (0x00091fc5) blid2_speed_pane_t

0xd3a8,	// (0x0008f901) blid2_navig_ring_pane_g1

0xa93b,	// (0x0008ce94) blid2_navig_ring_pane_g2

0xa943,	// (0x0008ce9c) blid2_navig_ring_pane_g3

0xa94b,	// (0x0008cea4) blid2_navig_ring_pane_g4

0xa953,	// (0x0008ceac) blid2_navig_ring_pane_g5

0x0004,

0xfa71,	// (0x00091fca) blid2_navig_ring_pane_g

0xe7c9,	// (0x00090d22) bg_popup_window_pane_cp011

0x2148,	// (0x000846a1) popup_blid2_search_window_g1

0x2150,	// (0x000846a9) popup_blid2_search_window_t1

0x215e,	// (0x000846b7) popup_blid2_search_window_t2

0x0001,

0xfa7c,	// (0x00091fd5) popup_blid2_search_window_t

0xd4c0,	// (0x0008fa19) main_browser_pane_g1

0xef71,	// (0x000914ca) main_browser_pane_ParamLimits

0x7bd5,	// (0x0008a12e) bg_button_pane_cp011_ParamLimits

0x9994,	// (0x0008beed) cell_vitu2_function_pane_g1_ParamLimits

0xe781,	// (0x00090cda) bg_popup_sub_pane_cp22_ParamLimits

0xa274,	// (0x0008c7cd) input_focus_pane_cp08_ParamLimits

0xa290,	// (0x0008c7e9) popup_vitu2_query_button_pane_ParamLimits

0xa290,	// (0x0008c7e9) popup_vitu2_query_button_pane

0xa29f,	// (0x0008c7f8) popup_vitu2_query_input_button_pane

0x1d0b,	// (0x00084264) popup_vitu2_query_window_g1_ParamLimits

0xa2a9,	// (0x0008c802) popup_vitu2_query_window_g2_ParamLimits

0xf984,	// (0x00091edd) popup_vitu2_query_window_g_ParamLimits

0xe7c9,	// (0x00090d22) bg_button_pane_cp026

0xa95b,	// (0x0008ceb4) popup_vitu2_query_input_button_pane_g1

0xe7c9,	// (0x00090d22) bg_button_pane_cp025

0x216c,	// (0x000846c5) popup_vitu2_query_button_pane_t1

0x811c,	// (0x0008a675) main_mp3_pane_t6

0x812c,	// (0x0008a685) popup_slider_window_cp01

0x95fb,	// (0x0008bb54) cam4_battery_pane

0x96d9,	// (0x0008bc32) cam4_battery_pane_cp02

0xa6d1,	// (0x0008cc2a) cam4_battery_pane_cp01

0xa6d1,	// (0x0008cc2a) cam4_battery_pane_cp03

0x217a,	// (0x000846d3) cam4_battery_pane_g1

0xd3a8,	// (0x0008f901) cam4_battery_pane_g2

0x0001,

0xfa81,	// (0x00091fda) cam4_battery_pane_g

0x0e07,	// (0x00083360) popup_blid_sat_info2_window_t11

0x6fa4,	// (0x000894fd) aid_size_touch_mv_arrow_left_ParamLimits

0x6fcf,	// (0x00089528) aid_size_touch_mv_arrow_right_ParamLimits

0xdc5d,	// (0x000901b6) navi_pane_g1_ParamLimits

0x700e,	// (0x00089567) navi_pane_g2_ParamLimits

0x703c,	// (0x00089595) navi_pane_g3_ParamLimits

0xf35f,	// (0x000918b8) navi_pane_g_ParamLimits

0x7096,	// (0x000895ef) navi_pane_mv_t1_ParamLimits

0x8bd7,	// (0x0008b130) grid_imed_effect_pane_ParamLimits

0x5b84,	// (0x000880dd) aid_placing_vt_slider_lsc

0xd40b,	// (0x0008f964) aid_placing_vt_slider_prt

0xe82a,	// (0x00090d83) bg_tb_trans_pane_cp01_ParamLimits

0x106f,	// (0x000835c8) popup_image_details_window_g1_ParamLimits

0x1082,	// (0x000835db) popup_image_details_window_g2_ParamLimits

0x1097,	// (0x000835f0) popup_image_details_window_g3_ParamLimits

0x1097,	// (0x000835f0) popup_image_details_window_g3

0xf68b,	// (0x00091be4) popup_image_details_window_g_ParamLimits

0x10ab,	// (0x00083604) popup_image_details_window_t1_ParamLimits

0x10bd,	// (0x00083616) popup_image_details_window_t2_ParamLimits

0x10d6,	// (0x0008362f) popup_image_details_window_t3_ParamLimits

0x10ea,	// (0x00083643) popup_image_details_window_t4_ParamLimits

0x1105,	// (0x0008365e) popup_image_details_window_t5_ParamLimits

0xf692,	// (0x00091beb) popup_image_details_window_t_ParamLimits

0xa5fd,	// (0x0008cb56) cl_header_name_pane_ParamLimits

0xa5fd,	// (0x0008cb56) cl_header_name_pane

0xa963,	// (0x0008cebc) cl_header_name_pane_t1_ParamLimits

0xa963,	// (0x0008cebc) cl_header_name_pane_t1

0xa97a,	// (0x0008ced3) cl_header_name_pane_t2_ParamLimits

0xa97a,	// (0x0008ced3) cl_header_name_pane_t2

0xa9a4,	// (0x0008cefd) cl_header_name_pane_t3_ParamLimits

0xa9a4,	// (0x0008cefd) cl_header_name_pane_t3

0x0002,

0xfa86,	// (0x00091fdf) cl_header_name_pane_t_ParamLimits

0xfa86,	// (0x00091fdf) cl_header_name_pane_t

0x7067,	// (0x000895c0) navi_pane_mv_g2_ParamLimits

0x1a1d,	// (0x00083f76) field_vitu2_entry_pane_g1_ParamLimits

0x1a29,	// (0x00083f82) field_vitu2_entry_pane_g2_ParamLimits

0xe7af,	// (0x00090d08) field_vitu2_entry_pane_g3_ParamLimits

0xe7af,	// (0x00090d08) field_vitu2_entry_pane_g3

0xf88d,	// (0x00091de6) field_vitu2_entry_pane_g_ParamLimits

0x9922,	// (0x0008be7b) cell_vitu2_itu_pane_g1_ParamLimits

0x993a,	// (0x0008be93) cell_vitu2_itu_pane_g2_ParamLimits

0x993a,	// (0x0008be93) cell_vitu2_itu_pane_g2

0x0001,

0xf899,	// (0x00091df2) cell_vitu2_itu_pane_g_ParamLimits

0xf899,	// (0x00091df2) cell_vitu2_itu_pane_g

0x7bd5,	// (0x0008a12e) bg_vkb2_func_pane_cp05_ParamLimits

0x7bd5,	// (0x0008a12e) bg_vkb2_func_pane_cp05

0x7bd5,	// (0x0008a12e) bg_vkb2_func_pane_cp03

0x7bd5,	// (0x0008a12e) bg_vkb2_func_pane_cp04

0x7bd5,	// (0x0008a12e) bg_vkb2_func_pane_cp10_ParamLimits

0x7bd5,	// (0x0008a12e) bg_vkb2_func_pane_cp10

0xa59e,	// (0x0008caf7) bg_vkb2_func_pane_cp08

0xa25c,	// (0x0008c7b5) bg_vkb2_func_pane_cp06

0xa581,	// (0x0008cada) bg_vkb2_func_pane_cp07

0x2048,	// (0x000845a1) bg_vkb2_func_pane_cp11_ParamLimits

0x2048,	// (0x000845a1) bg_vkb2_func_pane_cp11

0x205d,	// (0x000845b6) bg_vkb2_func_pane_cp12_ParamLimits

0x205d,	// (0x000845b6) bg_vkb2_func_pane_cp12

0xe7c9,	// (0x00090d22) bg_vkb2_func_pane_cp09

0x1a93,	// (0x00083fec) bg_vkb2_func_pane_g1

0xd5d1,	// (0x0008fb2a) bg_vkb2_func_pane_g2

0x1a9b,	// (0x00083ff4) bg_vkb2_func_pane_g3

0x1aa3,	// (0x00083ffc) bg_vkb2_func_pane_g4

0x1cd0,	// (0x00084229) bg_vkb2_func_pane_g5

0x1abb,	// (0x00084014) bg_vkb2_func_pane_g6

0x1ac3,	// (0x0008401c) bg_vkb2_func_pane_g7

0x1ab3,	// (0x0008400c) bg_vkb2_func_pane_g8

0xd5b1,	// (0x0008fb0a) bg_vkb2_func_pane_g9

0x0008,

0xfa8d,	// (0x00091fe6) bg_vkb2_func_pane_g

0xa8b0,	// (0x0008ce09) blid2_tripm_pane_g6_ParamLimits

0xa8b0,	// (0x0008ce09) blid2_tripm_pane_g6

0x1955,	// (0x00083eae) mp4_progress_pane_g1

0xa908,	// (0x0008ce61) blid2_tripm_values_pane_ParamLimits

0xa908,	// (0x0008ce61) blid2_tripm_values_pane

0xa9c9,	// (0x0008cf22) blid2_tripm_values_pane_t1

0xa9d7,	// (0x0008cf30) blid2_tripm_values_pane_t2

0xa9e5,	// (0x0008cf3e) blid2_tripm_values_pane_t3

0xa9f3,	// (0x0008cf4c) blid2_tripm_values_pane_t4

0xaa01,	// (0x0008cf5a) blid2_tripm_values_pane_t5

0xaa0f,	// (0x0008cf68) blid2_tripm_values_pane_t6

0xaa1d,	// (0x0008cf76) blid2_tripm_values_pane_t7

0xaa2b,	// (0x0008cf84) blid2_tripm_values_pane_t8

0xaa39,	// (0x0008cf92) blid2_tripm_values_pane_t9

0x0008,

0xfaa0,	// (0x00091ff9) blid2_tripm_values_pane_t

0x5bc2,	// (0x0008811b) call_video_pane_t1_ParamLimits

0x5bdf,	// (0x00088138) call_video_pane_t2_ParamLimits

0xf208,	// (0x00091761) call_video_pane_t_ParamLimits

0x7396,	// (0x000898ef) msg_header_pane_g1_ParamLimits

0xde5d,	// (0x000903b6) msg_header_pane_g2_ParamLimits

0xde5d,	// (0x000903b6) msg_header_pane_g2

0x0001,

0xf402,	// (0x0009195b) msg_header_pane_g_ParamLimits

0xf402,	// (0x0009195b) msg_header_pane_g

0xef71,	// (0x000914ca) main_clock2_pane_ParamLimits

0x8950,	// (0x0008aea9) grid_clock2_toolbar_pane_ParamLimits

0x8950,	// (0x0008aea9) grid_clock2_toolbar_pane

0x8950,	// (0x0008aea9) listscroll_clock2_pane_ParamLimits

0x8950,	// (0x0008aea9) listscroll_clock2_pane

0x89ff,	// (0x0008af58) main_clock2_pane_t3_ParamLimits

0x89ff,	// (0x0008af58) main_clock2_pane_t3

0x8a11,	// (0x0008af6a) main_clock2_pane_t4_ParamLimits

0x8a11,	// (0x0008af6a) main_clock2_pane_t4

0x2184,	// (0x000846dd) cell_clock2_toolbar_pane

0x218c,	// (0x000846e5) cell_clock2_toolbar_pane_cp01

0x218c,	// (0x000846e5) cell_clock2_toolbar_pane_cp02

0x2194,	// (0x000846ed) cell_clock2_toolbar_pane_cp03

0x219c,	// (0x000846f5) list_clock2_pane

0xdbae,	// (0x00090107) scroll_pane_cp10

0x21a4,	// (0x000846fd) list_single_clock2_pane_ParamLimits

0x21a4,	// (0x000846fd) list_single_clock2_pane

0xd372,	// (0x0008f8cb) list_highlight_pane_cp08

0x21b1,	// (0x0008470a) list_single_clock2_pane_t1

0x21bf,	// (0x00084718) list_single_clock2_pane_t2

0x0001,

0xfab3,	// (0x0009200c) list_single_clock2_pane_t

0xe7c9,	// (0x00090d22) bg_button_pane_cp10

0x21cd,	// (0x00084726) cell_clock2_toolbar_pane_g1

0x73bc,	// (0x00089915) aid_main_viewer_pane_g1_ParamLimits

0x73bc,	// (0x00089915) aid_main_viewer_pane_g1

0x73c8,	// (0x00089921) aid_main_viewer_pane_g2_ParamLimits

0x73c8,	// (0x00089921) aid_main_viewer_pane_g2

0x73d4,	// (0x0008992d) aid_main_viewer_pane_g3_ParamLimits

0x73d4,	// (0x0008992d) aid_main_viewer_pane_g3

0x73e5,	// (0x0008993e) aid_main_viewer_pane_g4_ParamLimits

0x73e5,	// (0x0008993e) aid_main_viewer_pane_g4

0x0003,

0xf413,	// (0x0009196c) aid_main_viewer_pane_g_ParamLimits

0xf413,	// (0x0009196c) aid_main_viewer_pane_g

0x7bb6,	// (0x0008a10f) main_calc_pane_ParamLimits

0x7be3,	// (0x0008a13c) main_dialer2_pane_ParamLimits

0x4e88,	// (0x000873e1) main_cam6_pane

0x4e88,	// (0x000873e1) main_vid6_pane

0x895c,	// (0x0008aeb5) listscroll_gen_pane_cp06_ParamLimits

0x895c,	// (0x0008aeb5) listscroll_gen_pane_cp06

0x8a23,	// (0x0008af7c) main_clock2_pane_t5_ParamLimits

0x8a23,	// (0x0008af7c) main_clock2_pane_t5

0x8a70,	// (0x0008afc9) aid_call2_pane_cp10_ParamLimits

0x8a82,	// (0x0008afdb) aid_call_pane_cp10_ParamLimits

0xdc32,	// (0x0009018b) popup_clock_analogue_window_cp10_g1_ParamLimits

0xdc32,	// (0x0009018b) popup_clock_analogue_window_cp10_g2_ParamLimits

0x8a94,	// (0x0008afed) popup_clock_analogue_window_cp10_g3_ParamLimits

0x8a94,	// (0x0008afed) popup_clock_analogue_window_cp10_g4_ParamLimits

0xdc32,	// (0x0009018b) popup_clock_analogue_window_cp10_g5_ParamLimits

0xf747,	// (0x00091ca0) popup_clock_analogue_window_cp10_g_ParamLimits

0x8aaa,	// (0x0008b003) popup_clock_analogue_window_cp10_t1_ParamLimits

0x919b,	// (0x0008b6f4) cell_dialer2_keypad_pane_g2_ParamLimits

0x919b,	// (0x0008b6f4) cell_dialer2_keypad_pane_g2

0x0001,

0xf82c,	// (0x00091d85) cell_dialer2_keypad_pane_g_ParamLimits

0xf82c,	// (0x00091d85) cell_dialer2_keypad_pane_g

0x91b7,	// (0x0008b710) cell_dialer2_keypad_pane_t1

0x9c76,	// (0x0008c1cf) main_cset_text2_pane_ParamLimits

0x9c76,	// (0x0008c1cf) main_cset_text2_pane

0x1f03,	// (0x0008445c) area_vitu2_query_pane_g1_ParamLimits

0xa520,	// (0x0008ca79) area_vitu2_query_pane_g2_ParamLimits

0xf9d7,	// (0x00091f30) area_vitu2_query_pane_g_ParamLimits

0x1f87,	// (0x000844e0) area_vitu2_query_pane_t7_ParamLimits

0x1f87,	// (0x000844e0) area_vitu2_query_pane_t7

0xa25c,	// (0x0008c7b5) bg_button_pane_cp018_ParamLimits

0xa581,	// (0x0008cada) bg_button_pane_cp021_ParamLimits

0xa58d,	// (0x0008cae6) bg_button_pane_cp022_ParamLimits

0xa59e,	// (0x0008caf7) bg_vkb2_func_pane_cp08_ParamLimits

0xa25c,	// (0x0008c7b5) bg_vkb2_func_pane_cp06_ParamLimits

0xa581,	// (0x0008cada) bg_vkb2_func_pane_cp07_ParamLimits

0xa5b0,	// (0x0008cb09) input_focus_pane_cp09_ParamLimits

0xaa47,	// (0x0008cfa0) cam6_autofocus_pane_ParamLimits

0xaa47,	// (0x0008cfa0) cam6_autofocus_pane

0xaa69,	// (0x0008cfc2) cam6_image_uncrop_pane_ParamLimits

0xaa69,	// (0x0008cfc2) cam6_image_uncrop_pane

0xaa96,	// (0x0008cfef) cam6_indi_pane_ParamLimits

0xaa96,	// (0x0008cfef) cam6_indi_pane

0xaab0,	// (0x0008d009) cam6_mode_pane_ParamLimits

0xaab0,	// (0x0008d009) cam6_mode_pane

0xaac4,	// (0x0008d01d) cam6_timer_pane_ParamLimits

0xaac4,	// (0x0008d01d) cam6_timer_pane

0xaad0,	// (0x0008d029) cam6_zoom_pane_ParamLimits

0xaad0,	// (0x0008d029) cam6_zoom_pane

0xaaec,	// (0x0008d045) cam6_mode_pane_g1_ParamLimits

0xaaec,	// (0x0008d045) cam6_mode_pane_g1

0xaaf8,	// (0x0008d051) cam6_mode_pane_g2_ParamLimits

0xaaf8,	// (0x0008d051) cam6_mode_pane_g2

0xab04,	// (0x0008d05d) cam6_mode_pane_g3_ParamLimits

0xab04,	// (0x0008d05d) cam6_mode_pane_g3

0xab10,	// (0x0008d069) cam6_mode_pane_g4_ParamLimits

0xab10,	// (0x0008d069) cam6_mode_pane_g4

0x0003,

0xfab8,	// (0x00092011) cam6_mode_pane_g_ParamLimits

0xfab8,	// (0x00092011) cam6_mode_pane_g

0x0bbd,	// (0x00083116) bg_tb_trans_pane_cp08_ParamLimits

0x0bbd,	// (0x00083116) bg_tb_trans_pane_cp08

0x21d5,	// (0x0008472e) cam6_battery_pane_ParamLimits

0x21d5,	// (0x0008472e) cam6_battery_pane

0x21eb,	// (0x00084744) cam6_indi_pane_g1_ParamLimits

0x21eb,	// (0x00084744) cam6_indi_pane_g1

0x21fd,	// (0x00084756) cam6_indi_pane_g2_ParamLimits

0x21fd,	// (0x00084756) cam6_indi_pane_g2

0x220f,	// (0x00084768) cam6_indi_pane_g3_ParamLimits

0x220f,	// (0x00084768) cam6_indi_pane_g3

0x0002,

0xfac1,	// (0x0009201a) cam6_indi_pane_g_ParamLimits

0xfac1,	// (0x0009201a) cam6_indi_pane_g

0x2221,	// (0x0008477a) cam6_indi_pane_t1_ParamLimits

0x2221,	// (0x0008477a) cam6_indi_pane_t1

0x975d,	// (0x0008bcb6) cam6_autofocus_pane_g1

0x9755,	// (0x0008bcae) cam6_autofocus_pane_g2

0x976d,	// (0x0008bcc6) cam6_autofocus_pane_g3

0x9765,	// (0x0008bcbe) cam6_autofocus_pane_g4

0x0003,

0xfac8,	// (0x00092021) cam6_autofocus_pane_g

0x2247,	// (0x000847a0) cam6_timer_pane_g1

0x224f,	// (0x000847a8) cam6_timer_pane_t1

0x225d,	// (0x000847b6) cam6_zoom_cont_pane

0x2265,	// (0x000847be) cam6_zoom_pane_g1

0x226d,	// (0x000847c6) cam6_zoom_pane_g2

0xab1c,	// (0x0008d075) cam6_zoom_pane_g3

0x0002,

0xfad1,	// (0x0009202a) cam6_zoom_pane_g

0xd3a8,	// (0x0008f901) cam6_battery_pane_g1

0xd3a8,	// (0x0008f901) cam6_battery_pane_g2

0x0001,

0xf3c3,	// (0x0009191c) cam6_battery_pane_g

0x2275,	// (0x000847ce) cam6_zoom_cont_pane_g1

0x227e,	// (0x000847d7) cam6_zoom_cont_pane_g2

0x2287,	// (0x000847e0) cam6_zoom_cont_pane_g3

0x0002,

0xfad8,	// (0x00092031) cam6_zoom_cont_pane_g

0xab39,	// (0x0008d092) cam6_mode_pane_cp_ParamLimits

0xab39,	// (0x0008d092) cam6_mode_pane_cp

0xab4d,	// (0x0008d0a6) cam6_zoom_pane_cp_ParamLimits

0xab4d,	// (0x0008d0a6) cam6_zoom_pane_cp

0xab69,	// (0x0008d0c2) vid6_image_uncrop_cif_pane_ParamLimits

0xab69,	// (0x0008d0c2) vid6_image_uncrop_cif_pane

0xab95,	// (0x0008d0ee) vid6_image_uncrop_nhd_pane_ParamLimits

0xab95,	// (0x0008d0ee) vid6_image_uncrop_nhd_pane

0xabb4,	// (0x0008d10d) vid6_image_uncrop_vga_pane_ParamLimits

0xabb4,	// (0x0008d10d) vid6_image_uncrop_vga_pane

0xabd3,	// (0x0008d12c) vid6_image_uncrop_wvga_pane_ParamLimits

0xabd3,	// (0x0008d12c) vid6_image_uncrop_wvga_pane

0xabf2,	// (0x0008d14b) vid6_indi_pane_ParamLimits

0xabf2,	// (0x0008d14b) vid6_indi_pane

0x0bbd,	// (0x00083116) bg_tb_trans_pane_cp09_ParamLimits

0x0bbd,	// (0x00083116) bg_tb_trans_pane_cp09

0x229f,	// (0x000847f8) cam6_battery_pane_cp_ParamLimits

0x229f,	// (0x000847f8) cam6_battery_pane_cp

0x22ab,	// (0x00084804) vid6_indi_pane_g1_ParamLimits

0x22ab,	// (0x00084804) vid6_indi_pane_g1

0x22bd,	// (0x00084816) vid6_indi_pane_g2_ParamLimits

0x22bd,	// (0x00084816) vid6_indi_pane_g2

0x22cf,	// (0x00084828) vid6_indi_pane_g3_ParamLimits

0x22cf,	// (0x00084828) vid6_indi_pane_g3

0x22e6,	// (0x0008483f) vid6_indi_pane_g4_ParamLimits

0x22e6,	// (0x0008483f) vid6_indi_pane_g4

0x22fd,	// (0x00084856) vid6_indi_pane_g5_ParamLimits

0x22fd,	// (0x00084856) vid6_indi_pane_g5

0x0004,

0xfadf,	// (0x00092038) vid6_indi_pane_g_ParamLimits

0xfadf,	// (0x00092038) vid6_indi_pane_g

0x2317,	// (0x00084870) vid6_indi_pane_t1_ParamLimits

0x2317,	// (0x00084870) vid6_indi_pane_t1

0x232d,	// (0x00084886) vid6_indi_pane_t2_ParamLimits

0x232d,	// (0x00084886) vid6_indi_pane_t2

0x2355,	// (0x000848ae) vid6_indi_pane_t3_ParamLimits

0x2355,	// (0x000848ae) vid6_indi_pane_t3

0x237d,	// (0x000848d6) vid6_indi_pane_t4_ParamLimits

0x237d,	// (0x000848d6) vid6_indi_pane_t4

0x0003,

0xfaea,	// (0x00092043) vid6_indi_pane_t_ParamLimits

0xfaea,	// (0x00092043) vid6_indi_pane_t

0x23a1,	// (0x000848fa) wait_bar_pane_cp08

0xac17,	// (0x0008d170) main_cset_text2_pane_t1_ParamLimits

0xac17,	// (0x0008d170) main_cset_text2_pane_t1

0xab24,	// (0x0008d07d) listscroll_gen_pane_cp06_t1_ParamLimits

0xab24,	// (0x0008d07d) listscroll_gen_pane_cp06_t1

0x4e88,	// (0x000873e1) main_cam6_set_pane

0x2be3,	// (0x0008513c) bg_tb_trans_pane_cp06_ParamLimits

0x9603,	// (0x0008bb5c) cam4_indicators_pane_g1_ParamLimits

0x9614,	// (0x0008bb6d) cam4_indicators_pane_g2_ParamLimits

0xf869,	// (0x00091dc2) cam4_indicators_pane_g_ParamLimits

0x962c,	// (0x0008bb85) cam4_indicators_pane_t1_ParamLimits

0x7bd5,	// (0x0008a12e) bg_tb_trans_pane_cp07_ParamLimits

0x96e3,	// (0x0008bc3c) vid4_indicators_pane_g1_ParamLimits

0x96f9,	// (0x0008bc52) vid4_indicators_pane_g2_ParamLimits

0x970d,	// (0x0008bc66) vid4_indicators_pane_g3_ParamLimits

0x9720,	// (0x0008bc79) vid4_indicators_pane_g4_ParamLimits

0xf87b,	// (0x00091dd4) vid4_indicators_pane_g_ParamLimits

0x973e,	// (0x0008bc97) vid4_indicators_pane_t1_ParamLimits

0xa6d9,	// (0x0008cc32) vid4_progress_pane_g1_ParamLimits

0xa6e9,	// (0x0008cc42) vid4_progress_pane_g2_ParamLimits

0xa6f9,	// (0x0008cc52) vid4_progress_pane_g3_ParamLimits

0xa70b,	// (0x0008cc64) vid4_progress_pane_g4_ParamLimits

0xfa22,	// (0x00091f7b) vid4_progress_pane_g_ParamLimits

0xa729,	// (0x0008cc82) vid4_progress_pane_t1_ParamLimits

0xa743,	// (0x0008cc9c) vid4_progress_pane_t2_ParamLimits

0xa759,	// (0x0008ccb2) vid4_progress_pane_t3_ParamLimits

0xfa2d,	// (0x00091f86) vid4_progress_pane_t_ParamLimits

0xa76e,	// (0x0008ccc7) wait_bar_pane_cp07_ParamLimits

0xac3e,	// (0x0008d197) main_cam6_set_pane_g2_ParamLimits

0xac3e,	// (0x0008d197) main_cam6_set_pane_g2

0xac4a,	// (0x0008d1a3) main_cset6_listscroll_pane_ParamLimits

0xac4a,	// (0x0008d1a3) main_cset6_listscroll_pane

0xac77,	// (0x0008d1d0) main_cset6_slider_pane_ParamLimits

0xac77,	// (0x0008d1d0) main_cset6_slider_pane

0xac83,	// (0x0008d1dc) main_cset6_text2_pane_ParamLimits

0xac83,	// (0x0008d1dc) main_cset6_text2_pane

0x23b0,	// (0x00084909) main_cset6_text_pane

0x23b8,	// (0x00084911) main_cset_list_pane_copy1_ParamLimits

0x23b8,	// (0x00084911) main_cset_list_pane_copy1

0x23c8,	// (0x00084921) scroll_pane_cp028_copy1

0xac96,	// (0x0008d1ef) cset_list_set_pane_copy1

0xaca6,	// (0x0008d1ff) aid_position_infowindow_above_copy1

0xacae,	// (0x0008d207) aid_position_infowindow_below_copy1

0xacb6,	// (0x0008d20f) cset_list_set_pane_g1_copy1

0xacbe,	// (0x0008d217) cset_list_set_pane_g3_copy1_ParamLimits

0xacbe,	// (0x0008d217) cset_list_set_pane_g3_copy1

0xaccd,	// (0x0008d226) cset_list_set_pane_t1_copy1_ParamLimits

0xaccd,	// (0x0008d226) cset_list_set_pane_t1_copy1

0xe82a,	// (0x00090d83) list_highlight_pane_cp021_copy1_ParamLimits

0xe82a,	// (0x00090d83) list_highlight_pane_cp021_copy1

0x23d1,	// (0x0008492a) cset6_slider_pane_ParamLimits

0x23d1,	// (0x0008492a) cset6_slider_pane

0x23fd,	// (0x00084956) main_cset6_slider_pane_g1_ParamLimits

0x23fd,	// (0x00084956) main_cset6_slider_pane_g1

0xace2,	// (0x0008d23b) main_cset6_slider_pane_g2_ParamLimits

0xace2,	// (0x0008d23b) main_cset6_slider_pane_g2

0x2425,	// (0x0008497e) main_cset6_slider_pane_g3_ParamLimits

0x2425,	// (0x0008497e) main_cset6_slider_pane_g3

0xad0a,	// (0x0008d263) main_cset6_slider_pane_g4_ParamLimits

0xad0a,	// (0x0008d263) main_cset6_slider_pane_g4

0xad16,	// (0x0008d26f) main_cset6_slider_pane_g5_ParamLimits

0xad16,	// (0x0008d26f) main_cset6_slider_pane_g5

0x1bc6,	// (0x0008411f) main_cset6_slider_pane_g7_ParamLimits

0x1bc6,	// (0x0008411f) main_cset6_slider_pane_g7

0x1bd2,	// (0x0008412b) main_cset6_slider_pane_g8_ParamLimits

0x1bd2,	// (0x0008412b) main_cset6_slider_pane_g8

0xad22,	// (0x0008d27b) main_cset6_slider_pane_g9_ParamLimits

0xad22,	// (0x0008d27b) main_cset6_slider_pane_g9

0xad2e,	// (0x0008d287) main_cset6_slider_pane_g10_ParamLimits

0xad2e,	// (0x0008d287) main_cset6_slider_pane_g10

0xad3a,	// (0x0008d293) main_cset6_slider_pane_g11_ParamLimits

0xad3a,	// (0x0008d293) main_cset6_slider_pane_g11

0xad46,	// (0x0008d29f) main_cset6_slider_pane_g12_ParamLimits

0xad46,	// (0x0008d29f) main_cset6_slider_pane_g12

0xad52,	// (0x0008d2ab) main_cset6_slider_pane_g13_ParamLimits

0xad52,	// (0x0008d2ab) main_cset6_slider_pane_g13

0xad5e,	// (0x0008d2b7) main_cset6_slider_pane_g14_ParamLimits

0xad5e,	// (0x0008d2b7) main_cset6_slider_pane_g14

0xad6a,	// (0x0008d2c3) main_cset6_slider_pane_g15_ParamLimits

0xad6a,	// (0x0008d2c3) main_cset6_slider_pane_g15

0xad82,	// (0x0008d2db) main_cset6_slider_pane_g16_ParamLimits

0xad82,	// (0x0008d2db) main_cset6_slider_pane_g16

0xad8e,	// (0x0008d2e7) main_cset6_slider_pane_g17_ParamLimits

0xad8e,	// (0x0008d2e7) main_cset6_slider_pane_g17

0x0011,

0xfaf3,	// (0x0009204c) main_cset6_slider_pane_g_ParamLimits

0xfaf3,	// (0x0009204c) main_cset6_slider_pane_g

0x2431,	// (0x0008498a) main_cset6_slider_pane_t1_ParamLimits

0x2431,	// (0x0008498a) main_cset6_slider_pane_t1

0xadb2,	// (0x0008d30b) main_cset6_slider_pane_t2_ParamLimits

0xadb2,	// (0x0008d30b) main_cset6_slider_pane_t2

0xaddd,	// (0x0008d336) main_cset6_slider_pane_t3_ParamLimits

0xaddd,	// (0x0008d336) main_cset6_slider_pane_t3

0xae08,	// (0x0008d361) main_cset6_slider_pane_t4_ParamLimits

0xae08,	// (0x0008d361) main_cset6_slider_pane_t4

0xae33,	// (0x0008d38c) main_cset6_slider_pane_t5_ParamLimits

0xae33,	// (0x0008d38c) main_cset6_slider_pane_t5

0x2472,	// (0x000849cb) main_cset6_slider_pane_t7_ParamLimits

0x2472,	// (0x000849cb) main_cset6_slider_pane_t7

0xae5e,	// (0x0008d3b7) main_cset6_slider_pane_t8_ParamLimits

0xae5e,	// (0x0008d3b7) main_cset6_slider_pane_t8

0xae82,	// (0x0008d3db) main_cset6_slider_pane_t9_ParamLimits

0xae82,	// (0x0008d3db) main_cset6_slider_pane_t9

0xaea6,	// (0x0008d3ff) main_cset6_slider_pane_t10_ParamLimits

0xaea6,	// (0x0008d3ff) main_cset6_slider_pane_t10

0xaeca,	// (0x0008d423) main_cset6_slider_pane_t11_ParamLimits

0xaeca,	// (0x0008d423) main_cset6_slider_pane_t11

0x24a8,	// (0x00084a01) main_cset6_slider_pane_t14_ParamLimits

0x24a8,	// (0x00084a01) main_cset6_slider_pane_t14

0x24e1,	// (0x00084a3a) main_cset6_slider_pane_t15_ParamLimits

0x24e1,	// (0x00084a3a) main_cset6_slider_pane_t15

0x000b,

0xfb18,	// (0x00092071) main_cset6_slider_pane_t_ParamLimits

0xfb18,	// (0x00092071) main_cset6_slider_pane_t

0x251a,	// (0x00084a73) cset_slider_pane_g1_copy1

0x2523,	// (0x00084a7c) cset_slider_pane_g2_copy1

0x252c,	// (0x00084a85) cset_slider_pane_g3_copy1

0xe7c9,	// (0x00090d22) bg_popup_sub_pane_cp011_copy1

0x253e,	// (0x00084a97) main_cset_text_pane_g1_copy1

0x1d1f,	// (0x00084278) main_cset_text_pane_t1_copy1

0x1d2d,	// (0x00084286) main_cset_text_pane_t2_copy1

0x1d3b,	// (0x00084294) main_cset_text_pane_t3_copy1

0x1d49,	// (0x000842a2) main_cset_text_pane_t4_copy1

0x1d57,	// (0x000842b0) main_cset_text_pane_t5_copy1

0x2546,	// (0x00084a9f) main_cset_text_pane_t6_copy1

0x2554,	// (0x00084aad) main_cset_text_pane_t7_copy1

0xaf0b,	// (0x0008d464) main_cset_text2_pane_t1_copy1

0x7bd5,	// (0x0008a12e) main_ncimui_pane

0x7c3c,	// (0x0008a195) popup_query_ncimui_window_ParamLimits

0x7c3c,	// (0x0008a195) popup_query_ncimui_window

0x11a6,	// (0x000836ff) field_cale_ev2_pane_g4_ParamLimits

0x11a6,	// (0x000836ff) field_cale_ev2_pane_g4

0x8e73,	// (0x0008b3cc) cell_video_dialer_keypad_pane_g2_ParamLimits

0x8e73,	// (0x0008b3cc) cell_video_dialer_keypad_pane_g2

0x0001,

0xf803,	// (0x00091d5c) cell_video_dialer_keypad_pane_g_ParamLimits

0xf803,	// (0x00091d5c) cell_video_dialer_keypad_pane_g

0x8e8b,	// (0x0008b3e4) cell_video_dialer_keypad_pane_t1

0xe7c9,	// (0x00090d22) bg_popup_window_pane_cp012

0x0999,	// (0x00082ef2) heading_pane_cp06

0x2580,	// (0x00084ad9) ncim_query_content_pane

0xe7c9,	// (0x00090d22) bg_popup_heading_pane_cp01

0x2588,	// (0x00084ae1) ncim_heading_pane_t1

0x2596,	// (0x00084aef) ncim_indicator_popup_pane

0x25a8,	// (0x00084b01) ncim_query_button_pane

0x25be,	// (0x00084b17) ncim_query_content_pane_t1

0x25d0,	// (0x00084b29) ncim_query_content_pane_t2

0x0005,

0xfb5c,	// (0x000920b5) ncim_query_content_pane_t

0x260a,	// (0x00084b63) ncim_query_list_pane

0x261c,	// (0x00084b75) ncim_query_popup_pane

0x2596,	// (0x00084aef) ncim_indicator_popup_pane_ParamLimits

0xb067,	// (0x0008d5c0) ncim_query_content_pane_g1_ParamLimits

0xb067,	// (0x0008d5c0) ncim_query_content_pane_g1

0x25be,	// (0x00084b17) ncim_query_content_pane_t1_ParamLimits

0x25d0,	// (0x00084b29) ncim_query_content_pane_t2_ParamLimits

0xb073,	// (0x0008d5cc) ncim_query_content_pane_t3_ParamLimits

0xb073,	// (0x0008d5cc) ncim_query_content_pane_t3

0xb090,	// (0x0008d5e9) ncim_query_content_pane_t4_ParamLimits

0xb090,	// (0x0008d5e9) ncim_query_content_pane_t4

0xb0ad,	// (0x0008d606) ncim_query_content_pane_t5_ParamLimits

0xb0ad,	// (0x0008d606) ncim_query_content_pane_t5

0x25e2,	// (0x00084b3b) ncim_query_content_pane_t6_ParamLimits

0x25e2,	// (0x00084b3b) ncim_query_content_pane_t6

0xfb5c,	// (0x000920b5) ncim_query_content_pane_t_ParamLimits

0x260a,	// (0x00084b63) ncim_query_list_pane_ParamLimits

0x261c,	// (0x00084b75) ncim_query_popup_pane_ParamLimits

0x2630,	// (0x00084b89) wait_bar_pane_cp04

0xe7c9,	// (0x00090d22) input_focus_pane_cp011

0x2638,	// (0x00084b91) ncim_query_popup_pane_t1

0x2646,	// (0x00084b9f) ncim_list_query_list_pane_ParamLimits

0x2646,	// (0x00084b9f) ncim_list_query_list_pane

0xe7c9,	// (0x00090d22) bg_button_pane_cp027

0x2659,	// (0x00084bb2) ncim_query_button_pane_g1

0xe7c9,	// (0x00090d22) list_highlight_pane_cp012

0x2663,	// (0x00084bbc) ncim_list_query_list_pane_g1

0x266b,	// (0x00084bc4) ncim_list_query_list_pane_t1

0x9620,	// (0x0008bb79) cam4_indicators_pane_g3_ParamLimits

0x9620,	// (0x0008bb79) cam4_indicators_pane_g3

0x972c,	// (0x0008bc85) vid4_indicators_pane_g5_ParamLimits

0x972c,	// (0x0008bc85) vid4_indicators_pane_g5

0xa71a,	// (0x0008cc73) vid4_progress_pane_g5_ParamLimits

0xa71a,	// (0x0008cc73) vid4_progress_pane_g5

0xaf3d,	// (0x0008d496) main_ncimui_pane_g1

0xafa9,	// (0x0008d502) ncimui_group_query_pane_ParamLimits

0xafa9,	// (0x0008d502) ncimui_group_query_pane

0xb003,	// (0x0008d55c) ncimui_list_pane_ParamLimits

0xb003,	// (0x0008d55c) ncimui_list_pane

0xb02a,	// (0x0008d583) ncimui_text_pane_ParamLimits

0xb02a,	// (0x0008d583) ncimui_text_pane

0xb0ca,	// (0x0008d623) ncimui_text_pane_t1_ParamLimits

0xb0ca,	// (0x0008d623) ncimui_text_pane_t1

0x2679,	// (0x00084bd2) ncimui_list_single_graphic_pane_ParamLimits

0x2679,	// (0x00084bd2) ncimui_list_single_graphic_pane

0xb0e9,	// (0x0008d642) ncimui_query_pane_ParamLimits

0xb0e9,	// (0x0008d642) ncimui_query_pane

0xe7c9,	// (0x00090d22) list_highlight_pane_cp013

0x2689,	// (0x00084be2) ncim_list_query_list_pane_t1_copy1

0x2663,	// (0x00084bbc) ncim_list_single_graphic_pane_g1

0xb0fc,	// (0x0008d655) ncim_query_button_pane_cp01

0xb108,	// (0x0008d661) ncim_query_entry_pane_ParamLimits

0xb108,	// (0x0008d661) ncim_query_entry_pane

0xb11b,	// (0x0008d674) ncimui_query_pane_g1

0xb127,	// (0x0008d680) ncimui_query_pane_t1_ParamLimits

0xb127,	// (0x0008d680) ncimui_query_pane_t1

0xe82a,	// (0x00090d83) input_focus_pane_cp012

0x2697,	// (0x00084bf0) ncim_query_entry_pane_t1

0xef71,	// (0x000914ca) main_im_pane_ParamLimits

0x7bd5,	// (0x0008a12e) main_mobtv_pane_ParamLimits

0x7bd5,	// (0x0008a12e) main_mobtv_pane

0xad9a,	// (0x0008d2f3) main_cset6_slider_pane_g18_ParamLimits

0xad9a,	// (0x0008d2f3) main_cset6_slider_pane_g18

0xada6,	// (0x0008d2ff) main_cset6_slider_pane_g19_ParamLimits

0xada6,	// (0x0008d2ff) main_cset6_slider_pane_g19

0xe7af,	// (0x00090d08) bg_main_mobtv_pane_ParamLimits

0xe7af,	// (0x00090d08) bg_main_mobtv_pane

0xb140,	// (0x0008d699) main_mobtv_info_pane

0xb14b,	// (0x0008d6a4) main_mobtv_loading_pane_ParamLimits

0xb14b,	// (0x0008d6a4) main_mobtv_loading_pane

0x26a9,	// (0x00084c02) main_mobtv_pg_channel_list_pane

0x26b3,	// (0x00084c0c) main_mobtv_pg_hdr_pane

0xb158,	// (0x0008d6b1) main_mobtv_programe_curr_pane_ParamLimits

0xb158,	// (0x0008d6b1) main_mobtv_programe_curr_pane

0xb165,	// (0x0008d6be) main_mobtv_programe_next_pane_ParamLimits

0xb165,	// (0x0008d6be) main_mobtv_programe_next_pane

0x26bc,	// (0x00084c15) popup_mobtv_noti_window

0xd3a8,	// (0x0008f901) main_tv_pg_hdr_pane_g1

0x26c6,	// (0x00084c1f) main_tv_pg_hdr_pane_g2

0x26ce,	// (0x00084c27) main_tv_pg_hdr_pane_g3

0x26d6,	// (0x00084c2f) main_tv_pg_hdr_pane_g4

0x26de,	// (0x00084c37) main_tv_pg_hdr_pane_g5

0x26e8,	// (0x00084c41) main_tv_pg_hdr_pane_g6

0x26f2,	// (0x00084c4b) main_tv_pg_hdr_pane_g7

0x26fc,	// (0x00084c55) main_tv_pg_hdr_pane_g8

0x2706,	// (0x00084c5f) main_tv_pg_hdr_pane_g9

0x2710,	// (0x00084c69) main_tv_pg_hdr_pane_g10

0x271a,	// (0x00084c73) main_tv_pg_hdr_pane_g11

0x000a,

0xfb69,	// (0x000920c2) main_tv_pg_hdr_pane_g

0x2724,	// (0x00084c7d) main_tv_pg_hdr_pane_t1

0x2732,	// (0x00084c8b) main_tv_pg_hdr_pane_t2

0x2740,	// (0x00084c99) main_tv_pg_hdr_pane_t3

0x2750,	// (0x00084ca9) main_tv_pg_hdr_pane_t4

0x2760,	// (0x00084cb9) main_tv_pg_hdr_pane_t5

0x0004,

0xfb80,	// (0x000920d9) main_tv_pg_hdr_pane_t

0x2770,	// (0x00084cc9) single_mobtv_pg_channel_pane_ParamLimits

0x2770,	// (0x00084cc9) single_mobtv_pg_channel_pane

0x2782,	// (0x00084cdb) single_mobtv_pg_channel_table_pane

0x278b,	// (0x00084ce4) single_mobtv_pg_channel_thumb_pane

0x2794,	// (0x00084ced) single_tv_pg_channel_pane_g1

0x279d,	// (0x00084cf6) single_tv_pg_channel_pane_g2

0x0001,

0xfb8b,	// (0x000920e4) single_tv_pg_channel_pane_g

0xeeff,	// (0x00091458) bg_single_mobtv_pg_channel_thumb_pane_ParamLimits

0xeeff,	// (0x00091458) bg_single_mobtv_pg_channel_thumb_pane

0x27a6,	// (0x00084cff) single_mobtv_pg_channel_thumb_pane_g1_ParamLimits

0x27a6,	// (0x00084cff) single_mobtv_pg_channel_thumb_pane_g1

0x27b4,	// (0x00084d0d) single_mobtv_pg_channel_thumb_pane_g2_ParamLimits

0x27b4,	// (0x00084d0d) single_mobtv_pg_channel_thumb_pane_g2

0x27c0,	// (0x00084d19) single_mobtv_pg_channel_thumb_pane_g3_ParamLimits

0x27c0,	// (0x00084d19) single_mobtv_pg_channel_thumb_pane_g3

0x0002,

0xfb90,	// (0x000920e9) single_mobtv_pg_channel_thumb_pane_g_ParamLimits

0xfb90,	// (0x000920e9) single_mobtv_pg_channel_thumb_pane_g

0x27cc,	// (0x00084d25) single_mobtv_pg_channel_thumb_pane_t1

0x27da,	// (0x00084d33) single_mobtv_pg_channel_thumb_pane_t2

0x0001,

0xfb97,	// (0x000920f0) single_mobtv_pg_channel_thumb_pane_t

0xd3a8,	// (0x0008f901) bg_single_mobtv_pg_channel_table_pane_g1

0xd3a8,	// (0x0008f901) bg_single_mobtv_pg_channel_table_pane_g2

0x0001,

0xf3c3,	// (0x0009191c) bg_single_mobtv_pg_channel_table_pane_g

0x27e8,	// (0x00084d41) single_mobtv_pg_channel_table_pane_t1

0x27f6,	// (0x00084d4f) single_mobtv_pg_channel_table_pane_t2

0x0001,

0xfb9c,	// (0x000920f5) single_mobtv_pg_channel_table_pane_t

0xb17a,	// (0x0008d6d3) main_mobtv_info_pane_g1_ParamLimits

0xb17a,	// (0x0008d6d3) main_mobtv_info_pane_g1

0xb196,	// (0x0008d6ef) main_mobtv_info_pane_t1_ParamLimits

0xb196,	// (0x0008d6ef) main_mobtv_info_pane_t1

0xb20e,	// (0x0008d767) main_mobtv_info_pane_t2_ParamLimits

0xb20e,	// (0x0008d767) main_mobtv_info_pane_t2

0x0002,

0xfba6,	// (0x000920ff) main_mobtv_info_pane_t_ParamLimits

0xfba6,	// (0x000920ff) main_mobtv_info_pane_t

0xb29f,	// (0x0008d7f8) wait_bar_pane_cp05

0xb2b1,	// (0x0008d80a) main_mobtv_loading_pane_g1_ParamLimits

0xb2b1,	// (0x0008d80a) main_mobtv_loading_pane_g1

0xb2bd,	// (0x0008d816) main_mobtv_loading_pane_g2_ParamLimits

0xb2bd,	// (0x0008d816) main_mobtv_loading_pane_g2

0xb2c9,	// (0x0008d822) main_mobtv_loading_pane_g3_ParamLimits

0xb2c9,	// (0x0008d822) main_mobtv_loading_pane_g3

0x0002,

0xfbad,	// (0x00092106) main_mobtv_loading_pane_g_ParamLimits

0xfbad,	// (0x00092106) main_mobtv_loading_pane_g

0x2804,	// (0x00084d5d) main_mobtv_loading_pane_t1_ParamLimits

0x2804,	// (0x00084d5d) main_mobtv_loading_pane_t1

0x281c,	// (0x00084d75) main_mobtv_loading_pane_t2_ParamLimits

0x281c,	// (0x00084d75) main_mobtv_loading_pane_t2

0x0001,

0xfbb4,	// (0x0009210d) main_mobtv_loading_pane_t_ParamLimits

0xfbb4,	// (0x0009210d) main_mobtv_loading_pane_t

0xb2d7,	// (0x0008d830) wait_bar_pane_cp06_ParamLimits

0xb2d7,	// (0x0008d830) wait_bar_pane_cp06

0x2840,	// (0x00084d99) main_mobtv_programe_curr_pane_t1

0x284e,	// (0x00084da7) main_mobtv_programe_curr_pane_t2

0x0001,

0xfbb9,	// (0x00092112) main_mobtv_programe_curr_pane_t

0x285c,	// (0x00084db5) main_mobtv_programe_next_pane_t1

0x286a,	// (0x00084dc3) main_mobtv_programe_next_pane_t2

0x2878,	// (0x00084dd1) main_mobtv_programe_next_pane_t3

0x0002,

0xfbbe,	// (0x00092117) main_mobtv_programe_next_pane_t

0xe7c9,	// (0x00090d22) bg_popup_mobtv_noti_window_pane

0x2886,	// (0x00084ddf) popup_mobtv_noti_window_g1

0x288e,	// (0x00084de7) popup_mobtv_noti_window_t1

0x289c,	// (0x00084df5) popup_mobtv_noti_window_t2

0x0001,

0xfbc5,	// (0x0009211e) popup_mobtv_noti_window_t

0xd3a8,	// (0x0008f901) bg_popup_mobtv_noti_window_pane_g1

0x4e88,	// (0x000873e1) sc_clock_pane

0x4e88,	// (0x000873e1) main_fs_bigclock_pane

0xa8f6,	// (0x0008ce4f) blid2_tripm_pane_t4_ParamLimits

0xa8f6,	// (0x0008ce4f) blid2_tripm_pane_t4

0xb2e3,	// (0x0008d83c) sc_clock_pane_g1_ParamLimits

0xb2e3,	// (0x0008d83c) sc_clock_pane_g1

0xb2f1,	// (0x0008d84a) sc_clock_pane_t1_ParamLimits

0xb2f1,	// (0x0008d84a) sc_clock_pane_t1

0xb306,	// (0x0008d85f) sc_clock_pane_t2_ParamLimits

0xb306,	// (0x0008d85f) sc_clock_pane_t2

0xb318,	// (0x0008d871) sc_clock_pane_t3_ParamLimits

0xb318,	// (0x0008d871) sc_clock_pane_t3

0x0004,

0xfbca,	// (0x00092123) sc_clock_pane_t_ParamLimits

0xfbca,	// (0x00092123) sc_clock_pane_t

0xc0c6,	// (0x0008e61f) main_fs_bigclock_indicator_pane_ParamLimits

0xc0c6,	// (0x0008e61f) main_fs_bigclock_indicator_pane

0xb3a7,	// (0x0008d900) main_fs_bigclock_pane_g1_ParamLimits

0xb3a7,	// (0x0008d900) main_fs_bigclock_pane_g1

0xc0d2,	// (0x0008e62b) main_fs_bigclock_pane_t1_ParamLimits

0xc0d2,	// (0x0008e62b) main_fs_bigclock_pane_t1

0xc0e4,	// (0x0008e63d) main_fs_bigclock_pane_t2_ParamLimits

0xc0e4,	// (0x0008e63d) main_fs_bigclock_pane_t2

0xc0f8,	// (0x0008e651) main_fs_bigclock_pane_t3_ParamLimits

0xc0f8,	// (0x0008e651) main_fs_bigclock_pane_t3

0x0002,

0xfd5b,	// (0x000922b4) main_fs_bigclock_pane_t_ParamLimits

0xfd5b,	// (0x000922b4) main_fs_bigclock_pane_t

0x3b97,	// (0x000860f0) main_fs_bigclock_indicator_pane_g1

0x25b0,	// (0x00084b09) ncim_query_content_pane_g2_ParamLimits

0x25b0,	// (0x00084b09) ncim_query_content_pane_g2

0x0001,

0xfb57,	// (0x000920b0) ncim_query_content_pane_g_ParamLimits

0xfb57,	// (0x000920b0) ncim_query_content_pane_g

0xb32a,	// (0x0008d883) sc_clock_pane_t4_ParamLimits

0xb32a,	// (0x0008d883) sc_clock_pane_t4

0x7bd5,	// (0x0008a12e) main_radioblah_pane

0x94c4,	// (0x0008ba1d) cell_call4_button_pane_t1_copy1_ParamLimits

0x94c4,	// (0x0008ba1d) cell_call4_button_pane_t1_copy1

0xaf59,	// (0x0008d4b2) main_ncimui_pane_t1_ParamLimits

0xaf59,	// (0x0008d4b2) main_ncimui_pane_t1

0xaf73,	// (0x0008d4cc) main_ncimui_pane_t2_ParamLimits

0xaf73,	// (0x0008d4cc) main_ncimui_pane_t2

0x0002,

0xfb50,	// (0x000920a9) main_ncimui_pane_t_ParamLimits

0xfb50,	// (0x000920a9) main_ncimui_pane_t

0x28aa,	// (0x00084e03) main_radioblah_anim_pane_ParamLimits

0x28aa,	// (0x00084e03) main_radioblah_anim_pane

0x28bb,	// (0x00084e14) main_radioblah_info_pane_ParamLimits

0x28bb,	// (0x00084e14) main_radioblah_info_pane

0x28cf,	// (0x00084e28) main_radioblah_pane_t1_ParamLimits

0x28cf,	// (0x00084e28) main_radioblah_pane_t1

0x28eb,	// (0x00084e44) main_radioblah_pane_t2_ParamLimits

0x28eb,	// (0x00084e44) main_radioblah_pane_t2

0x0003,

0xfbeb,	// (0x00092144) main_radioblah_pane_t_ParamLimits

0xfbeb,	// (0x00092144) main_radioblah_pane_t

0xb546,	// (0x0008da9f) main_radioblah_rocker_ctrl_pane_ParamLimits

0xb546,	// (0x0008da9f) main_radioblah_rocker_ctrl_pane

0x2933,	// (0x00084e8c) main_radioblah_info_pane_t1_ParamLimits

0x2933,	// (0x00084e8c) main_radioblah_info_pane_t1

0xb58f,	// (0x0008dae8) main_radioblah_info_pane_t2_ParamLimits

0xb58f,	// (0x0008dae8) main_radioblah_info_pane_t2

0x0003,

0xfbf4,	// (0x0009214d) main_radioblah_info_pane_t_ParamLimits

0xfbf4,	// (0x0009214d) main_radioblah_info_pane_t

0xd3a8,	// (0x0008f901) main_radioblah_rocker_ctrl_pane_g1

0xb63f,	// (0x0008db98) main_radioblah_rocker_ctrl_pane_g2

0xb647,	// (0x0008dba0) main_radioblah_rocker_ctrl_pane_g3

0xb64f,	// (0x0008dba8) main_radioblah_rocker_ctrl_pane_g4

0xb657,	// (0x0008dbb0) main_radioblah_rocker_ctrl_pane_g5

0xb65f,	// (0x0008dbb8) main_radioblah_rocker_ctrl_pane_g6

0x0005,

0xfbfd,	// (0x00092156) main_radioblah_rocker_ctrl_pane_g

0xaf0b,	// (0x0008d464) main_cset_text2_pane_t1_copy1_ParamLimits

0x954d,	// (0x0008baa6) cam4_image_uncrop_qvga_pane

0x9692,	// (0x0008bbeb) vid4_image_uncrop_qcif_pane

0xaa88,	// (0x0008cfe1) cam6_image_uncrop_qvga_pane_ParamLimits

0xaa88,	// (0x0008cfe1) cam6_image_uncrop_qvga_pane

0x228f,	// (0x000847e8) vid6_image_uncrop_qcif_pane_ParamLimits

0x228f,	// (0x000847e8) vid6_image_uncrop_qcif_pane

0xe7c9,	// (0x00090d22) bg_popup_preview_window_pane_cp03

0x2562,	// (0x00084abb) list_cset_text2_pane

0x256a,	// (0x00084ac3) main_cset6_text2_pane_g1

0x2572,	// (0x00084acb) main_cset6_text2_pane_t1

0xb667,	// (0x0008dbc0) list_cset_text2_pane_t1_ParamLimits

0xb667,	// (0x0008dbc0) list_cset_text2_pane_t1

0x7bd5,	// (0x0008a12e) main_radioblah_pane_ParamLimits

0xb28b,	// (0x0008d7e4) main_mobtv_info_pane_t3_ParamLimits

0xb28b,	// (0x0008d7e4) main_mobtv_info_pane_t3

0xb534,	// (0x0008da8d) main_radioblah_pane_g1

0xb55f,	// (0x0008dab8) main_radioblah_info_pane_g1

0xb5e4,	// (0x0008db3d) main_radioblah_info_pane_t3_ParamLimits

0xb5e4,	// (0x0008db3d) main_radioblah_info_pane_t3

0x6b2d,	// (0x00089086) highlight_cell_cale_month_pane_ParamLimits

0x6b2d,	// (0x00089086) highlight_cell_cale_month_pane

0x4e88,	// (0x000873e1) main_phob_fisheye_pane

0x121b,	// (0x00083774) scroll_pane_cp0031_ParamLimits

0x121b,	// (0x00083774) scroll_pane_cp0031

0x23a1,	// (0x000848fa) wait_bar_pane_cp08_ParamLimits

0xac96,	// (0x0008d1ef) cset_list_set_pane_copy1_ParamLimits

0x2987,	// (0x00084ee0) highlight_cell_cale_month_pane_g1

0xb67e,	// (0x0008dbd7) highlight_cell_cale_month_pane_t1

0x1ff3,	// (0x0008454c) list_gen_pane_cp01

0x1bb1,	// (0x0008410a) scroll_pane_01

0xb68c,	// (0x0008dbe5) list_single_double_fisheye_pane

0xb695,	// (0x0008dbee) list_double_fisheye_pane_g1_ParamLimits

0xb695,	// (0x0008dbee) list_double_fisheye_pane_g1

0xb6a1,	// (0x0008dbfa) list_double_fisheye_pane_g2_ParamLimits

0xb6a1,	// (0x0008dbfa) list_double_fisheye_pane_g2

0xb6b5,	// (0x0008dc0e) list_double_fisheye_pane_g3_ParamLimits

0xb6b5,	// (0x0008dc0e) list_double_fisheye_pane_g3

0x0004,

0xfc0a,	// (0x00092163) list_double_fisheye_pane_g_ParamLimits

0xfc0a,	// (0x00092163) list_double_fisheye_pane_g

0xb6de,	// (0x0008dc37) list_double_fisheye_pane_t1_ParamLimits

0xb6de,	// (0x0008dc37) list_double_fisheye_pane_t1

0xb6f9,	// (0x0008dc52) list_double_fisheye_pane_t2_ParamLimits

0xb6f9,	// (0x0008dc52) list_double_fisheye_pane_t2

0x0001,

0xfc15,	// (0x0009216e) list_double_fisheye_pane_t_ParamLimits

0xfc15,	// (0x0009216e) list_double_fisheye_pane_t

0x4e88,	// (0x000873e1) main_call5_pane

0xb350,	// (0x0008d8a9) sc_swipe_pane_ParamLimits

0xb350,	// (0x0008d8a9) sc_swipe_pane

0xb727,	// (0x0008dc80) call5_image_pane_ParamLimits

0xb727,	// (0x0008dc80) call5_image_pane

0xb739,	// (0x0008dc92) call5_swipe_1_pane_ParamLimits

0xb739,	// (0x0008dc92) call5_swipe_1_pane

0xb745,	// (0x0008dc9e) call5_swipe_2_pane_ParamLimits

0xb745,	// (0x0008dc9e) call5_swipe_2_pane

0xb75f,	// (0x0008dcb8) popup_call5_audio_first_window_ParamLimits

0xb75f,	// (0x0008dcb8) popup_call5_audio_first_window

0xeeff,	// (0x00091458) call5_swipe_1_pane_g1_ParamLimits

0xeeff,	// (0x00091458) call5_swipe_1_pane_g1

0x298f,	// (0x00084ee8) call5_swipe_1_pane_g2_ParamLimits

0x298f,	// (0x00084ee8) call5_swipe_1_pane_g2

0x0001,

0xfc1a,	// (0x00092173) call5_swipe_1_pane_g_ParamLimits

0xfc1a,	// (0x00092173) call5_swipe_1_pane_g

0x299b,	// (0x00084ef4) call5_swipe_1_pane_t1_ParamLimits

0x299b,	// (0x00084ef4) call5_swipe_1_pane_t1

0xeeff,	// (0x00091458) call5_swipe_2_pane_g1_ParamLimits

0xeeff,	// (0x00091458) call5_swipe_2_pane_g1

0x29b0,	// (0x00084f09) call5_swipe_2_pane_g2_ParamLimits

0x29b0,	// (0x00084f09) call5_swipe_2_pane_g2

0x0001,

0xfc1f,	// (0x00092178) call5_swipe_2_pane_g_ParamLimits

0xfc1f,	// (0x00092178) call5_swipe_2_pane_g

0x29bc,	// (0x00084f15) call5_swipe_2_pane_t1_ParamLimits

0x29bc,	// (0x00084f15) call5_swipe_2_pane_t1

0x29d1,	// (0x00084f2a) sc_swipe_pane_g1_ParamLimits

0x29d1,	// (0x00084f2a) sc_swipe_pane_g1

0x29de,	// (0x00084f37) sc_swipe_pane_g2_ParamLimits

0x29de,	// (0x00084f37) sc_swipe_pane_g2

0x0001,

0xfc24,	// (0x0009217d) sc_swipe_pane_g_ParamLimits

0xfc24,	// (0x0009217d) sc_swipe_pane_g

0x29ea,	// (0x00084f43) sc_swipe_pane_t1_ParamLimits

0x29ea,	// (0x00084f43) sc_swipe_pane_t1

0x4e88,	// (0x000873e1) main_cmail_launcher_pane

0xb76f,	// (0x0008dcc8) aid_size_cell_cmail_l_ParamLimits

0xb76f,	// (0x0008dcc8) aid_size_cell_cmail_l

0xb77d,	// (0x0008dcd6) grid_cmail_l_pane_ParamLimits

0xb77d,	// (0x0008dcd6) grid_cmail_l_pane

0xb78b,	// (0x0008dce4) cell_cmail_l_pane_ParamLimits

0xb78b,	// (0x0008dce4) cell_cmail_l_pane

0xb7a6,	// (0x0008dcff) cell_cmail_l_pane_g1_ParamLimits

0xb7a6,	// (0x0008dcff) cell_cmail_l_pane_g1

0xb7b2,	// (0x0008dd0b) cell_cmail_l_pane_t1_ParamLimits

0xb7b2,	// (0x0008dd0b) cell_cmail_l_pane_t1

0xb7c8,	// (0x0008dd21) cell_cmail_l_pane_t2_ParamLimits

0xb7c8,	// (0x0008dd21) cell_cmail_l_pane_t2

0x0001,

0xfc29,	// (0x00092182) cell_cmail_l_pane_t_ParamLimits

0xfc29,	// (0x00092182) cell_cmail_l_pane_t

0xe82a,	// (0x00090d83) grid_highlight_pane_cp018_ParamLimits

0xe82a,	// (0x00090d83) grid_highlight_pane_cp018

0x4cdd,	// (0x00087236) main2_pane_ParamLimits

0x4cdd,	// (0x00087236) main2_pane

0xf009,	// (0x00091562) popup_sp_fs_action_menu_bg_pane_g1

0xf011,	// (0x0009156a) popup_sp_fs_action_menu_bg_pane_g2

0xf019,	// (0x00091572) popup_sp_fs_action_menu_bg_pane_g3

0xf021,	// (0x0009157a) popup_sp_fs_action_menu_bg_pane_g4

0xf029,	// (0x00091582) popup_sp_fs_action_menu_bg_pane_g5

0xf031,	// (0x0009158a) popup_sp_fs_action_menu_bg_pane_g6

0xf039,	// (0x00091592) popup_sp_fs_action_menu_bg_pane_g7

0xf041,	// (0x0009159a) popup_sp_fs_action_menu_bg_pane_g8

0xf049,	// (0x000915a2) popup_sp_fs_action_menu_bg_pane_g9

0xf051,	// (0x000915aa) popup_sp_fs_action_menu_bg_pane_g10

0xf051,	// (0x000915aa) popup_sp_fs_action_menu_bg_pane_g11

0x000a,

0xf12b,	// (0x00091684) popup_sp_fs_action_menu_bg_pane_g

0xeeff,	// (0x00091458) list_medium_line_x2_t3_g3_g1_ParamLimits

0xeeff,	// (0x00091458) list_medium_line_x2_t3_g3_g1

0xeeff,	// (0x00091458) list_medium_line_x2_t3_g3_g2_ParamLimits

0xeeff,	// (0x00091458) list_medium_line_x2_t3_g3_g2

0xeeff,	// (0x00091458) list_medium_line_x2_t3_g3_g3_ParamLimits

0xeeff,	// (0x00091458) list_medium_line_x2_t3_g3_g3

0x0002,

0xf1d9,	// (0x00091732) list_medium_line_x2_t3_g3_g_ParamLimits

0xf1d9,	// (0x00091732) list_medium_line_x2_t3_g3_g

0xd3c2,	// (0x0008f91b) list_medium_line_x2_t3_g3_t1_ParamLimits

0xd3c2,	// (0x0008f91b) list_medium_line_x2_t3_g3_t1

0xd3c2,	// (0x0008f91b) list_medium_line_x2_t3_g3_t2_ParamLimits

0xd3c2,	// (0x0008f91b) list_medium_line_x2_t3_g3_t2

0xd3c2,	// (0x0008f91b) list_medium_line_x2_t3_g3_t3_ParamLimits

0xd3c2,	// (0x0008f91b) list_medium_line_x2_t3_g3_t3

0x0002,

0xf1e0,	// (0x00091739) list_medium_line_x2_t3_g3_t_ParamLimits

0xf1e0,	// (0x00091739) list_medium_line_x2_t3_g3_t

0xeeff,	// (0x00091458) list_medium_line_x2_t3_g2_g1_ParamLimits

0xeeff,	// (0x00091458) list_medium_line_x2_t3_g2_g1

0xeeff,	// (0x00091458) list_medium_line_x2_t3_g2_g2_ParamLimits

0xeeff,	// (0x00091458) list_medium_line_x2_t3_g2_g2

0x0001,

0xf1e7,	// (0x00091740) list_medium_line_x2_t3_g2_g_ParamLimits

0xf1e7,	// (0x00091740) list_medium_line_x2_t3_g2_g

0xd3c2,	// (0x0008f91b) list_medium_line_x2_t3_g2_t1_ParamLimits

0xd3c2,	// (0x0008f91b) list_medium_line_x2_t3_g2_t1

0xd3c2,	// (0x0008f91b) list_medium_line_x2_t3_g2_t2_ParamLimits

0xd3c2,	// (0x0008f91b) list_medium_line_x2_t3_g2_t2

0xd3c2,	// (0x0008f91b) list_medium_line_x2_t3_g2_t3_ParamLimits

0xd3c2,	// (0x0008f91b) list_medium_line_x2_t3_g2_t3

0x0002,

0xf1e0,	// (0x00091739) list_medium_line_x2_t3_g2_t_ParamLimits

0xf1e0,	// (0x00091739) list_medium_line_x2_t3_g2_t

0xeeff,	// (0x00091458) list_medium_line_x2_t4_g4_g1_ParamLimits

0xeeff,	// (0x00091458) list_medium_line_x2_t4_g4_g1

0xeeff,	// (0x00091458) list_medium_line_x2_t4_g4_g2_ParamLimits

0xeeff,	// (0x00091458) list_medium_line_x2_t4_g4_g2

0xeeff,	// (0x00091458) list_medium_line_x2_t4_g4_g3_ParamLimits

0xeeff,	// (0x00091458) list_medium_line_x2_t4_g4_g3

0xeeff,	// (0x00091458) list_medium_line_x2_t4_g4_g4_ParamLimits

0xeeff,	// (0x00091458) list_medium_line_x2_t4_g4_g4

0x0003,

0xf1ec,	// (0x00091745) list_medium_line_x2_t4_g4_g_ParamLimits

0xf1ec,	// (0x00091745) list_medium_line_x2_t4_g4_g

0xd3c2,	// (0x0008f91b) list_medium_line_x2_t4_g4_t1_ParamLimits

0xd3c2,	// (0x0008f91b) list_medium_line_x2_t4_g4_t1

0xd3c2,	// (0x0008f91b) list_medium_line_x2_t4_g4_t2_ParamLimits

0xd3c2,	// (0x0008f91b) list_medium_line_x2_t4_g4_t2

0xd3c2,	// (0x0008f91b) list_medium_line_x2_t4_g4_t3_ParamLimits

0xd3c2,	// (0x0008f91b) list_medium_line_x2_t4_g4_t3

0xd3c2,	// (0x0008f91b) list_medium_line_x2_t4_g4_t4_ParamLimits

0xd3c2,	// (0x0008f91b) list_medium_line_x2_t4_g4_t4

0x0003,

0xf1f5,	// (0x0009174e) list_medium_line_x2_t4_g4_t_ParamLimits

0xf1f5,	// (0x0009174e) list_medium_line_x2_t4_g4_t

0xeeff,	// (0x00091458) list_medium_line_x2_t2_g4_g1_ParamLimits

0xeeff,	// (0x00091458) list_medium_line_x2_t2_g4_g1

0xeeff,	// (0x00091458) list_medium_line_x2_t2_g4_g2_ParamLimits

0xeeff,	// (0x00091458) list_medium_line_x2_t2_g4_g2

0xeeff,	// (0x00091458) list_medium_line_x2_t2_g4_g3_ParamLimits

0xeeff,	// (0x00091458) list_medium_line_x2_t2_g4_g3

0xeeff,	// (0x00091458) list_medium_line_x2_t2_g4_g4_ParamLimits

0xeeff,	// (0x00091458) list_medium_line_x2_t2_g4_g4

0x0003,

0xf1ec,	// (0x00091745) list_medium_line_x2_t2_g4_g_ParamLimits

0xf1ec,	// (0x00091745) list_medium_line_x2_t2_g4_g

0xd3c2,	// (0x0008f91b) list_medium_line_x2_t2_g4_t1_ParamLimits

0xd3c2,	// (0x0008f91b) list_medium_line_x2_t2_g4_t1

0xd3c2,	// (0x0008f91b) list_medium_line_x2_t2_g4_t2_ParamLimits

0xd3c2,	// (0x0008f91b) list_medium_line_x2_t2_g4_t2

0x0001,

0xf25c,	// (0x000917b5) list_medium_line_x2_t2_g4_t_ParamLimits

0xf25c,	// (0x000917b5) list_medium_line_x2_t2_g4_t

0xeeff,	// (0x00091458) list_medium_line_x2_t2_g3_g1_ParamLimits

0xeeff,	// (0x00091458) list_medium_line_x2_t2_g3_g1

0xeeff,	// (0x00091458) list_medium_line_x2_t2_g3_g2_ParamLimits

0xeeff,	// (0x00091458) list_medium_line_x2_t2_g3_g2

0xeeff,	// (0x00091458) list_medium_line_x2_t2_g3_g3_ParamLimits

0xeeff,	// (0x00091458) list_medium_line_x2_t2_g3_g3

0x0002,

0xf1d9,	// (0x00091732) list_medium_line_x2_t2_g3_g_ParamLimits

0xf1d9,	// (0x00091732) list_medium_line_x2_t2_g3_g

0xd3c2,	// (0x0008f91b) list_medium_line_x2_t2_g3_t1_ParamLimits

0xd3c2,	// (0x0008f91b) list_medium_line_x2_t2_g3_t1

0xd3c2,	// (0x0008f91b) list_medium_line_x2_t2_g3_t2_ParamLimits

0xd3c2,	// (0x0008f91b) list_medium_line_x2_t2_g3_t2

0x0001,

0xf25c,	// (0x000917b5) list_medium_line_x2_t2_g3_t_ParamLimits

0xf25c,	// (0x000917b5) list_medium_line_x2_t2_g3_t

0x6cd6,	// (0x0008922f) main_sp_fs_list_pane_ParamLimits

0x6cd6,	// (0x0008922f) main_sp_fs_list_pane

0x6ce2,	// (0x0008923b) sp_fs_scroll_pane_ParamLimits

0x6ce2,	// (0x0008923b) sp_fs_scroll_pane

0xd911,	// (0x0008fe6a) list_medium_line_x2_t3_t1

0xd911,	// (0x0008fe6a) list_medium_line_x2_t3_t2

0xd911,	// (0x0008fe6a) list_medium_line_x2_t3_t3

0x0002,

0xf2a7,	// (0x00091800) list_medium_line_x2_t3_t

0xd911,	// (0x0008fe6a) list_medium_line_x3_t4_t1

0xd911,	// (0x0008fe6a) list_medium_line_x3_t4_t2

0xd911,	// (0x0008fe6a) list_medium_line_x3_t4_t3

0xd911,	// (0x0008fe6a) list_medium_line_x3_t4_t4

0x0003,

0xf2ae,	// (0x00091807) list_medium_line_x3_t4_t

0xd911,	// (0x0008fe6a) list_medium_line_x4_t5_t1

0xd911,	// (0x0008fe6a) list_medium_line_x4_t5_t2

0xd911,	// (0x0008fe6a) list_medium_line_x4_t5_t3

0xd911,	// (0x0008fe6a) list_medium_line_x4_t5_t4

0xd911,	// (0x0008fe6a) list_medium_line_x4_t5_t5

0x0004,

0xf2b7,	// (0x00091810) list_medium_line_x4_t5_t

0xeeff,	// (0x00091458) list_medium_line_t4_g4_g1_ParamLimits

0xeeff,	// (0x00091458) list_medium_line_t4_g4_g1

0xeeff,	// (0x00091458) list_medium_line_t4_g4_g2_ParamLimits

0xeeff,	// (0x00091458) list_medium_line_t4_g4_g2

0xeeff,	// (0x00091458) list_medium_line_t4_g4_g3_ParamLimits

0xeeff,	// (0x00091458) list_medium_line_t4_g4_g3

0xeeff,	// (0x00091458) list_medium_line_t4_g4_g4_ParamLimits

0xeeff,	// (0x00091458) list_medium_line_t4_g4_g4

0x0003,

0xf1ec,	// (0x00091745) list_medium_line_t4_g4_g_ParamLimits

0xf1ec,	// (0x00091745) list_medium_line_t4_g4_g

0xd3c2,	// (0x0008f91b) list_medium_line_t4_g4_t1_ParamLimits

0xd3c2,	// (0x0008f91b) list_medium_line_t4_g4_t1

0xd3c2,	// (0x0008f91b) list_medium_line_t4_g4_t2_ParamLimits

0xd3c2,	// (0x0008f91b) list_medium_line_t4_g4_t2

0xd3c2,	// (0x0008f91b) list_medium_line_t4_g4_t3_ParamLimits

0xd3c2,	// (0x0008f91b) list_medium_line_t4_g4_t3

0xd3c2,	// (0x0008f91b) list_medium_line_t4_g4_t4_ParamLimits

0xd3c2,	// (0x0008f91b) list_medium_line_t4_g4_t4

0x0003,

0xf1f5,	// (0x0009174e) list_medium_line_t4_g4_t_ParamLimits

0xf1f5,	// (0x0009174e) list_medium_line_t4_g4_t

0x6ddb,	// (0x00089334) chi_dic_find_pane_g1

0x7bf1,	// (0x0008a14a) main_tport_pane

0xd911,	// (0x0008fe6a) list_medium_line_plain_t1

0xeeff,	// (0x00091458) list_medium_line_t2_g2_g1_ParamLimits

0xeeff,	// (0x00091458) list_medium_line_t2_g2_g1

0xeeff,	// (0x00091458) list_medium_line_t2_g2_g2_ParamLimits

0xeeff,	// (0x00091458) list_medium_line_t2_g2_g2

0x0001,

0xf1e7,	// (0x00091740) list_medium_line_t2_g2_g_ParamLimits

0xf1e7,	// (0x00091740) list_medium_line_t2_g2_g

0xd3c2,	// (0x0008f91b) list_medium_line_t2_g2_t1_ParamLimits

0xd3c2,	// (0x0008f91b) list_medium_line_t2_g2_t1

0xd3c2,	// (0x0008f91b) list_medium_line_t2_g2_t2_ParamLimits

0xd3c2,	// (0x0008f91b) list_medium_line_t2_g2_t2

0x0001,

0xf25c,	// (0x000917b5) list_medium_line_t2_g2_t_ParamLimits

0xf25c,	// (0x000917b5) list_medium_line_t2_g2_t

0x1ffc,	// (0x00084555) aid_sp_fs_list_icon_a_sm

0x37d8,	// (0x00085d31) aid_sp_fs_list_icon_d

0x37e0,	// (0x00085d39) aid_sp_fs_text_primary

0x2004,	// (0x0008455d) aid_sp_fs_text_secondary

0xe7c9,	// (0x00090d22) list_medium_line

0xe7c9,	// (0x00090d22) list_medium_line_g2

0xe7c9,	// (0x00090d22) list_medium_line_g3

0xe7c9,	// (0x00090d22) list_medium_line_plain

0xe7c9,	// (0x00090d22) list_medium_line_plain_t2

0xe7c9,	// (0x00090d22) list_medium_line_plain_t3

0xe7c9,	// (0x00090d22) list_medium_line_right_icon

0xe7c9,	// (0x00090d22) list_medium_line_right_iconx2

0xe7c9,	// (0x00090d22) list_medium_line_t2

0xe7c9,	// (0x00090d22) list_medium_line_t2_g2

0xe7c9,	// (0x00090d22) list_medium_line_t2_g3

0xe7c9,	// (0x00090d22) list_medium_line_t2_right_icon

0xe7c9,	// (0x00090d22) list_medium_line_t2_right_iconx2

0xe7c9,	// (0x00090d22) list_medium_line_t3

0xe7c9,	// (0x00090d22) list_medium_line_t3_g2

0xe7c9,	// (0x00090d22) list_medium_line_t3_g3

0xe7c9,	// (0x00090d22) list_medium_line_t3_right_iconx2

0xe7c9,	// (0x00090d22) list_medium_line_t4_g4

0xe7c9,	// (0x00090d22) list_medium_line_x2

0xe7c9,	// (0x00090d22) list_medium_line_x2_t2_g2

0xe7c9,	// (0x00090d22) list_medium_line_x2_t2_g3

0xe7c9,	// (0x00090d22) list_medium_line_x2_t2_g4

0xe7c9,	// (0x00090d22) list_medium_line_x2_t3

0xe7c9,	// (0x00090d22) list_medium_line_x2_t3_g2

0xe7c9,	// (0x00090d22) list_medium_line_x2_t3_g3

0xe7c9,	// (0x00090d22) list_medium_line_x2_t3_g4

0xe7c9,	// (0x00090d22) list_medium_line_x2_t4_g2

0xe7c9,	// (0x00090d22) list_medium_line_x2_t4_g4

0xe7c9,	// (0x00090d22) list_medium_line_x3

0xe7c9,	// (0x00090d22) list_medium_line_x3_t4

0xe7c9,	// (0x00090d22) list_medium_line_x3_t4_g4

0xe7c9,	// (0x00090d22) list_medium_line_x4_t4

0xe7c9,	// (0x00090d22) list_medium_line_x4_t4_g7

0xe7c9,	// (0x00090d22) list_medium_line_x4_t5

0xa781,	// (0x0008ccda) list_single_fs_dyc_pane_ParamLimits

0xa781,	// (0x0008ccda) list_single_fs_dyc_pane

0xeeff,	// (0x00091458) list_medium_line_x4_t4_g7_g1_ParamLimits

0xeeff,	// (0x00091458) list_medium_line_x4_t4_g7_g1

0xeeff,	// (0x00091458) list_medium_line_x4_t4_g7_g2_ParamLimits

0xeeff,	// (0x00091458) list_medium_line_x4_t4_g7_g2

0xeeff,	// (0x00091458) list_medium_line_x4_t4_g7_g3_ParamLimits

0xeeff,	// (0x00091458) list_medium_line_x4_t4_g7_g3

0xeeff,	// (0x00091458) list_medium_line_x4_t4_g7_g4_ParamLimits

0xeeff,	// (0x00091458) list_medium_line_x4_t4_g7_g4

0xeeff,	// (0x00091458) list_medium_line_x4_t4_g7_g5_ParamLimits

0xeeff,	// (0x00091458) list_medium_line_x4_t4_g7_g5

0xeeff,	// (0x00091458) list_medium_line_x4_t4_g7_g6_ParamLimits

0xeeff,	// (0x00091458) list_medium_line_x4_t4_g7_g6

0xef0d,	// (0x00091466) list_medium_line_x4_t4_g7_g7_ParamLimits

0xef0d,	// (0x00091466) list_medium_line_x4_t4_g7_g7

0x0006,

0xfb31,	// (0x0009208a) list_medium_line_x4_t4_g7_g_ParamLimits

0xfb31,	// (0x0009208a) list_medium_line_x4_t4_g7_g

0xd3c2,	// (0x0008f91b) list_medium_line_x4_t4_g7_t1_ParamLimits

0xd3c2,	// (0x0008f91b) list_medium_line_x4_t4_g7_t1

0xd3c2,	// (0x0008f91b) list_medium_line_x4_t4_g7_t2_ParamLimits

0xd3c2,	// (0x0008f91b) list_medium_line_x4_t4_g7_t2

0xd3c2,	// (0x0008f91b) list_medium_line_x4_t4_g7_t3_ParamLimits

0xd3c2,	// (0x0008f91b) list_medium_line_x4_t4_g7_t3

0xd37a,	// (0x0008f8d3) list_medium_line_x4_t4_g7_t4_ParamLimits

0xd37a,	// (0x0008f8d3) list_medium_line_x4_t4_g7_t4

0xd37a,	// (0x0008f8d3) list_medium_line_x4_t4_g7_t5_ParamLimits

0xd37a,	// (0x0008f8d3) list_medium_line_x4_t4_g7_t5

0x0004,

0xfb40,	// (0x00092099) list_medium_line_x4_t4_g7_t_ParamLimits

0xfb40,	// (0x00092099) list_medium_line_x4_t4_g7_t

0xaeee,	// (0x0008d447) list_single_dyc_row_pane_ParamLimits

0xaeee,	// (0x0008d447) list_single_dyc_row_pane

0xb71b,	// (0x0008dc74) call5_gesture_pane_ParamLimits

0xb71b,	// (0x0008dc74) call5_gesture_pane

0xb751,	// (0x0008dcaa) call5_windows_pane_ParamLimits

0xb751,	// (0x0008dcaa) call5_windows_pane

0xb7e5,	// (0x0008dd3e) call5_swipe_1_pane_cp_ParamLimits

0xb7e5,	// (0x0008dd3e) call5_swipe_1_pane_cp

0xb7f1,	// (0x0008dd4a) call5_swipe_2_pane_cp_ParamLimits

0xb7f1,	// (0x0008dd4a) call5_swipe_2_pane_cp

0xd372,	// (0x0008f8cb) call5_image_pane_cp

0xb7fd,	// (0x0008dd56) popup_call5_audio_first_window_cp_ParamLimits

0xb7fd,	// (0x0008dd56) popup_call5_audio_first_window_cp

0x29d1,	// (0x00084f2a) call5_swipe_1_pane_g1_cp_ParamLimits

0x29d1,	// (0x00084f2a) call5_swipe_1_pane_g1_cp

0x29ff,	// (0x00084f58) call5_swipe_1_pane_g2_cp

0x29ea,	// (0x00084f43) call5_swipe_1_pane_t1_cp_ParamLimits

0x29ea,	// (0x00084f43) call5_swipe_1_pane_t1_cp

0x29d1,	// (0x00084f2a) call5_swipe_2_pane_g1_cp_ParamLimits

0x29d1,	// (0x00084f2a) call5_swipe_2_pane_g1_cp

0x2a07,	// (0x00084f60) call5_swipe_2_pane_g2_cp

0x2a0f,	// (0x00084f68) call5_swipe_2_pane_t1_cp_ParamLimits

0x2a0f,	// (0x00084f68) call5_swipe_2_pane_t1_cp

0xe82a,	// (0x00090d83) main_sp_fs_email_pane

0x1c94,	// (0x000841ed) main_sp_fs_listscroll_pane_te

0xb80b,	// (0x0008dd64) popup_sp_fs_action_menu_pane_ParamLimits

0xb80b,	// (0x0008dd64) popup_sp_fs_action_menu_pane

0xd3a8,	// (0x0008f901) bg_sp_fs_ctrlbar_pane_g1

0x2a24,	// (0x00084f7d) bg_sp_fs_ctrlbar_ddmenu_pane_g1

0x2a2d,	// (0x00084f86) bg_sp_fs_ctrlbar_ddmenu_pane_g2

0x2a36,	// (0x00084f8f) bg_sp_fs_ctrlbar_ddmenu_pane_g3

0xd3a8,	// (0x0008f901) bg_sp_fs_ctrlbar_ddmenu_pane_g4

0x0003,

0xfc2e,	// (0x00092187) bg_sp_fs_ctrlbar_ddmenu_pane_g

0x0bcb,	// (0x00083124) bg_sp_fs_ctrlbar_ddmenu_pane_ParamLimits

0x0bcb,	// (0x00083124) bg_sp_fs_ctrlbar_ddmenu_pane

0x2a3f,	// (0x00084f98) main_sp_fs_ctrlbar_ddmenu_pane_g1_ParamLimits

0x2a3f,	// (0x00084f98) main_sp_fs_ctrlbar_ddmenu_pane_g1

0x2a4b,	// (0x00084fa4) main_sp_fs_ctrlbar_ddmenu_pane_g2_ParamLimits

0x2a4b,	// (0x00084fa4) main_sp_fs_ctrlbar_ddmenu_pane_g2

0x0001,

0xfc37,	// (0x00092190) main_sp_fs_ctrlbar_ddmenu_pane_g_ParamLimits

0xfc37,	// (0x00092190) main_sp_fs_ctrlbar_ddmenu_pane_g

0x2a57,	// (0x00084fb0) main_sp_fs_ctrlbar_ddmenu_pane_t1_ParamLimits

0x2a57,	// (0x00084fb0) main_sp_fs_ctrlbar_ddmenu_pane_t1

0xd3a8,	// (0x0008f901) list_medium_line_t2_right_icon_g1

0xd911,	// (0x0008fe6a) list_medium_line_t2_right_icon_t1

0xd911,	// (0x0008fe6a) list_medium_line_t2_right_icon_t2

0x0001,

0xfc3c,	// (0x00092195) list_medium_line_t2_right_icon_t

0xe781,	// (0x00090cda) bg_sp_fs_ctrlbar_pane_ParamLimits

0xe781,	// (0x00090cda) bg_sp_fs_ctrlbar_pane

0xb8aa,	// (0x0008de03) main_sp_fs_ctrlbar_button_pane_cp01

0xb8b2,	// (0x0008de0b) main_sp_fs_ctrlbar_ddmenu_pane

0x2aab,	// (0x00085004) main_sp_fs_ctrlbar_pane_g1

0x2ab7,	// (0x00085010) main_sp_fs_ctrlbar_pane_g2

0x0003,

0xfc41,	// (0x0009219a) main_sp_fs_ctrlbar_pane_g

0xb8f0,	// (0x0008de49) main_sp_fs_ctrlbar_pane_t1

0xb92d,	// (0x0008de86) main_sp_fs_ctrlbar_pane

0xb947,	// (0x0008dea0) main_sp_fs_listscroll_pane_te_cp01

0xb958,	// (0x0008deb1) popup_sp_fs_action_menu_pane_cp01_ParamLimits

0xb958,	// (0x0008deb1) popup_sp_fs_action_menu_pane_cp01

0xe82a,	// (0x00090d83) bg_sp_fs_highlight_list_pane_cp01_ParamLimits

0xe82a,	// (0x00090d83) bg_sp_fs_highlight_list_pane_cp01

0x2ade,	// (0x00085037) sp_fs_action_menu_list_gene_pane_g1_ParamLimits

0x2ade,	// (0x00085037) sp_fs_action_menu_list_gene_pane_g1

0x2aed,	// (0x00085046) sp_fs_action_menu_list_gene_pane_g2_ParamLimits

0x2aed,	// (0x00085046) sp_fs_action_menu_list_gene_pane_g2

0x0001,

0xfc4f,	// (0x000921a8) sp_fs_action_menu_list_gene_pane_g_ParamLimits

0xfc4f,	// (0x000921a8) sp_fs_action_menu_list_gene_pane_g

0x2afa,	// (0x00085053) sp_fs_action_menu_list_gene_pane_t1_ParamLimits

0x2afa,	// (0x00085053) sp_fs_action_menu_list_gene_pane_t1

0x2b12,	// (0x0008506b) sp_fs_action_menu_list_gene_pane_ParamLimits

0x2b12,	// (0x0008506b) sp_fs_action_menu_list_gene_pane

0x2b35,	// (0x0008508e) popup_sp_fs_action_menu_bg_pane_ParamLimits

0x2b35,	// (0x0008508e) popup_sp_fs_action_menu_bg_pane

0x2b43,	// (0x0008509c) sp_fs_action_menu_list_pane_ParamLimits

0x2b43,	// (0x0008509c) sp_fs_action_menu_list_pane

0xb978,	// (0x0008ded1) sp_fs_scroll_pane_cp01_ParamLimits

0xb978,	// (0x0008ded1) sp_fs_scroll_pane_cp01

0xd911,	// (0x0008fe6a) list_medium_line_plain_t2_t1

0xd911,	// (0x0008fe6a) list_medium_line_plain_t2_t2

0x0001,

0xfc3c,	// (0x00092195) list_medium_line_plain_t2_t

0xd911,	// (0x0008fe6a) list_medium_line_plain_t3_t1

0xd911,	// (0x0008fe6a) list_medium_line_plain_t3_t2

0xd911,	// (0x0008fe6a) list_medium_line_plain_t3_t3

0x0002,

0xf2a7,	// (0x00091800) list_medium_line_plain_t3_t

0xeeff,	// (0x00091458) list_medium_line_x2_t2_g2_g1_ParamLimits

0xeeff,	// (0x00091458) list_medium_line_x2_t2_g2_g1

0xeeff,	// (0x00091458) list_medium_line_x2_t2_g2_g2_ParamLimits

0xeeff,	// (0x00091458) list_medium_line_x2_t2_g2_g2

0x0001,

0xf1e7,	// (0x00091740) list_medium_line_x2_t2_g2_g_ParamLimits

0xf1e7,	// (0x00091740) list_medium_line_x2_t2_g2_g

0xd3c2,	// (0x0008f91b) list_medium_line_x2_t2_g2_t1_ParamLimits

0xd3c2,	// (0x0008f91b) list_medium_line_x2_t2_g2_t1

0xd3c2,	// (0x0008f91b) list_medium_line_x2_t2_g2_t2_ParamLimits

0xd3c2,	// (0x0008f91b) list_medium_line_x2_t2_g2_t2

0x0001,

0xf25c,	// (0x000917b5) list_medium_line_x2_t2_g2_t_ParamLimits

0xf25c,	// (0x000917b5) list_medium_line_x2_t2_g2_t

0xeeff,	// (0x00091458) list_medium_line_x2_t4_g2_g1_ParamLimits

0xeeff,	// (0x00091458) list_medium_line_x2_t4_g2_g1

0xeeff,	// (0x00091458) list_medium_line_x2_t4_g2_g2_ParamLimits

0xeeff,	// (0x00091458) list_medium_line_x2_t4_g2_g2

0x0001,

0xf1e7,	// (0x00091740) list_medium_line_x2_t4_g2_g_ParamLimits

0xf1e7,	// (0x00091740) list_medium_line_x2_t4_g2_g

0xd3c2,	// (0x0008f91b) list_medium_line_x2_t4_g2_t1_ParamLimits

0xd3c2,	// (0x0008f91b) list_medium_line_x2_t4_g2_t1

0xd3c2,	// (0x0008f91b) list_medium_line_x2_t4_g2_t2_ParamLimits

0xd3c2,	// (0x0008f91b) list_medium_line_x2_t4_g2_t2

0xd3c2,	// (0x0008f91b) list_medium_line_x2_t4_g2_t3_ParamLimits

0xd3c2,	// (0x0008f91b) list_medium_line_x2_t4_g2_t3

0xd3c2,	// (0x0008f91b) list_medium_line_x2_t4_g2_t4_ParamLimits

0xd3c2,	// (0x0008f91b) list_medium_line_x2_t4_g2_t4

0x0003,

0xf1f5,	// (0x0009174e) list_medium_line_x2_t4_g2_t_ParamLimits

0xf1f5,	// (0x0009174e) list_medium_line_x2_t4_g2_t

0xd3a8,	// (0x0008f901) list_medium_line_t3_right_iconx2_g1

0xd3a8,	// (0x0008f901) list_medium_line_t3_right_iconx2_g2

0xd3a8,	// (0x0008f901) list_medium_line_t3_right_iconx2_g3

0x0002,

0xf3c8,	// (0x00091921) list_medium_line_t3_right_iconx2_g

0xd911,	// (0x0008fe6a) list_medium_line_t3_right_iconx2_t1

0xd911,	// (0x0008fe6a) list_medium_line_t3_right_iconx2_t2

0x0001,

0xfc3c,	// (0x00092195) list_medium_line_t3_right_iconx2_t

0xeeff,	// (0x00091458) list_medium_line_x3_t4_g4_g1_ParamLimits

0xeeff,	// (0x00091458) list_medium_line_x3_t4_g4_g1

0xeeff,	// (0x00091458) list_medium_line_x3_t4_g4_g2_ParamLimits

0xeeff,	// (0x00091458) list_medium_line_x3_t4_g4_g2

0xeeff,	// (0x00091458) list_medium_line_x3_t4_g4_g3_ParamLimits

0xeeff,	// (0x00091458) list_medium_line_x3_t4_g4_g3

0xeeff,	// (0x00091458) list_medium_line_x3_t4_g4_g4_ParamLimits

0xeeff,	// (0x00091458) list_medium_line_x3_t4_g4_g4

0x0003,

0xf1ec,	// (0x00091745) list_medium_line_x3_t4_g4_g_ParamLimits

0xf1ec,	// (0x00091745) list_medium_line_x3_t4_g4_g

0xd3c2,	// (0x0008f91b) list_medium_line_x3_t4_g4_t1_ParamLimits

0xd3c2,	// (0x0008f91b) list_medium_line_x3_t4_g4_t1

0xd3c2,	// (0x0008f91b) list_medium_line_x3_t4_g4_t2_ParamLimits

0xd3c2,	// (0x0008f91b) list_medium_line_x3_t4_g4_t2

0xd3c2,	// (0x0008f91b) list_medium_line_x3_t4_g4_t3_ParamLimits

0xd3c2,	// (0x0008f91b) list_medium_line_x3_t4_g4_t3

0xd3c2,	// (0x0008f91b) list_medium_line_x3_t4_g4_t4_ParamLimits

0xd3c2,	// (0x0008f91b) list_medium_line_x3_t4_g4_t4

0x0003,

0xf1f5,	// (0x0009174e) list_medium_line_x3_t4_g4_t_ParamLimits

0xf1f5,	// (0x0009174e) list_medium_line_x3_t4_g4_t

0xb99e,	// (0x0008def7) list_single_dyc_row_text_pane_t1_ParamLimits

0xb99e,	// (0x0008def7) list_single_dyc_row_text_pane_t1

0xb9e1,	// (0x0008df3a) list_single_dyc_row_text_pane_t2_ParamLimits

0xb9e1,	// (0x0008df3a) list_single_dyc_row_text_pane_t2

0x2b67,	// (0x000850c0) list_single_dyc_row_text_pane_t3_ParamLimits

0x2b67,	// (0x000850c0) list_single_dyc_row_text_pane_t3

0x0005,

0xfc54,	// (0x000921ad) list_single_dyc_row_text_pane_t_ParamLimits

0xfc54,	// (0x000921ad) list_single_dyc_row_text_pane_t

0x2b8b,	// (0x000850e4) list_single_dyc_row_pane_g1_ParamLimits

0x2b8b,	// (0x000850e4) list_single_dyc_row_pane_g1

0x2b97,	// (0x000850f0) list_single_dyc_row_pane_g2_ParamLimits

0x2b97,	// (0x000850f0) list_single_dyc_row_pane_g2

0x2ba3,	// (0x000850fc) list_single_dyc_row_pane_g3_ParamLimits

0x2ba3,	// (0x000850fc) list_single_dyc_row_pane_g3

0x2baf,	// (0x00085108) list_single_dyc_row_pane_g4_ParamLimits

0x2baf,	// (0x00085108) list_single_dyc_row_pane_g4

0x0003,

0xfc61,	// (0x000921ba) list_single_dyc_row_pane_g_ParamLimits

0xfc61,	// (0x000921ba) list_single_dyc_row_pane_g

0x2bbb,	// (0x00085114) list_single_dyc_row_text_pane_ParamLimits

0x2bbb,	// (0x00085114) list_single_dyc_row_text_pane

0xe7c9,	// (0x00090d22) bg_sp_fs_scroll_pane

0x2bda,	// (0x00085133) thumb_sp_fs_scroll_pane

0xeeff,	// (0x00091458) list_medium_line_g1_ParamLimits

0xeeff,	// (0x00091458) list_medium_line_g1

0xd3c2,	// (0x0008f91b) list_medium_line_t1_ParamLimits

0xd3c2,	// (0x0008f91b) list_medium_line_t1

0xeeff,	// (0x00091458) list_medium_line_x2_g1_ParamLimits

0xeeff,	// (0x00091458) list_medium_line_x2_g1

0xeeff,	// (0x00091458) list_medium_line_x2_g2_ParamLimits

0xeeff,	// (0x00091458) list_medium_line_x2_g2

0x0001,

0xf1e7,	// (0x00091740) list_medium_line_x2_g_ParamLimits

0xf1e7,	// (0x00091740) list_medium_line_x2_g

0xd3c2,	// (0x0008f91b) list_medium_line_x2_t1_ParamLimits

0xd3c2,	// (0x0008f91b) list_medium_line_x2_t1

0xeeff,	// (0x00091458) list_medium_line_x3_g1_ParamLimits

0xeeff,	// (0x00091458) list_medium_line_x3_g1

0x2be3,	// (0x0008513c) list_medium_line_x3_g2_ParamLimits

0x2be3,	// (0x0008513c) list_medium_line_x3_g2

0x0001,

0xfc6a,	// (0x000921c3) list_medium_line_x3_g_ParamLimits

0xfc6a,	// (0x000921c3) list_medium_line_x3_g

0x2bf1,	// (0x0008514a) list_medium_line_x3_t1_ParamLimits

0x2bf1,	// (0x0008514a) list_medium_line_x3_t1

0x2c05,	// (0x0008515e) thumb_sp_fs_scroll_pane_g1

0x2c0e,	// (0x00085167) thumb_sp_fs_scroll_pane_g2

0x2c17,	// (0x00085170) thumb_sp_fs_scroll_pane_g3

0x0002,

0xfc6f,	// (0x000921c8) thumb_sp_fs_scroll_pane_g

0x2c05,	// (0x0008515e) bg_sp_fs_scroll_pane_g1

0x2c0e,	// (0x00085167) bg_sp_fs_scroll_pane_g2

0x2c17,	// (0x00085170) bg_sp_fs_scroll_pane_g3

0x0002,

0xfc6f,	// (0x000921c8) bg_sp_fs_scroll_pane_g

0xeeff,	// (0x00091458) list_medium_line_x2_t3_g4_g1_ParamLimits

0xeeff,	// (0x00091458) list_medium_line_x2_t3_g4_g1

0xeeff,	// (0x00091458) list_medium_line_x2_t3_g4_g2_ParamLimits

0xeeff,	// (0x00091458) list_medium_line_x2_t3_g4_g2

0xeeff,	// (0x00091458) list_medium_line_x2_t3_g4_g3_ParamLimits

0xeeff,	// (0x00091458) list_medium_line_x2_t3_g4_g3

0xeeff,	// (0x00091458) list_medium_line_x2_t3_g4_g4_ParamLimits

0xeeff,	// (0x00091458) list_medium_line_x2_t3_g4_g4

0x0003,

0xf1ec,	// (0x00091745) list_medium_line_x2_t3_g4_g_ParamLimits

0xf1ec,	// (0x00091745) list_medium_line_x2_t3_g4_g

0xd3c2,	// (0x0008f91b) list_medium_line_x2_t3_g4_t1_ParamLimits

0xd3c2,	// (0x0008f91b) list_medium_line_x2_t3_g4_t1

0xd3c2,	// (0x0008f91b) list_medium_line_x2_t3_g4_t2_ParamLimits

0xd3c2,	// (0x0008f91b) list_medium_line_x2_t3_g4_t2

0xd3c2,	// (0x0008f91b) list_medium_line_x2_t3_g4_t3_ParamLimits

0xd3c2,	// (0x0008f91b) list_medium_line_x2_t3_g4_t3

0x0002,

0xf1e0,	// (0x00091739) list_medium_line_x2_t3_g4_t_ParamLimits

0xf1e0,	// (0x00091739) list_medium_line_x2_t3_g4_t

0xeeff,	// (0x00091458) list_medium_line_g2_g1_ParamLimits

0xeeff,	// (0x00091458) list_medium_line_g2_g1

0xeeff,	// (0x00091458) list_medium_line_g2_g2_ParamLimits

0xeeff,	// (0x00091458) list_medium_line_g2_g2

0x0001,

0xf1e7,	// (0x00091740) list_medium_line_g2_g_ParamLimits

0xf1e7,	// (0x00091740) list_medium_line_g2_g

0xd3c2,	// (0x0008f91b) list_medium_line_g2_t1_ParamLimits

0xd3c2,	// (0x0008f91b) list_medium_line_g2_t1

0xeeff,	// (0x00091458) list_medium_line_t3_g2_g1_ParamLimits

0xeeff,	// (0x00091458) list_medium_line_t3_g2_g1

0xeeff,	// (0x00091458) list_medium_line_t3_g2_g2_ParamLimits

0xeeff,	// (0x00091458) list_medium_line_t3_g2_g2

0x0001,

0xf1e7,	// (0x00091740) list_medium_line_t3_g2_g_ParamLimits

0xf1e7,	// (0x00091740) list_medium_line_t3_g2_g

0xd3c2,	// (0x0008f91b) list_medium_line_t3_g2_t1_ParamLimits

0xd3c2,	// (0x0008f91b) list_medium_line_t3_g2_t1

0xd3c2,	// (0x0008f91b) list_medium_line_t3_g2_t2_ParamLimits

0xd3c2,	// (0x0008f91b) list_medium_line_t3_g2_t2

0xd3c2,	// (0x0008f91b) list_medium_line_t3_g2_t3_ParamLimits

0xd3c2,	// (0x0008f91b) list_medium_line_t3_g2_t3

0x0002,

0xf1e0,	// (0x00091739) list_medium_line_t3_g2_t_ParamLimits

0xf1e0,	// (0x00091739) list_medium_line_t3_g2_t

0xd3a8,	// (0x0008f901) list_medium_line_right_icon_g1

0xd911,	// (0x0008fe6a) list_medium_line_right_icon_t1

0xeeff,	// (0x00091458) list_medium_line_t2_g1_ParamLimits

0xeeff,	// (0x00091458) list_medium_line_t2_g1

0xd3c2,	// (0x0008f91b) list_medium_line_t2_t1_ParamLimits

0xd3c2,	// (0x0008f91b) list_medium_line_t2_t1

0xd3c2,	// (0x0008f91b) list_medium_line_t2_t2_ParamLimits

0xd3c2,	// (0x0008f91b) list_medium_line_t2_t2

0x0001,

0xf25c,	// (0x000917b5) list_medium_line_t2_t_ParamLimits

0xf25c,	// (0x000917b5) list_medium_line_t2_t

0xeeff,	// (0x00091458) list_medium_line_t3_g1_ParamLimits

0xeeff,	// (0x00091458) list_medium_line_t3_g1

0xd3c2,	// (0x0008f91b) list_medium_line_t3_t1_ParamLimits

0xd3c2,	// (0x0008f91b) list_medium_line_t3_t1

0xd3c2,	// (0x0008f91b) list_medium_line_t3_t2_ParamLimits

0xd3c2,	// (0x0008f91b) list_medium_line_t3_t2

0xd3c2,	// (0x0008f91b) list_medium_line_t3_t3_ParamLimits

0xd3c2,	// (0x0008f91b) list_medium_line_t3_t3

0x0002,

0xf1e0,	// (0x00091739) list_medium_line_t3_t_ParamLimits

0xf1e0,	// (0x00091739) list_medium_line_t3_t

0xeeff,	// (0x00091458) list_medium_line_g3_g1_ParamLimits

0xeeff,	// (0x00091458) list_medium_line_g3_g1

0xeeff,	// (0x00091458) list_medium_line_g3_g2_ParamLimits

0xeeff,	// (0x00091458) list_medium_line_g3_g2

0xeeff,	// (0x00091458) list_medium_line_g3_g3_ParamLimits

0xeeff,	// (0x00091458) list_medium_line_g3_g3

0x0002,

0xf1d9,	// (0x00091732) list_medium_line_g3_g_ParamLimits

0xf1d9,	// (0x00091732) list_medium_line_g3_g

0xd3c2,	// (0x0008f91b) list_medium_line_g3_t1_ParamLimits

0xd3c2,	// (0x0008f91b) list_medium_line_g3_t1

0xeeff,	// (0x00091458) list_medium_line_t2_g3_g1_ParamLimits

0xeeff,	// (0x00091458) list_medium_line_t2_g3_g1

0xeeff,	// (0x00091458) list_medium_line_t2_g3_g2_ParamLimits

0xeeff,	// (0x00091458) list_medium_line_t2_g3_g2

0xeeff,	// (0x00091458) list_medium_line_t2_g3_g3_ParamLimits

0xeeff,	// (0x00091458) list_medium_line_t2_g3_g3

0x0002,

0xf1d9,	// (0x00091732) list_medium_line_t2_g3_g_ParamLimits

0xf1d9,	// (0x00091732) list_medium_line_t2_g3_g

0xd3c2,	// (0x0008f91b) list_medium_line_t2_g3_t1_ParamLimits

0xd3c2,	// (0x0008f91b) list_medium_line_t2_g3_t1

0xd3c2,	// (0x0008f91b) list_medium_line_t2_g3_t2_ParamLimits

0xd3c2,	// (0x0008f91b) list_medium_line_t2_g3_t2

0x0001,

0xf25c,	// (0x000917b5) list_medium_line_t2_g3_t_ParamLimits

0xf25c,	// (0x000917b5) list_medium_line_t2_g3_t

0xeeff,	// (0x00091458) list_medium_line_t3_g3_g1_ParamLimits

0xeeff,	// (0x00091458) list_medium_line_t3_g3_g1

0xeeff,	// (0x00091458) list_medium_line_t3_g3_g2_ParamLimits

0xeeff,	// (0x00091458) list_medium_line_t3_g3_g2

0xeeff,	// (0x00091458) list_medium_line_t3_g3_g3_ParamLimits

0xeeff,	// (0x00091458) list_medium_line_t3_g3_g3

0x0002,

0xf1d9,	// (0x00091732) list_medium_line_t3_g3_g_ParamLimits

0xf1d9,	// (0x00091732) list_medium_line_t3_g3_g

0xd3c2,	// (0x0008f91b) list_medium_line_t3_g3_t1_ParamLimits

0xd3c2,	// (0x0008f91b) list_medium_line_t3_g3_t1

0xd3c2,	// (0x0008f91b) list_medium_line_t3_g3_t2_ParamLimits

0xd3c2,	// (0x0008f91b) list_medium_line_t3_g3_t2

0xd3c2,	// (0x0008f91b) list_medium_line_t3_g3_t3_ParamLimits

0xd3c2,	// (0x0008f91b) list_medium_line_t3_g3_t3

0x0002,

0xf1e0,	// (0x00091739) list_medium_line_t3_g3_t_ParamLimits

0xf1e0,	// (0x00091739) list_medium_line_t3_g3_t

0xd3a8,	// (0x0008f901) list_medium_line_right_iconx2_g1

0xd3a8,	// (0x0008f901) list_medium_line_right_iconx2_g2

0x0001,

0xf3c3,	// (0x0009191c) list_medium_line_right_iconx2_g

0xd911,	// (0x0008fe6a) list_medium_line_right_iconx2_t1

0xd3a8,	// (0x0008f901) list_medium_line_t2_right_iconx2_g1

0xd3a8,	// (0x0008f901) list_medium_line_t2_right_iconx2_g2

0x0001,

0xf3c3,	// (0x0009191c) list_medium_line_t2_right_iconx2_g

0xd911,	// (0x0008fe6a) list_medium_line_t2_right_iconx2_t1

0xd911,	// (0x0008fe6a) list_medium_line_t2_right_iconx2_t2

0x0001,

0xfc3c,	// (0x00092195) list_medium_line_t2_right_iconx2_t

0xd911,	// (0x0008fe6a) list_medium_line_x4_t4_t1

0xd911,	// (0x0008fe6a) list_medium_line_x4_t4_t2

0xd911,	// (0x0008fe6a) list_medium_line_x4_t4_t3

0xd911,	// (0x0008fe6a) list_medium_line_x4_t4_t4

0x0003,

0xf2ae,	// (0x00091807) list_medium_line_x4_t4_t

0xbb3c,	// (0x0008e095) tport_appsw_pane_ParamLimits

0xbb3c,	// (0x0008e095) tport_appsw_pane

0xbb4a,	// (0x0008e0a3) tport_contact_pane_ParamLimits

0xbb4a,	// (0x0008e0a3) tport_contact_pane

0xbb5a,	// (0x0008e0b3) tport_listscroll_pane_ParamLimits

0xbb5a,	// (0x0008e0b3) tport_listscroll_pane

0xbb69,	// (0x0008e0c2) cell_tport_appsw_pane_ParamLimits

0xbb69,	// (0x0008e0c2) cell_tport_appsw_pane

0xef0d,	// (0x00091466) tport_appsw_pane_g1_ParamLimits

0xef0d,	// (0x00091466) tport_appsw_pane_g1

0x2c20,	// (0x00085179) tport_contact_pane_g1

0x2c29,	// (0x00085182) tport_contact_pane_t1

0x2c37,	// (0x00085190) tport_contact_pane_t2

0x0001,

0xfc76,	// (0x000921cf) tport_contact_pane_t

0x2c45,	// (0x0008519e) list_tport_pane

0x2c4e,	// (0x000851a7) scroll_pane_cp_030

0xbb9e,	// (0x0008e0f7) cell_tport_appsw_pane_g1

0xbbae,	// (0x0008e107) cell_tport_appsw_pane_t1

0xbbbc,	// (0x0008e115) grid_highlight_pane_cp019

0xbbc4,	// (0x0008e11d) list_tport_double_graphic_pane_ParamLimits

0xbbc4,	// (0x0008e11d) list_tport_double_graphic_pane

0xe82a,	// (0x00090d83) list_highlight_pane_cp023_ParamLimits

0xe82a,	// (0x00090d83) list_highlight_pane_cp023

0xbbe1,	// (0x0008e13a) list_tport_double_graphic_pane_g1_ParamLimits

0xbbe1,	// (0x0008e13a) list_tport_double_graphic_pane_g1

0xbbee,	// (0x0008e147) list_tport_double_graphic_pane_t1_ParamLimits

0xbbee,	// (0x0008e147) list_tport_double_graphic_pane_t1

0xbc03,	// (0x0008e15c) list_tport_double_graphic_pane_t2_ParamLimits

0xbc03,	// (0x0008e15c) list_tport_double_graphic_pane_t2

0x0001,

0xfc82,	// (0x000921db) list_tport_double_graphic_pane_t_ParamLimits

0xfc82,	// (0x000921db) list_tport_double_graphic_pane_t

0xe7c9,	// (0x00090d22) main_cale_note_pane

0x9907,	// (0x0008be60) cell_vitu2_function_top_wide_pane_cp01_ParamLimits

0x9907,	// (0x0008be60) cell_vitu2_function_top_wide_pane_cp01

0xb29f,	// (0x0008d7f8) wait_bar_pane_cp05_ParamLimits

0xe82a,	// (0x00090d83) listscroll_cmail_pane

0x2c57,	// (0x000851b0) list_cmail_pane

0xbc15,	// (0x0008e16e) list_cmail_body_pane

0xbc2f,	// (0x0008e188) list_single_cmail_header_caption_pane

0x2c67,	// (0x000851c0) list_single_cmail_header_detail_pane_ParamLimits

0x2c67,	// (0x000851c0) list_single_cmail_header_detail_pane

0x2c99,	// (0x000851f2) list_single_cmail_header_caption_pane_t1

0xbc4f,	// (0x0008e1a8) list_single_cmail_header_detail_pane_g1_ParamLimits

0xbc4f,	// (0x0008e1a8) list_single_cmail_header_detail_pane_g1

0x37f7,	// (0x00085d50) list_single_cmail_header_detail_pane_g2_ParamLimits

0x37f7,	// (0x00085d50) list_single_cmail_header_detail_pane_g2

0x0002,

0xfc87,	// (0x000921e0) list_single_cmail_header_detail_pane_g_ParamLimits

0xfc87,	// (0x000921e0) list_single_cmail_header_detail_pane_g

0x2cbd,	// (0x00085216) list_single_cmail_header_detail_pane_t1_ParamLimits

0x2cbd,	// (0x00085216) list_single_cmail_header_detail_pane_t1

0x2d1d,	// (0x00085276) list_single_cmail_header_editor_pane_bg_ParamLimits

0x2d1d,	// (0x00085276) list_single_cmail_header_editor_pane_bg

0x279d,	// (0x00084cf6) list_cmail_body_pane_g1

0x2d34,	// (0x0008528d) list_cmail_body_pane_t1

0x1a93,	// (0x00083fec) list_single_cmail_header_editor_pane_bg_g1

0xd5d1,	// (0x0008fb2a) list_single_cmail_header_editor_pane_bg_g1_copy1

0x1aa3,	// (0x00083ffc) list_single_cmail_header_editor_pane_bg_g1_copy2

0x1a9b,	// (0x00083ff4) list_single_cmail_header_editor_pane_bg_g1_copy3

0x1cd0,	// (0x00084229) list_single_cmail_header_editor_pane_bg_g1_copy4

0x1ac3,	// (0x0008401c) list_single_cmail_header_editor_pane_bg_g1_copy4_copy1

0x1ab3,	// (0x0008400c) list_single_cmail_header_editor_pane_bg_g1_copy4_copy2

0x1abb,	// (0x00084014) list_single_cmail_header_editor_pane_bg_g1_copy4_copy3

0xd5b1,	// (0x0008fb0a) list_single_cmail_header_editor_pane_bg_g1_copy4_copy3_copy1

0xbc67,	// (0x0008e1c0) calenote_gesture_pane_ParamLimits

0xbc67,	// (0x0008e1c0) calenote_gesture_pane

0xbc81,	// (0x0008e1da) calenote_window_pane_ParamLimits

0xbc81,	// (0x0008e1da) calenote_window_pane

0x2d42,	// (0x0008529b) popup_note_window_cp01

0xbc99,	// (0x0008e1f2) calenote_swipe_1_pane_ParamLimits

0xbc99,	// (0x0008e1f2) calenote_swipe_1_pane

0xb7f1,	// (0x0008dd4a) calenote_swipe_2_pane_ParamLimits

0xb7f1,	// (0x0008dd4a) calenote_swipe_2_pane

0x29d1,	// (0x00084f2a) calenote_swipe_1_pane_g1_ParamLimits

0x29d1,	// (0x00084f2a) calenote_swipe_1_pane_g1

0x29de,	// (0x00084f37) calenote_swipe_1_pane_g2_ParamLimits

0x29de,	// (0x00084f37) calenote_swipe_1_pane_g2

0x0001,

0xfc24,	// (0x0009217d) calenote_swipe_1_pane_g_ParamLimits

0xfc24,	// (0x0009217d) calenote_swipe_1_pane_g

0x2d54,	// (0x000852ad) calenote_swipe_1_pane_t1_ParamLimits

0x2d54,	// (0x000852ad) calenote_swipe_1_pane_t1

0x29d1,	// (0x00084f2a) calenote_swipe_2_pane_g1_ParamLimits

0x29d1,	// (0x00084f2a) calenote_swipe_2_pane_g1

0x2d73,	// (0x000852cc) calenote_swipe_2_pane_g2_ParamLimits

0x2d73,	// (0x000852cc) calenote_swipe_2_pane_g2

0x0001,

0xfc93,	// (0x000921ec) calenote_swipe_2_pane_g_ParamLimits

0xfc93,	// (0x000921ec) calenote_swipe_2_pane_g

0x2d7f,	// (0x000852d8) calenote_swipe_2_pane_t1_ParamLimits

0x2d7f,	// (0x000852d8) calenote_swipe_2_pane_t1

0xe7c9,	// (0x00090d22) main_mup_navstr_pane

0x8774,	// (0x0008accd) main_mup3_pane_t7_ParamLimits

0x8774,	// (0x0008accd) main_mup3_pane_t7

0x8f82,	// (0x0008b4db) main_mp4_pane_g6_ParamLimits

0x8f82,	// (0x0008b4db) main_mp4_pane_g6

0x931c,	// (0x0008b875) main_image3_pane_t4_ParamLimits

0x931c,	// (0x0008b875) main_image3_pane_t4

0xbcac,	// (0x0008e205) popup_navstr_preview_pane_ParamLimits

0xbcac,	// (0x0008e205) popup_navstr_preview_pane

0xbcb8,	// (0x0008e211) scroll_navstr_pane_ParamLimits

0xbcb8,	// (0x0008e211) scroll_navstr_pane

0xe7c9,	// (0x00090d22) bg_popup_preview_window_pane_cp04

0x380b,	// (0x00085d64) popup_navstr_preview_pane_t1

0xbcc4,	// (0x0008e21d) scroll_navstr_pane_g1_ParamLimits

0xbcc4,	// (0x0008e21d) scroll_navstr_pane_g1

0xbcd1,	// (0x0008e22a) scroll_navstr_pane_t1_ParamLimits

0xbcd1,	// (0x0008e22a) scroll_navstr_pane_t1

0x2d4b,	// (0x000852a4) bg_button_pane_cp014

0x2d4b,	// (0x000852a4) bg_button_pane_cp030

0xb6c1,	// (0x0008dc1a) list_double_fisheye_pane_g4_ParamLimits

0xb6c1,	// (0x0008dc1a) list_double_fisheye_pane_g4

0xb6cd,	// (0x0008dc26) list_double_fisheye_pane_g5_ParamLimits

0xb6cd,	// (0x0008dc26) list_double_fisheye_pane_g5

0xe7bd,	// (0x00090d16) sp_fs_scroll_pane_cp03

0x2aab,	// (0x00085004) main_sp_fs_ctrlbar_pane_g1_ParamLimits

0x2ab7,	// (0x00085010) main_sp_fs_ctrlbar_pane_g2_ParamLimits

0xfc41,	// (0x0009219a) main_sp_fs_ctrlbar_pane_g_ParamLimits

0xb8f0,	// (0x0008de49) main_sp_fs_ctrlbar_pane_t1_ParamLimits

0x2c5f,	// (0x000851b8) sp_fs_scroll_pane_cp02

0xd2ce,	// (0x0008f827) popup_sp_fs_calendar_preview_list_single_pane_ParamLimits

0xd2ce,	// (0x0008f827) popup_sp_fs_calendar_preview_list_single_pane

0xe7c9,	// (0x00090d22) main_cam6_pano_pane

0x7bd5,	// (0x0008a12e) main_mup3_pane_ParamLimits

0xe7c9,	// (0x00090d22) main_phacti_pane

0xb172,	// (0x0008d6cb) bg_button_pane_cp11

0xb18a,	// (0x0008d6e3) main_mobtv_info_pane_g2_ParamLimits

0xb18a,	// (0x0008d6e3) main_mobtv_info_pane_g2

0x0001,

0xfba1,	// (0x000920fa) main_mobtv_info_pane_g_ParamLimits

0xfba1,	// (0x000920fa) main_mobtv_info_pane_g

0xb33c,	// (0x0008d895) sc_clock_pane_t5_ParamLimits

0xb33c,	// (0x0008d895) sc_clock_pane_t5

0xb534,	// (0x0008da8d) main_radioblah_pane_g1_ParamLimits

0x2903,	// (0x00084e5c) main_radioblah_pane_t3_ParamLimits

0x2903,	// (0x00084e5c) main_radioblah_pane_t3

0x291b,	// (0x00084e74) main_radioblah_pane_t4_ParamLimits

0x291b,	// (0x00084e74) main_radioblah_pane_t4

0xb552,	// (0x0008daab) main_radioblah_text_pane_ParamLimits

0xb552,	// (0x0008daab) main_radioblah_text_pane

0xb55f,	// (0x0008dab8) main_radioblah_info_pane_g1_ParamLimits

0xb5f8,	// (0x0008db51) main_radioblah_info_pane_t4_ParamLimits

0xb5f8,	// (0x0008db51) main_radioblah_info_pane_t4

0xe82a,	// (0x00090d83) main_sp_fs_calendar_pane

0xbce3,	// (0x0008e23c) main_phacti_pane_g1

0xbceb,	// (0x0008e244) phacti_note_pane_ParamLimits

0xbceb,	// (0x0008e244) phacti_note_pane

0x3822,	// (0x00085d7b) phacti_term_pane_ParamLimits

0x3822,	// (0x00085d7b) phacti_term_pane

0x3837,	// (0x00085d90) phacti_note_pane_t1_ParamLimits

0x3837,	// (0x00085d90) phacti_note_pane_t1

0x2d9e,	// (0x000852f7) phacti_term_pane_g1

0x2da6,	// (0x000852ff) phacti_term_pane_t1_ParamLimits

0x2da6,	// (0x000852ff) phacti_term_pane_t1

0x384e,	// (0x00085da7) popup_sp_fs_calendar_preview_list_single_pane_g1

0x3856,	// (0x00085daf) popup_sp_fs_calendar_preview_list_single_pane_g2

0x0001,

0xfc9d,	// (0x000921f6) popup_sp_fs_calendar_preview_list_single_pane_g

0x385e,	// (0x00085db7) popup_sp_fs_calendar_preview_list_single_pane_t1_ParamLimits

0x385e,	// (0x00085db7) popup_sp_fs_calendar_preview_list_single_pane_t1

0x3874,	// (0x00085dcd) aid_popup_sp_fs_bg_corner_pane

0xd3a8,	// (0x0008f901) popup_sp_fs_calendar_preview_bg_pane_g1

0xe7c9,	// (0x00090d22) popup_sp_fs_calendar_preview_bg_pane

0x387c,	// (0x00085dd5) popup_sp_fs_calendar_preview_list_pane

0xe781,	// (0x00090cda) bg_main_sp_fs_cale_pane_ParamLimits

0xe781,	// (0x00090cda) bg_main_sp_fs_cale_pane

0x2dd9,	// (0x00085332) listscroll_cale_mrui_pane_ParamLimits

0x2dd9,	// (0x00085332) listscroll_cale_mrui_pane

0x2dee,	// (0x00085347) listscroll_sp_fs_schedule_track_pane

0x2df7,	// (0x00085350) main_sp_fs_ctrlbar_pane_cp01_ParamLimits

0x2df7,	// (0x00085350) main_sp_fs_ctrlbar_pane_cp01

0x3884,	// (0x00085ddd) main_sp_fs_ribbon_pane

0x2e0a,	// (0x00085363) popup_sp_fs_cale_preview_window

0x3244,	// (0x0008579d) list_single_sp_fs_schedule_track_pane_ParamLimits

0x3244,	// (0x0008579d) list_single_sp_fs_schedule_track_pane

0xeef1,	// (0x0009144a) bg_sp_fs_highlight_list_pane_cp03_ParamLimits

0xeef1,	// (0x0009144a) bg_sp_fs_highlight_list_pane_cp03

0xbd4e,	// (0x0008e2a7) list_single_sp_fs_schedule_track_pane_g1_ParamLimits

0xbd4e,	// (0x0008e2a7) list_single_sp_fs_schedule_track_pane_g1

0xbd5a,	// (0x0008e2b3) list_single_sp_fs_schedule_track_pane_g2_ParamLimits

0xbd5a,	// (0x0008e2b3) list_single_sp_fs_schedule_track_pane_g2

0x0001,

0xfca2,	// (0x000921fb) list_single_sp_fs_schedule_track_pane_g_ParamLimits

0xfca2,	// (0x000921fb) list_single_sp_fs_schedule_track_pane_g

0xbd66,	// (0x0008e2bf) list_single_sp_fs_schedule_track_pane_t1_ParamLimits

0xbd66,	// (0x0008e2bf) list_single_sp_fs_schedule_track_pane_t1

0xbd84,	// (0x0008e2dd) sp_fs_schedule_track_pane_ParamLimits

0xbd84,	// (0x0008e2dd) sp_fs_schedule_track_pane

0x388c,	// (0x00085de5) sp_fs_schedule_track_pane_g1

0x3894,	// (0x00085ded) sp_fs_schedule_track_pane_g2

0x389c,	// (0x00085df5) sp_fs_schedule_track_pane_g3

0x38a4,	// (0x00085dfd) sp_fs_schedule_track_pane_g4

0x38ac,	// (0x00085e05) sp_fs_schedule_track_pane_g5

0x0004,

0xfca7,	// (0x00092200) sp_fs_schedule_track_pane_g

0x1a93,	// (0x00083fec) bg_sp_fs_schedule_viewer_highlight_g1

0xd5d1,	// (0x0008fb2a) bg_sp_fs_schedule_viewer_highlight_g2

0x1a9b,	// (0x00083ff4) bg_sp_fs_schedule_viewer_highlight_g3

0x1aa3,	// (0x00083ffc) bg_sp_fs_schedule_viewer_highlight_g4

0x1cd0,	// (0x00084229) bg_sp_fs_schedule_viewer_highlight_g5

0x1ab3,	// (0x0008400c) bg_sp_fs_schedule_viewer_highlight_g6

0x1abb,	// (0x00084014) bg_sp_fs_schedule_viewer_highlight_g7

0x1ac3,	// (0x0008401c) bg_sp_fs_schedule_viewer_highlight_g8

0xd5b1,	// (0x0008fb0a) bg_sp_fs_schedule_viewer_highlight_g9

0x0008,

0xfcb2,	// (0x0009220b) bg_sp_fs_schedule_viewer_highlight_g

0xe7c9,	// (0x00090d22) bg_main_sp_fs_ribbon_pane

0xbd96,	// (0x0008e2ef) main_sp_fs_ribbon_pane_g1

0x38b4,	// (0x00085e0d) main_sp_fs_ribbon_pane_t1

0xbd9f,	// (0x0008e2f8) main_sp_fs_ribbon_pane_t2

0x38c3,	// (0x00085e1c) main_sp_fs_ribbon_pane_t3

0x0002,

0xfcc5,	// (0x0009221e) main_sp_fs_ribbon_pane_t

0x38d2,	// (0x00085e2b) main_sp_fs_ribbon_scheduler_pane

0x38da,	// (0x00085e33) bg_main_sp_fs_ribbon_pane_g1

0x38e3,	// (0x00085e3c) bg_main_sp_fs_ribbon_pane_g2

0x38ec,	// (0x00085e45) bg_main_sp_fs_ribbon_pane_g3

0x0002,

0xfccc,	// (0x00092225) bg_main_sp_fs_ribbon_pane_g

0x38f4,	// (0x00085e4d) main_sp_fs_ribbon_scheduler_pane_g1

0x38fd,	// (0x00085e56) main_sp_fs_ribbon_scheduler_pane_g2

0x3906,	// (0x00085e5f) main_sp_fs_ribbon_scheduler_pane_g3

0x0002,

0xfcd3,	// (0x0009222c) main_sp_fs_ribbon_scheduler_pane_g

0x390f,	// (0x00085e68) list_cale_mrui_pane

0xbdae,	// (0x0008e307) sp_fs_scroll_pane_cp07_ParamLimits

0xbdae,	// (0x0008e307) sp_fs_scroll_pane_cp07

0xbdca,	// (0x0008e323) bg_sp_fs_schedule_viewer_highlight_ParamLimits

0xbdca,	// (0x0008e323) bg_sp_fs_schedule_viewer_highlight

0x391c,	// (0x00085e75) list_single_sp_fs_schedule_track_pane_cp01

0x3924,	// (0x00085e7d) list_sp_fs_schedule_track_pane

0x392c,	// (0x00085e85) sp_fs_scroll_pane_cp06_ParamLimits

0x392c,	// (0x00085e85) sp_fs_scroll_pane_cp06

0xd3a8,	// (0x0008f901) bgmain_sp_fs_calendar_pane_g1

0xbdd7,	// (0x0008e330) list_single_cale_mrui_pane_ParamLimits

0xbdd7,	// (0x0008e330) list_single_cale_mrui_pane

0x2e1c,	// (0x00085375) list_single_cale_mrui_row_pane_ParamLimits

0x2e1c,	// (0x00085375) list_single_cale_mrui_row_pane

0x2e29,	// (0x00085382) list_single_cale_mrui_row_pane_g1_ParamLimits

0x2e29,	// (0x00085382) list_single_cale_mrui_row_pane_g1

0x2e61,	// (0x000853ba) list_single_cale_mrui_row_pane_t1_ParamLimits

0x2e61,	// (0x000853ba) list_single_cale_mrui_row_pane_t1

0xbdfa,	// (0x0008e353) list_single_cale_mrui_row_pane_t2_ParamLimits

0xbdfa,	// (0x0008e353) list_single_cale_mrui_row_pane_t2

0x2e73,	// (0x000853cc) list_single_cale_mrui_row_pane_t3_ParamLimits

0x2e73,	// (0x000853cc) list_single_cale_mrui_row_pane_t3

0x2ea2,	// (0x000853fb) list_single_cale_mrui_row_pane_t4_ParamLimits

0x2ea2,	// (0x000853fb) list_single_cale_mrui_row_pane_t4

0x0003,

0xfce1,	// (0x0009223a) list_single_cale_mrui_row_pane_t_ParamLimits

0xfce1,	// (0x0009223a) list_single_cale_mrui_row_pane_t

0xbe60,	// (0x0008e3b9) list_single_cmail_header_editor_pane_bg_cp01_ParamLimits

0xbe60,	// (0x0008e3b9) list_single_cmail_header_editor_pane_bg_cp01

0xbe82,	// (0x0008e3db) list_single_cmail_header_editor_pane_bg_cp02_ParamLimits

0xbe82,	// (0x0008e3db) list_single_cmail_header_editor_pane_bg_cp02

0xbea0,	// (0x0008e3f9) main_radioblah_text_pane_t1_ParamLimits

0xbea0,	// (0x0008e3f9) main_radioblah_text_pane_t1

0x394b,	// (0x00085ea4) cam6_indi_pane_cp01

0x3953,	// (0x00085eac) cam6_mode_pane_cp01

0x395b,	// (0x00085eb4) cam6_pano_pane

0x3964,	// (0x00085ebd) cam6_zoom_pane_cp01

0x396e,	// (0x00085ec7) cam6_pano_image_pane

0x3977,	// (0x00085ed0) cam6_pano_pane_g1

0x279d,	// (0x00084cf6) cam6_pano_pane_g2

0x3980,	// (0x00085ed9) cam6_pano_pane_g3

0x3989,	// (0x00085ee2) cam6_pano_pane_g4

0x148c,	// (0x000839e5) cam6_pano_pane_g5

0x3992,	// (0x00085eeb) cam6_pano_pane_g6

0x399a,	// (0x00085ef3) cam6_pano_pane_g7

0x39a2,	// (0x00085efb) cam6_pano_pane_g8

0x39ab,	// (0x00085f04) cam6_pano_pane_g9

0x0008,

0xfcea,	// (0x00092243) cam6_pano_pane_g

0xe7c9,	// (0x00090d22) main_browser_tag_pane

0x3803,	// (0x00085d5c) grid_navstr_albumart_pane

0x39b6,	// (0x00085f0f) cell_navstr_albumart_pane_ParamLimits

0x39b6,	// (0x00085f0f) cell_navstr_albumart_pane

0x39d2,	// (0x00085f2b) cell_navstr_albumart_pane_g1

0x08d9,	// (0x00082e32) cell_navstr_albumart_pane_g2

0x08e9,	// (0x00082e42) cell_navstr_albumart_pane_g3

0x08e1,	// (0x00082e3a) cell_navstr_albumart_pane_g4

0x0003,

0xfcfd,	// (0x00092256) cell_navstr_albumart_pane_g

0xbeba,	// (0x0008e413) bt_list_pane_ParamLimits

0xbeba,	// (0x0008e413) bt_list_pane

0xbed3,	// (0x0008e42c) bt_list_pane_t1

0xbee2,	// (0x0008e43b) bt_list_pane_t2

0x0001,

0xfd06,	// (0x0009225f) bt_list_pane_t

0xe7c9,	// (0x00090d22) main_cale_prevew_pane

0xbef1,	// (0x0008e44a) popup_cale_preview_window_ParamLimits

0xbef1,	// (0x0008e44a) popup_cale_preview_window

0xe82a,	// (0x00090d83) bg_popup_preview_window_pane_cp05_ParamLimits

0xe82a,	// (0x00090d83) bg_popup_preview_window_pane_cp05

0x39da,	// (0x00085f33) list_cale_preview_pane_ParamLimits

0x39da,	// (0x00085f33) list_cale_preview_pane

0xbf0e,	// (0x0008e467) list_double_cale_preview_pane_ParamLimits

0xbf0e,	// (0x0008e467) list_double_cale_preview_pane

0xbf22,	// (0x0008e47b) list_single_cale_preview_pane_ParamLimits

0xbf22,	// (0x0008e47b) list_single_cale_preview_pane

0xbf3a,	// (0x0008e493) list_single_cale_preview_pane_g1

0xbf42,	// (0x0008e49b) list_single_cale_preview_pane_t1_ParamLimits

0xbf42,	// (0x0008e49b) list_single_cale_preview_pane_t1

0xbf57,	// (0x0008e4b0) list_double_cale_preview_pane_g1

0xbf5f,	// (0x0008e4b8) list_double_cale_preview_pane_t1_ParamLimits

0xbf5f,	// (0x0008e4b8) list_double_cale_preview_pane_t1

0xbf74,	// (0x0008e4cd) list_double_cale_preview_pane_t2_ParamLimits

0xbf74,	// (0x0008e4cd) list_double_cale_preview_pane_t2

0x0001,

0xfd0b,	// (0x00092264) list_double_cale_preview_pane_t_ParamLimits

0xfd0b,	// (0x00092264) list_double_cale_preview_pane_t

0xe7c9,	// (0x00090d22) main_ezdial_pane

0xe82a,	// (0x00090d83) main_sp_fs_email_pane_ParamLimits

0xb851,	// (0x0008ddaa) cmail_ddmenu_btn01_pane_ParamLimits

0xb851,	// (0x0008ddaa) cmail_ddmenu_btn01_pane

0xb86e,	// (0x0008ddc7) cmail_ddmenu_btn02_pane_ParamLimits

0xb86e,	// (0x0008ddc7) cmail_ddmenu_btn02_pane

0xb88c,	// (0x0008dde5) cmail_ddmenu_btn03_pane_ParamLimits

0xb88c,	// (0x0008dde5) cmail_ddmenu_btn03_pane

0xb92d,	// (0x0008de86) main_sp_fs_ctrlbar_pane_ParamLimits

0xb947,	// (0x0008dea0) main_sp_fs_listscroll_pane_te_cp01_ParamLimits

0xbc15,	// (0x0008e16e) list_cmail_body_pane_ParamLimits

0x2ca7,	// (0x00085200) bg_button_pane_cp12

0x2cb0,	// (0x00085209) list_single_cmail_header_detail_pane_g3_ParamLimits

0x2cb0,	// (0x00085209) list_single_cmail_header_detail_pane_g3

0x2cf9,	// (0x00085252) list_single_cmail_header_detail_pane_t2_ParamLimits

0x2cf9,	// (0x00085252) list_single_cmail_header_detail_pane_t2

0x0001,

0xfc8e,	// (0x000921e7) list_single_cmail_header_detail_pane_t_ParamLimits

0xfc8e,	// (0x000921e7) list_single_cmail_header_detail_pane_t

0x2dbb,	// (0x00085314) phacti_term_pane_t2_ParamLimits

0x2dbb,	// (0x00085314) phacti_term_pane_t2

0x0001,

0xfc98,	// (0x000921f1) phacti_term_pane_t_ParamLimits

0xfc98,	// (0x000921f1) phacti_term_pane_t

0x39e6,	// (0x00085f3f) aid_size_list_single_double

0xbf8c,	// (0x0008e4e5) popup_ezdial_listscroll_window

0xbfae,	// (0x0008e507) popup_number_entry_window_cp01

0xd372,	// (0x0008f8cb) bg_popup_call_pane_cp09

0x39f2,	// (0x00085f4b) ezdial_list_pane

0x39fa,	// (0x00085f53) scroll_pane_cp23

0x0bcb,	// (0x00083124) bg_button_pane_cp028_ParamLimits

0x0bcb,	// (0x00083124) bg_button_pane_cp028

0xbfbc,	// (0x0008e515) cmail_ddmenu_btn01_pane_g1_ParamLimits

0xbfbc,	// (0x0008e515) cmail_ddmenu_btn01_pane_g1

0xbfce,	// (0x0008e527) cmail_ddmenu_btn01_pane_g2_ParamLimits

0xbfce,	// (0x0008e527) cmail_ddmenu_btn01_pane_g2

0x0001,

0xfd10,	// (0x00092269) cmail_ddmenu_btn01_pane_g_ParamLimits

0xfd10,	// (0x00092269) cmail_ddmenu_btn01_pane_g

0x3a02,	// (0x00085f5b) cmail_ddmenu_btn01_pane_t1_ParamLimits

0x3a02,	// (0x00085f5b) cmail_ddmenu_btn01_pane_t1

0xe781,	// (0x00090cda) bg_button_pane_cp029_ParamLimits

0xe781,	// (0x00090cda) bg_button_pane_cp029

0xbfda,	// (0x0008e533) cmail_ddmenu_btn02_pane_g1_ParamLimits

0xbfda,	// (0x0008e533) cmail_ddmenu_btn02_pane_g1

0xbff2,	// (0x0008e54b) cmail_ddmenu_btn02_pane_t1_ParamLimits

0xbff2,	// (0x0008e54b) cmail_ddmenu_btn02_pane_t1

0xeef1,	// (0x0009144a) bg_button_pane_cp031_ParamLimits

0xeef1,	// (0x0009144a) bg_button_pane_cp031

0xbfda,	// (0x0008e533) cmail_ddmenu_btn03_pane_g1_ParamLimits

0xbfda,	// (0x0008e533) cmail_ddmenu_btn03_pane_g1

0xbff2,	// (0x0008e54b) cmail_ddmenu_btn03_pane_t1_ParamLimits

0xbff2,	// (0x0008e54b) cmail_ddmenu_btn03_pane_t1

0x91b7,	// (0x0008b710) cell_dialer2_keypad_pane_t1_ParamLimits

0x91d1,	// (0x0008b72a) cell_dialer2_keypad_pane_t1_copy1_ParamLimits

0x91d1,	// (0x0008b72a) cell_dialer2_keypad_pane_t1_copy1

0xaf9f,	// (0x0008d4f8) ncimui_group_button_pane

0xe82a,	// (0x00090d83) main_sp_fs_calendar_pane_ParamLimits

0xbc2f,	// (0x0008e188) list_single_cmail_header_caption_pane_ParamLimits

0x2dd0,	// (0x00085329) aid_recal_txt_sm_pane

0xe7c9,	// (0x00090d22) mian_recal_day_pane

0x2e0a,	// (0x00085363) popup_sp_fs_cale_preview_window_ParamLimits

0x3a18,	// (0x00085f71) list_recal_day_pane

0x2eef,	// (0x00085448) list_single_recal_day_pane_ParamLimits

0x2eef,	// (0x00085448) list_single_recal_day_pane

0x3a3f,	// (0x00085f98) list_single_recal_day_pane_g1_ParamLimits

0x3a3f,	// (0x00085f98) list_single_recal_day_pane_g1

0x2f01,	// (0x0008545a) list_single_recal_day_pane_g2_ParamLimits

0x2f01,	// (0x0008545a) list_single_recal_day_pane_g2

0x2f0d,	// (0x00085466) list_single_recal_day_pane_g3_ParamLimits

0x2f0d,	// (0x00085466) list_single_recal_day_pane_g3

0xc016,	// (0x0008e56f) list_single_recal_day_pane_g4_ParamLimits

0xc016,	// (0x0008e56f) list_single_recal_day_pane_g4

0x2f19,	// (0x00085472) list_single_recal_day_pane_g5_ParamLimits

0x2f19,	// (0x00085472) list_single_recal_day_pane_g5

0x2f25,	// (0x0008547e) list_single_recal_day_pane_g6_ParamLimits

0x2f25,	// (0x0008547e) list_single_recal_day_pane_g6

0x0004,

0xfd1f,	// (0x00092278) list_single_recal_day_pane_g_ParamLimits

0xfd1f,	// (0x00092278) list_single_recal_day_pane_g

0x2f39,	// (0x00085492) list_single_recal_day_pane_t1

0x2f4b,	// (0x000854a4) list_single_recal_day_pane_t2

0x0001,

0xfd2a,	// (0x00092283) list_single_recal_day_pane_t

0xc02e,	// (0x0008e587) ncimui_query_button_pane_ParamLimits

0xc02e,	// (0x0008e587) ncimui_query_button_pane

0xc03e,	// (0x0008e597) ncimui_query_button_pane_t1_ParamLimits

0xc03e,	// (0x0008e597) ncimui_query_button_pane_t1

0x3a4b,	// (0x00085fa4) ncimui_query_button_pane_t2_ParamLimits

0x3a4b,	// (0x00085fa4) ncimui_query_button_pane_t2

0x0001,

0xfd2f,	// (0x00092288) ncimui_query_button_pane_t_ParamLimits

0xfd2f,	// (0x00092288) ncimui_query_button_pane_t

0xc051,	// (0x0008e5aa) query_button_pane_ParamLimits

0xc051,	// (0x0008e5aa) query_button_pane

0xe7c9,	// (0x00090d22) bg_button_pane_cp0028

0x3a5e,	// (0x00085fb7) query_button_pane_t1

0x7bf1,	// (0x0008a14a) main_tport_pane_ParamLimits

0xbb12,	// (0x0008e06b) bg_popup_window_pane_cp01_ParamLimits

0xbb12,	// (0x0008e06b) bg_popup_window_pane_cp01

0xbb20,	// (0x0008e079) heading_pane_cp08_ParamLimits

0xbb20,	// (0x0008e079) heading_pane_cp08

0xbb2e,	// (0x0008e087) heading_pane_cp07_ParamLimits

0xbb2e,	// (0x0008e087) heading_pane_cp07

0xbb9e,	// (0x0008e0f7) cell_tport_appsw_pane_g2

0x0002,

0xfc7b,	// (0x000921d4) cell_tport_appsw_pane_g

0x00e2,	// (0x0008263b) input_candi_list_open_g1

0xd7bd,	// (0x0008fd16) list_cale_time_pane_g6_ParamLimits

0xd7bd,	// (0x0008fd16) list_cale_time_pane_g6

0x8136,	// (0x0008a68f) aid_size_touch_calib_1_ParamLimits

0x8136,	// (0x0008a68f) aid_size_touch_calib_1

0x8142,	// (0x0008a69b) aid_size_touch_calib_2_ParamLimits

0x8142,	// (0x0008a69b) aid_size_touch_calib_2

0x8150,	// (0x0008a6a9) aid_size_touch_calib_3_ParamLimits

0x8150,	// (0x0008a6a9) aid_size_touch_calib_3

0x8160,	// (0x0008a6b9) aid_size_touch_calib_4_ParamLimits

0x8160,	// (0x0008a6b9) aid_size_touch_calib_4

0x816e,	// (0x0008a6c7) main_touch_calib_button_group_pane_ParamLimits

0x816e,	// (0x0008a6c7) main_touch_calib_button_group_pane

0x817c,	// (0x0008a6d5) main_touch_calib_pane_g1_ParamLimits

0x8188,	// (0x0008a6e1) main_touch_calib_pane_g2_ParamLimits

0x8194,	// (0x0008a6ed) main_touch_calib_pane_g3_ParamLimits

0x81a0,	// (0x0008a6f9) main_touch_calib_pane_g4_ParamLimits

0xf6c4,	// (0x00091c1d) main_touch_calib_pane_g_ParamLimits

0x81ac,	// (0x0008a705) main_touch_calib_pane_t1_ParamLimits

0x81c3,	// (0x0008a71c) main_touch_calib_pane_t2_ParamLimits

0x81dc,	// (0x0008a735) main_touch_calib_pane_t3_ParamLimits

0x81f2,	// (0x0008a74b) main_touch_calib_pane_t4_ParamLimits

0x8208,	// (0x0008a761) main_touch_calib_pane_t5_ParamLimits

0xf6cd,	// (0x00091c26) main_touch_calib_pane_t_ParamLimits

0x123f,	// (0x00083798) list_single_fp_cale_pane_g3_ParamLimits

0x123f,	// (0x00083798) list_single_fp_cale_pane_g3

0x7bd5,	// (0x0008a12e) bg_button_pane_cp012_ParamLimits

0x7bd5,	// (0x0008a12e) bg_vkb2_func_pane_cp03_ParamLimits

0xa081,	// (0x0008c5da) cell_vitu2_function_top_pane_g1_ParamLimits

0x7bd5,	// (0x0008a12e) bg_vkb2_func_pane_cp04_ParamLimits

0xaf25,	// (0x0008d47e) main_ncimui_button_group_pane_ParamLimits

0xaf25,	// (0x0008d47e) main_ncimui_button_group_pane

0xaf8d,	// (0x0008d4e6) main_ncimui_pane_t3_ParamLimits

0xaf8d,	// (0x0008d4e6) main_ncimui_pane_t3

0x3819,	// (0x00085d72) phacti_button_group_pane

0x39e6,	// (0x00085f3f) aid_size_list_single_double_ParamLimits

0xbf8c,	// (0x0008e4e5) popup_ezdial_listscroll_window_ParamLimits

0xbfae,	// (0x0008e507) popup_number_entry_window_cp01_ParamLimits

0xc05e,	// (0x0008e5b7) phacti_button_pane_ParamLimits

0xc05e,	// (0x0008e5b7) phacti_button_pane

0xe7c9,	// (0x00090d22) bg_button_pane_cp14

0x3a6c,	// (0x00085fc5) phacti_button_pane_t1

0xc06f,	// (0x0008e5c8) main_touch_calib_button_pane_ParamLimits

0xc06f,	// (0x0008e5c8) main_touch_calib_button_pane

0xef71,	// (0x000914ca) bg_button_pane_cp18_ParamLimits

0xef71,	// (0x000914ca) bg_button_pane_cp18

0x3a7a,	// (0x00085fd3) main_touch_calib_button_pane_t1_ParamLimits

0x3a7a,	// (0x00085fd3) main_touch_calib_button_pane_t1

0x3a90,	// (0x00085fe9) main_touch_calib_button_pane_t2_ParamLimits

0x3a90,	// (0x00085fe9) main_touch_calib_button_pane_t2

0x0001,

0xfd34,	// (0x0009228d) main_touch_calib_button_pane_t_ParamLimits

0xfd34,	// (0x0009228d) main_touch_calib_button_pane_t

0xe7c9,	// (0x00090d22) cell_ncimui_button_pane

0xe7c9,	// (0x00090d22) bg_button_pane_cp032

0x3aae,	// (0x00086007) cell_ncimui_button_pane_t1

0x922d,	// (0x0008b786) image3_infobar_pane_ParamLimits

0x922d,	// (0x0008b786) image3_infobar_pane

0xb35e,	// (0x0008d8b7) fs_bigclock_status_pane_ParamLimits

0xb35e,	// (0x0008d8b7) fs_bigclock_status_pane

0xb36b,	// (0x0008d8c4) main_fs_bigclock_clock_pane_ParamLimits

0xb36b,	// (0x0008d8c4) main_fs_bigclock_clock_pane

0xb387,	// (0x0008d8e0) main_fs_bigclock_indi_pane_ParamLimits

0xb387,	// (0x0008d8e0) main_fs_bigclock_indi_pane

0xb3b5,	// (0x0008d90e) main_fs_bigclock_swipe_pane_ParamLimits

0xb3b5,	// (0x0008d90e) main_fs_bigclock_swipe_pane

0xe7c9,	// (0x00090d22) main_fs_clock_dumped_data

0xb3ef,	// (0x0008d948) list_single_fs_bigclock_indicator_pane_g1_ParamLimits

0xb3ef,	// (0x0008d948) list_single_fs_bigclock_indicator_pane_g1

0xb40e,	// (0x0008d967) list_single_fs_bigclock_indicator_pane_g2_ParamLimits

0xb40e,	// (0x0008d967) list_single_fs_bigclock_indicator_pane_g2

0xb428,	// (0x0008d981) list_single_fs_bigclock_indicator_pane_g3_ParamLimits

0xb428,	// (0x0008d981) list_single_fs_bigclock_indicator_pane_g3

0xb444,	// (0x0008d99d) list_single_fs_bigclock_indicator_pane_g4_ParamLimits

0xb444,	// (0x0008d99d) list_single_fs_bigclock_indicator_pane_g4

0x0004,

0xfbd5,	// (0x0009212e) list_single_fs_bigclock_indicator_pane_g_ParamLimits

0xfbd5,	// (0x0009212e) list_single_fs_bigclock_indicator_pane_g

0xb473,	// (0x0008d9cc) list_single_fs_bigclock_indicator_pane_t1_ParamLimits

0xb473,	// (0x0008d9cc) list_single_fs_bigclock_indicator_pane_t1

0xb49b,	// (0x0008d9f4) list_single_fs_bigclock_indicator_pane_t2_ParamLimits

0xb49b,	// (0x0008d9f4) list_single_fs_bigclock_indicator_pane_t2

0xb4c3,	// (0x0008da1c) list_single_fs_bigclock_indicator_pane_t3_ParamLimits

0xb4c3,	// (0x0008da1c) list_single_fs_bigclock_indicator_pane_t3

0xb4eb,	// (0x0008da44) list_single_fs_bigclock_indicator_pane_t4_ParamLimits

0xb4eb,	// (0x0008da44) list_single_fs_bigclock_indicator_pane_t4

0x0004,

0xfbe0,	// (0x00092139) list_single_fs_bigclock_indicator_pane_t_ParamLimits

0xfbe0,	// (0x00092139) list_single_fs_bigclock_indicator_pane_t

0x3abc,	// (0x00086015) image3_infobar_fav_pane_ParamLimits

0x3abc,	// (0x00086015) image3_infobar_fav_pane

0x3acc,	// (0x00086025) image3_infobar_loc_pane_ParamLimits

0x3acc,	// (0x00086025) image3_infobar_loc_pane

0x3ae2,	// (0x0008603b) image3_infobar_time_pane_ParamLimits

0x3ae2,	// (0x0008603b) image3_infobar_time_pane

0xd3a8,	// (0x0008f901) image3_infobar_time_pane_g1

0x3af2,	// (0x0008604b) image3_infobar_time_pane_t1

0xd3a8,	// (0x0008f901) image3_infobar_loc_pane_g1

0x3b00,	// (0x00086059) image3_infobar_loc_pane_g2

0x0001,

0xfd39,	// (0x00092292) image3_infobar_loc_pane_g

0x3b08,	// (0x00086061) image3_infobar_loc_pane_t1

0xd3a8,	// (0x0008f901) image3_infobar_fav_pane_g1

0x3b16,	// (0x0008606f) image3_infobar_fav_pane_g2

0x0001,

0xfd3e,	// (0x00092297) image3_infobar_fav_pane_g

0x3b1e,	// (0x00086077) fs_bigclock_status_battery_pane

0x3b27,	// (0x00086080) fs_bigclock_status_signal_pane

0x3b30,	// (0x00086089) fs_bigclock_status_title_pane

0x3b39,	// (0x00086092) fs_bigclock_status_signal_pane_g1

0x3b42,	// (0x0008609b) fs_bigclock_status_signal_pane_g2

0x0001,

0xfd43,	// (0x0009229c) fs_bigclock_status_signal_pane_g

0x3b4a,	// (0x000860a3) fs_bigclock_status_battery_pane_g1

0x3b53,	// (0x000860ac) fs_bigclock_status_battery_pane_g2

0x0001,

0xfd48,	// (0x000922a1) fs_bigclock_status_battery_pane_g

0x3b5b,	// (0x000860b4) fs_bigclock_status_title_pane_t1

0xc07f,	// (0x0008e5d8) main_fs_bigclock_clock_pane_g1

0xc07f,	// (0x0008e5d8) main_fs_bigclock_clock_pane_g2

0xc08e,	// (0x0008e5e7) main_fs_bigclock_clock_pane_g3

0xc08e,	// (0x0008e5e7) main_fs_bigclock_clock_pane_g4

0x0003,

0xfd4d,	// (0x000922a6) main_fs_bigclock_clock_pane_g

0xc09e,	// (0x0008e5f7) main_fs_bigclock_clock_pane_t1

0xc0b3,	// (0x0008e60c) main_fs_bigclock_clock_pane_t2

0x0001,

0xfd56,	// (0x000922af) main_fs_bigclock_clock_pane_t

0x3b69,	// (0x000860c2) list_single_fs_bigclock_indicator_pane_ParamLimits

0x3b69,	// (0x000860c2) list_single_fs_bigclock_indicator_pane

0x3b7a,	// (0x000860d3) list_single_fs_bigclock_pane_ParamLimits

0x3b7a,	// (0x000860d3) list_single_fs_bigclock_pane

0x3ba0,	// (0x000860f9) main_fs_bigclock_indicator_pane_t1

0x3baf,	// (0x00086108) list_single_fs_bigclock_pane_g1

0x3bb7,	// (0x00086110) list_single_fs_bigclock_pane_t1

0xd3a8,	// (0x0008f901) main_fs_bigclock_swipe_pane_g1

0x3bfa,	// (0x00086153) main_fs_bigclock_swipe_pane_g2

0x0001,

0xfd67,	// (0x000922c0) main_fs_bigclock_swipe_pane_g

0x3c02,	// (0x0008615b) main_fs_bigclock_swipe_pane_t1_ParamLimits

0x3c02,	// (0x0008615b) main_fs_bigclock_swipe_pane_t1

0x6cee,	// (0x00089247) call_type_pane_ParamLimits

0xe7c9,	// (0x00090d22) main_btmg_pane

0x2e55,	// (0x000853ae) list_single_cale_mrui_row_pane_g2_ParamLimits

0x2e55,	// (0x000853ae) list_single_cale_mrui_row_pane_g2

0x0002,

0xfcda,	// (0x00092233) list_single_cale_mrui_row_pane_g_ParamLimits

0xfcda,	// (0x00092233) list_single_cale_mrui_row_pane_g

0x2edd,	// (0x00085436) list_recal_vselct_arw_lo_pane

0x3a37,	// (0x00085f90) list_recal_vselct_arw_up_pane

0x2ee5,	// (0x0008543e) list_recal_vselct_pane

0xc10a,	// (0x0008e663) btmg_button_pane

0xc116,	// (0x0008e66f) main_btmg_pane_g1

0xe7c9,	// (0x00090d22) bg_button_pane_cp044

0x3c2e,	// (0x00086187) btmg_button_pane_t1

0x0a2b,	// (0x00082f84) aid_listscroll_gen

0xe82a,	// (0x00090d83) main_cntbar_detail_pane

0x2c57,	// (0x000851b0) list_cmail_folder_pane

0xe7bd,	// (0x00090d16) sp_fs_scroll_pane_cp03_ParamLimits

0xc11e,	// (0x0008e677) list_single_fs_dyc_pane_cp01_ParamLimits

0xc11e,	// (0x0008e677) list_single_fs_dyc_pane_cp01

0x3c3c,	// (0x00086195) aid_size_cmail_indent

0x2f5d,	// (0x000854b6) list_single_dyc_row_pane_cp01

0xc15b,	// (0x0008e6b4) cntbar_detail_list_pane_ParamLimits

0xc15b,	// (0x0008e6b4) cntbar_detail_list_pane

0xc19b,	// (0x0008e6f4) main_cntbar_detail_cont_pane_ParamLimits

0xc19b,	// (0x0008e6f4) main_cntbar_detail_cont_pane

0x6ce2,	// (0x0008923b) scroll_pane_cp032_ParamLimits

0x6ce2,	// (0x0008923b) scroll_pane_cp032

0xc1a7,	// (0x0008e700) cntbar_detail_list_event_pane_ParamLimits

0xc1a7,	// (0x0008e700) cntbar_detail_list_event_pane

0xc169,	// (0x0008e6c2) cntbar_detail_list_shct_pane

0xd61f,	// (0x0008fb78) aid_list_gen

0x3c45,	// (0x0008619e) aid_scroll

0x3c4e,	// (0x000861a7) aid_size_touch_scroll_bar

0xc1b7,	// (0x0008e710) aid_list_double

0xc1c0,	// (0x0008e719) aid_list_single

0xc1c0,	// (0x0008e719) aid_list_single_lg

0xc1c9,	// (0x0008e722) aid_list_z_g_a_sm

0xc1d1,	// (0x0008e72a) aid_list_z_g_d

0xc1d9,	// (0x0008e732) aid_txt_z_prm

0xc1e7,	// (0x0008e740) aid_txt_z_prm_cp01

0xc1f5,	// (0x0008e74e) aid_txt_z_sec

0xc203,	// (0x0008e75c) main_cntbar_detail_cont_pane_g1_ParamLimits

0xc203,	// (0x0008e75c) main_cntbar_detail_cont_pane_g1

0xc210,	// (0x0008e769) main_cntbar_detail_cont_pane_g2_ParamLimits

0xc210,	// (0x0008e769) main_cntbar_detail_cont_pane_g2

0x0001,

0xfd6c,	// (0x000922c5) main_cntbar_detail_cont_pane_g_ParamLimits

0xfd6c,	// (0x000922c5) main_cntbar_detail_cont_pane_g

0x3c57,	// (0x000861b0) main_cntbar_detail_cont_pane_t1

0x3c65,	// (0x000861be) main_cntbar_detail_cont_pane_t2

0x3c73,	// (0x000861cc) main_cntbar_detail_cont_pane_t3

0x0002,

0xfd71,	// (0x000922ca) main_cntbar_detail_cont_pane_t

0xc21c,	// (0x0008e775) cell_cntbar_detail_list_shct_pane_ParamLimits

0xc21c,	// (0x0008e775) cell_cntbar_detail_list_shct_pane

0x3c81,	// (0x000861da) cntbar_detail_list_shct_pane_g1

0x2f66,	// (0x000854bf) cntbar_detail_list_shct_pane_g2

0x0001,

0xfd78,	// (0x000922d1) cntbar_detail_list_shct_pane_g

0xc230,	// (0x0008e789) cntbar_detail_list_event_pane_g1_ParamLimits

0xc230,	// (0x0008e789) cntbar_detail_list_event_pane_g1

0xc23c,	// (0x0008e795) cntbar_detail_list_event_pane_g2_ParamLimits

0xc23c,	// (0x0008e795) cntbar_detail_list_event_pane_g2

0x0005,

0xfd7d,	// (0x000922d6) cntbar_detail_list_event_pane_g_ParamLimits

0xfd7d,	// (0x000922d6) cntbar_detail_list_event_pane_g

0xc2aa,	// (0x0008e803) cntbar_detail_list_event_pane_t1_ParamLimits

0xc2aa,	// (0x0008e803) cntbar_detail_list_event_pane_t1

0xc2bf,	// (0x0008e818) cntbar_detail_list_event_pane_t2_ParamLimits

0xc2bf,	// (0x0008e818) cntbar_detail_list_event_pane_t2

0x0002,

0xfd8a,	// (0x000922e3) cntbar_detail_list_event_pane_t_ParamLimits

0xfd8a,	// (0x000922e3) cntbar_detail_list_event_pane_t

0xd3a8,	// (0x0008f901) cell_cntbar_detail_list_shct_pane_g1

0x7086,	// (0x000895df) navi_pane_mv_g3

0xe82a,	// (0x00090d83) main_cntbar_detail_pane_ParamLimits

0xe7c9,	// (0x00090d22) main_notif_wgt_pane

0x8eaf,	// (0x0008b408) aid_tch_main_mp4_pane_g4

0x9118,	// (0x0008b671) popup_slider_window_cp02

0x2ed3,	// (0x0008542c) list_recal_day_event_pane

0xc13b,	// (0x0008e694) cntbar_detail_btn_pane_ParamLimits

0xc13b,	// (0x0008e694) cntbar_detail_btn_pane

0xc14b,	// (0x0008e6a4) cntbar_detail_btn_pane_cp01_ParamLimits

0xc14b,	// (0x0008e6a4) cntbar_detail_btn_pane_cp01

0xc169,	// (0x0008e6c2) cntbar_detail_list_shct_pane_ParamLimits

0xc175,	// (0x0008e6ce) cntbar_detail_pane_g1_ParamLimits

0xc175,	// (0x0008e6ce) cntbar_detail_pane_g1

0xc185,	// (0x0008e6de) cntbar_detail_pane_t1_ParamLimits

0xc185,	// (0x0008e6de) cntbar_detail_pane_t1

0xc248,	// (0x0008e7a1) cntbar_detail_list_event_pane_g3_ParamLimits

0xc248,	// (0x0008e7a1) cntbar_detail_list_event_pane_g3

0xc260,	// (0x0008e7b9) cntbar_detail_list_event_pane_g4_ParamLimits

0xc260,	// (0x0008e7b9) cntbar_detail_list_event_pane_g4

0xc278,	// (0x0008e7d1) cntbar_detail_list_event_pane_g5_ParamLimits

0xc278,	// (0x0008e7d1) cntbar_detail_list_event_pane_g5

0xc290,	// (0x0008e7e9) cntbar_detail_list_event_pane_g6_ParamLimits

0xc290,	// (0x0008e7e9) cntbar_detail_list_event_pane_g6

0xc2d4,	// (0x0008e82d) cntbar_detail_list_event_pane_t3_ParamLimits

0xc2d4,	// (0x0008e82d) cntbar_detail_list_event_pane_t3

0xc2e6,	// (0x0008e83f) popup_notif_wgt_window_ParamLimits

0xc2e6,	// (0x0008e83f) popup_notif_wgt_window

0xc2f6,	// (0x0008e84f) popup_submenu_window_cp01_ParamLimits

0xc2f6,	// (0x0008e84f) popup_submenu_window_cp01

0xd372,	// (0x0008f8cb) bg_popup_window_pane_cp10

0x2f6f,	// (0x000854c8) listscroll_notif_wgt_pane

0x2f81,	// (0x000854da) list_notif_wgt_window

0x2f8a,	// (0x000854e3) scroll_pane_cp033

0xc306,	// (0x0008e85f) list_notif_wgt_row_pane_ParamLimits

0xc306,	// (0x0008e85f) list_notif_wgt_row_pane

0x2f93,	// (0x000854ec) aid_size_list_notif_wgt_del

0x2fa0,	// (0x000854f9) list_notif_wgt_row_pane_g1

0x2fac,	// (0x00085505) list_notif_wgt_row_pane_g2

0x2fbb,	// (0x00085514) list_notif_wgt_row_pane_g3

0x0002,

0xfd91,	// (0x000922ea) list_notif_wgt_row_pane_g

0x2fc8,	// (0x00085521) list_notif_wgt_row_pane_t1

0x2fde,	// (0x00085537) list_notif_wgt_row_pane_t2

0x2ff0,	// (0x00085549) list_notif_wgt_row_pane_t3

0x0002,

0xfd98,	// (0x000922f1) list_notif_wgt_row_pane_t

0x1cd8,	// (0x00084231) list_recal_day_event_pane_g1

0x3002,	// (0x0008555b) list_recal_day_event_pane_t1

0xe7c9,	// (0x00090d22) bg_button_pane_cp045

0xc31a,	// (0x0008e873) cntbar_detail_btn_pane_t1

0xe781,	// (0x00090cda) main_callh_pane_ParamLimits

0xe781,	// (0x00090cda) main_callh_pane

0xe7c9,	// (0x00090d22) main_coverflow0_pane

0xe7c9,	// (0x00090d22) main_wgtman_pane

0xb3cd,	// (0x0008d926) main_fs_bigclock_unlock_btn_pane_ParamLimits

0xb3cd,	// (0x0008d926) main_fs_bigclock_unlock_btn_pane

0xbb96,	// (0x0008e0ef) bg_button_pane_cp16

0xbba6,	// (0x0008e0ff) cell_tport_appsw_pane_g3

0xc328,	// (0x0008e881) cf0_flow_pane_ParamLimits

0xc328,	// (0x0008e881) cf0_flow_pane

0x3011,	// (0x0008556a) listscroll_cf0_pane

0x301c,	// (0x00085575) main_cf0_pane_g1

0xc337,	// (0x0008e890) main_cf0_pane_t1_ParamLimits

0xc337,	// (0x0008e890) main_cf0_pane_t1

0xc34b,	// (0x0008e8a4) main_cf0_pane_t2_ParamLimits

0xc34b,	// (0x0008e8a4) main_cf0_pane_t2

0x0001,

0xfda4,	// (0x000922fd) main_cf0_pane_t_ParamLimits

0xfda4,	// (0x000922fd) main_cf0_pane_t

0x302e,	// (0x00085587) scroll_pane_cp11

0xc35f,	// (0x0008e8b8) cf0_flow_pane_g1

0xc367,	// (0x0008e8c0) cf0_flow_pane_g2

0x0001,

0xfda9,	// (0x00092302) cf0_flow_pane_g

0xc36f,	// (0x0008e8c8) cf0_flow_pane_t1

0xe7c9,	// (0x00090d22) main_call6_pane

0xe7c9,	// (0x00090d22) main_calllock_pane

0xc37d,	// (0x0008e8d6) call6_btn_grp_pane_ParamLimits

0xc37d,	// (0x0008e8d6) call6_btn_grp_pane

0xc38a,	// (0x0008e8e3) call6_pane_g1_ParamLimits

0xc38a,	// (0x0008e8e3) call6_pane_g1

0xc39a,	// (0x0008e8f3) popup_call6_1st_window_ParamLimits

0xc39a,	// (0x0008e8f3) popup_call6_1st_window

0xc3aa,	// (0x0008e903) popup_call6_2nd_window_ParamLimits

0xc3aa,	// (0x0008e903) popup_call6_2nd_window

0xc3ba,	// (0x0008e913) cell_call6_btn_pane_ParamLimits

0xc3ba,	// (0x0008e913) cell_call6_btn_pane

0xd372,	// (0x0008f8cb) bg_popup_call2_in_pane_cp03

0x3039,	// (0x00085592) popup_call6_1st_window_g1

0x3041,	// (0x0008559a) popup_call6_1st_window_g2

0x3049,	// (0x000855a2) popup_call6_1st_window_g3

0x0002,

0xfdae,	// (0x00092307) popup_call6_1st_window_g

0x3051,	// (0x000855aa) popup_call6_1st_window_t1

0x3060,	// (0x000855b9) popup_call6_1st_window_t2

0x3070,	// (0x000855c9) popup_call6_1st_window_t3

0x0002,

0xfdb5,	// (0x0009230e) popup_call6_1st_window_t

0xd372,	// (0x0008f8cb) bg_popup_call2_in_pane_cp04

0x3080,	// (0x000855d9) popup_call6_2nd_window_g1

0x3088,	// (0x000855e1) popup_call6_2nd_window_g2

0x3090,	// (0x000855e9) popup_call6_2nd_window_g3

0x0002,

0xfdbc,	// (0x00092315) popup_call6_2nd_window_g

0x3098,	// (0x000855f1) popup_call6_2nd_window_t1

0x4e88,	// (0x000873e1) bg_button_pane_cp15

0xc3cb,	// (0x0008e924) cell_call6_btn_pane_g1

0xc3d4,	// (0x0008e92d) cell_call6_btn_pane_t1

0xc3e3,	// (0x0008e93c) listscroll_wgtman_pane_ParamLimits

0xc3e3,	// (0x0008e93c) listscroll_wgtman_pane

0xc3ff,	// (0x0008e958) wgtman_btn_pane_ParamLimits

0xc3ff,	// (0x0008e958) wgtman_btn_pane

0xdbae,	// (0x00090107) aid_scroll_copy1

0x30b0,	// (0x00085609) list_wgtman_pane

0xc434,	// (0x0008e98d) wgtman_btn_pane_g1_ParamLimits

0xc434,	// (0x0008e98d) wgtman_btn_pane_g1

0xc45c,	// (0x0008e9b5) wgtman_btn_pane_t1_ParamLimits

0xc45c,	// (0x0008e9b5) wgtman_btn_pane_t1

0x30ba,	// (0x00085613) wgtman_btn_pane_t2_ParamLimits

0x30ba,	// (0x00085613) wgtman_btn_pane_t2

0x0001,

0xfdc3,	// (0x0009231c) wgtman_btn_pane_t_ParamLimits

0xfdc3,	// (0x0009231c) wgtman_btn_pane_t

0xc493,	// (0x0008e9ec) listrow_wgtman_pane_ParamLimits

0xc493,	// (0x0008e9ec) listrow_wgtman_pane

0xc4aa,	// (0x0008ea03) listrow_wgtman_pane_g1

0xc4b7,	// (0x0008ea10) listrow_wgtman_pane_g2

0x0001,

0xfdc8,	// (0x00092321) listrow_wgtman_pane_g

0xc4d5,	// (0x0008ea2e) listrow_wgtman_pane_t1

0xc4ed,	// (0x0008ea46) listrow_wgtman_pane_t2

0x0001,

0xfdcd,	// (0x00092326) listrow_wgtman_pane_t

0xc513,	// (0x0008ea6c) wait_bar_pane_cp09

0x30d1,	// (0x0008562a) main_calllock_btn_pane

0x30db,	// (0x00085634) main_calllock_pane_g1

0xe7c9,	// (0x00090d22) bg_button_pane_cp17

0x30a7,	// (0x00085600) main_calllock_btn_pane_g1

0x30e7,	// (0x00085640) main_calllock_btn_pane_t1

0xe7c9,	// (0x00090d22) main_dialer3_pane

0xe7c9,	// (0x00090d22) main_fmrd2_pane

0xd3a8,	// (0x0008f901) main_fs_bigclock_unlock_btn_pane_g1

0xc52d,	// (0x0008ea86) main_fs_bigclock_unlock_btn_pane_t1

0xc53b,	// (0x0008ea94) area_fmrd2_info_pane_ParamLimits

0xc53b,	// (0x0008ea94) area_fmrd2_info_pane

0xc547,	// (0x0008eaa0) area_fmrd2_visual_pane_ParamLimits

0xc547,	// (0x0008eaa0) area_fmrd2_visual_pane

0xc555,	// (0x0008eaae) fmrd2_indi_pane_ParamLimits

0xc555,	// (0x0008eaae) fmrd2_indi_pane

0xc562,	// (0x0008eabb) area_fmrd2_visual_pane_g1

0xc56a,	// (0x0008eac3) area_fmrd2_visual_pane_t1

0xc57a,	// (0x0008ead3) area_fmrd2_visual_pane_t2

0xc58a,	// (0x0008eae3) area_fmrd2_visual_pane_t3

0x0002,

0xfdd7,	// (0x00092330) area_fmrd2_visual_pane_t

0xc59a,	// (0x0008eaf3) area_fmrd2_info_pane_g1

0xc5a2,	// (0x0008eafb) area_fmrd2_info_pane_t1

0xc5b2,	// (0x0008eb0b) area_fmrd2_info_pane_t2

0xc5c2,	// (0x0008eb1b) area_fmrd2_info_pane_t3

0xc5d2,	// (0x0008eb2b) area_fmrd2_info_pane_t4

0x0003,

0xfdde,	// (0x00092337) area_fmrd2_info_pane_t

0xc5e2,	// (0x0008eb3b) fmrd2_indi_pane_t1

0xc5f2,	// (0x0008eb4b) fmrd2_indi_pane_t2

0xc602,	// (0x0008eb5b) fmrd2_indi_pane_t3

0x0002,

0xfde7,	// (0x00092340) fmrd2_indi_pane_t

0xb455,	// (0x0008d9ae) list_single_fs_bigclock_indicator_pane_g5_ParamLimits

0xb455,	// (0x0008d9ae) list_single_fs_bigclock_indicator_pane_g5

0xb50a,	// (0x0008da63) list_single_fs_bigclock_indicator_pane_t5_ParamLimits

0xb50a,	// (0x0008da63) list_single_fs_bigclock_indicator_pane_t5

0xbd01,	// (0x0008e25a) aid_cell_bcale_month_pane_ParamLimits

0xbd01,	// (0x0008e25a) aid_cell_bcale_month_pane

0xbd1f,	// (0x0008e278) bcale_month_pane_ParamLimits

0xbd1f,	// (0x0008e278) bcale_month_pane

0xbd3d,	// (0x0008e296) bcale_preview_pane_ParamLimits

0xbd3d,	// (0x0008e296) bcale_preview_pane

0x3bb7,	// (0x00086110) list_single_fs_bigclock_pane_t1_ParamLimits

0x3bd6,	// (0x0008612f) list_single_fs_bigclock_pane_t2_ParamLimits

0x3bd6,	// (0x0008612f) list_single_fs_bigclock_pane_t2

0x0001,

0xfd62,	// (0x000922bb) list_single_fs_bigclock_pane_t_ParamLimits

0xfd62,	// (0x000922bb) list_single_fs_bigclock_pane_t

0xc525,	// (0x0008ea7e) main_fs_bigclock_unlock_btn_pane_g2

0x0001,

0xfdd2,	// (0x0009232b) main_fs_bigclock_unlock_btn_pane_g

0xc612,	// (0x0008eb6b) aid_dia3_key_size_ParamLimits

0xc612,	// (0x0008eb6b) aid_dia3_key_size

0xc61e,	// (0x0008eb77) aid_dia3_listrow_size_ParamLimits

0xc61e,	// (0x0008eb77) aid_dia3_listrow_size

0xc62e,	// (0x0008eb87) dia3_keypad_fun_pane_ParamLimits

0xc62e,	// (0x0008eb87) dia3_keypad_fun_pane

0xc63e,	// (0x0008eb97) dia3_keypad_num_pane_ParamLimits

0xc63e,	// (0x0008eb97) dia3_keypad_num_pane

0xc64e,	// (0x0008eba7) dia3_listscroll_pane_ParamLimits

0xc64e,	// (0x0008eba7) dia3_listscroll_pane

0xc65c,	// (0x0008ebb5) dia3_numentry_pane_ParamLimits

0xc65c,	// (0x0008ebb5) dia3_numentry_pane

0x30f6,	// (0x0008564f) dia3_list_pane

0xc66a,	// (0x0008ebc3) scroll_pane_cp12

0xe7c9,	// (0x00090d22) bg_dia3_numentry_pane

0xc675,	// (0x0008ebce) dia3_numentry_pane_t1

0xc684,	// (0x0008ebdd) cell_dia3_key_num_pane

0xc68c,	// (0x0008ebe5) cell_dia3_key0_fun_pane_ParamLimits

0xc68c,	// (0x0008ebe5) cell_dia3_key0_fun_pane

0xc699,	// (0x0008ebf2) cell_dia3_key1_fun_pane_ParamLimits

0xc699,	// (0x0008ebf2) cell_dia3_key1_fun_pane

0xc6a6,	// (0x0008ebff) dia3_listrow_pane

0x2659,	// (0x00084bb2) bg_dia3_numentry_pane_g1

0xe7c9,	// (0x00090d22) bg_button_pane_cp21

0xc6b3,	// (0x0008ec0c) cell_dia3_key_num_pane_t1

0xc6c1,	// (0x0008ec1a) cell_dia3_key_num_pane_t2

0xc6d0,	// (0x0008ec29) cell_dia3_key_num_pane_t3

0xc6df,	// (0x0008ec38) cell_dia3_key_num_pane_t4

0x0003,

0xfdee,	// (0x00092347) cell_dia3_key_num_pane_t

0xe7c9,	// (0x00090d22) bg_button_pane_cp19

0xc6ee,	// (0x0008ec47) cell_dia3_key0_fun_pane_g1

0xe7c9,	// (0x00090d22) bg_button_pane_cp20

0xc6f6,	// (0x0008ec4f) cell_dia3_key1_fun_pane_g1

0xc6fe,	// (0x0008ec57) area_left_week_number_pane

0xc711,	// (0x0008ec6a) area_top_day_name_pane

0xc71f,	// (0x0008ec78) frame_month_view_pane

0x3101,	// (0x0008565a) grid_month_view_pane

0xc734,	// (0x0008ec8d) cell_top_day_name_pane_ParamLimits

0xc734,	// (0x0008ec8d) cell_top_day_name_pane

0xc750,	// (0x0008eca9) cell_area_left_week_number_pane_ParamLimits

0xc750,	// (0x0008eca9) cell_area_left_week_number_pane

0xc771,	// (0x0008ecca) cell_month_view_pane_ParamLimits

0xc771,	// (0x0008ecca) cell_month_view_pane

0x310f,	// (0x00085668) frm_month_g1

0xc79d,	// (0x0008ecf6) frm_month_g2

0xc7ae,	// (0x0008ed07) frm_month_g3

0xc7bf,	// (0x0008ed18) frm_month_g4

0xc7d0,	// (0x0008ed29) frm_month_g5

0xc7e1,	// (0x0008ed3a) frm_month_g6

0xc7f4,	// (0x0008ed4d) frm_month_g7

0x311c,	// (0x00085675) frm_month_g8

0xc807,	// (0x0008ed60) frm_month_g9

0xc814,	// (0x0008ed6d) frm_month_g10

0xc821,	// (0x0008ed7a) frm_month_g11

0xc82e,	// (0x0008ed87) frm_month_g12

0xc83b,	// (0x0008ed94) frm_month_g13

0xc84a,	// (0x0008eda3) frm_month_g14

0xc859,	// (0x0008edb2) frm_month_g15

0xc868,	// (0x0008edc1) frm_month_g16

0x000f,

0xfdf7,	// (0x00092350) frm_month_g

0x3129,	// (0x00085682) cell_top_day_name_pane_t1

0xc877,	// (0x0008edd0) cell_area_left_week_number_pane_g1

0xc886,	// (0x0008eddf) cell_area_left_week_number_pane_t1

0xeeff,	// (0x00091458) cell_month_view_pane_g1

0xc89c,	// (0x0008edf5) cell_month_view_pane_t1

0xe7c9,	// (0x00090d22) main_fps_pane

0x2a71,	// (0x00084fca) cmail_ddmenu_btn02_pane_cp1_ParamLimits

0x2a71,	// (0x00084fca) cmail_ddmenu_btn02_pane_cp1

0x2a8d,	// (0x00084fe6) cmail_ddmenu_btn02_pane_cp2_ParamLimits

0x2a8d,	// (0x00084fe6) cmail_ddmenu_btn02_pane_cp2

0xbfe6,	// (0x0008e53f) cmail_ddmenu_btn02_pane_g2_ParamLimits

0xbfe6,	// (0x0008e53f) cmail_ddmenu_btn02_pane_g2

0x0001,

0xfd15,	// (0x0009226e) cmail_ddmenu_btn02_pane_g_ParamLimits

0xfd15,	// (0x0009226e) cmail_ddmenu_btn02_pane_g

0xc004,	// (0x0008e55d) cmail_ddmenu_btn02_pane_t2_ParamLimits

0xc004,	// (0x0008e55d) cmail_ddmenu_btn02_pane_t2

0x0001,

0xfd1a,	// (0x00092273) cmail_ddmenu_btn02_pane_t_ParamLimits

0xfd1a,	// (0x00092273) cmail_ddmenu_btn02_pane_t

0xc8b2,	// (0x0008ee0b) fps_text_pane_ParamLimits

0xc8b2,	// (0x0008ee0b) fps_text_pane

0xc8bf,	// (0x0008ee18) main_fps_pane_g1_ParamLimits

0xc8bf,	// (0x0008ee18) main_fps_pane_g1

0xc8cb,	// (0x0008ee24) wait_bar_pane_cp010_ParamLimits

0xc8cb,	// (0x0008ee24) wait_bar_pane_cp010

0xc8d7,	// (0x0008ee30) fps_text_pane_t1_ParamLimits

0xc8d7,	// (0x0008ee30) fps_text_pane_t1

0x95d5,	// (0x0008bb2e) cam4_image_uncrop_pane_g1

0x95de,	// (0x0008bb37) cam4_image_uncrop_pane_g2

0x95e7,	// (0x0008bb40) cam4_image_uncrop_pane_g3

0x95f0,	// (0x0008bb49) cam4_image_uncrop_pane_g4

0x0003,

0xf860,	// (0x00091db9) cam4_image_uncrop_pane_g

0xc6a6,	// (0x0008ebff) dia3_listrow_pane_ParamLimits

0xe7c9,	// (0x00090d22) main_phob2_pane

0xbb78,	// (0x0008e0d1) cell_tport_appsw_pane_cp02_ParamLimits

0xbb78,	// (0x0008e0d1) cell_tport_appsw_pane_cp02

0xbb87,	// (0x0008e0e0) cell_tport_appsw_pane_cp03_ParamLimits

0xbb87,	// (0x0008e0e0) cell_tport_appsw_pane_cp03

0xe7c9,	// (0x00090d22) phob2_contact_card_pane

0xe7c9,	// (0x00090d22) phob2_listscroll_pane

0x313c,	// (0x00085695) phob2_list_pane

0x3144,	// (0x0008569d) scroll_pane_cp034

0xc8f0,	// (0x0008ee49) phob2_cc_data_pane_ParamLimits

0xc8f0,	// (0x0008ee49) phob2_cc_data_pane

0xc907,	// (0x0008ee60) phob2_cc_listscroll_pane_ParamLimits

0xc907,	// (0x0008ee60) phob2_cc_listscroll_pane

0xc493,	// (0x0008e9ec) list_double_large_graphic_phob2_pane_ParamLimits

0xc493,	// (0x0008e9ec) list_double_large_graphic_phob2_pane

0xc923,	// (0x0008ee7c) list_double_large_graphic_phob2_pane_g1_ParamLimits

0xc923,	// (0x0008ee7c) list_double_large_graphic_phob2_pane_g1

0xc930,	// (0x0008ee89) list_double_large_graphic_phob2_pane_g2_ParamLimits

0xc930,	// (0x0008ee89) list_double_large_graphic_phob2_pane_g2

0x0003,

0xfe18,	// (0x00092371) list_double_large_graphic_phob2_pane_g_ParamLimits

0xfe18,	// (0x00092371) list_double_large_graphic_phob2_pane_g

0xc956,	// (0x0008eeaf) list_double_large_graphic_phob2_pane_t1_ParamLimits

0xc956,	// (0x0008eeaf) list_double_large_graphic_phob2_pane_t1

0xc96b,	// (0x0008eec4) list_double_large_graphic_phob2_pane_t2_ParamLimits

0xc96b,	// (0x0008eec4) list_double_large_graphic_phob2_pane_t2

0x0001,

0xfe21,	// (0x0009237a) list_double_large_graphic_phob2_pane_t_ParamLimits

0xfe21,	// (0x0009237a) list_double_large_graphic_phob2_pane_t

0xe7c9,	// (0x00090d22) list_highlight_pane_cp024

0xc980,	// (0x0008eed9) phob2_cc_button_pane

0xc988,	// (0x0008eee1) phob2_cc_data_pane_g1_ParamLimits

0xc988,	// (0x0008eee1) phob2_cc_data_pane_g1

0xc99d,	// (0x0008eef6) phob2_cc_data_pane_g2_ParamLimits

0xc99d,	// (0x0008eef6) phob2_cc_data_pane_g2

0x0001,

0xfe26,	// (0x0009237f) phob2_cc_data_pane_g_ParamLimits

0xfe26,	// (0x0009237f) phob2_cc_data_pane_g

0xc9ad,	// (0x0008ef06) phob2_cc_data_pane_t1_ParamLimits

0xc9ad,	// (0x0008ef06) phob2_cc_data_pane_t1

0xc9c6,	// (0x0008ef1f) phob2_cc_data_pane_t2_ParamLimits

0xc9c6,	// (0x0008ef1f) phob2_cc_data_pane_t2

0xc9df,	// (0x0008ef38) phob2_cc_data_pane_t3_ParamLimits

0xc9df,	// (0x0008ef38) phob2_cc_data_pane_t3

0x0002,

0xfe2b,	// (0x00092384) phob2_cc_data_pane_t_ParamLimits

0xfe2b,	// (0x00092384) phob2_cc_data_pane_t

0x314c,	// (0x000856a5) phob2_cc_list_pane_ParamLimits

0x314c,	// (0x000856a5) phob2_cc_list_pane

0x1d81,	// (0x000842da) scroll_pane_cp035_ParamLimits

0x1d81,	// (0x000842da) scroll_pane_cp035

0xe82a,	// (0x00090d83) bg_button_pane_cp033

0x3158,	// (0x000856b1) phob2_cc_button_pane_g1

0x3164,	// (0x000856bd) phob2_cc_button_pane_t1

0x3179,	// (0x000856d2) phob2_cc_button_pane_t2

0x0001,

0xfe32,	// (0x0009238b) phob2_cc_button_pane_t

0xc9f8,	// (0x0008ef51) list_double_large_graphic_phob2_cc_pane_ParamLimits

0xc9f8,	// (0x0008ef51) list_double_large_graphic_phob2_cc_pane

0xca47,	// (0x0008efa0) list_double_large_graphic_phob2_cc_pane_g1_ParamLimits

0xca47,	// (0x0008efa0) list_double_large_graphic_phob2_cc_pane_g1

0xca58,	// (0x0008efb1) list_double_large_graphic_phob2_cc_pane_g2_ParamLimits

0xca58,	// (0x0008efb1) list_double_large_graphic_phob2_cc_pane_g2

0xca67,	// (0x0008efc0) list_double_large_graphic_phob2_cc_pane_g3_ParamLimits

0xca67,	// (0x0008efc0) list_double_large_graphic_phob2_cc_pane_g3

0xca76,	// (0x0008efcf) list_double_large_graphic_phob2_cc_pane_g4_ParamLimits

0xca76,	// (0x0008efcf) list_double_large_graphic_phob2_cc_pane_g4

0xca87,	// (0x0008efe0) list_double_large_graphic_phob2_cc_pane_g5_ParamLimits

0xca87,	// (0x0008efe0) list_double_large_graphic_phob2_cc_pane_g5

0x0004,

0xfe37,	// (0x00092390) list_double_large_graphic_phob2_cc_pane_g_ParamLimits

0xfe37,	// (0x00092390) list_double_large_graphic_phob2_cc_pane_g

0xca96,	// (0x0008efef) list_double_large_graphic_phob2_cc_pane_t1_ParamLimits

0xca96,	// (0x0008efef) list_double_large_graphic_phob2_cc_pane_t1

0xcabf,	// (0x0008f018) list_double_large_graphic_phob2_cc_pane_t2_ParamLimits

0xcabf,	// (0x0008f018) list_double_large_graphic_phob2_cc_pane_t2

0x0001,

0xfe42,	// (0x0009239b) list_double_large_graphic_phob2_cc_pane_t_ParamLimits

0xfe42,	// (0x0009239b) list_double_large_graphic_phob2_cc_pane_t

0x318b,	// (0x000856e4) list_highlight_pane_cp025_ParamLimits

0x318b,	// (0x000856e4) list_highlight_pane_cp025

0xe82a,	// (0x00090d83) bg_button_pane_cp033_ParamLimits

0x3158,	// (0x000856b1) phob2_cc_button_pane_g1_ParamLimits

0x3164,	// (0x000856bd) phob2_cc_button_pane_t1_ParamLimits

0x3179,	// (0x000856d2) phob2_cc_button_pane_t2_ParamLimits

0xfe32,	// (0x0009238b) phob2_cc_button_pane_t_ParamLimits

0x4e7c,	// (0x000873d5) popup_wgtman_window

0x1bb1,	// (0x0008410a) scroll_pane_cp038

0xc41c,	// (0x0008e975) wgtman_btn_pane_cp_01_ParamLimits

0xc41c,	// (0x0008e975) wgtman_btn_pane_cp_01

0x3199,	// (0x000856f2) wgtman_content_pane

0x31a2,	// (0x000856fb) wgtman_heading_pane

0xe7c9,	// (0x00090d22) bg_heading_pane_cp02

0x31ab,	// (0x00085704) wgtman_heading_pane_g1

0x31b3,	// (0x0008570c) wgtman_heading_pane_t1

0x31c1,	// (0x0008571a) scroll_pane_cp036

0x31c9,	// (0x00085722) wgtman_list_pane

0x296d,	// (0x00084ec6) wgtman_list_pane_t1_ParamLimits

0x296d,	// (0x00084ec6) wgtman_list_pane_t1

0x9532,	// (0x0008ba8b) cam4_grid_pane

0xa247,	// (0x0008c7a0) bg_button_pane_cp015_ParamLimits

0xa25c,	// (0x0008c7b5) bg_button_pane_cp016_ParamLimits

0xa268,	// (0x0008c7c1) bg_button_pane_cp017_ParamLimits

0xa2c1,	// (0x0008c81a) popup_vitu2_query_window_g3_ParamLimits

0xa2c1,	// (0x0008c81a) popup_vitu2_query_window_g3

0xa362,	// (0x0008c8bb) popup_vitu2_query_window_t6_ParamLimits

0xa362,	// (0x0008c8bb) popup_vitu2_query_window_t6

0xa38d,	// (0x0008c8e6) popup_vitu2_query_window_t7_ParamLimits

0xa38d,	// (0x0008c8e6) popup_vitu2_query_window_t7

0x19f2,	// (0x00083f4b) cam4_grid_pane_g1

0x19fb,	// (0x00083f54) cam4_grid_pane_g2

0x31d1,	// (0x0008572a) cam4_grid_pane_g3

0x31da,	// (0x00085733) cam4_grid_pane_g4

0x0003,

0xfe47,	// (0x000923a0) cam4_grid_pane_g

0x5b84,	// (0x000880dd) aid_placing_vt_slider_lsc_ParamLimits

0x5eb7,	// (0x00088410) vidtel_button_pane_ParamLimits

0x5eb7,	// (0x00088410) vidtel_button_pane

0xe7c9,	// (0x00090d22) bg_button_pane_cp034

0x31e5,	// (0x0008573e) vidtel_button_pane_g1

0x31ed,	// (0x00085746) vidtel_button_pane_t1

0x1cc8,	// (0x00084221) aid_size_vtel_slider_touch

0x1d81,	// (0x000842da) scroll_pane_cp039

0xb0fc,	// (0x0008d655) ncim_query_button_pane_cp01_ParamLimits

0xb11b,	// (0x0008d674) ncimui_query_pane_g1_ParamLimits

0xe82a,	// (0x00090d83) input_focus_pane_cp012_ParamLimits

0x2697,	// (0x00084bf0) ncim_query_entry_pane_t1_ParamLimits

0x1d81,	// (0x000842da) scroll_pane_cp039_ParamLimits

0x6ff8,	// (0x00089551) navi_pane_bcale_mc_g1

0x7000,	// (0x00089559) navi_pane_bcale_mc_t1

0x2ac3,	// (0x0008501c) main_sp_fs_email_pane_g1

0x2acf,	// (0x00085028) main_sp_fs_email_pane_g2

0x0001,

0xfc4a,	// (0x000921a3) main_sp_fs_email_pane_g

0x393e,	// (0x00085e97) list_single_cale_mrui_row_pane_g3_ParamLimits

0x393e,	// (0x00085e97) list_single_cale_mrui_row_pane_g3

0xc024,	// (0x0008e57d) list_single_recal_day_pane_g5_event_pane

0x2f31,	// (0x0008548a) list_single_recal_day_pane_g7

0x3203,	// (0x0008575c) list_recal_day_event_pane_cp01

0x320c,	// (0x00085765) list_recal_vselct_arw_lo_pane_cp01

0x3214,	// (0x0008576d) list_recal_vselct_arw_up_pane_cp01

0x321c,	// (0x00085775) list_recal_vselct_pane_cp01

0x1cd8,	// (0x00084231) list_recal_day_event_pane_cp01_g1

0x3226,	// (0x0008577f) list_recal_day_event_pane_cp01_t1

0x2f39,	// (0x00085492) list_single_recal_day_pane_t1_ParamLimits

0x2f4b,	// (0x000854a4) list_single_recal_day_pane_t2_ParamLimits

0xfd2a,	// (0x00092283) list_single_recal_day_pane_t_ParamLimits

0xee84,	// (0x000913dd) bg_notes_pane_ParamLimits

0xef4f,	// (0x000914a8) list_notes_pane_ParamLimits

0x506d,	// (0x000875c6) scroll_pane_cp06_ParamLimits

0xef71,	// (0x000914ca) main_notes_pane_ParamLimits

0xe82a,	// (0x00090d83) main_welc_pane

0xcb09,	// (0x0008f062) main_welc_body_pane_ParamLimits

0xcb09,	// (0x0008f062) main_welc_body_pane

0xcb24,	// (0x0008f07d) main_welc_opti_pane_ParamLimits

0xcb24,	// (0x0008f07d) main_welc_opti_pane

0xcb89,	// (0x0008f0e2) main_welc_pane_t1_ParamLimits

0xcb89,	// (0x0008f0e2) main_welc_pane_t1

0xcd1d,	// (0x0008f276) main_welc_body_row_pane_ParamLimits

0xcd1d,	// (0x0008f276) main_welc_body_row_pane

0xeef1,	// (0x0009144a) main_welc_opti_row_pane_ParamLimits

0xeef1,	// (0x0009144a) main_welc_opti_row_pane

0x325b,	// (0x000857b4) main_welc_opti_row_pane_g1

0xcd37,	// (0x0008f290) main_welc_opti_row_pane_t1

0x3263,	// (0x000857bc) main_welc_body_row_pane_t1

0x2f79,	// (0x000854d2) popup_notif_wgt_heading_pane

0x2f93,	// (0x000854ec) aid_size_list_notif_wgt_del_ParamLimits

0x2fa0,	// (0x000854f9) list_notif_wgt_row_pane_g1_ParamLimits

0x2fac,	// (0x00085505) list_notif_wgt_row_pane_g2_ParamLimits

0x2fbb,	// (0x00085514) list_notif_wgt_row_pane_g3_ParamLimits

0xfd91,	// (0x000922ea) list_notif_wgt_row_pane_g_ParamLimits

0x2fc8,	// (0x00085521) list_notif_wgt_row_pane_t1_ParamLimits

0x2fde,	// (0x00085537) list_notif_wgt_row_pane_t2_ParamLimits

0x2ff0,	// (0x00085549) list_notif_wgt_row_pane_t3_ParamLimits

0xfd98,	// (0x000922f1) list_notif_wgt_row_pane_t_ParamLimits

0xc4aa,	// (0x0008ea03) listrow_wgtman_pane_g1_ParamLimits

0xc4b7,	// (0x0008ea10) listrow_wgtman_pane_g2_ParamLimits

0xfdc8,	// (0x00092321) listrow_wgtman_pane_g_ParamLimits

0xc4d5,	// (0x0008ea2e) listrow_wgtman_pane_t1_ParamLimits

0xc4ed,	// (0x0008ea46) listrow_wgtman_pane_t2_ParamLimits

0xfdcd,	// (0x00092326) listrow_wgtman_pane_t_ParamLimits

0xc513,	// (0x0008ea6c) wait_bar_pane_cp09_ParamLimits

0xe7c9,	// (0x00090d22) bg_popup_heading_pane_cp02

0x3272,	// (0x000857cb) popup_notif_wgt_heading_pane_g1

0x327a,	// (0x000857d3) popup_notif_wgt_heading_pane_t1

0xe7c9,	// (0x00090d22) main_vids_pane

0xe7c9,	// (0x00090d22) vids_listscroll_pane

0xcd46,	// (0x0008f29f) scroll_pane_cp040

0xe7c9,	// (0x00090d22) vids_list_pane

0xcd51,	// (0x0008f2aa) vids_list_double_pane_ParamLimits

0xcd51,	// (0x0008f2aa) vids_list_double_pane

0xcd65,	// (0x0008f2be) vids_list_double_pane_g1

0xcd6e,	// (0x0008f2c7) vids_list_double_pane_t1

0xcd7e,	// (0x0008f2d7) vids_list_double_pane_t2

0x0001,

0xfe66,	// (0x000923bf) vids_list_double_pane_t

0x7bd5,	// (0x0008a12e) main_ncimui_pane_ParamLimits

0xaf3d,	// (0x0008d496) main_ncimui_pane_g1_ParamLimits

0xaf4b,	// (0x0008d4a4) main_ncimui_pane_g2_ParamLimits

0xaf4b,	// (0x0008d4a4) main_ncimui_pane_g2

0x0001,

0xfb4b,	// (0x000920a4) main_ncimui_pane_g_ParamLimits

0xfb4b,	// (0x000920a4) main_ncimui_pane_g

0xcb3f,	// (0x0008f098) main_welc_pane_g1_ParamLimits

0xcb3f,	// (0x0008f098) main_welc_pane_g1

0xcb4b,	// (0x0008f0a4) main_welc_pane_g2_ParamLimits

0xcb4b,	// (0x0008f0a4) main_welc_pane_g2

0x0003,

0xfe50,	// (0x000923a9) main_welc_pane_g_ParamLimits

0xfe50,	// (0x000923a9) main_welc_pane_g

0x504f,	// (0x000875a8) listscroll_mce_pane_ParamLimits

0x70c2,	// (0x0008961b) wait_bar_pane_cp10

0x0a33,	// (0x00082f8c) main_cale_day_pane_ParamLimits

0x0a33,	// (0x00082f8c) main_cale_week_pane_ParamLimits

0xee84,	// (0x000913dd) main_messa_pane_ParamLimits

0x8979,	// (0x0008aed2) main_clock2_btn_pane_ParamLimits

0x8979,	// (0x0008aed2) main_clock2_btn_pane

0x12b9,	// (0x00083812) main_clock2_btn_pane_cp01_ParamLimits

0x12b9,	// (0x00083812) main_clock2_btn_pane_cp01

0x390f,	// (0x00085e68) list_cale_mrui_pane_ParamLimits

0x3026,	// (0x0008557f) main_cf0_pane_g2

0x0001,

0xfd9f,	// (0x000922f8) main_cf0_pane_g

0xc6fe,	// (0x0008ec57) area_left_week_number_pane_ParamLimits

0xc711,	// (0x0008ec6a) area_top_day_name_pane_ParamLimits

0xc71f,	// (0x0008ec78) frame_month_view_pane_ParamLimits

0x3101,	// (0x0008565a) grid_month_view_pane_ParamLimits

0x310f,	// (0x00085668) frm_month_g1_ParamLimits

0xc79d,	// (0x0008ecf6) frm_month_g2_ParamLimits

0xc7ae,	// (0x0008ed07) frm_month_g3_ParamLimits

0xc7bf,	// (0x0008ed18) frm_month_g4_ParamLimits

0xc7d0,	// (0x0008ed29) frm_month_g5_ParamLimits

0xc7e1,	// (0x0008ed3a) frm_month_g6_ParamLimits

0xc7f4,	// (0x0008ed4d) frm_month_g7_ParamLimits

0x311c,	// (0x00085675) frm_month_g8_ParamLimits

0xc807,	// (0x0008ed60) frm_month_g9_ParamLimits

0xc814,	// (0x0008ed6d) frm_month_g10_ParamLimits

0xc821,	// (0x0008ed7a) frm_month_g11_ParamLimits

0xc82e,	// (0x0008ed87) frm_month_g12_ParamLimits

0xc83b,	// (0x0008ed94) frm_month_g13_ParamLimits

0xc84a,	// (0x0008eda3) frm_month_g14_ParamLimits

0xc859,	// (0x0008edb2) frm_month_g15_ParamLimits

0xc868,	// (0x0008edc1) frm_month_g16_ParamLimits

0xfdf7,	// (0x00092350) frm_month_g_ParamLimits

0x3129,	// (0x00085682) cell_top_day_name_pane_t1_ParamLimits

0xc877,	// (0x0008edd0) cell_area_left_week_number_pane_g1_ParamLimits

0xc886,	// (0x0008eddf) cell_area_left_week_number_pane_t1_ParamLimits

0xeeff,	// (0x00091458) cell_month_view_pane_g1_ParamLimits

0xc89c,	// (0x0008edf5) cell_month_view_pane_t1_ParamLimits

0xee7c,	// (0x000913d5) main_clock2_btn_pane_g1

0x3288,	// (0x000857e1) main_clock2_btn_pane_t1

0xe82a,	// (0x00090d83) listscroll_cmail_pane_ParamLimits

0x2ac3,	// (0x0008501c) main_sp_fs_email_pane_g1_ParamLimits

0x2acf,	// (0x00085028) main_sp_fs_email_pane_g2_ParamLimits

0xfc4a,	// (0x000921a3) main_sp_fs_email_pane_g_ParamLimits

0x3a18,	// (0x00085f71) list_recal_day_pane_ParamLimits

0x3a29,	// (0x00085f82) mian_recal_day_pane_t1

0xba57,	// (0x0008dfb0) list_single_dyc_row_text_pane_t4_ParamLimits

0xba57,	// (0x0008dfb0) list_single_dyc_row_text_pane_t4

0xba9c,	// (0x0008dff5) list_single_dyc_row_text_pane_t5_ParamLimits

0xba9c,	// (0x0008dff5) list_single_dyc_row_text_pane_t5

0x2b79,	// (0x000850d2) list_single_dyc_row_text_pane_t6_ParamLimits

0x2b79,	// (0x000850d2) list_single_dyc_row_text_pane_t6

0x6c1f,	// (0x00089178) aid_mgn_list_cale_time_pane

0x7bd5,	// (0x0008a12e) main_gallery2_pane_ParamLimits

0x12cd,	// (0x00083826) main_clock2_pane_cp01_t1

0x12db,	// (0x00083834) main_clock2_pane_cp01_t3

0x0001,

0xf737,	// (0x00091c90) main_clock2_pane_cp01_t

0x5577,	// (0x00087ad0) cale_week_scroll_pane_g16_ParamLimits

0x5577,	// (0x00087ad0) cale_week_scroll_pane_g16

0xd372,	// (0x0008f8cb) vorec_slider_pane

0x31ed,	// (0x00085746) vidtel_button_pane_t1_ParamLimits

0xc07f,	// (0x0008e5d8) main_fs_bigclock_clock_pane_g1_ParamLimits

0xc07f,	// (0x0008e5d8) main_fs_bigclock_clock_pane_g2_ParamLimits

0xc08e,	// (0x0008e5e7) main_fs_bigclock_clock_pane_g3_ParamLimits

0xc08e,	// (0x0008e5e7) main_fs_bigclock_clock_pane_g4_ParamLimits

0xfd4d,	// (0x000922a6) main_fs_bigclock_clock_pane_g_ParamLimits

0xc09e,	// (0x0008e5f7) main_fs_bigclock_clock_pane_t1_ParamLimits

0xc0b3,	// (0x0008e60c) main_fs_bigclock_clock_pane_t2_ParamLimits

0xfd56,	// (0x000922af) main_fs_bigclock_clock_pane_t_ParamLimits

0x82c1,	// (0x0008a81a) main_mup3_lyrics_pane_ParamLimits

0x82c1,	// (0x0008a81a) main_mup3_lyrics_pane

0xcdb4,	// (0x0008f30d) main_mup3_lyrics_pane_t1_ParamLimits

0xcdb4,	// (0x0008f30d) main_mup3_lyrics_pane_t1

0x8e99,	// (0x0008b3f2) aid_main_mp4_pane_t1_area

0x8ea3,	// (0x0008b3fc) aid_main_mp4_pane_t2_area

0x8fb0,	// (0x0008b509) main_mp4_pane_g7_ParamLimits

0x8fb0,	// (0x0008b509) main_mp4_pane_g7

0x8fbc,	// (0x0008b515) main_mp4_pane_g8_ParamLimits

0x8fbc,	// (0x0008b515) main_mp4_pane_g8

0x93da,	// (0x0008b933) aid_call6_pane_g1_size

0xca26,	// (0x0008ef7f) list_double_large_graphic_phob2_other_pane_ParamLimits

0xca26,	// (0x0008ef7f) list_double_large_graphic_phob2_other_pane

0xcddb,	// (0x0008f334) list_double_large_graphic_phob2_other_pane_g1

0xe7c9,	// (0x00090d22) list_highlight_pane_cp026

0xe82a,	// (0x00090d83) main_welc_pane_ParamLimits

0xb8bc,	// (0x0008de15) main_sp_fs_ctrlbar_pane_g3_ParamLimits

0xb8bc,	// (0x0008de15) main_sp_fs_ctrlbar_pane_g3

0xb8d6,	// (0x0008de2f) main_sp_fs_ctrlbar_pane_g4_ParamLimits

0xb8d6,	// (0x0008de2f) main_sp_fs_ctrlbar_pane_g4

0xb908,	// (0x0008de61) toolbar2_fixed_button_pane_cp01

0xb913,	// (0x0008de6c) toolbar2_fixed_button_pane_cp02

0xb920,	// (0x0008de79) toolbar2_fixed_button_pane_cp03

0xcafa,	// (0x0008f053) list_welc_entry_pane_ParamLimits

0xcafa,	// (0x0008f053) list_welc_entry_pane

0xcb59,	// (0x0008f0b2) main_welc_pane_g3_ParamLimits

0xcb59,	// (0x0008f0b2) main_welc_pane_g3

0xcba7,	// (0x0008f100) main_welc_pane_t2_ParamLimits

0xcba7,	// (0x0008f100) main_welc_pane_t2

0xcbbb,	// (0x0008f114) main_welc_pane_t3_ParamLimits

0xcbbb,	// (0x0008f114) main_welc_pane_t3

0x0005,

0xfe59,	// (0x000923b2) main_welc_pane_t_ParamLimits

0xfe59,	// (0x000923b2) main_welc_pane_t

0xccc1,	// (0x0008f21a) welc_button_pane_ParamLimits

0xccc1,	// (0x0008f21a) welc_button_pane

0xcd0f,	// (0x0008f268) welc_service_logo_pane_ParamLimits

0xcd0f,	// (0x0008f268) welc_service_logo_pane

0xcde3,	// (0x0008f33c) list_single_welc_entry_pane_ParamLimits

0xcde3,	// (0x0008f33c) list_single_welc_entry_pane

0xcdf4,	// (0x0008f34d) list_single_welc_entry_pane_g1

0xcdfc,	// (0x0008f355) list_single_welc_entry_pane_t1

0xce0a,	// (0x0008f363) list_single_welc_entry_pane_t2

0x0001,

0xfe6b,	// (0x000923c4) list_single_welc_entry_pane_t

0xe7c9,	// (0x00090d22) bg_button_pane_cp035

0x3296,	// (0x000857ef) welc_button_pane_t1

0x32a4,	// (0x000857fd) welc_service_logo_pane_g1

0x32ad,	// (0x00085806) welc_service_logo_pane_g2

0x0001,

0xfe70,	// (0x000923c9) welc_service_logo_pane_g

0x4e88,	// (0x000873e1) main_int_radio_pane

0x2535,	// (0x00084a8e) list_single_fs_dyc_pane_g1

0xc93c,	// (0x0008ee95) list_double_large_graphic_phob2_pane_g3_ParamLimits

0xc93c,	// (0x0008ee95) list_double_large_graphic_phob2_pane_g3

0xc948,	// (0x0008eea1) list_double_large_graphic_phob2_pane_g4_ParamLimits

0xc948,	// (0x0008eea1) list_double_large_graphic_phob2_pane_g4

0xce18,	// (0x0008f371) main_int_radio1_pane_ParamLimits

0xce18,	// (0x0008f371) main_int_radio1_pane

0x32b6,	// (0x0008580f) find_pane_cp02

0xce2e,	// (0x0008f387) input_focus_pane_cp12_ParamLimits

0xce2e,	// (0x0008f387) input_focus_pane_cp12

0xce3a,	// (0x0008f393) input_focus_pane_cp13_ParamLimits

0xce3a,	// (0x0008f393) input_focus_pane_cp13

0xce52,	// (0x0008f3ab) input_focus_pane_cp14_ParamLimits

0xce52,	// (0x0008f3ab) input_focus_pane_cp14

0x32bf,	// (0x00085818) int_radio1_listscroll_pane

0xce6a,	// (0x0008f3c3) main_int_radio1_pane_g1_ParamLimits

0xce6a,	// (0x0008f3c3) main_int_radio1_pane_g1

0xce76,	// (0x0008f3cf) main_int_radio1_pane_t1_ParamLimits

0xce76,	// (0x0008f3cf) main_int_radio1_pane_t1

0xce88,	// (0x0008f3e1) main_int_radio1_pane_t2_ParamLimits

0xce88,	// (0x0008f3e1) main_int_radio1_pane_t2

0xce9c,	// (0x0008f3f5) main_int_radio1_pane_t3_ParamLimits

0xce9c,	// (0x0008f3f5) main_int_radio1_pane_t3

0xceb0,	// (0x0008f409) main_int_radio1_pane_t4_ParamLimits

0xceb0,	// (0x0008f409) main_int_radio1_pane_t4

0x32c9,	// (0x00085822) main_int_radio1_pane_t5_ParamLimits

0x32c9,	// (0x00085822) main_int_radio1_pane_t5

0xcec7,	// (0x0008f420) main_int_radio1_pane_t6_ParamLimits

0xcec7,	// (0x0008f420) main_int_radio1_pane_t6

0xced9,	// (0x0008f432) main_int_radio1_pane_t7_ParamLimits

0xced9,	// (0x0008f432) main_int_radio1_pane_t7

0xceeb,	// (0x0008f444) main_int_radio1_pane_t8_ParamLimits

0xceeb,	// (0x0008f444) main_int_radio1_pane_t8

0xcefd,	// (0x0008f456) main_int_radio1_pane_t9_ParamLimits

0xcefd,	// (0x0008f456) main_int_radio1_pane_t9

0xcf0f,	// (0x0008f468) main_int_radio1_pane_t10_ParamLimits

0xcf0f,	// (0x0008f468) main_int_radio1_pane_t10

0xcf40,	// (0x0008f499) main_int_radio1_pane_t11_ParamLimits

0xcf40,	// (0x0008f499) main_int_radio1_pane_t11

0xcf71,	// (0x0008f4ca) main_int_radio1_pane_t12_ParamLimits

0xcf71,	// (0x0008f4ca) main_int_radio1_pane_t12

0x000b,

0xfe75,	// (0x000923ce) main_int_radio1_pane_t_ParamLimits

0xfe75,	// (0x000923ce) main_int_radio1_pane_t

0x313c,	// (0x00085695) int_radio_list_pane

0x3144,	// (0x0008569d) scroll_pane_cp037

0x32db,	// (0x00085834) list_double_large_graphic_int_radio_pane_ParamLimits

0x32db,	// (0x00085834) list_double_large_graphic_int_radio_pane

0x32ef,	// (0x00085848) list_double_large_graphic_int_radio_pane_g1

0x32f8,	// (0x00085851) list_double_large_graphic_int_radio_pane_t1

0x3306,	// (0x0008585f) list_double_large_graphic_int_radio_pane_t2

0x0001,

0xfe8e,	// (0x000923e7) list_double_large_graphic_int_radio_pane_t

0xe7c9,	// (0x00090d22) list_highlight_pane_cp027

0x3234,	// (0x0008578d) main_button_pane_4

0xcb69,	// (0x0008f0c2) main_welc_pane_g4_ParamLimits

0xcb69,	// (0x0008f0c2) main_welc_pane_g4

0xcbcf,	// (0x0008f128) main_welc_pane_t4_ParamLimits

0xcbcf,	// (0x0008f128) main_welc_pane_t4

0xcbe1,	// (0x0008f13a) main_welc_pane_t5_ParamLimits

0xcbe1,	// (0x0008f13a) main_welc_pane_t5

0xcc15,	// (0x0008f16e) main_welc_pane_t6_ParamLimits

0xcc15,	// (0x0008f16e) main_welc_pane_t6

0xcccf,	// (0x0008f228) welc_button_pane_2_ParamLimits

0xcccf,	// (0x0008f228) welc_button_pane_2

0xcce5,	// (0x0008f23e) welc_button_pane_3_ParamLimits

0xcce5,	// (0x0008f23e) welc_button_pane_3

0x323c,	// (0x00085795) welc_button_pane_4

0xccff,	// (0x0008f258) welc_button_pane_5_ParamLimits

0xccff,	// (0x0008f258) welc_button_pane_5

0x4bfb,	// (0x00087154) main_popup_welc_pane

0x3323,	// (0x0008587c) main_welc_sk_g3

0x332d,	// (0x00085886) main_welc_sk_g4

0x3337,	// (0x00085890) main_welc_sk_t3

0x3347,	// (0x000858a0) main_welc_sk_t4

0x3357,	// (0x000858b0) popup_welc_pane_t4

0x3365,	// (0x000858be) popup_welc_pane_t5

0x3375,	// (0x000858ce) popup_welc_pane_t6

0x4e88,	// (0x000873e1) main_acti_pane

0xe7c9,	// (0x00090d22) main_sso_pane

0xcf88,	// (0x0008f4e1) sso_body_pane_ParamLimits

0xcf88,	// (0x0008f4e1) sso_body_pane

0xcf97,	// (0x0008f4f0) sso_logo_pane_ParamLimits

0xcf97,	// (0x0008f4f0) sso_logo_pane

0xcfc0,	// (0x0008f519) sso_sk_pane_ParamLimits

0xcfc0,	// (0x0008f519) sso_sk_pane

0xd3a8,	// (0x0008f901) main_sso_logo_pane_g1

0xcfcd,	// (0x0008f526) sso_sk_pane_t1_ParamLimits

0xcfcd,	// (0x0008f526) sso_sk_pane_t1

0xcfe1,	// (0x0008f53a) sso_sk_pane_t2_ParamLimits

0xcfe1,	// (0x0008f53a) sso_sk_pane_t2

0x0001,

0xfe93,	// (0x000923ec) sso_sk_pane_t_ParamLimits

0xfe93,	// (0x000923ec) sso_sk_pane_t

0x33b7,	// (0x00085910) aid_sso_gap

0x33c0,	// (0x00085919) aid_sso_txt1

0x33ca,	// (0x00085923) aid_sso_txt2

0x33d4,	// (0x0008592d) aid_sso_txt3

0x0002,

0xfe98,	// (0x000923f1) aid_sso_txt

0x33de,	// (0x00085937) aid_sso_widget

0xd03e,	// (0x0008f597) sso_btn_pane_ParamLimits

0xd03e,	// (0x0008f597) sso_btn_pane

0xd0b7,	// (0x0008f610) sso_option_pane_ParamLimits

0xd0b7,	// (0x0008f610) sso_option_pane

0xd135,	// (0x0008f68e) sso_query_pane_ParamLimits

0xd135,	// (0x0008f68e) sso_query_pane

0xd187,	// (0x0008f6e0) sso_query_pane_cp01_ParamLimits

0xd187,	// (0x0008f6e0) sso_query_pane_cp01

0xd1dd,	// (0x0008f736) sso_t_hdr_pane_ParamLimits

0xd1dd,	// (0x0008f736) sso_t_hdr_pane

0xd1fc,	// (0x0008f755) sso_t_nml_pane_ParamLimits

0xd1fc,	// (0x0008f755) sso_t_nml_pane

0x33d4,	// (0x0008592d) sso_t_sub_pane

0xcfa4,	// (0x0008f4fd) sso_popup_window_ParamLimits

0xcfa4,	// (0x0008f4fd) sso_popup_window

0xcff3,	// (0x0008f54c) sso_apps_pane_ParamLimits

0xcff3,	// (0x0008f54c) sso_apps_pane

0xd016,	// (0x0008f56f) sso_body_pane_g1

0xd01e,	// (0x0008f577) sso_body_pane_t1

0xd02e,	// (0x0008f587) sso_body_pane_t2

0x0001,

0xfe9f,	// (0x000923f8) sso_body_pane_t

0xd089,	// (0x0008f5e2) sso_btn_pane_cp01_ParamLimits

0xd089,	// (0x0008f5e2) sso_btn_pane_cp01

0xd107,	// (0x0008f660) sso_prog_pane_ParamLimits

0xd107,	// (0x0008f660) sso_prog_pane

0x33e8,	// (0x00085941) sso_t_hdr_pane_t1_ParamLimits

0x33e8,	// (0x00085941) sso_t_hdr_pane_t1

0x33fb,	// (0x00085954) input_focus_pane_cp10_ParamLimits

0x33fb,	// (0x00085954) input_focus_pane_cp10

0x3411,	// (0x0008596a) sso_query_pane_t1_ParamLimits

0x3411,	// (0x0008596a) sso_query_pane_t1

0x3424,	// (0x0008597d) sso_query_pane_t2_ParamLimits

0x3424,	// (0x0008597d) sso_query_pane_t2

0x343e,	// (0x00085997) sso_query_pane_t3_ParamLimits

0x343e,	// (0x00085997) sso_query_pane_t3

0x3468,	// (0x000859c1) sso_query_pane_t4_ParamLimits

0x3468,	// (0x000859c1) sso_query_pane_t4

0x0003,

0xfea4,	// (0x000923fd) sso_query_pane_t_ParamLimits

0xfea4,	// (0x000923fd) sso_query_pane_t

0xe7c9,	// (0x00090d22) bg_button_pane_cp22

0x3314,	// (0x0008586d) sso_btn_pane_t1

0xd24c,	// (0x0008f7a5) sso_t_nml_pane_t1_ParamLimits

0xd24c,	// (0x0008f7a5) sso_t_nml_pane_t1

0x348c,	// (0x000859e5) sso_option_row_pane_ParamLimits

0x348c,	// (0x000859e5) sso_option_row_pane

0x3499,	// (0x000859f2) sso_t_sub_pane_t1_ParamLimits

0x3499,	// (0x000859f2) sso_t_sub_pane_t1

0xe82a,	// (0x00090d83) bg_popup_window_pane_cp11_ParamLimits

0xe82a,	// (0x00090d83) bg_popup_window_pane_cp11

0x34ac,	// (0x00085a05) popup_sk_window_cp01_ParamLimits

0x34ac,	// (0x00085a05) popup_sk_window_cp01

0x34b9,	// (0x00085a12) sso_popup_body_pane_ParamLimits

0x34b9,	// (0x00085a12) sso_popup_body_pane

0x34c6,	// (0x00085a1f) scroll_pane_cp21_ParamLimits

0x34c6,	// (0x00085a1f) scroll_pane_cp21

0x34d3,	// (0x00085a2c) sso_popup_body_t_pane_ParamLimits

0x34d3,	// (0x00085a2c) sso_popup_body_t_pane

0x34e0,	// (0x00085a39) sso_popup_body_t_hdr_pane_ParamLimits

0x34e0,	// (0x00085a39) sso_popup_body_t_hdr_pane

0x34ee,	// (0x00085a47) sso_popup_body_t_nml_pane_ParamLimits

0x34ee,	// (0x00085a47) sso_popup_body_t_nml_pane

0x3509,	// (0x00085a62) sso_popup_body_t_sub_pane_ParamLimits

0x3509,	// (0x00085a62) sso_popup_body_t_sub_pane

0x352c,	// (0x00085a85) sso_popup_body_t_hdr_pane_t1

0xd269,	// (0x0008f7c2) sso_popup_body_t_nml_pane_t1_ParamLimits

0xd269,	// (0x0008f7c2) sso_popup_body_t_nml_pane_t1

0x353c,	// (0x00085a95) sso_popup_body_t_sub_pane_t1_ParamLimits

0x353c,	// (0x00085a95) sso_popup_body_t_sub_pane_t1

0xd3a8,	// (0x0008f901) sso_prog_pane_g1

0xd2b0,	// (0x0008f809) sso_apps_pane_comp1_ParamLimits

0xd2b0,	// (0x0008f809) sso_apps_pane_comp1

0x3561,	// (0x00085aba) sso_apps_pane_comp1_g1

0x3569,	// (0x00085ac2) sso_apps_pane_comp1_t1

0x3577,	// (0x00085ad0) sso_option_row_pane_g1

0x357f,	// (0x00085ad8) sso_option_row_pane_t1

0xcae8,	// (0x0008f041) bg_welc_area_ParamLimits

0xcae8,	// (0x0008f041) bg_welc_area

0xcc4b,	// (0x0008f1a4) sso_t_hdr_pane_a_t1_ParamLimits

0xcc4b,	// (0x0008f1a4) sso_t_hdr_pane_a_t1

0xcc5f,	// (0x0008f1b8) sso_t_nml_pane_a_t1_ParamLimits

0xcc5f,	// (0x0008f1b8) sso_t_nml_pane_a_t1

0xcc8d,	// (0x0008f1e6) sso_t_sub_pane_a_t1_ParamLimits

0xcc8d,	// (0x0008f1e6) sso_t_sub_pane_a_t1

0x3314,	// (0x0008586d) sso_btn_pane_t1_copy1

0xe7c9,	// (0x00090d22) welc_button_pane_2_comp1

0x3385,	// (0x000858de) sso_t_hdr_pane_p_t1

0x3395,	// (0x000858ee) sso_t_nml_pane_p_t1

0x33a5,	// (0x000858fe) sso_t_sub_pane_p_t1
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

} // end of namespace AknLayoutScalable_Abrw_pvp4_apps_vga4_prt_tch_Large
