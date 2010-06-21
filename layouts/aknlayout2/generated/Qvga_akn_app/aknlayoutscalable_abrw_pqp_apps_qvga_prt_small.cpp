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

#include "aknlayoutscalable_abrw_pqp_apps_qvga_prt_small.h"
#include "AknLayout2ScalableDecode.h"
namespace AknLayoutScalable_Apps { extern const TUint8 KByteCodedData_AknLayoutScalable_Elaf_pqp_apps_qvga_prt[]; }

namespace AknLayoutScalable_Abrw_pqp_apps_qvga_prt_Small
{

extern const TUint16 KDataLookup[AknLayoutScalable_Apps::E_TApiId_TableSize];
const SCompDataImplData KImplData = { KDataLookup, AknLayoutScalable_Apps::KByteCodedData_AknLayoutScalable_Elaf_pqp_apps_qvga_prt + 0x0004ab75 };

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
0x5b15,	// (0x0005068a) Screen

0x5b1f,	// (0x00050694) application_window

0x5b71,	// (0x000506e6) area_bottom_pane_ParamLimits

0x5b71,	// (0x000506e6) area_bottom_pane

0x5bad,	// (0x00050722) area_top_pane_ParamLimits

0x5bad,	// (0x00050722) area_top_pane

0x5c09,	// (0x0005077e) call_video_uplink_pane_ParamLimits

0x5c09,	// (0x0005077e) call_video_uplink_pane

0x5c44,	// (0x000507b9) main_pane_ParamLimits

0x5c44,	// (0x000507b9) main_pane

0xe39e,	// (0x00058f13) context_pane

0x8b4c,	// (0x000536c1) navi_pane

0x8b66,	// (0x000536db) popup_cale_events_window_ParamLimits

0x8b66,	// (0x000536db) popup_cale_events_window

0xe3b1,	// (0x00058f26) popup_mup_playback_window

0x8b7d,	// (0x000536f2) signal_pane

0x33a4,	// (0x0004df19) main_browser_pane

0x3573,	// (0x0004e0e8) main_burst_pane

0x5d6d,	// (0x000508e2) main_calc_pane

0xe37a,	// (0x00058eef) main_cale_day_pane

0x62be,	// (0x00050e33) main_cale_month_pane

0xe37a,	// (0x00058eef) main_cale_week_pane

0x3573,	// (0x0004e0e8) main_call_pane

0x3080,	// (0x0004dbf5) main_call_poc_pane

0x3573,	// (0x0004e0e8) main_camera_pane

0x3573,	// (0x0004e0e8) main_chi_dic_pane

0x3d7e,	// (0x0004e8f3) main_clock_pane

0x3080,	// (0x0004dbf5) main_fmradio_pane

0x3573,	// (0x0004e0e8) main_graph_messa_pane

0x3080,	// (0x0004dbf5) main_help_pane

0x33a4,	// (0x0004df19) main_im_pane

0x32db,	// (0x0004de50) main_image_pane_ParamLimits

0x32db,	// (0x0004de50) main_image_pane

0x3080,	// (0x0004dbf5) main_location2_pane

0x3573,	// (0x0004e0e8) main_location_pane

0x32db,	// (0x0004de50) main_messa_pane

0x3080,	// (0x0004dbf5) main_mp2_pane

0x3573,	// (0x0004e0e8) main_mp_pane

0x3080,	// (0x0004dbf5) main_msg_pane

0x3080,	// (0x0004dbf5) main_mup_eq_pane

0x3080,	// (0x0004dbf5) main_mup_pane

0x33a4,	// (0x0004df19) main_notes_pane

0x3080,	// (0x0004dbf5) main_pec_pane

0x3080,	// (0x0004dbf5) main_phob_pane

0x3080,	// (0x0004dbf5) main_pinb_pane

0x3080,	// (0x0004dbf5) main_postcard_pane

0x3080,	// (0x0004dbf5) main_qdial_pane

0x3573,	// (0x0004e0e8) main_skin_pane

0x3080,	// (0x0004dbf5) main_smil2_pane

0x3573,	// (0x0004e0e8) main_smil_pane

0x3573,	// (0x0004e0e8) main_video_pane

0x3573,	// (0x0004e0e8) main_video_tele_pane

0x32db,	// (0x0004de50) main_viewer_pane_ParamLimits

0x32db,	// (0x0004de50) main_viewer_pane

0x3573,	// (0x0004e0e8) main_vorec_pane

0x8a4a,	// (0x000535bf) popup_blid_sat_info_window_ParamLimits

0x8a4a,	// (0x000535bf) popup_blid_sat_info_window

0x8a66,	// (0x000535db) popup_dyc_status_message_window_ParamLimits

0x8a66,	// (0x000535db) popup_dyc_status_message_window

0x8a72,	// (0x000535e7) popup_grid_large_graphic_window_ParamLimits

0x8a72,	// (0x000535e7) popup_grid_large_graphic_window

0x8ae3,	// (0x00053658) popup_loc_request_window_ParamLimits

0x8ae3,	// (0x00053658) popup_loc_request_window

0x8b26,	// (0x0005369b) popup_wml_address_window_ParamLimits

0x8b26,	// (0x0005369b) popup_wml_address_window

0x8919,	// (0x0005348e) call_muted_g1

0x8654,	// (0x000531c9) popup_call_audio_conf_window_ParamLimits

0x8654,	// (0x000531c9) popup_call_audio_conf_window

0x8929,	// (0x0005349e) popup_call_audio_first_window_ParamLimits

0x8929,	// (0x0005349e) popup_call_audio_first_window

0x895d,	// (0x000534d2) popup_call_audio_in_window_ParamLimits

0x895d,	// (0x000534d2) popup_call_audio_in_window

0x8979,	// (0x000534ee) popup_call_audio_out_window_ParamLimits

0x8979,	// (0x000534ee) popup_call_audio_out_window

0x8995,	// (0x0005350a) popup_call_audio_second_window_ParamLimits

0x8995,	// (0x0005350a) popup_call_audio_second_window

0x89bd,	// (0x00053532) popup_call_audio_wait_window_ParamLimits

0x89bd,	// (0x00053532) popup_call_audio_wait_window

0x89dc,	// (0x00053551) popup_number_entry_window_ParamLimits

0x89dc,	// (0x00053551) popup_number_entry_window

0x2b66,	// (0x0004d6db) bg_popup_call_pane_cp05_ParamLimits

0x2b66,	// (0x0004d6db) bg_popup_call_pane_cp05

0x2b86,	// (0x0004d6fb) popup_number_entry_window_t1

0x2b99,	// (0x0004d70e) popup_number_entry_window_t2

0x2bab,	// (0x0004d720) popup_number_entry_window_t3

0x0003,

0xf0c6,	// (0x00059c3b) popup_number_entry_window_t

0x2bbd,	// (0x0004d732) text_title_cp2

0x2bd0,	// (0x0004d745) bg_popup_call_pane_cp_ParamLimits

0x2bd0,	// (0x0004d745) bg_popup_call_pane_cp

0x2bde,	// (0x0004d753) call_thumbnail_pane

0x2be6,	// (0x0004d75b) popup_call_audio_in_window_g1_ParamLimits

0x2be6,	// (0x0004d75b) popup_call_audio_in_window_g1

0x2bf2,	// (0x0004d767) popup_call_audio_in_window_g2_ParamLimits

0x2bf2,	// (0x0004d767) popup_call_audio_in_window_g2

0x2bfe,	// (0x0004d773) popup_call_audio_in_window_g3_ParamLimits

0x2bfe,	// (0x0004d773) popup_call_audio_in_window_g3

0x0002,

0xf0cf,	// (0x00059c44) popup_call_audio_in_window_g_ParamLimits

0xf0cf,	// (0x00059c44) popup_call_audio_in_window_g

0x2c0a,	// (0x0004d77f) popup_call_audio_in_window_t1_ParamLimits

0x2c0a,	// (0x0004d77f) popup_call_audio_in_window_t1

0x2c25,	// (0x0004d79a) popup_call_audio_in_window_t2_ParamLimits

0x2c25,	// (0x0004d79a) popup_call_audio_in_window_t2

0x2c40,	// (0x0004d7b5) popup_call_audio_in_window_t3_ParamLimits

0x2c40,	// (0x0004d7b5) popup_call_audio_in_window_t3

0x0002,

0xf0d6,	// (0x00059c4b) popup_call_audio_in_window_t_ParamLimits

0xf0d6,	// (0x00059c4b) popup_call_audio_in_window_t

0x2bd0,	// (0x0004d745) bg_popup_call_pane_cp01_ParamLimits

0x2bd0,	// (0x0004d745) bg_popup_call_pane_cp01

0x2bde,	// (0x0004d753) call_thumbnail_pane_cp02

0x2c53,	// (0x0004d7c8) call_type_pane_cp022

0x2c5b,	// (0x0004d7d0) popup_call_audio_out_window_g1_ParamLimits

0x2c5b,	// (0x0004d7d0) popup_call_audio_out_window_g1

0x2c6d,	// (0x0004d7e2) popup_call_audio_out_window_g2_ParamLimits

0x2c6d,	// (0x0004d7e2) popup_call_audio_out_window_g2

0x2d82,	// (0x0004d8f7) popup_call_audio_out_window_g3_ParamLimits

0x2d82,	// (0x0004d8f7) popup_call_audio_out_window_g3

0x0002,

0xf0dd,	// (0x00059c52) popup_call_audio_out_window_g_ParamLimits

0xf0dd,	// (0x00059c52) popup_call_audio_out_window_g

0x2d94,	// (0x0004d909) popup_call_audio_out_window_t1_ParamLimits

0x2d94,	// (0x0004d909) popup_call_audio_out_window_t1

0x2dac,	// (0x0004d921) popup_call_audio_out_window_t2_ParamLimits

0x2dac,	// (0x0004d921) popup_call_audio_out_window_t2

0x0001,

0xf0e4,	// (0x00059c59) popup_call_audio_out_window_t_ParamLimits

0xf0e4,	// (0x00059c59) popup_call_audio_out_window_t

0x2dc1,	// (0x0004d936) bg_popup_call_pane_ParamLimits

0x2dc1,	// (0x0004d936) bg_popup_call_pane

0x5e0f,	// (0x00050984) call_thumbnail_pane_cp_ParamLimits

0x5e0f,	// (0x00050984) call_thumbnail_pane_cp

0x2e45,	// (0x0004d9ba) call_type_pane_cp01_ParamLimits

0x2e45,	// (0x0004d9ba) call_type_pane_cp01

0x2e89,	// (0x0004d9fe) popup_call_audio_first_window_g1_ParamLimits

0x2e89,	// (0x0004d9fe) popup_call_audio_first_window_g1

0x2ed5,	// (0x0004da4a) popup_call_audio_first_window_g2_ParamLimits

0x2ed5,	// (0x0004da4a) popup_call_audio_first_window_g2

0x0001,

0xf0e9,	// (0x00059c5e) popup_call_audio_first_window_g_ParamLimits

0xf0e9,	// (0x00059c5e) popup_call_audio_first_window_g

0x2f19,	// (0x0004da8e) popup_call_audio_first_window_t1_ParamLimits

0x2f19,	// (0x0004da8e) popup_call_audio_first_window_t1

0x2fc5,	// (0x0004db3a) popup_call_audio_first_window_t4_ParamLimits

0x2fc5,	// (0x0004db3a) popup_call_audio_first_window_t4

0x3051,	// (0x0004dbc6) popup_call_audio_first_window_t5_ParamLimits

0x3051,	// (0x0004dbc6) popup_call_audio_first_window_t5

0x0002,

0xf0ee,	// (0x00059c63) popup_call_audio_first_window_t_ParamLimits

0xf0ee,	// (0x00059c63) popup_call_audio_first_window_t

0x3080,	// (0x0004dbf5) bg_popup_call_pane_cp02

0x308a,	// (0x0004dbff) call_type_pane_cp023

0x3092,	// (0x0004dc07) popup_call_audio_wait_window_g1

0x309a,	// (0x0004dc0f) popup_call_audio_wait_window_g2

0x0001,

0xf0f5,	// (0x00059c6a) popup_call_audio_wait_window_g

0x30a2,	// (0x0004dc17) popup_call_audio_wait_window_t3

0x30b0,	// (0x0004dc25) bg_popup_call_pane_cp03_ParamLimits

0x30b0,	// (0x0004dc25) bg_popup_call_pane_cp03

0x3110,	// (0x0004dc85) call_thumbnail_pane_cp011_ParamLimits

0x3110,	// (0x0004dc85) call_thumbnail_pane_cp011

0x311c,	// (0x0004dc91) call_type_pane_cp034_ParamLimits

0x311c,	// (0x0004dc91) call_type_pane_cp034

0x3158,	// (0x0004dccd) popup_call_audio_second_window_g1_ParamLimits

0x3158,	// (0x0004dccd) popup_call_audio_second_window_g1

0x3194,	// (0x0004dd09) popup_call_audio_second_window_g2_ParamLimits

0x3194,	// (0x0004dd09) popup_call_audio_second_window_g2

0x0001,

0xf0fa,	// (0x00059c6f) popup_call_audio_second_window_g_ParamLimits

0xf0fa,	// (0x00059c6f) popup_call_audio_second_window_g

0x31d0,	// (0x0004dd45) popup_call_audio_second_window_t1_ParamLimits

0x31d0,	// (0x0004dd45) popup_call_audio_second_window_t1

0x3251,	// (0x0004ddc6) popup_call_audio_second_window_t2_ParamLimits

0x3251,	// (0x0004ddc6) popup_call_audio_second_window_t2

0x3287,	// (0x0004ddfc) popup_call_audio_second_window_t3_ParamLimits

0x3287,	// (0x0004ddfc) popup_call_audio_second_window_t3

0x0002,

0xf0ff,	// (0x00059c74) popup_call_audio_second_window_t_ParamLimits

0xf0ff,	// (0x00059c74) popup_call_audio_second_window_t

0x3080,	// (0x0004dbf5) bg_popup_call_pane_cp04

0x32bd,	// (0x0004de32) list_conf_pane

0x32c5,	// (0x0004de3a) popup_call_audio_conf_window_t1

0x32d3,	// (0x0004de48) call_thumbnail_pane_g1

0x32db,	// (0x0004de50) bg_pinb_pane_ParamLimits

0x32db,	// (0x0004de50) bg_pinb_pane

0x32e9,	// (0x0004de5e) find_pinb_pane

0x32f2,	// (0x0004de67) listscroll_pinb_pane_ParamLimits

0x32f2,	// (0x0004de67) listscroll_pinb_pane

0x3301,	// (0x0004de76) pinb_bg_pane_g1

0x5e33,	// (0x000509a8) pinb_bg_pane_g2

0x5e3d,	// (0x000509b2) pinb_bg_pane_g3

0x5e47,	// (0x000509bc) pinb_bg_pane_g4

0x5e51,	// (0x000509c6) pinb_bg_pane_g5

0x5e5b,	// (0x000509d0) pinb_bg_pane_g6

0x5e66,	// (0x000509db) pinb_bg_pane_g7

0x5e71,	// (0x000509e6) pinb_bg_pane_g8

0x5e7a,	// (0x000509ef) pinb_bg_pane_g9

0x5e82,	// (0x000509f7) pinb_bg_pane_g10

0x0009,

0xf106,	// (0x00059c7b) pinb_bg_pane_g

0x5e9f,	// (0x00050a14) grid_pinb_pane

0x5ea8,	// (0x00050a1d) list_pinb_pane

0x5eb3,	// (0x00050a28) scroll_pane_cp01_ParamLimits

0x5eb3,	// (0x00050a28) scroll_pane_cp01

0x330b,	// (0x0004de80) find_pinb_pane_g1_ParamLimits

0x330b,	// (0x0004de80) find_pinb_pane_g1

0x3323,	// (0x0004de98) find_pinb_pane_t1

0x3335,	// (0x0004deaa) find_pinb_pane_t2

0x0001,

0xf120,	// (0x00059c95) find_pinb_pane_t

0x334a,	// (0x0004debf) input_focus_pane_cp01_ParamLimits

0x334a,	// (0x0004debf) input_focus_pane_cp01

0x5ec3,	// (0x00050a38) cell_pinb_pane_ParamLimits

0x5ec3,	// (0x00050a38) cell_pinb_pane

0x5edc,	// (0x00050a51) cell_pinb_pane_g1_ParamLimits

0x5edc,	// (0x00050a51) cell_pinb_pane_g1

0x5ef0,	// (0x00050a65) cell_pinb_pane_g2_ParamLimits

0x5ef0,	// (0x00050a65) cell_pinb_pane_g2

0x3356,	// (0x0004decb) cell_pinb_pane_g3_ParamLimits

0x3356,	// (0x0004decb) cell_pinb_pane_g3

0x0002,

0xf125,	// (0x00059c9a) cell_pinb_pane_g_ParamLimits

0xf125,	// (0x00059c9a) cell_pinb_pane_g

0x3080,	// (0x0004dbf5) grid_highlight_pane_cp01

0x5efc,	// (0x00050a71) list_pinb_item_pane_ParamLimits

0x5efc,	// (0x00050a71) list_pinb_item_pane

0x3080,	// (0x0004dbf5) list_highlight_pane_cp02

0x5f11,	// (0x00050a86) list_pinb_item_pane_g1_ParamLimits

0x5f11,	// (0x00050a86) list_pinb_item_pane_g1

0x5f1e,	// (0x00050a93) list_pinb_item_pane_g2_ParamLimits

0x5f1e,	// (0x00050a93) list_pinb_item_pane_g2

0x5f2a,	// (0x00050a9f) list_pinb_item_pane_g3_ParamLimits

0x5f2a,	// (0x00050a9f) list_pinb_item_pane_g3

0x5f39,	// (0x00050aae) list_pinb_item_pane_g4_ParamLimits

0x5f39,	// (0x00050aae) list_pinb_item_pane_g4

0x0003,

0xf12c,	// (0x00059ca1) list_pinb_item_pane_g_ParamLimits

0xf12c,	// (0x00059ca1) list_pinb_item_pane_g

0x5f45,	// (0x00050aba) list_pinb_item_pane_t1_ParamLimits

0x5f45,	// (0x00050aba) list_pinb_item_pane_t1

0x5f76,	// (0x00050aeb) calc_display_pane

0x5f8e,	// (0x00050b03) calc_paper_pane

0x5faa,	// (0x00050b1f) grid_calc_pane

0x3080,	// (0x0004dbf5) bg_list_pane_cp01

0x5fca,	// (0x00050b3f) clock_g1

0x5fd2,	// (0x00050b47) clock_g2

0x0001,

0xf135,	// (0x00059caa) clock_g

0x5fda,	// (0x00050b4f) clock_t1_ParamLimits

0x5fda,	// (0x00050b4f) clock_t1

0x5fef,	// (0x00050b64) clock_t2_ParamLimits

0x5fef,	// (0x00050b64) clock_t2

0x6001,	// (0x00050b76) clock_t3_ParamLimits

0x6001,	// (0x00050b76) clock_t3

0x6013,	// (0x00050b88) clock_t4_ParamLimits

0x6013,	// (0x00050b88) clock_t4

0x6025,	// (0x00050b9a) clock_t5_ParamLimits

0x6025,	// (0x00050b9a) clock_t5

0x603a,	// (0x00050baf) clock_t6_ParamLimits

0x603a,	// (0x00050baf) clock_t6

0x604c,	// (0x00050bc1) clock_t7_ParamLimits

0x604c,	// (0x00050bc1) clock_t7

0x605e,	// (0x00050bd3) clock_t8_ParamLimits

0x605e,	// (0x00050bd3) clock_t8

0x6070,	// (0x00050be5) clock_t9_ParamLimits

0x6070,	// (0x00050be5) clock_t9

0x0008,

0xf13a,	// (0x00059caf) clock_t_ParamLimits

0xf13a,	// (0x00059caf) clock_t

0x3362,	// (0x0004ded7) popup_clock_analogue_window_cp02

0x3362,	// (0x0004ded7) popup_clock_digital_window_cp01

0x336a,	// (0x0004dedf) listscroll_help_pane

0x3080,	// (0x0004dbf5) phob_pre_status_pane

0x3374,	// (0x0004dee9) grid_qdial_pane

0x32db,	// (0x0004de50) listscroll_mce_pane

0x32db,	// (0x0004de50) bg_notes_pane

0x337e,	// (0x0004def3) list_notes_pane

0x6082,	// (0x00050bf7) scroll_pane_cp06

0x338c,	// (0x0004df01) bg_calc_paper_pane

0x608f,	// (0x00050c04) list_calc_pane

0x33a4,	// (0x0004df19) bg_calc_display_pane

0x60a9,	// (0x00050c1e) calc_display_pane_t1

0x60be,	// (0x00050c33) calc_display_pane_t2

0x60d3,	// (0x00050c48) calc_display_pane_t3

0x0002,

0xf14d,	// (0x00059cc2) calc_display_pane_t

0x60e5,	// (0x00050c5a) cell_calc_pane_ParamLimits

0x60e5,	// (0x00050c5a) cell_calc_pane

0x33b0,	// (0x0004df25) bg_calc_paper_pane_g1

0x33c8,	// (0x0004df3d) bg_calc_paper_pane_g2

0x33bc,	// (0x0004df31) bg_calc_paper_pane_g3

0x33e0,	// (0x0004df55) bg_calc_paper_pane_g4

0x33d4,	// (0x0004df49) bg_calc_paper_pane_g5

0x610c,	// (0x00050c81) bg_calc_paper_pane_g6

0x611b,	// (0x00050c90) bg_calc_paper_pane_g7

0x612a,	// (0x00050c9f) bg_calc_paper_pane_g8

0x0007,

0xf154,	// (0x00059cc9) bg_calc_paper_pane_g

0x6139,	// (0x00050cae) calc_bg_paper_pane_g9

0x6148,	// (0x00050cbd) list_calc_item_pane_ParamLimits

0x6148,	// (0x00050cbd) list_calc_item_pane

0x33ec,	// (0x0004df61) list_calc_item_pane_g1

0x6161,	// (0x00050cd6) list_calc_item_pane_t1_ParamLimits

0x6161,	// (0x00050cd6) list_calc_item_pane_t1

0x6173,	// (0x00050ce8) list_calc_item_pane_t2_ParamLimits

0x6173,	// (0x00050ce8) list_calc_item_pane_t2

0x0001,

0xf165,	// (0x00059cda) list_calc_item_pane_t_ParamLimits

0xf165,	// (0x00059cda) list_calc_item_pane_t

0x33f9,	// (0x0004df6e) cell_calc_pane_g1

0x3403,	// (0x0004df78) grid_highlight_pane_cp02

0x342e,	// (0x0004dfa3) bg_calc_display_pane_g1

0x61a1,	// (0x00050d16) bg_calc_display_pane_g2

0x3425,	// (0x0004df9a) bg_calc_display_pane_g3

0x0002,

0xf16f,	// (0x00059ce4) bg_calc_display_pane_g

0x61ab,	// (0x00050d20) cell_qdial_pane_ParamLimits

0x61ab,	// (0x00050d20) cell_qdial_pane

0x61bd,	// (0x00050d32) cell_qdial_pane_g1_ParamLimits

0x61bd,	// (0x00050d32) cell_qdial_pane_g1

0x61ca,	// (0x00050d3f) cell_qdial_pane_g2_ParamLimits

0x61ca,	// (0x00050d3f) cell_qdial_pane_g2

0x3437,	// (0x0004dfac) cell_qdial_pane_g3_ParamLimits

0x3437,	// (0x0004dfac) cell_qdial_pane_g3

0x0003,

0xf176,	// (0x00059ceb) cell_qdial_pane_g_ParamLimits

0xf176,	// (0x00059ceb) cell_qdial_pane_g

0x61e8,	// (0x00050d5d) cell_qdial_pane_t1_ParamLimits

0x61e8,	// (0x00050d5d) cell_qdial_pane_t1

0x6200,	// (0x00050d75) cell_qdial_pane_t2_ParamLimits

0x6200,	// (0x00050d75) cell_qdial_pane_t2

0x6213,	// (0x00050d88) cell_qdial_pane_t3_ParamLimits

0x6213,	// (0x00050d88) cell_qdial_pane_t3

0x0002,

0xf17f,	// (0x00059cf4) cell_qdial_pane_t_ParamLimits

0xf17f,	// (0x00059cf4) cell_qdial_pane_t

0x3080,	// (0x0004dbf5) grid_highlight_pane_cp04

0x3443,	// (0x0004dfb8) thumbnail_qdial_pane_ParamLimits

0x3443,	// (0x0004dfb8) thumbnail_qdial_pane

0x349f,	// (0x0004e014) list_help_pane

0x34a9,	// (0x0004e01e) scroll_pane_cp02

0x6226,	// (0x00050d9b) help_list_pane_t1_ParamLimits

0x6226,	// (0x00050d9b) help_list_pane_t1

0x6244,	// (0x00050db9) bg_notes_pane_g2

0x624c,	// (0x00050dc1) bg_notes_pane_g3

0x6254,	// (0x00050dc9) notes_bg_pane_g1

0x625c,	// (0x00050dd1) notes_bg_pane_g4

0x6264,	// (0x00050dd9) notes_bg_pane_g5

0x626c,	// (0x00050de1) notes_bg_pane_g6

0x6274,	// (0x00050de9) notes_bg_pane_g7

0x627c,	// (0x00050df1) notes_bg_pane_g8

0x6284,	// (0x00050df9) notes_bg_pane_g9

0x0006,

0xf19d,	// (0x00059d12) notes_bg_pane_g

0x628c,	// (0x00050e01) list_notes_text_pane_ParamLimits

0x628c,	// (0x00050e01) list_notes_text_pane

0x34b2,	// (0x0004e027) list_notes_text_pane_g1

0x62b0,	// (0x00050e25) list_notes_text_pane_t1

0x62be,	// (0x00050e33) listscroll_cale_week_pane

0x62e3,	// (0x00050e58) bg_cale_heading_pane

0x34d5,	// (0x0004e04a) bg_cale_pane_cp01

0x62fb,	// (0x00050e70) cale_week_corner_pane

0x6315,	// (0x00050e8a) cale_week_day_heading_pane

0x632d,	// (0x00050ea2) cale_week_scroll_pane_g1

0x6340,	// (0x00050eb5) cale_week_scroll_pane_g2

0x6353,	// (0x00050ec8) cale_week_scroll_pane_g3

0x6366,	// (0x00050edb) cale_week_scroll_pane_g4

0x6379,	// (0x00050eee) cale_week_scroll_pane_g5

0x638c,	// (0x00050f01) cale_week_scroll_pane_g6

0x639f,	// (0x00050f14) cale_week_scroll_pane_g7

0x63b2,	// (0x00050f27) cale_week_scroll_pane_g8

0x63c5,	// (0x00050f3a) cale_week_scroll_pane_g9

0x63d8,	// (0x00050f4d) cale_week_scroll_pane_g10

0x63eb,	// (0x00050f60) cale_week_scroll_pane_g11

0x63fe,	// (0x00050f73) cale_week_scroll_pane_g12

0x6411,	// (0x00050f86) cale_week_scroll_pane_g13

0x6424,	// (0x00050f99) cale_week_scroll_pane_g14

0x6437,	// (0x00050fac) cale_week_scroll_pane_g15

0x000f,

0xf1ac,	// (0x00059d21) cale_week_scroll_pane_g

0x645d,	// (0x00050fd2) cale_week_time_pane

0x6470,	// (0x00050fe5) grid_cale_week_pane

0x3504,	// (0x0004e079) scroll_pane_cp08

0x6485,	// (0x00050ffa) cell_cale_week_pane_ParamLimits

0x6485,	// (0x00050ffa) cell_cale_week_pane

0x64d3,	// (0x00051048) cale_week_day_heading_pane_t1

0x650e,	// (0x00051083) cale_week_day_heading_pane_t2

0x6549,	// (0x000510be) cale_week_day_heading_pane_t3

0x6584,	// (0x000510f9) cale_week_day_heading_pane_t4

0x65bf,	// (0x00051134) cale_week_day_heading_pane_t5

0x65fa,	// (0x0005116f) cale_week_day_heading_pane_t6

0x6635,	// (0x000511aa) cale_week_day_heading_pane_t7

0x0006,

0xf1cd,	// (0x00059d42) cale_week_day_heading_pane_t

0x3521,	// (0x0004e096) bg_cale_side_pane

0x6670,	// (0x000511e5) cale_week_time_pane_t1

0x66aa,	// (0x0005121f) cale_week_time_pane_t2

0x66e4,	// (0x00051259) cale_week_time_pane_t3

0x671e,	// (0x00051293) cale_week_time_pane_t4

0x6758,	// (0x000512cd) cale_week_time_pane_t5

0x6792,	// (0x00051307) cale_week_time_pane_t6

0x67cc,	// (0x00051341) cale_week_time_pane_t7

0x6806,	// (0x0005137b) cale_week_time_pane_t8

0x0007,

0xf1dc,	// (0x00059d51) cale_week_time_pane_t

0x6840,	// (0x000513b5) cell_cale_week_pane_g2

0x6864,	// (0x000513d9) cell_cale_week_pane_g3_ParamLimits

0x6864,	// (0x000513d9) cell_cale_week_pane_g3

0x352f,	// (0x0004e0a4) grid_highlight_pane_cp07

0x3537,	// (0x0004e0ac) listscroll_gms_pane

0x3541,	// (0x0004e0b6) grid_gms_pane

0x354a,	// (0x0004e0bf) listscroll_gms_pane_g1

0x3552,	// (0x0004e0c7) listscroll_gms_pane_g2

0x0001,

0xf1ed,	// (0x00059d62) listscroll_gms_pane_g

0x687c,	// (0x000513f1) scroll_pane_cp010

0x6885,	// (0x000513fa) cell_gms_pane_ParamLimits

0x6885,	// (0x000513fa) cell_gms_pane

0x6896,	// (0x0005140b) cell_gms_pane_g1

0x355a,	// (0x0004e0cf) cell_gms_pane_g2

0x34b2,	// (0x0004e027) cell_gms_pane_g3

0x3562,	// (0x0004e0d7) cell_gms_pane_g4

0x0003,

0xf1f2,	// (0x00059d67) cell_gms_pane_g

0x356b,	// (0x0004e0e0) grid_highlight_pane_cp09

0x88c7,	// (0x0005343c) phob_pre_status_pane_g1

0x88cf,	// (0x00053444) phob_pre_status_pane_g2

0x88d7,	// (0x0005344c) phob_pre_status_pane_g3

0x88df,	// (0x00053454) phob_pre_status_pane_g4

0x0004,

0xf5f0,	// (0x0005a165) phob_pre_status_pane_g

0x88ef,	// (0x00053464) phob_pre_status_pane_t1

0x88fd,	// (0x00053472) phob_pre_status_pane_t2

0x890b,	// (0x00053480) phob_pre_status_pane_t3

0x0002,

0xf5fb,	// (0x0005a170) phob_pre_status_pane_t

0x3573,	// (0x0004e0e8) bg_list_pane_cp05

0x689e,	// (0x00051413) grid_vorec_pane

0x357b,	// (0x0004e0f0) vorec_t1

0x3589,	// (0x0004e0fe) vorec_t2

0x3597,	// (0x0004e10c) vorec_t3

0x68a6,	// (0x0005141b) vorec_t4

0xdb78,	// (0x000586ed) vorec_t5

0xdb86,	// (0x000586fb) vorec_t6

0x0004,

0xf1fb,	// (0x00059d70) vorec_t

0xdb94,	// (0x00058709) wait_bar_pane_cp01

0x3698,	// (0x0004e20d) cell_vorec_pane_ParamLimits

0x3698,	// (0x0004e20d) cell_vorec_pane

0x68b4,	// (0x00051429) cell_vorec_pane_g1

0x3080,	// (0x0004dbf5) grid_highlight_pane_cp05

0x68ca,	// (0x0005143f) cams_zoom_pane

0x68d6,	// (0x0005144b) image_vga_pane

0x68e3,	// (0x00051458) main_camera_pane_g1

0x68ef,	// (0x00051464) main_camera_pane_g2

0x68fb,	// (0x00051470) main_camera_pane_g3

0x6907,	// (0x0005147c) main_camera_pane_g4

0x6913,	// (0x00051488) main_camera_pane_g5

0x691f,	// (0x00051494) main_camera_pane_g6

0x692b,	// (0x000514a0) main_camera_pane_g7

0x0007,

0xf206,	// (0x00059d7b) main_camera_pane_g

0x6937,	// (0x000514ac) main_camera_pane_t1

0x6949,	// (0x000514be) main_camera_pane_t2

0x0001,

0xf217,	// (0x00059d8c) main_camera_pane_t

0x696d,	// (0x000514e2) cams_zoom_pane_cp_ParamLimits

0x696d,	// (0x000514e2) cams_zoom_pane_cp

0x6991,	// (0x00051506) image_cif_pane_ParamLimits

0x6991,	// (0x00051506) image_cif_pane

0x69ab,	// (0x00051520) image_subqcif_pane

0x69b3,	// (0x00051528) main_video_pane_g1_ParamLimits

0x69b3,	// (0x00051528) main_video_pane_g1

0x69d3,	// (0x00051548) main_video_pane_g2_ParamLimits

0x69d3,	// (0x00051548) main_video_pane_g2

0x6a01,	// (0x00051576) main_video_pane_g3_ParamLimits

0x6a01,	// (0x00051576) main_video_pane_g3

0x6a2a,	// (0x0005159f) main_video_pane_g4_ParamLimits

0x6a2a,	// (0x0005159f) main_video_pane_g4

0x6a53,	// (0x000515c8) main_video_pane_g5_ParamLimits

0x6a53,	// (0x000515c8) main_video_pane_g5

0x35bf,	// (0x0004e134) main_video_pane_g6_ParamLimits

0x35bf,	// (0x0004e134) main_video_pane_g6

0x0006,

0xf21c,	// (0x00059d91) main_video_pane_g_ParamLimits

0xf21c,	// (0x00059d91) main_video_pane_g

0x6a75,	// (0x000515ea) main_video_pane_t1_ParamLimits

0x6a75,	// (0x000515ea) main_video_pane_t1

0x35d9,	// (0x0004e14e) cams_zoom_pane_g1

0x35e2,	// (0x0004e157) cams_zoom_pane_g2

0x35eb,	// (0x0004e160) cams_zoom_pane_g3

0x35f4,	// (0x0004e169) cams_zoom_pane_g4

0x0003,

0xf22b,	// (0x00059da0) cams_zoom_pane_g

0x6abf,	// (0x00051634) grid_cams_pane

0x6acb,	// (0x00051640) linegrid_cams_pane

0x6ad7,	// (0x0005164c) cell_cams_pane_ParamLimits

0x6ad7,	// (0x0005164c) cell_cams_pane

0x35fd,	// (0x0004e172) cams_burst_image_pane

0x3605,	// (0x0004e17a) cell_cams_pane_g1

0x3080,	// (0x0004dbf5) grid_highlight_pane_cp03

0x33f9,	// (0x0004df6e) mp_bg_pane_g1

0x3080,	// (0x0004dbf5) bg_list_pane_cp03

0xe29f,	// (0x00058e14) bg_mp_pane

0xe2a7,	// (0x00058e1c) grid_mp_pane

0xe2af,	// (0x00058e24) media_player_g1

0xe2b7,	// (0x00058e2c) media_player_t1

0xe2c5,	// (0x00058e3a) media_player_t2

0xe2d3,	// (0x00058e48) media_player_t3

0xe2e1,	// (0x00058e56) media_player_t4

0xe2ef,	// (0x00058e64) media_player_t5

0xe2fd,	// (0x00058e72) media_player_t6

0xe30b,	// (0x00058e80) media_player_t7

0x0006,

0xf5da,	// (0x0005a14f) media_player_t

0xe319,	// (0x00058e8e) wait_bar_pane_cp02

0xf5bf,	// (0x0005a134) main_usb_pane_t

0x88be,	// (0x00053433) cell_mp_pane

0x33f9,	// (0x0004df6e) cell_mp_pane_g1

0x3080,	// (0x0004dbf5) grid_highlight_pane_cp06

0x360d,	// (0x0004e182) grid_skin_colour_pane

0x3615,	// (0x0004e18a) list_highlight_pane_cp03

0x6b3a,	// (0x000516af) skin_g1

0x361d,	// (0x0004e192) skin_t1

0x362c,	// (0x0004e1a1) skin_t2

0x0001,

0xf260,	// (0x00059dd5) skin_t

0x6b42,	// (0x000516b7) cell_skin_colour_pane_ParamLimits

0x6b42,	// (0x000516b7) cell_skin_colour_pane

0x363a,	// (0x0004e1af) cell_skin_colour_pane_g1

0x6bb8,	// (0x0005172d) call_video_g1_ParamLimits

0x6bb8,	// (0x0005172d) call_video_g1

0x6bc4,	// (0x00051739) call_video_g2_ParamLimits

0x6bc4,	// (0x00051739) call_video_g2

0x0001,

0xf265,	// (0x00059dda) call_video_g_ParamLimits

0xf265,	// (0x00059dda) call_video_g

0x6c14,	// (0x00051789) call_video_uplink_pane_cp1_ParamLimits

0x6c14,	// (0x00051789) call_video_uplink_pane_cp1

0x364c,	// (0x0004e1c1) call_video_uplink_pane_cp2

0x6cd0,	// (0x00051845) video_down_crop_pane_ParamLimits

0x6cd0,	// (0x00051845) video_down_crop_pane

0x6d9a,	// (0x0005190f) video_down_pane_ParamLimits

0x6d9a,	// (0x0005190f) video_down_pane

0x3654,	// (0x0004e1c9) video_down_subqcif_pane_ParamLimits

0x3654,	// (0x0004e1c9) video_down_subqcif_pane

0x366c,	// (0x0004e1e1) video_down_subqcif_pane_cp_ParamLimits

0x366c,	// (0x0004e1e1) video_down_subqcif_pane_cp

0x36ab,	// (0x0004e220) im_reading_pane_ParamLimits

0x36ab,	// (0x0004e220) im_reading_pane

0x6e66,	// (0x000519db) im_writing_pane_ParamLimits

0x6e66,	// (0x000519db) im_writing_pane

0x6e7c,	// (0x000519f1) im_reading_pane_t1

0x36c5,	// (0x0004e23a) list_im_pane

0x36d6,	// (0x0004e24b) scroll_pane_cp07

0x6eb4,	// (0x00051a29) im_writing_pane_t1_ParamLimits

0x6eb4,	// (0x00051a29) im_writing_pane_t1

0x36ef,	// (0x0004e264) im_writing_pane_t2_ParamLimits

0x36ef,	// (0x0004e264) im_writing_pane_t2

0x0001,

0xf26f,	// (0x00059de4) im_writing_pane_t_ParamLimits

0xf26f,	// (0x00059de4) im_writing_pane_t

0x3080,	// (0x0004dbf5) input_focus_pane_cp04

0x3080,	// (0x0004dbf5) input_focus_pane_cp05

0x6ec9,	// (0x00051a3e) list_im_single_pane_ParamLimits

0x6ec9,	// (0x00051a3e) list_im_single_pane

0x370c,	// (0x0004e281) list_single_im_pane_t1

0x8884,	// (0x000533f9) blid_accuracy_pane

0x888c,	// (0x00053401) blid_compass_pane

0x8894,	// (0x00053409) main_location_t1

0x88a2,	// (0x00053417) main_location_t2

0x88b0,	// (0x00053425) main_location_t3

0x0002,

0xf5e9,	// (0x0005a15e) main_location_t

0x3080,	// (0x0004dbf5) aid_levels_location

0x33f9,	// (0x0004df6e) blid_accuracy_pane_g1

0x33f9,	// (0x0004df6e) blid_accuracy_pane_g2

0x0001,

0xf2d1,	// (0x00059e46) blid_accuracy_pane_g

0x3746,	// (0x0004e2bb) wml_content_pane

0x3784,	// (0x0004e2f9) wml_button_pane_ParamLimits

0x3784,	// (0x0004e2f9) wml_button_pane

0x6ee1,	// (0x00051a56) wml_list_single_large_pane_ParamLimits

0x6ee1,	// (0x00051a56) wml_list_single_large_pane

0x6ef8,	// (0x00051a6d) wml_list_single_medium_pane_ParamLimits

0x6ef8,	// (0x00051a6d) wml_list_single_medium_pane

0x6f10,	// (0x00051a85) wml_list_single_small_pane_ParamLimits

0x6f10,	// (0x00051a85) wml_list_single_small_pane

0x3798,	// (0x0004e30d) wml_selection_box_pane_ParamLimits

0x3798,	// (0x0004e30d) wml_selection_box_pane

0x37ab,	// (0x0004e320) wml_list_single_pane_t1

0x37ba,	// (0x0004e32f) wml_list_single_medium_pane_t1

0x37c9,	// (0x0004e33e) wml_list_single_large_pane_t1

0x37d8,	// (0x0004e34d) input_focus_pane_cp02_ParamLimits

0x37d8,	// (0x0004e34d) input_focus_pane_cp02

0x37eb,	// (0x0004e360) wml_selection_box_pane_g1

0x37f4,	// (0x0004e369) wml_selection_box_pane_t1_ParamLimits

0x37f4,	// (0x0004e369) wml_selection_box_pane_t1

0x32db,	// (0x0004de50) bg_wml_button_pane_ParamLimits

0x32db,	// (0x0004de50) bg_wml_button_pane

0x380c,	// (0x0004e381) wml_button_pane_g1

0x3814,	// (0x0004e389) wml_button_pane_t1

0x380c,	// (0x0004e381) wml_button_bg_pane_g1

0x3824,	// (0x0004e399) wml_button_bg_pane_g2

0x382c,	// (0x0004e3a1) wml_button_bg_pane_g3

0x3834,	// (0x0004e3a9) wml_button_bg_pane_g4

0x383c,	// (0x0004e3b1) wml_button_bg_pane_g5

0x3844,	// (0x0004e3b9) wml_button_bg_pane_g6

0x384c,	// (0x0004e3c1) wml_button_bg_pane_g7

0x3854,	// (0x0004e3c9) wml_button_bg_pane_g8

0x385c,	// (0x0004e3d1) wml_button_bg_pane_g9

0x0008,

0xf274,	// (0x00059de9) wml_button_bg_pane_g

0x6f2b,	// (0x00051aa0) bg_list_pane_cp02

0x3864,	// (0x0004e3d9) mce_header_pane_ParamLimits

0x3864,	// (0x0004e3d9) mce_header_pane

0x3878,	// (0x0004e3ed) mce_icon_pane

0x3878,	// (0x0004e3ed) mce_image_pane

0x3881,	// (0x0004e3f6) mce_text_pane_ParamLimits

0x3881,	// (0x0004e3f6) mce_text_pane

0x6f34,	// (0x00051aa9) scroll_pane_cp03

0x6f34,	// (0x00051aa9) scroll_pane_cp04

0x3895,	// (0x0004e40a) scroll_pane_cp05_ParamLimits

0x3895,	// (0x0004e40a) scroll_pane_cp05

0x6f3c,	// (0x00051ab1) mce_header_field_pane_ParamLimits

0x6f3c,	// (0x00051ab1) mce_header_field_pane

0x6f5c,	// (0x00051ad1) mce_header_field_pane_2_ParamLimits

0x6f5c,	// (0x00051ad1) mce_header_field_pane_2

0x6f72,	// (0x00051ae7) mce_header_field_pane_3

0x6f7a,	// (0x00051aef) list_single_mce_message_pane_ParamLimits

0x6f7a,	// (0x00051aef) list_single_mce_message_pane

0x6f91,	// (0x00051b06) list_single_mce_smart_pane_ParamLimits

0x6f91,	// (0x00051b06) list_single_mce_smart_pane

0x38a1,	// (0x0004e416) input_focus_pane_cp03

0x38aa,	// (0x0004e41f) list_header_data_pane

0x6fb3,	// (0x00051b28) mce_header_field_pane_t1

0x6fc1,	// (0x00051b36) list_single_mce_header_pane_ParamLimits

0x6fc1,	// (0x00051b36) list_single_mce_header_pane

0x38b2,	// (0x0004e427) list_single_mce_header_pane_t1

0x38c1,	// (0x0004e436) list_single_mce_message_pane_g1

0x38ca,	// (0x0004e43f) list_single_mce_message_pane_t1

0x6fff,	// (0x00051b74) bg_cale_heading_pane_cp01_ParamLimits

0x6fff,	// (0x00051b74) bg_cale_heading_pane_cp01

0x38d9,	// (0x0004e44e) bg_cale_pane_cp02_ParamLimits

0x38d9,	// (0x0004e44e) bg_cale_pane_cp02

0x702e,	// (0x00051ba3) cale_month_corner_pane

0x7048,	// (0x00051bbd) cale_month_day_heading_pane_ParamLimits

0x7048,	// (0x00051bbd) cale_month_day_heading_pane

0x7077,	// (0x00051bec) cale_month_pane_g1_ParamLimits

0x7077,	// (0x00051bec) cale_month_pane_g1

0x709b,	// (0x00051c10) cale_month_pane_g2_ParamLimits

0x709b,	// (0x00051c10) cale_month_pane_g2

0x70ba,	// (0x00051c2f) cale_month_pane_g3_ParamLimits

0x70ba,	// (0x00051c2f) cale_month_pane_g3

0x70f6,	// (0x00051c6b) cale_month_pane_g4_ParamLimits

0x70f6,	// (0x00051c6b) cale_month_pane_g4

0x7132,	// (0x00051ca7) cale_month_pane_g5_ParamLimits

0x7132,	// (0x00051ca7) cale_month_pane_g5

0x716e,	// (0x00051ce3) cale_month_pane_g6_ParamLimits

0x716e,	// (0x00051ce3) cale_month_pane_g6

0x71aa,	// (0x00051d1f) cale_month_pane_g7_ParamLimits

0x71aa,	// (0x00051d1f) cale_month_pane_g7

0x71e6,	// (0x00051d5b) cale_month_pane_g8_ParamLimits

0x71e6,	// (0x00051d5b) cale_month_pane_g8

0x7222,	// (0x00051d97) cale_month_pane_g9_ParamLimits

0x7222,	// (0x00051d97) cale_month_pane_g9

0x725c,	// (0x00051dd1) cale_month_pane_g10_ParamLimits

0x725c,	// (0x00051dd1) cale_month_pane_g10

0x7296,	// (0x00051e0b) cale_month_pane_g11_ParamLimits

0x7296,	// (0x00051e0b) cale_month_pane_g11

0x72d0,	// (0x00051e45) cale_month_pane_g12_ParamLimits

0x72d0,	// (0x00051e45) cale_month_pane_g12

0x730a,	// (0x00051e7f) cale_month_pane_g13_ParamLimits

0x730a,	// (0x00051e7f) cale_month_pane_g13

0x000c,

0xf287,	// (0x00059dfc) cale_month_pane_g_ParamLimits

0xf287,	// (0x00059dfc) cale_month_pane_g

0x7344,	// (0x00051eb9) cale_month_week_pane

0x7357,	// (0x00051ecc) grid_cale_month_pane_ParamLimits

0x7357,	// (0x00051ecc) grid_cale_month_pane

0x737d,	// (0x00051ef2) cale_month_day_heading_pane_t1

0x7403,	// (0x00051f78) cale_month_day_heading_pane_t2

0x7494,	// (0x00052009) cale_month_day_heading_pane_t3

0x7525,	// (0x0005209a) cale_month_day_heading_pane_t4

0x75b6,	// (0x0005212b) cale_month_day_heading_pane_t5

0x7647,	// (0x000521bc) cale_month_day_heading_pane_t6

0x76d8,	// (0x0005224d) cale_month_day_heading_pane_t7

0x0006,

0xf2a2,	// (0x00059e17) cale_month_day_heading_pane_t

0x3521,	// (0x0004e096) bg_cale_side_pane_cp01

0x7769,	// (0x000522de) cale_month_week_pane_t1

0x77a2,	// (0x00052317) cale_month_week_pane_t2

0x77db,	// (0x00052350) cale_month_week_pane_t3

0x7814,	// (0x00052389) cale_month_week_pane_t4

0x784d,	// (0x000523c2) cale_month_week_pane_t5

0x7886,	// (0x000523fb) cale_month_week_pane_t6

0x0005,

0xf2b1,	// (0x00059e26) cale_month_week_pane_t

0x78bf,	// (0x00052434) cell_cale_month_pane_ParamLimits

0x78bf,	// (0x00052434) cell_cale_month_pane

0x79ad,	// (0x00052522) cell_cale_month_pane_g1

0x79b9,	// (0x0005252e) cell_cale_month_pane_t1_ParamLimits

0x79b9,	// (0x0005252e) cell_cale_month_pane_t1

0x352f,	// (0x0004e0a4) grid_highlight_pane_cp08

0x33f9,	// (0x0004df6e) main_smil_g1

0x79d9,	// (0x0005254e) smil_status_pane

0x3918,	// (0x0004e48d) smil_text_pane

0xe17f,	// (0x00058cf4) bg_popup_call3_rect_pane_g8

0xe187,	// (0x00058cfc) bg_popup_call3_rect_pane_g9

0x0008,

0xf56a,	// (0x0005a0df) bg_popup_call3_rect_pane_g

0xe418,	// (0x00058f8d) smil_status_volume_pane_g1

0x79ea,	// (0x0005255f) smil_status_pane_t1

0x8c0f,	// (0x00053784) volume_smil_pane

0x3922,	// (0x0004e497) list_smil_text_pane

0x7a01,	// (0x00052576) scroll_pane_cp011

0x7a0a,	// (0x0005257f) smil_text_list_pane_t1_ParamLimits

0x7a0a,	// (0x0005257f) smil_text_list_pane_t1

0x7a49,	// (0x000525be) aid_volume_smil_ParamLimits

0x7a49,	// (0x000525be) aid_volume_smil

0x33f9,	// (0x0004df6e) smil_volume_pane_g1

0x33f9,	// (0x0004df6e) smil_volume_pane_g2

0x0001,

0xf2d1,	// (0x00059e46) smil_volume_pane_g

0x62be,	// (0x00050e33) listscroll_cale_day_pane

0x392c,	// (0x0004e4a1) bg_cale_pane

0x3944,	// (0x0004e4b9) list_cale_pane

0x3967,	// (0x0004e4dc) scroll_pane_cp09

0x3978,	// (0x0004e4ed) cale_bg_pane_g1

0x3980,	// (0x0004e4f5) cale_bg_pane_g2

0x3988,	// (0x0004e4fd) cale_bg_pane_g3

0x3990,	// (0x0004e505) cale_bg_pane_g4

0x3998,	// (0x0004e50d) cale_bg_pane_g5

0x39a0,	// (0x0004e515) cale_bg_pane_g6

0x39a8,	// (0x0004e51d) cale_bg_pane_g7

0x39b0,	// (0x0004e525) cale_bg_pane_g8

0x39b8,	// (0x0004e52d) cale_bg_pane_g9

0x0008,

0xf2d6,	// (0x00059e4b) cale_bg_pane_g

0x7a73,	// (0x000525e8) list_cale_time_pane_ParamLimits

0x7a73,	// (0x000525e8) list_cale_time_pane

0x39c0,	// (0x0004e535) list_cale_time_pane_g1_ParamLimits

0x39c0,	// (0x0004e535) list_cale_time_pane_g1

0x39cc,	// (0x0004e541) list_cale_time_pane_g2_ParamLimits

0x39cc,	// (0x0004e541) list_cale_time_pane_g2

0x7a87,	// (0x000525fc) list_cale_time_pane_g3_ParamLimits

0x7a87,	// (0x000525fc) list_cale_time_pane_g3

0x7a93,	// (0x00052608) list_cale_time_pane_g4_ParamLimits

0x7a93,	// (0x00052608) list_cale_time_pane_g4

0x7a9f,	// (0x00052614) list_cale_time_pane_g5_ParamLimits

0x7a9f,	// (0x00052614) list_cale_time_pane_g5

0x0005,

0xf2e9,	// (0x00059e5e) list_cale_time_pane_g_ParamLimits

0xf2e9,	// (0x00059e5e) list_cale_time_pane_g

0x39e6,	// (0x0004e55b) list_cale_time_pane_t1_ParamLimits

0x39e6,	// (0x0004e55b) list_cale_time_pane_t1

0x3a0e,	// (0x0004e583) list_cale_time_pane_t2_ParamLimits

0x3a0e,	// (0x0004e583) list_cale_time_pane_t2

0x7db6,	// (0x0005292b) aid_blid_cardinal_pane

0x7df4,	// (0x00052969) compass_pane_t4

0x3a36,	// (0x0004e5ab) list_cale_time_pane_t4_ParamLimits

0x3a36,	// (0x0004e5ab) list_cale_time_pane_t4

0x7e02,	// (0x00052977) compass_pane_t5

0x7e10,	// (0x00052985) compass_pane_t6

0x7e1e,	// (0x00052993) compass_pane_t7

0x3ea3,	// (0x0004ea18) navi_pane_cc_t1

0x4048,	// (0x0004ebbd) aid_phob_thumbnail_center_pane

0x8431,	// (0x00052fa6) main_postcard_pane_g4_ParamLimits

0x0002,

0xf2f6,	// (0x00059e6b) list_cale_time_pane_t_ParamLimits

0xf2f6,	// (0x00059e6b) list_cale_time_pane_t

0x2bd0,	// (0x0004d745) bg_popup_window_pane_cp02_ParamLimits

0x2bd0,	// (0x0004d745) bg_popup_window_pane_cp02

0x3a5e,	// (0x0004e5d3) heading_pane_cp01_ParamLimits

0x3a5e,	// (0x0004e5d3) heading_pane_cp01

0x3a6a,	// (0x0004e5df) loc_req_pane_ParamLimits

0x3a6a,	// (0x0004e5df) loc_req_pane

0x3a7a,	// (0x0004e5ef) loc_type_pane_ParamLimits

0x3a7a,	// (0x0004e5ef) loc_type_pane

0x3a8c,	// (0x0004e601) loc_type_pane_t1_ParamLimits

0x3a8c,	// (0x0004e601) loc_type_pane_t1

0x3a9e,	// (0x0004e613) loc_type_pane_t2_ParamLimits

0x3a9e,	// (0x0004e613) loc_type_pane_t2

0x3ab0,	// (0x0004e625) loc_type_pane_t3_ParamLimits

0x3ab0,	// (0x0004e625) loc_type_pane_t3

0x0002,

0xf2fd,	// (0x00059e72) loc_type_pane_t_ParamLimits

0xf2fd,	// (0x00059e72) loc_type_pane_t

0x3ac2,	// (0x0004e637) list_loc_req_pane

0x3acc,	// (0x0004e641) scroll_pane_cp012

0x7aab,	// (0x00052620) list_single_loc_request_popup_menu_pane_ParamLimits

0x7aab,	// (0x00052620) list_single_loc_request_popup_menu_pane

0x3ad5,	// (0x0004e64a) list_single_loc_request_popup_menu_pane_g1_ParamLimits

0x3ad5,	// (0x0004e64a) list_single_loc_request_popup_menu_pane_g1

0x3ae1,	// (0x0004e656) list_single_loc_request_popup_menu_pane_g2_ParamLimits

0x3ae1,	// (0x0004e656) list_single_loc_request_popup_menu_pane_g2

0x0001,

0xf304,	// (0x00059e79) list_single_loc_request_popup_menu_pane_g_ParamLimits

0xf304,	// (0x00059e79) list_single_loc_request_popup_menu_pane_g

0x3aed,	// (0x0004e662) list_single_loc_request_popup_menu_pane_t1_ParamLimits

0x3aed,	// (0x0004e662) list_single_loc_request_popup_menu_pane_t1

0x7abd,	// (0x00052632) bg_popup_window_pane_cp03_ParamLimits

0x7abd,	// (0x00052632) bg_popup_window_pane_cp03

0x7acb,	// (0x00052640) heading_loc_req_pane_ParamLimits

0x7acb,	// (0x00052640) heading_loc_req_pane

0x7ad7,	// (0x0005264c) popup_dyc_status_message_window_g1_ParamLimits

0x7ad7,	// (0x0005264c) popup_dyc_status_message_window_g1

0x7ae3,	// (0x00052658) popup_dyc_status_message_window_t1_ParamLimits

0x7ae3,	// (0x00052658) popup_dyc_status_message_window_t1

0x7af5,	// (0x0005266a) popup_dyc_status_message_window_t2_ParamLimits

0x7af5,	// (0x0005266a) popup_dyc_status_message_window_t2

0x7b07,	// (0x0005267c) popup_dyc_status_message_window_t3_ParamLimits

0x7b07,	// (0x0005267c) popup_dyc_status_message_window_t3

0x0002,

0xf309,	// (0x00059e7e) popup_dyc_status_message_window_t_ParamLimits

0xf309,	// (0x00059e7e) popup_dyc_status_message_window_t

0x3080,	// (0x0004dbf5) bg_heading_pane_cp01

0x3b03,	// (0x0004e678) heading_loc_req_pane_g1

0x3b0b,	// (0x0004e680) heading_loc_req_pane_g2

0x3b13,	// (0x0004e688) heading_loc_req_pane_g3

0x0002,

0xf310,	// (0x00059e85) heading_loc_req_pane_g

0x3b1b,	// (0x0004e690) heading_loc_req_pane_t1

0x3b2a,	// (0x0004e69f) bg_popup_sub_pane_cp01_ParamLimits

0x3b2a,	// (0x0004e69f) bg_popup_sub_pane_cp01

0x3b38,	// (0x0004e6ad) popup_cale_events_window_g1_ParamLimits

0x3b38,	// (0x0004e6ad) popup_cale_events_window_g1

0x3b58,	// (0x0004e6cd) popup_cale_events_window_g2_ParamLimits

0x3b58,	// (0x0004e6cd) popup_cale_events_window_g2

0x0001,

0xf344,	// (0x00059eb9) popup_cale_events_window_g_ParamLimits

0xf344,	// (0x00059eb9) popup_cale_events_window_g

0x3b78,	// (0x0004e6ed) popup_cale_events_window_t1_ParamLimits

0x3b78,	// (0x0004e6ed) popup_cale_events_window_t1

0x3b8a,	// (0x0004e6ff) popup_cale_events_window_t2_ParamLimits

0x3b8a,	// (0x0004e6ff) popup_cale_events_window_t2

0x3bc8,	// (0x0004e73d) popup_cale_events_window_t3_ParamLimits

0x3bc8,	// (0x0004e73d) popup_cale_events_window_t3

0x3c02,	// (0x0004e777) popup_cale_events_window_t4_ParamLimits

0x3c02,	// (0x0004e777) popup_cale_events_window_t4

0x0003,

0xf349,	// (0x00059ebe) popup_cale_events_window_t_ParamLimits

0xf349,	// (0x00059ebe) popup_cale_events_window_t

0x7b8d,	// (0x00052702) call_type_pane

0x3d22,	// (0x0004e897) popup_call_status_window_g1

0x7b99,	// (0x0005270e) popup_call_status_window_g2

0x7ba5,	// (0x0005271a) popup_call_status_window_g3

0x0002,

0xf352,	// (0x00059ec7) popup_call_status_window_g

0x3c38,	// (0x0004e7ad) call_type_pane_g1

0x3c41,	// (0x0004e7b6) call_type_pane_g2

0x0001,

0xf359,	// (0x00059ece) call_type_pane_g

0x3080,	// (0x0004dbf5) bg_popup_sub_pane_cp02

0x3c4a,	// (0x0004e7bf) listscroll_popup_wml_pane

0x3c52,	// (0x0004e7c7) list_wml_pane

0x3c5c,	// (0x0004e7d1) scroll_pane_cp013

0x7bb1,	// (0x00052726) list_single_graphic_popup_wml_pane_ParamLimits

0x7bb1,	// (0x00052726) list_single_graphic_popup_wml_pane

0x33f9,	// (0x0004df6e) list_single_graphic_popup_wml_pane_g1

0x3c65,	// (0x0004e7da) list_single_graphic_popup_wml_pane_g2

0x0001,

0xf35e,	// (0x00059ed3) list_single_graphic_popup_wml_pane_g

0x3c6d,	// (0x0004e7e2) list_single_graphic_popup_wml_pane_t1

0x3c7b,	// (0x0004e7f0) aid_call_pane

0x32d3,	// (0x0004de48) popup_clock_analogue_window_g1

0x32d3,	// (0x0004de48) popup_clock_analogue_window_g2

0x7bc5,	// (0x0005273a) popup_clock_analogue_window_g3

0x7bc5,	// (0x0005273a) popup_clock_analogue_window_g4

0x33f9,	// (0x0004df6e) popup_clock_analogue_window_g5

0x0004,

0xf363,	// (0x00059ed8) popup_clock_analogue_window_g

0x7bcd,	// (0x00052742) popup_clock_analogue_window_t1

0x7bdb,	// (0x00052750) clock_digital_number_pane_ParamLimits

0x7bdb,	// (0x00052750) clock_digital_number_pane

0x7be7,	// (0x0005275c) clock_digital_number_pane_cp02_ParamLimits

0x7be7,	// (0x0005275c) clock_digital_number_pane_cp02

0x7bf3,	// (0x00052768) clock_digital_number_pane_cp03_ParamLimits

0x7bf3,	// (0x00052768) clock_digital_number_pane_cp03

0x7bff,	// (0x00052774) clock_digital_number_pane_cp04_ParamLimits

0x7bff,	// (0x00052774) clock_digital_number_pane_cp04

0x7c0b,	// (0x00052780) clock_digital_separator_pane_ParamLimits

0x7c0b,	// (0x00052780) clock_digital_separator_pane

0x7c17,	// (0x0005278c) popup_clock_digital_window_t1

0x33f9,	// (0x0004df6e) clock_digital_number_pane_g1

0x33f9,	// (0x0004df6e) clock_digital_number_pane_g2

0x0001,

0xf2d1,	// (0x00059e46) clock_digital_number_pane_g

0x33f9,	// (0x0004df6e) clock_digital_separator_pane_g1

0x33f9,	// (0x0004df6e) clock_digital_separator_pane_g2

0x0001,

0xf2d1,	// (0x00059e46) clock_digital_separator_pane_g

0x3080,	// (0x0004dbf5) bg_popup_window_pane_cp04

0x3c8b,	// (0x0004e800) heading_pane_cp03

0x3c93,	// (0x0004e808) listscroll_popup_gms_pane

0x3c9b,	// (0x0004e810) grid_large_graphic_popup_pane

0x3ca5,	// (0x0004e81a) listscroll_popup_gms_pane_g1

0x3cad,	// (0x0004e822) listscroll_popup_gms_pane_g2

0x0001,

0xf36e,	// (0x00059ee3) listscroll_popup_gms_pane_g

0x377c,	// (0x0004e2f1) scroll_pane_cp014

0x7c34,	// (0x000527a9) cell_large_graphic_popup_pane_ParamLimits

0x7c34,	// (0x000527a9) cell_large_graphic_popup_pane

0x7c4b,	// (0x000527c0) cell_large_graphic_popup_pane_g1_ParamLimits

0x7c4b,	// (0x000527c0) cell_large_graphic_popup_pane_g1

0x3cb5,	// (0x0004e82a) cell_large_graphic_popup_pane_g2_ParamLimits

0x3cb5,	// (0x0004e82a) cell_large_graphic_popup_pane_g2

0x3cc1,	// (0x0004e836) cell_large_graphic_popup_pane_g3_ParamLimits

0x3cc1,	// (0x0004e836) cell_large_graphic_popup_pane_g3

0x3cce,	// (0x0004e843) cell_large_graphic_popup_pane_g4_ParamLimits

0x3cce,	// (0x0004e843) cell_large_graphic_popup_pane_g4

0x0003,

0xf373,	// (0x00059ee8) cell_large_graphic_popup_pane_g_ParamLimits

0xf373,	// (0x00059ee8) cell_large_graphic_popup_pane_g

0x3cde,	// (0x0004e853) grid_highlight_pane_cp010

0x33f9,	// (0x0004df6e) bg_popup_call_pane_g1

0x3ce8,	// (0x0004e85d) list_single_graphic_popup_conf_pane_ParamLimits

0x3ce8,	// (0x0004e85d) list_single_graphic_popup_conf_pane

0x3cfb,	// (0x0004e870) list_highlight_pane_cp01

0x3d04,	// (0x0004e879) list_single_graphic_popup_conf_pane_g1

0x3d0c,	// (0x0004e881) list_single_graphic_popup_conf_pane_g2

0x0001,

0xf37c,	// (0x00059ef1) list_single_graphic_popup_conf_pane_g

0x3d14,	// (0x0004e889) list_single_graphic_popup_conf_pane_t1

0x3d30,	// (0x0004e8a5) linegrid_cams_pane_g1

0x7c57,	// (0x000527cc) linegrid_cams_pane_g2

0x34b2,	// (0x0004e027) linegrid_cams_pane_g3

0x3d39,	// (0x0004e8ae) linegrid_cams_pane_g4

0x7c60,	// (0x000527d5) linegrid_cams_pane_g5

0x7c69,	// (0x000527de) linegrid_cams_pane_g6

0x3562,	// (0x0004e0d7) linegrid_cams_pane_g7

0x0006,

0xf381,	// (0x00059ef6) linegrid_cams_pane_g

0x3d42,	// (0x0004e8b7) popup_clock_analogue_window

0x3d42,	// (0x0004e8b7) popup_clock_digital_window

0x3080,	// (0x0004dbf5) popup_phob_thumbnail_window

0x33f9,	// (0x0004df6e) call_video_uplink_pane_g1

0x3d4b,	// (0x0004e8c0) call_video_uplink_pane_g2

0x0001,

0xf390,	// (0x00059f05) call_video_uplink_pane_g

0x352f,	// (0x0004e0a4) video_uplink_pane

0x3d53,	// (0x0004e8c8) mce_image_pane_g1

0x7c72,	// (0x000527e7) mce_image_pane_g2

0x7c7a,	// (0x000527ef) mce_image_pane_g3

0x7c82,	// (0x000527f7) mce_image_pane_g4

0x7c8a,	// (0x000527ff) mce_image_pane_g5

0x0004,

0xf395,	// (0x00059f0a) mce_image_pane_g

0x3d5d,	// (0x0004e8d2) control_top_pane_stacon_cp01_ParamLimits

0x3d5d,	// (0x0004e8d2) control_top_pane_stacon_cp01

0x3d6d,	// (0x0004e8e2) uni_indicator_pane_stacon_cp01_ParamLimits

0x3d6d,	// (0x0004e8e2) uni_indicator_pane_stacon_cp01

0x3d7e,	// (0x0004e8f3) bg_popup_sub_pane_cp03

0x3d88,	// (0x0004e8fd) chi_dic_find_pane

0x7c92,	// (0x00052807) listscroll_chi_dic_pane

0x3d90,	// (0x0004e905) main_pane_chidic_g1

0x3d98,	// (0x0004e90d) chi_dic_find_pane_t1

0x3da6,	// (0x0004e91b) find_chidic_pane

0x3daf,	// (0x0004e924) chi_dic_list_pane_ParamLimits

0x3daf,	// (0x0004e924) chi_dic_list_pane

0x3dc0,	// (0x0004e935) scroll_pane_cp020

0x3dc8,	// (0x0004e93d) find_chidic_pane_t1

0x3080,	// (0x0004dbf5) input_focus_pane_cp06

0x7ca4,	// (0x00052819) list_chi_dic_pane_ParamLimits

0x7ca4,	// (0x00052819) list_chi_dic_pane

0x7cb7,	// (0x0005282c) list_chi_dic_pane_t1_ParamLimits

0x7cb7,	// (0x0005282c) list_chi_dic_pane_t1

0x3080,	// (0x0004dbf5) list_highlight_pane_cp020

0x3dd7,	// (0x0004e94c) bg_cale_heading_pane_g1

0x7cca,	// (0x0005283f) bg_cale_heading_pane_g2

0x7cd2,	// (0x00052847) bg_cale_heading_pane_g3

0x7cda,	// (0x0005284f) bg_cale_heading_pane_g4

0x7ce2,	// (0x00052857) bg_cale_heading_pane_g5

0x7cea,	// (0x0005285f) bg_cale_heading_pane_g6

0x7cf2,	// (0x00052867) bg_cale_heading_pane_g7

0x7cfa,	// (0x0005286f) bg_cale_heading_pane_g8

0x7d02,	// (0x00052877) bg_cale_heading_pane_g9

0x0008,

0xf3a0,	// (0x00059f15) bg_cale_heading_pane_g

0x3dd7,	// (0x0004e94c) bg_cale_side_pane_g1

0x7d0a,	// (0x0005287f) bg_cale_side_pane_g2

0x7d12,	// (0x00052887) bg_cale_side_pane_g3

0x7d1a,	// (0x0005288f) bg_cale_side_pane_g4

0x7d22,	// (0x00052897) bg_cale_side_pane_g5

0x7d2a,	// (0x0005289f) bg_cale_side_pane_g6

0x7d32,	// (0x000528a7) bg_cale_side_pane_g7

0x7d3a,	// (0x000528af) bg_cale_side_pane_g8

0x7d42,	// (0x000528b7) bg_cale_side_pane_g9

0x0008,

0xf3b3,	// (0x00059f28) bg_cale_side_pane_g

0x7d4a,	// (0x000528bf) popup_call_status_window_ParamLimits

0x7d4a,	// (0x000528bf) popup_call_status_window

0x3ddf,	// (0x0004e954) stacon_top_pane

0x3de7,	// (0x0004e95c) status_pane_ParamLimits

0x3de7,	// (0x0004e95c) status_pane

0x3e01,	// (0x0004e976) status_small_pane

0x3e09,	// (0x0004e97e) control_pane

0x3080,	// (0x0004dbf5) stacon_bottom_pane

0x3e11,	// (0x0004e986) list_single_mce_smart_pane_t1_ParamLimits

0x3e11,	// (0x0004e986) list_single_mce_smart_pane_t1

0x3e24,	// (0x0004e999) list_single_mce_smart_pane_t2_ParamLimits

0x3e24,	// (0x0004e999) list_single_mce_smart_pane_t2

0x0001,

0xf3c6,	// (0x00059f3b) list_single_mce_smart_pane_t_ParamLimits

0xf3c6,	// (0x00059f3b) list_single_mce_smart_pane_t

0x7d59,	// (0x000528ce) compass_pane

0x7d62,	// (0x000528d7) main_location2_pane_t1

0x7d78,	// (0x000528ed) main_location2_pane_t2

0x7d8e,	// (0x00052903) main_location2_pane_t3

0x0003,

0xf3cb,	// (0x00059f40) main_location2_pane_t

0x3e4c,	// (0x0004e9c1) compass_pane_g1_ParamLimits

0x3e4c,	// (0x0004e9c1) compass_pane_g1

0x7dd6,	// (0x0005294b) compass_pane_t1

0x7de5,	// (0x0005295a) compass_pane_t2

0x0005,

0xf3d4,	// (0x00059f49) compass_pane_t

0x7e2c,	// (0x000529a1) text_secondary_cp61

0x3e9a,	// (0x0004ea0f) navi_pane_cams_g5

0x3ee6,	// (0x0004ea5b) navi_pane_im_t1

0x3ef4,	// (0x0004ea69) navi_pane_mp_g1_ParamLimits

0x3ef4,	// (0x0004ea69) navi_pane_mp_g1

0x3f08,	// (0x0004ea7d) navi_pane_mp_g2_ParamLimits

0x3f08,	// (0x0004ea7d) navi_pane_mp_g2

0x3f14,	// (0x0004ea89) navi_pane_mp_g3_ParamLimits

0x3f14,	// (0x0004ea89) navi_pane_mp_g3

0x0002,

0xf3e8,	// (0x00059f5d) navi_pane_mp_g_ParamLimits

0xf3e8,	// (0x00059f5d) navi_pane_mp_g

0x3f20,	// (0x0004ea95) navi_pane_mp_t1

0x3f2e,	// (0x0004eaa3) navi_pane_mp_t2

0x0002,

0xf3ef,	// (0x00059f64) navi_pane_mp_t

0x3f99,	// (0x0004eb0e) navi_pane_vt_g1

0x3f20,	// (0x0004ea95) navi_pane_vt_t1

0x3fa1,	// (0x0004eb16) navi_slider_pane

0x3573,	// (0x0004e0e8) zooming_pane

0x3fa9,	// (0x0004eb1e) navi_slider_pane_g1

0x7eae,	// (0x00052a23) navi_slider_pane_g2

0x0006,

0xf3f6,	// (0x00059f6b) navi_slider_pane_g

0x3fcd,	// (0x0004eb42) aid_levels_zoom

0x3fd5,	// (0x0004eb4a) zooming_pane_g1

0x3fdd,	// (0x0004eb52) zooming_pane_g2

0x3fdd,	// (0x0004eb52) zooming_pane_g3

0x0002,

0xf405,	// (0x00059f7a) zooming_pane_g

0x3fe5,	// (0x0004eb5a) level_10_zoom

0x3fee,	// (0x0004eb63) level_11_zoom

0x3ff7,	// (0x0004eb6c) level_1_zoom

0x4000,	// (0x0004eb75) level_2_zoom

0x4009,	// (0x0004eb7e) level_3_zoom

0x4012,	// (0x0004eb87) level_4_zoom

0x401b,	// (0x0004eb90) level_5_zoom

0x4024,	// (0x0004eb99) level_6_zoom

0x402d,	// (0x0004eba2) level_7_zoom

0x4036,	// (0x0004ebab) level_8_zoom

0x403f,	// (0x0004ebb4) level_9_zoom

0x4050,	// (0x0004ebc5) popup_phob_thumbnail_window_g1

0x4058,	// (0x0004ebcd) popup_phob_thumbnail_window_g2

0x0001,

0xf40c,	// (0x00059f81) popup_phob_thumbnail_window_g

0xe321,	// (0x00058e96) level_1_location

0xe329,	// (0x00058e9e) level_2_location

0xe331,	// (0x00058ea6) level_3_location

0xe339,	// (0x00058eae) level_4_location

0x3573,	// (0x0004e0e8) level_5_location

0x7ec0,	// (0x00052a35) mce_icon_pane_g1

0x7ec8,	// (0x00052a3d) mce_icon_pane_g2

0x0001,

0xf411,	// (0x00059f86) mce_icon_pane_g

0x7ed0,	// (0x00052a45) main_mup_pane_g1_ParamLimits

0x7ed0,	// (0x00052a45) main_mup_pane_g1

0x7ee8,	// (0x00052a5d) main_mup_pane_g2_ParamLimits

0x7ee8,	// (0x00052a5d) main_mup_pane_g2

0x7f04,	// (0x00052a79) main_mup_pane_g3_ParamLimits

0x7f04,	// (0x00052a79) main_mup_pane_g3

0x7f20,	// (0x00052a95) main_mup_pane_g4_ParamLimits

0x7f20,	// (0x00052a95) main_mup_pane_g4

0x7f3c,	// (0x00052ab1) main_mup_pane_g5_ParamLimits

0x7f3c,	// (0x00052ab1) main_mup_pane_g5

0x7f59,	// (0x00052ace) main_mup_pane_g6_ParamLimits

0x7f59,	// (0x00052ace) main_mup_pane_g6

0x7f75,	// (0x00052aea) main_mup_pane_g7_ParamLimits

0x7f75,	// (0x00052aea) main_mup_pane_g7

0x7f91,	// (0x00052b06) main_mup_pane_g8_ParamLimits

0x7f91,	// (0x00052b06) main_mup_pane_g8

0x7fad,	// (0x00052b22) main_mup_pane_g9_ParamLimits

0x7fad,	// (0x00052b22) main_mup_pane_g9

0x7fc4,	// (0x00052b39) main_mup_pane_g10_ParamLimits

0x7fc4,	// (0x00052b39) main_mup_pane_g10

0x7fdb,	// (0x00052b50) main_mup_pane_g11_ParamLimits

0x7fdb,	// (0x00052b50) main_mup_pane_g11

0x7fef,	// (0x00052b64) main_mup_pane_g12_ParamLimits

0x7fef,	// (0x00052b64) main_mup_pane_g12

0x7ffb,	// (0x00052b70) main_mup_pane_g13_ParamLimits

0x7ffb,	// (0x00052b70) main_mup_pane_g13

0x000c,

0xf416,	// (0x00059f8b) main_mup_pane_g_ParamLimits

0xf416,	// (0x00059f8b) main_mup_pane_g

0x800f,	// (0x00052b84) main_mup_pane_t1_ParamLimits

0x800f,	// (0x00052b84) main_mup_pane_t1

0x802c,	// (0x00052ba1) main_mup_pane_t2_ParamLimits

0x802c,	// (0x00052ba1) main_mup_pane_t2

0x8046,	// (0x00052bbb) main_mup_pane_t3_ParamLimits

0x8046,	// (0x00052bbb) main_mup_pane_t3

0x8060,	// (0x00052bd5) main_mup_pane_t4_ParamLimits

0x8060,	// (0x00052bd5) main_mup_pane_t4

0x8072,	// (0x00052be7) main_mup_pane_t5_ParamLimits

0x8072,	// (0x00052be7) main_mup_pane_t5

0x8084,	// (0x00052bf9) main_mup_pane_t6_ParamLimits

0x8084,	// (0x00052bf9) main_mup_pane_t6

0x0005,

0xf431,	// (0x00059fa6) main_mup_pane_t_ParamLimits

0xf431,	// (0x00059fa6) main_mup_pane_t

0x809a,	// (0x00052c0f) mup_progress_pane_ParamLimits

0x809a,	// (0x00052c0f) mup_progress_pane

0x80a6,	// (0x00052c1b) mup_visualizer_pane_ParamLimits

0x80a6,	// (0x00052c1b) mup_visualizer_pane

0x80d4,	// (0x00052c49) mup_volume_pane_ParamLimits

0x80d4,	// (0x00052c49) mup_volume_pane

0x3d22,	// (0x0004e897) mup_visualizer_pane_g1_ParamLimits

0x3d22,	// (0x0004e897) mup_visualizer_pane_g1

0x3d22,	// (0x0004e897) mup_visualizer_pane_g2_ParamLimits

0x3d22,	// (0x0004e897) mup_visualizer_pane_g2

0x3e4c,	// (0x0004e9c1) mup_visualizer_pane_g3_ParamLimits

0x3e4c,	// (0x0004e9c1) mup_visualizer_pane_g3

0x0002,

0xf43e,	// (0x00059fb3) mup_visualizer_pane_g_ParamLimits

0xf43e,	// (0x00059fb3) mup_visualizer_pane_g

0x33f9,	// (0x0004df6e) mup_volume_pane_g1

0x4068,	// (0x0004ebdd) mup_volume_pane_g2

0x0001,

0xf445,	// (0x00059fba) mup_volume_pane_g

0x33f9,	// (0x0004df6e) mup_progress_pane_g1

0x4071,	// (0x0004ebe6) mup_progress_pane_g2

0x407a,	// (0x0004ebef) mup_progress_pane_g3

0x0002,

0xf44a,	// (0x00059fbf) mup_progress_pane_g

0x3080,	// (0x0004dbf5) bg_popup_window_pane_cp05

0x4083,	// (0x0004ebf8) heading_pane_cp02_ParamLimits

0x4083,	// (0x0004ebf8) heading_pane_cp02

0x409d,	// (0x0004ec12) list_popup_blid_pane

0x40a5,	// (0x0004ec1a) list_blid_sat_info_pane_ParamLimits

0x40a5,	// (0x0004ec1a) list_blid_sat_info_pane

0x40b8,	// (0x0004ec2d) list_blid_sat_info_pane_g1

0x40c0,	// (0x0004ec35) list_blid_sat_info_pane_t1

0x81c7,	// (0x00052d3c) mup_equalizer_pane_ParamLimits

0x81c7,	// (0x00052d3c) mup_equalizer_pane

0x81e0,	// (0x00052d55) mup_equalizer_pane_cp1_ParamLimits

0x81e0,	// (0x00052d55) mup_equalizer_pane_cp1

0x81f9,	// (0x00052d6e) mup_equalizer_pane_cp2_ParamLimits

0x81f9,	// (0x00052d6e) mup_equalizer_pane_cp2

0x8212,	// (0x00052d87) mup_equalizer_pane_cp3_ParamLimits

0x8212,	// (0x00052d87) mup_equalizer_pane_cp3

0x822b,	// (0x00052da0) mup_equalizer_pane_cp4_ParamLimits

0x822b,	// (0x00052da0) mup_equalizer_pane_cp4

0x8244,	// (0x00052db9) mup_equalizer_pane_cp5

0x8256,	// (0x00052dcb) mup_equalizer_pane_cp6

0x8268,	// (0x00052ddd) mup_equalizer_pane_cp7

0xe1ff,	// (0x00058d74) bg_popup_call_poc_act_pane_g9

0xe207,	// (0x00058d7c) bg_popup_call_poc_act_pane_g10

0xe20f,	// (0x00058d84) bg_popup_call_poc_act_pane_g11

0x000a,

0x32db,	// (0x0004de50) mup_scale_pane

0x33f9,	// (0x0004df6e) mup_scale_pane_g1

0x40ce,	// (0x0004ec43) mup_scale_pane_g2

0x0006,

0xf466,	// (0x00059fdb) mup_scale_pane_g

0x40f2,	// (0x0004ec67) msg_data_pane

0x40fa,	// (0x0004ec6f) scroll_pane_cp017

0x828c,	// (0x00052e01) bg_list_pane_cp04_ParamLimits

0x828c,	// (0x00052e01) bg_list_pane_cp04

0x4102,	// (0x0004ec77) msg_data_pane_g1

0x7c72,	// (0x000527e7) msg_data_pane_g2

0x7c7a,	// (0x000527ef) msg_data_pane_g3

0x82ac,	// (0x00052e21) msg_data_pane_g4

0x7c8a,	// (0x000527ff) msg_data_pane_g5

0x7ec0,	// (0x00052a35) msg_data_pane_g6

0x82b4,	// (0x00052e29) msg_data_pane_g7

0x0006,

0xf475,	// (0x00059fea) msg_data_pane_g

0x82bc,	// (0x00052e31) msg_text_pane_ParamLimits

0x82bc,	// (0x00052e31) msg_text_pane

0x82e8,	// (0x00052e5d) qrid_highlight_pane_cp011_ParamLimits

0x82e8,	// (0x00052e5d) qrid_highlight_pane_cp011

0x3080,	// (0x0004dbf5) msg_body_pane

0x3080,	// (0x0004dbf5) msg_header_pane

0x4113,	// (0x0004ec88) input_focus_pane_cp07

0x830a,	// (0x00052e7f) msg_header_pane_t1_ParamLimits

0x830a,	// (0x00052e7f) msg_header_pane_t1

0x072e,	// (0x0004b2a3) msg_header_pane_t2_ParamLimits

0x072e,	// (0x0004b2a3) msg_header_pane_t2

0x0001,

0xf489,	// (0x00059ffe) msg_header_pane_t_ParamLimits

0xf489,	// (0x00059ffe) msg_header_pane_t

0x4128,	// (0x0004ec9d) msg_body_pane_g1

0x831c,	// (0x00052e91) msg_body_pane_t1_ParamLimits

0x831c,	// (0x00052e91) msg_body_pane_t1

0x0740,	// (0x0004b2b5) msg_body_pane_t2_ParamLimits

0x0740,	// (0x0004b2b5) msg_body_pane_t2

0x0752,	// (0x0004b2c7) msg_body_pane_t3_ParamLimits

0x0752,	// (0x0004b2c7) msg_body_pane_t3

0x0002,

0xf48e,	// (0x0005a003) msg_body_pane_t_ParamLimits

0xf48e,	// (0x0005a003) msg_body_pane_t

0x8395,	// (0x00052f0a) main_viewer_pane_g1_ParamLimits

0x8395,	// (0x00052f0a) main_viewer_pane_g1

0x83a1,	// (0x00052f16) main_viewer_pane_g2_ParamLimits

0x83a1,	// (0x00052f16) main_viewer_pane_g2

0x83ad,	// (0x00052f22) main_viewer_pane_g3_ParamLimits

0x83ad,	// (0x00052f22) main_viewer_pane_g3

0x83bc,	// (0x00052f31) main_viewer_pane_g4_ParamLimits

0x83bc,	// (0x00052f31) main_viewer_pane_g4

0x83cb,	// (0x00052f40) main_viewer_pane_g5_ParamLimits

0x83cb,	// (0x00052f40) main_viewer_pane_g5

0x83cb,	// (0x00052f40) main_viewer_pane_g7_ParamLimits

0x83cb,	// (0x00052f40) main_viewer_pane_g7

0x83dd,	// (0x00052f52) main_viewer_pane_g8_ParamLimits

0x83dd,	// (0x00052f52) main_viewer_pane_g8

0x0007,

0xf49e,	// (0x0005a013) main_viewer_pane_g_ParamLimits

0xf49e,	// (0x0005a013) main_viewer_pane_g

0x4130,	// (0x0004eca5) viewer_content_pane_ParamLimits

0x4130,	// (0x0004eca5) viewer_content_pane

0x840d,	// (0x00052f82) main_postcard_pane_g1_ParamLimits

0x840d,	// (0x00052f82) main_postcard_pane_g1

0x8419,	// (0x00052f8e) main_postcard_pane_g2_ParamLimits

0x8419,	// (0x00052f8e) main_postcard_pane_g2

0x8425,	// (0x00052f9a) main_postcard_pane_g3_ParamLimits

0x8425,	// (0x00052f9a) main_postcard_pane_g3

0x0005,

0xf4af,	// (0x0005a024) main_postcard_pane_g_ParamLimits

0xf4af,	// (0x0005a024) main_postcard_pane_g

0x8431,	// (0x00052fa6) main_postcard_pane_g4

0xe42b,	// (0x00058fa0) smil_status_volume_pane_g2

0x8455,	// (0x00052fca) postcard_pane_ParamLimits

0x8455,	// (0x00052fca) postcard_pane

0x3d22,	// (0x0004e897) postcard_pane_g1_ParamLimits

0x3d22,	// (0x0004e897) postcard_pane_g1

0x8485,	// (0x00052ffa) postcard_pane_g2_ParamLimits

0x8485,	// (0x00052ffa) postcard_pane_g2

0x8491,	// (0x00053006) postcard_pane_g3_ParamLimits

0x8491,	// (0x00053006) postcard_pane_g3

0x414c,	// (0x0004ecc1) postcard_pane_g4_ParamLimits

0x414c,	// (0x0004ecc1) postcard_pane_g4

0x849d,	// (0x00053012) postcard_pane_g5_ParamLimits

0x849d,	// (0x00053012) postcard_pane_g5

0x84a9,	// (0x0005301e) postcard_pane_g6_ParamLimits

0x84a9,	// (0x0005301e) postcard_pane_g6

0x413e,	// (0x0004ecb3) postcard_pane_g7_ParamLimits

0x413e,	// (0x0004ecb3) postcard_pane_g7

0x0006,

0xf4bc,	// (0x0005a031) postcard_pane_g_ParamLimits

0xf4bc,	// (0x0005a031) postcard_pane_g

0x84b5,	// (0x0005302a) main_mp2_pane_g1_ParamLimits

0x84b5,	// (0x0005302a) main_mp2_pane_g1

0x84c1,	// (0x00053036) main_mp2_pane_g2_ParamLimits

0x84c1,	// (0x00053036) main_mp2_pane_g2

0x84cd,	// (0x00053042) main_mp2_pane_g3_ParamLimits

0x84cd,	// (0x00053042) main_mp2_pane_g3

0x0002,

0xf4cb,	// (0x0005a040) main_mp2_pane_g_ParamLimits

0xf4cb,	// (0x0005a040) main_mp2_pane_g

0x84d9,	// (0x0005304e) main_mp2_pane_t1_ParamLimits

0x84d9,	// (0x0005304e) main_mp2_pane_t1

0x84ee,	// (0x00053063) main_mp2_pane_t2_ParamLimits

0x84ee,	// (0x00053063) main_mp2_pane_t2

0x8500,	// (0x00053075) main_mp2_pane_t3_ParamLimits

0x8500,	// (0x00053075) main_mp2_pane_t3

0x0002,

0xf4d2,	// (0x0005a047) main_mp2_pane_t_ParamLimits

0xf4d2,	// (0x0005a047) main_mp2_pane_t

0x415a,	// (0x0004eccf) pec_content_pane_ParamLimits

0x415a,	// (0x0004eccf) pec_content_pane

0x377c,	// (0x0004e2f1) scroll_pane_cp015

0x416c,	// (0x0004ece1) pec_attribute_pane_ParamLimits

0x416c,	// (0x0004ece1) pec_attribute_pane

0x8512,	// (0x00053087) pec_content_pane_g1_ParamLimits

0x8512,	// (0x00053087) pec_content_pane_g1

0x417c,	// (0x0004ecf1) pec_content_pane_t1_ParamLimits

0x417c,	// (0x0004ecf1) pec_content_pane_t1

0x418e,	// (0x0004ed03) pec_content_pane_t2_ParamLimits

0x418e,	// (0x0004ed03) pec_content_pane_t2

0x0001,

0xf4d9,	// (0x0005a04e) pec_content_pane_t_ParamLimits

0xf4d9,	// (0x0005a04e) pec_content_pane_t

0x851e,	// (0x00053093) list_single_graphic_pane_cp01_ParamLimits

0x851e,	// (0x00053093) list_single_graphic_pane_cp01

0x32db,	// (0x0004de50) bg_popup_sub_pane_cp04

0x41a0,	// (0x0004ed15) popup_mup_playback_window_g1

0x41ac,	// (0x0004ed21) popup_mup_playback_window_t1

0x41c1,	// (0x0004ed36) popup_mup_playback_window_t2

0x0001,

0xf4de,	// (0x0005a053) popup_mup_playback_window_t

0x41f8,	// (0x0004ed6d) main_image_pane_g1_ParamLimits

0x41f8,	// (0x0004ed6d) main_image_pane_g1

0x423b,	// (0x0004edb0) scroll_pane_cp018_ParamLimits

0x423b,	// (0x0004edb0) scroll_pane_cp018

0x4253,	// (0x0004edc8) scroll_pane_cp016_ParamLimits

0x4253,	// (0x0004edc8) scroll_pane_cp016

0x85a3,	// (0x00053118) smil2_image_pane_ParamLimits

0x85a3,	// (0x00053118) smil2_image_pane

0x85cb,	// (0x00053140) smil2_root_pane_ParamLimits

0x85cb,	// (0x00053140) smil2_root_pane

0x85f7,	// (0x0005316c) smil2_text_pane_ParamLimits

0x85f7,	// (0x0005316c) smil2_text_pane

0x3080,	// (0x0004dbf5) bg_list_pane_cp06

0x4287,	// (0x0004edfc) grid_radio_pane

0x3080,	// (0x0004dbf5) bg_popup_window_pane_cp06

0x428f,	// (0x0004ee04) main_fmradio_pane_t1

0x3c8b,	// (0x0004e800) heading_pane_cp04

0x429d,	// (0x0004ee12) main_fmradio_pane_t2

0xe257,	// (0x00058dcc) popup_cale_lunar_info_window_g1

0x42ab,	// (0x0004ee20) main_fmradio_pane_t3

0xe25f,	// (0x00058dd4) popup_cale_lunar_info_window_g2

0x42b9,	// (0x0004ee2e) main_fmradio_pane_t4

0x0001,

0x42c7,	// (0x0004ee3c) main_fmradio_pane_t5

0x0004,

0xf5cc,	// (0x0005a141) popup_cale_lunar_info_window_g

0xf4f3,	// (0x0005a068) main_fmradio_pane_t

0x42d5,	// (0x0004ee4a) wait_bar_pane_cp03

0x3698,	// (0x0004e20d) cell_fmradio_pane_ParamLimits

0x3698,	// (0x0004e20d) cell_fmradio_pane

0x413e,	// (0x0004ecb3) cell_fmradio_pane_g1_ParamLimits

0x413e,	// (0x0004ecb3) cell_fmradio_pane_g1

0x3080,	// (0x0004dbf5) grid_highlight_pane_cp011

0x42dd,	// (0x0004ee52) poc_content_pane_ParamLimits

0x42dd,	// (0x0004ee52) poc_content_pane

0x42f0,	// (0x0004ee65) scroll_pane_cp019

0x862b,	// (0x000531a0) popup_call_poc_act_window_ParamLimits

0x862b,	// (0x000531a0) popup_call_poc_act_window

0x8638,	// (0x000531ad) popup_call_poc_inact_window_ParamLimits

0x8638,	// (0x000531ad) popup_call_poc_inact_window

0xf590,	// (0x0005a105) bg_popup_call_poc_act_pane_g

0xe217,	// (0x00058d8c) bg_popup_call_poc_inact_pane_g1

0xe21f,	// (0x00058d94) bg_popup_call_poc_inact_pane_g2

0x42f8,	// (0x0004ee6d) popup_call_poc_act_window_g2

0xe227,	// (0x00058d9c) bg_popup_call_poc_inact_pane_g3

0xe1a7,	// (0x00058d1c) bg_popup_call_poc_inact_pane_g4

0xe22f,	// (0x00058da4) bg_popup_call_poc_inact_pane_g5

0x4300,	// (0x0004ee75) popup_call_poc_act_window_t1_ParamLimits

0x4300,	// (0x0004ee75) popup_call_poc_act_window_t1

0x4328,	// (0x0004ee9d) popup_call_poc_act_window_t2_ParamLimits

0x4328,	// (0x0004ee9d) popup_call_poc_act_window_t2

0x4350,	// (0x0004eec5) popup_call_poc_act_window_t3_ParamLimits

0x4350,	// (0x0004eec5) popup_call_poc_act_window_t3

0x4378,	// (0x0004eeed) popup_call_poc_act_window_t4_ParamLimits

0x4378,	// (0x0004eeed) popup_call_poc_act_window_t4

0x0003,

0xf4fe,	// (0x0005a073) popup_call_poc_act_window_t_ParamLimits

0xf4fe,	// (0x0005a073) popup_call_poc_act_window_t

0xe237,	// (0x00058dac) bg_popup_call_poc_inact_pane_g6

0xe23f,	// (0x00058db4) bg_popup_call_poc_inact_pane_g7

0xe247,	// (0x00058dbc) bg_popup_call_poc_inact_pane_g8

0x438a,	// (0x0004eeff) popup_call_poc_inact_window_g2

0xe24f,	// (0x00058dc4) bg_popup_call_poc_inact_pane_g9

0x0008,

0xf5a7,	// (0x0005a11c) bg_popup_call_poc_inact_pane_g

0x4392,	// (0x0004ef07) popup_call_poc_inact_window_t1_ParamLimits

0x4392,	// (0x0004ef07) popup_call_poc_inact_window_t1

0x43a7,	// (0x0004ef1c) popup_call_poc_inact_window_t2_ParamLimits

0x43a7,	// (0x0004ef1c) popup_call_poc_inact_window_t2

0x43bc,	// (0x0004ef31) popup_call_poc_inact_window_t3_ParamLimits

0x43bc,	// (0x0004ef31) popup_call_poc_inact_window_t3

0x0002,

0xf507,	// (0x0005a07c) popup_call_poc_inact_window_t_ParamLimits

0xf507,	// (0x0005a07c) popup_call_poc_inact_window_t

0xe39e,	// (0x00058f13) context_pane_ParamLimits

0x8b7d,	// (0x000536f2) signal_pane_ParamLimits

0x3573,	// (0x0004e0e8) main_call2_pane

0x8aff,	// (0x00053674) popup_phob_thumbnail2_window_ParamLimits

0x8aff,	// (0x00053674) popup_phob_thumbnail2_window

0x8347,	// (0x00052ebc) aid_hotspot_pointer_arrow_pane

0x834f,	// (0x00052ec4) aid_hotspot_pointer_hand_pane

0x88e7,	// (0x0005345c) phob_pre_status_pane_g5

0x68ca,	// (0x0005143f) cams_zoom_pane_ParamLimits

0x68d6,	// (0x0005144b) image_vga_pane_ParamLimits

0x68e3,	// (0x00051458) main_camera_pane_g1_ParamLimits

0x68ef,	// (0x00051464) main_camera_pane_g2_ParamLimits

0x68fb,	// (0x00051470) main_camera_pane_g3_ParamLimits

0x6907,	// (0x0005147c) main_camera_pane_g4_ParamLimits

0x6913,	// (0x00051488) main_camera_pane_g5_ParamLimits

0x691f,	// (0x00051494) main_camera_pane_g6_ParamLimits

0x692b,	// (0x000514a0) main_camera_pane_g7_ParamLimits

0xf206,	// (0x00059d7b) main_camera_pane_g_ParamLimits

0x6937,	// (0x000514ac) main_camera_pane_t1_ParamLimits

0x6949,	// (0x000514be) main_camera_pane_t2_ParamLimits

0xf217,	// (0x00059d8c) main_camera_pane_t_ParamLimits

0x32db,	// (0x0004de50) bg_popup_preview_window_pane_cp01_ParamLimits

0x32db,	// (0x0004de50) bg_popup_preview_window_pane_cp01

0x43d1,	// (0x0004ef46) popup_phob_thumbnail2_window_g1_ParamLimits

0x43d1,	// (0x0004ef46) popup_phob_thumbnail2_window_g1

0x3080,	// (0x0004dbf5) call2_cli_visual_pane

0x8654,	// (0x000531c9) popup_call2_audio_conf_window_ParamLimits

0x8654,	// (0x000531c9) popup_call2_audio_conf_window

0x8667,	// (0x000531dc) popup_call2_audio_first_window_ParamLimits

0x8667,	// (0x000531dc) popup_call2_audio_first_window

0x86e3,	// (0x00053258) popup_call2_audio_in_window_ParamLimits

0x86e3,	// (0x00053258) popup_call2_audio_in_window

0x8713,	// (0x00053288) popup_call2_audio_out_window_ParamLimits

0x8713,	// (0x00053288) popup_call2_audio_out_window

0x875f,	// (0x000532d4) popup_call2_audio_second_window_ParamLimits

0x875f,	// (0x000532d4) popup_call2_audio_second_window

0x87ab,	// (0x00053320) popup_call2_audio_wait_window_ParamLimits

0x87ab,	// (0x00053320) popup_call2_audio_wait_window

0x3080,	// (0x0004dbf5) bg_popup_call2_act_pane_cp03

0x32bd,	// (0x0004de32) list_conf_pane_cp

0x43dd,	// (0x0004ef52) popup_call2_audio_conf_window_t1

0x3ce8,	// (0x0004e85d) list_single_graphic_popup_conf2_pane_ParamLimits

0x3ce8,	// (0x0004e85d) list_single_graphic_popup_conf2_pane

0x3cfb,	// (0x0004e870) list_highlight_pane_cp04

0x43eb,	// (0x0004ef60) list_single_graphic_popup_conf2_pane_g1

0x3d0c,	// (0x0004e881) list_single_graphic_popup_conf2_pane_g2

0x0001,

0xf50e,	// (0x0005a083) list_single_graphic_popup_conf2_pane_g

0x43f3,	// (0x0004ef68) list_single_graphic_popup_conf2_pane_t1

0x4401,	// (0x0004ef76) bg_popup_call2_act_pane_cp01_ParamLimits

0x4401,	// (0x0004ef76) bg_popup_call2_act_pane_cp01

0x448b,	// (0x0004f000) call_type_pane_cp05_ParamLimits

0x448b,	// (0x0004f000) call_type_pane_cp05

0x44df,	// (0x0004f054) popup_call2_audio_second_window_g1_ParamLimits

0x44df,	// (0x0004f054) popup_call2_audio_second_window_g1

0x4533,	// (0x0004f0a8) popup_call2_audio_second_window_g2_ParamLimits

0x4533,	// (0x0004f0a8) popup_call2_audio_second_window_g2

0x0002,

0xf513,	// (0x0005a088) popup_call2_audio_second_window_g_ParamLimits

0xf513,	// (0x0005a088) popup_call2_audio_second_window_g

0x4598,	// (0x0004f10d) popup_call2_audio_second_window_t1_ParamLimits

0x4598,	// (0x0004f10d) popup_call2_audio_second_window_t1

0x4653,	// (0x0004f1c8) popup_call2_audio_second_window_t2_ParamLimits

0x4653,	// (0x0004f1c8) popup_call2_audio_second_window_t2

0x46a6,	// (0x0004f21b) popup_call2_audio_second_window_t3_ParamLimits

0x46a6,	// (0x0004f21b) popup_call2_audio_second_window_t3

0x0003,

0xf51a,	// (0x0005a08f) popup_call2_audio_second_window_t_ParamLimits

0xf51a,	// (0x0005a08f) popup_call2_audio_second_window_t

0x3080,	// (0x0004dbf5) bg_popup_call2_in_pane_cp02

0x308a,	// (0x0004dbff) call_type_pane_cp04

0x3092,	// (0x0004dc07) popup_call2_audio_wait_window_g1

0x309a,	// (0x0004dc0f) popup_call2_audio_wait_window_g2

0x0001,

0xf0f5,	// (0x00059c6a) popup_call2_audio_wait_window_g

0x30a2,	// (0x0004dc17) popup_call2_audio_wait_window_t3

0x4799,	// (0x0004f30e) bg_popup_call2_act_pane_ParamLimits

0x4799,	// (0x0004f30e) bg_popup_call2_act_pane

0x4859,	// (0x0004f3ce) call_type_pane_cp03_ParamLimits

0x4859,	// (0x0004f3ce) call_type_pane_cp03

0x48bd,	// (0x0004f432) popup_call2_audio_first_window_g1_ParamLimits

0x48bd,	// (0x0004f432) popup_call2_audio_first_window_g1

0x492d,	// (0x0004f4a2) popup_call2_audio_first_window_g2_ParamLimits

0x492d,	// (0x0004f4a2) popup_call2_audio_first_window_g2

0x3d22,	// (0x0004e897) popup_call2_audio_first_window_g3_ParamLimits

0x3d22,	// (0x0004e897) popup_call2_audio_first_window_g3

0x0004,

0xf523,	// (0x0005a098) popup_call2_audio_first_window_g_ParamLimits

0xf523,	// (0x0005a098) popup_call2_audio_first_window_g

0x4a0b,	// (0x0004f580) popup_call2_audio_first_window_t1_ParamLimits

0x4a0b,	// (0x0004f580) popup_call2_audio_first_window_t1

0x4b28,	// (0x0004f69d) popup_call2_audio_first_window_t4_ParamLimits

0x4b28,	// (0x0004f69d) popup_call2_audio_first_window_t4

0xdbba,	// (0x0005872f) popup_call2_audio_first_window_t5_ParamLimits

0xdbba,	// (0x0005872f) popup_call2_audio_first_window_t5

0x0003,

0xf52e,	// (0x0005a0a3) popup_call2_audio_first_window_t_ParamLimits

0xf52e,	// (0x0005a0a3) popup_call2_audio_first_window_t

0x32d3,	// (0x0004de48) bg_popup_call2_act_pane_g1

0xe267,	// (0x00058ddc) popup_cale_lunar_info_window_t1

0xe275,	// (0x00058dea) popup_cale_lunar_info_window_t2

0xe283,	// (0x00058df8) popup_cale_lunar_info_window_t3

0x3080,	// (0x0004dbf5) bg_popup_call2_bubble_pane

0xdcbb,	// (0x00058830) bg_popup_call2_in_pane_cp01_ParamLimits

0xdcbb,	// (0x00058830) bg_popup_call2_in_pane_cp01

0x2c53,	// (0x0004d7c8) call_type_pane_cp02

0xdd03,	// (0x00058878) popup_call2_audio_out_window_g1_ParamLimits

0xdd03,	// (0x00058878) popup_call2_audio_out_window_g1

0xdd2f,	// (0x000588a4) popup_call2_audio_out_window_g2_ParamLimits

0xdd2f,	// (0x000588a4) popup_call2_audio_out_window_g2

0xdd57,	// (0x000588cc) popup_call2_audio_out_window_g3_ParamLimits

0xdd57,	// (0x000588cc) popup_call2_audio_out_window_g3

0x0003,

0xf537,	// (0x0005a0ac) popup_call2_audio_out_window_g_ParamLimits

0xf537,	// (0x0005a0ac) popup_call2_audio_out_window_g

0xdd92,	// (0x00058907) popup_call2_audio_out_window_t1_ParamLimits

0xdd92,	// (0x00058907) popup_call2_audio_out_window_t1

0xddf1,	// (0x00058966) popup_call2_audio_out_window_t2_ParamLimits

0xddf1,	// (0x00058966) popup_call2_audio_out_window_t2

0xde45,	// (0x000589ba) popup_call2_audio_out_window_t3_ParamLimits

0xde45,	// (0x000589ba) popup_call2_audio_out_window_t3

0xde5b,	// (0x000589d0) popup_call2_audio_out_window_t4_ParamLimits

0xde5b,	// (0x000589d0) popup_call2_audio_out_window_t4

0xde71,	// (0x000589e6) popup_call2_audio_out_window_t5_ParamLimits

0xde71,	// (0x000589e6) popup_call2_audio_out_window_t5

0x0005,

0xf540,	// (0x0005a0b5) popup_call2_audio_out_window_t_ParamLimits

0xf540,	// (0x0005a0b5) popup_call2_audio_out_window_t

0xded5,	// (0x00058a4a) bg_popup_call2_in_pane_ParamLimits

0xded5,	// (0x00058a4a) bg_popup_call2_in_pane

0xdf31,	// (0x00058aa6) popup_call2_audio_in_window_g1_ParamLimits

0xdf31,	// (0x00058aa6) popup_call2_audio_in_window_g1

0xdf69,	// (0x00058ade) popup_call2_audio_in_window_g2_ParamLimits

0xdf69,	// (0x00058ade) popup_call2_audio_in_window_g2

0xdfa1,	// (0x00058b16) popup_call2_audio_in_window_g3_ParamLimits

0xdfa1,	// (0x00058b16) popup_call2_audio_in_window_g3

0x0003,

0xf54d,	// (0x0005a0c2) popup_call2_audio_in_window_g_ParamLimits

0xf54d,	// (0x0005a0c2) popup_call2_audio_in_window_g

0xdff9,	// (0x00058b6e) popup_call2_audio_in_window_t1_ParamLimits

0xdff9,	// (0x00058b6e) popup_call2_audio_in_window_t1

0xe079,	// (0x00058bee) popup_call2_audio_in_window_t2_ParamLimits

0xe079,	// (0x00058bee) popup_call2_audio_in_window_t2

0xe0f9,	// (0x00058c6e) popup_call2_audio_in_window_t3_ParamLimits

0xe0f9,	// (0x00058c6e) popup_call2_audio_in_window_t3

0xe113,	// (0x00058c88) popup_call2_audio_in_window_t4_ParamLimits

0xe113,	// (0x00058c88) popup_call2_audio_in_window_t4

0xe125,	// (0x00058c9a) popup_call2_audio_in_window_t5_ParamLimits

0xe125,	// (0x00058c9a) popup_call2_audio_in_window_t5

0xe13a,	// (0x00058caf) popup_call2_audio_in_window_t6_ParamLimits

0xe13a,	// (0x00058caf) popup_call2_audio_in_window_t6

0x0005,

0xf556,	// (0x0005a0cb) popup_call2_audio_in_window_t_ParamLimits

0xf556,	// (0x0005a0cb) popup_call2_audio_in_window_t

0x32d3,	// (0x0004de48) bg_popup_call2_in_pane_g1

0xe291,	// (0x00058e06) popup_cale_lunar_info_window_t4

0x0003,

0xf5d1,	// (0x0005a146) popup_cale_lunar_info_window_t

0x32db,	// (0x0004de50) bg_popup_call2_rect_pane_ParamLimits

0x32db,	// (0x0004de50) bg_popup_call2_rect_pane

0x3080,	// (0x0004dbf5) call2_cli_visual_graphic_pane

0x3080,	// (0x0004dbf5) call2_cli_visual_text_pane

0x8c02,	// (0x00053777) smil_status_volume_pane_g3

0x0002,

0x33f9,	// (0x0004df6e) call2_cli_visual_graphic_pane_g1

0x33f9,	// (0x0004df6e) call2_cli_visual_graphic_pane_g2

0x33f9,	// (0x0004df6e) call2_cli_visual_graphic_pane_g3

0x0002,

0xf563,	// (0x0005a0d8) call2_cli_visual_graphic_pane_g

0xe14f,	// (0x00058cc4) bg_popup_call2_rect_pane_g1

0x3497,	// (0x0004e00c) bg_popup_call2_rect_pane_g2

0xe157,	// (0x00058ccc) bg_popup_call2_rect_pane_g3

0xe15f,	// (0x00058cd4) bg_popup_call2_rect_pane_g4

0xe167,	// (0x00058cdc) bg_popup_call2_rect_pane_g5

0xe16f,	// (0x00058ce4) bg_popup_call2_rect_pane_g6

0xe177,	// (0x00058cec) bg_popup_call2_rect_pane_g7

0xe17f,	// (0x00058cf4) bg_popup_call2_rect_pane_g8

0xe187,	// (0x00058cfc) bg_popup_call2_rect_pane_g9

0x0008,

0xf56a,	// (0x0005a0df) bg_popup_call2_rect_pane_g

0xe18f,	// (0x00058d04) bg_popup_call2_bubble_pane_g1

0xe197,	// (0x00058d0c) bg_popup_call2_bubble_pane_g2

0xe19f,	// (0x00058d14) bg_popup_call2_bubble_pane_g3

0xe1a7,	// (0x00058d1c) bg_popup_call2_bubble_pane_g4

0xe1af,	// (0x00058d24) bg_popup_call2_bubble_pane_g5

0xe1b7,	// (0x00058d2c) bg_popup_call2_bubble_pane_g6

0xe1bf,	// (0x00058d34) bg_popup_call2_bubble_pane_g7

0xe1c7,	// (0x00058d3c) bg_popup_call2_bubble_pane_g8

0xe1cf,	// (0x00058d44) bg_popup_call2_bubble_pane_g9

0x0008,

0xf57d,	// (0x0005a0f2) bg_popup_call2_bubble_pane_g

0x62ce,	// (0x00050e43) aid_cale_week_size_cell_pane

0x695b,	// (0x000514d0) aid_cams_cif_uncrop_pane_ParamLimits

0x695b,	// (0x000514d0) aid_cams_cif_uncrop_pane

0x6ab3,	// (0x00051628) aid_cams_size_cell_ParamLimits

0x6ab3,	// (0x00051628) aid_cams_size_cell

0x6abf,	// (0x00051634) grid_cams_pane_ParamLimits

0x6acb,	// (0x00051640) linegrid_cams_pane_ParamLimits

0x6bda,	// (0x0005174f) call_video_pane_t1

0x6bf7,	// (0x0005176c) call_video_pane_t2

0x0001,

0xf26a,	// (0x00059ddf) call_video_pane_t

0x6fd9,	// (0x00051b4e) aid_cale_month_size_cell_pane_ParamLimits

0x6fd9,	// (0x00051b4e) aid_cale_month_size_cell_pane

0xf61a,	// (0x0005a18f) smil_status_volume_pane_g

0x8c0f,	// (0x00053784) volume_smil_pane_ParamLimits

0x5b31,	// (0x000506a6) aid_popup2_width_pane

0x61db,	// (0x00050d50) cell_qdial_pane_g4_ParamLimits

0x61db,	// (0x00050d50) cell_qdial_pane_g4

0x7db6,	// (0x0005292b) aid_blid_cardinal_pane_ParamLimits

0x7dc2,	// (0x00052937) aid_blid_destination_pane_ParamLimits

0x7dc2,	// (0x00052937) aid_blid_destination_pane

0x32db,	// (0x0004de50) bg_popup_call_poc_act_pane_ParamLimits

0x32db,	// (0x0004de50) bg_popup_call_poc_act_pane

0x32db,	// (0x0004de50) bg_popup_call_poc_inact_pane_ParamLimits

0x32db,	// (0x0004de50) bg_popup_call_poc_inact_pane

0xe1d7,	// (0x00058d4c) bg_popup_call_poc_act_pane_g1

0xe1df,	// (0x00058d54) bg_popup_call_poc_act_pane_g2

0xe1e7,	// (0x00058d5c) bg_popup_call_poc_act_pane_g3

0xe1a7,	// (0x00058d1c) bg_popup_call_poc_act_pane_g4

0xe1af,	// (0x00058d24) bg_popup_call_poc_act_pane_g5

0xe1ef,	// (0x00058d64) bg_popup_call_poc_act_pane_g6

0xe1bf,	// (0x00058d34) bg_popup_call_poc_act_pane_g7

0xe1f7,	// (0x00058d6c) bg_popup_call_poc_act_pane_g8

0x3080,	// (0x0004dbf5) main_usb_pane

0x8a5e,	// (0x000535d3) popup_cale_lunar_info_window

0x6e7c,	// (0x000519f1) im_reading_pane_t1_ParamLimits

0x36c5,	// (0x0004e23a) list_im_pane_ParamLimits

0x36d6,	// (0x0004e24b) scroll_pane_cp07_ParamLimits

0x3080,	// (0x0004dbf5) grid_highlight_pane_cp012

0x32db,	// (0x0004de50) mup_scale_pane_ParamLimits

0x3d22,	// (0x0004e897) main_usb_pane_g1_ParamLimits

0x3d22,	// (0x0004e897) main_usb_pane_g1

0x880c,	// (0x00053381) main_usb_pane_g2_ParamLimits

0x880c,	// (0x00053381) main_usb_pane_g2

0x0001,

0xf5ba,	// (0x0005a12f) main_usb_pane_g_ParamLimits

0xf5ba,	// (0x0005a12f) main_usb_pane_g

0x8818,	// (0x0005338d) main_usb_pane_t1_ParamLimits

0x8818,	// (0x0005338d) main_usb_pane_t1

0x882a,	// (0x0005339f) main_usb_pane_t2_ParamLimits

0x882a,	// (0x0005339f) main_usb_pane_t2

0x883c,	// (0x000533b1) main_usb_pane_t3_ParamLimits

0x883c,	// (0x000533b1) main_usb_pane_t3

0x884e,	// (0x000533c3) main_usb_pane_t4_ParamLimits

0x884e,	// (0x000533c3) main_usb_pane_t4

0x8860,	// (0x000533d5) main_usb_pane_t5_ParamLimits

0x8860,	// (0x000533d5) main_usb_pane_t5

0x8872,	// (0x000533e7) main_usb_pane_t6_ParamLimits

0x8872,	// (0x000533e7) main_usb_pane_t6

0x0005,

0xf5bf,	// (0x0005a134) main_usb_pane_t_ParamLimits

0x3e43,	// (0x0004e9b8) aid_text_placing

0x7d62,	// (0x000528d7) main_location2_pane_t1_ParamLimits

0x7d78,	// (0x000528ed) main_location2_pane_t2_ParamLimits

0x7d8e,	// (0x00052903) main_location2_pane_t3_ParamLimits

0x7da4,	// (0x00052919) main_location2_pane_t4_ParamLimits

0x7da4,	// (0x00052919) main_location2_pane_t4

0xf3cb,	// (0x00059f40) main_location2_pane_t_ParamLimits

0x3317,	// (0x0004de8c) find_pinb_pane_g2_ParamLimits

0x3317,	// (0x0004de8c) find_pinb_pane_g2

0x0001,

0xf11b,	// (0x00059c90) find_pinb_pane_g_ParamLimits

0xf11b,	// (0x00059c90) find_pinb_pane_g

0x3323,	// (0x0004de98) find_pinb_pane_t1_ParamLimits

0x3335,	// (0x0004deaa) find_pinb_pane_t2_ParamLimits

0xf120,	// (0x00059c95) find_pinb_pane_t_ParamLimits

0x3080,	// (0x0004dbf5) main_call3_pane

0x737d,	// (0x00051ef2) cale_month_day_heading_pane_t1_ParamLimits

0x7403,	// (0x00051f78) cale_month_day_heading_pane_t2_ParamLimits

0x7494,	// (0x00052009) cale_month_day_heading_pane_t3_ParamLimits

0x7525,	// (0x0005209a) cale_month_day_heading_pane_t4_ParamLimits

0x75b6,	// (0x0005212b) cale_month_day_heading_pane_t5_ParamLimits

0x7647,	// (0x000521bc) cale_month_day_heading_pane_t6_ParamLimits

0x76d8,	// (0x0005224d) cale_month_day_heading_pane_t7_ParamLimits

0xf2a2,	// (0x00059e17) cale_month_day_heading_pane_t_ParamLimits

0x79f8,	// (0x0005256d) smil_status_volume_pane

0x846d,	// (0x00052fe2) postcard_address_pane_ParamLimits

0x846d,	// (0x00052fe2) postcard_address_pane

0x8479,	// (0x00052fee) postcard_message_pane_ParamLimits

0x8479,	// (0x00052fee) postcard_message_pane

0x87e8,	// (0x0005335d) call2_cli_visual_pane_t1_ParamLimits

0x87e8,	// (0x0005335d) call2_cli_visual_pane_t1

0x8d60,	// (0x000538d5) postcard_message_pane_t1_ParamLimits

0x8d60,	// (0x000538d5) postcard_message_pane_t1

0x8d49,	// (0x000538be) postcard_address_pane_t1_ParamLimits

0x8d49,	// (0x000538be) postcard_address_pane_t1

0x8d3c,	// (0x000538b1) popup_call3_audio_in_window_ParamLimits

0x8d3c,	// (0x000538b1) popup_call3_audio_in_window

0x8c24,	// (0x00053799) bg_popup_call3_in_pane_ParamLimits

0x8c24,	// (0x00053799) bg_popup_call3_in_pane

0x8c82,	// (0x000537f7) popup_call3_audio_in_window_g1_ParamLimits

0x8c82,	// (0x000537f7) popup_call3_audio_in_window_g1

0x8c9a,	// (0x0005380f) popup_call3_audio_in_window_g2_ParamLimits

0x8c9a,	// (0x0005380f) popup_call3_audio_in_window_g2

0x8cb2,	// (0x00053827) popup_call3_audio_in_window_g3_ParamLimits

0x8cb2,	// (0x00053827) popup_call3_audio_in_window_g3

0x0003,

0xf621,	// (0x0005a196) popup_call3_audio_in_window_g_ParamLimits

0xf621,	// (0x0005a196) popup_call3_audio_in_window_g

0x8cda,	// (0x0005384f) popup_call3_audio_in_window_t1_ParamLimits

0x8cda,	// (0x0005384f) popup_call3_audio_in_window_t1

0x8d02,	// (0x00053877) popup_call3_audio_in_window_t2_ParamLimits

0x8d02,	// (0x00053877) popup_call3_audio_in_window_t2

0x8d2a,	// (0x0005389f) popup_call3_audio_in_window_t3_ParamLimits

0x8d2a,	// (0x0005389f) popup_call3_audio_in_window_t3

0x0002,

0xf62a,	// (0x0005a19f) popup_call3_audio_in_window_t_ParamLimits

0xf62a,	// (0x0005a19f) popup_call3_audio_in_window_t

0x3573,	// (0x0004e0e8) bg_popup_call3_rect_pane

0xe14f,	// (0x00058cc4) bg_popup_call3_rect_pane_g1

0x3497,	// (0x0004e00c) bg_popup_call3_rect_pane_g2

0xe157,	// (0x00058ccc) bg_popup_call3_rect_pane_g3

0xe15f,	// (0x00058cd4) bg_popup_call3_rect_pane_g4

0xe167,	// (0x00058cdc) bg_popup_call3_rect_pane_g5

0xe16f,	// (0x00058ce4) bg_popup_call3_rect_pane_g6

0xe177,	// (0x00058cec) bg_popup_call3_rect_pane_g7

0x80ef,	// (0x00052c64) mup_visualizer_osc_pane

0x4060,	// (0x0004ebd5) mup_visualizer_spec_pane

0x8c44,	// (0x000537b9) call3_video_qcif_pane_ParamLimits

0x8c44,	// (0x000537b9) call3_video_qcif_pane

0x8c54,	// (0x000537c9) call3_video_qcif_uncrop_pane_ParamLimits

0x8c54,	// (0x000537c9) call3_video_qcif_uncrop_pane

0x8c60,	// (0x000537d5) call3_video_subqcif_pane_ParamLimits

0x8c60,	// (0x000537d5) call3_video_subqcif_pane

0x8c72,	// (0x000537e7) call3_video_subqcif_uncrop_pane_ParamLimits

0x8c72,	// (0x000537e7) call3_video_subqcif_uncrop_pane

0x8cca,	// (0x0005383f) popup_call3_audio_in_window_g4_ParamLimits

0x8cca,	// (0x0005383f) popup_call3_audio_in_window_g4

0x8bf1,	// (0x00053766) mup_spec_half_pane

0x8bfa,	// (0x0005376f) mup_spec_half_pane_cp

0xe3fe,	// (0x00058f73) mup_osc_middle_pane

0xe407,	// (0x00058f7c) mup_visualizer_osc_pane_g1

0x8bd2,	// (0x00053747) mup_spec_bar_pane_ParamLimits

0x8bd2,	// (0x00053747) mup_spec_bar_pane

0xe3eb,	// (0x00058f60) mup_spec_bar_pane_g1

0xe3f5,	// (0x00058f6a) mup_spec_bar_pane_g2

0x0001,

0xf615,	// (0x0005a18a) mup_spec_bar_pane_g

0x62ce,	// (0x00050e43) aid_cale_week_size_cell_pane_ParamLimits

0x62e3,	// (0x00050e58) bg_cale_heading_pane_ParamLimits

0x34d5,	// (0x0004e04a) bg_cale_pane_cp01_ParamLimits

0x62fb,	// (0x00050e70) cale_week_corner_pane_ParamLimits

0x6315,	// (0x00050e8a) cale_week_day_heading_pane_ParamLimits

0x632d,	// (0x00050ea2) cale_week_scroll_pane_g1_ParamLimits

0x6340,	// (0x00050eb5) cale_week_scroll_pane_g2_ParamLimits

0x6353,	// (0x00050ec8) cale_week_scroll_pane_g3_ParamLimits

0x6366,	// (0x00050edb) cale_week_scroll_pane_g4_ParamLimits

0x6379,	// (0x00050eee) cale_week_scroll_pane_g5_ParamLimits

0x638c,	// (0x00050f01) cale_week_scroll_pane_g6_ParamLimits

0x639f,	// (0x00050f14) cale_week_scroll_pane_g7_ParamLimits

0x63b2,	// (0x00050f27) cale_week_scroll_pane_g8_ParamLimits

0x63c5,	// (0x00050f3a) cale_week_scroll_pane_g9_ParamLimits

0x63d8,	// (0x00050f4d) cale_week_scroll_pane_g10_ParamLimits

0x63eb,	// (0x00050f60) cale_week_scroll_pane_g11_ParamLimits

0x63fe,	// (0x00050f73) cale_week_scroll_pane_g12_ParamLimits

0x6411,	// (0x00050f86) cale_week_scroll_pane_g13_ParamLimits

0x6424,	// (0x00050f99) cale_week_scroll_pane_g14_ParamLimits

0x6437,	// (0x00050fac) cale_week_scroll_pane_g15_ParamLimits

0xf1ac,	// (0x00059d21) cale_week_scroll_pane_g_ParamLimits

0x645d,	// (0x00050fd2) cale_week_time_pane_ParamLimits

0x6470,	// (0x00050fe5) grid_cale_week_pane_ParamLimits

0x34f2,	// (0x0004e067) listscroll_cale_week_pane_t1

0x3504,	// (0x0004e079) scroll_pane_cp08_ParamLimits

0x702e,	// (0x00051ba3) cale_month_corner_pane_ParamLimits

0x3906,	// (0x0004e47b) cale_month_pane_t1

0x7344,	// (0x00051eb9) cale_month_week_pane_ParamLimits

0x3d22,	// (0x0004e897) popup_call_status_window_g1_ParamLimits

0x7b99,	// (0x0005270e) popup_call_status_window_g2_ParamLimits

0x7ba5,	// (0x0005271a) popup_call_status_window_g3_ParamLimits

0xf352,	// (0x00059ec7) popup_call_status_window_g_ParamLimits

0x3c83,	// (0x0004e7f8) aid_call2_pane

0x82fe,	// (0x00052e73) msg_header_pane_g1

0x846d,	// (0x00052fe2) postcard_address2_pane_ParamLimits

0x846d,	// (0x00052fe2) postcard_address2_pane

0x8479,	// (0x00052fee) postcard_message2_pane_ParamLimits

0x8479,	// (0x00052fee) postcard_message2_pane

0x8b89,	// (0x000536fe) message2_row_pane_ParamLimits

0x8b89,	// (0x000536fe) message2_row_pane

0x8ba1,	// (0x00053716) address2_row_pane_ParamLimits

0x8ba1,	// (0x00053716) address2_row_pane

0xe3b9,	// (0x00058f2e) postcard_message2_row_pane_g1

0xe3c1,	// (0x00058f36) postcard_message2_row_pane_t1

0xe3b9,	// (0x00058f2e) address2_row_pane_g1

0xe3c1,	// (0x00058f36) address2_row_pane_t1

0x3690,	// (0x0004e205) aid_size_cell_vorec

0x3080,	// (0x0004dbf5) main_rss_pane

0x8bb4,	// (0x00053729) rss_list_single_pane_ParamLimits

0x8bb4,	// (0x00053729) rss_list_single_pane

0xe3cf,	// (0x00058f44) rss_list_single_pane_t1

0xe3dd,	// (0x00058f52) rss_list_single_pane_t2

0x0001,

0xf610,	// (0x0005a185) rss_list_single_pane_t

0x3080,	// (0x0004dbf5) main_camera2_pane

0x3080,	// (0x0004dbf5) main_video2_pane

0x8db0,	// (0x00053925) cams_zoom_pane_cp2_ParamLimits

0x8db0,	// (0x00053925) cams_zoom_pane_cp2

0x8dbc,	// (0x00053931) image2_vga_pane_ParamLimits

0x8dbc,	// (0x00053931) image2_vga_pane

0x8dcb,	// (0x00053940) main_camera2_pane_g1_ParamLimits

0x8dcb,	// (0x00053940) main_camera2_pane_g1

0x8dd7,	// (0x0005394c) main_camera2_pane_g2_ParamLimits

0x8dd7,	// (0x0005394c) main_camera2_pane_g2

0x8de3,	// (0x00053958) main_camera2_pane_g3_ParamLimits

0x8de3,	// (0x00053958) main_camera2_pane_g3

0x8def,	// (0x00053964) main_camera2_pane_g4_ParamLimits

0x8def,	// (0x00053964) main_camera2_pane_g4

0x8dfb,	// (0x00053970) main_camera2_pane_g5_ParamLimits

0x8dfb,	// (0x00053970) main_camera2_pane_g5

0x8e07,	// (0x0005397c) main_camera2_pane_g6_ParamLimits

0x8e07,	// (0x0005397c) main_camera2_pane_g6

0x8e13,	// (0x00053988) main_camera2_pane_g7_ParamLimits

0x8e13,	// (0x00053988) main_camera2_pane_g7

0x8e1f,	// (0x00053994) main_camera2_pane_g8_ParamLimits

0x8e1f,	// (0x00053994) main_camera2_pane_g8

0x0008,

0xf631,	// (0x0005a1a6) main_camera2_pane_g_ParamLimits

0xf631,	// (0x0005a1a6) main_camera2_pane_g

0x8e37,	// (0x000539ac) main_camera2_pane_t1_ParamLimits

0x8e37,	// (0x000539ac) main_camera2_pane_t1

0x8e49,	// (0x000539be) main_camera2_pane_t2_ParamLimits

0x8e49,	// (0x000539be) main_camera2_pane_t2

0x8e5b,	// (0x000539d0) main_camera2_pane_t3_ParamLimits

0x8e5b,	// (0x000539d0) main_camera2_pane_t3

0x8e6d,	// (0x000539e2) main_camera2_pane_t4_ParamLimits

0x8e6d,	// (0x000539e2) main_camera2_pane_t4

0x0006,

0xf644,	// (0x0005a1b9) main_camera2_pane_t_ParamLimits

0xf644,	// (0x0005a1b9) main_camera2_pane_t

0x8ec8,	// (0x00053a3d) cams_zoom_pane_cp4_ParamLimits

0x8ec8,	// (0x00053a3d) cams_zoom_pane_cp4

0x8ed8,	// (0x00053a4d) image2_cif_pane_ParamLimits

0x8ed8,	// (0x00053a4d) image2_cif_pane

0x8ee9,	// (0x00053a5e) image2_subqcif_pane_ParamLimits

0x8ee9,	// (0x00053a5e) image2_subqcif_pane

0x8ef6,	// (0x00053a6b) main_video2_pane_g1_ParamLimits

0x8ef6,	// (0x00053a6b) main_video2_pane_g1

0x8f08,	// (0x00053a7d) main_video2_pane_g2_ParamLimits

0x8f08,	// (0x00053a7d) main_video2_pane_g2

0x8f18,	// (0x00053a8d) main_video2_pane_g3_ParamLimits

0x8f18,	// (0x00053a8d) main_video2_pane_g3

0x8f28,	// (0x00053a9d) main_video2_pane_g4_ParamLimits

0x8f28,	// (0x00053a9d) main_video2_pane_g4

0x8f38,	// (0x00053aad) main_video2_pane_g5_ParamLimits

0x8f38,	// (0x00053aad) main_video2_pane_g5

0x8f48,	// (0x00053abd) main_video2_pane_g6_ParamLimits

0x8f48,	// (0x00053abd) main_video2_pane_g6

0x0005,

0xf653,	// (0x0005a1c8) main_video2_pane_g_ParamLimits

0xf653,	// (0x0005a1c8) main_video2_pane_g

0x8f5a,	// (0x00053acf) main_video2_pane_t1_ParamLimits

0x8f5a,	// (0x00053acf) main_video2_pane_t1

0x8f74,	// (0x00053ae9) main_video2_pane_t2_ParamLimits

0x8f74,	// (0x00053ae9) main_video2_pane_t2

0x8f9a,	// (0x00053b0f) main_video2_pane_t3_ParamLimits

0x8f9a,	// (0x00053b0f) main_video2_pane_t3

0x0002,

0xf660,	// (0x0005a1d5) main_video2_pane_t_ParamLimits

0xf660,	// (0x0005a1d5) main_video2_pane_t

0x8921,	// (0x00053496) call_muted_g2

0x0001,

0xf602,	// (0x0005a177) call_muted_g

0x3080,	// (0x0004dbf5) main_mup2_pane

0xe43e,	// (0x00058fb3) main_mup2_pane_g1_ParamLimits

0xe43e,	// (0x00058fb3) main_mup2_pane_g1

0x8fc0,	// (0x00053b35) main_mup2_pane_g2_ParamLimits

0x8fc0,	// (0x00053b35) main_mup2_pane_g2

0x9230,	// (0x00053da5) main_mup_pane_g13_cp1

0x9238,	// (0x00053dad) mup_volume_pane_cp1

0x8fe0,	// (0x00053b55) main_mup2_pane_g4_ParamLimits

0x8fe0,	// (0x00053b55) main_mup2_pane_g4

0x8ff1,	// (0x00053b66) main_mup2_pane_g5_ParamLimits

0x8ff1,	// (0x00053b66) main_mup2_pane_g5

0x9002,	// (0x00053b77) main_mup2_pane_g6_ParamLimits

0x9002,	// (0x00053b77) main_mup2_pane_g6

0x9013,	// (0x00053b88) main_mup2_pane_g7_ParamLimits

0x9013,	// (0x00053b88) main_mup2_pane_g7

0x0006,

0xf667,	// (0x0005a1dc) main_mup2_pane_g_ParamLimits

0xf667,	// (0x0005a1dc) main_mup2_pane_g

0x902f,	// (0x00053ba4) main_mup2_pane_t1_ParamLimits

0x902f,	// (0x00053ba4) main_mup2_pane_t1

0x9046,	// (0x00053bbb) main_mup2_pane_t2_ParamLimits

0x9046,	// (0x00053bbb) main_mup2_pane_t2

0x905d,	// (0x00053bd2) main_mup2_pane_t3_ParamLimits

0x905d,	// (0x00053bd2) main_mup2_pane_t3

0x9074,	// (0x00053be9) main_mup2_pane_t4_ParamLimits

0x9074,	// (0x00053be9) main_mup2_pane_t4

0x908e,	// (0x00053c03) main_mup2_pane_t5_ParamLimits

0x908e,	// (0x00053c03) main_mup2_pane_t5

0x90a8,	// (0x00053c1d) main_mup2_pane_t6_ParamLimits

0x90a8,	// (0x00053c1d) main_mup2_pane_t6

0x0005,

0xf676,	// (0x0005a1eb) main_mup2_pane_t_ParamLimits

0xf676,	// (0x0005a1eb) main_mup2_pane_t

0x90e0,	// (0x00053c55) mup2_visualizer_pane_ParamLimits

0x90e0,	// (0x00053c55) mup2_visualizer_pane

0x9112,	// (0x00053c87) mup_progress_pane_cp_ParamLimits

0x9112,	// (0x00053c87) mup_progress_pane_cp

0x921b,	// (0x00053d90) mup_volume_pane_cp_ParamLimits

0x921b,	// (0x00053d90) mup_volume_pane_cp

0x9129,	// (0x00053c9e) mup2_visualizer_pane_g1_ParamLimits

0x9129,	// (0x00053c9e) mup2_visualizer_pane_g1

0xe44a,	// (0x00058fbf) mup2_visualizer_pane_g2_ParamLimits

0xe44a,	// (0x00058fbf) mup2_visualizer_pane_g2

0x913e,	// (0x00053cb3) mup2_visualizer_pane_g3_ParamLimits

0x913e,	// (0x00053cb3) mup2_visualizer_pane_g3

0x0002,

0xf683,	// (0x0005a1f8) mup2_visualizer_pane_g_ParamLimits

0xf683,	// (0x0005a1f8) mup2_visualizer_pane_g

0x3690,	// (0x0004e205) aid_size_cell_fmradio

0x8a03,	// (0x00053578) aid_height_parent_landcape

0x3763,	// (0x0004e2d8) wml_content_pane_cp

0x376b,	// (0x0004e2e0) wml_tabs_pane

0x3774,	// (0x0004e2e9) popup_wml_miniature_window

0x377c,	// (0x0004e2f1) scroll_pane_cp021

0x3790,	// (0x0004e305) wml_content_pane_comp8

0x3080,	// (0x0004dbf5) bg_popup_sub_pane_cp05

0xe468,	// (0x00058fdd) popup_wml_miniature_window_g1

0xe470,	// (0x00058fe5) wml_miniature_view_pane

0x914a,	// (0x00053cbf) aid_size_wml_view

0x9152,	// (0x00053cc7) wml_miniature_view_pane_g1

0x915b,	// (0x00053cd0) wml_miniature_view_pane_g2

0x9164,	// (0x00053cd9) wml_miniature_view_pane_g3

0x916c,	// (0x00053ce1) wml_miniature_view_pane_g4

0x9174,	// (0x00053ce9) wml_miniature_view_pane_g5

0x917c,	// (0x00053cf1) wml_miniature_view_pane_g6

0x9184,	// (0x00053cf9) wml_miniature_view_pane_g7

0x918c,	// (0x00053d01) wml_miniature_view_pane_g8

0x0007,

0xf68a,	// (0x0005a1ff) wml_miniature_view_pane_g

0xe43e,	// (0x00058fb3) background_graphic_ParamLimits

0xe43e,	// (0x00058fb3) background_graphic

0xe478,	// (0x00058fed) wml_tabs_2_pane

0xe481,	// (0x00058ff6) wml_tabs_3_pane_ParamLimits

0xe481,	// (0x00058ff6) wml_tabs_3_pane

0xe493,	// (0x00059008) wml_tabs_4_pane_ParamLimits

0xe493,	// (0x00059008) wml_tabs_4_pane

0xe4a9,	// (0x0005901e) wml_tabs_5_pane_ParamLimits

0xe4a9,	// (0x0005901e) wml_tabs_5_pane

0xe4c3,	// (0x00059038) wml_tabs_pane_g2_ParamLimits

0xe4c3,	// (0x00059038) wml_tabs_pane_g2

0xe4d7,	// (0x0005904c) wml_tabs_pane_g3_ParamLimits

0xe4d7,	// (0x0005904c) wml_tabs_pane_g3

0x9194,	// (0x00053d09) wml_tabs_2_active_pane_ParamLimits

0x9194,	// (0x00053d09) wml_tabs_2_active_pane

0x91a4,	// (0x00053d19) wml_tabs_2_passive_pane_ParamLimits

0x91a4,	// (0x00053d19) wml_tabs_2_passive_pane

0x91b4,	// (0x00053d29) wml_tabs_3_active_pane_cp_ParamLimits

0x91b4,	// (0x00053d29) wml_tabs_3_active_pane_cp

0x91c5,	// (0x00053d3a) wml_tabs_3_passive_pane_ParamLimits

0x91c5,	// (0x00053d3a) wml_tabs_3_passive_pane

0x91d6,	// (0x00053d4b) wml_tabs_3_passive_pane_cp_ParamLimits

0x91d6,	// (0x00053d4b) wml_tabs_3_passive_pane_cp

0x91e7,	// (0x00053d5c) tabs_4_active_pane

0x91ef,	// (0x00053d64) tabs_4_passive_pane

0x91f7,	// (0x00053d6c) tabs_4_passive_pane_cp

0x91ff,	// (0x00053d74) tabs_4_passive_pane_cp2

0x8804,	// (0x00053379) aid_height_text

0x80bc,	// (0x00052c31) mup_volume_cont_pane_ParamLimits

0x80bc,	// (0x00052c31) mup_volume_cont_pane

0x5e8d,	// (0x00050a02) aid_size_cell_pinb

0x5e97,	// (0x00050a0c) aid_size_list_pinb

0x90fb,	// (0x00053c70) mup2_volume_cont_pane_ParamLimits

0x90fb,	// (0x00053c70) mup2_volume_cont_pane

0x9207,	// (0x00053d7c) mup2_volume_cont_pane_g1_ParamLimits

0x9207,	// (0x00053d7c) mup2_volume_cont_pane_g1

0x5b39,	// (0x000506ae) aid_size_cell_touch_ParamLimits

0x5b39,	// (0x000506ae) aid_size_cell_touch

0x5d8d,	// (0x00050902) touch_pane_ParamLimits

0x5d8d,	// (0x00050902) touch_pane

0x5d83,	// (0x000508f8) main_rss2_pane

0xe4f4,	// (0x00059069) listscroll_rss2_pane

0xe4fd,	// (0x00059072) rss2_navigation_pane

0xe505,	// (0x0005907a) list_rss2_pane

0x3dc0,	// (0x0004e935) scroll_pane_cp22

0xe50d,	// (0x00059082) rss2_navigation_pane_g1

0xe516,	// (0x0005908b) rss2_navigation_pane_g2

0xe51e,	// (0x00059093) rss2_navigation_pane_g3

0x0002,

0xf69b,	// (0x0005a210) rss2_navigation_pane_g

0xe526,	// (0x0005909b) rss2_navigation_pane_t1

0x9240,	// (0x00053db5) rss2_list_single_pane_ParamLimits

0x9240,	// (0x00053db5) rss2_list_single_pane

0xe534,	// (0x000590a9) rss2_list_single_pane_t2

0xe542,	// (0x000590b7) rss2_list_single_pane_t3_ParamLimits

0xe542,	// (0x000590b7) rss2_list_single_pane_t3

0xe55f,	// (0x000590d4) rss2_list_single_pane_t4

0x79e2,	// (0x00052557) smil_status_pane_g1

0x8a0d,	// (0x00053582) main_image2_pane_ParamLimits

0x8a0d,	// (0x00053582) main_image2_pane

0x8e2b,	// (0x000539a0) main_camera2_pane_g9_ParamLimits

0x8e2b,	// (0x000539a0) main_camera2_pane_g9

0x8e7f,	// (0x000539f4) main_camera2_pane_t5_ParamLimits

0x8e7f,	// (0x000539f4) main_camera2_pane_t5

0x8e91,	// (0x00053a06) main_camera2_pane_t6_ParamLimits

0x8e91,	// (0x00053a06) main_camera2_pane_t6

0x9257,	// (0x00053dcc) main_image2_pane_g1_ParamLimits

0x9257,	// (0x00053dcc) main_image2_pane_g1

0x8619,	// (0x0005318e) smil2_video_pane_ParamLimits

0x8619,	// (0x0005318e) smil2_video_pane

0x5a45,	// (0x000505ba) aid_zoom_text_primary_cp

0x5d24,	// (0x00050899) popup_preview_fixed_window

0x36bd,	// (0x0004e232) im_reading_pane_g1

0x8d87,	// (0x000538fc) cams2_bc_adjust_pane_cp_ParamLimits

0x8d87,	// (0x000538fc) cams2_bc_adjust_pane_cp

0x8ebc,	// (0x00053a31) cams2_bc_adjust_pane_ParamLimits

0x8ebc,	// (0x00053a31) cams2_bc_adjust_pane

0xe56d,	// (0x000590e2) cams2_bc_adjust_pane_g1

0x9263,	// (0x00053dd8) cams2_slider_pane

0x926c,	// (0x00053de1) cams2_slider_pane_g1

0x9275,	// (0x00053dea) cams2_slider_pane_g2

0x0006,

0xf6a2,	// (0x0005a217) cams2_slider_pane_g

0x5f76,	// (0x00050aeb) calc_display_pane_ParamLimits

0x5f8e,	// (0x00050b03) calc_paper_pane_ParamLimits

0x5faa,	// (0x00050b1f) grid_calc_pane_ParamLimits

0x7c17,	// (0x0005278c) popup_clock_digital_window_t1_ParamLimits

0x4224,	// (0x0004ed99) main_image_pane_t1

0x5f5c,	// (0x00050ad1) aid_size_cell_calc_ParamLimits

0x5f5c,	// (0x00050ad1) aid_size_cell_calc

0x8a3e,	// (0x000535b3) popup_blid_sat_info2_window_ParamLimits

0x8a3e,	// (0x000535b3) popup_blid_sat_info2_window

0xe57d,	// (0x000590f2) aid_size_cell_blid

0xe585,	// (0x000590fa) bg_popup_window_pane_cp07

0xe5a8,	// (0x0005911d) grid_popup_blid_pane

0xe5b0,	// (0x00059125) heading_pane_cp05_ParamLimits

0xe5b0,	// (0x00059125) heading_pane_cp05

0xe678,	// (0x000591ed) cell_popup_blid_pane_ParamLimits

0xe678,	// (0x000591ed) cell_popup_blid_pane

0xe698,	// (0x0005920d) cell_popup_blid_pane_g1

0xe6a0,	// (0x00059215) cell_popup_blid_pane_t1

0x90c5,	// (0x00053c3a) mup2_indicator_pane_ParamLimits

0x90c5,	// (0x00053c3a) mup2_indicator_pane

0x3573,	// (0x0004e0e8) mup2_visualizer_osc_pane

0xe456,	// (0x00058fcb) mup2_visualizer_spec_pane_ParamLimits

0xe456,	// (0x00058fcb) mup2_visualizer_spec_pane

0x928f,	// (0x00053e04) mup2_spec_half_pane

0x9298,	// (0x00053e0d) mup2_spec_half_pane_cp

0x92a0,	// (0x00053e15) mup2_spec_bar_pane_ParamLimits

0x92a0,	// (0x00053e15) mup2_spec_bar_pane

0xe3eb,	// (0x00058f60) mup2_spec_bar_pane_g1

0xe3f5,	// (0x00058f6a) mup2_spec_bar_pane_g2

0x0001,

0xf615,	// (0x0005a18a) mup2_spec_bar_pane_g

0x92bf,	// (0x00053e34) mup2_osc_middle_pane

0xe407,	// (0x00058f7c) mup2_visualizer_osc_pane_g1

0x2b86,	// (0x0004d6fb) popup_number_entry_window_t1_ParamLimits

0x2b99,	// (0x0004d70e) popup_number_entry_window_t2_ParamLimits

0x2bab,	// (0x0004d720) popup_number_entry_window_t3_ParamLimits

0x5dda,	// (0x0005094f) popup_number_entry_window_t5_ParamLimits

0x5dda,	// (0x0005094f) popup_number_entry_window_t5

0xf0c6,	// (0x00059c3b) popup_number_entry_window_t_ParamLimits

0x2bbd,	// (0x0004d732) text_title_cp2_ParamLimits

0x8357,	// (0x00052ecc) aid_hotspot_pointer_text2_pane

0x83e9,	// (0x00052f5e) main_viewer_pane_g9_ParamLimits

0x83e9,	// (0x00052f5e) main_viewer_pane_g9

0x3906,	// (0x0004e47b) cale_month_pane_t1_ParamLimits

0x392c,	// (0x0004e4a1) bg_cale_pane_ParamLimits

0x3944,	// (0x0004e4b9) list_cale_pane_ParamLimits

0x3955,	// (0x0004e4ca) listscroll_cale_day_pane_t1

0x3967,	// (0x0004e4dc) scroll_pane_cp09_ParamLimits

0x80f7,	// (0x00052c6c) main_mup_eq_pane_t1_ParamLimits

0x80f7,	// (0x00052c6c) main_mup_eq_pane_t1

0x810d,	// (0x00052c82) main_mup_eq_pane_t2_ParamLimits

0x810d,	// (0x00052c82) main_mup_eq_pane_t2

0x8123,	// (0x00052c98) main_mup_eq_pane_t3_ParamLimits

0x8123,	// (0x00052c98) main_mup_eq_pane_t3

0x8139,	// (0x00052cae) main_mup_eq_pane_t4_ParamLimits

0x8139,	// (0x00052cae) main_mup_eq_pane_t4

0x814f,	// (0x00052cc4) main_mup_eq_pane_t5_ParamLimits

0x814f,	// (0x00052cc4) main_mup_eq_pane_t5

0x8165,	// (0x00052cda) main_mup_eq_pane_t6_ParamLimits

0x8165,	// (0x00052cda) main_mup_eq_pane_t6

0x8177,	// (0x00052cec) main_mup_eq_pane_t7_ParamLimits

0x8177,	// (0x00052cec) main_mup_eq_pane_t7

0x8189,	// (0x00052cfe) main_mup_eq_pane_t8_ParamLimits

0x8189,	// (0x00052cfe) main_mup_eq_pane_t8

0x819b,	// (0x00052d10) main_mup_eq_pane_t9_ParamLimits

0x819b,	// (0x00052d10) main_mup_eq_pane_t9

0x81b1,	// (0x00052d26) main_mup_eq_pane_t10_ParamLimits

0x81b1,	// (0x00052d26) main_mup_eq_pane_t10

0x0009,

0xf451,	// (0x00059fc6) main_mup_eq_pane_t_ParamLimits

0xf451,	// (0x00059fc6) main_mup_eq_pane_t

0x8244,	// (0x00052db9) mup_equalizer_pane_cp5_ParamLimits

0x8256,	// (0x00052dcb) mup_equalizer_pane_cp6_ParamLimits

0x8268,	// (0x00052ddd) mup_equalizer_pane_cp7_ParamLimits

0x5d83,	// (0x000508f8) main_gallery_pane

0xe410,	// (0x00058f85) smil2_volume_pane

0xe418,	// (0x00058f8d) smil_status_volume_pane_g1_ParamLimits

0xe42b,	// (0x00058fa0) smil_status_volume_pane_g2_ParamLimits

0x8c02,	// (0x00053777) smil_status_volume_pane_g3_ParamLimits

0xf61a,	// (0x0005a18f) smil_status_volume_pane_g_ParamLimits

0xe585,	// (0x000590fa) bg_popup_window_pane_cp07_ParamLimits

0xe593,	// (0x00059108) blid_firmament_pane

0x92c8,	// (0x00053e3d) aid_size_cell_gallery_ParamLimits

0x92c8,	// (0x00053e3d) aid_size_cell_gallery

0x92d6,	// (0x00053e4b) grid_gallery_pane_ParamLimits

0x92d6,	// (0x00053e4b) grid_gallery_pane

0x92e2,	// (0x00053e57) cell_gallery_pane_ParamLimits

0x92e2,	// (0x00053e57) cell_gallery_pane

0xe6ae,	// (0x00059223) bg_cell_gallery_focus_pane_ParamLimits

0xe6ae,	// (0x00059223) bg_cell_gallery_focus_pane

0xe6c0,	// (0x00059235) cell_gallery_pane_g1_ParamLimits

0xe6c0,	// (0x00059235) cell_gallery_pane_g1

0x9321,	// (0x00053e96) cell_gallery_pane_g2_ParamLimits

0x9321,	// (0x00053e96) cell_gallery_pane_g2

0x932e,	// (0x00053ea3) cell_gallery_pane_g3_ParamLimits

0x932e,	// (0x00053ea3) cell_gallery_pane_g3

0xe6cc,	// (0x00059241) cell_gallery_pane_g4_ParamLimits

0xe6cc,	// (0x00059241) cell_gallery_pane_g4

0x0003,

0xf6c8,	// (0x0005a23d) cell_gallery_pane_g_ParamLimits

0xf6c8,	// (0x0005a23d) cell_gallery_pane_g

0xe6d8,	// (0x0005924d) bg_cell_gallery_focus_pane_g1

0xe6e0,	// (0x00059255) bg_cell_gallery_focus_pane_g2

0xe6e8,	// (0x0005925d) bg_cell_gallery_focus_pane_g3

0xe6f0,	// (0x00059265) bg_cell_gallery_focus_pane_g4

0xe6f8,	// (0x0005926d) bg_cell_gallery_focus_pane_g5

0xe700,	// (0x00059275) bg_cell_gallery_focus_pane_g6

0xe708,	// (0x0005927d) bg_cell_gallery_focus_pane_g7

0xe710,	// (0x00059285) bg_cell_gallery_focus_pane_g8

0x0007,

0xf6d1,	// (0x0005a246) bg_cell_gallery_focus_pane_g

0xe718,	// (0x0005928d) aid_firma_cardinal

0xe72c,	// (0x000592a1) blid_firmament_pane_t1

0xe743,	// (0x000592b8) blid_firmament_pane_t2

0xe75a,	// (0x000592cf) blid_firmament_pane_t3

0xe771,	// (0x000592e6) blid_firmament_pane_t4

0x0003,

0xf6e2,	// (0x0005a257) blid_firmament_pane_t

0xe788,	// (0x000592fd) blid_sat_info_pane

0xe798,	// (0x0005930d) blid_sat_info_pane_g1

0xe798,	// (0x0005930d) blid_sat_info_pane_g2

0x0001,

0xf6eb,	// (0x0005a260) blid_sat_info_pane_g

0xe7a2,	// (0x00059317) blid_sat_info_pane_t1

0xe7b0,	// (0x00059325) smil2_volume_content_pane

0xe7b9,	// (0x0005932e) smil2_volume_pane_g1

0xe7c1,	// (0x00059336) smil2_volume_content_pane_g1

0xe7ca,	// (0x0005933f) smil2_volume_content_pane_g2

0xe7d3,	// (0x00059348) smil2_volume_content_pane_g3

0xe7dc,	// (0x00059351) smil2_volume_content_pane_g4

0xe7e5,	// (0x0005935a) smil2_volume_content_pane_g5

0xe7ee,	// (0x00059363) smil2_volume_content_pane_g6

0xe7f7,	// (0x0005936c) smil2_volume_content_pane_g7

0xe800,	// (0x00059375) smil2_volume_content_pane_g8

0xe809,	// (0x0005937e) smil2_volume_content_pane_g9

0xe812,	// (0x00059387) smil2_volume_content_pane_g10

0x0009,

0xf6f0,	// (0x0005a265) smil2_volume_content_pane_g

0x64d3,	// (0x00051048) cale_week_day_heading_pane_t1_ParamLimits

0x650e,	// (0x00051083) cale_week_day_heading_pane_t2_ParamLimits

0x6549,	// (0x000510be) cale_week_day_heading_pane_t3_ParamLimits

0x6584,	// (0x000510f9) cale_week_day_heading_pane_t4_ParamLimits

0x65bf,	// (0x00051134) cale_week_day_heading_pane_t5_ParamLimits

0x65fa,	// (0x0005116f) cale_week_day_heading_pane_t6_ParamLimits

0x6635,	// (0x000511aa) cale_week_day_heading_pane_t7_ParamLimits

0xf1cd,	// (0x00059d42) cale_week_day_heading_pane_t_ParamLimits

0x3521,	// (0x0004e096) bg_cale_side_pane_ParamLimits

0x6670,	// (0x000511e5) cale_week_time_pane_t1_ParamLimits

0x66aa,	// (0x0005121f) cale_week_time_pane_t2_ParamLimits

0x66e4,	// (0x00051259) cale_week_time_pane_t3_ParamLimits

0x671e,	// (0x00051293) cale_week_time_pane_t4_ParamLimits

0x6758,	// (0x000512cd) cale_week_time_pane_t5_ParamLimits

0x6792,	// (0x00051307) cale_week_time_pane_t6_ParamLimits

0x67cc,	// (0x00051341) cale_week_time_pane_t7_ParamLimits

0x6806,	// (0x0005137b) cale_week_time_pane_t8_ParamLimits

0xf1dc,	// (0x00059d51) cale_week_time_pane_t_ParamLimits

0x6840,	// (0x000513b5) cell_cale_week_pane_g2_ParamLimits

0x3521,	// (0x0004e096) bg_cale_side_pane_cp01_ParamLimits

0x7769,	// (0x000522de) cale_month_week_pane_t1_ParamLimits

0x77a2,	// (0x00052317) cale_month_week_pane_t2_ParamLimits

0x77db,	// (0x00052350) cale_month_week_pane_t3_ParamLimits

0x7814,	// (0x00052389) cale_month_week_pane_t4_ParamLimits

0x784d,	// (0x000523c2) cale_month_week_pane_t5_ParamLimits

0x7886,	// (0x000523fb) cale_month_week_pane_t6_ParamLimits

0xf2b1,	// (0x00059e26) cale_month_week_pane_t_ParamLimits

0x79ad,	// (0x00052522) cell_cale_month_pane_g1_ParamLimits

0x5d83,	// (0x000508f8) main_cale_event_viewer_pane

0x2b5c,	// (0x0004d6d1) listscroll_cale_event_viewer_pane

0xe81b,	// (0x00059390) list_cale_ev_pane

0xe823,	// (0x00059398) scroll_pane_cp023

0x933b,	// (0x00053eb0) field_cale_ev_pane_ParamLimits

0x933b,	// (0x00053eb0) field_cale_ev_pane

0xe82f,	// (0x000593a4) field_cale_ev_content_pane_ParamLimits

0xe82f,	// (0x000593a4) field_cale_ev_content_pane

0xe83b,	// (0x000593b0) field_cale_ev_pane_g1_ParamLimits

0xe83b,	// (0x000593b0) field_cale_ev_pane_g1

0xe847,	// (0x000593bc) field_cale_ev_pane_g2_ParamLimits

0xe847,	// (0x000593bc) field_cale_ev_pane_g2

0xe85f,	// (0x000593d4) field_cale_ev_pane_g3_ParamLimits

0xe85f,	// (0x000593d4) field_cale_ev_pane_g3

0x0002,

0xf705,	// (0x0005a27a) field_cale_ev_pane_g_ParamLimits

0xf705,	// (0x0005a27a) field_cale_ev_pane_g

0xe877,	// (0x000593ec) field_cale_ev_pane_t1_ParamLimits

0xe877,	// (0x000593ec) field_cale_ev_pane_t1

0x9355,	// (0x00053eca) field_cale_ev_content_pane_t1_ParamLimits

0x9355,	// (0x00053eca) field_cale_ev_content_pane_t1

0x410a,	// (0x0004ec7f) bg_button_pane_cp01

0x62be,	// (0x00050e33) listscroll_cale_week_pane_ParamLimits

0x34cc,	// (0x0004e041) popup_toolbar_window_cp01

0x34f2,	// (0x0004e067) listscroll_cale_week_pane_t1_ParamLimits

0x62be,	// (0x00050e33) listscroll_cale_day_pane_ParamLimits

0x34cc,	// (0x0004e041) popup_toolbar_window_cp02

0x3955,	// (0x0004e4ca) listscroll_cale_day_pane_t1_ParamLimits

0x62be,	// (0x00050e33) main_cale_month_pane_ParamLimits

0x8b11,	// (0x00053686) popup_toolbar_window_cp03_ParamLimits

0x8b11,	// (0x00053686) popup_toolbar_window_cp03

0x8541,	// (0x000530b6) main_image_pane_g2_ParamLimits

0x8541,	// (0x000530b6) main_image_pane_g2

0x854d,	// (0x000530c2) main_image_pane_g3_ParamLimits

0x854d,	// (0x000530c2) main_image_pane_g3

0x0002,

0xf4e3,	// (0x0005a058) main_image_pane_g_ParamLimits

0xf4e3,	// (0x0005a058) main_image_pane_g

0x4224,	// (0x0004ed99) main_image_pane_t1_ParamLimits

0x8559,	// (0x000530ce) main_image_pane_t2_ParamLimits

0x8559,	// (0x000530ce) main_image_pane_t2

0x856b,	// (0x000530e0) main_image_pane_t3_ParamLimits

0x856b,	// (0x000530e0) main_image_pane_t3

0x857d,	// (0x000530f2) main_image_pane_t4_ParamLimits

0x857d,	// (0x000530f2) main_image_pane_t4

0x0003,

0xf4ea,	// (0x0005a05f) main_image_pane_t_ParamLimits

0xf4ea,	// (0x0005a05f) main_image_pane_t

0x858f,	// (0x00053104) popup_image_details_window_cp01

0x8597,	// (0x0005310c) popup_toobar_trans_pane_cp01_ParamLimits

0x8597,	// (0x0005310c) popup_toobar_trans_pane_cp01

0x8a85,	// (0x000535fa) popup_image_details_window_ParamLimits

0x8a85,	// (0x000535fa) popup_image_details_window

0x8a91,	// (0x00053606) popup_image_focus_window

0x8d7b,	// (0x000538f0) camera2_autofocus_pane_ParamLimits

0x8d7b,	// (0x000538f0) camera2_autofocus_pane

0x2b5c,	// (0x0004d6d1) bg_popup_sub_pane_cp06

0xe88e,	// (0x00059403) popup_image_focus_window_g1

0xe896,	// (0x0005940b) popup_image_focus_window_g2

0xe89e,	// (0x00059413) popup_image_focus_window_g3

0xe8a6,	// (0x0005941b) popup_image_focus_window_g4

0x0003,

0xf70c,	// (0x0005a281) popup_image_focus_window_g

0xe8ae,	// (0x00059423) popup_image_focus_window_t1

0xe8bc,	// (0x00059431) popup_image_focus_window_t2

0xe8cb,	// (0x00059440) popup_image_focus_window_t3

0x0002,

0xf715,	// (0x0005a28a) popup_image_focus_window_t

0xe8d9,	// (0x0005944e) camera2_autofocus_pane_g1

0x4b0e,	// (0x0004f683) bg_tb_trans_pane_cp01

0xe8e7,	// (0x0005945c) popup_image_details_window_g1

0xe8fa,	// (0x0005946f) popup_image_details_window_g2

0x0002,

0xf727,	// (0x0005a29c) popup_image_details_window_g

0xe923,	// (0x00059498) popup_image_details_window_t1

0xe935,	// (0x000594aa) popup_image_details_window_t2

0xe94e,	// (0x000594c3) popup_image_details_window_t3

0xe962,	// (0x000594d7) popup_image_details_window_t4

0xe97d,	// (0x000594f2) popup_image_details_window_t5

0x0004,

0xf72e,	// (0x0005a2a3) popup_image_details_window_t

0x338c,	// (0x0004df01) bg_calc_paper_pane_ParamLimits

0x5d83,	// (0x000508f8) grid_highlight_pane_cp013

0x608f,	// (0x00050c04) list_calc_pane_ParamLimits

0x60a1,	// (0x00050c16) scroll_pane_cp024

0x33a4,	// (0x0004df19) bg_calc_display_pane_ParamLimits

0x60a9,	// (0x00050c1e) calc_display_pane_t1_ParamLimits

0x60be,	// (0x00050c33) calc_display_pane_t2_ParamLimits

0x60d3,	// (0x00050c48) calc_display_pane_t3_ParamLimits

0xf14d,	// (0x00059cc2) calc_display_pane_t_ParamLimits

0x6189,	// (0x00050cfe) cell_calc_pane_g2

0x0001,

0xf16a,	// (0x00059cdf) cell_calc_pane_g

0x6192,	// (0x00050d07) cell_calc_pane_t1

0x3403,	// (0x0004df78) grid_highlight_pane_cp02_ParamLimits

0x3419,	// (0x0004df8e) toolbar_button_pane_cp01_ParamLimits

0x3419,	// (0x0004df8e) toolbar_button_pane_cp01

0x4269,	// (0x0004edde) temp_image_control_pane_ParamLimits

0x4269,	// (0x0004edde) temp_image_control_pane

0x8a0d,	// (0x00053582) main_mp3_pane

0xe997,	// (0x0005950c) temp_image_control_pane_g1_ParamLimits

0xe997,	// (0x0005950c) temp_image_control_pane_g1

0xe9a5,	// (0x0005951a) temp_image_control_pane_g2_ParamLimits

0xe9a5,	// (0x0005951a) temp_image_control_pane_g2

0xe9b7,	// (0x0005952c) temp_image_control_pane_g3_ParamLimits

0xe9b7,	// (0x0005952c) temp_image_control_pane_g3

0x939f,	// (0x00053f14) temp_image_control_pane_g4_ParamLimits

0x939f,	// (0x00053f14) temp_image_control_pane_g4

0x0003,

0xf739,	// (0x0005a2ae) temp_image_control_pane_g_ParamLimits

0xf739,	// (0x0005a2ae) temp_image_control_pane_g

0xe997,	// (0x0005950c) main_mp3_pane_g1

0x93b0,	// (0x00053f25) main_mp3_pane_g2

0x0007,

0xf742,	// (0x0005a2b7) main_mp3_pane_g

0xe9fa,	// (0x0005956f) main_mp3_pane_t1

0x35b3,	// (0x0004e128) main_camera_pane_g8_ParamLimits

0x35b3,	// (0x0004e128) main_camera_pane_g8

0x6a69,	// (0x000515de) main_video_pane_g7_ParamLimits

0x6a69,	// (0x000515de) main_video_pane_g7

0x8eaa,	// (0x00053a1f) main_camera2_pane_t7_ParamLimits

0x8eaa,	// (0x00053a1f) main_camera2_pane_t7

0x3723,	// (0x0004e298) scroll_pane_cp025_ParamLimits

0x3723,	// (0x0004e298) scroll_pane_cp025

0x3737,	// (0x0004e2ac) scroll_pane_cp026_ParamLimits

0x3737,	// (0x0004e2ac) scroll_pane_cp026

0x3746,	// (0x0004e2bb) wml_content_pane_ParamLimits

0x5d83,	// (0x000508f8) main_touch_calib_pane

0x9448,	// (0x00053fbd) main_touch_calib_pane_g1

0x9454,	// (0x00053fc9) main_touch_calib_pane_g2

0x9460,	// (0x00053fd5) main_touch_calib_pane_g3

0x946c,	// (0x00053fe1) main_touch_calib_pane_g4

0x0003,

0xf760,	// (0x0005a2d5) main_touch_calib_pane_g

0x9478,	// (0x00053fed) main_touch_calib_pane_t1

0x948d,	// (0x00054002) main_touch_calib_pane_t2

0x0004,

0xf769,	// (0x0005a2de) main_touch_calib_pane_t

0x3e7c,	// (0x0004e9f1) mup_progress_pane_cp02

0x3eb1,	// (0x0004ea26) navi_pane_g1

0x3f3c,	// (0x0004eab1) navi_pane_mp_t3

0x8a0d,	// (0x00053582) main_mp3_pane_ParamLimits

0x8b4c,	// (0x000536c1) navi_pane_ParamLimits

0xe997,	// (0x0005950c) main_mp3_pane_g1_ParamLimits

0x93b0,	// (0x00053f25) main_mp3_pane_g2_ParamLimits

0x93bc,	// (0x00053f31) main_mp3_pane_g3_ParamLimits

0x93bc,	// (0x00053f31) main_mp3_pane_g3

0x93c8,	// (0x00053f3d) main_mp3_pane_g4_ParamLimits

0x93c8,	// (0x00053f3d) main_mp3_pane_g4

0xe9c7,	// (0x0005953c) main_mp3_pane_g5_ParamLimits

0xe9c7,	// (0x0005953c) main_mp3_pane_g5

0xe9d5,	// (0x0005954a) main_mp3_pane_g6_ParamLimits

0xe9d5,	// (0x0005954a) main_mp3_pane_g6

0xe9e2,	// (0x00059557) main_mp3_pane_g7_ParamLimits

0xe9e2,	// (0x00059557) main_mp3_pane_g7

0xe9ee,	// (0x00059563) main_mp3_pane_g8_ParamLimits

0xe9ee,	// (0x00059563) main_mp3_pane_g8

0xf742,	// (0x0005a2b7) main_mp3_pane_g_ParamLimits

0x93d4,	// (0x00053f49) main_mp3_pane_t2

0x93e2,	// (0x00053f57) main_mp3_pane_t3

0xea08,	// (0x0005957d) main_mp3_pane_t4

0xea16,	// (0x0005958b) main_mp3_pane_t5

0x0005,

0xf753,	// (0x0005a2c8) main_mp3_pane_t

0xea24,	// (0x00059599) mup_progress_pane_cp01

0x5a45,	// (0x000505ba) aid_zoom_text_secondary2

0xe81b,	// (0x00059390) list_cale_ev2_pane

0xe823,	// (0x00059398) scroll_pane_cp023_ParamLimits

0x94d8,	// (0x0005404d) field_cale_ev2_pane_ParamLimits

0x94d8,	// (0x0005404d) field_cale_ev2_pane

0x08b0,	// (0x0004b425) field_cale_ev2_pane_g1_ParamLimits

0x08b0,	// (0x0004b425) field_cale_ev2_pane_g1

0x08bc,	// (0x0004b431) field_cale_ev2_pane_g2_ParamLimits

0x08bc,	// (0x0004b431) field_cale_ev2_pane_g2

0x08d4,	// (0x0004b449) field_cale_ev2_pane_g3_ParamLimits

0x08d4,	// (0x0004b449) field_cale_ev2_pane_g3

0x0003,

0xf774,	// (0x0005a2e9) field_cale_ev2_pane_g_ParamLimits

0xf774,	// (0x0005a2e9) field_cale_ev2_pane_g

0x08f8,	// (0x0004b46d) field_cale_ev2_pane_t1_ParamLimits

0x08f8,	// (0x0004b46d) field_cale_ev2_pane_t1

0x090f,	// (0x0004b484) field_cale_ev2_pane_t2_ParamLimits

0x090f,	// (0x0004b484) field_cale_ev2_pane_t2

0x0001,

0xf77d,	// (0x0005a2f2) field_cale_ev2_pane_t_ParamLimits

0xf77d,	// (0x0005a2f2) field_cale_ev2_pane_t

0x843d,	// (0x00052fb2) main_postcard_pane_g5_ParamLimits

0x843d,	// (0x00052fb2) main_postcard_pane_g5

0x8449,	// (0x00052fbe) main_postcard_pane_g6_ParamLimits

0x8449,	// (0x00052fbe) main_postcard_pane_g6

0x68be,	// (0x00051433) camera2_autofocus_pane_cp_ParamLimits

0x68be,	// (0x00051433) camera2_autofocus_pane_cp

0x8a0d,	// (0x00053582) main_mup3_pane

0x9527,	// (0x0005409c) main_mup3_pane_g1_ParamLimits

0x9527,	// (0x0005409c) main_mup3_pane_g1

0x9548,	// (0x000540bd) main_mup3_pane_g2_ParamLimits

0x9548,	// (0x000540bd) main_mup3_pane_g2

0x95b5,	// (0x0005412a) main_mup3_pane_g3_ParamLimits

0x95b5,	// (0x0005412a) main_mup3_pane_g3

0x95f0,	// (0x00054165) main_mup3_pane_g4_ParamLimits

0x95f0,	// (0x00054165) main_mup3_pane_g4

0x962b,	// (0x000541a0) main_mup3_pane_g5_ParamLimits

0x962b,	// (0x000541a0) main_mup3_pane_g5

0x9666,	// (0x000541db) main_mup3_pane_g6_ParamLimits

0x9666,	// (0x000541db) main_mup3_pane_g6

0xea2c,	// (0x000595a1) main_mup3_pane_g7_ParamLimits

0xea2c,	// (0x000595a1) main_mup3_pane_g7

0x0007,

0xf78d,	// (0x0005a302) main_mup3_pane_g_ParamLimits

0xf78d,	// (0x0005a302) main_mup3_pane_g

0x96d4,	// (0x00054249) main_mup3_pane_t1_ParamLimits

0x96d4,	// (0x00054249) main_mup3_pane_t1

0x9735,	// (0x000542aa) main_mup3_pane_t2_ParamLimits

0x9735,	// (0x000542aa) main_mup3_pane_t2

0x97f0,	// (0x00054365) main_mup3_pane_t4_ParamLimits

0x97f0,	// (0x00054365) main_mup3_pane_t4

0x9836,	// (0x000543ab) main_mup3_pane_t5_ParamLimits

0x9836,	// (0x000543ab) main_mup3_pane_t5

0x98da,	// (0x0005444f) main_mup3_pane_t6_ParamLimits

0x98da,	// (0x0005444f) main_mup3_pane_t6

0x0005,

0xf79e,	// (0x0005a313) main_mup3_pane_t_ParamLimits

0xf79e,	// (0x0005a313) main_mup3_pane_t

0x9982,	// (0x000544f7) mup3_progress_pane_ParamLimits

0x9982,	// (0x000544f7) mup3_progress_pane

0x99e6,	// (0x0005455b) popup_mup3_control_window_ParamLimits

0x99e6,	// (0x0005455b) popup_mup3_control_window

0xea3a,	// (0x000595af) popup_mup3_text_window

0x99ff,	// (0x00054574) mup3_progress_pane_t1

0x9a1d,	// (0x00054592) mup3_progress_pane_t2

0xea42,	// (0x000595b7) mup3_progress_pane_t3

0x0002,

0xf7ab,	// (0x0005a320) mup3_progress_pane_t

0xea5f,	// (0x000595d4) mup_progress_pane_cp03

0x2b5c,	// (0x0004d6d1) bg_tb_trans_pane_cp04

0x9a3b,	// (0x000545b0) mup3_volume_pane

0x9a43,	// (0x000545b8) popup_mup3_control_window_g1

0x9a4c,	// (0x000545c1) mup3_volume_pane_g1

0x9a55,	// (0x000545ca) mup3_volume_pane_g2

0x9a5e,	// (0x000545d3) mup3_volume_pane_g3

0x0002,

0xf7b2,	// (0x0005a327) mup3_volume_pane_g

0x2b5c,	// (0x0004d6d1) bg_tb_trans_pane_cp03

0xea6f,	// (0x000595e4) popup_mup3_text_window_g1

0xea77,	// (0x000595ec) popup_mup3_text_window_t1

0x33ec,	// (0x0004df61) list_calc_item_pane_g1_ParamLimits

0xe4eb,	// (0x00059060) mup_volume_pane_cp_g1

0x94a2,	// (0x00054017) main_touch_calib_pane_t3

0x94b4,	// (0x00054029) main_touch_calib_pane_t4

0x94c6,	// (0x0005403b) main_touch_calib_pane_t5

0x5b29,	// (0x0005069e) aid_cell_size_toolbar2

0x5b31,	// (0x000506a6) aid_popup3_width_pane

0x5a3d,	// (0x000505b2) aid_zoom_text_msg_primary

0x35a5,	// (0x0004e11a) vorec_t7

0x33b0,	// (0x0004df25) bg_calc_paper_pane_g1_ParamLimits

0x33c8,	// (0x0004df3d) bg_calc_paper_pane_g2_ParamLimits

0x33bc,	// (0x0004df31) bg_calc_paper_pane_g3_ParamLimits

0x33e0,	// (0x0004df55) bg_calc_paper_pane_g4_ParamLimits

0x33d4,	// (0x0004df49) bg_calc_paper_pane_g5_ParamLimits

0x610c,	// (0x00050c81) bg_calc_paper_pane_g6_ParamLimits

0x611b,	// (0x00050c90) bg_calc_paper_pane_g7_ParamLimits

0x612a,	// (0x00050c9f) bg_calc_paper_pane_g8_ParamLimits

0xf154,	// (0x00059cc9) bg_calc_paper_pane_g_ParamLimits

0x6139,	// (0x00050cae) calc_bg_paper_pane_g9_ParamLimits

0x699e,	// (0x00051513) image_qvga_pane_ParamLimits

0x699e,	// (0x00051513) image_qvga_pane

0x32db,	// (0x0004de50) bg_popup_sub_pane_cp04_ParamLimits

0x41a0,	// (0x0004ed15) popup_mup_playback_window_g1_ParamLimits

0x41ac,	// (0x0004ed21) popup_mup_playback_window_t1_ParamLimits

0x41c1,	// (0x0004ed36) popup_mup_playback_window_t2_ParamLimits

0xf4de,	// (0x0005a053) popup_mup_playback_window_t_ParamLimits

0x8fd1,	// (0x00053b46) main_mup2_pane_g3_ParamLimits

0x8fd1,	// (0x00053b46) main_mup2_pane_g3

0x6c7e,	// (0x000517f3) popup_toolbar_window_cp04

0x4587,	// (0x0004f0fc) popup_call2_audio_second_window_g3_ParamLimits

0x4587,	// (0x0004f0fc) popup_call2_audio_second_window_g3

0x4991,	// (0x0004f506) popup_call2_audio_first_window_g4_ParamLimits

0x4991,	// (0x0004f506) popup_call2_audio_first_window_g4

0xdfd9,	// (0x00058b4e) popup_call2_audio_in_window_g4_ParamLimits

0xdfd9,	// (0x00058b4e) popup_call2_audio_in_window_g4

0x8534,	// (0x000530a9) aid_area_sk_bg_cut_ParamLimits

0x8534,	// (0x000530a9) aid_area_sk_bg_cut

0x41d6,	// (0x0004ed4b) aid_area_sk_bg_cut_2_ParamLimits

0x41d6,	// (0x0004ed4b) aid_area_sk_bg_cut_2

0x9311,	// (0x00053e86) aid_placing_details_win

0x9319,	// (0x00053e8e) aid_placing_details_win_2

0xe8d9,	// (0x0005944e) camera2_autofocus_pane_g1_ParamLimits

0x5d17,	// (0x0005088c) popup_fixed_preview_cale_window_ParamLimits

0x5d17,	// (0x0005088c) popup_fixed_preview_cale_window

0x3fc4,	// (0x0004eb39) navi_slider_pane_g3

0x3fbb,	// (0x0004eb30) navi_slider_pane_g4

0x3fb2,	// (0x0004eb27) navi_slider_pane_g5

0x3fc4,	// (0x0004eb39) navi_slider_pane_g6

0x7eb7,	// (0x00052a2c) navi_slider_pane_g7

0x40d7,	// (0x0004ec4c) mup_scale_pane_g3

0x40e0,	// (0x0004ec55) mup_scale_pane_g4

0x40e9,	// (0x0004ec5e) mup_scale_pane_g5

0x827a,	// (0x00052def) mup_scale_pane_g6

0x8283,	// (0x00052df8) mup_scale_pane_g7

0x3fc4,	// (0x0004eb39) cams2_slider_pane_g3

0xe575,	// (0x000590ea) cams2_slider_pane_g4

0x927e,	// (0x00053df3) cams2_slider_pane_g5

0x3fc4,	// (0x0004eb39) cams2_slider_pane_g6

0x9286,	// (0x00053dfb) cams2_slider_pane_g7

0xe798,	// (0x0005930d) camera2_autofocus_pane_cp_g1

0xe37a,	// (0x00058eef) bg_popup_preview_window_pane_cp02_ParamLimits

0xe37a,	// (0x00058eef) bg_popup_preview_window_pane_cp02

0xea85,	// (0x000595fa) list_fp_cale_pane_ParamLimits

0xea85,	// (0x000595fa) list_fp_cale_pane

0xea91,	// (0x00059606) popup_fixed_preview_cale_window_t1_ParamLimits

0xea91,	// (0x00059606) popup_fixed_preview_cale_window_t1

0x9a67,	// (0x000545dc) popup_fixed_preview_cale_window_t2_ParamLimits

0x9a67,	// (0x000545dc) popup_fixed_preview_cale_window_t2

0x9a7c,	// (0x000545f1) popup_fixed_preview_cale_window_t3_ParamLimits

0x9a7c,	// (0x000545f1) popup_fixed_preview_cale_window_t3

0x0002,

0xf7b9,	// (0x0005a32e) popup_fixed_preview_cale_window_t_ParamLimits

0xf7b9,	// (0x0005a32e) popup_fixed_preview_cale_window_t

0x9a91,	// (0x00054606) list_single_fp_cale_pane_ParamLimits

0x9a91,	// (0x00054606) list_single_fp_cale_pane

0xeaaf,	// (0x00059624) list_single_fp_cale_pane_g1_ParamLimits

0xeaaf,	// (0x00059624) list_single_fp_cale_pane_g1

0xeabb,	// (0x00059630) list_single_fp_cale_pane_g2_ParamLimits

0xeabb,	// (0x00059630) list_single_fp_cale_pane_g2

0x0002,

0xf7c0,	// (0x0005a335) list_single_fp_cale_pane_g_ParamLimits

0xf7c0,	// (0x0005a335) list_single_fp_cale_pane_g

0xead4,	// (0x00059649) list_single_fp_cale_pane_t1_ParamLimits

0xead4,	// (0x00059649) list_single_fp_cale_pane_t1

0xeae6,	// (0x0005965b) list_single_fp_cale_pane_t2_ParamLimits

0xeae6,	// (0x0005965b) list_single_fp_cale_pane_t2

0x0001,

0xf7c7,	// (0x0005a33c) list_single_fp_cale_pane_t_ParamLimits

0xf7c7,	// (0x0005a33c) list_single_fp_cale_pane_t

0x0000,

0x0000,

0x0000,

0x0000,

0x5d83,	// (0x000508f8) main_dialer_pane

0x9aa1,	// (0x00054616) aid_cell_size_keypad

0x9aab,	// (0x00054620) dialer_ne_pane

0x9ab3,	// (0x00054628) grid_dialer_command_1_pane

0x9abb,	// (0x00054630) grid_dialer_command_2_pane

0x9ac3,	// (0x00054638) grid_dialer_keypad_pane

0x9ad3,	// (0x00054648) bg_popup_call_pane_cp06_ParamLimits

0x9ad3,	// (0x00054648) bg_popup_call_pane_cp06

0x9adf,	// (0x00054654) dialer_ne_clear_pane_ParamLimits

0x9adf,	// (0x00054654) dialer_ne_clear_pane

0xeb19,	// (0x0005968e) dialer_ne_pane_g1

0xeb21,	// (0x00059696) dialer_ne_pane_t1_ParamLimits

0xeb21,	// (0x00059696) dialer_ne_pane_t1

0x9aeb,	// (0x00054660) dialer_ne_pane_t2_ParamLimits

0x9aeb,	// (0x00054660) dialer_ne_pane_t2

0x9b08,	// (0x0005467d) dialer_ne_pane_t3_ParamLimits

0x9b08,	// (0x0005467d) dialer_ne_pane_t3

0x0002,

0xf7cc,	// (0x0005a341) dialer_ne_pane_t_ParamLimits

0xf7cc,	// (0x0005a341) dialer_ne_pane_t

0x9b2c,	// (0x000546a1) dialer_ne_pane_t3_copy1_ParamLimits

0x9b2c,	// (0x000546a1) dialer_ne_pane_t3_copy1

0x9b50,	// (0x000546c5) cell_dialer_keypad_pane_ParamLimits

0x9b50,	// (0x000546c5) cell_dialer_keypad_pane

0x9b65,	// (0x000546da) cell_dialer_command_1_pane_ParamLimits

0x9b65,	// (0x000546da) cell_dialer_command_1_pane

0x9b7b,	// (0x000546f0) cell_dialer_command_2_pane_ParamLimits

0x9b7b,	// (0x000546f0) cell_dialer_command_2_pane

0xeb33,	// (0x000596a8) bg_button_pane_cp02_ParamLimits

0xeb33,	// (0x000596a8) bg_button_pane_cp02

0x9b8a,	// (0x000546ff) cell_dialer_keypad_pane_g1_ParamLimits

0x9b8a,	// (0x000546ff) cell_dialer_keypad_pane_g1

0xeb33,	// (0x000596a8) bg_button_pane_cp03_ParamLimits

0xeb33,	// (0x000596a8) bg_button_pane_cp03

0x9b9f,	// (0x00054714) cell_dialer_command_1_pane_g1_ParamLimits

0x9b9f,	// (0x00054714) cell_dialer_command_1_pane_g1

0xeb3f,	// (0x000596b4) bg_button_pane_cp04

0x9bb2,	// (0x00054727) cell_dialer_command_2_pane_g1

0x3573,	// (0x0004e0e8) bg_button_pane_cp06

0xeb47,	// (0x000596bc) dialer_ne_clear_pane_g1

0x3ebd,	// (0x0004ea32) navi_pane_g2

0x7e5f,	// (0x000529d4) navi_pane_g3

0x0002,

0xf3e1,	// (0x00059f56) navi_pane_g

0x3f4a,	// (0x0004eabf) navi_pane_mv_g2

0x3f71,	// (0x0004eae6) navi_pane_mv_g5

0x7e7c,	// (0x000529f1) navi_pane_mv_t1

0x33a4,	// (0x0004df19) main_clock2_pane

0x9bee,	// (0x00054763) main_clock2_list_pane_ParamLimits

0x9bee,	// (0x00054763) main_clock2_list_pane

0x9c14,	// (0x00054789) main_clock2_pane_t1_ParamLimits

0x9c14,	// (0x00054789) main_clock2_pane_t1

0x9c34,	// (0x000547a9) main_clock2_pane_t2_ParamLimits

0x9c34,	// (0x000547a9) main_clock2_pane_t2

0x0004,

0xf7d8,	// (0x0005a34d) main_clock2_pane_t_ParamLimits

0xf7d8,	// (0x0005a34d) main_clock2_pane_t

0x9c8d,	// (0x00054802) popup_clock_analogue_window_cp03_ParamLimits

0x9c8d,	// (0x00054802) popup_clock_analogue_window_cp03

0x9cab,	// (0x00054820) popup_clock_digital_window_cp02_ParamLimits

0x9cab,	// (0x00054820) popup_clock_digital_window_cp02

0x9d18,	// (0x0005488d) main_clock2_list_single_pane_ParamLimits

0x9d18,	// (0x0005488d) main_clock2_list_single_pane

0x3573,	// (0x0004e0e8) list_highlight_pane_cp05

0xeb7f,	// (0x000596f4) main_clock2_list_single_pane_t1

0x6c7e,	// (0x000517f3) popup_toolbar_window_cp04_ParamLimits

0x936f,	// (0x00053ee4) camera2_autofocus_pane_g2_ParamLimits

0x936f,	// (0x00053ee4) camera2_autofocus_pane_g2

0x937b,	// (0x00053ef0) camera2_autofocus_pane_g3_ParamLimits

0x937b,	// (0x00053ef0) camera2_autofocus_pane_g3

0x9387,	// (0x00053efc) camera2_autofocus_pane_g4_ParamLimits

0x9387,	// (0x00053efc) camera2_autofocus_pane_g4

0x9393,	// (0x00053f08) camera2_autofocus_pane_g5_ParamLimits

0x9393,	// (0x00053f08) camera2_autofocus_pane_g5

0x0004,

0xf71c,	// (0x0005a291) camera2_autofocus_pane_g_ParamLimits

0xf71c,	// (0x0005a291) camera2_autofocus_pane_g

0x94ee,	// (0x00054063) camera2_autofocus_pane_cp_g2

0x94f6,	// (0x0005406b) camera2_autofocus_pane_cp_g3

0x94fe,	// (0x00054073) camera2_autofocus_pane_cp_g4

0x9506,	// (0x0005407b) camera2_autofocus_pane_cp_g5

0x0004,

0xf782,	// (0x0005a2f7) camera2_autofocus_pane_cp_g

0x9acb,	// (0x00054640) popup_dialer_spcha_window

0x2b5c,	// (0x0004d6d1) bg_popup_sub_pane_cp07

0xeb8d,	// (0x00059702) list_spcha_pane

0xeb95,	// (0x0005970a) list_single_spcha_pane_ParamLimits

0xeb95,	// (0x0005970a) list_single_spcha_pane

0x2b5c,	// (0x0004d6d1) list_highlight_pane_cp06

0xeba6,	// (0x0005971b) list_single_spcha_pane_t1

0xdd83,	// (0x000588f8) popup_call2_audio_out_window_g4_ParamLimits

0xdd83,	// (0x000588f8) popup_call2_audio_out_window_g4

0x5d83,	// (0x000508f8) main_imed2_pane

0x8a99,	// (0x0005360e) popup_imed_adjust2_window

0x8aaa,	// (0x0005361f) popup_imed_trans_window_ParamLimits

0x8aaa,	// (0x0005361f) popup_imed_trans_window

0xe5dc,	// (0x00059151) popup_blid_sat_info2_window_t1

0xe5ea,	// (0x0005915f) popup_blid_sat_info2_window_t2

0x000a,

0xf6b1,	// (0x0005a226) popup_blid_sat_info2_window_t

0x9dc2,	// (0x00054937) aid_size_cell_colour_35

0x9dd9,	// (0x0005494e) aid_size_cell_colour_112

0x9df0,	// (0x00054965) aid_size_cell_effect

0x4b0e,	// (0x0004f683) bg_tb_trans_pane_cp02

0x4b1c,	// (0x0004f691) heading_imed_pane

0x9e0a,	// (0x0005497f) listscroll_imed_pane

0xebb4,	// (0x00059729) heading_imed_pane_g1

0xebbc,	// (0x00059731) heading_imed_pane_t1

0xebca,	// (0x0005973f) grid_imed_colour_35_pane_ParamLimits

0xebca,	// (0x0005973f) grid_imed_colour_35_pane

0x9e16,	// (0x0005498b) grid_imed_effect_pane

0xebdd,	// (0x00059752) list_imed_aspect_pane

0x9e22,	// (0x00054997) scroll_pane_cp027_ParamLimits

0x9e22,	// (0x00054997) scroll_pane_cp027

0x9e2e,	// (0x000549a3) cell_imed_effect_pane_ParamLimits

0x9e2e,	// (0x000549a3) cell_imed_effect_pane

0xebe5,	// (0x0005975a) cell_imed_colour_pane_ParamLimits

0xebe5,	// (0x0005975a) cell_imed_colour_pane

0xec1f,	// (0x00059794) cell_imed_colour_pane_g1_ParamLimits

0xec1f,	// (0x00059794) cell_imed_colour_pane_g1

0xec30,	// (0x000597a5) hgihlgiht_grid_pane_cp016_ParamLimits

0xec30,	// (0x000597a5) hgihlgiht_grid_pane_cp016

0x9e44,	// (0x000549b9) cell_imed_effect_pane_g1

0x9e4c,	// (0x000549c1) grid_highlight_pane_cp017

0xec41,	// (0x000597b6) list_imed_single_pane_ParamLimits

0xec41,	// (0x000597b6) list_imed_single_pane

0x2b5c,	// (0x0004d6d1) list_highlight_pane_cp07

0xec54,	// (0x000597c9) list_imed_aspect_pane_comp1_t1

0xe386,	// (0x00058efb) bg_tb_trans_pane_cp05

0xec74,	// (0x000597e9) popup_imed_adjust2_window_g1

0xec9b,	// (0x00059810) popup_imed_adjust2_window_t1

0xecb3,	// (0x00059828) slider_imed_adjust_pane

0xecc7,	// (0x0005983c) slider_imed_adjust_pane_g1

0xecd7,	// (0x0005984c) slider_imed_adjust_pane_g2

0xece7,	// (0x0005985c) slider_imed_adjust_pane_g3

0xecf8,	// (0x0005986d) slider_imed_adjust_pane_g4

0x0003,

0xf7f5,	// (0x0005a36a) slider_imed_adjust_pane_g

0x9e55,	// (0x000549ca) aid_size_cell_clipart2

0x9e61,	// (0x000549d6) grid_imed_clipart_pane

0xed09,	// (0x0005987e) scroll_pane_cp031

0x9e6b,	// (0x000549e0) cell_imed_clipart_pane_ParamLimits

0x9e6b,	// (0x000549e0) cell_imed_clipart_pane

0x9e82,	// (0x000549f7) cell_imed_clipart_pane_g1

0x2b5c,	// (0x0004d6d1) grid_highlight_pane_cp014

0x9bfa,	// (0x0005476f) main_clock2_pane_g1_ParamLimits

0x9bfa,	// (0x0005476f) main_clock2_pane_g1

0x9cc3,	// (0x00054838) aid_call2_pane_cp10

0x9cd5,	// (0x0005484a) aid_call_pane_cp10

0x3e4c,	// (0x0004e9c1) popup_clock_analogue_window_cp10_g1

0x3e4c,	// (0x0004e9c1) popup_clock_analogue_window_cp10_g2

0x9ce7,	// (0x0005485c) popup_clock_analogue_window_cp10_g3

0x9ce7,	// (0x0005485c) popup_clock_analogue_window_cp10_g4

0x3e4c,	// (0x0004e9c1) popup_clock_analogue_window_cp10_g5

0x0004,

0xf7e3,	// (0x0005a358) popup_clock_analogue_window_cp10_g

0x9cf9,	// (0x0005486e) popup_clock_analogue_window_cp10_t1

0x9d2a,	// (0x0005489f) clock_digital_number_pane_cp10_ParamLimits

0x9d2a,	// (0x0005489f) clock_digital_number_pane_cp10

0x9d42,	// (0x000548b7) clock_digital_number_pane_cp11_ParamLimits

0x9d42,	// (0x000548b7) clock_digital_number_pane_cp11

0x9d5a,	// (0x000548cf) clock_digital_number_pane_cp12_ParamLimits

0x9d5a,	// (0x000548cf) clock_digital_number_pane_cp12

0x9d72,	// (0x000548e7) clock_digital_number_pane_cp13_ParamLimits

0x9d72,	// (0x000548e7) clock_digital_number_pane_cp13

0x9d8a,	// (0x000548ff) clock_digital_separator_pane_cp10_ParamLimits

0x9d8a,	// (0x000548ff) clock_digital_separator_pane_cp10

0x9da2,	// (0x00054917) popup_clock_digital_window_cp02_t1_ParamLimits

0x9da2,	// (0x00054917) popup_clock_digital_window_cp02_t1

0x32d3,	// (0x0004de48) clock_digital_number_pane_cp10_g1

0x32d3,	// (0x0004de48) clock_digital_number_pane_cp10_g2

0x0001,

0xf7fe,	// (0x0005a373) clock_digital_number_pane_cp10_g

0x32d3,	// (0x0004de48) clock_digital_separator_pane_cp10_g1

0x32d3,	// (0x0004de48) clock_digital_separator_pane_g2_cp10

0x3f79,	// (0x0004eaee) navi_pane_vded_g4

0x3f82,	// (0x0004eaf7) navi_pane_vded_g5

0x3f8b,	// (0x0004eb00) navi_pane_vded_t1

0x5d83,	// (0x000508f8) main_vded_pane

0x9e8b,	// (0x00054a00) main_vded_pane_g1

0x9e93,	// (0x00054a08) main_vded_pane_g2

0x9e9b,	// (0x00054a10) main_vded_pane_g3

0x0002,

0xf803,	// (0x0005a378) main_vded_pane_g

0x9ea3,	// (0x00054a18) main_vded_pane_t1

0x9eb1,	// (0x00054a26) main_vded_pane_t2

0x0001,

0xf80a,	// (0x0005a37f) main_vded_pane_t

0x9ebf,	// (0x00054a34) vded_slider_pane

0x9ec7,	// (0x00054a3c) vded_video_pane

0xed11,	// (0x00059886) vded_video_pane_g1

0x9ecf,	// (0x00054a44) vded_video_pane_g2

0xe798,	// (0x0005930d) vded_video_pane_g3

0x0002,

0xf80f,	// (0x0005a384) vded_video_pane_g

0xed1b,	// (0x00059890) vded_slider_pane_g1

0xe4eb,	// (0x00059060) vded_slider_pane_g2

0xed24,	// (0x00059899) vded_slider_pane_g3

0xed2d,	// (0x000598a2) vded_slider_pane_g4

0xed36,	// (0x000598ab) vded_slider_pane_g5

0x0004,

0xf816,	// (0x0005a38b) vded_slider_pane_g

0x99da,	// (0x0005454f) mup3_rocker_pane_ParamLimits

0x99da,	// (0x0005454f) mup3_rocker_pane

0x9ed8,	// (0x00054a4d) mup3_control_keys_pane_g1

0x9ee0,	// (0x00054a55) mup3_control_keys_pane_g2

0x9ee8,	// (0x00054a5d) mup3_control_keys_pane_g3

0x9ef0,	// (0x00054a65) mup3_control_keys_pane_g4

0x0003,

0xf821,	// (0x0005a396) mup3_control_keys_pane_g

0x5d3b,	// (0x000508b0) popup_toolbar2_fixed_window_cp01_ParamLimits

0x5d3b,	// (0x000508b0) popup_toolbar2_fixed_window_cp01

0x99f2,	// (0x00054567) popup_toolbar2_fixed_window_cp02_ParamLimits

0x99f2,	// (0x00054567) popup_toolbar2_fixed_window_cp02

0x46f9,	// (0x0004f26e) popup_call2_audio_second_window_t4_ParamLimits

0x46f9,	// (0x0004f26e) popup_call2_audio_second_window_t4

0xdbf0,	// (0x00058765) popup_call2_audio_first_window_t6_ParamLimits

0xdbf0,	// (0x00058765) popup_call2_audio_first_window_t6

0xde86,	// (0x000589fb) popup_call2_audio_out_window_t6_ParamLimits

0xde86,	// (0x000589fb) popup_call2_audio_out_window_t6

0x5d83,	// (0x000508f8) main_vitu_pane

0x9f00,	// (0x00054a75) aid_size_cell_itu_ParamLimits

0x9f00,	// (0x00054a75) aid_size_cell_itu

0x2b13,	// (0x0004d688) bg_popup_window_pane_cp08_ParamLimits

0x2b13,	// (0x0004d688) bg_popup_window_pane_cp08

0x9f0e,	// (0x00054a83) field_vitu_entry_pane_ParamLimits

0x9f0e,	// (0x00054a83) field_vitu_entry_pane

0x9f1b,	// (0x00054a90) grid_vitu_function_pane_ParamLimits

0x9f1b,	// (0x00054a90) grid_vitu_function_pane

0x9f27,	// (0x00054a9c) grid_vitu_itu_pane_ParamLimits

0x9f27,	// (0x00054a9c) grid_vitu_itu_pane

0x9f33,	// (0x00054aa8) cell_vitu_itu_pane_ParamLimits

0x9f33,	// (0x00054aa8) cell_vitu_itu_pane

0x9f48,	// (0x00054abd) cell_vitu_function_pane_ParamLimits

0x9f48,	// (0x00054abd) cell_vitu_function_pane

0x4b0e,	// (0x0004f683) bg_popup_sub_pane_cp08_ParamLimits

0x4b0e,	// (0x0004f683) bg_popup_sub_pane_cp08

0x9f5a,	// (0x00054acf) field_vitu_entry_pane_t1_ParamLimits

0x9f5a,	// (0x00054acf) field_vitu_entry_pane_t1

0xed57,	// (0x000598cc) field_vitu_entry_pane_t2_ParamLimits

0xed57,	// (0x000598cc) field_vitu_entry_pane_t2

0x0001,

0xf82f,	// (0x0005a3a4) field_vitu_entry_pane_t_ParamLimits

0xf82f,	// (0x0005a3a4) field_vitu_entry_pane_t

0xed74,	// (0x000598e9) bg_button_pane_cp05_ParamLimits

0xed74,	// (0x000598e9) bg_button_pane_cp05

0x9f73,	// (0x00054ae8) cell_vitu_itu_pane_g1

0x9f8b,	// (0x00054b00) cell_vitu_itu_pane_t1_ParamLimits

0x9f8b,	// (0x00054b00) cell_vitu_itu_pane_t1

0x9f9d,	// (0x00054b12) cell_vitu_itu_pane_t2_ParamLimits

0x9f9d,	// (0x00054b12) cell_vitu_itu_pane_t2

0x0002,

0xf834,	// (0x0005a3a9) cell_vitu_itu_pane_t_ParamLimits

0xf834,	// (0x0005a3a9) cell_vitu_itu_pane_t

0xed82,	// (0x000598f7) bg_button_pane_cp07

0x9fd2,	// (0x00054b47) cell_vitu_function_pane_g1

0x5fc2,	// (0x00050b37) main_calc_pane_g1

0x5b61,	// (0x000506d6) aid_visual_content_pane

0x5d83,	// (0x000508f8) main_vradio_pane

0x9fdb,	// (0x00054b50) main_vradio_pane_g1_ParamLimits

0x9fdb,	// (0x00054b50) main_vradio_pane_g1

0xed8c,	// (0x00059901) main_vradio_pane_g2_ParamLimits

0xed8c,	// (0x00059901) main_vradio_pane_g2

0x0001,

0xf83b,	// (0x0005a3b0) main_vradio_pane_g_ParamLimits

0xf83b,	// (0x0005a3b0) main_vradio_pane_g

0x9fe9,	// (0x00054b5e) main_vradio_pane_t1_ParamLimits

0x9fe9,	// (0x00054b5e) main_vradio_pane_t1

0x9ffb,	// (0x00054b70) main_vradio_pane_t2_ParamLimits

0x9ffb,	// (0x00054b70) main_vradio_pane_t2

0xed99,	// (0x0005990e) main_vradio_pane_t3_ParamLimits

0xed99,	// (0x0005990e) main_vradio_pane_t3

0x0002,

0xf840,	// (0x0005a3b5) main_vradio_pane_t_ParamLimits

0xf840,	// (0x0005a3b5) main_vradio_pane_t

0xa00d,	// (0x00054b82) vradio_rocker_control_pane_ParamLimits

0xa00d,	// (0x00054b82) vradio_rocker_control_pane

0xa019,	// (0x00054b8e) vradio_station_info_pane_ParamLimits

0xa019,	// (0x00054b8e) vradio_station_info_pane

0xedab,	// (0x00059920) vradio_frequency_info_pane_ParamLimits

0xedab,	// (0x00059920) vradio_frequency_info_pane

0xe798,	// (0x0005930d) vradio_station_info_pane_g1

0xedba,	// (0x0005992f) vradio_station_info_pane_t1_ParamLimits

0xedba,	// (0x0005992f) vradio_station_info_pane_t1

0xeddc,	// (0x00059951) vradio_station_info_pane_t2_ParamLimits

0xeddc,	// (0x00059951) vradio_station_info_pane_t2

0x0001,

0xf847,	// (0x0005a3bc) vradio_station_info_pane_t_ParamLimits

0xf847,	// (0x0005a3bc) vradio_station_info_pane_t

0xedee,	// (0x00059963) vradio_tuning_pane

0xedf6,	// (0x0005996b) vradio_rocker_control_pane_g1

0xedfe,	// (0x00059973) vradio_rocker_control_pane_g2

0xee06,	// (0x0005997b) vradio_rocker_control_pane_g3

0xee0e,	// (0x00059983) vradio_rocker_control_pane_g4

0xee16,	// (0x0005998b) vradio_rocker_control_pane_g5

0x0004,

0xf84c,	// (0x0005a3c1) vradio_rocker_control_pane_g

0xa026,	// (0x00054b9b) vradio_frequency_info_pane_g1

0xee1e,	// (0x00059993) vradio_frequency_info_pane_t1_ParamLimits

0xee1e,	// (0x00059993) vradio_frequency_info_pane_t1

0xa02e,	// (0x00054ba3) vradio_tuning_pane_g1

0xa037,	// (0x00054bac) vradio_tuning_pane_t1

0x5ba0,	// (0x00050715) area_side_right_pane_ParamLimits

0x5ba0,	// (0x00050715) area_side_right_pane

0xe341,	// (0x00058eb6) status_small_pane_g1

0xe349,	// (0x00058ebe) status_small_pane_g2

0xe352,	// (0x00058ec7) status_small_pane_g3

0xe35b,	// (0x00058ed0) status_small_pane_g4

0x0003,

0xf607,	// (0x0005a17c) status_small_pane_g

0xe364,	// (0x00058ed9) status_small_pane_t1

0x5d83,	// (0x000508f8) main_video3_pane

0xee32,	// (0x000599a7) cams_zoom_vslider_pane

0xee3a,	// (0x000599af) image3_wide_pane_ParamLimits

0xee3a,	// (0x000599af) image3_wide_pane

0xee54,	// (0x000599c9) image3_wide_small_pane

0xee5e,	// (0x000599d3) main_video3_pane_g1_ParamLimits

0xee5e,	// (0x000599d3) main_video3_pane_g1

0xee7a,	// (0x000599ef) main_video3_pane_g2_ParamLimits

0xee7a,	// (0x000599ef) main_video3_pane_g2

0x0001,

0xf857,	// (0x0005a3cc) main_video3_pane_g_ParamLimits

0xf857,	// (0x0005a3cc) main_video3_pane_g

0xee96,	// (0x00059a0b) main_video3_pane_t1_ParamLimits

0xee96,	// (0x00059a0b) main_video3_pane_t1

0xeec1,	// (0x00059a36) main_video3_pane_t2_ParamLimits

0xeec1,	// (0x00059a36) main_video3_pane_t2

0xeeec,	// (0x00059a61) main_video3_pane_t3_ParamLimits

0xeeec,	// (0x00059a61) main_video3_pane_t3

0x0002,

0xf85c,	// (0x0005a3d1) main_video3_pane_t_ParamLimits

0xf85c,	// (0x0005a3d1) main_video3_pane_t

0xef17,	// (0x00059a8c) cams_zoom_vslider_pane_g1

0xef20,	// (0x00059a95) cams_zoom_vslider_pane_g2

0x0001,

0xf863,	// (0x0005a3d8) cams_zoom_vslider_pane_g

0xef28,	// (0x00059a9d) small_slider_vertical_pane

0xe798,	// (0x0005930d) small_slider_vertical_pane_g1

0xe798,	// (0x0005930d) small_slider_vertical_pane_g2

0xef30,	// (0x00059aa5) small_slider_vertical_pane_g3

0x0002,

0xf868,	// (0x0005a3dd) small_slider_vertical_pane_g

0x5d83,	// (0x000508f8) main_hwr_training_pane

0xef39,	// (0x00059aae) hwr_training_instruct_pane_ParamLimits

0xef39,	// (0x00059aae) hwr_training_instruct_pane

0xa046,	// (0x00054bbb) hwr_training_navi_pane_ParamLimits

0xa046,	// (0x00054bbb) hwr_training_navi_pane

0xa05a,	// (0x00054bcf) hwr_training_write_pane_ParamLimits

0xa05a,	// (0x00054bcf) hwr_training_write_pane

0x2b5c,	// (0x0004d6d1) bg_frame_shadow_pane

0xef68,	// (0x00059add) hwr_training_write_pane_g1

0xef70,	// (0x00059ae5) hwr_training_write_pane_g2

0xef78,	// (0x00059aed) hwr_training_write_pane_g3

0xef80,	// (0x00059af5) hwr_training_write_pane_g4

0xef88,	// (0x00059afd) hwr_training_write_pane_g5

0xef90,	// (0x00059b05) hwr_training_write_pane_g6

0xef98,	// (0x00059b0d) hwr_training_write_pane_g7

0x0006,

0xf86f,	// (0x0005a3e4) hwr_training_write_pane_g

0xa088,	// (0x00054bfd) hwr_training_navi_pane_g1_ParamLimits

0xa088,	// (0x00054bfd) hwr_training_navi_pane_g1

0xa09a,	// (0x00054c0f) hwr_training_navi_pane_g2_ParamLimits

0xa09a,	// (0x00054c0f) hwr_training_navi_pane_g2

0xa0ac,	// (0x00054c21) hwr_training_navi_pane_g3_ParamLimits

0xa0ac,	// (0x00054c21) hwr_training_navi_pane_g3

0xa0bc,	// (0x00054c31) hwr_training_navi_pane_g4_ParamLimits

0xa0bc,	// (0x00054c31) hwr_training_navi_pane_g4

0x0004,

0xf87e,	// (0x0005a3f3) hwr_training_navi_pane_g_ParamLimits

0xf87e,	// (0x0005a3f3) hwr_training_navi_pane_g

0xa0d6,	// (0x00054c4b) hwr_training_navi_pane_t1

0xa0e4,	// (0x00054c59) list_single_hwr_training_instruct_pane_ParamLimits

0xa0e4,	// (0x00054c59) list_single_hwr_training_instruct_pane

0xefa0,	// (0x00059b15) list_single_hwr_training_instruct_pane_t1

0xe6d8,	// (0x0005924d) bg_frame_shadow_pane_g1

0xefaf,	// (0x00059b24) bg_frame_shadow_pane_g2

0xefb7,	// (0x00059b2c) bg_frame_shadow_pane_g3

0xefbf,	// (0x00059b34) bg_frame_shadow_pane_g4

0xefc7,	// (0x00059b3c) bg_frame_shadow_pane_g5

0xefcf,	// (0x00059b44) bg_frame_shadow_pane_g6

0xefd7,	// (0x00059b4c) bg_frame_shadow_pane_g7

0x346f,	// (0x0004dfe4) bg_frame_shadow_pane_g8

0x0007,

0xf889,	// (0x0005a3fe) bg_frame_shadow_pane_g

0x5d83,	// (0x000508f8) main_video_tele_dialer_pane

0xa0fc,	// (0x00054c71) aid_size_cell_video_keypad_ParamLimits

0xa0fc,	// (0x00054c71) aid_size_cell_video_keypad

0xa10c,	// (0x00054c81) grid_video_dialer_keypad_pane_ParamLimits

0xa10c,	// (0x00054c81) grid_video_dialer_keypad_pane

0xa13c,	// (0x00054cb1) video_down_pane_cp_ParamLimits

0xa13c,	// (0x00054cb1) video_down_pane_cp

0xa164,	// (0x00054cd9) cell_video_dialer_keypad_pane_ParamLimits

0xa164,	// (0x00054cd9) cell_video_dialer_keypad_pane

0xefdf,	// (0x00059b54) bg_button_pane_cp08_ParamLimits

0xefdf,	// (0x00059b54) bg_button_pane_cp08

0xa179,	// (0x00054cee) cell_video_dialer_keypad_pane_g1_ParamLimits

0xa179,	// (0x00054cee) cell_video_dialer_keypad_pane_g1

0x99ce,	// (0x00054543) mup3_rocker2_pane_ParamLimits

0x99ce,	// (0x00054543) mup3_rocker2_pane

0xe798,	// (0x0005930d) mup3_rocker2_pane_g1

0x8a1b,	// (0x00053590) main_dialer2_pane

0x5d83,	// (0x000508f8) main_mp4_pane

0xa1c0,	// (0x00054d35) main_mp4_pane_g1_ParamLimits

0xa1c0,	// (0x00054d35) main_mp4_pane_g1

0xa1ce,	// (0x00054d43) main_mp4_pane_g2_ParamLimits

0xa1ce,	// (0x00054d43) main_mp4_pane_g2

0xa1dc,	// (0x00054d51) main_mp4_pane_g3_ParamLimits

0xa1dc,	// (0x00054d51) main_mp4_pane_g3

0xa211,	// (0x00054d86) main_mp4_pane_g4_ParamLimits

0xa211,	// (0x00054d86) main_mp4_pane_g4

0xa23f,	// (0x00054db4) main_mp4_pane_g5_ParamLimits

0xa23f,	// (0x00054db4) main_mp4_pane_g5

0x0007,

0xf8a9,	// (0x0005a41e) main_mp4_pane_g_ParamLimits

0xf8a9,	// (0x0005a41e) main_mp4_pane_g

0xa2b3,	// (0x00054e28) main_mp4_pane_t1_ParamLimits

0xa2b3,	// (0x00054e28) main_mp4_pane_t1

0xa30b,	// (0x00054e80) main_mp4_pane_t2_ParamLimits

0xa30b,	// (0x00054e80) main_mp4_pane_t2

0xefeb,	// (0x00059b60) main_mp4_pane_t3_ParamLimits

0xefeb,	// (0x00059b60) main_mp4_pane_t3

0xa35d,	// (0x00054ed2) main_mp4_pane_t4_ParamLimits

0xa35d,	// (0x00054ed2) main_mp4_pane_t4

0x0003,

0xf8ba,	// (0x0005a42f) main_mp4_pane_t_ParamLimits

0xf8ba,	// (0x0005a42f) main_mp4_pane_t

0xa39d,	// (0x00054f12) mp4_progress_pane_ParamLimits

0xa39d,	// (0x00054f12) mp4_progress_pane

0xa3e1,	// (0x00054f56) mp4_rocker_pane_ParamLimits

0xa3e1,	// (0x00054f56) mp4_rocker_pane

0xf019,	// (0x00059b8e) mp4_progress_pane_t1

0xf030,	// (0x00059ba5) mp4_progress_pane_t2

0x0001,

0xf8c3,	// (0x0005a438) mp4_progress_pane_t

0xf047,	// (0x00059bbc) mup_progress_pane_cp04

0xf053,	// (0x00059bc8) mp4_rocker_pane_g1

0xa3ff,	// (0x00054f74) aid_cell_size_keypad2_ParamLimits

0xa3ff,	// (0x00054f74) aid_cell_size_keypad2

0xa40f,	// (0x00054f84) dialer2_ne_pane_ParamLimits

0xa40f,	// (0x00054f84) dialer2_ne_pane

0xa41b,	// (0x00054f90) grid_dialer2_keypad_pane_ParamLimits

0xa41b,	// (0x00054f90) grid_dialer2_keypad_pane

0x146d,	// (0x0004bfe2) bg_popup_call_pane_cp07_ParamLimits

0x146d,	// (0x0004bfe2) bg_popup_call_pane_cp07

0xa427,	// (0x00054f9c) dialer2_ne_pane_t1_ParamLimits

0xa427,	// (0x00054f9c) dialer2_ne_pane_t1

0xa44c,	// (0x00054fc1) cell_dialer2_keypad_pane_ParamLimits

0xa44c,	// (0x00054fc1) cell_dialer2_keypad_pane

0xf06f,	// (0x00059be4) bg_button_pane_pane_cp04_ParamLimits

0xf06f,	// (0x00059be4) bg_button_pane_pane_cp04

0xa461,	// (0x00054fd6) cell_dialer2_keypad_pane_g1_ParamLimits

0xa461,	// (0x00054fd6) cell_dialer2_keypad_pane_g1

0x6b5a,	// (0x000516cf) aid_placing_vt_set_content_ParamLimits

0x6b5a,	// (0x000516cf) aid_placing_vt_set_content

0x6b80,	// (0x000516f5) aid_placing_vt_set_title_ParamLimits

0x6b80,	// (0x000516f5) aid_placing_vt_set_title

0x5d83,	// (0x000508f8) main_image3_pane

0xa4d5,	// (0x0005504a) area_side_right_pane_cp01_ParamLimits

0xa4d5,	// (0x0005504a) area_side_right_pane_cp01

0xa502,	// (0x00055077) main_image3_pane_g1_ParamLimits

0xa502,	// (0x00055077) main_image3_pane_g1

0xa510,	// (0x00055085) main_image3_pane_g2_ParamLimits

0xa510,	// (0x00055085) main_image3_pane_g2

0xa527,	// (0x0005509c) main_image3_pane_g3_ParamLimits

0xa527,	// (0x0005509c) main_image3_pane_g3

0xa53e,	// (0x000550b3) main_image3_pane_g4_ParamLimits

0xa53e,	// (0x000550b3) main_image3_pane_g4

0x0003,

0xf8d2,	// (0x0005a447) main_image3_pane_g_ParamLimits

0xf8d2,	// (0x0005a447) main_image3_pane_g

0xa555,	// (0x000550ca) main_image3_pane_t1_ParamLimits

0xa555,	// (0x000550ca) main_image3_pane_t1

0xa57a,	// (0x000550ef) main_image3_pane_t2_ParamLimits

0xa57a,	// (0x000550ef) main_image3_pane_t2

0xa599,	// (0x0005510e) main_image3_pane_t3_ParamLimits

0xa599,	// (0x0005510e) main_image3_pane_t3

0x0003,

0xf8db,	// (0x0005a450) main_image3_pane_t_ParamLimits

0xf8db,	// (0x0005a450) main_image3_pane_t

0x2b13,	// (0x0004d688) grid_sctrl_middle_pane_cp01_ParamLimits

0x2b13,	// (0x0004d688) grid_sctrl_middle_pane_cp01

0xa5f4,	// (0x00055169) cell_sctrl_middle_pane_cp01_ParamLimits

0xa5f4,	// (0x00055169) cell_sctrl_middle_pane_cp01

0xa605,	// (0x0005517a) cell_sctrl_middle_pane_cp01_g1_ParamLimits

0xa605,	// (0x0005517a) cell_sctrl_middle_pane_cp01_g1

0x5d83,	// (0x000508f8) main_call4_pane

0xa612,	// (0x00055187) aid_size_button_call4_ParamLimits

0xa612,	// (0x00055187) aid_size_button_call4

0xa63c,	// (0x000551b1) call4_windows_pane_ParamLimits

0xa63c,	// (0x000551b1) call4_windows_pane

0xa650,	// (0x000551c5) grid_call4_button_pane_ParamLimits

0xa650,	// (0x000551c5) grid_call4_button_pane

0xf093,	// (0x00059c08) call4_windows_conf_pane

0xa672,	// (0x000551e7) popup_call4_audio_first_window_ParamLimits

0xa672,	// (0x000551e7) popup_call4_audio_first_window

0xa692,	// (0x00055207) popup_call4_audio_second_window_ParamLimits

0xa692,	// (0x00055207) popup_call4_audio_second_window

0x0bb1,	// (0x0004b726) popup_call4_audio_wait_window_ParamLimits

0x0bb1,	// (0x0004b726) popup_call4_audio_wait_window

0xa6a4,	// (0x00055219) cell_call4_button_pane_ParamLimits

0xa6a4,	// (0x00055219) cell_call4_button_pane

0x3419,	// (0x0004df8e) bg_button_pane_cp09_ParamLimits

0x3419,	// (0x0004df8e) bg_button_pane_cp09

0xa6c7,	// (0x0005523c) cell_call4_button_pane_g1_ParamLimits

0xa6c7,	// (0x0005523c) cell_call4_button_pane_g1

0xa6d4,	// (0x00055249) cell_call4_button_pane_t1_ParamLimits

0xa6d4,	// (0x00055249) cell_call4_button_pane_t1

0x0bf7,	// (0x0004b76c) popup_call4_audio_conf_window_ParamLimits

0x0bf7,	// (0x0004b76c) popup_call4_audio_conf_window

0x99ff,	// (0x00054574) mup3_progress_pane_t1_ParamLimits

0x9a1d,	// (0x00054592) mup3_progress_pane_t2_ParamLimits

0xea42,	// (0x000595b7) mup3_progress_pane_t3_ParamLimits

0xf7ab,	// (0x0005a320) mup3_progress_pane_t_ParamLimits

0xea5f,	// (0x000595d4) mup_progress_pane_cp03_ParamLimits

0x9ef8,	// (0x00054a6d) mup3_control_keys_pane_g4_copy1

0xa3cb,	// (0x00054f40) mp4_rocker2_pane_ParamLimits

0xa3cb,	// (0x00054f40) mp4_rocker2_pane

0x0c13,	// (0x0004b788) mp4_rocker2_pane_g1

0x0c0b,	// (0x0004b780) mp4_rocker2_pane_g2

0xa718,	// (0x0005528d) mp4_rocker2_pane_g3

0xa720,	// (0x00055295) mp4_rocker2_pane_g4

0xa728,	// (0x0005529d) mp4_rocker2_pane_g5

0x0004,

0xf8e4,	// (0x0005a459) mp4_rocker2_pane_g

0x5d83,	// (0x000508f8) main_camera4_pane

0x5d83,	// (0x000508f8) main_video4_pane

0xa118,	// (0x00054c8d) main_video_tele_dialer_pane_t1_ParamLimits

0xa118,	// (0x00054c8d) main_video_tele_dialer_pane_t1

0xa12a,	// (0x00054c9f) main_video_tele_dialer_pane_t2_ParamLimits

0xa12a,	// (0x00054c9f) main_video_tele_dialer_pane_t2

0x0001,

0xf89a,	// (0x0005a40f) main_video_tele_dialer_pane_t_ParamLimits

0xf89a,	// (0x0005a40f) main_video_tele_dialer_pane_t

0xa746,	// (0x000552bb) cam4_autofocus_pane_ParamLimits

0xa746,	// (0x000552bb) cam4_autofocus_pane

0xa75c,	// (0x000552d1) cam4_image_uncrop_pane_ParamLimits

0xa75c,	// (0x000552d1) cam4_image_uncrop_pane

0xa771,	// (0x000552e6) cam4_indicators_pane_ParamLimits

0xa771,	// (0x000552e6) cam4_indicators_pane

0xa78b,	// (0x00055300) main_camera4_pane_g1_ParamLimits

0xa78b,	// (0x00055300) main_camera4_pane_g1

0xa797,	// (0x0005530c) main_camera4_pane_g2_ParamLimits

0xa797,	// (0x0005530c) main_camera4_pane_g2

0xa797,	// (0x0005530c) main_camera4_pane_g3_ParamLimits

0xa797,	// (0x0005530c) main_camera4_pane_g3

0xa7a3,	// (0x00055318) main_camera4_pane_g4_ParamLimits

0xa7a3,	// (0x00055318) main_camera4_pane_g4

0xa7af,	// (0x00055324) main_camera4_pane_g5_ParamLimits

0xa7af,	// (0x00055324) main_camera4_pane_g5

0x0005,

0xf8ef,	// (0x0005a464) main_camera4_pane_g_ParamLimits

0xf8ef,	// (0x0005a464) main_camera4_pane_g

0xa7c9,	// (0x0005533e) main_camera4_pane_t1_ParamLimits

0xa7c9,	// (0x0005533e) main_camera4_pane_t1

0xa811,	// (0x00055386) bg_tb_trans_pane_cp06

0xa827,	// (0x0005539c) cam4_indicators_pane_g1

0xa837,	// (0x000553ac) cam4_indicators_pane_g2

0x0002,

0xf90a,	// (0x0005a47f) cam4_indicators_pane_g

0xa857,	// (0x000553cc) cam4_indicators_pane_t1

0xa87f,	// (0x000553f4) main_video4_pane_g1_ParamLimits

0xa87f,	// (0x000553f4) main_video4_pane_g1

0xa797,	// (0x0005530c) main_video4_pane_g2_ParamLimits

0xa797,	// (0x0005530c) main_video4_pane_g2

0xa797,	// (0x0005530c) main_video4_pane_g3_ParamLimits

0xa797,	// (0x0005530c) main_video4_pane_g3

0xa7a3,	// (0x00055318) main_video4_pane_g4_ParamLimits

0xa7a3,	// (0x00055318) main_video4_pane_g4

0x0004,

0xf911,	// (0x0005a486) main_video4_pane_g_ParamLimits

0xf911,	// (0x0005a486) main_video4_pane_g

0xa893,	// (0x00055408) vid4_indicators_pane_ParamLimits

0xa893,	// (0x00055408) vid4_indicators_pane

0xa8b1,	// (0x00055426) video4_image_uncrop_cif_pane_ParamLimits

0xa8b1,	// (0x00055426) video4_image_uncrop_cif_pane

0xa8be,	// (0x00055433) video4_image_uncrop_nhd_pane_ParamLimits

0xa8be,	// (0x00055433) video4_image_uncrop_nhd_pane

0xa75c,	// (0x000552d1) video4_image_uncrop_vga_pane_ParamLimits

0xa75c,	// (0x000552d1) video4_image_uncrop_vga_pane

0x8a0d,	// (0x00053582) bg_tb_trans_pane_cp07

0xa827,	// (0x0005539c) vid4_indicators_pane_g1

0xa8cb,	// (0x00055440) vid4_indicators_pane_g2

0xa8db,	// (0x00055450) vid4_indicators_pane_g3

0x0004,

0xf91c,	// (0x0005a491) vid4_indicators_pane_g

0xa908,	// (0x0005547d) vid4_indicators_pane_t1

0xa922,	// (0x00055497) cam4_autofocus_pane_g1

0xa92a,	// (0x0005549f) cam4_autofocus_pane_g2

0xa932,	// (0x000554a7) cam4_autofocus_pane_g3

0x0002,

0xf927,	// (0x0005a49c) cam4_autofocus_pane_g

0xa93a,	// (0x000554af) cam4_autofocus_pane_g3_copy1

0xa148,	// (0x00054cbd) video_down_pane_cp_t1

0xa156,	// (0x00054ccb) video_down_pane_cp_t2

0x0001,

0xf89f,	// (0x0005a414) video_down_pane_cp_t

0x5d6d,	// (0x000508e2) popup_vitu2_window_ParamLimits

0x5d6d,	// (0x000508e2) popup_vitu2_window

0xa942,	// (0x000554b7) aid_size_cell2_itu2_ParamLimits

0xa942,	// (0x000554b7) aid_size_cell2_itu2

0xa964,	// (0x000554d9) aid_size_cell_itu2_ParamLimits

0xa964,	// (0x000554d9) aid_size_cell_itu2

0xa9a2,	// (0x00055517) bg_popup_window_pane_cp09_ParamLimits

0xa9a2,	// (0x00055517) bg_popup_window_pane_cp09

0xa9b0,	// (0x00055525) field_vitu2_entry_pane_ParamLimits

0xa9b0,	// (0x00055525) field_vitu2_entry_pane

0xa9c4,	// (0x00055539) grid_vitu2_function_pane_ParamLimits

0xa9c4,	// (0x00055539) grid_vitu2_function_pane

0xa9f2,	// (0x00055567) grid_vitu2_itu_pane_ParamLimits

0xa9f2,	// (0x00055567) grid_vitu2_itu_pane

0xaa4a,	// (0x000555bf) cell_vitu2_itu_pane_ParamLimits

0xaa4a,	// (0x000555bf) cell_vitu2_itu_pane

0xaa62,	// (0x000555d7) cell_vitu2_function_pane_ParamLimits

0xaa62,	// (0x000555d7) cell_vitu2_function_pane

0x0d10,	// (0x0004b885) bg_popup_call_pane_cp08_ParamLimits

0x0d10,	// (0x0004b885) bg_popup_call_pane_cp08

0x0d27,	// (0x0004b89c) field_vitu2_entry_pane_g1

0x0d33,	// (0x0004b8a8) field_vitu2_entry_pane_g2

0x0002,

0xf92e,	// (0x0005a4a3) field_vitu2_entry_pane_g

0xaaa1,	// (0x00055616) field_vitu2_entry_pane_t1_ParamLimits

0xaaa1,	// (0x00055616) field_vitu2_entry_pane_t1

0x0d4d,	// (0x0004b8c2) field_vitu2_entry_pane_t2_ParamLimits

0x0d4d,	// (0x0004b8c2) field_vitu2_entry_pane_t2

0x0001,

0xf935,	// (0x0005a4aa) field_vitu2_entry_pane_t_ParamLimits

0xf935,	// (0x0005a4aa) field_vitu2_entry_pane_t

0xaacf,	// (0x00055644) bg_button_pane_cp010_ParamLimits

0xaacf,	// (0x00055644) bg_button_pane_cp010

0xaadd,	// (0x00055652) cell_vitu2_itu_pane_g1

0xaafd,	// (0x00055672) cell_vitu2_itu_pane_t1_ParamLimits

0xaafd,	// (0x00055672) cell_vitu2_itu_pane_t1

0x5a4d,	// (0x000505c2) cell_vitu2_itu_pane_t2_ParamLimits

0x5a4d,	// (0x000505c2) cell_vitu2_itu_pane_t2

0x0002,

0xf93f,	// (0x0005a4b4) cell_vitu2_itu_pane_t_ParamLimits

0xf93f,	// (0x0005a4b4) cell_vitu2_itu_pane_t

0x8a0d,	// (0x00053582) bg_button_pane_cp011

0xab49,	// (0x000556be) cell_vitu2_function_pane_g1

0x5d83,	// (0x000508f8) main_myfav_hc_pane

0xa5d9,	// (0x0005514e) popup_image3_note_pane_ParamLimits

0xa5d9,	// (0x0005514e) popup_image3_note_pane

0xa5e5,	// (0x0005515a) popup_image3_tool_bar_pane_ParamLimits

0xa5e5,	// (0x0005515a) popup_image3_tool_bar_pane

0x5ac3,	// (0x00050638) cell_vitu2_itu_pane_t3_ParamLimits

0x5ac3,	// (0x00050638) cell_vitu2_itu_pane_t3

0x2b5c,	// (0x0004d6d1) bg_popup_trans_pane

0x0d84,	// (0x0004b8f9) grid_image3_tool_bar_pane

0x0d8e,	// (0x0004b903) bg_popup_trans_pane_g1

0x382c,	// (0x0004e3a1) bg_popup_trans_pane_g2

0x0d96,	// (0x0004b90b) bg_popup_trans_pane_g3

0x0d9e,	// (0x0004b913) bg_popup_trans_pane_g4

0x0da6,	// (0x0004b91b) bg_popup_trans_pane_g5

0x0dae,	// (0x0004b923) bg_popup_trans_pane_g6

0x0db6,	// (0x0004b92b) bg_popup_trans_pane_g7

0x0dbe,	// (0x0004b933) bg_popup_trans_pane_g8

0x380c,	// (0x0004e381) bg_popup_trans_pane_g9

0x0008,

0xf946,	// (0x0005a4bb) bg_popup_trans_pane_g

0x0dc6,	// (0x0004b93b) cell_image3_tool_bar_pane_ParamLimits

0x0dc6,	// (0x0004b93b) cell_image3_tool_bar_pane

0xe798,	// (0x0005930d) cell_image3_tool_bar_pane_g1

0x2b5c,	// (0x0004d6d1) bg_popup_trans_pane_cp1

0x0dda,	// (0x0004b94f) popup_image3_note_pane_t1

0x0de8,	// (0x0004b95d) popup_image3_note_pane_t2

0x0df6,	// (0x0004b96b) popup_image3_note_pane_t3

0x0002,

0xf959,	// (0x0005a4ce) popup_image3_note_pane_t

0x0e04,	// (0x0004b979) popup_image3_note_pane_t3_copy1

0xab5d,	// (0x000556d2) bg_myfav_hc_instruction_pane_ParamLimits

0xab5d,	// (0x000556d2) bg_myfav_hc_instruction_pane

0xab6f,	// (0x000556e4) cell_myfav_contact_pane_ParamLimits

0xab6f,	// (0x000556e4) cell_myfav_contact_pane

0xab89,	// (0x000556fe) cell_myfav_contact_pane_cp1_ParamLimits

0xab89,	// (0x000556fe) cell_myfav_contact_pane_cp1

0xab9f,	// (0x00055714) cell_myfav_contact_pane_cp2_ParamLimits

0xab9f,	// (0x00055714) cell_myfav_contact_pane_cp2

0xabb5,	// (0x0005572a) cell_myfav_contact_pane_cp3_ParamLimits

0xabb5,	// (0x0005572a) cell_myfav_contact_pane_cp3

0xabca,	// (0x0005573f) cell_myfav_contact_pane_cp4_ParamLimits

0xabca,	// (0x0005573f) cell_myfav_contact_pane_cp4

0xabde,	// (0x00055753) cell_myfav_contact_pane_cp5_ParamLimits

0xabde,	// (0x00055753) cell_myfav_contact_pane_cp5

0xabf2,	// (0x00055767) cell_myfav_contact_pane_cp6_ParamLimits

0xabf2,	// (0x00055767) cell_myfav_contact_pane_cp6

0xac06,	// (0x0005577b) cell_myfav_contact_pane_cp7_ParamLimits

0xac06,	// (0x0005577b) cell_myfav_contact_pane_cp7

0x0e12,	// (0x0004b987) listscroll_gen_pane_cp05

0xac1e,	// (0x00055793) main_myfav_hc_pane_g1_ParamLimits

0xac1e,	// (0x00055793) main_myfav_hc_pane_g1

0xac34,	// (0x000557a9) main_myfav_hc_pane_g2_ParamLimits

0xac34,	// (0x000557a9) main_myfav_hc_pane_g2

0x0002,

0xf960,	// (0x0005a4d5) main_myfav_hc_pane_g_ParamLimits

0xf960,	// (0x0005a4d5) main_myfav_hc_pane_g

0xac5e,	// (0x000557d3) main_myfav_hc_pane_t1_ParamLimits

0xac5e,	// (0x000557d3) main_myfav_hc_pane_t1

0x0e1b,	// (0x0004b990) main_myfav_hc_pane_t2_ParamLimits

0x0e1b,	// (0x0004b990) main_myfav_hc_pane_t2

0x0e2d,	// (0x0004b9a2) main_myfav_hc_pane_t3_ParamLimits

0x0e2d,	// (0x0004b9a2) main_myfav_hc_pane_t3

0xac73,	// (0x000557e8) main_myfav_hc_pane_t4_ParamLimits

0xac73,	// (0x000557e8) main_myfav_hc_pane_t4

0x0004,

0xf967,	// (0x0005a4dc) main_myfav_hc_pane_t_ParamLimits

0xf967,	// (0x0005a4dc) main_myfav_hc_pane_t

0xe798,	// (0x0005930d) bg_myfav_hc_instruction_pane_g1

0x0e3f,	// (0x0004b9b4) cell_myfav_contact_pane_g1_ParamLimits

0x0e3f,	// (0x0004b9b4) cell_myfav_contact_pane_g1

0x0e3f,	// (0x0004b9b4) cell_myfav_contact_pane_g2_ParamLimits

0x0e3f,	// (0x0004b9b4) cell_myfav_contact_pane_g2

0x0e4b,	// (0x0004b9c0) cell_myfav_contact_pane_g3_ParamLimits

0x0e4b,	// (0x0004b9c0) cell_myfav_contact_pane_g3

0xea2c,	// (0x000595a1) cell_myfav_contact_pane_g4_ParamLimits

0xea2c,	// (0x000595a1) cell_myfav_contact_pane_g4

0x0e58,	// (0x0004b9cd) cell_myfav_contact_pane_g5_ParamLimits

0x0e58,	// (0x0004b9cd) cell_myfav_contact_pane_g5

0x0004,

0xf972,	// (0x0005a4e7) cell_myfav_contact_pane_g_ParamLimits

0xf972,	// (0x0005a4e7) cell_myfav_contact_pane_g

0xac4a,	// (0x000557bf) main_myfav_hc_pane_g3_ParamLimits

0xac4a,	// (0x000557bf) main_myfav_hc_pane_g3

0x5cb1,	// (0x00050826) popup_adpt_find_window

0xac97,	// (0x0005580c) afind_page_pane_ParamLimits

0xac97,	// (0x0005580c) afind_page_pane

0xaca4,	// (0x00055819) aid_size_cell_afind_ParamLimits

0xaca4,	// (0x00055819) aid_size_cell_afind

0xacbe,	// (0x00055833) bg_popup_sub_pane_cp09_ParamLimits

0xacbe,	// (0x00055833) bg_popup_sub_pane_cp09

0xaccb,	// (0x00055840) find_pane_cp01_ParamLimits

0xaccb,	// (0x00055840) find_pane_cp01

0x0e64,	// (0x0004b9d9) grid_afind_control_pane_ParamLimits

0x0e64,	// (0x0004b9d9) grid_afind_control_pane

0xacd8,	// (0x0005584d) grid_afind_pane_ParamLimits

0xacd8,	// (0x0005584d) grid_afind_pane

0xacee,	// (0x00055863) cell_afind_pane_ParamLimits

0xacee,	// (0x00055863) cell_afind_pane

0xe798,	// (0x0005930d) afind_page_pane_g1

0xad24,	// (0x00055899) afind_page_pane_g2

0xad2d,	// (0x000558a2) afind_page_pane_g3

0x0002,

0xf97d,	// (0x0005a4f2) afind_page_pane_g

0xad36,	// (0x000558ab) afind_page_pane_t1

0x0e78,	// (0x0004b9ed) cell_afind_grid_control_pane_ParamLimits

0x0e78,	// (0x0004b9ed) cell_afind_grid_control_pane

0xf06f,	// (0x00059be4) bg_button_pane_cp69_ParamLimits

0xf06f,	// (0x00059be4) bg_button_pane_cp69

0xad56,	// (0x000558cb) cell_afind_pane_g1_ParamLimits

0xad56,	// (0x000558cb) cell_afind_pane_g1

0xad63,	// (0x000558d8) cell_afind_pane_t1_ParamLimits

0xad63,	// (0x000558d8) cell_afind_pane_t1

0x35fd,	// (0x0004e172) bg_button_pane_cp72

0x0e87,	// (0x0004b9fc) cell_afind_grid_control_pane_g1

0x8645,	// (0x000531ba) aid_image_placing_area_ParamLimits

0x8645,	// (0x000531ba) aid_image_placing_area

0xed3f,	// (0x000598b4) field_vitu_entry_pane_g1_ParamLimits

0xed3f,	// (0x000598b4) field_vitu_entry_pane_g1

0xed4b,	// (0x000598c0) field_vitu_entry_pane_g2_ParamLimits

0xed4b,	// (0x000598c0) field_vitu_entry_pane_g2

0x0001,

0xf82a,	// (0x0005a39f) field_vitu_entry_pane_g_ParamLimits

0xf82a,	// (0x0005a39f) field_vitu_entry_pane_g

0x9f73,	// (0x00054ae8) cell_vitu_itu_pane_g1_ParamLimits

0x9fb5,	// (0x00054b2a) cell_vitu_itu_pane_t3_ParamLimits

0x9fb5,	// (0x00054b2a) cell_vitu_itu_pane_t3

0xf019,	// (0x00059b8e) mp4_progress_pane_t1_ParamLimits

0xf030,	// (0x00059ba5) mp4_progress_pane_t2_ParamLimits

0xf8c3,	// (0x0005a438) mp4_progress_pane_t_ParamLimits

0xf047,	// (0x00059bbc) mup_progress_pane_cp04_ParamLimits

0xac85,	// (0x000557fa) main_myfav_hc_pane_t5_ParamLimits

0xac85,	// (0x000557fa) main_myfav_hc_pane_t5

0x5b69,	// (0x000506de) aid_zoom_text_primary

0x5cb1,	// (0x00050826) popup_adpt_find_window_ParamLimits

0x8a0d,	// (0x00053582) main_cam_set_pane

0xa77f,	// (0x000552f4) cam4_zoom_pane_ParamLimits

0xa77f,	// (0x000552f4) cam4_zoom_pane

0xad75,	// (0x000558ea) main_cam_set_pane_g1_ParamLimits

0xad75,	// (0x000558ea) main_cam_set_pane_g1

0xad83,	// (0x000558f8) main_cam_set_pane_g2_ParamLimits

0xad83,	// (0x000558f8) main_cam_set_pane_g2

0x0001,

0xf984,	// (0x0005a4f9) main_cam_set_pane_g_ParamLimits

0xf984,	// (0x0005a4f9) main_cam_set_pane_g

0xad8f,	// (0x00055904) main_cam_set_pane_t1_ParamLimits

0xad8f,	// (0x00055904) main_cam_set_pane_t1

0xada1,	// (0x00055916) main_cset_listscroll_pane_ParamLimits

0xada1,	// (0x00055916) main_cset_listscroll_pane

0xadca,	// (0x0005593f) main_cset_slider_pane_ParamLimits

0xadca,	// (0x0005593f) main_cset_slider_pane

0x0e98,	// (0x0004ba0d) main_cset_list_pane_ParamLimits

0x0e98,	// (0x0004ba0d) main_cset_list_pane

0x0ea8,	// (0x0004ba1d) scroll_pane_cp028

0xade9,	// (0x0005595e) aid_area_touch_slider

0xae05,	// (0x0005597a) cset_slider_pane

0xae2f,	// (0x000559a4) main_cset_slider_pane_g1

0xae44,	// (0x000559b9) main_cset_slider_pane_g2

0x0011,

0xf989,	// (0x0005a4fe) main_cset_slider_pane_g

0x0ee1,	// (0x0004ba56) main_cset_slider_pane_t1

0xaf00,	// (0x00055a75) main_cset_slider_pane_t2

0xaf1a,	// (0x00055a8f) main_cset_slider_pane_t3

0xaf34,	// (0x00055aa9) main_cset_slider_pane_t4

0xaf4e,	// (0x00055ac3) main_cset_slider_pane_t5

0xaf68,	// (0x00055add) main_cset_slider_pane_t6

0xaf7d,	// (0x00055af2) main_cset_slider_pane_t7

0x000e,

0xf9ae,	// (0x0005a523) main_cset_slider_pane_t

0xb081,	// (0x00055bf6) cset_list_set_pane_ParamLimits

0xb081,	// (0x00055bf6) cset_list_set_pane

0xb091,	// (0x00055c06) aid_position_infowindow_above

0xb099,	// (0x00055c0e) aid_position_infowindow_below

0xb0a1,	// (0x00055c16) cset_list_set_pane_g1_ParamLimits

0xb0a1,	// (0x00055c16) cset_list_set_pane_g1

0xb0ad,	// (0x00055c22) cset_list_set_pane_g3_ParamLimits

0xb0ad,	// (0x00055c22) cset_list_set_pane_g3

0x0001,

0xf9cd,	// (0x0005a542) cset_list_set_pane_g_ParamLimits

0xf9cd,	// (0x0005a542) cset_list_set_pane_g

0xb0bc,	// (0x00055c31) cset_list_set_pane_t1_ParamLimits

0xb0bc,	// (0x00055c31) cset_list_set_pane_t1

0x4b0e,	// (0x0004f683) list_highlight_pane_cp021_ParamLimits

0x4b0e,	// (0x0004f683) list_highlight_pane_cp021

0x40d7,	// (0x0004ec4c) cset_slider_pane_g1

0x40e9,	// (0x0004ec5e) cset_slider_pane_g2

0x40e0,	// (0x0004ec55) cset_slider_pane_g3

0x0002,

0xf9d2,	// (0x0005a547) cset_slider_pane_g

0xb0d1,	// (0x00055c46) aid_area_touch_cam4_zoom

0xb0d9,	// (0x00055c4e) cam4_zoom_cont_pane

0xb0e1,	// (0x00055c56) cam4_zoom_pane_g1

0xb0e9,	// (0x00055c5e) cam4_zoom_pane_g2

0xb0f1,	// (0x00055c66) cam4_zoom_pane_g3

0x0002,

0xf9d9,	// (0x0005a54e) cam4_zoom_pane_g

0xb0f9,	// (0x00055c6e) cam4_zoom_cont_pane_g1

0xb102,	// (0x00055c77) cam4_zoom_cont_pane_g2

0xb10b,	// (0x00055c80) cam4_zoom_cont_pane_g3

0x0002,

0xf9e0,	// (0x0005a555) cam4_zoom_cont_pane_g

0xa62c,	// (0x000551a1) call4_image_pane_ParamLimits

0xa62c,	// (0x000551a1) call4_image_pane

0xf093,	// (0x00059c08) call4_windows_conf_pane_ParamLimits

0xf0a6,	// (0x00059c1b) popup_call4_audio_in_window_ParamLimits

0xf0a6,	// (0x00059c1b) popup_call4_audio_in_window

0x2b5c,	// (0x0004d6d1) bg_popup_call2_act_pane_cp02

0x0bef,	// (0x0004b764) call4_list_conf_pane

0xe798,	// (0x0005930d) call4_image_pane_g1

0xe798,	// (0x0005930d) call4_image_pane_g2

0x0001,

0xf6eb,	// (0x0005a260) call4_image_pane_g

0x0f9c,	// (0x0004bb11) list_single_graphic_popup_conf4_pane_ParamLimits

0x0f9c,	// (0x0004bb11) list_single_graphic_popup_conf4_pane

0x2b5c,	// (0x0004d6d1) list_highlight_pane_cp022

0x0faf,	// (0x0004bb24) list_single_graphic_popup_conf4_pane_g1

0x3d0c,	// (0x0004e881) list_single_graphic_popup_conf4_pane_g2

0x0001,

0xf9e7,	// (0x0005a55c) list_single_graphic_popup_conf4_pane_g

0x0fb7,	// (0x0004bb2c) list_single_graphic_popup_conf4_pane_t1

0x6cc4,	// (0x00051839) popup_vtel_slider_window_ParamLimits

0x6cc4,	// (0x00051839) popup_vtel_slider_window

0xf05d,	// (0x00059bd2) dialer2_ne_pane_t2_ParamLimits

0xf05d,	// (0x00059bd2) dialer2_ne_pane_t2

0x0001,

0xf8c8,	// (0x0005a43d) dialer2_ne_pane_t_ParamLimits

0xf8c8,	// (0x0005a43d) dialer2_ne_pane_t

0x4b0e,	// (0x0004f683) bg_popup_sub_pane_cp010_ParamLimits

0x4b0e,	// (0x0004f683) bg_popup_sub_pane_cp010

0xb114,	// (0x00055c89) popup_vtel_slider_window_g1_ParamLimits

0xb114,	// (0x00055c89) popup_vtel_slider_window_g1

0xb120,	// (0x00055c95) popup_vtel_slider_window_g2_ParamLimits

0xb120,	// (0x00055c95) popup_vtel_slider_window_g2

0x0003,

0xf9ec,	// (0x0005a561) popup_vtel_slider_window_g_ParamLimits

0xf9ec,	// (0x0005a561) popup_vtel_slider_window_g

0xb166,	// (0x00055cdb) vtel_slider_pane_ParamLimits

0xb166,	// (0x00055cdb) vtel_slider_pane

0xb175,	// (0x00055cea) vtel_slider_pane_g1_ParamLimits

0xb175,	// (0x00055cea) vtel_slider_pane_g1

0xb182,	// (0x00055cf7) vtel_slider_pane_g2_ParamLimits

0xb182,	// (0x00055cf7) vtel_slider_pane_g2

0xb18f,	// (0x00055d04) vtel_slider_pane_g3_ParamLimits

0xb18f,	// (0x00055d04) vtel_slider_pane_g3

0xb175,	// (0x00055cea) vtel_slider_pane_g4_ParamLimits

0xb175,	// (0x00055cea) vtel_slider_pane_g4

0xb19c,	// (0x00055d11) vtel_slider_pane_g5_ParamLimits

0xb19c,	// (0x00055d11) vtel_slider_pane_g5

0x0004,

0xf9f5,	// (0x0005a56a) vtel_slider_pane_g_ParamLimits

0xf9f5,	// (0x0005a56a) vtel_slider_pane_g

0x8a0d,	// (0x00053582) main_gallery2_pane

0xa98a,	// (0x000554ff) aid_size_row_itut2_dropdow_list_ParamLimits

0xa98a,	// (0x000554ff) aid_size_row_itut2_dropdow_list

0xa9da,	// (0x0005554f) grid_vitu2_function_top_pane_ParamLimits

0xa9da,	// (0x0005554f) grid_vitu2_function_top_pane

0xaa16,	// (0x0005558b) popup_vitu2_dropdown_list_window_ParamLimits

0xaa16,	// (0x0005558b) popup_vitu2_dropdown_list_window

0xaa2e,	// (0x000555a3) popup_vitu2_match_list_window

0xb1b7,	// (0x00055d2c) cell_vitu2_function_top_pane_ParamLimits

0xb1b7,	// (0x00055d2c) cell_vitu2_function_top_pane

0xb1cf,	// (0x00055d44) cell_vitu2_function_top_pane_cp01_ParamLimits

0xb1cf,	// (0x00055d44) cell_vitu2_function_top_pane_cp01

0xb1eb,	// (0x00055d60) cell_vitu2_function_top_wide_pane_ParamLimits

0xb1eb,	// (0x00055d60) cell_vitu2_function_top_wide_pane

0x8a0d,	// (0x00053582) bg_button_pane_cp012

0xb207,	// (0x00055d7c) cell_vitu2_function_top_pane_g1

0xb21b,	// (0x00055d90) bg_button_pane_cp013_ParamLimits

0xb21b,	// (0x00055d90) bg_button_pane_cp013

0xb237,	// (0x00055dac) cell_vitu2_function_top_wide_pane_g1_ParamLimits

0xb237,	// (0x00055dac) cell_vitu2_function_top_wide_pane_g1

0x5d6d,	// (0x000508e2) bg_popup_sub_pane_cp20

0xb24f,	// (0x00055dc4) list_vitu2_match_list_pane

0x0d8e,	// (0x0004b903) bg_popup_sub_pane_cp20_g1

0x0d96,	// (0x0004b90b) bg_popup_sub_pane_cp20_g2

0x382c,	// (0x0004e3a1) bg_popup_sub_pane_cp20_g3

0x0d9e,	// (0x0004b913) bg_popup_sub_pane_cp20_g4

0x380c,	// (0x0004e381) bg_popup_sub_pane_cp20_g5

0x0fcd,	// (0x0004bb42) bg_popup_sub_pane_cp20_g6

0x0dae,	// (0x0004b923) bg_popup_sub_pane_cp20_g7

0x0db6,	// (0x0004b92b) bg_popup_sub_pane_cp20_g8

0x0dbe,	// (0x0004b933) bg_popup_sub_pane_cp20_g9

0x0008,

0xfa00,	// (0x0005a575) bg_popup_sub_pane_cp20_g

0xb267,	// (0x00055ddc) list_vitu2_match_list_item_pane_ParamLimits

0xb267,	// (0x00055ddc) list_vitu2_match_list_item_pane

0xb279,	// (0x00055dee) list_vitu2_match_list_item_pane_t1

0x5d83,	// (0x000508f8) bg_popup_sub_pane_cp21

0xb2ce,	// (0x00055e43) grid_vitu2_dropdown_list_pane

0xb2d6,	// (0x00055e4b) cell_vitu2_dropdown_list_char_pane_ParamLimits

0xb2d6,	// (0x00055e4b) cell_vitu2_dropdown_list_char_pane

0xb2f7,	// (0x00055e6c) cell_vitu2_dropdown_list_ctrl_pane_ParamLimits

0xb2f7,	// (0x00055e6c) cell_vitu2_dropdown_list_ctrl_pane

0x0fe7,	// (0x0004bb5c) cell_vitu2_dropdown_list_char_pane_g1

0x0fde,	// (0x0004bb53) cell_vitu2_dropdown_list_char_pane_g2

0x0fd5,	// (0x0004bb4a) cell_vitu2_dropdown_list_char_pane_g3

0x0002,

0xfa1d,	// (0x0005a592) cell_vitu2_dropdown_list_char_pane_g

0xb323,	// (0x00055e98) cell_vitu2_dropdown_list_char_pane_t1

0xb331,	// (0x00055ea6) cell_vitu2_dropdown_list_ctrl_pane_g1_ParamLimits

0xb331,	// (0x00055ea6) cell_vitu2_dropdown_list_ctrl_pane_g1

0xb341,	// (0x00055eb6) cell_vitu2_dropdown_list_ctrl_pane_g2_ParamLimits

0xb341,	// (0x00055eb6) cell_vitu2_dropdown_list_ctrl_pane_g2

0xb352,	// (0x00055ec7) cell_vitu2_dropdown_list_ctrl_pane_g3_ParamLimits

0xb352,	// (0x00055ec7) cell_vitu2_dropdown_list_ctrl_pane_g3

0xb362,	// (0x00055ed7) cell_vitu2_dropdown_list_ctrl_pane_g4_ParamLimits

0xb362,	// (0x00055ed7) cell_vitu2_dropdown_list_ctrl_pane_g4

0xa811,	// (0x00055386) cell_vitu2_dropdown_list_ctrl_pane_g5_ParamLimits

0xa811,	// (0x00055386) cell_vitu2_dropdown_list_ctrl_pane_g5

0x0004,

0xfa24,	// (0x0005a599) cell_vitu2_dropdown_list_ctrl_pane_g_ParamLimits

0xfa24,	// (0x0005a599) cell_vitu2_dropdown_list_ctrl_pane_g

0xb37b,	// (0x00055ef0) aid_size_cell_gallery2_ParamLimits

0xb37b,	// (0x00055ef0) aid_size_cell_gallery2

0xb395,	// (0x00055f0a) grid_gallery2_pane_ParamLimits

0xb395,	// (0x00055f0a) grid_gallery2_pane

0x9e22,	// (0x00054997) scroll_pane_cp029_ParamLimits

0x9e22,	// (0x00054997) scroll_pane_cp029

0xb3a6,	// (0x00055f1b) cell_gallery2_pane_ParamLimits

0xb3a6,	// (0x00055f1b) cell_gallery2_pane

0x0ff0,	// (0x0004bb65) cell_gallery2_pane_g2

0xb3f3,	// (0x00055f68) cell_gallery2_pane_g3

0x0ff8,	// (0x0004bb6d) cell_gallery2_pane_g4

0x1000,	// (0x0004bb75) cell_gallery2_pane_g5

0x3573,	// (0x0004e0e8) grid_highlight_pane_cp10

0xaa2e,	// (0x000555a3) popup_vitu2_match_list_window_ParamLimits

0xaa3e,	// (0x000555b3) popup_vitu2_query_window_ParamLimits

0xaa3e,	// (0x000555b3) popup_vitu2_query_window

0x5d83,	// (0x000508f8) bg_vitu2_candi_button_pane

0x0fe7,	// (0x0004bb5c) cell_vitu2_dropdown_list_char_pane_g1_copy1

0x0fde,	// (0x0004bb53) cell_vitu2_dropdown_list_char_pane_g2_copy1

0x0fd5,	// (0x0004bb4a) cell_vitu2_dropdown_list_char_pane_g2_copy2

0xb3fb,	// (0x00055f70) bg_button_pane_cp015

0xb40b,	// (0x00055f80) bg_button_pane_cp016

0xb41e,	// (0x00055f93) bg_button_pane_cp017

0xe386,	// (0x00058efb) bg_popup_sub_pane_cp22

0x1008,	// (0x0004bb7d) popup_vitu2_query_window_g1

0xb461,	// (0x00055fd6) popup_vitu2_query_window_g2

0x0002,

0xfa2f,	// (0x0005a5a4) popup_vitu2_query_window_g

0xb47c,	// (0x00055ff1) popup_vitu2_query_window_t1_ParamLimits

0xb47c,	// (0x00055ff1) popup_vitu2_query_window_t1

0xb4af,	// (0x00056024) popup_vitu2_query_window_t2_ParamLimits

0xb4af,	// (0x00056024) popup_vitu2_query_window_t2

0xb4c1,	// (0x00056036) popup_vitu2_query_window_t3_ParamLimits

0xb4c1,	// (0x00056036) popup_vitu2_query_window_t3

0xb4e9,	// (0x0005605e) popup_vitu2_query_window_t4_ParamLimits

0xb4e9,	// (0x0005605e) popup_vitu2_query_window_t4

0xb506,	// (0x0005607b) popup_vitu2_query_window_t5_ParamLimits

0xb506,	// (0x0005607b) popup_vitu2_query_window_t5

0x0006,

0xfa36,	// (0x0005a5ab) popup_vitu2_query_window_t_ParamLimits

0xfa36,	// (0x0005a5ab) popup_vitu2_query_window_t

0x0e90,	// (0x0004ba05) main_cset_text_pane

0xade9,	// (0x0005595e) aid_area_touch_slider_ParamLimits

0xae05,	// (0x0005597a) cset_slider_pane_ParamLimits

0xae2f,	// (0x000559a4) main_cset_slider_pane_g1_ParamLimits

0xae44,	// (0x000559b9) main_cset_slider_pane_g2_ParamLimits

0x0eb1,	// (0x0004ba26) main_cset_slider_pane_g3_ParamLimits

0x0eb1,	// (0x0004ba26) main_cset_slider_pane_g3

0xae59,	// (0x000559ce) main_cset_slider_pane_g4_ParamLimits

0xae59,	// (0x000559ce) main_cset_slider_pane_g4

0xae68,	// (0x000559dd) main_cset_slider_pane_g5_ParamLimits

0xae68,	// (0x000559dd) main_cset_slider_pane_g5

0xae74,	// (0x000559e9) main_cset_slider_pane_g6_ParamLimits

0xae74,	// (0x000559e9) main_cset_slider_pane_g6

0xf989,	// (0x0005a4fe) main_cset_slider_pane_g_ParamLimits

0x0ee1,	// (0x0004ba56) main_cset_slider_pane_t1_ParamLimits

0xaf00,	// (0x00055a75) main_cset_slider_pane_t2_ParamLimits

0xaf1a,	// (0x00055a8f) main_cset_slider_pane_t3_ParamLimits

0xaf34,	// (0x00055aa9) main_cset_slider_pane_t4_ParamLimits

0xaf4e,	// (0x00055ac3) main_cset_slider_pane_t5_ParamLimits

0xaf68,	// (0x00055add) main_cset_slider_pane_t6_ParamLimits

0xaf7d,	// (0x00055af2) main_cset_slider_pane_t7_ParamLimits

0xafa7,	// (0x00055b1c) main_cset_slider_pane_t8_ParamLimits

0xafa7,	// (0x00055b1c) main_cset_slider_pane_t8

0xafcf,	// (0x00055b44) main_cset_slider_pane_t9_ParamLimits

0xafcf,	// (0x00055b44) main_cset_slider_pane_t9

0xaff7,	// (0x00055b6c) main_cset_slider_pane_t10_ParamLimits

0xaff7,	// (0x00055b6c) main_cset_slider_pane_t10

0xb01f,	// (0x00055b94) main_cset_slider_pane_t11_ParamLimits

0xb01f,	// (0x00055b94) main_cset_slider_pane_t11

0xb047,	// (0x00055bbc) main_cset_slider_pane_t12_ParamLimits

0xb047,	// (0x00055bbc) main_cset_slider_pane_t12

0xb064,	// (0x00055bd9) main_cset_slider_pane_t13_ParamLimits

0xb064,	// (0x00055bd9) main_cset_slider_pane_t13

0xf9ae,	// (0x0005a523) main_cset_slider_pane_t_ParamLimits

0x2b5c,	// (0x0004d6d1) bg_popup_sub_pane_cp011

0x1014,	// (0x0004bb89) main_cset_text_pane_g1

0x101c,	// (0x0004bb91) main_cset_text_pane_t1

0x102a,	// (0x0004bb9f) main_cset_text_pane_t2

0x1038,	// (0x0004bbad) main_cset_text_pane_t3

0x1046,	// (0x0004bbbb) main_cset_text_pane_t4

0x1054,	// (0x0004bbc9) main_cset_text_pane_t5

0x1062,	// (0x0004bbd7) main_cset_text_pane_t6

0x1070,	// (0x0004bbe5) main_cset_text_pane_t7

0x0006,

0xfa45,	// (0x0005a5ba) main_cset_text_pane_t

0x5d83,	// (0x000508f8) main_cam4_burst_pane

0x5d83,	// (0x000508f8) main_cam5_pane

0xad44,	// (0x000558b9) bg_button_pane_cp019

0xad4d,	// (0x000558c2) bg_button_pane_cp020

0x0ebd,	// (0x0004ba32) main_cset_slider_pane_g7_ParamLimits

0x0ebd,	// (0x0004ba32) main_cset_slider_pane_g7

0x0ec9,	// (0x0004ba3e) main_cset_slider_pane_g8_ParamLimits

0x0ec9,	// (0x0004ba3e) main_cset_slider_pane_g8

0xae88,	// (0x000559fd) main_cset_slider_pane_g9_ParamLimits

0xae88,	// (0x000559fd) main_cset_slider_pane_g9

0xae94,	// (0x00055a09) main_cset_slider_pane_g10_ParamLimits

0xae94,	// (0x00055a09) main_cset_slider_pane_g10

0xaea0,	// (0x00055a15) main_cset_slider_pane_g11_ParamLimits

0xaea0,	// (0x00055a15) main_cset_slider_pane_g11

0xaeac,	// (0x00055a21) main_cset_slider_pane_g12_ParamLimits

0xaeac,	// (0x00055a21) main_cset_slider_pane_g12

0xaeb8,	// (0x00055a2d) main_cset_slider_pane_g13_ParamLimits

0xaeb8,	// (0x00055a2d) main_cset_slider_pane_g13

0xaec4,	// (0x00055a39) main_cset_slider_pane_g14_ParamLimits

0xaec4,	// (0x00055a39) main_cset_slider_pane_g14

0xaed0,	// (0x00055a45) main_cset_slider_pane_g15_ParamLimits

0xaed0,	// (0x00055a45) main_cset_slider_pane_g15

0x0f0f,	// (0x0004ba84) main_cset_slider_pane_t14_ParamLimits

0x0f0f,	// (0x0004ba84) main_cset_slider_pane_t14

0x0f48,	// (0x0004babd) main_cset_slider_pane_t15_ParamLimits

0x0f48,	// (0x0004babd) main_cset_slider_pane_t15

0xb579,	// (0x000560ee) aid_cam4_burst_size_cell_ParamLimits

0xb579,	// (0x000560ee) aid_cam4_burst_size_cell

0xb595,	// (0x0005610a) grid_cam4_burst_pane_ParamLimits

0xb595,	// (0x0005610a) grid_cam4_burst_pane

0xb5b7,	// (0x0005612c) linegrid_cam4_burst_pane_ParamLimits

0xb5b7,	// (0x0005612c) linegrid_cam4_burst_pane

0xb5d5,	// (0x0005614a) scroll_pane_cp30_ParamLimits

0xb5d5,	// (0x0005614a) scroll_pane_cp30

0xb5e1,	// (0x00056156) cell_cam4_burst_pane_ParamLimits

0xb5e1,	// (0x00056156) cell_cam4_burst_pane

0x107e,	// (0x0004bbf3) linegrid_cam4_burst_pane_g1_ParamLimits

0x107e,	// (0x0004bbf3) linegrid_cam4_burst_pane_g1

0xb619,	// (0x0005618e) linegrid_cam4_burst_pane_g2_ParamLimits

0xb619,	// (0x0005618e) linegrid_cam4_burst_pane_g2

0x108b,	// (0x0004bc00) linegrid_cam4_burst_pane_g3_ParamLimits

0x108b,	// (0x0004bc00) linegrid_cam4_burst_pane_g3

0x0002,

0xfa54,	// (0x0005a5c9) linegrid_cam4_burst_pane_g_ParamLimits

0xfa54,	// (0x0005a5c9) linegrid_cam4_burst_pane_g

0xb62a,	// (0x0005619f) linegrid_cam4_burst_pane_g3_copy1_ParamLimits

0xb62a,	// (0x0005619f) linegrid_cam4_burst_pane_g3_copy1

0x1098,	// (0x0004bc0d) linegrid_cam4_burst_pane_g4_ParamLimits

0x1098,	// (0x0004bc0d) linegrid_cam4_burst_pane_g4

0xb644,	// (0x000561b9) linegrid_cam4_burst_pane_g5_ParamLimits

0xb644,	// (0x000561b9) linegrid_cam4_burst_pane_g5

0xb655,	// (0x000561ca) linegrid_cam4_burst_pane_g6_ParamLimits

0xb655,	// (0x000561ca) linegrid_cam4_burst_pane_g6

0x10a5,	// (0x0004bc1a) linegrid_cam4_burst_pane_g7_ParamLimits

0x10a5,	// (0x0004bc1a) linegrid_cam4_burst_pane_g7

0xb666,	// (0x000561db) cell_cam4_burst_pane_g1

0x10be,	// (0x0004bc33) main_cam5_pane_t1_ParamLimits

0x10be,	// (0x0004bc33) main_cam5_pane_t1

0x10d0,	// (0x0004bc45) main_cam5_pane_t2_ParamLimits

0x10d0,	// (0x0004bc45) main_cam5_pane_t2

0x10e2,	// (0x0004bc57) main_cam5_pane_t3_ParamLimits

0x10e2,	// (0x0004bc57) main_cam5_pane_t3

0x10f4,	// (0x0004bc69) main_cam5_pane_t4_ParamLimits

0x10f4,	// (0x0004bc69) main_cam5_pane_t4

0x110a,	// (0x0004bc7f) main_cam5_pane_t5_ParamLimits

0x110a,	// (0x0004bc7f) main_cam5_pane_t5

0x111c,	// (0x0004bc91) main_cam5_pane_t6_ParamLimits

0x111c,	// (0x0004bc91) main_cam5_pane_t6

0x112e,	// (0x0004bca3) main_cam5_pane_t7_ParamLimits

0x112e,	// (0x0004bca3) main_cam5_pane_t7

0x1140,	// (0x0004bcb5) main_cam5_pane_t8_ParamLimits

0x1140,	// (0x0004bcb5) main_cam5_pane_t8

0x115c,	// (0x0004bcd1) main_cam5_pane_t9_ParamLimits

0x115c,	// (0x0004bcd1) main_cam5_pane_t9

0x116e,	// (0x0004bce3) main_cam5_pane_t10_ParamLimits

0x116e,	// (0x0004bce3) main_cam5_pane_t10

0x1180,	// (0x0004bcf5) main_cam5_pane_t11_ParamLimits

0x1180,	// (0x0004bcf5) main_cam5_pane_t11

0x1192,	// (0x0004bd07) main_cam5_pane_t12_ParamLimits

0x1192,	// (0x0004bd07) main_cam5_pane_t12

0x11a7,	// (0x0004bd1c) main_cam5_pane_t13_ParamLimits

0x11a7,	// (0x0004bd1c) main_cam5_pane_t13

0x000c,

0xfa60,	// (0x0005a5d5) main_cam5_pane_t_ParamLimits

0xfa60,	// (0x0005a5d5) main_cam5_pane_t

0x5d2c,	// (0x000508a1) popup_scut_keymap_window_ParamLimits

0x5d2c,	// (0x000508a1) popup_scut_keymap_window

0xb679,	// (0x000561ee) aid_size_cell_brow_shortcut

0x3573,	// (0x0004e0e8) bg_popup_window_pane_cp010

0xb685,	// (0x000561fa) grid_scut_pane

0xb68f,	// (0x00056204) cell_scut_pane_ParamLimits

0xb68f,	// (0x00056204) cell_scut_pane

0xb6a4,	// (0x00056219) cell_scut_pane_g1

0x11c4,	// (0x0004bd39) cell_scut_pane_t1

0x11d3,	// (0x0004bd48) cell_scut_pane_t2

0xb6ad,	// (0x00056222) cell_scut_pane_t3

0x0002,

0xfa7b,	// (0x0005a5f0) cell_scut_pane_t

0x9672,	// (0x000541e7) main_mup3_pane_g8_ParamLimits

0x9672,	// (0x000541e7) main_mup3_pane_g8

0xa996,	// (0x0005550b) area_vitu2_query_pane_ParamLimits

0xa996,	// (0x0005550b) area_vitu2_query_pane

0xb431,	// (0x00055fa6) input_focus_pane_cp08

0x11e2,	// (0x0004bd57) area_vitu2_query_pane_g1

0xb6bb,	// (0x00056230) area_vitu2_query_pane_g2

0x0001,

0xfa82,	// (0x0005a5f7) area_vitu2_query_pane_g

0xb6ca,	// (0x0005623f) area_vitu2_query_pane_t1_ParamLimits

0xb6ca,	// (0x0005623f) area_vitu2_query_pane_t1

0xb6dc,	// (0x00056251) area_vitu2_query_pane_t2_ParamLimits

0xb6dc,	// (0x00056251) area_vitu2_query_pane_t2

0xb6ee,	// (0x00056263) area_vitu2_query_pane_t3_ParamLimits

0xb6ee,	// (0x00056263) area_vitu2_query_pane_t3

0x11ee,	// (0x0004bd63) area_vitu2_query_pane_t4_ParamLimits

0x11ee,	// (0x0004bd63) area_vitu2_query_pane_t4

0x1216,	// (0x0004bd8b) area_vitu2_query_pane_t5_ParamLimits

0x1216,	// (0x0004bd8b) area_vitu2_query_pane_t5

0x123e,	// (0x0004bdb3) area_vitu2_query_pane_t6_ParamLimits

0x123e,	// (0x0004bdb3) area_vitu2_query_pane_t6

0x0006,

0xfa87,	// (0x0005a5fc) area_vitu2_query_pane_t_ParamLimits

0xfa87,	// (0x0005a5fc) area_vitu2_query_pane_t

0xb716,	// (0x0005628b) bg_button_pane_cp018

0xb723,	// (0x00056298) bg_button_pane_cp021

0xb72f,	// (0x000562a4) bg_button_pane_cp022

0xb73e,	// (0x000562b3) input_focus_pane_cp09

0x7e3b,	// (0x000529b0) aid_size_touch_mv_arrow_left

0x3e58,	// (0x0004e9cd) aid_size_touch_mv_arrow_right

0xaee8,	// (0x00055a5d) main_cset_slider_pane_g16_ParamLimits

0xaee8,	// (0x00055a5d) main_cset_slider_pane_g16

0xaef4,	// (0x00055a69) main_cset_slider_pane_g17_ParamLimits

0xaef4,	// (0x00055a69) main_cset_slider_pane_g17

0xb666,	// (0x000561db) cell_cam4_burst_pane_g1_ParamLimits

0x2b5c,	// (0x0004d6d1) compa_mode_pane

0xb12c,	// (0x00055ca1) popup_vtel_slider_window_g3_ParamLimits

0xb12c,	// (0x00055ca1) popup_vtel_slider_window_g3

0xb140,	// (0x00055cb5) popup_vtel_slider_window_g4_ParamLimits

0xb140,	// (0x00055cb5) popup_vtel_slider_window_g4

0xb154,	// (0x00055cc9) popup_vtel_slider_window_t1_ParamLimits

0xb154,	// (0x00055cc9) popup_vtel_slider_window_t1

0x5d83,	// (0x000508f8) main_cl_pane

0x8a99,	// (0x0005360e) popup_imed_adjust2_window_ParamLimits

0xe386,	// (0x00058efb) bg_tb_trans_pane_cp05_ParamLimits

0xec74,	// (0x000597e9) popup_imed_adjust2_window_g1_ParamLimits

0xec83,	// (0x000597f8) popup_imed_adjust2_window_g2_ParamLimits

0xec83,	// (0x000597f8) popup_imed_adjust2_window_g2

0xec8f,	// (0x00059804) popup_imed_adjust2_window_g3_ParamLimits

0xec8f,	// (0x00059804) popup_imed_adjust2_window_g3

0x0002,

0xf7ee,	// (0x0005a363) popup_imed_adjust2_window_g_ParamLimits

0xf7ee,	// (0x0005a363) popup_imed_adjust2_window_g

0xec9b,	// (0x00059810) popup_imed_adjust2_window_t1_ParamLimits

0xecb3,	// (0x00059828) slider_imed_adjust_pane_ParamLimits

0xecc7,	// (0x0005983c) slider_imed_adjust_pane_g1_ParamLimits

0xecd7,	// (0x0005984c) slider_imed_adjust_pane_g2_ParamLimits

0xece7,	// (0x0005985c) slider_imed_adjust_pane_g3_ParamLimits

0xecf8,	// (0x0005986d) slider_imed_adjust_pane_g4_ParamLimits

0xf7f5,	// (0x0005a36a) slider_imed_adjust_pane_g_ParamLimits

0xa730,	// (0x000552a5) aid_touch_area_cam4_ParamLimits

0xa730,	// (0x000552a5) aid_touch_area_cam4

0xa73e,	// (0x000552b3) battery_pane_cp01

0xa7bd,	// (0x00055332) main_camera4_pane_g6_ParamLimits

0xa7bd,	// (0x00055332) main_camera4_pane_g6

0xa7db,	// (0x00055350) main_camera4_pane_t2_ParamLimits

0xa7db,	// (0x00055350) main_camera4_pane_t2

0x0001,

0xf8fc,	// (0x0005a471) main_camera4_pane_t_ParamLimits

0xf8fc,	// (0x0005a471) main_camera4_pane_t

0xa871,	// (0x000553e6) aid_touch_area_vid4_ParamLimits

0xa871,	// (0x000553e6) aid_touch_area_vid4

0xa7bd,	// (0x00055332) main_video4_pane_g5_ParamLimits

0xa7bd,	// (0x00055332) main_video4_pane_g5

0xa8a1,	// (0x00055416) vid4_progress_pane_ParamLimits

0xa8a1,	// (0x00055416) vid4_progress_pane

0x0ed5,	// (0x0004ba4a) main_cset_slider_pane_g18_ParamLimits

0x0ed5,	// (0x0004ba4a) main_cset_slider_pane_g18

0x10b2,	// (0x0004bc27) cell_cam4_burst_pane_g2_ParamLimits

0x10b2,	// (0x0004bc27) cell_cam4_burst_pane_g2

0x0001,

0xfa5b,	// (0x0005a5d0) cell_cam4_burst_pane_g_ParamLimits

0xfa5b,	// (0x0005a5d0) cell_cam4_burst_pane_g

0xb74d,	// (0x000562c2) bg_cl_pane_ParamLimits

0xb74d,	// (0x000562c2) bg_cl_pane

0xb759,	// (0x000562ce) cl_header_pane_ParamLimits

0xb759,	// (0x000562ce) cl_header_pane

0xb765,	// (0x000562da) cl_listscroll_pane_ParamLimits

0xb765,	// (0x000562da) cl_listscroll_pane

0x128a,	// (0x0004bdff) bg_cl_pane_g1

0x1292,	// (0x0004be07) bg_cl_pane_g2

0x129a,	// (0x0004be0f) bg_cl_pane_g3

0x12a2,	// (0x0004be17) bg_cl_pane_g4

0x12aa,	// (0x0004be1f) bg_cl_pane_g5

0x12b2,	// (0x0004be27) bg_cl_pane_g6

0x12ba,	// (0x0004be2f) bg_cl_pane_g7

0x12c2,	// (0x0004be37) bg_cl_pane_g8

0x12ca,	// (0x0004be3f) bg_cl_pane_g9

0x0008,

0xfa96,	// (0x0005a60b) bg_cl_pane_g

0xb771,	// (0x000562e6) aid_height_cl_leading_ParamLimits

0xb771,	// (0x000562e6) aid_height_cl_leading

0xb77d,	// (0x000562f2) aid_height_cl_text_ParamLimits

0xb77d,	// (0x000562f2) aid_height_cl_text

0x2b13,	// (0x0004d688) bg_cl_header_pane_ParamLimits

0x2b13,	// (0x0004d688) bg_cl_header_pane

0xb795,	// (0x0005630a) cl_header_pane_g1_ParamLimits

0xb795,	// (0x0005630a) cl_header_pane_g1

0xb7a2,	// (0x00056317) cl_header_pane_t1_ParamLimits

0xb7a2,	// (0x00056317) cl_header_pane_t1

0x12d2,	// (0x0004be47) cl_list_pane

0x12db,	// (0x0004be50) hc_scroll_pane_cp01

0x380c,	// (0x0004e381) bg_cl_header_pane_g1

0x0d8e,	// (0x0004b903) bg_cl_header_pane_g2

0x382c,	// (0x0004e3a1) bg_cl_header_pane_g3

0x0d9e,	// (0x0004b913) bg_cl_header_pane_g4

0x0d96,	// (0x0004b90b) bg_cl_header_pane_g5

0x0fcd,	// (0x0004bb42) bg_cl_header_pane_g6

0x0db6,	// (0x0004b92b) bg_cl_header_pane_g7

0x0dbe,	// (0x0004b933) bg_cl_header_pane_g8

0x0dae,	// (0x0004b923) bg_cl_header_pane_g9

0x0008,

0xfaa9,	// (0x0005a61e) bg_cl_header_pane_g

0xb7b4,	// (0x00056329) hc_cl_list_double_graphic_heading_pane_ParamLimits

0xb7b4,	// (0x00056329) hc_cl_list_double_graphic_heading_pane

0xb7c4,	// (0x00056339) hc_cl_list_single_graphic_pane_ParamLimits

0xb7c4,	// (0x00056339) hc_cl_list_single_graphic_pane

0xb7d6,	// (0x0005634b) hc_cl_list_single_graphic_pane_g1_ParamLimits

0xb7d6,	// (0x0005634b) hc_cl_list_single_graphic_pane_g1

0xb7e2,	// (0x00056357) hc_cl_list_single_graphic_pane_g2_ParamLimits

0xb7e2,	// (0x00056357) hc_cl_list_single_graphic_pane_g2

0x0001,

0xfabc,	// (0x0005a631) hc_cl_list_single_graphic_pane_g_ParamLimits

0xfabc,	// (0x0005a631) hc_cl_list_single_graphic_pane_g

0xb7f6,	// (0x0005636b) hc_cl_list_single_graphic_pane_t1_ParamLimits

0xb7f6,	// (0x0005636b) hc_cl_list_single_graphic_pane_t1

0xb7d6,	// (0x0005634b) hc_cl_list_double_graphic_heading_pane_g1_ParamLimits

0xb7d6,	// (0x0005634b) hc_cl_list_double_graphic_heading_pane_g1

0xb80b,	// (0x00056380) hc_cl_list_double_graphic_heading_pane_g2_ParamLimits

0xb80b,	// (0x00056380) hc_cl_list_double_graphic_heading_pane_g2

0xb81f,	// (0x00056394) hc_cl_list_double_graphic_heading_pane_g3_ParamLimits

0xb81f,	// (0x00056394) hc_cl_list_double_graphic_heading_pane_g3

0x0002,

0xfac1,	// (0x0005a636) hc_cl_list_double_graphic_heading_pane_g_ParamLimits

0xfac1,	// (0x0005a636) hc_cl_list_double_graphic_heading_pane_g

0xb833,	// (0x000563a8) hc_cl_list_double_graphic_heading_pane_t1_ParamLimits

0xb833,	// (0x000563a8) hc_cl_list_double_graphic_heading_pane_t1

0xb848,	// (0x000563bd) hc_cl_list_double_graphic_heading_pane_t2_ParamLimits

0xb848,	// (0x000563bd) hc_cl_list_double_graphic_heading_pane_t2

0x0001,

0xfac8,	// (0x0005a63d) hc_cl_list_double_graphic_heading_pane_t_ParamLimits

0xfac8,	// (0x0005a63d) hc_cl_list_double_graphic_heading_pane_t

0xb85d,	// (0x000563d2) vid4_progress_pane_g1

0xb86c,	// (0x000563e1) vid4_progress_pane_g2

0xb87b,	// (0x000563f0) vid4_progress_pane_g3

0xb88a,	// (0x000563ff) vid4_progress_pane_g4

0x0004,

0xfacd,	// (0x0005a642) vid4_progress_pane_g

0xb8a2,	// (0x00056417) vid4_progress_pane_t1

0xb8b8,	// (0x0005642d) vid4_progress_pane_t2

0x0002,

0xfad8,	// (0x0005a64d) vid4_progress_pane_t

0xb8e2,	// (0x00056457) wait_bar_pane_cp07

0xe593,	// (0x00059108) blid_firmament_pane_ParamLimits

0xe5d4,	// (0x00059149) popup_blid_sat_info2_window_g1

0xe5f8,	// (0x0005916d) popup_blid_sat_info2_window_t3

0xe606,	// (0x0005917b) popup_blid_sat_info2_window_t4

0xe614,	// (0x00059189) popup_blid_sat_info2_window_t5

0xe622,	// (0x00059197) popup_blid_sat_info2_window_t6

0xe632,	// (0x000591a7) popup_blid_sat_info2_window_t7

0xe640,	// (0x000591b5) popup_blid_sat_info2_window_t8

0xe64e,	// (0x000591c3) popup_blid_sat_info2_window_t9

0xe65c,	// (0x000591d1) popup_blid_sat_info2_window_t10

0xe718,	// (0x0005928d) aid_firma_cardinal_ParamLimits

0xe72c,	// (0x000592a1) blid_firmament_pane_t1_ParamLimits

0xe743,	// (0x000592b8) blid_firmament_pane_t2_ParamLimits

0xe75a,	// (0x000592cf) blid_firmament_pane_t3_ParamLimits

0xe771,	// (0x000592e6) blid_firmament_pane_t4_ParamLimits

0xf6e2,	// (0x0005a257) blid_firmament_pane_t_ParamLimits

0xe788,	// (0x000592fd) blid_sat_info_pane_ParamLimits

0x8a0d,	// (0x00053582) main_cam_set_pane_ParamLimits

0x9dc2,	// (0x00054937) aid_size_cell_colour_35_ParamLimits

0x9dd9,	// (0x0005494e) aid_size_cell_colour_112_ParamLimits

0x9df0,	// (0x00054965) aid_size_cell_effect_ParamLimits

0x4b0e,	// (0x0004f683) bg_tb_trans_pane_cp02_ParamLimits

0x4b1c,	// (0x0004f691) heading_imed_pane_ParamLimits

0x9e0a,	// (0x0005497f) listscroll_imed_pane_ParamLimits

0x49a3,	// (0x0004f518) popup_call2_audio_first_window_g5_ParamLimits

0x49a3,	// (0x0004f518) popup_call2_audio_first_window_g5

0xa4ad,	// (0x00055022) aid_size_touch_image3_arrow_left_ParamLimits

0xa4ad,	// (0x00055022) aid_size_touch_image3_arrow_left

0xa4c1,	// (0x00055036) aid_size_touch_image3_arrow_right_ParamLimits

0xa4c1,	// (0x00055036) aid_size_touch_image3_arrow_right

0xb8cd,	// (0x00056442) vid4_progress_pane_t3

0xa06e,	// (0x00054be3) main_hwr_training_symbol_option_pane_ParamLimits

0xa06e,	// (0x00054be3) main_hwr_training_symbol_option_pane

0xef53,	// (0x00059ac8) popup_hwr_training_preview_window_ParamLimits

0xef53,	// (0x00059ac8) popup_hwr_training_preview_window

0xa0c9,	// (0x00054c3e) hwr_training_navi_pane_g5_ParamLimits

0xa0c9,	// (0x00054c3e) hwr_training_navi_pane_g5

0x0d6a,	// (0x0004b8df) popup_char_count_window

0x5d6d,	// (0x000508e2) bg_popup_sub_pane_cp20_ParamLimits

0xb24f,	// (0x00055dc4) list_vitu2_match_list_pane_ParamLimits

0xb25b,	// (0x00055dd0) vitu2_page_scroll_pane_ParamLimits

0xb25b,	// (0x00055dd0) vitu2_page_scroll_pane

0x1318,	// (0x0004be8d) list_single_hwr_training_symbol_option_pane_ParamLimits

0x1318,	// (0x0004be8d) list_single_hwr_training_symbol_option_pane

0x132b,	// (0x0004bea0) list_single_hwr_training_symbol_option_pane_g1

0x1333,	// (0x0004bea8) list_single_hwr_training_symbol_option_pane_t1

0x1341,	// (0x0004beb6) bg_button_pane_cp023

0x134a,	// (0x0004bebf) bg_button_pane_cp024

0xb906,	// (0x0005647b) vitu2_page_scroll_pane_g1

0xb90e,	// (0x00056483) vitu2_page_scroll_pane_g2

0x0001,

0xfadf,	// (0x0005a654) vitu2_page_scroll_pane_g

0xb916,	// (0x0005648b) vitu2_page_scroll_pane_t1

0xe7c1,	// (0x00059336) popup_char_count_window_g1

0x137d,	// (0x0004bef2) popup_char_count_window_g2

0x1386,	// (0x0004befb) popup_char_count_window_g3

0x0002,

0xfae4,	// (0x0005a659) popup_char_count_window_g

0x138f,	// (0x0004bf04) popup_char_count_window_t1

0x5d83,	// (0x000508f8) main_vded2_pane

0xec62,	// (0x000597d7) aid_size_cell_imed_line

0xec6c,	// (0x000597e1) grid_imed_line_width_pane

0xa8ec,	// (0x00055461) vid4_indicators_pane_g4

0x139d,	// (0x0004bf12) cell_imed_line_width_pane_ParamLimits

0x139d,	// (0x0004bf12) cell_imed_line_width_pane

0x13af,	// (0x0004bf24) cell_imed_line_width_pane_g1

0xe56d,	// (0x000590e2) cell_imed_line_width_pane_g2

0x0001,

0xfaeb,	// (0x0005a660) cell_imed_line_width_pane_g

0xb925,	// (0x0005649a) main_vded2_pane_g1_ParamLimits

0xb925,	// (0x0005649a) main_vded2_pane_g1

0xb932,	// (0x000564a7) main_vded2_pane_g2_ParamLimits

0xb932,	// (0x000564a7) main_vded2_pane_g2

0x0001,

0xfaf0,	// (0x0005a665) main_vded2_pane_g_ParamLimits

0xfaf0,	// (0x0005a665) main_vded2_pane_g

0xb93e,	// (0x000564b3) vded2_slider_pane_ParamLimits

0xb93e,	// (0x000564b3) vded2_slider_pane

0xb94b,	// (0x000564c0) aid_size_touch_vded2_end

0xb953,	// (0x000564c8) aid_size_touch_vded2_playhead

0xb95b,	// (0x000564d0) aid_size_touch_vded2_start

0xb963,	// (0x000564d8) vded2_slider_bg_pane

0xb96c,	// (0x000564e1) vded2_slider_pane_g1

0xb975,	// (0x000564ea) vded2_slider_pane_g2

0xb97d,	// (0x000564f2) vded2_slider_pane_g3

0x0002,

0xfaf5,	// (0x0005a66a) vded2_slider_pane_g

0xb986,	// (0x000564fb) vded2_slider_bg_pane_g1

0xb98f,	// (0x00056504) vded2_slider_bg_pane_g2

0xb998,	// (0x0005650d) vded2_slider_bg_pane_g3

0x0002,

0xfafc,	// (0x0005a671) vded2_slider_bg_pane_g

0x83f5,	// (0x00052f6a) aid_postcard_touch_down_pane_ParamLimits

0x83f5,	// (0x00052f6a) aid_postcard_touch_down_pane

0x8401,	// (0x00052f76) aid_postcard_touch_up_pane_ParamLimits

0x8401,	// (0x00052f76) aid_postcard_touch_up_pane

0x5d83,	// (0x000508f8) main_blid2_pane

0x8a36,	// (0x000535ab) popup_blid2_search_window

0x2b5c,	// (0x0004d6d1) blid2_gps_pane

0x2b5c,	// (0x0004d6d1) blid2_navig_pane

0x2b5c,	// (0x0004d6d1) blid2_search_pane

0x2b5c,	// (0x0004d6d1) blid2_tripm_pane

0xb9a1,	// (0x00056516) blid2_search_pane_g1_ParamLimits

0xb9a1,	// (0x00056516) blid2_search_pane_g1

0xb9ad,	// (0x00056522) blid2_search_pane_t1_ParamLimits

0xb9ad,	// (0x00056522) blid2_search_pane_t1

0xb9bf,	// (0x00056534) aid_size_cell_blid2_gps_ParamLimits

0xb9bf,	// (0x00056534) aid_size_cell_blid2_gps

0xb9cf,	// (0x00056544) blid2_gps_pane_g1_ParamLimits

0xb9cf,	// (0x00056544) blid2_gps_pane_g1

0xb9db,	// (0x00056550) grid_blid2_satellite_pane_ParamLimits

0xb9db,	// (0x00056550) grid_blid2_satellite_pane

0xb9e7,	// (0x0005655c) blid2_navig_pane_g1_ParamLimits

0xb9e7,	// (0x0005655c) blid2_navig_pane_g1

0xb9f3,	// (0x00056568) blid2_navig_pane_t1_ParamLimits

0xb9f3,	// (0x00056568) blid2_navig_pane_t1

0xba05,	// (0x0005657a) blid2_navig_pane_t2_ParamLimits

0xba05,	// (0x0005657a) blid2_navig_pane_t2

0x0001,

0xfb03,	// (0x0005a678) blid2_navig_pane_t_ParamLimits

0xfb03,	// (0x0005a678) blid2_navig_pane_t

0xba17,	// (0x0005658c) blid2_navig_ring_pane_ParamLimits

0xba17,	// (0x0005658c) blid2_navig_ring_pane

0xba23,	// (0x00056598) blid2_speed_pane_ParamLimits

0xba23,	// (0x00056598) blid2_speed_pane

0xba2f,	// (0x000565a4) blid2_tripm_pane_g1_ParamLimits

0xba2f,	// (0x000565a4) blid2_tripm_pane_g1

0xba3b,	// (0x000565b0) blid2_tripm_pane_g2_ParamLimits

0xba3b,	// (0x000565b0) blid2_tripm_pane_g2

0xba47,	// (0x000565bc) blid2_tripm_pane_g3_ParamLimits

0xba47,	// (0x000565bc) blid2_tripm_pane_g3

0xba53,	// (0x000565c8) blid2_tripm_pane_g4_ParamLimits

0xba53,	// (0x000565c8) blid2_tripm_pane_g4

0xba5f,	// (0x000565d4) blid2_tripm_pane_g5_ParamLimits

0xba5f,	// (0x000565d4) blid2_tripm_pane_g5

0x0005,

0xfb08,	// (0x0005a67d) blid2_tripm_pane_g_ParamLimits

0xfb08,	// (0x0005a67d) blid2_tripm_pane_g

0xba77,	// (0x000565ec) blid2_tripm_pane_t1_ParamLimits

0xba77,	// (0x000565ec) blid2_tripm_pane_t1

0xba89,	// (0x000565fe) blid2_tripm_pane_t2_ParamLimits

0xba89,	// (0x000565fe) blid2_tripm_pane_t2

0xba9b,	// (0x00056610) blid2_tripm_pane_t3_ParamLimits

0xba9b,	// (0x00056610) blid2_tripm_pane_t3

0x0003,

0xfb15,	// (0x0005a68a) blid2_tripm_pane_t_ParamLimits

0xfb15,	// (0x0005a68a) blid2_tripm_pane_t

0xbacb,	// (0x00056640) cell_blid2_satellite_pane_ParamLimits

0xbacb,	// (0x00056640) cell_blid2_satellite_pane

0xbae3,	// (0x00056658) cell_blid2_satellite_pane_g1

0x13b8,	// (0x0004bf2d) cell_blid2_satellite_pane_t1

0xe798,	// (0x0005930d) blid2_speed_pane_g1

0x13c6,	// (0x0004bf3b) blid2_speed_pane_t1

0x13d4,	// (0x0004bf49) blid2_speed_pane_t2

0x0001,

0xfb1e,	// (0x0005a693) blid2_speed_pane_t

0xe798,	// (0x0005930d) blid2_navig_ring_pane_g1

0xbaec,	// (0x00056661) blid2_navig_ring_pane_g2

0xbaf4,	// (0x00056669) blid2_navig_ring_pane_g3

0xbafc,	// (0x00056671) blid2_navig_ring_pane_g4

0xbb04,	// (0x00056679) blid2_navig_ring_pane_g5

0x0004,

0xfb23,	// (0x0005a698) blid2_navig_ring_pane_g

0x2b5c,	// (0x0004d6d1) bg_popup_window_pane_cp011

0x13e2,	// (0x0004bf57) popup_blid2_search_window_g1

0x13ea,	// (0x0004bf5f) popup_blid2_search_window_t1

0x13f8,	// (0x0004bf6d) popup_blid2_search_window_t2

0x0001,

0xfb2e,	// (0x0005a6a3) popup_blid2_search_window_t

0x371b,	// (0x0004e290) main_browser_pane_g1

0x33a4,	// (0x0004df19) main_browser_pane_ParamLimits

0x8a0d,	// (0x00053582) bg_button_pane_cp011_ParamLimits

0xab49,	// (0x000556be) cell_vitu2_function_pane_g1_ParamLimits

0xe386,	// (0x00058efb) bg_popup_sub_pane_cp22_ParamLimits

0xb431,	// (0x00055fa6) input_focus_pane_cp08_ParamLimits

0xb448,	// (0x00055fbd) popup_vitu2_query_button_pane_ParamLimits

0xb448,	// (0x00055fbd) popup_vitu2_query_button_pane

0xb459,	// (0x00055fce) popup_vitu2_query_input_button_pane

0x1008,	// (0x0004bb7d) popup_vitu2_query_window_g1_ParamLimits

0xb461,	// (0x00055fd6) popup_vitu2_query_window_g2_ParamLimits

0xfa2f,	// (0x0005a5a4) popup_vitu2_query_window_g_ParamLimits

0x2b5c,	// (0x0004d6d1) bg_button_pane_cp026

0xbb0c,	// (0x00056681) popup_vitu2_query_input_button_pane_g1

0x2b5c,	// (0x0004d6d1) bg_button_pane_cp025

0x1406,	// (0x0004bf7b) popup_vitu2_query_button_pane_t1

0x93f0,	// (0x00053f65) main_mp3_pane_t6

0x93fe,	// (0x00053f73) popup_slider_window_cp01

0xa81f,	// (0x00055394) cam4_battery_pane

0xa81f,	// (0x00055394) cam4_battery_pane_cp02

0xa81f,	// (0x00055394) cam4_battery_pane_cp01

0xa81f,	// (0x00055394) cam4_battery_pane_cp03

0xf053,	// (0x00059bc8) cam4_battery_pane_g1

0xe798,	// (0x0005930d) cam4_battery_pane_g2

0x0001,

0xfb33,	// (0x0005a6a8) cam4_battery_pane_g

0xe66a,	// (0x000591df) popup_blid_sat_info2_window_t11

0x7e3b,	// (0x000529b0) aid_size_touch_mv_arrow_left_ParamLimits

0x3e58,	// (0x0004e9cd) aid_size_touch_mv_arrow_right_ParamLimits

0x3eb1,	// (0x0004ea26) navi_pane_g1_ParamLimits

0x3ebd,	// (0x0004ea32) navi_pane_g2_ParamLimits

0x7e5f,	// (0x000529d4) navi_pane_g3_ParamLimits

0xf3e1,	// (0x00059f56) navi_pane_g_ParamLimits

0x7e7c,	// (0x000529f1) navi_pane_mv_t1_ParamLimits

0x9e16,	// (0x0005498b) grid_imed_effect_pane_ParamLimits

0x6ba0,	// (0x00051715) aid_placing_vt_slider_lsc

0x3642,	// (0x0004e1b7) aid_placing_vt_slider_prt

0x4b0e,	// (0x0004f683) bg_tb_trans_pane_cp01_ParamLimits

0xe8e7,	// (0x0005945c) popup_image_details_window_g1_ParamLimits

0xe8fa,	// (0x0005946f) popup_image_details_window_g2_ParamLimits

0xe90f,	// (0x00059484) popup_image_details_window_g3_ParamLimits

0xe90f,	// (0x00059484) popup_image_details_window_g3

0xf727,	// (0x0005a29c) popup_image_details_window_g_ParamLimits

0xe923,	// (0x00059498) popup_image_details_window_t1_ParamLimits

0xe935,	// (0x000594aa) popup_image_details_window_t2_ParamLimits

0xe94e,	// (0x000594c3) popup_image_details_window_t3_ParamLimits

0xe962,	// (0x000594d7) popup_image_details_window_t4_ParamLimits

0xe97d,	// (0x000594f2) popup_image_details_window_t5_ParamLimits

0xf72e,	// (0x0005a2a3) popup_image_details_window_t_ParamLimits

0xb789,	// (0x000562fe) cl_header_name_pane_ParamLimits

0xb789,	// (0x000562fe) cl_header_name_pane

0xbb14,	// (0x00056689) cl_header_name_pane_t1_ParamLimits

0xbb14,	// (0x00056689) cl_header_name_pane_t1

0xbb2b,	// (0x000566a0) cl_header_name_pane_t2_ParamLimits

0xbb2b,	// (0x000566a0) cl_header_name_pane_t2

0xbb55,	// (0x000566ca) cl_header_name_pane_t3_ParamLimits

0xbb55,	// (0x000566ca) cl_header_name_pane_t3

0x0002,

0xfb38,	// (0x0005a6ad) cl_header_name_pane_t_ParamLimits

0xfb38,	// (0x0005a6ad) cl_header_name_pane_t

0x3f4a,	// (0x0004eabf) navi_pane_mv_g2_ParamLimits

0x0d27,	// (0x0004b89c) field_vitu2_entry_pane_g1_ParamLimits

0x0d33,	// (0x0004b8a8) field_vitu2_entry_pane_g2_ParamLimits

0x0d3f,	// (0x0004b8b4) field_vitu2_entry_pane_g3_ParamLimits

0x0d3f,	// (0x0004b8b4) field_vitu2_entry_pane_g3

0xf92e,	// (0x0005a4a3) field_vitu2_entry_pane_g_ParamLimits

0xaadd,	// (0x00055652) cell_vitu2_itu_pane_g1_ParamLimits

0xaaef,	// (0x00055664) cell_vitu2_itu_pane_g2_ParamLimits

0xaaef,	// (0x00055664) cell_vitu2_itu_pane_g2

0x0001,

0xf93a,	// (0x0005a4af) cell_vitu2_itu_pane_g_ParamLimits

0xf93a,	// (0x0005a4af) cell_vitu2_itu_pane_g

0x8a0d,	// (0x00053582) bg_vkb2_func_pane_cp05_ParamLimits

0x8a0d,	// (0x00053582) bg_vkb2_func_pane_cp05

0x8a0d,	// (0x00053582) bg_vkb2_func_pane_cp03

0x8a0d,	// (0x00053582) bg_vkb2_func_pane_cp04

0x8a0d,	// (0x00053582) bg_vkb2_func_pane_cp10_ParamLimits

0x8a0d,	// (0x00053582) bg_vkb2_func_pane_cp10

0xb72f,	// (0x000562a4) bg_vkb2_func_pane_cp08

0xb716,	// (0x0005628b) bg_vkb2_func_pane_cp06

0xb723,	// (0x00056298) bg_vkb2_func_pane_cp07

0x1353,	// (0x0004bec8) bg_vkb2_func_pane_cp11_ParamLimits

0x1353,	// (0x0004bec8) bg_vkb2_func_pane_cp11

0x1368,	// (0x0004bedd) bg_vkb2_func_pane_cp12_ParamLimits

0x1368,	// (0x0004bedd) bg_vkb2_func_pane_cp12

0x2b5c,	// (0x0004d6d1) bg_vkb2_func_pane_cp09

0x0d8e,	// (0x0004b903) bg_vkb2_func_pane_g1

0x382c,	// (0x0004e3a1) bg_vkb2_func_pane_g2

0x0d96,	// (0x0004b90b) bg_vkb2_func_pane_g3

0x0d9e,	// (0x0004b913) bg_vkb2_func_pane_g4

0x0fcd,	// (0x0004bb42) bg_vkb2_func_pane_g5

0x0db6,	// (0x0004b92b) bg_vkb2_func_pane_g6

0x0dbe,	// (0x0004b933) bg_vkb2_func_pane_g7

0x0dae,	// (0x0004b923) bg_vkb2_func_pane_g8

0x380c,	// (0x0004e381) bg_vkb2_func_pane_g9

0x0008,

0xfb3f,	// (0x0005a6b4) bg_vkb2_func_pane_g

0xba6b,	// (0x000565e0) blid2_tripm_pane_g6_ParamLimits

0xba6b,	// (0x000565e0) blid2_tripm_pane_g6

0xf011,	// (0x00059b86) mp4_progress_pane_g1

0xbabf,	// (0x00056634) blid2_tripm_values_pane_ParamLimits

0xbabf,	// (0x00056634) blid2_tripm_values_pane

0xbb7a,	// (0x000566ef) blid2_tripm_values_pane_t1

0xbb88,	// (0x000566fd) blid2_tripm_values_pane_t2

0xbb96,	// (0x0005670b) blid2_tripm_values_pane_t3

0xbba4,	// (0x00056719) blid2_tripm_values_pane_t4

0xbbb2,	// (0x00056727) blid2_tripm_values_pane_t5

0xbbc0,	// (0x00056735) blid2_tripm_values_pane_t6

0xbbce,	// (0x00056743) blid2_tripm_values_pane_t7

0xbbdc,	// (0x00056751) blid2_tripm_values_pane_t8

0xbbea,	// (0x0005675f) blid2_tripm_values_pane_t9

0x0008,

0xfb52,	// (0x0005a6c7) blid2_tripm_values_pane_t

0x6bda,	// (0x0005174f) call_video_pane_t1_ParamLimits

0x6bf7,	// (0x0005176c) call_video_pane_t2_ParamLimits

0xf26a,	// (0x00059ddf) call_video_pane_t_ParamLimits

0x82fe,	// (0x00052e73) msg_header_pane_g1_ParamLimits

0x411c,	// (0x0004ec91) msg_header_pane_g2_ParamLimits

0x411c,	// (0x0004ec91) msg_header_pane_g2

0x0001,

0xf484,	// (0x00059ff9) msg_header_pane_g_ParamLimits

0xf484,	// (0x00059ff9) msg_header_pane_g

0x33a4,	// (0x0004df19) main_clock2_pane_ParamLimits

0x9bba,	// (0x0005472f) grid_clock2_toolbar_pane_ParamLimits

0x9bba,	// (0x0005472f) grid_clock2_toolbar_pane

0x9bba,	// (0x0005472f) listscroll_clock2_pane_ParamLimits

0x9bba,	// (0x0005472f) listscroll_clock2_pane

0x9c56,	// (0x000547cb) main_clock2_pane_t3_ParamLimits

0x9c56,	// (0x000547cb) main_clock2_pane_t3

0x9c68,	// (0x000547dd) main_clock2_pane_t4_ParamLimits

0x9c68,	// (0x000547dd) main_clock2_pane_t4

0x1414,	// (0x0004bf89) cell_clock2_toolbar_pane

0x141c,	// (0x0004bf91) cell_clock2_toolbar_pane_cp01

0x141c,	// (0x0004bf91) cell_clock2_toolbar_pane_cp02

0x1424,	// (0x0004bf99) cell_clock2_toolbar_pane_cp03

0x142c,	// (0x0004bfa1) list_clock2_pane

0x1434,	// (0x0004bfa9) scroll_pane_cp10

0x143c,	// (0x0004bfb1) list_single_clock2_pane_ParamLimits

0x143c,	// (0x0004bfb1) list_single_clock2_pane

0x3573,	// (0x0004e0e8) list_highlight_pane_cp08

0x1449,	// (0x0004bfbe) list_single_clock2_pane_t1

0x1457,	// (0x0004bfcc) list_single_clock2_pane_t2

0x0001,

0xfb65,	// (0x0005a6da) list_single_clock2_pane_t

0x2b5c,	// (0x0004d6d1) bg_button_pane_cp10

0x1465,	// (0x0004bfda) cell_clock2_toolbar_pane_g1

0x835f,	// (0x00052ed4) aid_main_viewer_pane_g1_ParamLimits

0x835f,	// (0x00052ed4) aid_main_viewer_pane_g1

0x836b,	// (0x00052ee0) aid_main_viewer_pane_g2_ParamLimits

0x836b,	// (0x00052ee0) aid_main_viewer_pane_g2

0x8377,	// (0x00052eec) aid_main_viewer_pane_g3_ParamLimits

0x8377,	// (0x00052eec) aid_main_viewer_pane_g3

0x8386,	// (0x00052efb) aid_main_viewer_pane_g4_ParamLimits

0x8386,	// (0x00052efb) aid_main_viewer_pane_g4

0x0003,

0xf495,	// (0x0005a00a) aid_main_viewer_pane_g_ParamLimits

0xf495,	// (0x0005a00a) aid_main_viewer_pane_g

0x5d6d,	// (0x000508e2) main_calc_pane_ParamLimits

0x8a1b,	// (0x00053590) main_dialer2_pane_ParamLimits

0x5d83,	// (0x000508f8) main_cam6_pane

0x5d83,	// (0x000508f8) main_vid6_pane

0x9bc6,	// (0x0005473b) listscroll_gen_pane_cp06_ParamLimits

0x9bc6,	// (0x0005473b) listscroll_gen_pane_cp06

0x9c7a,	// (0x000547ef) main_clock2_pane_t5_ParamLimits

0x9c7a,	// (0x000547ef) main_clock2_pane_t5

0x9cc3,	// (0x00054838) aid_call2_pane_cp10_ParamLimits

0x9cd5,	// (0x0005484a) aid_call_pane_cp10_ParamLimits

0x3e4c,	// (0x0004e9c1) popup_clock_analogue_window_cp10_g1_ParamLimits

0x3e4c,	// (0x0004e9c1) popup_clock_analogue_window_cp10_g2_ParamLimits

0x9ce7,	// (0x0005485c) popup_clock_analogue_window_cp10_g3_ParamLimits

0x9ce7,	// (0x0005485c) popup_clock_analogue_window_cp10_g4_ParamLimits

0x3e4c,	// (0x0004e9c1) popup_clock_analogue_window_cp10_g5_ParamLimits

0xf7e3,	// (0x0005a358) popup_clock_analogue_window_cp10_g_ParamLimits

0x9cf9,	// (0x0005486e) popup_clock_analogue_window_cp10_t1_ParamLimits

0xf07b,	// (0x00059bf0) cell_dialer2_keypad_pane_g2_ParamLimits

0xf07b,	// (0x00059bf0) cell_dialer2_keypad_pane_g2

0x0001,

0xf8cd,	// (0x0005a442) cell_dialer2_keypad_pane_g_ParamLimits

0xf8cd,	// (0x0005a442) cell_dialer2_keypad_pane_g

0xa476,	// (0x00054feb) cell_dialer2_keypad_pane_t1

0xadd6,	// (0x0005594b) main_cset_text2_pane_ParamLimits

0xadd6,	// (0x0005594b) main_cset_text2_pane

0x11e2,	// (0x0004bd57) area_vitu2_query_pane_g1_ParamLimits

0xb6bb,	// (0x00056230) area_vitu2_query_pane_g2_ParamLimits

0xfa82,	// (0x0005a5f7) area_vitu2_query_pane_g_ParamLimits

0x1266,	// (0x0004bddb) area_vitu2_query_pane_t7_ParamLimits

0x1266,	// (0x0004bddb) area_vitu2_query_pane_t7

0xb716,	// (0x0005628b) bg_button_pane_cp018_ParamLimits

0xb723,	// (0x00056298) bg_button_pane_cp021_ParamLimits

0xb72f,	// (0x000562a4) bg_button_pane_cp022_ParamLimits

0xb72f,	// (0x000562a4) bg_vkb2_func_pane_cp08_ParamLimits

0xb716,	// (0x0005628b) bg_vkb2_func_pane_cp06_ParamLimits

0xb723,	// (0x00056298) bg_vkb2_func_pane_cp07_ParamLimits

0xb73e,	// (0x000562b3) input_focus_pane_cp09_ParamLimits

0xbbf8,	// (0x0005676d) cam6_autofocus_pane_ParamLimits

0xbbf8,	// (0x0005676d) cam6_autofocus_pane

0xbc14,	// (0x00056789) cam6_image_uncrop_pane_ParamLimits

0xbc14,	// (0x00056789) cam6_image_uncrop_pane

0xbc37,	// (0x000567ac) cam6_indi_pane_ParamLimits

0xbc37,	// (0x000567ac) cam6_indi_pane

0xbc51,	// (0x000567c6) cam6_mode_pane_ParamLimits

0xbc51,	// (0x000567c6) cam6_mode_pane

0xbc65,	// (0x000567da) cam6_timer_pane_ParamLimits

0xbc65,	// (0x000567da) cam6_timer_pane

0xbc71,	// (0x000567e6) cam6_zoom_pane_ParamLimits

0xbc71,	// (0x000567e6) cam6_zoom_pane

0xbc87,	// (0x000567fc) cam6_mode_pane_g1_ParamLimits

0xbc87,	// (0x000567fc) cam6_mode_pane_g1

0xbc93,	// (0x00056808) cam6_mode_pane_g2_ParamLimits

0xbc93,	// (0x00056808) cam6_mode_pane_g2

0xbc9f,	// (0x00056814) cam6_mode_pane_g3_ParamLimits

0xbc9f,	// (0x00056814) cam6_mode_pane_g3

0xbcab,	// (0x00056820) cam6_mode_pane_g4_ParamLimits

0xbcab,	// (0x00056820) cam6_mode_pane_g4

0x0003,

0xfb6a,	// (0x0005a6df) cam6_mode_pane_g_ParamLimits

0xfb6a,	// (0x0005a6df) cam6_mode_pane_g

0x146d,	// (0x0004bfe2) bg_tb_trans_pane_cp08_ParamLimits

0x146d,	// (0x0004bfe2) bg_tb_trans_pane_cp08

0x147b,	// (0x0004bff0) cam6_battery_pane_ParamLimits

0x147b,	// (0x0004bff0) cam6_battery_pane

0x1491,	// (0x0004c006) cam6_indi_pane_g1_ParamLimits

0x1491,	// (0x0004c006) cam6_indi_pane_g1

0x14a3,	// (0x0004c018) cam6_indi_pane_g2_ParamLimits

0x14a3,	// (0x0004c018) cam6_indi_pane_g2

0x14b5,	// (0x0004c02a) cam6_indi_pane_g3_ParamLimits

0x14b5,	// (0x0004c02a) cam6_indi_pane_g3

0x0002,

0xfb73,	// (0x0005a6e8) cam6_indi_pane_g_ParamLimits

0xfb73,	// (0x0005a6e8) cam6_indi_pane_g

0x14c7,	// (0x0004c03c) cam6_indi_pane_t1_ParamLimits

0x14c7,	// (0x0004c03c) cam6_indi_pane_t1

0xa92a,	// (0x0005549f) cam6_autofocus_pane_g1

0xa922,	// (0x00055497) cam6_autofocus_pane_g2

0xa93a,	// (0x000554af) cam6_autofocus_pane_g3

0xa932,	// (0x000554a7) cam6_autofocus_pane_g4

0x0003,

0xfb7a,	// (0x0005a6ef) cam6_autofocus_pane_g

0x14ed,	// (0x0004c062) cam6_timer_pane_g1

0x14f5,	// (0x0004c06a) cam6_timer_pane_t1

0x1503,	// (0x0004c078) cam6_zoom_cont_pane

0x150b,	// (0x0004c080) cam6_zoom_pane_g1

0x1513,	// (0x0004c088) cam6_zoom_pane_g2

0xbcb7,	// (0x0005682c) cam6_zoom_pane_g3

0x0002,

0xfb83,	// (0x0005a6f8) cam6_zoom_pane_g

0xe798,	// (0x0005930d) cam6_battery_pane_g1

0xe798,	// (0x0005930d) cam6_battery_pane_g2

0x0001,

0xf6eb,	// (0x0005a260) cam6_battery_pane_g

0x151b,	// (0x0004c090) cam6_zoom_cont_pane_g1

0x1524,	// (0x0004c099) cam6_zoom_cont_pane_g2

0x152d,	// (0x0004c0a2) cam6_zoom_cont_pane_g3

0x0002,

0xfb8a,	// (0x0005a6ff) cam6_zoom_cont_pane_g

0xbcd4,	// (0x00056849) cam6_mode_pane_cp_ParamLimits

0xbcd4,	// (0x00056849) cam6_mode_pane_cp

0xbce8,	// (0x0005685d) cam6_zoom_pane_cp_ParamLimits

0xbce8,	// (0x0005685d) cam6_zoom_pane_cp

0xbcfe,	// (0x00056873) vid6_image_uncrop_cif_pane_ParamLimits

0xbcfe,	// (0x00056873) vid6_image_uncrop_cif_pane

0xbd20,	// (0x00056895) vid6_image_uncrop_nhd_pane_ParamLimits

0xbd20,	// (0x00056895) vid6_image_uncrop_nhd_pane

0xbd37,	// (0x000568ac) vid6_image_uncrop_vga_pane_ParamLimits

0xbd37,	// (0x000568ac) vid6_image_uncrop_vga_pane

0xbd4e,	// (0x000568c3) vid6_image_uncrop_wvga_pane_ParamLimits

0xbd4e,	// (0x000568c3) vid6_image_uncrop_wvga_pane

0xbd65,	// (0x000568da) vid6_indi_pane_ParamLimits

0xbd65,	// (0x000568da) vid6_indi_pane

0x146d,	// (0x0004bfe2) bg_tb_trans_pane_cp09_ParamLimits

0x146d,	// (0x0004bfe2) bg_tb_trans_pane_cp09

0x1541,	// (0x0004c0b6) cam6_battery_pane_cp_ParamLimits

0x1541,	// (0x0004c0b6) cam6_battery_pane_cp

0x154d,	// (0x0004c0c2) vid6_indi_pane_g1_ParamLimits

0x154d,	// (0x0004c0c2) vid6_indi_pane_g1

0x155f,	// (0x0004c0d4) vid6_indi_pane_g2_ParamLimits

0x155f,	// (0x0004c0d4) vid6_indi_pane_g2

0x1571,	// (0x0004c0e6) vid6_indi_pane_g3_ParamLimits

0x1571,	// (0x0004c0e6) vid6_indi_pane_g3

0x1586,	// (0x0004c0fb) vid6_indi_pane_g4_ParamLimits

0x1586,	// (0x0004c0fb) vid6_indi_pane_g4

0x159b,	// (0x0004c110) vid6_indi_pane_g5_ParamLimits

0x159b,	// (0x0004c110) vid6_indi_pane_g5

0x0004,

0xfb91,	// (0x0005a706) vid6_indi_pane_g_ParamLimits

0xfb91,	// (0x0005a706) vid6_indi_pane_g

0x15b5,	// (0x0004c12a) vid6_indi_pane_t1_ParamLimits

0x15b5,	// (0x0004c12a) vid6_indi_pane_t1

0x15cb,	// (0x0004c140) vid6_indi_pane_t2_ParamLimits

0x15cb,	// (0x0004c140) vid6_indi_pane_t2

0x15f3,	// (0x0004c168) vid6_indi_pane_t3_ParamLimits

0x15f3,	// (0x0004c168) vid6_indi_pane_t3

0x161b,	// (0x0004c190) vid6_indi_pane_t4_ParamLimits

0x161b,	// (0x0004c190) vid6_indi_pane_t4

0x0003,

0xfb9c,	// (0x0005a711) vid6_indi_pane_t_ParamLimits

0xfb9c,	// (0x0005a711) vid6_indi_pane_t

0x163f,	// (0x0004c1b4) wait_bar_pane_cp08

0xbd85,	// (0x000568fa) main_cset_text2_pane_t1_ParamLimits

0xbd85,	// (0x000568fa) main_cset_text2_pane_t1

0xbcbf,	// (0x00056834) listscroll_gen_pane_cp06_t1_ParamLimits

0xbcbf,	// (0x00056834) listscroll_gen_pane_cp06_t1

0x5d83,	// (0x000508f8) main_cam6_set_pane

0xa811,	// (0x00055386) bg_tb_trans_pane_cp06_ParamLimits

0xa827,	// (0x0005539c) cam4_indicators_pane_g1_ParamLimits

0xa837,	// (0x000553ac) cam4_indicators_pane_g2_ParamLimits

0xf90a,	// (0x0005a47f) cam4_indicators_pane_g_ParamLimits

0xa857,	// (0x000553cc) cam4_indicators_pane_t1_ParamLimits

0x8a0d,	// (0x00053582) bg_tb_trans_pane_cp07_ParamLimits

0xa827,	// (0x0005539c) vid4_indicators_pane_g1_ParamLimits

0xa8cb,	// (0x00055440) vid4_indicators_pane_g2_ParamLimits

0xa8db,	// (0x00055450) vid4_indicators_pane_g3_ParamLimits

0xa8ec,	// (0x00055461) vid4_indicators_pane_g4_ParamLimits

0xf91c,	// (0x0005a491) vid4_indicators_pane_g_ParamLimits

0xa908,	// (0x0005547d) vid4_indicators_pane_t1_ParamLimits

0xb85d,	// (0x000563d2) vid4_progress_pane_g1_ParamLimits

0xb86c,	// (0x000563e1) vid4_progress_pane_g2_ParamLimits

0xb87b,	// (0x000563f0) vid4_progress_pane_g3_ParamLimits

0xb88a,	// (0x000563ff) vid4_progress_pane_g4_ParamLimits

0xfacd,	// (0x0005a642) vid4_progress_pane_g_ParamLimits

0xb8a2,	// (0x00056417) vid4_progress_pane_t1_ParamLimits

0xb8b8,	// (0x0005642d) vid4_progress_pane_t2_ParamLimits

0xb8cd,	// (0x00056442) vid4_progress_pane_t3_ParamLimits

0xfad8,	// (0x0005a64d) vid4_progress_pane_t_ParamLimits

0xb8e2,	// (0x00056457) wait_bar_pane_cp07_ParamLimits

0xbda1,	// (0x00056916) main_cam6_set_pane_g2_ParamLimits

0xbda1,	// (0x00056916) main_cam6_set_pane_g2

0xbdad,	// (0x00056922) main_cset6_listscroll_pane_ParamLimits

0xbdad,	// (0x00056922) main_cset6_listscroll_pane

0xbdd6,	// (0x0005694b) main_cset6_slider_pane_ParamLimits

0xbdd6,	// (0x0005694b) main_cset6_slider_pane

0xbde2,	// (0x00056957) main_cset6_text2_pane_ParamLimits

0xbde2,	// (0x00056957) main_cset6_text2_pane

0x164f,	// (0x0004c1c4) main_cset6_text_pane

0x0e98,	// (0x0004ba0d) main_cset_list_pane_copy1_ParamLimits

0x0e98,	// (0x0004ba0d) main_cset_list_pane_copy1

0x0ea8,	// (0x0004ba1d) scroll_pane_cp028_copy1

0xbdf5,	// (0x0005696a) cset_list_set_pane_copy1

0xb091,	// (0x00055c06) aid_position_infowindow_above_copy1

0xb099,	// (0x00055c0e) aid_position_infowindow_below_copy1

0xbe04,	// (0x00056979) cset_list_set_pane_g1_copy1

0xbe0c,	// (0x00056981) cset_list_set_pane_g3_copy1_ParamLimits

0xbe0c,	// (0x00056981) cset_list_set_pane_g3_copy1

0xbe1b,	// (0x00056990) cset_list_set_pane_t1_copy1_ParamLimits

0xbe1b,	// (0x00056990) cset_list_set_pane_t1_copy1

0x4b0e,	// (0x0004f683) list_highlight_pane_cp021_copy1_ParamLimits

0x4b0e,	// (0x0004f683) list_highlight_pane_cp021_copy1

0x1657,	// (0x0004c1cc) cset6_slider_pane_ParamLimits

0x1657,	// (0x0004c1cc) cset6_slider_pane

0x1683,	// (0x0004c1f8) main_cset6_slider_pane_g1_ParamLimits

0x1683,	// (0x0004c1f8) main_cset6_slider_pane_g1

0xbe30,	// (0x000569a5) main_cset6_slider_pane_g2_ParamLimits

0xbe30,	// (0x000569a5) main_cset6_slider_pane_g2

0x0ebd,	// (0x0004ba32) main_cset6_slider_pane_g3_ParamLimits

0x0ebd,	// (0x0004ba32) main_cset6_slider_pane_g3

0xbe58,	// (0x000569cd) main_cset6_slider_pane_g4_ParamLimits

0xbe58,	// (0x000569cd) main_cset6_slider_pane_g4

0xbe64,	// (0x000569d9) main_cset6_slider_pane_g5_ParamLimits

0xbe64,	// (0x000569d9) main_cset6_slider_pane_g5

0x0ebd,	// (0x0004ba32) main_cset6_slider_pane_g7_ParamLimits

0x0ebd,	// (0x0004ba32) main_cset6_slider_pane_g7

0x0ec9,	// (0x0004ba3e) main_cset6_slider_pane_g8_ParamLimits

0x0ec9,	// (0x0004ba3e) main_cset6_slider_pane_g8

0xbe70,	// (0x000569e5) main_cset6_slider_pane_g9_ParamLimits

0xbe70,	// (0x000569e5) main_cset6_slider_pane_g9

0xbe7c,	// (0x000569f1) main_cset6_slider_pane_g10_ParamLimits

0xbe7c,	// (0x000569f1) main_cset6_slider_pane_g10

0xbe58,	// (0x000569cd) main_cset6_slider_pane_g11_ParamLimits

0xbe58,	// (0x000569cd) main_cset6_slider_pane_g11

0xbe88,	// (0x000569fd) main_cset6_slider_pane_g12_ParamLimits

0xbe88,	// (0x000569fd) main_cset6_slider_pane_g12

0xbe94,	// (0x00056a09) main_cset6_slider_pane_g13_ParamLimits

0xbe94,	// (0x00056a09) main_cset6_slider_pane_g13

0xbea0,	// (0x00056a15) main_cset6_slider_pane_g14_ParamLimits

0xbea0,	// (0x00056a15) main_cset6_slider_pane_g14

0xbeac,	// (0x00056a21) main_cset6_slider_pane_g15_ParamLimits

0xbeac,	// (0x00056a21) main_cset6_slider_pane_g15

0xbe64,	// (0x000569d9) main_cset6_slider_pane_g16_ParamLimits

0xbe64,	// (0x000569d9) main_cset6_slider_pane_g16

0xbec4,	// (0x00056a39) main_cset6_slider_pane_g17_ParamLimits

0xbec4,	// (0x00056a39) main_cset6_slider_pane_g17

0x0011,

0xfba5,	// (0x0005a71a) main_cset6_slider_pane_g_ParamLimits

0xfba5,	// (0x0005a71a) main_cset6_slider_pane_g

0x16ab,	// (0x0004c220) main_cset6_slider_pane_t1_ParamLimits

0x16ab,	// (0x0004c220) main_cset6_slider_pane_t1

0xbed0,	// (0x00056a45) main_cset6_slider_pane_t2_ParamLimits

0xbed0,	// (0x00056a45) main_cset6_slider_pane_t2

0x16ec,	// (0x0004c261) main_cset6_slider_pane_t3_ParamLimits

0x16ec,	// (0x0004c261) main_cset6_slider_pane_t3

0xbefb,	// (0x00056a70) main_cset6_slider_pane_t4_ParamLimits

0xbefb,	// (0x00056a70) main_cset6_slider_pane_t4

0x1717,	// (0x0004c28c) main_cset6_slider_pane_t5_ParamLimits

0x1717,	// (0x0004c28c) main_cset6_slider_pane_t5

0x1742,	// (0x0004c2b7) main_cset6_slider_pane_t7_ParamLimits

0x1742,	// (0x0004c2b7) main_cset6_slider_pane_t7

0xbf26,	// (0x00056a9b) main_cset6_slider_pane_t8_ParamLimits

0xbf26,	// (0x00056a9b) main_cset6_slider_pane_t8

0xbf4a,	// (0x00056abf) main_cset6_slider_pane_t9_ParamLimits

0xbf4a,	// (0x00056abf) main_cset6_slider_pane_t9

0xbf6e,	// (0x00056ae3) main_cset6_slider_pane_t10_ParamLimits

0xbf6e,	// (0x00056ae3) main_cset6_slider_pane_t10

0xbf92,	// (0x00056b07) main_cset6_slider_pane_t11_ParamLimits

0xbf92,	// (0x00056b07) main_cset6_slider_pane_t11

0x1778,	// (0x0004c2ed) main_cset6_slider_pane_t14_ParamLimits

0x1778,	// (0x0004c2ed) main_cset6_slider_pane_t14

0x17b1,	// (0x0004c326) main_cset6_slider_pane_t15_ParamLimits

0x17b1,	// (0x0004c326) main_cset6_slider_pane_t15

0x000b,

0xfbca,	// (0x0005a73f) main_cset6_slider_pane_t_ParamLimits

0xfbca,	// (0x0005a73f) main_cset6_slider_pane_t

0x0f81,	// (0x0004baf6) cset_slider_pane_g1_copy1

0x0f8a,	// (0x0004baff) cset_slider_pane_g2_copy1

0x0f93,	// (0x0004bb08) cset_slider_pane_g3_copy1

0x2b5c,	// (0x0004d6d1) bg_popup_sub_pane_cp011_copy1

0x1014,	// (0x0004bb89) main_cset_text_pane_g1_copy1

0x101c,	// (0x0004bb91) main_cset_text_pane_t1_copy1

0x102a,	// (0x0004bb9f) main_cset_text_pane_t2_copy1

0x1038,	// (0x0004bbad) main_cset_text_pane_t3_copy1

0x1046,	// (0x0004bbbb) main_cset_text_pane_t4_copy1

0x1054,	// (0x0004bbc9) main_cset_text_pane_t5_copy1

0x1062,	// (0x0004bbd7) main_cset_text_pane_t6_copy1

0x1070,	// (0x0004bbe5) main_cset_text_pane_t7_copy1

0xbfd3,	// (0x00056b48) main_cset_text2_pane_t1_copy1

0x8a0d,	// (0x00053582) main_ncimui_pane

0x8a66,	// (0x000535db) popup_query_ncimui_window_ParamLimits

0x8a66,	// (0x000535db) popup_query_ncimui_window

0x08ec,	// (0x0004b461) field_cale_ev2_pane_g4_ParamLimits

0x08ec,	// (0x0004b461) field_cale_ev2_pane_g4

0xa18a,	// (0x00054cff) cell_video_dialer_keypad_pane_g2_ParamLimits

0xa18a,	// (0x00054cff) cell_video_dialer_keypad_pane_g2

0x0001,

0xf8a4,	// (0x0005a419) cell_video_dialer_keypad_pane_g_ParamLimits

0xf8a4,	// (0x0005a419) cell_video_dialer_keypad_pane_g

0xa1a2,	// (0x00054d17) cell_video_dialer_keypad_pane_t1

0x2b5c,	// (0x0004d6d1) bg_popup_window_pane_cp012

0x3c8b,	// (0x0004e800) heading_pane_cp06

0x18c8,	// (0x0004c43d) ncim_query_content_pane

0x2b5c,	// (0x0004d6d1) bg_popup_heading_pane_cp01

0x18d0,	// (0x0004c445) ncim_heading_pane_t1

0x18de,	// (0x0004c453) ncim_indicator_popup_pane

0x18f0,	// (0x0004c465) ncim_query_button_pane

0x1904,	// (0x0004c479) ncim_query_content_pane_t1

0x1916,	// (0x0004c48b) ncim_query_content_pane_t2

0x0005,

0xfc0e,	// (0x0005a783) ncim_query_content_pane_t

0x1950,	// (0x0004c4c5) ncim_query_list_pane

0x1962,	// (0x0004c4d7) ncim_query_popup_pane

0x18de,	// (0x0004c453) ncim_indicator_popup_pane_ParamLimits

0xc114,	// (0x00056c89) ncim_query_content_pane_g1_ParamLimits

0xc114,	// (0x00056c89) ncim_query_content_pane_g1

0x1904,	// (0x0004c479) ncim_query_content_pane_t1_ParamLimits

0x1916,	// (0x0004c48b) ncim_query_content_pane_t2_ParamLimits

0xc120,	// (0x00056c95) ncim_query_content_pane_t3_ParamLimits

0xc120,	// (0x00056c95) ncim_query_content_pane_t3

0xc13d,	// (0x00056cb2) ncim_query_content_pane_t4_ParamLimits

0xc13d,	// (0x00056cb2) ncim_query_content_pane_t4

0xc15a,	// (0x00056ccf) ncim_query_content_pane_t5_ParamLimits

0xc15a,	// (0x00056ccf) ncim_query_content_pane_t5

0x1928,	// (0x0004c49d) ncim_query_content_pane_t6_ParamLimits

0x1928,	// (0x0004c49d) ncim_query_content_pane_t6

0xfc0e,	// (0x0005a783) ncim_query_content_pane_t_ParamLimits

0x1950,	// (0x0004c4c5) ncim_query_list_pane_ParamLimits

0x1962,	// (0x0004c4d7) ncim_query_popup_pane_ParamLimits

0x1976,	// (0x0004c4eb) wait_bar_pane_cp04

0x2b5c,	// (0x0004d6d1) input_focus_pane_cp011

0x197e,	// (0x0004c4f3) ncim_query_popup_pane_t1

0x198c,	// (0x0004c501) ncim_list_query_list_pane_ParamLimits

0x198c,	// (0x0004c501) ncim_list_query_list_pane

0x2b5c,	// (0x0004d6d1) bg_button_pane_cp027

0x199f,	// (0x0004c514) ncim_query_button_pane_g1

0x2b5c,	// (0x0004d6d1) list_highlight_pane_cp012

0x19a9,	// (0x0004c51e) ncim_list_query_list_pane_g1

0x19b1,	// (0x0004c526) ncim_list_query_list_pane_t1

0xa847,	// (0x000553bc) cam4_indicators_pane_g3_ParamLimits

0xa847,	// (0x000553bc) cam4_indicators_pane_g3

0xa8f8,	// (0x0005546d) vid4_indicators_pane_g5_ParamLimits

0xa8f8,	// (0x0005546d) vid4_indicators_pane_g5

0xb896,	// (0x0005640b) vid4_progress_pane_g5_ParamLimits

0xb896,	// (0x0005640b) vid4_progress_pane_g5

0xc004,	// (0x00056b79) main_ncimui_pane_g1

0xc06a,	// (0x00056bdf) ncimui_group_query_pane_ParamLimits

0xc06a,	// (0x00056bdf) ncimui_group_query_pane

0xc0b2,	// (0x00056c27) ncimui_list_pane_ParamLimits

0xc0b2,	// (0x00056c27) ncimui_list_pane

0xc0d7,	// (0x00056c4c) ncimui_text_pane_ParamLimits

0xc0d7,	// (0x00056c4c) ncimui_text_pane

0xc177,	// (0x00056cec) ncimui_text_pane_t1_ParamLimits

0xc177,	// (0x00056cec) ncimui_text_pane_t1

0x19c8,	// (0x0004c53d) ncimui_list_single_graphic_pane_ParamLimits

0x19c8,	// (0x0004c53d) ncimui_list_single_graphic_pane

0xc195,	// (0x00056d0a) ncimui_query_pane_ParamLimits

0xc195,	// (0x00056d0a) ncimui_query_pane

0x2b5c,	// (0x0004d6d1) list_highlight_pane_cp013

0x19d8,	// (0x0004c54d) ncim_list_query_list_pane_t1_copy1

0x19e6,	// (0x0004c55b) ncim_list_single_graphic_pane_g1

0x19ee,	// (0x0004c563) ncim_query_button_pane_cp01

0x19fa,	// (0x0004c56f) ncim_query_entry_pane_ParamLimits

0x19fa,	// (0x0004c56f) ncim_query_entry_pane

0x1a0d,	// (0x0004c582) ncimui_query_pane_g1

0x1a19,	// (0x0004c58e) ncimui_query_pane_t1_ParamLimits

0x1a19,	// (0x0004c58e) ncimui_query_pane_t1

0x4b0e,	// (0x0004f683) input_focus_pane_cp012

0x1a32,	// (0x0004c5a7) ncim_query_entry_pane_t1

0x33a4,	// (0x0004df19) main_im_pane_ParamLimits

0x8a0d,	// (0x00053582) main_mobtv_pane_ParamLimits

0x8a0d,	// (0x00053582) main_mobtv_pane

0xbe70,	// (0x000569e5) main_cset6_slider_pane_g18_ParamLimits

0xbe70,	// (0x000569e5) main_cset6_slider_pane_g18

0xbe94,	// (0x00056a09) main_cset6_slider_pane_g19_ParamLimits

0xbe94,	// (0x00056a09) main_cset6_slider_pane_g19

0x0d3f,	// (0x0004b8b4) bg_main_mobtv_pane_ParamLimits

0x0d3f,	// (0x0004b8b4) bg_main_mobtv_pane

0xc1a5,	// (0x00056d1a) main_mobtv_info_pane

0xc1ae,	// (0x00056d23) main_mobtv_loading_pane_ParamLimits

0xc1ae,	// (0x00056d23) main_mobtv_loading_pane

0x1a52,	// (0x0004c5c7) main_mobtv_pg_channel_list_pane

0x1a5c,	// (0x0004c5d1) main_mobtv_pg_hdr_pane

0xc1bb,	// (0x00056d30) main_mobtv_programe_curr_pane_ParamLimits

0xc1bb,	// (0x00056d30) main_mobtv_programe_curr_pane

0xc1c8,	// (0x00056d3d) main_mobtv_programe_next_pane_ParamLimits

0xc1c8,	// (0x00056d3d) main_mobtv_programe_next_pane

0x1a65,	// (0x0004c5da) popup_mobtv_noti_window

0xe798,	// (0x0005930d) main_tv_pg_hdr_pane_g1

0x1a6d,	// (0x0004c5e2) main_tv_pg_hdr_pane_g2

0x1a75,	// (0x0004c5ea) main_tv_pg_hdr_pane_g3

0x1a7d,	// (0x0004c5f2) main_tv_pg_hdr_pane_g4

0x1a85,	// (0x0004c5fa) main_tv_pg_hdr_pane_g5

0x1a8d,	// (0x0004c602) main_tv_pg_hdr_pane_g6

0x1a95,	// (0x0004c60a) main_tv_pg_hdr_pane_g7

0x1a9d,	// (0x0004c612) main_tv_pg_hdr_pane_g8

0x1aa5,	// (0x0004c61a) main_tv_pg_hdr_pane_g9

0x1aad,	// (0x0004c622) main_tv_pg_hdr_pane_g10

0x1ab7,	// (0x0004c62c) main_tv_pg_hdr_pane_g11

0x000a,

0xfc1b,	// (0x0005a790) main_tv_pg_hdr_pane_g

0x1ac1,	// (0x0004c636) main_tv_pg_hdr_pane_t1

0x1acf,	// (0x0004c644) main_tv_pg_hdr_pane_t2

0x1add,	// (0x0004c652) main_tv_pg_hdr_pane_t3

0x1aeb,	// (0x0004c660) main_tv_pg_hdr_pane_t4

0x1af9,	// (0x0004c66e) main_tv_pg_hdr_pane_t5

0x0004,

0xfc32,	// (0x0005a7a7) main_tv_pg_hdr_pane_t

0x1b07,	// (0x0004c67c) single_mobtv_pg_channel_pane_ParamLimits

0x1b07,	// (0x0004c67c) single_mobtv_pg_channel_pane

0x1b19,	// (0x0004c68e) single_mobtv_pg_channel_table_pane

0x1b22,	// (0x0004c697) single_mobtv_pg_channel_thumb_pane

0x1b2b,	// (0x0004c6a0) single_tv_pg_channel_pane_g1

0x1b34,	// (0x0004c6a9) single_tv_pg_channel_pane_g2

0x0001,

0xfc3d,	// (0x0005a7b2) single_tv_pg_channel_pane_g

0xe9c7,	// (0x0005953c) bg_single_mobtv_pg_channel_thumb_pane_ParamLimits

0xe9c7,	// (0x0005953c) bg_single_mobtv_pg_channel_thumb_pane

0x1b3d,	// (0x0004c6b2) single_mobtv_pg_channel_thumb_pane_g1_ParamLimits

0x1b3d,	// (0x0004c6b2) single_mobtv_pg_channel_thumb_pane_g1

0x1b4b,	// (0x0004c6c0) single_mobtv_pg_channel_thumb_pane_g2_ParamLimits

0x1b4b,	// (0x0004c6c0) single_mobtv_pg_channel_thumb_pane_g2

0x1b57,	// (0x0004c6cc) single_mobtv_pg_channel_thumb_pane_g3_ParamLimits

0x1b57,	// (0x0004c6cc) single_mobtv_pg_channel_thumb_pane_g3

0x0002,

0xfc42,	// (0x0005a7b7) single_mobtv_pg_channel_thumb_pane_g_ParamLimits

0xfc42,	// (0x0005a7b7) single_mobtv_pg_channel_thumb_pane_g

0x1b63,	// (0x0004c6d8) single_mobtv_pg_channel_thumb_pane_t1

0x1b71,	// (0x0004c6e6) single_mobtv_pg_channel_thumb_pane_t2

0x0001,

0xfc49,	// (0x0005a7be) single_mobtv_pg_channel_thumb_pane_t

0xe798,	// (0x0005930d) bg_single_mobtv_pg_channel_table_pane_g1

0xe798,	// (0x0005930d) bg_single_mobtv_pg_channel_table_pane_g2

0x0001,

0xf6eb,	// (0x0005a260) bg_single_mobtv_pg_channel_table_pane_g

0x1b7f,	// (0x0004c6f4) single_mobtv_pg_channel_table_pane_t1

0x1b8d,	// (0x0004c702) single_mobtv_pg_channel_table_pane_t2

0x0001,

0xfc4e,	// (0x0005a7c3) single_mobtv_pg_channel_table_pane_t

0xc1dd,	// (0x00056d52) main_mobtv_info_pane_g1_ParamLimits

0xc1dd,	// (0x00056d52) main_mobtv_info_pane_g1

0xc1f9,	// (0x00056d6e) main_mobtv_info_pane_t1_ParamLimits

0xc1f9,	// (0x00056d6e) main_mobtv_info_pane_t1

0xc25f,	// (0x00056dd4) main_mobtv_info_pane_t2_ParamLimits

0xc25f,	// (0x00056dd4) main_mobtv_info_pane_t2

0x0002,

0xfc58,	// (0x0005a7cd) main_mobtv_info_pane_t_ParamLimits

0xfc58,	// (0x0005a7cd) main_mobtv_info_pane_t

0xc2e2,	// (0x00056e57) wait_bar_pane_cp05

0xc2f2,	// (0x00056e67) main_mobtv_loading_pane_g1_ParamLimits

0xc2f2,	// (0x00056e67) main_mobtv_loading_pane_g1

0xc2fe,	// (0x00056e73) main_mobtv_loading_pane_g2_ParamLimits

0xc2fe,	// (0x00056e73) main_mobtv_loading_pane_g2

0xc30a,	// (0x00056e7f) main_mobtv_loading_pane_g3_ParamLimits

0xc30a,	// (0x00056e7f) main_mobtv_loading_pane_g3

0x0002,

0xfc5f,	// (0x0005a7d4) main_mobtv_loading_pane_g_ParamLimits

0xfc5f,	// (0x0005a7d4) main_mobtv_loading_pane_g

0x1b9b,	// (0x0004c710) main_mobtv_loading_pane_t1_ParamLimits

0x1b9b,	// (0x0004c710) main_mobtv_loading_pane_t1

0x1bb3,	// (0x0004c728) main_mobtv_loading_pane_t2_ParamLimits

0x1bb3,	// (0x0004c728) main_mobtv_loading_pane_t2

0x0001,

0xfc66,	// (0x0005a7db) main_mobtv_loading_pane_t_ParamLimits

0xfc66,	// (0x0005a7db) main_mobtv_loading_pane_t

0xc316,	// (0x00056e8b) wait_bar_pane_cp06_ParamLimits

0xc316,	// (0x00056e8b) wait_bar_pane_cp06

0x1bd7,	// (0x0004c74c) main_mobtv_programe_curr_pane_t1

0x1be5,	// (0x0004c75a) main_mobtv_programe_curr_pane_t2

0x0001,

0xfc6b,	// (0x0005a7e0) main_mobtv_programe_curr_pane_t

0x1bf3,	// (0x0004c768) main_mobtv_programe_next_pane_t1

0x1c01,	// (0x0004c776) main_mobtv_programe_next_pane_t2

0x1c0f,	// (0x0004c784) main_mobtv_programe_next_pane_t3

0x0002,

0xfc70,	// (0x0005a7e5) main_mobtv_programe_next_pane_t

0x2b5c,	// (0x0004d6d1) bg_popup_mobtv_noti_window_pane

0x1c1d,	// (0x0004c792) popup_mobtv_noti_window_g1

0x1c25,	// (0x0004c79a) popup_mobtv_noti_window_t1

0x1c33,	// (0x0004c7a8) popup_mobtv_noti_window_t2

0x0001,

0xfc77,	// (0x0005a7ec) popup_mobtv_noti_window_t

0xe798,	// (0x0005930d) bg_popup_mobtv_noti_window_pane_g1

0x5d83,	// (0x000508f8) sc_clock_pane

0x5d83,	// (0x000508f8) main_fs_bigclock_pane

0xbaad,	// (0x00056622) blid2_tripm_pane_t4_ParamLimits

0xbaad,	// (0x00056622) blid2_tripm_pane_t4

0xc322,	// (0x00056e97) sc_clock_pane_g1_ParamLimits

0xc322,	// (0x00056e97) sc_clock_pane_g1

0xc330,	// (0x00056ea5) sc_clock_pane_t1_ParamLimits

0xc330,	// (0x00056ea5) sc_clock_pane_t1

0xc343,	// (0x00056eb8) sc_clock_pane_t2_ParamLimits

0xc343,	// (0x00056eb8) sc_clock_pane_t2

0xc355,	// (0x00056eca) sc_clock_pane_t3_ParamLimits

0xc355,	// (0x00056eca) sc_clock_pane_t3

0x0004,

0xfc7c,	// (0x0005a7f1) sc_clock_pane_t_ParamLimits

0xfc7c,	// (0x0005a7f1) sc_clock_pane_t

0xd1dd,	// (0x00057d52) main_fs_bigclock_indicator_pane_ParamLimits

0xd1dd,	// (0x00057d52) main_fs_bigclock_indicator_pane

0xc3d0,	// (0x00056f45) main_fs_bigclock_pane_g1_ParamLimits

0xc3d0,	// (0x00056f45) main_fs_bigclock_pane_g1

0xd1e9,	// (0x00057d5e) main_fs_bigclock_pane_t1_ParamLimits

0xd1e9,	// (0x00057d5e) main_fs_bigclock_pane_t1

0xd1fb,	// (0x00057d70) main_fs_bigclock_pane_t2_ParamLimits

0xd1fb,	// (0x00057d70) main_fs_bigclock_pane_t2

0xd20d,	// (0x00057d82) main_fs_bigclock_pane_t3_ParamLimits

0xd20d,	// (0x00057d82) main_fs_bigclock_pane_t3

0x0002,

0xfe86,	// (0x0005a9fb) main_fs_bigclock_pane_t_ParamLimits

0xfe86,	// (0x0005a9fb) main_fs_bigclock_pane_t

0x2719,	// (0x0004d28e) main_fs_bigclock_indicator_pane_g1

0x18f8,	// (0x0004c46d) ncim_query_content_pane_g2_ParamLimits

0x18f8,	// (0x0004c46d) ncim_query_content_pane_g2

0x0001,

0xfc09,	// (0x0005a77e) ncim_query_content_pane_g_ParamLimits

0xfc09,	// (0x0005a77e) ncim_query_content_pane_g

0xc367,	// (0x00056edc) sc_clock_pane_t4_ParamLimits

0xc367,	// (0x00056edc) sc_clock_pane_t4

0x8a0d,	// (0x00053582) main_radioblah_pane

0xa6e6,	// (0x0005525b) cell_call4_button_pane_t1_copy1_ParamLimits

0xa6e6,	// (0x0005525b) cell_call4_button_pane_t1_copy1

0xc01c,	// (0x00056b91) main_ncimui_pane_t1_ParamLimits

0xc01c,	// (0x00056b91) main_ncimui_pane_t1

0xc036,	// (0x00056bab) main_ncimui_pane_t2_ParamLimits

0xc036,	// (0x00056bab) main_ncimui_pane_t2

0x0002,

0xfc02,	// (0x0005a777) main_ncimui_pane_t_ParamLimits

0xfc02,	// (0x0005a777) main_ncimui_pane_t

0x1d74,	// (0x0004c8e9) main_radioblah_anim_pane_ParamLimits

0x1d74,	// (0x0004c8e9) main_radioblah_anim_pane

0x1d85,	// (0x0004c8fa) main_radioblah_info_pane_ParamLimits

0x1d85,	// (0x0004c8fa) main_radioblah_info_pane

0x1d99,	// (0x0004c90e) main_radioblah_pane_t1_ParamLimits

0x1d99,	// (0x0004c90e) main_radioblah_pane_t1

0x1db5,	// (0x0004c92a) main_radioblah_pane_t2_ParamLimits

0x1db5,	// (0x0004c92a) main_radioblah_pane_t2

0x0003,

0xfc9d,	// (0x0005a812) main_radioblah_pane_t_ParamLimits

0xfc9d,	// (0x0005a812) main_radioblah_pane_t

0xc418,	// (0x00056f8d) main_radioblah_rocker_ctrl_pane_ParamLimits

0xc418,	// (0x00056f8d) main_radioblah_rocker_ctrl_pane

0x1dfd,	// (0x0004c972) main_radioblah_info_pane_t1_ParamLimits

0x1dfd,	// (0x0004c972) main_radioblah_info_pane_t1

0xc45d,	// (0x00056fd2) main_radioblah_info_pane_t2_ParamLimits

0xc45d,	// (0x00056fd2) main_radioblah_info_pane_t2

0x0003,

0xfca6,	// (0x0005a81b) main_radioblah_info_pane_t_ParamLimits

0xfca6,	// (0x0005a81b) main_radioblah_info_pane_t

0xe798,	// (0x0005930d) main_radioblah_rocker_ctrl_pane_g1

0xc505,	// (0x0005707a) main_radioblah_rocker_ctrl_pane_g2

0xc50d,	// (0x00057082) main_radioblah_rocker_ctrl_pane_g3

0xc515,	// (0x0005708a) main_radioblah_rocker_ctrl_pane_g4

0xc51d,	// (0x00057092) main_radioblah_rocker_ctrl_pane_g5

0xc525,	// (0x0005709a) main_radioblah_rocker_ctrl_pane_g6

0x0005,

0xfcaf,	// (0x0005a824) main_radioblah_rocker_ctrl_pane_g

0xbfd3,	// (0x00056b48) main_cset_text2_pane_t1_copy1_ParamLimits

0xa769,	// (0x000552de) cam4_image_uncrop_qvga_pane

0xa88b,	// (0x00055400) vid4_image_uncrop_qcif_pane

0xbc2b,	// (0x000567a0) cam6_image_uncrop_qvga_pane_ParamLimits

0xbc2b,	// (0x000567a0) cam6_image_uncrop_qvga_pane

0x1535,	// (0x0004c0aa) vid6_image_uncrop_qcif_pane_ParamLimits

0x1535,	// (0x0004c0aa) vid6_image_uncrop_qcif_pane

0x2b5c,	// (0x0004d6d1) bg_popup_preview_window_pane_cp03

0x189e,	// (0x0004c413) list_cset_text2_pane

0x18a6,	// (0x0004c41b) main_cset6_text2_pane_g1

0x18ae,	// (0x0004c423) main_cset6_text2_pane_t1

0x2ab9,	// (0x0004d62e) list_cset_text2_pane_t1_ParamLimits

0x2ab9,	// (0x0004d62e) list_cset_text2_pane_t1

0x8a0d,	// (0x00053582) main_radioblah_pane_ParamLimits

0xc2d0,	// (0x00056e45) main_mobtv_info_pane_t3_ParamLimits

0xc2d0,	// (0x00056e45) main_mobtv_info_pane_t3

0xc406,	// (0x00056f7b) main_radioblah_pane_g1

0xc431,	// (0x00056fa6) main_radioblah_info_pane_g1

0xc4ac,	// (0x00057021) main_radioblah_info_pane_t3_ParamLimits

0xc4ac,	// (0x00057021) main_radioblah_info_pane_t3

0x7987,	// (0x000524fc) highlight_cell_cale_month_pane_ParamLimits

0x7987,	// (0x000524fc) highlight_cell_cale_month_pane

0x5d83,	// (0x000508f8) main_phob_fisheye_pane

0xeaa3,	// (0x00059618) scroll_pane_cp0031_ParamLimits

0xeaa3,	// (0x00059618) scroll_pane_cp0031

0x163f,	// (0x0004c1b4) wait_bar_pane_cp08_ParamLimits

0xbdf5,	// (0x0005696a) cset_list_set_pane_copy1_ParamLimits

0x1e37,	// (0x0004c9ac) highlight_cell_cale_month_pane_g1

0xc52d,	// (0x000570a2) highlight_cell_cale_month_pane_t1

0x1e3f,	// (0x0004c9b4) list_gen_pane_cp01

0x0ea8,	// (0x0004ba1d) scroll_pane_01

0x4c14,	// (0x0004f789) list_single_double_fisheye_pane

0x1e48,	// (0x0004c9bd) list_double_fisheye_pane_g1_ParamLimits

0x1e48,	// (0x0004c9bd) list_double_fisheye_pane_g1

0x1e54,	// (0x0004c9c9) list_double_fisheye_pane_g2_ParamLimits

0x1e54,	// (0x0004c9c9) list_double_fisheye_pane_g2

0x4c1d,	// (0x0004f792) list_double_fisheye_pane_g3_ParamLimits

0x4c1d,	// (0x0004f792) list_double_fisheye_pane_g3

0x0004,

0xfcbc,	// (0x0005a831) list_double_fisheye_pane_g_ParamLimits

0xfcbc,	// (0x0005a831) list_double_fisheye_pane_g

0x1e85,	// (0x0004c9fa) list_double_fisheye_pane_t1_ParamLimits

0x1e85,	// (0x0004c9fa) list_double_fisheye_pane_t1

0x1ea0,	// (0x0004ca15) list_double_fisheye_pane_t2_ParamLimits

0x1ea0,	// (0x0004ca15) list_double_fisheye_pane_t2

0x0001,

0xfcc7,	// (0x0005a83c) list_double_fisheye_pane_t_ParamLimits

0xfcc7,	// (0x0005a83c) list_double_fisheye_pane_t

0x5d83,	// (0x000508f8) main_call5_pane

0xc38d,	// (0x00056f02) sc_swipe_pane_ParamLimits

0xc38d,	// (0x00056f02) sc_swipe_pane

0xc547,	// (0x000570bc) call5_image_pane_ParamLimits

0xc547,	// (0x000570bc) call5_image_pane

0xc553,	// (0x000570c8) call5_swipe_1_pane_ParamLimits

0xc553,	// (0x000570c8) call5_swipe_1_pane

0xc55f,	// (0x000570d4) call5_swipe_2_pane_ParamLimits

0xc55f,	// (0x000570d4) call5_swipe_2_pane

0xc577,	// (0x000570ec) popup_call5_audio_first_window_ParamLimits

0xc577,	// (0x000570ec) popup_call5_audio_first_window

0xe9c7,	// (0x0005953c) call5_swipe_1_pane_g1_ParamLimits

0xe9c7,	// (0x0005953c) call5_swipe_1_pane_g1

0x1ec2,	// (0x0004ca37) call5_swipe_1_pane_g2_ParamLimits

0x1ec2,	// (0x0004ca37) call5_swipe_1_pane_g2

0x0001,

0xfccc,	// (0x0005a841) call5_swipe_1_pane_g_ParamLimits

0xfccc,	// (0x0005a841) call5_swipe_1_pane_g

0x1ece,	// (0x0004ca43) call5_swipe_1_pane_t1_ParamLimits

0x1ece,	// (0x0004ca43) call5_swipe_1_pane_t1

0xe9c7,	// (0x0005953c) call5_swipe_2_pane_g1_ParamLimits

0xe9c7,	// (0x0005953c) call5_swipe_2_pane_g1

0x1ee3,	// (0x0004ca58) call5_swipe_2_pane_g2_ParamLimits

0x1ee3,	// (0x0004ca58) call5_swipe_2_pane_g2

0x0001,

0xfcd1,	// (0x0005a846) call5_swipe_2_pane_g_ParamLimits

0xfcd1,	// (0x0005a846) call5_swipe_2_pane_g

0x1eef,	// (0x0004ca64) call5_swipe_2_pane_t1_ParamLimits

0x1eef,	// (0x0004ca64) call5_swipe_2_pane_t1

0x1f04,	// (0x0004ca79) sc_swipe_pane_g1_ParamLimits

0x1f04,	// (0x0004ca79) sc_swipe_pane_g1

0x1f11,	// (0x0004ca86) sc_swipe_pane_g2_ParamLimits

0x1f11,	// (0x0004ca86) sc_swipe_pane_g2

0x0001,

0xfcd6,	// (0x0005a84b) sc_swipe_pane_g_ParamLimits

0xfcd6,	// (0x0005a84b) sc_swipe_pane_g

0x1f1d,	// (0x0004ca92) sc_swipe_pane_t1_ParamLimits

0x1f1d,	// (0x0004ca92) sc_swipe_pane_t1

0x5d83,	// (0x000508f8) main_cmail_launcher_pane

0xc583,	// (0x000570f8) aid_size_cell_cmail_l_ParamLimits

0xc583,	// (0x000570f8) aid_size_cell_cmail_l

0xc593,	// (0x00057108) grid_cmail_l_pane_ParamLimits

0xc593,	// (0x00057108) grid_cmail_l_pane

0xc59f,	// (0x00057114) cell_cmail_l_pane_ParamLimits

0xc59f,	// (0x00057114) cell_cmail_l_pane

0xc5b1,	// (0x00057126) cell_cmail_l_pane_g1_ParamLimits

0xc5b1,	// (0x00057126) cell_cmail_l_pane_g1

0xc5c1,	// (0x00057136) cell_cmail_l_pane_t1_ParamLimits

0xc5c1,	// (0x00057136) cell_cmail_l_pane_t1

0xc5d7,	// (0x0005714c) cell_cmail_l_pane_t2_ParamLimits

0xc5d7,	// (0x0005714c) cell_cmail_l_pane_t2

0x0001,

0xfcdb,	// (0x0005a850) cell_cmail_l_pane_t_ParamLimits

0xfcdb,	// (0x0005a850) cell_cmail_l_pane_t

0x4b0e,	// (0x0004f683) grid_highlight_pane_cp018_ParamLimits

0x4b0e,	// (0x0004f683) grid_highlight_pane_cp018

0x5c1d,	// (0x00050792) main2_pane_ParamLimits

0x5c1d,	// (0x00050792) main2_pane

0x344f,	// (0x0004dfc4) popup_sp_fs_action_menu_bg_pane_g1

0x3457,	// (0x0004dfcc) popup_sp_fs_action_menu_bg_pane_g2

0x345f,	// (0x0004dfd4) popup_sp_fs_action_menu_bg_pane_g3

0x3467,	// (0x0004dfdc) popup_sp_fs_action_menu_bg_pane_g4

0x346f,	// (0x0004dfe4) popup_sp_fs_action_menu_bg_pane_g5

0x3477,	// (0x0004dfec) popup_sp_fs_action_menu_bg_pane_g6

0x347f,	// (0x0004dff4) popup_sp_fs_action_menu_bg_pane_g7

0x3487,	// (0x0004dffc) popup_sp_fs_action_menu_bg_pane_g8

0x348f,	// (0x0004e004) popup_sp_fs_action_menu_bg_pane_g9

0x3497,	// (0x0004e00c) popup_sp_fs_action_menu_bg_pane_g10

0x3497,	// (0x0004e00c) popup_sp_fs_action_menu_bg_pane_g11

0x000a,

0xf186,	// (0x00059cfb) popup_sp_fs_action_menu_bg_pane_g

0x051b,	// (0x0004b090) list_medium_line_x2_t3_g3_g1_ParamLimits

0x051b,	// (0x0004b090) list_medium_line_x2_t3_g3_g1

0x0527,	// (0x0004b09c) list_medium_line_x2_t3_g3_g2_ParamLimits

0x0527,	// (0x0004b09c) list_medium_line_x2_t3_g3_g2

0x0533,	// (0x0004b0a8) list_medium_line_x2_t3_g3_g3_ParamLimits

0x0533,	// (0x0004b0a8) list_medium_line_x2_t3_g3_g3

0x0002,

0xf234,	// (0x00059da9) list_medium_line_x2_t3_g3_g_ParamLimits

0xf234,	// (0x00059da9) list_medium_line_x2_t3_g3_g

0x053f,	// (0x0004b0b4) list_medium_line_x2_t3_g3_t1_ParamLimits

0x053f,	// (0x0004b0b4) list_medium_line_x2_t3_g3_t1

0x6aea,	// (0x0005165f) list_medium_line_x2_t3_g3_t2_ParamLimits

0x6aea,	// (0x0005165f) list_medium_line_x2_t3_g3_t2

0x0554,	// (0x0004b0c9) list_medium_line_x2_t3_g3_t3_ParamLimits

0x0554,	// (0x0004b0c9) list_medium_line_x2_t3_g3_t3

0x0002,

0xf23b,	// (0x00059db0) list_medium_line_x2_t3_g3_t_ParamLimits

0xf23b,	// (0x00059db0) list_medium_line_x2_t3_g3_t

0x051b,	// (0x0004b090) list_medium_line_x2_t3_g2_g1_ParamLimits

0x051b,	// (0x0004b090) list_medium_line_x2_t3_g2_g1

0x0533,	// (0x0004b0a8) list_medium_line_x2_t3_g2_g2_ParamLimits

0x0533,	// (0x0004b0a8) list_medium_line_x2_t3_g2_g2

0x0001,

0xf242,	// (0x00059db7) list_medium_line_x2_t3_g2_g_ParamLimits

0xf242,	// (0x00059db7) list_medium_line_x2_t3_g2_g

0x0569,	// (0x0004b0de) list_medium_line_x2_t3_g2_t1_ParamLimits

0x0569,	// (0x0004b0de) list_medium_line_x2_t3_g2_t1

0x057f,	// (0x0004b0f4) list_medium_line_x2_t3_g2_t2_ParamLimits

0x057f,	// (0x0004b0f4) list_medium_line_x2_t3_g2_t2

0x0554,	// (0x0004b0c9) list_medium_line_x2_t3_g2_t3_ParamLimits

0x0554,	// (0x0004b0c9) list_medium_line_x2_t3_g2_t3

0x0002,

0xf247,	// (0x00059dbc) list_medium_line_x2_t3_g2_t_ParamLimits

0xf247,	// (0x00059dbc) list_medium_line_x2_t3_g2_t

0x051b,	// (0x0004b090) list_medium_line_x2_t4_g4_g1_ParamLimits

0x051b,	// (0x0004b090) list_medium_line_x2_t4_g4_g1

0x0591,	// (0x0004b106) list_medium_line_x2_t4_g4_g2_ParamLimits

0x0591,	// (0x0004b106) list_medium_line_x2_t4_g4_g2

0x0527,	// (0x0004b09c) list_medium_line_x2_t4_g4_g3_ParamLimits

0x0527,	// (0x0004b09c) list_medium_line_x2_t4_g4_g3

0x059d,	// (0x0004b112) list_medium_line_x2_t4_g4_g4_ParamLimits

0x059d,	// (0x0004b112) list_medium_line_x2_t4_g4_g4

0x0003,

0xf24e,	// (0x00059dc3) list_medium_line_x2_t4_g4_g_ParamLimits

0xf24e,	// (0x00059dc3) list_medium_line_x2_t4_g4_g

0x6afc,	// (0x00051671) list_medium_line_x2_t4_g4_t1_ParamLimits

0x6afc,	// (0x00051671) list_medium_line_x2_t4_g4_t1

0x6b13,	// (0x00051688) list_medium_line_x2_t4_g4_t2_ParamLimits

0x6b13,	// (0x00051688) list_medium_line_x2_t4_g4_t2

0x6b28,	// (0x0005169d) list_medium_line_x2_t4_g4_t3_ParamLimits

0x6b28,	// (0x0005169d) list_medium_line_x2_t4_g4_t3

0x05a9,	// (0x0004b11e) list_medium_line_x2_t4_g4_t4_ParamLimits

0x05a9,	// (0x0004b11e) list_medium_line_x2_t4_g4_t4

0x0003,

0xf257,	// (0x00059dcc) list_medium_line_x2_t4_g4_t_ParamLimits

0xf257,	// (0x00059dcc) list_medium_line_x2_t4_g4_t

0x051b,	// (0x0004b090) list_medium_line_x2_t2_g4_g1_ParamLimits

0x051b,	// (0x0004b090) list_medium_line_x2_t2_g4_g1

0x0591,	// (0x0004b106) list_medium_line_x2_t2_g4_g2_ParamLimits

0x0591,	// (0x0004b106) list_medium_line_x2_t2_g4_g2

0x0527,	// (0x0004b09c) list_medium_line_x2_t2_g4_g3_ParamLimits

0x0527,	// (0x0004b09c) list_medium_line_x2_t2_g4_g3

0x0533,	// (0x0004b0a8) list_medium_line_x2_t2_g4_g4_ParamLimits

0x0533,	// (0x0004b0a8) list_medium_line_x2_t2_g4_g4

0x0003,

0xf2be,	// (0x00059e33) list_medium_line_x2_t2_g4_g_ParamLimits

0xf2be,	// (0x00059e33) list_medium_line_x2_t2_g4_g

0x05bb,	// (0x0004b130) list_medium_line_x2_t2_g4_t1_ParamLimits

0x05bb,	// (0x0004b130) list_medium_line_x2_t2_g4_t1

0x0554,	// (0x0004b0c9) list_medium_line_x2_t2_g4_t2_ParamLimits

0x0554,	// (0x0004b0c9) list_medium_line_x2_t2_g4_t2

0x0001,

0xf2c7,	// (0x00059e3c) list_medium_line_x2_t2_g4_t_ParamLimits

0xf2c7,	// (0x00059e3c) list_medium_line_x2_t2_g4_t

0x051b,	// (0x0004b090) list_medium_line_x2_t2_g3_g1_ParamLimits

0x051b,	// (0x0004b090) list_medium_line_x2_t2_g3_g1

0x0527,	// (0x0004b09c) list_medium_line_x2_t2_g3_g2_ParamLimits

0x0527,	// (0x0004b09c) list_medium_line_x2_t2_g3_g2

0x0533,	// (0x0004b0a8) list_medium_line_x2_t2_g3_g3_ParamLimits

0x0533,	// (0x0004b0a8) list_medium_line_x2_t2_g3_g3

0x0002,

0xf234,	// (0x00059da9) list_medium_line_x2_t2_g3_g_ParamLimits

0xf234,	// (0x00059da9) list_medium_line_x2_t2_g3_g

0x05d0,	// (0x0004b145) list_medium_line_x2_t2_g3_t1_ParamLimits

0x05d0,	// (0x0004b145) list_medium_line_x2_t2_g3_t1

0x0554,	// (0x0004b0c9) list_medium_line_x2_t2_g3_t2_ParamLimits

0x0554,	// (0x0004b0c9) list_medium_line_x2_t2_g3_t2

0x0001,

0xf2cc,	// (0x00059e41) list_medium_line_x2_t2_g3_t_ParamLimits

0xf2cc,	// (0x00059e41) list_medium_line_x2_t2_g3_t

0x7b19,	// (0x0005268e) main_sp_fs_list_pane_ParamLimits

0x7b19,	// (0x0005268e) main_sp_fs_list_pane

0x7b26,	// (0x0005269b) sp_fs_scroll_pane_ParamLimits

0x7b26,	// (0x0005269b) sp_fs_scroll_pane

0x7b33,	// (0x000526a8) list_medium_line_x2_t3_t1

0x7b43,	// (0x000526b8) list_medium_line_x2_t3_t2

0x0613,	// (0x0004b188) list_medium_line_x2_t3_t3

0x0002,

0xf317,	// (0x00059e8c) list_medium_line_x2_t3_t

0x7b51,	// (0x000526c6) list_medium_line_x3_t4_t1

0x7b61,	// (0x000526d6) list_medium_line_x3_t4_t2

0x0621,	// (0x0004b196) list_medium_line_x3_t4_t3

0x062f,	// (0x0004b1a4) list_medium_line_x3_t4_t4

0x0003,

0xf31e,	// (0x00059e93) list_medium_line_x3_t4_t

0x7b6f,	// (0x000526e4) list_medium_line_x4_t5_t1

0x7b7f,	// (0x000526f4) list_medium_line_x4_t5_t2

0x0621,	// (0x0004b196) list_medium_line_x4_t5_t3

0x063d,	// (0x0004b1b2) list_medium_line_x4_t5_t4

0x062f,	// (0x0004b1a4) list_medium_line_x4_t5_t5

0x0004,

0xf327,	// (0x00059e9c) list_medium_line_x4_t5_t

0x051b,	// (0x0004b090) list_medium_line_t4_g4_g1_ParamLimits

0x051b,	// (0x0004b090) list_medium_line_t4_g4_g1

0x059d,	// (0x0004b112) list_medium_line_t4_g4_g2_ParamLimits

0x059d,	// (0x0004b112) list_medium_line_t4_g4_g2

0x064b,	// (0x0004b1c0) list_medium_line_t4_g4_g3_ParamLimits

0x064b,	// (0x0004b1c0) list_medium_line_t4_g4_g3

0x0533,	// (0x0004b0a8) list_medium_line_t4_g4_g4_ParamLimits

0x0533,	// (0x0004b0a8) list_medium_line_t4_g4_g4

0x0003,

0xf332,	// (0x00059ea7) list_medium_line_t4_g4_g_ParamLimits

0xf332,	// (0x00059ea7) list_medium_line_t4_g4_g

0x0657,	// (0x0004b1cc) list_medium_line_t4_g4_t1_ParamLimits

0x0657,	// (0x0004b1cc) list_medium_line_t4_g4_t1

0x066c,	// (0x0004b1e1) list_medium_line_t4_g4_t2_ParamLimits

0x066c,	// (0x0004b1e1) list_medium_line_t4_g4_t2

0x0682,	// (0x0004b1f7) list_medium_line_t4_g4_t3_ParamLimits

0x0682,	// (0x0004b1f7) list_medium_line_t4_g4_t3

0x0698,	// (0x0004b20d) list_medium_line_t4_g4_t4_ParamLimits

0x0698,	// (0x0004b20d) list_medium_line_t4_g4_t4

0x0003,

0xf33b,	// (0x00059eb0) list_medium_line_t4_g4_t_ParamLimits

0xf33b,	// (0x00059eb0) list_medium_line_t4_g4_t

0x7c9b,	// (0x00052810) chi_dic_find_pane_g1

0x8a29,	// (0x0005359e) main_tport_pane

0xb1a9,	// (0x00055d1e) list_medium_line_plain_t1

0xb287,	// (0x00055dfc) list_medium_line_t2_g2_g1_ParamLimits

0xb287,	// (0x00055dfc) list_medium_line_t2_g2_g1

0xb293,	// (0x00055e08) list_medium_line_t2_g2_g2_ParamLimits

0xb293,	// (0x00055e08) list_medium_line_t2_g2_g2

0x0001,

0xfa13,	// (0x0005a588) list_medium_line_t2_g2_g_ParamLimits

0xfa13,	// (0x0005a588) list_medium_line_t2_g2_g

0xb29f,	// (0x00055e14) list_medium_line_t2_g2_t1_ParamLimits

0xb29f,	// (0x00055e14) list_medium_line_t2_g2_t1

0xb2b9,	// (0x00055e2e) list_medium_line_t2_g2_t2_ParamLimits

0xb2b9,	// (0x00055e2e) list_medium_line_t2_g2_t2

0x0001,

0xfa18,	// (0x0005a58d) list_medium_line_t2_g2_t_ParamLimits

0xfa18,	// (0x0005a58d) list_medium_line_t2_g2_t

0x12e4,	// (0x0004be59) aid_sp_fs_list_icon_a_sm

0x12ec,	// (0x0004be61) aid_sp_fs_list_icon_d

0x12f4,	// (0x0004be69) aid_sp_fs_text_primary

0x12fd,	// (0x0004be72) aid_sp_fs_text_secondary

0x1341,	// (0x0004beb6) list_medium_line

0x1341,	// (0x0004beb6) list_medium_line_g2

0x1341,	// (0x0004beb6) list_medium_line_g3

0x1341,	// (0x0004beb6) list_medium_line_plain

0x1341,	// (0x0004beb6) list_medium_line_plain_t2

0x1341,	// (0x0004beb6) list_medium_line_plain_t3

0x1341,	// (0x0004beb6) list_medium_line_right_icon

0x1341,	// (0x0004beb6) list_medium_line_right_iconx2

0x1341,	// (0x0004beb6) list_medium_line_t2

0x1341,	// (0x0004beb6) list_medium_line_t2_g2

0x1341,	// (0x0004beb6) list_medium_line_t2_g3

0x1341,	// (0x0004beb6) list_medium_line_t2_right_icon

0x1341,	// (0x0004beb6) list_medium_line_t2_right_iconx2

0x1341,	// (0x0004beb6) list_medium_line_t3

0x1341,	// (0x0004beb6) list_medium_line_t3_g2

0x1341,	// (0x0004beb6) list_medium_line_t3_g3

0x1341,	// (0x0004beb6) list_medium_line_t3_right_iconx2

0x4c0b,	// (0x0004f780) list_medium_line_t4_g4

0x1306,	// (0x0004be7b) list_medium_line_x2

0x1306,	// (0x0004be7b) list_medium_line_x2_t2_g2

0x1306,	// (0x0004be7b) list_medium_line_x2_t2_g3

0x1306,	// (0x0004be7b) list_medium_line_x2_t2_g4

0x1306,	// (0x0004be7b) list_medium_line_x2_t3

0x1306,	// (0x0004be7b) list_medium_line_x2_t3_g2

0x1306,	// (0x0004be7b) list_medium_line_x2_t3_g3

0x1306,	// (0x0004be7b) list_medium_line_x2_t3_g4

0x1306,	// (0x0004be7b) list_medium_line_x2_t4_g2

0x1306,	// (0x0004be7b) list_medium_line_x2_t4_g4

0x130f,	// (0x0004be84) list_medium_line_x3

0x130f,	// (0x0004be84) list_medium_line_x3_t4

0x130f,	// (0x0004be84) list_medium_line_x3_t4_g4

0x4c0b,	// (0x0004f780) list_medium_line_x4_t4

0x4c0b,	// (0x0004f780) list_medium_line_x4_t4_g7

0x4c0b,	// (0x0004f780) list_medium_line_x4_t5

0xb8f2,	// (0x00056467) list_single_fs_dyc_pane_ParamLimits

0xb8f2,	// (0x00056467) list_single_fs_dyc_pane

0x051b,	// (0x0004b090) list_medium_line_x4_t4_g7_g1_ParamLimits

0x051b,	// (0x0004b090) list_medium_line_x4_t4_g7_g1

0x17ea,	// (0x0004c35f) list_medium_line_x4_t4_g7_g2_ParamLimits

0x17ea,	// (0x0004c35f) list_medium_line_x4_t4_g7_g2

0x17f6,	// (0x0004c36b) list_medium_line_x4_t4_g7_g3_ParamLimits

0x17f6,	// (0x0004c36b) list_medium_line_x4_t4_g7_g3

0x1805,	// (0x0004c37a) list_medium_line_x4_t4_g7_g4_ParamLimits

0x1805,	// (0x0004c37a) list_medium_line_x4_t4_g7_g4

0x1811,	// (0x0004c386) list_medium_line_x4_t4_g7_g5_ParamLimits

0x1811,	// (0x0004c386) list_medium_line_x4_t4_g7_g5

0x1820,	// (0x0004c395) list_medium_line_x4_t4_g7_g6_ParamLimits

0x1820,	// (0x0004c395) list_medium_line_x4_t4_g7_g6

0x182f,	// (0x0004c3a4) list_medium_line_x4_t4_g7_g7_ParamLimits

0x182f,	// (0x0004c3a4) list_medium_line_x4_t4_g7_g7

0x0006,

0xfbe3,	// (0x0005a758) list_medium_line_x4_t4_g7_g_ParamLimits

0xfbe3,	// (0x0005a758) list_medium_line_x4_t4_g7_g

0x183b,	// (0x0004c3b0) list_medium_line_x4_t4_g7_t1_ParamLimits

0x183b,	// (0x0004c3b0) list_medium_line_x4_t4_g7_t1

0x1850,	// (0x0004c3c5) list_medium_line_x4_t4_g7_t2_ParamLimits

0x1850,	// (0x0004c3c5) list_medium_line_x4_t4_g7_t2

0x1865,	// (0x0004c3da) list_medium_line_x4_t4_g7_t3_ParamLimits

0x1865,	// (0x0004c3da) list_medium_line_x4_t4_g7_t3

0x187a,	// (0x0004c3ef) list_medium_line_x4_t4_g7_t4_ParamLimits

0x187a,	// (0x0004c3ef) list_medium_line_x4_t4_g7_t4

0x188c,	// (0x0004c401) list_medium_line_x4_t4_g7_t5_ParamLimits

0x188c,	// (0x0004c401) list_medium_line_x4_t4_g7_t5

0x0004,

0xfbf2,	// (0x0005a767) list_medium_line_x4_t4_g7_t_ParamLimits

0xfbf2,	// (0x0005a767) list_medium_line_x4_t4_g7_t

0xbfb6,	// (0x00056b2b) list_single_dyc_row_pane_ParamLimits

0xbfb6,	// (0x00056b2b) list_single_dyc_row_pane

0xc53b,	// (0x000570b0) call5_gesture_pane_ParamLimits

0xc53b,	// (0x000570b0) call5_gesture_pane

0xc56b,	// (0x000570e0) call5_windows_pane_ParamLimits

0xc56b,	// (0x000570e0) call5_windows_pane

0xc5ef,	// (0x00057164) call5_swipe_1_pane_cp_ParamLimits

0xc5ef,	// (0x00057164) call5_swipe_1_pane_cp

0xc5fb,	// (0x00057170) call5_swipe_2_pane_cp_ParamLimits

0xc5fb,	// (0x00057170) call5_swipe_2_pane_cp

0x3573,	// (0x0004e0e8) call5_image_pane_cp

0xc607,	// (0x0005717c) popup_call5_audio_first_window_cp_ParamLimits

0xc607,	// (0x0005717c) popup_call5_audio_first_window_cp

0x1f04,	// (0x0004ca79) call5_swipe_1_pane_g1_cp_ParamLimits

0x1f04,	// (0x0004ca79) call5_swipe_1_pane_g1_cp

0x1f32,	// (0x0004caa7) call5_swipe_1_pane_g2_cp

0x1f1d,	// (0x0004ca92) call5_swipe_1_pane_t1_cp_ParamLimits

0x1f1d,	// (0x0004ca92) call5_swipe_1_pane_t1_cp

0x1f04,	// (0x0004ca79) call5_swipe_2_pane_g1_cp_ParamLimits

0x1f04,	// (0x0004ca79) call5_swipe_2_pane_g1_cp

0x1f3a,	// (0x0004caaf) call5_swipe_2_pane_g2_cp

0x1f42,	// (0x0004cab7) call5_swipe_2_pane_t1_cp_ParamLimits

0x1f42,	// (0x0004cab7) call5_swipe_2_pane_t1_cp

0x4b0e,	// (0x0004f683) main_sp_fs_email_pane

0x1f57,	// (0x0004cacc) main_sp_fs_listscroll_pane_te

0xc613,	// (0x00057188) popup_sp_fs_action_menu_pane_ParamLimits

0xc613,	// (0x00057188) popup_sp_fs_action_menu_pane

0xe798,	// (0x0005930d) bg_sp_fs_ctrlbar_pane_g1

0xed24,	// (0x00059899) bg_sp_fs_ctrlbar_ddmenu_pane_g1

0xed36,	// (0x000598ab) bg_sp_fs_ctrlbar_ddmenu_pane_g2

0xed2d,	// (0x000598a2) bg_sp_fs_ctrlbar_ddmenu_pane_g3

0xe798,	// (0x0005930d) bg_sp_fs_ctrlbar_ddmenu_pane_g4

0x0003,

0xfce0,	// (0x0005a855) bg_sp_fs_ctrlbar_ddmenu_pane_g

0xe585,	// (0x000590fa) bg_sp_fs_ctrlbar_ddmenu_pane_ParamLimits

0xe585,	// (0x000590fa) bg_sp_fs_ctrlbar_ddmenu_pane

0x1f60,	// (0x0004cad5) main_sp_fs_ctrlbar_ddmenu_pane_g1_ParamLimits

0x1f60,	// (0x0004cad5) main_sp_fs_ctrlbar_ddmenu_pane_g1

0x1f6c,	// (0x0004cae1) main_sp_fs_ctrlbar_ddmenu_pane_g2_ParamLimits

0x1f6c,	// (0x0004cae1) main_sp_fs_ctrlbar_ddmenu_pane_g2

0x0001,

0xfce9,	// (0x0005a85e) main_sp_fs_ctrlbar_ddmenu_pane_g_ParamLimits

0xfce9,	// (0x0005a85e) main_sp_fs_ctrlbar_ddmenu_pane_g

0x1f78,	// (0x0004caed) main_sp_fs_ctrlbar_ddmenu_pane_t1_ParamLimits

0x1f78,	// (0x0004caed) main_sp_fs_ctrlbar_ddmenu_pane_t1

0xc645,	// (0x000571ba) list_medium_line_t2_right_icon_g1

0xc64d,	// (0x000571c2) list_medium_line_t2_right_icon_t1

0xc65c,	// (0x000571d1) list_medium_line_t2_right_icon_t2

0x0001,

0xfcee,	// (0x0005a863) list_medium_line_t2_right_icon_t

0xe386,	// (0x00058efb) bg_sp_fs_ctrlbar_pane_ParamLimits

0xe386,	// (0x00058efb) bg_sp_fs_ctrlbar_pane

0xc6bf,	// (0x00057234) main_sp_fs_ctrlbar_button_pane_cp01

0xc6c7,	// (0x0005723c) main_sp_fs_ctrlbar_ddmenu_pane

0x1fca,	// (0x0004cb3f) main_sp_fs_ctrlbar_pane_g1

0x1fd6,	// (0x0004cb4b) main_sp_fs_ctrlbar_pane_g2

0x0001,

0xfcf3,	// (0x0005a868) main_sp_fs_ctrlbar_pane_g

0x1fe2,	// (0x0004cb57) main_sp_fs_ctrlbar_pane_t1

0xc6d1,	// (0x00057246) main_sp_fs_ctrlbar_pane

0xc6e5,	// (0x0005725a) main_sp_fs_listscroll_pane_te_cp01

0xc6f6,	// (0x0005726b) popup_sp_fs_action_menu_pane_cp01_ParamLimits

0xc6f6,	// (0x0005726b) popup_sp_fs_action_menu_pane_cp01

0x4b0e,	// (0x0004f683) bg_sp_fs_highlight_list_pane_cp01_ParamLimits

0x4b0e,	// (0x0004f683) bg_sp_fs_highlight_list_pane_cp01

0xc716,	// (0x0005728b) sp_fs_action_menu_list_gene_pane_g1_ParamLimits

0xc716,	// (0x0005728b) sp_fs_action_menu_list_gene_pane_g1

0x2012,	// (0x0004cb87) sp_fs_action_menu_list_gene_pane_g2_ParamLimits

0x2012,	// (0x0004cb87) sp_fs_action_menu_list_gene_pane_g2

0x0001,

0xfcfd,	// (0x0005a872) sp_fs_action_menu_list_gene_pane_g_ParamLimits

0xfcfd,	// (0x0005a872) sp_fs_action_menu_list_gene_pane_g

0xc725,	// (0x0005729a) sp_fs_action_menu_list_gene_pane_t1_ParamLimits

0xc725,	// (0x0005729a) sp_fs_action_menu_list_gene_pane_t1

0xc73d,	// (0x000572b2) sp_fs_action_menu_list_gene_pane_ParamLimits

0xc73d,	// (0x000572b2) sp_fs_action_menu_list_gene_pane

0x201f,	// (0x0004cb94) popup_sp_fs_action_menu_bg_pane_ParamLimits

0x201f,	// (0x0004cb94) popup_sp_fs_action_menu_bg_pane

0xc75a,	// (0x000572cf) sp_fs_action_menu_list_pane_ParamLimits

0xc75a,	// (0x000572cf) sp_fs_action_menu_list_pane

0x202d,	// (0x0004cba2) sp_fs_scroll_pane_cp01_ParamLimits

0x202d,	// (0x0004cba2) sp_fs_scroll_pane_cp01

0xc778,	// (0x000572ed) list_medium_line_plain_t2_t1

0xc787,	// (0x000572fc) list_medium_line_plain_t2_t2

0x0001,

0xfd02,	// (0x0005a877) list_medium_line_plain_t2_t

0xc795,	// (0x0005730a) list_medium_line_plain_t3_t1

0xc7a5,	// (0x0005731a) list_medium_line_plain_t3_t2

0xc7b3,	// (0x00057328) list_medium_line_plain_t3_t3

0x0002,

0xfd07,	// (0x0005a87c) list_medium_line_plain_t3_t

0x051b,	// (0x0004b090) list_medium_line_x2_t2_g2_g1_ParamLimits

0x051b,	// (0x0004b090) list_medium_line_x2_t2_g2_g1

0x0533,	// (0x0004b0a8) list_medium_line_x2_t2_g2_g2_ParamLimits

0x0533,	// (0x0004b0a8) list_medium_line_x2_t2_g2_g2

0x0001,

0xf242,	// (0x00059db7) list_medium_line_x2_t2_g2_g_ParamLimits

0xf242,	// (0x00059db7) list_medium_line_x2_t2_g2_g

0x0657,	// (0x0004b1cc) list_medium_line_x2_t2_g2_t1_ParamLimits

0x0657,	// (0x0004b1cc) list_medium_line_x2_t2_g2_t1

0x0554,	// (0x0004b0c9) list_medium_line_x2_t2_g2_t2_ParamLimits

0x0554,	// (0x0004b0c9) list_medium_line_x2_t2_g2_t2

0x0001,

0xfd0e,	// (0x0005a883) list_medium_line_x2_t2_g2_t_ParamLimits

0xfd0e,	// (0x0005a883) list_medium_line_x2_t2_g2_t

0x051b,	// (0x0004b090) list_medium_line_x2_t4_g2_g1_ParamLimits

0x051b,	// (0x0004b090) list_medium_line_x2_t4_g2_g1

0x2053,	// (0x0004cbc8) list_medium_line_x2_t4_g2_g2_ParamLimits

0x2053,	// (0x0004cbc8) list_medium_line_x2_t4_g2_g2

0x0001,

0xfd13,	// (0x0005a888) list_medium_line_x2_t4_g2_g_ParamLimits

0xfd13,	// (0x0005a888) list_medium_line_x2_t4_g2_g

0xc7c1,	// (0x00057336) list_medium_line_x2_t4_g2_t1_ParamLimits

0xc7c1,	// (0x00057336) list_medium_line_x2_t4_g2_t1

0xc7d8,	// (0x0005734d) list_medium_line_x2_t4_g2_t2_ParamLimits

0xc7d8,	// (0x0005734d) list_medium_line_x2_t4_g2_t2

0xc7ed,	// (0x00057362) list_medium_line_x2_t4_g2_t3_ParamLimits

0xc7ed,	// (0x00057362) list_medium_line_x2_t4_g2_t3

0x0554,	// (0x0004b0c9) list_medium_line_x2_t4_g2_t4_ParamLimits

0x0554,	// (0x0004b0c9) list_medium_line_x2_t4_g2_t4

0x0003,

0xfd18,	// (0x0005a88d) list_medium_line_x2_t4_g2_t_ParamLimits

0xfd18,	// (0x0005a88d) list_medium_line_x2_t4_g2_t

0xc7ff,	// (0x00057374) list_medium_line_t3_right_iconx2_g1

0xc645,	// (0x000571ba) list_medium_line_t3_right_iconx2_g2

0xc807,	// (0x0005737c) list_medium_line_t3_right_iconx2_g3

0x0002,

0xfd21,	// (0x0005a896) list_medium_line_t3_right_iconx2_g

0xc80f,	// (0x00057384) list_medium_line_t3_right_iconx2_t1

0xc81f,	// (0x00057394) list_medium_line_t3_right_iconx2_t2

0x0001,

0xfd28,	// (0x0005a89d) list_medium_line_t3_right_iconx2_t

0x051b,	// (0x0004b090) list_medium_line_x3_t4_g4_g1_ParamLimits

0x051b,	// (0x0004b090) list_medium_line_x3_t4_g4_g1

0x0527,	// (0x0004b09c) list_medium_line_x3_t4_g4_g2_ParamLimits

0x0527,	// (0x0004b09c) list_medium_line_x3_t4_g4_g2

0x059d,	// (0x0004b112) list_medium_line_x3_t4_g4_g3_ParamLimits

0x059d,	// (0x0004b112) list_medium_line_x3_t4_g4_g3

0x2065,	// (0x0004cbda) list_medium_line_x3_t4_g4_g4_ParamLimits

0x2065,	// (0x0004cbda) list_medium_line_x3_t4_g4_g4

0x0003,

0xfd2d,	// (0x0005a8a2) list_medium_line_x3_t4_g4_g_ParamLimits

0xfd2d,	// (0x0005a8a2) list_medium_line_x3_t4_g4_g

0xc82d,	// (0x000573a2) list_medium_line_x3_t4_g4_t1_ParamLimits

0xc82d,	// (0x000573a2) list_medium_line_x3_t4_g4_t1

0xc844,	// (0x000573b9) list_medium_line_x3_t4_g4_t2_ParamLimits

0xc844,	// (0x000573b9) list_medium_line_x3_t4_g4_t2

0x2071,	// (0x0004cbe6) list_medium_line_x3_t4_g4_t3_ParamLimits

0x2071,	// (0x0004cbe6) list_medium_line_x3_t4_g4_t3

0x2086,	// (0x0004cbfb) list_medium_line_x3_t4_g4_t4_ParamLimits

0x2086,	// (0x0004cbfb) list_medium_line_x3_t4_g4_t4

0x0003,

0xfd36,	// (0x0005a8ab) list_medium_line_x3_t4_g4_t_ParamLimits

0xfd36,	// (0x0005a8ab) list_medium_line_x3_t4_g4_t

0xc859,	// (0x000573ce) list_single_dyc_row_text_pane_t1_ParamLimits

0xc859,	// (0x000573ce) list_single_dyc_row_text_pane_t1

0xc890,	// (0x00057405) list_single_dyc_row_text_pane_t2_ParamLimits

0xc890,	// (0x00057405) list_single_dyc_row_text_pane_t2

0x20a3,	// (0x0004cc18) list_single_dyc_row_text_pane_t3_ParamLimits

0x20a3,	// (0x0004cc18) list_single_dyc_row_text_pane_t3

0x0005,

0xfd3f,	// (0x0005a8b4) list_single_dyc_row_text_pane_t_ParamLimits

0xfd3f,	// (0x0005a8b4) list_single_dyc_row_text_pane_t

0x20c7,	// (0x0004cc3c) list_single_dyc_row_pane_g1_ParamLimits

0x20c7,	// (0x0004cc3c) list_single_dyc_row_pane_g1

0x20d3,	// (0x0004cc48) list_single_dyc_row_pane_g2_ParamLimits

0x20d3,	// (0x0004cc48) list_single_dyc_row_pane_g2

0x20df,	// (0x0004cc54) list_single_dyc_row_pane_g3_ParamLimits

0x20df,	// (0x0004cc54) list_single_dyc_row_pane_g3

0x20eb,	// (0x0004cc60) list_single_dyc_row_pane_g4_ParamLimits

0x20eb,	// (0x0004cc60) list_single_dyc_row_pane_g4

0x0003,

0xfd4c,	// (0x0005a8c1) list_single_dyc_row_pane_g_ParamLimits

0xfd4c,	// (0x0005a8c1) list_single_dyc_row_pane_g

0x20f7,	// (0x0004cc6c) list_single_dyc_row_text_pane_ParamLimits

0x20f7,	// (0x0004cc6c) list_single_dyc_row_text_pane

0x2b5c,	// (0x0004d6d1) bg_sp_fs_scroll_pane

0x2116,	// (0x0004cc8b) thumb_sp_fs_scroll_pane

0xb287,	// (0x00055dfc) list_medium_line_g1_ParamLimits

0xb287,	// (0x00055dfc) list_medium_line_g1

0xc9a8,	// (0x0005751d) list_medium_line_t1_ParamLimits

0xc9a8,	// (0x0005751d) list_medium_line_t1

0x051b,	// (0x0004b090) list_medium_line_x2_g1_ParamLimits

0x051b,	// (0x0004b090) list_medium_line_x2_g1

0x0527,	// (0x0004b09c) list_medium_line_x2_g2_ParamLimits

0x0527,	// (0x0004b09c) list_medium_line_x2_g2

0x0001,

0xfd55,	// (0x0005a8ca) list_medium_line_x2_g_ParamLimits

0xfd55,	// (0x0005a8ca) list_medium_line_x2_g

0x211f,	// (0x0004cc94) list_medium_line_x2_t1_ParamLimits

0x211f,	// (0x0004cc94) list_medium_line_x2_t1

0x051b,	// (0x0004b090) list_medium_line_x3_g1_ParamLimits

0x051b,	// (0x0004b090) list_medium_line_x3_g1

0x0527,	// (0x0004b09c) list_medium_line_x3_g2_ParamLimits

0x0527,	// (0x0004b09c) list_medium_line_x3_g2

0x0001,

0xfd55,	// (0x0005a8ca) list_medium_line_x3_g_ParamLimits

0xfd55,	// (0x0005a8ca) list_medium_line_x3_g

0x211f,	// (0x0004cc94) list_medium_line_x3_t1_ParamLimits

0x211f,	// (0x0004cc94) list_medium_line_x3_t1

0x2135,	// (0x0004ccaa) thumb_sp_fs_scroll_pane_g1

0x213e,	// (0x0004ccb3) thumb_sp_fs_scroll_pane_g2

0x2147,	// (0x0004ccbc) thumb_sp_fs_scroll_pane_g3

0x0002,

0xfd5a,	// (0x0005a8cf) thumb_sp_fs_scroll_pane_g

0x2135,	// (0x0004ccaa) bg_sp_fs_scroll_pane_g1

0x213e,	// (0x0004ccb3) bg_sp_fs_scroll_pane_g2

0x2147,	// (0x0004ccbc) bg_sp_fs_scroll_pane_g3

0x0002,

0xfd5a,	// (0x0005a8cf) bg_sp_fs_scroll_pane_g

0x051b,	// (0x0004b090) list_medium_line_x2_t3_g4_g1_ParamLimits

0x051b,	// (0x0004b090) list_medium_line_x2_t3_g4_g1

0x0591,	// (0x0004b106) list_medium_line_x2_t3_g4_g2_ParamLimits

0x0591,	// (0x0004b106) list_medium_line_x2_t3_g4_g2

0x0527,	// (0x0004b09c) list_medium_line_x2_t3_g4_g3_ParamLimits

0x0527,	// (0x0004b09c) list_medium_line_x2_t3_g4_g3

0x0533,	// (0x0004b0a8) list_medium_line_x2_t3_g4_g4_ParamLimits

0x0533,	// (0x0004b0a8) list_medium_line_x2_t3_g4_g4

0x0003,

0xf2be,	// (0x00059e33) list_medium_line_x2_t3_g4_g_ParamLimits

0xf2be,	// (0x00059e33) list_medium_line_x2_t3_g4_g

0xc9bd,	// (0x00057532) list_medium_line_x2_t3_g4_t1_ParamLimits

0xc9bd,	// (0x00057532) list_medium_line_x2_t3_g4_t1

0xc9d3,	// (0x00057548) list_medium_line_x2_t3_g4_t2_ParamLimits

0xc9d3,	// (0x00057548) list_medium_line_x2_t3_g4_t2

0x0554,	// (0x0004b0c9) list_medium_line_x2_t3_g4_t3_ParamLimits

0x0554,	// (0x0004b0c9) list_medium_line_x2_t3_g4_t3

0x0002,

0xfd61,	// (0x0005a8d6) list_medium_line_x2_t3_g4_t_ParamLimits

0xfd61,	// (0x0005a8d6) list_medium_line_x2_t3_g4_t

0xb287,	// (0x00055dfc) list_medium_line_g2_g1_ParamLimits

0xb287,	// (0x00055dfc) list_medium_line_g2_g1

0xb293,	// (0x00055e08) list_medium_line_g2_g2_ParamLimits

0xb293,	// (0x00055e08) list_medium_line_g2_g2

0x0001,

0xfa13,	// (0x0005a588) list_medium_line_g2_g_ParamLimits

0xfa13,	// (0x0005a588) list_medium_line_g2_g

0xc9ec,	// (0x00057561) list_medium_line_g2_t1_ParamLimits

0xc9ec,	// (0x00057561) list_medium_line_g2_t1

0xb287,	// (0x00055dfc) list_medium_line_t3_g2_g1_ParamLimits

0xb287,	// (0x00055dfc) list_medium_line_t3_g2_g1

0xb293,	// (0x00055e08) list_medium_line_t3_g2_g2_ParamLimits

0xb293,	// (0x00055e08) list_medium_line_t3_g2_g2

0x0001,

0xfa13,	// (0x0005a588) list_medium_line_t3_g2_g_ParamLimits

0xfa13,	// (0x0005a588) list_medium_line_t3_g2_g

0xca01,	// (0x00057576) list_medium_line_t3_g2_t1_ParamLimits

0xca01,	// (0x00057576) list_medium_line_t3_g2_t1

0xca1b,	// (0x00057590) list_medium_line_t3_g2_t2_ParamLimits

0xca1b,	// (0x00057590) list_medium_line_t3_g2_t2

0xca30,	// (0x000575a5) list_medium_line_t3_g2_t3_ParamLimits

0xca30,	// (0x000575a5) list_medium_line_t3_g2_t3

0x0002,

0xfd68,	// (0x0005a8dd) list_medium_line_t3_g2_t_ParamLimits

0xfd68,	// (0x0005a8dd) list_medium_line_t3_g2_t

0xc645,	// (0x000571ba) list_medium_line_right_icon_g1

0xca46,	// (0x000575bb) list_medium_line_right_icon_t1

0xb287,	// (0x00055dfc) list_medium_line_t2_g1_ParamLimits

0xb287,	// (0x00055dfc) list_medium_line_t2_g1

0xca54,	// (0x000575c9) list_medium_line_t2_t1_ParamLimits

0xca54,	// (0x000575c9) list_medium_line_t2_t1

0xca6a,	// (0x000575df) list_medium_line_t2_t2_ParamLimits

0xca6a,	// (0x000575df) list_medium_line_t2_t2

0x0001,

0xfd6f,	// (0x0005a8e4) list_medium_line_t2_t_ParamLimits

0xfd6f,	// (0x0005a8e4) list_medium_line_t2_t

0xb287,	// (0x00055dfc) list_medium_line_t3_g1_ParamLimits

0xb287,	// (0x00055dfc) list_medium_line_t3_g1

0xca7c,	// (0x000575f1) list_medium_line_t3_t1_ParamLimits

0xca7c,	// (0x000575f1) list_medium_line_t3_t1

0xca93,	// (0x00057608) list_medium_line_t3_t2_ParamLimits

0xca93,	// (0x00057608) list_medium_line_t3_t2

0xcaa8,	// (0x0005761d) list_medium_line_t3_t3_ParamLimits

0xcaa8,	// (0x0005761d) list_medium_line_t3_t3

0x0002,

0xfd74,	// (0x0005a8e9) list_medium_line_t3_t_ParamLimits

0xfd74,	// (0x0005a8e9) list_medium_line_t3_t

0xb287,	// (0x00055dfc) list_medium_line_g3_g1_ParamLimits

0xb287,	// (0x00055dfc) list_medium_line_g3_g1

0xcaba,	// (0x0005762f) list_medium_line_g3_g2_ParamLimits

0xcaba,	// (0x0005762f) list_medium_line_g3_g2

0xb293,	// (0x00055e08) list_medium_line_g3_g3_ParamLimits

0xb293,	// (0x00055e08) list_medium_line_g3_g3

0x0002,

0xfd7b,	// (0x0005a8f0) list_medium_line_g3_g_ParamLimits

0xfd7b,	// (0x0005a8f0) list_medium_line_g3_g

0xcac6,	// (0x0005763b) list_medium_line_g3_t1_ParamLimits

0xcac6,	// (0x0005763b) list_medium_line_g3_t1

0xb287,	// (0x00055dfc) list_medium_line_t2_g3_g1_ParamLimits

0xb287,	// (0x00055dfc) list_medium_line_t2_g3_g1

0xcaba,	// (0x0005762f) list_medium_line_t2_g3_g2_ParamLimits

0xcaba,	// (0x0005762f) list_medium_line_t2_g3_g2

0xb293,	// (0x00055e08) list_medium_line_t2_g3_g3_ParamLimits

0xb293,	// (0x00055e08) list_medium_line_t2_g3_g3

0x0002,

0xfd7b,	// (0x0005a8f0) list_medium_line_t2_g3_g_ParamLimits

0xfd7b,	// (0x0005a8f0) list_medium_line_t2_g3_g

0xcadb,	// (0x00057650) list_medium_line_t2_g3_t1_ParamLimits

0xcadb,	// (0x00057650) list_medium_line_t2_g3_t1

0xcaf5,	// (0x0005766a) list_medium_line_t2_g3_t2_ParamLimits

0xcaf5,	// (0x0005766a) list_medium_line_t2_g3_t2

0x0001,

0xfd82,	// (0x0005a8f7) list_medium_line_t2_g3_t_ParamLimits

0xfd82,	// (0x0005a8f7) list_medium_line_t2_g3_t

0xb287,	// (0x00055dfc) list_medium_line_t3_g3_g1_ParamLimits

0xb287,	// (0x00055dfc) list_medium_line_t3_g3_g1

0xcaba,	// (0x0005762f) list_medium_line_t3_g3_g2_ParamLimits

0xcaba,	// (0x0005762f) list_medium_line_t3_g3_g2

0xb293,	// (0x00055e08) list_medium_line_t3_g3_g3_ParamLimits

0xb293,	// (0x00055e08) list_medium_line_t3_g3_g3

0x0002,

0xfd7b,	// (0x0005a8f0) list_medium_line_t3_g3_g_ParamLimits

0xfd7b,	// (0x0005a8f0) list_medium_line_t3_g3_g

0xcb0a,	// (0x0005767f) list_medium_line_t3_g3_t1_ParamLimits

0xcb0a,	// (0x0005767f) list_medium_line_t3_g3_t1

0xcb1e,	// (0x00057693) list_medium_line_t3_g3_t2_ParamLimits

0xcb1e,	// (0x00057693) list_medium_line_t3_g3_t2

0xcb30,	// (0x000576a5) list_medium_line_t3_g3_t3_ParamLimits

0xcb30,	// (0x000576a5) list_medium_line_t3_g3_t3

0x0002,

0xfd87,	// (0x0005a8fc) list_medium_line_t3_g3_t_ParamLimits

0xfd87,	// (0x0005a8fc) list_medium_line_t3_g3_t

0xc7ff,	// (0x00057374) list_medium_line_right_iconx2_g1

0xc645,	// (0x000571ba) list_medium_line_right_iconx2_g2

0x0001,

0xfd8e,	// (0x0005a903) list_medium_line_right_iconx2_g

0xcb42,	// (0x000576b7) list_medium_line_right_iconx2_t1

0xc7ff,	// (0x00057374) list_medium_line_t2_right_iconx2_g1

0xc645,	// (0x000571ba) list_medium_line_t2_right_iconx2_g2

0x0001,

0xfd8e,	// (0x0005a903) list_medium_line_t2_right_iconx2_g

0xcb50,	// (0x000576c5) list_medium_line_t2_right_iconx2_t1

0xcb60,	// (0x000576d5) list_medium_line_t2_right_iconx2_t2

0x0001,

0xfd93,	// (0x0005a908) list_medium_line_t2_right_iconx2_t

0x2150,	// (0x0004ccc5) list_medium_line_x4_t4_t1

0xcb6e,	// (0x000576e3) list_medium_line_x4_t4_t2

0xcb7c,	// (0x000576f1) list_medium_line_x4_t4_t3

0xcb8a,	// (0x000576ff) list_medium_line_x4_t4_t4

0x0003,

0xfd98,	// (0x0005a90d) list_medium_line_x4_t4_t

0xcbbc,	// (0x00057731) tport_appsw_pane_ParamLimits

0xcbbc,	// (0x00057731) tport_appsw_pane

0xcbc8,	// (0x0005773d) tport_contact_pane_ParamLimits

0xcbc8,	// (0x0005773d) tport_contact_pane

0xcbd6,	// (0x0005774b) tport_listscroll_pane_ParamLimits

0xcbd6,	// (0x0005774b) tport_listscroll_pane

0xcbe4,	// (0x00057759) cell_tport_appsw_pane_ParamLimits

0xcbe4,	// (0x00057759) cell_tport_appsw_pane

0xea2c,	// (0x000595a1) tport_appsw_pane_g1_ParamLimits

0xea2c,	// (0x000595a1) tport_appsw_pane_g1

0x215e,	// (0x0004ccd3) tport_contact_pane_g1

0x2167,	// (0x0004ccdc) tport_contact_pane_t1

0x2175,	// (0x0004ccea) tport_contact_pane_t2

0x0001,

0xfda1,	// (0x0005a916) tport_contact_pane_t

0x2183,	// (0x0004ccf8) list_tport_pane

0x34a9,	// (0x0004e01e) scroll_pane_cp_030

0x2194,	// (0x0004cd09) cell_tport_appsw_pane_g1

0x21a4,	// (0x0004cd19) cell_tport_appsw_pane_t1

0x21b2,	// (0x0004cd27) grid_highlight_pane_cp019

0xcc0b,	// (0x00057780) list_tport_double_graphic_pane_ParamLimits

0xcc0b,	// (0x00057780) list_tport_double_graphic_pane

0x4b0e,	// (0x0004f683) list_highlight_pane_cp023_ParamLimits

0x4b0e,	// (0x0004f683) list_highlight_pane_cp023

0xcc18,	// (0x0005778d) list_tport_double_graphic_pane_g1_ParamLimits

0xcc18,	// (0x0005778d) list_tport_double_graphic_pane_g1

0xcc25,	// (0x0005779a) list_tport_double_graphic_pane_t1_ParamLimits

0xcc25,	// (0x0005779a) list_tport_double_graphic_pane_t1

0xcc3a,	// (0x000577af) list_tport_double_graphic_pane_t2_ParamLimits

0xcc3a,	// (0x000577af) list_tport_double_graphic_pane_t2

0x0001,

0xfdad,	// (0x0005a922) list_tport_double_graphic_pane_t_ParamLimits

0xfdad,	// (0x0005a922) list_tport_double_graphic_pane_t

0x2b5c,	// (0x0004d6d1) main_cale_note_pane

0xaa87,	// (0x000555fc) cell_vitu2_function_top_wide_pane_cp01_ParamLimits

0xaa87,	// (0x000555fc) cell_vitu2_function_top_wide_pane_cp01

0xc2e2,	// (0x00056e57) wait_bar_pane_cp05_ParamLimits

0x4b0e,	// (0x0004f683) listscroll_cmail_pane

0x21ba,	// (0x0004cd2f) list_cmail_pane

0xcc4c,	// (0x000577c1) list_cmail_body_pane

0xcc4c,	// (0x000577c1) list_single_cmail_header_caption_pane

0xcc65,	// (0x000577da) list_single_cmail_header_detail_pane_ParamLimits

0xcc65,	// (0x000577da) list_single_cmail_header_detail_pane

0x21d6,	// (0x0004cd4b) list_single_cmail_header_caption_pane_t1

0xcc90,	// (0x00057805) list_single_cmail_header_detail_pane_g1_ParamLimits

0xcc90,	// (0x00057805) list_single_cmail_header_detail_pane_g1

0x21ed,	// (0x0004cd62) list_single_cmail_header_detail_pane_g2_ParamLimits

0x21ed,	// (0x0004cd62) list_single_cmail_header_detail_pane_g2

0x0002,

0xfdb2,	// (0x0005a927) list_single_cmail_header_detail_pane_g_ParamLimits

0xfdb2,	// (0x0005a927) list_single_cmail_header_detail_pane_g

0xcca6,	// (0x0005781b) list_single_cmail_header_detail_pane_t1_ParamLimits

0xcca6,	// (0x0005781b) list_single_cmail_header_detail_pane_t1

0x222a,	// (0x0004cd9f) list_single_cmail_header_editor_pane_bg_ParamLimits

0x222a,	// (0x0004cd9f) list_single_cmail_header_editor_pane_bg

0x2241,	// (0x0004cdb6) list_cmail_body_pane_g1

0x224a,	// (0x0004cdbf) list_cmail_body_pane_t1

0x0d8e,	// (0x0004b903) list_single_cmail_header_editor_pane_bg_g1

0x382c,	// (0x0004e3a1) list_single_cmail_header_editor_pane_bg_g1_copy1

0x0d9e,	// (0x0004b913) list_single_cmail_header_editor_pane_bg_g1_copy2

0x0d96,	// (0x0004b90b) list_single_cmail_header_editor_pane_bg_g1_copy3

0x0fcd,	// (0x0004bb42) list_single_cmail_header_editor_pane_bg_g1_copy4

0x0dbe,	// (0x0004b933) list_single_cmail_header_editor_pane_bg_g1_copy4_copy1

0x0dae,	// (0x0004b923) list_single_cmail_header_editor_pane_bg_g1_copy4_copy2

0x0db6,	// (0x0004b92b) list_single_cmail_header_editor_pane_bg_g1_copy4_copy3

0x380c,	// (0x0004e381) list_single_cmail_header_editor_pane_bg_g1_copy4_copy3_copy1

0xcce2,	// (0x00057857) calenote_gesture_pane_ParamLimits

0xcce2,	// (0x00057857) calenote_gesture_pane

0xccfa,	// (0x0005786f) calenote_window_pane_ParamLimits

0xccfa,	// (0x0005786f) calenote_window_pane

0x2258,	// (0x0004cdcd) popup_note_window_cp01

0xcd12,	// (0x00057887) calenote_swipe_1_pane_ParamLimits

0xcd12,	// (0x00057887) calenote_swipe_1_pane

0xc5fb,	// (0x00057170) calenote_swipe_2_pane_ParamLimits

0xc5fb,	// (0x00057170) calenote_swipe_2_pane

0x1f04,	// (0x0004ca79) calenote_swipe_1_pane_g1_ParamLimits

0x1f04,	// (0x0004ca79) calenote_swipe_1_pane_g1

0x1f11,	// (0x0004ca86) calenote_swipe_1_pane_g2_ParamLimits

0x1f11,	// (0x0004ca86) calenote_swipe_1_pane_g2

0x0001,

0xfcd6,	// (0x0005a84b) calenote_swipe_1_pane_g_ParamLimits

0xfcd6,	// (0x0005a84b) calenote_swipe_1_pane_g

0x226a,	// (0x0004cddf) calenote_swipe_1_pane_t1_ParamLimits

0x226a,	// (0x0004cddf) calenote_swipe_1_pane_t1

0x1f04,	// (0x0004ca79) calenote_swipe_2_pane_g1_ParamLimits

0x1f04,	// (0x0004ca79) calenote_swipe_2_pane_g1

0x2289,	// (0x0004cdfe) calenote_swipe_2_pane_g2_ParamLimits

0x2289,	// (0x0004cdfe) calenote_swipe_2_pane_g2

0x0001,

0xfdbe,	// (0x0005a933) calenote_swipe_2_pane_g_ParamLimits

0xfdbe,	// (0x0005a933) calenote_swipe_2_pane_g

0x2295,	// (0x0004ce0a) calenote_swipe_2_pane_t1_ParamLimits

0x2295,	// (0x0004ce0a) calenote_swipe_2_pane_t1

0x2b5c,	// (0x0004d6d1) main_mup_navstr_pane

0x98ec,	// (0x00054461) main_mup3_pane_t7_ParamLimits

0x98ec,	// (0x00054461) main_mup3_pane_t7

0xa26d,	// (0x00054de2) main_mp4_pane_g6_ParamLimits

0xa26d,	// (0x00054de2) main_mp4_pane_g6

0xa5c7,	// (0x0005513c) main_image3_pane_t4_ParamLimits

0xa5c7,	// (0x0005513c) main_image3_pane_t4

0xcd25,	// (0x0005789a) popup_navstr_preview_pane_ParamLimits

0xcd25,	// (0x0005789a) popup_navstr_preview_pane

0xcd31,	// (0x000578a6) scroll_navstr_pane_ParamLimits

0xcd31,	// (0x000578a6) scroll_navstr_pane

0x2b5c,	// (0x0004d6d1) bg_popup_preview_window_pane_cp04

0x22bc,	// (0x0004ce31) popup_navstr_preview_pane_t1

0xcd3d,	// (0x000578b2) scroll_navstr_pane_g1_ParamLimits

0xcd3d,	// (0x000578b2) scroll_navstr_pane_g1

0xcd4a,	// (0x000578bf) scroll_navstr_pane_t1_ParamLimits

0xcd4a,	// (0x000578bf) scroll_navstr_pane_t1

0x2261,	// (0x0004cdd6) bg_button_pane_cp014

0x2261,	// (0x0004cdd6) bg_button_pane_cp030

0x1e68,	// (0x0004c9dd) list_double_fisheye_pane_g4_ParamLimits

0x1e68,	// (0x0004c9dd) list_double_fisheye_pane_g4

0x1e74,	// (0x0004c9e9) list_double_fisheye_pane_g5_ParamLimits

0x1e74,	// (0x0004c9e9) list_double_fisheye_pane_g5

0x21ca,	// (0x0004cd3f) sp_fs_scroll_pane_cp03

0x1fca,	// (0x0004cb3f) main_sp_fs_ctrlbar_pane_g1_ParamLimits

0x1fd6,	// (0x0004cb4b) main_sp_fs_ctrlbar_pane_g2_ParamLimits

0xfcf3,	// (0x0005a868) main_sp_fs_ctrlbar_pane_g_ParamLimits

0x1fe2,	// (0x0004cb57) main_sp_fs_ctrlbar_pane_t1_ParamLimits

0x21c2,	// (0x0004cd37) sp_fs_scroll_pane_cp02

0x34bb,	// (0x0004e030) popup_sp_fs_calendar_preview_list_single_pane_ParamLimits

0x34bb,	// (0x0004e030) popup_sp_fs_calendar_preview_list_single_pane

0x2b5c,	// (0x0004d6d1) main_cam6_pano_pane

0x8a0d,	// (0x00053582) main_mup3_pane_ParamLimits

0x2b5c,	// (0x0004d6d1) main_phacti_pane

0xc1d5,	// (0x00056d4a) bg_button_pane_cp11

0xc1ed,	// (0x00056d62) main_mobtv_info_pane_g2_ParamLimits

0xc1ed,	// (0x00056d62) main_mobtv_info_pane_g2

0x0001,

0xfc53,	// (0x0005a7c8) main_mobtv_info_pane_g_ParamLimits

0xfc53,	// (0x0005a7c8) main_mobtv_info_pane_g

0xc379,	// (0x00056eee) sc_clock_pane_t5_ParamLimits

0xc379,	// (0x00056eee) sc_clock_pane_t5

0xc406,	// (0x00056f7b) main_radioblah_pane_g1_ParamLimits

0x1dcd,	// (0x0004c942) main_radioblah_pane_t3_ParamLimits

0x1dcd,	// (0x0004c942) main_radioblah_pane_t3

0x1de5,	// (0x0004c95a) main_radioblah_pane_t4_ParamLimits

0x1de5,	// (0x0004c95a) main_radioblah_pane_t4

0xc424,	// (0x00056f99) main_radioblah_text_pane_ParamLimits

0xc424,	// (0x00056f99) main_radioblah_text_pane

0xc431,	// (0x00056fa6) main_radioblah_info_pane_g1_ParamLimits

0xc4be,	// (0x00057033) main_radioblah_info_pane_t4_ParamLimits

0xc4be,	// (0x00057033) main_radioblah_info_pane_t4

0x4b0e,	// (0x0004f683) main_sp_fs_calendar_pane

0xcd5c,	// (0x000578d1) main_phacti_pane_g1

0xcd64,	// (0x000578d9) phacti_note_pane_ParamLimits

0xcd64,	// (0x000578d9) phacti_note_pane

0x22d3,	// (0x0004ce48) phacti_term_pane_ParamLimits

0x22d3,	// (0x0004ce48) phacti_term_pane

0x22e8,	// (0x0004ce5d) phacti_note_pane_t1_ParamLimits

0x22e8,	// (0x0004ce5d) phacti_note_pane_t1

0x22ff,	// (0x0004ce74) phacti_term_pane_g1

0x2307,	// (0x0004ce7c) phacti_term_pane_t1_ParamLimits

0x2307,	// (0x0004ce7c) phacti_term_pane_t1

0x2331,	// (0x0004cea6) popup_sp_fs_calendar_preview_list_single_pane_g1

0x2339,	// (0x0004ceae) popup_sp_fs_calendar_preview_list_single_pane_g2

0x0001,

0xfdc8,	// (0x0005a93d) popup_sp_fs_calendar_preview_list_single_pane_g

0x2341,	// (0x0004ceb6) popup_sp_fs_calendar_preview_list_single_pane_t1_ParamLimits

0x2341,	// (0x0004ceb6) popup_sp_fs_calendar_preview_list_single_pane_t1

0x2357,	// (0x0004cecc) aid_popup_sp_fs_bg_corner_pane

0xe798,	// (0x0005930d) popup_sp_fs_calendar_preview_bg_pane_g1

0x2b5c,	// (0x0004d6d1) popup_sp_fs_calendar_preview_bg_pane

0x235f,	// (0x0004ced4) popup_sp_fs_calendar_preview_list_pane

0xe386,	// (0x00058efb) bg_main_sp_fs_cale_pane_ParamLimits

0xe386,	// (0x00058efb) bg_main_sp_fs_cale_pane

0x2370,	// (0x0004cee5) listscroll_cale_mrui_pane_ParamLimits

0x2370,	// (0x0004cee5) listscroll_cale_mrui_pane

0x2385,	// (0x0004cefa) listscroll_sp_fs_schedule_track_pane

0x238e,	// (0x0004cf03) main_sp_fs_ctrlbar_pane_cp01_ParamLimits

0x238e,	// (0x0004cf03) main_sp_fs_ctrlbar_pane_cp01

0x23a1,	// (0x0004cf16) main_sp_fs_ribbon_pane

0x23a9,	// (0x0004cf1e) popup_sp_fs_cale_preview_window

0xcdbb,	// (0x00057930) list_single_sp_fs_schedule_track_pane_ParamLimits

0xcdbb,	// (0x00057930) list_single_sp_fs_schedule_track_pane

0x2b13,	// (0x0004d688) bg_sp_fs_highlight_list_pane_cp03_ParamLimits

0x2b13,	// (0x0004d688) bg_sp_fs_highlight_list_pane_cp03

0xcdd1,	// (0x00057946) list_single_sp_fs_schedule_track_pane_g1_ParamLimits

0xcdd1,	// (0x00057946) list_single_sp_fs_schedule_track_pane_g1

0xcddd,	// (0x00057952) list_single_sp_fs_schedule_track_pane_g2_ParamLimits

0xcddd,	// (0x00057952) list_single_sp_fs_schedule_track_pane_g2

0x0001,

0xfdcd,	// (0x0005a942) list_single_sp_fs_schedule_track_pane_g_ParamLimits

0xfdcd,	// (0x0005a942) list_single_sp_fs_schedule_track_pane_g

0xcde9,	// (0x0005795e) list_single_sp_fs_schedule_track_pane_t1_ParamLimits

0xcde9,	// (0x0005795e) list_single_sp_fs_schedule_track_pane_t1

0xce01,	// (0x00057976) sp_fs_schedule_track_pane_ParamLimits

0xce01,	// (0x00057976) sp_fs_schedule_track_pane

0x23b8,	// (0x0004cf2d) sp_fs_schedule_track_pane_g1

0x23c0,	// (0x0004cf35) sp_fs_schedule_track_pane_g2

0x23c8,	// (0x0004cf3d) sp_fs_schedule_track_pane_g3

0x23d0,	// (0x0004cf45) sp_fs_schedule_track_pane_g4

0x23d8,	// (0x0004cf4d) sp_fs_schedule_track_pane_g5

0x0004,

0xfdd2,	// (0x0005a947) sp_fs_schedule_track_pane_g

0x0d8e,	// (0x0004b903) bg_sp_fs_schedule_viewer_highlight_g1

0x382c,	// (0x0004e3a1) bg_sp_fs_schedule_viewer_highlight_g2

0x0d96,	// (0x0004b90b) bg_sp_fs_schedule_viewer_highlight_g3

0x0d9e,	// (0x0004b913) bg_sp_fs_schedule_viewer_highlight_g4

0x0fcd,	// (0x0004bb42) bg_sp_fs_schedule_viewer_highlight_g5

0x0dae,	// (0x0004b923) bg_sp_fs_schedule_viewer_highlight_g6

0x0db6,	// (0x0004b92b) bg_sp_fs_schedule_viewer_highlight_g7

0x0dbe,	// (0x0004b933) bg_sp_fs_schedule_viewer_highlight_g8

0x380c,	// (0x0004e381) bg_sp_fs_schedule_viewer_highlight_g9

0x0008,

0xfddd,	// (0x0005a952) bg_sp_fs_schedule_viewer_highlight_g

0x2b5c,	// (0x0004d6d1) bg_main_sp_fs_ribbon_pane

0xa7f6,	// (0x0005536b) main_sp_fs_ribbon_pane_g1

0x23e0,	// (0x0004cf55) main_sp_fs_ribbon_pane_t1

0xce11,	// (0x00057986) main_sp_fs_ribbon_pane_t2

0x23ef,	// (0x0004cf64) main_sp_fs_ribbon_pane_t3

0x0002,

0xfdf0,	// (0x0005a965) main_sp_fs_ribbon_pane_t

0x23fe,	// (0x0004cf73) main_sp_fs_ribbon_scheduler_pane

0x2406,	// (0x0004cf7b) bg_main_sp_fs_ribbon_pane_g1

0x240f,	// (0x0004cf84) bg_main_sp_fs_ribbon_pane_g2

0x2418,	// (0x0004cf8d) bg_main_sp_fs_ribbon_pane_g3

0x0002,

0xfdf7,	// (0x0005a96c) bg_main_sp_fs_ribbon_pane_g

0x2420,	// (0x0004cf95) main_sp_fs_ribbon_scheduler_pane_g1

0x2429,	// (0x0004cf9e) main_sp_fs_ribbon_scheduler_pane_g2

0x2432,	// (0x0004cfa7) main_sp_fs_ribbon_scheduler_pane_g3

0x0002,

0xfdfe,	// (0x0005a973) main_sp_fs_ribbon_scheduler_pane_g

0x243b,	// (0x0004cfb0) list_cale_mrui_pane

0xce20,	// (0x00057995) sp_fs_scroll_pane_cp07_ParamLimits

0xce20,	// (0x00057995) sp_fs_scroll_pane_cp07

0xce38,	// (0x000579ad) bg_sp_fs_schedule_viewer_highlight_ParamLimits

0xce38,	// (0x000579ad) bg_sp_fs_schedule_viewer_highlight

0x2448,	// (0x0004cfbd) list_single_sp_fs_schedule_track_pane_cp01

0x2450,	// (0x0004cfc5) list_sp_fs_schedule_track_pane

0x2458,	// (0x0004cfcd) sp_fs_scroll_pane_cp06_ParamLimits

0x2458,	// (0x0004cfcd) sp_fs_scroll_pane_cp06

0xe798,	// (0x0005930d) bgmain_sp_fs_calendar_pane_g1

0xce45,	// (0x000579ba) list_single_cale_mrui_pane_ParamLimits

0xce45,	// (0x000579ba) list_single_cale_mrui_pane

0x246a,	// (0x0004cfdf) list_single_cale_mrui_row_pane_ParamLimits

0x246a,	// (0x0004cfdf) list_single_cale_mrui_row_pane

0xce67,	// (0x000579dc) list_single_cale_mrui_row_pane_g1_ParamLimits

0xce67,	// (0x000579dc) list_single_cale_mrui_row_pane_g1

0xce9f,	// (0x00057a14) list_single_cale_mrui_row_pane_t1_ParamLimits

0xce9f,	// (0x00057a14) list_single_cale_mrui_row_pane_t1

0xceb1,	// (0x00057a26) list_single_cale_mrui_row_pane_t2_ParamLimits

0xceb1,	// (0x00057a26) list_single_cale_mrui_row_pane_t2

0xcf17,	// (0x00057a8c) list_single_cale_mrui_row_pane_t3_ParamLimits

0xcf17,	// (0x00057a8c) list_single_cale_mrui_row_pane_t3

0xcf46,	// (0x00057abb) list_single_cale_mrui_row_pane_t4_ParamLimits

0xcf46,	// (0x00057abb) list_single_cale_mrui_row_pane_t4

0x0003,

0xfe0c,	// (0x0005a981) list_single_cale_mrui_row_pane_t_ParamLimits

0xfe0c,	// (0x0005a981) list_single_cale_mrui_row_pane_t

0xcf75,	// (0x00057aea) list_single_cmail_header_editor_pane_bg_cp01_ParamLimits

0xcf75,	// (0x00057aea) list_single_cmail_header_editor_pane_bg_cp01

0xcf99,	// (0x00057b0e) list_single_cmail_header_editor_pane_bg_cp02_ParamLimits

0xcf99,	// (0x00057b0e) list_single_cmail_header_editor_pane_bg_cp02

0xcfb7,	// (0x00057b2c) main_radioblah_text_pane_t1_ParamLimits

0xcfb7,	// (0x00057b2c) main_radioblah_text_pane_t1

0x248d,	// (0x0004d002) cam6_indi_pane_cp01

0x2495,	// (0x0004d00a) cam6_mode_pane_cp01

0x249d,	// (0x0004d012) cam6_pano_pane

0x24a6,	// (0x0004d01b) cam6_zoom_pane_cp01

0x24ae,	// (0x0004d023) cam6_pano_image_pane

0x24b7,	// (0x0004d02c) cam6_pano_pane_g1

0x1b34,	// (0x0004c6a9) cam6_pano_pane_g2

0x24c0,	// (0x0004d035) cam6_pano_pane_g3

0x24c9,	// (0x0004d03e) cam6_pano_pane_g4

0xed11,	// (0x00059886) cam6_pano_pane_g5

0x24d2,	// (0x0004d047) cam6_pano_pane_g6

0x24da,	// (0x0004d04f) cam6_pano_pane_g7

0x24e2,	// (0x0004d057) cam6_pano_pane_g8

0x24eb,	// (0x0004d060) cam6_pano_pane_g9

0x0008,

0xfe15,	// (0x0005a98a) cam6_pano_pane_g

0x2b5c,	// (0x0004d6d1) main_browser_tag_pane

0x22b4,	// (0x0004ce29) grid_navstr_albumart_pane

0x24f4,	// (0x0004d069) cell_navstr_albumart_pane_ParamLimits

0x24f4,	// (0x0004d069) cell_navstr_albumart_pane

0x4102,	// (0x0004ec77) cell_navstr_albumart_pane_g1

0xe157,	// (0x00058ccc) cell_navstr_albumart_pane_g2

0xe167,	// (0x00058cdc) cell_navstr_albumart_pane_g3

0xe15f,	// (0x00058cd4) cell_navstr_albumart_pane_g4

0x0003,

0xfe28,	// (0x0005a99d) cell_navstr_albumart_pane_g

0xcfd0,	// (0x00057b45) bt_list_pane_ParamLimits

0xcfd0,	// (0x00057b45) bt_list_pane

0xcfe5,	// (0x00057b5a) bt_list_pane_t1

0xcff4,	// (0x00057b69) bt_list_pane_t2

0x0001,

0xfe31,	// (0x0005a9a6) bt_list_pane_t

0x2b5c,	// (0x0004d6d1) main_cale_prevew_pane

0xd003,	// (0x00057b78) popup_cale_preview_window_ParamLimits

0xd003,	// (0x00057b78) popup_cale_preview_window

0x4b0e,	// (0x0004f683) bg_popup_preview_window_pane_cp05_ParamLimits

0x4b0e,	// (0x0004f683) bg_popup_preview_window_pane_cp05

0x250b,	// (0x0004d080) list_cale_preview_pane_ParamLimits

0x250b,	// (0x0004d080) list_cale_preview_pane

0xd018,	// (0x00057b8d) list_double_cale_preview_pane_ParamLimits

0xd018,	// (0x00057b8d) list_double_cale_preview_pane

0xd029,	// (0x00057b9e) list_single_cale_preview_pane_ParamLimits

0xd029,	// (0x00057b9e) list_single_cale_preview_pane

0xd03d,	// (0x00057bb2) list_single_cale_preview_pane_g1

0xd045,	// (0x00057bba) list_single_cale_preview_pane_t1_ParamLimits

0xd045,	// (0x00057bba) list_single_cale_preview_pane_t1

0x2517,	// (0x0004d08c) list_double_cale_preview_pane_g1

0x251f,	// (0x0004d094) list_double_cale_preview_pane_t1_ParamLimits

0x251f,	// (0x0004d094) list_double_cale_preview_pane_t1

0xd05a,	// (0x00057bcf) list_double_cale_preview_pane_t2_ParamLimits

0xd05a,	// (0x00057bcf) list_double_cale_preview_pane_t2

0x0001,

0xfe36,	// (0x0005a9ab) list_double_cale_preview_pane_t_ParamLimits

0xfe36,	// (0x0005a9ab) list_double_cale_preview_pane_t

0x2b5c,	// (0x0004d6d1) main_ezdial_pane

0x4b0e,	// (0x0004f683) main_sp_fs_email_pane_ParamLimits

0xc66a,	// (0x000571df) cmail_ddmenu_btn01_pane_ParamLimits

0xc66a,	// (0x000571df) cmail_ddmenu_btn01_pane

0xc687,	// (0x000571fc) cmail_ddmenu_btn02_pane_ParamLimits

0xc687,	// (0x000571fc) cmail_ddmenu_btn02_pane

0xc6a5,	// (0x0005721a) cmail_ddmenu_btn03_pane_ParamLimits

0xc6a5,	// (0x0005721a) cmail_ddmenu_btn03_pane

0xc6d1,	// (0x00057246) main_sp_fs_ctrlbar_pane_ParamLimits

0xc6e5,	// (0x0005725a) main_sp_fs_listscroll_pane_te_cp01_ParamLimits

0xcc4c,	// (0x000577c1) list_cmail_body_pane_ParamLimits

0x21e4,	// (0x0004cd59) bg_button_pane_cp12

0x21f9,	// (0x0004cd6e) list_single_cmail_header_detail_pane_g3_ParamLimits

0x21f9,	// (0x0004cd6e) list_single_cmail_header_detail_pane_g3

0x2206,	// (0x0004cd7b) list_single_cmail_header_detail_pane_t2_ParamLimits

0x2206,	// (0x0004cd7b) list_single_cmail_header_detail_pane_t2

0x0001,

0xfdb9,	// (0x0005a92e) list_single_cmail_header_detail_pane_t_ParamLimits

0xfdb9,	// (0x0005a92e) list_single_cmail_header_detail_pane_t

0x231c,	// (0x0004ce91) phacti_term_pane_t2_ParamLimits

0x231c,	// (0x0004ce91) phacti_term_pane_t2

0x0001,

0xfdc3,	// (0x0005a938) phacti_term_pane_t_ParamLimits

0xfdc3,	// (0x0005a938) phacti_term_pane_t

0x2534,	// (0x0004d0a9) aid_size_list_single_double

0xd072,	// (0x00057be7) popup_ezdial_listscroll_window

0xd08b,	// (0x00057c00) popup_number_entry_window_cp01

0x3573,	// (0x0004e0e8) bg_popup_call_pane_cp09

0x2540,	// (0x0004d0b5) ezdial_list_pane

0x2548,	// (0x0004d0bd) scroll_pane_cp23

0xe585,	// (0x000590fa) bg_button_pane_cp028_ParamLimits

0xe585,	// (0x000590fa) bg_button_pane_cp028

0xd097,	// (0x00057c0c) cmail_ddmenu_btn01_pane_g1_ParamLimits

0xd097,	// (0x00057c0c) cmail_ddmenu_btn01_pane_g1

0xd0a7,	// (0x00057c1c) cmail_ddmenu_btn01_pane_g2_ParamLimits

0xd0a7,	// (0x00057c1c) cmail_ddmenu_btn01_pane_g2

0x0001,

0xfe3b,	// (0x0005a9b0) cmail_ddmenu_btn01_pane_g_ParamLimits

0xfe3b,	// (0x0005a9b0) cmail_ddmenu_btn01_pane_g

0x2550,	// (0x0004d0c5) cmail_ddmenu_btn01_pane_t1_ParamLimits

0x2550,	// (0x0004d0c5) cmail_ddmenu_btn01_pane_t1

0xe386,	// (0x00058efb) bg_button_pane_cp029_ParamLimits

0xe386,	// (0x00058efb) bg_button_pane_cp029

0xd0a7,	// (0x00057c1c) cmail_ddmenu_btn02_pane_g1_ParamLimits

0xd0a7,	// (0x00057c1c) cmail_ddmenu_btn02_pane_g1

0xd0bf,	// (0x00057c34) cmail_ddmenu_btn02_pane_t1_ParamLimits

0xd0bf,	// (0x00057c34) cmail_ddmenu_btn02_pane_t1

0x2b13,	// (0x0004d688) bg_button_pane_cp031_ParamLimits

0x2b13,	// (0x0004d688) bg_button_pane_cp031

0xd0a7,	// (0x00057c1c) cmail_ddmenu_btn03_pane_g1_ParamLimits

0xd0a7,	// (0x00057c1c) cmail_ddmenu_btn03_pane_g1

0xd0bf,	// (0x00057c34) cmail_ddmenu_btn03_pane_t1_ParamLimits

0xd0bf,	// (0x00057c34) cmail_ddmenu_btn03_pane_t1

0xa476,	// (0x00054feb) cell_dialer2_keypad_pane_t1_ParamLimits

0xa490,	// (0x00055005) cell_dialer2_keypad_pane_t1_copy1_ParamLimits

0xa490,	// (0x00055005) cell_dialer2_keypad_pane_t1_copy1

0xc062,	// (0x00056bd7) ncimui_group_button_pane

0x4b0e,	// (0x0004f683) main_sp_fs_calendar_pane_ParamLimits

0xcc4c,	// (0x000577c1) list_single_cmail_header_caption_pane_ParamLimits

0x2367,	// (0x0004cedc) aid_recal_txt_sm_pane

0x2b5c,	// (0x0004d6d1) mian_recal_day_pane

0x23a9,	// (0x0004cf1e) popup_sp_fs_cale_preview_window_ParamLimits

0x2565,	// (0x0004d0da) list_recal_day_pane

0x25a7,	// (0x0004d11c) list_single_recal_day_pane_ParamLimits

0x25a7,	// (0x0004d11c) list_single_recal_day_pane

0x25b9,	// (0x0004d12e) list_single_recal_day_pane_g1_ParamLimits

0x25b9,	// (0x0004d12e) list_single_recal_day_pane_g1

0x25c5,	// (0x0004d13a) list_single_recal_day_pane_g2_ParamLimits

0x25c5,	// (0x0004d13a) list_single_recal_day_pane_g2

0x25d1,	// (0x0004d146) list_single_recal_day_pane_g3_ParamLimits

0x25d1,	// (0x0004d146) list_single_recal_day_pane_g3

0xd0e3,	// (0x00057c58) list_single_recal_day_pane_g4_ParamLimits

0xd0e3,	// (0x00057c58) list_single_recal_day_pane_g4

0x25dd,	// (0x0004d152) list_single_recal_day_pane_g5_ParamLimits

0x25dd,	// (0x0004d152) list_single_recal_day_pane_g5

0xd0f7,	// (0x00057c6c) list_single_recal_day_pane_g6_ParamLimits

0xd0f7,	// (0x00057c6c) list_single_recal_day_pane_g6

0x0004,

0xfe4a,	// (0x0005a9bf) list_single_recal_day_pane_g_ParamLimits

0xfe4a,	// (0x0005a9bf) list_single_recal_day_pane_g

0x25f1,	// (0x0004d166) list_single_recal_day_pane_t1

0xd106,	// (0x00057c7b) list_single_recal_day_pane_t2

0x0001,

0xfe55,	// (0x0005a9ca) list_single_recal_day_pane_t

0xd11b,	// (0x00057c90) ncimui_query_button_pane_ParamLimits

0xd11b,	// (0x00057c90) ncimui_query_button_pane

0xd12b,	// (0x00057ca0) ncimui_query_button_pane_t1_ParamLimits

0xd12b,	// (0x00057ca0) ncimui_query_button_pane_t1

0x2603,	// (0x0004d178) ncimui_query_button_pane_t2_ParamLimits

0x2603,	// (0x0004d178) ncimui_query_button_pane_t2

0x0001,

0xfe5a,	// (0x0005a9cf) ncimui_query_button_pane_t_ParamLimits

0xfe5a,	// (0x0005a9cf) ncimui_query_button_pane_t

0xd13e,	// (0x00057cb3) query_button_pane_ParamLimits

0xd13e,	// (0x00057cb3) query_button_pane

0x2b5c,	// (0x0004d6d1) bg_button_pane_cp0028

0x2616,	// (0x0004d18b) query_button_pane_t1

0x8a29,	// (0x0005359e) main_tport_pane_ParamLimits

0xcb98,	// (0x0005770d) bg_popup_window_pane_cp01_ParamLimits

0xcb98,	// (0x0005770d) bg_popup_window_pane_cp01

0xcba4,	// (0x00057719) heading_pane_cp08_ParamLimits

0xcba4,	// (0x00057719) heading_pane_cp08

0xcbb0,	// (0x00057725) heading_pane_cp07_ParamLimits

0xcbb0,	// (0x00057725) heading_pane_cp07

0x2194,	// (0x0004cd09) cell_tport_appsw_pane_g2

0x0002,

0xfda6,	// (0x0005a91b) cell_tport_appsw_pane_g

0x82a4,	// (0x00052e19) input_candi_list_open_g1

0x39d9,	// (0x0004e54e) list_cale_time_pane_g6_ParamLimits

0x39d9,	// (0x0004e54e) list_cale_time_pane_g6

0x9406,	// (0x00053f7b) aid_size_touch_calib_1_ParamLimits

0x9406,	// (0x00053f7b) aid_size_touch_calib_1

0x9412,	// (0x00053f87) aid_size_touch_calib_2_ParamLimits

0x9412,	// (0x00053f87) aid_size_touch_calib_2

0x941e,	// (0x00053f93) aid_size_touch_calib_3_ParamLimits

0x941e,	// (0x00053f93) aid_size_touch_calib_3

0x942c,	// (0x00053fa1) aid_size_touch_calib_4_ParamLimits

0x942c,	// (0x00053fa1) aid_size_touch_calib_4

0x943a,	// (0x00053faf) main_touch_calib_button_group_pane_ParamLimits

0x943a,	// (0x00053faf) main_touch_calib_button_group_pane

0x9448,	// (0x00053fbd) main_touch_calib_pane_g1_ParamLimits

0x9454,	// (0x00053fc9) main_touch_calib_pane_g2_ParamLimits

0x9460,	// (0x00053fd5) main_touch_calib_pane_g3_ParamLimits

0x946c,	// (0x00053fe1) main_touch_calib_pane_g4_ParamLimits

0xf760,	// (0x0005a2d5) main_touch_calib_pane_g_ParamLimits

0x9478,	// (0x00053fed) main_touch_calib_pane_t1_ParamLimits

0x948d,	// (0x00054002) main_touch_calib_pane_t2_ParamLimits

0x94a2,	// (0x00054017) main_touch_calib_pane_t3_ParamLimits

0x94b4,	// (0x00054029) main_touch_calib_pane_t4_ParamLimits

0x94c6,	// (0x0005403b) main_touch_calib_pane_t5_ParamLimits

0xf769,	// (0x0005a2de) main_touch_calib_pane_t_ParamLimits

0xeac7,	// (0x0005963c) list_single_fp_cale_pane_g3_ParamLimits

0xeac7,	// (0x0005963c) list_single_fp_cale_pane_g3

0x8a0d,	// (0x00053582) bg_button_pane_cp012_ParamLimits

0x8a0d,	// (0x00053582) bg_vkb2_func_pane_cp03_ParamLimits

0xb207,	// (0x00055d7c) cell_vitu2_function_top_pane_g1_ParamLimits

0x8a0d,	// (0x00053582) bg_vkb2_func_pane_cp04_ParamLimits

0xbfee,	// (0x00056b63) main_ncimui_button_group_pane_ParamLimits

0xbfee,	// (0x00056b63) main_ncimui_button_group_pane

0xc050,	// (0x00056bc5) main_ncimui_pane_t3_ParamLimits

0xc050,	// (0x00056bc5) main_ncimui_pane_t3

0x22ca,	// (0x0004ce3f) phacti_button_group_pane

0x2534,	// (0x0004d0a9) aid_size_list_single_double_ParamLimits

0xd072,	// (0x00057be7) popup_ezdial_listscroll_window_ParamLimits

0xd08b,	// (0x00057c00) popup_number_entry_window_cp01_ParamLimits

0xd14b,	// (0x00057cc0) phacti_button_pane_ParamLimits

0xd14b,	// (0x00057cc0) phacti_button_pane

0x2b5c,	// (0x0004d6d1) bg_button_pane_cp14

0x2624,	// (0x0004d199) phacti_button_pane_t1

0xd15a,	// (0x00057ccf) main_touch_calib_button_pane_ParamLimits

0xd15a,	// (0x00057ccf) main_touch_calib_button_pane

0x33a4,	// (0x0004df19) bg_button_pane_cp18_ParamLimits

0x33a4,	// (0x0004df19) bg_button_pane_cp18

0xd16b,	// (0x00057ce0) main_touch_calib_button_pane_t1_ParamLimits

0xd16b,	// (0x00057ce0) main_touch_calib_button_pane_t1

0xd181,	// (0x00057cf6) main_touch_calib_button_pane_t2_ParamLimits

0xd181,	// (0x00057cf6) main_touch_calib_button_pane_t2

0x0001,

0xfe5f,	// (0x0005a9d4) main_touch_calib_button_pane_t_ParamLimits

0xfe5f,	// (0x0005a9d4) main_touch_calib_button_pane_t

0x2b5c,	// (0x0004d6d1) cell_ncimui_button_pane

0x2b5c,	// (0x0004d6d1) bg_button_pane_cp032

0x2632,	// (0x0004d1a7) cell_ncimui_button_pane_t1

0xa4e2,	// (0x00055057) image3_infobar_pane_ParamLimits

0xa4e2,	// (0x00055057) image3_infobar_pane

0xc399,	// (0x00056f0e) fs_bigclock_status_pane_ParamLimits

0xc399,	// (0x00056f0e) fs_bigclock_status_pane

0xc3a6,	// (0x00056f1b) main_fs_bigclock_clock_pane_ParamLimits

0xc3a6,	// (0x00056f1b) main_fs_bigclock_clock_pane

0xc3be,	// (0x00056f33) main_fs_bigclock_indi_pane_ParamLimits

0xc3be,	// (0x00056f33) main_fs_bigclock_indi_pane

0xc3de,	// (0x00056f53) main_fs_bigclock_swipe_pane_ParamLimits

0xc3de,	// (0x00056f53) main_fs_bigclock_swipe_pane

0x2b5c,	// (0x0004d6d1) main_fs_clock_dumped_data

0x1c41,	// (0x0004c7b6) list_single_fs_bigclock_indicator_pane_g1_ParamLimits

0x1c41,	// (0x0004c7b6) list_single_fs_bigclock_indicator_pane_g1

0x1c5b,	// (0x0004c7d0) list_single_fs_bigclock_indicator_pane_g2_ParamLimits

0x1c5b,	// (0x0004c7d0) list_single_fs_bigclock_indicator_pane_g2

0x1c75,	// (0x0004c7ea) list_single_fs_bigclock_indicator_pane_g3_ParamLimits

0x1c75,	// (0x0004c7ea) list_single_fs_bigclock_indicator_pane_g3

0x1c8f,	// (0x0004c804) list_single_fs_bigclock_indicator_pane_g4_ParamLimits

0x1c8f,	// (0x0004c804) list_single_fs_bigclock_indicator_pane_g4

0x0004,

0xfc87,	// (0x0005a7fc) list_single_fs_bigclock_indicator_pane_g_ParamLimits

0xfc87,	// (0x0005a7fc) list_single_fs_bigclock_indicator_pane_g

0x1cb8,	// (0x0004c82d) list_single_fs_bigclock_indicator_pane_t1_ParamLimits

0x1cb8,	// (0x0004c82d) list_single_fs_bigclock_indicator_pane_t1

0x1ce0,	// (0x0004c855) list_single_fs_bigclock_indicator_pane_t2_ParamLimits

0x1ce0,	// (0x0004c855) list_single_fs_bigclock_indicator_pane_t2

0x1d08,	// (0x0004c87d) list_single_fs_bigclock_indicator_pane_t3_ParamLimits

0x1d08,	// (0x0004c87d) list_single_fs_bigclock_indicator_pane_t3

0x1d30,	// (0x0004c8a5) list_single_fs_bigclock_indicator_pane_t4_ParamLimits

0x1d30,	// (0x0004c8a5) list_single_fs_bigclock_indicator_pane_t4

0x0004,

0xfc92,	// (0x0005a807) list_single_fs_bigclock_indicator_pane_t_ParamLimits

0xfc92,	// (0x0005a807) list_single_fs_bigclock_indicator_pane_t

0x2640,	// (0x0004d1b5) image3_infobar_fav_pane_ParamLimits

0x2640,	// (0x0004d1b5) image3_infobar_fav_pane

0x2650,	// (0x0004d1c5) image3_infobar_loc_pane_ParamLimits

0x2650,	// (0x0004d1c5) image3_infobar_loc_pane

0x2664,	// (0x0004d1d9) image3_infobar_time_pane_ParamLimits

0x2664,	// (0x0004d1d9) image3_infobar_time_pane

0xe798,	// (0x0005930d) image3_infobar_time_pane_g1

0x2674,	// (0x0004d1e9) image3_infobar_time_pane_t1

0xe798,	// (0x0005930d) image3_infobar_loc_pane_g1

0x2682,	// (0x0004d1f7) image3_infobar_loc_pane_g2

0x0001,

0xfe64,	// (0x0005a9d9) image3_infobar_loc_pane_g

0x268a,	// (0x0004d1ff) image3_infobar_loc_pane_t1

0xe798,	// (0x0005930d) image3_infobar_fav_pane_g1

0x2698,	// (0x0004d20d) image3_infobar_fav_pane_g2

0x0001,

0xfe69,	// (0x0005a9de) image3_infobar_fav_pane_g

0x26a0,	// (0x0004d215) fs_bigclock_status_battery_pane

0x26a9,	// (0x0004d21e) fs_bigclock_status_signal_pane

0x26b2,	// (0x0004d227) fs_bigclock_status_title_pane

0x26bb,	// (0x0004d230) fs_bigclock_status_signal_pane_g1

0x26c4,	// (0x0004d239) fs_bigclock_status_signal_pane_g2

0x0001,

0xfe6e,	// (0x0005a9e3) fs_bigclock_status_signal_pane_g

0x26cc,	// (0x0004d241) fs_bigclock_status_battery_pane_g1

0x26d5,	// (0x0004d24a) fs_bigclock_status_battery_pane_g2

0x0001,

0xfe73,	// (0x0005a9e8) fs_bigclock_status_battery_pane_g

0x26dd,	// (0x0004d252) fs_bigclock_status_title_pane_t1

0xea2c,	// (0x000595a1) main_fs_bigclock_clock_pane_g1

0xd19f,	// (0x00057d14) main_fs_bigclock_clock_pane_g2

0xd1ac,	// (0x00057d21) main_fs_bigclock_clock_pane_g3

0xd1ac,	// (0x00057d21) main_fs_bigclock_clock_pane_g4

0x0003,

0xfe78,	// (0x0005a9ed) main_fs_bigclock_clock_pane_g

0xd1b8,	// (0x00057d2d) main_fs_bigclock_clock_pane_t1

0xd1ca,	// (0x00057d3f) main_fs_bigclock_clock_pane_t2

0x0001,

0xfe81,	// (0x0005a9f6) main_fs_bigclock_clock_pane_t

0x26eb,	// (0x0004d260) list_single_fs_bigclock_indicator_pane_ParamLimits

0x26eb,	// (0x0004d260) list_single_fs_bigclock_indicator_pane

0x26fc,	// (0x0004d271) list_single_fs_bigclock_pane_ParamLimits

0x26fc,	// (0x0004d271) list_single_fs_bigclock_pane

0x2722,	// (0x0004d297) main_fs_bigclock_indicator_pane_t1

0x2731,	// (0x0004d2a6) list_single_fs_bigclock_pane_g1

0x2739,	// (0x0004d2ae) list_single_fs_bigclock_pane_t1

0xe798,	// (0x0005930d) main_fs_bigclock_swipe_pane_g1

0x2779,	// (0x0004d2ee) main_fs_bigclock_swipe_pane_g2

0x0001,

0xfe92,	// (0x0005aa07) main_fs_bigclock_swipe_pane_g

0x2781,	// (0x0004d2f6) main_fs_bigclock_swipe_pane_t1_ParamLimits

0x2781,	// (0x0004d2f6) main_fs_bigclock_swipe_pane_t1

0x7b8d,	// (0x00052702) call_type_pane_ParamLimits

0x2b5c,	// (0x0004d6d1) main_btmg_pane

0xce93,	// (0x00057a08) list_single_cale_mrui_row_pane_g2_ParamLimits

0xce93,	// (0x00057a08) list_single_cale_mrui_row_pane_g2

0x0002,

0xfe05,	// (0x0005a97a) list_single_cale_mrui_row_pane_g_ParamLimits

0xfe05,	// (0x0005a97a) list_single_cale_mrui_row_pane_g

0x258e,	// (0x0004d103) list_recal_vselct_arw_lo_pane

0x2596,	// (0x0004d10b) list_recal_vselct_arw_up_pane

0x259e,	// (0x0004d113) list_recal_vselct_pane

0x279e,	// (0x0004d313) btmg_button_pane

0xd21f,	// (0x00057d94) main_btmg_pane_g1

0x2b5c,	// (0x0004d6d1) bg_button_pane_cp044

0x27a6,	// (0x0004d31b) btmg_button_pane_t1

0xe372,	// (0x00058ee7) aid_listscroll_gen

0x4b0e,	// (0x0004f683) main_cntbar_detail_pane

0x21ba,	// (0x0004cd2f) list_cmail_folder_pane

0x21ca,	// (0x0004cd3f) sp_fs_scroll_pane_cp03_ParamLimits

0xcc4c,	// (0x000577c1) list_single_fs_dyc_pane_cp01_ParamLimits

0xcc4c,	// (0x000577c1) list_single_fs_dyc_pane_cp01

0x27b4,	// (0x0004d329) aid_size_cmail_indent

0x27bd,	// (0x0004d332) list_single_dyc_row_pane_cp01

0xd241,	// (0x00057db6) cntbar_detail_list_pane_ParamLimits

0xd241,	// (0x00057db6) cntbar_detail_list_pane

0xd277,	// (0x00057dec) main_cntbar_detail_cont_pane_ParamLimits

0xd277,	// (0x00057dec) main_cntbar_detail_cont_pane

0xd283,	// (0x00057df8) scroll_pane_cp032_ParamLimits

0xd283,	// (0x00057df8) scroll_pane_cp032

0xd28f,	// (0x00057e04) cntbar_detail_list_event_pane_ParamLimits

0xd28f,	// (0x00057e04) cntbar_detail_list_event_pane

0xd24d,	// (0x00057dc2) cntbar_detail_list_shct_pane

0x27c6,	// (0x0004d33b) aid_list_gen

0x34a9,	// (0x0004e01e) aid_scroll

0x12db,	// (0x0004be50) aid_size_touch_scroll_bar

0x1306,	// (0x0004be7b) aid_list_double

0x1341,	// (0x0004beb6) aid_list_single

0x1341,	// (0x0004beb6) aid_list_single_lg

0xd29f,	// (0x00057e14) aid_list_z_g_a_sm

0xd2a7,	// (0x00057e1c) aid_list_z_g_d

0xd2af,	// (0x00057e24) aid_txt_z_prm

0x27cf,	// (0x0004d344) aid_txt_z_prm_cp01

0x27dd,	// (0x0004d352) aid_txt_z_sec

0xd2bd,	// (0x00057e32) main_cntbar_detail_cont_pane_g1_ParamLimits

0xd2bd,	// (0x00057e32) main_cntbar_detail_cont_pane_g1

0xd2ca,	// (0x00057e3f) main_cntbar_detail_cont_pane_g2_ParamLimits

0xd2ca,	// (0x00057e3f) main_cntbar_detail_cont_pane_g2

0x0001,

0xfe97,	// (0x0005aa0c) main_cntbar_detail_cont_pane_g_ParamLimits

0xfe97,	// (0x0005aa0c) main_cntbar_detail_cont_pane_g

0x27eb,	// (0x0004d360) main_cntbar_detail_cont_pane_t1

0x27f9,	// (0x0004d36e) main_cntbar_detail_cont_pane_t2

0x2807,	// (0x0004d37c) main_cntbar_detail_cont_pane_t3

0x0002,

0xfe9c,	// (0x0005aa11) main_cntbar_detail_cont_pane_t

0xd2d6,	// (0x00057e4b) cell_cntbar_detail_list_shct_pane_ParamLimits

0xd2d6,	// (0x00057e4b) cell_cntbar_detail_list_shct_pane

0x2815,	// (0x0004d38a) cntbar_detail_list_shct_pane_g1

0x281e,	// (0x0004d393) cntbar_detail_list_shct_pane_g2

0x0001,

0xfea3,	// (0x0005aa18) cntbar_detail_list_shct_pane_g

0xd2e8,	// (0x00057e5d) cntbar_detail_list_event_pane_g1_ParamLimits

0xd2e8,	// (0x00057e5d) cntbar_detail_list_event_pane_g1

0xd2f4,	// (0x00057e69) cntbar_detail_list_event_pane_g2_ParamLimits

0xd2f4,	// (0x00057e69) cntbar_detail_list_event_pane_g2

0x0005,

0xfea8,	// (0x0005aa1d) cntbar_detail_list_event_pane_g_ParamLimits

0xfea8,	// (0x0005aa1d) cntbar_detail_list_event_pane_g

0xd360,	// (0x00057ed5) cntbar_detail_list_event_pane_t1_ParamLimits

0xd360,	// (0x00057ed5) cntbar_detail_list_event_pane_t1

0xd375,	// (0x00057eea) cntbar_detail_list_event_pane_t2_ParamLimits

0xd375,	// (0x00057eea) cntbar_detail_list_event_pane_t2

0x0002,

0xfeb5,	// (0x0005aa2a) cntbar_detail_list_event_pane_t_ParamLimits

0xfeb5,	// (0x0005aa2a) cntbar_detail_list_event_pane_t

0xe798,	// (0x0005930d) cell_cntbar_detail_list_shct_pane_g1

0x3f69,	// (0x0004eade) navi_pane_mv_g3

0x4b0e,	// (0x0004f683) main_cntbar_detail_pane_ParamLimits

0x2b5c,	// (0x0004d6d1) main_notif_wgt_pane

0xa1b8,	// (0x00054d2d) aid_tch_main_mp4_pane_g4

0xa3f7,	// (0x00054f6c) popup_slider_window_cp02

0x2584,	// (0x0004d0f9) list_recal_day_event_pane

0xd227,	// (0x00057d9c) cntbar_detail_btn_pane_ParamLimits

0xd227,	// (0x00057d9c) cntbar_detail_btn_pane

0xd233,	// (0x00057da8) cntbar_detail_btn_pane_cp01_ParamLimits

0xd233,	// (0x00057da8) cntbar_detail_btn_pane_cp01

0xd24d,	// (0x00057dc2) cntbar_detail_list_shct_pane_ParamLimits

0xd259,	// (0x00057dce) cntbar_detail_pane_g1_ParamLimits

0xd259,	// (0x00057dce) cntbar_detail_pane_g1

0xd265,	// (0x00057dda) cntbar_detail_pane_t1_ParamLimits

0xd265,	// (0x00057dda) cntbar_detail_pane_t1

0xd300,	// (0x00057e75) cntbar_detail_list_event_pane_g3_ParamLimits

0xd300,	// (0x00057e75) cntbar_detail_list_event_pane_g3

0xd318,	// (0x00057e8d) cntbar_detail_list_event_pane_g4_ParamLimits

0xd318,	// (0x00057e8d) cntbar_detail_list_event_pane_g4

0xd330,	// (0x00057ea5) cntbar_detail_list_event_pane_g5_ParamLimits

0xd330,	// (0x00057ea5) cntbar_detail_list_event_pane_g5

0xd348,	// (0x00057ebd) cntbar_detail_list_event_pane_g6_ParamLimits

0xd348,	// (0x00057ebd) cntbar_detail_list_event_pane_g6

0xd38a,	// (0x00057eff) cntbar_detail_list_event_pane_t3_ParamLimits

0xd38a,	// (0x00057eff) cntbar_detail_list_event_pane_t3

0xd39c,	// (0x00057f11) popup_notif_wgt_window_ParamLimits

0xd39c,	// (0x00057f11) popup_notif_wgt_window

0xd3aa,	// (0x00057f1f) popup_submenu_window_cp01_ParamLimits

0xd3aa,	// (0x00057f1f) popup_submenu_window_cp01

0x3573,	// (0x0004e0e8) bg_popup_window_pane_cp10

0x2827,	// (0x0004d39c) listscroll_notif_wgt_pane

0x2838,	// (0x0004d3ad) list_notif_wgt_window

0x2841,	// (0x0004d3b6) scroll_pane_cp033

0xd3b6,	// (0x00057f2b) list_notif_wgt_row_pane_ParamLimits

0xd3b6,	// (0x00057f2b) list_notif_wgt_row_pane

0x284a,	// (0x0004d3bf) aid_size_list_notif_wgt_del

0x2857,	// (0x0004d3cc) list_notif_wgt_row_pane_g1

0x2863,	// (0x0004d3d8) list_notif_wgt_row_pane_g2

0x2877,	// (0x0004d3ec) list_notif_wgt_row_pane_g3

0x0002,

0xfebc,	// (0x0005aa31) list_notif_wgt_row_pane_g

0x2884,	// (0x0004d3f9) list_notif_wgt_row_pane_t1

0x289a,	// (0x0004d40f) list_notif_wgt_row_pane_t2

0x28ac,	// (0x0004d421) list_notif_wgt_row_pane_t3

0x0002,

0xfec3,	// (0x0005aa38) list_notif_wgt_row_pane_t

0x0fd5,	// (0x0004bb4a) list_recal_day_event_pane_g1

0x28be,	// (0x0004d433) list_recal_day_event_pane_t1

0x2b5c,	// (0x0004d6d1) bg_button_pane_cp045

0xd3c8,	// (0x00057f3d) cntbar_detail_btn_pane_t1

0xe386,	// (0x00058efb) main_callh_pane_ParamLimits

0xe386,	// (0x00058efb) main_callh_pane

0x2b5c,	// (0x0004d6d1) main_coverflow0_pane

0x2b5c,	// (0x0004d6d1) main_wgtman_pane

0xc3f0,	// (0x00056f65) main_fs_bigclock_unlock_btn_pane_ParamLimits

0xc3f0,	// (0x00056f65) main_fs_bigclock_unlock_btn_pane

0x218c,	// (0x0004cd01) bg_button_pane_cp16

0x219c,	// (0x0004cd11) cell_tport_appsw_pane_g3

0xd3d6,	// (0x00057f4b) cf0_flow_pane_ParamLimits

0xd3d6,	// (0x00057f4b) cf0_flow_pane

0x28cd,	// (0x0004d442) listscroll_cf0_pane

0x28d6,	// (0x0004d44b) main_cf0_pane_g1

0xd3e5,	// (0x00057f5a) main_cf0_pane_t1_ParamLimits

0xd3e5,	// (0x00057f5a) main_cf0_pane_t1

0xd3f7,	// (0x00057f6c) main_cf0_pane_t2_ParamLimits

0xd3f7,	// (0x00057f6c) main_cf0_pane_t2

0x0001,

0xfecf,	// (0x0005aa44) main_cf0_pane_t_ParamLimits

0xfecf,	// (0x0005aa44) main_cf0_pane_t

0x28e8,	// (0x0004d45d) scroll_pane_cp11

0xd409,	// (0x00057f7e) cf0_flow_pane_g1

0xd411,	// (0x00057f86) cf0_flow_pane_g2

0x0001,

0xfed4,	// (0x0005aa49) cf0_flow_pane_g

0xd419,	// (0x00057f8e) cf0_flow_pane_t1

0x2b5c,	// (0x0004d6d1) main_call6_pane

0x2b5c,	// (0x0004d6d1) main_calllock_pane

0xd427,	// (0x00057f9c) call6_btn_grp_pane_ParamLimits

0xd427,	// (0x00057f9c) call6_btn_grp_pane

0xd434,	// (0x00057fa9) call6_pane_g1_ParamLimits

0xd434,	// (0x00057fa9) call6_pane_g1

0xd441,	// (0x00057fb6) popup_call6_1st_window_ParamLimits

0xd441,	// (0x00057fb6) popup_call6_1st_window

0xd44d,	// (0x00057fc2) popup_call6_2nd_window_ParamLimits

0xd44d,	// (0x00057fc2) popup_call6_2nd_window

0xd459,	// (0x00057fce) cell_call6_btn_pane_ParamLimits

0xd459,	// (0x00057fce) cell_call6_btn_pane

0x3573,	// (0x0004e0e8) bg_popup_call2_in_pane_cp03

0x28f1,	// (0x0004d466) popup_call6_1st_window_g1

0x28f9,	// (0x0004d46e) popup_call6_1st_window_g2

0x2901,	// (0x0004d476) popup_call6_1st_window_g3

0x0002,

0xfed9,	// (0x0005aa4e) popup_call6_1st_window_g

0x2909,	// (0x0004d47e) popup_call6_1st_window_t1

0x2918,	// (0x0004d48d) popup_call6_1st_window_t2

0x2926,	// (0x0004d49b) popup_call6_1st_window_t3

0x0002,

0xfee0,	// (0x0005aa55) popup_call6_1st_window_t

0x3573,	// (0x0004e0e8) bg_popup_call2_in_pane_cp04

0x28f1,	// (0x0004d466) popup_call6_2nd_window_g1

0x28f9,	// (0x0004d46e) popup_call6_2nd_window_g2

0x2901,	// (0x0004d476) popup_call6_2nd_window_g3

0x0002,

0xfed9,	// (0x0005aa4e) popup_call6_2nd_window_g

0x2909,	// (0x0004d47e) popup_call6_2nd_window_t1

0x5d83,	// (0x000508f8) bg_button_pane_cp15

0xd468,	// (0x00057fdd) cell_call6_btn_pane_g1

0xd471,	// (0x00057fe6) cell_call6_btn_pane_t1

0xd480,	// (0x00057ff5) listscroll_wgtman_pane_ParamLimits

0xd480,	// (0x00057ff5) listscroll_wgtman_pane

0xd49c,	// (0x00058011) wgtman_btn_pane_ParamLimits

0xd49c,	// (0x00058011) wgtman_btn_pane

0x3dc0,	// (0x0004e935) aid_scroll_copy1

0x2934,	// (0x0004d4a9) list_wgtman_pane

0xd4cf,	// (0x00058044) wgtman_btn_pane_g1_ParamLimits

0xd4cf,	// (0x00058044) wgtman_btn_pane_g1

0xd4f7,	// (0x0005806c) wgtman_btn_pane_t1_ParamLimits

0xd4f7,	// (0x0005806c) wgtman_btn_pane_t1

0x293e,	// (0x0004d4b3) wgtman_btn_pane_t2_ParamLimits

0x293e,	// (0x0004d4b3) wgtman_btn_pane_t2

0x0001,

0xfee7,	// (0x0005aa5c) wgtman_btn_pane_t_ParamLimits

0xfee7,	// (0x0005aa5c) wgtman_btn_pane_t

0xd52e,	// (0x000580a3) listrow_wgtman_pane_ParamLimits

0xd52e,	// (0x000580a3) listrow_wgtman_pane

0xd53f,	// (0x000580b4) listrow_wgtman_pane_g1

0xd54c,	// (0x000580c1) listrow_wgtman_pane_g2

0x0001,

0xfeec,	// (0x0005aa61) listrow_wgtman_pane_g

0xd564,	// (0x000580d9) listrow_wgtman_pane_t1

0xd57c,	// (0x000580f1) listrow_wgtman_pane_t2

0x0001,

0xfef1,	// (0x0005aa66) listrow_wgtman_pane_t

0xd5a2,	// (0x00058117) wait_bar_pane_cp09

0x2955,	// (0x0004d4ca) main_calllock_btn_pane

0x295d,	// (0x0004d4d2) main_calllock_pane_g1

0x2b5c,	// (0x0004d6d1) bg_button_pane_cp17

0x2966,	// (0x0004d4db) main_calllock_btn_pane_g1

0x296f,	// (0x0004d4e4) main_calllock_btn_pane_t1

0x2b5c,	// (0x0004d6d1) main_dialer3_pane

0x2b5c,	// (0x0004d6d1) main_fmrd2_pane

0xe798,	// (0x0005930d) main_fs_bigclock_unlock_btn_pane_g1

0x2986,	// (0x0004d4fb) main_fs_bigclock_unlock_btn_pane_t1

0xd5b4,	// (0x00058129) area_fmrd2_info_pane_ParamLimits

0xd5b4,	// (0x00058129) area_fmrd2_info_pane

0xd5c0,	// (0x00058135) area_fmrd2_visual_pane_ParamLimits

0xd5c0,	// (0x00058135) area_fmrd2_visual_pane

0xd5ce,	// (0x00058143) fmrd2_indi_pane_ParamLimits

0xd5ce,	// (0x00058143) fmrd2_indi_pane

0xd5db,	// (0x00058150) area_fmrd2_visual_pane_g1

0xd5e3,	// (0x00058158) area_fmrd2_visual_pane_t1

0xd5f1,	// (0x00058166) area_fmrd2_visual_pane_t2

0xd5ff,	// (0x00058174) area_fmrd2_visual_pane_t3

0x0002,

0xfefb,	// (0x0005aa70) area_fmrd2_visual_pane_t

0xd60d,	// (0x00058182) area_fmrd2_info_pane_g1

0xd615,	// (0x0005818a) area_fmrd2_info_pane_t1

0xd623,	// (0x00058198) area_fmrd2_info_pane_t2

0xd631,	// (0x000581a6) area_fmrd2_info_pane_t3

0xd63f,	// (0x000581b4) area_fmrd2_info_pane_t4

0x0003,

0xff02,	// (0x0005aa77) area_fmrd2_info_pane_t

0xd64d,	// (0x000581c2) fmrd2_indi_pane_t1

0xd65b,	// (0x000581d0) fmrd2_indi_pane_t2

0xd669,	// (0x000581de) fmrd2_indi_pane_t3

0x0002,

0xff0b,	// (0x0005aa80) fmrd2_indi_pane_t

0x1c9e,	// (0x0004c813) list_single_fs_bigclock_indicator_pane_g5_ParamLimits

0x1c9e,	// (0x0004c813) list_single_fs_bigclock_indicator_pane_g5

0x1d4c,	// (0x0004c8c1) list_single_fs_bigclock_indicator_pane_t5_ParamLimits

0x1d4c,	// (0x0004c8c1) list_single_fs_bigclock_indicator_pane_t5

0xcd78,	// (0x000578ed) aid_cell_bcale_month_pane_ParamLimits

0xcd78,	// (0x000578ed) aid_cell_bcale_month_pane

0xcd96,	// (0x0005790b) bcale_month_pane_ParamLimits

0xcd96,	// (0x0005790b) bcale_month_pane

0xcdac,	// (0x00057921) bcale_preview_pane_ParamLimits

0xcdac,	// (0x00057921) bcale_preview_pane

0x2739,	// (0x0004d2ae) list_single_fs_bigclock_pane_t1_ParamLimits

0x2755,	// (0x0004d2ca) list_single_fs_bigclock_pane_t2_ParamLimits

0x2755,	// (0x0004d2ca) list_single_fs_bigclock_pane_t2

0x0001,

0xfe8d,	// (0x0005aa02) list_single_fs_bigclock_pane_t_ParamLimits

0xfe8d,	// (0x0005aa02) list_single_fs_bigclock_pane_t

0x297e,	// (0x0004d4f3) main_fs_bigclock_unlock_btn_pane_g2

0x0001,

0xfef6,	// (0x0005aa6b) main_fs_bigclock_unlock_btn_pane_g

0xd677,	// (0x000581ec) aid_dia3_key_size_ParamLimits

0xd677,	// (0x000581ec) aid_dia3_key_size

0xd683,	// (0x000581f8) aid_dia3_listrow_size_ParamLimits

0xd683,	// (0x000581f8) aid_dia3_listrow_size

0xd691,	// (0x00058206) dia3_keypad_fun_pane_ParamLimits

0xd691,	// (0x00058206) dia3_keypad_fun_pane

0xd69d,	// (0x00058212) dia3_keypad_num_pane_ParamLimits

0xd69d,	// (0x00058212) dia3_keypad_num_pane

0xd6a9,	// (0x0005821e) dia3_listscroll_pane_ParamLimits

0xd6a9,	// (0x0005821e) dia3_listscroll_pane

0xd6b5,	// (0x0005822a) dia3_numentry_pane_ParamLimits

0xd6b5,	// (0x0005822a) dia3_numentry_pane

0x2994,	// (0x0004d509) dia3_list_pane

0x299d,	// (0x0004d512) scroll_pane_cp12

0x2b5c,	// (0x0004d6d1) bg_dia3_numentry_pane

0xd6c1,	// (0x00058236) dia3_numentry_pane_t1

0xd6d0,	// (0x00058245) cell_dia3_key_num_pane

0xd6d8,	// (0x0005824d) cell_dia3_key0_fun_pane_ParamLimits

0xd6d8,	// (0x0005824d) cell_dia3_key0_fun_pane

0xd6e5,	// (0x0005825a) cell_dia3_key1_fun_pane_ParamLimits

0xd6e5,	// (0x0005825a) cell_dia3_key1_fun_pane

0xd6f2,	// (0x00058267) dia3_listrow_pane

0x199f,	// (0x0004c514) bg_dia3_numentry_pane_g1

0x2b5c,	// (0x0004d6d1) bg_button_pane_cp21

0x29a6,	// (0x0004d51b) cell_dia3_key_num_pane_t1

0x29b4,	// (0x0004d529) cell_dia3_key_num_pane_t2

0x29c3,	// (0x0004d538) cell_dia3_key_num_pane_t3

0x29d2,	// (0x0004d547) cell_dia3_key_num_pane_t4

0x0003,

0xff12,	// (0x0005aa87) cell_dia3_key_num_pane_t

0x2b5c,	// (0x0004d6d1) bg_button_pane_cp19

0x29e1,	// (0x0004d556) cell_dia3_key0_fun_pane_g1

0x2b5c,	// (0x0004d6d1) bg_button_pane_cp20

0xd6ff,	// (0x00058274) cell_dia3_key1_fun_pane_g1

0xd707,	// (0x0005827c) area_left_week_number_pane

0xd718,	// (0x0005828d) area_top_day_name_pane

0xd724,	// (0x00058299) frame_month_view_pane

0x29e9,	// (0x0004d55e) grid_month_view_pane

0xd735,	// (0x000582aa) cell_top_day_name_pane_ParamLimits

0xd735,	// (0x000582aa) cell_top_day_name_pane

0xd74b,	// (0x000582c0) cell_area_left_week_number_pane_ParamLimits

0xd74b,	// (0x000582c0) cell_area_left_week_number_pane

0xd76a,	// (0x000582df) cell_month_view_pane_ParamLimits

0xd76a,	// (0x000582df) cell_month_view_pane

0x29f7,	// (0x0004d56c) frm_month_g1

0xd790,	// (0x00058305) frm_month_g2

0xd79f,	// (0x00058314) frm_month_g3

0xd7ae,	// (0x00058323) frm_month_g4

0xd7bd,	// (0x00058332) frm_month_g5

0xd7cc,	// (0x00058341) frm_month_g6

0xd7db,	// (0x00058350) frm_month_g7

0x2a04,	// (0x0004d579) frm_month_g8

0xd7ea,	// (0x0005835f) frm_month_g9

0xd7f7,	// (0x0005836c) frm_month_g10

0xd804,	// (0x00058379) frm_month_g11

0xd811,	// (0x00058386) frm_month_g12

0xd81e,	// (0x00058393) frm_month_g13

0xd82b,	// (0x000583a0) frm_month_g14

0xd838,	// (0x000583ad) frm_month_g15

0xd845,	// (0x000583ba) frm_month_g16

0x000f,

0xff1b,	// (0x0005aa90) frm_month_g

0x2a11,	// (0x0004d586) cell_top_day_name_pane_t1

0xd852,	// (0x000583c7) cell_area_left_week_number_pane_g1

0xd861,	// (0x000583d6) cell_area_left_week_number_pane_t1

0xe9c7,	// (0x0005953c) cell_month_view_pane_g1

0xd877,	// (0x000583ec) cell_month_view_pane_t1

0x2b5c,	// (0x0004d6d1) main_fps_pane

0x1f92,	// (0x0004cb07) cmail_ddmenu_btn02_pane_cp1_ParamLimits

0x1f92,	// (0x0004cb07) cmail_ddmenu_btn02_pane_cp1

0x1fae,	// (0x0004cb23) cmail_ddmenu_btn02_pane_cp2_ParamLimits

0x1fae,	// (0x0004cb23) cmail_ddmenu_btn02_pane_cp2

0xd0b3,	// (0x00057c28) cmail_ddmenu_btn02_pane_g2_ParamLimits

0xd0b3,	// (0x00057c28) cmail_ddmenu_btn02_pane_g2

0x0001,

0xfe40,	// (0x0005a9b5) cmail_ddmenu_btn02_pane_g_ParamLimits

0xfe40,	// (0x0005a9b5) cmail_ddmenu_btn02_pane_g

0xd0d1,	// (0x00057c46) cmail_ddmenu_btn02_pane_t2_ParamLimits

0xd0d1,	// (0x00057c46) cmail_ddmenu_btn02_pane_t2

0x0001,

0xfe45,	// (0x0005a9ba) cmail_ddmenu_btn02_pane_t_ParamLimits

0xfe45,	// (0x0005a9ba) cmail_ddmenu_btn02_pane_t

0xd88d,	// (0x00058402) fps_text_pane_ParamLimits

0xd88d,	// (0x00058402) fps_text_pane

0xd89a,	// (0x0005840f) main_fps_pane_g1_ParamLimits

0xd89a,	// (0x0005840f) main_fps_pane_g1

0xd8a6,	// (0x0005841b) wait_bar_pane_cp010_ParamLimits

0xd8a6,	// (0x0005841b) wait_bar_pane_cp010

0xd8b2,	// (0x00058427) fps_text_pane_t1_ParamLimits

0xd8b2,	// (0x00058427) fps_text_pane_t1

0xa7ed,	// (0x00055362) cam4_image_uncrop_pane_g1

0xa7f6,	// (0x0005536b) cam4_image_uncrop_pane_g2

0xa7ff,	// (0x00055374) cam4_image_uncrop_pane_g3

0xa808,	// (0x0005537d) cam4_image_uncrop_pane_g4

0x0003,

0xf901,	// (0x0005a476) cam4_image_uncrop_pane_g

0xd6f2,	// (0x00058267) dia3_listrow_pane_ParamLimits

0x2b5c,	// (0x0004d6d1) main_phob2_pane

0xcbf1,	// (0x00057766) cell_tport_appsw_pane_cp02_ParamLimits

0xcbf1,	// (0x00057766) cell_tport_appsw_pane_cp02

0xcbfe,	// (0x00057773) cell_tport_appsw_pane_cp03_ParamLimits

0xcbfe,	// (0x00057773) cell_tport_appsw_pane_cp03

0x2b5c,	// (0x0004d6d1) phob2_contact_card_pane

0x2b5c,	// (0x0004d6d1) phob2_listscroll_pane

0x2a24,	// (0x0004d599) phob2_list_pane

0x2a2c,	// (0x0004d5a1) scroll_pane_cp034

0xd8cb,	// (0x00058440) phob2_cc_data_pane_ParamLimits

0xd8cb,	// (0x00058440) phob2_cc_data_pane

0xd8e3,	// (0x00058458) phob2_cc_listscroll_pane_ParamLimits

0xd8e3,	// (0x00058458) phob2_cc_listscroll_pane

0xd8fb,	// (0x00058470) list_double_large_graphic_phob2_pane_ParamLimits

0xd8fb,	// (0x00058470) list_double_large_graphic_phob2_pane

0xd90d,	// (0x00058482) list_double_large_graphic_phob2_pane_g1_ParamLimits

0xd90d,	// (0x00058482) list_double_large_graphic_phob2_pane_g1

0xd923,	// (0x00058498) list_double_large_graphic_phob2_pane_g2_ParamLimits

0xd923,	// (0x00058498) list_double_large_graphic_phob2_pane_g2

0x0001,

0xff3c,	// (0x0005aab1) list_double_large_graphic_phob2_pane_g_ParamLimits

0xff3c,	// (0x0005aab1) list_double_large_graphic_phob2_pane_g

0xd92f,	// (0x000584a4) list_double_large_graphic_phob2_pane_t1_ParamLimits

0xd92f,	// (0x000584a4) list_double_large_graphic_phob2_pane_t1

0xd945,	// (0x000584ba) list_double_large_graphic_phob2_pane_t2_ParamLimits

0xd945,	// (0x000584ba) list_double_large_graphic_phob2_pane_t2

0x0001,

0xff41,	// (0x0005aab6) list_double_large_graphic_phob2_pane_t_ParamLimits

0xff41,	// (0x0005aab6) list_double_large_graphic_phob2_pane_t

0x2b5c,	// (0x0004d6d1) list_highlight_pane_cp024

0xd95a,	// (0x000584cf) phob2_cc_button_pane

0xd962,	// (0x000584d7) phob2_cc_data_pane_g1_ParamLimits

0xd962,	// (0x000584d7) phob2_cc_data_pane_g1

0xd96e,	// (0x000584e3) phob2_cc_data_pane_g2_ParamLimits

0xd96e,	// (0x000584e3) phob2_cc_data_pane_g2

0x0001,

0xff46,	// (0x0005aabb) phob2_cc_data_pane_g_ParamLimits

0xff46,	// (0x0005aabb) phob2_cc_data_pane_g

0xd97a,	// (0x000584ef) phob2_cc_data_pane_t1_ParamLimits

0xd97a,	// (0x000584ef) phob2_cc_data_pane_t1

0xd98c,	// (0x00058501) phob2_cc_data_pane_t2_ParamLimits

0xd98c,	// (0x00058501) phob2_cc_data_pane_t2

0xd99e,	// (0x00058513) phob2_cc_data_pane_t3_ParamLimits

0xd99e,	// (0x00058513) phob2_cc_data_pane_t3

0x0002,

0xff4b,	// (0x0005aac0) phob2_cc_data_pane_t_ParamLimits

0xff4b,	// (0x0005aac0) phob2_cc_data_pane_t

0x2a34,	// (0x0004d5a9) phob2_cc_list_pane_ParamLimits

0x2a34,	// (0x0004d5a9) phob2_cc_list_pane

0x18bc,	// (0x0004c431) scroll_pane_cp035_ParamLimits

0x18bc,	// (0x0004c431) scroll_pane_cp035

0x4b0e,	// (0x0004f683) bg_button_pane_cp033

0x2a40,	// (0x0004d5b5) phob2_cc_button_pane_g1

0x2a4c,	// (0x0004d5c1) phob2_cc_button_pane_t1

0x2a61,	// (0x0004d5d6) phob2_cc_button_pane_t2

0x0001,

0xff52,	// (0x0005aac7) phob2_cc_button_pane_t

0xd9b0,	// (0x00058525) list_double_large_graphic_phob2_cc_pane_ParamLimits

0xd9b0,	// (0x00058525) list_double_large_graphic_phob2_cc_pane

0xd9f6,	// (0x0005856b) list_double_large_graphic_phob2_cc_pane_g1_ParamLimits

0xd9f6,	// (0x0005856b) list_double_large_graphic_phob2_cc_pane_g1

0xda07,	// (0x0005857c) list_double_large_graphic_phob2_cc_pane_g2_ParamLimits

0xda07,	// (0x0005857c) list_double_large_graphic_phob2_cc_pane_g2

0xda16,	// (0x0005858b) list_double_large_graphic_phob2_cc_pane_g3_ParamLimits

0xda16,	// (0x0005858b) list_double_large_graphic_phob2_cc_pane_g3

0xda25,	// (0x0005859a) list_double_large_graphic_phob2_cc_pane_g4_ParamLimits

0xda25,	// (0x0005859a) list_double_large_graphic_phob2_cc_pane_g4

0xda36,	// (0x000585ab) list_double_large_graphic_phob2_cc_pane_g5_ParamLimits

0xda36,	// (0x000585ab) list_double_large_graphic_phob2_cc_pane_g5

0x0004,

0xff57,	// (0x0005aacc) list_double_large_graphic_phob2_cc_pane_g_ParamLimits

0xff57,	// (0x0005aacc) list_double_large_graphic_phob2_cc_pane_g

0xda45,	// (0x000585ba) list_double_large_graphic_phob2_cc_pane_t1_ParamLimits

0xda45,	// (0x000585ba) list_double_large_graphic_phob2_cc_pane_t1

0xda6e,	// (0x000585e3) list_double_large_graphic_phob2_cc_pane_t2_ParamLimits

0xda6e,	// (0x000585e3) list_double_large_graphic_phob2_cc_pane_t2

0x0001,

0xff62,	// (0x0005aad7) list_double_large_graphic_phob2_cc_pane_t_ParamLimits

0xff62,	// (0x0005aad7) list_double_large_graphic_phob2_cc_pane_t

0x2a73,	// (0x0004d5e8) list_highlight_pane_cp025_ParamLimits

0x2a73,	// (0x0004d5e8) list_highlight_pane_cp025

0x4b0e,	// (0x0004f683) bg_button_pane_cp033_ParamLimits

0x2a40,	// (0x0004d5b5) phob2_cc_button_pane_g1_ParamLimits

0x2a4c,	// (0x0004d5c1) phob2_cc_button_pane_t1_ParamLimits

0x2a61,	// (0x0004d5d6) phob2_cc_button_pane_t2_ParamLimits

0xff52,	// (0x0005aac7) phob2_cc_button_pane_t_ParamLimits

0x5d7b,	// (0x000508f0) popup_wgtman_window

0x19bf,	// (0x0004c534) scroll_pane_cp038

0xd4b7,	// (0x0005802c) wgtman_btn_pane_cp_01_ParamLimits

0xd4b7,	// (0x0005802c) wgtman_btn_pane_cp_01

0x2a81,	// (0x0004d5f6) wgtman_content_pane

0x2a8a,	// (0x0004d5ff) wgtman_heading_pane

0x2b5c,	// (0x0004d6d1) bg_heading_pane_cp02

0x2a93,	// (0x0004d608) wgtman_heading_pane_g1

0x2a9b,	// (0x0004d610) wgtman_heading_pane_t1

0x2aa9,	// (0x0004d61e) scroll_pane_cp036

0x2ab1,	// (0x0004d626) wgtman_list_pane

0x2ab9,	// (0x0004d62e) wgtman_list_pane_t1_ParamLimits

0x2ab9,	// (0x0004d62e) wgtman_list_pane_t1

0xa752,	// (0x000552c7) cam4_grid_pane

0xb3fb,	// (0x00055f70) bg_button_pane_cp015_ParamLimits

0xb40b,	// (0x00055f80) bg_button_pane_cp016_ParamLimits

0xb41e,	// (0x00055f93) bg_button_pane_cp017_ParamLimits

0xb470,	// (0x00055fe5) popup_vitu2_query_window_g3_ParamLimits

0xb470,	// (0x00055fe5) popup_vitu2_query_window_g3

0xb523,	// (0x00056098) popup_vitu2_query_window_t6_ParamLimits

0xb523,	// (0x00056098) popup_vitu2_query_window_t6

0xb54e,	// (0x000560c3) popup_vitu2_query_window_t7_ParamLimits

0xb54e,	// (0x000560c3) popup_vitu2_query_window_t7

0x0c4d,	// (0x0004b7c2) cam4_grid_pane_g1

0x0c56,	// (0x0004b7cb) cam4_grid_pane_g2

0x2ad0,	// (0x0004d645) cam4_grid_pane_g3

0x2ad9,	// (0x0004d64e) cam4_grid_pane_g4

0x0003,

0xff67,	// (0x0005aadc) cam4_grid_pane_g

0x6ba0,	// (0x00051715) aid_placing_vt_slider_lsc_ParamLimits

0x6e4a,	// (0x000519bf) vidtel_button_pane_ParamLimits

0x6e4a,	// (0x000519bf) vidtel_button_pane

0x2b5c,	// (0x0004d6d1) bg_button_pane_cp034

0xda97,	// (0x0005860c) vidtel_button_pane_g1

0xda9f,	// (0x00058614) vidtel_button_pane_t1

0x0fc5,	// (0x0004bb3a) aid_size_vtel_slider_touch

0x18bc,	// (0x0004c431) scroll_pane_cp039

0x19ee,	// (0x0004c563) ncim_query_button_pane_cp01_ParamLimits

0x1a0d,	// (0x0004c582) ncimui_query_pane_g1_ParamLimits

0x4b0e,	// (0x0004f683) input_focus_pane_cp012_ParamLimits

0x1a32,	// (0x0004c5a7) ncim_query_entry_pane_t1_ParamLimits

0x18bc,	// (0x0004c431) scroll_pane_cp039_ParamLimits

0x3e84,	// (0x0004e9f9) navi_pane_bcale_mc_g1

0x3e8c,	// (0x0004ea01) navi_pane_bcale_mc_t1

0x1ff7,	// (0x0004cb6c) main_sp_fs_email_pane_g1

0x2003,	// (0x0004cb78) main_sp_fs_email_pane_g2

0x0001,

0xfcf8,	// (0x0005a86d) main_sp_fs_email_pane_g

0x2480,	// (0x0004cff5) list_single_cale_mrui_row_pane_g3_ParamLimits

0x2480,	// (0x0004cff5) list_single_cale_mrui_row_pane_g3

0xd0ef,	// (0x00057c64) list_single_recal_day_pane_g5_event_pane

0x25e9,	// (0x0004d15e) list_single_recal_day_pane_g7

0x2ae2,	// (0x0004d657) list_recal_day_event_pane_cp01

0x2aeb,	// (0x0004d660) list_recal_vselct_arw_lo_pane_cp01

0x2af3,	// (0x0004d668) list_recal_vselct_arw_up_pane_cp01

0x2afb,	// (0x0004d670) list_recal_vselct_pane_cp01

0x0fd5,	// (0x0004bb4a) list_recal_day_event_pane_cp01_g1

0x2b05,	// (0x0004d67a) list_recal_day_event_pane_cp01_t1

0x25f1,	// (0x0004d166) list_single_recal_day_pane_t1_ParamLimits

0xd106,	// (0x00057c7b) list_single_recal_day_pane_t2_ParamLimits

0xfe55,	// (0x0005a9ca) list_single_recal_day_pane_t_ParamLimits

0x32db,	// (0x0004de50) bg_notes_pane_ParamLimits

0x337e,	// (0x0004def3) list_notes_pane_ParamLimits

0x6082,	// (0x00050bf7) scroll_pane_cp06_ParamLimits

0x33a4,	// (0x0004df19) main_notes_pane_ParamLimits

0x2b5c,	// (0x0004d6d1) main_welc_pane

0xdab5,	// (0x0005862a) main_welc_body_pane_ParamLimits

0xdab5,	// (0x0005862a) main_welc_body_pane

0xdace,	// (0x00058643) main_welc_opti_pane_ParamLimits

0xdace,	// (0x00058643) main_welc_opti_pane

0xdafb,	// (0x00058670) main_welc_pane_t1_ParamLimits

0xdafb,	// (0x00058670) main_welc_pane_t1

0xdb13,	// (0x00058688) main_welc_body_row_pane_ParamLimits

0xdb13,	// (0x00058688) main_welc_body_row_pane

0x2b13,	// (0x0004d688) main_welc_opti_row_pane_ParamLimits

0x2b13,	// (0x0004d688) main_welc_opti_row_pane

0x2b21,	// (0x0004d696) main_welc_opti_row_pane_g1

0xdb28,	// (0x0005869d) main_welc_opti_row_pane_t1

0x2b29,	// (0x0004d69e) main_welc_body_row_pane_t1

0x2830,	// (0x0004d3a5) popup_notif_wgt_heading_pane

0x284a,	// (0x0004d3bf) aid_size_list_notif_wgt_del_ParamLimits

0x2857,	// (0x0004d3cc) list_notif_wgt_row_pane_g1_ParamLimits

0x2863,	// (0x0004d3d8) list_notif_wgt_row_pane_g2_ParamLimits

0x2877,	// (0x0004d3ec) list_notif_wgt_row_pane_g3_ParamLimits

0xfebc,	// (0x0005aa31) list_notif_wgt_row_pane_g_ParamLimits

0x2884,	// (0x0004d3f9) list_notif_wgt_row_pane_t1_ParamLimits

0x289a,	// (0x0004d40f) list_notif_wgt_row_pane_t2_ParamLimits

0x28ac,	// (0x0004d421) list_notif_wgt_row_pane_t3_ParamLimits

0xfec3,	// (0x0005aa38) list_notif_wgt_row_pane_t_ParamLimits

0xd53f,	// (0x000580b4) listrow_wgtman_pane_g1_ParamLimits

0xd54c,	// (0x000580c1) listrow_wgtman_pane_g2_ParamLimits

0xfeec,	// (0x0005aa61) listrow_wgtman_pane_g_ParamLimits

0xd564,	// (0x000580d9) listrow_wgtman_pane_t1_ParamLimits

0xd57c,	// (0x000580f1) listrow_wgtman_pane_t2_ParamLimits

0xfef1,	// (0x0005aa66) listrow_wgtman_pane_t_ParamLimits

0xd5a2,	// (0x00058117) wait_bar_pane_cp09_ParamLimits

0x2b5c,	// (0x0004d6d1) bg_popup_heading_pane_cp02

0x2b38,	// (0x0004d6ad) popup_notif_wgt_heading_pane_g1

0x2b40,	// (0x0004d6b5) popup_notif_wgt_heading_pane_t1

0xe394,	// (0x00058f09) main_vids_pane

0x2b5c,	// (0x0004d6d1) vids_listscroll_pane

0xdb37,	// (0x000586ac) scroll_pane_cp040

0x2b5c,	// (0x0004d6d1) vids_list_pane

0xdb40,	// (0x000586b5) vids_list_double_pane_ParamLimits

0xdb40,	// (0x000586b5) vids_list_double_pane

0xdb51,	// (0x000586c6) vids_list_double_pane_g1

0xdb5a,	// (0x000586cf) vids_list_double_pane_t1

0xdb6a,	// (0x000586df) vids_list_double_pane_t2

0x0001,

0xff75,	// (0x0005aaea) vids_list_double_pane_t

0x8a0d,	// (0x00053582) main_ncimui_pane_ParamLimits

0xc004,	// (0x00056b79) main_ncimui_pane_g1_ParamLimits

0xc010,	// (0x00056b85) main_ncimui_pane_g2_ParamLimits

0xc010,	// (0x00056b85) main_ncimui_pane_g2

0x0001,

0xfbfd,	// (0x0005a772) main_ncimui_pane_g_ParamLimits

0xfbfd,	// (0x0005a772) main_ncimui_pane_g

0xdae3,	// (0x00058658) main_welc_pane_g1_ParamLimits

0xdae3,	// (0x00058658) main_welc_pane_g1

0xdaef,	// (0x00058664) main_welc_pane_g2_ParamLimits

0xdaef,	// (0x00058664) main_welc_pane_g2

0x0001,

0xff70,	// (0x0005aae5) main_welc_pane_g_ParamLimits

0xff70,	// (0x0005aae5) main_welc_pane_g

0x32db,	// (0x0004de50) listscroll_mce_pane_ParamLimits

0x7ea6,	// (0x00052a1b) wait_bar_pane_cp10

0xe37a,	// (0x00058eef) main_cale_day_pane_ParamLimits

0xe37a,	// (0x00058eef) main_cale_week_pane_ParamLimits

0x32db,	// (0x0004de50) main_messa_pane_ParamLimits

0x9be2,	// (0x00054757) main_clock2_btn_pane_ParamLimits

0x9be2,	// (0x00054757) main_clock2_btn_pane

0xeb4f,	// (0x000596c4) main_clock2_btn_pane_cp01_ParamLimits

0xeb4f,	// (0x000596c4) main_clock2_btn_pane_cp01

0x243b,	// (0x0004cfb0) list_cale_mrui_pane_ParamLimits

0x28e0,	// (0x0004d455) main_cf0_pane_g2

0x0001,

0xfeca,	// (0x0005aa3f) main_cf0_pane_g

0xd707,	// (0x0005827c) area_left_week_number_pane_ParamLimits

0xd718,	// (0x0005828d) area_top_day_name_pane_ParamLimits

0xd724,	// (0x00058299) frame_month_view_pane_ParamLimits

0x29e9,	// (0x0004d55e) grid_month_view_pane_ParamLimits

0x29f7,	// (0x0004d56c) frm_month_g1_ParamLimits

0xd790,	// (0x00058305) frm_month_g2_ParamLimits

0xd79f,	// (0x00058314) frm_month_g3_ParamLimits

0xd7ae,	// (0x00058323) frm_month_g4_ParamLimits

0xd7bd,	// (0x00058332) frm_month_g5_ParamLimits

0xd7cc,	// (0x00058341) frm_month_g6_ParamLimits

0xd7db,	// (0x00058350) frm_month_g7_ParamLimits

0x2a04,	// (0x0004d579) frm_month_g8_ParamLimits

0xd7ea,	// (0x0005835f) frm_month_g9_ParamLimits

0xd7f7,	// (0x0005836c) frm_month_g10_ParamLimits

0xd804,	// (0x00058379) frm_month_g11_ParamLimits

0xd811,	// (0x00058386) frm_month_g12_ParamLimits

0xd81e,	// (0x00058393) frm_month_g13_ParamLimits

0xd82b,	// (0x000583a0) frm_month_g14_ParamLimits

0xd838,	// (0x000583ad) frm_month_g15_ParamLimits

0xd845,	// (0x000583ba) frm_month_g16_ParamLimits

0xff1b,	// (0x0005aa90) frm_month_g_ParamLimits

0x2a11,	// (0x0004d586) cell_top_day_name_pane_t1_ParamLimits

0xd852,	// (0x000583c7) cell_area_left_week_number_pane_g1_ParamLimits

0xd861,	// (0x000583d6) cell_area_left_week_number_pane_t1_ParamLimits

0xe9c7,	// (0x0005953c) cell_month_view_pane_g1_ParamLimits

0xd877,	// (0x000583ec) cell_month_view_pane_t1_ParamLimits

0x32d3,	// (0x0004de48) main_clock2_btn_pane_g1

0x2b4e,	// (0x0004d6c3) main_clock2_btn_pane_t1

0x4b0e,	// (0x0004f683) listscroll_cmail_pane_ParamLimits

0x1ff7,	// (0x0004cb6c) main_sp_fs_email_pane_g1_ParamLimits

0x2003,	// (0x0004cb78) main_sp_fs_email_pane_g2_ParamLimits

0xfcf8,	// (0x0005a86d) main_sp_fs_email_pane_g_ParamLimits

0x2565,	// (0x0004d0da) list_recal_day_pane_ParamLimits

0x2576,	// (0x0004d0eb) mian_recal_day_pane_t1

0xc901,	// (0x00057476) list_single_dyc_row_text_pane_t4_ParamLimits

0xc901,	// (0x00057476) list_single_dyc_row_text_pane_t4

0xc938,	// (0x000574ad) list_single_dyc_row_text_pane_t5_ParamLimits

0xc938,	// (0x000574ad) list_single_dyc_row_text_pane_t5

0x20b5,	// (0x0004cc2a) list_single_dyc_row_text_pane_t6_ParamLimits

0x20b5,	// (0x0004cc2a) list_single_dyc_row_text_pane_t6

0x7a6b,	// (0x000525e0) aid_mgn_list_cale_time_pane

0x8a0d,	// (0x00053582) main_gallery2_pane_ParamLimits

0xeb63,	// (0x000596d8) main_clock2_pane_cp01_t1

0xeb71,	// (0x000596e6) main_clock2_pane_cp01_t3

0x0001,

0xf7d3,	// (0x0005a348) main_clock2_pane_cp01_t

0x644a,	// (0x00050fbf) cale_week_scroll_pane_g16_ParamLimits

0x644a,	// (0x00050fbf) cale_week_scroll_pane_g16

0x3573,	// (0x0004e0e8) vorec_slider_pane

0xda9f,	// (0x00058614) vidtel_button_pane_t1_ParamLimits

0xea2c,	// (0x000595a1) main_fs_bigclock_clock_pane_g1_ParamLimits

0xd19f,	// (0x00057d14) main_fs_bigclock_clock_pane_g2_ParamLimits

0xd1ac,	// (0x00057d21) main_fs_bigclock_clock_pane_g3_ParamLimits

0xd1ac,	// (0x00057d21) main_fs_bigclock_clock_pane_g4_ParamLimits

0xfe78,	// (0x0005a9ed) main_fs_bigclock_clock_pane_g_ParamLimits

0xd1b8,	// (0x00057d2d) main_fs_bigclock_clock_pane_t1_ParamLimits

0xd1ca,	// (0x00057d3f) main_fs_bigclock_clock_pane_t2_ParamLimits

0xfe81,	// (0x0005a9f6) main_fs_bigclock_clock_pane_t_ParamLimits

0x950e,	// (0x00054083) main_mup3_lyrics_pane_ParamLimits

0x950e,	// (0x00054083) main_mup3_lyrics_pane

0xdb9c,	// (0x00058711) main_mup3_lyrics_pane_t1_ParamLimits

0xdb9c,	// (0x00058711) main_mup3_lyrics_pane_t1

0xa1b0,	// (0x00054d25) aid_main_mp4_pane_t1_area

0xa1b0,	// (0x00054d25) aid_main_mp4_pane_t2_area

0xa29b,	// (0x00054e10) main_mp4_pane_g7_ParamLimits

0xa29b,	// (0x00054e10) main_mp4_pane_g7

0xa2a7,	// (0x00054e1c) main_mp4_pane_g8_ParamLimits

0xa2a7,	// (0x00054e1c) main_mp4_pane_g8

0xa66a,	// (0x000551df) aid_call6_pane_g1_size

0xd9da,	// (0x0005854f) list_double_large_graphic_phob2_other_pane_ParamLimits

0xd9da,	// (0x0005854f) list_double_large_graphic_phob2_other_pane

0x3dd7,	// (0x0004e94c) list_double_large_graphic_phob2_other_pane_g1

0x2b5c,	// (0x0004d6d1) list_highlight_pane_cp026
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
	};

} // end of namespace AknLayoutScalable_Abrw_pqp_apps_qvga_prt_Small
