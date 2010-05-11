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

#include "aknlayoutscalable_elaf_phl_apps_qhd_lsc_tch_normal.h"
#include "AknLayout2ScalableDecode.h"
namespace AknLayoutScalable_Apps { extern const TUint8 KByteCodedData_AknLayoutScalable_Elaf_php_apps_qhd_prt_tch[]; }

namespace AknLayoutScalable_Elaf_phl_apps_qhd_lsc_tch_Normal
{

extern const TUint16 KDataLookup[AknLayoutScalable_Apps::E_TApiId_TableSize];
const SCompDataImplData KImplData = { KDataLookup, AknLayoutScalable_Apps::KByteCodedData_AknLayoutScalable_Elaf_php_apps_qhd_prt_tch + 0x0000eefd };

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
0x01a1,	// (0x0000f09e) Screen

0x01ad,	// (0x0000f0aa) application_window

0x01e9,	// (0x0000f0e6) area_bottom_pane_ParamLimits

0x01e9,	// (0x0000f0e6) area_bottom_pane

0x0222,	// (0x0000f11f) area_top_pane_ParamLimits

0x0222,	// (0x0000f11f) area_top_pane

0x94d4,	// (0x000183d1) call_video_uplink_pane_ParamLimits

0x94d4,	// (0x000183d1) call_video_uplink_pane

0x02b0,	// (0x0000f1ad) main_pane_ParamLimits

0x02b0,	// (0x0000f1ad) main_pane

0xbecc,	// (0x0001adc9) context_pane

0x38a4,	// (0x000127a1) navi_pane

0x38d6,	// (0x000127d3) popup_cale_events_window_ParamLimits

0x38d6,	// (0x000127d3) popup_cale_events_window

0xbedf,	// (0x0001addc) popup_mup_playback_window

0x38ee,	// (0x000127eb) signal_pane

0x9c55,	// (0x00018b52) main_browser_pane

0x9e86,	// (0x00018d83) main_burst_pane

0x3604,	// (0x00012501) main_calc_pane

0xbe5e,	// (0x0001ad5b) main_cale_day_pane

0x0906,	// (0x0000f803) main_cale_month_pane

0xbe5e,	// (0x0001ad5b) main_cale_week_pane

0x9e86,	// (0x00018d83) main_call_pane

0x9913,	// (0x00018810) main_call_poc_pane

0x9e86,	// (0x00018d83) main_camera_pane

0x9e86,	// (0x00018d83) main_chi_dic_pane

0xa714,	// (0x00019611) main_clock_pane

0x9913,	// (0x00018810) main_fmradio_pane

0x9e86,	// (0x00018d83) main_graph_messa_pane

0x9913,	// (0x00018810) main_help_pane

0x9c55,	// (0x00018b52) main_im_pane

0x9b6e,	// (0x00018a6b) main_image_pane_ParamLimits

0x9b6e,	// (0x00018a6b) main_image_pane

0x9913,	// (0x00018810) main_location2_pane

0x9e86,	// (0x00018d83) main_location_pane

0x9b6e,	// (0x00018a6b) main_messa_pane

0x9913,	// (0x00018810) main_mp2_pane

0x9e86,	// (0x00018d83) main_mp_pane

0x9913,	// (0x00018810) main_msg_pane

0x9913,	// (0x00018810) main_mup_eq_pane

0x9913,	// (0x00018810) main_mup_pane

0x9c55,	// (0x00018b52) main_notes_pane

0x9913,	// (0x00018810) main_pec_pane

0x9913,	// (0x00018810) main_phob_pane

0x9913,	// (0x00018810) main_pinb_pane

0x9913,	// (0x00018810) main_postcard_pane

0x9913,	// (0x00018810) main_qdial_pane

0x9e86,	// (0x00018d83) main_skin_pane

0x9913,	// (0x00018810) main_smil2_pane

0x9e86,	// (0x00018d83) main_smil_pane

0x9e86,	// (0x00018d83) main_video_pane

0x9e86,	// (0x00018d83) main_video_tele_pane

0x9b6e,	// (0x00018a6b) main_viewer_pane_ParamLimits

0x9b6e,	// (0x00018a6b) main_viewer_pane

0x9e86,	// (0x00018d83) main_vorec_pane

0x3658,	// (0x00012555) popup_blid_sat_info_window_ParamLimits

0x3658,	// (0x00012555) popup_blid_sat_info_window

0x36b0,	// (0x000125ad) popup_dyc_status_message_window_ParamLimits

0x36b0,	// (0x000125ad) popup_dyc_status_message_window

0x36ca,	// (0x000125c7) popup_grid_large_graphic_window_ParamLimits

0x36ca,	// (0x000125c7) popup_grid_large_graphic_window

0x3786,	// (0x00012683) popup_loc_request_window_ParamLimits

0x3786,	// (0x00012683) popup_loc_request_window

0x387c,	// (0x00012779) popup_wml_address_window_ParamLimits

0x387c,	// (0x00012779) popup_wml_address_window

0x343e,	// (0x0001233b) call_muted_g1

0x30f3,	// (0x00011ff0) popup_call_audio_conf_window_ParamLimits

0x30f3,	// (0x00011ff0) popup_call_audio_conf_window

0x3452,	// (0x0001234f) popup_call_audio_first_window_ParamLimits

0x3452,	// (0x0001234f) popup_call_audio_first_window

0x34c8,	// (0x000123c5) popup_call_audio_in_window_ParamLimits

0x34c8,	// (0x000123c5) popup_call_audio_in_window

0x3504,	// (0x00012401) popup_call_audio_out_window_ParamLimits

0x3504,	// (0x00012401) popup_call_audio_out_window

0x353e,	// (0x0001243b) popup_call_audio_second_window_ParamLimits

0x353e,	// (0x0001243b) popup_call_audio_second_window

0x3594,	// (0x00012491) popup_call_audio_wait_window_ParamLimits

0x3594,	// (0x00012491) popup_call_audio_wait_window

0x35c9,	// (0x000124c6) popup_number_entry_window_ParamLimits

0x35c9,	// (0x000124c6) popup_number_entry_window

0x9500,	// (0x000183fd) bg_popup_call_pane_cp05_ParamLimits

0x9500,	// (0x000183fd) bg_popup_call_pane_cp05

0x9520,	// (0x0001841d) popup_number_entry_window_t1

0x9533,	// (0x00018430) popup_number_entry_window_t2

0x9545,	// (0x00018442) popup_number_entry_window_t3

0x0003,

0xf0ca,	// (0x0001dfc7) popup_number_entry_window_t

0x9557,	// (0x00018454) text_title_cp2

0x956a,	// (0x00018467) bg_popup_call_pane_cp_ParamLimits

0x956a,	// (0x00018467) bg_popup_call_pane_cp

0x9578,	// (0x00018475) call_thumbnail_pane

0x9580,	// (0x0001847d) popup_call_audio_in_window_g1_ParamLimits

0x9580,	// (0x0001847d) popup_call_audio_in_window_g1

0x958c,	// (0x00018489) popup_call_audio_in_window_g2_ParamLimits

0x958c,	// (0x00018489) popup_call_audio_in_window_g2

0x9598,	// (0x00018495) popup_call_audio_in_window_g3_ParamLimits

0x9598,	// (0x00018495) popup_call_audio_in_window_g3

0x0002,

0xf0d3,	// (0x0001dfd0) popup_call_audio_in_window_g_ParamLimits

0xf0d3,	// (0x0001dfd0) popup_call_audio_in_window_g

0x95a4,	// (0x000184a1) popup_call_audio_in_window_t1_ParamLimits

0x95a4,	// (0x000184a1) popup_call_audio_in_window_t1

0x95c0,	// (0x000184bd) popup_call_audio_in_window_t2_ParamLimits

0x95c0,	// (0x000184bd) popup_call_audio_in_window_t2

0x95dc,	// (0x000184d9) popup_call_audio_in_window_t3_ParamLimits

0x95dc,	// (0x000184d9) popup_call_audio_in_window_t3

0x0002,

0xf0da,	// (0x0001dfd7) popup_call_audio_in_window_t_ParamLimits

0xf0da,	// (0x0001dfd7) popup_call_audio_in_window_t

0x956a,	// (0x00018467) bg_popup_call_pane_cp01_ParamLimits

0x956a,	// (0x00018467) bg_popup_call_pane_cp01

0x9578,	// (0x00018475) call_thumbnail_pane_cp02

0x95ef,	// (0x000184ec) call_type_pane_cp022

0x95f7,	// (0x000184f4) popup_call_audio_out_window_g1_ParamLimits

0x95f7,	// (0x000184f4) popup_call_audio_out_window_g1

0x9609,	// (0x00018506) popup_call_audio_out_window_g2_ParamLimits

0x9609,	// (0x00018506) popup_call_audio_out_window_g2

0x9615,	// (0x00018512) popup_call_audio_out_window_g3_ParamLimits

0x9615,	// (0x00018512) popup_call_audio_out_window_g3

0x0002,

0xf0e1,	// (0x0001dfde) popup_call_audio_out_window_g_ParamLimits

0xf0e1,	// (0x0001dfde) popup_call_audio_out_window_g

0x9627,	// (0x00018524) popup_call_audio_out_window_t1_ParamLimits

0x9627,	// (0x00018524) popup_call_audio_out_window_t1

0x963f,	// (0x0001853c) popup_call_audio_out_window_t2_ParamLimits

0x963f,	// (0x0001853c) popup_call_audio_out_window_t2

0x0001,

0xf0e8,	// (0x0001dfe5) popup_call_audio_out_window_t_ParamLimits

0xf0e8,	// (0x0001dfe5) popup_call_audio_out_window_t

0x9654,	// (0x00018551) bg_popup_call_pane_ParamLimits

0x9654,	// (0x00018551) bg_popup_call_pane

0x046c,	// (0x0000f369) call_thumbnail_pane_cp_ParamLimits

0x046c,	// (0x0000f369) call_thumbnail_pane_cp

0x96d8,	// (0x000185d5) call_type_pane_cp01_ParamLimits

0x96d8,	// (0x000185d5) call_type_pane_cp01

0x971c,	// (0x00018619) popup_call_audio_first_window_g1_ParamLimits

0x971c,	// (0x00018619) popup_call_audio_first_window_g1

0x9768,	// (0x00018665) popup_call_audio_first_window_g2_ParamLimits

0x9768,	// (0x00018665) popup_call_audio_first_window_g2

0x0001,

0xf0ed,	// (0x0001dfea) popup_call_audio_first_window_g_ParamLimits

0xf0ed,	// (0x0001dfea) popup_call_audio_first_window_g

0x97ac,	// (0x000186a9) popup_call_audio_first_window_t1_ParamLimits

0x97ac,	// (0x000186a9) popup_call_audio_first_window_t1

0x9858,	// (0x00018755) popup_call_audio_first_window_t4_ParamLimits

0x9858,	// (0x00018755) popup_call_audio_first_window_t4

0x98e4,	// (0x000187e1) popup_call_audio_first_window_t5_ParamLimits

0x98e4,	// (0x000187e1) popup_call_audio_first_window_t5

0x0002,

0xf0f2,	// (0x0001dfef) popup_call_audio_first_window_t_ParamLimits

0xf0f2,	// (0x0001dfef) popup_call_audio_first_window_t

0x9913,	// (0x00018810) bg_popup_call_pane_cp02

0x991d,	// (0x0001881a) call_type_pane_cp023

0x9925,	// (0x00018822) popup_call_audio_wait_window_g1

0x992d,	// (0x0001882a) popup_call_audio_wait_window_g2

0x0001,

0xf0f9,	// (0x0001dff6) popup_call_audio_wait_window_g

0x9935,	// (0x00018832) popup_call_audio_wait_window_t3

0x9943,	// (0x00018840) bg_popup_call_pane_cp03_ParamLimits

0x9943,	// (0x00018840) bg_popup_call_pane_cp03

0x99a3,	// (0x000188a0) call_thumbnail_pane_cp011_ParamLimits

0x99a3,	// (0x000188a0) call_thumbnail_pane_cp011

0x99af,	// (0x000188ac) call_type_pane_cp034_ParamLimits

0x99af,	// (0x000188ac) call_type_pane_cp034

0x99eb,	// (0x000188e8) popup_call_audio_second_window_g1_ParamLimits

0x99eb,	// (0x000188e8) popup_call_audio_second_window_g1

0x9a27,	// (0x00018924) popup_call_audio_second_window_g2_ParamLimits

0x9a27,	// (0x00018924) popup_call_audio_second_window_g2

0x0001,

0xf0fe,	// (0x0001dffb) popup_call_audio_second_window_g_ParamLimits

0xf0fe,	// (0x0001dffb) popup_call_audio_second_window_g

0x9a63,	// (0x00018960) popup_call_audio_second_window_t1_ParamLimits

0x9a63,	// (0x00018960) popup_call_audio_second_window_t1

0x9ae4,	// (0x000189e1) popup_call_audio_second_window_t2_ParamLimits

0x9ae4,	// (0x000189e1) popup_call_audio_second_window_t2

0x9b1a,	// (0x00018a17) popup_call_audio_second_window_t3_ParamLimits

0x9b1a,	// (0x00018a17) popup_call_audio_second_window_t3

0x0002,

0xf103,	// (0x0001e000) popup_call_audio_second_window_t_ParamLimits

0xf103,	// (0x0001e000) popup_call_audio_second_window_t

0x9913,	// (0x00018810) bg_popup_call_pane_cp04

0x9b50,	// (0x00018a4d) list_conf_pane

0x9b58,	// (0x00018a55) popup_call_audio_conf_window_t1

0x9b66,	// (0x00018a63) call_thumbnail_pane_g1

0x9b6e,	// (0x00018a6b) bg_pinb_pane_ParamLimits

0x9b6e,	// (0x00018a6b) bg_pinb_pane

0x9b7c,	// (0x00018a79) find_pinb_pane

0x9b85,	// (0x00018a82) listscroll_pinb_pane_ParamLimits

0x9b85,	// (0x00018a82) listscroll_pinb_pane

0x9b94,	// (0x00018a91) pinb_bg_pane_g1

0x0490,	// (0x0000f38d) pinb_bg_pane_g2

0x049c,	// (0x0000f399) pinb_bg_pane_g3

0x04a8,	// (0x0000f3a5) pinb_bg_pane_g4

0x04b4,	// (0x0000f3b1) pinb_bg_pane_g5

0x04c0,	// (0x0000f3bd) pinb_bg_pane_g6

0x04cb,	// (0x0000f3c8) pinb_bg_pane_g7

0x04d6,	// (0x0000f3d3) pinb_bg_pane_g8

0x04e1,	// (0x0000f3de) pinb_bg_pane_g9

0x04eb,	// (0x0000f3e8) pinb_bg_pane_g10

0x0009,

0xf10a,	// (0x0001e007) pinb_bg_pane_g

0x0508,	// (0x0000f405) grid_pinb_pane

0x0511,	// (0x0000f40e) list_pinb_pane

0x051a,	// (0x0000f417) scroll_pane_cp01_ParamLimits

0x051a,	// (0x0000f417) scroll_pane_cp01

0x9b9e,	// (0x00018a9b) find_pinb_pane_g1_ParamLimits

0x9b9e,	// (0x00018a9b) find_pinb_pane_g1

0x9bb6,	// (0x00018ab3) find_pinb_pane_t1

0x9bc8,	// (0x00018ac5) find_pinb_pane_t2

0x0001,

0xf124,	// (0x0001e021) find_pinb_pane_t

0x9bdd,	// (0x00018ada) input_focus_pane_cp01_ParamLimits

0x9bdd,	// (0x00018ada) input_focus_pane_cp01

0x052c,	// (0x0000f429) cell_pinb_pane_ParamLimits

0x052c,	// (0x0000f429) cell_pinb_pane

0x0555,	// (0x0000f452) cell_pinb_pane_g1_ParamLimits

0x0555,	// (0x0000f452) cell_pinb_pane_g1

0x0565,	// (0x0000f462) cell_pinb_pane_g2_ParamLimits

0x0565,	// (0x0000f462) cell_pinb_pane_g2

0x9be9,	// (0x00018ae6) cell_pinb_pane_g3_ParamLimits

0x9be9,	// (0x00018ae6) cell_pinb_pane_g3

0x0002,

0xf129,	// (0x0001e026) cell_pinb_pane_g_ParamLimits

0xf129,	// (0x0001e026) cell_pinb_pane_g

0x9913,	// (0x00018810) grid_highlight_pane_cp01

0x0571,	// (0x0000f46e) list_pinb_item_pane_ParamLimits

0x0571,	// (0x0000f46e) list_pinb_item_pane

0x9913,	// (0x00018810) list_highlight_pane_cp02

0x0583,	// (0x0000f480) list_pinb_item_pane_g1_ParamLimits

0x0583,	// (0x0000f480) list_pinb_item_pane_g1

0x0590,	// (0x0000f48d) list_pinb_item_pane_g2_ParamLimits

0x0590,	// (0x0000f48d) list_pinb_item_pane_g2

0x059c,	// (0x0000f499) list_pinb_item_pane_g3_ParamLimits

0x059c,	// (0x0000f499) list_pinb_item_pane_g3

0x05ad,	// (0x0000f4aa) list_pinb_item_pane_g4_ParamLimits

0x05ad,	// (0x0000f4aa) list_pinb_item_pane_g4

0x0003,

0xf130,	// (0x0001e02d) list_pinb_item_pane_g_ParamLimits

0xf130,	// (0x0001e02d) list_pinb_item_pane_g

0x05b9,	// (0x0000f4b6) list_pinb_item_pane_t1_ParamLimits

0x05b9,	// (0x0000f4b6) list_pinb_item_pane_t1

0x05ee,	// (0x0000f4eb) calc_display_pane

0x0616,	// (0x0000f513) calc_paper_pane

0x0639,	// (0x0000f536) grid_calc_pane

0x9913,	// (0x00018810) bg_list_pane_cp01

0x0667,	// (0x0000f564) clock_g1

0x066f,	// (0x0000f56c) clock_g2

0x0001,

0xf139,	// (0x0001e036) clock_g

0x0677,	// (0x0000f574) clock_t1_ParamLimits

0x0677,	// (0x0000f574) clock_t1

0x068c,	// (0x0000f589) clock_t2_ParamLimits

0x068c,	// (0x0000f589) clock_t2

0x069e,	// (0x0000f59b) clock_t3_ParamLimits

0x069e,	// (0x0000f59b) clock_t3

0x06b0,	// (0x0000f5ad) clock_t4_ParamLimits

0x06b0,	// (0x0000f5ad) clock_t4

0x06c2,	// (0x0000f5bf) clock_t5_ParamLimits

0x06c2,	// (0x0000f5bf) clock_t5

0x06d7,	// (0x0000f5d4) clock_t6_ParamLimits

0x06d7,	// (0x0000f5d4) clock_t6

0x06e9,	// (0x0000f5e6) clock_t7_ParamLimits

0x06e9,	// (0x0000f5e6) clock_t7

0x06fb,	// (0x0000f5f8) clock_t8_ParamLimits

0x06fb,	// (0x0000f5f8) clock_t8

0x070f,	// (0x0000f60c) clock_t9_ParamLimits

0x070f,	// (0x0000f60c) clock_t9

0x0008,

0xf13e,	// (0x0001e03b) clock_t_ParamLimits

0xf13e,	// (0x0001e03b) clock_t

0x9bfd,	// (0x00018afa) popup_clock_analogue_window_cp02

0x9bfd,	// (0x00018afa) popup_clock_digital_window_cp01

0x9c05,	// (0x00018b02) listscroll_help_pane

0x9913,	// (0x00018810) phob_pre_status_pane

0x9c0f,	// (0x00018b0c) grid_qdial_pane

0x9b6e,	// (0x00018a6b) listscroll_mce_pane

0x9b6e,	// (0x00018a6b) bg_notes_pane

0x9c19,	// (0x00018b16) list_notes_pane

0x0723,	// (0x0000f620) scroll_pane_cp06

0x9c27,	// (0x00018b24) bg_calc_paper_pane

0x9c3b,	// (0x00018b38) list_calc_pane

0x9c55,	// (0x00018b52) bg_calc_display_pane

0x0737,	// (0x0000f634) calc_display_pane_t1

0x0749,	// (0x0000f646) calc_display_pane_t2

0x9c61,	// (0x00018b5e) calc_display_pane_t3

0x0002,

0xf151,	// (0x0001e04e) calc_display_pane_t

0x075b,	// (0x0000f658) cell_calc_pane_ParamLimits

0x075b,	// (0x0000f658) cell_calc_pane

0x9c73,	// (0x00018b70) bg_calc_paper_pane_g1

0x9c7f,	// (0x00018b7c) bg_calc_paper_pane_g2

0x9c8b,	// (0x00018b88) bg_calc_paper_pane_g3

0x9c97,	// (0x00018b94) bg_calc_paper_pane_g4

0x9ca3,	// (0x00018ba0) bg_calc_paper_pane_g5

0x0790,	// (0x0000f68d) bg_calc_paper_pane_g6

0x079f,	// (0x0000f69c) bg_calc_paper_pane_g7

0x07ae,	// (0x0000f6ab) bg_calc_paper_pane_g8

0x0007,

0xf158,	// (0x0001e055) bg_calc_paper_pane_g

0x07c1,	// (0x0000f6be) calc_bg_paper_pane_g9

0x07d4,	// (0x0000f6d1) list_calc_item_pane_ParamLimits

0x07d4,	// (0x0000f6d1) list_calc_item_pane

0x9caf,	// (0x00018bac) list_calc_item_pane_g1

0x9cbc,	// (0x00018bb9) list_calc_item_pane_t1_ParamLimits

0x9cbc,	// (0x00018bb9) list_calc_item_pane_t1

0x07e9,	// (0x0000f6e6) list_calc_item_pane_t2_ParamLimits

0x07e9,	// (0x0000f6e6) list_calc_item_pane_t2

0x0001,

0xf169,	// (0x0001e066) list_calc_item_pane_t_ParamLimits

0xf169,	// (0x0001e066) list_calc_item_pane_t

0x9cce,	// (0x00018bcb) cell_calc_pane_g1

0x9cd8,	// (0x00018bd5) grid_highlight_pane_cp02

0x081b,	// (0x0000f718) bg_calc_display_pane_g1

0x0824,	// (0x0000f721) bg_calc_display_pane_g2

0x082e,	// (0x0000f72b) bg_calc_display_pane_g3

0x0002,

0xf173,	// (0x0001e070) bg_calc_display_pane_g

0x0837,	// (0x0000f734) cell_qdial_pane_ParamLimits

0x0837,	// (0x0000f734) cell_qdial_pane

0x084b,	// (0x0000f748) cell_qdial_pane_g1_ParamLimits

0x084b,	// (0x0000f748) cell_qdial_pane_g1

0x0861,	// (0x0000f75e) cell_qdial_pane_g2_ParamLimits

0x0861,	// (0x0000f75e) cell_qdial_pane_g2

0x9cfa,	// (0x00018bf7) cell_qdial_pane_g3_ParamLimits

0x9cfa,	// (0x00018bf7) cell_qdial_pane_g3

0x0003,

0xf17a,	// (0x0001e077) cell_qdial_pane_g_ParamLimits

0xf17a,	// (0x0001e077) cell_qdial_pane_g

0x0888,	// (0x0000f785) cell_qdial_pane_t1_ParamLimits

0x0888,	// (0x0000f785) cell_qdial_pane_t1

0x08a0,	// (0x0000f79d) cell_qdial_pane_t2_ParamLimits

0x08a0,	// (0x0000f79d) cell_qdial_pane_t2

0x08b3,	// (0x0000f7b0) cell_qdial_pane_t3_ParamLimits

0x08b3,	// (0x0000f7b0) cell_qdial_pane_t3

0x0002,

0xf183,	// (0x0001e080) cell_qdial_pane_t_ParamLimits

0xf183,	// (0x0001e080) cell_qdial_pane_t

0x9913,	// (0x00018810) grid_highlight_pane_cp04

0x9d06,	// (0x00018c03) thumbnail_qdial_pane_ParamLimits

0x9d06,	// (0x00018c03) thumbnail_qdial_pane

0x9d62,	// (0x00018c5f) list_help_pane

0x9d6b,	// (0x00018c68) scroll_pane_cp02

0x08c6,	// (0x0000f7c3) help_list_pane_t1_ParamLimits

0x08c6,	// (0x0000f7c3) help_list_pane_t1

0x9d74,	// (0x00018c71) bg_notes_pane_g2

0x9d7c,	// (0x00018c79) bg_notes_pane_g3

0x9d84,	// (0x00018c81) notes_bg_pane_g1

0x9d8c,	// (0x00018c89) notes_bg_pane_g4

0x9d94,	// (0x00018c91) notes_bg_pane_g5

0x9d9c,	// (0x00018c99) notes_bg_pane_g6

0x9da4,	// (0x00018ca1) notes_bg_pane_g7

0x9dac,	// (0x00018ca9) notes_bg_pane_g8

0x9db4,	// (0x00018cb1) notes_bg_pane_g9

0x0006,

0xf1a1,	// (0x0001e09e) notes_bg_pane_g

0x08e3,	// (0x0000f7e0) list_notes_text_pane_ParamLimits

0x08e3,	// (0x0000f7e0) list_notes_text_pane

0x9dbc,	// (0x00018cb9) list_notes_text_pane_g1

0x08f8,	// (0x0000f7f5) list_notes_text_pane_t1

0x0906,	// (0x0000f803) listscroll_cale_week_pane

0x0932,	// (0x0000f82f) bg_cale_heading_pane

0x9ddf,	// (0x00018cdc) bg_cale_pane_cp01

0x094a,	// (0x0000f847) cale_week_corner_pane

0x0969,	// (0x0000f866) cale_week_day_heading_pane

0x0986,	// (0x0000f883) cale_week_scroll_pane_g1

0x0999,	// (0x0000f896) cale_week_scroll_pane_g2

0x09b1,	// (0x0000f8ae) cale_week_scroll_pane_g3

0x09c9,	// (0x0000f8c6) cale_week_scroll_pane_g4

0x09e1,	// (0x0000f8de) cale_week_scroll_pane_g5

0x0a01,	// (0x0000f8fe) cale_week_scroll_pane_g6

0x0a21,	// (0x0000f91e) cale_week_scroll_pane_g7

0x0a41,	// (0x0000f93e) cale_week_scroll_pane_g8

0x0a65,	// (0x0000f962) cale_week_scroll_pane_g9

0x0a7d,	// (0x0000f97a) cale_week_scroll_pane_g10

0x0a95,	// (0x0000f992) cale_week_scroll_pane_g11

0x0aad,	// (0x0000f9aa) cale_week_scroll_pane_g12

0x0ac5,	// (0x0000f9c2) cale_week_scroll_pane_g13

0x0ac5,	// (0x0000f9c2) cale_week_scroll_pane_g14

0x0ac5,	// (0x0000f9c2) cale_week_scroll_pane_g15

0x000f,

0xf1b0,	// (0x0001e0ad) cale_week_scroll_pane_g

0x0b01,	// (0x0000f9fe) cale_week_time_pane

0x0b25,	// (0x0000fa22) grid_cale_week_pane

0x9e0e,	// (0x00018d0b) scroll_pane_cp08

0x0b4b,	// (0x0000fa48) cell_cale_week_pane_ParamLimits

0x0b4b,	// (0x0000fa48) cell_cale_week_pane

0x0bd9,	// (0x0000fad6) cale_week_day_heading_pane_t1

0x0c1e,	// (0x0000fb1b) cale_week_day_heading_pane_t2

0x0c68,	// (0x0000fb65) cale_week_day_heading_pane_t3

0x0cb2,	// (0x0000fbaf) cale_week_day_heading_pane_t4

0x0cfc,	// (0x0000fbf9) cale_week_day_heading_pane_t5

0x0d4e,	// (0x0000fc4b) cale_week_day_heading_pane_t6

0x0da0,	// (0x0000fc9d) cale_week_day_heading_pane_t7

0x0006,

0xf1d1,	// (0x0001e0ce) cale_week_day_heading_pane_t

0x9e2b,	// (0x00018d28) bg_cale_side_pane

0x0de5,	// (0x0000fce2) cale_week_time_pane_t1

0x0dff,	// (0x0000fcfc) cale_week_time_pane_t2

0x0e19,	// (0x0000fd16) cale_week_time_pane_t3

0x0e33,	// (0x0000fd30) cale_week_time_pane_t4

0x0e4d,	// (0x0000fd4a) cale_week_time_pane_t5

0x0e67,	// (0x0000fd64) cale_week_time_pane_t6

0x0e81,	// (0x0000fd7e) cale_week_time_pane_t7

0x0e9b,	// (0x0000fd98) cale_week_time_pane_t8

0x0007,

0xf1e0,	// (0x0001e0dd) cale_week_time_pane_t

0x0ebb,	// (0x0000fdb8) cell_cale_week_pane_g2

0x0eda,	// (0x0000fdd7) cell_cale_week_pane_g3_ParamLimits

0x0eda,	// (0x0000fdd7) cell_cale_week_pane_g3

0x9e39,	// (0x00018d36) grid_highlight_pane_cp07

0x9e41,	// (0x00018d3e) listscroll_gms_pane

0x9e4b,	// (0x00018d48) grid_gms_pane

0x9e54,	// (0x00018d51) listscroll_gms_pane_g1

0x9e5c,	// (0x00018d59) listscroll_gms_pane_g2

0x0001,

0xf1f1,	// (0x0001e0ee) listscroll_gms_pane_g

0x0ef2,	// (0x0000fdef) scroll_pane_cp010

0x0efd,	// (0x0000fdfa) cell_gms_pane_ParamLimits

0x0efd,	// (0x0000fdfa) cell_gms_pane

0x0f10,	// (0x0000fe0d) cell_gms_pane_g1

0x9e64,	// (0x00018d61) cell_gms_pane_g2

0x9e6c,	// (0x00018d69) cell_gms_pane_g3

0x9e75,	// (0x00018d72) cell_gms_pane_g4

0x0003,

0xf1f6,	// (0x0001e0f3) cell_gms_pane_g

0x9e7e,	// (0x00018d7b) grid_highlight_pane_cp09

0x33e8,	// (0x000122e5) phob_pre_status_pane_g1

0x33f0,	// (0x000122ed) phob_pre_status_pane_g2

0x33f8,	// (0x000122f5) phob_pre_status_pane_g3

0x3400,	// (0x000122fd) phob_pre_status_pane_g4

0x0004,

0xf5e1,	// (0x0001e4de) phob_pre_status_pane_g

0x3410,	// (0x0001230d) phob_pre_status_pane_t1

0x341e,	// (0x0001231b) phob_pre_status_pane_t2

0x342e,	// (0x0001232b) phob_pre_status_pane_t3

0x0002,

0xf5ec,	// (0x0001e4e9) phob_pre_status_pane_t

0x9e86,	// (0x00018d83) bg_list_pane_cp05

0x0f20,	// (0x0000fe1d) grid_vorec_pane

0x0f28,	// (0x0000fe25) vorec_t1

0x0f36,	// (0x0000fe33) vorec_t2

0x0f44,	// (0x0000fe41) vorec_t3

0x0f52,	// (0x0000fe4f) vorec_t4

0x945c,	// (0x00018359) vorec_t5

0x946a,	// (0x00018367) vorec_t6

0x0004,

0xf1ff,	// (0x0001e0fc) vorec_t

0x9478,	// (0x00018375) wait_bar_pane_cp01

0x0f6e,	// (0x0000fe6b) cell_vorec_pane_ParamLimits

0x0f6e,	// (0x0000fe6b) cell_vorec_pane

0x9e8e,	// (0x00018d8b) cell_vorec_pane_g1

0x9913,	// (0x00018810) grid_highlight_pane_cp05

0x0f96,	// (0x0000fe93) cams_zoom_pane

0x0fa5,	// (0x0000fea2) image_vga_pane

0x0fbf,	// (0x0000febc) main_camera_pane_g1

0x0fd1,	// (0x0000fece) main_camera_pane_g2

0x0fe1,	// (0x0000fede) main_camera_pane_g3

0x0ff1,	// (0x0000feee) main_camera_pane_g4

0x1001,	// (0x0000fefe) main_camera_pane_g5

0x1011,	// (0x0000ff0e) main_camera_pane_g6

0x1023,	// (0x0000ff20) main_camera_pane_g7

0x0007,

0xf20a,	// (0x0001e107) main_camera_pane_g

0x1033,	// (0x0000ff30) main_camera_pane_t1

0x1049,	// (0x0000ff46) main_camera_pane_t2

0x0001,

0xf21b,	// (0x0001e118) main_camera_pane_t

0x1083,	// (0x0000ff80) cams_zoom_pane_cp_ParamLimits

0x1083,	// (0x0000ff80) cams_zoom_pane_cp

0x10ab,	// (0x0000ffa8) image_cif_pane_ParamLimits

0x10ab,	// (0x0000ffa8) image_cif_pane

0x10e1,	// (0x0000ffde) image_subqcif_pane

0x10e9,	// (0x0000ffe6) main_video_pane_g1_ParamLimits

0x10e9,	// (0x0000ffe6) main_video_pane_g1

0x110d,	// (0x0001000a) main_video_pane_g2_ParamLimits

0x110d,	// (0x0001000a) main_video_pane_g2

0x1141,	// (0x0001003e) main_video_pane_g3_ParamLimits

0x1141,	// (0x0001003e) main_video_pane_g3

0x116f,	// (0x0001006c) main_video_pane_g4_ParamLimits

0x116f,	// (0x0001006c) main_video_pane_g4

0x119d,	// (0x0001009a) main_video_pane_g5_ParamLimits

0x119d,	// (0x0001009a) main_video_pane_g5

0x9ea4,	// (0x00018da1) main_video_pane_g6_ParamLimits

0x9ea4,	// (0x00018da1) main_video_pane_g6

0x0006,

0xf220,	// (0x0001e11d) main_video_pane_g_ParamLimits

0xf220,	// (0x0001e11d) main_video_pane_g

0x11c6,	// (0x000100c3) main_video_pane_t1_ParamLimits

0x11c6,	// (0x000100c3) main_video_pane_t1

0x9ebe,	// (0x00018dbb) cams_zoom_pane_g1

0x9ec7,	// (0x00018dc4) cams_zoom_pane_g2

0x9ed0,	// (0x00018dcd) cams_zoom_pane_g3

0x9ed9,	// (0x00018dd6) cams_zoom_pane_g4

0x0003,

0xf22f,	// (0x0001e12c) cams_zoom_pane_g

0x1223,	// (0x00010120) grid_cams_pane

0x123d,	// (0x0001013a) linegrid_cams_pane

0x1251,	// (0x0001014e) cell_cams_pane_ParamLimits

0x1251,	// (0x0001014e) cell_cams_pane

0x9ee2,	// (0x00018ddf) cams_burst_image_pane

0x9eea,	// (0x00018de7) cell_cams_pane_g1

0x9913,	// (0x00018810) grid_highlight_pane_cp03

0x9cce,	// (0x00018bcb) mp_bg_pane_g1

0x9913,	// (0x00018810) bg_list_pane_cp03

0xbd83,	// (0x0001ac80) bg_mp_pane

0xbd8b,	// (0x0001ac88) grid_mp_pane

0xbd93,	// (0x0001ac90) media_player_g1

0xbd9b,	// (0x0001ac98) media_player_t1

0xbda9,	// (0x0001aca6) media_player_t2

0xbdb7,	// (0x0001acb4) media_player_t3

0xbdc5,	// (0x0001acc2) media_player_t4

0xbdd3,	// (0x0001acd0) media_player_t5

0xbde1,	// (0x0001acde) media_player_t6

0xbdef,	// (0x0001acec) media_player_t7

0x0006,

0xf5cb,	// (0x0001e4c8) media_player_t

0xbdfd,	// (0x0001acfa) wait_bar_pane_cp02

0xf5b0,	// (0x0001e4ad) main_usb_pane_t

0x33df,	// (0x000122dc) cell_mp_pane

0x9cce,	// (0x00018bcb) cell_mp_pane_g1

0x9913,	// (0x00018810) grid_highlight_pane_cp06

0x9ef2,	// (0x00018def) grid_skin_colour_pane

0x9efa,	// (0x00018df7) list_highlight_pane_cp03

0x1380,	// (0x0001027d) skin_g1

0x9f02,	// (0x00018dff) skin_t1

0x9f11,	// (0x00018e0e) skin_t2

0x0001,

0xf264,	// (0x0001e161) skin_t

0x1388,	// (0x00010285) cell_skin_colour_pane_ParamLimits

0x1388,	// (0x00010285) cell_skin_colour_pane

0x9f1f,	// (0x00018e1c) cell_skin_colour_pane_g1

0x1401,	// (0x000102fe) call_video_g1_ParamLimits

0x1401,	// (0x000102fe) call_video_g1

0x141d,	// (0x0001031a) call_video_g2_ParamLimits

0x141d,	// (0x0001031a) call_video_g2

0x0001,

0xf269,	// (0x0001e166) call_video_g_ParamLimits

0xf269,	// (0x0001e166) call_video_g

0x146f,	// (0x0001036c) call_video_uplink_pane_cp1_ParamLimits

0x146f,	// (0x0001036c) call_video_uplink_pane_cp1

0x9f31,	// (0x00018e2e) call_video_uplink_pane_cp2

0x150e,	// (0x0001040b) video_down_crop_pane_ParamLimits

0x150e,	// (0x0001040b) video_down_crop_pane

0x1605,	// (0x00010502) video_down_pane_ParamLimits

0x1605,	// (0x00010502) video_down_pane

0x9f39,	// (0x00018e36) video_down_subqcif_pane_ParamLimits

0x9f39,	// (0x00018e36) video_down_subqcif_pane

0x9f51,	// (0x00018e4e) video_down_subqcif_pane_cp_ParamLimits

0x9f51,	// (0x00018e4e) video_down_subqcif_pane_cp

0x9f77,	// (0x00018e74) im_reading_pane_ParamLimits

0x9f77,	// (0x00018e74) im_reading_pane

0x1713,	// (0x00010610) im_writing_pane_ParamLimits

0x1713,	// (0x00010610) im_writing_pane

0x1729,	// (0x00010626) im_reading_pane_t1

0x9f91,	// (0x00018e8e) list_im_pane

0x9fa2,	// (0x00018e9f) scroll_pane_cp07

0x1762,	// (0x0001065f) im_writing_pane_t1_ParamLimits

0x1762,	// (0x0001065f) im_writing_pane_t1

0x9fbb,	// (0x00018eb8) im_writing_pane_t2_ParamLimits

0x9fbb,	// (0x00018eb8) im_writing_pane_t2

0x0001,

0xf273,	// (0x0001e170) im_writing_pane_t_ParamLimits

0xf273,	// (0x0001e170) im_writing_pane_t

0x9913,	// (0x00018810) input_focus_pane_cp04

0x9913,	// (0x00018810) input_focus_pane_cp05

0x1777,	// (0x00010674) list_im_single_pane_ParamLimits

0x1777,	// (0x00010674) list_im_single_pane

0x178b,	// (0x00010688) list_single_im_pane_t1

0x339f,	// (0x0001229c) blid_accuracy_pane

0x33a7,	// (0x000122a4) blid_compass_pane

0x33b1,	// (0x000122ae) main_location_t1

0x33c1,	// (0x000122be) main_location_t2

0x33d1,	// (0x000122ce) main_location_t3

0x0002,

0xf5da,	// (0x0001e4d7) main_location_t

0x9913,	// (0x00018810) aid_levels_location

0x9cce,	// (0x00018bcb) blid_accuracy_pane_g1

0x9cce,	// (0x00018bcb) blid_accuracy_pane_g2

0x0001,

0xf2d5,	// (0x0001e1d2) blid_accuracy_pane_g

0xa003,	// (0x00018f00) wml_content_pane

0xa041,	// (0x00018f3e) wml_button_pane_ParamLimits

0xa041,	// (0x00018f3e) wml_button_pane

0x179a,	// (0x00010697) wml_list_single_large_pane_ParamLimits

0x179a,	// (0x00010697) wml_list_single_large_pane

0x17af,	// (0x000106ac) wml_list_single_medium_pane_ParamLimits

0x17af,	// (0x000106ac) wml_list_single_medium_pane

0x17c5,	// (0x000106c2) wml_list_single_small_pane_ParamLimits

0x17c5,	// (0x000106c2) wml_list_single_small_pane

0xa055,	// (0x00018f52) wml_selection_box_pane_ParamLimits

0xa055,	// (0x00018f52) wml_selection_box_pane

0xa068,	// (0x00018f65) wml_list_single_pane_t1

0xa077,	// (0x00018f74) wml_list_single_medium_pane_t1

0xa086,	// (0x00018f83) wml_list_single_large_pane_t1

0xa095,	// (0x00018f92) input_focus_pane_cp02_ParamLimits

0xa095,	// (0x00018f92) input_focus_pane_cp02

0xa0a8,	// (0x00018fa5) wml_selection_box_pane_g1

0xa0b1,	// (0x00018fae) wml_selection_box_pane_t1_ParamLimits

0xa0b1,	// (0x00018fae) wml_selection_box_pane_t1

0x9b6e,	// (0x00018a6b) bg_wml_button_pane_ParamLimits

0x9b6e,	// (0x00018a6b) bg_wml_button_pane

0xa0c9,	// (0x00018fc6) wml_button_pane_g1

0xa0d1,	// (0x00018fce) wml_button_pane_t1

0xa0c9,	// (0x00018fc6) wml_button_bg_pane_g1

0xa0e1,	// (0x00018fde) wml_button_bg_pane_g2

0xa0e9,	// (0x00018fe6) wml_button_bg_pane_g3

0xa0f1,	// (0x00018fee) wml_button_bg_pane_g4

0xa0f9,	// (0x00018ff6) wml_button_bg_pane_g5

0xa101,	// (0x00018ffe) wml_button_bg_pane_g6

0xa109,	// (0x00019006) wml_button_bg_pane_g7

0xa111,	// (0x0001900e) wml_button_bg_pane_g8

0xa119,	// (0x00019016) wml_button_bg_pane_g9

0x0008,

0xf278,	// (0x0001e175) wml_button_bg_pane_g

0x17dd,	// (0x000106da) bg_list_pane_cp02

0xa121,	// (0x0001901e) mce_header_pane_ParamLimits

0xa121,	// (0x0001901e) mce_header_pane

0xa137,	// (0x00019034) mce_icon_pane

0xa137,	// (0x00019034) mce_image_pane

0xa140,	// (0x0001903d) mce_text_pane_ParamLimits

0xa140,	// (0x0001903d) mce_text_pane

0x17e5,	// (0x000106e2) scroll_pane_cp03

0xa039,	// (0x00018f36) scroll_pane_cp04

0xa153,	// (0x00019050) scroll_pane_cp05_ParamLimits

0xa153,	// (0x00019050) scroll_pane_cp05

0x17ef,	// (0x000106ec) mce_header_field_pane_ParamLimits

0x17ef,	// (0x000106ec) mce_header_field_pane

0x1806,	// (0x00010703) mce_header_field_pane_2_ParamLimits

0x1806,	// (0x00010703) mce_header_field_pane_2

0x181c,	// (0x00010719) mce_header_field_pane_3

0x1824,	// (0x00010721) list_single_mce_message_pane_ParamLimits

0x1824,	// (0x00010721) list_single_mce_message_pane

0x1839,	// (0x00010736) list_single_mce_smart_pane_ParamLimits

0x1839,	// (0x00010736) list_single_mce_smart_pane

0xa15f,	// (0x0001905c) input_focus_pane_cp03

0xa168,	// (0x00019065) list_header_data_pane

0x1859,	// (0x00010756) mce_header_field_pane_t1

0x1869,	// (0x00010766) list_single_mce_header_pane_ParamLimits

0x1869,	// (0x00010766) list_single_mce_header_pane

0xa170,	// (0x0001906d) list_single_mce_header_pane_t1

0xa17f,	// (0x0001907c) list_single_mce_message_pane_g1

0xa187,	// (0x00019084) list_single_mce_message_pane_t1

0x18a3,	// (0x000107a0) bg_cale_heading_pane_cp01_ParamLimits

0x18a3,	// (0x000107a0) bg_cale_heading_pane_cp01

0xa195,	// (0x00019092) bg_cale_pane_cp02_ParamLimits

0xa195,	// (0x00019092) bg_cale_pane_cp02

0x18d2,	// (0x000107cf) cale_month_corner_pane

0x18f1,	// (0x000107ee) cale_month_day_heading_pane_ParamLimits

0x18f1,	// (0x000107ee) cale_month_day_heading_pane

0x1938,	// (0x00010835) cale_month_pane_g1_ParamLimits

0x1938,	// (0x00010835) cale_month_pane_g1

0x195c,	// (0x00010859) cale_month_pane_g2_ParamLimits

0x195c,	// (0x00010859) cale_month_pane_g2

0x198c,	// (0x00010889) cale_month_pane_g3_ParamLimits

0x198c,	// (0x00010889) cale_month_pane_g3

0x19c8,	// (0x000108c5) cale_month_pane_g4_ParamLimits

0x19c8,	// (0x000108c5) cale_month_pane_g4

0x1a04,	// (0x00010901) cale_month_pane_g5_ParamLimits

0x1a04,	// (0x00010901) cale_month_pane_g5

0x1a4c,	// (0x00010949) cale_month_pane_g6_ParamLimits

0x1a4c,	// (0x00010949) cale_month_pane_g6

0x1a98,	// (0x00010995) cale_month_pane_g7_ParamLimits

0x1a98,	// (0x00010995) cale_month_pane_g7

0x1aec,	// (0x000109e9) cale_month_pane_g8_ParamLimits

0x1aec,	// (0x000109e9) cale_month_pane_g8

0x1b40,	// (0x00010a3d) cale_month_pane_g9_ParamLimits

0x1b40,	// (0x00010a3d) cale_month_pane_g9

0x1b92,	// (0x00010a8f) cale_month_pane_g10_ParamLimits

0x1b92,	// (0x00010a8f) cale_month_pane_g10

0x1be4,	// (0x00010ae1) cale_month_pane_g11_ParamLimits

0x1be4,	// (0x00010ae1) cale_month_pane_g11

0x1c36,	// (0x00010b33) cale_month_pane_g12_ParamLimits

0x1c36,	// (0x00010b33) cale_month_pane_g12

0x1c88,	// (0x00010b85) cale_month_pane_g13_ParamLimits

0x1c88,	// (0x00010b85) cale_month_pane_g13

0x000c,

0xf28b,	// (0x0001e188) cale_month_pane_g_ParamLimits

0xf28b,	// (0x0001e188) cale_month_pane_g

0x1cda,	// (0x00010bd7) cale_month_week_pane

0x1cfe,	// (0x00010bfb) grid_cale_month_pane_ParamLimits

0x1cfe,	// (0x00010bfb) grid_cale_month_pane

0x1d3c,	// (0x00010c39) cale_month_day_heading_pane_t1

0x1dc2,	// (0x00010cbf) cale_month_day_heading_pane_t2

0x1e53,	// (0x00010d50) cale_month_day_heading_pane_t3

0x1ee4,	// (0x00010de1) cale_month_day_heading_pane_t4

0x1f79,	// (0x00010e76) cale_month_day_heading_pane_t5

0x201a,	// (0x00010f17) cale_month_day_heading_pane_t6

0x20bb,	// (0x00010fb8) cale_month_day_heading_pane_t7

0x0006,

0xf2a6,	// (0x0001e1a3) cale_month_day_heading_pane_t

0x9e2b,	// (0x00018d28) bg_cale_side_pane_cp01

0x2164,	// (0x00011061) cale_month_week_pane_t1

0x217d,	// (0x0001107a) cale_month_week_pane_t2

0x2196,	// (0x00011093) cale_month_week_pane_t3

0x21af,	// (0x000110ac) cale_month_week_pane_t4

0x21c8,	// (0x000110c5) cale_month_week_pane_t5

0x21e1,	// (0x000110de) cale_month_week_pane_t6

0x0005,

0xf2b5,	// (0x0001e1b2) cale_month_week_pane_t

0x21fa,	// (0x000110f7) cell_cale_month_pane_ParamLimits

0x21fa,	// (0x000110f7) cell_cale_month_pane

0xa1d4,	// (0x000190d1) cell_cale_month_pane_g1

0x234e,	// (0x0001124b) cell_cale_month_pane_t1_ParamLimits

0x234e,	// (0x0001124b) cell_cale_month_pane_t1

0x9e39,	// (0x00018d36) grid_highlight_pane_cp08

0x9cce,	// (0x00018bcb) main_smil_g1

0x237a,	// (0x00011277) smil_status_pane

0xa1e0,	// (0x000190dd) smil_text_pane

0xbca3,	// (0x0001aba0) bg_popup_call3_rect_pane_g8

0xbcab,	// (0x0001aba8) bg_popup_call3_rect_pane_g9

0x0008,

0xf56e,	// (0x0001e46b) bg_popup_call3_rect_pane_g

0xbf46,	// (0x0001ae43) smil_status_volume_pane_g1

0xa1ea,	// (0x000190e7) smil_status_pane_t1

0xbf79,	// (0x0001ae76) volume_smil_pane

0xa201,	// (0x000190fe) list_smil_text_pane

0x238d,	// (0x0001128a) scroll_pane_cp011

0x2398,	// (0x00011295) smil_text_list_pane_t1_ParamLimits

0x2398,	// (0x00011295) smil_text_list_pane_t1

0xa20b,	// (0x00019108) aid_volume_smil_ParamLimits

0xa20b,	// (0x00019108) aid_volume_smil

0x9cce,	// (0x00018bcb) smil_volume_pane_g1

0x9cce,	// (0x00018bcb) smil_volume_pane_g2

0x0001,

0xf2d5,	// (0x0001e1d2) smil_volume_pane_g

0x0906,	// (0x0000f803) listscroll_cale_day_pane

0xa22d,	// (0x0001912a) bg_cale_pane

0xa245,	// (0x00019142) list_cale_pane

0xa268,	// (0x00019165) scroll_pane_cp09

0xa279,	// (0x00019176) cale_bg_pane_g1

0xa281,	// (0x0001917e) cale_bg_pane_g2

0xa289,	// (0x00019186) cale_bg_pane_g3

0xa291,	// (0x0001918e) cale_bg_pane_g4

0xa299,	// (0x00019196) cale_bg_pane_g5

0xa2a1,	// (0x0001919e) cale_bg_pane_g6

0xa2a9,	// (0x000191a6) cale_bg_pane_g7

0xa2b1,	// (0x000191ae) cale_bg_pane_g8

0xa2b9,	// (0x000191b6) cale_bg_pane_g9

0x0008,

0xf2da,	// (0x0001e1d7) cale_bg_pane_g

0x23dc,	// (0x000112d9) list_cale_time_pane_ParamLimits

0x23dc,	// (0x000112d9) list_cale_time_pane

0xa2c1,	// (0x000191be) list_cale_time_pane_g1_ParamLimits

0xa2c1,	// (0x000191be) list_cale_time_pane_g1

0xa2cd,	// (0x000191ca) list_cale_time_pane_g2_ParamLimits

0xa2cd,	// (0x000191ca) list_cale_time_pane_g2

0x23f1,	// (0x000112ee) list_cale_time_pane_g3_ParamLimits

0x23f1,	// (0x000112ee) list_cale_time_pane_g3

0x23ff,	// (0x000112fc) list_cale_time_pane_g4_ParamLimits

0x23ff,	// (0x000112fc) list_cale_time_pane_g4

0x240d,	// (0x0001130a) list_cale_time_pane_g5_ParamLimits

0x240d,	// (0x0001130a) list_cale_time_pane_g5

0x0005,

0xf2ed,	// (0x0001e1ea) list_cale_time_pane_g_ParamLimits

0xf2ed,	// (0x0001e1ea) list_cale_time_pane_g

0xa2e7,	// (0x000191e4) list_cale_time_pane_t1_ParamLimits

0xa2e7,	// (0x000191e4) list_cale_time_pane_t1

0xa30f,	// (0x0001920c) list_cale_time_pane_t2_ParamLimits

0xa30f,	// (0x0001920c) list_cale_time_pane_t2

0x276e,	// (0x0001166b) aid_blid_cardinal_pane

0x27ac,	// (0x000116a9) compass_pane_t4

0xa337,	// (0x00019234) list_cale_time_pane_t4_ParamLimits

0xa337,	// (0x00019234) list_cale_time_pane_t4

0x27ba,	// (0x000116b7) compass_pane_t5

0x27c8,	// (0x000116c5) compass_pane_t6

0x27d6,	// (0x000116d3) compass_pane_t7

0xa859,	// (0x00019756) navi_pane_cc_t1

0xaa48,	// (0x00019945) aid_phob_thumbnail_center_pane

0x2db7,	// (0x00011cb4) main_postcard_pane_g4_ParamLimits

0x0002,

0xf2fa,	// (0x0001e1f7) list_cale_time_pane_t_ParamLimits

0xf2fa,	// (0x0001e1f7) list_cale_time_pane_t

0x956a,	// (0x00018467) bg_popup_window_pane_cp02_ParamLimits

0x956a,	// (0x00018467) bg_popup_window_pane_cp02

0xa35f,	// (0x0001925c) heading_pane_cp01_ParamLimits

0xa35f,	// (0x0001925c) heading_pane_cp01

0xa36b,	// (0x00019268) loc_req_pane_ParamLimits

0xa36b,	// (0x00019268) loc_req_pane

0xa37b,	// (0x00019278) loc_type_pane_ParamLimits

0xa37b,	// (0x00019278) loc_type_pane

0xa38d,	// (0x0001928a) loc_type_pane_t1_ParamLimits

0xa38d,	// (0x0001928a) loc_type_pane_t1

0xa39f,	// (0x0001929c) loc_type_pane_t2_ParamLimits

0xa39f,	// (0x0001929c) loc_type_pane_t2

0xa3b1,	// (0x000192ae) loc_type_pane_t3_ParamLimits

0xa3b1,	// (0x000192ae) loc_type_pane_t3

0x0002,

0xf301,	// (0x0001e1fe) loc_type_pane_t_ParamLimits

0xf301,	// (0x0001e1fe) loc_type_pane_t

0xa3c3,	// (0x000192c0) list_loc_req_pane

0xa3cd,	// (0x000192ca) scroll_pane_cp012

0x241b,	// (0x00011318) list_single_loc_request_popup_menu_pane_ParamLimits

0x241b,	// (0x00011318) list_single_loc_request_popup_menu_pane

0xa3d8,	// (0x000192d5) list_single_loc_request_popup_menu_pane_g1_ParamLimits

0xa3d8,	// (0x000192d5) list_single_loc_request_popup_menu_pane_g1

0xa3e4,	// (0x000192e1) list_single_loc_request_popup_menu_pane_g2_ParamLimits

0xa3e4,	// (0x000192e1) list_single_loc_request_popup_menu_pane_g2

0x0001,

0xf308,	// (0x0001e205) list_single_loc_request_popup_menu_pane_g_ParamLimits

0xf308,	// (0x0001e205) list_single_loc_request_popup_menu_pane_g

0xa3f0,	// (0x000192ed) list_single_loc_request_popup_menu_pane_t1_ParamLimits

0xa3f0,	// (0x000192ed) list_single_loc_request_popup_menu_pane_t1

0x9b6e,	// (0x00018a6b) bg_popup_window_pane_cp03_ParamLimits

0x9b6e,	// (0x00018a6b) bg_popup_window_pane_cp03

0xa406,	// (0x00019303) heading_loc_req_pane_ParamLimits

0xa406,	// (0x00019303) heading_loc_req_pane

0x2428,	// (0x00011325) popup_dyc_status_message_window_g1_ParamLimits

0x2428,	// (0x00011325) popup_dyc_status_message_window_g1

0x243c,	// (0x00011339) popup_dyc_status_message_window_t1_ParamLimits

0x243c,	// (0x00011339) popup_dyc_status_message_window_t1

0x2451,	// (0x0001134e) popup_dyc_status_message_window_t2_ParamLimits

0x2451,	// (0x0001134e) popup_dyc_status_message_window_t2

0x2466,	// (0x00011363) popup_dyc_status_message_window_t3_ParamLimits

0x2466,	// (0x00011363) popup_dyc_status_message_window_t3

0x0002,

0xf30d,	// (0x0001e20a) popup_dyc_status_message_window_t_ParamLimits

0xf30d,	// (0x0001e20a) popup_dyc_status_message_window_t

0x9913,	// (0x00018810) bg_heading_pane_cp01

0xa412,	// (0x0001930f) heading_loc_req_pane_g1

0xa41a,	// (0x00019317) heading_loc_req_pane_g2

0xa422,	// (0x0001931f) heading_loc_req_pane_g3

0x0002,

0xf314,	// (0x0001e211) heading_loc_req_pane_g

0xa42a,	// (0x00019327) heading_loc_req_pane_t1

0xa439,	// (0x00019336) bg_popup_sub_pane_cp01_ParamLimits

0xa439,	// (0x00019336) bg_popup_sub_pane_cp01

0xa447,	// (0x00019344) popup_cale_events_window_g1_ParamLimits

0xa447,	// (0x00019344) popup_cale_events_window_g1

0xa467,	// (0x00019364) popup_cale_events_window_g2_ParamLimits

0xa467,	// (0x00019364) popup_cale_events_window_g2

0x0001,

0xf348,	// (0x0001e245) popup_cale_events_window_g_ParamLimits

0xf348,	// (0x0001e245) popup_cale_events_window_g

0xa487,	// (0x00019384) popup_cale_events_window_t1_ParamLimits

0xa487,	// (0x00019384) popup_cale_events_window_t1

0xa499,	// (0x00019396) popup_cale_events_window_t2_ParamLimits

0xa499,	// (0x00019396) popup_cale_events_window_t2

0xa4d7,	// (0x000193d4) popup_cale_events_window_t3_ParamLimits

0xa4d7,	// (0x000193d4) popup_cale_events_window_t3

0xa511,	// (0x0001940e) popup_cale_events_window_t4_ParamLimits

0xa511,	// (0x0001940e) popup_cale_events_window_t4

0x0003,

0xf34d,	// (0x0001e24a) popup_cale_events_window_t_ParamLimits

0xf34d,	// (0x0001e24a) popup_cale_events_window_t

0x2569,	// (0x00011466) call_type_pane

0x2579,	// (0x00011476) popup_call_status_window_g1

0x258d,	// (0x0001148a) popup_call_status_window_g2

0x25a1,	// (0x0001149e) popup_call_status_window_g3

0x0002,

0xf356,	// (0x0001e253) popup_call_status_window_g

0xa547,	// (0x00019444) call_type_pane_g1

0xa550,	// (0x0001944d) call_type_pane_g2

0x0001,

0xf35d,	// (0x0001e25a) call_type_pane_g

0x9913,	// (0x00018810) bg_popup_sub_pane_cp02

0xa559,	// (0x00019456) listscroll_popup_wml_pane

0xa561,	// (0x0001945e) list_wml_pane

0xa56b,	// (0x00019468) scroll_pane_cp013

0xa576,	// (0x00019473) list_single_graphic_popup_wml_pane_ParamLimits

0xa576,	// (0x00019473) list_single_graphic_popup_wml_pane

0x9cce,	// (0x00018bcb) list_single_graphic_popup_wml_pane_g1

0xa58a,	// (0x00019487) list_single_graphic_popup_wml_pane_g2

0x0001,

0xf362,	// (0x0001e25f) list_single_graphic_popup_wml_pane_g

0xa592,	// (0x0001948f) list_single_graphic_popup_wml_pane_t1

0xa5a8,	// (0x000194a5) aid_call_pane

0x9b66,	// (0x00018a63) popup_clock_analogue_window_g1

0x9b66,	// (0x00018a63) popup_clock_analogue_window_g2

0xa5b0,	// (0x000194ad) popup_clock_analogue_window_g3

0xa5b0,	// (0x000194ad) popup_clock_analogue_window_g4

0x9cce,	// (0x00018bcb) popup_clock_analogue_window_g5

0x0004,

0xf367,	// (0x0001e264) popup_clock_analogue_window_g

0xa5b8,	// (0x000194b5) popup_clock_analogue_window_t1

0xa5c6,	// (0x000194c3) clock_digital_number_pane_ParamLimits

0xa5c6,	// (0x000194c3) clock_digital_number_pane

0xa5d2,	// (0x000194cf) clock_digital_number_pane_cp02_ParamLimits

0xa5d2,	// (0x000194cf) clock_digital_number_pane_cp02

0xa5de,	// (0x000194db) clock_digital_number_pane_cp03_ParamLimits

0xa5de,	// (0x000194db) clock_digital_number_pane_cp03

0xa5ea,	// (0x000194e7) clock_digital_number_pane_cp04_ParamLimits

0xa5ea,	// (0x000194e7) clock_digital_number_pane_cp04

0xa5fa,	// (0x000194f7) clock_digital_separator_pane_ParamLimits

0xa5fa,	// (0x000194f7) clock_digital_separator_pane

0xa606,	// (0x00019503) popup_clock_digital_window_t1

0x9cce,	// (0x00018bcb) clock_digital_number_pane_g1

0x9cce,	// (0x00018bcb) clock_digital_number_pane_g2

0x0001,

0xf2d5,	// (0x0001e1d2) clock_digital_number_pane_g

0x9cce,	// (0x00018bcb) clock_digital_separator_pane_g1

0x9cce,	// (0x00018bcb) clock_digital_separator_pane_g2

0x0001,

0xf2d5,	// (0x0001e1d2) clock_digital_separator_pane_g

0x9913,	// (0x00018810) bg_popup_window_pane_cp04

0xa623,	// (0x00019520) heading_pane_cp03

0xa62b,	// (0x00019528) listscroll_popup_gms_pane

0xa633,	// (0x00019530) grid_large_graphic_popup_pane

0xa63d,	// (0x0001953a) listscroll_popup_gms_pane_g1

0xa645,	// (0x00019542) listscroll_popup_gms_pane_g2

0x0001,

0xf372,	// (0x0001e26f) listscroll_popup_gms_pane_g

0xa039,	// (0x00018f36) scroll_pane_cp014

0x25b0,	// (0x000114ad) cell_large_graphic_popup_pane_ParamLimits

0x25b0,	// (0x000114ad) cell_large_graphic_popup_pane

0x25c8,	// (0x000114c5) cell_large_graphic_popup_pane_g1_ParamLimits

0x25c8,	// (0x000114c5) cell_large_graphic_popup_pane_g1

0xa64d,	// (0x0001954a) cell_large_graphic_popup_pane_g2_ParamLimits

0xa64d,	// (0x0001954a) cell_large_graphic_popup_pane_g2

0xa659,	// (0x00019556) cell_large_graphic_popup_pane_g3_ParamLimits

0xa659,	// (0x00019556) cell_large_graphic_popup_pane_g3

0xa666,	// (0x00019563) cell_large_graphic_popup_pane_g4_ParamLimits

0xa666,	// (0x00019563) cell_large_graphic_popup_pane_g4

0x0003,

0xf377,	// (0x0001e274) cell_large_graphic_popup_pane_g_ParamLimits

0xf377,	// (0x0001e274) cell_large_graphic_popup_pane_g

0xa676,	// (0x00019573) grid_highlight_pane_cp010

0x9cce,	// (0x00018bcb) bg_popup_call_pane_g1

0xa680,	// (0x0001957d) list_single_graphic_popup_conf_pane_ParamLimits

0xa680,	// (0x0001957d) list_single_graphic_popup_conf_pane

0xa693,	// (0x00019590) list_highlight_pane_cp01

0xa69c,	// (0x00019599) list_single_graphic_popup_conf_pane_g1

0xa6a4,	// (0x000195a1) list_single_graphic_popup_conf_pane_g2

0x0001,

0xf380,	// (0x0001e27d) list_single_graphic_popup_conf_pane_g

0xa6ac,	// (0x000195a9) list_single_graphic_popup_conf_pane_t1

0xa6ba,	// (0x000195b7) linegrid_cams_pane_g1

0x25d4,	// (0x000114d1) linegrid_cams_pane_g2

0x9e6c,	// (0x00018d69) linegrid_cams_pane_g3

0xa6c3,	// (0x000195c0) linegrid_cams_pane_g4

0x25dd,	// (0x000114da) linegrid_cams_pane_g5

0x25e6,	// (0x000114e3) linegrid_cams_pane_g6

0x9e75,	// (0x00018d72) linegrid_cams_pane_g7

0x0006,

0xf385,	// (0x0001e282) linegrid_cams_pane_g

0xa6cc,	// (0x000195c9) popup_clock_analogue_window

0xa6cc,	// (0x000195c9) popup_clock_digital_window

0x9913,	// (0x00018810) popup_phob_thumbnail_window

0x9cce,	// (0x00018bcb) call_video_uplink_pane_g1

0xa6d5,	// (0x000195d2) call_video_uplink_pane_g2

0x0001,

0xf394,	// (0x0001e291) call_video_uplink_pane_g

0xa6dd,	// (0x000195da) video_uplink_pane

0xa6e5,	// (0x000195e2) mce_image_pane_g1

0x25f1,	// (0x000114ee) mce_image_pane_g2

0x25fb,	// (0x000114f8) mce_image_pane_g3

0x2603,	// (0x00011500) mce_image_pane_g4

0x260b,	// (0x00011508) mce_image_pane_g5

0x0004,

0xf399,	// (0x0001e296) mce_image_pane_g

0xa6ef,	// (0x000195ec) control_top_pane_stacon_cp01_ParamLimits

0xa6ef,	// (0x000195ec) control_top_pane_stacon_cp01

0xa703,	// (0x00019600) uni_indicator_pane_stacon_cp01_ParamLimits

0xa703,	// (0x00019600) uni_indicator_pane_stacon_cp01

0xa714,	// (0x00019611) bg_popup_sub_pane_cp03

0xa71e,	// (0x0001961b) chi_dic_find_pane

0x2613,	// (0x00011510) listscroll_chi_dic_pane

0xa726,	// (0x00019623) main_pane_chidic_g1

0xa72e,	// (0x0001962b) chi_dic_find_pane_t1

0xa73c,	// (0x00019639) find_chidic_pane

0xa745,	// (0x00019642) chi_dic_list_pane_ParamLimits

0xa745,	// (0x00019642) chi_dic_list_pane

0xa756,	// (0x00019653) scroll_pane_cp020

0xa75e,	// (0x0001965b) find_chidic_pane_t1

0x9913,	// (0x00018810) input_focus_pane_cp06

0x2627,	// (0x00011524) list_chi_dic_pane_ParamLimits

0x2627,	// (0x00011524) list_chi_dic_pane

0x2639,	// (0x00011536) list_chi_dic_pane_t1_ParamLimits

0x2639,	// (0x00011536) list_chi_dic_pane_t1

0x9913,	// (0x00018810) list_highlight_pane_cp020

0xa76d,	// (0x0001966a) bg_cale_heading_pane_g1

0x264c,	// (0x00011549) bg_cale_heading_pane_g2

0x2654,	// (0x00011551) bg_cale_heading_pane_g3

0x265c,	// (0x00011559) bg_cale_heading_pane_g4

0x2666,	// (0x00011563) bg_cale_heading_pane_g5

0x2670,	// (0x0001156d) bg_cale_heading_pane_g6

0x2678,	// (0x00011575) bg_cale_heading_pane_g7

0x2680,	// (0x0001157d) bg_cale_heading_pane_g8

0x268a,	// (0x00011587) bg_cale_heading_pane_g9

0x0008,

0xf3a4,	// (0x0001e2a1) bg_cale_heading_pane_g

0xa76d,	// (0x0001966a) bg_cale_side_pane_g1

0x2694,	// (0x00011591) bg_cale_side_pane_g2

0x269c,	// (0x00011599) bg_cale_side_pane_g3

0x26a4,	// (0x000115a1) bg_cale_side_pane_g4

0x26ac,	// (0x000115a9) bg_cale_side_pane_g5

0x26b4,	// (0x000115b1) bg_cale_side_pane_g6

0x26bc,	// (0x000115b9) bg_cale_side_pane_g7

0x26c4,	// (0x000115c1) bg_cale_side_pane_g8

0x26cc,	// (0x000115c9) bg_cale_side_pane_g9

0x0008,

0xf3b7,	// (0x0001e2b4) bg_cale_side_pane_g

0x26d4,	// (0x000115d1) popup_call_status_window_ParamLimits

0x26d4,	// (0x000115d1) popup_call_status_window

0xa775,	// (0x00019672) stacon_top_pane

0xa77d,	// (0x0001967a) status_pane_ParamLimits

0xa77d,	// (0x0001967a) status_pane

0xa792,	// (0x0001968f) status_small_pane

0xa79a,	// (0x00019697) control_pane

0x9913,	// (0x00018810) stacon_bottom_pane

0xa7a2,	// (0x0001969f) list_single_mce_smart_pane_t1_ParamLimits

0xa7a2,	// (0x0001969f) list_single_mce_smart_pane_t1

0xa7b5,	// (0x000196b2) list_single_mce_smart_pane_t2_ParamLimits

0xa7b5,	// (0x000196b2) list_single_mce_smart_pane_t2

0x0001,

0xf3ca,	// (0x0001e2c7) list_single_mce_smart_pane_t_ParamLimits

0xf3ca,	// (0x0001e2c7) list_single_mce_smart_pane_t

0x271d,	// (0x0001161a) compass_pane

0x2726,	// (0x00011623) main_location2_pane_t1

0x2738,	// (0x00011635) main_location2_pane_t2

0x274a,	// (0x00011647) main_location2_pane_t3

0x0003,

0xf3cf,	// (0x0001e2cc) main_location2_pane_t

0xa7d4,	// (0x000196d1) compass_pane_g1_ParamLimits

0xa7d4,	// (0x000196d1) compass_pane_g1

0x278e,	// (0x0001168b) compass_pane_t1

0x279d,	// (0x0001169a) compass_pane_t2

0x0005,

0xf3d8,	// (0x0001e2d5) compass_pane_t

0x27e4,	// (0x000116e1) text_secondary_cp61

0xa850,	// (0x0001974d) navi_pane_cams_g5

0xa8cc,	// (0x000197c9) navi_pane_im_t1

0xa8da,	// (0x000197d7) navi_pane_mp_g1_ParamLimits

0xa8da,	// (0x000197d7) navi_pane_mp_g1

0xa8ee,	// (0x000197eb) navi_pane_mp_g2_ParamLimits

0xa8ee,	// (0x000197eb) navi_pane_mp_g2

0xa8fa,	// (0x000197f7) navi_pane_mp_g3_ParamLimits

0xa8fa,	// (0x000197f7) navi_pane_mp_g3

0x0002,

0xf3ec,	// (0x0001e2e9) navi_pane_mp_g_ParamLimits

0xf3ec,	// (0x0001e2e9) navi_pane_mp_g

0xa906,	// (0x00019803) navi_pane_mp_t1

0xa914,	// (0x00019811) navi_pane_mp_t2

0x0002,

0xf3f3,	// (0x0001e2f0) navi_pane_mp_t

0xa97f,	// (0x0001987c) navi_pane_vt_g1

0xa906,	// (0x00019803) navi_pane_vt_t1

0xa987,	// (0x00019884) navi_slider_pane

0x9e86,	// (0x00018d83) zooming_pane

0xa997,	// (0x00019894) navi_slider_pane_g1

0xa9a0,	// (0x0001989d) navi_slider_pane_g2

0x0006,

0xf3fa,	// (0x0001e2f7) navi_slider_pane_g

0xa9cd,	// (0x000198ca) aid_levels_zoom

0xa9d5,	// (0x000198d2) zooming_pane_g1

0xa9dd,	// (0x000198da) zooming_pane_g2

0xa9dd,	// (0x000198da) zooming_pane_g3

0x0002,

0xf409,	// (0x0001e306) zooming_pane_g

0xa9e5,	// (0x000198e2) level_10_zoom

0xa9ee,	// (0x000198eb) level_11_zoom

0xa9f7,	// (0x000198f4) level_1_zoom

0xaa00,	// (0x000198fd) level_2_zoom

0xaa09,	// (0x00019906) level_3_zoom

0xaa12,	// (0x0001990f) level_4_zoom

0xaa1b,	// (0x00019918) level_5_zoom

0xaa24,	// (0x00019921) level_6_zoom

0xaa2d,	// (0x0001992a) level_7_zoom

0xaa36,	// (0x00019933) level_8_zoom

0xaa3f,	// (0x0001993c) level_9_zoom

0xaa50,	// (0x0001994d) popup_phob_thumbnail_window_g1

0xaa58,	// (0x00019955) popup_phob_thumbnail_window_g2

0x0001,

0xf410,	// (0x0001e30d) popup_phob_thumbnail_window_g

0xbe05,	// (0x0001ad02) level_1_location

0xbe0d,	// (0x0001ad0a) level_2_location

0xbe15,	// (0x0001ad12) level_3_location

0xbe1d,	// (0x0001ad1a) level_4_location

0x9e86,	// (0x00018d83) level_5_location

0x2835,	// (0x00011732) mce_icon_pane_g1

0x283f,	// (0x0001173c) mce_icon_pane_g2

0x0001,

0xf415,	// (0x0001e312) mce_icon_pane_g

0x2847,	// (0x00011744) main_mup_pane_g1_ParamLimits

0x2847,	// (0x00011744) main_mup_pane_g1

0x285d,	// (0x0001175a) main_mup_pane_g2_ParamLimits

0x285d,	// (0x0001175a) main_mup_pane_g2

0x2875,	// (0x00011772) main_mup_pane_g3_ParamLimits

0x2875,	// (0x00011772) main_mup_pane_g3

0x288d,	// (0x0001178a) main_mup_pane_g4_ParamLimits

0x288d,	// (0x0001178a) main_mup_pane_g4

0x28a5,	// (0x000117a2) main_mup_pane_g5_ParamLimits

0x28a5,	// (0x000117a2) main_mup_pane_g5

0x28c1,	// (0x000117be) main_mup_pane_g6_ParamLimits

0x28c1,	// (0x000117be) main_mup_pane_g6

0x28d9,	// (0x000117d6) main_mup_pane_g7_ParamLimits

0x28d9,	// (0x000117d6) main_mup_pane_g7

0x28f1,	// (0x000117ee) main_mup_pane_g8_ParamLimits

0x28f1,	// (0x000117ee) main_mup_pane_g8

0x290b,	// (0x00011808) main_mup_pane_g9_ParamLimits

0x290b,	// (0x00011808) main_mup_pane_g9

0x2925,	// (0x00011822) main_mup_pane_g10_ParamLimits

0x2925,	// (0x00011822) main_mup_pane_g10

0x293f,	// (0x0001183c) main_mup_pane_g11_ParamLimits

0x293f,	// (0x0001183c) main_mup_pane_g11

0x2953,	// (0x00011850) main_mup_pane_g12_ParamLimits

0x2953,	// (0x00011850) main_mup_pane_g12

0x2969,	// (0x00011866) main_mup_pane_g13_ParamLimits

0x2969,	// (0x00011866) main_mup_pane_g13

0x000c,

0xf41a,	// (0x0001e317) main_mup_pane_g_ParamLimits

0xf41a,	// (0x0001e317) main_mup_pane_g

0x297d,	// (0x0001187a) main_mup_pane_t1_ParamLimits

0x297d,	// (0x0001187a) main_mup_pane_t1

0x2997,	// (0x00011894) main_mup_pane_t2_ParamLimits

0x2997,	// (0x00011894) main_mup_pane_t2

0x29af,	// (0x000118ac) main_mup_pane_t3_ParamLimits

0x29af,	// (0x000118ac) main_mup_pane_t3

0x29c7,	// (0x000118c4) main_mup_pane_t4_ParamLimits

0x29c7,	// (0x000118c4) main_mup_pane_t4

0x29e5,	// (0x000118e2) main_mup_pane_t5_ParamLimits

0x29e5,	// (0x000118e2) main_mup_pane_t5

0x29fa,	// (0x000118f7) main_mup_pane_t6_ParamLimits

0x29fa,	// (0x000118f7) main_mup_pane_t6

0x0005,

0xf435,	// (0x0001e332) main_mup_pane_t_ParamLimits

0xf435,	// (0x0001e332) main_mup_pane_t

0x2a0c,	// (0x00011909) mup_progress_pane_ParamLimits

0x2a0c,	// (0x00011909) mup_progress_pane

0x2a18,	// (0x00011915) mup_visualizer_pane_ParamLimits

0x2a18,	// (0x00011915) mup_visualizer_pane

0x2a48,	// (0x00011945) mup_volume_pane_ParamLimits

0x2a48,	// (0x00011945) mup_volume_pane

0xaa60,	// (0x0001995d) mup_visualizer_pane_g1_ParamLimits

0xaa60,	// (0x0001995d) mup_visualizer_pane_g1

0xaa60,	// (0x0001995d) mup_visualizer_pane_g2_ParamLimits

0xaa60,	// (0x0001995d) mup_visualizer_pane_g2

0xa7d4,	// (0x000196d1) mup_visualizer_pane_g3_ParamLimits

0xa7d4,	// (0x000196d1) mup_visualizer_pane_g3

0x0002,

0xf442,	// (0x0001e33f) mup_visualizer_pane_g_ParamLimits

0xf442,	// (0x0001e33f) mup_visualizer_pane_g

0x9cce,	// (0x00018bcb) mup_volume_pane_g1

0xaa76,	// (0x00019973) mup_volume_pane_g2

0x0001,

0xf449,	// (0x0001e346) mup_volume_pane_g

0x9cce,	// (0x00018bcb) mup_progress_pane_g1

0xaa7f,	// (0x0001997c) mup_progress_pane_g2

0xaa88,	// (0x00019985) mup_progress_pane_g3

0x0002,

0xf44e,	// (0x0001e34b) mup_progress_pane_g

0x9913,	// (0x00018810) bg_popup_window_pane_cp05

0xaa91,	// (0x0001998e) heading_pane_cp02_ParamLimits

0xaa91,	// (0x0001998e) heading_pane_cp02

0xaaab,	// (0x000199a8) list_popup_blid_pane

0xaab3,	// (0x000199b0) list_blid_sat_info_pane_ParamLimits

0xaab3,	// (0x000199b0) list_blid_sat_info_pane

0xaac6,	// (0x000199c3) list_blid_sat_info_pane_g1

0xaace,	// (0x000199cb) list_blid_sat_info_pane_t1

0x2b5e,	// (0x00011a5b) mup_equalizer_pane_ParamLimits

0x2b5e,	// (0x00011a5b) mup_equalizer_pane

0x2b77,	// (0x00011a74) mup_equalizer_pane_cp1_ParamLimits

0x2b77,	// (0x00011a74) mup_equalizer_pane_cp1

0x2b94,	// (0x00011a91) mup_equalizer_pane_cp2_ParamLimits

0x2b94,	// (0x00011a91) mup_equalizer_pane_cp2

0x2bb1,	// (0x00011aae) mup_equalizer_pane_cp3_ParamLimits

0x2bb1,	// (0x00011aae) mup_equalizer_pane_cp3

0x2bd2,	// (0x00011acf) mup_equalizer_pane_cp4_ParamLimits

0x2bd2,	// (0x00011acf) mup_equalizer_pane_cp4

0x2bf3,	// (0x00011af0) mup_equalizer_pane_cp5

0x2c07,	// (0x00011b04) mup_equalizer_pane_cp6

0x2c1b,	// (0x00011b18) mup_equalizer_pane_cp7

0xbd23,	// (0x0001ac20) bg_popup_call_poc_act_pane_g9

0xbd2b,	// (0x0001ac28) bg_popup_call_poc_act_pane_g10

0xbd33,	// (0x0001ac30) bg_popup_call_poc_act_pane_g11

0x000a,

0x9b6e,	// (0x00018a6b) mup_scale_pane

0x9cce,	// (0x00018bcb) mup_scale_pane_g1

0xaadc,	// (0x000199d9) mup_scale_pane_g2

0x0006,

0xf46a,	// (0x0001e367) mup_scale_pane_g

0xab00,	// (0x000199fd) msg_data_pane

0xab08,	// (0x00019a05) scroll_pane_cp017

0x2c41,	// (0x00011b3e) bg_list_pane_cp04_ParamLimits

0x2c41,	// (0x00011b3e) bg_list_pane_cp04

0xab18,	// (0x00019a15) msg_data_pane_g1

0x2c59,	// (0x00011b56) msg_data_pane_g2

0x2c63,	// (0x00011b60) msg_data_pane_g3

0x2c6b,	// (0x00011b68) msg_data_pane_g4

0x2c73,	// (0x00011b70) msg_data_pane_g5

0x2c7b,	// (0x00011b78) msg_data_pane_g6

0x2c83,	// (0x00011b80) msg_data_pane_g7

0x0006,

0xf479,	// (0x0001e376) msg_data_pane_g

0x2c8b,	// (0x00011b88) msg_text_pane_ParamLimits

0x2c8b,	// (0x00011b88) msg_text_pane

0x2caf,	// (0x00011bac) qrid_highlight_pane_cp011_ParamLimits

0x2caf,	// (0x00011bac) qrid_highlight_pane_cp011

0x9913,	// (0x00018810) msg_body_pane

0x9913,	// (0x00018810) msg_header_pane

0xab29,	// (0x00019a26) input_focus_pane_cp07

0xab3e,	// (0x00019a3b) msg_header_pane_t1_ParamLimits

0xab3e,	// (0x00019a3b) msg_header_pane_t1

0xab50,	// (0x00019a4d) msg_header_pane_t2_ParamLimits

0xab50,	// (0x00019a4d) msg_header_pane_t2

0x0001,

0xf48d,	// (0x0001e38a) msg_header_pane_t_ParamLimits

0xf48d,	// (0x0001e38a) msg_header_pane_t

0xab62,	// (0x00019a5f) msg_body_pane_g1

0xab6a,	// (0x00019a67) msg_body_pane_t1_ParamLimits

0xab6a,	// (0x00019a67) msg_body_pane_t1

0xab9b,	// (0x00019a98) msg_body_pane_t2_ParamLimits

0xab9b,	// (0x00019a98) msg_body_pane_t2

0xabad,	// (0x00019aaa) msg_body_pane_t3_ParamLimits

0xabad,	// (0x00019aaa) msg_body_pane_t3

0x0002,

0xf492,	// (0x0001e38f) msg_body_pane_t_ParamLimits

0xf492,	// (0x0001e38f) msg_body_pane_t

0x2d0d,	// (0x00011c0a) main_viewer_pane_g1_ParamLimits

0x2d0d,	// (0x00011c0a) main_viewer_pane_g1

0x2d1b,	// (0x00011c18) main_viewer_pane_g2_ParamLimits

0x2d1b,	// (0x00011c18) main_viewer_pane_g2

0x2d29,	// (0x00011c26) main_viewer_pane_g3_ParamLimits

0x2d29,	// (0x00011c26) main_viewer_pane_g3

0x2d38,	// (0x00011c35) main_viewer_pane_g4_ParamLimits

0x2d38,	// (0x00011c35) main_viewer_pane_g4

0xabd7,	// (0x00019ad4) main_viewer_pane_g5_ParamLimits

0xabd7,	// (0x00019ad4) main_viewer_pane_g5

0xabd7,	// (0x00019ad4) main_viewer_pane_g7_ParamLimits

0xabd7,	// (0x00019ad4) main_viewer_pane_g7

0xabe9,	// (0x00019ae6) main_viewer_pane_g8_ParamLimits

0xabe9,	// (0x00019ae6) main_viewer_pane_g8

0x0007,

0xf4a2,	// (0x0001e39f) main_viewer_pane_g_ParamLimits

0xf4a2,	// (0x0001e39f) main_viewer_pane_g

0xac01,	// (0x00019afe) viewer_content_pane_ParamLimits

0xac01,	// (0x00019afe) viewer_content_pane

0x2d74,	// (0x00011c71) main_postcard_pane_g1_ParamLimits

0x2d74,	// (0x00011c71) main_postcard_pane_g1

0x2d8a,	// (0x00011c87) main_postcard_pane_g2_ParamLimits

0x2d8a,	// (0x00011c87) main_postcard_pane_g2

0x2da0,	// (0x00011c9d) main_postcard_pane_g3_ParamLimits

0x2da0,	// (0x00011c9d) main_postcard_pane_g3

0x0005,

0xf4b3,	// (0x0001e3b0) main_postcard_pane_g_ParamLimits

0xf4b3,	// (0x0001e3b0) main_postcard_pane_g

0x2db7,	// (0x00011cb4) main_postcard_pane_g4

0xbf59,	// (0x0001ae56) smil_status_volume_pane_g2

0x2dfa,	// (0x00011cf7) postcard_pane_ParamLimits

0x2dfa,	// (0x00011cf7) postcard_pane

0xac0f,	// (0x00019b0c) postcard_pane_g1_ParamLimits

0xac0f,	// (0x00019b0c) postcard_pane_g1

0x2e3c,	// (0x00011d39) postcard_pane_g2_ParamLimits

0x2e3c,	// (0x00011d39) postcard_pane_g2

0x2e48,	// (0x00011d45) postcard_pane_g3_ParamLimits

0x2e48,	// (0x00011d45) postcard_pane_g3

0xac1d,	// (0x00019b1a) postcard_pane_g4_ParamLimits

0xac1d,	// (0x00019b1a) postcard_pane_g4

0x2e54,	// (0x00011d51) postcard_pane_g5_ParamLimits

0x2e54,	// (0x00011d51) postcard_pane_g5

0x2e69,	// (0x00011d66) postcard_pane_g6_ParamLimits

0x2e69,	// (0x00011d66) postcard_pane_g6

0xac0f,	// (0x00019b0c) postcard_pane_g7_ParamLimits

0xac0f,	// (0x00019b0c) postcard_pane_g7

0x0006,

0xf4c0,	// (0x0001e3bd) postcard_pane_g_ParamLimits

0xf4c0,	// (0x0001e3bd) postcard_pane_g

0x2e7d,	// (0x00011d7a) main_mp2_pane_g1_ParamLimits

0x2e7d,	// (0x00011d7a) main_mp2_pane_g1

0x2e89,	// (0x00011d86) main_mp2_pane_g2_ParamLimits

0x2e89,	// (0x00011d86) main_mp2_pane_g2

0x2e95,	// (0x00011d92) main_mp2_pane_g3_ParamLimits

0x2e95,	// (0x00011d92) main_mp2_pane_g3

0x0002,

0xf4cf,	// (0x0001e3cc) main_mp2_pane_g_ParamLimits

0xf4cf,	// (0x0001e3cc) main_mp2_pane_g

0x2ea1,	// (0x00011d9e) main_mp2_pane_t1_ParamLimits

0x2ea1,	// (0x00011d9e) main_mp2_pane_t1

0x2eb6,	// (0x00011db3) main_mp2_pane_t2_ParamLimits

0x2eb6,	// (0x00011db3) main_mp2_pane_t2

0x2ec8,	// (0x00011dc5) main_mp2_pane_t3_ParamLimits

0x2ec8,	// (0x00011dc5) main_mp2_pane_t3

0x0002,

0xf4d6,	// (0x0001e3d3) main_mp2_pane_t_ParamLimits

0xf4d6,	// (0x0001e3d3) main_mp2_pane_t

0xac2b,	// (0x00019b28) pec_content_pane_ParamLimits

0xac2b,	// (0x00019b28) pec_content_pane

0xa039,	// (0x00018f36) scroll_pane_cp015

0xac3d,	// (0x00019b3a) pec_attribute_pane_ParamLimits

0xac3d,	// (0x00019b3a) pec_attribute_pane

0x2eda,	// (0x00011dd7) pec_content_pane_g1_ParamLimits

0x2eda,	// (0x00011dd7) pec_content_pane_g1

0xac4d,	// (0x00019b4a) pec_content_pane_t1_ParamLimits

0xac4d,	// (0x00019b4a) pec_content_pane_t1

0xac5f,	// (0x00019b5c) pec_content_pane_t2_ParamLimits

0xac5f,	// (0x00019b5c) pec_content_pane_t2

0x0001,

0xf4dd,	// (0x0001e3da) pec_content_pane_t_ParamLimits

0xf4dd,	// (0x0001e3da) pec_content_pane_t

0x2ee6,	// (0x00011de3) list_single_graphic_pane_cp01_ParamLimits

0x2ee6,	// (0x00011de3) list_single_graphic_pane_cp01

0x9b6e,	// (0x00018a6b) bg_popup_sub_pane_cp04

0xac71,	// (0x00019b6e) popup_mup_playback_window_g1

0xac7d,	// (0x00019b7a) popup_mup_playback_window_t1

0xac92,	// (0x00019b8f) popup_mup_playback_window_t2

0x0001,

0xf4e2,	// (0x0001e3df) popup_mup_playback_window_t

0xacc9,	// (0x00019bc6) main_image_pane_g1_ParamLimits

0xacc9,	// (0x00019bc6) main_image_pane_g1

0xad0c,	// (0x00019c09) scroll_pane_cp018_ParamLimits

0xad0c,	// (0x00019c09) scroll_pane_cp018

0xad24,	// (0x00019c21) scroll_pane_cp016_ParamLimits

0xad24,	// (0x00019c21) scroll_pane_cp016

0x2fb3,	// (0x00011eb0) smil2_image_pane_ParamLimits

0x2fb3,	// (0x00011eb0) smil2_image_pane

0x2fe3,	// (0x00011ee0) smil2_root_pane_ParamLimits

0x2fe3,	// (0x00011ee0) smil2_root_pane

0x301b,	// (0x00011f18) smil2_text_pane_ParamLimits

0x301b,	// (0x00011f18) smil2_text_pane

0x9913,	// (0x00018810) bg_list_pane_cp06

0xad60,	// (0x00019c5d) grid_radio_pane

0x9913,	// (0x00018810) bg_popup_window_pane_cp06

0xad68,	// (0x00019c65) main_fmradio_pane_t1

0xa623,	// (0x00019520) heading_pane_cp04

0xad76,	// (0x00019c73) main_fmradio_pane_t2

0xbd3b,	// (0x0001ac38) popup_cale_lunar_info_window_g1

0xad84,	// (0x00019c81) main_fmradio_pane_t3

0xbd43,	// (0x0001ac40) popup_cale_lunar_info_window_g2

0xad92,	// (0x00019c8f) main_fmradio_pane_t4

0x0001,

0xada0,	// (0x00019c9d) main_fmradio_pane_t5

0x0004,

0xf5bd,	// (0x0001e4ba) popup_cale_lunar_info_window_g

0xf4f7,	// (0x0001e3f4) main_fmradio_pane_t

0xadae,	// (0x00019cab) wait_bar_pane_cp03

0xadb6,	// (0x00019cb3) cell_fmradio_pane_ParamLimits

0xadb6,	// (0x00019cb3) cell_fmradio_pane

0xac0f,	// (0x00019b0c) cell_fmradio_pane_g1_ParamLimits

0xac0f,	// (0x00019b0c) cell_fmradio_pane_g1

0x9913,	// (0x00018810) grid_highlight_pane_cp011

0xadc9,	// (0x00019cc6) poc_content_pane_ParamLimits

0xadc9,	// (0x00019cc6) poc_content_pane

0xaddb,	// (0x00019cd8) scroll_pane_cp019

0x309b,	// (0x00011f98) popup_call_poc_act_window_ParamLimits

0x309b,	// (0x00011f98) popup_call_poc_act_window

0x30bf,	// (0x00011fbc) popup_call_poc_inact_window_ParamLimits

0x30bf,	// (0x00011fbc) popup_call_poc_inact_window

0xf594,	// (0x0001e491) bg_popup_call_poc_act_pane_g

0xbcb3,	// (0x0001abb0) bg_popup_call_poc_inact_pane_g1

0xbcbb,	// (0x0001abb8) bg_popup_call_poc_inact_pane_g2

0xade3,	// (0x00019ce0) popup_call_poc_act_window_g2

0xbcc3,	// (0x0001abc0) bg_popup_call_poc_inact_pane_g3

0xbccb,	// (0x0001abc8) bg_popup_call_poc_inact_pane_g4

0xbcd3,	// (0x0001abd0) bg_popup_call_poc_inact_pane_g5

0xadeb,	// (0x00019ce8) popup_call_poc_act_window_t1_ParamLimits

0xadeb,	// (0x00019ce8) popup_call_poc_act_window_t1

0xae13,	// (0x00019d10) popup_call_poc_act_window_t2_ParamLimits

0xae13,	// (0x00019d10) popup_call_poc_act_window_t2

0xae3b,	// (0x00019d38) popup_call_poc_act_window_t3_ParamLimits

0xae3b,	// (0x00019d38) popup_call_poc_act_window_t3

0xae63,	// (0x00019d60) popup_call_poc_act_window_t4_ParamLimits

0xae63,	// (0x00019d60) popup_call_poc_act_window_t4

0x0003,

0xf502,	// (0x0001e3ff) popup_call_poc_act_window_t_ParamLimits

0xf502,	// (0x0001e3ff) popup_call_poc_act_window_t

0xbcdb,	// (0x0001abd8) bg_popup_call_poc_inact_pane_g6

0xbce3,	// (0x0001abe0) bg_popup_call_poc_inact_pane_g7

0xbceb,	// (0x0001abe8) bg_popup_call_poc_inact_pane_g8

0xae75,	// (0x00019d72) popup_call_poc_inact_window_g2

0xbcf3,	// (0x0001abf0) bg_popup_call_poc_inact_pane_g9

0x0008,

0xf581,	// (0x0001e47e) bg_popup_call_poc_inact_pane_g

0xae7d,	// (0x00019d7a) popup_call_poc_inact_window_t1_ParamLimits

0xae7d,	// (0x00019d7a) popup_call_poc_inact_window_t1

0xae92,	// (0x00019d8f) popup_call_poc_inact_window_t2_ParamLimits

0xae92,	// (0x00019d8f) popup_call_poc_inact_window_t2

0xaea7,	// (0x00019da4) popup_call_poc_inact_window_t3_ParamLimits

0xaea7,	// (0x00019da4) popup_call_poc_inact_window_t3

0x0002,

0xf50b,	// (0x0001e408) popup_call_poc_inact_window_t_ParamLimits

0xf50b,	// (0x0001e408) popup_call_poc_inact_window_t

0xbecc,	// (0x0001adc9) context_pane_ParamLimits

0x38ee,	// (0x000127eb) signal_pane_ParamLimits

0x9e86,	// (0x00018d83) main_call2_pane

0xbea5,	// (0x0001ada2) popup_phob_thumbnail2_window_ParamLimits

0xbea5,	// (0x0001ada2) popup_phob_thumbnail2_window

0xabbf,	// (0x00019abc) aid_hotspot_pointer_arrow_pane

0xabc7,	// (0x00019ac4) aid_hotspot_pointer_hand_pane

0x3408,	// (0x00012305) phob_pre_status_pane_g5

0x0f96,	// (0x0000fe93) cams_zoom_pane_ParamLimits

0x0fa5,	// (0x0000fea2) image_vga_pane_ParamLimits

0x0fbf,	// (0x0000febc) main_camera_pane_g1_ParamLimits

0x0fd1,	// (0x0000fece) main_camera_pane_g2_ParamLimits

0x0fe1,	// (0x0000fede) main_camera_pane_g3_ParamLimits

0x0ff1,	// (0x0000feee) main_camera_pane_g4_ParamLimits

0x1001,	// (0x0000fefe) main_camera_pane_g5_ParamLimits

0x1011,	// (0x0000ff0e) main_camera_pane_g6_ParamLimits

0x1023,	// (0x0000ff20) main_camera_pane_g7_ParamLimits

0xf20a,	// (0x0001e107) main_camera_pane_g_ParamLimits

0x1033,	// (0x0000ff30) main_camera_pane_t1_ParamLimits

0x1049,	// (0x0000ff46) main_camera_pane_t2_ParamLimits

0xf21b,	// (0x0001e118) main_camera_pane_t_ParamLimits

0x9b6e,	// (0x00018a6b) bg_popup_preview_window_pane_cp01_ParamLimits

0x9b6e,	// (0x00018a6b) bg_popup_preview_window_pane_cp01

0xaebc,	// (0x00019db9) popup_phob_thumbnail2_window_g1_ParamLimits

0xaebc,	// (0x00019db9) popup_phob_thumbnail2_window_g1

0x9913,	// (0x00018810) call2_cli_visual_pane

0x30f3,	// (0x00011ff0) popup_call2_audio_conf_window_ParamLimits

0x30f3,	// (0x00011ff0) popup_call2_audio_conf_window

0x3113,	// (0x00012010) popup_call2_audio_first_window_ParamLimits

0x3113,	// (0x00012010) popup_call2_audio_first_window

0x31a9,	// (0x000120a6) popup_call2_audio_in_window_ParamLimits

0x31a9,	// (0x000120a6) popup_call2_audio_in_window

0x31f1,	// (0x000120ee) popup_call2_audio_out_window_ParamLimits

0x31f1,	// (0x000120ee) popup_call2_audio_out_window

0x325b,	// (0x00012158) popup_call2_audio_second_window_ParamLimits

0x325b,	// (0x00012158) popup_call2_audio_second_window

0x32c1,	// (0x000121be) popup_call2_audio_wait_window_ParamLimits

0x32c1,	// (0x000121be) popup_call2_audio_wait_window

0x9913,	// (0x00018810) bg_popup_call2_act_pane_cp03

0x9b50,	// (0x00018a4d) list_conf_pane_cp

0xaec8,	// (0x00019dc5) popup_call2_audio_conf_window_t1

0xa680,	// (0x0001957d) list_single_graphic_popup_conf2_pane_ParamLimits

0xa680,	// (0x0001957d) list_single_graphic_popup_conf2_pane

0xa693,	// (0x00019590) list_highlight_pane_cp04

0xaed6,	// (0x00019dd3) list_single_graphic_popup_conf2_pane_g1

0xa6a4,	// (0x000195a1) list_single_graphic_popup_conf2_pane_g2

0x0001,

0xf512,	// (0x0001e40f) list_single_graphic_popup_conf2_pane_g

0xaee0,	// (0x00019ddd) list_single_graphic_popup_conf2_pane_t1

0xaeee,	// (0x00019deb) bg_popup_call2_act_pane_cp01_ParamLimits

0xaeee,	// (0x00019deb) bg_popup_call2_act_pane_cp01

0xaf78,	// (0x00019e75) call_type_pane_cp05_ParamLimits

0xaf78,	// (0x00019e75) call_type_pane_cp05

0xafcc,	// (0x00019ec9) popup_call2_audio_second_window_g1_ParamLimits

0xafcc,	// (0x00019ec9) popup_call2_audio_second_window_g1

0xb020,	// (0x00019f1d) popup_call2_audio_second_window_g2_ParamLimits

0xb020,	// (0x00019f1d) popup_call2_audio_second_window_g2

0x0002,

0xf517,	// (0x0001e414) popup_call2_audio_second_window_g_ParamLimits

0xf517,	// (0x0001e414) popup_call2_audio_second_window_g

0xb085,	// (0x00019f82) popup_call2_audio_second_window_t1_ParamLimits

0xb085,	// (0x00019f82) popup_call2_audio_second_window_t1

0xb140,	// (0x0001a03d) popup_call2_audio_second_window_t2_ParamLimits

0xb140,	// (0x0001a03d) popup_call2_audio_second_window_t2

0xb193,	// (0x0001a090) popup_call2_audio_second_window_t3_ParamLimits

0xb193,	// (0x0001a090) popup_call2_audio_second_window_t3

0x0003,

0xf51e,	// (0x0001e41b) popup_call2_audio_second_window_t_ParamLimits

0xf51e,	// (0x0001e41b) popup_call2_audio_second_window_t

0x9913,	// (0x00018810) bg_popup_call2_in_pane_cp02

0x991d,	// (0x0001881a) call_type_pane_cp04

0x9925,	// (0x00018822) popup_call2_audio_wait_window_g1

0x992d,	// (0x0001882a) popup_call2_audio_wait_window_g2

0x0001,

0xf0f9,	// (0x0001dff6) popup_call2_audio_wait_window_g

0x9935,	// (0x00018832) popup_call2_audio_wait_window_t3

0xb286,	// (0x0001a183) bg_popup_call2_act_pane_ParamLimits

0xb286,	// (0x0001a183) bg_popup_call2_act_pane

0xb346,	// (0x0001a243) call_type_pane_cp03_ParamLimits

0xb346,	// (0x0001a243) call_type_pane_cp03

0xb3aa,	// (0x0001a2a7) popup_call2_audio_first_window_g1_ParamLimits

0xb3aa,	// (0x0001a2a7) popup_call2_audio_first_window_g1

0xb41a,	// (0x0001a317) popup_call2_audio_first_window_g2_ParamLimits

0xb41a,	// (0x0001a317) popup_call2_audio_first_window_g2

0xaa60,	// (0x0001995d) popup_call2_audio_first_window_g3_ParamLimits

0xaa60,	// (0x0001995d) popup_call2_audio_first_window_g3

0x0004,

0xf527,	// (0x0001e424) popup_call2_audio_first_window_g_ParamLimits

0xf527,	// (0x0001e424) popup_call2_audio_first_window_g

0xb4f8,	// (0x0001a3f5) popup_call2_audio_first_window_t1_ParamLimits

0xb4f8,	// (0x0001a3f5) popup_call2_audio_first_window_t1

0xb5fb,	// (0x0001a4f8) popup_call2_audio_first_window_t4_ParamLimits

0xb5fb,	// (0x0001a4f8) popup_call2_audio_first_window_t4

0xb6de,	// (0x0001a5db) popup_call2_audio_first_window_t5_ParamLimits

0xb6de,	// (0x0001a5db) popup_call2_audio_first_window_t5

0x0003,

0xf532,	// (0x0001e42f) popup_call2_audio_first_window_t_ParamLimits

0xf532,	// (0x0001e42f) popup_call2_audio_first_window_t

0x9b66,	// (0x00018a63) bg_popup_call2_act_pane_g1

0xbd4b,	// (0x0001ac48) popup_cale_lunar_info_window_t1

0xbd59,	// (0x0001ac56) popup_cale_lunar_info_window_t2

0xbd67,	// (0x0001ac64) popup_cale_lunar_info_window_t3

0x9913,	// (0x00018810) bg_popup_call2_bubble_pane

0xb7df,	// (0x0001a6dc) bg_popup_call2_in_pane_cp01_ParamLimits

0xb7df,	// (0x0001a6dc) bg_popup_call2_in_pane_cp01

0x95ef,	// (0x000184ec) call_type_pane_cp02

0xb827,	// (0x0001a724) popup_call2_audio_out_window_g1_ParamLimits

0xb827,	// (0x0001a724) popup_call2_audio_out_window_g1

0xb853,	// (0x0001a750) popup_call2_audio_out_window_g2_ParamLimits

0xb853,	// (0x0001a750) popup_call2_audio_out_window_g2

0xb87b,	// (0x0001a778) popup_call2_audio_out_window_g3_ParamLimits

0xb87b,	// (0x0001a778) popup_call2_audio_out_window_g3

0x0003,

0xf53b,	// (0x0001e438) popup_call2_audio_out_window_g_ParamLimits

0xf53b,	// (0x0001e438) popup_call2_audio_out_window_g

0xb8b6,	// (0x0001a7b3) popup_call2_audio_out_window_t1_ParamLimits

0xb8b6,	// (0x0001a7b3) popup_call2_audio_out_window_t1

0xb915,	// (0x0001a812) popup_call2_audio_out_window_t2_ParamLimits

0xb915,	// (0x0001a812) popup_call2_audio_out_window_t2

0xb969,	// (0x0001a866) popup_call2_audio_out_window_t3_ParamLimits

0xb969,	// (0x0001a866) popup_call2_audio_out_window_t3

0xb97f,	// (0x0001a87c) popup_call2_audio_out_window_t4_ParamLimits

0xb97f,	// (0x0001a87c) popup_call2_audio_out_window_t4

0xb995,	// (0x0001a892) popup_call2_audio_out_window_t5_ParamLimits

0xb995,	// (0x0001a892) popup_call2_audio_out_window_t5

0x0005,

0xf544,	// (0x0001e441) popup_call2_audio_out_window_t_ParamLimits

0xf544,	// (0x0001e441) popup_call2_audio_out_window_t

0xb9f9,	// (0x0001a8f6) bg_popup_call2_in_pane_ParamLimits

0xb9f9,	// (0x0001a8f6) bg_popup_call2_in_pane

0xba55,	// (0x0001a952) popup_call2_audio_in_window_g1_ParamLimits

0xba55,	// (0x0001a952) popup_call2_audio_in_window_g1

0xba8d,	// (0x0001a98a) popup_call2_audio_in_window_g2_ParamLimits

0xba8d,	// (0x0001a98a) popup_call2_audio_in_window_g2

0xbac5,	// (0x0001a9c2) popup_call2_audio_in_window_g3_ParamLimits

0xbac5,	// (0x0001a9c2) popup_call2_audio_in_window_g3

0x0003,

0xf551,	// (0x0001e44e) popup_call2_audio_in_window_g_ParamLimits

0xf551,	// (0x0001e44e) popup_call2_audio_in_window_g

0xbb1d,	// (0x0001aa1a) popup_call2_audio_in_window_t1_ParamLimits

0xbb1d,	// (0x0001aa1a) popup_call2_audio_in_window_t1

0xbb9d,	// (0x0001aa9a) popup_call2_audio_in_window_t2_ParamLimits

0xbb9d,	// (0x0001aa9a) popup_call2_audio_in_window_t2

0xbc1d,	// (0x0001ab1a) popup_call2_audio_in_window_t3_ParamLimits

0xbc1d,	// (0x0001ab1a) popup_call2_audio_in_window_t3

0xbc37,	// (0x0001ab34) popup_call2_audio_in_window_t4_ParamLimits

0xbc37,	// (0x0001ab34) popup_call2_audio_in_window_t4

0xbc49,	// (0x0001ab46) popup_call2_audio_in_window_t5_ParamLimits

0xbc49,	// (0x0001ab46) popup_call2_audio_in_window_t5

0xbc5e,	// (0x0001ab5b) popup_call2_audio_in_window_t6_ParamLimits

0xbc5e,	// (0x0001ab5b) popup_call2_audio_in_window_t6

0x0005,

0xf55a,	// (0x0001e457) popup_call2_audio_in_window_t_ParamLimits

0xf55a,	// (0x0001e457) popup_call2_audio_in_window_t

0x9b66,	// (0x00018a63) bg_popup_call2_in_pane_g1

0xbd75,	// (0x0001ac72) popup_cale_lunar_info_window_t4

0x0003,

0xf5c2,	// (0x0001e4bf) popup_cale_lunar_info_window_t

0x9b6e,	// (0x00018a6b) bg_popup_call2_rect_pane_ParamLimits

0x9b6e,	// (0x00018a6b) bg_popup_call2_rect_pane

0x9913,	// (0x00018810) call2_cli_visual_graphic_pane

0x9913,	// (0x00018810) call2_cli_visual_text_pane

0xbf6c,	// (0x0001ae69) smil_status_volume_pane_g3

0x0002,

0x9cce,	// (0x00018bcb) call2_cli_visual_graphic_pane_g1

0x9cce,	// (0x00018bcb) call2_cli_visual_graphic_pane_g2

0x9cce,	// (0x00018bcb) call2_cli_visual_graphic_pane_g3

0x0002,

0xf567,	// (0x0001e464) call2_cli_visual_graphic_pane_g

0xbc73,	// (0x0001ab70) bg_popup_call2_rect_pane_g1

0x9d5a,	// (0x00018c57) bg_popup_call2_rect_pane_g2

0xbc7b,	// (0x0001ab78) bg_popup_call2_rect_pane_g3

0xbc83,	// (0x0001ab80) bg_popup_call2_rect_pane_g4

0xbc8b,	// (0x0001ab88) bg_popup_call2_rect_pane_g5

0xbc93,	// (0x0001ab90) bg_popup_call2_rect_pane_g6

0xbc9b,	// (0x0001ab98) bg_popup_call2_rect_pane_g7

0xbca3,	// (0x0001aba0) bg_popup_call2_rect_pane_g8

0xbcab,	// (0x0001aba8) bg_popup_call2_rect_pane_g9

0x0008,

0xf56e,	// (0x0001e46b) bg_popup_call2_rect_pane_g

0xbcb3,	// (0x0001abb0) bg_popup_call2_bubble_pane_g1

0xbcbb,	// (0x0001abb8) bg_popup_call2_bubble_pane_g2

0xbcc3,	// (0x0001abc0) bg_popup_call2_bubble_pane_g3

0xbccb,	// (0x0001abc8) bg_popup_call2_bubble_pane_g4

0xbcd3,	// (0x0001abd0) bg_popup_call2_bubble_pane_g5

0xbcdb,	// (0x0001abd8) bg_popup_call2_bubble_pane_g6

0xbce3,	// (0x0001abe0) bg_popup_call2_bubble_pane_g7

0xbceb,	// (0x0001abe8) bg_popup_call2_bubble_pane_g8

0xbcf3,	// (0x0001abf0) bg_popup_call2_bubble_pane_g9

0x0008,

0xf581,	// (0x0001e47e) bg_popup_call2_bubble_pane_g

0x0918,	// (0x0000f815) aid_cale_week_size_cell_pane

0x105f,	// (0x0000ff5c) aid_cams_cif_uncrop_pane_ParamLimits

0x105f,	// (0x0000ff5c) aid_cams_cif_uncrop_pane

0x120f,	// (0x0001010c) aid_cams_size_cell_ParamLimits

0x120f,	// (0x0001010c) aid_cams_size_cell

0x1223,	// (0x00010120) grid_cams_pane_ParamLimits

0x123d,	// (0x0001013a) linegrid_cams_pane_ParamLimits

0x1433,	// (0x00010330) call_video_pane_t1

0x1451,	// (0x0001034e) call_video_pane_t2

0x0001,

0xf26e,	// (0x0001e16b) call_video_pane_t

0x187d,	// (0x0001077a) aid_cale_month_size_cell_pane_ParamLimits

0x187d,	// (0x0001077a) aid_cale_month_size_cell_pane

0xf60b,	// (0x0001e508) smil_status_volume_pane_g

0xbf79,	// (0x0001ae76) volume_smil_pane_ParamLimits

0x9494,	// (0x00018391) aid_popup2_width_pane

0x0872,	// (0x0000f76f) cell_qdial_pane_g4_ParamLimits

0x0872,	// (0x0000f76f) cell_qdial_pane_g4

0x276e,	// (0x0001166b) aid_blid_cardinal_pane_ParamLimits

0x277a,	// (0x00011677) aid_blid_destination_pane_ParamLimits

0x277a,	// (0x00011677) aid_blid_destination_pane

0x9b6e,	// (0x00018a6b) bg_popup_call_poc_act_pane_ParamLimits

0x9b6e,	// (0x00018a6b) bg_popup_call_poc_act_pane

0x9b6e,	// (0x00018a6b) bg_popup_call_poc_inact_pane_ParamLimits

0x9b6e,	// (0x00018a6b) bg_popup_call_poc_inact_pane

0xbcfb,	// (0x0001abf8) bg_popup_call_poc_act_pane_g1

0xbd03,	// (0x0001ac00) bg_popup_call_poc_act_pane_g2

0xbd0b,	// (0x0001ac08) bg_popup_call_poc_act_pane_g3

0xbccb,	// (0x0001abc8) bg_popup_call_poc_act_pane_g4

0xbcd3,	// (0x0001abd0) bg_popup_call_poc_act_pane_g5

0xbd13,	// (0x0001ac10) bg_popup_call_poc_act_pane_g6

0xbce3,	// (0x0001abe0) bg_popup_call_poc_act_pane_g7

0xbd1b,	// (0x0001ac18) bg_popup_call_poc_act_pane_g8

0x9913,	// (0x00018810) main_usb_pane

0xbe80,	// (0x0001ad7d) popup_cale_lunar_info_window

0x1729,	// (0x00010626) im_reading_pane_t1_ParamLimits

0x9f91,	// (0x00018e8e) list_im_pane_ParamLimits

0x9fa2,	// (0x00018e9f) scroll_pane_cp07_ParamLimits

0x9913,	// (0x00018810) grid_highlight_pane_cp012

0x9b6e,	// (0x00018a6b) mup_scale_pane_ParamLimits

0xac0f,	// (0x00019b0c) main_usb_pane_g1_ParamLimits

0xac0f,	// (0x00019b0c) main_usb_pane_g1

0x331d,	// (0x0001221a) main_usb_pane_g2_ParamLimits

0x331d,	// (0x0001221a) main_usb_pane_g2

0x0001,

0xf5ab,	// (0x0001e4a8) main_usb_pane_g_ParamLimits

0xf5ab,	// (0x0001e4a8) main_usb_pane_g

0x3333,	// (0x00012230) main_usb_pane_t1_ParamLimits

0x3333,	// (0x00012230) main_usb_pane_t1

0x3345,	// (0x00012242) main_usb_pane_t2_ParamLimits

0x3345,	// (0x00012242) main_usb_pane_t2

0x3357,	// (0x00012254) main_usb_pane_t3_ParamLimits

0x3357,	// (0x00012254) main_usb_pane_t3

0x3369,	// (0x00012266) main_usb_pane_t4_ParamLimits

0x3369,	// (0x00012266) main_usb_pane_t4

0x337b,	// (0x00012278) main_usb_pane_t5_ParamLimits

0x337b,	// (0x00012278) main_usb_pane_t5

0x338d,	// (0x0001228a) main_usb_pane_t6_ParamLimits

0x338d,	// (0x0001228a) main_usb_pane_t6

0x0005,

0xf5b0,	// (0x0001e4ad) main_usb_pane_t_ParamLimits

0x271d,	// (0x0001161a) aid_text_placing

0x2726,	// (0x00011623) main_location2_pane_t1_ParamLimits

0x2738,	// (0x00011635) main_location2_pane_t2_ParamLimits

0x274a,	// (0x00011647) main_location2_pane_t3_ParamLimits

0x275c,	// (0x00011659) main_location2_pane_t4_ParamLimits

0x275c,	// (0x00011659) main_location2_pane_t4

0xf3cf,	// (0x0001e2cc) main_location2_pane_t_ParamLimits

0x9baa,	// (0x00018aa7) find_pinb_pane_g2_ParamLimits

0x9baa,	// (0x00018aa7) find_pinb_pane_g2

0x0001,

0xf11f,	// (0x0001e01c) find_pinb_pane_g_ParamLimits

0xf11f,	// (0x0001e01c) find_pinb_pane_g

0x9bb6,	// (0x00018ab3) find_pinb_pane_t1_ParamLimits

0x9bc8,	// (0x00018ac5) find_pinb_pane_t2_ParamLimits

0xf124,	// (0x0001e021) find_pinb_pane_t_ParamLimits

0x9913,	// (0x00018810) main_call3_pane

0x1d3c,	// (0x00010c39) cale_month_day_heading_pane_t1_ParamLimits

0x1dc2,	// (0x00010cbf) cale_month_day_heading_pane_t2_ParamLimits

0x1e53,	// (0x00010d50) cale_month_day_heading_pane_t3_ParamLimits

0x1ee4,	// (0x00010de1) cale_month_day_heading_pane_t4_ParamLimits

0x1f79,	// (0x00010e76) cale_month_day_heading_pane_t5_ParamLimits

0x201a,	// (0x00010f17) cale_month_day_heading_pane_t6_ParamLimits

0x20bb,	// (0x00010fb8) cale_month_day_heading_pane_t7_ParamLimits

0xf2a6,	// (0x0001e1a3) cale_month_day_heading_pane_t_ParamLimits

0xa1f8,	// (0x000190f5) smil_status_volume_pane

0x2e18,	// (0x00011d15) postcard_address_pane_ParamLimits

0x2e18,	// (0x00011d15) postcard_address_pane

0x2e2a,	// (0x00011d27) postcard_message_pane_ParamLimits

0x2e2a,	// (0x00011d27) postcard_message_pane

0x32fb,	// (0x000121f8) call2_cli_visual_pane_t1_ParamLimits

0x32fb,	// (0x000121f8) call2_cli_visual_pane_t1

0x3b1b,	// (0x00012a18) postcard_message_pane_t1_ParamLimits

0x3b1b,	// (0x00012a18) postcard_message_pane_t1

0x3b04,	// (0x00012a01) postcard_address_pane_t1_ParamLimits

0x3b04,	// (0x00012a01) postcard_address_pane_t1

0x3af0,	// (0x000129ed) popup_call3_audio_in_window_ParamLimits

0x3af0,	// (0x000129ed) popup_call3_audio_in_window

0x397b,	// (0x00012878) bg_popup_call3_in_pane_ParamLimits

0x397b,	// (0x00012878) bg_popup_call3_in_pane

0x39f1,	// (0x000128ee) popup_call3_audio_in_window_g1_ParamLimits

0x39f1,	// (0x000128ee) popup_call3_audio_in_window_g1

0x3a11,	// (0x0001290e) popup_call3_audio_in_window_g2_ParamLimits

0x3a11,	// (0x0001290e) popup_call3_audio_in_window_g2

0x3a31,	// (0x0001292e) popup_call3_audio_in_window_g3_ParamLimits

0x3a31,	// (0x0001292e) popup_call3_audio_in_window_g3

0x0003,

0xf612,	// (0x0001e50f) popup_call3_audio_in_window_g_ParamLimits

0xf612,	// (0x0001e50f) popup_call3_audio_in_window_g

0x3a62,	// (0x0001295f) popup_call3_audio_in_window_t1_ParamLimits

0x3a62,	// (0x0001295f) popup_call3_audio_in_window_t1

0x3aa0,	// (0x0001299d) popup_call3_audio_in_window_t2_ParamLimits

0x3aa0,	// (0x0001299d) popup_call3_audio_in_window_t2

0x3ade,	// (0x000129db) popup_call3_audio_in_window_t3_ParamLimits

0x3ade,	// (0x000129db) popup_call3_audio_in_window_t3

0x0002,

0xf61b,	// (0x0001e518) popup_call3_audio_in_window_t_ParamLimits

0xf61b,	// (0x0001e518) popup_call3_audio_in_window_t

0x9e86,	// (0x00018d83) bg_popup_call3_rect_pane

0xbc73,	// (0x0001ab70) bg_popup_call3_rect_pane_g1

0x9d5a,	// (0x00018c57) bg_popup_call3_rect_pane_g2

0xbc7b,	// (0x0001ab78) bg_popup_call3_rect_pane_g3

0xbc83,	// (0x0001ab80) bg_popup_call3_rect_pane_g4

0xbc8b,	// (0x0001ab88) bg_popup_call3_rect_pane_g5

0xbc93,	// (0x0001ab90) bg_popup_call3_rect_pane_g6

0xbc9b,	// (0x0001ab98) bg_popup_call3_rect_pane_g7

0x2a5e,	// (0x0001195b) mup_visualizer_osc_pane

0xaa6e,	// (0x0001996b) mup_visualizer_spec_pane

0x39ab,	// (0x000128a8) call3_video_qcif_pane_ParamLimits

0x39ab,	// (0x000128a8) call3_video_qcif_pane

0x39be,	// (0x000128bb) call3_video_qcif_uncrop_pane_ParamLimits

0x39be,	// (0x000128bb) call3_video_qcif_uncrop_pane

0x39cc,	// (0x000128c9) call3_video_subqcif_pane_ParamLimits

0x39cc,	// (0x000128c9) call3_video_subqcif_pane

0x39e0,	// (0x000128dd) call3_video_subqcif_uncrop_pane_ParamLimits

0x39e0,	// (0x000128dd) call3_video_subqcif_uncrop_pane

0x3a51,	// (0x0001294e) popup_call3_audio_in_window_g4_ParamLimits

0x3a51,	// (0x0001294e) popup_call3_audio_in_window_g4

0x396a,	// (0x00012867) mup_spec_half_pane

0x3973,	// (0x00012870) mup_spec_half_pane_cp

0xbf2c,	// (0x0001ae29) mup_osc_middle_pane

0xbf35,	// (0x0001ae32) mup_visualizer_osc_pane_g1

0x394a,	// (0x00012847) mup_spec_bar_pane_ParamLimits

0x394a,	// (0x00012847) mup_spec_bar_pane

0xbf19,	// (0x0001ae16) mup_spec_bar_pane_g1

0xbf23,	// (0x0001ae20) mup_spec_bar_pane_g2

0x0001,

0xf606,	// (0x0001e503) mup_spec_bar_pane_g

0x0918,	// (0x0000f815) aid_cale_week_size_cell_pane_ParamLimits

0x0932,	// (0x0000f82f) bg_cale_heading_pane_ParamLimits

0x9ddf,	// (0x00018cdc) bg_cale_pane_cp01_ParamLimits

0x094a,	// (0x0000f847) cale_week_corner_pane_ParamLimits

0x0969,	// (0x0000f866) cale_week_day_heading_pane_ParamLimits

0x0986,	// (0x0000f883) cale_week_scroll_pane_g1_ParamLimits

0x0999,	// (0x0000f896) cale_week_scroll_pane_g2_ParamLimits

0x09b1,	// (0x0000f8ae) cale_week_scroll_pane_g3_ParamLimits

0x09c9,	// (0x0000f8c6) cale_week_scroll_pane_g4_ParamLimits

0x09e1,	// (0x0000f8de) cale_week_scroll_pane_g5_ParamLimits

0x0a01,	// (0x0000f8fe) cale_week_scroll_pane_g6_ParamLimits

0x0a21,	// (0x0000f91e) cale_week_scroll_pane_g7_ParamLimits

0x0a41,	// (0x0000f93e) cale_week_scroll_pane_g8_ParamLimits

0x0a65,	// (0x0000f962) cale_week_scroll_pane_g9_ParamLimits

0x0a7d,	// (0x0000f97a) cale_week_scroll_pane_g10_ParamLimits

0x0a95,	// (0x0000f992) cale_week_scroll_pane_g11_ParamLimits

0x0aad,	// (0x0000f9aa) cale_week_scroll_pane_g12_ParamLimits

0x0ac5,	// (0x0000f9c2) cale_week_scroll_pane_g13_ParamLimits

0x0ac5,	// (0x0000f9c2) cale_week_scroll_pane_g14_ParamLimits

0x0ac5,	// (0x0000f9c2) cale_week_scroll_pane_g15_ParamLimits

0xf1b0,	// (0x0001e0ad) cale_week_scroll_pane_g_ParamLimits

0x0b01,	// (0x0000f9fe) cale_week_time_pane_ParamLimits

0x0b25,	// (0x0000fa22) grid_cale_week_pane_ParamLimits

0x9dfc,	// (0x00018cf9) listscroll_cale_week_pane_t1

0x9e0e,	// (0x00018d0b) scroll_pane_cp08_ParamLimits

0x18d2,	// (0x000107cf) cale_month_corner_pane_ParamLimits

0xa1c2,	// (0x000190bf) cale_month_pane_t1

0x1cda,	// (0x00010bd7) cale_month_week_pane_ParamLimits

0x2579,	// (0x00011476) popup_call_status_window_g1_ParamLimits

0x258d,	// (0x0001148a) popup_call_status_window_g2_ParamLimits

0x25a1,	// (0x0001149e) popup_call_status_window_g3_ParamLimits

0xf356,	// (0x0001e253) popup_call_status_window_g_ParamLimits

0xa5a0,	// (0x0001949d) aid_call2_pane

0x2cc5,	// (0x00011bc2) msg_header_pane_g1

0x2e18,	// (0x00011d15) postcard_address2_pane_ParamLimits

0x2e18,	// (0x00011d15) postcard_address2_pane

0x2e2a,	// (0x00011d27) postcard_message2_pane_ParamLimits

0x2e2a,	// (0x00011d27) postcard_message2_pane

0x38fc,	// (0x000127f9) message2_row_pane_ParamLimits

0x38fc,	// (0x000127f9) message2_row_pane

0x3918,	// (0x00012815) address2_row_pane_ParamLimits

0x3918,	// (0x00012815) address2_row_pane

0xbee7,	// (0x0001ade4) postcard_message2_row_pane_g1

0xbeef,	// (0x0001adec) postcard_message2_row_pane_t1

0xbee7,	// (0x0001ade4) address2_row_pane_g1

0xbeef,	// (0x0001adec) address2_row_pane_t1

0x0f18,	// (0x0000fe15) aid_size_cell_vorec

0x9913,	// (0x00018810) main_rss_pane

0x392b,	// (0x00012828) rss_list_single_pane_ParamLimits

0x392b,	// (0x00012828) rss_list_single_pane

0xbefd,	// (0x0001adfa) rss_list_single_pane_t1

0xbf0b,	// (0x0001ae08) rss_list_single_pane_t2

0x0001,

0xf601,	// (0x0001e4fe) rss_list_single_pane_t

0x9913,	// (0x00018810) main_camera2_pane

0x9913,	// (0x00018810) main_video2_pane

0x3b94,	// (0x00012a91) cams_zoom_pane_cp2_ParamLimits

0x3b94,	// (0x00012a91) cams_zoom_pane_cp2

0x3bb4,	// (0x00012ab1) image2_vga_pane_ParamLimits

0x3bb4,	// (0x00012ab1) image2_vga_pane

0x3c05,	// (0x00012b02) main_camera2_pane_g1_ParamLimits

0x3c05,	// (0x00012b02) main_camera2_pane_g1

0x3c25,	// (0x00012b22) main_camera2_pane_g2_ParamLimits

0x3c25,	// (0x00012b22) main_camera2_pane_g2

0x3c45,	// (0x00012b42) main_camera2_pane_g3_ParamLimits

0x3c45,	// (0x00012b42) main_camera2_pane_g3

0x3c65,	// (0x00012b62) main_camera2_pane_g4_ParamLimits

0x3c65,	// (0x00012b62) main_camera2_pane_g4

0x3c85,	// (0x00012b82) main_camera2_pane_g5_ParamLimits

0x3c85,	// (0x00012b82) main_camera2_pane_g5

0x3ca5,	// (0x00012ba2) main_camera2_pane_g6_ParamLimits

0x3ca5,	// (0x00012ba2) main_camera2_pane_g6

0x3cc5,	// (0x00012bc2) main_camera2_pane_g7_ParamLimits

0x3cc5,	// (0x00012bc2) main_camera2_pane_g7

0x3ce5,	// (0x00012be2) main_camera2_pane_g8_ParamLimits

0x3ce5,	// (0x00012be2) main_camera2_pane_g8

0x0008,

0xf622,	// (0x0001e51f) main_camera2_pane_g_ParamLimits

0xf622,	// (0x0001e51f) main_camera2_pane_g

0x3d25,	// (0x00012c22) main_camera2_pane_t1_ParamLimits

0x3d25,	// (0x00012c22) main_camera2_pane_t1

0x3d5a,	// (0x00012c57) main_camera2_pane_t2_ParamLimits

0x3d5a,	// (0x00012c57) main_camera2_pane_t2

0x3d80,	// (0x00012c7d) main_camera2_pane_t3_ParamLimits

0x3d80,	// (0x00012c7d) main_camera2_pane_t3

0x3dde,	// (0x00012cdb) main_camera2_pane_t4_ParamLimits

0x3dde,	// (0x00012cdb) main_camera2_pane_t4

0x0006,

0xf635,	// (0x0001e532) main_camera2_pane_t_ParamLimits

0xf635,	// (0x0001e532) main_camera2_pane_t

0x3e70,	// (0x00012d6d) cams_zoom_pane_cp4_ParamLimits

0x3e70,	// (0x00012d6d) cams_zoom_pane_cp4

0x3e86,	// (0x00012d83) image2_cif_pane_ParamLimits

0x3e86,	// (0x00012d83) image2_cif_pane

0x3eb1,	// (0x00012dae) image2_subqcif_pane_ParamLimits

0x3eb1,	// (0x00012dae) image2_subqcif_pane

0x3ecb,	// (0x00012dc8) main_video2_pane_g1_ParamLimits

0x3ecb,	// (0x00012dc8) main_video2_pane_g1

0x3ee5,	// (0x00012de2) main_video2_pane_g2_ParamLimits

0x3ee5,	// (0x00012de2) main_video2_pane_g2

0x3efb,	// (0x00012df8) main_video2_pane_g3_ParamLimits

0x3efb,	// (0x00012df8) main_video2_pane_g3

0x3f11,	// (0x00012e0e) main_video2_pane_g4_ParamLimits

0x3f11,	// (0x00012e0e) main_video2_pane_g4

0x3f27,	// (0x00012e24) main_video2_pane_g5_ParamLimits

0x3f27,	// (0x00012e24) main_video2_pane_g5

0x3f3d,	// (0x00012e3a) main_video2_pane_g6_ParamLimits

0x3f3d,	// (0x00012e3a) main_video2_pane_g6

0x0005,

0xf644,	// (0x0001e541) main_video2_pane_g_ParamLimits

0xf644,	// (0x0001e541) main_video2_pane_g

0x3f57,	// (0x00012e54) main_video2_pane_t1_ParamLimits

0x3f57,	// (0x00012e54) main_video2_pane_t1

0x3f7b,	// (0x00012e78) main_video2_pane_t2_ParamLimits

0x3f7b,	// (0x00012e78) main_video2_pane_t2

0x3fc9,	// (0x00012ec6) main_video2_pane_t3_ParamLimits

0x3fc9,	// (0x00012ec6) main_video2_pane_t3

0x0002,

0xf651,	// (0x0001e54e) main_video2_pane_t_ParamLimits

0xf651,	// (0x0001e54e) main_video2_pane_t

0x3448,	// (0x00012345) call_muted_g2

0x0001,

0xf5f3,	// (0x0001e4f0) call_muted_g

0x9913,	// (0x00018810) main_mup2_pane

0x400d,	// (0x00012f0a) main_mup2_pane_g1_ParamLimits

0x400d,	// (0x00012f0a) main_mup2_pane_g1

0x4019,	// (0x00012f16) main_mup2_pane_g2_ParamLimits

0x4019,	// (0x00012f16) main_mup2_pane_g2

0xc09d,	// (0x0001af9a) main_mup_pane_g13_cp1

0xc0a5,	// (0x0001afa2) mup_volume_pane_cp1

0x4035,	// (0x00012f32) main_mup2_pane_g4_ParamLimits

0x4035,	// (0x00012f32) main_mup2_pane_g4

0x4047,	// (0x00012f44) main_mup2_pane_g5_ParamLimits

0x4047,	// (0x00012f44) main_mup2_pane_g5

0x4059,	// (0x00012f56) main_mup2_pane_g6_ParamLimits

0x4059,	// (0x00012f56) main_mup2_pane_g6

0x406b,	// (0x00012f68) main_mup2_pane_g7_ParamLimits

0x406b,	// (0x00012f68) main_mup2_pane_g7

0x0006,

0xf658,	// (0x0001e555) main_mup2_pane_g_ParamLimits

0xf658,	// (0x0001e555) main_mup2_pane_g

0x4083,	// (0x00012f80) main_mup2_pane_t1_ParamLimits

0x4083,	// (0x00012f80) main_mup2_pane_t1

0x4099,	// (0x00012f96) main_mup2_pane_t2_ParamLimits

0x4099,	// (0x00012f96) main_mup2_pane_t2

0x40af,	// (0x00012fac) main_mup2_pane_t3_ParamLimits

0x40af,	// (0x00012fac) main_mup2_pane_t3

0x40c5,	// (0x00012fc2) main_mup2_pane_t4_ParamLimits

0x40c5,	// (0x00012fc2) main_mup2_pane_t4

0x40dd,	// (0x00012fda) main_mup2_pane_t5_ParamLimits

0x40dd,	// (0x00012fda) main_mup2_pane_t5

0x40f5,	// (0x00012ff2) main_mup2_pane_t6_ParamLimits

0x40f5,	// (0x00012ff2) main_mup2_pane_t6

0x0005,

0xf667,	// (0x0001e564) main_mup2_pane_t_ParamLimits

0xf667,	// (0x0001e564) main_mup2_pane_t

0x4125,	// (0x00013022) mup2_visualizer_pane_ParamLimits

0x4125,	// (0x00013022) mup2_visualizer_pane

0x4153,	// (0x00013050) mup_progress_pane_cp_ParamLimits

0x4153,	// (0x00013050) mup_progress_pane_cp

0xc07f,	// (0x0001af7c) mup_volume_pane_cp_ParamLimits

0xc07f,	// (0x0001af7c) mup_volume_pane_cp

0x4167,	// (0x00013064) mup2_visualizer_pane_g1_ParamLimits

0x4167,	// (0x00013064) mup2_visualizer_pane_g1

0xbfbe,	// (0x0001aebb) mup2_visualizer_pane_g2_ParamLimits

0xbfbe,	// (0x0001aebb) mup2_visualizer_pane_g2

0x417e,	// (0x0001307b) mup2_visualizer_pane_g3_ParamLimits

0x417e,	// (0x0001307b) mup2_visualizer_pane_g3

0x0002,

0xf674,	// (0x0001e571) mup2_visualizer_pane_g_ParamLimits

0xf674,	// (0x0001e571) mup2_visualizer_pane_g

0xad58,	// (0x00019c55) aid_size_cell_fmradio

0x35fa,	// (0x000124f7) aid_height_parent_landcape

0xa020,	// (0x00018f1d) wml_content_pane_cp

0xa028,	// (0x00018f25) wml_tabs_pane

0xa031,	// (0x00018f2e) popup_wml_miniature_window

0xa039,	// (0x00018f36) scroll_pane_cp021

0xa04d,	// (0x00018f4a) wml_content_pane_comp8

0x9913,	// (0x00018810) bg_popup_sub_pane_cp05

0xbfdc,	// (0x0001aed9) popup_wml_miniature_window_g1

0xbfe4,	// (0x0001aee1) wml_miniature_view_pane

0x418a,	// (0x00013087) aid_size_wml_view

0x4192,	// (0x0001308f) wml_miniature_view_pane_g1

0x419b,	// (0x00013098) wml_miniature_view_pane_g2

0x41a4,	// (0x000130a1) wml_miniature_view_pane_g3

0x41ac,	// (0x000130a9) wml_miniature_view_pane_g4

0x41b4,	// (0x000130b1) wml_miniature_view_pane_g5

0x41bc,	// (0x000130b9) wml_miniature_view_pane_g6

0x41c4,	// (0x000130c1) wml_miniature_view_pane_g7

0x41cc,	// (0x000130c9) wml_miniature_view_pane_g8

0x0007,

0xf67b,	// (0x0001e578) wml_miniature_view_pane_g

0xbfec,	// (0x0001aee9) background_graphic_ParamLimits

0xbfec,	// (0x0001aee9) background_graphic

0xbff8,	// (0x0001aef5) wml_tabs_2_pane

0xc001,	// (0x0001aefe) wml_tabs_3_pane_ParamLimits

0xc001,	// (0x0001aefe) wml_tabs_3_pane

0xc013,	// (0x0001af10) wml_tabs_4_pane_ParamLimits

0xc013,	// (0x0001af10) wml_tabs_4_pane

0xc029,	// (0x0001af26) wml_tabs_5_pane_ParamLimits

0xc029,	// (0x0001af26) wml_tabs_5_pane

0xc043,	// (0x0001af40) wml_tabs_pane_g2_ParamLimits

0xc043,	// (0x0001af40) wml_tabs_pane_g2

0xc057,	// (0x0001af54) wml_tabs_pane_g3_ParamLimits

0xc057,	// (0x0001af54) wml_tabs_pane_g3

0x41d4,	// (0x000130d1) wml_tabs_2_active_pane_ParamLimits

0x41d4,	// (0x000130d1) wml_tabs_2_active_pane

0x41e8,	// (0x000130e5) wml_tabs_2_passive_pane_ParamLimits

0x41e8,	// (0x000130e5) wml_tabs_2_passive_pane

0x41fc,	// (0x000130f9) wml_tabs_3_active_pane_cp_ParamLimits

0x41fc,	// (0x000130f9) wml_tabs_3_active_pane_cp

0x4211,	// (0x0001310e) wml_tabs_3_passive_pane_ParamLimits

0x4211,	// (0x0001310e) wml_tabs_3_passive_pane

0x4224,	// (0x00013121) wml_tabs_3_passive_pane_cp_ParamLimits

0x4224,	// (0x00013121) wml_tabs_3_passive_pane_cp

0x423b,	// (0x00013138) tabs_4_active_pane

0x4243,	// (0x00013140) tabs_4_passive_pane

0x424d,	// (0x0001314a) tabs_4_passive_pane_cp

0x4255,	// (0x00013152) tabs_4_passive_pane_cp2

0x3315,	// (0x00012212) aid_height_text

0x2a34,	// (0x00011931) mup_volume_cont_pane_ParamLimits

0x2a34,	// (0x00011931) mup_volume_cont_pane

0x04f6,	// (0x0000f3f3) aid_size_cell_pinb

0x0500,	// (0x0000f3fd) aid_size_list_pinb

0x413f,	// (0x0001303c) mup2_volume_cont_pane_ParamLimits

0x413f,	// (0x0001303c) mup2_volume_cont_pane

0xc06b,	// (0x0001af68) mup2_volume_cont_pane_g1_ParamLimits

0xc06b,	// (0x0001af68) mup2_volume_cont_pane_g1

0x01b9,	// (0x0000f0b6) aid_size_cell_touch_ParamLimits

0x01b9,	// (0x0000f0b6) aid_size_cell_touch

0x03e6,	// (0x0000f2e3) touch_pane_ParamLimits

0x03e6,	// (0x0000f2e3) touch_pane

0x9482,	// (0x0001837f) main_rss2_pane

0xc0ad,	// (0x0001afaa) listscroll_rss2_pane

0xc0b6,	// (0x0001afb3) rss2_navigation_pane

0xc0be,	// (0x0001afbb) list_rss2_pane

0xa756,	// (0x00019653) scroll_pane_cp22

0xc0c6,	// (0x0001afc3) rss2_navigation_pane_g1

0xc0cf,	// (0x0001afcc) rss2_navigation_pane_g2

0xc0d7,	// (0x0001afd4) rss2_navigation_pane_g3

0x0002,

0xf68c,	// (0x0001e589) rss2_navigation_pane_g

0xc0df,	// (0x0001afdc) rss2_navigation_pane_t1

0x425f,	// (0x0001315c) rss2_list_single_pane_ParamLimits

0x425f,	// (0x0001315c) rss2_list_single_pane

0xc0ed,	// (0x0001afea) rss2_list_single_pane_t2

0xc0fb,	// (0x0001aff8) rss2_list_single_pane_t3_ParamLimits

0xc0fb,	// (0x0001aff8) rss2_list_single_pane_t3

0xc118,	// (0x0001b015) rss2_list_single_pane_t4

0x2383,	// (0x00011280) smil_status_pane_g1

0x94f2,	// (0x000183ef) main_image2_pane_ParamLimits

0x94f2,	// (0x000183ef) main_image2_pane

0x3d05,	// (0x00012c02) main_camera2_pane_g9_ParamLimits

0x3d05,	// (0x00012c02) main_camera2_pane_g9

0x3e33,	// (0x00012d30) main_camera2_pane_t5_ParamLimits

0x3e33,	// (0x00012d30) main_camera2_pane_t5

0xbf8e,	// (0x0001ae8b) main_camera2_pane_t6_ParamLimits

0xbf8e,	// (0x0001ae8b) main_camera2_pane_t6

0x4274,	// (0x00013171) main_image2_pane_g1_ParamLimits

0x4274,	// (0x00013171) main_image2_pane_g1

0x3051,	// (0x00011f4e) smil2_video_pane_ParamLimits

0x3051,	// (0x00011f4e) smil2_video_pane

0x94a0,	// (0x0001839d) aid_zoom_text_primary_cp

0x94e8,	// (0x000183e5) popup_preview_fixed_window

0x9f89,	// (0x00018e86) im_reading_pane_g1

0x3b7c,	// (0x00012a79) cams2_bc_adjust_pane_cp_ParamLimits

0x3b7c,	// (0x00012a79) cams2_bc_adjust_pane_cp

0x3e62,	// (0x00012d5f) cams2_bc_adjust_pane_ParamLimits

0x3e62,	// (0x00012d5f) cams2_bc_adjust_pane

0xc126,	// (0x0001b023) cams2_bc_adjust_pane_g1

0xc12e,	// (0x0001b02b) cams2_slider_pane

0xc137,	// (0x0001b034) cams2_slider_pane_g1

0xc140,	// (0x0001b03d) cams2_slider_pane_g2

0x0006,

0xf693,	// (0x0001e590) cams2_slider_pane_g

0x05ee,	// (0x0000f4eb) calc_display_pane_ParamLimits

0x0616,	// (0x0000f513) calc_paper_pane_ParamLimits

0x0639,	// (0x0000f536) grid_calc_pane_ParamLimits

0xa606,	// (0x00019503) popup_clock_digital_window_t1_ParamLimits

0xacf5,	// (0x00019bf2) main_image_pane_t1

0x05d0,	// (0x0000f4cd) aid_size_cell_calc_ParamLimits

0x05d0,	// (0x0000f4cd) aid_size_cell_calc

0x3640,	// (0x0001253d) popup_blid_sat_info2_window_ParamLimits

0x3640,	// (0x0001253d) popup_blid_sat_info2_window

0xc162,	// (0x0001b05f) aid_size_cell_blid

0xc16a,	// (0x0001b067) bg_popup_window_pane_cp07

0xc18d,	// (0x0001b08a) grid_popup_blid_pane

0xc197,	// (0x0001b094) heading_pane_cp05_ParamLimits

0xc197,	// (0x0001b094) heading_pane_cp05

0xc261,	// (0x0001b15e) cell_popup_blid_pane_ParamLimits

0xc261,	// (0x0001b15e) cell_popup_blid_pane

0xc285,	// (0x0001b182) cell_popup_blid_pane_g1

0xc28d,	// (0x0001b18a) cell_popup_blid_pane_t1

0x410f,	// (0x0001300c) mup2_indicator_pane_ParamLimits

0x410f,	// (0x0001300c) mup2_indicator_pane

0x9e86,	// (0x00018d83) mup2_visualizer_osc_pane

0xbfca,	// (0x0001aec7) mup2_visualizer_spec_pane_ParamLimits

0xbfca,	// (0x0001aec7) mup2_visualizer_spec_pane

0x428a,	// (0x00013187) mup2_spec_half_pane

0x4293,	// (0x00013190) mup2_spec_half_pane_cp

0x429b,	// (0x00013198) mup2_spec_bar_pane_ParamLimits

0x429b,	// (0x00013198) mup2_spec_bar_pane

0xbf19,	// (0x0001ae16) mup2_spec_bar_pane_g1

0xbf23,	// (0x0001ae20) mup2_spec_bar_pane_g2

0x0001,

0xf606,	// (0x0001e503) mup2_spec_bar_pane_g

0x42bb,	// (0x000131b8) mup2_osc_middle_pane

0xbf35,	// (0x0001ae32) mup2_visualizer_osc_pane_g1

0x9520,	// (0x0001841d) popup_number_entry_window_t1_ParamLimits

0x9533,	// (0x00018430) popup_number_entry_window_t2_ParamLimits

0x9545,	// (0x00018442) popup_number_entry_window_t3_ParamLimits

0x0438,	// (0x0000f335) popup_number_entry_window_t5_ParamLimits

0x0438,	// (0x0000f335) popup_number_entry_window_t5

0xf0ca,	// (0x0001dfc7) popup_number_entry_window_t_ParamLimits

0x9557,	// (0x00018454) text_title_cp2_ParamLimits

0xabcf,	// (0x00019acc) aid_hotspot_pointer_text2_pane

0xabf5,	// (0x00019af2) main_viewer_pane_g9_ParamLimits

0xabf5,	// (0x00019af2) main_viewer_pane_g9

0xa1c2,	// (0x000190bf) cale_month_pane_t1_ParamLimits

0xa22d,	// (0x0001912a) bg_cale_pane_ParamLimits

0xa245,	// (0x00019142) list_cale_pane_ParamLimits

0xa256,	// (0x00019153) listscroll_cale_day_pane_t1

0xa268,	// (0x00019165) scroll_pane_cp09_ParamLimits

0x2a66,	// (0x00011963) main_mup_eq_pane_t1_ParamLimits

0x2a66,	// (0x00011963) main_mup_eq_pane_t1

0x2a80,	// (0x0001197d) main_mup_eq_pane_t2_ParamLimits

0x2a80,	// (0x0001197d) main_mup_eq_pane_t2

0x2a9a,	// (0x00011997) main_mup_eq_pane_t3_ParamLimits

0x2a9a,	// (0x00011997) main_mup_eq_pane_t3

0x2ab6,	// (0x000119b3) main_mup_eq_pane_t4_ParamLimits

0x2ab6,	// (0x000119b3) main_mup_eq_pane_t4

0x2ad2,	// (0x000119cf) main_mup_eq_pane_t5_ParamLimits

0x2ad2,	// (0x000119cf) main_mup_eq_pane_t5

0x2aee,	// (0x000119eb) main_mup_eq_pane_t6_ParamLimits

0x2aee,	// (0x000119eb) main_mup_eq_pane_t6

0x2b02,	// (0x000119ff) main_mup_eq_pane_t7_ParamLimits

0x2b02,	// (0x000119ff) main_mup_eq_pane_t7

0x2b16,	// (0x00011a13) main_mup_eq_pane_t8_ParamLimits

0x2b16,	// (0x00011a13) main_mup_eq_pane_t8

0x2b2a,	// (0x00011a27) main_mup_eq_pane_t9_ParamLimits

0x2b2a,	// (0x00011a27) main_mup_eq_pane_t9

0x2b44,	// (0x00011a41) main_mup_eq_pane_t10_ParamLimits

0x2b44,	// (0x00011a41) main_mup_eq_pane_t10

0x0009,

0xf455,	// (0x0001e352) main_mup_eq_pane_t_ParamLimits

0xf455,	// (0x0001e352) main_mup_eq_pane_t

0x2bf3,	// (0x00011af0) mup_equalizer_pane_cp5_ParamLimits

0x2c07,	// (0x00011b04) mup_equalizer_pane_cp6_ParamLimits

0x2c1b,	// (0x00011b18) mup_equalizer_pane_cp7_ParamLimits

0x9482,	// (0x0001837f) main_gallery_pane

0xbf3e,	// (0x0001ae3b) smil2_volume_pane

0xbf46,	// (0x0001ae43) smil_status_volume_pane_g1_ParamLimits

0xbf59,	// (0x0001ae56) smil_status_volume_pane_g2_ParamLimits

0xbf6c,	// (0x0001ae69) smil_status_volume_pane_g3_ParamLimits

0xf60b,	// (0x0001e508) smil_status_volume_pane_g_ParamLimits

0xc16a,	// (0x0001b067) bg_popup_window_pane_cp07_ParamLimits

0xc178,	// (0x0001b075) blid_firmament_pane

0x42c4,	// (0x000131c1) aid_size_cell_gallery_ParamLimits

0x42c4,	// (0x000131c1) aid_size_cell_gallery

0x42da,	// (0x000131d7) grid_gallery_pane_ParamLimits

0x42da,	// (0x000131d7) grid_gallery_pane

0x42f3,	// (0x000131f0) cell_gallery_pane_ParamLimits

0x42f3,	// (0x000131f0) cell_gallery_pane

0xc29b,	// (0x0001b198) bg_cell_gallery_focus_pane_ParamLimits

0xc29b,	// (0x0001b198) bg_cell_gallery_focus_pane

0xc2ad,	// (0x0001b1aa) cell_gallery_pane_g1_ParamLimits

0xc2ad,	// (0x0001b1aa) cell_gallery_pane_g1

0x433c,	// (0x00013239) cell_gallery_pane_g2_ParamLimits

0x433c,	// (0x00013239) cell_gallery_pane_g2

0x4349,	// (0x00013246) cell_gallery_pane_g3_ParamLimits

0x4349,	// (0x00013246) cell_gallery_pane_g3

0xc2b9,	// (0x0001b1b6) cell_gallery_pane_g4_ParamLimits

0xc2b9,	// (0x0001b1b6) cell_gallery_pane_g4

0x0003,

0xf6b9,	// (0x0001e5b6) cell_gallery_pane_g_ParamLimits

0xf6b9,	// (0x0001e5b6) cell_gallery_pane_g

0xc2c5,	// (0x0001b1c2) bg_cell_gallery_focus_pane_g1

0xc2cd,	// (0x0001b1ca) bg_cell_gallery_focus_pane_g2

0xc2d5,	// (0x0001b1d2) bg_cell_gallery_focus_pane_g3

0xc2dd,	// (0x0001b1da) bg_cell_gallery_focus_pane_g4

0xc2e5,	// (0x0001b1e2) bg_cell_gallery_focus_pane_g5

0xc2ed,	// (0x0001b1ea) bg_cell_gallery_focus_pane_g6

0xc2f5,	// (0x0001b1f2) bg_cell_gallery_focus_pane_g7

0xc2fd,	// (0x0001b1fa) bg_cell_gallery_focus_pane_g8

0x0007,

0xf6c2,	// (0x0001e5bf) bg_cell_gallery_focus_pane_g

0xc305,	// (0x0001b202) aid_firma_cardinal

0xc319,	// (0x0001b216) blid_firmament_pane_t1

0xc330,	// (0x0001b22d) blid_firmament_pane_t2

0xc347,	// (0x0001b244) blid_firmament_pane_t3

0xc35e,	// (0x0001b25b) blid_firmament_pane_t4

0x0003,

0xf6d3,	// (0x0001e5d0) blid_firmament_pane_t

0xc375,	// (0x0001b272) blid_sat_info_pane

0xc385,	// (0x0001b282) blid_sat_info_pane_g1

0xc385,	// (0x0001b282) blid_sat_info_pane_g2

0x0001,

0xf6dc,	// (0x0001e5d9) blid_sat_info_pane_g

0xc38f,	// (0x0001b28c) blid_sat_info_pane_t1

0xc39d,	// (0x0001b29a) smil2_volume_content_pane

0xc3a6,	// (0x0001b2a3) smil2_volume_pane_g1

0xc3ae,	// (0x0001b2ab) smil2_volume_content_pane_g1

0xc3b7,	// (0x0001b2b4) smil2_volume_content_pane_g2

0xc3c0,	// (0x0001b2bd) smil2_volume_content_pane_g3

0xc3c9,	// (0x0001b2c6) smil2_volume_content_pane_g4

0xc3d2,	// (0x0001b2cf) smil2_volume_content_pane_g5

0xc3db,	// (0x0001b2d8) smil2_volume_content_pane_g6

0xc3e4,	// (0x0001b2e1) smil2_volume_content_pane_g7

0xc3ed,	// (0x0001b2ea) smil2_volume_content_pane_g8

0xc3f6,	// (0x0001b2f3) smil2_volume_content_pane_g9

0xc3ff,	// (0x0001b2fc) smil2_volume_content_pane_g10

0x0009,

0xf6e1,	// (0x0001e5de) smil2_volume_content_pane_g

0x0bd9,	// (0x0000fad6) cale_week_day_heading_pane_t1_ParamLimits

0x0c1e,	// (0x0000fb1b) cale_week_day_heading_pane_t2_ParamLimits

0x0c68,	// (0x0000fb65) cale_week_day_heading_pane_t3_ParamLimits

0x0cb2,	// (0x0000fbaf) cale_week_day_heading_pane_t4_ParamLimits

0x0cfc,	// (0x0000fbf9) cale_week_day_heading_pane_t5_ParamLimits

0x0d4e,	// (0x0000fc4b) cale_week_day_heading_pane_t6_ParamLimits

0x0da0,	// (0x0000fc9d) cale_week_day_heading_pane_t7_ParamLimits

0xf1d1,	// (0x0001e0ce) cale_week_day_heading_pane_t_ParamLimits

0x9e2b,	// (0x00018d28) bg_cale_side_pane_ParamLimits

0x0de5,	// (0x0000fce2) cale_week_time_pane_t1_ParamLimits

0x0dff,	// (0x0000fcfc) cale_week_time_pane_t2_ParamLimits

0x0e19,	// (0x0000fd16) cale_week_time_pane_t3_ParamLimits

0x0e33,	// (0x0000fd30) cale_week_time_pane_t4_ParamLimits

0x0e4d,	// (0x0000fd4a) cale_week_time_pane_t5_ParamLimits

0x0e67,	// (0x0000fd64) cale_week_time_pane_t6_ParamLimits

0x0e81,	// (0x0000fd7e) cale_week_time_pane_t7_ParamLimits

0x0e9b,	// (0x0000fd98) cale_week_time_pane_t8_ParamLimits

0xf1e0,	// (0x0001e0dd) cale_week_time_pane_t_ParamLimits

0x0ebb,	// (0x0000fdb8) cell_cale_week_pane_g2_ParamLimits

0x9e2b,	// (0x00018d28) bg_cale_side_pane_cp01_ParamLimits

0x2164,	// (0x00011061) cale_month_week_pane_t1_ParamLimits

0x217d,	// (0x0001107a) cale_month_week_pane_t2_ParamLimits

0x2196,	// (0x00011093) cale_month_week_pane_t3_ParamLimits

0x21af,	// (0x000110ac) cale_month_week_pane_t4_ParamLimits

0x21c8,	// (0x000110c5) cale_month_week_pane_t5_ParamLimits

0x21e1,	// (0x000110de) cale_month_week_pane_t6_ParamLimits

0xf2b5,	// (0x0001e1b2) cale_month_week_pane_t_ParamLimits

0xa1d4,	// (0x000190d1) cell_cale_month_pane_g1_ParamLimits

0x9482,	// (0x0001837f) main_cale_event_viewer_pane

0x9482,	// (0x0001837f) listscroll_cale_event_viewer_pane

0xc408,	// (0x0001b305) list_cale_ev_pane

0xc410,	// (0x0001b30d) scroll_pane_cp023

0xc41c,	// (0x0001b319) field_cale_ev_pane_ParamLimits

0xc41c,	// (0x0001b319) field_cale_ev_pane

0xc43a,	// (0x0001b337) field_cale_ev_content_pane_ParamLimits

0xc43a,	// (0x0001b337) field_cale_ev_content_pane

0xc446,	// (0x0001b343) field_cale_ev_pane_g1_ParamLimits

0xc446,	// (0x0001b343) field_cale_ev_pane_g1

0xc452,	// (0x0001b34f) field_cale_ev_pane_g2_ParamLimits

0xc452,	// (0x0001b34f) field_cale_ev_pane_g2

0xc46a,	// (0x0001b367) field_cale_ev_pane_g3_ParamLimits

0xc46a,	// (0x0001b367) field_cale_ev_pane_g3

0x0002,

0xf6f6,	// (0x0001e5f3) field_cale_ev_pane_g_ParamLimits

0xf6f6,	// (0x0001e5f3) field_cale_ev_pane_g

0xc482,	// (0x0001b37f) field_cale_ev_pane_t1_ParamLimits

0xc482,	// (0x0001b37f) field_cale_ev_pane_t1

0xc499,	// (0x0001b396) field_cale_ev_content_pane_t1_ParamLimits

0xc499,	// (0x0001b396) field_cale_ev_content_pane_t1

0xab20,	// (0x00019a1d) bg_button_pane_cp01

0x0906,	// (0x0000f803) listscroll_cale_week_pane_ParamLimits

0x9dd6,	// (0x00018cd3) popup_toolbar_window_cp01

0x9dfc,	// (0x00018cf9) listscroll_cale_week_pane_t1_ParamLimits

0x0906,	// (0x0000f803) listscroll_cale_day_pane_ParamLimits

0x9dd6,	// (0x00018cd3) popup_toolbar_window_cp02

0xa256,	// (0x00019153) listscroll_cale_day_pane_t1_ParamLimits

0x0906,	// (0x0000f803) main_cale_month_pane_ParamLimits

0xbeb7,	// (0x0001adb4) popup_toolbar_window_cp03_ParamLimits

0xbeb7,	// (0x0001adb4) popup_toolbar_window_cp03

0x2f19,	// (0x00011e16) main_image_pane_g2_ParamLimits

0x2f19,	// (0x00011e16) main_image_pane_g2

0x2f2a,	// (0x00011e27) main_image_pane_g3_ParamLimits

0x2f2a,	// (0x00011e27) main_image_pane_g3

0x0002,

0xf4e7,	// (0x0001e3e4) main_image_pane_g_ParamLimits

0xf4e7,	// (0x0001e3e4) main_image_pane_g

0xacf5,	// (0x00019bf2) main_image_pane_t1_ParamLimits

0x2f3b,	// (0x00011e38) main_image_pane_t2_ParamLimits

0x2f3b,	// (0x00011e38) main_image_pane_t2

0x2f4d,	// (0x00011e4a) main_image_pane_t3_ParamLimits

0x2f4d,	// (0x00011e4a) main_image_pane_t3

0x2f75,	// (0x00011e72) main_image_pane_t4_ParamLimits

0x2f75,	// (0x00011e72) main_image_pane_t4

0x0003,

0xf4ee,	// (0x0001e3eb) main_image_pane_t_ParamLimits

0xf4ee,	// (0x0001e3eb) main_image_pane_t

0x2f95,	// (0x00011e92) popup_image_details_window_cp01

0x2f9f,	// (0x00011e9c) popup_toobar_trans_pane_cp01_ParamLimits

0x2f9f,	// (0x00011e9c) popup_toobar_trans_pane_cp01

0x371f,	// (0x0001261c) popup_image_details_window_ParamLimits

0x371f,	// (0x0001261c) popup_image_details_window

0xbe8a,	// (0x0001ad87) popup_image_focus_window

0x3b36,	// (0x00012a33) camera2_autofocus_pane_ParamLimits

0x3b36,	// (0x00012a33) camera2_autofocus_pane

0x9482,	// (0x0001837f) bg_popup_sub_pane_cp06

0xc4b7,	// (0x0001b3b4) popup_image_focus_window_g1

0xc4bf,	// (0x0001b3bc) popup_image_focus_window_g2

0xc4c7,	// (0x0001b3c4) popup_image_focus_window_g3

0xc4cf,	// (0x0001b3cc) popup_image_focus_window_g4

0x0003,

0xf6fd,	// (0x0001e5fa) popup_image_focus_window_g

0xc4d7,	// (0x0001b3d4) popup_image_focus_window_t1

0xc4e5,	// (0x0001b3e2) popup_image_focus_window_t2

0xc4f5,	// (0x0001b3f2) popup_image_focus_window_t3

0x0002,

0xf706,	// (0x0001e603) popup_image_focus_window_t

0xc503,	// (0x0001b400) camera2_autofocus_pane_g1

0x94f2,	// (0x000183ef) bg_tb_trans_pane_cp01

0xc511,	// (0x0001b40e) popup_image_details_window_g1

0xc524,	// (0x0001b421) popup_image_details_window_g2

0x0002,

0xf718,	// (0x0001e615) popup_image_details_window_g

0xc54d,	// (0x0001b44a) popup_image_details_window_t1

0xc55f,	// (0x0001b45c) popup_image_details_window_t2

0xc578,	// (0x0001b475) popup_image_details_window_t3

0xc58c,	// (0x0001b489) popup_image_details_window_t4

0xc5a7,	// (0x0001b4a4) popup_image_details_window_t5

0x0004,

0xf71f,	// (0x0001e61c) popup_image_details_window_t

0x9c27,	// (0x00018b24) bg_calc_paper_pane_ParamLimits

0x9482,	// (0x0001837f) grid_highlight_pane_cp013

0x9c3b,	// (0x00018b38) list_calc_pane_ParamLimits

0x9c4d,	// (0x00018b4a) scroll_pane_cp024

0x9c55,	// (0x00018b52) bg_calc_display_pane_ParamLimits

0x0737,	// (0x0000f634) calc_display_pane_t1_ParamLimits

0x0749,	// (0x0000f646) calc_display_pane_t2_ParamLimits

0x9c61,	// (0x00018b5e) calc_display_pane_t3_ParamLimits

0xf151,	// (0x0001e04e) calc_display_pane_t_ParamLimits

0x0803,	// (0x0000f700) cell_calc_pane_g2

0x0001,

0xf16e,	// (0x0001e06b) cell_calc_pane_g

0x080c,	// (0x0000f709) cell_calc_pane_t1

0x9cd8,	// (0x00018bd5) grid_highlight_pane_cp02_ParamLimits

0x9cee,	// (0x00018beb) toolbar_button_pane_cp01_ParamLimits

0x9cee,	// (0x00018beb) toolbar_button_pane_cp01

0xad3a,	// (0x00019c37) temp_image_control_pane_ParamLimits

0xad3a,	// (0x00019c37) temp_image_control_pane

0x94f2,	// (0x000183ef) main_mp3_pane

0xc5c1,	// (0x0001b4be) temp_image_control_pane_g1_ParamLimits

0xc5c1,	// (0x0001b4be) temp_image_control_pane_g1

0xc5cf,	// (0x0001b4cc) temp_image_control_pane_g2_ParamLimits

0xc5cf,	// (0x0001b4cc) temp_image_control_pane_g2

0xc5e1,	// (0x0001b4de) temp_image_control_pane_g3_ParamLimits

0xc5e1,	// (0x0001b4de) temp_image_control_pane_g3

0x4386,	// (0x00013283) temp_image_control_pane_g4_ParamLimits

0x4386,	// (0x00013283) temp_image_control_pane_g4

0x0003,

0xf72a,	// (0x0001e627) temp_image_control_pane_g_ParamLimits

0xf72a,	// (0x0001e627) temp_image_control_pane_g

0xc5c1,	// (0x0001b4be) main_mp3_pane_g1

0x4399,	// (0x00013296) main_mp3_pane_g2

0x0007,

0xf733,	// (0x0001e630) main_mp3_pane_g

0xc624,	// (0x0001b521) main_mp3_pane_t1

0x9e98,	// (0x00018d95) main_camera_pane_g8_ParamLimits

0x9e98,	// (0x00018d95) main_camera_pane_g8

0x11b5,	// (0x000100b2) main_video_pane_g7_ParamLimits

0x11b5,	// (0x000100b2) main_video_pane_g7

0xbfac,	// (0x0001aea9) main_camera2_pane_t7_ParamLimits

0xbfac,	// (0x0001aea9) main_camera2_pane_t7

0x9fe0,	// (0x00018edd) scroll_pane_cp025_ParamLimits

0x9fe0,	// (0x00018edd) scroll_pane_cp025

0x9ff4,	// (0x00018ef1) scroll_pane_cp026_ParamLimits

0x9ff4,	// (0x00018ef1) scroll_pane_cp026

0xa003,	// (0x00018f00) wml_content_pane_ParamLimits

0x9482,	// (0x0001837f) main_touch_calib_pane

0x446d,	// (0x0001336a) main_touch_calib_pane_g1

0x447f,	// (0x0001337c) main_touch_calib_pane_g2

0x4491,	// (0x0001338e) main_touch_calib_pane_g3

0x44a3,	// (0x000133a0) main_touch_calib_pane_g4

0x0003,

0xf751,	// (0x0001e64e) main_touch_calib_pane_g

0x44b5,	// (0x000133b2) main_touch_calib_pane_t1

0x44cf,	// (0x000133cc) main_touch_calib_pane_t2

0x0004,

0xf75a,	// (0x0001e657) main_touch_calib_pane_t

0xa832,	// (0x0001972f) mup_progress_pane_cp02

0xa867,	// (0x00019764) navi_pane_g1

0xa922,	// (0x0001981f) navi_pane_mp_t3

0x94f2,	// (0x000183ef) main_mp3_pane_ParamLimits

0x38a4,	// (0x000127a1) navi_pane_ParamLimits

0xc5c1,	// (0x0001b4be) main_mp3_pane_g1_ParamLimits

0x4399,	// (0x00013296) main_mp3_pane_g2_ParamLimits

0x43a7,	// (0x000132a4) main_mp3_pane_g3_ParamLimits

0x43a7,	// (0x000132a4) main_mp3_pane_g3

0x43b5,	// (0x000132b2) main_mp3_pane_g4_ParamLimits

0x43b5,	// (0x000132b2) main_mp3_pane_g4

0xc5f1,	// (0x0001b4ee) main_mp3_pane_g5_ParamLimits

0xc5f1,	// (0x0001b4ee) main_mp3_pane_g5

0xc5ff,	// (0x0001b4fc) main_mp3_pane_g6_ParamLimits

0xc5ff,	// (0x0001b4fc) main_mp3_pane_g6

0xc60c,	// (0x0001b509) main_mp3_pane_g7_ParamLimits

0xc60c,	// (0x0001b509) main_mp3_pane_g7

0xc618,	// (0x0001b515) main_mp3_pane_g8_ParamLimits

0xc618,	// (0x0001b515) main_mp3_pane_g8

0xf733,	// (0x0001e630) main_mp3_pane_g_ParamLimits

0x43c1,	// (0x000132be) main_mp3_pane_t2

0x43cf,	// (0x000132cc) main_mp3_pane_t3

0xc632,	// (0x0001b52f) main_mp3_pane_t4

0xc640,	// (0x0001b53d) main_mp3_pane_t5

0x0005,

0xf744,	// (0x0001e641) main_mp3_pane_t

0xc64e,	// (0x0001b54b) mup_progress_pane_cp01

0x94a0,	// (0x0001839d) aid_zoom_text_secondary2

0xc408,	// (0x0001b305) list_cale_ev2_pane

0xc410,	// (0x0001b30d) scroll_pane_cp023_ParamLimits

0x4525,	// (0x00013422) field_cale_ev2_pane_ParamLimits

0x4525,	// (0x00013422) field_cale_ev2_pane

0x4545,	// (0x00013442) field_cale_ev2_pane_g1_ParamLimits

0x4545,	// (0x00013442) field_cale_ev2_pane_g1

0x4551,	// (0x0001344e) field_cale_ev2_pane_g2_ParamLimits

0x4551,	// (0x0001344e) field_cale_ev2_pane_g2

0x4569,	// (0x00013466) field_cale_ev2_pane_g3_ParamLimits

0x4569,	// (0x00013466) field_cale_ev2_pane_g3

0x0003,

0xf765,	// (0x0001e662) field_cale_ev2_pane_g_ParamLimits

0xf765,	// (0x0001e662) field_cale_ev2_pane_g

0x4581,	// (0x0001347e) field_cale_ev2_pane_t1_ParamLimits

0x4581,	// (0x0001347e) field_cale_ev2_pane_t1

0x4598,	// (0x00013495) field_cale_ev2_pane_t2_ParamLimits

0x4598,	// (0x00013495) field_cale_ev2_pane_t2

0x0001,

0xf76e,	// (0x0001e66b) field_cale_ev2_pane_t_ParamLimits

0xf76e,	// (0x0001e66b) field_cale_ev2_pane_t

0x2dce,	// (0x00011ccb) main_postcard_pane_g5_ParamLimits

0x2dce,	// (0x00011ccb) main_postcard_pane_g5

0x2de4,	// (0x00011ce1) main_postcard_pane_g6_ParamLimits

0x2de4,	// (0x00011ce1) main_postcard_pane_g6

0x0f81,	// (0x0000fe7e) camera2_autofocus_pane_cp_ParamLimits

0x0f81,	// (0x0000fe7e) camera2_autofocus_pane_cp

0x94f2,	// (0x000183ef) main_mup3_pane

0x45ad,	// (0x000134aa) main_mup3_pane_g1_ParamLimits

0x45ad,	// (0x000134aa) main_mup3_pane_g1

0x45cf,	// (0x000134cc) main_mup3_pane_g2_ParamLimits

0x45cf,	// (0x000134cc) main_mup3_pane_g2

0x464d,	// (0x0001354a) main_mup3_pane_g3_ParamLimits

0x464d,	// (0x0001354a) main_mup3_pane_g3

0x4693,	// (0x00013590) main_mup3_pane_g4_ParamLimits

0x4693,	// (0x00013590) main_mup3_pane_g4

0x46d9,	// (0x000135d6) main_mup3_pane_g5_ParamLimits

0x46d9,	// (0x000135d6) main_mup3_pane_g5

0x471f,	// (0x0001361c) main_mup3_pane_g6_ParamLimits

0x471f,	// (0x0001361c) main_mup3_pane_g6

0xc682,	// (0x0001b57f) main_mup3_pane_g7_ParamLimits

0xc682,	// (0x0001b57f) main_mup3_pane_g7

0x0007,

0xf77e,	// (0x0001e67b) main_mup3_pane_g_ParamLimits

0xf77e,	// (0x0001e67b) main_mup3_pane_g

0x479d,	// (0x0001369a) main_mup3_pane_t1_ParamLimits

0x479d,	// (0x0001369a) main_mup3_pane_t1

0x4811,	// (0x0001370e) main_mup3_pane_t2_ParamLimits

0x4811,	// (0x0001370e) main_mup3_pane_t2

0x48e5,	// (0x000137e2) main_mup3_pane_t4_ParamLimits

0x48e5,	// (0x000137e2) main_mup3_pane_t4

0x493b,	// (0x00013838) main_mup3_pane_t5_ParamLimits

0x493b,	// (0x00013838) main_mup3_pane_t5

0x49f7,	// (0x000138f4) main_mup3_pane_t6_ParamLimits

0x49f7,	// (0x000138f4) main_mup3_pane_t6

0x0005,

0xf78f,	// (0x0001e68c) main_mup3_pane_t_ParamLimits

0xf78f,	// (0x0001e68c) main_mup3_pane_t

0x4aaf,	// (0x000139ac) mup3_progress_pane_ParamLimits

0x4aaf,	// (0x000139ac) mup3_progress_pane

0x4b45,	// (0x00013a42) popup_mup3_control_window_ParamLimits

0x4b45,	// (0x00013a42) popup_mup3_control_window

0xc690,	// (0x0001b58d) popup_mup3_text_window

0x4b77,	// (0x00013a74) mup3_progress_pane_t1

0x4b96,	// (0x00013a93) mup3_progress_pane_t2

0xc698,	// (0x0001b595) mup3_progress_pane_t3

0x0002,

0xf79c,	// (0x0001e699) mup3_progress_pane_t

0xc6b5,	// (0x0001b5b2) mup_progress_pane_cp03

0x9482,	// (0x0001837f) bg_tb_trans_pane_cp04

0x4bb5,	// (0x00013ab2) mup3_volume_pane

0x4bbd,	// (0x00013aba) popup_mup3_control_window_g1

0x4bc6,	// (0x00013ac3) mup3_volume_pane_g1

0x4bcf,	// (0x00013acc) mup3_volume_pane_g2

0x4bd8,	// (0x00013ad5) mup3_volume_pane_g3

0x0002,

0xf7a3,	// (0x0001e6a0) mup3_volume_pane_g

0x9482,	// (0x0001837f) bg_tb_trans_pane_cp03

0xc6c5,	// (0x0001b5c2) popup_mup3_text_window_g1

0xc6cd,	// (0x0001b5ca) popup_mup3_text_window_t1

0x9caf,	// (0x00018bac) list_calc_item_pane_g1_ParamLimits

0xc094,	// (0x0001af91) mup_volume_pane_cp_g1

0x44e9,	// (0x000133e6) main_touch_calib_pane_t3

0x44fd,	// (0x000133fa) main_touch_calib_pane_t4

0x4511,	// (0x0001340e) main_touch_calib_pane_t5

0x948c,	// (0x00018389) aid_cell_size_toolbar2

0x9494,	// (0x00018391) aid_popup3_width_pane

0x94a0,	// (0x0001839d) aid_zoom_text_msg_primary

0x0f60,	// (0x0000fe5d) vorec_t7

0x9c73,	// (0x00018b70) bg_calc_paper_pane_g1_ParamLimits

0x9c7f,	// (0x00018b7c) bg_calc_paper_pane_g2_ParamLimits

0x9c8b,	// (0x00018b88) bg_calc_paper_pane_g3_ParamLimits

0x9c97,	// (0x00018b94) bg_calc_paper_pane_g4_ParamLimits

0x9ca3,	// (0x00018ba0) bg_calc_paper_pane_g5_ParamLimits

0x0790,	// (0x0000f68d) bg_calc_paper_pane_g6_ParamLimits

0x079f,	// (0x0000f69c) bg_calc_paper_pane_g7_ParamLimits

0x07ae,	// (0x0000f6ab) bg_calc_paper_pane_g8_ParamLimits

0xf158,	// (0x0001e055) bg_calc_paper_pane_g_ParamLimits

0x07c1,	// (0x0000f6be) calc_bg_paper_pane_g9_ParamLimits

0x10cc,	// (0x0000ffc9) image_qvga_pane_ParamLimits

0x10cc,	// (0x0000ffc9) image_qvga_pane

0x9b6e,	// (0x00018a6b) bg_popup_sub_pane_cp04_ParamLimits

0xac71,	// (0x00019b6e) popup_mup_playback_window_g1_ParamLimits

0xac7d,	// (0x00019b7a) popup_mup_playback_window_t1_ParamLimits

0xac92,	// (0x00019b8f) popup_mup_playback_window_t2_ParamLimits

0xf4e2,	// (0x0001e3df) popup_mup_playback_window_t_ParamLimits

0x4029,	// (0x00012f26) main_mup2_pane_g3_ParamLimits

0x4029,	// (0x00012f26) main_mup2_pane_g3

0x14d4,	// (0x000103d1) popup_toolbar_window_cp04

0xb074,	// (0x00019f71) popup_call2_audio_second_window_g3_ParamLimits

0xb074,	// (0x00019f71) popup_call2_audio_second_window_g3

0xb47e,	// (0x0001a37b) popup_call2_audio_first_window_g4_ParamLimits

0xb47e,	// (0x0001a37b) popup_call2_audio_first_window_g4

0xbafd,	// (0x0001a9fa) popup_call2_audio_in_window_g4_ParamLimits

0xbafd,	// (0x0001a9fa) popup_call2_audio_in_window_g4

0x2efb,	// (0x00011df8) aid_area_sk_bg_cut_ParamLimits

0x2efb,	// (0x00011df8) aid_area_sk_bg_cut

0xaca7,	// (0x00019ba4) aid_area_sk_bg_cut_2_ParamLimits

0xaca7,	// (0x00019ba4) aid_area_sk_bg_cut_2

0x432c,	// (0x00013229) aid_placing_details_win

0x4334,	// (0x00013231) aid_placing_details_win_2

0xc503,	// (0x0001b400) camera2_autofocus_pane_g1_ParamLimits

0x037f,	// (0x0000f27c) popup_fixed_preview_cale_window_ParamLimits

0x037f,	// (0x0000f27c) popup_fixed_preview_cale_window

0xa9a9,	// (0x000198a6) navi_slider_pane_g3

0xa9b2,	// (0x000198af) navi_slider_pane_g4

0xa9bb,	// (0x000198b8) navi_slider_pane_g5

0xa9a9,	// (0x000198a6) navi_slider_pane_g6

0xa9c4,	// (0x000198c1) navi_slider_pane_g7

0xaae5,	// (0x000199e2) mup_scale_pane_g3

0xaaee,	// (0x000199eb) mup_scale_pane_g4

0xaaf7,	// (0x000199f4) mup_scale_pane_g5

0x2c2f,	// (0x00011b2c) mup_scale_pane_g6

0x2c38,	// (0x00011b35) mup_scale_pane_g7

0xa9a9,	// (0x000198a6) cams2_slider_pane_g3

0xc149,	// (0x0001b046) cams2_slider_pane_g4

0xc151,	// (0x0001b04e) cams2_slider_pane_g5

0xa9a9,	// (0x000198a6) cams2_slider_pane_g6

0xc159,	// (0x0001b056) cams2_slider_pane_g7

0xc385,	// (0x0001b282) camera2_autofocus_pane_cp_g1

0xbe5e,	// (0x0001ad5b) bg_popup_preview_window_pane_cp02_ParamLimits

0xbe5e,	// (0x0001ad5b) bg_popup_preview_window_pane_cp02

0xc6db,	// (0x0001b5d8) list_fp_cale_pane_ParamLimits

0xc6db,	// (0x0001b5d8) list_fp_cale_pane

0xc6e7,	// (0x0001b5e4) popup_fixed_preview_cale_window_t1_ParamLimits

0xc6e7,	// (0x0001b5e4) popup_fixed_preview_cale_window_t1

0x4be1,	// (0x00013ade) popup_fixed_preview_cale_window_t2_ParamLimits

0x4be1,	// (0x00013ade) popup_fixed_preview_cale_window_t2

0x4bf6,	// (0x00013af3) popup_fixed_preview_cale_window_t3_ParamLimits

0x4bf6,	// (0x00013af3) popup_fixed_preview_cale_window_t3

0x0002,

0xf7aa,	// (0x0001e6a7) popup_fixed_preview_cale_window_t_ParamLimits

0xf7aa,	// (0x0001e6a7) popup_fixed_preview_cale_window_t

0x4c0b,	// (0x00013b08) list_single_fp_cale_pane_ParamLimits

0x4c0b,	// (0x00013b08) list_single_fp_cale_pane

0xc705,	// (0x0001b602) list_single_fp_cale_pane_g1_ParamLimits

0xc705,	// (0x0001b602) list_single_fp_cale_pane_g1

0xc711,	// (0x0001b60e) list_single_fp_cale_pane_g2_ParamLimits

0xc711,	// (0x0001b60e) list_single_fp_cale_pane_g2

0x0002,

0xf7b1,	// (0x0001e6ae) list_single_fp_cale_pane_g_ParamLimits

0xf7b1,	// (0x0001e6ae) list_single_fp_cale_pane_g

0xc72a,	// (0x0001b627) list_single_fp_cale_pane_t1_ParamLimits

0xc72a,	// (0x0001b627) list_single_fp_cale_pane_t1

0xc73c,	// (0x0001b639) list_single_fp_cale_pane_t2_ParamLimits

0xc73c,	// (0x0001b639) list_single_fp_cale_pane_t2

0x0001,

0xf7b8,	// (0x0001e6b5) list_single_fp_cale_pane_t_ParamLimits

0xf7b8,	// (0x0001e6b5) list_single_fp_cale_pane_t

0x0000,

0x0000,

0x0000,

0x0000,

0x9482,	// (0x0001837f) main_dialer_pane

0x4c20,	// (0x00013b1d) aid_cell_size_keypad

0x4c2a,	// (0x00013b27) dialer_ne_pane

0x4c32,	// (0x00013b2f) grid_dialer_command_1_pane

0x4c3a,	// (0x00013b37) grid_dialer_command_2_pane

0x4c42,	// (0x00013b3f) grid_dialer_keypad_pane

0x4c54,	// (0x00013b51) bg_popup_call_pane_cp06_ParamLimits

0x4c54,	// (0x00013b51) bg_popup_call_pane_cp06

0x4c60,	// (0x00013b5d) dialer_ne_clear_pane_ParamLimits

0x4c60,	// (0x00013b5d) dialer_ne_clear_pane

0xc76f,	// (0x0001b66c) dialer_ne_pane_g1

0xc777,	// (0x0001b674) dialer_ne_pane_t1_ParamLimits

0xc777,	// (0x0001b674) dialer_ne_pane_t1

0x4c6c,	// (0x00013b69) dialer_ne_pane_t2_ParamLimits

0x4c6c,	// (0x00013b69) dialer_ne_pane_t2

0x4c96,	// (0x00013b93) dialer_ne_pane_t3_ParamLimits

0x4c96,	// (0x00013b93) dialer_ne_pane_t3

0x0002,

0xf7bd,	// (0x0001e6ba) dialer_ne_pane_t_ParamLimits

0xf7bd,	// (0x0001e6ba) dialer_ne_pane_t

0x4cc6,	// (0x00013bc3) dialer_ne_pane_t3_copy1_ParamLimits

0x4cc6,	// (0x00013bc3) dialer_ne_pane_t3_copy1

0x4cf5,	// (0x00013bf2) cell_dialer_keypad_pane_ParamLimits

0x4cf5,	// (0x00013bf2) cell_dialer_keypad_pane

0x4d0c,	// (0x00013c09) cell_dialer_command_1_pane_ParamLimits

0x4d0c,	// (0x00013c09) cell_dialer_command_1_pane

0x4d22,	// (0x00013c1f) cell_dialer_command_2_pane_ParamLimits

0x4d22,	// (0x00013c1f) cell_dialer_command_2_pane

0xc789,	// (0x0001b686) bg_button_pane_cp02_ParamLimits

0xc789,	// (0x0001b686) bg_button_pane_cp02

0x4d31,	// (0x00013c2e) cell_dialer_keypad_pane_g1_ParamLimits

0x4d31,	// (0x00013c2e) cell_dialer_keypad_pane_g1

0xc789,	// (0x0001b686) bg_button_pane_cp03_ParamLimits

0xc789,	// (0x0001b686) bg_button_pane_cp03

0x4d45,	// (0x00013c42) cell_dialer_command_1_pane_g1_ParamLimits

0x4d45,	// (0x00013c42) cell_dialer_command_1_pane_g1

0xc795,	// (0x0001b692) bg_button_pane_cp04

0x4d59,	// (0x00013c56) cell_dialer_command_2_pane_g1

0x9e86,	// (0x00018d83) bg_button_pane_cp06

0xc79d,	// (0x0001b69a) dialer_ne_clear_pane_g1

0xa873,	// (0x00019770) navi_pane_g2

0xa8a1,	// (0x0001979e) navi_pane_g3

0x0002,

0xf3e5,	// (0x0001e2e2) navi_pane_g

0xa930,	// (0x0001982d) navi_pane_mv_g2

0xa957,	// (0x00019854) navi_pane_mv_g5

0x27f3,	// (0x000116f0) navi_pane_mv_t1

0x9c55,	// (0x00018b52) main_clock2_pane

0x4da4,	// (0x00013ca1) main_clock2_list_pane_ParamLimits

0x4da4,	// (0x00013ca1) main_clock2_list_pane

0x4dda,	// (0x00013cd7) main_clock2_pane_t1_ParamLimits

0x4dda,	// (0x00013cd7) main_clock2_pane_t1

0x4e16,	// (0x00013d13) main_clock2_pane_t2_ParamLimits

0x4e16,	// (0x00013d13) main_clock2_pane_t2

0x0004,

0xf7c9,	// (0x0001e6c6) main_clock2_pane_t_ParamLimits

0xf7c9,	// (0x0001e6c6) main_clock2_pane_t

0x4eb4,	// (0x00013db1) popup_clock_analogue_window_cp03_ParamLimits

0x4eb4,	// (0x00013db1) popup_clock_analogue_window_cp03

0x4ed9,	// (0x00013dd6) popup_clock_digital_window_cp02_ParamLimits

0x4ed9,	// (0x00013dd6) popup_clock_digital_window_cp02

0x4f4a,	// (0x00013e47) main_clock2_list_single_pane_ParamLimits

0x4f4a,	// (0x00013e47) main_clock2_list_single_pane

0x9e86,	// (0x00018d83) list_highlight_pane_cp05

0xc7db,	// (0x0001b6d8) main_clock2_list_single_pane_t1

0x14d4,	// (0x000103d1) popup_toolbar_window_cp04_ParamLimits

0x4356,	// (0x00013253) camera2_autofocus_pane_g2_ParamLimits

0x4356,	// (0x00013253) camera2_autofocus_pane_g2

0x4362,	// (0x0001325f) camera2_autofocus_pane_g3_ParamLimits

0x4362,	// (0x0001325f) camera2_autofocus_pane_g3

0x436e,	// (0x0001326b) camera2_autofocus_pane_g4_ParamLimits

0x436e,	// (0x0001326b) camera2_autofocus_pane_g4

0x437a,	// (0x00013277) camera2_autofocus_pane_g5_ParamLimits

0x437a,	// (0x00013277) camera2_autofocus_pane_g5

0x0004,

0xf70d,	// (0x0001e60a) camera2_autofocus_pane_g_ParamLimits

0xf70d,	// (0x0001e60a) camera2_autofocus_pane_g

0xc662,	// (0x0001b55f) camera2_autofocus_pane_cp_g2

0xc66a,	// (0x0001b567) camera2_autofocus_pane_cp_g3

0xc672,	// (0x0001b56f) camera2_autofocus_pane_cp_g4

0xc67a,	// (0x0001b577) camera2_autofocus_pane_cp_g5

0x0004,

0xf773,	// (0x0001e670) camera2_autofocus_pane_cp_g

0x4c4c,	// (0x00013b49) popup_dialer_spcha_window

0x9482,	// (0x0001837f) bg_popup_sub_pane_cp07

0xc7e9,	// (0x0001b6e6) list_spcha_pane

0xc7f1,	// (0x0001b6ee) list_single_spcha_pane_ParamLimits

0xc7f1,	// (0x0001b6ee) list_single_spcha_pane

0x9482,	// (0x0001837f) list_highlight_pane_cp06

0xc802,	// (0x0001b6ff) list_single_spcha_pane_t1

0xb8a7,	// (0x0001a7a4) popup_call2_audio_out_window_g4_ParamLimits

0xb8a7,	// (0x0001a7a4) popup_call2_audio_out_window_g4

0x9482,	// (0x0001837f) main_imed2_pane

0xbe92,	// (0x0001ad8f) popup_imed_adjust2_window

0x3737,	// (0x00012634) popup_imed_trans_window_ParamLimits

0x3737,	// (0x00012634) popup_imed_trans_window

0xc1c3,	// (0x0001b0c0) popup_blid_sat_info2_window_t1

0xc1d1,	// (0x0001b0ce) popup_blid_sat_info2_window_t2

0x000a,

0xf6a2,	// (0x0001e59f) popup_blid_sat_info2_window_t

0x4ff4,	// (0x00013ef1) aid_size_cell_colour_35

0x5014,	// (0x00013f11) aid_size_cell_colour_112

0x5034,	// (0x00013f31) aid_size_cell_effect

0xbe6a,	// (0x0001ad67) bg_tb_trans_pane_cp02

0xa35f,	// (0x0001925c) heading_imed_pane

0x5054,	// (0x00013f51) listscroll_imed_pane

0xc810,	// (0x0001b70d) heading_imed_pane_g1

0xc818,	// (0x0001b715) heading_imed_pane_t1

0xc826,	// (0x0001b723) grid_imed_colour_35_pane_ParamLimits

0xc826,	// (0x0001b723) grid_imed_colour_35_pane

0x5060,	// (0x00013f5d) grid_imed_effect_pane

0xc83d,	// (0x0001b73a) list_imed_aspect_pane

0x5076,	// (0x00013f73) scroll_pane_cp027_ParamLimits

0x5076,	// (0x00013f73) scroll_pane_cp027

0x5087,	// (0x00013f84) cell_imed_effect_pane_ParamLimits

0x5087,	// (0x00013f84) cell_imed_effect_pane

0xc845,	// (0x0001b742) cell_imed_colour_pane_ParamLimits

0xc845,	// (0x0001b742) cell_imed_colour_pane

0xc887,	// (0x0001b784) cell_imed_colour_pane_g1_ParamLimits

0xc887,	// (0x0001b784) cell_imed_colour_pane_g1

0xc898,	// (0x0001b795) hgihlgiht_grid_pane_cp016_ParamLimits

0xc898,	// (0x0001b795) hgihlgiht_grid_pane_cp016

0x50ae,	// (0x00013fab) cell_imed_effect_pane_g1

0x50b6,	// (0x00013fb3) grid_highlight_pane_cp017

0xc8a9,	// (0x0001b7a6) list_imed_single_pane_ParamLimits

0xc8a9,	// (0x0001b7a6) list_imed_single_pane

0x9482,	// (0x0001837f) list_highlight_pane_cp07

0xc8be,	// (0x0001b7bb) list_imed_aspect_pane_comp1_t1

0xbe6a,	// (0x0001ad67) bg_tb_trans_pane_cp05

0xc8e0,	// (0x0001b7dd) popup_imed_adjust2_window_g1

0xc907,	// (0x0001b804) popup_imed_adjust2_window_t1

0xc91f,	// (0x0001b81c) slider_imed_adjust_pane

0xc933,	// (0x0001b830) slider_imed_adjust_pane_g1

0xc943,	// (0x0001b840) slider_imed_adjust_pane_g2

0xc953,	// (0x0001b850) slider_imed_adjust_pane_g3

0xc964,	// (0x0001b861) slider_imed_adjust_pane_g4

0x0003,

0xf7e6,	// (0x0001e6e3) slider_imed_adjust_pane_g

0x50bf,	// (0x00013fbc) aid_size_cell_clipart2

0x50cb,	// (0x00013fc8) grid_imed_clipart_pane

0xc975,	// (0x0001b872) scroll_pane_cp031

0x50d5,	// (0x00013fd2) cell_imed_clipart_pane_ParamLimits

0x50d5,	// (0x00013fd2) cell_imed_clipart_pane

0x50f7,	// (0x00013ff4) cell_imed_clipart_pane_g1

0x9482,	// (0x0001837f) grid_highlight_pane_cp014

0x4db9,	// (0x00013cb6) main_clock2_pane_g1_ParamLimits

0x4db9,	// (0x00013cb6) main_clock2_pane_g1

0x4ef5,	// (0x00013df2) aid_call2_pane_cp10

0x4f07,	// (0x00013e04) aid_call_pane_cp10

0xa7d4,	// (0x000196d1) popup_clock_analogue_window_cp10_g1

0xa7d4,	// (0x000196d1) popup_clock_analogue_window_cp10_g2

0x4f19,	// (0x00013e16) popup_clock_analogue_window_cp10_g3

0x4f19,	// (0x00013e16) popup_clock_analogue_window_cp10_g4

0xa7d4,	// (0x000196d1) popup_clock_analogue_window_cp10_g5

0x0004,

0xf7d4,	// (0x0001e6d1) popup_clock_analogue_window_cp10_g

0x4f2b,	// (0x00013e28) popup_clock_analogue_window_cp10_t1

0x4f5c,	// (0x00013e59) clock_digital_number_pane_cp10_ParamLimits

0x4f5c,	// (0x00013e59) clock_digital_number_pane_cp10

0x4f74,	// (0x00013e71) clock_digital_number_pane_cp11_ParamLimits

0x4f74,	// (0x00013e71) clock_digital_number_pane_cp11

0x4f8c,	// (0x00013e89) clock_digital_number_pane_cp12_ParamLimits

0x4f8c,	// (0x00013e89) clock_digital_number_pane_cp12

0x4fa4,	// (0x00013ea1) clock_digital_number_pane_cp13_ParamLimits

0x4fa4,	// (0x00013ea1) clock_digital_number_pane_cp13

0x4fbc,	// (0x00013eb9) clock_digital_separator_pane_cp10_ParamLimits

0x4fbc,	// (0x00013eb9) clock_digital_separator_pane_cp10

0x4fd4,	// (0x00013ed1) popup_clock_digital_window_cp02_t1_ParamLimits

0x4fd4,	// (0x00013ed1) popup_clock_digital_window_cp02_t1

0x9b66,	// (0x00018a63) clock_digital_number_pane_cp10_g1

0x9b66,	// (0x00018a63) clock_digital_number_pane_cp10_g2

0x0001,

0xf7ef,	// (0x0001e6ec) clock_digital_number_pane_cp10_g

0x9b66,	// (0x00018a63) clock_digital_separator_pane_cp10_g1

0x9b66,	// (0x00018a63) clock_digital_separator_pane_g2_cp10

0xa95f,	// (0x0001985c) navi_pane_vded_g4

0xa968,	// (0x00019865) navi_pane_vded_g5

0xa971,	// (0x0001986e) navi_pane_vded_t1

0x9482,	// (0x0001837f) main_vded_pane

0x5100,	// (0x00013ffd) main_vded_pane_g1

0x510a,	// (0x00014007) main_vded_pane_g2

0x5114,	// (0x00014011) main_vded_pane_g3

0x0002,

0xf7f4,	// (0x0001e6f1) main_vded_pane_g

0x511e,	// (0x0001401b) main_vded_pane_t1

0x512c,	// (0x00014029) main_vded_pane_t2

0x0001,

0xf7fb,	// (0x0001e6f8) main_vded_pane_t

0x513a,	// (0x00014037) vded_slider_pane

0x5142,	// (0x0001403f) vded_video_pane

0xc97d,	// (0x0001b87a) vded_video_pane_g1

0x514a,	// (0x00014047) vded_video_pane_g2

0xc385,	// (0x0001b282) vded_video_pane_g3

0x0002,

0xf800,	// (0x0001e6fd) vded_video_pane_g

0xc987,	// (0x0001b884) vded_slider_pane_g1

0xc094,	// (0x0001af91) vded_slider_pane_g2

0xc990,	// (0x0001b88d) vded_slider_pane_g3

0xc999,	// (0x0001b896) vded_slider_pane_g4

0xc9a2,	// (0x0001b89f) vded_slider_pane_g5

0x0004,

0xf807,	// (0x0001e704) vded_slider_pane_g

0x4b2d,	// (0x00013a2a) mup3_rocker_pane_ParamLimits

0x4b2d,	// (0x00013a2a) mup3_rocker_pane

0x5153,	// (0x00014050) mup3_control_keys_pane_g1

0x515b,	// (0x00014058) mup3_control_keys_pane_g2

0x5163,	// (0x00014060) mup3_control_keys_pane_g3

0x516b,	// (0x00014068) mup3_control_keys_pane_g4

0x0003,

0xf812,	// (0x0001e70f) mup3_control_keys_pane_g

0x03b6,	// (0x0000f2b3) popup_toolbar2_fixed_window_cp01_ParamLimits

0x03b6,	// (0x0000f2b3) popup_toolbar2_fixed_window_cp01

0x4b61,	// (0x00013a5e) popup_toolbar2_fixed_window_cp02_ParamLimits

0x4b61,	// (0x00013a5e) popup_toolbar2_fixed_window_cp02

0xb1e6,	// (0x0001a0e3) popup_call2_audio_second_window_t4_ParamLimits

0xb1e6,	// (0x0001a0e3) popup_call2_audio_second_window_t4

0xb714,	// (0x0001a611) popup_call2_audio_first_window_t6_ParamLimits

0xb714,	// (0x0001a611) popup_call2_audio_first_window_t6

0xb9aa,	// (0x0001a8a7) popup_call2_audio_out_window_t6_ParamLimits

0xb9aa,	// (0x0001a8a7) popup_call2_audio_out_window_t6

0x9482,	// (0x0001837f) main_vitu_pane

0x517b,	// (0x00014078) aid_size_cell_itu_ParamLimits

0x517b,	// (0x00014078) aid_size_cell_itu

0x94f2,	// (0x000183ef) bg_popup_window_pane_cp08_ParamLimits

0x94f2,	// (0x000183ef) bg_popup_window_pane_cp08

0x5191,	// (0x0001408e) field_vitu_entry_pane_ParamLimits

0x5191,	// (0x0001408e) field_vitu_entry_pane

0x51a8,	// (0x000140a5) grid_vitu_function_pane_ParamLimits

0x51a8,	// (0x000140a5) grid_vitu_function_pane

0x51c3,	// (0x000140c0) grid_vitu_itu_pane_ParamLimits

0x51c3,	// (0x000140c0) grid_vitu_itu_pane

0x51e1,	// (0x000140de) cell_vitu_itu_pane_ParamLimits

0x51e1,	// (0x000140de) cell_vitu_itu_pane

0x5203,	// (0x00014100) cell_vitu_function_pane_ParamLimits

0x5203,	// (0x00014100) cell_vitu_function_pane

0x94f2,	// (0x000183ef) bg_popup_sub_pane_cp08_ParamLimits

0x94f2,	// (0x000183ef) bg_popup_sub_pane_cp08

0x521c,	// (0x00014119) field_vitu_entry_pane_t1_ParamLimits

0x521c,	// (0x00014119) field_vitu_entry_pane_t1

0xc9c3,	// (0x0001b8c0) field_vitu_entry_pane_t2_ParamLimits

0xc9c3,	// (0x0001b8c0) field_vitu_entry_pane_t2

0x0001,

0xf820,	// (0x0001e71d) field_vitu_entry_pane_t_ParamLimits

0xf820,	// (0x0001e71d) field_vitu_entry_pane_t

0xc9e0,	// (0x0001b8dd) bg_button_pane_cp05_ParamLimits

0xc9e0,	// (0x0001b8dd) bg_button_pane_cp05

0x523a,	// (0x00014137) cell_vitu_itu_pane_g1

0x5252,	// (0x0001414f) cell_vitu_itu_pane_t1_ParamLimits

0x5252,	// (0x0001414f) cell_vitu_itu_pane_t1

0x5264,	// (0x00014161) cell_vitu_itu_pane_t2_ParamLimits

0x5264,	// (0x00014161) cell_vitu_itu_pane_t2

0x0002,

0xf825,	// (0x0001e722) cell_vitu_itu_pane_t_ParamLimits

0xf825,	// (0x0001e722) cell_vitu_itu_pane_t

0xc9ee,	// (0x0001b8eb) bg_button_pane_cp07

0x5299,	// (0x00014196) cell_vitu_function_pane_g1

0x9bf5,	// (0x00018af2) main_calc_pane_g1

0x01dd,	// (0x0000f0da) aid_visual_content_pane

0x9482,	// (0x0001837f) main_vradio_pane

0x52a2,	// (0x0001419f) main_vradio_pane_g1_ParamLimits

0x52a2,	// (0x0001419f) main_vradio_pane_g1

0xc9f8,	// (0x0001b8f5) main_vradio_pane_g2_ParamLimits

0xc9f8,	// (0x0001b8f5) main_vradio_pane_g2

0x0001,

0xf82c,	// (0x0001e729) main_vradio_pane_g_ParamLimits

0xf82c,	// (0x0001e729) main_vradio_pane_g

0x52bb,	// (0x000141b8) main_vradio_pane_t1_ParamLimits

0x52bb,	// (0x000141b8) main_vradio_pane_t1

0x52d0,	// (0x000141cd) main_vradio_pane_t2_ParamLimits

0x52d0,	// (0x000141cd) main_vradio_pane_t2

0xca05,	// (0x0001b902) main_vradio_pane_t3_ParamLimits

0xca05,	// (0x0001b902) main_vradio_pane_t3

0x0002,

0xf831,	// (0x0001e72e) main_vradio_pane_t_ParamLimits

0xf831,	// (0x0001e72e) main_vradio_pane_t

0x52e5,	// (0x000141e2) vradio_rocker_control_pane_ParamLimits

0x52e5,	// (0x000141e2) vradio_rocker_control_pane

0x52f7,	// (0x000141f4) vradio_station_info_pane_ParamLimits

0x52f7,	// (0x000141f4) vradio_station_info_pane

0xca19,	// (0x0001b916) vradio_frequency_info_pane_ParamLimits

0xca19,	// (0x0001b916) vradio_frequency_info_pane

0xc385,	// (0x0001b282) vradio_station_info_pane_g1

0xca28,	// (0x0001b925) vradio_station_info_pane_t1_ParamLimits

0xca28,	// (0x0001b925) vradio_station_info_pane_t1

0xca4a,	// (0x0001b947) vradio_station_info_pane_t2_ParamLimits

0xca4a,	// (0x0001b947) vradio_station_info_pane_t2

0x0001,

0xf838,	// (0x0001e735) vradio_station_info_pane_t_ParamLimits

0xf838,	// (0x0001e735) vradio_station_info_pane_t

0xca5c,	// (0x0001b959) vradio_tuning_pane

0xca64,	// (0x0001b961) vradio_rocker_control_pane_g1

0xca6c,	// (0x0001b969) vradio_rocker_control_pane_g2

0xca74,	// (0x0001b971) vradio_rocker_control_pane_g3

0xca7c,	// (0x0001b979) vradio_rocker_control_pane_g4

0xca84,	// (0x0001b981) vradio_rocker_control_pane_g5

0x0004,

0xf83d,	// (0x0001e73a) vradio_rocker_control_pane_g

0x5309,	// (0x00014206) vradio_frequency_info_pane_g1

0xca8c,	// (0x0001b989) vradio_frequency_info_pane_t1_ParamLimits

0xca8c,	// (0x0001b989) vradio_frequency_info_pane_t1

0x5313,	// (0x00014210) vradio_tuning_pane_g1

0x531e,	// (0x0001421b) vradio_tuning_pane_t1

0x94b0,	// (0x000183ad) area_side_right_pane_ParamLimits

0x94b0,	// (0x000183ad) area_side_right_pane

0xbe25,	// (0x0001ad22) status_small_pane_g1

0xbe2d,	// (0x0001ad2a) status_small_pane_g2

0xbe36,	// (0x0001ad33) status_small_pane_g3

0xbe3f,	// (0x0001ad3c) status_small_pane_g4

0x0003,

0xf5f8,	// (0x0001e4f5) status_small_pane_g

0xbe48,	// (0x0001ad45) status_small_pane_t1

0x9482,	// (0x0001837f) main_video3_pane

0xcaa0,	// (0x0001b99d) cams_zoom_vslider_pane

0xcaa8,	// (0x0001b9a5) image3_wide_pane_ParamLimits

0xcaa8,	// (0x0001b9a5) image3_wide_pane

0xcac2,	// (0x0001b9bf) image3_wide_small_pane

0xcace,	// (0x0001b9cb) main_video3_pane_g1_ParamLimits

0xcace,	// (0x0001b9cb) main_video3_pane_g1

0xcaea,	// (0x0001b9e7) main_video3_pane_g2_ParamLimits

0xcaea,	// (0x0001b9e7) main_video3_pane_g2

0x0001,

0xf848,	// (0x0001e745) main_video3_pane_g_ParamLimits

0xf848,	// (0x0001e745) main_video3_pane_g

0xcb06,	// (0x0001ba03) main_video3_pane_t1_ParamLimits

0xcb06,	// (0x0001ba03) main_video3_pane_t1

0xcb31,	// (0x0001ba2e) main_video3_pane_t2_ParamLimits

0xcb31,	// (0x0001ba2e) main_video3_pane_t2

0xcb5c,	// (0x0001ba59) main_video3_pane_t3_ParamLimits

0xcb5c,	// (0x0001ba59) main_video3_pane_t3

0x0002,

0xf84d,	// (0x0001e74a) main_video3_pane_t_ParamLimits

0xf84d,	// (0x0001e74a) main_video3_pane_t

0xcb89,	// (0x0001ba86) cams_zoom_vslider_pane_g1

0xcb92,	// (0x0001ba8f) cams_zoom_vslider_pane_g2

0x0001,

0xf854,	// (0x0001e751) cams_zoom_vslider_pane_g

0xcb9a,	// (0x0001ba97) small_slider_vertical_pane

0xc385,	// (0x0001b282) small_slider_vertical_pane_g1

0xc385,	// (0x0001b282) small_slider_vertical_pane_g2

0xcba2,	// (0x0001ba9f) small_slider_vertical_pane_g3

0x0002,

0xf859,	// (0x0001e756) small_slider_vertical_pane_g

0x9482,	// (0x0001837f) main_hwr_training_pane

0xcbab,	// (0x0001baa8) hwr_training_instruct_pane_ParamLimits

0xcbab,	// (0x0001baa8) hwr_training_instruct_pane

0x532d,	// (0x0001422a) hwr_training_navi_pane_ParamLimits

0x532d,	// (0x0001422a) hwr_training_navi_pane

0x534c,	// (0x00014249) hwr_training_write_pane_ParamLimits

0x534c,	// (0x00014249) hwr_training_write_pane

0x9482,	// (0x0001837f) bg_frame_shadow_pane

0xcbe2,	// (0x0001badf) hwr_training_write_pane_g1

0xcbea,	// (0x0001bae7) hwr_training_write_pane_g2

0xcbf2,	// (0x0001baef) hwr_training_write_pane_g3

0xcbfa,	// (0x0001baf7) hwr_training_write_pane_g4

0xcc02,	// (0x0001baff) hwr_training_write_pane_g5

0xcc0a,	// (0x0001bb07) hwr_training_write_pane_g6

0xcc12,	// (0x0001bb0f) hwr_training_write_pane_g7

0x0006,

0xf860,	// (0x0001e75d) hwr_training_write_pane_g

0xcc1a,	// (0x0001bb17) hwr_training_navi_pane_g1_ParamLimits

0xcc1a,	// (0x0001bb17) hwr_training_navi_pane_g1

0xcc2c,	// (0x0001bb29) hwr_training_navi_pane_g2_ParamLimits

0xcc2c,	// (0x0001bb29) hwr_training_navi_pane_g2

0xcc3e,	// (0x0001bb3b) hwr_training_navi_pane_g3_ParamLimits

0xcc3e,	// (0x0001bb3b) hwr_training_navi_pane_g3

0xcc4e,	// (0x0001bb4b) hwr_training_navi_pane_g4_ParamLimits

0xcc4e,	// (0x0001bb4b) hwr_training_navi_pane_g4

0x0004,

0xf86f,	// (0x0001e76c) hwr_training_navi_pane_g_ParamLimits

0xf86f,	// (0x0001e76c) hwr_training_navi_pane_g

0xcc5b,	// (0x0001bb58) hwr_training_navi_pane_t1

0x5394,	// (0x00014291) list_single_hwr_training_instruct_pane_ParamLimits

0x5394,	// (0x00014291) list_single_hwr_training_instruct_pane

0xcc69,	// (0x0001bb66) list_single_hwr_training_instruct_pane_t1

0xc2c5,	// (0x0001b1c2) bg_frame_shadow_pane_g1

0xcc78,	// (0x0001bb75) bg_frame_shadow_pane_g2

0xcc80,	// (0x0001bb7d) bg_frame_shadow_pane_g3

0xcc88,	// (0x0001bb85) bg_frame_shadow_pane_g4

0xcc90,	// (0x0001bb8d) bg_frame_shadow_pane_g5

0xcc98,	// (0x0001bb95) bg_frame_shadow_pane_g6

0xcca0,	// (0x0001bb9d) bg_frame_shadow_pane_g7

0x9d32,	// (0x00018c2f) bg_frame_shadow_pane_g8

0x0007,

0xf87a,	// (0x0001e777) bg_frame_shadow_pane_g

0x9482,	// (0x0001837f) main_video_tele_dialer_pane

0x53a9,	// (0x000142a6) aid_size_cell_video_keypad_ParamLimits

0x53a9,	// (0x000142a6) aid_size_cell_video_keypad

0x53c3,	// (0x000142c0) grid_video_dialer_keypad_pane_ParamLimits

0x53c3,	// (0x000142c0) grid_video_dialer_keypad_pane

0x540f,	// (0x0001430c) video_down_pane_cp_ParamLimits

0x540f,	// (0x0001430c) video_down_pane_cp

0x5441,	// (0x0001433e) cell_video_dialer_keypad_pane_ParamLimits

0x5441,	// (0x0001433e) cell_video_dialer_keypad_pane

0xcca8,	// (0x0001bba5) bg_button_pane_cp08_ParamLimits

0xcca8,	// (0x0001bba5) bg_button_pane_cp08

0x5463,	// (0x00014360) cell_video_dialer_keypad_pane_g1_ParamLimits

0x5463,	// (0x00014360) cell_video_dialer_keypad_pane_g1

0x4b17,	// (0x00013a14) mup3_rocker2_pane_ParamLimits

0x4b17,	// (0x00013a14) mup3_rocker2_pane

0xc385,	// (0x0001b282) mup3_rocker2_pane_g1

0x3618,	// (0x00012515) main_dialer2_pane

0x9482,	// (0x0001837f) main_mp4_pane

0xccbc,	// (0x0001bbb9) main_mp4_pane_g1_ParamLimits

0xccbc,	// (0x0001bbb9) main_mp4_pane_g1

0xccbc,	// (0x0001bbb9) main_mp4_pane_g2_ParamLimits

0xccbc,	// (0x0001bbb9) main_mp4_pane_g2

0x549a,	// (0x00014397) main_mp4_pane_g3_ParamLimits

0x549a,	// (0x00014397) main_mp4_pane_g3

0xccca,	// (0x0001bbc7) main_mp4_pane_g4_ParamLimits

0xccca,	// (0x0001bbc7) main_mp4_pane_g4

0xccf2,	// (0x0001bbef) main_mp4_pane_g5_ParamLimits

0xccf2,	// (0x0001bbef) main_mp4_pane_g5

0x0005,

0xf89a,	// (0x0001e797) main_mp4_pane_g_ParamLimits

0xf89a,	// (0x0001e797) main_mp4_pane_g

0xcd42,	// (0x0001bc3f) main_mp4_pane_t1_ParamLimits

0xcd42,	// (0x0001bc3f) main_mp4_pane_t1

0xcd9e,	// (0x0001bc9b) main_mp4_pane_t2_ParamLimits

0xcd9e,	// (0x0001bc9b) main_mp4_pane_t2

0xcdf0,	// (0x0001bced) main_mp4_pane_t3_ParamLimits

0xcdf0,	// (0x0001bced) main_mp4_pane_t3

0xce10,	// (0x0001bd0d) main_mp4_pane_t4_ParamLimits

0xce10,	// (0x0001bd0d) main_mp4_pane_t4

0x0003,

0xf8a7,	// (0x0001e7a4) main_mp4_pane_t_ParamLimits

0xf8a7,	// (0x0001e7a4) main_mp4_pane_t

0xce54,	// (0x0001bd51) mp4_progress_pane_ParamLimits

0xce54,	// (0x0001bd51) mp4_progress_pane

0xce9e,	// (0x0001bd9b) mp4_rocker_pane_ParamLimits

0xce9e,	// (0x0001bd9b) mp4_rocker_pane

0xcec6,	// (0x0001bdc3) mp4_progress_pane_t1

0xcedf,	// (0x0001bddc) mp4_progress_pane_t2

0x0001,

0xf8b0,	// (0x0001e7ad) mp4_progress_pane_t

0xcef8,	// (0x0001bdf5) mup_progress_pane_cp04

0xc385,	// (0x0001b282) mp4_rocker_pane_g1

0x54d6,	// (0x000143d3) aid_cell_size_keypad2_ParamLimits

0x54d6,	// (0x000143d3) aid_cell_size_keypad2

0x54ec,	// (0x000143e9) dialer2_ne_pane_ParamLimits

0x54ec,	// (0x000143e9) dialer2_ne_pane

0x5506,	// (0x00014403) grid_dialer2_keypad_pane_ParamLimits

0x5506,	// (0x00014403) grid_dialer2_keypad_pane

0xc16a,	// (0x0001b067) bg_popup_call_pane_cp07_ParamLimits

0xc16a,	// (0x0001b067) bg_popup_call_pane_cp07

0x5522,	// (0x0001441f) dialer2_ne_pane_t1_ParamLimits

0x5522,	// (0x0001441f) dialer2_ne_pane_t1

0x555d,	// (0x0001445a) cell_dialer2_keypad_pane_ParamLimits

0x555d,	// (0x0001445a) cell_dialer2_keypad_pane

0xcf16,	// (0x0001be13) bg_button_pane_pane_cp04_ParamLimits

0xcf16,	// (0x0001be13) bg_button_pane_pane_cp04

0x557f,	// (0x0001447c) cell_dialer2_keypad_pane_g1_ParamLimits

0x557f,	// (0x0001447c) cell_dialer2_keypad_pane_g1

0x13a8,	// (0x000102a5) aid_placing_vt_set_content_ParamLimits

0x13a8,	// (0x000102a5) aid_placing_vt_set_content

0x13d0,	// (0x000102cd) aid_placing_vt_set_title_ParamLimits

0x13d0,	// (0x000102cd) aid_placing_vt_set_title

0x9482,	// (0x0001837f) main_image3_pane

0x5645,	// (0x00014542) area_side_right_pane_cp01_ParamLimits

0x5645,	// (0x00014542) area_side_right_pane_cp01

0xccbc,	// (0x0001bbb9) main_image3_pane_g1_ParamLimits

0xccbc,	// (0x0001bbb9) main_image3_pane_g1

0x565c,	// (0x00014559) main_image3_pane_g2_ParamLimits

0x565c,	// (0x00014559) main_image3_pane_g2

0x5684,	// (0x00014581) main_image3_pane_g3_ParamLimits

0x5684,	// (0x00014581) main_image3_pane_g3

0x56ae,	// (0x000145ab) main_image3_pane_g4_ParamLimits

0x56ae,	// (0x000145ab) main_image3_pane_g4

0x0003,

0xf8bf,	// (0x0001e7bc) main_image3_pane_g_ParamLimits

0xf8bf,	// (0x0001e7bc) main_image3_pane_g

0x56d8,	// (0x000145d5) main_image3_pane_t1_ParamLimits

0x56d8,	// (0x000145d5) main_image3_pane_t1

0x5730,	// (0x0001462d) main_image3_pane_t2_ParamLimits

0x5730,	// (0x0001462d) main_image3_pane_t2

0x5782,	// (0x0001467f) main_image3_pane_t3_ParamLimits

0x5782,	// (0x0001467f) main_image3_pane_t3

0x0003,

0xf8c8,	// (0x0001e7c5) main_image3_pane_t_ParamLimits

0xf8c8,	// (0x0001e7c5) main_image3_pane_t

0x94f2,	// (0x000183ef) grid_sctrl_middle_pane_cp01_ParamLimits

0x94f2,	// (0x000183ef) grid_sctrl_middle_pane_cp01

0x580a,	// (0x00014707) cell_sctrl_middle_pane_cp01_ParamLimits

0x580a,	// (0x00014707) cell_sctrl_middle_pane_cp01

0x5827,	// (0x00014724) cell_sctrl_middle_pane_cp01_g1_ParamLimits

0x5827,	// (0x00014724) cell_sctrl_middle_pane_cp01_g1

0x9482,	// (0x0001837f) main_call4_pane

0x583d,	// (0x0001473a) aid_size_button_call4_ParamLimits

0x583d,	// (0x0001473a) aid_size_button_call4

0x586e,	// (0x0001476b) call4_windows_pane_ParamLimits

0x586e,	// (0x0001476b) call4_windows_pane

0x588e,	// (0x0001478b) grid_call4_button_pane_ParamLimits

0x588e,	// (0x0001478b) grid_call4_button_pane

0xcf54,	// (0x0001be51) call4_windows_conf_pane

0xcf6b,	// (0x0001be68) popup_call4_audio_first_window_ParamLimits

0xcf6b,	// (0x0001be68) popup_call4_audio_first_window

0xcfb7,	// (0x0001beb4) popup_call4_audio_second_window_ParamLimits

0xcfb7,	// (0x0001beb4) popup_call4_audio_second_window

0xcfcb,	// (0x0001bec8) popup_call4_audio_wait_window_ParamLimits

0xcfcb,	// (0x0001bec8) popup_call4_audio_wait_window

0x58bb,	// (0x000147b8) cell_call4_button_pane_ParamLimits

0x58bb,	// (0x000147b8) cell_call4_button_pane

0x58e4,	// (0x000147e1) bg_button_pane_cp09_ParamLimits

0x58e4,	// (0x000147e1) bg_button_pane_cp09

0x58f0,	// (0x000147ed) cell_call4_button_pane_g1_ParamLimits

0x58f0,	// (0x000147ed) cell_call4_button_pane_g1

0x5916,	// (0x00014813) cell_call4_button_pane_t1_ParamLimits

0x5916,	// (0x00014813) cell_call4_button_pane_t1

0xd013,	// (0x0001bf10) popup_call4_audio_conf_window_ParamLimits

0xd013,	// (0x0001bf10) popup_call4_audio_conf_window

0x4b77,	// (0x00013a74) mup3_progress_pane_t1_ParamLimits

0x4b96,	// (0x00013a93) mup3_progress_pane_t2_ParamLimits

0xc698,	// (0x0001b595) mup3_progress_pane_t3_ParamLimits

0xf79c,	// (0x0001e699) mup3_progress_pane_t_ParamLimits

0xc6b5,	// (0x0001b5b2) mup_progress_pane_cp03_ParamLimits

0x5173,	// (0x00014070) mup3_control_keys_pane_g4_copy1

0xce82,	// (0x0001bd7f) mp4_rocker2_pane_ParamLimits

0xce82,	// (0x0001bd7f) mp4_rocker2_pane

0xd027,	// (0x0001bf24) mp4_rocker2_pane_g1

0xd02f,	// (0x0001bf2c) mp4_rocker2_pane_g2

0xd037,	// (0x0001bf34) mp4_rocker2_pane_g3

0xd03f,	// (0x0001bf3c) mp4_rocker2_pane_g4

0xd047,	// (0x0001bf44) mp4_rocker2_pane_g5

0x0004,

0xf8d1,	// (0x0001e7ce) mp4_rocker2_pane_g

0x9482,	// (0x0001837f) main_camera4_pane

0x9482,	// (0x0001837f) main_video4_pane

0x53dd,	// (0x000142da) main_video_tele_dialer_pane_t1_ParamLimits

0x53dd,	// (0x000142da) main_video_tele_dialer_pane_t1

0x53f6,	// (0x000142f3) main_video_tele_dialer_pane_t2_ParamLimits

0x53f6,	// (0x000142f3) main_video_tele_dialer_pane_t2

0x0001,

0xf88b,	// (0x0001e788) main_video_tele_dialer_pane_t_ParamLimits

0xf88b,	// (0x0001e788) main_video_tele_dialer_pane_t

0x5954,	// (0x00014851) cam4_autofocus_pane_ParamLimits

0x5954,	// (0x00014851) cam4_autofocus_pane

0x596a,	// (0x00014867) cam4_image_uncrop_pane_ParamLimits

0x596a,	// (0x00014867) cam4_image_uncrop_pane

0x5984,	// (0x00014881) cam4_indicators_pane_ParamLimits

0x5984,	// (0x00014881) cam4_indicators_pane

0x59af,	// (0x000148ac) main_camera4_pane_g1_ParamLimits

0x59af,	// (0x000148ac) main_camera4_pane_g1

0x59c1,	// (0x000148be) main_camera4_pane_g2_ParamLimits

0x59c1,	// (0x000148be) main_camera4_pane_g2

0x59d4,	// (0x000148d1) main_camera4_pane_g3_ParamLimits

0x59d4,	// (0x000148d1) main_camera4_pane_g3

0x59e7,	// (0x000148e4) main_camera4_pane_g4_ParamLimits

0x59e7,	// (0x000148e4) main_camera4_pane_g4

0x59fa,	// (0x000148f7) main_camera4_pane_g5_ParamLimits

0x59fa,	// (0x000148f7) main_camera4_pane_g5

0x0005,

0xf8dc,	// (0x0001e7d9) main_camera4_pane_g_ParamLimits

0xf8dc,	// (0x0001e7d9) main_camera4_pane_g

0x5a1e,	// (0x0001491b) main_camera4_pane_t1_ParamLimits

0x5a1e,	// (0x0001491b) main_camera4_pane_t1

0xc5f1,	// (0x0001b4ee) bg_tb_trans_pane_cp06

0xd073,	// (0x0001bf70) cam4_indicators_pane_g1

0xd084,	// (0x0001bf81) cam4_indicators_pane_g2

0x0002,

0xf8f7,	// (0x0001e7f4) cam4_indicators_pane_g

0xd0a2,	// (0x0001bf9f) cam4_indicators_pane_t1

0x5a82,	// (0x0001497f) main_video4_pane_g1_ParamLimits

0x5a82,	// (0x0001497f) main_video4_pane_g1

0x5a91,	// (0x0001498e) main_video4_pane_g2_ParamLimits

0x5a91,	// (0x0001498e) main_video4_pane_g2

0x5aa0,	// (0x0001499d) main_video4_pane_g3_ParamLimits

0x5aa0,	// (0x0001499d) main_video4_pane_g3

0x5aaf,	// (0x000149ac) main_video4_pane_g4_ParamLimits

0x5aaf,	// (0x000149ac) main_video4_pane_g4

0x0004,

0xf8fe,	// (0x0001e7fb) main_video4_pane_g_ParamLimits

0xf8fe,	// (0x0001e7fb) main_video4_pane_g

0x5acd,	// (0x000149ca) vid4_indicators_pane_ParamLimits

0x5acd,	// (0x000149ca) vid4_indicators_pane

0x5afb,	// (0x000149f8) video4_image_uncrop_cif_pane_ParamLimits

0x5afb,	// (0x000149f8) video4_image_uncrop_cif_pane

0x5b15,	// (0x00014a12) video4_image_uncrop_nhd_pane_ParamLimits

0x5b15,	// (0x00014a12) video4_image_uncrop_nhd_pane

0x596a,	// (0x00014867) video4_image_uncrop_vga_pane_ParamLimits

0x596a,	// (0x00014867) video4_image_uncrop_vga_pane

0x94f2,	// (0x000183ef) bg_tb_trans_pane_cp07

0xd0ce,	// (0x0001bfcb) vid4_indicators_pane_g1

0xd0e2,	// (0x0001bfdf) vid4_indicators_pane_g2

0xd0f6,	// (0x0001bff3) vid4_indicators_pane_g3

0x0004,

0xf909,	// (0x0001e806) vid4_indicators_pane_g

0xd125,	// (0x0001c022) vid4_indicators_pane_t1

0x5b29,	// (0x00014a26) cam4_autofocus_pane_g1

0x5b31,	// (0x00014a2e) cam4_autofocus_pane_g2

0x5b39,	// (0x00014a36) cam4_autofocus_pane_g3

0x0002,

0xf914,	// (0x0001e811) cam4_autofocus_pane_g

0x5b41,	// (0x00014a3e) cam4_autofocus_pane_g3_copy1

0x5425,	// (0x00014322) video_down_pane_cp_t1

0x5433,	// (0x00014330) video_down_pane_cp_t2

0x0001,

0xf890,	// (0x0001e78d) video_down_pane_cp_t

0x94f2,	// (0x000183ef) popup_vitu2_window_ParamLimits

0x94f2,	// (0x000183ef) popup_vitu2_window

0x5b49,	// (0x00014a46) aid_size_cell2_itu2_ParamLimits

0x5b49,	// (0x00014a46) aid_size_cell2_itu2

0x5b6f,	// (0x00014a6c) aid_size_cell_itu2_ParamLimits

0x5b6f,	// (0x00014a6c) aid_size_cell_itu2

0x5bcb,	// (0x00014ac8) bg_popup_window_pane_cp09_ParamLimits

0x5bcb,	// (0x00014ac8) bg_popup_window_pane_cp09

0x5bd9,	// (0x00014ad6) field_vitu2_entry_pane_ParamLimits

0x5bd9,	// (0x00014ad6) field_vitu2_entry_pane

0x5bff,	// (0x00014afc) grid_vitu2_function_pane_ParamLimits

0x5bff,	// (0x00014afc) grid_vitu2_function_pane

0x5c50,	// (0x00014b4d) grid_vitu2_itu_pane_ParamLimits

0x5c50,	// (0x00014b4d) grid_vitu2_itu_pane

0x5ce8,	// (0x00014be5) cell_vitu2_itu_pane_ParamLimits

0x5ce8,	// (0x00014be5) cell_vitu2_itu_pane

0x5d14,	// (0x00014c11) cell_vitu2_function_pane_ParamLimits

0x5d14,	// (0x00014c11) cell_vitu2_function_pane

0xd13c,	// (0x0001c039) bg_popup_call_pane_cp08_ParamLimits

0xd13c,	// (0x0001c039) bg_popup_call_pane_cp08

0xd153,	// (0x0001c050) field_vitu2_entry_pane_g1

0xd15f,	// (0x0001c05c) field_vitu2_entry_pane_g2

0x0002,

0xf91b,	// (0x0001e818) field_vitu2_entry_pane_g

0x5d53,	// (0x00014c50) field_vitu2_entry_pane_t1_ParamLimits

0x5d53,	// (0x00014c50) field_vitu2_entry_pane_t1

0xd179,	// (0x0001c076) field_vitu2_entry_pane_t2_ParamLimits

0xd179,	// (0x0001c076) field_vitu2_entry_pane_t2

0x0001,

0xf922,	// (0x0001e81f) field_vitu2_entry_pane_t_ParamLimits

0xf922,	// (0x0001e81f) field_vitu2_entry_pane_t

0x5d82,	// (0x00014c7f) bg_button_pane_cp010_ParamLimits

0x5d82,	// (0x00014c7f) bg_button_pane_cp010

0xd19e,	// (0x0001c09b) cell_vitu2_itu_pane_g1

0x5d9e,	// (0x00014c9b) cell_vitu2_itu_pane_t1_ParamLimits

0x5d9e,	// (0x00014c9b) cell_vitu2_itu_pane_t1

0x5dfc,	// (0x00014cf9) cell_vitu2_itu_pane_t2_ParamLimits

0x5dfc,	// (0x00014cf9) cell_vitu2_itu_pane_t2

0x0002,

0xf92c,	// (0x0001e829) cell_vitu2_itu_pane_t_ParamLimits

0xf92c,	// (0x0001e829) cell_vitu2_itu_pane_t

0x94f2,	// (0x000183ef) bg_button_pane_cp011

0x5ee8,	// (0x00014de5) cell_vitu2_function_pane_g1

0x9482,	// (0x0001837f) main_myfav_hc_pane

0x57d2,	// (0x000146cf) popup_image3_note_pane_ParamLimits

0x57d2,	// (0x000146cf) popup_image3_note_pane

0x57ee,	// (0x000146eb) popup_image3_tool_bar_pane_ParamLimits

0x57ee,	// (0x000146eb) popup_image3_tool_bar_pane

0x5e8a,	// (0x00014d87) cell_vitu2_itu_pane_t3_ParamLimits

0x5e8a,	// (0x00014d87) cell_vitu2_itu_pane_t3

0x9482,	// (0x0001837f) bg_popup_trans_pane

0xd1b0,	// (0x0001c0ad) grid_image3_tool_bar_pane

0xd1ba,	// (0x0001c0b7) bg_popup_trans_pane_g1

0xa0e9,	// (0x00018fe6) bg_popup_trans_pane_g2

0xd1c2,	// (0x0001c0bf) bg_popup_trans_pane_g3

0xd1ca,	// (0x0001c0c7) bg_popup_trans_pane_g4

0xd1d2,	// (0x0001c0cf) bg_popup_trans_pane_g5

0xd1da,	// (0x0001c0d7) bg_popup_trans_pane_g6

0xd1e2,	// (0x0001c0df) bg_popup_trans_pane_g7

0xd1ea,	// (0x0001c0e7) bg_popup_trans_pane_g8

0xa0c9,	// (0x00018fc6) bg_popup_trans_pane_g9

0x0008,

0xf933,	// (0x0001e830) bg_popup_trans_pane_g

0xd1f2,	// (0x0001c0ef) cell_image3_tool_bar_pane_ParamLimits

0xd1f2,	// (0x0001c0ef) cell_image3_tool_bar_pane

0xc385,	// (0x0001b282) cell_image3_tool_bar_pane_g1

0x9482,	// (0x0001837f) bg_popup_trans_pane_cp1

0xd206,	// (0x0001c103) popup_image3_note_pane_t1

0xd214,	// (0x0001c111) popup_image3_note_pane_t2

0xd222,	// (0x0001c11f) popup_image3_note_pane_t3

0x0002,

0xf946,	// (0x0001e843) popup_image3_note_pane_t

0xd230,	// (0x0001c12d) popup_image3_note_pane_t3_copy1

0x5efc,	// (0x00014df9) bg_myfav_hc_instruction_pane_ParamLimits

0x5efc,	// (0x00014df9) bg_myfav_hc_instruction_pane

0x5f10,	// (0x00014e0d) cell_myfav_contact_pane_ParamLimits

0x5f10,	// (0x00014e0d) cell_myfav_contact_pane

0x5f2e,	// (0x00014e2b) cell_myfav_contact_pane_cp1_ParamLimits

0x5f2e,	// (0x00014e2b) cell_myfav_contact_pane_cp1

0x5f46,	// (0x00014e43) cell_myfav_contact_pane_cp2_ParamLimits

0x5f46,	// (0x00014e43) cell_myfav_contact_pane_cp2

0x5f5e,	// (0x00014e5b) cell_myfav_contact_pane_cp3_ParamLimits

0x5f5e,	// (0x00014e5b) cell_myfav_contact_pane_cp3

0x5f75,	// (0x00014e72) cell_myfav_contact_pane_cp4_ParamLimits

0x5f75,	// (0x00014e72) cell_myfav_contact_pane_cp4

0x5f8d,	// (0x00014e8a) cell_myfav_contact_pane_cp5_ParamLimits

0x5f8d,	// (0x00014e8a) cell_myfav_contact_pane_cp5

0x5fa1,	// (0x00014e9e) cell_myfav_contact_pane_cp6_ParamLimits

0x5fa1,	// (0x00014e9e) cell_myfav_contact_pane_cp6

0x5fb7,	// (0x00014eb4) cell_myfav_contact_pane_cp7_ParamLimits

0x5fb7,	// (0x00014eb4) cell_myfav_contact_pane_cp7

0xd23e,	// (0x0001c13b) listscroll_gen_pane_cp05

0x5fd1,	// (0x00014ece) main_myfav_hc_pane_g1_ParamLimits

0x5fd1,	// (0x00014ece) main_myfav_hc_pane_g1

0x5feb,	// (0x00014ee8) main_myfav_hc_pane_g2_ParamLimits

0x5feb,	// (0x00014ee8) main_myfav_hc_pane_g2

0x0002,

0xf94d,	// (0x0001e84a) main_myfav_hc_pane_g_ParamLimits

0xf94d,	// (0x0001e84a) main_myfav_hc_pane_g

0x601d,	// (0x00014f1a) main_myfav_hc_pane_t1_ParamLimits

0x601d,	// (0x00014f1a) main_myfav_hc_pane_t1

0xd247,	// (0x0001c144) main_myfav_hc_pane_t2_ParamLimits

0xd247,	// (0x0001c144) main_myfav_hc_pane_t2

0xd259,	// (0x0001c156) main_myfav_hc_pane_t3_ParamLimits

0xd259,	// (0x0001c156) main_myfav_hc_pane_t3

0x6034,	// (0x00014f31) main_myfav_hc_pane_t4_ParamLimits

0x6034,	// (0x00014f31) main_myfav_hc_pane_t4

0x0004,

0xf954,	// (0x0001e851) main_myfav_hc_pane_t_ParamLimits

0xf954,	// (0x0001e851) main_myfav_hc_pane_t

0xc385,	// (0x0001b282) bg_myfav_hc_instruction_pane_g1

0xd2a1,	// (0x0001c19e) cell_myfav_contact_pane_g1_ParamLimits

0xd2a1,	// (0x0001c19e) cell_myfav_contact_pane_g1

0xd2a1,	// (0x0001c19e) cell_myfav_contact_pane_g2_ParamLimits

0xd2a1,	// (0x0001c19e) cell_myfav_contact_pane_g2

0xd2ad,	// (0x0001c1aa) cell_myfav_contact_pane_g3_ParamLimits

0xd2ad,	// (0x0001c1aa) cell_myfav_contact_pane_g3

0xc682,	// (0x0001b57f) cell_myfav_contact_pane_g4_ParamLimits

0xc682,	// (0x0001b57f) cell_myfav_contact_pane_g4

0xd2ba,	// (0x0001c1b7) cell_myfav_contact_pane_g5_ParamLimits

0xd2ba,	// (0x0001c1b7) cell_myfav_contact_pane_g5

0x0004,

0xf95f,	// (0x0001e85c) cell_myfav_contact_pane_g_ParamLimits

0xf95f,	// (0x0001e85c) cell_myfav_contact_pane_g

0x6005,	// (0x00014f02) main_myfav_hc_pane_g3_ParamLimits

0x6005,	// (0x00014f02) main_myfav_hc_pane_g3

0x0318,	// (0x0000f215) popup_adpt_find_window

0x605c,	// (0x00014f59) afind_page_pane_ParamLimits

0x605c,	// (0x00014f59) afind_page_pane

0x6071,	// (0x00014f6e) aid_size_cell_afind_ParamLimits

0x6071,	// (0x00014f6e) aid_size_cell_afind

0x608f,	// (0x00014f8c) bg_popup_sub_pane_cp09_ParamLimits

0x608f,	// (0x00014f8c) bg_popup_sub_pane_cp09

0x609c,	// (0x00014f99) find_pane_cp01_ParamLimits

0x609c,	// (0x00014f99) find_pane_cp01

0xd2c6,	// (0x0001c1c3) grid_afind_control_pane_ParamLimits

0xd2c6,	// (0x0001c1c3) grid_afind_control_pane

0x60a9,	// (0x00014fa6) grid_afind_pane_ParamLimits

0x60a9,	// (0x00014fa6) grid_afind_pane

0x60cb,	// (0x00014fc8) cell_afind_pane_ParamLimits

0x60cb,	// (0x00014fc8) cell_afind_pane

0xc385,	// (0x0001b282) afind_page_pane_g1

0x6132,	// (0x0001502f) afind_page_pane_g2

0x613b,	// (0x00015038) afind_page_pane_g3

0x0002,

0xf96a,	// (0x0001e867) afind_page_pane_g

0x6144,	// (0x00015041) afind_page_pane_t1

0xd2da,	// (0x0001c1d7) cell_afind_grid_control_pane_ParamLimits

0xd2da,	// (0x0001c1d7) cell_afind_grid_control_pane

0xcf16,	// (0x0001be13) bg_button_pane_cp69_ParamLimits

0xcf16,	// (0x0001be13) bg_button_pane_cp69

0x6164,	// (0x00015061) cell_afind_pane_g1_ParamLimits

0x6164,	// (0x00015061) cell_afind_pane_g1

0x6171,	// (0x0001506e) cell_afind_pane_t1_ParamLimits

0x6171,	// (0x0001506e) cell_afind_pane_t1

0x9ee2,	// (0x00018ddf) bg_button_pane_cp72

0xd2e9,	// (0x0001c1e6) cell_afind_grid_control_pane_g1

0x30d8,	// (0x00011fd5) aid_image_placing_area_ParamLimits

0x30d8,	// (0x00011fd5) aid_image_placing_area

0xc9ab,	// (0x0001b8a8) field_vitu_entry_pane_g1_ParamLimits

0xc9ab,	// (0x0001b8a8) field_vitu_entry_pane_g1

0xc9b7,	// (0x0001b8b4) field_vitu_entry_pane_g2_ParamLimits

0xc9b7,	// (0x0001b8b4) field_vitu_entry_pane_g2

0x0001,

0xf81b,	// (0x0001e718) field_vitu_entry_pane_g_ParamLimits

0xf81b,	// (0x0001e718) field_vitu_entry_pane_g

0x523a,	// (0x00014137) cell_vitu_itu_pane_g1_ParamLimits

0x527c,	// (0x00014179) cell_vitu_itu_pane_t3_ParamLimits

0x527c,	// (0x00014179) cell_vitu_itu_pane_t3

0xcec6,	// (0x0001bdc3) mp4_progress_pane_t1_ParamLimits

0xcedf,	// (0x0001bddc) mp4_progress_pane_t2_ParamLimits

0xf8b0,	// (0x0001e7ad) mp4_progress_pane_t_ParamLimits

0xcef8,	// (0x0001bdf5) mup_progress_pane_cp04_ParamLimits

0x6048,	// (0x00014f45) main_myfav_hc_pane_t5_ParamLimits

0x6048,	// (0x00014f45) main_myfav_hc_pane_t5

0x94a8,	// (0x000183a5) aid_zoom_text_primary

0x0318,	// (0x0000f215) popup_adpt_find_window_ParamLimits

0x94f2,	// (0x000183ef) main_cam_set_pane

0x599b,	// (0x00014898) cam4_zoom_pane_ParamLimits

0x599b,	// (0x00014898) cam4_zoom_pane

0x6183,	// (0x00015080) main_cam_set_pane_g1_ParamLimits

0x6183,	// (0x00015080) main_cam_set_pane_g1

0x6191,	// (0x0001508e) main_cam_set_pane_g2_ParamLimits

0x6191,	// (0x0001508e) main_cam_set_pane_g2

0x0001,

0xf971,	// (0x0001e86e) main_cam_set_pane_g_ParamLimits

0xf971,	// (0x0001e86e) main_cam_set_pane_g

0x61b2,	// (0x000150af) main_cam_set_pane_t1_ParamLimits

0x61b2,	// (0x000150af) main_cam_set_pane_t1

0x61cd,	// (0x000150ca) main_cset_listscroll_pane_ParamLimits

0x61cd,	// (0x000150ca) main_cset_listscroll_pane

0x61ed,	// (0x000150ea) main_cset_slider_pane_ParamLimits

0x61ed,	// (0x000150ea) main_cset_slider_pane

0xd2fa,	// (0x0001c1f7) main_cset_list_pane_ParamLimits

0xd2fa,	// (0x0001c1f7) main_cset_list_pane

0xd30a,	// (0x0001c207) scroll_pane_cp028

0x6213,	// (0x00015110) aid_area_touch_slider

0x622f,	// (0x0001512c) cset_slider_pane

0x6259,	// (0x00015156) main_cset_slider_pane_g1

0x626e,	// (0x0001516b) main_cset_slider_pane_g2

0x0011,

0xf976,	// (0x0001e873) main_cset_slider_pane_g

0xd343,	// (0x0001c240) main_cset_slider_pane_t1

0x632a,	// (0x00015227) main_cset_slider_pane_t2

0x6344,	// (0x00015241) main_cset_slider_pane_t3

0x635e,	// (0x0001525b) main_cset_slider_pane_t4

0x6378,	// (0x00015275) main_cset_slider_pane_t5

0x6392,	// (0x0001528f) main_cset_slider_pane_t6

0x63a7,	// (0x000152a4) main_cset_slider_pane_t7

0x000e,

0xf99b,	// (0x0001e898) main_cset_slider_pane_t

0x64ab,	// (0x000153a8) cset_list_set_pane_ParamLimits

0x64ab,	// (0x000153a8) cset_list_set_pane

0x64bd,	// (0x000153ba) aid_position_infowindow_above

0x64c5,	// (0x000153c2) aid_position_infowindow_below

0xd3e3,	// (0x0001c2e0) cset_list_set_pane_g1_ParamLimits

0xd3e3,	// (0x0001c2e0) cset_list_set_pane_g1

0xd3ef,	// (0x0001c2ec) cset_list_set_pane_g3_ParamLimits

0xd3ef,	// (0x0001c2ec) cset_list_set_pane_g3

0x0001,

0xf9ba,	// (0x0001e8b7) cset_list_set_pane_g_ParamLimits

0xf9ba,	// (0x0001e8b7) cset_list_set_pane_g

0xd3fe,	// (0x0001c2fb) cset_list_set_pane_t1_ParamLimits

0xd3fe,	// (0x0001c2fb) cset_list_set_pane_t1

0x94f2,	// (0x000183ef) list_highlight_pane_cp021_ParamLimits

0x94f2,	// (0x000183ef) list_highlight_pane_cp021

0xaae5,	// (0x000199e2) cset_slider_pane_g1

0xaaf7,	// (0x000199f4) cset_slider_pane_g2

0xaaee,	// (0x000199eb) cset_slider_pane_g3

0x0002,

0xf9bf,	// (0x0001e8bc) cset_slider_pane_g

0xd413,	// (0x0001c310) aid_area_touch_cam4_zoom

0xd41b,	// (0x0001c318) cam4_zoom_cont_pane

0xd423,	// (0x0001c320) cam4_zoom_pane_g1

0xd42b,	// (0x0001c328) cam4_zoom_pane_g2

0x64cd,	// (0x000153ca) cam4_zoom_pane_g3

0x0002,

0xf9c6,	// (0x0001e8c3) cam4_zoom_pane_g

0xd433,	// (0x0001c330) cam4_zoom_cont_pane_g1

0xd43c,	// (0x0001c339) cam4_zoom_cont_pane_g2

0xd445,	// (0x0001c342) cam4_zoom_cont_pane_g3

0x0002,

0xf9cd,	// (0x0001e8ca) cam4_zoom_cont_pane_g

0x585b,	// (0x00014758) call4_image_pane_ParamLimits

0x585b,	// (0x00014758) call4_image_pane

0xcf54,	// (0x0001be51) call4_windows_conf_pane_ParamLimits

0xcf95,	// (0x0001be92) popup_call4_audio_in_window_ParamLimits

0xcf95,	// (0x0001be92) popup_call4_audio_in_window

0x9482,	// (0x0001837f) bg_popup_call2_act_pane_cp02

0xd00b,	// (0x0001bf08) call4_list_conf_pane

0xc385,	// (0x0001b282) call4_image_pane_g1

0xc385,	// (0x0001b282) call4_image_pane_g2

0x0001,

0xf6dc,	// (0x0001e5d9) call4_image_pane_g

0xd44e,	// (0x0001c34b) list_single_graphic_popup_conf4_pane_ParamLimits

0xd44e,	// (0x0001c34b) list_single_graphic_popup_conf4_pane

0x9482,	// (0x0001837f) list_highlight_pane_cp022

0xd461,	// (0x0001c35e) list_single_graphic_popup_conf4_pane_g1

0xa6a4,	// (0x000195a1) list_single_graphic_popup_conf4_pane_g2

0x0001,

0xf9d4,	// (0x0001e8d1) list_single_graphic_popup_conf4_pane_g

0xd469,	// (0x0001c366) list_single_graphic_popup_conf4_pane_t1

0x14f4,	// (0x000103f1) popup_vtel_slider_window_ParamLimits

0x14f4,	// (0x000103f1) popup_vtel_slider_window

0xcf04,	// (0x0001be01) dialer2_ne_pane_t2_ParamLimits

0xcf04,	// (0x0001be01) dialer2_ne_pane_t2

0x0001,

0xf8b5,	// (0x0001e7b2) dialer2_ne_pane_t_ParamLimits

0xf8b5,	// (0x0001e7b2) dialer2_ne_pane_t

0xc16a,	// (0x0001b067) bg_popup_sub_pane_cp010_ParamLimits

0xc16a,	// (0x0001b067) bg_popup_sub_pane_cp010

0x64d5,	// (0x000153d2) popup_vtel_slider_window_g1_ParamLimits

0x64d5,	// (0x000153d2) popup_vtel_slider_window_g1

0x64e8,	// (0x000153e5) popup_vtel_slider_window_g2_ParamLimits

0x64e8,	// (0x000153e5) popup_vtel_slider_window_g2

0x0003,

0xf9d9,	// (0x0001e8d6) popup_vtel_slider_window_g_ParamLimits

0xf9d9,	// (0x0001e8d6) popup_vtel_slider_window_g

0x653e,	// (0x0001543b) vtel_slider_pane_ParamLimits

0x653e,	// (0x0001543b) vtel_slider_pane

0x6560,	// (0x0001545d) vtel_slider_pane_g1_ParamLimits

0x6560,	// (0x0001545d) vtel_slider_pane_g1

0x6574,	// (0x00015471) vtel_slider_pane_g2_ParamLimits

0x6574,	// (0x00015471) vtel_slider_pane_g2

0x658c,	// (0x00015489) vtel_slider_pane_g3_ParamLimits

0x658c,	// (0x00015489) vtel_slider_pane_g3

0x6560,	// (0x0001545d) vtel_slider_pane_g4_ParamLimits

0x6560,	// (0x0001545d) vtel_slider_pane_g4

0x65a2,	// (0x0001549f) vtel_slider_pane_g5_ParamLimits

0x65a2,	// (0x0001549f) vtel_slider_pane_g5

0x0004,

0xf9e2,	// (0x0001e8df) vtel_slider_pane_g_ParamLimits

0xf9e2,	// (0x0001e8df) vtel_slider_pane_g

0x94f2,	// (0x000183ef) main_gallery2_pane

0x5b9b,	// (0x00014a98) aid_size_row_itut2_dropdow_list_ParamLimits

0x5b9b,	// (0x00014a98) aid_size_row_itut2_dropdow_list

0x5c27,	// (0x00014b24) grid_vitu2_function_top_pane_ParamLimits

0x5c27,	// (0x00014b24) grid_vitu2_function_top_pane

0x5c91,	// (0x00014b8e) popup_vitu2_dropdown_list_window_ParamLimits

0x5c91,	// (0x00014b8e) popup_vitu2_dropdown_list_window

0x5cba,	// (0x00014bb7) popup_vitu2_match_list_window

0x65c6,	// (0x000154c3) cell_vitu2_function_top_pane_ParamLimits

0x65c6,	// (0x000154c3) cell_vitu2_function_top_pane

0x65de,	// (0x000154db) cell_vitu2_function_top_pane_cp01_ParamLimits

0x65de,	// (0x000154db) cell_vitu2_function_top_pane_cp01

0x65fa,	// (0x000154f7) cell_vitu2_function_top_wide_pane_ParamLimits

0x65fa,	// (0x000154f7) cell_vitu2_function_top_wide_pane

0x94f2,	// (0x000183ef) bg_button_pane_cp012

0x6616,	// (0x00015513) cell_vitu2_function_top_pane_g1

0xd47f,	// (0x0001c37c) bg_button_pane_cp013_ParamLimits

0xd47f,	// (0x0001c37c) bg_button_pane_cp013

0x662a,	// (0x00015527) cell_vitu2_function_top_wide_pane_g1_ParamLimits

0x662a,	// (0x00015527) cell_vitu2_function_top_wide_pane_g1

0x94f2,	// (0x000183ef) bg_popup_sub_pane_cp20

0x6642,	// (0x0001553f) list_vitu2_match_list_pane

0xd1ba,	// (0x0001c0b7) bg_popup_sub_pane_cp20_g1

0xd1c2,	// (0x0001c0bf) bg_popup_sub_pane_cp20_g2

0xa0e9,	// (0x00018fe6) bg_popup_sub_pane_cp20_g3

0xd1ca,	// (0x0001c0c7) bg_popup_sub_pane_cp20_g4

0xa0c9,	// (0x00018fc6) bg_popup_sub_pane_cp20_g5

0xd49b,	// (0x0001c398) bg_popup_sub_pane_cp20_g6

0xd1da,	// (0x0001c0d7) bg_popup_sub_pane_cp20_g7

0xd1e2,	// (0x0001c0df) bg_popup_sub_pane_cp20_g8

0xd1ea,	// (0x0001c0e7) bg_popup_sub_pane_cp20_g9

0x0008,

0xf9ed,	// (0x0001e8ea) bg_popup_sub_pane_cp20_g

0xd4a3,	// (0x0001c3a0) list_vitu2_match_list_item_pane_ParamLimits

0xd4a3,	// (0x0001c3a0) list_vitu2_match_list_item_pane

0xd4b5,	// (0x0001c3b2) list_vitu2_match_list_item_pane_t1

0x9482,	// (0x0001837f) bg_popup_sub_pane_cp21

0xa559,	// (0x00019456) grid_vitu2_dropdown_list_pane

0x66b0,	// (0x000155ad) cell_vitu2_dropdown_list_char_pane_ParamLimits

0x66b0,	// (0x000155ad) cell_vitu2_dropdown_list_char_pane

0x66d1,	// (0x000155ce) cell_vitu2_dropdown_list_ctrl_pane_ParamLimits

0x66d1,	// (0x000155ce) cell_vitu2_dropdown_list_ctrl_pane

0xd4c3,	// (0x0001c3c0) cell_vitu2_dropdown_list_char_pane_g1

0xd4cc,	// (0x0001c3c9) cell_vitu2_dropdown_list_char_pane_g2

0xd4d5,	// (0x0001c3d2) cell_vitu2_dropdown_list_char_pane_g3

0x0002,

0xfa0a,	// (0x0001e907) cell_vitu2_dropdown_list_char_pane_g

0x66fd,	// (0x000155fa) cell_vitu2_dropdown_list_char_pane_t1

0x670b,	// (0x00015608) cell_vitu2_dropdown_list_ctrl_pane_g1_ParamLimits

0x670b,	// (0x00015608) cell_vitu2_dropdown_list_ctrl_pane_g1

0x6718,	// (0x00015615) cell_vitu2_dropdown_list_ctrl_pane_g2_ParamLimits

0x6718,	// (0x00015615) cell_vitu2_dropdown_list_ctrl_pane_g2

0x6725,	// (0x00015622) cell_vitu2_dropdown_list_ctrl_pane_g3_ParamLimits

0x6725,	// (0x00015622) cell_vitu2_dropdown_list_ctrl_pane_g3

0x6732,	// (0x0001562f) cell_vitu2_dropdown_list_ctrl_pane_g4_ParamLimits

0x6732,	// (0x0001562f) cell_vitu2_dropdown_list_ctrl_pane_g4

0xc5f1,	// (0x0001b4ee) cell_vitu2_dropdown_list_ctrl_pane_g5_ParamLimits

0xc5f1,	// (0x0001b4ee) cell_vitu2_dropdown_list_ctrl_pane_g5

0x0004,

0xfa11,	// (0x0001e90e) cell_vitu2_dropdown_list_ctrl_pane_g_ParamLimits

0xfa11,	// (0x0001e90e) cell_vitu2_dropdown_list_ctrl_pane_g

0x674e,	// (0x0001564b) aid_size_cell_gallery2_ParamLimits

0x674e,	// (0x0001564b) aid_size_cell_gallery2

0x676c,	// (0x00015669) grid_gallery2_pane_ParamLimits

0x676c,	// (0x00015669) grid_gallery2_pane

0x6786,	// (0x00015683) scroll_pane_cp029_ParamLimits

0x6786,	// (0x00015683) scroll_pane_cp029

0x6792,	// (0x0001568f) cell_gallery2_pane_ParamLimits

0x6792,	// (0x0001568f) cell_gallery2_pane

0xd4de,	// (0x0001c3db) cell_gallery2_pane_g2

0x67ee,	// (0x000156eb) cell_gallery2_pane_g3

0xd4e6,	// (0x0001c3e3) cell_gallery2_pane_g4

0xd4ee,	// (0x0001c3eb) cell_gallery2_pane_g5

0x9e86,	// (0x00018d83) grid_highlight_pane_cp10

0x5cba,	// (0x00014bb7) popup_vitu2_match_list_window_ParamLimits

0x5cd1,	// (0x00014bce) popup_vitu2_query_window_ParamLimits

0x5cd1,	// (0x00014bce) popup_vitu2_query_window

0x9482,	// (0x0001837f) bg_vitu2_candi_button_pane

0xd4c3,	// (0x0001c3c0) cell_vitu2_dropdown_list_char_pane_g1_copy1

0xd4cc,	// (0x0001c3c9) cell_vitu2_dropdown_list_char_pane_g2_copy1

0xd4d5,	// (0x0001c3d2) cell_vitu2_dropdown_list_char_pane_g2_copy2

0x67f6,	// (0x000156f3) bg_button_pane_cp015

0x6808,	// (0x00015705) bg_button_pane_cp016

0x681b,	// (0x00015718) bg_button_pane_cp017

0xbe6a,	// (0x0001ad67) bg_popup_sub_pane_cp22

0xd4f6,	// (0x0001c3f3) popup_vitu2_query_window_g1

0x6860,	// (0x0001575d) popup_vitu2_query_window_g2

0x0002,

0xfa1c,	// (0x0001e919) popup_vitu2_query_window_g

0x687f,	// (0x0001577c) popup_vitu2_query_window_t1_ParamLimits

0x687f,	// (0x0001577c) popup_vitu2_query_window_t1

0x68b4,	// (0x000157b1) popup_vitu2_query_window_t2_ParamLimits

0x68b4,	// (0x000157b1) popup_vitu2_query_window_t2

0x68c6,	// (0x000157c3) popup_vitu2_query_window_t3_ParamLimits

0x68c6,	// (0x000157c3) popup_vitu2_query_window_t3

0x68ee,	// (0x000157eb) popup_vitu2_query_window_t4_ParamLimits

0x68ee,	// (0x000157eb) popup_vitu2_query_window_t4

0x690f,	// (0x0001580c) popup_vitu2_query_window_t5_ParamLimits

0x690f,	// (0x0001580c) popup_vitu2_query_window_t5

0x0006,

0xfa23,	// (0x0001e920) popup_vitu2_query_window_t_ParamLimits

0xfa23,	// (0x0001e920) popup_vitu2_query_window_t

0xd2f2,	// (0x0001c1ef) main_cset_text_pane

0x6213,	// (0x00015110) aid_area_touch_slider_ParamLimits

0x622f,	// (0x0001512c) cset_slider_pane_ParamLimits

0x6259,	// (0x00015156) main_cset_slider_pane_g1_ParamLimits

0x626e,	// (0x0001516b) main_cset_slider_pane_g2_ParamLimits

0xd313,	// (0x0001c210) main_cset_slider_pane_g3_ParamLimits

0xd313,	// (0x0001c210) main_cset_slider_pane_g3

0x6283,	// (0x00015180) main_cset_slider_pane_g4_ParamLimits

0x6283,	// (0x00015180) main_cset_slider_pane_g4

0x6292,	// (0x0001518f) main_cset_slider_pane_g5_ParamLimits

0x6292,	// (0x0001518f) main_cset_slider_pane_g5

0x629e,	// (0x0001519b) main_cset_slider_pane_g6_ParamLimits

0x629e,	// (0x0001519b) main_cset_slider_pane_g6

0xf976,	// (0x0001e873) main_cset_slider_pane_g_ParamLimits

0xd343,	// (0x0001c240) main_cset_slider_pane_t1_ParamLimits

0x632a,	// (0x00015227) main_cset_slider_pane_t2_ParamLimits

0x6344,	// (0x00015241) main_cset_slider_pane_t3_ParamLimits

0x635e,	// (0x0001525b) main_cset_slider_pane_t4_ParamLimits

0x6378,	// (0x00015275) main_cset_slider_pane_t5_ParamLimits

0x6392,	// (0x0001528f) main_cset_slider_pane_t6_ParamLimits

0x63a7,	// (0x000152a4) main_cset_slider_pane_t7_ParamLimits

0x63d1,	// (0x000152ce) main_cset_slider_pane_t8_ParamLimits

0x63d1,	// (0x000152ce) main_cset_slider_pane_t8

0x63f9,	// (0x000152f6) main_cset_slider_pane_t9_ParamLimits

0x63f9,	// (0x000152f6) main_cset_slider_pane_t9

0x6421,	// (0x0001531e) main_cset_slider_pane_t10_ParamLimits

0x6421,	// (0x0001531e) main_cset_slider_pane_t10

0x6449,	// (0x00015346) main_cset_slider_pane_t11_ParamLimits

0x6449,	// (0x00015346) main_cset_slider_pane_t11

0x6471,	// (0x0001536e) main_cset_slider_pane_t12_ParamLimits

0x6471,	// (0x0001536e) main_cset_slider_pane_t12

0x648e,	// (0x0001538b) main_cset_slider_pane_t13_ParamLimits

0x648e,	// (0x0001538b) main_cset_slider_pane_t13

0xf99b,	// (0x0001e898) main_cset_slider_pane_t_ParamLimits

0x9482,	// (0x0001837f) bg_popup_sub_pane_cp011

0xd502,	// (0x0001c3ff) main_cset_text_pane_g1

0xd50a,	// (0x0001c407) main_cset_text_pane_t1

0xd518,	// (0x0001c415) main_cset_text_pane_t2

0xd526,	// (0x0001c423) main_cset_text_pane_t3

0xd534,	// (0x0001c431) main_cset_text_pane_t4

0xd542,	// (0x0001c43f) main_cset_text_pane_t5

0xd550,	// (0x0001c44d) main_cset_text_pane_t6

0xd55e,	// (0x0001c45b) main_cset_text_pane_t7

0x0006,

0xfa32,	// (0x0001e92f) main_cset_text_pane_t

0x9482,	// (0x0001837f) main_cam4_burst_pane

0x9482,	// (0x0001837f) main_cam5_pane

0x6152,	// (0x0001504f) bg_button_pane_cp019

0x615b,	// (0x00015058) bg_button_pane_cp020

0xd31f,	// (0x0001c21c) main_cset_slider_pane_g7_ParamLimits

0xd31f,	// (0x0001c21c) main_cset_slider_pane_g7

0xd32b,	// (0x0001c228) main_cset_slider_pane_g8_ParamLimits

0xd32b,	// (0x0001c228) main_cset_slider_pane_g8

0x62b2,	// (0x000151af) main_cset_slider_pane_g9_ParamLimits

0x62b2,	// (0x000151af) main_cset_slider_pane_g9

0x62be,	// (0x000151bb) main_cset_slider_pane_g10_ParamLimits

0x62be,	// (0x000151bb) main_cset_slider_pane_g10

0x62ca,	// (0x000151c7) main_cset_slider_pane_g11_ParamLimits

0x62ca,	// (0x000151c7) main_cset_slider_pane_g11

0x62d6,	// (0x000151d3) main_cset_slider_pane_g12_ParamLimits

0x62d6,	// (0x000151d3) main_cset_slider_pane_g12

0x62e2,	// (0x000151df) main_cset_slider_pane_g13_ParamLimits

0x62e2,	// (0x000151df) main_cset_slider_pane_g13

0x62ee,	// (0x000151eb) main_cset_slider_pane_g14_ParamLimits

0x62ee,	// (0x000151eb) main_cset_slider_pane_g14

0x62fa,	// (0x000151f7) main_cset_slider_pane_g15_ParamLimits

0x62fa,	// (0x000151f7) main_cset_slider_pane_g15

0xd371,	// (0x0001c26e) main_cset_slider_pane_t14_ParamLimits

0xd371,	// (0x0001c26e) main_cset_slider_pane_t14

0xd3aa,	// (0x0001c2a7) main_cset_slider_pane_t15_ParamLimits

0xd3aa,	// (0x0001c2a7) main_cset_slider_pane_t15

0x6986,	// (0x00015883) aid_cam4_burst_size_cell_ParamLimits

0x6986,	// (0x00015883) aid_cam4_burst_size_cell

0x69a6,	// (0x000158a3) grid_cam4_burst_pane_ParamLimits

0x69a6,	// (0x000158a3) grid_cam4_burst_pane

0x69de,	// (0x000158db) linegrid_cam4_burst_pane_ParamLimits

0x69de,	// (0x000158db) linegrid_cam4_burst_pane

0xd56c,	// (0x0001c469) scroll_pane_cp30_ParamLimits

0xd56c,	// (0x0001c469) scroll_pane_cp30

0x6a02,	// (0x000158ff) cell_cam4_burst_pane_ParamLimits

0x6a02,	// (0x000158ff) cell_cam4_burst_pane

0xd578,	// (0x0001c475) linegrid_cam4_burst_pane_g1_ParamLimits

0xd578,	// (0x0001c475) linegrid_cam4_burst_pane_g1

0x6a4f,	// (0x0001594c) linegrid_cam4_burst_pane_g2_ParamLimits

0x6a4f,	// (0x0001594c) linegrid_cam4_burst_pane_g2

0xd585,	// (0x0001c482) linegrid_cam4_burst_pane_g3_ParamLimits

0xd585,	// (0x0001c482) linegrid_cam4_burst_pane_g3

0x0002,

0xfa41,	// (0x0001e93e) linegrid_cam4_burst_pane_g_ParamLimits

0xfa41,	// (0x0001e93e) linegrid_cam4_burst_pane_g

0x6a60,	// (0x0001595d) linegrid_cam4_burst_pane_g3_copy1_ParamLimits

0x6a60,	// (0x0001595d) linegrid_cam4_burst_pane_g3_copy1

0xd592,	// (0x0001c48f) linegrid_cam4_burst_pane_g4_ParamLimits

0xd592,	// (0x0001c48f) linegrid_cam4_burst_pane_g4

0x6a7a,	// (0x00015977) linegrid_cam4_burst_pane_g5_ParamLimits

0x6a7a,	// (0x00015977) linegrid_cam4_burst_pane_g5

0x6a8b,	// (0x00015988) linegrid_cam4_burst_pane_g6_ParamLimits

0x6a8b,	// (0x00015988) linegrid_cam4_burst_pane_g6

0xd59f,	// (0x0001c49c) linegrid_cam4_burst_pane_g7_ParamLimits

0xd59f,	// (0x0001c49c) linegrid_cam4_burst_pane_g7

0x6aa2,	// (0x0001599f) cell_cam4_burst_pane_g1

0xd5b8,	// (0x0001c4b5) main_cam5_pane_t1_ParamLimits

0xd5b8,	// (0x0001c4b5) main_cam5_pane_t1

0xd5ca,	// (0x0001c4c7) main_cam5_pane_t2_ParamLimits

0xd5ca,	// (0x0001c4c7) main_cam5_pane_t2

0xd5dc,	// (0x0001c4d9) main_cam5_pane_t3_ParamLimits

0xd5dc,	// (0x0001c4d9) main_cam5_pane_t3

0xd5ee,	// (0x0001c4eb) main_cam5_pane_t4_ParamLimits

0xd5ee,	// (0x0001c4eb) main_cam5_pane_t4

0xd606,	// (0x0001c503) main_cam5_pane_t5_ParamLimits

0xd606,	// (0x0001c503) main_cam5_pane_t5

0xd61a,	// (0x0001c517) main_cam5_pane_t6_ParamLimits

0xd61a,	// (0x0001c517) main_cam5_pane_t6

0xd62e,	// (0x0001c52b) main_cam5_pane_t7_ParamLimits

0xd62e,	// (0x0001c52b) main_cam5_pane_t7

0xd640,	// (0x0001c53d) main_cam5_pane_t8_ParamLimits

0xd640,	// (0x0001c53d) main_cam5_pane_t8

0xd65c,	// (0x0001c559) main_cam5_pane_t9_ParamLimits

0xd65c,	// (0x0001c559) main_cam5_pane_t9

0xd66e,	// (0x0001c56b) main_cam5_pane_t10_ParamLimits

0xd66e,	// (0x0001c56b) main_cam5_pane_t10

0xd680,	// (0x0001c57d) main_cam5_pane_t11_ParamLimits

0xd680,	// (0x0001c57d) main_cam5_pane_t11

0xd692,	// (0x0001c58f) main_cam5_pane_t12_ParamLimits

0xd692,	// (0x0001c58f) main_cam5_pane_t12

0xd6a7,	// (0x0001c5a4) main_cam5_pane_t13_ParamLimits

0xd6a7,	// (0x0001c5a4) main_cam5_pane_t13

0x000c,

0xfa4d,	// (0x0001e94a) main_cam5_pane_t_ParamLimits

0xfa4d,	// (0x0001e94a) main_cam5_pane_t

0x039a,	// (0x0000f297) popup_scut_keymap_window_ParamLimits

0x039a,	// (0x0000f297) popup_scut_keymap_window

0x6ab5,	// (0x000159b2) aid_size_cell_brow_shortcut

0x9e86,	// (0x00018d83) bg_popup_window_pane_cp010

0x6ac1,	// (0x000159be) grid_scut_pane

0x6acd,	// (0x000159ca) cell_scut_pane_ParamLimits

0x6acd,	// (0x000159ca) cell_scut_pane

0x6ae4,	// (0x000159e1) cell_scut_pane_g1

0xd6c4,	// (0x0001c5c1) cell_scut_pane_t1

0xd6d3,	// (0x0001c5d0) cell_scut_pane_t2

0x6aed,	// (0x000159ea) cell_scut_pane_t3

0x0002,

0xfa68,	// (0x0001e965) cell_scut_pane_t

0x4730,	// (0x0001362d) main_mup3_pane_g8_ParamLimits

0x4730,	// (0x0001362d) main_mup3_pane_g8

0x5bb3,	// (0x00014ab0) area_vitu2_query_pane_ParamLimits

0x5bb3,	// (0x00014ab0) area_vitu2_query_pane

0x682e,	// (0x0001572b) input_focus_pane_cp08

0xd6e2,	// (0x0001c5df) area_vitu2_query_pane_g1

0x6afb,	// (0x000159f8) area_vitu2_query_pane_g2

0x0001,

0xfa6f,	// (0x0001e96c) area_vitu2_query_pane_g

0x6b0c,	// (0x00015a09) area_vitu2_query_pane_t1_ParamLimits

0x6b0c,	// (0x00015a09) area_vitu2_query_pane_t1

0x6b20,	// (0x00015a1d) area_vitu2_query_pane_t2_ParamLimits

0x6b20,	// (0x00015a1d) area_vitu2_query_pane_t2

0x6b34,	// (0x00015a31) area_vitu2_query_pane_t3_ParamLimits

0x6b34,	// (0x00015a31) area_vitu2_query_pane_t3

0xd6ee,	// (0x0001c5eb) area_vitu2_query_pane_t4_ParamLimits

0xd6ee,	// (0x0001c5eb) area_vitu2_query_pane_t4

0xd716,	// (0x0001c613) area_vitu2_query_pane_t5_ParamLimits

0xd716,	// (0x0001c613) area_vitu2_query_pane_t5

0xd73e,	// (0x0001c63b) area_vitu2_query_pane_t6_ParamLimits

0xd73e,	// (0x0001c63b) area_vitu2_query_pane_t6

0x0006,

0xfa74,	// (0x0001e971) area_vitu2_query_pane_t_ParamLimits

0xfa74,	// (0x0001e971) area_vitu2_query_pane_t

0x6b5c,	// (0x00015a59) bg_button_pane_cp018

0x6b6a,	// (0x00015a67) bg_button_pane_cp021

0x6b76,	// (0x00015a73) bg_button_pane_cp022

0x6b85,	// (0x00015a82) input_focus_pane_cp09

0xa7e0,	// (0x000196dd) aid_size_touch_mv_arrow_left

0xa809,	// (0x00019706) aid_size_touch_mv_arrow_right

0x6312,	// (0x0001520f) main_cset_slider_pane_g16_ParamLimits

0x6312,	// (0x0001520f) main_cset_slider_pane_g16

0x631e,	// (0x0001521b) main_cset_slider_pane_g17_ParamLimits

0x631e,	// (0x0001521b) main_cset_slider_pane_g17

0x6aa2,	// (0x0001599f) cell_cam4_burst_pane_g1_ParamLimits

0x9482,	// (0x0001837f) compa_mode_pane

0x64f8,	// (0x000153f5) popup_vtel_slider_window_g3_ParamLimits

0x64f8,	// (0x000153f5) popup_vtel_slider_window_g3

0x650f,	// (0x0001540c) popup_vtel_slider_window_g4_ParamLimits

0x650f,	// (0x0001540c) popup_vtel_slider_window_g4

0x6526,	// (0x00015423) popup_vtel_slider_window_t1_ParamLimits

0x6526,	// (0x00015423) popup_vtel_slider_window_t1

0x9482,	// (0x0001837f) main_cl_pane

0xbe92,	// (0x0001ad8f) popup_imed_adjust2_window_ParamLimits

0xbe6a,	// (0x0001ad67) bg_tb_trans_pane_cp05_ParamLimits

0xc8e0,	// (0x0001b7dd) popup_imed_adjust2_window_g1_ParamLimits

0xc8ef,	// (0x0001b7ec) popup_imed_adjust2_window_g2_ParamLimits

0xc8ef,	// (0x0001b7ec) popup_imed_adjust2_window_g2

0xc8fb,	// (0x0001b7f8) popup_imed_adjust2_window_g3_ParamLimits

0xc8fb,	// (0x0001b7f8) popup_imed_adjust2_window_g3

0x0002,

0xf7df,	// (0x0001e6dc) popup_imed_adjust2_window_g_ParamLimits

0xf7df,	// (0x0001e6dc) popup_imed_adjust2_window_g

0xc907,	// (0x0001b804) popup_imed_adjust2_window_t1_ParamLimits

0xc91f,	// (0x0001b81c) slider_imed_adjust_pane_ParamLimits

0xc933,	// (0x0001b830) slider_imed_adjust_pane_g1_ParamLimits

0xc943,	// (0x0001b840) slider_imed_adjust_pane_g2_ParamLimits

0xc953,	// (0x0001b850) slider_imed_adjust_pane_g3_ParamLimits

0xc964,	// (0x0001b861) slider_imed_adjust_pane_g4_ParamLimits

0xf7e6,	// (0x0001e6e3) slider_imed_adjust_pane_g_ParamLimits

0x593c,	// (0x00014839) aid_touch_area_cam4_ParamLimits

0x593c,	// (0x00014839) aid_touch_area_cam4

0xd04f,	// (0x0001bf4c) battery_pane_cp01

0x5a0b,	// (0x00014908) main_camera4_pane_g6_ParamLimits

0x5a0b,	// (0x00014908) main_camera4_pane_g6

0x5a35,	// (0x00014932) main_camera4_pane_t2_ParamLimits

0x5a35,	// (0x00014932) main_camera4_pane_t2

0x0001,

0xf8e9,	// (0x0001e7e6) main_camera4_pane_t_ParamLimits

0xf8e9,	// (0x0001e7e6) main_camera4_pane_t

0x5a6a,	// (0x00014967) aid_touch_area_vid4_ParamLimits

0x5a6a,	// (0x00014967) aid_touch_area_vid4

0x5abe,	// (0x000149bb) main_video4_pane_g5_ParamLimits

0x5abe,	// (0x000149bb) main_video4_pane_g5

0x5ae3,	// (0x000149e0) vid4_progress_pane_ParamLimits

0x5ae3,	// (0x000149e0) vid4_progress_pane

0xd337,	// (0x0001c234) main_cset_slider_pane_g18_ParamLimits

0xd337,	// (0x0001c234) main_cset_slider_pane_g18

0xd5ac,	// (0x0001c4a9) cell_cam4_burst_pane_g2_ParamLimits

0xd5ac,	// (0x0001c4a9) cell_cam4_burst_pane_g2

0x0001,

0xfa48,	// (0x0001e945) cell_cam4_burst_pane_g_ParamLimits

0xfa48,	// (0x0001e945) cell_cam4_burst_pane_g

0x9c55,	// (0x00018b52) bg_cl_pane_ParamLimits

0x9c55,	// (0x00018b52) bg_cl_pane

0x6b94,	// (0x00015a91) cl_header_pane_ParamLimits

0x6b94,	// (0x00015a91) cl_header_pane

0x6ba8,	// (0x00015aa5) cl_listscroll_pane_ParamLimits

0x6ba8,	// (0x00015aa5) cl_listscroll_pane

0xd78a,	// (0x0001c687) bg_cl_pane_g1

0xd792,	// (0x0001c68f) bg_cl_pane_g2

0xd79a,	// (0x0001c697) bg_cl_pane_g3

0xd7a2,	// (0x0001c69f) bg_cl_pane_g4

0xd7aa,	// (0x0001c6a7) bg_cl_pane_g5

0xd7b2,	// (0x0001c6af) bg_cl_pane_g6

0xd7ba,	// (0x0001c6b7) bg_cl_pane_g7

0xd7c2,	// (0x0001c6bf) bg_cl_pane_g8

0xd7ca,	// (0x0001c6c7) bg_cl_pane_g9

0x0008,

0xfa83,	// (0x0001e980) bg_cl_pane_g

0x6bb8,	// (0x00015ab5) aid_height_cl_leading_ParamLimits

0x6bb8,	// (0x00015ab5) aid_height_cl_leading

0x6bc4,	// (0x00015ac1) aid_height_cl_text_ParamLimits

0x6bc4,	// (0x00015ac1) aid_height_cl_text

0x94f2,	// (0x000183ef) bg_cl_header_pane_ParamLimits

0x94f2,	// (0x000183ef) bg_cl_header_pane

0x6be3,	// (0x00015ae0) cl_header_pane_g1_ParamLimits

0x6be3,	// (0x00015ae0) cl_header_pane_g1

0x6bf9,	// (0x00015af6) cl_header_pane_t1_ParamLimits

0x6bf9,	// (0x00015af6) cl_header_pane_t1

0xd7d2,	// (0x0001c6cf) cl_list_pane

0xd30a,	// (0x0001c207) hc_scroll_pane_cp01

0xa0c9,	// (0x00018fc6) bg_cl_header_pane_g1

0xd1ba,	// (0x0001c0b7) bg_cl_header_pane_g2

0xa0e9,	// (0x00018fe6) bg_cl_header_pane_g3

0xd1ca,	// (0x0001c0c7) bg_cl_header_pane_g4

0xd1c2,	// (0x0001c0bf) bg_cl_header_pane_g5

0xd49b,	// (0x0001c398) bg_cl_header_pane_g6

0xd1e2,	// (0x0001c0df) bg_cl_header_pane_g7

0xd1ea,	// (0x0001c0e7) bg_cl_header_pane_g8

0xd1da,	// (0x0001c0d7) bg_cl_header_pane_g9

0x0008,

0xfa96,	// (0x0001e993) bg_cl_header_pane_g

0x6c12,	// (0x00015b0f) hc_cl_list_double_graphic_heading_pane_ParamLimits

0x6c12,	// (0x00015b0f) hc_cl_list_double_graphic_heading_pane

0x6c23,	// (0x00015b20) hc_cl_list_single_graphic_pane_ParamLimits

0x6c23,	// (0x00015b20) hc_cl_list_single_graphic_pane

0x6c39,	// (0x00015b36) hc_cl_list_single_graphic_pane_g1_ParamLimits

0x6c39,	// (0x00015b36) hc_cl_list_single_graphic_pane_g1

0x6c45,	// (0x00015b42) hc_cl_list_single_graphic_pane_g2_ParamLimits

0x6c45,	// (0x00015b42) hc_cl_list_single_graphic_pane_g2

0x0001,

0xfaa9,	// (0x0001e9a6) hc_cl_list_single_graphic_pane_g_ParamLimits

0xfaa9,	// (0x0001e9a6) hc_cl_list_single_graphic_pane_g

0x6c59,	// (0x00015b56) hc_cl_list_single_graphic_pane_t1_ParamLimits

0x6c59,	// (0x00015b56) hc_cl_list_single_graphic_pane_t1

0x6c39,	// (0x00015b36) hc_cl_list_double_graphic_heading_pane_g1_ParamLimits

0x6c39,	// (0x00015b36) hc_cl_list_double_graphic_heading_pane_g1

0x6c6e,	// (0x00015b6b) hc_cl_list_double_graphic_heading_pane_g2_ParamLimits

0x6c6e,	// (0x00015b6b) hc_cl_list_double_graphic_heading_pane_g2

0x6c82,	// (0x00015b7f) hc_cl_list_double_graphic_heading_pane_g3_ParamLimits

0x6c82,	// (0x00015b7f) hc_cl_list_double_graphic_heading_pane_g3

0x0002,

0xfaae,	// (0x0001e9ab) hc_cl_list_double_graphic_heading_pane_g_ParamLimits

0xfaae,	// (0x0001e9ab) hc_cl_list_double_graphic_heading_pane_g

0x6c96,	// (0x00015b93) hc_cl_list_double_graphic_heading_pane_t1_ParamLimits

0x6c96,	// (0x00015b93) hc_cl_list_double_graphic_heading_pane_t1

0x6cab,	// (0x00015ba8) hc_cl_list_double_graphic_heading_pane_t2_ParamLimits

0x6cab,	// (0x00015ba8) hc_cl_list_double_graphic_heading_pane_t2

0x0001,

0xfab5,	// (0x0001e9b2) hc_cl_list_double_graphic_heading_pane_t_ParamLimits

0xfab5,	// (0x0001e9b2) hc_cl_list_double_graphic_heading_pane_t

0xd7e3,	// (0x0001c6e0) vid4_progress_pane_g1

0xd7f3,	// (0x0001c6f0) vid4_progress_pane_g2

0x6cc0,	// (0x00015bbd) vid4_progress_pane_g3

0xd803,	// (0x0001c700) vid4_progress_pane_g4

0x0004,

0xfaba,	// (0x0001e9b7) vid4_progress_pane_g

0x6cd2,	// (0x00015bcf) vid4_progress_pane_t1

0xd81b,	// (0x0001c718) vid4_progress_pane_t2

0x0002,

0xfac5,	// (0x0001e9c2) vid4_progress_pane_t

0x6cea,	// (0x00015be7) wait_bar_pane_cp07

0xc178,	// (0x0001b075) blid_firmament_pane_ParamLimits

0xc1bb,	// (0x0001b0b8) popup_blid_sat_info2_window_g1

0xc1df,	// (0x0001b0dc) popup_blid_sat_info2_window_t3

0xc1ed,	// (0x0001b0ea) popup_blid_sat_info2_window_t4

0xc1fb,	// (0x0001b0f8) popup_blid_sat_info2_window_t5

0xc209,	// (0x0001b106) popup_blid_sat_info2_window_t6

0xc219,	// (0x0001b116) popup_blid_sat_info2_window_t7

0xc227,	// (0x0001b124) popup_blid_sat_info2_window_t8

0xc235,	// (0x0001b132) popup_blid_sat_info2_window_t9

0xc243,	// (0x0001b140) popup_blid_sat_info2_window_t10

0xc305,	// (0x0001b202) aid_firma_cardinal_ParamLimits

0xc319,	// (0x0001b216) blid_firmament_pane_t1_ParamLimits

0xc330,	// (0x0001b22d) blid_firmament_pane_t2_ParamLimits

0xc347,	// (0x0001b244) blid_firmament_pane_t3_ParamLimits

0xc35e,	// (0x0001b25b) blid_firmament_pane_t4_ParamLimits

0xf6d3,	// (0x0001e5d0) blid_firmament_pane_t_ParamLimits

0xc375,	// (0x0001b272) blid_sat_info_pane_ParamLimits

0x94f2,	// (0x000183ef) main_cam_set_pane_ParamLimits

0x4ff4,	// (0x00013ef1) aid_size_cell_colour_35_ParamLimits

0x5014,	// (0x00013f11) aid_size_cell_colour_112_ParamLimits

0x5034,	// (0x00013f31) aid_size_cell_effect_ParamLimits

0xbe6a,	// (0x0001ad67) bg_tb_trans_pane_cp02_ParamLimits

0xa35f,	// (0x0001925c) heading_imed_pane_ParamLimits

0x5054,	// (0x00013f51) listscroll_imed_pane_ParamLimits

0xb490,	// (0x0001a38d) popup_call2_audio_first_window_g5_ParamLimits

0xb490,	// (0x0001a38d) popup_call2_audio_first_window_g5

0x55e7,	// (0x000144e4) aid_size_touch_image3_arrow_left_ParamLimits

0x55e7,	// (0x000144e4) aid_size_touch_image3_arrow_left

0x5613,	// (0x00014510) aid_size_touch_image3_arrow_right_ParamLimits

0x5613,	// (0x00014510) aid_size_touch_image3_arrow_right

0xd830,	// (0x0001c72d) vid4_progress_pane_t3

0x5367,	// (0x00014264) main_hwr_training_symbol_option_pane_ParamLimits

0x5367,	// (0x00014264) main_hwr_training_symbol_option_pane

0xcbcd,	// (0x0001baca) popup_hwr_training_preview_window_ParamLimits

0xcbcd,	// (0x0001baca) popup_hwr_training_preview_window

0x5387,	// (0x00014284) hwr_training_navi_pane_g5_ParamLimits

0x5387,	// (0x00014284) hwr_training_navi_pane_g5

0xd196,	// (0x0001c093) popup_char_count_window

0x94f2,	// (0x000183ef) bg_popup_sub_pane_cp20_ParamLimits

0x6642,	// (0x0001553f) list_vitu2_match_list_pane_ParamLimits

0x6651,	// (0x0001554e) vitu2_page_scroll_pane_ParamLimits

0x6651,	// (0x0001554e) vitu2_page_scroll_pane

0xd867,	// (0x0001c764) list_single_hwr_training_symbol_option_pane_ParamLimits

0xd867,	// (0x0001c764) list_single_hwr_training_symbol_option_pane

0xd87a,	// (0x0001c777) list_single_hwr_training_symbol_option_pane_g1

0xd882,	// (0x0001c77f) list_single_hwr_training_symbol_option_pane_t1

0xd890,	// (0x0001c78d) bg_button_pane_cp023

0xd899,	// (0x0001c796) bg_button_pane_cp024

0x6d35,	// (0x00015c32) vitu2_page_scroll_pane_g1

0x6d3d,	// (0x00015c3a) vitu2_page_scroll_pane_g2

0x0001,

0xfacc,	// (0x0001e9c9) vitu2_page_scroll_pane_g

0x6d45,	// (0x00015c42) vitu2_page_scroll_pane_t1

0xc094,	// (0x0001af91) popup_char_count_window_g1

0xd8cc,	// (0x0001c7c9) popup_char_count_window_g2

0xd8d5,	// (0x0001c7d2) popup_char_count_window_g3

0x0002,

0xfad1,	// (0x0001e9ce) popup_char_count_window_g

0xd8de,	// (0x0001c7db) popup_char_count_window_t1

0x9482,	// (0x0001837f) main_vded2_pane

0xc8cc,	// (0x0001b7c9) aid_size_cell_imed_line

0xc8d6,	// (0x0001b7d3) grid_imed_line_width_pane

0xd107,	// (0x0001c004) vid4_indicators_pane_g4

0xd8ec,	// (0x0001c7e9) cell_imed_line_width_pane_ParamLimits

0xd8ec,	// (0x0001c7e9) cell_imed_line_width_pane

0xd900,	// (0x0001c7fd) cell_imed_line_width_pane_g1

0xd909,	// (0x0001c806) cell_imed_line_width_pane_g2

0x0001,

0xfad8,	// (0x0001e9d5) cell_imed_line_width_pane_g

0x6d54,	// (0x00015c51) main_vded2_pane_g1_ParamLimits

0x6d54,	// (0x00015c51) main_vded2_pane_g1

0x6d6a,	// (0x00015c67) main_vded2_pane_g2_ParamLimits

0x6d6a,	// (0x00015c67) main_vded2_pane_g2

0x0001,

0xfadd,	// (0x0001e9da) main_vded2_pane_g_ParamLimits

0xfadd,	// (0x0001e9da) main_vded2_pane_g

0x6d7c,	// (0x00015c79) vded2_slider_pane_ParamLimits

0x6d7c,	// (0x00015c79) vded2_slider_pane

0x6d8c,	// (0x00015c89) aid_size_touch_vded2_end

0x6d96,	// (0x00015c93) aid_size_touch_vded2_playhead

0xd911,	// (0x0001c80e) aid_size_touch_vded2_start

0xd919,	// (0x0001c816) vded2_slider_bg_pane

0xd922,	// (0x0001c81f) vded2_slider_pane_g1

0xd92b,	// (0x0001c828) vded2_slider_pane_g2

0x6da0,	// (0x00015c9d) vded2_slider_pane_g3

0x0002,

0xfae2,	// (0x0001e9df) vded2_slider_pane_g

0xd933,	// (0x0001c830) vded2_slider_bg_pane_g1

0xd93c,	// (0x0001c839) vded2_slider_bg_pane_g2

0xd945,	// (0x0001c842) vded2_slider_bg_pane_g3

0x0002,

0xfae9,	// (0x0001e9e6) vded2_slider_bg_pane_g

0x2d47,	// (0x00011c44) aid_postcard_touch_down_pane_ParamLimits

0x2d47,	// (0x00011c44) aid_postcard_touch_down_pane

0x2d5d,	// (0x00011c5a) aid_postcard_touch_up_pane_ParamLimits

0x2d5d,	// (0x00011c5a) aid_postcard_touch_up_pane

0x9482,	// (0x0001837f) main_blid2_pane

0xbe78,	// (0x0001ad75) popup_blid2_search_window

0x9482,	// (0x0001837f) blid2_gps_pane

0x9482,	// (0x0001837f) blid2_navig_pane

0x9482,	// (0x0001837f) blid2_search_pane

0x9482,	// (0x0001837f) blid2_tripm_pane

0x6dab,	// (0x00015ca8) blid2_search_pane_g1_ParamLimits

0x6dab,	// (0x00015ca8) blid2_search_pane_g1

0x6dc5,	// (0x00015cc2) blid2_search_pane_t1_ParamLimits

0x6dc5,	// (0x00015cc2) blid2_search_pane_t1

0x6dd7,	// (0x00015cd4) aid_size_cell_blid2_gps_ParamLimits

0x6dd7,	// (0x00015cd4) aid_size_cell_blid2_gps

0x6def,	// (0x00015cec) blid2_gps_pane_g1_ParamLimits

0x6def,	// (0x00015cec) blid2_gps_pane_g1

0x6e03,	// (0x00015d00) grid_blid2_satellite_pane_ParamLimits

0x6e03,	// (0x00015d00) grid_blid2_satellite_pane

0x6e1d,	// (0x00015d1a) blid2_navig_pane_g1_ParamLimits

0x6e1d,	// (0x00015d1a) blid2_navig_pane_g1

0x6e29,	// (0x00015d26) blid2_navig_pane_t1_ParamLimits

0x6e29,	// (0x00015d26) blid2_navig_pane_t1

0x6e44,	// (0x00015d41) blid2_navig_pane_t2_ParamLimits

0x6e44,	// (0x00015d41) blid2_navig_pane_t2

0x0001,

0xfaf0,	// (0x0001e9ed) blid2_navig_pane_t_ParamLimits

0xfaf0,	// (0x0001e9ed) blid2_navig_pane_t

0x6e5f,	// (0x00015d5c) blid2_navig_ring_pane_ParamLimits

0x6e5f,	// (0x00015d5c) blid2_navig_ring_pane

0x6e78,	// (0x00015d75) blid2_speed_pane_ParamLimits

0x6e78,	// (0x00015d75) blid2_speed_pane

0x6e84,	// (0x00015d81) blid2_tripm_pane_g1_ParamLimits

0x6e84,	// (0x00015d81) blid2_tripm_pane_g1

0x6e9d,	// (0x00015d9a) blid2_tripm_pane_g2_ParamLimits

0x6e9d,	// (0x00015d9a) blid2_tripm_pane_g2

0x6eb1,	// (0x00015dae) blid2_tripm_pane_g3_ParamLimits

0x6eb1,	// (0x00015dae) blid2_tripm_pane_g3

0x6ec5,	// (0x00015dc2) blid2_tripm_pane_g4_ParamLimits

0x6ec5,	// (0x00015dc2) blid2_tripm_pane_g4

0x6ed9,	// (0x00015dd6) blid2_tripm_pane_g5_ParamLimits

0x6ed9,	// (0x00015dd6) blid2_tripm_pane_g5

0x0005,

0xfaf5,	// (0x0001e9f2) blid2_tripm_pane_g_ParamLimits

0xfaf5,	// (0x0001e9f2) blid2_tripm_pane_g

0x6eff,	// (0x00015dfc) blid2_tripm_pane_t1_ParamLimits

0x6eff,	// (0x00015dfc) blid2_tripm_pane_t1

0x6f1a,	// (0x00015e17) blid2_tripm_pane_t2_ParamLimits

0x6f1a,	// (0x00015e17) blid2_tripm_pane_t2

0x6f33,	// (0x00015e30) blid2_tripm_pane_t3_ParamLimits

0x6f33,	// (0x00015e30) blid2_tripm_pane_t3

0x0003,

0xfb02,	// (0x0001e9ff) blid2_tripm_pane_t_ParamLimits

0xfb02,	// (0x0001e9ff) blid2_tripm_pane_t

0x6f7a,	// (0x00015e77) cell_blid2_satellite_pane_ParamLimits

0x6f7a,	// (0x00015e77) cell_blid2_satellite_pane

0x6f98,	// (0x00015e95) cell_blid2_satellite_pane_g1

0xd94e,	// (0x0001c84b) cell_blid2_satellite_pane_t1

0xc385,	// (0x0001b282) blid2_speed_pane_g1

0xd95c,	// (0x0001c859) blid2_speed_pane_t1

0xd96a,	// (0x0001c867) blid2_speed_pane_t2

0x0001,

0xfb0b,	// (0x0001ea08) blid2_speed_pane_t

0xc385,	// (0x0001b282) blid2_navig_ring_pane_g1

0x6fa1,	// (0x00015e9e) blid2_navig_ring_pane_g2

0x6fa9,	// (0x00015ea6) blid2_navig_ring_pane_g3

0x6fb1,	// (0x00015eae) blid2_navig_ring_pane_g4

0x6fb9,	// (0x00015eb6) blid2_navig_ring_pane_g5

0x0004,

0xfb10,	// (0x0001ea0d) blid2_navig_ring_pane_g

0x9482,	// (0x0001837f) bg_popup_window_pane_cp011

0xd978,	// (0x0001c875) popup_blid2_search_window_g1

0xd980,	// (0x0001c87d) popup_blid2_search_window_t1

0xd98e,	// (0x0001c88b) popup_blid2_search_window_t2

0x0001,

0xfb1b,	// (0x0001ea18) popup_blid2_search_window_t

0x9fd8,	// (0x00018ed5) main_browser_pane_g1

0x9c55,	// (0x00018b52) main_browser_pane_ParamLimits

0x94f2,	// (0x000183ef) bg_button_pane_cp011_ParamLimits

0x5ee8,	// (0x00014de5) cell_vitu2_function_pane_g1_ParamLimits

0xbe6a,	// (0x0001ad67) bg_popup_sub_pane_cp22_ParamLimits

0x682e,	// (0x0001572b) input_focus_pane_cp08_ParamLimits

0x6845,	// (0x00015742) popup_vitu2_query_button_pane_ParamLimits

0x6845,	// (0x00015742) popup_vitu2_query_button_pane

0x6856,	// (0x00015753) popup_vitu2_query_input_button_pane

0xd4f6,	// (0x0001c3f3) popup_vitu2_query_window_g1_ParamLimits

0x6860,	// (0x0001575d) popup_vitu2_query_window_g2_ParamLimits

0xfa1c,	// (0x0001e919) popup_vitu2_query_window_g_ParamLimits

0x9482,	// (0x0001837f) bg_button_pane_cp026

0x6fc1,	// (0x00015ebe) popup_vitu2_query_input_button_pane_g1

0x9482,	// (0x0001837f) bg_button_pane_cp025

0xd99c,	// (0x0001c899) popup_vitu2_query_button_pane_t1

0x43dd,	// (0x000132da) main_mp3_pane_t6

0x43eb,	// (0x000132e8) popup_slider_window_cp01

0xd06b,	// (0x0001bf68) cam4_battery_pane

0xd0c4,	// (0x0001bfc1) cam4_battery_pane_cp02

0xd7db,	// (0x0001c6d8) cam4_battery_pane_cp01

0xd7db,	// (0x0001c6d8) cam4_battery_pane_cp03

0xc385,	// (0x0001b282) cam4_battery_pane_g1

0xd9aa,	// (0x0001c8a7) cam4_battery_pane_g2

0x0001,

0xfb20,	// (0x0001ea1d) cam4_battery_pane_g

0xc251,	// (0x0001b14e) popup_blid_sat_info2_window_t11

0xa7e0,	// (0x000196dd) aid_size_touch_mv_arrow_left_ParamLimits

0xa809,	// (0x00019706) aid_size_touch_mv_arrow_right_ParamLimits

0xa867,	// (0x00019764) navi_pane_g1_ParamLimits

0xa873,	// (0x00019770) navi_pane_g2_ParamLimits

0xa8a1,	// (0x0001979e) navi_pane_g3_ParamLimits

0xf3e5,	// (0x0001e2e2) navi_pane_g_ParamLimits

0x27f3,	// (0x000116f0) navi_pane_mv_t1_ParamLimits

0x5060,	// (0x00013f5d) grid_imed_effect_pane_ParamLimits

0x13f1,	// (0x000102ee) aid_placing_vt_slider_lsc

0x9f27,	// (0x00018e24) aid_placing_vt_slider_prt

0x94f2,	// (0x000183ef) bg_tb_trans_pane_cp01_ParamLimits

0xc511,	// (0x0001b40e) popup_image_details_window_g1_ParamLimits

0xc524,	// (0x0001b421) popup_image_details_window_g2_ParamLimits

0xc539,	// (0x0001b436) popup_image_details_window_g3_ParamLimits

0xc539,	// (0x0001b436) popup_image_details_window_g3

0xf718,	// (0x0001e615) popup_image_details_window_g_ParamLimits

0xc54d,	// (0x0001b44a) popup_image_details_window_t1_ParamLimits

0xc55f,	// (0x0001b45c) popup_image_details_window_t2_ParamLimits

0xc578,	// (0x0001b475) popup_image_details_window_t3_ParamLimits

0xc58c,	// (0x0001b489) popup_image_details_window_t4_ParamLimits

0xc5a7,	// (0x0001b4a4) popup_image_details_window_t5_ParamLimits

0xf71f,	// (0x0001e61c) popup_image_details_window_t_ParamLimits

0x6bd0,	// (0x00015acd) cl_header_name_pane_ParamLimits

0x6bd0,	// (0x00015acd) cl_header_name_pane

0x6fc9,	// (0x00015ec6) cl_header_name_pane_t1_ParamLimits

0x6fc9,	// (0x00015ec6) cl_header_name_pane_t1

0x6fea,	// (0x00015ee7) cl_header_name_pane_t2_ParamLimits

0x6fea,	// (0x00015ee7) cl_header_name_pane_t2

0x702c,	// (0x00015f29) cl_header_name_pane_t3_ParamLimits

0x702c,	// (0x00015f29) cl_header_name_pane_t3

0x0002,

0xfb25,	// (0x0001ea22) cl_header_name_pane_t_ParamLimits

0xfb25,	// (0x0001ea22) cl_header_name_pane_t

0xa930,	// (0x0001982d) navi_pane_mv_g2_ParamLimits

0xd153,	// (0x0001c050) field_vitu2_entry_pane_g1_ParamLimits

0xd15f,	// (0x0001c05c) field_vitu2_entry_pane_g2_ParamLimits

0xd16b,	// (0x0001c068) field_vitu2_entry_pane_g3_ParamLimits

0xd16b,	// (0x0001c068) field_vitu2_entry_pane_g3

0xf91b,	// (0x0001e818) field_vitu2_entry_pane_g_ParamLimits

0xd19e,	// (0x0001c09b) cell_vitu2_itu_pane_g1_ParamLimits

0x5d90,	// (0x00014c8d) cell_vitu2_itu_pane_g2_ParamLimits

0x5d90,	// (0x00014c8d) cell_vitu2_itu_pane_g2

0x0001,

0xf927,	// (0x0001e824) cell_vitu2_itu_pane_g_ParamLimits

0xf927,	// (0x0001e824) cell_vitu2_itu_pane_g

0x94f2,	// (0x000183ef) bg_vkb2_func_pane_cp05_ParamLimits

0x94f2,	// (0x000183ef) bg_vkb2_func_pane_cp05

0x94f2,	// (0x000183ef) bg_vkb2_func_pane_cp03

0x94f2,	// (0x000183ef) bg_vkb2_func_pane_cp04

0x94f2,	// (0x000183ef) bg_vkb2_func_pane_cp10_ParamLimits

0x94f2,	// (0x000183ef) bg_vkb2_func_pane_cp10

0x6b76,	// (0x00015a73) bg_vkb2_func_pane_cp08

0x6b5c,	// (0x00015a59) bg_vkb2_func_pane_cp06

0x6b6a,	// (0x00015a67) bg_vkb2_func_pane_cp07

0xd8a2,	// (0x0001c79f) bg_vkb2_func_pane_cp11_ParamLimits

0xd8a2,	// (0x0001c79f) bg_vkb2_func_pane_cp11

0xd8b7,	// (0x0001c7b4) bg_vkb2_func_pane_cp12_ParamLimits

0xd8b7,	// (0x0001c7b4) bg_vkb2_func_pane_cp12

0x9482,	// (0x0001837f) bg_vkb2_func_pane_cp09

0xd1ba,	// (0x0001c0b7) bg_vkb2_func_pane_g1

0xa0e9,	// (0x00018fe6) bg_vkb2_func_pane_g2

0xd1c2,	// (0x0001c0bf) bg_vkb2_func_pane_g3

0xd1ca,	// (0x0001c0c7) bg_vkb2_func_pane_g4

0xd49b,	// (0x0001c398) bg_vkb2_func_pane_g5

0xd1e2,	// (0x0001c0df) bg_vkb2_func_pane_g6

0xd1ea,	// (0x0001c0e7) bg_vkb2_func_pane_g7

0xd1da,	// (0x0001c0d7) bg_vkb2_func_pane_g8

0xa0c9,	// (0x00018fc6) bg_vkb2_func_pane_g9

0x0008,

0xfb2c,	// (0x0001ea29) bg_vkb2_func_pane_g

0x6eed,	// (0x00015dea) blid2_tripm_pane_g6_ParamLimits

0x6eed,	// (0x00015dea) blid2_tripm_pane_g6

0xcebe,	// (0x0001bdbb) mp4_progress_pane_g1

0x6f66,	// (0x00015e63) blid2_tripm_values_pane_ParamLimits

0x6f66,	// (0x00015e63) blid2_tripm_values_pane

0x705d,	// (0x00015f5a) blid2_tripm_values_pane_t1

0x706b,	// (0x00015f68) blid2_tripm_values_pane_t2

0x7079,	// (0x00015f76) blid2_tripm_values_pane_t3

0x7087,	// (0x00015f84) blid2_tripm_values_pane_t4

0x7095,	// (0x00015f92) blid2_tripm_values_pane_t5

0x70a3,	// (0x00015fa0) blid2_tripm_values_pane_t6

0x70b1,	// (0x00015fae) blid2_tripm_values_pane_t7

0x70bf,	// (0x00015fbc) blid2_tripm_values_pane_t8

0x70cd,	// (0x00015fca) blid2_tripm_values_pane_t9

0x0008,

0xfb3f,	// (0x0001ea3c) blid2_tripm_values_pane_t

0x1433,	// (0x00010330) call_video_pane_t1_ParamLimits

0x1451,	// (0x0001034e) call_video_pane_t2_ParamLimits

0xf26e,	// (0x0001e16b) call_video_pane_t_ParamLimits

0x2cc5,	// (0x00011bc2) msg_header_pane_g1_ParamLimits

0xab32,	// (0x00019a2f) msg_header_pane_g2_ParamLimits

0xab32,	// (0x00019a2f) msg_header_pane_g2

0x0001,

0xf488,	// (0x0001e385) msg_header_pane_g_ParamLimits

0xf488,	// (0x0001e385) msg_header_pane_g

0x9c55,	// (0x00018b52) main_clock2_pane_ParamLimits

0x4d61,	// (0x00013c5e) grid_clock2_toolbar_pane_ParamLimits

0x4d61,	// (0x00013c5e) grid_clock2_toolbar_pane

0x4d61,	// (0x00013c5e) listscroll_clock2_pane_ParamLimits

0x4d61,	// (0x00013c5e) listscroll_clock2_pane

0x4e54,	// (0x00013d51) main_clock2_pane_t3_ParamLimits

0x4e54,	// (0x00013d51) main_clock2_pane_t3

0x4e78,	// (0x00013d75) main_clock2_pane_t4_ParamLimits

0x4e78,	// (0x00013d75) main_clock2_pane_t4

0xd9b4,	// (0x0001c8b1) cell_clock2_toolbar_pane

0xd9bc,	// (0x0001c8b9) cell_clock2_toolbar_pane_cp01

0xd9bc,	// (0x0001c8b9) cell_clock2_toolbar_pane_cp02

0xd9c4,	// (0x0001c8c1) cell_clock2_toolbar_pane_cp03

0xd9cc,	// (0x0001c8c9) list_clock2_pane

0xa756,	// (0x00019653) scroll_pane_cp10

0xd9d4,	// (0x0001c8d1) list_single_clock2_pane_ParamLimits

0xd9d4,	// (0x0001c8d1) list_single_clock2_pane

0x9e86,	// (0x00018d83) list_highlight_pane_cp08

0xd9e1,	// (0x0001c8de) list_single_clock2_pane_t1

0xd9ef,	// (0x0001c8ec) list_single_clock2_pane_t2

0x0001,

0xfb52,	// (0x0001ea4f) list_single_clock2_pane_t

0x9482,	// (0x0001837f) bg_button_pane_cp10

0xd9fd,	// (0x0001c8fa) cell_clock2_toolbar_pane_g1

0x2cd3,	// (0x00011bd0) aid_main_viewer_pane_g1_ParamLimits

0x2cd3,	// (0x00011bd0) aid_main_viewer_pane_g1

0x2ce1,	// (0x00011bde) aid_main_viewer_pane_g2_ParamLimits

0x2ce1,	// (0x00011bde) aid_main_viewer_pane_g2

0x2cef,	// (0x00011bec) aid_main_viewer_pane_g3_ParamLimits

0x2cef,	// (0x00011bec) aid_main_viewer_pane_g3

0x2cfe,	// (0x00011bfb) aid_main_viewer_pane_g4_ParamLimits

0x2cfe,	// (0x00011bfb) aid_main_viewer_pane_g4

0x0003,

0xf499,	// (0x0001e396) aid_main_viewer_pane_g_ParamLimits

0xf499,	// (0x0001e396) aid_main_viewer_pane_g

0x3604,	// (0x00012501) main_calc_pane_ParamLimits

0x3618,	// (0x00012515) main_dialer2_pane_ParamLimits

0x9482,	// (0x0001837f) main_cam6_pane

0x9482,	// (0x0001837f) main_vid6_pane

0x4d6d,	// (0x00013c6a) listscroll_gen_pane_cp06_ParamLimits

0x4d6d,	// (0x00013c6a) listscroll_gen_pane_cp06

0x4e9b,	// (0x00013d98) main_clock2_pane_t5_ParamLimits

0x4e9b,	// (0x00013d98) main_clock2_pane_t5

0x4ef5,	// (0x00013df2) aid_call2_pane_cp10_ParamLimits

0x4f07,	// (0x00013e04) aid_call_pane_cp10_ParamLimits

0xa7d4,	// (0x000196d1) popup_clock_analogue_window_cp10_g1_ParamLimits

0xa7d4,	// (0x000196d1) popup_clock_analogue_window_cp10_g2_ParamLimits

0x4f19,	// (0x00013e16) popup_clock_analogue_window_cp10_g3_ParamLimits

0x4f19,	// (0x00013e16) popup_clock_analogue_window_cp10_g4_ParamLimits

0xa7d4,	// (0x000196d1) popup_clock_analogue_window_cp10_g5_ParamLimits

0xf7d4,	// (0x0001e6d1) popup_clock_analogue_window_cp10_g_ParamLimits

0x4f2b,	// (0x00013e28) popup_clock_analogue_window_cp10_t1_ParamLimits

0x5594,	// (0x00014491) cell_dialer2_keypad_pane_g2_ParamLimits

0x5594,	// (0x00014491) cell_dialer2_keypad_pane_g2

0x0001,

0xf8ba,	// (0x0001e7b7) cell_dialer2_keypad_pane_g_ParamLimits

0xf8ba,	// (0x0001e7b7) cell_dialer2_keypad_pane_g

0x55b0,	// (0x000144ad) cell_dialer2_keypad_pane_t1

0x6205,	// (0x00015102) main_cset_text2_pane_ParamLimits

0x6205,	// (0x00015102) main_cset_text2_pane

0xd6e2,	// (0x0001c5df) area_vitu2_query_pane_g1_ParamLimits

0x6afb,	// (0x000159f8) area_vitu2_query_pane_g2_ParamLimits

0xfa6f,	// (0x0001e96c) area_vitu2_query_pane_g_ParamLimits

0xd766,	// (0x0001c663) area_vitu2_query_pane_t7_ParamLimits

0xd766,	// (0x0001c663) area_vitu2_query_pane_t7

0x6b5c,	// (0x00015a59) bg_button_pane_cp018_ParamLimits

0x6b6a,	// (0x00015a67) bg_button_pane_cp021_ParamLimits

0x6b76,	// (0x00015a73) bg_button_pane_cp022_ParamLimits

0x6b76,	// (0x00015a73) bg_vkb2_func_pane_cp08_ParamLimits

0x6b5c,	// (0x00015a59) bg_vkb2_func_pane_cp06_ParamLimits

0x6b6a,	// (0x00015a67) bg_vkb2_func_pane_cp07_ParamLimits

0x6b85,	// (0x00015a82) input_focus_pane_cp09_ParamLimits

0xda05,	// (0x0001c902) cam6_autofocus_pane_ParamLimits

0xda05,	// (0x0001c902) cam6_autofocus_pane

0x70db,	// (0x00015fd8) cam6_image_uncrop_pane_ParamLimits

0x70db,	// (0x00015fd8) cam6_image_uncrop_pane

0x70ea,	// (0x00015fe7) cam6_indi_pane_ParamLimits

0x70ea,	// (0x00015fe7) cam6_indi_pane

0x7100,	// (0x00015ffd) cam6_mode_pane_ParamLimits

0x7100,	// (0x00015ffd) cam6_mode_pane

0x7112,	// (0x0001600f) cam6_timer_pane_ParamLimits

0x7112,	// (0x0001600f) cam6_timer_pane

0x711e,	// (0x0001601b) cam6_zoom_pane_ParamLimits

0x711e,	// (0x0001601b) cam6_zoom_pane

0x712a,	// (0x00016027) cam6_mode_pane_g1_ParamLimits

0x712a,	// (0x00016027) cam6_mode_pane_g1

0x713a,	// (0x00016037) cam6_mode_pane_g2_ParamLimits

0x713a,	// (0x00016037) cam6_mode_pane_g2

0x714a,	// (0x00016047) cam6_mode_pane_g3_ParamLimits

0x714a,	// (0x00016047) cam6_mode_pane_g3

0x715a,	// (0x00016057) cam6_mode_pane_g4_ParamLimits

0x715a,	// (0x00016057) cam6_mode_pane_g4

0x0003,

0xfb57,	// (0x0001ea54) cam6_mode_pane_g_ParamLimits

0xfb57,	// (0x0001ea54) cam6_mode_pane_g

0xd26b,	// (0x0001c168) bg_tb_trans_pane_cp08_ParamLimits

0xd26b,	// (0x0001c168) bg_tb_trans_pane_cp08

0xda13,	// (0x0001c910) cam6_battery_pane_ParamLimits

0xda13,	// (0x0001c910) cam6_battery_pane

0xda29,	// (0x0001c926) cam6_indi_pane_g1_ParamLimits

0xda29,	// (0x0001c926) cam6_indi_pane_g1

0xda3b,	// (0x0001c938) cam6_indi_pane_g2_ParamLimits

0xda3b,	// (0x0001c938) cam6_indi_pane_g2

0xda4d,	// (0x0001c94a) cam6_indi_pane_g3_ParamLimits

0xda4d,	// (0x0001c94a) cam6_indi_pane_g3

0x0002,

0xfb60,	// (0x0001ea5d) cam6_indi_pane_g_ParamLimits

0xfb60,	// (0x0001ea5d) cam6_indi_pane_g

0xda5f,	// (0x0001c95c) cam6_indi_pane_t1_ParamLimits

0xda5f,	// (0x0001c95c) cam6_indi_pane_t1

0x716a,	// (0x00016067) cam6_autofocus_pane_g1

0x7172,	// (0x0001606f) cam6_autofocus_pane_g2

0x717a,	// (0x00016077) cam6_autofocus_pane_g3

0x7182,	// (0x0001607f) cam6_autofocus_pane_g4

0x0003,

0xfb67,	// (0x0001ea64) cam6_autofocus_pane_g

0xda85,	// (0x0001c982) cam6_timer_pane_g1

0xda8d,	// (0x0001c98a) cam6_timer_pane_t1

0xda9b,	// (0x0001c998) cam6_zoom_cont_pane

0xdaa3,	// (0x0001c9a0) cam6_zoom_pane_g1

0xdaab,	// (0x0001c9a8) cam6_zoom_pane_g2

0x718a,	// (0x00016087) cam6_zoom_pane_g3

0x0002,

0xfb70,	// (0x0001ea6d) cam6_zoom_pane_g

0xc385,	// (0x0001b282) cam6_battery_pane_g1

0xc385,	// (0x0001b282) cam6_battery_pane_g2

0x0001,

0xf6dc,	// (0x0001e5d9) cam6_battery_pane_g

0xdab3,	// (0x0001c9b0) cam6_zoom_cont_pane_g1

0xdabc,	// (0x0001c9b9) cam6_zoom_cont_pane_g2

0xdac5,	// (0x0001c9c2) cam6_zoom_cont_pane_g3

0x0002,

0xfb77,	// (0x0001ea74) cam6_zoom_cont_pane_g

0x71a7,	// (0x000160a4) cam6_mode_pane_cp_ParamLimits

0x71a7,	// (0x000160a4) cam6_mode_pane_cp

0x711e,	// (0x0001601b) cam6_zoom_pane_cp_ParamLimits

0x711e,	// (0x0001601b) cam6_zoom_pane_cp

0x71b9,	// (0x000160b6) vid6_image_uncrop_cif_pane_ParamLimits

0x71b9,	// (0x000160b6) vid6_image_uncrop_cif_pane

0x71c9,	// (0x000160c6) vid6_image_uncrop_nhd_pane_ParamLimits

0x71c9,	// (0x000160c6) vid6_image_uncrop_nhd_pane

0x70db,	// (0x00015fd8) vid6_image_uncrop_vga_pane_ParamLimits

0x70db,	// (0x00015fd8) vid6_image_uncrop_vga_pane

0x71d8,	// (0x000160d5) vid6_image_uncrop_wvga_pane_ParamLimits

0x71d8,	// (0x000160d5) vid6_image_uncrop_wvga_pane

0x71e7,	// (0x000160e4) vid6_indi_pane_ParamLimits

0x71e7,	// (0x000160e4) vid6_indi_pane

0xd26b,	// (0x0001c168) bg_tb_trans_pane_cp09_ParamLimits

0xd26b,	// (0x0001c168) bg_tb_trans_pane_cp09

0xdadd,	// (0x0001c9da) cam6_battery_pane_cp_ParamLimits

0xdadd,	// (0x0001c9da) cam6_battery_pane_cp

0xdae9,	// (0x0001c9e6) vid6_indi_pane_g1_ParamLimits

0xdae9,	// (0x0001c9e6) vid6_indi_pane_g1

0xdafb,	// (0x0001c9f8) vid6_indi_pane_g2_ParamLimits

0xdafb,	// (0x0001c9f8) vid6_indi_pane_g2

0xdb0d,	// (0x0001ca0a) vid6_indi_pane_g3_ParamLimits

0xdb0d,	// (0x0001ca0a) vid6_indi_pane_g3

0xdb22,	// (0x0001ca1f) vid6_indi_pane_g4_ParamLimits

0xdb22,	// (0x0001ca1f) vid6_indi_pane_g4

0xdb37,	// (0x0001ca34) vid6_indi_pane_g5_ParamLimits

0xdb37,	// (0x0001ca34) vid6_indi_pane_g5

0x0004,

0xfb7e,	// (0x0001ea7b) vid6_indi_pane_g_ParamLimits

0xfb7e,	// (0x0001ea7b) vid6_indi_pane_g

0xdb51,	// (0x0001ca4e) vid6_indi_pane_t1_ParamLimits

0xdb51,	// (0x0001ca4e) vid6_indi_pane_t1

0xdb67,	// (0x0001ca64) vid6_indi_pane_t2_ParamLimits

0xdb67,	// (0x0001ca64) vid6_indi_pane_t2

0xdb8f,	// (0x0001ca8c) vid6_indi_pane_t3_ParamLimits

0xdb8f,	// (0x0001ca8c) vid6_indi_pane_t3

0xdbb7,	// (0x0001cab4) vid6_indi_pane_t4_ParamLimits

0xdbb7,	// (0x0001cab4) vid6_indi_pane_t4

0x0003,

0xfb89,	// (0x0001ea86) vid6_indi_pane_t_ParamLimits

0xfb89,	// (0x0001ea86) vid6_indi_pane_t

0xdbdb,	// (0x0001cad8) wait_bar_pane_cp08

0x71ff,	// (0x000160fc) main_cset_text2_pane_t1_ParamLimits

0x71ff,	// (0x000160fc) main_cset_text2_pane_t1

0x7192,	// (0x0001608f) listscroll_gen_pane_cp06_t1_ParamLimits

0x7192,	// (0x0001608f) listscroll_gen_pane_cp06_t1

0x9482,	// (0x0001837f) main_cam6_set_pane

0xc5f1,	// (0x0001b4ee) bg_tb_trans_pane_cp06_ParamLimits

0xd073,	// (0x0001bf70) cam4_indicators_pane_g1_ParamLimits

0xd084,	// (0x0001bf81) cam4_indicators_pane_g2_ParamLimits

0xf8f7,	// (0x0001e7f4) cam4_indicators_pane_g_ParamLimits

0xd0a2,	// (0x0001bf9f) cam4_indicators_pane_t1_ParamLimits

0x94f2,	// (0x000183ef) bg_tb_trans_pane_cp07_ParamLimits

0xd0ce,	// (0x0001bfcb) vid4_indicators_pane_g1_ParamLimits

0xd0e2,	// (0x0001bfdf) vid4_indicators_pane_g2_ParamLimits

0xd0f6,	// (0x0001bff3) vid4_indicators_pane_g3_ParamLimits

0xd107,	// (0x0001c004) vid4_indicators_pane_g4_ParamLimits

0xf909,	// (0x0001e806) vid4_indicators_pane_g_ParamLimits

0xd125,	// (0x0001c022) vid4_indicators_pane_t1_ParamLimits

0xd7e3,	// (0x0001c6e0) vid4_progress_pane_g1_ParamLimits

0xd7f3,	// (0x0001c6f0) vid4_progress_pane_g2_ParamLimits

0x6cc0,	// (0x00015bbd) vid4_progress_pane_g3_ParamLimits

0xd803,	// (0x0001c700) vid4_progress_pane_g4_ParamLimits

0xfaba,	// (0x0001e9b7) vid4_progress_pane_g_ParamLimits

0x6cd2,	// (0x00015bcf) vid4_progress_pane_t1_ParamLimits

0xd81b,	// (0x0001c718) vid4_progress_pane_t2_ParamLimits

0xd830,	// (0x0001c72d) vid4_progress_pane_t3_ParamLimits

0xfac5,	// (0x0001e9c2) vid4_progress_pane_t_ParamLimits

0x6cea,	// (0x00015be7) wait_bar_pane_cp07_ParamLimits

0x721c,	// (0x00016119) main_cam6_set_pane_g2_ParamLimits

0x721c,	// (0x00016119) main_cam6_set_pane_g2

0x7240,	// (0x0001613d) main_cset6_listscroll_pane_ParamLimits

0x7240,	// (0x0001613d) main_cset6_listscroll_pane

0x7260,	// (0x0001615d) main_cset6_slider_pane_ParamLimits

0x7260,	// (0x0001615d) main_cset6_slider_pane

0x7276,	// (0x00016173) main_cset6_text2_pane_ParamLimits

0x7276,	// (0x00016173) main_cset6_text2_pane

0xdbea,	// (0x0001cae7) main_cset6_text_pane

0xdbf2,	// (0x0001caef) main_cset_list_pane_copy1_ParamLimits

0xdbf2,	// (0x0001caef) main_cset_list_pane_copy1

0xdc02,	// (0x0001caff) scroll_pane_cp028_copy1

0x7284,	// (0x00016181) cset_list_set_pane_copy1

0x7295,	// (0x00016192) aid_position_infowindow_above_copy1

0x729d,	// (0x0001619a) aid_position_infowindow_below_copy1

0x72a5,	// (0x000161a2) cset_list_set_pane_g1_copy1

0x72ad,	// (0x000161aa) cset_list_set_pane_g3_copy1_ParamLimits

0x72ad,	// (0x000161aa) cset_list_set_pane_g3_copy1

0x72bc,	// (0x000161b9) cset_list_set_pane_t1_copy1_ParamLimits

0x72bc,	// (0x000161b9) cset_list_set_pane_t1_copy1

0x94f2,	// (0x000183ef) list_highlight_pane_cp021_copy1_ParamLimits

0x94f2,	// (0x000183ef) list_highlight_pane_cp021_copy1

0xdc0b,	// (0x0001cb08) cset6_slider_pane_ParamLimits

0xdc0b,	// (0x0001cb08) cset6_slider_pane

0xdc37,	// (0x0001cb34) main_cset6_slider_pane_g1_ParamLimits

0xdc37,	// (0x0001cb34) main_cset6_slider_pane_g1

0x72d1,	// (0x000161ce) main_cset6_slider_pane_g2_ParamLimits

0x72d1,	// (0x000161ce) main_cset6_slider_pane_g2

0xdc5f,	// (0x0001cb5c) main_cset6_slider_pane_g3_ParamLimits

0xdc5f,	// (0x0001cb5c) main_cset6_slider_pane_g3

0x72f9,	// (0x000161f6) main_cset6_slider_pane_g4_ParamLimits

0x72f9,	// (0x000161f6) main_cset6_slider_pane_g4

0x7305,	// (0x00016202) main_cset6_slider_pane_g5_ParamLimits

0x7305,	// (0x00016202) main_cset6_slider_pane_g5

0xd31f,	// (0x0001c21c) main_cset6_slider_pane_g7_ParamLimits

0xd31f,	// (0x0001c21c) main_cset6_slider_pane_g7

0xd32b,	// (0x0001c228) main_cset6_slider_pane_g8_ParamLimits

0xd32b,	// (0x0001c228) main_cset6_slider_pane_g8

0x62b2,	// (0x000151af) main_cset6_slider_pane_g9_ParamLimits

0x62b2,	// (0x000151af) main_cset6_slider_pane_g9

0x62be,	// (0x000151bb) main_cset6_slider_pane_g10_ParamLimits

0x62be,	// (0x000151bb) main_cset6_slider_pane_g10

0x62ca,	// (0x000151c7) main_cset6_slider_pane_g11_ParamLimits

0x62ca,	// (0x000151c7) main_cset6_slider_pane_g11

0x62d6,	// (0x000151d3) main_cset6_slider_pane_g12_ParamLimits

0x62d6,	// (0x000151d3) main_cset6_slider_pane_g12

0x62e2,	// (0x000151df) main_cset6_slider_pane_g13_ParamLimits

0x62e2,	// (0x000151df) main_cset6_slider_pane_g13

0x62ee,	// (0x000151eb) main_cset6_slider_pane_g14_ParamLimits

0x62ee,	// (0x000151eb) main_cset6_slider_pane_g14

0x7311,	// (0x0001620e) main_cset6_slider_pane_g15_ParamLimits

0x7311,	// (0x0001620e) main_cset6_slider_pane_g15

0x6312,	// (0x0001520f) main_cset6_slider_pane_g16_ParamLimits

0x6312,	// (0x0001520f) main_cset6_slider_pane_g16

0x631e,	// (0x0001521b) main_cset6_slider_pane_g17_ParamLimits

0x631e,	// (0x0001521b) main_cset6_slider_pane_g17

0x0011,

0xfb92,	// (0x0001ea8f) main_cset6_slider_pane_g_ParamLimits

0xfb92,	// (0x0001ea8f) main_cset6_slider_pane_g

0xdc6b,	// (0x0001cb68) main_cset6_slider_pane_t1_ParamLimits

0xdc6b,	// (0x0001cb68) main_cset6_slider_pane_t1

0x7341,	// (0x0001623e) main_cset6_slider_pane_t2_ParamLimits

0x7341,	// (0x0001623e) main_cset6_slider_pane_t2

0x736c,	// (0x00016269) main_cset6_slider_pane_t3_ParamLimits

0x736c,	// (0x00016269) main_cset6_slider_pane_t3

0x7397,	// (0x00016294) main_cset6_slider_pane_t4_ParamLimits

0x7397,	// (0x00016294) main_cset6_slider_pane_t4

0x73c2,	// (0x000162bf) main_cset6_slider_pane_t5_ParamLimits

0x73c2,	// (0x000162bf) main_cset6_slider_pane_t5

0xdcac,	// (0x0001cba9) main_cset6_slider_pane_t7_ParamLimits

0xdcac,	// (0x0001cba9) main_cset6_slider_pane_t7

0x73ed,	// (0x000162ea) main_cset6_slider_pane_t8_ParamLimits

0x73ed,	// (0x000162ea) main_cset6_slider_pane_t8

0x7411,	// (0x0001630e) main_cset6_slider_pane_t9_ParamLimits

0x7411,	// (0x0001630e) main_cset6_slider_pane_t9

0x7435,	// (0x00016332) main_cset6_slider_pane_t10_ParamLimits

0x7435,	// (0x00016332) main_cset6_slider_pane_t10

0x7459,	// (0x00016356) main_cset6_slider_pane_t11_ParamLimits

0x7459,	// (0x00016356) main_cset6_slider_pane_t11

0xdce2,	// (0x0001cbdf) main_cset6_slider_pane_t14_ParamLimits

0xdce2,	// (0x0001cbdf) main_cset6_slider_pane_t14

0xdd1b,	// (0x0001cc18) main_cset6_slider_pane_t15_ParamLimits

0xdd1b,	// (0x0001cc18) main_cset6_slider_pane_t15

0x000b,

0xfbb7,	// (0x0001eab4) main_cset6_slider_pane_t_ParamLimits

0xfbb7,	// (0x0001eab4) main_cset6_slider_pane_t

0xd433,	// (0x0001c330) cset_slider_pane_g1_copy1

0xd43c,	// (0x0001c339) cset_slider_pane_g2_copy1

0xd445,	// (0x0001c342) cset_slider_pane_g3_copy1

0x9482,	// (0x0001837f) bg_popup_sub_pane_cp011_copy1

0xdd54,	// (0x0001cc51) main_cset_text_pane_g1_copy1

0xd50a,	// (0x0001c407) main_cset_text_pane_t1_copy1

0xd518,	// (0x0001c415) main_cset_text_pane_t2_copy1

0xd526,	// (0x0001c423) main_cset_text_pane_t3_copy1

0xd534,	// (0x0001c431) main_cset_text_pane_t4_copy1

0xd542,	// (0x0001c43f) main_cset_text_pane_t5_copy1

0xdd5c,	// (0x0001cc59) main_cset_text_pane_t6_copy1

0xdd6a,	// (0x0001cc67) main_cset_text_pane_t7_copy1

0x71ff,	// (0x000160fc) main_cset_text2_pane_t1_copy1

0x94f2,	// (0x000183ef) main_ncimui_pane

0x3862,	// (0x0001275f) popup_query_ncimui_window_ParamLimits

0x3862,	// (0x0001275f) popup_query_ncimui_window

0xc656,	// (0x0001b553) field_cale_ev2_pane_g4_ParamLimits

0xc656,	// (0x0001b553) field_cale_ev2_pane_g4

0x5474,	// (0x00014371) cell_video_dialer_keypad_pane_g2_ParamLimits

0x5474,	// (0x00014371) cell_video_dialer_keypad_pane_g2

0x0001,

0xf895,	// (0x0001e792) cell_video_dialer_keypad_pane_g_ParamLimits

0xf895,	// (0x0001e792) cell_video_dialer_keypad_pane_g

0x548c,	// (0x00014389) cell_video_dialer_keypad_pane_t1

0x9482,	// (0x0001837f) bg_popup_window_pane_cp012

0xa623,	// (0x00019520) heading_pane_cp06

0xdd96,	// (0x0001cc93) ncim_query_content_pane

0x9482,	// (0x0001837f) bg_popup_heading_pane_cp01

0xdd9e,	// (0x0001cc9b) ncim_heading_pane_t1

0xddac,	// (0x0001cca9) ncim_indicator_popup_pane

0xddbe,	// (0x0001ccbb) ncim_query_button_pane

0xddd2,	// (0x0001cccf) ncim_query_content_pane_t1

0xdde4,	// (0x0001cce1) ncim_query_content_pane_t2

0x0005,

0xfbfb,	// (0x0001eaf8) ncim_query_content_pane_t

0xde1e,	// (0x0001cd1b) ncim_query_list_pane

0xde30,	// (0x0001cd2d) ncim_query_popup_pane

0xddac,	// (0x0001cca9) ncim_indicator_popup_pane_ParamLimits

0x7674,	// (0x00016571) ncim_query_content_pane_g1_ParamLimits

0x7674,	// (0x00016571) ncim_query_content_pane_g1

0xddd2,	// (0x0001cccf) ncim_query_content_pane_t1_ParamLimits

0xdde4,	// (0x0001cce1) ncim_query_content_pane_t2_ParamLimits

0x7680,	// (0x0001657d) ncim_query_content_pane_t3_ParamLimits

0x7680,	// (0x0001657d) ncim_query_content_pane_t3

0x76a8,	// (0x000165a5) ncim_query_content_pane_t4_ParamLimits

0x76a8,	// (0x000165a5) ncim_query_content_pane_t4

0x76d0,	// (0x000165cd) ncim_query_content_pane_t5_ParamLimits

0x76d0,	// (0x000165cd) ncim_query_content_pane_t5

0xddf6,	// (0x0001ccf3) ncim_query_content_pane_t6_ParamLimits

0xddf6,	// (0x0001ccf3) ncim_query_content_pane_t6

0xfbfb,	// (0x0001eaf8) ncim_query_content_pane_t_ParamLimits

0xde1e,	// (0x0001cd1b) ncim_query_list_pane_ParamLimits

0xde30,	// (0x0001cd2d) ncim_query_popup_pane_ParamLimits

0xde44,	// (0x0001cd41) wait_bar_pane_cp04

0x9482,	// (0x0001837f) input_focus_pane_cp011

0xde4c,	// (0x0001cd49) ncim_query_popup_pane_t1

0xde5a,	// (0x0001cd57) ncim_list_query_list_pane_ParamLimits

0xde5a,	// (0x0001cd57) ncim_list_query_list_pane

0x9482,	// (0x0001837f) bg_button_pane_cp027

0xde67,	// (0x0001cd64) ncim_query_button_pane_g1

0x9482,	// (0x0001837f) list_highlight_pane_cp012

0xde71,	// (0x0001cd6e) ncim_list_query_list_pane_g1

0xde79,	// (0x0001cd76) ncim_list_query_list_pane_t1

0xd093,	// (0x0001bf90) cam4_indicators_pane_g3_ParamLimits

0xd093,	// (0x0001bf90) cam4_indicators_pane_g3

0xd113,	// (0x0001c010) vid4_indicators_pane_g5_ParamLimits

0xd113,	// (0x0001c010) vid4_indicators_pane_g5

0xd80f,	// (0x0001c70c) vid4_progress_pane_g5_ParamLimits

0xd80f,	// (0x0001c70c) vid4_progress_pane_g5

0x7562,	// (0x0001645f) main_ncimui_pane_g1

0x75c8,	// (0x000164c5) ncimui_group_query_pane_ParamLimits

0x75c8,	// (0x000164c5) ncimui_group_query_pane

0x7610,	// (0x0001650d) ncimui_list_pane_ParamLimits

0x7610,	// (0x0001650d) ncimui_list_pane

0x7637,	// (0x00016534) ncimui_text_pane_ParamLimits

0x7637,	// (0x00016534) ncimui_text_pane

0x76f8,	// (0x000165f5) ncimui_text_pane_t1_ParamLimits

0x76f8,	// (0x000165f5) ncimui_text_pane_t1

0xde87,	// (0x0001cd84) ncimui_list_single_graphic_pane_ParamLimits

0xde87,	// (0x0001cd84) ncimui_list_single_graphic_pane

0x7716,	// (0x00016613) ncimui_query_pane_ParamLimits

0x7716,	// (0x00016613) ncimui_query_pane

0x9482,	// (0x0001837f) list_highlight_pane_cp013

0xde97,	// (0x0001cd94) ncim_list_query_list_pane_t1_copy1

0xde71,	// (0x0001cd6e) ncim_list_single_graphic_pane_g1

0xdea5,	// (0x0001cda2) ncim_query_button_pane_cp01

0xdeb1,	// (0x0001cdae) ncim_query_entry_pane_ParamLimits

0xdeb1,	// (0x0001cdae) ncim_query_entry_pane

0xdec4,	// (0x0001cdc1) ncimui_query_pane_g1

0xded0,	// (0x0001cdcd) ncimui_query_pane_t1_ParamLimits

0xded0,	// (0x0001cdcd) ncimui_query_pane_t1

0x94f2,	// (0x000183ef) input_focus_pane_cp012

0xdee9,	// (0x0001cde6) ncim_query_entry_pane_t1

0x9c55,	// (0x00018b52) main_im_pane_ParamLimits

0x94f2,	// (0x000183ef) main_mobtv_pane_ParamLimits

0x94f2,	// (0x000183ef) main_mobtv_pane

0x7329,	// (0x00016226) main_cset6_slider_pane_g18_ParamLimits

0x7329,	// (0x00016226) main_cset6_slider_pane_g18

0x7335,	// (0x00016232) main_cset6_slider_pane_g19_ParamLimits

0x7335,	// (0x00016232) main_cset6_slider_pane_g19

0xd279,	// (0x0001c176) bg_main_mobtv_pane_ParamLimits

0xd279,	// (0x0001c176) bg_main_mobtv_pane

0x7729,	// (0x00016626) main_mobtv_info_pane

0x7732,	// (0x0001662f) main_mobtv_loading_pane_ParamLimits

0x7732,	// (0x0001662f) main_mobtv_loading_pane

0xdefb,	// (0x0001cdf8) main_mobtv_pg_channel_list_pane

0xdf05,	// (0x0001ce02) main_mobtv_pg_hdr_pane

0x773f,	// (0x0001663c) main_mobtv_programe_curr_pane_ParamLimits

0x773f,	// (0x0001663c) main_mobtv_programe_curr_pane

0x774c,	// (0x00016649) main_mobtv_programe_next_pane_ParamLimits

0x774c,	// (0x00016649) main_mobtv_programe_next_pane

0xdf0e,	// (0x0001ce0b) popup_mobtv_noti_window

0xc385,	// (0x0001b282) main_tv_pg_hdr_pane_g1

0xdf16,	// (0x0001ce13) main_tv_pg_hdr_pane_g2

0xdf1e,	// (0x0001ce1b) main_tv_pg_hdr_pane_g3

0xdf26,	// (0x0001ce23) main_tv_pg_hdr_pane_g4

0xdf2e,	// (0x0001ce2b) main_tv_pg_hdr_pane_g5

0xdf38,	// (0x0001ce35) main_tv_pg_hdr_pane_g6

0xdf42,	// (0x0001ce3f) main_tv_pg_hdr_pane_g7

0xdf4c,	// (0x0001ce49) main_tv_pg_hdr_pane_g8

0xdf56,	// (0x0001ce53) main_tv_pg_hdr_pane_g9

0xdf60,	// (0x0001ce5d) main_tv_pg_hdr_pane_g10

0xdf6a,	// (0x0001ce67) main_tv_pg_hdr_pane_g11

0x000a,

0xfc08,	// (0x0001eb05) main_tv_pg_hdr_pane_g

0xdf74,	// (0x0001ce71) main_tv_pg_hdr_pane_t1

0xdf82,	// (0x0001ce7f) main_tv_pg_hdr_pane_t2

0xdf90,	// (0x0001ce8d) main_tv_pg_hdr_pane_t3

0xdfa0,	// (0x0001ce9d) main_tv_pg_hdr_pane_t4

0xdfb0,	// (0x0001cead) main_tv_pg_hdr_pane_t5

0x0004,

0xfc1f,	// (0x0001eb1c) main_tv_pg_hdr_pane_t

0xdfc0,	// (0x0001cebd) single_mobtv_pg_channel_pane_ParamLimits

0xdfc0,	// (0x0001cebd) single_mobtv_pg_channel_pane

0xdfd2,	// (0x0001cecf) single_mobtv_pg_channel_table_pane

0xdfdb,	// (0x0001ced8) single_mobtv_pg_channel_thumb_pane

0xdfe4,	// (0x0001cee1) single_tv_pg_channel_pane_g1

0xdfed,	// (0x0001ceea) single_tv_pg_channel_pane_g2

0x0001,

0xfc2a,	// (0x0001eb27) single_tv_pg_channel_pane_g

0xc5f1,	// (0x0001b4ee) bg_single_mobtv_pg_channel_thumb_pane_ParamLimits

0xc5f1,	// (0x0001b4ee) bg_single_mobtv_pg_channel_thumb_pane

0xdff6,	// (0x0001cef3) single_mobtv_pg_channel_thumb_pane_g1_ParamLimits

0xdff6,	// (0x0001cef3) single_mobtv_pg_channel_thumb_pane_g1

0xe004,	// (0x0001cf01) single_mobtv_pg_channel_thumb_pane_g2_ParamLimits

0xe004,	// (0x0001cf01) single_mobtv_pg_channel_thumb_pane_g2

0xe010,	// (0x0001cf0d) single_mobtv_pg_channel_thumb_pane_g3_ParamLimits

0xe010,	// (0x0001cf0d) single_mobtv_pg_channel_thumb_pane_g3

0x0002,

0xfc2f,	// (0x0001eb2c) single_mobtv_pg_channel_thumb_pane_g_ParamLimits

0xfc2f,	// (0x0001eb2c) single_mobtv_pg_channel_thumb_pane_g

0xe01c,	// (0x0001cf19) single_mobtv_pg_channel_thumb_pane_t1

0xe02a,	// (0x0001cf27) single_mobtv_pg_channel_thumb_pane_t2

0x0001,

0xfc36,	// (0x0001eb33) single_mobtv_pg_channel_thumb_pane_t

0xc385,	// (0x0001b282) bg_single_mobtv_pg_channel_table_pane_g1

0xc385,	// (0x0001b282) bg_single_mobtv_pg_channel_table_pane_g2

0x0001,

0xf6dc,	// (0x0001e5d9) bg_single_mobtv_pg_channel_table_pane_g

0xe038,	// (0x0001cf35) single_mobtv_pg_channel_table_pane_t1

0xe046,	// (0x0001cf43) single_mobtv_pg_channel_table_pane_t2

0x0001,

0xfc3b,	// (0x0001eb38) single_mobtv_pg_channel_table_pane_t

0x7761,	// (0x0001665e) main_mobtv_info_pane_g1_ParamLimits

0x7761,	// (0x0001665e) main_mobtv_info_pane_g1

0x777f,	// (0x0001667c) main_mobtv_info_pane_t1_ParamLimits

0x777f,	// (0x0001667c) main_mobtv_info_pane_t1

0x77f7,	// (0x000166f4) main_mobtv_info_pane_t2_ParamLimits

0x77f7,	// (0x000166f4) main_mobtv_info_pane_t2

0x0002,

0xfc45,	// (0x0001eb42) main_mobtv_info_pane_t_ParamLimits

0xfc45,	// (0x0001eb42) main_mobtv_info_pane_t

0x7886,	// (0x00016783) wait_bar_pane_cp05

0x7898,	// (0x00016795) main_mobtv_loading_pane_g1_ParamLimits

0x7898,	// (0x00016795) main_mobtv_loading_pane_g1

0x78ab,	// (0x000167a8) main_mobtv_loading_pane_g2_ParamLimits

0x78ab,	// (0x000167a8) main_mobtv_loading_pane_g2

0x78b7,	// (0x000167b4) main_mobtv_loading_pane_g3_ParamLimits

0x78b7,	// (0x000167b4) main_mobtv_loading_pane_g3

0x0002,

0xfc4c,	// (0x0001eb49) main_mobtv_loading_pane_g_ParamLimits

0xfc4c,	// (0x0001eb49) main_mobtv_loading_pane_g

0xe054,	// (0x0001cf51) main_mobtv_loading_pane_t1_ParamLimits

0xe054,	// (0x0001cf51) main_mobtv_loading_pane_t1

0xe06c,	// (0x0001cf69) main_mobtv_loading_pane_t2_ParamLimits

0xe06c,	// (0x0001cf69) main_mobtv_loading_pane_t2

0x0001,

0xfc53,	// (0x0001eb50) main_mobtv_loading_pane_t_ParamLimits

0xfc53,	// (0x0001eb50) main_mobtv_loading_pane_t

0x78ca,	// (0x000167c7) wait_bar_pane_cp06_ParamLimits

0x78ca,	// (0x000167c7) wait_bar_pane_cp06

0xe090,	// (0x0001cf8d) main_mobtv_programe_curr_pane_t1

0xe09e,	// (0x0001cf9b) main_mobtv_programe_curr_pane_t2

0x0001,

0xfc58,	// (0x0001eb55) main_mobtv_programe_curr_pane_t

0xe0ac,	// (0x0001cfa9) main_mobtv_programe_next_pane_t1

0xe0ba,	// (0x0001cfb7) main_mobtv_programe_next_pane_t2

0xe0c8,	// (0x0001cfc5) main_mobtv_programe_next_pane_t3

0x0002,

0xfc5d,	// (0x0001eb5a) main_mobtv_programe_next_pane_t

0x9482,	// (0x0001837f) bg_popup_mobtv_noti_window_pane

0xe0d6,	// (0x0001cfd3) popup_mobtv_noti_window_g1

0xe0de,	// (0x0001cfdb) popup_mobtv_noti_window_t1

0xe0ec,	// (0x0001cfe9) popup_mobtv_noti_window_t2

0x0001,

0xfc64,	// (0x0001eb61) popup_mobtv_noti_window_t

0xc385,	// (0x0001b282) bg_popup_mobtv_noti_window_pane_g1

0x9482,	// (0x0001837f) sc_clock_pane

0x9482,	// (0x0001837f) main_fs_bigclock_pane

0x6f50,	// (0x00015e4d) blid2_tripm_pane_t4_ParamLimits

0x6f50,	// (0x00015e4d) blid2_tripm_pane_t4

0x78d9,	// (0x000167d6) sc_clock_pane_g1_ParamLimits

0x78d9,	// (0x000167d6) sc_clock_pane_g1

0x78eb,	// (0x000167e8) sc_clock_pane_t1_ParamLimits

0x78eb,	// (0x000167e8) sc_clock_pane_t1

0x790d,	// (0x0001680a) sc_clock_pane_t2_ParamLimits

0x790d,	// (0x0001680a) sc_clock_pane_t2

0x7925,	// (0x00016822) sc_clock_pane_t3_ParamLimits

0x7925,	// (0x00016822) sc_clock_pane_t3

0x0004,

0xfc69,	// (0x0001eb66) sc_clock_pane_t_ParamLimits

0xfc69,	// (0x0001eb66) sc_clock_pane_t

0x8954,	// (0x00017851) main_fs_bigclock_indicator_pane_ParamLimits

0x8954,	// (0x00017851) main_fs_bigclock_indicator_pane

0x79c5,	// (0x000168c2) main_fs_bigclock_pane_g1_ParamLimits

0x79c5,	// (0x000168c2) main_fs_bigclock_pane_g1

0x8960,	// (0x0001785d) main_fs_bigclock_pane_t1_ParamLimits

0x8960,	// (0x0001785d) main_fs_bigclock_pane_t1

0x8972,	// (0x0001786f) main_fs_bigclock_pane_t2_ParamLimits

0x8972,	// (0x0001786f) main_fs_bigclock_pane_t2

0x8986,	// (0x00017883) main_fs_bigclock_pane_t3_ParamLimits

0x8986,	// (0x00017883) main_fs_bigclock_pane_t3

0x0002,

0xfe6e,	// (0x0001ed6b) main_fs_bigclock_pane_t_ParamLimits

0xfe6e,	// (0x0001ed6b) main_fs_bigclock_pane_t

0xec70,	// (0x0001db6d) main_fs_bigclock_indicator_pane_g1

0xddc6,	// (0x0001ccc3) ncim_query_content_pane_g2_ParamLimits

0xddc6,	// (0x0001ccc3) ncim_query_content_pane_g2

0x0001,

0xfbf6,	// (0x0001eaf3) ncim_query_content_pane_g_ParamLimits

0xfbf6,	// (0x0001eaf3) ncim_query_content_pane_g

0x793e,	// (0x0001683b) sc_clock_pane_t4_ParamLimits

0x793e,	// (0x0001683b) sc_clock_pane_t4

0x94f2,	// (0x000183ef) main_radioblah_pane

0xcfd9,	// (0x0001bed6) cell_call4_button_pane_t1_copy1_ParamLimits

0xcfd9,	// (0x0001bed6) cell_call4_button_pane_t1_copy1

0x757a,	// (0x00016477) main_ncimui_pane_t1_ParamLimits

0x757a,	// (0x00016477) main_ncimui_pane_t1

0x7594,	// (0x00016491) main_ncimui_pane_t2_ParamLimits

0x7594,	// (0x00016491) main_ncimui_pane_t2

0x0002,

0xfbef,	// (0x0001eaec) main_ncimui_pane_t_ParamLimits

0xfbef,	// (0x0001eaec) main_ncimui_pane_t

0xe230,	// (0x0001d12d) main_radioblah_anim_pane_ParamLimits

0xe230,	// (0x0001d12d) main_radioblah_anim_pane

0xe241,	// (0x0001d13e) main_radioblah_info_pane_ParamLimits

0xe241,	// (0x0001d13e) main_radioblah_info_pane

0xe255,	// (0x0001d152) main_radioblah_pane_t1_ParamLimits

0xe255,	// (0x0001d152) main_radioblah_pane_t1

0xe271,	// (0x0001d16e) main_radioblah_pane_t2_ParamLimits

0xe271,	// (0x0001d16e) main_radioblah_pane_t2

0x0003,

0xfc8a,	// (0x0001eb87) main_radioblah_pane_t_ParamLimits

0xfc8a,	// (0x0001eb87) main_radioblah_pane_t

0x7a1d,	// (0x0001691a) main_radioblah_rocker_ctrl_pane_ParamLimits

0x7a1d,	// (0x0001691a) main_radioblah_rocker_ctrl_pane

0xe2b9,	// (0x0001d1b6) main_radioblah_info_pane_t1_ParamLimits

0xe2b9,	// (0x0001d1b6) main_radioblah_info_pane_t1

0x7a75,	// (0x00016972) main_radioblah_info_pane_t2_ParamLimits

0x7a75,	// (0x00016972) main_radioblah_info_pane_t2

0x0003,

0xfc93,	// (0x0001eb90) main_radioblah_info_pane_t_ParamLimits

0xfc93,	// (0x0001eb90) main_radioblah_info_pane_t

0xc385,	// (0x0001b282) main_radioblah_rocker_ctrl_pane_g1

0x7b25,	// (0x00016a22) main_radioblah_rocker_ctrl_pane_g2

0x7b2d,	// (0x00016a2a) main_radioblah_rocker_ctrl_pane_g3

0x7b35,	// (0x00016a32) main_radioblah_rocker_ctrl_pane_g4

0x7b3d,	// (0x00016a3a) main_radioblah_rocker_ctrl_pane_g5

0x7b45,	// (0x00016a42) main_radioblah_rocker_ctrl_pane_g6

0x0005,

0xfc9c,	// (0x0001eb99) main_radioblah_rocker_ctrl_pane_g

0x71ff,	// (0x000160fc) main_cset_text2_pane_t1_copy1_ParamLimits

0xd063,	// (0x0001bf60) cam4_image_uncrop_qvga_pane

0xd0bc,	// (0x0001bfb9) vid4_image_uncrop_qcif_pane

0xda05,	// (0x0001c902) cam6_image_uncrop_qvga_pane_ParamLimits

0xda05,	// (0x0001c902) cam6_image_uncrop_qvga_pane

0xdacd,	// (0x0001c9ca) vid6_image_uncrop_qcif_pane_ParamLimits

0xdacd,	// (0x0001c9ca) vid6_image_uncrop_qcif_pane

0x9482,	// (0x0001837f) bg_popup_preview_window_pane_cp03

0xdd78,	// (0x0001cc75) list_cset_text2_pane

0xdd80,	// (0x0001cc7d) main_cset6_text2_pane_g1

0xdd88,	// (0x0001cc85) main_cset6_text2_pane_t1

0x7b4d,	// (0x00016a4a) list_cset_text2_pane_t1_ParamLimits

0x7b4d,	// (0x00016a4a) list_cset_text2_pane_t1

0x94f2,	// (0x000183ef) main_radioblah_pane_ParamLimits

0x7872,	// (0x0001676f) main_mobtv_info_pane_t3_ParamLimits

0x7872,	// (0x0001676f) main_mobtv_info_pane_t3

0x7a0b,	// (0x00016908) main_radioblah_pane_g1

0x7a45,	// (0x00016942) main_radioblah_info_pane_g1

0x7aca,	// (0x000169c7) main_radioblah_info_pane_t3_ParamLimits

0x7aca,	// (0x000169c7) main_radioblah_info_pane_t3

0x22fe,	// (0x000111fb) highlight_cell_cale_month_pane_ParamLimits

0x22fe,	// (0x000111fb) highlight_cell_cale_month_pane

0x9482,	// (0x0001837f) main_phob_fisheye_pane

0xc6f9,	// (0x0001b5f6) scroll_pane_cp0031_ParamLimits

0xc6f9,	// (0x0001b5f6) scroll_pane_cp0031

0xdbdb,	// (0x0001cad8) wait_bar_pane_cp08_ParamLimits

0x7284,	// (0x00016181) cset_list_set_pane_copy1_ParamLimits

0xe2f3,	// (0x0001d1f0) highlight_cell_cale_month_pane_g1

0x7b66,	// (0x00016a63) highlight_cell_cale_month_pane_t1

0xd7d2,	// (0x0001c6cf) list_gen_pane_cp01

0xd30a,	// (0x0001c207) scroll_pane_01

0xe2fb,	// (0x0001d1f8) list_single_double_fisheye_pane

0x7b74,	// (0x00016a71) list_double_fisheye_pane_g1_ParamLimits

0x7b74,	// (0x00016a71) list_double_fisheye_pane_g1

0x7b80,	// (0x00016a7d) list_double_fisheye_pane_g2_ParamLimits

0x7b80,	// (0x00016a7d) list_double_fisheye_pane_g2

0x7b94,	// (0x00016a91) list_double_fisheye_pane_g3_ParamLimits

0x7b94,	// (0x00016a91) list_double_fisheye_pane_g3

0x0004,

0xfca9,	// (0x0001eba6) list_double_fisheye_pane_g_ParamLimits

0xfca9,	// (0x0001eba6) list_double_fisheye_pane_g

0x7bbd,	// (0x00016aba) list_double_fisheye_pane_t1_ParamLimits

0x7bbd,	// (0x00016aba) list_double_fisheye_pane_t1

0x7bd8,	// (0x00016ad5) list_double_fisheye_pane_t2_ParamLimits

0x7bd8,	// (0x00016ad5) list_double_fisheye_pane_t2

0x0001,

0xfcb4,	// (0x0001ebb1) list_double_fisheye_pane_t_ParamLimits

0xfcb4,	// (0x0001ebb1) list_double_fisheye_pane_t

0x9482,	// (0x0001837f) main_call5_pane

0x7969,	// (0x00016866) sc_swipe_pane_ParamLimits

0x7969,	// (0x00016866) sc_swipe_pane

0x7c0d,	// (0x00016b0a) call5_image_pane_ParamLimits

0x7c0d,	// (0x00016b0a) call5_image_pane

0x7c2a,	// (0x00016b27) call5_swipe_1_pane_ParamLimits

0x7c2a,	// (0x00016b27) call5_swipe_1_pane

0x7c3d,	// (0x00016b3a) call5_swipe_2_pane_ParamLimits

0x7c3d,	// (0x00016b3a) call5_swipe_2_pane

0x7c68,	// (0x00016b65) popup_call5_audio_first_window_ParamLimits

0x7c68,	// (0x00016b65) popup_call5_audio_first_window

0xc5f1,	// (0x0001b4ee) call5_swipe_1_pane_g1_ParamLimits

0xc5f1,	// (0x0001b4ee) call5_swipe_1_pane_g1

0xe304,	// (0x0001d201) call5_swipe_1_pane_g2_ParamLimits

0xe304,	// (0x0001d201) call5_swipe_1_pane_g2

0x0001,

0xfcb9,	// (0x0001ebb6) call5_swipe_1_pane_g_ParamLimits

0xfcb9,	// (0x0001ebb6) call5_swipe_1_pane_g

0xe310,	// (0x0001d20d) call5_swipe_1_pane_t1_ParamLimits

0xe310,	// (0x0001d20d) call5_swipe_1_pane_t1

0xc5f1,	// (0x0001b4ee) call5_swipe_2_pane_g1_ParamLimits

0xc5f1,	// (0x0001b4ee) call5_swipe_2_pane_g1

0xe325,	// (0x0001d222) call5_swipe_2_pane_g2_ParamLimits

0xe325,	// (0x0001d222) call5_swipe_2_pane_g2

0x0001,

0xfcbe,	// (0x0001ebbb) call5_swipe_2_pane_g_ParamLimits

0xfcbe,	// (0x0001ebbb) call5_swipe_2_pane_g

0xe331,	// (0x0001d22e) call5_swipe_2_pane_t1_ParamLimits

0xe331,	// (0x0001d22e) call5_swipe_2_pane_t1

0xe346,	// (0x0001d243) sc_swipe_pane_g1_ParamLimits

0xe346,	// (0x0001d243) sc_swipe_pane_g1

0xe353,	// (0x0001d250) sc_swipe_pane_g2_ParamLimits

0xe353,	// (0x0001d250) sc_swipe_pane_g2

0x0001,

0xfcc3,	// (0x0001ebc0) sc_swipe_pane_g_ParamLimits

0xfcc3,	// (0x0001ebc0) sc_swipe_pane_g

0xe35f,	// (0x0001d25c) sc_swipe_pane_t1_ParamLimits

0xe35f,	// (0x0001d25c) sc_swipe_pane_t1

0x9482,	// (0x0001837f) main_cmail_launcher_pane

0x7c79,	// (0x00016b76) aid_size_cell_cmail_l_ParamLimits

0x7c79,	// (0x00016b76) aid_size_cell_cmail_l

0x7c93,	// (0x00016b90) grid_cmail_l_pane_ParamLimits

0x7c93,	// (0x00016b90) grid_cmail_l_pane

0x7cae,	// (0x00016bab) cell_cmail_l_pane_ParamLimits

0x7cae,	// (0x00016bab) cell_cmail_l_pane

0x7cd4,	// (0x00016bd1) cell_cmail_l_pane_g1_ParamLimits

0x7cd4,	// (0x00016bd1) cell_cmail_l_pane_g1

0x7ce0,	// (0x00016bdd) cell_cmail_l_pane_t1_ParamLimits

0x7ce0,	// (0x00016bdd) cell_cmail_l_pane_t1

0xe374,	// (0x0001d271) cell_cmail_l_pane_t2_ParamLimits

0xe374,	// (0x0001d271) cell_cmail_l_pane_t2

0x0001,

0xfcc8,	// (0x0001ebc5) cell_cmail_l_pane_t_ParamLimits

0xfcc8,	// (0x0001ebc5) cell_cmail_l_pane_t

0x94f2,	// (0x000183ef) grid_highlight_pane_cp018_ParamLimits

0x94f2,	// (0x000183ef) grid_highlight_pane_cp018

0x027f,	// (0x0000f17c) main2_pane_ParamLimits

0x027f,	// (0x0000f17c) main2_pane

0x9d12,	// (0x00018c0f) popup_sp_fs_action_menu_bg_pane_g1

0x9d1a,	// (0x00018c17) popup_sp_fs_action_menu_bg_pane_g2

0x9d22,	// (0x00018c1f) popup_sp_fs_action_menu_bg_pane_g3

0x9d2a,	// (0x00018c27) popup_sp_fs_action_menu_bg_pane_g4

0x9d32,	// (0x00018c2f) popup_sp_fs_action_menu_bg_pane_g5

0x9d3a,	// (0x00018c37) popup_sp_fs_action_menu_bg_pane_g6

0x9d42,	// (0x00018c3f) popup_sp_fs_action_menu_bg_pane_g7

0x9d4a,	// (0x00018c47) popup_sp_fs_action_menu_bg_pane_g8

0x9d52,	// (0x00018c4f) popup_sp_fs_action_menu_bg_pane_g9

0x9d5a,	// (0x00018c57) popup_sp_fs_action_menu_bg_pane_g10

0x9d5a,	// (0x00018c57) popup_sp_fs_action_menu_bg_pane_g11

0x000a,

0xf18a,	// (0x0001e087) popup_sp_fs_action_menu_bg_pane_g

0x1271,	// (0x0001016e) list_medium_line_x2_t3_g3_g1_ParamLimits

0x1271,	// (0x0001016e) list_medium_line_x2_t3_g3_g1

0x127d,	// (0x0001017a) list_medium_line_x2_t3_g3_g2_ParamLimits

0x127d,	// (0x0001017a) list_medium_line_x2_t3_g3_g2

0x1289,	// (0x00010186) list_medium_line_x2_t3_g3_g3_ParamLimits

0x1289,	// (0x00010186) list_medium_line_x2_t3_g3_g3

0x0002,

0xf238,	// (0x0001e135) list_medium_line_x2_t3_g3_g_ParamLimits

0xf238,	// (0x0001e135) list_medium_line_x2_t3_g3_g

0x1295,	// (0x00010192) list_medium_line_x2_t3_g3_t1_ParamLimits

0x1295,	// (0x00010192) list_medium_line_x2_t3_g3_t1

0x12aa,	// (0x000101a7) list_medium_line_x2_t3_g3_t2_ParamLimits

0x12aa,	// (0x000101a7) list_medium_line_x2_t3_g3_t2

0x12be,	// (0x000101bb) list_medium_line_x2_t3_g3_t3_ParamLimits

0x12be,	// (0x000101bb) list_medium_line_x2_t3_g3_t3

0x0002,

0xf23f,	// (0x0001e13c) list_medium_line_x2_t3_g3_t_ParamLimits

0xf23f,	// (0x0001e13c) list_medium_line_x2_t3_g3_t

0x1271,	// (0x0001016e) list_medium_line_x2_t3_g2_g1_ParamLimits

0x1271,	// (0x0001016e) list_medium_line_x2_t3_g2_g1

0x1289,	// (0x00010186) list_medium_line_x2_t3_g2_g2_ParamLimits

0x1289,	// (0x00010186) list_medium_line_x2_t3_g2_g2

0x0001,

0xf246,	// (0x0001e143) list_medium_line_x2_t3_g2_g_ParamLimits

0xf246,	// (0x0001e143) list_medium_line_x2_t3_g2_g

0x12d3,	// (0x000101d0) list_medium_line_x2_t3_g2_t1_ParamLimits

0x12d3,	// (0x000101d0) list_medium_line_x2_t3_g2_t1

0x12e9,	// (0x000101e6) list_medium_line_x2_t3_g2_t2_ParamLimits

0x12e9,	// (0x000101e6) list_medium_line_x2_t3_g2_t2

0x12fb,	// (0x000101f8) list_medium_line_x2_t3_g2_t3_ParamLimits

0x12fb,	// (0x000101f8) list_medium_line_x2_t3_g2_t3

0x0002,

0xf24b,	// (0x0001e148) list_medium_line_x2_t3_g2_t_ParamLimits

0xf24b,	// (0x0001e148) list_medium_line_x2_t3_g2_t

0x1271,	// (0x0001016e) list_medium_line_x2_t4_g4_g1_ParamLimits

0x1271,	// (0x0001016e) list_medium_line_x2_t4_g4_g1

0x1318,	// (0x00010215) list_medium_line_x2_t4_g4_g2_ParamLimits

0x1318,	// (0x00010215) list_medium_line_x2_t4_g4_g2

0x127d,	// (0x0001017a) list_medium_line_x2_t4_g4_g3_ParamLimits

0x127d,	// (0x0001017a) list_medium_line_x2_t4_g4_g3

0x1324,	// (0x00010221) list_medium_line_x2_t4_g4_g4_ParamLimits

0x1324,	// (0x00010221) list_medium_line_x2_t4_g4_g4

0x0003,

0xf252,	// (0x0001e14f) list_medium_line_x2_t4_g4_g_ParamLimits

0xf252,	// (0x0001e14f) list_medium_line_x2_t4_g4_g

0x1330,	// (0x0001022d) list_medium_line_x2_t4_g4_t1_ParamLimits

0x1330,	// (0x0001022d) list_medium_line_x2_t4_g4_t1

0x1347,	// (0x00010244) list_medium_line_x2_t4_g4_t2_ParamLimits

0x1347,	// (0x00010244) list_medium_line_x2_t4_g4_t2

0x135c,	// (0x00010259) list_medium_line_x2_t4_g4_t3_ParamLimits

0x135c,	// (0x00010259) list_medium_line_x2_t4_g4_t3

0x136e,	// (0x0001026b) list_medium_line_x2_t4_g4_t4_ParamLimits

0x136e,	// (0x0001026b) list_medium_line_x2_t4_g4_t4

0x0003,

0xf25b,	// (0x0001e158) list_medium_line_x2_t4_g4_t_ParamLimits

0xf25b,	// (0x0001e158) list_medium_line_x2_t4_g4_t

0x1271,	// (0x0001016e) list_medium_line_x2_t2_g4_g1_ParamLimits

0x1271,	// (0x0001016e) list_medium_line_x2_t2_g4_g1

0x1318,	// (0x00010215) list_medium_line_x2_t2_g4_g2_ParamLimits

0x1318,	// (0x00010215) list_medium_line_x2_t2_g4_g2

0x127d,	// (0x0001017a) list_medium_line_x2_t2_g4_g3_ParamLimits

0x127d,	// (0x0001017a) list_medium_line_x2_t2_g4_g3

0x1289,	// (0x00010186) list_medium_line_x2_t2_g4_g4_ParamLimits

0x1289,	// (0x00010186) list_medium_line_x2_t2_g4_g4

0x0003,

0xf2c2,	// (0x0001e1bf) list_medium_line_x2_t2_g4_g_ParamLimits

0xf2c2,	// (0x0001e1bf) list_medium_line_x2_t2_g4_g

0x2324,	// (0x00011221) list_medium_line_x2_t2_g4_t1_ParamLimits

0x2324,	// (0x00011221) list_medium_line_x2_t2_g4_t1

0x12be,	// (0x000101bb) list_medium_line_x2_t2_g4_t2_ParamLimits

0x12be,	// (0x000101bb) list_medium_line_x2_t2_g4_t2

0x0001,

0xf2cb,	// (0x0001e1c8) list_medium_line_x2_t2_g4_t_ParamLimits

0xf2cb,	// (0x0001e1c8) list_medium_line_x2_t2_g4_t

0x1271,	// (0x0001016e) list_medium_line_x2_t2_g3_g1_ParamLimits

0x1271,	// (0x0001016e) list_medium_line_x2_t2_g3_g1

0x127d,	// (0x0001017a) list_medium_line_x2_t2_g3_g2_ParamLimits

0x127d,	// (0x0001017a) list_medium_line_x2_t2_g3_g2

0x1289,	// (0x00010186) list_medium_line_x2_t2_g3_g3_ParamLimits

0x1289,	// (0x00010186) list_medium_line_x2_t2_g3_g3

0x0002,

0xf238,	// (0x0001e135) list_medium_line_x2_t2_g3_g_ParamLimits

0xf238,	// (0x0001e135) list_medium_line_x2_t2_g3_g

0x2339,	// (0x00011236) list_medium_line_x2_t2_g3_t1_ParamLimits

0x2339,	// (0x00011236) list_medium_line_x2_t2_g3_t1

0x12be,	// (0x000101bb) list_medium_line_x2_t2_g3_t2_ParamLimits

0x12be,	// (0x000101bb) list_medium_line_x2_t2_g3_t2

0x0001,

0xf2d0,	// (0x0001e1cd) list_medium_line_x2_t2_g3_t_ParamLimits

0xf2d0,	// (0x0001e1cd) list_medium_line_x2_t2_g3_t

0x2482,	// (0x0001137f) main_sp_fs_list_pane_ParamLimits

0x2482,	// (0x0001137f) main_sp_fs_list_pane

0xd295,	// (0x0001c192) sp_fs_scroll_pane_ParamLimits

0xd295,	// (0x0001c192) sp_fs_scroll_pane

0x248e,	// (0x0001138b) list_medium_line_x2_t3_t1

0x249e,	// (0x0001139b) list_medium_line_x2_t3_t2

0x24ac,	// (0x000113a9) list_medium_line_x2_t3_t3

0x0002,

0xf31b,	// (0x0001e218) list_medium_line_x2_t3_t

0x24ba,	// (0x000113b7) list_medium_line_x3_t4_t1

0x24ca,	// (0x000113c7) list_medium_line_x3_t4_t2

0x24d8,	// (0x000113d5) list_medium_line_x3_t4_t3

0x24ac,	// (0x000113a9) list_medium_line_x3_t4_t4

0x0003,

0xf322,	// (0x0001e21f) list_medium_line_x3_t4_t

0x24e6,	// (0x000113e3) list_medium_line_x4_t5_t1

0x24f6,	// (0x000113f3) list_medium_line_x4_t5_t2

0x24d8,	// (0x000113d5) list_medium_line_x4_t5_t3

0x2504,	// (0x00011401) list_medium_line_x4_t5_t4

0x24ac,	// (0x000113a9) list_medium_line_x4_t5_t5

0x0004,

0xf32b,	// (0x0001e228) list_medium_line_x4_t5_t

0x1271,	// (0x0001016e) list_medium_line_t4_g4_g1_ParamLimits

0x1271,	// (0x0001016e) list_medium_line_t4_g4_g1

0x2512,	// (0x0001140f) list_medium_line_t4_g4_g2_ParamLimits

0x2512,	// (0x0001140f) list_medium_line_t4_g4_g2

0x251e,	// (0x0001141b) list_medium_line_t4_g4_g3_ParamLimits

0x251e,	// (0x0001141b) list_medium_line_t4_g4_g3

0x1289,	// (0x00010186) list_medium_line_t4_g4_g4_ParamLimits

0x1289,	// (0x00010186) list_medium_line_t4_g4_g4

0x0003,

0xf336,	// (0x0001e233) list_medium_line_t4_g4_g_ParamLimits

0xf336,	// (0x0001e233) list_medium_line_t4_g4_g

0x252a,	// (0x00011427) list_medium_line_t4_g4_t1_ParamLimits

0x252a,	// (0x00011427) list_medium_line_t4_g4_t1

0x253f,	// (0x0001143c) list_medium_line_t4_g4_t2_ParamLimits

0x253f,	// (0x0001143c) list_medium_line_t4_g4_t2

0x2554,	// (0x00011451) list_medium_line_t4_g4_t3_ParamLimits

0x2554,	// (0x00011451) list_medium_line_t4_g4_t3

0x12be,	// (0x000101bb) list_medium_line_t4_g4_t4_ParamLimits

0x12be,	// (0x000101bb) list_medium_line_t4_g4_t4

0x0003,

0xf33f,	// (0x0001e23c) list_medium_line_t4_g4_t_ParamLimits

0xf33f,	// (0x0001e23c) list_medium_line_t4_g4_t

0x261c,	// (0x00011519) chi_dic_find_pane_g1

0x362c,	// (0x00012529) main_tport_pane

0x65b8,	// (0x000154b5) list_medium_line_plain_t1

0x6660,	// (0x0001555d) list_medium_line_t2_g2_g1_ParamLimits

0x6660,	// (0x0001555d) list_medium_line_t2_g2_g1

0x666c,	// (0x00015569) list_medium_line_t2_g2_g2_ParamLimits

0x666c,	// (0x00015569) list_medium_line_t2_g2_g2

0x0001,

0xfa00,	// (0x0001e8fd) list_medium_line_t2_g2_g_ParamLimits

0xfa00,	// (0x0001e8fd) list_medium_line_t2_g2_g

0x6678,	// (0x00015575) list_medium_line_t2_g2_t1_ParamLimits

0x6678,	// (0x00015575) list_medium_line_t2_g2_t1

0x6692,	// (0x0001558f) list_medium_line_t2_g2_t2_ParamLimits

0x6692,	// (0x0001558f) list_medium_line_t2_g2_t2

0x0001,

0xfa05,	// (0x0001e902) list_medium_line_t2_g2_t_ParamLimits

0xfa05,	// (0x0001e902) list_medium_line_t2_g2_t

0xd845,	// (0x0001c742) aid_sp_fs_list_icon_a_sm

0xd84d,	// (0x0001c74a) aid_sp_fs_list_icon_d

0xd855,	// (0x0001c752) aid_sp_fs_text_primary

0xd85e,	// (0x0001c75b) aid_sp_fs_text_secondary

0x6cfd,	// (0x00015bfa) list_medium_line

0x6cfd,	// (0x00015bfa) list_medium_line_g2

0x6cfd,	// (0x00015bfa) list_medium_line_g3

0x6cfd,	// (0x00015bfa) list_medium_line_plain

0x6cfd,	// (0x00015bfa) list_medium_line_plain_t2

0x6cfd,	// (0x00015bfa) list_medium_line_plain_t3

0x6cfd,	// (0x00015bfa) list_medium_line_right_icon

0x6cfd,	// (0x00015bfa) list_medium_line_right_iconx2

0x6cfd,	// (0x00015bfa) list_medium_line_t2

0x6cfd,	// (0x00015bfa) list_medium_line_t2_g2

0x6cfd,	// (0x00015bfa) list_medium_line_t2_g3

0x6cfd,	// (0x00015bfa) list_medium_line_t2_right_icon

0x6cfd,	// (0x00015bfa) list_medium_line_t2_right_iconx2

0x6cfd,	// (0x00015bfa) list_medium_line_t3

0x6cfd,	// (0x00015bfa) list_medium_line_t3_g2

0x6cfd,	// (0x00015bfa) list_medium_line_t3_g3

0x6cfd,	// (0x00015bfa) list_medium_line_t3_right_iconx2

0x6d06,	// (0x00015c03) list_medium_line_t4_g4

0x6d0f,	// (0x00015c0c) list_medium_line_x2

0x6d0f,	// (0x00015c0c) list_medium_line_x2_t2_g2

0x6d0f,	// (0x00015c0c) list_medium_line_x2_t2_g3

0x6d0f,	// (0x00015c0c) list_medium_line_x2_t2_g4

0x6d0f,	// (0x00015c0c) list_medium_line_x2_t3

0x6d0f,	// (0x00015c0c) list_medium_line_x2_t3_g2

0x6d0f,	// (0x00015c0c) list_medium_line_x2_t3_g3

0x6d0f,	// (0x00015c0c) list_medium_line_x2_t3_g4

0x6d0f,	// (0x00015c0c) list_medium_line_x2_t4_g2

0x6d0f,	// (0x00015c0c) list_medium_line_x2_t4_g4

0x6d18,	// (0x00015c15) list_medium_line_x3

0x6d18,	// (0x00015c15) list_medium_line_x3_t4

0x6d18,	// (0x00015c15) list_medium_line_x3_t4_g4

0x6d06,	// (0x00015c03) list_medium_line_x4_t4

0x6d06,	// (0x00015c03) list_medium_line_x4_t4_g7

0x6d06,	// (0x00015c03) list_medium_line_x4_t5

0x6d21,	// (0x00015c1e) list_single_fs_dyc_pane_ParamLimits

0x6d21,	// (0x00015c1e) list_single_fs_dyc_pane

0x1271,	// (0x0001016e) list_medium_line_x4_t4_g7_g1_ParamLimits

0x1271,	// (0x0001016e) list_medium_line_x4_t4_g7_g1

0x747d,	// (0x0001637a) list_medium_line_x4_t4_g7_g2_ParamLimits

0x747d,	// (0x0001637a) list_medium_line_x4_t4_g7_g2

0x7489,	// (0x00016386) list_medium_line_x4_t4_g7_g3_ParamLimits

0x7489,	// (0x00016386) list_medium_line_x4_t4_g7_g3

0x7498,	// (0x00016395) list_medium_line_x4_t4_g7_g4_ParamLimits

0x7498,	// (0x00016395) list_medium_line_x4_t4_g7_g4

0x74a4,	// (0x000163a1) list_medium_line_x4_t4_g7_g5_ParamLimits

0x74a4,	// (0x000163a1) list_medium_line_x4_t4_g7_g5

0x74b3,	// (0x000163b0) list_medium_line_x4_t4_g7_g6_ParamLimits

0x74b3,	// (0x000163b0) list_medium_line_x4_t4_g7_g6

0x74c2,	// (0x000163bf) list_medium_line_x4_t4_g7_g7_ParamLimits

0x74c2,	// (0x000163bf) list_medium_line_x4_t4_g7_g7

0x0006,

0xfbd0,	// (0x0001eacd) list_medium_line_x4_t4_g7_g_ParamLimits

0xfbd0,	// (0x0001eacd) list_medium_line_x4_t4_g7_g

0x74ce,	// (0x000163cb) list_medium_line_x4_t4_g7_t1_ParamLimits

0x74ce,	// (0x000163cb) list_medium_line_x4_t4_g7_t1

0x74e3,	// (0x000163e0) list_medium_line_x4_t4_g7_t2_ParamLimits

0x74e3,	// (0x000163e0) list_medium_line_x4_t4_g7_t2

0x74f8,	// (0x000163f5) list_medium_line_x4_t4_g7_t3_ParamLimits

0x74f8,	// (0x000163f5) list_medium_line_x4_t4_g7_t3

0x750d,	// (0x0001640a) list_medium_line_x4_t4_g7_t4_ParamLimits

0x750d,	// (0x0001640a) list_medium_line_x4_t4_g7_t4

0x751f,	// (0x0001641c) list_medium_line_x4_t4_g7_t5_ParamLimits

0x751f,	// (0x0001641c) list_medium_line_x4_t4_g7_t5

0x0004,

0xfbdf,	// (0x0001eadc) list_medium_line_x4_t4_g7_t_ParamLimits

0xfbdf,	// (0x0001eadc) list_medium_line_x4_t4_g7_t

0x7531,	// (0x0001642e) list_single_dyc_row_pane_ParamLimits

0x7531,	// (0x0001642e) list_single_dyc_row_pane

0x7bfa,	// (0x00016af7) call5_gesture_pane_ParamLimits

0x7bfa,	// (0x00016af7) call5_gesture_pane

0x7c50,	// (0x00016b4d) call5_windows_pane_ParamLimits

0x7c50,	// (0x00016b4d) call5_windows_pane

0x7cf6,	// (0x00016bf3) call5_swipe_1_pane_cp_ParamLimits

0x7cf6,	// (0x00016bf3) call5_swipe_1_pane_cp

0x7d02,	// (0x00016bff) call5_swipe_2_pane_cp_ParamLimits

0x7d02,	// (0x00016bff) call5_swipe_2_pane_cp

0x9e86,	// (0x00018d83) call5_image_pane_cp

0x7d0e,	// (0x00016c0b) popup_call5_audio_first_window_cp_ParamLimits

0x7d0e,	// (0x00016c0b) popup_call5_audio_first_window_cp

0xe346,	// (0x0001d243) call5_swipe_1_pane_g1_cp_ParamLimits

0xe346,	// (0x0001d243) call5_swipe_1_pane_g1_cp

0xe386,	// (0x0001d283) call5_swipe_1_pane_g2_cp

0xe35f,	// (0x0001d25c) call5_swipe_1_pane_t1_cp_ParamLimits

0xe35f,	// (0x0001d25c) call5_swipe_1_pane_t1_cp

0xe346,	// (0x0001d243) call5_swipe_2_pane_g1_cp_ParamLimits

0xe346,	// (0x0001d243) call5_swipe_2_pane_g1_cp

0xe38e,	// (0x0001d28b) call5_swipe_2_pane_g2_cp

0xe396,	// (0x0001d293) call5_swipe_2_pane_t1_cp_ParamLimits

0xe396,	// (0x0001d293) call5_swipe_2_pane_t1_cp

0x94f2,	// (0x000183ef) main_sp_fs_email_pane

0xe3ab,	// (0x0001d2a8) main_sp_fs_listscroll_pane_te

0x7d1c,	// (0x00016c19) popup_sp_fs_action_menu_pane_ParamLimits

0x7d1c,	// (0x00016c19) popup_sp_fs_action_menu_pane

0xc385,	// (0x0001b282) bg_sp_fs_ctrlbar_pane_g1

0xe3b4,	// (0x0001d2b1) bg_sp_fs_ctrlbar_ddmenu_pane_g1

0xe3bd,	// (0x0001d2ba) bg_sp_fs_ctrlbar_ddmenu_pane_g2

0xe3c6,	// (0x0001d2c3) bg_sp_fs_ctrlbar_ddmenu_pane_g3

0xc385,	// (0x0001b282) bg_sp_fs_ctrlbar_ddmenu_pane_g4

0x0003,

0xfccd,	// (0x0001ebca) bg_sp_fs_ctrlbar_ddmenu_pane_g

0xc16a,	// (0x0001b067) bg_sp_fs_ctrlbar_ddmenu_pane_ParamLimits

0xc16a,	// (0x0001b067) bg_sp_fs_ctrlbar_ddmenu_pane

0xe3cf,	// (0x0001d2cc) main_sp_fs_ctrlbar_ddmenu_pane_g1_ParamLimits

0xe3cf,	// (0x0001d2cc) main_sp_fs_ctrlbar_ddmenu_pane_g1

0xe3db,	// (0x0001d2d8) main_sp_fs_ctrlbar_ddmenu_pane_g2_ParamLimits

0xe3db,	// (0x0001d2d8) main_sp_fs_ctrlbar_ddmenu_pane_g2

0x0001,

0xfcd6,	// (0x0001ebd3) main_sp_fs_ctrlbar_ddmenu_pane_g_ParamLimits

0xfcd6,	// (0x0001ebd3) main_sp_fs_ctrlbar_ddmenu_pane_g

0xe3e7,	// (0x0001d2e4) main_sp_fs_ctrlbar_ddmenu_pane_t1_ParamLimits

0xe3e7,	// (0x0001d2e4) main_sp_fs_ctrlbar_ddmenu_pane_t1

0x7d60,	// (0x00016c5d) list_medium_line_t2_right_icon_g1

0x7d68,	// (0x00016c65) list_medium_line_t2_right_icon_t1

0x7d78,	// (0x00016c75) list_medium_line_t2_right_icon_t2

0x0001,

0xfcdb,	// (0x0001ebd8) list_medium_line_t2_right_icon_t

0xbe6a,	// (0x0001ad67) bg_sp_fs_ctrlbar_pane_ParamLimits

0xbe6a,	// (0x0001ad67) bg_sp_fs_ctrlbar_pane

0x7dd2,	// (0x00016ccf) main_sp_fs_ctrlbar_button_pane_cp01

0x7ddc,	// (0x00016cd9) main_sp_fs_ctrlbar_ddmenu_pane

0xe439,	// (0x0001d336) main_sp_fs_ctrlbar_pane_g1

0xe445,	// (0x0001d342) main_sp_fs_ctrlbar_pane_g2

0x0001,

0xfce0,	// (0x0001ebdd) main_sp_fs_ctrlbar_pane_g

0xe451,	// (0x0001d34e) main_sp_fs_ctrlbar_pane_t1

0x7de6,	// (0x00016ce3) main_sp_fs_ctrlbar_pane

0x7e0a,	// (0x00016d07) main_sp_fs_listscroll_pane_te_cp01

0x7e2a,	// (0x00016d27) popup_sp_fs_action_menu_pane_cp01_ParamLimits

0x7e2a,	// (0x00016d27) popup_sp_fs_action_menu_pane_cp01

0x94f2,	// (0x000183ef) bg_sp_fs_highlight_list_pane_cp01_ParamLimits

0x94f2,	// (0x000183ef) bg_sp_fs_highlight_list_pane_cp01

0xe481,	// (0x0001d37e) sp_fs_action_menu_list_gene_pane_g1_ParamLimits

0xe481,	// (0x0001d37e) sp_fs_action_menu_list_gene_pane_g1

0xe490,	// (0x0001d38d) sp_fs_action_menu_list_gene_pane_g2_ParamLimits

0xe490,	// (0x0001d38d) sp_fs_action_menu_list_gene_pane_g2

0x0001,

0xfcea,	// (0x0001ebe7) sp_fs_action_menu_list_gene_pane_g_ParamLimits

0xfcea,	// (0x0001ebe7) sp_fs_action_menu_list_gene_pane_g

0xe49d,	// (0x0001d39a) sp_fs_action_menu_list_gene_pane_t1_ParamLimits

0xe49d,	// (0x0001d39a) sp_fs_action_menu_list_gene_pane_t1

0xe4b5,	// (0x0001d3b2) sp_fs_action_menu_list_gene_pane_ParamLimits

0xe4b5,	// (0x0001d3b2) sp_fs_action_menu_list_gene_pane

0xe4d6,	// (0x0001d3d3) popup_sp_fs_action_menu_bg_pane_ParamLimits

0xe4d6,	// (0x0001d3d3) popup_sp_fs_action_menu_bg_pane

0xe4e4,	// (0x0001d3e1) sp_fs_action_menu_list_pane_ParamLimits

0xe4e4,	// (0x0001d3e1) sp_fs_action_menu_list_pane

0x7e5a,	// (0x00016d57) sp_fs_scroll_pane_cp01_ParamLimits

0x7e5a,	// (0x00016d57) sp_fs_scroll_pane_cp01

0x7e80,	// (0x00016d7d) list_medium_line_plain_t2_t1

0x7e90,	// (0x00016d8d) list_medium_line_plain_t2_t2

0x0001,

0xfcef,	// (0x0001ebec) list_medium_line_plain_t2_t

0x7ea0,	// (0x00016d9d) list_medium_line_plain_t3_t1

0x7eb0,	// (0x00016dad) list_medium_line_plain_t3_t2

0x7ebe,	// (0x00016dbb) list_medium_line_plain_t3_t3

0x0002,

0xfcf4,	// (0x0001ebf1) list_medium_line_plain_t3_t

0x1271,	// (0x0001016e) list_medium_line_x2_t2_g2_g1_ParamLimits

0x1271,	// (0x0001016e) list_medium_line_x2_t2_g2_g1

0x1289,	// (0x00010186) list_medium_line_x2_t2_g2_g2_ParamLimits

0x1289,	// (0x00010186) list_medium_line_x2_t2_g2_g2

0x0001,

0xf246,	// (0x0001e143) list_medium_line_x2_t2_g2_g_ParamLimits

0xf246,	// (0x0001e143) list_medium_line_x2_t2_g2_g

0x252a,	// (0x00011427) list_medium_line_x2_t2_g2_t1_ParamLimits

0x252a,	// (0x00011427) list_medium_line_x2_t2_g2_t1

0x12be,	// (0x000101bb) list_medium_line_x2_t2_g2_t2_ParamLimits

0x12be,	// (0x000101bb) list_medium_line_x2_t2_g2_t2

0x0001,

0xfcfb,	// (0x0001ebf8) list_medium_line_x2_t2_g2_t_ParamLimits

0xfcfb,	// (0x0001ebf8) list_medium_line_x2_t2_g2_t

0x1271,	// (0x0001016e) list_medium_line_x2_t4_g2_g1_ParamLimits

0x1271,	// (0x0001016e) list_medium_line_x2_t4_g2_g1

0x1289,	// (0x00010186) list_medium_line_x2_t4_g2_g2_ParamLimits

0x1289,	// (0x00010186) list_medium_line_x2_t4_g2_g2

0x0001,

0xf246,	// (0x0001e143) list_medium_line_x2_t4_g2_g_ParamLimits

0xf246,	// (0x0001e143) list_medium_line_x2_t4_g2_g

0x7ecc,	// (0x00016dc9) list_medium_line_x2_t4_g2_t1_ParamLimits

0x7ecc,	// (0x00016dc9) list_medium_line_x2_t4_g2_t1

0x7ee6,	// (0x00016de3) list_medium_line_x2_t4_g2_t2_ParamLimits

0x7ee6,	// (0x00016de3) list_medium_line_x2_t4_g2_t2

0x7efc,	// (0x00016df9) list_medium_line_x2_t4_g2_t3_ParamLimits

0x7efc,	// (0x00016df9) list_medium_line_x2_t4_g2_t3

0x12be,	// (0x000101bb) list_medium_line_x2_t4_g2_t4_ParamLimits

0x12be,	// (0x000101bb) list_medium_line_x2_t4_g2_t4

0x0003,

0xfd00,	// (0x0001ebfd) list_medium_line_x2_t4_g2_t_ParamLimits

0xfd00,	// (0x0001ebfd) list_medium_line_x2_t4_g2_t

0x7f11,	// (0x00016e0e) list_medium_line_t3_right_iconx2_g1

0x7d60,	// (0x00016c5d) list_medium_line_t3_right_iconx2_g2

0x7f19,	// (0x00016e16) list_medium_line_t3_right_iconx2_g3

0x0002,

0xfd09,	// (0x0001ec06) list_medium_line_t3_right_iconx2_g

0x7f23,	// (0x00016e20) list_medium_line_t3_right_iconx2_t1

0x7f33,	// (0x00016e30) list_medium_line_t3_right_iconx2_t2

0x0001,

0xfd10,	// (0x0001ec0d) list_medium_line_t3_right_iconx2_t

0x1271,	// (0x0001016e) list_medium_line_x3_t4_g4_g1_ParamLimits

0x1271,	// (0x0001016e) list_medium_line_x3_t4_g4_g1

0x127d,	// (0x0001017a) list_medium_line_x3_t4_g4_g2_ParamLimits

0x127d,	// (0x0001017a) list_medium_line_x3_t4_g4_g2

0x2512,	// (0x0001140f) list_medium_line_x3_t4_g4_g3_ParamLimits

0x2512,	// (0x0001140f) list_medium_line_x3_t4_g4_g3

0x7f41,	// (0x00016e3e) list_medium_line_x3_t4_g4_g4_ParamLimits

0x7f41,	// (0x00016e3e) list_medium_line_x3_t4_g4_g4

0x0003,

0xfd15,	// (0x0001ec12) list_medium_line_x3_t4_g4_g_ParamLimits

0xfd15,	// (0x0001ec12) list_medium_line_x3_t4_g4_g

0x7f4d,	// (0x00016e4a) list_medium_line_x3_t4_g4_t1_ParamLimits

0x7f4d,	// (0x00016e4a) list_medium_line_x3_t4_g4_t1

0x7f64,	// (0x00016e61) list_medium_line_x3_t4_g4_t2_ParamLimits

0x7f64,	// (0x00016e61) list_medium_line_x3_t4_g4_t2

0x253f,	// (0x0001143c) list_medium_line_x3_t4_g4_t3_ParamLimits

0x253f,	// (0x0001143c) list_medium_line_x3_t4_g4_t3

0x7f7f,	// (0x00016e7c) list_medium_line_x3_t4_g4_t4_ParamLimits

0x7f7f,	// (0x00016e7c) list_medium_line_x3_t4_g4_t4

0x0003,

0xfd1e,	// (0x0001ec1b) list_medium_line_x3_t4_g4_t_ParamLimits

0xfd1e,	// (0x0001ec1b) list_medium_line_x3_t4_g4_t

0x7f9c,	// (0x00016e99) list_single_dyc_row_text_pane_t1_ParamLimits

0x7f9c,	// (0x00016e99) list_single_dyc_row_text_pane_t1

0x7fe5,	// (0x00016ee2) list_single_dyc_row_text_pane_t2_ParamLimits

0x7fe5,	// (0x00016ee2) list_single_dyc_row_text_pane_t2

0xe506,	// (0x0001d403) list_single_dyc_row_text_pane_t3_ParamLimits

0xe506,	// (0x0001d403) list_single_dyc_row_text_pane_t3

0x0005,

0xfd27,	// (0x0001ec24) list_single_dyc_row_text_pane_t_ParamLimits

0xfd27,	// (0x0001ec24) list_single_dyc_row_text_pane_t

0xe52a,	// (0x0001d427) list_single_dyc_row_pane_g1_ParamLimits

0xe52a,	// (0x0001d427) list_single_dyc_row_pane_g1

0xe536,	// (0x0001d433) list_single_dyc_row_pane_g2_ParamLimits

0xe536,	// (0x0001d433) list_single_dyc_row_pane_g2

0xe542,	// (0x0001d43f) list_single_dyc_row_pane_g3_ParamLimits

0xe542,	// (0x0001d43f) list_single_dyc_row_pane_g3

0xe54e,	// (0x0001d44b) list_single_dyc_row_pane_g4_ParamLimits

0xe54e,	// (0x0001d44b) list_single_dyc_row_pane_g4

0x0003,

0xfd34,	// (0x0001ec31) list_single_dyc_row_pane_g_ParamLimits

0xfd34,	// (0x0001ec31) list_single_dyc_row_pane_g

0xe55a,	// (0x0001d457) list_single_dyc_row_text_pane_ParamLimits

0xe55a,	// (0x0001d457) list_single_dyc_row_text_pane

0x9482,	// (0x0001837f) bg_sp_fs_scroll_pane

0xe579,	// (0x0001d476) thumb_sp_fs_scroll_pane

0x6660,	// (0x0001555d) list_medium_line_g1_ParamLimits

0x6660,	// (0x0001555d) list_medium_line_g1

0x811a,	// (0x00017017) list_medium_line_t1_ParamLimits

0x811a,	// (0x00017017) list_medium_line_t1

0x1271,	// (0x0001016e) list_medium_line_x2_g1_ParamLimits

0x1271,	// (0x0001016e) list_medium_line_x2_g1

0x127d,	// (0x0001017a) list_medium_line_x2_g2_ParamLimits

0x127d,	// (0x0001017a) list_medium_line_x2_g2

0x0001,

0xfd3d,	// (0x0001ec3a) list_medium_line_x2_g_ParamLimits

0xfd3d,	// (0x0001ec3a) list_medium_line_x2_g

0xe582,	// (0x0001d47f) list_medium_line_x2_t1_ParamLimits

0xe582,	// (0x0001d47f) list_medium_line_x2_t1

0x1271,	// (0x0001016e) list_medium_line_x3_g1_ParamLimits

0x1271,	// (0x0001016e) list_medium_line_x3_g1

0x127d,	// (0x0001017a) list_medium_line_x3_g2_ParamLimits

0x127d,	// (0x0001017a) list_medium_line_x3_g2

0x0001,

0xfd3d,	// (0x0001ec3a) list_medium_line_x3_g_ParamLimits

0xfd3d,	// (0x0001ec3a) list_medium_line_x3_g

0xe582,	// (0x0001d47f) list_medium_line_x3_t1_ParamLimits

0xe582,	// (0x0001d47f) list_medium_line_x3_t1

0xe598,	// (0x0001d495) thumb_sp_fs_scroll_pane_g1

0xe5a1,	// (0x0001d49e) thumb_sp_fs_scroll_pane_g2

0xe5aa,	// (0x0001d4a7) thumb_sp_fs_scroll_pane_g3

0x0002,

0xfd42,	// (0x0001ec3f) thumb_sp_fs_scroll_pane_g

0xe598,	// (0x0001d495) bg_sp_fs_scroll_pane_g1

0xe5a1,	// (0x0001d49e) bg_sp_fs_scroll_pane_g2

0xe5aa,	// (0x0001d4a7) bg_sp_fs_scroll_pane_g3

0x0002,

0xfd42,	// (0x0001ec3f) bg_sp_fs_scroll_pane_g

0x1271,	// (0x0001016e) list_medium_line_x2_t3_g4_g1_ParamLimits

0x1271,	// (0x0001016e) list_medium_line_x2_t3_g4_g1

0x1318,	// (0x00010215) list_medium_line_x2_t3_g4_g2_ParamLimits

0x1318,	// (0x00010215) list_medium_line_x2_t3_g4_g2

0x127d,	// (0x0001017a) list_medium_line_x2_t3_g4_g3_ParamLimits

0x127d,	// (0x0001017a) list_medium_line_x2_t3_g4_g3

0x1289,	// (0x00010186) list_medium_line_x2_t3_g4_g4_ParamLimits

0x1289,	// (0x00010186) list_medium_line_x2_t3_g4_g4

0x0003,

0xf2c2,	// (0x0001e1bf) list_medium_line_x2_t3_g4_g_ParamLimits

0xf2c2,	// (0x0001e1bf) list_medium_line_x2_t3_g4_g

0x812f,	// (0x0001702c) list_medium_line_x2_t3_g4_t1_ParamLimits

0x812f,	// (0x0001702c) list_medium_line_x2_t3_g4_t1

0x8149,	// (0x00017046) list_medium_line_x2_t3_g4_t2_ParamLimits

0x8149,	// (0x00017046) list_medium_line_x2_t3_g4_t2

0x12be,	// (0x000101bb) list_medium_line_x2_t3_g4_t3_ParamLimits

0x12be,	// (0x000101bb) list_medium_line_x2_t3_g4_t3

0x0002,

0xfd49,	// (0x0001ec46) list_medium_line_x2_t3_g4_t_ParamLimits

0xfd49,	// (0x0001ec46) list_medium_line_x2_t3_g4_t

0x6660,	// (0x0001555d) list_medium_line_g2_g1_ParamLimits

0x6660,	// (0x0001555d) list_medium_line_g2_g1

0x666c,	// (0x00015569) list_medium_line_g2_g2_ParamLimits

0x666c,	// (0x00015569) list_medium_line_g2_g2

0x0001,

0xfa00,	// (0x0001e8fd) list_medium_line_g2_g_ParamLimits

0xfa00,	// (0x0001e8fd) list_medium_line_g2_g

0x8162,	// (0x0001705f) list_medium_line_g2_t1_ParamLimits

0x8162,	// (0x0001705f) list_medium_line_g2_t1

0x6660,	// (0x0001555d) list_medium_line_t3_g2_g1_ParamLimits

0x6660,	// (0x0001555d) list_medium_line_t3_g2_g1

0x666c,	// (0x00015569) list_medium_line_t3_g2_g2_ParamLimits

0x666c,	// (0x00015569) list_medium_line_t3_g2_g2

0x0001,

0xfa00,	// (0x0001e8fd) list_medium_line_t3_g2_g_ParamLimits

0xfa00,	// (0x0001e8fd) list_medium_line_t3_g2_g

0x8177,	// (0x00017074) list_medium_line_t3_g2_t1_ParamLimits

0x8177,	// (0x00017074) list_medium_line_t3_g2_t1

0x8191,	// (0x0001708e) list_medium_line_t3_g2_t2_ParamLimits

0x8191,	// (0x0001708e) list_medium_line_t3_g2_t2

0x81a7,	// (0x000170a4) list_medium_line_t3_g2_t3_ParamLimits

0x81a7,	// (0x000170a4) list_medium_line_t3_g2_t3

0x0002,

0xfd50,	// (0x0001ec4d) list_medium_line_t3_g2_t_ParamLimits

0xfd50,	// (0x0001ec4d) list_medium_line_t3_g2_t

0x7d60,	// (0x00016c5d) list_medium_line_right_icon_g1

0x81be,	// (0x000170bb) list_medium_line_right_icon_t1

0x6660,	// (0x0001555d) list_medium_line_t2_g1_ParamLimits

0x6660,	// (0x0001555d) list_medium_line_t2_g1

0x81cc,	// (0x000170c9) list_medium_line_t2_t1_ParamLimits

0x81cc,	// (0x000170c9) list_medium_line_t2_t1

0x81e6,	// (0x000170e3) list_medium_line_t2_t2_ParamLimits

0x81e6,	// (0x000170e3) list_medium_line_t2_t2

0x0001,

0xfd57,	// (0x0001ec54) list_medium_line_t2_t_ParamLimits

0xfd57,	// (0x0001ec54) list_medium_line_t2_t

0x6660,	// (0x0001555d) list_medium_line_t3_g1_ParamLimits

0x6660,	// (0x0001555d) list_medium_line_t3_g1

0x81ff,	// (0x000170fc) list_medium_line_t3_t1_ParamLimits

0x81ff,	// (0x000170fc) list_medium_line_t3_t1

0x8219,	// (0x00017116) list_medium_line_t3_t2_ParamLimits

0x8219,	// (0x00017116) list_medium_line_t3_t2

0x822f,	// (0x0001712c) list_medium_line_t3_t3_ParamLimits

0x822f,	// (0x0001712c) list_medium_line_t3_t3

0x0002,

0xfd5c,	// (0x0001ec59) list_medium_line_t3_t_ParamLimits

0xfd5c,	// (0x0001ec59) list_medium_line_t3_t

0x6660,	// (0x0001555d) list_medium_line_g3_g1_ParamLimits

0x6660,	// (0x0001555d) list_medium_line_g3_g1

0x8244,	// (0x00017141) list_medium_line_g3_g2_ParamLimits

0x8244,	// (0x00017141) list_medium_line_g3_g2

0x666c,	// (0x00015569) list_medium_line_g3_g3_ParamLimits

0x666c,	// (0x00015569) list_medium_line_g3_g3

0x0002,

0xfd63,	// (0x0001ec60) list_medium_line_g3_g_ParamLimits

0xfd63,	// (0x0001ec60) list_medium_line_g3_g

0x8250,	// (0x0001714d) list_medium_line_g3_t1_ParamLimits

0x8250,	// (0x0001714d) list_medium_line_g3_t1

0x6660,	// (0x0001555d) list_medium_line_t2_g3_g1_ParamLimits

0x6660,	// (0x0001555d) list_medium_line_t2_g3_g1

0x8244,	// (0x00017141) list_medium_line_t2_g3_g2_ParamLimits

0x8244,	// (0x00017141) list_medium_line_t2_g3_g2

0x666c,	// (0x00015569) list_medium_line_t2_g3_g3_ParamLimits

0x666c,	// (0x00015569) list_medium_line_t2_g3_g3

0x0002,

0xfd63,	// (0x0001ec60) list_medium_line_t2_g3_g_ParamLimits

0xfd63,	// (0x0001ec60) list_medium_line_t2_g3_g

0x8265,	// (0x00017162) list_medium_line_t2_g3_t1_ParamLimits

0x8265,	// (0x00017162) list_medium_line_t2_g3_t1

0x827f,	// (0x0001717c) list_medium_line_t2_g3_t2_ParamLimits

0x827f,	// (0x0001717c) list_medium_line_t2_g3_t2

0x0001,

0xfd6a,	// (0x0001ec67) list_medium_line_t2_g3_t_ParamLimits

0xfd6a,	// (0x0001ec67) list_medium_line_t2_g3_t

0x6660,	// (0x0001555d) list_medium_line_t3_g3_g1_ParamLimits

0x6660,	// (0x0001555d) list_medium_line_t3_g3_g1

0x8244,	// (0x00017141) list_medium_line_t3_g3_g2_ParamLimits

0x8244,	// (0x00017141) list_medium_line_t3_g3_g2

0x666c,	// (0x00015569) list_medium_line_t3_g3_g3_ParamLimits

0x666c,	// (0x00015569) list_medium_line_t3_g3_g3

0x0002,

0xfd63,	// (0x0001ec60) list_medium_line_t3_g3_g_ParamLimits

0xfd63,	// (0x0001ec60) list_medium_line_t3_g3_g

0x829d,	// (0x0001719a) list_medium_line_t3_g3_t1_ParamLimits

0x829d,	// (0x0001719a) list_medium_line_t3_g3_t1

0x82b6,	// (0x000171b3) list_medium_line_t3_g3_t2_ParamLimits

0x82b6,	// (0x000171b3) list_medium_line_t3_g3_t2

0x82cc,	// (0x000171c9) list_medium_line_t3_g3_t3_ParamLimits

0x82cc,	// (0x000171c9) list_medium_line_t3_g3_t3

0x0002,

0xfd6f,	// (0x0001ec6c) list_medium_line_t3_g3_t_ParamLimits

0xfd6f,	// (0x0001ec6c) list_medium_line_t3_g3_t

0x7f11,	// (0x00016e0e) list_medium_line_right_iconx2_g1

0x7d60,	// (0x00016c5d) list_medium_line_right_iconx2_g2

0x0001,

0xfd76,	// (0x0001ec73) list_medium_line_right_iconx2_g

0x82e6,	// (0x000171e3) list_medium_line_right_iconx2_t1

0x7f11,	// (0x00016e0e) list_medium_line_t2_right_iconx2_g1

0x7d60,	// (0x00016c5d) list_medium_line_t2_right_iconx2_g2

0x0001,

0xfd76,	// (0x0001ec73) list_medium_line_t2_right_iconx2_g

0x82f4,	// (0x000171f1) list_medium_line_t2_right_iconx2_t1

0x8304,	// (0x00017201) list_medium_line_t2_right_iconx2_t2

0x0001,

0xfd7b,	// (0x0001ec78) list_medium_line_t2_right_iconx2_t

0x8316,	// (0x00017213) list_medium_line_x4_t4_t1

0x8324,	// (0x00017221) list_medium_line_x4_t4_t2

0x8334,	// (0x00017231) list_medium_line_x4_t4_t3

0x8344,	// (0x00017241) list_medium_line_x4_t4_t4

0x0003,

0xfd80,	// (0x0001ec7d) list_medium_line_x4_t4_t

0x8397,	// (0x00017294) tport_appsw_pane_ParamLimits

0x8397,	// (0x00017294) tport_appsw_pane

0x83af,	// (0x000172ac) tport_contact_pane_ParamLimits

0x83af,	// (0x000172ac) tport_contact_pane

0x83c7,	// (0x000172c4) tport_listscroll_pane_ParamLimits

0x83c7,	// (0x000172c4) tport_listscroll_pane

0x83e1,	// (0x000172de) cell_tport_appsw_pane_ParamLimits

0x83e1,	// (0x000172de) cell_tport_appsw_pane

0xd16b,	// (0x0001c068) tport_appsw_pane_g1_ParamLimits

0xd16b,	// (0x0001c068) tport_appsw_pane_g1

0xe5b3,	// (0x0001d4b0) tport_contact_pane_g1

0xde4c,	// (0x0001cd49) tport_contact_pane_t1

0xe5bc,	// (0x0001d4b9) tport_contact_pane_t2

0x0001,

0xfd89,	// (0x0001ec86) tport_contact_pane_t

0xe5ca,	// (0x0001d4c7) list_tport_pane

0xe5d3,	// (0x0001d4d0) scroll_pane_cp_030

0x8429,	// (0x00017326) cell_tport_appsw_pane_g1

0x8439,	// (0x00017336) cell_tport_appsw_pane_t1

0x8447,	// (0x00017344) grid_highlight_pane_cp019

0x844f,	// (0x0001734c) list_tport_double_graphic_pane_ParamLimits

0x844f,	// (0x0001734c) list_tport_double_graphic_pane

0x94f2,	// (0x000183ef) list_highlight_pane_cp023_ParamLimits

0x94f2,	// (0x000183ef) list_highlight_pane_cp023

0x845c,	// (0x00017359) list_tport_double_graphic_pane_g1_ParamLimits

0x845c,	// (0x00017359) list_tport_double_graphic_pane_g1

0x8469,	// (0x00017366) list_tport_double_graphic_pane_t1_ParamLimits

0x8469,	// (0x00017366) list_tport_double_graphic_pane_t1

0x847e,	// (0x0001737b) list_tport_double_graphic_pane_t2_ParamLimits

0x847e,	// (0x0001737b) list_tport_double_graphic_pane_t2

0x0001,

0xfd95,	// (0x0001ec92) list_tport_double_graphic_pane_t_ParamLimits

0xfd95,	// (0x0001ec92) list_tport_double_graphic_pane_t

0x9482,	// (0x0001837f) main_cale_note_pane

0x5d39,	// (0x00014c36) cell_vitu2_function_top_wide_pane_cp01_ParamLimits

0x5d39,	// (0x00014c36) cell_vitu2_function_top_wide_pane_cp01

0x7886,	// (0x00016783) wait_bar_pane_cp05_ParamLimits

0x94f2,	// (0x000183ef) listscroll_cmail_pane

0xe5dc,	// (0x0001d4d9) list_cmail_pane

0xd44e,	// (0x0001c34b) list_cmail_body_pane

0x8490,	// (0x0001738d) list_single_cmail_header_caption_pane

0x84a6,	// (0x000173a3) list_single_cmail_header_detail_pane_ParamLimits

0x84a6,	// (0x000173a3) list_single_cmail_header_detail_pane

0xe5ec,	// (0x0001d4e9) list_single_cmail_header_caption_pane_t1

0x84cf,	// (0x000173cc) list_single_cmail_header_detail_pane_g1_ParamLimits

0x84cf,	// (0x000173cc) list_single_cmail_header_detail_pane_g1

0xe603,	// (0x0001d500) list_single_cmail_header_detail_pane_g2_ParamLimits

0xe603,	// (0x0001d500) list_single_cmail_header_detail_pane_g2

0x0002,

0xfd9a,	// (0x0001ec97) list_single_cmail_header_detail_pane_g_ParamLimits

0xfd9a,	// (0x0001ec97) list_single_cmail_header_detail_pane_g

0xe61c,	// (0x0001d519) list_single_cmail_header_detail_pane_t1_ParamLimits

0xe61c,	// (0x0001d519) list_single_cmail_header_detail_pane_t1

0xe67c,	// (0x0001d579) list_single_cmail_header_editor_pane_bg_ParamLimits

0xe67c,	// (0x0001d579) list_single_cmail_header_editor_pane_bg

0xdfed,	// (0x0001ceea) list_cmail_body_pane_g1

0xe693,	// (0x0001d590) list_cmail_body_pane_t1

0xd1ba,	// (0x0001c0b7) list_single_cmail_header_editor_pane_bg_g1

0xa0e9,	// (0x00018fe6) list_single_cmail_header_editor_pane_bg_g1_copy1

0xd1ca,	// (0x0001c0c7) list_single_cmail_header_editor_pane_bg_g1_copy2

0xd1c2,	// (0x0001c0bf) list_single_cmail_header_editor_pane_bg_g1_copy3

0xd49b,	// (0x0001c398) list_single_cmail_header_editor_pane_bg_g1_copy4

0xd1ea,	// (0x0001c0e7) list_single_cmail_header_editor_pane_bg_g1_copy4_copy1

0xd1da,	// (0x0001c0d7) list_single_cmail_header_editor_pane_bg_g1_copy4_copy2

0xd1e2,	// (0x0001c0df) list_single_cmail_header_editor_pane_bg_g1_copy4_copy3

0xa0c9,	// (0x00018fc6) list_single_cmail_header_editor_pane_bg_g1_copy4_copy3_copy1

0x84e7,	// (0x000173e4) calenote_gesture_pane_ParamLimits

0x84e7,	// (0x000173e4) calenote_gesture_pane

0x8507,	// (0x00017404) calenote_window_pane_ParamLimits

0x8507,	// (0x00017404) calenote_window_pane

0xe6a1,	// (0x0001d59e) popup_note_window_cp01

0x8523,	// (0x00017420) calenote_swipe_1_pane_ParamLimits

0x8523,	// (0x00017420) calenote_swipe_1_pane

0x7d02,	// (0x00016bff) calenote_swipe_2_pane_ParamLimits

0x7d02,	// (0x00016bff) calenote_swipe_2_pane

0xe346,	// (0x0001d243) calenote_swipe_1_pane_g1_ParamLimits

0xe346,	// (0x0001d243) calenote_swipe_1_pane_g1

0xe353,	// (0x0001d250) calenote_swipe_1_pane_g2_ParamLimits

0xe353,	// (0x0001d250) calenote_swipe_1_pane_g2

0x0001,

0xfcc3,	// (0x0001ebc0) calenote_swipe_1_pane_g_ParamLimits

0xfcc3,	// (0x0001ebc0) calenote_swipe_1_pane_g

0xe6b3,	// (0x0001d5b0) calenote_swipe_1_pane_t1_ParamLimits

0xe6b3,	// (0x0001d5b0) calenote_swipe_1_pane_t1

0xe346,	// (0x0001d243) calenote_swipe_2_pane_g1_ParamLimits

0xe346,	// (0x0001d243) calenote_swipe_2_pane_g1

0xe6d2,	// (0x0001d5cf) calenote_swipe_2_pane_g2_ParamLimits

0xe6d2,	// (0x0001d5cf) calenote_swipe_2_pane_g2

0x0001,

0xfda6,	// (0x0001eca3) calenote_swipe_2_pane_g_ParamLimits

0xfda6,	// (0x0001eca3) calenote_swipe_2_pane_g

0xe6de,	// (0x0001d5db) calenote_swipe_2_pane_t1_ParamLimits

0xe6de,	// (0x0001d5db) calenote_swipe_2_pane_t1

0x9482,	// (0x0001837f) main_mup_navstr_pane

0x4a09,	// (0x00013906) main_mup3_pane_t7_ParamLimits

0x4a09,	// (0x00013906) main_mup3_pane_t7

0xcd1a,	// (0x0001bc17) main_mp4_pane_g6_ParamLimits

0xcd1a,	// (0x0001bc17) main_mp4_pane_g6

0xcf42,	// (0x0001be3f) main_image3_pane_t4_ParamLimits

0xcf42,	// (0x0001be3f) main_image3_pane_t4

0x8538,	// (0x00017435) popup_navstr_preview_pane_ParamLimits

0x8538,	// (0x00017435) popup_navstr_preview_pane

0x854c,	// (0x00017449) scroll_navstr_pane_ParamLimits

0x854c,	// (0x00017449) scroll_navstr_pane

0x9482,	// (0x0001837f) bg_popup_preview_window_pane_cp04

0xe705,	// (0x0001d602) popup_navstr_preview_pane_t1

0x8560,	// (0x0001745d) scroll_navstr_pane_g1_ParamLimits

0x8560,	// (0x0001745d) scroll_navstr_pane_g1

0x8574,	// (0x00017471) scroll_navstr_pane_t1_ParamLimits

0x8574,	// (0x00017471) scroll_navstr_pane_t1

0xe6aa,	// (0x0001d5a7) bg_button_pane_cp014

0xe6aa,	// (0x0001d5a7) bg_button_pane_cp030

0x7ba0,	// (0x00016a9d) list_double_fisheye_pane_g4_ParamLimits

0x7ba0,	// (0x00016a9d) list_double_fisheye_pane_g4

0x7bac,	// (0x00016aa9) list_double_fisheye_pane_g5_ParamLimits

0x7bac,	// (0x00016aa9) list_double_fisheye_pane_g5

0xd295,	// (0x0001c192) sp_fs_scroll_pane_cp03

0xe439,	// (0x0001d336) main_sp_fs_ctrlbar_pane_g1_ParamLimits

0xe445,	// (0x0001d342) main_sp_fs_ctrlbar_pane_g2_ParamLimits

0xfce0,	// (0x0001ebdd) main_sp_fs_ctrlbar_pane_g_ParamLimits

0xe451,	// (0x0001d34e) main_sp_fs_ctrlbar_pane_t1_ParamLimits

0xe5e4,	// (0x0001d4e1) sp_fs_scroll_pane_cp02

0x9dc5,	// (0x00018cc2) popup_sp_fs_calendar_preview_list_single_pane_ParamLimits

0x9dc5,	// (0x00018cc2) popup_sp_fs_calendar_preview_list_single_pane

0x9482,	// (0x0001837f) main_cam6_pano_pane

0x94f2,	// (0x000183ef) main_mup3_pane_ParamLimits

0x9482,	// (0x0001837f) main_phacti_pane

0x7759,	// (0x00016656) bg_button_pane_cp11

0x7773,	// (0x00016670) main_mobtv_info_pane_g2_ParamLimits

0x7773,	// (0x00016670) main_mobtv_info_pane_g2

0x0001,

0xfc40,	// (0x0001eb3d) main_mobtv_info_pane_g_ParamLimits

0xfc40,	// (0x0001eb3d) main_mobtv_info_pane_g

0x7950,	// (0x0001684d) sc_clock_pane_t5_ParamLimits

0x7950,	// (0x0001684d) sc_clock_pane_t5

0x7a0b,	// (0x00016908) main_radioblah_pane_g1_ParamLimits

0xe289,	// (0x0001d186) main_radioblah_pane_t3_ParamLimits

0xe289,	// (0x0001d186) main_radioblah_pane_t3

0xe2a1,	// (0x0001d19e) main_radioblah_pane_t4_ParamLimits

0xe2a1,	// (0x0001d19e) main_radioblah_pane_t4

0x7a33,	// (0x00016930) main_radioblah_text_pane_ParamLimits

0x7a33,	// (0x00016930) main_radioblah_text_pane

0x7a45,	// (0x00016942) main_radioblah_info_pane_g1_ParamLimits

0x7ade,	// (0x000169db) main_radioblah_info_pane_t4_ParamLimits

0x7ade,	// (0x000169db) main_radioblah_info_pane_t4

0x94f2,	// (0x000183ef) main_sp_fs_calendar_pane

0x858b,	// (0x00017488) main_phacti_pane_g1

0x8593,	// (0x00017490) phacti_note_pane_ParamLimits

0x8593,	// (0x00017490) phacti_note_pane

0xe71c,	// (0x0001d619) phacti_term_pane_ParamLimits

0xe71c,	// (0x0001d619) phacti_term_pane

0xe731,	// (0x0001d62e) phacti_note_pane_t1_ParamLimits

0xe731,	// (0x0001d62e) phacti_note_pane_t1

0xe748,	// (0x0001d645) phacti_term_pane_g1

0xe750,	// (0x0001d64d) phacti_term_pane_t1_ParamLimits

0xe750,	// (0x0001d64d) phacti_term_pane_t1

0xe77a,	// (0x0001d677) popup_sp_fs_calendar_preview_list_single_pane_g1

0x9eea,	// (0x00018de7) popup_sp_fs_calendar_preview_list_single_pane_g2

0x0001,

0xfdb0,	// (0x0001ecad) popup_sp_fs_calendar_preview_list_single_pane_g

0xe782,	// (0x0001d67f) popup_sp_fs_calendar_preview_list_single_pane_t1_ParamLimits

0xe782,	// (0x0001d67f) popup_sp_fs_calendar_preview_list_single_pane_t1

0xe798,	// (0x0001d695) aid_popup_sp_fs_bg_corner_pane

0xc385,	// (0x0001b282) popup_sp_fs_calendar_preview_bg_pane_g1

0x9482,	// (0x0001837f) popup_sp_fs_calendar_preview_bg_pane

0xe7a0,	// (0x0001d69d) popup_sp_fs_calendar_preview_list_pane

0xbe6a,	// (0x0001ad67) bg_main_sp_fs_cale_pane_ParamLimits

0xbe6a,	// (0x0001ad67) bg_main_sp_fs_cale_pane

0xe7b1,	// (0x0001d6ae) listscroll_cale_mrui_pane_ParamLimits

0xe7b1,	// (0x0001d6ae) listscroll_cale_mrui_pane

0xd23e,	// (0x0001c13b) listscroll_sp_fs_schedule_track_pane

0xe7c6,	// (0x0001d6c3) main_sp_fs_ctrlbar_pane_cp01_ParamLimits

0xe7c6,	// (0x0001d6c3) main_sp_fs_ctrlbar_pane_cp01

0xe7d9,	// (0x0001d6d6) main_sp_fs_ribbon_pane

0xe7e1,	// (0x0001d6de) popup_sp_fs_cale_preview_window

0x8608,	// (0x00017505) list_single_sp_fs_schedule_track_pane_ParamLimits

0x8608,	// (0x00017505) list_single_sp_fs_schedule_track_pane

0x94f2,	// (0x000183ef) bg_sp_fs_highlight_list_pane_cp03_ParamLimits

0x94f2,	// (0x000183ef) bg_sp_fs_highlight_list_pane_cp03

0x861b,	// (0x00017518) list_single_sp_fs_schedule_track_pane_g1_ParamLimits

0x861b,	// (0x00017518) list_single_sp_fs_schedule_track_pane_g1

0x8627,	// (0x00017524) list_single_sp_fs_schedule_track_pane_g2_ParamLimits

0x8627,	// (0x00017524) list_single_sp_fs_schedule_track_pane_g2

0x0001,

0xfdb5,	// (0x0001ecb2) list_single_sp_fs_schedule_track_pane_g_ParamLimits

0xfdb5,	// (0x0001ecb2) list_single_sp_fs_schedule_track_pane_g

0x8633,	// (0x00017530) list_single_sp_fs_schedule_track_pane_t1_ParamLimits

0x8633,	// (0x00017530) list_single_sp_fs_schedule_track_pane_t1

0x864d,	// (0x0001754a) sp_fs_schedule_track_pane_ParamLimits

0x864d,	// (0x0001754a) sp_fs_schedule_track_pane

0xe7f3,	// (0x0001d6f0) sp_fs_schedule_track_pane_g1

0xe7fb,	// (0x0001d6f8) sp_fs_schedule_track_pane_g2

0xe803,	// (0x0001d700) sp_fs_schedule_track_pane_g3

0xe80b,	// (0x0001d708) sp_fs_schedule_track_pane_g4

0xe813,	// (0x0001d710) sp_fs_schedule_track_pane_g5

0x0004,

0xfdba,	// (0x0001ecb7) sp_fs_schedule_track_pane_g

0xd1ba,	// (0x0001c0b7) bg_sp_fs_schedule_viewer_highlight_g1

0xa0e9,	// (0x00018fe6) bg_sp_fs_schedule_viewer_highlight_g2

0xd1c2,	// (0x0001c0bf) bg_sp_fs_schedule_viewer_highlight_g3

0xd1ca,	// (0x0001c0c7) bg_sp_fs_schedule_viewer_highlight_g4

0xd49b,	// (0x0001c398) bg_sp_fs_schedule_viewer_highlight_g5

0xd1da,	// (0x0001c0d7) bg_sp_fs_schedule_viewer_highlight_g6

0xd1e2,	// (0x0001c0df) bg_sp_fs_schedule_viewer_highlight_g7

0xd1ea,	// (0x0001c0e7) bg_sp_fs_schedule_viewer_highlight_g8

0xa0c9,	// (0x00018fc6) bg_sp_fs_schedule_viewer_highlight_g9

0x0008,

0xfdc5,	// (0x0001ecc2) bg_sp_fs_schedule_viewer_highlight_g

0x9482,	// (0x0001837f) bg_main_sp_fs_ribbon_pane

0x865e,	// (0x0001755b) main_sp_fs_ribbon_pane_g1

0xe81b,	// (0x0001d718) main_sp_fs_ribbon_pane_t1

0x8667,	// (0x00017564) main_sp_fs_ribbon_pane_t2

0xe82a,	// (0x0001d727) main_sp_fs_ribbon_pane_t3

0x0002,

0xfdd8,	// (0x0001ecd5) main_sp_fs_ribbon_pane_t

0xe839,	// (0x0001d736) main_sp_fs_ribbon_scheduler_pane

0xe841,	// (0x0001d73e) bg_main_sp_fs_ribbon_pane_g1

0xe84a,	// (0x0001d747) bg_main_sp_fs_ribbon_pane_g2

0xe853,	// (0x0001d750) bg_main_sp_fs_ribbon_pane_g3

0x0002,

0xfddf,	// (0x0001ecdc) bg_main_sp_fs_ribbon_pane_g

0xe85b,	// (0x0001d758) main_sp_fs_ribbon_scheduler_pane_g1

0xe864,	// (0x0001d761) main_sp_fs_ribbon_scheduler_pane_g2

0xe86d,	// (0x0001d76a) main_sp_fs_ribbon_scheduler_pane_g3

0x0002,

0xfde6,	// (0x0001ece3) main_sp_fs_ribbon_scheduler_pane_g

0xe876,	// (0x0001d773) list_cale_mrui_pane

0x8676,	// (0x00017573) sp_fs_scroll_pane_cp07_ParamLimits

0x8676,	// (0x00017573) sp_fs_scroll_pane_cp07

0x8692,	// (0x0001758f) bg_sp_fs_schedule_viewer_highlight_ParamLimits

0x8692,	// (0x0001758f) bg_sp_fs_schedule_viewer_highlight

0xe883,	// (0x0001d780) list_single_sp_fs_schedule_track_pane_cp01

0xe88b,	// (0x0001d788) list_sp_fs_schedule_track_pane

0xe893,	// (0x0001d790) sp_fs_scroll_pane_cp06_ParamLimits

0xe893,	// (0x0001d790) sp_fs_scroll_pane_cp06

0xc385,	// (0x0001b282) bgmain_sp_fs_calendar_pane_g1

0x86a2,	// (0x0001759f) list_single_cale_mrui_pane_ParamLimits

0x86a2,	// (0x0001759f) list_single_cale_mrui_pane

0xe8a5,	// (0x0001d7a2) list_single_cale_mrui_row_pane_ParamLimits

0xe8a5,	// (0x0001d7a2) list_single_cale_mrui_row_pane

0xe8b2,	// (0x0001d7af) list_single_cale_mrui_row_pane_g1_ParamLimits

0xe8b2,	// (0x0001d7af) list_single_cale_mrui_row_pane_g1

0xe8f7,	// (0x0001d7f4) list_single_cale_mrui_row_pane_t1_ParamLimits

0xe8f7,	// (0x0001d7f4) list_single_cale_mrui_row_pane_t1

0x86c3,	// (0x000175c0) list_single_cale_mrui_row_pane_t2_ParamLimits

0x86c3,	// (0x000175c0) list_single_cale_mrui_row_pane_t2

0xe909,	// (0x0001d806) list_single_cale_mrui_row_pane_t3_ParamLimits

0xe909,	// (0x0001d806) list_single_cale_mrui_row_pane_t3

0xe938,	// (0x0001d835) list_single_cale_mrui_row_pane_t4_ParamLimits

0xe938,	// (0x0001d835) list_single_cale_mrui_row_pane_t4

0x0003,

0xfdf4,	// (0x0001ecf1) list_single_cale_mrui_row_pane_t_ParamLimits

0xfdf4,	// (0x0001ecf1) list_single_cale_mrui_row_pane_t

0x872b,	// (0x00017628) list_single_cmail_header_editor_pane_bg_cp01_ParamLimits

0x872b,	// (0x00017628) list_single_cmail_header_editor_pane_bg_cp01

0x8751,	// (0x0001764e) list_single_cmail_header_editor_pane_bg_cp02_ParamLimits

0x8751,	// (0x0001764e) list_single_cmail_header_editor_pane_bg_cp02

0x8771,	// (0x0001766e) main_radioblah_text_pane_t1_ParamLimits

0x8771,	// (0x0001766e) main_radioblah_text_pane_t1

0xe967,	// (0x0001d864) cam6_indi_pane_cp01

0xe96f,	// (0x0001d86c) cam6_mode_pane_cp01

0xe977,	// (0x0001d874) cam6_pano_pane

0xe980,	// (0x0001d87d) cam6_zoom_pane_cp01

0xe988,	// (0x0001d885) cam6_pano_image_pane

0xe993,	// (0x0001d890) cam6_pano_pane_g1

0xdfed,	// (0x0001ceea) cam6_pano_pane_g2

0xe99c,	// (0x0001d899) cam6_pano_pane_g3

0xe9a5,	// (0x0001d8a2) cam6_pano_pane_g4

0xc97d,	// (0x0001b87a) cam6_pano_pane_g5

0xe9ae,	// (0x0001d8ab) cam6_pano_pane_g6

0xe9b8,	// (0x0001d8b5) cam6_pano_pane_g7

0xe9c0,	// (0x0001d8bd) cam6_pano_pane_g8

0xe9c9,	// (0x0001d8c6) cam6_pano_pane_g9

0x0008,

0xfdfd,	// (0x0001ecfa) cam6_pano_pane_g

0x9482,	// (0x0001837f) main_browser_tag_pane

0xe6fd,	// (0x0001d5fa) grid_navstr_albumart_pane

0xe9d4,	// (0x0001d8d1) cell_navstr_albumart_pane_ParamLimits

0xe9d4,	// (0x0001d8d1) cell_navstr_albumart_pane

0xe9f4,	// (0x0001d8f1) cell_navstr_albumart_pane_g1

0xbc7b,	// (0x0001ab78) cell_navstr_albumart_pane_g2

0xbc8b,	// (0x0001ab88) cell_navstr_albumart_pane_g3

0xbc83,	// (0x0001ab80) cell_navstr_albumart_pane_g4

0x0003,

0xfe10,	// (0x0001ed0d) cell_navstr_albumart_pane_g

0x878b,	// (0x00017688) bt_list_pane_ParamLimits

0x878b,	// (0x00017688) bt_list_pane

0x879f,	// (0x0001769c) bt_list_pane_t1

0x87ae,	// (0x000176ab) bt_list_pane_t2

0x0001,

0xfe19,	// (0x0001ed16) bt_list_pane_t

0x9482,	// (0x0001837f) main_cale_prevew_pane

0x87bd,	// (0x000176ba) popup_cale_preview_window_ParamLimits

0x87bd,	// (0x000176ba) popup_cale_preview_window

0x94f2,	// (0x000183ef) bg_popup_preview_window_pane_cp05_ParamLimits

0x94f2,	// (0x000183ef) bg_popup_preview_window_pane_cp05

0xe9fc,	// (0x0001d8f9) list_cale_preview_pane_ParamLimits

0xe9fc,	// (0x0001d8f9) list_cale_preview_pane

0x87d8,	// (0x000176d5) list_double_cale_preview_pane_ParamLimits

0x87d8,	// (0x000176d5) list_double_cale_preview_pane

0x87ea,	// (0x000176e7) list_single_cale_preview_pane_ParamLimits

0x87ea,	// (0x000176e7) list_single_cale_preview_pane

0x8800,	// (0x000176fd) list_single_cale_preview_pane_g1

0x8808,	// (0x00017705) list_single_cale_preview_pane_t1_ParamLimits

0x8808,	// (0x00017705) list_single_cale_preview_pane_t1

0x881d,	// (0x0001771a) list_double_cale_preview_pane_g1

0x8825,	// (0x00017722) list_double_cale_preview_pane_t1_ParamLimits

0x8825,	// (0x00017722) list_double_cale_preview_pane_t1

0x883a,	// (0x00017737) list_double_cale_preview_pane_t2_ParamLimits

0x883a,	// (0x00017737) list_double_cale_preview_pane_t2

0x0001,

0xfe1e,	// (0x0001ed1b) list_double_cale_preview_pane_t_ParamLimits

0xfe1e,	// (0x0001ed1b) list_double_cale_preview_pane_t

0x9482,	// (0x0001837f) main_ezdial_pane

0x94f2,	// (0x000183ef) main_sp_fs_email_pane_ParamLimits

0x7d8a,	// (0x00016c87) cmail_ddmenu_btn01_pane_ParamLimits

0x7d8a,	// (0x00016c87) cmail_ddmenu_btn01_pane

0x7d9d,	// (0x00016c9a) cmail_ddmenu_btn02_pane_ParamLimits

0x7d9d,	// (0x00016c9a) cmail_ddmenu_btn02_pane

0x7dc0,	// (0x00016cbd) cmail_ddmenu_btn03_pane_ParamLimits

0x7dc0,	// (0x00016cbd) cmail_ddmenu_btn03_pane

0x7de6,	// (0x00016ce3) main_sp_fs_ctrlbar_pane_ParamLimits

0x7e0a,	// (0x00016d07) main_sp_fs_listscroll_pane_te_cp01_ParamLimits

0xd44e,	// (0x0001c34b) list_cmail_body_pane_ParamLimits

0xe5fa,	// (0x0001d4f7) bg_button_pane_cp12

0xe60f,	// (0x0001d50c) list_single_cmail_header_detail_pane_g3_ParamLimits

0xe60f,	// (0x0001d50c) list_single_cmail_header_detail_pane_g3

0xe658,	// (0x0001d555) list_single_cmail_header_detail_pane_t2_ParamLimits

0xe658,	// (0x0001d555) list_single_cmail_header_detail_pane_t2

0x0001,

0xfda1,	// (0x0001ec9e) list_single_cmail_header_detail_pane_t_ParamLimits

0xfda1,	// (0x0001ec9e) list_single_cmail_header_detail_pane_t

0xe765,	// (0x0001d662) phacti_term_pane_t2_ParamLimits

0xe765,	// (0x0001d662) phacti_term_pane_t2

0x0001,

0xfdab,	// (0x0001eca8) phacti_term_pane_t_ParamLimits

0xfdab,	// (0x0001eca8) phacti_term_pane_t

0xea08,	// (0x0001d905) aid_size_list_single_double

0x8852,	// (0x0001774f) popup_ezdial_listscroll_window

0x886e,	// (0x0001776b) popup_number_entry_window_cp01

0x9e86,	// (0x00018d83) bg_popup_call_pane_cp09

0xea14,	// (0x0001d911) ezdial_list_pane

0xea1c,	// (0x0001d919) scroll_pane_cp23

0xbe6a,	// (0x0001ad67) bg_button_pane_cp028_ParamLimits

0xbe6a,	// (0x0001ad67) bg_button_pane_cp028

0x887c,	// (0x00017779) cmail_ddmenu_btn01_pane_g1_ParamLimits

0x887c,	// (0x00017779) cmail_ddmenu_btn01_pane_g1

0x8888,	// (0x00017785) cmail_ddmenu_btn01_pane_g2_ParamLimits

0x8888,	// (0x00017785) cmail_ddmenu_btn01_pane_g2

0x0001,

0xfe23,	// (0x0001ed20) cmail_ddmenu_btn01_pane_g_ParamLimits

0xfe23,	// (0x0001ed20) cmail_ddmenu_btn01_pane_g

0xea24,	// (0x0001d921) cmail_ddmenu_btn01_pane_t1_ParamLimits

0xea24,	// (0x0001d921) cmail_ddmenu_btn01_pane_t1

0xbe6a,	// (0x0001ad67) bg_button_pane_cp029_ParamLimits

0xbe6a,	// (0x0001ad67) bg_button_pane_cp029

0x8894,	// (0x00017791) cmail_ddmenu_btn02_pane_g1_ParamLimits

0x8894,	// (0x00017791) cmail_ddmenu_btn02_pane_g1

0x88ad,	// (0x000177aa) cmail_ddmenu_btn02_pane_t1_ParamLimits

0x88ad,	// (0x000177aa) cmail_ddmenu_btn02_pane_t1

0x94f2,	// (0x000183ef) bg_button_pane_cp031_ParamLimits

0x94f2,	// (0x000183ef) bg_button_pane_cp031

0x8894,	// (0x00017791) cmail_ddmenu_btn03_pane_g1_ParamLimits

0x8894,	// (0x00017791) cmail_ddmenu_btn03_pane_g1

0x88ad,	// (0x000177aa) cmail_ddmenu_btn03_pane_t1_ParamLimits

0x88ad,	// (0x000177aa) cmail_ddmenu_btn03_pane_t1

0x55b0,	// (0x000144ad) cell_dialer2_keypad_pane_t1_ParamLimits

0x55ca,	// (0x000144c7) cell_dialer2_keypad_pane_t1_copy1_ParamLimits

0x55ca,	// (0x000144c7) cell_dialer2_keypad_pane_t1_copy1

0x75c0,	// (0x000164bd) ncimui_group_button_pane

0x94f2,	// (0x000183ef) main_sp_fs_calendar_pane_ParamLimits

0x8490,	// (0x0001738d) list_single_cmail_header_caption_pane_ParamLimits

0xe7a8,	// (0x0001d6a5) aid_recal_txt_sm_pane

0x9482,	// (0x0001837f) mian_recal_day_pane

0xe7e1,	// (0x0001d6de) popup_sp_fs_cale_preview_window_ParamLimits

0xea39,	// (0x0001d936) list_recal_day_pane

0xea8d,	// (0x0001d98a) list_single_recal_day_pane_ParamLimits

0xea8d,	// (0x0001d98a) list_single_recal_day_pane

0xea9f,	// (0x0001d99c) list_single_recal_day_pane_g1_ParamLimits

0xea9f,	// (0x0001d99c) list_single_recal_day_pane_g1

0xeaab,	// (0x0001d9a8) list_single_recal_day_pane_g2_ParamLimits

0xeaab,	// (0x0001d9a8) list_single_recal_day_pane_g2

0xeab7,	// (0x0001d9b4) list_single_recal_day_pane_g3_ParamLimits

0xeab7,	// (0x0001d9b4) list_single_recal_day_pane_g3

0x88d1,	// (0x000177ce) list_single_recal_day_pane_g4_ParamLimits

0x88d1,	// (0x000177ce) list_single_recal_day_pane_g4

0xeac3,	// (0x0001d9c0) list_single_recal_day_pane_g5_ParamLimits

0xeac3,	// (0x0001d9c0) list_single_recal_day_pane_g5

0xeacf,	// (0x0001d9cc) list_single_recal_day_pane_g6_ParamLimits

0xeacf,	// (0x0001d9cc) list_single_recal_day_pane_g6

0x0004,

0xfe32,	// (0x0001ed2f) list_single_recal_day_pane_g_ParamLimits

0xfe32,	// (0x0001ed2f) list_single_recal_day_pane_g

0xeae3,	// (0x0001d9e0) list_single_recal_day_pane_t1

0xeaf5,	// (0x0001d9f2) list_single_recal_day_pane_t2

0x0001,

0xfe3d,	// (0x0001ed3a) list_single_recal_day_pane_t

0x88e9,	// (0x000177e6) ncimui_query_button_pane_ParamLimits

0x88e9,	// (0x000177e6) ncimui_query_button_pane

0x88f9,	// (0x000177f6) ncimui_query_button_pane_t1_ParamLimits

0x88f9,	// (0x000177f6) ncimui_query_button_pane_t1

0xeb07,	// (0x0001da04) ncimui_query_button_pane_t2_ParamLimits

0xeb07,	// (0x0001da04) ncimui_query_button_pane_t2

0x0001,

0xfe42,	// (0x0001ed3f) ncimui_query_button_pane_t_ParamLimits

0xfe42,	// (0x0001ed3f) ncimui_query_button_pane_t

0x890c,	// (0x00017809) query_button_pane_ParamLimits

0x890c,	// (0x00017809) query_button_pane

0x9482,	// (0x0001837f) bg_button_pane_cp0028

0xeb1a,	// (0x0001da17) query_button_pane_t1

0x362c,	// (0x00012529) main_tport_pane_ParamLimits

0x8354,	// (0x00017251) bg_popup_window_pane_cp01_ParamLimits

0x8354,	// (0x00017251) bg_popup_window_pane_cp01

0x836f,	// (0x0001726c) heading_pane_cp08_ParamLimits

0x836f,	// (0x0001726c) heading_pane_cp08

0x8382,	// (0x0001727f) heading_pane_cp07_ParamLimits

0x8382,	// (0x0001727f) heading_pane_cp07

0x8429,	// (0x00017326) cell_tport_appsw_pane_g2

0x0002,

0xfd8e,	// (0x0001ec8b) cell_tport_appsw_pane_g

0xab10,	// (0x00019a0d) input_candi_list_open_g1

0xa2da,	// (0x000191d7) list_cale_time_pane_g6_ParamLimits

0xa2da,	// (0x000191d7) list_cale_time_pane_g6

0x43f5,	// (0x000132f2) aid_size_touch_calib_1_ParamLimits

0x43f5,	// (0x000132f2) aid_size_touch_calib_1

0x4407,	// (0x00013304) aid_size_touch_calib_2_ParamLimits

0x4407,	// (0x00013304) aid_size_touch_calib_2

0x441f,	// (0x0001331c) aid_size_touch_calib_3_ParamLimits

0x441f,	// (0x0001331c) aid_size_touch_calib_3

0x443d,	// (0x0001333a) aid_size_touch_calib_4_ParamLimits

0x443d,	// (0x0001333a) aid_size_touch_calib_4

0x4455,	// (0x00013352) main_touch_calib_button_group_pane_ParamLimits

0x4455,	// (0x00013352) main_touch_calib_button_group_pane

0x446d,	// (0x0001336a) main_touch_calib_pane_g1_ParamLimits

0x447f,	// (0x0001337c) main_touch_calib_pane_g2_ParamLimits

0x4491,	// (0x0001338e) main_touch_calib_pane_g3_ParamLimits

0x44a3,	// (0x000133a0) main_touch_calib_pane_g4_ParamLimits

0xf751,	// (0x0001e64e) main_touch_calib_pane_g_ParamLimits

0x44b5,	// (0x000133b2) main_touch_calib_pane_t1_ParamLimits

0x44cf,	// (0x000133cc) main_touch_calib_pane_t2_ParamLimits

0x44e9,	// (0x000133e6) main_touch_calib_pane_t3_ParamLimits

0x44fd,	// (0x000133fa) main_touch_calib_pane_t4_ParamLimits

0x4511,	// (0x0001340e) main_touch_calib_pane_t5_ParamLimits

0xf75a,	// (0x0001e657) main_touch_calib_pane_t_ParamLimits

0xc71d,	// (0x0001b61a) list_single_fp_cale_pane_g3_ParamLimits

0xc71d,	// (0x0001b61a) list_single_fp_cale_pane_g3

0x94f2,	// (0x000183ef) bg_button_pane_cp012_ParamLimits

0x94f2,	// (0x000183ef) bg_vkb2_func_pane_cp03_ParamLimits

0x6616,	// (0x00015513) cell_vitu2_function_top_pane_g1_ParamLimits

0x94f2,	// (0x000183ef) bg_vkb2_func_pane_cp04_ParamLimits

0x754e,	// (0x0001644b) main_ncimui_button_group_pane_ParamLimits

0x754e,	// (0x0001644b) main_ncimui_button_group_pane

0x75ae,	// (0x000164ab) main_ncimui_pane_t3_ParamLimits

0x75ae,	// (0x000164ab) main_ncimui_pane_t3

0xe713,	// (0x0001d610) phacti_button_group_pane

0xea08,	// (0x0001d905) aid_size_list_single_double_ParamLimits

0x8852,	// (0x0001774f) popup_ezdial_listscroll_window_ParamLimits

0x886e,	// (0x0001776b) popup_number_entry_window_cp01_ParamLimits

0x891f,	// (0x0001781c) phacti_button_pane_ParamLimits

0x891f,	// (0x0001781c) phacti_button_pane

0x9482,	// (0x0001837f) bg_button_pane_cp14

0xeb28,	// (0x0001da25) phacti_button_pane_t1

0x8930,	// (0x0001782d) main_touch_calib_button_pane_ParamLimits

0x8930,	// (0x0001782d) main_touch_calib_button_pane

0x9c55,	// (0x00018b52) bg_button_pane_cp18_ParamLimits

0x9c55,	// (0x00018b52) bg_button_pane_cp18

0xeb36,	// (0x0001da33) main_touch_calib_button_pane_t1_ParamLimits

0xeb36,	// (0x0001da33) main_touch_calib_button_pane_t1

0xeb4c,	// (0x0001da49) main_touch_calib_button_pane_t2_ParamLimits

0xeb4c,	// (0x0001da49) main_touch_calib_button_pane_t2

0x0001,

0xfe47,	// (0x0001ed44) main_touch_calib_button_pane_t_ParamLimits

0xfe47,	// (0x0001ed44) main_touch_calib_button_pane_t

0x9482,	// (0x0001837f) cell_ncimui_button_pane

0x9482,	// (0x0001837f) bg_button_pane_cp032

0xeb6a,	// (0x0001da67) cell_ncimui_button_pane_t1

0xcf22,	// (0x0001be1f) image3_infobar_pane_ParamLimits

0xcf22,	// (0x0001be1f) image3_infobar_pane

0x797c,	// (0x00016879) fs_bigclock_status_pane_ParamLimits

0x797c,	// (0x00016879) fs_bigclock_status_pane

0x7989,	// (0x00016886) main_fs_bigclock_clock_pane_ParamLimits

0x7989,	// (0x00016886) main_fs_bigclock_clock_pane

0x79a9,	// (0x000168a6) main_fs_bigclock_indi_pane_ParamLimits

0x79a9,	// (0x000168a6) main_fs_bigclock_indi_pane

0x79d3,	// (0x000168d0) main_fs_bigclock_swipe_pane_ParamLimits

0x79d3,	// (0x000168d0) main_fs_bigclock_swipe_pane

0x9482,	// (0x0001837f) main_fs_clock_dumped_data

0xe0fa,	// (0x0001cff7) list_single_fs_bigclock_indicator_pane_g1_ParamLimits

0xe0fa,	// (0x0001cff7) list_single_fs_bigclock_indicator_pane_g1

0xe115,	// (0x0001d012) list_single_fs_bigclock_indicator_pane_g2_ParamLimits

0xe115,	// (0x0001d012) list_single_fs_bigclock_indicator_pane_g2

0xe12f,	// (0x0001d02c) list_single_fs_bigclock_indicator_pane_g3_ParamLimits

0xe12f,	// (0x0001d02c) list_single_fs_bigclock_indicator_pane_g3

0xe149,	// (0x0001d046) list_single_fs_bigclock_indicator_pane_g4_ParamLimits

0xe149,	// (0x0001d046) list_single_fs_bigclock_indicator_pane_g4

0x0004,

0xfc74,	// (0x0001eb71) list_single_fs_bigclock_indicator_pane_g_ParamLimits

0xfc74,	// (0x0001eb71) list_single_fs_bigclock_indicator_pane_g

0xe174,	// (0x0001d071) list_single_fs_bigclock_indicator_pane_t1_ParamLimits

0xe174,	// (0x0001d071) list_single_fs_bigclock_indicator_pane_t1

0xe19c,	// (0x0001d099) list_single_fs_bigclock_indicator_pane_t2_ParamLimits

0xe19c,	// (0x0001d099) list_single_fs_bigclock_indicator_pane_t2

0xe1c4,	// (0x0001d0c1) list_single_fs_bigclock_indicator_pane_t3_ParamLimits

0xe1c4,	// (0x0001d0c1) list_single_fs_bigclock_indicator_pane_t3

0xe1ec,	// (0x0001d0e9) list_single_fs_bigclock_indicator_pane_t4_ParamLimits

0xe1ec,	// (0x0001d0e9) list_single_fs_bigclock_indicator_pane_t4

0x0004,

0xfc7f,	// (0x0001eb7c) list_single_fs_bigclock_indicator_pane_t_ParamLimits

0xfc7f,	// (0x0001eb7c) list_single_fs_bigclock_indicator_pane_t

0xeb78,	// (0x0001da75) image3_infobar_fav_pane_ParamLimits

0xeb78,	// (0x0001da75) image3_infobar_fav_pane

0xeb88,	// (0x0001da85) image3_infobar_loc_pane_ParamLimits

0xeb88,	// (0x0001da85) image3_infobar_loc_pane

0xeb9c,	// (0x0001da99) image3_infobar_time_pane_ParamLimits

0xeb9c,	// (0x0001da99) image3_infobar_time_pane

0xc385,	// (0x0001b282) image3_infobar_time_pane_g1

0xebac,	// (0x0001daa9) image3_infobar_time_pane_t1

0xc385,	// (0x0001b282) image3_infobar_loc_pane_g1

0xebba,	// (0x0001dab7) image3_infobar_loc_pane_g2

0x0001,

0xfe4c,	// (0x0001ed49) image3_infobar_loc_pane_g

0xebc2,	// (0x0001dabf) image3_infobar_loc_pane_t1

0xc385,	// (0x0001b282) image3_infobar_fav_pane_g1

0xebd0,	// (0x0001dacd) image3_infobar_fav_pane_g2

0x0001,

0xfe51,	// (0x0001ed4e) image3_infobar_fav_pane_g

0xebd8,	// (0x0001dad5) fs_bigclock_status_battery_pane

0xebe1,	// (0x0001dade) fs_bigclock_status_signal_pane

0xebea,	// (0x0001dae7) fs_bigclock_status_title_pane

0xebf3,	// (0x0001daf0) fs_bigclock_status_signal_pane_g1

0xebfc,	// (0x0001daf9) fs_bigclock_status_signal_pane_g2

0x0001,

0xfe56,	// (0x0001ed53) fs_bigclock_status_signal_pane_g

0xec04,	// (0x0001db01) fs_bigclock_status_battery_pane_g1

0xec0d,	// (0x0001db0a) fs_bigclock_status_battery_pane_g2

0x0001,

0xfe5b,	// (0x0001ed58) fs_bigclock_status_battery_pane_g

0xec15,	// (0x0001db12) fs_bigclock_status_title_pane_t1

0xc385,	// (0x0001b282) main_fs_bigclock_clock_pane_g1

0xec23,	// (0x0001db20) main_fs_bigclock_clock_pane_g2

0xec2c,	// (0x0001db29) main_fs_bigclock_clock_pane_g3

0xec2c,	// (0x0001db29) main_fs_bigclock_clock_pane_g4

0x0003,

0xfe60,	// (0x0001ed5d) main_fs_bigclock_clock_pane_g

0xec34,	// (0x0001db31) main_fs_bigclock_clock_pane_t1

0x8945,	// (0x00017842) main_fs_bigclock_clock_pane_t2

0x0001,

0xfe69,	// (0x0001ed66) main_fs_bigclock_clock_pane_t

0xec42,	// (0x0001db3f) list_single_fs_bigclock_indicator_pane_ParamLimits

0xec42,	// (0x0001db3f) list_single_fs_bigclock_indicator_pane

0xec53,	// (0x0001db50) list_single_fs_bigclock_pane_ParamLimits

0xec53,	// (0x0001db50) list_single_fs_bigclock_pane

0xec79,	// (0x0001db76) main_fs_bigclock_indicator_pane_t1

0xec88,	// (0x0001db85) list_single_fs_bigclock_pane_g1

0xec90,	// (0x0001db8d) list_single_fs_bigclock_pane_t1

0xc385,	// (0x0001b282) main_fs_bigclock_swipe_pane_g1

0xecd3,	// (0x0001dbd0) main_fs_bigclock_swipe_pane_g2

0x0001,

0xfe7a,	// (0x0001ed77) main_fs_bigclock_swipe_pane_g

0xecdb,	// (0x0001dbd8) main_fs_bigclock_swipe_pane_t1_ParamLimits

0xecdb,	// (0x0001dbd8) main_fs_bigclock_swipe_pane_t1

0x2569,	// (0x00011466) call_type_pane_ParamLimits

0x9482,	// (0x0001837f) main_btmg_pane

0xe8de,	// (0x0001d7db) list_single_cale_mrui_row_pane_g2_ParamLimits

0xe8de,	// (0x0001d7db) list_single_cale_mrui_row_pane_g2

0x0002,

0xfded,	// (0x0001ecea) list_single_cale_mrui_row_pane_g_ParamLimits

0xfded,	// (0x0001ecea) list_single_cale_mrui_row_pane_g

0xea74,	// (0x0001d971) list_recal_vselct_arw_lo_pane

0xea7c,	// (0x0001d979) list_recal_vselct_arw_up_pane

0xea84,	// (0x0001d981) list_recal_vselct_pane

0x8998,	// (0x00017895) btmg_button_pane

0x89a2,	// (0x0001789f) main_btmg_pane_g1

0x9482,	// (0x0001837f) bg_button_pane_cp044

0xecf8,	// (0x0001dbf5) btmg_button_pane_t1

0xbe56,	// (0x0001ad53) aid_listscroll_gen

0x94f2,	// (0x000183ef) main_cntbar_detail_pane

0xe5dc,	// (0x0001d4d9) list_cmail_folder_pane

0xd295,	// (0x0001c192) sp_fs_scroll_pane_cp03_ParamLimits

0x8490,	// (0x0001738d) list_single_fs_dyc_pane_cp01_ParamLimits

0x8490,	// (0x0001738d) list_single_fs_dyc_pane_cp01

0xed06,	// (0x0001dc03) aid_size_cmail_indent

0xed0f,	// (0x0001dc0c) list_single_dyc_row_pane_cp01

0x89de,	// (0x000178db) cntbar_detail_list_pane_ParamLimits

0x89de,	// (0x000178db) cntbar_detail_list_pane

0x8a2a,	// (0x00017927) main_cntbar_detail_cont_pane_ParamLimits

0x8a2a,	// (0x00017927) main_cntbar_detail_cont_pane

0xd295,	// (0x0001c192) scroll_pane_cp032_ParamLimits

0xd295,	// (0x0001c192) scroll_pane_cp032

0x8a3e,	// (0x0001793b) cntbar_detail_list_event_pane_ParamLimits

0x8a3e,	// (0x0001793b) cntbar_detail_list_event_pane

0x89ee,	// (0x000178eb) cntbar_detail_list_shct_pane

0xa137,	// (0x00019034) aid_list_gen

0xed18,	// (0x0001dc15) aid_scroll

0xed21,	// (0x0001dc1e) aid_size_touch_scroll_bar

0x6d0f,	// (0x00015c0c) aid_list_double

0x6cfd,	// (0x00015bfa) aid_list_single

0x6cfd,	// (0x00015bfa) aid_list_single_lg

0x8a4e,	// (0x0001794b) aid_list_z_g_a_sm

0x8a56,	// (0x00017953) aid_list_z_g_d

0x8a5e,	// (0x0001795b) aid_txt_z_prm

0x8a6c,	// (0x00017969) aid_txt_z_prm_cp01

0x8a7a,	// (0x00017977) aid_txt_z_sec

0x8a88,	// (0x00017985) main_cntbar_detail_cont_pane_g1_ParamLimits

0x8a88,	// (0x00017985) main_cntbar_detail_cont_pane_g1

0x8a9c,	// (0x00017999) main_cntbar_detail_cont_pane_g2_ParamLimits

0x8a9c,	// (0x00017999) main_cntbar_detail_cont_pane_g2

0x0001,

0xfe7f,	// (0x0001ed7c) main_cntbar_detail_cont_pane_g_ParamLimits

0xfe7f,	// (0x0001ed7c) main_cntbar_detail_cont_pane_g

0xed2a,	// (0x0001dc27) main_cntbar_detail_cont_pane_t1

0xed38,	// (0x0001dc35) main_cntbar_detail_cont_pane_t2

0xed46,	// (0x0001dc43) main_cntbar_detail_cont_pane_t3

0x0002,

0xfe84,	// (0x0001ed81) main_cntbar_detail_cont_pane_t

0x8aac,	// (0x000179a9) cell_cntbar_detail_list_shct_pane_ParamLimits

0x8aac,	// (0x000179a9) cell_cntbar_detail_list_shct_pane

0xed54,	// (0x0001dc51) cntbar_detail_list_shct_pane_g1

0xed5d,	// (0x0001dc5a) cntbar_detail_list_shct_pane_g2

0x0001,

0xfe8b,	// (0x0001ed88) cntbar_detail_list_shct_pane_g

0x8ac0,	// (0x000179bd) cntbar_detail_list_event_pane_g1_ParamLimits

0x8ac0,	// (0x000179bd) cntbar_detail_list_event_pane_g1

0x8acc,	// (0x000179c9) cntbar_detail_list_event_pane_g2_ParamLimits

0x8acc,	// (0x000179c9) cntbar_detail_list_event_pane_g2

0x0005,

0xfe90,	// (0x0001ed8d) cntbar_detail_list_event_pane_g_ParamLimits

0xfe90,	// (0x0001ed8d) cntbar_detail_list_event_pane_g

0x8b38,	// (0x00017a35) cntbar_detail_list_event_pane_t1_ParamLimits

0x8b38,	// (0x00017a35) cntbar_detail_list_event_pane_t1

0x8b4d,	// (0x00017a4a) cntbar_detail_list_event_pane_t2_ParamLimits

0x8b4d,	// (0x00017a4a) cntbar_detail_list_event_pane_t2

0x0002,

0xfe9d,	// (0x0001ed9a) cntbar_detail_list_event_pane_t_ParamLimits

0xfe9d,	// (0x0001ed9a) cntbar_detail_list_event_pane_t

0xc385,	// (0x0001b282) cell_cntbar_detail_list_shct_pane_g1

0xa94f,	// (0x0001984c) navi_pane_mv_g3

0x94f2,	// (0x000183ef) main_cntbar_detail_pane_ParamLimits

0x9482,	// (0x0001837f) main_notif_wgt_pane

0xccb4,	// (0x0001bbb1) aid_tch_main_mp4_pane_g4

0xceb6,	// (0x0001bdb3) popup_slider_window_cp02

0xea6a,	// (0x0001d967) list_recal_day_event_pane

0x89ac,	// (0x000178a9) cntbar_detail_btn_pane_ParamLimits

0x89ac,	// (0x000178a9) cntbar_detail_btn_pane

0x89c5,	// (0x000178c2) cntbar_detail_btn_pane_cp01_ParamLimits

0x89c5,	// (0x000178c2) cntbar_detail_btn_pane_cp01

0x89ee,	// (0x000178eb) cntbar_detail_list_shct_pane_ParamLimits

0x89fe,	// (0x000178fb) cntbar_detail_pane_g1_ParamLimits

0x89fe,	// (0x000178fb) cntbar_detail_pane_g1

0x8a0e,	// (0x0001790b) cntbar_detail_pane_t1_ParamLimits

0x8a0e,	// (0x0001790b) cntbar_detail_pane_t1

0x8ad8,	// (0x000179d5) cntbar_detail_list_event_pane_g3_ParamLimits

0x8ad8,	// (0x000179d5) cntbar_detail_list_event_pane_g3

0x8af0,	// (0x000179ed) cntbar_detail_list_event_pane_g4_ParamLimits

0x8af0,	// (0x000179ed) cntbar_detail_list_event_pane_g4

0x8b08,	// (0x00017a05) cntbar_detail_list_event_pane_g5_ParamLimits

0x8b08,	// (0x00017a05) cntbar_detail_list_event_pane_g5

0x8b20,	// (0x00017a1d) cntbar_detail_list_event_pane_g6_ParamLimits

0x8b20,	// (0x00017a1d) cntbar_detail_list_event_pane_g6

0x8b62,	// (0x00017a5f) cntbar_detail_list_event_pane_t3_ParamLimits

0x8b62,	// (0x00017a5f) cntbar_detail_list_event_pane_t3

0x8b74,	// (0x00017a71) popup_notif_wgt_window_ParamLimits

0x8b74,	// (0x00017a71) popup_notif_wgt_window

0x8b8d,	// (0x00017a8a) popup_submenu_window_cp01_ParamLimits

0x8b8d,	// (0x00017a8a) popup_submenu_window_cp01

0x9e86,	// (0x00018d83) bg_popup_window_pane_cp10

0xed66,	// (0x0001dc63) listscroll_notif_wgt_pane

0xed78,	// (0x0001dc75) list_notif_wgt_window

0xed81,	// (0x0001dc7e) scroll_pane_cp033

0x8ba3,	// (0x00017aa0) list_notif_wgt_row_pane_ParamLimits

0x8ba3,	// (0x00017aa0) list_notif_wgt_row_pane

0xed8a,	// (0x0001dc87) aid_size_list_notif_wgt_del

0xed97,	// (0x0001dc94) list_notif_wgt_row_pane_g1

0xeda3,	// (0x0001dca0) list_notif_wgt_row_pane_g2

0xedb7,	// (0x0001dcb4) list_notif_wgt_row_pane_g3

0x0002,

0xfea4,	// (0x0001eda1) list_notif_wgt_row_pane_g

0xedc4,	// (0x0001dcc1) list_notif_wgt_row_pane_t1

0xedda,	// (0x0001dcd7) list_notif_wgt_row_pane_t2

0xedec,	// (0x0001dce9) list_notif_wgt_row_pane_t3

0x0002,

0xfeab,	// (0x0001eda8) list_notif_wgt_row_pane_t

0xd4c3,	// (0x0001c3c0) list_recal_day_event_pane_g1

0xedfe,	// (0x0001dcfb) list_recal_day_event_pane_t1

0x9482,	// (0x0001837f) bg_button_pane_cp045

0x8bb3,	// (0x00017ab0) cntbar_detail_btn_pane_t1

0xbe6a,	// (0x0001ad67) main_callh_pane_ParamLimits

0xbe6a,	// (0x0001ad67) main_callh_pane

0x9482,	// (0x0001837f) main_coverflow0_pane

0x9482,	// (0x0001837f) main_wgtman_pane

0x79eb,	// (0x000168e8) main_fs_bigclock_unlock_btn_pane_ParamLimits

0x79eb,	// (0x000168e8) main_fs_bigclock_unlock_btn_pane

0x8421,	// (0x0001731e) bg_button_pane_cp16

0x8431,	// (0x0001732e) cell_tport_appsw_pane_g3

0x8bc1,	// (0x00017abe) cf0_flow_pane_ParamLimits

0x8bc1,	// (0x00017abe) cf0_flow_pane

0xee0d,	// (0x0001dd0a) listscroll_cf0_pane

0xee18,	// (0x0001dd15) main_cf0_pane_g1

0x8bd6,	// (0x00017ad3) main_cf0_pane_t1_ParamLimits

0x8bd6,	// (0x00017ad3) main_cf0_pane_t1

0x8bed,	// (0x00017aea) main_cf0_pane_t2_ParamLimits

0x8bed,	// (0x00017aea) main_cf0_pane_t2

0x0001,

0xfeb7,	// (0x0001edb4) main_cf0_pane_t_ParamLimits

0xfeb7,	// (0x0001edb4) main_cf0_pane_t

0xee2a,	// (0x0001dd27) scroll_pane_cp11

0x8c04,	// (0x00017b01) cf0_flow_pane_g1

0x8c0c,	// (0x00017b09) cf0_flow_pane_g2

0x0001,

0xfebc,	// (0x0001edb9) cf0_flow_pane_g

0x8c14,	// (0x00017b11) cf0_flow_pane_t1

0x9482,	// (0x0001837f) main_call6_pane

0x9482,	// (0x0001837f) main_calllock_pane

0x8c22,	// (0x00017b1f) call6_btn_grp_pane_ParamLimits

0x8c22,	// (0x00017b1f) call6_btn_grp_pane

0x8c3c,	// (0x00017b39) call6_pane_g1_ParamLimits

0x8c3c,	// (0x00017b39) call6_pane_g1

0x8c51,	// (0x00017b4e) popup_call6_1st_window_ParamLimits

0x8c51,	// (0x00017b4e) popup_call6_1st_window

0x8c62,	// (0x00017b5f) popup_call6_2nd_window_ParamLimits

0x8c62,	// (0x00017b5f) popup_call6_2nd_window

0x8c73,	// (0x00017b70) cell_call6_btn_pane_ParamLimits

0x8c73,	// (0x00017b70) cell_call6_btn_pane

0x9e86,	// (0x00018d83) bg_popup_call2_in_pane_cp03

0xee35,	// (0x0001dd32) popup_call6_1st_window_g1

0xee3d,	// (0x0001dd3a) popup_call6_1st_window_g2

0xee45,	// (0x0001dd42) popup_call6_1st_window_g3

0x0002,

0xfec1,	// (0x0001edbe) popup_call6_1st_window_g

0xee4d,	// (0x0001dd4a) popup_call6_1st_window_t1

0xee5c,	// (0x0001dd59) popup_call6_1st_window_t2

0xee6c,	// (0x0001dd69) popup_call6_1st_window_t3

0x0002,

0xfec8,	// (0x0001edc5) popup_call6_1st_window_t

0x9e86,	// (0x00018d83) bg_popup_call2_in_pane_cp04

0xee35,	// (0x0001dd32) popup_call6_2nd_window_g1

0xee3d,	// (0x0001dd3a) popup_call6_2nd_window_g2

0xee45,	// (0x0001dd42) popup_call6_2nd_window_g3

0x0002,

0xfec1,	// (0x0001edbe) popup_call6_2nd_window_g

0xee4d,	// (0x0001dd4a) popup_call6_2nd_window_t1

0x9482,	// (0x0001837f) bg_button_pane_cp15

0xee7c,	// (0x0001dd79) cell_call6_btn_pane_g1

0xee85,	// (0x0001dd82) cell_call6_btn_pane_t1

0x8c87,	// (0x00017b84) listscroll_wgtman_pane_ParamLimits

0x8c87,	// (0x00017b84) listscroll_wgtman_pane

0x8ca8,	// (0x00017ba5) wgtman_btn_pane_ParamLimits

0x8ca8,	// (0x00017ba5) wgtman_btn_pane

0xa756,	// (0x00019653) aid_scroll_copy1

0xee94,	// (0x0001dd91) list_wgtman_pane

0x8ceb,	// (0x00017be8) wgtman_btn_pane_g1_ParamLimits

0x8ceb,	// (0x00017be8) wgtman_btn_pane_g1

0x8d17,	// (0x00017c14) wgtman_btn_pane_t1_ParamLimits

0x8d17,	// (0x00017c14) wgtman_btn_pane_t1

0xee9e,	// (0x0001dd9b) wgtman_btn_pane_t2_ParamLimits

0xee9e,	// (0x0001dd9b) wgtman_btn_pane_t2

0x0001,

0xfecf,	// (0x0001edcc) wgtman_btn_pane_t_ParamLimits

0xfecf,	// (0x0001edcc) wgtman_btn_pane_t

0x8d54,	// (0x00017c51) listrow_wgtman_pane_ParamLimits

0x8d54,	// (0x00017c51) listrow_wgtman_pane

0x8d66,	// (0x00017c63) listrow_wgtman_pane_g1

0x8d73,	// (0x00017c70) listrow_wgtman_pane_g2

0x0001,

0xfed4,	// (0x0001edd1) listrow_wgtman_pane_g

0x8d91,	// (0x00017c8e) listrow_wgtman_pane_t1

0x8da9,	// (0x00017ca6) listrow_wgtman_pane_t2

0x0001,

0xfed9,	// (0x0001edd6) listrow_wgtman_pane_t

0x8dcf,	// (0x00017ccc) wait_bar_pane_cp09

0xeeb5,	// (0x0001ddb2) main_calllock_btn_pane

0xeebf,	// (0x0001ddbc) main_calllock_pane_g1

0x9482,	// (0x0001837f) bg_button_pane_cp17

0xeecb,	// (0x0001ddc8) main_calllock_btn_pane_g1

0xeed4,	// (0x0001ddd1) main_calllock_btn_pane_t1

0x9482,	// (0x0001837f) main_dialer3_pane

0x9482,	// (0x0001837f) main_fmrd2_pane

0xc385,	// (0x0001b282) main_fs_bigclock_unlock_btn_pane_g1

0xeeeb,	// (0x0001dde8) main_fs_bigclock_unlock_btn_pane_t1

0x8de1,	// (0x00017cde) area_fmrd2_info_pane_ParamLimits

0x8de1,	// (0x00017cde) area_fmrd2_info_pane

0x8df2,	// (0x00017cef) area_fmrd2_visual_pane_ParamLimits

0x8df2,	// (0x00017cef) area_fmrd2_visual_pane

0x8e00,	// (0x00017cfd) fmrd2_indi_pane_ParamLimits

0x8e00,	// (0x00017cfd) fmrd2_indi_pane

0x8e0d,	// (0x00017d0a) area_fmrd2_visual_pane_g1

0x8e15,	// (0x00017d12) area_fmrd2_visual_pane_t1

0x8e25,	// (0x00017d22) area_fmrd2_visual_pane_t2

0x8e35,	// (0x00017d32) area_fmrd2_visual_pane_t3

0x0002,

0xfee3,	// (0x0001ede0) area_fmrd2_visual_pane_t

0x8e45,	// (0x00017d42) area_fmrd2_info_pane_g1

0x8e4d,	// (0x00017d4a) area_fmrd2_info_pane_t1

0x8e5d,	// (0x00017d5a) area_fmrd2_info_pane_t2

0x8e6d,	// (0x00017d6a) area_fmrd2_info_pane_t3

0x8e7d,	// (0x00017d7a) area_fmrd2_info_pane_t4

0x0003,

0xfeea,	// (0x0001ede7) area_fmrd2_info_pane_t

0x8e8b,	// (0x00017d88) fmrd2_indi_pane_t1

0x8e9b,	// (0x00017d98) fmrd2_indi_pane_t2

0x8eab,	// (0x00017da8) fmrd2_indi_pane_t3

0x0002,

0xfef3,	// (0x0001edf0) fmrd2_indi_pane_t

0xe158,	// (0x0001d055) list_single_fs_bigclock_indicator_pane_g5_ParamLimits

0xe158,	// (0x0001d055) list_single_fs_bigclock_indicator_pane_g5

0xe208,	// (0x0001d105) list_single_fs_bigclock_indicator_pane_t5_ParamLimits

0xe208,	// (0x0001d105) list_single_fs_bigclock_indicator_pane_t5

0x85a7,	// (0x000174a4) aid_cell_bcale_month_pane_ParamLimits

0x85a7,	// (0x000174a4) aid_cell_bcale_month_pane

0x85c5,	// (0x000174c2) bcale_month_pane_ParamLimits

0x85c5,	// (0x000174c2) bcale_month_pane

0x85e9,	// (0x000174e6) bcale_preview_pane_ParamLimits

0x85e9,	// (0x000174e6) bcale_preview_pane

0xec90,	// (0x0001db8d) list_single_fs_bigclock_pane_t1_ParamLimits

0xecaf,	// (0x0001dbac) list_single_fs_bigclock_pane_t2_ParamLimits

0xecaf,	// (0x0001dbac) list_single_fs_bigclock_pane_t2

0x0001,

0xfe75,	// (0x0001ed72) list_single_fs_bigclock_pane_t_ParamLimits

0xfe75,	// (0x0001ed72) list_single_fs_bigclock_pane_t

0xeee3,	// (0x0001dde0) main_fs_bigclock_unlock_btn_pane_g2

0x0001,

0xfede,	// (0x0001eddb) main_fs_bigclock_unlock_btn_pane_g

0x8ebb,	// (0x00017db8) aid_dia3_key_size_ParamLimits

0x8ebb,	// (0x00017db8) aid_dia3_key_size

0x8eca,	// (0x00017dc7) aid_dia3_listrow_size_ParamLimits

0x8eca,	// (0x00017dc7) aid_dia3_listrow_size

0x8edf,	// (0x00017ddc) dia3_keypad_fun_pane_ParamLimits

0x8edf,	// (0x00017ddc) dia3_keypad_fun_pane

0x8efb,	// (0x00017df8) dia3_keypad_num_pane_ParamLimits

0x8efb,	// (0x00017df8) dia3_keypad_num_pane

0x8f16,	// (0x00017e13) dia3_listscroll_pane_ParamLimits

0x8f16,	// (0x00017e13) dia3_listscroll_pane

0x8f29,	// (0x00017e26) dia3_numentry_pane_ParamLimits

0x8f29,	// (0x00017e26) dia3_numentry_pane

0xeef9,	// (0x0001ddf6) dia3_list_pane

0xef04,	// (0x0001de01) scroll_pane_cp12

0x9482,	// (0x0001837f) bg_dia3_numentry_pane

0x8f3d,	// (0x00017e3a) dia3_numentry_pane_t1

0x8f4c,	// (0x00017e49) cell_dia3_key_num_pane

0x8f54,	// (0x00017e51) cell_dia3_key0_fun_pane_ParamLimits

0x8f54,	// (0x00017e51) cell_dia3_key0_fun_pane

0x8f68,	// (0x00017e65) cell_dia3_key1_fun_pane_ParamLimits

0x8f68,	// (0x00017e65) cell_dia3_key1_fun_pane

0x8f80,	// (0x00017e7d) dia3_listrow_pane

0xde67,	// (0x0001cd64) bg_dia3_numentry_pane_g1

0x9482,	// (0x0001837f) bg_button_pane_cp21

0xef0f,	// (0x0001de0c) cell_dia3_key_num_pane_t1

0xef1d,	// (0x0001de1a) cell_dia3_key_num_pane_t2

0xef2c,	// (0x0001de29) cell_dia3_key_num_pane_t3

0xef3b,	// (0x0001de38) cell_dia3_key_num_pane_t4

0x0003,

0xfefa,	// (0x0001edf7) cell_dia3_key_num_pane_t

0x9482,	// (0x0001837f) bg_button_pane_cp19

0x8f92,	// (0x00017e8f) cell_dia3_key0_fun_pane_g1

0x9482,	// (0x0001837f) bg_button_pane_cp20

0x8f9a,	// (0x00017e97) cell_dia3_key1_fun_pane_g1

0x8fa2,	// (0x00017e9f) area_left_week_number_pane

0x8fae,	// (0x00017eab) area_top_day_name_pane

0x8fc1,	// (0x00017ebe) frame_month_view_pane

0xef4a,	// (0x0001de47) grid_month_view_pane

0x8fd4,	// (0x00017ed1) cell_top_day_name_pane_ParamLimits

0x8fd4,	// (0x00017ed1) cell_top_day_name_pane

0x9001,	// (0x00017efe) cell_area_left_week_number_pane_ParamLimits

0x9001,	// (0x00017efe) cell_area_left_week_number_pane

0x9015,	// (0x00017f12) cell_month_view_pane_ParamLimits

0x9015,	// (0x00017f12) cell_month_view_pane

0xef58,	// (0x0001de55) frm_month_g1

0x9042,	// (0x00017f3f) frm_month_g2

0x9055,	// (0x00017f52) frm_month_g3

0x9068,	// (0x00017f65) frm_month_g4

0x907b,	// (0x00017f78) frm_month_g5

0x908e,	// (0x00017f8b) frm_month_g6

0x90a1,	// (0x00017f9e) frm_month_g7

0xef65,	// (0x0001de62) frm_month_g8

0x90b4,	// (0x00017fb1) frm_month_g9

0x90c4,	// (0x00017fc1) frm_month_g10

0x90d4,	// (0x00017fd1) frm_month_g11

0x90e4,	// (0x00017fe1) frm_month_g12

0x90f6,	// (0x00017ff3) frm_month_g13

0x9108,	// (0x00018005) frm_month_g14

0x911c,	// (0x00018019) frm_month_g15

0x9130,	// (0x0001802d) frm_month_g16

0x000f,

0xff03,	// (0x0001ee00) frm_month_g

0xef72,	// (0x0001de6f) cell_top_day_name_pane_t1

0x9144,	// (0x00018041) cell_area_left_week_number_pane_g1

0x9150,	// (0x0001804d) cell_area_left_week_number_pane_t1

0xc5f1,	// (0x0001b4ee) cell_month_view_pane_g1

0x9163,	// (0x00018060) cell_month_view_pane_t1

0x9482,	// (0x0001837f) main_fps_pane

0xe401,	// (0x0001d2fe) cmail_ddmenu_btn02_pane_cp1_ParamLimits

0xe401,	// (0x0001d2fe) cmail_ddmenu_btn02_pane_cp1

0xe41d,	// (0x0001d31a) cmail_ddmenu_btn02_pane_cp2_ParamLimits

0xe41d,	// (0x0001d31a) cmail_ddmenu_btn02_pane_cp2

0x88a0,	// (0x0001779d) cmail_ddmenu_btn02_pane_g2_ParamLimits

0x88a0,	// (0x0001779d) cmail_ddmenu_btn02_pane_g2

0x0001,

0xfe28,	// (0x0001ed25) cmail_ddmenu_btn02_pane_g_ParamLimits

0xfe28,	// (0x0001ed25) cmail_ddmenu_btn02_pane_g

0x88bf,	// (0x000177bc) cmail_ddmenu_btn02_pane_t2_ParamLimits

0x88bf,	// (0x000177bc) cmail_ddmenu_btn02_pane_t2

0x0001,

0xfe2d,	// (0x0001ed2a) cmail_ddmenu_btn02_pane_t_ParamLimits

0xfe2d,	// (0x0001ed2a) cmail_ddmenu_btn02_pane_t

0x9176,	// (0x00018073) fps_text_pane_ParamLimits

0x9176,	// (0x00018073) fps_text_pane

0x918d,	// (0x0001808a) main_fps_pane_g1_ParamLimits

0x918d,	// (0x0001808a) main_fps_pane_g1

0x91a7,	// (0x000180a4) wait_bar_pane_cp010_ParamLimits

0x91a7,	// (0x000180a4) wait_bar_pane_cp010

0x91b8,	// (0x000180b5) fps_text_pane_t1_ParamLimits

0x91b8,	// (0x000180b5) fps_text_pane_t1

0xea4a,	// (0x0001d947) cam4_image_uncrop_pane_g1

0xea53,	// (0x0001d950) cam4_image_uncrop_pane_g2

0x5a56,	// (0x00014953) cam4_image_uncrop_pane_g3

0x5a5f,	// (0x0001495c) cam4_image_uncrop_pane_g4

0x0003,

0xf8ee,	// (0x0001e7eb) cam4_image_uncrop_pane_g

0x8f80,	// (0x00017e7d) dia3_listrow_pane_ParamLimits

0x9482,	// (0x0001837f) main_phob2_pane

0x83f2,	// (0x000172ef) cell_tport_appsw_pane_cp02_ParamLimits

0x83f2,	// (0x000172ef) cell_tport_appsw_pane_cp02

0x8406,	// (0x00017303) cell_tport_appsw_pane_cp03_ParamLimits

0x8406,	// (0x00017303) cell_tport_appsw_pane_cp03

0x9482,	// (0x0001837f) phob2_contact_card_pane

0x9482,	// (0x0001837f) phob2_listscroll_pane

0xef85,	// (0x0001de82) phob2_list_pane

0xef8d,	// (0x0001de8a) scroll_pane_cp034

0x91d0,	// (0x000180cd) phob2_cc_data_pane_ParamLimits

0x91d0,	// (0x000180cd) phob2_cc_data_pane

0x91ef,	// (0x000180ec) phob2_cc_listscroll_pane_ParamLimits

0x91ef,	// (0x000180ec) phob2_cc_listscroll_pane

0x8d54,	// (0x00017c51) list_double_large_graphic_phob2_pane_ParamLimits

0x8d54,	// (0x00017c51) list_double_large_graphic_phob2_pane

0x920d,	// (0x0001810a) list_double_large_graphic_phob2_pane_g1_ParamLimits

0x920d,	// (0x0001810a) list_double_large_graphic_phob2_pane_g1

0x9223,	// (0x00018120) list_double_large_graphic_phob2_pane_g2_ParamLimits

0x9223,	// (0x00018120) list_double_large_graphic_phob2_pane_g2

0x0001,

0xff24,	// (0x0001ee21) list_double_large_graphic_phob2_pane_g_ParamLimits

0xff24,	// (0x0001ee21) list_double_large_graphic_phob2_pane_g

0x922f,	// (0x0001812c) list_double_large_graphic_phob2_pane_t1_ParamLimits

0x922f,	// (0x0001812c) list_double_large_graphic_phob2_pane_t1

0x9244,	// (0x00018141) list_double_large_graphic_phob2_pane_t2_ParamLimits

0x9244,	// (0x00018141) list_double_large_graphic_phob2_pane_t2

0x0001,

0xff29,	// (0x0001ee26) list_double_large_graphic_phob2_pane_t_ParamLimits

0xff29,	// (0x0001ee26) list_double_large_graphic_phob2_pane_t

0x9482,	// (0x0001837f) list_highlight_pane_cp024

0x9256,	// (0x00018153) phob2_cc_button_pane

0x925e,	// (0x0001815b) phob2_cc_data_pane_g1_ParamLimits

0x925e,	// (0x0001815b) phob2_cc_data_pane_g1

0x9273,	// (0x00018170) phob2_cc_data_pane_g2_ParamLimits

0x9273,	// (0x00018170) phob2_cc_data_pane_g2

0x0001,

0xff2e,	// (0x0001ee2b) phob2_cc_data_pane_g_ParamLimits

0xff2e,	// (0x0001ee2b) phob2_cc_data_pane_g

0x9283,	// (0x00018180) phob2_cc_data_pane_t1_ParamLimits

0x9283,	// (0x00018180) phob2_cc_data_pane_t1

0x929b,	// (0x00018198) phob2_cc_data_pane_t2_ParamLimits

0x929b,	// (0x00018198) phob2_cc_data_pane_t2

0x92b3,	// (0x000181b0) phob2_cc_data_pane_t3_ParamLimits

0x92b3,	// (0x000181b0) phob2_cc_data_pane_t3

0x0002,

0xff33,	// (0x0001ee30) phob2_cc_data_pane_t_ParamLimits

0xff33,	// (0x0001ee30) phob2_cc_data_pane_t

0xef95,	// (0x0001de92) phob2_cc_list_pane_ParamLimits

0xef95,	// (0x0001de92) phob2_cc_list_pane

0xd56c,	// (0x0001c469) scroll_pane_cp035_ParamLimits

0xd56c,	// (0x0001c469) scroll_pane_cp035

0x94f2,	// (0x000183ef) bg_button_pane_cp033

0xefa1,	// (0x0001de9e) phob2_cc_button_pane_g1

0xefad,	// (0x0001deaa) phob2_cc_button_pane_t1

0xefc2,	// (0x0001debf) phob2_cc_button_pane_t2

0x0001,

0xff3a,	// (0x0001ee37) phob2_cc_button_pane_t

0x92cb,	// (0x000181c8) list_double_large_graphic_phob2_cc_pane_ParamLimits

0x92cb,	// (0x000181c8) list_double_large_graphic_phob2_cc_pane

0x92dd,	// (0x000181da) list_double_large_graphic_phob2_cc_pane_g1_ParamLimits

0x92dd,	// (0x000181da) list_double_large_graphic_phob2_cc_pane_g1

0x92e9,	// (0x000181e6) list_double_large_graphic_phob2_cc_pane_g2_ParamLimits

0x92e9,	// (0x000181e6) list_double_large_graphic_phob2_cc_pane_g2

0x92f5,	// (0x000181f2) list_double_large_graphic_phob2_cc_pane_g3_ParamLimits

0x92f5,	// (0x000181f2) list_double_large_graphic_phob2_cc_pane_g3

0x9301,	// (0x000181fe) list_double_large_graphic_phob2_cc_pane_g4_ParamLimits

0x9301,	// (0x000181fe) list_double_large_graphic_phob2_cc_pane_g4

0x930d,	// (0x0001820a) list_double_large_graphic_phob2_cc_pane_g5_ParamLimits

0x930d,	// (0x0001820a) list_double_large_graphic_phob2_cc_pane_g5

0x0004,

0xff3f,	// (0x0001ee3c) list_double_large_graphic_phob2_cc_pane_g_ParamLimits

0xff3f,	// (0x0001ee3c) list_double_large_graphic_phob2_cc_pane_g

0x9319,	// (0x00018216) list_double_large_graphic_phob2_cc_pane_t1_ParamLimits

0x9319,	// (0x00018216) list_double_large_graphic_phob2_cc_pane_t1

0x9342,	// (0x0001823f) list_double_large_graphic_phob2_cc_pane_t2_ParamLimits

0x9342,	// (0x0001823f) list_double_large_graphic_phob2_cc_pane_t2

0x0001,

0xff4a,	// (0x0001ee47) list_double_large_graphic_phob2_cc_pane_t_ParamLimits

0xff4a,	// (0x0001ee47) list_double_large_graphic_phob2_cc_pane_t

0xefd4,	// (0x0001ded1) list_highlight_pane_cp025_ParamLimits

0xefd4,	// (0x0001ded1) list_highlight_pane_cp025

0x94f2,	// (0x000183ef) bg_button_pane_cp033_ParamLimits

0xefa1,	// (0x0001de9e) phob2_cc_button_pane_g1_ParamLimits

0xefad,	// (0x0001deaa) phob2_cc_button_pane_t1_ParamLimits

0xefc2,	// (0x0001debf) phob2_cc_button_pane_t2_ParamLimits

0xff3a,	// (0x0001ee37) phob2_cc_button_pane_t_ParamLimits

0x03da,	// (0x0000f2d7) popup_wgtman_window

0xd30a,	// (0x0001c207) scroll_pane_cp038

0x8ccd,	// (0x00017bca) wgtman_btn_pane_cp_01_ParamLimits

0x8ccd,	// (0x00017bca) wgtman_btn_pane_cp_01

0xefe2,	// (0x0001dedf) wgtman_content_pane

0xefeb,	// (0x0001dee8) wgtman_heading_pane

0x9482,	// (0x0001837f) bg_heading_pane_cp02

0xeff4,	// (0x0001def1) wgtman_heading_pane_g1

0xeffc,	// (0x0001def9) wgtman_heading_pane_t1

0xf00a,	// (0x0001df07) scroll_pane_cp036

0xf012,	// (0x0001df0f) wgtman_list_pane

0xf01a,	// (0x0001df17) wgtman_list_pane_t1_ParamLimits

0xf01a,	// (0x0001df17) wgtman_list_pane_t1

0xd057,	// (0x0001bf54) cam4_grid_pane

0x67f6,	// (0x000156f3) bg_button_pane_cp015_ParamLimits

0x6808,	// (0x00015705) bg_button_pane_cp016_ParamLimits

0x681b,	// (0x00015718) bg_button_pane_cp017_ParamLimits

0x6873,	// (0x00015770) popup_vitu2_query_window_g3_ParamLimits

0x6873,	// (0x00015770) popup_vitu2_query_window_g3

0x6930,	// (0x0001582d) popup_vitu2_query_window_t6_ParamLimits

0x6930,	// (0x0001582d) popup_vitu2_query_window_t6

0x695b,	// (0x00015858) popup_vitu2_query_window_t7_ParamLimits

0x695b,	// (0x00015858) popup_vitu2_query_window_t7

0xea4a,	// (0x0001d947) cam4_grid_pane_g1

0xea53,	// (0x0001d950) cam4_grid_pane_g2

0xf034,	// (0x0001df31) cam4_grid_pane_g3

0xf03d,	// (0x0001df3a) cam4_grid_pane_g4

0x0003,

0xff4f,	// (0x0001ee4c) cam4_grid_pane_g

0x13f1,	// (0x000102ee) aid_placing_vt_slider_lsc_ParamLimits

0x16fc,	// (0x000105f9) vidtel_button_pane_ParamLimits

0x16fc,	// (0x000105f9) vidtel_button_pane

0x9482,	// (0x0001837f) bg_button_pane_cp034

0x936b,	// (0x00018268) vidtel_button_pane_g1

0xf048,	// (0x0001df45) vidtel_button_pane_t1

0xd477,	// (0x0001c374) aid_size_vtel_slider_touch

0xd56c,	// (0x0001c469) scroll_pane_cp039

0xdea5,	// (0x0001cda2) ncim_query_button_pane_cp01_ParamLimits

0xdec4,	// (0x0001cdc1) ncimui_query_pane_g1_ParamLimits

0x94f2,	// (0x000183ef) input_focus_pane_cp012_ParamLimits

0xdee9,	// (0x0001cde6) ncim_query_entry_pane_t1_ParamLimits

0xd56c,	// (0x0001c469) scroll_pane_cp039_ParamLimits

0xa83a,	// (0x00019737) navi_pane_bcale_mc_g1

0xa842,	// (0x0001973f) navi_pane_bcale_mc_t1

0xe466,	// (0x0001d363) main_sp_fs_email_pane_g1

0xe472,	// (0x0001d36f) main_sp_fs_email_pane_g2

0x0001,

0xfce5,	// (0x0001ebe2) main_sp_fs_email_pane_g

0xe8ea,	// (0x0001d7e7) list_single_cale_mrui_row_pane_g3_ParamLimits

0xe8ea,	// (0x0001d7e7) list_single_cale_mrui_row_pane_g3

0x88df,	// (0x000177dc) list_single_recal_day_pane_g5_event_pane

0xeadb,	// (0x0001d9d8) list_single_recal_day_pane_g7

0xf05e,	// (0x0001df5b) list_recal_day_event_pane_cp01

0xf067,	// (0x0001df64) list_recal_vselct_arw_lo_pane_cp01

0xf06f,	// (0x0001df6c) list_recal_vselct_arw_up_pane_cp01

0xf077,	// (0x0001df74) list_recal_vselct_pane_cp01

0xd4c3,	// (0x0001c3c0) list_recal_day_event_pane_cp01_g1

0xf081,	// (0x0001df7e) list_recal_day_event_pane_cp01_t1

0xeae3,	// (0x0001d9e0) list_single_recal_day_pane_t1_ParamLimits

0xeaf5,	// (0x0001d9f2) list_single_recal_day_pane_t2_ParamLimits

0xfe3d,	// (0x0001ed3a) list_single_recal_day_pane_t_ParamLimits

0x9b6e,	// (0x00018a6b) bg_notes_pane_ParamLimits

0x9c19,	// (0x00018b16) list_notes_pane_ParamLimits

0x0723,	// (0x0000f620) scroll_pane_cp06_ParamLimits

0x9c55,	// (0x00018b52) main_notes_pane_ParamLimits

0x9482,	// (0x0001837f) main_welc_pane

0x9373,	// (0x00018270) main_welc_body_pane_ParamLimits

0x9373,	// (0x00018270) main_welc_body_pane

0x9391,	// (0x0001828e) main_welc_opti_pane_ParamLimits

0x9391,	// (0x0001828e) main_welc_opti_pane

0x93d6,	// (0x000182d3) main_welc_pane_t1_ParamLimits

0x93d6,	// (0x000182d3) main_welc_pane_t1

0x93f4,	// (0x000182f1) main_welc_body_row_pane_ParamLimits

0x93f4,	// (0x000182f1) main_welc_body_row_pane

0xd287,	// (0x0001c184) main_welc_opti_row_pane_ParamLimits

0xd287,	// (0x0001c184) main_welc_opti_row_pane

0xf08f,	// (0x0001df8c) main_welc_opti_row_pane_g1

0x9408,	// (0x00018305) main_welc_opti_row_pane_t1

0xf097,	// (0x0001df94) main_welc_body_row_pane_t1

0xed70,	// (0x0001dc6d) popup_notif_wgt_heading_pane

0xed8a,	// (0x0001dc87) aid_size_list_notif_wgt_del_ParamLimits

0xed97,	// (0x0001dc94) list_notif_wgt_row_pane_g1_ParamLimits

0xeda3,	// (0x0001dca0) list_notif_wgt_row_pane_g2_ParamLimits

0xedb7,	// (0x0001dcb4) list_notif_wgt_row_pane_g3_ParamLimits

0xfea4,	// (0x0001eda1) list_notif_wgt_row_pane_g_ParamLimits

0xedc4,	// (0x0001dcc1) list_notif_wgt_row_pane_t1_ParamLimits

0xedda,	// (0x0001dcd7) list_notif_wgt_row_pane_t2_ParamLimits

0xedec,	// (0x0001dce9) list_notif_wgt_row_pane_t3_ParamLimits

0xfeab,	// (0x0001eda8) list_notif_wgt_row_pane_t_ParamLimits

0x8d66,	// (0x00017c63) listrow_wgtman_pane_g1_ParamLimits

0x8d73,	// (0x00017c70) listrow_wgtman_pane_g2_ParamLimits

0xfed4,	// (0x0001edd1) listrow_wgtman_pane_g_ParamLimits

0x8d91,	// (0x00017c8e) listrow_wgtman_pane_t1_ParamLimits

0x8da9,	// (0x00017ca6) listrow_wgtman_pane_t2_ParamLimits

0xfed9,	// (0x0001edd6) listrow_wgtman_pane_t_ParamLimits

0x8dcf,	// (0x00017ccc) wait_bar_pane_cp09_ParamLimits

0x9482,	// (0x0001837f) bg_popup_heading_pane_cp02

0xf0a6,	// (0x0001dfa3) popup_notif_wgt_heading_pane_g1

0xf0ae,	// (0x0001dfab) popup_notif_wgt_heading_pane_t1

0x9482,	// (0x0001837f) main_vids_pane

0x9482,	// (0x0001837f) vids_listscroll_pane

0x9417,	// (0x00018314) scroll_pane_cp040

0x9482,	// (0x0001837f) vids_list_pane

0x9422,	// (0x0001831f) vids_list_double_pane_ParamLimits

0x9422,	// (0x0001831f) vids_list_double_pane

0x9433,	// (0x00018330) vids_list_double_pane_g1

0x943c,	// (0x00018339) vids_list_double_pane_t1

0x944c,	// (0x00018349) vids_list_double_pane_t2

0x0001,

0xff5d,	// (0x0001ee5a) vids_list_double_pane_t

0x94f2,	// (0x000183ef) main_ncimui_pane_ParamLimits

0x7562,	// (0x0001645f) main_ncimui_pane_g1_ParamLimits

0x756e,	// (0x0001646b) main_ncimui_pane_g2_ParamLimits

0x756e,	// (0x0001646b) main_ncimui_pane_g2

0x0001,

0xfbea,	// (0x0001eae7) main_ncimui_pane_g_ParamLimits

0xfbea,	// (0x0001eae7) main_ncimui_pane_g

0x93ac,	// (0x000182a9) main_welc_pane_g1_ParamLimits

0x93ac,	// (0x000182a9) main_welc_pane_g1

0x93c1,	// (0x000182be) main_welc_pane_g2_ParamLimits

0x93c1,	// (0x000182be) main_welc_pane_g2

0x0001,

0xff58,	// (0x0001ee55) main_welc_pane_g_ParamLimits

0xff58,	// (0x0001ee55) main_welc_pane_g

0x9b6e,	// (0x00018a6b) listscroll_mce_pane_ParamLimits

0xa98f,	// (0x0001988c) wait_bar_pane_cp10

0xbe5e,	// (0x0001ad5b) main_cale_day_pane_ParamLimits

0xbe5e,	// (0x0001ad5b) main_cale_week_pane_ParamLimits

0x9b6e,	// (0x00018a6b) main_messa_pane_ParamLimits

0x4d92,	// (0x00013c8f) main_clock2_btn_pane_ParamLimits

0x4d92,	// (0x00013c8f) main_clock2_btn_pane

0xc7a5,	// (0x0001b6a2) main_clock2_btn_pane_cp01_ParamLimits

0xc7a5,	// (0x0001b6a2) main_clock2_btn_pane_cp01

0xe876,	// (0x0001d773) list_cale_mrui_pane_ParamLimits

0xee22,	// (0x0001dd1f) main_cf0_pane_g2

0x0001,

0xfeb2,	// (0x0001edaf) main_cf0_pane_g

0x8fa2,	// (0x00017e9f) area_left_week_number_pane_ParamLimits

0x8fae,	// (0x00017eab) area_top_day_name_pane_ParamLimits

0x8fc1,	// (0x00017ebe) frame_month_view_pane_ParamLimits

0xef4a,	// (0x0001de47) grid_month_view_pane_ParamLimits

0xef58,	// (0x0001de55) frm_month_g1_ParamLimits

0x9042,	// (0x00017f3f) frm_month_g2_ParamLimits

0x9055,	// (0x00017f52) frm_month_g3_ParamLimits

0x9068,	// (0x00017f65) frm_month_g4_ParamLimits

0x907b,	// (0x00017f78) frm_month_g5_ParamLimits

0x908e,	// (0x00017f8b) frm_month_g6_ParamLimits

0x90a1,	// (0x00017f9e) frm_month_g7_ParamLimits

0xef65,	// (0x0001de62) frm_month_g8_ParamLimits

0x90b4,	// (0x00017fb1) frm_month_g9_ParamLimits

0x90c4,	// (0x00017fc1) frm_month_g10_ParamLimits

0x90d4,	// (0x00017fd1) frm_month_g11_ParamLimits

0x90e4,	// (0x00017fe1) frm_month_g12_ParamLimits

0x90f6,	// (0x00017ff3) frm_month_g13_ParamLimits

0x9108,	// (0x00018005) frm_month_g14_ParamLimits

0x911c,	// (0x00018019) frm_month_g15_ParamLimits

0x9130,	// (0x0001802d) frm_month_g16_ParamLimits

0xff03,	// (0x0001ee00) frm_month_g_ParamLimits

0xef72,	// (0x0001de6f) cell_top_day_name_pane_t1_ParamLimits

0x9144,	// (0x00018041) cell_area_left_week_number_pane_g1_ParamLimits

0x9150,	// (0x0001804d) cell_area_left_week_number_pane_t1_ParamLimits

0xc5f1,	// (0x0001b4ee) cell_month_view_pane_g1_ParamLimits

0x9163,	// (0x00018060) cell_month_view_pane_t1_ParamLimits

0x9b66,	// (0x00018a63) main_clock2_btn_pane_g1

0xf0bc,	// (0x0001dfb9) main_clock2_btn_pane_t1

0x94f2,	// (0x000183ef) listscroll_cmail_pane_ParamLimits

0xe466,	// (0x0001d363) main_sp_fs_email_pane_g1_ParamLimits

0xe472,	// (0x0001d36f) main_sp_fs_email_pane_g2_ParamLimits

0xfce5,	// (0x0001ebe2) main_sp_fs_email_pane_g_ParamLimits

0xea39,	// (0x0001d936) list_recal_day_pane_ParamLimits

0xea5c,	// (0x0001d959) mian_recal_day_pane_t1

0x805b,	// (0x00016f58) list_single_dyc_row_text_pane_t4_ParamLimits

0x805b,	// (0x00016f58) list_single_dyc_row_text_pane_t4

0x80a4,	// (0x00016fa1) list_single_dyc_row_text_pane_t5_ParamLimits

0x80a4,	// (0x00016fa1) list_single_dyc_row_text_pane_t5

0xe518,	// (0x0001d415) list_single_dyc_row_text_pane_t6_ParamLimits

0xe518,	// (0x0001d415) list_single_dyc_row_text_pane_t6

0x23d4,	// (0x000112d1) aid_mgn_list_cale_time_pane

0x94f2,	// (0x000183ef) main_gallery2_pane_ParamLimits

0xc7bb,	// (0x0001b6b8) main_clock2_pane_cp01_t1

0xc7cb,	// (0x0001b6c8) main_clock2_pane_cp01_t3

0x0001,

0xf7c4,	// (0x0001e6c1) main_clock2_pane_cp01_t

0x0add,	// (0x0000f9da) cale_week_scroll_pane_g16_ParamLimits

0x0add,	// (0x0000f9da) cale_week_scroll_pane_g16

0x9e86,	// (0x00018d83) vorec_slider_pane

0xf048,	// (0x0001df45) vidtel_button_pane_t1_ParamLimits
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
	};

} // end of namespace AknLayoutScalable_Elaf_phl_apps_qhd_lsc_tch_Normal
