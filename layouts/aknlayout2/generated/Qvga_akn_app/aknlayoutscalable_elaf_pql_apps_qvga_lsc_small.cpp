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

#include "aknlayoutscalable_elaf_pql_apps_qvga_lsc_small.h"
#include "AknLayout2ScalableDecode.h"
namespace AknLayoutScalable_Apps { extern const TUint8 KByteCodedData_AknLayoutScalable_Elaf_pqp_apps_qvga_prt[]; }

namespace AknLayoutScalable_Elaf_pql_apps_qvga_lsc_Small
{

extern const TUint16 KDataLookup[AknLayoutScalable_Apps::E_TApiId_TableSize];
const SCompDataImplData KImplData = { KDataLookup, AknLayoutScalable_Apps::KByteCodedData_AknLayoutScalable_Elaf_pqp_apps_qvga_prt + 0x00040e96 };

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
0x17b4,	// (0x0004264a) Screen

0x17be,	// (0x00042654) application_window

0x17f4,	// (0x0004268a) area_bottom_pane_ParamLimits

0x17f4,	// (0x0004268a) area_bottom_pane

0x1827,	// (0x000426bd) area_top_pane_ParamLimits

0x1827,	// (0x000426bd) area_top_pane

0xa891,	// (0x0004b727) call_video_uplink_pane_ParamLimits

0xa891,	// (0x0004b727) call_video_uplink_pane

0x18a7,	// (0x0004273d) main_pane_ParamLimits

0x18a7,	// (0x0004273d) main_pane

0x4e86,	// (0x00045d1c) context_pane

0x4e99,	// (0x00045d2f) navi_pane

0x4ec2,	// (0x00045d58) popup_cale_events_window_ParamLimits

0x4ec2,	// (0x00045d58) popup_cale_events_window

0x4eda,	// (0x00045d70) popup_mup_playback_window

0x4ee2,	// (0x00045d78) signal_pane

0xd729,	// (0x0004e5bf) main_browser_pane

0xd8f8,	// (0x0004e78e) main_burst_pane

0xef76,	// (0x0004fe0c) main_calc_pane

0x4c18,	// (0x00045aae) main_cale_day_pane

0x1e36,	// (0x00042ccc) main_cale_month_pane

0x4c18,	// (0x00045aae) main_cale_week_pane

0xd8f8,	// (0x0004e78e) main_call_pane

0xd405,	// (0x0004e29b) main_call_poc_pane

0xd8f8,	// (0x0004e78e) main_camera_pane

0xd8f8,	// (0x0004e78e) main_chi_dic_pane

0xe103,	// (0x0004ef99) main_clock_pane

0xd405,	// (0x0004e29b) main_fmradio_pane

0xd8f8,	// (0x0004e78e) main_graph_messa_pane

0xd405,	// (0x0004e29b) main_help_pane

0xd729,	// (0x0004e5bf) main_im_pane

0xd660,	// (0x0004e4f6) main_image_pane_ParamLimits

0xd660,	// (0x0004e4f6) main_image_pane

0xd405,	// (0x0004e29b) main_location2_pane

0xd8f8,	// (0x0004e78e) main_location_pane

0xd660,	// (0x0004e4f6) main_messa_pane

0xd405,	// (0x0004e29b) main_mp2_pane

0xd8f8,	// (0x0004e78e) main_mp_pane

0xd405,	// (0x0004e29b) main_msg_pane

0xd405,	// (0x0004e29b) main_mup_eq_pane

0xd405,	// (0x0004e29b) main_mup_pane

0xd729,	// (0x0004e5bf) main_notes_pane

0xd405,	// (0x0004e29b) main_pec_pane

0xd405,	// (0x0004e29b) main_phob_pane

0xd405,	// (0x0004e29b) main_pinb_pane

0xd405,	// (0x0004e29b) main_postcard_pane

0xd405,	// (0x0004e29b) main_qdial_pane

0xd8f8,	// (0x0004e78e) main_skin_pane

0xd405,	// (0x0004e29b) main_smil2_pane

0xd8f8,	// (0x0004e78e) main_smil_pane

0xd8f8,	// (0x0004e78e) main_video_pane

0xd8f8,	// (0x0004e78e) main_video_tele_pane

0xd660,	// (0x0004e4f6) main_viewer_pane_ParamLimits

0xd660,	// (0x0004e4f6) main_viewer_pane

0xd8f8,	// (0x0004e78e) main_vorec_pane

0x4c7a,	// (0x00045b10) popup_blid_sat_info_window_ParamLimits

0x4c7a,	// (0x00045b10) popup_blid_sat_info_window

0x4cd0,	// (0x00045b66) popup_dyc_status_message_window_ParamLimits

0x4cd0,	// (0x00045b66) popup_dyc_status_message_window

0x4ce6,	// (0x00045b7c) popup_grid_large_graphic_window_ParamLimits

0x4ce6,	// (0x00045b7c) popup_grid_large_graphic_window

0x4d7c,	// (0x00045c12) popup_loc_request_window_ParamLimits

0x4d7c,	// (0x00045c12) popup_loc_request_window

0x4e60,	// (0x00045cf6) popup_wml_address_window_ParamLimits

0x4e60,	// (0x00045cf6) popup_wml_address_window

0x4a73,	// (0x00045909) call_muted_g1

0x4112,	// (0x00044fa8) popup_call_audio_conf_window_ParamLimits

0x4112,	// (0x00044fa8) popup_call_audio_conf_window

0x4a83,	// (0x00045919) popup_call_audio_first_window_ParamLimits

0x4a83,	// (0x00045919) popup_call_audio_first_window

0x4ae1,	// (0x00045977) popup_call_audio_in_window_ParamLimits

0x4ae1,	// (0x00045977) popup_call_audio_in_window

0x4b0d,	// (0x000459a3) popup_call_audio_out_window_ParamLimits

0x4b0d,	// (0x000459a3) popup_call_audio_out_window

0x4b3b,	// (0x000459d1) popup_call_audio_second_window_ParamLimits

0x4b3b,	// (0x000459d1) popup_call_audio_second_window

0x4b81,	// (0x00045a17) popup_call_audio_wait_window_ParamLimits

0x4b81,	// (0x00045a17) popup_call_audio_wait_window

0x4bb4,	// (0x00045a4a) popup_number_entry_window_ParamLimits

0x4bb4,	// (0x00045a4a) popup_number_entry_window

0xa8ad,	// (0x0004b743) bg_popup_call_pane_cp05_ParamLimits

0xa8ad,	// (0x0004b743) bg_popup_call_pane_cp05

0xcf0b,	// (0x0004dda1) popup_number_entry_window_t1

0xcf1e,	// (0x0004ddb4) popup_number_entry_window_t2

0xcf30,	// (0x0004ddc6) popup_number_entry_window_t3

0x0003,

0xf0af,	// (0x0004ff45) popup_number_entry_window_t

0xcf42,	// (0x0004ddd8) text_title_cp2

0xcf55,	// (0x0004ddeb) bg_popup_call_pane_cp_ParamLimits

0xcf55,	// (0x0004ddeb) bg_popup_call_pane_cp

0xcf63,	// (0x0004ddf9) call_thumbnail_pane

0xcf6b,	// (0x0004de01) popup_call_audio_in_window_g1_ParamLimits

0xcf6b,	// (0x0004de01) popup_call_audio_in_window_g1

0xcf77,	// (0x0004de0d) popup_call_audio_in_window_g2_ParamLimits

0xcf77,	// (0x0004de0d) popup_call_audio_in_window_g2

0xcf83,	// (0x0004de19) popup_call_audio_in_window_g3_ParamLimits

0xcf83,	// (0x0004de19) popup_call_audio_in_window_g3

0x0002,

0xf0b8,	// (0x0004ff4e) popup_call_audio_in_window_g_ParamLimits

0xf0b8,	// (0x0004ff4e) popup_call_audio_in_window_g

0xcf8f,	// (0x0004de25) popup_call_audio_in_window_t1_ParamLimits

0xcf8f,	// (0x0004de25) popup_call_audio_in_window_t1

0xcfaa,	// (0x0004de40) popup_call_audio_in_window_t2_ParamLimits

0xcfaa,	// (0x0004de40) popup_call_audio_in_window_t2

0xcfc5,	// (0x0004de5b) popup_call_audio_in_window_t3_ParamLimits

0xcfc5,	// (0x0004de5b) popup_call_audio_in_window_t3

0x0002,

0xf0bf,	// (0x0004ff55) popup_call_audio_in_window_t_ParamLimits

0xf0bf,	// (0x0004ff55) popup_call_audio_in_window_t

0xcf55,	// (0x0004ddeb) bg_popup_call_pane_cp01_ParamLimits

0xcf55,	// (0x0004ddeb) bg_popup_call_pane_cp01

0xcf63,	// (0x0004ddf9) call_thumbnail_pane_cp02

0xcfd8,	// (0x0004de6e) call_type_pane_cp022

0xcfe0,	// (0x0004de76) popup_call_audio_out_window_g1_ParamLimits

0xcfe0,	// (0x0004de76) popup_call_audio_out_window_g1

0xcff2,	// (0x0004de88) popup_call_audio_out_window_g2_ParamLimits

0xcff2,	// (0x0004de88) popup_call_audio_out_window_g2

0xcffe,	// (0x0004de94) popup_call_audio_out_window_g3_ParamLimits

0xcffe,	// (0x0004de94) popup_call_audio_out_window_g3

0x0002,

0xf0c6,	// (0x0004ff5c) popup_call_audio_out_window_g_ParamLimits

0xf0c6,	// (0x0004ff5c) popup_call_audio_out_window_g

0xd010,	// (0x0004dea6) popup_call_audio_out_window_t1_ParamLimits

0xd010,	// (0x0004dea6) popup_call_audio_out_window_t1

0xd028,	// (0x0004debe) popup_call_audio_out_window_t2_ParamLimits

0xd028,	// (0x0004debe) popup_call_audio_out_window_t2

0x0001,

0xf0cd,	// (0x0004ff63) popup_call_audio_out_window_t_ParamLimits

0xf0cd,	// (0x0004ff63) popup_call_audio_out_window_t

0xd03d,	// (0x0004ded3) bg_popup_call_pane_ParamLimits

0xd03d,	// (0x0004ded3) bg_popup_call_pane

0x1a30,	// (0x000428c6) call_thumbnail_pane_cp_ParamLimits

0x1a30,	// (0x000428c6) call_thumbnail_pane_cp

0xd0c1,	// (0x0004df57) call_type_pane_cp01_ParamLimits

0xd0c1,	// (0x0004df57) call_type_pane_cp01

0xd105,	// (0x0004df9b) popup_call_audio_first_window_g1_ParamLimits

0xd105,	// (0x0004df9b) popup_call_audio_first_window_g1

0xd151,	// (0x0004dfe7) popup_call_audio_first_window_g2_ParamLimits

0xd151,	// (0x0004dfe7) popup_call_audio_first_window_g2

0x0001,

0xf0d2,	// (0x0004ff68) popup_call_audio_first_window_g_ParamLimits

0xf0d2,	// (0x0004ff68) popup_call_audio_first_window_g

0xd29e,	// (0x0004e134) popup_call_audio_first_window_t1_ParamLimits

0xd29e,	// (0x0004e134) popup_call_audio_first_window_t1

0xd34a,	// (0x0004e1e0) popup_call_audio_first_window_t4_ParamLimits

0xd34a,	// (0x0004e1e0) popup_call_audio_first_window_t4

0xd3d6,	// (0x0004e26c) popup_call_audio_first_window_t5_ParamLimits

0xd3d6,	// (0x0004e26c) popup_call_audio_first_window_t5

0x0002,

0xf0d7,	// (0x0004ff6d) popup_call_audio_first_window_t_ParamLimits

0xf0d7,	// (0x0004ff6d) popup_call_audio_first_window_t

0xd405,	// (0x0004e29b) bg_popup_call_pane_cp02

0xd40f,	// (0x0004e2a5) call_type_pane_cp023

0xd417,	// (0x0004e2ad) popup_call_audio_wait_window_g1

0xd41f,	// (0x0004e2b5) popup_call_audio_wait_window_g2

0x0001,

0xf0de,	// (0x0004ff74) popup_call_audio_wait_window_g

0xd427,	// (0x0004e2bd) popup_call_audio_wait_window_t3

0xd435,	// (0x0004e2cb) bg_popup_call_pane_cp03_ParamLimits

0xd435,	// (0x0004e2cb) bg_popup_call_pane_cp03

0xd495,	// (0x0004e32b) call_thumbnail_pane_cp011_ParamLimits

0xd495,	// (0x0004e32b) call_thumbnail_pane_cp011

0xd4a1,	// (0x0004e337) call_type_pane_cp034_ParamLimits

0xd4a1,	// (0x0004e337) call_type_pane_cp034

0xd4dd,	// (0x0004e373) popup_call_audio_second_window_g1_ParamLimits

0xd4dd,	// (0x0004e373) popup_call_audio_second_window_g1

0xd519,	// (0x0004e3af) popup_call_audio_second_window_g2_ParamLimits

0xd519,	// (0x0004e3af) popup_call_audio_second_window_g2

0x0001,

0xf0e3,	// (0x0004ff79) popup_call_audio_second_window_g_ParamLimits

0xf0e3,	// (0x0004ff79) popup_call_audio_second_window_g

0xd555,	// (0x0004e3eb) popup_call_audio_second_window_t1_ParamLimits

0xd555,	// (0x0004e3eb) popup_call_audio_second_window_t1

0xd5d6,	// (0x0004e46c) popup_call_audio_second_window_t2_ParamLimits

0xd5d6,	// (0x0004e46c) popup_call_audio_second_window_t2

0xd60c,	// (0x0004e4a2) popup_call_audio_second_window_t3_ParamLimits

0xd60c,	// (0x0004e4a2) popup_call_audio_second_window_t3

0x0002,

0xf0e8,	// (0x0004ff7e) popup_call_audio_second_window_t_ParamLimits

0xf0e8,	// (0x0004ff7e) popup_call_audio_second_window_t

0xd405,	// (0x0004e29b) bg_popup_call_pane_cp04

0xd642,	// (0x0004e4d8) list_conf_pane

0xd64a,	// (0x0004e4e0) popup_call_audio_conf_window_t1

0xd658,	// (0x0004e4ee) call_thumbnail_pane_g1

0xd660,	// (0x0004e4f6) bg_pinb_pane_ParamLimits

0xd660,	// (0x0004e4f6) bg_pinb_pane

0xd66e,	// (0x0004e504) find_pinb_pane

0xd677,	// (0x0004e50d) listscroll_pinb_pane_ParamLimits

0xd677,	// (0x0004e50d) listscroll_pinb_pane

0xd686,	// (0x0004e51c) pinb_bg_pane_g1

0x1a54,	// (0x000428ea) pinb_bg_pane_g2

0x1a5e,	// (0x000428f4) pinb_bg_pane_g3

0x1a68,	// (0x000428fe) pinb_bg_pane_g4

0x1a72,	// (0x00042908) pinb_bg_pane_g5

0x1a7c,	// (0x00042912) pinb_bg_pane_g6

0x1a85,	// (0x0004291b) pinb_bg_pane_g7

0x1a8e,	// (0x00042924) pinb_bg_pane_g8

0x1a99,	// (0x0004292f) pinb_bg_pane_g9

0x1aa3,	// (0x00042939) pinb_bg_pane_g10

0x0009,

0xf0ef,	// (0x0004ff85) pinb_bg_pane_g

0x1abe,	// (0x00042954) grid_pinb_pane

0x1ac7,	// (0x0004295d) list_pinb_pane

0x1ad0,	// (0x00042966) scroll_pane_cp01_ParamLimits

0x1ad0,	// (0x00042966) scroll_pane_cp01

0xd690,	// (0x0004e526) find_pinb_pane_g1_ParamLimits

0xd690,	// (0x0004e526) find_pinb_pane_g1

0xd6a8,	// (0x0004e53e) find_pinb_pane_t1

0xd6ba,	// (0x0004e550) find_pinb_pane_t2

0x0001,

0xf109,	// (0x0004ff9f) find_pinb_pane_t

0xd6cf,	// (0x0004e565) input_focus_pane_cp01_ParamLimits

0xd6cf,	// (0x0004e565) input_focus_pane_cp01

0x1ae2,	// (0x00042978) cell_pinb_pane_ParamLimits

0x1ae2,	// (0x00042978) cell_pinb_pane

0x1afd,	// (0x00042993) cell_pinb_pane_g1_ParamLimits

0x1afd,	// (0x00042993) cell_pinb_pane_g1

0x1b0d,	// (0x000429a3) cell_pinb_pane_g2_ParamLimits

0x1b0d,	// (0x000429a3) cell_pinb_pane_g2

0xd6db,	// (0x0004e571) cell_pinb_pane_g3_ParamLimits

0xd6db,	// (0x0004e571) cell_pinb_pane_g3

0x0002,

0xf10e,	// (0x0004ffa4) cell_pinb_pane_g_ParamLimits

0xf10e,	// (0x0004ffa4) cell_pinb_pane_g

0xd405,	// (0x0004e29b) grid_highlight_pane_cp01

0x1b19,	// (0x000429af) list_pinb_item_pane_ParamLimits

0x1b19,	// (0x000429af) list_pinb_item_pane

0xd405,	// (0x0004e29b) list_highlight_pane_cp02

0x1b2b,	// (0x000429c1) list_pinb_item_pane_g1_ParamLimits

0x1b2b,	// (0x000429c1) list_pinb_item_pane_g1

0x1b38,	// (0x000429ce) list_pinb_item_pane_g2_ParamLimits

0x1b38,	// (0x000429ce) list_pinb_item_pane_g2

0x1b44,	// (0x000429da) list_pinb_item_pane_g3_ParamLimits

0x1b44,	// (0x000429da) list_pinb_item_pane_g3

0x1b55,	// (0x000429eb) list_pinb_item_pane_g4_ParamLimits

0x1b55,	// (0x000429eb) list_pinb_item_pane_g4

0x0003,

0xf115,	// (0x0004ffab) list_pinb_item_pane_g_ParamLimits

0xf115,	// (0x0004ffab) list_pinb_item_pane_g

0x1b61,	// (0x000429f7) list_pinb_item_pane_t1_ParamLimits

0x1b61,	// (0x000429f7) list_pinb_item_pane_t1

0x1b96,	// (0x00042a2c) calc_display_pane

0x1bb2,	// (0x00042a48) calc_paper_pane

0x1bd3,	// (0x00042a69) grid_calc_pane

0xd405,	// (0x0004e29b) bg_list_pane_cp01

0x1bef,	// (0x00042a85) clock_g1

0x1bf7,	// (0x00042a8d) clock_g2

0x0001,

0xf11e,	// (0x0004ffb4) clock_g

0x1bff,	// (0x00042a95) clock_t1_ParamLimits

0x1bff,	// (0x00042a95) clock_t1

0x1c14,	// (0x00042aaa) clock_t2_ParamLimits

0x1c14,	// (0x00042aaa) clock_t2

0x1c26,	// (0x00042abc) clock_t3_ParamLimits

0x1c26,	// (0x00042abc) clock_t3

0x1c38,	// (0x00042ace) clock_t4_ParamLimits

0x1c38,	// (0x00042ace) clock_t4

0x1c4a,	// (0x00042ae0) clock_t5_ParamLimits

0x1c4a,	// (0x00042ae0) clock_t5

0x1c5f,	// (0x00042af5) clock_t6_ParamLimits

0x1c5f,	// (0x00042af5) clock_t6

0x1c71,	// (0x00042b07) clock_t7_ParamLimits

0x1c71,	// (0x00042b07) clock_t7

0x1c83,	// (0x00042b19) clock_t8_ParamLimits

0x1c83,	// (0x00042b19) clock_t8

0x1c95,	// (0x00042b2b) clock_t9_ParamLimits

0x1c95,	// (0x00042b2b) clock_t9

0x0008,

0xf123,	// (0x0004ffb9) clock_t_ParamLimits

0xf123,	// (0x0004ffb9) clock_t

0xd6e7,	// (0x0004e57d) popup_clock_analogue_window_cp02

0xd6e7,	// (0x0004e57d) popup_clock_digital_window_cp01

0xd6ef,	// (0x0004e585) listscroll_help_pane

0xd405,	// (0x0004e29b) phob_pre_status_pane

0xd6f9,	// (0x0004e58f) grid_qdial_pane

0xd660,	// (0x0004e4f6) listscroll_mce_pane

0xd660,	// (0x0004e4f6) bg_notes_pane

0xd703,	// (0x0004e599) list_notes_pane

0x1ca7,	// (0x00042b3d) scroll_pane_cp06

0xd711,	// (0x0004e5a7) bg_calc_paper_pane

0xa8d5,	// (0x0004b76b) list_calc_pane

0xd729,	// (0x0004e5bf) bg_calc_display_pane

0xa8ef,	// (0x0004b785) calc_display_pane_t1

0xa904,	// (0x0004b79a) calc_display_pane_t2

0xa919,	// (0x0004b7af) calc_display_pane_t3

0x0002,

0xf136,	// (0x0004ffcc) calc_display_pane_t

0x1cb9,	// (0x00042b4f) cell_calc_pane_ParamLimits

0x1cb9,	// (0x00042b4f) cell_calc_pane

0xd735,	// (0x0004e5cb) bg_calc_paper_pane_g1

0xd741,	// (0x0004e5d7) bg_calc_paper_pane_g2

0xd74d,	// (0x0004e5e3) bg_calc_paper_pane_g3

0xd759,	// (0x0004e5ef) bg_calc_paper_pane_g4

0xd765,	// (0x0004e5fb) bg_calc_paper_pane_g5

0x1cec,	// (0x00042b82) bg_calc_paper_pane_g6

0x1cfb,	// (0x00042b91) bg_calc_paper_pane_g7

0x1d0a,	// (0x00042ba0) bg_calc_paper_pane_g8

0x0007,

0xf13d,	// (0x0004ffd3) bg_calc_paper_pane_g

0x1d19,	// (0x00042baf) calc_bg_paper_pane_g9

0x1d28,	// (0x00042bbe) list_calc_item_pane_ParamLimits

0x1d28,	// (0x00042bbe) list_calc_item_pane

0xd771,	// (0x0004e607) list_calc_item_pane_g1

0xa92b,	// (0x0004b7c1) list_calc_item_pane_t1_ParamLimits

0xa92b,	// (0x0004b7c1) list_calc_item_pane_t1

0x1d3c,	// (0x00042bd2) list_calc_item_pane_t2_ParamLimits

0x1d3c,	// (0x00042bd2) list_calc_item_pane_t2

0x0001,

0xf14e,	// (0x0004ffe4) list_calc_item_pane_t_ParamLimits

0xf14e,	// (0x0004ffe4) list_calc_item_pane_t

0xd77e,	// (0x0004e614) cell_calc_pane_g1

0xd788,	// (0x0004e61e) grid_highlight_pane_cp02

0xd7aa,	// (0x0004e640) bg_calc_display_pane_g1

0xa93d,	// (0x0004b7d3) bg_calc_display_pane_g2

0xd7b3,	// (0x0004e649) bg_calc_display_pane_g3

0x0002,

0xf158,	// (0x0004ffee) bg_calc_display_pane_g

0x1d6a,	// (0x00042c00) cell_qdial_pane_ParamLimits

0x1d6a,	// (0x00042c00) cell_qdial_pane

0x1d7c,	// (0x00042c12) cell_qdial_pane_g1_ParamLimits

0x1d7c,	// (0x00042c12) cell_qdial_pane_g1

0x1d92,	// (0x00042c28) cell_qdial_pane_g2_ParamLimits

0x1d92,	// (0x00042c28) cell_qdial_pane_g2

0xd7bc,	// (0x0004e652) cell_qdial_pane_g3_ParamLimits

0xd7bc,	// (0x0004e652) cell_qdial_pane_g3

0x0003,

0xf15f,	// (0x0004fff5) cell_qdial_pane_g_ParamLimits

0xf15f,	// (0x0004fff5) cell_qdial_pane_g

0x1db9,	// (0x00042c4f) cell_qdial_pane_t1_ParamLimits

0x1db9,	// (0x00042c4f) cell_qdial_pane_t1

0x1dd1,	// (0x00042c67) cell_qdial_pane_t2_ParamLimits

0x1dd1,	// (0x00042c67) cell_qdial_pane_t2

0x1de4,	// (0x00042c7a) cell_qdial_pane_t3_ParamLimits

0x1de4,	// (0x00042c7a) cell_qdial_pane_t3

0x0002,

0xf168,	// (0x0004fffe) cell_qdial_pane_t_ParamLimits

0xf168,	// (0x0004fffe) cell_qdial_pane_t

0xd405,	// (0x0004e29b) grid_highlight_pane_cp04

0xd7c8,	// (0x0004e65e) thumbnail_qdial_pane_ParamLimits

0xd7c8,	// (0x0004e65e) thumbnail_qdial_pane

0xd824,	// (0x0004e6ba) list_help_pane

0xd82e,	// (0x0004e6c4) scroll_pane_cp02

0x1df7,	// (0x00042c8d) help_list_pane_t1_ParamLimits

0x1df7,	// (0x00042c8d) help_list_pane_t1

0xa947,	// (0x0004b7dd) bg_notes_pane_g2

0xa94f,	// (0x0004b7e5) bg_notes_pane_g3

0xa957,	// (0x0004b7ed) notes_bg_pane_g1

0xa95f,	// (0x0004b7f5) notes_bg_pane_g4

0xa967,	// (0x0004b7fd) notes_bg_pane_g5

0xa96f,	// (0x0004b805) notes_bg_pane_g6

0xa977,	// (0x0004b80d) notes_bg_pane_g7

0xa97f,	// (0x0004b815) notes_bg_pane_g8

0xa987,	// (0x0004b81d) notes_bg_pane_g9

0x0006,

0xf186,	// (0x0005001c) notes_bg_pane_g

0x1e13,	// (0x00042ca9) list_notes_text_pane_ParamLimits

0x1e13,	// (0x00042ca9) list_notes_text_pane

0xd837,	// (0x0004e6cd) list_notes_text_pane_g1

0x0b41,	// (0x000419d7) list_notes_text_pane_t1

0x1e36,	// (0x00042ccc) listscroll_cale_week_pane

0x1e60,	// (0x00042cf6) bg_cale_heading_pane

0xd85a,	// (0x0004e6f0) bg_cale_pane_cp01

0x1e78,	// (0x00042d0e) cale_week_corner_pane

0x1e97,	// (0x00042d2d) cale_week_day_heading_pane

0x1eb4,	// (0x00042d4a) cale_week_scroll_pane_g1

0x1ec7,	// (0x00042d5d) cale_week_scroll_pane_g2

0x1edf,	// (0x00042d75) cale_week_scroll_pane_g3

0x1ef7,	// (0x00042d8d) cale_week_scroll_pane_g4

0x1f0f,	// (0x00042da5) cale_week_scroll_pane_g5

0x1f27,	// (0x00042dbd) cale_week_scroll_pane_g6

0x1f3f,	// (0x00042dd5) cale_week_scroll_pane_g7

0x1f57,	// (0x00042ded) cale_week_scroll_pane_g8

0x1f73,	// (0x00042e09) cale_week_scroll_pane_g9

0x1f8b,	// (0x00042e21) cale_week_scroll_pane_g10

0x1fa3,	// (0x00042e39) cale_week_scroll_pane_g11

0x1fbb,	// (0x00042e51) cale_week_scroll_pane_g12

0x1fd3,	// (0x00042e69) cale_week_scroll_pane_g13

0x1feb,	// (0x00042e81) cale_week_scroll_pane_g14

0x2003,	// (0x00042e99) cale_week_scroll_pane_g15

0x000f,

0xf195,	// (0x0005002b) cale_week_scroll_pane_g

0x2037,	// (0x00042ecd) cale_week_time_pane

0x2053,	// (0x00042ee9) grid_cale_week_pane

0xd889,	// (0x0004e71f) scroll_pane_cp08

0x2071,	// (0x00042f07) cell_cale_week_pane_ParamLimits

0x2071,	// (0x00042f07) cell_cale_week_pane

0x20e7,	// (0x00042f7d) cale_week_day_heading_pane_t1

0x2111,	// (0x00042fa7) cale_week_day_heading_pane_t2

0x2140,	// (0x00042fd6) cale_week_day_heading_pane_t3

0x216f,	// (0x00043005) cale_week_day_heading_pane_t4

0x219e,	// (0x00043034) cale_week_day_heading_pane_t5

0x21cd,	// (0x00043063) cale_week_day_heading_pane_t6

0x21fc,	// (0x00043092) cale_week_day_heading_pane_t7

0x0006,

0xf1b6,	// (0x0005004c) cale_week_day_heading_pane_t

0xd8a6,	// (0x0004e73c) bg_cale_side_pane

0x2226,	// (0x000430bc) cale_week_time_pane_t1

0x2260,	// (0x000430f6) cale_week_time_pane_t2

0x229a,	// (0x00043130) cale_week_time_pane_t3

0x22d4,	// (0x0004316a) cale_week_time_pane_t4

0x230e,	// (0x000431a4) cale_week_time_pane_t5

0x2348,	// (0x000431de) cale_week_time_pane_t6

0x2382,	// (0x00043218) cale_week_time_pane_t7

0x23bc,	// (0x00043252) cale_week_time_pane_t8

0x0007,

0xf1c5,	// (0x0005005b) cale_week_time_pane_t

0x23f6,	// (0x0004328c) cell_cale_week_pane_g2

0x2415,	// (0x000432ab) cell_cale_week_pane_g3_ParamLimits

0x2415,	// (0x000432ab) cell_cale_week_pane_g3

0xd8b4,	// (0x0004e74a) grid_highlight_pane_cp07

0xd8bc,	// (0x0004e752) listscroll_gms_pane

0xd8c6,	// (0x0004e75c) grid_gms_pane

0xd8cf,	// (0x0004e765) listscroll_gms_pane_g1

0xd8d7,	// (0x0004e76d) listscroll_gms_pane_g2

0x0001,

0xf1d6,	// (0x0005006c) listscroll_gms_pane_g

0x242d,	// (0x000432c3) scroll_pane_cp010

0x2438,	// (0x000432ce) cell_gms_pane_ParamLimits

0x2438,	// (0x000432ce) cell_gms_pane

0x2448,	// (0x000432de) cell_gms_pane_g1

0xd8df,	// (0x0004e775) cell_gms_pane_g2

0xd837,	// (0x0004e6cd) cell_gms_pane_g3

0xd8e7,	// (0x0004e77d) cell_gms_pane_g4

0x0003,

0xf1db,	// (0x00050071) cell_gms_pane_g

0xd8f0,	// (0x0004e786) grid_highlight_pane_cp09

0x4a01,	// (0x00045897) phob_pre_status_pane_g1

0x4a09,	// (0x0004589f) phob_pre_status_pane_g2

0x4a11,	// (0x000458a7) phob_pre_status_pane_g3

0x4a19,	// (0x000458af) phob_pre_status_pane_g4

0x0004,

0xf59d,	// (0x00050433) phob_pre_status_pane_g

0x4a29,	// (0x000458bf) phob_pre_status_pane_t1

0x4a37,	// (0x000458cd) phob_pre_status_pane_t2

0x4a45,	// (0x000458db) phob_pre_status_pane_t3

0x0002,

0xf5a8,	// (0x0005043e) phob_pre_status_pane_t

0xd8f8,	// (0x0004e78e) bg_list_pane_cp05

0x2458,	// (0x000432ee) grid_vorec_pane

0xd900,	// (0x0004e796) vorec_t1

0xd90e,	// (0x0004e7a4) vorec_t2

0xd91c,	// (0x0004e7b2) vorec_t3

0x2460,	// (0x000432f6) vorec_t4

0xa80f,	// (0x0004b6a5) vorec_t5

0xa81d,	// (0x0004b6b3) vorec_t6

0x0004,

0xf1e4,	// (0x0005007a) vorec_t

0xa82b,	// (0x0004b6c1) wait_bar_pane_cp01

0x246e,	// (0x00043304) cell_vorec_pane_ParamLimits

0x246e,	// (0x00043304) cell_vorec_pane

0xa98f,	// (0x0004b825) cell_vorec_pane_g1

0xd405,	// (0x0004e29b) grid_highlight_pane_cp05

0x2493,	// (0x00043329) cams_zoom_pane

0x24a2,	// (0x00043338) image_vga_pane

0x24ba,	// (0x00043350) main_camera_pane_g1

0x24ca,	// (0x00043360) main_camera_pane_g2

0x24da,	// (0x00043370) main_camera_pane_g3

0x24ea,	// (0x00043380) main_camera_pane_g4

0x24fa,	// (0x00043390) main_camera_pane_g5

0x250a,	// (0x000433a0) main_camera_pane_g6

0x251a,	// (0x000433b0) main_camera_pane_g7

0x0007,

0xf1ef,	// (0x00050085) main_camera_pane_g

0x252a,	// (0x000433c0) main_camera_pane_t1

0x2540,	// (0x000433d6) main_camera_pane_t2

0x0001,

0xf200,	// (0x00050096) main_camera_pane_t

0x2572,	// (0x00043408) cams_zoom_pane_cp_ParamLimits

0x2572,	// (0x00043408) cams_zoom_pane_cp

0x259a,	// (0x00043430) image_cif_pane_ParamLimits

0x259a,	// (0x00043430) image_cif_pane

0x25cb,	// (0x00043461) image_subqcif_pane

0x25d3,	// (0x00043469) main_video_pane_g1_ParamLimits

0x25d3,	// (0x00043469) main_video_pane_g1

0x25f7,	// (0x0004348d) main_video_pane_g2_ParamLimits

0x25f7,	// (0x0004348d) main_video_pane_g2

0x262b,	// (0x000434c1) main_video_pane_g3_ParamLimits

0x262b,	// (0x000434c1) main_video_pane_g3

0x2659,	// (0x000434ef) main_video_pane_g4_ParamLimits

0x2659,	// (0x000434ef) main_video_pane_g4

0x2687,	// (0x0004351d) main_video_pane_g5_ParamLimits

0x2687,	// (0x0004351d) main_video_pane_g5

0xd944,	// (0x0004e7da) main_video_pane_g6_ParamLimits

0xd944,	// (0x0004e7da) main_video_pane_g6

0x0006,

0xf205,	// (0x0005009b) main_video_pane_g_ParamLimits

0xf205,	// (0x0005009b) main_video_pane_g

0x26ae,	// (0x00043544) main_video_pane_t1_ParamLimits

0x26ae,	// (0x00043544) main_video_pane_t1

0xd95e,	// (0x0004e7f4) cams_zoom_pane_g1

0xd967,	// (0x0004e7fd) cams_zoom_pane_g2

0xd970,	// (0x0004e806) cams_zoom_pane_g3

0xd979,	// (0x0004e80f) cams_zoom_pane_g4

0x0003,

0xf214,	// (0x000500aa) cams_zoom_pane_g

0x270b,	// (0x000435a1) grid_cams_pane

0x2720,	// (0x000435b6) linegrid_cams_pane

0x2731,	// (0x000435c7) cell_cams_pane_ParamLimits

0x2731,	// (0x000435c7) cell_cams_pane

0xd982,	// (0x0004e818) cams_burst_image_pane

0xd98a,	// (0x0004e820) cell_cams_pane_g1

0xd405,	// (0x0004e29b) grid_highlight_pane_cp03

0xd77e,	// (0x0004e614) mp_bg_pane_g1

0xd405,	// (0x0004e29b) bg_list_pane_cp03

0x493c,	// (0x000457d2) bg_mp_pane

0x4944,	// (0x000457da) grid_mp_pane

0x494c,	// (0x000457e2) media_player_g1

0x4954,	// (0x000457ea) media_player_t1

0x4962,	// (0x000457f8) media_player_t2

0x4970,	// (0x00045806) media_player_t3

0x497e,	// (0x00045814) media_player_t4

0x498c,	// (0x00045822) media_player_t5

0x499a,	// (0x00045830) media_player_t6

0x49a8,	// (0x0004583e) media_player_t7

0x0006,

0xf587,	// (0x0005041d) media_player_t

0x49b6,	// (0x0004584c) wait_bar_pane_cp02

0xf56c,	// (0x00050402) main_usb_pane_t

0x49f8,	// (0x0004588e) cell_mp_pane

0xd77e,	// (0x0004e614) cell_mp_pane_g1

0xd405,	// (0x0004e29b) grid_highlight_pane_cp06

0xd992,	// (0x0004e828) grid_skin_colour_pane

0xd99a,	// (0x0004e830) list_highlight_pane_cp03

0x274f,	// (0x000435e5) skin_g1

0xd9a2,	// (0x0004e838) skin_t1

0xd9cc,	// (0x0004e862) skin_t2

0x0001,

0xf249,	// (0x000500df) skin_t

0x2757,	// (0x000435ed) cell_skin_colour_pane_ParamLimits

0x2757,	// (0x000435ed) cell_skin_colour_pane

0xd9da,	// (0x0004e870) cell_skin_colour_pane_g1

0x27c0,	// (0x00043656) call_video_g1_ParamLimits

0x27c0,	// (0x00043656) call_video_g1

0x27d6,	// (0x0004366c) call_video_g2_ParamLimits

0x27d6,	// (0x0004366c) call_video_g2

0x0001,

0xf24e,	// (0x000500e4) call_video_g_ParamLimits

0xf24e,	// (0x000500e4) call_video_g

0x281e,	// (0x000436b4) call_video_uplink_pane_cp1_ParamLimits

0x281e,	// (0x000436b4) call_video_uplink_pane_cp1

0xd9ec,	// (0x0004e882) call_video_uplink_pane_cp2

0x28b3,	// (0x00043749) video_down_crop_pane_ParamLimits

0x28b3,	// (0x00043749) video_down_crop_pane

0x2976,	// (0x0004380c) video_down_pane_ParamLimits

0x2976,	// (0x0004380c) video_down_pane

0xd9f4,	// (0x0004e88a) video_down_subqcif_pane_ParamLimits

0xd9f4,	// (0x0004e88a) video_down_subqcif_pane

0xda0c,	// (0x0004e8a2) video_down_subqcif_pane_cp_ParamLimits

0xda0c,	// (0x0004e8a2) video_down_subqcif_pane_cp

0xda30,	// (0x0004e8c6) im_reading_pane_ParamLimits

0xda30,	// (0x0004e8c6) im_reading_pane

0x2a33,	// (0x000438c9) im_writing_pane_ParamLimits

0x2a33,	// (0x000438c9) im_writing_pane

0x2a49,	// (0x000438df) im_reading_pane_t1

0xda4a,	// (0x0004e8e0) list_im_pane

0xda5b,	// (0x0004e8f1) scroll_pane_cp07

0x2a7f,	// (0x00043915) im_writing_pane_t1_ParamLimits

0x2a7f,	// (0x00043915) im_writing_pane_t1

0xda74,	// (0x0004e90a) im_writing_pane_t2_ParamLimits

0xda74,	// (0x0004e90a) im_writing_pane_t2

0x0001,

0xf258,	// (0x000500ee) im_writing_pane_t_ParamLimits

0xf258,	// (0x000500ee) im_writing_pane_t

0xd405,	// (0x0004e29b) input_focus_pane_cp04

0xd405,	// (0x0004e29b) input_focus_pane_cp05

0x2a94,	// (0x0004392a) list_im_single_pane_ParamLimits

0x2a94,	// (0x0004392a) list_im_single_pane

0xda91,	// (0x0004e927) list_single_im_pane_t1

0x49be,	// (0x00045854) blid_accuracy_pane

0x49c6,	// (0x0004585c) blid_compass_pane

0x49ce,	// (0x00045864) main_location_t1

0x49dc,	// (0x00045872) main_location_t2

0x49ea,	// (0x00045880) main_location_t3

0x0002,

0xf596,	// (0x0005042c) main_location_t

0xd405,	// (0x0004e29b) aid_levels_location

0xd77e,	// (0x0004e614) blid_accuracy_pane_g1

0xd77e,	// (0x0004e614) blid_accuracy_pane_g2

0x0001,

0xf2ba,	// (0x00050150) blid_accuracy_pane_g

0xdacb,	// (0x0004e961) wml_content_pane

0xdb09,	// (0x0004e99f) wml_button_pane_ParamLimits

0xdb09,	// (0x0004e99f) wml_button_pane

0x2aaa,	// (0x00043940) wml_list_single_large_pane_ParamLimits

0x2aaa,	// (0x00043940) wml_list_single_large_pane

0x2abe,	// (0x00043954) wml_list_single_medium_pane_ParamLimits

0x2abe,	// (0x00043954) wml_list_single_medium_pane

0x2ad3,	// (0x00043969) wml_list_single_small_pane_ParamLimits

0x2ad3,	// (0x00043969) wml_list_single_small_pane

0xdb1d,	// (0x0004e9b3) wml_selection_box_pane_ParamLimits

0xdb1d,	// (0x0004e9b3) wml_selection_box_pane

0xdb30,	// (0x0004e9c6) wml_list_single_pane_t1

0xdb3f,	// (0x0004e9d5) wml_list_single_medium_pane_t1

0xdb4e,	// (0x0004e9e4) wml_list_single_large_pane_t1

0xdb5d,	// (0x0004e9f3) input_focus_pane_cp02_ParamLimits

0xdb5d,	// (0x0004e9f3) input_focus_pane_cp02

0xdb70,	// (0x0004ea06) wml_selection_box_pane_g1

0xdb79,	// (0x0004ea0f) wml_selection_box_pane_t1_ParamLimits

0xdb79,	// (0x0004ea0f) wml_selection_box_pane_t1

0xd660,	// (0x0004e4f6) bg_wml_button_pane_ParamLimits

0xd660,	// (0x0004e4f6) bg_wml_button_pane

0xdb91,	// (0x0004ea27) wml_button_pane_g1

0xdb99,	// (0x0004ea2f) wml_button_pane_t1

0xdb91,	// (0x0004ea27) wml_button_bg_pane_g1

0xdba9,	// (0x0004ea3f) wml_button_bg_pane_g2

0xdbb1,	// (0x0004ea47) wml_button_bg_pane_g3

0xdbb9,	// (0x0004ea4f) wml_button_bg_pane_g4

0xdbc1,	// (0x0004ea57) wml_button_bg_pane_g5

0xdbc9,	// (0x0004ea5f) wml_button_bg_pane_g6

0xdbd1,	// (0x0004ea67) wml_button_bg_pane_g7

0xdbd9,	// (0x0004ea6f) wml_button_bg_pane_g8

0xdbe1,	// (0x0004ea77) wml_button_bg_pane_g9

0x0008,

0xf25d,	// (0x000500f3) wml_button_bg_pane_g

0x2aea,	// (0x00043980) bg_list_pane_cp02

0xdbe9,	// (0x0004ea7f) mce_header_pane_ParamLimits

0xdbe9,	// (0x0004ea7f) mce_header_pane

0xdbfd,	// (0x0004ea93) mce_icon_pane

0xdbfd,	// (0x0004ea93) mce_image_pane

0xdc06,	// (0x0004ea9c) mce_text_pane_ParamLimits

0xdc06,	// (0x0004ea9c) mce_text_pane

0x2af3,	// (0x00043989) scroll_pane_cp03

0x2af3,	// (0x00043989) scroll_pane_cp04

0xdc1a,	// (0x0004eab0) scroll_pane_cp05_ParamLimits

0xdc1a,	// (0x0004eab0) scroll_pane_cp05

0x2afd,	// (0x00043993) mce_header_field_pane_ParamLimits

0x2afd,	// (0x00043993) mce_header_field_pane

0x2b14,	// (0x000439aa) mce_header_field_pane_2_ParamLimits

0x2b14,	// (0x000439aa) mce_header_field_pane_2

0x2b2a,	// (0x000439c0) mce_header_field_pane_3

0x2b32,	// (0x000439c8) list_single_mce_message_pane_ParamLimits

0x2b32,	// (0x000439c8) list_single_mce_message_pane

0x2b47,	// (0x000439dd) list_single_mce_smart_pane_ParamLimits

0x2b47,	// (0x000439dd) list_single_mce_smart_pane

0xdc26,	// (0x0004eabc) input_focus_pane_cp03

0xdc2f,	// (0x0004eac5) list_header_data_pane

0x2b67,	// (0x000439fd) mce_header_field_pane_t1

0x2b75,	// (0x00043a0b) list_single_mce_header_pane_ParamLimits

0x2b75,	// (0x00043a0b) list_single_mce_header_pane

0xdc37,	// (0x0004eacd) list_single_mce_header_pane_t1

0xdc46,	// (0x0004eadc) list_single_mce_message_pane_g1

0xdc4f,	// (0x0004eae5) list_single_mce_message_pane_t1

0x2baf,	// (0x00043a45) bg_cale_heading_pane_cp01_ParamLimits

0x2baf,	// (0x00043a45) bg_cale_heading_pane_cp01

0xdc5e,	// (0x0004eaf4) bg_cale_pane_cp02_ParamLimits

0xdc5e,	// (0x0004eaf4) bg_cale_pane_cp02

0x2bde,	// (0x00043a74) cale_month_corner_pane

0x2bfd,	// (0x00043a93) cale_month_day_heading_pane_ParamLimits

0x2bfd,	// (0x00043a93) cale_month_day_heading_pane

0x2c34,	// (0x00043aca) cale_month_pane_g1_ParamLimits

0x2c34,	// (0x00043aca) cale_month_pane_g1

0x2c58,	// (0x00043aee) cale_month_pane_g2_ParamLimits

0x2c58,	// (0x00043aee) cale_month_pane_g2

0x2c80,	// (0x00043b16) cale_month_pane_g3_ParamLimits

0x2c80,	// (0x00043b16) cale_month_pane_g3

0x2cbc,	// (0x00043b52) cale_month_pane_g4_ParamLimits

0x2cbc,	// (0x00043b52) cale_month_pane_g4

0x2cf8,	// (0x00043b8e) cale_month_pane_g5_ParamLimits

0x2cf8,	// (0x00043b8e) cale_month_pane_g5

0x2d34,	// (0x00043bca) cale_month_pane_g6_ParamLimits

0x2d34,	// (0x00043bca) cale_month_pane_g6

0x2d70,	// (0x00043c06) cale_month_pane_g7_ParamLimits

0x2d70,	// (0x00043c06) cale_month_pane_g7

0x2dac,	// (0x00043c42) cale_month_pane_g8_ParamLimits

0x2dac,	// (0x00043c42) cale_month_pane_g8

0x2df0,	// (0x00043c86) cale_month_pane_g9_ParamLimits

0x2df0,	// (0x00043c86) cale_month_pane_g9

0x2e32,	// (0x00043cc8) cale_month_pane_g10_ParamLimits

0x2e32,	// (0x00043cc8) cale_month_pane_g10

0x2e74,	// (0x00043d0a) cale_month_pane_g11_ParamLimits

0x2e74,	// (0x00043d0a) cale_month_pane_g11

0x2eb6,	// (0x00043d4c) cale_month_pane_g12_ParamLimits

0x2eb6,	// (0x00043d4c) cale_month_pane_g12

0x2ef8,	// (0x00043d8e) cale_month_pane_g13_ParamLimits

0x2ef8,	// (0x00043d8e) cale_month_pane_g13

0x000c,

0xf270,	// (0x00050106) cale_month_pane_g_ParamLimits

0xf270,	// (0x00050106) cale_month_pane_g

0x2f3a,	// (0x00043dd0) cale_month_week_pane

0x2f56,	// (0x00043dec) grid_cale_month_pane_ParamLimits

0x2f56,	// (0x00043dec) grid_cale_month_pane

0x2f84,	// (0x00043e1a) cale_month_day_heading_pane_t1

0x300a,	// (0x00043ea0) cale_month_day_heading_pane_t2

0x309b,	// (0x00043f31) cale_month_day_heading_pane_t3

0x312c,	// (0x00043fc2) cale_month_day_heading_pane_t4

0x31bd,	// (0x00044053) cale_month_day_heading_pane_t5

0x324e,	// (0x000440e4) cale_month_day_heading_pane_t6

0x32df,	// (0x00044175) cale_month_day_heading_pane_t7

0x0006,

0xf28b,	// (0x00050121) cale_month_day_heading_pane_t

0xd8a6,	// (0x0004e73c) bg_cale_side_pane_cp01

0x3374,	// (0x0004420a) cale_month_week_pane_t1

0x338d,	// (0x00044223) cale_month_week_pane_t2

0x33a6,	// (0x0004423c) cale_month_week_pane_t3

0x33bf,	// (0x00044255) cale_month_week_pane_t4

0x33d8,	// (0x0004426e) cale_month_week_pane_t5

0x33f1,	// (0x00044287) cale_month_week_pane_t6

0x0005,

0xf29a,	// (0x00050130) cale_month_week_pane_t

0x340a,	// (0x000442a0) cell_cale_month_pane_ParamLimits

0x340a,	// (0x000442a0) cell_cale_month_pane

0xaa63,	// (0x0004b8f9) cell_cale_month_pane_g1

0x34fc,	// (0x00044392) cell_cale_month_pane_t1_ParamLimits

0x34fc,	// (0x00044392) cell_cale_month_pane_t1

0xd8b4,	// (0x0004e74a) grid_highlight_pane_cp08

0xd77e,	// (0x0004e614) main_smil_g1

0x351c,	// (0x000443b2) smil_status_pane

0xdc9d,	// (0x0004eb33) smil_text_pane

0x4794,	// (0x0004562a) bg_popup_call3_rect_pane_g8

0x479c,	// (0x00045632) bg_popup_call3_rect_pane_g9

0x0008,

0xf517,	// (0x000503ad) bg_popup_call3_rect_pane_g

0x4fc3,	// (0x00045e59) smil_status_volume_pane_g1

0x352d,	// (0x000443c3) smil_status_pane_t1

0xac81,	// (0x0004bb17) volume_smil_pane

0xdca7,	// (0x0004eb3d) list_smil_text_pane

0x3544,	// (0x000443da) scroll_pane_cp011

0x354f,	// (0x000443e5) smil_text_list_pane_t1_ParamLimits

0x354f,	// (0x000443e5) smil_text_list_pane_t1

0xaa6f,	// (0x0004b905) aid_volume_smil_ParamLimits

0xaa6f,	// (0x0004b905) aid_volume_smil

0xd77e,	// (0x0004e614) smil_volume_pane_g1

0xd77e,	// (0x0004e614) smil_volume_pane_g2

0x0001,

0xf2ba,	// (0x00050150) smil_volume_pane_g

0x1e36,	// (0x00042ccc) listscroll_cale_day_pane

0xdcb1,	// (0x0004eb47) bg_cale_pane

0xdcc9,	// (0x0004eb5f) list_cale_pane

0xdcec,	// (0x0004eb82) scroll_pane_cp09

0xdcfd,	// (0x0004eb93) cale_bg_pane_g1

0xdd05,	// (0x0004eb9b) cale_bg_pane_g2

0xdd0d,	// (0x0004eba3) cale_bg_pane_g3

0xdd15,	// (0x0004ebab) cale_bg_pane_g4

0xdd1d,	// (0x0004ebb3) cale_bg_pane_g5

0xdd25,	// (0x0004ebbb) cale_bg_pane_g6

0xdd2d,	// (0x0004ebc3) cale_bg_pane_g7

0xdd35,	// (0x0004ebcb) cale_bg_pane_g8

0xdd3d,	// (0x0004ebd3) cale_bg_pane_g9

0x0008,

0xf2bf,	// (0x00050155) cale_bg_pane_g

0x3593,	// (0x00044429) list_cale_time_pane_ParamLimits

0x3593,	// (0x00044429) list_cale_time_pane

0xdd45,	// (0x0004ebdb) list_cale_time_pane_g1_ParamLimits

0xdd45,	// (0x0004ebdb) list_cale_time_pane_g1

0xdd51,	// (0x0004ebe7) list_cale_time_pane_g2_ParamLimits

0xdd51,	// (0x0004ebe7) list_cale_time_pane_g2

0x35a8,	// (0x0004443e) list_cale_time_pane_g3_ParamLimits

0x35a8,	// (0x0004443e) list_cale_time_pane_g3

0x35b4,	// (0x0004444a) list_cale_time_pane_g4_ParamLimits

0x35b4,	// (0x0004444a) list_cale_time_pane_g4

0x35c0,	// (0x00044456) list_cale_time_pane_g5_ParamLimits

0x35c0,	// (0x00044456) list_cale_time_pane_g5

0x0005,

0xf2d2,	// (0x00050168) list_cale_time_pane_g_ParamLimits

0xf2d2,	// (0x00050168) list_cale_time_pane_g

0xdd6b,	// (0x0004ec01) list_cale_time_pane_t1_ParamLimits

0xdd6b,	// (0x0004ec01) list_cale_time_pane_t1

0xdd93,	// (0x0004ec29) list_cale_time_pane_t2_ParamLimits

0xdd93,	// (0x0004ec29) list_cale_time_pane_t2

0x3862,	// (0x000446f8) aid_blid_cardinal_pane

0x38a0,	// (0x00044736) compass_pane_t4

0xddbb,	// (0x0004ec51) list_cale_time_pane_t4_ParamLimits

0xddbb,	// (0x0004ec51) list_cale_time_pane_t4

0x38ae,	// (0x00044744) compass_pane_t5

0x38bc,	// (0x00044752) compass_pane_t6

0x38ca,	// (0x00044760) compass_pane_t7

0xe228,	// (0x0004f0be) navi_pane_cc_t1

0xe3cd,	// (0x0004f263) aid_phob_thumbnail_center_pane

0x3e0a,	// (0x00044ca0) main_postcard_pane_g4_ParamLimits

0x0002,

0xf2df,	// (0x00050175) list_cale_time_pane_t_ParamLimits

0xf2df,	// (0x00050175) list_cale_time_pane_t

0xcf55,	// (0x0004ddeb) bg_popup_window_pane_cp02_ParamLimits

0xcf55,	// (0x0004ddeb) bg_popup_window_pane_cp02

0xdde3,	// (0x0004ec79) heading_pane_cp01_ParamLimits

0xdde3,	// (0x0004ec79) heading_pane_cp01

0xddef,	// (0x0004ec85) loc_req_pane_ParamLimits

0xddef,	// (0x0004ec85) loc_req_pane

0xddff,	// (0x0004ec95) loc_type_pane_ParamLimits

0xddff,	// (0x0004ec95) loc_type_pane

0xde11,	// (0x0004eca7) loc_type_pane_t1_ParamLimits

0xde11,	// (0x0004eca7) loc_type_pane_t1

0xde23,	// (0x0004ecb9) loc_type_pane_t2_ParamLimits

0xde23,	// (0x0004ecb9) loc_type_pane_t2

0xde35,	// (0x0004eccb) loc_type_pane_t3_ParamLimits

0xde35,	// (0x0004eccb) loc_type_pane_t3

0x0002,

0xf2e6,	// (0x0005017c) loc_type_pane_t_ParamLimits

0xf2e6,	// (0x0005017c) loc_type_pane_t

0xde47,	// (0x0004ecdd) list_loc_req_pane

0xde51,	// (0x0004ece7) scroll_pane_cp012

0x35cc,	// (0x00044462) list_single_loc_request_popup_menu_pane_ParamLimits

0x35cc,	// (0x00044462) list_single_loc_request_popup_menu_pane

0xde5a,	// (0x0004ecf0) list_single_loc_request_popup_menu_pane_g1_ParamLimits

0xde5a,	// (0x0004ecf0) list_single_loc_request_popup_menu_pane_g1

0xde66,	// (0x0004ecfc) list_single_loc_request_popup_menu_pane_g2_ParamLimits

0xde66,	// (0x0004ecfc) list_single_loc_request_popup_menu_pane_g2

0x0001,

0xf2ed,	// (0x00050183) list_single_loc_request_popup_menu_pane_g_ParamLimits

0xf2ed,	// (0x00050183) list_single_loc_request_popup_menu_pane_g

0xde72,	// (0x0004ed08) list_single_loc_request_popup_menu_pane_t1_ParamLimits

0xde72,	// (0x0004ed08) list_single_loc_request_popup_menu_pane_t1

0xd660,	// (0x0004e4f6) bg_popup_window_pane_cp03_ParamLimits

0xd660,	// (0x0004e4f6) bg_popup_window_pane_cp03

0xef84,	// (0x0004fe1a) heading_loc_req_pane_ParamLimits

0xef84,	// (0x0004fe1a) heading_loc_req_pane

0x35d9,	// (0x0004446f) popup_dyc_status_message_window_g1_ParamLimits

0x35d9,	// (0x0004446f) popup_dyc_status_message_window_g1

0x35ed,	// (0x00044483) popup_dyc_status_message_window_t1_ParamLimits

0x35ed,	// (0x00044483) popup_dyc_status_message_window_t1

0x3602,	// (0x00044498) popup_dyc_status_message_window_t2_ParamLimits

0x3602,	// (0x00044498) popup_dyc_status_message_window_t2

0x3617,	// (0x000444ad) popup_dyc_status_message_window_t3_ParamLimits

0x3617,	// (0x000444ad) popup_dyc_status_message_window_t3

0x0002,

0xf2f2,	// (0x00050188) popup_dyc_status_message_window_t_ParamLimits

0xf2f2,	// (0x00050188) popup_dyc_status_message_window_t

0xd405,	// (0x0004e29b) bg_heading_pane_cp01

0xde88,	// (0x0004ed1e) heading_loc_req_pane_g1

0xde90,	// (0x0004ed26) heading_loc_req_pane_g2

0xde98,	// (0x0004ed2e) heading_loc_req_pane_g3

0x0002,

0xf2f9,	// (0x0005018f) heading_loc_req_pane_g

0xdea0,	// (0x0004ed36) heading_loc_req_pane_t1

0xdeaf,	// (0x0004ed45) bg_popup_sub_pane_cp01_ParamLimits

0xdeaf,	// (0x0004ed45) bg_popup_sub_pane_cp01

0xdebd,	// (0x0004ed53) popup_cale_events_window_g1_ParamLimits

0xdebd,	// (0x0004ed53) popup_cale_events_window_g1

0xdedd,	// (0x0004ed73) popup_cale_events_window_g2_ParamLimits

0xdedd,	// (0x0004ed73) popup_cale_events_window_g2

0x0001,

0xf32d,	// (0x000501c3) popup_cale_events_window_g_ParamLimits

0xf32d,	// (0x000501c3) popup_cale_events_window_g

0xdefd,	// (0x0004ed93) popup_cale_events_window_t1_ParamLimits

0xdefd,	// (0x0004ed93) popup_cale_events_window_t1

0xdf0f,	// (0x0004eda5) popup_cale_events_window_t2_ParamLimits

0xdf0f,	// (0x0004eda5) popup_cale_events_window_t2

0xdf4d,	// (0x0004ede3) popup_cale_events_window_t3_ParamLimits

0xdf4d,	// (0x0004ede3) popup_cale_events_window_t3

0xdf87,	// (0x0004ee1d) popup_cale_events_window_t4_ParamLimits

0xdf87,	// (0x0004ee1d) popup_cale_events_window_t4

0x0003,

0xf332,	// (0x000501c8) popup_cale_events_window_t_ParamLimits

0xf332,	// (0x000501c8) popup_cale_events_window_t

0x364d,	// (0x000444e3) call_type_pane

0x365d,	// (0x000444f3) popup_call_status_window_g1

0x3671,	// (0x00044507) popup_call_status_window_g2

0x3685,	// (0x0004451b) popup_call_status_window_g3

0x0002,

0xf33b,	// (0x000501d1) popup_call_status_window_g

0xdfbd,	// (0x0004ee53) call_type_pane_g1

0xdfc6,	// (0x0004ee5c) call_type_pane_g2

0x0001,

0xf342,	// (0x000501d8) call_type_pane_g

0xd405,	// (0x0004e29b) bg_popup_sub_pane_cp02

0xdfcf,	// (0x0004ee65) listscroll_popup_wml_pane

0xdfd7,	// (0x0004ee6d) list_wml_pane

0xdfe1,	// (0x0004ee77) scroll_pane_cp013

0x3695,	// (0x0004452b) list_single_graphic_popup_wml_pane_ParamLimits

0x3695,	// (0x0004452b) list_single_graphic_popup_wml_pane

0xd77e,	// (0x0004e614) list_single_graphic_popup_wml_pane_g1

0xdfea,	// (0x0004ee80) list_single_graphic_popup_wml_pane_g2

0x0001,

0xf347,	// (0x000501dd) list_single_graphic_popup_wml_pane_g

0xdff2,	// (0x0004ee88) list_single_graphic_popup_wml_pane_t1

0xe008,	// (0x0004ee9e) aid_call_pane

0xd658,	// (0x0004e4ee) popup_clock_analogue_window_g1

0xd658,	// (0x0004e4ee) popup_clock_analogue_window_g2

0xab2b,	// (0x0004b9c1) popup_clock_analogue_window_g3

0xab2b,	// (0x0004b9c1) popup_clock_analogue_window_g4

0xd77e,	// (0x0004e614) popup_clock_analogue_window_g5

0x0004,

0xf34c,	// (0x000501e2) popup_clock_analogue_window_g

0xab33,	// (0x0004b9c9) popup_clock_analogue_window_t1

0xab41,	// (0x0004b9d7) clock_digital_number_pane_ParamLimits

0xab41,	// (0x0004b9d7) clock_digital_number_pane

0xab4d,	// (0x0004b9e3) clock_digital_number_pane_cp02_ParamLimits

0xab4d,	// (0x0004b9e3) clock_digital_number_pane_cp02

0xab59,	// (0x0004b9ef) clock_digital_number_pane_cp03_ParamLimits

0xab59,	// (0x0004b9ef) clock_digital_number_pane_cp03

0xab65,	// (0x0004b9fb) clock_digital_number_pane_cp04_ParamLimits

0xab65,	// (0x0004b9fb) clock_digital_number_pane_cp04

0xab71,	// (0x0004ba07) clock_digital_separator_pane_ParamLimits

0xab71,	// (0x0004ba07) clock_digital_separator_pane

0xab7d,	// (0x0004ba13) popup_clock_digital_window_t1

0xd77e,	// (0x0004e614) clock_digital_number_pane_g1

0xd77e,	// (0x0004e614) clock_digital_number_pane_g2

0x0001,

0xf2ba,	// (0x00050150) clock_digital_number_pane_g

0xd77e,	// (0x0004e614) clock_digital_separator_pane_g1

0xd77e,	// (0x0004e614) clock_digital_separator_pane_g2

0x0001,

0xf2ba,	// (0x00050150) clock_digital_separator_pane_g

0xd405,	// (0x0004e29b) bg_popup_window_pane_cp04

0xe010,	// (0x0004eea6) heading_pane_cp03

0xe018,	// (0x0004eeae) listscroll_popup_gms_pane

0xe020,	// (0x0004eeb6) grid_large_graphic_popup_pane

0xe02a,	// (0x0004eec0) listscroll_popup_gms_pane_g1

0xe032,	// (0x0004eec8) listscroll_popup_gms_pane_g2

0x0001,

0xf357,	// (0x000501ed) listscroll_popup_gms_pane_g

0xdb01,	// (0x0004e997) scroll_pane_cp014

0x36a8,	// (0x0004453e) cell_large_graphic_popup_pane_ParamLimits

0x36a8,	// (0x0004453e) cell_large_graphic_popup_pane

0x36be,	// (0x00044554) cell_large_graphic_popup_pane_g1_ParamLimits

0x36be,	// (0x00044554) cell_large_graphic_popup_pane_g1

0xe03a,	// (0x0004eed0) cell_large_graphic_popup_pane_g2_ParamLimits

0xe03a,	// (0x0004eed0) cell_large_graphic_popup_pane_g2

0xe046,	// (0x0004eedc) cell_large_graphic_popup_pane_g3_ParamLimits

0xe046,	// (0x0004eedc) cell_large_graphic_popup_pane_g3

0xe053,	// (0x0004eee9) cell_large_graphic_popup_pane_g4_ParamLimits

0xe053,	// (0x0004eee9) cell_large_graphic_popup_pane_g4

0x0003,

0xf35c,	// (0x000501f2) cell_large_graphic_popup_pane_g_ParamLimits

0xf35c,	// (0x000501f2) cell_large_graphic_popup_pane_g

0xe063,	// (0x0004eef9) grid_highlight_pane_cp010

0xd77e,	// (0x0004e614) bg_popup_call_pane_g1

0xe06d,	// (0x0004ef03) list_single_graphic_popup_conf_pane_ParamLimits

0xe06d,	// (0x0004ef03) list_single_graphic_popup_conf_pane

0xe080,	// (0x0004ef16) list_highlight_pane_cp01

0xe089,	// (0x0004ef1f) list_single_graphic_popup_conf_pane_g1

0xe091,	// (0x0004ef27) list_single_graphic_popup_conf_pane_g2

0x0001,

0xf365,	// (0x000501fb) list_single_graphic_popup_conf_pane_g

0xe099,	// (0x0004ef2f) list_single_graphic_popup_conf_pane_t1

0xe0a7,	// (0x0004ef3d) linegrid_cams_pane_g1

0x36ca,	// (0x00044560) linegrid_cams_pane_g2

0xd837,	// (0x0004e6cd) linegrid_cams_pane_g3

0xe0b0,	// (0x0004ef46) linegrid_cams_pane_g4

0x36d3,	// (0x00044569) linegrid_cams_pane_g5

0x36dc,	// (0x00044572) linegrid_cams_pane_g6

0xd8e7,	// (0x0004e77d) linegrid_cams_pane_g7

0x0006,

0xf36a,	// (0x00050200) linegrid_cams_pane_g

0xe0b9,	// (0x0004ef4f) popup_clock_analogue_window

0xe0b9,	// (0x0004ef4f) popup_clock_digital_window

0xd405,	// (0x0004e29b) popup_phob_thumbnail_window

0xd77e,	// (0x0004e614) call_video_uplink_pane_g1

0xe0c2,	// (0x0004ef58) call_video_uplink_pane_g2

0x0001,

0xf379,	// (0x0005020f) call_video_uplink_pane_g

0xd8b4,	// (0x0004e74a) video_uplink_pane

0xe0ca,	// (0x0004ef60) mce_image_pane_g1

0x36e5,	// (0x0004457b) mce_image_pane_g2

0x36ed,	// (0x00044583) mce_image_pane_g3

0x36f5,	// (0x0004458b) mce_image_pane_g4

0x36fd,	// (0x00044593) mce_image_pane_g5

0x0004,

0xf37e,	// (0x00050214) mce_image_pane_g

0xe0d4,	// (0x0004ef6a) control_top_pane_stacon_cp01_ParamLimits

0xe0d4,	// (0x0004ef6a) control_top_pane_stacon_cp01

0xe0f2,	// (0x0004ef88) uni_indicator_pane_stacon_cp01_ParamLimits

0xe0f2,	// (0x0004ef88) uni_indicator_pane_stacon_cp01

0xe103,	// (0x0004ef99) bg_popup_sub_pane_cp03

0xe10d,	// (0x0004efa3) chi_dic_find_pane

0x3705,	// (0x0004459b) listscroll_chi_dic_pane

0xe115,	// (0x0004efab) main_pane_chidic_g1

0xe11d,	// (0x0004efb3) chi_dic_find_pane_t1

0xe12b,	// (0x0004efc1) find_chidic_pane

0xe134,	// (0x0004efca) chi_dic_list_pane_ParamLimits

0xe134,	// (0x0004efca) chi_dic_list_pane

0xe145,	// (0x0004efdb) scroll_pane_cp020

0xe14d,	// (0x0004efe3) find_chidic_pane_t1

0xd405,	// (0x0004e29b) input_focus_pane_cp06

0x3719,	// (0x000445af) list_chi_dic_pane_ParamLimits

0x3719,	// (0x000445af) list_chi_dic_pane

0x372b,	// (0x000445c1) list_chi_dic_pane_t1_ParamLimits

0x372b,	// (0x000445c1) list_chi_dic_pane_t1

0xd405,	// (0x0004e29b) list_highlight_pane_cp020

0xe15c,	// (0x0004eff2) bg_cale_heading_pane_g1

0x373e,	// (0x000445d4) bg_cale_heading_pane_g2

0x3746,	// (0x000445dc) bg_cale_heading_pane_g3

0x374e,	// (0x000445e4) bg_cale_heading_pane_g4

0x3756,	// (0x000445ec) bg_cale_heading_pane_g5

0x375e,	// (0x000445f4) bg_cale_heading_pane_g6

0x3766,	// (0x000445fc) bg_cale_heading_pane_g7

0x376e,	// (0x00044604) bg_cale_heading_pane_g8

0x3776,	// (0x0004460c) bg_cale_heading_pane_g9

0x0008,

0xf389,	// (0x0005021f) bg_cale_heading_pane_g

0xe15c,	// (0x0004eff2) bg_cale_side_pane_g1

0x377e,	// (0x00044614) bg_cale_side_pane_g2

0x3786,	// (0x0004461c) bg_cale_side_pane_g3

0x378e,	// (0x00044624) bg_cale_side_pane_g4

0x3796,	// (0x0004462c) bg_cale_side_pane_g5

0x379e,	// (0x00044634) bg_cale_side_pane_g6

0x37a6,	// (0x0004463c) bg_cale_side_pane_g7

0x37ae,	// (0x00044644) bg_cale_side_pane_g8

0x37b6,	// (0x0004464c) bg_cale_side_pane_g9

0x0008,

0xf39c,	// (0x00050232) bg_cale_side_pane_g

0x37be,	// (0x00044654) popup_call_status_window_ParamLimits

0x37be,	// (0x00044654) popup_call_status_window

0xe164,	// (0x0004effa) stacon_top_pane

0xe16c,	// (0x0004f002) status_pane_ParamLimits

0xe16c,	// (0x0004f002) status_pane

0xe186,	// (0x0004f01c) status_small_pane

0xe18e,	// (0x0004f024) control_pane

0xd405,	// (0x0004e29b) stacon_bottom_pane

0xe196,	// (0x0004f02c) list_single_mce_smart_pane_t1_ParamLimits

0xe196,	// (0x0004f02c) list_single_mce_smart_pane_t1

0xe1a9,	// (0x0004f03f) list_single_mce_smart_pane_t2_ParamLimits

0xe1a9,	// (0x0004f03f) list_single_mce_smart_pane_t2

0x0001,

0xf3af,	// (0x00050245) list_single_mce_smart_pane_t_ParamLimits

0xf3af,	// (0x00050245) list_single_mce_smart_pane_t

0x3805,	// (0x0004469b) compass_pane

0x380e,	// (0x000446a4) main_location2_pane_t1

0x3824,	// (0x000446ba) main_location2_pane_t2

0x383a,	// (0x000446d0) main_location2_pane_t3

0x0003,

0xf3b4,	// (0x0005024a) main_location2_pane_t

0xe1d1,	// (0x0004f067) compass_pane_g1_ParamLimits

0xe1d1,	// (0x0004f067) compass_pane_g1

0x3882,	// (0x00044718) compass_pane_t1

0x3891,	// (0x00044727) compass_pane_t2

0x0005,

0xf3bd,	// (0x00050253) compass_pane_t

0x38d8,	// (0x0004476e) text_secondary_cp61

0xe21f,	// (0x0004f0b5) navi_pane_cams_g5

0xe26b,	// (0x0004f101) navi_pane_im_t1

0xe279,	// (0x0004f10f) navi_pane_mp_g1_ParamLimits

0xe279,	// (0x0004f10f) navi_pane_mp_g1

0xe28d,	// (0x0004f123) navi_pane_mp_g2_ParamLimits

0xe28d,	// (0x0004f123) navi_pane_mp_g2

0xe299,	// (0x0004f12f) navi_pane_mp_g3_ParamLimits

0xe299,	// (0x0004f12f) navi_pane_mp_g3

0x0002,

0xf3d1,	// (0x00050267) navi_pane_mp_g_ParamLimits

0xf3d1,	// (0x00050267) navi_pane_mp_g

0xe2a5,	// (0x0004f13b) navi_pane_mp_t1

0xe2b3,	// (0x0004f149) navi_pane_mp_t2

0x0002,

0xf3d8,	// (0x0005026e) navi_pane_mp_t

0xe31e,	// (0x0004f1b4) navi_pane_vt_g1

0xe2a5,	// (0x0004f13b) navi_pane_vt_t1

0xe326,	// (0x0004f1bc) navi_slider_pane

0xd8f8,	// (0x0004e78e) zooming_pane

0xe32e,	// (0x0004f1c4) navi_slider_pane_g1

0xab9a,	// (0x0004ba30) navi_slider_pane_g2

0x0006,

0xf3df,	// (0x00050275) navi_slider_pane_g

0xe352,	// (0x0004f1e8) aid_levels_zoom

0xe35a,	// (0x0004f1f0) zooming_pane_g1

0xe362,	// (0x0004f1f8) zooming_pane_g2

0xe362,	// (0x0004f1f8) zooming_pane_g3

0x0002,

0xf3ee,	// (0x00050284) zooming_pane_g

0xe36a,	// (0x0004f200) level_10_zoom

0xe373,	// (0x0004f209) level_11_zoom

0xe37c,	// (0x0004f212) level_1_zoom

0xe385,	// (0x0004f21b) level_2_zoom

0xe38e,	// (0x0004f224) level_3_zoom

0xe397,	// (0x0004f22d) level_4_zoom

0xe3a0,	// (0x0004f236) level_5_zoom

0xe3a9,	// (0x0004f23f) level_6_zoom

0xe3b2,	// (0x0004f248) level_7_zoom

0xe3bb,	// (0x0004f251) level_8_zoom

0xe3c4,	// (0x0004f25a) level_9_zoom

0xe3d5,	// (0x0004f26b) popup_phob_thumbnail_window_g1

0xe3dd,	// (0x0004f273) popup_phob_thumbnail_window_g2

0x0001,

0xf3f5,	// (0x0005028b) popup_phob_thumbnail_window_g

0x4a53,	// (0x000458e9) level_1_location

0x4a5b,	// (0x000458f1) level_2_location

0x4a63,	// (0x000458f9) level_3_location

0x4a6b,	// (0x00045901) level_4_location

0xd8f8,	// (0x0004e78e) level_5_location

0x396e,	// (0x00044804) mce_icon_pane_g1

0x3976,	// (0x0004480c) mce_icon_pane_g2

0x0001,

0xf3fa,	// (0x00050290) mce_icon_pane_g

0x397e,	// (0x00044814) main_mup_pane_g1_ParamLimits

0x397e,	// (0x00044814) main_mup_pane_g1

0x3994,	// (0x0004482a) main_mup_pane_g2_ParamLimits

0x3994,	// (0x0004482a) main_mup_pane_g2

0x39ac,	// (0x00044842) main_mup_pane_g3_ParamLimits

0x39ac,	// (0x00044842) main_mup_pane_g3

0x39c4,	// (0x0004485a) main_mup_pane_g4_ParamLimits

0x39c4,	// (0x0004485a) main_mup_pane_g4

0x39dc,	// (0x00044872) main_mup_pane_g5_ParamLimits

0x39dc,	// (0x00044872) main_mup_pane_g5

0x39f6,	// (0x0004488c) main_mup_pane_g6_ParamLimits

0x39f6,	// (0x0004488c) main_mup_pane_g6

0x3a0e,	// (0x000448a4) main_mup_pane_g7_ParamLimits

0x3a0e,	// (0x000448a4) main_mup_pane_g7

0x3a26,	// (0x000448bc) main_mup_pane_g8_ParamLimits

0x3a26,	// (0x000448bc) main_mup_pane_g8

0x3a3e,	// (0x000448d4) main_mup_pane_g9_ParamLimits

0x3a3e,	// (0x000448d4) main_mup_pane_g9

0x3a52,	// (0x000448e8) main_mup_pane_g10_ParamLimits

0x3a52,	// (0x000448e8) main_mup_pane_g10

0x3a66,	// (0x000448fc) main_mup_pane_g11_ParamLimits

0x3a66,	// (0x000448fc) main_mup_pane_g11

0x3a78,	// (0x0004490e) main_mup_pane_g12_ParamLimits

0x3a78,	// (0x0004490e) main_mup_pane_g12

0x3a8c,	// (0x00044922) main_mup_pane_g13_ParamLimits

0x3a8c,	// (0x00044922) main_mup_pane_g13

0x000c,

0xf3ff,	// (0x00050295) main_mup_pane_g_ParamLimits

0xf3ff,	// (0x00050295) main_mup_pane_g

0x3a9e,	// (0x00044934) main_mup_pane_t1_ParamLimits

0x3a9e,	// (0x00044934) main_mup_pane_t1

0x3ab8,	// (0x0004494e) main_mup_pane_t2_ParamLimits

0x3ab8,	// (0x0004494e) main_mup_pane_t2

0x3ad0,	// (0x00044966) main_mup_pane_t3_ParamLimits

0x3ad0,	// (0x00044966) main_mup_pane_t3

0x3ae8,	// (0x0004497e) main_mup_pane_t4_ParamLimits

0x3ae8,	// (0x0004497e) main_mup_pane_t4

0x3b06,	// (0x0004499c) main_mup_pane_t5_ParamLimits

0x3b06,	// (0x0004499c) main_mup_pane_t5

0x3b1b,	// (0x000449b1) main_mup_pane_t6_ParamLimits

0x3b1b,	// (0x000449b1) main_mup_pane_t6

0x0005,

0xf41a,	// (0x000502b0) main_mup_pane_t_ParamLimits

0xf41a,	// (0x000502b0) main_mup_pane_t

0x3b2d,	// (0x000449c3) mup_progress_pane_ParamLimits

0x3b2d,	// (0x000449c3) mup_progress_pane

0x3b39,	// (0x000449cf) mup_visualizer_pane_ParamLimits

0x3b39,	// (0x000449cf) mup_visualizer_pane

0x3b61,	// (0x000449f7) mup_volume_pane_ParamLimits

0x3b61,	// (0x000449f7) mup_volume_pane

0xe0e4,	// (0x0004ef7a) mup_visualizer_pane_g1_ParamLimits

0xe0e4,	// (0x0004ef7a) mup_visualizer_pane_g1

0xe0e4,	// (0x0004ef7a) mup_visualizer_pane_g2_ParamLimits

0xe0e4,	// (0x0004ef7a) mup_visualizer_pane_g2

0xe1d1,	// (0x0004f067) mup_visualizer_pane_g3_ParamLimits

0xe1d1,	// (0x0004f067) mup_visualizer_pane_g3

0x0002,

0xf427,	// (0x000502bd) mup_visualizer_pane_g_ParamLimits

0xf427,	// (0x000502bd) mup_visualizer_pane_g

0xd77e,	// (0x0004e614) mup_volume_pane_g1

0xe3ed,	// (0x0004f283) mup_volume_pane_g2

0x0001,

0xf42e,	// (0x000502c4) mup_volume_pane_g

0xd77e,	// (0x0004e614) mup_progress_pane_g1

0xe3f6,	// (0x0004f28c) mup_progress_pane_g2

0xe3ff,	// (0x0004f295) mup_progress_pane_g3

0x0002,

0xf433,	// (0x000502c9) mup_progress_pane_g

0xd405,	// (0x0004e29b) bg_popup_window_pane_cp05

0xe408,	// (0x0004f29e) heading_pane_cp02_ParamLimits

0xe408,	// (0x0004f29e) heading_pane_cp02

0xe422,	// (0x0004f2b8) list_popup_blid_pane

0xe42a,	// (0x0004f2c0) list_blid_sat_info_pane_ParamLimits

0xe42a,	// (0x0004f2c0) list_blid_sat_info_pane

0xe43d,	// (0x0004f2d3) list_blid_sat_info_pane_g1

0xe445,	// (0x0004f2db) list_blid_sat_info_pane_t1

0x3c51,	// (0x00044ae7) mup_equalizer_pane_ParamLimits

0x3c51,	// (0x00044ae7) mup_equalizer_pane

0x3c6a,	// (0x00044b00) mup_equalizer_pane_cp1_ParamLimits

0x3c6a,	// (0x00044b00) mup_equalizer_pane_cp1

0x3c83,	// (0x00044b19) mup_equalizer_pane_cp2_ParamLimits

0x3c83,	// (0x00044b19) mup_equalizer_pane_cp2

0x3c9c,	// (0x00044b32) mup_equalizer_pane_cp3_ParamLimits

0x3c9c,	// (0x00044b32) mup_equalizer_pane_cp3

0x3cb5,	// (0x00044b4b) mup_equalizer_pane_cp4_ParamLimits

0x3cb5,	// (0x00044b4b) mup_equalizer_pane_cp4

0x3cce,	// (0x00044b64) mup_equalizer_pane_cp5

0x3ce0,	// (0x00044b76) mup_equalizer_pane_cp6

0x3cf2,	// (0x00044b88) mup_equalizer_pane_cp7

0x481c,	// (0x000456b2) bg_popup_call_poc_act_pane_g9

0x4824,	// (0x000456ba) bg_popup_call_poc_act_pane_g10

0x482c,	// (0x000456c2) bg_popup_call_poc_act_pane_g11

0x000a,

0xd660,	// (0x0004e4f6) mup_scale_pane

0xd77e,	// (0x0004e614) mup_scale_pane_g1

0xe453,	// (0x0004f2e9) mup_scale_pane_g2

0x0006,

0xf44f,	// (0x000502e5) mup_scale_pane_g

0xe477,	// (0x0004f30d) msg_data_pane

0xe47f,	// (0x0004f315) scroll_pane_cp017

0x0bff,	// (0x00041a95) bg_list_pane_cp04_ParamLimits

0x0bff,	// (0x00041a95) bg_list_pane_cp04

0xe487,	// (0x0004f31d) msg_data_pane_g1

0x36e5,	// (0x0004457b) msg_data_pane_g2

0x36ed,	// (0x00044583) msg_data_pane_g3

0x3d18,	// (0x00044bae) msg_data_pane_g4

0x36fd,	// (0x00044593) msg_data_pane_g5

0x396e,	// (0x00044804) msg_data_pane_g6

0x3d20,	// (0x00044bb6) msg_data_pane_g7

0x0006,

0xf45e,	// (0x000502f4) msg_data_pane_g

0x0c1f,	// (0x00041ab5) msg_text_pane_ParamLimits

0x0c1f,	// (0x00041ab5) msg_text_pane

0x3d28,	// (0x00044bbe) qrid_highlight_pane_cp011_ParamLimits

0x3d28,	// (0x00044bbe) qrid_highlight_pane_cp011

0xd405,	// (0x0004e29b) msg_body_pane

0xd405,	// (0x0004e29b) msg_header_pane

0xe498,	// (0x0004f32e) input_focus_pane_cp07

0x0c53,	// (0x00041ae9) msg_header_pane_t1_ParamLimits

0x0c53,	// (0x00041ae9) msg_header_pane_t1

0xabac,	// (0x0004ba42) msg_header_pane_t2_ParamLimits

0xabac,	// (0x0004ba42) msg_header_pane_t2

0x0001,

0xf472,	// (0x00050308) msg_header_pane_t_ParamLimits

0xf472,	// (0x00050308) msg_header_pane_t

0xe4ad,	// (0x0004f343) msg_body_pane_g1

0x0c65,	// (0x00041afb) msg_body_pane_t1_ParamLimits

0x0c65,	// (0x00041afb) msg_body_pane_t1

0xabbe,	// (0x0004ba54) msg_body_pane_t2_ParamLimits

0xabbe,	// (0x0004ba54) msg_body_pane_t2

0xabd0,	// (0x0004ba66) msg_body_pane_t3_ParamLimits

0xabd0,	// (0x0004ba66) msg_body_pane_t3

0x0002,

0xf477,	// (0x0005030d) msg_body_pane_t_ParamLimits

0xf477,	// (0x0005030d) msg_body_pane_t

0x3d74,	// (0x00044c0a) main_viewer_pane_g1_ParamLimits

0x3d74,	// (0x00044c0a) main_viewer_pane_g1

0x3d80,	// (0x00044c16) main_viewer_pane_g2_ParamLimits

0x3d80,	// (0x00044c16) main_viewer_pane_g2

0x3d8c,	// (0x00044c22) main_viewer_pane_g3_ParamLimits

0x3d8c,	// (0x00044c22) main_viewer_pane_g3

0x3d9b,	// (0x00044c31) main_viewer_pane_g4_ParamLimits

0x3d9b,	// (0x00044c31) main_viewer_pane_g4

0xabfa,	// (0x0004ba90) main_viewer_pane_g5_ParamLimits

0xabfa,	// (0x0004ba90) main_viewer_pane_g5

0xabfa,	// (0x0004ba90) main_viewer_pane_g7_ParamLimits

0xabfa,	// (0x0004ba90) main_viewer_pane_g7

0xac0c,	// (0x0004baa2) main_viewer_pane_g8_ParamLimits

0xac0c,	// (0x0004baa2) main_viewer_pane_g8

0x0007,

0xf487,	// (0x0005031d) main_viewer_pane_g_ParamLimits

0xf487,	// (0x0005031d) main_viewer_pane_g

0xe4b5,	// (0x0004f34b) viewer_content_pane_ParamLimits

0xe4b5,	// (0x0004f34b) viewer_content_pane

0x3dcf,	// (0x00044c65) main_postcard_pane_g1_ParamLimits

0x3dcf,	// (0x00044c65) main_postcard_pane_g1

0x3de3,	// (0x00044c79) main_postcard_pane_g2_ParamLimits

0x3de3,	// (0x00044c79) main_postcard_pane_g2

0x3df7,	// (0x00044c8d) main_postcard_pane_g3_ParamLimits

0x3df7,	// (0x00044c8d) main_postcard_pane_g3

0x0005,

0xf498,	// (0x0005032e) main_postcard_pane_g_ParamLimits

0xf498,	// (0x0005032e) main_postcard_pane_g

0x3e0a,	// (0x00044ca0) main_postcard_pane_g4

0x4fd6,	// (0x00045e6c) smil_status_volume_pane_g2

0x3e45,	// (0x00044cdb) postcard_pane_ParamLimits

0x3e45,	// (0x00044cdb) postcard_pane

0xe4c3,	// (0x0004f359) postcard_pane_g1_ParamLimits

0xe4c3,	// (0x0004f359) postcard_pane_g1

0x3e85,	// (0x00044d1b) postcard_pane_g2_ParamLimits

0x3e85,	// (0x00044d1b) postcard_pane_g2

0x3e91,	// (0x00044d27) postcard_pane_g3_ParamLimits

0x3e91,	// (0x00044d27) postcard_pane_g3

0xe4d1,	// (0x0004f367) postcard_pane_g4_ParamLimits

0xe4d1,	// (0x0004f367) postcard_pane_g4

0x3e9d,	// (0x00044d33) postcard_pane_g5_ParamLimits

0x3e9d,	// (0x00044d33) postcard_pane_g5

0x3eb2,	// (0x00044d48) postcard_pane_g6_ParamLimits

0x3eb2,	// (0x00044d48) postcard_pane_g6

0xe4c3,	// (0x0004f359) postcard_pane_g7_ParamLimits

0xe4c3,	// (0x0004f359) postcard_pane_g7

0x0006,

0xf4a5,	// (0x0005033b) postcard_pane_g_ParamLimits

0xf4a5,	// (0x0005033b) postcard_pane_g

0x3ec6,	// (0x00044d5c) main_mp2_pane_g1_ParamLimits

0x3ec6,	// (0x00044d5c) main_mp2_pane_g1

0x3ed2,	// (0x00044d68) main_mp2_pane_g2_ParamLimits

0x3ed2,	// (0x00044d68) main_mp2_pane_g2

0x3ede,	// (0x00044d74) main_mp2_pane_g3_ParamLimits

0x3ede,	// (0x00044d74) main_mp2_pane_g3

0x0002,

0xf4b4,	// (0x0005034a) main_mp2_pane_g_ParamLimits

0xf4b4,	// (0x0005034a) main_mp2_pane_g

0x3eea,	// (0x00044d80) main_mp2_pane_t1_ParamLimits

0x3eea,	// (0x00044d80) main_mp2_pane_t1

0x3eff,	// (0x00044d95) main_mp2_pane_t2_ParamLimits

0x3eff,	// (0x00044d95) main_mp2_pane_t2

0x3f11,	// (0x00044da7) main_mp2_pane_t3_ParamLimits

0x3f11,	// (0x00044da7) main_mp2_pane_t3

0x0002,

0xf4bb,	// (0x00050351) main_mp2_pane_t_ParamLimits

0xf4bb,	// (0x00050351) main_mp2_pane_t

0xe4df,	// (0x0004f375) pec_content_pane_ParamLimits

0xe4df,	// (0x0004f375) pec_content_pane

0xdb01,	// (0x0004e997) scroll_pane_cp015

0xe4f1,	// (0x0004f387) pec_attribute_pane_ParamLimits

0xe4f1,	// (0x0004f387) pec_attribute_pane

0x3f23,	// (0x00044db9) pec_content_pane_g1_ParamLimits

0x3f23,	// (0x00044db9) pec_content_pane_g1

0xe501,	// (0x0004f397) pec_content_pane_t1_ParamLimits

0xe501,	// (0x0004f397) pec_content_pane_t1

0xe513,	// (0x0004f3a9) pec_content_pane_t2_ParamLimits

0xe513,	// (0x0004f3a9) pec_content_pane_t2

0x0001,

0x0089,	// (0x00040f1f) pec_content_pane_t_ParamLimits

0x0089,	// (0x00040f1f) pec_content_pane_t

0x3f2f,	// (0x00044dc5) list_single_graphic_pane_cp01_ParamLimits

0x3f2f,	// (0x00044dc5) list_single_graphic_pane_cp01

0xd660,	// (0x0004e4f6) bg_popup_sub_pane_cp04

0xe525,	// (0x0004f3bb) popup_mup_playback_window_g1

0xe531,	// (0x0004f3c7) popup_mup_playback_window_t1

0xe546,	// (0x0004f3dc) popup_mup_playback_window_t2

0x0001,

0x008e,	// (0x00040f24) popup_mup_playback_window_t

0xe57d,	// (0x0004f413) main_image_pane_g1_ParamLimits

0xe57d,	// (0x0004f413) main_image_pane_g1

0xe5c0,	// (0x0004f456) scroll_pane_cp018_ParamLimits

0xe5c0,	// (0x0004f456) scroll_pane_cp018

0xe5d8,	// (0x0004f46e) scroll_pane_cp016_ParamLimits

0xe5d8,	// (0x0004f46e) scroll_pane_cp016

0x3ffa,	// (0x00044e90) smil2_image_pane_ParamLimits

0x3ffa,	// (0x00044e90) smil2_image_pane

0x4022,	// (0x00044eb8) smil2_root_pane_ParamLimits

0x4022,	// (0x00044eb8) smil2_root_pane

0x405a,	// (0x00044ef0) smil2_text_pane_ParamLimits

0x405a,	// (0x00044ef0) smil2_text_pane

0xd405,	// (0x0004e29b) bg_list_pane_cp06

0xe60c,	// (0x0004f4a2) grid_radio_pane

0xd405,	// (0x0004e29b) bg_popup_window_pane_cp06

0xe614,	// (0x0004f4aa) main_fmradio_pane_t1

0xe010,	// (0x0004eea6) heading_pane_cp04

0xe622,	// (0x0004f4b8) main_fmradio_pane_t2

0x48f4,	// (0x0004578a) popup_cale_lunar_info_window_g1

0xe630,	// (0x0004f4c6) main_fmradio_pane_t3

0x48fc,	// (0x00045792) popup_cale_lunar_info_window_g2

0xe63e,	// (0x0004f4d4) main_fmradio_pane_t4

0x0001,

0xe64c,	// (0x0004f4e2) main_fmradio_pane_t5

0x0004,

0xf579,	// (0x0005040f) popup_cale_lunar_info_window_g

0x00a3,	// (0x00040f39) main_fmradio_pane_t

0xe65a,	// (0x0004f4f0) wait_bar_pane_cp03

0xd9b9,	// (0x0004e84f) cell_fmradio_pane_ParamLimits

0xd9b9,	// (0x0004e84f) cell_fmradio_pane

0xe4c3,	// (0x0004f359) cell_fmradio_pane_g1_ParamLimits

0xe4c3,	// (0x0004f359) cell_fmradio_pane_g1

0xd405,	// (0x0004e29b) grid_highlight_pane_cp011

0xe662,	// (0x0004f4f8) poc_content_pane_ParamLimits

0xe662,	// (0x0004f4f8) poc_content_pane

0xe675,	// (0x0004f50b) scroll_pane_cp019

0x40c6,	// (0x00044f5c) popup_call_poc_act_window_ParamLimits

0x40c6,	// (0x00044f5c) popup_call_poc_act_window

0x40e6,	// (0x00044f7c) popup_call_poc_inact_window_ParamLimits

0x40e6,	// (0x00044f7c) popup_call_poc_inact_window

0xf53d,	// (0x000503d3) bg_popup_call_poc_act_pane_g

0x4834,	// (0x000456ca) bg_popup_call_poc_inact_pane_g1

0x483c,	// (0x000456d2) bg_popup_call_poc_inact_pane_g2

0xe67d,	// (0x0004f513) popup_call_poc_act_window_g2

0x4844,	// (0x000456da) bg_popup_call_poc_inact_pane_g3

0x47bc,	// (0x00045652) bg_popup_call_poc_inact_pane_g4

0x484c,	// (0x000456e2) bg_popup_call_poc_inact_pane_g5

0xe685,	// (0x0004f51b) popup_call_poc_act_window_t1_ParamLimits

0xe685,	// (0x0004f51b) popup_call_poc_act_window_t1

0xe6ad,	// (0x0004f543) popup_call_poc_act_window_t2_ParamLimits

0xe6ad,	// (0x0004f543) popup_call_poc_act_window_t2

0xe6d5,	// (0x0004f56b) popup_call_poc_act_window_t3_ParamLimits

0xe6d5,	// (0x0004f56b) popup_call_poc_act_window_t3

0xe6fd,	// (0x0004f593) popup_call_poc_act_window_t4_ParamLimits

0xe6fd,	// (0x0004f593) popup_call_poc_act_window_t4

0x0003,

0x00ae,	// (0x00040f44) popup_call_poc_act_window_t_ParamLimits

0x00ae,	// (0x00040f44) popup_call_poc_act_window_t

0x4854,	// (0x000456ea) bg_popup_call_poc_inact_pane_g6

0x485c,	// (0x000456f2) bg_popup_call_poc_inact_pane_g7

0x4864,	// (0x000456fa) bg_popup_call_poc_inact_pane_g8

0xe70f,	// (0x0004f5a5) popup_call_poc_inact_window_g2

0x486c,	// (0x00045702) bg_popup_call_poc_inact_pane_g9

0x0008,

0xf554,	// (0x000503ea) bg_popup_call_poc_inact_pane_g

0xe717,	// (0x0004f5ad) popup_call_poc_inact_window_t1_ParamLimits

0xe717,	// (0x0004f5ad) popup_call_poc_inact_window_t1

0xe72c,	// (0x0004f5c2) popup_call_poc_inact_window_t2_ParamLimits

0xe72c,	// (0x0004f5c2) popup_call_poc_inact_window_t2

0xe741,	// (0x0004f5d7) popup_call_poc_inact_window_t3_ParamLimits

0xe741,	// (0x0004f5d7) popup_call_poc_inact_window_t3

0x0002,

0x00b7,	// (0x00040f4d) popup_call_poc_inact_window_t_ParamLimits

0x00b7,	// (0x00040f4d) popup_call_poc_inact_window_t

0x4e86,	// (0x00045d1c) context_pane_ParamLimits

0x4ee2,	// (0x00045d78) signal_pane_ParamLimits

0xd8f8,	// (0x0004e78e) main_call2_pane

0xac4d,	// (0x0004bae3) popup_phob_thumbnail2_window_ParamLimits

0xac4d,	// (0x0004bae3) popup_phob_thumbnail2_window

0xabe2,	// (0x0004ba78) aid_hotspot_pointer_arrow_pane

0xabea,	// (0x0004ba80) aid_hotspot_pointer_hand_pane

0x4a21,	// (0x000458b7) phob_pre_status_pane_g5

0x2493,	// (0x00043329) cams_zoom_pane_ParamLimits

0x24a2,	// (0x00043338) image_vga_pane_ParamLimits

0x24ba,	// (0x00043350) main_camera_pane_g1_ParamLimits

0x24ca,	// (0x00043360) main_camera_pane_g2_ParamLimits

0x24da,	// (0x00043370) main_camera_pane_g3_ParamLimits

0x24ea,	// (0x00043380) main_camera_pane_g4_ParamLimits

0x24fa,	// (0x00043390) main_camera_pane_g5_ParamLimits

0x250a,	// (0x000433a0) main_camera_pane_g6_ParamLimits

0x251a,	// (0x000433b0) main_camera_pane_g7_ParamLimits

0xf1ef,	// (0x00050085) main_camera_pane_g_ParamLimits

0x252a,	// (0x000433c0) main_camera_pane_t1_ParamLimits

0x2540,	// (0x000433d6) main_camera_pane_t2_ParamLimits

0xf200,	// (0x00050096) main_camera_pane_t_ParamLimits

0xd660,	// (0x0004e4f6) bg_popup_preview_window_pane_cp01_ParamLimits

0xd660,	// (0x0004e4f6) bg_popup_preview_window_pane_cp01

0xe756,	// (0x0004f5ec) popup_phob_thumbnail2_window_g1_ParamLimits

0xe756,	// (0x0004f5ec) popup_phob_thumbnail2_window_g1

0xd405,	// (0x0004e29b) call2_cli_visual_pane

0x4112,	// (0x00044fa8) popup_call2_audio_conf_window_ParamLimits

0x4112,	// (0x00044fa8) popup_call2_audio_conf_window

0x4130,	// (0x00044fc6) popup_call2_audio_first_window_ParamLimits

0x4130,	// (0x00044fc6) popup_call2_audio_first_window

0x41a6,	// (0x0004503c) popup_call2_audio_in_window_ParamLimits

0x41a6,	// (0x0004503c) popup_call2_audio_in_window

0x41da,	// (0x00045070) popup_call2_audio_out_window_ParamLimits

0x41da,	// (0x00045070) popup_call2_audio_out_window

0x422c,	// (0x000450c2) popup_call2_audio_second_window_ParamLimits

0x422c,	// (0x000450c2) popup_call2_audio_second_window

0x427e,	// (0x00045114) popup_call2_audio_wait_window_ParamLimits

0x427e,	// (0x00045114) popup_call2_audio_wait_window

0xd405,	// (0x0004e29b) bg_popup_call2_act_pane_cp03

0xd642,	// (0x0004e4d8) list_conf_pane_cp

0xe762,	// (0x0004f5f8) popup_call2_audio_conf_window_t1

0xe06d,	// (0x0004ef03) list_single_graphic_popup_conf2_pane_ParamLimits

0xe06d,	// (0x0004ef03) list_single_graphic_popup_conf2_pane

0xe080,	// (0x0004ef16) list_highlight_pane_cp04

0xe770,	// (0x0004f606) list_single_graphic_popup_conf2_pane_g1

0xe091,	// (0x0004ef27) list_single_graphic_popup_conf2_pane_g2

0x0001,

0xf4d2,	// (0x00050368) list_single_graphic_popup_conf2_pane_g

0xe778,	// (0x0004f60e) list_single_graphic_popup_conf2_pane_t1

0xe786,	// (0x0004f61c) bg_popup_call2_act_pane_cp01_ParamLimits

0xe786,	// (0x0004f61c) bg_popup_call2_act_pane_cp01

0xe810,	// (0x0004f6a6) call_type_pane_cp05_ParamLimits

0xe810,	// (0x0004f6a6) call_type_pane_cp05

0xe864,	// (0x0004f6fa) popup_call2_audio_second_window_g1_ParamLimits

0xe864,	// (0x0004f6fa) popup_call2_audio_second_window_g1

0xe8b8,	// (0x0004f74e) popup_call2_audio_second_window_g2_ParamLimits

0xe8b8,	// (0x0004f74e) popup_call2_audio_second_window_g2

0x0002,

0x00c3,	// (0x00040f59) popup_call2_audio_second_window_g_ParamLimits

0x00c3,	// (0x00040f59) popup_call2_audio_second_window_g

0xe91d,	// (0x0004f7b3) popup_call2_audio_second_window_t1_ParamLimits

0xe91d,	// (0x0004f7b3) popup_call2_audio_second_window_t1

0xe9d8,	// (0x0004f86e) popup_call2_audio_second_window_t2_ParamLimits

0xe9d8,	// (0x0004f86e) popup_call2_audio_second_window_t2

0xea2b,	// (0x0004f8c1) popup_call2_audio_second_window_t3_ParamLimits

0xea2b,	// (0x0004f8c1) popup_call2_audio_second_window_t3

0x0003,

0x00ca,	// (0x00040f60) popup_call2_audio_second_window_t_ParamLimits

0x00ca,	// (0x00040f60) popup_call2_audio_second_window_t

0xd405,	// (0x0004e29b) bg_popup_call2_in_pane_cp02

0xd40f,	// (0x0004e2a5) call_type_pane_cp04

0xd417,	// (0x0004e2ad) popup_call2_audio_wait_window_g1

0xd41f,	// (0x0004e2b5) popup_call2_audio_wait_window_g2

0x0001,

0xf0de,	// (0x0004ff74) popup_call2_audio_wait_window_g

0xd427,	// (0x0004e2bd) popup_call2_audio_wait_window_t3

0xeb1e,	// (0x0004f9b4) bg_popup_call2_act_pane_ParamLimits

0xeb1e,	// (0x0004f9b4) bg_popup_call2_act_pane

0xebde,	// (0x0004fa74) call_type_pane_cp03_ParamLimits

0xebde,	// (0x0004fa74) call_type_pane_cp03

0xec42,	// (0x0004fad8) popup_call2_audio_first_window_g1_ParamLimits

0xec42,	// (0x0004fad8) popup_call2_audio_first_window_g1

0xecb2,	// (0x0004fb48) popup_call2_audio_first_window_g2_ParamLimits

0xecb2,	// (0x0004fb48) popup_call2_audio_first_window_g2

0xe0e4,	// (0x0004ef7a) popup_call2_audio_first_window_g3_ParamLimits

0xe0e4,	// (0x0004ef7a) popup_call2_audio_first_window_g3

0x0004,

0xf4d7,	// (0x0005036d) popup_call2_audio_first_window_g_ParamLimits

0xf4d7,	// (0x0005036d) popup_call2_audio_first_window_g

0xed90,	// (0x0004fc26) popup_call2_audio_first_window_t1_ParamLimits

0xed90,	// (0x0004fc26) popup_call2_audio_first_window_t1

0xee93,	// (0x0004fd29) popup_call2_audio_first_window_t4_ParamLimits

0xee93,	// (0x0004fd29) popup_call2_audio_first_window_t4

0xef90,	// (0x0004fe26) popup_call2_audio_first_window_t5_ParamLimits

0xef90,	// (0x0004fe26) popup_call2_audio_first_window_t5

0x0003,

0xf4e2,	// (0x00050378) popup_call2_audio_first_window_t_ParamLimits

0xf4e2,	// (0x00050378) popup_call2_audio_first_window_t

0xd658,	// (0x0004e4ee) bg_popup_call2_act_pane_g1

0x4904,	// (0x0004579a) popup_cale_lunar_info_window_t1

0x4912,	// (0x000457a8) popup_cale_lunar_info_window_t2

0x4920,	// (0x000457b6) popup_cale_lunar_info_window_t3

0xd405,	// (0x0004e29b) bg_popup_call2_bubble_pane

0x42b6,	// (0x0004514c) bg_popup_call2_in_pane_cp01_ParamLimits

0x42b6,	// (0x0004514c) bg_popup_call2_in_pane_cp01

0xcfd8,	// (0x0004de6e) call_type_pane_cp02

0x42fe,	// (0x00045194) popup_call2_audio_out_window_g1_ParamLimits

0x42fe,	// (0x00045194) popup_call2_audio_out_window_g1

0x432a,	// (0x000451c0) popup_call2_audio_out_window_g2_ParamLimits

0x432a,	// (0x000451c0) popup_call2_audio_out_window_g2

0x4352,	// (0x000451e8) popup_call2_audio_out_window_g3_ParamLimits

0x4352,	// (0x000451e8) popup_call2_audio_out_window_g3

0x0003,

0xf4eb,	// (0x00050381) popup_call2_audio_out_window_g_ParamLimits

0xf4eb,	// (0x00050381) popup_call2_audio_out_window_g

0x438d,	// (0x00045223) popup_call2_audio_out_window_t1_ParamLimits

0x438d,	// (0x00045223) popup_call2_audio_out_window_t1

0x43ec,	// (0x00045282) popup_call2_audio_out_window_t2_ParamLimits

0x43ec,	// (0x00045282) popup_call2_audio_out_window_t2

0x4440,	// (0x000452d6) popup_call2_audio_out_window_t3_ParamLimits

0x4440,	// (0x000452d6) popup_call2_audio_out_window_t3

0x4456,	// (0x000452ec) popup_call2_audio_out_window_t4_ParamLimits

0x4456,	// (0x000452ec) popup_call2_audio_out_window_t4

0x446c,	// (0x00045302) popup_call2_audio_out_window_t5_ParamLimits

0x446c,	// (0x00045302) popup_call2_audio_out_window_t5

0x0005,

0xf4f4,	// (0x0005038a) popup_call2_audio_out_window_t_ParamLimits

0xf4f4,	// (0x0005038a) popup_call2_audio_out_window_t

0x44d0,	// (0x00045366) bg_popup_call2_in_pane_ParamLimits

0x44d0,	// (0x00045366) bg_popup_call2_in_pane

0x452c,	// (0x000453c2) popup_call2_audio_in_window_g1_ParamLimits

0x452c,	// (0x000453c2) popup_call2_audio_in_window_g1

0x4564,	// (0x000453fa) popup_call2_audio_in_window_g2_ParamLimits

0x4564,	// (0x000453fa) popup_call2_audio_in_window_g2

0x459c,	// (0x00045432) popup_call2_audio_in_window_g3_ParamLimits

0x459c,	// (0x00045432) popup_call2_audio_in_window_g3

0x0003,

0xf501,	// (0x00050397) popup_call2_audio_in_window_g_ParamLimits

0xf501,	// (0x00050397) popup_call2_audio_in_window_g

0x45f4,	// (0x0004548a) popup_call2_audio_in_window_t1_ParamLimits

0x45f4,	// (0x0004548a) popup_call2_audio_in_window_t1

0x4674,	// (0x0004550a) popup_call2_audio_in_window_t2_ParamLimits

0x4674,	// (0x0004550a) popup_call2_audio_in_window_t2

0x46f4,	// (0x0004558a) popup_call2_audio_in_window_t3_ParamLimits

0x46f4,	// (0x0004558a) popup_call2_audio_in_window_t3

0x470e,	// (0x000455a4) popup_call2_audio_in_window_t4_ParamLimits

0x470e,	// (0x000455a4) popup_call2_audio_in_window_t4

0x4720,	// (0x000455b6) popup_call2_audio_in_window_t5_ParamLimits

0x4720,	// (0x000455b6) popup_call2_audio_in_window_t5

0x4735,	// (0x000455cb) popup_call2_audio_in_window_t6_ParamLimits

0x4735,	// (0x000455cb) popup_call2_audio_in_window_t6

0x0005,

0xf50a,	// (0x000503a0) popup_call2_audio_in_window_t_ParamLimits

0xf50a,	// (0x000503a0) popup_call2_audio_in_window_t

0xd658,	// (0x0004e4ee) bg_popup_call2_in_pane_g1

0x492e,	// (0x000457c4) popup_cale_lunar_info_window_t4

0x0003,

0xf57e,	// (0x00050414) popup_cale_lunar_info_window_t

0xd660,	// (0x0004e4f6) bg_popup_call2_rect_pane_ParamLimits

0xd660,	// (0x0004e4f6) bg_popup_call2_rect_pane

0xd405,	// (0x0004e29b) call2_cli_visual_graphic_pane

0xd405,	// (0x0004e29b) call2_cli_visual_text_pane

0xac74,	// (0x0004bb0a) smil_status_volume_pane_g3

0x0002,

0xd77e,	// (0x0004e614) call2_cli_visual_graphic_pane_g1

0xd77e,	// (0x0004e614) call2_cli_visual_graphic_pane_g2

0xd77e,	// (0x0004e614) call2_cli_visual_graphic_pane_g3

0x0002,

0x0113,	// (0x00040fa9) call2_cli_visual_graphic_pane_g

0x4764,	// (0x000455fa) bg_popup_call2_rect_pane_g1

0xd81c,	// (0x0004e6b2) bg_popup_call2_rect_pane_g2

0x476c,	// (0x00045602) bg_popup_call2_rect_pane_g3

0x4774,	// (0x0004560a) bg_popup_call2_rect_pane_g4

0x477c,	// (0x00045612) bg_popup_call2_rect_pane_g5

0x4784,	// (0x0004561a) bg_popup_call2_rect_pane_g6

0x478c,	// (0x00045622) bg_popup_call2_rect_pane_g7

0x4794,	// (0x0004562a) bg_popup_call2_rect_pane_g8

0x479c,	// (0x00045632) bg_popup_call2_rect_pane_g9

0x0008,

0xf517,	// (0x000503ad) bg_popup_call2_rect_pane_g

0x47a4,	// (0x0004563a) bg_popup_call2_bubble_pane_g1

0x47ac,	// (0x00045642) bg_popup_call2_bubble_pane_g2

0x47b4,	// (0x0004564a) bg_popup_call2_bubble_pane_g3

0x47bc,	// (0x00045652) bg_popup_call2_bubble_pane_g4

0x47c4,	// (0x0004565a) bg_popup_call2_bubble_pane_g5

0x47cc,	// (0x00045662) bg_popup_call2_bubble_pane_g6

0x47d4,	// (0x0004566a) bg_popup_call2_bubble_pane_g7

0x47dc,	// (0x00045672) bg_popup_call2_bubble_pane_g8

0x47e4,	// (0x0004567a) bg_popup_call2_bubble_pane_g9

0x0008,

0xf52a,	// (0x000503c0) bg_popup_call2_bubble_pane_g

0x1e46,	// (0x00042cdc) aid_cale_week_size_cell_pane

0x2556,	// (0x000433ec) aid_cams_cif_uncrop_pane_ParamLimits

0x2556,	// (0x000433ec) aid_cams_cif_uncrop_pane

0x26f7,	// (0x0004358d) aid_cams_size_cell_ParamLimits

0x26f7,	// (0x0004358d) aid_cams_size_cell

0x270b,	// (0x000435a1) grid_cams_pane_ParamLimits

0x2720,	// (0x000435b6) linegrid_cams_pane_ParamLimits

0x27ea,	// (0x00043680) call_video_pane_t1

0x2804,	// (0x0004369a) call_video_pane_t2

0x0001,

0xf253,	// (0x000500e9) call_video_pane_t

0x2b89,	// (0x00043a1f) aid_cale_month_size_cell_pane_ParamLimits

0x2b89,	// (0x00043a1f) aid_cale_month_size_cell_pane

0xf5c7,	// (0x0005045d) smil_status_volume_pane_g

0xac81,	// (0x0004bb17) volume_smil_pane_ParamLimits

0xa864,	// (0x0004b6fa) aid_popup2_width_pane

0x1da3,	// (0x00042c39) cell_qdial_pane_g4_ParamLimits

0x1da3,	// (0x00042c39) cell_qdial_pane_g4

0x3862,	// (0x000446f8) aid_blid_cardinal_pane_ParamLimits

0x386e,	// (0x00044704) aid_blid_destination_pane_ParamLimits

0x386e,	// (0x00044704) aid_blid_destination_pane

0xd660,	// (0x0004e4f6) bg_popup_call_poc_act_pane_ParamLimits

0xd660,	// (0x0004e4f6) bg_popup_call_poc_act_pane

0xd660,	// (0x0004e4f6) bg_popup_call_poc_inact_pane_ParamLimits

0xd660,	// (0x0004e4f6) bg_popup_call_poc_inact_pane

0x47f4,	// (0x0004568a) bg_popup_call_poc_act_pane_g1

0x47fc,	// (0x00045692) bg_popup_call_poc_act_pane_g2

0x4804,	// (0x0004569a) bg_popup_call_poc_act_pane_g3

0x47bc,	// (0x00045652) bg_popup_call_poc_act_pane_g4

0x47c4,	// (0x0004565a) bg_popup_call_poc_act_pane_g5

0x480c,	// (0x000456a2) bg_popup_call_poc_act_pane_g6

0x47d4,	// (0x0004566a) bg_popup_call_poc_act_pane_g7

0x4814,	// (0x000456aa) bg_popup_call_poc_act_pane_g8

0xd405,	// (0x0004e29b) main_usb_pane

0xac2c,	// (0x0004bac2) popup_cale_lunar_info_window

0x2a49,	// (0x000438df) im_reading_pane_t1_ParamLimits

0xda4a,	// (0x0004e8e0) list_im_pane_ParamLimits

0xda5b,	// (0x0004e8f1) scroll_pane_cp07_ParamLimits

0xd405,	// (0x0004e29b) grid_highlight_pane_cp012

0xd660,	// (0x0004e4f6) mup_scale_pane_ParamLimits

0xe4c3,	// (0x0004f359) main_usb_pane_g1_ParamLimits

0xe4c3,	// (0x0004f359) main_usb_pane_g1

0x4874,	// (0x0004570a) main_usb_pane_g2_ParamLimits

0x4874,	// (0x0004570a) main_usb_pane_g2

0x0001,

0xf567,	// (0x000503fd) main_usb_pane_g_ParamLimits

0xf567,	// (0x000503fd) main_usb_pane_g

0x4888,	// (0x0004571e) main_usb_pane_t1_ParamLimits

0x4888,	// (0x0004571e) main_usb_pane_t1

0x489a,	// (0x00045730) main_usb_pane_t2_ParamLimits

0x489a,	// (0x00045730) main_usb_pane_t2

0x48ac,	// (0x00045742) main_usb_pane_t3_ParamLimits

0x48ac,	// (0x00045742) main_usb_pane_t3

0x48be,	// (0x00045754) main_usb_pane_t4_ParamLimits

0x48be,	// (0x00045754) main_usb_pane_t4

0x48d0,	// (0x00045766) main_usb_pane_t5_ParamLimits

0x48d0,	// (0x00045766) main_usb_pane_t5

0x48e2,	// (0x00045778) main_usb_pane_t6_ParamLimits

0x48e2,	// (0x00045778) main_usb_pane_t6

0x0005,

0xf56c,	// (0x00050402) main_usb_pane_t_ParamLimits

0xe1c8,	// (0x0004f05e) aid_text_placing

0x380e,	// (0x000446a4) main_location2_pane_t1_ParamLimits

0x3824,	// (0x000446ba) main_location2_pane_t2_ParamLimits

0x383a,	// (0x000446d0) main_location2_pane_t3_ParamLimits

0x3850,	// (0x000446e6) main_location2_pane_t4_ParamLimits

0x3850,	// (0x000446e6) main_location2_pane_t4

0xf3b4,	// (0x0005024a) main_location2_pane_t_ParamLimits

0xd69c,	// (0x0004e532) find_pinb_pane_g2_ParamLimits

0xd69c,	// (0x0004e532) find_pinb_pane_g2

0x0001,

0xf104,	// (0x0004ff9a) find_pinb_pane_g_ParamLimits

0xf104,	// (0x0004ff9a) find_pinb_pane_g

0xd6a8,	// (0x0004e53e) find_pinb_pane_t1_ParamLimits

0xd6ba,	// (0x0004e550) find_pinb_pane_t2_ParamLimits

0xf109,	// (0x0004ff9f) find_pinb_pane_t_ParamLimits

0xd405,	// (0x0004e29b) main_call3_pane

0x2f84,	// (0x00043e1a) cale_month_day_heading_pane_t1_ParamLimits

0x300a,	// (0x00043ea0) cale_month_day_heading_pane_t2_ParamLimits

0x309b,	// (0x00043f31) cale_month_day_heading_pane_t3_ParamLimits

0x312c,	// (0x00043fc2) cale_month_day_heading_pane_t4_ParamLimits

0x31bd,	// (0x00044053) cale_month_day_heading_pane_t5_ParamLimits

0x324e,	// (0x000440e4) cale_month_day_heading_pane_t6_ParamLimits

0x32df,	// (0x00044175) cale_month_day_heading_pane_t7_ParamLimits

0xf28b,	// (0x00050121) cale_month_day_heading_pane_t_ParamLimits

0x353b,	// (0x000443d1) smil_status_volume_pane

0x3e61,	// (0x00044cf7) postcard_address_pane_ParamLimits

0x3e61,	// (0x00044cf7) postcard_address_pane

0x3e73,	// (0x00044d09) postcard_message_pane_ParamLimits

0x3e73,	// (0x00044d09) postcard_message_pane

0x474a,	// (0x000455e0) call2_cli_visual_pane_t1_ParamLimits

0x474a,	// (0x000455e0) call2_cli_visual_pane_t1

0x5183,	// (0x00046019) postcard_message_pane_t1_ParamLimits

0x5183,	// (0x00046019) postcard_message_pane_t1

0x516c,	// (0x00046002) postcard_address_pane_t1_ParamLimits

0x516c,	// (0x00046002) postcard_address_pane_t1

0x515a,	// (0x00045ff0) popup_call3_audio_in_window_ParamLimits

0x515a,	// (0x00045ff0) popup_call3_audio_in_window

0x4fe9,	// (0x00045e7f) bg_popup_call3_in_pane_ParamLimits

0x4fe9,	// (0x00045e7f) bg_popup_call3_in_pane

0x505b,	// (0x00045ef1) popup_call3_audio_in_window_g1_ParamLimits

0x505b,	// (0x00045ef1) popup_call3_audio_in_window_g1

0x507b,	// (0x00045f11) popup_call3_audio_in_window_g2_ParamLimits

0x507b,	// (0x00045f11) popup_call3_audio_in_window_g2

0x509b,	// (0x00045f31) popup_call3_audio_in_window_g3_ParamLimits

0x509b,	// (0x00045f31) popup_call3_audio_in_window_g3

0x0003,

0xf5ce,	// (0x00050464) popup_call3_audio_in_window_g_ParamLimits

0xf5ce,	// (0x00050464) popup_call3_audio_in_window_g

0x50cc,	// (0x00045f62) popup_call3_audio_in_window_t1_ParamLimits

0x50cc,	// (0x00045f62) popup_call3_audio_in_window_t1

0x510a,	// (0x00045fa0) popup_call3_audio_in_window_t2_ParamLimits

0x510a,	// (0x00045fa0) popup_call3_audio_in_window_t2

0x5148,	// (0x00045fde) popup_call3_audio_in_window_t3_ParamLimits

0x5148,	// (0x00045fde) popup_call3_audio_in_window_t3

0x0002,

0xf5d7,	// (0x0005046d) popup_call3_audio_in_window_t_ParamLimits

0xf5d7,	// (0x0005046d) popup_call3_audio_in_window_t

0xd8f8,	// (0x0004e78e) bg_popup_call3_rect_pane

0x4764,	// (0x000455fa) bg_popup_call3_rect_pane_g1

0xd81c,	// (0x0004e6b2) bg_popup_call3_rect_pane_g2

0x476c,	// (0x00045602) bg_popup_call3_rect_pane_g3

0x4774,	// (0x0004560a) bg_popup_call3_rect_pane_g4

0x477c,	// (0x00045612) bg_popup_call3_rect_pane_g5

0x4784,	// (0x0004561a) bg_popup_call3_rect_pane_g6

0x478c,	// (0x00045622) bg_popup_call3_rect_pane_g7

0x3b77,	// (0x00044a0d) mup_visualizer_osc_pane

0xe3e5,	// (0x0004f27b) mup_visualizer_spec_pane

0x5019,	// (0x00045eaf) call3_video_qcif_pane_ParamLimits

0x5019,	// (0x00045eaf) call3_video_qcif_pane

0x502a,	// (0x00045ec0) call3_video_qcif_uncrop_pane_ParamLimits

0x502a,	// (0x00045ec0) call3_video_qcif_uncrop_pane

0x5036,	// (0x00045ecc) call3_video_subqcif_pane_ParamLimits

0x5036,	// (0x00045ecc) call3_video_subqcif_pane

0x504a,	// (0x00045ee0) call3_video_subqcif_uncrop_pane_ParamLimits

0x504a,	// (0x00045ee0) call3_video_subqcif_uncrop_pane

0x50bb,	// (0x00045f51) popup_call3_audio_in_window_g4_ParamLimits

0x50bb,	// (0x00045f51) popup_call3_audio_in_window_g4

0x4faa,	// (0x00045e40) mup_spec_half_pane

0x4fb3,	// (0x00045e49) mup_spec_half_pane_cp

0x4f98,	// (0x00045e2e) mup_osc_middle_pane

0x4fa1,	// (0x00045e37) mup_visualizer_osc_pane_g1

0x4f79,	// (0x00045e0f) mup_spec_bar_pane_ParamLimits

0x4f79,	// (0x00045e0f) mup_spec_bar_pane

0x4f66,	// (0x00045dfc) mup_spec_bar_pane_g1

0x4f70,	// (0x00045e06) mup_spec_bar_pane_g2

0x0001,

0xf5c2,	// (0x00050458) mup_spec_bar_pane_g

0x1e46,	// (0x00042cdc) aid_cale_week_size_cell_pane_ParamLimits

0x1e60,	// (0x00042cf6) bg_cale_heading_pane_ParamLimits

0xd85a,	// (0x0004e6f0) bg_cale_pane_cp01_ParamLimits

0x1e78,	// (0x00042d0e) cale_week_corner_pane_ParamLimits

0x1e97,	// (0x00042d2d) cale_week_day_heading_pane_ParamLimits

0x1eb4,	// (0x00042d4a) cale_week_scroll_pane_g1_ParamLimits

0x1ec7,	// (0x00042d5d) cale_week_scroll_pane_g2_ParamLimits

0x1edf,	// (0x00042d75) cale_week_scroll_pane_g3_ParamLimits

0x1ef7,	// (0x00042d8d) cale_week_scroll_pane_g4_ParamLimits

0x1f0f,	// (0x00042da5) cale_week_scroll_pane_g5_ParamLimits

0x1f27,	// (0x00042dbd) cale_week_scroll_pane_g6_ParamLimits

0x1f3f,	// (0x00042dd5) cale_week_scroll_pane_g7_ParamLimits

0x1f57,	// (0x00042ded) cale_week_scroll_pane_g8_ParamLimits

0x1f73,	// (0x00042e09) cale_week_scroll_pane_g9_ParamLimits

0x1f8b,	// (0x00042e21) cale_week_scroll_pane_g10_ParamLimits

0x1fa3,	// (0x00042e39) cale_week_scroll_pane_g11_ParamLimits

0x1fbb,	// (0x00042e51) cale_week_scroll_pane_g12_ParamLimits

0x1fd3,	// (0x00042e69) cale_week_scroll_pane_g13_ParamLimits

0x1feb,	// (0x00042e81) cale_week_scroll_pane_g14_ParamLimits

0x2003,	// (0x00042e99) cale_week_scroll_pane_g15_ParamLimits

0xf195,	// (0x0005002b) cale_week_scroll_pane_g_ParamLimits

0x2037,	// (0x00042ecd) cale_week_time_pane_ParamLimits

0x2053,	// (0x00042ee9) grid_cale_week_pane_ParamLimits

0xd877,	// (0x0004e70d) listscroll_cale_week_pane_t1

0xd889,	// (0x0004e71f) scroll_pane_cp08_ParamLimits

0x2bde,	// (0x00043a74) cale_month_corner_pane_ParamLimits

0xdc8b,	// (0x0004eb21) cale_month_pane_t1

0x2f3a,	// (0x00043dd0) cale_month_week_pane_ParamLimits

0x365d,	// (0x000444f3) popup_call_status_window_g1_ParamLimits

0x3671,	// (0x00044507) popup_call_status_window_g2_ParamLimits

0x3685,	// (0x0004451b) popup_call_status_window_g3_ParamLimits

0xf33b,	// (0x000501d1) popup_call_status_window_g_ParamLimits

0xe000,	// (0x0004ee96) aid_call2_pane

0x0c47,	// (0x00041add) msg_header_pane_g1

0x3e61,	// (0x00044cf7) postcard_address2_pane_ParamLimits

0x3e61,	// (0x00044cf7) postcard_address2_pane

0x3e73,	// (0x00044d09) postcard_message2_pane_ParamLimits

0x3e73,	// (0x00044d09) postcard_message2_pane

0x4ef0,	// (0x00045d86) message2_row_pane_ParamLimits

0x4ef0,	// (0x00045d86) message2_row_pane

0x4f0a,	// (0x00045da0) address2_row_pane_ParamLimits

0x4f0a,	// (0x00045da0) address2_row_pane

0x4f1d,	// (0x00045db3) postcard_message2_row_pane_g1

0x4f25,	// (0x00045dbb) postcard_message2_row_pane_t1

0x4f1d,	// (0x00045db3) address2_row_pane_g1

0x4f25,	// (0x00045dbb) address2_row_pane_t1

0x2450,	// (0x000432e6) aid_size_cell_vorec

0xd405,	// (0x0004e29b) main_rss_pane

0x4f33,	// (0x00045dc9) rss_list_single_pane_ParamLimits

0x4f33,	// (0x00045dc9) rss_list_single_pane

0x4f4a,	// (0x00045de0) rss_list_single_pane_t1

0x4f58,	// (0x00045dee) rss_list_single_pane_t2

0x0001,

0xf5bd,	// (0x00050453) rss_list_single_pane_t

0xd405,	// (0x0004e29b) main_camera2_pane

0xd405,	// (0x0004e29b) main_video2_pane

0x51dc,	// (0x00046072) cams_zoom_pane_cp2_ParamLimits

0x51dc,	// (0x00046072) cams_zoom_pane_cp2

0x51f3,	// (0x00046089) image2_vga_pane_ParamLimits

0x51f3,	// (0x00046089) image2_vga_pane

0x5229,	// (0x000460bf) main_camera2_pane_g1_ParamLimits

0x5229,	// (0x000460bf) main_camera2_pane_g1

0x5249,	// (0x000460df) main_camera2_pane_g2_ParamLimits

0x5249,	// (0x000460df) main_camera2_pane_g2

0x5260,	// (0x000460f6) main_camera2_pane_g3_ParamLimits

0x5260,	// (0x000460f6) main_camera2_pane_g3

0x5277,	// (0x0004610d) main_camera2_pane_g4_ParamLimits

0x5277,	// (0x0004610d) main_camera2_pane_g4

0x528e,	// (0x00046124) main_camera2_pane_g5_ParamLimits

0x528e,	// (0x00046124) main_camera2_pane_g5

0x52a5,	// (0x0004613b) main_camera2_pane_g6_ParamLimits

0x52a5,	// (0x0004613b) main_camera2_pane_g6

0x52bc,	// (0x00046152) main_camera2_pane_g7_ParamLimits

0x52bc,	// (0x00046152) main_camera2_pane_g7

0x52d3,	// (0x00046169) main_camera2_pane_g8_ParamLimits

0x52d3,	// (0x00046169) main_camera2_pane_g8

0x0008,

0xf5de,	// (0x00050474) main_camera2_pane_g_ParamLimits

0xf5de,	// (0x00050474) main_camera2_pane_g

0x5301,	// (0x00046197) main_camera2_pane_t1_ParamLimits

0x5301,	// (0x00046197) main_camera2_pane_t1

0x5330,	// (0x000461c6) main_camera2_pane_t2_ParamLimits

0x5330,	// (0x000461c6) main_camera2_pane_t2

0x534d,	// (0x000461e3) main_camera2_pane_t3_ParamLimits

0x534d,	// (0x000461e3) main_camera2_pane_t3

0x5399,	// (0x0004622f) main_camera2_pane_t4_ParamLimits

0x5399,	// (0x0004622f) main_camera2_pane_t4

0x0006,

0xf5f1,	// (0x00050487) main_camera2_pane_t_ParamLimits

0xf5f1,	// (0x00050487) main_camera2_pane_t

0x540e,	// (0x000462a4) cams_zoom_pane_cp4_ParamLimits

0x540e,	// (0x000462a4) cams_zoom_pane_cp4

0x5424,	// (0x000462ba) image2_cif_pane_ParamLimits

0x5424,	// (0x000462ba) image2_cif_pane

0x5447,	// (0x000462dd) image2_subqcif_pane_ParamLimits

0x5447,	// (0x000462dd) image2_subqcif_pane

0x545d,	// (0x000462f3) main_video2_pane_g1_ParamLimits

0x545d,	// (0x000462f3) main_video2_pane_g1

0x5477,	// (0x0004630d) main_video2_pane_g2_ParamLimits

0x5477,	// (0x0004630d) main_video2_pane_g2

0x548d,	// (0x00046323) main_video2_pane_g3_ParamLimits

0x548d,	// (0x00046323) main_video2_pane_g3

0x54a3,	// (0x00046339) main_video2_pane_g4_ParamLimits

0x54a3,	// (0x00046339) main_video2_pane_g4

0x54b9,	// (0x0004634f) main_video2_pane_g5_ParamLimits

0x54b9,	// (0x0004634f) main_video2_pane_g5

0x54cf,	// (0x00046365) main_video2_pane_g6_ParamLimits

0x54cf,	// (0x00046365) main_video2_pane_g6

0x0005,

0xf600,	// (0x00050496) main_video2_pane_g_ParamLimits

0xf600,	// (0x00050496) main_video2_pane_g

0x54e9,	// (0x0004637f) main_video2_pane_t1_ParamLimits

0x54e9,	// (0x0004637f) main_video2_pane_t1

0x550d,	// (0x000463a3) main_video2_pane_t2_ParamLimits

0x550d,	// (0x000463a3) main_video2_pane_t2

0x5557,	// (0x000463ed) main_video2_pane_t3_ParamLimits

0x5557,	// (0x000463ed) main_video2_pane_t3

0x0002,

0xf60d,	// (0x000504a3) main_video2_pane_t_ParamLimits

0xf60d,	// (0x000504a3) main_video2_pane_t

0x4a7b,	// (0x00045911) call_muted_g2

0x0001,

0xf5af,	// (0x00050445) call_muted_g

0xd405,	// (0x0004e29b) main_mup2_pane

0x5599,	// (0x0004642f) main_mup2_pane_g1_ParamLimits

0x5599,	// (0x0004642f) main_mup2_pane_g1

0x55a5,	// (0x0004643b) main_mup2_pane_g2_ParamLimits

0x55a5,	// (0x0004643b) main_mup2_pane_g2

0xacea,	// (0x0004bb80) main_mup_pane_g13_cp1

0xacf2,	// (0x0004bb88) mup_volume_pane_cp1

0x55c1,	// (0x00046457) main_mup2_pane_g4_ParamLimits

0x55c1,	// (0x00046457) main_mup2_pane_g4

0x55d1,	// (0x00046467) main_mup2_pane_g5_ParamLimits

0x55d1,	// (0x00046467) main_mup2_pane_g5

0x55e1,	// (0x00046477) main_mup2_pane_g6_ParamLimits

0x55e1,	// (0x00046477) main_mup2_pane_g6

0x55f1,	// (0x00046487) main_mup2_pane_g7_ParamLimits

0x55f1,	// (0x00046487) main_mup2_pane_g7

0x0006,

0xf614,	// (0x000504aa) main_mup2_pane_g_ParamLimits

0xf614,	// (0x000504aa) main_mup2_pane_g

0x5609,	// (0x0004649f) main_mup2_pane_t1_ParamLimits

0x5609,	// (0x0004649f) main_mup2_pane_t1

0x561f,	// (0x000464b5) main_mup2_pane_t2_ParamLimits

0x561f,	// (0x000464b5) main_mup2_pane_t2

0x5635,	// (0x000464cb) main_mup2_pane_t3_ParamLimits

0x5635,	// (0x000464cb) main_mup2_pane_t3

0x564b,	// (0x000464e1) main_mup2_pane_t4_ParamLimits

0x564b,	// (0x000464e1) main_mup2_pane_t4

0x5663,	// (0x000464f9) main_mup2_pane_t5_ParamLimits

0x5663,	// (0x000464f9) main_mup2_pane_t5

0x567b,	// (0x00046511) main_mup2_pane_t6_ParamLimits

0x567b,	// (0x00046511) main_mup2_pane_t6

0x0005,

0xf623,	// (0x000504b9) main_mup2_pane_t_ParamLimits

0xf623,	// (0x000504b9) main_mup2_pane_t

0x56ab,	// (0x00046541) mup2_visualizer_pane_ParamLimits

0x56ab,	// (0x00046541) mup2_visualizer_pane

0x56d6,	// (0x0004656c) mup_progress_pane_cp_ParamLimits

0x56d6,	// (0x0004656c) mup_progress_pane_cp

0xacd5,	// (0x0004bb6b) mup_volume_pane_cp_ParamLimits

0xacd5,	// (0x0004bb6b) mup_volume_pane_cp

0x56ea,	// (0x00046580) mup2_visualizer_pane_g1_ParamLimits

0x56ea,	// (0x00046580) mup2_visualizer_pane_g1

0x56ff,	// (0x00046595) mup2_visualizer_pane_g2_ParamLimits

0x56ff,	// (0x00046595) mup2_visualizer_pane_g2

0x570b,	// (0x000465a1) mup2_visualizer_pane_g3_ParamLimits

0x570b,	// (0x000465a1) mup2_visualizer_pane_g3

0x0002,

0xf630,	// (0x000504c6) mup2_visualizer_pane_g_ParamLimits

0xf630,	// (0x000504c6) mup2_visualizer_pane_g

0xd9b1,	// (0x0004e847) aid_size_cell_fmradio

0x4c08,	// (0x00045a9e) aid_height_parent_landcape

0xdae8,	// (0x0004e97e) wml_content_pane_cp

0xdaf0,	// (0x0004e986) wml_tabs_pane

0xdaf9,	// (0x0004e98f) popup_wml_miniature_window

0xdb01,	// (0x0004e997) scroll_pane_cp021

0xdb15,	// (0x0004e9ab) wml_content_pane_comp8

0xd405,	// (0x0004e29b) bg_popup_sub_pane_cp05

0x5729,	// (0x000465bf) popup_wml_miniature_window_g1

0x5731,	// (0x000465c7) wml_miniature_view_pane

0x5739,	// (0x000465cf) aid_size_wml_view

0x5741,	// (0x000465d7) wml_miniature_view_pane_g1

0x574a,	// (0x000465e0) wml_miniature_view_pane_g2

0x5753,	// (0x000465e9) wml_miniature_view_pane_g3

0x575b,	// (0x000465f1) wml_miniature_view_pane_g4

0x5763,	// (0x000465f9) wml_miniature_view_pane_g5

0x576b,	// (0x00046601) wml_miniature_view_pane_g6

0x5773,	// (0x00046609) wml_miniature_view_pane_g7

0x577b,	// (0x00046611) wml_miniature_view_pane_g8

0x0007,

0xf637,	// (0x000504cd) wml_miniature_view_pane_g

0x5783,	// (0x00046619) background_graphic_ParamLimits

0x5783,	// (0x00046619) background_graphic

0x578f,	// (0x00046625) wml_tabs_2_pane

0x5798,	// (0x0004662e) wml_tabs_3_pane_ParamLimits

0x5798,	// (0x0004662e) wml_tabs_3_pane

0x57aa,	// (0x00046640) wml_tabs_4_pane_ParamLimits

0x57aa,	// (0x00046640) wml_tabs_4_pane

0x57c0,	// (0x00046656) wml_tabs_5_pane_ParamLimits

0x57c0,	// (0x00046656) wml_tabs_5_pane

0x57da,	// (0x00046670) wml_tabs_pane_g2_ParamLimits

0x57da,	// (0x00046670) wml_tabs_pane_g2

0x57ee,	// (0x00046684) wml_tabs_pane_g3_ParamLimits

0x57ee,	// (0x00046684) wml_tabs_pane_g3

0x5802,	// (0x00046698) wml_tabs_2_active_pane_ParamLimits

0x5802,	// (0x00046698) wml_tabs_2_active_pane

0x5812,	// (0x000466a8) wml_tabs_2_passive_pane_ParamLimits

0x5812,	// (0x000466a8) wml_tabs_2_passive_pane

0x5822,	// (0x000466b8) wml_tabs_3_active_pane_cp_ParamLimits

0x5822,	// (0x000466b8) wml_tabs_3_active_pane_cp

0x5833,	// (0x000466c9) wml_tabs_3_passive_pane_ParamLimits

0x5833,	// (0x000466c9) wml_tabs_3_passive_pane

0x5844,	// (0x000466da) wml_tabs_3_passive_pane_cp_ParamLimits

0x5844,	// (0x000466da) wml_tabs_3_passive_pane_cp

0x5855,	// (0x000466eb) tabs_4_active_pane

0x585d,	// (0x000466f3) tabs_4_passive_pane

0x5865,	// (0x000466fb) tabs_4_passive_pane_cp

0x586d,	// (0x00046703) tabs_4_passive_pane_cp2

0x47ec,	// (0x00045682) aid_height_text

0x3b4d,	// (0x000449e3) mup_volume_cont_pane_ParamLimits

0x3b4d,	// (0x000449e3) mup_volume_cont_pane

0x1aac,	// (0x00042942) aid_size_cell_pinb

0x1ab6,	// (0x0004294c) aid_size_list_pinb

0x56c2,	// (0x00046558) mup2_volume_cont_pane_ParamLimits

0x56c2,	// (0x00046558) mup2_volume_cont_pane

0xacc1,	// (0x0004bb57) mup2_volume_cont_pane_g1_ParamLimits

0xacc1,	// (0x0004bb57) mup2_volume_cont_pane_g1

0x17c8,	// (0x0004265e) aid_size_cell_touch_ParamLimits

0x17c8,	// (0x0004265e) aid_size_cell_touch

0x19b4,	// (0x0004284a) touch_pane_ParamLimits

0x19b4,	// (0x0004284a) touch_pane

0xa852,	// (0x0004b6e8) main_rss2_pane

0x587e,	// (0x00046714) listscroll_rss2_pane

0x5887,	// (0x0004671d) rss2_navigation_pane

0x588f,	// (0x00046725) list_rss2_pane

0xe145,	// (0x0004efdb) scroll_pane_cp22

0x5897,	// (0x0004672d) rss2_navigation_pane_g1

0x58a0,	// (0x00046736) rss2_navigation_pane_g2

0x58a8,	// (0x0004673e) rss2_navigation_pane_g3

0x0002,

0xf648,	// (0x000504de) rss2_navigation_pane_g

0x58b0,	// (0x00046746) rss2_navigation_pane_t1

0x58be,	// (0x00046754) rss2_list_single_pane_ParamLimits

0x58be,	// (0x00046754) rss2_list_single_pane

0x58d2,	// (0x00046768) rss2_list_single_pane_t2

0x58e0,	// (0x00046776) rss2_list_single_pane_t3_ParamLimits

0x58e0,	// (0x00046776) rss2_list_single_pane_t3

0x58fd,	// (0x00046793) rss2_list_single_pane_t4

0x3525,	// (0x000443bb) smil_status_pane_g1

0xef76,	// (0x0004fe0c) main_image2_pane_ParamLimits

0xef76,	// (0x0004fe0c) main_image2_pane

0x52ea,	// (0x00046180) main_camera2_pane_g9_ParamLimits

0x52ea,	// (0x00046180) main_camera2_pane_g9

0x53dc,	// (0x00046272) main_camera2_pane_t5_ParamLimits

0x53dc,	// (0x00046272) main_camera2_pane_t5

0xac96,	// (0x0004bb2c) main_camera2_pane_t6_ParamLimits

0xac96,	// (0x0004bb2c) main_camera2_pane_t6

0x590b,	// (0x000467a1) main_image2_pane_g1_ParamLimits

0x590b,	// (0x000467a1) main_image2_pane_g1

0x4088,	// (0x00044f1e) smil2_video_pane_ParamLimits

0x4088,	// (0x00044f1e) smil2_video_pane

0xa87c,	// (0x0004b712) aid_zoom_text_primary_cp

0xa8a5,	// (0x0004b73b) popup_preview_fixed_window

0xda42,	// (0x0004e8d8) im_reading_pane_g1

0x51d0,	// (0x00046066) cams2_bc_adjust_pane_cp_ParamLimits

0x51d0,	// (0x00046066) cams2_bc_adjust_pane_cp

0x5402,	// (0x00046298) cams2_bc_adjust_pane_ParamLimits

0x5402,	// (0x00046298) cams2_bc_adjust_pane

0xacfa,	// (0x0004bb90) cams2_bc_adjust_pane_g1

0xad02,	// (0x0004bb98) cams2_slider_pane

0xad0b,	// (0x0004bba1) cams2_slider_pane_g1

0xad14,	// (0x0004bbaa) cams2_slider_pane_g2

0x0006,

0xf64f,	// (0x000504e5) cams2_slider_pane_g

0x1b96,	// (0x00042a2c) calc_display_pane_ParamLimits

0x1bb2,	// (0x00042a48) calc_paper_pane_ParamLimits

0x1bd3,	// (0x00042a69) grid_calc_pane_ParamLimits

0xab7d,	// (0x0004ba13) popup_clock_digital_window_t1_ParamLimits

0xe5a9,	// (0x0004f43f) main_image_pane_t1

0x1b78,	// (0x00042a0e) aid_size_cell_calc_ParamLimits

0x1b78,	// (0x00042a0e) aid_size_cell_calc

0x4c64,	// (0x00045afa) popup_blid_sat_info2_window_ParamLimits

0x4c64,	// (0x00045afa) popup_blid_sat_info2_window

0x5927,	// (0x000467bd) aid_size_cell_blid

0x592f,	// (0x000467c5) bg_popup_window_pane_cp07

0x5952,	// (0x000467e8) grid_popup_blid_pane

0x595a,	// (0x000467f0) heading_pane_cp05_ParamLimits

0x595a,	// (0x000467f0) heading_pane_cp05

0x5a22,	// (0x000468b8) cell_popup_blid_pane_ParamLimits

0x5a22,	// (0x000468b8) cell_popup_blid_pane

0x5a42,	// (0x000468d8) cell_popup_blid_pane_g1

0x5a4a,	// (0x000468e0) cell_popup_blid_pane_t1

0x5695,	// (0x0004652b) mup2_indicator_pane_ParamLimits

0x5695,	// (0x0004652b) mup2_indicator_pane

0xd8f8,	// (0x0004e78e) mup2_visualizer_osc_pane

0x5717,	// (0x000465ad) mup2_visualizer_spec_pane_ParamLimits

0x5717,	// (0x000465ad) mup2_visualizer_spec_pane

0x5a58,	// (0x000468ee) mup2_spec_half_pane

0x5a61,	// (0x000468f7) mup2_spec_half_pane_cp

0x5a69,	// (0x000468ff) mup2_spec_bar_pane_ParamLimits

0x5a69,	// (0x000468ff) mup2_spec_bar_pane

0x4f66,	// (0x00045dfc) mup2_spec_bar_pane_g1

0x4f70,	// (0x00045e06) mup2_spec_bar_pane_g2

0x0001,

0xf5c2,	// (0x00050458) mup2_spec_bar_pane_g

0x5a88,	// (0x0004691e) mup2_osc_middle_pane

0x4fa1,	// (0x00045e37) mup2_visualizer_osc_pane_g1

0xcf0b,	// (0x0004dda1) popup_number_entry_window_t1_ParamLimits

0xcf1e,	// (0x0004ddb4) popup_number_entry_window_t2_ParamLimits

0xcf30,	// (0x0004ddc6) popup_number_entry_window_t3_ParamLimits

0x19fc,	// (0x00042892) popup_number_entry_window_t5_ParamLimits

0x19fc,	// (0x00042892) popup_number_entry_window_t5

0xf0af,	// (0x0004ff45) popup_number_entry_window_t_ParamLimits

0xcf42,	// (0x0004ddd8) text_title_cp2_ParamLimits

0xabf2,	// (0x0004ba88) aid_hotspot_pointer_text2_pane

0xac18,	// (0x0004baae) main_viewer_pane_g9_ParamLimits

0xac18,	// (0x0004baae) main_viewer_pane_g9

0xdc8b,	// (0x0004eb21) cale_month_pane_t1_ParamLimits

0xdcb1,	// (0x0004eb47) bg_cale_pane_ParamLimits

0xdcc9,	// (0x0004eb5f) list_cale_pane_ParamLimits

0xdcda,	// (0x0004eb70) listscroll_cale_day_pane_t1

0xdcec,	// (0x0004eb82) scroll_pane_cp09_ParamLimits

0x3b7f,	// (0x00044a15) main_mup_eq_pane_t1_ParamLimits

0x3b7f,	// (0x00044a15) main_mup_eq_pane_t1

0x3b97,	// (0x00044a2d) main_mup_eq_pane_t2_ParamLimits

0x3b97,	// (0x00044a2d) main_mup_eq_pane_t2

0x3bad,	// (0x00044a43) main_mup_eq_pane_t3_ParamLimits

0x3bad,	// (0x00044a43) main_mup_eq_pane_t3

0x3bc3,	// (0x00044a59) main_mup_eq_pane_t4_ParamLimits

0x3bc3,	// (0x00044a59) main_mup_eq_pane_t4

0x3bd9,	// (0x00044a6f) main_mup_eq_pane_t5_ParamLimits

0x3bd9,	// (0x00044a6f) main_mup_eq_pane_t5

0x3bef,	// (0x00044a85) main_mup_eq_pane_t6_ParamLimits

0x3bef,	// (0x00044a85) main_mup_eq_pane_t6

0x3c01,	// (0x00044a97) main_mup_eq_pane_t7_ParamLimits

0x3c01,	// (0x00044a97) main_mup_eq_pane_t7

0x3c13,	// (0x00044aa9) main_mup_eq_pane_t8_ParamLimits

0x3c13,	// (0x00044aa9) main_mup_eq_pane_t8

0x3c25,	// (0x00044abb) main_mup_eq_pane_t9_ParamLimits

0x3c25,	// (0x00044abb) main_mup_eq_pane_t9

0x3c3b,	// (0x00044ad1) main_mup_eq_pane_t10_ParamLimits

0x3c3b,	// (0x00044ad1) main_mup_eq_pane_t10

0x0009,

0xf43a,	// (0x000502d0) main_mup_eq_pane_t_ParamLimits

0xf43a,	// (0x000502d0) main_mup_eq_pane_t

0x3cce,	// (0x00044b64) mup_equalizer_pane_cp5_ParamLimits

0x3ce0,	// (0x00044b76) mup_equalizer_pane_cp6_ParamLimits

0x3cf2,	// (0x00044b88) mup_equalizer_pane_cp7_ParamLimits

0xa852,	// (0x0004b6e8) main_gallery_pane

0x4fbb,	// (0x00045e51) smil2_volume_pane

0x4fc3,	// (0x00045e59) smil_status_volume_pane_g1_ParamLimits

0x4fd6,	// (0x00045e6c) smil_status_volume_pane_g2_ParamLimits

0xac74,	// (0x0004bb0a) smil_status_volume_pane_g3_ParamLimits

0xf5c7,	// (0x0005045d) smil_status_volume_pane_g_ParamLimits

0x592f,	// (0x000467c5) bg_popup_window_pane_cp07_ParamLimits

0x593d,	// (0x000467d3) blid_firmament_pane

0x5a91,	// (0x00046927) aid_size_cell_gallery_ParamLimits

0x5a91,	// (0x00046927) aid_size_cell_gallery

0x5aa7,	// (0x0004693d) grid_gallery_pane_ParamLimits

0x5aa7,	// (0x0004693d) grid_gallery_pane

0x5abb,	// (0x00046951) cell_gallery_pane_ParamLimits

0x5abb,	// (0x00046951) cell_gallery_pane

0x5b02,	// (0x00046998) bg_cell_gallery_focus_pane_ParamLimits

0x5b02,	// (0x00046998) bg_cell_gallery_focus_pane

0x5b14,	// (0x000469aa) cell_gallery_pane_g1_ParamLimits

0x5b14,	// (0x000469aa) cell_gallery_pane_g1

0x5b20,	// (0x000469b6) cell_gallery_pane_g2_ParamLimits

0x5b20,	// (0x000469b6) cell_gallery_pane_g2

0x5b2d,	// (0x000469c3) cell_gallery_pane_g3_ParamLimits

0x5b2d,	// (0x000469c3) cell_gallery_pane_g3

0x5b3a,	// (0x000469d0) cell_gallery_pane_g4_ParamLimits

0x5b3a,	// (0x000469d0) cell_gallery_pane_g4

0x0003,

0xf675,	// (0x0005050b) cell_gallery_pane_g_ParamLimits

0xf675,	// (0x0005050b) cell_gallery_pane_g

0x5b46,	// (0x000469dc) bg_cell_gallery_focus_pane_g1

0x5b4e,	// (0x000469e4) bg_cell_gallery_focus_pane_g2

0x5b56,	// (0x000469ec) bg_cell_gallery_focus_pane_g3

0x5b5e,	// (0x000469f4) bg_cell_gallery_focus_pane_g4

0x5b66,	// (0x000469fc) bg_cell_gallery_focus_pane_g5

0x5b6e,	// (0x00046a04) bg_cell_gallery_focus_pane_g6

0x5b76,	// (0x00046a0c) bg_cell_gallery_focus_pane_g7

0x5b7e,	// (0x00046a14) bg_cell_gallery_focus_pane_g8

0x0007,

0xf67e,	// (0x00050514) bg_cell_gallery_focus_pane_g

0x5b86,	// (0x00046a1c) aid_firma_cardinal

0x5b9a,	// (0x00046a30) blid_firmament_pane_t1

0x5bb1,	// (0x00046a47) blid_firmament_pane_t2

0x5bc8,	// (0x00046a5e) blid_firmament_pane_t3

0x5bdf,	// (0x00046a75) blid_firmament_pane_t4

0x0003,

0xf68f,	// (0x00050525) blid_firmament_pane_t

0x5bf6,	// (0x00046a8c) blid_sat_info_pane

0x5c06,	// (0x00046a9c) blid_sat_info_pane_g1

0x5c06,	// (0x00046a9c) blid_sat_info_pane_g2

0x0001,

0xf698,	// (0x0005052e) blid_sat_info_pane_g

0x5c10,	// (0x00046aa6) blid_sat_info_pane_t1

0x5c1e,	// (0x00046ab4) smil2_volume_content_pane

0x5c27,	// (0x00046abd) smil2_volume_pane_g1

0x5c2f,	// (0x00046ac5) smil2_volume_content_pane_g1

0x5c38,	// (0x00046ace) smil2_volume_content_pane_g2

0x5c41,	// (0x00046ad7) smil2_volume_content_pane_g3

0x5c4a,	// (0x00046ae0) smil2_volume_content_pane_g4

0x5c53,	// (0x00046ae9) smil2_volume_content_pane_g5

0x5c5c,	// (0x00046af2) smil2_volume_content_pane_g6

0x5c65,	// (0x00046afb) smil2_volume_content_pane_g7

0x5c6e,	// (0x00046b04) smil2_volume_content_pane_g8

0x5c77,	// (0x00046b0d) smil2_volume_content_pane_g9

0x5c80,	// (0x00046b16) smil2_volume_content_pane_g10

0x0009,

0xf69d,	// (0x00050533) smil2_volume_content_pane_g

0x20e7,	// (0x00042f7d) cale_week_day_heading_pane_t1_ParamLimits

0x2111,	// (0x00042fa7) cale_week_day_heading_pane_t2_ParamLimits

0x2140,	// (0x00042fd6) cale_week_day_heading_pane_t3_ParamLimits

0x216f,	// (0x00043005) cale_week_day_heading_pane_t4_ParamLimits

0x219e,	// (0x00043034) cale_week_day_heading_pane_t5_ParamLimits

0x21cd,	// (0x00043063) cale_week_day_heading_pane_t6_ParamLimits

0x21fc,	// (0x00043092) cale_week_day_heading_pane_t7_ParamLimits

0xf1b6,	// (0x0005004c) cale_week_day_heading_pane_t_ParamLimits

0xd8a6,	// (0x0004e73c) bg_cale_side_pane_ParamLimits

0x2226,	// (0x000430bc) cale_week_time_pane_t1_ParamLimits

0x2260,	// (0x000430f6) cale_week_time_pane_t2_ParamLimits

0x229a,	// (0x00043130) cale_week_time_pane_t3_ParamLimits

0x22d4,	// (0x0004316a) cale_week_time_pane_t4_ParamLimits

0x230e,	// (0x000431a4) cale_week_time_pane_t5_ParamLimits

0x2348,	// (0x000431de) cale_week_time_pane_t6_ParamLimits

0x2382,	// (0x00043218) cale_week_time_pane_t7_ParamLimits

0x23bc,	// (0x00043252) cale_week_time_pane_t8_ParamLimits

0xf1c5,	// (0x0005005b) cale_week_time_pane_t_ParamLimits

0x23f6,	// (0x0004328c) cell_cale_week_pane_g2_ParamLimits

0xd8a6,	// (0x0004e73c) bg_cale_side_pane_cp01_ParamLimits

0x3374,	// (0x0004420a) cale_month_week_pane_t1_ParamLimits

0x338d,	// (0x00044223) cale_month_week_pane_t2_ParamLimits

0x33a6,	// (0x0004423c) cale_month_week_pane_t3_ParamLimits

0x33bf,	// (0x00044255) cale_month_week_pane_t4_ParamLimits

0x33d8,	// (0x0004426e) cale_month_week_pane_t5_ParamLimits

0x33f1,	// (0x00044287) cale_month_week_pane_t6_ParamLimits

0xf29a,	// (0x00050130) cale_month_week_pane_t_ParamLimits

0xaa63,	// (0x0004b8f9) cell_cale_month_pane_g1_ParamLimits

0xa852,	// (0x0004b6e8) main_cale_event_viewer_pane

0xa852,	// (0x0004b6e8) listscroll_cale_event_viewer_pane

0x5c89,	// (0x00046b1f) list_cale_ev_pane

0x5c91,	// (0x00046b27) scroll_pane_cp023

0x5c9d,	// (0x00046b33) field_cale_ev_pane_ParamLimits

0x5c9d,	// (0x00046b33) field_cale_ev_pane

0x5cb7,	// (0x00046b4d) field_cale_ev_content_pane_ParamLimits

0x5cb7,	// (0x00046b4d) field_cale_ev_content_pane

0x5cc3,	// (0x00046b59) field_cale_ev_pane_g1_ParamLimits

0x5cc3,	// (0x00046b59) field_cale_ev_pane_g1

0x5ccf,	// (0x00046b65) field_cale_ev_pane_g2_ParamLimits

0x5ccf,	// (0x00046b65) field_cale_ev_pane_g2

0x5ce7,	// (0x00046b7d) field_cale_ev_pane_g3_ParamLimits

0x5ce7,	// (0x00046b7d) field_cale_ev_pane_g3

0x0002,

0xf6b2,	// (0x00050548) field_cale_ev_pane_g_ParamLimits

0xf6b2,	// (0x00050548) field_cale_ev_pane_g

0x5cff,	// (0x00046b95) field_cale_ev_pane_t1_ParamLimits

0x5cff,	// (0x00046b95) field_cale_ev_pane_t1

0x5d16,	// (0x00046bac) field_cale_ev_content_pane_t1_ParamLimits

0x5d16,	// (0x00046bac) field_cale_ev_content_pane_t1

0xe48f,	// (0x0004f325) bg_button_pane_cp01

0x1e36,	// (0x00042ccc) listscroll_cale_week_pane_ParamLimits

0xd851,	// (0x0004e6e7) popup_toolbar_window_cp01

0xd877,	// (0x0004e70d) listscroll_cale_week_pane_t1_ParamLimits

0x1e36,	// (0x00042ccc) listscroll_cale_day_pane_ParamLimits

0xd851,	// (0x0004e6e7) popup_toolbar_window_cp02

0xdcda,	// (0x0004eb70) listscroll_cale_day_pane_t1_ParamLimits

0x1e36,	// (0x00042ccc) main_cale_month_pane_ParamLimits

0xac5f,	// (0x0004baf5) popup_toolbar_window_cp03_ParamLimits

0xac5f,	// (0x0004baf5) popup_toolbar_window_cp03

0x3f62,	// (0x00044df8) main_image_pane_g2_ParamLimits

0x3f62,	// (0x00044df8) main_image_pane_g2

0x3f73,	// (0x00044e09) main_image_pane_g3_ParamLimits

0x3f73,	// (0x00044e09) main_image_pane_g3

0x0002,

0xf4c2,	// (0x00050358) main_image_pane_g_ParamLimits

0xf4c2,	// (0x00050358) main_image_pane_g

0xe5a9,	// (0x0004f43f) main_image_pane_t1_ParamLimits

0x3f84,	// (0x00044e1a) main_image_pane_t2_ParamLimits

0x3f84,	// (0x00044e1a) main_image_pane_t2

0x3f96,	// (0x00044e2c) main_image_pane_t3_ParamLimits

0x3f96,	// (0x00044e2c) main_image_pane_t3

0x3fbe,	// (0x00044e54) main_image_pane_t4_ParamLimits

0x3fbe,	// (0x00044e54) main_image_pane_t4

0x0003,

0xf4c9,	// (0x0005035f) main_image_pane_t_ParamLimits

0xf4c9,	// (0x0005035f) main_image_pane_t

0x3fde,	// (0x00044e74) popup_image_details_window_cp01

0x3fe6,	// (0x00044e7c) popup_toobar_trans_pane_cp01_ParamLimits

0x3fe6,	// (0x00044e7c) popup_toobar_trans_pane_cp01

0x4d2d,	// (0x00045bc3) popup_image_details_window_ParamLimits

0x4d2d,	// (0x00045bc3) popup_image_details_window

0xac34,	// (0x0004baca) popup_image_focus_window

0x519e,	// (0x00046034) camera2_autofocus_pane_ParamLimits

0x519e,	// (0x00046034) camera2_autofocus_pane

0xa852,	// (0x0004b6e8) bg_popup_sub_pane_cp06

0x5d33,	// (0x00046bc9) popup_image_focus_window_g1

0x5d3b,	// (0x00046bd1) popup_image_focus_window_g2

0x5d43,	// (0x00046bd9) popup_image_focus_window_g3

0x5d4b,	// (0x00046be1) popup_image_focus_window_g4

0x0003,

0xf6b9,	// (0x0005054f) popup_image_focus_window_g

0x5d53,	// (0x00046be9) popup_image_focus_window_t1

0x5d61,	// (0x00046bf7) popup_image_focus_window_t2

0x5d70,	// (0x00046c06) popup_image_focus_window_t3

0x0002,

0xf6c2,	// (0x00050558) popup_image_focus_window_t

0x5d7e,	// (0x00046c14) camera2_autofocus_pane_g1

0xef76,	// (0x0004fe0c) bg_tb_trans_pane_cp01

0x5dbc,	// (0x00046c52) popup_image_details_window_g1

0x5dcf,	// (0x00046c65) popup_image_details_window_g2

0x0002,

0xf6d4,	// (0x0005056a) popup_image_details_window_g

0x5df8,	// (0x00046c8e) popup_image_details_window_t1

0x5e0a,	// (0x00046ca0) popup_image_details_window_t2

0x5e23,	// (0x00046cb9) popup_image_details_window_t3

0x5e37,	// (0x00046ccd) popup_image_details_window_t4

0x5e52,	// (0x00046ce8) popup_image_details_window_t5

0x0004,

0xf6db,	// (0x00050571) popup_image_details_window_t

0xd711,	// (0x0004e5a7) bg_calc_paper_pane_ParamLimits

0xa852,	// (0x0004b6e8) grid_highlight_pane_cp013

0xa8d5,	// (0x0004b76b) list_calc_pane_ParamLimits

0xa8e7,	// (0x0004b77d) scroll_pane_cp024

0xd729,	// (0x0004e5bf) bg_calc_display_pane_ParamLimits

0xa8ef,	// (0x0004b785) calc_display_pane_t1_ParamLimits

0xa904,	// (0x0004b79a) calc_display_pane_t2_ParamLimits

0xa919,	// (0x0004b7af) calc_display_pane_t3_ParamLimits

0xf136,	// (0x0004ffcc) calc_display_pane_t_ParamLimits

0x1d52,	// (0x00042be8) cell_calc_pane_g2

0x0001,

0xf153,	// (0x0004ffe9) cell_calc_pane_g

0x1d5b,	// (0x00042bf1) cell_calc_pane_t1

0xd788,	// (0x0004e61e) grid_highlight_pane_cp02_ParamLimits

0xd79e,	// (0x0004e634) toolbar_button_pane_cp01_ParamLimits

0xd79e,	// (0x0004e634) toolbar_button_pane_cp01

0xe5ee,	// (0x0004f484) temp_image_control_pane_ParamLimits

0xe5ee,	// (0x0004f484) temp_image_control_pane

0xef76,	// (0x0004fe0c) main_mp3_pane

0x5e6c,	// (0x00046d02) temp_image_control_pane_g1_ParamLimits

0x5e6c,	// (0x00046d02) temp_image_control_pane_g1

0x5e7a,	// (0x00046d10) temp_image_control_pane_g2_ParamLimits

0x5e7a,	// (0x00046d10) temp_image_control_pane_g2

0x5e8c,	// (0x00046d22) temp_image_control_pane_g3_ParamLimits

0x5e8c,	// (0x00046d22) temp_image_control_pane_g3

0x5e9c,	// (0x00046d32) temp_image_control_pane_g4_ParamLimits

0x5e9c,	// (0x00046d32) temp_image_control_pane_g4

0x0003,

0xf6e6,	// (0x0005057c) temp_image_control_pane_g_ParamLimits

0xf6e6,	// (0x0005057c) temp_image_control_pane_g

0x5e6c,	// (0x00046d02) main_mp3_pane_g1

0x5ead,	// (0x00046d43) main_mp3_pane_g2

0x0007,

0xf6ef,	// (0x00050585) main_mp3_pane_g

0x5f04,	// (0x00046d9a) main_mp3_pane_t1

0xd938,	// (0x0004e7ce) main_camera_pane_g8_ParamLimits

0xd938,	// (0x0004e7ce) main_camera_pane_g8

0x269f,	// (0x00043535) main_video_pane_g7_ParamLimits

0x269f,	// (0x00043535) main_video_pane_g7

0xacaf,	// (0x0004bb45) main_camera2_pane_t7_ParamLimits

0xacaf,	// (0x0004bb45) main_camera2_pane_t7

0xdaa8,	// (0x0004e93e) scroll_pane_cp025_ParamLimits

0xdaa8,	// (0x0004e93e) scroll_pane_cp025

0xdabc,	// (0x0004e952) scroll_pane_cp026_ParamLimits

0xdabc,	// (0x0004e952) scroll_pane_cp026

0xdacb,	// (0x0004e961) wml_content_pane_ParamLimits

0xa852,	// (0x0004b6e8) main_touch_calib_pane

0x5fd4,	// (0x00046e6a) main_touch_calib_pane_g1

0x5fe6,	// (0x00046e7c) main_touch_calib_pane_g2

0x5ff8,	// (0x00046e8e) main_touch_calib_pane_g3

0x600a,	// (0x00046ea0) main_touch_calib_pane_g4

0x0003,

0xf70d,	// (0x000505a3) main_touch_calib_pane_g

0x601c,	// (0x00046eb2) main_touch_calib_pane_t1

0x6034,	// (0x00046eca) main_touch_calib_pane_t2

0x0004,

0xf716,	// (0x000505ac) main_touch_calib_pane_t

0xe201,	// (0x0004f097) mup_progress_pane_cp02

0xe236,	// (0x0004f0cc) navi_pane_g1

0xe2c1,	// (0x0004f157) navi_pane_mp_t3

0xef76,	// (0x0004fe0c) main_mp3_pane_ParamLimits

0x4e99,	// (0x00045d2f) navi_pane_ParamLimits

0x5e6c,	// (0x00046d02) main_mp3_pane_g1_ParamLimits

0x5ead,	// (0x00046d43) main_mp3_pane_g2_ParamLimits

0x5eb9,	// (0x00046d4f) main_mp3_pane_g3_ParamLimits

0x5eb9,	// (0x00046d4f) main_mp3_pane_g3

0x5ec5,	// (0x00046d5b) main_mp3_pane_g4_ParamLimits

0x5ec5,	// (0x00046d5b) main_mp3_pane_g4

0x5ed1,	// (0x00046d67) main_mp3_pane_g5_ParamLimits

0x5ed1,	// (0x00046d67) main_mp3_pane_g5

0x5edf,	// (0x00046d75) main_mp3_pane_g6_ParamLimits

0x5edf,	// (0x00046d75) main_mp3_pane_g6

0x5eec,	// (0x00046d82) main_mp3_pane_g7_ParamLimits

0x5eec,	// (0x00046d82) main_mp3_pane_g7

0x5ef8,	// (0x00046d8e) main_mp3_pane_g8_ParamLimits

0x5ef8,	// (0x00046d8e) main_mp3_pane_g8

0xf6ef,	// (0x00050585) main_mp3_pane_g_ParamLimits

0x5f12,	// (0x00046da8) main_mp3_pane_t2

0x5f20,	// (0x00046db6) main_mp3_pane_t3

0x5f2e,	// (0x00046dc4) main_mp3_pane_t4

0x5f3c,	// (0x00046dd2) main_mp3_pane_t5

0x0005,

0xf700,	// (0x00050596) main_mp3_pane_t

0x5f58,	// (0x00046dee) mup_progress_pane_cp01

0xa87c,	// (0x0004b712) aid_zoom_text_secondary2

0x5c89,	// (0x00046b1f) list_cale_ev2_pane

0x5c91,	// (0x00046b27) scroll_pane_cp023_ParamLimits

0x6082,	// (0x00046f18) field_cale_ev2_pane_ParamLimits

0x6082,	// (0x00046f18) field_cale_ev2_pane

0xad2e,	// (0x0004bbc4) field_cale_ev2_pane_g1_ParamLimits

0xad2e,	// (0x0004bbc4) field_cale_ev2_pane_g1

0xad3a,	// (0x0004bbd0) field_cale_ev2_pane_g2_ParamLimits

0xad3a,	// (0x0004bbd0) field_cale_ev2_pane_g2

0xad52,	// (0x0004bbe8) field_cale_ev2_pane_g3_ParamLimits

0xad52,	// (0x0004bbe8) field_cale_ev2_pane_g3

0x0003,

0xf721,	// (0x000505b7) field_cale_ev2_pane_g_ParamLimits

0xf721,	// (0x000505b7) field_cale_ev2_pane_g

0xad76,	// (0x0004bc0c) field_cale_ev2_pane_t1_ParamLimits

0xad76,	// (0x0004bc0c) field_cale_ev2_pane_t1

0xad8d,	// (0x0004bc23) field_cale_ev2_pane_t2_ParamLimits

0xad8d,	// (0x0004bc23) field_cale_ev2_pane_t2

0x0001,

0xf72a,	// (0x000505c0) field_cale_ev2_pane_t_ParamLimits

0xf72a,	// (0x000505c0) field_cale_ev2_pane_t

0x3e1d,	// (0x00044cb3) main_postcard_pane_g5_ParamLimits

0x3e1d,	// (0x00044cb3) main_postcard_pane_g5

0x3e31,	// (0x00044cc7) main_postcard_pane_g6_ParamLimits

0x3e31,	// (0x00044cc7) main_postcard_pane_g6

0x2481,	// (0x00043317) camera2_autofocus_pane_cp_ParamLimits

0x2481,	// (0x00043317) camera2_autofocus_pane_cp

0xef76,	// (0x0004fe0c) main_mup3_pane

0x60d8,	// (0x00046f6e) main_mup3_pane_g1_ParamLimits

0x60d8,	// (0x00046f6e) main_mup3_pane_g1

0x60fa,	// (0x00046f90) main_mup3_pane_g2_ParamLimits

0x60fa,	// (0x00046f90) main_mup3_pane_g2

0x616d,	// (0x00047003) main_mup3_pane_g3_ParamLimits

0x616d,	// (0x00047003) main_mup3_pane_g3

0x61ab,	// (0x00047041) main_mup3_pane_g4_ParamLimits

0x61ab,	// (0x00047041) main_mup3_pane_g4

0x61e9,	// (0x0004707f) main_mup3_pane_g5_ParamLimits

0x61e9,	// (0x0004707f) main_mup3_pane_g5

0x6227,	// (0x000470bd) main_mup3_pane_g6_ParamLimits

0x6227,	// (0x000470bd) main_mup3_pane_g6

0x6236,	// (0x000470cc) main_mup3_pane_g7_ParamLimits

0x6236,	// (0x000470cc) main_mup3_pane_g7

0x0007,

0xf73a,	// (0x000505d0) main_mup3_pane_g_ParamLimits

0xf73a,	// (0x000505d0) main_mup3_pane_g

0x62ab,	// (0x00047141) main_mup3_pane_t1_ParamLimits

0x62ab,	// (0x00047141) main_mup3_pane_t1

0x6311,	// (0x000471a7) main_mup3_pane_t2_ParamLimits

0x6311,	// (0x000471a7) main_mup3_pane_t2

0x63d7,	// (0x0004726d) main_mup3_pane_t4_ParamLimits

0x63d7,	// (0x0004726d) main_mup3_pane_t4

0x6425,	// (0x000472bb) main_mup3_pane_t5_ParamLimits

0x6425,	// (0x000472bb) main_mup3_pane_t5

0x64d3,	// (0x00047369) main_mup3_pane_t6_ParamLimits

0x64d3,	// (0x00047369) main_mup3_pane_t6

0x0005,

0xf74b,	// (0x000505e1) main_mup3_pane_t_ParamLimits

0xf74b,	// (0x000505e1) main_mup3_pane_t

0x6587,	// (0x0004741d) mup3_progress_pane_ParamLimits

0x6587,	// (0x0004741d) mup3_progress_pane

0x6603,	// (0x00047499) popup_mup3_control_window_ParamLimits

0x6603,	// (0x00047499) popup_mup3_control_window

0x661b,	// (0x000474b1) popup_mup3_text_window

0x6639,	// (0x000474cf) mup3_progress_pane_t1

0x6657,	// (0x000474ed) mup3_progress_pane_t2

0x6675,	// (0x0004750b) mup3_progress_pane_t3

0x0002,

0xf758,	// (0x000505ee) mup3_progress_pane_t

0x6692,	// (0x00047528) mup_progress_pane_cp03

0xa852,	// (0x0004b6e8) bg_tb_trans_pane_cp04

0x66a2,	// (0x00047538) mup3_volume_pane

0x66aa,	// (0x00047540) popup_mup3_control_window_g1

0x66b3,	// (0x00047549) mup3_volume_pane_g1

0x66bc,	// (0x00047552) mup3_volume_pane_g2

0x66c5,	// (0x0004755b) mup3_volume_pane_g3

0x0002,

0xf75f,	// (0x000505f5) mup3_volume_pane_g

0xa852,	// (0x0004b6e8) bg_tb_trans_pane_cp03

0x66ce,	// (0x00047564) popup_mup3_text_window_g1

0x66d6,	// (0x0004756c) popup_mup3_text_window_t1

0xd771,	// (0x0004e607) list_calc_item_pane_g1_ParamLimits

0x5875,	// (0x0004670b) mup_volume_pane_cp_g1

0x604c,	// (0x00046ee2) main_touch_calib_pane_t3

0x605e,	// (0x00046ef4) main_touch_calib_pane_t4

0x6070,	// (0x00046f06) main_touch_calib_pane_t5

0xa85c,	// (0x0004b6f2) aid_cell_size_toolbar2

0xa864,	// (0x0004b6fa) aid_popup3_width_pane

0xa86c,	// (0x0004b702) aid_zoom_text_msg_primary

0xd92a,	// (0x0004e7c0) vorec_t7

0xd735,	// (0x0004e5cb) bg_calc_paper_pane_g1_ParamLimits

0xd741,	// (0x0004e5d7) bg_calc_paper_pane_g2_ParamLimits

0xd74d,	// (0x0004e5e3) bg_calc_paper_pane_g3_ParamLimits

0xd759,	// (0x0004e5ef) bg_calc_paper_pane_g4_ParamLimits

0xd765,	// (0x0004e5fb) bg_calc_paper_pane_g5_ParamLimits

0x1cec,	// (0x00042b82) bg_calc_paper_pane_g6_ParamLimits

0x1cfb,	// (0x00042b91) bg_calc_paper_pane_g7_ParamLimits

0x1d0a,	// (0x00042ba0) bg_calc_paper_pane_g8_ParamLimits

0xf13d,	// (0x0004ffd3) bg_calc_paper_pane_g_ParamLimits

0x1d19,	// (0x00042baf) calc_bg_paper_pane_g9_ParamLimits

0x25b5,	// (0x0004344b) image_qvga_pane_ParamLimits

0x25b5,	// (0x0004344b) image_qvga_pane

0xd660,	// (0x0004e4f6) bg_popup_sub_pane_cp04_ParamLimits

0xe525,	// (0x0004f3bb) popup_mup_playback_window_g1_ParamLimits

0xe531,	// (0x0004f3c7) popup_mup_playback_window_t1_ParamLimits

0xe546,	// (0x0004f3dc) popup_mup_playback_window_t2_ParamLimits

0x008e,	// (0x00040f24) popup_mup_playback_window_t_ParamLimits

0x55b5,	// (0x0004644b) main_mup2_pane_g3_ParamLimits

0x55b5,	// (0x0004644b) main_mup2_pane_g3

0x2883,	// (0x00043719) popup_toolbar_window_cp04

0xe90c,	// (0x0004f7a2) popup_call2_audio_second_window_g3_ParamLimits

0xe90c,	// (0x0004f7a2) popup_call2_audio_second_window_g3

0xed16,	// (0x0004fbac) popup_call2_audio_first_window_g4_ParamLimits

0xed16,	// (0x0004fbac) popup_call2_audio_first_window_g4

0x45d4,	// (0x0004546a) popup_call2_audio_in_window_g4_ParamLimits

0x45d4,	// (0x0004546a) popup_call2_audio_in_window_g4

0x3f44,	// (0x00044dda) aid_area_sk_bg_cut_ParamLimits

0x3f44,	// (0x00044dda) aid_area_sk_bg_cut

0xe55b,	// (0x0004f3f1) aid_area_sk_bg_cut_2_ParamLimits

0xe55b,	// (0x0004f3f1) aid_area_sk_bg_cut_2

0x5af2,	// (0x00046988) aid_placing_details_win

0x5afa,	// (0x00046990) aid_placing_details_win_2

0x5d7e,	// (0x00046c14) camera2_autofocus_pane_g1_ParamLimits

0x1955,	// (0x000427eb) popup_fixed_preview_cale_window_ParamLimits

0x1955,	// (0x000427eb) popup_fixed_preview_cale_window

0xe337,	// (0x0004f1cd) navi_slider_pane_g3

0xe340,	// (0x0004f1d6) navi_slider_pane_g4

0xe349,	// (0x0004f1df) navi_slider_pane_g5

0xe337,	// (0x0004f1cd) navi_slider_pane_g6

0xaba3,	// (0x0004ba39) navi_slider_pane_g7

0xe45c,	// (0x0004f2f2) mup_scale_pane_g3

0xe465,	// (0x0004f2fb) mup_scale_pane_g4

0xe46e,	// (0x0004f304) mup_scale_pane_g5

0x3d06,	// (0x00044b9c) mup_scale_pane_g6

0x3d0f,	// (0x00044ba5) mup_scale_pane_g7

0xe337,	// (0x0004f1cd) cams2_slider_pane_g3

0x591f,	// (0x000467b5) cams2_slider_pane_g4

0xad1d,	// (0x0004bbb3) cams2_slider_pane_g5

0xe337,	// (0x0004f1cd) cams2_slider_pane_g6

0xad25,	// (0x0004bbbb) cams2_slider_pane_g7

0x5c06,	// (0x00046a9c) camera2_autofocus_pane_cp_g1

0x4c18,	// (0x00045aae) bg_popup_preview_window_pane_cp02_ParamLimits

0x4c18,	// (0x00045aae) bg_popup_preview_window_pane_cp02

0x66e4,	// (0x0004757a) list_fp_cale_pane_ParamLimits

0x66e4,	// (0x0004757a) list_fp_cale_pane

0x66f0,	// (0x00047586) popup_fixed_preview_cale_window_t1_ParamLimits

0x66f0,	// (0x00047586) popup_fixed_preview_cale_window_t1

0x6702,	// (0x00047598) popup_fixed_preview_cale_window_t2_ParamLimits

0x6702,	// (0x00047598) popup_fixed_preview_cale_window_t2

0x6717,	// (0x000475ad) popup_fixed_preview_cale_window_t3_ParamLimits

0x6717,	// (0x000475ad) popup_fixed_preview_cale_window_t3

0x0002,

0xf766,	// (0x000505fc) popup_fixed_preview_cale_window_t_ParamLimits

0xf766,	// (0x000505fc) popup_fixed_preview_cale_window_t

0x6738,	// (0x000475ce) list_single_fp_cale_pane_ParamLimits

0x6738,	// (0x000475ce) list_single_fp_cale_pane

0x674c,	// (0x000475e2) list_single_fp_cale_pane_g1_ParamLimits

0x674c,	// (0x000475e2) list_single_fp_cale_pane_g1

0x6758,	// (0x000475ee) list_single_fp_cale_pane_g2_ParamLimits

0x6758,	// (0x000475ee) list_single_fp_cale_pane_g2

0x0002,

0xf76d,	// (0x00050603) list_single_fp_cale_pane_g_ParamLimits

0xf76d,	// (0x00050603) list_single_fp_cale_pane_g

0x6771,	// (0x00047607) list_single_fp_cale_pane_t1_ParamLimits

0x6771,	// (0x00047607) list_single_fp_cale_pane_t1

0x6783,	// (0x00047619) list_single_fp_cale_pane_t2_ParamLimits

0x6783,	// (0x00047619) list_single_fp_cale_pane_t2

0x0001,

0xf774,	// (0x0005060a) list_single_fp_cale_pane_t_ParamLimits

0xf774,	// (0x0005060a) list_single_fp_cale_pane_t

0x0000,

0x0000,

0x0000,

0x0000,

0xa852,	// (0x0004b6e8) main_dialer_pane

0x67b6,	// (0x0004764c) aid_cell_size_keypad

0x67c0,	// (0x00047656) dialer_ne_pane

0x67c8,	// (0x0004765e) grid_dialer_command_1_pane

0x67d0,	// (0x00047666) grid_dialer_command_2_pane

0x67d8,	// (0x0004766e) grid_dialer_keypad_pane

0x67e8,	// (0x0004767e) bg_popup_call_pane_cp06_ParamLimits

0x67e8,	// (0x0004767e) bg_popup_call_pane_cp06

0x67f4,	// (0x0004768a) dialer_ne_clear_pane_ParamLimits

0x67f4,	// (0x0004768a) dialer_ne_clear_pane

0x6800,	// (0x00047696) dialer_ne_pane_g1

0x6808,	// (0x0004769e) dialer_ne_pane_t1_ParamLimits

0x6808,	// (0x0004769e) dialer_ne_pane_t1

0x681a,	// (0x000476b0) dialer_ne_pane_t2_ParamLimits

0x681a,	// (0x000476b0) dialer_ne_pane_t2

0x6844,	// (0x000476da) dialer_ne_pane_t3_ParamLimits

0x6844,	// (0x000476da) dialer_ne_pane_t3

0x0002,

0xf779,	// (0x0005060f) dialer_ne_pane_t_ParamLimits

0xf779,	// (0x0005060f) dialer_ne_pane_t

0x6874,	// (0x0004770a) dialer_ne_pane_t3_copy1_ParamLimits

0x6874,	// (0x0004770a) dialer_ne_pane_t3_copy1

0x68a3,	// (0x00047739) cell_dialer_keypad_pane_ParamLimits

0x68a3,	// (0x00047739) cell_dialer_keypad_pane

0x68b8,	// (0x0004774e) cell_dialer_command_1_pane_ParamLimits

0x68b8,	// (0x0004774e) cell_dialer_command_1_pane

0x68ce,	// (0x00047764) cell_dialer_command_2_pane_ParamLimits

0x68ce,	// (0x00047764) cell_dialer_command_2_pane

0x68dd,	// (0x00047773) bg_button_pane_cp02_ParamLimits

0x68dd,	// (0x00047773) bg_button_pane_cp02

0x68e9,	// (0x0004777f) cell_dialer_keypad_pane_g1_ParamLimits

0x68e9,	// (0x0004777f) cell_dialer_keypad_pane_g1

0x68dd,	// (0x00047773) bg_button_pane_cp03_ParamLimits

0x68dd,	// (0x00047773) bg_button_pane_cp03

0x68fe,	// (0x00047794) cell_dialer_command_1_pane_g1_ParamLimits

0x68fe,	// (0x00047794) cell_dialer_command_1_pane_g1

0x6912,	// (0x000477a8) bg_button_pane_cp04

0x691a,	// (0x000477b0) cell_dialer_command_2_pane_g1

0xd8f8,	// (0x0004e78e) bg_button_pane_cp06

0x6922,	// (0x000477b8) dialer_ne_clear_pane_g1

0xe242,	// (0x0004f0d8) navi_pane_g2

0x390b,	// (0x000447a1) navi_pane_g3

0x0002,

0xf3ca,	// (0x00050260) navi_pane_g

0xe2cf,	// (0x0004f165) navi_pane_mv_g2

0xe2f6,	// (0x0004f18c) navi_pane_mv_g5

0x3928,	// (0x000447be) navi_pane_mv_t1

0xd729,	// (0x0004e5bf) main_clock2_pane

0x697b,	// (0x00047811) main_clock2_list_pane_ParamLimits

0x697b,	// (0x00047811) main_clock2_list_pane

0x69c9,	// (0x0004785f) main_clock2_pane_t1_ParamLimits

0x69c9,	// (0x0004785f) main_clock2_pane_t1

0x6a03,	// (0x00047899) main_clock2_pane_t2_ParamLimits

0x6a03,	// (0x00047899) main_clock2_pane_t2

0x0004,

0xf785,	// (0x0005061b) main_clock2_pane_t_ParamLimits

0xf785,	// (0x0005061b) main_clock2_pane_t

0x6a97,	// (0x0004792d) popup_clock_analogue_window_cp03_ParamLimits

0x6a97,	// (0x0004792d) popup_clock_analogue_window_cp03

0x6abc,	// (0x00047952) popup_clock_digital_window_cp02_ParamLimits

0x6abc,	// (0x00047952) popup_clock_digital_window_cp02

0x6b2d,	// (0x000479c3) main_clock2_list_single_pane_ParamLimits

0x6b2d,	// (0x000479c3) main_clock2_list_single_pane

0xd8f8,	// (0x0004e78e) list_highlight_pane_cp05

0x6b3f,	// (0x000479d5) main_clock2_list_single_pane_t1

0x2883,	// (0x00043719) popup_toolbar_window_cp04_ParamLimits

0x5d8c,	// (0x00046c22) camera2_autofocus_pane_g2_ParamLimits

0x5d8c,	// (0x00046c22) camera2_autofocus_pane_g2

0x5d98,	// (0x00046c2e) camera2_autofocus_pane_g3_ParamLimits

0x5d98,	// (0x00046c2e) camera2_autofocus_pane_g3

0x5da4,	// (0x00046c3a) camera2_autofocus_pane_g4_ParamLimits

0x5da4,	// (0x00046c3a) camera2_autofocus_pane_g4

0x5db0,	// (0x00046c46) camera2_autofocus_pane_g5_ParamLimits

0x5db0,	// (0x00046c46) camera2_autofocus_pane_g5

0x0004,

0xf6c9,	// (0x0005055f) camera2_autofocus_pane_g_ParamLimits

0xf6c9,	// (0x0005055f) camera2_autofocus_pane_g

0x609a,	// (0x00046f30) camera2_autofocus_pane_cp_g2

0x60a2,	// (0x00046f38) camera2_autofocus_pane_cp_g3

0x60aa,	// (0x00046f40) camera2_autofocus_pane_cp_g4

0x60b2,	// (0x00046f48) camera2_autofocus_pane_cp_g5

0x0004,

0xf72f,	// (0x000505c5) camera2_autofocus_pane_cp_g

0x67e0,	// (0x00047676) popup_dialer_spcha_window

0xa852,	// (0x0004b6e8) bg_popup_sub_pane_cp07

0x6be5,	// (0x00047a7b) list_spcha_pane

0x6bed,	// (0x00047a83) list_single_spcha_pane_ParamLimits

0x6bed,	// (0x00047a83) list_single_spcha_pane

0xa852,	// (0x0004b6e8) list_highlight_pane_cp06

0x6bfe,	// (0x00047a94) list_single_spcha_pane_t1

0x437e,	// (0x00045214) popup_call2_audio_out_window_g4_ParamLimits

0x437e,	// (0x00045214) popup_call2_audio_out_window_g4

0xa852,	// (0x0004b6e8) main_imed2_pane

0xac3c,	// (0x0004bad2) popup_imed_adjust2_window

0x4d43,	// (0x00045bd9) popup_imed_trans_window_ParamLimits

0x4d43,	// (0x00045bd9) popup_imed_trans_window

0x5986,	// (0x0004681c) popup_blid_sat_info2_window_t1

0x5994,	// (0x0004682a) popup_blid_sat_info2_window_t2

0x000a,

0xf65e,	// (0x000504f4) popup_blid_sat_info2_window_t

0x6c0c,	// (0x00047aa2) aid_size_cell_colour_35

0x6c2c,	// (0x00047ac2) aid_size_cell_colour_112

0x6c4c,	// (0x00047ae2) aid_size_cell_effect

0x4c24,	// (0x00045aba) bg_tb_trans_pane_cp02

0xdde3,	// (0x0004ec79) heading_imed_pane

0x6c6c,	// (0x00047b02) listscroll_imed_pane

0x6c78,	// (0x00047b0e) heading_imed_pane_g1

0x6c80,	// (0x00047b16) heading_imed_pane_t1

0x6c8e,	// (0x00047b24) grid_imed_colour_35_pane_ParamLimits

0x6c8e,	// (0x00047b24) grid_imed_colour_35_pane

0x6ca1,	// (0x00047b37) grid_imed_effect_pane

0x6cb4,	// (0x00047b4a) list_imed_aspect_pane

0x6cbc,	// (0x00047b52) scroll_pane_cp027_ParamLimits

0x6cbc,	// (0x00047b52) scroll_pane_cp027

0x6cc8,	// (0x00047b5e) cell_imed_effect_pane_ParamLimits

0x6cc8,	// (0x00047b5e) cell_imed_effect_pane

0x6ced,	// (0x00047b83) cell_imed_colour_pane_ParamLimits

0x6ced,	// (0x00047b83) cell_imed_colour_pane

0x6d27,	// (0x00047bbd) cell_imed_colour_pane_g1_ParamLimits

0x6d27,	// (0x00047bbd) cell_imed_colour_pane_g1

0x6d38,	// (0x00047bce) hgihlgiht_grid_pane_cp016_ParamLimits

0x6d38,	// (0x00047bce) hgihlgiht_grid_pane_cp016

0x6d49,	// (0x00047bdf) cell_imed_effect_pane_g1

0x6d51,	// (0x00047be7) grid_highlight_pane_cp017

0x6d5a,	// (0x00047bf0) list_imed_single_pane_ParamLimits

0x6d5a,	// (0x00047bf0) list_imed_single_pane

0xa852,	// (0x0004b6e8) list_highlight_pane_cp07

0x6d6d,	// (0x00047c03) list_imed_aspect_pane_comp1_t1

0x4c24,	// (0x00045aba) bg_tb_trans_pane_cp05

0x6d8d,	// (0x00047c23) popup_imed_adjust2_window_g1

0x6db4,	// (0x00047c4a) popup_imed_adjust2_window_t1

0x6dcc,	// (0x00047c62) slider_imed_adjust_pane

0x6de0,	// (0x00047c76) slider_imed_adjust_pane_g1

0x6df0,	// (0x00047c86) slider_imed_adjust_pane_g2

0x6e00,	// (0x00047c96) slider_imed_adjust_pane_g3

0x6e11,	// (0x00047ca7) slider_imed_adjust_pane_g4

0x0003,

0xf7a2,	// (0x00050638) slider_imed_adjust_pane_g

0x6e22,	// (0x00047cb8) aid_size_cell_clipart2

0x6e2e,	// (0x00047cc4) grid_imed_clipart_pane

0x6e38,	// (0x00047cce) scroll_pane_cp031

0x6e40,	// (0x00047cd6) cell_imed_clipart_pane_ParamLimits

0x6e40,	// (0x00047cd6) cell_imed_clipart_pane

0x6e58,	// (0x00047cee) cell_imed_clipart_pane_g1

0xa852,	// (0x0004b6e8) grid_highlight_pane_cp014

0x69aa,	// (0x00047840) main_clock2_pane_g1_ParamLimits

0x69aa,	// (0x00047840) main_clock2_pane_g1

0x6ad8,	// (0x0004796e) aid_call2_pane_cp10

0x6aea,	// (0x00047980) aid_call_pane_cp10

0xe1d1,	// (0x0004f067) popup_clock_analogue_window_cp10_g1

0xe1d1,	// (0x0004f067) popup_clock_analogue_window_cp10_g2

0x6afc,	// (0x00047992) popup_clock_analogue_window_cp10_g3

0x6afc,	// (0x00047992) popup_clock_analogue_window_cp10_g4

0xe1d1,	// (0x0004f067) popup_clock_analogue_window_cp10_g5

0x0004,

0xf790,	// (0x00050626) popup_clock_analogue_window_cp10_g

0x6b0e,	// (0x000479a4) popup_clock_analogue_window_cp10_t1

0x6b4d,	// (0x000479e3) clock_digital_number_pane_cp10_ParamLimits

0x6b4d,	// (0x000479e3) clock_digital_number_pane_cp10

0x6b65,	// (0x000479fb) clock_digital_number_pane_cp11_ParamLimits

0x6b65,	// (0x000479fb) clock_digital_number_pane_cp11

0x6b7d,	// (0x00047a13) clock_digital_number_pane_cp12_ParamLimits

0x6b7d,	// (0x00047a13) clock_digital_number_pane_cp12

0x6b95,	// (0x00047a2b) clock_digital_number_pane_cp13_ParamLimits

0x6b95,	// (0x00047a2b) clock_digital_number_pane_cp13

0x6bad,	// (0x00047a43) clock_digital_separator_pane_cp10_ParamLimits

0x6bad,	// (0x00047a43) clock_digital_separator_pane_cp10

0x6bc5,	// (0x00047a5b) popup_clock_digital_window_cp02_t1_ParamLimits

0x6bc5,	// (0x00047a5b) popup_clock_digital_window_cp02_t1

0xd658,	// (0x0004e4ee) clock_digital_number_pane_cp10_g1

0xd658,	// (0x0004e4ee) clock_digital_number_pane_cp10_g2

0x0001,

0x03ae,	// (0x00041244) clock_digital_number_pane_cp10_g

0xd658,	// (0x0004e4ee) clock_digital_separator_pane_cp10_g1

0xd658,	// (0x0004e4ee) clock_digital_separator_pane_g2_cp10

0xe2fe,	// (0x0004f194) navi_pane_vded_g4

0xe307,	// (0x0004f19d) navi_pane_vded_g5

0xe310,	// (0x0004f1a6) navi_pane_vded_t1

0xa852,	// (0x0004b6e8) main_vded_pane

0x6e61,	// (0x00047cf7) main_vded_pane_g1

0x6e6b,	// (0x00047d01) main_vded_pane_g2

0x6e73,	// (0x00047d09) main_vded_pane_g3

0x0002,

0xf7ab,	// (0x00050641) main_vded_pane_g

0x6e7b,	// (0x00047d11) main_vded_pane_t1

0x6e89,	// (0x00047d1f) main_vded_pane_t2

0x0001,

0xf7b2,	// (0x00050648) main_vded_pane_t

0x6e97,	// (0x00047d2d) vded_slider_pane

0x6e9f,	// (0x00047d35) vded_video_pane

0x6ea7,	// (0x00047d3d) vded_video_pane_g1

0x6eb1,	// (0x00047d47) vded_video_pane_g2

0x5c06,	// (0x00046a9c) vded_video_pane_g3

0x0002,

0xf7b7,	// (0x0005064d) vded_video_pane_g

0x6eba,	// (0x00047d50) vded_slider_pane_g1

0x5875,	// (0x0004670b) vded_slider_pane_g2

0x6ec3,	// (0x00047d59) vded_slider_pane_g3

0x6ecc,	// (0x00047d62) vded_slider_pane_g4

0x6ed5,	// (0x00047d6b) vded_slider_pane_g5

0x0004,

0xf7be,	// (0x00050654) vded_slider_pane_g

0x65ed,	// (0x00047483) mup3_rocker_pane_ParamLimits

0x65ed,	// (0x00047483) mup3_rocker_pane

0x6ede,	// (0x00047d74) mup3_control_keys_pane_g1

0x6ee6,	// (0x00047d7c) mup3_control_keys_pane_g2

0x6eee,	// (0x00047d84) mup3_control_keys_pane_g3

0x6ef6,	// (0x00047d8c) mup3_control_keys_pane_g4

0x0003,

0xf7c9,	// (0x0005065f) mup3_control_keys_pane_g

0x1988,	// (0x0004281e) popup_toolbar2_fixed_window_cp01_ParamLimits

0x1988,	// (0x0004281e) popup_toolbar2_fixed_window_cp01

0x6623,	// (0x000474b9) popup_toolbar2_fixed_window_cp02_ParamLimits

0x6623,	// (0x000474b9) popup_toolbar2_fixed_window_cp02

0xea7e,	// (0x0004f914) popup_call2_audio_second_window_t4_ParamLimits

0xea7e,	// (0x0004f914) popup_call2_audio_second_window_t4

0xefc6,	// (0x0004fe5c) popup_call2_audio_first_window_t6_ParamLimits

0xefc6,	// (0x0004fe5c) popup_call2_audio_first_window_t6

0x4481,	// (0x00045317) popup_call2_audio_out_window_t6_ParamLimits

0x4481,	// (0x00045317) popup_call2_audio_out_window_t6

0xa852,	// (0x0004b6e8) main_vitu_pane

0x6f06,	// (0x00047d9c) aid_size_cell_itu_ParamLimits

0x6f06,	// (0x00047d9c) aid_size_cell_itu

0xef76,	// (0x0004fe0c) bg_popup_window_pane_cp08_ParamLimits

0xef76,	// (0x0004fe0c) bg_popup_window_pane_cp08

0x6f1c,	// (0x00047db2) field_vitu_entry_pane_ParamLimits

0x6f1c,	// (0x00047db2) field_vitu_entry_pane

0x6f2f,	// (0x00047dc5) grid_vitu_function_pane_ParamLimits

0x6f2f,	// (0x00047dc5) grid_vitu_function_pane

0x6f44,	// (0x00047dda) grid_vitu_itu_pane_ParamLimits

0x6f44,	// (0x00047dda) grid_vitu_itu_pane

0x6f5a,	// (0x00047df0) cell_vitu_itu_pane_ParamLimits

0x6f5a,	// (0x00047df0) cell_vitu_itu_pane

0x6f7c,	// (0x00047e12) cell_vitu_function_pane_ParamLimits

0x6f7c,	// (0x00047e12) cell_vitu_function_pane

0xef76,	// (0x0004fe0c) bg_popup_sub_pane_cp08_ParamLimits

0xef76,	// (0x0004fe0c) bg_popup_sub_pane_cp08

0x6fad,	// (0x00047e43) field_vitu_entry_pane_t1_ParamLimits

0x6fad,	// (0x00047e43) field_vitu_entry_pane_t1

0x6fc9,	// (0x00047e5f) field_vitu_entry_pane_t2_ParamLimits

0x6fc9,	// (0x00047e5f) field_vitu_entry_pane_t2

0x0001,

0xf7d7,	// (0x0005066d) field_vitu_entry_pane_t_ParamLimits

0xf7d7,	// (0x0005066d) field_vitu_entry_pane_t

0x6fe6,	// (0x00047e7c) bg_button_pane_cp05_ParamLimits

0x6fe6,	// (0x00047e7c) bg_button_pane_cp05

0x6ff4,	// (0x00047e8a) cell_vitu_itu_pane_g1

0x700c,	// (0x00047ea2) cell_vitu_itu_pane_t1_ParamLimits

0x700c,	// (0x00047ea2) cell_vitu_itu_pane_t1

0x701e,	// (0x00047eb4) cell_vitu_itu_pane_t2_ParamLimits

0x701e,	// (0x00047eb4) cell_vitu_itu_pane_t2

0x0002,

0xf7dc,	// (0x00050672) cell_vitu_itu_pane_t_ParamLimits

0xf7dc,	// (0x00050672) cell_vitu_itu_pane_t

0x7053,	// (0x00047ee9) bg_button_pane_cp07

0x705d,	// (0x00047ef3) cell_vitu_function_pane_g1

0xa8cd,	// (0x0004b763) main_calc_pane_g1

0x17ec,	// (0x00042682) aid_visual_content_pane

0xa852,	// (0x0004b6e8) main_vradio_pane

0x7066,	// (0x00047efc) main_vradio_pane_g1_ParamLimits

0x7066,	// (0x00047efc) main_vradio_pane_g1

0x707c,	// (0x00047f12) main_vradio_pane_g2_ParamLimits

0x707c,	// (0x00047f12) main_vradio_pane_g2

0x0001,

0xf7e3,	// (0x00050679) main_vradio_pane_g_ParamLimits

0xf7e3,	// (0x00050679) main_vradio_pane_g

0x7089,	// (0x00047f1f) main_vradio_pane_t1_ParamLimits

0x7089,	// (0x00047f1f) main_vradio_pane_t1

0x709e,	// (0x00047f34) main_vradio_pane_t2_ParamLimits

0x709e,	// (0x00047f34) main_vradio_pane_t2

0x70b3,	// (0x00047f49) main_vradio_pane_t3_ParamLimits

0x70b3,	// (0x00047f49) main_vradio_pane_t3

0x0002,

0xf7e8,	// (0x0005067e) main_vradio_pane_t_ParamLimits

0xf7e8,	// (0x0005067e) main_vradio_pane_t

0x70c5,	// (0x00047f5b) vradio_rocker_control_pane_ParamLimits

0x70c5,	// (0x00047f5b) vradio_rocker_control_pane

0x70d7,	// (0x00047f6d) vradio_station_info_pane_ParamLimits

0x70d7,	// (0x00047f6d) vradio_station_info_pane

0x70e7,	// (0x00047f7d) vradio_frequency_info_pane_ParamLimits

0x70e7,	// (0x00047f7d) vradio_frequency_info_pane

0x5c06,	// (0x00046a9c) vradio_station_info_pane_g1

0x70f6,	// (0x00047f8c) vradio_station_info_pane_t1_ParamLimits

0x70f6,	// (0x00047f8c) vradio_station_info_pane_t1

0x7118,	// (0x00047fae) vradio_station_info_pane_t2_ParamLimits

0x7118,	// (0x00047fae) vradio_station_info_pane_t2

0x0001,

0xf7ef,	// (0x00050685) vradio_station_info_pane_t_ParamLimits

0xf7ef,	// (0x00050685) vradio_station_info_pane_t

0x712a,	// (0x00047fc0) vradio_tuning_pane

0x7132,	// (0x00047fc8) vradio_rocker_control_pane_g1

0x713a,	// (0x00047fd0) vradio_rocker_control_pane_g2

0x7142,	// (0x00047fd8) vradio_rocker_control_pane_g3

0x714a,	// (0x00047fe0) vradio_rocker_control_pane_g4

0x7152,	// (0x00047fe8) vradio_rocker_control_pane_g5

0x0004,

0xf7f4,	// (0x0005068a) vradio_rocker_control_pane_g

0x715a,	// (0x00047ff0) vradio_frequency_info_pane_g1

0x7164,	// (0x00047ffa) vradio_frequency_info_pane_t1_ParamLimits

0x7164,	// (0x00047ffa) vradio_frequency_info_pane_t1

0x7178,	// (0x0004800e) vradio_tuning_pane_g1

0x7181,	// (0x00048017) vradio_tuning_pane_t1

0xa884,	// (0x0004b71a) area_side_right_pane_ParamLimits

0xa884,	// (0x0004b71a) area_side_right_pane

0x4bd7,	// (0x00045a6d) status_small_pane_g1

0x4bdf,	// (0x00045a75) status_small_pane_g2

0x4be8,	// (0x00045a7e) status_small_pane_g3

0x4bf1,	// (0x00045a87) status_small_pane_g4

0x0003,

0xf5b4,	// (0x0005044a) status_small_pane_g

0x4bfa,	// (0x00045a90) status_small_pane_t1

0xa852,	// (0x0004b6e8) main_video3_pane

0x7190,	// (0x00048026) cams_zoom_vslider_pane

0x7198,	// (0x0004802e) image3_wide_pane_ParamLimits

0x7198,	// (0x0004802e) image3_wide_pane

0x71b2,	// (0x00048048) image3_wide_small_pane

0x71bc,	// (0x00048052) main_video3_pane_g1_ParamLimits

0x71bc,	// (0x00048052) main_video3_pane_g1

0x71d8,	// (0x0004806e) main_video3_pane_g2_ParamLimits

0x71d8,	// (0x0004806e) main_video3_pane_g2

0x0001,

0xf7ff,	// (0x00050695) main_video3_pane_g_ParamLimits

0xf7ff,	// (0x00050695) main_video3_pane_g

0x71f4,	// (0x0004808a) main_video3_pane_t1_ParamLimits

0x71f4,	// (0x0004808a) main_video3_pane_t1

0x721f,	// (0x000480b5) main_video3_pane_t2_ParamLimits

0x721f,	// (0x000480b5) main_video3_pane_t2

0x724a,	// (0x000480e0) main_video3_pane_t3_ParamLimits

0x724a,	// (0x000480e0) main_video3_pane_t3

0x0002,

0xf804,	// (0x0005069a) main_video3_pane_t_ParamLimits

0xf804,	// (0x0005069a) main_video3_pane_t

0x7275,	// (0x0004810b) cams_zoom_vslider_pane_g1

0x727e,	// (0x00048114) cams_zoom_vslider_pane_g2

0x0001,

0xf80b,	// (0x000506a1) cams_zoom_vslider_pane_g

0x7286,	// (0x0004811c) small_slider_vertical_pane

0x5c06,	// (0x00046a9c) small_slider_vertical_pane_g1

0x5c06,	// (0x00046a9c) small_slider_vertical_pane_g2

0x728e,	// (0x00048124) small_slider_vertical_pane_g3

0x0002,

0xf810,	// (0x000506a6) small_slider_vertical_pane_g

0xa852,	// (0x0004b6e8) main_hwr_training_pane

0x7297,	// (0x0004812d) hwr_training_instruct_pane_ParamLimits

0x7297,	// (0x0004812d) hwr_training_instruct_pane

0x72b1,	// (0x00048147) hwr_training_navi_pane_ParamLimits

0x72b1,	// (0x00048147) hwr_training_navi_pane

0x72c8,	// (0x0004815e) hwr_training_write_pane_ParamLimits

0x72c8,	// (0x0004815e) hwr_training_write_pane

0xa852,	// (0x0004b6e8) bg_frame_shadow_pane

0x7310,	// (0x000481a6) hwr_training_write_pane_g1

0x7318,	// (0x000481ae) hwr_training_write_pane_g2

0x7320,	// (0x000481b6) hwr_training_write_pane_g3

0x7328,	// (0x000481be) hwr_training_write_pane_g4

0x7330,	// (0x000481c6) hwr_training_write_pane_g5

0x7338,	// (0x000481ce) hwr_training_write_pane_g6

0x7340,	// (0x000481d6) hwr_training_write_pane_g7

0x0006,

0xf817,	// (0x000506ad) hwr_training_write_pane_g

0xada2,	// (0x0004bc38) hwr_training_navi_pane_g1_ParamLimits

0xada2,	// (0x0004bc38) hwr_training_navi_pane_g1

0xadb4,	// (0x0004bc4a) hwr_training_navi_pane_g2_ParamLimits

0xadb4,	// (0x0004bc4a) hwr_training_navi_pane_g2

0xadc6,	// (0x0004bc5c) hwr_training_navi_pane_g3_ParamLimits

0xadc6,	// (0x0004bc5c) hwr_training_navi_pane_g3

0xadd6,	// (0x0004bc6c) hwr_training_navi_pane_g4_ParamLimits

0xadd6,	// (0x0004bc6c) hwr_training_navi_pane_g4

0x0004,

0xf826,	// (0x000506bc) hwr_training_navi_pane_g_ParamLimits

0xf826,	// (0x000506bc) hwr_training_navi_pane_g

0xade3,	// (0x0004bc79) hwr_training_navi_pane_t1

0x7355,	// (0x000481eb) list_single_hwr_training_instruct_pane_ParamLimits

0x7355,	// (0x000481eb) list_single_hwr_training_instruct_pane

0x736d,	// (0x00048203) list_single_hwr_training_instruct_pane_t1

0x5b46,	// (0x000469dc) bg_frame_shadow_pane_g1

0x737c,	// (0x00048212) bg_frame_shadow_pane_g2

0x7384,	// (0x0004821a) bg_frame_shadow_pane_g3

0x738c,	// (0x00048222) bg_frame_shadow_pane_g4

0x7394,	// (0x0004822a) bg_frame_shadow_pane_g5

0x739c,	// (0x00048232) bg_frame_shadow_pane_g6

0x73a4,	// (0x0004823a) bg_frame_shadow_pane_g7

0xd7f4,	// (0x0004e68a) bg_frame_shadow_pane_g8

0x0007,

0xf831,	// (0x000506c7) bg_frame_shadow_pane_g

0xa852,	// (0x0004b6e8) main_video_tele_dialer_pane

0x73ac,	// (0x00048242) aid_size_cell_video_keypad_ParamLimits

0x73ac,	// (0x00048242) aid_size_cell_video_keypad

0x73c6,	// (0x0004825c) grid_video_dialer_keypad_pane_ParamLimits

0x73c6,	// (0x0004825c) grid_video_dialer_keypad_pane

0x7408,	// (0x0004829e) video_down_pane_cp_ParamLimits

0x7408,	// (0x0004829e) video_down_pane_cp

0x7438,	// (0x000482ce) cell_video_dialer_keypad_pane_ParamLimits

0x7438,	// (0x000482ce) cell_video_dialer_keypad_pane

0x745a,	// (0x000482f0) bg_button_pane_cp08_ParamLimits

0x745a,	// (0x000482f0) bg_button_pane_cp08

0x7466,	// (0x000482fc) cell_video_dialer_keypad_pane_g1_ParamLimits

0x7466,	// (0x000482fc) cell_video_dialer_keypad_pane_g1

0x65d7,	// (0x0004746d) mup3_rocker2_pane_ParamLimits

0x65d7,	// (0x0004746d) mup3_rocker2_pane

0x5c06,	// (0x00046a9c) mup3_rocker2_pane_g1

0x4c32,	// (0x00045ac8) main_dialer2_pane

0xa852,	// (0x0004b6e8) main_mp4_pane

0xae01,	// (0x0004bc97) main_mp4_pane_g1_ParamLimits

0xae01,	// (0x0004bc97) main_mp4_pane_g1

0xae01,	// (0x0004bc97) main_mp4_pane_g2_ParamLimits

0xae01,	// (0x0004bc97) main_mp4_pane_g2

0x74a1,	// (0x00048337) main_mp4_pane_g3_ParamLimits

0x74a1,	// (0x00048337) main_mp4_pane_g3

0xae0f,	// (0x0004bca5) main_mp4_pane_g4_ParamLimits

0xae0f,	// (0x0004bca5) main_mp4_pane_g4

0xae3d,	// (0x0004bcd3) main_mp4_pane_g5_ParamLimits

0xae3d,	// (0x0004bcd3) main_mp4_pane_g5

0x0007,

0xf851,	// (0x000506e7) main_mp4_pane_g_ParamLimits

0xf851,	// (0x000506e7) main_mp4_pane_g

0xaeb1,	// (0x0004bd47) main_mp4_pane_t1_ParamLimits

0xaeb1,	// (0x0004bd47) main_mp4_pane_t1

0xaf09,	// (0x0004bd9f) main_mp4_pane_t2_ParamLimits

0xaf09,	// (0x0004bd9f) main_mp4_pane_t2

0x74d1,	// (0x00048367) main_mp4_pane_t3_ParamLimits

0x74d1,	// (0x00048367) main_mp4_pane_t3

0xaf5b,	// (0x0004bdf1) main_mp4_pane_t4_ParamLimits

0xaf5b,	// (0x0004bdf1) main_mp4_pane_t4

0x0003,

0xf862,	// (0x000506f8) main_mp4_pane_t_ParamLimits

0xf862,	// (0x000506f8) main_mp4_pane_t

0xaf9b,	// (0x0004be31) mp4_progress_pane_ParamLimits

0xaf9b,	// (0x0004be31) mp4_progress_pane

0xafdf,	// (0x0004be75) mp4_rocker_pane_ParamLimits

0xafdf,	// (0x0004be75) mp4_rocker_pane

0x74ff,	// (0x00048395) mp4_progress_pane_t1

0x7516,	// (0x000483ac) mp4_progress_pane_t2

0x0001,

0xf86b,	// (0x00050701) mp4_progress_pane_t

0x752d,	// (0x000483c3) mup_progress_pane_cp04

0x5c06,	// (0x00046a9c) mp4_rocker_pane_g1

0x7539,	// (0x000483cf) aid_cell_size_keypad2_ParamLimits

0x7539,	// (0x000483cf) aid_cell_size_keypad2

0x7553,	// (0x000483e9) dialer2_ne_pane_ParamLimits

0x7553,	// (0x000483e9) dialer2_ne_pane

0x7568,	// (0x000483fe) grid_dialer2_keypad_pane_ParamLimits

0x7568,	// (0x000483fe) grid_dialer2_keypad_pane

0x592f,	// (0x000467c5) bg_popup_call_pane_cp07_ParamLimits

0x592f,	// (0x000467c5) bg_popup_call_pane_cp07

0x757e,	// (0x00048414) dialer2_ne_pane_t1_ParamLimits

0x757e,	// (0x00048414) dialer2_ne_pane_t1

0x75cd,	// (0x00048463) cell_dialer2_keypad_pane_ParamLimits

0x75cd,	// (0x00048463) cell_dialer2_keypad_pane

0x75ef,	// (0x00048485) bg_button_pane_pane_cp04_ParamLimits

0x75ef,	// (0x00048485) bg_button_pane_pane_cp04

0x75fb,	// (0x00048491) cell_dialer2_keypad_pane_g1_ParamLimits

0x75fb,	// (0x00048491) cell_dialer2_keypad_pane_g1

0x2771,	// (0x00043607) aid_placing_vt_set_content_ParamLimits

0x2771,	// (0x00043607) aid_placing_vt_set_content

0x2793,	// (0x00043629) aid_placing_vt_set_title_ParamLimits

0x2793,	// (0x00043629) aid_placing_vt_set_title

0xa852,	// (0x0004b6e8) main_image3_pane

0x76a2,	// (0x00048538) area_side_right_pane_cp01_ParamLimits

0x76a2,	// (0x00048538) area_side_right_pane_cp01

0xae01,	// (0x0004bc97) main_image3_pane_g1_ParamLimits

0xae01,	// (0x0004bc97) main_image3_pane_g1

0x76b9,	// (0x0004854f) main_image3_pane_g2_ParamLimits

0x76b9,	// (0x0004854f) main_image3_pane_g2

0x76df,	// (0x00048575) main_image3_pane_g3_ParamLimits

0x76df,	// (0x00048575) main_image3_pane_g3

0x7705,	// (0x0004859b) main_image3_pane_g4_ParamLimits

0x7705,	// (0x0004859b) main_image3_pane_g4

0x0003,

0xf87a,	// (0x00050710) main_image3_pane_g_ParamLimits

0xf87a,	// (0x00050710) main_image3_pane_g

0x772b,	// (0x000485c1) main_image3_pane_t1_ParamLimits

0x772b,	// (0x000485c1) main_image3_pane_t1

0x7783,	// (0x00048619) main_image3_pane_t2_ParamLimits

0x7783,	// (0x00048619) main_image3_pane_t2

0x77d5,	// (0x0004866b) main_image3_pane_t3_ParamLimits

0x77d5,	// (0x0004866b) main_image3_pane_t3

0x0003,

0xf883,	// (0x00050719) main_image3_pane_t_ParamLimits

0xf883,	// (0x00050719) main_image3_pane_t

0xef76,	// (0x0004fe0c) grid_sctrl_middle_pane_cp01_ParamLimits

0xef76,	// (0x0004fe0c) grid_sctrl_middle_pane_cp01

0x7855,	// (0x000486eb) cell_sctrl_middle_pane_cp01_ParamLimits

0x7855,	// (0x000486eb) cell_sctrl_middle_pane_cp01

0x7872,	// (0x00048708) cell_sctrl_middle_pane_cp01_g1_ParamLimits

0x7872,	// (0x00048708) cell_sctrl_middle_pane_cp01_g1

0xa852,	// (0x0004b6e8) main_call4_pane

0x7888,	// (0x0004871e) aid_size_button_call4_ParamLimits

0x7888,	// (0x0004871e) aid_size_button_call4

0x78b5,	// (0x0004874b) call4_windows_pane_ParamLimits

0x78b5,	// (0x0004874b) call4_windows_pane

0x78cb,	// (0x00048761) grid_call4_button_pane_ParamLimits

0x78cb,	// (0x00048761) grid_call4_button_pane

0x78f2,	// (0x00048788) call4_windows_conf_pane

0x7905,	// (0x0004879b) popup_call4_audio_first_window_ParamLimits

0x7905,	// (0x0004879b) popup_call4_audio_first_window

0x7945,	// (0x000487db) popup_call4_audio_second_window_ParamLimits

0x7945,	// (0x000487db) popup_call4_audio_second_window

0x7957,	// (0x000487ed) popup_call4_audio_wait_window_ParamLimits

0x7957,	// (0x000487ed) popup_call4_audio_wait_window

0x7963,	// (0x000487f9) cell_call4_button_pane_ParamLimits

0x7963,	// (0x000487f9) cell_call4_button_pane

0x7988,	// (0x0004881e) bg_button_pane_cp09_ParamLimits

0x7988,	// (0x0004881e) bg_button_pane_cp09

0x7994,	// (0x0004882a) cell_call4_button_pane_g1_ParamLimits

0x7994,	// (0x0004882a) cell_call4_button_pane_g1

0x79ba,	// (0x00048850) cell_call4_button_pane_t1_ParamLimits

0x79ba,	// (0x00048850) cell_call4_button_pane_t1

0x79ec,	// (0x00048882) popup_call4_audio_conf_window_ParamLimits

0x79ec,	// (0x00048882) popup_call4_audio_conf_window

0x6639,	// (0x000474cf) mup3_progress_pane_t1_ParamLimits

0x6657,	// (0x000474ed) mup3_progress_pane_t2_ParamLimits

0x6675,	// (0x0004750b) mup3_progress_pane_t3_ParamLimits

0xf758,	// (0x000505ee) mup3_progress_pane_t_ParamLimits

0x6692,	// (0x00047528) mup_progress_pane_cp03_ParamLimits

0x6efe,	// (0x00047d94) mup3_control_keys_pane_g4_copy1

0xafc9,	// (0x0004be5f) mp4_rocker2_pane_ParamLimits

0xafc9,	// (0x0004be5f) mp4_rocker2_pane

0x7a00,	// (0x00048896) mp4_rocker2_pane_g1

0x7a08,	// (0x0004889e) mp4_rocker2_pane_g2

0xb061,	// (0x0004bef7) mp4_rocker2_pane_g3

0xb069,	// (0x0004beff) mp4_rocker2_pane_g4

0xb071,	// (0x0004bf07) mp4_rocker2_pane_g5

0x0004,

0xf88c,	// (0x00050722) mp4_rocker2_pane_g

0xa852,	// (0x0004b6e8) main_camera4_pane

0xa852,	// (0x0004b6e8) main_video4_pane

0x73da,	// (0x00048270) main_video_tele_dialer_pane_t1_ParamLimits

0x73da,	// (0x00048270) main_video_tele_dialer_pane_t1

0x73f1,	// (0x00048287) main_video_tele_dialer_pane_t2_ParamLimits

0x73f1,	// (0x00048287) main_video_tele_dialer_pane_t2

0x0001,

0xf842,	// (0x000506d8) main_video_tele_dialer_pane_t_ParamLimits

0xf842,	// (0x000506d8) main_video_tele_dialer_pane_t

0x7a24,	// (0x000488ba) cam4_autofocus_pane_ParamLimits

0x7a24,	// (0x000488ba) cam4_autofocus_pane

0x7a38,	// (0x000488ce) cam4_image_uncrop_pane_ParamLimits

0x7a38,	// (0x000488ce) cam4_image_uncrop_pane

0x7a4f,	// (0x000488e5) cam4_indicators_pane_ParamLimits

0x7a4f,	// (0x000488e5) cam4_indicators_pane

0x7a73,	// (0x00048909) main_camera4_pane_g1_ParamLimits

0x7a73,	// (0x00048909) main_camera4_pane_g1

0x7a7f,	// (0x00048915) main_camera4_pane_g2_ParamLimits

0x7a7f,	// (0x00048915) main_camera4_pane_g2

0x7a7f,	// (0x00048915) main_camera4_pane_g3_ParamLimits

0x7a7f,	// (0x00048915) main_camera4_pane_g3

0x7a8b,	// (0x00048921) main_camera4_pane_g4_ParamLimits

0x7a8b,	// (0x00048921) main_camera4_pane_g4

0x7a97,	// (0x0004892d) main_camera4_pane_g5_ParamLimits

0x7a97,	// (0x0004892d) main_camera4_pane_g5

0x0005,

0xf897,	// (0x0005072d) main_camera4_pane_g_ParamLimits

0xf897,	// (0x0005072d) main_camera4_pane_g

0x7ab4,	// (0x0004894a) main_camera4_pane_t1_ParamLimits

0x7ab4,	// (0x0004894a) main_camera4_pane_t1

0x5ed1,	// (0x00046d67) bg_tb_trans_pane_cp06

0xb09b,	// (0x0004bf31) cam4_indicators_pane_g1

0xb0ab,	// (0x0004bf41) cam4_indicators_pane_g2

0x0002,

0xf8b2,	// (0x00050748) cam4_indicators_pane_g

0xb0cb,	// (0x0004bf61) cam4_indicators_pane_t1

0x7b1b,	// (0x000489b1) main_video4_pane_g1_ParamLimits

0x7b1b,	// (0x000489b1) main_video4_pane_g1

0x7b2d,	// (0x000489c3) main_video4_pane_g2_ParamLimits

0x7b2d,	// (0x000489c3) main_video4_pane_g2

0x7b2d,	// (0x000489c3) main_video4_pane_g3_ParamLimits

0x7b2d,	// (0x000489c3) main_video4_pane_g3

0x7b3c,	// (0x000489d2) main_video4_pane_g4_ParamLimits

0x7b3c,	// (0x000489d2) main_video4_pane_g4

0x0004,

0xf8b9,	// (0x0005074f) main_video4_pane_g_ParamLimits

0xf8b9,	// (0x0005074f) main_video4_pane_g

0x7b5a,	// (0x000489f0) vid4_indicators_pane_ParamLimits

0x7b5a,	// (0x000489f0) vid4_indicators_pane

0x7b82,	// (0x00048a18) video4_image_uncrop_cif_pane_ParamLimits

0x7b82,	// (0x00048a18) video4_image_uncrop_cif_pane

0x7b9a,	// (0x00048a30) video4_image_uncrop_nhd_pane_ParamLimits

0x7b9a,	// (0x00048a30) video4_image_uncrop_nhd_pane

0x7bae,	// (0x00048a44) video4_image_uncrop_vga_pane_ParamLimits

0x7bae,	// (0x00048a44) video4_image_uncrop_vga_pane

0xef76,	// (0x0004fe0c) bg_tb_trans_pane_cp07

0xb09b,	// (0x0004bf31) vid4_indicators_pane_g1

0xb0ed,	// (0x0004bf83) vid4_indicators_pane_g2

0xb0fd,	// (0x0004bf93) vid4_indicators_pane_g3

0x0004,

0xf8c4,	// (0x0005075a) vid4_indicators_pane_g

0xb12a,	// (0x0004bfc0) vid4_indicators_pane_t1

0x7bc6,	// (0x00048a5c) cam4_autofocus_pane_g1

0x7bce,	// (0x00048a64) cam4_autofocus_pane_g2

0x7bd6,	// (0x00048a6c) cam4_autofocus_pane_g3

0x0002,

0xf8cf,	// (0x00050765) cam4_autofocus_pane_g

0x7bde,	// (0x00048a74) cam4_autofocus_pane_g3_copy1

0x741c,	// (0x000482b2) video_down_pane_cp_t1

0x742a,	// (0x000482c0) video_down_pane_cp_t2

0x0001,

0xf847,	// (0x000506dd) video_down_pane_cp_t

0xef76,	// (0x0004fe0c) popup_vitu2_window_ParamLimits

0xef76,	// (0x0004fe0c) popup_vitu2_window

0x7be6,	// (0x00048a7c) aid_size_cell2_itu2_ParamLimits

0x7be6,	// (0x00048a7c) aid_size_cell2_itu2

0x7c0c,	// (0x00048aa2) aid_size_cell_itu2_ParamLimits

0x7c0c,	// (0x00048aa2) aid_size_cell_itu2

0x7c5d,	// (0x00048af3) bg_popup_window_pane_cp09_ParamLimits

0x7c5d,	// (0x00048af3) bg_popup_window_pane_cp09

0x7c6b,	// (0x00048b01) field_vitu2_entry_pane_ParamLimits

0x7c6b,	// (0x00048b01) field_vitu2_entry_pane

0x7c82,	// (0x00048b18) grid_vitu2_function_pane_ParamLimits

0x7c82,	// (0x00048b18) grid_vitu2_function_pane

0x7cb7,	// (0x00048b4d) grid_vitu2_itu_pane_ParamLimits

0x7cb7,	// (0x00048b4d) grid_vitu2_itu_pane

0x7d1e,	// (0x00048bb4) cell_vitu2_itu_pane_ParamLimits

0x7d1e,	// (0x00048bb4) cell_vitu2_itu_pane

0x7d46,	// (0x00048bdc) cell_vitu2_function_pane_ParamLimits

0x7d46,	// (0x00048bdc) cell_vitu2_function_pane

0x7d85,	// (0x00048c1b) bg_popup_call_pane_cp08_ParamLimits

0x7d85,	// (0x00048c1b) bg_popup_call_pane_cp08

0x7d9c,	// (0x00048c32) field_vitu2_entry_pane_g1

0x7da8,	// (0x00048c3e) field_vitu2_entry_pane_g2

0x0002,

0xf8d6,	// (0x0005076c) field_vitu2_entry_pane_g

0x0c90,	// (0x00041b26) field_vitu2_entry_pane_t1_ParamLimits

0x0c90,	// (0x00041b26) field_vitu2_entry_pane_t1

0xb144,	// (0x0004bfda) field_vitu2_entry_pane_t2_ParamLimits

0xb144,	// (0x0004bfda) field_vitu2_entry_pane_t2

0x0001,

0xf8dd,	// (0x00050773) field_vitu2_entry_pane_t_ParamLimits

0xf8dd,	// (0x00050773) field_vitu2_entry_pane_t

0x7dca,	// (0x00048c60) bg_button_pane_cp010_ParamLimits

0x7dca,	// (0x00048c60) bg_button_pane_cp010

0xb161,	// (0x0004bff7) cell_vitu2_itu_pane_g1

0x7de6,	// (0x00048c7c) cell_vitu2_itu_pane_t1_ParamLimits

0x7de6,	// (0x00048c7c) cell_vitu2_itu_pane_t1

0x0cbe,	// (0x00041b54) cell_vitu2_itu_pane_t2_ParamLimits

0x0cbe,	// (0x00041b54) cell_vitu2_itu_pane_t2

0x0002,

0xf8e7,	// (0x0005077d) cell_vitu2_itu_pane_t_ParamLimits

0xf8e7,	// (0x0005077d) cell_vitu2_itu_pane_t

0xef76,	// (0x0004fe0c) bg_button_pane_cp011

0x7e44,	// (0x00048cda) cell_vitu2_function_pane_g1

0xa852,	// (0x0004b6e8) main_myfav_hc_pane

0x7821,	// (0x000486b7) popup_image3_note_pane_ParamLimits

0x7821,	// (0x000486b7) popup_image3_note_pane

0x783b,	// (0x000486d1) popup_image3_tool_bar_pane_ParamLimits

0x783b,	// (0x000486d1) popup_image3_tool_bar_pane

0x0d4c,	// (0x00041be2) cell_vitu2_itu_pane_t3_ParamLimits

0x0d4c,	// (0x00041be2) cell_vitu2_itu_pane_t3

0xa852,	// (0x0004b6e8) bg_popup_trans_pane

0x7e57,	// (0x00048ced) grid_image3_tool_bar_pane

0x7e61,	// (0x00048cf7) bg_popup_trans_pane_g1

0xdbb1,	// (0x0004ea47) bg_popup_trans_pane_g2

0x7e69,	// (0x00048cff) bg_popup_trans_pane_g3

0x7e71,	// (0x00048d07) bg_popup_trans_pane_g4

0x7e79,	// (0x00048d0f) bg_popup_trans_pane_g5

0x7e81,	// (0x00048d17) bg_popup_trans_pane_g6

0x7e89,	// (0x00048d1f) bg_popup_trans_pane_g7

0x7e91,	// (0x00048d27) bg_popup_trans_pane_g8

0xdb91,	// (0x0004ea27) bg_popup_trans_pane_g9

0x0008,

0xf8ee,	// (0x00050784) bg_popup_trans_pane_g

0x7e99,	// (0x00048d2f) cell_image3_tool_bar_pane_ParamLimits

0x7e99,	// (0x00048d2f) cell_image3_tool_bar_pane

0x5c06,	// (0x00046a9c) cell_image3_tool_bar_pane_g1

0xa852,	// (0x0004b6e8) bg_popup_trans_pane_cp1

0x7ead,	// (0x00048d43) popup_image3_note_pane_t1

0x7ebb,	// (0x00048d51) popup_image3_note_pane_t2

0x7ec9,	// (0x00048d5f) popup_image3_note_pane_t3

0x0002,

0xf901,	// (0x00050797) popup_image3_note_pane_t

0xb173,	// (0x0004c009) popup_image3_note_pane_t3_copy1

0x7ed7,	// (0x00048d6d) bg_myfav_hc_instruction_pane_ParamLimits

0x7ed7,	// (0x00048d6d) bg_myfav_hc_instruction_pane

0x7ee9,	// (0x00048d7f) cell_myfav_contact_pane_ParamLimits

0x7ee9,	// (0x00048d7f) cell_myfav_contact_pane

0x7f03,	// (0x00048d99) cell_myfav_contact_pane_cp1_ParamLimits

0x7f03,	// (0x00048d99) cell_myfav_contact_pane_cp1

0x7f19,	// (0x00048daf) cell_myfav_contact_pane_cp2_ParamLimits

0x7f19,	// (0x00048daf) cell_myfav_contact_pane_cp2

0x7f2f,	// (0x00048dc5) cell_myfav_contact_pane_cp3_ParamLimits

0x7f2f,	// (0x00048dc5) cell_myfav_contact_pane_cp3

0x7f44,	// (0x00048dda) cell_myfav_contact_pane_cp4_ParamLimits

0x7f44,	// (0x00048dda) cell_myfav_contact_pane_cp4

0x7f58,	// (0x00048dee) cell_myfav_contact_pane_cp5_ParamLimits

0x7f58,	// (0x00048dee) cell_myfav_contact_pane_cp5

0x7f6c,	// (0x00048e02) cell_myfav_contact_pane_cp6_ParamLimits

0x7f6c,	// (0x00048e02) cell_myfav_contact_pane_cp6

0x7f80,	// (0x00048e16) cell_myfav_contact_pane_cp7_ParamLimits

0x7f80,	// (0x00048e16) cell_myfav_contact_pane_cp7

0xb181,	// (0x0004c017) listscroll_gen_pane_cp05

0x7f98,	// (0x00048e2e) main_myfav_hc_pane_g1_ParamLimits

0x7f98,	// (0x00048e2e) main_myfav_hc_pane_g1

0x7fae,	// (0x00048e44) main_myfav_hc_pane_g2_ParamLimits

0x7fae,	// (0x00048e44) main_myfav_hc_pane_g2

0x0002,

0xf908,	// (0x0005079e) main_myfav_hc_pane_g_ParamLimits

0xf908,	// (0x0005079e) main_myfav_hc_pane_g

0x7fd8,	// (0x00048e6e) main_myfav_hc_pane_t1_ParamLimits

0x7fd8,	// (0x00048e6e) main_myfav_hc_pane_t1

0xb18a,	// (0x0004c020) main_myfav_hc_pane_t2_ParamLimits

0xb18a,	// (0x0004c020) main_myfav_hc_pane_t2

0xb19c,	// (0x0004c032) main_myfav_hc_pane_t3_ParamLimits

0xb19c,	// (0x0004c032) main_myfav_hc_pane_t3

0x7fed,	// (0x00048e83) main_myfav_hc_pane_t4_ParamLimits

0x7fed,	// (0x00048e83) main_myfav_hc_pane_t4

0x0004,

0xf90f,	// (0x000507a5) main_myfav_hc_pane_t_ParamLimits

0xf90f,	// (0x000507a5) main_myfav_hc_pane_t

0x5c06,	// (0x00046a9c) bg_myfav_hc_instruction_pane_g1

0xb1ae,	// (0x0004c044) cell_myfav_contact_pane_g1_ParamLimits

0xb1ae,	// (0x0004c044) cell_myfav_contact_pane_g1

0xb1ae,	// (0x0004c044) cell_myfav_contact_pane_g2_ParamLimits

0xb1ae,	// (0x0004c044) cell_myfav_contact_pane_g2

0xb1ba,	// (0x0004c050) cell_myfav_contact_pane_g3_ParamLimits

0xb1ba,	// (0x0004c050) cell_myfav_contact_pane_g3

0x6236,	// (0x000470cc) cell_myfav_contact_pane_g4_ParamLimits

0x6236,	// (0x000470cc) cell_myfav_contact_pane_g4

0xb1c7,	// (0x0004c05d) cell_myfav_contact_pane_g5_ParamLimits

0xb1c7,	// (0x0004c05d) cell_myfav_contact_pane_g5

0x0004,

0xf91a,	// (0x000507b0) cell_myfav_contact_pane_g_ParamLimits

0xf91a,	// (0x000507b0) cell_myfav_contact_pane_g

0x7fc4,	// (0x00048e5a) main_myfav_hc_pane_g3_ParamLimits

0x7fc4,	// (0x00048e5a) main_myfav_hc_pane_g3

0x190e,	// (0x000427a4) popup_adpt_find_window

0x8011,	// (0x00048ea7) afind_page_pane_ParamLimits

0x8011,	// (0x00048ea7) afind_page_pane

0x8026,	// (0x00048ebc) aid_size_cell_afind_ParamLimits

0x8026,	// (0x00048ebc) aid_size_cell_afind

0x8044,	// (0x00048eda) bg_popup_sub_pane_cp09_ParamLimits

0x8044,	// (0x00048eda) bg_popup_sub_pane_cp09

0x8051,	// (0x00048ee7) find_pane_cp01_ParamLimits

0x8051,	// (0x00048ee7) find_pane_cp01

0xb1d3,	// (0x0004c069) grid_afind_control_pane_ParamLimits

0xb1d3,	// (0x0004c069) grid_afind_control_pane

0x805e,	// (0x00048ef4) grid_afind_pane_ParamLimits

0x805e,	// (0x00048ef4) grid_afind_pane

0x807c,	// (0x00048f12) cell_afind_pane_ParamLimits

0x807c,	// (0x00048f12) cell_afind_pane

0x5c06,	// (0x00046a9c) afind_page_pane_g1

0x80cb,	// (0x00048f61) afind_page_pane_g2

0x80d4,	// (0x00048f6a) afind_page_pane_g3

0x0002,

0xf925,	// (0x000507bb) afind_page_pane_g

0x80dd,	// (0x00048f73) afind_page_pane_t1

0xb1e7,	// (0x0004c07d) cell_afind_grid_control_pane_ParamLimits

0xb1e7,	// (0x0004c07d) cell_afind_grid_control_pane

0x75ef,	// (0x00048485) bg_button_pane_cp69_ParamLimits

0x75ef,	// (0x00048485) bg_button_pane_cp69

0x80fd,	// (0x00048f93) cell_afind_pane_g1_ParamLimits

0x80fd,	// (0x00048f93) cell_afind_pane_g1

0x810a,	// (0x00048fa0) cell_afind_pane_t1_ParamLimits

0x810a,	// (0x00048fa0) cell_afind_pane_t1

0xd982,	// (0x0004e818) bg_button_pane_cp72

0xb1f6,	// (0x0004c08c) cell_afind_grid_control_pane_g1

0x40fb,	// (0x00044f91) aid_image_placing_area_ParamLimits

0x40fb,	// (0x00044f91) aid_image_placing_area

0x6f95,	// (0x00047e2b) field_vitu_entry_pane_g1_ParamLimits

0x6f95,	// (0x00047e2b) field_vitu_entry_pane_g1

0x6fa1,	// (0x00047e37) field_vitu_entry_pane_g2_ParamLimits

0x6fa1,	// (0x00047e37) field_vitu_entry_pane_g2

0x0001,

0xf7d2,	// (0x00050668) field_vitu_entry_pane_g_ParamLimits

0xf7d2,	// (0x00050668) field_vitu_entry_pane_g

0x6ff4,	// (0x00047e8a) cell_vitu_itu_pane_g1_ParamLimits

0x7036,	// (0x00047ecc) cell_vitu_itu_pane_t3_ParamLimits

0x7036,	// (0x00047ecc) cell_vitu_itu_pane_t3

0x74ff,	// (0x00048395) mp4_progress_pane_t1_ParamLimits

0x7516,	// (0x000483ac) mp4_progress_pane_t2_ParamLimits

0xf86b,	// (0x00050701) mp4_progress_pane_t_ParamLimits

0x752d,	// (0x000483c3) mup_progress_pane_cp04_ParamLimits

0x7fff,	// (0x00048e95) main_myfav_hc_pane_t5_ParamLimits

0x7fff,	// (0x00048e95) main_myfav_hc_pane_t5

0xa874,	// (0x0004b70a) aid_zoom_text_primary

0x190e,	// (0x000427a4) popup_adpt_find_window_ParamLimits

0xef76,	// (0x0004fe0c) main_cam_set_pane

0x7a61,	// (0x000488f7) cam4_zoom_pane_ParamLimits

0x7a61,	// (0x000488f7) cam4_zoom_pane

0x811c,	// (0x00048fb2) main_cam_set_pane_g1_ParamLimits

0x811c,	// (0x00048fb2) main_cam_set_pane_g1

0x812a,	// (0x00048fc0) main_cam_set_pane_g2_ParamLimits

0x812a,	// (0x00048fc0) main_cam_set_pane_g2

0x0001,

0xf92c,	// (0x000507c2) main_cam_set_pane_g_ParamLimits

0xf92c,	// (0x000507c2) main_cam_set_pane_g

0x8149,	// (0x00048fdf) main_cam_set_pane_t1_ParamLimits

0x8149,	// (0x00048fdf) main_cam_set_pane_t1

0x815b,	// (0x00048ff1) main_cset_listscroll_pane_ParamLimits

0x815b,	// (0x00048ff1) main_cset_listscroll_pane

0x8179,	// (0x0004900f) main_cset_slider_pane_ParamLimits

0x8179,	// (0x0004900f) main_cset_slider_pane

0xb207,	// (0x0004c09d) main_cset_list_pane_ParamLimits

0xb207,	// (0x0004c09d) main_cset_list_pane

0xb217,	// (0x0004c0ad) scroll_pane_cp028

0x819d,	// (0x00049033) aid_area_touch_slider

0x81b9,	// (0x0004904f) cset_slider_pane

0x81e3,	// (0x00049079) main_cset_slider_pane_g1

0x81f8,	// (0x0004908e) main_cset_slider_pane_g2

0x0011,

0xf931,	// (0x000507c7) main_cset_slider_pane_g

0xb250,	// (0x0004c0e6) main_cset_slider_pane_t1

0x82b4,	// (0x0004914a) main_cset_slider_pane_t2

0x82ce,	// (0x00049164) main_cset_slider_pane_t3

0x82e8,	// (0x0004917e) main_cset_slider_pane_t4

0x8302,	// (0x00049198) main_cset_slider_pane_t5

0x831c,	// (0x000491b2) main_cset_slider_pane_t6

0x8331,	// (0x000491c7) main_cset_slider_pane_t7

0x000e,

0xf956,	// (0x000507ec) main_cset_slider_pane_t

0x8435,	// (0x000492cb) cset_list_set_pane_ParamLimits

0x8435,	// (0x000492cb) cset_list_set_pane

0x8446,	// (0x000492dc) aid_position_infowindow_above

0x844e,	// (0x000492e4) aid_position_infowindow_below

0x0daa,	// (0x00041c40) cset_list_set_pane_g1_ParamLimits

0x0daa,	// (0x00041c40) cset_list_set_pane_g1

0x0db6,	// (0x00041c4c) cset_list_set_pane_g3_ParamLimits

0x0db6,	// (0x00041c4c) cset_list_set_pane_g3

0x0001,

0xf975,	// (0x0005080b) cset_list_set_pane_g_ParamLimits

0xf975,	// (0x0005080b) cset_list_set_pane_g

0x0dc5,	// (0x00041c5b) cset_list_set_pane_t1_ParamLimits

0x0dc5,	// (0x00041c5b) cset_list_set_pane_t1

0xef76,	// (0x0004fe0c) list_highlight_pane_cp021_ParamLimits

0xef76,	// (0x0004fe0c) list_highlight_pane_cp021

0xe45c,	// (0x0004f2f2) cset_slider_pane_g1

0xe46e,	// (0x0004f304) cset_slider_pane_g2

0xe465,	// (0x0004f2fb) cset_slider_pane_g3

0x0002,

0x0582,	// (0x00041418) cset_slider_pane_g

0xd195,	// (0x0004e02b) aid_area_touch_cam4_zoom

0xd19d,	// (0x0004e033) cam4_zoom_cont_pane

0xd1a5,	// (0x0004e03b) cam4_zoom_pane_g1

0xd1ad,	// (0x0004e043) cam4_zoom_pane_g2

0x8456,	// (0x000492ec) cam4_zoom_pane_g3

0x0002,

0xf97a,	// (0x00050810) cam4_zoom_pane_g

0xb2f0,	// (0x0004c186) cam4_zoom_cont_pane_g1

0xb2f9,	// (0x0004c18f) cam4_zoom_cont_pane_g2

0xb302,	// (0x0004c198) cam4_zoom_cont_pane_g3

0x0002,

0xf981,	// (0x00050817) cam4_zoom_cont_pane_g

0x78a6,	// (0x0004873c) call4_image_pane_ParamLimits

0x78a6,	// (0x0004873c) call4_image_pane

0x78f2,	// (0x00048788) call4_windows_conf_pane_ParamLimits

0x7925,	// (0x000487bb) popup_call4_audio_in_window_ParamLimits

0x7925,	// (0x000487bb) popup_call4_audio_in_window

0xa852,	// (0x0004b6e8) bg_popup_call2_act_pane_cp02

0x79e4,	// (0x0004887a) call4_list_conf_pane

0x5c06,	// (0x00046a9c) call4_image_pane_g1

0x5c06,	// (0x00046a9c) call4_image_pane_g2

0x0001,

0xf698,	// (0x0005052e) call4_image_pane_g

0xb30b,	// (0x0004c1a1) list_single_graphic_popup_conf4_pane_ParamLimits

0xb30b,	// (0x0004c1a1) list_single_graphic_popup_conf4_pane

0xa852,	// (0x0004b6e8) list_highlight_pane_cp022

0xb31e,	// (0x0004c1b4) list_single_graphic_popup_conf4_pane_g1

0xe091,	// (0x0004ef27) list_single_graphic_popup_conf4_pane_g2

0x0001,

0xf988,	// (0x0005081e) list_single_graphic_popup_conf4_pane_g

0xb326,	// (0x0004c1bc) list_single_graphic_popup_conf4_pane_t1

0x289d,	// (0x00043733) popup_vtel_slider_window_ParamLimits

0x289d,	// (0x00043733) popup_vtel_slider_window

0x75bb,	// (0x00048451) dialer2_ne_pane_t2_ParamLimits

0x75bb,	// (0x00048451) dialer2_ne_pane_t2

0x0001,

0xf870,	// (0x00050706) dialer2_ne_pane_t_ParamLimits

0xf870,	// (0x00050706) dialer2_ne_pane_t

0x592f,	// (0x000467c5) bg_popup_sub_pane_cp010_ParamLimits

0x592f,	// (0x000467c5) bg_popup_sub_pane_cp010

0x845e,	// (0x000492f4) popup_vtel_slider_window_g1_ParamLimits

0x845e,	// (0x000492f4) popup_vtel_slider_window_g1

0x8471,	// (0x00049307) popup_vtel_slider_window_g2_ParamLimits

0x8471,	// (0x00049307) popup_vtel_slider_window_g2

0x0003,

0xf98d,	// (0x00050823) popup_vtel_slider_window_g_ParamLimits

0xf98d,	// (0x00050823) popup_vtel_slider_window_g

0x84c5,	// (0x0004935b) vtel_slider_pane_ParamLimits

0x84c5,	// (0x0004935b) vtel_slider_pane

0x84e7,	// (0x0004937d) vtel_slider_pane_g1_ParamLimits

0x84e7,	// (0x0004937d) vtel_slider_pane_g1

0x84fb,	// (0x00049391) vtel_slider_pane_g2_ParamLimits

0x84fb,	// (0x00049391) vtel_slider_pane_g2

0x8513,	// (0x000493a9) vtel_slider_pane_g3_ParamLimits

0x8513,	// (0x000493a9) vtel_slider_pane_g3

0x84e7,	// (0x0004937d) vtel_slider_pane_g4_ParamLimits

0x84e7,	// (0x0004937d) vtel_slider_pane_g4

0x8529,	// (0x000493bf) vtel_slider_pane_g5_ParamLimits

0x8529,	// (0x000493bf) vtel_slider_pane_g5

0x0004,

0xf996,	// (0x0005082c) vtel_slider_pane_g_ParamLimits

0xf996,	// (0x0005082c) vtel_slider_pane_g

0xef76,	// (0x0004fe0c) main_gallery2_pane

0x7c38,	// (0x00048ace) aid_size_row_itut2_dropdow_list_ParamLimits

0x7c38,	// (0x00048ace) aid_size_row_itut2_dropdow_list

0x7c9b,	// (0x00048b31) grid_vitu2_function_top_pane_ParamLimits

0x7c9b,	// (0x00048b31) grid_vitu2_function_top_pane

0x7ce0,	// (0x00048b76) popup_vitu2_dropdown_list_window_ParamLimits

0x7ce0,	// (0x00048b76) popup_vitu2_dropdown_list_window

0x7cfc,	// (0x00048b92) popup_vitu2_match_list_window

0x853f,	// (0x000493d5) cell_vitu2_function_top_pane_ParamLimits

0x853f,	// (0x000493d5) cell_vitu2_function_top_pane

0x8557,	// (0x000493ed) cell_vitu2_function_top_pane_cp01_ParamLimits

0x8557,	// (0x000493ed) cell_vitu2_function_top_pane_cp01

0x8573,	// (0x00049409) cell_vitu2_function_top_wide_pane_ParamLimits

0x8573,	// (0x00049409) cell_vitu2_function_top_wide_pane

0xef76,	// (0x0004fe0c) bg_button_pane_cp012

0x858f,	// (0x00049425) cell_vitu2_function_top_pane_g1

0xd1b5,	// (0x0004e04b) bg_button_pane_cp013_ParamLimits

0xd1b5,	// (0x0004e04b) bg_button_pane_cp013

0x85a3,	// (0x00049439) cell_vitu2_function_top_wide_pane_g1_ParamLimits

0x85a3,	// (0x00049439) cell_vitu2_function_top_wide_pane_g1

0xef76,	// (0x0004fe0c) bg_popup_sub_pane_cp20

0x85bb,	// (0x00049451) list_vitu2_match_list_pane

0x7e61,	// (0x00048cf7) bg_popup_sub_pane_cp20_g1

0x7e69,	// (0x00048cff) bg_popup_sub_pane_cp20_g2

0xdbb1,	// (0x0004ea47) bg_popup_sub_pane_cp20_g3

0x7e71,	// (0x00048d07) bg_popup_sub_pane_cp20_g4

0xdb91,	// (0x0004ea27) bg_popup_sub_pane_cp20_g5

0xb33c,	// (0x0004c1d2) bg_popup_sub_pane_cp20_g6

0x7e81,	// (0x00048d17) bg_popup_sub_pane_cp20_g7

0x7e89,	// (0x00048d1f) bg_popup_sub_pane_cp20_g8

0x7e91,	// (0x00048d27) bg_popup_sub_pane_cp20_g9

0x0008,

0xf9a1,	// (0x00050837) bg_popup_sub_pane_cp20_g

0xd1d1,	// (0x0004e067) list_vitu2_match_list_item_pane_ParamLimits

0xd1d1,	// (0x0004e067) list_vitu2_match_list_item_pane

0xd1e3,	// (0x0004e079) list_vitu2_match_list_item_pane_t1

0xa852,	// (0x0004b6e8) bg_popup_sub_pane_cp21

0xdfcf,	// (0x0004ee65) grid_vitu2_dropdown_list_pane

0x85d9,	// (0x0004946f) cell_vitu2_dropdown_list_char_pane_ParamLimits

0x85d9,	// (0x0004946f) cell_vitu2_dropdown_list_char_pane

0x85fa,	// (0x00049490) cell_vitu2_dropdown_list_ctrl_pane_ParamLimits

0x85fa,	// (0x00049490) cell_vitu2_dropdown_list_ctrl_pane

0xb344,	// (0x0004c1da) cell_vitu2_dropdown_list_char_pane_g1

0xb34d,	// (0x0004c1e3) cell_vitu2_dropdown_list_char_pane_g2

0xb356,	// (0x0004c1ec) cell_vitu2_dropdown_list_char_pane_g3

0x0002,

0xf9be,	// (0x00050854) cell_vitu2_dropdown_list_char_pane_g

0x8626,	// (0x000494bc) cell_vitu2_dropdown_list_char_pane_t1

0x8634,	// (0x000494ca) cell_vitu2_dropdown_list_ctrl_pane_g1_ParamLimits

0x8634,	// (0x000494ca) cell_vitu2_dropdown_list_ctrl_pane_g1

0x8641,	// (0x000494d7) cell_vitu2_dropdown_list_ctrl_pane_g2_ParamLimits

0x8641,	// (0x000494d7) cell_vitu2_dropdown_list_ctrl_pane_g2

0x864e,	// (0x000494e4) cell_vitu2_dropdown_list_ctrl_pane_g3_ParamLimits

0x864e,	// (0x000494e4) cell_vitu2_dropdown_list_ctrl_pane_g3

0x865b,	// (0x000494f1) cell_vitu2_dropdown_list_ctrl_pane_g4_ParamLimits

0x865b,	// (0x000494f1) cell_vitu2_dropdown_list_ctrl_pane_g4

0x5ed1,	// (0x00046d67) cell_vitu2_dropdown_list_ctrl_pane_g5_ParamLimits

0x5ed1,	// (0x00046d67) cell_vitu2_dropdown_list_ctrl_pane_g5

0x0004,

0xf9c5,	// (0x0005085b) cell_vitu2_dropdown_list_ctrl_pane_g_ParamLimits

0xf9c5,	// (0x0005085b) cell_vitu2_dropdown_list_ctrl_pane_g

0x8677,	// (0x0004950d) aid_size_cell_gallery2_ParamLimits

0x8677,	// (0x0004950d) aid_size_cell_gallery2

0x8695,	// (0x0004952b) grid_gallery2_pane_ParamLimits

0x8695,	// (0x0004952b) grid_gallery2_pane

0x6cbc,	// (0x00047b52) scroll_pane_cp029_ParamLimits

0x6cbc,	// (0x00047b52) scroll_pane_cp029

0x86a9,	// (0x0004953f) cell_gallery2_pane_ParamLimits

0x86a9,	// (0x0004953f) cell_gallery2_pane

0xb35f,	// (0x0004c1f5) cell_gallery2_pane_g2

0x8702,	// (0x00049598) cell_gallery2_pane_g3

0xb367,	// (0x0004c1fd) cell_gallery2_pane_g4

0xb36f,	// (0x0004c205) cell_gallery2_pane_g5

0xd8f8,	// (0x0004e78e) grid_highlight_pane_cp10

0x7cfc,	// (0x00048b92) popup_vitu2_match_list_window_ParamLimits

0x7d0d,	// (0x00048ba3) popup_vitu2_query_window_ParamLimits

0x7d0d,	// (0x00048ba3) popup_vitu2_query_window

0xa852,	// (0x0004b6e8) bg_vitu2_candi_button_pane

0xb344,	// (0x0004c1da) cell_vitu2_dropdown_list_char_pane_g1_copy1

0xb34d,	// (0x0004c1e3) cell_vitu2_dropdown_list_char_pane_g2_copy1

0xb356,	// (0x0004c1ec) cell_vitu2_dropdown_list_char_pane_g2_copy2

0x0e2f,	// (0x00041cc5) bg_button_pane_cp015

0x870a,	// (0x000495a0) bg_button_pane_cp016

0x871c,	// (0x000495b2) bg_button_pane_cp017

0x4c24,	// (0x00045aba) bg_popup_sub_pane_cp22

0xb377,	// (0x0004c20d) popup_vitu2_query_window_g1

0x0e5e,	// (0x00041cf4) popup_vitu2_query_window_g2

0x0002,

0xf9d0,	// (0x00050866) popup_vitu2_query_window_g

0x0e79,	// (0x00041d0f) popup_vitu2_query_window_t1_ParamLimits

0x0e79,	// (0x00041d0f) popup_vitu2_query_window_t1

0x0eac,	// (0x00041d42) popup_vitu2_query_window_t2_ParamLimits

0x0eac,	// (0x00041d42) popup_vitu2_query_window_t2

0x0ebe,	// (0x00041d54) popup_vitu2_query_window_t3_ParamLimits

0x0ebe,	// (0x00041d54) popup_vitu2_query_window_t3

0x873e,	// (0x000495d4) popup_vitu2_query_window_t4_ParamLimits

0x873e,	// (0x000495d4) popup_vitu2_query_window_t4

0x875b,	// (0x000495f1) popup_vitu2_query_window_t5_ParamLimits

0x875b,	// (0x000495f1) popup_vitu2_query_window_t5

0x0006,

0xf9d7,	// (0x0005086d) popup_vitu2_query_window_t_ParamLimits

0xf9d7,	// (0x0005086d) popup_vitu2_query_window_t

0xb1ff,	// (0x0004c095) main_cset_text_pane

0x819d,	// (0x00049033) aid_area_touch_slider_ParamLimits

0x81b9,	// (0x0004904f) cset_slider_pane_ParamLimits

0x81e3,	// (0x00049079) main_cset_slider_pane_g1_ParamLimits

0x81f8,	// (0x0004908e) main_cset_slider_pane_g2_ParamLimits

0xb220,	// (0x0004c0b6) main_cset_slider_pane_g3_ParamLimits

0xb220,	// (0x0004c0b6) main_cset_slider_pane_g3

0x820d,	// (0x000490a3) main_cset_slider_pane_g4_ParamLimits

0x820d,	// (0x000490a3) main_cset_slider_pane_g4

0x821c,	// (0x000490b2) main_cset_slider_pane_g5_ParamLimits

0x821c,	// (0x000490b2) main_cset_slider_pane_g5

0x8228,	// (0x000490be) main_cset_slider_pane_g6_ParamLimits

0x8228,	// (0x000490be) main_cset_slider_pane_g6

0xf931,	// (0x000507c7) main_cset_slider_pane_g_ParamLimits

0xb250,	// (0x0004c0e6) main_cset_slider_pane_t1_ParamLimits

0x82b4,	// (0x0004914a) main_cset_slider_pane_t2_ParamLimits

0x82ce,	// (0x00049164) main_cset_slider_pane_t3_ParamLimits

0x82e8,	// (0x0004917e) main_cset_slider_pane_t4_ParamLimits

0x8302,	// (0x00049198) main_cset_slider_pane_t5_ParamLimits

0x831c,	// (0x000491b2) main_cset_slider_pane_t6_ParamLimits

0x8331,	// (0x000491c7) main_cset_slider_pane_t7_ParamLimits

0x835b,	// (0x000491f1) main_cset_slider_pane_t8_ParamLimits

0x835b,	// (0x000491f1) main_cset_slider_pane_t8

0x8383,	// (0x00049219) main_cset_slider_pane_t9_ParamLimits

0x8383,	// (0x00049219) main_cset_slider_pane_t9

0x83ab,	// (0x00049241) main_cset_slider_pane_t10_ParamLimits

0x83ab,	// (0x00049241) main_cset_slider_pane_t10

0x83d3,	// (0x00049269) main_cset_slider_pane_t11_ParamLimits

0x83d3,	// (0x00049269) main_cset_slider_pane_t11

0x83fb,	// (0x00049291) main_cset_slider_pane_t12_ParamLimits

0x83fb,	// (0x00049291) main_cset_slider_pane_t12

0x8418,	// (0x000492ae) main_cset_slider_pane_t13_ParamLimits

0x8418,	// (0x000492ae) main_cset_slider_pane_t13

0xf956,	// (0x000507ec) main_cset_slider_pane_t_ParamLimits

0xa852,	// (0x0004b6e8) bg_popup_sub_pane_cp011

0xb383,	// (0x0004c219) main_cset_text_pane_g1

0xb38b,	// (0x0004c221) main_cset_text_pane_t1

0xb399,	// (0x0004c22f) main_cset_text_pane_t2

0xb3a7,	// (0x0004c23d) main_cset_text_pane_t3

0xb3b5,	// (0x0004c24b) main_cset_text_pane_t4

0xb3c3,	// (0x0004c259) main_cset_text_pane_t5

0xb3d1,	// (0x0004c267) main_cset_text_pane_t6

0xb3df,	// (0x0004c275) main_cset_text_pane_t7

0x0006,

0xf9e6,	// (0x0005087c) main_cset_text_pane_t

0xa852,	// (0x0004b6e8) main_cam4_burst_pane

0xa852,	// (0x0004b6e8) main_cam5_pane

0x80eb,	// (0x00048f81) bg_button_pane_cp019

0x80f4,	// (0x00048f8a) bg_button_pane_cp020

0xb22c,	// (0x0004c0c2) main_cset_slider_pane_g7_ParamLimits

0xb22c,	// (0x0004c0c2) main_cset_slider_pane_g7

0xb238,	// (0x0004c0ce) main_cset_slider_pane_g8_ParamLimits

0xb238,	// (0x0004c0ce) main_cset_slider_pane_g8

0x823c,	// (0x000490d2) main_cset_slider_pane_g9_ParamLimits

0x823c,	// (0x000490d2) main_cset_slider_pane_g9

0x8248,	// (0x000490de) main_cset_slider_pane_g10_ParamLimits

0x8248,	// (0x000490de) main_cset_slider_pane_g10

0x8254,	// (0x000490ea) main_cset_slider_pane_g11_ParamLimits

0x8254,	// (0x000490ea) main_cset_slider_pane_g11

0x8260,	// (0x000490f6) main_cset_slider_pane_g12_ParamLimits

0x8260,	// (0x000490f6) main_cset_slider_pane_g12

0x826c,	// (0x00049102) main_cset_slider_pane_g13_ParamLimits

0x826c,	// (0x00049102) main_cset_slider_pane_g13

0x8278,	// (0x0004910e) main_cset_slider_pane_g14_ParamLimits

0x8278,	// (0x0004910e) main_cset_slider_pane_g14

0x8284,	// (0x0004911a) main_cset_slider_pane_g15_ParamLimits

0x8284,	// (0x0004911a) main_cset_slider_pane_g15

0xb27e,	// (0x0004c114) main_cset_slider_pane_t14_ParamLimits

0xb27e,	// (0x0004c114) main_cset_slider_pane_t14

0xb2b7,	// (0x0004c14d) main_cset_slider_pane_t15_ParamLimits

0xb2b7,	// (0x0004c14d) main_cset_slider_pane_t15

0x8778,	// (0x0004960e) aid_cam4_burst_size_cell_ParamLimits

0x8778,	// (0x0004960e) aid_cam4_burst_size_cell

0x8798,	// (0x0004962e) grid_cam4_burst_pane_ParamLimits

0x8798,	// (0x0004962e) grid_cam4_burst_pane

0x87be,	// (0x00049654) linegrid_cam4_burst_pane_ParamLimits

0x87be,	// (0x00049654) linegrid_cam4_burst_pane

0x87e0,	// (0x00049676) scroll_pane_cp30_ParamLimits

0x87e0,	// (0x00049676) scroll_pane_cp30

0x87ec,	// (0x00049682) cell_cam4_burst_pane_ParamLimits

0x87ec,	// (0x00049682) cell_cam4_burst_pane

0xb3ed,	// (0x0004c283) linegrid_cam4_burst_pane_g1_ParamLimits

0xb3ed,	// (0x0004c283) linegrid_cam4_burst_pane_g1

0x8833,	// (0x000496c9) linegrid_cam4_burst_pane_g2_ParamLimits

0x8833,	// (0x000496c9) linegrid_cam4_burst_pane_g2

0xb3fa,	// (0x0004c290) linegrid_cam4_burst_pane_g3_ParamLimits

0xb3fa,	// (0x0004c290) linegrid_cam4_burst_pane_g3

0x0002,

0xf9f5,	// (0x0005088b) linegrid_cam4_burst_pane_g_ParamLimits

0xf9f5,	// (0x0005088b) linegrid_cam4_burst_pane_g

0x8844,	// (0x000496da) linegrid_cam4_burst_pane_g3_copy1_ParamLimits

0x8844,	// (0x000496da) linegrid_cam4_burst_pane_g3_copy1

0xb407,	// (0x0004c29d) linegrid_cam4_burst_pane_g4_ParamLimits

0xb407,	// (0x0004c29d) linegrid_cam4_burst_pane_g4

0x885e,	// (0x000496f4) linegrid_cam4_burst_pane_g5_ParamLimits

0x885e,	// (0x000496f4) linegrid_cam4_burst_pane_g5

0x886f,	// (0x00049705) linegrid_cam4_burst_pane_g6_ParamLimits

0x886f,	// (0x00049705) linegrid_cam4_burst_pane_g6

0xb414,	// (0x0004c2aa) linegrid_cam4_burst_pane_g7_ParamLimits

0xb414,	// (0x0004c2aa) linegrid_cam4_burst_pane_g7

0x8880,	// (0x00049716) cell_cam4_burst_pane_g1

0xb42d,	// (0x0004c2c3) main_cam5_pane_t1_ParamLimits

0xb42d,	// (0x0004c2c3) main_cam5_pane_t1

0xb43f,	// (0x0004c2d5) main_cam5_pane_t2_ParamLimits

0xb43f,	// (0x0004c2d5) main_cam5_pane_t2

0xb451,	// (0x0004c2e7) main_cam5_pane_t3_ParamLimits

0xb451,	// (0x0004c2e7) main_cam5_pane_t3

0xb463,	// (0x0004c2f9) main_cam5_pane_t4_ParamLimits

0xb463,	// (0x0004c2f9) main_cam5_pane_t4

0xb479,	// (0x0004c30f) main_cam5_pane_t5_ParamLimits

0xb479,	// (0x0004c30f) main_cam5_pane_t5

0xb48b,	// (0x0004c321) main_cam5_pane_t6_ParamLimits

0xb48b,	// (0x0004c321) main_cam5_pane_t6

0xb49d,	// (0x0004c333) main_cam5_pane_t7_ParamLimits

0xb49d,	// (0x0004c333) main_cam5_pane_t7

0xb4af,	// (0x0004c345) main_cam5_pane_t8_ParamLimits

0xb4af,	// (0x0004c345) main_cam5_pane_t8

0xb4cb,	// (0x0004c361) main_cam5_pane_t9_ParamLimits

0xb4cb,	// (0x0004c361) main_cam5_pane_t9

0xb4dd,	// (0x0004c373) main_cam5_pane_t10_ParamLimits

0xb4dd,	// (0x0004c373) main_cam5_pane_t10

0xb4ef,	// (0x0004c385) main_cam5_pane_t11_ParamLimits

0xb4ef,	// (0x0004c385) main_cam5_pane_t11

0xb501,	// (0x0004c397) main_cam5_pane_t12_ParamLimits

0xb501,	// (0x0004c397) main_cam5_pane_t12

0xb516,	// (0x0004c3ac) main_cam5_pane_t13_ParamLimits

0xb516,	// (0x0004c3ac) main_cam5_pane_t13

0x000c,

0xfa01,	// (0x00050897) main_cam5_pane_t_ParamLimits

0xfa01,	// (0x00050897) main_cam5_pane_t

0x196c,	// (0x00042802) popup_scut_keymap_window_ParamLimits

0x196c,	// (0x00042802) popup_scut_keymap_window

0x8895,	// (0x0004972b) aid_size_cell_brow_shortcut

0xd8f8,	// (0x0004e78e) bg_popup_window_pane_cp010

0x88a1,	// (0x00049737) grid_scut_pane

0x88ab,	// (0x00049741) cell_scut_pane_ParamLimits

0x88ab,	// (0x00049741) cell_scut_pane

0x88c0,	// (0x00049756) cell_scut_pane_g1

0xb533,	// (0x0004c3c9) cell_scut_pane_t1

0xb542,	// (0x0004c3d8) cell_scut_pane_t2

0x88c9,	// (0x0004975f) cell_scut_pane_t3

0x0002,

0xfa1c,	// (0x000508b2) cell_scut_pane_t

0x6244,	// (0x000470da) main_mup3_pane_g8_ParamLimits

0x6244,	// (0x000470da) main_mup3_pane_g8

0x7c4b,	// (0x00048ae1) area_vitu2_query_pane_ParamLimits

0x7c4b,	// (0x00048ae1) area_vitu2_query_pane

0x0e3f,	// (0x00041cd5) input_focus_pane_cp08

0xb551,	// (0x0004c3e7) area_vitu2_query_pane_g1

0x0f3c,	// (0x00041dd2) area_vitu2_query_pane_g2

0x0001,

0xfa23,	// (0x000508b9) area_vitu2_query_pane_g

0x88d7,	// (0x0004976d) area_vitu2_query_pane_t1_ParamLimits

0x88d7,	// (0x0004976d) area_vitu2_query_pane_t1

0x88e9,	// (0x0004977f) area_vitu2_query_pane_t2_ParamLimits

0x88e9,	// (0x0004977f) area_vitu2_query_pane_t2

0x0f4b,	// (0x00041de1) area_vitu2_query_pane_t3_ParamLimits

0x0f4b,	// (0x00041de1) area_vitu2_query_pane_t3

0xb55d,	// (0x0004c3f3) area_vitu2_query_pane_t4_ParamLimits

0xb55d,	// (0x0004c3f3) area_vitu2_query_pane_t4

0xb585,	// (0x0004c41b) area_vitu2_query_pane_t5_ParamLimits

0xb585,	// (0x0004c41b) area_vitu2_query_pane_t5

0xb5ad,	// (0x0004c443) area_vitu2_query_pane_t6_ParamLimits

0xb5ad,	// (0x0004c443) area_vitu2_query_pane_t6

0x0006,

0xfa28,	// (0x000508be) area_vitu2_query_pane_t_ParamLimits

0xfa28,	// (0x000508be) area_vitu2_query_pane_t

0x88fb,	// (0x00049791) bg_button_pane_cp018

0x8908,	// (0x0004979e) bg_button_pane_cp021

0x0f73,	// (0x00041e09) bg_button_pane_cp022

0x0f82,	// (0x00041e18) input_focus_pane_cp09

0x38e7,	// (0x0004477d) aid_size_touch_mv_arrow_left

0xe1dd,	// (0x0004f073) aid_size_touch_mv_arrow_right

0x829c,	// (0x00049132) main_cset_slider_pane_g16_ParamLimits

0x829c,	// (0x00049132) main_cset_slider_pane_g16

0x82a8,	// (0x0004913e) main_cset_slider_pane_g17_ParamLimits

0x82a8,	// (0x0004913e) main_cset_slider_pane_g17

0x8880,	// (0x00049716) cell_cam4_burst_pane_g1_ParamLimits

0xa852,	// (0x0004b6e8) compa_mode_pane

0x8481,	// (0x00049317) popup_vtel_slider_window_g3_ParamLimits

0x8481,	// (0x00049317) popup_vtel_slider_window_g3

0x8498,	// (0x0004932e) popup_vtel_slider_window_g4_ParamLimits

0x8498,	// (0x0004932e) popup_vtel_slider_window_g4

0x84af,	// (0x00049345) popup_vtel_slider_window_t1_ParamLimits

0x84af,	// (0x00049345) popup_vtel_slider_window_t1

0xa852,	// (0x0004b6e8) main_cl_pane

0xac3c,	// (0x0004bad2) popup_imed_adjust2_window_ParamLimits

0x4c24,	// (0x00045aba) bg_tb_trans_pane_cp05_ParamLimits

0x6d8d,	// (0x00047c23) popup_imed_adjust2_window_g1_ParamLimits

0x6d9c,	// (0x00047c32) popup_imed_adjust2_window_g2_ParamLimits

0x6d9c,	// (0x00047c32) popup_imed_adjust2_window_g2

0x6da8,	// (0x00047c3e) popup_imed_adjust2_window_g3_ParamLimits

0x6da8,	// (0x00047c3e) popup_imed_adjust2_window_g3

0x0002,

0xf79b,	// (0x00050631) popup_imed_adjust2_window_g_ParamLimits

0xf79b,	// (0x00050631) popup_imed_adjust2_window_g

0x6db4,	// (0x00047c4a) popup_imed_adjust2_window_t1_ParamLimits

0x6dcc,	// (0x00047c62) slider_imed_adjust_pane_ParamLimits

0x6de0,	// (0x00047c76) slider_imed_adjust_pane_g1_ParamLimits

0x6df0,	// (0x00047c86) slider_imed_adjust_pane_g2_ParamLimits

0x6e00,	// (0x00047c96) slider_imed_adjust_pane_g3_ParamLimits

0x6e11,	// (0x00047ca7) slider_imed_adjust_pane_g4_ParamLimits

0xf7a2,	// (0x00050638) slider_imed_adjust_pane_g_ParamLimits

0x7a10,	// (0x000488a6) aid_touch_area_cam4_ParamLimits

0x7a10,	// (0x000488a6) aid_touch_area_cam4

0xb079,	// (0x0004bf0f) battery_pane_cp01

0x7aa8,	// (0x0004893e) main_camera4_pane_g6_ParamLimits

0x7aa8,	// (0x0004893e) main_camera4_pane_g6

0x7ac9,	// (0x0004895f) main_camera4_pane_t2_ParamLimits

0x7ac9,	// (0x0004895f) main_camera4_pane_t2

0x0001,

0xf8a4,	// (0x0005073a) main_camera4_pane_t_ParamLimits

0xf8a4,	// (0x0005073a) main_camera4_pane_t

0x7b09,	// (0x0004899f) aid_touch_area_vid4_ParamLimits

0x7b09,	// (0x0004899f) aid_touch_area_vid4

0x7b4b,	// (0x000489e1) main_video4_pane_g5_ParamLimits

0x7b4b,	// (0x000489e1) main_video4_pane_g5

0x7b6c,	// (0x00048a02) vid4_progress_pane_ParamLimits

0x7b6c,	// (0x00048a02) vid4_progress_pane

0xb244,	// (0x0004c0da) main_cset_slider_pane_g18_ParamLimits

0xb244,	// (0x0004c0da) main_cset_slider_pane_g18

0xb421,	// (0x0004c2b7) cell_cam4_burst_pane_g2_ParamLimits

0xb421,	// (0x0004c2b7) cell_cam4_burst_pane_g2

0x0001,

0xf9fc,	// (0x00050892) cell_cam4_burst_pane_g_ParamLimits

0xf9fc,	// (0x00050892) cell_cam4_burst_pane_g

0xd729,	// (0x0004e5bf) bg_cl_pane_ParamLimits

0xd729,	// (0x0004e5bf) bg_cl_pane

0x8914,	// (0x000497aa) cl_header_pane_ParamLimits

0x8914,	// (0x000497aa) cl_header_pane

0x8928,	// (0x000497be) cl_listscroll_pane_ParamLimits

0x8928,	// (0x000497be) cl_listscroll_pane

0xb5f9,	// (0x0004c48f) bg_cl_pane_g1

0xb601,	// (0x0004c497) bg_cl_pane_g2

0xb609,	// (0x0004c49f) bg_cl_pane_g3

0xb611,	// (0x0004c4a7) bg_cl_pane_g4

0xb619,	// (0x0004c4af) bg_cl_pane_g5

0xb621,	// (0x0004c4b7) bg_cl_pane_g6

0xb629,	// (0x0004c4bf) bg_cl_pane_g7

0xb631,	// (0x0004c4c7) bg_cl_pane_g8

0xb639,	// (0x0004c4cf) bg_cl_pane_g9

0x0008,

0xfa37,	// (0x000508cd) bg_cl_pane_g

0x8938,	// (0x000497ce) aid_height_cl_leading_ParamLimits

0x8938,	// (0x000497ce) aid_height_cl_leading

0x8944,	// (0x000497da) aid_height_cl_text_ParamLimits

0x8944,	// (0x000497da) aid_height_cl_text

0xef76,	// (0x0004fe0c) bg_cl_header_pane_ParamLimits

0xef76,	// (0x0004fe0c) bg_cl_header_pane

0x8963,	// (0x000497f9) cl_header_pane_g1_ParamLimits

0x8963,	// (0x000497f9) cl_header_pane_g1

0x8979,	// (0x0004980f) cl_header_pane_t1_ParamLimits

0x8979,	// (0x0004980f) cl_header_pane_t1

0xb641,	// (0x0004c4d7) cl_list_pane

0xb64a,	// (0x0004c4e0) hc_scroll_pane_cp01

0xdb91,	// (0x0004ea27) bg_cl_header_pane_g1

0x7e61,	// (0x00048cf7) bg_cl_header_pane_g2

0xdbb1,	// (0x0004ea47) bg_cl_header_pane_g3

0x7e71,	// (0x00048d07) bg_cl_header_pane_g4

0x7e69,	// (0x00048cff) bg_cl_header_pane_g5

0xb33c,	// (0x0004c1d2) bg_cl_header_pane_g6

0x7e89,	// (0x00048d1f) bg_cl_header_pane_g7

0x7e91,	// (0x00048d27) bg_cl_header_pane_g8

0x7e81,	// (0x00048d17) bg_cl_header_pane_g9

0x0008,

0xfa4a,	// (0x000508e0) bg_cl_header_pane_g

0x8992,	// (0x00049828) hc_cl_list_double_graphic_heading_pane_ParamLimits

0x8992,	// (0x00049828) hc_cl_list_double_graphic_heading_pane

0x89a2,	// (0x00049838) hc_cl_list_single_graphic_pane_ParamLimits

0x89a2,	// (0x00049838) hc_cl_list_single_graphic_pane

0x89b5,	// (0x0004984b) hc_cl_list_single_graphic_pane_g1_ParamLimits

0x89b5,	// (0x0004984b) hc_cl_list_single_graphic_pane_g1

0x89c1,	// (0x00049857) hc_cl_list_single_graphic_pane_g2_ParamLimits

0x89c1,	// (0x00049857) hc_cl_list_single_graphic_pane_g2

0x0001,

0xfa5d,	// (0x000508f3) hc_cl_list_single_graphic_pane_g_ParamLimits

0xfa5d,	// (0x000508f3) hc_cl_list_single_graphic_pane_g

0x89d5,	// (0x0004986b) hc_cl_list_single_graphic_pane_t1_ParamLimits

0x89d5,	// (0x0004986b) hc_cl_list_single_graphic_pane_t1

0x89b5,	// (0x0004984b) hc_cl_list_double_graphic_heading_pane_g1_ParamLimits

0x89b5,	// (0x0004984b) hc_cl_list_double_graphic_heading_pane_g1

0x89ea,	// (0x00049880) hc_cl_list_double_graphic_heading_pane_g2_ParamLimits

0x89ea,	// (0x00049880) hc_cl_list_double_graphic_heading_pane_g2

0x89fe,	// (0x00049894) hc_cl_list_double_graphic_heading_pane_g3_ParamLimits

0x89fe,	// (0x00049894) hc_cl_list_double_graphic_heading_pane_g3

0x0002,

0xfa62,	// (0x000508f8) hc_cl_list_double_graphic_heading_pane_g_ParamLimits

0xfa62,	// (0x000508f8) hc_cl_list_double_graphic_heading_pane_g

0x8a12,	// (0x000498a8) hc_cl_list_double_graphic_heading_pane_t1_ParamLimits

0x8a12,	// (0x000498a8) hc_cl_list_double_graphic_heading_pane_t1

0x8a27,	// (0x000498bd) hc_cl_list_double_graphic_heading_pane_t2_ParamLimits

0x8a27,	// (0x000498bd) hc_cl_list_double_graphic_heading_pane_t2

0x0001,

0xfa69,	// (0x000508ff) hc_cl_list_double_graphic_heading_pane_t_ParamLimits

0xfa69,	// (0x000508ff) hc_cl_list_double_graphic_heading_pane_t

0xd1f1,	// (0x0004e087) vid4_progress_pane_g1

0xd200,	// (0x0004e096) vid4_progress_pane_g2

0xd20f,	// (0x0004e0a5) vid4_progress_pane_g3

0xd21e,	// (0x0004e0b4) vid4_progress_pane_g4

0x0004,

0xfa6e,	// (0x00050904) vid4_progress_pane_g

0xd22a,	// (0x0004e0c0) vid4_progress_pane_t1

0xd240,	// (0x0004e0d6) vid4_progress_pane_t2

0x0002,

0xfa79,	// (0x0005090f) vid4_progress_pane_t

0xd26a,	// (0x0004e100) wait_bar_pane_cp07

0x593d,	// (0x000467d3) blid_firmament_pane_ParamLimits

0x597e,	// (0x00046814) popup_blid_sat_info2_window_g1

0x59a2,	// (0x00046838) popup_blid_sat_info2_window_t3

0x59b0,	// (0x00046846) popup_blid_sat_info2_window_t4

0x59be,	// (0x00046854) popup_blid_sat_info2_window_t5

0x59cc,	// (0x00046862) popup_blid_sat_info2_window_t6

0x59dc,	// (0x00046872) popup_blid_sat_info2_window_t7

0x59ea,	// (0x00046880) popup_blid_sat_info2_window_t8

0x59f8,	// (0x0004688e) popup_blid_sat_info2_window_t9

0x5a06,	// (0x0004689c) popup_blid_sat_info2_window_t10

0x5b86,	// (0x00046a1c) aid_firma_cardinal_ParamLimits

0x5b9a,	// (0x00046a30) blid_firmament_pane_t1_ParamLimits

0x5bb1,	// (0x00046a47) blid_firmament_pane_t2_ParamLimits

0x5bc8,	// (0x00046a5e) blid_firmament_pane_t3_ParamLimits

0x5bdf,	// (0x00046a75) blid_firmament_pane_t4_ParamLimits

0xf68f,	// (0x00050525) blid_firmament_pane_t_ParamLimits

0x5bf6,	// (0x00046a8c) blid_sat_info_pane_ParamLimits

0xef76,	// (0x0004fe0c) main_cam_set_pane_ParamLimits

0x6c0c,	// (0x00047aa2) aid_size_cell_colour_35_ParamLimits

0x6c2c,	// (0x00047ac2) aid_size_cell_colour_112_ParamLimits

0x6c4c,	// (0x00047ae2) aid_size_cell_effect_ParamLimits

0x4c24,	// (0x00045aba) bg_tb_trans_pane_cp02_ParamLimits

0xdde3,	// (0x0004ec79) heading_imed_pane_ParamLimits

0x6c6c,	// (0x00047b02) listscroll_imed_pane_ParamLimits

0xed28,	// (0x0004fbbe) popup_call2_audio_first_window_g5_ParamLimits

0xed28,	// (0x0004fbbe) popup_call2_audio_first_window_g5

0x765e,	// (0x000484f4) aid_size_touch_image3_arrow_left_ParamLimits

0x765e,	// (0x000484f4) aid_size_touch_image3_arrow_left

0x767e,	// (0x00048514) aid_size_touch_image3_arrow_right_ParamLimits

0x767e,	// (0x00048514) aid_size_touch_image3_arrow_right

0xd255,	// (0x0004e0eb) vid4_progress_pane_t3

0x72df,	// (0x00048175) main_hwr_training_symbol_option_pane_ParamLimits

0x72df,	// (0x00048175) main_hwr_training_symbol_option_pane

0x72fb,	// (0x00048191) popup_hwr_training_preview_window_ParamLimits

0x72fb,	// (0x00048191) popup_hwr_training_preview_window

0x7348,	// (0x000481de) hwr_training_navi_pane_g5_ParamLimits

0x7348,	// (0x000481de) hwr_training_navi_pane_g5

0x7dc2,	// (0x00048c58) popup_char_count_window

0xef76,	// (0x0004fe0c) bg_popup_sub_pane_cp20_ParamLimits

0x85bb,	// (0x00049451) list_vitu2_match_list_pane_ParamLimits

0x85ca,	// (0x00049460) vitu2_page_scroll_pane_ParamLimits

0x85ca,	// (0x00049460) vitu2_page_scroll_pane

0xb687,	// (0x0004c51d) list_single_hwr_training_symbol_option_pane_ParamLimits

0xb687,	// (0x0004c51d) list_single_hwr_training_symbol_option_pane

0xb69a,	// (0x0004c530) list_single_hwr_training_symbol_option_pane_g1

0xb6a2,	// (0x0004c538) list_single_hwr_training_symbol_option_pane_t1

0xb6b0,	// (0x0004c546) bg_button_pane_cp023

0xb6b9,	// (0x0004c54f) bg_button_pane_cp024

0x8a3c,	// (0x000498d2) vitu2_page_scroll_pane_g1

0x8a44,	// (0x000498da) vitu2_page_scroll_pane_g2

0x0001,

0xfa80,	// (0x00050916) vitu2_page_scroll_pane_g

0x8a4c,	// (0x000498e2) vitu2_page_scroll_pane_t1

0x5c2f,	// (0x00046ac5) popup_char_count_window_g1

0xb6ec,	// (0x0004c582) popup_char_count_window_g2

0xb6f5,	// (0x0004c58b) popup_char_count_window_g3

0x0002,

0xfa85,	// (0x0005091b) popup_char_count_window_g

0xb6fe,	// (0x0004c594) popup_char_count_window_t1

0xa852,	// (0x0004b6e8) main_vded2_pane

0x6d7b,	// (0x00047c11) aid_size_cell_imed_line

0x6d85,	// (0x00047c1b) grid_imed_line_width_pane

0xb10e,	// (0x0004bfa4) vid4_indicators_pane_g4

0xb70c,	// (0x0004c5a2) cell_imed_line_width_pane_ParamLimits

0xb70c,	// (0x0004c5a2) cell_imed_line_width_pane

0xb71e,	// (0x0004c5b4) cell_imed_line_width_pane_g1

0x8a5b,	// (0x000498f1) cell_imed_line_width_pane_g2

0x0001,

0xfa8c,	// (0x00050922) cell_imed_line_width_pane_g

0x8a63,	// (0x000498f9) main_vded2_pane_g1_ParamLimits

0x8a63,	// (0x000498f9) main_vded2_pane_g1

0x8a79,	// (0x0004990f) main_vded2_pane_g2_ParamLimits

0x8a79,	// (0x0004990f) main_vded2_pane_g2

0x0001,

0xfa91,	// (0x00050927) main_vded2_pane_g_ParamLimits

0xfa91,	// (0x00050927) main_vded2_pane_g

0x8a89,	// (0x0004991f) vded2_slider_pane_ParamLimits

0x8a89,	// (0x0004991f) vded2_slider_pane

0x8a9c,	// (0x00049932) aid_size_touch_vded2_end

0x8aa4,	// (0x0004993a) aid_size_touch_vded2_playhead

0x8aac,	// (0x00049942) aid_size_touch_vded2_start

0x8ab4,	// (0x0004994a) vded2_slider_bg_pane

0x8abd,	// (0x00049953) vded2_slider_pane_g1

0x8ac6,	// (0x0004995c) vded2_slider_pane_g2

0x8ace,	// (0x00049964) vded2_slider_pane_g3

0x0002,

0xfa96,	// (0x0005092c) vded2_slider_pane_g

0x8ad7,	// (0x0004996d) vded2_slider_bg_pane_g1

0x8ae0,	// (0x00049976) vded2_slider_bg_pane_g2

0x8ae9,	// (0x0004997f) vded2_slider_bg_pane_g3

0x0002,

0xfa9d,	// (0x00050933) vded2_slider_bg_pane_g

0x3daa,	// (0x00044c40) aid_postcard_touch_down_pane_ParamLimits

0x3daa,	// (0x00044c40) aid_postcard_touch_down_pane

0x3dbc,	// (0x00044c52) aid_postcard_touch_up_pane_ParamLimits

0x3dbc,	// (0x00044c52) aid_postcard_touch_up_pane

0xa852,	// (0x0004b6e8) main_blid2_pane

0xac24,	// (0x0004baba) popup_blid2_search_window

0xa852,	// (0x0004b6e8) blid2_gps_pane

0xa852,	// (0x0004b6e8) blid2_navig_pane

0xa852,	// (0x0004b6e8) blid2_search_pane

0xa852,	// (0x0004b6e8) blid2_tripm_pane

0x8af2,	// (0x00049988) blid2_search_pane_g1_ParamLimits

0x8af2,	// (0x00049988) blid2_search_pane_g1

0x8b06,	// (0x0004999c) blid2_search_pane_t1_ParamLimits

0x8b06,	// (0x0004999c) blid2_search_pane_t1

0x8b18,	// (0x000499ae) aid_size_cell_blid2_gps_ParamLimits

0x8b18,	// (0x000499ae) aid_size_cell_blid2_gps

0x8b30,	// (0x000499c6) blid2_gps_pane_g1_ParamLimits

0x8b30,	// (0x000499c6) blid2_gps_pane_g1

0x8b44,	// (0x000499da) grid_blid2_satellite_pane_ParamLimits

0x8b44,	// (0x000499da) grid_blid2_satellite_pane

0x8b58,	// (0x000499ee) blid2_navig_pane_g1_ParamLimits

0x8b58,	// (0x000499ee) blid2_navig_pane_g1

0x8b64,	// (0x000499fa) blid2_navig_pane_t1_ParamLimits

0x8b64,	// (0x000499fa) blid2_navig_pane_t1

0x8b7d,	// (0x00049a13) blid2_navig_pane_t2_ParamLimits

0x8b7d,	// (0x00049a13) blid2_navig_pane_t2

0x0001,

0xfaa4,	// (0x0005093a) blid2_navig_pane_t_ParamLimits

0xfaa4,	// (0x0005093a) blid2_navig_pane_t

0x8b96,	// (0x00049a2c) blid2_navig_ring_pane_ParamLimits

0x8b96,	// (0x00049a2c) blid2_navig_ring_pane

0x8bab,	// (0x00049a41) blid2_speed_pane_ParamLimits

0x8bab,	// (0x00049a41) blid2_speed_pane

0x8bb7,	// (0x00049a4d) blid2_tripm_pane_g1_ParamLimits

0x8bb7,	// (0x00049a4d) blid2_tripm_pane_g1

0x8bcc,	// (0x00049a62) blid2_tripm_pane_g2_ParamLimits

0x8bcc,	// (0x00049a62) blid2_tripm_pane_g2

0x8be0,	// (0x00049a76) blid2_tripm_pane_g3_ParamLimits

0x8be0,	// (0x00049a76) blid2_tripm_pane_g3

0x8bf4,	// (0x00049a8a) blid2_tripm_pane_g4_ParamLimits

0x8bf4,	// (0x00049a8a) blid2_tripm_pane_g4

0x8c08,	// (0x00049a9e) blid2_tripm_pane_g5_ParamLimits

0x8c08,	// (0x00049a9e) blid2_tripm_pane_g5

0x0005,

0xfaa9,	// (0x0005093f) blid2_tripm_pane_g_ParamLimits

0xfaa9,	// (0x0005093f) blid2_tripm_pane_g

0x8c2a,	// (0x00049ac0) blid2_tripm_pane_t1_ParamLimits

0x8c2a,	// (0x00049ac0) blid2_tripm_pane_t1

0x8c41,	// (0x00049ad7) blid2_tripm_pane_t2_ParamLimits

0x8c41,	// (0x00049ad7) blid2_tripm_pane_t2

0x8c58,	// (0x00049aee) blid2_tripm_pane_t3_ParamLimits

0x8c58,	// (0x00049aee) blid2_tripm_pane_t3

0x0003,

0xfab6,	// (0x0005094c) blid2_tripm_pane_t_ParamLimits

0xfab6,	// (0x0005094c) blid2_tripm_pane_t

0x8c9b,	// (0x00049b31) cell_blid2_satellite_pane_ParamLimits

0x8c9b,	// (0x00049b31) cell_blid2_satellite_pane

0x8cb3,	// (0x00049b49) cell_blid2_satellite_pane_g1

0xb727,	// (0x0004c5bd) cell_blid2_satellite_pane_t1

0x5c06,	// (0x00046a9c) blid2_speed_pane_g1

0xb735,	// (0x0004c5cb) blid2_speed_pane_t1

0xb743,	// (0x0004c5d9) blid2_speed_pane_t2

0x0001,

0xfabf,	// (0x00050955) blid2_speed_pane_t

0x5c06,	// (0x00046a9c) blid2_navig_ring_pane_g1

0x8cbc,	// (0x00049b52) blid2_navig_ring_pane_g2

0x8cc4,	// (0x00049b5a) blid2_navig_ring_pane_g3

0x8ccc,	// (0x00049b62) blid2_navig_ring_pane_g4

0x8cd4,	// (0x00049b6a) blid2_navig_ring_pane_g5

0x0004,

0xfac4,	// (0x0005095a) blid2_navig_ring_pane_g

0xa852,	// (0x0004b6e8) bg_popup_window_pane_cp011

0xb751,	// (0x0004c5e7) popup_blid2_search_window_g1

0xb759,	// (0x0004c5ef) popup_blid2_search_window_t1

0xb767,	// (0x0004c5fd) popup_blid2_search_window_t2

0x0001,

0xfacf,	// (0x00050965) popup_blid2_search_window_t

0xdaa0,	// (0x0004e936) main_browser_pane_g1

0xd729,	// (0x0004e5bf) main_browser_pane_ParamLimits

0xef76,	// (0x0004fe0c) bg_button_pane_cp011_ParamLimits

0x7e44,	// (0x00048cda) cell_vitu2_function_pane_g1_ParamLimits

0x4c24,	// (0x00045aba) bg_popup_sub_pane_cp22_ParamLimits

0x0e3f,	// (0x00041cd5) input_focus_pane_cp08_ParamLimits

0x872e,	// (0x000495c4) popup_vitu2_query_button_pane_ParamLimits

0x872e,	// (0x000495c4) popup_vitu2_query_button_pane

0x0e56,	// (0x00041cec) popup_vitu2_query_input_button_pane

0xb377,	// (0x0004c20d) popup_vitu2_query_window_g1_ParamLimits

0x0e5e,	// (0x00041cf4) popup_vitu2_query_window_g2_ParamLimits

0xf9d0,	// (0x00050866) popup_vitu2_query_window_g_ParamLimits

0xa852,	// (0x0004b6e8) bg_button_pane_cp026

0x8cdc,	// (0x00049b72) popup_vitu2_query_input_button_pane_g1

0xa852,	// (0x0004b6e8) bg_button_pane_cp025

0xb775,	// (0x0004c60b) popup_vitu2_query_button_pane_t1

0x5f4a,	// (0x00046de0) main_mp3_pane_t6

0x5f60,	// (0x00046df6) popup_slider_window_cp01

0xb093,	// (0x0004bf29) cam4_battery_pane

0xb093,	// (0x0004bf29) cam4_battery_pane_cp02

0xb093,	// (0x0004bf29) cam4_battery_pane_cp01

0xb093,	// (0x0004bf29) cam4_battery_pane_cp03

0x5c06,	// (0x00046a9c) cam4_battery_pane_g1

0x8ce4,	// (0x00049b7a) cam4_battery_pane_g2

0x0001,

0xfad4,	// (0x0005096a) cam4_battery_pane_g

0x5a14,	// (0x000468aa) popup_blid_sat_info2_window_t11

0x38e7,	// (0x0004477d) aid_size_touch_mv_arrow_left_ParamLimits

0xe1dd,	// (0x0004f073) aid_size_touch_mv_arrow_right_ParamLimits

0xe236,	// (0x0004f0cc) navi_pane_g1_ParamLimits

0xe242,	// (0x0004f0d8) navi_pane_g2_ParamLimits

0x390b,	// (0x000447a1) navi_pane_g3_ParamLimits

0xf3ca,	// (0x00050260) navi_pane_g_ParamLimits

0x3928,	// (0x000447be) navi_pane_mv_t1_ParamLimits

0x6ca1,	// (0x00047b37) grid_imed_effect_pane_ParamLimits

0x27b0,	// (0x00043646) aid_placing_vt_slider_lsc

0xd9e2,	// (0x0004e878) aid_placing_vt_slider_prt

0xef76,	// (0x0004fe0c) bg_tb_trans_pane_cp01_ParamLimits

0x5dbc,	// (0x00046c52) popup_image_details_window_g1_ParamLimits

0x5dcf,	// (0x00046c65) popup_image_details_window_g2_ParamLimits

0x5de4,	// (0x00046c7a) popup_image_details_window_g3_ParamLimits

0x5de4,	// (0x00046c7a) popup_image_details_window_g3

0xf6d4,	// (0x0005056a) popup_image_details_window_g_ParamLimits

0x5df8,	// (0x00046c8e) popup_image_details_window_t1_ParamLimits

0x5e0a,	// (0x00046ca0) popup_image_details_window_t2_ParamLimits

0x5e23,	// (0x00046cb9) popup_image_details_window_t3_ParamLimits

0x5e37,	// (0x00046ccd) popup_image_details_window_t4_ParamLimits

0x5e52,	// (0x00046ce8) popup_image_details_window_t5_ParamLimits

0xf6db,	// (0x00050571) popup_image_details_window_t_ParamLimits

0x8950,	// (0x000497e6) cl_header_name_pane_ParamLimits

0x8950,	// (0x000497e6) cl_header_name_pane

0x8cee,	// (0x00049b84) cl_header_name_pane_t1_ParamLimits

0x8cee,	// (0x00049b84) cl_header_name_pane_t1

0x8d0f,	// (0x00049ba5) cl_header_name_pane_t2_ParamLimits

0x8d0f,	// (0x00049ba5) cl_header_name_pane_t2

0x8d51,	// (0x00049be7) cl_header_name_pane_t3_ParamLimits

0x8d51,	// (0x00049be7) cl_header_name_pane_t3

0x0002,

0xfad9,	// (0x0005096f) cl_header_name_pane_t_ParamLimits

0xfad9,	// (0x0005096f) cl_header_name_pane_t

0xe2cf,	// (0x0004f165) navi_pane_mv_g2_ParamLimits

0x7d9c,	// (0x00048c32) field_vitu2_entry_pane_g1_ParamLimits

0x7da8,	// (0x00048c3e) field_vitu2_entry_pane_g2_ParamLimits

0x7db4,	// (0x00048c4a) field_vitu2_entry_pane_g3_ParamLimits

0x7db4,	// (0x00048c4a) field_vitu2_entry_pane_g3

0xf8d6,	// (0x0005076c) field_vitu2_entry_pane_g_ParamLimits

0xb161,	// (0x0004bff7) cell_vitu2_itu_pane_g1_ParamLimits

0x7dd8,	// (0x00048c6e) cell_vitu2_itu_pane_g2_ParamLimits

0x7dd8,	// (0x00048c6e) cell_vitu2_itu_pane_g2

0x0001,

0xf8e2,	// (0x00050778) cell_vitu2_itu_pane_g_ParamLimits

0xf8e2,	// (0x00050778) cell_vitu2_itu_pane_g

0xef76,	// (0x0004fe0c) bg_vkb2_func_pane_cp05_ParamLimits

0xef76,	// (0x0004fe0c) bg_vkb2_func_pane_cp05

0xef76,	// (0x0004fe0c) bg_vkb2_func_pane_cp03

0xef76,	// (0x0004fe0c) bg_vkb2_func_pane_cp04

0xef76,	// (0x0004fe0c) bg_vkb2_func_pane_cp10_ParamLimits

0xef76,	// (0x0004fe0c) bg_vkb2_func_pane_cp10

0x0f73,	// (0x00041e09) bg_vkb2_func_pane_cp08

0x88fb,	// (0x00049791) bg_vkb2_func_pane_cp06

0x8908,	// (0x0004979e) bg_vkb2_func_pane_cp07

0xb6c2,	// (0x0004c558) bg_vkb2_func_pane_cp11_ParamLimits

0xb6c2,	// (0x0004c558) bg_vkb2_func_pane_cp11

0xb6d7,	// (0x0004c56d) bg_vkb2_func_pane_cp12_ParamLimits

0xb6d7,	// (0x0004c56d) bg_vkb2_func_pane_cp12

0xa852,	// (0x0004b6e8) bg_vkb2_func_pane_cp09

0x7e61,	// (0x00048cf7) bg_vkb2_func_pane_g1

0xdbb1,	// (0x0004ea47) bg_vkb2_func_pane_g2

0x7e69,	// (0x00048cff) bg_vkb2_func_pane_g3

0x7e71,	// (0x00048d07) bg_vkb2_func_pane_g4

0xb33c,	// (0x0004c1d2) bg_vkb2_func_pane_g5

0x7e89,	// (0x00048d1f) bg_vkb2_func_pane_g6

0x7e91,	// (0x00048d27) bg_vkb2_func_pane_g7

0x7e81,	// (0x00048d17) bg_vkb2_func_pane_g8

0xdb91,	// (0x0004ea27) bg_vkb2_func_pane_g9

0x0008,

0xfae0,	// (0x00050976) bg_vkb2_func_pane_g

0x8c1a,	// (0x00049ab0) blid2_tripm_pane_g6_ParamLimits

0x8c1a,	// (0x00049ab0) blid2_tripm_pane_g6

0x74f7,	// (0x0004838d) mp4_progress_pane_g1

0x8c89,	// (0x00049b1f) blid2_tripm_values_pane_ParamLimits

0x8c89,	// (0x00049b1f) blid2_tripm_values_pane

0x8d82,	// (0x00049c18) blid2_tripm_values_pane_t1

0x8d90,	// (0x00049c26) blid2_tripm_values_pane_t2

0x8d9e,	// (0x00049c34) blid2_tripm_values_pane_t3

0x8dac,	// (0x00049c42) blid2_tripm_values_pane_t4

0x8dba,	// (0x00049c50) blid2_tripm_values_pane_t5

0x8dc8,	// (0x00049c5e) blid2_tripm_values_pane_t6

0x8dd6,	// (0x00049c6c) blid2_tripm_values_pane_t7

0x8de4,	// (0x00049c7a) blid2_tripm_values_pane_t8

0x8df2,	// (0x00049c88) blid2_tripm_values_pane_t9

0x0008,

0xfaf3,	// (0x00050989) blid2_tripm_values_pane_t

0x27ea,	// (0x00043680) call_video_pane_t1_ParamLimits

0x2804,	// (0x0004369a) call_video_pane_t2_ParamLimits

0xf253,	// (0x000500e9) call_video_pane_t_ParamLimits

0x0c47,	// (0x00041add) msg_header_pane_g1_ParamLimits

0xe4a1,	// (0x0004f337) msg_header_pane_g2_ParamLimits

0xe4a1,	// (0x0004f337) msg_header_pane_g2

0x0001,

0xf46d,	// (0x00050303) msg_header_pane_g_ParamLimits

0xf46d,	// (0x00050303) msg_header_pane_g

0xd729,	// (0x0004e5bf) main_clock2_pane_ParamLimits

0x692a,	// (0x000477c0) grid_clock2_toolbar_pane_ParamLimits

0x692a,	// (0x000477c0) grid_clock2_toolbar_pane

0x692a,	// (0x000477c0) listscroll_clock2_pane_ParamLimits

0x692a,	// (0x000477c0) listscroll_clock2_pane

0x6a3d,	// (0x000478d3) main_clock2_pane_t3_ParamLimits

0x6a3d,	// (0x000478d3) main_clock2_pane_t3

0x6a5f,	// (0x000478f5) main_clock2_pane_t4_ParamLimits

0x6a5f,	// (0x000478f5) main_clock2_pane_t4

0xb783,	// (0x0004c619) cell_clock2_toolbar_pane

0xb78b,	// (0x0004c621) cell_clock2_toolbar_pane_cp01

0xb78b,	// (0x0004c621) cell_clock2_toolbar_pane_cp02

0xb793,	// (0x0004c629) cell_clock2_toolbar_pane_cp03

0xb79b,	// (0x0004c631) list_clock2_pane

0xb7a3,	// (0x0004c639) scroll_pane_cp10

0xb7ab,	// (0x0004c641) list_single_clock2_pane_ParamLimits

0xb7ab,	// (0x0004c641) list_single_clock2_pane

0xd8f8,	// (0x0004e78e) list_highlight_pane_cp08

0xb7b8,	// (0x0004c64e) list_single_clock2_pane_t1

0xb7c6,	// (0x0004c65c) list_single_clock2_pane_t2

0x0001,

0xfb06,	// (0x0005099c) list_single_clock2_pane_t

0xa852,	// (0x0004b6e8) bg_button_pane_cp10

0xb7d4,	// (0x0004c66a) cell_clock2_toolbar_pane_g1

0x3d3e,	// (0x00044bd4) aid_main_viewer_pane_g1_ParamLimits

0x3d3e,	// (0x00044bd4) aid_main_viewer_pane_g1

0x3d4a,	// (0x00044be0) aid_main_viewer_pane_g2_ParamLimits

0x3d4a,	// (0x00044be0) aid_main_viewer_pane_g2

0x3d56,	// (0x00044bec) aid_main_viewer_pane_g3_ParamLimits

0x3d56,	// (0x00044bec) aid_main_viewer_pane_g3

0x3d65,	// (0x00044bfb) aid_main_viewer_pane_g4_ParamLimits

0x3d65,	// (0x00044bfb) aid_main_viewer_pane_g4

0x0003,

0xf47e,	// (0x00050314) aid_main_viewer_pane_g_ParamLimits

0xf47e,	// (0x00050314) aid_main_viewer_pane_g

0xef76,	// (0x0004fe0c) main_calc_pane_ParamLimits

0x4c32,	// (0x00045ac8) main_dialer2_pane_ParamLimits

0xa852,	// (0x0004b6e8) main_cam6_pane

0xa852,	// (0x0004b6e8) main_vid6_pane

0x6936,	// (0x000477cc) listscroll_gen_pane_cp06_ParamLimits

0x6936,	// (0x000477cc) listscroll_gen_pane_cp06

0x6a80,	// (0x00047916) main_clock2_pane_t5_ParamLimits

0x6a80,	// (0x00047916) main_clock2_pane_t5

0x6ad8,	// (0x0004796e) aid_call2_pane_cp10_ParamLimits

0x6aea,	// (0x00047980) aid_call_pane_cp10_ParamLimits

0xe1d1,	// (0x0004f067) popup_clock_analogue_window_cp10_g1_ParamLimits

0xe1d1,	// (0x0004f067) popup_clock_analogue_window_cp10_g2_ParamLimits

0x6afc,	// (0x00047992) popup_clock_analogue_window_cp10_g3_ParamLimits

0x6afc,	// (0x00047992) popup_clock_analogue_window_cp10_g4_ParamLimits

0xe1d1,	// (0x0004f067) popup_clock_analogue_window_cp10_g5_ParamLimits

0xf790,	// (0x00050626) popup_clock_analogue_window_cp10_g_ParamLimits

0x6b0e,	// (0x000479a4) popup_clock_analogue_window_cp10_t1_ParamLimits

0x760f,	// (0x000484a5) cell_dialer2_keypad_pane_g2_ParamLimits

0x760f,	// (0x000484a5) cell_dialer2_keypad_pane_g2

0x0001,

0xf875,	// (0x0005070b) cell_dialer2_keypad_pane_g_ParamLimits

0xf875,	// (0x0005070b) cell_dialer2_keypad_pane_g

0x7627,	// (0x000484bd) cell_dialer2_keypad_pane_t1

0x818f,	// (0x00049025) main_cset_text2_pane_ParamLimits

0x818f,	// (0x00049025) main_cset_text2_pane

0xb551,	// (0x0004c3e7) area_vitu2_query_pane_g1_ParamLimits

0x0f3c,	// (0x00041dd2) area_vitu2_query_pane_g2_ParamLimits

0xfa23,	// (0x000508b9) area_vitu2_query_pane_g_ParamLimits

0xb5d5,	// (0x0004c46b) area_vitu2_query_pane_t7_ParamLimits

0xb5d5,	// (0x0004c46b) area_vitu2_query_pane_t7

0x88fb,	// (0x00049791) bg_button_pane_cp018_ParamLimits

0x8908,	// (0x0004979e) bg_button_pane_cp021_ParamLimits

0x0f73,	// (0x00041e09) bg_button_pane_cp022_ParamLimits

0x0f73,	// (0x00041e09) bg_vkb2_func_pane_cp08_ParamLimits

0x88fb,	// (0x00049791) bg_vkb2_func_pane_cp06_ParamLimits

0x8908,	// (0x0004979e) bg_vkb2_func_pane_cp07_ParamLimits

0x0f82,	// (0x00041e18) input_focus_pane_cp09_ParamLimits

0xd27a,	// (0x0004e110) cam6_autofocus_pane_ParamLimits

0xd27a,	// (0x0004e110) cam6_autofocus_pane

0x8e00,	// (0x00049c96) cam6_image_uncrop_pane_ParamLimits

0x8e00,	// (0x00049c96) cam6_image_uncrop_pane

0x8e0d,	// (0x00049ca3) cam6_indi_pane_ParamLimits

0x8e0d,	// (0x00049ca3) cam6_indi_pane

0x8e23,	// (0x00049cb9) cam6_mode_pane_ParamLimits

0x8e23,	// (0x00049cb9) cam6_mode_pane

0x8e35,	// (0x00049ccb) cam6_timer_pane_ParamLimits

0x8e35,	// (0x00049ccb) cam6_timer_pane

0x8e41,	// (0x00049cd7) cam6_zoom_pane_ParamLimits

0x8e41,	// (0x00049cd7) cam6_zoom_pane

0x8e4d,	// (0x00049ce3) cam6_mode_pane_g1_ParamLimits

0x8e4d,	// (0x00049ce3) cam6_mode_pane_g1

0x8e5d,	// (0x00049cf3) cam6_mode_pane_g2_ParamLimits

0x8e5d,	// (0x00049cf3) cam6_mode_pane_g2

0x8e6d,	// (0x00049d03) cam6_mode_pane_g3_ParamLimits

0x8e6d,	// (0x00049d03) cam6_mode_pane_g3

0x8e7d,	// (0x00049d13) cam6_mode_pane_g4_ParamLimits

0x8e7d,	// (0x00049d13) cam6_mode_pane_g4

0x0003,

0xfb0b,	// (0x000509a1) cam6_mode_pane_g_ParamLimits

0xfb0b,	// (0x000509a1) cam6_mode_pane_g

0xb7dc,	// (0x0004c672) bg_tb_trans_pane_cp08_ParamLimits

0xb7dc,	// (0x0004c672) bg_tb_trans_pane_cp08

0xb7ea,	// (0x0004c680) cam6_battery_pane_ParamLimits

0xb7ea,	// (0x0004c680) cam6_battery_pane

0xb800,	// (0x0004c696) cam6_indi_pane_g1_ParamLimits

0xb800,	// (0x0004c696) cam6_indi_pane_g1

0xb812,	// (0x0004c6a8) cam6_indi_pane_g2_ParamLimits

0xb812,	// (0x0004c6a8) cam6_indi_pane_g2

0xb824,	// (0x0004c6ba) cam6_indi_pane_g3_ParamLimits

0xb824,	// (0x0004c6ba) cam6_indi_pane_g3

0x0002,

0xfb14,	// (0x000509aa) cam6_indi_pane_g_ParamLimits

0xfb14,	// (0x000509aa) cam6_indi_pane_g

0xb836,	// (0x0004c6cc) cam6_indi_pane_t1_ParamLimits

0xb836,	// (0x0004c6cc) cam6_indi_pane_t1

0x7bc6,	// (0x00048a5c) cam6_autofocus_pane_g1

0x7bce,	// (0x00048a64) cam6_autofocus_pane_g2

0x7bd6,	// (0x00048a6c) cam6_autofocus_pane_g3

0x7bde,	// (0x00048a74) cam6_autofocus_pane_g4

0x0003,

0xfb1b,	// (0x000509b1) cam6_autofocus_pane_g

0xb85c,	// (0x0004c6f2) cam6_timer_pane_g1

0xb864,	// (0x0004c6fa) cam6_timer_pane_t1

0xb872,	// (0x0004c708) cam6_zoom_cont_pane

0xb87a,	// (0x0004c710) cam6_zoom_pane_g1

0xb882,	// (0x0004c718) cam6_zoom_pane_g2

0x8e8d,	// (0x00049d23) cam6_zoom_pane_g3

0x0002,

0xfb24,	// (0x000509ba) cam6_zoom_pane_g

0x5c06,	// (0x00046a9c) cam6_battery_pane_g1

0x5c06,	// (0x00046a9c) cam6_battery_pane_g2

0x0001,

0xf698,	// (0x0005052e) cam6_battery_pane_g

0xb88a,	// (0x0004c720) cam6_zoom_cont_pane_g1

0xb893,	// (0x0004c729) cam6_zoom_cont_pane_g2

0xb89c,	// (0x0004c732) cam6_zoom_cont_pane_g3

0x0002,

0xfb2b,	// (0x000509c1) cam6_zoom_cont_pane_g

0x8eaa,	// (0x00049d40) cam6_mode_pane_cp_ParamLimits

0x8eaa,	// (0x00049d40) cam6_mode_pane_cp

0x8e41,	// (0x00049cd7) cam6_zoom_pane_cp_ParamLimits

0x8e41,	// (0x00049cd7) cam6_zoom_pane_cp

0x8ebc,	// (0x00049d52) vid6_image_uncrop_cif_pane_ParamLimits

0x8ebc,	// (0x00049d52) vid6_image_uncrop_cif_pane

0x8eca,	// (0x00049d60) vid6_image_uncrop_nhd_pane_ParamLimits

0x8eca,	// (0x00049d60) vid6_image_uncrop_nhd_pane

0x8e00,	// (0x00049c96) vid6_image_uncrop_vga_pane_ParamLimits

0x8e00,	// (0x00049c96) vid6_image_uncrop_vga_pane

0x8ed7,	// (0x00049d6d) vid6_image_uncrop_wvga_pane_ParamLimits

0x8ed7,	// (0x00049d6d) vid6_image_uncrop_wvga_pane

0x8ee4,	// (0x00049d7a) vid6_indi_pane_ParamLimits

0x8ee4,	// (0x00049d7a) vid6_indi_pane

0xb7dc,	// (0x0004c672) bg_tb_trans_pane_cp09_ParamLimits

0xb7dc,	// (0x0004c672) bg_tb_trans_pane_cp09

0xb8b0,	// (0x0004c746) cam6_battery_pane_cp_ParamLimits

0xb8b0,	// (0x0004c746) cam6_battery_pane_cp

0xb8bc,	// (0x0004c752) vid6_indi_pane_g1_ParamLimits

0xb8bc,	// (0x0004c752) vid6_indi_pane_g1

0xb8ce,	// (0x0004c764) vid6_indi_pane_g2_ParamLimits

0xb8ce,	// (0x0004c764) vid6_indi_pane_g2

0xb8e0,	// (0x0004c776) vid6_indi_pane_g3_ParamLimits

0xb8e0,	// (0x0004c776) vid6_indi_pane_g3

0xb8f5,	// (0x0004c78b) vid6_indi_pane_g4_ParamLimits

0xb8f5,	// (0x0004c78b) vid6_indi_pane_g4

0xb90a,	// (0x0004c7a0) vid6_indi_pane_g5_ParamLimits

0xb90a,	// (0x0004c7a0) vid6_indi_pane_g5

0x0004,

0xfb32,	// (0x000509c8) vid6_indi_pane_g_ParamLimits

0xfb32,	// (0x000509c8) vid6_indi_pane_g

0xb924,	// (0x0004c7ba) vid6_indi_pane_t1_ParamLimits

0xb924,	// (0x0004c7ba) vid6_indi_pane_t1

0xb93a,	// (0x0004c7d0) vid6_indi_pane_t2_ParamLimits

0xb93a,	// (0x0004c7d0) vid6_indi_pane_t2

0xb962,	// (0x0004c7f8) vid6_indi_pane_t3_ParamLimits

0xb962,	// (0x0004c7f8) vid6_indi_pane_t3

0xb98a,	// (0x0004c820) vid6_indi_pane_t4_ParamLimits

0xb98a,	// (0x0004c820) vid6_indi_pane_t4

0x0003,

0xfb3d,	// (0x000509d3) vid6_indi_pane_t_ParamLimits

0xfb3d,	// (0x000509d3) vid6_indi_pane_t

0xb9ae,	// (0x0004c844) wait_bar_pane_cp08

0x8efb,	// (0x00049d91) main_cset_text2_pane_t1_ParamLimits

0x8efb,	// (0x00049d91) main_cset_text2_pane_t1

0x8e95,	// (0x00049d2b) listscroll_gen_pane_cp06_t1_ParamLimits

0x8e95,	// (0x00049d2b) listscroll_gen_pane_cp06_t1

0xa852,	// (0x0004b6e8) main_cam6_set_pane

0x5ed1,	// (0x00046d67) bg_tb_trans_pane_cp06_ParamLimits

0xb09b,	// (0x0004bf31) cam4_indicators_pane_g1_ParamLimits

0xb0ab,	// (0x0004bf41) cam4_indicators_pane_g2_ParamLimits

0xf8b2,	// (0x00050748) cam4_indicators_pane_g_ParamLimits

0xb0cb,	// (0x0004bf61) cam4_indicators_pane_t1_ParamLimits

0xef76,	// (0x0004fe0c) bg_tb_trans_pane_cp07_ParamLimits

0xb09b,	// (0x0004bf31) vid4_indicators_pane_g1_ParamLimits

0xb0ed,	// (0x0004bf83) vid4_indicators_pane_g2_ParamLimits

0xb0fd,	// (0x0004bf93) vid4_indicators_pane_g3_ParamLimits

0xb10e,	// (0x0004bfa4) vid4_indicators_pane_g4_ParamLimits

0xf8c4,	// (0x0005075a) vid4_indicators_pane_g_ParamLimits

0xb12a,	// (0x0004bfc0) vid4_indicators_pane_t1_ParamLimits

0xd1f1,	// (0x0004e087) vid4_progress_pane_g1_ParamLimits

0xd200,	// (0x0004e096) vid4_progress_pane_g2_ParamLimits

0xd20f,	// (0x0004e0a5) vid4_progress_pane_g3_ParamLimits

0xd21e,	// (0x0004e0b4) vid4_progress_pane_g4_ParamLimits

0xfa6e,	// (0x00050904) vid4_progress_pane_g_ParamLimits

0xd22a,	// (0x0004e0c0) vid4_progress_pane_t1_ParamLimits

0xd240,	// (0x0004e0d6) vid4_progress_pane_t2_ParamLimits

0xd255,	// (0x0004e0eb) vid4_progress_pane_t3_ParamLimits

0xfa79,	// (0x0005090f) vid4_progress_pane_t_ParamLimits

0xd26a,	// (0x0004e100) wait_bar_pane_cp07_ParamLimits

0x8f16,	// (0x00049dac) main_cam6_set_pane_g2_ParamLimits

0x8f16,	// (0x00049dac) main_cam6_set_pane_g2

0x8f38,	// (0x00049dce) main_cset6_listscroll_pane_ParamLimits

0x8f38,	// (0x00049dce) main_cset6_listscroll_pane

0x8f52,	// (0x00049de8) main_cset6_slider_pane_ParamLimits

0x8f52,	// (0x00049de8) main_cset6_slider_pane

0x8f68,	// (0x00049dfe) main_cset6_text2_pane_ParamLimits

0x8f68,	// (0x00049dfe) main_cset6_text2_pane

0xb9be,	// (0x0004c854) main_cset6_text_pane

0xb207,	// (0x0004c09d) main_cset_list_pane_copy1_ParamLimits

0xb207,	// (0x0004c09d) main_cset_list_pane_copy1

0xb217,	// (0x0004c0ad) scroll_pane_cp028_copy1

0x8f76,	// (0x00049e0c) cset_list_set_pane_copy1

0x8f88,	// (0x00049e1e) aid_position_infowindow_above_copy1

0x8f90,	// (0x00049e26) aid_position_infowindow_below_copy1

0x0fa5,	// (0x00041e3b) cset_list_set_pane_g1_copy1

0x0fad,	// (0x00041e43) cset_list_set_pane_g3_copy1_ParamLimits

0x0fad,	// (0x00041e43) cset_list_set_pane_g3_copy1

0x0fbc,	// (0x00041e52) cset_list_set_pane_t1_copy1_ParamLimits

0x0fbc,	// (0x00041e52) cset_list_set_pane_t1_copy1

0xef76,	// (0x0004fe0c) list_highlight_pane_cp021_copy1_ParamLimits

0xef76,	// (0x0004fe0c) list_highlight_pane_cp021_copy1

0xb9c6,	// (0x0004c85c) cset6_slider_pane_ParamLimits

0xb9c6,	// (0x0004c85c) cset6_slider_pane

0xb9f2,	// (0x0004c888) main_cset6_slider_pane_g1_ParamLimits

0xb9f2,	// (0x0004c888) main_cset6_slider_pane_g1

0x8f98,	// (0x00049e2e) main_cset6_slider_pane_g2_ParamLimits

0x8f98,	// (0x00049e2e) main_cset6_slider_pane_g2

0xb22c,	// (0x0004c0c2) main_cset6_slider_pane_g3_ParamLimits

0xb22c,	// (0x0004c0c2) main_cset6_slider_pane_g3

0x8254,	// (0x000490ea) main_cset6_slider_pane_g4_ParamLimits

0x8254,	// (0x000490ea) main_cset6_slider_pane_g4

0x829c,	// (0x00049132) main_cset6_slider_pane_g5_ParamLimits

0x829c,	// (0x00049132) main_cset6_slider_pane_g5

0xb22c,	// (0x0004c0c2) main_cset6_slider_pane_g7_ParamLimits

0xb22c,	// (0x0004c0c2) main_cset6_slider_pane_g7

0xb238,	// (0x0004c0ce) main_cset6_slider_pane_g8_ParamLimits

0xb238,	// (0x0004c0ce) main_cset6_slider_pane_g8

0x823c,	// (0x000490d2) main_cset6_slider_pane_g9_ParamLimits

0x823c,	// (0x000490d2) main_cset6_slider_pane_g9

0x8248,	// (0x000490de) main_cset6_slider_pane_g10_ParamLimits

0x8248,	// (0x000490de) main_cset6_slider_pane_g10

0x8254,	// (0x000490ea) main_cset6_slider_pane_g11_ParamLimits

0x8254,	// (0x000490ea) main_cset6_slider_pane_g11

0x8260,	// (0x000490f6) main_cset6_slider_pane_g12_ParamLimits

0x8260,	// (0x000490f6) main_cset6_slider_pane_g12

0x826c,	// (0x00049102) main_cset6_slider_pane_g13_ParamLimits

0x826c,	// (0x00049102) main_cset6_slider_pane_g13

0x8278,	// (0x0004910e) main_cset6_slider_pane_g14_ParamLimits

0x8278,	// (0x0004910e) main_cset6_slider_pane_g14

0x8fc0,	// (0x00049e56) main_cset6_slider_pane_g15_ParamLimits

0x8fc0,	// (0x00049e56) main_cset6_slider_pane_g15

0x829c,	// (0x00049132) main_cset6_slider_pane_g16_ParamLimits

0x829c,	// (0x00049132) main_cset6_slider_pane_g16

0x82a8,	// (0x0004913e) main_cset6_slider_pane_g17_ParamLimits

0x82a8,	// (0x0004913e) main_cset6_slider_pane_g17

0x0011,

0xfb46,	// (0x000509dc) main_cset6_slider_pane_g_ParamLimits

0xfb46,	// (0x000509dc) main_cset6_slider_pane_g

0xba1a,	// (0x0004c8b0) main_cset6_slider_pane_t1_ParamLimits

0xba1a,	// (0x0004c8b0) main_cset6_slider_pane_t1

0xba5b,	// (0x0004c8f1) main_cset6_slider_pane_t2_ParamLimits

0xba5b,	// (0x0004c8f1) main_cset6_slider_pane_t2

0xba86,	// (0x0004c91c) main_cset6_slider_pane_t3_ParamLimits

0xba86,	// (0x0004c91c) main_cset6_slider_pane_t3

0x8fd8,	// (0x00049e6e) main_cset6_slider_pane_t4_ParamLimits

0x8fd8,	// (0x00049e6e) main_cset6_slider_pane_t4

0x9003,	// (0x00049e99) main_cset6_slider_pane_t5_ParamLimits

0x9003,	// (0x00049e99) main_cset6_slider_pane_t5

0xbab1,	// (0x0004c947) main_cset6_slider_pane_t7_ParamLimits

0xbab1,	// (0x0004c947) main_cset6_slider_pane_t7

0x902e,	// (0x00049ec4) main_cset6_slider_pane_t8_ParamLimits

0x902e,	// (0x00049ec4) main_cset6_slider_pane_t8

0x9052,	// (0x00049ee8) main_cset6_slider_pane_t9_ParamLimits

0x9052,	// (0x00049ee8) main_cset6_slider_pane_t9

0x9076,	// (0x00049f0c) main_cset6_slider_pane_t10_ParamLimits

0x9076,	// (0x00049f0c) main_cset6_slider_pane_t10

0x909a,	// (0x00049f30) main_cset6_slider_pane_t11_ParamLimits

0x909a,	// (0x00049f30) main_cset6_slider_pane_t11

0xbae7,	// (0x0004c97d) main_cset6_slider_pane_t14_ParamLimits

0xbae7,	// (0x0004c97d) main_cset6_slider_pane_t14

0xbb20,	// (0x0004c9b6) main_cset6_slider_pane_t15_ParamLimits

0xbb20,	// (0x0004c9b6) main_cset6_slider_pane_t15

0x000b,

0xfb6b,	// (0x00050a01) main_cset6_slider_pane_t_ParamLimits

0xfb6b,	// (0x00050a01) main_cset6_slider_pane_t

0xb2f0,	// (0x0004c186) cset_slider_pane_g1_copy1

0xb2f9,	// (0x0004c18f) cset_slider_pane_g2_copy1

0xb302,	// (0x0004c198) cset_slider_pane_g3_copy1

0xa852,	// (0x0004b6e8) bg_popup_sub_pane_cp011_copy1

0xb383,	// (0x0004c219) main_cset_text_pane_g1_copy1

0xb38b,	// (0x0004c221) main_cset_text_pane_t1_copy1

0xb399,	// (0x0004c22f) main_cset_text_pane_t2_copy1

0xb3a7,	// (0x0004c23d) main_cset_text_pane_t3_copy1

0xb3b5,	// (0x0004c24b) main_cset_text_pane_t4_copy1

0xb3c3,	// (0x0004c259) main_cset_text_pane_t5_copy1

0xb3d1,	// (0x0004c267) main_cset_text_pane_t6_copy1

0xb3df,	// (0x0004c275) main_cset_text_pane_t7_copy1

0x90be,	// (0x00049f54) main_cset_text2_pane_t1_copy1

0xef76,	// (0x0004fe0c) main_ncimui_pane

0x4e4a,	// (0x00045ce0) popup_query_ncimui_window_ParamLimits

0x4e4a,	// (0x00045ce0) popup_query_ncimui_window

0xad6a,	// (0x0004bc00) field_cale_ev2_pane_g4_ParamLimits

0xad6a,	// (0x0004bc00) field_cale_ev2_pane_g4

0x747b,	// (0x00048311) cell_video_dialer_keypad_pane_g2_ParamLimits

0x747b,	// (0x00048311) cell_video_dialer_keypad_pane_g2

0x0001,

0xf84c,	// (0x000506e2) cell_video_dialer_keypad_pane_g_ParamLimits

0xf84c,	// (0x000506e2) cell_video_dialer_keypad_pane_g

0x7493,	// (0x00048329) cell_video_dialer_keypad_pane_t1

0xa852,	// (0x0004b6e8) bg_popup_window_pane_cp012

0xe010,	// (0x0004eea6) heading_pane_cp06

0xbc37,	// (0x0004cacd) ncim_query_content_pane

0xa852,	// (0x0004b6e8) bg_popup_heading_pane_cp01

0xbc3f,	// (0x0004cad5) ncim_heading_pane_t1

0xbc4d,	// (0x0004cae3) ncim_indicator_popup_pane

0xbc5f,	// (0x0004caf5) ncim_query_button_pane

0xbc73,	// (0x0004cb09) ncim_query_content_pane_t1

0xbc85,	// (0x0004cb1b) ncim_query_content_pane_t2

0x0005,

0xfbaf,	// (0x00050a45) ncim_query_content_pane_t

0xbcbf,	// (0x0004cb55) ncim_query_list_pane

0xbcd1,	// (0x0004cb67) ncim_query_popup_pane

0xbc4d,	// (0x0004cae3) ncim_indicator_popup_pane_ParamLimits

0x91fd,	// (0x0004a093) ncim_query_content_pane_g1_ParamLimits

0x91fd,	// (0x0004a093) ncim_query_content_pane_g1

0xbc73,	// (0x0004cb09) ncim_query_content_pane_t1_ParamLimits

0xbc85,	// (0x0004cb1b) ncim_query_content_pane_t2_ParamLimits

0x9209,	// (0x0004a09f) ncim_query_content_pane_t3_ParamLimits

0x9209,	// (0x0004a09f) ncim_query_content_pane_t3

0x9231,	// (0x0004a0c7) ncim_query_content_pane_t4_ParamLimits

0x9231,	// (0x0004a0c7) ncim_query_content_pane_t4

0x9259,	// (0x0004a0ef) ncim_query_content_pane_t5_ParamLimits

0x9259,	// (0x0004a0ef) ncim_query_content_pane_t5

0xbc97,	// (0x0004cb2d) ncim_query_content_pane_t6_ParamLimits

0xbc97,	// (0x0004cb2d) ncim_query_content_pane_t6

0xfbaf,	// (0x00050a45) ncim_query_content_pane_t_ParamLimits

0xbcbf,	// (0x0004cb55) ncim_query_list_pane_ParamLimits

0xbcd1,	// (0x0004cb67) ncim_query_popup_pane_ParamLimits

0xbce5,	// (0x0004cb7b) wait_bar_pane_cp04

0xa852,	// (0x0004b6e8) input_focus_pane_cp011

0xbced,	// (0x0004cb83) ncim_query_popup_pane_t1

0xbcfb,	// (0x0004cb91) ncim_list_query_list_pane_ParamLimits

0xbcfb,	// (0x0004cb91) ncim_list_query_list_pane

0xa852,	// (0x0004b6e8) bg_button_pane_cp027

0xbd0e,	// (0x0004cba4) ncim_query_button_pane_g1

0xa852,	// (0x0004b6e8) list_highlight_pane_cp012

0xbd18,	// (0x0004cbae) ncim_list_query_list_pane_g1

0xbd20,	// (0x0004cbb6) ncim_list_query_list_pane_t1

0xb0bb,	// (0x0004bf51) cam4_indicators_pane_g3_ParamLimits

0xb0bb,	// (0x0004bf51) cam4_indicators_pane_g3

0xb11a,	// (0x0004bfb0) vid4_indicators_pane_g5_ParamLimits

0xb11a,	// (0x0004bfb0) vid4_indicators_pane_g5

0xde5a,	// (0x0004ecf0) vid4_progress_pane_g5_ParamLimits

0xde5a,	// (0x0004ecf0) vid4_progress_pane_g5

0x90ed,	// (0x00049f83) main_ncimui_pane_g1

0x9153,	// (0x00049fe9) ncimui_group_query_pane_ParamLimits

0x9153,	// (0x00049fe9) ncimui_group_query_pane

0x919b,	// (0x0004a031) ncimui_list_pane_ParamLimits

0x919b,	// (0x0004a031) ncimui_list_pane

0x91c0,	// (0x0004a056) ncimui_text_pane_ParamLimits

0x91c0,	// (0x0004a056) ncimui_text_pane

0x9281,	// (0x0004a117) ncimui_text_pane_t1_ParamLimits

0x9281,	// (0x0004a117) ncimui_text_pane_t1

0xbd37,	// (0x0004cbcd) ncimui_list_single_graphic_pane_ParamLimits

0xbd37,	// (0x0004cbcd) ncimui_list_single_graphic_pane

0x929f,	// (0x0004a135) ncimui_query_pane_ParamLimits

0x929f,	// (0x0004a135) ncimui_query_pane

0xa852,	// (0x0004b6e8) list_highlight_pane_cp013

0xbd47,	// (0x0004cbdd) ncim_list_query_list_pane_t1_copy1

0xbd55,	// (0x0004cbeb) ncim_list_single_graphic_pane_g1

0xbd5d,	// (0x0004cbf3) ncim_query_button_pane_cp01

0xbd69,	// (0x0004cbff) ncim_query_entry_pane_ParamLimits

0xbd69,	// (0x0004cbff) ncim_query_entry_pane

0xbd7c,	// (0x0004cc12) ncimui_query_pane_g1

0xbd88,	// (0x0004cc1e) ncimui_query_pane_t1_ParamLimits

0xbd88,	// (0x0004cc1e) ncimui_query_pane_t1

0xef76,	// (0x0004fe0c) input_focus_pane_cp012

0xbda1,	// (0x0004cc37) ncim_query_entry_pane_t1

0xd729,	// (0x0004e5bf) main_im_pane_ParamLimits

0xef76,	// (0x0004fe0c) main_mobtv_pane_ParamLimits

0xef76,	// (0x0004fe0c) main_mobtv_pane

0x823c,	// (0x000490d2) main_cset6_slider_pane_g18_ParamLimits

0x823c,	// (0x000490d2) main_cset6_slider_pane_g18

0x826c,	// (0x00049102) main_cset6_slider_pane_g19_ParamLimits

0x826c,	// (0x00049102) main_cset6_slider_pane_g19

0xbdb3,	// (0x0004cc49) bg_main_mobtv_pane_ParamLimits

0xbdb3,	// (0x0004cc49) bg_main_mobtv_pane

0x92af,	// (0x0004a145) main_mobtv_info_pane

0x92b8,	// (0x0004a14e) main_mobtv_loading_pane_ParamLimits

0x92b8,	// (0x0004a14e) main_mobtv_loading_pane

0xbdc1,	// (0x0004cc57) main_mobtv_pg_channel_list_pane

0xbdcb,	// (0x0004cc61) main_mobtv_pg_hdr_pane

0x92c5,	// (0x0004a15b) main_mobtv_programe_curr_pane_ParamLimits

0x92c5,	// (0x0004a15b) main_mobtv_programe_curr_pane

0x92d2,	// (0x0004a168) main_mobtv_programe_next_pane_ParamLimits

0x92d2,	// (0x0004a168) main_mobtv_programe_next_pane

0xbdd4,	// (0x0004cc6a) popup_mobtv_noti_window

0x5c06,	// (0x00046a9c) main_tv_pg_hdr_pane_g1

0xbddc,	// (0x0004cc72) main_tv_pg_hdr_pane_g2

0xbde4,	// (0x0004cc7a) main_tv_pg_hdr_pane_g3

0xbdec,	// (0x0004cc82) main_tv_pg_hdr_pane_g4

0xbdf4,	// (0x0004cc8a) main_tv_pg_hdr_pane_g5

0xbdfc,	// (0x0004cc92) main_tv_pg_hdr_pane_g6

0xbe04,	// (0x0004cc9a) main_tv_pg_hdr_pane_g7

0xbe0c,	// (0x0004cca2) main_tv_pg_hdr_pane_g8

0xbe14,	// (0x0004ccaa) main_tv_pg_hdr_pane_g9

0xbe1c,	// (0x0004ccb2) main_tv_pg_hdr_pane_g10

0xbe26,	// (0x0004ccbc) main_tv_pg_hdr_pane_g11

0x000a,

0xfbbc,	// (0x00050a52) main_tv_pg_hdr_pane_g

0xbe30,	// (0x0004ccc6) main_tv_pg_hdr_pane_t1

0xbe3e,	// (0x0004ccd4) main_tv_pg_hdr_pane_t2

0xbe4c,	// (0x0004cce2) main_tv_pg_hdr_pane_t3

0xbe5a,	// (0x0004ccf0) main_tv_pg_hdr_pane_t4

0xbe68,	// (0x0004ccfe) main_tv_pg_hdr_pane_t5

0x0004,

0xfbd3,	// (0x00050a69) main_tv_pg_hdr_pane_t

0xbe76,	// (0x0004cd0c) single_mobtv_pg_channel_pane_ParamLimits

0xbe76,	// (0x0004cd0c) single_mobtv_pg_channel_pane

0xbe88,	// (0x0004cd1e) single_mobtv_pg_channel_table_pane

0xbe91,	// (0x0004cd27) single_mobtv_pg_channel_thumb_pane

0xbe9a,	// (0x0004cd30) single_tv_pg_channel_pane_g1

0xbea3,	// (0x0004cd39) single_tv_pg_channel_pane_g2

0x0001,

0xfbde,	// (0x00050a74) single_tv_pg_channel_pane_g

0x5ed1,	// (0x00046d67) bg_single_mobtv_pg_channel_thumb_pane_ParamLimits

0x5ed1,	// (0x00046d67) bg_single_mobtv_pg_channel_thumb_pane

0xbeac,	// (0x0004cd42) single_mobtv_pg_channel_thumb_pane_g1_ParamLimits

0xbeac,	// (0x0004cd42) single_mobtv_pg_channel_thumb_pane_g1

0xbeba,	// (0x0004cd50) single_mobtv_pg_channel_thumb_pane_g2_ParamLimits

0xbeba,	// (0x0004cd50) single_mobtv_pg_channel_thumb_pane_g2

0xbec6,	// (0x0004cd5c) single_mobtv_pg_channel_thumb_pane_g3_ParamLimits

0xbec6,	// (0x0004cd5c) single_mobtv_pg_channel_thumb_pane_g3

0x0002,

0xfbe3,	// (0x00050a79) single_mobtv_pg_channel_thumb_pane_g_ParamLimits

0xfbe3,	// (0x00050a79) single_mobtv_pg_channel_thumb_pane_g

0xbed2,	// (0x0004cd68) single_mobtv_pg_channel_thumb_pane_t1

0xbee0,	// (0x0004cd76) single_mobtv_pg_channel_thumb_pane_t2

0x0001,

0xfbea,	// (0x00050a80) single_mobtv_pg_channel_thumb_pane_t

0x5c06,	// (0x00046a9c) bg_single_mobtv_pg_channel_table_pane_g1

0x5c06,	// (0x00046a9c) bg_single_mobtv_pg_channel_table_pane_g2

0x0001,

0xf698,	// (0x0005052e) bg_single_mobtv_pg_channel_table_pane_g

0xbeee,	// (0x0004cd84) single_mobtv_pg_channel_table_pane_t1

0xbefc,	// (0x0004cd92) single_mobtv_pg_channel_table_pane_t2

0x0001,

0xfbef,	// (0x00050a85) single_mobtv_pg_channel_table_pane_t

0x92e7,	// (0x0004a17d) main_mobtv_info_pane_g1_ParamLimits

0x92e7,	// (0x0004a17d) main_mobtv_info_pane_g1

0x9303,	// (0x0004a199) main_mobtv_info_pane_t1_ParamLimits

0x9303,	// (0x0004a199) main_mobtv_info_pane_t1

0x9369,	// (0x0004a1ff) main_mobtv_info_pane_t2_ParamLimits

0x9369,	// (0x0004a1ff) main_mobtv_info_pane_t2

0x0002,

0xfbf9,	// (0x00050a8f) main_mobtv_info_pane_t_ParamLimits

0xfbf9,	// (0x00050a8f) main_mobtv_info_pane_t

0x93ec,	// (0x0004a282) wait_bar_pane_cp05

0x93fc,	// (0x0004a292) main_mobtv_loading_pane_g1_ParamLimits

0x93fc,	// (0x0004a292) main_mobtv_loading_pane_g1

0x940d,	// (0x0004a2a3) main_mobtv_loading_pane_g2_ParamLimits

0x940d,	// (0x0004a2a3) main_mobtv_loading_pane_g2

0x9419,	// (0x0004a2af) main_mobtv_loading_pane_g3_ParamLimits

0x9419,	// (0x0004a2af) main_mobtv_loading_pane_g3

0x0002,

0xfc00,	// (0x00050a96) main_mobtv_loading_pane_g_ParamLimits

0xfc00,	// (0x00050a96) main_mobtv_loading_pane_g

0xbf0a,	// (0x0004cda0) main_mobtv_loading_pane_t1_ParamLimits

0xbf0a,	// (0x0004cda0) main_mobtv_loading_pane_t1

0xbf22,	// (0x0004cdb8) main_mobtv_loading_pane_t2_ParamLimits

0xbf22,	// (0x0004cdb8) main_mobtv_loading_pane_t2

0x0001,

0xfc07,	// (0x00050a9d) main_mobtv_loading_pane_t_ParamLimits

0xfc07,	// (0x00050a9d) main_mobtv_loading_pane_t

0x942a,	// (0x0004a2c0) wait_bar_pane_cp06_ParamLimits

0x942a,	// (0x0004a2c0) wait_bar_pane_cp06

0xbf46,	// (0x0004cddc) main_mobtv_programe_curr_pane_t1

0xbf54,	// (0x0004cdea) main_mobtv_programe_curr_pane_t2

0x0001,

0xfc0c,	// (0x00050aa2) main_mobtv_programe_curr_pane_t

0xbf62,	// (0x0004cdf8) main_mobtv_programe_next_pane_t1

0xbf70,	// (0x0004ce06) main_mobtv_programe_next_pane_t2

0xbf7e,	// (0x0004ce14) main_mobtv_programe_next_pane_t3

0x0002,

0xfc11,	// (0x00050aa7) main_mobtv_programe_next_pane_t

0xa852,	// (0x0004b6e8) bg_popup_mobtv_noti_window_pane

0xbf8c,	// (0x0004ce22) popup_mobtv_noti_window_g1

0xbf94,	// (0x0004ce2a) popup_mobtv_noti_window_t1

0xbfa2,	// (0x0004ce38) popup_mobtv_noti_window_t2

0x0001,

0xfc18,	// (0x00050aae) popup_mobtv_noti_window_t

0x5c06,	// (0x00046a9c) bg_popup_mobtv_noti_window_pane_g1

0xa852,	// (0x0004b6e8) sc_clock_pane

0xa852,	// (0x0004b6e8) main_fs_bigclock_pane

0x8c73,	// (0x00049b09) blid2_tripm_pane_t4_ParamLimits

0x8c73,	// (0x00049b09) blid2_tripm_pane_t4

0x9439,	// (0x0004a2cf) sc_clock_pane_g1_ParamLimits

0x9439,	// (0x0004a2cf) sc_clock_pane_g1

0x944b,	// (0x0004a2e1) sc_clock_pane_t1_ParamLimits

0x944b,	// (0x0004a2e1) sc_clock_pane_t1

0x946d,	// (0x0004a303) sc_clock_pane_t2_ParamLimits

0x946d,	// (0x0004a303) sc_clock_pane_t2

0x9483,	// (0x0004a319) sc_clock_pane_t3_ParamLimits

0x9483,	// (0x0004a319) sc_clock_pane_t3

0x0004,

0xfc1d,	// (0x00050ab3) sc_clock_pane_t_ParamLimits

0xfc1d,	// (0x00050ab3) sc_clock_pane_t

0x9e53,	// (0x0004ace9) main_fs_bigclock_indicator_pane_ParamLimits

0x9e53,	// (0x0004ace9) main_fs_bigclock_indicator_pane

0x951f,	// (0x0004a3b5) main_fs_bigclock_pane_g1_ParamLimits

0x951f,	// (0x0004a3b5) main_fs_bigclock_pane_g1

0x9e5f,	// (0x0004acf5) main_fs_bigclock_pane_t1_ParamLimits

0x9e5f,	// (0x0004acf5) main_fs_bigclock_pane_t1

0x9e71,	// (0x0004ad07) main_fs_bigclock_pane_t2_ParamLimits

0x9e71,	// (0x0004ad07) main_fs_bigclock_pane_t2

0x9e83,	// (0x0004ad19) main_fs_bigclock_pane_t3_ParamLimits

0x9e83,	// (0x0004ad19) main_fs_bigclock_pane_t3

0x0002,

0xfe2b,	// (0x00050cc1) main_fs_bigclock_pane_t_ParamLimits

0xfe2b,	// (0x00050cc1) main_fs_bigclock_pane_t

0xca73,	// (0x0004d909) main_fs_bigclock_indicator_pane_g1

0xbc67,	// (0x0004cafd) ncim_query_content_pane_g2_ParamLimits

0xbc67,	// (0x0004cafd) ncim_query_content_pane_g2

0x0001,

0xfbaa,	// (0x00050a40) ncim_query_content_pane_g_ParamLimits

0xfbaa,	// (0x00050a40) ncim_query_content_pane_g

0x949a,	// (0x0004a330) sc_clock_pane_t4_ParamLimits

0x949a,	// (0x0004a330) sc_clock_pane_t4

0xef76,	// (0x0004fe0c) main_radioblah_pane

0xb02f,	// (0x0004bec5) cell_call4_button_pane_t1_copy1_ParamLimits

0xb02f,	// (0x0004bec5) cell_call4_button_pane_t1_copy1

0x9105,	// (0x00049f9b) main_ncimui_pane_t1_ParamLimits

0x9105,	// (0x00049f9b) main_ncimui_pane_t1

0x911f,	// (0x00049fb5) main_ncimui_pane_t2_ParamLimits

0x911f,	// (0x00049fb5) main_ncimui_pane_t2

0x0002,

0xfba3,	// (0x00050a39) main_ncimui_pane_t_ParamLimits

0xfba3,	// (0x00050a39) main_ncimui_pane_t

0xc0e3,	// (0x0004cf79) main_radioblah_anim_pane_ParamLimits

0xc0e3,	// (0x0004cf79) main_radioblah_anim_pane

0xc0f4,	// (0x0004cf8a) main_radioblah_info_pane_ParamLimits

0xc0f4,	// (0x0004cf8a) main_radioblah_info_pane

0xc108,	// (0x0004cf9e) main_radioblah_pane_t1_ParamLimits

0xc108,	// (0x0004cf9e) main_radioblah_pane_t1

0xc124,	// (0x0004cfba) main_radioblah_pane_t2_ParamLimits

0xc124,	// (0x0004cfba) main_radioblah_pane_t2

0x0003,

0xfc3e,	// (0x00050ad4) main_radioblah_pane_t_ParamLimits

0xfc3e,	// (0x00050ad4) main_radioblah_pane_t

0x9569,	// (0x0004a3ff) main_radioblah_rocker_ctrl_pane_ParamLimits

0x9569,	// (0x0004a3ff) main_radioblah_rocker_ctrl_pane

0xc16c,	// (0x0004d002) main_radioblah_info_pane_t1_ParamLimits

0xc16c,	// (0x0004d002) main_radioblah_info_pane_t1

0x95bd,	// (0x0004a453) main_radioblah_info_pane_t2_ParamLimits

0x95bd,	// (0x0004a453) main_radioblah_info_pane_t2

0x0003,

0xfc47,	// (0x00050add) main_radioblah_info_pane_t_ParamLimits

0xfc47,	// (0x00050add) main_radioblah_info_pane_t

0x5c06,	// (0x00046a9c) main_radioblah_rocker_ctrl_pane_g1

0x966b,	// (0x0004a501) main_radioblah_rocker_ctrl_pane_g2

0x9673,	// (0x0004a509) main_radioblah_rocker_ctrl_pane_g3

0x967b,	// (0x0004a511) main_radioblah_rocker_ctrl_pane_g4

0x9683,	// (0x0004a519) main_radioblah_rocker_ctrl_pane_g5

0x968b,	// (0x0004a521) main_radioblah_rocker_ctrl_pane_g6

0x0005,

0xfc50,	// (0x00050ae6) main_radioblah_rocker_ctrl_pane_g

0x90be,	// (0x00049f54) main_cset_text2_pane_t1_copy1_ParamLimits

0xb08b,	// (0x0004bf21) cam4_image_uncrop_qvga_pane

0xb0e5,	// (0x0004bf7b) vid4_image_uncrop_qcif_pane

0xd27a,	// (0x0004e110) cam6_image_uncrop_qvga_pane_ParamLimits

0xd27a,	// (0x0004e110) cam6_image_uncrop_qvga_pane

0xb8a4,	// (0x0004c73a) vid6_image_uncrop_qcif_pane_ParamLimits

0xb8a4,	// (0x0004c73a) vid6_image_uncrop_qcif_pane

0xa852,	// (0x0004b6e8) bg_popup_preview_window_pane_cp03

0xbc0d,	// (0x0004caa3) list_cset_text2_pane

0xbc15,	// (0x0004caab) main_cset6_text2_pane_g1

0xbc1d,	// (0x0004cab3) main_cset6_text2_pane_t1

0x9693,	// (0x0004a529) list_cset_text2_pane_t1_ParamLimits

0x9693,	// (0x0004a529) list_cset_text2_pane_t1

0xef76,	// (0x0004fe0c) main_radioblah_pane_ParamLimits

0x93da,	// (0x0004a270) main_mobtv_info_pane_t3_ParamLimits

0x93da,	// (0x0004a270) main_mobtv_info_pane_t3

0x9557,	// (0x0004a3ed) main_radioblah_pane_g1

0x9591,	// (0x0004a427) main_radioblah_info_pane_g1

0x9610,	// (0x0004a4a6) main_radioblah_info_pane_t3_ParamLimits

0x9610,	// (0x0004a4a6) main_radioblah_info_pane_t3

0x34d6,	// (0x0004436c) highlight_cell_cale_month_pane_ParamLimits

0x34d6,	// (0x0004436c) highlight_cell_cale_month_pane

0xa852,	// (0x0004b6e8) main_phob_fisheye_pane

0x672c,	// (0x000475c2) scroll_pane_cp0031_ParamLimits

0x672c,	// (0x000475c2) scroll_pane_cp0031

0xb9ae,	// (0x0004c844) wait_bar_pane_cp08_ParamLimits

0x8f76,	// (0x00049e0c) cset_list_set_pane_copy1_ParamLimits

0xc1a6,	// (0x0004d03c) highlight_cell_cale_month_pane_g1

0x96ac,	// (0x0004a542) highlight_cell_cale_month_pane_t1

0xc1ae,	// (0x0004d044) list_gen_pane_cp01

0xb217,	// (0x0004c0ad) scroll_pane_01

0xf09a,	// (0x0004ff30) list_single_double_fisheye_pane

0xc1b7,	// (0x0004d04d) list_double_fisheye_pane_g1_ParamLimits

0xc1b7,	// (0x0004d04d) list_double_fisheye_pane_g1

0xc1c3,	// (0x0004d059) list_double_fisheye_pane_g2_ParamLimits

0xc1c3,	// (0x0004d059) list_double_fisheye_pane_g2

0xf0a3,	// (0x0004ff39) list_double_fisheye_pane_g3_ParamLimits

0xf0a3,	// (0x0004ff39) list_double_fisheye_pane_g3

0x0004,

0xfc5d,	// (0x00050af3) list_double_fisheye_pane_g_ParamLimits

0xfc5d,	// (0x00050af3) list_double_fisheye_pane_g

0xc1f4,	// (0x0004d08a) list_double_fisheye_pane_t1_ParamLimits

0xc1f4,	// (0x0004d08a) list_double_fisheye_pane_t1

0xc20f,	// (0x0004d0a5) list_double_fisheye_pane_t2_ParamLimits

0xc20f,	// (0x0004d0a5) list_double_fisheye_pane_t2

0x0001,

0xfc68,	// (0x00050afe) list_double_fisheye_pane_t_ParamLimits

0xfc68,	// (0x00050afe) list_double_fisheye_pane_t

0xa852,	// (0x0004b6e8) main_call5_pane

0x94c3,	// (0x0004a359) sc_swipe_pane_ParamLimits

0x94c3,	// (0x0004a359) sc_swipe_pane

0x96cb,	// (0x0004a561) call5_image_pane_ParamLimits

0x96cb,	// (0x0004a561) call5_image_pane

0x96e0,	// (0x0004a576) call5_swipe_1_pane_ParamLimits

0x96e0,	// (0x0004a576) call5_swipe_1_pane

0x96f1,	// (0x0004a587) call5_swipe_2_pane_ParamLimits

0x96f1,	// (0x0004a587) call5_swipe_2_pane

0x9716,	// (0x0004a5ac) popup_call5_audio_first_window_ParamLimits

0x9716,	// (0x0004a5ac) popup_call5_audio_first_window

0x5ed1,	// (0x00046d67) call5_swipe_1_pane_g1_ParamLimits

0x5ed1,	// (0x00046d67) call5_swipe_1_pane_g1

0xc231,	// (0x0004d0c7) call5_swipe_1_pane_g2_ParamLimits

0xc231,	// (0x0004d0c7) call5_swipe_1_pane_g2

0x0001,

0xfc6d,	// (0x00050b03) call5_swipe_1_pane_g_ParamLimits

0xfc6d,	// (0x00050b03) call5_swipe_1_pane_g

0xc23d,	// (0x0004d0d3) call5_swipe_1_pane_t1_ParamLimits

0xc23d,	// (0x0004d0d3) call5_swipe_1_pane_t1

0x5ed1,	// (0x00046d67) call5_swipe_2_pane_g1_ParamLimits

0x5ed1,	// (0x00046d67) call5_swipe_2_pane_g1

0xc252,	// (0x0004d0e8) call5_swipe_2_pane_g2_ParamLimits

0xc252,	// (0x0004d0e8) call5_swipe_2_pane_g2

0x0001,

0xfc72,	// (0x00050b08) call5_swipe_2_pane_g_ParamLimits

0xfc72,	// (0x00050b08) call5_swipe_2_pane_g

0xc25e,	// (0x0004d0f4) call5_swipe_2_pane_t1_ParamLimits

0xc25e,	// (0x0004d0f4) call5_swipe_2_pane_t1

0xc273,	// (0x0004d109) sc_swipe_pane_g1_ParamLimits

0xc273,	// (0x0004d109) sc_swipe_pane_g1

0xc280,	// (0x0004d116) sc_swipe_pane_g2_ParamLimits

0xc280,	// (0x0004d116) sc_swipe_pane_g2

0x0001,

0xfc77,	// (0x00050b0d) sc_swipe_pane_g_ParamLimits

0xfc77,	// (0x00050b0d) sc_swipe_pane_g

0xc28c,	// (0x0004d122) sc_swipe_pane_t1_ParamLimits

0xc28c,	// (0x0004d122) sc_swipe_pane_t1

0xa852,	// (0x0004b6e8) main_cmail_launcher_pane

0x9725,	// (0x0004a5bb) aid_size_cell_cmail_l_ParamLimits

0x9725,	// (0x0004a5bb) aid_size_cell_cmail_l

0x973e,	// (0x0004a5d4) grid_cmail_l_pane_ParamLimits

0x973e,	// (0x0004a5d4) grid_cmail_l_pane

0x9753,	// (0x0004a5e9) cell_cmail_l_pane_ParamLimits

0x9753,	// (0x0004a5e9) cell_cmail_l_pane

0x9775,	// (0x0004a60b) cell_cmail_l_pane_g1_ParamLimits

0x9775,	// (0x0004a60b) cell_cmail_l_pane_g1

0x9785,	// (0x0004a61b) cell_cmail_l_pane_t1_ParamLimits

0x9785,	// (0x0004a61b) cell_cmail_l_pane_t1

0x979b,	// (0x0004a631) cell_cmail_l_pane_t2_ParamLimits

0x979b,	// (0x0004a631) cell_cmail_l_pane_t2

0x0001,

0xfc7c,	// (0x00050b12) cell_cmail_l_pane_t_ParamLimits

0xfc7c,	// (0x00050b12) cell_cmail_l_pane_t

0xef76,	// (0x0004fe0c) grid_highlight_pane_cp018_ParamLimits

0xef76,	// (0x0004fe0c) grid_highlight_pane_cp018

0x187c,	// (0x00042712) main2_pane_ParamLimits

0x187c,	// (0x00042712) main2_pane

0xd7d4,	// (0x0004e66a) popup_sp_fs_action_menu_bg_pane_g1

0xd7dc,	// (0x0004e672) popup_sp_fs_action_menu_bg_pane_g2

0xd7e4,	// (0x0004e67a) popup_sp_fs_action_menu_bg_pane_g3

0xd7ec,	// (0x0004e682) popup_sp_fs_action_menu_bg_pane_g4

0xd7f4,	// (0x0004e68a) popup_sp_fs_action_menu_bg_pane_g5

0xd7fc,	// (0x0004e692) popup_sp_fs_action_menu_bg_pane_g6

0xd804,	// (0x0004e69a) popup_sp_fs_action_menu_bg_pane_g7

0xd80c,	// (0x0004e6a2) popup_sp_fs_action_menu_bg_pane_g8

0xd814,	// (0x0004e6aa) popup_sp_fs_action_menu_bg_pane_g9

0xd81c,	// (0x0004e6b2) popup_sp_fs_action_menu_bg_pane_g10

0xd81c,	// (0x0004e6b2) popup_sp_fs_action_menu_bg_pane_g11

0x000a,

0xf16f,	// (0x00050005) popup_sp_fs_action_menu_bg_pane_g

0xa999,	// (0x0004b82f) list_medium_line_x2_t3_g3_g1_ParamLimits

0xa999,	// (0x0004b82f) list_medium_line_x2_t3_g3_g1

0xa9a5,	// (0x0004b83b) list_medium_line_x2_t3_g3_g2_ParamLimits

0xa9a5,	// (0x0004b83b) list_medium_line_x2_t3_g3_g2

0xa9b1,	// (0x0004b847) list_medium_line_x2_t3_g3_g3_ParamLimits

0xa9b1,	// (0x0004b847) list_medium_line_x2_t3_g3_g3

0x0002,

0xf21d,	// (0x000500b3) list_medium_line_x2_t3_g3_g_ParamLimits

0xf21d,	// (0x000500b3) list_medium_line_x2_t3_g3_g

0xa9bd,	// (0x0004b853) list_medium_line_x2_t3_g3_t1_ParamLimits

0xa9bd,	// (0x0004b853) list_medium_line_x2_t3_g3_t1

0x0b4f,	// (0x000419e5) list_medium_line_x2_t3_g3_t2_ParamLimits

0x0b4f,	// (0x000419e5) list_medium_line_x2_t3_g3_t2

0xa9d2,	// (0x0004b868) list_medium_line_x2_t3_g3_t3_ParamLimits

0xa9d2,	// (0x0004b868) list_medium_line_x2_t3_g3_t3

0x0002,

0xf224,	// (0x000500ba) list_medium_line_x2_t3_g3_t_ParamLimits

0xf224,	// (0x000500ba) list_medium_line_x2_t3_g3_t

0xa999,	// (0x0004b82f) list_medium_line_x2_t3_g2_g1_ParamLimits

0xa999,	// (0x0004b82f) list_medium_line_x2_t3_g2_g1

0xa9b1,	// (0x0004b847) list_medium_line_x2_t3_g2_g2_ParamLimits

0xa9b1,	// (0x0004b847) list_medium_line_x2_t3_g2_g2

0x0001,

0xf22b,	// (0x000500c1) list_medium_line_x2_t3_g2_g_ParamLimits

0xf22b,	// (0x000500c1) list_medium_line_x2_t3_g2_g

0xa9e7,	// (0x0004b87d) list_medium_line_x2_t3_g2_t1_ParamLimits

0xa9e7,	// (0x0004b87d) list_medium_line_x2_t3_g2_t1

0xa9fd,	// (0x0004b893) list_medium_line_x2_t3_g2_t2_ParamLimits

0xa9fd,	// (0x0004b893) list_medium_line_x2_t3_g2_t2

0xa9d2,	// (0x0004b868) list_medium_line_x2_t3_g2_t3_ParamLimits

0xa9d2,	// (0x0004b868) list_medium_line_x2_t3_g2_t3

0x0002,

0xf230,	// (0x000500c6) list_medium_line_x2_t3_g2_t_ParamLimits

0xf230,	// (0x000500c6) list_medium_line_x2_t3_g2_t

0xa999,	// (0x0004b82f) list_medium_line_x2_t4_g4_g1_ParamLimits

0xa999,	// (0x0004b82f) list_medium_line_x2_t4_g4_g1

0xaa0f,	// (0x0004b8a5) list_medium_line_x2_t4_g4_g2_ParamLimits

0xaa0f,	// (0x0004b8a5) list_medium_line_x2_t4_g4_g2

0xa9a5,	// (0x0004b83b) list_medium_line_x2_t4_g4_g3_ParamLimits

0xa9a5,	// (0x0004b83b) list_medium_line_x2_t4_g4_g3

0xaa1b,	// (0x0004b8b1) list_medium_line_x2_t4_g4_g4_ParamLimits

0xaa1b,	// (0x0004b8b1) list_medium_line_x2_t4_g4_g4

0x0003,

0xf237,	// (0x000500cd) list_medium_line_x2_t4_g4_g_ParamLimits

0xf237,	// (0x000500cd) list_medium_line_x2_t4_g4_g

0x0b61,	// (0x000419f7) list_medium_line_x2_t4_g4_t1_ParamLimits

0x0b61,	// (0x000419f7) list_medium_line_x2_t4_g4_t1

0x0b7b,	// (0x00041a11) list_medium_line_x2_t4_g4_t2_ParamLimits

0x0b7b,	// (0x00041a11) list_medium_line_x2_t4_g4_t2

0x0b90,	// (0x00041a26) list_medium_line_x2_t4_g4_t3_ParamLimits

0x0b90,	// (0x00041a26) list_medium_line_x2_t4_g4_t3

0xaa27,	// (0x0004b8bd) list_medium_line_x2_t4_g4_t4_ParamLimits

0xaa27,	// (0x0004b8bd) list_medium_line_x2_t4_g4_t4

0x0003,

0xf240,	// (0x000500d6) list_medium_line_x2_t4_g4_t_ParamLimits

0xf240,	// (0x000500d6) list_medium_line_x2_t4_g4_t

0xa999,	// (0x0004b82f) list_medium_line_x2_t2_g4_g1_ParamLimits

0xa999,	// (0x0004b82f) list_medium_line_x2_t2_g4_g1

0xaa0f,	// (0x0004b8a5) list_medium_line_x2_t2_g4_g2_ParamLimits

0xaa0f,	// (0x0004b8a5) list_medium_line_x2_t2_g4_g2

0xa9a5,	// (0x0004b83b) list_medium_line_x2_t2_g4_g3_ParamLimits

0xa9a5,	// (0x0004b83b) list_medium_line_x2_t2_g4_g3

0xa9b1,	// (0x0004b847) list_medium_line_x2_t2_g4_g4_ParamLimits

0xa9b1,	// (0x0004b847) list_medium_line_x2_t2_g4_g4

0x0003,

0xf2a7,	// (0x0005013d) list_medium_line_x2_t2_g4_g_ParamLimits

0xf2a7,	// (0x0005013d) list_medium_line_x2_t2_g4_g

0xaa39,	// (0x0004b8cf) list_medium_line_x2_t2_g4_t1_ParamLimits

0xaa39,	// (0x0004b8cf) list_medium_line_x2_t2_g4_t1

0xa9d2,	// (0x0004b868) list_medium_line_x2_t2_g4_t2_ParamLimits

0xa9d2,	// (0x0004b868) list_medium_line_x2_t2_g4_t2

0x0001,

0xf2b0,	// (0x00050146) list_medium_line_x2_t2_g4_t_ParamLimits

0xf2b0,	// (0x00050146) list_medium_line_x2_t2_g4_t

0xa999,	// (0x0004b82f) list_medium_line_x2_t2_g3_g1_ParamLimits

0xa999,	// (0x0004b82f) list_medium_line_x2_t2_g3_g1

0xa9a5,	// (0x0004b83b) list_medium_line_x2_t2_g3_g2_ParamLimits

0xa9a5,	// (0x0004b83b) list_medium_line_x2_t2_g3_g2

0xa9b1,	// (0x0004b847) list_medium_line_x2_t2_g3_g3_ParamLimits

0xa9b1,	// (0x0004b847) list_medium_line_x2_t2_g3_g3

0x0002,

0xf21d,	// (0x000500b3) list_medium_line_x2_t2_g3_g_ParamLimits

0xf21d,	// (0x000500b3) list_medium_line_x2_t2_g3_g

0xaa4e,	// (0x0004b8e4) list_medium_line_x2_t2_g3_t1_ParamLimits

0xaa4e,	// (0x0004b8e4) list_medium_line_x2_t2_g3_t1

0xa9d2,	// (0x0004b868) list_medium_line_x2_t2_g3_t2_ParamLimits

0xa9d2,	// (0x0004b868) list_medium_line_x2_t2_g3_t2

0x0001,

0xf2b5,	// (0x0005014b) list_medium_line_x2_t2_g3_t_ParamLimits

0xf2b5,	// (0x0005014b) list_medium_line_x2_t2_g3_t

0x3633,	// (0x000444c9) main_sp_fs_list_pane_ParamLimits

0x3633,	// (0x000444c9) main_sp_fs_list_pane

0x3640,	// (0x000444d6) sp_fs_scroll_pane_ParamLimits

0x3640,	// (0x000444d6) sp_fs_scroll_pane

0x0ba5,	// (0x00041a3b) list_medium_line_x2_t3_t1

0x0bb5,	// (0x00041a4b) list_medium_line_x2_t3_t2

0xaa91,	// (0x0004b927) list_medium_line_x2_t3_t3

0x0002,

0xf300,	// (0x00050196) list_medium_line_x2_t3_t

0x0bc3,	// (0x00041a59) list_medium_line_x3_t4_t1

0x0bd3,	// (0x00041a69) list_medium_line_x3_t4_t2

0xaa9f,	// (0x0004b935) list_medium_line_x3_t4_t3

0xaaad,	// (0x0004b943) list_medium_line_x3_t4_t4

0x0003,

0xf307,	// (0x0005019d) list_medium_line_x3_t4_t

0x0be1,	// (0x00041a77) list_medium_line_x4_t5_t1

0x0bf1,	// (0x00041a87) list_medium_line_x4_t5_t2

0xaa9f,	// (0x0004b935) list_medium_line_x4_t5_t3

0xaabb,	// (0x0004b951) list_medium_line_x4_t5_t4

0xaaad,	// (0x0004b943) list_medium_line_x4_t5_t5

0x0004,

0xf310,	// (0x000501a6) list_medium_line_x4_t5_t

0xa999,	// (0x0004b82f) list_medium_line_t4_g4_g1_ParamLimits

0xa999,	// (0x0004b82f) list_medium_line_t4_g4_g1

0xaa1b,	// (0x0004b8b1) list_medium_line_t4_g4_g2_ParamLimits

0xaa1b,	// (0x0004b8b1) list_medium_line_t4_g4_g2

0xaac9,	// (0x0004b95f) list_medium_line_t4_g4_g3_ParamLimits

0xaac9,	// (0x0004b95f) list_medium_line_t4_g4_g3

0xa9b1,	// (0x0004b847) list_medium_line_t4_g4_g4_ParamLimits

0xa9b1,	// (0x0004b847) list_medium_line_t4_g4_g4

0x0003,

0xf31b,	// (0x000501b1) list_medium_line_t4_g4_g_ParamLimits

0xf31b,	// (0x000501b1) list_medium_line_t4_g4_g

0xaad5,	// (0x0004b96b) list_medium_line_t4_g4_t1_ParamLimits

0xaad5,	// (0x0004b96b) list_medium_line_t4_g4_t1

0xaaea,	// (0x0004b980) list_medium_line_t4_g4_t2_ParamLimits

0xaaea,	// (0x0004b980) list_medium_line_t4_g4_t2

0xab00,	// (0x0004b996) list_medium_line_t4_g4_t3_ParamLimits

0xab00,	// (0x0004b996) list_medium_line_t4_g4_t3

0xab16,	// (0x0004b9ac) list_medium_line_t4_g4_t4_ParamLimits

0xab16,	// (0x0004b9ac) list_medium_line_t4_g4_t4

0x0003,

0xf324,	// (0x000501ba) list_medium_line_t4_g4_t_ParamLimits

0xf324,	// (0x000501ba) list_medium_line_t4_g4_t

0x370e,	// (0x000445a4) chi_dic_find_pane_g1

0x4c46,	// (0x00045adc) main_tport_pane

0x0dda,	// (0x00041c70) list_medium_line_plain_t1

0x0de8,	// (0x00041c7e) list_medium_line_t2_g2_g1_ParamLimits

0x0de8,	// (0x00041c7e) list_medium_line_t2_g2_g1

0x0df4,	// (0x00041c8a) list_medium_line_t2_g2_g2_ParamLimits

0x0df4,	// (0x00041c8a) list_medium_line_t2_g2_g2

0x0001,

0xf9b4,	// (0x0005084a) list_medium_line_t2_g2_g_ParamLimits

0xf9b4,	// (0x0005084a) list_medium_line_t2_g2_g

0x0e00,	// (0x00041c96) list_medium_line_t2_g2_t1_ParamLimits

0x0e00,	// (0x00041c96) list_medium_line_t2_g2_t1

0x0e1a,	// (0x00041cb0) list_medium_line_t2_g2_t2_ParamLimits

0x0e1a,	// (0x00041cb0) list_medium_line_t2_g2_t2

0x0001,

0xf9b9,	// (0x0005084f) list_medium_line_t2_g2_t_ParamLimits

0xf9b9,	// (0x0005084f) list_medium_line_t2_g2_t

0xb653,	// (0x0004c4e9) aid_sp_fs_list_icon_a_sm

0xb65b,	// (0x0004c4f1) aid_sp_fs_list_icon_d

0xb663,	// (0x0004c4f9) aid_sp_fs_text_primary

0xb66c,	// (0x0004c502) aid_sp_fs_text_secondary

0xb675,	// (0x0004c50b) list_medium_line

0xb675,	// (0x0004c50b) list_medium_line_g2

0xb675,	// (0x0004c50b) list_medium_line_g3

0xb675,	// (0x0004c50b) list_medium_line_plain

0xb675,	// (0x0004c50b) list_medium_line_plain_t2

0xb675,	// (0x0004c50b) list_medium_line_plain_t3

0xb675,	// (0x0004c50b) list_medium_line_right_icon

0xb675,	// (0x0004c50b) list_medium_line_right_iconx2

0xb675,	// (0x0004c50b) list_medium_line_t2

0xb675,	// (0x0004c50b) list_medium_line_t2_g2

0xb675,	// (0x0004c50b) list_medium_line_t2_g3

0xb675,	// (0x0004c50b) list_medium_line_t2_right_icon

0xb675,	// (0x0004c50b) list_medium_line_t2_right_iconx2

0xb675,	// (0x0004c50b) list_medium_line_t3

0xb675,	// (0x0004c50b) list_medium_line_t3_g2

0xb675,	// (0x0004c50b) list_medium_line_t3_g3

0xb675,	// (0x0004c50b) list_medium_line_t3_right_iconx2

0xf091,	// (0x0004ff27) list_medium_line_t4_g4

0xb675,	// (0x0004c50b) list_medium_line_x2

0xb675,	// (0x0004c50b) list_medium_line_x2_t2_g2

0xb675,	// (0x0004c50b) list_medium_line_x2_t2_g3

0xb675,	// (0x0004c50b) list_medium_line_x2_t2_g4

0xb675,	// (0x0004c50b) list_medium_line_x2_t3

0xb675,	// (0x0004c50b) list_medium_line_x2_t3_g2

0xb675,	// (0x0004c50b) list_medium_line_x2_t3_g3

0xb675,	// (0x0004c50b) list_medium_line_x2_t3_g4

0xb675,	// (0x0004c50b) list_medium_line_x2_t4_g2

0xb675,	// (0x0004c50b) list_medium_line_x2_t4_g4

0xb67e,	// (0x0004c514) list_medium_line_x3

0xb67e,	// (0x0004c514) list_medium_line_x3_t4

0xb67e,	// (0x0004c514) list_medium_line_x3_t4_g4

0xf091,	// (0x0004ff27) list_medium_line_x4_t4

0xf091,	// (0x0004ff27) list_medium_line_x4_t4_g7

0xf091,	// (0x0004ff27) list_medium_line_x4_t5

0x0f91,	// (0x00041e27) list_single_fs_dyc_pane_ParamLimits

0x0f91,	// (0x00041e27) list_single_fs_dyc_pane

0xa999,	// (0x0004b82f) list_medium_line_x4_t4_g7_g1_ParamLimits

0xa999,	// (0x0004b82f) list_medium_line_x4_t4_g7_g1

0xbb59,	// (0x0004c9ef) list_medium_line_x4_t4_g7_g2_ParamLimits

0xbb59,	// (0x0004c9ef) list_medium_line_x4_t4_g7_g2

0xbb65,	// (0x0004c9fb) list_medium_line_x4_t4_g7_g3_ParamLimits

0xbb65,	// (0x0004c9fb) list_medium_line_x4_t4_g7_g3

0xbb74,	// (0x0004ca0a) list_medium_line_x4_t4_g7_g4_ParamLimits

0xbb74,	// (0x0004ca0a) list_medium_line_x4_t4_g7_g4

0xbb80,	// (0x0004ca16) list_medium_line_x4_t4_g7_g5_ParamLimits

0xbb80,	// (0x0004ca16) list_medium_line_x4_t4_g7_g5

0xbb8f,	// (0x0004ca25) list_medium_line_x4_t4_g7_g6_ParamLimits

0xbb8f,	// (0x0004ca25) list_medium_line_x4_t4_g7_g6

0xbb9e,	// (0x0004ca34) list_medium_line_x4_t4_g7_g7_ParamLimits

0xbb9e,	// (0x0004ca34) list_medium_line_x4_t4_g7_g7

0x0006,

0xfb84,	// (0x00050a1a) list_medium_line_x4_t4_g7_g_ParamLimits

0xfb84,	// (0x00050a1a) list_medium_line_x4_t4_g7_g

0xbbaa,	// (0x0004ca40) list_medium_line_x4_t4_g7_t1_ParamLimits

0xbbaa,	// (0x0004ca40) list_medium_line_x4_t4_g7_t1

0xbbbf,	// (0x0004ca55) list_medium_line_x4_t4_g7_t2_ParamLimits

0xbbbf,	// (0x0004ca55) list_medium_line_x4_t4_g7_t2

0xbbd4,	// (0x0004ca6a) list_medium_line_x4_t4_g7_t3_ParamLimits

0xbbd4,	// (0x0004ca6a) list_medium_line_x4_t4_g7_t3

0xbbe9,	// (0x0004ca7f) list_medium_line_x4_t4_g7_t4_ParamLimits

0xbbe9,	// (0x0004ca7f) list_medium_line_x4_t4_g7_t4

0xbbfb,	// (0x0004ca91) list_medium_line_x4_t4_g7_t5_ParamLimits

0xbbfb,	// (0x0004ca91) list_medium_line_x4_t4_g7_t5

0x0004,

0xfb93,	// (0x00050a29) list_medium_line_x4_t4_g7_t_ParamLimits

0xfb93,	// (0x00050a29) list_medium_line_x4_t4_g7_t

0x0fd1,	// (0x00041e67) list_single_dyc_row_pane_ParamLimits

0x0fd1,	// (0x00041e67) list_single_dyc_row_pane

0x96ba,	// (0x0004a550) call5_gesture_pane_ParamLimits

0x96ba,	// (0x0004a550) call5_gesture_pane

0x9702,	// (0x0004a598) call5_windows_pane_ParamLimits

0x9702,	// (0x0004a598) call5_windows_pane

0x97b3,	// (0x0004a649) call5_swipe_1_pane_cp_ParamLimits

0x97b3,	// (0x0004a649) call5_swipe_1_pane_cp

0x97bf,	// (0x0004a655) call5_swipe_2_pane_cp_ParamLimits

0x97bf,	// (0x0004a655) call5_swipe_2_pane_cp

0xd8f8,	// (0x0004e78e) call5_image_pane_cp

0x97cb,	// (0x0004a661) popup_call5_audio_first_window_cp_ParamLimits

0x97cb,	// (0x0004a661) popup_call5_audio_first_window_cp

0xc273,	// (0x0004d109) call5_swipe_1_pane_g1_cp_ParamLimits

0xc273,	// (0x0004d109) call5_swipe_1_pane_g1_cp

0xc2a1,	// (0x0004d137) call5_swipe_1_pane_g2_cp

0xc28c,	// (0x0004d122) call5_swipe_1_pane_t1_cp_ParamLimits

0xc28c,	// (0x0004d122) call5_swipe_1_pane_t1_cp

0xc273,	// (0x0004d109) call5_swipe_2_pane_g1_cp_ParamLimits

0xc273,	// (0x0004d109) call5_swipe_2_pane_g1_cp

0xc2a9,	// (0x0004d13f) call5_swipe_2_pane_g2_cp

0xc2b1,	// (0x0004d147) call5_swipe_2_pane_t1_cp_ParamLimits

0xc2b1,	// (0x0004d147) call5_swipe_2_pane_t1_cp

0xef76,	// (0x0004fe0c) main_sp_fs_email_pane

0xc2c6,	// (0x0004d15c) main_sp_fs_listscroll_pane_te

0x97d7,	// (0x0004a66d) popup_sp_fs_action_menu_pane_ParamLimits

0x97d7,	// (0x0004a66d) popup_sp_fs_action_menu_pane

0x5c06,	// (0x00046a9c) bg_sp_fs_ctrlbar_pane_g1

0x6ec3,	// (0x00047d59) bg_sp_fs_ctrlbar_ddmenu_pane_g1

0x6ed5,	// (0x00047d6b) bg_sp_fs_ctrlbar_ddmenu_pane_g2

0x6ecc,	// (0x00047d62) bg_sp_fs_ctrlbar_ddmenu_pane_g3

0x5c06,	// (0x00046a9c) bg_sp_fs_ctrlbar_ddmenu_pane_g4

0x0003,

0xfc81,	// (0x00050b17) bg_sp_fs_ctrlbar_ddmenu_pane_g

0x592f,	// (0x000467c5) bg_sp_fs_ctrlbar_ddmenu_pane_ParamLimits

0x592f,	// (0x000467c5) bg_sp_fs_ctrlbar_ddmenu_pane

0xc2cf,	// (0x0004d165) main_sp_fs_ctrlbar_ddmenu_pane_g1_ParamLimits

0xc2cf,	// (0x0004d165) main_sp_fs_ctrlbar_ddmenu_pane_g1

0xc2db,	// (0x0004d171) main_sp_fs_ctrlbar_ddmenu_pane_g2_ParamLimits

0xc2db,	// (0x0004d171) main_sp_fs_ctrlbar_ddmenu_pane_g2

0x0001,

0xfc8a,	// (0x00050b20) main_sp_fs_ctrlbar_ddmenu_pane_g_ParamLimits

0xfc8a,	// (0x00050b20) main_sp_fs_ctrlbar_ddmenu_pane_g

0xc2e7,	// (0x0004d17d) main_sp_fs_ctrlbar_ddmenu_pane_t1_ParamLimits

0xc2e7,	// (0x0004d17d) main_sp_fs_ctrlbar_ddmenu_pane_t1

0x0fee,	// (0x00041e84) list_medium_line_t2_right_icon_g1

0x0ff6,	// (0x00041e8c) list_medium_line_t2_right_icon_t1

0x1006,	// (0x00041e9c) list_medium_line_t2_right_icon_t2

0x0001,

0xfc8f,	// (0x00050b25) list_medium_line_t2_right_icon_t

0x4c24,	// (0x00045aba) bg_sp_fs_ctrlbar_pane_ParamLimits

0x4c24,	// (0x00045aba) bg_sp_fs_ctrlbar_pane

0x984f,	// (0x0004a6e5) main_sp_fs_ctrlbar_button_pane_cp01

0x9857,	// (0x0004a6ed) main_sp_fs_ctrlbar_ddmenu_pane

0xc339,	// (0x0004d1cf) main_sp_fs_ctrlbar_pane_g1

0xc345,	// (0x0004d1db) main_sp_fs_ctrlbar_pane_g2

0x0003,

0xfc94,	// (0x00050b2a) main_sp_fs_ctrlbar_pane_g

0x9893,	// (0x0004a729) main_sp_fs_ctrlbar_pane_t1

0x98dc,	// (0x0004a772) main_sp_fs_ctrlbar_pane

0x98fd,	// (0x0004a793) main_sp_fs_listscroll_pane_te_cp01

0x1014,	// (0x00041eaa) popup_sp_fs_action_menu_pane_cp01_ParamLimits

0x1014,	// (0x00041eaa) popup_sp_fs_action_menu_pane_cp01

0xef76,	// (0x0004fe0c) bg_sp_fs_highlight_list_pane_cp01_ParamLimits

0xef76,	// (0x0004fe0c) bg_sp_fs_highlight_list_pane_cp01

0x1038,	// (0x00041ece) sp_fs_action_menu_list_gene_pane_g1_ParamLimits

0x1038,	// (0x00041ece) sp_fs_action_menu_list_gene_pane_g1

0xc36c,	// (0x0004d202) sp_fs_action_menu_list_gene_pane_g2_ParamLimits

0xc36c,	// (0x0004d202) sp_fs_action_menu_list_gene_pane_g2

0x0001,

0xfca2,	// (0x00050b38) sp_fs_action_menu_list_gene_pane_g_ParamLimits

0xfca2,	// (0x00050b38) sp_fs_action_menu_list_gene_pane_g

0x1047,	// (0x00041edd) sp_fs_action_menu_list_gene_pane_t1_ParamLimits

0x1047,	// (0x00041edd) sp_fs_action_menu_list_gene_pane_t1

0x991d,	// (0x0004a7b3) sp_fs_action_menu_list_gene_pane_ParamLimits

0x991d,	// (0x0004a7b3) sp_fs_action_menu_list_gene_pane

0xc379,	// (0x0004d20f) popup_sp_fs_action_menu_bg_pane_ParamLimits

0xc379,	// (0x0004d20f) popup_sp_fs_action_menu_bg_pane

0x993a,	// (0x0004a7d0) sp_fs_action_menu_list_pane_ParamLimits

0x993a,	// (0x0004a7d0) sp_fs_action_menu_list_pane

0xc387,	// (0x0004d21d) sp_fs_scroll_pane_cp01_ParamLimits

0xc387,	// (0x0004d21d) sp_fs_scroll_pane_cp01

0x105f,	// (0x00041ef5) list_medium_line_plain_t2_t1

0x106f,	// (0x00041f05) list_medium_line_plain_t2_t2

0x0001,

0xfca7,	// (0x00050b3d) list_medium_line_plain_t2_t

0x107d,	// (0x00041f13) list_medium_line_plain_t3_t1

0x108d,	// (0x00041f23) list_medium_line_plain_t3_t2

0x109b,	// (0x00041f31) list_medium_line_plain_t3_t3

0x0002,

0xfcac,	// (0x00050b42) list_medium_line_plain_t3_t

0xa999,	// (0x0004b82f) list_medium_line_x2_t2_g2_g1_ParamLimits

0xa999,	// (0x0004b82f) list_medium_line_x2_t2_g2_g1

0xa9b1,	// (0x0004b847) list_medium_line_x2_t2_g2_g2_ParamLimits

0xa9b1,	// (0x0004b847) list_medium_line_x2_t2_g2_g2

0x0001,

0xf22b,	// (0x000500c1) list_medium_line_x2_t2_g2_g_ParamLimits

0xf22b,	// (0x000500c1) list_medium_line_x2_t2_g2_g

0xaad5,	// (0x0004b96b) list_medium_line_x2_t2_g2_t1_ParamLimits

0xaad5,	// (0x0004b96b) list_medium_line_x2_t2_g2_t1

0xa9d2,	// (0x0004b868) list_medium_line_x2_t2_g2_t2_ParamLimits

0xa9d2,	// (0x0004b868) list_medium_line_x2_t2_g2_t2

0x0001,

0xfcb3,	// (0x00050b49) list_medium_line_x2_t2_g2_t_ParamLimits

0xfcb3,	// (0x00050b49) list_medium_line_x2_t2_g2_t

0xa999,	// (0x0004b82f) list_medium_line_x2_t4_g2_g1_ParamLimits

0xa999,	// (0x0004b82f) list_medium_line_x2_t4_g2_g1

0xc3ad,	// (0x0004d243) list_medium_line_x2_t4_g2_g2_ParamLimits

0xc3ad,	// (0x0004d243) list_medium_line_x2_t4_g2_g2

0x0001,

0xfcb8,	// (0x00050b4e) list_medium_line_x2_t4_g2_g_ParamLimits

0xfcb8,	// (0x00050b4e) list_medium_line_x2_t4_g2_g

0x10a9,	// (0x00041f3f) list_medium_line_x2_t4_g2_t1_ParamLimits

0x10a9,	// (0x00041f3f) list_medium_line_x2_t4_g2_t1

0x10c3,	// (0x00041f59) list_medium_line_x2_t4_g2_t2_ParamLimits

0x10c3,	// (0x00041f59) list_medium_line_x2_t4_g2_t2

0x10d8,	// (0x00041f6e) list_medium_line_x2_t4_g2_t3_ParamLimits

0x10d8,	// (0x00041f6e) list_medium_line_x2_t4_g2_t3

0xa9d2,	// (0x0004b868) list_medium_line_x2_t4_g2_t4_ParamLimits

0xa9d2,	// (0x0004b868) list_medium_line_x2_t4_g2_t4

0x0003,

0xfcbd,	// (0x00050b53) list_medium_line_x2_t4_g2_t_ParamLimits

0xfcbd,	// (0x00050b53) list_medium_line_x2_t4_g2_t

0x10ed,	// (0x00041f83) list_medium_line_t3_right_iconx2_g1

0x0fee,	// (0x00041e84) list_medium_line_t3_right_iconx2_g2

0x10f5,	// (0x00041f8b) list_medium_line_t3_right_iconx2_g3

0x0002,

0xfcc6,	// (0x00050b5c) list_medium_line_t3_right_iconx2_g

0x10fd,	// (0x00041f93) list_medium_line_t3_right_iconx2_t1

0x110d,	// (0x00041fa3) list_medium_line_t3_right_iconx2_t2

0x0001,

0xfccd,	// (0x00050b63) list_medium_line_t3_right_iconx2_t

0xa999,	// (0x0004b82f) list_medium_line_x3_t4_g4_g1_ParamLimits

0xa999,	// (0x0004b82f) list_medium_line_x3_t4_g4_g1

0xa9a5,	// (0x0004b83b) list_medium_line_x3_t4_g4_g2_ParamLimits

0xa9a5,	// (0x0004b83b) list_medium_line_x3_t4_g4_g2

0xaa1b,	// (0x0004b8b1) list_medium_line_x3_t4_g4_g3_ParamLimits

0xaa1b,	// (0x0004b8b1) list_medium_line_x3_t4_g4_g3

0xc3bf,	// (0x0004d255) list_medium_line_x3_t4_g4_g4_ParamLimits

0xc3bf,	// (0x0004d255) list_medium_line_x3_t4_g4_g4

0x0003,

0xfcd2,	// (0x00050b68) list_medium_line_x3_t4_g4_g_ParamLimits

0xfcd2,	// (0x00050b68) list_medium_line_x3_t4_g4_g

0x111b,	// (0x00041fb1) list_medium_line_x3_t4_g4_t1_ParamLimits

0x111b,	// (0x00041fb1) list_medium_line_x3_t4_g4_t1

0x1132,	// (0x00041fc8) list_medium_line_x3_t4_g4_t2_ParamLimits

0x1132,	// (0x00041fc8) list_medium_line_x3_t4_g4_t2

0xc3cb,	// (0x0004d261) list_medium_line_x3_t4_g4_t3_ParamLimits

0xc3cb,	// (0x0004d261) list_medium_line_x3_t4_g4_t3

0xc3e0,	// (0x0004d276) list_medium_line_x3_t4_g4_t4_ParamLimits

0xc3e0,	// (0x0004d276) list_medium_line_x3_t4_g4_t4

0x0003,

0xfcdb,	// (0x00050b71) list_medium_line_x3_t4_g4_t_ParamLimits

0xfcdb,	// (0x00050b71) list_medium_line_x3_t4_g4_t

0x1147,	// (0x00041fdd) list_single_dyc_row_text_pane_t1_ParamLimits

0x1147,	// (0x00041fdd) list_single_dyc_row_text_pane_t1

0x117e,	// (0x00042014) list_single_dyc_row_text_pane_t2_ParamLimits

0x117e,	// (0x00042014) list_single_dyc_row_text_pane_t2

0xc3fd,	// (0x0004d293) list_single_dyc_row_text_pane_t3_ParamLimits

0xc3fd,	// (0x0004d293) list_single_dyc_row_text_pane_t3

0x0005,

0xfce4,	// (0x00050b7a) list_single_dyc_row_text_pane_t_ParamLimits

0xfce4,	// (0x00050b7a) list_single_dyc_row_text_pane_t

0xc421,	// (0x0004d2b7) list_single_dyc_row_pane_g1_ParamLimits

0xc421,	// (0x0004d2b7) list_single_dyc_row_pane_g1

0xc42d,	// (0x0004d2c3) list_single_dyc_row_pane_g2_ParamLimits

0xc42d,	// (0x0004d2c3) list_single_dyc_row_pane_g2

0xc439,	// (0x0004d2cf) list_single_dyc_row_pane_g3_ParamLimits

0xc439,	// (0x0004d2cf) list_single_dyc_row_pane_g3

0xc445,	// (0x0004d2db) list_single_dyc_row_pane_g4_ParamLimits

0xc445,	// (0x0004d2db) list_single_dyc_row_pane_g4

0x0003,

0xfcf1,	// (0x00050b87) list_single_dyc_row_pane_g_ParamLimits

0xfcf1,	// (0x00050b87) list_single_dyc_row_pane_g

0xc451,	// (0x0004d2e7) list_single_dyc_row_text_pane_ParamLimits

0xc451,	// (0x0004d2e7) list_single_dyc_row_text_pane

0xa852,	// (0x0004b6e8) bg_sp_fs_scroll_pane

0xc470,	// (0x0004d306) thumb_sp_fs_scroll_pane

0x0de8,	// (0x00041c7e) list_medium_line_g1_ParamLimits

0x0de8,	// (0x00041c7e) list_medium_line_g1

0x12a1,	// (0x00042137) list_medium_line_t1_ParamLimits

0x12a1,	// (0x00042137) list_medium_line_t1

0xa999,	// (0x0004b82f) list_medium_line_x2_g1_ParamLimits

0xa999,	// (0x0004b82f) list_medium_line_x2_g1

0xa9a5,	// (0x0004b83b) list_medium_line_x2_g2_ParamLimits

0xa9a5,	// (0x0004b83b) list_medium_line_x2_g2

0x0001,

0xfcfa,	// (0x00050b90) list_medium_line_x2_g_ParamLimits

0xfcfa,	// (0x00050b90) list_medium_line_x2_g

0xc479,	// (0x0004d30f) list_medium_line_x2_t1_ParamLimits

0xc479,	// (0x0004d30f) list_medium_line_x2_t1

0xa999,	// (0x0004b82f) list_medium_line_x3_g1_ParamLimits

0xa999,	// (0x0004b82f) list_medium_line_x3_g1

0xa9a5,	// (0x0004b83b) list_medium_line_x3_g2_ParamLimits

0xa9a5,	// (0x0004b83b) list_medium_line_x3_g2

0x0001,

0xfcfa,	// (0x00050b90) list_medium_line_x3_g_ParamLimits

0xfcfa,	// (0x00050b90) list_medium_line_x3_g

0xc479,	// (0x0004d30f) list_medium_line_x3_t1_ParamLimits

0xc479,	// (0x0004d30f) list_medium_line_x3_t1

0xc48f,	// (0x0004d325) thumb_sp_fs_scroll_pane_g1

0xc498,	// (0x0004d32e) thumb_sp_fs_scroll_pane_g2

0xc4a1,	// (0x0004d337) thumb_sp_fs_scroll_pane_g3

0x0002,

0xfcff,	// (0x00050b95) thumb_sp_fs_scroll_pane_g

0xc48f,	// (0x0004d325) bg_sp_fs_scroll_pane_g1

0xc498,	// (0x0004d32e) bg_sp_fs_scroll_pane_g2

0xc4a1,	// (0x0004d337) bg_sp_fs_scroll_pane_g3

0x0002,

0xfcff,	// (0x00050b95) bg_sp_fs_scroll_pane_g

0xa999,	// (0x0004b82f) list_medium_line_x2_t3_g4_g1_ParamLimits

0xa999,	// (0x0004b82f) list_medium_line_x2_t3_g4_g1

0xaa0f,	// (0x0004b8a5) list_medium_line_x2_t3_g4_g2_ParamLimits

0xaa0f,	// (0x0004b8a5) list_medium_line_x2_t3_g4_g2

0xa9a5,	// (0x0004b83b) list_medium_line_x2_t3_g4_g3_ParamLimits

0xa9a5,	// (0x0004b83b) list_medium_line_x2_t3_g4_g3

0xa9b1,	// (0x0004b847) list_medium_line_x2_t3_g4_g4_ParamLimits

0xa9b1,	// (0x0004b847) list_medium_line_x2_t3_g4_g4

0x0003,

0xf2a7,	// (0x0005013d) list_medium_line_x2_t3_g4_g_ParamLimits

0xf2a7,	// (0x0005013d) list_medium_line_x2_t3_g4_g

0x12b6,	// (0x0004214c) list_medium_line_x2_t3_g4_t1_ParamLimits

0x12b6,	// (0x0004214c) list_medium_line_x2_t3_g4_t1

0x12cc,	// (0x00042162) list_medium_line_x2_t3_g4_t2_ParamLimits

0x12cc,	// (0x00042162) list_medium_line_x2_t3_g4_t2

0xa9d2,	// (0x0004b868) list_medium_line_x2_t3_g4_t3_ParamLimits

0xa9d2,	// (0x0004b868) list_medium_line_x2_t3_g4_t3

0x0002,

0xfd06,	// (0x00050b9c) list_medium_line_x2_t3_g4_t_ParamLimits

0xfd06,	// (0x00050b9c) list_medium_line_x2_t3_g4_t

0x0de8,	// (0x00041c7e) list_medium_line_g2_g1_ParamLimits

0x0de8,	// (0x00041c7e) list_medium_line_g2_g1

0x0df4,	// (0x00041c8a) list_medium_line_g2_g2_ParamLimits

0x0df4,	// (0x00041c8a) list_medium_line_g2_g2

0x0001,

0xf9b4,	// (0x0005084a) list_medium_line_g2_g_ParamLimits

0xf9b4,	// (0x0005084a) list_medium_line_g2_g

0x12e5,	// (0x0004217b) list_medium_line_g2_t1_ParamLimits

0x12e5,	// (0x0004217b) list_medium_line_g2_t1

0x0de8,	// (0x00041c7e) list_medium_line_t3_g2_g1_ParamLimits

0x0de8,	// (0x00041c7e) list_medium_line_t3_g2_g1

0x0df4,	// (0x00041c8a) list_medium_line_t3_g2_g2_ParamLimits

0x0df4,	// (0x00041c8a) list_medium_line_t3_g2_g2

0x0001,

0xf9b4,	// (0x0005084a) list_medium_line_t3_g2_g_ParamLimits

0xf9b4,	// (0x0005084a) list_medium_line_t3_g2_g

0x12fa,	// (0x00042190) list_medium_line_t3_g2_t1_ParamLimits

0x12fa,	// (0x00042190) list_medium_line_t3_g2_t1

0x1311,	// (0x000421a7) list_medium_line_t3_g2_t2_ParamLimits

0x1311,	// (0x000421a7) list_medium_line_t3_g2_t2

0x1326,	// (0x000421bc) list_medium_line_t3_g2_t3_ParamLimits

0x1326,	// (0x000421bc) list_medium_line_t3_g2_t3

0x0002,

0xfd0d,	// (0x00050ba3) list_medium_line_t3_g2_t_ParamLimits

0xfd0d,	// (0x00050ba3) list_medium_line_t3_g2_t

0x0fee,	// (0x00041e84) list_medium_line_right_icon_g1

0x133b,	// (0x000421d1) list_medium_line_right_icon_t1

0x0de8,	// (0x00041c7e) list_medium_line_t2_g1_ParamLimits

0x0de8,	// (0x00041c7e) list_medium_line_t2_g1

0x1349,	// (0x000421df) list_medium_line_t2_t1_ParamLimits

0x1349,	// (0x000421df) list_medium_line_t2_t1

0x1360,	// (0x000421f6) list_medium_line_t2_t2_ParamLimits

0x1360,	// (0x000421f6) list_medium_line_t2_t2

0x0001,

0xfd14,	// (0x00050baa) list_medium_line_t2_t_ParamLimits

0xfd14,	// (0x00050baa) list_medium_line_t2_t

0x0de8,	// (0x00041c7e) list_medium_line_t3_g1_ParamLimits

0x0de8,	// (0x00041c7e) list_medium_line_t3_g1

0x1372,	// (0x00042208) list_medium_line_t3_t1_ParamLimits

0x1372,	// (0x00042208) list_medium_line_t3_t1

0x1389,	// (0x0004221f) list_medium_line_t3_t2_ParamLimits

0x1389,	// (0x0004221f) list_medium_line_t3_t2

0x139e,	// (0x00042234) list_medium_line_t3_t3_ParamLimits

0x139e,	// (0x00042234) list_medium_line_t3_t3

0x0002,

0xfd19,	// (0x00050baf) list_medium_line_t3_t_ParamLimits

0xfd19,	// (0x00050baf) list_medium_line_t3_t

0x0de8,	// (0x00041c7e) list_medium_line_g3_g1_ParamLimits

0x0de8,	// (0x00041c7e) list_medium_line_g3_g1

0x13b0,	// (0x00042246) list_medium_line_g3_g2_ParamLimits

0x13b0,	// (0x00042246) list_medium_line_g3_g2

0x0df4,	// (0x00041c8a) list_medium_line_g3_g3_ParamLimits

0x0df4,	// (0x00041c8a) list_medium_line_g3_g3

0x0002,

0xfd20,	// (0x00050bb6) list_medium_line_g3_g_ParamLimits

0xfd20,	// (0x00050bb6) list_medium_line_g3_g

0x13bc,	// (0x00042252) list_medium_line_g3_t1_ParamLimits

0x13bc,	// (0x00042252) list_medium_line_g3_t1

0x0de8,	// (0x00041c7e) list_medium_line_t2_g3_g1_ParamLimits

0x0de8,	// (0x00041c7e) list_medium_line_t2_g3_g1

0x13b0,	// (0x00042246) list_medium_line_t2_g3_g2_ParamLimits

0x13b0,	// (0x00042246) list_medium_line_t2_g3_g2

0x0df4,	// (0x00041c8a) list_medium_line_t2_g3_g3_ParamLimits

0x0df4,	// (0x00041c8a) list_medium_line_t2_g3_g3

0x0002,

0xfd20,	// (0x00050bb6) list_medium_line_t2_g3_g_ParamLimits

0xfd20,	// (0x00050bb6) list_medium_line_t2_g3_g

0x13d1,	// (0x00042267) list_medium_line_t2_g3_t1_ParamLimits

0x13d1,	// (0x00042267) list_medium_line_t2_g3_t1

0x13eb,	// (0x00042281) list_medium_line_t2_g3_t2_ParamLimits

0x13eb,	// (0x00042281) list_medium_line_t2_g3_t2

0x0001,

0xfd27,	// (0x00050bbd) list_medium_line_t2_g3_t_ParamLimits

0xfd27,	// (0x00050bbd) list_medium_line_t2_g3_t

0x0de8,	// (0x00041c7e) list_medium_line_t3_g3_g1_ParamLimits

0x0de8,	// (0x00041c7e) list_medium_line_t3_g3_g1

0x13b0,	// (0x00042246) list_medium_line_t3_g3_g2_ParamLimits

0x13b0,	// (0x00042246) list_medium_line_t3_g3_g2

0x0df4,	// (0x00041c8a) list_medium_line_t3_g3_g3_ParamLimits

0x0df4,	// (0x00041c8a) list_medium_line_t3_g3_g3

0x0002,

0xfd20,	// (0x00050bb6) list_medium_line_t3_g3_g_ParamLimits

0xfd20,	// (0x00050bb6) list_medium_line_t3_g3_g

0x1400,	// (0x00042296) list_medium_line_t3_g3_t1_ParamLimits

0x1400,	// (0x00042296) list_medium_line_t3_g3_t1

0x1414,	// (0x000422aa) list_medium_line_t3_g3_t2_ParamLimits

0x1414,	// (0x000422aa) list_medium_line_t3_g3_t2

0x1426,	// (0x000422bc) list_medium_line_t3_g3_t3_ParamLimits

0x1426,	// (0x000422bc) list_medium_line_t3_g3_t3

0x0002,

0xfd2c,	// (0x00050bc2) list_medium_line_t3_g3_t_ParamLimits

0xfd2c,	// (0x00050bc2) list_medium_line_t3_g3_t

0x10ed,	// (0x00041f83) list_medium_line_right_iconx2_g1

0x0fee,	// (0x00041e84) list_medium_line_right_iconx2_g2

0x0001,

0xfd33,	// (0x00050bc9) list_medium_line_right_iconx2_g

0x1438,	// (0x000422ce) list_medium_line_right_iconx2_t1

0x10ed,	// (0x00041f83) list_medium_line_t2_right_iconx2_g1

0x0fee,	// (0x00041e84) list_medium_line_t2_right_iconx2_g2

0x0001,

0xfd33,	// (0x00050bc9) list_medium_line_t2_right_iconx2_g

0x1446,	// (0x000422dc) list_medium_line_t2_right_iconx2_t1

0x1456,	// (0x000422ec) list_medium_line_t2_right_iconx2_t2

0x0001,

0xfd38,	// (0x00050bce) list_medium_line_t2_right_iconx2_t

0xc4aa,	// (0x0004d340) list_medium_line_x4_t4_t1

0x1464,	// (0x000422fa) list_medium_line_x4_t4_t2

0x1474,	// (0x0004230a) list_medium_line_x4_t4_t3

0x1484,	// (0x0004231a) list_medium_line_x4_t4_t4

0x0003,

0xfd3d,	// (0x00050bd3) list_medium_line_x4_t4_t

0x9991,	// (0x0004a827) tport_appsw_pane_ParamLimits

0x9991,	// (0x0004a827) tport_appsw_pane

0x99a2,	// (0x0004a838) tport_contact_pane_ParamLimits

0x99a2,	// (0x0004a838) tport_contact_pane

0x99b6,	// (0x0004a84c) tport_listscroll_pane_ParamLimits

0x99b6,	// (0x0004a84c) tport_listscroll_pane

0x99ce,	// (0x0004a864) cell_tport_appsw_pane_ParamLimits

0x99ce,	// (0x0004a864) cell_tport_appsw_pane

0x7db4,	// (0x00048c4a) tport_appsw_pane_g1_ParamLimits

0x7db4,	// (0x00048c4a) tport_appsw_pane_g1

0xc4b8,	// (0x0004d34e) tport_contact_pane_g1

0xc4c1,	// (0x0004d357) tport_contact_pane_t1

0xc4cf,	// (0x0004d365) tport_contact_pane_t2

0x0001,

0xfd46,	// (0x00050bdc) tport_contact_pane_t

0xc4dd,	// (0x0004d373) list_tport_pane

0xd82e,	// (0x0004e6c4) scroll_pane_cp_030

0xc4ee,	// (0x0004d384) cell_tport_appsw_pane_g1

0xc4fe,	// (0x0004d394) cell_tport_appsw_pane_t1

0xc50c,	// (0x0004d3a2) grid_highlight_pane_cp019

0x9a04,	// (0x0004a89a) list_tport_double_graphic_pane_ParamLimits

0x9a04,	// (0x0004a89a) list_tport_double_graphic_pane

0xef76,	// (0x0004fe0c) list_highlight_pane_cp023_ParamLimits

0xef76,	// (0x0004fe0c) list_highlight_pane_cp023

0x9a11,	// (0x0004a8a7) list_tport_double_graphic_pane_g1_ParamLimits

0x9a11,	// (0x0004a8a7) list_tport_double_graphic_pane_g1

0x9a1e,	// (0x0004a8b4) list_tport_double_graphic_pane_t1_ParamLimits

0x9a1e,	// (0x0004a8b4) list_tport_double_graphic_pane_t1

0x9a33,	// (0x0004a8c9) list_tport_double_graphic_pane_t2_ParamLimits

0x9a33,	// (0x0004a8c9) list_tport_double_graphic_pane_t2

0x0001,

0xfd52,	// (0x00050be8) list_tport_double_graphic_pane_t_ParamLimits

0xfd52,	// (0x00050be8) list_tport_double_graphic_pane_t

0xa852,	// (0x0004b6e8) main_cale_note_pane

0x7d6b,	// (0x00048c01) cell_vitu2_function_top_wide_pane_cp01_ParamLimits

0x7d6b,	// (0x00048c01) cell_vitu2_function_top_wide_pane_cp01

0x93ec,	// (0x0004a282) wait_bar_pane_cp05_ParamLimits

0xef76,	// (0x0004fe0c) listscroll_cmail_pane

0xc514,	// (0x0004d3aa) list_cmail_pane

0x9a45,	// (0x0004a8db) list_cmail_body_pane

0x9a45,	// (0x0004a8db) list_single_cmail_header_caption_pane

0x9a5c,	// (0x0004a8f2) list_single_cmail_header_detail_pane_ParamLimits

0x9a5c,	// (0x0004a8f2) list_single_cmail_header_detail_pane

0xc530,	// (0x0004d3c6) list_single_cmail_header_caption_pane_t1

0x1494,	// (0x0004232a) list_single_cmail_header_detail_pane_g1_ParamLimits

0x1494,	// (0x0004232a) list_single_cmail_header_detail_pane_g1

0xc547,	// (0x0004d3dd) list_single_cmail_header_detail_pane_g2_ParamLimits

0xc547,	// (0x0004d3dd) list_single_cmail_header_detail_pane_g2

0x0002,

0xfd57,	// (0x00050bed) list_single_cmail_header_detail_pane_g_ParamLimits

0xfd57,	// (0x00050bed) list_single_cmail_header_detail_pane_g

0x14aa,	// (0x00042340) list_single_cmail_header_detail_pane_t1_ParamLimits

0x14aa,	// (0x00042340) list_single_cmail_header_detail_pane_t1

0xc584,	// (0x0004d41a) list_single_cmail_header_editor_pane_bg_ParamLimits

0xc584,	// (0x0004d41a) list_single_cmail_header_editor_pane_bg

0xc59b,	// (0x0004d431) list_cmail_body_pane_g1

0xc5a4,	// (0x0004d43a) list_cmail_body_pane_t1

0x7e61,	// (0x00048cf7) list_single_cmail_header_editor_pane_bg_g1

0xdbb1,	// (0x0004ea47) list_single_cmail_header_editor_pane_bg_g1_copy1

0x7e71,	// (0x00048d07) list_single_cmail_header_editor_pane_bg_g1_copy2

0x7e69,	// (0x00048cff) list_single_cmail_header_editor_pane_bg_g1_copy3

0xb33c,	// (0x0004c1d2) list_single_cmail_header_editor_pane_bg_g1_copy4

0x7e91,	// (0x00048d27) list_single_cmail_header_editor_pane_bg_g1_copy4_copy1

0x7e81,	// (0x00048d17) list_single_cmail_header_editor_pane_bg_g1_copy4_copy2

0x7e89,	// (0x00048d1f) list_single_cmail_header_editor_pane_bg_g1_copy4_copy3

0xdb91,	// (0x0004ea27) list_single_cmail_header_editor_pane_bg_g1_copy4_copy3_copy1

0x9a85,	// (0x0004a91b) calenote_gesture_pane_ParamLimits

0x9a85,	// (0x0004a91b) calenote_gesture_pane

0x9aa1,	// (0x0004a937) calenote_window_pane_ParamLimits

0x9aa1,	// (0x0004a937) calenote_window_pane

0xc5b2,	// (0x0004d448) popup_note_window_cp01

0x9abd,	// (0x0004a953) calenote_swipe_1_pane_ParamLimits

0x9abd,	// (0x0004a953) calenote_swipe_1_pane

0x97bf,	// (0x0004a655) calenote_swipe_2_pane_ParamLimits

0x97bf,	// (0x0004a655) calenote_swipe_2_pane

0xc273,	// (0x0004d109) calenote_swipe_1_pane_g1_ParamLimits

0xc273,	// (0x0004d109) calenote_swipe_1_pane_g1

0xc280,	// (0x0004d116) calenote_swipe_1_pane_g2_ParamLimits

0xc280,	// (0x0004d116) calenote_swipe_1_pane_g2

0x0001,

0xfc77,	// (0x00050b0d) calenote_swipe_1_pane_g_ParamLimits

0xfc77,	// (0x00050b0d) calenote_swipe_1_pane_g

0xc5c4,	// (0x0004d45a) calenote_swipe_1_pane_t1_ParamLimits

0xc5c4,	// (0x0004d45a) calenote_swipe_1_pane_t1

0xc273,	// (0x0004d109) calenote_swipe_2_pane_g1_ParamLimits

0xc273,	// (0x0004d109) calenote_swipe_2_pane_g1

0xc5e3,	// (0x0004d479) calenote_swipe_2_pane_g2_ParamLimits

0xc5e3,	// (0x0004d479) calenote_swipe_2_pane_g2

0x0001,

0xfd63,	// (0x00050bf9) calenote_swipe_2_pane_g_ParamLimits

0xfd63,	// (0x00050bf9) calenote_swipe_2_pane_g

0xc5ef,	// (0x0004d485) calenote_swipe_2_pane_t1_ParamLimits

0xc5ef,	// (0x0004d485) calenote_swipe_2_pane_t1

0xa852,	// (0x0004b6e8) main_mup_navstr_pane

0x64e5,	// (0x0004737b) main_mup3_pane_t7_ParamLimits

0x64e5,	// (0x0004737b) main_mup3_pane_t7

0xae6b,	// (0x0004bd01) main_mp4_pane_g6_ParamLimits

0xae6b,	// (0x0004bd01) main_mp4_pane_g6

0xb01d,	// (0x0004beb3) main_image3_pane_t4_ParamLimits

0xb01d,	// (0x0004beb3) main_image3_pane_t4

0x9ad2,	// (0x0004a968) popup_navstr_preview_pane_ParamLimits

0x9ad2,	// (0x0004a968) popup_navstr_preview_pane

0x9ae2,	// (0x0004a978) scroll_navstr_pane_ParamLimits

0x9ae2,	// (0x0004a978) scroll_navstr_pane

0xa852,	// (0x0004b6e8) bg_popup_preview_window_pane_cp04

0xc616,	// (0x0004d4ac) popup_navstr_preview_pane_t1

0x9af6,	// (0x0004a98c) scroll_navstr_pane_g1_ParamLimits

0x9af6,	// (0x0004a98c) scroll_navstr_pane_g1

0x9b0a,	// (0x0004a9a0) scroll_navstr_pane_t1_ParamLimits

0x9b0a,	// (0x0004a9a0) scroll_navstr_pane_t1

0xc5bb,	// (0x0004d451) bg_button_pane_cp014

0xc5bb,	// (0x0004d451) bg_button_pane_cp030

0xc1d7,	// (0x0004d06d) list_double_fisheye_pane_g4_ParamLimits

0xc1d7,	// (0x0004d06d) list_double_fisheye_pane_g4

0xc1e3,	// (0x0004d079) list_double_fisheye_pane_g5_ParamLimits

0xc1e3,	// (0x0004d079) list_double_fisheye_pane_g5

0xc524,	// (0x0004d3ba) sp_fs_scroll_pane_cp03

0xc339,	// (0x0004d1cf) main_sp_fs_ctrlbar_pane_g1_ParamLimits

0xc345,	// (0x0004d1db) main_sp_fs_ctrlbar_pane_g2_ParamLimits

0xfc94,	// (0x00050b2a) main_sp_fs_ctrlbar_pane_g_ParamLimits

0x9893,	// (0x0004a729) main_sp_fs_ctrlbar_pane_t1_ParamLimits

0xc51c,	// (0x0004d3b2) sp_fs_scroll_pane_cp02

0xd840,	// (0x0004e6d6) popup_sp_fs_calendar_preview_list_single_pane_ParamLimits

0xd840,	// (0x0004e6d6) popup_sp_fs_calendar_preview_list_single_pane

0xa852,	// (0x0004b6e8) main_cam6_pano_pane

0xef76,	// (0x0004fe0c) main_mup3_pane_ParamLimits

0xa852,	// (0x0004b6e8) main_phacti_pane

0x92df,	// (0x0004a175) bg_button_pane_cp11

0x92f7,	// (0x0004a18d) main_mobtv_info_pane_g2_ParamLimits

0x92f7,	// (0x0004a18d) main_mobtv_info_pane_g2

0x0001,

0xfbf4,	// (0x00050a8a) main_mobtv_info_pane_g_ParamLimits

0xfbf4,	// (0x00050a8a) main_mobtv_info_pane_g

0x94ac,	// (0x0004a342) sc_clock_pane_t5_ParamLimits

0x94ac,	// (0x0004a342) sc_clock_pane_t5

0x9557,	// (0x0004a3ed) main_radioblah_pane_g1_ParamLimits

0xc13c,	// (0x0004cfd2) main_radioblah_pane_t3_ParamLimits

0xc13c,	// (0x0004cfd2) main_radioblah_pane_t3

0xc154,	// (0x0004cfea) main_radioblah_pane_t4_ParamLimits

0xc154,	// (0x0004cfea) main_radioblah_pane_t4

0x957f,	// (0x0004a415) main_radioblah_text_pane_ParamLimits

0x957f,	// (0x0004a415) main_radioblah_text_pane

0x9591,	// (0x0004a427) main_radioblah_info_pane_g1_ParamLimits

0x9624,	// (0x0004a4ba) main_radioblah_info_pane_t4_ParamLimits

0x9624,	// (0x0004a4ba) main_radioblah_info_pane_t4

0xef76,	// (0x0004fe0c) main_sp_fs_calendar_pane

0x9b20,	// (0x0004a9b6) main_phacti_pane_g1

0x9b28,	// (0x0004a9be) phacti_note_pane_ParamLimits

0x9b28,	// (0x0004a9be) phacti_note_pane

0xc62d,	// (0x0004d4c3) phacti_term_pane_ParamLimits

0xc62d,	// (0x0004d4c3) phacti_term_pane

0xc642,	// (0x0004d4d8) phacti_note_pane_t1_ParamLimits

0xc642,	// (0x0004d4d8) phacti_note_pane_t1

0xc659,	// (0x0004d4ef) phacti_term_pane_g1

0xc661,	// (0x0004d4f7) phacti_term_pane_t1_ParamLimits

0xc661,	// (0x0004d4f7) phacti_term_pane_t1

0xc68b,	// (0x0004d521) popup_sp_fs_calendar_preview_list_single_pane_g1

0xc693,	// (0x0004d529) popup_sp_fs_calendar_preview_list_single_pane_g2

0x0001,

0xfd6d,	// (0x00050c03) popup_sp_fs_calendar_preview_list_single_pane_g

0xc69b,	// (0x0004d531) popup_sp_fs_calendar_preview_list_single_pane_t1_ParamLimits

0xc69b,	// (0x0004d531) popup_sp_fs_calendar_preview_list_single_pane_t1

0xc6b1,	// (0x0004d547) aid_popup_sp_fs_bg_corner_pane

0x5c06,	// (0x00046a9c) popup_sp_fs_calendar_preview_bg_pane_g1

0xa852,	// (0x0004b6e8) popup_sp_fs_calendar_preview_bg_pane

0xc6b9,	// (0x0004d54f) popup_sp_fs_calendar_preview_list_pane

0x4c24,	// (0x00045aba) bg_main_sp_fs_cale_pane_ParamLimits

0x4c24,	// (0x00045aba) bg_main_sp_fs_cale_pane

0xc6ca,	// (0x0004d560) listscroll_cale_mrui_pane_ParamLimits

0xc6ca,	// (0x0004d560) listscroll_cale_mrui_pane

0xc6df,	// (0x0004d575) listscroll_sp_fs_schedule_track_pane

0xc6e8,	// (0x0004d57e) main_sp_fs_ctrlbar_pane_cp01_ParamLimits

0xc6e8,	// (0x0004d57e) main_sp_fs_ctrlbar_pane_cp01

0xc6fb,	// (0x0004d591) main_sp_fs_ribbon_pane

0xc703,	// (0x0004d599) popup_sp_fs_cale_preview_window

0x9b8b,	// (0x0004aa21) list_single_sp_fs_schedule_track_pane_ParamLimits

0x9b8b,	// (0x0004aa21) list_single_sp_fs_schedule_track_pane

0xef76,	// (0x0004fe0c) bg_sp_fs_highlight_list_pane_cp03_ParamLimits

0xef76,	// (0x0004fe0c) bg_sp_fs_highlight_list_pane_cp03

0x9b9f,	// (0x0004aa35) list_single_sp_fs_schedule_track_pane_g1_ParamLimits

0x9b9f,	// (0x0004aa35) list_single_sp_fs_schedule_track_pane_g1

0x9bab,	// (0x0004aa41) list_single_sp_fs_schedule_track_pane_g2_ParamLimits

0x9bab,	// (0x0004aa41) list_single_sp_fs_schedule_track_pane_g2

0x0001,

0xfd72,	// (0x00050c08) list_single_sp_fs_schedule_track_pane_g_ParamLimits

0xfd72,	// (0x00050c08) list_single_sp_fs_schedule_track_pane_g

0x9bb7,	// (0x0004aa4d) list_single_sp_fs_schedule_track_pane_t1_ParamLimits

0x9bb7,	// (0x0004aa4d) list_single_sp_fs_schedule_track_pane_t1

0x9bd1,	// (0x0004aa67) sp_fs_schedule_track_pane_ParamLimits

0x9bd1,	// (0x0004aa67) sp_fs_schedule_track_pane

0xc712,	// (0x0004d5a8) sp_fs_schedule_track_pane_g1

0xc71a,	// (0x0004d5b0) sp_fs_schedule_track_pane_g2

0xc722,	// (0x0004d5b8) sp_fs_schedule_track_pane_g3

0xc72a,	// (0x0004d5c0) sp_fs_schedule_track_pane_g4

0xc732,	// (0x0004d5c8) sp_fs_schedule_track_pane_g5

0x0004,

0xfd77,	// (0x00050c0d) sp_fs_schedule_track_pane_g

0x7e61,	// (0x00048cf7) bg_sp_fs_schedule_viewer_highlight_g1

0xdbb1,	// (0x0004ea47) bg_sp_fs_schedule_viewer_highlight_g2

0x7e69,	// (0x00048cff) bg_sp_fs_schedule_viewer_highlight_g3

0x7e71,	// (0x00048d07) bg_sp_fs_schedule_viewer_highlight_g4

0xb33c,	// (0x0004c1d2) bg_sp_fs_schedule_viewer_highlight_g5

0x7e81,	// (0x00048d17) bg_sp_fs_schedule_viewer_highlight_g6

0x7e89,	// (0x00048d1f) bg_sp_fs_schedule_viewer_highlight_g7

0x7e91,	// (0x00048d27) bg_sp_fs_schedule_viewer_highlight_g8

0xdb91,	// (0x0004ea27) bg_sp_fs_schedule_viewer_highlight_g9

0x0008,

0xfd82,	// (0x00050c18) bg_sp_fs_schedule_viewer_highlight_g

0xa852,	// (0x0004b6e8) bg_main_sp_fs_ribbon_pane

0x9be2,	// (0x0004aa78) main_sp_fs_ribbon_pane_g1

0xc73a,	// (0x0004d5d0) main_sp_fs_ribbon_pane_t1

0x9beb,	// (0x0004aa81) main_sp_fs_ribbon_pane_t2

0xc749,	// (0x0004d5df) main_sp_fs_ribbon_pane_t3

0x0002,

0xfd95,	// (0x00050c2b) main_sp_fs_ribbon_pane_t

0xc758,	// (0x0004d5ee) main_sp_fs_ribbon_scheduler_pane

0xc760,	// (0x0004d5f6) bg_main_sp_fs_ribbon_pane_g1

0xc769,	// (0x0004d5ff) bg_main_sp_fs_ribbon_pane_g2

0xc772,	// (0x0004d608) bg_main_sp_fs_ribbon_pane_g3

0x0002,

0xfd9c,	// (0x00050c32) bg_main_sp_fs_ribbon_pane_g

0xc77a,	// (0x0004d610) main_sp_fs_ribbon_scheduler_pane_g1

0xc783,	// (0x0004d619) main_sp_fs_ribbon_scheduler_pane_g2

0xc78c,	// (0x0004d622) main_sp_fs_ribbon_scheduler_pane_g3

0x0002,

0xfda3,	// (0x00050c39) main_sp_fs_ribbon_scheduler_pane_g

0xc795,	// (0x0004d62b) list_cale_mrui_pane

0x9bfa,	// (0x0004aa90) sp_fs_scroll_pane_cp07_ParamLimits

0x9bfa,	// (0x0004aa90) sp_fs_scroll_pane_cp07

0x9c12,	// (0x0004aaa8) bg_sp_fs_schedule_viewer_highlight_ParamLimits

0x9c12,	// (0x0004aaa8) bg_sp_fs_schedule_viewer_highlight

0xc7a2,	// (0x0004d638) list_single_sp_fs_schedule_track_pane_cp01

0xc7aa,	// (0x0004d640) list_sp_fs_schedule_track_pane

0xc7b2,	// (0x0004d648) sp_fs_scroll_pane_cp06_ParamLimits

0xc7b2,	// (0x0004d648) sp_fs_scroll_pane_cp06

0x5c06,	// (0x00046a9c) bgmain_sp_fs_calendar_pane_g1

0x14e6,	// (0x0004237c) list_single_cale_mrui_pane_ParamLimits

0x14e6,	// (0x0004237c) list_single_cale_mrui_pane

0xc7c4,	// (0x0004d65a) list_single_cale_mrui_row_pane_ParamLimits

0xc7c4,	// (0x0004d65a) list_single_cale_mrui_row_pane

0x1507,	// (0x0004239d) list_single_cale_mrui_row_pane_g1_ParamLimits

0x1507,	// (0x0004239d) list_single_cale_mrui_row_pane_g1

0x153f,	// (0x000423d5) list_single_cale_mrui_row_pane_t1_ParamLimits

0x153f,	// (0x000423d5) list_single_cale_mrui_row_pane_t1

0x1551,	// (0x000423e7) list_single_cale_mrui_row_pane_t2_ParamLimits

0x1551,	// (0x000423e7) list_single_cale_mrui_row_pane_t2

0x15b7,	// (0x0004244d) list_single_cale_mrui_row_pane_t3_ParamLimits

0x15b7,	// (0x0004244d) list_single_cale_mrui_row_pane_t3

0x15e6,	// (0x0004247c) list_single_cale_mrui_row_pane_t4_ParamLimits

0x15e6,	// (0x0004247c) list_single_cale_mrui_row_pane_t4

0x0003,

0xfdb1,	// (0x00050c47) list_single_cale_mrui_row_pane_t_ParamLimits

0xfdb1,	// (0x00050c47) list_single_cale_mrui_row_pane_t

0x1615,	// (0x000424ab) list_single_cmail_header_editor_pane_bg_cp01_ParamLimits

0x1615,	// (0x000424ab) list_single_cmail_header_editor_pane_bg_cp01

0x1639,	// (0x000424cf) list_single_cmail_header_editor_pane_bg_cp02_ParamLimits

0x1639,	// (0x000424cf) list_single_cmail_header_editor_pane_bg_cp02

0x9c22,	// (0x0004aab8) main_radioblah_text_pane_t1_ParamLimits

0x9c22,	// (0x0004aab8) main_radioblah_text_pane_t1

0xc7e7,	// (0x0004d67d) cam6_indi_pane_cp01

0xc7ef,	// (0x0004d685) cam6_mode_pane_cp01

0xc7f7,	// (0x0004d68d) cam6_pano_pane

0xc800,	// (0x0004d696) cam6_zoom_pane_cp01

0xc808,	// (0x0004d69e) cam6_pano_image_pane

0xc811,	// (0x0004d6a7) cam6_pano_pane_g1

0xbea3,	// (0x0004cd39) cam6_pano_pane_g2

0xc81a,	// (0x0004d6b0) cam6_pano_pane_g3

0xc823,	// (0x0004d6b9) cam6_pano_pane_g4

0x6ea7,	// (0x00047d3d) cam6_pano_pane_g5

0xc82c,	// (0x0004d6c2) cam6_pano_pane_g6

0xc834,	// (0x0004d6ca) cam6_pano_pane_g7

0xc83c,	// (0x0004d6d2) cam6_pano_pane_g8

0xc845,	// (0x0004d6db) cam6_pano_pane_g9

0x0008,

0xfdba,	// (0x00050c50) cam6_pano_pane_g

0xa852,	// (0x0004b6e8) main_browser_tag_pane

0xc60e,	// (0x0004d4a4) grid_navstr_albumart_pane

0xc84e,	// (0x0004d6e4) cell_navstr_albumart_pane_ParamLimits

0xc84e,	// (0x0004d6e4) cell_navstr_albumart_pane

0xe487,	// (0x0004f31d) cell_navstr_albumart_pane_g1

0x476c,	// (0x00045602) cell_navstr_albumart_pane_g2

0x477c,	// (0x00045612) cell_navstr_albumart_pane_g3

0x4774,	// (0x0004560a) cell_navstr_albumart_pane_g4

0x0003,

0xfdcd,	// (0x00050c63) cell_navstr_albumart_pane_g

0x9c3b,	// (0x0004aad1) bt_list_pane_ParamLimits

0x9c3b,	// (0x0004aad1) bt_list_pane

0x9c4e,	// (0x0004aae4) bt_list_pane_t1

0x9c5d,	// (0x0004aaf3) bt_list_pane_t2

0x0001,

0xfdd6,	// (0x00050c6c) bt_list_pane_t

0xa852,	// (0x0004b6e8) main_cale_prevew_pane

0x9c6c,	// (0x0004ab02) popup_cale_preview_window_ParamLimits

0x9c6c,	// (0x0004ab02) popup_cale_preview_window

0xef76,	// (0x0004fe0c) bg_popup_preview_window_pane_cp05_ParamLimits

0xef76,	// (0x0004fe0c) bg_popup_preview_window_pane_cp05

0xc865,	// (0x0004d6fb) list_cale_preview_pane_ParamLimits

0xc865,	// (0x0004d6fb) list_cale_preview_pane

0x9c81,	// (0x0004ab17) list_double_cale_preview_pane_ParamLimits

0x9c81,	// (0x0004ab17) list_double_cale_preview_pane

0x9c92,	// (0x0004ab28) list_single_cale_preview_pane_ParamLimits

0x9c92,	// (0x0004ab28) list_single_cale_preview_pane

0xc871,	// (0x0004d707) list_single_cale_preview_pane_g1

0xc879,	// (0x0004d70f) list_single_cale_preview_pane_t1_ParamLimits

0xc879,	// (0x0004d70f) list_single_cale_preview_pane_t1

0x9ca6,	// (0x0004ab3c) list_double_cale_preview_pane_g1

0x9cae,	// (0x0004ab44) list_double_cale_preview_pane_t1_ParamLimits

0x9cae,	// (0x0004ab44) list_double_cale_preview_pane_t1

0x9cc3,	// (0x0004ab59) list_double_cale_preview_pane_t2_ParamLimits

0x9cc3,	// (0x0004ab59) list_double_cale_preview_pane_t2

0x0001,

0xfddb,	// (0x00050c71) list_double_cale_preview_pane_t_ParamLimits

0xfddb,	// (0x00050c71) list_double_cale_preview_pane_t

0xa852,	// (0x0004b6e8) main_ezdial_pane

0xef76,	// (0x0004fe0c) main_sp_fs_email_pane_ParamLimits

0x9809,	// (0x0004a69f) cmail_ddmenu_btn01_pane_ParamLimits

0x9809,	// (0x0004a69f) cmail_ddmenu_btn01_pane

0x981c,	// (0x0004a6b2) cmail_ddmenu_btn02_pane_ParamLimits

0x981c,	// (0x0004a6b2) cmail_ddmenu_btn02_pane

0x983f,	// (0x0004a6d5) cmail_ddmenu_btn03_pane_ParamLimits

0x983f,	// (0x0004a6d5) cmail_ddmenu_btn03_pane

0x98dc,	// (0x0004a772) main_sp_fs_ctrlbar_pane_ParamLimits

0x98fd,	// (0x0004a793) main_sp_fs_listscroll_pane_te_cp01_ParamLimits

0x9a45,	// (0x0004a8db) list_cmail_body_pane_ParamLimits

0xc53e,	// (0x0004d3d4) bg_button_pane_cp12

0xc553,	// (0x0004d3e9) list_single_cmail_header_detail_pane_g3_ParamLimits

0xc553,	// (0x0004d3e9) list_single_cmail_header_detail_pane_g3

0xc560,	// (0x0004d3f6) list_single_cmail_header_detail_pane_t2_ParamLimits

0xc560,	// (0x0004d3f6) list_single_cmail_header_detail_pane_t2

0x0001,

0xfd5e,	// (0x00050bf4) list_single_cmail_header_detail_pane_t_ParamLimits

0xfd5e,	// (0x00050bf4) list_single_cmail_header_detail_pane_t

0xc676,	// (0x0004d50c) phacti_term_pane_t2_ParamLimits

0xc676,	// (0x0004d50c) phacti_term_pane_t2

0x0001,

0xfd68,	// (0x00050bfe) phacti_term_pane_t_ParamLimits

0xfd68,	// (0x00050bfe) phacti_term_pane_t

0xc88e,	// (0x0004d724) aid_size_list_single_double

0x9cdb,	// (0x0004ab71) popup_ezdial_listscroll_window

0x9cf1,	// (0x0004ab87) popup_number_entry_window_cp01

0xd8f8,	// (0x0004e78e) bg_popup_call_pane_cp09

0xc89a,	// (0x0004d730) ezdial_list_pane

0xc8a2,	// (0x0004d738) scroll_pane_cp23

0x4c24,	// (0x00045aba) bg_button_pane_cp028_ParamLimits

0x4c24,	// (0x00045aba) bg_button_pane_cp028

0x9cfd,	// (0x0004ab93) cmail_ddmenu_btn01_pane_g1_ParamLimits

0x9cfd,	// (0x0004ab93) cmail_ddmenu_btn01_pane_g1

0x9d09,	// (0x0004ab9f) cmail_ddmenu_btn01_pane_g2_ParamLimits

0x9d09,	// (0x0004ab9f) cmail_ddmenu_btn01_pane_g2

0x0001,

0xfde0,	// (0x00050c76) cmail_ddmenu_btn01_pane_g_ParamLimits

0xfde0,	// (0x00050c76) cmail_ddmenu_btn01_pane_g

0xc8aa,	// (0x0004d740) cmail_ddmenu_btn01_pane_t1_ParamLimits

0xc8aa,	// (0x0004d740) cmail_ddmenu_btn01_pane_t1

0x4c24,	// (0x00045aba) bg_button_pane_cp029_ParamLimits

0x4c24,	// (0x00045aba) bg_button_pane_cp029

0x9d15,	// (0x0004abab) cmail_ddmenu_btn02_pane_g1_ParamLimits

0x9d15,	// (0x0004abab) cmail_ddmenu_btn02_pane_g1

0x9d2d,	// (0x0004abc3) cmail_ddmenu_btn02_pane_t1_ParamLimits

0x9d2d,	// (0x0004abc3) cmail_ddmenu_btn02_pane_t1

0xef76,	// (0x0004fe0c) bg_button_pane_cp031_ParamLimits

0xef76,	// (0x0004fe0c) bg_button_pane_cp031

0x9d15,	// (0x0004abab) cmail_ddmenu_btn03_pane_g1_ParamLimits

0x9d15,	// (0x0004abab) cmail_ddmenu_btn03_pane_g1

0x9d2d,	// (0x0004abc3) cmail_ddmenu_btn03_pane_t1_ParamLimits

0x9d2d,	// (0x0004abc3) cmail_ddmenu_btn03_pane_t1

0x7627,	// (0x000484bd) cell_dialer2_keypad_pane_t1_ParamLimits

0x7641,	// (0x000484d7) cell_dialer2_keypad_pane_t1_copy1_ParamLimits

0x7641,	// (0x000484d7) cell_dialer2_keypad_pane_t1_copy1

0x914b,	// (0x00049fe1) ncimui_group_button_pane

0xef76,	// (0x0004fe0c) main_sp_fs_calendar_pane_ParamLimits

0x9a45,	// (0x0004a8db) list_single_cmail_header_caption_pane_ParamLimits

0xc6c1,	// (0x0004d557) aid_recal_txt_sm_pane

0xa852,	// (0x0004b6e8) mian_recal_day_pane

0xc703,	// (0x0004d599) popup_sp_fs_cale_preview_window_ParamLimits

0xc8bf,	// (0x0004d755) list_recal_day_pane

0xc901,	// (0x0004d797) list_single_recal_day_pane_ParamLimits

0xc901,	// (0x0004d797) list_single_recal_day_pane

0xc913,	// (0x0004d7a9) list_single_recal_day_pane_g1_ParamLimits

0xc913,	// (0x0004d7a9) list_single_recal_day_pane_g1

0xc91f,	// (0x0004d7b5) list_single_recal_day_pane_g2_ParamLimits

0xc91f,	// (0x0004d7b5) list_single_recal_day_pane_g2

0xc92b,	// (0x0004d7c1) list_single_recal_day_pane_g3_ParamLimits

0xc92b,	// (0x0004d7c1) list_single_recal_day_pane_g3

0x1657,	// (0x000424ed) list_single_recal_day_pane_g4_ParamLimits

0x1657,	// (0x000424ed) list_single_recal_day_pane_g4

0xc937,	// (0x0004d7cd) list_single_recal_day_pane_g5_ParamLimits

0xc937,	// (0x0004d7cd) list_single_recal_day_pane_g5

0x166f,	// (0x00042505) list_single_recal_day_pane_g6_ParamLimits

0x166f,	// (0x00042505) list_single_recal_day_pane_g6

0x0004,

0xfdef,	// (0x00050c85) list_single_recal_day_pane_g_ParamLimits

0xfdef,	// (0x00050c85) list_single_recal_day_pane_g

0xc94b,	// (0x0004d7e1) list_single_recal_day_pane_t1

0x167b,	// (0x00042511) list_single_recal_day_pane_t2

0x0001,

0xfdfa,	// (0x00050c90) list_single_recal_day_pane_t

0x9d51,	// (0x0004abe7) ncimui_query_button_pane_ParamLimits

0x9d51,	// (0x0004abe7) ncimui_query_button_pane

0x9d61,	// (0x0004abf7) ncimui_query_button_pane_t1_ParamLimits

0x9d61,	// (0x0004abf7) ncimui_query_button_pane_t1

0xc95d,	// (0x0004d7f3) ncimui_query_button_pane_t2_ParamLimits

0xc95d,	// (0x0004d7f3) ncimui_query_button_pane_t2

0x0001,

0xfdff,	// (0x00050c95) ncimui_query_button_pane_t_ParamLimits

0xfdff,	// (0x00050c95) ncimui_query_button_pane_t

0x9d74,	// (0x0004ac0a) query_button_pane_ParamLimits

0x9d74,	// (0x0004ac0a) query_button_pane

0xa852,	// (0x0004b6e8) bg_button_pane_cp0028

0xc970,	// (0x0004d806) query_button_pane_t1

0x4c46,	// (0x00045adc) main_tport_pane_ParamLimits

0x9958,	// (0x0004a7ee) bg_popup_window_pane_cp01_ParamLimits

0x9958,	// (0x0004a7ee) bg_popup_window_pane_cp01

0x996f,	// (0x0004a805) heading_pane_cp08_ParamLimits

0x996f,	// (0x0004a805) heading_pane_cp08

0x9980,	// (0x0004a816) heading_pane_cp07_ParamLimits

0x9980,	// (0x0004a816) heading_pane_cp07

0xc4ee,	// (0x0004d384) cell_tport_appsw_pane_g2

0x0002,

0xfd4b,	// (0x00050be1) cell_tport_appsw_pane_g

0x0c17,	// (0x00041aad) input_candi_list_open_g1

0xdd5e,	// (0x0004ebf4) list_cale_time_pane_g6_ParamLimits

0xdd5e,	// (0x0004ebf4) list_cale_time_pane_g6

0x5f68,	// (0x00046dfe) aid_size_touch_calib_1_ParamLimits

0x5f68,	// (0x00046dfe) aid_size_touch_calib_1

0x5f7a,	// (0x00046e10) aid_size_touch_calib_2_ParamLimits

0x5f7a,	// (0x00046e10) aid_size_touch_calib_2

0x5f90,	// (0x00046e26) aid_size_touch_calib_3_ParamLimits

0x5f90,	// (0x00046e26) aid_size_touch_calib_3

0x5fa8,	// (0x00046e3e) aid_size_touch_calib_4_ParamLimits

0x5fa8,	// (0x00046e3e) aid_size_touch_calib_4

0x5fbc,	// (0x00046e52) main_touch_calib_button_group_pane_ParamLimits

0x5fbc,	// (0x00046e52) main_touch_calib_button_group_pane

0x5fd4,	// (0x00046e6a) main_touch_calib_pane_g1_ParamLimits

0x5fe6,	// (0x00046e7c) main_touch_calib_pane_g2_ParamLimits

0x5ff8,	// (0x00046e8e) main_touch_calib_pane_g3_ParamLimits

0x600a,	// (0x00046ea0) main_touch_calib_pane_g4_ParamLimits

0xf70d,	// (0x000505a3) main_touch_calib_pane_g_ParamLimits

0x601c,	// (0x00046eb2) main_touch_calib_pane_t1_ParamLimits

0x6034,	// (0x00046eca) main_touch_calib_pane_t2_ParamLimits

0x604c,	// (0x00046ee2) main_touch_calib_pane_t3_ParamLimits

0x605e,	// (0x00046ef4) main_touch_calib_pane_t4_ParamLimits

0x6070,	// (0x00046f06) main_touch_calib_pane_t5_ParamLimits

0xf716,	// (0x000505ac) main_touch_calib_pane_t_ParamLimits

0x6764,	// (0x000475fa) list_single_fp_cale_pane_g3_ParamLimits

0x6764,	// (0x000475fa) list_single_fp_cale_pane_g3

0xef76,	// (0x0004fe0c) bg_button_pane_cp012_ParamLimits

0xef76,	// (0x0004fe0c) bg_vkb2_func_pane_cp03_ParamLimits

0x858f,	// (0x00049425) cell_vitu2_function_top_pane_g1_ParamLimits

0xef76,	// (0x0004fe0c) bg_vkb2_func_pane_cp04_ParamLimits

0x90db,	// (0x00049f71) main_ncimui_button_group_pane_ParamLimits

0x90db,	// (0x00049f71) main_ncimui_button_group_pane

0x9139,	// (0x00049fcf) main_ncimui_pane_t3_ParamLimits

0x9139,	// (0x00049fcf) main_ncimui_pane_t3

0xc624,	// (0x0004d4ba) phacti_button_group_pane

0xc88e,	// (0x0004d724) aid_size_list_single_double_ParamLimits

0x9cdb,	// (0x0004ab71) popup_ezdial_listscroll_window_ParamLimits

0x9cf1,	// (0x0004ab87) popup_number_entry_window_cp01_ParamLimits

0x9d86,	// (0x0004ac1c) phacti_button_pane_ParamLimits

0x9d86,	// (0x0004ac1c) phacti_button_pane

0xa852,	// (0x0004b6e8) bg_button_pane_cp14

0xc97e,	// (0x0004d814) phacti_button_pane_t1

0x9d95,	// (0x0004ac2b) main_touch_calib_button_pane_ParamLimits

0x9d95,	// (0x0004ac2b) main_touch_calib_button_pane

0xd729,	// (0x0004e5bf) bg_button_pane_cp18_ParamLimits

0xd729,	// (0x0004e5bf) bg_button_pane_cp18

0x9db0,	// (0x0004ac46) main_touch_calib_button_pane_t1_ParamLimits

0x9db0,	// (0x0004ac46) main_touch_calib_button_pane_t1

0x9dc6,	// (0x0004ac5c) main_touch_calib_button_pane_t2_ParamLimits

0x9dc6,	// (0x0004ac5c) main_touch_calib_button_pane_t2

0x0001,

0xfe04,	// (0x00050c9a) main_touch_calib_button_pane_t_ParamLimits

0xfe04,	// (0x00050c9a) main_touch_calib_button_pane_t

0xa852,	// (0x0004b6e8) cell_ncimui_button_pane

0xa852,	// (0x0004b6e8) bg_button_pane_cp032

0xc98c,	// (0x0004d822) cell_ncimui_button_pane_t1

0xaffd,	// (0x0004be93) image3_infobar_pane_ParamLimits

0xaffd,	// (0x0004be93) image3_infobar_pane

0x94d4,	// (0x0004a36a) fs_bigclock_status_pane_ParamLimits

0x94d4,	// (0x0004a36a) fs_bigclock_status_pane

0x94e1,	// (0x0004a377) main_fs_bigclock_clock_pane_ParamLimits

0x94e1,	// (0x0004a377) main_fs_bigclock_clock_pane

0x9503,	// (0x0004a399) main_fs_bigclock_indi_pane_ParamLimits

0x9503,	// (0x0004a399) main_fs_bigclock_indi_pane

0x952d,	// (0x0004a3c3) main_fs_bigclock_swipe_pane_ParamLimits

0x952d,	// (0x0004a3c3) main_fs_bigclock_swipe_pane

0xa852,	// (0x0004b6e8) main_fs_clock_dumped_data

0xbfb0,	// (0x0004ce46) list_single_fs_bigclock_indicator_pane_g1_ParamLimits

0xbfb0,	// (0x0004ce46) list_single_fs_bigclock_indicator_pane_g1

0xbfca,	// (0x0004ce60) list_single_fs_bigclock_indicator_pane_g2_ParamLimits

0xbfca,	// (0x0004ce60) list_single_fs_bigclock_indicator_pane_g2

0xbfe4,	// (0x0004ce7a) list_single_fs_bigclock_indicator_pane_g3_ParamLimits

0xbfe4,	// (0x0004ce7a) list_single_fs_bigclock_indicator_pane_g3

0xbffe,	// (0x0004ce94) list_single_fs_bigclock_indicator_pane_g4_ParamLimits

0xbffe,	// (0x0004ce94) list_single_fs_bigclock_indicator_pane_g4

0x0004,

0xfc28,	// (0x00050abe) list_single_fs_bigclock_indicator_pane_g_ParamLimits

0xfc28,	// (0x00050abe) list_single_fs_bigclock_indicator_pane_g

0xc027,	// (0x0004cebd) list_single_fs_bigclock_indicator_pane_t1_ParamLimits

0xc027,	// (0x0004cebd) list_single_fs_bigclock_indicator_pane_t1

0xc04f,	// (0x0004cee5) list_single_fs_bigclock_indicator_pane_t2_ParamLimits

0xc04f,	// (0x0004cee5) list_single_fs_bigclock_indicator_pane_t2

0xc077,	// (0x0004cf0d) list_single_fs_bigclock_indicator_pane_t3_ParamLimits

0xc077,	// (0x0004cf0d) list_single_fs_bigclock_indicator_pane_t3

0xc09f,	// (0x0004cf35) list_single_fs_bigclock_indicator_pane_t4_ParamLimits

0xc09f,	// (0x0004cf35) list_single_fs_bigclock_indicator_pane_t4

0x0004,

0xfc33,	// (0x00050ac9) list_single_fs_bigclock_indicator_pane_t_ParamLimits

0xfc33,	// (0x00050ac9) list_single_fs_bigclock_indicator_pane_t

0xc99a,	// (0x0004d830) image3_infobar_fav_pane_ParamLimits

0xc99a,	// (0x0004d830) image3_infobar_fav_pane

0xc9aa,	// (0x0004d840) image3_infobar_loc_pane_ParamLimits

0xc9aa,	// (0x0004d840) image3_infobar_loc_pane

0xc9be,	// (0x0004d854) image3_infobar_time_pane_ParamLimits

0xc9be,	// (0x0004d854) image3_infobar_time_pane

0x5c06,	// (0x00046a9c) image3_infobar_time_pane_g1

0xc9ce,	// (0x0004d864) image3_infobar_time_pane_t1

0x5c06,	// (0x00046a9c) image3_infobar_loc_pane_g1

0xc9dc,	// (0x0004d872) image3_infobar_loc_pane_g2

0x0001,

0xfe09,	// (0x00050c9f) image3_infobar_loc_pane_g

0xc9e4,	// (0x0004d87a) image3_infobar_loc_pane_t1

0x5c06,	// (0x00046a9c) image3_infobar_fav_pane_g1

0xc9f2,	// (0x0004d888) image3_infobar_fav_pane_g2

0x0001,

0xfe0e,	// (0x00050ca4) image3_infobar_fav_pane_g

0xc9fa,	// (0x0004d890) fs_bigclock_status_battery_pane

0xca03,	// (0x0004d899) fs_bigclock_status_signal_pane

0xca0c,	// (0x0004d8a2) fs_bigclock_status_title_pane

0xca15,	// (0x0004d8ab) fs_bigclock_status_signal_pane_g1

0xca1e,	// (0x0004d8b4) fs_bigclock_status_signal_pane_g2

0x0001,

0xfe13,	// (0x00050ca9) fs_bigclock_status_signal_pane_g

0xca26,	// (0x0004d8bc) fs_bigclock_status_battery_pane_g1

0xca2f,	// (0x0004d8c5) fs_bigclock_status_battery_pane_g2

0x0001,

0xfe18,	// (0x00050cae) fs_bigclock_status_battery_pane_g

0xca37,	// (0x0004d8cd) fs_bigclock_status_title_pane_t1

0x9de4,	// (0x0004ac7a) main_fs_bigclock_clock_pane_g1

0x9df6,	// (0x0004ac8c) main_fs_bigclock_clock_pane_g2

0x9e07,	// (0x0004ac9d) main_fs_bigclock_clock_pane_g3

0x9e07,	// (0x0004ac9d) main_fs_bigclock_clock_pane_g4

0x0003,

0xfe1d,	// (0x00050cb3) main_fs_bigclock_clock_pane_g

0x9e1a,	// (0x0004acb0) main_fs_bigclock_clock_pane_t1

0x9e35,	// (0x0004accb) main_fs_bigclock_clock_pane_t2

0x0001,

0xfe26,	// (0x00050cbc) main_fs_bigclock_clock_pane_t

0xca45,	// (0x0004d8db) list_single_fs_bigclock_indicator_pane_ParamLimits

0xca45,	// (0x0004d8db) list_single_fs_bigclock_indicator_pane

0xca56,	// (0x0004d8ec) list_single_fs_bigclock_pane_ParamLimits

0xca56,	// (0x0004d8ec) list_single_fs_bigclock_pane

0xca7c,	// (0x0004d912) main_fs_bigclock_indicator_pane_t1

0xca8b,	// (0x0004d921) list_single_fs_bigclock_pane_g1

0xca93,	// (0x0004d929) list_single_fs_bigclock_pane_t1

0x5c06,	// (0x00046a9c) main_fs_bigclock_swipe_pane_g1

0xcad3,	// (0x0004d969) main_fs_bigclock_swipe_pane_g2

0x0001,

0xfe37,	// (0x00050ccd) main_fs_bigclock_swipe_pane_g

0xcadb,	// (0x0004d971) main_fs_bigclock_swipe_pane_t1_ParamLimits

0xcadb,	// (0x0004d971) main_fs_bigclock_swipe_pane_t1

0x364d,	// (0x000444e3) call_type_pane_ParamLimits

0xa852,	// (0x0004b6e8) main_btmg_pane

0x1533,	// (0x000423c9) list_single_cale_mrui_row_pane_g2_ParamLimits

0x1533,	// (0x000423c9) list_single_cale_mrui_row_pane_g2

0x0002,

0xfdaa,	// (0x00050c40) list_single_cale_mrui_row_pane_g_ParamLimits

0xfdaa,	// (0x00050c40) list_single_cale_mrui_row_pane_g

0xc8e8,	// (0x0004d77e) list_recal_vselct_arw_lo_pane

0xc8f0,	// (0x0004d786) list_recal_vselct_arw_up_pane

0xc8f8,	// (0x0004d78e) list_recal_vselct_pane

0xcaf8,	// (0x0004d98e) btmg_button_pane

0x9e95,	// (0x0004ad2b) main_btmg_pane_g1

0xa852,	// (0x0004b6e8) bg_button_pane_cp044

0xcb00,	// (0x0004d996) btmg_button_pane_t1

0x4c10,	// (0x00045aa6) aid_listscroll_gen

0xef76,	// (0x0004fe0c) main_cntbar_detail_pane

0xc514,	// (0x0004d3aa) list_cmail_folder_pane

0xc524,	// (0x0004d3ba) sp_fs_scroll_pane_cp03_ParamLimits

0x9a45,	// (0x0004a8db) list_single_fs_dyc_pane_cp01_ParamLimits

0x9a45,	// (0x0004a8db) list_single_fs_dyc_pane_cp01

0xcb0e,	// (0x0004d9a4) aid_size_cmail_indent

0xcb17,	// (0x0004d9ad) list_single_dyc_row_pane_cp01

0x9ec5,	// (0x0004ad5b) cntbar_detail_list_pane_ParamLimits

0x9ec5,	// (0x0004ad5b) cntbar_detail_list_pane

0x9f0b,	// (0x0004ada1) main_cntbar_detail_cont_pane_ParamLimits

0x9f0b,	// (0x0004ada1) main_cntbar_detail_cont_pane

0x9f1f,	// (0x0004adb5) scroll_pane_cp032_ParamLimits

0x9f1f,	// (0x0004adb5) scroll_pane_cp032

0x9f2b,	// (0x0004adc1) cntbar_detail_list_event_pane_ParamLimits

0x9f2b,	// (0x0004adc1) cntbar_detail_list_event_pane

0x9ed5,	// (0x0004ad6b) cntbar_detail_list_shct_pane

0xcb20,	// (0x0004d9b6) aid_list_gen

0xd82e,	// (0x0004e6c4) aid_scroll

0xb64a,	// (0x0004c4e0) aid_size_touch_scroll_bar

0xb675,	// (0x0004c50b) aid_list_double

0x9f3c,	// (0x0004add2) aid_list_single

0xb675,	// (0x0004c50b) aid_list_single_lg

0x168d,	// (0x00042523) aid_list_z_g_a_sm

0x1695,	// (0x0004252b) aid_list_z_g_d

0x169d,	// (0x00042533) aid_txt_z_prm

0xcb29,	// (0x0004d9bf) aid_txt_z_prm_cp01

0xcb37,	// (0x0004d9cd) aid_txt_z_sec

0x9f45,	// (0x0004addb) main_cntbar_detail_cont_pane_g1_ParamLimits

0x9f45,	// (0x0004addb) main_cntbar_detail_cont_pane_g1

0x9f59,	// (0x0004adef) main_cntbar_detail_cont_pane_g2_ParamLimits

0x9f59,	// (0x0004adef) main_cntbar_detail_cont_pane_g2

0x0001,

0xfe3c,	// (0x00050cd2) main_cntbar_detail_cont_pane_g_ParamLimits

0xfe3c,	// (0x00050cd2) main_cntbar_detail_cont_pane_g

0xcb45,	// (0x0004d9db) main_cntbar_detail_cont_pane_t1

0xcb53,	// (0x0004d9e9) main_cntbar_detail_cont_pane_t2

0xcb61,	// (0x0004d9f7) main_cntbar_detail_cont_pane_t3

0x0002,

0xfe41,	// (0x00050cd7) main_cntbar_detail_cont_pane_t

0x9f69,	// (0x0004adff) cell_cntbar_detail_list_shct_pane_ParamLimits

0x9f69,	// (0x0004adff) cell_cntbar_detail_list_shct_pane

0xcb6f,	// (0x0004da05) cntbar_detail_list_shct_pane_g1

0xcb78,	// (0x0004da0e) cntbar_detail_list_shct_pane_g2

0x0001,

0xfe48,	// (0x00050cde) cntbar_detail_list_shct_pane_g

0x9f7b,	// (0x0004ae11) cntbar_detail_list_event_pane_g1_ParamLimits

0x9f7b,	// (0x0004ae11) cntbar_detail_list_event_pane_g1

0x9f87,	// (0x0004ae1d) cntbar_detail_list_event_pane_g2_ParamLimits

0x9f87,	// (0x0004ae1d) cntbar_detail_list_event_pane_g2

0x0005,

0xfe4d,	// (0x00050ce3) cntbar_detail_list_event_pane_g_ParamLimits

0xfe4d,	// (0x00050ce3) cntbar_detail_list_event_pane_g

0x9ff3,	// (0x0004ae89) cntbar_detail_list_event_pane_t1_ParamLimits

0x9ff3,	// (0x0004ae89) cntbar_detail_list_event_pane_t1

0xa008,	// (0x0004ae9e) cntbar_detail_list_event_pane_t2_ParamLimits

0xa008,	// (0x0004ae9e) cntbar_detail_list_event_pane_t2

0x0002,

0xfe5a,	// (0x00050cf0) cntbar_detail_list_event_pane_t_ParamLimits

0xfe5a,	// (0x00050cf0) cntbar_detail_list_event_pane_t

0x5c06,	// (0x00046a9c) cell_cntbar_detail_list_shct_pane_g1

0xe2ee,	// (0x0004f184) navi_pane_mv_g3

0xef76,	// (0x0004fe0c) main_cntbar_detail_pane_ParamLimits

0xa852,	// (0x0004b6e8) main_notif_wgt_pane

0xadf9,	// (0x0004bc8f) aid_tch_main_mp4_pane_g4

0xaff5,	// (0x0004be8b) popup_slider_window_cp02

0xc8de,	// (0x0004d774) list_recal_day_event_pane

0x9e9d,	// (0x0004ad33) cntbar_detail_btn_pane_ParamLimits

0x9e9d,	// (0x0004ad33) cntbar_detail_btn_pane

0x9eb0,	// (0x0004ad46) cntbar_detail_btn_pane_cp01_ParamLimits

0x9eb0,	// (0x0004ad46) cntbar_detail_btn_pane_cp01

0x9ed5,	// (0x0004ad6b) cntbar_detail_list_shct_pane_ParamLimits

0x9ee5,	// (0x0004ad7b) cntbar_detail_pane_g1_ParamLimits

0x9ee5,	// (0x0004ad7b) cntbar_detail_pane_g1

0x9ef5,	// (0x0004ad8b) cntbar_detail_pane_t1_ParamLimits

0x9ef5,	// (0x0004ad8b) cntbar_detail_pane_t1

0x9f93,	// (0x0004ae29) cntbar_detail_list_event_pane_g3_ParamLimits

0x9f93,	// (0x0004ae29) cntbar_detail_list_event_pane_g3

0x9fab,	// (0x0004ae41) cntbar_detail_list_event_pane_g4_ParamLimits

0x9fab,	// (0x0004ae41) cntbar_detail_list_event_pane_g4

0x9fc3,	// (0x0004ae59) cntbar_detail_list_event_pane_g5_ParamLimits

0x9fc3,	// (0x0004ae59) cntbar_detail_list_event_pane_g5

0x9fdb,	// (0x0004ae71) cntbar_detail_list_event_pane_g6_ParamLimits

0x9fdb,	// (0x0004ae71) cntbar_detail_list_event_pane_g6

0xa01d,	// (0x0004aeb3) cntbar_detail_list_event_pane_t3_ParamLimits

0xa01d,	// (0x0004aeb3) cntbar_detail_list_event_pane_t3

0xa02f,	// (0x0004aec5) popup_notif_wgt_window_ParamLimits

0xa02f,	// (0x0004aec5) popup_notif_wgt_window

0xa044,	// (0x0004aeda) popup_submenu_window_cp01_ParamLimits

0xa044,	// (0x0004aeda) popup_submenu_window_cp01

0xd8f8,	// (0x0004e78e) bg_popup_window_pane_cp10

0xcb81,	// (0x0004da17) listscroll_notif_wgt_pane

0xcb92,	// (0x0004da28) list_notif_wgt_window

0xcb9b,	// (0x0004da31) scroll_pane_cp033

0xa054,	// (0x0004aeea) list_notif_wgt_row_pane_ParamLimits

0xa054,	// (0x0004aeea) list_notif_wgt_row_pane

0xcba4,	// (0x0004da3a) aid_size_list_notif_wgt_del

0xcbb1,	// (0x0004da47) list_notif_wgt_row_pane_g1

0xcbbd,	// (0x0004da53) list_notif_wgt_row_pane_g2

0xcbd1,	// (0x0004da67) list_notif_wgt_row_pane_g3

0x0002,

0xfe61,	// (0x00050cf7) list_notif_wgt_row_pane_g

0xcbde,	// (0x0004da74) list_notif_wgt_row_pane_t1

0xcbf4,	// (0x0004da8a) list_notif_wgt_row_pane_t2

0xcc06,	// (0x0004da9c) list_notif_wgt_row_pane_t3

0x0002,

0xfe68,	// (0x00050cfe) list_notif_wgt_row_pane_t

0xb344,	// (0x0004c1da) list_recal_day_event_pane_g1

0xcc18,	// (0x0004daae) list_recal_day_event_pane_t1

0xa852,	// (0x0004b6e8) bg_button_pane_cp045

0xa064,	// (0x0004aefa) cntbar_detail_btn_pane_t1

0x4c24,	// (0x00045aba) main_callh_pane_ParamLimits

0x4c24,	// (0x00045aba) main_callh_pane

0xa852,	// (0x0004b6e8) main_coverflow0_pane

0xa852,	// (0x0004b6e8) main_wgtman_pane

0x9541,	// (0x0004a3d7) main_fs_bigclock_unlock_btn_pane_ParamLimits

0x9541,	// (0x0004a3d7) main_fs_bigclock_unlock_btn_pane

0xc4e6,	// (0x0004d37c) bg_button_pane_cp16

0xc4f6,	// (0x0004d38c) cell_tport_appsw_pane_g3

0xa072,	// (0x0004af08) cf0_flow_pane_ParamLimits

0xa072,	// (0x0004af08) cf0_flow_pane

0xcc27,	// (0x0004dabd) listscroll_cf0_pane

0xcc30,	// (0x0004dac6) main_cf0_pane_g1

0xa087,	// (0x0004af1d) main_cf0_pane_t1_ParamLimits

0xa087,	// (0x0004af1d) main_cf0_pane_t1

0xa09c,	// (0x0004af32) main_cf0_pane_t2_ParamLimits

0xa09c,	// (0x0004af32) main_cf0_pane_t2

0x0001,

0xfe74,	// (0x00050d0a) main_cf0_pane_t_ParamLimits

0xfe74,	// (0x00050d0a) main_cf0_pane_t

0xcc42,	// (0x0004dad8) scroll_pane_cp11

0xa0b1,	// (0x0004af47) cf0_flow_pane_g1

0xa0b9,	// (0x0004af4f) cf0_flow_pane_g2

0x0001,

0xfe79,	// (0x00050d0f) cf0_flow_pane_g

0xa0c1,	// (0x0004af57) cf0_flow_pane_t1

0xa852,	// (0x0004b6e8) main_call6_pane

0xa852,	// (0x0004b6e8) main_calllock_pane

0xa0cf,	// (0x0004af65) call6_btn_grp_pane_ParamLimits

0xa0cf,	// (0x0004af65) call6_btn_grp_pane

0xa0e5,	// (0x0004af7b) call6_pane_g1_ParamLimits

0xa0e5,	// (0x0004af7b) call6_pane_g1

0xa0f8,	// (0x0004af8e) popup_call6_1st_window_ParamLimits

0xa0f8,	// (0x0004af8e) popup_call6_1st_window

0xa107,	// (0x0004af9d) popup_call6_2nd_window_ParamLimits

0xa107,	// (0x0004af9d) popup_call6_2nd_window

0xa116,	// (0x0004afac) cell_call6_btn_pane_ParamLimits

0xa116,	// (0x0004afac) cell_call6_btn_pane

0xd8f8,	// (0x0004e78e) bg_popup_call2_in_pane_cp03

0xcc4b,	// (0x0004dae1) popup_call6_1st_window_g1

0xcc53,	// (0x0004dae9) popup_call6_1st_window_g2

0xcc5b,	// (0x0004daf1) popup_call6_1st_window_g3

0x0002,

0xfe7e,	// (0x00050d14) popup_call6_1st_window_g

0xcc63,	// (0x0004daf9) popup_call6_1st_window_t1

0xcc72,	// (0x0004db08) popup_call6_1st_window_t2

0xcc80,	// (0x0004db16) popup_call6_1st_window_t3

0x0002,

0xfe85,	// (0x00050d1b) popup_call6_1st_window_t

0xd8f8,	// (0x0004e78e) bg_popup_call2_in_pane_cp04

0xcc4b,	// (0x0004dae1) popup_call6_2nd_window_g1

0xcc53,	// (0x0004dae9) popup_call6_2nd_window_g2

0xcc5b,	// (0x0004daf1) popup_call6_2nd_window_g3

0x0002,

0xfe7e,	// (0x00050d14) popup_call6_2nd_window_g

0xcc63,	// (0x0004daf9) popup_call6_2nd_window_t1

0xa852,	// (0x0004b6e8) bg_button_pane_cp15

0xd286,	// (0x0004e11c) cell_call6_btn_pane_g1

0xd28f,	// (0x0004e125) cell_call6_btn_pane_t1

0xa12a,	// (0x0004afc0) listscroll_wgtman_pane_ParamLimits

0xa12a,	// (0x0004afc0) listscroll_wgtman_pane

0xa14b,	// (0x0004afe1) wgtman_btn_pane_ParamLimits

0xa14b,	// (0x0004afe1) wgtman_btn_pane

0xe145,	// (0x0004efdb) aid_scroll_copy1

0xcc8e,	// (0x0004db24) list_wgtman_pane

0xa18b,	// (0x0004b021) wgtman_btn_pane_g1_ParamLimits

0xa18b,	// (0x0004b021) wgtman_btn_pane_g1

0xa1b7,	// (0x0004b04d) wgtman_btn_pane_t1_ParamLimits

0xa1b7,	// (0x0004b04d) wgtman_btn_pane_t1

0xcc98,	// (0x0004db2e) wgtman_btn_pane_t2_ParamLimits

0xcc98,	// (0x0004db2e) wgtman_btn_pane_t2

0x0001,

0xfe8c,	// (0x00050d22) wgtman_btn_pane_t_ParamLimits

0xfe8c,	// (0x00050d22) wgtman_btn_pane_t

0xa1f4,	// (0x0004b08a) listrow_wgtman_pane_ParamLimits

0xa1f4,	// (0x0004b08a) listrow_wgtman_pane

0xa205,	// (0x0004b09b) listrow_wgtman_pane_g1

0xa212,	// (0x0004b0a8) listrow_wgtman_pane_g2

0x0001,

0xfe91,	// (0x00050d27) listrow_wgtman_pane_g

0x16ab,	// (0x00042541) listrow_wgtman_pane_t1

0x16c3,	// (0x00042559) listrow_wgtman_pane_t2

0x0001,

0xfe96,	// (0x00050d2c) listrow_wgtman_pane_t

0x16e9,	// (0x0004257f) wait_bar_pane_cp09

0xccaf,	// (0x0004db45) main_calllock_btn_pane

0xccb7,	// (0x0004db4d) main_calllock_pane_g1

0xa852,	// (0x0004b6e8) bg_button_pane_cp17

0xccc0,	// (0x0004db56) main_calllock_btn_pane_g1

0xccc9,	// (0x0004db5f) main_calllock_btn_pane_t1

0xa852,	// (0x0004b6e8) main_dialer3_pane

0xa852,	// (0x0004b6e8) main_fmrd2_pane

0x5c06,	// (0x00046a9c) main_fs_bigclock_unlock_btn_pane_g1

0xcce0,	// (0x0004db76) main_fs_bigclock_unlock_btn_pane_t1

0xa22a,	// (0x0004b0c0) area_fmrd2_info_pane_ParamLimits

0xa22a,	// (0x0004b0c0) area_fmrd2_info_pane

0xa239,	// (0x0004b0cf) area_fmrd2_visual_pane_ParamLimits

0xa239,	// (0x0004b0cf) area_fmrd2_visual_pane

0xa247,	// (0x0004b0dd) fmrd2_indi_pane_ParamLimits

0xa247,	// (0x0004b0dd) fmrd2_indi_pane

0xa254,	// (0x0004b0ea) area_fmrd2_visual_pane_g1

0xa25c,	// (0x0004b0f2) area_fmrd2_visual_pane_t1

0xa26a,	// (0x0004b100) area_fmrd2_visual_pane_t2

0xa278,	// (0x0004b10e) area_fmrd2_visual_pane_t3

0x0002,

0xfea0,	// (0x00050d36) area_fmrd2_visual_pane_t

0xa286,	// (0x0004b11c) area_fmrd2_info_pane_g1

0xa28e,	// (0x0004b124) area_fmrd2_info_pane_t1

0xa29c,	// (0x0004b132) area_fmrd2_info_pane_t2

0xa2aa,	// (0x0004b140) area_fmrd2_info_pane_t3

0xa2b8,	// (0x0004b14e) area_fmrd2_info_pane_t4

0x0003,

0xfea7,	// (0x00050d3d) area_fmrd2_info_pane_t

0xa2c6,	// (0x0004b15c) fmrd2_indi_pane_t1

0xa2d4,	// (0x0004b16a) fmrd2_indi_pane_t2

0xa2e2,	// (0x0004b178) fmrd2_indi_pane_t3

0x0002,

0xfeb0,	// (0x00050d46) fmrd2_indi_pane_t

0xc00d,	// (0x0004cea3) list_single_fs_bigclock_indicator_pane_g5_ParamLimits

0xc00d,	// (0x0004cea3) list_single_fs_bigclock_indicator_pane_g5

0xc0bb,	// (0x0004cf51) list_single_fs_bigclock_indicator_pane_t5_ParamLimits

0xc0bb,	// (0x0004cf51) list_single_fs_bigclock_indicator_pane_t5

0x9b3c,	// (0x0004a9d2) aid_cell_bcale_month_pane_ParamLimits

0x9b3c,	// (0x0004a9d2) aid_cell_bcale_month_pane

0x9b5a,	// (0x0004a9f0) bcale_month_pane_ParamLimits

0x9b5a,	// (0x0004a9f0) bcale_month_pane

0x9b72,	// (0x0004aa08) bcale_preview_pane_ParamLimits

0x9b72,	// (0x0004aa08) bcale_preview_pane

0xca93,	// (0x0004d929) list_single_fs_bigclock_pane_t1_ParamLimits

0xcaaf,	// (0x0004d945) list_single_fs_bigclock_pane_t2_ParamLimits

0xcaaf,	// (0x0004d945) list_single_fs_bigclock_pane_t2

0x0001,

0xfe32,	// (0x00050cc8) list_single_fs_bigclock_pane_t_ParamLimits

0xfe32,	// (0x00050cc8) list_single_fs_bigclock_pane_t

0xccd8,	// (0x0004db6e) main_fs_bigclock_unlock_btn_pane_g2

0x0001,

0xfe9b,	// (0x00050d31) main_fs_bigclock_unlock_btn_pane_g

0xa2f0,	// (0x0004b186) aid_dia3_key_size_ParamLimits

0xa2f0,	// (0x0004b186) aid_dia3_key_size

0xa2ff,	// (0x0004b195) aid_dia3_listrow_size_ParamLimits

0xa2ff,	// (0x0004b195) aid_dia3_listrow_size

0xa312,	// (0x0004b1a8) dia3_keypad_fun_pane_ParamLimits

0xa312,	// (0x0004b1a8) dia3_keypad_fun_pane

0xa326,	// (0x0004b1bc) dia3_keypad_num_pane_ParamLimits

0xa326,	// (0x0004b1bc) dia3_keypad_num_pane

0xa337,	// (0x0004b1cd) dia3_listscroll_pane_ParamLimits

0xa337,	// (0x0004b1cd) dia3_listscroll_pane

0xa348,	// (0x0004b1de) dia3_numentry_pane_ParamLimits

0xa348,	// (0x0004b1de) dia3_numentry_pane

0xccee,	// (0x0004db84) dia3_list_pane

0xccf7,	// (0x0004db8d) scroll_pane_cp12

0xa852,	// (0x0004b6e8) bg_dia3_numentry_pane

0xa35a,	// (0x0004b1f0) dia3_numentry_pane_t1

0xa369,	// (0x0004b1ff) cell_dia3_key_num_pane

0xa371,	// (0x0004b207) cell_dia3_key0_fun_pane_ParamLimits

0xa371,	// (0x0004b207) cell_dia3_key0_fun_pane

0xa385,	// (0x0004b21b) cell_dia3_key1_fun_pane_ParamLimits

0xa385,	// (0x0004b21b) cell_dia3_key1_fun_pane

0xa39c,	// (0x0004b232) dia3_listrow_pane

0xbd0e,	// (0x0004cba4) bg_dia3_numentry_pane_g1

0xa852,	// (0x0004b6e8) bg_button_pane_cp21

0xcd00,	// (0x0004db96) cell_dia3_key_num_pane_t1

0xcd0e,	// (0x0004dba4) cell_dia3_key_num_pane_t2

0xcd1d,	// (0x0004dbb3) cell_dia3_key_num_pane_t3

0xcd2c,	// (0x0004dbc2) cell_dia3_key_num_pane_t4

0x0003,

0xfeb7,	// (0x00050d4d) cell_dia3_key_num_pane_t

0xa852,	// (0x0004b6e8) bg_button_pane_cp19

0xcd3b,	// (0x0004dbd1) cell_dia3_key0_fun_pane_g1

0xa852,	// (0x0004b6e8) bg_button_pane_cp20

0xa3ae,	// (0x0004b244) cell_dia3_key1_fun_pane_g1

0xa3b6,	// (0x0004b24c) area_left_week_number_pane

0xa3c2,	// (0x0004b258) area_top_day_name_pane

0xa3d3,	// (0x0004b269) frame_month_view_pane

0xcd43,	// (0x0004dbd9) grid_month_view_pane

0xa3e4,	// (0x0004b27a) cell_top_day_name_pane_ParamLimits

0xa3e4,	// (0x0004b27a) cell_top_day_name_pane

0xa407,	// (0x0004b29d) cell_area_left_week_number_pane_ParamLimits

0xa407,	// (0x0004b29d) cell_area_left_week_number_pane

0xa41b,	// (0x0004b2b1) cell_month_view_pane_ParamLimits

0xa41b,	// (0x0004b2b1) cell_month_view_pane

0xcd51,	// (0x0004dbe7) frm_month_g1

0xa440,	// (0x0004b2d6) frm_month_g2

0xa451,	// (0x0004b2e7) frm_month_g3

0xa462,	// (0x0004b2f8) frm_month_g4

0xa473,	// (0x0004b309) frm_month_g5

0xa484,	// (0x0004b31a) frm_month_g6

0xa495,	// (0x0004b32b) frm_month_g7

0xcd5e,	// (0x0004dbf4) frm_month_g8

0xa4a6,	// (0x0004b33c) frm_month_g9

0xa4b6,	// (0x0004b34c) frm_month_g10

0xa4c6,	// (0x0004b35c) frm_month_g11

0xa4d6,	// (0x0004b36c) frm_month_g12

0xa4e6,	// (0x0004b37c) frm_month_g13

0xa4f6,	// (0x0004b38c) frm_month_g14

0xa506,	// (0x0004b39c) frm_month_g15

0xa518,	// (0x0004b3ae) frm_month_g16

0x000f,

0xfec0,	// (0x00050d56) frm_month_g

0xcd6b,	// (0x0004dc01) cell_top_day_name_pane_t1

0xa52a,	// (0x0004b3c0) cell_area_left_week_number_pane_g1

0xa536,	// (0x0004b3cc) cell_area_left_week_number_pane_t1

0x5ed1,	// (0x00046d67) cell_month_view_pane_g1

0xa549,	// (0x0004b3df) cell_month_view_pane_t1

0xa852,	// (0x0004b6e8) main_fps_pane

0xc301,	// (0x0004d197) cmail_ddmenu_btn02_pane_cp1_ParamLimits

0xc301,	// (0x0004d197) cmail_ddmenu_btn02_pane_cp1

0xc31d,	// (0x0004d1b3) cmail_ddmenu_btn02_pane_cp2_ParamLimits

0xc31d,	// (0x0004d1b3) cmail_ddmenu_btn02_pane_cp2

0x9d21,	// (0x0004abb7) cmail_ddmenu_btn02_pane_g2_ParamLimits

0x9d21,	// (0x0004abb7) cmail_ddmenu_btn02_pane_g2

0x0001,

0xfde5,	// (0x00050c7b) cmail_ddmenu_btn02_pane_g_ParamLimits

0xfde5,	// (0x00050c7b) cmail_ddmenu_btn02_pane_g

0x9d3f,	// (0x0004abd5) cmail_ddmenu_btn02_pane_t2_ParamLimits

0x9d3f,	// (0x0004abd5) cmail_ddmenu_btn02_pane_t2

0x0001,

0xfdea,	// (0x00050c80) cmail_ddmenu_btn02_pane_t_ParamLimits

0xfdea,	// (0x00050c80) cmail_ddmenu_btn02_pane_t

0xa55c,	// (0x0004b3f2) fps_text_pane_ParamLimits

0xa55c,	// (0x0004b3f2) fps_text_pane

0xa572,	// (0x0004b408) main_fps_pane_g1_ParamLimits

0xa572,	// (0x0004b408) main_fps_pane_g1

0xa588,	// (0x0004b41e) wait_bar_pane_cp010_ParamLimits

0xa588,	// (0x0004b41e) wait_bar_pane_cp010

0xa599,	// (0x0004b42f) fps_text_pane_t1_ParamLimits

0xa599,	// (0x0004b42f) fps_text_pane_t1

0x7ae5,	// (0x0004897b) cam4_image_uncrop_pane_g1

0x7aee,	// (0x00048984) cam4_image_uncrop_pane_g2

0x7af7,	// (0x0004898d) cam4_image_uncrop_pane_g3

0x7b00,	// (0x00048996) cam4_image_uncrop_pane_g4

0x0003,

0xf8a9,	// (0x0005073f) cam4_image_uncrop_pane_g

0xa39c,	// (0x0004b232) dia3_listrow_pane_ParamLimits

0xa852,	// (0x0004b6e8) main_phob2_pane

0x99df,	// (0x0004a875) cell_tport_appsw_pane_cp02_ParamLimits

0x99df,	// (0x0004a875) cell_tport_appsw_pane_cp02

0x99ef,	// (0x0004a885) cell_tport_appsw_pane_cp03_ParamLimits

0x99ef,	// (0x0004a885) cell_tport_appsw_pane_cp03

0xa852,	// (0x0004b6e8) phob2_contact_card_pane

0xa852,	// (0x0004b6e8) phob2_listscroll_pane

0xcd7e,	// (0x0004dc14) phob2_list_pane

0xcd86,	// (0x0004dc1c) scroll_pane_cp034

0xa5b1,	// (0x0004b447) phob2_cc_data_pane_ParamLimits

0xa5b1,	// (0x0004b447) phob2_cc_data_pane

0xa5ce,	// (0x0004b464) phob2_cc_listscroll_pane_ParamLimits

0xa5ce,	// (0x0004b464) phob2_cc_listscroll_pane

0xa1f4,	// (0x0004b08a) list_double_large_graphic_phob2_pane_ParamLimits

0xa1f4,	// (0x0004b08a) list_double_large_graphic_phob2_pane

0xa5ea,	// (0x0004b480) list_double_large_graphic_phob2_pane_g1_ParamLimits

0xa5ea,	// (0x0004b480) list_double_large_graphic_phob2_pane_g1

0x16fb,	// (0x00042591) list_double_large_graphic_phob2_pane_g2_ParamLimits

0x16fb,	// (0x00042591) list_double_large_graphic_phob2_pane_g2

0x0001,

0xfee1,	// (0x00050d77) list_double_large_graphic_phob2_pane_g_ParamLimits

0xfee1,	// (0x00050d77) list_double_large_graphic_phob2_pane_g

0x1707,	// (0x0004259d) list_double_large_graphic_phob2_pane_t1_ParamLimits

0x1707,	// (0x0004259d) list_double_large_graphic_phob2_pane_t1

0x171d,	// (0x000425b3) list_double_large_graphic_phob2_pane_t2_ParamLimits

0x171d,	// (0x000425b3) list_double_large_graphic_phob2_pane_t2

0x0001,

0xfee6,	// (0x00050d7c) list_double_large_graphic_phob2_pane_t_ParamLimits

0xfee6,	// (0x00050d7c) list_double_large_graphic_phob2_pane_t

0xa852,	// (0x0004b6e8) list_highlight_pane_cp024

0xa600,	// (0x0004b496) phob2_cc_button_pane

0xa608,	// (0x0004b49e) phob2_cc_data_pane_g1_ParamLimits

0xa608,	// (0x0004b49e) phob2_cc_data_pane_g1

0xa61d,	// (0x0004b4b3) phob2_cc_data_pane_g2_ParamLimits

0xa61d,	// (0x0004b4b3) phob2_cc_data_pane_g2

0x0001,

0xfeeb,	// (0x00050d81) phob2_cc_data_pane_g_ParamLimits

0xfeeb,	// (0x00050d81) phob2_cc_data_pane_g

0xa62d,	// (0x0004b4c3) phob2_cc_data_pane_t1_ParamLimits

0xa62d,	// (0x0004b4c3) phob2_cc_data_pane_t1

0xa645,	// (0x0004b4db) phob2_cc_data_pane_t2_ParamLimits

0xa645,	// (0x0004b4db) phob2_cc_data_pane_t2

0xa65d,	// (0x0004b4f3) phob2_cc_data_pane_t3_ParamLimits

0xa65d,	// (0x0004b4f3) phob2_cc_data_pane_t3

0x0002,

0xfef0,	// (0x00050d86) phob2_cc_data_pane_t_ParamLimits

0xfef0,	// (0x00050d86) phob2_cc_data_pane_t

0xcd8e,	// (0x0004dc24) phob2_cc_list_pane_ParamLimits

0xcd8e,	// (0x0004dc24) phob2_cc_list_pane

0xbc2b,	// (0x0004cac1) scroll_pane_cp035_ParamLimits

0xbc2b,	// (0x0004cac1) scroll_pane_cp035

0xef76,	// (0x0004fe0c) bg_button_pane_cp033

0xcd9a,	// (0x0004dc30) phob2_cc_button_pane_g1

0xcda6,	// (0x0004dc3c) phob2_cc_button_pane_t1

0xcdbb,	// (0x0004dc51) phob2_cc_button_pane_t2

0x0001,

0xfef7,	// (0x00050d8d) phob2_cc_button_pane_t

0xa675,	// (0x0004b50b) list_double_large_graphic_phob2_cc_pane_ParamLimits

0xa675,	// (0x0004b50b) list_double_large_graphic_phob2_cc_pane

0xa6a3,	// (0x0004b539) list_double_large_graphic_phob2_cc_pane_g1_ParamLimits

0xa6a3,	// (0x0004b539) list_double_large_graphic_phob2_cc_pane_g1

0x1732,	// (0x000425c8) list_double_large_graphic_phob2_cc_pane_g2_ParamLimits

0x1732,	// (0x000425c8) list_double_large_graphic_phob2_cc_pane_g2

0x173e,	// (0x000425d4) list_double_large_graphic_phob2_cc_pane_g3_ParamLimits

0x173e,	// (0x000425d4) list_double_large_graphic_phob2_cc_pane_g3

0x174a,	// (0x000425e0) list_double_large_graphic_phob2_cc_pane_g4_ParamLimits

0x174a,	// (0x000425e0) list_double_large_graphic_phob2_cc_pane_g4

0x1756,	// (0x000425ec) list_double_large_graphic_phob2_cc_pane_g5_ParamLimits

0x1756,	// (0x000425ec) list_double_large_graphic_phob2_cc_pane_g5

0x0004,

0xfefc,	// (0x00050d92) list_double_large_graphic_phob2_cc_pane_g_ParamLimits

0xfefc,	// (0x00050d92) list_double_large_graphic_phob2_cc_pane_g

0x1762,	// (0x000425f8) list_double_large_graphic_phob2_cc_pane_t1_ParamLimits

0x1762,	// (0x000425f8) list_double_large_graphic_phob2_cc_pane_t1

0x178b,	// (0x00042621) list_double_large_graphic_phob2_cc_pane_t2_ParamLimits

0x178b,	// (0x00042621) list_double_large_graphic_phob2_cc_pane_t2

0x0001,

0xff07,	// (0x00050d9d) list_double_large_graphic_phob2_cc_pane_t_ParamLimits

0xff07,	// (0x00050d9d) list_double_large_graphic_phob2_cc_pane_t

0xcdcd,	// (0x0004dc63) list_highlight_pane_cp025_ParamLimits

0xcdcd,	// (0x0004dc63) list_highlight_pane_cp025

0xef76,	// (0x0004fe0c) bg_button_pane_cp033_ParamLimits

0xcd9a,	// (0x0004dc30) phob2_cc_button_pane_g1_ParamLimits

0xcda6,	// (0x0004dc3c) phob2_cc_button_pane_t1_ParamLimits

0xcdbb,	// (0x0004dc51) phob2_cc_button_pane_t2_ParamLimits

0xfef7,	// (0x00050d8d) phob2_cc_button_pane_t_ParamLimits

0x19ac,	// (0x00042842) popup_wgtman_window

0xbd2e,	// (0x0004cbc4) scroll_pane_cp038

0xa16d,	// (0x0004b003) wgtman_btn_pane_cp_01_ParamLimits

0xa16d,	// (0x0004b003) wgtman_btn_pane_cp_01

0xcddb,	// (0x0004dc71) wgtman_content_pane

0xcde4,	// (0x0004dc7a) wgtman_heading_pane

0xa852,	// (0x0004b6e8) bg_heading_pane_cp02

0xcded,	// (0x0004dc83) wgtman_heading_pane_g1

0xcdf5,	// (0x0004dc8b) wgtman_heading_pane_t1

0xce03,	// (0x0004dc99) scroll_pane_cp036

0xce0b,	// (0x0004dca1) wgtman_list_pane

0xce13,	// (0x0004dca9) wgtman_list_pane_t1_ParamLimits

0xce13,	// (0x0004dca9) wgtman_list_pane_t1

0xb081,	// (0x0004bf17) cam4_grid_pane

0x0e2f,	// (0x00041cc5) bg_button_pane_cp015_ParamLimits

0x870a,	// (0x000495a0) bg_button_pane_cp016_ParamLimits

0x871c,	// (0x000495b2) bg_button_pane_cp017_ParamLimits

0x0e6d,	// (0x00041d03) popup_vitu2_query_window_g3_ParamLimits

0x0e6d,	// (0x00041d03) popup_vitu2_query_window_g3

0x0ee6,	// (0x00041d7c) popup_vitu2_query_window_t6_ParamLimits

0x0ee6,	// (0x00041d7c) popup_vitu2_query_window_t6

0x0f11,	// (0x00041da7) popup_vitu2_query_window_t7_ParamLimits

0x0f11,	// (0x00041da7) popup_vitu2_query_window_t7

0x7ae5,	// (0x0004897b) cam4_grid_pane_g1

0x7aee,	// (0x00048984) cam4_grid_pane_g2

0xce2a,	// (0x0004dcc0) cam4_grid_pane_g3

0xce33,	// (0x0004dcc9) cam4_grid_pane_g4

0x0003,

0xff0c,	// (0x00050da2) cam4_grid_pane_g

0x27b0,	// (0x00043646) aid_placing_vt_slider_lsc_ParamLimits

0x2a20,	// (0x000438b6) vidtel_button_pane_ParamLimits

0x2a20,	// (0x000438b6) vidtel_button_pane

0xa852,	// (0x0004b6e8) bg_button_pane_cp034

0xa6af,	// (0x0004b545) vidtel_button_pane_g1

0xa6b7,	// (0x0004b54d) vidtel_button_pane_t1

0xb334,	// (0x0004c1ca) aid_size_vtel_slider_touch

0xbc2b,	// (0x0004cac1) scroll_pane_cp039

0xbd5d,	// (0x0004cbf3) ncim_query_button_pane_cp01_ParamLimits

0xbd7c,	// (0x0004cc12) ncimui_query_pane_g1_ParamLimits

0xef76,	// (0x0004fe0c) input_focus_pane_cp012_ParamLimits

0xbda1,	// (0x0004cc37) ncim_query_entry_pane_t1_ParamLimits

0xbc2b,	// (0x0004cac1) scroll_pane_cp039_ParamLimits

0xe209,	// (0x0004f09f) navi_pane_bcale_mc_g1

0xe211,	// (0x0004f0a7) navi_pane_bcale_mc_t1

0xc351,	// (0x0004d1e7) main_sp_fs_email_pane_g1

0xc35d,	// (0x0004d1f3) main_sp_fs_email_pane_g2

0x0001,

0xfc9d,	// (0x00050b33) main_sp_fs_email_pane_g

0xc7da,	// (0x0004d670) list_single_cale_mrui_row_pane_g3_ParamLimits

0xc7da,	// (0x0004d670) list_single_cale_mrui_row_pane_g3

0x1665,	// (0x000424fb) list_single_recal_day_pane_g5_event_pane

0xc943,	// (0x0004d7d9) list_single_recal_day_pane_g7

0xce3c,	// (0x0004dcd2) list_recal_day_event_pane_cp01

0xce45,	// (0x0004dcdb) list_recal_vselct_arw_lo_pane_cp01

0xce4d,	// (0x0004dce3) list_recal_vselct_arw_up_pane_cp01

0xce55,	// (0x0004dceb) list_recal_vselct_pane_cp01

0xb344,	// (0x0004c1da) list_recal_day_event_pane_cp01_g1

0xce5f,	// (0x0004dcf5) list_recal_day_event_pane_cp01_t1

0xc94b,	// (0x0004d7e1) list_single_recal_day_pane_t1_ParamLimits

0x167b,	// (0x00042511) list_single_recal_day_pane_t2_ParamLimits

0xfdfa,	// (0x00050c90) list_single_recal_day_pane_t_ParamLimits

0xd660,	// (0x0004e4f6) bg_notes_pane_ParamLimits

0xd703,	// (0x0004e599) list_notes_pane_ParamLimits

0x1ca7,	// (0x00042b3d) scroll_pane_cp06_ParamLimits

0xd729,	// (0x0004e5bf) main_notes_pane_ParamLimits

0xef76,	// (0x0004fe0c) main_welc_pane

0xa6e0,	// (0x0004b576) main_welc_body_pane_ParamLimits

0xa6e0,	// (0x0004b576) main_welc_body_pane

0xa6fc,	// (0x0004b592) main_welc_opti_pane_ParamLimits

0xa6fc,	// (0x0004b592) main_welc_opti_pane

0xa748,	// (0x0004b5de) main_welc_pane_t1_ParamLimits

0xa748,	// (0x0004b5de) main_welc_pane_t1

0xa7ae,	// (0x0004b644) main_welc_body_row_pane_ParamLimits

0xa7ae,	// (0x0004b644) main_welc_body_row_pane

0xce6d,	// (0x0004dd03) main_welc_opti_row_pane_ParamLimits

0xce6d,	// (0x0004dd03) main_welc_opti_row_pane

0xce7b,	// (0x0004dd11) main_welc_opti_row_pane_g1

0xa7c1,	// (0x0004b657) main_welc_opti_row_pane_t1

0xce83,	// (0x0004dd19) main_welc_body_row_pane_t1

0xcb8a,	// (0x0004da20) popup_notif_wgt_heading_pane

0xcba4,	// (0x0004da3a) aid_size_list_notif_wgt_del_ParamLimits

0xcbb1,	// (0x0004da47) list_notif_wgt_row_pane_g1_ParamLimits

0xcbbd,	// (0x0004da53) list_notif_wgt_row_pane_g2_ParamLimits

0xcbd1,	// (0x0004da67) list_notif_wgt_row_pane_g3_ParamLimits

0xfe61,	// (0x00050cf7) list_notif_wgt_row_pane_g_ParamLimits

0xcbde,	// (0x0004da74) list_notif_wgt_row_pane_t1_ParamLimits

0xcbf4,	// (0x0004da8a) list_notif_wgt_row_pane_t2_ParamLimits

0xcc06,	// (0x0004da9c) list_notif_wgt_row_pane_t3_ParamLimits

0xfe68,	// (0x00050cfe) list_notif_wgt_row_pane_t_ParamLimits

0xa205,	// (0x0004b09b) listrow_wgtman_pane_g1_ParamLimits

0xa212,	// (0x0004b0a8) listrow_wgtman_pane_g2_ParamLimits

0xfe91,	// (0x00050d27) listrow_wgtman_pane_g_ParamLimits

0x16ab,	// (0x00042541) listrow_wgtman_pane_t1_ParamLimits

0x16c3,	// (0x00042559) listrow_wgtman_pane_t2_ParamLimits

0xfe96,	// (0x00050d2c) listrow_wgtman_pane_t_ParamLimits

0x16e9,	// (0x0004257f) wait_bar_pane_cp09_ParamLimits

0xa852,	// (0x0004b6e8) bg_popup_heading_pane_cp02

0xce92,	// (0x0004dd28) popup_notif_wgt_heading_pane_g1

0xce9a,	// (0x0004dd30) popup_notif_wgt_heading_pane_t1

0x4c5a,	// (0x00045af0) main_vids_pane

0xa852,	// (0x0004b6e8) vids_listscroll_pane

0xa7d0,	// (0x0004b666) scroll_pane_cp040

0xa852,	// (0x0004b6e8) vids_list_pane

0xa7db,	// (0x0004b671) vids_list_double_pane_ParamLimits

0xa7db,	// (0x0004b671) vids_list_double_pane

0xa7e8,	// (0x0004b67e) vids_list_double_pane_g1

0xa7f1,	// (0x0004b687) vids_list_double_pane_t1

0xa801,	// (0x0004b697) vids_list_double_pane_t2

0x0001,

0xff23,	// (0x00050db9) vids_list_double_pane_t

0xef76,	// (0x0004fe0c) main_ncimui_pane_ParamLimits

0x90ed,	// (0x00049f83) main_ncimui_pane_g1_ParamLimits

0x90f9,	// (0x00049f8f) main_ncimui_pane_g2_ParamLimits

0x90f9,	// (0x00049f8f) main_ncimui_pane_g2

0x0001,

0xfb9e,	// (0x00050a34) main_ncimui_pane_g_ParamLimits

0xfb9e,	// (0x00050a34) main_ncimui_pane_g

0xa713,	// (0x0004b5a9) main_welc_pane_g1_ParamLimits

0xa713,	// (0x0004b5a9) main_welc_pane_g1

0xa726,	// (0x0004b5bc) main_welc_pane_g2_ParamLimits

0xa726,	// (0x0004b5bc) main_welc_pane_g2

0x0002,

0xff15,	// (0x00050dab) main_welc_pane_g_ParamLimits

0xff15,	// (0x00050dab) main_welc_pane_g

0xd660,	// (0x0004e4f6) listscroll_mce_pane_ParamLimits

0x3966,	// (0x000447fc) wait_bar_pane_cp10

0x4c18,	// (0x00045aae) main_cale_day_pane_ParamLimits

0x4c18,	// (0x00045aae) main_cale_week_pane_ParamLimits

0xd660,	// (0x0004e4f6) main_messa_pane_ParamLimits

0x6957,	// (0x000477ed) main_clock2_btn_pane_ParamLimits

0x6957,	// (0x000477ed) main_clock2_btn_pane

0x6967,	// (0x000477fd) main_clock2_btn_pane_cp01_ParamLimits

0x6967,	// (0x000477fd) main_clock2_btn_pane_cp01

0xc795,	// (0x0004d62b) list_cale_mrui_pane_ParamLimits

0xcc3a,	// (0x0004dad0) main_cf0_pane_g2

0x0001,

0xfe6f,	// (0x00050d05) main_cf0_pane_g

0xa3b6,	// (0x0004b24c) area_left_week_number_pane_ParamLimits

0xa3c2,	// (0x0004b258) area_top_day_name_pane_ParamLimits

0xa3d3,	// (0x0004b269) frame_month_view_pane_ParamLimits

0xcd43,	// (0x0004dbd9) grid_month_view_pane_ParamLimits

0xcd51,	// (0x0004dbe7) frm_month_g1_ParamLimits

0xa440,	// (0x0004b2d6) frm_month_g2_ParamLimits

0xa451,	// (0x0004b2e7) frm_month_g3_ParamLimits

0xa462,	// (0x0004b2f8) frm_month_g4_ParamLimits

0xa473,	// (0x0004b309) frm_month_g5_ParamLimits

0xa484,	// (0x0004b31a) frm_month_g6_ParamLimits

0xa495,	// (0x0004b32b) frm_month_g7_ParamLimits

0xcd5e,	// (0x0004dbf4) frm_month_g8_ParamLimits

0xa4a6,	// (0x0004b33c) frm_month_g9_ParamLimits

0xa4b6,	// (0x0004b34c) frm_month_g10_ParamLimits

0xa4c6,	// (0x0004b35c) frm_month_g11_ParamLimits

0xa4d6,	// (0x0004b36c) frm_month_g12_ParamLimits

0xa4e6,	// (0x0004b37c) frm_month_g13_ParamLimits

0xa4f6,	// (0x0004b38c) frm_month_g14_ParamLimits

0xa506,	// (0x0004b39c) frm_month_g15_ParamLimits

0xa518,	// (0x0004b3ae) frm_month_g16_ParamLimits

0xfec0,	// (0x00050d56) frm_month_g_ParamLimits

0xcd6b,	// (0x0004dc01) cell_top_day_name_pane_t1_ParamLimits

0xa52a,	// (0x0004b3c0) cell_area_left_week_number_pane_g1_ParamLimits

0xa536,	// (0x0004b3cc) cell_area_left_week_number_pane_t1_ParamLimits

0x5ed1,	// (0x00046d67) cell_month_view_pane_g1_ParamLimits

0xa549,	// (0x0004b3df) cell_month_view_pane_t1_ParamLimits

0xd658,	// (0x0004e4ee) main_clock2_btn_pane_g1

0xcea8,	// (0x0004dd3e) main_clock2_btn_pane_t1

0xef76,	// (0x0004fe0c) listscroll_cmail_pane_ParamLimits

0xc351,	// (0x0004d1e7) main_sp_fs_email_pane_g1_ParamLimits

0xc35d,	// (0x0004d1f3) main_sp_fs_email_pane_g2_ParamLimits

0xfc9d,	// (0x00050b33) main_sp_fs_email_pane_g_ParamLimits

0xc8bf,	// (0x0004d755) list_recal_day_pane_ParamLimits

0xc8d0,	// (0x0004d766) mian_recal_day_pane_t1

0x11f4,	// (0x0004208a) list_single_dyc_row_text_pane_t4_ParamLimits

0x11f4,	// (0x0004208a) list_single_dyc_row_text_pane_t4

0x122b,	// (0x000420c1) list_single_dyc_row_text_pane_t5_ParamLimits

0x122b,	// (0x000420c1) list_single_dyc_row_text_pane_t5

0xc40f,	// (0x0004d2a5) list_single_dyc_row_text_pane_t6_ParamLimits

0xc40f,	// (0x0004d2a5) list_single_dyc_row_text_pane_t6

0x358b,	// (0x00044421) aid_mgn_list_cale_time_pane

0xef76,	// (0x0004fe0c) main_gallery2_pane_ParamLimits

0x698e,	// (0x00047824) main_clock2_pane_cp01_t1

0x699c,	// (0x00047832) main_clock2_pane_cp01_t3

0x0001,

0xf780,	// (0x00050616) main_clock2_pane_cp01_t

0x201b,	// (0x00042eb1) cale_week_scroll_pane_g16_ParamLimits

0x201b,	// (0x00042eb1) cale_week_scroll_pane_g16

0xd8f8,	// (0x0004e78e) vorec_slider_pane

0xa6b7,	// (0x0004b54d) vidtel_button_pane_t1_ParamLimits

0x9de4,	// (0x0004ac7a) main_fs_bigclock_clock_pane_g1_ParamLimits

0x9df6,	// (0x0004ac8c) main_fs_bigclock_clock_pane_g2_ParamLimits

0x9e07,	// (0x0004ac9d) main_fs_bigclock_clock_pane_g3_ParamLimits

0x9e07,	// (0x0004ac9d) main_fs_bigclock_clock_pane_g4_ParamLimits

0xfe1d,	// (0x00050cb3) main_fs_bigclock_clock_pane_g_ParamLimits

0x9e1a,	// (0x0004acb0) main_fs_bigclock_clock_pane_t1_ParamLimits

0x9e35,	// (0x0004accb) main_fs_bigclock_clock_pane_t2_ParamLimits

0xfe26,	// (0x00050cbc) main_fs_bigclock_clock_pane_t_ParamLimits

0x60ba,	// (0x00046f50) main_mup3_lyrics_pane_ParamLimits

0x60ba,	// (0x00046f50) main_mup3_lyrics_pane

0xa833,	// (0x0004b6c9) main_mup3_lyrics_pane_t1_ParamLimits

0xa833,	// (0x0004b6c9) main_mup3_lyrics_pane_t1

0xadf1,	// (0x0004bc87) aid_main_mp4_pane_t1_area

0xadf1,	// (0x0004bc87) aid_main_mp4_pane_t2_area

0xae99,	// (0x0004bd2f) main_mp4_pane_g7_ParamLimits

0xae99,	// (0x0004bd2f) main_mp4_pane_g7

0xaea5,	// (0x0004bd3b) main_mp4_pane_g8_ParamLimits

0xaea5,	// (0x0004bd3b) main_mp4_pane_g8

0x78ea,	// (0x00048780) aid_call6_pane_g1_size

0xa68f,	// (0x0004b525) list_double_large_graphic_phob2_other_pane_ParamLimits

0xa68f,	// (0x0004b525) list_double_large_graphic_phob2_other_pane

0xe15c,	// (0x0004eff2) list_double_large_graphic_phob2_other_pane_g1

0xa852,	// (0x0004b6e8) list_highlight_pane_cp026

0xef76,	// (0x0004fe0c) main_welc_pane_ParamLimits

0x9861,	// (0x0004a6f7) main_sp_fs_ctrlbar_pane_g3_ParamLimits

0x9861,	// (0x0004a6f7) main_sp_fs_ctrlbar_pane_g3

0x9879,	// (0x0004a70f) main_sp_fs_ctrlbar_pane_g4_ParamLimits

0x9879,	// (0x0004a70f) main_sp_fs_ctrlbar_pane_g4

0x98bb,	// (0x0004a751) toolbar2_fixed_button_pane_cp01

0x98c6,	// (0x0004a75c) toolbar2_fixed_button_pane_cp02

0x98d1,	// (0x0004a767) toolbar2_fixed_button_pane_cp03

0xa6cd,	// (0x0004b563) list_welc_entry_pane_ParamLimits

0xa6cd,	// (0x0004b563) list_welc_entry_pane

0xa739,	// (0x0004b5cf) main_welc_pane_g3_ParamLimits

0xa739,	// (0x0004b5cf) main_welc_pane_g3

0xa762,	// (0x0004b5f8) main_welc_pane_t2_ParamLimits

0xa762,	// (0x0004b5f8) main_welc_pane_t2

0xa778,	// (0x0004b60e) main_welc_pane_t3_ParamLimits

0xa778,	// (0x0004b60e) main_welc_pane_t3

0x0002,

0xff1c,	// (0x00050db2) main_welc_pane_t_ParamLimits

0xff1c,	// (0x00050db2) main_welc_pane_t

0xa78d,	// (0x0004b623) welc_button_pane_ParamLimits

0xa78d,	// (0x0004b623) welc_button_pane

0xa79e,	// (0x0004b634) welc_service_logo_pane_ParamLimits

0xa79e,	// (0x0004b634) welc_service_logo_pane

0xceb6,	// (0x0004dd4c) list_single_welc_entry_pane_ParamLimits

0xceb6,	// (0x0004dd4c) list_single_welc_entry_pane

0xcec7,	// (0x0004dd5d) list_single_welc_entry_pane_g1

0xcecf,	// (0x0004dd65) list_single_welc_entry_pane_t1

0xcedd,	// (0x0004dd73) list_single_welc_entry_pane_t2

0x0001,

0xff28,	// (0x00050dbe) list_single_welc_entry_pane_t

0xa852,	// (0x0004b6e8) bg_button_pane_cp035

0xceeb,	// (0x0004dd81) welc_button_pane_t1

0xcef9,	// (0x0004dd8f) welc_service_logo_pane_g1

0xcf02,	// (0x0004dd98) welc_service_logo_pane_g2

0x0001,

0xff2d,	// (0x00050dc3) welc_service_logo_pane_g
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
	};

} // end of namespace AknLayoutScalable_Elaf_pql_apps_qvga_lsc_Small
