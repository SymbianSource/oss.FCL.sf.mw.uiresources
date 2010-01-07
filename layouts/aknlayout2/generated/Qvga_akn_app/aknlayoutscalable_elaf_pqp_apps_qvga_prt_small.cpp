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

#include "aknlayoutscalable_elaf_pqp_apps_qvga_prt_small.h"
#include "AknLayout2ScalableDecode.h"
namespace AknLayoutScalable_Apps { extern const TUint8 KByteCodedData_AknLayoutScalable_Elaf_pqp_apps_qvga_prt[]; }

namespace AknLayoutScalable_Elaf_pqp_apps_qvga_prt_Small
{

extern const TUint16 KDataLookup[AknLayoutScalable_Apps::E_TApiId_TableSize];
const SCompDataImplData KImplData = { KDataLookup, AknLayoutScalable_Apps::KByteCodedData_AknLayoutScalable_Elaf_pqp_apps_qvga_prt + 0x0002b811 };

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
0x7494,	// (0x00032ca5) Screen

0x749e,	// (0x00032caf) application_window

0x74d0,	// (0x00032ce1) area_bottom_pane_ParamLimits

0x74d0,	// (0x00032ce1) area_bottom_pane

0x74ff,	// (0x00032d10) area_top_pane_ParamLimits

0x74ff,	// (0x00032d10) area_top_pane

0xe646,	// (0x00039e57) call_video_uplink_pane_ParamLimits

0xe646,	// (0x00039e57) call_video_uplink_pane

0x7582,	// (0x00032d93) main_pane_ParamLimits

0x7582,	// (0x00032d93) main_pane

0x2e1a,	// (0x0002e62b) context_pane

0x9d73,	// (0x00035584) navi_pane

0x9d8d,	// (0x0003559e) popup_cale_events_window_ParamLimits

0x9d8d,	// (0x0003559e) popup_cale_events_window

0x2e2d,	// (0x0002e63e) popup_mup_playback_window

0x9da4,	// (0x000355b5) signal_pane

0xed9d,	// (0x0003a5ae) main_browser_pane

0x18db,	// (0x0002d0ec) main_burst_pane

0x76a9,	// (0x00032eba) main_calc_pane

0x18db,	// (0x0002d0ec) main_cale_day_pane

0xeec5,	// (0x0003a6d6) main_cale_month_pane

0x18db,	// (0x0002d0ec) main_cale_week_pane

0x18db,	// (0x0002d0ec) main_call_pane

0xea73,	// (0x0003a284) main_call_poc_pane

0x18db,	// (0x0002d0ec) main_camera_pane

0x18db,	// (0x0002d0ec) main_chi_dic_pane

0x16da,	// (0x0002ceeb) main_clock_pane

0xea73,	// (0x0003a284) main_fmradio_pane

0x18db,	// (0x0002d0ec) main_graph_messa_pane

0xea73,	// (0x0003a284) main_help_pane

0xed9d,	// (0x0003a5ae) main_im_pane

0xecce,	// (0x0003a4df) main_image_pane_ParamLimits

0xecce,	// (0x0003a4df) main_image_pane

0xea73,	// (0x0003a284) main_location2_pane

0x18db,	// (0x0002d0ec) main_location_pane

0xea73,	// (0x0003a284) main_messa_pane

0xea73,	// (0x0003a284) main_mp2_pane

0x18db,	// (0x0002d0ec) main_mp_pane

0xea73,	// (0x0003a284) main_msg_pane

0xea73,	// (0x0003a284) main_mup_eq_pane

0xea73,	// (0x0003a284) main_mup_pane

0x18db,	// (0x0002d0ec) main_notes_pane

0xea73,	// (0x0003a284) main_pec_pane

0xea73,	// (0x0003a284) main_phob_pane

0xea73,	// (0x0003a284) main_pinb_pane

0xea73,	// (0x0003a284) main_postcard_pane

0xea73,	// (0x0003a284) main_qdial_pane

0x18db,	// (0x0002d0ec) main_skin_pane

0xea73,	// (0x0003a284) main_smil2_pane

0x18db,	// (0x0002d0ec) main_smil_pane

0x18db,	// (0x0002d0ec) main_video_pane

0x18db,	// (0x0002d0ec) main_video_tele_pane

0xecce,	// (0x0003a4df) main_viewer_pane_ParamLimits

0xecce,	// (0x0003a4df) main_viewer_pane

0x18db,	// (0x0002d0ec) main_vorec_pane

0x9ca5,	// (0x000354b6) popup_blid_sat_info_window_ParamLimits

0x9ca5,	// (0x000354b6) popup_blid_sat_info_window

0x9cb9,	// (0x000354ca) popup_dyc_status_message_window_ParamLimits

0x9cb9,	// (0x000354ca) popup_dyc_status_message_window

0x9cc5,	// (0x000354d6) popup_grid_large_graphic_window_ParamLimits

0x9cc5,	// (0x000354d6) popup_grid_large_graphic_window

0x9d1d,	// (0x0003552e) popup_loc_request_window_ParamLimits

0x9d1d,	// (0x0003552e) popup_loc_request_window

0x9d4d,	// (0x0003555e) popup_wml_address_window_ParamLimits

0x9d4d,	// (0x0003555e) popup_wml_address_window

0x9b8a,	// (0x0003539b) call_muted_g1

0x98c5,	// (0x000350d6) popup_call_audio_conf_window_ParamLimits

0x98c5,	// (0x000350d6) popup_call_audio_conf_window

0x9b9a,	// (0x000353ab) popup_call_audio_first_window_ParamLimits

0x9b9a,	// (0x000353ab) popup_call_audio_first_window

0x9bce,	// (0x000353df) popup_call_audio_in_window_ParamLimits

0x9bce,	// (0x000353df) popup_call_audio_in_window

0x9bea,	// (0x000353fb) popup_call_audio_out_window_ParamLimits

0x9bea,	// (0x000353fb) popup_call_audio_out_window

0x9c06,	// (0x00035417) popup_call_audio_second_window_ParamLimits

0x9c06,	// (0x00035417) popup_call_audio_second_window

0x9c2e,	// (0x0003543f) popup_call_audio_wait_window_ParamLimits

0x9c2e,	// (0x0003543f) popup_call_audio_wait_window

0x9c4d,	// (0x0003545e) popup_number_entry_window_ParamLimits

0x9c4d,	// (0x0003545e) popup_number_entry_window

0xe662,	// (0x00039e73) bg_popup_call_pane_cp05_ParamLimits

0xe662,	// (0x00039e73) bg_popup_call_pane_cp05

0xe682,	// (0x00039e93) popup_number_entry_window_t1

0xe695,	// (0x00039ea6) popup_number_entry_window_t2

0xe6a7,	// (0x00039eb8) popup_number_entry_window_t3

0x0003,

0xf0fb,	// (0x0003a90c) popup_number_entry_window_t

0xe6b9,	// (0x00039eca) text_title_cp2

0xe6cc,	// (0x00039edd) bg_popup_call_pane_cp_ParamLimits

0xe6cc,	// (0x00039edd) bg_popup_call_pane_cp

0xe6da,	// (0x00039eeb) call_thumbnail_pane

0xe6e2,	// (0x00039ef3) popup_call_audio_in_window_g1_ParamLimits

0xe6e2,	// (0x00039ef3) popup_call_audio_in_window_g1

0xe6ee,	// (0x00039eff) popup_call_audio_in_window_g2_ParamLimits

0xe6ee,	// (0x00039eff) popup_call_audio_in_window_g2

0xe6fa,	// (0x00039f0b) popup_call_audio_in_window_g3_ParamLimits

0xe6fa,	// (0x00039f0b) popup_call_audio_in_window_g3

0x0002,

0xf104,	// (0x0003a915) popup_call_audio_in_window_g_ParamLimits

0xf104,	// (0x0003a915) popup_call_audio_in_window_g

0xe706,	// (0x00039f17) popup_call_audio_in_window_t1_ParamLimits

0xe706,	// (0x00039f17) popup_call_audio_in_window_t1

0xe721,	// (0x00039f32) popup_call_audio_in_window_t2_ParamLimits

0xe721,	// (0x00039f32) popup_call_audio_in_window_t2

0xe73c,	// (0x00039f4d) popup_call_audio_in_window_t3_ParamLimits

0xe73c,	// (0x00039f4d) popup_call_audio_in_window_t3

0x0002,

0xf10b,	// (0x0003a91c) popup_call_audio_in_window_t_ParamLimits

0xf10b,	// (0x0003a91c) popup_call_audio_in_window_t

0xe6cc,	// (0x00039edd) bg_popup_call_pane_cp01_ParamLimits

0xe6cc,	// (0x00039edd) bg_popup_call_pane_cp01

0xe6da,	// (0x00039eeb) call_thumbnail_pane_cp02

0xe74f,	// (0x00039f60) call_type_pane_cp022

0xe757,	// (0x00039f68) popup_call_audio_out_window_g1_ParamLimits

0xe757,	// (0x00039f68) popup_call_audio_out_window_g1

0xe769,	// (0x00039f7a) popup_call_audio_out_window_g2_ParamLimits

0xe769,	// (0x00039f7a) popup_call_audio_out_window_g2

0xe775,	// (0x00039f86) popup_call_audio_out_window_g3_ParamLimits

0xe775,	// (0x00039f86) popup_call_audio_out_window_g3

0x0002,

0xf112,	// (0x0003a923) popup_call_audio_out_window_g_ParamLimits

0xf112,	// (0x0003a923) popup_call_audio_out_window_g

0xe787,	// (0x00039f98) popup_call_audio_out_window_t1_ParamLimits

0xe787,	// (0x00039f98) popup_call_audio_out_window_t1

0xe79f,	// (0x00039fb0) popup_call_audio_out_window_t2_ParamLimits

0xe79f,	// (0x00039fb0) popup_call_audio_out_window_t2

0x0001,

0xf119,	// (0x0003a92a) popup_call_audio_out_window_t_ParamLimits

0xf119,	// (0x0003a92a) popup_call_audio_out_window_t

0xe7b4,	// (0x00039fc5) bg_popup_call_pane_ParamLimits

0xe7b4,	// (0x00039fc5) bg_popup_call_pane

0x7741,	// (0x00032f52) call_thumbnail_pane_cp_ParamLimits

0x7741,	// (0x00032f52) call_thumbnail_pane_cp

0xe838,	// (0x0003a049) call_type_pane_cp01_ParamLimits

0xe838,	// (0x0003a049) call_type_pane_cp01

0xe87c,	// (0x0003a08d) popup_call_audio_first_window_g1_ParamLimits

0xe87c,	// (0x0003a08d) popup_call_audio_first_window_g1

0xe8c8,	// (0x0003a0d9) popup_call_audio_first_window_g2_ParamLimits

0xe8c8,	// (0x0003a0d9) popup_call_audio_first_window_g2

0x0001,

0xf11e,	// (0x0003a92f) popup_call_audio_first_window_g_ParamLimits

0xf11e,	// (0x0003a92f) popup_call_audio_first_window_g

0xe90c,	// (0x0003a11d) popup_call_audio_first_window_t1_ParamLimits

0xe90c,	// (0x0003a11d) popup_call_audio_first_window_t1

0xe9b8,	// (0x0003a1c9) popup_call_audio_first_window_t4_ParamLimits

0xe9b8,	// (0x0003a1c9) popup_call_audio_first_window_t4

0xea44,	// (0x0003a255) popup_call_audio_first_window_t5_ParamLimits

0xea44,	// (0x0003a255) popup_call_audio_first_window_t5

0x0002,

0xf123,	// (0x0003a934) popup_call_audio_first_window_t_ParamLimits

0xf123,	// (0x0003a934) popup_call_audio_first_window_t

0xea73,	// (0x0003a284) bg_popup_call_pane_cp02

0xea7d,	// (0x0003a28e) call_type_pane_cp023

0xea85,	// (0x0003a296) popup_call_audio_wait_window_g1

0xea8d,	// (0x0003a29e) popup_call_audio_wait_window_g2

0x0001,

0xf12a,	// (0x0003a93b) popup_call_audio_wait_window_g

0xea95,	// (0x0003a2a6) popup_call_audio_wait_window_t3

0xeaa3,	// (0x0003a2b4) bg_popup_call_pane_cp03_ParamLimits

0xeaa3,	// (0x0003a2b4) bg_popup_call_pane_cp03

0xeb03,	// (0x0003a314) call_thumbnail_pane_cp011_ParamLimits

0xeb03,	// (0x0003a314) call_thumbnail_pane_cp011

0xeb0f,	// (0x0003a320) call_type_pane_cp034_ParamLimits

0xeb0f,	// (0x0003a320) call_type_pane_cp034

0xeb4b,	// (0x0003a35c) popup_call_audio_second_window_g1_ParamLimits

0xeb4b,	// (0x0003a35c) popup_call_audio_second_window_g1

0xeb87,	// (0x0003a398) popup_call_audio_second_window_g2_ParamLimits

0xeb87,	// (0x0003a398) popup_call_audio_second_window_g2

0x0001,

0xf12f,	// (0x0003a940) popup_call_audio_second_window_g_ParamLimits

0xf12f,	// (0x0003a940) popup_call_audio_second_window_g

0xebc3,	// (0x0003a3d4) popup_call_audio_second_window_t1_ParamLimits

0xebc3,	// (0x0003a3d4) popup_call_audio_second_window_t1

0xec44,	// (0x0003a455) popup_call_audio_second_window_t2_ParamLimits

0xec44,	// (0x0003a455) popup_call_audio_second_window_t2

0xec7a,	// (0x0003a48b) popup_call_audio_second_window_t3_ParamLimits

0xec7a,	// (0x0003a48b) popup_call_audio_second_window_t3

0x0002,

0xf134,	// (0x0003a945) popup_call_audio_second_window_t_ParamLimits

0xf134,	// (0x0003a945) popup_call_audio_second_window_t

0xea73,	// (0x0003a284) bg_popup_call_pane_cp04

0xecb0,	// (0x0003a4c1) list_conf_pane

0xecb8,	// (0x0003a4c9) popup_call_audio_conf_window_t1

0xecc6,	// (0x0003a4d7) call_thumbnail_pane_g1

0xecce,	// (0x0003a4df) bg_pinb_pane_ParamLimits

0xecce,	// (0x0003a4df) bg_pinb_pane

0xecdc,	// (0x0003a4ed) find_pinb_pane

0xece5,	// (0x0003a4f6) listscroll_pinb_pane_ParamLimits

0xece5,	// (0x0003a4f6) listscroll_pinb_pane

0xecf4,	// (0x0003a505) pinb_bg_pane_g1

0x7765,	// (0x00032f76) pinb_bg_pane_g2

0x776f,	// (0x00032f80) pinb_bg_pane_g3

0x7779,	// (0x00032f8a) pinb_bg_pane_g4

0x7783,	// (0x00032f94) pinb_bg_pane_g5

0x778d,	// (0x00032f9e) pinb_bg_pane_g6

0x7798,	// (0x00032fa9) pinb_bg_pane_g7

0x77a3,	// (0x00032fb4) pinb_bg_pane_g8

0x77ac,	// (0x00032fbd) pinb_bg_pane_g9

0x77b4,	// (0x00032fc5) pinb_bg_pane_g10

0x0009,

0xf13b,	// (0x0003a94c) pinb_bg_pane_g

0x77d1,	// (0x00032fe2) grid_pinb_pane

0x77da,	// (0x00032feb) list_pinb_pane

0x77e5,	// (0x00032ff6) scroll_pane_cp01_ParamLimits

0x77e5,	// (0x00032ff6) scroll_pane_cp01

0xecfe,	// (0x0003a50f) find_pinb_pane_g1_ParamLimits

0xecfe,	// (0x0003a50f) find_pinb_pane_g1

0xed16,	// (0x0003a527) find_pinb_pane_t1

0xed28,	// (0x0003a539) find_pinb_pane_t2

0x0001,

0xf155,	// (0x0003a966) find_pinb_pane_t

0xed3d,	// (0x0003a54e) input_focus_pane_cp01_ParamLimits

0xed3d,	// (0x0003a54e) input_focus_pane_cp01

0x77f5,	// (0x00033006) cell_pinb_pane_ParamLimits

0x77f5,	// (0x00033006) cell_pinb_pane

0x780e,	// (0x0003301f) cell_pinb_pane_g1_ParamLimits

0x780e,	// (0x0003301f) cell_pinb_pane_g1

0x7822,	// (0x00033033) cell_pinb_pane_g2_ParamLimits

0x7822,	// (0x00033033) cell_pinb_pane_g2

0xed49,	// (0x0003a55a) cell_pinb_pane_g3_ParamLimits

0xed49,	// (0x0003a55a) cell_pinb_pane_g3

0x0002,

0xf15a,	// (0x0003a96b) cell_pinb_pane_g_ParamLimits

0xf15a,	// (0x0003a96b) cell_pinb_pane_g

0xea73,	// (0x0003a284) grid_highlight_pane_cp01

0x782e,	// (0x0003303f) list_pinb_item_pane_ParamLimits

0x782e,	// (0x0003303f) list_pinb_item_pane

0xea73,	// (0x0003a284) list_highlight_pane_cp02

0x7843,	// (0x00033054) list_pinb_item_pane_g1_ParamLimits

0x7843,	// (0x00033054) list_pinb_item_pane_g1

0x7850,	// (0x00033061) list_pinb_item_pane_g2_ParamLimits

0x7850,	// (0x00033061) list_pinb_item_pane_g2

0x785c,	// (0x0003306d) list_pinb_item_pane_g3_ParamLimits

0x785c,	// (0x0003306d) list_pinb_item_pane_g3

0x786b,	// (0x0003307c) list_pinb_item_pane_g4_ParamLimits

0x786b,	// (0x0003307c) list_pinb_item_pane_g4

0x0003,

0xf161,	// (0x0003a972) list_pinb_item_pane_g_ParamLimits

0xf161,	// (0x0003a972) list_pinb_item_pane_g

0x7877,	// (0x00033088) list_pinb_item_pane_t1_ParamLimits

0x7877,	// (0x00033088) list_pinb_item_pane_t1

0x78a8,	// (0x000330b9) calc_display_pane

0x78c0,	// (0x000330d1) calc_paper_pane

0x78dc,	// (0x000330ed) grid_calc_pane

0xea73,	// (0x0003a284) bg_list_pane_cp01

0x78fc,	// (0x0003310d) clock_g1

0x7904,	// (0x00033115) clock_g2

0x0001,

0xf16a,	// (0x0003a97b) clock_g

0x790c,	// (0x0003311d) clock_t1_ParamLimits

0x790c,	// (0x0003311d) clock_t1

0x7921,	// (0x00033132) clock_t2_ParamLimits

0x7921,	// (0x00033132) clock_t2

0x7933,	// (0x00033144) clock_t3_ParamLimits

0x7933,	// (0x00033144) clock_t3

0x7945,	// (0x00033156) clock_t4_ParamLimits

0x7945,	// (0x00033156) clock_t4

0x7957,	// (0x00033168) clock_t5_ParamLimits

0x7957,	// (0x00033168) clock_t5

0x796c,	// (0x0003317d) clock_t6_ParamLimits

0x796c,	// (0x0003317d) clock_t6

0x797e,	// (0x0003318f) clock_t7_ParamLimits

0x797e,	// (0x0003318f) clock_t7

0x7990,	// (0x000331a1) clock_t8_ParamLimits

0x7990,	// (0x000331a1) clock_t8

0x79a2,	// (0x000331b3) clock_t9_ParamLimits

0x79a2,	// (0x000331b3) clock_t9

0x0008,

0xf16f,	// (0x0003a980) clock_t_ParamLimits

0xf16f,	// (0x0003a980) clock_t

0xed55,	// (0x0003a566) popup_clock_analogue_window_cp02

0xed55,	// (0x0003a566) popup_clock_digital_window_cp01

0xed5d,	// (0x0003a56e) listscroll_help_pane

0xea73,	// (0x0003a284) phob_pre_status_pane

0xed67,	// (0x0003a578) grid_qdial_pane

0xea73,	// (0x0003a284) listscroll_mce_pane

0xed71,	// (0x0003a582) bg_notes_pane

0xed7b,	// (0x0003a58c) list_notes_pane

0x79b4,	// (0x000331c5) scroll_pane_cp06

0xed85,	// (0x0003a596) bg_calc_paper_pane

0x79bd,	// (0x000331ce) list_calc_pane

0xed9d,	// (0x0003a5ae) bg_calc_display_pane

0x79d7,	// (0x000331e8) calc_display_pane_t1

0x79ec,	// (0x000331fd) calc_display_pane_t2

0x7a01,	// (0x00033212) calc_display_pane_t3

0x0002,

0xf182,	// (0x0003a993) calc_display_pane_t

0x7a13,	// (0x00033224) cell_calc_pane_ParamLimits

0x7a13,	// (0x00033224) cell_calc_pane

0xeda9,	// (0x0003a5ba) bg_calc_paper_pane_g1

0xedb5,	// (0x0003a5c6) bg_calc_paper_pane_g2

0xedc1,	// (0x0003a5d2) bg_calc_paper_pane_g3

0xedcd,	// (0x0003a5de) bg_calc_paper_pane_g4

0xedd9,	// (0x0003a5ea) bg_calc_paper_pane_g5

0x7a3a,	// (0x0003324b) bg_calc_paper_pane_g6

0x7a49,	// (0x0003325a) bg_calc_paper_pane_g7

0x7a58,	// (0x00033269) bg_calc_paper_pane_g8

0x0007,

0xf189,	// (0x0003a99a) bg_calc_paper_pane_g

0x7a67,	// (0x00033278) calc_bg_paper_pane_g9

0x7a76,	// (0x00033287) list_calc_item_pane_ParamLimits

0x7a76,	// (0x00033287) list_calc_item_pane

0xede5,	// (0x0003a5f6) list_calc_item_pane_g1

0x7a8f,	// (0x000332a0) list_calc_item_pane_t1_ParamLimits

0x7a8f,	// (0x000332a0) list_calc_item_pane_t1

0x7aa1,	// (0x000332b2) list_calc_item_pane_t2_ParamLimits

0x7aa1,	// (0x000332b2) list_calc_item_pane_t2

0x0001,

0xf19a,	// (0x0003a9ab) list_calc_item_pane_t_ParamLimits

0xf19a,	// (0x0003a9ab) list_calc_item_pane_t

0xedf2,	// (0x0003a603) cell_calc_pane_g1

0xedfc,	// (0x0003a60d) grid_highlight_pane_cp02

0xee1e,	// (0x0003a62f) bg_calc_display_pane_g1

0x7acf,	// (0x000332e0) bg_calc_display_pane_g2

0xee27,	// (0x0003a638) bg_calc_display_pane_g3

0x0002,

0xf1a4,	// (0x0003a9b5) bg_calc_display_pane_g

0x7ad9,	// (0x000332ea) cell_qdial_pane_ParamLimits

0x7ad9,	// (0x000332ea) cell_qdial_pane

0x7aeb,	// (0x000332fc) cell_qdial_pane_g1_ParamLimits

0x7aeb,	// (0x000332fc) cell_qdial_pane_g1

0x7af8,	// (0x00033309) cell_qdial_pane_g2_ParamLimits

0x7af8,	// (0x00033309) cell_qdial_pane_g2

0xee30,	// (0x0003a641) cell_qdial_pane_g3_ParamLimits

0xee30,	// (0x0003a641) cell_qdial_pane_g3

0x0003,

0xf1ab,	// (0x0003a9bc) cell_qdial_pane_g_ParamLimits

0xf1ab,	// (0x0003a9bc) cell_qdial_pane_g

0x7b16,	// (0x00033327) cell_qdial_pane_t1_ParamLimits

0x7b16,	// (0x00033327) cell_qdial_pane_t1

0x7b2e,	// (0x0003333f) cell_qdial_pane_t2_ParamLimits

0x7b2e,	// (0x0003333f) cell_qdial_pane_t2

0x7b41,	// (0x00033352) cell_qdial_pane_t3_ParamLimits

0x7b41,	// (0x00033352) cell_qdial_pane_t3

0x0002,

0xf1b4,	// (0x0003a9c5) cell_qdial_pane_t_ParamLimits

0xf1b4,	// (0x0003a9c5) cell_qdial_pane_t

0xea73,	// (0x0003a284) grid_highlight_pane_cp04

0xee3c,	// (0x0003a64d) thumbnail_qdial_pane_ParamLimits

0xee3c,	// (0x0003a64d) thumbnail_qdial_pane

0xee98,	// (0x0003a6a9) list_help_pane

0xeea2,	// (0x0003a6b3) scroll_pane_cp02

0x7b54,	// (0x00033365) help_list_pane_t1_ParamLimits

0x7b54,	// (0x00033365) help_list_pane_t1

0x7b72,	// (0x00033383) bg_notes_pane_g2

0x7b7a,	// (0x0003338b) bg_notes_pane_g3

0x7b82,	// (0x00033393) notes_bg_pane_g1

0x7b8a,	// (0x0003339b) notes_bg_pane_g4

0x7b92,	// (0x000333a3) notes_bg_pane_g5

0x7b9a,	// (0x000333ab) notes_bg_pane_g6

0x7ba2,	// (0x000333b3) notes_bg_pane_g7

0x7baa,	// (0x000333bb) notes_bg_pane_g8

0x7bb2,	// (0x000333c3) notes_bg_pane_g9

0x0006,

0xf1d2,	// (0x0003a9e3) notes_bg_pane_g

0x7bba,	// (0x000333cb) list_notes_text_pane_ParamLimits

0x7bba,	// (0x000333cb) list_notes_text_pane

0xeeab,	// (0x0003a6bc) list_notes_text_pane_g1

0x63e8,	// (0x00031bf9) list_notes_text_pane_t1

0xeec5,	// (0x0003a6d6) listscroll_cale_week_pane

0x7beb,	// (0x000333fc) bg_cale_heading_pane

0xeed4,	// (0x0003a6e5) bg_cale_pane_cp01

0x7bff,	// (0x00033410) cale_week_corner_pane

0x7c15,	// (0x00033426) cale_week_day_heading_pane

0x7c29,	// (0x0003343a) cale_week_scroll_pane_g1

0x7c3a,	// (0x0003344b) cale_week_scroll_pane_g2

0x7c4b,	// (0x0003345c) cale_week_scroll_pane_g3

0x7c5c,	// (0x0003346d) cale_week_scroll_pane_g4

0x7c6d,	// (0x0003347e) cale_week_scroll_pane_g5

0x7c7e,	// (0x0003348f) cale_week_scroll_pane_g6

0x7c8f,	// (0x000334a0) cale_week_scroll_pane_g7

0x7ca0,	// (0x000334b1) cale_week_scroll_pane_g8

0x7cb1,	// (0x000334c2) cale_week_scroll_pane_g9

0x7cc2,	// (0x000334d3) cale_week_scroll_pane_g10

0x7cd3,	// (0x000334e4) cale_week_scroll_pane_g11

0x7ce4,	// (0x000334f5) cale_week_scroll_pane_g12

0x7cf5,	// (0x00033506) cale_week_scroll_pane_g13

0x7d06,	// (0x00033517) cale_week_scroll_pane_g14

0x7d17,	// (0x00033528) cale_week_scroll_pane_g15

0x000e,

0xf1e1,	// (0x0003a9f2) cale_week_scroll_pane_g

0x7d28,	// (0x00033539) cale_week_time_pane

0x7d39,	// (0x0003354a) grid_cale_week_pane

0x7d4c,	// (0x0003355d) scroll_pane_cp08

0x7d64,	// (0x00033575) cell_cale_week_pane_ParamLimits

0x7d64,	// (0x00033575) cell_cale_week_pane

0x7da0,	// (0x000335b1) cale_week_day_heading_pane_t1

0x7db9,	// (0x000335ca) cale_week_day_heading_pane_t2

0x7dd2,	// (0x000335e3) cale_week_day_heading_pane_t3

0x7deb,	// (0x000335fc) cale_week_day_heading_pane_t4

0x7e04,	// (0x00033615) cale_week_day_heading_pane_t5

0x7e1d,	// (0x0003362e) cale_week_day_heading_pane_t6

0x7e36,	// (0x00033647) cale_week_day_heading_pane_t7

0x0006,

0xf200,	// (0x0003aa11) cale_week_day_heading_pane_t

0xeeff,	// (0x0003a710) bg_cale_side_pane

0x7e4f,	// (0x00033660) cale_week_time_pane_t1

0x7e7b,	// (0x0003368c) cale_week_time_pane_t2

0x7ea7,	// (0x000336b8) cale_week_time_pane_t3

0x7ed3,	// (0x000336e4) cale_week_time_pane_t4

0x7eff,	// (0x00033710) cale_week_time_pane_t5

0x7f2b,	// (0x0003373c) cale_week_time_pane_t6

0x7f57,	// (0x00033768) cale_week_time_pane_t7

0x7f83,	// (0x00033794) cale_week_time_pane_t8

0x0007,

0xf20f,	// (0x0003aa20) cale_week_time_pane_t

0x7faf,	// (0x000337c0) cell_cale_week_pane_g2

0x7fcb,	// (0x000337dc) cell_cale_week_pane_g3_ParamLimits

0x7fcb,	// (0x000337dc) cell_cale_week_pane_g3

0xef0d,	// (0x0003a71e) grid_highlight_pane_cp07

0xef15,	// (0x0003a726) listscroll_gms_pane

0xef1f,	// (0x0003a730) grid_gms_pane

0xef28,	// (0x0003a739) listscroll_gms_pane_g1

0xef30,	// (0x0003a741) listscroll_gms_pane_g2

0x0001,

0xf220,	// (0x0003aa31) listscroll_gms_pane_g

0x7fe3,	// (0x000337f4) scroll_pane_cp010

0x7fec,	// (0x000337fd) cell_gms_pane_ParamLimits

0x7fec,	// (0x000337fd) cell_gms_pane

0x7ffd,	// (0x0003380e) cell_gms_pane_g1

0xef38,	// (0x0003a749) cell_gms_pane_g2

0xeeab,	// (0x0003a6bc) cell_gms_pane_g3

0xef40,	// (0x0003a751) cell_gms_pane_g4

0x0003,

0xf225,	// (0x0003aa36) cell_gms_pane_g

0xef49,	// (0x0003a75a) grid_highlight_pane_cp09

0x9b38,	// (0x00035349) phob_pre_status_pane_g1

0x9b40,	// (0x00035351) phob_pre_status_pane_g2

0x9b48,	// (0x00035359) phob_pre_status_pane_g3

0x9b50,	// (0x00035361) phob_pre_status_pane_g4

0x0004,

0xf627,	// (0x0003ae38) phob_pre_status_pane_g

0x9b60,	// (0x00035371) phob_pre_status_pane_t1

0x9b6e,	// (0x0003537f) phob_pre_status_pane_t2

0x9b7c,	// (0x0003538d) phob_pre_status_pane_t3

0x0002,

0xf632,	// (0x0003ae43) phob_pre_status_pane_t

0xea73,	// (0x0003a284) bg_list_pane_cp05

0x8005,	// (0x00033816) grid_vorec_pane

0x800d,	// (0x0003381e) vorec_t1

0x801b,	// (0x0003382c) vorec_t2

0x8029,	// (0x0003383a) vorec_t3

0x8037,	// (0x00033848) vorec_t4

0x8045,	// (0x00033856) vorec_t5

0x8053,	// (0x00033864) vorec_t6

0x0006,

0xf22e,	// (0x0003aa3f) vorec_t

0x806f,	// (0x00033880) wait_bar_pane_cp01

0x1cea,	// (0x0002d4fb) cell_vorec_pane_ParamLimits

0x1cea,	// (0x0002d4fb) cell_vorec_pane

0xef51,	// (0x0003a762) cell_vorec_pane_g1

0xea73,	// (0x0003a284) grid_highlight_pane_cp05

0x8083,	// (0x00033894) cams_zoom_pane

0x808f,	// (0x000338a0) image_vga_pane

0x809c,	// (0x000338ad) main_camera_pane_g1

0x80a8,	// (0x000338b9) main_camera_pane_g2

0x80b4,	// (0x000338c5) main_camera_pane_g3

0x80c0,	// (0x000338d1) main_camera_pane_g4

0x80cc,	// (0x000338dd) main_camera_pane_g5

0x80d8,	// (0x000338e9) main_camera_pane_g6

0x80e4,	// (0x000338f5) main_camera_pane_g7

0x0007,

0xf23d,	// (0x0003aa4e) main_camera_pane_g

0x80f0,	// (0x00033901) main_camera_pane_t1

0x8102,	// (0x00033913) main_camera_pane_t2

0x0001,

0xf24e,	// (0x0003aa5f) main_camera_pane_t

0x8126,	// (0x00033937) cams_zoom_pane_cp_ParamLimits

0x8126,	// (0x00033937) cams_zoom_pane_cp

0x814a,	// (0x0003395b) image_cif_pane_ParamLimits

0x814a,	// (0x0003395b) image_cif_pane

0x8164,	// (0x00033975) image_subqcif_pane

0x816c,	// (0x0003397d) main_video_pane_g1_ParamLimits

0x816c,	// (0x0003397d) main_video_pane_g1

0x818c,	// (0x0003399d) main_video_pane_g2_ParamLimits

0x818c,	// (0x0003399d) main_video_pane_g2

0x81ba,	// (0x000339cb) main_video_pane_g3_ParamLimits

0x81ba,	// (0x000339cb) main_video_pane_g3

0x81e3,	// (0x000339f4) main_video_pane_g4_ParamLimits

0x81e3,	// (0x000339f4) main_video_pane_g4

0x820c,	// (0x00033a1d) main_video_pane_g5_ParamLimits

0x820c,	// (0x00033a1d) main_video_pane_g5

0xef67,	// (0x0003a778) main_video_pane_g6_ParamLimits

0xef67,	// (0x0003a778) main_video_pane_g6

0x0006,

0xf253,	// (0x0003aa64) main_video_pane_g_ParamLimits

0xf253,	// (0x0003aa64) main_video_pane_g

0x822e,	// (0x00033a3f) main_video_pane_t1_ParamLimits

0x822e,	// (0x00033a3f) main_video_pane_t1

0xef81,	// (0x0003a792) cams_zoom_pane_g1

0xef8a,	// (0x0003a79b) cams_zoom_pane_g2

0xef93,	// (0x0003a7a4) cams_zoom_pane_g3

0xef9c,	// (0x0003a7ad) cams_zoom_pane_g4

0x0003,

0xf262,	// (0x0003aa73) cams_zoom_pane_g

0x8278,	// (0x00033a89) grid_cams_pane

0x8284,	// (0x00033a95) linegrid_cams_pane

0x8290,	// (0x00033aa1) cell_cams_pane_ParamLimits

0x8290,	// (0x00033aa1) cell_cams_pane

0xefa5,	// (0x0003a7b6) cams_burst_image_pane

0xefad,	// (0x0003a7be) cell_cams_pane_g1

0xea73,	// (0x0003a284) grid_highlight_pane_cp03

0xedf2,	// (0x0003a603) mp_bg_pane_g1

0xea73,	// (0x0003a284) bg_list_pane_cp03

0x2cf6,	// (0x0002e507) bg_mp_pane

0x2cfe,	// (0x0002e50f) grid_mp_pane

0x2d06,	// (0x0002e517) media_player_g1

0x2d0e,	// (0x0002e51f) media_player_t1

0x2d1c,	// (0x0002e52d) media_player_t2

0x2d2a,	// (0x0002e53b) media_player_t3

0x2d38,	// (0x0002e549) media_player_t4

0x2d46,	// (0x0002e557) media_player_t5

0x2d54,	// (0x0002e565) media_player_t6

0x2d62,	// (0x0002e573) media_player_t7

0x0006,

0xf611,	// (0x0003ae22) media_player_t

0x2d70,	// (0x0002e581) wait_bar_pane_cp02

0xf5f6,	// (0x0003ae07) main_usb_pane_t

0x9b2f,	// (0x00035340) cell_mp_pane

0xedf2,	// (0x0003a603) cell_mp_pane_g1

0xea73,	// (0x0003a284) grid_highlight_pane_cp06

0xefb5,	// (0x0003a7c6) grid_skin_colour_pane

0xefbd,	// (0x0003a7ce) list_highlight_pane_cp03

0x82a3,	// (0x00033ab4) skin_g1

0xefc5,	// (0x0003a7d6) skin_t1

0xefd4,	// (0x0003a7e5) skin_t2

0x0001,

0xf297,	// (0x0003aaa8) skin_t

0x82ab,	// (0x00033abc) cell_skin_colour_pane_ParamLimits

0x82ab,	// (0x00033abc) cell_skin_colour_pane

0xefe2,	// (0x0003a7f3) cell_skin_colour_pane_g1

0x82f4,	// (0x00033b05) call_video_g1_ParamLimits

0x82f4,	// (0x00033b05) call_video_g1

0x8300,	// (0x00033b11) call_video_g2_ParamLimits

0x8300,	// (0x00033b11) call_video_g2

0x0001,

0xf29c,	// (0x0003aaad) call_video_g_ParamLimits

0xf29c,	// (0x0003aaad) call_video_g

0x8338,	// (0x00033b49) call_video_uplink_pane_cp1_ParamLimits

0x8338,	// (0x00033b49) call_video_uplink_pane_cp1

0xeffc,	// (0x0003a80d) call_video_uplink_pane_cp2

0x83c7,	// (0x00033bd8) video_down_crop_pane_ParamLimits

0x83c7,	// (0x00033bd8) video_down_crop_pane

0x847d,	// (0x00033c8e) video_down_pane_ParamLimits

0x847d,	// (0x00033c8e) video_down_pane

0xf004,	// (0x0003a815) video_down_subqcif_pane_ParamLimits

0xf004,	// (0x0003a815) video_down_subqcif_pane

0xf01c,	// (0x0003a82d) video_down_subqcif_pane_cp_ParamLimits

0xf01c,	// (0x0003a82d) video_down_subqcif_pane_cp

0xf040,	// (0x0003a851) im_reading_pane_ParamLimits

0xf040,	// (0x0003a851) im_reading_pane

0x851b,	// (0x00033d2c) im_writing_pane_ParamLimits

0x851b,	// (0x00033d2c) im_writing_pane

0x8531,	// (0x00033d42) im_reading_pane_t1

0xf05a,	// (0x0003a86b) list_im_pane

0xf06b,	// (0x0003a87c) scroll_pane_cp07

0x8569,	// (0x00033d7a) im_writing_pane_t1_ParamLimits

0x8569,	// (0x00033d7a) im_writing_pane_t1

0xf084,	// (0x0003a895) im_writing_pane_t2_ParamLimits

0xf084,	// (0x0003a895) im_writing_pane_t2

0x0001,

0xf2a6,	// (0x0003aab7) im_writing_pane_t_ParamLimits

0xf2a6,	// (0x0003aab7) im_writing_pane_t

0xea73,	// (0x0003a284) input_focus_pane_cp04

0xea73,	// (0x0003a284) input_focus_pane_cp05

0x857e,	// (0x00033d8f) list_im_single_pane_ParamLimits

0x857e,	// (0x00033d8f) list_im_single_pane

0xf0a1,	// (0x0003a8b2) list_single_im_pane_t1

0x9af5,	// (0x00035306) blid_accuracy_pane

0x9afd,	// (0x0003530e) blid_compass_pane

0x9b05,	// (0x00035316) main_location_t1

0x9b13,	// (0x00035324) main_location_t2

0x9b21,	// (0x00035332) main_location_t3

0x0002,

0xf620,	// (0x0003ae31) main_location_t

0xea73,	// (0x0003a284) aid_levels_location

0xedf2,	// (0x0003a603) blid_accuracy_pane_g1

0xedf2,	// (0x0003a603) blid_accuracy_pane_g2

0x0001,

0xf308,	// (0x0003ab19) blid_accuracy_pane_g

0x0f4a,	// (0x0002c75b) wml_content_pane

0x0f88,	// (0x0002c799) wml_button_pane_ParamLimits

0x0f88,	// (0x0002c799) wml_button_pane

0x8596,	// (0x00033da7) wml_list_single_large_pane_ParamLimits

0x8596,	// (0x00033da7) wml_list_single_large_pane

0x85ad,	// (0x00033dbe) wml_list_single_medium_pane_ParamLimits

0x85ad,	// (0x00033dbe) wml_list_single_medium_pane

0x85c5,	// (0x00033dd6) wml_list_single_small_pane_ParamLimits

0x85c5,	// (0x00033dd6) wml_list_single_small_pane

0x0f9c,	// (0x0002c7ad) wml_selection_box_pane_ParamLimits

0x0f9c,	// (0x0002c7ad) wml_selection_box_pane

0x0faf,	// (0x0002c7c0) wml_list_single_pane_t1

0x0fbe,	// (0x0002c7cf) wml_list_single_medium_pane_t1

0x0fcd,	// (0x0002c7de) wml_list_single_large_pane_t1

0x0fdc,	// (0x0002c7ed) input_focus_pane_cp02_ParamLimits

0x0fdc,	// (0x0002c7ed) input_focus_pane_cp02

0x0fef,	// (0x0002c800) wml_selection_box_pane_g1

0x0ff8,	// (0x0002c809) wml_selection_box_pane_t1_ParamLimits

0x0ff8,	// (0x0002c809) wml_selection_box_pane_t1

0xecce,	// (0x0003a4df) bg_wml_button_pane_ParamLimits

0xecce,	// (0x0003a4df) bg_wml_button_pane

0x1010,	// (0x0002c821) wml_button_pane_g1

0x1018,	// (0x0002c829) wml_button_pane_t1

0x1010,	// (0x0002c821) wml_button_bg_pane_g1

0x1028,	// (0x0002c839) wml_button_bg_pane_g2

0x1030,	// (0x0002c841) wml_button_bg_pane_g3

0x1038,	// (0x0002c849) wml_button_bg_pane_g4

0x1040,	// (0x0002c851) wml_button_bg_pane_g5

0x1048,	// (0x0002c859) wml_button_bg_pane_g6

0x1050,	// (0x0002c861) wml_button_bg_pane_g7

0x1058,	// (0x0002c869) wml_button_bg_pane_g8

0x1060,	// (0x0002c871) wml_button_bg_pane_g9

0x0008,

0xf2ab,	// (0x0003aabc) wml_button_bg_pane_g

0x85e0,	// (0x00033df1) bg_list_pane_cp02

0x1068,	// (0x0002c879) mce_header_pane_ParamLimits

0x1068,	// (0x0002c879) mce_header_pane

0x107c,	// (0x0002c88d) mce_icon_pane

0x107c,	// (0x0002c88d) mce_image_pane

0x1085,	// (0x0002c896) mce_text_pane_ParamLimits

0x1085,	// (0x0002c896) mce_text_pane

0x85e9,	// (0x00033dfa) scroll_pane_cp03

0x85e9,	// (0x00033dfa) scroll_pane_cp04

0x1099,	// (0x0002c8aa) scroll_pane_cp05_ParamLimits

0x1099,	// (0x0002c8aa) scroll_pane_cp05

0x85f1,	// (0x00033e02) mce_header_field_pane_ParamLimits

0x85f1,	// (0x00033e02) mce_header_field_pane

0x8611,	// (0x00033e22) mce_header_field_pane_2_ParamLimits

0x8611,	// (0x00033e22) mce_header_field_pane_2

0x8627,	// (0x00033e38) mce_header_field_pane_3

0x862f,	// (0x00033e40) list_single_mce_message_pane_ParamLimits

0x862f,	// (0x00033e40) list_single_mce_message_pane

0x8646,	// (0x00033e57) list_single_mce_smart_pane_ParamLimits

0x8646,	// (0x00033e57) list_single_mce_smart_pane

0x10a5,	// (0x0002c8b6) input_focus_pane_cp03

0x10ae,	// (0x0002c8bf) list_header_data_pane

0x8668,	// (0x00033e79) mce_header_field_pane_t1

0x8676,	// (0x00033e87) list_single_mce_header_pane_ParamLimits

0x8676,	// (0x00033e87) list_single_mce_header_pane

0x10b6,	// (0x0002c8c7) list_single_mce_header_pane_t1

0x10c5,	// (0x0002c8d6) list_single_mce_message_pane_g1

0x10ce,	// (0x0002c8df) list_single_mce_message_pane_t1

0x86ac,	// (0x00033ebd) bg_cale_heading_pane_cp01_ParamLimits

0x86ac,	// (0x00033ebd) bg_cale_heading_pane_cp01

0x10dd,	// (0x0002c8ee) bg_cale_pane_cp02_ParamLimits

0x10dd,	// (0x0002c8ee) bg_cale_pane_cp02

0x86cf,	// (0x00033ee0) cale_month_corner_pane

0x86e5,	// (0x00033ef6) cale_month_day_heading_pane_ParamLimits

0x86e5,	// (0x00033ef6) cale_month_day_heading_pane

0x8708,	// (0x00033f19) cale_month_pane_g1_ParamLimits

0x8708,	// (0x00033f19) cale_month_pane_g1

0x8724,	// (0x00033f35) cale_month_pane_g2_ParamLimits

0x8724,	// (0x00033f35) cale_month_pane_g2

0x873d,	// (0x00033f4e) cale_month_pane_g3_ParamLimits

0x873d,	// (0x00033f4e) cale_month_pane_g3

0x8769,	// (0x00033f7a) cale_month_pane_g4_ParamLimits

0x8769,	// (0x00033f7a) cale_month_pane_g4

0x8795,	// (0x00033fa6) cale_month_pane_g5_ParamLimits

0x8795,	// (0x00033fa6) cale_month_pane_g5

0x87c1,	// (0x00033fd2) cale_month_pane_g6_ParamLimits

0x87c1,	// (0x00033fd2) cale_month_pane_g6

0x87ed,	// (0x00033ffe) cale_month_pane_g7_ParamLimits

0x87ed,	// (0x00033ffe) cale_month_pane_g7

0x8819,	// (0x0003402a) cale_month_pane_g8_ParamLimits

0x8819,	// (0x0003402a) cale_month_pane_g8

0x8845,	// (0x00034056) cale_month_pane_g9_ParamLimits

0x8845,	// (0x00034056) cale_month_pane_g9

0x886f,	// (0x00034080) cale_month_pane_g10_ParamLimits

0x886f,	// (0x00034080) cale_month_pane_g10

0x8899,	// (0x000340aa) cale_month_pane_g11_ParamLimits

0x8899,	// (0x000340aa) cale_month_pane_g11

0x88c3,	// (0x000340d4) cale_month_pane_g12_ParamLimits

0x88c3,	// (0x000340d4) cale_month_pane_g12

0x88ed,	// (0x000340fe) cale_month_pane_g13_ParamLimits

0x88ed,	// (0x000340fe) cale_month_pane_g13

0x000c,

0xf2be,	// (0x0003aacf) cale_month_pane_g_ParamLimits

0xf2be,	// (0x0003aacf) cale_month_pane_g

0x8917,	// (0x00034128) cale_month_week_pane

0x8928,	// (0x00034139) grid_cale_month_pane_ParamLimits

0x8928,	// (0x00034139) grid_cale_month_pane

0x8946,	// (0x00034157) cale_month_day_heading_pane_t1

0x89a4,	// (0x000341b5) cale_month_day_heading_pane_t2

0x8a09,	// (0x0003421a) cale_month_day_heading_pane_t3

0x8a6e,	// (0x0003427f) cale_month_day_heading_pane_t4

0x8ad3,	// (0x000342e4) cale_month_day_heading_pane_t5

0x8b38,	// (0x00034349) cale_month_day_heading_pane_t6

0x8b9d,	// (0x000343ae) cale_month_day_heading_pane_t7

0x0006,

0xf2d9,	// (0x0003aaea) cale_month_day_heading_pane_t

0xeeff,	// (0x0003a710) bg_cale_side_pane_cp01

0x8c02,	// (0x00034413) cale_month_week_pane_t1

0x8c19,	// (0x0003442a) cale_month_week_pane_t2

0x8c30,	// (0x00034441) cale_month_week_pane_t3

0x8c47,	// (0x00034458) cale_month_week_pane_t4

0x8c5e,	// (0x0003446f) cale_month_week_pane_t5

0x8c75,	// (0x00034486) cale_month_week_pane_t6

0x0005,

0xf2e8,	// (0x0003aaf9) cale_month_week_pane_t

0x8c8c,	// (0x0003449d) cell_cale_month_pane_ParamLimits

0x8c8c,	// (0x0003449d) cell_cale_month_pane

0x8d32,	// (0x00034543) cell_cale_month_pane_g1

0x8d3e,	// (0x0003454f) cell_cale_month_pane_t1_ParamLimits

0x8d3e,	// (0x0003454f) cell_cale_month_pane_t1

0xef0d,	// (0x0003a71e) grid_highlight_pane_cp08

0xedf2,	// (0x0003a603) main_smil_g1

0x8d5a,	// (0x0003456b) smil_status_pane

0x1148,	// (0x0002c959) smil_text_pane

0x2bd6,	// (0x0002e3e7) bg_popup_call3_rect_pane_g8

0x2bde,	// (0x0002e3ef) bg_popup_call3_rect_pane_g9

0x0008,

0xf5a1,	// (0x0003adb2) bg_popup_call3_rect_pane_g

0x2ea7,	// (0x0002e6b8) smil_status_volume_pane_g1

0x1152,	// (0x0002c963) smil_status_pane_t1

0x9e36,	// (0x00035647) volume_smil_pane

0x1169,	// (0x0002c97a) list_smil_text_pane

0x8d6b,	// (0x0003457c) scroll_pane_cp011

0x8d74,	// (0x00034585) smil_text_list_pane_t1_ParamLimits

0x8d74,	// (0x00034585) smil_text_list_pane_t1

0x8db9,	// (0x000345ca) aid_volume_smil_ParamLimits

0x8db9,	// (0x000345ca) aid_volume_smil

0xedf2,	// (0x0003a603) smil_volume_pane_g1

0xedf2,	// (0x0003a603) smil_volume_pane_g2

0x0001,

0xf308,	// (0x0003ab19) smil_volume_pane_g

0xed9d,	// (0x0003a5ae) listscroll_cale_day_pane

0x1195,	// (0x0002c9a6) bg_cale_pane

0x11ad,	// (0x0002c9be) list_cale_pane

0x11be,	// (0x0002c9cf) scroll_pane_cp09

0x11cf,	// (0x0002c9e0) cale_bg_pane_g1

0x11d7,	// (0x0002c9e8) cale_bg_pane_g2

0x11df,	// (0x0002c9f0) cale_bg_pane_g3

0x11e7,	// (0x0002c9f8) cale_bg_pane_g4

0x11ef,	// (0x0002ca00) cale_bg_pane_g5

0x11f7,	// (0x0002ca08) cale_bg_pane_g6

0x11ff,	// (0x0002ca10) cale_bg_pane_g7

0x1207,	// (0x0002ca18) cale_bg_pane_g8

0x120f,	// (0x0002ca20) cale_bg_pane_g9

0x0008,

0xf30d,	// (0x0003ab1e) cale_bg_pane_g

0x8ddb,	// (0x000345ec) list_cale_time_pane_ParamLimits

0x8ddb,	// (0x000345ec) list_cale_time_pane

0x1217,	// (0x0002ca28) list_cale_time_pane_g1_ParamLimits

0x1217,	// (0x0002ca28) list_cale_time_pane_g1

0x1223,	// (0x0002ca34) list_cale_time_pane_g2_ParamLimits

0x1223,	// (0x0002ca34) list_cale_time_pane_g2

0x8df2,	// (0x00034603) list_cale_time_pane_g3_ParamLimits

0x8df2,	// (0x00034603) list_cale_time_pane_g3

0x8dfe,	// (0x0003460f) list_cale_time_pane_g4_ParamLimits

0x8dfe,	// (0x0003460f) list_cale_time_pane_g4

0x8e0a,	// (0x0003461b) list_cale_time_pane_g5_ParamLimits

0x8e0a,	// (0x0003461b) list_cale_time_pane_g5

0x0005,

0xf320,	// (0x0003ab31) list_cale_time_pane_g_ParamLimits

0xf320,	// (0x0003ab31) list_cale_time_pane_g

0x123d,	// (0x0002ca4e) list_cale_time_pane_t1_ParamLimits

0x123d,	// (0x0002ca4e) list_cale_time_pane_t1

0x1265,	// (0x0002ca76) list_cale_time_pane_t2_ParamLimits

0x1265,	// (0x0002ca76) list_cale_time_pane_t2

0x90c7,	// (0x000348d8) aid_blid_cardinal_pane

0x9105,	// (0x00034916) compass_pane_t4

0x128d,	// (0x0002ca9e) list_cale_time_pane_t4_ParamLimits

0x128d,	// (0x0002ca9e) list_cale_time_pane_t4

0x9113,	// (0x00034924) compass_pane_t5

0x9121,	// (0x00034932) compass_pane_t6

0x912f,	// (0x00034940) compass_pane_t7

0x17de,	// (0x0002cfef) navi_pane_cc_t1

0x1994,	// (0x0002d1a5) aid_phob_thumbnail_center_pane

0x96a2,	// (0x00034eb3) main_postcard_pane_g4_ParamLimits

0x0002,

0xf32d,	// (0x0003ab3e) list_cale_time_pane_t_ParamLimits

0xf32d,	// (0x0003ab3e) list_cale_time_pane_t

0xe6cc,	// (0x00039edd) bg_popup_window_pane_cp02_ParamLimits

0xe6cc,	// (0x00039edd) bg_popup_window_pane_cp02

0x12b5,	// (0x0002cac6) heading_pane_cp01_ParamLimits

0x12b5,	// (0x0002cac6) heading_pane_cp01

0x12c1,	// (0x0002cad2) loc_req_pane_ParamLimits

0x12c1,	// (0x0002cad2) loc_req_pane

0x12d1,	// (0x0002cae2) loc_type_pane_ParamLimits

0x12d1,	// (0x0002cae2) loc_type_pane

0x12e3,	// (0x0002caf4) loc_type_pane_t1_ParamLimits

0x12e3,	// (0x0002caf4) loc_type_pane_t1

0x12f5,	// (0x0002cb06) loc_type_pane_t2_ParamLimits

0x12f5,	// (0x0002cb06) loc_type_pane_t2

0x1307,	// (0x0002cb18) loc_type_pane_t3_ParamLimits

0x1307,	// (0x0002cb18) loc_type_pane_t3

0x0002,

0xf334,	// (0x0003ab45) loc_type_pane_t_ParamLimits

0xf334,	// (0x0003ab45) loc_type_pane_t

0x1319,	// (0x0002cb2a) list_loc_req_pane

0x1323,	// (0x0002cb34) scroll_pane_cp012

0x8e16,	// (0x00034627) list_single_loc_request_popup_menu_pane_ParamLimits

0x8e16,	// (0x00034627) list_single_loc_request_popup_menu_pane

0x132c,	// (0x0002cb3d) list_single_loc_request_popup_menu_pane_g1_ParamLimits

0x132c,	// (0x0002cb3d) list_single_loc_request_popup_menu_pane_g1

0x1338,	// (0x0002cb49) list_single_loc_request_popup_menu_pane_g2_ParamLimits

0x1338,	// (0x0002cb49) list_single_loc_request_popup_menu_pane_g2

0x0001,

0xf33b,	// (0x0003ab4c) list_single_loc_request_popup_menu_pane_g_ParamLimits

0xf33b,	// (0x0003ab4c) list_single_loc_request_popup_menu_pane_g

0x1344,	// (0x0002cb55) list_single_loc_request_popup_menu_pane_t1_ParamLimits

0x1344,	// (0x0002cb55) list_single_loc_request_popup_menu_pane_t1

0x8e28,	// (0x00034639) bg_popup_window_pane_cp03_ParamLimits

0x8e28,	// (0x00034639) bg_popup_window_pane_cp03

0x8e36,	// (0x00034647) heading_loc_req_pane_ParamLimits

0x8e36,	// (0x00034647) heading_loc_req_pane

0x8e42,	// (0x00034653) popup_dyc_status_message_window_g1_ParamLimits

0x8e42,	// (0x00034653) popup_dyc_status_message_window_g1

0x8e4e,	// (0x0003465f) popup_dyc_status_message_window_t1_ParamLimits

0x8e4e,	// (0x0003465f) popup_dyc_status_message_window_t1

0x8e60,	// (0x00034671) popup_dyc_status_message_window_t2_ParamLimits

0x8e60,	// (0x00034671) popup_dyc_status_message_window_t2

0x8e72,	// (0x00034683) popup_dyc_status_message_window_t3_ParamLimits

0x8e72,	// (0x00034683) popup_dyc_status_message_window_t3

0x0002,

0xf340,	// (0x0003ab51) popup_dyc_status_message_window_t_ParamLimits

0xf340,	// (0x0003ab51) popup_dyc_status_message_window_t

0xea73,	// (0x0003a284) bg_heading_pane_cp01

0x1366,	// (0x0002cb77) heading_loc_req_pane_g1

0x136e,	// (0x0002cb7f) heading_loc_req_pane_g2

0x1376,	// (0x0002cb87) heading_loc_req_pane_g3

0x0002,

0xf347,	// (0x0003ab58) heading_loc_req_pane_g

0x137e,	// (0x0002cb8f) heading_loc_req_pane_t1

0x1425,	// (0x0002cc36) bg_popup_sub_pane_cp01_ParamLimits

0x1425,	// (0x0002cc36) bg_popup_sub_pane_cp01

0x1433,	// (0x0002cc44) popup_cale_events_window_g1_ParamLimits

0x1433,	// (0x0002cc44) popup_cale_events_window_g1

0x1453,	// (0x0002cc64) popup_cale_events_window_g2_ParamLimits

0x1453,	// (0x0002cc64) popup_cale_events_window_g2

0x0001,

0xf37b,	// (0x0003ab8c) popup_cale_events_window_g_ParamLimits

0xf37b,	// (0x0003ab8c) popup_cale_events_window_g

0x1473,	// (0x0002cc84) popup_cale_events_window_t1_ParamLimits

0x1473,	// (0x0002cc84) popup_cale_events_window_t1

0x1485,	// (0x0002cc96) popup_cale_events_window_t2_ParamLimits

0x1485,	// (0x0002cc96) popup_cale_events_window_t2

0x14c3,	// (0x0002ccd4) popup_cale_events_window_t3_ParamLimits

0x14c3,	// (0x0002ccd4) popup_cale_events_window_t3

0x14fd,	// (0x0002cd0e) popup_cale_events_window_t4_ParamLimits

0x14fd,	// (0x0002cd0e) popup_cale_events_window_t4

0x0003,

0xf380,	// (0x0003ab91) popup_cale_events_window_t_ParamLimits

0xf380,	// (0x0003ab91) popup_cale_events_window_t

0x8e9e,	// (0x000346af) call_type_pane

0x19ac,	// (0x0002d1bd) popup_call_status_window_g1

0x8eaa,	// (0x000346bb) popup_call_status_window_g2

0x8eb6,	// (0x000346c7) popup_call_status_window_g3

0x0002,

0xf389,	// (0x0003ab9a) popup_call_status_window_g

0x1533,	// (0x0002cd44) call_type_pane_g1

0x153c,	// (0x0002cd4d) call_type_pane_g2

0x0001,

0xf390,	// (0x0003aba1) call_type_pane_g

0xea73,	// (0x0003a284) bg_popup_sub_pane_cp02

0x1545,	// (0x0002cd56) listscroll_popup_wml_pane

0x154d,	// (0x0002cd5e) list_wml_pane

0x1557,	// (0x0002cd68) scroll_pane_cp013

0x8ec2,	// (0x000346d3) list_single_graphic_popup_wml_pane_ParamLimits

0x8ec2,	// (0x000346d3) list_single_graphic_popup_wml_pane

0xedf2,	// (0x0003a603) list_single_graphic_popup_wml_pane_g1

0x1560,	// (0x0002cd71) list_single_graphic_popup_wml_pane_g2

0x0001,

0xf395,	// (0x0003aba6) list_single_graphic_popup_wml_pane_g

0x1568,	// (0x0002cd79) list_single_graphic_popup_wml_pane_t1

0x1576,	// (0x0002cd87) aid_call_pane

0xecc6,	// (0x0003a4d7) popup_clock_analogue_window_g1

0xecc6,	// (0x0003a4d7) popup_clock_analogue_window_g2

0x8ed6,	// (0x000346e7) popup_clock_analogue_window_g3

0x8ed6,	// (0x000346e7) popup_clock_analogue_window_g4

0xedf2,	// (0x0003a603) popup_clock_analogue_window_g5

0x0004,

0xf39a,	// (0x0003abab) popup_clock_analogue_window_g

0x8ede,	// (0x000346ef) popup_clock_analogue_window_t1

0x8eec,	// (0x000346fd) clock_digital_number_pane_ParamLimits

0x8eec,	// (0x000346fd) clock_digital_number_pane

0x8ef8,	// (0x00034709) clock_digital_number_pane_cp02_ParamLimits

0x8ef8,	// (0x00034709) clock_digital_number_pane_cp02

0x8f04,	// (0x00034715) clock_digital_number_pane_cp03_ParamLimits

0x8f04,	// (0x00034715) clock_digital_number_pane_cp03

0x8f10,	// (0x00034721) clock_digital_number_pane_cp04_ParamLimits

0x8f10,	// (0x00034721) clock_digital_number_pane_cp04

0x8f1c,	// (0x0003472d) clock_digital_separator_pane_ParamLimits

0x8f1c,	// (0x0003472d) clock_digital_separator_pane

0x8f28,	// (0x00034739) popup_clock_digital_window_t1

0xedf2,	// (0x0003a603) clock_digital_number_pane_g1

0xedf2,	// (0x0003a603) clock_digital_number_pane_g2

0x0001,

0xf308,	// (0x0003ab19) clock_digital_number_pane_g

0xedf2,	// (0x0003a603) clock_digital_separator_pane_g1

0xedf2,	// (0x0003a603) clock_digital_separator_pane_g2

0x0001,

0xf308,	// (0x0003ab19) clock_digital_separator_pane_g

0xea73,	// (0x0003a284) bg_popup_window_pane_cp04

0x15f5,	// (0x0002ce06) heading_pane_cp03

0x15fd,	// (0x0002ce0e) listscroll_popup_gms_pane

0x1605,	// (0x0002ce16) grid_large_graphic_popup_pane

0x160f,	// (0x0002ce20) listscroll_popup_gms_pane_g1

0x1617,	// (0x0002ce28) listscroll_popup_gms_pane_g2

0x0001,

0xf3a5,	// (0x0003abb6) listscroll_popup_gms_pane_g

0x0f80,	// (0x0002c791) scroll_pane_cp014

0x8f45,	// (0x00034756) cell_large_graphic_popup_pane_ParamLimits

0x8f45,	// (0x00034756) cell_large_graphic_popup_pane

0x8f5c,	// (0x0003476d) cell_large_graphic_popup_pane_g1_ParamLimits

0x8f5c,	// (0x0003476d) cell_large_graphic_popup_pane_g1

0x161f,	// (0x0002ce30) cell_large_graphic_popup_pane_g2_ParamLimits

0x161f,	// (0x0002ce30) cell_large_graphic_popup_pane_g2

0x162b,	// (0x0002ce3c) cell_large_graphic_popup_pane_g3_ParamLimits

0x162b,	// (0x0002ce3c) cell_large_graphic_popup_pane_g3

0x1638,	// (0x0002ce49) cell_large_graphic_popup_pane_g4_ParamLimits

0x1638,	// (0x0002ce49) cell_large_graphic_popup_pane_g4

0x0003,

0xf3aa,	// (0x0003abbb) cell_large_graphic_popup_pane_g_ParamLimits

0xf3aa,	// (0x0003abbb) cell_large_graphic_popup_pane_g

0x1648,	// (0x0002ce59) grid_highlight_pane_cp010

0xedf2,	// (0x0003a603) bg_popup_call_pane_g1

0x1652,	// (0x0002ce63) list_single_graphic_popup_conf_pane_ParamLimits

0x1652,	// (0x0002ce63) list_single_graphic_popup_conf_pane

0x1665,	// (0x0002ce76) list_highlight_pane_cp01

0x166e,	// (0x0002ce7f) list_single_graphic_popup_conf_pane_g1

0x1676,	// (0x0002ce87) list_single_graphic_popup_conf_pane_g2

0x0001,

0xf3b3,	// (0x0003abc4) list_single_graphic_popup_conf_pane_g

0x167e,	// (0x0002ce8f) list_single_graphic_popup_conf_pane_t1

0x168c,	// (0x0002ce9d) linegrid_cams_pane_g1

0x8f68,	// (0x00034779) linegrid_cams_pane_g2

0xeeab,	// (0x0003a6bc) linegrid_cams_pane_g3

0x1695,	// (0x0002cea6) linegrid_cams_pane_g4

0x8f71,	// (0x00034782) linegrid_cams_pane_g5

0x8f7a,	// (0x0003478b) linegrid_cams_pane_g6

0xef40,	// (0x0003a751) linegrid_cams_pane_g7

0x0006,

0xf3b8,	// (0x0003abc9) linegrid_cams_pane_g

0x169e,	// (0x0002ceaf) popup_clock_analogue_window

0x169e,	// (0x0002ceaf) popup_clock_digital_window

0xea73,	// (0x0003a284) popup_phob_thumbnail_window

0xedf2,	// (0x0003a603) call_video_uplink_pane_g1

0x16a7,	// (0x0002ceb8) call_video_uplink_pane_g2

0x0001,

0xf3c7,	// (0x0003abd8) call_video_uplink_pane_g

0xef0d,	// (0x0003a71e) video_uplink_pane

0x16af,	// (0x0002cec0) mce_image_pane_g1

0x8f83,	// (0x00034794) mce_image_pane_g2

0x8f8b,	// (0x0003479c) mce_image_pane_g3

0x8f93,	// (0x000347a4) mce_image_pane_g4

0x8f9b,	// (0x000347ac) mce_image_pane_g5

0x0004,

0xf3cc,	// (0x0003abdd) mce_image_pane_g

0x16b9,	// (0x0002ceca) control_top_pane_stacon_cp01_ParamLimits

0x16b9,	// (0x0002ceca) control_top_pane_stacon_cp01

0x16c9,	// (0x0002ceda) uni_indicator_pane_stacon_cp01_ParamLimits

0x16c9,	// (0x0002ceda) uni_indicator_pane_stacon_cp01

0x16da,	// (0x0002ceeb) bg_popup_sub_pane_cp03

0x16e4,	// (0x0002cef5) chi_dic_find_pane

0x8fa3,	// (0x000347b4) listscroll_chi_dic_pane

0x16ec,	// (0x0002cefd) main_pane_chidic_g1

0x16f4,	// (0x0002cf05) chi_dic_find_pane_t1

0x1702,	// (0x0002cf13) find_chidic_pane

0x170b,	// (0x0002cf1c) chi_dic_list_pane_ParamLimits

0x170b,	// (0x0002cf1c) chi_dic_list_pane

0x171c,	// (0x0002cf2d) scroll_pane_cp020

0x1724,	// (0x0002cf35) find_chidic_pane_t1

0xea73,	// (0x0003a284) input_focus_pane_cp06

0x8fb5,	// (0x000347c6) list_chi_dic_pane_ParamLimits

0x8fb5,	// (0x000347c6) list_chi_dic_pane

0x8fc8,	// (0x000347d9) list_chi_dic_pane_t1_ParamLimits

0x8fc8,	// (0x000347d9) list_chi_dic_pane_t1

0xea73,	// (0x0003a284) list_highlight_pane_cp020

0x1733,	// (0x0002cf44) bg_cale_heading_pane_g1

0x8fdb,	// (0x000347ec) bg_cale_heading_pane_g2

0x8fe3,	// (0x000347f4) bg_cale_heading_pane_g3

0x8feb,	// (0x000347fc) bg_cale_heading_pane_g4

0x8ff3,	// (0x00034804) bg_cale_heading_pane_g5

0x8ffb,	// (0x0003480c) bg_cale_heading_pane_g6

0x9003,	// (0x00034814) bg_cale_heading_pane_g7

0x900b,	// (0x0003481c) bg_cale_heading_pane_g8

0x9013,	// (0x00034824) bg_cale_heading_pane_g9

0x0008,

0xf3d7,	// (0x0003abe8) bg_cale_heading_pane_g

0x1733,	// (0x0002cf44) bg_cale_side_pane_g1

0x901b,	// (0x0003482c) bg_cale_side_pane_g2

0x9023,	// (0x00034834) bg_cale_side_pane_g3

0x902b,	// (0x0003483c) bg_cale_side_pane_g4

0x9033,	// (0x00034844) bg_cale_side_pane_g5

0x903b,	// (0x0003484c) bg_cale_side_pane_g6

0x9043,	// (0x00034854) bg_cale_side_pane_g7

0x904b,	// (0x0003485c) bg_cale_side_pane_g8

0x9053,	// (0x00034864) bg_cale_side_pane_g9

0x0008,

0xf3ea,	// (0x0003abfb) bg_cale_side_pane_g

0x905b,	// (0x0003486c) popup_call_status_window_ParamLimits

0x905b,	// (0x0003486c) popup_call_status_window

0x173b,	// (0x0002cf4c) stacon_top_pane

0x1743,	// (0x0002cf54) status_pane_ParamLimits

0x1743,	// (0x0002cf54) status_pane

0x175d,	// (0x0002cf6e) status_small_pane

0x1765,	// (0x0002cf76) control_pane

0xea73,	// (0x0003a284) stacon_bottom_pane

0x176d,	// (0x0002cf7e) list_single_mce_smart_pane_t1_ParamLimits

0x176d,	// (0x0002cf7e) list_single_mce_smart_pane_t1

0x1780,	// (0x0002cf91) list_single_mce_smart_pane_t2_ParamLimits

0x1780,	// (0x0002cf91) list_single_mce_smart_pane_t2

0x0001,

0xf3fd,	// (0x0003ac0e) list_single_mce_smart_pane_t_ParamLimits

0xf3fd,	// (0x0003ac0e) list_single_mce_smart_pane_t

0x906a,	// (0x0003487b) compass_pane

0x9073,	// (0x00034884) main_location2_pane_t1

0x9089,	// (0x0003489a) main_location2_pane_t2

0x909f,	// (0x000348b0) main_location2_pane_t3

0x0003,

0xf402,	// (0x0003ac13) main_location2_pane_t

0x17a8,	// (0x0002cfb9) compass_pane_g1_ParamLimits

0x17a8,	// (0x0002cfb9) compass_pane_g1

0x90e7,	// (0x000348f8) compass_pane_t1

0x90f6,	// (0x00034907) compass_pane_t2

0x0005,

0xf40b,	// (0x0003ac1c) compass_pane_t

0x913d,	// (0x0003494e) text_secondary_cp61

0x17d5,	// (0x0002cfe6) navi_pane_cams_g5

0x1816,	// (0x0002d027) navi_pane_im_t1

0x1824,	// (0x0002d035) navi_pane_mp_g1_ParamLimits

0x1824,	// (0x0002d035) navi_pane_mp_g1

0x1838,	// (0x0002d049) navi_pane_mp_g2_ParamLimits

0x1838,	// (0x0002d049) navi_pane_mp_g2

0x1844,	// (0x0002d055) navi_pane_mp_g3_ParamLimits

0x1844,	// (0x0002d055) navi_pane_mp_g3

0x0002,

0xf41f,	// (0x0003ac30) navi_pane_mp_g_ParamLimits

0xf41f,	// (0x0003ac30) navi_pane_mp_g

0x1850,	// (0x0002d061) navi_pane_mp_t1

0x185e,	// (0x0002d06f) navi_pane_mp_t2

0x0002,

0xf426,	// (0x0003ac37) navi_pane_mp_t

0x18cb,	// (0x0002d0dc) navi_pane_vt_g1

0x1850,	// (0x0002d061) navi_pane_vt_t1

0x18d3,	// (0x0002d0e4) navi_slider_pane

0x18db,	// (0x0002d0ec) zooming_pane

0x18e3,	// (0x0002d0f4) navi_slider_pane_g1

0x91b4,	// (0x000349c5) navi_slider_pane_g2

0x0006,

0xf42d,	// (0x0003ac3e) navi_slider_pane_g

0x1919,	// (0x0002d12a) aid_levels_zoom

0x1921,	// (0x0002d132) zooming_pane_g1

0x1929,	// (0x0002d13a) zooming_pane_g2

0x1929,	// (0x0002d13a) zooming_pane_g3

0x0002,

0xf43c,	// (0x0003ac4d) zooming_pane_g

0x1931,	// (0x0002d142) level_10_zoom

0x193a,	// (0x0002d14b) level_11_zoom

0x1943,	// (0x0002d154) level_1_zoom

0x194c,	// (0x0002d15d) level_2_zoom

0x1955,	// (0x0002d166) level_3_zoom

0x195e,	// (0x0002d16f) level_4_zoom

0x1967,	// (0x0002d178) level_5_zoom

0x1970,	// (0x0002d181) level_6_zoom

0x1979,	// (0x0002d18a) level_7_zoom

0x1982,	// (0x0002d193) level_8_zoom

0x198b,	// (0x0002d19c) level_9_zoom

0x199c,	// (0x0002d1ad) popup_phob_thumbnail_window_g1

0x19a4,	// (0x0002d1b5) popup_phob_thumbnail_window_g2

0x0001,

0xf443,	// (0x0003ac54) popup_phob_thumbnail_window_g

0x2d78,	// (0x0002e589) level_1_location

0x2d80,	// (0x0002e591) level_2_location

0x2d88,	// (0x0002e599) level_3_location

0x2d90,	// (0x0002e5a1) level_4_location

0x18db,	// (0x0002d0ec) level_5_location

0x91c6,	// (0x000349d7) mce_icon_pane_g1

0x91ce,	// (0x000349df) mce_icon_pane_g2

0x0001,

0xf448,	// (0x0003ac59) mce_icon_pane_g

0x91d6,	// (0x000349e7) main_mup_pane_g1_ParamLimits

0x91d6,	// (0x000349e7) main_mup_pane_g1

0x91ee,	// (0x000349ff) main_mup_pane_g2_ParamLimits

0x91ee,	// (0x000349ff) main_mup_pane_g2

0x920a,	// (0x00034a1b) main_mup_pane_g3_ParamLimits

0x920a,	// (0x00034a1b) main_mup_pane_g3

0x9226,	// (0x00034a37) main_mup_pane_g4_ParamLimits

0x9226,	// (0x00034a37) main_mup_pane_g4

0x9242,	// (0x00034a53) main_mup_pane_g5_ParamLimits

0x9242,	// (0x00034a53) main_mup_pane_g5

0x925f,	// (0x00034a70) main_mup_pane_g6_ParamLimits

0x925f,	// (0x00034a70) main_mup_pane_g6

0x927b,	// (0x00034a8c) main_mup_pane_g7_ParamLimits

0x927b,	// (0x00034a8c) main_mup_pane_g7

0x9297,	// (0x00034aa8) main_mup_pane_g8_ParamLimits

0x9297,	// (0x00034aa8) main_mup_pane_g8

0x92b3,	// (0x00034ac4) main_mup_pane_g9_ParamLimits

0x92b3,	// (0x00034ac4) main_mup_pane_g9

0x92ca,	// (0x00034adb) main_mup_pane_g10_ParamLimits

0x92ca,	// (0x00034adb) main_mup_pane_g10

0x92e1,	// (0x00034af2) main_mup_pane_g11_ParamLimits

0x92e1,	// (0x00034af2) main_mup_pane_g11

0x92f5,	// (0x00034b06) main_mup_pane_g12_ParamLimits

0x92f5,	// (0x00034b06) main_mup_pane_g12

0x9301,	// (0x00034b12) main_mup_pane_g13_ParamLimits

0x9301,	// (0x00034b12) main_mup_pane_g13

0x000c,

0xf44d,	// (0x0003ac5e) main_mup_pane_g_ParamLimits

0xf44d,	// (0x0003ac5e) main_mup_pane_g

0x9315,	// (0x00034b26) main_mup_pane_t1_ParamLimits

0x9315,	// (0x00034b26) main_mup_pane_t1

0x9332,	// (0x00034b43) main_mup_pane_t2_ParamLimits

0x9332,	// (0x00034b43) main_mup_pane_t2

0x934c,	// (0x00034b5d) main_mup_pane_t3_ParamLimits

0x934c,	// (0x00034b5d) main_mup_pane_t3

0x9366,	// (0x00034b77) main_mup_pane_t4_ParamLimits

0x9366,	// (0x00034b77) main_mup_pane_t4

0x9378,	// (0x00034b89) main_mup_pane_t5_ParamLimits

0x9378,	// (0x00034b89) main_mup_pane_t5

0x938a,	// (0x00034b9b) main_mup_pane_t6_ParamLimits

0x938a,	// (0x00034b9b) main_mup_pane_t6

0x0005,

0xf468,	// (0x0003ac79) main_mup_pane_t_ParamLimits

0xf468,	// (0x0003ac79) main_mup_pane_t

0x93a0,	// (0x00034bb1) mup_progress_pane_ParamLimits

0x93a0,	// (0x00034bb1) mup_progress_pane

0x93ac,	// (0x00034bbd) mup_visualizer_pane_ParamLimits

0x93ac,	// (0x00034bbd) mup_visualizer_pane

0x93da,	// (0x00034beb) mup_volume_pane_ParamLimits

0x93da,	// (0x00034beb) mup_volume_pane

0x19ac,	// (0x0002d1bd) mup_visualizer_pane_g1_ParamLimits

0x19ac,	// (0x0002d1bd) mup_visualizer_pane_g1

0x19ac,	// (0x0002d1bd) mup_visualizer_pane_g2_ParamLimits

0x19ac,	// (0x0002d1bd) mup_visualizer_pane_g2

0x17a8,	// (0x0002cfb9) mup_visualizer_pane_g3_ParamLimits

0x17a8,	// (0x0002cfb9) mup_visualizer_pane_g3

0x0002,

0xf475,	// (0x0003ac86) mup_visualizer_pane_g_ParamLimits

0xf475,	// (0x0003ac86) mup_visualizer_pane_g

0xedf2,	// (0x0003a603) mup_volume_pane_g1

0x19c2,	// (0x0002d1d3) mup_volume_pane_g2

0x0001,

0xf47c,	// (0x0003ac8d) mup_volume_pane_g

0xedf2,	// (0x0003a603) mup_progress_pane_g1

0x19cb,	// (0x0002d1dc) mup_progress_pane_g2

0x19d4,	// (0x0002d1e5) mup_progress_pane_g3

0x0002,

0xf481,	// (0x0003ac92) mup_progress_pane_g

0xea73,	// (0x0003a284) bg_popup_window_pane_cp05

0x19dd,	// (0x0002d1ee) heading_pane_cp02_ParamLimits

0x19dd,	// (0x0002d1ee) heading_pane_cp02

0x19f7,	// (0x0002d208) list_popup_blid_pane

0x19ff,	// (0x0002d210) list_blid_sat_info_pane_ParamLimits

0x19ff,	// (0x0002d210) list_blid_sat_info_pane

0x1a12,	// (0x0002d223) list_blid_sat_info_pane_g1

0x1a1a,	// (0x0002d22b) list_blid_sat_info_pane_t1

0x94cd,	// (0x00034cde) mup_equalizer_pane_ParamLimits

0x94cd,	// (0x00034cde) mup_equalizer_pane

0x94e6,	// (0x00034cf7) mup_equalizer_pane_cp1_ParamLimits

0x94e6,	// (0x00034cf7) mup_equalizer_pane_cp1

0x94ff,	// (0x00034d10) mup_equalizer_pane_cp2_ParamLimits

0x94ff,	// (0x00034d10) mup_equalizer_pane_cp2

0x9518,	// (0x00034d29) mup_equalizer_pane_cp3_ParamLimits

0x9518,	// (0x00034d29) mup_equalizer_pane_cp3

0x9531,	// (0x00034d42) mup_equalizer_pane_cp4_ParamLimits

0x9531,	// (0x00034d42) mup_equalizer_pane_cp4

0x954a,	// (0x00034d5b) mup_equalizer_pane_cp5

0x955c,	// (0x00034d6d) mup_equalizer_pane_cp6

0x956e,	// (0x00034d7f) mup_equalizer_pane_cp7

0x2c56,	// (0x0002e467) bg_popup_call_poc_act_pane_g9

0x2c5e,	// (0x0002e46f) bg_popup_call_poc_act_pane_g10

0x2c66,	// (0x0002e477) bg_popup_call_poc_act_pane_g11

0x000a,

0xecce,	// (0x0003a4df) mup_scale_pane

0xedf2,	// (0x0003a603) mup_scale_pane_g1

0x1a28,	// (0x0002d239) mup_scale_pane_g2

0x0006,

0xf49d,	// (0x0003acae) mup_scale_pane_g

0x1a4c,	// (0x0002d25d) msg_data_pane

0x1a54,	// (0x0002d265) scroll_pane_cp017

0x6604,	// (0x00031e15) bg_list_pane_cp04_ParamLimits

0x6604,	// (0x00031e15) bg_list_pane_cp04

0x1a64,	// (0x0002d275) msg_data_pane_g1

0x8f83,	// (0x00034794) msg_data_pane_g2

0x8f8b,	// (0x0003479c) msg_data_pane_g3

0x9592,	// (0x00034da3) msg_data_pane_g4

0x8f9b,	// (0x000347ac) msg_data_pane_g5

0x91c6,	// (0x000349d7) msg_data_pane_g6

0x959a,	// (0x00034dab) msg_data_pane_g7

0x0006,

0xf4ac,	// (0x0003acbd) msg_data_pane_g

0x6624,	// (0x00031e35) msg_text_pane_ParamLimits

0x6624,	// (0x00031e35) msg_text_pane

0x95a2,	// (0x00034db3) qrid_highlight_pane_cp011_ParamLimits

0x95a2,	// (0x00034db3) qrid_highlight_pane_cp011

0xea73,	// (0x0003a284) msg_body_pane

0xea73,	// (0x0003a284) msg_header_pane

0x1a75,	// (0x0002d286) input_focus_pane_cp07

0x6659,	// (0x00031e6a) msg_header_pane_t1_ParamLimits

0x6659,	// (0x00031e6a) msg_header_pane_t1

0x666b,	// (0x00031e7c) msg_header_pane_t2_ParamLimits

0x666b,	// (0x00031e7c) msg_header_pane_t2

0x0001,

0xf4c0,	// (0x0003acd1) msg_header_pane_t_ParamLimits

0xf4c0,	// (0x0003acd1) msg_header_pane_t

0x1a9c,	// (0x0002d2ad) msg_body_pane_g1

0x667d,	// (0x00031e8e) msg_body_pane_t1_ParamLimits

0x667d,	// (0x00031e8e) msg_body_pane_t1

0x66a8,	// (0x00031eb9) msg_body_pane_t2_ParamLimits

0x66a8,	// (0x00031eb9) msg_body_pane_t2

0x66ba,	// (0x00031ecb) msg_body_pane_t3_ParamLimits

0x66ba,	// (0x00031ecb) msg_body_pane_t3

0x0002,

0xf4c5,	// (0x0003acd6) msg_body_pane_t_ParamLimits

0xf4c5,	// (0x0003acd6) msg_body_pane_t

0x9606,	// (0x00034e17) main_viewer_pane_g1_ParamLimits

0x9606,	// (0x00034e17) main_viewer_pane_g1

0x9612,	// (0x00034e23) main_viewer_pane_g2_ParamLimits

0x9612,	// (0x00034e23) main_viewer_pane_g2

0x961e,	// (0x00034e2f) main_viewer_pane_g3_ParamLimits

0x961e,	// (0x00034e2f) main_viewer_pane_g3

0x962d,	// (0x00034e3e) main_viewer_pane_g4_ParamLimits

0x962d,	// (0x00034e3e) main_viewer_pane_g4

0x963c,	// (0x00034e4d) main_viewer_pane_g5_ParamLimits

0x963c,	// (0x00034e4d) main_viewer_pane_g5

0x963c,	// (0x00034e4d) main_viewer_pane_g7_ParamLimits

0x963c,	// (0x00034e4d) main_viewer_pane_g7

0x964e,	// (0x00034e5f) main_viewer_pane_g8_ParamLimits

0x964e,	// (0x00034e5f) main_viewer_pane_g8

0x0007,

0xf4d5,	// (0x0003ace6) main_viewer_pane_g_ParamLimits

0xf4d5,	// (0x0003ace6) main_viewer_pane_g

0x1b35,	// (0x0002d346) viewer_content_pane_ParamLimits

0x1b35,	// (0x0002d346) viewer_content_pane

0x967e,	// (0x00034e8f) main_postcard_pane_g1_ParamLimits

0x967e,	// (0x00034e8f) main_postcard_pane_g1

0x968a,	// (0x00034e9b) main_postcard_pane_g2_ParamLimits

0x968a,	// (0x00034e9b) main_postcard_pane_g2

0x9696,	// (0x00034ea7) main_postcard_pane_g3_ParamLimits

0x9696,	// (0x00034ea7) main_postcard_pane_g3

0x0005,

0xf4e6,	// (0x0003acf7) main_postcard_pane_g_ParamLimits

0xf4e6,	// (0x0003acf7) main_postcard_pane_g

0x96a2,	// (0x00034eb3) main_postcard_pane_g4

0x2e94,	// (0x0002e6a5) smil_status_volume_pane_g2

0x96c6,	// (0x00034ed7) postcard_pane_ParamLimits

0x96c6,	// (0x00034ed7) postcard_pane

0x19ac,	// (0x0002d1bd) postcard_pane_g1_ParamLimits

0x19ac,	// (0x0002d1bd) postcard_pane_g1

0x96f6,	// (0x00034f07) postcard_pane_g2_ParamLimits

0x96f6,	// (0x00034f07) postcard_pane_g2

0x9702,	// (0x00034f13) postcard_pane_g3_ParamLimits

0x9702,	// (0x00034f13) postcard_pane_g3

0x1b51,	// (0x0002d362) postcard_pane_g4_ParamLimits

0x1b51,	// (0x0002d362) postcard_pane_g4

0x970e,	// (0x00034f1f) postcard_pane_g5_ParamLimits

0x970e,	// (0x00034f1f) postcard_pane_g5

0x971a,	// (0x00034f2b) postcard_pane_g6_ParamLimits

0x971a,	// (0x00034f2b) postcard_pane_g6

0x1b43,	// (0x0002d354) postcard_pane_g7_ParamLimits

0x1b43,	// (0x0002d354) postcard_pane_g7

0x0006,

0xf4f3,	// (0x0003ad04) postcard_pane_g_ParamLimits

0xf4f3,	// (0x0003ad04) postcard_pane_g

0x9726,	// (0x00034f37) main_mp2_pane_g1_ParamLimits

0x9726,	// (0x00034f37) main_mp2_pane_g1

0x9732,	// (0x00034f43) main_mp2_pane_g2_ParamLimits

0x9732,	// (0x00034f43) main_mp2_pane_g2

0x973e,	// (0x00034f4f) main_mp2_pane_g3_ParamLimits

0x973e,	// (0x00034f4f) main_mp2_pane_g3

0x0002,

0xf502,	// (0x0003ad13) main_mp2_pane_g_ParamLimits

0xf502,	// (0x0003ad13) main_mp2_pane_g

0x974a,	// (0x00034f5b) main_mp2_pane_t1_ParamLimits

0x974a,	// (0x00034f5b) main_mp2_pane_t1

0x975f,	// (0x00034f70) main_mp2_pane_t2_ParamLimits

0x975f,	// (0x00034f70) main_mp2_pane_t2

0x9771,	// (0x00034f82) main_mp2_pane_t3_ParamLimits

0x9771,	// (0x00034f82) main_mp2_pane_t3

0x0002,

0xf509,	// (0x0003ad1a) main_mp2_pane_t_ParamLimits

0xf509,	// (0x0003ad1a) main_mp2_pane_t

0x1b5f,	// (0x0002d370) pec_content_pane_ParamLimits

0x1b5f,	// (0x0002d370) pec_content_pane

0x0f80,	// (0x0002c791) scroll_pane_cp015

0x1b71,	// (0x0002d382) pec_attribute_pane_ParamLimits

0x1b71,	// (0x0002d382) pec_attribute_pane

0x9783,	// (0x00034f94) pec_content_pane_g1_ParamLimits

0x9783,	// (0x00034f94) pec_content_pane_g1

0x1b81,	// (0x0002d392) pec_content_pane_t1_ParamLimits

0x1b81,	// (0x0002d392) pec_content_pane_t1

0x1b93,	// (0x0002d3a4) pec_content_pane_t2_ParamLimits

0x1b93,	// (0x0002d3a4) pec_content_pane_t2

0x0001,

0xf510,	// (0x0003ad21) pec_content_pane_t_ParamLimits

0xf510,	// (0x0003ad21) pec_content_pane_t

0x978f,	// (0x00034fa0) list_single_graphic_pane_cp01_ParamLimits

0x978f,	// (0x00034fa0) list_single_graphic_pane_cp01

0xecce,	// (0x0003a4df) bg_popup_sub_pane_cp04

0x1ba5,	// (0x0002d3b6) popup_mup_playback_window_g1

0x1bb1,	// (0x0002d3c2) popup_mup_playback_window_t1

0x1bc6,	// (0x0002d3d7) popup_mup_playback_window_t2

0x0001,

0xf515,	// (0x0003ad26) popup_mup_playback_window_t

0x1bfd,	// (0x0002d40e) main_image_pane_g1_ParamLimits

0x1bfd,	// (0x0002d40e) main_image_pane_g1

0x1c40,	// (0x0002d451) scroll_pane_cp018_ParamLimits

0x1c40,	// (0x0002d451) scroll_pane_cp018

0x1c58,	// (0x0002d469) scroll_pane_cp016_ParamLimits

0x1c58,	// (0x0002d469) scroll_pane_cp016

0x9814,	// (0x00035025) smil2_image_pane_ParamLimits

0x9814,	// (0x00035025) smil2_image_pane

0x983c,	// (0x0003504d) smil2_root_pane_ParamLimits

0x983c,	// (0x0003504d) smil2_root_pane

0x9868,	// (0x00035079) smil2_text_pane_ParamLimits

0x9868,	// (0x00035079) smil2_text_pane

0xea73,	// (0x0003a284) bg_list_pane_cp06

0x1c94,	// (0x0002d4a5) grid_radio_pane

0xea73,	// (0x0003a284) bg_popup_window_pane_cp06

0x1c9c,	// (0x0002d4ad) main_fmradio_pane_t1

0x15f5,	// (0x0002ce06) heading_pane_cp04

0x1caa,	// (0x0002d4bb) main_fmradio_pane_t2

0x2cae,	// (0x0002e4bf) popup_cale_lunar_info_window_g1

0x1cb8,	// (0x0002d4c9) main_fmradio_pane_t3

0x2cb6,	// (0x0002e4c7) popup_cale_lunar_info_window_g2

0x1cc6,	// (0x0002d4d7) main_fmradio_pane_t4

0x0001,

0x1cd4,	// (0x0002d4e5) main_fmradio_pane_t5

0x0004,

0xf603,	// (0x0003ae14) popup_cale_lunar_info_window_g

0xf52a,	// (0x0003ad3b) main_fmradio_pane_t

0x1ce2,	// (0x0002d4f3) wait_bar_pane_cp03

0x1cea,	// (0x0002d4fb) cell_fmradio_pane_ParamLimits

0x1cea,	// (0x0002d4fb) cell_fmradio_pane

0x1b43,	// (0x0002d354) cell_fmradio_pane_g1_ParamLimits

0x1b43,	// (0x0002d354) cell_fmradio_pane_g1

0xea73,	// (0x0003a284) grid_highlight_pane_cp011

0x1cfd,	// (0x0002d50e) poc_content_pane_ParamLimits

0x1cfd,	// (0x0002d50e) poc_content_pane

0x1d10,	// (0x0002d521) scroll_pane_cp019

0x989c,	// (0x000350ad) popup_call_poc_act_window_ParamLimits

0x989c,	// (0x000350ad) popup_call_poc_act_window

0x98a9,	// (0x000350ba) popup_call_poc_inact_window_ParamLimits

0x98a9,	// (0x000350ba) popup_call_poc_inact_window

0xf5c7,	// (0x0003add8) bg_popup_call_poc_act_pane_g

0x2c6e,	// (0x0002e47f) bg_popup_call_poc_inact_pane_g1

0x2c76,	// (0x0002e487) bg_popup_call_poc_inact_pane_g2

0x1d18,	// (0x0002d529) popup_call_poc_act_window_g2

0x2c7e,	// (0x0002e48f) bg_popup_call_poc_inact_pane_g3

0x2bfe,	// (0x0002e40f) bg_popup_call_poc_inact_pane_g4

0x2c86,	// (0x0002e497) bg_popup_call_poc_inact_pane_g5

0x1d20,	// (0x0002d531) popup_call_poc_act_window_t1_ParamLimits

0x1d20,	// (0x0002d531) popup_call_poc_act_window_t1

0x1d48,	// (0x0002d559) popup_call_poc_act_window_t2_ParamLimits

0x1d48,	// (0x0002d559) popup_call_poc_act_window_t2

0x1d70,	// (0x0002d581) popup_call_poc_act_window_t3_ParamLimits

0x1d70,	// (0x0002d581) popup_call_poc_act_window_t3

0x1d98,	// (0x0002d5a9) popup_call_poc_act_window_t4_ParamLimits

0x1d98,	// (0x0002d5a9) popup_call_poc_act_window_t4

0x0003,

0xf535,	// (0x0003ad46) popup_call_poc_act_window_t_ParamLimits

0xf535,	// (0x0003ad46) popup_call_poc_act_window_t

0x2c8e,	// (0x0002e49f) bg_popup_call_poc_inact_pane_g6

0x2c96,	// (0x0002e4a7) bg_popup_call_poc_inact_pane_g7

0x2c9e,	// (0x0002e4af) bg_popup_call_poc_inact_pane_g8

0x1daa,	// (0x0002d5bb) popup_call_poc_inact_window_g2

0x2ca6,	// (0x0002e4b7) bg_popup_call_poc_inact_pane_g9

0x0008,

0xf5de,	// (0x0003adef) bg_popup_call_poc_inact_pane_g

0x1db2,	// (0x0002d5c3) popup_call_poc_inact_window_t1_ParamLimits

0x1db2,	// (0x0002d5c3) popup_call_poc_inact_window_t1

0x1dc7,	// (0x0002d5d8) popup_call_poc_inact_window_t2_ParamLimits

0x1dc7,	// (0x0002d5d8) popup_call_poc_inact_window_t2

0x1ddc,	// (0x0002d5ed) popup_call_poc_inact_window_t3_ParamLimits

0x1ddc,	// (0x0002d5ed) popup_call_poc_inact_window_t3

0x0002,

0xf53e,	// (0x0003ad4f) popup_call_poc_inact_window_t_ParamLimits

0xf53e,	// (0x0003ad4f) popup_call_poc_inact_window_t

0x2e1a,	// (0x0002e62b) context_pane_ParamLimits

0x9da4,	// (0x000355b5) signal_pane_ParamLimits

0x18db,	// (0x0002d0ec) main_call2_pane

0x2e08,	// (0x0002e619) popup_phob_thumbnail2_window_ParamLimits

0x2e08,	// (0x0002e619) popup_phob_thumbnail2_window

0x95b8,	// (0x00034dc9) aid_hotspot_pointer_arrow_pane

0x95c0,	// (0x00034dd1) aid_hotspot_pointer_hand_pane

0x9b58,	// (0x00035369) phob_pre_status_pane_g5

0x8083,	// (0x00033894) cams_zoom_pane_ParamLimits

0x808f,	// (0x000338a0) image_vga_pane_ParamLimits

0x809c,	// (0x000338ad) main_camera_pane_g1_ParamLimits

0x80a8,	// (0x000338b9) main_camera_pane_g2_ParamLimits

0x80b4,	// (0x000338c5) main_camera_pane_g3_ParamLimits

0x80c0,	// (0x000338d1) main_camera_pane_g4_ParamLimits

0x80cc,	// (0x000338dd) main_camera_pane_g5_ParamLimits

0x80d8,	// (0x000338e9) main_camera_pane_g6_ParamLimits

0x80e4,	// (0x000338f5) main_camera_pane_g7_ParamLimits

0xf23d,	// (0x0003aa4e) main_camera_pane_g_ParamLimits

0x80f0,	// (0x00033901) main_camera_pane_t1_ParamLimits

0x8102,	// (0x00033913) main_camera_pane_t2_ParamLimits

0xf24e,	// (0x0003aa5f) main_camera_pane_t_ParamLimits

0xecce,	// (0x0003a4df) bg_popup_preview_window_pane_cp01_ParamLimits

0xecce,	// (0x0003a4df) bg_popup_preview_window_pane_cp01

0x1df1,	// (0x0002d602) popup_phob_thumbnail2_window_g1_ParamLimits

0x1df1,	// (0x0002d602) popup_phob_thumbnail2_window_g1

0xea73,	// (0x0003a284) call2_cli_visual_pane

0x98c5,	// (0x000350d6) popup_call2_audio_conf_window_ParamLimits

0x98c5,	// (0x000350d6) popup_call2_audio_conf_window

0x98d8,	// (0x000350e9) popup_call2_audio_first_window_ParamLimits

0x98d8,	// (0x000350e9) popup_call2_audio_first_window

0x9954,	// (0x00035165) popup_call2_audio_in_window_ParamLimits

0x9954,	// (0x00035165) popup_call2_audio_in_window

0x9984,	// (0x00035195) popup_call2_audio_out_window_ParamLimits

0x9984,	// (0x00035195) popup_call2_audio_out_window

0x99d0,	// (0x000351e1) popup_call2_audio_second_window_ParamLimits

0x99d0,	// (0x000351e1) popup_call2_audio_second_window

0x9a1c,	// (0x0003522d) popup_call2_audio_wait_window_ParamLimits

0x9a1c,	// (0x0003522d) popup_call2_audio_wait_window

0xea73,	// (0x0003a284) bg_popup_call2_act_pane_cp03

0xecb0,	// (0x0003a4c1) list_conf_pane_cp

0x1dfd,	// (0x0002d60e) popup_call2_audio_conf_window_t1

0x1652,	// (0x0002ce63) list_single_graphic_popup_conf2_pane_ParamLimits

0x1652,	// (0x0002ce63) list_single_graphic_popup_conf2_pane

0x1665,	// (0x0002ce76) list_highlight_pane_cp04

0x1e0b,	// (0x0002d61c) list_single_graphic_popup_conf2_pane_g1

0x1676,	// (0x0002ce87) list_single_graphic_popup_conf2_pane_g2

0x0001,

0xf545,	// (0x0003ad56) list_single_graphic_popup_conf2_pane_g

0x1e13,	// (0x0002d624) list_single_graphic_popup_conf2_pane_t1

0x1e21,	// (0x0002d632) bg_popup_call2_act_pane_cp01_ParamLimits

0x1e21,	// (0x0002d632) bg_popup_call2_act_pane_cp01

0x1eab,	// (0x0002d6bc) call_type_pane_cp05_ParamLimits

0x1eab,	// (0x0002d6bc) call_type_pane_cp05

0x1eff,	// (0x0002d710) popup_call2_audio_second_window_g1_ParamLimits

0x1eff,	// (0x0002d710) popup_call2_audio_second_window_g1

0x1f53,	// (0x0002d764) popup_call2_audio_second_window_g2_ParamLimits

0x1f53,	// (0x0002d764) popup_call2_audio_second_window_g2

0x0002,

0xf54a,	// (0x0003ad5b) popup_call2_audio_second_window_g_ParamLimits

0xf54a,	// (0x0003ad5b) popup_call2_audio_second_window_g

0x1fb8,	// (0x0002d7c9) popup_call2_audio_second_window_t1_ParamLimits

0x1fb8,	// (0x0002d7c9) popup_call2_audio_second_window_t1

0x2073,	// (0x0002d884) popup_call2_audio_second_window_t2_ParamLimits

0x2073,	// (0x0002d884) popup_call2_audio_second_window_t2

0x20c6,	// (0x0002d8d7) popup_call2_audio_second_window_t3_ParamLimits

0x20c6,	// (0x0002d8d7) popup_call2_audio_second_window_t3

0x0003,

0xf551,	// (0x0003ad62) popup_call2_audio_second_window_t_ParamLimits

0xf551,	// (0x0003ad62) popup_call2_audio_second_window_t

0xea73,	// (0x0003a284) bg_popup_call2_in_pane_cp02

0xea7d,	// (0x0003a28e) call_type_pane_cp04

0xea85,	// (0x0003a296) popup_call2_audio_wait_window_g1

0xea8d,	// (0x0003a29e) popup_call2_audio_wait_window_g2

0x0001,

0xf12a,	// (0x0003a93b) popup_call2_audio_wait_window_g

0xea95,	// (0x0003a2a6) popup_call2_audio_wait_window_t3

0x21b9,	// (0x0002d9ca) bg_popup_call2_act_pane_ParamLimits

0x21b9,	// (0x0002d9ca) bg_popup_call2_act_pane

0x2279,	// (0x0002da8a) call_type_pane_cp03_ParamLimits

0x2279,	// (0x0002da8a) call_type_pane_cp03

0x22dd,	// (0x0002daee) popup_call2_audio_first_window_g1_ParamLimits

0x22dd,	// (0x0002daee) popup_call2_audio_first_window_g1

0x234d,	// (0x0002db5e) popup_call2_audio_first_window_g2_ParamLimits

0x234d,	// (0x0002db5e) popup_call2_audio_first_window_g2

0x19ac,	// (0x0002d1bd) popup_call2_audio_first_window_g3_ParamLimits

0x19ac,	// (0x0002d1bd) popup_call2_audio_first_window_g3

0x0004,

0xf55a,	// (0x0003ad6b) popup_call2_audio_first_window_g_ParamLimits

0xf55a,	// (0x0003ad6b) popup_call2_audio_first_window_g

0x242b,	// (0x0002dc3c) popup_call2_audio_first_window_t1_ParamLimits

0x242b,	// (0x0002dc3c) popup_call2_audio_first_window_t1

0x252e,	// (0x0002dd3f) popup_call2_audio_first_window_t4_ParamLimits

0x252e,	// (0x0002dd3f) popup_call2_audio_first_window_t4

0x2611,	// (0x0002de22) popup_call2_audio_first_window_t5_ParamLimits

0x2611,	// (0x0002de22) popup_call2_audio_first_window_t5

0x0003,

0xf565,	// (0x0003ad76) popup_call2_audio_first_window_t_ParamLimits

0xf565,	// (0x0003ad76) popup_call2_audio_first_window_t

0xecc6,	// (0x0003a4d7) bg_popup_call2_act_pane_g1

0x2cbe,	// (0x0002e4cf) popup_cale_lunar_info_window_t1

0x2ccc,	// (0x0002e4dd) popup_cale_lunar_info_window_t2

0x2cda,	// (0x0002e4eb) popup_cale_lunar_info_window_t3

0xea73,	// (0x0003a284) bg_popup_call2_bubble_pane

0x2712,	// (0x0002df23) bg_popup_call2_in_pane_cp01_ParamLimits

0x2712,	// (0x0002df23) bg_popup_call2_in_pane_cp01

0xe74f,	// (0x00039f60) call_type_pane_cp02

0x275a,	// (0x0002df6b) popup_call2_audio_out_window_g1_ParamLimits

0x275a,	// (0x0002df6b) popup_call2_audio_out_window_g1

0x2786,	// (0x0002df97) popup_call2_audio_out_window_g2_ParamLimits

0x2786,	// (0x0002df97) popup_call2_audio_out_window_g2

0x27ae,	// (0x0002dfbf) popup_call2_audio_out_window_g3_ParamLimits

0x27ae,	// (0x0002dfbf) popup_call2_audio_out_window_g3

0x0003,

0xf56e,	// (0x0003ad7f) popup_call2_audio_out_window_g_ParamLimits

0xf56e,	// (0x0003ad7f) popup_call2_audio_out_window_g

0x27e9,	// (0x0002dffa) popup_call2_audio_out_window_t1_ParamLimits

0x27e9,	// (0x0002dffa) popup_call2_audio_out_window_t1

0x2848,	// (0x0002e059) popup_call2_audio_out_window_t2_ParamLimits

0x2848,	// (0x0002e059) popup_call2_audio_out_window_t2

0x289c,	// (0x0002e0ad) popup_call2_audio_out_window_t3_ParamLimits

0x289c,	// (0x0002e0ad) popup_call2_audio_out_window_t3

0x28b2,	// (0x0002e0c3) popup_call2_audio_out_window_t4_ParamLimits

0x28b2,	// (0x0002e0c3) popup_call2_audio_out_window_t4

0x28c8,	// (0x0002e0d9) popup_call2_audio_out_window_t5_ParamLimits

0x28c8,	// (0x0002e0d9) popup_call2_audio_out_window_t5

0x0005,

0xf577,	// (0x0003ad88) popup_call2_audio_out_window_t_ParamLimits

0xf577,	// (0x0003ad88) popup_call2_audio_out_window_t

0x292c,	// (0x0002e13d) bg_popup_call2_in_pane_ParamLimits

0x292c,	// (0x0002e13d) bg_popup_call2_in_pane

0x2988,	// (0x0002e199) popup_call2_audio_in_window_g1_ParamLimits

0x2988,	// (0x0002e199) popup_call2_audio_in_window_g1

0x29c0,	// (0x0002e1d1) popup_call2_audio_in_window_g2_ParamLimits

0x29c0,	// (0x0002e1d1) popup_call2_audio_in_window_g2

0x29f8,	// (0x0002e209) popup_call2_audio_in_window_g3_ParamLimits

0x29f8,	// (0x0002e209) popup_call2_audio_in_window_g3

0x0003,

0xf584,	// (0x0003ad95) popup_call2_audio_in_window_g_ParamLimits

0xf584,	// (0x0003ad95) popup_call2_audio_in_window_g

0x2a50,	// (0x0002e261) popup_call2_audio_in_window_t1_ParamLimits

0x2a50,	// (0x0002e261) popup_call2_audio_in_window_t1

0x2ad0,	// (0x0002e2e1) popup_call2_audio_in_window_t2_ParamLimits

0x2ad0,	// (0x0002e2e1) popup_call2_audio_in_window_t2

0x2b50,	// (0x0002e361) popup_call2_audio_in_window_t3_ParamLimits

0x2b50,	// (0x0002e361) popup_call2_audio_in_window_t3

0x2b6a,	// (0x0002e37b) popup_call2_audio_in_window_t4_ParamLimits

0x2b6a,	// (0x0002e37b) popup_call2_audio_in_window_t4

0x2b7c,	// (0x0002e38d) popup_call2_audio_in_window_t5_ParamLimits

0x2b7c,	// (0x0002e38d) popup_call2_audio_in_window_t5

0x2b91,	// (0x0002e3a2) popup_call2_audio_in_window_t6_ParamLimits

0x2b91,	// (0x0002e3a2) popup_call2_audio_in_window_t6

0x0005,

0xf58d,	// (0x0003ad9e) popup_call2_audio_in_window_t_ParamLimits

0xf58d,	// (0x0003ad9e) popup_call2_audio_in_window_t

0xecc6,	// (0x0003a4d7) bg_popup_call2_in_pane_g1

0x2ce8,	// (0x0002e4f9) popup_cale_lunar_info_window_t4

0x0003,

0xf608,	// (0x0003ae19) popup_cale_lunar_info_window_t

0xecce,	// (0x0003a4df) bg_popup_call2_rect_pane_ParamLimits

0xecce,	// (0x0003a4df) bg_popup_call2_rect_pane

0xea73,	// (0x0003a284) call2_cli_visual_graphic_pane

0xea73,	// (0x0003a284) call2_cli_visual_text_pane

0x9e29,	// (0x0003563a) smil_status_volume_pane_g3

0x0002,

0xedf2,	// (0x0003a603) call2_cli_visual_graphic_pane_g1

0xedf2,	// (0x0003a603) call2_cli_visual_graphic_pane_g2

0xedf2,	// (0x0003a603) call2_cli_visual_graphic_pane_g3

0x0002,

0xf59a,	// (0x0003adab) call2_cli_visual_graphic_pane_g

0x2ba6,	// (0x0002e3b7) bg_popup_call2_rect_pane_g1

0xee90,	// (0x0003a6a1) bg_popup_call2_rect_pane_g2

0x2bae,	// (0x0002e3bf) bg_popup_call2_rect_pane_g3

0x2bb6,	// (0x0002e3c7) bg_popup_call2_rect_pane_g4

0x2bbe,	// (0x0002e3cf) bg_popup_call2_rect_pane_g5

0x2bc6,	// (0x0002e3d7) bg_popup_call2_rect_pane_g6

0x2bce,	// (0x0002e3df) bg_popup_call2_rect_pane_g7

0x2bd6,	// (0x0002e3e7) bg_popup_call2_rect_pane_g8

0x2bde,	// (0x0002e3ef) bg_popup_call2_rect_pane_g9

0x0008,

0xf5a1,	// (0x0003adb2) bg_popup_call2_rect_pane_g

0x2be6,	// (0x0002e3f7) bg_popup_call2_bubble_pane_g1

0x2bee,	// (0x0002e3ff) bg_popup_call2_bubble_pane_g2

0x2bf6,	// (0x0002e407) bg_popup_call2_bubble_pane_g3

0x2bfe,	// (0x0002e40f) bg_popup_call2_bubble_pane_g4

0x2c06,	// (0x0002e417) bg_popup_call2_bubble_pane_g5

0x2c0e,	// (0x0002e41f) bg_popup_call2_bubble_pane_g6

0x2c16,	// (0x0002e427) bg_popup_call2_bubble_pane_g7

0x2c1e,	// (0x0002e42f) bg_popup_call2_bubble_pane_g8

0x2c26,	// (0x0002e437) bg_popup_call2_bubble_pane_g9

0x0008,

0xf5b4,	// (0x0003adc5) bg_popup_call2_bubble_pane_g

0x7bd8,	// (0x000333e9) aid_cale_week_size_cell_pane

0x8114,	// (0x00033925) aid_cams_cif_uncrop_pane_ParamLimits

0x8114,	// (0x00033925) aid_cams_cif_uncrop_pane

0x826c,	// (0x00033a7d) aid_cams_size_cell_ParamLimits

0x826c,	// (0x00033a7d) aid_cams_size_cell

0x8278,	// (0x00033a89) grid_cams_pane_ParamLimits

0x8284,	// (0x00033a95) linegrid_cams_pane_ParamLimits

0x830c,	// (0x00033b1d) call_video_pane_t1

0x8322,	// (0x00033b33) call_video_pane_t2

0x0001,

0xf2a1,	// (0x0003aab2) call_video_pane_t

0x868e,	// (0x00033e9f) aid_cale_month_size_cell_pane_ParamLimits

0x868e,	// (0x00033e9f) aid_cale_month_size_cell_pane

0xf651,	// (0x0003ae62) smil_status_volume_pane_g

0x9e36,	// (0x00035647) volume_smil_pane_ParamLimits

0xe629,	// (0x00039e3a) aid_popup2_width_pane

0x7b09,	// (0x0003331a) cell_qdial_pane_g4_ParamLimits

0x7b09,	// (0x0003331a) cell_qdial_pane_g4

0x90c7,	// (0x000348d8) aid_blid_cardinal_pane_ParamLimits

0x90d3,	// (0x000348e4) aid_blid_destination_pane_ParamLimits

0x90d3,	// (0x000348e4) aid_blid_destination_pane

0xecce,	// (0x0003a4df) bg_popup_call_poc_act_pane_ParamLimits

0xecce,	// (0x0003a4df) bg_popup_call_poc_act_pane

0xecce,	// (0x0003a4df) bg_popup_call_poc_inact_pane_ParamLimits

0xecce,	// (0x0003a4df) bg_popup_call_poc_inact_pane

0x2c2e,	// (0x0002e43f) bg_popup_call_poc_act_pane_g1

0x2c36,	// (0x0002e447) bg_popup_call_poc_act_pane_g2

0x2c3e,	// (0x0002e44f) bg_popup_call_poc_act_pane_g3

0x2bfe,	// (0x0002e40f) bg_popup_call_poc_act_pane_g4

0x2c06,	// (0x0002e417) bg_popup_call_poc_act_pane_g5

0x2c46,	// (0x0002e457) bg_popup_call_poc_act_pane_g6

0x2c16,	// (0x0002e427) bg_popup_call_poc_act_pane_g7

0x2c4e,	// (0x0002e45f) bg_popup_call_poc_act_pane_g8

0xea73,	// (0x0003a284) main_usb_pane

0x2de7,	// (0x0002e5f8) popup_cale_lunar_info_window

0x8531,	// (0x00033d42) im_reading_pane_t1_ParamLimits

0xf05a,	// (0x0003a86b) list_im_pane_ParamLimits

0xf06b,	// (0x0003a87c) scroll_pane_cp07_ParamLimits

0xea73,	// (0x0003a284) grid_highlight_pane_cp012

0xecce,	// (0x0003a4df) mup_scale_pane_ParamLimits

0x19ac,	// (0x0002d1bd) main_usb_pane_g1_ParamLimits

0x19ac,	// (0x0002d1bd) main_usb_pane_g1

0x9a7d,	// (0x0003528e) main_usb_pane_g2_ParamLimits

0x9a7d,	// (0x0003528e) main_usb_pane_g2

0x0001,

0xf5f1,	// (0x0003ae02) main_usb_pane_g_ParamLimits

0xf5f1,	// (0x0003ae02) main_usb_pane_g

0x9a89,	// (0x0003529a) main_usb_pane_t1_ParamLimits

0x9a89,	// (0x0003529a) main_usb_pane_t1

0x9a9b,	// (0x000352ac) main_usb_pane_t2_ParamLimits

0x9a9b,	// (0x000352ac) main_usb_pane_t2

0x9aad,	// (0x000352be) main_usb_pane_t3_ParamLimits

0x9aad,	// (0x000352be) main_usb_pane_t3

0x9abf,	// (0x000352d0) main_usb_pane_t4_ParamLimits

0x9abf,	// (0x000352d0) main_usb_pane_t4

0x9ad1,	// (0x000352e2) main_usb_pane_t5_ParamLimits

0x9ad1,	// (0x000352e2) main_usb_pane_t5

0x9ae3,	// (0x000352f4) main_usb_pane_t6_ParamLimits

0x9ae3,	// (0x000352f4) main_usb_pane_t6

0x0005,

0xf5f6,	// (0x0003ae07) main_usb_pane_t_ParamLimits

0x179f,	// (0x0002cfb0) aid_text_placing

0x9073,	// (0x00034884) main_location2_pane_t1_ParamLimits

0x9089,	// (0x0003489a) main_location2_pane_t2_ParamLimits

0x909f,	// (0x000348b0) main_location2_pane_t3_ParamLimits

0x90b5,	// (0x000348c6) main_location2_pane_t4_ParamLimits

0x90b5,	// (0x000348c6) main_location2_pane_t4

0xf402,	// (0x0003ac13) main_location2_pane_t_ParamLimits

0xed0a,	// (0x0003a51b) find_pinb_pane_g2_ParamLimits

0xed0a,	// (0x0003a51b) find_pinb_pane_g2

0x0001,

0xf150,	// (0x0003a961) find_pinb_pane_g_ParamLimits

0xf150,	// (0x0003a961) find_pinb_pane_g

0xed16,	// (0x0003a527) find_pinb_pane_t1_ParamLimits

0xed28,	// (0x0003a539) find_pinb_pane_t2_ParamLimits

0xf155,	// (0x0003a966) find_pinb_pane_t_ParamLimits

0xea73,	// (0x0003a284) main_call3_pane

0x8946,	// (0x00034157) cale_month_day_heading_pane_t1_ParamLimits

0x89a4,	// (0x000341b5) cale_month_day_heading_pane_t2_ParamLimits

0x8a09,	// (0x0003421a) cale_month_day_heading_pane_t3_ParamLimits

0x8a6e,	// (0x0003427f) cale_month_day_heading_pane_t4_ParamLimits

0x8ad3,	// (0x000342e4) cale_month_day_heading_pane_t5_ParamLimits

0x8b38,	// (0x00034349) cale_month_day_heading_pane_t6_ParamLimits

0x8b9d,	// (0x000343ae) cale_month_day_heading_pane_t7_ParamLimits

0xf2d9,	// (0x0003aaea) cale_month_day_heading_pane_t_ParamLimits

0x1160,	// (0x0002c971) smil_status_volume_pane

0x96de,	// (0x00034eef) postcard_address_pane_ParamLimits

0x96de,	// (0x00034eef) postcard_address_pane

0x96ea,	// (0x00034efb) postcard_message_pane_ParamLimits

0x96ea,	// (0x00034efb) postcard_message_pane

0x9a59,	// (0x0003526a) call2_cli_visual_pane_t1_ParamLimits

0x9a59,	// (0x0003526a) call2_cli_visual_pane_t1

0x9f87,	// (0x00035798) postcard_message_pane_t1_ParamLimits

0x9f87,	// (0x00035798) postcard_message_pane_t1

0x9f70,	// (0x00035781) postcard_address_pane_t1_ParamLimits

0x9f70,	// (0x00035781) postcard_address_pane_t1

0x9f63,	// (0x00035774) popup_call3_audio_in_window_ParamLimits

0x9f63,	// (0x00035774) popup_call3_audio_in_window

0x9e4b,	// (0x0003565c) bg_popup_call3_in_pane_ParamLimits

0x9e4b,	// (0x0003565c) bg_popup_call3_in_pane

0x9ea9,	// (0x000356ba) popup_call3_audio_in_window_g1_ParamLimits

0x9ea9,	// (0x000356ba) popup_call3_audio_in_window_g1

0x9ec1,	// (0x000356d2) popup_call3_audio_in_window_g2_ParamLimits

0x9ec1,	// (0x000356d2) popup_call3_audio_in_window_g2

0x9ed9,	// (0x000356ea) popup_call3_audio_in_window_g3_ParamLimits

0x9ed9,	// (0x000356ea) popup_call3_audio_in_window_g3

0x0003,

0xf658,	// (0x0003ae69) popup_call3_audio_in_window_g_ParamLimits

0xf658,	// (0x0003ae69) popup_call3_audio_in_window_g

0x9f01,	// (0x00035712) popup_call3_audio_in_window_t1_ParamLimits

0x9f01,	// (0x00035712) popup_call3_audio_in_window_t1

0x9f29,	// (0x0003573a) popup_call3_audio_in_window_t2_ParamLimits

0x9f29,	// (0x0003573a) popup_call3_audio_in_window_t2

0x9f51,	// (0x00035762) popup_call3_audio_in_window_t3_ParamLimits

0x9f51,	// (0x00035762) popup_call3_audio_in_window_t3

0x0002,

0xf661,	// (0x0003ae72) popup_call3_audio_in_window_t_ParamLimits

0xf661,	// (0x0003ae72) popup_call3_audio_in_window_t

0x18db,	// (0x0002d0ec) bg_popup_call3_rect_pane

0x2ba6,	// (0x0002e3b7) bg_popup_call3_rect_pane_g1

0xee90,	// (0x0003a6a1) bg_popup_call3_rect_pane_g2

0x2bae,	// (0x0002e3bf) bg_popup_call3_rect_pane_g3

0x2bb6,	// (0x0002e3c7) bg_popup_call3_rect_pane_g4

0x2bbe,	// (0x0002e3cf) bg_popup_call3_rect_pane_g5

0x2bc6,	// (0x0002e3d7) bg_popup_call3_rect_pane_g6

0x2bce,	// (0x0002e3df) bg_popup_call3_rect_pane_g7

0x93f5,	// (0x00034c06) mup_visualizer_osc_pane

0x19ba,	// (0x0002d1cb) mup_visualizer_spec_pane

0x9e6b,	// (0x0003567c) call3_video_qcif_pane_ParamLimits

0x9e6b,	// (0x0003567c) call3_video_qcif_pane

0x9e7b,	// (0x0003568c) call3_video_qcif_uncrop_pane_ParamLimits

0x9e7b,	// (0x0003568c) call3_video_qcif_uncrop_pane

0x9e87,	// (0x00035698) call3_video_subqcif_pane_ParamLimits

0x9e87,	// (0x00035698) call3_video_subqcif_pane

0x9e99,	// (0x000356aa) call3_video_subqcif_uncrop_pane_ParamLimits

0x9e99,	// (0x000356aa) call3_video_subqcif_uncrop_pane

0x9ef1,	// (0x00035702) popup_call3_audio_in_window_g4_ParamLimits

0x9ef1,	// (0x00035702) popup_call3_audio_in_window_g4

0x9e18,	// (0x00035629) mup_spec_half_pane

0x9e21,	// (0x00035632) mup_spec_half_pane_cp

0x2e7a,	// (0x0002e68b) mup_osc_middle_pane

0x2e83,	// (0x0002e694) mup_visualizer_osc_pane_g1

0x9df9,	// (0x0003560a) mup_spec_bar_pane_ParamLimits

0x9df9,	// (0x0003560a) mup_spec_bar_pane

0x2e67,	// (0x0002e678) mup_spec_bar_pane_g1

0x2e71,	// (0x0002e682) mup_spec_bar_pane_g2

0x0001,

0xf64c,	// (0x0003ae5d) mup_spec_bar_pane_g

0x7bd8,	// (0x000333e9) aid_cale_week_size_cell_pane_ParamLimits

0x7beb,	// (0x000333fc) bg_cale_heading_pane_ParamLimits

0xeed4,	// (0x0003a6e5) bg_cale_pane_cp01_ParamLimits

0x7bff,	// (0x00033410) cale_week_corner_pane_ParamLimits

0x7c15,	// (0x00033426) cale_week_day_heading_pane_ParamLimits

0x7c29,	// (0x0003343a) cale_week_scroll_pane_g1_ParamLimits

0x7c3a,	// (0x0003344b) cale_week_scroll_pane_g2_ParamLimits

0x7c4b,	// (0x0003345c) cale_week_scroll_pane_g3_ParamLimits

0x7c5c,	// (0x0003346d) cale_week_scroll_pane_g4_ParamLimits

0x7c6d,	// (0x0003347e) cale_week_scroll_pane_g5_ParamLimits

0x7c7e,	// (0x0003348f) cale_week_scroll_pane_g6_ParamLimits

0x7c8f,	// (0x000334a0) cale_week_scroll_pane_g7_ParamLimits

0x7ca0,	// (0x000334b1) cale_week_scroll_pane_g8_ParamLimits

0x7cb1,	// (0x000334c2) cale_week_scroll_pane_g9_ParamLimits

0x7cc2,	// (0x000334d3) cale_week_scroll_pane_g10_ParamLimits

0x7cd3,	// (0x000334e4) cale_week_scroll_pane_g11_ParamLimits

0x7ce4,	// (0x000334f5) cale_week_scroll_pane_g12_ParamLimits

0x7cf5,	// (0x00033506) cale_week_scroll_pane_g13_ParamLimits

0x7d06,	// (0x00033517) cale_week_scroll_pane_g14_ParamLimits

0x7d17,	// (0x00033528) cale_week_scroll_pane_g15_ParamLimits

0xf1e1,	// (0x0003a9f2) cale_week_scroll_pane_g_ParamLimits

0x7d28,	// (0x00033539) cale_week_time_pane_ParamLimits

0x7d39,	// (0x0003354a) grid_cale_week_pane_ParamLimits

0xeeed,	// (0x0003a6fe) listscroll_cale_week_pane_t1

0x7d4c,	// (0x0003355d) scroll_pane_cp08_ParamLimits

0x86cf,	// (0x00033ee0) cale_month_corner_pane_ParamLimits

0x1100,	// (0x0002c911) cale_month_pane_t1

0x8917,	// (0x00034128) cale_month_week_pane_ParamLimits

0x19ac,	// (0x0002d1bd) popup_call_status_window_g1_ParamLimits

0x8eaa,	// (0x000346bb) popup_call_status_window_g2_ParamLimits

0x8eb6,	// (0x000346c7) popup_call_status_window_g3_ParamLimits

0xf389,	// (0x0003ab9a) popup_call_status_window_g_ParamLimits

0x157e,	// (0x0002cd8f) aid_call2_pane

0x664d,	// (0x00031e5e) msg_header_pane_g1

0x96de,	// (0x00034eef) postcard_address2_pane_ParamLimits

0x96de,	// (0x00034eef) postcard_address2_pane

0x96ea,	// (0x00034efb) postcard_message2_pane_ParamLimits

0x96ea,	// (0x00034efb) postcard_message2_pane

0x9db0,	// (0x000355c1) message2_row_pane_ParamLimits

0x9db0,	// (0x000355c1) message2_row_pane

0x9dc8,	// (0x000355d9) address2_row_pane_ParamLimits

0x9dc8,	// (0x000355d9) address2_row_pane

0x2e35,	// (0x0002e646) postcard_message2_row_pane_g1

0x2e3d,	// (0x0002e64e) postcard_message2_row_pane_t1

0x2e35,	// (0x0002e646) address2_row_pane_g1

0x2e3d,	// (0x0002e64e) address2_row_pane_t1

0x1c8c,	// (0x0002d49d) aid_size_cell_vorec

0xea73,	// (0x0003a284) main_rss_pane

0x9ddb,	// (0x000355ec) rss_list_single_pane_ParamLimits

0x9ddb,	// (0x000355ec) rss_list_single_pane

0x2e4b,	// (0x0002e65c) rss_list_single_pane_t1

0x2e59,	// (0x0002e66a) rss_list_single_pane_t2

0x0001,

0xf647,	// (0x0003ae58) rss_list_single_pane_t

0xea73,	// (0x0003a284) main_camera2_pane

0xea73,	// (0x0003a284) main_video2_pane

0x9fd7,	// (0x000357e8) cams_zoom_pane_cp2_ParamLimits

0x9fd7,	// (0x000357e8) cams_zoom_pane_cp2

0x9fe3,	// (0x000357f4) image2_vga_pane_ParamLimits

0x9fe3,	// (0x000357f4) image2_vga_pane

0x9ff2,	// (0x00035803) main_camera2_pane_g1_ParamLimits

0x9ff2,	// (0x00035803) main_camera2_pane_g1

0x9ffe,	// (0x0003580f) main_camera2_pane_g2_ParamLimits

0x9ffe,	// (0x0003580f) main_camera2_pane_g2

0xa00a,	// (0x0003581b) main_camera2_pane_g3_ParamLimits

0xa00a,	// (0x0003581b) main_camera2_pane_g3

0xa016,	// (0x00035827) main_camera2_pane_g4_ParamLimits

0xa016,	// (0x00035827) main_camera2_pane_g4

0xa022,	// (0x00035833) main_camera2_pane_g5_ParamLimits

0xa022,	// (0x00035833) main_camera2_pane_g5

0xa02e,	// (0x0003583f) main_camera2_pane_g6_ParamLimits

0xa02e,	// (0x0003583f) main_camera2_pane_g6

0xa03a,	// (0x0003584b) main_camera2_pane_g7_ParamLimits

0xa03a,	// (0x0003584b) main_camera2_pane_g7

0xa046,	// (0x00035857) main_camera2_pane_g8_ParamLimits

0xa046,	// (0x00035857) main_camera2_pane_g8

0x0008,

0xf668,	// (0x0003ae79) main_camera2_pane_g_ParamLimits

0xf668,	// (0x0003ae79) main_camera2_pane_g

0xa05e,	// (0x0003586f) main_camera2_pane_t1_ParamLimits

0xa05e,	// (0x0003586f) main_camera2_pane_t1

0xa070,	// (0x00035881) main_camera2_pane_t2_ParamLimits

0xa070,	// (0x00035881) main_camera2_pane_t2

0xa082,	// (0x00035893) main_camera2_pane_t3_ParamLimits

0xa082,	// (0x00035893) main_camera2_pane_t3

0xa094,	// (0x000358a5) main_camera2_pane_t4_ParamLimits

0xa094,	// (0x000358a5) main_camera2_pane_t4

0x0006,

0xf67b,	// (0x0003ae8c) main_camera2_pane_t_ParamLimits

0xf67b,	// (0x0003ae8c) main_camera2_pane_t

0xa0ef,	// (0x00035900) cams_zoom_pane_cp4_ParamLimits

0xa0ef,	// (0x00035900) cams_zoom_pane_cp4

0xa0ff,	// (0x00035910) image2_cif_pane_ParamLimits

0xa0ff,	// (0x00035910) image2_cif_pane

0xa110,	// (0x00035921) image2_subqcif_pane_ParamLimits

0xa110,	// (0x00035921) image2_subqcif_pane

0xa11d,	// (0x0003592e) main_video2_pane_g1_ParamLimits

0xa11d,	// (0x0003592e) main_video2_pane_g1

0xa12f,	// (0x00035940) main_video2_pane_g2_ParamLimits

0xa12f,	// (0x00035940) main_video2_pane_g2

0xa13f,	// (0x00035950) main_video2_pane_g3_ParamLimits

0xa13f,	// (0x00035950) main_video2_pane_g3

0xa14f,	// (0x00035960) main_video2_pane_g4_ParamLimits

0xa14f,	// (0x00035960) main_video2_pane_g4

0xa15f,	// (0x00035970) main_video2_pane_g5_ParamLimits

0xa15f,	// (0x00035970) main_video2_pane_g5

0xa16f,	// (0x00035980) main_video2_pane_g6_ParamLimits

0xa16f,	// (0x00035980) main_video2_pane_g6

0x0005,

0xf68a,	// (0x0003ae9b) main_video2_pane_g_ParamLimits

0xf68a,	// (0x0003ae9b) main_video2_pane_g

0xa181,	// (0x00035992) main_video2_pane_t1_ParamLimits

0xa181,	// (0x00035992) main_video2_pane_t1

0xa19b,	// (0x000359ac) main_video2_pane_t2_ParamLimits

0xa19b,	// (0x000359ac) main_video2_pane_t2

0xa1c1,	// (0x000359d2) main_video2_pane_t3_ParamLimits

0xa1c1,	// (0x000359d2) main_video2_pane_t3

0x0002,

0xf697,	// (0x0003aea8) main_video2_pane_t_ParamLimits

0xf697,	// (0x0003aea8) main_video2_pane_t

0x9b92,	// (0x000353a3) call_muted_g2

0x0001,

0xf639,	// (0x0003ae4a) call_muted_g

0xea73,	// (0x0003a284) main_mup2_pane

0x2f35,	// (0x0002e746) main_mup2_pane_g1_ParamLimits

0x2f35,	// (0x0002e746) main_mup2_pane_g1

0xa1e7,	// (0x000359f8) main_mup2_pane_g2_ParamLimits

0xa1e7,	// (0x000359f8) main_mup2_pane_g2

0xa457,	// (0x00035c68) main_mup_pane_g13_cp1

0xa45f,	// (0x00035c70) mup_volume_pane_cp1

0xa207,	// (0x00035a18) main_mup2_pane_g4_ParamLimits

0xa207,	// (0x00035a18) main_mup2_pane_g4

0xa218,	// (0x00035a29) main_mup2_pane_g5_ParamLimits

0xa218,	// (0x00035a29) main_mup2_pane_g5

0xa229,	// (0x00035a3a) main_mup2_pane_g6_ParamLimits

0xa229,	// (0x00035a3a) main_mup2_pane_g6

0xa23a,	// (0x00035a4b) main_mup2_pane_g7_ParamLimits

0xa23a,	// (0x00035a4b) main_mup2_pane_g7

0x0006,

0xf69e,	// (0x0003aeaf) main_mup2_pane_g_ParamLimits

0xf69e,	// (0x0003aeaf) main_mup2_pane_g

0xa256,	// (0x00035a67) main_mup2_pane_t1_ParamLimits

0xa256,	// (0x00035a67) main_mup2_pane_t1

0xa26d,	// (0x00035a7e) main_mup2_pane_t2_ParamLimits

0xa26d,	// (0x00035a7e) main_mup2_pane_t2

0xa284,	// (0x00035a95) main_mup2_pane_t3_ParamLimits

0xa284,	// (0x00035a95) main_mup2_pane_t3

0xa29b,	// (0x00035aac) main_mup2_pane_t4_ParamLimits

0xa29b,	// (0x00035aac) main_mup2_pane_t4

0xa2b5,	// (0x00035ac6) main_mup2_pane_t5_ParamLimits

0xa2b5,	// (0x00035ac6) main_mup2_pane_t5

0xa2cf,	// (0x00035ae0) main_mup2_pane_t6_ParamLimits

0xa2cf,	// (0x00035ae0) main_mup2_pane_t6

0x0005,

0xf6ad,	// (0x0003aebe) main_mup2_pane_t_ParamLimits

0xf6ad,	// (0x0003aebe) main_mup2_pane_t

0xa307,	// (0x00035b18) mup2_visualizer_pane_ParamLimits

0xa307,	// (0x00035b18) mup2_visualizer_pane

0xa339,	// (0x00035b4a) mup_progress_pane_cp_ParamLimits

0xa339,	// (0x00035b4a) mup_progress_pane_cp

0xa442,	// (0x00035c53) mup_volume_pane_cp_ParamLimits

0xa442,	// (0x00035c53) mup_volume_pane_cp

0xa350,	// (0x00035b61) mup2_visualizer_pane_g1_ParamLimits

0xa350,	// (0x00035b61) mup2_visualizer_pane_g1

0x2f07,	// (0x0002e718) mup2_visualizer_pane_g2_ParamLimits

0x2f07,	// (0x0002e718) mup2_visualizer_pane_g2

0xa365,	// (0x00035b76) mup2_visualizer_pane_g3_ParamLimits

0xa365,	// (0x00035b76) mup2_visualizer_pane_g3

0x0002,

0xf6ba,	// (0x0003aecb) mup2_visualizer_pane_g_ParamLimits

0xf6ba,	// (0x0003aecb) mup2_visualizer_pane_g

0x1c8c,	// (0x0002d49d) aid_size_cell_fmradio

0x9c74,	// (0x00035485) aid_height_parent_landcape

0x0f67,	// (0x0002c778) wml_content_pane_cp

0x0f6f,	// (0x0002c780) wml_tabs_pane

0x0f78,	// (0x0002c789) popup_wml_miniature_window

0x0f80,	// (0x0002c791) scroll_pane_cp021

0x0f94,	// (0x0002c7a5) wml_content_pane_comp8

0xea73,	// (0x0003a284) bg_popup_sub_pane_cp05

0x2f25,	// (0x0002e736) popup_wml_miniature_window_g1

0x2f2d,	// (0x0002e73e) wml_miniature_view_pane

0xa371,	// (0x00035b82) aid_size_wml_view

0xa379,	// (0x00035b8a) wml_miniature_view_pane_g1

0xa382,	// (0x00035b93) wml_miniature_view_pane_g2

0xa38b,	// (0x00035b9c) wml_miniature_view_pane_g3

0xa393,	// (0x00035ba4) wml_miniature_view_pane_g4

0xa39b,	// (0x00035bac) wml_miniature_view_pane_g5

0xa3a3,	// (0x00035bb4) wml_miniature_view_pane_g6

0xa3ab,	// (0x00035bbc) wml_miniature_view_pane_g7

0xa3b3,	// (0x00035bc4) wml_miniature_view_pane_g8

0x0007,

0xf6c1,	// (0x0003aed2) wml_miniature_view_pane_g

0x2f35,	// (0x0002e746) background_graphic_ParamLimits

0x2f35,	// (0x0002e746) background_graphic

0x2f41,	// (0x0002e752) wml_tabs_2_pane

0x2f4a,	// (0x0002e75b) wml_tabs_3_pane_ParamLimits

0x2f4a,	// (0x0002e75b) wml_tabs_3_pane

0x2f5c,	// (0x0002e76d) wml_tabs_4_pane_ParamLimits

0x2f5c,	// (0x0002e76d) wml_tabs_4_pane

0x2f72,	// (0x0002e783) wml_tabs_5_pane_ParamLimits

0x2f72,	// (0x0002e783) wml_tabs_5_pane

0x2f8c,	// (0x0002e79d) wml_tabs_pane_g2_ParamLimits

0x2f8c,	// (0x0002e79d) wml_tabs_pane_g2

0x2fa0,	// (0x0002e7b1) wml_tabs_pane_g3_ParamLimits

0x2fa0,	// (0x0002e7b1) wml_tabs_pane_g3

0xa3bb,	// (0x00035bcc) wml_tabs_2_active_pane_ParamLimits

0xa3bb,	// (0x00035bcc) wml_tabs_2_active_pane

0xa3cb,	// (0x00035bdc) wml_tabs_2_passive_pane_ParamLimits

0xa3cb,	// (0x00035bdc) wml_tabs_2_passive_pane

0xa3db,	// (0x00035bec) wml_tabs_3_active_pane_cp_ParamLimits

0xa3db,	// (0x00035bec) wml_tabs_3_active_pane_cp

0xa3ec,	// (0x00035bfd) wml_tabs_3_passive_pane_ParamLimits

0xa3ec,	// (0x00035bfd) wml_tabs_3_passive_pane

0xa3fd,	// (0x00035c0e) wml_tabs_3_passive_pane_cp_ParamLimits

0xa3fd,	// (0x00035c0e) wml_tabs_3_passive_pane_cp

0xa40e,	// (0x00035c1f) tabs_4_active_pane

0xa416,	// (0x00035c27) tabs_4_passive_pane

0xa41e,	// (0x00035c2f) tabs_4_passive_pane_cp

0xa426,	// (0x00035c37) tabs_4_passive_pane_cp2

0x9a75,	// (0x00035286) aid_height_text

0x93c2,	// (0x00034bd3) mup_volume_cont_pane_ParamLimits

0x93c2,	// (0x00034bd3) mup_volume_cont_pane

0x77bf,	// (0x00032fd0) aid_size_cell_pinb

0x77c9,	// (0x00032fda) aid_size_list_pinb

0xa322,	// (0x00035b33) mup2_volume_cont_pane_ParamLimits

0xa322,	// (0x00035b33) mup2_volume_cont_pane

0xa42e,	// (0x00035c3f) mup2_volume_cont_pane_g1_ParamLimits

0xa42e,	// (0x00035c3f) mup2_volume_cont_pane_g1

0x74a8,	// (0x00032cb9) aid_size_cell_touch_ParamLimits

0x74a8,	// (0x00032cb9) aid_size_cell_touch

0x76bf,	// (0x00032ed0) touch_pane_ParamLimits

0x76bf,	// (0x00032ed0) touch_pane

0xe617,	// (0x00039e28) main_rss2_pane

0x2ff6,	// (0x0002e807) listscroll_rss2_pane

0x2fff,	// (0x0002e810) rss2_navigation_pane

0x3007,	// (0x0002e818) list_rss2_pane

0x171c,	// (0x0002cf2d) scroll_pane_cp22

0x300f,	// (0x0002e820) rss2_navigation_pane_g1

0x3018,	// (0x0002e829) rss2_navigation_pane_g2

0x3020,	// (0x0002e831) rss2_navigation_pane_g3

0x0002,

0xf6d2,	// (0x0003aee3) rss2_navigation_pane_g

0x3028,	// (0x0002e839) rss2_navigation_pane_t1

0xa467,	// (0x00035c78) rss2_list_single_pane_ParamLimits

0xa467,	// (0x00035c78) rss2_list_single_pane

0x3036,	// (0x0002e847) rss2_list_single_pane_t2

0x3044,	// (0x0002e855) rss2_list_single_pane_t3_ParamLimits

0x3044,	// (0x0002e855) rss2_list_single_pane_t3

0x3061,	// (0x0002e872) rss2_list_single_pane_t4

0x8d63,	// (0x00034574) smil_status_pane_g1

0xf0cc,	// (0x0003a8dd) main_image2_pane_ParamLimits

0xf0cc,	// (0x0003a8dd) main_image2_pane

0xa052,	// (0x00035863) main_camera2_pane_g9_ParamLimits

0xa052,	// (0x00035863) main_camera2_pane_g9

0xa0a6,	// (0x000358b7) main_camera2_pane_t5_ParamLimits

0xa0a6,	// (0x000358b7) main_camera2_pane_t5

0xa0b8,	// (0x000358c9) main_camera2_pane_t6_ParamLimits

0xa0b8,	// (0x000358c9) main_camera2_pane_t6

0xa47e,	// (0x00035c8f) main_image2_pane_g1_ParamLimits

0xa47e,	// (0x00035c8f) main_image2_pane_g1

0x988a,	// (0x0003509b) smil2_video_pane_ParamLimits

0x988a,	// (0x0003509b) smil2_video_pane

0x63e0,	// (0x00031bf1) aid_zoom_text_primary_cp

0xe65a,	// (0x00039e6b) popup_preview_fixed_window

0xf052,	// (0x0003a863) im_reading_pane_g1

0x9fae,	// (0x000357bf) cams2_bc_adjust_pane_cp_ParamLimits

0x9fae,	// (0x000357bf) cams2_bc_adjust_pane_cp

0xa0e3,	// (0x000358f4) cams2_bc_adjust_pane_ParamLimits

0xa0e3,	// (0x000358f4) cams2_bc_adjust_pane

0xa48a,	// (0x00035c9b) cams2_bc_adjust_pane_g1

0xa492,	// (0x00035ca3) cams2_slider_pane

0xa49b,	// (0x00035cac) cams2_slider_pane_g1

0xa4a4,	// (0x00035cb5) cams2_slider_pane_g2

0x0006,

0xf6d9,	// (0x0003aeea) cams2_slider_pane_g

0x78a8,	// (0x000330b9) calc_display_pane_ParamLimits

0x78c0,	// (0x000330d1) calc_paper_pane_ParamLimits

0x78dc,	// (0x000330ed) grid_calc_pane_ParamLimits

0x8f28,	// (0x00034739) popup_clock_digital_window_t1_ParamLimits

0x1c29,	// (0x0002d43a) main_image_pane_t1

0x788e,	// (0x0003309f) aid_size_cell_calc_ParamLimits

0x788e,	// (0x0003309f) aid_size_cell_calc

0x9c99,	// (0x000354aa) popup_blid_sat_info2_window_ParamLimits

0x9c99,	// (0x000354aa) popup_blid_sat_info2_window

0x30ab,	// (0x0002e8bc) aid_size_cell_blid

0x30b3,	// (0x0002e8c4) bg_popup_window_pane_cp07

0x30d6,	// (0x0002e8e7) grid_popup_blid_pane

0x30de,	// (0x0002e8ef) heading_pane_cp05_ParamLimits

0x30de,	// (0x0002e8ef) heading_pane_cp05

0x31a6,	// (0x0002e9b7) cell_popup_blid_pane_ParamLimits

0x31a6,	// (0x0002e9b7) cell_popup_blid_pane

0x31c6,	// (0x0002e9d7) cell_popup_blid_pane_g1

0x31ce,	// (0x0002e9df) cell_popup_blid_pane_t1

0xa2ec,	// (0x00035afd) mup2_indicator_pane_ParamLimits

0xa2ec,	// (0x00035afd) mup2_indicator_pane

0x18db,	// (0x0002d0ec) mup2_visualizer_osc_pane

0x2f13,	// (0x0002e724) mup2_visualizer_spec_pane_ParamLimits

0x2f13,	// (0x0002e724) mup2_visualizer_spec_pane

0xa4be,	// (0x00035ccf) mup2_spec_half_pane

0xa4c7,	// (0x00035cd8) mup2_spec_half_pane_cp

0xa4cf,	// (0x00035ce0) mup2_spec_bar_pane_ParamLimits

0xa4cf,	// (0x00035ce0) mup2_spec_bar_pane

0x2e67,	// (0x0002e678) mup2_spec_bar_pane_g1

0x2e71,	// (0x0002e682) mup2_spec_bar_pane_g2

0x0001,

0xf64c,	// (0x0003ae5d) mup2_spec_bar_pane_g

0xa4ee,	// (0x00035cff) mup2_osc_middle_pane

0x2e83,	// (0x0002e694) mup2_visualizer_osc_pane_g1

0xe682,	// (0x00039e93) popup_number_entry_window_t1_ParamLimits

0xe695,	// (0x00039ea6) popup_number_entry_window_t2_ParamLimits

0xe6a7,	// (0x00039eb8) popup_number_entry_window_t3_ParamLimits

0x770c,	// (0x00032f1d) popup_number_entry_window_t5_ParamLimits

0x770c,	// (0x00032f1d) popup_number_entry_window_t5

0xf0fb,	// (0x0003a90c) popup_number_entry_window_t_ParamLimits

0xe6b9,	// (0x00039eca) text_title_cp2_ParamLimits

0x95c8,	// (0x00034dd9) aid_hotspot_pointer_text2_pane

0x965a,	// (0x00034e6b) main_viewer_pane_g9_ParamLimits

0x965a,	// (0x00034e6b) main_viewer_pane_g9

0x1100,	// (0x0002c911) cale_month_pane_t1_ParamLimits

0x1195,	// (0x0002c9a6) bg_cale_pane_ParamLimits

0x11ad,	// (0x0002c9be) list_cale_pane_ParamLimits

0xeeed,	// (0x0003a6fe) listscroll_cale_day_pane_t1

0x11be,	// (0x0002c9cf) scroll_pane_cp09_ParamLimits

0x93fd,	// (0x00034c0e) main_mup_eq_pane_t1_ParamLimits

0x93fd,	// (0x00034c0e) main_mup_eq_pane_t1

0x9413,	// (0x00034c24) main_mup_eq_pane_t2_ParamLimits

0x9413,	// (0x00034c24) main_mup_eq_pane_t2

0x9429,	// (0x00034c3a) main_mup_eq_pane_t3_ParamLimits

0x9429,	// (0x00034c3a) main_mup_eq_pane_t3

0x943f,	// (0x00034c50) main_mup_eq_pane_t4_ParamLimits

0x943f,	// (0x00034c50) main_mup_eq_pane_t4

0x9455,	// (0x00034c66) main_mup_eq_pane_t5_ParamLimits

0x9455,	// (0x00034c66) main_mup_eq_pane_t5

0x946b,	// (0x00034c7c) main_mup_eq_pane_t6_ParamLimits

0x946b,	// (0x00034c7c) main_mup_eq_pane_t6

0x947d,	// (0x00034c8e) main_mup_eq_pane_t7_ParamLimits

0x947d,	// (0x00034c8e) main_mup_eq_pane_t7

0x948f,	// (0x00034ca0) main_mup_eq_pane_t8_ParamLimits

0x948f,	// (0x00034ca0) main_mup_eq_pane_t8

0x94a1,	// (0x00034cb2) main_mup_eq_pane_t9_ParamLimits

0x94a1,	// (0x00034cb2) main_mup_eq_pane_t9

0x94b7,	// (0x00034cc8) main_mup_eq_pane_t10_ParamLimits

0x94b7,	// (0x00034cc8) main_mup_eq_pane_t10

0x0009,

0xf488,	// (0x0003ac99) main_mup_eq_pane_t_ParamLimits

0xf488,	// (0x0003ac99) main_mup_eq_pane_t

0x954a,	// (0x00034d5b) mup_equalizer_pane_cp5_ParamLimits

0x955c,	// (0x00034d6d) mup_equalizer_pane_cp6_ParamLimits

0x956e,	// (0x00034d7f) mup_equalizer_pane_cp7_ParamLimits

0xe617,	// (0x00039e28) main_gallery_pane

0x2e8c,	// (0x0002e69d) smil2_volume_pane

0x2ea7,	// (0x0002e6b8) smil_status_volume_pane_g1_ParamLimits

0x2e94,	// (0x0002e6a5) smil_status_volume_pane_g2_ParamLimits

0x9e29,	// (0x0003563a) smil_status_volume_pane_g3_ParamLimits

0xf651,	// (0x0003ae62) smil_status_volume_pane_g_ParamLimits

0x30b3,	// (0x0002e8c4) bg_popup_window_pane_cp07_ParamLimits

0x30c1,	// (0x0002e8d2) blid_firmament_pane

0xa4f7,	// (0x00035d08) aid_size_cell_gallery_ParamLimits

0xa4f7,	// (0x00035d08) aid_size_cell_gallery

0xa505,	// (0x00035d16) grid_gallery_pane_ParamLimits

0xa505,	// (0x00035d16) grid_gallery_pane

0xa511,	// (0x00035d22) cell_gallery_pane_ParamLimits

0xa511,	// (0x00035d22) cell_gallery_pane

0x31dc,	// (0x0002e9ed) bg_cell_gallery_focus_pane_ParamLimits

0x31dc,	// (0x0002e9ed) bg_cell_gallery_focus_pane

0x31ee,	// (0x0002e9ff) cell_gallery_pane_g1_ParamLimits

0x31ee,	// (0x0002e9ff) cell_gallery_pane_g1

0xa550,	// (0x00035d61) cell_gallery_pane_g2_ParamLimits

0xa550,	// (0x00035d61) cell_gallery_pane_g2

0xa55d,	// (0x00035d6e) cell_gallery_pane_g3_ParamLimits

0xa55d,	// (0x00035d6e) cell_gallery_pane_g3

0x31fa,	// (0x0002ea0b) cell_gallery_pane_g4_ParamLimits

0x31fa,	// (0x0002ea0b) cell_gallery_pane_g4

0x0003,

0xf6ff,	// (0x0003af10) cell_gallery_pane_g_ParamLimits

0xf6ff,	// (0x0003af10) cell_gallery_pane_g

0x3206,	// (0x0002ea17) bg_cell_gallery_focus_pane_g1

0x320e,	// (0x0002ea1f) bg_cell_gallery_focus_pane_g2

0x3216,	// (0x0002ea27) bg_cell_gallery_focus_pane_g3

0x321e,	// (0x0002ea2f) bg_cell_gallery_focus_pane_g4

0x3226,	// (0x0002ea37) bg_cell_gallery_focus_pane_g5

0x322e,	// (0x0002ea3f) bg_cell_gallery_focus_pane_g6

0x3236,	// (0x0002ea47) bg_cell_gallery_focus_pane_g7

0x323e,	// (0x0002ea4f) bg_cell_gallery_focus_pane_g8

0x0007,

0xf708,	// (0x0003af19) bg_cell_gallery_focus_pane_g

0x3246,	// (0x0002ea57) aid_firma_cardinal

0x325a,	// (0x0002ea6b) blid_firmament_pane_t1

0x3271,	// (0x0002ea82) blid_firmament_pane_t2

0x3288,	// (0x0002ea99) blid_firmament_pane_t3

0x329f,	// (0x0002eab0) blid_firmament_pane_t4

0x0003,

0xf719,	// (0x0003af2a) blid_firmament_pane_t

0x32b6,	// (0x0002eac7) blid_sat_info_pane

0x32c6,	// (0x0002ead7) blid_sat_info_pane_g1

0x32c6,	// (0x0002ead7) blid_sat_info_pane_g2

0x0001,

0xf722,	// (0x0003af33) blid_sat_info_pane_g

0x32d0,	// (0x0002eae1) blid_sat_info_pane_t1

0x32de,	// (0x0002eaef) smil2_volume_content_pane

0x32e7,	// (0x0002eaf8) smil2_volume_pane_g1

0x32ef,	// (0x0002eb00) smil2_volume_content_pane_g1

0x32f8,	// (0x0002eb09) smil2_volume_content_pane_g2

0x3301,	// (0x0002eb12) smil2_volume_content_pane_g3

0x330a,	// (0x0002eb1b) smil2_volume_content_pane_g4

0x3313,	// (0x0002eb24) smil2_volume_content_pane_g5

0x331c,	// (0x0002eb2d) smil2_volume_content_pane_g6

0x3325,	// (0x0002eb36) smil2_volume_content_pane_g7

0x332e,	// (0x0002eb3f) smil2_volume_content_pane_g8

0x3337,	// (0x0002eb48) smil2_volume_content_pane_g9

0x3340,	// (0x0002eb51) smil2_volume_content_pane_g10

0x0009,

0xf727,	// (0x0003af38) smil2_volume_content_pane_g

0x7da0,	// (0x000335b1) cale_week_day_heading_pane_t1_ParamLimits

0x7db9,	// (0x000335ca) cale_week_day_heading_pane_t2_ParamLimits

0x7dd2,	// (0x000335e3) cale_week_day_heading_pane_t3_ParamLimits

0x7deb,	// (0x000335fc) cale_week_day_heading_pane_t4_ParamLimits

0x7e04,	// (0x00033615) cale_week_day_heading_pane_t5_ParamLimits

0x7e1d,	// (0x0003362e) cale_week_day_heading_pane_t6_ParamLimits

0x7e36,	// (0x00033647) cale_week_day_heading_pane_t7_ParamLimits

0xf200,	// (0x0003aa11) cale_week_day_heading_pane_t_ParamLimits

0xeeff,	// (0x0003a710) bg_cale_side_pane_ParamLimits

0x7e4f,	// (0x00033660) cale_week_time_pane_t1_ParamLimits

0x7e7b,	// (0x0003368c) cale_week_time_pane_t2_ParamLimits

0x7ea7,	// (0x000336b8) cale_week_time_pane_t3_ParamLimits

0x7ed3,	// (0x000336e4) cale_week_time_pane_t4_ParamLimits

0x7eff,	// (0x00033710) cale_week_time_pane_t5_ParamLimits

0x7f2b,	// (0x0003373c) cale_week_time_pane_t6_ParamLimits

0x7f57,	// (0x00033768) cale_week_time_pane_t7_ParamLimits

0x7f83,	// (0x00033794) cale_week_time_pane_t8_ParamLimits

0xf20f,	// (0x0003aa20) cale_week_time_pane_t_ParamLimits

0x7faf,	// (0x000337c0) cell_cale_week_pane_g2_ParamLimits

0xeeff,	// (0x0003a710) bg_cale_side_pane_cp01_ParamLimits

0x8c02,	// (0x00034413) cale_month_week_pane_t1_ParamLimits

0x8c19,	// (0x0003442a) cale_month_week_pane_t2_ParamLimits

0x8c30,	// (0x00034441) cale_month_week_pane_t3_ParamLimits

0x8c47,	// (0x00034458) cale_month_week_pane_t4_ParamLimits

0x8c5e,	// (0x0003446f) cale_month_week_pane_t5_ParamLimits

0x8c75,	// (0x00034486) cale_month_week_pane_t6_ParamLimits

0xf2e8,	// (0x0003aaf9) cale_month_week_pane_t_ParamLimits

0x8d32,	// (0x00034543) cell_cale_month_pane_g1_ParamLimits

0xe617,	// (0x00039e28) main_cale_event_viewer_pane

0xe617,	// (0x00039e28) listscroll_cale_event_viewer_pane

0x3349,	// (0x0002eb5a) list_cale_ev_pane

0x3351,	// (0x0002eb62) scroll_pane_cp023

0xa56a,	// (0x00035d7b) field_cale_ev_pane_ParamLimits

0xa56a,	// (0x00035d7b) field_cale_ev_pane

0x335d,	// (0x0002eb6e) field_cale_ev_content_pane_ParamLimits

0x335d,	// (0x0002eb6e) field_cale_ev_content_pane

0x3369,	// (0x0002eb7a) field_cale_ev_pane_g1_ParamLimits

0x3369,	// (0x0002eb7a) field_cale_ev_pane_g1

0x3375,	// (0x0002eb86) field_cale_ev_pane_g2_ParamLimits

0x3375,	// (0x0002eb86) field_cale_ev_pane_g2

0x338d,	// (0x0002eb9e) field_cale_ev_pane_g3_ParamLimits

0x338d,	// (0x0002eb9e) field_cale_ev_pane_g3

0x0002,

0xf73c,	// (0x0003af4d) field_cale_ev_pane_g_ParamLimits

0xf73c,	// (0x0003af4d) field_cale_ev_pane_g

0x33a5,	// (0x0002ebb6) field_cale_ev_pane_t1_ParamLimits

0x33a5,	// (0x0002ebb6) field_cale_ev_pane_t1

0xa584,	// (0x00035d95) field_cale_ev_content_pane_t1_ParamLimits

0xa584,	// (0x00035d95) field_cale_ev_content_pane_t1

0x1a6c,	// (0x0002d27d) bg_button_pane_cp01

0xeec5,	// (0x0003a6d6) listscroll_cale_week_pane_ParamLimits

0x7bd0,	// (0x000333e1) popup_toolbar_window_cp01

0xeeed,	// (0x0003a6fe) listscroll_cale_week_pane_t1_ParamLimits

0xed9d,	// (0x0003a5ae) listscroll_cale_day_pane_ParamLimits

0x7bd0,	// (0x000333e1) popup_toolbar_window_cp02

0xeeed,	// (0x0003a6fe) listscroll_cale_day_pane_t1_ParamLimits

0xeec5,	// (0x0003a6d6) main_cale_month_pane_ParamLimits

0x9d39,	// (0x0003554a) popup_toolbar_window_cp03_ParamLimits

0x9d39,	// (0x0003554a) popup_toolbar_window_cp03

0x97b2,	// (0x00034fc3) main_image_pane_g2_ParamLimits

0x97b2,	// (0x00034fc3) main_image_pane_g2

0x97be,	// (0x00034fcf) main_image_pane_g3_ParamLimits

0x97be,	// (0x00034fcf) main_image_pane_g3

0x0002,

0xf51a,	// (0x0003ad2b) main_image_pane_g_ParamLimits

0xf51a,	// (0x0003ad2b) main_image_pane_g

0x1c29,	// (0x0002d43a) main_image_pane_t1_ParamLimits

0x97ca,	// (0x00034fdb) main_image_pane_t2_ParamLimits

0x97ca,	// (0x00034fdb) main_image_pane_t2

0x97dc,	// (0x00034fed) main_image_pane_t3_ParamLimits

0x97dc,	// (0x00034fed) main_image_pane_t3

0x97ee,	// (0x00034fff) main_image_pane_t4_ParamLimits

0x97ee,	// (0x00034fff) main_image_pane_t4

0x0003,

0xf521,	// (0x0003ad32) main_image_pane_t_ParamLimits

0xf521,	// (0x0003ad32) main_image_pane_t

0x9800,	// (0x00035011) popup_image_details_window_cp01

0x9808,	// (0x00035019) popup_toobar_trans_pane_cp01_ParamLimits

0x9808,	// (0x00035019) popup_toobar_trans_pane_cp01

0x9cd8,	// (0x000354e9) popup_image_details_window_ParamLimits

0x9cd8,	// (0x000354e9) popup_image_details_window

0x2def,	// (0x0002e600) popup_image_focus_window

0x9fa2,	// (0x000357b3) camera2_autofocus_pane_ParamLimits

0x9fa2,	// (0x000357b3) camera2_autofocus_pane

0xe617,	// (0x00039e28) bg_popup_sub_pane_cp06

0x33bc,	// (0x0002ebcd) popup_image_focus_window_g1

0x33c4,	// (0x0002ebd5) popup_image_focus_window_g2

0x33cc,	// (0x0002ebdd) popup_image_focus_window_g3

0x33d4,	// (0x0002ebe5) popup_image_focus_window_g4

0x0003,

0xf743,	// (0x0003af54) popup_image_focus_window_g

0x33dc,	// (0x0002ebed) popup_image_focus_window_t1

0x33ea,	// (0x0002ebfb) popup_image_focus_window_t2

0x33f9,	// (0x0002ec0a) popup_image_focus_window_t3

0x0002,

0xf74c,	// (0x0003af5d) popup_image_focus_window_t

0x3407,	// (0x0002ec18) camera2_autofocus_pane_g1

0xf0cc,	// (0x0003a8dd) bg_tb_trans_pane_cp01

0x3415,	// (0x0002ec26) popup_image_details_window_g1

0x3428,	// (0x0002ec39) popup_image_details_window_g2

0x0002,

0xf75e,	// (0x0003af6f) popup_image_details_window_g

0x3451,	// (0x0002ec62) popup_image_details_window_t1

0x3463,	// (0x0002ec74) popup_image_details_window_t2

0x347c,	// (0x0002ec8d) popup_image_details_window_t3

0x3490,	// (0x0002eca1) popup_image_details_window_t4

0x34ab,	// (0x0002ecbc) popup_image_details_window_t5

0x0004,

0xf765,	// (0x0003af76) popup_image_details_window_t

0xed85,	// (0x0003a596) bg_calc_paper_pane_ParamLimits

0xe617,	// (0x00039e28) grid_highlight_pane_cp013

0x79bd,	// (0x000331ce) list_calc_pane_ParamLimits

0x79cf,	// (0x000331e0) scroll_pane_cp024

0xed9d,	// (0x0003a5ae) bg_calc_display_pane_ParamLimits

0x79d7,	// (0x000331e8) calc_display_pane_t1_ParamLimits

0x79ec,	// (0x000331fd) calc_display_pane_t2_ParamLimits

0x7a01,	// (0x00033212) calc_display_pane_t3_ParamLimits

0xf182,	// (0x0003a993) calc_display_pane_t_ParamLimits

0x7ab7,	// (0x000332c8) cell_calc_pane_g2

0x0001,

0xf19f,	// (0x0003a9b0) cell_calc_pane_g

0x7ac0,	// (0x000332d1) cell_calc_pane_t1

0xedfc,	// (0x0003a60d) grid_highlight_pane_cp02_ParamLimits

0xee12,	// (0x0003a623) toolbar_button_pane_cp01_ParamLimits

0xee12,	// (0x0003a623) toolbar_button_pane_cp01

0x1c6e,	// (0x0002d47f) temp_image_control_pane_ParamLimits

0x1c6e,	// (0x0002d47f) temp_image_control_pane

0xf0cc,	// (0x0003a8dd) main_mp3_pane

0x34c5,	// (0x0002ecd6) temp_image_control_pane_g1_ParamLimits

0x34c5,	// (0x0002ecd6) temp_image_control_pane_g1

0x34d3,	// (0x0002ece4) temp_image_control_pane_g2_ParamLimits

0x34d3,	// (0x0002ece4) temp_image_control_pane_g2

0x34e5,	// (0x0002ecf6) temp_image_control_pane_g3_ParamLimits

0x34e5,	// (0x0002ecf6) temp_image_control_pane_g3

0xa5ce,	// (0x00035ddf) temp_image_control_pane_g4_ParamLimits

0xa5ce,	// (0x00035ddf) temp_image_control_pane_g4

0x0003,

0xf770,	// (0x0003af81) temp_image_control_pane_g_ParamLimits

0xf770,	// (0x0003af81) temp_image_control_pane_g

0x34c5,	// (0x0002ecd6) main_mp3_pane_g1

0xa5df,	// (0x00035df0) main_mp3_pane_g2

0x0007,

0xf779,	// (0x0003af8a) main_mp3_pane_g

0x3528,	// (0x0002ed39) main_mp3_pane_t1

0xef5b,	// (0x0003a76c) main_camera_pane_g8_ParamLimits

0xef5b,	// (0x0003a76c) main_camera_pane_g8

0x8222,	// (0x00033a33) main_video_pane_g7_ParamLimits

0x8222,	// (0x00033a33) main_video_pane_g7

0xa0d1,	// (0x000358e2) main_camera2_pane_t7_ParamLimits

0xa0d1,	// (0x000358e2) main_camera2_pane_t7

0xf0b8,	// (0x0003a8c9) scroll_pane_cp025_ParamLimits

0xf0b8,	// (0x0003a8c9) scroll_pane_cp025

0x0f3b,	// (0x0002c74c) scroll_pane_cp026_ParamLimits

0x0f3b,	// (0x0002c74c) scroll_pane_cp026

0x0f4a,	// (0x0002c75b) wml_content_pane_ParamLimits

0xe617,	// (0x00039e28) main_touch_calib_pane

0xa676,	// (0x00035e87) main_touch_calib_pane_g1

0xa682,	// (0x00035e93) main_touch_calib_pane_g2

0xa68e,	// (0x00035e9f) main_touch_calib_pane_g3

0xa69a,	// (0x00035eab) main_touch_calib_pane_g4

0x0003,

0xf797,	// (0x0003afa8) main_touch_calib_pane_g

0xa6a6,	// (0x00035eb7) main_touch_calib_pane_t1

0xa6bb,	// (0x00035ecc) main_touch_calib_pane_t2

0x0004,

0xf7a0,	// (0x0003afb1) main_touch_calib_pane_t

0x17cd,	// (0x0002cfde) mup_progress_pane_cp02

0x17ec,	// (0x0002cffd) navi_pane_g1

0x186c,	// (0x0002d07d) navi_pane_mp_t3

0xf0cc,	// (0x0003a8dd) main_mp3_pane_ParamLimits

0x9d73,	// (0x00035584) navi_pane_ParamLimits

0x34c5,	// (0x0002ecd6) main_mp3_pane_g1_ParamLimits

0xa5df,	// (0x00035df0) main_mp3_pane_g2_ParamLimits

0xa5eb,	// (0x00035dfc) main_mp3_pane_g3_ParamLimits

0xa5eb,	// (0x00035dfc) main_mp3_pane_g3

0xa5f7,	// (0x00035e08) main_mp3_pane_g4_ParamLimits

0xa5f7,	// (0x00035e08) main_mp3_pane_g4

0x34f5,	// (0x0002ed06) main_mp3_pane_g5_ParamLimits

0x34f5,	// (0x0002ed06) main_mp3_pane_g5

0x3503,	// (0x0002ed14) main_mp3_pane_g6_ParamLimits

0x3503,	// (0x0002ed14) main_mp3_pane_g6

0x3510,	// (0x0002ed21) main_mp3_pane_g7_ParamLimits

0x3510,	// (0x0002ed21) main_mp3_pane_g7

0x351c,	// (0x0002ed2d) main_mp3_pane_g8_ParamLimits

0x351c,	// (0x0002ed2d) main_mp3_pane_g8

0xf779,	// (0x0003af8a) main_mp3_pane_g_ParamLimits

0xa603,	// (0x00035e14) main_mp3_pane_t2

0xa611,	// (0x00035e22) main_mp3_pane_t3

0x3536,	// (0x0002ed47) main_mp3_pane_t4

0x3544,	// (0x0002ed55) main_mp3_pane_t5

0x0005,

0xf78a,	// (0x0003af9b) main_mp3_pane_t

0x3552,	// (0x0002ed63) mup_progress_pane_cp01

0x63e0,	// (0x00031bf1) aid_zoom_text_secondary2

0x3349,	// (0x0002eb5a) list_cale_ev2_pane

0x3351,	// (0x0002eb62) scroll_pane_cp023_ParamLimits

0x54ba,	// (0x00030ccb) field_cale_ev2_pane_ParamLimits

0x54ba,	// (0x00030ccb) field_cale_ev2_pane

0x66cc,	// (0x00031edd) field_cale_ev2_pane_g1_ParamLimits

0x66cc,	// (0x00031edd) field_cale_ev2_pane_g1

0x66d8,	// (0x00031ee9) field_cale_ev2_pane_g2_ParamLimits

0x66d8,	// (0x00031ee9) field_cale_ev2_pane_g2

0x66f0,	// (0x00031f01) field_cale_ev2_pane_g3_ParamLimits

0x66f0,	// (0x00031f01) field_cale_ev2_pane_g3

0x0003,

0xf7ab,	// (0x0003afbc) field_cale_ev2_pane_g_ParamLimits

0xf7ab,	// (0x0003afbc) field_cale_ev2_pane_g

0x6714,	// (0x00031f25) field_cale_ev2_pane_t1_ParamLimits

0x6714,	// (0x00031f25) field_cale_ev2_pane_t1

0x672b,	// (0x00031f3c) field_cale_ev2_pane_t2_ParamLimits

0x672b,	// (0x00031f3c) field_cale_ev2_pane_t2

0x0001,

0xf7b4,	// (0x0003afc5) field_cale_ev2_pane_t_ParamLimits

0xf7b4,	// (0x0003afc5) field_cale_ev2_pane_t

0x96ae,	// (0x00034ebf) main_postcard_pane_g5_ParamLimits

0x96ae,	// (0x00034ebf) main_postcard_pane_g5

0x96ba,	// (0x00034ecb) main_postcard_pane_g6_ParamLimits

0x96ba,	// (0x00034ecb) main_postcard_pane_g6

0x8077,	// (0x00033888) camera2_autofocus_pane_cp_ParamLimits

0x8077,	// (0x00033888) camera2_autofocus_pane_cp

0xf0cc,	// (0x0003a8dd) main_mup3_pane

0xa726,	// (0x00035f37) main_mup3_pane_g1_ParamLimits

0xa726,	// (0x00035f37) main_mup3_pane_g1

0xa747,	// (0x00035f58) main_mup3_pane_g2_ParamLimits

0xa747,	// (0x00035f58) main_mup3_pane_g2

0xa7aa,	// (0x00035fbb) main_mup3_pane_g3_ParamLimits

0xa7aa,	// (0x00035fbb) main_mup3_pane_g3

0xa7e5,	// (0x00035ff6) main_mup3_pane_g4_ParamLimits

0xa7e5,	// (0x00035ff6) main_mup3_pane_g4

0xa820,	// (0x00036031) main_mup3_pane_g5_ParamLimits

0xa820,	// (0x00036031) main_mup3_pane_g5

0xa85b,	// (0x0003606c) main_mup3_pane_g6_ParamLimits

0xa85b,	// (0x0003606c) main_mup3_pane_g6

0x35ce,	// (0x0002eddf) main_mup3_pane_g7_ParamLimits

0x35ce,	// (0x0002eddf) main_mup3_pane_g7

0x0007,

0xf7c4,	// (0x0003afd5) main_mup3_pane_g_ParamLimits

0xf7c4,	// (0x0003afd5) main_mup3_pane_g

0xa8c9,	// (0x000360da) main_mup3_pane_t1_ParamLimits

0xa8c9,	// (0x000360da) main_mup3_pane_t1

0xa92c,	// (0x0003613d) main_mup3_pane_t2_ParamLimits

0xa92c,	// (0x0003613d) main_mup3_pane_t2

0xa9e9,	// (0x000361fa) main_mup3_pane_t4_ParamLimits

0xa9e9,	// (0x000361fa) main_mup3_pane_t4

0xaa2f,	// (0x00036240) main_mup3_pane_t5_ParamLimits

0xaa2f,	// (0x00036240) main_mup3_pane_t5

0xaad3,	// (0x000362e4) main_mup3_pane_t6_ParamLimits

0xaad3,	// (0x000362e4) main_mup3_pane_t6

0x0005,

0xf7d5,	// (0x0003afe6) main_mup3_pane_t_ParamLimits

0xf7d5,	// (0x0003afe6) main_mup3_pane_t

0xab7b,	// (0x0003638c) mup3_progress_pane_ParamLimits

0xab7b,	// (0x0003638c) mup3_progress_pane

0xabc1,	// (0x000363d2) popup_mup3_control_window_ParamLimits

0xabc1,	// (0x000363d2) popup_mup3_control_window

0x35dc,	// (0x0002eded) popup_mup3_text_window

0xabda,	// (0x000363eb) mup3_progress_pane_t1

0xabf0,	// (0x00036401) mup3_progress_pane_t2

0x35e4,	// (0x0002edf5) mup3_progress_pane_t3

0x0002,

0xf7e2,	// (0x0003aff3) mup3_progress_pane_t

0x35fb,	// (0x0002ee0c) mup_progress_pane_cp03

0xe617,	// (0x00039e28) bg_tb_trans_pane_cp04

0xac06,	// (0x00036417) mup3_volume_pane

0xac0e,	// (0x0003641f) popup_mup3_control_window_g1

0xac17,	// (0x00036428) mup3_volume_pane_g1

0xac20,	// (0x00036431) mup3_volume_pane_g2

0xac29,	// (0x0003643a) mup3_volume_pane_g3

0x0002,

0xf7e9,	// (0x0003affa) mup3_volume_pane_g

0xe617,	// (0x00039e28) bg_tb_trans_pane_cp03

0x360b,	// (0x0002ee1c) popup_mup3_text_window_g1

0x3613,	// (0x0002ee24) popup_mup3_text_window_t1

0xede5,	// (0x0003a5f6) list_calc_item_pane_g1_ParamLimits

0x2fdd,	// (0x0002e7ee) mup_volume_pane_cp_g1

0xa6d0,	// (0x00035ee1) main_touch_calib_pane_t3

0xa6e2,	// (0x00035ef3) main_touch_calib_pane_t4

0xa6f4,	// (0x00035f05) main_touch_calib_pane_t5

0xe621,	// (0x00039e32) aid_cell_size_toolbar2

0xe629,	// (0x00039e3a) aid_popup3_width_pane

0x63d8,	// (0x00031be9) aid_zoom_text_msg_primary

0x8061,	// (0x00033872) vorec_t7

0xeda9,	// (0x0003a5ba) bg_calc_paper_pane_g1_ParamLimits

0xedb5,	// (0x0003a5c6) bg_calc_paper_pane_g2_ParamLimits

0xedc1,	// (0x0003a5d2) bg_calc_paper_pane_g3_ParamLimits

0xedcd,	// (0x0003a5de) bg_calc_paper_pane_g4_ParamLimits

0xedd9,	// (0x0003a5ea) bg_calc_paper_pane_g5_ParamLimits

0x7a3a,	// (0x0003324b) bg_calc_paper_pane_g6_ParamLimits

0x7a49,	// (0x0003325a) bg_calc_paper_pane_g7_ParamLimits

0x7a58,	// (0x00033269) bg_calc_paper_pane_g8_ParamLimits

0xf189,	// (0x0003a99a) bg_calc_paper_pane_g_ParamLimits

0x7a67,	// (0x00033278) calc_bg_paper_pane_g9_ParamLimits

0x8157,	// (0x00033968) image_qvga_pane_ParamLimits

0x8157,	// (0x00033968) image_qvga_pane

0xecce,	// (0x0003a4df) bg_popup_sub_pane_cp04_ParamLimits

0x1ba5,	// (0x0002d3b6) popup_mup_playback_window_g1_ParamLimits

0x1bb1,	// (0x0002d3c2) popup_mup_playback_window_t1_ParamLimits

0x1bc6,	// (0x0002d3d7) popup_mup_playback_window_t2_ParamLimits

0xf515,	// (0x0003ad26) popup_mup_playback_window_t_ParamLimits

0xa1f8,	// (0x00035a09) main_mup2_pane_g3_ParamLimits

0xa1f8,	// (0x00035a09) main_mup2_pane_g3

0x8375,	// (0x00033b86) popup_toolbar_window_cp04

0x1fa7,	// (0x0002d7b8) popup_call2_audio_second_window_g3_ParamLimits

0x1fa7,	// (0x0002d7b8) popup_call2_audio_second_window_g3

0x23b1,	// (0x0002dbc2) popup_call2_audio_first_window_g4_ParamLimits

0x23b1,	// (0x0002dbc2) popup_call2_audio_first_window_g4

0x2a30,	// (0x0002e241) popup_call2_audio_in_window_g4_ParamLimits

0x2a30,	// (0x0002e241) popup_call2_audio_in_window_g4

0x97a5,	// (0x00034fb6) aid_area_sk_bg_cut_ParamLimits

0x97a5,	// (0x00034fb6) aid_area_sk_bg_cut

0x1bdb,	// (0x0002d3ec) aid_area_sk_bg_cut_2_ParamLimits

0x1bdb,	// (0x0002d3ec) aid_area_sk_bg_cut_2

0xa540,	// (0x00035d51) aid_placing_details_win

0xa548,	// (0x00035d59) aid_placing_details_win_2

0x3407,	// (0x0002ec18) camera2_autofocus_pane_g1_ParamLimits

0x7665,	// (0x00032e76) popup_fixed_preview_cale_window_ParamLimits

0x7665,	// (0x00032e76) popup_fixed_preview_cale_window

0x1907,	// (0x0002d118) navi_slider_pane_g3

0x18fe,	// (0x0002d10f) navi_slider_pane_g4

0x18f5,	// (0x0002d106) navi_slider_pane_g5

0x1907,	// (0x0002d118) navi_slider_pane_g6

0x91bd,	// (0x000349ce) navi_slider_pane_g7

0x1a31,	// (0x0002d242) mup_scale_pane_g3

0x1a3a,	// (0x0002d24b) mup_scale_pane_g4

0x1a43,	// (0x0002d254) mup_scale_pane_g5

0x9580,	// (0x00034d91) mup_scale_pane_g6

0x9589,	// (0x00034d9a) mup_scale_pane_g7

0x1907,	// (0x0002d118) cams2_slider_pane_g3

0x3092,	// (0x0002e8a3) cams2_slider_pane_g4

0xa4ad,	// (0x00035cbe) cams2_slider_pane_g5

0x1907,	// (0x0002d118) cams2_slider_pane_g6

0xa4b5,	// (0x00035cc6) cams2_slider_pane_g7

0x32c6,	// (0x0002ead7) camera2_autofocus_pane_cp_g1

0x3621,	// (0x0002ee32) bg_popup_preview_window_pane_cp02_ParamLimits

0x3621,	// (0x0002ee32) bg_popup_preview_window_pane_cp02

0xac32,	// (0x00036443) list_fp_cale_pane_ParamLimits

0xac32,	// (0x00036443) list_fp_cale_pane

0x362d,	// (0x0002ee3e) popup_fixed_preview_cale_window_t1_ParamLimits

0x362d,	// (0x0002ee3e) popup_fixed_preview_cale_window_t1

0xac42,	// (0x00036453) popup_fixed_preview_cale_window_t2_ParamLimits

0xac42,	// (0x00036453) popup_fixed_preview_cale_window_t2

0xac57,	// (0x00036468) popup_fixed_preview_cale_window_t3_ParamLimits

0xac57,	// (0x00036468) popup_fixed_preview_cale_window_t3

0x0002,

0xf7f0,	// (0x0003b001) popup_fixed_preview_cale_window_t_ParamLimits

0xf7f0,	// (0x0003b001) popup_fixed_preview_cale_window_t

0xac69,	// (0x0003647a) list_single_fp_cale_pane_ParamLimits

0xac69,	// (0x0003647a) list_single_fp_cale_pane

0xac76,	// (0x00036487) list_single_fp_cale_pane_g1_ParamLimits

0xac76,	// (0x00036487) list_single_fp_cale_pane_g1

0x364b,	// (0x0002ee5c) list_single_fp_cale_pane_g2_ParamLimits

0x364b,	// (0x0002ee5c) list_single_fp_cale_pane_g2

0x0002,

0xf7f7,	// (0x0003b008) list_single_fp_cale_pane_g_ParamLimits

0xf7f7,	// (0x0003b008) list_single_fp_cale_pane_g

0xac82,	// (0x00036493) list_single_fp_cale_pane_t1_ParamLimits

0xac82,	// (0x00036493) list_single_fp_cale_pane_t1

0xac94,	// (0x000364a5) list_single_fp_cale_pane_t2_ParamLimits

0xac94,	// (0x000364a5) list_single_fp_cale_pane_t2

0x0001,

0xf7fe,	// (0x0003b00f) list_single_fp_cale_pane_t_ParamLimits

0xf7fe,	// (0x0003b00f) list_single_fp_cale_pane_t

0x0000,

0x0000,

0x0000,

0x0000,

0xe617,	// (0x00039e28) main_dialer_pane

0xacc7,	// (0x000364d8) aid_cell_size_keypad

0xacd1,	// (0x000364e2) dialer_ne_pane

0xacd9,	// (0x000364ea) grid_dialer_command_1_pane

0xace1,	// (0x000364f2) grid_dialer_command_2_pane

0xace9,	// (0x000364fa) grid_dialer_keypad_pane

0xacf9,	// (0x0003650a) bg_popup_call_pane_cp06_ParamLimits

0xacf9,	// (0x0003650a) bg_popup_call_pane_cp06

0xad05,	// (0x00036516) dialer_ne_clear_pane_ParamLimits

0xad05,	// (0x00036516) dialer_ne_clear_pane

0x3664,	// (0x0002ee75) dialer_ne_pane_g1

0x366c,	// (0x0002ee7d) dialer_ne_pane_t1_ParamLimits

0x366c,	// (0x0002ee7d) dialer_ne_pane_t1

0xad11,	// (0x00036522) dialer_ne_pane_t2_ParamLimits

0xad11,	// (0x00036522) dialer_ne_pane_t2

0xad2e,	// (0x0003653f) dialer_ne_pane_t3_ParamLimits

0xad2e,	// (0x0003653f) dialer_ne_pane_t3

0x0002,

0xf803,	// (0x0003b014) dialer_ne_pane_t_ParamLimits

0xf803,	// (0x0003b014) dialer_ne_pane_t

0xad52,	// (0x00036563) dialer_ne_pane_t3_copy1_ParamLimits

0xad52,	// (0x00036563) dialer_ne_pane_t3_copy1

0xad76,	// (0x00036587) cell_dialer_keypad_pane_ParamLimits

0xad76,	// (0x00036587) cell_dialer_keypad_pane

0xad8b,	// (0x0003659c) cell_dialer_command_1_pane_ParamLimits

0xad8b,	// (0x0003659c) cell_dialer_command_1_pane

0xada1,	// (0x000365b2) cell_dialer_command_2_pane_ParamLimits

0xada1,	// (0x000365b2) cell_dialer_command_2_pane

0x367e,	// (0x0002ee8f) bg_button_pane_cp02_ParamLimits

0x367e,	// (0x0002ee8f) bg_button_pane_cp02

0xadb0,	// (0x000365c1) cell_dialer_keypad_pane_g1_ParamLimits

0xadb0,	// (0x000365c1) cell_dialer_keypad_pane_g1

0x367e,	// (0x0002ee8f) bg_button_pane_cp03_ParamLimits

0x367e,	// (0x0002ee8f) bg_button_pane_cp03

0xadc5,	// (0x000365d6) cell_dialer_command_1_pane_g1_ParamLimits

0xadc5,	// (0x000365d6) cell_dialer_command_1_pane_g1

0x368a,	// (0x0002ee9b) bg_button_pane_cp04

0xadd8,	// (0x000365e9) cell_dialer_command_2_pane_g1

0x18db,	// (0x0002d0ec) bg_button_pane_cp06

0x3692,	// (0x0002eea3) dialer_ne_clear_pane_g1

0x17f8,	// (0x0002d009) navi_pane_g2

0x9165,	// (0x00034976) navi_pane_g3

0x0002,

0xf418,	// (0x0003ac29) navi_pane_g

0x187a,	// (0x0002d08b) navi_pane_mv_g2

0x18a2,	// (0x0002d0b3) navi_pane_mv_g5

0x918a,	// (0x0003499b) navi_pane_mv_t1

0xed9d,	// (0x0003a5ae) main_clock2_pane

0xae07,	// (0x00036618) main_clock2_list_pane_ParamLimits

0xae07,	// (0x00036618) main_clock2_list_pane

0xae2d,	// (0x0003663e) main_clock2_pane_t1_ParamLimits

0xae2d,	// (0x0003663e) main_clock2_pane_t1

0xae57,	// (0x00036668) main_clock2_pane_t2_ParamLimits

0xae57,	// (0x00036668) main_clock2_pane_t2

0x0004,

0xf80a,	// (0x0003b01b) main_clock2_pane_t_ParamLimits

0xf80a,	// (0x0003b01b) main_clock2_pane_t

0xaeba,	// (0x000366cb) popup_clock_analogue_window_cp03_ParamLimits

0xaeba,	// (0x000366cb) popup_clock_analogue_window_cp03

0xaed6,	// (0x000366e7) popup_clock_digital_window_cp02_ParamLimits

0xaed6,	// (0x000366e7) popup_clock_digital_window_cp02

0xaf24,	// (0x00036735) main_clock2_list_single_pane_ParamLimits

0xaf24,	// (0x00036735) main_clock2_list_single_pane

0x18db,	// (0x0002d0ec) list_highlight_pane_cp05

0x369a,	// (0x0002eeab) main_clock2_list_single_pane_t1

0x8375,	// (0x00033b86) popup_toolbar_window_cp04_ParamLimits

0xa59e,	// (0x00035daf) camera2_autofocus_pane_g2_ParamLimits

0xa59e,	// (0x00035daf) camera2_autofocus_pane_g2

0xa5aa,	// (0x00035dbb) camera2_autofocus_pane_g3_ParamLimits

0xa5aa,	// (0x00035dbb) camera2_autofocus_pane_g3

0xa5b6,	// (0x00035dc7) camera2_autofocus_pane_g4_ParamLimits

0xa5b6,	// (0x00035dc7) camera2_autofocus_pane_g4

0xa5c2,	// (0x00035dd3) camera2_autofocus_pane_g5_ParamLimits

0xa5c2,	// (0x00035dd3) camera2_autofocus_pane_g5

0x0004,

0xf753,	// (0x0003af64) camera2_autofocus_pane_g_ParamLimits

0xf753,	// (0x0003af64) camera2_autofocus_pane_g

0xa706,	// (0x00035f17) camera2_autofocus_pane_cp_g2

0xa70e,	// (0x00035f1f) camera2_autofocus_pane_cp_g3

0xa716,	// (0x00035f27) camera2_autofocus_pane_cp_g4

0xa71e,	// (0x00035f2f) camera2_autofocus_pane_cp_g5

0x0004,

0xf7b9,	// (0x0003afca) camera2_autofocus_pane_cp_g

0xacf1,	// (0x00036502) popup_dialer_spcha_window

0xe617,	// (0x00039e28) bg_popup_sub_pane_cp07

0x36a8,	// (0x0002eeb9) list_spcha_pane

0x36b0,	// (0x0002eec1) list_single_spcha_pane_ParamLimits

0x36b0,	// (0x0002eec1) list_single_spcha_pane

0xe617,	// (0x00039e28) list_highlight_pane_cp06

0x36c1,	// (0x0002eed2) list_single_spcha_pane_t1

0x27da,	// (0x0002dfeb) popup_call2_audio_out_window_g4_ParamLimits

0x27da,	// (0x0002dfeb) popup_call2_audio_out_window_g4

0xe617,	// (0x00039e28) main_imed2_pane

0x2df7,	// (0x0002e608) popup_imed_adjust2_window

0x9ce4,	// (0x000354f5) popup_imed_trans_window_ParamLimits

0x9ce4,	// (0x000354f5) popup_imed_trans_window

0x310a,	// (0x0002e91b) popup_blid_sat_info2_window_t1

0x3118,	// (0x0002e929) popup_blid_sat_info2_window_t2

0x000a,

0xf6e8,	// (0x0003aef9) popup_blid_sat_info2_window_t

0xafcc,	// (0x000367dd) aid_size_cell_colour_35

0xafe3,	// (0x000367f4) aid_size_cell_colour_112

0xaffa,	// (0x0003680b) aid_size_cell_effect

0xf0cc,	// (0x0003a8dd) bg_tb_trans_pane_cp02

0x135a,	// (0x0002cb6b) heading_imed_pane

0xb014,	// (0x00036825) listscroll_imed_pane

0x36cf,	// (0x0002eee0) heading_imed_pane_g1

0x36d7,	// (0x0002eee8) heading_imed_pane_t1

0x36e5,	// (0x0002eef6) grid_imed_colour_35_pane_ParamLimits

0x36e5,	// (0x0002eef6) grid_imed_colour_35_pane

0xb020,	// (0x00036831) grid_imed_effect_pane

0x36f8,	// (0x0002ef09) list_imed_aspect_pane

0xb02c,	// (0x0003683d) scroll_pane_cp027_ParamLimits

0xb02c,	// (0x0003683d) scroll_pane_cp027

0xb038,	// (0x00036849) cell_imed_effect_pane_ParamLimits

0xb038,	// (0x00036849) cell_imed_effect_pane

0x3700,	// (0x0002ef11) cell_imed_colour_pane_ParamLimits

0x3700,	// (0x0002ef11) cell_imed_colour_pane

0x373a,	// (0x0002ef4b) cell_imed_colour_pane_g1_ParamLimits

0x373a,	// (0x0002ef4b) cell_imed_colour_pane_g1

0x374b,	// (0x0002ef5c) hgihlgiht_grid_pane_cp016_ParamLimits

0x374b,	// (0x0002ef5c) hgihlgiht_grid_pane_cp016

0xb04e,	// (0x0003685f) cell_imed_effect_pane_g1

0xb056,	// (0x00036867) grid_highlight_pane_cp017

0x375c,	// (0x0002ef6d) list_imed_single_pane_ParamLimits

0x375c,	// (0x0002ef6d) list_imed_single_pane

0xe617,	// (0x00039e28) list_highlight_pane_cp07

0x376f,	// (0x0002ef80) list_imed_aspect_pane_comp1_t1

0x2dd1,	// (0x0002e5e2) bg_tb_trans_pane_cp05

0x378f,	// (0x0002efa0) popup_imed_adjust2_window_g1

0x37b6,	// (0x0002efc7) popup_imed_adjust2_window_t1

0x37ce,	// (0x0002efdf) slider_imed_adjust_pane

0x37e2,	// (0x0002eff3) slider_imed_adjust_pane_g1

0x37f2,	// (0x0002f003) slider_imed_adjust_pane_g2

0x3802,	// (0x0002f013) slider_imed_adjust_pane_g3

0x3813,	// (0x0002f024) slider_imed_adjust_pane_g4

0x0003,

0xf827,	// (0x0003b038) slider_imed_adjust_pane_g

0xb05f,	// (0x00036870) aid_size_cell_clipart2

0xb06b,	// (0x0003687c) grid_imed_clipart_pane

0x3824,	// (0x0002f035) scroll_pane_cp031

0xb075,	// (0x00036886) cell_imed_clipart_pane_ParamLimits

0xb075,	// (0x00036886) cell_imed_clipart_pane

0xb08c,	// (0x0003689d) cell_imed_clipart_pane_g1

0xe617,	// (0x00039e28) grid_highlight_pane_cp014

0xae13,	// (0x00036624) main_clock2_pane_g1_ParamLimits

0xae13,	// (0x00036624) main_clock2_pane_g1

0xaeee,	// (0x000366ff) aid_call2_pane_cp10

0xaefa,	// (0x0003670b) aid_call_pane_cp10

0x17a8,	// (0x0002cfb9) popup_clock_analogue_window_cp10_g1

0x17a8,	// (0x0002cfb9) popup_clock_analogue_window_cp10_g2

0xaf06,	// (0x00036717) popup_clock_analogue_window_cp10_g3

0xaf06,	// (0x00036717) popup_clock_analogue_window_cp10_g4

0x17a8,	// (0x0002cfb9) popup_clock_analogue_window_cp10_g5

0x0004,

0xf815,	// (0x0003b026) popup_clock_analogue_window_cp10_g

0xaf12,	// (0x00036723) popup_clock_analogue_window_cp10_t1

0xaf36,	// (0x00036747) clock_digital_number_pane_cp10_ParamLimits

0xaf36,	// (0x00036747) clock_digital_number_pane_cp10

0xaf4e,	// (0x0003675f) clock_digital_number_pane_cp11_ParamLimits

0xaf4e,	// (0x0003675f) clock_digital_number_pane_cp11

0xaf66,	// (0x00036777) clock_digital_number_pane_cp12_ParamLimits

0xaf66,	// (0x00036777) clock_digital_number_pane_cp12

0xaf7e,	// (0x0003678f) clock_digital_number_pane_cp13_ParamLimits

0xaf7e,	// (0x0003678f) clock_digital_number_pane_cp13

0xaf96,	// (0x000367a7) clock_digital_separator_pane_cp10_ParamLimits

0xaf96,	// (0x000367a7) clock_digital_separator_pane_cp10

0xafae,	// (0x000367bf) popup_clock_digital_window_cp02_t1_ParamLimits

0xafae,	// (0x000367bf) popup_clock_digital_window_cp02_t1

0xecc6,	// (0x0003a4d7) clock_digital_number_pane_cp10_g1

0xecc6,	// (0x0003a4d7) clock_digital_number_pane_cp10_g2

0x0001,

0xf830,	// (0x0003b041) clock_digital_number_pane_cp10_g

0xecc6,	// (0x0003a4d7) clock_digital_separator_pane_cp10_g1

0xecc6,	// (0x0003a4d7) clock_digital_separator_pane_g2_cp10

0x18ab,	// (0x0002d0bc) navi_pane_vded_g4

0x18b4,	// (0x0002d0c5) navi_pane_vded_g5

0x18bd,	// (0x0002d0ce) navi_pane_vded_t1

0xe617,	// (0x00039e28) main_vded_pane

0xb095,	// (0x000368a6) main_vded_pane_g1

0xb09d,	// (0x000368ae) main_vded_pane_g2

0xb0a5,	// (0x000368b6) main_vded_pane_g3

0x0002,

0xf835,	// (0x0003b046) main_vded_pane_g

0xb0ad,	// (0x000368be) main_vded_pane_t1

0xb0bb,	// (0x000368cc) main_vded_pane_t2

0x0001,

0xf83c,	// (0x0003b04d) main_vded_pane_t

0xb0c9,	// (0x000368da) vded_slider_pane

0xb0d1,	// (0x000368e2) vded_video_pane

0x382c,	// (0x0002f03d) vded_video_pane_g1

0xb0d9,	// (0x000368ea) vded_video_pane_g2

0x32c6,	// (0x0002ead7) vded_video_pane_g3

0x0002,

0xf841,	// (0x0003b052) vded_video_pane_g

0x3836,	// (0x0002f047) vded_slider_pane_g1

0x2fdd,	// (0x0002e7ee) vded_slider_pane_g2

0x383f,	// (0x0002f050) vded_slider_pane_g3

0x3848,	// (0x0002f059) vded_slider_pane_g4

0x3851,	// (0x0002f062) vded_slider_pane_g5

0x0004,

0xf848,	// (0x0003b059) vded_slider_pane_g

0xabb5,	// (0x000363c6) mup3_rocker_pane_ParamLimits

0xabb5,	// (0x000363c6) mup3_rocker_pane

0xb0e2,	// (0x000368f3) mup3_control_keys_pane_g1

0xb0ea,	// (0x000368fb) mup3_control_keys_pane_g2

0xb0f2,	// (0x00036903) mup3_control_keys_pane_g3

0xb0fa,	// (0x0003690b) mup3_control_keys_pane_g4

0x0003,

0xf853,	// (0x0003b064) mup3_control_keys_pane_g

0x7681,	// (0x00032e92) popup_toolbar2_fixed_window_cp01_ParamLimits

0x7681,	// (0x00032e92) popup_toolbar2_fixed_window_cp01

0xabcd,	// (0x000363de) popup_toolbar2_fixed_window_cp02_ParamLimits

0xabcd,	// (0x000363de) popup_toolbar2_fixed_window_cp02

0x2119,	// (0x0002d92a) popup_call2_audio_second_window_t4_ParamLimits

0x2119,	// (0x0002d92a) popup_call2_audio_second_window_t4

0x2647,	// (0x0002de58) popup_call2_audio_first_window_t6_ParamLimits

0x2647,	// (0x0002de58) popup_call2_audio_first_window_t6

0x28dd,	// (0x0002e0ee) popup_call2_audio_out_window_t6_ParamLimits

0x28dd,	// (0x0002e0ee) popup_call2_audio_out_window_t6

0xe617,	// (0x00039e28) main_vitu_pane

0xb10a,	// (0x0003691b) aid_size_cell_itu_ParamLimits

0xb10a,	// (0x0003691b) aid_size_cell_itu

0x76a9,	// (0x00032eba) bg_popup_window_pane_cp08_ParamLimits

0x76a9,	// (0x00032eba) bg_popup_window_pane_cp08

0xb118,	// (0x00036929) field_vitu_entry_pane_ParamLimits

0xb118,	// (0x00036929) field_vitu_entry_pane

0xb125,	// (0x00036936) grid_vitu_function_pane_ParamLimits

0xb125,	// (0x00036936) grid_vitu_function_pane

0xb131,	// (0x00036942) grid_vitu_itu_pane_ParamLimits

0xb131,	// (0x00036942) grid_vitu_itu_pane

0xb13d,	// (0x0003694e) cell_vitu_itu_pane_ParamLimits

0xb13d,	// (0x0003694e) cell_vitu_itu_pane

0xb152,	// (0x00036963) cell_vitu_function_pane_ParamLimits

0xb152,	// (0x00036963) cell_vitu_function_pane

0xf0cc,	// (0x0003a8dd) bg_popup_sub_pane_cp08_ParamLimits

0xf0cc,	// (0x0003a8dd) bg_popup_sub_pane_cp08

0xb164,	// (0x00036975) field_vitu_entry_pane_t1_ParamLimits

0xb164,	// (0x00036975) field_vitu_entry_pane_t1

0x3872,	// (0x0002f083) field_vitu_entry_pane_t2_ParamLimits

0x3872,	// (0x0002f083) field_vitu_entry_pane_t2

0x0001,

0xf861,	// (0x0003b072) field_vitu_entry_pane_t_ParamLimits

0xf861,	// (0x0003b072) field_vitu_entry_pane_t

0x388f,	// (0x0002f0a0) bg_button_pane_cp05_ParamLimits

0x388f,	// (0x0002f0a0) bg_button_pane_cp05

0xb17d,	// (0x0003698e) cell_vitu_itu_pane_g1

0xb195,	// (0x000369a6) cell_vitu_itu_pane_t1_ParamLimits

0xb195,	// (0x000369a6) cell_vitu_itu_pane_t1

0xb1a7,	// (0x000369b8) cell_vitu_itu_pane_t2_ParamLimits

0xb1a7,	// (0x000369b8) cell_vitu_itu_pane_t2

0x0002,

0xf866,	// (0x0003b077) cell_vitu_itu_pane_t_ParamLimits

0xf866,	// (0x0003b077) cell_vitu_itu_pane_t

0x389d,	// (0x0002f0ae) bg_button_pane_cp07

0xb1dc,	// (0x000369ed) cell_vitu_function_pane_g1

0x78f4,	// (0x00033105) main_calc_pane_g1

0x74c8,	// (0x00032cd9) aid_visual_content_pane

0xe617,	// (0x00039e28) main_vradio_pane

0xb1e5,	// (0x000369f6) main_vradio_pane_g1_ParamLimits

0xb1e5,	// (0x000369f6) main_vradio_pane_g1

0x38a7,	// (0x0002f0b8) main_vradio_pane_g2_ParamLimits

0x38a7,	// (0x0002f0b8) main_vradio_pane_g2

0x0001,

0xf86d,	// (0x0003b07e) main_vradio_pane_g_ParamLimits

0xf86d,	// (0x0003b07e) main_vradio_pane_g

0xb1f3,	// (0x00036a04) main_vradio_pane_t1_ParamLimits

0xb1f3,	// (0x00036a04) main_vradio_pane_t1

0xb205,	// (0x00036a16) main_vradio_pane_t2_ParamLimits

0xb205,	// (0x00036a16) main_vradio_pane_t2

0x38b4,	// (0x0002f0c5) main_vradio_pane_t3_ParamLimits

0x38b4,	// (0x0002f0c5) main_vradio_pane_t3

0x0002,

0xf872,	// (0x0003b083) main_vradio_pane_t_ParamLimits

0xf872,	// (0x0003b083) main_vradio_pane_t

0xb217,	// (0x00036a28) vradio_rocker_control_pane_ParamLimits

0xb217,	// (0x00036a28) vradio_rocker_control_pane

0xb223,	// (0x00036a34) vradio_station_info_pane_ParamLimits

0xb223,	// (0x00036a34) vradio_station_info_pane

0x38c6,	// (0x0002f0d7) vradio_frequency_info_pane_ParamLimits

0x38c6,	// (0x0002f0d7) vradio_frequency_info_pane

0x32c6,	// (0x0002ead7) vradio_station_info_pane_g1

0x38d5,	// (0x0002f0e6) vradio_station_info_pane_t1_ParamLimits

0x38d5,	// (0x0002f0e6) vradio_station_info_pane_t1

0x38f7,	// (0x0002f108) vradio_station_info_pane_t2_ParamLimits

0x38f7,	// (0x0002f108) vradio_station_info_pane_t2

0x0001,

0xf879,	// (0x0003b08a) vradio_station_info_pane_t_ParamLimits

0xf879,	// (0x0003b08a) vradio_station_info_pane_t

0x3909,	// (0x0002f11a) vradio_tuning_pane

0x3911,	// (0x0002f122) vradio_rocker_control_pane_g1

0x3919,	// (0x0002f12a) vradio_rocker_control_pane_g2

0x3921,	// (0x0002f132) vradio_rocker_control_pane_g3

0x3929,	// (0x0002f13a) vradio_rocker_control_pane_g4

0x3931,	// (0x0002f142) vradio_rocker_control_pane_g5

0x0004,

0xf87e,	// (0x0003b08f) vradio_rocker_control_pane_g

0xb230,	// (0x00036a41) vradio_frequency_info_pane_g1

0x3939,	// (0x0002f14a) vradio_frequency_info_pane_t1_ParamLimits

0x3939,	// (0x0002f14a) vradio_frequency_info_pane_t1

0xb238,	// (0x00036a49) vradio_tuning_pane_g1

0xb241,	// (0x00036a52) vradio_tuning_pane_t1

0xe639,	// (0x00039e4a) area_side_right_pane_ParamLimits

0xe639,	// (0x00039e4a) area_side_right_pane

0x2d98,	// (0x0002e5a9) status_small_pane_g1

0x2da0,	// (0x0002e5b1) status_small_pane_g2

0x2da9,	// (0x0002e5ba) status_small_pane_g3

0x2db2,	// (0x0002e5c3) status_small_pane_g4

0x0003,

0xf63e,	// (0x0003ae4f) status_small_pane_g

0x2dbb,	// (0x0002e5cc) status_small_pane_t1

0xe617,	// (0x00039e28) main_video3_pane

0x394d,	// (0x0002f15e) cams_zoom_vslider_pane

0x3955,	// (0x0002f166) image3_wide_pane_ParamLimits

0x3955,	// (0x0002f166) image3_wide_pane

0x396f,	// (0x0002f180) image3_wide_small_pane

0x3979,	// (0x0002f18a) main_video3_pane_g1_ParamLimits

0x3979,	// (0x0002f18a) main_video3_pane_g1

0x3995,	// (0x0002f1a6) main_video3_pane_g2_ParamLimits

0x3995,	// (0x0002f1a6) main_video3_pane_g2

0x0001,

0xf889,	// (0x0003b09a) main_video3_pane_g_ParamLimits

0xf889,	// (0x0003b09a) main_video3_pane_g

0x39b1,	// (0x0002f1c2) main_video3_pane_t1_ParamLimits

0x39b1,	// (0x0002f1c2) main_video3_pane_t1

0x39dc,	// (0x0002f1ed) main_video3_pane_t2_ParamLimits

0x39dc,	// (0x0002f1ed) main_video3_pane_t2

0x3a07,	// (0x0002f218) main_video3_pane_t3_ParamLimits

0x3a07,	// (0x0002f218) main_video3_pane_t3

0x0002,

0xf88e,	// (0x0003b09f) main_video3_pane_t_ParamLimits

0xf88e,	// (0x0003b09f) main_video3_pane_t

0x3a32,	// (0x0002f243) cams_zoom_vslider_pane_g1

0x3a3b,	// (0x0002f24c) cams_zoom_vslider_pane_g2

0x0001,

0xf895,	// (0x0003b0a6) cams_zoom_vslider_pane_g

0x3a43,	// (0x0002f254) small_slider_vertical_pane

0x32c6,	// (0x0002ead7) small_slider_vertical_pane_g1

0x32c6,	// (0x0002ead7) small_slider_vertical_pane_g2

0x3a4b,	// (0x0002f25c) small_slider_vertical_pane_g3

0x0002,

0xf89a,	// (0x0003b0ab) small_slider_vertical_pane_g

0xe617,	// (0x00039e28) main_hwr_training_pane

0x3a54,	// (0x0002f265) hwr_training_instruct_pane_ParamLimits

0x3a54,	// (0x0002f265) hwr_training_instruct_pane

0xb250,	// (0x00036a61) hwr_training_navi_pane_ParamLimits

0xb250,	// (0x00036a61) hwr_training_navi_pane

0xb264,	// (0x00036a75) hwr_training_write_pane_ParamLimits

0xb264,	// (0x00036a75) hwr_training_write_pane

0xe617,	// (0x00039e28) bg_frame_shadow_pane

0x3a83,	// (0x0002f294) hwr_training_write_pane_g1

0x3a8b,	// (0x0002f29c) hwr_training_write_pane_g2

0x3a93,	// (0x0002f2a4) hwr_training_write_pane_g3

0x3a9b,	// (0x0002f2ac) hwr_training_write_pane_g4

0x3aa3,	// (0x0002f2b4) hwr_training_write_pane_g5

0x3aab,	// (0x0002f2bc) hwr_training_write_pane_g6

0x3ab3,	// (0x0002f2c4) hwr_training_write_pane_g7

0x0006,

0xf8a1,	// (0x0003b0b2) hwr_training_write_pane_g

0xb292,	// (0x00036aa3) hwr_training_navi_pane_g1_ParamLimits

0xb292,	// (0x00036aa3) hwr_training_navi_pane_g1

0xb2a4,	// (0x00036ab5) hwr_training_navi_pane_g2_ParamLimits

0xb2a4,	// (0x00036ab5) hwr_training_navi_pane_g2

0xb2b6,	// (0x00036ac7) hwr_training_navi_pane_g3_ParamLimits

0xb2b6,	// (0x00036ac7) hwr_training_navi_pane_g3

0xb2c6,	// (0x00036ad7) hwr_training_navi_pane_g4_ParamLimits

0xb2c6,	// (0x00036ad7) hwr_training_navi_pane_g4

0x0004,

0xf8b0,	// (0x0003b0c1) hwr_training_navi_pane_g_ParamLimits

0xf8b0,	// (0x0003b0c1) hwr_training_navi_pane_g

0xb2e0,	// (0x00036af1) hwr_training_navi_pane_t1

0xb2ee,	// (0x00036aff) list_single_hwr_training_instruct_pane_ParamLimits

0xb2ee,	// (0x00036aff) list_single_hwr_training_instruct_pane

0x3b0a,	// (0x0002f31b) list_single_hwr_training_instruct_pane_t1

0x3206,	// (0x0002ea17) bg_frame_shadow_pane_g1

0x3b19,	// (0x0002f32a) bg_frame_shadow_pane_g2

0x3b21,	// (0x0002f332) bg_frame_shadow_pane_g3

0x3b29,	// (0x0002f33a) bg_frame_shadow_pane_g4

0x3b31,	// (0x0002f342) bg_frame_shadow_pane_g5

0x3b39,	// (0x0002f34a) bg_frame_shadow_pane_g6

0x3b41,	// (0x0002f352) bg_frame_shadow_pane_g7

0xee68,	// (0x0003a679) bg_frame_shadow_pane_g8

0x0007,

0xf8bb,	// (0x0003b0cc) bg_frame_shadow_pane_g

0xe617,	// (0x00039e28) main_video_tele_dialer_pane

0xb306,	// (0x00036b17) aid_size_cell_video_keypad_ParamLimits

0xb306,	// (0x00036b17) aid_size_cell_video_keypad

0xb316,	// (0x00036b27) grid_video_dialer_keypad_pane_ParamLimits

0xb316,	// (0x00036b27) grid_video_dialer_keypad_pane

0xb346,	// (0x00036b57) video_down_pane_cp_ParamLimits

0xb346,	// (0x00036b57) video_down_pane_cp

0xb36e,	// (0x00036b7f) cell_video_dialer_keypad_pane_ParamLimits

0xb36e,	// (0x00036b7f) cell_video_dialer_keypad_pane

0x3b49,	// (0x0002f35a) bg_button_pane_cp08_ParamLimits

0x3b49,	// (0x0002f35a) bg_button_pane_cp08

0xb383,	// (0x00036b94) cell_video_dialer_keypad_pane_g1_ParamLimits

0xb383,	// (0x00036b94) cell_video_dialer_keypad_pane_g1

0xaba9,	// (0x000363ba) mup3_rocker2_pane_ParamLimits

0xaba9,	// (0x000363ba) mup3_rocker2_pane

0x32c6,	// (0x0002ead7) mup3_rocker2_pane_g1

0x9c7e,	// (0x0003548f) main_dialer2_pane

0xe617,	// (0x00039e28) main_mp4_pane

0xb3c2,	// (0x00036bd3) main_mp4_pane_g1_ParamLimits

0xb3c2,	// (0x00036bd3) main_mp4_pane_g1

0xb3d0,	// (0x00036be1) main_mp4_pane_g2_ParamLimits

0xb3d0,	// (0x00036be1) main_mp4_pane_g2

0xb3de,	// (0x00036bef) main_mp4_pane_g3_ParamLimits

0xb3de,	// (0x00036bef) main_mp4_pane_g3

0xb413,	// (0x00036c24) main_mp4_pane_g4_ParamLimits

0xb413,	// (0x00036c24) main_mp4_pane_g4

0xb441,	// (0x00036c52) main_mp4_pane_g5_ParamLimits

0xb441,	// (0x00036c52) main_mp4_pane_g5

0x0005,

0xf8db,	// (0x0003b0ec) main_mp4_pane_g_ParamLimits

0xf8db,	// (0x0003b0ec) main_mp4_pane_g

0xb49d,	// (0x00036cae) main_mp4_pane_t1_ParamLimits

0xb49d,	// (0x00036cae) main_mp4_pane_t1

0xb4f5,	// (0x00036d06) main_mp4_pane_t2_ParamLimits

0xb4f5,	// (0x00036d06) main_mp4_pane_t2

0x3c9f,	// (0x0002f4b0) main_mp4_pane_t3_ParamLimits

0x3c9f,	// (0x0002f4b0) main_mp4_pane_t3

0xb547,	// (0x00036d58) main_mp4_pane_t4_ParamLimits

0xb547,	// (0x00036d58) main_mp4_pane_t4

0x0003,

0xf8e8,	// (0x0003b0f9) main_mp4_pane_t_ParamLimits

0xf8e8,	// (0x0003b0f9) main_mp4_pane_t

0xb587,	// (0x00036d98) mp4_progress_pane_ParamLimits

0xb587,	// (0x00036d98) mp4_progress_pane

0xb5cb,	// (0x00036ddc) mp4_rocker_pane_ParamLimits

0xb5cb,	// (0x00036ddc) mp4_rocker_pane

0x3d6f,	// (0x0002f580) mp4_progress_pane_t1

0x3d86,	// (0x0002f597) mp4_progress_pane_t2

0x0001,

0xf8f1,	// (0x0003b102) mp4_progress_pane_t

0x3d9d,	// (0x0002f5ae) mup_progress_pane_cp04

0x32c6,	// (0x0002ead7) mp4_rocker_pane_g1

0xb5e9,	// (0x00036dfa) aid_cell_size_keypad2_ParamLimits

0xb5e9,	// (0x00036dfa) aid_cell_size_keypad2

0xb5f9,	// (0x00036e0a) dialer2_ne_pane_ParamLimits

0xb5f9,	// (0x00036e0a) dialer2_ne_pane

0xb605,	// (0x00036e16) grid_dialer2_keypad_pane_ParamLimits

0xb605,	// (0x00036e16) grid_dialer2_keypad_pane

0x47ec,	// (0x0002fffd) bg_popup_call_pane_cp07_ParamLimits

0x47ec,	// (0x0002fffd) bg_popup_call_pane_cp07

0xb611,	// (0x00036e22) dialer2_ne_pane_t1_ParamLimits

0xb611,	// (0x00036e22) dialer2_ne_pane_t1

0xb636,	// (0x00036e47) cell_dialer2_keypad_pane_ParamLimits

0xb636,	// (0x00036e47) cell_dialer2_keypad_pane

0x3dc5,	// (0x0002f5d6) bg_button_pane_pane_cp04_ParamLimits

0x3dc5,	// (0x0002f5d6) bg_button_pane_pane_cp04

0xb64b,	// (0x00036e5c) cell_dialer2_keypad_pane_g1_ParamLimits

0xb64b,	// (0x00036e5c) cell_dialer2_keypad_pane_g1

0x82c3,	// (0x00033ad4) aid_placing_vt_set_content_ParamLimits

0x82c3,	// (0x00033ad4) aid_placing_vt_set_content

0x82dd,	// (0x00033aee) aid_placing_vt_set_title_ParamLimits

0x82dd,	// (0x00033aee) aid_placing_vt_set_title

0xe617,	// (0x00039e28) main_image3_pane

0xb6bf,	// (0x00036ed0) area_side_right_pane_cp01_ParamLimits

0xb6bf,	// (0x00036ed0) area_side_right_pane_cp01

0x4dc6,	// (0x000305d7) main_image3_pane_g1_ParamLimits

0x4dc6,	// (0x000305d7) main_image3_pane_g1

0xb6ec,	// (0x00036efd) main_image3_pane_g2_ParamLimits

0xb6ec,	// (0x00036efd) main_image3_pane_g2

0xb703,	// (0x00036f14) main_image3_pane_g3_ParamLimits

0xb703,	// (0x00036f14) main_image3_pane_g3

0xb71a,	// (0x00036f2b) main_image3_pane_g4_ParamLimits

0xb71a,	// (0x00036f2b) main_image3_pane_g4

0x0003,

0xf900,	// (0x0003b111) main_image3_pane_g_ParamLimits

0xf900,	// (0x0003b111) main_image3_pane_g

0xb731,	// (0x00036f42) main_image3_pane_t1_ParamLimits

0xb731,	// (0x00036f42) main_image3_pane_t1

0xb756,	// (0x00036f67) main_image3_pane_t2_ParamLimits

0xb756,	// (0x00036f67) main_image3_pane_t2

0xb775,	// (0x00036f86) main_image3_pane_t3_ParamLimits

0xb775,	// (0x00036f86) main_image3_pane_t3

0x0003,

0xf909,	// (0x0003b11a) main_image3_pane_t_ParamLimits

0xf909,	// (0x0003b11a) main_image3_pane_t

0x76a9,	// (0x00032eba) grid_sctrl_middle_pane_cp01_ParamLimits

0x76a9,	// (0x00032eba) grid_sctrl_middle_pane_cp01

0xb7d0,	// (0x00036fe1) cell_sctrl_middle_pane_cp01_ParamLimits

0xb7d0,	// (0x00036fe1) cell_sctrl_middle_pane_cp01

0xb7e1,	// (0x00036ff2) cell_sctrl_middle_pane_cp01_g1_ParamLimits

0xb7e1,	// (0x00036ff2) cell_sctrl_middle_pane_cp01_g1

0xe617,	// (0x00039e28) main_call4_pane

0xb7ee,	// (0x00036fff) aid_size_button_call4_ParamLimits

0xb7ee,	// (0x00036fff) aid_size_button_call4

0xb818,	// (0x00037029) call4_windows_pane_ParamLimits

0xb818,	// (0x00037029) call4_windows_pane

0xb82c,	// (0x0003703d) grid_call4_button_pane_ParamLimits

0xb82c,	// (0x0003703d) grid_call4_button_pane

0x3e1b,	// (0x0002f62c) call4_windows_conf_pane

0xb846,	// (0x00037057) popup_call4_audio_first_window_ParamLimits

0xb846,	// (0x00037057) popup_call4_audio_first_window

0xb866,	// (0x00037077) popup_call4_audio_second_window_ParamLimits

0xb866,	// (0x00037077) popup_call4_audio_second_window

0x3e4e,	// (0x0002f65f) popup_call4_audio_wait_window_ParamLimits

0x3e4e,	// (0x0002f65f) popup_call4_audio_wait_window

0xb878,	// (0x00037089) cell_call4_button_pane_ParamLimits

0xb878,	// (0x00037089) cell_call4_button_pane

0xee12,	// (0x0003a623) bg_button_pane_cp09_ParamLimits

0xee12,	// (0x0003a623) bg_button_pane_cp09

0xb89b,	// (0x000370ac) cell_call4_button_pane_g1_ParamLimits

0xb89b,	// (0x000370ac) cell_call4_button_pane_g1

0xb8a8,	// (0x000370b9) cell_call4_button_pane_t1_ParamLimits

0xb8a8,	// (0x000370b9) cell_call4_button_pane_t1

0x3e94,	// (0x0002f6a5) popup_call4_audio_conf_window_ParamLimits

0x3e94,	// (0x0002f6a5) popup_call4_audio_conf_window

0xabda,	// (0x000363eb) mup3_progress_pane_t1_ParamLimits

0xabf0,	// (0x00036401) mup3_progress_pane_t2_ParamLimits

0x35e4,	// (0x0002edf5) mup3_progress_pane_t3_ParamLimits

0xf7e2,	// (0x0003aff3) mup3_progress_pane_t_ParamLimits

0x35fb,	// (0x0002ee0c) mup_progress_pane_cp03_ParamLimits

0xb102,	// (0x00036913) mup3_control_keys_pane_g4_copy1

0xb5b5,	// (0x00036dc6) mp4_rocker2_pane_ParamLimits

0xb5b5,	// (0x00036dc6) mp4_rocker2_pane

0x3eb0,	// (0x0002f6c1) mp4_rocker2_pane_g1

0x3ea8,	// (0x0002f6b9) mp4_rocker2_pane_g2

0xb8ba,	// (0x000370cb) mp4_rocker2_pane_g3

0xb8c2,	// (0x000370d3) mp4_rocker2_pane_g4

0xb8ca,	// (0x000370db) mp4_rocker2_pane_g5

0x0004,

0xf912,	// (0x0003b123) mp4_rocker2_pane_g

0xe617,	// (0x00039e28) main_camera4_pane

0xe617,	// (0x00039e28) main_video4_pane

0xb322,	// (0x00036b33) main_video_tele_dialer_pane_t1_ParamLimits

0xb322,	// (0x00036b33) main_video_tele_dialer_pane_t1

0xb334,	// (0x00036b45) main_video_tele_dialer_pane_t2_ParamLimits

0xb334,	// (0x00036b45) main_video_tele_dialer_pane_t2

0x0001,

0xf8cc,	// (0x0003b0dd) main_video_tele_dialer_pane_t_ParamLimits

0xf8cc,	// (0x0003b0dd) main_video_tele_dialer_pane_t

0xb8e8,	// (0x000370f9) cam4_autofocus_pane_ParamLimits

0xb8e8,	// (0x000370f9) cam4_autofocus_pane

0xb8f4,	// (0x00037105) cam4_image_uncrop_pane_ParamLimits

0xb8f4,	// (0x00037105) cam4_image_uncrop_pane

0xb909,	// (0x0003711a) cam4_indicators_pane_ParamLimits

0xb909,	// (0x0003711a) cam4_indicators_pane

0xb923,	// (0x00037134) main_camera4_pane_g1_ParamLimits

0xb923,	// (0x00037134) main_camera4_pane_g1

0xb92f,	// (0x00037140) main_camera4_pane_g2_ParamLimits

0xb92f,	// (0x00037140) main_camera4_pane_g2

0xb92f,	// (0x00037140) main_camera4_pane_g3_ParamLimits

0xb92f,	// (0x00037140) main_camera4_pane_g3

0xb93b,	// (0x0003714c) main_camera4_pane_g4_ParamLimits

0xb93b,	// (0x0003714c) main_camera4_pane_g4

0xb947,	// (0x00037158) main_camera4_pane_g5_ParamLimits

0xb947,	// (0x00037158) main_camera4_pane_g5

0x0005,

0xf91d,	// (0x0003b12e) main_camera4_pane_g_ParamLimits

0xf91d,	// (0x0003b12e) main_camera4_pane_g

0xb961,	// (0x00037172) main_camera4_pane_t1_ParamLimits

0xb961,	// (0x00037172) main_camera4_pane_t1

0x34f5,	// (0x0002ed06) bg_tb_trans_pane_cp06

0xb9b1,	// (0x000371c2) cam4_indicators_pane_g1

0xb9c1,	// (0x000371d2) cam4_indicators_pane_g2

0x0002,

0xf938,	// (0x0003b149) cam4_indicators_pane_g

0xb9e1,	// (0x000371f2) cam4_indicators_pane_t1

0xba09,	// (0x0003721a) main_video4_pane_g1_ParamLimits

0xba09,	// (0x0003721a) main_video4_pane_g1

0xb92f,	// (0x00037140) main_video4_pane_g2_ParamLimits

0xb92f,	// (0x00037140) main_video4_pane_g2

0xb92f,	// (0x00037140) main_video4_pane_g3_ParamLimits

0xb92f,	// (0x00037140) main_video4_pane_g3

0xb93b,	// (0x0003714c) main_video4_pane_g4_ParamLimits

0xb93b,	// (0x0003714c) main_video4_pane_g4

0x0004,

0xf93f,	// (0x0003b150) main_video4_pane_g_ParamLimits

0xf93f,	// (0x0003b150) main_video4_pane_g

0xba1d,	// (0x0003722e) vid4_indicators_pane_ParamLimits

0xba1d,	// (0x0003722e) vid4_indicators_pane

0xba3b,	// (0x0003724c) video4_image_uncrop_cif_pane_ParamLimits

0xba3b,	// (0x0003724c) video4_image_uncrop_cif_pane

0xba48,	// (0x00037259) video4_image_uncrop_nhd_pane_ParamLimits

0xba48,	// (0x00037259) video4_image_uncrop_nhd_pane

0xb8f4,	// (0x00037105) video4_image_uncrop_vga_pane_ParamLimits

0xb8f4,	// (0x00037105) video4_image_uncrop_vga_pane

0xf0cc,	// (0x0003a8dd) bg_tb_trans_pane_cp07

0xb9b1,	// (0x000371c2) vid4_indicators_pane_g1

0xba55,	// (0x00037266) vid4_indicators_pane_g2

0xba65,	// (0x00037276) vid4_indicators_pane_g3

0x0004,

0xf94a,	// (0x0003b15b) vid4_indicators_pane_g

0xba92,	// (0x000372a3) vid4_indicators_pane_t1

0xbaac,	// (0x000372bd) cam4_autofocus_pane_g1

0xbab4,	// (0x000372c5) cam4_autofocus_pane_g2

0xbabc,	// (0x000372cd) cam4_autofocus_pane_g3

0x0002,

0xf955,	// (0x0003b166) cam4_autofocus_pane_g

0xbac4,	// (0x000372d5) cam4_autofocus_pane_g3_copy1

0xb352,	// (0x00036b63) video_down_pane_cp_t1

0xb360,	// (0x00036b71) video_down_pane_cp_t2

0x0001,

0xf8d1,	// (0x0003b0e2) video_down_pane_cp_t

0x76a9,	// (0x00032eba) popup_vitu2_window_ParamLimits

0x76a9,	// (0x00032eba) popup_vitu2_window

0xbacc,	// (0x000372dd) aid_size_cell2_itu2_ParamLimits

0xbacc,	// (0x000372dd) aid_size_cell2_itu2

0xbaee,	// (0x000372ff) aid_size_cell_itu2_ParamLimits

0xbaee,	// (0x000372ff) aid_size_cell_itu2

0x47ec,	// (0x0002fffd) bg_popup_window_pane_cp09_ParamLimits

0x47ec,	// (0x0002fffd) bg_popup_window_pane_cp09

0xbb2c,	// (0x0003733d) field_vitu2_entry_pane_ParamLimits

0xbb2c,	// (0x0003733d) field_vitu2_entry_pane

0xbb42,	// (0x00037353) grid_vitu2_function_pane_ParamLimits

0xbb42,	// (0x00037353) grid_vitu2_function_pane

0xbb74,	// (0x00037385) grid_vitu2_itu_pane_ParamLimits

0xbb74,	// (0x00037385) grid_vitu2_itu_pane

0xbbca,	// (0x000373db) cell_vitu2_itu_pane_ParamLimits

0xbbca,	// (0x000373db) cell_vitu2_itu_pane

0xbbdf,	// (0x000373f0) cell_vitu2_function_pane_ParamLimits

0xbbdf,	// (0x000373f0) cell_vitu2_function_pane

0x3f56,	// (0x0002f767) bg_popup_call_pane_cp08_ParamLimits

0x3f56,	// (0x0002f767) bg_popup_call_pane_cp08

0x3f6f,	// (0x0002f780) field_vitu2_entry_pane_g1

0x3f7b,	// (0x0002f78c) field_vitu2_entry_pane_g2

0x0002,

0xf95c,	// (0x0003b16d) field_vitu2_entry_pane_g

0x6740,	// (0x00031f51) field_vitu2_entry_pane_t1_ParamLimits

0x6740,	// (0x00031f51) field_vitu2_entry_pane_t1

0x675c,	// (0x00031f6d) field_vitu2_entry_pane_t2_ParamLimits

0x675c,	// (0x00031f6d) field_vitu2_entry_pane_t2

0x0001,

0xf963,	// (0x0003b174) field_vitu2_entry_pane_t_ParamLimits

0xf963,	// (0x0003b174) field_vitu2_entry_pane_t

0xbc1e,	// (0x0003742f) bg_button_pane_cp010_ParamLimits

0xbc1e,	// (0x0003742f) bg_button_pane_cp010

0xbc2c,	// (0x0003743d) cell_vitu2_itu_pane_g1

0xbc4a,	// (0x0003745b) cell_vitu2_itu_pane_t1_ParamLimits

0xbc4a,	// (0x0003745b) cell_vitu2_itu_pane_t1

0x6779,	// (0x00031f8a) cell_vitu2_itu_pane_t2_ParamLimits

0x6779,	// (0x00031f8a) cell_vitu2_itu_pane_t2

0x0002,

0xf96d,	// (0x0003b17e) cell_vitu2_itu_pane_t_ParamLimits

0xf96d,	// (0x0003b17e) cell_vitu2_itu_pane_t

0xf0cc,	// (0x0003a8dd) bg_button_pane_cp011

0xbc9c,	// (0x000374ad) cell_vitu2_function_pane_g1

0xe617,	// (0x00039e28) main_myfav_hc_pane

0xb7b5,	// (0x00036fc6) popup_image3_note_pane_ParamLimits

0xb7b5,	// (0x00036fc6) popup_image3_note_pane

0xb7c1,	// (0x00036fd2) popup_image3_tool_bar_pane_ParamLimits

0xb7c1,	// (0x00036fd2) popup_image3_tool_bar_pane

0x67e7,	// (0x00031ff8) cell_vitu2_itu_pane_t3_ParamLimits

0x67e7,	// (0x00031ff8) cell_vitu2_itu_pane_t3

0xe617,	// (0x00039e28) bg_popup_trans_pane

0x3fc8,	// (0x0002f7d9) grid_image3_tool_bar_pane

0x3fd2,	// (0x0002f7e3) bg_popup_trans_pane_g1

0x1030,	// (0x0002c841) bg_popup_trans_pane_g2

0x3fda,	// (0x0002f7eb) bg_popup_trans_pane_g3

0x3fe2,	// (0x0002f7f3) bg_popup_trans_pane_g4

0x3fea,	// (0x0002f7fb) bg_popup_trans_pane_g5

0x3ff2,	// (0x0002f803) bg_popup_trans_pane_g6

0x3ffa,	// (0x0002f80b) bg_popup_trans_pane_g7

0x4002,	// (0x0002f813) bg_popup_trans_pane_g8

0x1010,	// (0x0002c821) bg_popup_trans_pane_g9

0x0008,

0xf974,	// (0x0003b185) bg_popup_trans_pane_g

0x0ebd,	// (0x0002c6ce) cell_image3_tool_bar_pane_ParamLimits

0x0ebd,	// (0x0002c6ce) cell_image3_tool_bar_pane

0x32c6,	// (0x0002ead7) cell_image3_tool_bar_pane_g1

0xe617,	// (0x00039e28) bg_popup_trans_pane_cp1

0x400a,	// (0x0002f81b) popup_image3_note_pane_t1

0x4018,	// (0x0002f829) popup_image3_note_pane_t2

0x4026,	// (0x0002f837) popup_image3_note_pane_t3

0x0002,

0xf987,	// (0x0003b198) popup_image3_note_pane_t

0x4034,	// (0x0002f845) popup_image3_note_pane_t3_copy1

0xbcb0,	// (0x000374c1) bg_myfav_hc_instruction_pane_ParamLimits

0xbcb0,	// (0x000374c1) bg_myfav_hc_instruction_pane

0xbcc2,	// (0x000374d3) cell_myfav_contact_pane_ParamLimits

0xbcc2,	// (0x000374d3) cell_myfav_contact_pane

0xbcdc,	// (0x000374ed) cell_myfav_contact_pane_cp1_ParamLimits

0xbcdc,	// (0x000374ed) cell_myfav_contact_pane_cp1

0xbcf2,	// (0x00037503) cell_myfav_contact_pane_cp2_ParamLimits

0xbcf2,	// (0x00037503) cell_myfav_contact_pane_cp2

0xbd08,	// (0x00037519) cell_myfav_contact_pane_cp3_ParamLimits

0xbd08,	// (0x00037519) cell_myfav_contact_pane_cp3

0xbd1d,	// (0x0003752e) cell_myfav_contact_pane_cp4_ParamLimits

0xbd1d,	// (0x0003752e) cell_myfav_contact_pane_cp4

0xbd31,	// (0x00037542) cell_myfav_contact_pane_cp5_ParamLimits

0xbd31,	// (0x00037542) cell_myfav_contact_pane_cp5

0xbd45,	// (0x00037556) cell_myfav_contact_pane_cp6_ParamLimits

0xbd45,	// (0x00037556) cell_myfav_contact_pane_cp6

0xbd59,	// (0x0003756a) cell_myfav_contact_pane_cp7_ParamLimits

0xbd59,	// (0x0003756a) cell_myfav_contact_pane_cp7

0x4042,	// (0x0002f853) listscroll_gen_pane_cp05

0xbd71,	// (0x00037582) main_myfav_hc_pane_g1_ParamLimits

0xbd71,	// (0x00037582) main_myfav_hc_pane_g1

0xbd87,	// (0x00037598) main_myfav_hc_pane_g2_ParamLimits

0xbd87,	// (0x00037598) main_myfav_hc_pane_g2

0x0002,

0xf98e,	// (0x0003b19f) main_myfav_hc_pane_g_ParamLimits

0xf98e,	// (0x0003b19f) main_myfav_hc_pane_g

0xbdb1,	// (0x000375c2) main_myfav_hc_pane_t1_ParamLimits

0xbdb1,	// (0x000375c2) main_myfav_hc_pane_t1

0x404b,	// (0x0002f85c) main_myfav_hc_pane_t2_ParamLimits

0x404b,	// (0x0002f85c) main_myfav_hc_pane_t2

0x405d,	// (0x0002f86e) main_myfav_hc_pane_t3_ParamLimits

0x405d,	// (0x0002f86e) main_myfav_hc_pane_t3

0xbdc6,	// (0x000375d7) main_myfav_hc_pane_t4_ParamLimits

0xbdc6,	// (0x000375d7) main_myfav_hc_pane_t4

0x0004,

0xf995,	// (0x0003b1a6) main_myfav_hc_pane_t_ParamLimits

0xf995,	// (0x0003b1a6) main_myfav_hc_pane_t

0x32c6,	// (0x0002ead7) bg_myfav_hc_instruction_pane_g1

0x406f,	// (0x0002f880) cell_myfav_contact_pane_g1_ParamLimits

0x406f,	// (0x0002f880) cell_myfav_contact_pane_g1

0x406f,	// (0x0002f880) cell_myfav_contact_pane_g2_ParamLimits

0x406f,	// (0x0002f880) cell_myfav_contact_pane_g2

0x407b,	// (0x0002f88c) cell_myfav_contact_pane_g3_ParamLimits

0x407b,	// (0x0002f88c) cell_myfav_contact_pane_g3

0x35ce,	// (0x0002eddf) cell_myfav_contact_pane_g4_ParamLimits

0x35ce,	// (0x0002eddf) cell_myfav_contact_pane_g4

0x4088,	// (0x0002f899) cell_myfav_contact_pane_g5_ParamLimits

0x4088,	// (0x0002f899) cell_myfav_contact_pane_g5

0x0004,

0xf9a0,	// (0x0003b1b1) cell_myfav_contact_pane_g_ParamLimits

0xf9a0,	// (0x0003b1b1) cell_myfav_contact_pane_g

0xbd9d,	// (0x000375ae) main_myfav_hc_pane_g3_ParamLimits

0xbd9d,	// (0x000375ae) main_myfav_hc_pane_g3

0x75ff,	// (0x00032e10) popup_adpt_find_window

0xbdea,	// (0x000375fb) afind_page_pane_ParamLimits

0xbdea,	// (0x000375fb) afind_page_pane

0xbdf7,	// (0x00037608) aid_size_cell_afind_ParamLimits

0xbdf7,	// (0x00037608) aid_size_cell_afind

0xbe11,	// (0x00037622) bg_popup_sub_pane_cp09_ParamLimits

0xbe11,	// (0x00037622) bg_popup_sub_pane_cp09

0xbe1e,	// (0x0003762f) find_pane_cp01_ParamLimits

0xbe1e,	// (0x0003762f) find_pane_cp01

0x4094,	// (0x0002f8a5) grid_afind_control_pane_ParamLimits

0x4094,	// (0x0002f8a5) grid_afind_control_pane

0xbe2b,	// (0x0003763c) grid_afind_pane_ParamLimits

0xbe2b,	// (0x0003763c) grid_afind_pane

0xbe41,	// (0x00037652) cell_afind_pane_ParamLimits

0xbe41,	// (0x00037652) cell_afind_pane

0x32c6,	// (0x0002ead7) afind_page_pane_g1

0xbe77,	// (0x00037688) afind_page_pane_g2

0xbe80,	// (0x00037691) afind_page_pane_g3

0x0002,

0xf9ab,	// (0x0003b1bc) afind_page_pane_g

0xbe89,	// (0x0003769a) afind_page_pane_t1

0x40a8,	// (0x0002f8b9) cell_afind_grid_control_pane_ParamLimits

0x40a8,	// (0x0002f8b9) cell_afind_grid_control_pane

0x3dc5,	// (0x0002f5d6) bg_button_pane_cp69_ParamLimits

0x3dc5,	// (0x0002f5d6) bg_button_pane_cp69

0xbea9,	// (0x000376ba) cell_afind_pane_g1_ParamLimits

0xbea9,	// (0x000376ba) cell_afind_pane_g1

0xbeb6,	// (0x000376c7) cell_afind_pane_t1_ParamLimits

0xbeb6,	// (0x000376c7) cell_afind_pane_t1

0xefa5,	// (0x0003a7b6) bg_button_pane_cp72

0x40b7,	// (0x0002f8c8) cell_afind_grid_control_pane_g1

0x98b6,	// (0x000350c7) aid_image_placing_area_ParamLimits

0x98b6,	// (0x000350c7) aid_image_placing_area

0x385a,	// (0x0002f06b) field_vitu_entry_pane_g1_ParamLimits

0x385a,	// (0x0002f06b) field_vitu_entry_pane_g1

0x3866,	// (0x0002f077) field_vitu_entry_pane_g2_ParamLimits

0x3866,	// (0x0002f077) field_vitu_entry_pane_g2

0x0001,

0xf85c,	// (0x0003b06d) field_vitu_entry_pane_g_ParamLimits

0xf85c,	// (0x0003b06d) field_vitu_entry_pane_g

0xb17d,	// (0x0003698e) cell_vitu_itu_pane_g1_ParamLimits

0xb1bf,	// (0x000369d0) cell_vitu_itu_pane_t3_ParamLimits

0xb1bf,	// (0x000369d0) cell_vitu_itu_pane_t3

0x3d6f,	// (0x0002f580) mp4_progress_pane_t1_ParamLimits

0x3d86,	// (0x0002f597) mp4_progress_pane_t2_ParamLimits

0xf8f1,	// (0x0003b102) mp4_progress_pane_t_ParamLimits

0x3d9d,	// (0x0002f5ae) mup_progress_pane_cp04_ParamLimits

0xbdd8,	// (0x000375e9) main_myfav_hc_pane_t5_ParamLimits

0xbdd8,	// (0x000375e9) main_myfav_hc_pane_t5

0xe631,	// (0x00039e42) aid_zoom_text_primary

0x75ff,	// (0x00032e10) popup_adpt_find_window_ParamLimits

0xf0cc,	// (0x0003a8dd) main_cam_set_pane

0xb917,	// (0x00037128) cam4_zoom_pane_ParamLimits

0xb917,	// (0x00037128) cam4_zoom_pane

0xbec8,	// (0x000376d9) main_cam_set_pane_g1_ParamLimits

0xbec8,	// (0x000376d9) main_cam_set_pane_g1

0xbed6,	// (0x000376e7) main_cam_set_pane_g2_ParamLimits

0xbed6,	// (0x000376e7) main_cam_set_pane_g2

0x0001,

0xf9b2,	// (0x0003b1c3) main_cam_set_pane_g_ParamLimits

0xf9b2,	// (0x0003b1c3) main_cam_set_pane_g

0xbee2,	// (0x000376f3) main_cam_set_pane_t1_ParamLimits

0xbee2,	// (0x000376f3) main_cam_set_pane_t1

0xbef4,	// (0x00037705) main_cset_listscroll_pane_ParamLimits

0xbef4,	// (0x00037705) main_cset_listscroll_pane

0xbf1d,	// (0x0003772e) main_cset_slider_pane_ParamLimits

0xbf1d,	// (0x0003772e) main_cset_slider_pane

0x40c8,	// (0x0002f8d9) main_cset_list_pane_ParamLimits

0x40c8,	// (0x0002f8d9) main_cset_list_pane

0x40d8,	// (0x0002f8e9) scroll_pane_cp028

0xbf3c,	// (0x0003774d) aid_area_touch_slider

0xbf58,	// (0x00037769) cset_slider_pane

0xbf82,	// (0x00037793) main_cset_slider_pane_g1

0xbf97,	// (0x000377a8) main_cset_slider_pane_g2

0x0011,

0xf9b7,	// (0x0003b1c8) main_cset_slider_pane_g

0x4111,	// (0x0002f922) main_cset_slider_pane_t1

0xc053,	// (0x00037864) main_cset_slider_pane_t2

0xc06d,	// (0x0003787e) main_cset_slider_pane_t3

0xc087,	// (0x00037898) main_cset_slider_pane_t4

0xc0a1,	// (0x000378b2) main_cset_slider_pane_t5

0xc0bb,	// (0x000378cc) main_cset_slider_pane_t6

0xc0d0,	// (0x000378e1) main_cset_slider_pane_t7

0x000e,

0xf9dc,	// (0x0003b1ed) main_cset_slider_pane_t

0xc1d4,	// (0x000379e5) cset_list_set_pane_ParamLimits

0xc1d4,	// (0x000379e5) cset_list_set_pane

0xc1e4,	// (0x000379f5) aid_position_infowindow_above

0xc1ec,	// (0x000379fd) aid_position_infowindow_below

0x6834,	// (0x00032045) cset_list_set_pane_g1_ParamLimits

0x6834,	// (0x00032045) cset_list_set_pane_g1

0x6840,	// (0x00032051) cset_list_set_pane_g3_ParamLimits

0x6840,	// (0x00032051) cset_list_set_pane_g3

0x0001,

0xf9fb,	// (0x0003b20c) cset_list_set_pane_g_ParamLimits

0xf9fb,	// (0x0003b20c) cset_list_set_pane_g

0x684f,	// (0x00032060) cset_list_set_pane_t1_ParamLimits

0x684f,	// (0x00032060) cset_list_set_pane_t1

0xf0cc,	// (0x0003a8dd) list_highlight_pane_cp021_ParamLimits

0xf0cc,	// (0x0003a8dd) list_highlight_pane_cp021

0x1a31,	// (0x0002d242) cset_slider_pane_g1

0x1a43,	// (0x0002d254) cset_slider_pane_g2

0x1a3a,	// (0x0002d24b) cset_slider_pane_g3

0x0002,

0xfa00,	// (0x0003b211) cset_slider_pane_g

0xc1f4,	// (0x00037a05) aid_area_touch_cam4_zoom

0xc1fc,	// (0x00037a0d) cam4_zoom_cont_pane

0xc204,	// (0x00037a15) cam4_zoom_pane_g1

0xc20c,	// (0x00037a1d) cam4_zoom_pane_g2

0xc214,	// (0x00037a25) cam4_zoom_pane_g3

0x0002,

0xfa07,	// (0x0003b218) cam4_zoom_pane_g

0x4b69,	// (0x0003037a) cam4_zoom_cont_pane_g1

0x4b72,	// (0x00030383) cam4_zoom_cont_pane_g2

0x4b7b,	// (0x0003038c) cam4_zoom_cont_pane_g3

0x0002,

0xfa0e,	// (0x0003b21f) cam4_zoom_cont_pane_g

0xb808,	// (0x00037019) call4_image_pane_ParamLimits

0xb808,	// (0x00037019) call4_image_pane

0x3e1b,	// (0x0002f62c) call4_windows_conf_pane_ParamLimits

0x3e2e,	// (0x0002f63f) popup_call4_audio_in_window_ParamLimits

0x3e2e,	// (0x0002f63f) popup_call4_audio_in_window

0xe617,	// (0x00039e28) bg_popup_call2_act_pane_cp02

0x3e8c,	// (0x0002f69d) call4_list_conf_pane

0x32c6,	// (0x0002ead7) call4_image_pane_g1

0x32c6,	// (0x0002ead7) call4_image_pane_g2

0x0001,

0xf722,	// (0x0003af33) call4_image_pane_g

0x4210,	// (0x0002fa21) list_single_graphic_popup_conf4_pane_ParamLimits

0x4210,	// (0x0002fa21) list_single_graphic_popup_conf4_pane

0xe617,	// (0x00039e28) list_highlight_pane_cp022

0x4223,	// (0x0002fa34) list_single_graphic_popup_conf4_pane_g1

0x1676,	// (0x0002ce87) list_single_graphic_popup_conf4_pane_g2

0x0001,

0xfa15,	// (0x0003b226) list_single_graphic_popup_conf4_pane_g

0x422b,	// (0x0002fa3c) list_single_graphic_popup_conf4_pane_t1

0x83bb,	// (0x00033bcc) popup_vtel_slider_window_ParamLimits

0x83bb,	// (0x00033bcc) popup_vtel_slider_window

0x3db3,	// (0x0002f5c4) dialer2_ne_pane_t2_ParamLimits

0x3db3,	// (0x0002f5c4) dialer2_ne_pane_t2

0x0001,

0xf8f6,	// (0x0003b107) dialer2_ne_pane_t_ParamLimits

0xf8f6,	// (0x0003b107) dialer2_ne_pane_t

0xf0cc,	// (0x0003a8dd) bg_popup_sub_pane_cp010_ParamLimits

0xf0cc,	// (0x0003a8dd) bg_popup_sub_pane_cp010

0xc21c,	// (0x00037a2d) popup_vtel_slider_window_g1_ParamLimits

0xc21c,	// (0x00037a2d) popup_vtel_slider_window_g1

0xc228,	// (0x00037a39) popup_vtel_slider_window_g2_ParamLimits

0xc228,	// (0x00037a39) popup_vtel_slider_window_g2

0x0003,

0xfa1a,	// (0x0003b22b) popup_vtel_slider_window_g_ParamLimits

0xfa1a,	// (0x0003b22b) popup_vtel_slider_window_g

0xc26e,	// (0x00037a7f) vtel_slider_pane_ParamLimits

0xc26e,	// (0x00037a7f) vtel_slider_pane

0xc27d,	// (0x00037a8e) vtel_slider_pane_g1_ParamLimits

0xc27d,	// (0x00037a8e) vtel_slider_pane_g1

0xc28a,	// (0x00037a9b) vtel_slider_pane_g2_ParamLimits

0xc28a,	// (0x00037a9b) vtel_slider_pane_g2

0xc297,	// (0x00037aa8) vtel_slider_pane_g3_ParamLimits

0xc297,	// (0x00037aa8) vtel_slider_pane_g3

0xc27d,	// (0x00037a8e) vtel_slider_pane_g4_ParamLimits

0xc27d,	// (0x00037a8e) vtel_slider_pane_g4

0xc2a4,	// (0x00037ab5) vtel_slider_pane_g5_ParamLimits

0xc2a4,	// (0x00037ab5) vtel_slider_pane_g5

0x0004,

0xfa23,	// (0x0003b234) vtel_slider_pane_g_ParamLimits

0xfa23,	// (0x0003b234) vtel_slider_pane_g

0xe617,	// (0x00039e28) main_gallery2_pane

0xbb14,	// (0x00037325) aid_size_row_itut2_dropdow_list_ParamLimits

0xbb14,	// (0x00037325) aid_size_row_itut2_dropdow_list

0xbb5a,	// (0x0003736b) grid_vitu2_function_top_pane_ParamLimits

0xbb5a,	// (0x0003736b) grid_vitu2_function_top_pane

0xbb94,	// (0x000373a5) popup_vitu2_dropdown_list_window_ParamLimits

0xbb94,	// (0x000373a5) popup_vitu2_dropdown_list_window

0xbbae,	// (0x000373bf) popup_vitu2_match_list_window

0xc2b1,	// (0x00037ac2) cell_vitu2_function_top_pane_ParamLimits

0xc2b1,	// (0x00037ac2) cell_vitu2_function_top_pane

0xc2d1,	// (0x00037ae2) cell_vitu2_function_top_pane_cp01_ParamLimits

0xc2d1,	// (0x00037ae2) cell_vitu2_function_top_pane_cp01

0xc2f1,	// (0x00037b02) cell_vitu2_function_top_wide_pane_ParamLimits

0xc2f1,	// (0x00037b02) cell_vitu2_function_top_wide_pane

0xf0cc,	// (0x0003a8dd) bg_button_pane_cp012

0xc30f,	// (0x00037b20) cell_vitu2_function_top_pane_g1

0xc31e,	// (0x00037b2f) bg_button_pane_cp013_ParamLimits

0xc31e,	// (0x00037b2f) bg_button_pane_cp013

0xc33a,	// (0x00037b4b) cell_vitu2_function_top_wide_pane_g1_ParamLimits

0xc33a,	// (0x00037b4b) cell_vitu2_function_top_wide_pane_g1

0x76a9,	// (0x00032eba) bg_popup_sub_pane_cp20

0xc352,	// (0x00037b63) list_vitu2_match_list_pane

0x3fd2,	// (0x0002f7e3) bg_popup_sub_pane_cp20_g1

0x3fda,	// (0x0002f7eb) bg_popup_sub_pane_cp20_g2

0x1030,	// (0x0002c841) bg_popup_sub_pane_cp20_g3

0x3fe2,	// (0x0002f7f3) bg_popup_sub_pane_cp20_g4

0x1010,	// (0x0002c821) bg_popup_sub_pane_cp20_g5

0x4263,	// (0x0002fa74) bg_popup_sub_pane_cp20_g6

0x3ff2,	// (0x0002f803) bg_popup_sub_pane_cp20_g7

0x3ffa,	// (0x0002f80b) bg_popup_sub_pane_cp20_g8

0x4002,	// (0x0002f813) bg_popup_sub_pane_cp20_g9

0x0008,

0xfa2e,	// (0x0003b23f) bg_popup_sub_pane_cp20_g

0xc36a,	// (0x00037b7b) list_vitu2_match_list_item_pane_ParamLimits

0xc36a,	// (0x00037b7b) list_vitu2_match_list_item_pane

0xc37c,	// (0x00037b8d) list_vitu2_match_list_item_pane_t1

0xe617,	// (0x00039e28) bg_popup_sub_pane_cp21

0x1545,	// (0x0002cd56) grid_vitu2_dropdown_list_pane

0xc38a,	// (0x00037b9b) cell_vitu2_dropdown_list_char_pane_ParamLimits

0xc38a,	// (0x00037b9b) cell_vitu2_dropdown_list_char_pane

0xc3ab,	// (0x00037bbc) cell_vitu2_dropdown_list_ctrl_pane_ParamLimits

0xc3ab,	// (0x00037bbc) cell_vitu2_dropdown_list_ctrl_pane

0x42a5,	// (0x0002fab6) cell_vitu2_dropdown_list_char_pane_g1

0x429c,	// (0x0002faad) cell_vitu2_dropdown_list_char_pane_g2

0x4293,	// (0x0002faa4) cell_vitu2_dropdown_list_char_pane_g3

0x0002,

0xfa4b,	// (0x0003b25c) cell_vitu2_dropdown_list_char_pane_g

0xc3d7,	// (0x00037be8) cell_vitu2_dropdown_list_char_pane_t1

0xc3e5,	// (0x00037bf6) cell_vitu2_dropdown_list_ctrl_pane_g1_ParamLimits

0xc3e5,	// (0x00037bf6) cell_vitu2_dropdown_list_ctrl_pane_g1

0xc3f5,	// (0x00037c06) cell_vitu2_dropdown_list_ctrl_pane_g2_ParamLimits

0xc3f5,	// (0x00037c06) cell_vitu2_dropdown_list_ctrl_pane_g2

0xc406,	// (0x00037c17) cell_vitu2_dropdown_list_ctrl_pane_g3_ParamLimits

0xc406,	// (0x00037c17) cell_vitu2_dropdown_list_ctrl_pane_g3

0xc416,	// (0x00037c27) cell_vitu2_dropdown_list_ctrl_pane_g4_ParamLimits

0xc416,	// (0x00037c27) cell_vitu2_dropdown_list_ctrl_pane_g4

0x34f5,	// (0x0002ed06) cell_vitu2_dropdown_list_ctrl_pane_g5_ParamLimits

0x34f5,	// (0x0002ed06) cell_vitu2_dropdown_list_ctrl_pane_g5

0x0004,

0xfa52,	// (0x0003b263) cell_vitu2_dropdown_list_ctrl_pane_g_ParamLimits

0xfa52,	// (0x0003b263) cell_vitu2_dropdown_list_ctrl_pane_g

0xc42f,	// (0x00037c40) aid_size_cell_gallery2_ParamLimits

0xc42f,	// (0x00037c40) aid_size_cell_gallery2

0xc43d,	// (0x00037c4e) grid_gallery2_pane_ParamLimits

0xc43d,	// (0x00037c4e) grid_gallery2_pane

0xc44a,	// (0x00037c5b) scroll_pane_cp029_ParamLimits

0xc44a,	// (0x00037c5b) scroll_pane_cp029

0xc456,	// (0x00037c67) cell_gallery2_pane_ParamLimits

0xc456,	// (0x00037c67) cell_gallery2_pane

0x42ae,	// (0x0002fabf) cell_gallery2_pane_g2

0xc482,	// (0x00037c93) cell_gallery2_pane_g3

0x42b8,	// (0x0002fac9) cell_gallery2_pane_g4

0x42c0,	// (0x0002fad1) cell_gallery2_pane_g5

0x18db,	// (0x0002d0ec) grid_highlight_pane_cp10

0xbbae,	// (0x000373bf) popup_vitu2_match_list_window_ParamLimits

0xbbbe,	// (0x000373cf) popup_vitu2_query_window_ParamLimits

0xbbbe,	// (0x000373cf) popup_vitu2_query_window

0xe617,	// (0x00039e28) bg_vitu2_candi_button_pane

0x42a5,	// (0x0002fab6) cell_vitu2_dropdown_list_char_pane_g1_copy1

0x429c,	// (0x0002faad) cell_vitu2_dropdown_list_char_pane_g2_copy1

0x4293,	// (0x0002faa4) cell_vitu2_dropdown_list_char_pane_g2_copy2

0x689e,	// (0x000320af) bg_button_pane_cp015

0xc48a,	// (0x00037c9b) bg_button_pane_cp016

0xc494,	// (0x00037ca5) bg_button_pane_cp017

0xf0cc,	// (0x0003a8dd) bg_popup_sub_pane_cp22

0x42c8,	// (0x0002fad9) popup_vitu2_query_window_g1

0xc4af,	// (0x00037cc0) popup_vitu2_query_window_g2

0x0001,

0xfa5d,	// (0x0003b26e) popup_vitu2_query_window_g

0x68b3,	// (0x000320c4) popup_vitu2_query_window_t1_ParamLimits

0x68b3,	// (0x000320c4) popup_vitu2_query_window_t1

0x68db,	// (0x000320ec) popup_vitu2_query_window_t2_ParamLimits

0x68db,	// (0x000320ec) popup_vitu2_query_window_t2

0x68ed,	// (0x000320fe) popup_vitu2_query_window_t3_ParamLimits

0x68ed,	// (0x000320fe) popup_vitu2_query_window_t3

0xc4bb,	// (0x00037ccc) popup_vitu2_query_window_t4_ParamLimits

0xc4bb,	// (0x00037ccc) popup_vitu2_query_window_t4

0xc4cd,	// (0x00037cde) popup_vitu2_query_window_t5_ParamLimits

0xc4cd,	// (0x00037cde) popup_vitu2_query_window_t5

0x0004,

0xfa62,	// (0x0003b273) popup_vitu2_query_window_t_ParamLimits

0xfa62,	// (0x0003b273) popup_vitu2_query_window_t

0x40c0,	// (0x0002f8d1) main_cset_text_pane

0xbf3c,	// (0x0003774d) aid_area_touch_slider_ParamLimits

0xbf58,	// (0x00037769) cset_slider_pane_ParamLimits

0xbf82,	// (0x00037793) main_cset_slider_pane_g1_ParamLimits

0xbf97,	// (0x000377a8) main_cset_slider_pane_g2_ParamLimits

0x40e1,	// (0x0002f8f2) main_cset_slider_pane_g3_ParamLimits

0x40e1,	// (0x0002f8f2) main_cset_slider_pane_g3

0xbfac,	// (0x000377bd) main_cset_slider_pane_g4_ParamLimits

0xbfac,	// (0x000377bd) main_cset_slider_pane_g4

0xbfbb,	// (0x000377cc) main_cset_slider_pane_g5_ParamLimits

0xbfbb,	// (0x000377cc) main_cset_slider_pane_g5

0xbfc7,	// (0x000377d8) main_cset_slider_pane_g6_ParamLimits

0xbfc7,	// (0x000377d8) main_cset_slider_pane_g6

0xf9b7,	// (0x0003b1c8) main_cset_slider_pane_g_ParamLimits

0x4111,	// (0x0002f922) main_cset_slider_pane_t1_ParamLimits

0xc053,	// (0x00037864) main_cset_slider_pane_t2_ParamLimits

0xc06d,	// (0x0003787e) main_cset_slider_pane_t3_ParamLimits

0xc087,	// (0x00037898) main_cset_slider_pane_t4_ParamLimits

0xc0a1,	// (0x000378b2) main_cset_slider_pane_t5_ParamLimits

0xc0bb,	// (0x000378cc) main_cset_slider_pane_t6_ParamLimits

0xc0d0,	// (0x000378e1) main_cset_slider_pane_t7_ParamLimits

0xc0fa,	// (0x0003790b) main_cset_slider_pane_t8_ParamLimits

0xc0fa,	// (0x0003790b) main_cset_slider_pane_t8

0xc122,	// (0x00037933) main_cset_slider_pane_t9_ParamLimits

0xc122,	// (0x00037933) main_cset_slider_pane_t9

0xc14a,	// (0x0003795b) main_cset_slider_pane_t10_ParamLimits

0xc14a,	// (0x0003795b) main_cset_slider_pane_t10

0xc172,	// (0x00037983) main_cset_slider_pane_t11_ParamLimits

0xc172,	// (0x00037983) main_cset_slider_pane_t11

0xc19a,	// (0x000379ab) main_cset_slider_pane_t12_ParamLimits

0xc19a,	// (0x000379ab) main_cset_slider_pane_t12

0xc1b7,	// (0x000379c8) main_cset_slider_pane_t13_ParamLimits

0xc1b7,	// (0x000379c8) main_cset_slider_pane_t13

0xf9dc,	// (0x0003b1ed) main_cset_slider_pane_t_ParamLimits

0xe617,	// (0x00039e28) bg_popup_sub_pane_cp011

0x42d4,	// (0x0002fae5) main_cset_text_pane_g1

0x42dc,	// (0x0002faed) main_cset_text_pane_t1

0x42ea,	// (0x0002fafb) main_cset_text_pane_t2

0x42f8,	// (0x0002fb09) main_cset_text_pane_t3

0x4306,	// (0x0002fb17) main_cset_text_pane_t4

0x4314,	// (0x0002fb25) main_cset_text_pane_t5

0x4322,	// (0x0002fb33) main_cset_text_pane_t6

0x4330,	// (0x0002fb41) main_cset_text_pane_t7

0x0006,

0xfa6d,	// (0x0003b27e) main_cset_text_pane_t

0xe617,	// (0x00039e28) main_cam4_burst_pane

0xe617,	// (0x00039e28) main_cam5_pane

0xbe97,	// (0x000376a8) bg_button_pane_cp019

0xbea0,	// (0x000376b1) bg_button_pane_cp020

0x40ed,	// (0x0002f8fe) main_cset_slider_pane_g7_ParamLimits

0x40ed,	// (0x0002f8fe) main_cset_slider_pane_g7

0x40f9,	// (0x0002f90a) main_cset_slider_pane_g8_ParamLimits

0x40f9,	// (0x0002f90a) main_cset_slider_pane_g8

0xbfdb,	// (0x000377ec) main_cset_slider_pane_g9_ParamLimits

0xbfdb,	// (0x000377ec) main_cset_slider_pane_g9

0xbfe7,	// (0x000377f8) main_cset_slider_pane_g10_ParamLimits

0xbfe7,	// (0x000377f8) main_cset_slider_pane_g10

0xbff3,	// (0x00037804) main_cset_slider_pane_g11_ParamLimits

0xbff3,	// (0x00037804) main_cset_slider_pane_g11

0xbfff,	// (0x00037810) main_cset_slider_pane_g12_ParamLimits

0xbfff,	// (0x00037810) main_cset_slider_pane_g12

0xc00b,	// (0x0003781c) main_cset_slider_pane_g13_ParamLimits

0xc00b,	// (0x0003781c) main_cset_slider_pane_g13

0xc017,	// (0x00037828) main_cset_slider_pane_g14_ParamLimits

0xc017,	// (0x00037828) main_cset_slider_pane_g14

0xc023,	// (0x00037834) main_cset_slider_pane_g15_ParamLimits

0xc023,	// (0x00037834) main_cset_slider_pane_g15

0x413f,	// (0x0002f950) main_cset_slider_pane_t14_ParamLimits

0x413f,	// (0x0002f950) main_cset_slider_pane_t14

0x4178,	// (0x0002f989) main_cset_slider_pane_t15_ParamLimits

0x4178,	// (0x0002f989) main_cset_slider_pane_t15

0xc4df,	// (0x00037cf0) aid_cam4_burst_size_cell_ParamLimits

0xc4df,	// (0x00037cf0) aid_cam4_burst_size_cell

0xc4fb,	// (0x00037d0c) grid_cam4_burst_pane_ParamLimits

0xc4fb,	// (0x00037d0c) grid_cam4_burst_pane

0xc51d,	// (0x00037d2e) linegrid_cam4_burst_pane_ParamLimits

0xc51d,	// (0x00037d2e) linegrid_cam4_burst_pane

0xc53b,	// (0x00037d4c) scroll_pane_cp30_ParamLimits

0xc53b,	// (0x00037d4c) scroll_pane_cp30

0xc547,	// (0x00037d58) cell_cam4_burst_pane_ParamLimits

0xc547,	// (0x00037d58) cell_cam4_burst_pane

0x433e,	// (0x0002fb4f) linegrid_cam4_burst_pane_g1_ParamLimits

0x433e,	// (0x0002fb4f) linegrid_cam4_burst_pane_g1

0xc57f,	// (0x00037d90) linegrid_cam4_burst_pane_g2_ParamLimits

0xc57f,	// (0x00037d90) linegrid_cam4_burst_pane_g2

0x434b,	// (0x0002fb5c) linegrid_cam4_burst_pane_g3_ParamLimits

0x434b,	// (0x0002fb5c) linegrid_cam4_burst_pane_g3

0x0002,

0xfa7c,	// (0x0003b28d) linegrid_cam4_burst_pane_g_ParamLimits

0xfa7c,	// (0x0003b28d) linegrid_cam4_burst_pane_g

0xc590,	// (0x00037da1) linegrid_cam4_burst_pane_g3_copy1_ParamLimits

0xc590,	// (0x00037da1) linegrid_cam4_burst_pane_g3_copy1

0x4358,	// (0x0002fb69) linegrid_cam4_burst_pane_g4_ParamLimits

0x4358,	// (0x0002fb69) linegrid_cam4_burst_pane_g4

0xc5aa,	// (0x00037dbb) linegrid_cam4_burst_pane_g5_ParamLimits

0xc5aa,	// (0x00037dbb) linegrid_cam4_burst_pane_g5

0xc5bb,	// (0x00037dcc) linegrid_cam4_burst_pane_g6_ParamLimits

0xc5bb,	// (0x00037dcc) linegrid_cam4_burst_pane_g6

0x4365,	// (0x0002fb76) linegrid_cam4_burst_pane_g7_ParamLimits

0x4365,	// (0x0002fb76) linegrid_cam4_burst_pane_g7

0xc5cc,	// (0x00037ddd) cell_cam4_burst_pane_g1

0x437e,	// (0x0002fb8f) main_cam5_pane_t1_ParamLimits

0x437e,	// (0x0002fb8f) main_cam5_pane_t1

0x4390,	// (0x0002fba1) main_cam5_pane_t2_ParamLimits

0x4390,	// (0x0002fba1) main_cam5_pane_t2

0x43a2,	// (0x0002fbb3) main_cam5_pane_t3_ParamLimits

0x43a2,	// (0x0002fbb3) main_cam5_pane_t3

0x43b4,	// (0x0002fbc5) main_cam5_pane_t4_ParamLimits

0x43b4,	// (0x0002fbc5) main_cam5_pane_t4

0x43ca,	// (0x0002fbdb) main_cam5_pane_t5_ParamLimits

0x43ca,	// (0x0002fbdb) main_cam5_pane_t5

0x43dc,	// (0x0002fbed) main_cam5_pane_t6_ParamLimits

0x43dc,	// (0x0002fbed) main_cam5_pane_t6

0x43ee,	// (0x0002fbff) main_cam5_pane_t7_ParamLimits

0x43ee,	// (0x0002fbff) main_cam5_pane_t7

0x4400,	// (0x0002fc11) main_cam5_pane_t8_ParamLimits

0x4400,	// (0x0002fc11) main_cam5_pane_t8

0x441c,	// (0x0002fc2d) main_cam5_pane_t9_ParamLimits

0x441c,	// (0x0002fc2d) main_cam5_pane_t9

0x442e,	// (0x0002fc3f) main_cam5_pane_t10_ParamLimits

0x442e,	// (0x0002fc3f) main_cam5_pane_t10

0x4440,	// (0x0002fc51) main_cam5_pane_t11_ParamLimits

0x4440,	// (0x0002fc51) main_cam5_pane_t11

0x4452,	// (0x0002fc63) main_cam5_pane_t12_ParamLimits

0x4452,	// (0x0002fc63) main_cam5_pane_t12

0x4467,	// (0x0002fc78) main_cam5_pane_t13_ParamLimits

0x4467,	// (0x0002fc78) main_cam5_pane_t13

0x000c,

0xfa88,	// (0x0003b299) main_cam5_pane_t_ParamLimits

0xfa88,	// (0x0003b299) main_cam5_pane_t

0x7672,	// (0x00032e83) popup_scut_keymap_window_ParamLimits

0x7672,	// (0x00032e83) popup_scut_keymap_window

0xc5df,	// (0x00037df0) aid_size_cell_brow_shortcut

0x18db,	// (0x0002d0ec) bg_popup_window_pane_cp010

0xc5eb,	// (0x00037dfc) grid_scut_pane

0xc5f5,	// (0x00037e06) cell_scut_pane_ParamLimits

0xc5f5,	// (0x00037e06) cell_scut_pane

0xc60a,	// (0x00037e1b) cell_scut_pane_g1

0x4484,	// (0x0002fc95) cell_scut_pane_t1

0x4493,	// (0x0002fca4) cell_scut_pane_t2

0xc613,	// (0x00037e24) cell_scut_pane_t3

0x0002,

0xfaa3,	// (0x0003b2b4) cell_scut_pane_t

0xa867,	// (0x00036078) main_mup3_pane_g8_ParamLimits

0xa867,	// (0x00036078) main_mup3_pane_g8

0xbb20,	// (0x00037331) area_vitu2_query_pane_ParamLimits

0xbb20,	// (0x00037331) area_vitu2_query_pane

0x68a6,	// (0x000320b7) input_focus_pane_cp08

0x44a2,	// (0x0002fcb3) area_vitu2_query_pane_g1

0x6915,	// (0x00032126) area_vitu2_query_pane_g2

0x0001,

0xfaaa,	// (0x0003b2bb) area_vitu2_query_pane_g

0xc621,	// (0x00037e32) area_vitu2_query_pane_t1_ParamLimits

0xc621,	// (0x00037e32) area_vitu2_query_pane_t1

0xc633,	// (0x00037e44) area_vitu2_query_pane_t2_ParamLimits

0xc633,	// (0x00037e44) area_vitu2_query_pane_t2

0x6924,	// (0x00032135) area_vitu2_query_pane_t3_ParamLimits

0x6924,	// (0x00032135) area_vitu2_query_pane_t3

0x694c,	// (0x0003215d) area_vitu2_query_pane_t4_ParamLimits

0x694c,	// (0x0003215d) area_vitu2_query_pane_t4

0x6974,	// (0x00032185) area_vitu2_query_pane_t5_ParamLimits

0x6974,	// (0x00032185) area_vitu2_query_pane_t5

0x699c,	// (0x000321ad) area_vitu2_query_pane_t6_ParamLimits

0x699c,	// (0x000321ad) area_vitu2_query_pane_t6

0x0006,

0xfaaf,	// (0x0003b2c0) area_vitu2_query_pane_t_ParamLimits

0xfaaf,	// (0x0003b2c0) area_vitu2_query_pane_t

0xc645,	// (0x00037e56) bg_button_pane_cp018

0xc652,	// (0x00037e63) bg_button_pane_cp021

0x69e8,	// (0x000321f9) bg_button_pane_cp022

0x69f7,	// (0x00032208) input_focus_pane_cp09

0x914c,	// (0x0003495d) aid_size_touch_mv_arrow_left

0x17b4,	// (0x0002cfc5) aid_size_touch_mv_arrow_right

0xc03b,	// (0x0003784c) main_cset_slider_pane_g16_ParamLimits

0xc03b,	// (0x0003784c) main_cset_slider_pane_g16

0xc047,	// (0x00037858) main_cset_slider_pane_g17_ParamLimits

0xc047,	// (0x00037858) main_cset_slider_pane_g17

0xc5cc,	// (0x00037ddd) cell_cam4_burst_pane_g1_ParamLimits

0xe617,	// (0x00039e28) compa_mode_pane

0xc234,	// (0x00037a45) popup_vtel_slider_window_g3_ParamLimits

0xc234,	// (0x00037a45) popup_vtel_slider_window_g3

0xc248,	// (0x00037a59) popup_vtel_slider_window_g4_ParamLimits

0xc248,	// (0x00037a59) popup_vtel_slider_window_g4

0xc25c,	// (0x00037a6d) popup_vtel_slider_window_t1_ParamLimits

0xc25c,	// (0x00037a6d) popup_vtel_slider_window_t1

0xe617,	// (0x00039e28) main_cl_pane

0x2df7,	// (0x0002e608) popup_imed_adjust2_window_ParamLimits

0x2dd1,	// (0x0002e5e2) bg_tb_trans_pane_cp05_ParamLimits

0x378f,	// (0x0002efa0) popup_imed_adjust2_window_g1_ParamLimits

0x379e,	// (0x0002efaf) popup_imed_adjust2_window_g2_ParamLimits

0x379e,	// (0x0002efaf) popup_imed_adjust2_window_g2

0x37aa,	// (0x0002efbb) popup_imed_adjust2_window_g3_ParamLimits

0x37aa,	// (0x0002efbb) popup_imed_adjust2_window_g3

0x0002,

0xf820,	// (0x0003b031) popup_imed_adjust2_window_g_ParamLimits

0xf820,	// (0x0003b031) popup_imed_adjust2_window_g

0x37b6,	// (0x0002efc7) popup_imed_adjust2_window_t1_ParamLimits

0x37ce,	// (0x0002efdf) slider_imed_adjust_pane_ParamLimits

0x37e2,	// (0x0002eff3) slider_imed_adjust_pane_g1_ParamLimits

0x37f2,	// (0x0002f003) slider_imed_adjust_pane_g2_ParamLimits

0x3802,	// (0x0002f013) slider_imed_adjust_pane_g3_ParamLimits

0x3813,	// (0x0002f024) slider_imed_adjust_pane_g4_ParamLimits

0xf827,	// (0x0003b038) slider_imed_adjust_pane_g_ParamLimits

0xb8d2,	// (0x000370e3) aid_touch_area_cam4_ParamLimits

0xb8d2,	// (0x000370e3) aid_touch_area_cam4

0xb8e0,	// (0x000370f1) battery_pane_cp01

0xb955,	// (0x00037166) main_camera4_pane_g6_ParamLimits

0xb955,	// (0x00037166) main_camera4_pane_g6

0xb973,	// (0x00037184) main_camera4_pane_t2_ParamLimits

0xb973,	// (0x00037184) main_camera4_pane_t2

0x0001,

0xf92a,	// (0x0003b13b) main_camera4_pane_t_ParamLimits

0xf92a,	// (0x0003b13b) main_camera4_pane_t

0xb9fb,	// (0x0003720c) aid_touch_area_vid4_ParamLimits

0xb9fb,	// (0x0003720c) aid_touch_area_vid4

0xb955,	// (0x00037166) main_video4_pane_g5_ParamLimits

0xb955,	// (0x00037166) main_video4_pane_g5

0xba2b,	// (0x0003723c) vid4_progress_pane_ParamLimits

0xba2b,	// (0x0003723c) vid4_progress_pane

0x4105,	// (0x0002f916) main_cset_slider_pane_g18_ParamLimits

0x4105,	// (0x0002f916) main_cset_slider_pane_g18

0x4372,	// (0x0002fb83) cell_cam4_burst_pane_g2_ParamLimits

0x4372,	// (0x0002fb83) cell_cam4_burst_pane_g2

0x0001,

0xfa83,	// (0x0003b294) cell_cam4_burst_pane_g_ParamLimits

0xfa83,	// (0x0003b294) cell_cam4_burst_pane_g

0xc65e,	// (0x00037e6f) bg_cl_pane_ParamLimits

0xc65e,	// (0x00037e6f) bg_cl_pane

0xc66a,	// (0x00037e7b) cl_header_pane_ParamLimits

0xc66a,	// (0x00037e7b) cl_header_pane

0xc676,	// (0x00037e87) cl_listscroll_pane_ParamLimits

0xc676,	// (0x00037e87) cl_listscroll_pane

0x454a,	// (0x0002fd5b) bg_cl_pane_g1

0x4552,	// (0x0002fd63) bg_cl_pane_g2

0x455a,	// (0x0002fd6b) bg_cl_pane_g3

0x4562,	// (0x0002fd73) bg_cl_pane_g4

0x456a,	// (0x0002fd7b) bg_cl_pane_g5

0x4572,	// (0x0002fd83) bg_cl_pane_g6

0x457a,	// (0x0002fd8b) bg_cl_pane_g7

0x4582,	// (0x0002fd93) bg_cl_pane_g8

0x458a,	// (0x0002fd9b) bg_cl_pane_g9

0x0008,

0xfabe,	// (0x0003b2cf) bg_cl_pane_g

0xc682,	// (0x00037e93) aid_height_cl_leading_ParamLimits

0xc682,	// (0x00037e93) aid_height_cl_leading

0xc68e,	// (0x00037e9f) aid_height_cl_text_ParamLimits

0xc68e,	// (0x00037e9f) aid_height_cl_text

0x76a9,	// (0x00032eba) bg_cl_header_pane_ParamLimits

0x76a9,	// (0x00032eba) bg_cl_header_pane

0xc6a6,	// (0x00037eb7) cl_header_pane_g1_ParamLimits

0xc6a6,	// (0x00037eb7) cl_header_pane_g1

0xc6b3,	// (0x00037ec4) cl_header_pane_t1_ParamLimits

0xc6b3,	// (0x00037ec4) cl_header_pane_t1

0x4592,	// (0x0002fda3) cl_list_pane

0x459b,	// (0x0002fdac) hc_scroll_pane_cp01

0x1010,	// (0x0002c821) bg_cl_header_pane_g1

0x3fd2,	// (0x0002f7e3) bg_cl_header_pane_g2

0x1030,	// (0x0002c841) bg_cl_header_pane_g3

0x3fe2,	// (0x0002f7f3) bg_cl_header_pane_g4

0x3fda,	// (0x0002f7eb) bg_cl_header_pane_g5

0x4263,	// (0x0002fa74) bg_cl_header_pane_g6

0x3ffa,	// (0x0002f80b) bg_cl_header_pane_g7

0x4002,	// (0x0002f813) bg_cl_header_pane_g8

0x3ff2,	// (0x0002f803) bg_cl_header_pane_g9

0x0008,

0xfad1,	// (0x0003b2e2) bg_cl_header_pane_g

0xc6c5,	// (0x00037ed6) hc_cl_list_double_graphic_heading_pane_ParamLimits

0xc6c5,	// (0x00037ed6) hc_cl_list_double_graphic_heading_pane

0xc6d5,	// (0x00037ee6) hc_cl_list_single_graphic_pane_ParamLimits

0xc6d5,	// (0x00037ee6) hc_cl_list_single_graphic_pane

0xc6e7,	// (0x00037ef8) hc_cl_list_single_graphic_pane_g1_ParamLimits

0xc6e7,	// (0x00037ef8) hc_cl_list_single_graphic_pane_g1

0xc6f3,	// (0x00037f04) hc_cl_list_single_graphic_pane_g2_ParamLimits

0xc6f3,	// (0x00037f04) hc_cl_list_single_graphic_pane_g2

0x0001,

0xfae4,	// (0x0003b2f5) hc_cl_list_single_graphic_pane_g_ParamLimits

0xfae4,	// (0x0003b2f5) hc_cl_list_single_graphic_pane_g

0xc707,	// (0x00037f18) hc_cl_list_single_graphic_pane_t1_ParamLimits

0xc707,	// (0x00037f18) hc_cl_list_single_graphic_pane_t1

0xc6e7,	// (0x00037ef8) hc_cl_list_double_graphic_heading_pane_g1_ParamLimits

0xc6e7,	// (0x00037ef8) hc_cl_list_double_graphic_heading_pane_g1

0xc71c,	// (0x00037f2d) hc_cl_list_double_graphic_heading_pane_g2_ParamLimits

0xc71c,	// (0x00037f2d) hc_cl_list_double_graphic_heading_pane_g2

0xc730,	// (0x00037f41) hc_cl_list_double_graphic_heading_pane_g3_ParamLimits

0xc730,	// (0x00037f41) hc_cl_list_double_graphic_heading_pane_g3

0x0002,

0xfae9,	// (0x0003b2fa) hc_cl_list_double_graphic_heading_pane_g_ParamLimits

0xfae9,	// (0x0003b2fa) hc_cl_list_double_graphic_heading_pane_g

0xc744,	// (0x00037f55) hc_cl_list_double_graphic_heading_pane_t1_ParamLimits

0xc744,	// (0x00037f55) hc_cl_list_double_graphic_heading_pane_t1

0xc759,	// (0x00037f6a) hc_cl_list_double_graphic_heading_pane_t2_ParamLimits

0xc759,	// (0x00037f6a) hc_cl_list_double_graphic_heading_pane_t2

0x0001,

0xfaf0,	// (0x0003b301) hc_cl_list_double_graphic_heading_pane_t_ParamLimits

0xfaf0,	// (0x0003b301) hc_cl_list_double_graphic_heading_pane_t

0xc76e,	// (0x00037f7f) vid4_progress_pane_g1

0xc77d,	// (0x00037f8e) vid4_progress_pane_g2

0xc78c,	// (0x00037f9d) vid4_progress_pane_g3

0xc79b,	// (0x00037fac) vid4_progress_pane_g4

0x0004,

0xfaf5,	// (0x0003b306) vid4_progress_pane_g

0xc7a7,	// (0x00037fb8) vid4_progress_pane_t1

0xc7bd,	// (0x00037fce) vid4_progress_pane_t2

0x0002,

0xfb00,	// (0x0003b311) vid4_progress_pane_t

0xc7e7,	// (0x00037ff8) wait_bar_pane_cp07

0x30c1,	// (0x0002e8d2) blid_firmament_pane_ParamLimits

0x3102,	// (0x0002e913) popup_blid_sat_info2_window_g1

0x3126,	// (0x0002e937) popup_blid_sat_info2_window_t3

0x3134,	// (0x0002e945) popup_blid_sat_info2_window_t4

0x3142,	// (0x0002e953) popup_blid_sat_info2_window_t5

0x3150,	// (0x0002e961) popup_blid_sat_info2_window_t6

0x3160,	// (0x0002e971) popup_blid_sat_info2_window_t7

0x316e,	// (0x0002e97f) popup_blid_sat_info2_window_t8

0x317c,	// (0x0002e98d) popup_blid_sat_info2_window_t9

0x318a,	// (0x0002e99b) popup_blid_sat_info2_window_t10

0x3246,	// (0x0002ea57) aid_firma_cardinal_ParamLimits

0x325a,	// (0x0002ea6b) blid_firmament_pane_t1_ParamLimits

0x3271,	// (0x0002ea82) blid_firmament_pane_t2_ParamLimits

0x3288,	// (0x0002ea99) blid_firmament_pane_t3_ParamLimits

0x329f,	// (0x0002eab0) blid_firmament_pane_t4_ParamLimits

0xf719,	// (0x0003af2a) blid_firmament_pane_t_ParamLimits

0x32b6,	// (0x0002eac7) blid_sat_info_pane_ParamLimits

0xf0cc,	// (0x0003a8dd) main_cam_set_pane_ParamLimits

0xafcc,	// (0x000367dd) aid_size_cell_colour_35_ParamLimits

0xafe3,	// (0x000367f4) aid_size_cell_colour_112_ParamLimits

0xaffa,	// (0x0003680b) aid_size_cell_effect_ParamLimits

0xf0cc,	// (0x0003a8dd) bg_tb_trans_pane_cp02_ParamLimits

0x135a,	// (0x0002cb6b) heading_imed_pane_ParamLimits

0xb014,	// (0x00036825) listscroll_imed_pane_ParamLimits

0x23c3,	// (0x0002dbd4) popup_call2_audio_first_window_g5_ParamLimits

0x23c3,	// (0x0002dbd4) popup_call2_audio_first_window_g5

0xb697,	// (0x00036ea8) aid_size_touch_image3_arrow_left_ParamLimits

0xb697,	// (0x00036ea8) aid_size_touch_image3_arrow_left

0xb6ab,	// (0x00036ebc) aid_size_touch_image3_arrow_right_ParamLimits

0xb6ab,	// (0x00036ebc) aid_size_touch_image3_arrow_right

0xc7d2,	// (0x00037fe3) vid4_progress_pane_t3

0xb278,	// (0x00036a89) main_hwr_training_symbol_option_pane_ParamLimits

0xb278,	// (0x00036a89) main_hwr_training_symbol_option_pane

0x3a6e,	// (0x0002f27f) popup_hwr_training_preview_window_ParamLimits

0x3a6e,	// (0x0002f27f) popup_hwr_training_preview_window

0xb2d3,	// (0x00036ae4) hwr_training_navi_pane_g5_ParamLimits

0xb2d3,	// (0x00036ae4) hwr_training_navi_pane_g5

0x3fb2,	// (0x0002f7c3) popup_char_count_window

0x76a9,	// (0x00032eba) bg_popup_sub_pane_cp20_ParamLimits

0xc352,	// (0x00037b63) list_vitu2_match_list_pane_ParamLimits

0xc35e,	// (0x00037b6f) vitu2_page_scroll_pane_ParamLimits

0xc35e,	// (0x00037b6f) vitu2_page_scroll_pane

0x4693,	// (0x0002fea4) list_single_hwr_training_symbol_option_pane_ParamLimits

0x4693,	// (0x0002fea4) list_single_hwr_training_symbol_option_pane

0x46a6,	// (0x0002feb7) list_single_hwr_training_symbol_option_pane_g1

0x46ae,	// (0x0002febf) list_single_hwr_training_symbol_option_pane_t1

0x46bc,	// (0x0002fecd) bg_button_pane_cp023

0x46c5,	// (0x0002fed6) bg_button_pane_cp024

0xc7f7,	// (0x00038008) vitu2_page_scroll_pane_g1

0xc7ff,	// (0x00038010) vitu2_page_scroll_pane_g2

0x0001,

0xfb07,	// (0x0003b318) vitu2_page_scroll_pane_g

0xc807,	// (0x00038018) vitu2_page_scroll_pane_t1

0x2fdd,	// (0x0002e7ee) popup_char_count_window_g1

0x46f8,	// (0x0002ff09) popup_char_count_window_g2

0x4701,	// (0x0002ff12) popup_char_count_window_g3

0x0002,

0xfb0c,	// (0x0003b31d) popup_char_count_window_g

0x470a,	// (0x0002ff1b) popup_char_count_window_t1

0xe617,	// (0x00039e28) main_vded2_pane

0x377d,	// (0x0002ef8e) aid_size_cell_imed_line

0x3787,	// (0x0002ef98) grid_imed_line_width_pane

0xba76,	// (0x00037287) vid4_indicators_pane_g4

0x4718,	// (0x0002ff29) cell_imed_line_width_pane_ParamLimits

0x4718,	// (0x0002ff29) cell_imed_line_width_pane

0x472a,	// (0x0002ff3b) cell_imed_line_width_pane_g1

0x306f,	// (0x0002e880) cell_imed_line_width_pane_g2

0x0001,

0xfb13,	// (0x0003b324) cell_imed_line_width_pane_g

0xc816,	// (0x00038027) main_vded2_pane_g1_ParamLimits

0xc816,	// (0x00038027) main_vded2_pane_g1

0xc823,	// (0x00038034) main_vded2_pane_g2_ParamLimits

0xc823,	// (0x00038034) main_vded2_pane_g2

0x0001,

0xfb18,	// (0x0003b329) main_vded2_pane_g_ParamLimits

0xfb18,	// (0x0003b329) main_vded2_pane_g

0xc82f,	// (0x00038040) vded2_slider_pane_ParamLimits

0xc82f,	// (0x00038040) vded2_slider_pane

0xc83c,	// (0x0003804d) aid_size_touch_vded2_end

0xc844,	// (0x00038055) aid_size_touch_vded2_playhead

0xc84c,	// (0x0003805d) aid_size_touch_vded2_start

0xc854,	// (0x00038065) vded2_slider_bg_pane

0xc85d,	// (0x0003806e) vded2_slider_pane_g1

0xc866,	// (0x00038077) vded2_slider_pane_g2

0xc86e,	// (0x0003807f) vded2_slider_pane_g3

0x0002,

0xfb1d,	// (0x0003b32e) vded2_slider_pane_g

0xc877,	// (0x00038088) vded2_slider_bg_pane_g1

0xc880,	// (0x00038091) vded2_slider_bg_pane_g2

0xc889,	// (0x0003809a) vded2_slider_bg_pane_g3

0x0002,

0xfb24,	// (0x0003b335) vded2_slider_bg_pane_g

0x9666,	// (0x00034e77) aid_postcard_touch_down_pane_ParamLimits

0x9666,	// (0x00034e77) aid_postcard_touch_down_pane

0x9672,	// (0x00034e83) aid_postcard_touch_up_pane_ParamLimits

0x9672,	// (0x00034e83) aid_postcard_touch_up_pane

0xe617,	// (0x00039e28) main_blid2_pane

0x2ddf,	// (0x0002e5f0) popup_blid2_search_window

0xe617,	// (0x00039e28) blid2_gps_pane

0xe617,	// (0x00039e28) blid2_navig_pane

0xe617,	// (0x00039e28) blid2_search_pane

0xe617,	// (0x00039e28) blid2_tripm_pane

0xc892,	// (0x000380a3) blid2_search_pane_g1_ParamLimits

0xc892,	// (0x000380a3) blid2_search_pane_g1

0xc89e,	// (0x000380af) blid2_search_pane_t1_ParamLimits

0xc89e,	// (0x000380af) blid2_search_pane_t1

0xc8b0,	// (0x000380c1) aid_size_cell_blid2_gps_ParamLimits

0xc8b0,	// (0x000380c1) aid_size_cell_blid2_gps

0xc8c0,	// (0x000380d1) blid2_gps_pane_g1_ParamLimits

0xc8c0,	// (0x000380d1) blid2_gps_pane_g1

0xc8cc,	// (0x000380dd) grid_blid2_satellite_pane_ParamLimits

0xc8cc,	// (0x000380dd) grid_blid2_satellite_pane

0xc8d8,	// (0x000380e9) blid2_navig_pane_g1_ParamLimits

0xc8d8,	// (0x000380e9) blid2_navig_pane_g1

0xc8e4,	// (0x000380f5) blid2_navig_pane_t1_ParamLimits

0xc8e4,	// (0x000380f5) blid2_navig_pane_t1

0xc8f6,	// (0x00038107) blid2_navig_pane_t2_ParamLimits

0xc8f6,	// (0x00038107) blid2_navig_pane_t2

0x0001,

0xfb2b,	// (0x0003b33c) blid2_navig_pane_t_ParamLimits

0xfb2b,	// (0x0003b33c) blid2_navig_pane_t

0xc908,	// (0x00038119) blid2_navig_ring_pane_ParamLimits

0xc908,	// (0x00038119) blid2_navig_ring_pane

0xc914,	// (0x00038125) blid2_speed_pane_ParamLimits

0xc914,	// (0x00038125) blid2_speed_pane

0xc920,	// (0x00038131) blid2_tripm_pane_g1_ParamLimits

0xc920,	// (0x00038131) blid2_tripm_pane_g1

0xc92c,	// (0x0003813d) blid2_tripm_pane_g2_ParamLimits

0xc92c,	// (0x0003813d) blid2_tripm_pane_g2

0xc938,	// (0x00038149) blid2_tripm_pane_g3_ParamLimits

0xc938,	// (0x00038149) blid2_tripm_pane_g3

0xc944,	// (0x00038155) blid2_tripm_pane_g4_ParamLimits

0xc944,	// (0x00038155) blid2_tripm_pane_g4

0xc950,	// (0x00038161) blid2_tripm_pane_g5_ParamLimits

0xc950,	// (0x00038161) blid2_tripm_pane_g5

0x0005,

0xfb30,	// (0x0003b341) blid2_tripm_pane_g_ParamLimits

0xfb30,	// (0x0003b341) blid2_tripm_pane_g

0xc968,	// (0x00038179) blid2_tripm_pane_t1_ParamLimits

0xc968,	// (0x00038179) blid2_tripm_pane_t1

0xc97a,	// (0x0003818b) blid2_tripm_pane_t2_ParamLimits

0xc97a,	// (0x0003818b) blid2_tripm_pane_t2

0xc98c,	// (0x0003819d) blid2_tripm_pane_t3_ParamLimits

0xc98c,	// (0x0003819d) blid2_tripm_pane_t3

0x0003,

0xfb3d,	// (0x0003b34e) blid2_tripm_pane_t_ParamLimits

0xfb3d,	// (0x0003b34e) blid2_tripm_pane_t

0xc9bc,	// (0x000381cd) cell_blid2_satellite_pane_ParamLimits

0xc9bc,	// (0x000381cd) cell_blid2_satellite_pane

0xc9d4,	// (0x000381e5) cell_blid2_satellite_pane_g1

0x4733,	// (0x0002ff44) cell_blid2_satellite_pane_t1

0x32c6,	// (0x0002ead7) blid2_speed_pane_g1

0x4741,	// (0x0002ff52) blid2_speed_pane_t1

0x474f,	// (0x0002ff60) blid2_speed_pane_t2

0x0001,

0xfb46,	// (0x0003b357) blid2_speed_pane_t

0x32c6,	// (0x0002ead7) blid2_navig_ring_pane_g1

0xc9dd,	// (0x000381ee) blid2_navig_ring_pane_g2

0xc9e5,	// (0x000381f6) blid2_navig_ring_pane_g3

0xc9ed,	// (0x000381fe) blid2_navig_ring_pane_g4

0xc9f5,	// (0x00038206) blid2_navig_ring_pane_g5

0x0004,

0xfb4b,	// (0x0003b35c) blid2_navig_ring_pane_g

0xe617,	// (0x00039e28) bg_popup_window_pane_cp011

0x475d,	// (0x0002ff6e) popup_blid2_search_window_g1

0x4765,	// (0x0002ff76) popup_blid2_search_window_t1

0x4773,	// (0x0002ff84) popup_blid2_search_window_t2

0x0001,

0xfb56,	// (0x0003b367) popup_blid2_search_window_t

0xf0b0,	// (0x0003a8c1) main_browser_pane_g1

0xed9d,	// (0x0003a5ae) main_browser_pane_ParamLimits

0xf0cc,	// (0x0003a8dd) bg_button_pane_cp011_ParamLimits

0xbc9c,	// (0x000374ad) cell_vitu2_function_pane_g1_ParamLimits

0xf0cc,	// (0x0003a8dd) bg_popup_sub_pane_cp22_ParamLimits

0x68a6,	// (0x000320b7) input_focus_pane_cp08_ParamLimits

0xc49e,	// (0x00037caf) popup_vitu2_query_button_pane_ParamLimits

0xc49e,	// (0x00037caf) popup_vitu2_query_button_pane

0x689e,	// (0x000320af) popup_vitu2_query_input_button_pane

0x42c8,	// (0x0002fad9) popup_vitu2_query_window_g1_ParamLimits

0xc4af,	// (0x00037cc0) popup_vitu2_query_window_g2_ParamLimits

0xfa5d,	// (0x0003b26e) popup_vitu2_query_window_g_ParamLimits

0xe617,	// (0x00039e28) bg_button_pane_cp026

0xc9fd,	// (0x0003820e) popup_vitu2_query_input_button_pane_g1

0xe617,	// (0x00039e28) bg_button_pane_cp025

0x4781,	// (0x0002ff92) popup_vitu2_query_button_pane_t1

0xa61f,	// (0x00035e30) main_mp3_pane_t6

0xa62d,	// (0x00035e3e) popup_slider_window_cp01

0xb9a9,	// (0x000371ba) cam4_battery_pane

0xb9a9,	// (0x000371ba) cam4_battery_pane_cp02

0xb9a9,	// (0x000371ba) cam4_battery_pane_cp01

0xb9a9,	// (0x000371ba) cam4_battery_pane_cp03

0x32c6,	// (0x0002ead7) cam4_battery_pane_g1

0x3da9,	// (0x0002f5ba) cam4_battery_pane_g2

0x0001,

0xfb5b,	// (0x0003b36c) cam4_battery_pane_g

0x3198,	// (0x0002e9a9) popup_blid_sat_info2_window_t11

0x914c,	// (0x0003495d) aid_size_touch_mv_arrow_left_ParamLimits

0x17b4,	// (0x0002cfc5) aid_size_touch_mv_arrow_right_ParamLimits

0x17ec,	// (0x0002cffd) navi_pane_g1_ParamLimits

0x17f8,	// (0x0002d009) navi_pane_g2_ParamLimits

0x9165,	// (0x00034976) navi_pane_g3_ParamLimits

0xf418,	// (0x0003ac29) navi_pane_g_ParamLimits

0x918a,	// (0x0003499b) navi_pane_mv_t1_ParamLimits

0xb020,	// (0x00036831) grid_imed_effect_pane_ParamLimits

0xefea,	// (0x0003a7fb) aid_placing_vt_slider_lsc

0xeff2,	// (0x0003a803) aid_placing_vt_slider_prt

0xf0cc,	// (0x0003a8dd) bg_tb_trans_pane_cp01_ParamLimits

0x3415,	// (0x0002ec26) popup_image_details_window_g1_ParamLimits

0x3428,	// (0x0002ec39) popup_image_details_window_g2_ParamLimits

0x343d,	// (0x0002ec4e) popup_image_details_window_g3_ParamLimits

0x343d,	// (0x0002ec4e) popup_image_details_window_g3

0xf75e,	// (0x0003af6f) popup_image_details_window_g_ParamLimits

0x3451,	// (0x0002ec62) popup_image_details_window_t1_ParamLimits

0x3463,	// (0x0002ec74) popup_image_details_window_t2_ParamLimits

0x347c,	// (0x0002ec8d) popup_image_details_window_t3_ParamLimits

0x3490,	// (0x0002eca1) popup_image_details_window_t4_ParamLimits

0x34ab,	// (0x0002ecbc) popup_image_details_window_t5_ParamLimits

0xf765,	// (0x0003af76) popup_image_details_window_t_ParamLimits

0xc69a,	// (0x00037eab) cl_header_name_pane_ParamLimits

0xc69a,	// (0x00037eab) cl_header_name_pane

0xca05,	// (0x00038216) cl_header_name_pane_t1_ParamLimits

0xca05,	// (0x00038216) cl_header_name_pane_t1

0xca1c,	// (0x0003822d) cl_header_name_pane_t2_ParamLimits

0xca1c,	// (0x0003822d) cl_header_name_pane_t2

0xca46,	// (0x00038257) cl_header_name_pane_t3_ParamLimits

0xca46,	// (0x00038257) cl_header_name_pane_t3

0x0002,

0xfb60,	// (0x0003b371) cl_header_name_pane_t_ParamLimits

0xfb60,	// (0x0003b371) cl_header_name_pane_t

0x187a,	// (0x0002d08b) navi_pane_mv_g2_ParamLimits

0x3f6f,	// (0x0002f780) field_vitu2_entry_pane_g1_ParamLimits

0x3f7b,	// (0x0002f78c) field_vitu2_entry_pane_g2_ParamLimits

0x3f87,	// (0x0002f798) field_vitu2_entry_pane_g3_ParamLimits

0x3f87,	// (0x0002f798) field_vitu2_entry_pane_g3

0xf95c,	// (0x0003b16d) field_vitu2_entry_pane_g_ParamLimits

0xbc2c,	// (0x0003743d) cell_vitu2_itu_pane_g1_ParamLimits

0xbc3c,	// (0x0003744d) cell_vitu2_itu_pane_g2_ParamLimits

0xbc3c,	// (0x0003744d) cell_vitu2_itu_pane_g2

0x0001,

0xf968,	// (0x0003b179) cell_vitu2_itu_pane_g_ParamLimits

0xf968,	// (0x0003b179) cell_vitu2_itu_pane_g

0xf0cc,	// (0x0003a8dd) bg_vkb2_func_pane_cp05_ParamLimits

0xf0cc,	// (0x0003a8dd) bg_vkb2_func_pane_cp05

0xf0cc,	// (0x0003a8dd) bg_vkb2_func_pane_cp03

0xf0cc,	// (0x0003a8dd) bg_vkb2_func_pane_cp04

0xf0cc,	// (0x0003a8dd) bg_vkb2_func_pane_cp10_ParamLimits

0xf0cc,	// (0x0003a8dd) bg_vkb2_func_pane_cp10

0x69e8,	// (0x000321f9) bg_vkb2_func_pane_cp08

0xc645,	// (0x00037e56) bg_vkb2_func_pane_cp06

0xc652,	// (0x00037e63) bg_vkb2_func_pane_cp07

0x46ce,	// (0x0002fedf) bg_vkb2_func_pane_cp11_ParamLimits

0x46ce,	// (0x0002fedf) bg_vkb2_func_pane_cp11

0x46e3,	// (0x0002fef4) bg_vkb2_func_pane_cp12_ParamLimits

0x46e3,	// (0x0002fef4) bg_vkb2_func_pane_cp12

0xe617,	// (0x00039e28) bg_vkb2_func_pane_cp09

0x3fd2,	// (0x0002f7e3) bg_vkb2_func_pane_g1

0x1030,	// (0x0002c841) bg_vkb2_func_pane_g2

0x3fda,	// (0x0002f7eb) bg_vkb2_func_pane_g3

0x3fe2,	// (0x0002f7f3) bg_vkb2_func_pane_g4

0x4263,	// (0x0002fa74) bg_vkb2_func_pane_g5

0x3ffa,	// (0x0002f80b) bg_vkb2_func_pane_g6

0x4002,	// (0x0002f813) bg_vkb2_func_pane_g7

0x3ff2,	// (0x0002f803) bg_vkb2_func_pane_g8

0x1010,	// (0x0002c821) bg_vkb2_func_pane_g9

0x0008,

0xfb67,	// (0x0003b378) bg_vkb2_func_pane_g

0xc95c,	// (0x0003816d) blid2_tripm_pane_g6_ParamLimits

0xc95c,	// (0x0003816d) blid2_tripm_pane_g6

0x3d67,	// (0x0002f578) mp4_progress_pane_g1

0xc9b0,	// (0x000381c1) blid2_tripm_values_pane_ParamLimits

0xc9b0,	// (0x000381c1) blid2_tripm_values_pane

0xca6b,	// (0x0003827c) blid2_tripm_values_pane_t1

0xca79,	// (0x0003828a) blid2_tripm_values_pane_t2

0xca87,	// (0x00038298) blid2_tripm_values_pane_t3

0xca95,	// (0x000382a6) blid2_tripm_values_pane_t4

0xcaa3,	// (0x000382b4) blid2_tripm_values_pane_t5

0xcab1,	// (0x000382c2) blid2_tripm_values_pane_t6

0xcabf,	// (0x000382d0) blid2_tripm_values_pane_t7

0xcacd,	// (0x000382de) blid2_tripm_values_pane_t8

0xcadb,	// (0x000382ec) blid2_tripm_values_pane_t9

0x0008,

0xfb7a,	// (0x0003b38b) blid2_tripm_values_pane_t

0x830c,	// (0x00033b1d) call_video_pane_t1_ParamLimits

0x8322,	// (0x00033b33) call_video_pane_t2_ParamLimits

0xf2a1,	// (0x0003aab2) call_video_pane_t_ParamLimits

0x664d,	// (0x00031e5e) msg_header_pane_g1_ParamLimits

0x1a7e,	// (0x0002d28f) msg_header_pane_g2_ParamLimits

0x1a7e,	// (0x0002d28f) msg_header_pane_g2

0x0001,

0xf4bb,	// (0x0003accc) msg_header_pane_g_ParamLimits

0xf4bb,	// (0x0003accc) msg_header_pane_g

0xed9d,	// (0x0003a5ae) main_clock2_pane_ParamLimits

0xade0,	// (0x000365f1) grid_clock2_toolbar_pane_ParamLimits

0xade0,	// (0x000365f1) grid_clock2_toolbar_pane

0xade0,	// (0x000365f1) listscroll_clock2_pane_ParamLimits

0xade0,	// (0x000365f1) listscroll_clock2_pane

0xae83,	// (0x00036694) main_clock2_pane_t3_ParamLimits

0xae83,	// (0x00036694) main_clock2_pane_t3

0xae95,	// (0x000366a6) main_clock2_pane_t4_ParamLimits

0xae95,	// (0x000366a6) main_clock2_pane_t4

0x478f,	// (0x0002ffa0) cell_clock2_toolbar_pane

0x4797,	// (0x0002ffa8) cell_clock2_toolbar_pane_cp01

0x4797,	// (0x0002ffa8) cell_clock2_toolbar_pane_cp02

0x479f,	// (0x0002ffb0) cell_clock2_toolbar_pane_cp03

0x47a7,	// (0x0002ffb8) list_clock2_pane

0x171c,	// (0x0002cf2d) scroll_pane_cp10

0x47af,	// (0x0002ffc0) list_single_clock2_pane_ParamLimits

0x47af,	// (0x0002ffc0) list_single_clock2_pane

0x18db,	// (0x0002d0ec) list_highlight_pane_cp08

0x47bc,	// (0x0002ffcd) list_single_clock2_pane_t1

0x47ca,	// (0x0002ffdb) list_single_clock2_pane_t2

0x0001,

0xfb8d,	// (0x0003b39e) list_single_clock2_pane_t

0xe617,	// (0x00039e28) bg_button_pane_cp10

0x47d8,	// (0x0002ffe9) cell_clock2_toolbar_pane_g1

0x95d0,	// (0x00034de1) aid_main_viewer_pane_g1_ParamLimits

0x95d0,	// (0x00034de1) aid_main_viewer_pane_g1

0x95dc,	// (0x00034ded) aid_main_viewer_pane_g2_ParamLimits

0x95dc,	// (0x00034ded) aid_main_viewer_pane_g2

0x95e8,	// (0x00034df9) aid_main_viewer_pane_g3_ParamLimits

0x95e8,	// (0x00034df9) aid_main_viewer_pane_g3

0x95f7,	// (0x00034e08) aid_main_viewer_pane_g4_ParamLimits

0x95f7,	// (0x00034e08) aid_main_viewer_pane_g4

0x0003,

0xf4cc,	// (0x0003acdd) aid_main_viewer_pane_g_ParamLimits

0xf4cc,	// (0x0003acdd) aid_main_viewer_pane_g

0x76a9,	// (0x00032eba) main_calc_pane_ParamLimits

0x9c7e,	// (0x0003548f) main_dialer2_pane_ParamLimits

0xe617,	// (0x00039e28) main_cam6_pane

0xe617,	// (0x00039e28) main_vid6_pane

0xadec,	// (0x000365fd) listscroll_gen_pane_cp06_ParamLimits

0xadec,	// (0x000365fd) listscroll_gen_pane_cp06

0xaea7,	// (0x000366b8) main_clock2_pane_t5_ParamLimits

0xaea7,	// (0x000366b8) main_clock2_pane_t5

0xaeee,	// (0x000366ff) aid_call2_pane_cp10_ParamLimits

0xaefa,	// (0x0003670b) aid_call_pane_cp10_ParamLimits

0x17a8,	// (0x0002cfb9) popup_clock_analogue_window_cp10_g1_ParamLimits

0x17a8,	// (0x0002cfb9) popup_clock_analogue_window_cp10_g2_ParamLimits

0xaf06,	// (0x00036717) popup_clock_analogue_window_cp10_g3_ParamLimits

0xaf06,	// (0x00036717) popup_clock_analogue_window_cp10_g4_ParamLimits

0x17a8,	// (0x0002cfb9) popup_clock_analogue_window_cp10_g5_ParamLimits

0xf815,	// (0x0003b026) popup_clock_analogue_window_cp10_g_ParamLimits

0xaf12,	// (0x00036723) popup_clock_analogue_window_cp10_t1_ParamLimits

0x3dd1,	// (0x0002f5e2) cell_dialer2_keypad_pane_g2_ParamLimits

0x3dd1,	// (0x0002f5e2) cell_dialer2_keypad_pane_g2

0x0001,

0xf8fb,	// (0x0003b10c) cell_dialer2_keypad_pane_g_ParamLimits

0xf8fb,	// (0x0003b10c) cell_dialer2_keypad_pane_g

0xb660,	// (0x00036e71) cell_dialer2_keypad_pane_t1

0xbf29,	// (0x0003773a) main_cset_text2_pane_ParamLimits

0xbf29,	// (0x0003773a) main_cset_text2_pane

0x44a2,	// (0x0002fcb3) area_vitu2_query_pane_g1_ParamLimits

0x6915,	// (0x00032126) area_vitu2_query_pane_g2_ParamLimits

0xfaaa,	// (0x0003b2bb) area_vitu2_query_pane_g_ParamLimits

0x69c4,	// (0x000321d5) area_vitu2_query_pane_t7_ParamLimits

0x69c4,	// (0x000321d5) area_vitu2_query_pane_t7

0xc645,	// (0x00037e56) bg_button_pane_cp018_ParamLimits

0xc652,	// (0x00037e63) bg_button_pane_cp021_ParamLimits

0x69e8,	// (0x000321f9) bg_button_pane_cp022_ParamLimits

0x69e8,	// (0x000321f9) bg_vkb2_func_pane_cp08_ParamLimits

0xc645,	// (0x00037e56) bg_vkb2_func_pane_cp06_ParamLimits

0xc652,	// (0x00037e63) bg_vkb2_func_pane_cp07_ParamLimits

0x69f7,	// (0x00032208) input_focus_pane_cp09_ParamLimits

0xcae9,	// (0x000382fa) cam6_autofocus_pane_ParamLimits

0xcae9,	// (0x000382fa) cam6_autofocus_pane

0xcb05,	// (0x00038316) cam6_image_uncrop_pane_ParamLimits

0xcb05,	// (0x00038316) cam6_image_uncrop_pane

0xcb28,	// (0x00038339) cam6_indi_pane_ParamLimits

0xcb28,	// (0x00038339) cam6_indi_pane

0xcb42,	// (0x00038353) cam6_mode_pane_ParamLimits

0xcb42,	// (0x00038353) cam6_mode_pane

0xcb56,	// (0x00038367) cam6_timer_pane_ParamLimits

0xcb56,	// (0x00038367) cam6_timer_pane

0xcb62,	// (0x00038373) cam6_zoom_pane_ParamLimits

0xcb62,	// (0x00038373) cam6_zoom_pane

0xba09,	// (0x0003721a) cam6_mode_pane_g1_ParamLimits

0xba09,	// (0x0003721a) cam6_mode_pane_g1

0xcb78,	// (0x00038389) cam6_mode_pane_g2_ParamLimits

0xcb78,	// (0x00038389) cam6_mode_pane_g2

0xcb84,	// (0x00038395) cam6_mode_pane_g3_ParamLimits

0xcb84,	// (0x00038395) cam6_mode_pane_g3

0xcb90,	// (0x000383a1) cam6_mode_pane_g4_ParamLimits

0xcb90,	// (0x000383a1) cam6_mode_pane_g4

0x0003,

0xfb92,	// (0x0003b3a3) cam6_mode_pane_g_ParamLimits

0xfb92,	// (0x0003b3a3) cam6_mode_pane_g

0x47ec,	// (0x0002fffd) bg_tb_trans_pane_cp08_ParamLimits

0x47ec,	// (0x0002fffd) bg_tb_trans_pane_cp08

0x47fa,	// (0x0003000b) cam6_battery_pane_ParamLimits

0x47fa,	// (0x0003000b) cam6_battery_pane

0x4810,	// (0x00030021) cam6_indi_pane_g1_ParamLimits

0x4810,	// (0x00030021) cam6_indi_pane_g1

0x4822,	// (0x00030033) cam6_indi_pane_g2_ParamLimits

0x4822,	// (0x00030033) cam6_indi_pane_g2

0x4834,	// (0x00030045) cam6_indi_pane_g3_ParamLimits

0x4834,	// (0x00030045) cam6_indi_pane_g3

0x0002,

0xfb9b,	// (0x0003b3ac) cam6_indi_pane_g_ParamLimits

0xfb9b,	// (0x0003b3ac) cam6_indi_pane_g

0x4846,	// (0x00030057) cam6_indi_pane_t1_ParamLimits

0x4846,	// (0x00030057) cam6_indi_pane_t1

0xbaac,	// (0x000372bd) cam6_autofocus_pane_g1

0xbab4,	// (0x000372c5) cam6_autofocus_pane_g2

0xbabc,	// (0x000372cd) cam6_autofocus_pane_g3

0xbac4,	// (0x000372d5) cam6_autofocus_pane_g4

0x0003,

0xfba2,	// (0x0003b3b3) cam6_autofocus_pane_g

0x486c,	// (0x0003007d) cam6_timer_pane_g1

0x4874,	// (0x00030085) cam6_timer_pane_t1

0x4882,	// (0x00030093) cam6_zoom_cont_pane

0x488a,	// (0x0003009b) cam6_zoom_pane_g1

0x4892,	// (0x000300a3) cam6_zoom_pane_g2

0xcb9c,	// (0x000383ad) cam6_zoom_pane_g3

0x0002,

0xfbab,	// (0x0003b3bc) cam6_zoom_pane_g

0x32c6,	// (0x0002ead7) cam6_battery_pane_g1

0x32c6,	// (0x0002ead7) cam6_battery_pane_g2

0x0001,

0xf722,	// (0x0003af33) cam6_battery_pane_g

0x489a,	// (0x000300ab) cam6_zoom_cont_pane_g1

0x48a3,	// (0x000300b4) cam6_zoom_cont_pane_g2

0x48ac,	// (0x000300bd) cam6_zoom_cont_pane_g3

0x0002,

0xfbb2,	// (0x0003b3c3) cam6_zoom_cont_pane_g

0xcbb9,	// (0x000383ca) cam6_mode_pane_cp_ParamLimits

0xcbb9,	// (0x000383ca) cam6_mode_pane_cp

0xcb62,	// (0x00038373) cam6_zoom_pane_cp_ParamLimits

0xcb62,	// (0x00038373) cam6_zoom_pane_cp

0xcbcd,	// (0x000383de) vid6_image_uncrop_cif_pane_ParamLimits

0xcbcd,	// (0x000383de) vid6_image_uncrop_cif_pane

0xcbef,	// (0x00038400) vid6_image_uncrop_nhd_pane_ParamLimits

0xcbef,	// (0x00038400) vid6_image_uncrop_nhd_pane

0xcb05,	// (0x00038316) vid6_image_uncrop_vga_pane_ParamLimits

0xcb05,	// (0x00038316) vid6_image_uncrop_vga_pane

0xcc06,	// (0x00038417) vid6_image_uncrop_wvga_pane_ParamLimits

0xcc06,	// (0x00038417) vid6_image_uncrop_wvga_pane

0xcc1d,	// (0x0003842e) vid6_indi_pane_ParamLimits

0xcc1d,	// (0x0003842e) vid6_indi_pane

0x47ec,	// (0x0002fffd) bg_tb_trans_pane_cp09_ParamLimits

0x47ec,	// (0x0002fffd) bg_tb_trans_pane_cp09

0x48c0,	// (0x000300d1) cam6_battery_pane_cp_ParamLimits

0x48c0,	// (0x000300d1) cam6_battery_pane_cp

0x48cc,	// (0x000300dd) vid6_indi_pane_g1_ParamLimits

0x48cc,	// (0x000300dd) vid6_indi_pane_g1

0x48de,	// (0x000300ef) vid6_indi_pane_g2_ParamLimits

0x48de,	// (0x000300ef) vid6_indi_pane_g2

0x48f0,	// (0x00030101) vid6_indi_pane_g3_ParamLimits

0x48f0,	// (0x00030101) vid6_indi_pane_g3

0x4905,	// (0x00030116) vid6_indi_pane_g4_ParamLimits

0x4905,	// (0x00030116) vid6_indi_pane_g4

0x491a,	// (0x0003012b) vid6_indi_pane_g5_ParamLimits

0x491a,	// (0x0003012b) vid6_indi_pane_g5

0x0004,

0xfbb9,	// (0x0003b3ca) vid6_indi_pane_g_ParamLimits

0xfbb9,	// (0x0003b3ca) vid6_indi_pane_g

0x4934,	// (0x00030145) vid6_indi_pane_t1_ParamLimits

0x4934,	// (0x00030145) vid6_indi_pane_t1

0x494a,	// (0x0003015b) vid6_indi_pane_t2_ParamLimits

0x494a,	// (0x0003015b) vid6_indi_pane_t2

0x4972,	// (0x00030183) vid6_indi_pane_t3_ParamLimits

0x4972,	// (0x00030183) vid6_indi_pane_t3

0x499a,	// (0x000301ab) vid6_indi_pane_t4_ParamLimits

0x499a,	// (0x000301ab) vid6_indi_pane_t4

0x0003,

0xfbc4,	// (0x0003b3d5) vid6_indi_pane_t_ParamLimits

0xfbc4,	// (0x0003b3d5) vid6_indi_pane_t

0x49be,	// (0x000301cf) wait_bar_pane_cp08

0xcc3d,	// (0x0003844e) main_cset_text2_pane_t1_ParamLimits

0xcc3d,	// (0x0003844e) main_cset_text2_pane_t1

0xcba4,	// (0x000383b5) listscroll_gen_pane_cp06_t1_ParamLimits

0xcba4,	// (0x000383b5) listscroll_gen_pane_cp06_t1

0xe617,	// (0x00039e28) main_cam6_set_pane

0x34f5,	// (0x0002ed06) bg_tb_trans_pane_cp06_ParamLimits

0xb9b1,	// (0x000371c2) cam4_indicators_pane_g1_ParamLimits

0xb9c1,	// (0x000371d2) cam4_indicators_pane_g2_ParamLimits

0xf938,	// (0x0003b149) cam4_indicators_pane_g_ParamLimits

0xb9e1,	// (0x000371f2) cam4_indicators_pane_t1_ParamLimits

0xf0cc,	// (0x0003a8dd) bg_tb_trans_pane_cp07_ParamLimits

0xb9b1,	// (0x000371c2) vid4_indicators_pane_g1_ParamLimits

0xba55,	// (0x00037266) vid4_indicators_pane_g2_ParamLimits

0xba65,	// (0x00037276) vid4_indicators_pane_g3_ParamLimits

0xba76,	// (0x00037287) vid4_indicators_pane_g4_ParamLimits

0xf94a,	// (0x0003b15b) vid4_indicators_pane_g_ParamLimits

0xba92,	// (0x000372a3) vid4_indicators_pane_t1_ParamLimits

0xc76e,	// (0x00037f7f) vid4_progress_pane_g1_ParamLimits

0xc77d,	// (0x00037f8e) vid4_progress_pane_g2_ParamLimits

0xc78c,	// (0x00037f9d) vid4_progress_pane_g3_ParamLimits

0xc79b,	// (0x00037fac) vid4_progress_pane_g4_ParamLimits

0xfaf5,	// (0x0003b306) vid4_progress_pane_g_ParamLimits

0xc7a7,	// (0x00037fb8) vid4_progress_pane_t1_ParamLimits

0xc7bd,	// (0x00037fce) vid4_progress_pane_t2_ParamLimits

0xc7d2,	// (0x00037fe3) vid4_progress_pane_t3_ParamLimits

0xfb00,	// (0x0003b311) vid4_progress_pane_t_ParamLimits

0xc7e7,	// (0x00037ff8) wait_bar_pane_cp07_ParamLimits

0xcc59,	// (0x0003846a) main_cam6_set_pane_g2_ParamLimits

0xcc59,	// (0x0003846a) main_cam6_set_pane_g2

0xcc65,	// (0x00038476) main_cset6_listscroll_pane_ParamLimits

0xcc65,	// (0x00038476) main_cset6_listscroll_pane

0xcc8e,	// (0x0003849f) main_cset6_slider_pane_ParamLimits

0xcc8e,	// (0x0003849f) main_cset6_slider_pane

0xcc9a,	// (0x000384ab) main_cset6_text2_pane_ParamLimits

0xcc9a,	// (0x000384ab) main_cset6_text2_pane

0x49ce,	// (0x000301df) main_cset6_text_pane

0x40c8,	// (0x0002f8d9) main_cset_list_pane_copy1_ParamLimits

0x40c8,	// (0x0002f8d9) main_cset_list_pane_copy1

0x40d8,	// (0x0002f8e9) scroll_pane_cp028_copy1

0xccad,	// (0x000384be) cset_list_set_pane_copy1

0xc1e4,	// (0x000379f5) aid_position_infowindow_above_copy1

0xc1ec,	// (0x000379fd) aid_position_infowindow_below_copy1

0x6a60,	// (0x00032271) cset_list_set_pane_g1_copy1

0x6a68,	// (0x00032279) cset_list_set_pane_g3_copy1_ParamLimits

0x6a68,	// (0x00032279) cset_list_set_pane_g3_copy1

0x6a77,	// (0x00032288) cset_list_set_pane_t1_copy1_ParamLimits

0x6a77,	// (0x00032288) cset_list_set_pane_t1_copy1

0xf0cc,	// (0x0003a8dd) list_highlight_pane_cp021_copy1_ParamLimits

0xf0cc,	// (0x0003a8dd) list_highlight_pane_cp021_copy1

0x49d6,	// (0x000301e7) cset6_slider_pane_ParamLimits

0x49d6,	// (0x000301e7) cset6_slider_pane

0x4a02,	// (0x00030213) main_cset6_slider_pane_g1_ParamLimits

0x4a02,	// (0x00030213) main_cset6_slider_pane_g1

0xccbc,	// (0x000384cd) main_cset6_slider_pane_g2_ParamLimits

0xccbc,	// (0x000384cd) main_cset6_slider_pane_g2

0x40ed,	// (0x0002f8fe) main_cset6_slider_pane_g3_ParamLimits

0x40ed,	// (0x0002f8fe) main_cset6_slider_pane_g3

0xcce4,	// (0x000384f5) main_cset6_slider_pane_g4_ParamLimits

0xcce4,	// (0x000384f5) main_cset6_slider_pane_g4

0xccf0,	// (0x00038501) main_cset6_slider_pane_g5_ParamLimits

0xccf0,	// (0x00038501) main_cset6_slider_pane_g5

0x40ed,	// (0x0002f8fe) main_cset6_slider_pane_g7_ParamLimits

0x40ed,	// (0x0002f8fe) main_cset6_slider_pane_g7

0x40f9,	// (0x0002f90a) main_cset6_slider_pane_g8_ParamLimits

0x40f9,	// (0x0002f90a) main_cset6_slider_pane_g8

0xccfc,	// (0x0003850d) main_cset6_slider_pane_g9_ParamLimits

0xccfc,	// (0x0003850d) main_cset6_slider_pane_g9

0xcd08,	// (0x00038519) main_cset6_slider_pane_g10_ParamLimits

0xcd08,	// (0x00038519) main_cset6_slider_pane_g10

0xcce4,	// (0x000384f5) main_cset6_slider_pane_g11_ParamLimits

0xcce4,	// (0x000384f5) main_cset6_slider_pane_g11

0xcd14,	// (0x00038525) main_cset6_slider_pane_g12_ParamLimits

0xcd14,	// (0x00038525) main_cset6_slider_pane_g12

0xcd20,	// (0x00038531) main_cset6_slider_pane_g13_ParamLimits

0xcd20,	// (0x00038531) main_cset6_slider_pane_g13

0xcd2c,	// (0x0003853d) main_cset6_slider_pane_g14_ParamLimits

0xcd2c,	// (0x0003853d) main_cset6_slider_pane_g14

0xcd38,	// (0x00038549) main_cset6_slider_pane_g15_ParamLimits

0xcd38,	// (0x00038549) main_cset6_slider_pane_g15

0xccf0,	// (0x00038501) main_cset6_slider_pane_g16_ParamLimits

0xccf0,	// (0x00038501) main_cset6_slider_pane_g16

0xcd50,	// (0x00038561) main_cset6_slider_pane_g17_ParamLimits

0xcd50,	// (0x00038561) main_cset6_slider_pane_g17

0x0011,

0xfbcd,	// (0x0003b3de) main_cset6_slider_pane_g_ParamLimits

0xfbcd,	// (0x0003b3de) main_cset6_slider_pane_g

0x4a2a,	// (0x0003023b) main_cset6_slider_pane_t1_ParamLimits

0x4a2a,	// (0x0003023b) main_cset6_slider_pane_t1

0xcd5c,	// (0x0003856d) main_cset6_slider_pane_t2_ParamLimits

0xcd5c,	// (0x0003856d) main_cset6_slider_pane_t2

0x4a6b,	// (0x0003027c) main_cset6_slider_pane_t3_ParamLimits

0x4a6b,	// (0x0003027c) main_cset6_slider_pane_t3

0xcd87,	// (0x00038598) main_cset6_slider_pane_t4_ParamLimits

0xcd87,	// (0x00038598) main_cset6_slider_pane_t4

0x4a96,	// (0x000302a7) main_cset6_slider_pane_t5_ParamLimits

0x4a96,	// (0x000302a7) main_cset6_slider_pane_t5

0x4ac1,	// (0x000302d2) main_cset6_slider_pane_t7_ParamLimits

0x4ac1,	// (0x000302d2) main_cset6_slider_pane_t7

0xcdb2,	// (0x000385c3) main_cset6_slider_pane_t8_ParamLimits

0xcdb2,	// (0x000385c3) main_cset6_slider_pane_t8

0xcdd6,	// (0x000385e7) main_cset6_slider_pane_t9_ParamLimits

0xcdd6,	// (0x000385e7) main_cset6_slider_pane_t9

0xcdfa,	// (0x0003860b) main_cset6_slider_pane_t10_ParamLimits

0xcdfa,	// (0x0003860b) main_cset6_slider_pane_t10

0xce1e,	// (0x0003862f) main_cset6_slider_pane_t11_ParamLimits

0xce1e,	// (0x0003862f) main_cset6_slider_pane_t11

0x4af7,	// (0x00030308) main_cset6_slider_pane_t14_ParamLimits

0x4af7,	// (0x00030308) main_cset6_slider_pane_t14

0x4b30,	// (0x00030341) main_cset6_slider_pane_t15_ParamLimits

0x4b30,	// (0x00030341) main_cset6_slider_pane_t15

0x000b,

0xfbf2,	// (0x0003b403) main_cset6_slider_pane_t_ParamLimits

0xfbf2,	// (0x0003b403) main_cset6_slider_pane_t

0x4b69,	// (0x0003037a) cset_slider_pane_g1_copy1

0x4b72,	// (0x00030383) cset_slider_pane_g2_copy1

0x4b7b,	// (0x0003038c) cset_slider_pane_g3_copy1

0xe617,	// (0x00039e28) bg_popup_sub_pane_cp011_copy1

0x42d4,	// (0x0002fae5) main_cset_text_pane_g1_copy1

0x42dc,	// (0x0002faed) main_cset_text_pane_t1_copy1

0x42ea,	// (0x0002fafb) main_cset_text_pane_t2_copy1

0x42f8,	// (0x0002fb09) main_cset_text_pane_t3_copy1

0x4306,	// (0x0002fb17) main_cset_text_pane_t4_copy1

0x4314,	// (0x0002fb25) main_cset_text_pane_t5_copy1

0x4322,	// (0x0002fb33) main_cset_text_pane_t6_copy1

0x4330,	// (0x0002fb41) main_cset_text_pane_t7_copy1

0xce42,	// (0x00038653) main_cset_text2_pane_t1_copy1

0xe617,	// (0x00039e28) main_ncimui_pane

0x9cb9,	// (0x000354ca) popup_query_ncimui_window_ParamLimits

0x9cb9,	// (0x000354ca) popup_query_ncimui_window

0x6708,	// (0x00031f19) field_cale_ev2_pane_g4_ParamLimits

0x6708,	// (0x00031f19) field_cale_ev2_pane_g4

0xb394,	// (0x00036ba5) cell_video_dialer_keypad_pane_g2_ParamLimits

0xb394,	// (0x00036ba5) cell_video_dialer_keypad_pane_g2

0x0001,

0xf8d6,	// (0x0003b0e7) cell_video_dialer_keypad_pane_g_ParamLimits

0xf8d6,	// (0x0003b0e7) cell_video_dialer_keypad_pane_g

0xb3ac,	// (0x00036bbd) cell_video_dialer_keypad_pane_t1

0xe617,	// (0x00039e28) bg_popup_window_pane_cp012

0x15f5,	// (0x0002ce06) heading_pane_cp06

0x4c6d,	// (0x0003047e) ncim_query_content_pane

0xe617,	// (0x00039e28) bg_popup_heading_pane_cp01

0x4c75,	// (0x00030486) ncim_heading_pane_t1

0x4c83,	// (0x00030494) ncim_indicator_popup_pane

0x4c95,	// (0x000304a6) ncim_query_button_pane

0x4ca9,	// (0x000304ba) ncim_query_content_pane_t1

0x4cbb,	// (0x000304cc) ncim_query_content_pane_t2

0x0005,

0xfc31,	// (0x0003b442) ncim_query_content_pane_t

0x4cf5,	// (0x00030506) ncim_query_list_pane

0x4d07,	// (0x00030518) ncim_query_popup_pane

0x4c83,	// (0x00030494) ncim_indicator_popup_pane_ParamLimits

0xcf23,	// (0x00038734) ncim_query_content_pane_g1_ParamLimits

0xcf23,	// (0x00038734) ncim_query_content_pane_g1

0x4ca9,	// (0x000304ba) ncim_query_content_pane_t1_ParamLimits

0x4cbb,	// (0x000304cc) ncim_query_content_pane_t2_ParamLimits

0xcf2f,	// (0x00038740) ncim_query_content_pane_t3_ParamLimits

0xcf2f,	// (0x00038740) ncim_query_content_pane_t3

0xcf4c,	// (0x0003875d) ncim_query_content_pane_t4_ParamLimits

0xcf4c,	// (0x0003875d) ncim_query_content_pane_t4

0xcf69,	// (0x0003877a) ncim_query_content_pane_t5_ParamLimits

0xcf69,	// (0x0003877a) ncim_query_content_pane_t5

0x4ccd,	// (0x000304de) ncim_query_content_pane_t6_ParamLimits

0x4ccd,	// (0x000304de) ncim_query_content_pane_t6

0xfc31,	// (0x0003b442) ncim_query_content_pane_t_ParamLimits

0x4cf5,	// (0x00030506) ncim_query_list_pane_ParamLimits

0x4d07,	// (0x00030518) ncim_query_popup_pane_ParamLimits

0x4d1b,	// (0x0003052c) wait_bar_pane_cp04

0xe617,	// (0x00039e28) input_focus_pane_cp011

0x4d23,	// (0x00030534) ncim_query_popup_pane_t1

0x4d31,	// (0x00030542) ncim_list_query_list_pane_ParamLimits

0x4d31,	// (0x00030542) ncim_list_query_list_pane

0xe617,	// (0x00039e28) bg_button_pane_cp027

0x4d44,	// (0x00030555) ncim_query_button_pane_g1

0xe617,	// (0x00039e28) list_highlight_pane_cp012

0x4d4e,	// (0x0003055f) ncim_list_query_list_pane_g1

0x4d56,	// (0x00030567) ncim_list_query_list_pane_t1

0xb9d1,	// (0x000371e2) cam4_indicators_pane_g3_ParamLimits

0xb9d1,	// (0x000371e2) cam4_indicators_pane_g3

0xba82,	// (0x00037293) vid4_indicators_pane_g5_ParamLimits

0xba82,	// (0x00037293) vid4_indicators_pane_g5

0x132c,	// (0x0002cb3d) vid4_progress_pane_g5_ParamLimits

0x132c,	// (0x0002cb3d) vid4_progress_pane_g5

0xce6d,	// (0x0003867e) main_ncimui_pane_g1

0xceb3,	// (0x000386c4) ncimui_group_query_pane_ParamLimits

0xceb3,	// (0x000386c4) ncimui_group_query_pane

0xcee7,	// (0x000386f8) ncimui_list_pane_ParamLimits

0xcee7,	// (0x000386f8) ncimui_list_pane

0xceff,	// (0x00038710) ncimui_text_pane_ParamLimits

0xceff,	// (0x00038710) ncimui_text_pane

0xcf86,	// (0x00038797) ncimui_text_pane_t1_ParamLimits

0xcf86,	// (0x00038797) ncimui_text_pane_t1

0x4d6d,	// (0x0003057e) ncimui_list_single_graphic_pane_ParamLimits

0x4d6d,	// (0x0003057e) ncimui_list_single_graphic_pane

0xcfa4,	// (0x000387b5) ncimui_query_pane_ParamLimits

0xcfa4,	// (0x000387b5) ncimui_query_pane

0xe617,	// (0x00039e28) list_highlight_pane_cp013

0x4d7a,	// (0x0003058b) ncim_list_query_list_pane_t1_copy1

0x4d88,	// (0x00030599) ncim_list_single_graphic_pane_g1

0x4d90,	// (0x000305a1) ncim_query_button_pane_cp01

0x4d98,	// (0x000305a9) ncim_query_entry_pane_ParamLimits

0x4d98,	// (0x000305a9) ncim_query_entry_pane

0x4da8,	// (0x000305b9) ncimui_query_pane_g1

0x4db0,	// (0x000305c1) ncimui_query_pane_t1_ParamLimits

0x4db0,	// (0x000305c1) ncimui_query_pane_t1

0xe617,	// (0x00039e28) input_focus_pane_cp012

0x4d23,	// (0x00030534) ncim_query_entry_pane_t1

0xed9d,	// (0x0003a5ae) main_im_pane_ParamLimits

0xf0cc,	// (0x0003a8dd) main_mobtv_pane_ParamLimits

0xf0cc,	// (0x0003a8dd) main_mobtv_pane

0xccfc,	// (0x0003850d) main_cset6_slider_pane_g18_ParamLimits

0xccfc,	// (0x0003850d) main_cset6_slider_pane_g18

0xcd20,	// (0x00038531) main_cset6_slider_pane_g19_ParamLimits

0xcd20,	// (0x00038531) main_cset6_slider_pane_g19

0x3f87,	// (0x0002f798) bg_main_mobtv_pane_ParamLimits

0x3f87,	// (0x0002f798) bg_main_mobtv_pane

0xcfb4,	// (0x000387c5) main_mobtv_info_pane

0xcfbd,	// (0x000387ce) main_mobtv_loading_pane_ParamLimits

0xcfbd,	// (0x000387ce) main_mobtv_loading_pane

0x4dd4,	// (0x000305e5) main_mobtv_pg_channel_list_pane

0x4dde,	// (0x000305ef) main_mobtv_pg_hdr_pane

0xcfca,	// (0x000387db) main_mobtv_programe_curr_pane_ParamLimits

0xcfca,	// (0x000387db) main_mobtv_programe_curr_pane

0xcfd7,	// (0x000387e8) main_mobtv_programe_next_pane_ParamLimits

0xcfd7,	// (0x000387e8) main_mobtv_programe_next_pane

0x4de7,	// (0x000305f8) popup_mobtv_noti_window

0x32c6,	// (0x0002ead7) main_tv_pg_hdr_pane_g1

0x4def,	// (0x00030600) main_tv_pg_hdr_pane_g2

0x4df7,	// (0x00030608) main_tv_pg_hdr_pane_g3

0x4dff,	// (0x00030610) main_tv_pg_hdr_pane_g4

0x4e07,	// (0x00030618) main_tv_pg_hdr_pane_g5

0x4e0f,	// (0x00030620) main_tv_pg_hdr_pane_g6

0x4e17,	// (0x00030628) main_tv_pg_hdr_pane_g7

0x4e1f,	// (0x00030630) main_tv_pg_hdr_pane_g8

0x4e27,	// (0x00030638) main_tv_pg_hdr_pane_g9

0x4e2f,	// (0x00030640) main_tv_pg_hdr_pane_g10

0x4e39,	// (0x0003064a) main_tv_pg_hdr_pane_g11

0x000a,

0xfc3e,	// (0x0003b44f) main_tv_pg_hdr_pane_g

0x4e43,	// (0x00030654) main_tv_pg_hdr_pane_t1

0x4e51,	// (0x00030662) main_tv_pg_hdr_pane_t2

0x4e5f,	// (0x00030670) main_tv_pg_hdr_pane_t3

0x4e6d,	// (0x0003067e) main_tv_pg_hdr_pane_t4

0x4e7b,	// (0x0003068c) main_tv_pg_hdr_pane_t5

0x0004,

0xfc55,	// (0x0003b466) main_tv_pg_hdr_pane_t

0x4e89,	// (0x0003069a) single_mobtv_pg_channel_pane_ParamLimits

0x4e89,	// (0x0003069a) single_mobtv_pg_channel_pane

0x4e9b,	// (0x000306ac) single_mobtv_pg_channel_table_pane

0x4ea4,	// (0x000306b5) single_mobtv_pg_channel_thumb_pane

0x4ead,	// (0x000306be) single_tv_pg_channel_pane_g1

0x4eb6,	// (0x000306c7) single_tv_pg_channel_pane_g2

0x0001,

0xfc60,	// (0x0003b471) single_tv_pg_channel_pane_g

0x34f5,	// (0x0002ed06) bg_single_mobtv_pg_channel_thumb_pane_ParamLimits

0x34f5,	// (0x0002ed06) bg_single_mobtv_pg_channel_thumb_pane

0x4ebf,	// (0x000306d0) single_mobtv_pg_channel_thumb_pane_g1_ParamLimits

0x4ebf,	// (0x000306d0) single_mobtv_pg_channel_thumb_pane_g1

0x4ecd,	// (0x000306de) single_mobtv_pg_channel_thumb_pane_g2_ParamLimits

0x4ecd,	// (0x000306de) single_mobtv_pg_channel_thumb_pane_g2

0x4ed9,	// (0x000306ea) single_mobtv_pg_channel_thumb_pane_g3_ParamLimits

0x4ed9,	// (0x000306ea) single_mobtv_pg_channel_thumb_pane_g3

0x0002,

0xfc65,	// (0x0003b476) single_mobtv_pg_channel_thumb_pane_g_ParamLimits

0xfc65,	// (0x0003b476) single_mobtv_pg_channel_thumb_pane_g

0x4ee5,	// (0x000306f6) single_mobtv_pg_channel_thumb_pane_t1

0x4ef3,	// (0x00030704) single_mobtv_pg_channel_thumb_pane_t2

0x0001,

0xfc6c,	// (0x0003b47d) single_mobtv_pg_channel_thumb_pane_t

0x32c6,	// (0x0002ead7) bg_single_mobtv_pg_channel_table_pane_g1

0x32c6,	// (0x0002ead7) bg_single_mobtv_pg_channel_table_pane_g2

0x0001,

0xf722,	// (0x0003af33) bg_single_mobtv_pg_channel_table_pane_g

0x4f01,	// (0x00030712) single_mobtv_pg_channel_table_pane_t1

0x4f0f,	// (0x00030720) single_mobtv_pg_channel_table_pane_t2

0x0001,

0xfc71,	// (0x0003b482) single_mobtv_pg_channel_table_pane_t

0xcfec,	// (0x000387fd) main_mobtv_info_pane_g1_ParamLimits

0xcfec,	// (0x000387fd) main_mobtv_info_pane_g1

0xd008,	// (0x00038819) main_mobtv_info_pane_t1_ParamLimits

0xd008,	// (0x00038819) main_mobtv_info_pane_t1

0xd06e,	// (0x0003887f) main_mobtv_info_pane_t2_ParamLimits

0xd06e,	// (0x0003887f) main_mobtv_info_pane_t2

0x0002,

0xfc7b,	// (0x0003b48c) main_mobtv_info_pane_t_ParamLimits

0xfc7b,	// (0x0003b48c) main_mobtv_info_pane_t

0xd0f1,	// (0x00038902) wait_bar_pane_cp05

0xd101,	// (0x00038912) main_mobtv_loading_pane_g1_ParamLimits

0xd101,	// (0x00038912) main_mobtv_loading_pane_g1

0xd10d,	// (0x0003891e) main_mobtv_loading_pane_g2_ParamLimits

0xd10d,	// (0x0003891e) main_mobtv_loading_pane_g2

0xd119,	// (0x0003892a) main_mobtv_loading_pane_g3_ParamLimits

0xd119,	// (0x0003892a) main_mobtv_loading_pane_g3

0x0002,

0xfc82,	// (0x0003b493) main_mobtv_loading_pane_g_ParamLimits

0xfc82,	// (0x0003b493) main_mobtv_loading_pane_g

0x4f1d,	// (0x0003072e) main_mobtv_loading_pane_t1_ParamLimits

0x4f1d,	// (0x0003072e) main_mobtv_loading_pane_t1

0x4f35,	// (0x00030746) main_mobtv_loading_pane_t2_ParamLimits

0x4f35,	// (0x00030746) main_mobtv_loading_pane_t2

0x0001,

0xfc89,	// (0x0003b49a) main_mobtv_loading_pane_t_ParamLimits

0xfc89,	// (0x0003b49a) main_mobtv_loading_pane_t

0xd125,	// (0x00038936) wait_bar_pane_cp06_ParamLimits

0xd125,	// (0x00038936) wait_bar_pane_cp06

0x4f59,	// (0x0003076a) main_mobtv_programe_curr_pane_t1

0x4f67,	// (0x00030778) main_mobtv_programe_curr_pane_t2

0x0001,

0xfc8e,	// (0x0003b49f) main_mobtv_programe_curr_pane_t

0x4f75,	// (0x00030786) main_mobtv_programe_next_pane_t1

0x4f83,	// (0x00030794) main_mobtv_programe_next_pane_t2

0x4f91,	// (0x000307a2) main_mobtv_programe_next_pane_t3

0x0002,

0xfc93,	// (0x0003b4a4) main_mobtv_programe_next_pane_t

0xe617,	// (0x00039e28) bg_popup_mobtv_noti_window_pane

0x4f9f,	// (0x000307b0) popup_mobtv_noti_window_g1

0x4fa7,	// (0x000307b8) popup_mobtv_noti_window_t1

0x4fb5,	// (0x000307c6) popup_mobtv_noti_window_t2

0x0001,

0xfc9a,	// (0x0003b4ab) popup_mobtv_noti_window_t

0x32c6,	// (0x0002ead7) bg_popup_mobtv_noti_window_pane_g1

0xe617,	// (0x00039e28) sc_clock_pane

0xe617,	// (0x00039e28) main_fs_bigclock_pane

0xc99e,	// (0x000381af) blid2_tripm_pane_t4_ParamLimits

0xc99e,	// (0x000381af) blid2_tripm_pane_t4

0xd131,	// (0x00038942) sc_clock_pane_g1_ParamLimits

0xd131,	// (0x00038942) sc_clock_pane_g1

0xd13f,	// (0x00038950) sc_clock_pane_t1_ParamLimits

0xd13f,	// (0x00038950) sc_clock_pane_t1

0xd152,	// (0x00038963) sc_clock_pane_t2_ParamLimits

0xd152,	// (0x00038963) sc_clock_pane_t2

0xd164,	// (0x00038975) sc_clock_pane_t3_ParamLimits

0xd164,	// (0x00038975) sc_clock_pane_t3

0x0004,

0xfc9f,	// (0x0003b4b0) sc_clock_pane_t_ParamLimits

0xfc9f,	// (0x0003b4b0) sc_clock_pane_t

0xdc28,	// (0x00039439) main_fs_bigclock_indicator_pane_ParamLimits

0xdc28,	// (0x00039439) main_fs_bigclock_indicator_pane

0xd1dc,	// (0x000389ed) main_fs_bigclock_pane_g1_ParamLimits

0xd1dc,	// (0x000389ed) main_fs_bigclock_pane_g1

0xdc34,	// (0x00039445) main_fs_bigclock_pane_t1_ParamLimits

0xdc34,	// (0x00039445) main_fs_bigclock_pane_t1

0xdc46,	// (0x00039457) main_fs_bigclock_pane_t2_ParamLimits

0xdc46,	// (0x00039457) main_fs_bigclock_pane_t2

0xdc58,	// (0x00039469) main_fs_bigclock_pane_t3_ParamLimits

0xdc58,	// (0x00039469) main_fs_bigclock_pane_t3

0x0002,

0xfe99,	// (0x0003b6aa) main_fs_bigclock_pane_t_ParamLimits

0xfe99,	// (0x0003b6aa) main_fs_bigclock_pane_t

0xdc6a,	// (0x0003947b) main_fs_bigclock_indicator_pane_g1

0x4c9d,	// (0x000304ae) ncim_query_content_pane_g2_ParamLimits

0x4c9d,	// (0x000304ae) ncim_query_content_pane_g2

0x0001,

0xfc2c,	// (0x0003b43d) ncim_query_content_pane_g_ParamLimits

0xfc2c,	// (0x0003b43d) ncim_query_content_pane_g

0xd176,	// (0x00038987) sc_clock_pane_t4_ParamLimits

0xd176,	// (0x00038987) sc_clock_pane_t4

0xf0cc,	// (0x0003a8dd) main_radioblah_pane

0x3e5a,	// (0x0002f66b) cell_call4_button_pane_t1_copy1_ParamLimits

0x3e5a,	// (0x0002f66b) cell_call4_button_pane_t1_copy1

0xce75,	// (0x00038686) main_ncimui_pane_t1_ParamLimits

0xce75,	// (0x00038686) main_ncimui_pane_t1

0xce87,	// (0x00038698) main_ncimui_pane_t2_ParamLimits

0xce87,	// (0x00038698) main_ncimui_pane_t2

0x0002,

0xfc25,	// (0x0003b436) main_ncimui_pane_t_ParamLimits

0xfc25,	// (0x0003b436) main_ncimui_pane_t

0x50df,	// (0x000308f0) main_radioblah_anim_pane_ParamLimits

0x50df,	// (0x000308f0) main_radioblah_anim_pane

0x50f0,	// (0x00030901) main_radioblah_info_pane_ParamLimits

0x50f0,	// (0x00030901) main_radioblah_info_pane

0x5104,	// (0x00030915) main_radioblah_pane_t1_ParamLimits

0x5104,	// (0x00030915) main_radioblah_pane_t1

0x5120,	// (0x00030931) main_radioblah_pane_t2_ParamLimits

0x5120,	// (0x00030931) main_radioblah_pane_t2

0x0003,

0xfcc0,	// (0x0003b4d1) main_radioblah_pane_t_ParamLimits

0xfcc0,	// (0x0003b4d1) main_radioblah_pane_t

0xd224,	// (0x00038a35) main_radioblah_rocker_ctrl_pane_ParamLimits

0xd224,	// (0x00038a35) main_radioblah_rocker_ctrl_pane

0x5168,	// (0x00030979) main_radioblah_info_pane_t1_ParamLimits

0x5168,	// (0x00030979) main_radioblah_info_pane_t1

0xd269,	// (0x00038a7a) main_radioblah_info_pane_t2_ParamLimits

0xd269,	// (0x00038a7a) main_radioblah_info_pane_t2

0x0003,

0xfcc9,	// (0x0003b4da) main_radioblah_info_pane_t_ParamLimits

0xfcc9,	// (0x0003b4da) main_radioblah_info_pane_t

0x32c6,	// (0x0002ead7) main_radioblah_rocker_ctrl_pane_g1

0xd311,	// (0x00038b22) main_radioblah_rocker_ctrl_pane_g2

0xd319,	// (0x00038b2a) main_radioblah_rocker_ctrl_pane_g3

0xd321,	// (0x00038b32) main_radioblah_rocker_ctrl_pane_g4

0xd329,	// (0x00038b3a) main_radioblah_rocker_ctrl_pane_g5

0xd331,	// (0x00038b42) main_radioblah_rocker_ctrl_pane_g6

0x0005,

0xfcd2,	// (0x0003b4e3) main_radioblah_rocker_ctrl_pane_g

0xce42,	// (0x00038653) main_cset_text2_pane_t1_copy1_ParamLimits

0xb901,	// (0x00037112) cam4_image_uncrop_qvga_pane

0xba15,	// (0x00037226) vid4_image_uncrop_qcif_pane

0xcb1c,	// (0x0003832d) cam6_image_uncrop_qvga_pane_ParamLimits

0xcb1c,	// (0x0003832d) cam6_image_uncrop_qvga_pane

0x48b4,	// (0x000300c5) vid6_image_uncrop_qcif_pane_ParamLimits

0x48b4,	// (0x000300c5) vid6_image_uncrop_qcif_pane

0xe617,	// (0x00039e28) bg_popup_preview_window_pane_cp03

0x4c4f,	// (0x00030460) list_cset_text2_pane

0x4c57,	// (0x00030468) main_cset6_text2_pane_g1

0x4c5f,	// (0x00030470) main_cset6_text2_pane_t1

0xd339,	// (0x00038b4a) list_cset_text2_pane_t1_ParamLimits

0xd339,	// (0x00038b4a) list_cset_text2_pane_t1

0xf0cc,	// (0x0003a8dd) main_radioblah_pane_ParamLimits

0xd0df,	// (0x000388f0) main_mobtv_info_pane_t3_ParamLimits

0xd0df,	// (0x000388f0) main_mobtv_info_pane_t3

0xd212,	// (0x00038a23) main_radioblah_pane_g1

0xd23d,	// (0x00038a4e) main_radioblah_info_pane_g1

0xd2b8,	// (0x00038ac9) main_radioblah_info_pane_t3_ParamLimits

0xd2b8,	// (0x00038ac9) main_radioblah_info_pane_t3

0x8d14,	// (0x00034525) highlight_cell_cale_month_pane_ParamLimits

0x8d14,	// (0x00034525) highlight_cell_cale_month_pane

0xe617,	// (0x00039e28) main_phob_fisheye_pane

0x363f,	// (0x0002ee50) scroll_pane_cp0031_ParamLimits

0x363f,	// (0x0002ee50) scroll_pane_cp0031

0x49be,	// (0x000301cf) wait_bar_pane_cp08_ParamLimits

0xccad,	// (0x000384be) cset_list_set_pane_copy1_ParamLimits

0x51a2,	// (0x000309b3) highlight_cell_cale_month_pane_g1

0xd350,	// (0x00038b61) highlight_cell_cale_month_pane_t1

0x51aa,	// (0x000309bb) list_gen_pane_cp01

0x40d8,	// (0x0002f8e9) scroll_pane_01

0xf0e6,	// (0x0003a8f7) list_single_double_fisheye_pane

0x6b57,	// (0x00032368) list_double_fisheye_pane_g1_ParamLimits

0x6b57,	// (0x00032368) list_double_fisheye_pane_g1

0x6b63,	// (0x00032374) list_double_fisheye_pane_g2_ParamLimits

0x6b63,	// (0x00032374) list_double_fisheye_pane_g2

0xf0ef,	// (0x0003a900) list_double_fisheye_pane_g3_ParamLimits

0xf0ef,	// (0x0003a900) list_double_fisheye_pane_g3

0x0004,

0xfcdf,	// (0x0003b4f0) list_double_fisheye_pane_g_ParamLimits

0xfcdf,	// (0x0003b4f0) list_double_fisheye_pane_g

0x6b94,	// (0x000323a5) list_double_fisheye_pane_t1_ParamLimits

0x6b94,	// (0x000323a5) list_double_fisheye_pane_t1

0x6baf,	// (0x000323c0) list_double_fisheye_pane_t2_ParamLimits

0x6baf,	// (0x000323c0) list_double_fisheye_pane_t2

0x0001,

0xfcea,	// (0x0003b4fb) list_double_fisheye_pane_t_ParamLimits

0xfcea,	// (0x0003b4fb) list_double_fisheye_pane_t

0xe617,	// (0x00039e28) main_call5_pane

0xd19c,	// (0x000389ad) sc_swipe_pane_ParamLimits

0xd19c,	// (0x000389ad) sc_swipe_pane

0xd36a,	// (0x00038b7b) call5_image_pane_ParamLimits

0xd36a,	// (0x00038b7b) call5_image_pane

0xd376,	// (0x00038b87) call5_swipe_1_pane_ParamLimits

0xd376,	// (0x00038b87) call5_swipe_1_pane

0xd382,	// (0x00038b93) call5_swipe_2_pane_ParamLimits

0xd382,	// (0x00038b93) call5_swipe_2_pane

0xd39a,	// (0x00038bab) popup_call5_audio_first_window_ParamLimits

0xd39a,	// (0x00038bab) popup_call5_audio_first_window

0x34f5,	// (0x0002ed06) call5_swipe_1_pane_g1_ParamLimits

0x34f5,	// (0x0002ed06) call5_swipe_1_pane_g1

0x51b3,	// (0x000309c4) call5_swipe_1_pane_g2_ParamLimits

0x51b3,	// (0x000309c4) call5_swipe_1_pane_g2

0x0001,

0xfcef,	// (0x0003b500) call5_swipe_1_pane_g_ParamLimits

0xfcef,	// (0x0003b500) call5_swipe_1_pane_g

0x51bf,	// (0x000309d0) call5_swipe_1_pane_t1_ParamLimits

0x51bf,	// (0x000309d0) call5_swipe_1_pane_t1

0x34f5,	// (0x0002ed06) call5_swipe_2_pane_g1_ParamLimits

0x34f5,	// (0x0002ed06) call5_swipe_2_pane_g1

0x51d4,	// (0x000309e5) call5_swipe_2_pane_g2_ParamLimits

0x51d4,	// (0x000309e5) call5_swipe_2_pane_g2

0x0001,

0xfcf4,	// (0x0003b505) call5_swipe_2_pane_g_ParamLimits

0xfcf4,	// (0x0003b505) call5_swipe_2_pane_g

0x51e0,	// (0x000309f1) call5_swipe_2_pane_t1_ParamLimits

0x51e0,	// (0x000309f1) call5_swipe_2_pane_t1

0x51f5,	// (0x00030a06) sc_swipe_pane_g1_ParamLimits

0x51f5,	// (0x00030a06) sc_swipe_pane_g1

0x5202,	// (0x00030a13) sc_swipe_pane_g2_ParamLimits

0x5202,	// (0x00030a13) sc_swipe_pane_g2

0x0001,

0xfcf9,	// (0x0003b50a) sc_swipe_pane_g_ParamLimits

0xfcf9,	// (0x0003b50a) sc_swipe_pane_g

0x520e,	// (0x00030a1f) sc_swipe_pane_t1_ParamLimits

0x520e,	// (0x00030a1f) sc_swipe_pane_t1

0xe617,	// (0x00039e28) main_cmail_launcher_pane

0xd3a6,	// (0x00038bb7) aid_size_cell_cmail_l_ParamLimits

0xd3a6,	// (0x00038bb7) aid_size_cell_cmail_l

0xd3b6,	// (0x00038bc7) grid_cmail_l_pane_ParamLimits

0xd3b6,	// (0x00038bc7) grid_cmail_l_pane

0xd3c2,	// (0x00038bd3) cell_cmail_l_pane_ParamLimits

0xd3c2,	// (0x00038bd3) cell_cmail_l_pane

0xd3d4,	// (0x00038be5) cell_cmail_l_pane_g1_ParamLimits

0xd3d4,	// (0x00038be5) cell_cmail_l_pane_g1

0xd3e4,	// (0x00038bf5) cell_cmail_l_pane_t1_ParamLimits

0xd3e4,	// (0x00038bf5) cell_cmail_l_pane_t1

0x5223,	// (0x00030a34) cell_cmail_l_pane_t2_ParamLimits

0x5223,	// (0x00030a34) cell_cmail_l_pane_t2

0x0001,

0xfcfe,	// (0x0003b50f) cell_cmail_l_pane_t_ParamLimits

0xfcfe,	// (0x0003b50f) cell_cmail_l_pane_t

0xf0cc,	// (0x0003a8dd) grid_highlight_pane_cp018_ParamLimits

0xf0cc,	// (0x0003a8dd) grid_highlight_pane_cp018

0x755b,	// (0x00032d6c) main2_pane_ParamLimits

0x755b,	// (0x00032d6c) main2_pane

0xee48,	// (0x0003a659) popup_sp_fs_action_menu_bg_pane_g1

0xee50,	// (0x0003a661) popup_sp_fs_action_menu_bg_pane_g2

0xee58,	// (0x0003a669) popup_sp_fs_action_menu_bg_pane_g3

0xee60,	// (0x0003a671) popup_sp_fs_action_menu_bg_pane_g4

0xee68,	// (0x0003a679) popup_sp_fs_action_menu_bg_pane_g5

0xee70,	// (0x0003a681) popup_sp_fs_action_menu_bg_pane_g6

0xee78,	// (0x0003a689) popup_sp_fs_action_menu_bg_pane_g7

0xee80,	// (0x0003a691) popup_sp_fs_action_menu_bg_pane_g8

0xee88,	// (0x0003a699) popup_sp_fs_action_menu_bg_pane_g9

0xee90,	// (0x0003a6a1) popup_sp_fs_action_menu_bg_pane_g10

0xee90,	// (0x0003a6a1) popup_sp_fs_action_menu_bg_pane_g11

0x000a,

0xf1bb,	// (0x0003a9cc) popup_sp_fs_action_menu_bg_pane_g

0x63f6,	// (0x00031c07) list_medium_line_x2_t3_g3_g1_ParamLimits

0x63f6,	// (0x00031c07) list_medium_line_x2_t3_g3_g1

0x6402,	// (0x00031c13) list_medium_line_x2_t3_g3_g2_ParamLimits

0x6402,	// (0x00031c13) list_medium_line_x2_t3_g3_g2

0x640e,	// (0x00031c1f) list_medium_line_x2_t3_g3_g3_ParamLimits

0x640e,	// (0x00031c1f) list_medium_line_x2_t3_g3_g3

0x0002,

0xf26b,	// (0x0003aa7c) list_medium_line_x2_t3_g3_g_ParamLimits

0xf26b,	// (0x0003aa7c) list_medium_line_x2_t3_g3_g

0x641a,	// (0x00031c2b) list_medium_line_x2_t3_g3_t1_ParamLimits

0x641a,	// (0x00031c2b) list_medium_line_x2_t3_g3_t1

0x642f,	// (0x00031c40) list_medium_line_x2_t3_g3_t2_ParamLimits

0x642f,	// (0x00031c40) list_medium_line_x2_t3_g3_t2

0x6441,	// (0x00031c52) list_medium_line_x2_t3_g3_t3_ParamLimits

0x6441,	// (0x00031c52) list_medium_line_x2_t3_g3_t3

0x0002,

0xf272,	// (0x0003aa83) list_medium_line_x2_t3_g3_t_ParamLimits

0xf272,	// (0x0003aa83) list_medium_line_x2_t3_g3_t

0x63f6,	// (0x00031c07) list_medium_line_x2_t3_g2_g1_ParamLimits

0x63f6,	// (0x00031c07) list_medium_line_x2_t3_g2_g1

0x640e,	// (0x00031c1f) list_medium_line_x2_t3_g2_g2_ParamLimits

0x640e,	// (0x00031c1f) list_medium_line_x2_t3_g2_g2

0x0001,

0xf279,	// (0x0003aa8a) list_medium_line_x2_t3_g2_g_ParamLimits

0xf279,	// (0x0003aa8a) list_medium_line_x2_t3_g2_g

0x6456,	// (0x00031c67) list_medium_line_x2_t3_g2_t1_ParamLimits

0x6456,	// (0x00031c67) list_medium_line_x2_t3_g2_t1

0x646c,	// (0x00031c7d) list_medium_line_x2_t3_g2_t2_ParamLimits

0x646c,	// (0x00031c7d) list_medium_line_x2_t3_g2_t2

0x6441,	// (0x00031c52) list_medium_line_x2_t3_g2_t3_ParamLimits

0x6441,	// (0x00031c52) list_medium_line_x2_t3_g2_t3

0x0002,

0xf27e,	// (0x0003aa8f) list_medium_line_x2_t3_g2_t_ParamLimits

0xf27e,	// (0x0003aa8f) list_medium_line_x2_t3_g2_t

0x63f6,	// (0x00031c07) list_medium_line_x2_t4_g4_g1_ParamLimits

0x63f6,	// (0x00031c07) list_medium_line_x2_t4_g4_g1

0x647e,	// (0x00031c8f) list_medium_line_x2_t4_g4_g2_ParamLimits

0x647e,	// (0x00031c8f) list_medium_line_x2_t4_g4_g2

0x6402,	// (0x00031c13) list_medium_line_x2_t4_g4_g3_ParamLimits

0x6402,	// (0x00031c13) list_medium_line_x2_t4_g4_g3

0x648a,	// (0x00031c9b) list_medium_line_x2_t4_g4_g4_ParamLimits

0x648a,	// (0x00031c9b) list_medium_line_x2_t4_g4_g4

0x0003,

0xf285,	// (0x0003aa96) list_medium_line_x2_t4_g4_g_ParamLimits

0xf285,	// (0x0003aa96) list_medium_line_x2_t4_g4_g

0x6496,	// (0x00031ca7) list_medium_line_x2_t4_g4_t1_ParamLimits

0x6496,	// (0x00031ca7) list_medium_line_x2_t4_g4_t1

0x64ad,	// (0x00031cbe) list_medium_line_x2_t4_g4_t2_ParamLimits

0x64ad,	// (0x00031cbe) list_medium_line_x2_t4_g4_t2

0x64c2,	// (0x00031cd3) list_medium_line_x2_t4_g4_t3_ParamLimits

0x64c2,	// (0x00031cd3) list_medium_line_x2_t4_g4_t3

0x64d4,	// (0x00031ce5) list_medium_line_x2_t4_g4_t4_ParamLimits

0x64d4,	// (0x00031ce5) list_medium_line_x2_t4_g4_t4

0x0003,

0xf28e,	// (0x0003aa9f) list_medium_line_x2_t4_g4_t_ParamLimits

0xf28e,	// (0x0003aa9f) list_medium_line_x2_t4_g4_t

0x63f6,	// (0x00031c07) list_medium_line_x2_t2_g4_g1_ParamLimits

0x63f6,	// (0x00031c07) list_medium_line_x2_t2_g4_g1

0x647e,	// (0x00031c8f) list_medium_line_x2_t2_g4_g2_ParamLimits

0x647e,	// (0x00031c8f) list_medium_line_x2_t2_g4_g2

0x6402,	// (0x00031c13) list_medium_line_x2_t2_g4_g3_ParamLimits

0x6402,	// (0x00031c13) list_medium_line_x2_t2_g4_g3

0x640e,	// (0x00031c1f) list_medium_line_x2_t2_g4_g4_ParamLimits

0x640e,	// (0x00031c1f) list_medium_line_x2_t2_g4_g4

0x0003,

0xf2f5,	// (0x0003ab06) list_medium_line_x2_t2_g4_g_ParamLimits

0xf2f5,	// (0x0003ab06) list_medium_line_x2_t2_g4_g

0x64e6,	// (0x00031cf7) list_medium_line_x2_t2_g4_t1_ParamLimits

0x64e6,	// (0x00031cf7) list_medium_line_x2_t2_g4_t1

0x6441,	// (0x00031c52) list_medium_line_x2_t2_g4_t2_ParamLimits

0x6441,	// (0x00031c52) list_medium_line_x2_t2_g4_t2

0x0001,

0xf2fe,	// (0x0003ab0f) list_medium_line_x2_t2_g4_t_ParamLimits

0xf2fe,	// (0x0003ab0f) list_medium_line_x2_t2_g4_t

0x63f6,	// (0x00031c07) list_medium_line_x2_t2_g3_g1_ParamLimits

0x63f6,	// (0x00031c07) list_medium_line_x2_t2_g3_g1

0x6402,	// (0x00031c13) list_medium_line_x2_t2_g3_g2_ParamLimits

0x6402,	// (0x00031c13) list_medium_line_x2_t2_g3_g2

0x640e,	// (0x00031c1f) list_medium_line_x2_t2_g3_g3_ParamLimits

0x640e,	// (0x00031c1f) list_medium_line_x2_t2_g3_g3

0x0002,

0xf26b,	// (0x0003aa7c) list_medium_line_x2_t2_g3_g_ParamLimits

0xf26b,	// (0x0003aa7c) list_medium_line_x2_t2_g3_g

0x64fb,	// (0x00031d0c) list_medium_line_x2_t2_g3_t1_ParamLimits

0x64fb,	// (0x00031d0c) list_medium_line_x2_t2_g3_t1

0x6441,	// (0x00031c52) list_medium_line_x2_t2_g3_t2_ParamLimits

0x6441,	// (0x00031c52) list_medium_line_x2_t2_g3_t2

0x0001,

0xf303,	// (0x0003ab14) list_medium_line_x2_t2_g3_t_ParamLimits

0xf303,	// (0x0003ab14) list_medium_line_x2_t2_g3_t

0x8e84,	// (0x00034695) main_sp_fs_list_pane_ParamLimits

0x8e84,	// (0x00034695) main_sp_fs_list_pane

0x8e91,	// (0x000346a2) sp_fs_scroll_pane_ParamLimits

0x8e91,	// (0x000346a2) sp_fs_scroll_pane

0x6510,	// (0x00031d21) list_medium_line_x2_t3_t1

0x6520,	// (0x00031d31) list_medium_line_x2_t3_t2

0x652e,	// (0x00031d3f) list_medium_line_x2_t3_t3

0x0002,

0xf34e,	// (0x0003ab5f) list_medium_line_x2_t3_t

0x653c,	// (0x00031d4d) list_medium_line_x3_t4_t1

0x654c,	// (0x00031d5d) list_medium_line_x3_t4_t2

0x655a,	// (0x00031d6b) list_medium_line_x3_t4_t3

0x6568,	// (0x00031d79) list_medium_line_x3_t4_t4

0x0003,

0xf355,	// (0x0003ab66) list_medium_line_x3_t4_t

0x6576,	// (0x00031d87) list_medium_line_x4_t5_t1

0x6586,	// (0x00031d97) list_medium_line_x4_t5_t2

0x655a,	// (0x00031d6b) list_medium_line_x4_t5_t3

0x6594,	// (0x00031da5) list_medium_line_x4_t5_t4

0x6568,	// (0x00031d79) list_medium_line_x4_t5_t5

0x0004,

0xf35e,	// (0x0003ab6f) list_medium_line_x4_t5_t

0x63f6,	// (0x00031c07) list_medium_line_t4_g4_g1_ParamLimits

0x63f6,	// (0x00031c07) list_medium_line_t4_g4_g1

0x648a,	// (0x00031c9b) list_medium_line_t4_g4_g2_ParamLimits

0x648a,	// (0x00031c9b) list_medium_line_t4_g4_g2

0x65a2,	// (0x00031db3) list_medium_line_t4_g4_g3_ParamLimits

0x65a2,	// (0x00031db3) list_medium_line_t4_g4_g3

0x640e,	// (0x00031c1f) list_medium_line_t4_g4_g4_ParamLimits

0x640e,	// (0x00031c1f) list_medium_line_t4_g4_g4

0x0003,

0xf369,	// (0x0003ab7a) list_medium_line_t4_g4_g_ParamLimits

0xf369,	// (0x0003ab7a) list_medium_line_t4_g4_g

0x65ae,	// (0x00031dbf) list_medium_line_t4_g4_t1_ParamLimits

0x65ae,	// (0x00031dbf) list_medium_line_t4_g4_t1

0x65c3,	// (0x00031dd4) list_medium_line_t4_g4_t2_ParamLimits

0x65c3,	// (0x00031dd4) list_medium_line_t4_g4_t2

0x65d9,	// (0x00031dea) list_medium_line_t4_g4_t3_ParamLimits

0x65d9,	// (0x00031dea) list_medium_line_t4_g4_t3

0x65ef,	// (0x00031e00) list_medium_line_t4_g4_t4_ParamLimits

0x65ef,	// (0x00031e00) list_medium_line_t4_g4_t4

0x0003,

0xf372,	// (0x0003ab83) list_medium_line_t4_g4_t_ParamLimits

0xf372,	// (0x0003ab83) list_medium_line_t4_g4_t

0x8fac,	// (0x000347bd) chi_dic_find_pane_g1

0x9c8c,	// (0x0003549d) main_tport_pane

0x6864,	// (0x00032075) list_medium_line_plain_t1

0x63f6,	// (0x00031c07) list_medium_line_t2_g2_g1_ParamLimits

0x63f6,	// (0x00031c07) list_medium_line_t2_g2_g1

0x6402,	// (0x00031c13) list_medium_line_t2_g2_g2_ParamLimits

0x6402,	// (0x00031c13) list_medium_line_t2_g2_g2

0x0001,

0xfa41,	// (0x0003b252) list_medium_line_t2_g2_g_ParamLimits

0xfa41,	// (0x0003b252) list_medium_line_t2_g2_g

0x6872,	// (0x00032083) list_medium_line_t2_g2_t1_ParamLimits

0x6872,	// (0x00032083) list_medium_line_t2_g2_t1

0x6889,	// (0x0003209a) list_medium_line_t2_g2_t2_ParamLimits

0x6889,	// (0x0003209a) list_medium_line_t2_g2_t2

0x0001,

0xfa46,	// (0x0003b257) list_medium_line_t2_g2_t_ParamLimits

0xfa46,	// (0x0003b257) list_medium_line_t2_g2_t

0x6a06,	// (0x00032217) aid_sp_fs_list_icon_a_sm

0x6a0e,	// (0x0003221f) aid_sp_fs_list_icon_d

0x6a16,	// (0x00032227) aid_sp_fs_text_primary

0x6a1f,	// (0x00032230) aid_sp_fs_text_secondary

0x6a28,	// (0x00032239) list_medium_line

0x6a28,	// (0x00032239) list_medium_line_g2

0x6a28,	// (0x00032239) list_medium_line_g3

0x6a28,	// (0x00032239) list_medium_line_plain

0x6a28,	// (0x00032239) list_medium_line_plain_t2

0x6a28,	// (0x00032239) list_medium_line_plain_t3

0x6a28,	// (0x00032239) list_medium_line_right_icon

0x6a28,	// (0x00032239) list_medium_line_right_iconx2

0x6a28,	// (0x00032239) list_medium_line_t2

0x6a28,	// (0x00032239) list_medium_line_t2_g2

0x6a28,	// (0x00032239) list_medium_line_t2_g3

0x6a28,	// (0x00032239) list_medium_line_t2_right_icon

0x6a28,	// (0x00032239) list_medium_line_t2_right_iconx2

0x6a28,	// (0x00032239) list_medium_line_t3

0x6a28,	// (0x00032239) list_medium_line_t3_g2

0x6a28,	// (0x00032239) list_medium_line_t3_g3

0x6a28,	// (0x00032239) list_medium_line_t3_right_iconx2

0x6a31,	// (0x00032242) list_medium_line_t4_g4

0x6a3a,	// (0x0003224b) list_medium_line_x2

0x6a3a,	// (0x0003224b) list_medium_line_x2_t2_g2

0x6a3a,	// (0x0003224b) list_medium_line_x2_t2_g3

0x6a3a,	// (0x0003224b) list_medium_line_x2_t2_g4

0x6a3a,	// (0x0003224b) list_medium_line_x2_t3

0x6a3a,	// (0x0003224b) list_medium_line_x2_t3_g2

0x6a3a,	// (0x0003224b) list_medium_line_x2_t3_g3

0x6a3a,	// (0x0003224b) list_medium_line_x2_t3_g4

0x6a3a,	// (0x0003224b) list_medium_line_x2_t4_g2

0x6a3a,	// (0x0003224b) list_medium_line_x2_t4_g4

0x6a43,	// (0x00032254) list_medium_line_x3

0x6a43,	// (0x00032254) list_medium_line_x3_t4

0x6a43,	// (0x00032254) list_medium_line_x3_t4_g4

0x6a31,	// (0x00032242) list_medium_line_x4_t4

0x6a31,	// (0x00032242) list_medium_line_x4_t4_g7

0x6a31,	// (0x00032242) list_medium_line_x4_t5

0x6a4c,	// (0x0003225d) list_single_fs_dyc_pane_ParamLimits

0x6a4c,	// (0x0003225d) list_single_fs_dyc_pane

0x63f6,	// (0x00031c07) list_medium_line_x4_t4_g7_g1_ParamLimits

0x63f6,	// (0x00031c07) list_medium_line_x4_t4_g7_g1

0x6a8c,	// (0x0003229d) list_medium_line_x4_t4_g7_g2_ParamLimits

0x6a8c,	// (0x0003229d) list_medium_line_x4_t4_g7_g2

0x6a98,	// (0x000322a9) list_medium_line_x4_t4_g7_g3_ParamLimits

0x6a98,	// (0x000322a9) list_medium_line_x4_t4_g7_g3

0x6aa7,	// (0x000322b8) list_medium_line_x4_t4_g7_g4_ParamLimits

0x6aa7,	// (0x000322b8) list_medium_line_x4_t4_g7_g4

0x6ab3,	// (0x000322c4) list_medium_line_x4_t4_g7_g5_ParamLimits

0x6ab3,	// (0x000322c4) list_medium_line_x4_t4_g7_g5

0x6ac2,	// (0x000322d3) list_medium_line_x4_t4_g7_g6_ParamLimits

0x6ac2,	// (0x000322d3) list_medium_line_x4_t4_g7_g6

0x6ad1,	// (0x000322e2) list_medium_line_x4_t4_g7_g7_ParamLimits

0x6ad1,	// (0x000322e2) list_medium_line_x4_t4_g7_g7

0x0006,

0xfc0b,	// (0x0003b41c) list_medium_line_x4_t4_g7_g_ParamLimits

0xfc0b,	// (0x0003b41c) list_medium_line_x4_t4_g7_g

0x6add,	// (0x000322ee) list_medium_line_x4_t4_g7_t1_ParamLimits

0x6add,	// (0x000322ee) list_medium_line_x4_t4_g7_t1

0x6af2,	// (0x00032303) list_medium_line_x4_t4_g7_t2_ParamLimits

0x6af2,	// (0x00032303) list_medium_line_x4_t4_g7_t2

0x6b07,	// (0x00032318) list_medium_line_x4_t4_g7_t3_ParamLimits

0x6b07,	// (0x00032318) list_medium_line_x4_t4_g7_t3

0x6b1c,	// (0x0003232d) list_medium_line_x4_t4_g7_t4_ParamLimits

0x6b1c,	// (0x0003232d) list_medium_line_x4_t4_g7_t4

0x6b2e,	// (0x0003233f) list_medium_line_x4_t4_g7_t5_ParamLimits

0x6b2e,	// (0x0003233f) list_medium_line_x4_t4_g7_t5

0x0004,

0xfc1a,	// (0x0003b42b) list_medium_line_x4_t4_g7_t_ParamLimits

0xfc1a,	// (0x0003b42b) list_medium_line_x4_t4_g7_t

0x6b40,	// (0x00032351) list_single_dyc_row_pane_ParamLimits

0x6b40,	// (0x00032351) list_single_dyc_row_pane

0xd35e,	// (0x00038b6f) call5_gesture_pane_ParamLimits

0xd35e,	// (0x00038b6f) call5_gesture_pane

0xd38e,	// (0x00038b9f) call5_windows_pane_ParamLimits

0xd38e,	// (0x00038b9f) call5_windows_pane

0xd3fa,	// (0x00038c0b) call5_swipe_1_pane_cp_ParamLimits

0xd3fa,	// (0x00038c0b) call5_swipe_1_pane_cp

0xd406,	// (0x00038c17) call5_swipe_2_pane_cp_ParamLimits

0xd406,	// (0x00038c17) call5_swipe_2_pane_cp

0x18db,	// (0x0002d0ec) call5_image_pane_cp

0xd412,	// (0x00038c23) popup_call5_audio_first_window_cp_ParamLimits

0xd412,	// (0x00038c23) popup_call5_audio_first_window_cp

0x51f5,	// (0x00030a06) call5_swipe_1_pane_g1_cp_ParamLimits

0x51f5,	// (0x00030a06) call5_swipe_1_pane_g1_cp

0x5235,	// (0x00030a46) call5_swipe_1_pane_g2_cp

0x520e,	// (0x00030a1f) call5_swipe_1_pane_t1_cp_ParamLimits

0x520e,	// (0x00030a1f) call5_swipe_1_pane_t1_cp

0x51f5,	// (0x00030a06) call5_swipe_2_pane_g1_cp_ParamLimits

0x51f5,	// (0x00030a06) call5_swipe_2_pane_g1_cp

0x523d,	// (0x00030a4e) call5_swipe_2_pane_g2_cp

0x5245,	// (0x00030a56) call5_swipe_2_pane_t1_cp_ParamLimits

0x5245,	// (0x00030a56) call5_swipe_2_pane_t1_cp

0xf0cc,	// (0x0003a8dd) main_sp_fs_email_pane

0x525a,	// (0x00030a6b) main_sp_fs_listscroll_pane_te

0x6bd1,	// (0x000323e2) popup_sp_fs_action_menu_pane_ParamLimits

0x6bd1,	// (0x000323e2) popup_sp_fs_action_menu_pane

0x32c6,	// (0x0002ead7) bg_sp_fs_ctrlbar_pane_g1

0x5263,	// (0x00030a74) bg_sp_fs_ctrlbar_ddmenu_pane_g1

0x526c,	// (0x00030a7d) bg_sp_fs_ctrlbar_ddmenu_pane_g2

0x5275,	// (0x00030a86) bg_sp_fs_ctrlbar_ddmenu_pane_g3

0x32c6,	// (0x0002ead7) bg_sp_fs_ctrlbar_ddmenu_pane_g4

0x0003,

0xfd03,	// (0x0003b514) bg_sp_fs_ctrlbar_ddmenu_pane_g

0x30b3,	// (0x0002e8c4) bg_sp_fs_ctrlbar_ddmenu_pane_ParamLimits

0x30b3,	// (0x0002e8c4) bg_sp_fs_ctrlbar_ddmenu_pane

0x527e,	// (0x00030a8f) main_sp_fs_ctrlbar_ddmenu_pane_g1_ParamLimits

0x527e,	// (0x00030a8f) main_sp_fs_ctrlbar_ddmenu_pane_g1

0xf0da,	// (0x0003a8eb) main_sp_fs_ctrlbar_ddmenu_pane_g2_ParamLimits

0xf0da,	// (0x0003a8eb) main_sp_fs_ctrlbar_ddmenu_pane_g2

0x0001,

0xfd0c,	// (0x0003b51d) main_sp_fs_ctrlbar_ddmenu_pane_g_ParamLimits

0xfd0c,	// (0x0003b51d) main_sp_fs_ctrlbar_ddmenu_pane_g

0x528a,	// (0x00030a9b) main_sp_fs_ctrlbar_ddmenu_pane_t1_ParamLimits

0x528a,	// (0x00030a9b) main_sp_fs_ctrlbar_ddmenu_pane_t1

0x6c01,	// (0x00032412) list_medium_line_t2_right_icon_g1

0x6c09,	// (0x0003241a) list_medium_line_t2_right_icon_t1

0x6c18,	// (0x00032429) list_medium_line_t2_right_icon_t2

0x0001,

0xfd11,	// (0x0003b522) list_medium_line_t2_right_icon_t

0x2dd1,	// (0x0002e5e2) bg_sp_fs_ctrlbar_pane_ParamLimits

0x2dd1,	// (0x0002e5e2) bg_sp_fs_ctrlbar_pane

0xd473,	// (0x00038c84) main_sp_fs_ctrlbar_button_pane_cp01

0xd47b,	// (0x00038c8c) main_sp_fs_ctrlbar_ddmenu_pane

0x52f4,	// (0x00030b05) main_sp_fs_ctrlbar_pane_g1

0x5300,	// (0x00030b11) main_sp_fs_ctrlbar_pane_g2

0x0001,

0xfd16,	// (0x0003b527) main_sp_fs_ctrlbar_pane_g

0x530c,	// (0x00030b1d) main_sp_fs_ctrlbar_pane_t1

0x6c26,	// (0x00032437) main_sp_fs_ctrlbar_pane

0x6c3e,	// (0x0003244f) main_sp_fs_listscroll_pane_te_cp01

0x6c4f,	// (0x00032460) popup_sp_fs_action_menu_pane_cp01_ParamLimits

0x6c4f,	// (0x00032460) popup_sp_fs_action_menu_pane_cp01

0xf0cc,	// (0x0003a8dd) bg_sp_fs_highlight_list_pane_cp01_ParamLimits

0xf0cc,	// (0x0003a8dd) bg_sp_fs_highlight_list_pane_cp01

0x6c6b,	// (0x0003247c) sp_fs_action_menu_list_gene_pane_g1_ParamLimits

0x6c6b,	// (0x0003247c) sp_fs_action_menu_list_gene_pane_g1

0x5321,	// (0x00030b32) sp_fs_action_menu_list_gene_pane_g2_ParamLimits

0x5321,	// (0x00030b32) sp_fs_action_menu_list_gene_pane_g2

0x0001,

0xfd1b,	// (0x0003b52c) sp_fs_action_menu_list_gene_pane_g_ParamLimits

0xfd1b,	// (0x0003b52c) sp_fs_action_menu_list_gene_pane_g

0x6c7a,	// (0x0003248b) sp_fs_action_menu_list_gene_pane_t1_ParamLimits

0x6c7a,	// (0x0003248b) sp_fs_action_menu_list_gene_pane_t1

0x6c92,	// (0x000324a3) sp_fs_action_menu_list_gene_pane_ParamLimits

0x6c92,	// (0x000324a3) sp_fs_action_menu_list_gene_pane

0x532e,	// (0x00030b3f) popup_sp_fs_action_menu_bg_pane_ParamLimits

0x532e,	// (0x00030b3f) popup_sp_fs_action_menu_bg_pane

0x6caf,	// (0x000324c0) sp_fs_action_menu_list_pane_ParamLimits

0x6caf,	// (0x000324c0) sp_fs_action_menu_list_pane

0x533c,	// (0x00030b4d) sp_fs_scroll_pane_cp01_ParamLimits

0x533c,	// (0x00030b4d) sp_fs_scroll_pane_cp01

0x6ccb,	// (0x000324dc) list_medium_line_plain_t2_t1

0x6cda,	// (0x000324eb) list_medium_line_plain_t2_t2

0x0001,

0xfd20,	// (0x0003b531) list_medium_line_plain_t2_t

0x6ce8,	// (0x000324f9) list_medium_line_plain_t3_t1

0x6cf8,	// (0x00032509) list_medium_line_plain_t3_t2

0x6d06,	// (0x00032517) list_medium_line_plain_t3_t3

0x0002,

0xfd25,	// (0x0003b536) list_medium_line_plain_t3_t

0x63f6,	// (0x00031c07) list_medium_line_x2_t2_g2_g1_ParamLimits

0x63f6,	// (0x00031c07) list_medium_line_x2_t2_g2_g1

0x640e,	// (0x00031c1f) list_medium_line_x2_t2_g2_g2_ParamLimits

0x640e,	// (0x00031c1f) list_medium_line_x2_t2_g2_g2

0x0001,

0xf279,	// (0x0003aa8a) list_medium_line_x2_t2_g2_g_ParamLimits

0xf279,	// (0x0003aa8a) list_medium_line_x2_t2_g2_g

0x65ae,	// (0x00031dbf) list_medium_line_x2_t2_g2_t1_ParamLimits

0x65ae,	// (0x00031dbf) list_medium_line_x2_t2_g2_t1

0x6441,	// (0x00031c52) list_medium_line_x2_t2_g2_t2_ParamLimits

0x6441,	// (0x00031c52) list_medium_line_x2_t2_g2_t2

0x0001,

0xfd2c,	// (0x0003b53d) list_medium_line_x2_t2_g2_t_ParamLimits

0xfd2c,	// (0x0003b53d) list_medium_line_x2_t2_g2_t

0x63f6,	// (0x00031c07) list_medium_line_x2_t4_g2_g1_ParamLimits

0x63f6,	// (0x00031c07) list_medium_line_x2_t4_g2_g1

0x6d14,	// (0x00032525) list_medium_line_x2_t4_g2_g2_ParamLimits

0x6d14,	// (0x00032525) list_medium_line_x2_t4_g2_g2

0x0001,

0xfd31,	// (0x0003b542) list_medium_line_x2_t4_g2_g_ParamLimits

0xfd31,	// (0x0003b542) list_medium_line_x2_t4_g2_g

0x6d25,	// (0x00032536) list_medium_line_x2_t4_g2_t1_ParamLimits

0x6d25,	// (0x00032536) list_medium_line_x2_t4_g2_t1

0x6d3f,	// (0x00032550) list_medium_line_x2_t4_g2_t2_ParamLimits

0x6d3f,	// (0x00032550) list_medium_line_x2_t4_g2_t2

0x6d54,	// (0x00032565) list_medium_line_x2_t4_g2_t3_ParamLimits

0x6d54,	// (0x00032565) list_medium_line_x2_t4_g2_t3

0x6441,	// (0x00031c52) list_medium_line_x2_t4_g2_t4_ParamLimits

0x6441,	// (0x00031c52) list_medium_line_x2_t4_g2_t4

0x0003,

0xfd36,	// (0x0003b547) list_medium_line_x2_t4_g2_t_ParamLimits

0xfd36,	// (0x0003b547) list_medium_line_x2_t4_g2_t

0x6d69,	// (0x0003257a) list_medium_line_t3_right_iconx2_g1

0x6c01,	// (0x00032412) list_medium_line_t3_right_iconx2_g2

0x6d71,	// (0x00032582) list_medium_line_t3_right_iconx2_g3

0x0002,

0xfd3f,	// (0x0003b550) list_medium_line_t3_right_iconx2_g

0x6d79,	// (0x0003258a) list_medium_line_t3_right_iconx2_t1

0x6d89,	// (0x0003259a) list_medium_line_t3_right_iconx2_t2

0x0001,

0xfd46,	// (0x0003b557) list_medium_line_t3_right_iconx2_t

0x63f6,	// (0x00031c07) list_medium_line_x3_t4_g4_g1_ParamLimits

0x63f6,	// (0x00031c07) list_medium_line_x3_t4_g4_g1

0x6402,	// (0x00031c13) list_medium_line_x3_t4_g4_g2_ParamLimits

0x6402,	// (0x00031c13) list_medium_line_x3_t4_g4_g2

0x648a,	// (0x00031c9b) list_medium_line_x3_t4_g4_g3_ParamLimits

0x648a,	// (0x00031c9b) list_medium_line_x3_t4_g4_g3

0x6d97,	// (0x000325a8) list_medium_line_x3_t4_g4_g4_ParamLimits

0x6d97,	// (0x000325a8) list_medium_line_x3_t4_g4_g4

0x0003,

0xfd4b,	// (0x0003b55c) list_medium_line_x3_t4_g4_g_ParamLimits

0xfd4b,	// (0x0003b55c) list_medium_line_x3_t4_g4_g

0x6872,	// (0x00032083) list_medium_line_x3_t4_g4_t1_ParamLimits

0x6872,	// (0x00032083) list_medium_line_x3_t4_g4_t1

0x6889,	// (0x0003209a) list_medium_line_x3_t4_g4_t2_ParamLimits

0x6889,	// (0x0003209a) list_medium_line_x3_t4_g4_t2

0x6da3,	// (0x000325b4) list_medium_line_x3_t4_g4_t3_ParamLimits

0x6da3,	// (0x000325b4) list_medium_line_x3_t4_g4_t3

0x6db8,	// (0x000325c9) list_medium_line_x3_t4_g4_t4_ParamLimits

0x6db8,	// (0x000325c9) list_medium_line_x3_t4_g4_t4

0x0003,

0xfd54,	// (0x0003b565) list_medium_line_x3_t4_g4_t_ParamLimits

0xfd54,	// (0x0003b565) list_medium_line_x3_t4_g4_t

0x6dd5,	// (0x000325e6) list_single_dyc_row_text_pane_t1_ParamLimits

0x6dd5,	// (0x000325e6) list_single_dyc_row_text_pane_t1

0x6e0c,	// (0x0003261d) list_single_dyc_row_text_pane_t2_ParamLimits

0x6e0c,	// (0x0003261d) list_single_dyc_row_text_pane_t2

0x6e60,	// (0x00032671) list_single_dyc_row_text_pane_t3_ParamLimits

0x6e60,	// (0x00032671) list_single_dyc_row_text_pane_t3

0x0002,

0xfd5d,	// (0x0003b56e) list_single_dyc_row_text_pane_t_ParamLimits

0xfd5d,	// (0x0003b56e) list_single_dyc_row_text_pane_t

0x6e72,	// (0x00032683) list_single_dyc_row_pane_g1_ParamLimits

0x6e72,	// (0x00032683) list_single_dyc_row_pane_g1

0x6e7e,	// (0x0003268f) list_single_dyc_row_pane_g2_ParamLimits

0x6e7e,	// (0x0003268f) list_single_dyc_row_pane_g2

0x6e8a,	// (0x0003269b) list_single_dyc_row_pane_g3_ParamLimits

0x6e8a,	// (0x0003269b) list_single_dyc_row_pane_g3

0x6e96,	// (0x000326a7) list_single_dyc_row_pane_g4_ParamLimits

0x6e96,	// (0x000326a7) list_single_dyc_row_pane_g4

0x0003,

0xfd64,	// (0x0003b575) list_single_dyc_row_pane_g_ParamLimits

0xfd64,	// (0x0003b575) list_single_dyc_row_pane_g

0x6ea2,	// (0x000326b3) list_single_dyc_row_text_pane_ParamLimits

0x6ea2,	// (0x000326b3) list_single_dyc_row_text_pane

0xe617,	// (0x00039e28) bg_sp_fs_scroll_pane

0x53f4,	// (0x00030c05) thumb_sp_fs_scroll_pane

0x63f6,	// (0x00031c07) list_medium_line_g1_ParamLimits

0x63f6,	// (0x00031c07) list_medium_line_g1

0x65ae,	// (0x00031dbf) list_medium_line_t1_ParamLimits

0x65ae,	// (0x00031dbf) list_medium_line_t1

0x63f6,	// (0x00031c07) list_medium_line_x2_g1_ParamLimits

0x63f6,	// (0x00031c07) list_medium_line_x2_g1

0x6402,	// (0x00031c13) list_medium_line_x2_g2_ParamLimits

0x6402,	// (0x00031c13) list_medium_line_x2_g2

0x0001,

0xfa41,	// (0x0003b252) list_medium_line_x2_g_ParamLimits

0xfa41,	// (0x0003b252) list_medium_line_x2_g

0x6ec1,	// (0x000326d2) list_medium_line_x2_t1_ParamLimits

0x6ec1,	// (0x000326d2) list_medium_line_x2_t1

0x63f6,	// (0x00031c07) list_medium_line_x3_g1_ParamLimits

0x63f6,	// (0x00031c07) list_medium_line_x3_g1

0x6402,	// (0x00031c13) list_medium_line_x3_g2_ParamLimits

0x6402,	// (0x00031c13) list_medium_line_x3_g2

0x0001,

0xfa41,	// (0x0003b252) list_medium_line_x3_g_ParamLimits

0xfa41,	// (0x0003b252) list_medium_line_x3_g

0x6ec1,	// (0x000326d2) list_medium_line_x3_t1_ParamLimits

0x6ec1,	// (0x000326d2) list_medium_line_x3_t1

0x5413,	// (0x00030c24) thumb_sp_fs_scroll_pane_g1

0x541c,	// (0x00030c2d) thumb_sp_fs_scroll_pane_g2

0x5425,	// (0x00030c36) thumb_sp_fs_scroll_pane_g3

0x0002,

0xfd6d,	// (0x0003b57e) thumb_sp_fs_scroll_pane_g

0x5413,	// (0x00030c24) bg_sp_fs_scroll_pane_g1

0x541c,	// (0x00030c2d) bg_sp_fs_scroll_pane_g2

0x5425,	// (0x00030c36) bg_sp_fs_scroll_pane_g3

0x0002,

0xfd6d,	// (0x0003b57e) bg_sp_fs_scroll_pane_g

0x63f6,	// (0x00031c07) list_medium_line_x2_t3_g4_g1_ParamLimits

0x63f6,	// (0x00031c07) list_medium_line_x2_t3_g4_g1

0x647e,	// (0x00031c8f) list_medium_line_x2_t3_g4_g2_ParamLimits

0x647e,	// (0x00031c8f) list_medium_line_x2_t3_g4_g2

0x6402,	// (0x00031c13) list_medium_line_x2_t3_g4_g3_ParamLimits

0x6402,	// (0x00031c13) list_medium_line_x2_t3_g4_g3

0x640e,	// (0x00031c1f) list_medium_line_x2_t3_g4_g4_ParamLimits

0x640e,	// (0x00031c1f) list_medium_line_x2_t3_g4_g4

0x0003,

0xf2f5,	// (0x0003ab06) list_medium_line_x2_t3_g4_g_ParamLimits

0xf2f5,	// (0x0003ab06) list_medium_line_x2_t3_g4_g

0x6ed7,	// (0x000326e8) list_medium_line_x2_t3_g4_t1_ParamLimits

0x6ed7,	// (0x000326e8) list_medium_line_x2_t3_g4_t1

0x6eed,	// (0x000326fe) list_medium_line_x2_t3_g4_t2_ParamLimits

0x6eed,	// (0x000326fe) list_medium_line_x2_t3_g4_t2

0x6441,	// (0x00031c52) list_medium_line_x2_t3_g4_t3_ParamLimits

0x6441,	// (0x00031c52) list_medium_line_x2_t3_g4_t3

0x0002,

0xfd74,	// (0x0003b585) list_medium_line_x2_t3_g4_t_ParamLimits

0xfd74,	// (0x0003b585) list_medium_line_x2_t3_g4_t

0x63f6,	// (0x00031c07) list_medium_line_g2_g1_ParamLimits

0x63f6,	// (0x00031c07) list_medium_line_g2_g1

0x6402,	// (0x00031c13) list_medium_line_g2_g2_ParamLimits

0x6402,	// (0x00031c13) list_medium_line_g2_g2

0x0001,

0xfa41,	// (0x0003b252) list_medium_line_g2_g_ParamLimits

0xfa41,	// (0x0003b252) list_medium_line_g2_g

0x64fb,	// (0x00031d0c) list_medium_line_g2_t1_ParamLimits

0x64fb,	// (0x00031d0c) list_medium_line_g2_t1

0x63f6,	// (0x00031c07) list_medium_line_t3_g2_g1_ParamLimits

0x63f6,	// (0x00031c07) list_medium_line_t3_g2_g1

0x6402,	// (0x00031c13) list_medium_line_t3_g2_g2_ParamLimits

0x6402,	// (0x00031c13) list_medium_line_t3_g2_g2

0x0001,

0xfa41,	// (0x0003b252) list_medium_line_t3_g2_g_ParamLimits

0xfa41,	// (0x0003b252) list_medium_line_t3_g2_g

0x6f06,	// (0x00032717) list_medium_line_t3_g2_t1_ParamLimits

0x6f06,	// (0x00032717) list_medium_line_t3_g2_t1

0x6f20,	// (0x00032731) list_medium_line_t3_g2_t2_ParamLimits

0x6f20,	// (0x00032731) list_medium_line_t3_g2_t2

0x6f35,	// (0x00032746) list_medium_line_t3_g2_t3_ParamLimits

0x6f35,	// (0x00032746) list_medium_line_t3_g2_t3

0x0002,

0xfd7b,	// (0x0003b58c) list_medium_line_t3_g2_t_ParamLimits

0xfd7b,	// (0x0003b58c) list_medium_line_t3_g2_t

0x6c01,	// (0x00032412) list_medium_line_right_icon_g1

0x6f4b,	// (0x0003275c) list_medium_line_right_icon_t1

0x63f6,	// (0x00031c07) list_medium_line_t2_g1_ParamLimits

0x63f6,	// (0x00031c07) list_medium_line_t2_g1

0x6f59,	// (0x0003276a) list_medium_line_t2_t1_ParamLimits

0x6f59,	// (0x0003276a) list_medium_line_t2_t1

0x6f6f,	// (0x00032780) list_medium_line_t2_t2_ParamLimits

0x6f6f,	// (0x00032780) list_medium_line_t2_t2

0x0001,

0xfd82,	// (0x0003b593) list_medium_line_t2_t_ParamLimits

0xfd82,	// (0x0003b593) list_medium_line_t2_t

0x63f6,	// (0x00031c07) list_medium_line_t3_g1_ParamLimits

0x63f6,	// (0x00031c07) list_medium_line_t3_g1

0x6f81,	// (0x00032792) list_medium_line_t3_t1_ParamLimits

0x6f81,	// (0x00032792) list_medium_line_t3_t1

0x6f98,	// (0x000327a9) list_medium_line_t3_t2_ParamLimits

0x6f98,	// (0x000327a9) list_medium_line_t3_t2

0x6fad,	// (0x000327be) list_medium_line_t3_t3_ParamLimits

0x6fad,	// (0x000327be) list_medium_line_t3_t3

0x0002,

0xfd87,	// (0x0003b598) list_medium_line_t3_t_ParamLimits

0xfd87,	// (0x0003b598) list_medium_line_t3_t

0x63f6,	// (0x00031c07) list_medium_line_g3_g1_ParamLimits

0x63f6,	// (0x00031c07) list_medium_line_g3_g1

0x647e,	// (0x00031c8f) list_medium_line_g3_g2_ParamLimits

0x647e,	// (0x00031c8f) list_medium_line_g3_g2

0x6402,	// (0x00031c13) list_medium_line_g3_g3_ParamLimits

0x6402,	// (0x00031c13) list_medium_line_g3_g3

0x0002,

0xfd8e,	// (0x0003b59f) list_medium_line_g3_g_ParamLimits

0xfd8e,	// (0x0003b59f) list_medium_line_g3_g

0x64e6,	// (0x00031cf7) list_medium_line_g3_t1_ParamLimits

0x64e6,	// (0x00031cf7) list_medium_line_g3_t1

0x63f6,	// (0x00031c07) list_medium_line_t2_g3_g1_ParamLimits

0x63f6,	// (0x00031c07) list_medium_line_t2_g3_g1

0x647e,	// (0x00031c8f) list_medium_line_t2_g3_g2_ParamLimits

0x647e,	// (0x00031c8f) list_medium_line_t2_g3_g2

0x6402,	// (0x00031c13) list_medium_line_t2_g3_g3_ParamLimits

0x6402,	// (0x00031c13) list_medium_line_t2_g3_g3

0x0002,

0xfd8e,	// (0x0003b59f) list_medium_line_t2_g3_g_ParamLimits

0xfd8e,	// (0x0003b59f) list_medium_line_t2_g3_g

0x6fbf,	// (0x000327d0) list_medium_line_t2_g3_t1_ParamLimits

0x6fbf,	// (0x000327d0) list_medium_line_t2_g3_t1

0x6fd9,	// (0x000327ea) list_medium_line_t2_g3_t2_ParamLimits

0x6fd9,	// (0x000327ea) list_medium_line_t2_g3_t2

0x0001,

0xfd95,	// (0x0003b5a6) list_medium_line_t2_g3_t_ParamLimits

0xfd95,	// (0x0003b5a6) list_medium_line_t2_g3_t

0x63f6,	// (0x00031c07) list_medium_line_t3_g3_g1_ParamLimits

0x63f6,	// (0x00031c07) list_medium_line_t3_g3_g1

0x647e,	// (0x00031c8f) list_medium_line_t3_g3_g2_ParamLimits

0x647e,	// (0x00031c8f) list_medium_line_t3_g3_g2

0x6402,	// (0x00031c13) list_medium_line_t3_g3_g3_ParamLimits

0x6402,	// (0x00031c13) list_medium_line_t3_g3_g3

0x0002,

0xfd8e,	// (0x0003b59f) list_medium_line_t3_g3_g_ParamLimits

0xfd8e,	// (0x0003b59f) list_medium_line_t3_g3_g

0x6fee,	// (0x000327ff) list_medium_line_t3_g3_t1_ParamLimits

0x6fee,	// (0x000327ff) list_medium_line_t3_g3_t1

0x7007,	// (0x00032818) list_medium_line_t3_g3_t2_ParamLimits

0x7007,	// (0x00032818) list_medium_line_t3_g3_t2

0x701d,	// (0x0003282e) list_medium_line_t3_g3_t3_ParamLimits

0x701d,	// (0x0003282e) list_medium_line_t3_g3_t3

0x0002,

0xfd9a,	// (0x0003b5ab) list_medium_line_t3_g3_t_ParamLimits

0xfd9a,	// (0x0003b5ab) list_medium_line_t3_g3_t

0x6d69,	// (0x0003257a) list_medium_line_right_iconx2_g1

0x6c01,	// (0x00032412) list_medium_line_right_iconx2_g2

0x0001,

0xfda1,	// (0x0003b5b2) list_medium_line_right_iconx2_g

0x7033,	// (0x00032844) list_medium_line_right_iconx2_t1

0x6d69,	// (0x0003257a) list_medium_line_t2_right_iconx2_g1

0x6c01,	// (0x00032412) list_medium_line_t2_right_iconx2_g2

0x0001,

0xfda1,	// (0x0003b5b2) list_medium_line_t2_right_iconx2_g

0x7041,	// (0x00032852) list_medium_line_t2_right_iconx2_t1

0x7051,	// (0x00032862) list_medium_line_t2_right_iconx2_t2

0x0001,

0xfda6,	// (0x0003b5b7) list_medium_line_t2_right_iconx2_t

0x6864,	// (0x00032075) list_medium_line_x4_t4_t1

0x705f,	// (0x00032870) list_medium_line_x4_t4_t2

0x706d,	// (0x0003287e) list_medium_line_x4_t4_t3

0x707b,	// (0x0003288c) list_medium_line_x4_t4_t4

0x0003,

0xfdab,	// (0x0003b5bc) list_medium_line_x4_t4_t

0xd4aa,	// (0x00038cbb) tport_appsw_pane_ParamLimits

0xd4aa,	// (0x00038cbb) tport_appsw_pane

0xd4b6,	// (0x00038cc7) tport_contact_pane_ParamLimits

0xd4b6,	// (0x00038cc7) tport_contact_pane

0xd4c4,	// (0x00038cd5) tport_listscroll_pane_ParamLimits

0xd4c4,	// (0x00038cd5) tport_listscroll_pane

0xd4d2,	// (0x00038ce3) cell_tport_appsw_pane_ParamLimits

0xd4d2,	// (0x00038ce3) cell_tport_appsw_pane

0x35ce,	// (0x0002eddf) tport_appsw_pane_g1_ParamLimits

0x35ce,	// (0x0002eddf) tport_appsw_pane_g1

0x544a,	// (0x00030c5b) tport_contact_pane_g1

0x5453,	// (0x00030c64) tport_contact_pane_t1

0x5461,	// (0x00030c72) tport_contact_pane_t2

0x0001,

0xfdb4,	// (0x0003b5c5) tport_contact_pane_t

0x546f,	// (0x00030c80) list_tport_pane

0xeea2,	// (0x0003a6b3) scroll_pane_cp_030

0x5480,	// (0x00030c91) cell_tport_appsw_pane_g1

0x5490,	// (0x00030ca1) cell_tport_appsw_pane_t1

0xe617,	// (0x00039e28) grid_highlight_pane_cp019

0xd4f9,	// (0x00038d0a) list_tport_double_graphic_pane_ParamLimits

0xd4f9,	// (0x00038d0a) list_tport_double_graphic_pane

0xf0cc,	// (0x0003a8dd) list_highlight_pane_cp023_ParamLimits

0xf0cc,	// (0x0003a8dd) list_highlight_pane_cp023

0xd506,	// (0x00038d17) list_tport_double_graphic_pane_g1_ParamLimits

0xd506,	// (0x00038d17) list_tport_double_graphic_pane_g1

0xd513,	// (0x00038d24) list_tport_double_graphic_pane_t1_ParamLimits

0xd513,	// (0x00038d24) list_tport_double_graphic_pane_t1

0xd528,	// (0x00038d39) list_tport_double_graphic_pane_t2_ParamLimits

0xd528,	// (0x00038d39) list_tport_double_graphic_pane_t2

0x0001,

0xfdc0,	// (0x0003b5d1) list_tport_double_graphic_pane_t_ParamLimits

0xfdc0,	// (0x0003b5d1) list_tport_double_graphic_pane_t

0xe617,	// (0x00039e28) main_cale_note_pane

0xbc04,	// (0x00037415) cell_vitu2_function_top_wide_pane_cp01_ParamLimits

0xbc04,	// (0x00037415) cell_vitu2_function_top_wide_pane_cp01

0xd0f1,	// (0x00038902) wait_bar_pane_cp05_ParamLimits

0xe617,	// (0x00039e28) listscroll_cmail_pane

0x549e,	// (0x00030caf) list_cmail_pane

0xd53a,	// (0x00038d4b) list_cmail_body_pane

0xd53a,	// (0x00038d4b) list_single_cmail_header_caption_pane

0xd552,	// (0x00038d63) list_single_cmail_header_detail_pane_ParamLimits

0xd552,	// (0x00038d63) list_single_cmail_header_detail_pane

0x54d9,	// (0x00030cea) list_single_cmail_header_caption_pane_t1

0x7091,	// (0x000328a2) list_single_cmail_header_detail_pane_g1_ParamLimits

0x7091,	// (0x000328a2) list_single_cmail_header_detail_pane_g1

0x6402,	// (0x00031c13) list_single_cmail_header_detail_pane_g2_ParamLimits

0x6402,	// (0x00031c13) list_single_cmail_header_detail_pane_g2

0x0002,

0xfdc5,	// (0x0003b5d6) list_single_cmail_header_detail_pane_g_ParamLimits

0xfdc5,	// (0x0003b5d6) list_single_cmail_header_detail_pane_g

0x70a7,	// (0x000328b8) list_single_cmail_header_detail_pane_t1_ParamLimits

0x70a7,	// (0x000328b8) list_single_cmail_header_detail_pane_t1

0x70f3,	// (0x00032904) list_single_cmail_header_editor_pane_bg_ParamLimits

0x70f3,	// (0x00032904) list_single_cmail_header_editor_pane_bg

0x554c,	// (0x00030d5d) list_cmail_body_pane_g1

0x5555,	// (0x00030d66) list_cmail_body_pane_t1

0x3fd2,	// (0x0002f7e3) list_single_cmail_header_editor_pane_bg_g1

0x1030,	// (0x0002c841) list_single_cmail_header_editor_pane_bg_g1_copy1

0x3fe2,	// (0x0002f7f3) list_single_cmail_header_editor_pane_bg_g1_copy2

0x3fda,	// (0x0002f7eb) list_single_cmail_header_editor_pane_bg_g1_copy3

0x4263,	// (0x0002fa74) list_single_cmail_header_editor_pane_bg_g1_copy4

0x4002,	// (0x0002f813) list_single_cmail_header_editor_pane_bg_g1_copy4_copy1

0x3ff2,	// (0x0002f803) list_single_cmail_header_editor_pane_bg_g1_copy4_copy2

0x3ffa,	// (0x0002f80b) list_single_cmail_header_editor_pane_bg_g1_copy4_copy3

0x1010,	// (0x0002c821) list_single_cmail_header_editor_pane_bg_g1_copy4_copy3_copy1

0xd57c,	// (0x00038d8d) calenote_gesture_pane_ParamLimits

0xd57c,	// (0x00038d8d) calenote_gesture_pane

0xd594,	// (0x00038da5) calenote_window_pane_ParamLimits

0xd594,	// (0x00038da5) calenote_window_pane

0xd5ac,	// (0x00038dbd) popup_note_window_cp01

0xd5b5,	// (0x00038dc6) calenote_swipe_1_pane_ParamLimits

0xd5b5,	// (0x00038dc6) calenote_swipe_1_pane

0xd406,	// (0x00038c17) calenote_swipe_2_pane_ParamLimits

0xd406,	// (0x00038c17) calenote_swipe_2_pane

0x51f5,	// (0x00030a06) calenote_swipe_1_pane_g1_ParamLimits

0x51f5,	// (0x00030a06) calenote_swipe_1_pane_g1

0x5202,	// (0x00030a13) calenote_swipe_1_pane_g2_ParamLimits

0x5202,	// (0x00030a13) calenote_swipe_1_pane_g2

0x0001,

0xfcf9,	// (0x0003b50a) calenote_swipe_1_pane_g_ParamLimits

0xfcf9,	// (0x0003b50a) calenote_swipe_1_pane_g

0xd5d1,	// (0x00038de2) calenote_swipe_1_pane_t1_ParamLimits

0xd5d1,	// (0x00038de2) calenote_swipe_1_pane_t1

0x51f5,	// (0x00030a06) calenote_swipe_2_pane_g1_ParamLimits

0x51f5,	// (0x00030a06) calenote_swipe_2_pane_g1

0xd5f0,	// (0x00038e01) calenote_swipe_2_pane_g2_ParamLimits

0xd5f0,	// (0x00038e01) calenote_swipe_2_pane_g2

0x0001,

0xfdd1,	// (0x0003b5e2) calenote_swipe_2_pane_g_ParamLimits

0xfdd1,	// (0x0003b5e2) calenote_swipe_2_pane_g

0xd5fc,	// (0x00038e0d) calenote_swipe_2_pane_t1_ParamLimits

0xd5fc,	// (0x00038e0d) calenote_swipe_2_pane_t1

0xe617,	// (0x00039e28) main_mup_navstr_pane

0xaae5,	// (0x000362f6) main_mup3_pane_t7_ParamLimits

0xaae5,	// (0x000362f6) main_mup3_pane_t7

0xb46f,	// (0x00036c80) main_mp4_pane_g6_ParamLimits

0xb46f,	// (0x00036c80) main_mp4_pane_g6

0xb7a3,	// (0x00036fb4) main_image3_pane_t4_ParamLimits

0xb7a3,	// (0x00036fb4) main_image3_pane_t4

0xd623,	// (0x00038e34) popup_navstr_preview_pane_ParamLimits

0xd623,	// (0x00038e34) popup_navstr_preview_pane

0xd62f,	// (0x00038e40) scroll_navstr_pane_ParamLimits

0xd62f,	// (0x00038e40) scroll_navstr_pane

0xe617,	// (0x00039e28) bg_popup_preview_window_pane_cp04

0xd63b,	// (0x00038e4c) popup_navstr_preview_pane_t1

0xd649,	// (0x00038e5a) scroll_navstr_pane_g1_ParamLimits

0xd649,	// (0x00038e5a) scroll_navstr_pane_g1

0xd656,	// (0x00038e67) scroll_navstr_pane_t1_ParamLimits

0xd656,	// (0x00038e67) scroll_navstr_pane_t1

0xd5c8,	// (0x00038dd9) bg_button_pane_cp014

0xd5c8,	// (0x00038dd9) bg_button_pane_cp030

0x6b77,	// (0x00032388) list_double_fisheye_pane_g4_ParamLimits

0x6b77,	// (0x00032388) list_double_fisheye_pane_g4

0x6b83,	// (0x00032394) list_double_fisheye_pane_g5_ParamLimits

0x6b83,	// (0x00032394) list_double_fisheye_pane_g5

0x54ae,	// (0x00030cbf) sp_fs_scroll_pane_cp03

0x52f4,	// (0x00030b05) main_sp_fs_ctrlbar_pane_g1_ParamLimits

0x5300,	// (0x00030b11) main_sp_fs_ctrlbar_pane_g2_ParamLimits

0xfd16,	// (0x0003b527) main_sp_fs_ctrlbar_pane_g_ParamLimits

0x530c,	// (0x00030b1d) main_sp_fs_ctrlbar_pane_t1_ParamLimits

0x54a6,	// (0x00030cb7) sp_fs_scroll_pane_cp02

0xeeb4,	// (0x0003a6c5) popup_sp_fs_calendar_preview_list_single_pane_ParamLimits

0xeeb4,	// (0x0003a6c5) popup_sp_fs_calendar_preview_list_single_pane

0xe617,	// (0x00039e28) main_cam6_pano_pane

0xf0cc,	// (0x0003a8dd) main_mup3_pane_ParamLimits

0xe617,	// (0x00039e28) main_phacti_pane

0xcfe4,	// (0x000387f5) bg_button_pane_cp11

0xcffc,	// (0x0003880d) main_mobtv_info_pane_g2_ParamLimits

0xcffc,	// (0x0003880d) main_mobtv_info_pane_g2

0x0001,

0xfc76,	// (0x0003b487) main_mobtv_info_pane_g_ParamLimits

0xfc76,	// (0x0003b487) main_mobtv_info_pane_g

0xd188,	// (0x00038999) sc_clock_pane_t5_ParamLimits

0xd188,	// (0x00038999) sc_clock_pane_t5

0xd212,	// (0x00038a23) main_radioblah_pane_g1_ParamLimits

0x5138,	// (0x00030949) main_radioblah_pane_t3_ParamLimits

0x5138,	// (0x00030949) main_radioblah_pane_t3

0x5150,	// (0x00030961) main_radioblah_pane_t4_ParamLimits

0x5150,	// (0x00030961) main_radioblah_pane_t4

0xd230,	// (0x00038a41) main_radioblah_text_pane_ParamLimits

0xd230,	// (0x00038a41) main_radioblah_text_pane

0xd23d,	// (0x00038a4e) main_radioblah_info_pane_g1_ParamLimits

0xd2ca,	// (0x00038adb) main_radioblah_info_pane_t4_ParamLimits

0xd2ca,	// (0x00038adb) main_radioblah_info_pane_t4

0xf0cc,	// (0x0003a8dd) main_sp_fs_calendar_pane

0xd668,	// (0x00038e79) main_phacti_pane_g1

0xd679,	// (0x00038e8a) phacti_note_pane_ParamLimits

0xd679,	// (0x00038e8a) phacti_note_pane

0xd68d,	// (0x00038e9e) phacti_term_pane_ParamLimits

0xd68d,	// (0x00038e9e) phacti_term_pane

0xd6a2,	// (0x00038eb3) phacti_note_pane_t1_ParamLimits

0xd6a2,	// (0x00038eb3) phacti_note_pane_t1

0x7105,	// (0x00032916) phacti_term_pane_g1

0x710d,	// (0x0003291e) phacti_term_pane_t1_ParamLimits

0x710d,	// (0x0003291e) phacti_term_pane_t1

0xd6b9,	// (0x00038eca) popup_sp_fs_calendar_preview_list_single_pane_g1

0xd6c1,	// (0x00038ed2) popup_sp_fs_calendar_preview_list_single_pane_g2

0x0001,

0xfddb,	// (0x0003b5ec) popup_sp_fs_calendar_preview_list_single_pane_g

0xd6c9,	// (0x00038eda) popup_sp_fs_calendar_preview_list_single_pane_t1_ParamLimits

0xd6c9,	// (0x00038eda) popup_sp_fs_calendar_preview_list_single_pane_t1

0xd6df,	// (0x00038ef0) aid_popup_sp_fs_bg_corner_pane

0x32c6,	// (0x0002ead7) popup_sp_fs_calendar_preview_bg_pane_g1

0xe617,	// (0x00039e28) popup_sp_fs_calendar_preview_bg_pane

0xd6e7,	// (0x00038ef8) popup_sp_fs_calendar_preview_list_pane

0xf0cc,	// (0x0003a8dd) bg_main_sp_fs_cale_pane_ParamLimits

0xf0cc,	// (0x0003a8dd) bg_main_sp_fs_cale_pane

0x7137,	// (0x00032948) listscroll_cale_mrui_pane_ParamLimits

0x7137,	// (0x00032948) listscroll_cale_mrui_pane

0x714b,	// (0x0003295c) listscroll_sp_fs_schedule_track_pane

0x7154,	// (0x00032965) main_sp_fs_ctrlbar_pane_cp01_ParamLimits

0x7154,	// (0x00032965) main_sp_fs_ctrlbar_pane_cp01

0xd716,	// (0x00038f27) main_sp_fs_ribbon_pane

0x7165,	// (0x00032976) popup_sp_fs_cale_preview_window

0xd71e,	// (0x00038f2f) list_single_sp_fs_schedule_track_pane_ParamLimits

0xd71e,	// (0x00038f2f) list_single_sp_fs_schedule_track_pane

0x76a9,	// (0x00032eba) bg_sp_fs_highlight_list_pane_cp03_ParamLimits

0x76a9,	// (0x00032eba) bg_sp_fs_highlight_list_pane_cp03

0xd733,	// (0x00038f44) list_single_sp_fs_schedule_track_pane_g1_ParamLimits

0xd733,	// (0x00038f44) list_single_sp_fs_schedule_track_pane_g1

0xd73f,	// (0x00038f50) list_single_sp_fs_schedule_track_pane_g2_ParamLimits

0xd73f,	// (0x00038f50) list_single_sp_fs_schedule_track_pane_g2

0x0001,

0xfde0,	// (0x0003b5f1) list_single_sp_fs_schedule_track_pane_g_ParamLimits

0xfde0,	// (0x0003b5f1) list_single_sp_fs_schedule_track_pane_g

0xd74b,	// (0x00038f5c) list_single_sp_fs_schedule_track_pane_t1_ParamLimits

0xd74b,	// (0x00038f5c) list_single_sp_fs_schedule_track_pane_t1

0xd763,	// (0x00038f74) sp_fs_schedule_track_pane_ParamLimits

0xd763,	// (0x00038f74) sp_fs_schedule_track_pane

0xd773,	// (0x00038f84) sp_fs_schedule_track_pane_g1

0xd77b,	// (0x00038f8c) sp_fs_schedule_track_pane_g2

0xd783,	// (0x00038f94) sp_fs_schedule_track_pane_g3

0xd78b,	// (0x00038f9c) sp_fs_schedule_track_pane_g4

0xd793,	// (0x00038fa4) sp_fs_schedule_track_pane_g5

0x0004,

0xfde5,	// (0x0003b5f6) sp_fs_schedule_track_pane_g

0x3fd2,	// (0x0002f7e3) bg_sp_fs_schedule_viewer_highlight_g1

0x1030,	// (0x0002c841) bg_sp_fs_schedule_viewer_highlight_g2

0x3fda,	// (0x0002f7eb) bg_sp_fs_schedule_viewer_highlight_g3

0x3fe2,	// (0x0002f7f3) bg_sp_fs_schedule_viewer_highlight_g4

0x4263,	// (0x0002fa74) bg_sp_fs_schedule_viewer_highlight_g5

0x3ff2,	// (0x0002f803) bg_sp_fs_schedule_viewer_highlight_g6

0x3ffa,	// (0x0002f80b) bg_sp_fs_schedule_viewer_highlight_g7

0x4002,	// (0x0002f813) bg_sp_fs_schedule_viewer_highlight_g8

0x1010,	// (0x0002c821) bg_sp_fs_schedule_viewer_highlight_g9

0x0008,

0xfdf0,	// (0x0003b601) bg_sp_fs_schedule_viewer_highlight_g

0xe617,	// (0x00039e28) bg_main_sp_fs_ribbon_pane

0xb98e,	// (0x0003719f) main_sp_fs_ribbon_pane_g1

0xd79b,	// (0x00038fac) main_sp_fs_ribbon_pane_t1

0xd7aa,	// (0x00038fbb) main_sp_fs_ribbon_pane_t2

0xd7b9,	// (0x00038fca) main_sp_fs_ribbon_pane_t3

0x0002,

0xfe03,	// (0x0003b614) main_sp_fs_ribbon_pane_t

0xd7c8,	// (0x00038fd9) main_sp_fs_ribbon_scheduler_pane

0xd7d0,	// (0x00038fe1) bg_main_sp_fs_ribbon_pane_g1

0xd7d9,	// (0x00038fea) bg_main_sp_fs_ribbon_pane_g2

0xd7e2,	// (0x00038ff3) bg_main_sp_fs_ribbon_pane_g3

0x0002,

0xfe0a,	// (0x0003b61b) bg_main_sp_fs_ribbon_pane_g

0xd7ea,	// (0x00038ffb) main_sp_fs_ribbon_scheduler_pane_g1

0xd7f3,	// (0x00039004) main_sp_fs_ribbon_scheduler_pane_g2

0xd7fc,	// (0x0003900d) main_sp_fs_ribbon_scheduler_pane_g3

0x0002,

0xfe11,	// (0x0003b622) main_sp_fs_ribbon_scheduler_pane_g

0x51aa,	// (0x000309bb) list_cale_mrui_pane

0xd805,	// (0x00039016) sp_fs_scroll_pane_cp07_ParamLimits

0xd805,	// (0x00039016) sp_fs_scroll_pane_cp07

0xd81a,	// (0x0003902b) bg_sp_fs_schedule_viewer_highlight_ParamLimits

0xd81a,	// (0x0003902b) bg_sp_fs_schedule_viewer_highlight

0xd827,	// (0x00039038) list_single_sp_fs_schedule_track_pane_cp01

0xd82f,	// (0x00039040) list_sp_fs_schedule_track_pane

0xd837,	// (0x00039048) sp_fs_scroll_pane_cp06_ParamLimits

0xd837,	// (0x00039048) sp_fs_scroll_pane_cp06

0x32c6,	// (0x0002ead7) bgmain_sp_fs_calendar_pane_g1

0x7174,	// (0x00032985) list_single_cale_mrui_pane_ParamLimits

0x7174,	// (0x00032985) list_single_cale_mrui_pane

0x719a,	// (0x000329ab) list_single_cale_mrui_row_pane_ParamLimits

0x719a,	// (0x000329ab) list_single_cale_mrui_row_pane

0x71a7,	// (0x000329b8) list_single_cale_mrui_row_pane_g1_ParamLimits

0x71a7,	// (0x000329b8) list_single_cale_mrui_row_pane_g1

0x71df,	// (0x000329f0) list_single_cale_mrui_row_pane_t1_ParamLimits

0x71df,	// (0x000329f0) list_single_cale_mrui_row_pane_t1

0x71f1,	// (0x00032a02) list_single_cale_mrui_row_pane_t2_ParamLimits

0x71f1,	// (0x00032a02) list_single_cale_mrui_row_pane_t2

0x7257,	// (0x00032a68) list_single_cale_mrui_row_pane_t3_ParamLimits

0x7257,	// (0x00032a68) list_single_cale_mrui_row_pane_t3

0x7286,	// (0x00032a97) list_single_cale_mrui_row_pane_t4_ParamLimits

0x7286,	// (0x00032a97) list_single_cale_mrui_row_pane_t4

0x0003,

0xfe1d,	// (0x0003b62e) list_single_cale_mrui_row_pane_t_ParamLimits

0xfe1d,	// (0x0003b62e) list_single_cale_mrui_row_pane_t

0x72b5,	// (0x00032ac6) list_single_cmail_header_editor_pane_bg_cp01_ParamLimits

0x72b5,	// (0x00032ac6) list_single_cmail_header_editor_pane_bg_cp01

0x72d9,	// (0x00032aea) list_single_cmail_header_editor_pane_bg_cp02_ParamLimits

0x72d9,	// (0x00032aea) list_single_cmail_header_editor_pane_bg_cp02

0xd849,	// (0x0003905a) main_radioblah_text_pane_t1_ParamLimits

0xd849,	// (0x0003905a) main_radioblah_text_pane_t1

0xd862,	// (0x00039073) cam6_indi_pane_cp01

0xd86a,	// (0x0003907b) cam6_mode_pane_cp01

0xd872,	// (0x00039083) cam6_pano_pane

0xd87b,	// (0x0003908c) cam6_zoom_pane_cp01

0xd883,	// (0x00039094) cam6_pano_image_pane

0xd88c,	// (0x0003909d) cam6_pano_pane_g1

0x4eb6,	// (0x000306c7) cam6_pano_pane_g2

0xd895,	// (0x000390a6) cam6_pano_pane_g3

0xd89e,	// (0x000390af) cam6_pano_pane_g4

0x382c,	// (0x0002f03d) cam6_pano_pane_g5

0xd8a7,	// (0x000390b8) cam6_pano_pane_g6

0xd8af,	// (0x000390c0) cam6_pano_pane_g7

0xd8b7,	// (0x000390c8) cam6_pano_pane_g8

0xd8c0,	// (0x000390d1) cam6_pano_pane_g9

0x0008,

0xfe26,	// (0x0003b637) cam6_pano_pane_g

0xe617,	// (0x00039e28) main_browser_tag_pane

0xd61b,	// (0x00038e2c) grid_navstr_albumart_pane

0xd8c9,	// (0x000390da) cell_navstr_albumart_pane_ParamLimits

0xd8c9,	// (0x000390da) cell_navstr_albumart_pane

0x1a64,	// (0x0002d275) cell_navstr_albumart_pane_g1

0x2bae,	// (0x0002e3bf) cell_navstr_albumart_pane_g2

0x2bbe,	// (0x0002e3cf) cell_navstr_albumart_pane_g3

0x2bb6,	// (0x0002e3c7) cell_navstr_albumart_pane_g4

0x0003,

0xfe39,	// (0x0003b64a) cell_navstr_albumart_pane_g

0xd8e0,	// (0x000390f1) bt_list_pane_ParamLimits

0xd8e0,	// (0x000390f1) bt_list_pane

0xd8f5,	// (0x00039106) bt_list_pane_t1

0xd904,	// (0x00039115) bt_list_pane_t2

0x0001,

0xfe42,	// (0x0003b653) bt_list_pane_t

0xe617,	// (0x00039e28) main_cale_prevew_pane

0xd913,	// (0x00039124) popup_cale_preview_window_ParamLimits

0xd913,	// (0x00039124) popup_cale_preview_window

0xf0cc,	// (0x0003a8dd) bg_popup_preview_window_pane_cp05_ParamLimits

0xf0cc,	// (0x0003a8dd) bg_popup_preview_window_pane_cp05

0xd928,	// (0x00039139) list_cale_preview_pane_ParamLimits

0xd928,	// (0x00039139) list_cale_preview_pane

0xd934,	// (0x00039145) list_double_cale_preview_pane_ParamLimits

0xd934,	// (0x00039145) list_double_cale_preview_pane

0xd945,	// (0x00039156) list_single_cale_preview_pane_ParamLimits

0xd945,	// (0x00039156) list_single_cale_preview_pane

0xd959,	// (0x0003916a) list_single_cale_preview_pane_g1

0xd961,	// (0x00039172) list_single_cale_preview_pane_t1_ParamLimits

0xd961,	// (0x00039172) list_single_cale_preview_pane_t1

0xd976,	// (0x00039187) list_double_cale_preview_pane_g1

0xd97e,	// (0x0003918f) list_double_cale_preview_pane_t1_ParamLimits

0xd97e,	// (0x0003918f) list_double_cale_preview_pane_t1

0xd993,	// (0x000391a4) list_double_cale_preview_pane_t2_ParamLimits

0xd993,	// (0x000391a4) list_double_cale_preview_pane_t2

0x0001,

0xfe47,	// (0x0003b658) list_double_cale_preview_pane_t_ParamLimits

0xfe47,	// (0x0003b658) list_double_cale_preview_pane_t

0xe617,	// (0x00039e28) main_ezdial_pane

0xf0cc,	// (0x0003a8dd) main_sp_fs_email_pane_ParamLimits

0xd41e,	// (0x00038c2f) cmail_ddmenu_btn01_pane_ParamLimits

0xd41e,	// (0x00038c2f) cmail_ddmenu_btn01_pane

0xd43b,	// (0x00038c4c) cmail_ddmenu_btn02_pane_ParamLimits

0xd43b,	// (0x00038c4c) cmail_ddmenu_btn02_pane

0xd459,	// (0x00038c6a) cmail_ddmenu_btn03_pane_ParamLimits

0xd459,	// (0x00038c6a) cmail_ddmenu_btn03_pane

0x6c26,	// (0x00032437) main_sp_fs_ctrlbar_pane_ParamLimits

0x6c3e,	// (0x0003244f) main_sp_fs_listscroll_pane_te_cp01_ParamLimits

0xd53a,	// (0x00038d4b) list_cmail_body_pane_ParamLimits

0x7089,	// (0x0003289a) bg_button_pane_cp12

0x54fb,	// (0x00030d0c) list_single_cmail_header_detail_pane_g3_ParamLimits

0x54fb,	// (0x00030d0c) list_single_cmail_header_detail_pane_g3

0x70cf,	// (0x000328e0) list_single_cmail_header_detail_pane_t2_ParamLimits

0x70cf,	// (0x000328e0) list_single_cmail_header_detail_pane_t2

0x0001,

0xfdcc,	// (0x0003b5dd) list_single_cmail_header_detail_pane_t_ParamLimits

0xfdcc,	// (0x0003b5dd) list_single_cmail_header_detail_pane_t

0x7122,	// (0x00032933) phacti_term_pane_t2_ParamLimits

0x7122,	// (0x00032933) phacti_term_pane_t2

0x0001,

0xfdd6,	// (0x0003b5e7) phacti_term_pane_t_ParamLimits

0xfdd6,	// (0x0003b5e7) phacti_term_pane_t

0xd9ab,	// (0x000391bc) aid_size_list_single_double

0xd9b7,	// (0x000391c8) popup_ezdial_listscroll_window

0xd9d0,	// (0x000391e1) popup_number_entry_window_cp01

0x18db,	// (0x0002d0ec) bg_popup_call_pane_cp09

0xd9dc,	// (0x000391ed) ezdial_list_pane

0xd9e4,	// (0x000391f5) scroll_pane_cp23

0x30b3,	// (0x0002e8c4) bg_button_pane_cp028_ParamLimits

0x30b3,	// (0x0002e8c4) bg_button_pane_cp028

0xd9ec,	// (0x000391fd) cmail_ddmenu_btn01_pane_g1_ParamLimits

0xd9ec,	// (0x000391fd) cmail_ddmenu_btn01_pane_g1

0xd9fe,	// (0x0003920f) cmail_ddmenu_btn01_pane_g2_ParamLimits

0xd9fe,	// (0x0003920f) cmail_ddmenu_btn01_pane_g2

0x0001,

0xfe4c,	// (0x0003b65d) cmail_ddmenu_btn01_pane_g_ParamLimits

0xfe4c,	// (0x0003b65d) cmail_ddmenu_btn01_pane_g

0xda0a,	// (0x0003921b) cmail_ddmenu_btn01_pane_t1_ParamLimits

0xda0a,	// (0x0003921b) cmail_ddmenu_btn01_pane_t1

0x2dd1,	// (0x0002e5e2) bg_button_pane_cp029_ParamLimits

0x2dd1,	// (0x0002e5e2) bg_button_pane_cp029

0xd9fe,	// (0x0003920f) cmail_ddmenu_btn02_pane_g1_ParamLimits

0xd9fe,	// (0x0003920f) cmail_ddmenu_btn02_pane_g1

0xda2b,	// (0x0003923c) cmail_ddmenu_btn02_pane_t1_ParamLimits

0xda2b,	// (0x0003923c) cmail_ddmenu_btn02_pane_t1

0x76a9,	// (0x00032eba) bg_button_pane_cp031_ParamLimits

0x76a9,	// (0x00032eba) bg_button_pane_cp031

0xd9fe,	// (0x0003920f) cmail_ddmenu_btn03_pane_g1_ParamLimits

0xd9fe,	// (0x0003920f) cmail_ddmenu_btn03_pane_g1

0xda2b,	// (0x0003923c) cmail_ddmenu_btn03_pane_t1_ParamLimits

0xda2b,	// (0x0003923c) cmail_ddmenu_btn03_pane_t1

0xb660,	// (0x00036e71) cell_dialer2_keypad_pane_t1_ParamLimits

0xb67a,	// (0x00036e8b) cell_dialer2_keypad_pane_t1_copy1_ParamLimits

0xb67a,	// (0x00036e8b) cell_dialer2_keypad_pane_t1_copy1

0xceab,	// (0x000386bc) ncimui_group_button_pane

0xf0cc,	// (0x0003a8dd) main_sp_fs_calendar_pane_ParamLimits

0xd53a,	// (0x00038d4b) list_single_cmail_header_caption_pane_ParamLimits

0x6a1f,	// (0x00032230) aid_recal_txt_sm_pane

0xe617,	// (0x00039e28) mian_recal_day_pane

0x7165,	// (0x00032976) popup_sp_fs_cale_preview_window_ParamLimits

0xe617,	// (0x00039e28) list_recal_day_pane

0x7300,	// (0x00032b11) list_single_recal_day_pane_ParamLimits

0x7300,	// (0x00032b11) list_single_recal_day_pane

0xda5f,	// (0x00039270) list_single_recal_day_pane_g1_ParamLimits

0xda5f,	// (0x00039270) list_single_recal_day_pane_g1

0x7312,	// (0x00032b23) list_single_recal_day_pane_g2_ParamLimits

0x7312,	// (0x00032b23) list_single_recal_day_pane_g2

0x731e,	// (0x00032b2f) list_single_recal_day_pane_g3_ParamLimits

0x731e,	// (0x00032b2f) list_single_recal_day_pane_g3

0x732a,	// (0x00032b3b) list_single_recal_day_pane_g4_ParamLimits

0x732a,	// (0x00032b3b) list_single_recal_day_pane_g4

0x7336,	// (0x00032b47) list_single_recal_day_pane_g5_ParamLimits

0x7336,	// (0x00032b47) list_single_recal_day_pane_g5

0x7342,	// (0x00032b53) list_single_recal_day_pane_g6_ParamLimits

0x7342,	// (0x00032b53) list_single_recal_day_pane_g6

0x0005,

0xfe5b,	// (0x0003b66c) list_single_recal_day_pane_g_ParamLimits

0xfe5b,	// (0x0003b66c) list_single_recal_day_pane_g

0x734e,	// (0x00032b5f) list_single_recal_day_pane_t1

0x735c,	// (0x00032b6d) list_single_recal_day_pane_t2

0x0001,

0xfe68,	// (0x0003b679) list_single_recal_day_pane_t

0xda6b,	// (0x0003927c) ncimui_query_button_pane_ParamLimits

0xda6b,	// (0x0003927c) ncimui_query_button_pane

0xda7b,	// (0x0003928c) ncimui_query_button_pane_t1_ParamLimits

0xda7b,	// (0x0003928c) ncimui_query_button_pane_t1

0xda8e,	// (0x0003929f) ncimui_query_button_pane_t2_ParamLimits

0xda8e,	// (0x0003929f) ncimui_query_button_pane_t2

0x0001,

0xfe6d,	// (0x0003b67e) ncimui_query_button_pane_t_ParamLimits

0xfe6d,	// (0x0003b67e) ncimui_query_button_pane_t

0xdaa1,	// (0x000392b2) query_button_pane_ParamLimits

0xdaa1,	// (0x000392b2) query_button_pane

0xe617,	// (0x00039e28) bg_button_pane_cp0028

0xdaae,	// (0x000392bf) query_button_pane_t1

0x9c8c,	// (0x0003549d) main_tport_pane_ParamLimits

0xd485,	// (0x00038c96) bg_popup_window_pane_cp01_ParamLimits

0xd485,	// (0x00038c96) bg_popup_window_pane_cp01

0xd492,	// (0x00038ca3) heading_pane_cp08_ParamLimits

0xd492,	// (0x00038ca3) heading_pane_cp08

0xd49e,	// (0x00038caf) heading_pane_cp07_ParamLimits

0xd49e,	// (0x00038caf) heading_pane_cp07

0x5480,	// (0x00030c91) cell_tport_appsw_pane_g2

0x0002,

0xfdb9,	// (0x0003b5ca) cell_tport_appsw_pane_g

0x661c,	// (0x00031e2d) input_candi_list_open_g1

0x1230,	// (0x0002ca41) list_cale_time_pane_g6_ParamLimits

0x1230,	// (0x0002ca41) list_cale_time_pane_g6

0xa635,	// (0x00035e46) aid_size_touch_calib_1_ParamLimits

0xa635,	// (0x00035e46) aid_size_touch_calib_1

0xa641,	// (0x00035e52) aid_size_touch_calib_2_ParamLimits

0xa641,	// (0x00035e52) aid_size_touch_calib_2

0xa64d,	// (0x00035e5e) aid_size_touch_calib_3_ParamLimits

0xa64d,	// (0x00035e5e) aid_size_touch_calib_3

0xa65b,	// (0x00035e6c) aid_size_touch_calib_4_ParamLimits

0xa65b,	// (0x00035e6c) aid_size_touch_calib_4

0xa669,	// (0x00035e7a) main_touch_calib_button_group_pane_ParamLimits

0xa669,	// (0x00035e7a) main_touch_calib_button_group_pane

0xa676,	// (0x00035e87) main_touch_calib_pane_g1_ParamLimits

0xa682,	// (0x00035e93) main_touch_calib_pane_g2_ParamLimits

0xa68e,	// (0x00035e9f) main_touch_calib_pane_g3_ParamLimits

0xa69a,	// (0x00035eab) main_touch_calib_pane_g4_ParamLimits

0xf797,	// (0x0003afa8) main_touch_calib_pane_g_ParamLimits

0xa6a6,	// (0x00035eb7) main_touch_calib_pane_t1_ParamLimits

0xa6bb,	// (0x00035ecc) main_touch_calib_pane_t2_ParamLimits

0xa6d0,	// (0x00035ee1) main_touch_calib_pane_t3_ParamLimits

0xa6e2,	// (0x00035ef3) main_touch_calib_pane_t4_ParamLimits

0xa6f4,	// (0x00035f05) main_touch_calib_pane_t5_ParamLimits

0xf7a0,	// (0x0003afb1) main_touch_calib_pane_t_ParamLimits

0x3657,	// (0x0002ee68) list_single_fp_cale_pane_g3_ParamLimits

0x3657,	// (0x0002ee68) list_single_fp_cale_pane_g3

0xf0cc,	// (0x0003a8dd) bg_button_pane_cp012_ParamLimits

0xf0cc,	// (0x0003a8dd) bg_vkb2_func_pane_cp03_ParamLimits

0xc30f,	// (0x00037b20) cell_vitu2_function_top_pane_g1_ParamLimits

0xf0cc,	// (0x0003a8dd) bg_vkb2_func_pane_cp04_ParamLimits

0xce5e,	// (0x0003866f) main_ncimui_button_group_pane_ParamLimits

0xce5e,	// (0x0003866f) main_ncimui_button_group_pane

0xce99,	// (0x000386aa) main_ncimui_pane_t3_ParamLimits

0xce99,	// (0x000386aa) main_ncimui_pane_t3

0xd670,	// (0x00038e81) phacti_button_group_pane

0xd9ab,	// (0x000391bc) aid_size_list_single_double_ParamLimits

0xd9b7,	// (0x000391c8) popup_ezdial_listscroll_window_ParamLimits

0xd9d0,	// (0x000391e1) popup_number_entry_window_cp01_ParamLimits

0xdabc,	// (0x000392cd) phacti_button_pane_ParamLimits

0xdabc,	// (0x000392cd) phacti_button_pane

0xe617,	// (0x00039e28) bg_button_pane_cp14

0xdacb,	// (0x000392dc) phacti_button_pane_t1

0xdad9,	// (0x000392ea) main_touch_calib_button_pane_ParamLimits

0xdad9,	// (0x000392ea) main_touch_calib_button_pane

0xed9d,	// (0x0003a5ae) bg_button_pane_cp18_ParamLimits

0xed9d,	// (0x0003a5ae) bg_button_pane_cp18

0xdae9,	// (0x000392fa) main_touch_calib_button_pane_t1_ParamLimits

0xdae9,	// (0x000392fa) main_touch_calib_button_pane_t1

0xdaff,	// (0x00039310) main_touch_calib_button_pane_t2_ParamLimits

0xdaff,	// (0x00039310) main_touch_calib_button_pane_t2

0x0001,

0xfe72,	// (0x0003b683) main_touch_calib_button_pane_t_ParamLimits

0xfe72,	// (0x0003b683) main_touch_calib_button_pane_t

0xe617,	// (0x00039e28) cell_ncimui_button_pane

0xe617,	// (0x00039e28) bg_button_pane_cp032

0xdb1d,	// (0x0003932e) cell_ncimui_button_pane_t1

0xb6cc,	// (0x00036edd) image3_infobar_pane_ParamLimits

0xb6cc,	// (0x00036edd) image3_infobar_pane

0xd1a8,	// (0x000389b9) fs_bigclock_status_pane_ParamLimits

0xd1a8,	// (0x000389b9) fs_bigclock_status_pane

0xd1b5,	// (0x000389c6) main_fs_bigclock_clock_pane_ParamLimits

0xd1b5,	// (0x000389c6) main_fs_bigclock_clock_pane

0xd1c5,	// (0x000389d6) main_fs_bigclock_indi_pane_ParamLimits

0xd1c5,	// (0x000389d6) main_fs_bigclock_indi_pane

0xd1ea,	// (0x000389fb) main_fs_bigclock_swipe_pane_ParamLimits

0xd1ea,	// (0x000389fb) main_fs_bigclock_swipe_pane

0xe617,	// (0x00039e28) main_fs_clock_dumped_data

0x4fc3,	// (0x000307d4) list_single_fs_bigclock_indicator_pane_g1_ParamLimits

0x4fc3,	// (0x000307d4) list_single_fs_bigclock_indicator_pane_g1

0x4fdd,	// (0x000307ee) list_single_fs_bigclock_indicator_pane_g2_ParamLimits

0x4fdd,	// (0x000307ee) list_single_fs_bigclock_indicator_pane_g2

0x4ff7,	// (0x00030808) list_single_fs_bigclock_indicator_pane_g3_ParamLimits

0x4ff7,	// (0x00030808) list_single_fs_bigclock_indicator_pane_g3

0x5011,	// (0x00030822) list_single_fs_bigclock_indicator_pane_g4_ParamLimits

0x5011,	// (0x00030822) list_single_fs_bigclock_indicator_pane_g4

0x0004,

0xfcaa,	// (0x0003b4bb) list_single_fs_bigclock_indicator_pane_g_ParamLimits

0xfcaa,	// (0x0003b4bb) list_single_fs_bigclock_indicator_pane_g

0x5035,	// (0x00030846) list_single_fs_bigclock_indicator_pane_t1_ParamLimits

0x5035,	// (0x00030846) list_single_fs_bigclock_indicator_pane_t1

0x505d,	// (0x0003086e) list_single_fs_bigclock_indicator_pane_t2_ParamLimits

0x505d,	// (0x0003086e) list_single_fs_bigclock_indicator_pane_t2

0x5085,	// (0x00030896) list_single_fs_bigclock_indicator_pane_t3_ParamLimits

0x5085,	// (0x00030896) list_single_fs_bigclock_indicator_pane_t3

0x50ad,	// (0x000308be) list_single_fs_bigclock_indicator_pane_t4_ParamLimits

0x50ad,	// (0x000308be) list_single_fs_bigclock_indicator_pane_t4

0x0004,

0xfcb5,	// (0x0003b4c6) list_single_fs_bigclock_indicator_pane_t_ParamLimits

0xfcb5,	// (0x0003b4c6) list_single_fs_bigclock_indicator_pane_t

0xdb2b,	// (0x0003933c) image3_infobar_fav_pane_ParamLimits

0xdb2b,	// (0x0003933c) image3_infobar_fav_pane

0xdb3b,	// (0x0003934c) image3_infobar_loc_pane_ParamLimits

0xdb3b,	// (0x0003934c) image3_infobar_loc_pane

0xdb4f,	// (0x00039360) image3_infobar_time_pane_ParamLimits

0xdb4f,	// (0x00039360) image3_infobar_time_pane

0x32c6,	// (0x0002ead7) image3_infobar_time_pane_g1

0xdb5f,	// (0x00039370) image3_infobar_time_pane_t1

0x32c6,	// (0x0002ead7) image3_infobar_loc_pane_g1

0xdb6d,	// (0x0003937e) image3_infobar_loc_pane_g2

0x0001,

0xfe77,	// (0x0003b688) image3_infobar_loc_pane_g

0xdb75,	// (0x00039386) image3_infobar_loc_pane_t1

0x32c6,	// (0x0002ead7) image3_infobar_fav_pane_g1

0xdb83,	// (0x00039394) image3_infobar_fav_pane_g2

0x0001,

0xfe7c,	// (0x0003b68d) image3_infobar_fav_pane_g

0xdb8b,	// (0x0003939c) fs_bigclock_status_battery_pane

0xdb94,	// (0x000393a5) fs_bigclock_status_signal_pane

0xdb9d,	// (0x000393ae) fs_bigclock_status_title_pane

0xdba6,	// (0x000393b7) fs_bigclock_status_signal_pane_g1

0xdbaf,	// (0x000393c0) fs_bigclock_status_signal_pane_g2

0x0001,

0xfe81,	// (0x0003b692) fs_bigclock_status_signal_pane_g

0xdbb7,	// (0x000393c8) fs_bigclock_status_battery_pane_g1

0xdbc0,	// (0x000393d1) fs_bigclock_status_battery_pane_g2

0x0001,

0xfe86,	// (0x0003b697) fs_bigclock_status_battery_pane_g

0xdbc8,	// (0x000393d9) fs_bigclock_status_title_pane_t1

0x32c6,	// (0x0002ead7) main_fs_bigclock_clock_pane_g1

0xdbd6,	// (0x000393e7) main_fs_bigclock_clock_pane_g2

0xdbd6,	// (0x000393e7) main_fs_bigclock_clock_pane_g3

0xdbd6,	// (0x000393e7) main_fs_bigclock_clock_pane_g4

0x0003,

0xfe8b,	// (0x0003b69c) main_fs_bigclock_clock_pane_g

0xdbde,	// (0x000393ef) main_fs_bigclock_clock_pane_t1

0xdbec,	// (0x000393fd) main_fs_bigclock_clock_pane_t2

0x0001,

0xfe94,	// (0x0003b6a5) main_fs_bigclock_clock_pane_t

0xdbfb,	// (0x0003940c) list_single_fs_bigclock_indicator_pane_ParamLimits

0xdbfb,	// (0x0003940c) list_single_fs_bigclock_indicator_pane

0xdc0c,	// (0x0003941d) list_single_fs_bigclock_pane_ParamLimits

0xdc0c,	// (0x0003941d) list_single_fs_bigclock_pane

0xdc73,	// (0x00039484) main_fs_bigclock_indicator_pane_t1

0xdc82,	// (0x00039493) list_single_fs_bigclock_pane_g1

0xdc8a,	// (0x0003949b) list_single_fs_bigclock_pane_t1

0x32c6,	// (0x0002ead7) main_fs_bigclock_swipe_pane_g1

0xdcc8,	// (0x000394d9) main_fs_bigclock_swipe_pane_g2

0x0001,

0xfea5,	// (0x0003b6b6) main_fs_bigclock_swipe_pane_g

0xdcd0,	// (0x000394e1) main_fs_bigclock_swipe_pane_t1_ParamLimits

0xdcd0,	// (0x000394e1) main_fs_bigclock_swipe_pane_t1

0x8e9e,	// (0x000346af) call_type_pane_ParamLimits

0xe617,	// (0x00039e28) main_btmg_pane

0x71d3,	// (0x000329e4) list_single_cale_mrui_row_pane_g2_ParamLimits

0x71d3,	// (0x000329e4) list_single_cale_mrui_row_pane_g2

0x0001,

0xfe18,	// (0x0003b629) list_single_cale_mrui_row_pane_g_ParamLimits

0xfe18,	// (0x0003b629) list_single_cale_mrui_row_pane_g

0xda4f,	// (0x00039260) list_recal_vselct_arw_lo_pane

0xda57,	// (0x00039268) list_recal_vselct_arw_up_pane

0x72f7,	// (0x00032b08) list_recal_vselct_pane

0xdced,	// (0x000394fe) btmg_button_pane

0xdcf5,	// (0x00039506) main_btmg_pane_g1

0xe617,	// (0x00039e28) bg_button_pane_cp044

0xdcfd,	// (0x0003950e) btmg_button_pane_t1

0x2dc9,	// (0x0002e5da) aid_listscroll_gen

0xf0cc,	// (0x0003a8dd) main_cntbar_detail_pane

0x549e,	// (0x00030caf) list_cmail_folder_pane

0x54ae,	// (0x00030cbf) sp_fs_scroll_pane_cp03_ParamLimits

0xd53a,	// (0x00038d4b) list_single_fs_dyc_pane_cp01_ParamLimits

0xd53a,	// (0x00038d4b) list_single_fs_dyc_pane_cp01

0xdd0b,	// (0x0003951c) aid_size_cmail_indent

0x6a28,	// (0x00032239) list_single_dyc_row_pane_cp01

0xdd2e,	// (0x0003953f) cntbar_detail_list_pane_ParamLimits

0xdd2e,	// (0x0003953f) cntbar_detail_list_pane

0xdd64,	// (0x00039575) main_cntbar_detail_cont_pane_ParamLimits

0xdd64,	// (0x00039575) main_cntbar_detail_cont_pane

0xdd70,	// (0x00039581) scroll_pane_cp032_ParamLimits

0xdd70,	// (0x00039581) scroll_pane_cp032

0xdd7c,	// (0x0003958d) cntbar_detail_list_event_pane_ParamLimits

0xdd7c,	// (0x0003958d) cntbar_detail_list_event_pane

0xdd3a,	// (0x0003954b) cntbar_detail_list_shct_pane

0xdd8c,	// (0x0003959d) aid_list_gen

0xeea2,	// (0x0003a6b3) aid_scroll

0x459b,	// (0x0002fdac) aid_size_touch_scroll_bar

0x466d,	// (0x0002fe7e) aid_list_double

0x736a,	// (0x00032b7b) aid_list_single

0x46bc,	// (0x0002fecd) aid_list_single_lg

0x7373,	// (0x00032b84) aid_list_z_g_a_sm

0x737b,	// (0x00032b8c) aid_list_z_g_d

0x7383,	// (0x00032b94) aid_txt_z_prm

0x7391,	// (0x00032ba2) aid_txt_z_prm_cp01

0x739f,	// (0x00032bb0) aid_txt_z_sec

0xdd95,	// (0x000395a6) main_cntbar_detail_cont_pane_g1_ParamLimits

0xdd95,	// (0x000395a6) main_cntbar_detail_cont_pane_g1

0xdda2,	// (0x000395b3) main_cntbar_detail_cont_pane_g2_ParamLimits

0xdda2,	// (0x000395b3) main_cntbar_detail_cont_pane_g2

0x0001,

0xfeaa,	// (0x0003b6bb) main_cntbar_detail_cont_pane_g_ParamLimits

0xfeaa,	// (0x0003b6bb) main_cntbar_detail_cont_pane_g

0xddae,	// (0x000395bf) main_cntbar_detail_cont_pane_t1

0xddbc,	// (0x000395cd) main_cntbar_detail_cont_pane_t2

0xddca,	// (0x000395db) main_cntbar_detail_cont_pane_t3

0x0002,

0xfeaf,	// (0x0003b6c0) main_cntbar_detail_cont_pane_t

0xddd8,	// (0x000395e9) cell_cntbar_detail_list_shct_pane_ParamLimits

0xddd8,	// (0x000395e9) cell_cntbar_detail_list_shct_pane

0xddea,	// (0x000395fb) cntbar_detail_list_shct_pane_g1

0xddf3,	// (0x00039604) cntbar_detail_list_shct_pane_g2

0x0001,

0xfeb6,	// (0x0003b6c7) cntbar_detail_list_shct_pane_g

0xddfc,	// (0x0003960d) cntbar_detail_list_event_pane_g1_ParamLimits

0xddfc,	// (0x0003960d) cntbar_detail_list_event_pane_g1

0xde08,	// (0x00039619) cntbar_detail_list_event_pane_g2_ParamLimits

0xde08,	// (0x00039619) cntbar_detail_list_event_pane_g2

0x0005,

0xfebb,	// (0x0003b6cc) cntbar_detail_list_event_pane_g_ParamLimits

0xfebb,	// (0x0003b6cc) cntbar_detail_list_event_pane_g

0xde74,	// (0x00039685) cntbar_detail_list_event_pane_t1_ParamLimits

0xde74,	// (0x00039685) cntbar_detail_list_event_pane_t1

0xde89,	// (0x0003969a) cntbar_detail_list_event_pane_t2_ParamLimits

0xde89,	// (0x0003969a) cntbar_detail_list_event_pane_t2

0x0002,

0xfec8,	// (0x0003b6d9) cntbar_detail_list_event_pane_t_ParamLimits

0xfec8,	// (0x0003b6d9) cntbar_detail_list_event_pane_t

0x32c6,	// (0x0002ead7) cell_cntbar_detail_list_shct_pane_g1

0x189a,	// (0x0002d0ab) navi_pane_mv_g3

0xf0cc,	// (0x0003a8dd) main_cntbar_detail_pane_ParamLimits

0xe617,	// (0x00039e28) main_notif_wgt_pane

0xb3ba,	// (0x00036bcb) aid_tch_main_mp4_pane_g4

0xb5e1,	// (0x00036df2) popup_slider_window_cp02

0x72f7,	// (0x00032b08) list_recal_day_event_pane

0xdd14,	// (0x00039525) cntbar_detail_btn_pane_ParamLimits

0xdd14,	// (0x00039525) cntbar_detail_btn_pane

0xdd20,	// (0x00039531) cntbar_detail_btn_pane_cp01_ParamLimits

0xdd20,	// (0x00039531) cntbar_detail_btn_pane_cp01

0xdd3a,	// (0x0003954b) cntbar_detail_list_shct_pane_ParamLimits

0xdd46,	// (0x00039557) cntbar_detail_pane_g1_ParamLimits

0xdd46,	// (0x00039557) cntbar_detail_pane_g1

0xdd52,	// (0x00039563) cntbar_detail_pane_t1_ParamLimits

0xdd52,	// (0x00039563) cntbar_detail_pane_t1

0xde14,	// (0x00039625) cntbar_detail_list_event_pane_g3_ParamLimits

0xde14,	// (0x00039625) cntbar_detail_list_event_pane_g3

0xde2c,	// (0x0003963d) cntbar_detail_list_event_pane_g4_ParamLimits

0xde2c,	// (0x0003963d) cntbar_detail_list_event_pane_g4

0xde44,	// (0x00039655) cntbar_detail_list_event_pane_g5_ParamLimits

0xde44,	// (0x00039655) cntbar_detail_list_event_pane_g5

0xde5c,	// (0x0003966d) cntbar_detail_list_event_pane_g6_ParamLimits

0xde5c,	// (0x0003966d) cntbar_detail_list_event_pane_g6

0xde9e,	// (0x000396af) cntbar_detail_list_event_pane_t3_ParamLimits

0xde9e,	// (0x000396af) cntbar_detail_list_event_pane_t3

0xdeb0,	// (0x000396c1) popup_notif_wgt_window_ParamLimits

0xdeb0,	// (0x000396c1) popup_notif_wgt_window

0xdebe,	// (0x000396cf) popup_submenu_window_cp01_ParamLimits

0xdebe,	// (0x000396cf) popup_submenu_window_cp01

0x18db,	// (0x0002d0ec) bg_popup_window_pane_cp10

0xdeca,	// (0x000396db) listscroll_notif_wgt_pane

0xded2,	// (0x000396e3) list_notif_wgt_window

0xdedb,	// (0x000396ec) scroll_pane_cp033

0xdee4,	// (0x000396f5) list_notif_wgt_row_pane_ParamLimits

0xdee4,	// (0x000396f5) list_notif_wgt_row_pane

0xdef6,	// (0x00039707) aid_size_list_notif_wgt_del

0xdeff,	// (0x00039710) list_notif_wgt_row_pane_g1

0xdf07,	// (0x00039718) list_notif_wgt_row_pane_g2

0xdf0f,	// (0x00039720) list_notif_wgt_row_pane_g3

0x0002,

0xfecf,	// (0x0003b6e0) list_notif_wgt_row_pane_g

0xdf18,	// (0x00039729) list_notif_wgt_row_pane_t1

0xdf26,	// (0x00039737) list_notif_wgt_row_pane_t2

0xdf34,	// (0x00039745) list_notif_wgt_row_pane_t3

0x0002,

0xfed6,	// (0x0003b6e7) list_notif_wgt_row_pane_t

0x42a5,	// (0x0002fab6) list_recal_day_event_pane_g1

0xdf42,	// (0x00039753) list_recal_day_event_pane_t1

0xe617,	// (0x00039e28) bg_button_pane_cp045

0xdf51,	// (0x00039762) cntbar_detail_btn_pane_t1

0x2dd1,	// (0x0002e5e2) main_callh_pane_ParamLimits

0x2dd1,	// (0x0002e5e2) main_callh_pane

0xe617,	// (0x00039e28) main_coverflow0_pane

0xe617,	// (0x00039e28) main_wgtman_pane

0xd1fc,	// (0x00038a0d) main_fs_bigclock_unlock_btn_pane_ParamLimits

0xd1fc,	// (0x00038a0d) main_fs_bigclock_unlock_btn_pane

0x5478,	// (0x00030c89) bg_button_pane_cp16

0x5488,	// (0x00030c99) cell_tport_appsw_pane_g3

0xdf5f,	// (0x00039770) cf0_flow_pane_ParamLimits

0xdf5f,	// (0x00039770) cf0_flow_pane

0xdf6e,	// (0x0003977f) listscroll_cf0_pane

0xdf77,	// (0x00039788) main_cf0_pane_g1

0xdf81,	// (0x00039792) main_cf0_pane_t1_ParamLimits

0xdf81,	// (0x00039792) main_cf0_pane_t1

0xdf93,	// (0x000397a4) main_cf0_pane_t2_ParamLimits

0xdf93,	// (0x000397a4) main_cf0_pane_t2

0x0001,

0xfedd,	// (0x0003b6ee) main_cf0_pane_t_ParamLimits

0xfedd,	// (0x0003b6ee) main_cf0_pane_t

0xdfa5,	// (0x000397b6) scroll_pane_cp11

0xdfae,	// (0x000397bf) cf0_flow_pane_g1

0xdfb6,	// (0x000397c7) cf0_flow_pane_g2

0x0001,

0xfee2,	// (0x0003b6f3) cf0_flow_pane_g

0xdfbe,	// (0x000397cf) cf0_flow_pane_t1

0xe617,	// (0x00039e28) main_call6_pane

0xe617,	// (0x00039e28) main_calllock_pane

0xdfcc,	// (0x000397dd) call6_btn_grp_pane_ParamLimits

0xdfcc,	// (0x000397dd) call6_btn_grp_pane

0xdfd9,	// (0x000397ea) call6_pane_g1_ParamLimits

0xdfd9,	// (0x000397ea) call6_pane_g1

0xdfe6,	// (0x000397f7) popup_call6_1st_window_ParamLimits

0xdfe6,	// (0x000397f7) popup_call6_1st_window

0xdff2,	// (0x00039803) popup_call6_2nd_window_ParamLimits

0xdff2,	// (0x00039803) popup_call6_2nd_window

0xdffe,	// (0x0003980f) cell_call6_btn_pane_ParamLimits

0xdffe,	// (0x0003980f) cell_call6_btn_pane

0x18db,	// (0x0002d0ec) bg_popup_call2_in_pane_cp03

0xe00d,	// (0x0003981e) popup_call6_1st_window_g1

0xe015,	// (0x00039826) popup_call6_1st_window_g2

0xe01d,	// (0x0003982e) popup_call6_1st_window_g3

0x0002,

0xfee7,	// (0x0003b6f8) popup_call6_1st_window_g

0xe025,	// (0x00039836) popup_call6_1st_window_t1

0xe034,	// (0x00039845) popup_call6_1st_window_t2

0xe042,	// (0x00039853) popup_call6_1st_window_t3

0x0002,

0xfeee,	// (0x0003b6ff) popup_call6_1st_window_t

0x18db,	// (0x0002d0ec) bg_popup_call2_in_pane_cp04

0xe00d,	// (0x0003981e) popup_call6_2nd_window_g1

0xe015,	// (0x00039826) popup_call6_2nd_window_g2

0xe01d,	// (0x0003982e) popup_call6_2nd_window_g3

0x0002,

0xfee7,	// (0x0003b6f8) popup_call6_2nd_window_g

0xe025,	// (0x00039836) popup_call6_2nd_window_t1

0xe617,	// (0x00039e28) bg_button_pane_cp15

0xe050,	// (0x00039861) cell_call6_btn_pane_g1

0xe059,	// (0x0003986a) cell_call6_btn_pane_t1

0xe068,	// (0x00039879) listscroll_wgtman_pane_ParamLimits

0xe068,	// (0x00039879) listscroll_wgtman_pane

0xe082,	// (0x00039893) wgtman_btn_pane_ParamLimits

0xe082,	// (0x00039893) wgtman_btn_pane

0x171c,	// (0x0002cf2d) aid_scroll_copy1

0xe0b5,	// (0x000398c6) list_wgtman_pane

0xe0bf,	// (0x000398d0) wgtman_btn_pane_g1_ParamLimits

0xe0bf,	// (0x000398d0) wgtman_btn_pane_g1

0xe0e7,	// (0x000398f8) wgtman_btn_pane_t1_ParamLimits

0xe0e7,	// (0x000398f8) wgtman_btn_pane_t1

0xe11e,	// (0x0003992f) wgtman_btn_pane_t2_ParamLimits

0xe11e,	// (0x0003992f) wgtman_btn_pane_t2

0x0001,

0xfef5,	// (0x0003b706) wgtman_btn_pane_t_ParamLimits

0xfef5,	// (0x0003b706) wgtman_btn_pane_t

0xe135,	// (0x00039946) listrow_wgtman_pane_ParamLimits

0xe135,	// (0x00039946) listrow_wgtman_pane

0xe146,	// (0x00039957) listrow_wgtman_pane_g1

0xe14f,	// (0x00039960) listrow_wgtman_pane_g2

0x0001,

0xfefa,	// (0x0003b70b) listrow_wgtman_pane_g

0x73ad,	// (0x00032bbe) listrow_wgtman_pane_t1

0x73bb,	// (0x00032bcc) listrow_wgtman_pane_t2

0x0001,

0xfeff,	// (0x0003b710) listrow_wgtman_pane_t

0x73c9,	// (0x00032bda) wait_bar_pane_cp09

0xe157,	// (0x00039968) main_calllock_btn_pane

0xe15f,	// (0x00039970) main_calllock_pane_g1

0xe617,	// (0x00039e28) bg_button_pane_cp17

0xe168,	// (0x00039979) main_calllock_btn_pane_g1

0xe171,	// (0x00039982) main_calllock_btn_pane_t1

0xe617,	// (0x00039e28) main_dialer3_pane

0xe617,	// (0x00039e28) main_fmrd2_pane

0x32c6,	// (0x0002ead7) main_fs_bigclock_unlock_btn_pane_g1

0xe188,	// (0x00039999) main_fs_bigclock_unlock_btn_pane_t1

0xe196,	// (0x000399a7) area_fmrd2_info_pane_ParamLimits

0xe196,	// (0x000399a7) area_fmrd2_info_pane

0xe1a2,	// (0x000399b3) area_fmrd2_visual_pane_ParamLimits

0xe1a2,	// (0x000399b3) area_fmrd2_visual_pane

0xe1b0,	// (0x000399c1) fmrd2_indi_pane_ParamLimits

0xe1b0,	// (0x000399c1) fmrd2_indi_pane

0xe1bd,	// (0x000399ce) area_fmrd2_visual_pane_g1

0xe1c5,	// (0x000399d6) area_fmrd2_visual_pane_t1

0xe1d3,	// (0x000399e4) area_fmrd2_visual_pane_t2

0xe1e1,	// (0x000399f2) area_fmrd2_visual_pane_t3

0x0002,

0xff09,	// (0x0003b71a) area_fmrd2_visual_pane_t

0xe1ef,	// (0x00039a00) area_fmrd2_info_pane_g1

0xe1f7,	// (0x00039a08) area_fmrd2_info_pane_t1

0xe205,	// (0x00039a16) area_fmrd2_info_pane_t2

0xe213,	// (0x00039a24) area_fmrd2_info_pane_t3

0xe221,	// (0x00039a32) area_fmrd2_info_pane_t4

0x0003,

0xff10,	// (0x0003b721) area_fmrd2_info_pane_t

0xe22f,	// (0x00039a40) fmrd2_indi_pane_t1

0xe23d,	// (0x00039a4e) fmrd2_indi_pane_t2

0xe24b,	// (0x00039a5c) fmrd2_indi_pane_t3

0x0002,

0xff19,	// (0x0003b72a) fmrd2_indi_pane_t

0x5020,	// (0x00030831) list_single_fs_bigclock_indicator_pane_g5_ParamLimits

0x5020,	// (0x00030831) list_single_fs_bigclock_indicator_pane_g5

0x50c2,	// (0x000308d3) list_single_fs_bigclock_indicator_pane_t5_ParamLimits

0x50c2,	// (0x000308d3) list_single_fs_bigclock_indicator_pane_t5

0xd6ef,	// (0x00038f00) aid_cell_bcale_month_pane_ParamLimits

0xd6ef,	// (0x00038f00) aid_cell_bcale_month_pane

0xd6fb,	// (0x00038f0c) bcale_month_pane_ParamLimits

0xd6fb,	// (0x00038f0c) bcale_month_pane

0xd707,	// (0x00038f18) bcale_preview_pane_ParamLimits

0xd707,	// (0x00038f18) bcale_preview_pane

0xdc8a,	// (0x0003949b) list_single_fs_bigclock_pane_t1_ParamLimits

0xdca4,	// (0x000394b5) list_single_fs_bigclock_pane_t2_ParamLimits

0xdca4,	// (0x000394b5) list_single_fs_bigclock_pane_t2

0x0001,

0xfea0,	// (0x0003b6b1) list_single_fs_bigclock_pane_t_ParamLimits

0xfea0,	// (0x0003b6b1) list_single_fs_bigclock_pane_t

0xe180,	// (0x00039991) main_fs_bigclock_unlock_btn_pane_g2

0x0001,

0xff04,	// (0x0003b715) main_fs_bigclock_unlock_btn_pane_g

0xe259,	// (0x00039a6a) aid_dia3_key_size_ParamLimits

0xe259,	// (0x00039a6a) aid_dia3_key_size

0xe265,	// (0x00039a76) aid_dia3_listrow_size_ParamLimits

0xe265,	// (0x00039a76) aid_dia3_listrow_size

0xe273,	// (0x00039a84) dia3_keypad_fun_pane_ParamLimits

0xe273,	// (0x00039a84) dia3_keypad_fun_pane

0xe27f,	// (0x00039a90) dia3_keypad_num_pane_ParamLimits

0xe27f,	// (0x00039a90) dia3_keypad_num_pane

0xe28b,	// (0x00039a9c) dia3_listscroll_pane_ParamLimits

0xe28b,	// (0x00039a9c) dia3_listscroll_pane

0xe297,	// (0x00039aa8) dia3_numentry_pane_ParamLimits

0xe297,	// (0x00039aa8) dia3_numentry_pane

0xe2a3,	// (0x00039ab4) dia3_list_pane

0xe2ac,	// (0x00039abd) scroll_pane_cp12

0xe617,	// (0x00039e28) bg_dia3_numentry_pane

0xe2b5,	// (0x00039ac6) dia3_numentry_pane_t1

0xe2c4,	// (0x00039ad5) cell_dia3_key_num_pane

0xe2cc,	// (0x00039add) cell_dia3_key0_fun_pane_ParamLimits

0xe2cc,	// (0x00039add) cell_dia3_key0_fun_pane

0xe2d9,	// (0x00039aea) cell_dia3_key1_fun_pane_ParamLimits

0xe2d9,	// (0x00039aea) cell_dia3_key1_fun_pane

0xe2e6,	// (0x00039af7) dia3_listrow_pane

0x4d44,	// (0x00030555) bg_dia3_numentry_pane_g1

0xe617,	// (0x00039e28) bg_button_pane_cp21

0xe2f3,	// (0x00039b04) cell_dia3_key_num_pane_t1

0xe301,	// (0x00039b12) cell_dia3_key_num_pane_t2

0xe310,	// (0x00039b21) cell_dia3_key_num_pane_t3

0xe31f,	// (0x00039b30) cell_dia3_key_num_pane_t4

0x0003,

0xff20,	// (0x0003b731) cell_dia3_key_num_pane_t

0xe617,	// (0x00039e28) bg_button_pane_cp19

0xe32e,	// (0x00039b3f) cell_dia3_key0_fun_pane_g1

0xe617,	// (0x00039e28) bg_button_pane_cp20

0xe336,	// (0x00039b47) cell_dia3_key1_fun_pane_g1

0xe33e,	// (0x00039b4f) area_left_week_number_pane

0xe347,	// (0x00039b58) area_top_day_name_pane

0xe350,	// (0x00039b61) frame_month_view_pane

0xe358,	// (0x00039b69) grid_month_view_pane

0xe362,	// (0x00039b73) cell_top_day_name_pane_ParamLimits

0xe362,	// (0x00039b73) cell_top_day_name_pane

0xe378,	// (0x00039b89) cell_area_left_week_number_pane_ParamLimits

0xe378,	// (0x00039b89) cell_area_left_week_number_pane

0xe38c,	// (0x00039b9d) cell_month_view_pane_ParamLimits

0xe38c,	// (0x00039b9d) cell_month_view_pane

0xe3a7,	// (0x00039bb8) frm_month_g1

0xe3b0,	// (0x00039bc1) frm_month_g2

0xe3b8,	// (0x00039bc9) frm_month_g3

0xe3c0,	// (0x00039bd1) frm_month_g4

0xe3c8,	// (0x00039bd9) frm_month_g5

0xe3d0,	// (0x00039be1) frm_month_g6

0xe3d8,	// (0x00039be9) frm_month_g7

0xe3e0,	// (0x00039bf1) frm_month_g8

0xe3e9,	// (0x00039bfa) frm_month_g9

0xe3f2,	// (0x00039c03) frm_month_g10

0xb997,	// (0x000371a8) frm_month_g11

0xe3fb,	// (0x00039c0c) frm_month_g12

0xe404,	// (0x00039c15) frm_month_g13

0xe40d,	// (0x00039c1e) frm_month_g14

0xe416,	// (0x00039c27) frm_month_g15

0xe41f,	// (0x00039c30) frm_month_g16

0x000f,

0xff29,	// (0x0003b73a) frm_month_g

0xe428,	// (0x00039c39) cell_top_day_name_pane_t1

0xe437,	// (0x00039c48) cell_area_left_week_number_pane_g1

0xe428,	// (0x00039c39) cell_area_left_week_number_pane_t1

0x32c6,	// (0x0002ead7) cell_month_view_pane_g1

0xe43f,	// (0x00039c50) cell_month_view_pane_t1

0xe617,	// (0x00039e28) main_fps_pane

0x52bc,	// (0x00030acd) cmail_ddmenu_btn02_pane_cp1_ParamLimits

0x52bc,	// (0x00030acd) cmail_ddmenu_btn02_pane_cp1

0x52d8,	// (0x00030ae9) cmail_ddmenu_btn02_pane_cp2_ParamLimits

0x52d8,	// (0x00030ae9) cmail_ddmenu_btn02_pane_cp2

0xda1f,	// (0x00039230) cmail_ddmenu_btn02_pane_g2_ParamLimits

0xda1f,	// (0x00039230) cmail_ddmenu_btn02_pane_g2

0x0001,

0xfe51,	// (0x0003b662) cmail_ddmenu_btn02_pane_g_ParamLimits

0xfe51,	// (0x0003b662) cmail_ddmenu_btn02_pane_g

0xda3d,	// (0x0003924e) cmail_ddmenu_btn02_pane_t2_ParamLimits

0xda3d,	// (0x0003924e) cmail_ddmenu_btn02_pane_t2

0x0001,

0xfe56,	// (0x0003b667) cmail_ddmenu_btn02_pane_t_ParamLimits

0xfe56,	// (0x0003b667) cmail_ddmenu_btn02_pane_t

0xe44e,	// (0x00039c5f) fps_text_pane_ParamLimits

0xe44e,	// (0x00039c5f) fps_text_pane

0xe45b,	// (0x00039c6c) main_fps_pane_g1_ParamLimits

0xe45b,	// (0x00039c6c) main_fps_pane_g1

0xe467,	// (0x00039c78) wait_bar_pane_cp010_ParamLimits

0xe467,	// (0x00039c78) wait_bar_pane_cp010

0xe473,	// (0x00039c84) fps_text_pane_t1_ParamLimits

0xe473,	// (0x00039c84) fps_text_pane_t1

0xb985,	// (0x00037196) cam4_image_uncrop_pane_g1

0xb98e,	// (0x0003719f) cam4_image_uncrop_pane_g2

0xb997,	// (0x000371a8) cam4_image_uncrop_pane_g3

0xb9a0,	// (0x000371b1) cam4_image_uncrop_pane_g4

0x0003,

0xf92f,	// (0x0003b140) cam4_image_uncrop_pane_g

0xe2e6,	// (0x00039af7) dia3_listrow_pane_ParamLimits

0xe617,	// (0x00039e28) main_phob2_pane

0xd4df,	// (0x00038cf0) cell_tport_appsw_pane_cp02_ParamLimits

0xd4df,	// (0x00038cf0) cell_tport_appsw_pane_cp02

0xd4ec,	// (0x00038cfd) cell_tport_appsw_pane_cp03_ParamLimits

0xd4ec,	// (0x00038cfd) cell_tport_appsw_pane_cp03

0xe617,	// (0x00039e28) phob2_contact_card_pane

0xe617,	// (0x00039e28) phob2_listscroll_pane

0xe48c,	// (0x00039c9d) phob2_list_pane

0xe494,	// (0x00039ca5) scroll_pane_cp034

0xe49c,	// (0x00039cad) phob2_cc_data_pane_ParamLimits

0xe49c,	// (0x00039cad) phob2_cc_data_pane

0xe4b4,	// (0x00039cc5) phob2_cc_listscroll_pane_ParamLimits

0xe4b4,	// (0x00039cc5) phob2_cc_listscroll_pane

0xe4cc,	// (0x00039cdd) list_double_large_graphic_phob2_pane_ParamLimits

0xe4cc,	// (0x00039cdd) list_double_large_graphic_phob2_pane

0xe4df,	// (0x00039cf0) list_double_large_graphic_phob2_pane_g1_ParamLimits

0xe4df,	// (0x00039cf0) list_double_large_graphic_phob2_pane_g1

0x73d1,	// (0x00032be2) list_double_large_graphic_phob2_pane_g2_ParamLimits

0x73d1,	// (0x00032be2) list_double_large_graphic_phob2_pane_g2

0x0001,

0xff4a,	// (0x0003b75b) list_double_large_graphic_phob2_pane_g_ParamLimits

0xff4a,	// (0x0003b75b) list_double_large_graphic_phob2_pane_g

0x73dd,	// (0x00032bee) list_double_large_graphic_phob2_pane_t1_ParamLimits

0x73dd,	// (0x00032bee) list_double_large_graphic_phob2_pane_t1

0x73f2,	// (0x00032c03) list_double_large_graphic_phob2_pane_t2_ParamLimits

0x73f2,	// (0x00032c03) list_double_large_graphic_phob2_pane_t2

0x0001,

0xff4f,	// (0x0003b760) list_double_large_graphic_phob2_pane_t_ParamLimits

0xff4f,	// (0x0003b760) list_double_large_graphic_phob2_pane_t

0xe617,	// (0x00039e28) list_highlight_pane_cp024

0xe4ec,	// (0x00039cfd) phob2_cc_button_pane

0xe4f4,	// (0x00039d05) phob2_cc_data_pane_g1_ParamLimits

0xe4f4,	// (0x00039d05) phob2_cc_data_pane_g1

0xe500,	// (0x00039d11) phob2_cc_data_pane_g2_ParamLimits

0xe500,	// (0x00039d11) phob2_cc_data_pane_g2

0x0001,

0xff54,	// (0x0003b765) phob2_cc_data_pane_g_ParamLimits

0xff54,	// (0x0003b765) phob2_cc_data_pane_g

0xe50c,	// (0x00039d1d) phob2_cc_data_pane_t1_ParamLimits

0xe50c,	// (0x00039d1d) phob2_cc_data_pane_t1

0xe51e,	// (0x00039d2f) phob2_cc_data_pane_t2_ParamLimits

0xe51e,	// (0x00039d2f) phob2_cc_data_pane_t2

0xe530,	// (0x00039d41) phob2_cc_data_pane_t3_ParamLimits

0xe530,	// (0x00039d41) phob2_cc_data_pane_t3

0x0002,

0xff59,	// (0x0003b76a) phob2_cc_data_pane_t_ParamLimits

0xff59,	// (0x0003b76a) phob2_cc_data_pane_t

0xe542,	// (0x00039d53) phob2_cc_list_pane_ParamLimits

0xe542,	// (0x00039d53) phob2_cc_list_pane

0xe54e,	// (0x00039d5f) scroll_pane_cp035_ParamLimits

0xe54e,	// (0x00039d5f) scroll_pane_cp035

0xf0cc,	// (0x0003a8dd) bg_button_pane_cp033

0xe55a,	// (0x00039d6b) phob2_cc_button_pane_g1

0xe566,	// (0x00039d77) phob2_cc_button_pane_t1

0xe57b,	// (0x00039d8c) phob2_cc_button_pane_t2

0x0001,

0xff60,	// (0x0003b771) phob2_cc_button_pane_t

0xe58d,	// (0x00039d9e) list_double_large_graphic_phob2_cc_pane_ParamLimits

0xe58d,	// (0x00039d9e) list_double_large_graphic_phob2_cc_pane

0xe5a8,	// (0x00039db9) list_double_large_graphic_phob2_cc_pane_g1_ParamLimits

0xe5a8,	// (0x00039db9) list_double_large_graphic_phob2_cc_pane_g1

0x7404,	// (0x00032c15) list_double_large_graphic_phob2_cc_pane_g2_ParamLimits

0x7404,	// (0x00032c15) list_double_large_graphic_phob2_cc_pane_g2

0x7413,	// (0x00032c24) list_double_large_graphic_phob2_cc_pane_g3_ParamLimits

0x7413,	// (0x00032c24) list_double_large_graphic_phob2_cc_pane_g3

0x7422,	// (0x00032c33) list_double_large_graphic_phob2_cc_pane_g4_ParamLimits

0x7422,	// (0x00032c33) list_double_large_graphic_phob2_cc_pane_g4

0x7433,	// (0x00032c44) list_double_large_graphic_phob2_cc_pane_g5_ParamLimits

0x7433,	// (0x00032c44) list_double_large_graphic_phob2_cc_pane_g5

0x0004,

0xff65,	// (0x0003b776) list_double_large_graphic_phob2_cc_pane_g_ParamLimits

0xff65,	// (0x0003b776) list_double_large_graphic_phob2_cc_pane_g

0x7442,	// (0x00032c53) list_double_large_graphic_phob2_cc_pane_t1_ParamLimits

0x7442,	// (0x00032c53) list_double_large_graphic_phob2_cc_pane_t1

0x746b,	// (0x00032c7c) list_double_large_graphic_phob2_cc_pane_t2_ParamLimits

0x746b,	// (0x00032c7c) list_double_large_graphic_phob2_cc_pane_t2

0x0001,

0xff70,	// (0x0003b781) list_double_large_graphic_phob2_cc_pane_t_ParamLimits

0xff70,	// (0x0003b781) list_double_large_graphic_phob2_cc_pane_t

0xe5b9,	// (0x00039dca) list_highlight_pane_cp025_ParamLimits

0xe5b9,	// (0x00039dca) list_highlight_pane_cp025

0xf0cc,	// (0x0003a8dd) bg_button_pane_cp033_ParamLimits

0xe55a,	// (0x00039d6b) phob2_cc_button_pane_g1_ParamLimits

0xe566,	// (0x00039d77) phob2_cc_button_pane_t1_ParamLimits

0xe57b,	// (0x00039d8c) phob2_cc_button_pane_t2_ParamLimits

0xff60,	// (0x0003b771) phob2_cc_button_pane_t_ParamLimits

0x76b7,	// (0x00032ec8) popup_wgtman_window

0x4d64,	// (0x00030575) scroll_pane_cp038

0xe09d,	// (0x000398ae) wgtman_btn_pane_cp_01_ParamLimits

0xe09d,	// (0x000398ae) wgtman_btn_pane_cp_01

0xe5c7,	// (0x00039dd8) wgtman_content_pane

0xe5d0,	// (0x00039de1) wgtman_heading_pane

0xe617,	// (0x00039e28) bg_heading_pane_cp02

0xe5d9,	// (0x00039dea) wgtman_heading_pane_g1

0xe5e1,	// (0x00039df2) wgtman_heading_pane_t1

0xe5ef,	// (0x00039e00) scroll_pane_cp036

0xe5f7,	// (0x00039e08) wgtman_list_pane

0xe5ff,	// (0x00039e10) wgtman_list_pane_t1_ParamLimits

0xe5ff,	// (0x00039e10) wgtman_list_pane_t1
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

} // end of namespace AknLayoutScalable_Elaf_pqp_apps_qvga_prt_Small
