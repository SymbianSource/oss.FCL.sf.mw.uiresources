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

#include "aknlayoutscalable_abrw_pnp4_apps_nhd4_prt_tch_large.h"
#include "AknLayout2ScalableDecode.h"
namespace AknLayoutScalable_Apps { extern const TUint8 KByteCodedData_AknLayoutScalable_Elaf_pnp4_apps_nhd4_prt_tch[]; }

namespace AknLayoutScalable_Abrw_pnp4_apps_nhd4_prt_tch_Large
{

extern const TUint16 KDataLookup[AknLayoutScalable_Apps::E_TApiId_TableSize];
const SCompDataImplData KImplData = { KDataLookup, AknLayoutScalable_Apps::KByteCodedData_AknLayoutScalable_Elaf_pnp4_apps_nhd4_prt_tch + 0x00077a47 };

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
0x4c9a,	// (0x0007c6e1) Screen

0x4ca6,	// (0x0007c6ed) application_window

0x4d02,	// (0x0007c749) area_bottom_pane_ParamLimits

0x4d02,	// (0x0007c749) area_bottom_pane

0x4d5a,	// (0x0007c7a1) area_top_pane_ParamLimits

0x4d5a,	// (0x0007c7a1) area_top_pane

0x4dbe,	// (0x0007c805) call_video_uplink_pane_ParamLimits

0x4dbe,	// (0x0007c805) call_video_uplink_pane

0x4dfd,	// (0x0007c844) main_pane_ParamLimits

0x4dfd,	// (0x0007c844) main_pane

0xe236,	// (0x00085c7d) context_pane

0x8293,	// (0x0007fcda) navi_pane

0x82b9,	// (0x0007fd00) popup_cale_events_window_ParamLimits

0x82b9,	// (0x0007fd00) popup_cale_events_window

0xe249,	// (0x00085c90) popup_mup_playback_window

0x82d1,	// (0x0007fd18) signal_pane

0x0964,	// (0x000783ab) main_browser_pane

0x0b90,	// (0x000785d7) main_burst_pane

0x8109,	// (0x0007fb50) main_calc_pane

0xe21c,	// (0x00085c63) main_cale_day_pane

0x540a,	// (0x0007ce51) main_cale_month_pane

0xe21c,	// (0x00085c63) main_cale_week_pane

0x0b90,	// (0x000785d7) main_call_pane

0xd787,	// (0x000851ce) main_call_poc_pane

0x0b90,	// (0x000785d7) main_camera_pane

0x0b90,	// (0x000785d7) main_chi_dic_pane

0x1400,	// (0x00078e47) main_clock_pane

0xd787,	// (0x000851ce) main_fmradio_pane

0x0b90,	// (0x000785d7) main_graph_messa_pane

0xd787,	// (0x000851ce) main_help_pane

0x0964,	// (0x000783ab) main_im_pane

0x0863,	// (0x000782aa) main_image_pane_ParamLimits

0x0863,	// (0x000782aa) main_image_pane

0xd787,	// (0x000851ce) main_location2_pane

0x0b90,	// (0x000785d7) main_location_pane

0x0863,	// (0x000782aa) main_messa_pane

0xd787,	// (0x000851ce) main_mp2_pane

0x0b90,	// (0x000785d7) main_mp_pane

0xd787,	// (0x000851ce) main_msg_pane

0xd787,	// (0x000851ce) main_mup_eq_pane

0xd787,	// (0x000851ce) main_mup_pane

0x0964,	// (0x000783ab) main_notes_pane

0xd787,	// (0x000851ce) main_pec_pane

0xd787,	// (0x000851ce) main_phob_pane

0xd787,	// (0x000851ce) main_pinb_pane

0xd787,	// (0x000851ce) main_postcard_pane

0xd787,	// (0x000851ce) main_qdial_pane

0x0b90,	// (0x000785d7) main_skin_pane

0xd787,	// (0x000851ce) main_smil2_pane

0x0b90,	// (0x000785d7) main_smil_pane

0x0b90,	// (0x000785d7) main_video_pane

0x0b90,	// (0x000785d7) main_video_tele_pane

0x0863,	// (0x000782aa) main_viewer_pane_ParamLimits

0x0863,	// (0x000782aa) main_viewer_pane

0x0b90,	// (0x000785d7) main_vorec_pane

0x8161,	// (0x0007fba8) popup_blid_sat_info_window_ParamLimits

0x8161,	// (0x0007fba8) popup_blid_sat_info_window

0x8181,	// (0x0007fbc8) popup_dyc_status_message_window_ParamLimits

0x8181,	// (0x0007fbc8) popup_dyc_status_message_window

0x818f,	// (0x0007fbd6) popup_grid_large_graphic_window_ParamLimits

0x818f,	// (0x0007fbd6) popup_grid_large_graphic_window

0x821e,	// (0x0007fc65) popup_loc_request_window_ParamLimits

0x821e,	// (0x0007fc65) popup_loc_request_window

0x826b,	// (0x0007fcb2) popup_wml_address_window_ParamLimits

0x826b,	// (0x0007fcb2) popup_wml_address_window

0x7fe1,	// (0x0007fa28) call_muted_g1

0x768d,	// (0x0007f0d4) popup_call_audio_conf_window_ParamLimits

0x768d,	// (0x0007f0d4) popup_call_audio_conf_window

0x7ff1,	// (0x0007fa38) popup_call_audio_first_window_ParamLimits

0x7ff1,	// (0x0007fa38) popup_call_audio_first_window

0x8031,	// (0x0007fa78) popup_call_audio_in_window_ParamLimits

0x8031,	// (0x0007fa78) popup_call_audio_in_window

0x8055,	// (0x0007fa9c) popup_call_audio_out_window_ParamLimits

0x8055,	// (0x0007fa9c) popup_call_audio_out_window

0x8077,	// (0x0007fabe) popup_call_audio_second_window_ParamLimits

0x8077,	// (0x0007fabe) popup_call_audio_second_window

0x80a7,	// (0x0007faee) popup_call_audio_wait_window_ParamLimits

0x80a7,	// (0x0007faee) popup_call_audio_wait_window

0x80c8,	// (0x0007fb0f) popup_number_entry_window_ParamLimits

0x80c8,	// (0x0007fb0f) popup_number_entry_window

0xd374,	// (0x00084dbb) bg_popup_call_pane_cp05_ParamLimits

0xd374,	// (0x00084dbb) bg_popup_call_pane_cp05

0xd394,	// (0x00084ddb) popup_number_entry_window_t1

0xd3a7,	// (0x00084dee) popup_number_entry_window_t2

0xd3b9,	// (0x00084e00) popup_number_entry_window_t3

0x0003,

0xf085,	// (0x00086acc) popup_number_entry_window_t

0xd3cb,	// (0x00084e12) text_title_cp2

0xd3de,	// (0x00084e25) bg_popup_call_pane_cp_ParamLimits

0xd3de,	// (0x00084e25) bg_popup_call_pane_cp

0xd3ec,	// (0x00084e33) call_thumbnail_pane

0xd3f4,	// (0x00084e3b) popup_call_audio_in_window_g1_ParamLimits

0xd3f4,	// (0x00084e3b) popup_call_audio_in_window_g1

0xd400,	// (0x00084e47) popup_call_audio_in_window_g2_ParamLimits

0xd400,	// (0x00084e47) popup_call_audio_in_window_g2

0xd40c,	// (0x00084e53) popup_call_audio_in_window_g3_ParamLimits

0xd40c,	// (0x00084e53) popup_call_audio_in_window_g3

0x0002,

0xf08e,	// (0x00086ad5) popup_call_audio_in_window_g_ParamLimits

0xf08e,	// (0x00086ad5) popup_call_audio_in_window_g

0xd418,	// (0x00084e5f) popup_call_audio_in_window_t1_ParamLimits

0xd418,	// (0x00084e5f) popup_call_audio_in_window_t1

0xd434,	// (0x00084e7b) popup_call_audio_in_window_t2_ParamLimits

0xd434,	// (0x00084e7b) popup_call_audio_in_window_t2

0xd450,	// (0x00084e97) popup_call_audio_in_window_t3_ParamLimits

0xd450,	// (0x00084e97) popup_call_audio_in_window_t3

0x0002,

0xf095,	// (0x00086adc) popup_call_audio_in_window_t_ParamLimits

0xf095,	// (0x00086adc) popup_call_audio_in_window_t

0xd3de,	// (0x00084e25) bg_popup_call_pane_cp01_ParamLimits

0xd3de,	// (0x00084e25) bg_popup_call_pane_cp01

0xd3ec,	// (0x00084e33) call_thumbnail_pane_cp02

0xd463,	// (0x00084eaa) call_type_pane_cp022

0xd46b,	// (0x00084eb2) popup_call_audio_out_window_g1_ParamLimits

0xd46b,	// (0x00084eb2) popup_call_audio_out_window_g1

0xd47d,	// (0x00084ec4) popup_call_audio_out_window_g2_ParamLimits

0xd47d,	// (0x00084ec4) popup_call_audio_out_window_g2

0xd489,	// (0x00084ed0) popup_call_audio_out_window_g3_ParamLimits

0xd489,	// (0x00084ed0) popup_call_audio_out_window_g3

0x0002,

0xf09c,	// (0x00086ae3) popup_call_audio_out_window_g_ParamLimits

0xf09c,	// (0x00086ae3) popup_call_audio_out_window_g

0xd49b,	// (0x00084ee2) popup_call_audio_out_window_t1_ParamLimits

0xd49b,	// (0x00084ee2) popup_call_audio_out_window_t1

0xd4b3,	// (0x00084efa) popup_call_audio_out_window_t2_ParamLimits

0xd4b3,	// (0x00084efa) popup_call_audio_out_window_t2

0x0001,

0xf0a3,	// (0x00086aea) popup_call_audio_out_window_t_ParamLimits

0xf0a3,	// (0x00086aea) popup_call_audio_out_window_t

0xd4c8,	// (0x00084f0f) bg_popup_call_pane_ParamLimits

0xd4c8,	// (0x00084f0f) bg_popup_call_pane

0x5019,	// (0x0007ca60) call_thumbnail_pane_cp_ParamLimits

0x5019,	// (0x0007ca60) call_thumbnail_pane_cp

0xd54c,	// (0x00084f93) call_type_pane_cp01_ParamLimits

0xd54c,	// (0x00084f93) call_type_pane_cp01

0xd590,	// (0x00084fd7) popup_call_audio_first_window_g1_ParamLimits

0xd590,	// (0x00084fd7) popup_call_audio_first_window_g1

0xd5dc,	// (0x00085023) popup_call_audio_first_window_g2_ParamLimits

0xd5dc,	// (0x00085023) popup_call_audio_first_window_g2

0x0001,

0xf0a8,	// (0x00086aef) popup_call_audio_first_window_g_ParamLimits

0xf0a8,	// (0x00086aef) popup_call_audio_first_window_g

0xd620,	// (0x00085067) popup_call_audio_first_window_t1_ParamLimits

0xd620,	// (0x00085067) popup_call_audio_first_window_t1

0xd6cc,	// (0x00085113) popup_call_audio_first_window_t4_ParamLimits

0xd6cc,	// (0x00085113) popup_call_audio_first_window_t4

0xd758,	// (0x0008519f) popup_call_audio_first_window_t5_ParamLimits

0xd758,	// (0x0008519f) popup_call_audio_first_window_t5

0x0002,

0xf0ad,	// (0x00086af4) popup_call_audio_first_window_t_ParamLimits

0xf0ad,	// (0x00086af4) popup_call_audio_first_window_t

0xd787,	// (0x000851ce) bg_popup_call_pane_cp02

0xd791,	// (0x000851d8) call_type_pane_cp023

0xd799,	// (0x000851e0) popup_call_audio_wait_window_g1

0xd7a1,	// (0x000851e8) popup_call_audio_wait_window_g2

0x0001,

0xf0b4,	// (0x00086afb) popup_call_audio_wait_window_g

0xd7a9,	// (0x000851f0) popup_call_audio_wait_window_t3

0xd7b7,	// (0x000851fe) bg_popup_call_pane_cp03_ParamLimits

0xd7b7,	// (0x000851fe) bg_popup_call_pane_cp03

0xd817,	// (0x0008525e) call_thumbnail_pane_cp011_ParamLimits

0xd817,	// (0x0008525e) call_thumbnail_pane_cp011

0xd823,	// (0x0008526a) call_type_pane_cp034_ParamLimits

0xd823,	// (0x0008526a) call_type_pane_cp034

0xd85f,	// (0x000852a6) popup_call_audio_second_window_g1_ParamLimits

0xd85f,	// (0x000852a6) popup_call_audio_second_window_g1

0xd89b,	// (0x000852e2) popup_call_audio_second_window_g2_ParamLimits

0xd89b,	// (0x000852e2) popup_call_audio_second_window_g2

0x0001,

0xf0b9,	// (0x00086b00) popup_call_audio_second_window_g_ParamLimits

0xf0b9,	// (0x00086b00) popup_call_audio_second_window_g

0x0758,	// (0x0007819f) popup_call_audio_second_window_t1_ParamLimits

0x0758,	// (0x0007819f) popup_call_audio_second_window_t1

0x07d9,	// (0x00078220) popup_call_audio_second_window_t2_ParamLimits

0x07d9,	// (0x00078220) popup_call_audio_second_window_t2

0x080f,	// (0x00078256) popup_call_audio_second_window_t3_ParamLimits

0x080f,	// (0x00078256) popup_call_audio_second_window_t3

0x0002,

0xf0be,	// (0x00086b05) popup_call_audio_second_window_t_ParamLimits

0xf0be,	// (0x00086b05) popup_call_audio_second_window_t

0xd787,	// (0x000851ce) bg_popup_call_pane_cp04

0x0845,	// (0x0007828c) list_conf_pane

0x084d,	// (0x00078294) popup_call_audio_conf_window_t1

0x085b,	// (0x000782a2) call_thumbnail_pane_g1

0x0863,	// (0x000782aa) bg_pinb_pane_ParamLimits

0x0863,	// (0x000782aa) bg_pinb_pane

0x0871,	// (0x000782b8) find_pinb_pane

0x0863,	// (0x000782aa) listscroll_pinb_pane_ParamLimits

0x0863,	// (0x000782aa) listscroll_pinb_pane

0x087b,	// (0x000782c2) pinb_bg_pane_g1

0x087b,	// (0x000782c2) pinb_bg_pane_g2

0x087b,	// (0x000782c2) pinb_bg_pane_g3

0x087b,	// (0x000782c2) pinb_bg_pane_g4

0x087b,	// (0x000782c2) pinb_bg_pane_g5

0x087b,	// (0x000782c2) pinb_bg_pane_g6

0x087b,	// (0x000782c2) pinb_bg_pane_g7

0x087b,	// (0x000782c2) pinb_bg_pane_g8

0x087b,	// (0x000782c2) pinb_bg_pane_g9

0x087b,	// (0x000782c2) pinb_bg_pane_g10

0x0009,

0xf0c5,	// (0x00086b0c) pinb_bg_pane_g

0xd36a,	// (0x00084db1) grid_pinb_pane

0xd36a,	// (0x00084db1) list_pinb_pane

0x074a,	// (0x00078191) scroll_pane_cp01_ParamLimits

0x074a,	// (0x00078191) scroll_pane_cp01

0x0885,	// (0x000782cc) find_pinb_pane_g1_ParamLimits

0x0885,	// (0x000782cc) find_pinb_pane_g1

0x089d,	// (0x000782e4) find_pinb_pane_t1

0x08af,	// (0x000782f6) find_pinb_pane_t2

0x0001,

0xf0df,	// (0x00086b26) find_pinb_pane_t

0x08c4,	// (0x0007830b) input_focus_pane_cp01_ParamLimits

0x08c4,	// (0x0007830b) input_focus_pane_cp01

0xd8d7,	// (0x0008531e) cell_pinb_pane_ParamLimits

0xd8d7,	// (0x0008531e) cell_pinb_pane

0x08d0,	// (0x00078317) cell_pinb_pane_g1_ParamLimits

0x08d0,	// (0x00078317) cell_pinb_pane_g1

0x08de,	// (0x00078325) cell_pinb_pane_g2_ParamLimits

0x08de,	// (0x00078325) cell_pinb_pane_g2

0x08de,	// (0x00078325) cell_pinb_pane_g3_ParamLimits

0x08de,	// (0x00078325) cell_pinb_pane_g3

0x0002,

0xf0e4,	// (0x00086b2b) cell_pinb_pane_g_ParamLimits

0xf0e4,	// (0x00086b2b) cell_pinb_pane_g

0xd787,	// (0x000851ce) grid_highlight_pane_cp01

0xd8d7,	// (0x0008531e) list_pinb_item_pane_ParamLimits

0xd8d7,	// (0x0008531e) list_pinb_item_pane

0xd36a,	// (0x00084db1) list_highlight_pane_cp02

0x08ec,	// (0x00078333) list_pinb_item_pane_g1_ParamLimits

0x08ec,	// (0x00078333) list_pinb_item_pane_g1

0x08de,	// (0x00078325) list_pinb_item_pane_g2_ParamLimits

0x08de,	// (0x00078325) list_pinb_item_pane_g2

0x08d0,	// (0x00078317) list_pinb_item_pane_g3_ParamLimits

0x08d0,	// (0x00078317) list_pinb_item_pane_g3

0x08de,	// (0x00078325) list_pinb_item_pane_g4_ParamLimits

0x08de,	// (0x00078325) list_pinb_item_pane_g4

0x0003,

0xf0eb,	// (0x00086b32) list_pinb_item_pane_g_ParamLimits

0xf0eb,	// (0x00086b32) list_pinb_item_pane_g

0x08fa,	// (0x00078341) list_pinb_item_pane_t1_ParamLimits

0x08fa,	// (0x00078341) list_pinb_item_pane_t1

0x5057,	// (0x0007ca9e) calc_display_pane

0x5075,	// (0x0007cabc) calc_paper_pane

0x5091,	// (0x0007cad8) grid_calc_pane

0xd787,	// (0x000851ce) bg_list_pane_cp01

0x50bd,	// (0x0007cb04) clock_g1

0x50c5,	// (0x0007cb0c) clock_g2

0x0001,

0xf0f4,	// (0x00086b3b) clock_g

0x50cf,	// (0x0007cb16) clock_t1_ParamLimits

0x50cf,	// (0x0007cb16) clock_t1

0x50e4,	// (0x0007cb2b) clock_t2_ParamLimits

0x50e4,	// (0x0007cb2b) clock_t2

0x50f6,	// (0x0007cb3d) clock_t3_ParamLimits

0x50f6,	// (0x0007cb3d) clock_t3

0x5108,	// (0x0007cb4f) clock_t4_ParamLimits

0x5108,	// (0x0007cb4f) clock_t4

0x511a,	// (0x0007cb61) clock_t5_ParamLimits

0x511a,	// (0x0007cb61) clock_t5

0x512f,	// (0x0007cb76) clock_t6_ParamLimits

0x512f,	// (0x0007cb76) clock_t6

0x5141,	// (0x0007cb88) clock_t7_ParamLimits

0x5141,	// (0x0007cb88) clock_t7

0x5153,	// (0x0007cb9a) clock_t8_ParamLimits

0x5153,	// (0x0007cb9a) clock_t8

0x5169,	// (0x0007cbb0) clock_t9_ParamLimits

0x5169,	// (0x0007cbb0) clock_t9

0x0008,

0xf0f9,	// (0x00086b40) clock_t_ParamLimits

0xf0f9,	// (0x00086b40) clock_t

0x0916,	// (0x0007835d) popup_clock_analogue_window_cp02

0x0916,	// (0x0007835d) popup_clock_digital_window_cp01

0xd787,	// (0x000851ce) listscroll_help_pane

0xd787,	// (0x000851ce) phob_pre_status_pane

0x091e,	// (0x00078365) grid_qdial_pane

0x0863,	// (0x000782aa) listscroll_mce_pane

0x0863,	// (0x000782aa) bg_notes_pane

0x0928,	// (0x0007836f) list_notes_pane

0x517f,	// (0x0007cbc6) scroll_pane_cp06

0x0936,	// (0x0007837d) bg_calc_paper_pane

0x518e,	// (0x0007cbd5) list_calc_pane

0x0964,	// (0x000783ab) bg_calc_display_pane

0x51a8,	// (0x0007cbef) calc_display_pane_t1

0x51bd,	// (0x0007cc04) calc_display_pane_t2

0x51d2,	// (0x0007cc19) calc_display_pane_t3

0x0002,

0xf10c,	// (0x00086b53) calc_display_pane_t

0x51e4,	// (0x0007cc2b) cell_calc_pane_ParamLimits

0x51e4,	// (0x0007cc2b) cell_calc_pane

0x0982,	// (0x000783c9) bg_calc_paper_pane_g1

0x099a,	// (0x000783e1) bg_calc_paper_pane_g2

0x098e,	// (0x000783d5) bg_calc_paper_pane_g3

0x09b2,	// (0x000783f9) bg_calc_paper_pane_g4

0x09a6,	// (0x000783ed) bg_calc_paper_pane_g5

0x5211,	// (0x0007cc58) bg_calc_paper_pane_g6

0x5222,	// (0x0007cc69) bg_calc_paper_pane_g7

0x5233,	// (0x0007cc7a) bg_calc_paper_pane_g8

0x0007,

0xf113,	// (0x00086b5a) bg_calc_paper_pane_g

0x5244,	// (0x0007cc8b) calc_bg_paper_pane_g9

0x5255,	// (0x0007cc9c) list_calc_item_pane_ParamLimits

0x5255,	// (0x0007cc9c) list_calc_item_pane

0x09be,	// (0x00078405) list_calc_item_pane_g1

0x5282,	// (0x0007ccc9) list_calc_item_pane_t1_ParamLimits

0x5282,	// (0x0007ccc9) list_calc_item_pane_t1

0x5294,	// (0x0007ccdb) list_calc_item_pane_t2_ParamLimits

0x5294,	// (0x0007ccdb) list_calc_item_pane_t2

0x0001,

0xf124,	// (0x00086b6b) list_calc_item_pane_t_ParamLimits

0xf124,	// (0x00086b6b) list_calc_item_pane_t

0x087b,	// (0x000782c2) cell_calc_pane_g1

0x09dd,	// (0x00078424) grid_highlight_pane_cp02

0x52c4,	// (0x0007cd0b) bg_calc_display_pane_g1

0x52cd,	// (0x0007cd14) bg_calc_display_pane_g2

0x52d7,	// (0x0007cd1e) bg_calc_display_pane_g3

0x0002,

0xf12e,	// (0x00086b75) bg_calc_display_pane_g

0x52e0,	// (0x0007cd27) cell_qdial_pane_ParamLimits

0x52e0,	// (0x0007cd27) cell_qdial_pane

0x52f4,	// (0x0007cd3b) cell_qdial_pane_g1_ParamLimits

0x52f4,	// (0x0007cd3b) cell_qdial_pane_g1

0x5301,	// (0x0007cd48) cell_qdial_pane_g2_ParamLimits

0x5301,	// (0x0007cd48) cell_qdial_pane_g2

0x09ff,	// (0x00078446) cell_qdial_pane_g3_ParamLimits

0x09ff,	// (0x00078446) cell_qdial_pane_g3

0x0003,

0xf135,	// (0x00086b7c) cell_qdial_pane_g_ParamLimits

0xf135,	// (0x00086b7c) cell_qdial_pane_g

0x531e,	// (0x0007cd65) cell_qdial_pane_t1_ParamLimits

0x531e,	// (0x0007cd65) cell_qdial_pane_t1

0x5336,	// (0x0007cd7d) cell_qdial_pane_t2_ParamLimits

0x5336,	// (0x0007cd7d) cell_qdial_pane_t2

0x5349,	// (0x0007cd90) cell_qdial_pane_t3_ParamLimits

0x5349,	// (0x0007cd90) cell_qdial_pane_t3

0x0002,

0xf13e,	// (0x00086b85) cell_qdial_pane_t_ParamLimits

0xf13e,	// (0x00086b85) cell_qdial_pane_t

0xd787,	// (0x000851ce) grid_highlight_pane_cp04

0x0a0b,	// (0x00078452) thumbnail_qdial_pane_ParamLimits

0x0a0b,	// (0x00078452) thumbnail_qdial_pane

0x0a67,	// (0x000784ae) list_help_pane

0x0a70,	// (0x000784b7) scroll_pane_cp02

0x535c,	// (0x0007cda3) help_list_pane_t1_ParamLimits

0x535c,	// (0x0007cda3) help_list_pane_t1

0x5396,	// (0x0007cddd) bg_notes_pane_g2

0x539e,	// (0x0007cde5) bg_notes_pane_g3

0x53a6,	// (0x0007cded) notes_bg_pane_g1

0x53ae,	// (0x0007cdf5) notes_bg_pane_g4

0x53b6,	// (0x0007cdfd) notes_bg_pane_g5

0x53be,	// (0x0007ce05) notes_bg_pane_g6

0x53c6,	// (0x0007ce0d) notes_bg_pane_g7

0x53ce,	// (0x0007ce15) notes_bg_pane_g8

0x53d6,	// (0x0007ce1d) notes_bg_pane_g9

0x0006,

0xf15c,	// (0x00086ba3) notes_bg_pane_g

0x53de,	// (0x0007ce25) list_notes_text_pane_ParamLimits

0x53de,	// (0x0007ce25) list_notes_text_pane

0x0ac1,	// (0x00078508) list_notes_text_pane_g1

0x0aca,	// (0x00078511) list_notes_text_pane_t1

0x540a,	// (0x0007ce51) listscroll_cale_week_pane

0x542f,	// (0x0007ce76) bg_cale_heading_pane

0x0af2,	// (0x00078539) bg_cale_pane_cp01

0x5451,	// (0x0007ce98) cale_week_corner_pane

0x546b,	// (0x0007ceb2) cale_week_day_heading_pane

0x548d,	// (0x0007ced4) cale_week_scroll_pane_g1

0x54aa,	// (0x0007cef1) cale_week_scroll_pane_g2

0x54bd,	// (0x0007cf04) cale_week_scroll_pane_g3

0x54d0,	// (0x0007cf17) cale_week_scroll_pane_g4

0x54e3,	// (0x0007cf2a) cale_week_scroll_pane_g5

0x54f6,	// (0x0007cf3d) cale_week_scroll_pane_g6

0x5509,	// (0x0007cf50) cale_week_scroll_pane_g7

0x551e,	// (0x0007cf65) cale_week_scroll_pane_g8

0x5533,	// (0x0007cf7a) cale_week_scroll_pane_g9

0x5546,	// (0x0007cf8d) cale_week_scroll_pane_g10

0x5559,	// (0x0007cfa0) cale_week_scroll_pane_g11

0x556c,	// (0x0007cfb3) cale_week_scroll_pane_g12

0x5583,	// (0x0007cfca) cale_week_scroll_pane_g13

0x559e,	// (0x0007cfe5) cale_week_scroll_pane_g14

0x55b9,	// (0x0007d000) cale_week_scroll_pane_g15

0x000f,

0xf16b,	// (0x00086bb2) cale_week_scroll_pane_g

0x55e9,	// (0x0007d030) cale_week_time_pane

0x55fe,	// (0x0007d045) grid_cale_week_pane

0x0b21,	// (0x00078568) scroll_pane_cp08

0x561d,	// (0x0007d064) cell_cale_week_pane_ParamLimits

0x561d,	// (0x0007d064) cell_cale_week_pane

0x567f,	// (0x0007d0c6) cale_week_day_heading_pane_t1

0x569a,	// (0x0007d0e1) cale_week_day_heading_pane_t2

0x56b5,	// (0x0007d0fc) cale_week_day_heading_pane_t3

0x56d0,	// (0x0007d117) cale_week_day_heading_pane_t4

0x56eb,	// (0x0007d132) cale_week_day_heading_pane_t5

0x5706,	// (0x0007d14d) cale_week_day_heading_pane_t6

0x5721,	// (0x0007d168) cale_week_day_heading_pane_t7

0x0006,

0xf18c,	// (0x00086bd3) cale_week_day_heading_pane_t

0x0b3e,	// (0x00078585) bg_cale_side_pane

0x573c,	// (0x0007d183) cale_week_time_pane_t1

0x5756,	// (0x0007d19d) cale_week_time_pane_t2

0x5770,	// (0x0007d1b7) cale_week_time_pane_t3

0x578a,	// (0x0007d1d1) cale_week_time_pane_t4

0x57a4,	// (0x0007d1eb) cale_week_time_pane_t5

0x57be,	// (0x0007d205) cale_week_time_pane_t6

0x57de,	// (0x0007d225) cale_week_time_pane_t7

0x5800,	// (0x0007d247) cale_week_time_pane_t8

0x0007,

0xf19b,	// (0x00086be2) cale_week_time_pane_t

0x5824,	// (0x0007d26b) cell_cale_week_pane_g2

0x5848,	// (0x0007d28f) cell_cale_week_pane_g3_ParamLimits

0x5848,	// (0x0007d28f) cell_cale_week_pane_g3

0x0b4c,	// (0x00078593) grid_highlight_pane_cp07

0x0b54,	// (0x0007859b) listscroll_gms_pane

0x0b5e,	// (0x000785a5) grid_gms_pane

0x0b67,	// (0x000785ae) listscroll_gms_pane_g1

0x0b6f,	// (0x000785b6) listscroll_gms_pane_g2

0x0001,

0xf1ac,	// (0x00086bf3) listscroll_gms_pane_g

0x5860,	// (0x0007d2a7) scroll_pane_cp010

0x586b,	// (0x0007d2b2) cell_gms_pane_ParamLimits

0x586b,	// (0x0007d2b2) cell_gms_pane

0x587b,	// (0x0007d2c2) cell_gms_pane_g1

0x0b77,	// (0x000785be) cell_gms_pane_g2

0x0ac1,	// (0x00078508) cell_gms_pane_g3

0x0b7f,	// (0x000785c6) cell_gms_pane_g4

0x0003,

0xf1b1,	// (0x00086bf8) cell_gms_pane_g

0x0b88,	// (0x000785cf) grid_highlight_pane_cp09

0x7f65,	// (0x0007f9ac) phob_pre_status_pane_g1

0x7f6d,	// (0x0007f9b4) phob_pre_status_pane_g2

0x7f75,	// (0x0007f9bc) phob_pre_status_pane_g3

0x7f7d,	// (0x0007f9c4) phob_pre_status_pane_g4

0x0004,

0xf58d,	// (0x00086fd4) phob_pre_status_pane_g

0x7f8d,	// (0x0007f9d4) phob_pre_status_pane_t1

0x7f9d,	// (0x0007f9e4) phob_pre_status_pane_t2

0x7fad,	// (0x0007f9f4) phob_pre_status_pane_t3

0x0002,

0xf598,	// (0x00086fdf) phob_pre_status_pane_t

0x0b90,	// (0x000785d7) bg_list_pane_cp05

0x588b,	// (0x0007d2d2) grid_vorec_pane

0x5895,	// (0x0007d2dc) vorec_t1

0x58a3,	// (0x0007d2ea) vorec_t2

0x58b1,	// (0x0007d2f8) vorec_t3

0x58bf,	// (0x0007d306) vorec_t4

0xd098,	// (0x00084adf) vorec_t5

0xd0a6,	// (0x00084aed) vorec_t6

0x0004,

0xf1ba,	// (0x00086c01) vorec_t

0xd0b4,	// (0x00084afb) wait_bar_pane_cp01

0x58db,	// (0x0007d322) cell_vorec_pane_ParamLimits

0x58db,	// (0x0007d322) cell_vorec_pane

0x58ee,	// (0x0007d335) cell_vorec_pane_g1

0xd787,	// (0x000851ce) grid_highlight_pane_cp05

0xd8d7,	// (0x0008531e) cams_zoom_pane

0xd8d7,	// (0x0008531e) image_vga_pane

0x08de,	// (0x00078325) main_camera_pane_g1

0x08de,	// (0x00078325) main_camera_pane_g2

0x08de,	// (0x00078325) main_camera_pane_g3

0x08de,	// (0x00078325) main_camera_pane_g4

0x08de,	// (0x00078325) main_camera_pane_g5

0x08de,	// (0x00078325) main_camera_pane_g6

0x08de,	// (0x00078325) main_camera_pane_g7

0x0007,

0xf1c5,	// (0x00086c0c) main_camera_pane_g

0x1721,	// (0x00079168) main_camera_pane_t1

0x1721,	// (0x00079168) main_camera_pane_t2

0x0001,

0xf1d6,	// (0x00086c1d) main_camera_pane_t

0x58f8,	// (0x0007d33f) cams_zoom_pane_cp_ParamLimits

0x58f8,	// (0x0007d33f) cams_zoom_pane_cp

0x5926,	// (0x0007d36d) image_cif_pane_ParamLimits

0x5926,	// (0x0007d36d) image_cif_pane

0xd36a,	// (0x00084db1) image_subqcif_pane

0x5934,	// (0x0007d37b) main_video_pane_g1_ParamLimits

0x5934,	// (0x0007d37b) main_video_pane_g1

0x595c,	// (0x0007d3a3) main_video_pane_g2_ParamLimits

0x595c,	// (0x0007d3a3) main_video_pane_g2

0x598f,	// (0x0007d3d6) main_video_pane_g3_ParamLimits

0x598f,	// (0x0007d3d6) main_video_pane_g3

0x598f,	// (0x0007d3d6) main_video_pane_g4_ParamLimits

0x598f,	// (0x0007d3d6) main_video_pane_g4

0x59bd,	// (0x0007d404) main_video_pane_g5_ParamLimits

0x59bd,	// (0x0007d404) main_video_pane_g5

0x0bb6,	// (0x000785fd) main_video_pane_g6_ParamLimits

0x0bb6,	// (0x000785fd) main_video_pane_g6

0x0006,

0xf1db,	// (0x00086c22) main_video_pane_g_ParamLimits

0xf1db,	// (0x00086c22) main_video_pane_g

0x59d9,	// (0x0007d420) main_video_pane_t1_ParamLimits

0x59d9,	// (0x0007d420) main_video_pane_t1

0x0bd0,	// (0x00078617) cams_zoom_pane_g1

0x0bd0,	// (0x00078617) cams_zoom_pane_g2

0x0bd0,	// (0x00078617) cams_zoom_pane_g3

0x0bd0,	// (0x00078617) cams_zoom_pane_g4

0x0003,

0xf1ea,	// (0x00086c31) cams_zoom_pane_g

0x5a1f,	// (0x0007d466) grid_cams_pane

0x5a2d,	// (0x0007d474) linegrid_cams_pane

0x5a3b,	// (0x0007d482) cell_cams_pane_ParamLimits

0x5a3b,	// (0x0007d482) cell_cams_pane

0x0bda,	// (0x00078621) cams_burst_image_pane

0x0be2,	// (0x00078629) cell_cams_pane_g1

0xd787,	// (0x000851ce) grid_highlight_pane_cp03

0x087b,	// (0x000782c2) mp_bg_pane_g1

0xd36a,	// (0x00084db1) bg_list_pane_cp03

0xd36a,	// (0x00084db1) bg_mp_pane

0xd36a,	// (0x00084db1) grid_mp_pane

0x0bd0,	// (0x00078617) media_player_g1

0x1125,	// (0x00078b6c) media_player_t1

0x1125,	// (0x00078b6c) media_player_t2

0x1125,	// (0x00078b6c) media_player_t3

0x1125,	// (0x00078b6c) media_player_t4

0x1125,	// (0x00078b6c) media_player_t5

0x1125,	// (0x00078b6c) media_player_t6

0x1125,	// (0x00078b6c) media_player_t7

0x0006,

0xf577,	// (0x00086fbe) media_player_t

0xd36a,	// (0x00084db1) wait_bar_pane_cp02

0xf55c,	// (0x00086fa3) main_usb_pane_t

0x1400,	// (0x00078e47) cell_mp_pane

0x087b,	// (0x000782c2) cell_mp_pane_g1

0xd787,	// (0x000851ce) grid_highlight_pane_cp06

0x0bea,	// (0x00078631) grid_skin_colour_pane

0x0bf2,	// (0x00078639) list_highlight_pane_cp03

0x5a4e,	// (0x0007d495) skin_g1

0x0bfa,	// (0x00078641) skin_t1

0x0c09,	// (0x00078650) skin_t2

0x0001,

0xf218,	// (0x00086c5f) skin_t

0x5a58,	// (0x0007d49f) cell_skin_colour_pane_ParamLimits

0x5a58,	// (0x0007d49f) cell_skin_colour_pane

0x0c17,	// (0x0007865e) cell_skin_colour_pane_g1

0x5adc,	// (0x0007d523) call_video_g1_ParamLimits

0x5adc,	// (0x0007d523) call_video_g1

0x5aec,	// (0x0007d533) call_video_g2_ParamLimits

0x5aec,	// (0x0007d533) call_video_g2

0x0001,

0xf21d,	// (0x00086c64) call_video_g_ParamLimits

0xf21d,	// (0x00086c64) call_video_g

0x5b46,	// (0x0007d58d) call_video_uplink_pane_cp1_ParamLimits

0x5b46,	// (0x0007d58d) call_video_uplink_pane_cp1

0x0c29,	// (0x00078670) call_video_uplink_pane_cp2

0x5c12,	// (0x0007d659) video_down_crop_pane_ParamLimits

0x5c12,	// (0x0007d659) video_down_crop_pane

0x5d04,	// (0x0007d74b) video_down_pane_ParamLimits

0x5d04,	// (0x0007d74b) video_down_pane

0x0c31,	// (0x00078678) video_down_subqcif_pane_ParamLimits

0x0c31,	// (0x00078678) video_down_subqcif_pane

0x0c49,	// (0x00078690) video_down_subqcif_pane_cp_ParamLimits

0x0c49,	// (0x00078690) video_down_subqcif_pane_cp

0x0c6f,	// (0x000786b6) im_reading_pane_ParamLimits

0x0c6f,	// (0x000786b6) im_reading_pane

0x5e24,	// (0x0007d86b) im_writing_pane_ParamLimits

0x5e24,	// (0x0007d86b) im_writing_pane

0x5e42,	// (0x0007d889) im_reading_pane_t1

0x0c89,	// (0x000786d0) list_im_pane

0x0c9a,	// (0x000786e1) scroll_pane_cp07

0x5e9a,	// (0x0007d8e1) im_writing_pane_t1_ParamLimits

0x5e9a,	// (0x0007d8e1) im_writing_pane_t1

0x0cb3,	// (0x000786fa) im_writing_pane_t2_ParamLimits

0x0cb3,	// (0x000786fa) im_writing_pane_t2

0x0001,

0xf227,	// (0x00086c6e) im_writing_pane_t_ParamLimits

0xf227,	// (0x00086c6e) im_writing_pane_t

0xd787,	// (0x000851ce) input_focus_pane_cp04

0xd787,	// (0x000851ce) input_focus_pane_cp05

0x5eac,	// (0x0007d8f3) list_im_single_pane_ParamLimits

0x5eac,	// (0x0007d8f3) list_im_single_pane

0x5ed3,	// (0x0007d91a) list_single_im_pane_t1

0x0b90,	// (0x000785d7) blid_accuracy_pane

0x0b90,	// (0x000785d7) blid_compass_pane

0xe1d4,	// (0x00085c1b) main_location_t1

0xe1d4,	// (0x00085c1b) main_location_t2

0xe1d4,	// (0x00085c1b) main_location_t3

0x0002,

0xf586,	// (0x00086fcd) main_location_t

0xd787,	// (0x000851ce) aid_levels_location

0x087b,	// (0x000782c2) blid_accuracy_pane_g1

0x087b,	// (0x000782c2) blid_accuracy_pane_g2

0x0001,

0xf27b,	// (0x00086cc2) blid_accuracy_pane_g

0x0cfb,	// (0x00078742) wml_content_pane

0x0d39,	// (0x00078780) wml_button_pane_ParamLimits

0x0d39,	// (0x00078780) wml_button_pane

0x5ee2,	// (0x0007d929) wml_list_single_large_pane_ParamLimits

0x5ee2,	// (0x0007d929) wml_list_single_large_pane

0x5f0d,	// (0x0007d954) wml_list_single_medium_pane_ParamLimits

0x5f0d,	// (0x0007d954) wml_list_single_medium_pane

0x5f3f,	// (0x0007d986) wml_list_single_small_pane_ParamLimits

0x5f3f,	// (0x0007d986) wml_list_single_small_pane

0x0d4d,	// (0x00078794) wml_selection_box_pane_ParamLimits

0x0d4d,	// (0x00078794) wml_selection_box_pane

0x0d60,	// (0x000787a7) wml_list_single_pane_t1

0x0d6f,	// (0x000787b6) wml_list_single_medium_pane_t1

0x0d7e,	// (0x000787c5) wml_list_single_large_pane_t1

0x0d8d,	// (0x000787d4) input_focus_pane_cp02_ParamLimits

0x0d8d,	// (0x000787d4) input_focus_pane_cp02

0x0da0,	// (0x000787e7) wml_selection_box_pane_g1

0x0da9,	// (0x000787f0) wml_selection_box_pane_t1_ParamLimits

0x0da9,	// (0x000787f0) wml_selection_box_pane_t1

0x0863,	// (0x000782aa) bg_wml_button_pane_ParamLimits

0x0863,	// (0x000782aa) bg_wml_button_pane

0x0dc1,	// (0x00078808) wml_button_pane_g1

0x0dc9,	// (0x00078810) wml_button_pane_t1

0x0dc1,	// (0x00078808) wml_button_bg_pane_g1

0x0dd9,	// (0x00078820) wml_button_bg_pane_g2

0x0de1,	// (0x00078828) wml_button_bg_pane_g3

0x0de9,	// (0x00078830) wml_button_bg_pane_g4

0x0df1,	// (0x00078838) wml_button_bg_pane_g5

0x0df9,	// (0x00078840) wml_button_bg_pane_g6

0x0e01,	// (0x00078848) wml_button_bg_pane_g7

0x0e09,	// (0x00078850) wml_button_bg_pane_g8

0x0e11,	// (0x00078858) wml_button_bg_pane_g9

0x0008,

0xf22c,	// (0x00086c73) wml_button_bg_pane_g

0x5f7c,	// (0x0007d9c3) bg_list_pane_cp02

0x0e19,	// (0x00078860) mce_header_pane_ParamLimits

0x0e19,	// (0x00078860) mce_header_pane

0x0e2f,	// (0x00078876) mce_icon_pane

0x0e2f,	// (0x00078876) mce_image_pane

0x0e38,	// (0x0007887f) mce_text_pane_ParamLimits

0x0e38,	// (0x0007887f) mce_text_pane

0x5f86,	// (0x0007d9cd) scroll_pane_cp03

0x0d31,	// (0x00078778) scroll_pane_cp04

0x0e4b,	// (0x00078892) scroll_pane_cp05_ParamLimits

0x0e4b,	// (0x00078892) scroll_pane_cp05

0x5f90,	// (0x0007d9d7) mce_header_field_pane_ParamLimits

0x5f90,	// (0x0007d9d7) mce_header_field_pane

0x5fb0,	// (0x0007d9f7) mce_header_field_pane_2_ParamLimits

0x5fb0,	// (0x0007d9f7) mce_header_field_pane_2

0x5fc6,	// (0x0007da0d) mce_header_field_pane_3

0x5fce,	// (0x0007da15) list_single_mce_message_pane_ParamLimits

0x5fce,	// (0x0007da15) list_single_mce_message_pane

0x5ffc,	// (0x0007da43) list_single_mce_smart_pane_ParamLimits

0x5ffc,	// (0x0007da43) list_single_mce_smart_pane

0x0e57,	// (0x0007889e) input_focus_pane_cp03

0x0e60,	// (0x000788a7) list_header_data_pane

0x6035,	// (0x0007da7c) mce_header_field_pane_t1

0x6043,	// (0x0007da8a) list_single_mce_header_pane_ParamLimits

0x6043,	// (0x0007da8a) list_single_mce_header_pane

0x0e68,	// (0x000788af) list_single_mce_header_pane_t1

0x0e77,	// (0x000788be) list_single_mce_message_pane_g1

0x0e7f,	// (0x000788c6) list_single_mce_message_pane_t1

0x6099,	// (0x0007dae0) bg_cale_heading_pane_cp01_ParamLimits

0x6099,	// (0x0007dae0) bg_cale_heading_pane_cp01

0x0e8d,	// (0x000788d4) bg_cale_pane_cp02_ParamLimits

0x0e8d,	// (0x000788d4) bg_cale_pane_cp02

0x60e7,	// (0x0007db2e) cale_month_corner_pane

0x6106,	// (0x0007db4d) cale_month_day_heading_pane_ParamLimits

0x6106,	// (0x0007db4d) cale_month_day_heading_pane

0x616c,	// (0x0007dbb3) cale_month_pane_g1_ParamLimits

0x616c,	// (0x0007dbb3) cale_month_pane_g1

0x61af,	// (0x0007dbf6) cale_month_pane_g2_ParamLimits

0x61af,	// (0x0007dbf6) cale_month_pane_g2

0x61e9,	// (0x0007dc30) cale_month_pane_g3_ParamLimits

0x61e9,	// (0x0007dc30) cale_month_pane_g3

0x6239,	// (0x0007dc80) cale_month_pane_g4_ParamLimits

0x6239,	// (0x0007dc80) cale_month_pane_g4

0x6289,	// (0x0007dcd0) cale_month_pane_g5_ParamLimits

0x6289,	// (0x0007dcd0) cale_month_pane_g5

0x62d9,	// (0x0007dd20) cale_month_pane_g6_ParamLimits

0x62d9,	// (0x0007dd20) cale_month_pane_g6

0x6329,	// (0x0007dd70) cale_month_pane_g7_ParamLimits

0x6329,	// (0x0007dd70) cale_month_pane_g7

0x6391,	// (0x0007ddd8) cale_month_pane_g8_ParamLimits

0x6391,	// (0x0007ddd8) cale_month_pane_g8

0x63f9,	// (0x0007de40) cale_month_pane_g9_ParamLimits

0x63f9,	// (0x0007de40) cale_month_pane_g9

0x6457,	// (0x0007de9e) cale_month_pane_g10_ParamLimits

0x6457,	// (0x0007de9e) cale_month_pane_g10

0x64b5,	// (0x0007defc) cale_month_pane_g11_ParamLimits

0x64b5,	// (0x0007defc) cale_month_pane_g11

0x6509,	// (0x0007df50) cale_month_pane_g12_ParamLimits

0x6509,	// (0x0007df50) cale_month_pane_g12

0x655f,	// (0x0007dfa6) cale_month_pane_g13_ParamLimits

0x655f,	// (0x0007dfa6) cale_month_pane_g13

0x000c,

0xf23f,	// (0x00086c86) cale_month_pane_g_ParamLimits

0xf23f,	// (0x00086c86) cale_month_pane_g

0x65b5,	// (0x0007dffc) cale_month_week_pane

0x65d9,	// (0x0007e020) grid_cale_month_pane_ParamLimits

0x65d9,	// (0x0007e020) grid_cale_month_pane

0x6636,	// (0x0007e07d) cale_month_day_heading_pane_t1

0x66bc,	// (0x0007e103) cale_month_day_heading_pane_t2

0x6735,	// (0x0007e17c) cale_month_day_heading_pane_t3

0x67ae,	// (0x0007e1f5) cale_month_day_heading_pane_t4

0x6827,	// (0x0007e26e) cale_month_day_heading_pane_t5

0x68a0,	// (0x0007e2e7) cale_month_day_heading_pane_t6

0x6919,	// (0x0007e360) cale_month_day_heading_pane_t7

0x0006,

0xf25a,	// (0x00086ca1) cale_month_day_heading_pane_t

0x0b3e,	// (0x00078585) bg_cale_side_pane_cp01

0x69aa,	// (0x0007e3f1) cale_month_week_pane_t1

0x69c3,	// (0x0007e40a) cale_month_week_pane_t2

0x69dc,	// (0x0007e423) cale_month_week_pane_t3

0x69f5,	// (0x0007e43c) cale_month_week_pane_t4

0x6a10,	// (0x0007e457) cale_month_week_pane_t5

0x6a31,	// (0x0007e478) cale_month_week_pane_t6

0x0005,

0xf269,	// (0x00086cb0) cale_month_week_pane_t

0x6a52,	// (0x0007e499) cell_cale_month_pane_ParamLimits

0x6a52,	// (0x0007e499) cell_cale_month_pane

0x6b78,	// (0x0007e5bf) cell_cale_month_pane_g1

0x6b84,	// (0x0007e5cb) cell_cale_month_pane_t1_ParamLimits

0x6b84,	// (0x0007e5cb) cell_cale_month_pane_t1

0x0b4c,	// (0x00078593) grid_highlight_pane_cp08

0x087b,	// (0x000782c2) main_smil_g1

0x6bb0,	// (0x0007e5f7) smil_status_pane

0x0ed8,	// (0x0007891f) smil_text_pane

0xe0ac,	// (0x00085af3) bg_popup_call3_rect_pane_g8

0xe0b4,	// (0x00085afb) bg_popup_call3_rect_pane_g9

0x0008,

0xf507,	// (0x00086f4e) bg_popup_call3_rect_pane_g

0xe2ab,	// (0x00085cf2) smil_status_volume_pane_g1

0x0ee2,	// (0x00078929) smil_status_pane_t1

0x831a,	// (0x0007fd61) volume_smil_pane

0x0ef9,	// (0x00078940) list_smil_text_pane

0x6bc3,	// (0x0007e60a) scroll_pane_cp011

0x6bce,	// (0x0007e615) smil_text_list_pane_t1_ParamLimits

0x6bce,	// (0x0007e615) smil_text_list_pane_t1

0x6c5b,	// (0x0007e6a2) aid_volume_smil_ParamLimits

0x6c5b,	// (0x0007e6a2) aid_volume_smil

0x087b,	// (0x000782c2) smil_volume_pane_g1

0x087b,	// (0x000782c2) smil_volume_pane_g2

0x0001,

0xf27b,	// (0x00086cc2) smil_volume_pane_g

0x540a,	// (0x0007ce51) listscroll_cale_day_pane

0x0f25,	// (0x0007896c) bg_cale_pane

0x0f3d,	// (0x00078984) list_cale_pane

0x0f60,	// (0x000789a7) scroll_pane_cp09

0x0f71,	// (0x000789b8) cale_bg_pane_g1

0x0f79,	// (0x000789c0) cale_bg_pane_g2

0x0f81,	// (0x000789c8) cale_bg_pane_g3

0x0f89,	// (0x000789d0) cale_bg_pane_g4

0x0f91,	// (0x000789d8) cale_bg_pane_g5

0x0f99,	// (0x000789e0) cale_bg_pane_g6

0x0fa1,	// (0x000789e8) cale_bg_pane_g7

0x0fa9,	// (0x000789f0) cale_bg_pane_g8

0x0fb1,	// (0x000789f8) cale_bg_pane_g9

0x0008,

0xf280,	// (0x00086cc7) cale_bg_pane_g

0x6c85,	// (0x0007e6cc) list_cale_time_pane_ParamLimits

0x6c85,	// (0x0007e6cc) list_cale_time_pane

0x0fb9,	// (0x00078a00) list_cale_time_pane_g1_ParamLimits

0x0fb9,	// (0x00078a00) list_cale_time_pane_g1

0x0fc5,	// (0x00078a0c) list_cale_time_pane_g2_ParamLimits

0x0fc5,	// (0x00078a0c) list_cale_time_pane_g2

0x6cad,	// (0x0007e6f4) list_cale_time_pane_g3_ParamLimits

0x6cad,	// (0x0007e6f4) list_cale_time_pane_g3

0x6cbb,	// (0x0007e702) list_cale_time_pane_g4_ParamLimits

0x6cbb,	// (0x0007e702) list_cale_time_pane_g4

0x6cc9,	// (0x0007e710) list_cale_time_pane_g5_ParamLimits

0x6cc9,	// (0x0007e710) list_cale_time_pane_g5

0x0005,

0xf293,	// (0x00086cda) list_cale_time_pane_g_ParamLimits

0xf293,	// (0x00086cda) list_cale_time_pane_g

0x0fdf,	// (0x00078a26) list_cale_time_pane_t1_ParamLimits

0x0fdf,	// (0x00078a26) list_cale_time_pane_t1

0x1007,	// (0x00078a4e) list_cale_time_pane_t2_ParamLimits

0x1007,	// (0x00078a4e) list_cale_time_pane_t2

0x6f9e,	// (0x0007e9e5) aid_blid_cardinal_pane

0x6fe0,	// (0x0007ea27) compass_pane_t4

0x102f,	// (0x00078a76) list_cale_time_pane_t4_ParamLimits

0x102f,	// (0x00078a76) list_cale_time_pane_t4

0x6fee,	// (0x0007ea35) compass_pane_t5

0x6ffe,	// (0x0007ea45) compass_pane_t6

0x700c,	// (0x0007ea53) compass_pane_t7

0x151a,	// (0x00078f61) navi_pane_cc_t1

0x1709,	// (0x00079150) aid_phob_thumbnail_center_pane

0x7429,	// (0x0007ee70) main_postcard_pane_g4_ParamLimits

0x0002,

0xf2a0,	// (0x00086ce7) list_cale_time_pane_t_ParamLimits

0xf2a0,	// (0x00086ce7) list_cale_time_pane_t

0xd3de,	// (0x00084e25) bg_popup_window_pane_cp02_ParamLimits

0xd3de,	// (0x00084e25) bg_popup_window_pane_cp02

0x1057,	// (0x00078a9e) heading_pane_cp01_ParamLimits

0x1057,	// (0x00078a9e) heading_pane_cp01

0x1063,	// (0x00078aaa) loc_req_pane_ParamLimits

0x1063,	// (0x00078aaa) loc_req_pane

0x1073,	// (0x00078aba) loc_type_pane_ParamLimits

0x1073,	// (0x00078aba) loc_type_pane

0x1085,	// (0x00078acc) loc_type_pane_t1_ParamLimits

0x1085,	// (0x00078acc) loc_type_pane_t1

0x1097,	// (0x00078ade) loc_type_pane_t2_ParamLimits

0x1097,	// (0x00078ade) loc_type_pane_t2

0x10a9,	// (0x00078af0) loc_type_pane_t3_ParamLimits

0x10a9,	// (0x00078af0) loc_type_pane_t3

0x0002,

0xf2a7,	// (0x00086cee) loc_type_pane_t_ParamLimits

0xf2a7,	// (0x00086cee) loc_type_pane_t

0x10bb,	// (0x00078b02) list_loc_req_pane

0x10c5,	// (0x00078b0c) scroll_pane_cp012

0x6cd7,	// (0x0007e71e) list_single_loc_request_popup_menu_pane_ParamLimits

0x6cd7,	// (0x0007e71e) list_single_loc_request_popup_menu_pane

0x10d0,	// (0x00078b17) list_single_loc_request_popup_menu_pane_g1_ParamLimits

0x10d0,	// (0x00078b17) list_single_loc_request_popup_menu_pane_g1

0x10dc,	// (0x00078b23) list_single_loc_request_popup_menu_pane_g2_ParamLimits

0x10dc,	// (0x00078b23) list_single_loc_request_popup_menu_pane_g2

0x0001,

0xf2ae,	// (0x00086cf5) list_single_loc_request_popup_menu_pane_g_ParamLimits

0xf2ae,	// (0x00086cf5) list_single_loc_request_popup_menu_pane_g

0x10e8,	// (0x00078b2f) list_single_loc_request_popup_menu_pane_t1_ParamLimits

0x10e8,	// (0x00078b2f) list_single_loc_request_popup_menu_pane_t1

0x6cf1,	// (0x0007e738) bg_popup_window_pane_cp03_ParamLimits

0x6cf1,	// (0x0007e738) bg_popup_window_pane_cp03

0x6cff,	// (0x0007e746) heading_loc_req_pane_ParamLimits

0x6cff,	// (0x0007e746) heading_loc_req_pane

0x6d0b,	// (0x0007e752) popup_dyc_status_message_window_g1_ParamLimits

0x6d0b,	// (0x0007e752) popup_dyc_status_message_window_g1

0x6d17,	// (0x0007e75e) popup_dyc_status_message_window_t1_ParamLimits

0x6d17,	// (0x0007e75e) popup_dyc_status_message_window_t1

0x6d29,	// (0x0007e770) popup_dyc_status_message_window_t2_ParamLimits

0x6d29,	// (0x0007e770) popup_dyc_status_message_window_t2

0x6d3b,	// (0x0007e782) popup_dyc_status_message_window_t3_ParamLimits

0x6d3b,	// (0x0007e782) popup_dyc_status_message_window_t3

0x0002,

0xf2b3,	// (0x00086cfa) popup_dyc_status_message_window_t_ParamLimits

0xf2b3,	// (0x00086cfa) popup_dyc_status_message_window_t

0xd787,	// (0x000851ce) bg_heading_pane_cp01

0x10fe,	// (0x00078b45) heading_loc_req_pane_g1

0x1106,	// (0x00078b4d) heading_loc_req_pane_g2

0x110e,	// (0x00078b55) heading_loc_req_pane_g3

0x0002,

0xf2ba,	// (0x00086d01) heading_loc_req_pane_g

0x1116,	// (0x00078b5d) heading_loc_req_pane_t1

0x1135,	// (0x00078b7c) bg_popup_sub_pane_cp01_ParamLimits

0x1135,	// (0x00078b7c) bg_popup_sub_pane_cp01

0x1143,	// (0x00078b8a) popup_cale_events_window_g1_ParamLimits

0x1143,	// (0x00078b8a) popup_cale_events_window_g1

0x1163,	// (0x00078baa) popup_cale_events_window_g2_ParamLimits

0x1163,	// (0x00078baa) popup_cale_events_window_g2

0x0001,

0xf2dc,	// (0x00086d23) popup_cale_events_window_g_ParamLimits

0xf2dc,	// (0x00086d23) popup_cale_events_window_g

0x1183,	// (0x00078bca) popup_cale_events_window_t1_ParamLimits

0x1183,	// (0x00078bca) popup_cale_events_window_t1

0x1195,	// (0x00078bdc) popup_cale_events_window_t2_ParamLimits

0x1195,	// (0x00078bdc) popup_cale_events_window_t2

0x11d3,	// (0x00078c1a) popup_cale_events_window_t3_ParamLimits

0x11d3,	// (0x00078c1a) popup_cale_events_window_t3

0x120d,	// (0x00078c54) popup_cale_events_window_t4_ParamLimits

0x120d,	// (0x00078c54) popup_cale_events_window_t4

0x0003,

0xf2e1,	// (0x00086d28) popup_cale_events_window_t_ParamLimits

0xf2e1,	// (0x00086d28) popup_cale_events_window_t

0x6d65,	// (0x0007e7ac) call_type_pane

0x1b77,	// (0x000795be) popup_call_status_window_g1

0x6d71,	// (0x0007e7b8) popup_call_status_window_g2

0x6d7d,	// (0x0007e7c4) popup_call_status_window_g3

0x0002,

0xf2ea,	// (0x00086d31) popup_call_status_window_g

0x1243,	// (0x00078c8a) call_type_pane_g1

0x124c,	// (0x00078c93) call_type_pane_g2

0x0001,

0xf2f1,	// (0x00086d38) call_type_pane_g

0xd787,	// (0x000851ce) bg_popup_sub_pane_cp02

0x1255,	// (0x00078c9c) listscroll_popup_wml_pane

0x125d,	// (0x00078ca4) list_wml_pane

0x1267,	// (0x00078cae) scroll_pane_cp013

0x1272,	// (0x00078cb9) list_single_graphic_popup_wml_pane_ParamLimits

0x1272,	// (0x00078cb9) list_single_graphic_popup_wml_pane

0x087b,	// (0x000782c2) list_single_graphic_popup_wml_pane_g1

0x1286,	// (0x00078ccd) list_single_graphic_popup_wml_pane_g2

0x0001,

0xf2f6,	// (0x00086d3d) list_single_graphic_popup_wml_pane_g

0x128e,	// (0x00078cd5) list_single_graphic_popup_wml_pane_t1

0x129c,	// (0x00078ce3) aid_call_pane

0x085b,	// (0x000782a2) popup_clock_analogue_window_g1

0x085b,	// (0x000782a2) popup_clock_analogue_window_g2

0x6d89,	// (0x0007e7d0) popup_clock_analogue_window_g3

0x6d89,	// (0x0007e7d0) popup_clock_analogue_window_g4

0x087b,	// (0x000782c2) popup_clock_analogue_window_g5

0x0004,

0xf2fb,	// (0x00086d42) popup_clock_analogue_window_g

0x6d91,	// (0x0007e7d8) popup_clock_analogue_window_t1

0x6d9f,	// (0x0007e7e6) clock_digital_number_pane_ParamLimits

0x6d9f,	// (0x0007e7e6) clock_digital_number_pane

0x6dab,	// (0x0007e7f2) clock_digital_number_pane_cp02_ParamLimits

0x6dab,	// (0x0007e7f2) clock_digital_number_pane_cp02

0x6db7,	// (0x0007e7fe) clock_digital_number_pane_cp03_ParamLimits

0x6db7,	// (0x0007e7fe) clock_digital_number_pane_cp03

0x6dc3,	// (0x0007e80a) clock_digital_number_pane_cp04_ParamLimits

0x6dc3,	// (0x0007e80a) clock_digital_number_pane_cp04

0x6dcf,	// (0x0007e816) clock_digital_separator_pane_ParamLimits

0x6dcf,	// (0x0007e816) clock_digital_separator_pane

0x6ddb,	// (0x0007e822) popup_clock_digital_window_t1

0x087b,	// (0x000782c2) clock_digital_number_pane_g1

0x087b,	// (0x000782c2) clock_digital_number_pane_g2

0x0001,

0xf27b,	// (0x00086cc2) clock_digital_number_pane_g

0x087b,	// (0x000782c2) clock_digital_separator_pane_g1

0x087b,	// (0x000782c2) clock_digital_separator_pane_g2

0x0001,

0xf27b,	// (0x00086cc2) clock_digital_separator_pane_g

0xd787,	// (0x000851ce) bg_popup_window_pane_cp04

0x131b,	// (0x00078d62) heading_pane_cp03

0x0b90,	// (0x000785d7) listscroll_popup_gms_pane

0xd787,	// (0x000851ce) grid_large_graphic_popup_pane

0x1324,	// (0x00078d6b) listscroll_popup_gms_pane_g1

0x132d,	// (0x00078d74) listscroll_popup_gms_pane_g2

0x0001,

0xf306,	// (0x00086d4d) listscroll_popup_gms_pane_g

0x1336,	// (0x00078d7d) scroll_pane_cp014

0xd8d7,	// (0x0008531e) cell_large_graphic_popup_pane_ParamLimits

0xd8d7,	// (0x0008531e) cell_large_graphic_popup_pane

0x08d0,	// (0x00078317) cell_large_graphic_popup_pane_g1_ParamLimits

0x08d0,	// (0x00078317) cell_large_graphic_popup_pane_g1

0x133f,	// (0x00078d86) cell_large_graphic_popup_pane_g2_ParamLimits

0x133f,	// (0x00078d86) cell_large_graphic_popup_pane_g2

0x134d,	// (0x00078d94) cell_large_graphic_popup_pane_g3_ParamLimits

0x134d,	// (0x00078d94) cell_large_graphic_popup_pane_g3

0x135b,	// (0x00078da2) cell_large_graphic_popup_pane_g4_ParamLimits

0x135b,	// (0x00078da2) cell_large_graphic_popup_pane_g4

0x0003,

0xf30b,	// (0x00086d52) cell_large_graphic_popup_pane_g_ParamLimits

0xf30b,	// (0x00086d52) cell_large_graphic_popup_pane_g

0xd787,	// (0x000851ce) grid_highlight_pane_cp010

0x087b,	// (0x000782c2) bg_popup_call_pane_g1

0x136c,	// (0x00078db3) list_single_graphic_popup_conf_pane_ParamLimits

0x136c,	// (0x00078db3) list_single_graphic_popup_conf_pane

0x137f,	// (0x00078dc6) list_highlight_pane_cp01

0x1388,	// (0x00078dcf) list_single_graphic_popup_conf_pane_g1

0x1390,	// (0x00078dd7) list_single_graphic_popup_conf_pane_g2

0x0001,

0xf314,	// (0x00086d5b) list_single_graphic_popup_conf_pane_g

0x1398,	// (0x00078ddf) list_single_graphic_popup_conf_pane_t1

0x13a6,	// (0x00078ded) linegrid_cams_pane_g1

0x6df8,	// (0x0007e83f) linegrid_cams_pane_g2

0x0ac1,	// (0x00078508) linegrid_cams_pane_g3

0x13af,	// (0x00078df6) linegrid_cams_pane_g4

0x6e01,	// (0x0007e848) linegrid_cams_pane_g5

0x6e0a,	// (0x0007e851) linegrid_cams_pane_g6

0x0b7f,	// (0x000785c6) linegrid_cams_pane_g7

0x0006,

0xf319,	// (0x00086d60) linegrid_cams_pane_g

0x13b8,	// (0x00078dff) popup_clock_analogue_window

0x13b8,	// (0x00078dff) popup_clock_digital_window

0xd787,	// (0x000851ce) popup_phob_thumbnail_window

0x087b,	// (0x000782c2) call_video_uplink_pane_g1

0x13c1,	// (0x00078e08) call_video_uplink_pane_g2

0x0001,

0xf328,	// (0x00086d6f) call_video_uplink_pane_g

0x13c9,	// (0x00078e10) video_uplink_pane

0x13d1,	// (0x00078e18) mce_image_pane_g1

0x6e13,	// (0x0007e85a) mce_image_pane_g2

0x6e1b,	// (0x0007e862) mce_image_pane_g3

0x6e23,	// (0x0007e86a) mce_image_pane_g4

0x6e2b,	// (0x0007e872) mce_image_pane_g5

0x0004,

0xf32d,	// (0x00086d74) mce_image_pane_g

0x13db,	// (0x00078e22) control_top_pane_stacon_cp01_ParamLimits

0x13db,	// (0x00078e22) control_top_pane_stacon_cp01

0x13ef,	// (0x00078e36) uni_indicator_pane_stacon_cp01_ParamLimits

0x13ef,	// (0x00078e36) uni_indicator_pane_stacon_cp01

0x1400,	// (0x00078e47) bg_popup_sub_pane_cp03

0x6e33,	// (0x0007e87a) chi_dic_find_pane

0x6e3b,	// (0x0007e882) listscroll_chi_dic_pane

0x6e44,	// (0x0007e88b) main_pane_chidic_g1

0x6e57,	// (0x0007e89e) chi_dic_find_pane_t1

0x140a,	// (0x00078e51) find_chidic_pane

0x1413,	// (0x00078e5a) chi_dic_list_pane_ParamLimits

0x1413,	// (0x00078e5a) chi_dic_list_pane

0x1424,	// (0x00078e6b) scroll_pane_cp020

0x6e65,	// (0x0007e8ac) find_chidic_pane_t1

0xd787,	// (0x000851ce) input_focus_pane_cp06

0x6e74,	// (0x0007e8bb) list_chi_dic_pane_ParamLimits

0x6e74,	// (0x0007e8bb) list_chi_dic_pane

0x6e91,	// (0x0007e8d8) list_chi_dic_pane_t1_ParamLimits

0x6e91,	// (0x0007e8d8) list_chi_dic_pane_t1

0xd787,	// (0x000851ce) list_highlight_pane_cp020

0x142c,	// (0x00078e73) bg_cale_heading_pane_g1

0x6ea4,	// (0x0007e8eb) bg_cale_heading_pane_g2

0x6eac,	// (0x0007e8f3) bg_cale_heading_pane_g3

0x6eb4,	// (0x0007e8fb) bg_cale_heading_pane_g4

0x6ebe,	// (0x0007e905) bg_cale_heading_pane_g5

0x6ec8,	// (0x0007e90f) bg_cale_heading_pane_g6

0x6ed0,	// (0x0007e917) bg_cale_heading_pane_g7

0x6ed8,	// (0x0007e91f) bg_cale_heading_pane_g8

0x6ee2,	// (0x0007e929) bg_cale_heading_pane_g9

0x0008,

0xf338,	// (0x00086d7f) bg_cale_heading_pane_g

0x142c,	// (0x00078e73) bg_cale_side_pane_g1

0x6eec,	// (0x0007e933) bg_cale_side_pane_g2

0x6ef6,	// (0x0007e93d) bg_cale_side_pane_g3

0x6f00,	// (0x0007e947) bg_cale_side_pane_g4

0x6f0a,	// (0x0007e951) bg_cale_side_pane_g5

0x6f14,	// (0x0007e95b) bg_cale_side_pane_g6

0x6f1e,	// (0x0007e965) bg_cale_side_pane_g7

0x6f28,	// (0x0007e96f) bg_cale_side_pane_g8

0x6f30,	// (0x0007e977) bg_cale_side_pane_g9

0x0008,

0xf34b,	// (0x00086d92) bg_cale_side_pane_g

0x6f38,	// (0x0007e97f) popup_call_status_window_ParamLimits

0x6f38,	// (0x0007e97f) popup_call_status_window

0x1434,	// (0x00078e7b) stacon_top_pane

0x143c,	// (0x00078e83) status_pane_ParamLimits

0x143c,	// (0x00078e83) status_pane

0x1451,	// (0x00078e98) status_small_pane

0x1459,	// (0x00078ea0) control_pane

0xd787,	// (0x000851ce) stacon_bottom_pane

0x1461,	// (0x00078ea8) list_single_mce_smart_pane_t1_ParamLimits

0x1461,	// (0x00078ea8) list_single_mce_smart_pane_t1

0x1474,	// (0x00078ebb) list_single_mce_smart_pane_t2_ParamLimits

0x1474,	// (0x00078ebb) list_single_mce_smart_pane_t2

0x0001,

0xf35e,	// (0x00086da5) list_single_mce_smart_pane_t_ParamLimits

0xf35e,	// (0x00086da5) list_single_mce_smart_pane_t

0x6f44,	// (0x0007e98b) compass_pane

0x6f50,	// (0x0007e997) main_location2_pane_t1

0x6f64,	// (0x0007e9ab) main_location2_pane_t2

0x6f78,	// (0x0007e9bf) main_location2_pane_t3

0x0003,

0xf363,	// (0x00086daa) main_location2_pane_t

0x1493,	// (0x00078eda) compass_pane_g1_ParamLimits

0x1493,	// (0x00078eda) compass_pane_g1

0x6fc2,	// (0x0007ea09) compass_pane_t1

0x6fd1,	// (0x0007ea18) compass_pane_t2

0x0005,

0xf36c,	// (0x00086db3) compass_pane_t

0x701c,	// (0x0007ea63) text_secondary_cp61

0x1511,	// (0x00078f58) navi_pane_cams_g5

0x158d,	// (0x00078fd4) navi_pane_im_t1

0x159b,	// (0x00078fe2) navi_pane_mp_g1_ParamLimits

0x159b,	// (0x00078fe2) navi_pane_mp_g1

0x15af,	// (0x00078ff6) navi_pane_mp_g2_ParamLimits

0x15af,	// (0x00078ff6) navi_pane_mp_g2

0x15bb,	// (0x00079002) navi_pane_mp_g3_ParamLimits

0x15bb,	// (0x00079002) navi_pane_mp_g3

0x0002,

0xf380,	// (0x00086dc7) navi_pane_mp_g_ParamLimits

0xf380,	// (0x00086dc7) navi_pane_mp_g

0x15c7,	// (0x0007900e) navi_pane_mp_t1

0x15d5,	// (0x0007901c) navi_pane_mp_t2

0x0002,

0xf387,	// (0x00086dce) navi_pane_mp_t

0x1640,	// (0x00079087) navi_pane_vt_g1

0x15c7,	// (0x0007900e) navi_pane_vt_t1

0x1648,	// (0x0007908f) navi_slider_pane

0x0b90,	// (0x000785d7) zooming_pane

0x1658,	// (0x0007909f) navi_slider_pane_g1

0x7057,	// (0x0007ea9e) navi_slider_pane_g2

0x0006,

0xf38e,	// (0x00086dd5) navi_slider_pane_g

0x168e,	// (0x000790d5) aid_levels_zoom

0x1696,	// (0x000790dd) zooming_pane_g1

0x169e,	// (0x000790e5) zooming_pane_g2

0x169e,	// (0x000790e5) zooming_pane_g3

0x0002,

0xf39d,	// (0x00086de4) zooming_pane_g

0x16a6,	// (0x000790ed) level_10_zoom

0x16af,	// (0x000790f6) level_11_zoom

0x16b8,	// (0x000790ff) level_1_zoom

0x16c1,	// (0x00079108) level_2_zoom

0x16ca,	// (0x00079111) level_3_zoom

0x16d3,	// (0x0007911a) level_4_zoom

0x16dc,	// (0x00079123) level_5_zoom

0x16e5,	// (0x0007912c) level_6_zoom

0x16ee,	// (0x00079135) level_7_zoom

0x16f7,	// (0x0007913e) level_8_zoom

0x1700,	// (0x00079147) level_9_zoom

0x1711,	// (0x00079158) popup_phob_thumbnail_window_g1

0x1719,	// (0x00079160) popup_phob_thumbnail_window_g2

0x0001,

0xf3a4,	// (0x00086deb) popup_phob_thumbnail_window_g

0x7fbd,	// (0x0007fa04) level_1_location

0x7fc5,	// (0x0007fa0c) level_2_location

0x7fcd,	// (0x0007fa14) level_3_location

0x7fd7,	// (0x0007fa1e) level_4_location

0x0b90,	// (0x000785d7) level_5_location

0x7069,	// (0x0007eab0) mce_icon_pane_g1

0x7071,	// (0x0007eab8) mce_icon_pane_g2

0x0001,

0xf3a9,	// (0x00086df0) mce_icon_pane_g

0x7079,	// (0x0007eac0) main_mup_pane_g1_ParamLimits

0x7079,	// (0x0007eac0) main_mup_pane_g1

0x08ec,	// (0x00078333) main_mup_pane_g2_ParamLimits

0x08ec,	// (0x00078333) main_mup_pane_g2

0x08ec,	// (0x00078333) main_mup_pane_g3_ParamLimits

0x08ec,	// (0x00078333) main_mup_pane_g3

0x08ec,	// (0x00078333) main_mup_pane_g4_ParamLimits

0x08ec,	// (0x00078333) main_mup_pane_g4

0x08ec,	// (0x00078333) main_mup_pane_g5_ParamLimits

0x08ec,	// (0x00078333) main_mup_pane_g5

0x08ec,	// (0x00078333) main_mup_pane_g6_ParamLimits

0x08ec,	// (0x00078333) main_mup_pane_g6

0x08ec,	// (0x00078333) main_mup_pane_g7_ParamLimits

0x08ec,	// (0x00078333) main_mup_pane_g7

0x08ec,	// (0x00078333) main_mup_pane_g8_ParamLimits

0x08ec,	// (0x00078333) main_mup_pane_g8

0x08ec,	// (0x00078333) main_mup_pane_g9_ParamLimits

0x08ec,	// (0x00078333) main_mup_pane_g9

0x08ec,	// (0x00078333) main_mup_pane_g10_ParamLimits

0x08ec,	// (0x00078333) main_mup_pane_g10

0x08ec,	// (0x00078333) main_mup_pane_g11_ParamLimits

0x08ec,	// (0x00078333) main_mup_pane_g11

0x08de,	// (0x00078325) main_mup_pane_g12_ParamLimits

0x08de,	// (0x00078325) main_mup_pane_g12

0x08ec,	// (0x00078333) main_mup_pane_g13_ParamLimits

0x08ec,	// (0x00078333) main_mup_pane_g13

0x000c,

0xf3ae,	// (0x00086df5) main_mup_pane_g_ParamLimits

0xf3ae,	// (0x00086df5) main_mup_pane_g

0x08fa,	// (0x00078341) main_mup_pane_t1_ParamLimits

0x08fa,	// (0x00078341) main_mup_pane_t1

0x08fa,	// (0x00078341) main_mup_pane_t2_ParamLimits

0x08fa,	// (0x00078341) main_mup_pane_t2

0x08fa,	// (0x00078341) main_mup_pane_t3_ParamLimits

0x08fa,	// (0x00078341) main_mup_pane_t3

0x1721,	// (0x00079168) main_mup_pane_t4_ParamLimits

0x1721,	// (0x00079168) main_mup_pane_t4

0x1721,	// (0x00079168) main_mup_pane_t5_ParamLimits

0x1721,	// (0x00079168) main_mup_pane_t5

0x0ba2,	// (0x000785e9) main_mup_pane_t6_ParamLimits

0x0ba2,	// (0x000785e9) main_mup_pane_t6

0x0005,

0xf3c9,	// (0x00086e10) main_mup_pane_t_ParamLimits

0xf3c9,	// (0x00086e10) main_mup_pane_t

0x074a,	// (0x00078191) mup_progress_pane_ParamLimits

0x074a,	// (0x00078191) mup_progress_pane

0x1c1d,	// (0x00079664) mup_visualizer_pane_ParamLimits

0x1c1d,	// (0x00079664) mup_visualizer_pane

0x1c1d,	// (0x00079664) mup_volume_pane_ParamLimits

0x1c1d,	// (0x00079664) mup_volume_pane

0x08de,	// (0x00078325) mup_visualizer_pane_g1_ParamLimits

0x08de,	// (0x00078325) mup_visualizer_pane_g1

0x1735,	// (0x0007917c) mup_visualizer_pane_g2_ParamLimits

0x1735,	// (0x0007917c) mup_visualizer_pane_g2

0x08d0,	// (0x00078317) mup_visualizer_pane_g3_ParamLimits

0x08d0,	// (0x00078317) mup_visualizer_pane_g3

0x0002,

0xf3d6,	// (0x00086e1d) mup_visualizer_pane_g_ParamLimits

0xf3d6,	// (0x00086e1d) mup_visualizer_pane_g

0x0bd0,	// (0x00078617) mup_volume_pane_g1

0x0bd0,	// (0x00078617) mup_volume_pane_g2

0x0001,

0xf3dd,	// (0x00086e24) mup_volume_pane_g

0x0bd0,	// (0x00078617) mup_progress_pane_g1

0x0bd0,	// (0x00078617) mup_progress_pane_g2

0x0bd0,	// (0x00078617) mup_progress_pane_g3

0x0002,

0xf3e2,	// (0x00086e29) mup_progress_pane_g

0xd787,	// (0x000851ce) bg_popup_window_pane_cp05

0x1743,	// (0x0007918a) heading_pane_cp02_ParamLimits

0x1743,	// (0x0007918a) heading_pane_cp02

0x175d,	// (0x000791a4) list_popup_blid_pane

0x1765,	// (0x000791ac) list_blid_sat_info_pane_ParamLimits

0x1765,	// (0x000791ac) list_blid_sat_info_pane

0x1778,	// (0x000791bf) list_blid_sat_info_pane_g1

0x1780,	// (0x000791c7) list_blid_sat_info_pane_t1

0x7174,	// (0x0007ebbb) mup_equalizer_pane_ParamLimits

0x7174,	// (0x0007ebbb) mup_equalizer_pane

0x7195,	// (0x0007ebdc) mup_equalizer_pane_cp1_ParamLimits

0x7195,	// (0x0007ebdc) mup_equalizer_pane_cp1

0x71b6,	// (0x0007ebfd) mup_equalizer_pane_cp2_ParamLimits

0x71b6,	// (0x0007ebfd) mup_equalizer_pane_cp2

0x71d7,	// (0x0007ec1e) mup_equalizer_pane_cp3_ParamLimits

0x71d7,	// (0x0007ec1e) mup_equalizer_pane_cp3

0x71f8,	// (0x0007ec3f) mup_equalizer_pane_cp4_ParamLimits

0x71f8,	// (0x0007ec3f) mup_equalizer_pane_cp4

0x7219,	// (0x0007ec60) mup_equalizer_pane_cp5

0x722f,	// (0x0007ec76) mup_equalizer_pane_cp6

0x7247,	// (0x0007ec8e) mup_equalizer_pane_cp7

0xe12c,	// (0x00085b73) bg_popup_call_poc_act_pane_g9

0xe134,	// (0x00085b7b) bg_popup_call_poc_act_pane_g10

0xe13c,	// (0x00085b83) bg_popup_call_poc_act_pane_g11

0x000a,

0x0863,	// (0x000782aa) mup_scale_pane

0x087b,	// (0x000782c2) mup_scale_pane_g1

0x178e,	// (0x000791d5) mup_scale_pane_g2

0x0006,

0xf3fe,	// (0x00086e45) mup_scale_pane_g

0x17b2,	// (0x000791f9) msg_data_pane

0x17ba,	// (0x00079201) scroll_pane_cp017

0x7271,	// (0x0007ecb8) bg_list_pane_cp04_ParamLimits

0x7271,	// (0x0007ecb8) bg_list_pane_cp04

0x17ca,	// (0x00079211) msg_data_pane_g1

0x728d,	// (0x0007ecd4) msg_data_pane_g2

0x7295,	// (0x0007ecdc) msg_data_pane_g3

0x729d,	// (0x0007ece4) msg_data_pane_g4

0x72a5,	// (0x0007ecec) msg_data_pane_g5

0x72ad,	// (0x0007ecf4) msg_data_pane_g6

0x72b5,	// (0x0007ecfc) msg_data_pane_g7

0x0006,

0xf40d,	// (0x00086e54) msg_data_pane_g

0x72bd,	// (0x0007ed04) msg_text_pane_ParamLimits

0x72bd,	// (0x0007ed04) msg_text_pane

0x730b,	// (0x0007ed52) qrid_highlight_pane_cp011_ParamLimits

0x730b,	// (0x0007ed52) qrid_highlight_pane_cp011

0xd787,	// (0x000851ce) msg_body_pane

0xd787,	// (0x000851ce) msg_header_pane

0x17db,	// (0x00079222) input_focus_pane_cp07

0x17f0,	// (0x00079237) msg_header_pane_t1_ParamLimits

0x17f0,	// (0x00079237) msg_header_pane_t1

0x1806,	// (0x0007924d) msg_header_pane_t2_ParamLimits

0x1806,	// (0x0007924d) msg_header_pane_t2

0x0001,

0xf421,	// (0x00086e68) msg_header_pane_t_ParamLimits

0xf421,	// (0x00086e68) msg_header_pane_t

0x181d,	// (0x00079264) msg_body_pane_g1

0x1825,	// (0x0007926c) msg_body_pane_t1_ParamLimits

0x1825,	// (0x0007926c) msg_body_pane_t1

0x1856,	// (0x0007929d) msg_body_pane_t2_ParamLimits

0x1856,	// (0x0007929d) msg_body_pane_t2

0x1868,	// (0x000792af) msg_body_pane_t3_ParamLimits

0x1868,	// (0x000792af) msg_body_pane_t3

0x0002,

0xf426,	// (0x00086e6d) msg_body_pane_t_ParamLimits

0xf426,	// (0x00086e6d) msg_body_pane_t

0x7385,	// (0x0007edcc) main_viewer_pane_g1_ParamLimits

0x7385,	// (0x0007edcc) main_viewer_pane_g1

0x7391,	// (0x0007edd8) main_viewer_pane_g2_ParamLimits

0x7391,	// (0x0007edd8) main_viewer_pane_g2

0x739d,	// (0x0007ede4) main_viewer_pane_g3_ParamLimits

0x739d,	// (0x0007ede4) main_viewer_pane_g3

0x73ae,	// (0x0007edf5) main_viewer_pane_g4_ParamLimits

0x73ae,	// (0x0007edf5) main_viewer_pane_g4

0x73bf,	// (0x0007ee06) main_viewer_pane_g5_ParamLimits

0x73bf,	// (0x0007ee06) main_viewer_pane_g5

0x73bf,	// (0x0007ee06) main_viewer_pane_g7_ParamLimits

0x73bf,	// (0x0007ee06) main_viewer_pane_g7

0x10d0,	// (0x00078b17) main_viewer_pane_g8_ParamLimits

0x10d0,	// (0x00078b17) main_viewer_pane_g8

0x0007,

0xf436,	// (0x00086e7d) main_viewer_pane_g_ParamLimits

0xf436,	// (0x00086e7d) main_viewer_pane_g

0x18bc,	// (0x00079303) viewer_content_pane_ParamLimits

0x18bc,	// (0x00079303) viewer_content_pane

0x73fd,	// (0x0007ee44) main_postcard_pane_g1_ParamLimits

0x73fd,	// (0x0007ee44) main_postcard_pane_g1

0x740b,	// (0x0007ee52) main_postcard_pane_g2_ParamLimits

0x740b,	// (0x0007ee52) main_postcard_pane_g2

0x7419,	// (0x0007ee60) main_postcard_pane_g3_ParamLimits

0x7419,	// (0x0007ee60) main_postcard_pane_g3

0x0005,

0xf447,	// (0x00086e8e) main_postcard_pane_g_ParamLimits

0xf447,	// (0x00086e8e) main_postcard_pane_g

0x7429,	// (0x0007ee70) main_postcard_pane_g4

0xe2be,	// (0x00085d05) smil_status_volume_pane_g2

0x7455,	// (0x0007ee9c) postcard_pane_ParamLimits

0x7455,	// (0x0007ee9c) postcard_pane

0x1b77,	// (0x000795be) postcard_pane_g1_ParamLimits

0x1b77,	// (0x000795be) postcard_pane_g1

0x7487,	// (0x0007eece) postcard_pane_g2_ParamLimits

0x7487,	// (0x0007eece) postcard_pane_g2

0x7493,	// (0x0007eeda) postcard_pane_g3_ParamLimits

0x7493,	// (0x0007eeda) postcard_pane_g3

0x18d8,	// (0x0007931f) postcard_pane_g4_ParamLimits

0x18d8,	// (0x0007931f) postcard_pane_g4

0x749f,	// (0x0007eee6) postcard_pane_g5_ParamLimits

0x749f,	// (0x0007eee6) postcard_pane_g5

0x74ab,	// (0x0007eef2) postcard_pane_g6_ParamLimits

0x74ab,	// (0x0007eef2) postcard_pane_g6

0x18ca,	// (0x00079311) postcard_pane_g7_ParamLimits

0x18ca,	// (0x00079311) postcard_pane_g7

0x0006,

0xf454,	// (0x00086e9b) postcard_pane_g_ParamLimits

0xf454,	// (0x00086e9b) postcard_pane_g

0x74b7,	// (0x0007eefe) main_mp2_pane_g1_ParamLimits

0x74b7,	// (0x0007eefe) main_mp2_pane_g1

0x74c3,	// (0x0007ef0a) main_mp2_pane_g2_ParamLimits

0x74c3,	// (0x0007ef0a) main_mp2_pane_g2

0x74cf,	// (0x0007ef16) main_mp2_pane_g3_ParamLimits

0x74cf,	// (0x0007ef16) main_mp2_pane_g3

0x0002,

0xf463,	// (0x00086eaa) main_mp2_pane_g_ParamLimits

0xf463,	// (0x00086eaa) main_mp2_pane_g

0x74db,	// (0x0007ef22) main_mp2_pane_t1_ParamLimits

0x74db,	// (0x0007ef22) main_mp2_pane_t1

0x74f2,	// (0x0007ef39) main_mp2_pane_t2_ParamLimits

0x74f2,	// (0x0007ef39) main_mp2_pane_t2

0x7504,	// (0x0007ef4b) main_mp2_pane_t3_ParamLimits

0x7504,	// (0x0007ef4b) main_mp2_pane_t3

0x0002,

0xf46a,	// (0x00086eb1) main_mp2_pane_t_ParamLimits

0xf46a,	// (0x00086eb1) main_mp2_pane_t

0x18e6,	// (0x0007932d) pec_content_pane_ParamLimits

0x18e6,	// (0x0007932d) pec_content_pane

0x0d31,	// (0x00078778) scroll_pane_cp015

0x18f8,	// (0x0007933f) pec_attribute_pane_ParamLimits

0x18f8,	// (0x0007933f) pec_attribute_pane

0x7516,	// (0x0007ef5d) pec_content_pane_g1_ParamLimits

0x7516,	// (0x0007ef5d) pec_content_pane_g1

0x1908,	// (0x0007934f) pec_content_pane_t1_ParamLimits

0x1908,	// (0x0007934f) pec_content_pane_t1

0x191a,	// (0x00079361) pec_content_pane_t2_ParamLimits

0x191a,	// (0x00079361) pec_content_pane_t2

0x0001,

0xf471,	// (0x00086eb8) pec_content_pane_t_ParamLimits

0xf471,	// (0x00086eb8) pec_content_pane_t

0x7522,	// (0x0007ef69) list_single_graphic_pane_cp01_ParamLimits

0x7522,	// (0x0007ef69) list_single_graphic_pane_cp01

0x0863,	// (0x000782aa) bg_popup_sub_pane_cp04

0x192c,	// (0x00079373) popup_mup_playback_window_g1

0x1938,	// (0x0007937f) popup_mup_playback_window_t1

0x194d,	// (0x00079394) popup_mup_playback_window_t2

0x0001,

0xf476,	// (0x00086ebd) popup_mup_playback_window_t

0x1984,	// (0x000793cb) main_image_pane_g1_ParamLimits

0x1984,	// (0x000793cb) main_image_pane_g1

0x19c7,	// (0x0007940e) scroll_pane_cp018_ParamLimits

0x19c7,	// (0x0007940e) scroll_pane_cp018

0x19df,	// (0x00079426) scroll_pane_cp016_ParamLimits

0x19df,	// (0x00079426) scroll_pane_cp016

0x75bc,	// (0x0007f003) smil2_image_pane_ParamLimits

0x75bc,	// (0x0007f003) smil2_image_pane

0x75ec,	// (0x0007f033) smil2_root_pane_ParamLimits

0x75ec,	// (0x0007f033) smil2_root_pane

0x7618,	// (0x0007f05f) smil2_text_pane_ParamLimits

0x7618,	// (0x0007f05f) smil2_text_pane

0xd787,	// (0x000851ce) bg_list_pane_cp06

0x1a1b,	// (0x00079462) grid_radio_pane

0xd787,	// (0x000851ce) bg_popup_window_pane_cp06

0x1a23,	// (0x0007946a) main_fmradio_pane_t1

0xe184,	// (0x00085bcb) heading_pane_cp04

0x1a31,	// (0x00079478) main_fmradio_pane_t2

0xe18c,	// (0x00085bd3) popup_cale_lunar_info_window_g1

0x1a3f,	// (0x00079486) main_fmradio_pane_t3

0xe194,	// (0x00085bdb) popup_cale_lunar_info_window_g2

0x1a4d,	// (0x00079494) main_fmradio_pane_t4

0x0001,

0x1a5b,	// (0x000794a2) main_fmradio_pane_t5

0x0004,

0xf569,	// (0x00086fb0) popup_cale_lunar_info_window_g

0xf48b,	// (0x00086ed2) main_fmradio_pane_t

0x1a69,	// (0x000794b0) wait_bar_pane_cp03

0x1a71,	// (0x000794b8) cell_fmradio_pane_ParamLimits

0x1a71,	// (0x000794b8) cell_fmradio_pane

0x18ca,	// (0x00079311) cell_fmradio_pane_g1_ParamLimits

0x18ca,	// (0x00079311) cell_fmradio_pane_g1

0xd787,	// (0x000851ce) grid_highlight_pane_cp011

0x1a84,	// (0x000794cb) poc_content_pane_ParamLimits

0x1a84,	// (0x000794cb) poc_content_pane

0x1a96,	// (0x000794dd) scroll_pane_cp019

0x7658,	// (0x0007f09f) popup_call_poc_act_window_ParamLimits

0x7658,	// (0x0007f09f) popup_call_poc_act_window

0x7665,	// (0x0007f0ac) popup_call_poc_inact_window_ParamLimits

0x7665,	// (0x0007f0ac) popup_call_poc_inact_window

0xf52d,	// (0x00086f74) bg_popup_call_poc_act_pane_g

0xe144,	// (0x00085b8b) bg_popup_call_poc_inact_pane_g1

0xe14c,	// (0x00085b93) bg_popup_call_poc_inact_pane_g2

0x1a9e,	// (0x000794e5) popup_call_poc_act_window_g2

0xe154,	// (0x00085b9b) bg_popup_call_poc_inact_pane_g3

0xe0d4,	// (0x00085b1b) bg_popup_call_poc_inact_pane_g4

0xe15c,	// (0x00085ba3) bg_popup_call_poc_inact_pane_g5

0x1aa6,	// (0x000794ed) popup_call_poc_act_window_t1_ParamLimits

0x1aa6,	// (0x000794ed) popup_call_poc_act_window_t1

0x1ace,	// (0x00079515) popup_call_poc_act_window_t2_ParamLimits

0x1ace,	// (0x00079515) popup_call_poc_act_window_t2

0x1af6,	// (0x0007953d) popup_call_poc_act_window_t3_ParamLimits

0x1af6,	// (0x0007953d) popup_call_poc_act_window_t3

0x1b1e,	// (0x00079565) popup_call_poc_act_window_t4_ParamLimits

0x1b1e,	// (0x00079565) popup_call_poc_act_window_t4

0x0003,

0xf496,	// (0x00086edd) popup_call_poc_act_window_t_ParamLimits

0xf496,	// (0x00086edd) popup_call_poc_act_window_t

0xe164,	// (0x00085bab) bg_popup_call_poc_inact_pane_g6

0xe16c,	// (0x00085bb3) bg_popup_call_poc_inact_pane_g7

0xe174,	// (0x00085bbb) bg_popup_call_poc_inact_pane_g8

0x1b30,	// (0x00079577) popup_call_poc_inact_window_g2

0xe17c,	// (0x00085bc3) bg_popup_call_poc_inact_pane_g9

0x0008,

0xf544,	// (0x00086f8b) bg_popup_call_poc_inact_pane_g

0x1b38,	// (0x0007957f) popup_call_poc_inact_window_t1_ParamLimits

0x1b38,	// (0x0007957f) popup_call_poc_inact_window_t1

0x1b4d,	// (0x00079594) popup_call_poc_inact_window_t2_ParamLimits

0x1b4d,	// (0x00079594) popup_call_poc_inact_window_t2

0x1b62,	// (0x000795a9) popup_call_poc_inact_window_t3_ParamLimits

0x1b62,	// (0x000795a9) popup_call_poc_inact_window_t3

0x0002,

0xf49f,	// (0x00086ee6) popup_call_poc_inact_window_t_ParamLimits

0xf49f,	// (0x00086ee6) popup_call_poc_inact_window_t

0xe236,	// (0x00085c7d) context_pane_ParamLimits

0x82d1,	// (0x0007fd18) signal_pane_ParamLimits

0x0b90,	// (0x000785d7) main_call2_pane

0x8244,	// (0x0007fc8b) popup_phob_thumbnail2_window_ParamLimits

0x8244,	// (0x0007fc8b) popup_phob_thumbnail2_window

0x7333,	// (0x0007ed7a) aid_hotspot_pointer_arrow_pane

0x733b,	// (0x0007ed82) aid_hotspot_pointer_hand_pane

0x7f85,	// (0x0007f9cc) phob_pre_status_pane_g5

0xd8d7,	// (0x0008531e) cams_zoom_pane_ParamLimits

0xd8d7,	// (0x0008531e) image_vga_pane_ParamLimits

0x08de,	// (0x00078325) main_camera_pane_g1_ParamLimits

0x08de,	// (0x00078325) main_camera_pane_g2_ParamLimits

0x08de,	// (0x00078325) main_camera_pane_g3_ParamLimits

0x08de,	// (0x00078325) main_camera_pane_g4_ParamLimits

0x08de,	// (0x00078325) main_camera_pane_g5_ParamLimits

0x08de,	// (0x00078325) main_camera_pane_g6_ParamLimits

0x08de,	// (0x00078325) main_camera_pane_g7_ParamLimits

0xf1c5,	// (0x00086c0c) main_camera_pane_g_ParamLimits

0x1721,	// (0x00079168) main_camera_pane_t1_ParamLimits

0x1721,	// (0x00079168) main_camera_pane_t2_ParamLimits

0xf1d6,	// (0x00086c1d) main_camera_pane_t_ParamLimits

0x0863,	// (0x000782aa) bg_popup_preview_window_pane_cp01_ParamLimits

0x0863,	// (0x000782aa) bg_popup_preview_window_pane_cp01

0x7672,	// (0x0007f0b9) popup_phob_thumbnail2_window_g1_ParamLimits

0x7672,	// (0x0007f0b9) popup_phob_thumbnail2_window_g1

0xd787,	// (0x000851ce) call2_cli_visual_pane

0x768d,	// (0x0007f0d4) popup_call2_audio_conf_window_ParamLimits

0x768d,	// (0x0007f0d4) popup_call2_audio_conf_window

0x76a2,	// (0x0007f0e9) popup_call2_audio_first_window_ParamLimits

0x76a2,	// (0x0007f0e9) popup_call2_audio_first_window

0x7740,	// (0x0007f187) popup_call2_audio_in_window_ParamLimits

0x7740,	// (0x0007f187) popup_call2_audio_in_window

0x7782,	// (0x0007f1c9) popup_call2_audio_out_window_ParamLimits

0x7782,	// (0x0007f1c9) popup_call2_audio_out_window

0x77e4,	// (0x0007f22b) popup_call2_audio_second_window_ParamLimits

0x77e4,	// (0x0007f22b) popup_call2_audio_second_window

0x7842,	// (0x0007f289) popup_call2_audio_wait_window_ParamLimits

0x7842,	// (0x0007f289) popup_call2_audio_wait_window

0xd787,	// (0x000851ce) bg_popup_call2_act_pane_cp03

0x0845,	// (0x0007828c) list_conf_pane_cp

0x7881,	// (0x0007f2c8) popup_call2_audio_conf_window_t1

0x788f,	// (0x0007f2d6) list_single_graphic_popup_conf2_pane_ParamLimits

0x788f,	// (0x0007f2d6) list_single_graphic_popup_conf2_pane

0x137f,	// (0x00078dc6) list_highlight_pane_cp04

0x78a2,	// (0x0007f2e9) list_single_graphic_popup_conf2_pane_g1

0x1390,	// (0x00078dd7) list_single_graphic_popup_conf2_pane_g2

0x0001,

0xf4a6,	// (0x00086eed) list_single_graphic_popup_conf2_pane_g

0x78ac,	// (0x0007f2f3) list_single_graphic_popup_conf2_pane_t1

0x78ba,	// (0x0007f301) bg_popup_call2_act_pane_cp01_ParamLimits

0x78ba,	// (0x0007f301) bg_popup_call2_act_pane_cp01

0x7944,	// (0x0007f38b) call_type_pane_cp05_ParamLimits

0x7944,	// (0x0007f38b) call_type_pane_cp05

0x7998,	// (0x0007f3df) popup_call2_audio_second_window_g1_ParamLimits

0x7998,	// (0x0007f3df) popup_call2_audio_second_window_g1

0x79ec,	// (0x0007f433) popup_call2_audio_second_window_g2_ParamLimits

0x79ec,	// (0x0007f433) popup_call2_audio_second_window_g2

0x0002,

0xf4ab,	// (0x00086ef2) popup_call2_audio_second_window_g_ParamLimits

0xf4ab,	// (0x00086ef2) popup_call2_audio_second_window_g

0x7a51,	// (0x0007f498) popup_call2_audio_second_window_t1_ParamLimits

0x7a51,	// (0x0007f498) popup_call2_audio_second_window_t1

0x7b0c,	// (0x0007f553) popup_call2_audio_second_window_t2_ParamLimits

0x7b0c,	// (0x0007f553) popup_call2_audio_second_window_t2

0x7b5f,	// (0x0007f5a6) popup_call2_audio_second_window_t3_ParamLimits

0x7b5f,	// (0x0007f5a6) popup_call2_audio_second_window_t3

0x0003,

0xf4b2,	// (0x00086ef9) popup_call2_audio_second_window_t_ParamLimits

0xf4b2,	// (0x00086ef9) popup_call2_audio_second_window_t

0xd787,	// (0x000851ce) bg_popup_call2_in_pane_cp02

0xd791,	// (0x000851d8) call_type_pane_cp04

0x7c52,	// (0x0007f699) popup_call2_audio_wait_window_g1

0x7c5a,	// (0x0007f6a1) popup_call2_audio_wait_window_g2

0x0001,

0xf4bb,	// (0x00086f02) popup_call2_audio_wait_window_g

0xd7a9,	// (0x000851f0) popup_call2_audio_wait_window_t3

0x7c62,	// (0x0007f6a9) bg_popup_call2_act_pane_ParamLimits

0x7c62,	// (0x0007f6a9) bg_popup_call2_act_pane

0x7d22,	// (0x0007f769) call_type_pane_cp03_ParamLimits

0x7d22,	// (0x0007f769) call_type_pane_cp03

0x7d86,	// (0x0007f7cd) popup_call2_audio_first_window_g1_ParamLimits

0x7d86,	// (0x0007f7cd) popup_call2_audio_first_window_g1

0x7df6,	// (0x0007f83d) popup_call2_audio_first_window_g2_ParamLimits

0x7df6,	// (0x0007f83d) popup_call2_audio_first_window_g2

0x1b77,	// (0x000795be) popup_call2_audio_first_window_g3_ParamLimits

0x1b77,	// (0x000795be) popup_call2_audio_first_window_g3

0x0004,

0xf4c0,	// (0x00086f07) popup_call2_audio_first_window_g_ParamLimits

0xf4c0,	// (0x00086f07) popup_call2_audio_first_window_g

0xd95f,	// (0x000853a6) popup_call2_audio_first_window_t1_ParamLimits

0xd95f,	// (0x000853a6) popup_call2_audio_first_window_t1

0xda62,	// (0x000854a9) popup_call2_audio_first_window_t4_ParamLimits

0xda62,	// (0x000854a9) popup_call2_audio_first_window_t4

0xdb45,	// (0x0008558c) popup_call2_audio_first_window_t5_ParamLimits

0xdb45,	// (0x0008558c) popup_call2_audio_first_window_t5

0x0003,

0xf4cb,	// (0x00086f12) popup_call2_audio_first_window_t_ParamLimits

0xf4cb,	// (0x00086f12) popup_call2_audio_first_window_t

0x085b,	// (0x000782a2) bg_popup_call2_act_pane_g1

0xe19c,	// (0x00085be3) popup_cale_lunar_info_window_t1

0xe1aa,	// (0x00085bf1) popup_cale_lunar_info_window_t2

0xe1b8,	// (0x00085bff) popup_cale_lunar_info_window_t3

0xd787,	// (0x000851ce) bg_popup_call2_bubble_pane

0xdc46,	// (0x0008568d) bg_popup_call2_in_pane_cp01_ParamLimits

0xdc46,	// (0x0008568d) bg_popup_call2_in_pane_cp01

0xd463,	// (0x00084eaa) call_type_pane_cp02

0x7e5a,	// (0x0007f8a1) popup_call2_audio_out_window_g1_ParamLimits

0x7e5a,	// (0x0007f8a1) popup_call2_audio_out_window_g1

0xdc8e,	// (0x000856d5) popup_call2_audio_out_window_g2_ParamLimits

0xdc8e,	// (0x000856d5) popup_call2_audio_out_window_g2

0x7e86,	// (0x0007f8cd) popup_call2_audio_out_window_g3_ParamLimits

0x7e86,	// (0x0007f8cd) popup_call2_audio_out_window_g3

0x0003,

0xf4d4,	// (0x00086f1b) popup_call2_audio_out_window_g_ParamLimits

0xf4d4,	// (0x00086f1b) popup_call2_audio_out_window_g

0xdcc5,	// (0x0008570c) popup_call2_audio_out_window_t1_ParamLimits

0xdcc5,	// (0x0008570c) popup_call2_audio_out_window_t1

0xdd24,	// (0x0008576b) popup_call2_audio_out_window_t2_ParamLimits

0xdd24,	// (0x0008576b) popup_call2_audio_out_window_t2

0xdd78,	// (0x000857bf) popup_call2_audio_out_window_t3_ParamLimits

0xdd78,	// (0x000857bf) popup_call2_audio_out_window_t3

0xdd8e,	// (0x000857d5) popup_call2_audio_out_window_t4_ParamLimits

0xdd8e,	// (0x000857d5) popup_call2_audio_out_window_t4

0xdda4,	// (0x000857eb) popup_call2_audio_out_window_t5_ParamLimits

0xdda4,	// (0x000857eb) popup_call2_audio_out_window_t5

0x0005,

0xf4dd,	// (0x00086f24) popup_call2_audio_out_window_t_ParamLimits

0xf4dd,	// (0x00086f24) popup_call2_audio_out_window_t

0xde08,	// (0x0008584f) bg_popup_call2_in_pane_ParamLimits

0xde08,	// (0x0008584f) bg_popup_call2_in_pane

0xde64,	// (0x000858ab) popup_call2_audio_in_window_g1_ParamLimits

0xde64,	// (0x000858ab) popup_call2_audio_in_window_g1

0xde9c,	// (0x000858e3) popup_call2_audio_in_window_g2_ParamLimits

0xde9c,	// (0x000858e3) popup_call2_audio_in_window_g2

0xded4,	// (0x0008591b) popup_call2_audio_in_window_g3_ParamLimits

0xded4,	// (0x0008591b) popup_call2_audio_in_window_g3

0x0003,

0xf4ea,	// (0x00086f31) popup_call2_audio_in_window_g_ParamLimits

0xf4ea,	// (0x00086f31) popup_call2_audio_in_window_g

0xdf2c,	// (0x00085973) popup_call2_audio_in_window_t1_ParamLimits

0xdf2c,	// (0x00085973) popup_call2_audio_in_window_t1

0xdfac,	// (0x000859f3) popup_call2_audio_in_window_t2_ParamLimits

0xdfac,	// (0x000859f3) popup_call2_audio_in_window_t2

0xe02c,	// (0x00085a73) popup_call2_audio_in_window_t3_ParamLimits

0xe02c,	// (0x00085a73) popup_call2_audio_in_window_t3

0xe046,	// (0x00085a8d) popup_call2_audio_in_window_t4_ParamLimits

0xe046,	// (0x00085a8d) popup_call2_audio_in_window_t4

0xe058,	// (0x00085a9f) popup_call2_audio_in_window_t5_ParamLimits

0xe058,	// (0x00085a9f) popup_call2_audio_in_window_t5

0xe06a,	// (0x00085ab1) popup_call2_audio_in_window_t6_ParamLimits

0xe06a,	// (0x00085ab1) popup_call2_audio_in_window_t6

0x0005,

0xf4f3,	// (0x00086f3a) popup_call2_audio_in_window_t_ParamLimits

0xf4f3,	// (0x00086f3a) popup_call2_audio_in_window_t

0x085b,	// (0x000782a2) bg_popup_call2_in_pane_g1

0xe1c6,	// (0x00085c0d) popup_cale_lunar_info_window_t4

0x0003,

0xf56e,	// (0x00086fb5) popup_cale_lunar_info_window_t

0x0863,	// (0x000782aa) bg_popup_call2_rect_pane_ParamLimits

0x0863,	// (0x000782aa) bg_popup_call2_rect_pane

0xd787,	// (0x000851ce) call2_cli_visual_graphic_pane

0xd787,	// (0x000851ce) call2_cli_visual_text_pane

0x830d,	// (0x0007fd54) smil_status_volume_pane_g3

0x0002,

0x087b,	// (0x000782c2) call2_cli_visual_graphic_pane_g1

0x087b,	// (0x000782c2) call2_cli_visual_graphic_pane_g2

0x087b,	// (0x000782c2) call2_cli_visual_graphic_pane_g3

0x0002,

0xf500,	// (0x00086f47) call2_cli_visual_graphic_pane_g

0xe07c,	// (0x00085ac3) bg_popup_call2_rect_pane_g1

0x0a5f,	// (0x000784a6) bg_popup_call2_rect_pane_g2

0xe084,	// (0x00085acb) bg_popup_call2_rect_pane_g3

0xe08c,	// (0x00085ad3) bg_popup_call2_rect_pane_g4

0xe094,	// (0x00085adb) bg_popup_call2_rect_pane_g5

0xe09c,	// (0x00085ae3) bg_popup_call2_rect_pane_g6

0xe0a4,	// (0x00085aeb) bg_popup_call2_rect_pane_g7

0xe0ac,	// (0x00085af3) bg_popup_call2_rect_pane_g8

0xe0b4,	// (0x00085afb) bg_popup_call2_rect_pane_g9

0x0008,

0xf507,	// (0x00086f4e) bg_popup_call2_rect_pane_g

0xe0bc,	// (0x00085b03) bg_popup_call2_bubble_pane_g1

0xe0c4,	// (0x00085b0b) bg_popup_call2_bubble_pane_g2

0xe0cc,	// (0x00085b13) bg_popup_call2_bubble_pane_g3

0xe0d4,	// (0x00085b1b) bg_popup_call2_bubble_pane_g4

0xe0dc,	// (0x00085b23) bg_popup_call2_bubble_pane_g5

0xe0e4,	// (0x00085b2b) bg_popup_call2_bubble_pane_g6

0xe0ec,	// (0x00085b33) bg_popup_call2_bubble_pane_g7

0xe0f4,	// (0x00085b3b) bg_popup_call2_bubble_pane_g8

0xe0fc,	// (0x00085b43) bg_popup_call2_bubble_pane_g9

0x0008,

0xf51a,	// (0x00086f61) bg_popup_call2_bubble_pane_g

0x541a,	// (0x0007ce61) aid_cale_week_size_cell_pane

0x0863,	// (0x000782aa) aid_cams_cif_uncrop_pane_ParamLimits

0x0863,	// (0x000782aa) aid_cams_cif_uncrop_pane

0x5a13,	// (0x0007d45a) aid_cams_size_cell_ParamLimits

0x5a13,	// (0x0007d45a) aid_cams_size_cell

0x5a1f,	// (0x0007d466) grid_cams_pane_ParamLimits

0x5a2d,	// (0x0007d474) linegrid_cams_pane_ParamLimits

0x5b04,	// (0x0007d54b) call_video_pane_t1

0x5b25,	// (0x0007d56c) call_video_pane_t2

0x0001,

0xf222,	// (0x00086c69) call_video_pane_t

0x6073,	// (0x0007daba) aid_cale_month_size_cell_pane_ParamLimits

0x6073,	// (0x0007daba) aid_cale_month_size_cell_pane

0xf5b2,	// (0x00086ff9) smil_status_volume_pane_g

0x831a,	// (0x0007fd61) volume_smil_pane_ParamLimits

0x4cba,	// (0x0007c701) aid_popup2_width_pane

0x5311,	// (0x0007cd58) cell_qdial_pane_g4_ParamLimits

0x5311,	// (0x0007cd58) cell_qdial_pane_g4

0x6f9e,	// (0x0007e9e5) aid_blid_cardinal_pane_ParamLimits

0x6fae,	// (0x0007e9f5) aid_blid_destination_pane_ParamLimits

0x6fae,	// (0x0007e9f5) aid_blid_destination_pane

0x0863,	// (0x000782aa) bg_popup_call_poc_act_pane_ParamLimits

0x0863,	// (0x000782aa) bg_popup_call_poc_act_pane

0x0863,	// (0x000782aa) bg_popup_call_poc_inact_pane_ParamLimits

0x0863,	// (0x000782aa) bg_popup_call_poc_inact_pane

0xe104,	// (0x00085b4b) bg_popup_call_poc_act_pane_g1

0xe10c,	// (0x00085b53) bg_popup_call_poc_act_pane_g2

0xe114,	// (0x00085b5b) bg_popup_call_poc_act_pane_g3

0xe0d4,	// (0x00085b1b) bg_popup_call_poc_act_pane_g4

0xe0dc,	// (0x00085b23) bg_popup_call_poc_act_pane_g5

0xe11c,	// (0x00085b63) bg_popup_call_poc_act_pane_g6

0xe0ec,	// (0x00085b33) bg_popup_call_poc_act_pane_g7

0xe124,	// (0x00085b6b) bg_popup_call_poc_act_pane_g8

0xd787,	// (0x000851ce) main_usb_pane

0x8177,	// (0x0007fbbe) popup_cale_lunar_info_window

0x5e42,	// (0x0007d889) im_reading_pane_t1_ParamLimits

0x0c89,	// (0x000786d0) list_im_pane_ParamLimits

0x0c9a,	// (0x000786e1) scroll_pane_cp07_ParamLimits

0xd787,	// (0x000851ce) grid_highlight_pane_cp012

0x0863,	// (0x000782aa) mup_scale_pane_ParamLimits

0x1b77,	// (0x000795be) main_usb_pane_g1_ParamLimits

0x1b77,	// (0x000795be) main_usb_pane_g1

0x7eed,	// (0x0007f934) main_usb_pane_g2_ParamLimits

0x7eed,	// (0x0007f934) main_usb_pane_g2

0x0001,

0xf557,	// (0x00086f9e) main_usb_pane_g_ParamLimits

0xf557,	// (0x00086f9e) main_usb_pane_g

0x7ef9,	// (0x0007f940) main_usb_pane_t1_ParamLimits

0x7ef9,	// (0x0007f940) main_usb_pane_t1

0x7f0b,	// (0x0007f952) main_usb_pane_t2_ParamLimits

0x7f0b,	// (0x0007f952) main_usb_pane_t2

0x7f1d,	// (0x0007f964) main_usb_pane_t3_ParamLimits

0x7f1d,	// (0x0007f964) main_usb_pane_t3

0x7f2f,	// (0x0007f976) main_usb_pane_t4_ParamLimits

0x7f2f,	// (0x0007f976) main_usb_pane_t4

0x7f41,	// (0x0007f988) main_usb_pane_t5_ParamLimits

0x7f41,	// (0x0007f988) main_usb_pane_t5

0x7f53,	// (0x0007f99a) main_usb_pane_t6_ParamLimits

0x7f53,	// (0x0007f99a) main_usb_pane_t6

0x0005,

0xf55c,	// (0x00086fa3) main_usb_pane_t_ParamLimits

0x6f44,	// (0x0007e98b) aid_text_placing

0x6f50,	// (0x0007e997) main_location2_pane_t1_ParamLimits

0x6f64,	// (0x0007e9ab) main_location2_pane_t2_ParamLimits

0x6f78,	// (0x0007e9bf) main_location2_pane_t3_ParamLimits

0x6f8c,	// (0x0007e9d3) main_location2_pane_t4_ParamLimits

0x6f8c,	// (0x0007e9d3) main_location2_pane_t4

0xf363,	// (0x00086daa) main_location2_pane_t_ParamLimits

0x0891,	// (0x000782d8) find_pinb_pane_g2_ParamLimits

0x0891,	// (0x000782d8) find_pinb_pane_g2

0x0001,

0xf0da,	// (0x00086b21) find_pinb_pane_g_ParamLimits

0xf0da,	// (0x00086b21) find_pinb_pane_g

0x089d,	// (0x000782e4) find_pinb_pane_t1_ParamLimits

0x08af,	// (0x000782f6) find_pinb_pane_t2_ParamLimits

0xf0df,	// (0x00086b26) find_pinb_pane_t_ParamLimits

0xd787,	// (0x000851ce) main_call3_pane

0x6636,	// (0x0007e07d) cale_month_day_heading_pane_t1_ParamLimits

0x66bc,	// (0x0007e103) cale_month_day_heading_pane_t2_ParamLimits

0x6735,	// (0x0007e17c) cale_month_day_heading_pane_t3_ParamLimits

0x67ae,	// (0x0007e1f5) cale_month_day_heading_pane_t4_ParamLimits

0x6827,	// (0x0007e26e) cale_month_day_heading_pane_t5_ParamLimits

0x68a0,	// (0x0007e2e7) cale_month_day_heading_pane_t6_ParamLimits

0x6919,	// (0x0007e360) cale_month_day_heading_pane_t7_ParamLimits

0xf25a,	// (0x00086ca1) cale_month_day_heading_pane_t_ParamLimits

0x0ef0,	// (0x00078937) smil_status_volume_pane

0x746f,	// (0x0007eeb6) postcard_address_pane_ParamLimits

0x746f,	// (0x0007eeb6) postcard_address_pane

0x747b,	// (0x0007eec2) postcard_message_pane_ParamLimits

0x747b,	// (0x0007eec2) postcard_message_pane

0x7eb2,	// (0x0007f8f9) call2_cli_visual_pane_t1_ParamLimits

0x7eb2,	// (0x0007f8f9) call2_cli_visual_pane_t1

0xe2e9,	// (0x00085d30) postcard_message_pane_t1_ParamLimits

0xe2e9,	// (0x00085d30) postcard_message_pane_t1

0xe2d1,	// (0x00085d18) postcard_address_pane_t1_ParamLimits

0xe2d1,	// (0x00085d18) postcard_address_pane_t1

0x844b,	// (0x0007fe92) popup_call3_audio_in_window_ParamLimits

0x844b,	// (0x0007fe92) popup_call3_audio_in_window

0x832f,	// (0x0007fd76) bg_popup_call3_in_pane_ParamLimits

0x832f,	// (0x0007fd76) bg_popup_call3_in_pane

0x8391,	// (0x0007fdd8) popup_call3_audio_in_window_g1_ParamLimits

0x8391,	// (0x0007fdd8) popup_call3_audio_in_window_g1

0x83a9,	// (0x0007fdf0) popup_call3_audio_in_window_g2_ParamLimits

0x83a9,	// (0x0007fdf0) popup_call3_audio_in_window_g2

0x83c1,	// (0x0007fe08) popup_call3_audio_in_window_g3_ParamLimits

0x83c1,	// (0x0007fe08) popup_call3_audio_in_window_g3

0x0003,

0xf5b9,	// (0x00087000) popup_call3_audio_in_window_g_ParamLimits

0xf5b9,	// (0x00087000) popup_call3_audio_in_window_g

0x83e9,	// (0x0007fe30) popup_call3_audio_in_window_t1_ParamLimits

0x83e9,	// (0x0007fe30) popup_call3_audio_in_window_t1

0x8411,	// (0x0007fe58) popup_call3_audio_in_window_t2_ParamLimits

0x8411,	// (0x0007fe58) popup_call3_audio_in_window_t2

0x8439,	// (0x0007fe80) popup_call3_audio_in_window_t3_ParamLimits

0x8439,	// (0x0007fe80) popup_call3_audio_in_window_t3

0x0002,

0xf5c2,	// (0x00087009) popup_call3_audio_in_window_t_ParamLimits

0xf5c2,	// (0x00087009) popup_call3_audio_in_window_t

0x0b90,	// (0x000785d7) bg_popup_call3_rect_pane

0xe07c,	// (0x00085ac3) bg_popup_call3_rect_pane_g1

0x0a5f,	// (0x000784a6) bg_popup_call3_rect_pane_g2

0xe084,	// (0x00085acb) bg_popup_call3_rect_pane_g3

0xe08c,	// (0x00085ad3) bg_popup_call3_rect_pane_g4

0xe094,	// (0x00085adb) bg_popup_call3_rect_pane_g5

0xe09c,	// (0x00085ae3) bg_popup_call3_rect_pane_g6

0xe0a4,	// (0x00085aeb) bg_popup_call3_rect_pane_g7

0xd36a,	// (0x00084db1) mup_visualizer_osc_pane

0xd36a,	// (0x00084db1) mup_visualizer_spec_pane

0x834f,	// (0x0007fd96) call3_video_qcif_pane_ParamLimits

0x834f,	// (0x0007fd96) call3_video_qcif_pane

0x8361,	// (0x0007fda8) call3_video_qcif_uncrop_pane_ParamLimits

0x8361,	// (0x0007fda8) call3_video_qcif_uncrop_pane

0x836f,	// (0x0007fdb6) call3_video_subqcif_pane_ParamLimits

0x836f,	// (0x0007fdb6) call3_video_subqcif_pane

0x8381,	// (0x0007fdc8) call3_video_subqcif_uncrop_pane_ParamLimits

0x8381,	// (0x0007fdc8) call3_video_subqcif_uncrop_pane

0x83d9,	// (0x0007fe20) popup_call3_audio_in_window_g4_ParamLimits

0x83d9,	// (0x0007fe20) popup_call3_audio_in_window_g4

0xd36a,	// (0x00084db1) mup_spec_half_pane

0xd36a,	// (0x00084db1) mup_spec_half_pane_cp

0xd36a,	// (0x00084db1) mup_osc_middle_pane

0x0bd0,	// (0x00078617) mup_visualizer_osc_pane_g1

0xe284,	// (0x00085ccb) mup_spec_bar_pane_ParamLimits

0xe284,	// (0x00085ccb) mup_spec_bar_pane

0x0bd0,	// (0x00078617) mup_spec_bar_pane_g1

0x0bd0,	// (0x00078617) mup_spec_bar_pane_g2

0x0001,

0xf3dd,	// (0x00086e24) mup_spec_bar_pane_g

0x541a,	// (0x0007ce61) aid_cale_week_size_cell_pane_ParamLimits

0x542f,	// (0x0007ce76) bg_cale_heading_pane_ParamLimits

0x0af2,	// (0x00078539) bg_cale_pane_cp01_ParamLimits

0x5451,	// (0x0007ce98) cale_week_corner_pane_ParamLimits

0x546b,	// (0x0007ceb2) cale_week_day_heading_pane_ParamLimits

0x548d,	// (0x0007ced4) cale_week_scroll_pane_g1_ParamLimits

0x54aa,	// (0x0007cef1) cale_week_scroll_pane_g2_ParamLimits

0x54bd,	// (0x0007cf04) cale_week_scroll_pane_g3_ParamLimits

0x54d0,	// (0x0007cf17) cale_week_scroll_pane_g4_ParamLimits

0x54e3,	// (0x0007cf2a) cale_week_scroll_pane_g5_ParamLimits

0x54f6,	// (0x0007cf3d) cale_week_scroll_pane_g6_ParamLimits

0x5509,	// (0x0007cf50) cale_week_scroll_pane_g7_ParamLimits

0x551e,	// (0x0007cf65) cale_week_scroll_pane_g8_ParamLimits

0x5533,	// (0x0007cf7a) cale_week_scroll_pane_g9_ParamLimits

0x5546,	// (0x0007cf8d) cale_week_scroll_pane_g10_ParamLimits

0x5559,	// (0x0007cfa0) cale_week_scroll_pane_g11_ParamLimits

0x556c,	// (0x0007cfb3) cale_week_scroll_pane_g12_ParamLimits

0x5583,	// (0x0007cfca) cale_week_scroll_pane_g13_ParamLimits

0x559e,	// (0x0007cfe5) cale_week_scroll_pane_g14_ParamLimits

0x55b9,	// (0x0007d000) cale_week_scroll_pane_g15_ParamLimits

0xf16b,	// (0x00086bb2) cale_week_scroll_pane_g_ParamLimits

0x55e9,	// (0x0007d030) cale_week_time_pane_ParamLimits

0x55fe,	// (0x0007d045) grid_cale_week_pane_ParamLimits

0x0b0f,	// (0x00078556) listscroll_cale_week_pane_t1

0x0b21,	// (0x00078568) scroll_pane_cp08_ParamLimits

0x60e7,	// (0x0007db2e) cale_month_corner_pane_ParamLimits

0x0eba,	// (0x00078901) cale_month_pane_t1

0x65b5,	// (0x0007dffc) cale_month_week_pane_ParamLimits

0x1b77,	// (0x000795be) popup_call_status_window_g1_ParamLimits

0x6d71,	// (0x0007e7b8) popup_call_status_window_g2_ParamLimits

0x6d7d,	// (0x0007e7c4) popup_call_status_window_g3_ParamLimits

0xf2ea,	// (0x00086d31) popup_call_status_window_g_ParamLimits

0x12a4,	// (0x00078ceb) aid_call2_pane

0x7327,	// (0x0007ed6e) msg_header_pane_g1

0x746f,	// (0x0007eeb6) postcard_address2_pane_ParamLimits

0x746f,	// (0x0007eeb6) postcard_address2_pane

0x747b,	// (0x0007eec2) postcard_message2_pane_ParamLimits

0x747b,	// (0x0007eec2) postcard_message2_pane

0x82df,	// (0x0007fd26) message2_row_pane_ParamLimits

0x82df,	// (0x0007fd26) message2_row_pane

0x82fa,	// (0x0007fd41) address2_row_pane_ParamLimits

0x82fa,	// (0x0007fd41) address2_row_pane

0xe251,	// (0x00085c98) postcard_message2_row_pane_g1

0xe259,	// (0x00085ca0) postcard_message2_row_pane_t1

0xe251,	// (0x00085c98) address2_row_pane_g1

0xe259,	// (0x00085ca0) address2_row_pane_t1

0x5883,	// (0x0007d2ca) aid_size_cell_vorec

0xd787,	// (0x000851ce) main_rss_pane

0xe267,	// (0x00085cae) rss_list_single_pane_ParamLimits

0xe267,	// (0x00085cae) rss_list_single_pane

0xe275,	// (0x00085cbc) rss_list_single_pane_t1

0xe275,	// (0x00085cbc) rss_list_single_pane_t2

0x0001,

0xf5ad,	// (0x00086ff4) rss_list_single_pane_t

0xd787,	// (0x000851ce) main_camera2_pane

0xd787,	// (0x000851ce) main_video2_pane

0x4f62,	// (0x0007c9a9) cams_zoom_pane_cp2_ParamLimits

0x4f62,	// (0x0007c9a9) cams_zoom_pane_cp2

0x4f62,	// (0x0007c9a9) image2_vga_pane_ParamLimits

0x4f62,	// (0x0007c9a9) image2_vga_pane

0x133f,	// (0x00078d86) main_camera2_pane_g1_ParamLimits

0x133f,	// (0x00078d86) main_camera2_pane_g1

0x133f,	// (0x00078d86) main_camera2_pane_g2_ParamLimits

0x133f,	// (0x00078d86) main_camera2_pane_g2

0x133f,	// (0x00078d86) main_camera2_pane_g3_ParamLimits

0x133f,	// (0x00078d86) main_camera2_pane_g3

0x133f,	// (0x00078d86) main_camera2_pane_g4_ParamLimits

0x133f,	// (0x00078d86) main_camera2_pane_g4

0x133f,	// (0x00078d86) main_camera2_pane_g5_ParamLimits

0x133f,	// (0x00078d86) main_camera2_pane_g5

0x133f,	// (0x00078d86) main_camera2_pane_g6_ParamLimits

0x133f,	// (0x00078d86) main_camera2_pane_g6

0x133f,	// (0x00078d86) main_camera2_pane_g7_ParamLimits

0x133f,	// (0x00078d86) main_camera2_pane_g7

0x133f,	// (0x00078d86) main_camera2_pane_g8_ParamLimits

0x133f,	// (0x00078d86) main_camera2_pane_g8

0x0008,

0xf5c9,	// (0x00087010) main_camera2_pane_g_ParamLimits

0xf5c9,	// (0x00087010) main_camera2_pane_g

0x8468,	// (0x0007feaf) main_camera2_pane_t1_ParamLimits

0x8468,	// (0x0007feaf) main_camera2_pane_t1

0x8468,	// (0x0007feaf) main_camera2_pane_t2_ParamLimits

0x8468,	// (0x0007feaf) main_camera2_pane_t2

0x8468,	// (0x0007feaf) main_camera2_pane_t3_ParamLimits

0x8468,	// (0x0007feaf) main_camera2_pane_t3

0x8468,	// (0x0007feaf) main_camera2_pane_t4_ParamLimits

0x8468,	// (0x0007feaf) main_camera2_pane_t4

0x0006,

0xf5dc,	// (0x00087023) main_camera2_pane_t_ParamLimits

0xf5dc,	// (0x00087023) main_camera2_pane_t

0x8490,	// (0x0007fed7) cams_zoom_pane_cp4_ParamLimits

0x8490,	// (0x0007fed7) cams_zoom_pane_cp4

0x8116,	// (0x0007fb5d) image2_cif_pane_ParamLimits

0x8116,	// (0x0007fb5d) image2_cif_pane

0x4f62,	// (0x0007c9a9) image2_subqcif_pane_ParamLimits

0x4f62,	// (0x0007c9a9) image2_subqcif_pane

0x849e,	// (0x0007fee5) main_video2_pane_g1_ParamLimits

0x849e,	// (0x0007fee5) main_video2_pane_g1

0x849e,	// (0x0007fee5) main_video2_pane_g2_ParamLimits

0x849e,	// (0x0007fee5) main_video2_pane_g2

0x849e,	// (0x0007fee5) main_video2_pane_g3_ParamLimits

0x849e,	// (0x0007fee5) main_video2_pane_g3

0x849e,	// (0x0007fee5) main_video2_pane_g4_ParamLimits

0x849e,	// (0x0007fee5) main_video2_pane_g4

0x849e,	// (0x0007fee5) main_video2_pane_g5_ParamLimits

0x849e,	// (0x0007fee5) main_video2_pane_g5

0x849e,	// (0x0007fee5) main_video2_pane_g6_ParamLimits

0x849e,	// (0x0007fee5) main_video2_pane_g6

0x0005,

0xf5eb,	// (0x00087032) main_video2_pane_g_ParamLimits

0xf5eb,	// (0x00087032) main_video2_pane_g

0x84ac,	// (0x0007fef3) main_video2_pane_t1_ParamLimits

0x84ac,	// (0x0007fef3) main_video2_pane_t1

0x84ac,	// (0x0007fef3) main_video2_pane_t2_ParamLimits

0x84ac,	// (0x0007fef3) main_video2_pane_t2

0x84ac,	// (0x0007fef3) main_video2_pane_t3_ParamLimits

0x84ac,	// (0x0007fef3) main_video2_pane_t3

0x0002,

0xf5f8,	// (0x0008703f) main_video2_pane_t_ParamLimits

0xf5f8,	// (0x0008703f) main_video2_pane_t

0x7fe9,	// (0x0007fa30) call_muted_g2

0x0001,

0xf59f,	// (0x00086fe6) call_muted_g

0xd787,	// (0x000851ce) main_mup2_pane

0x08ec,	// (0x00078333) main_mup2_pane_g1_ParamLimits

0x08ec,	// (0x00078333) main_mup2_pane_g1

0x08ec,	// (0x00078333) main_mup2_pane_g2_ParamLimits

0x08ec,	// (0x00078333) main_mup2_pane_g2

0xe3c3,	// (0x00085e0a) main_mup_pane_g13_cp1

0x4f7c,	// (0x0007c9c3) mup_volume_pane_cp1

0x08ec,	// (0x00078333) main_mup2_pane_g4_ParamLimits

0x08ec,	// (0x00078333) main_mup2_pane_g4

0x08ec,	// (0x00078333) main_mup2_pane_g5_ParamLimits

0x08ec,	// (0x00078333) main_mup2_pane_g5

0x08ec,	// (0x00078333) main_mup2_pane_g6_ParamLimits

0x08ec,	// (0x00078333) main_mup2_pane_g6

0x08ec,	// (0x00078333) main_mup2_pane_g7_ParamLimits

0x08ec,	// (0x00078333) main_mup2_pane_g7

0x0006,

0xf5ff,	// (0x00087046) main_mup2_pane_g_ParamLimits

0xf5ff,	// (0x00087046) main_mup2_pane_g

0x08fa,	// (0x00078341) main_mup2_pane_t1_ParamLimits

0x08fa,	// (0x00078341) main_mup2_pane_t1

0x08fa,	// (0x00078341) main_mup2_pane_t2_ParamLimits

0x08fa,	// (0x00078341) main_mup2_pane_t2

0x08fa,	// (0x00078341) main_mup2_pane_t3_ParamLimits

0x08fa,	// (0x00078341) main_mup2_pane_t3

0x08fa,	// (0x00078341) main_mup2_pane_t4_ParamLimits

0x08fa,	// (0x00078341) main_mup2_pane_t4

0x08fa,	// (0x00078341) main_mup2_pane_t5_ParamLimits

0x08fa,	// (0x00078341) main_mup2_pane_t5

0x08fa,	// (0x00078341) main_mup2_pane_t6_ParamLimits

0x08fa,	// (0x00078341) main_mup2_pane_t6

0x0005,

0xf60e,	// (0x00087055) main_mup2_pane_t_ParamLimits

0xf60e,	// (0x00087055) main_mup2_pane_t

0x1c1d,	// (0x00079664) mup2_visualizer_pane_ParamLimits

0x1c1d,	// (0x00079664) mup2_visualizer_pane

0x1c1d,	// (0x00079664) mup_progress_pane_cp_ParamLimits

0x1c1d,	// (0x00079664) mup_progress_pane_cp

0x8573,	// (0x0007ffba) mup_volume_pane_cp_ParamLimits

0x8573,	// (0x0007ffba) mup_volume_pane_cp

0x08d0,	// (0x00078317) mup2_visualizer_pane_g1_ParamLimits

0x08d0,	// (0x00078317) mup2_visualizer_pane_g1

0x08de,	// (0x00078325) mup2_visualizer_pane_g2_ParamLimits

0x08de,	// (0x00078325) mup2_visualizer_pane_g2

0x08de,	// (0x00078325) mup2_visualizer_pane_g3_ParamLimits

0x08de,	// (0x00078325) mup2_visualizer_pane_g3

0x0002,

0xf0e4,	// (0x00086b2b) mup2_visualizer_pane_g_ParamLimits

0xf0e4,	// (0x00086b2b) mup2_visualizer_pane_g

0x1a13,	// (0x0007945a) aid_size_cell_fmradio

0x80ff,	// (0x0007fb46) aid_height_parent_landcape

0x0d18,	// (0x0007875f) wml_content_pane_cp

0x0d20,	// (0x00078767) wml_tabs_pane

0x0d29,	// (0x00078770) popup_wml_miniature_window

0x0d31,	// (0x00078778) scroll_pane_cp021

0x0d45,	// (0x0007878c) wml_content_pane_comp8

0xd787,	// (0x000851ce) bg_popup_sub_pane_cp05

0xe31b,	// (0x00085d62) popup_wml_miniature_window_g1

0xe323,	// (0x00085d6a) wml_miniature_view_pane

0x84c0,	// (0x0007ff07) aid_size_wml_view

0x84c8,	// (0x0007ff0f) wml_miniature_view_pane_g1

0x84d1,	// (0x0007ff18) wml_miniature_view_pane_g2

0x84da,	// (0x0007ff21) wml_miniature_view_pane_g3

0x84e2,	// (0x0007ff29) wml_miniature_view_pane_g4

0x84ea,	// (0x0007ff31) wml_miniature_view_pane_g5

0x84f2,	// (0x0007ff39) wml_miniature_view_pane_g6

0x84fa,	// (0x0007ff41) wml_miniature_view_pane_g7

0x8502,	// (0x0007ff49) wml_miniature_view_pane_g8

0x0007,

0xf61b,	// (0x00087062) wml_miniature_view_pane_g

0xe32b,	// (0x00085d72) background_graphic_ParamLimits

0xe32b,	// (0x00085d72) background_graphic

0xe337,	// (0x00085d7e) wml_tabs_2_pane

0xe340,	// (0x00085d87) wml_tabs_3_pane_ParamLimits

0xe340,	// (0x00085d87) wml_tabs_3_pane

0xe352,	// (0x00085d99) wml_tabs_4_pane_ParamLimits

0xe352,	// (0x00085d99) wml_tabs_4_pane

0xe368,	// (0x00085daf) wml_tabs_5_pane_ParamLimits

0xe368,	// (0x00085daf) wml_tabs_5_pane

0xe382,	// (0x00085dc9) wml_tabs_pane_g2_ParamLimits

0xe382,	// (0x00085dc9) wml_tabs_pane_g2

0xe397,	// (0x00085dde) wml_tabs_pane_g3_ParamLimits

0xe397,	// (0x00085dde) wml_tabs_pane_g3

0xe3ac,	// (0x00085df3) wml_tabs_2_active_pane_ParamLimits

0xe3ac,	// (0x00085df3) wml_tabs_2_active_pane

0xe3ac,	// (0x00085df3) wml_tabs_2_passive_pane_ParamLimits

0xe3ac,	// (0x00085df3) wml_tabs_2_passive_pane

0x850a,	// (0x0007ff51) wml_tabs_3_active_pane_cp_ParamLimits

0x850a,	// (0x0007ff51) wml_tabs_3_active_pane_cp

0x851b,	// (0x0007ff62) wml_tabs_3_passive_pane_ParamLimits

0x851b,	// (0x0007ff62) wml_tabs_3_passive_pane

0x852c,	// (0x0007ff73) wml_tabs_3_passive_pane_cp_ParamLimits

0x852c,	// (0x0007ff73) wml_tabs_3_passive_pane_cp

0x853d,	// (0x0007ff84) tabs_4_active_pane

0x8545,	// (0x0007ff8c) tabs_4_passive_pane

0x854d,	// (0x0007ff94) tabs_4_passive_pane_cp

0x8555,	// (0x0007ff9c) tabs_4_passive_pane_cp2

0x7ee5,	// (0x0007f92c) aid_height_text

0x1c1d,	// (0x00079664) mup_volume_cont_pane_ParamLimits

0x1c1d,	// (0x00079664) mup_volume_cont_pane

0xd36a,	// (0x00084db1) aid_size_cell_pinb

0xd36a,	// (0x00084db1) aid_size_list_pinb

0x1c1d,	// (0x00079664) mup2_volume_cont_pane_ParamLimits

0x1c1d,	// (0x00079664) mup2_volume_cont_pane

0x855d,	// (0x0007ffa4) mup2_volume_cont_pane_g1_ParamLimits

0x855d,	// (0x0007ffa4) mup2_volume_cont_pane_g1

0x4cc6,	// (0x0007c70d) aid_size_cell_touch_ParamLimits

0x4cc6,	// (0x0007c70d) aid_size_cell_touch

0x4f86,	// (0x0007c9cd) touch_pane_ParamLimits

0x4f86,	// (0x0007c9cd) touch_pane

0x4f7c,	// (0x0007c9c3) main_rss2_pane

0xe3cd,	// (0x00085e14) listscroll_rss2_pane

0xe3d6,	// (0x00085e1d) rss2_navigation_pane

0xe3de,	// (0x00085e25) list_rss2_pane

0x1424,	// (0x00078e6b) scroll_pane_cp22

0xe3e6,	// (0x00085e2d) rss2_navigation_pane_g1

0xe3ef,	// (0x00085e36) rss2_navigation_pane_g2

0xe3f7,	// (0x00085e3e) rss2_navigation_pane_g3

0x0002,

0xf62c,	// (0x00087073) rss2_navigation_pane_g

0xe3ff,	// (0x00085e46) rss2_navigation_pane_t1

0x8589,	// (0x0007ffd0) rss2_list_single_pane_ParamLimits

0x8589,	// (0x0007ffd0) rss2_list_single_pane

0xe40d,	// (0x00085e54) rss2_list_single_pane_t2

0xe41b,	// (0x00085e62) rss2_list_single_pane_t3_ParamLimits

0xe41b,	// (0x00085e62) rss2_list_single_pane_t3

0xe438,	// (0x00085e7f) rss2_list_single_pane_t4

0x6bbb,	// (0x0007e602) smil_status_pane_g1

0x8116,	// (0x0007fb5d) main_image2_pane_ParamLimits

0x8116,	// (0x0007fb5d) main_image2_pane

0x133f,	// (0x00078d86) main_camera2_pane_g9_ParamLimits

0x133f,	// (0x00078d86) main_camera2_pane_g9

0x8468,	// (0x0007feaf) main_camera2_pane_t5_ParamLimits

0x8468,	// (0x0007feaf) main_camera2_pane_t5

0x847c,	// (0x0007fec3) main_camera2_pane_t6_ParamLimits

0x847c,	// (0x0007fec3) main_camera2_pane_t6

0x85bd,	// (0x00080004) main_image2_pane_g1_ParamLimits

0x85bd,	// (0x00080004) main_image2_pane_g1

0x7642,	// (0x0007f089) smil2_video_pane_ParamLimits

0x7642,	// (0x0007f089) smil2_video_pane

0x4cfa,	// (0x0007c741) aid_zoom_text_primary_cp

0x4f17,	// (0x0007c95e) popup_preview_fixed_window

0x0c81,	// (0x000786c8) im_reading_pane_g1

0x845a,	// (0x0007fea1) cams2_bc_adjust_pane_cp_ParamLimits

0x845a,	// (0x0007fea1) cams2_bc_adjust_pane_cp

0x4f62,	// (0x0007c9a9) cams2_bc_adjust_pane_ParamLimits

0x4f62,	// (0x0007c9a9) cams2_bc_adjust_pane

0xe3c3,	// (0x00085e0a) cams2_bc_adjust_pane_g1

0x4f7c,	// (0x0007c9c3) cams2_slider_pane

0xe3c3,	// (0x00085e0a) cams2_slider_pane_g1

0xe3c3,	// (0x00085e0a) cams2_slider_pane_g2

0x0006,

0xf633,	// (0x0008707a) cams2_slider_pane_g

0x5057,	// (0x0007ca9e) calc_display_pane_ParamLimits

0x5075,	// (0x0007cabc) calc_paper_pane_ParamLimits

0x5091,	// (0x0007cad8) grid_calc_pane_ParamLimits

0x6ddb,	// (0x0007e822) popup_clock_digital_window_t1_ParamLimits

0x19b0,	// (0x000793f7) main_image_pane_t1

0x503d,	// (0x0007ca84) aid_size_cell_calc_ParamLimits

0x503d,	// (0x0007ca84) aid_size_cell_calc

0x8153,	// (0x0007fb9a) popup_blid_sat_info2_window_ParamLimits

0x8153,	// (0x0007fb9a) popup_blid_sat_info2_window

0xe446,	// (0x00085e8d) aid_size_cell_blid

0x1c1d,	// (0x00079664) bg_popup_window_pane_cp07

0xe463,	// (0x00085eaa) grid_popup_blid_pane

0xe46d,	// (0x00085eb4) heading_pane_cp05_ParamLimits

0xe46d,	// (0x00085eb4) heading_pane_cp05

0xe537,	// (0x00085f7e) cell_popup_blid_pane_ParamLimits

0xe537,	// (0x00085f7e) cell_popup_blid_pane

0xe55b,	// (0x00085fa2) cell_popup_blid_pane_g1

0xe563,	// (0x00085faa) cell_popup_blid_pane_t1

0x1c1d,	// (0x00079664) mup2_indicator_pane_ParamLimits

0x1c1d,	// (0x00079664) mup2_indicator_pane

0xd36a,	// (0x00084db1) mup2_visualizer_osc_pane

0xe305,	// (0x00085d4c) mup2_visualizer_spec_pane_ParamLimits

0xe305,	// (0x00085d4c) mup2_visualizer_spec_pane

0xd36a,	// (0x00084db1) mup2_spec_half_pane

0xd36a,	// (0x00084db1) mup2_spec_half_pane_cp

0xe571,	// (0x00085fb8) mup2_spec_bar_pane_ParamLimits

0xe571,	// (0x00085fb8) mup2_spec_bar_pane

0x0bd0,	// (0x00078617) mup2_spec_bar_pane_g1

0xe590,	// (0x00085fd7) mup2_spec_bar_pane_g2

0x0001,

0xf659,	// (0x000870a0) mup2_spec_bar_pane_g

0xd36a,	// (0x00084db1) mup2_osc_middle_pane

0x0bd0,	// (0x00078617) mup2_visualizer_osc_pane_g1

0xd394,	// (0x00084ddb) popup_number_entry_window_t1_ParamLimits

0xd3a7,	// (0x00084dee) popup_number_entry_window_t2_ParamLimits

0xd3b9,	// (0x00084e00) popup_number_entry_window_t3_ParamLimits

0x4fdd,	// (0x0007ca24) popup_number_entry_window_t5_ParamLimits

0x4fdd,	// (0x0007ca24) popup_number_entry_window_t5

0xf085,	// (0x00086acc) popup_number_entry_window_t_ParamLimits

0xd3cb,	// (0x00084e12) text_title_cp2_ParamLimits

0x7343,	// (0x0007ed8a) aid_hotspot_pointer_text2_pane

0x73d1,	// (0x0007ee18) main_viewer_pane_g9_ParamLimits

0x73d1,	// (0x0007ee18) main_viewer_pane_g9

0x0eba,	// (0x00078901) cale_month_pane_t1_ParamLimits

0x0f25,	// (0x0007896c) bg_cale_pane_ParamLimits

0x0f3d,	// (0x00078984) list_cale_pane_ParamLimits

0x0f4e,	// (0x00078995) listscroll_cale_day_pane_t1

0x0f60,	// (0x000789a7) scroll_pane_cp09_ParamLimits

0x708c,	// (0x0007ead3) main_mup_eq_pane_t1_ParamLimits

0x708c,	// (0x0007ead3) main_mup_eq_pane_t1

0x70a6,	// (0x0007eaed) main_mup_eq_pane_t2_ParamLimits

0x70a6,	// (0x0007eaed) main_mup_eq_pane_t2

0x70be,	// (0x0007eb05) main_mup_eq_pane_t3_ParamLimits

0x70be,	// (0x0007eb05) main_mup_eq_pane_t3

0x70d6,	// (0x0007eb1d) main_mup_eq_pane_t4_ParamLimits

0x70d6,	// (0x0007eb1d) main_mup_eq_pane_t4

0x70ee,	// (0x0007eb35) main_mup_eq_pane_t5_ParamLimits

0x70ee,	// (0x0007eb35) main_mup_eq_pane_t5

0x7106,	// (0x0007eb4d) main_mup_eq_pane_t6_ParamLimits

0x7106,	// (0x0007eb4d) main_mup_eq_pane_t6

0x711a,	// (0x0007eb61) main_mup_eq_pane_t7_ParamLimits

0x711a,	// (0x0007eb61) main_mup_eq_pane_t7

0x712e,	// (0x0007eb75) main_mup_eq_pane_t8_ParamLimits

0x712e,	// (0x0007eb75) main_mup_eq_pane_t8

0x7144,	// (0x0007eb8b) main_mup_eq_pane_t9_ParamLimits

0x7144,	// (0x0007eb8b) main_mup_eq_pane_t9

0x715c,	// (0x0007eba3) main_mup_eq_pane_t10_ParamLimits

0x715c,	// (0x0007eba3) main_mup_eq_pane_t10

0x0009,

0xf3e9,	// (0x00086e30) main_mup_eq_pane_t_ParamLimits

0xf3e9,	// (0x00086e30) main_mup_eq_pane_t

0x7219,	// (0x0007ec60) mup_equalizer_pane_cp5_ParamLimits

0x722f,	// (0x0007ec76) mup_equalizer_pane_cp6_ParamLimits

0x7247,	// (0x0007ec8e) mup_equalizer_pane_cp7_ParamLimits

0x4f7c,	// (0x0007c9c3) main_gallery_pane

0xe2a3,	// (0x00085cea) smil2_volume_pane

0xe2ab,	// (0x00085cf2) smil_status_volume_pane_g1_ParamLimits

0xe2be,	// (0x00085d05) smil_status_volume_pane_g2_ParamLimits

0x830d,	// (0x0007fd54) smil_status_volume_pane_g3_ParamLimits

0xf5b2,	// (0x00086ff9) smil_status_volume_pane_g_ParamLimits

0x1c1d,	// (0x00079664) bg_popup_window_pane_cp07_ParamLimits

0xe44e,	// (0x00085e95) blid_firmament_pane

0xd8d7,	// (0x0008531e) aid_size_cell_gallery_ParamLimits

0xd8d7,	// (0x0008531e) aid_size_cell_gallery

0xd8d7,	// (0x0008531e) grid_gallery_pane_ParamLimits

0xd8d7,	// (0x0008531e) grid_gallery_pane

0xe228,	// (0x00085c6f) cell_gallery_pane_ParamLimits

0xe228,	// (0x00085c6f) cell_gallery_pane

0x074a,	// (0x00078191) bg_cell_gallery_focus_pane_ParamLimits

0x074a,	// (0x00078191) bg_cell_gallery_focus_pane

0x08d0,	// (0x00078317) cell_gallery_pane_g1_ParamLimits

0x08d0,	// (0x00078317) cell_gallery_pane_g1

0x08d0,	// (0x00078317) cell_gallery_pane_g2_ParamLimits

0x08d0,	// (0x00078317) cell_gallery_pane_g2

0x08d0,	// (0x00078317) cell_gallery_pane_g3_ParamLimits

0x08d0,	// (0x00078317) cell_gallery_pane_g3

0x08de,	// (0x00078325) cell_gallery_pane_g4_ParamLimits

0x08de,	// (0x00078325) cell_gallery_pane_g4

0x0003,

0xf65e,	// (0x000870a5) cell_gallery_pane_g_ParamLimits

0xf65e,	// (0x000870a5) cell_gallery_pane_g

0xe59a,	// (0x00085fe1) bg_cell_gallery_focus_pane_g1

0xe5a2,	// (0x00085fe9) bg_cell_gallery_focus_pane_g2

0xe5aa,	// (0x00085ff1) bg_cell_gallery_focus_pane_g3

0xe5b2,	// (0x00085ff9) bg_cell_gallery_focus_pane_g4

0xe5ba,	// (0x00086001) bg_cell_gallery_focus_pane_g5

0xe5c2,	// (0x00086009) bg_cell_gallery_focus_pane_g6

0xe5ca,	// (0x00086011) bg_cell_gallery_focus_pane_g7

0xe5d2,	// (0x00086019) bg_cell_gallery_focus_pane_g8

0x0007,

0xf667,	// (0x000870ae) bg_cell_gallery_focus_pane_g

0xe5da,	// (0x00086021) aid_firma_cardinal

0xe5ee,	// (0x00086035) blid_firmament_pane_t1

0xe605,	// (0x0008604c) blid_firmament_pane_t2

0xe61c,	// (0x00086063) blid_firmament_pane_t3

0xe633,	// (0x0008607a) blid_firmament_pane_t4

0x0003,

0xf678,	// (0x000870bf) blid_firmament_pane_t

0xe64a,	// (0x00086091) blid_sat_info_pane

0x0bd0,	// (0x00078617) blid_sat_info_pane_g1

0x0bd0,	// (0x00078617) blid_sat_info_pane_g2

0x0001,

0xf3dd,	// (0x00086e24) blid_sat_info_pane_g

0xe65a,	// (0x000860a1) blid_sat_info_pane_t1

0xe668,	// (0x000860af) smil2_volume_content_pane

0xe671,	// (0x000860b8) smil2_volume_pane_g1

0xe679,	// (0x000860c0) smil2_volume_content_pane_g1

0xe682,	// (0x000860c9) smil2_volume_content_pane_g2

0xe68b,	// (0x000860d2) smil2_volume_content_pane_g3

0xe694,	// (0x000860db) smil2_volume_content_pane_g4

0xe69d,	// (0x000860e4) smil2_volume_content_pane_g5

0xe6a6,	// (0x000860ed) smil2_volume_content_pane_g6

0xe6af,	// (0x000860f6) smil2_volume_content_pane_g7

0xe6b8,	// (0x000860ff) smil2_volume_content_pane_g8

0xe6c1,	// (0x00086108) smil2_volume_content_pane_g9

0xe6ca,	// (0x00086111) smil2_volume_content_pane_g10

0x0009,

0xf681,	// (0x000870c8) smil2_volume_content_pane_g

0x567f,	// (0x0007d0c6) cale_week_day_heading_pane_t1_ParamLimits

0x569a,	// (0x0007d0e1) cale_week_day_heading_pane_t2_ParamLimits

0x56b5,	// (0x0007d0fc) cale_week_day_heading_pane_t3_ParamLimits

0x56d0,	// (0x0007d117) cale_week_day_heading_pane_t4_ParamLimits

0x56eb,	// (0x0007d132) cale_week_day_heading_pane_t5_ParamLimits

0x5706,	// (0x0007d14d) cale_week_day_heading_pane_t6_ParamLimits

0x5721,	// (0x0007d168) cale_week_day_heading_pane_t7_ParamLimits

0xf18c,	// (0x00086bd3) cale_week_day_heading_pane_t_ParamLimits

0x0b3e,	// (0x00078585) bg_cale_side_pane_ParamLimits

0x573c,	// (0x0007d183) cale_week_time_pane_t1_ParamLimits

0x5756,	// (0x0007d19d) cale_week_time_pane_t2_ParamLimits

0x5770,	// (0x0007d1b7) cale_week_time_pane_t3_ParamLimits

0x578a,	// (0x0007d1d1) cale_week_time_pane_t4_ParamLimits

0x57a4,	// (0x0007d1eb) cale_week_time_pane_t5_ParamLimits

0x57be,	// (0x0007d205) cale_week_time_pane_t6_ParamLimits

0x57de,	// (0x0007d225) cale_week_time_pane_t7_ParamLimits

0x5800,	// (0x0007d247) cale_week_time_pane_t8_ParamLimits

0xf19b,	// (0x00086be2) cale_week_time_pane_t_ParamLimits

0x5824,	// (0x0007d26b) cell_cale_week_pane_g2_ParamLimits

0x0b3e,	// (0x00078585) bg_cale_side_pane_cp01_ParamLimits

0x69aa,	// (0x0007e3f1) cale_month_week_pane_t1_ParamLimits

0x69c3,	// (0x0007e40a) cale_month_week_pane_t2_ParamLimits

0x69dc,	// (0x0007e423) cale_month_week_pane_t3_ParamLimits

0x69f5,	// (0x0007e43c) cale_month_week_pane_t4_ParamLimits

0x6a10,	// (0x0007e457) cale_month_week_pane_t5_ParamLimits

0x6a31,	// (0x0007e478) cale_month_week_pane_t6_ParamLimits

0xf269,	// (0x00086cb0) cale_month_week_pane_t_ParamLimits

0x6b78,	// (0x0007e5bf) cell_cale_month_pane_g1_ParamLimits

0x4f7c,	// (0x0007c9c3) main_cale_event_viewer_pane

0xd36a,	// (0x00084db1) listscroll_cale_event_viewer_pane

0xe6d3,	// (0x0008611a) list_cale_ev_pane

0xe6db,	// (0x00086122) scroll_pane_cp023

0xe6e7,	// (0x0008612e) field_cale_ev_pane_ParamLimits

0xe6e7,	// (0x0008612e) field_cale_ev_pane

0xe705,	// (0x0008614c) field_cale_ev_content_pane_ParamLimits

0xe705,	// (0x0008614c) field_cale_ev_content_pane

0xe711,	// (0x00086158) field_cale_ev_pane_g1_ParamLimits

0xe711,	// (0x00086158) field_cale_ev_pane_g1

0xe71d,	// (0x00086164) field_cale_ev_pane_g2_ParamLimits

0xe71d,	// (0x00086164) field_cale_ev_pane_g2

0xe735,	// (0x0008617c) field_cale_ev_pane_g3_ParamLimits

0xe735,	// (0x0008617c) field_cale_ev_pane_g3

0x0002,

0xf696,	// (0x000870dd) field_cale_ev_pane_g_ParamLimits

0xf696,	// (0x000870dd) field_cale_ev_pane_g

0xe74d,	// (0x00086194) field_cale_ev_pane_t1_ParamLimits

0xe74d,	// (0x00086194) field_cale_ev_pane_t1

0xe764,	// (0x000861ab) field_cale_ev_content_pane_t1_ParamLimits

0xe764,	// (0x000861ab) field_cale_ev_content_pane_t1

0x17d2,	// (0x00079219) bg_button_pane_cp01

0x540a,	// (0x0007ce51) listscroll_cale_week_pane_ParamLimits

0x0ae9,	// (0x00078530) popup_toolbar_window_cp01

0x0b0f,	// (0x00078556) listscroll_cale_week_pane_t1_ParamLimits

0x540a,	// (0x0007ce51) listscroll_cale_day_pane_ParamLimits

0x0ae9,	// (0x00078530) popup_toolbar_window_cp02

0x0f4e,	// (0x00078995) listscroll_cale_day_pane_t1_ParamLimits

0x540a,	// (0x0007ce51) main_cale_month_pane_ParamLimits

0x8256,	// (0x0007fc9d) popup_toolbar_window_cp03_ParamLimits

0x8256,	// (0x0007fc9d) popup_toolbar_window_cp03

0x7558,	// (0x0007ef9f) main_image_pane_g2_ParamLimits

0x7558,	// (0x0007ef9f) main_image_pane_g2

0x7564,	// (0x0007efab) main_image_pane_g3_ParamLimits

0x7564,	// (0x0007efab) main_image_pane_g3

0x0002,

0xf47b,	// (0x00086ec2) main_image_pane_g_ParamLimits

0xf47b,	// (0x00086ec2) main_image_pane_g

0x19b0,	// (0x000793f7) main_image_pane_t1_ParamLimits

0x7570,	// (0x0007efb7) main_image_pane_t2_ParamLimits

0x7570,	// (0x0007efb7) main_image_pane_t2

0x7582,	// (0x0007efc9) main_image_pane_t3_ParamLimits

0x7582,	// (0x0007efc9) main_image_pane_t3

0x7594,	// (0x0007efdb) main_image_pane_t4_ParamLimits

0x7594,	// (0x0007efdb) main_image_pane_t4

0x0003,

0xf482,	// (0x00086ec9) main_image_pane_t_ParamLimits

0xf482,	// (0x00086ec9) main_image_pane_t

0x75a6,	// (0x0007efed) popup_image_details_window_cp01

0x75b0,	// (0x0007eff7) popup_toobar_trans_pane_cp01_ParamLimits

0x75b0,	// (0x0007eff7) popup_toobar_trans_pane_cp01

0x81a6,	// (0x0007fbed) popup_image_details_window_ParamLimits

0x81a6,	// (0x0007fbed) popup_image_details_window

0x81b4,	// (0x0007fbfb) popup_image_focus_window

0x4f62,	// (0x0007c9a9) camera2_autofocus_pane_ParamLimits

0x4f62,	// (0x0007c9a9) camera2_autofocus_pane

0xd36a,	// (0x00084db1) bg_popup_sub_pane_cp06

0xe782,	// (0x000861c9) popup_image_focus_window_g1

0xe78a,	// (0x000861d1) popup_image_focus_window_g2

0xe792,	// (0x000861d9) popup_image_focus_window_g3

0xe79a,	// (0x000861e1) popup_image_focus_window_g4

0x0003,

0xf69d,	// (0x000870e4) popup_image_focus_window_g

0xe7a2,	// (0x000861e9) popup_image_focus_window_t1

0xe7b0,	// (0x000861f7) popup_image_focus_window_t2

0xe7c0,	// (0x00086207) popup_image_focus_window_t3

0x0002,

0xf6a6,	// (0x000870ed) popup_image_focus_window_t

0x08d0,	// (0x00078317) camera2_autofocus_pane_g1

0x074a,	// (0x00078191) bg_tb_trans_pane_cp01

0xe7ce,	// (0x00086215) popup_image_details_window_g1

0xe7e1,	// (0x00086228) popup_image_details_window_g2

0x0002,

0xf6b8,	// (0x000870ff) popup_image_details_window_g

0xe80a,	// (0x00086251) popup_image_details_window_t1

0xe81c,	// (0x00086263) popup_image_details_window_t2

0xe835,	// (0x0008627c) popup_image_details_window_t3

0xe849,	// (0x00086290) popup_image_details_window_t4

0xe864,	// (0x000862ab) popup_image_details_window_t5

0x0004,

0xf6bf,	// (0x00087106) popup_image_details_window_t

0x0936,	// (0x0007837d) bg_calc_paper_pane_ParamLimits

0x4f7c,	// (0x0007c9c3) grid_highlight_pane_cp013

0x518e,	// (0x0007cbd5) list_calc_pane_ParamLimits

0x51a0,	// (0x0007cbe7) scroll_pane_cp024

0x0964,	// (0x000783ab) bg_calc_display_pane_ParamLimits

0x51a8,	// (0x0007cbef) calc_display_pane_t1_ParamLimits

0x51bd,	// (0x0007cc04) calc_display_pane_t2_ParamLimits

0x51d2,	// (0x0007cc19) calc_display_pane_t3_ParamLimits

0xf10c,	// (0x00086b53) calc_display_pane_t_ParamLimits

0x52ac,	// (0x0007ccf3) cell_calc_pane_g2

0x0001,

0xf129,	// (0x00086b70) cell_calc_pane_g

0x52b5,	// (0x0007ccfc) cell_calc_pane_t1

0x09dd,	// (0x00078424) grid_highlight_pane_cp02_ParamLimits

0x09f3,	// (0x0007843a) toolbar_button_pane_cp01_ParamLimits

0x09f3,	// (0x0007843a) toolbar_button_pane_cp01

0x19f5,	// (0x0007943c) temp_image_control_pane_ParamLimits

0x19f5,	// (0x0007943c) temp_image_control_pane

0x8116,	// (0x0007fb5d) main_mp3_pane

0xe87e,	// (0x000862c5) temp_image_control_pane_g1_ParamLimits

0xe87e,	// (0x000862c5) temp_image_control_pane_g1

0xe88c,	// (0x000862d3) temp_image_control_pane_g2_ParamLimits

0xe88c,	// (0x000862d3) temp_image_control_pane_g2

0xe89e,	// (0x000862e5) temp_image_control_pane_g3_ParamLimits

0xe89e,	// (0x000862e5) temp_image_control_pane_g3

0x85c9,	// (0x00080010) temp_image_control_pane_g4_ParamLimits

0x85c9,	// (0x00080010) temp_image_control_pane_g4

0x0003,

0xf6ca,	// (0x00087111) temp_image_control_pane_g_ParamLimits

0xf6ca,	// (0x00087111) temp_image_control_pane_g

0xe87e,	// (0x000862c5) main_mp3_pane_g1

0x85da,	// (0x00080021) main_mp3_pane_g2

0x0007,

0xf6d3,	// (0x0008711a) main_mp3_pane_g

0xe8d3,	// (0x0008631a) main_mp3_pane_t1

0x08de,	// (0x00078325) main_camera_pane_g8_ParamLimits

0x08de,	// (0x00078325) main_camera_pane_g8

0x59cb,	// (0x0007d412) main_video_pane_g7_ParamLimits

0x59cb,	// (0x0007d412) main_video_pane_g7

0x8468,	// (0x0007feaf) main_camera2_pane_t7_ParamLimits

0x8468,	// (0x0007feaf) main_camera2_pane_t7

0x0cd8,	// (0x0007871f) scroll_pane_cp025_ParamLimits

0x0cd8,	// (0x0007871f) scroll_pane_cp025

0x0cec,	// (0x00078733) scroll_pane_cp026_ParamLimits

0x0cec,	// (0x00078733) scroll_pane_cp026

0x0cfb,	// (0x00078742) wml_content_pane_ParamLimits

0x4f7c,	// (0x0007c9c3) main_touch_calib_pane

0x867e,	// (0x000800c5) main_touch_calib_pane_g1

0x868a,	// (0x000800d1) main_touch_calib_pane_g2

0x8696,	// (0x000800dd) main_touch_calib_pane_g3

0x86a2,	// (0x000800e9) main_touch_calib_pane_g4

0x0003,

0xf6f1,	// (0x00087138) main_touch_calib_pane_g

0x86ae,	// (0x000800f5) main_touch_calib_pane_t1

0x86c7,	// (0x0008010e) main_touch_calib_pane_t2

0x0004,

0xf6fa,	// (0x00087141) main_touch_calib_pane_t

0x14f3,	// (0x00078f3a) mup_progress_pane_cp02

0x1528,	// (0x00078f6f) navi_pane_g1

0x15e3,	// (0x0007902a) navi_pane_mp_t3

0x8116,	// (0x0007fb5d) main_mp3_pane_ParamLimits

0x8293,	// (0x0007fcda) navi_pane_ParamLimits

0xe87e,	// (0x000862c5) main_mp3_pane_g1_ParamLimits

0x85da,	// (0x00080021) main_mp3_pane_g2_ParamLimits

0x85e6,	// (0x0008002d) main_mp3_pane_g3_ParamLimits

0x85e6,	// (0x0008002d) main_mp3_pane_g3

0x85f2,	// (0x00080039) main_mp3_pane_g4_ParamLimits

0x85f2,	// (0x00080039) main_mp3_pane_g4

0x08d0,	// (0x00078317) main_mp3_pane_g5_ParamLimits

0x08d0,	// (0x00078317) main_mp3_pane_g5

0xe8ae,	// (0x000862f5) main_mp3_pane_g6_ParamLimits

0xe8ae,	// (0x000862f5) main_mp3_pane_g6

0xe8bb,	// (0x00086302) main_mp3_pane_g7_ParamLimits

0xe8bb,	// (0x00086302) main_mp3_pane_g7

0xe8c7,	// (0x0008630e) main_mp3_pane_g8_ParamLimits

0xe8c7,	// (0x0008630e) main_mp3_pane_g8

0xf6d3,	// (0x0008711a) main_mp3_pane_g_ParamLimits

0x85fe,	// (0x00080045) main_mp3_pane_t2

0x860e,	// (0x00080055) main_mp3_pane_t3

0xe8e1,	// (0x00086328) main_mp3_pane_t4

0xe8ef,	// (0x00086336) main_mp3_pane_t5

0x0005,

0xf6e4,	// (0x0008712b) main_mp3_pane_t

0xe8fd,	// (0x00086344) mup_progress_pane_cp01

0x4cfa,	// (0x0007c741) aid_zoom_text_secondary2

0xe6d3,	// (0x0008611a) list_cale_ev2_pane

0xe6db,	// (0x00086122) scroll_pane_cp023_ParamLimits

0x8722,	// (0x00080169) field_cale_ev2_pane_ParamLimits

0x8722,	// (0x00080169) field_cale_ev2_pane

0x1c41,	// (0x00079688) field_cale_ev2_pane_g1_ParamLimits

0x1c41,	// (0x00079688) field_cale_ev2_pane_g1

0x1c4d,	// (0x00079694) field_cale_ev2_pane_g2_ParamLimits

0x1c4d,	// (0x00079694) field_cale_ev2_pane_g2

0x1c65,	// (0x000796ac) field_cale_ev2_pane_g3_ParamLimits

0x1c65,	// (0x000796ac) field_cale_ev2_pane_g3

0x0003,

0xf705,	// (0x0008714c) field_cale_ev2_pane_g_ParamLimits

0xf705,	// (0x0008714c) field_cale_ev2_pane_g

0x1c89,	// (0x000796d0) field_cale_ev2_pane_t1_ParamLimits

0x1c89,	// (0x000796d0) field_cale_ev2_pane_t1

0x1ca0,	// (0x000796e7) field_cale_ev2_pane_t2_ParamLimits

0x1ca0,	// (0x000796e7) field_cale_ev2_pane_t2

0x0001,

0xf70e,	// (0x00087155) field_cale_ev2_pane_t_ParamLimits

0xf70e,	// (0x00087155) field_cale_ev2_pane_t

0x7439,	// (0x0007ee80) main_postcard_pane_g5_ParamLimits

0x7439,	// (0x0007ee80) main_postcard_pane_g5

0x7447,	// (0x0007ee8e) main_postcard_pane_g6_ParamLimits

0x7447,	// (0x0007ee8e) main_postcard_pane_g6

0xd8d7,	// (0x0008531e) camera2_autofocus_pane_cp_ParamLimits

0xd8d7,	// (0x0008531e) camera2_autofocus_pane_cp

0x8116,	// (0x0007fb5d) main_mup3_pane

0x878b,	// (0x000801d2) main_mup3_pane_g1_ParamLimits

0x878b,	// (0x000801d2) main_mup3_pane_g1

0x87ac,	// (0x000801f3) main_mup3_pane_g2_ParamLimits

0x87ac,	// (0x000801f3) main_mup3_pane_g2

0x8826,	// (0x0008026d) main_mup3_pane_g3_ParamLimits

0x8826,	// (0x0008026d) main_mup3_pane_g3

0x8869,	// (0x000802b0) main_mup3_pane_g4_ParamLimits

0x8869,	// (0x000802b0) main_mup3_pane_g4

0x88ac,	// (0x000802f3) main_mup3_pane_g5_ParamLimits

0x88ac,	// (0x000802f3) main_mup3_pane_g5

0x88ef,	// (0x00080336) main_mup3_pane_g6_ParamLimits

0x88ef,	// (0x00080336) main_mup3_pane_g6

0x08de,	// (0x00078325) main_mup3_pane_g7_ParamLimits

0x08de,	// (0x00078325) main_mup3_pane_g7

0x0007,

0xf71e,	// (0x00087165) main_mup3_pane_g_ParamLimits

0xf71e,	// (0x00087165) main_mup3_pane_g

0x8965,	// (0x000803ac) main_mup3_pane_t1_ParamLimits

0x8965,	// (0x000803ac) main_mup3_pane_t1

0x89d4,	// (0x0008041b) main_mup3_pane_t2_ParamLimits

0x89d4,	// (0x0008041b) main_mup3_pane_t2

0x8a9d,	// (0x000804e4) main_mup3_pane_t4_ParamLimits

0x8a9d,	// (0x000804e4) main_mup3_pane_t4

0x8aeb,	// (0x00080532) main_mup3_pane_t5_ParamLimits

0x8aeb,	// (0x00080532) main_mup3_pane_t5

0x8b9b,	// (0x000805e2) main_mup3_pane_t6_ParamLimits

0x8b9b,	// (0x000805e2) main_mup3_pane_t6

0x0005,

0xf72f,	// (0x00087176) main_mup3_pane_t_ParamLimits

0xf72f,	// (0x00087176) main_mup3_pane_t

0x8c47,	// (0x0008068e) mup3_progress_pane_ParamLimits

0x8c47,	// (0x0008068e) mup3_progress_pane

0x8cbb,	// (0x00080702) popup_mup3_control_window_ParamLimits

0x8cbb,	// (0x00080702) popup_mup3_control_window

0xe905,	// (0x0008634c) popup_mup3_text_window

0x8cd4,	// (0x0008071b) mup3_progress_pane_t1

0x8cf3,	// (0x0008073a) mup3_progress_pane_t2

0xe90d,	// (0x00086354) mup3_progress_pane_t3

0x0002,

0xf73c,	// (0x00087183) mup3_progress_pane_t

0xe92a,	// (0x00086371) mup_progress_pane_cp03

0xd36a,	// (0x00084db1) bg_tb_trans_pane_cp04

0x8d12,	// (0x00080759) mup3_volume_pane

0x8d1a,	// (0x00080761) popup_mup3_control_window_g1

0x8d23,	// (0x0008076a) mup3_volume_pane_g1

0x8d2c,	// (0x00080773) mup3_volume_pane_g2

0x8d35,	// (0x0008077c) mup3_volume_pane_g3

0x0002,

0xf743,	// (0x0008718a) mup3_volume_pane_g

0xd36a,	// (0x00084db1) bg_tb_trans_pane_cp03

0xe93a,	// (0x00086381) popup_mup3_text_window_g1

0xe942,	// (0x00086389) popup_mup3_text_window_t1

0x09be,	// (0x00078405) list_calc_item_pane_g1_ParamLimits

0xe3ba,	// (0x00085e01) mup_volume_pane_cp_g1

0x86e0,	// (0x00080127) main_touch_calib_pane_t3

0x86f6,	// (0x0008013d) main_touch_calib_pane_t4

0x870c,	// (0x00080153) main_touch_calib_pane_t5

0x4cb2,	// (0x0007c6f9) aid_cell_size_toolbar2

0x4cba,	// (0x0007c701) aid_popup3_width_pane

0x4bc2,	// (0x0007c609) aid_zoom_text_msg_primary

0x58cd,	// (0x0007d314) vorec_t7

0x0982,	// (0x000783c9) bg_calc_paper_pane_g1_ParamLimits

0x099a,	// (0x000783e1) bg_calc_paper_pane_g2_ParamLimits

0x098e,	// (0x000783d5) bg_calc_paper_pane_g3_ParamLimits

0x09b2,	// (0x000783f9) bg_calc_paper_pane_g4_ParamLimits

0x09a6,	// (0x000783ed) bg_calc_paper_pane_g5_ParamLimits

0x5211,	// (0x0007cc58) bg_calc_paper_pane_g6_ParamLimits

0x5222,	// (0x0007cc69) bg_calc_paper_pane_g7_ParamLimits

0x5233,	// (0x0007cc7a) bg_calc_paper_pane_g8_ParamLimits

0xf113,	// (0x00086b5a) bg_calc_paper_pane_g_ParamLimits

0x5244,	// (0x0007cc8b) calc_bg_paper_pane_g9_ParamLimits

0xd8d7,	// (0x0008531e) image_qvga_pane_ParamLimits

0xd8d7,	// (0x0008531e) image_qvga_pane

0x0863,	// (0x000782aa) bg_popup_sub_pane_cp04_ParamLimits

0x192c,	// (0x00079373) popup_mup_playback_window_g1_ParamLimits

0x1938,	// (0x0007937f) popup_mup_playback_window_t1_ParamLimits

0x194d,	// (0x00079394) popup_mup_playback_window_t2_ParamLimits

0xf476,	// (0x00086ebd) popup_mup_playback_window_t_ParamLimits

0x08d0,	// (0x00078317) main_mup2_pane_g3_ParamLimits

0x08d0,	// (0x00078317) main_mup2_pane_g3

0x5bb2,	// (0x0007d5f9) popup_toolbar_window_cp04

0x7a40,	// (0x0007f487) popup_call2_audio_second_window_g3_ParamLimits

0x7a40,	// (0x0007f487) popup_call2_audio_second_window_g3

0xd8e5,	// (0x0008532c) popup_call2_audio_first_window_g4_ParamLimits

0xd8e5,	// (0x0008532c) popup_call2_audio_first_window_g4

0xdf0c,	// (0x00085953) popup_call2_audio_in_window_g4_ParamLimits

0xdf0c,	// (0x00085953) popup_call2_audio_in_window_g4

0x754b,	// (0x0007ef92) aid_area_sk_bg_cut_ParamLimits

0x754b,	// (0x0007ef92) aid_area_sk_bg_cut

0x1962,	// (0x000793a9) aid_area_sk_bg_cut_2_ParamLimits

0x1962,	// (0x000793a9) aid_area_sk_bg_cut_2

0xd36a,	// (0x00084db1) aid_placing_details_win

0xd36a,	// (0x00084db1) aid_placing_details_win_2

0x08d0,	// (0x00078317) camera2_autofocus_pane_g1_ParamLimits

0x4f08,	// (0x0007c94f) popup_fixed_preview_cale_window_ParamLimits

0x4f08,	// (0x0007c94f) popup_fixed_preview_cale_window

0x167c,	// (0x000790c3) navi_slider_pane_g3

0x1673,	// (0x000790ba) navi_slider_pane_g4

0x166a,	// (0x000790b1) navi_slider_pane_g5

0x167c,	// (0x000790c3) navi_slider_pane_g6

0x7060,	// (0x0007eaa7) navi_slider_pane_g7

0x1797,	// (0x000791de) mup_scale_pane_g3

0x17a0,	// (0x000791e7) mup_scale_pane_g4

0x17a9,	// (0x000791f0) mup_scale_pane_g5

0x725f,	// (0x0007eca6) mup_scale_pane_g6

0x7268,	// (0x0007ecaf) mup_scale_pane_g7

0xe3c3,	// (0x00085e0a) cams2_slider_pane_g3

0xe3c3,	// (0x00085e0a) cams2_slider_pane_g4

0xe3c3,	// (0x00085e0a) cams2_slider_pane_g5

0xe3c3,	// (0x00085e0a) cams2_slider_pane_g6

0xe3c3,	// (0x00085e0a) cams2_slider_pane_g7

0x0bd0,	// (0x00078617) camera2_autofocus_pane_cp_g1

0xe21c,	// (0x00085c63) bg_popup_preview_window_pane_cp02_ParamLimits

0xe21c,	// (0x00085c63) bg_popup_preview_window_pane_cp02

0xe950,	// (0x00086397) list_fp_cale_pane_ParamLimits

0xe950,	// (0x00086397) list_fp_cale_pane

0xe95c,	// (0x000863a3) popup_fixed_preview_cale_window_t1_ParamLimits

0xe95c,	// (0x000863a3) popup_fixed_preview_cale_window_t1

0x8d3e,	// (0x00080785) popup_fixed_preview_cale_window_t2_ParamLimits

0x8d3e,	// (0x00080785) popup_fixed_preview_cale_window_t2

0x8d53,	// (0x0008079a) popup_fixed_preview_cale_window_t3_ParamLimits

0x8d53,	// (0x0008079a) popup_fixed_preview_cale_window_t3

0x0002,

0xf74a,	// (0x00087191) popup_fixed_preview_cale_window_t_ParamLimits

0xf74a,	// (0x00087191) popup_fixed_preview_cale_window_t

0x8d68,	// (0x000807af) list_single_fp_cale_pane_ParamLimits

0x8d68,	// (0x000807af) list_single_fp_cale_pane

0xe97a,	// (0x000863c1) list_single_fp_cale_pane_g1_ParamLimits

0xe97a,	// (0x000863c1) list_single_fp_cale_pane_g1

0xe986,	// (0x000863cd) list_single_fp_cale_pane_g2_ParamLimits

0xe986,	// (0x000863cd) list_single_fp_cale_pane_g2

0x0002,

0xf751,	// (0x00087198) list_single_fp_cale_pane_g_ParamLimits

0xf751,	// (0x00087198) list_single_fp_cale_pane_g

0xe99f,	// (0x000863e6) list_single_fp_cale_pane_t1_ParamLimits

0xe99f,	// (0x000863e6) list_single_fp_cale_pane_t1

0xe9b1,	// (0x000863f8) list_single_fp_cale_pane_t2_ParamLimits

0xe9b1,	// (0x000863f8) list_single_fp_cale_pane_t2

0x0001,

0xf758,	// (0x0008719f) list_single_fp_cale_pane_t_ParamLimits

0xf758,	// (0x0008719f) list_single_fp_cale_pane_t

0x0000,

0x0000,

0x0000,

0x0000,

0x4f7c,	// (0x0007c9c3) main_dialer_pane

0xd36a,	// (0x00084db1) aid_cell_size_keypad

0xd36a,	// (0x00084db1) dialer_ne_pane

0xd36a,	// (0x00084db1) grid_dialer_command_1_pane

0xd36a,	// (0x00084db1) grid_dialer_command_2_pane

0xd36a,	// (0x00084db1) grid_dialer_keypad_pane

0x1c1d,	// (0x00079664) bg_popup_call_pane_cp06_ParamLimits

0x1c1d,	// (0x00079664) bg_popup_call_pane_cp06

0x1c1d,	// (0x00079664) dialer_ne_clear_pane_ParamLimits

0x1c1d,	// (0x00079664) dialer_ne_clear_pane

0x0bd0,	// (0x00078617) dialer_ne_pane_g1

0x1721,	// (0x00079168) dialer_ne_pane_t1_ParamLimits

0x1721,	// (0x00079168) dialer_ne_pane_t1

0xe9e4,	// (0x0008642b) dialer_ne_pane_t2_ParamLimits

0xe9e4,	// (0x0008642b) dialer_ne_pane_t2

0x8d7b,	// (0x000807c2) dialer_ne_pane_t3_ParamLimits

0x8d7b,	// (0x000807c2) dialer_ne_pane_t3

0x0002,

0xf75d,	// (0x000871a4) dialer_ne_pane_t_ParamLimits

0xf75d,	// (0x000871a4) dialer_ne_pane_t

0x8d7b,	// (0x000807c2) dialer_ne_pane_t3_copy1_ParamLimits

0x8d7b,	// (0x000807c2) dialer_ne_pane_t3_copy1

0xea01,	// (0x00086448) cell_dialer_keypad_pane_ParamLimits

0xea01,	// (0x00086448) cell_dialer_keypad_pane

0x074a,	// (0x00078191) cell_dialer_command_1_pane_ParamLimits

0x074a,	// (0x00078191) cell_dialer_command_1_pane

0xea18,	// (0x0008645f) cell_dialer_command_2_pane_ParamLimits

0xea18,	// (0x0008645f) cell_dialer_command_2_pane

0x074a,	// (0x00078191) bg_button_pane_cp02_ParamLimits

0x074a,	// (0x00078191) bg_button_pane_cp02

0x08d0,	// (0x00078317) cell_dialer_keypad_pane_g1_ParamLimits

0x08d0,	// (0x00078317) cell_dialer_keypad_pane_g1

0x074a,	// (0x00078191) bg_button_pane_cp03_ParamLimits

0x074a,	// (0x00078191) bg_button_pane_cp03

0x08d0,	// (0x00078317) cell_dialer_command_1_pane_g1_ParamLimits

0x08d0,	// (0x00078317) cell_dialer_command_1_pane_g1

0xd36a,	// (0x00084db1) bg_button_pane_cp04

0x0bd0,	// (0x00078617) cell_dialer_command_2_pane_g1

0xd36a,	// (0x00084db1) bg_button_pane_cp06

0x0bd0,	// (0x00078617) dialer_ne_clear_pane_g1

0x1534,	// (0x00078f7b) navi_pane_g2

0x1562,	// (0x00078fa9) navi_pane_g3

0x0002,

0xf379,	// (0x00086dc0) navi_pane_g

0x15f1,	// (0x00079038) navi_pane_mv_g2

0x1618,	// (0x0007905f) navi_pane_mv_g5

0x702b,	// (0x0007ea72) navi_pane_mv_t1

0x0964,	// (0x000783ab) main_clock2_pane

0xd8d7,	// (0x0008531e) main_clock2_list_pane_ParamLimits

0xd8d7,	// (0x0008531e) main_clock2_list_pane

0x8df1,	// (0x00080838) main_clock2_pane_t1_ParamLimits

0x8df1,	// (0x00080838) main_clock2_pane_t1

0x8e1f,	// (0x00080866) main_clock2_pane_t2_ParamLimits

0x8e1f,	// (0x00080866) main_clock2_pane_t2

0x0004,

0xf769,	// (0x000871b0) main_clock2_pane_t_ParamLimits

0xf769,	// (0x000871b0) main_clock2_pane_t

0x8e84,	// (0x000808cb) popup_clock_analogue_window_cp03_ParamLimits

0x8e84,	// (0x000808cb) popup_clock_analogue_window_cp03

0x8ea2,	// (0x000808e9) popup_clock_digital_window_cp02_ParamLimits

0x8ea2,	// (0x000808e9) popup_clock_digital_window_cp02

0x8f17,	// (0x0008095e) main_clock2_list_single_pane_ParamLimits

0x8f17,	// (0x0008095e) main_clock2_list_single_pane

0x0b90,	// (0x000785d7) list_highlight_pane_cp05

0xea5b,	// (0x000864a2) main_clock2_list_single_pane_t1

0x5bb2,	// (0x0007d5f9) popup_toolbar_window_cp04_ParamLimits

0x08de,	// (0x00078325) camera2_autofocus_pane_g2_ParamLimits

0x08de,	// (0x00078325) camera2_autofocus_pane_g2

0x08de,	// (0x00078325) camera2_autofocus_pane_g3_ParamLimits

0x08de,	// (0x00078325) camera2_autofocus_pane_g3

0x08de,	// (0x00078325) camera2_autofocus_pane_g4_ParamLimits

0x08de,	// (0x00078325) camera2_autofocus_pane_g4

0x08de,	// (0x00078325) camera2_autofocus_pane_g5_ParamLimits

0x08de,	// (0x00078325) camera2_autofocus_pane_g5

0x0004,

0xf6ad,	// (0x000870f4) camera2_autofocus_pane_g_ParamLimits

0xf6ad,	// (0x000870f4) camera2_autofocus_pane_g

0x874c,	// (0x00080193) camera2_autofocus_pane_cp_g2

0x8754,	// (0x0008019b) camera2_autofocus_pane_cp_g3

0x875c,	// (0x000801a3) camera2_autofocus_pane_cp_g4

0x8764,	// (0x000801ab) camera2_autofocus_pane_cp_g5

0x0004,

0xf713,	// (0x0008715a) camera2_autofocus_pane_cp_g

0xd36a,	// (0x00084db1) popup_dialer_spcha_window

0xd36a,	// (0x00084db1) bg_popup_sub_pane_cp07

0xd36a,	// (0x00084db1) list_spcha_pane

0xea69,	// (0x000864b0) list_single_spcha_pane_ParamLimits

0xea69,	// (0x000864b0) list_single_spcha_pane

0xd36a,	// (0x00084db1) list_highlight_pane_cp06

0x1125,	// (0x00078b6c) list_single_spcha_pane_t1

0xdcb6,	// (0x000856fd) popup_call2_audio_out_window_g4_ParamLimits

0xdcb6,	// (0x000856fd) popup_call2_audio_out_window_g4

0x4f7c,	// (0x0007c9c3) main_imed2_pane

0x81bc,	// (0x0007fc03) popup_imed_adjust2_window

0x81cf,	// (0x0007fc16) popup_imed_trans_window_ParamLimits

0x81cf,	// (0x0007fc16) popup_imed_trans_window

0xe499,	// (0x00085ee0) popup_blid_sat_info2_window_t1

0xe4a7,	// (0x00085eee) popup_blid_sat_info2_window_t2

0x000a,

0xf642,	// (0x00087089) popup_blid_sat_info2_window_t

0x8fcc,	// (0x00080a13) aid_size_cell_colour_35

0x8fe6,	// (0x00080a2d) aid_size_cell_colour_112

0x8ffd,	// (0x00080a44) aid_size_cell_effect

0x074a,	// (0x00078191) bg_tb_trans_pane_cp02

0xea7b,	// (0x000864c2) heading_imed_pane

0x9017,	// (0x00080a5e) listscroll_imed_pane

0xea87,	// (0x000864ce) heading_imed_pane_g1

0xea8f,	// (0x000864d6) heading_imed_pane_t1

0xea9d,	// (0x000864e4) grid_imed_colour_35_pane_ParamLimits

0xea9d,	// (0x000864e4) grid_imed_colour_35_pane

0x9023,	// (0x00080a6a) grid_imed_effect_pane

0xeab5,	// (0x000864fc) list_imed_aspect_pane

0x9033,	// (0x00080a7a) scroll_pane_cp027_ParamLimits

0x9033,	// (0x00080a7a) scroll_pane_cp027

0x903f,	// (0x00080a86) cell_imed_effect_pane_ParamLimits

0x903f,	// (0x00080a86) cell_imed_effect_pane

0xeabd,	// (0x00086504) cell_imed_colour_pane_ParamLimits

0xeabd,	// (0x00086504) cell_imed_colour_pane

0xeaff,	// (0x00086546) cell_imed_colour_pane_g1_ParamLimits

0xeaff,	// (0x00086546) cell_imed_colour_pane_g1

0xeb10,	// (0x00086557) hgihlgiht_grid_pane_cp016_ParamLimits

0xeb10,	// (0x00086557) hgihlgiht_grid_pane_cp016

0x9057,	// (0x00080a9e) cell_imed_effect_pane_g1

0x905f,	// (0x00080aa6) grid_highlight_pane_cp017

0xeb21,	// (0x00086568) list_imed_single_pane_ParamLimits

0xeb21,	// (0x00086568) list_imed_single_pane

0xd36a,	// (0x00084db1) list_highlight_pane_cp07

0xeb36,	// (0x0008657d) list_imed_aspect_pane_comp1_t1

0xe228,	// (0x00085c6f) bg_tb_trans_pane_cp05

0xeb58,	// (0x0008659f) popup_imed_adjust2_window_g1

0xeb7f,	// (0x000865c6) popup_imed_adjust2_window_t1

0xeb97,	// (0x000865de) slider_imed_adjust_pane

0xebab,	// (0x000865f2) slider_imed_adjust_pane_g1

0xebbb,	// (0x00086602) slider_imed_adjust_pane_g2

0xebcb,	// (0x00086612) slider_imed_adjust_pane_g3

0xebdc,	// (0x00086623) slider_imed_adjust_pane_g4

0x0003,

0xf786,	// (0x000871cd) slider_imed_adjust_pane_g

0x9068,	// (0x00080aaf) aid_size_cell_clipart2

0x9074,	// (0x00080abb) grid_imed_clipart_pane

0xebed,	// (0x00086634) scroll_pane_cp031

0x907e,	// (0x00080ac5) cell_imed_clipart_pane_ParamLimits

0x907e,	// (0x00080ac5) cell_imed_clipart_pane

0x90a1,	// (0x00080ae8) cell_imed_clipart_pane_g1

0xd36a,	// (0x00084db1) grid_highlight_pane_cp014

0x8dd3,	// (0x0008081a) main_clock2_pane_g1_ParamLimits

0x8dd3,	// (0x0008081a) main_clock2_pane_g1

0x8ebe,	// (0x00080905) aid_call2_pane_cp10

0x8ed0,	// (0x00080917) aid_call_pane_cp10

0x1493,	// (0x00078eda) popup_clock_analogue_window_cp10_g1

0x1493,	// (0x00078eda) popup_clock_analogue_window_cp10_g2

0x8ee2,	// (0x00080929) popup_clock_analogue_window_cp10_g3

0x8ee2,	// (0x00080929) popup_clock_analogue_window_cp10_g4

0x1493,	// (0x00078eda) popup_clock_analogue_window_cp10_g5

0x0004,

0xf774,	// (0x000871bb) popup_clock_analogue_window_cp10_g

0x8ef8,	// (0x0008093f) popup_clock_analogue_window_cp10_t1

0x8f29,	// (0x00080970) clock_digital_number_pane_cp10_ParamLimits

0x8f29,	// (0x00080970) clock_digital_number_pane_cp10

0x8f43,	// (0x0008098a) clock_digital_number_pane_cp11_ParamLimits

0x8f43,	// (0x0008098a) clock_digital_number_pane_cp11

0x8f5d,	// (0x000809a4) clock_digital_number_pane_cp12_ParamLimits

0x8f5d,	// (0x000809a4) clock_digital_number_pane_cp12

0x8f77,	// (0x000809be) clock_digital_number_pane_cp13_ParamLimits

0x8f77,	// (0x000809be) clock_digital_number_pane_cp13

0x8f91,	// (0x000809d8) clock_digital_separator_pane_cp10_ParamLimits

0x8f91,	// (0x000809d8) clock_digital_separator_pane_cp10

0x8fab,	// (0x000809f2) popup_clock_digital_window_cp02_t1_ParamLimits

0x8fab,	// (0x000809f2) popup_clock_digital_window_cp02_t1

0x085b,	// (0x000782a2) clock_digital_number_pane_cp10_g1

0x085b,	// (0x000782a2) clock_digital_number_pane_cp10_g2

0x0001,

0xf78f,	// (0x000871d6) clock_digital_number_pane_cp10_g

0x085b,	// (0x000782a2) clock_digital_separator_pane_cp10_g1

0x085b,	// (0x000782a2) clock_digital_separator_pane_g2_cp10

0x1620,	// (0x00079067) navi_pane_vded_g4

0x1629,	// (0x00079070) navi_pane_vded_g5

0x1632,	// (0x00079079) navi_pane_vded_t1

0x4f7c,	// (0x0007c9c3) main_vded_pane

0x90aa,	// (0x00080af1) main_vded_pane_g1

0x90b6,	// (0x00080afd) main_vded_pane_g2

0x90c0,	// (0x00080b07) main_vded_pane_g3

0x0002,

0xf794,	// (0x000871db) main_vded_pane_g

0x90ca,	// (0x00080b11) main_vded_pane_t1

0x90d8,	// (0x00080b1f) main_vded_pane_t2

0x0001,

0xf79b,	// (0x000871e2) main_vded_pane_t

0x90e6,	// (0x00080b2d) vded_slider_pane

0x90f0,	// (0x00080b37) vded_video_pane

0xebf5,	// (0x0008663c) vded_video_pane_g1

0x90fa,	// (0x00080b41) vded_video_pane_g2

0x0bd0,	// (0x00078617) vded_video_pane_g3

0x0002,

0xf7a0,	// (0x000871e7) vded_video_pane_g

0xebff,	// (0x00086646) vded_slider_pane_g1

0xe3ba,	// (0x00085e01) vded_slider_pane_g2

0xec08,	// (0x0008664f) vded_slider_pane_g3

0xec11,	// (0x00086658) vded_slider_pane_g4

0xec1a,	// (0x00086661) vded_slider_pane_g5

0x0004,

0xf7a7,	// (0x000871ee) vded_slider_pane_g

0x8cad,	// (0x000806f4) mup3_rocker_pane_ParamLimits

0x8cad,	// (0x000806f4) mup3_rocker_pane

0x9103,	// (0x00080b4a) mup3_control_keys_pane_g1

0x910b,	// (0x00080b52) mup3_control_keys_pane_g2

0x9113,	// (0x00080b5a) mup3_control_keys_pane_g3

0x911b,	// (0x00080b62) mup3_control_keys_pane_g4

0x0003,

0xf7b2,	// (0x000871f9) mup3_control_keys_pane_g

0x4f30,	// (0x0007c977) popup_toolbar2_fixed_window_cp01_ParamLimits

0x4f30,	// (0x0007c977) popup_toolbar2_fixed_window_cp01

0x8cc7,	// (0x0008070e) popup_toolbar2_fixed_window_cp02_ParamLimits

0x8cc7,	// (0x0008070e) popup_toolbar2_fixed_window_cp02

0x7bb2,	// (0x0007f5f9) popup_call2_audio_second_window_t4_ParamLimits

0x7bb2,	// (0x0007f5f9) popup_call2_audio_second_window_t4

0xdb7b,	// (0x000855c2) popup_call2_audio_first_window_t6_ParamLimits

0xdb7b,	// (0x000855c2) popup_call2_audio_first_window_t6

0xddb9,	// (0x00085800) popup_call2_audio_out_window_t6_ParamLimits

0xddb9,	// (0x00085800) popup_call2_audio_out_window_t6

0x4f7c,	// (0x0007c9c3) main_vitu_pane

0xd8d7,	// (0x0008531e) aid_size_cell_itu_ParamLimits

0xd8d7,	// (0x0008531e) aid_size_cell_itu

0xd8d7,	// (0x0008531e) bg_popup_window_pane_cp08_ParamLimits

0xd8d7,	// (0x0008531e) bg_popup_window_pane_cp08

0xd8d7,	// (0x0008531e) field_vitu_entry_pane_ParamLimits

0xd8d7,	// (0x0008531e) field_vitu_entry_pane

0xd8d7,	// (0x0008531e) grid_vitu_function_pane_ParamLimits

0xd8d7,	// (0x0008531e) grid_vitu_function_pane

0xd8d7,	// (0x0008531e) grid_vitu_itu_pane_ParamLimits

0xd8d7,	// (0x0008531e) grid_vitu_itu_pane

0xd8d7,	// (0x0008531e) cell_vitu_itu_pane_ParamLimits

0xd8d7,	// (0x0008531e) cell_vitu_itu_pane

0xd8d7,	// (0x0008531e) cell_vitu_function_pane_ParamLimits

0xd8d7,	// (0x0008531e) cell_vitu_function_pane

0x074a,	// (0x00078191) bg_popup_sub_pane_cp08_ParamLimits

0x074a,	// (0x00078191) bg_popup_sub_pane_cp08

0x0ba2,	// (0x000785e9) field_vitu_entry_pane_t1_ParamLimits

0x0ba2,	// (0x000785e9) field_vitu_entry_pane_t1

0xe9e4,	// (0x0008642b) field_vitu_entry_pane_t2_ParamLimits

0xe9e4,	// (0x0008642b) field_vitu_entry_pane_t2

0x0001,

0xf7bb,	// (0x00087202) field_vitu_entry_pane_t_ParamLimits

0xf7bb,	// (0x00087202) field_vitu_entry_pane_t

0x1c1d,	// (0x00079664) bg_button_pane_cp05_ParamLimits

0x1c1d,	// (0x00079664) bg_button_pane_cp05

0xec23,	// (0x0008666a) cell_vitu_itu_pane_g1

0xec3f,	// (0x00086686) cell_vitu_itu_pane_t1_ParamLimits

0xec3f,	// (0x00086686) cell_vitu_itu_pane_t1

0xec3f,	// (0x00086686) cell_vitu_itu_pane_t2_ParamLimits

0xec3f,	// (0x00086686) cell_vitu_itu_pane_t2

0x0002,

0xf7c0,	// (0x00087207) cell_vitu_itu_pane_t_ParamLimits

0xf7c0,	// (0x00087207) cell_vitu_itu_pane_t

0xd36a,	// (0x00084db1) bg_button_pane_cp07

0x0bd0,	// (0x00078617) cell_vitu_function_pane_g1

0x50b5,	// (0x0007cafc) main_calc_pane_g1

0x4cee,	// (0x0007c735) aid_visual_content_pane

0x4f7c,	// (0x0007c9c3) main_vradio_pane

0x08de,	// (0x00078325) main_vradio_pane_g1_ParamLimits

0x08de,	// (0x00078325) main_vradio_pane_g1

0x08de,	// (0x00078325) main_vradio_pane_g2_ParamLimits

0x08de,	// (0x00078325) main_vradio_pane_g2

0x0001,

0xf7c7,	// (0x0008720e) main_vradio_pane_g_ParamLimits

0xf7c7,	// (0x0008720e) main_vradio_pane_g

0x1721,	// (0x00079168) main_vradio_pane_t1_ParamLimits

0x1721,	// (0x00079168) main_vradio_pane_t1

0x1721,	// (0x00079168) main_vradio_pane_t2_ParamLimits

0x1721,	// (0x00079168) main_vradio_pane_t2

0x1721,	// (0x00079168) main_vradio_pane_t3_ParamLimits

0x1721,	// (0x00079168) main_vradio_pane_t3

0x0002,

0xf7cc,	// (0x00087213) main_vradio_pane_t_ParamLimits

0xf7cc,	// (0x00087213) main_vradio_pane_t

0xd8d7,	// (0x0008531e) vradio_rocker_control_pane_ParamLimits

0xd8d7,	// (0x0008531e) vradio_rocker_control_pane

0xd8d7,	// (0x0008531e) vradio_station_info_pane_ParamLimits

0xd8d7,	// (0x0008531e) vradio_station_info_pane

0x074a,	// (0x00078191) vradio_frequency_info_pane_ParamLimits

0x074a,	// (0x00078191) vradio_frequency_info_pane

0x0bd0,	// (0x00078617) vradio_station_info_pane_g1

0xec3f,	// (0x00086686) vradio_station_info_pane_t1_ParamLimits

0xec3f,	// (0x00086686) vradio_station_info_pane_t1

0x1721,	// (0x00079168) vradio_station_info_pane_t2_ParamLimits

0x1721,	// (0x00079168) vradio_station_info_pane_t2

0x0001,

0xf7d3,	// (0x0008721a) vradio_station_info_pane_t_ParamLimits

0xf7d3,	// (0x0008721a) vradio_station_info_pane_t

0xd36a,	// (0x00084db1) vradio_tuning_pane

0x912b,	// (0x00080b72) vradio_rocker_control_pane_g1

0xec53,	// (0x0008669a) vradio_rocker_control_pane_g2

0x9133,	// (0x00080b7a) vradio_rocker_control_pane_g3

0x913b,	// (0x00080b82) vradio_rocker_control_pane_g4

0x9143,	// (0x00080b8a) vradio_rocker_control_pane_g5

0x0004,

0xf7d8,	// (0x0008721f) vradio_rocker_control_pane_g

0x0bd0,	// (0x00078617) vradio_frequency_info_pane_g1

0x0ba2,	// (0x000785e9) vradio_frequency_info_pane_t1_ParamLimits

0x0ba2,	// (0x000785e9) vradio_frequency_info_pane_t1

0x914b,	// (0x00080b92) vradio_tuning_pane_g1

0x9158,	// (0x00080b9f) vradio_tuning_pane_t1

0x4d37,	// (0x0007c77e) area_side_right_pane_ParamLimits

0x4d37,	// (0x0007c77e) area_side_right_pane

0xe1e3,	// (0x00085c2a) status_small_pane_g1

0xe1eb,	// (0x00085c32) status_small_pane_g2

0xe1f4,	// (0x00085c3b) status_small_pane_g3

0xe1fd,	// (0x00085c44) status_small_pane_g4

0x0003,

0xf5a4,	// (0x00086feb) status_small_pane_g

0xe206,	// (0x00085c4d) status_small_pane_t1

0x4f7c,	// (0x0007c9c3) main_video3_pane

0xec5b,	// (0x000866a2) cams_zoom_vslider_pane

0xec63,	// (0x000866aa) image3_wide_pane_ParamLimits

0xec63,	// (0x000866aa) image3_wide_pane

0xec7d,	// (0x000866c4) image3_wide_small_pane

0xec89,	// (0x000866d0) main_video3_pane_g1_ParamLimits

0xec89,	// (0x000866d0) main_video3_pane_g1

0xeca5,	// (0x000866ec) main_video3_pane_g2_ParamLimits

0xeca5,	// (0x000866ec) main_video3_pane_g2

0x0001,

0xf7e3,	// (0x0008722a) main_video3_pane_g_ParamLimits

0xf7e3,	// (0x0008722a) main_video3_pane_g

0xecc1,	// (0x00086708) main_video3_pane_t1_ParamLimits

0xecc1,	// (0x00086708) main_video3_pane_t1

0xecec,	// (0x00086733) main_video3_pane_t2_ParamLimits

0xecec,	// (0x00086733) main_video3_pane_t2

0xed17,	// (0x0008675e) main_video3_pane_t3_ParamLimits

0xed17,	// (0x0008675e) main_video3_pane_t3

0x0002,

0xf7e8,	// (0x0008722f) main_video3_pane_t_ParamLimits

0xf7e8,	// (0x0008722f) main_video3_pane_t

0xed44,	// (0x0008678b) cams_zoom_vslider_pane_g1

0xed4d,	// (0x00086794) cams_zoom_vslider_pane_g2

0x0001,

0xf7ef,	// (0x00087236) cams_zoom_vslider_pane_g

0xed55,	// (0x0008679c) small_slider_vertical_pane

0x0bd0,	// (0x00078617) small_slider_vertical_pane_g1

0x0bd0,	// (0x00078617) small_slider_vertical_pane_g2

0xed5d,	// (0x000867a4) small_slider_vertical_pane_g3

0x0002,

0xf7f4,	// (0x0008723b) small_slider_vertical_pane_g

0x4f7c,	// (0x0007c9c3) main_hwr_training_pane

0xed66,	// (0x000867ad) hwr_training_instruct_pane_ParamLimits

0xed66,	// (0x000867ad) hwr_training_instruct_pane

0x9167,	// (0x00080bae) hwr_training_navi_pane_ParamLimits

0x9167,	// (0x00080bae) hwr_training_navi_pane

0x9181,	// (0x00080bc8) hwr_training_write_pane_ParamLimits

0x9181,	// (0x00080bc8) hwr_training_write_pane

0xd36a,	// (0x00084db1) bg_frame_shadow_pane

0xed9d,	// (0x000867e4) hwr_training_write_pane_g1

0xeda5,	// (0x000867ec) hwr_training_write_pane_g2

0xedad,	// (0x000867f4) hwr_training_write_pane_g3

0xedb5,	// (0x000867fc) hwr_training_write_pane_g4

0xedbd,	// (0x00086804) hwr_training_write_pane_g5

0xedc5,	// (0x0008680c) hwr_training_write_pane_g6

0xedcd,	// (0x00086814) hwr_training_write_pane_g7

0x0006,

0xf7fb,	// (0x00087242) hwr_training_write_pane_g

0x91b9,	// (0x00080c00) hwr_training_navi_pane_g1_ParamLimits

0x91b9,	// (0x00080c00) hwr_training_navi_pane_g1

0x91cb,	// (0x00080c12) hwr_training_navi_pane_g2_ParamLimits

0x91cb,	// (0x00080c12) hwr_training_navi_pane_g2

0x91dd,	// (0x00080c24) hwr_training_navi_pane_g3_ParamLimits

0x91dd,	// (0x00080c24) hwr_training_navi_pane_g3

0x91ed,	// (0x00080c34) hwr_training_navi_pane_g4_ParamLimits

0x91ed,	// (0x00080c34) hwr_training_navi_pane_g4

0x0004,

0xf80a,	// (0x00087251) hwr_training_navi_pane_g_ParamLimits

0xf80a,	// (0x00087251) hwr_training_navi_pane_g

0x9207,	// (0x00080c4e) hwr_training_navi_pane_t1

0x9215,	// (0x00080c5c) list_single_hwr_training_instruct_pane_ParamLimits

0x9215,	// (0x00080c5c) list_single_hwr_training_instruct_pane

0xedd5,	// (0x0008681c) list_single_hwr_training_instruct_pane_t1

0xe59a,	// (0x00085fe1) bg_frame_shadow_pane_g1

0xede4,	// (0x0008682b) bg_frame_shadow_pane_g2

0xedec,	// (0x00086833) bg_frame_shadow_pane_g3

0xedf4,	// (0x0008683b) bg_frame_shadow_pane_g4

0xedfc,	// (0x00086843) bg_frame_shadow_pane_g5

0xee04,	// (0x0008684b) bg_frame_shadow_pane_g6

0xee0c,	// (0x00086853) bg_frame_shadow_pane_g7

0x0a37,	// (0x0007847e) bg_frame_shadow_pane_g8

0x0007,

0xf815,	// (0x0008725c) bg_frame_shadow_pane_g

0x4f7c,	// (0x0007c9c3) main_video_tele_dialer_pane

0x923e,	// (0x00080c85) aid_size_cell_video_keypad_ParamLimits

0x923e,	// (0x00080c85) aid_size_cell_video_keypad

0x924e,	// (0x00080c95) grid_video_dialer_keypad_pane_ParamLimits

0x924e,	// (0x00080c95) grid_video_dialer_keypad_pane

0x9282,	// (0x00080cc9) video_down_pane_cp_ParamLimits

0x9282,	// (0x00080cc9) video_down_pane_cp

0x92ac,	// (0x00080cf3) cell_video_dialer_keypad_pane_ParamLimits

0x92ac,	// (0x00080cf3) cell_video_dialer_keypad_pane

0xee14,	// (0x0008685b) bg_button_pane_cp08_ParamLimits

0xee14,	// (0x0008685b) bg_button_pane_cp08

0x92c1,	// (0x00080d08) cell_video_dialer_keypad_pane_g1_ParamLimits

0x92c1,	// (0x00080d08) cell_video_dialer_keypad_pane_g1

0x8ca1,	// (0x000806e8) mup3_rocker2_pane_ParamLimits

0x8ca1,	// (0x000806e8) mup3_rocker2_pane

0x0bd0,	// (0x00078617) mup3_rocker2_pane_g1

0x8124,	// (0x0007fb6b) main_dialer2_pane

0x4f7c,	// (0x0007c9c3) main_mp4_pane

0x9319,	// (0x00080d60) main_mp4_pane_g1_ParamLimits

0x9319,	// (0x00080d60) main_mp4_pane_g1

0x9327,	// (0x00080d6e) main_mp4_pane_g2_ParamLimits

0x9327,	// (0x00080d6e) main_mp4_pane_g2

0x9335,	// (0x00080d7c) main_mp4_pane_g3_ParamLimits

0x9335,	// (0x00080d7c) main_mp4_pane_g3

0x937a,	// (0x00080dc1) main_mp4_pane_g4_ParamLimits

0x937a,	// (0x00080dc1) main_mp4_pane_g4

0x93a8,	// (0x00080def) main_mp4_pane_g5_ParamLimits

0x93a8,	// (0x00080def) main_mp4_pane_g5

0x0007,

0xf835,	// (0x0008727c) main_mp4_pane_g_ParamLimits

0xf835,	// (0x0008727c) main_mp4_pane_g

0x941c,	// (0x00080e63) main_mp4_pane_t1_ParamLimits

0x941c,	// (0x00080e63) main_mp4_pane_t1

0x9478,	// (0x00080ebf) main_mp4_pane_t2_ParamLimits

0x9478,	// (0x00080ebf) main_mp4_pane_t2

0xee20,	// (0x00086867) main_mp4_pane_t3_ParamLimits

0xee20,	// (0x00086867) main_mp4_pane_t3

0x94ca,	// (0x00080f11) main_mp4_pane_t4_ParamLimits

0x94ca,	// (0x00080f11) main_mp4_pane_t4

0x0003,

0xf846,	// (0x0008728d) main_mp4_pane_t_ParamLimits

0xf846,	// (0x0008728d) main_mp4_pane_t

0x950e,	// (0x00080f55) mp4_progress_pane_ParamLimits

0x950e,	// (0x00080f55) mp4_progress_pane

0x9558,	// (0x00080f9f) mp4_rocker_pane_ParamLimits

0x9558,	// (0x00080f9f) mp4_rocker_pane

0xee4e,	// (0x00086895) mp4_progress_pane_t1

0xee67,	// (0x000868ae) mp4_progress_pane_t2

0x0001,

0xf84f,	// (0x00087296) mp4_progress_pane_t

0xee80,	// (0x000868c7) mup_progress_pane_cp04

0xe3c3,	// (0x00085e0a) mp4_rocker_pane_g1

0x9578,	// (0x00080fbf) aid_cell_size_keypad2_ParamLimits

0x9578,	// (0x00080fbf) aid_cell_size_keypad2

0x9588,	// (0x00080fcf) dialer2_ne_pane_ParamLimits

0x9588,	// (0x00080fcf) dialer2_ne_pane

0x9596,	// (0x00080fdd) grid_dialer2_keypad_pane_ParamLimits

0x9596,	// (0x00080fdd) grid_dialer2_keypad_pane

0xee93,	// (0x000868da) bg_popup_call_pane_cp07_ParamLimits

0xee93,	// (0x000868da) bg_popup_call_pane_cp07

0x95a6,	// (0x00080fed) dialer2_ne_pane_t1_ParamLimits

0x95a6,	// (0x00080fed) dialer2_ne_pane_t1

0x95cb,	// (0x00081012) cell_dialer2_keypad_pane_ParamLimits

0x95cb,	// (0x00081012) cell_dialer2_keypad_pane

0xeeb3,	// (0x000868fa) bg_button_pane_pane_cp04_ParamLimits

0xeeb3,	// (0x000868fa) bg_button_pane_pane_cp04

0x95e0,	// (0x00081027) cell_dialer2_keypad_pane_g1_ParamLimits

0x95e0,	// (0x00081027) cell_dialer2_keypad_pane_g1

0x5a74,	// (0x0007d4bb) aid_placing_vt_set_content_ParamLimits

0x5a74,	// (0x0007d4bb) aid_placing_vt_set_content

0x5aa0,	// (0x0007d4e7) aid_placing_vt_set_title_ParamLimits

0x5aa0,	// (0x0007d4e7) aid_placing_vt_set_title

0x4f7c,	// (0x0007c9c3) main_image3_pane

0x967a,	// (0x000810c1) area_side_right_pane_cp01_ParamLimits

0x967a,	// (0x000810c1) area_side_right_pane_cp01

0x96a7,	// (0x000810ee) main_image3_pane_g1_ParamLimits

0x96a7,	// (0x000810ee) main_image3_pane_g1

0x96b5,	// (0x000810fc) main_image3_pane_g2_ParamLimits

0x96b5,	// (0x000810fc) main_image3_pane_g2

0x96ce,	// (0x00081115) main_image3_pane_g3_ParamLimits

0x96ce,	// (0x00081115) main_image3_pane_g3

0x96e7,	// (0x0008112e) main_image3_pane_g4_ParamLimits

0x96e7,	// (0x0008112e) main_image3_pane_g4

0x0003,

0xf85e,	// (0x000872a5) main_image3_pane_g_ParamLimits

0xf85e,	// (0x000872a5) main_image3_pane_g

0x9700,	// (0x00081147) main_image3_pane_t1_ParamLimits

0x9700,	// (0x00081147) main_image3_pane_t1

0x9725,	// (0x0008116c) main_image3_pane_t2_ParamLimits

0x9725,	// (0x0008116c) main_image3_pane_t2

0x9744,	// (0x0008118b) main_image3_pane_t3_ParamLimits

0x9744,	// (0x0008118b) main_image3_pane_t3

0x0003,

0xf867,	// (0x000872ae) main_image3_pane_t_ParamLimits

0xf867,	// (0x000872ae) main_image3_pane_t

0xd8d7,	// (0x0008531e) grid_sctrl_middle_pane_cp01_ParamLimits

0xd8d7,	// (0x0008531e) grid_sctrl_middle_pane_cp01

0x97a5,	// (0x000811ec) cell_sctrl_middle_pane_cp01_ParamLimits

0x97a5,	// (0x000811ec) cell_sctrl_middle_pane_cp01

0x97b6,	// (0x000811fd) cell_sctrl_middle_pane_cp01_g1_ParamLimits

0x97b6,	// (0x000811fd) cell_sctrl_middle_pane_cp01_g1

0x4f7c,	// (0x0007c9c3) main_call4_pane

0x97c3,	// (0x0008120a) aid_size_button_call4_ParamLimits

0x97c3,	// (0x0008120a) aid_size_button_call4

0x97f9,	// (0x00081240) call4_windows_pane_ParamLimits

0x97f9,	// (0x00081240) call4_windows_pane

0x980e,	// (0x00081255) grid_call4_button_pane_ParamLimits

0x980e,	// (0x00081255) grid_call4_button_pane

0x983c,	// (0x00081283) call4_windows_conf_pane

0x9851,	// (0x00081298) popup_call4_audio_first_window_ParamLimits

0x9851,	// (0x00081298) popup_call4_audio_first_window

0x98a1,	// (0x000812e8) popup_call4_audio_second_window_ParamLimits

0x98a1,	// (0x000812e8) popup_call4_audio_second_window

0x98ba,	// (0x00081301) popup_call4_audio_wait_window_ParamLimits

0x98ba,	// (0x00081301) popup_call4_audio_wait_window

0x98c8,	// (0x0008130f) cell_call4_button_pane_ParamLimits

0x98c8,	// (0x0008130f) cell_call4_button_pane

0x98eb,	// (0x00081332) bg_button_pane_cp09_ParamLimits

0x98eb,	// (0x00081332) bg_button_pane_cp09

0x98f7,	// (0x0008133e) cell_call4_button_pane_g1_ParamLimits

0x98f7,	// (0x0008133e) cell_call4_button_pane_g1

0x9904,	// (0x0008134b) cell_call4_button_pane_t1_ParamLimits

0x9904,	// (0x0008134b) cell_call4_button_pane_t1

0xeec7,	// (0x0008690e) popup_call4_audio_conf_window_ParamLimits

0xeec7,	// (0x0008690e) popup_call4_audio_conf_window

0x8cd4,	// (0x0008071b) mup3_progress_pane_t1_ParamLimits

0x8cf3,	// (0x0008073a) mup3_progress_pane_t2_ParamLimits

0xe90d,	// (0x00086354) mup3_progress_pane_t3_ParamLimits

0xf73c,	// (0x00087183) mup3_progress_pane_t_ParamLimits

0xe92a,	// (0x00086371) mup_progress_pane_cp03_ParamLimits

0x9123,	// (0x00080b6a) mup3_control_keys_pane_g4_copy1

0x953c,	// (0x00080f83) mp4_rocker2_pane_ParamLimits

0x953c,	// (0x00080f83) mp4_rocker2_pane

0xeedb,	// (0x00086922) mp4_rocker2_pane_g1

0xeee3,	// (0x0008692a) mp4_rocker2_pane_g2

0x9948,	// (0x0008138f) mp4_rocker2_pane_g3

0x9950,	// (0x00081397) mp4_rocker2_pane_g4

0x9958,	// (0x0008139f) mp4_rocker2_pane_g5

0x0004,

0xf870,	// (0x000872b7) mp4_rocker2_pane_g

0x4f7c,	// (0x0007c9c3) main_camera4_pane

0x4f7c,	// (0x0007c9c3) main_video4_pane

0x925e,	// (0x00080ca5) main_video_tele_dialer_pane_t1_ParamLimits

0x925e,	// (0x00080ca5) main_video_tele_dialer_pane_t1

0x9270,	// (0x00080cb7) main_video_tele_dialer_pane_t2_ParamLimits

0x9270,	// (0x00080cb7) main_video_tele_dialer_pane_t2

0x0001,

0xf826,	// (0x0008726d) main_video_tele_dialer_pane_t_ParamLimits

0xf826,	// (0x0008726d) main_video_tele_dialer_pane_t

0x9978,	// (0x000813bf) cam4_autofocus_pane_ParamLimits

0x9978,	// (0x000813bf) cam4_autofocus_pane

0x9992,	// (0x000813d9) cam4_image_uncrop_pane_ParamLimits

0x9992,	// (0x000813d9) cam4_image_uncrop_pane

0x99a9,	// (0x000813f0) cam4_indicators_pane_ParamLimits

0x99a9,	// (0x000813f0) cam4_indicators_pane

0x99c5,	// (0x0008140c) main_camera4_pane_g1_ParamLimits

0x99c5,	// (0x0008140c) main_camera4_pane_g1

0x99d1,	// (0x00081418) main_camera4_pane_g2_ParamLimits

0x99d1,	// (0x00081418) main_camera4_pane_g2

0x99d1,	// (0x00081418) main_camera4_pane_g3_ParamLimits

0x99d1,	// (0x00081418) main_camera4_pane_g3

0x99dd,	// (0x00081424) main_camera4_pane_g4_ParamLimits

0x99dd,	// (0x00081424) main_camera4_pane_g4

0x99e9,	// (0x00081430) main_camera4_pane_g5_ParamLimits

0x99e9,	// (0x00081430) main_camera4_pane_g5

0x0005,

0xf87b,	// (0x000872c2) main_camera4_pane_g_ParamLimits

0xf87b,	// (0x000872c2) main_camera4_pane_g

0x9a03,	// (0x0008144a) main_camera4_pane_t1_ParamLimits

0x9a03,	// (0x0008144a) main_camera4_pane_t1

0xf077,	// (0x00086abe) bg_tb_trans_pane_cp06

0x9a53,	// (0x0008149a) cam4_indicators_pane_g1

0x9a64,	// (0x000814ab) cam4_indicators_pane_g2

0x0002,

0xf896,	// (0x000872dd) cam4_indicators_pane_g

0x9a7c,	// (0x000814c3) cam4_indicators_pane_t1

0x9aa6,	// (0x000814ed) main_video4_pane_g1_ParamLimits

0x9aa6,	// (0x000814ed) main_video4_pane_g1

0x9ab2,	// (0x000814f9) main_video4_pane_g2_ParamLimits

0x9ab2,	// (0x000814f9) main_video4_pane_g2

0x9abe,	// (0x00081505) main_video4_pane_g3_ParamLimits

0x9abe,	// (0x00081505) main_video4_pane_g3

0x9aca,	// (0x00081511) main_video4_pane_g4_ParamLimits

0x9aca,	// (0x00081511) main_video4_pane_g4

0x0004,

0xf89d,	// (0x000872e4) main_video4_pane_g_ParamLimits

0xf89d,	// (0x000872e4) main_video4_pane_g

0x9aea,	// (0x00081531) vid4_indicators_pane_ParamLimits

0x9aea,	// (0x00081531) vid4_indicators_pane

0x9b09,	// (0x00081550) video4_image_uncrop_cif_pane_ParamLimits

0x9b09,	// (0x00081550) video4_image_uncrop_cif_pane

0x9b18,	// (0x0008155f) video4_image_uncrop_nhd_pane_ParamLimits

0x9b18,	// (0x0008155f) video4_image_uncrop_nhd_pane

0x9992,	// (0x000813d9) video4_image_uncrop_vga_pane_ParamLimits

0x9992,	// (0x000813d9) video4_image_uncrop_vga_pane

0x8116,	// (0x0007fb5d) bg_tb_trans_pane_cp07

0x9b2d,	// (0x00081574) vid4_indicators_pane_g1

0x9b41,	// (0x00081588) vid4_indicators_pane_g2

0x9b55,	// (0x0008159c) vid4_indicators_pane_g3

0x0004,

0xf8a8,	// (0x000872ef) vid4_indicators_pane_g

0x9b82,	// (0x000815c9) vid4_indicators_pane_t1

0x9b99,	// (0x000815e0) cam4_autofocus_pane_g1

0x9ba1,	// (0x000815e8) cam4_autofocus_pane_g2

0x9ba9,	// (0x000815f0) cam4_autofocus_pane_g3

0x0002,

0xf8b3,	// (0x000872fa) cam4_autofocus_pane_g

0x9bb1,	// (0x000815f8) cam4_autofocus_pane_g3_copy1

0x9290,	// (0x00080cd7) video_down_pane_cp_t1

0x929e,	// (0x00080ce5) video_down_pane_cp_t2

0x0001,

0xf82b,	// (0x00087272) video_down_pane_cp_t

0x4f62,	// (0x0007c9a9) popup_vitu2_window_ParamLimits

0x4f62,	// (0x0007c9a9) popup_vitu2_window

0x9bb9,	// (0x00081600) aid_size_cell2_itu2_ParamLimits

0x9bb9,	// (0x00081600) aid_size_cell2_itu2

0x9bd5,	// (0x0008161c) aid_size_cell_itu2_ParamLimits

0x9bd5,	// (0x0008161c) aid_size_cell_itu2

0x9c0f,	// (0x00081656) bg_popup_window_pane_cp09_ParamLimits

0x9c0f,	// (0x00081656) bg_popup_window_pane_cp09

0x9c1d,	// (0x00081664) field_vitu2_entry_pane_ParamLimits

0x9c1d,	// (0x00081664) field_vitu2_entry_pane

0x9c3b,	// (0x00081682) grid_vitu2_function_pane_ParamLimits

0x9c3b,	// (0x00081682) grid_vitu2_function_pane

0x9c7b,	// (0x000816c2) grid_vitu2_itu_pane_ParamLimits

0x9c7b,	// (0x000816c2) grid_vitu2_itu_pane

0x9cdf,	// (0x00081726) cell_vitu2_itu_pane_ParamLimits

0x9cdf,	// (0x00081726) cell_vitu2_itu_pane

0x9cf8,	// (0x0008173f) cell_vitu2_function_pane_ParamLimits

0x9cf8,	// (0x0008173f) cell_vitu2_function_pane

0xeeeb,	// (0x00086932) bg_popup_call_pane_cp08_ParamLimits

0xeeeb,	// (0x00086932) bg_popup_call_pane_cp08

0xef02,	// (0x00086949) field_vitu2_entry_pane_g1

0xef0e,	// (0x00086955) field_vitu2_entry_pane_g2

0x0002,

0xf8ba,	// (0x00087301) field_vitu2_entry_pane_g

0x9d39,	// (0x00081780) field_vitu2_entry_pane_t1_ParamLimits

0x9d39,	// (0x00081780) field_vitu2_entry_pane_t1

0x1cb5,	// (0x000796fc) field_vitu2_entry_pane_t2_ParamLimits

0x1cb5,	// (0x000796fc) field_vitu2_entry_pane_t2

0x0001,

0xf8c1,	// (0x00087308) field_vitu2_entry_pane_t_ParamLimits

0xf8c1,	// (0x00087308) field_vitu2_entry_pane_t

0x845a,	// (0x0007fea1) bg_button_pane_cp010_ParamLimits

0x845a,	// (0x0007fea1) bg_button_pane_cp010

0x9d6c,	// (0x000817b3) cell_vitu2_itu_pane_g1

0x9d92,	// (0x000817d9) cell_vitu2_itu_pane_t1_ParamLimits

0x9d92,	// (0x000817d9) cell_vitu2_itu_pane_t1

0x4bd2,	// (0x0007c619) cell_vitu2_itu_pane_t2_ParamLimits

0x4bd2,	// (0x0007c619) cell_vitu2_itu_pane_t2

0x0002,

0xf8cb,	// (0x00087312) cell_vitu2_itu_pane_t_ParamLimits

0xf8cb,	// (0x00087312) cell_vitu2_itu_pane_t

0x8116,	// (0x0007fb5d) bg_button_pane_cp011

0x9dde,	// (0x00081825) cell_vitu2_function_pane_g1

0x4f7c,	// (0x0007c9c3) main_myfav_hc_pane

0x9786,	// (0x000811cd) popup_image3_note_pane_ParamLimits

0x9786,	// (0x000811cd) popup_image3_note_pane

0x9794,	// (0x000811db) popup_image3_tool_bar_pane_ParamLimits

0x9794,	// (0x000811db) popup_image3_tool_bar_pane

0x4c48,	// (0x0007c68f) cell_vitu2_itu_pane_t3_ParamLimits

0x4c48,	// (0x0007c68f) cell_vitu2_itu_pane_t3

0xd36a,	// (0x00084db1) bg_popup_trans_pane

0xef30,	// (0x00086977) grid_image3_tool_bar_pane

0xef3a,	// (0x00086981) bg_popup_trans_pane_g1

0x0de1,	// (0x00078828) bg_popup_trans_pane_g2

0xef42,	// (0x00086989) bg_popup_trans_pane_g3

0xef4a,	// (0x00086991) bg_popup_trans_pane_g4

0xef52,	// (0x00086999) bg_popup_trans_pane_g5

0xef5a,	// (0x000869a1) bg_popup_trans_pane_g6

0xef62,	// (0x000869a9) bg_popup_trans_pane_g7

0xef6a,	// (0x000869b1) bg_popup_trans_pane_g8

0x0dc1,	// (0x00078808) bg_popup_trans_pane_g9

0x0008,

0xf8d2,	// (0x00087319) bg_popup_trans_pane_g

0xef72,	// (0x000869b9) cell_image3_tool_bar_pane_ParamLimits

0xef72,	// (0x000869b9) cell_image3_tool_bar_pane

0x0bd0,	// (0x00078617) cell_image3_tool_bar_pane_g1

0xd36a,	// (0x00084db1) bg_popup_trans_pane_cp1

0xef86,	// (0x000869cd) popup_image3_note_pane_t1

0xef94,	// (0x000869db) popup_image3_note_pane_t2

0xefa2,	// (0x000869e9) popup_image3_note_pane_t3

0x0002,

0xf8e5,	// (0x0008732c) popup_image3_note_pane_t

0xefb0,	// (0x000869f7) popup_image3_note_pane_t3_copy1

0x9df2,	// (0x00081839) bg_myfav_hc_instruction_pane_ParamLimits

0x9df2,	// (0x00081839) bg_myfav_hc_instruction_pane

0x9e0a,	// (0x00081851) cell_myfav_contact_pane_ParamLimits

0x9e0a,	// (0x00081851) cell_myfav_contact_pane

0x9e24,	// (0x0008186b) cell_myfav_contact_pane_cp1_ParamLimits

0x9e24,	// (0x0008186b) cell_myfav_contact_pane_cp1

0x9e3c,	// (0x00081883) cell_myfav_contact_pane_cp2_ParamLimits

0x9e3c,	// (0x00081883) cell_myfav_contact_pane_cp2

0x9e54,	// (0x0008189b) cell_myfav_contact_pane_cp3_ParamLimits

0x9e54,	// (0x0008189b) cell_myfav_contact_pane_cp3

0x9e6b,	// (0x000818b2) cell_myfav_contact_pane_cp4_ParamLimits

0x9e6b,	// (0x000818b2) cell_myfav_contact_pane_cp4

0x9e81,	// (0x000818c8) cell_myfav_contact_pane_cp5_ParamLimits

0x9e81,	// (0x000818c8) cell_myfav_contact_pane_cp5

0x9e95,	// (0x000818dc) cell_myfav_contact_pane_cp6_ParamLimits

0x9e95,	// (0x000818dc) cell_myfav_contact_pane_cp6

0x9ea9,	// (0x000818f0) cell_myfav_contact_pane_cp7_ParamLimits

0x9ea9,	// (0x000818f0) cell_myfav_contact_pane_cp7

0xefbe,	// (0x00086a05) listscroll_gen_pane_cp05

0x9ec1,	// (0x00081908) main_myfav_hc_pane_g1_ParamLimits

0x9ec1,	// (0x00081908) main_myfav_hc_pane_g1

0x9ed7,	// (0x0008191e) main_myfav_hc_pane_g2_ParamLimits

0x9ed7,	// (0x0008191e) main_myfav_hc_pane_g2

0x0002,

0xf8ec,	// (0x00087333) main_myfav_hc_pane_g_ParamLimits

0xf8ec,	// (0x00087333) main_myfav_hc_pane_g

0x9f07,	// (0x0008194e) main_myfav_hc_pane_t1_ParamLimits

0x9f07,	// (0x0008194e) main_myfav_hc_pane_t1

0xefc7,	// (0x00086a0e) main_myfav_hc_pane_t2_ParamLimits

0xefc7,	// (0x00086a0e) main_myfav_hc_pane_t2

0xefd9,	// (0x00086a20) main_myfav_hc_pane_t3_ParamLimits

0xefd9,	// (0x00086a20) main_myfav_hc_pane_t3

0x9f1e,	// (0x00081965) main_myfav_hc_pane_t4_ParamLimits

0x9f1e,	// (0x00081965) main_myfav_hc_pane_t4

0x0004,

0xf8f3,	// (0x0008733a) main_myfav_hc_pane_t_ParamLimits

0xf8f3,	// (0x0008733a) main_myfav_hc_pane_t

0x0bd0,	// (0x00078617) bg_myfav_hc_instruction_pane_g1

0xefeb,	// (0x00086a32) cell_myfav_contact_pane_g1_ParamLimits

0xefeb,	// (0x00086a32) cell_myfav_contact_pane_g1

0xefeb,	// (0x00086a32) cell_myfav_contact_pane_g2_ParamLimits

0xefeb,	// (0x00086a32) cell_myfav_contact_pane_g2

0xeff7,	// (0x00086a3e) cell_myfav_contact_pane_g3_ParamLimits

0xeff7,	// (0x00086a3e) cell_myfav_contact_pane_g3

0x08de,	// (0x00078325) cell_myfav_contact_pane_g4_ParamLimits

0x08de,	// (0x00078325) cell_myfav_contact_pane_g4

0xf004,	// (0x00086a4b) cell_myfav_contact_pane_g5_ParamLimits

0xf004,	// (0x00086a4b) cell_myfav_contact_pane_g5

0x0004,

0xf8fe,	// (0x00087345) cell_myfav_contact_pane_g_ParamLimits

0xf8fe,	// (0x00087345) cell_myfav_contact_pane_g

0x9eef,	// (0x00081936) main_myfav_hc_pane_g3_ParamLimits

0x9eef,	// (0x00081936) main_myfav_hc_pane_g3

0x4e6b,	// (0x0007c8b2) popup_adpt_find_window

0x9f48,	// (0x0008198f) afind_page_pane_ParamLimits

0x9f48,	// (0x0008198f) afind_page_pane

0x9f55,	// (0x0008199c) aid_size_cell_afind_ParamLimits

0x9f55,	// (0x0008199c) aid_size_cell_afind

0x9f6f,	// (0x000819b6) bg_popup_sub_pane_cp09_ParamLimits

0x9f6f,	// (0x000819b6) bg_popup_sub_pane_cp09

0x9f7c,	// (0x000819c3) find_pane_cp01_ParamLimits

0x9f7c,	// (0x000819c3) find_pane_cp01

0xf010,	// (0x00086a57) grid_afind_control_pane_ParamLimits

0xf010,	// (0x00086a57) grid_afind_control_pane

0x9f89,	// (0x000819d0) grid_afind_pane_ParamLimits

0x9f89,	// (0x000819d0) grid_afind_pane

0x9fa3,	// (0x000819ea) cell_afind_pane_ParamLimits

0x9fa3,	// (0x000819ea) cell_afind_pane

0x0bd0,	// (0x00078617) afind_page_pane_g1

0x9feb,	// (0x00081a32) afind_page_pane_g2

0x9ff4,	// (0x00081a3b) afind_page_pane_g3

0x0002,

0xf909,	// (0x00087350) afind_page_pane_g

0x9ffd,	// (0x00081a44) afind_page_pane_t1

0xf024,	// (0x00086a6b) cell_afind_grid_control_pane_ParamLimits

0xf024,	// (0x00086a6b) cell_afind_grid_control_pane

0xeeb3,	// (0x000868fa) bg_button_pane_cp69_ParamLimits

0xeeb3,	// (0x000868fa) bg_button_pane_cp69

0xa01d,	// (0x00081a64) cell_afind_pane_g1_ParamLimits

0xa01d,	// (0x00081a64) cell_afind_pane_g1

0xa02a,	// (0x00081a71) cell_afind_pane_t1_ParamLimits

0xa02a,	// (0x00081a71) cell_afind_pane_t1

0x0bda,	// (0x00078621) bg_button_pane_cp72

0x1cd2,	// (0x00079719) cell_afind_grid_control_pane_g1

0x767e,	// (0x0007f0c5) aid_image_placing_area_ParamLimits

0x767e,	// (0x0007f0c5) aid_image_placing_area

0x08d0,	// (0x00078317) field_vitu_entry_pane_g1_ParamLimits

0x08d0,	// (0x00078317) field_vitu_entry_pane_g1

0x08d0,	// (0x00078317) field_vitu_entry_pane_g2_ParamLimits

0x08d0,	// (0x00078317) field_vitu_entry_pane_g2

0x0001,

0xf201,	// (0x00086c48) field_vitu_entry_pane_g_ParamLimits

0xf201,	// (0x00086c48) field_vitu_entry_pane_g

0xec23,	// (0x0008666a) cell_vitu_itu_pane_g1_ParamLimits

0xe9e4,	// (0x0008642b) cell_vitu_itu_pane_t3_ParamLimits

0xe9e4,	// (0x0008642b) cell_vitu_itu_pane_t3

0xee4e,	// (0x00086895) mp4_progress_pane_t1_ParamLimits

0xee67,	// (0x000868ae) mp4_progress_pane_t2_ParamLimits

0xf84f,	// (0x00087296) mp4_progress_pane_t_ParamLimits

0xee80,	// (0x000868c7) mup_progress_pane_cp04_ParamLimits

0x9f32,	// (0x00081979) main_myfav_hc_pane_t5_ParamLimits

0x9f32,	// (0x00081979) main_myfav_hc_pane_t5

0x4bca,	// (0x0007c611) aid_zoom_text_primary

0x4e6b,	// (0x0007c8b2) popup_adpt_find_window_ParamLimits

0x8116,	// (0x0007fb5d) main_cam_set_pane

0x99b7,	// (0x000813fe) cam4_zoom_pane_ParamLimits

0x99b7,	// (0x000813fe) cam4_zoom_pane

0xa03c,	// (0x00081a83) main_cam_set_pane_g1_ParamLimits

0xa03c,	// (0x00081a83) main_cam_set_pane_g1

0xa04a,	// (0x00081a91) main_cam_set_pane_g2_ParamLimits

0xa04a,	// (0x00081a91) main_cam_set_pane_g2

0x0001,

0xf910,	// (0x00087357) main_cam_set_pane_g_ParamLimits

0xf910,	// (0x00087357) main_cam_set_pane_g

0xa056,	// (0x00081a9d) main_cam_set_pane_t1_ParamLimits

0xa056,	// (0x00081a9d) main_cam_set_pane_t1

0xa072,	// (0x00081ab9) main_cset_listscroll_pane_ParamLimits

0xa072,	// (0x00081ab9) main_cset_listscroll_pane

0xa0a4,	// (0x00081aeb) main_cset_slider_pane_ParamLimits

0xa0a4,	// (0x00081aeb) main_cset_slider_pane

0x1ce3,	// (0x0007972a) main_cset_list_pane_ParamLimits

0x1ce3,	// (0x0007972a) main_cset_list_pane

0x1cf3,	// (0x0007973a) scroll_pane_cp028

0xa0c3,	// (0x00081b0a) aid_area_touch_slider

0xa0df,	// (0x00081b26) cset_slider_pane

0xa102,	// (0x00081b49) main_cset_slider_pane_g1

0xa117,	// (0x00081b5e) main_cset_slider_pane_g2

0x0011,

0xf915,	// (0x0008735c) main_cset_slider_pane_g

0x1d44,	// (0x0007978b) main_cset_slider_pane_t1

0xa1dd,	// (0x00081c24) main_cset_slider_pane_t2

0xa1f7,	// (0x00081c3e) main_cset_slider_pane_t3

0xa211,	// (0x00081c58) main_cset_slider_pane_t4

0xa22f,	// (0x00081c76) main_cset_slider_pane_t5

0xa24d,	// (0x00081c94) main_cset_slider_pane_t6

0xa264,	// (0x00081cab) main_cset_slider_pane_t7

0x000e,

0xf93a,	// (0x00087381) main_cset_slider_pane_t

0xa372,	// (0x00081db9) cset_list_set_pane_ParamLimits

0xa372,	// (0x00081db9) cset_list_set_pane

0x1dde,	// (0x00079825) aid_position_infowindow_above

0x1de6,	// (0x0007982d) aid_position_infowindow_below

0xa38b,	// (0x00081dd2) cset_list_set_pane_g1_ParamLimits

0xa38b,	// (0x00081dd2) cset_list_set_pane_g1

0xa397,	// (0x00081dde) cset_list_set_pane_g3_ParamLimits

0xa397,	// (0x00081dde) cset_list_set_pane_g3

0x0001,

0xf959,	// (0x000873a0) cset_list_set_pane_g_ParamLimits

0xf959,	// (0x000873a0) cset_list_set_pane_g

0xa3a6,	// (0x00081ded) cset_list_set_pane_t1_ParamLimits

0xa3a6,	// (0x00081ded) cset_list_set_pane_t1

0x074a,	// (0x00078191) list_highlight_pane_cp021_ParamLimits

0x074a,	// (0x00078191) list_highlight_pane_cp021

0x1797,	// (0x000791de) cset_slider_pane_g1

0x17a9,	// (0x000791f0) cset_slider_pane_g2

0x17a0,	// (0x000791e7) cset_slider_pane_g3

0x0002,

0xf95e,	// (0x000873a5) cset_slider_pane_g

0xa3bb,	// (0x00081e02) aid_area_touch_cam4_zoom

0xa3c3,	// (0x00081e0a) cam4_zoom_cont_pane

0xa3cb,	// (0x00081e12) cam4_zoom_pane_g1

0xa3d3,	// (0x00081e1a) cam4_zoom_pane_g2

0xa3db,	// (0x00081e22) cam4_zoom_pane_g3

0x0002,

0xf965,	// (0x000873ac) cam4_zoom_pane_g

0xa3e3,	// (0x00081e2a) cam4_zoom_cont_pane_g1

0xa3ec,	// (0x00081e33) cam4_zoom_cont_pane_g2

0xa3f5,	// (0x00081e3c) cam4_zoom_cont_pane_g3

0x0002,

0xf96c,	// (0x000873b3) cam4_zoom_cont_pane_g

0x97dd,	// (0x00081224) call4_image_pane_ParamLimits

0x97dd,	// (0x00081224) call4_image_pane

0x983c,	// (0x00081283) call4_windows_conf_pane_ParamLimits

0x987f,	// (0x000812c6) popup_call4_audio_in_window_ParamLimits

0x987f,	// (0x000812c6) popup_call4_audio_in_window

0xd36a,	// (0x00084db1) bg_popup_call2_act_pane_cp02

0xeebf,	// (0x00086906) call4_list_conf_pane

0x0bd0,	// (0x00078617) call4_image_pane_g1

0x0bd0,	// (0x00078617) call4_image_pane_g2

0x0001,

0xf3dd,	// (0x00086e24) call4_image_pane_g

0x1e00,	// (0x00079847) list_single_graphic_popup_conf4_pane_ParamLimits

0x1e00,	// (0x00079847) list_single_graphic_popup_conf4_pane

0xd36a,	// (0x00084db1) list_highlight_pane_cp022

0x1e13,	// (0x0007985a) list_single_graphic_popup_conf4_pane_g1

0x1390,	// (0x00078dd7) list_single_graphic_popup_conf4_pane_g2

0x0001,

0xf973,	// (0x000873ba) list_single_graphic_popup_conf4_pane_g

0x1e1b,	// (0x00079862) list_single_graphic_popup_conf4_pane_t1

0x5c04,	// (0x0007d64b) popup_vtel_slider_window_ParamLimits

0x5c04,	// (0x0007d64b) popup_vtel_slider_window

0xeea1,	// (0x000868e8) dialer2_ne_pane_t2_ParamLimits

0xeea1,	// (0x000868e8) dialer2_ne_pane_t2

0x0001,

0xf854,	// (0x0008729b) dialer2_ne_pane_t_ParamLimits

0xf854,	// (0x0008729b) dialer2_ne_pane_t

0x074a,	// (0x00078191) bg_popup_sub_pane_cp010_ParamLimits

0x074a,	// (0x00078191) bg_popup_sub_pane_cp010

0xa3fe,	// (0x00081e45) popup_vtel_slider_window_g1_ParamLimits

0xa3fe,	// (0x00081e45) popup_vtel_slider_window_g1

0xa40a,	// (0x00081e51) popup_vtel_slider_window_g2_ParamLimits

0xa40a,	// (0x00081e51) popup_vtel_slider_window_g2

0x0003,

0xf978,	// (0x000873bf) popup_vtel_slider_window_g_ParamLimits

0xf978,	// (0x000873bf) popup_vtel_slider_window_g

0xa452,	// (0x00081e99) vtel_slider_pane_ParamLimits

0xa452,	// (0x00081e99) vtel_slider_pane

0xa461,	// (0x00081ea8) vtel_slider_pane_g1_ParamLimits

0xa461,	// (0x00081ea8) vtel_slider_pane_g1

0xa46e,	// (0x00081eb5) vtel_slider_pane_g2_ParamLimits

0xa46e,	// (0x00081eb5) vtel_slider_pane_g2

0xa47b,	// (0x00081ec2) vtel_slider_pane_g3_ParamLimits

0xa47b,	// (0x00081ec2) vtel_slider_pane_g3

0xa461,	// (0x00081ea8) vtel_slider_pane_g4_ParamLimits

0xa461,	// (0x00081ea8) vtel_slider_pane_g4

0xa488,	// (0x00081ecf) vtel_slider_pane_g5_ParamLimits

0xa488,	// (0x00081ecf) vtel_slider_pane_g5

0x0004,

0xf981,	// (0x000873c8) vtel_slider_pane_g_ParamLimits

0xf981,	// (0x000873c8) vtel_slider_pane_g

0x8116,	// (0x0007fb5d) main_gallery2_pane

0x9bf1,	// (0x00081638) aid_size_row_itut2_dropdow_list_ParamLimits

0x9bf1,	// (0x00081638) aid_size_row_itut2_dropdow_list

0x9c5b,	// (0x000816a2) grid_vitu2_function_top_pane_ParamLimits

0x9c5b,	// (0x000816a2) grid_vitu2_function_top_pane

0x9caf,	// (0x000816f6) popup_vitu2_dropdown_list_window_ParamLimits

0x9caf,	// (0x000816f6) popup_vitu2_dropdown_list_window

0x9ccd,	// (0x00081714) popup_vitu2_match_list_window

0xa495,	// (0x00081edc) cell_vitu2_function_top_pane_ParamLimits

0xa495,	// (0x00081edc) cell_vitu2_function_top_pane

0xa4af,	// (0x00081ef6) cell_vitu2_function_top_pane_cp01_ParamLimits

0xa4af,	// (0x00081ef6) cell_vitu2_function_top_pane_cp01

0xa4cb,	// (0x00081f12) cell_vitu2_function_top_wide_pane_ParamLimits

0xa4cb,	// (0x00081f12) cell_vitu2_function_top_wide_pane

0x8116,	// (0x0007fb5d) bg_button_pane_cp012

0xa4e9,	// (0x00081f30) cell_vitu2_function_top_pane_g1

0xa4fd,	// (0x00081f44) bg_button_pane_cp013_ParamLimits

0xa4fd,	// (0x00081f44) bg_button_pane_cp013

0xa519,	// (0x00081f60) cell_vitu2_function_top_wide_pane_g1_ParamLimits

0xa519,	// (0x00081f60) cell_vitu2_function_top_wide_pane_g1

0x4f62,	// (0x0007c9a9) bg_popup_sub_pane_cp20

0xa531,	// (0x00081f78) list_vitu2_match_list_pane

0xef3a,	// (0x00086981) bg_popup_sub_pane_cp20_g1

0xef42,	// (0x00086989) bg_popup_sub_pane_cp20_g2

0x0de1,	// (0x00078828) bg_popup_sub_pane_cp20_g3

0xef4a,	// (0x00086991) bg_popup_sub_pane_cp20_g4

0x0dc1,	// (0x00078808) bg_popup_sub_pane_cp20_g5

0x1e31,	// (0x00079878) bg_popup_sub_pane_cp20_g6

0xef5a,	// (0x000869a1) bg_popup_sub_pane_cp20_g7

0xef62,	// (0x000869a9) bg_popup_sub_pane_cp20_g8

0xef6a,	// (0x000869b1) bg_popup_sub_pane_cp20_g9

0x0008,

0xf98c,	// (0x000873d3) bg_popup_sub_pane_cp20_g

0xa549,	// (0x00081f90) list_vitu2_match_list_item_pane_ParamLimits

0xa549,	// (0x00081f90) list_vitu2_match_list_item_pane

0xa55b,	// (0x00081fa2) list_vitu2_match_list_item_pane_t1

0x4f7c,	// (0x0007c9c3) bg_popup_sub_pane_cp21

0x0b90,	// (0x000785d7) grid_vitu2_dropdown_list_pane

0xa569,	// (0x00081fb0) cell_vitu2_dropdown_list_char_pane_ParamLimits

0xa569,	// (0x00081fb0) cell_vitu2_dropdown_list_char_pane

0xa58c,	// (0x00081fd3) cell_vitu2_dropdown_list_ctrl_pane_ParamLimits

0xa58c,	// (0x00081fd3) cell_vitu2_dropdown_list_ctrl_pane

0x1e4b,	// (0x00079892) cell_vitu2_dropdown_list_char_pane_g1

0x1e42,	// (0x00079889) cell_vitu2_dropdown_list_char_pane_g2

0x1e39,	// (0x00079880) cell_vitu2_dropdown_list_char_pane_g3

0x0002,

0xf99f,	// (0x000873e6) cell_vitu2_dropdown_list_char_pane_g

0xa5b6,	// (0x00081ffd) cell_vitu2_dropdown_list_char_pane_t1

0xa5c4,	// (0x0008200b) cell_vitu2_dropdown_list_ctrl_pane_g1_ParamLimits

0xa5c4,	// (0x0008200b) cell_vitu2_dropdown_list_ctrl_pane_g1

0xa5d1,	// (0x00082018) cell_vitu2_dropdown_list_ctrl_pane_g2_ParamLimits

0xa5d1,	// (0x00082018) cell_vitu2_dropdown_list_ctrl_pane_g2

0xa5de,	// (0x00082025) cell_vitu2_dropdown_list_ctrl_pane_g3_ParamLimits

0xa5de,	// (0x00082025) cell_vitu2_dropdown_list_ctrl_pane_g3

0xa5eb,	// (0x00082032) cell_vitu2_dropdown_list_ctrl_pane_g4_ParamLimits

0xa5eb,	// (0x00082032) cell_vitu2_dropdown_list_ctrl_pane_g4

0xf077,	// (0x00086abe) cell_vitu2_dropdown_list_ctrl_pane_g5_ParamLimits

0xf077,	// (0x00086abe) cell_vitu2_dropdown_list_ctrl_pane_g5

0x0004,

0xf9a6,	// (0x000873ed) cell_vitu2_dropdown_list_ctrl_pane_g_ParamLimits

0xf9a6,	// (0x000873ed) cell_vitu2_dropdown_list_ctrl_pane_g

0xa607,	// (0x0008204e) aid_size_cell_gallery2_ParamLimits

0xa607,	// (0x0008204e) aid_size_cell_gallery2

0xa621,	// (0x00082068) grid_gallery2_pane_ParamLimits

0xa621,	// (0x00082068) grid_gallery2_pane

0xa638,	// (0x0008207f) scroll_pane_cp029_ParamLimits

0xa638,	// (0x0008207f) scroll_pane_cp029

0xa648,	// (0x0008208f) cell_gallery2_pane_ParamLimits

0xa648,	// (0x0008208f) cell_gallery2_pane

0x1e54,	// (0x0007989b) cell_gallery2_pane_g2

0xa69d,	// (0x000820e4) cell_gallery2_pane_g3

0x1e5c,	// (0x000798a3) cell_gallery2_pane_g4

0x1e64,	// (0x000798ab) cell_gallery2_pane_g5

0x0b90,	// (0x000785d7) grid_highlight_pane_cp10

0x9ccd,	// (0x00081714) popup_vitu2_match_list_window_ParamLimits

0x9bff,	// (0x00081646) popup_vitu2_query_window_ParamLimits

0x9bff,	// (0x00081646) popup_vitu2_query_window

0x4f7c,	// (0x0007c9c3) bg_vitu2_candi_button_pane

0x1e4b,	// (0x00079892) cell_vitu2_dropdown_list_char_pane_g1_copy1

0x1e42,	// (0x00079889) cell_vitu2_dropdown_list_char_pane_g2_copy1

0x1e39,	// (0x00079880) cell_vitu2_dropdown_list_char_pane_g2_copy2

0xa6a5,	// (0x000820ec) bg_button_pane_cp015

0xa6b7,	// (0x000820fe) bg_button_pane_cp016

0xa6ca,	// (0x00082111) bg_button_pane_cp017

0xe228,	// (0x00085c6f) bg_popup_sub_pane_cp22

0x1e6c,	// (0x000798b3) popup_vitu2_query_window_g1

0xa70f,	// (0x00082156) popup_vitu2_query_window_g2

0x0002,

0xf9b1,	// (0x000873f8) popup_vitu2_query_window_g

0xa72e,	// (0x00082175) popup_vitu2_query_window_t1_ParamLimits

0xa72e,	// (0x00082175) popup_vitu2_query_window_t1

0xa763,	// (0x000821aa) popup_vitu2_query_window_t2_ParamLimits

0xa763,	// (0x000821aa) popup_vitu2_query_window_t2

0xa775,	// (0x000821bc) popup_vitu2_query_window_t3_ParamLimits

0xa775,	// (0x000821bc) popup_vitu2_query_window_t3

0xa79d,	// (0x000821e4) popup_vitu2_query_window_t4_ParamLimits

0xa79d,	// (0x000821e4) popup_vitu2_query_window_t4

0xa7be,	// (0x00082205) popup_vitu2_query_window_t5_ParamLimits

0xa7be,	// (0x00082205) popup_vitu2_query_window_t5

0x0006,

0xf9b8,	// (0x000873ff) popup_vitu2_query_window_t_ParamLimits

0xf9b8,	// (0x000873ff) popup_vitu2_query_window_t

0x1cdb,	// (0x00079722) main_cset_text_pane

0xa0c3,	// (0x00081b0a) aid_area_touch_slider_ParamLimits

0xa0df,	// (0x00081b26) cset_slider_pane_ParamLimits

0xa102,	// (0x00081b49) main_cset_slider_pane_g1_ParamLimits

0xa117,	// (0x00081b5e) main_cset_slider_pane_g2_ParamLimits

0x1cfc,	// (0x00079743) main_cset_slider_pane_g3_ParamLimits

0x1cfc,	// (0x00079743) main_cset_slider_pane_g3

0xa12c,	// (0x00081b73) main_cset_slider_pane_g4_ParamLimits

0xa12c,	// (0x00081b73) main_cset_slider_pane_g4

0xa13b,	// (0x00081b82) main_cset_slider_pane_g5_ParamLimits

0xa13b,	// (0x00081b82) main_cset_slider_pane_g5

0xa149,	// (0x00081b90) main_cset_slider_pane_g6_ParamLimits

0xa149,	// (0x00081b90) main_cset_slider_pane_g6

0xf915,	// (0x0008735c) main_cset_slider_pane_g_ParamLimits

0x1d44,	// (0x0007978b) main_cset_slider_pane_t1_ParamLimits

0xa1dd,	// (0x00081c24) main_cset_slider_pane_t2_ParamLimits

0xa1f7,	// (0x00081c3e) main_cset_slider_pane_t3_ParamLimits

0xa211,	// (0x00081c58) main_cset_slider_pane_t4_ParamLimits

0xa22f,	// (0x00081c76) main_cset_slider_pane_t5_ParamLimits

0xa24d,	// (0x00081c94) main_cset_slider_pane_t6_ParamLimits

0xa264,	// (0x00081cab) main_cset_slider_pane_t7_ParamLimits

0xa292,	// (0x00081cd9) main_cset_slider_pane_t8_ParamLimits

0xa292,	// (0x00081cd9) main_cset_slider_pane_t8

0xa2ba,	// (0x00081d01) main_cset_slider_pane_t9_ParamLimits

0xa2ba,	// (0x00081d01) main_cset_slider_pane_t9

0xa2e2,	// (0x00081d29) main_cset_slider_pane_t10_ParamLimits

0xa2e2,	// (0x00081d29) main_cset_slider_pane_t10

0xa30a,	// (0x00081d51) main_cset_slider_pane_t11_ParamLimits

0xa30a,	// (0x00081d51) main_cset_slider_pane_t11

0xa334,	// (0x00081d7b) main_cset_slider_pane_t12_ParamLimits

0xa334,	// (0x00081d7b) main_cset_slider_pane_t12

0xa353,	// (0x00081d9a) main_cset_slider_pane_t13_ParamLimits

0xa353,	// (0x00081d9a) main_cset_slider_pane_t13

0xf93a,	// (0x00087381) main_cset_slider_pane_t_ParamLimits

0xd36a,	// (0x00084db1) bg_popup_sub_pane_cp011

0x1e78,	// (0x000798bf) main_cset_text_pane_g1

0x1e80,	// (0x000798c7) main_cset_text_pane_t1

0x1e8e,	// (0x000798d5) main_cset_text_pane_t2

0x1e9c,	// (0x000798e3) main_cset_text_pane_t3

0x1eaa,	// (0x000798f1) main_cset_text_pane_t4

0x1eb8,	// (0x000798ff) main_cset_text_pane_t5

0x1ec6,	// (0x0007990d) main_cset_text_pane_t6

0x1ed4,	// (0x0007991b) main_cset_text_pane_t7

0x0006,

0xf9c7,	// (0x0008740e) main_cset_text_pane_t

0x4f7c,	// (0x0007c9c3) main_cam4_burst_pane

0x4f7c,	// (0x0007c9c3) main_cam5_pane

0xa00b,	// (0x00081a52) bg_button_pane_cp019

0xa014,	// (0x00081a5b) bg_button_pane_cp020

0x1d08,	// (0x0007974f) main_cset_slider_pane_g7_ParamLimits

0x1d08,	// (0x0007974f) main_cset_slider_pane_g7

0x1d14,	// (0x0007975b) main_cset_slider_pane_g8_ParamLimits

0x1d14,	// (0x0007975b) main_cset_slider_pane_g8

0xa15d,	// (0x00081ba4) main_cset_slider_pane_g9_ParamLimits

0xa15d,	// (0x00081ba4) main_cset_slider_pane_g9

0xa169,	// (0x00081bb0) main_cset_slider_pane_g10_ParamLimits

0xa169,	// (0x00081bb0) main_cset_slider_pane_g10

0xa175,	// (0x00081bbc) main_cset_slider_pane_g11_ParamLimits

0xa175,	// (0x00081bbc) main_cset_slider_pane_g11

0xa181,	// (0x00081bc8) main_cset_slider_pane_g12_ParamLimits

0xa181,	// (0x00081bc8) main_cset_slider_pane_g12

0xa18d,	// (0x00081bd4) main_cset_slider_pane_g13_ParamLimits

0xa18d,	// (0x00081bd4) main_cset_slider_pane_g13

0xa19b,	// (0x00081be2) main_cset_slider_pane_g14_ParamLimits

0xa19b,	// (0x00081be2) main_cset_slider_pane_g14

0xa1a9,	// (0x00081bf0) main_cset_slider_pane_g15_ParamLimits

0xa1a9,	// (0x00081bf0) main_cset_slider_pane_g15

0x1d6c,	// (0x000797b3) main_cset_slider_pane_t14_ParamLimits

0x1d6c,	// (0x000797b3) main_cset_slider_pane_t14

0x1da5,	// (0x000797ec) main_cset_slider_pane_t15_ParamLimits

0x1da5,	// (0x000797ec) main_cset_slider_pane_t15

0xa835,	// (0x0008227c) aid_cam4_burst_size_cell_ParamLimits

0xa835,	// (0x0008227c) aid_cam4_burst_size_cell

0xa851,	// (0x00082298) grid_cam4_burst_pane_ParamLimits

0xa851,	// (0x00082298) grid_cam4_burst_pane

0xa881,	// (0x000822c8) linegrid_cam4_burst_pane_ParamLimits

0xa881,	// (0x000822c8) linegrid_cam4_burst_pane

0xa8a1,	// (0x000822e8) scroll_pane_cp30_ParamLimits

0xa8a1,	// (0x000822e8) scroll_pane_cp30

0xa8ad,	// (0x000822f4) cell_cam4_burst_pane_ParamLimits

0xa8ad,	// (0x000822f4) cell_cam4_burst_pane

0x1eee,	// (0x00079935) linegrid_cam4_burst_pane_g1_ParamLimits

0x1eee,	// (0x00079935) linegrid_cam4_burst_pane_g1

0xa8e9,	// (0x00082330) linegrid_cam4_burst_pane_g2_ParamLimits

0xa8e9,	// (0x00082330) linegrid_cam4_burst_pane_g2

0x1efb,	// (0x00079942) linegrid_cam4_burst_pane_g3_ParamLimits

0x1efb,	// (0x00079942) linegrid_cam4_burst_pane_g3

0x0002,

0xf9d6,	// (0x0008741d) linegrid_cam4_burst_pane_g_ParamLimits

0xf9d6,	// (0x0008741d) linegrid_cam4_burst_pane_g

0xa8fa,	// (0x00082341) linegrid_cam4_burst_pane_g3_copy1_ParamLimits

0xa8fa,	// (0x00082341) linegrid_cam4_burst_pane_g3_copy1

0x1f08,	// (0x0007994f) linegrid_cam4_burst_pane_g4_ParamLimits

0x1f08,	// (0x0007994f) linegrid_cam4_burst_pane_g4

0xa914,	// (0x0008235b) linegrid_cam4_burst_pane_g5_ParamLimits

0xa914,	// (0x0008235b) linegrid_cam4_burst_pane_g5

0xa925,	// (0x0008236c) linegrid_cam4_burst_pane_g6_ParamLimits

0xa925,	// (0x0008236c) linegrid_cam4_burst_pane_g6

0x1f15,	// (0x0007995c) linegrid_cam4_burst_pane_g7_ParamLimits

0x1f15,	// (0x0007995c) linegrid_cam4_burst_pane_g7

0xa936,	// (0x0008237d) cell_cam4_burst_pane_g1

0x1f2e,	// (0x00079975) main_cam5_pane_t1_ParamLimits

0x1f2e,	// (0x00079975) main_cam5_pane_t1

0x1f40,	// (0x00079987) main_cam5_pane_t2_ParamLimits

0x1f40,	// (0x00079987) main_cam5_pane_t2

0x1f52,	// (0x00079999) main_cam5_pane_t3_ParamLimits

0x1f52,	// (0x00079999) main_cam5_pane_t3

0x1f64,	// (0x000799ab) main_cam5_pane_t4_ParamLimits

0x1f64,	// (0x000799ab) main_cam5_pane_t4

0x1f7c,	// (0x000799c3) main_cam5_pane_t5_ParamLimits

0x1f7c,	// (0x000799c3) main_cam5_pane_t5

0x1f90,	// (0x000799d7) main_cam5_pane_t6_ParamLimits

0x1f90,	// (0x000799d7) main_cam5_pane_t6

0x1fa4,	// (0x000799eb) main_cam5_pane_t7_ParamLimits

0x1fa4,	// (0x000799eb) main_cam5_pane_t7

0x1fb6,	// (0x000799fd) main_cam5_pane_t8_ParamLimits

0x1fb6,	// (0x000799fd) main_cam5_pane_t8

0x1fd2,	// (0x00079a19) main_cam5_pane_t9_ParamLimits

0x1fd2,	// (0x00079a19) main_cam5_pane_t9

0x1fe4,	// (0x00079a2b) main_cam5_pane_t10_ParamLimits

0x1fe4,	// (0x00079a2b) main_cam5_pane_t10

0x1ff6,	// (0x00079a3d) main_cam5_pane_t11_ParamLimits

0x1ff6,	// (0x00079a3d) main_cam5_pane_t11

0x2008,	// (0x00079a4f) main_cam5_pane_t12_ParamLimits

0x2008,	// (0x00079a4f) main_cam5_pane_t12

0x201d,	// (0x00079a64) main_cam5_pane_t13_ParamLimits

0x201d,	// (0x00079a64) main_cam5_pane_t13

0x000c,

0xf9e2,	// (0x00087429) main_cam5_pane_t_ParamLimits

0xf9e2,	// (0x00087429) main_cam5_pane_t

0x4f21,	// (0x0007c968) popup_scut_keymap_window_ParamLimits

0x4f21,	// (0x0007c968) popup_scut_keymap_window

0xa949,	// (0x00082390) aid_size_cell_brow_shortcut

0x0b90,	// (0x000785d7) bg_popup_window_pane_cp010

0xa955,	// (0x0008239c) grid_scut_pane

0xa961,	// (0x000823a8) cell_scut_pane_ParamLimits

0xa961,	// (0x000823a8) cell_scut_pane

0xa978,	// (0x000823bf) cell_scut_pane_g1

0x203a,	// (0x00079a81) cell_scut_pane_t1

0x2049,	// (0x00079a90) cell_scut_pane_t2

0xa981,	// (0x000823c8) cell_scut_pane_t3

0x0002,

0xf9fd,	// (0x00087444) cell_scut_pane_t

0x88fd,	// (0x00080344) main_mup3_pane_g8_ParamLimits

0x88fd,	// (0x00080344) main_mup3_pane_g8

0x9bff,	// (0x00081646) area_vitu2_query_pane_ParamLimits

0x9bff,	// (0x00081646) area_vitu2_query_pane

0xa6dd,	// (0x00082124) input_focus_pane_cp08

0x2058,	// (0x00079a9f) area_vitu2_query_pane_g1

0xa98f,	// (0x000823d6) area_vitu2_query_pane_g2

0x0001,

0xfa04,	// (0x0008744b) area_vitu2_query_pane_g

0xa9a0,	// (0x000823e7) area_vitu2_query_pane_t1_ParamLimits

0xa9a0,	// (0x000823e7) area_vitu2_query_pane_t1

0xa9b4,	// (0x000823fb) area_vitu2_query_pane_t2_ParamLimits

0xa9b4,	// (0x000823fb) area_vitu2_query_pane_t2

0xa9c8,	// (0x0008240f) area_vitu2_query_pane_t3_ParamLimits

0xa9c8,	// (0x0008240f) area_vitu2_query_pane_t3

0x2064,	// (0x00079aab) area_vitu2_query_pane_t4_ParamLimits

0x2064,	// (0x00079aab) area_vitu2_query_pane_t4

0x208c,	// (0x00079ad3) area_vitu2_query_pane_t5_ParamLimits

0x208c,	// (0x00079ad3) area_vitu2_query_pane_t5

0x20b4,	// (0x00079afb) area_vitu2_query_pane_t6_ParamLimits

0x20b4,	// (0x00079afb) area_vitu2_query_pane_t6

0x0006,

0xfa09,	// (0x00087450) area_vitu2_query_pane_t_ParamLimits

0xfa09,	// (0x00087450) area_vitu2_query_pane_t

0xa9f0,	// (0x00082437) bg_button_pane_cp018

0xa9fe,	// (0x00082445) bg_button_pane_cp021

0xaa0a,	// (0x00082451) bg_button_pane_cp022

0xaa1b,	// (0x00082462) input_focus_pane_cp09

0x149f,	// (0x00078ee6) aid_size_touch_mv_arrow_left

0x14ca,	// (0x00078f11) aid_size_touch_mv_arrow_right

0xa1c1,	// (0x00081c08) main_cset_slider_pane_g16_ParamLimits

0xa1c1,	// (0x00081c08) main_cset_slider_pane_g16

0xa1cf,	// (0x00081c16) main_cset_slider_pane_g17_ParamLimits

0xa1cf,	// (0x00081c16) main_cset_slider_pane_g17

0xa936,	// (0x0008237d) cell_cam4_burst_pane_g1_ParamLimits

0xd36a,	// (0x00084db1) compa_mode_pane

0xa416,	// (0x00081e5d) popup_vtel_slider_window_g3_ParamLimits

0xa416,	// (0x00081e5d) popup_vtel_slider_window_g3

0xa42a,	// (0x00081e71) popup_vtel_slider_window_g4_ParamLimits

0xa42a,	// (0x00081e71) popup_vtel_slider_window_g4

0xa43e,	// (0x00081e85) popup_vtel_slider_window_t1_ParamLimits

0xa43e,	// (0x00081e85) popup_vtel_slider_window_t1

0x4f7c,	// (0x0007c9c3) main_cl_pane

0x81bc,	// (0x0007fc03) popup_imed_adjust2_window_ParamLimits

0xe228,	// (0x00085c6f) bg_tb_trans_pane_cp05_ParamLimits

0xeb58,	// (0x0008659f) popup_imed_adjust2_window_g1_ParamLimits

0xeb67,	// (0x000865ae) popup_imed_adjust2_window_g2_ParamLimits

0xeb67,	// (0x000865ae) popup_imed_adjust2_window_g2

0xeb73,	// (0x000865ba) popup_imed_adjust2_window_g3_ParamLimits

0xeb73,	// (0x000865ba) popup_imed_adjust2_window_g3

0x0002,

0xf77f,	// (0x000871c6) popup_imed_adjust2_window_g_ParamLimits

0xf77f,	// (0x000871c6) popup_imed_adjust2_window_g

0xeb7f,	// (0x000865c6) popup_imed_adjust2_window_t1_ParamLimits

0xeb97,	// (0x000865de) slider_imed_adjust_pane_ParamLimits

0xebab,	// (0x000865f2) slider_imed_adjust_pane_g1_ParamLimits

0xebbb,	// (0x00086602) slider_imed_adjust_pane_g2_ParamLimits

0xebcb,	// (0x00086612) slider_imed_adjust_pane_g3_ParamLimits

0xebdc,	// (0x00086623) slider_imed_adjust_pane_g4_ParamLimits

0xf786,	// (0x000871cd) slider_imed_adjust_pane_g_ParamLimits

0x9960,	// (0x000813a7) aid_touch_area_cam4_ParamLimits

0x9960,	// (0x000813a7) aid_touch_area_cam4

0x9970,	// (0x000813b7) battery_pane_cp01

0x99f7,	// (0x0008143e) main_camera4_pane_g6_ParamLimits

0x99f7,	// (0x0008143e) main_camera4_pane_g6

0x9a15,	// (0x0008145c) main_camera4_pane_t2_ParamLimits

0x9a15,	// (0x0008145c) main_camera4_pane_t2

0x0001,

0xf888,	// (0x000872cf) main_camera4_pane_t_ParamLimits

0xf888,	// (0x000872cf) main_camera4_pane_t

0x9a96,	// (0x000814dd) aid_touch_area_vid4_ParamLimits

0x9a96,	// (0x000814dd) aid_touch_area_vid4

0x9ad6,	// (0x0008151d) main_video4_pane_g5_ParamLimits

0x9ad6,	// (0x0008151d) main_video4_pane_g5

0x9afa,	// (0x00081541) vid4_progress_pane_ParamLimits

0x9afa,	// (0x00081541) vid4_progress_pane

0x1d38,	// (0x0007977f) main_cset_slider_pane_g18_ParamLimits

0x1d38,	// (0x0007977f) main_cset_slider_pane_g18

0x1f22,	// (0x00079969) cell_cam4_burst_pane_g2_ParamLimits

0x1f22,	// (0x00079969) cell_cam4_burst_pane_g2

0x0001,

0xf9dd,	// (0x00087424) cell_cam4_burst_pane_g_ParamLimits

0xf9dd,	// (0x00087424) cell_cam4_burst_pane_g

0xaa2c,	// (0x00082473) bg_cl_pane_ParamLimits

0xaa2c,	// (0x00082473) bg_cl_pane

0xaa38,	// (0x0008247f) cl_header_pane_ParamLimits

0xaa38,	// (0x0008247f) cl_header_pane

0xaa44,	// (0x0008248b) cl_listscroll_pane_ParamLimits

0xaa44,	// (0x0008248b) cl_listscroll_pane

0x2100,	// (0x00079b47) bg_cl_pane_g1

0x2108,	// (0x00079b4f) bg_cl_pane_g2

0x2110,	// (0x00079b57) bg_cl_pane_g3

0x2118,	// (0x00079b5f) bg_cl_pane_g4

0x2120,	// (0x00079b67) bg_cl_pane_g5

0x2128,	// (0x00079b6f) bg_cl_pane_g6

0x2130,	// (0x00079b77) bg_cl_pane_g7

0x2138,	// (0x00079b7f) bg_cl_pane_g8

0x2140,	// (0x00079b87) bg_cl_pane_g9

0x0008,

0xfa18,	// (0x0008745f) bg_cl_pane_g

0xaa50,	// (0x00082497) aid_height_cl_leading_ParamLimits

0xaa50,	// (0x00082497) aid_height_cl_leading

0xaa5c,	// (0x000824a3) aid_height_cl_text_ParamLimits

0xaa5c,	// (0x000824a3) aid_height_cl_text

0xd8d7,	// (0x0008531e) bg_cl_header_pane_ParamLimits

0xd8d7,	// (0x0008531e) bg_cl_header_pane

0xaa74,	// (0x000824bb) cl_header_pane_g1_ParamLimits

0xaa74,	// (0x000824bb) cl_header_pane_g1

0xaa81,	// (0x000824c8) cl_header_pane_t1_ParamLimits

0xaa81,	// (0x000824c8) cl_header_pane_t1

0x2148,	// (0x00079b8f) cl_list_pane

0x1cf3,	// (0x0007973a) hc_scroll_pane_cp01

0x0dc1,	// (0x00078808) bg_cl_header_pane_g1

0xef3a,	// (0x00086981) bg_cl_header_pane_g2

0x0de1,	// (0x00078828) bg_cl_header_pane_g3

0xef4a,	// (0x00086991) bg_cl_header_pane_g4

0xef42,	// (0x00086989) bg_cl_header_pane_g5

0x1e31,	// (0x00079878) bg_cl_header_pane_g6

0xef62,	// (0x000869a9) bg_cl_header_pane_g7

0xef6a,	// (0x000869b1) bg_cl_header_pane_g8

0xef5a,	// (0x000869a1) bg_cl_header_pane_g9

0x0008,

0xfa2b,	// (0x00087472) bg_cl_header_pane_g

0xaa93,	// (0x000824da) hc_cl_list_double_graphic_heading_pane_ParamLimits

0xaa93,	// (0x000824da) hc_cl_list_double_graphic_heading_pane

0xaaa7,	// (0x000824ee) hc_cl_list_single_graphic_pane_ParamLimits

0xaaa7,	// (0x000824ee) hc_cl_list_single_graphic_pane

0xaac1,	// (0x00082508) hc_cl_list_single_graphic_pane_g1_ParamLimits

0xaac1,	// (0x00082508) hc_cl_list_single_graphic_pane_g1

0xaacd,	// (0x00082514) hc_cl_list_single_graphic_pane_g2_ParamLimits

0xaacd,	// (0x00082514) hc_cl_list_single_graphic_pane_g2

0x0001,

0xfa3e,	// (0x00087485) hc_cl_list_single_graphic_pane_g_ParamLimits

0xfa3e,	// (0x00087485) hc_cl_list_single_graphic_pane_g

0xaae1,	// (0x00082528) hc_cl_list_single_graphic_pane_t1_ParamLimits

0xaae1,	// (0x00082528) hc_cl_list_single_graphic_pane_t1

0xaac1,	// (0x00082508) hc_cl_list_double_graphic_heading_pane_g1_ParamLimits

0xaac1,	// (0x00082508) hc_cl_list_double_graphic_heading_pane_g1

0xaaf6,	// (0x0008253d) hc_cl_list_double_graphic_heading_pane_g2_ParamLimits

0xaaf6,	// (0x0008253d) hc_cl_list_double_graphic_heading_pane_g2

0xab0a,	// (0x00082551) hc_cl_list_double_graphic_heading_pane_g3_ParamLimits

0xab0a,	// (0x00082551) hc_cl_list_double_graphic_heading_pane_g3

0x0002,

0xfa43,	// (0x0008748a) hc_cl_list_double_graphic_heading_pane_g_ParamLimits

0xfa43,	// (0x0008748a) hc_cl_list_double_graphic_heading_pane_g

0xab1e,	// (0x00082565) hc_cl_list_double_graphic_heading_pane_t1_ParamLimits

0xab1e,	// (0x00082565) hc_cl_list_double_graphic_heading_pane_t1

0xab33,	// (0x0008257a) hc_cl_list_double_graphic_heading_pane_t2_ParamLimits

0xab33,	// (0x0008257a) hc_cl_list_double_graphic_heading_pane_t2

0x0001,

0xfa4a,	// (0x00087491) hc_cl_list_double_graphic_heading_pane_t_ParamLimits

0xfa4a,	// (0x00087491) hc_cl_list_double_graphic_heading_pane_t

0xab50,	// (0x00082597) vid4_progress_pane_g1

0xab60,	// (0x000825a7) vid4_progress_pane_g2

0xab70,	// (0x000825b7) vid4_progress_pane_g3

0xab82,	// (0x000825c9) vid4_progress_pane_g4

0x0004,

0xfa4f,	// (0x00087496) vid4_progress_pane_g

0xab9a,	// (0x000825e1) vid4_progress_pane_t1

0xabb0,	// (0x000825f7) vid4_progress_pane_t2

0x0002,

0xfa5a,	// (0x000874a1) vid4_progress_pane_t

0xabdb,	// (0x00082622) wait_bar_pane_cp07

0xe44e,	// (0x00085e95) blid_firmament_pane_ParamLimits

0xe491,	// (0x00085ed8) popup_blid_sat_info2_window_g1

0xe4b5,	// (0x00085efc) popup_blid_sat_info2_window_t3

0xe4c3,	// (0x00085f0a) popup_blid_sat_info2_window_t4

0xe4d1,	// (0x00085f18) popup_blid_sat_info2_window_t5

0xe4df,	// (0x00085f26) popup_blid_sat_info2_window_t6

0xe4ef,	// (0x00085f36) popup_blid_sat_info2_window_t7

0xe4fd,	// (0x00085f44) popup_blid_sat_info2_window_t8

0xe50b,	// (0x00085f52) popup_blid_sat_info2_window_t9

0xe519,	// (0x00085f60) popup_blid_sat_info2_window_t10

0xe5da,	// (0x00086021) aid_firma_cardinal_ParamLimits

0xe5ee,	// (0x00086035) blid_firmament_pane_t1_ParamLimits

0xe605,	// (0x0008604c) blid_firmament_pane_t2_ParamLimits

0xe61c,	// (0x00086063) blid_firmament_pane_t3_ParamLimits

0xe633,	// (0x0008607a) blid_firmament_pane_t4_ParamLimits

0xf678,	// (0x000870bf) blid_firmament_pane_t_ParamLimits

0xe64a,	// (0x00086091) blid_sat_info_pane_ParamLimits

0x8116,	// (0x0007fb5d) main_cam_set_pane_ParamLimits

0x8fcc,	// (0x00080a13) aid_size_cell_colour_35_ParamLimits

0x8fe6,	// (0x00080a2d) aid_size_cell_colour_112_ParamLimits

0x8ffd,	// (0x00080a44) aid_size_cell_effect_ParamLimits

0x074a,	// (0x00078191) bg_tb_trans_pane_cp02_ParamLimits

0xea7b,	// (0x000864c2) heading_imed_pane_ParamLimits

0x9017,	// (0x00080a5e) listscroll_imed_pane_ParamLimits

0xd8f7,	// (0x0008533e) popup_call2_audio_first_window_g5_ParamLimits

0xd8f7,	// (0x0008533e) popup_call2_audio_first_window_g5

0x9648,	// (0x0008108f) aid_size_touch_image3_arrow_left_ParamLimits

0x9648,	// (0x0008108f) aid_size_touch_image3_arrow_left

0x965e,	// (0x000810a5) aid_size_touch_image3_arrow_right_ParamLimits

0x965e,	// (0x000810a5) aid_size_touch_image3_arrow_right

0xabc5,	// (0x0008260c) vid4_progress_pane_t3

0x9199,	// (0x00080be0) main_hwr_training_symbol_option_pane_ParamLimits

0x9199,	// (0x00080be0) main_hwr_training_symbol_option_pane

0xed88,	// (0x000867cf) popup_hwr_training_preview_window_ParamLimits

0xed88,	// (0x000867cf) popup_hwr_training_preview_window

0x91fa,	// (0x00080c41) hwr_training_navi_pane_g5_ParamLimits

0x91fa,	// (0x00080c41) hwr_training_navi_pane_g5

0xef28,	// (0x0008696f) popup_char_count_window

0x4f62,	// (0x0007c9a9) bg_popup_sub_pane_cp20_ParamLimits

0xa531,	// (0x00081f78) list_vitu2_match_list_pane_ParamLimits

0xa53d,	// (0x00081f84) vitu2_page_scroll_pane_ParamLimits

0xa53d,	// (0x00081f84) vitu2_page_scroll_pane

0x216b,	// (0x00079bb2) list_single_hwr_training_symbol_option_pane_ParamLimits

0x216b,	// (0x00079bb2) list_single_hwr_training_symbol_option_pane

0x217e,	// (0x00079bc5) list_single_hwr_training_symbol_option_pane_g1

0x2186,	// (0x00079bcd) list_single_hwr_training_symbol_option_pane_t1

0x2194,	// (0x00079bdb) bg_button_pane_cp023

0x219d,	// (0x00079be4) bg_button_pane_cp024

0x21d0,	// (0x00079c17) vitu2_page_scroll_pane_g1

0x21d8,	// (0x00079c1f) vitu2_page_scroll_pane_g2

0x0001,

0xfa61,	// (0x000874a8) vitu2_page_scroll_pane_g

0x21e0,	// (0x00079c27) vitu2_page_scroll_pane_t1

0xe679,	// (0x000860c0) popup_char_count_window_g1

0x21ef,	// (0x00079c36) popup_char_count_window_g2

0xf033,	// (0x00086a7a) popup_char_count_window_g3

0x0002,

0xfa66,	// (0x000874ad) popup_char_count_window_g

0x21f8,	// (0x00079c3f) popup_char_count_window_t1

0x4f7c,	// (0x0007c9c3) main_vded2_pane

0xeb44,	// (0x0008658b) aid_size_cell_imed_line

0xeb4e,	// (0x00086595) grid_imed_line_width_pane

0x9b66,	// (0x000815ad) vid4_indicators_pane_g4

0x2206,	// (0x00079c4d) cell_imed_line_width_pane_ParamLimits

0x2206,	// (0x00079c4d) cell_imed_line_width_pane

0x221a,	// (0x00079c61) cell_imed_line_width_pane_g1

0x2223,	// (0x00079c6a) cell_imed_line_width_pane_g2

0x0001,

0xfa6d,	// (0x000874b4) cell_imed_line_width_pane_g

0xac00,	// (0x00082647) main_vded2_pane_g1_ParamLimits

0xac00,	// (0x00082647) main_vded2_pane_g1

0xac0d,	// (0x00082654) main_vded2_pane_g2_ParamLimits

0xac0d,	// (0x00082654) main_vded2_pane_g2

0x0001,

0xfa72,	// (0x000874b9) main_vded2_pane_g_ParamLimits

0xfa72,	// (0x000874b9) main_vded2_pane_g

0xac1b,	// (0x00082662) vded2_slider_pane_ParamLimits

0xac1b,	// (0x00082662) vded2_slider_pane

0xac28,	// (0x0008266f) aid_size_touch_vded2_end

0xac32,	// (0x00082679) aid_size_touch_vded2_playhead

0x222b,	// (0x00079c72) aid_size_touch_vded2_start

0x2233,	// (0x00079c7a) vded2_slider_bg_pane

0x223c,	// (0x00079c83) vded2_slider_pane_g1

0x2245,	// (0x00079c8c) vded2_slider_pane_g2

0xac3a,	// (0x00082681) vded2_slider_pane_g3

0x0002,

0xfa77,	// (0x000874be) vded2_slider_pane_g

0x224d,	// (0x00079c94) vded2_slider_bg_pane_g1

0x2256,	// (0x00079c9d) vded2_slider_bg_pane_g2

0x225f,	// (0x00079ca6) vded2_slider_bg_pane_g3

0x0002,

0xfa7e,	// (0x000874c5) vded2_slider_bg_pane_g

0x73dd,	// (0x0007ee24) aid_postcard_touch_down_pane_ParamLimits

0x73dd,	// (0x0007ee24) aid_postcard_touch_down_pane

0x73ed,	// (0x0007ee34) aid_postcard_touch_up_pane_ParamLimits

0x73ed,	// (0x0007ee34) aid_postcard_touch_up_pane

0x4f7c,	// (0x0007c9c3) main_blid2_pane

0x814b,	// (0x0007fb92) popup_blid2_search_window

0xd36a,	// (0x00084db1) blid2_gps_pane

0xd36a,	// (0x00084db1) blid2_navig_pane

0xd36a,	// (0x00084db1) blid2_search_pane

0xd36a,	// (0x00084db1) blid2_tripm_pane

0xac43,	// (0x0008268a) blid2_search_pane_g1_ParamLimits

0xac43,	// (0x0008268a) blid2_search_pane_g1

0xac53,	// (0x0008269a) blid2_search_pane_t1_ParamLimits

0xac53,	// (0x0008269a) blid2_search_pane_t1

0xac65,	// (0x000826ac) aid_size_cell_blid2_gps_ParamLimits

0xac65,	// (0x000826ac) aid_size_cell_blid2_gps

0xac75,	// (0x000826bc) blid2_gps_pane_g1_ParamLimits

0xac75,	// (0x000826bc) blid2_gps_pane_g1

0xac81,	// (0x000826c8) grid_blid2_satellite_pane_ParamLimits

0xac81,	// (0x000826c8) grid_blid2_satellite_pane

0xac91,	// (0x000826d8) blid2_navig_pane_g1_ParamLimits

0xac91,	// (0x000826d8) blid2_navig_pane_g1

0xac9d,	// (0x000826e4) blid2_navig_pane_t1_ParamLimits

0xac9d,	// (0x000826e4) blid2_navig_pane_t1

0xacaf,	// (0x000826f6) blid2_navig_pane_t2_ParamLimits

0xacaf,	// (0x000826f6) blid2_navig_pane_t2

0x0001,

0xfa85,	// (0x000874cc) blid2_navig_pane_t_ParamLimits

0xfa85,	// (0x000874cc) blid2_navig_pane_t

0xacc1,	// (0x00082708) blid2_navig_ring_pane_ParamLimits

0xacc1,	// (0x00082708) blid2_navig_ring_pane

0xacd1,	// (0x00082718) blid2_speed_pane_ParamLimits

0xacd1,	// (0x00082718) blid2_speed_pane

0xacdd,	// (0x00082724) blid2_tripm_pane_g1_ParamLimits

0xacdd,	// (0x00082724) blid2_tripm_pane_g1

0xaced,	// (0x00082734) blid2_tripm_pane_g2_ParamLimits

0xaced,	// (0x00082734) blid2_tripm_pane_g2

0xacf9,	// (0x00082740) blid2_tripm_pane_g3_ParamLimits

0xacf9,	// (0x00082740) blid2_tripm_pane_g3

0xad05,	// (0x0008274c) blid2_tripm_pane_g4_ParamLimits

0xad05,	// (0x0008274c) blid2_tripm_pane_g4

0xad11,	// (0x00082758) blid2_tripm_pane_g5_ParamLimits

0xad11,	// (0x00082758) blid2_tripm_pane_g5

0x0005,

0xfa8a,	// (0x000874d1) blid2_tripm_pane_g_ParamLimits

0xfa8a,	// (0x000874d1) blid2_tripm_pane_g

0xad2d,	// (0x00082774) blid2_tripm_pane_t1_ParamLimits

0xad2d,	// (0x00082774) blid2_tripm_pane_t1

0xad41,	// (0x00082788) blid2_tripm_pane_t2_ParamLimits

0xad41,	// (0x00082788) blid2_tripm_pane_t2

0xad53,	// (0x0008279a) blid2_tripm_pane_t3_ParamLimits

0xad53,	// (0x0008279a) blid2_tripm_pane_t3

0x0003,

0xfa97,	// (0x000874de) blid2_tripm_pane_t_ParamLimits

0xfa97,	// (0x000874de) blid2_tripm_pane_t

0xad85,	// (0x000827cc) cell_blid2_satellite_pane_ParamLimits

0xad85,	// (0x000827cc) cell_blid2_satellite_pane

0xad9f,	// (0x000827e6) cell_blid2_satellite_pane_g1

0x2268,	// (0x00079caf) cell_blid2_satellite_pane_t1

0x0bd0,	// (0x00078617) blid2_speed_pane_g1

0x2276,	// (0x00079cbd) blid2_speed_pane_t1

0x2284,	// (0x00079ccb) blid2_speed_pane_t2

0x0001,

0xfaa0,	// (0x000874e7) blid2_speed_pane_t

0x0bd0,	// (0x00078617) blid2_navig_ring_pane_g1

0xada8,	// (0x000827ef) blid2_navig_ring_pane_g2

0xadb0,	// (0x000827f7) blid2_navig_ring_pane_g3

0xadb8,	// (0x000827ff) blid2_navig_ring_pane_g4

0xadc0,	// (0x00082807) blid2_navig_ring_pane_g5

0x0004,

0xfaa5,	// (0x000874ec) blid2_navig_ring_pane_g

0xd36a,	// (0x00084db1) bg_popup_window_pane_cp011

0x2292,	// (0x00079cd9) popup_blid2_search_window_g1

0x229a,	// (0x00079ce1) popup_blid2_search_window_t1

0x22a8,	// (0x00079cef) popup_blid2_search_window_t2

0x0001,

0xfab0,	// (0x000874f7) popup_blid2_search_window_t

0x0cd0,	// (0x00078717) main_browser_pane_g1

0x0964,	// (0x000783ab) main_browser_pane_ParamLimits

0x8116,	// (0x0007fb5d) bg_button_pane_cp011_ParamLimits

0x9dde,	// (0x00081825) cell_vitu2_function_pane_g1_ParamLimits

0xe228,	// (0x00085c6f) bg_popup_sub_pane_cp22_ParamLimits

0xa6dd,	// (0x00082124) input_focus_pane_cp08_ParamLimits

0xa6f4,	// (0x0008213b) popup_vitu2_query_button_pane_ParamLimits

0xa6f4,	// (0x0008213b) popup_vitu2_query_button_pane

0xa705,	// (0x0008214c) popup_vitu2_query_input_button_pane

0x1e6c,	// (0x000798b3) popup_vitu2_query_window_g1_ParamLimits

0xa70f,	// (0x00082156) popup_vitu2_query_window_g2_ParamLimits

0xf9b1,	// (0x000873f8) popup_vitu2_query_window_g_ParamLimits

0xd36a,	// (0x00084db1) bg_button_pane_cp026

0xadc8,	// (0x0008280f) popup_vitu2_query_input_button_pane_g1

0xd36a,	// (0x00084db1) bg_button_pane_cp025

0x22b6,	// (0x00079cfd) popup_vitu2_query_button_pane_t1

0x861e,	// (0x00080065) main_mp3_pane_t6

0x862e,	// (0x00080075) popup_slider_window_cp01

0x9a4b,	// (0x00081492) cam4_battery_pane

0x9b25,	// (0x0008156c) cam4_battery_pane_cp02

0xab48,	// (0x0008258f) cam4_battery_pane_cp01

0xab48,	// (0x0008258f) cam4_battery_pane_cp03

0xe3c3,	// (0x00085e0a) cam4_battery_pane_g1

0x0bd0,	// (0x00078617) cam4_battery_pane_g2

0x0001,

0xfab5,	// (0x000874fc) cam4_battery_pane_g

0xe527,	// (0x00085f6e) popup_blid_sat_info2_window_t11

0x149f,	// (0x00078ee6) aid_size_touch_mv_arrow_left_ParamLimits

0x14ca,	// (0x00078f11) aid_size_touch_mv_arrow_right_ParamLimits

0x1528,	// (0x00078f6f) navi_pane_g1_ParamLimits

0x1534,	// (0x00078f7b) navi_pane_g2_ParamLimits

0x1562,	// (0x00078fa9) navi_pane_g3_ParamLimits

0xf379,	// (0x00086dc0) navi_pane_g_ParamLimits

0x702b,	// (0x0007ea72) navi_pane_mv_t1_ParamLimits

0x9023,	// (0x00080a6a) grid_imed_effect_pane_ParamLimits

0x5ac4,	// (0x0007d50b) aid_placing_vt_slider_lsc

0x0c1f,	// (0x00078666) aid_placing_vt_slider_prt

0x074a,	// (0x00078191) bg_tb_trans_pane_cp01_ParamLimits

0xe7ce,	// (0x00086215) popup_image_details_window_g1_ParamLimits

0xe7e1,	// (0x00086228) popup_image_details_window_g2_ParamLimits

0xe7f6,	// (0x0008623d) popup_image_details_window_g3_ParamLimits

0xe7f6,	// (0x0008623d) popup_image_details_window_g3

0xf6b8,	// (0x000870ff) popup_image_details_window_g_ParamLimits

0xe80a,	// (0x00086251) popup_image_details_window_t1_ParamLimits

0xe81c,	// (0x00086263) popup_image_details_window_t2_ParamLimits

0xe835,	// (0x0008627c) popup_image_details_window_t3_ParamLimits

0xe849,	// (0x00086290) popup_image_details_window_t4_ParamLimits

0xe864,	// (0x000862ab) popup_image_details_window_t5_ParamLimits

0xf6bf,	// (0x00087106) popup_image_details_window_t_ParamLimits

0xaa68,	// (0x000824af) cl_header_name_pane_ParamLimits

0xaa68,	// (0x000824af) cl_header_name_pane

0xadd0,	// (0x00082817) cl_header_name_pane_t1_ParamLimits

0xadd0,	// (0x00082817) cl_header_name_pane_t1

0xade7,	// (0x0008282e) cl_header_name_pane_t2_ParamLimits

0xade7,	// (0x0008282e) cl_header_name_pane_t2

0xae11,	// (0x00082858) cl_header_name_pane_t3_ParamLimits

0xae11,	// (0x00082858) cl_header_name_pane_t3

0x0002,

0xfaba,	// (0x00087501) cl_header_name_pane_t_ParamLimits

0xfaba,	// (0x00087501) cl_header_name_pane_t

0x15f1,	// (0x00079038) navi_pane_mv_g2_ParamLimits

0xef02,	// (0x00086949) field_vitu2_entry_pane_g1_ParamLimits

0xef0e,	// (0x00086955) field_vitu2_entry_pane_g2_ParamLimits

0xef1a,	// (0x00086961) field_vitu2_entry_pane_g3_ParamLimits

0xef1a,	// (0x00086961) field_vitu2_entry_pane_g3

0xf8ba,	// (0x00087301) field_vitu2_entry_pane_g_ParamLimits

0x9d6c,	// (0x000817b3) cell_vitu2_itu_pane_g1_ParamLimits

0x9d84,	// (0x000817cb) cell_vitu2_itu_pane_g2_ParamLimits

0x9d84,	// (0x000817cb) cell_vitu2_itu_pane_g2

0x0001,

0xf8c6,	// (0x0008730d) cell_vitu2_itu_pane_g_ParamLimits

0xf8c6,	// (0x0008730d) cell_vitu2_itu_pane_g

0x8116,	// (0x0007fb5d) bg_vkb2_func_pane_cp05_ParamLimits

0x8116,	// (0x0007fb5d) bg_vkb2_func_pane_cp05

0x8116,	// (0x0007fb5d) bg_vkb2_func_pane_cp03

0x8116,	// (0x0007fb5d) bg_vkb2_func_pane_cp04

0x8116,	// (0x0007fb5d) bg_vkb2_func_pane_cp10_ParamLimits

0x8116,	// (0x0007fb5d) bg_vkb2_func_pane_cp10

0xaa0a,	// (0x00082451) bg_vkb2_func_pane_cp08

0xa9f0,	// (0x00082437) bg_vkb2_func_pane_cp06

0xa9fe,	// (0x00082445) bg_vkb2_func_pane_cp07

0x21a6,	// (0x00079bed) bg_vkb2_func_pane_cp11_ParamLimits

0x21a6,	// (0x00079bed) bg_vkb2_func_pane_cp11

0x21bb,	// (0x00079c02) bg_vkb2_func_pane_cp12_ParamLimits

0x21bb,	// (0x00079c02) bg_vkb2_func_pane_cp12

0xd36a,	// (0x00084db1) bg_vkb2_func_pane_cp09

0xef3a,	// (0x00086981) bg_vkb2_func_pane_g1

0x0de1,	// (0x00078828) bg_vkb2_func_pane_g2

0xef42,	// (0x00086989) bg_vkb2_func_pane_g3

0xef4a,	// (0x00086991) bg_vkb2_func_pane_g4

0x1e31,	// (0x00079878) bg_vkb2_func_pane_g5

0xef62,	// (0x000869a9) bg_vkb2_func_pane_g6

0xef6a,	// (0x000869b1) bg_vkb2_func_pane_g7

0xef5a,	// (0x000869a1) bg_vkb2_func_pane_g8

0x0dc1,	// (0x00078808) bg_vkb2_func_pane_g9

0x0008,

0xfac1,	// (0x00087508) bg_vkb2_func_pane_g

0xad1f,	// (0x00082766) blid2_tripm_pane_g6_ParamLimits

0xad1f,	// (0x00082766) blid2_tripm_pane_g6

0xee46,	// (0x0008688d) mp4_progress_pane_g1

0xad79,	// (0x000827c0) blid2_tripm_values_pane_ParamLimits

0xad79,	// (0x000827c0) blid2_tripm_values_pane

0xae36,	// (0x0008287d) blid2_tripm_values_pane_t1

0xae44,	// (0x0008288b) blid2_tripm_values_pane_t2

0xae52,	// (0x00082899) blid2_tripm_values_pane_t3

0xae60,	// (0x000828a7) blid2_tripm_values_pane_t4

0xae6e,	// (0x000828b5) blid2_tripm_values_pane_t5

0xae7c,	// (0x000828c3) blid2_tripm_values_pane_t6

0xae8a,	// (0x000828d1) blid2_tripm_values_pane_t7

0xae98,	// (0x000828df) blid2_tripm_values_pane_t8

0xaea6,	// (0x000828ed) blid2_tripm_values_pane_t9

0x0008,

0xfad4,	// (0x0008751b) blid2_tripm_values_pane_t

0x5b04,	// (0x0007d54b) call_video_pane_t1_ParamLimits

0x5b25,	// (0x0007d56c) call_video_pane_t2_ParamLimits

0xf222,	// (0x00086c69) call_video_pane_t_ParamLimits

0x7327,	// (0x0007ed6e) msg_header_pane_g1_ParamLimits

0x17e4,	// (0x0007922b) msg_header_pane_g2_ParamLimits

0x17e4,	// (0x0007922b) msg_header_pane_g2

0x0001,

0xf41c,	// (0x00086e63) msg_header_pane_g_ParamLimits

0xf41c,	// (0x00086e63) msg_header_pane_g

0x0964,	// (0x000783ab) main_clock2_pane_ParamLimits

0x8d9d,	// (0x000807e4) grid_clock2_toolbar_pane_ParamLimits

0x8d9d,	// (0x000807e4) grid_clock2_toolbar_pane

0x8d9d,	// (0x000807e4) listscroll_clock2_pane_ParamLimits

0x8d9d,	// (0x000807e4) listscroll_clock2_pane

0x8e4d,	// (0x00080894) main_clock2_pane_t3_ParamLimits

0x8e4d,	// (0x00080894) main_clock2_pane_t3

0x8e5f,	// (0x000808a6) main_clock2_pane_t4_ParamLimits

0x8e5f,	// (0x000808a6) main_clock2_pane_t4

0x22c4,	// (0x00079d0b) cell_clock2_toolbar_pane

0x22cc,	// (0x00079d13) cell_clock2_toolbar_pane_cp01

0x22cc,	// (0x00079d13) cell_clock2_toolbar_pane_cp02

0x22d4,	// (0x00079d1b) cell_clock2_toolbar_pane_cp03

0x22dc,	// (0x00079d23) list_clock2_pane

0x1424,	// (0x00078e6b) scroll_pane_cp10

0x22e4,	// (0x00079d2b) list_single_clock2_pane_ParamLimits

0x22e4,	// (0x00079d2b) list_single_clock2_pane

0x0b90,	// (0x000785d7) list_highlight_pane_cp08

0x22f1,	// (0x00079d38) list_single_clock2_pane_t1

0x22ff,	// (0x00079d46) list_single_clock2_pane_t2

0x0001,

0xfae7,	// (0x0008752e) list_single_clock2_pane_t

0xd36a,	// (0x00084db1) bg_button_pane_cp10

0x230d,	// (0x00079d54) cell_clock2_toolbar_pane_g1

0x734b,	// (0x0007ed92) aid_main_viewer_pane_g1_ParamLimits

0x734b,	// (0x0007ed92) aid_main_viewer_pane_g1

0x7357,	// (0x0007ed9e) aid_main_viewer_pane_g2_ParamLimits

0x7357,	// (0x0007ed9e) aid_main_viewer_pane_g2

0x7363,	// (0x0007edaa) aid_main_viewer_pane_g3_ParamLimits

0x7363,	// (0x0007edaa) aid_main_viewer_pane_g3

0x7374,	// (0x0007edbb) aid_main_viewer_pane_g4_ParamLimits

0x7374,	// (0x0007edbb) aid_main_viewer_pane_g4

0x0003,

0xf42d,	// (0x00086e74) aid_main_viewer_pane_g_ParamLimits

0xf42d,	// (0x00086e74) aid_main_viewer_pane_g

0x8109,	// (0x0007fb50) main_calc_pane_ParamLimits

0x8124,	// (0x0007fb6b) main_dialer2_pane_ParamLimits

0x4f7c,	// (0x0007c9c3) main_cam6_pane

0x4f7c,	// (0x0007c9c3) main_vid6_pane

0x8da9,	// (0x000807f0) listscroll_gen_pane_cp06_ParamLimits

0x8da9,	// (0x000807f0) listscroll_gen_pane_cp06

0x8e71,	// (0x000808b8) main_clock2_pane_t5_ParamLimits

0x8e71,	// (0x000808b8) main_clock2_pane_t5

0x8ebe,	// (0x00080905) aid_call2_pane_cp10_ParamLimits

0x8ed0,	// (0x00080917) aid_call_pane_cp10_ParamLimits

0x1493,	// (0x00078eda) popup_clock_analogue_window_cp10_g1_ParamLimits

0x1493,	// (0x00078eda) popup_clock_analogue_window_cp10_g2_ParamLimits

0x8ee2,	// (0x00080929) popup_clock_analogue_window_cp10_g3_ParamLimits

0x8ee2,	// (0x00080929) popup_clock_analogue_window_cp10_g4_ParamLimits

0x1493,	// (0x00078eda) popup_clock_analogue_window_cp10_g5_ParamLimits

0xf774,	// (0x000871bb) popup_clock_analogue_window_cp10_g_ParamLimits

0x8ef8,	// (0x0008093f) popup_clock_analogue_window_cp10_t1_ParamLimits

0x95f5,	// (0x0008103c) cell_dialer2_keypad_pane_g2_ParamLimits

0x95f5,	// (0x0008103c) cell_dialer2_keypad_pane_g2

0x0001,

0xf859,	// (0x000872a0) cell_dialer2_keypad_pane_g_ParamLimits

0xf859,	// (0x000872a0) cell_dialer2_keypad_pane_g

0x9611,	// (0x00081058) cell_dialer2_keypad_pane_t1

0xa0b0,	// (0x00081af7) main_cset_text2_pane_ParamLimits

0xa0b0,	// (0x00081af7) main_cset_text2_pane

0x2058,	// (0x00079a9f) area_vitu2_query_pane_g1_ParamLimits

0xa98f,	// (0x000823d6) area_vitu2_query_pane_g2_ParamLimits

0xfa04,	// (0x0008744b) area_vitu2_query_pane_g_ParamLimits

0x20dc,	// (0x00079b23) area_vitu2_query_pane_t7_ParamLimits

0x20dc,	// (0x00079b23) area_vitu2_query_pane_t7

0xa9f0,	// (0x00082437) bg_button_pane_cp018_ParamLimits

0xa9fe,	// (0x00082445) bg_button_pane_cp021_ParamLimits

0xaa0a,	// (0x00082451) bg_button_pane_cp022_ParamLimits

0xaa0a,	// (0x00082451) bg_vkb2_func_pane_cp08_ParamLimits

0xa9f0,	// (0x00082437) bg_vkb2_func_pane_cp06_ParamLimits

0xa9fe,	// (0x00082445) bg_vkb2_func_pane_cp07_ParamLimits

0xaa1b,	// (0x00082462) input_focus_pane_cp09_ParamLimits

0xaeb4,	// (0x000828fb) cam6_autofocus_pane_ParamLimits

0xaeb4,	// (0x000828fb) cam6_autofocus_pane

0xaed6,	// (0x0008291d) cam6_image_uncrop_pane_ParamLimits

0xaed6,	// (0x0008291d) cam6_image_uncrop_pane

0xaf03,	// (0x0008294a) cam6_indi_pane_ParamLimits

0xaf03,	// (0x0008294a) cam6_indi_pane

0xaf1d,	// (0x00082964) cam6_mode_pane_ParamLimits

0xaf1d,	// (0x00082964) cam6_mode_pane

0xaf31,	// (0x00082978) cam6_timer_pane_ParamLimits

0xaf31,	// (0x00082978) cam6_timer_pane

0xaf42,	// (0x00082989) cam6_zoom_pane_ParamLimits

0xaf42,	// (0x00082989) cam6_zoom_pane

0xaf5a,	// (0x000829a1) cam6_mode_pane_g1_ParamLimits

0xaf5a,	// (0x000829a1) cam6_mode_pane_g1

0xaf66,	// (0x000829ad) cam6_mode_pane_g2_ParamLimits

0xaf66,	// (0x000829ad) cam6_mode_pane_g2

0xaf72,	// (0x000829b9) cam6_mode_pane_g3_ParamLimits

0xaf72,	// (0x000829b9) cam6_mode_pane_g3

0xaf7e,	// (0x000829c5) cam6_mode_pane_g4_ParamLimits

0xaf7e,	// (0x000829c5) cam6_mode_pane_g4

0x0003,

0xfaec,	// (0x00087533) cam6_mode_pane_g_ParamLimits

0xfaec,	// (0x00087533) cam6_mode_pane_g

0xee93,	// (0x000868da) bg_tb_trans_pane_cp08_ParamLimits

0xee93,	// (0x000868da) bg_tb_trans_pane_cp08

0x2315,	// (0x00079d5c) cam6_battery_pane_ParamLimits

0x2315,	// (0x00079d5c) cam6_battery_pane

0x232b,	// (0x00079d72) cam6_indi_pane_g1_ParamLimits

0x232b,	// (0x00079d72) cam6_indi_pane_g1

0x233d,	// (0x00079d84) cam6_indi_pane_g2_ParamLimits

0x233d,	// (0x00079d84) cam6_indi_pane_g2

0x234f,	// (0x00079d96) cam6_indi_pane_g3_ParamLimits

0x234f,	// (0x00079d96) cam6_indi_pane_g3

0x0002,

0xfaf5,	// (0x0008753c) cam6_indi_pane_g_ParamLimits

0xfaf5,	// (0x0008753c) cam6_indi_pane_g

0x2361,	// (0x00079da8) cam6_indi_pane_t1_ParamLimits

0x2361,	// (0x00079da8) cam6_indi_pane_t1

0x9ba1,	// (0x000815e8) cam6_autofocus_pane_g1

0x9b99,	// (0x000815e0) cam6_autofocus_pane_g2

0x9bb1,	// (0x000815f8) cam6_autofocus_pane_g3

0x9ba9,	// (0x000815f0) cam6_autofocus_pane_g4

0x0003,

0xfafc,	// (0x00087543) cam6_autofocus_pane_g

0x2387,	// (0x00079dce) cam6_timer_pane_g1

0x238f,	// (0x00079dd6) cam6_timer_pane_t1

0x239d,	// (0x00079de4) cam6_zoom_cont_pane

0x23a5,	// (0x00079dec) cam6_zoom_pane_g1

0x23ad,	// (0x00079df4) cam6_zoom_pane_g2

0xaf8a,	// (0x000829d1) cam6_zoom_pane_g3

0x0002,

0xfb05,	// (0x0008754c) cam6_zoom_pane_g

0x0bd0,	// (0x00078617) cam6_battery_pane_g1

0x0bd0,	// (0x00078617) cam6_battery_pane_g2

0x0001,

0xf3dd,	// (0x00086e24) cam6_battery_pane_g

0x23b5,	// (0x00079dfc) cam6_zoom_cont_pane_g1

0x23be,	// (0x00079e05) cam6_zoom_cont_pane_g2

0x23c7,	// (0x00079e0e) cam6_zoom_cont_pane_g3

0x0002,

0xfb0c,	// (0x00087553) cam6_zoom_cont_pane_g

0xafa7,	// (0x000829ee) cam6_mode_pane_cp_ParamLimits

0xafa7,	// (0x000829ee) cam6_mode_pane_cp

0xafbb,	// (0x00082a02) cam6_zoom_pane_cp_ParamLimits

0xafbb,	// (0x00082a02) cam6_zoom_pane_cp

0xafd3,	// (0x00082a1a) vid6_image_uncrop_cif_pane_ParamLimits

0xafd3,	// (0x00082a1a) vid6_image_uncrop_cif_pane

0xafff,	// (0x00082a46) vid6_image_uncrop_nhd_pane_ParamLimits

0xafff,	// (0x00082a46) vid6_image_uncrop_nhd_pane

0xb01c,	// (0x00082a63) vid6_image_uncrop_vga_pane_ParamLimits

0xb01c,	// (0x00082a63) vid6_image_uncrop_vga_pane

0xb03b,	// (0x00082a82) vid6_image_uncrop_wvga_pane_ParamLimits

0xb03b,	// (0x00082a82) vid6_image_uncrop_wvga_pane

0xb058,	// (0x00082a9f) vid6_indi_pane_ParamLimits

0xb058,	// (0x00082a9f) vid6_indi_pane

0xee93,	// (0x000868da) bg_tb_trans_pane_cp09_ParamLimits

0xee93,	// (0x000868da) bg_tb_trans_pane_cp09

0x23df,	// (0x00079e26) cam6_battery_pane_cp_ParamLimits

0x23df,	// (0x00079e26) cam6_battery_pane_cp

0x23eb,	// (0x00079e32) vid6_indi_pane_g1_ParamLimits

0x23eb,	// (0x00079e32) vid6_indi_pane_g1

0x23fd,	// (0x00079e44) vid6_indi_pane_g2_ParamLimits

0x23fd,	// (0x00079e44) vid6_indi_pane_g2

0x240f,	// (0x00079e56) vid6_indi_pane_g3_ParamLimits

0x240f,	// (0x00079e56) vid6_indi_pane_g3

0x2424,	// (0x00079e6b) vid6_indi_pane_g4_ParamLimits

0x2424,	// (0x00079e6b) vid6_indi_pane_g4

0x2439,	// (0x00079e80) vid6_indi_pane_g5_ParamLimits

0x2439,	// (0x00079e80) vid6_indi_pane_g5

0x0004,

0xfb13,	// (0x0008755a) vid6_indi_pane_g_ParamLimits

0xfb13,	// (0x0008755a) vid6_indi_pane_g

0x2453,	// (0x00079e9a) vid6_indi_pane_t1_ParamLimits

0x2453,	// (0x00079e9a) vid6_indi_pane_t1

0x2469,	// (0x00079eb0) vid6_indi_pane_t2_ParamLimits

0x2469,	// (0x00079eb0) vid6_indi_pane_t2

0x2491,	// (0x00079ed8) vid6_indi_pane_t3_ParamLimits

0x2491,	// (0x00079ed8) vid6_indi_pane_t3

0x24b9,	// (0x00079f00) vid6_indi_pane_t4_ParamLimits

0x24b9,	// (0x00079f00) vid6_indi_pane_t4

0x0003,

0xfb1e,	// (0x00087565) vid6_indi_pane_t_ParamLimits

0xfb1e,	// (0x00087565) vid6_indi_pane_t

0x24dd,	// (0x00079f24) wait_bar_pane_cp08

0xb07b,	// (0x00082ac2) main_cset_text2_pane_t1_ParamLimits

0xb07b,	// (0x00082ac2) main_cset_text2_pane_t1

0xaf92,	// (0x000829d9) listscroll_gen_pane_cp06_t1_ParamLimits

0xaf92,	// (0x000829d9) listscroll_gen_pane_cp06_t1

0x4f7c,	// (0x0007c9c3) main_cam6_set_pane

0xf077,	// (0x00086abe) bg_tb_trans_pane_cp06_ParamLimits

0x9a53,	// (0x0008149a) cam4_indicators_pane_g1_ParamLimits

0x9a64,	// (0x000814ab) cam4_indicators_pane_g2_ParamLimits

0xf896,	// (0x000872dd) cam4_indicators_pane_g_ParamLimits

0x9a7c,	// (0x000814c3) cam4_indicators_pane_t1_ParamLimits

0x8116,	// (0x0007fb5d) bg_tb_trans_pane_cp07_ParamLimits

0x9b2d,	// (0x00081574) vid4_indicators_pane_g1_ParamLimits

0x9b41,	// (0x00081588) vid4_indicators_pane_g2_ParamLimits

0x9b55,	// (0x0008159c) vid4_indicators_pane_g3_ParamLimits

0x9b66,	// (0x000815ad) vid4_indicators_pane_g4_ParamLimits

0xf8a8,	// (0x000872ef) vid4_indicators_pane_g_ParamLimits

0x9b82,	// (0x000815c9) vid4_indicators_pane_t1_ParamLimits

0xab50,	// (0x00082597) vid4_progress_pane_g1_ParamLimits

0xab60,	// (0x000825a7) vid4_progress_pane_g2_ParamLimits

0xab70,	// (0x000825b7) vid4_progress_pane_g3_ParamLimits

0xab82,	// (0x000825c9) vid4_progress_pane_g4_ParamLimits

0xfa4f,	// (0x00087496) vid4_progress_pane_g_ParamLimits

0xab9a,	// (0x000825e1) vid4_progress_pane_t1_ParamLimits

0xabb0,	// (0x000825f7) vid4_progress_pane_t2_ParamLimits

0xabc5,	// (0x0008260c) vid4_progress_pane_t3_ParamLimits

0xfa5a,	// (0x000874a1) vid4_progress_pane_t_ParamLimits

0xabdb,	// (0x00082622) wait_bar_pane_cp07_ParamLimits

0xb0b2,	// (0x00082af9) main_cam6_set_pane_g2_ParamLimits

0xb0b2,	// (0x00082af9) main_cam6_set_pane_g2

0xb0be,	// (0x00082b05) main_cset6_listscroll_pane_ParamLimits

0xb0be,	// (0x00082b05) main_cset6_listscroll_pane

0xb0e9,	// (0x00082b30) main_cset6_slider_pane_ParamLimits

0xb0e9,	// (0x00082b30) main_cset6_slider_pane

0xb0f5,	// (0x00082b3c) main_cset6_text2_pane_ParamLimits

0xb0f5,	// (0x00082b3c) main_cset6_text2_pane

0x24ec,	// (0x00079f33) main_cset6_text_pane

0x24f4,	// (0x00079f3b) main_cset_list_pane_copy1_ParamLimits

0x24f4,	// (0x00079f3b) main_cset_list_pane_copy1

0x2504,	// (0x00079f4b) scroll_pane_cp028_copy1

0xb108,	// (0x00082b4f) cset_list_set_pane_copy1

0xb11e,	// (0x00082b65) aid_position_infowindow_above_copy1

0xb126,	// (0x00082b6d) aid_position_infowindow_below_copy1

0x3d62,	// (0x0007b7a9) cset_list_set_pane_g1_copy1

0x250d,	// (0x00079f54) cset_list_set_pane_g3_copy1_ParamLimits

0x250d,	// (0x00079f54) cset_list_set_pane_g3_copy1

0x251c,	// (0x00079f63) cset_list_set_pane_t1_copy1_ParamLimits

0x251c,	// (0x00079f63) cset_list_set_pane_t1_copy1

0x074a,	// (0x00078191) list_highlight_pane_cp021_copy1_ParamLimits

0x074a,	// (0x00078191) list_highlight_pane_cp021_copy1

0x2531,	// (0x00079f78) cset6_slider_pane_ParamLimits

0x2531,	// (0x00079f78) cset6_slider_pane

0x255d,	// (0x00079fa4) main_cset6_slider_pane_g1_ParamLimits

0x255d,	// (0x00079fa4) main_cset6_slider_pane_g1

0xb12e,	// (0x00082b75) main_cset6_slider_pane_g2_ParamLimits

0xb12e,	// (0x00082b75) main_cset6_slider_pane_g2

0x2585,	// (0x00079fcc) main_cset6_slider_pane_g3_ParamLimits

0x2585,	// (0x00079fcc) main_cset6_slider_pane_g3

0xb156,	// (0x00082b9d) main_cset6_slider_pane_g4_ParamLimits

0xb156,	// (0x00082b9d) main_cset6_slider_pane_g4

0xb162,	// (0x00082ba9) main_cset6_slider_pane_g5_ParamLimits

0xb162,	// (0x00082ba9) main_cset6_slider_pane_g5

0x1d08,	// (0x0007974f) main_cset6_slider_pane_g7_ParamLimits

0x1d08,	// (0x0007974f) main_cset6_slider_pane_g7

0x1d14,	// (0x0007975b) main_cset6_slider_pane_g8_ParamLimits

0x1d14,	// (0x0007975b) main_cset6_slider_pane_g8

0xb170,	// (0x00082bb7) main_cset6_slider_pane_g9_ParamLimits

0xb170,	// (0x00082bb7) main_cset6_slider_pane_g9

0xb17c,	// (0x00082bc3) main_cset6_slider_pane_g10_ParamLimits

0xb17c,	// (0x00082bc3) main_cset6_slider_pane_g10

0xb188,	// (0x00082bcf) main_cset6_slider_pane_g11_ParamLimits

0xb188,	// (0x00082bcf) main_cset6_slider_pane_g11

0xb194,	// (0x00082bdb) main_cset6_slider_pane_g12_ParamLimits

0xb194,	// (0x00082bdb) main_cset6_slider_pane_g12

0x1d20,	// (0x00079767) main_cset6_slider_pane_g13_ParamLimits

0x1d20,	// (0x00079767) main_cset6_slider_pane_g13

0x1d2c,	// (0x00079773) main_cset6_slider_pane_g14_ParamLimits

0x1d2c,	// (0x00079773) main_cset6_slider_pane_g14

0xb1a0,	// (0x00082be7) main_cset6_slider_pane_g15_ParamLimits

0xb1a0,	// (0x00082be7) main_cset6_slider_pane_g15

0xb1b8,	// (0x00082bff) main_cset6_slider_pane_g16_ParamLimits

0xb1b8,	// (0x00082bff) main_cset6_slider_pane_g16

0xb1c6,	// (0x00082c0d) main_cset6_slider_pane_g17_ParamLimits

0xb1c6,	// (0x00082c0d) main_cset6_slider_pane_g17

0x0011,

0xfb27,	// (0x0008756e) main_cset6_slider_pane_g_ParamLimits

0xfb27,	// (0x0008756e) main_cset6_slider_pane_g

0x259d,	// (0x00079fe4) main_cset6_slider_pane_t1_ParamLimits

0x259d,	// (0x00079fe4) main_cset6_slider_pane_t1

0xb1e0,	// (0x00082c27) main_cset6_slider_pane_t2_ParamLimits

0xb1e0,	// (0x00082c27) main_cset6_slider_pane_t2

0xb20b,	// (0x00082c52) main_cset6_slider_pane_t3_ParamLimits

0xb20b,	// (0x00082c52) main_cset6_slider_pane_t3

0xb236,	// (0x00082c7d) main_cset6_slider_pane_t4_ParamLimits

0xb236,	// (0x00082c7d) main_cset6_slider_pane_t4

0xb261,	// (0x00082ca8) main_cset6_slider_pane_t5_ParamLimits

0xb261,	// (0x00082ca8) main_cset6_slider_pane_t5

0x25de,	// (0x0007a025) main_cset6_slider_pane_t7_ParamLimits

0x25de,	// (0x0007a025) main_cset6_slider_pane_t7

0xb28e,	// (0x00082cd5) main_cset6_slider_pane_t8_ParamLimits

0xb28e,	// (0x00082cd5) main_cset6_slider_pane_t8

0xb2b2,	// (0x00082cf9) main_cset6_slider_pane_t9_ParamLimits

0xb2b2,	// (0x00082cf9) main_cset6_slider_pane_t9

0xb2d6,	// (0x00082d1d) main_cset6_slider_pane_t10_ParamLimits

0xb2d6,	// (0x00082d1d) main_cset6_slider_pane_t10

0xb2fa,	// (0x00082d41) main_cset6_slider_pane_t11_ParamLimits

0xb2fa,	// (0x00082d41) main_cset6_slider_pane_t11

0x2614,	// (0x0007a05b) main_cset6_slider_pane_t14_ParamLimits

0x2614,	// (0x0007a05b) main_cset6_slider_pane_t14

0x264d,	// (0x0007a094) main_cset6_slider_pane_t15_ParamLimits

0x264d,	// (0x0007a094) main_cset6_slider_pane_t15

0x000b,

0xfb4c,	// (0x00087593) main_cset6_slider_pane_t_ParamLimits

0xfb4c,	// (0x00087593) main_cset6_slider_pane_t

0xed5d,	// (0x000867a4) cset_slider_pane_g1_copy1

0x1dee,	// (0x00079835) cset_slider_pane_g2_copy1

0x1df7,	// (0x0007983e) cset_slider_pane_g3_copy1

0xd36a,	// (0x00084db1) bg_popup_sub_pane_cp011_copy1

0x268f,	// (0x0007a0d6) main_cset_text_pane_g1_copy1

0x1e80,	// (0x000798c7) main_cset_text_pane_t1_copy1

0x1e8e,	// (0x000798d5) main_cset_text_pane_t2_copy1

0x1e9c,	// (0x000798e3) main_cset_text_pane_t3_copy1

0x1eaa,	// (0x000798f1) main_cset_text_pane_t4_copy1

0x1eb8,	// (0x000798ff) main_cset_text_pane_t5_copy1

0x2697,	// (0x0007a0de) main_cset_text_pane_t6_copy1

0x26a5,	// (0x0007a0ec) main_cset_text_pane_t7_copy1

0xb33d,	// (0x00082d84) main_cset_text2_pane_t1_copy1

0x8116,	// (0x0007fb5d) main_ncimui_pane

0x8181,	// (0x0007fbc8) popup_query_ncimui_window_ParamLimits

0x8181,	// (0x0007fbc8) popup_query_ncimui_window

0x1c7d,	// (0x000796c4) field_cale_ev2_pane_g4_ParamLimits

0x1c7d,	// (0x000796c4) field_cale_ev2_pane_g4

0x92d5,	// (0x00080d1c) cell_video_dialer_keypad_pane_g2_ParamLimits

0x92d5,	// (0x00080d1c) cell_video_dialer_keypad_pane_g2

0x0001,

0xf830,	// (0x00087277) cell_video_dialer_keypad_pane_g_ParamLimits

0xf830,	// (0x00087277) cell_video_dialer_keypad_pane_g

0x92ed,	// (0x00080d34) cell_video_dialer_keypad_pane_t1

0xd36a,	// (0x00084db1) bg_popup_window_pane_cp012

0xe184,	// (0x00085bcb) heading_pane_cp06

0x26d1,	// (0x0007a118) ncim_query_content_pane

0xd36a,	// (0x00084db1) bg_popup_heading_pane_cp01

0x26d9,	// (0x0007a120) ncim_heading_pane_t1

0x26e7,	// (0x0007a12e) ncim_indicator_popup_pane

0x26f9,	// (0x0007a140) ncim_query_button_pane

0x270d,	// (0x0007a154) ncim_query_content_pane_t1

0x271f,	// (0x0007a166) ncim_query_content_pane_t2

0x0005,

0xfb90,	// (0x000875d7) ncim_query_content_pane_t

0x2759,	// (0x0007a1a0) ncim_query_list_pane

0x276b,	// (0x0007a1b2) ncim_query_popup_pane

0x26e7,	// (0x0007a12e) ncim_indicator_popup_pane_ParamLimits

0xb491,	// (0x00082ed8) ncim_query_content_pane_g1_ParamLimits

0xb491,	// (0x00082ed8) ncim_query_content_pane_g1

0x270d,	// (0x0007a154) ncim_query_content_pane_t1_ParamLimits

0x271f,	// (0x0007a166) ncim_query_content_pane_t2_ParamLimits

0xb49d,	// (0x00082ee4) ncim_query_content_pane_t3_ParamLimits

0xb49d,	// (0x00082ee4) ncim_query_content_pane_t3

0xb4ba,	// (0x00082f01) ncim_query_content_pane_t4_ParamLimits

0xb4ba,	// (0x00082f01) ncim_query_content_pane_t4

0xb4d7,	// (0x00082f1e) ncim_query_content_pane_t5_ParamLimits

0xb4d7,	// (0x00082f1e) ncim_query_content_pane_t5

0x2731,	// (0x0007a178) ncim_query_content_pane_t6_ParamLimits

0x2731,	// (0x0007a178) ncim_query_content_pane_t6

0xfb90,	// (0x000875d7) ncim_query_content_pane_t_ParamLimits

0x2759,	// (0x0007a1a0) ncim_query_list_pane_ParamLimits

0x276b,	// (0x0007a1b2) ncim_query_popup_pane_ParamLimits

0x277f,	// (0x0007a1c6) wait_bar_pane_cp04

0xd36a,	// (0x00084db1) input_focus_pane_cp011

0x2787,	// (0x0007a1ce) ncim_query_popup_pane_t1

0x2795,	// (0x0007a1dc) ncim_list_query_list_pane_ParamLimits

0x2795,	// (0x0007a1dc) ncim_list_query_list_pane

0xd36a,	// (0x00084db1) bg_button_pane_cp027

0x27a2,	// (0x0007a1e9) ncim_query_button_pane_g1

0xd36a,	// (0x00084db1) list_highlight_pane_cp012

0x27ac,	// (0x0007a1f3) ncim_list_query_list_pane_g1

0x27b4,	// (0x0007a1fb) ncim_list_query_list_pane_t1

0x9a70,	// (0x000814b7) cam4_indicators_pane_g3_ParamLimits

0x9a70,	// (0x000814b7) cam4_indicators_pane_g3

0x9b72,	// (0x000815b9) vid4_indicators_pane_g5_ParamLimits

0x9b72,	// (0x000815b9) vid4_indicators_pane_g5

0xab8e,	// (0x000825d5) vid4_progress_pane_g5_ParamLimits

0xab8e,	// (0x000825d5) vid4_progress_pane_g5

0xb37d,	// (0x00082dc4) main_ncimui_pane_g1

0xb3e5,	// (0x00082e2c) ncimui_group_query_pane_ParamLimits

0xb3e5,	// (0x00082e2c) ncimui_group_query_pane

0xb42d,	// (0x00082e74) ncimui_list_pane_ParamLimits

0xb42d,	// (0x00082e74) ncimui_list_pane

0xb454,	// (0x00082e9b) ncimui_text_pane_ParamLimits

0xb454,	// (0x00082e9b) ncimui_text_pane

0xb4f4,	// (0x00082f3b) ncimui_text_pane_t1_ParamLimits

0xb4f4,	// (0x00082f3b) ncimui_text_pane_t1

0x27c2,	// (0x0007a209) ncimui_list_single_graphic_pane_ParamLimits

0x27c2,	// (0x0007a209) ncimui_list_single_graphic_pane

0xb513,	// (0x00082f5a) ncimui_query_pane_ParamLimits

0xb513,	// (0x00082f5a) ncimui_query_pane

0xd36a,	// (0x00084db1) list_highlight_pane_cp013

0x27d2,	// (0x0007a219) ncim_list_query_list_pane_t1_copy1

0x27e0,	// (0x0007a227) ncim_list_single_graphic_pane_g1

0xb526,	// (0x00082f6d) ncim_query_button_pane_cp01

0xb532,	// (0x00082f79) ncim_query_entry_pane_ParamLimits

0xb532,	// (0x00082f79) ncim_query_entry_pane

0xb545,	// (0x00082f8c) ncimui_query_pane_g1

0xb551,	// (0x00082f98) ncimui_query_pane_t1_ParamLimits

0xb551,	// (0x00082f98) ncimui_query_pane_t1

0x074a,	// (0x00078191) input_focus_pane_cp012

0x27e8,	// (0x0007a22f) ncim_query_entry_pane_t1

0x0964,	// (0x000783ab) main_im_pane_ParamLimits

0x8116,	// (0x0007fb5d) main_mobtv_pane_ParamLimits

0x8116,	// (0x0007fb5d) main_mobtv_pane

0xb1d4,	// (0x00082c1b) main_cset6_slider_pane_g18_ParamLimits

0xb1d4,	// (0x00082c1b) main_cset6_slider_pane_g18

0x2591,	// (0x00079fd8) main_cset6_slider_pane_g19_ParamLimits

0x2591,	// (0x00079fd8) main_cset6_slider_pane_g19

0xef1a,	// (0x00086961) bg_main_mobtv_pane_ParamLimits

0xef1a,	// (0x00086961) bg_main_mobtv_pane

0xb56a,	// (0x00082fb1) main_mobtv_info_pane

0xb575,	// (0x00082fbc) main_mobtv_loading_pane_ParamLimits

0xb575,	// (0x00082fbc) main_mobtv_loading_pane

0x27fa,	// (0x0007a241) main_mobtv_pg_channel_list_pane

0x2804,	// (0x0007a24b) main_mobtv_pg_hdr_pane

0xb582,	// (0x00082fc9) main_mobtv_programe_curr_pane_ParamLimits

0xb582,	// (0x00082fc9) main_mobtv_programe_curr_pane

0xb58f,	// (0x00082fd6) main_mobtv_programe_next_pane_ParamLimits

0xb58f,	// (0x00082fd6) main_mobtv_programe_next_pane

0x280d,	// (0x0007a254) popup_mobtv_noti_window

0x0bd0,	// (0x00078617) main_tv_pg_hdr_pane_g1

0x2815,	// (0x0007a25c) main_tv_pg_hdr_pane_g2

0x281d,	// (0x0007a264) main_tv_pg_hdr_pane_g3

0x2825,	// (0x0007a26c) main_tv_pg_hdr_pane_g4

0x282d,	// (0x0007a274) main_tv_pg_hdr_pane_g5

0x2837,	// (0x0007a27e) main_tv_pg_hdr_pane_g6

0x2841,	// (0x0007a288) main_tv_pg_hdr_pane_g7

0x284b,	// (0x0007a292) main_tv_pg_hdr_pane_g8

0x2855,	// (0x0007a29c) main_tv_pg_hdr_pane_g9

0x285f,	// (0x0007a2a6) main_tv_pg_hdr_pane_g10

0x2869,	// (0x0007a2b0) main_tv_pg_hdr_pane_g11

0x000a,

0xfb9d,	// (0x000875e4) main_tv_pg_hdr_pane_g

0x2873,	// (0x0007a2ba) main_tv_pg_hdr_pane_t1

0x2881,	// (0x0007a2c8) main_tv_pg_hdr_pane_t2

0x288f,	// (0x0007a2d6) main_tv_pg_hdr_pane_t3

0x289f,	// (0x0007a2e6) main_tv_pg_hdr_pane_t4

0x28af,	// (0x0007a2f6) main_tv_pg_hdr_pane_t5

0x0004,

0xfbb4,	// (0x000875fb) main_tv_pg_hdr_pane_t

0x28bf,	// (0x0007a306) single_mobtv_pg_channel_pane_ParamLimits

0x28bf,	// (0x0007a306) single_mobtv_pg_channel_pane

0x28d1,	// (0x0007a318) single_mobtv_pg_channel_table_pane

0x0ef0,	// (0x00078937) single_mobtv_pg_channel_thumb_pane

0x28da,	// (0x0007a321) single_tv_pg_channel_pane_g1

0x28e3,	// (0x0007a32a) single_tv_pg_channel_pane_g2

0x0001,

0xfbbf,	// (0x00087606) single_tv_pg_channel_pane_g

0x08d0,	// (0x00078317) bg_single_mobtv_pg_channel_thumb_pane_ParamLimits

0x08d0,	// (0x00078317) bg_single_mobtv_pg_channel_thumb_pane

0x28ec,	// (0x0007a333) single_mobtv_pg_channel_thumb_pane_g1_ParamLimits

0x28ec,	// (0x0007a333) single_mobtv_pg_channel_thumb_pane_g1

0x28fa,	// (0x0007a341) single_mobtv_pg_channel_thumb_pane_g2_ParamLimits

0x28fa,	// (0x0007a341) single_mobtv_pg_channel_thumb_pane_g2

0x2906,	// (0x0007a34d) single_mobtv_pg_channel_thumb_pane_g3_ParamLimits

0x2906,	// (0x0007a34d) single_mobtv_pg_channel_thumb_pane_g3

0x0002,

0xfbc4,	// (0x0008760b) single_mobtv_pg_channel_thumb_pane_g_ParamLimits

0xfbc4,	// (0x0008760b) single_mobtv_pg_channel_thumb_pane_g

0x2912,	// (0x0007a359) single_mobtv_pg_channel_thumb_pane_t1

0x2920,	// (0x0007a367) single_mobtv_pg_channel_thumb_pane_t2

0x0001,

0xfbcb,	// (0x00087612) single_mobtv_pg_channel_thumb_pane_t

0x0bd0,	// (0x00078617) bg_single_mobtv_pg_channel_table_pane_g1

0x0bd0,	// (0x00078617) bg_single_mobtv_pg_channel_table_pane_g2

0x0001,

0xf3dd,	// (0x00086e24) bg_single_mobtv_pg_channel_table_pane_g

0x292e,	// (0x0007a375) single_mobtv_pg_channel_table_pane_t1

0x293c,	// (0x0007a383) single_mobtv_pg_channel_table_pane_t2

0x0001,

0xfbd0,	// (0x00087617) single_mobtv_pg_channel_table_pane_t

0xb5a4,	// (0x00082feb) main_mobtv_info_pane_g1_ParamLimits

0xb5a4,	// (0x00082feb) main_mobtv_info_pane_g1

0xb5c0,	// (0x00083007) main_mobtv_info_pane_t1_ParamLimits

0xb5c0,	// (0x00083007) main_mobtv_info_pane_t1

0xb638,	// (0x0008307f) main_mobtv_info_pane_t2_ParamLimits

0xb638,	// (0x0008307f) main_mobtv_info_pane_t2

0x0002,

0xfbda,	// (0x00087621) main_mobtv_info_pane_t_ParamLimits

0xfbda,	// (0x00087621) main_mobtv_info_pane_t

0xb6c7,	// (0x0008310e) wait_bar_pane_cp05

0xb6d9,	// (0x00083120) main_mobtv_loading_pane_g1_ParamLimits

0xb6d9,	// (0x00083120) main_mobtv_loading_pane_g1

0xb6e7,	// (0x0008312e) main_mobtv_loading_pane_g2_ParamLimits

0xb6e7,	// (0x0008312e) main_mobtv_loading_pane_g2

0xb6f3,	// (0x0008313a) main_mobtv_loading_pane_g3_ParamLimits

0xb6f3,	// (0x0008313a) main_mobtv_loading_pane_g3

0x0002,

0xfbe1,	// (0x00087628) main_mobtv_loading_pane_g_ParamLimits

0xfbe1,	// (0x00087628) main_mobtv_loading_pane_g

0x294a,	// (0x0007a391) main_mobtv_loading_pane_t1_ParamLimits

0x294a,	// (0x0007a391) main_mobtv_loading_pane_t1

0x2962,	// (0x0007a3a9) main_mobtv_loading_pane_t2_ParamLimits

0x2962,	// (0x0007a3a9) main_mobtv_loading_pane_t2

0x0001,

0xfbe8,	// (0x0008762f) main_mobtv_loading_pane_t_ParamLimits

0xfbe8,	// (0x0008762f) main_mobtv_loading_pane_t

0xb701,	// (0x00083148) wait_bar_pane_cp06_ParamLimits

0xb701,	// (0x00083148) wait_bar_pane_cp06

0x2986,	// (0x0007a3cd) main_mobtv_programe_curr_pane_t1

0x2994,	// (0x0007a3db) main_mobtv_programe_curr_pane_t2

0x0001,

0xfbed,	// (0x00087634) main_mobtv_programe_curr_pane_t

0x29a2,	// (0x0007a3e9) main_mobtv_programe_next_pane_t1

0x29b0,	// (0x0007a3f7) main_mobtv_programe_next_pane_t2

0x29be,	// (0x0007a405) main_mobtv_programe_next_pane_t3

0x0002,

0xfbf2,	// (0x00087639) main_mobtv_programe_next_pane_t

0xd36a,	// (0x00084db1) bg_popup_mobtv_noti_window_pane

0x29cc,	// (0x0007a413) popup_mobtv_noti_window_g1

0x29d4,	// (0x0007a41b) popup_mobtv_noti_window_t1

0x29e2,	// (0x0007a429) popup_mobtv_noti_window_t2

0x0001,

0xfbf9,	// (0x00087640) popup_mobtv_noti_window_t

0x0bd0,	// (0x00078617) bg_popup_mobtv_noti_window_pane_g1

0x4f7c,	// (0x0007c9c3) sc_clock_pane

0x4f7c,	// (0x0007c9c3) main_fs_bigclock_pane

0xad67,	// (0x000827ae) blid2_tripm_pane_t4_ParamLimits

0xad67,	// (0x000827ae) blid2_tripm_pane_t4

0xb70d,	// (0x00083154) sc_clock_pane_g1_ParamLimits

0xb70d,	// (0x00083154) sc_clock_pane_g1

0xb71b,	// (0x00083162) sc_clock_pane_t1_ParamLimits

0xb71b,	// (0x00083162) sc_clock_pane_t1

0xb72e,	// (0x00083175) sc_clock_pane_t2_ParamLimits

0xb72e,	// (0x00083175) sc_clock_pane_t2

0xb740,	// (0x00083187) sc_clock_pane_t3_ParamLimits

0xb740,	// (0x00083187) sc_clock_pane_t3

0x0004,

0xfbfe,	// (0x00087645) sc_clock_pane_t_ParamLimits

0xfbfe,	// (0x00087645) sc_clock_pane_t

0xc316,	// (0x00083d5d) main_fs_bigclock_indicator_pane_ParamLimits

0xc316,	// (0x00083d5d) main_fs_bigclock_indicator_pane

0xb7c3,	// (0x0008320a) main_fs_bigclock_pane_g1_ParamLimits

0xb7c3,	// (0x0008320a) main_fs_bigclock_pane_g1

0xc322,	// (0x00083d69) main_fs_bigclock_pane_t1_ParamLimits

0xc322,	// (0x00083d69) main_fs_bigclock_pane_t1

0xc334,	// (0x00083d7b) main_fs_bigclock_pane_t2_ParamLimits

0xc334,	// (0x00083d7b) main_fs_bigclock_pane_t2

0xc348,	// (0x00083d8f) main_fs_bigclock_pane_t3_ParamLimits

0xc348,	// (0x00083d8f) main_fs_bigclock_pane_t3

0x0002,

0xfd8f,	// (0x000877d6) main_fs_bigclock_pane_t_ParamLimits

0xfd8f,	// (0x000877d6) main_fs_bigclock_pane_t

0x3587,	// (0x0007afce) main_fs_bigclock_indicator_pane_g1

0x2701,	// (0x0007a148) ncim_query_content_pane_g2_ParamLimits

0x2701,	// (0x0007a148) ncim_query_content_pane_g2

0x0001,

0xfb8b,	// (0x000875d2) ncim_query_content_pane_g_ParamLimits

0xfb8b,	// (0x000875d2) ncim_query_content_pane_g

0xb754,	// (0x0008319b) sc_clock_pane_t4_ParamLimits

0xb754,	// (0x0008319b) sc_clock_pane_t4

0x8116,	// (0x0007fb5d) main_radioblah_pane

0x9916,	// (0x0008135d) cell_call4_button_pane_t1_copy1_ParamLimits

0x9916,	// (0x0008135d) cell_call4_button_pane_t1_copy1

0xb397,	// (0x00082dde) main_ncimui_pane_t1_ParamLimits

0xb397,	// (0x00082dde) main_ncimui_pane_t1

0xb3b1,	// (0x00082df8) main_ncimui_pane_t2_ParamLimits

0xb3b1,	// (0x00082df8) main_ncimui_pane_t2

0x0002,

0xfb84,	// (0x000875cb) main_ncimui_pane_t_ParamLimits

0xfb84,	// (0x000875cb) main_ncimui_pane_t

0x2b28,	// (0x0007a56f) main_radioblah_anim_pane_ParamLimits

0x2b28,	// (0x0007a56f) main_radioblah_anim_pane

0x2b39,	// (0x0007a580) main_radioblah_info_pane_ParamLimits

0x2b39,	// (0x0007a580) main_radioblah_info_pane

0x2b4d,	// (0x0007a594) main_radioblah_pane_t1_ParamLimits

0x2b4d,	// (0x0007a594) main_radioblah_pane_t1

0x2b69,	// (0x0007a5b0) main_radioblah_pane_t2_ParamLimits

0x2b69,	// (0x0007a5b0) main_radioblah_pane_t2

0x0003,

0xfc1f,	// (0x00087666) main_radioblah_pane_t_ParamLimits

0xfc1f,	// (0x00087666) main_radioblah_pane_t

0xb819,	// (0x00083260) main_radioblah_rocker_ctrl_pane_ParamLimits

0xb819,	// (0x00083260) main_radioblah_rocker_ctrl_pane

0x2bb1,	// (0x0007a5f8) main_radioblah_info_pane_t1_ParamLimits

0x2bb1,	// (0x0007a5f8) main_radioblah_info_pane_t1

0xb85e,	// (0x000832a5) main_radioblah_info_pane_t2_ParamLimits

0xb85e,	// (0x000832a5) main_radioblah_info_pane_t2

0x0003,

0xfc28,	// (0x0008766f) main_radioblah_info_pane_t_ParamLimits

0xfc28,	// (0x0008766f) main_radioblah_info_pane_t

0x0bd0,	// (0x00078617) main_radioblah_rocker_ctrl_pane_g1

0xb90e,	// (0x00083355) main_radioblah_rocker_ctrl_pane_g2

0xb916,	// (0x0008335d) main_radioblah_rocker_ctrl_pane_g3

0xb91e,	// (0x00083365) main_radioblah_rocker_ctrl_pane_g4

0xb926,	// (0x0008336d) main_radioblah_rocker_ctrl_pane_g5

0xb92e,	// (0x00083375) main_radioblah_rocker_ctrl_pane_g6

0x0005,

0xfc31,	// (0x00087678) main_radioblah_rocker_ctrl_pane_g

0xb33d,	// (0x00082d84) main_cset_text2_pane_t1_copy1_ParamLimits

0x99a1,	// (0x000813e8) cam4_image_uncrop_qvga_pane

0x9ae2,	// (0x00081529) vid4_image_uncrop_qcif_pane

0xaef5,	// (0x0008293c) cam6_image_uncrop_qvga_pane_ParamLimits

0xaef5,	// (0x0008293c) cam6_image_uncrop_qvga_pane

0x23cf,	// (0x00079e16) vid6_image_uncrop_qcif_pane_ParamLimits

0x23cf,	// (0x00079e16) vid6_image_uncrop_qcif_pane

0xd36a,	// (0x00084db1) bg_popup_preview_window_pane_cp03

0x26b3,	// (0x0007a0fa) list_cset_text2_pane

0x26bb,	// (0x0007a102) main_cset6_text2_pane_g1

0x26c3,	// (0x0007a10a) main_cset6_text2_pane_t1

0xb936,	// (0x0008337d) list_cset_text2_pane_t1_ParamLimits

0xb936,	// (0x0008337d) list_cset_text2_pane_t1

0x8116,	// (0x0007fb5d) main_radioblah_pane_ParamLimits

0xb6b3,	// (0x000830fa) main_mobtv_info_pane_t3_ParamLimits

0xb6b3,	// (0x000830fa) main_mobtv_info_pane_t3

0xb807,	// (0x0008324e) main_radioblah_pane_g1

0xb832,	// (0x00083279) main_radioblah_info_pane_g1

0xb8b3,	// (0x000832fa) main_radioblah_info_pane_t3_ParamLimits

0xb8b3,	// (0x000832fa) main_radioblah_info_pane_t3

0x6b52,	// (0x0007e599) highlight_cell_cale_month_pane_ParamLimits

0x6b52,	// (0x0007e599) highlight_cell_cale_month_pane

0x4f7c,	// (0x0007c9c3) main_phob_fisheye_pane

0xe96e,	// (0x000863b5) scroll_pane_cp0031_ParamLimits

0xe96e,	// (0x000863b5) scroll_pane_cp0031

0x24dd,	// (0x00079f24) wait_bar_pane_cp08_ParamLimits

0xb108,	// (0x00082b4f) cset_list_set_pane_copy1_ParamLimits

0x2beb,	// (0x0007a632) highlight_cell_cale_month_pane_g1

0xb957,	// (0x0008339e) highlight_cell_cale_month_pane_t1

0x2148,	// (0x00079b8f) list_gen_pane_cp01

0x1cf3,	// (0x0007973a) scroll_pane_01

0xb965,	// (0x000833ac) list_single_double_fisheye_pane

0x2bf3,	// (0x0007a63a) list_double_fisheye_pane_g1_ParamLimits

0x2bf3,	// (0x0007a63a) list_double_fisheye_pane_g1

0x2bff,	// (0x0007a646) list_double_fisheye_pane_g2_ParamLimits

0x2bff,	// (0x0007a646) list_double_fisheye_pane_g2

0xb96e,	// (0x000833b5) list_double_fisheye_pane_g3_ParamLimits

0xb96e,	// (0x000833b5) list_double_fisheye_pane_g3

0x0004,

0xfc3e,	// (0x00087685) list_double_fisheye_pane_g_ParamLimits

0xfc3e,	// (0x00087685) list_double_fisheye_pane_g

0xb97a,	// (0x000833c1) list_double_fisheye_pane_t1_ParamLimits

0xb97a,	// (0x000833c1) list_double_fisheye_pane_t1

0xb995,	// (0x000833dc) list_double_fisheye_pane_t2_ParamLimits

0xb995,	// (0x000833dc) list_double_fisheye_pane_t2

0x0001,

0xfc49,	// (0x00087690) list_double_fisheye_pane_t_ParamLimits

0xfc49,	// (0x00087690) list_double_fisheye_pane_t

0x4f7c,	// (0x0007c9c3) main_call5_pane

0xb77a,	// (0x000831c1) sc_swipe_pane_ParamLimits

0xb77a,	// (0x000831c1) sc_swipe_pane

0xb9c3,	// (0x0008340a) call5_image_pane_ParamLimits

0xb9c3,	// (0x0008340a) call5_image_pane

0xb9d3,	// (0x0008341a) call5_swipe_1_pane_ParamLimits

0xb9d3,	// (0x0008341a) call5_swipe_1_pane

0xb9df,	// (0x00083426) call5_swipe_2_pane_ParamLimits

0xb9df,	// (0x00083426) call5_swipe_2_pane

0xb9f9,	// (0x00083440) popup_call5_audio_first_window_ParamLimits

0xb9f9,	// (0x00083440) popup_call5_audio_first_window

0x08d0,	// (0x00078317) call5_swipe_1_pane_g1_ParamLimits

0x08d0,	// (0x00078317) call5_swipe_1_pane_g1

0x2c30,	// (0x0007a677) call5_swipe_1_pane_g2_ParamLimits

0x2c30,	// (0x0007a677) call5_swipe_1_pane_g2

0x0001,

0xfc4e,	// (0x00087695) call5_swipe_1_pane_g_ParamLimits

0xfc4e,	// (0x00087695) call5_swipe_1_pane_g

0x2c3c,	// (0x0007a683) call5_swipe_1_pane_t1_ParamLimits

0x2c3c,	// (0x0007a683) call5_swipe_1_pane_t1

0x08d0,	// (0x00078317) call5_swipe_2_pane_g1_ParamLimits

0x08d0,	// (0x00078317) call5_swipe_2_pane_g1

0x2c51,	// (0x0007a698) call5_swipe_2_pane_g2_ParamLimits

0x2c51,	// (0x0007a698) call5_swipe_2_pane_g2

0x0001,

0xfc53,	// (0x0008769a) call5_swipe_2_pane_g_ParamLimits

0xfc53,	// (0x0008769a) call5_swipe_2_pane_g

0x2c5d,	// (0x0007a6a4) call5_swipe_2_pane_t1_ParamLimits

0x2c5d,	// (0x0007a6a4) call5_swipe_2_pane_t1

0x2c72,	// (0x0007a6b9) sc_swipe_pane_g1_ParamLimits

0x2c72,	// (0x0007a6b9) sc_swipe_pane_g1

0x2c7f,	// (0x0007a6c6) sc_swipe_pane_g2_ParamLimits

0x2c7f,	// (0x0007a6c6) sc_swipe_pane_g2

0x0001,

0xfc58,	// (0x0008769f) sc_swipe_pane_g_ParamLimits

0xfc58,	// (0x0008769f) sc_swipe_pane_g

0x2c8b,	// (0x0007a6d2) sc_swipe_pane_t1_ParamLimits

0x2c8b,	// (0x0007a6d2) sc_swipe_pane_t1

0x4f7c,	// (0x0007c9c3) main_cmail_launcher_pane

0xba07,	// (0x0008344e) aid_size_cell_cmail_l_ParamLimits

0xba07,	// (0x0008344e) aid_size_cell_cmail_l

0xba15,	// (0x0008345c) grid_cmail_l_pane_ParamLimits

0xba15,	// (0x0008345c) grid_cmail_l_pane

0xba25,	// (0x0008346c) cell_cmail_l_pane_ParamLimits

0xba25,	// (0x0008346c) cell_cmail_l_pane

0x2ca0,	// (0x0007a6e7) cell_cmail_l_pane_g1_ParamLimits

0x2ca0,	// (0x0007a6e7) cell_cmail_l_pane_g1

0x2cac,	// (0x0007a6f3) cell_cmail_l_pane_t1_ParamLimits

0x2cac,	// (0x0007a6f3) cell_cmail_l_pane_t1

0x2cc2,	// (0x0007a709) cell_cmail_l_pane_t2_ParamLimits

0x2cc2,	// (0x0007a709) cell_cmail_l_pane_t2

0x0001,

0xfc5d,	// (0x000876a4) cell_cmail_l_pane_t_ParamLimits

0xfc5d,	// (0x000876a4) cell_cmail_l_pane_t

0x074a,	// (0x00078191) grid_highlight_pane_cp018_ParamLimits

0x074a,	// (0x00078191) grid_highlight_pane_cp018

0x4dd2,	// (0x0007c819) main2_pane_ParamLimits

0x4dd2,	// (0x0007c819) main2_pane

0x0a17,	// (0x0007845e) popup_sp_fs_action_menu_bg_pane_g1

0x0a1f,	// (0x00078466) popup_sp_fs_action_menu_bg_pane_g2

0x0a27,	// (0x0007846e) popup_sp_fs_action_menu_bg_pane_g3

0x0a2f,	// (0x00078476) popup_sp_fs_action_menu_bg_pane_g4

0x0a37,	// (0x0007847e) popup_sp_fs_action_menu_bg_pane_g5

0x0a3f,	// (0x00078486) popup_sp_fs_action_menu_bg_pane_g6

0x0a47,	// (0x0007848e) popup_sp_fs_action_menu_bg_pane_g7

0x0a4f,	// (0x00078496) popup_sp_fs_action_menu_bg_pane_g8

0x0a57,	// (0x0007849e) popup_sp_fs_action_menu_bg_pane_g9

0x0a5f,	// (0x000784a6) popup_sp_fs_action_menu_bg_pane_g10

0x0a5f,	// (0x000784a6) popup_sp_fs_action_menu_bg_pane_g11

0x000a,

0xf145,	// (0x00086b8c) popup_sp_fs_action_menu_bg_pane_g

0x08d0,	// (0x00078317) list_medium_line_x2_t3_g3_g1_ParamLimits

0x08d0,	// (0x00078317) list_medium_line_x2_t3_g3_g1

0x08d0,	// (0x00078317) list_medium_line_x2_t3_g3_g2_ParamLimits

0x08d0,	// (0x00078317) list_medium_line_x2_t3_g3_g2

0x08d0,	// (0x00078317) list_medium_line_x2_t3_g3_g3_ParamLimits

0x08d0,	// (0x00078317) list_medium_line_x2_t3_g3_g3

0x0002,

0xf1f3,	// (0x00086c3a) list_medium_line_x2_t3_g3_g_ParamLimits

0xf1f3,	// (0x00086c3a) list_medium_line_x2_t3_g3_g

0x0ba2,	// (0x000785e9) list_medium_line_x2_t3_g3_t1_ParamLimits

0x0ba2,	// (0x000785e9) list_medium_line_x2_t3_g3_t1

0x0ba2,	// (0x000785e9) list_medium_line_x2_t3_g3_t2_ParamLimits

0x0ba2,	// (0x000785e9) list_medium_line_x2_t3_g3_t2

0x0ba2,	// (0x000785e9) list_medium_line_x2_t3_g3_t3_ParamLimits

0x0ba2,	// (0x000785e9) list_medium_line_x2_t3_g3_t3

0x0002,

0xf1fa,	// (0x00086c41) list_medium_line_x2_t3_g3_t_ParamLimits

0xf1fa,	// (0x00086c41) list_medium_line_x2_t3_g3_t

0x08d0,	// (0x00078317) list_medium_line_x2_t3_g2_g1_ParamLimits

0x08d0,	// (0x00078317) list_medium_line_x2_t3_g2_g1

0x08d0,	// (0x00078317) list_medium_line_x2_t3_g2_g2_ParamLimits

0x08d0,	// (0x00078317) list_medium_line_x2_t3_g2_g2

0x0001,

0xf201,	// (0x00086c48) list_medium_line_x2_t3_g2_g_ParamLimits

0xf201,	// (0x00086c48) list_medium_line_x2_t3_g2_g

0x0ba2,	// (0x000785e9) list_medium_line_x2_t3_g2_t1_ParamLimits

0x0ba2,	// (0x000785e9) list_medium_line_x2_t3_g2_t1

0x0ba2,	// (0x000785e9) list_medium_line_x2_t3_g2_t2_ParamLimits

0x0ba2,	// (0x000785e9) list_medium_line_x2_t3_g2_t2

0x0ba2,	// (0x000785e9) list_medium_line_x2_t3_g2_t3_ParamLimits

0x0ba2,	// (0x000785e9) list_medium_line_x2_t3_g2_t3

0x0002,

0xf1fa,	// (0x00086c41) list_medium_line_x2_t3_g2_t_ParamLimits

0xf1fa,	// (0x00086c41) list_medium_line_x2_t3_g2_t

0x08d0,	// (0x00078317) list_medium_line_x2_t4_g4_g1_ParamLimits

0x08d0,	// (0x00078317) list_medium_line_x2_t4_g4_g1

0x08d0,	// (0x00078317) list_medium_line_x2_t4_g4_g2_ParamLimits

0x08d0,	// (0x00078317) list_medium_line_x2_t4_g4_g2

0x08d0,	// (0x00078317) list_medium_line_x2_t4_g4_g3_ParamLimits

0x08d0,	// (0x00078317) list_medium_line_x2_t4_g4_g3

0x08d0,	// (0x00078317) list_medium_line_x2_t4_g4_g4_ParamLimits

0x08d0,	// (0x00078317) list_medium_line_x2_t4_g4_g4

0x0003,

0xf206,	// (0x00086c4d) list_medium_line_x2_t4_g4_g_ParamLimits

0xf206,	// (0x00086c4d) list_medium_line_x2_t4_g4_g

0x0ba2,	// (0x000785e9) list_medium_line_x2_t4_g4_t1_ParamLimits

0x0ba2,	// (0x000785e9) list_medium_line_x2_t4_g4_t1

0x0ba2,	// (0x000785e9) list_medium_line_x2_t4_g4_t2_ParamLimits

0x0ba2,	// (0x000785e9) list_medium_line_x2_t4_g4_t2

0x0ba2,	// (0x000785e9) list_medium_line_x2_t4_g4_t3_ParamLimits

0x0ba2,	// (0x000785e9) list_medium_line_x2_t4_g4_t3

0x0ba2,	// (0x000785e9) list_medium_line_x2_t4_g4_t4_ParamLimits

0x0ba2,	// (0x000785e9) list_medium_line_x2_t4_g4_t4

0x0003,

0xf20f,	// (0x00086c56) list_medium_line_x2_t4_g4_t_ParamLimits

0xf20f,	// (0x00086c56) list_medium_line_x2_t4_g4_t

0x08d0,	// (0x00078317) list_medium_line_x2_t2_g4_g1_ParamLimits

0x08d0,	// (0x00078317) list_medium_line_x2_t2_g4_g1

0x08d0,	// (0x00078317) list_medium_line_x2_t2_g4_g2_ParamLimits

0x08d0,	// (0x00078317) list_medium_line_x2_t2_g4_g2

0x08d0,	// (0x00078317) list_medium_line_x2_t2_g4_g3_ParamLimits

0x08d0,	// (0x00078317) list_medium_line_x2_t2_g4_g3

0x08d0,	// (0x00078317) list_medium_line_x2_t2_g4_g4_ParamLimits

0x08d0,	// (0x00078317) list_medium_line_x2_t2_g4_g4

0x0003,

0xf206,	// (0x00086c4d) list_medium_line_x2_t2_g4_g_ParamLimits

0xf206,	// (0x00086c4d) list_medium_line_x2_t2_g4_g

0x0ba2,	// (0x000785e9) list_medium_line_x2_t2_g4_t1_ParamLimits

0x0ba2,	// (0x000785e9) list_medium_line_x2_t2_g4_t1

0x0ba2,	// (0x000785e9) list_medium_line_x2_t2_g4_t2_ParamLimits

0x0ba2,	// (0x000785e9) list_medium_line_x2_t2_g4_t2

0x0001,

0xf276,	// (0x00086cbd) list_medium_line_x2_t2_g4_t_ParamLimits

0xf276,	// (0x00086cbd) list_medium_line_x2_t2_g4_t

0x08d0,	// (0x00078317) list_medium_line_x2_t2_g3_g1_ParamLimits

0x08d0,	// (0x00078317) list_medium_line_x2_t2_g3_g1

0x08d0,	// (0x00078317) list_medium_line_x2_t2_g3_g2_ParamLimits

0x08d0,	// (0x00078317) list_medium_line_x2_t2_g3_g2

0x08d0,	// (0x00078317) list_medium_line_x2_t2_g3_g3_ParamLimits

0x08d0,	// (0x00078317) list_medium_line_x2_t2_g3_g3

0x0002,

0xf1f3,	// (0x00086c3a) list_medium_line_x2_t2_g3_g_ParamLimits

0xf1f3,	// (0x00086c3a) list_medium_line_x2_t2_g3_g

0x0ba2,	// (0x000785e9) list_medium_line_x2_t2_g3_t1_ParamLimits

0x0ba2,	// (0x000785e9) list_medium_line_x2_t2_g3_t1

0x0ba2,	// (0x000785e9) list_medium_line_x2_t2_g3_t2_ParamLimits

0x0ba2,	// (0x000785e9) list_medium_line_x2_t2_g3_t2

0x0001,

0xf276,	// (0x00086cbd) list_medium_line_x2_t2_g3_t_ParamLimits

0xf276,	// (0x00086cbd) list_medium_line_x2_t2_g3_t

0x6d4d,	// (0x0007e794) main_sp_fs_list_pane_ParamLimits

0x6d4d,	// (0x0007e794) main_sp_fs_list_pane

0x6d59,	// (0x0007e7a0) sp_fs_scroll_pane_ParamLimits

0x6d59,	// (0x0007e7a0) sp_fs_scroll_pane

0x1125,	// (0x00078b6c) list_medium_line_x2_t3_t1

0x1125,	// (0x00078b6c) list_medium_line_x2_t3_t2

0x1125,	// (0x00078b6c) list_medium_line_x2_t3_t3

0x0002,

0xf2c1,	// (0x00086d08) list_medium_line_x2_t3_t

0x1125,	// (0x00078b6c) list_medium_line_x3_t4_t1

0x1125,	// (0x00078b6c) list_medium_line_x3_t4_t2

0x1125,	// (0x00078b6c) list_medium_line_x3_t4_t3

0x1125,	// (0x00078b6c) list_medium_line_x3_t4_t4

0x0003,

0xf2c8,	// (0x00086d0f) list_medium_line_x3_t4_t

0x1125,	// (0x00078b6c) list_medium_line_x4_t5_t1

0x1125,	// (0x00078b6c) list_medium_line_x4_t5_t2

0x1125,	// (0x00078b6c) list_medium_line_x4_t5_t3

0x1125,	// (0x00078b6c) list_medium_line_x4_t5_t4

0x1125,	// (0x00078b6c) list_medium_line_x4_t5_t5

0x0004,

0xf2d1,	// (0x00086d18) list_medium_line_x4_t5_t

0x08d0,	// (0x00078317) list_medium_line_t4_g4_g1_ParamLimits

0x08d0,	// (0x00078317) list_medium_line_t4_g4_g1

0x08d0,	// (0x00078317) list_medium_line_t4_g4_g2_ParamLimits

0x08d0,	// (0x00078317) list_medium_line_t4_g4_g2

0x08d0,	// (0x00078317) list_medium_line_t4_g4_g3_ParamLimits

0x08d0,	// (0x00078317) list_medium_line_t4_g4_g3

0x08d0,	// (0x00078317) list_medium_line_t4_g4_g4_ParamLimits

0x08d0,	// (0x00078317) list_medium_line_t4_g4_g4

0x0003,

0xf206,	// (0x00086c4d) list_medium_line_t4_g4_g_ParamLimits

0xf206,	// (0x00086c4d) list_medium_line_t4_g4_g

0x0ba2,	// (0x000785e9) list_medium_line_t4_g4_t1_ParamLimits

0x0ba2,	// (0x000785e9) list_medium_line_t4_g4_t1

0x0ba2,	// (0x000785e9) list_medium_line_t4_g4_t2_ParamLimits

0x0ba2,	// (0x000785e9) list_medium_line_t4_g4_t2

0x0ba2,	// (0x000785e9) list_medium_line_t4_g4_t3_ParamLimits

0x0ba2,	// (0x000785e9) list_medium_line_t4_g4_t3

0x0ba2,	// (0x000785e9) list_medium_line_t4_g4_t4_ParamLimits

0x0ba2,	// (0x000785e9) list_medium_line_t4_g4_t4

0x0003,

0xf20f,	// (0x00086c56) list_medium_line_t4_g4_t_ParamLimits

0xf20f,	// (0x00086c56) list_medium_line_t4_g4_t

0x6e4c,	// (0x0007e893) chi_dic_find_pane_g1

0x813e,	// (0x0007fb85) main_tport_pane

0x1125,	// (0x00078b6c) list_medium_line_plain_t1

0x08d0,	// (0x00078317) list_medium_line_t2_g2_g1_ParamLimits

0x08d0,	// (0x00078317) list_medium_line_t2_g2_g1

0x08d0,	// (0x00078317) list_medium_line_t2_g2_g2_ParamLimits

0x08d0,	// (0x00078317) list_medium_line_t2_g2_g2

0x0001,

0xf201,	// (0x00086c48) list_medium_line_t2_g2_g_ParamLimits

0xf201,	// (0x00086c48) list_medium_line_t2_g2_g

0x0ba2,	// (0x000785e9) list_medium_line_t2_g2_t1_ParamLimits

0x0ba2,	// (0x000785e9) list_medium_line_t2_g2_t1

0x0ba2,	// (0x000785e9) list_medium_line_t2_g2_t2_ParamLimits

0x0ba2,	// (0x000785e9) list_medium_line_t2_g2_t2

0x0001,

0xf276,	// (0x00086cbd) list_medium_line_t2_g2_t_ParamLimits

0xf276,	// (0x00086cbd) list_medium_line_t2_g2_t

0x2151,	// (0x00079b98) aid_sp_fs_list_icon_a_sm

0x3d4c,	// (0x0007b793) aid_sp_fs_list_icon_d

0x2159,	// (0x00079ba0) aid_sp_fs_text_primary

0x2162,	// (0x00079ba9) aid_sp_fs_text_secondary

0xd36a,	// (0x00084db1) list_medium_line

0xd36a,	// (0x00084db1) list_medium_line_g2

0xd36a,	// (0x00084db1) list_medium_line_g3

0xd36a,	// (0x00084db1) list_medium_line_plain

0xd36a,	// (0x00084db1) list_medium_line_plain_t2

0xd36a,	// (0x00084db1) list_medium_line_plain_t3

0xd36a,	// (0x00084db1) list_medium_line_right_icon

0xd36a,	// (0x00084db1) list_medium_line_right_iconx2

0xd36a,	// (0x00084db1) list_medium_line_t2

0xd36a,	// (0x00084db1) list_medium_line_t2_g2

0xd36a,	// (0x00084db1) list_medium_line_t2_g3

0xd36a,	// (0x00084db1) list_medium_line_t2_right_icon

0xd36a,	// (0x00084db1) list_medium_line_t2_right_iconx2

0xd36a,	// (0x00084db1) list_medium_line_t3

0xd36a,	// (0x00084db1) list_medium_line_t3_g2

0xd36a,	// (0x00084db1) list_medium_line_t3_g3

0xd36a,	// (0x00084db1) list_medium_line_t3_right_iconx2

0xd36a,	// (0x00084db1) list_medium_line_t4_g4

0xd36a,	// (0x00084db1) list_medium_line_x2

0xd36a,	// (0x00084db1) list_medium_line_x2_t2_g2

0xd36a,	// (0x00084db1) list_medium_line_x2_t2_g3

0xd36a,	// (0x00084db1) list_medium_line_x2_t2_g4

0xd36a,	// (0x00084db1) list_medium_line_x2_t3

0xd36a,	// (0x00084db1) list_medium_line_x2_t3_g2

0xd36a,	// (0x00084db1) list_medium_line_x2_t3_g3

0xd36a,	// (0x00084db1) list_medium_line_x2_t3_g4

0xd36a,	// (0x00084db1) list_medium_line_x2_t4_g2

0xd36a,	// (0x00084db1) list_medium_line_x2_t4_g4

0xd36a,	// (0x00084db1) list_medium_line_x3

0xd36a,	// (0x00084db1) list_medium_line_x3_t4

0xd36a,	// (0x00084db1) list_medium_line_x3_t4_g4

0xd36a,	// (0x00084db1) list_medium_line_x4_t4

0xd36a,	// (0x00084db1) list_medium_line_x4_t4_g7

0xd36a,	// (0x00084db1) list_medium_line_x4_t5

0xabec,	// (0x00082633) list_single_fs_dyc_pane_ParamLimits

0xabec,	// (0x00082633) list_single_fs_dyc_pane

0x08d0,	// (0x00078317) list_medium_line_x4_t4_g7_g1_ParamLimits

0x08d0,	// (0x00078317) list_medium_line_x4_t4_g7_g1

0x08d0,	// (0x00078317) list_medium_line_x4_t4_g7_g2_ParamLimits

0x08d0,	// (0x00078317) list_medium_line_x4_t4_g7_g2

0x08d0,	// (0x00078317) list_medium_line_x4_t4_g7_g3_ParamLimits

0x08d0,	// (0x00078317) list_medium_line_x4_t4_g7_g3

0x08d0,	// (0x00078317) list_medium_line_x4_t4_g7_g4_ParamLimits

0x08d0,	// (0x00078317) list_medium_line_x4_t4_g7_g4

0x08d0,	// (0x00078317) list_medium_line_x4_t4_g7_g5_ParamLimits

0x08d0,	// (0x00078317) list_medium_line_x4_t4_g7_g5

0x08d0,	// (0x00078317) list_medium_line_x4_t4_g7_g6_ParamLimits

0x08d0,	// (0x00078317) list_medium_line_x4_t4_g7_g6

0x08de,	// (0x00078325) list_medium_line_x4_t4_g7_g7_ParamLimits

0x08de,	// (0x00078325) list_medium_line_x4_t4_g7_g7

0x0006,

0xfb65,	// (0x000875ac) list_medium_line_x4_t4_g7_g_ParamLimits

0xfb65,	// (0x000875ac) list_medium_line_x4_t4_g7_g

0x0ba2,	// (0x000785e9) list_medium_line_x4_t4_g7_t1_ParamLimits

0x0ba2,	// (0x000785e9) list_medium_line_x4_t4_g7_t1

0x0ba2,	// (0x000785e9) list_medium_line_x4_t4_g7_t2_ParamLimits

0x0ba2,	// (0x000785e9) list_medium_line_x4_t4_g7_t2

0x0ba2,	// (0x000785e9) list_medium_line_x4_t4_g7_t3_ParamLimits

0x0ba2,	// (0x000785e9) list_medium_line_x4_t4_g7_t3

0x1721,	// (0x00079168) list_medium_line_x4_t4_g7_t4_ParamLimits

0x1721,	// (0x00079168) list_medium_line_x4_t4_g7_t4

0x1721,	// (0x00079168) list_medium_line_x4_t4_g7_t5_ParamLimits

0x1721,	// (0x00079168) list_medium_line_x4_t4_g7_t5

0x0004,

0xfb74,	// (0x000875bb) list_medium_line_x4_t4_g7_t_ParamLimits

0xfb74,	// (0x000875bb) list_medium_line_x4_t4_g7_t

0xb320,	// (0x00082d67) list_single_dyc_row_pane_ParamLimits

0xb320,	// (0x00082d67) list_single_dyc_row_pane

0xb9b7,	// (0x000833fe) call5_gesture_pane_ParamLimits

0xb9b7,	// (0x000833fe) call5_gesture_pane

0xb9eb,	// (0x00083432) call5_windows_pane_ParamLimits

0xb9eb,	// (0x00083432) call5_windows_pane

0xba3e,	// (0x00083485) call5_swipe_1_pane_cp_ParamLimits

0xba3e,	// (0x00083485) call5_swipe_1_pane_cp

0xba4a,	// (0x00083491) call5_swipe_2_pane_cp_ParamLimits

0xba4a,	// (0x00083491) call5_swipe_2_pane_cp

0x0b90,	// (0x000785d7) call5_image_pane_cp

0xba56,	// (0x0008349d) popup_call5_audio_first_window_cp_ParamLimits

0xba56,	// (0x0008349d) popup_call5_audio_first_window_cp

0x2c72,	// (0x0007a6b9) call5_swipe_1_pane_g1_cp_ParamLimits

0x2c72,	// (0x0007a6b9) call5_swipe_1_pane_g1_cp

0x2cdf,	// (0x0007a726) call5_swipe_1_pane_g2_cp

0x2c8b,	// (0x0007a6d2) call5_swipe_1_pane_t1_cp_ParamLimits

0x2c8b,	// (0x0007a6d2) call5_swipe_1_pane_t1_cp

0x2c72,	// (0x0007a6b9) call5_swipe_2_pane_g1_cp_ParamLimits

0x2c72,	// (0x0007a6b9) call5_swipe_2_pane_g1_cp

0x2ce7,	// (0x0007a72e) call5_swipe_2_pane_g2_cp

0x2cef,	// (0x0007a736) call5_swipe_2_pane_t1_cp_ParamLimits

0x2cef,	// (0x0007a736) call5_swipe_2_pane_t1_cp

0x074a,	// (0x00078191) main_sp_fs_email_pane

0x2d04,	// (0x0007a74b) main_sp_fs_listscroll_pane_te

0xba64,	// (0x000834ab) popup_sp_fs_action_menu_pane_ParamLimits

0xba64,	// (0x000834ab) popup_sp_fs_action_menu_pane

0x0bd0,	// (0x00078617) bg_sp_fs_ctrlbar_pane_g1

0x2d0d,	// (0x0007a754) bg_sp_fs_ctrlbar_ddmenu_pane_g1

0x2d16,	// (0x0007a75d) bg_sp_fs_ctrlbar_ddmenu_pane_g2

0xe1fd,	// (0x00085c44) bg_sp_fs_ctrlbar_ddmenu_pane_g3

0x0bd0,	// (0x00078617) bg_sp_fs_ctrlbar_ddmenu_pane_g4

0x0003,

0xfc62,	// (0x000876a9) bg_sp_fs_ctrlbar_ddmenu_pane_g

0x1c1d,	// (0x00079664) bg_sp_fs_ctrlbar_ddmenu_pane_ParamLimits

0x1c1d,	// (0x00079664) bg_sp_fs_ctrlbar_ddmenu_pane

0x2d1f,	// (0x0007a766) main_sp_fs_ctrlbar_ddmenu_pane_g1_ParamLimits

0x2d1f,	// (0x0007a766) main_sp_fs_ctrlbar_ddmenu_pane_g1

0x2d2b,	// (0x0007a772) main_sp_fs_ctrlbar_ddmenu_pane_g2_ParamLimits

0x2d2b,	// (0x0007a772) main_sp_fs_ctrlbar_ddmenu_pane_g2

0x0001,

0xfc6b,	// (0x000876b2) main_sp_fs_ctrlbar_ddmenu_pane_g_ParamLimits

0xfc6b,	// (0x000876b2) main_sp_fs_ctrlbar_ddmenu_pane_g

0x2d37,	// (0x0007a77e) main_sp_fs_ctrlbar_ddmenu_pane_t1_ParamLimits

0x2d37,	// (0x0007a77e) main_sp_fs_ctrlbar_ddmenu_pane_t1

0x0bd0,	// (0x00078617) list_medium_line_t2_right_icon_g1

0x1125,	// (0x00078b6c) list_medium_line_t2_right_icon_t1

0x1125,	// (0x00078b6c) list_medium_line_t2_right_icon_t2

0x0001,

0xfc70,	// (0x000876b7) list_medium_line_t2_right_icon_t

0xe228,	// (0x00085c6f) bg_sp_fs_ctrlbar_pane_ParamLimits

0xe228,	// (0x00085c6f) bg_sp_fs_ctrlbar_pane

0xbaeb,	// (0x00083532) main_sp_fs_ctrlbar_button_pane_cp01

0xbaf3,	// (0x0008353a) main_sp_fs_ctrlbar_ddmenu_pane

0x2d89,	// (0x0007a7d0) main_sp_fs_ctrlbar_pane_g1

0x2d95,	// (0x0007a7dc) main_sp_fs_ctrlbar_pane_g2

0x0003,

0xfc75,	// (0x000876bc) main_sp_fs_ctrlbar_pane_g

0xbb2f,	// (0x00083576) main_sp_fs_ctrlbar_pane_t1

0xbb6a,	// (0x000835b1) main_sp_fs_ctrlbar_pane

0xbb80,	// (0x000835c7) main_sp_fs_listscroll_pane_te_cp01

0xbb91,	// (0x000835d8) popup_sp_fs_action_menu_pane_cp01_ParamLimits

0xbb91,	// (0x000835d8) popup_sp_fs_action_menu_pane_cp01

0x074a,	// (0x00078191) bg_sp_fs_highlight_list_pane_cp01_ParamLimits

0x074a,	// (0x00078191) bg_sp_fs_highlight_list_pane_cp01

0x2dbc,	// (0x0007a803) sp_fs_action_menu_list_gene_pane_g1_ParamLimits

0x2dbc,	// (0x0007a803) sp_fs_action_menu_list_gene_pane_g1

0x2dcb,	// (0x0007a812) sp_fs_action_menu_list_gene_pane_g2_ParamLimits

0x2dcb,	// (0x0007a812) sp_fs_action_menu_list_gene_pane_g2

0x0001,

0xfc83,	// (0x000876ca) sp_fs_action_menu_list_gene_pane_g_ParamLimits

0xfc83,	// (0x000876ca) sp_fs_action_menu_list_gene_pane_g

0x2dd8,	// (0x0007a81f) sp_fs_action_menu_list_gene_pane_t1_ParamLimits

0x2dd8,	// (0x0007a81f) sp_fs_action_menu_list_gene_pane_t1

0x2df0,	// (0x0007a837) sp_fs_action_menu_list_gene_pane_ParamLimits

0x2df0,	// (0x0007a837) sp_fs_action_menu_list_gene_pane

0x2e0f,	// (0x0007a856) popup_sp_fs_action_menu_bg_pane_ParamLimits

0x2e0f,	// (0x0007a856) popup_sp_fs_action_menu_bg_pane

0x2e1d,	// (0x0007a864) sp_fs_action_menu_list_pane_ParamLimits

0x2e1d,	// (0x0007a864) sp_fs_action_menu_list_pane

0xf03c,	// (0x00086a83) sp_fs_scroll_pane_cp01_ParamLimits

0xf03c,	// (0x00086a83) sp_fs_scroll_pane_cp01

0x1125,	// (0x00078b6c) list_medium_line_plain_t2_t1

0x1125,	// (0x00078b6c) list_medium_line_plain_t2_t2

0x0001,

0xfc70,	// (0x000876b7) list_medium_line_plain_t2_t

0x1125,	// (0x00078b6c) list_medium_line_plain_t3_t1

0x1125,	// (0x00078b6c) list_medium_line_plain_t3_t2

0x1125,	// (0x00078b6c) list_medium_line_plain_t3_t3

0x0002,

0xf2c1,	// (0x00086d08) list_medium_line_plain_t3_t

0x08d0,	// (0x00078317) list_medium_line_x2_t2_g2_g1_ParamLimits

0x08d0,	// (0x00078317) list_medium_line_x2_t2_g2_g1

0x08d0,	// (0x00078317) list_medium_line_x2_t2_g2_g2_ParamLimits

0x08d0,	// (0x00078317) list_medium_line_x2_t2_g2_g2

0x0001,

0xf201,	// (0x00086c48) list_medium_line_x2_t2_g2_g_ParamLimits

0xf201,	// (0x00086c48) list_medium_line_x2_t2_g2_g

0x0ba2,	// (0x000785e9) list_medium_line_x2_t2_g2_t1_ParamLimits

0x0ba2,	// (0x000785e9) list_medium_line_x2_t2_g2_t1

0x0ba2,	// (0x000785e9) list_medium_line_x2_t2_g2_t2_ParamLimits

0x0ba2,	// (0x000785e9) list_medium_line_x2_t2_g2_t2

0x0001,

0xf276,	// (0x00086cbd) list_medium_line_x2_t2_g2_t_ParamLimits

0xf276,	// (0x00086cbd) list_medium_line_x2_t2_g2_t

0x08d0,	// (0x00078317) list_medium_line_x2_t4_g2_g1_ParamLimits

0x08d0,	// (0x00078317) list_medium_line_x2_t4_g2_g1

0x08d0,	// (0x00078317) list_medium_line_x2_t4_g2_g2_ParamLimits

0x08d0,	// (0x00078317) list_medium_line_x2_t4_g2_g2

0x0001,

0xf201,	// (0x00086c48) list_medium_line_x2_t4_g2_g_ParamLimits

0xf201,	// (0x00086c48) list_medium_line_x2_t4_g2_g

0x0ba2,	// (0x000785e9) list_medium_line_x2_t4_g2_t1_ParamLimits

0x0ba2,	// (0x000785e9) list_medium_line_x2_t4_g2_t1

0x0ba2,	// (0x000785e9) list_medium_line_x2_t4_g2_t2_ParamLimits

0x0ba2,	// (0x000785e9) list_medium_line_x2_t4_g2_t2

0x0ba2,	// (0x000785e9) list_medium_line_x2_t4_g2_t3_ParamLimits

0x0ba2,	// (0x000785e9) list_medium_line_x2_t4_g2_t3

0x0ba2,	// (0x000785e9) list_medium_line_x2_t4_g2_t4_ParamLimits

0x0ba2,	// (0x000785e9) list_medium_line_x2_t4_g2_t4

0x0003,

0xf20f,	// (0x00086c56) list_medium_line_x2_t4_g2_t_ParamLimits

0xf20f,	// (0x00086c56) list_medium_line_x2_t4_g2_t

0x0bd0,	// (0x00078617) list_medium_line_t3_right_iconx2_g1

0x0bd0,	// (0x00078617) list_medium_line_t3_right_iconx2_g2

0x0bd0,	// (0x00078617) list_medium_line_t3_right_iconx2_g3

0x0002,

0xf3e2,	// (0x00086e29) list_medium_line_t3_right_iconx2_g

0x1125,	// (0x00078b6c) list_medium_line_t3_right_iconx2_t1

0x1125,	// (0x00078b6c) list_medium_line_t3_right_iconx2_t2

0x0001,

0xfc70,	// (0x000876b7) list_medium_line_t3_right_iconx2_t

0x08d0,	// (0x00078317) list_medium_line_x3_t4_g4_g1_ParamLimits

0x08d0,	// (0x00078317) list_medium_line_x3_t4_g4_g1

0x08d0,	// (0x00078317) list_medium_line_x3_t4_g4_g2_ParamLimits

0x08d0,	// (0x00078317) list_medium_line_x3_t4_g4_g2

0x08d0,	// (0x00078317) list_medium_line_x3_t4_g4_g3_ParamLimits

0x08d0,	// (0x00078317) list_medium_line_x3_t4_g4_g3

0x08d0,	// (0x00078317) list_medium_line_x3_t4_g4_g4_ParamLimits

0x08d0,	// (0x00078317) list_medium_line_x3_t4_g4_g4

0x0003,

0xf206,	// (0x00086c4d) list_medium_line_x3_t4_g4_g_ParamLimits

0xf206,	// (0x00086c4d) list_medium_line_x3_t4_g4_g

0x0ba2,	// (0x000785e9) list_medium_line_x3_t4_g4_t1_ParamLimits

0x0ba2,	// (0x000785e9) list_medium_line_x3_t4_g4_t1

0x0ba2,	// (0x000785e9) list_medium_line_x3_t4_g4_t2_ParamLimits

0x0ba2,	// (0x000785e9) list_medium_line_x3_t4_g4_t2

0x0ba2,	// (0x000785e9) list_medium_line_x3_t4_g4_t3_ParamLimits

0x0ba2,	// (0x000785e9) list_medium_line_x3_t4_g4_t3

0x0ba2,	// (0x000785e9) list_medium_line_x3_t4_g4_t4_ParamLimits

0x0ba2,	// (0x000785e9) list_medium_line_x3_t4_g4_t4

0x0003,

0xf20f,	// (0x00086c56) list_medium_line_x3_t4_g4_t_ParamLimits

0xf20f,	// (0x00086c56) list_medium_line_x3_t4_g4_t

0xbbb1,	// (0x000835f8) list_single_dyc_row_text_pane_t1_ParamLimits

0xbbb1,	// (0x000835f8) list_single_dyc_row_text_pane_t1

0xbbe8,	// (0x0008362f) list_single_dyc_row_text_pane_t2_ParamLimits

0xbbe8,	// (0x0008362f) list_single_dyc_row_text_pane_t2

0x2e3d,	// (0x0007a884) list_single_dyc_row_text_pane_t3_ParamLimits

0x2e3d,	// (0x0007a884) list_single_dyc_row_text_pane_t3

0x0005,

0xfc88,	// (0x000876cf) list_single_dyc_row_text_pane_t_ParamLimits

0xfc88,	// (0x000876cf) list_single_dyc_row_text_pane_t

0x2e61,	// (0x0007a8a8) list_single_dyc_row_pane_g1_ParamLimits

0x2e61,	// (0x0007a8a8) list_single_dyc_row_pane_g1

0x2e6d,	// (0x0007a8b4) list_single_dyc_row_pane_g2_ParamLimits

0x2e6d,	// (0x0007a8b4) list_single_dyc_row_pane_g2

0x2e79,	// (0x0007a8c0) list_single_dyc_row_pane_g3_ParamLimits

0x2e79,	// (0x0007a8c0) list_single_dyc_row_pane_g3

0x2e85,	// (0x0007a8cc) list_single_dyc_row_pane_g4_ParamLimits

0x2e85,	// (0x0007a8cc) list_single_dyc_row_pane_g4

0x0003,

0xfc95,	// (0x000876dc) list_single_dyc_row_pane_g_ParamLimits

0xfc95,	// (0x000876dc) list_single_dyc_row_pane_g

0x2e91,	// (0x0007a8d8) list_single_dyc_row_text_pane_ParamLimits

0x2e91,	// (0x0007a8d8) list_single_dyc_row_text_pane

0xd36a,	// (0x00084db1) bg_sp_fs_scroll_pane

0x2eb0,	// (0x0007a8f7) thumb_sp_fs_scroll_pane

0x08d0,	// (0x00078317) list_medium_line_g1_ParamLimits

0x08d0,	// (0x00078317) list_medium_line_g1

0x0ba2,	// (0x000785e9) list_medium_line_t1_ParamLimits

0x0ba2,	// (0x000785e9) list_medium_line_t1

0x08d0,	// (0x00078317) list_medium_line_x2_g1_ParamLimits

0x08d0,	// (0x00078317) list_medium_line_x2_g1

0x08d0,	// (0x00078317) list_medium_line_x2_g2_ParamLimits

0x08d0,	// (0x00078317) list_medium_line_x2_g2

0x0001,

0xf201,	// (0x00086c48) list_medium_line_x2_g_ParamLimits

0xf201,	// (0x00086c48) list_medium_line_x2_g

0x0ba2,	// (0x000785e9) list_medium_line_x2_t1_ParamLimits

0x0ba2,	// (0x000785e9) list_medium_line_x2_t1

0x08d0,	// (0x00078317) list_medium_line_x3_g1_ParamLimits

0x08d0,	// (0x00078317) list_medium_line_x3_g1

0xf077,	// (0x00086abe) list_medium_line_x3_g2_ParamLimits

0xf077,	// (0x00086abe) list_medium_line_x3_g2

0x0001,

0xfc9e,	// (0x000876e5) list_medium_line_x3_g_ParamLimits

0xfc9e,	// (0x000876e5) list_medium_line_x3_g

0x2eb9,	// (0x0007a900) list_medium_line_x3_t1_ParamLimits

0x2eb9,	// (0x0007a900) list_medium_line_x3_t1

0x2ecd,	// (0x0007a914) thumb_sp_fs_scroll_pane_g1

0x2ed6,	// (0x0007a91d) thumb_sp_fs_scroll_pane_g2

0x2edf,	// (0x0007a926) thumb_sp_fs_scroll_pane_g3

0x0002,

0xfca3,	// (0x000876ea) thumb_sp_fs_scroll_pane_g

0x2ecd,	// (0x0007a914) bg_sp_fs_scroll_pane_g1

0x2ed6,	// (0x0007a91d) bg_sp_fs_scroll_pane_g2

0x2edf,	// (0x0007a926) bg_sp_fs_scroll_pane_g3

0x0002,

0xfca3,	// (0x000876ea) bg_sp_fs_scroll_pane_g

0x08d0,	// (0x00078317) list_medium_line_x2_t3_g4_g1_ParamLimits

0x08d0,	// (0x00078317) list_medium_line_x2_t3_g4_g1

0x08d0,	// (0x00078317) list_medium_line_x2_t3_g4_g2_ParamLimits

0x08d0,	// (0x00078317) list_medium_line_x2_t3_g4_g2

0x08d0,	// (0x00078317) list_medium_line_x2_t3_g4_g3_ParamLimits

0x08d0,	// (0x00078317) list_medium_line_x2_t3_g4_g3

0x08d0,	// (0x00078317) list_medium_line_x2_t3_g4_g4_ParamLimits

0x08d0,	// (0x00078317) list_medium_line_x2_t3_g4_g4

0x0003,

0xf206,	// (0x00086c4d) list_medium_line_x2_t3_g4_g_ParamLimits

0xf206,	// (0x00086c4d) list_medium_line_x2_t3_g4_g

0x0ba2,	// (0x000785e9) list_medium_line_x2_t3_g4_t1_ParamLimits

0x0ba2,	// (0x000785e9) list_medium_line_x2_t3_g4_t1

0x0ba2,	// (0x000785e9) list_medium_line_x2_t3_g4_t2_ParamLimits

0x0ba2,	// (0x000785e9) list_medium_line_x2_t3_g4_t2

0x0ba2,	// (0x000785e9) list_medium_line_x2_t3_g4_t3_ParamLimits

0x0ba2,	// (0x000785e9) list_medium_line_x2_t3_g4_t3

0x0002,

0xf1fa,	// (0x00086c41) list_medium_line_x2_t3_g4_t_ParamLimits

0xf1fa,	// (0x00086c41) list_medium_line_x2_t3_g4_t

0x08d0,	// (0x00078317) list_medium_line_g2_g1_ParamLimits

0x08d0,	// (0x00078317) list_medium_line_g2_g1

0x08d0,	// (0x00078317) list_medium_line_g2_g2_ParamLimits

0x08d0,	// (0x00078317) list_medium_line_g2_g2

0x0001,

0xf201,	// (0x00086c48) list_medium_line_g2_g_ParamLimits

0xf201,	// (0x00086c48) list_medium_line_g2_g

0x0ba2,	// (0x000785e9) list_medium_line_g2_t1_ParamLimits

0x0ba2,	// (0x000785e9) list_medium_line_g2_t1

0x08d0,	// (0x00078317) list_medium_line_t3_g2_g1_ParamLimits

0x08d0,	// (0x00078317) list_medium_line_t3_g2_g1

0x08d0,	// (0x00078317) list_medium_line_t3_g2_g2_ParamLimits

0x08d0,	// (0x00078317) list_medium_line_t3_g2_g2

0x0001,

0xf201,	// (0x00086c48) list_medium_line_t3_g2_g_ParamLimits

0xf201,	// (0x00086c48) list_medium_line_t3_g2_g

0x0ba2,	// (0x000785e9) list_medium_line_t3_g2_t1_ParamLimits

0x0ba2,	// (0x000785e9) list_medium_line_t3_g2_t1

0x0ba2,	// (0x000785e9) list_medium_line_t3_g2_t2_ParamLimits

0x0ba2,	// (0x000785e9) list_medium_line_t3_g2_t2

0x0ba2,	// (0x000785e9) list_medium_line_t3_g2_t3_ParamLimits

0x0ba2,	// (0x000785e9) list_medium_line_t3_g2_t3

0x0002,

0xf1fa,	// (0x00086c41) list_medium_line_t3_g2_t_ParamLimits

0xf1fa,	// (0x00086c41) list_medium_line_t3_g2_t

0x0bd0,	// (0x00078617) list_medium_line_right_icon_g1

0x1125,	// (0x00078b6c) list_medium_line_right_icon_t1

0x08d0,	// (0x00078317) list_medium_line_t2_g1_ParamLimits

0x08d0,	// (0x00078317) list_medium_line_t2_g1

0x0ba2,	// (0x000785e9) list_medium_line_t2_t1_ParamLimits

0x0ba2,	// (0x000785e9) list_medium_line_t2_t1

0x0ba2,	// (0x000785e9) list_medium_line_t2_t2_ParamLimits

0x0ba2,	// (0x000785e9) list_medium_line_t2_t2

0x0001,

0xf276,	// (0x00086cbd) list_medium_line_t2_t_ParamLimits

0xf276,	// (0x00086cbd) list_medium_line_t2_t

0x08d0,	// (0x00078317) list_medium_line_t3_g1_ParamLimits

0x08d0,	// (0x00078317) list_medium_line_t3_g1

0x0ba2,	// (0x000785e9) list_medium_line_t3_t1_ParamLimits

0x0ba2,	// (0x000785e9) list_medium_line_t3_t1

0x0ba2,	// (0x000785e9) list_medium_line_t3_t2_ParamLimits

0x0ba2,	// (0x000785e9) list_medium_line_t3_t2

0x0ba2,	// (0x000785e9) list_medium_line_t3_t3_ParamLimits

0x0ba2,	// (0x000785e9) list_medium_line_t3_t3

0x0002,

0xf1fa,	// (0x00086c41) list_medium_line_t3_t_ParamLimits

0xf1fa,	// (0x00086c41) list_medium_line_t3_t

0x08d0,	// (0x00078317) list_medium_line_g3_g1_ParamLimits

0x08d0,	// (0x00078317) list_medium_line_g3_g1

0x08d0,	// (0x00078317) list_medium_line_g3_g2_ParamLimits

0x08d0,	// (0x00078317) list_medium_line_g3_g2

0x08d0,	// (0x00078317) list_medium_line_g3_g3_ParamLimits

0x08d0,	// (0x00078317) list_medium_line_g3_g3

0x0002,

0xf1f3,	// (0x00086c3a) list_medium_line_g3_g_ParamLimits

0xf1f3,	// (0x00086c3a) list_medium_line_g3_g

0x0ba2,	// (0x000785e9) list_medium_line_g3_t1_ParamLimits

0x0ba2,	// (0x000785e9) list_medium_line_g3_t1

0x08d0,	// (0x00078317) list_medium_line_t2_g3_g1_ParamLimits

0x08d0,	// (0x00078317) list_medium_line_t2_g3_g1

0x08d0,	// (0x00078317) list_medium_line_t2_g3_g2_ParamLimits

0x08d0,	// (0x00078317) list_medium_line_t2_g3_g2

0x08d0,	// (0x00078317) list_medium_line_t2_g3_g3_ParamLimits

0x08d0,	// (0x00078317) list_medium_line_t2_g3_g3

0x0002,

0xf1f3,	// (0x00086c3a) list_medium_line_t2_g3_g_ParamLimits

0xf1f3,	// (0x00086c3a) list_medium_line_t2_g3_g

0x0ba2,	// (0x000785e9) list_medium_line_t2_g3_t1_ParamLimits

0x0ba2,	// (0x000785e9) list_medium_line_t2_g3_t1

0x0ba2,	// (0x000785e9) list_medium_line_t2_g3_t2_ParamLimits

0x0ba2,	// (0x000785e9) list_medium_line_t2_g3_t2

0x0001,

0xf276,	// (0x00086cbd) list_medium_line_t2_g3_t_ParamLimits

0xf276,	// (0x00086cbd) list_medium_line_t2_g3_t

0x08d0,	// (0x00078317) list_medium_line_t3_g3_g1_ParamLimits

0x08d0,	// (0x00078317) list_medium_line_t3_g3_g1

0x08d0,	// (0x00078317) list_medium_line_t3_g3_g2_ParamLimits

0x08d0,	// (0x00078317) list_medium_line_t3_g3_g2

0x08d0,	// (0x00078317) list_medium_line_t3_g3_g3_ParamLimits

0x08d0,	// (0x00078317) list_medium_line_t3_g3_g3

0x0002,

0xf1f3,	// (0x00086c3a) list_medium_line_t3_g3_g_ParamLimits

0xf1f3,	// (0x00086c3a) list_medium_line_t3_g3_g

0x0ba2,	// (0x000785e9) list_medium_line_t3_g3_t1_ParamLimits

0x0ba2,	// (0x000785e9) list_medium_line_t3_g3_t1

0x0ba2,	// (0x000785e9) list_medium_line_t3_g3_t2_ParamLimits

0x0ba2,	// (0x000785e9) list_medium_line_t3_g3_t2

0x0ba2,	// (0x000785e9) list_medium_line_t3_g3_t3_ParamLimits

0x0ba2,	// (0x000785e9) list_medium_line_t3_g3_t3

0x0002,

0xf1fa,	// (0x00086c41) list_medium_line_t3_g3_t_ParamLimits

0xf1fa,	// (0x00086c41) list_medium_line_t3_g3_t

0x0bd0,	// (0x00078617) list_medium_line_right_iconx2_g1

0x0bd0,	// (0x00078617) list_medium_line_right_iconx2_g2

0x0001,

0xf3dd,	// (0x00086e24) list_medium_line_right_iconx2_g

0x1125,	// (0x00078b6c) list_medium_line_right_iconx2_t1

0x0bd0,	// (0x00078617) list_medium_line_t2_right_iconx2_g1

0x0bd0,	// (0x00078617) list_medium_line_t2_right_iconx2_g2

0x0001,

0xf3dd,	// (0x00086e24) list_medium_line_t2_right_iconx2_g

0x1125,	// (0x00078b6c) list_medium_line_t2_right_iconx2_t1

0x1125,	// (0x00078b6c) list_medium_line_t2_right_iconx2_t2

0x0001,

0xfc70,	// (0x000876b7) list_medium_line_t2_right_iconx2_t

0x1125,	// (0x00078b6c) list_medium_line_x4_t4_t1

0x1125,	// (0x00078b6c) list_medium_line_x4_t4_t2

0x1125,	// (0x00078b6c) list_medium_line_x4_t4_t3

0x1125,	// (0x00078b6c) list_medium_line_x4_t4_t4

0x0003,

0xf2c8,	// (0x00086d0f) list_medium_line_x4_t4_t

0xbd35,	// (0x0008377c) tport_appsw_pane_ParamLimits

0xbd35,	// (0x0008377c) tport_appsw_pane

0xbd43,	// (0x0008378a) tport_contact_pane_ParamLimits

0xbd43,	// (0x0008378a) tport_contact_pane

0xbd53,	// (0x0008379a) tport_listscroll_pane_ParamLimits

0xbd53,	// (0x0008379a) tport_listscroll_pane

0xbd63,	// (0x000837aa) cell_tport_appsw_pane_ParamLimits

0xbd63,	// (0x000837aa) cell_tport_appsw_pane

0x08de,	// (0x00078325) tport_appsw_pane_g1_ParamLimits

0x08de,	// (0x00078325) tport_appsw_pane_g1

0x2ee8,	// (0x0007a92f) tport_contact_pane_g1

0x2ef1,	// (0x0007a938) tport_contact_pane_t1

0x2eff,	// (0x0007a946) tport_contact_pane_t2

0x0001,

0xfcaa,	// (0x000876f1) tport_contact_pane_t

0x2f0d,	// (0x0007a954) list_tport_pane

0x2f16,	// (0x0007a95d) scroll_pane_cp_030

0xbd96,	// (0x000837dd) cell_tport_appsw_pane_g1

0xbda6,	// (0x000837ed) cell_tport_appsw_pane_t1

0xbdb4,	// (0x000837fb) grid_highlight_pane_cp019

0xbdbc,	// (0x00083803) list_tport_double_graphic_pane_ParamLimits

0xbdbc,	// (0x00083803) list_tport_double_graphic_pane

0x074a,	// (0x00078191) list_highlight_pane_cp023_ParamLimits

0x074a,	// (0x00078191) list_highlight_pane_cp023

0xbdcd,	// (0x00083814) list_tport_double_graphic_pane_g1_ParamLimits

0xbdcd,	// (0x00083814) list_tport_double_graphic_pane_g1

0xbdda,	// (0x00083821) list_tport_double_graphic_pane_t1_ParamLimits

0xbdda,	// (0x00083821) list_tport_double_graphic_pane_t1

0xbdef,	// (0x00083836) list_tport_double_graphic_pane_t2_ParamLimits

0xbdef,	// (0x00083836) list_tport_double_graphic_pane_t2

0x0001,

0xfcb6,	// (0x000876fd) list_tport_double_graphic_pane_t_ParamLimits

0xfcb6,	// (0x000876fd) list_tport_double_graphic_pane_t

0xd36a,	// (0x00084db1) main_cale_note_pane

0x9d1f,	// (0x00081766) cell_vitu2_function_top_wide_pane_cp01_ParamLimits

0x9d1f,	// (0x00081766) cell_vitu2_function_top_wide_pane_cp01

0xb6c7,	// (0x0008310e) wait_bar_pane_cp05_ParamLimits

0x074a,	// (0x00078191) listscroll_cmail_pane

0x2f1f,	// (0x0007a966) list_cmail_pane

0xbe01,	// (0x00083848) list_cmail_body_pane

0xbe29,	// (0x00083870) list_single_cmail_header_caption_pane

0xbe58,	// (0x0008389f) list_single_cmail_header_detail_pane_ParamLimits

0xbe58,	// (0x0008389f) list_single_cmail_header_detail_pane

0x2f2f,	// (0x0007a976) list_single_cmail_header_caption_pane_t1

0xbe91,	// (0x000838d8) list_single_cmail_header_detail_pane_g1_ParamLimits

0xbe91,	// (0x000838d8) list_single_cmail_header_detail_pane_g1

0x3d6a,	// (0x0007b7b1) list_single_cmail_header_detail_pane_g2_ParamLimits

0x3d6a,	// (0x0007b7b1) list_single_cmail_header_detail_pane_g2

0x0002,

0xfcbb,	// (0x00087702) list_single_cmail_header_detail_pane_g_ParamLimits

0xfcbb,	// (0x00087702) list_single_cmail_header_detail_pane_g

0x2f53,	// (0x0007a99a) list_single_cmail_header_detail_pane_t1_ParamLimits

0x2f53,	// (0x0007a99a) list_single_cmail_header_detail_pane_t1

0x2fb3,	// (0x0007a9fa) list_single_cmail_header_editor_pane_bg_ParamLimits

0x2fb3,	// (0x0007a9fa) list_single_cmail_header_editor_pane_bg

0x28e3,	// (0x0007a32a) list_cmail_body_pane_g1

0x2fca,	// (0x0007aa11) list_cmail_body_pane_t1

0xef3a,	// (0x00086981) list_single_cmail_header_editor_pane_bg_g1

0x0de1,	// (0x00078828) list_single_cmail_header_editor_pane_bg_g1_copy1

0xef4a,	// (0x00086991) list_single_cmail_header_editor_pane_bg_g1_copy2

0xef42,	// (0x00086989) list_single_cmail_header_editor_pane_bg_g1_copy3

0x1e31,	// (0x00079878) list_single_cmail_header_editor_pane_bg_g1_copy4

0xef6a,	// (0x000869b1) list_single_cmail_header_editor_pane_bg_g1_copy4_copy1

0xef5a,	// (0x000869a1) list_single_cmail_header_editor_pane_bg_g1_copy4_copy2

0xef62,	// (0x000869a9) list_single_cmail_header_editor_pane_bg_g1_copy4_copy3

0x0dc1,	// (0x00078808) list_single_cmail_header_editor_pane_bg_g1_copy4_copy3_copy1

0xbea7,	// (0x000838ee) calenote_gesture_pane_ParamLimits

0xbea7,	// (0x000838ee) calenote_gesture_pane

0xbec1,	// (0x00083908) calenote_window_pane_ParamLimits

0xbec1,	// (0x00083908) calenote_window_pane

0x2fd8,	// (0x0007aa1f) popup_note_window_cp01

0xbed9,	// (0x00083920) calenote_swipe_1_pane_ParamLimits

0xbed9,	// (0x00083920) calenote_swipe_1_pane

0xba4a,	// (0x00083491) calenote_swipe_2_pane_ParamLimits

0xba4a,	// (0x00083491) calenote_swipe_2_pane

0x2c72,	// (0x0007a6b9) calenote_swipe_1_pane_g1_ParamLimits

0x2c72,	// (0x0007a6b9) calenote_swipe_1_pane_g1

0x2c7f,	// (0x0007a6c6) calenote_swipe_1_pane_g2_ParamLimits

0x2c7f,	// (0x0007a6c6) calenote_swipe_1_pane_g2

0x0001,

0xfc58,	// (0x0008769f) calenote_swipe_1_pane_g_ParamLimits

0xfc58,	// (0x0008769f) calenote_swipe_1_pane_g

0x2fea,	// (0x0007aa31) calenote_swipe_1_pane_t1_ParamLimits

0x2fea,	// (0x0007aa31) calenote_swipe_1_pane_t1

0x2c72,	// (0x0007a6b9) calenote_swipe_2_pane_g1_ParamLimits

0x2c72,	// (0x0007a6b9) calenote_swipe_2_pane_g1

0x3009,	// (0x0007aa50) calenote_swipe_2_pane_g2_ParamLimits

0x3009,	// (0x0007aa50) calenote_swipe_2_pane_g2

0x0001,

0xfcc7,	// (0x0008770e) calenote_swipe_2_pane_g_ParamLimits

0xfcc7,	// (0x0008770e) calenote_swipe_2_pane_g

0x3015,	// (0x0007aa5c) calenote_swipe_2_pane_t1_ParamLimits

0x3015,	// (0x0007aa5c) calenote_swipe_2_pane_t1

0xd36a,	// (0x00084db1) main_mup_navstr_pane

0x8bad,	// (0x000805f4) main_mup3_pane_t7_ParamLimits

0x8bad,	// (0x000805f4) main_mup3_pane_t7

0x93d6,	// (0x00080e1d) main_mp4_pane_g6_ParamLimits

0x93d6,	// (0x00080e1d) main_mp4_pane_g6

0x9774,	// (0x000811bb) main_image3_pane_t4_ParamLimits

0x9774,	// (0x000811bb) main_image3_pane_t4

0xbeec,	// (0x00083933) popup_navstr_preview_pane_ParamLimits

0xbeec,	// (0x00083933) popup_navstr_preview_pane

0xbef8,	// (0x0008393f) scroll_navstr_pane_ParamLimits

0xbef8,	// (0x0008393f) scroll_navstr_pane

0xd36a,	// (0x00084db1) bg_popup_preview_window_pane_cp04

0x303c,	// (0x0007aa83) popup_navstr_preview_pane_t1

0xbf04,	// (0x0008394b) scroll_navstr_pane_g1_ParamLimits

0xbf04,	// (0x0008394b) scroll_navstr_pane_g1

0xbf11,	// (0x00083958) scroll_navstr_pane_t1_ParamLimits

0xbf11,	// (0x00083958) scroll_navstr_pane_t1

0x2fe1,	// (0x0007aa28) bg_button_pane_cp014

0x2fe1,	// (0x0007aa28) bg_button_pane_cp030

0x2c13,	// (0x0007a65a) list_double_fisheye_pane_g4_ParamLimits

0x2c13,	// (0x0007a65a) list_double_fisheye_pane_g4

0x2c1f,	// (0x0007a666) list_double_fisheye_pane_g5_ParamLimits

0x2c1f,	// (0x0007a666) list_double_fisheye_pane_g5

0xf062,	// (0x00086aa9) sp_fs_scroll_pane_cp03

0x2d89,	// (0x0007a7d0) main_sp_fs_ctrlbar_pane_g1_ParamLimits

0x2d95,	// (0x0007a7dc) main_sp_fs_ctrlbar_pane_g2_ParamLimits

0xfc75,	// (0x000876bc) main_sp_fs_ctrlbar_pane_g_ParamLimits

0xbb2f,	// (0x00083576) main_sp_fs_ctrlbar_pane_t1_ParamLimits

0x2f27,	// (0x0007a96e) sp_fs_scroll_pane_cp02

0x0ad8,	// (0x0007851f) popup_sp_fs_calendar_preview_list_single_pane_ParamLimits

0x0ad8,	// (0x0007851f) popup_sp_fs_calendar_preview_list_single_pane

0xd36a,	// (0x00084db1) main_cam6_pano_pane

0x8116,	// (0x0007fb5d) main_mup3_pane_ParamLimits

0xd36a,	// (0x00084db1) main_phacti_pane

0xb59c,	// (0x00082fe3) bg_button_pane_cp11

0xb5b4,	// (0x00082ffb) main_mobtv_info_pane_g2_ParamLimits

0xb5b4,	// (0x00082ffb) main_mobtv_info_pane_g2

0x0001,

0xfbd5,	// (0x0008761c) main_mobtv_info_pane_g_ParamLimits

0xfbd5,	// (0x0008761c) main_mobtv_info_pane_g

0xb766,	// (0x000831ad) sc_clock_pane_t5_ParamLimits

0xb766,	// (0x000831ad) sc_clock_pane_t5

0xb807,	// (0x0008324e) main_radioblah_pane_g1_ParamLimits

0x2b81,	// (0x0007a5c8) main_radioblah_pane_t3_ParamLimits

0x2b81,	// (0x0007a5c8) main_radioblah_pane_t3

0x2b99,	// (0x0007a5e0) main_radioblah_pane_t4_ParamLimits

0x2b99,	// (0x0007a5e0) main_radioblah_pane_t4

0xb825,	// (0x0008326c) main_radioblah_text_pane_ParamLimits

0xb825,	// (0x0008326c) main_radioblah_text_pane

0xb832,	// (0x00083279) main_radioblah_info_pane_g1_ParamLimits

0xb8c7,	// (0x0008330e) main_radioblah_info_pane_t4_ParamLimits

0xb8c7,	// (0x0008330e) main_radioblah_info_pane_t4

0x074a,	// (0x00078191) main_sp_fs_calendar_pane

0xbf23,	// (0x0008396a) main_phacti_pane_g1

0xbf2b,	// (0x00083972) phacti_note_pane_ParamLimits

0xbf2b,	// (0x00083972) phacti_note_pane

0x3053,	// (0x0007aa9a) phacti_term_pane_ParamLimits

0x3053,	// (0x0007aa9a) phacti_term_pane

0x3068,	// (0x0007aaaf) phacti_note_pane_t1_ParamLimits

0x3068,	// (0x0007aaaf) phacti_note_pane_t1

0x307f,	// (0x0007aac6) phacti_term_pane_g1

0x3087,	// (0x0007aace) phacti_term_pane_t1_ParamLimits

0x3087,	// (0x0007aace) phacti_term_pane_t1

0x30b1,	// (0x0007aaf8) popup_sp_fs_calendar_preview_list_single_pane_g1

0x30b9,	// (0x0007ab00) popup_sp_fs_calendar_preview_list_single_pane_g2

0x0001,

0xfcd1,	// (0x00087718) popup_sp_fs_calendar_preview_list_single_pane_g

0x30c1,	// (0x0007ab08) popup_sp_fs_calendar_preview_list_single_pane_t1_ParamLimits

0x30c1,	// (0x0007ab08) popup_sp_fs_calendar_preview_list_single_pane_t1

0x30d7,	// (0x0007ab1e) aid_popup_sp_fs_bg_corner_pane

0x0bd0,	// (0x00078617) popup_sp_fs_calendar_preview_bg_pane_g1

0xd36a,	// (0x00084db1) popup_sp_fs_calendar_preview_bg_pane

0x30df,	// (0x0007ab26) popup_sp_fs_calendar_preview_list_pane

0xe228,	// (0x00085c6f) bg_main_sp_fs_cale_pane_ParamLimits

0xe228,	// (0x00085c6f) bg_main_sp_fs_cale_pane

0x30f0,	// (0x0007ab37) listscroll_cale_mrui_pane_ParamLimits

0x30f0,	// (0x0007ab37) listscroll_cale_mrui_pane

0x3105,	// (0x0007ab4c) listscroll_sp_fs_schedule_track_pane

0x310e,	// (0x0007ab55) main_sp_fs_ctrlbar_pane_cp01_ParamLimits

0x310e,	// (0x0007ab55) main_sp_fs_ctrlbar_pane_cp01

0x3121,	// (0x0007ab68) main_sp_fs_ribbon_pane

0x3129,	// (0x0007ab70) popup_sp_fs_cale_preview_window

0xbf8e,	// (0x000839d5) list_single_sp_fs_schedule_track_pane_ParamLimits

0xbf8e,	// (0x000839d5) list_single_sp_fs_schedule_track_pane

0xd8d7,	// (0x0008531e) bg_sp_fs_highlight_list_pane_cp03_ParamLimits

0xd8d7,	// (0x0008531e) bg_sp_fs_highlight_list_pane_cp03

0xbfb4,	// (0x000839fb) list_single_sp_fs_schedule_track_pane_g1_ParamLimits

0xbfb4,	// (0x000839fb) list_single_sp_fs_schedule_track_pane_g1

0xbfc0,	// (0x00083a07) list_single_sp_fs_schedule_track_pane_g2_ParamLimits

0xbfc0,	// (0x00083a07) list_single_sp_fs_schedule_track_pane_g2

0x0001,

0xfcd6,	// (0x0008771d) list_single_sp_fs_schedule_track_pane_g_ParamLimits

0xfcd6,	// (0x0008771d) list_single_sp_fs_schedule_track_pane_g

0xbfcc,	// (0x00083a13) list_single_sp_fs_schedule_track_pane_t1_ParamLimits

0xbfcc,	// (0x00083a13) list_single_sp_fs_schedule_track_pane_t1

0xbfe4,	// (0x00083a2b) sp_fs_schedule_track_pane_ParamLimits

0xbfe4,	// (0x00083a2b) sp_fs_schedule_track_pane

0x313b,	// (0x0007ab82) sp_fs_schedule_track_pane_g1

0x3143,	// (0x0007ab8a) sp_fs_schedule_track_pane_g2

0x314b,	// (0x0007ab92) sp_fs_schedule_track_pane_g3

0x3153,	// (0x0007ab9a) sp_fs_schedule_track_pane_g4

0x315b,	// (0x0007aba2) sp_fs_schedule_track_pane_g5

0x0004,

0xfcdb,	// (0x00087722) sp_fs_schedule_track_pane_g

0xef3a,	// (0x00086981) bg_sp_fs_schedule_viewer_highlight_g1

0x0de1,	// (0x00078828) bg_sp_fs_schedule_viewer_highlight_g2

0xef42,	// (0x00086989) bg_sp_fs_schedule_viewer_highlight_g3

0xef4a,	// (0x00086991) bg_sp_fs_schedule_viewer_highlight_g4

0x1e31,	// (0x00079878) bg_sp_fs_schedule_viewer_highlight_g5

0xef5a,	// (0x000869a1) bg_sp_fs_schedule_viewer_highlight_g6

0xef62,	// (0x000869a9) bg_sp_fs_schedule_viewer_highlight_g7

0xef6a,	// (0x000869b1) bg_sp_fs_schedule_viewer_highlight_g8

0x0dc1,	// (0x00078808) bg_sp_fs_schedule_viewer_highlight_g9

0x0008,

0xfce6,	// (0x0008772d) bg_sp_fs_schedule_viewer_highlight_g

0xd36a,	// (0x00084db1) bg_main_sp_fs_ribbon_pane

0xbff4,	// (0x00083a3b) main_sp_fs_ribbon_pane_g1

0x3163,	// (0x0007abaa) main_sp_fs_ribbon_pane_t1

0xbffd,	// (0x00083a44) main_sp_fs_ribbon_pane_t2

0x3172,	// (0x0007abb9) main_sp_fs_ribbon_pane_t3

0x0002,

0xfcf9,	// (0x00087740) main_sp_fs_ribbon_pane_t

0x3181,	// (0x0007abc8) main_sp_fs_ribbon_scheduler_pane

0x3189,	// (0x0007abd0) bg_main_sp_fs_ribbon_pane_g1

0x3192,	// (0x0007abd9) bg_main_sp_fs_ribbon_pane_g2

0x319b,	// (0x0007abe2) bg_main_sp_fs_ribbon_pane_g3

0x0002,

0xfd00,	// (0x00087747) bg_main_sp_fs_ribbon_pane_g

0x31a3,	// (0x0007abea) main_sp_fs_ribbon_scheduler_pane_g1

0x31ac,	// (0x0007abf3) main_sp_fs_ribbon_scheduler_pane_g2

0x31b5,	// (0x0007abfc) main_sp_fs_ribbon_scheduler_pane_g3

0x0002,

0xfd07,	// (0x0008774e) main_sp_fs_ribbon_scheduler_pane_g

0x31be,	// (0x0007ac05) list_cale_mrui_pane

0xc00c,	// (0x00083a53) sp_fs_scroll_pane_cp07_ParamLimits

0xc00c,	// (0x00083a53) sp_fs_scroll_pane_cp07

0xc028,	// (0x00083a6f) bg_sp_fs_schedule_viewer_highlight_ParamLimits

0xc028,	// (0x00083a6f) bg_sp_fs_schedule_viewer_highlight

0x31cb,	// (0x0007ac12) list_single_sp_fs_schedule_track_pane_cp01

0x31d3,	// (0x0007ac1a) list_sp_fs_schedule_track_pane

0x31db,	// (0x0007ac22) sp_fs_scroll_pane_cp06_ParamLimits

0x31db,	// (0x0007ac22) sp_fs_scroll_pane_cp06

0x0bd0,	// (0x00078617) bgmain_sp_fs_calendar_pane_g1

0xc035,	// (0x00083a7c) list_single_cale_mrui_pane_ParamLimits

0xc035,	// (0x00083a7c) list_single_cale_mrui_pane

0x31ed,	// (0x0007ac34) list_single_cale_mrui_row_pane_ParamLimits

0x31ed,	// (0x0007ac34) list_single_cale_mrui_row_pane

0x31fa,	// (0x0007ac41) list_single_cale_mrui_row_pane_g1_ParamLimits

0x31fa,	// (0x0007ac41) list_single_cale_mrui_row_pane_g1

0x323f,	// (0x0007ac86) list_single_cale_mrui_row_pane_t1_ParamLimits

0x323f,	// (0x0007ac86) list_single_cale_mrui_row_pane_t1

0xc063,	// (0x00083aaa) list_single_cale_mrui_row_pane_t2_ParamLimits

0xc063,	// (0x00083aaa) list_single_cale_mrui_row_pane_t2

0x3251,	// (0x0007ac98) list_single_cale_mrui_row_pane_t3_ParamLimits

0x3251,	// (0x0007ac98) list_single_cale_mrui_row_pane_t3

0x3280,	// (0x0007acc7) list_single_cale_mrui_row_pane_t4_ParamLimits

0x3280,	// (0x0007acc7) list_single_cale_mrui_row_pane_t4

0x0003,

0xfd15,	// (0x0008775c) list_single_cale_mrui_row_pane_t_ParamLimits

0xfd15,	// (0x0008775c) list_single_cale_mrui_row_pane_t

0xc0c9,	// (0x00083b10) list_single_cmail_header_editor_pane_bg_cp01_ParamLimits

0xc0c9,	// (0x00083b10) list_single_cmail_header_editor_pane_bg_cp01

0xc0e9,	// (0x00083b30) list_single_cmail_header_editor_pane_bg_cp02_ParamLimits

0xc0e9,	// (0x00083b30) list_single_cmail_header_editor_pane_bg_cp02

0xc105,	// (0x00083b4c) main_radioblah_text_pane_t1_ParamLimits

0xc105,	// (0x00083b4c) main_radioblah_text_pane_t1

0x32af,	// (0x0007acf6) cam6_indi_pane_cp01

0x32b7,	// (0x0007acfe) cam6_mode_pane_cp01

0x32bf,	// (0x0007ad06) cam6_pano_pane

0x32c8,	// (0x0007ad0f) cam6_zoom_pane_cp01

0x32d0,	// (0x0007ad17) cam6_pano_image_pane

0x32db,	// (0x0007ad22) cam6_pano_pane_g1

0x28e3,	// (0x0007a32a) cam6_pano_pane_g2

0x32e4,	// (0x0007ad2b) cam6_pano_pane_g3

0x32ed,	// (0x0007ad34) cam6_pano_pane_g4

0xebf5,	// (0x0008663c) cam6_pano_pane_g5

0x32f6,	// (0x0007ad3d) cam6_pano_pane_g6

0x3300,	// (0x0007ad47) cam6_pano_pane_g7

0x3308,	// (0x0007ad4f) cam6_pano_pane_g8

0x3311,	// (0x0007ad58) cam6_pano_pane_g9

0x0008,

0xfd1e,	// (0x00087765) cam6_pano_pane_g

0xd36a,	// (0x00084db1) main_browser_tag_pane

0x3034,	// (0x0007aa7b) grid_navstr_albumart_pane

0x331c,	// (0x0007ad63) cell_navstr_albumart_pane_ParamLimits

0x331c,	// (0x0007ad63) cell_navstr_albumart_pane

0x333c,	// (0x0007ad83) cell_navstr_albumart_pane_g1

0xe084,	// (0x00085acb) cell_navstr_albumart_pane_g2

0xe094,	// (0x00085adb) cell_navstr_albumart_pane_g3

0xe08c,	// (0x00085ad3) cell_navstr_albumart_pane_g4

0x0003,

0xfd31,	// (0x00087778) cell_navstr_albumart_pane_g

0xc120,	// (0x00083b67) bt_list_pane_ParamLimits

0xc120,	// (0x00083b67) bt_list_pane

0xc141,	// (0x00083b88) bt_list_pane_t1

0xc150,	// (0x00083b97) bt_list_pane_t2

0x0001,

0xfd3a,	// (0x00087781) bt_list_pane_t

0xd36a,	// (0x00084db1) main_cale_prevew_pane

0xc15f,	// (0x00083ba6) popup_cale_preview_window_ParamLimits

0xc15f,	// (0x00083ba6) popup_cale_preview_window

0x074a,	// (0x00078191) bg_popup_preview_window_pane_cp05_ParamLimits

0x074a,	// (0x00078191) bg_popup_preview_window_pane_cp05

0x3344,	// (0x0007ad8b) list_cale_preview_pane_ParamLimits

0x3344,	// (0x0007ad8b) list_cale_preview_pane

0xc178,	// (0x00083bbf) list_double_cale_preview_pane_ParamLimits

0xc178,	// (0x00083bbf) list_double_cale_preview_pane

0xc18a,	// (0x00083bd1) list_single_cale_preview_pane_ParamLimits

0xc18a,	// (0x00083bd1) list_single_cale_preview_pane

0xc19e,	// (0x00083be5) list_single_cale_preview_pane_g1

0xc1a6,	// (0x00083bed) list_single_cale_preview_pane_t1_ParamLimits

0xc1a6,	// (0x00083bed) list_single_cale_preview_pane_t1

0xc1bb,	// (0x00083c02) list_double_cale_preview_pane_g1

0xc1c3,	// (0x00083c0a) list_double_cale_preview_pane_t1_ParamLimits

0xc1c3,	// (0x00083c0a) list_double_cale_preview_pane_t1

0xc1d8,	// (0x00083c1f) list_double_cale_preview_pane_t2_ParamLimits

0xc1d8,	// (0x00083c1f) list_double_cale_preview_pane_t2

0x0001,

0xfd3f,	// (0x00087786) list_double_cale_preview_pane_t_ParamLimits

0xfd3f,	// (0x00087786) list_double_cale_preview_pane_t

0xd36a,	// (0x00084db1) main_ezdial_pane

0x074a,	// (0x00078191) main_sp_fs_email_pane_ParamLimits

0xbaa8,	// (0x000834ef) cmail_ddmenu_btn01_pane_ParamLimits

0xbaa8,	// (0x000834ef) cmail_ddmenu_btn01_pane

0xbabd,	// (0x00083504) cmail_ddmenu_btn02_pane_ParamLimits

0xbabd,	// (0x00083504) cmail_ddmenu_btn02_pane

0xbad5,	// (0x0008351c) cmail_ddmenu_btn03_pane_ParamLimits

0xbad5,	// (0x0008351c) cmail_ddmenu_btn03_pane

0xbb6a,	// (0x000835b1) main_sp_fs_ctrlbar_pane_ParamLimits

0xbb80,	// (0x000835c7) main_sp_fs_listscroll_pane_te_cp01_ParamLimits

0xbe01,	// (0x00083848) list_cmail_body_pane_ParamLimits

0x2f3d,	// (0x0007a984) bg_button_pane_cp12

0x2f46,	// (0x0007a98d) list_single_cmail_header_detail_pane_g3_ParamLimits

0x2f46,	// (0x0007a98d) list_single_cmail_header_detail_pane_g3

0x2f8f,	// (0x0007a9d6) list_single_cmail_header_detail_pane_t2_ParamLimits

0x2f8f,	// (0x0007a9d6) list_single_cmail_header_detail_pane_t2

0x0001,

0xfcc2,	// (0x00087709) list_single_cmail_header_detail_pane_t_ParamLimits

0xfcc2,	// (0x00087709) list_single_cmail_header_detail_pane_t

0x309c,	// (0x0007aae3) phacti_term_pane_t2_ParamLimits

0x309c,	// (0x0007aae3) phacti_term_pane_t2

0x0001,

0xfccc,	// (0x00087713) phacti_term_pane_t_ParamLimits

0xfccc,	// (0x00087713) phacti_term_pane_t

0x3350,	// (0x0007ad97) aid_size_list_single_double

0xc1f0,	// (0x00083c37) popup_ezdial_listscroll_window

0xc214,	// (0x00083c5b) popup_number_entry_window_cp01

0x0b90,	// (0x000785d7) bg_popup_call_pane_cp09

0x335c,	// (0x0007ada3) ezdial_list_pane

0x3364,	// (0x0007adab) scroll_pane_cp23

0x1c1d,	// (0x00079664) bg_button_pane_cp028_ParamLimits

0x1c1d,	// (0x00079664) bg_button_pane_cp028

0xc222,	// (0x00083c69) cmail_ddmenu_btn01_pane_g1_ParamLimits

0xc222,	// (0x00083c69) cmail_ddmenu_btn01_pane_g1

0xc232,	// (0x00083c79) cmail_ddmenu_btn01_pane_g2_ParamLimits

0xc232,	// (0x00083c79) cmail_ddmenu_btn01_pane_g2

0x0001,

0xfd44,	// (0x0008778b) cmail_ddmenu_btn01_pane_g_ParamLimits

0xfd44,	// (0x0008778b) cmail_ddmenu_btn01_pane_g

0x336c,	// (0x0007adb3) cmail_ddmenu_btn01_pane_t1_ParamLimits

0x336c,	// (0x0007adb3) cmail_ddmenu_btn01_pane_t1

0xe228,	// (0x00085c6f) bg_button_pane_cp029_ParamLimits

0xe228,	// (0x00085c6f) bg_button_pane_cp029

0xc232,	// (0x00083c79) cmail_ddmenu_btn02_pane_g1_ParamLimits

0xc232,	// (0x00083c79) cmail_ddmenu_btn02_pane_g1

0xc24a,	// (0x00083c91) cmail_ddmenu_btn02_pane_t1_ParamLimits

0xc24a,	// (0x00083c91) cmail_ddmenu_btn02_pane_t1

0xd8d7,	// (0x0008531e) bg_button_pane_cp031_ParamLimits

0xd8d7,	// (0x0008531e) bg_button_pane_cp031

0xc232,	// (0x00083c79) cmail_ddmenu_btn03_pane_g1_ParamLimits

0xc232,	// (0x00083c79) cmail_ddmenu_btn03_pane_g1

0xc24a,	// (0x00083c91) cmail_ddmenu_btn03_pane_t1_ParamLimits

0xc24a,	// (0x00083c91) cmail_ddmenu_btn03_pane_t1

0x9611,	// (0x00081058) cell_dialer2_keypad_pane_t1_ParamLimits

0x962b,	// (0x00081072) cell_dialer2_keypad_pane_t1_copy1_ParamLimits

0x962b,	// (0x00081072) cell_dialer2_keypad_pane_t1_copy1

0xb3dd,	// (0x00082e24) ncimui_group_button_pane

0x074a,	// (0x00078191) main_sp_fs_calendar_pane_ParamLimits

0xbe29,	// (0x00083870) list_single_cmail_header_caption_pane_ParamLimits

0x30e7,	// (0x0007ab2e) aid_recal_txt_sm_pane

0xd36a,	// (0x00084db1) mian_recal_day_pane

0x3129,	// (0x0007ab70) popup_sp_fs_cale_preview_window_ParamLimits

0x3381,	// (0x0007adc8) list_recal_day_pane

0x33c3,	// (0x0007ae0a) list_single_recal_day_pane_ParamLimits

0x33c3,	// (0x0007ae0a) list_single_recal_day_pane

0x33d5,	// (0x0007ae1c) list_single_recal_day_pane_g1_ParamLimits

0x33d5,	// (0x0007ae1c) list_single_recal_day_pane_g1

0x33e1,	// (0x0007ae28) list_single_recal_day_pane_g2_ParamLimits

0x33e1,	// (0x0007ae28) list_single_recal_day_pane_g2

0x33ed,	// (0x0007ae34) list_single_recal_day_pane_g3_ParamLimits

0x33ed,	// (0x0007ae34) list_single_recal_day_pane_g3

0xc26e,	// (0x00083cb5) list_single_recal_day_pane_g4_ParamLimits

0xc26e,	// (0x00083cb5) list_single_recal_day_pane_g4

0x33f9,	// (0x0007ae40) list_single_recal_day_pane_g5_ParamLimits

0x33f9,	// (0x0007ae40) list_single_recal_day_pane_g5

0x3405,	// (0x0007ae4c) list_single_recal_day_pane_g6_ParamLimits

0x3405,	// (0x0007ae4c) list_single_recal_day_pane_g6

0x0004,

0xfd53,	// (0x0008779a) list_single_recal_day_pane_g_ParamLimits

0xfd53,	// (0x0008779a) list_single_recal_day_pane_g

0x3419,	// (0x0007ae60) list_single_recal_day_pane_t1

0x342b,	// (0x0007ae72) list_single_recal_day_pane_t2

0x0001,

0xfd5e,	// (0x000877a5) list_single_recal_day_pane_t

0xc286,	// (0x00083ccd) ncimui_query_button_pane_ParamLimits

0xc286,	// (0x00083ccd) ncimui_query_button_pane

0xc296,	// (0x00083cdd) ncimui_query_button_pane_t1_ParamLimits

0xc296,	// (0x00083cdd) ncimui_query_button_pane_t1

0x343d,	// (0x0007ae84) ncimui_query_button_pane_t2_ParamLimits

0x343d,	// (0x0007ae84) ncimui_query_button_pane_t2

0x0001,

0xfd63,	// (0x000877aa) ncimui_query_button_pane_t_ParamLimits

0xfd63,	// (0x000877aa) ncimui_query_button_pane_t

0xc2a9,	// (0x00083cf0) query_button_pane_ParamLimits

0xc2a9,	// (0x00083cf0) query_button_pane

0xd36a,	// (0x00084db1) bg_button_pane_cp0028

0x3450,	// (0x0007ae97) query_button_pane_t1

0x813e,	// (0x0007fb85) main_tport_pane_ParamLimits

0xbd0b,	// (0x00083752) bg_popup_window_pane_cp01_ParamLimits

0xbd0b,	// (0x00083752) bg_popup_window_pane_cp01

0xbd19,	// (0x00083760) heading_pane_cp08_ParamLimits

0xbd19,	// (0x00083760) heading_pane_cp08

0xbd27,	// (0x0008376e) heading_pane_cp07_ParamLimits

0xbd27,	// (0x0008376e) heading_pane_cp07

0xbd96,	// (0x000837dd) cell_tport_appsw_pane_g2

0x0002,

0xfcaf,	// (0x000876f6) cell_tport_appsw_pane_g

0x17c2,	// (0x00079209) input_candi_list_open_g1

0x0fd2,	// (0x00078a19) list_cale_time_pane_g6_ParamLimits

0x0fd2,	// (0x00078a19) list_cale_time_pane_g6

0x8638,	// (0x0008007f) aid_size_touch_calib_1_ParamLimits

0x8638,	// (0x0008007f) aid_size_touch_calib_1

0x8644,	// (0x0008008b) aid_size_touch_calib_2_ParamLimits

0x8644,	// (0x0008008b) aid_size_touch_calib_2

0x8652,	// (0x00080099) aid_size_touch_calib_3_ParamLimits

0x8652,	// (0x00080099) aid_size_touch_calib_3

0x8662,	// (0x000800a9) aid_size_touch_calib_4_ParamLimits

0x8662,	// (0x000800a9) aid_size_touch_calib_4

0x8670,	// (0x000800b7) main_touch_calib_button_group_pane_ParamLimits

0x8670,	// (0x000800b7) main_touch_calib_button_group_pane

0x867e,	// (0x000800c5) main_touch_calib_pane_g1_ParamLimits

0x868a,	// (0x000800d1) main_touch_calib_pane_g2_ParamLimits

0x8696,	// (0x000800dd) main_touch_calib_pane_g3_ParamLimits

0x86a2,	// (0x000800e9) main_touch_calib_pane_g4_ParamLimits

0xf6f1,	// (0x00087138) main_touch_calib_pane_g_ParamLimits

0x86ae,	// (0x000800f5) main_touch_calib_pane_t1_ParamLimits

0x86c7,	// (0x0008010e) main_touch_calib_pane_t2_ParamLimits

0x86e0,	// (0x00080127) main_touch_calib_pane_t3_ParamLimits

0x86f6,	// (0x0008013d) main_touch_calib_pane_t4_ParamLimits

0x870c,	// (0x00080153) main_touch_calib_pane_t5_ParamLimits

0xf6fa,	// (0x00087141) main_touch_calib_pane_t_ParamLimits

0xe992,	// (0x000863d9) list_single_fp_cale_pane_g3_ParamLimits

0xe992,	// (0x000863d9) list_single_fp_cale_pane_g3

0x8116,	// (0x0007fb5d) bg_button_pane_cp012_ParamLimits

0x8116,	// (0x0007fb5d) bg_vkb2_func_pane_cp03_ParamLimits

0xa4e9,	// (0x00081f30) cell_vitu2_function_top_pane_g1_ParamLimits

0x8116,	// (0x0007fb5d) bg_vkb2_func_pane_cp04_ParamLimits

0xb365,	// (0x00082dac) main_ncimui_button_group_pane_ParamLimits

0xb365,	// (0x00082dac) main_ncimui_button_group_pane

0xb3cb,	// (0x00082e12) main_ncimui_pane_t3_ParamLimits

0xb3cb,	// (0x00082e12) main_ncimui_pane_t3

0x304a,	// (0x0007aa91) phacti_button_group_pane

0x3350,	// (0x0007ad97) aid_size_list_single_double_ParamLimits

0xc1f0,	// (0x00083c37) popup_ezdial_listscroll_window_ParamLimits

0xc214,	// (0x00083c5b) popup_number_entry_window_cp01_ParamLimits

0xc2b6,	// (0x00083cfd) phacti_button_pane_ParamLimits

0xc2b6,	// (0x00083cfd) phacti_button_pane

0xd36a,	// (0x00084db1) bg_button_pane_cp14

0x345e,	// (0x0007aea5) phacti_button_pane_t1

0xc2c7,	// (0x00083d0e) main_touch_calib_button_pane_ParamLimits

0xc2c7,	// (0x00083d0e) main_touch_calib_button_pane

0x0964,	// (0x000783ab) bg_button_pane_cp18_ParamLimits

0x0964,	// (0x000783ab) bg_button_pane_cp18

0x346c,	// (0x0007aeb3) main_touch_calib_button_pane_t1_ParamLimits

0x346c,	// (0x0007aeb3) main_touch_calib_button_pane_t1

0x3482,	// (0x0007aec9) main_touch_calib_button_pane_t2_ParamLimits

0x3482,	// (0x0007aec9) main_touch_calib_button_pane_t2

0x0001,

0xfd68,	// (0x000877af) main_touch_calib_button_pane_t_ParamLimits

0xfd68,	// (0x000877af) main_touch_calib_button_pane_t

0xd36a,	// (0x00084db1) cell_ncimui_button_pane

0xd36a,	// (0x00084db1) bg_button_pane_cp032

0x34a0,	// (0x0007aee7) cell_ncimui_button_pane_t1

0x9687,	// (0x000810ce) image3_infobar_pane_ParamLimits

0x9687,	// (0x000810ce) image3_infobar_pane

0xb788,	// (0x000831cf) fs_bigclock_status_pane_ParamLimits

0xb788,	// (0x000831cf) fs_bigclock_status_pane

0xb795,	// (0x000831dc) main_fs_bigclock_clock_pane_ParamLimits

0xb795,	// (0x000831dc) main_fs_bigclock_clock_pane

0xb7a9,	// (0x000831f0) main_fs_bigclock_indi_pane_ParamLimits

0xb7a9,	// (0x000831f0) main_fs_bigclock_indi_pane

0xb7d1,	// (0x00083218) main_fs_bigclock_swipe_pane_ParamLimits

0xb7d1,	// (0x00083218) main_fs_bigclock_swipe_pane

0xd36a,	// (0x00084db1) main_fs_clock_dumped_data

0x29f0,	// (0x0007a437) list_single_fs_bigclock_indicator_pane_g1_ParamLimits

0x29f0,	// (0x0007a437) list_single_fs_bigclock_indicator_pane_g1

0x2a0c,	// (0x0007a453) list_single_fs_bigclock_indicator_pane_g2_ParamLimits

0x2a0c,	// (0x0007a453) list_single_fs_bigclock_indicator_pane_g2

0x2a26,	// (0x0007a46d) list_single_fs_bigclock_indicator_pane_g3_ParamLimits

0x2a26,	// (0x0007a46d) list_single_fs_bigclock_indicator_pane_g3

0x2a40,	// (0x0007a487) list_single_fs_bigclock_indicator_pane_g4_ParamLimits

0x2a40,	// (0x0007a487) list_single_fs_bigclock_indicator_pane_g4

0x0004,

0xfc09,	// (0x00087650) list_single_fs_bigclock_indicator_pane_g_ParamLimits

0xfc09,	// (0x00087650) list_single_fs_bigclock_indicator_pane_g

0x2a6b,	// (0x0007a4b2) list_single_fs_bigclock_indicator_pane_t1_ParamLimits

0x2a6b,	// (0x0007a4b2) list_single_fs_bigclock_indicator_pane_t1

0x2a93,	// (0x0007a4da) list_single_fs_bigclock_indicator_pane_t2_ParamLimits

0x2a93,	// (0x0007a4da) list_single_fs_bigclock_indicator_pane_t2

0x2abb,	// (0x0007a502) list_single_fs_bigclock_indicator_pane_t3_ParamLimits

0x2abb,	// (0x0007a502) list_single_fs_bigclock_indicator_pane_t3

0x2ae3,	// (0x0007a52a) list_single_fs_bigclock_indicator_pane_t4_ParamLimits

0x2ae3,	// (0x0007a52a) list_single_fs_bigclock_indicator_pane_t4

0x0004,

0xfc14,	// (0x0008765b) list_single_fs_bigclock_indicator_pane_t_ParamLimits

0xfc14,	// (0x0008765b) list_single_fs_bigclock_indicator_pane_t

0x34ae,	// (0x0007aef5) image3_infobar_fav_pane_ParamLimits

0x34ae,	// (0x0007aef5) image3_infobar_fav_pane

0x34be,	// (0x0007af05) image3_infobar_loc_pane_ParamLimits

0x34be,	// (0x0007af05) image3_infobar_loc_pane

0x34d2,	// (0x0007af19) image3_infobar_time_pane_ParamLimits

0x34d2,	// (0x0007af19) image3_infobar_time_pane

0x0bd0,	// (0x00078617) image3_infobar_time_pane_g1

0x34e2,	// (0x0007af29) image3_infobar_time_pane_t1

0x0bd0,	// (0x00078617) image3_infobar_loc_pane_g1

0x34f0,	// (0x0007af37) image3_infobar_loc_pane_g2

0x0001,

0xfd6d,	// (0x000877b4) image3_infobar_loc_pane_g

0x34f8,	// (0x0007af3f) image3_infobar_loc_pane_t1

0x0bd0,	// (0x00078617) image3_infobar_fav_pane_g1

0x3506,	// (0x0007af4d) image3_infobar_fav_pane_g2

0x0001,

0xfd72,	// (0x000877b9) image3_infobar_fav_pane_g

0x350e,	// (0x0007af55) fs_bigclock_status_battery_pane

0x3517,	// (0x0007af5e) fs_bigclock_status_signal_pane

0x3520,	// (0x0007af67) fs_bigclock_status_title_pane

0x3529,	// (0x0007af70) fs_bigclock_status_signal_pane_g1

0x3532,	// (0x0007af79) fs_bigclock_status_signal_pane_g2

0x0001,

0xfd77,	// (0x000877be) fs_bigclock_status_signal_pane_g

0x353a,	// (0x0007af81) fs_bigclock_status_battery_pane_g1

0x3543,	// (0x0007af8a) fs_bigclock_status_battery_pane_g2

0x0001,

0xfd7c,	// (0x000877c3) fs_bigclock_status_battery_pane_g

0x354b,	// (0x0007af92) fs_bigclock_status_title_pane_t1

0xc2d7,	// (0x00083d1e) main_fs_bigclock_clock_pane_g1

0xc2d7,	// (0x00083d1e) main_fs_bigclock_clock_pane_g2

0xc2e4,	// (0x00083d2b) main_fs_bigclock_clock_pane_g3

0xc2e4,	// (0x00083d2b) main_fs_bigclock_clock_pane_g4

0x0003,

0xfd81,	// (0x000877c8) main_fs_bigclock_clock_pane_g

0xc2f0,	// (0x00083d37) main_fs_bigclock_clock_pane_t1

0xc303,	// (0x00083d4a) main_fs_bigclock_clock_pane_t2

0x0001,

0xfd8a,	// (0x000877d1) main_fs_bigclock_clock_pane_t

0x3559,	// (0x0007afa0) list_single_fs_bigclock_indicator_pane_ParamLimits

0x3559,	// (0x0007afa0) list_single_fs_bigclock_indicator_pane

0x356a,	// (0x0007afb1) list_single_fs_bigclock_pane_ParamLimits

0x356a,	// (0x0007afb1) list_single_fs_bigclock_pane

0x3590,	// (0x0007afd7) main_fs_bigclock_indicator_pane_t1

0x359f,	// (0x0007afe6) list_single_fs_bigclock_pane_g1

0x35a7,	// (0x0007afee) list_single_fs_bigclock_pane_t1

0x0bd0,	// (0x00078617) main_fs_bigclock_swipe_pane_g1

0x35ea,	// (0x0007b031) main_fs_bigclock_swipe_pane_g2

0x0001,

0xfd9b,	// (0x000877e2) main_fs_bigclock_swipe_pane_g

0x35f2,	// (0x0007b039) main_fs_bigclock_swipe_pane_t1_ParamLimits

0x35f2,	// (0x0007b039) main_fs_bigclock_swipe_pane_t1

0x6d65,	// (0x0007e7ac) call_type_pane_ParamLimits

0xd36a,	// (0x00084db1) main_btmg_pane

0x3226,	// (0x0007ac6d) list_single_cale_mrui_row_pane_g2_ParamLimits

0x3226,	// (0x0007ac6d) list_single_cale_mrui_row_pane_g2

0x0002,

0xfd0e,	// (0x00087755) list_single_cale_mrui_row_pane_g_ParamLimits

0xfd0e,	// (0x00087755) list_single_cale_mrui_row_pane_g

0x33aa,	// (0x0007adf1) list_recal_vselct_arw_lo_pane

0x33b2,	// (0x0007adf9) list_recal_vselct_arw_up_pane

0x33ba,	// (0x0007ae01) list_recal_vselct_pane

0xc35a,	// (0x00083da1) btmg_button_pane

0xc366,	// (0x00083dad) main_btmg_pane_g1

0xd36a,	// (0x00084db1) bg_button_pane_cp044

0x360f,	// (0x0007b056) btmg_button_pane_t1

0xe214,	// (0x00085c5b) aid_listscroll_gen

0x074a,	// (0x00078191) main_cntbar_detail_pane

0x2f1f,	// (0x0007a966) list_cmail_folder_pane

0xf062,	// (0x00086aa9) sp_fs_scroll_pane_cp03_ParamLimits

0xc36e,	// (0x00083db5) list_single_fs_dyc_pane_cp01_ParamLimits

0xc36e,	// (0x00083db5) list_single_fs_dyc_pane_cp01

0x361d,	// (0x0007b064) aid_size_cmail_indent

0x3626,	// (0x0007b06d) list_single_dyc_row_pane_cp01

0xc3b9,	// (0x00083e00) cntbar_detail_list_pane_ParamLimits

0xc3b9,	// (0x00083e00) cntbar_detail_list_pane

0xc3f3,	// (0x00083e3a) main_cntbar_detail_cont_pane_ParamLimits

0xc3f3,	// (0x00083e3a) main_cntbar_detail_cont_pane

0x6d59,	// (0x0007e7a0) scroll_pane_cp032_ParamLimits

0x6d59,	// (0x0007e7a0) scroll_pane_cp032

0xc3ff,	// (0x00083e46) cntbar_detail_list_event_pane_ParamLimits

0xc3ff,	// (0x00083e46) cntbar_detail_list_event_pane

0xc3c5,	// (0x00083e0c) cntbar_detail_list_shct_pane

0x0e2f,	// (0x00078876) aid_list_gen

0x362f,	// (0x0007b076) aid_scroll

0x3638,	// (0x0007b07f) aid_size_touch_scroll_bar

0xc413,	// (0x00083e5a) aid_list_double

0xc41c,	// (0x00083e63) aid_list_single

0xf06e,	// (0x00086ab5) aid_list_single_lg

0xc425,	// (0x00083e6c) aid_list_z_g_a_sm

0xc42d,	// (0x00083e74) aid_list_z_g_d

0xc435,	// (0x00083e7c) aid_txt_z_prm

0xc443,	// (0x00083e8a) aid_txt_z_prm_cp01

0xc451,	// (0x00083e98) aid_txt_z_sec

0xc45f,	// (0x00083ea6) main_cntbar_detail_cont_pane_g1_ParamLimits

0xc45f,	// (0x00083ea6) main_cntbar_detail_cont_pane_g1

0xc46c,	// (0x00083eb3) main_cntbar_detail_cont_pane_g2_ParamLimits

0xc46c,	// (0x00083eb3) main_cntbar_detail_cont_pane_g2

0x0001,

0xfda0,	// (0x000877e7) main_cntbar_detail_cont_pane_g_ParamLimits

0xfda0,	// (0x000877e7) main_cntbar_detail_cont_pane_g

0x3641,	// (0x0007b088) main_cntbar_detail_cont_pane_t1

0x364f,	// (0x0007b096) main_cntbar_detail_cont_pane_t2

0x365d,	// (0x0007b0a4) main_cntbar_detail_cont_pane_t3

0x0002,

0xfda5,	// (0x000877ec) main_cntbar_detail_cont_pane_t

0xc478,	// (0x00083ebf) cell_cntbar_detail_list_shct_pane_ParamLimits

0xc478,	// (0x00083ebf) cell_cntbar_detail_list_shct_pane

0x366b,	// (0x0007b0b2) cntbar_detail_list_shct_pane_g1

0x3674,	// (0x0007b0bb) cntbar_detail_list_shct_pane_g2

0x0001,

0xfdac,	// (0x000877f3) cntbar_detail_list_shct_pane_g

0xc48c,	// (0x00083ed3) cntbar_detail_list_event_pane_g1_ParamLimits

0xc48c,	// (0x00083ed3) cntbar_detail_list_event_pane_g1

0xc498,	// (0x00083edf) cntbar_detail_list_event_pane_g2_ParamLimits

0xc498,	// (0x00083edf) cntbar_detail_list_event_pane_g2

0x0005,

0xfdb1,	// (0x000877f8) cntbar_detail_list_event_pane_g_ParamLimits

0xfdb1,	// (0x000877f8) cntbar_detail_list_event_pane_g

0xc504,	// (0x00083f4b) cntbar_detail_list_event_pane_t1_ParamLimits

0xc504,	// (0x00083f4b) cntbar_detail_list_event_pane_t1

0xc519,	// (0x00083f60) cntbar_detail_list_event_pane_t2_ParamLimits

0xc519,	// (0x00083f60) cntbar_detail_list_event_pane_t2

0x0002,

0xfdbe,	// (0x00087805) cntbar_detail_list_event_pane_t_ParamLimits

0xfdbe,	// (0x00087805) cntbar_detail_list_event_pane_t

0x0bd0,	// (0x00078617) cell_cntbar_detail_list_shct_pane_g1

0x1610,	// (0x00079057) navi_pane_mv_g3

0x074a,	// (0x00078191) main_cntbar_detail_pane_ParamLimits

0xd36a,	// (0x00084db1) main_notif_wgt_pane

0x9311,	// (0x00080d58) aid_tch_main_mp4_pane_g4

0x9570,	// (0x00080fb7) popup_slider_window_cp02

0x33a0,	// (0x0007ade7) list_recal_day_event_pane

0xc399,	// (0x00083de0) cntbar_detail_btn_pane_ParamLimits

0xc399,	// (0x00083de0) cntbar_detail_btn_pane

0xc3a9,	// (0x00083df0) cntbar_detail_btn_pane_cp01_ParamLimits

0xc3a9,	// (0x00083df0) cntbar_detail_btn_pane_cp01

0xc3c5,	// (0x00083e0c) cntbar_detail_list_shct_pane_ParamLimits

0xc3d1,	// (0x00083e18) cntbar_detail_pane_g1_ParamLimits

0xc3d1,	// (0x00083e18) cntbar_detail_pane_g1

0xc3dd,	// (0x00083e24) cntbar_detail_pane_t1_ParamLimits

0xc3dd,	// (0x00083e24) cntbar_detail_pane_t1

0xc4a4,	// (0x00083eeb) cntbar_detail_list_event_pane_g3_ParamLimits

0xc4a4,	// (0x00083eeb) cntbar_detail_list_event_pane_g3

0xc4bc,	// (0x00083f03) cntbar_detail_list_event_pane_g4_ParamLimits

0xc4bc,	// (0x00083f03) cntbar_detail_list_event_pane_g4

0xc4d4,	// (0x00083f1b) cntbar_detail_list_event_pane_g5_ParamLimits

0xc4d4,	// (0x00083f1b) cntbar_detail_list_event_pane_g5

0xc4ec,	// (0x00083f33) cntbar_detail_list_event_pane_g6_ParamLimits

0xc4ec,	// (0x00083f33) cntbar_detail_list_event_pane_g6

0xc52e,	// (0x00083f75) cntbar_detail_list_event_pane_t3_ParamLimits

0xc52e,	// (0x00083f75) cntbar_detail_list_event_pane_t3

0xc540,	// (0x00083f87) popup_notif_wgt_window_ParamLimits

0xc540,	// (0x00083f87) popup_notif_wgt_window

0xc550,	// (0x00083f97) popup_submenu_window_cp01_ParamLimits

0xc550,	// (0x00083f97) popup_submenu_window_cp01

0x0b90,	// (0x000785d7) bg_popup_window_pane_cp10

0x367d,	// (0x0007b0c4) listscroll_notif_wgt_pane

0x368f,	// (0x0007b0d6) list_notif_wgt_window

0x3698,	// (0x0007b0df) scroll_pane_cp033

0xc55e,	// (0x00083fa5) list_notif_wgt_row_pane_ParamLimits

0xc55e,	// (0x00083fa5) list_notif_wgt_row_pane

0x36a1,	// (0x0007b0e8) aid_size_list_notif_wgt_del

0x36ae,	// (0x0007b0f5) list_notif_wgt_row_pane_g1

0x36ba,	// (0x0007b101) list_notif_wgt_row_pane_g2

0x36c9,	// (0x0007b110) list_notif_wgt_row_pane_g3

0x0002,

0xfdc5,	// (0x0008780c) list_notif_wgt_row_pane_g

0x36d6,	// (0x0007b11d) list_notif_wgt_row_pane_t1

0x36ec,	// (0x0007b133) list_notif_wgt_row_pane_t2

0x36fe,	// (0x0007b145) list_notif_wgt_row_pane_t3

0x0002,

0xfdcc,	// (0x00087813) list_notif_wgt_row_pane_t

0x1e39,	// (0x00079880) list_recal_day_event_pane_g1

0x3710,	// (0x0007b157) list_recal_day_event_pane_t1

0xd36a,	// (0x00084db1) bg_button_pane_cp045

0xc570,	// (0x00083fb7) cntbar_detail_btn_pane_t1

0xe228,	// (0x00085c6f) main_callh_pane_ParamLimits

0xe228,	// (0x00085c6f) main_callh_pane

0xd36a,	// (0x00084db1) main_coverflow0_pane

0xd36a,	// (0x00084db1) main_wgtman_pane

0xb7e9,	// (0x00083230) main_fs_bigclock_unlock_btn_pane_ParamLimits

0xb7e9,	// (0x00083230) main_fs_bigclock_unlock_btn_pane

0xbd8e,	// (0x000837d5) bg_button_pane_cp16

0xbd9e,	// (0x000837e5) cell_tport_appsw_pane_g3

0xc57e,	// (0x00083fc5) cf0_flow_pane_ParamLimits

0xc57e,	// (0x00083fc5) cf0_flow_pane

0x371f,	// (0x0007b166) listscroll_cf0_pane

0x372a,	// (0x0007b171) main_cf0_pane_g1

0xc58d,	// (0x00083fd4) main_cf0_pane_t1_ParamLimits

0xc58d,	// (0x00083fd4) main_cf0_pane_t1

0xc5a1,	// (0x00083fe8) main_cf0_pane_t2_ParamLimits

0xc5a1,	// (0x00083fe8) main_cf0_pane_t2

0x0001,

0xfdd8,	// (0x0008781f) main_cf0_pane_t_ParamLimits

0xfdd8,	// (0x0008781f) main_cf0_pane_t

0x373c,	// (0x0007b183) scroll_pane_cp11

0xc5b5,	// (0x00083ffc) cf0_flow_pane_g1

0xc5bd,	// (0x00084004) cf0_flow_pane_g2

0x0001,

0xfddd,	// (0x00087824) cf0_flow_pane_g

0xc5c5,	// (0x0008400c) cf0_flow_pane_t1

0xd36a,	// (0x00084db1) main_call6_pane

0xd36a,	// (0x00084db1) main_calllock_pane

0xc5d3,	// (0x0008401a) call6_btn_grp_pane_ParamLimits

0xc5d3,	// (0x0008401a) call6_btn_grp_pane

0xc5e2,	// (0x00084029) call6_pane_g1_ParamLimits

0xc5e2,	// (0x00084029) call6_pane_g1

0xc5f2,	// (0x00084039) popup_call6_1st_window_ParamLimits

0xc5f2,	// (0x00084039) popup_call6_1st_window

0xc600,	// (0x00084047) popup_call6_2nd_window_ParamLimits

0xc600,	// (0x00084047) popup_call6_2nd_window

0xc60e,	// (0x00084055) cell_call6_btn_pane_ParamLimits

0xc60e,	// (0x00084055) cell_call6_btn_pane

0x0b90,	// (0x000785d7) bg_popup_call2_in_pane_cp03

0x3747,	// (0x0007b18e) popup_call6_1st_window_g1

0x374f,	// (0x0007b196) popup_call6_1st_window_g2

0x3757,	// (0x0007b19e) popup_call6_1st_window_g3

0x0002,

0xfde2,	// (0x00087829) popup_call6_1st_window_g

0x375f,	// (0x0007b1a6) popup_call6_1st_window_t1

0x376e,	// (0x0007b1b5) popup_call6_1st_window_t2

0x377c,	// (0x0007b1c3) popup_call6_1st_window_t3

0x0002,

0xfde9,	// (0x00087830) popup_call6_1st_window_t

0x0b90,	// (0x000785d7) bg_popup_call2_in_pane_cp04

0x378a,	// (0x0007b1d1) popup_call6_2nd_window_g1

0x3792,	// (0x0007b1d9) popup_call6_2nd_window_g2

0x379a,	// (0x0007b1e1) popup_call6_2nd_window_g3

0x0002,

0xfdf0,	// (0x00087837) popup_call6_2nd_window_g

0x37a2,	// (0x0007b1e9) popup_call6_2nd_window_t1

0x4f7c,	// (0x0007c9c3) bg_button_pane_cp15

0xc61d,	// (0x00084064) cell_call6_btn_pane_g1

0xc626,	// (0x0008406d) cell_call6_btn_pane_t1

0xc635,	// (0x0008407c) listscroll_wgtman_pane_ParamLimits

0xc635,	// (0x0008407c) listscroll_wgtman_pane

0xc651,	// (0x00084098) wgtman_btn_pane_ParamLimits

0xc651,	// (0x00084098) wgtman_btn_pane

0x1424,	// (0x00078e6b) aid_scroll_copy1

0x37ba,	// (0x0007b201) list_wgtman_pane

0xc686,	// (0x000840cd) wgtman_btn_pane_g1_ParamLimits

0xc686,	// (0x000840cd) wgtman_btn_pane_g1

0xc6ae,	// (0x000840f5) wgtman_btn_pane_t1_ParamLimits

0xc6ae,	// (0x000840f5) wgtman_btn_pane_t1

0x37c4,	// (0x0007b20b) wgtman_btn_pane_t2_ParamLimits

0x37c4,	// (0x0007b20b) wgtman_btn_pane_t2

0x0001,

0xfdf7,	// (0x0008783e) wgtman_btn_pane_t_ParamLimits

0xfdf7,	// (0x0008783e) wgtman_btn_pane_t

0xc6e5,	// (0x0008412c) listrow_wgtman_pane_ParamLimits

0xc6e5,	// (0x0008412c) listrow_wgtman_pane

0xc701,	// (0x00084148) listrow_wgtman_pane_g1

0xc70e,	// (0x00084155) listrow_wgtman_pane_g2

0x0001,

0xfdfc,	// (0x00087843) listrow_wgtman_pane_g

0xc72c,	// (0x00084173) listrow_wgtman_pane_t1

0xc744,	// (0x0008418b) listrow_wgtman_pane_t2

0x0001,

0xfe01,	// (0x00087848) listrow_wgtman_pane_t

0xc76a,	// (0x000841b1) wait_bar_pane_cp09

0x37db,	// (0x0007b222) main_calllock_btn_pane

0x37e5,	// (0x0007b22c) main_calllock_pane_g1

0xd36a,	// (0x00084db1) bg_button_pane_cp17

0x37b1,	// (0x0007b1f8) main_calllock_btn_pane_g1

0x37ed,	// (0x0007b234) main_calllock_btn_pane_t1

0xd36a,	// (0x00084db1) main_dialer3_pane

0xd36a,	// (0x00084db1) main_fmrd2_pane

0x0bd0,	// (0x00078617) main_fs_bigclock_unlock_btn_pane_g1

0xc784,	// (0x000841cb) main_fs_bigclock_unlock_btn_pane_t1

0xc792,	// (0x000841d9) area_fmrd2_info_pane_ParamLimits

0xc792,	// (0x000841d9) area_fmrd2_info_pane

0xc7a0,	// (0x000841e7) area_fmrd2_visual_pane_ParamLimits

0xc7a0,	// (0x000841e7) area_fmrd2_visual_pane

0xc7ae,	// (0x000841f5) fmrd2_indi_pane_ParamLimits

0xc7ae,	// (0x000841f5) fmrd2_indi_pane

0xc7bb,	// (0x00084202) area_fmrd2_visual_pane_g1

0xc7c3,	// (0x0008420a) area_fmrd2_visual_pane_t1

0xc7d3,	// (0x0008421a) area_fmrd2_visual_pane_t2

0xc7e3,	// (0x0008422a) area_fmrd2_visual_pane_t3

0x0002,

0xfe0b,	// (0x00087852) area_fmrd2_visual_pane_t

0xc7f3,	// (0x0008423a) area_fmrd2_info_pane_g1

0xc7fb,	// (0x00084242) area_fmrd2_info_pane_t1

0xc80b,	// (0x00084252) area_fmrd2_info_pane_t2

0xc81b,	// (0x00084262) area_fmrd2_info_pane_t3

0xc82b,	// (0x00084272) area_fmrd2_info_pane_t4

0x0003,

0xfe12,	// (0x00087859) area_fmrd2_info_pane_t

0xc839,	// (0x00084280) fmrd2_indi_pane_t1

0xc849,	// (0x00084290) fmrd2_indi_pane_t2

0xc859,	// (0x000842a0) fmrd2_indi_pane_t3

0x0002,

0xfe1b,	// (0x00087862) fmrd2_indi_pane_t

0x2a4f,	// (0x0007a496) list_single_fs_bigclock_indicator_pane_g5_ParamLimits

0x2a4f,	// (0x0007a496) list_single_fs_bigclock_indicator_pane_g5

0x2b00,	// (0x0007a547) list_single_fs_bigclock_indicator_pane_t5_ParamLimits

0x2b00,	// (0x0007a547) list_single_fs_bigclock_indicator_pane_t5

0xbf41,	// (0x00083988) aid_cell_bcale_month_pane_ParamLimits

0xbf41,	// (0x00083988) aid_cell_bcale_month_pane

0xbf5f,	// (0x000839a6) bcale_month_pane_ParamLimits

0xbf5f,	// (0x000839a6) bcale_month_pane

0xbf7d,	// (0x000839c4) bcale_preview_pane_ParamLimits

0xbf7d,	// (0x000839c4) bcale_preview_pane

0x35a7,	// (0x0007afee) list_single_fs_bigclock_pane_t1_ParamLimits

0x35c6,	// (0x0007b00d) list_single_fs_bigclock_pane_t2_ParamLimits

0x35c6,	// (0x0007b00d) list_single_fs_bigclock_pane_t2

0x0001,

0xfd96,	// (0x000877dd) list_single_fs_bigclock_pane_t_ParamLimits

0xfd96,	// (0x000877dd) list_single_fs_bigclock_pane_t

0xc77c,	// (0x000841c3) main_fs_bigclock_unlock_btn_pane_g2

0x0001,

0xfe06,	// (0x0008784d) main_fs_bigclock_unlock_btn_pane_g

0xc867,	// (0x000842ae) aid_dia3_key_size_ParamLimits

0xc867,	// (0x000842ae) aid_dia3_key_size

0xc873,	// (0x000842ba) aid_dia3_listrow_size_ParamLimits

0xc873,	// (0x000842ba) aid_dia3_listrow_size

0xc883,	// (0x000842ca) dia3_keypad_fun_pane_ParamLimits

0xc883,	// (0x000842ca) dia3_keypad_fun_pane

0xc895,	// (0x000842dc) dia3_keypad_num_pane_ParamLimits

0xc895,	// (0x000842dc) dia3_keypad_num_pane

0xc8a7,	// (0x000842ee) dia3_listscroll_pane_ParamLimits

0xc8a7,	// (0x000842ee) dia3_listscroll_pane

0xc8b5,	// (0x000842fc) dia3_numentry_pane_ParamLimits

0xc8b5,	// (0x000842fc) dia3_numentry_pane

0x37fc,	// (0x0007b243) dia3_list_pane

0x3807,	// (0x0007b24e) scroll_pane_cp12

0xd36a,	// (0x00084db1) bg_dia3_numentry_pane

0xc8c3,	// (0x0008430a) dia3_numentry_pane_t1

0xc8d2,	// (0x00084319) cell_dia3_key_num_pane

0xc8da,	// (0x00084321) cell_dia3_key0_fun_pane_ParamLimits

0xc8da,	// (0x00084321) cell_dia3_key0_fun_pane

0xc8e7,	// (0x0008432e) cell_dia3_key1_fun_pane_ParamLimits

0xc8e7,	// (0x0008432e) cell_dia3_key1_fun_pane

0xc8f4,	// (0x0008433b) dia3_listrow_pane

0x27a2,	// (0x0007a1e9) bg_dia3_numentry_pane_g1

0xd36a,	// (0x00084db1) bg_button_pane_cp21

0x3812,	// (0x0007b259) cell_dia3_key_num_pane_t1

0x3820,	// (0x0007b267) cell_dia3_key_num_pane_t2

0x382f,	// (0x0007b276) cell_dia3_key_num_pane_t3

0x383e,	// (0x0007b285) cell_dia3_key_num_pane_t4

0x0003,

0xfe22,	// (0x00087869) cell_dia3_key_num_pane_t

0xd36a,	// (0x00084db1) bg_button_pane_cp19

0xc901,	// (0x00084348) cell_dia3_key0_fun_pane_g1

0xd36a,	// (0x00084db1) bg_button_pane_cp20

0xc909,	// (0x00084350) cell_dia3_key1_fun_pane_g1

0xc911,	// (0x00084358) area_left_week_number_pane

0xc924,	// (0x0008436b) area_top_day_name_pane

0xc932,	// (0x00084379) frame_month_view_pane

0x384d,	// (0x0007b294) grid_month_view_pane

0xc947,	// (0x0008438e) cell_top_day_name_pane_ParamLimits

0xc947,	// (0x0008438e) cell_top_day_name_pane

0xc961,	// (0x000843a8) cell_area_left_week_number_pane_ParamLimits

0xc961,	// (0x000843a8) cell_area_left_week_number_pane

0xc984,	// (0x000843cb) cell_month_view_pane_ParamLimits

0xc984,	// (0x000843cb) cell_month_view_pane

0x385b,	// (0x0007b2a2) frm_month_g1

0xc9b0,	// (0x000843f7) frm_month_g2

0xc9c1,	// (0x00084408) frm_month_g3

0xc9d2,	// (0x00084419) frm_month_g4

0xc9e3,	// (0x0008442a) frm_month_g5

0xc9f6,	// (0x0008443d) frm_month_g6

0xca09,	// (0x00084450) frm_month_g7

0x3868,	// (0x0007b2af) frm_month_g8

0xca1c,	// (0x00084463) frm_month_g9

0xca29,	// (0x00084470) frm_month_g10

0xca36,	// (0x0008447d) frm_month_g11

0xca43,	// (0x0008448a) frm_month_g12

0xca50,	// (0x00084497) frm_month_g13

0xca5d,	// (0x000844a4) frm_month_g14

0xca6c,	// (0x000844b3) frm_month_g15

0xca7b,	// (0x000844c2) frm_month_g16

0x000f,

0xfe2b,	// (0x00087872) frm_month_g

0xca8a,	// (0x000844d1) cell_top_day_name_pane_t1

0xca9d,	// (0x000844e4) cell_area_left_week_number_pane_g1

0xcaac,	// (0x000844f3) cell_area_left_week_number_pane_t1

0x08d0,	// (0x00078317) cell_month_view_pane_g1

0xcac2,	// (0x00084509) cell_month_view_pane_t1

0xd36a,	// (0x00084db1) main_fps_pane

0x2d51,	// (0x0007a798) cmail_ddmenu_btn02_pane_cp1_ParamLimits

0x2d51,	// (0x0007a798) cmail_ddmenu_btn02_pane_cp1

0x2d6d,	// (0x0007a7b4) cmail_ddmenu_btn02_pane_cp2_ParamLimits

0x2d6d,	// (0x0007a7b4) cmail_ddmenu_btn02_pane_cp2

0xc23e,	// (0x00083c85) cmail_ddmenu_btn02_pane_g2_ParamLimits

0xc23e,	// (0x00083c85) cmail_ddmenu_btn02_pane_g2

0x0001,

0xfd49,	// (0x00087790) cmail_ddmenu_btn02_pane_g_ParamLimits

0xfd49,	// (0x00087790) cmail_ddmenu_btn02_pane_g

0xc25c,	// (0x00083ca3) cmail_ddmenu_btn02_pane_t2_ParamLimits

0xc25c,	// (0x00083ca3) cmail_ddmenu_btn02_pane_t2

0x0001,

0xfd4e,	// (0x00087795) cmail_ddmenu_btn02_pane_t_ParamLimits

0xfd4e,	// (0x00087795) cmail_ddmenu_btn02_pane_t

0xcad8,	// (0x0008451f) fps_text_pane_ParamLimits

0xcad8,	// (0x0008451f) fps_text_pane

0xcae5,	// (0x0008452c) main_fps_pane_g1_ParamLimits

0xcae5,	// (0x0008452c) main_fps_pane_g1

0xcaf3,	// (0x0008453a) wait_bar_pane_cp010_ParamLimits

0xcaf3,	// (0x0008453a) wait_bar_pane_cp010

0xcaff,	// (0x00084546) fps_text_pane_t1_ParamLimits

0xcaff,	// (0x00084546) fps_text_pane_t1

0x9a27,	// (0x0008146e) cam4_image_uncrop_pane_g1

0x9a30,	// (0x00081477) cam4_image_uncrop_pane_g2

0x9a39,	// (0x00081480) cam4_image_uncrop_pane_g3

0x9a42,	// (0x00081489) cam4_image_uncrop_pane_g4

0x0003,

0xf88d,	// (0x000872d4) cam4_image_uncrop_pane_g

0xc8f4,	// (0x0008433b) dia3_listrow_pane_ParamLimits

0xd36a,	// (0x00084db1) main_phob2_pane

0xbd70,	// (0x000837b7) cell_tport_appsw_pane_cp02_ParamLimits

0xbd70,	// (0x000837b7) cell_tport_appsw_pane_cp02

0xbd7f,	// (0x000837c6) cell_tport_appsw_pane_cp03_ParamLimits

0xbd7f,	// (0x000837c6) cell_tport_appsw_pane_cp03

0xd36a,	// (0x00084db1) phob2_contact_card_pane

0xd36a,	// (0x00084db1) phob2_listscroll_pane

0xcb18,	// (0x0008455f) phob2_list_pane

0xcb20,	// (0x00084567) scroll_pane_cp034

0xcb28,	// (0x0008456f) phob2_cc_data_pane_ParamLimits

0xcb28,	// (0x0008456f) phob2_cc_data_pane

0xcb42,	// (0x00084589) phob2_cc_listscroll_pane_ParamLimits

0xcb42,	// (0x00084589) phob2_cc_listscroll_pane

0xc6e5,	// (0x0008412c) list_double_large_graphic_phob2_pane_ParamLimits

0xc6e5,	// (0x0008412c) list_double_large_graphic_phob2_pane

0xcb5c,	// (0x000845a3) list_double_large_graphic_phob2_pane_g1_ParamLimits

0xcb5c,	// (0x000845a3) list_double_large_graphic_phob2_pane_g1

0xcb69,	// (0x000845b0) list_double_large_graphic_phob2_pane_g2_ParamLimits

0xcb69,	// (0x000845b0) list_double_large_graphic_phob2_pane_g2

0x0003,

0xfe4c,	// (0x00087893) list_double_large_graphic_phob2_pane_g_ParamLimits

0xfe4c,	// (0x00087893) list_double_large_graphic_phob2_pane_g

0xcb8f,	// (0x000845d6) list_double_large_graphic_phob2_pane_t1_ParamLimits

0xcb8f,	// (0x000845d6) list_double_large_graphic_phob2_pane_t1

0xcba4,	// (0x000845eb) list_double_large_graphic_phob2_pane_t2_ParamLimits

0xcba4,	// (0x000845eb) list_double_large_graphic_phob2_pane_t2

0x0001,

0xfe55,	// (0x0008789c) list_double_large_graphic_phob2_pane_t_ParamLimits

0xfe55,	// (0x0008789c) list_double_large_graphic_phob2_pane_t

0xd36a,	// (0x00084db1) list_highlight_pane_cp024

0xcbb9,	// (0x00084600) phob2_cc_button_pane

0xcbc1,	// (0x00084608) phob2_cc_data_pane_g1_ParamLimits

0xcbc1,	// (0x00084608) phob2_cc_data_pane_g1

0xcbd0,	// (0x00084617) phob2_cc_data_pane_g2_ParamLimits

0xcbd0,	// (0x00084617) phob2_cc_data_pane_g2

0x0001,

0xfe5a,	// (0x000878a1) phob2_cc_data_pane_g_ParamLimits

0xfe5a,	// (0x000878a1) phob2_cc_data_pane_g

0xcbdf,	// (0x00084626) phob2_cc_data_pane_t1_ParamLimits

0xcbdf,	// (0x00084626) phob2_cc_data_pane_t1

0xcbf4,	// (0x0008463b) phob2_cc_data_pane_t2_ParamLimits

0xcbf4,	// (0x0008463b) phob2_cc_data_pane_t2

0xcc09,	// (0x00084650) phob2_cc_data_pane_t3_ParamLimits

0xcc09,	// (0x00084650) phob2_cc_data_pane_t3

0x0002,

0xfe5f,	// (0x000878a6) phob2_cc_data_pane_t_ParamLimits

0xfe5f,	// (0x000878a6) phob2_cc_data_pane_t

0xcc1e,	// (0x00084665) phob2_cc_list_pane_ParamLimits

0xcc1e,	// (0x00084665) phob2_cc_list_pane

0x1ee2,	// (0x00079929) scroll_pane_cp035_ParamLimits

0x1ee2,	// (0x00079929) scroll_pane_cp035

0x074a,	// (0x00078191) bg_button_pane_cp033

0xcc2a,	// (0x00084671) phob2_cc_button_pane_g1

0xcc36,	// (0x0008467d) phob2_cc_button_pane_t1

0xcc4b,	// (0x00084692) phob2_cc_button_pane_t2

0x0001,

0xfe66,	// (0x000878ad) phob2_cc_button_pane_t

0xcc5d,	// (0x000846a4) list_double_large_graphic_phob2_cc_pane_ParamLimits

0xcc5d,	// (0x000846a4) list_double_large_graphic_phob2_cc_pane

0xccd1,	// (0x00084718) list_double_large_graphic_phob2_cc_pane_g1_ParamLimits

0xccd1,	// (0x00084718) list_double_large_graphic_phob2_cc_pane_g1

0xcce2,	// (0x00084729) list_double_large_graphic_phob2_cc_pane_g2_ParamLimits

0xcce2,	// (0x00084729) list_double_large_graphic_phob2_cc_pane_g2

0xccf1,	// (0x00084738) list_double_large_graphic_phob2_cc_pane_g3_ParamLimits

0xccf1,	// (0x00084738) list_double_large_graphic_phob2_cc_pane_g3

0xcd00,	// (0x00084747) list_double_large_graphic_phob2_cc_pane_g4_ParamLimits

0xcd00,	// (0x00084747) list_double_large_graphic_phob2_cc_pane_g4

0xcd11,	// (0x00084758) list_double_large_graphic_phob2_cc_pane_g5_ParamLimits

0xcd11,	// (0x00084758) list_double_large_graphic_phob2_cc_pane_g5

0x0004,

0xfe6b,	// (0x000878b2) list_double_large_graphic_phob2_cc_pane_g_ParamLimits

0xfe6b,	// (0x000878b2) list_double_large_graphic_phob2_cc_pane_g

0xcd20,	// (0x00084767) list_double_large_graphic_phob2_cc_pane_t1_ParamLimits

0xcd20,	// (0x00084767) list_double_large_graphic_phob2_cc_pane_t1

0xcd49,	// (0x00084790) list_double_large_graphic_phob2_cc_pane_t2_ParamLimits

0xcd49,	// (0x00084790) list_double_large_graphic_phob2_cc_pane_t2

0x0001,

0xfe76,	// (0x000878bd) list_double_large_graphic_phob2_cc_pane_t_ParamLimits

0xfe76,	// (0x000878bd) list_double_large_graphic_phob2_cc_pane_t

0xcd72,	// (0x000847b9) list_highlight_pane_cp025_ParamLimits

0xcd72,	// (0x000847b9) list_highlight_pane_cp025

0x074a,	// (0x00078191) bg_button_pane_cp033_ParamLimits

0xcc2a,	// (0x00084671) phob2_cc_button_pane_g1_ParamLimits

0xcc36,	// (0x0008467d) phob2_cc_button_pane_t1_ParamLimits

0xcc4b,	// (0x00084692) phob2_cc_button_pane_t2_ParamLimits

0xfe66,	// (0x000878ad) phob2_cc_button_pane_t_ParamLimits

0x4f70,	// (0x0007c9b7) popup_wgtman_window

0x1cf3,	// (0x0007973a) scroll_pane_cp038

0xc66e,	// (0x000840b5) wgtman_btn_pane_cp_01_ParamLimits

0xc66e,	// (0x000840b5) wgtman_btn_pane_cp_01

0xcd80,	// (0x000847c7) wgtman_content_pane

0xcd89,	// (0x000847d0) wgtman_heading_pane

0xd36a,	// (0x00084db1) bg_heading_pane_cp02

0xcd92,	// (0x000847d9) wgtman_heading_pane_g1

0xcd9a,	// (0x000847e1) wgtman_heading_pane_t1

0xcda8,	// (0x000847ef) scroll_pane_cp036

0xcdb0,	// (0x000847f7) wgtman_list_pane

0xcdb8,	// (0x000847ff) wgtman_list_pane_t1_ParamLimits

0xcdb8,	// (0x000847ff) wgtman_list_pane_t1

0x9986,	// (0x000813cd) cam4_grid_pane

0xa6a5,	// (0x000820ec) bg_button_pane_cp015_ParamLimits

0xa6b7,	// (0x000820fe) bg_button_pane_cp016_ParamLimits

0xa6ca,	// (0x00082111) bg_button_pane_cp017_ParamLimits

0xa722,	// (0x00082169) popup_vitu2_query_window_g3_ParamLimits

0xa722,	// (0x00082169) popup_vitu2_query_window_g3

0xa7df,	// (0x00082226) popup_vitu2_query_window_t6_ParamLimits

0xa7df,	// (0x00082226) popup_vitu2_query_window_t6

0xa80a,	// (0x00082251) popup_vitu2_query_window_t7_ParamLimits

0xa80a,	// (0x00082251) popup_vitu2_query_window_t7

0xcdd3,	// (0x0008481a) cam4_grid_pane_g1

0xcddc,	// (0x00084823) cam4_grid_pane_g2

0xcde5,	// (0x0008482c) cam4_grid_pane_g3

0xcdee,	// (0x00084835) cam4_grid_pane_g4

0x0003,

0xfe7b,	// (0x000878c2) cam4_grid_pane_g

0x5ac4,	// (0x0007d50b) aid_placing_vt_slider_lsc_ParamLimits

0x5e04,	// (0x0007d84b) vidtel_button_pane_ParamLimits

0x5e04,	// (0x0007d84b) vidtel_button_pane

0xd36a,	// (0x00084db1) bg_button_pane_cp034

0xcdf9,	// (0x00084840) vidtel_button_pane_g1

0xce01,	// (0x00084848) vidtel_button_pane_t1

0x1e29,	// (0x00079870) aid_size_vtel_slider_touch

0x1ee2,	// (0x00079929) scroll_pane_cp039

0xb526,	// (0x00082f6d) ncim_query_button_pane_cp01_ParamLimits

0xb545,	// (0x00082f8c) ncimui_query_pane_g1_ParamLimits

0x074a,	// (0x00078191) input_focus_pane_cp012_ParamLimits

0x27e8,	// (0x0007a22f) ncim_query_entry_pane_t1_ParamLimits

0x1ee2,	// (0x00079929) scroll_pane_cp039_ParamLimits

0x14fb,	// (0x00078f42) navi_pane_bcale_mc_g1

0x1503,	// (0x00078f4a) navi_pane_bcale_mc_t1

0x2da1,	// (0x0007a7e8) main_sp_fs_email_pane_g1

0x2dad,	// (0x0007a7f4) main_sp_fs_email_pane_g2

0x0001,

0xfc7e,	// (0x000876c5) main_sp_fs_email_pane_g

0x3232,	// (0x0007ac79) list_single_cale_mrui_row_pane_g3_ParamLimits

0x3232,	// (0x0007ac79) list_single_cale_mrui_row_pane_g3

0xc27c,	// (0x00083cc3) list_single_recal_day_pane_g5_event_pane

0x3411,	// (0x0007ae58) list_single_recal_day_pane_g7

0xce17,	// (0x0008485e) list_recal_day_event_pane_cp01

0xce20,	// (0x00084867) list_recal_vselct_arw_lo_pane_cp01

0xce28,	// (0x0008486f) list_recal_vselct_arw_up_pane_cp01

0xce30,	// (0x00084877) list_recal_vselct_pane_cp01

0x1e39,	// (0x00079880) list_recal_day_event_pane_cp01_g1

0x3875,	// (0x0007b2bc) list_recal_day_event_pane_cp01_t1

0x3419,	// (0x0007ae60) list_single_recal_day_pane_t1_ParamLimits

0x342b,	// (0x0007ae72) list_single_recal_day_pane_t2_ParamLimits

0xfd5e,	// (0x000877a5) list_single_recal_day_pane_t_ParamLimits

0x0863,	// (0x000782aa) bg_notes_pane_ParamLimits

0x0928,	// (0x0007836f) list_notes_pane_ParamLimits

0x517f,	// (0x0007cbc6) scroll_pane_cp06_ParamLimits

0x0964,	// (0x000783ab) main_notes_pane_ParamLimits

0x074a,	// (0x00078191) main_welc_pane

0xce51,	// (0x00084898) main_welc_body_pane_ParamLimits

0xce51,	// (0x00084898) main_welc_body_pane

0xce6a,	// (0x000848b1) main_welc_opti_pane_ParamLimits

0xce6a,	// (0x000848b1) main_welc_opti_pane

0xcec5,	// (0x0008490c) main_welc_pane_t1_ParamLimits

0xcec5,	// (0x0008490c) main_welc_pane_t1

0xcfdb,	// (0x00084a22) main_welc_body_row_pane_ParamLimits

0xcfdb,	// (0x00084a22) main_welc_body_row_pane

0xd8d7,	// (0x0008531e) main_welc_opti_row_pane_ParamLimits

0xd8d7,	// (0x0008531e) main_welc_opti_row_pane

0xd004,	// (0x00084a4b) main_welc_opti_row_pane_g1

0xd00c,	// (0x00084a53) main_welc_opti_row_pane_t1

0xd01b,	// (0x00084a62) main_welc_body_row_pane_t1

0x3687,	// (0x0007b0ce) popup_notif_wgt_heading_pane

0x36a1,	// (0x0007b0e8) aid_size_list_notif_wgt_del_ParamLimits

0x36ae,	// (0x0007b0f5) list_notif_wgt_row_pane_g1_ParamLimits

0x36ba,	// (0x0007b101) list_notif_wgt_row_pane_g2_ParamLimits

0x36c9,	// (0x0007b110) list_notif_wgt_row_pane_g3_ParamLimits

0xfdc5,	// (0x0008780c) list_notif_wgt_row_pane_g_ParamLimits

0x36d6,	// (0x0007b11d) list_notif_wgt_row_pane_t1_ParamLimits

0x36ec,	// (0x0007b133) list_notif_wgt_row_pane_t2_ParamLimits

0x36fe,	// (0x0007b145) list_notif_wgt_row_pane_t3_ParamLimits

0xfdcc,	// (0x00087813) list_notif_wgt_row_pane_t_ParamLimits

0xc701,	// (0x00084148) listrow_wgtman_pane_g1_ParamLimits

0xc70e,	// (0x00084155) listrow_wgtman_pane_g2_ParamLimits

0xfdfc,	// (0x00087843) listrow_wgtman_pane_g_ParamLimits

0xc72c,	// (0x00084173) listrow_wgtman_pane_t1_ParamLimits

0xc744,	// (0x0008418b) listrow_wgtman_pane_t2_ParamLimits

0xfe01,	// (0x00087848) listrow_wgtman_pane_t_ParamLimits

0xc76a,	// (0x000841b1) wait_bar_pane_cp09_ParamLimits

0xd36a,	// (0x00084db1) bg_popup_heading_pane_cp02

0xd02a,	// (0x00084a71) popup_notif_wgt_heading_pane_g1

0xd032,	// (0x00084a79) popup_notif_wgt_heading_pane_t1

0xd36a,	// (0x00084db1) main_vids_pane

0xd36a,	// (0x00084db1) vids_listscroll_pane

0xd040,	// (0x00084a87) scroll_pane_cp040

0xd36a,	// (0x00084db1) vids_list_pane

0xd04b,	// (0x00084a92) vids_list_double_pane_ParamLimits

0xd04b,	// (0x00084a92) vids_list_double_pane

0xd063,	// (0x00084aaa) vids_list_double_pane_g1

0xd06c,	// (0x00084ab3) vids_list_double_pane_t1

0xd07c,	// (0x00084ac3) vids_list_double_pane_t2

0x0001,

0xfe9a,	// (0x000878e1) vids_list_double_pane_t

0x8116,	// (0x0007fb5d) main_ncimui_pane_ParamLimits

0xb37d,	// (0x00082dc4) main_ncimui_pane_g1_ParamLimits

0xb389,	// (0x00082dd0) main_ncimui_pane_g2_ParamLimits

0xb389,	// (0x00082dd0) main_ncimui_pane_g2

0x0001,

0xfb7f,	// (0x000875c6) main_ncimui_pane_g_ParamLimits

0xfb7f,	// (0x000875c6) main_ncimui_pane_g

0xce83,	// (0x000848ca) main_welc_pane_g1_ParamLimits

0xce83,	// (0x000848ca) main_welc_pane_g1

0xce8f,	// (0x000848d6) main_welc_pane_g2_ParamLimits

0xce8f,	// (0x000848d6) main_welc_pane_g2

0x0003,

0xfe84,	// (0x000878cb) main_welc_pane_g_ParamLimits

0xfe84,	// (0x000878cb) main_welc_pane_g

0x0863,	// (0x000782aa) listscroll_mce_pane_ParamLimits

0x1650,	// (0x00079097) wait_bar_pane_cp10

0xe21c,	// (0x00085c63) main_cale_day_pane_ParamLimits

0xe21c,	// (0x00085c63) main_cale_week_pane_ParamLimits

0x0863,	// (0x000782aa) main_messa_pane_ParamLimits

0x8dc7,	// (0x0008080e) main_clock2_btn_pane_ParamLimits

0x8dc7,	// (0x0008080e) main_clock2_btn_pane

0xea29,	// (0x00086470) main_clock2_btn_pane_cp01_ParamLimits

0xea29,	// (0x00086470) main_clock2_btn_pane_cp01

0x31be,	// (0x0007ac05) list_cale_mrui_pane_ParamLimits

0x3734,	// (0x0007b17b) main_cf0_pane_g2

0x0001,

0xfdd3,	// (0x0008781a) main_cf0_pane_g

0xc911,	// (0x00084358) area_left_week_number_pane_ParamLimits

0xc924,	// (0x0008436b) area_top_day_name_pane_ParamLimits

0xc932,	// (0x00084379) frame_month_view_pane_ParamLimits

0x384d,	// (0x0007b294) grid_month_view_pane_ParamLimits

0x385b,	// (0x0007b2a2) frm_month_g1_ParamLimits

0xc9b0,	// (0x000843f7) frm_month_g2_ParamLimits

0xc9c1,	// (0x00084408) frm_month_g3_ParamLimits

0xc9d2,	// (0x00084419) frm_month_g4_ParamLimits

0xc9e3,	// (0x0008442a) frm_month_g5_ParamLimits

0xc9f6,	// (0x0008443d) frm_month_g6_ParamLimits

0xca09,	// (0x00084450) frm_month_g7_ParamLimits

0x3868,	// (0x0007b2af) frm_month_g8_ParamLimits

0xca1c,	// (0x00084463) frm_month_g9_ParamLimits

0xca29,	// (0x00084470) frm_month_g10_ParamLimits

0xca36,	// (0x0008447d) frm_month_g11_ParamLimits

0xca43,	// (0x0008448a) frm_month_g12_ParamLimits

0xca50,	// (0x00084497) frm_month_g13_ParamLimits

0xca5d,	// (0x000844a4) frm_month_g14_ParamLimits

0xca6c,	// (0x000844b3) frm_month_g15_ParamLimits

0xca7b,	// (0x000844c2) frm_month_g16_ParamLimits

0xfe2b,	// (0x00087872) frm_month_g_ParamLimits

0xca8a,	// (0x000844d1) cell_top_day_name_pane_t1_ParamLimits

0xca9d,	// (0x000844e4) cell_area_left_week_number_pane_g1_ParamLimits

0xcaac,	// (0x000844f3) cell_area_left_week_number_pane_t1_ParamLimits

0x08d0,	// (0x00078317) cell_month_view_pane_g1_ParamLimits

0xcac2,	// (0x00084509) cell_month_view_pane_t1_ParamLimits

0x085b,	// (0x000782a2) main_clock2_btn_pane_g1

0xd08a,	// (0x00084ad1) main_clock2_btn_pane_t1

0x074a,	// (0x00078191) listscroll_cmail_pane_ParamLimits

0x2da1,	// (0x0007a7e8) main_sp_fs_email_pane_g1_ParamLimits

0x2dad,	// (0x0007a7f4) main_sp_fs_email_pane_g2_ParamLimits

0xfc7e,	// (0x000876c5) main_sp_fs_email_pane_g_ParamLimits

0x3381,	// (0x0007adc8) list_recal_day_pane_ParamLimits

0x3392,	// (0x0007add9) mian_recal_day_pane_t1

0xbc5e,	// (0x000836a5) list_single_dyc_row_text_pane_t4_ParamLimits

0xbc5e,	// (0x000836a5) list_single_dyc_row_text_pane_t4

0xbc95,	// (0x000836dc) list_single_dyc_row_text_pane_t5_ParamLimits

0xbc95,	// (0x000836dc) list_single_dyc_row_text_pane_t5

0x2e4f,	// (0x0007a896) list_single_dyc_row_text_pane_t6_ParamLimits

0x2e4f,	// (0x0007a896) list_single_dyc_row_text_pane_t6

0x6c7d,	// (0x0007e6c4) aid_mgn_list_cale_time_pane

0x8116,	// (0x0007fb5d) main_gallery2_pane_ParamLimits

0xea3f,	// (0x00086486) main_clock2_pane_cp01_t1

0xea4d,	// (0x00086494) main_clock2_pane_cp01_t3

0x0001,

0xf764,	// (0x000871ab) main_clock2_pane_cp01_t

0x55d4,	// (0x0007d01b) cale_week_scroll_pane_g16_ParamLimits

0x55d4,	// (0x0007d01b) cale_week_scroll_pane_g16

0x0b90,	// (0x000785d7) vorec_slider_pane

0xce01,	// (0x00084848) vidtel_button_pane_t1_ParamLimits

0xc2d7,	// (0x00083d1e) main_fs_bigclock_clock_pane_g1_ParamLimits

0xc2d7,	// (0x00083d1e) main_fs_bigclock_clock_pane_g2_ParamLimits

0xc2e4,	// (0x00083d2b) main_fs_bigclock_clock_pane_g3_ParamLimits

0xc2e4,	// (0x00083d2b) main_fs_bigclock_clock_pane_g4_ParamLimits

0xfd81,	// (0x000877c8) main_fs_bigclock_clock_pane_g_ParamLimits

0xc2f0,	// (0x00083d37) main_fs_bigclock_clock_pane_t1_ParamLimits

0xc303,	// (0x00083d4a) main_fs_bigclock_clock_pane_t2_ParamLimits

0xfd8a,	// (0x000877d1) main_fs_bigclock_clock_pane_t_ParamLimits

0x876c,	// (0x000801b3) main_mup3_lyrics_pane_ParamLimits

0x876c,	// (0x000801b3) main_mup3_lyrics_pane

0xd0be,	// (0x00084b05) main_mup3_lyrics_pane_t1_ParamLimits

0xd0be,	// (0x00084b05) main_mup3_lyrics_pane_t1

0x92fb,	// (0x00080d42) aid_main_mp4_pane_t1_area

0x9305,	// (0x00080d4c) aid_main_mp4_pane_t2_area

0x9404,	// (0x00080e4b) main_mp4_pane_g7_ParamLimits

0x9404,	// (0x00080e4b) main_mp4_pane_g7

0x9410,	// (0x00080e57) main_mp4_pane_g8_ParamLimits

0x9410,	// (0x00080e57) main_mp4_pane_g8

0x9830,	// (0x00081277) aid_call6_pane_g1_size

0xcca3,	// (0x000846ea) list_double_large_graphic_phob2_other_pane_ParamLimits

0xcca3,	// (0x000846ea) list_double_large_graphic_phob2_other_pane

0x0f71,	// (0x000789b8) list_double_large_graphic_phob2_other_pane_g1

0xd36a,	// (0x00084db1) list_highlight_pane_cp026

0x074a,	// (0x00078191) main_welc_pane_ParamLimits

0xbafd,	// (0x00083544) main_sp_fs_ctrlbar_pane_g3_ParamLimits

0xbafd,	// (0x00083544) main_sp_fs_ctrlbar_pane_g3

0xbb15,	// (0x0008355c) main_sp_fs_ctrlbar_pane_g4_ParamLimits

0xbb15,	// (0x0008355c) main_sp_fs_ctrlbar_pane_g4

0xbb47,	// (0x0008358e) toolbar2_fixed_button_pane_cp01

0xbb52,	// (0x00083599) toolbar2_fixed_button_pane_cp02

0xbb5d,	// (0x000835a4) toolbar2_fixed_button_pane_cp03

0xce3a,	// (0x00084881) list_welc_entry_pane_ParamLimits

0xce3a,	// (0x00084881) list_welc_entry_pane

0xce9d,	// (0x000848e4) main_welc_pane_g3_ParamLimits

0xce9d,	// (0x000848e4) main_welc_pane_g3

0xcedf,	// (0x00084926) main_welc_pane_t2_ParamLimits

0xcedf,	// (0x00084926) main_welc_pane_t2

0xcef3,	// (0x0008493a) main_welc_pane_t3_ParamLimits

0xcef3,	// (0x0008493a) main_welc_pane_t3

0x0005,

0xfe8d,	// (0x000878d4) main_welc_pane_t_ParamLimits

0xfe8d,	// (0x000878d4) main_welc_pane_t

0xcf7d,	// (0x000849c4) welc_button_pane_ParamLimits

0xcf7d,	// (0x000849c4) welc_button_pane

0xcfcd,	// (0x00084a14) welc_service_logo_pane_ParamLimits

0xcfcd,	// (0x00084a14) welc_service_logo_pane

0xd0f4,	// (0x00084b3b) list_single_welc_entry_pane_ParamLimits

0xd0f4,	// (0x00084b3b) list_single_welc_entry_pane

0xd105,	// (0x00084b4c) list_single_welc_entry_pane_g1

0xd10d,	// (0x00084b54) list_single_welc_entry_pane_t1

0xd11b,	// (0x00084b62) list_single_welc_entry_pane_t2

0x0001,

0xfe9f,	// (0x000878e6) list_single_welc_entry_pane_t

0xd36a,	// (0x00084db1) bg_button_pane_cp035

0xd129,	// (0x00084b70) welc_button_pane_t1

0xd137,	// (0x00084b7e) welc_service_logo_pane_g1

0xd140,	// (0x00084b87) welc_service_logo_pane_g2

0x0001,

0xfea4,	// (0x000878eb) welc_service_logo_pane_g

0x4f7c,	// (0x0007c9c3) main_int_radio_pane

0x2686,	// (0x0007a0cd) list_single_fs_dyc_pane_g1

0xcb75,	// (0x000845bc) list_double_large_graphic_phob2_pane_g3_ParamLimits

0xcb75,	// (0x000845bc) list_double_large_graphic_phob2_pane_g3

0xcb81,	// (0x000845c8) list_double_large_graphic_phob2_pane_g4_ParamLimits

0xcb81,	// (0x000845c8) list_double_large_graphic_phob2_pane_g4

0xd149,	// (0x00084b90) main_int_radio1_pane_ParamLimits

0xd149,	// (0x00084b90) main_int_radio1_pane

0xd15b,	// (0x00084ba2) find_pane_cp02

0xd164,	// (0x00084bab) input_focus_pane_cp12_ParamLimits

0xd164,	// (0x00084bab) input_focus_pane_cp12

0xd170,	// (0x00084bb7) input_focus_pane_cp13_ParamLimits

0xd170,	// (0x00084bb7) input_focus_pane_cp13

0xd188,	// (0x00084bcf) input_focus_pane_cp14_ParamLimits

0xd188,	// (0x00084bcf) input_focus_pane_cp14

0xd1a0,	// (0x00084be7) int_radio1_listscroll_pane

0xd1aa,	// (0x00084bf1) main_int_radio1_pane_g1_ParamLimits

0xd1aa,	// (0x00084bf1) main_int_radio1_pane_g1

0xd1ba,	// (0x00084c01) main_int_radio1_pane_t1_ParamLimits

0xd1ba,	// (0x00084c01) main_int_radio1_pane_t1

0xd1ce,	// (0x00084c15) main_int_radio1_pane_t2_ParamLimits

0xd1ce,	// (0x00084c15) main_int_radio1_pane_t2

0xd1e2,	// (0x00084c29) main_int_radio1_pane_t3_ParamLimits

0xd1e2,	// (0x00084c29) main_int_radio1_pane_t3

0xd1f6,	// (0x00084c3d) main_int_radio1_pane_t4_ParamLimits

0xd1f6,	// (0x00084c3d) main_int_radio1_pane_t4

0xd20d,	// (0x00084c54) main_int_radio1_pane_t5_ParamLimits

0xd20d,	// (0x00084c54) main_int_radio1_pane_t5

0xd21f,	// (0x00084c66) main_int_radio1_pane_t6_ParamLimits

0xd21f,	// (0x00084c66) main_int_radio1_pane_t6

0xd231,	// (0x00084c78) main_int_radio1_pane_t7_ParamLimits

0xd231,	// (0x00084c78) main_int_radio1_pane_t7

0xd243,	// (0x00084c8a) main_int_radio1_pane_t8_ParamLimits

0xd243,	// (0x00084c8a) main_int_radio1_pane_t8

0xd257,	// (0x00084c9e) main_int_radio1_pane_t9_ParamLimits

0xd257,	// (0x00084c9e) main_int_radio1_pane_t9

0xd269,	// (0x00084cb0) main_int_radio1_pane_t10_ParamLimits

0xd269,	// (0x00084cb0) main_int_radio1_pane_t10

0xd29a,	// (0x00084ce1) main_int_radio1_pane_t11_ParamLimits

0xd29a,	// (0x00084ce1) main_int_radio1_pane_t11

0xd2cb,	// (0x00084d12) main_int_radio1_pane_t12_ParamLimits

0xd2cb,	// (0x00084d12) main_int_radio1_pane_t12

0x000b,

0xfea9,	// (0x000878f0) main_int_radio1_pane_t_ParamLimits

0xfea9,	// (0x000878f0) main_int_radio1_pane_t

0xd2e2,	// (0x00084d29) int_radio_list_pane

0xcb20,	// (0x00084567) scroll_pane_cp037

0xd2ea,	// (0x00084d31) list_double_large_graphic_int_radio_pane_ParamLimits

0xd2ea,	// (0x00084d31) list_double_large_graphic_int_radio_pane

0xd303,	// (0x00084d4a) list_double_large_graphic_int_radio_pane_g1

0x3883,	// (0x0007b2ca) list_double_large_graphic_int_radio_pane_t1

0x3891,	// (0x0007b2d8) list_double_large_graphic_int_radio_pane_t2

0x0001,

0xfec2,	// (0x00087909) list_double_large_graphic_int_radio_pane_t

0xd36a,	// (0x00084db1) list_highlight_pane_cp027

0xce49,	// (0x00084890) main_button_pane_4

0xcea9,	// (0x000848f0) main_welc_pane_g4_ParamLimits

0xcea9,	// (0x000848f0) main_welc_pane_g4

0xcf05,	// (0x0008494c) main_welc_pane_t4_ParamLimits

0xcf05,	// (0x0008494c) main_welc_pane_t4

0xcf17,	// (0x0008495e) main_welc_pane_t5_ParamLimits

0xcf17,	// (0x0008495e) main_welc_pane_t5

0xcf49,	// (0x00084990) main_welc_pane_t6_ParamLimits

0xcf49,	// (0x00084990) main_welc_pane_t6

0xcf8b,	// (0x000849d2) welc_button_pane_2_ParamLimits

0xcf8b,	// (0x000849d2) welc_button_pane_2

0xcfa3,	// (0x000849ea) welc_button_pane_3_ParamLimits

0xcfa3,	// (0x000849ea) welc_button_pane_3

0xce49,	// (0x00084890) welc_button_pane_4

0xcfbd,	// (0x00084a04) welc_button_pane_5_ParamLimits

0xcfbd,	// (0x00084a04) welc_button_pane_5

0x8132,	// (0x0007fb79) main_popup_welc_pane

0xd30c,	// (0x00084d53) main_welc_sk_g3

0xd316,	// (0x00084d5d) main_welc_sk_g4

0xd320,	// (0x00084d67) main_welc_sk_t3

0xd330,	// (0x00084d77) main_welc_sk_t4

0xd340,	// (0x00084d87) popup_welc_pane_t4

0xd34e,	// (0x00084d95) popup_welc_pane_t5

0xd35c,	// (0x00084da3) popup_welc_pane_t6
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
	};

} // end of namespace AknLayoutScalable_Abrw_pnp4_apps_nhd4_prt_tch_Large
