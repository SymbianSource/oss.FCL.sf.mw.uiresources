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

#include "aknlayoutscalable_elaf_pvp4_apps_vga4_prt_tch_small.h"
#include "AknLayout2ScalableDecode.h"
namespace AknLayoutScalable_Apps { extern const TUint8 KByteCodedData_AknLayoutScalable_Elaf_pvp4_apps_vga4_prt_tch[]; }

namespace AknLayoutScalable_Elaf_pvp4_apps_vga4_prt_tch_Small
{

extern const TUint16 KDataLookup[AknLayoutScalable_Apps::E_TApiId_TableSize];
const SCompDataImplData KImplData = { KDataLookup, AknLayoutScalable_Apps::KByteCodedData_AknLayoutScalable_Elaf_pvp4_apps_vga4_prt_tch + 0x00032e08 };

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
0x45d1,	// (0x000373d9) Screen

0x45dd,	// (0x000373e5) application_window

0x4643,	// (0x0003744b) area_bottom_pane_ParamLimits

0x4643,	// (0x0003744b) area_bottom_pane

0x469d,	// (0x000374a5) area_top_pane_ParamLimits

0x469d,	// (0x000374a5) area_top_pane

0x4701,	// (0x00037509) call_video_uplink_pane_ParamLimits

0x4701,	// (0x00037509) call_video_uplink_pane

0x473e,	// (0x00037546) main_pane_ParamLimits

0x473e,	// (0x00037546) main_pane

0xe464,	// (0x0004126c) context_pane

0x7886,	// (0x0003a68e) navi_pane

0x78aa,	// (0x0003a6b2) popup_cale_events_window_ParamLimits

0x78aa,	// (0x0003a6b2) popup_cale_events_window

0xe477,	// (0x0004127f) popup_mup_playback_window

0x78c2,	// (0x0003a6ca) signal_pane

0xc590,	// (0x0003f398) main_browser_pane

0xcfe4,	// (0x0003fdec) main_burst_pane

0x772a,	// (0x0003a532) main_calc_pane

0xcfe4,	// (0x0003fdec) main_cale_day_pane

0xc590,	// (0x0003f398) main_cale_month_pane

0xcfe4,	// (0x0003fdec) main_cale_week_pane

0xcfe4,	// (0x0003fdec) main_call_pane

0xc26a,	// (0x0003f072) main_call_poc_pane

0xcfe4,	// (0x0003fdec) main_camera_pane

0xcfe4,	// (0x0003fdec) main_chi_dic_pane

0xce86,	// (0x0003fc8e) main_clock_pane

0xc26a,	// (0x0003f072) main_fmradio_pane

0xcfe4,	// (0x0003fdec) main_graph_messa_pane

0xc26a,	// (0x0003f072) main_help_pane

0xc590,	// (0x0003f398) main_im_pane

0xc4c5,	// (0x0003f2cd) main_image_pane_ParamLimits

0xc4c5,	// (0x0003f2cd) main_image_pane

0xc26a,	// (0x0003f072) main_location2_pane

0xcfe4,	// (0x0003fdec) main_location_pane

0xc26a,	// (0x0003f072) main_messa_pane

0xc26a,	// (0x0003f072) main_mp2_pane

0xcfe4,	// (0x0003fdec) main_mp_pane

0xc26a,	// (0x0003f072) main_msg_pane

0xc26a,	// (0x0003f072) main_mup_eq_pane

0xc26a,	// (0x0003f072) main_mup_pane

0xcfe4,	// (0x0003fdec) main_notes_pane

0xc26a,	// (0x0003f072) main_pec_pane

0xc26a,	// (0x0003f072) main_phob_pane

0xc26a,	// (0x0003f072) main_pinb_pane

0xc26a,	// (0x0003f072) main_postcard_pane

0xc26a,	// (0x0003f072) main_qdial_pane

0xcfe4,	// (0x0003fdec) main_skin_pane

0xc26a,	// (0x0003f072) main_smil2_pane

0xcfe4,	// (0x0003fdec) main_smil_pane

0xcfe4,	// (0x0003fdec) main_video_pane

0xcfe4,	// (0x0003fdec) main_video_tele_pane

0xc4c5,	// (0x0003f2cd) main_viewer_pane_ParamLimits

0xc4c5,	// (0x0003f2cd) main_viewer_pane

0xcfe4,	// (0x0003fdec) main_vorec_pane

0x7770,	// (0x0003a578) popup_blid_sat_info_window_ParamLimits

0x7770,	// (0x0003a578) popup_blid_sat_info_window

0x778a,	// (0x0003a592) popup_dyc_status_message_window_ParamLimits

0x778a,	// (0x0003a592) popup_dyc_status_message_window

0x779a,	// (0x0003a5a2) popup_grid_large_graphic_window_ParamLimits

0x779a,	// (0x0003a5a2) popup_grid_large_graphic_window

0x7812,	// (0x0003a61a) popup_loc_request_window_ParamLimits

0x7812,	// (0x0003a61a) popup_loc_request_window

0x785a,	// (0x0003a662) popup_wml_address_window_ParamLimits

0x785a,	// (0x0003a662) popup_wml_address_window

0x7602,	// (0x0003a40a) call_muted_g1

0x72be,	// (0x0003a0c6) popup_call_audio_conf_window_ParamLimits

0x72be,	// (0x0003a0c6) popup_call_audio_conf_window

0x7612,	// (0x0003a41a) popup_call_audio_first_window_ParamLimits

0x7612,	// (0x0003a41a) popup_call_audio_first_window

0x7652,	// (0x0003a45a) popup_call_audio_in_window_ParamLimits

0x7652,	// (0x0003a45a) popup_call_audio_in_window

0x7676,	// (0x0003a47e) popup_call_audio_out_window_ParamLimits

0x7676,	// (0x0003a47e) popup_call_audio_out_window

0x7698,	// (0x0003a4a0) popup_call_audio_second_window_ParamLimits

0x7698,	// (0x0003a4a0) popup_call_audio_second_window

0x76c8,	// (0x0003a4d0) popup_call_audio_wait_window_ParamLimits

0x76c8,	// (0x0003a4d0) popup_call_audio_wait_window

0x76e9,	// (0x0003a4f1) popup_number_entry_window_ParamLimits

0x76e9,	// (0x0003a4f1) popup_number_entry_window

0x4912,	// (0x0003771a) bg_popup_call_pane_cp05_ParamLimits

0x4912,	// (0x0003771a) bg_popup_call_pane_cp05

0x4932,	// (0x0003773a) popup_number_entry_window_t1

0x4945,	// (0x0003774d) popup_number_entry_window_t2

0x4957,	// (0x0003775f) popup_number_entry_window_t3

0x0003,

0xf0ec,	// (0x00041ef4) popup_number_entry_window_t

0x49a1,	// (0x000377a9) text_title_cp2

0x49b4,	// (0x000377bc) bg_popup_call_pane_cp_ParamLimits

0x49b4,	// (0x000377bc) bg_popup_call_pane_cp

0x49c2,	// (0x000377ca) call_thumbnail_pane

0x49ca,	// (0x000377d2) popup_call_audio_in_window_g1_ParamLimits

0x49ca,	// (0x000377d2) popup_call_audio_in_window_g1

0x49d6,	// (0x000377de) popup_call_audio_in_window_g2_ParamLimits

0x49d6,	// (0x000377de) popup_call_audio_in_window_g2

0x49e2,	// (0x000377ea) popup_call_audio_in_window_g3_ParamLimits

0x49e2,	// (0x000377ea) popup_call_audio_in_window_g3

0x0002,

0xf0f5,	// (0x00041efd) popup_call_audio_in_window_g_ParamLimits

0xf0f5,	// (0x00041efd) popup_call_audio_in_window_g

0x49ee,	// (0x000377f6) popup_call_audio_in_window_t1_ParamLimits

0x49ee,	// (0x000377f6) popup_call_audio_in_window_t1

0x4a0a,	// (0x00037812) popup_call_audio_in_window_t2_ParamLimits

0x4a0a,	// (0x00037812) popup_call_audio_in_window_t2

0xbf33,	// (0x0003ed3b) popup_call_audio_in_window_t3_ParamLimits

0xbf33,	// (0x0003ed3b) popup_call_audio_in_window_t3

0x0002,

0xf0fc,	// (0x00041f04) popup_call_audio_in_window_t_ParamLimits

0xf0fc,	// (0x00041f04) popup_call_audio_in_window_t

0x49b4,	// (0x000377bc) bg_popup_call_pane_cp01_ParamLimits

0x49b4,	// (0x000377bc) bg_popup_call_pane_cp01

0x49c2,	// (0x000377ca) call_thumbnail_pane_cp02

0xbf46,	// (0x0003ed4e) call_type_pane_cp022

0xbf4e,	// (0x0003ed56) popup_call_audio_out_window_g1_ParamLimits

0xbf4e,	// (0x0003ed56) popup_call_audio_out_window_g1

0xbf60,	// (0x0003ed68) popup_call_audio_out_window_g2_ParamLimits

0xbf60,	// (0x0003ed68) popup_call_audio_out_window_g2

0xbf6c,	// (0x0003ed74) popup_call_audio_out_window_g3_ParamLimits

0xbf6c,	// (0x0003ed74) popup_call_audio_out_window_g3

0x0002,

0xf103,	// (0x00041f0b) popup_call_audio_out_window_g_ParamLimits

0xf103,	// (0x00041f0b) popup_call_audio_out_window_g

0xbf7e,	// (0x0003ed86) popup_call_audio_out_window_t1_ParamLimits

0xbf7e,	// (0x0003ed86) popup_call_audio_out_window_t1

0xbf96,	// (0x0003ed9e) popup_call_audio_out_window_t2_ParamLimits

0xbf96,	// (0x0003ed9e) popup_call_audio_out_window_t2

0x0001,

0xf10a,	// (0x00041f12) popup_call_audio_out_window_t_ParamLimits

0xf10a,	// (0x00041f12) popup_call_audio_out_window_t

0xbfab,	// (0x0003edb3) bg_popup_call_pane_ParamLimits

0xbfab,	// (0x0003edb3) bg_popup_call_pane

0x4a26,	// (0x0003782e) call_thumbnail_pane_cp_ParamLimits

0x4a26,	// (0x0003782e) call_thumbnail_pane_cp

0xc02f,	// (0x0003ee37) call_type_pane_cp01_ParamLimits

0xc02f,	// (0x0003ee37) call_type_pane_cp01

0xc073,	// (0x0003ee7b) popup_call_audio_first_window_g1_ParamLimits

0xc073,	// (0x0003ee7b) popup_call_audio_first_window_g1

0xc0bf,	// (0x0003eec7) popup_call_audio_first_window_g2_ParamLimits

0xc0bf,	// (0x0003eec7) popup_call_audio_first_window_g2

0x0001,

0xf10f,	// (0x00041f17) popup_call_audio_first_window_g_ParamLimits

0xf10f,	// (0x00041f17) popup_call_audio_first_window_g

0xc103,	// (0x0003ef0b) popup_call_audio_first_window_t1_ParamLimits

0xc103,	// (0x0003ef0b) popup_call_audio_first_window_t1

0xc1af,	// (0x0003efb7) popup_call_audio_first_window_t4_ParamLimits

0xc1af,	// (0x0003efb7) popup_call_audio_first_window_t4

0xc23b,	// (0x0003f043) popup_call_audio_first_window_t5_ParamLimits

0xc23b,	// (0x0003f043) popup_call_audio_first_window_t5

0x0002,

0xf114,	// (0x00041f1c) popup_call_audio_first_window_t_ParamLimits

0xf114,	// (0x00041f1c) popup_call_audio_first_window_t

0xc26a,	// (0x0003f072) bg_popup_call_pane_cp02

0xc274,	// (0x0003f07c) call_type_pane_cp023

0xc27c,	// (0x0003f084) popup_call_audio_wait_window_g1

0xc284,	// (0x0003f08c) popup_call_audio_wait_window_g2

0x0001,

0xf11b,	// (0x00041f23) popup_call_audio_wait_window_g

0xc28c,	// (0x0003f094) popup_call_audio_wait_window_t3

0xc29a,	// (0x0003f0a2) bg_popup_call_pane_cp03_ParamLimits

0xc29a,	// (0x0003f0a2) bg_popup_call_pane_cp03

0xc2fa,	// (0x0003f102) call_thumbnail_pane_cp011_ParamLimits

0xc2fa,	// (0x0003f102) call_thumbnail_pane_cp011

0xc306,	// (0x0003f10e) call_type_pane_cp034_ParamLimits

0xc306,	// (0x0003f10e) call_type_pane_cp034

0xc342,	// (0x0003f14a) popup_call_audio_second_window_g1_ParamLimits

0xc342,	// (0x0003f14a) popup_call_audio_second_window_g1

0xc37e,	// (0x0003f186) popup_call_audio_second_window_g2_ParamLimits

0xc37e,	// (0x0003f186) popup_call_audio_second_window_g2

0x0001,

0xf120,	// (0x00041f28) popup_call_audio_second_window_g_ParamLimits

0xf120,	// (0x00041f28) popup_call_audio_second_window_g

0xc3ba,	// (0x0003f1c2) popup_call_audio_second_window_t1_ParamLimits

0xc3ba,	// (0x0003f1c2) popup_call_audio_second_window_t1

0xc43b,	// (0x0003f243) popup_call_audio_second_window_t2_ParamLimits

0xc43b,	// (0x0003f243) popup_call_audio_second_window_t2

0xc471,	// (0x0003f279) popup_call_audio_second_window_t3_ParamLimits

0xc471,	// (0x0003f279) popup_call_audio_second_window_t3

0x0002,

0xf125,	// (0x00041f2d) popup_call_audio_second_window_t_ParamLimits

0xf125,	// (0x00041f2d) popup_call_audio_second_window_t

0xc26a,	// (0x0003f072) bg_popup_call_pane_cp04

0xc4a7,	// (0x0003f2af) list_conf_pane

0xc4af,	// (0x0003f2b7) popup_call_audio_conf_window_t1

0xc4bd,	// (0x0003f2c5) call_thumbnail_pane_g1

0xc4c5,	// (0x0003f2cd) bg_pinb_pane_ParamLimits

0xc4c5,	// (0x0003f2cd) bg_pinb_pane

0xc4d3,	// (0x0003f2db) find_pinb_pane

0xc4dc,	// (0x0003f2e4) listscroll_pinb_pane_ParamLimits

0xc4dc,	// (0x0003f2e4) listscroll_pinb_pane

0xc4eb,	// (0x0003f2f3) pinb_bg_pane_g1

0x4a4a,	// (0x00037852) pinb_bg_pane_g2

0x4a56,	// (0x0003785e) pinb_bg_pane_g3

0x4a62,	// (0x0003786a) pinb_bg_pane_g4

0x4a6e,	// (0x00037876) pinb_bg_pane_g5

0x4a7a,	// (0x00037882) pinb_bg_pane_g6

0x4a85,	// (0x0003788d) pinb_bg_pane_g7

0x4a90,	// (0x00037898) pinb_bg_pane_g8

0x4a9b,	// (0x000378a3) pinb_bg_pane_g9

0x4aa5,	// (0x000378ad) pinb_bg_pane_g10

0x0009,

0xf12c,	// (0x00041f34) pinb_bg_pane_g

0x4ac2,	// (0x000378ca) grid_pinb_pane

0x4acd,	// (0x000378d5) list_pinb_pane

0x4ad8,	// (0x000378e0) scroll_pane_cp01_ParamLimits

0x4ad8,	// (0x000378e0) scroll_pane_cp01

0xc4f5,	// (0x0003f2fd) find_pinb_pane_g1_ParamLimits

0xc4f5,	// (0x0003f2fd) find_pinb_pane_g1

0xc50d,	// (0x0003f315) find_pinb_pane_t1

0xc51f,	// (0x0003f327) find_pinb_pane_t2

0x0001,

0xf146,	// (0x00041f4e) find_pinb_pane_t

0xc534,	// (0x0003f33c) input_focus_pane_cp01_ParamLimits

0xc534,	// (0x0003f33c) input_focus_pane_cp01

0x4aea,	// (0x000378f2) cell_pinb_pane_ParamLimits

0x4aea,	// (0x000378f2) cell_pinb_pane

0x4b0a,	// (0x00037912) cell_pinb_pane_g1_ParamLimits

0x4b0a,	// (0x00037912) cell_pinb_pane_g1

0x4b1f,	// (0x00037927) cell_pinb_pane_g2_ParamLimits

0x4b1f,	// (0x00037927) cell_pinb_pane_g2

0xc540,	// (0x0003f348) cell_pinb_pane_g3_ParamLimits

0xc540,	// (0x0003f348) cell_pinb_pane_g3

0x0002,

0xf14b,	// (0x00041f53) cell_pinb_pane_g_ParamLimits

0xf14b,	// (0x00041f53) cell_pinb_pane_g

0xc26a,	// (0x0003f072) grid_highlight_pane_cp01

0x4b2b,	// (0x00037933) list_pinb_item_pane_ParamLimits

0x4b2b,	// (0x00037933) list_pinb_item_pane

0xc26a,	// (0x0003f072) list_highlight_pane_cp02

0x4b46,	// (0x0003794e) list_pinb_item_pane_g1_ParamLimits

0x4b46,	// (0x0003794e) list_pinb_item_pane_g1

0x4b53,	// (0x0003795b) list_pinb_item_pane_g2_ParamLimits

0x4b53,	// (0x0003795b) list_pinb_item_pane_g2

0x4b5f,	// (0x00037967) list_pinb_item_pane_g3_ParamLimits

0x4b5f,	// (0x00037967) list_pinb_item_pane_g3

0x4b70,	// (0x00037978) list_pinb_item_pane_g4_ParamLimits

0x4b70,	// (0x00037978) list_pinb_item_pane_g4

0x0003,

0xf152,	// (0x00041f5a) list_pinb_item_pane_g_ParamLimits

0xf152,	// (0x00041f5a) list_pinb_item_pane_g

0x4b7c,	// (0x00037984) list_pinb_item_pane_t1_ParamLimits

0x4b7c,	// (0x00037984) list_pinb_item_pane_t1

0x4bad,	// (0x000379b5) calc_display_pane

0x4bcb,	// (0x000379d3) calc_paper_pane

0x4be7,	// (0x000379ef) grid_calc_pane

0xc26a,	// (0x0003f072) bg_list_pane_cp01

0x4c13,	// (0x00037a1b) clock_g1

0x4c1b,	// (0x00037a23) clock_g2

0x0001,

0xf15b,	// (0x00041f63) clock_g

0x4c25,	// (0x00037a2d) clock_t1_ParamLimits

0x4c25,	// (0x00037a2d) clock_t1

0x4c3a,	// (0x00037a42) clock_t2_ParamLimits

0x4c3a,	// (0x00037a42) clock_t2

0x4c4c,	// (0x00037a54) clock_t3_ParamLimits

0x4c4c,	// (0x00037a54) clock_t3

0x4c5e,	// (0x00037a66) clock_t4_ParamLimits

0x4c5e,	// (0x00037a66) clock_t4

0x4c70,	// (0x00037a78) clock_t5_ParamLimits

0x4c70,	// (0x00037a78) clock_t5

0x4c85,	// (0x00037a8d) clock_t6_ParamLimits

0x4c85,	// (0x00037a8d) clock_t6

0x4c97,	// (0x00037a9f) clock_t7_ParamLimits

0x4c97,	// (0x00037a9f) clock_t7

0x4ca9,	// (0x00037ab1) clock_t8_ParamLimits

0x4ca9,	// (0x00037ab1) clock_t8

0x4cbf,	// (0x00037ac7) clock_t9_ParamLimits

0x4cbf,	// (0x00037ac7) clock_t9

0x0008,

0xf160,	// (0x00041f68) clock_t_ParamLimits

0xf160,	// (0x00041f68) clock_t

0xc54c,	// (0x0003f354) popup_clock_analogue_window_cp02

0xc54c,	// (0x0003f354) popup_clock_digital_window_cp01

0xc554,	// (0x0003f35c) listscroll_help_pane

0xc26a,	// (0x0003f072) phob_pre_status_pane

0xc55e,	// (0x0003f366) grid_qdial_pane

0xc26a,	// (0x0003f072) listscroll_mce_pane

0xc568,	// (0x0003f370) bg_notes_pane

0xc572,	// (0x0003f37a) list_notes_pane

0x4cd5,	// (0x00037add) scroll_pane_cp06

0xc57c,	// (0x0003f384) bg_calc_paper_pane

0x4ce0,	// (0x00037ae8) list_calc_pane

0xc590,	// (0x0003f398) bg_calc_display_pane

0x4cfa,	// (0x00037b02) calc_display_pane_t1

0x4d0f,	// (0x00037b17) calc_display_pane_t2

0x4d24,	// (0x00037b2c) calc_display_pane_t3

0x0002,

0xf173,	// (0x00041f7b) calc_display_pane_t

0x4d36,	// (0x00037b3e) cell_calc_pane_ParamLimits

0x4d36,	// (0x00037b3e) cell_calc_pane

0xc59c,	// (0x0003f3a4) bg_calc_paper_pane_g1

0xc5a8,	// (0x0003f3b0) bg_calc_paper_pane_g2

0xc5b4,	// (0x0003f3bc) bg_calc_paper_pane_g3

0xc5c0,	// (0x0003f3c8) bg_calc_paper_pane_g4

0xc5cc,	// (0x0003f3d4) bg_calc_paper_pane_g5

0x4d65,	// (0x00037b6d) bg_calc_paper_pane_g6

0x4d76,	// (0x00037b7e) bg_calc_paper_pane_g7

0x4d87,	// (0x00037b8f) bg_calc_paper_pane_g8

0x0007,

0xf17a,	// (0x00041f82) bg_calc_paper_pane_g

0x4d98,	// (0x00037ba0) calc_bg_paper_pane_g9

0x4da9,	// (0x00037bb1) list_calc_item_pane_ParamLimits

0x4da9,	// (0x00037bb1) list_calc_item_pane

0xc5d8,	// (0x0003f3e0) list_calc_item_pane_g1

0x4dcd,	// (0x00037bd5) list_calc_item_pane_t1_ParamLimits

0x4dcd,	// (0x00037bd5) list_calc_item_pane_t1

0x4ddf,	// (0x00037be7) list_calc_item_pane_t2_ParamLimits

0x4ddf,	// (0x00037be7) list_calc_item_pane_t2

0x0001,

0xf18b,	// (0x00041f93) list_calc_item_pane_t_ParamLimits

0xf18b,	// (0x00041f93) list_calc_item_pane_t

0xc5e5,	// (0x0003f3ed) cell_calc_pane_g1

0xc5ef,	// (0x0003f3f7) grid_highlight_pane_cp02

0xc611,	// (0x0003f419) bg_calc_display_pane_g1

0x4e0f,	// (0x00037c17) bg_calc_display_pane_g2

0xc61a,	// (0x0003f422) bg_calc_display_pane_g3

0x0002,

0xf195,	// (0x00041f9d) bg_calc_display_pane_g

0x4e19,	// (0x00037c21) cell_qdial_pane_ParamLimits

0x4e19,	// (0x00037c21) cell_qdial_pane

0x4e2f,	// (0x00037c37) cell_qdial_pane_g1_ParamLimits

0x4e2f,	// (0x00037c37) cell_qdial_pane_g1

0x4e3c,	// (0x00037c44) cell_qdial_pane_g2_ParamLimits

0x4e3c,	// (0x00037c44) cell_qdial_pane_g2

0xc623,	// (0x0003f42b) cell_qdial_pane_g3_ParamLimits

0xc623,	// (0x0003f42b) cell_qdial_pane_g3

0x0003,

0xf19c,	// (0x00041fa4) cell_qdial_pane_g_ParamLimits

0xf19c,	// (0x00041fa4) cell_qdial_pane_g

0x4e5a,	// (0x00037c62) cell_qdial_pane_t1_ParamLimits

0x4e5a,	// (0x00037c62) cell_qdial_pane_t1

0x4e72,	// (0x00037c7a) cell_qdial_pane_t2_ParamLimits

0x4e72,	// (0x00037c7a) cell_qdial_pane_t2

0x4e85,	// (0x00037c8d) cell_qdial_pane_t3_ParamLimits

0x4e85,	// (0x00037c8d) cell_qdial_pane_t3

0x0002,

0xf1a5,	// (0x00041fad) cell_qdial_pane_t_ParamLimits

0xf1a5,	// (0x00041fad) cell_qdial_pane_t

0xc26a,	// (0x0003f072) grid_highlight_pane_cp04

0xc62f,	// (0x0003f437) thumbnail_qdial_pane_ParamLimits

0xc62f,	// (0x0003f437) thumbnail_qdial_pane

0xc68b,	// (0x0003f493) list_help_pane

0xc694,	// (0x0003f49c) scroll_pane_cp02

0x4e98,	// (0x00037ca0) help_list_pane_t1_ParamLimits

0x4e98,	// (0x00037ca0) help_list_pane_t1

0x4ec2,	// (0x00037cca) bg_notes_pane_g2

0x4eca,	// (0x00037cd2) bg_notes_pane_g3

0x4ed2,	// (0x00037cda) notes_bg_pane_g1

0x4eda,	// (0x00037ce2) notes_bg_pane_g4

0x4ee2,	// (0x00037cea) notes_bg_pane_g5

0x4eea,	// (0x00037cf2) notes_bg_pane_g6

0x4ef2,	// (0x00037cfa) notes_bg_pane_g7

0x4efa,	// (0x00037d02) notes_bg_pane_g8

0x4f02,	// (0x00037d0a) notes_bg_pane_g9

0x0006,

0xf1c3,	// (0x00041fcb) notes_bg_pane_g

0x4f0a,	// (0x00037d12) list_notes_text_pane_ParamLimits

0x4f0a,	// (0x00037d12) list_notes_text_pane

0xc69d,	// (0x0003f4a5) list_notes_text_pane_g1

0x33f5,	// (0x000361fd) list_notes_text_pane_t1

0xc590,	// (0x0003f398) listscroll_cale_week_pane

0x4f44,	// (0x00037d4c) bg_cale_heading_pane

0xc6b7,	// (0x0003f4bf) bg_cale_pane_cp01

0x4f58,	// (0x00037d60) cale_week_corner_pane

0x4f6e,	// (0x00037d76) cale_week_day_heading_pane

0x4f82,	// (0x00037d8a) cale_week_scroll_pane_g1

0x4f93,	// (0x00037d9b) cale_week_scroll_pane_g2

0x4fa4,	// (0x00037dac) cale_week_scroll_pane_g3

0x4fb5,	// (0x00037dbd) cale_week_scroll_pane_g4

0x4fc6,	// (0x00037dce) cale_week_scroll_pane_g5

0x4fd7,	// (0x00037ddf) cale_week_scroll_pane_g6

0x4fea,	// (0x00037df2) cale_week_scroll_pane_g7

0x4ffd,	// (0x00037e05) cale_week_scroll_pane_g8

0x5010,	// (0x00037e18) cale_week_scroll_pane_g9

0x5021,	// (0x00037e29) cale_week_scroll_pane_g10

0x5032,	// (0x00037e3a) cale_week_scroll_pane_g11

0x5043,	// (0x00037e4b) cale_week_scroll_pane_g12

0x5054,	// (0x00037e5c) cale_week_scroll_pane_g13

0x5065,	// (0x00037e6d) cale_week_scroll_pane_g14

0x5076,	// (0x00037e7e) cale_week_scroll_pane_g15

0x000e,

0xf1d2,	// (0x00041fda) cale_week_scroll_pane_g

0x5087,	// (0x00037e8f) cale_week_time_pane

0x509a,	// (0x00037ea2) grid_cale_week_pane

0x50af,	// (0x00037eb7) scroll_pane_cp08

0x50c9,	// (0x00037ed1) cell_cale_week_pane_ParamLimits

0x50c9,	// (0x00037ed1) cell_cale_week_pane

0x5107,	// (0x00037f0f) cale_week_day_heading_pane_t1

0x5134,	// (0x00037f3c) cale_week_day_heading_pane_t2

0x5161,	// (0x00037f69) cale_week_day_heading_pane_t3

0x518e,	// (0x00037f96) cale_week_day_heading_pane_t4

0x51bb,	// (0x00037fc3) cale_week_day_heading_pane_t5

0x51e8,	// (0x00037ff0) cale_week_day_heading_pane_t6

0x5215,	// (0x0003801d) cale_week_day_heading_pane_t7

0x0006,

0xf1f1,	// (0x00041ff9) cale_week_day_heading_pane_t

0xc6e2,	// (0x0003f4ea) bg_cale_side_pane

0x5242,	// (0x0003804a) cale_week_time_pane_t1

0x526e,	// (0x00038076) cale_week_time_pane_t2

0x529a,	// (0x000380a2) cale_week_time_pane_t3

0x52c6,	// (0x000380ce) cale_week_time_pane_t4

0x52f2,	// (0x000380fa) cale_week_time_pane_t5

0x531e,	// (0x00038126) cale_week_time_pane_t6

0x534a,	// (0x00038152) cale_week_time_pane_t7

0x5376,	// (0x0003817e) cale_week_time_pane_t8

0x0007,

0xf200,	// (0x00042008) cale_week_time_pane_t

0x53a2,	// (0x000381aa) cell_cale_week_pane_g2

0x53bb,	// (0x000381c3) cell_cale_week_pane_g3_ParamLimits

0x53bb,	// (0x000381c3) cell_cale_week_pane_g3

0xc6f0,	// (0x0003f4f8) grid_highlight_pane_cp07

0xc6f8,	// (0x0003f500) listscroll_gms_pane

0xc702,	// (0x0003f50a) grid_gms_pane

0xc70b,	// (0x0003f513) listscroll_gms_pane_g1

0xc713,	// (0x0003f51b) listscroll_gms_pane_g2

0x0001,

0xf211,	// (0x00042019) listscroll_gms_pane_g

0x53d3,	// (0x000381db) scroll_pane_cp010

0x53de,	// (0x000381e6) cell_gms_pane_ParamLimits

0x53de,	// (0x000381e6) cell_gms_pane

0x53f1,	// (0x000381f9) cell_gms_pane_g1

0xc71b,	// (0x0003f523) cell_gms_pane_g2

0xc723,	// (0x0003f52b) cell_gms_pane_g3

0xc72c,	// (0x0003f534) cell_gms_pane_g4

0x0003,

0xf216,	// (0x0004201e) cell_gms_pane_g

0xc735,	// (0x0003f53d) grid_highlight_pane_cp09

0x75aa,	// (0x0003a3b2) phob_pre_status_pane_g1

0x75b2,	// (0x0003a3ba) phob_pre_status_pane_g2

0x75ba,	// (0x0003a3c2) phob_pre_status_pane_g3

0x75c2,	// (0x0003a3ca) phob_pre_status_pane_g4

0x0004,

0xf605,	// (0x0004240d) phob_pre_status_pane_g

0x75d2,	// (0x0003a3da) phob_pre_status_pane_t1

0x75e2,	// (0x0003a3ea) phob_pre_status_pane_t2

0x75f2,	// (0x0003a3fa) phob_pre_status_pane_t3

0x0002,

0xf610,	// (0x00042418) phob_pre_status_pane_t

0xc26a,	// (0x0003f072) bg_list_pane_cp05

0x5401,	// (0x00038209) grid_vorec_pane

0x540b,	// (0x00038213) vorec_t1

0x5419,	// (0x00038221) vorec_t2

0x5427,	// (0x0003822f) vorec_t3

0x5435,	// (0x0003823d) vorec_t4

0x5443,	// (0x0003824b) vorec_t5

0x5451,	// (0x00038259) vorec_t6

0x0006,

0xf21f,	// (0x00042027) vorec_t

0x546d,	// (0x00038275) wait_bar_pane_cp01

0x5475,	// (0x0003827d) cell_vorec_pane_ParamLimits

0x5475,	// (0x0003827d) cell_vorec_pane

0xc73d,	// (0x0003f545) cell_vorec_pane_g1

0xc26a,	// (0x0003f072) grid_highlight_pane_cp05

0x549a,	// (0x000382a2) cams_zoom_pane

0x54a6,	// (0x000382ae) image_vga_pane

0x54b5,	// (0x000382bd) main_camera_pane_g1

0x54c3,	// (0x000382cb) main_camera_pane_g2

0x54cf,	// (0x000382d7) main_camera_pane_g3

0x54dd,	// (0x000382e5) main_camera_pane_g4

0x54eb,	// (0x000382f3) main_camera_pane_g5

0x54f9,	// (0x00038301) main_camera_pane_g6

0x5507,	// (0x0003830f) main_camera_pane_g7

0x0007,

0xf22e,	// (0x00042036) main_camera_pane_g

0x5515,	// (0x0003831d) main_camera_pane_t1

0x5527,	// (0x0003832f) main_camera_pane_t2

0x0001,

0xf23f,	// (0x00042047) main_camera_pane_t

0x554a,	// (0x00038352) cams_zoom_pane_cp_ParamLimits

0x554a,	// (0x00038352) cams_zoom_pane_cp

0x556e,	// (0x00038376) image_cif_pane_ParamLimits

0x556e,	// (0x00038376) image_cif_pane

0x558c,	// (0x00038394) image_subqcif_pane

0x5596,	// (0x0003839e) main_video_pane_g1_ParamLimits

0x5596,	// (0x0003839e) main_video_pane_g1

0x55b6,	// (0x000383be) main_video_pane_g2_ParamLimits

0x55b6,	// (0x000383be) main_video_pane_g2

0x55e6,	// (0x000383ee) main_video_pane_g3_ParamLimits

0x55e6,	// (0x000383ee) main_video_pane_g3

0x560f,	// (0x00038417) main_video_pane_g4_ParamLimits

0x560f,	// (0x00038417) main_video_pane_g4

0x5638,	// (0x00038440) main_video_pane_g5_ParamLimits

0x5638,	// (0x00038440) main_video_pane_g5

0xc753,	// (0x0003f55b) main_video_pane_g6_ParamLimits

0xc753,	// (0x0003f55b) main_video_pane_g6

0x0006,

0xf244,	// (0x0004204c) main_video_pane_g_ParamLimits

0xf244,	// (0x0004204c) main_video_pane_g

0x565a,	// (0x00038462) main_video_pane_t1_ParamLimits

0x565a,	// (0x00038462) main_video_pane_t1

0xc76d,	// (0x0003f575) cams_zoom_pane_g1

0xc776,	// (0x0003f57e) cams_zoom_pane_g2

0xc77f,	// (0x0003f587) cams_zoom_pane_g3

0xc788,	// (0x0003f590) cams_zoom_pane_g4

0x0003,

0xf253,	// (0x0004205b) cams_zoom_pane_g

0x56a4,	// (0x000384ac) grid_cams_pane

0x56b2,	// (0x000384ba) linegrid_cams_pane

0x56c0,	// (0x000384c8) cell_cams_pane_ParamLimits

0x56c0,	// (0x000384c8) cell_cams_pane

0xc791,	// (0x0003f599) cams_burst_image_pane

0xc799,	// (0x0003f5a1) cell_cams_pane_g1

0xc26a,	// (0x0003f072) grid_highlight_pane_cp03

0xc5e5,	// (0x0003f3ed) mp_bg_pane_g1

0xc26a,	// (0x0003f072) bg_list_pane_cp03

0xe336,	// (0x0004113e) bg_mp_pane

0xe33e,	// (0x00041146) grid_mp_pane

0xe346,	// (0x0004114e) media_player_g1

0xe350,	// (0x00041158) media_player_t1

0xe35e,	// (0x00041166) media_player_t2

0xe36c,	// (0x00041174) media_player_t3

0xe37a,	// (0x00041182) media_player_t4

0xe388,	// (0x00041190) media_player_t5

0xe396,	// (0x0004119e) media_player_t6

0xe3a4,	// (0x000411ac) media_player_t7

0x0006,

0xf5ef,	// (0x000423f7) media_player_t

0xe3b2,	// (0x000411ba) wait_bar_pane_cp02

0xf5d4,	// (0x000423dc) main_usb_pane_t

0x75a1,	// (0x0003a3a9) cell_mp_pane

0xc5e5,	// (0x0003f3ed) cell_mp_pane_g1

0xc26a,	// (0x0003f072) grid_highlight_pane_cp06

0xc7a1,	// (0x0003f5a9) grid_skin_colour_pane

0xc7a9,	// (0x0003f5b1) list_highlight_pane_cp03

0x56d5,	// (0x000384dd) skin_g1

0xc7b1,	// (0x0003f5b9) skin_t1

0xc7c0,	// (0x0003f5c8) skin_t2

0x0001,

0xf288,	// (0x00042090) skin_t

0x56df,	// (0x000384e7) cell_skin_colour_pane_ParamLimits

0x56df,	// (0x000384e7) cell_skin_colour_pane

0xc7ce,	// (0x0003f5d6) cell_skin_colour_pane_g1

0x575f,	// (0x00038567) call_video_g1_ParamLimits

0x575f,	// (0x00038567) call_video_g1

0x576f,	// (0x00038577) call_video_g2_ParamLimits

0x576f,	// (0x00038577) call_video_g2

0x0001,

0xf28d,	// (0x00042095) call_video_g_ParamLimits

0xf28d,	// (0x00042095) call_video_g

0x57bf,	// (0x000385c7) call_video_uplink_pane_cp1_ParamLimits

0x57bf,	// (0x000385c7) call_video_uplink_pane_cp1

0xc7e0,	// (0x0003f5e8) call_video_uplink_pane_cp2

0x588d,	// (0x00038695) video_down_crop_pane_ParamLimits

0x588d,	// (0x00038695) video_down_crop_pane

0x597f,	// (0x00038787) video_down_pane_ParamLimits

0x597f,	// (0x00038787) video_down_pane

0xc7e8,	// (0x0003f5f0) video_down_subqcif_pane_ParamLimits

0xc7e8,	// (0x0003f5f0) video_down_subqcif_pane

0xc802,	// (0x0003f60a) video_down_subqcif_pane_cp_ParamLimits

0xc802,	// (0x0003f60a) video_down_subqcif_pane_cp

0xc828,	// (0x0003f630) im_reading_pane_ParamLimits

0xc828,	// (0x0003f630) im_reading_pane

0x5a9c,	// (0x000388a4) im_writing_pane_ParamLimits

0x5a9c,	// (0x000388a4) im_writing_pane

0x5aba,	// (0x000388c2) im_reading_pane_t1

0xc842,	// (0x0003f64a) list_im_pane

0xc853,	// (0x0003f65b) scroll_pane_cp07

0x5b02,	// (0x0003890a) im_writing_pane_t1_ParamLimits

0x5b02,	// (0x0003890a) im_writing_pane_t1

0xc86c,	// (0x0003f674) im_writing_pane_t2_ParamLimits

0xc86c,	// (0x0003f674) im_writing_pane_t2

0x0001,

0xf297,	// (0x0004209f) im_writing_pane_t_ParamLimits

0xf297,	// (0x0004209f) im_writing_pane_t

0xc26a,	// (0x0003f072) input_focus_pane_cp04

0xc26a,	// (0x0003f072) input_focus_pane_cp05

0x5b14,	// (0x0003891c) list_im_single_pane_ParamLimits

0x5b14,	// (0x0003891c) list_im_single_pane

0x5b30,	// (0x00038938) list_single_im_pane_t1

0x7565,	// (0x0003a36d) blid_accuracy_pane

0x756d,	// (0x0003a375) blid_compass_pane

0x7577,	// (0x0003a37f) main_location_t1

0x7585,	// (0x0003a38d) main_location_t2

0x7593,	// (0x0003a39b) main_location_t3

0x0002,

0xf5fe,	// (0x00042406) main_location_t

0xc26a,	// (0x0003f072) aid_levels_location

0xc5e5,	// (0x0003f3ed) blid_accuracy_pane_g1

0xc5e5,	// (0x0003f3ed) blid_accuracy_pane_g2

0x0001,

0xf2f9,	// (0x00042101) blid_accuracy_pane_g

0xc8b4,	// (0x0003f6bc) wml_content_pane

0xc8f2,	// (0x0003f6fa) wml_button_pane_ParamLimits

0xc8f2,	// (0x0003f6fa) wml_button_pane

0x5b3f,	// (0x00038947) wml_list_single_large_pane_ParamLimits

0x5b3f,	// (0x00038947) wml_list_single_large_pane

0x5b61,	// (0x00038969) wml_list_single_medium_pane_ParamLimits

0x5b61,	// (0x00038969) wml_list_single_medium_pane

0x5b87,	// (0x0003898f) wml_list_single_small_pane_ParamLimits

0x5b87,	// (0x0003898f) wml_list_single_small_pane

0xc906,	// (0x0003f70e) wml_selection_box_pane_ParamLimits

0xc906,	// (0x0003f70e) wml_selection_box_pane

0xc919,	// (0x0003f721) wml_list_single_pane_t1

0xc928,	// (0x0003f730) wml_list_single_medium_pane_t1

0xc937,	// (0x0003f73f) wml_list_single_large_pane_t1

0xc946,	// (0x0003f74e) input_focus_pane_cp02_ParamLimits

0xc946,	// (0x0003f74e) input_focus_pane_cp02

0xc959,	// (0x0003f761) wml_selection_box_pane_g1

0xc962,	// (0x0003f76a) wml_selection_box_pane_t1_ParamLimits

0xc962,	// (0x0003f76a) wml_selection_box_pane_t1

0xc4c5,	// (0x0003f2cd) bg_wml_button_pane_ParamLimits

0xc4c5,	// (0x0003f2cd) bg_wml_button_pane

0xc97a,	// (0x0003f782) wml_button_pane_g1

0xc982,	// (0x0003f78a) wml_button_pane_t1

0xc97a,	// (0x0003f782) wml_button_bg_pane_g1

0xc992,	// (0x0003f79a) wml_button_bg_pane_g2

0xc99a,	// (0x0003f7a2) wml_button_bg_pane_g3

0xc9a2,	// (0x0003f7aa) wml_button_bg_pane_g4

0xc9aa,	// (0x0003f7b2) wml_button_bg_pane_g5

0xc9b2,	// (0x0003f7ba) wml_button_bg_pane_g6

0xc9ba,	// (0x0003f7c2) wml_button_bg_pane_g7

0xc9c2,	// (0x0003f7ca) wml_button_bg_pane_g8

0xc9ca,	// (0x0003f7d2) wml_button_bg_pane_g9

0x0008,

0xf29c,	// (0x000420a4) wml_button_bg_pane_g

0x5bb2,	// (0x000389ba) bg_list_pane_cp02

0xc9d2,	// (0x0003f7da) mce_header_pane_ParamLimits

0xc9d2,	// (0x0003f7da) mce_header_pane

0xc9e8,	// (0x0003f7f0) mce_icon_pane

0xc9e8,	// (0x0003f7f0) mce_image_pane

0xc9f1,	// (0x0003f7f9) mce_text_pane_ParamLimits

0xc9f1,	// (0x0003f7f9) mce_text_pane

0x5bbc,	// (0x000389c4) scroll_pane_cp03

0xc8ea,	// (0x0003f6f2) scroll_pane_cp04

0xca04,	// (0x0003f80c) scroll_pane_cp05_ParamLimits

0xca04,	// (0x0003f80c) scroll_pane_cp05

0x5bc6,	// (0x000389ce) mce_header_field_pane_ParamLimits

0x5bc6,	// (0x000389ce) mce_header_field_pane

0x5be8,	// (0x000389f0) mce_header_field_pane_2_ParamLimits

0x5be8,	// (0x000389f0) mce_header_field_pane_2

0x5bfe,	// (0x00038a06) mce_header_field_pane_3

0x5c06,	// (0x00038a0e) list_single_mce_message_pane_ParamLimits

0x5c06,	// (0x00038a0e) list_single_mce_message_pane

0x5c25,	// (0x00038a2d) list_single_mce_smart_pane_ParamLimits

0x5c25,	// (0x00038a2d) list_single_mce_smart_pane

0xca10,	// (0x0003f818) input_focus_pane_cp03

0xca19,	// (0x0003f821) list_header_data_pane

0x5c4f,	// (0x00038a57) mce_header_field_pane_t1

0x5c5f,	// (0x00038a67) list_single_mce_header_pane_ParamLimits

0x5c5f,	// (0x00038a67) list_single_mce_header_pane

0xca21,	// (0x0003f829) list_single_mce_header_pane_t1

0xca30,	// (0x0003f838) list_single_mce_message_pane_g1

0xca38,	// (0x0003f840) list_single_mce_message_pane_t1

0x5c9b,	// (0x00038aa3) bg_cale_heading_pane_cp01_ParamLimits

0x5c9b,	// (0x00038aa3) bg_cale_heading_pane_cp01

0xca46,	// (0x0003f84e) bg_cale_pane_cp02_ParamLimits

0xca46,	// (0x0003f84e) bg_cale_pane_cp02

0x5cbe,	// (0x00038ac6) cale_month_corner_pane

0x5cd4,	// (0x00038adc) cale_month_day_heading_pane_ParamLimits

0x5cd4,	// (0x00038adc) cale_month_day_heading_pane

0x5d07,	// (0x00038b0f) cale_month_pane_g1_ParamLimits

0x5d07,	// (0x00038b0f) cale_month_pane_g1

0x5d23,	// (0x00038b2b) cale_month_pane_g2_ParamLimits

0x5d23,	// (0x00038b2b) cale_month_pane_g2

0x5d3e,	// (0x00038b46) cale_month_pane_g3_ParamLimits

0x5d3e,	// (0x00038b46) cale_month_pane_g3

0x5d6a,	// (0x00038b72) cale_month_pane_g4_ParamLimits

0x5d6a,	// (0x00038b72) cale_month_pane_g4

0x5d96,	// (0x00038b9e) cale_month_pane_g5_ParamLimits

0x5d96,	// (0x00038b9e) cale_month_pane_g5

0x5dc2,	// (0x00038bca) cale_month_pane_g6_ParamLimits

0x5dc2,	// (0x00038bca) cale_month_pane_g6

0x5dfe,	// (0x00038c06) cale_month_pane_g7_ParamLimits

0x5dfe,	// (0x00038c06) cale_month_pane_g7

0x5e3a,	// (0x00038c42) cale_month_pane_g8_ParamLimits

0x5e3a,	// (0x00038c42) cale_month_pane_g8

0x5e76,	// (0x00038c7e) cale_month_pane_g9_ParamLimits

0x5e76,	// (0x00038c7e) cale_month_pane_g9

0x5eb0,	// (0x00038cb8) cale_month_pane_g10_ParamLimits

0x5eb0,	// (0x00038cb8) cale_month_pane_g10

0x5eea,	// (0x00038cf2) cale_month_pane_g11_ParamLimits

0x5eea,	// (0x00038cf2) cale_month_pane_g11

0x5f24,	// (0x00038d2c) cale_month_pane_g12_ParamLimits

0x5f24,	// (0x00038d2c) cale_month_pane_g12

0x5f5e,	// (0x00038d66) cale_month_pane_g13_ParamLimits

0x5f5e,	// (0x00038d66) cale_month_pane_g13

0x000c,

0xf2af,	// (0x000420b7) cale_month_pane_g_ParamLimits

0xf2af,	// (0x000420b7) cale_month_pane_g

0x5f98,	// (0x00038da0) cale_month_week_pane

0x5fab,	// (0x00038db3) grid_cale_month_pane_ParamLimits

0x5fab,	// (0x00038db3) grid_cale_month_pane

0x5fd9,	// (0x00038de1) cale_month_day_heading_pane_t1

0x6037,	// (0x00038e3f) cale_month_day_heading_pane_t2

0x609c,	// (0x00038ea4) cale_month_day_heading_pane_t3

0x6101,	// (0x00038f09) cale_month_day_heading_pane_t4

0x6166,	// (0x00038f6e) cale_month_day_heading_pane_t5

0x61d3,	// (0x00038fdb) cale_month_day_heading_pane_t6

0x6248,	// (0x00039050) cale_month_day_heading_pane_t7

0x0006,

0xf2ca,	// (0x000420d2) cale_month_day_heading_pane_t

0xc6e2,	// (0x0003f4ea) bg_cale_side_pane_cp01

0x62bd,	// (0x000390c5) cale_month_week_pane_t1

0x62e8,	// (0x000390f0) cale_month_week_pane_t2

0x6313,	// (0x0003911b) cale_month_week_pane_t3

0x633e,	// (0x00039146) cale_month_week_pane_t4

0x6369,	// (0x00039171) cale_month_week_pane_t5

0x6394,	// (0x0003919c) cale_month_week_pane_t6

0x0005,

0xf2d9,	// (0x000420e1) cale_month_week_pane_t

0x63bf,	// (0x000391c7) cell_cale_month_pane_ParamLimits

0x63bf,	// (0x000391c7) cell_cale_month_pane

0x648d,	// (0x00039295) cell_cale_month_pane_g1

0x6499,	// (0x000392a1) cell_cale_month_pane_t1_ParamLimits

0x6499,	// (0x000392a1) cell_cale_month_pane_t1

0xc6f0,	// (0x0003f4f8) grid_highlight_pane_cp08

0xc5e5,	// (0x0003f3ed) main_smil_g1

0x64b5,	// (0x000392bd) smil_status_pane

0xca7b,	// (0x0003f883) smil_text_pane

0xe254,	// (0x0004105c) bg_popup_call3_rect_pane_g8

0xe25c,	// (0x00041064) bg_popup_call3_rect_pane_g9

0x0008,

0xf592,	// (0x0004239a) bg_popup_call3_rect_pane_g

0xe4f1,	// (0x000412f9) smil_status_volume_pane_g1

0xca85,	// (0x0003f88d) smil_status_pane_t1

0x7954,	// (0x0003a75c) volume_smil_pane

0xca9c,	// (0x0003f8a4) list_smil_text_pane

0x64c8,	// (0x000392d0) scroll_pane_cp011

0x64d3,	// (0x000392db) smil_text_list_pane_t1_ParamLimits

0x64d3,	// (0x000392db) smil_text_list_pane_t1

0x6537,	// (0x0003933f) aid_volume_smil_ParamLimits

0x6537,	// (0x0003933f) aid_volume_smil

0xc5e5,	// (0x0003f3ed) smil_volume_pane_g1

0xc5e5,	// (0x0003f3ed) smil_volume_pane_g2

0x0001,

0xf2f9,	// (0x00042101) smil_volume_pane_g

0xc590,	// (0x0003f398) listscroll_cale_day_pane

0xcaa6,	// (0x0003f8ae) bg_cale_pane

0xcabe,	// (0x0003f8c6) list_cale_pane

0xcacf,	// (0x0003f8d7) scroll_pane_cp09

0xcae0,	// (0x0003f8e8) cale_bg_pane_g1

0xcae8,	// (0x0003f8f0) cale_bg_pane_g2

0xcaf0,	// (0x0003f8f8) cale_bg_pane_g3

0xcaf8,	// (0x0003f900) cale_bg_pane_g4

0xcb00,	// (0x0003f908) cale_bg_pane_g5

0xcb08,	// (0x0003f910) cale_bg_pane_g6

0xcb10,	// (0x0003f918) cale_bg_pane_g7

0xcb18,	// (0x0003f920) cale_bg_pane_g8

0xcb20,	// (0x0003f928) cale_bg_pane_g9

0x0008,

0xf2fe,	// (0x00042106) cale_bg_pane_g

0x6559,	// (0x00039361) list_cale_time_pane_ParamLimits

0x6559,	// (0x00039361) list_cale_time_pane

0x6571,	// (0x00039379) list_cale_time_pane_g1_ParamLimits

0x6571,	// (0x00039379) list_cale_time_pane_g1

0xcb28,	// (0x0003f930) list_cale_time_pane_g2_ParamLimits

0xcb28,	// (0x0003f930) list_cale_time_pane_g2

0x657d,	// (0x00039385) list_cale_time_pane_g3_ParamLimits

0x657d,	// (0x00039385) list_cale_time_pane_g3

0x658b,	// (0x00039393) list_cale_time_pane_g4_ParamLimits

0x658b,	// (0x00039393) list_cale_time_pane_g4

0x6599,	// (0x000393a1) list_cale_time_pane_g5_ParamLimits

0x6599,	// (0x000393a1) list_cale_time_pane_g5

0x0005,

0xf311,	// (0x00042119) list_cale_time_pane_g_ParamLimits

0xf311,	// (0x00042119) list_cale_time_pane_g

0x65a7,	// (0x000393af) list_cale_time_pane_t1_ParamLimits

0x65a7,	// (0x000393af) list_cale_time_pane_t1

0x65cf,	// (0x000393d7) list_cale_time_pane_t2_ParamLimits

0x65cf,	// (0x000393d7) list_cale_time_pane_t2

0x68e4,	// (0x000396ec) aid_blid_cardinal_pane

0x6926,	// (0x0003972e) compass_pane_t4

0x65f7,	// (0x000393ff) list_cale_time_pane_t4_ParamLimits

0x65f7,	// (0x000393ff) list_cale_time_pane_t4

0x6934,	// (0x0003973c) compass_pane_t5

0x6944,	// (0x0003974c) compass_pane_t6

0x6952,	// (0x0003975a) compass_pane_t7

0xcf36,	// (0x0003fd3e) navi_pane_cc_t1

0xd08b,	// (0x0003fe93) aid_phob_thumbnail_center_pane

0x705b,	// (0x00039e63) main_postcard_pane_g4_ParamLimits

0x0002,

0xf31e,	// (0x00042126) list_cale_time_pane_t_ParamLimits

0xf31e,	// (0x00042126) list_cale_time_pane_t

0x49b4,	// (0x000377bc) bg_popup_window_pane_cp02_ParamLimits

0x49b4,	// (0x000377bc) bg_popup_window_pane_cp02

0xcb42,	// (0x0003f94a) heading_pane_cp01_ParamLimits

0xcb42,	// (0x0003f94a) heading_pane_cp01

0xcb4e,	// (0x0003f956) loc_req_pane_ParamLimits

0xcb4e,	// (0x0003f956) loc_req_pane

0xcb5e,	// (0x0003f966) loc_type_pane_ParamLimits

0xcb5e,	// (0x0003f966) loc_type_pane

0xcb70,	// (0x0003f978) loc_type_pane_t1_ParamLimits

0xcb70,	// (0x0003f978) loc_type_pane_t1

0xcb82,	// (0x0003f98a) loc_type_pane_t2_ParamLimits

0xcb82,	// (0x0003f98a) loc_type_pane_t2

0xcb94,	// (0x0003f99c) loc_type_pane_t3_ParamLimits

0xcb94,	// (0x0003f99c) loc_type_pane_t3

0x0002,

0xf325,	// (0x0004212d) loc_type_pane_t_ParamLimits

0xf325,	// (0x0004212d) loc_type_pane_t

0xcba6,	// (0x0003f9ae) list_loc_req_pane

0xcbb0,	// (0x0003f9b8) scroll_pane_cp012

0x661f,	// (0x00039427) list_single_loc_request_popup_menu_pane_ParamLimits

0x661f,	// (0x00039427) list_single_loc_request_popup_menu_pane

0xcbbb,	// (0x0003f9c3) list_single_loc_request_popup_menu_pane_g1_ParamLimits

0xcbbb,	// (0x0003f9c3) list_single_loc_request_popup_menu_pane_g1

0xcbc7,	// (0x0003f9cf) list_single_loc_request_popup_menu_pane_g2_ParamLimits

0xcbc7,	// (0x0003f9cf) list_single_loc_request_popup_menu_pane_g2

0x0001,

0xf32c,	// (0x00042134) list_single_loc_request_popup_menu_pane_g_ParamLimits

0xf32c,	// (0x00042134) list_single_loc_request_popup_menu_pane_g

0xcbd3,	// (0x0003f9db) list_single_loc_request_popup_menu_pane_t1_ParamLimits

0xcbd3,	// (0x0003f9db) list_single_loc_request_popup_menu_pane_t1

0x6631,	// (0x00039439) bg_popup_window_pane_cp03_ParamLimits

0x6631,	// (0x00039439) bg_popup_window_pane_cp03

0x663f,	// (0x00039447) heading_loc_req_pane_ParamLimits

0x663f,	// (0x00039447) heading_loc_req_pane

0x664b,	// (0x00039453) popup_dyc_status_message_window_g1_ParamLimits

0x664b,	// (0x00039453) popup_dyc_status_message_window_g1

0x6657,	// (0x0003945f) popup_dyc_status_message_window_t1_ParamLimits

0x6657,	// (0x0003945f) popup_dyc_status_message_window_t1

0x6669,	// (0x00039471) popup_dyc_status_message_window_t2_ParamLimits

0x6669,	// (0x00039471) popup_dyc_status_message_window_t2

0x667b,	// (0x00039483) popup_dyc_status_message_window_t3_ParamLimits

0x667b,	// (0x00039483) popup_dyc_status_message_window_t3

0x0002,

0xf331,	// (0x00042139) popup_dyc_status_message_window_t_ParamLimits

0xf331,	// (0x00042139) popup_dyc_status_message_window_t

0xc26a,	// (0x0003f072) bg_heading_pane_cp01

0xcbe9,	// (0x0003f9f1) heading_loc_req_pane_g1

0xcbf1,	// (0x0003f9f9) heading_loc_req_pane_g2

0xcbf9,	// (0x0003fa01) heading_loc_req_pane_g3

0x0002,

0xf338,	// (0x00042140) heading_loc_req_pane_g

0xcc01,	// (0x0003fa09) heading_loc_req_pane_t1

0xcc11,	// (0x0003fa19) bg_popup_sub_pane_cp01_ParamLimits

0xcc11,	// (0x0003fa19) bg_popup_sub_pane_cp01

0xcc1f,	// (0x0003fa27) popup_cale_events_window_g1_ParamLimits

0xcc1f,	// (0x0003fa27) popup_cale_events_window_g1

0xcc3f,	// (0x0003fa47) popup_cale_events_window_g2_ParamLimits

0xcc3f,	// (0x0003fa47) popup_cale_events_window_g2

0x0001,

0xf36c,	// (0x00042174) popup_cale_events_window_g_ParamLimits

0xf36c,	// (0x00042174) popup_cale_events_window_g

0xcc5f,	// (0x0003fa67) popup_cale_events_window_t1_ParamLimits

0xcc5f,	// (0x0003fa67) popup_cale_events_window_t1

0xcc71,	// (0x0003fa79) popup_cale_events_window_t2_ParamLimits

0xcc71,	// (0x0003fa79) popup_cale_events_window_t2

0xccaf,	// (0x0003fab7) popup_cale_events_window_t3_ParamLimits

0xccaf,	// (0x0003fab7) popup_cale_events_window_t3

0xcce9,	// (0x0003faf1) popup_cale_events_window_t4_ParamLimits

0xcce9,	// (0x0003faf1) popup_cale_events_window_t4

0x0003,

0xf371,	// (0x00042179) popup_cale_events_window_t_ParamLimits

0xf371,	// (0x00042179) popup_cale_events_window_t

0x66a5,	// (0x000394ad) call_type_pane

0xcd1f,	// (0x0003fb27) popup_call_status_window_g1

0x66b1,	// (0x000394b9) popup_call_status_window_g2

0x66bd,	// (0x000394c5) popup_call_status_window_g3

0x0002,

0xf37a,	// (0x00042182) popup_call_status_window_g

0xcd2d,	// (0x0003fb35) call_type_pane_g1

0xcd36,	// (0x0003fb3e) call_type_pane_g2

0x0001,

0xf381,	// (0x00042189) call_type_pane_g

0xc26a,	// (0x0003f072) bg_popup_sub_pane_cp02

0xcd3f,	// (0x0003fb47) listscroll_popup_wml_pane

0xcd47,	// (0x0003fb4f) list_wml_pane

0xcd51,	// (0x0003fb59) scroll_pane_cp013

0xcd5c,	// (0x0003fb64) list_single_graphic_popup_wml_pane_ParamLimits

0xcd5c,	// (0x0003fb64) list_single_graphic_popup_wml_pane

0xc5e5,	// (0x0003f3ed) list_single_graphic_popup_wml_pane_g1

0xcd70,	// (0x0003fb78) list_single_graphic_popup_wml_pane_g2

0x0001,

0xf386,	// (0x0004218e) list_single_graphic_popup_wml_pane_g

0xcd78,	// (0x0003fb80) list_single_graphic_popup_wml_pane_t1

0xcd8e,	// (0x0003fb96) aid_call_pane

0xc4bd,	// (0x0003f2c5) popup_clock_analogue_window_g1

0xc4bd,	// (0x0003f2c5) popup_clock_analogue_window_g2

0x66c9,	// (0x000394d1) popup_clock_analogue_window_g3

0x66c9,	// (0x000394d1) popup_clock_analogue_window_g4

0xc5e5,	// (0x0003f3ed) popup_clock_analogue_window_g5

0x0004,

0xf38b,	// (0x00042193) popup_clock_analogue_window_g

0x66d1,	// (0x000394d9) popup_clock_analogue_window_t1

0x66df,	// (0x000394e7) clock_digital_number_pane_ParamLimits

0x66df,	// (0x000394e7) clock_digital_number_pane

0x66eb,	// (0x000394f3) clock_digital_number_pane_cp02_ParamLimits

0x66eb,	// (0x000394f3) clock_digital_number_pane_cp02

0x66f7,	// (0x000394ff) clock_digital_number_pane_cp03_ParamLimits

0x66f7,	// (0x000394ff) clock_digital_number_pane_cp03

0x6703,	// (0x0003950b) clock_digital_number_pane_cp04_ParamLimits

0x6703,	// (0x0003950b) clock_digital_number_pane_cp04

0x670f,	// (0x00039517) clock_digital_separator_pane_ParamLimits

0x670f,	// (0x00039517) clock_digital_separator_pane

0x671b,	// (0x00039523) popup_clock_digital_window_t1

0xc5e5,	// (0x0003f3ed) clock_digital_number_pane_g1

0xc5e5,	// (0x0003f3ed) clock_digital_number_pane_g2

0x0001,

0xf2f9,	// (0x00042101) clock_digital_number_pane_g

0xc5e5,	// (0x0003f3ed) clock_digital_separator_pane_g1

0xc5e5,	// (0x0003f3ed) clock_digital_separator_pane_g2

0x0001,

0xf2f9,	// (0x00042101) clock_digital_separator_pane_g

0xc26a,	// (0x0003f072) bg_popup_window_pane_cp04

0xcd96,	// (0x0003fb9e) heading_pane_cp03

0xcd9e,	// (0x0003fba6) listscroll_popup_gms_pane

0xcda6,	// (0x0003fbae) grid_large_graphic_popup_pane

0xcdb0,	// (0x0003fbb8) listscroll_popup_gms_pane_g1

0xcdb8,	// (0x0003fbc0) listscroll_popup_gms_pane_g2

0x0001,

0xf396,	// (0x0004219e) listscroll_popup_gms_pane_g

0xc8ea,	// (0x0003f6f2) scroll_pane_cp014

0x6738,	// (0x00039540) cell_large_graphic_popup_pane_ParamLimits

0x6738,	// (0x00039540) cell_large_graphic_popup_pane

0x6752,	// (0x0003955a) cell_large_graphic_popup_pane_g1_ParamLimits

0x6752,	// (0x0003955a) cell_large_graphic_popup_pane_g1

0xcdc0,	// (0x0003fbc8) cell_large_graphic_popup_pane_g2_ParamLimits

0xcdc0,	// (0x0003fbc8) cell_large_graphic_popup_pane_g2

0xcdcc,	// (0x0003fbd4) cell_large_graphic_popup_pane_g3_ParamLimits

0xcdcc,	// (0x0003fbd4) cell_large_graphic_popup_pane_g3

0xcdd9,	// (0x0003fbe1) cell_large_graphic_popup_pane_g4_ParamLimits

0xcdd9,	// (0x0003fbe1) cell_large_graphic_popup_pane_g4

0x0003,

0xf39b,	// (0x000421a3) cell_large_graphic_popup_pane_g_ParamLimits

0xf39b,	// (0x000421a3) cell_large_graphic_popup_pane_g

0xcde9,	// (0x0003fbf1) grid_highlight_pane_cp010

0xc5e5,	// (0x0003f3ed) bg_popup_call_pane_g1

0xcdf3,	// (0x0003fbfb) list_single_graphic_popup_conf_pane_ParamLimits

0xcdf3,	// (0x0003fbfb) list_single_graphic_popup_conf_pane

0xce05,	// (0x0003fc0d) list_highlight_pane_cp01

0xce0e,	// (0x0003fc16) list_single_graphic_popup_conf_pane_g1

0xce16,	// (0x0003fc1e) list_single_graphic_popup_conf_pane_g2

0x0001,

0xf3a4,	// (0x000421ac) list_single_graphic_popup_conf_pane_g

0xce1e,	// (0x0003fc26) list_single_graphic_popup_conf_pane_t1

0xce2c,	// (0x0003fc34) linegrid_cams_pane_g1

0x675e,	// (0x00039566) linegrid_cams_pane_g2

0xc723,	// (0x0003f52b) linegrid_cams_pane_g3

0xce35,	// (0x0003fc3d) linegrid_cams_pane_g4

0x6767,	// (0x0003956f) linegrid_cams_pane_g5

0x6770,	// (0x00039578) linegrid_cams_pane_g6

0xc72c,	// (0x0003f534) linegrid_cams_pane_g7

0x0006,

0xf3a9,	// (0x000421b1) linegrid_cams_pane_g

0xce3e,	// (0x0003fc46) popup_clock_analogue_window

0xce3e,	// (0x0003fc46) popup_clock_digital_window

0xc26a,	// (0x0003f072) popup_phob_thumbnail_window

0xc5e5,	// (0x0003f3ed) call_video_uplink_pane_g1

0xce47,	// (0x0003fc4f) call_video_uplink_pane_g2

0x0001,

0xf3b8,	// (0x000421c0) call_video_uplink_pane_g

0xce4f,	// (0x0003fc57) video_uplink_pane

0xce57,	// (0x0003fc5f) mce_image_pane_g1

0x677b,	// (0x00039583) mce_image_pane_g2

0x6785,	// (0x0003958d) mce_image_pane_g3

0x678f,	// (0x00039597) mce_image_pane_g4

0x6797,	// (0x0003959f) mce_image_pane_g5

0x0004,

0xf3bd,	// (0x000421c5) mce_image_pane_g

0xce61,	// (0x0003fc69) control_top_pane_stacon_cp01_ParamLimits

0xce61,	// (0x0003fc69) control_top_pane_stacon_cp01

0xce75,	// (0x0003fc7d) uni_indicator_pane_stacon_cp01_ParamLimits

0xce75,	// (0x0003fc7d) uni_indicator_pane_stacon_cp01

0xce86,	// (0x0003fc8e) bg_popup_sub_pane_cp03

0x679f,	// (0x000395a7) chi_dic_find_pane

0x67a7,	// (0x000395af) listscroll_chi_dic_pane

0x67b0,	// (0x000395b8) main_pane_chidic_g1

0x67c3,	// (0x000395cb) chi_dic_find_pane_t1

0xce90,	// (0x0003fc98) find_chidic_pane

0xce99,	// (0x0003fca1) chi_dic_list_pane_ParamLimits

0xce99,	// (0x0003fca1) chi_dic_list_pane

0xceaa,	// (0x0003fcb2) scroll_pane_cp020

0x67d1,	// (0x000395d9) find_chidic_pane_t1

0xc26a,	// (0x0003f072) input_focus_pane_cp06

0x67e0,	// (0x000395e8) list_chi_dic_pane_ParamLimits

0x67e0,	// (0x000395e8) list_chi_dic_pane

0x67f8,	// (0x00039600) list_chi_dic_pane_t1_ParamLimits

0x67f8,	// (0x00039600) list_chi_dic_pane_t1

0xc26a,	// (0x0003f072) list_highlight_pane_cp020

0xceb2,	// (0x0003fcba) bg_cale_heading_pane_g1

0x680b,	// (0x00039613) bg_cale_heading_pane_g2

0x6813,	// (0x0003961b) bg_cale_heading_pane_g3

0x681b,	// (0x00039623) bg_cale_heading_pane_g4

0x6825,	// (0x0003962d) bg_cale_heading_pane_g5

0x682f,	// (0x00039637) bg_cale_heading_pane_g6

0x6837,	// (0x0003963f) bg_cale_heading_pane_g7

0x683f,	// (0x00039647) bg_cale_heading_pane_g8

0x6849,	// (0x00039651) bg_cale_heading_pane_g9

0x0008,

0xf3c8,	// (0x000421d0) bg_cale_heading_pane_g

0xceb2,	// (0x0003fcba) bg_cale_side_pane_g1

0x6853,	// (0x0003965b) bg_cale_side_pane_g2

0x685b,	// (0x00039663) bg_cale_side_pane_g3

0x6863,	// (0x0003966b) bg_cale_side_pane_g4

0x686b,	// (0x00039673) bg_cale_side_pane_g5

0x6873,	// (0x0003967b) bg_cale_side_pane_g6

0x687b,	// (0x00039683) bg_cale_side_pane_g7

0x6883,	// (0x0003968b) bg_cale_side_pane_g8

0x688b,	// (0x00039693) bg_cale_side_pane_g9

0x0008,

0xf3db,	// (0x000421e3) bg_cale_side_pane_g

0x6893,	// (0x0003969b) popup_call_status_window_ParamLimits

0x6893,	// (0x0003969b) popup_call_status_window

0xceba,	// (0x0003fcc2) stacon_top_pane

0xcec2,	// (0x0003fcca) status_pane_ParamLimits

0xcec2,	// (0x0003fcca) status_pane

0xced7,	// (0x0003fcdf) status_small_pane

0xcedf,	// (0x0003fce7) control_pane

0xc26a,	// (0x0003f072) stacon_bottom_pane

0xcee7,	// (0x0003fcef) list_single_mce_smart_pane_t1_ParamLimits

0xcee7,	// (0x0003fcef) list_single_mce_smart_pane_t1

0xcefa,	// (0x0003fd02) list_single_mce_smart_pane_t2_ParamLimits

0xcefa,	// (0x0003fd02) list_single_mce_smart_pane_t2

0x0001,

0xf3ee,	// (0x000421f6) list_single_mce_smart_pane_t_ParamLimits

0xf3ee,	// (0x000421f6) list_single_mce_smart_pane_t

0x689f,	// (0x000396a7) compass_pane

0x68aa,	// (0x000396b2) main_location2_pane_t1

0x68be,	// (0x000396c6) main_location2_pane_t2

0x68be,	// (0x000396c6) main_location2_pane_t3

0x0003,

0xf3f3,	// (0x000421fb) main_location2_pane_t

0xcf19,	// (0x0003fd21) compass_pane_g1_ParamLimits

0xcf19,	// (0x0003fd21) compass_pane_g1

0x6908,	// (0x00039710) compass_pane_t1

0x6917,	// (0x0003971f) compass_pane_t2

0x0005,

0xf3fc,	// (0x00042204) compass_pane_t

0x6962,	// (0x0003976a) text_secondary_cp61

0xcf2d,	// (0x0003fd35) navi_pane_cams_g5

0xcf50,	// (0x0003fd58) navi_pane_im_t1

0xcf5e,	// (0x0003fd66) navi_pane_mp_g1_ParamLimits

0xcf5e,	// (0x0003fd66) navi_pane_mp_g1

0xcf72,	// (0x0003fd7a) navi_pane_mp_g2_ParamLimits

0xcf72,	// (0x0003fd7a) navi_pane_mp_g2

0xcf7e,	// (0x0003fd86) navi_pane_mp_g3_ParamLimits

0xcf7e,	// (0x0003fd86) navi_pane_mp_g3

0x0002,

0xf410,	// (0x00042218) navi_pane_mp_g_ParamLimits

0xf410,	// (0x00042218) navi_pane_mp_g

0xcf8a,	// (0x0003fd92) navi_pane_mp_t1

0xcf98,	// (0x0003fda0) navi_pane_mp_t2

0x0002,

0xf417,	// (0x0004221f) navi_pane_mp_t

0xcfd4,	// (0x0003fddc) navi_pane_vt_g1

0xcf8a,	// (0x0003fd92) navi_pane_vt_t1

0xcfdc,	// (0x0003fde4) navi_slider_pane

0xcfe4,	// (0x0003fdec) zooming_pane

0xcfec,	// (0x0003fdf4) navi_slider_pane_g1

0x6a79,	// (0x00039881) navi_slider_pane_g2

0x0006,

0xf41e,	// (0x00042226) navi_slider_pane_g

0xd010,	// (0x0003fe18) aid_levels_zoom

0xd018,	// (0x0003fe20) zooming_pane_g1

0xd020,	// (0x0003fe28) zooming_pane_g2

0xd020,	// (0x0003fe28) zooming_pane_g3

0x0002,

0xf42d,	// (0x00042235) zooming_pane_g

0xd028,	// (0x0003fe30) level_10_zoom

0xd031,	// (0x0003fe39) level_11_zoom

0xd03a,	// (0x0003fe42) level_1_zoom

0xd043,	// (0x0003fe4b) level_2_zoom

0xd04c,	// (0x0003fe54) level_3_zoom

0xd055,	// (0x0003fe5d) level_4_zoom

0xd05e,	// (0x0003fe66) level_5_zoom

0xd067,	// (0x0003fe6f) level_6_zoom

0xd070,	// (0x0003fe78) level_7_zoom

0xd079,	// (0x0003fe81) level_8_zoom

0xd082,	// (0x0003fe8a) level_9_zoom

0xd093,	// (0x0003fe9b) popup_phob_thumbnail_window_g1

0xd09b,	// (0x0003fea3) popup_phob_thumbnail_window_g2

0x0001,

0xf434,	// (0x0004223c) popup_phob_thumbnail_window_g

0xe3ba,	// (0x000411c2) level_1_location

0xe3c2,	// (0x000411ca) level_2_location

0xe3ca,	// (0x000411d2) level_3_location

0xe3d2,	// (0x000411da) level_4_location

0xcfe4,	// (0x0003fdec) level_5_location

0x6a8b,	// (0x00039893) mce_icon_pane_g1

0x6a93,	// (0x0003989b) mce_icon_pane_g2

0x0001,

0xf439,	// (0x00042241) mce_icon_pane_g

0x6a9b,	// (0x000398a3) main_mup_pane_g1_ParamLimits

0x6a9b,	// (0x000398a3) main_mup_pane_g1

0x6ab3,	// (0x000398bb) main_mup_pane_g2_ParamLimits

0x6ab3,	// (0x000398bb) main_mup_pane_g2

0x6acf,	// (0x000398d7) main_mup_pane_g3_ParamLimits

0x6acf,	// (0x000398d7) main_mup_pane_g3

0x6aeb,	// (0x000398f3) main_mup_pane_g4_ParamLimits

0x6aeb,	// (0x000398f3) main_mup_pane_g4

0x6aff,	// (0x00039907) main_mup_pane_g5_ParamLimits

0x6aff,	// (0x00039907) main_mup_pane_g5

0x6b20,	// (0x00039928) main_mup_pane_g6_ParamLimits

0x6b20,	// (0x00039928) main_mup_pane_g6

0x6b40,	// (0x00039948) main_mup_pane_g7_ParamLimits

0x6b40,	// (0x00039948) main_mup_pane_g7

0x6b64,	// (0x0003996c) main_mup_pane_g8_ParamLimits

0x6b64,	// (0x0003996c) main_mup_pane_g8

0x6b88,	// (0x00039990) main_mup_pane_g9_ParamLimits

0x6b88,	// (0x00039990) main_mup_pane_g9

0x6bab,	// (0x000399b3) main_mup_pane_g10_ParamLimits

0x6bab,	// (0x000399b3) main_mup_pane_g10

0x6bce,	// (0x000399d6) main_mup_pane_g11_ParamLimits

0x6bce,	// (0x000399d6) main_mup_pane_g11

0x6bee,	// (0x000399f6) main_mup_pane_g12_ParamLimits

0x6bee,	// (0x000399f6) main_mup_pane_g12

0x6bfc,	// (0x00039a04) main_mup_pane_g13_ParamLimits

0x6bfc,	// (0x00039a04) main_mup_pane_g13

0x000c,

0xf43e,	// (0x00042246) main_mup_pane_g_ParamLimits

0xf43e,	// (0x00042246) main_mup_pane_g

0x6c12,	// (0x00039a1a) main_mup_pane_t1_ParamLimits

0x6c12,	// (0x00039a1a) main_mup_pane_t1

0x6c31,	// (0x00039a39) main_mup_pane_t2_ParamLimits

0x6c31,	// (0x00039a39) main_mup_pane_t2

0x6c4b,	// (0x00039a53) main_mup_pane_t3_ParamLimits

0x6c4b,	// (0x00039a53) main_mup_pane_t3

0x6c65,	// (0x00039a6d) main_mup_pane_t4_ParamLimits

0x6c65,	// (0x00039a6d) main_mup_pane_t4

0x6c77,	// (0x00039a7f) main_mup_pane_t5_ParamLimits

0x6c77,	// (0x00039a7f) main_mup_pane_t5

0x6c89,	// (0x00039a91) main_mup_pane_t6_ParamLimits

0x6c89,	// (0x00039a91) main_mup_pane_t6

0x0005,

0xf459,	// (0x00042261) main_mup_pane_t_ParamLimits

0xf459,	// (0x00042261) main_mup_pane_t

0x6c9f,	// (0x00039aa7) mup_progress_pane_ParamLimits

0x6c9f,	// (0x00039aa7) mup_progress_pane

0x6cab,	// (0x00039ab3) mup_visualizer_pane_ParamLimits

0x6cab,	// (0x00039ab3) mup_visualizer_pane

0x6ce9,	// (0x00039af1) mup_volume_pane_ParamLimits

0x6ce9,	// (0x00039af1) mup_volume_pane

0xcd1f,	// (0x0003fb27) mup_visualizer_pane_g1_ParamLimits

0xcd1f,	// (0x0003fb27) mup_visualizer_pane_g1

0xcd1f,	// (0x0003fb27) mup_visualizer_pane_g2_ParamLimits

0xcd1f,	// (0x0003fb27) mup_visualizer_pane_g2

0xcf19,	// (0x0003fd21) mup_visualizer_pane_g3_ParamLimits

0xcf19,	// (0x0003fd21) mup_visualizer_pane_g3

0x0002,

0xf466,	// (0x0004226e) mup_visualizer_pane_g_ParamLimits

0xf466,	// (0x0004226e) mup_visualizer_pane_g

0xc5e5,	// (0x0003f3ed) mup_volume_pane_g1

0xd0ab,	// (0x0003feb3) mup_volume_pane_g2

0x0001,

0xf46d,	// (0x00042275) mup_volume_pane_g

0xc5e5,	// (0x0003f3ed) mup_progress_pane_g1

0xd0b4,	// (0x0003febc) mup_progress_pane_g2

0xd0bd,	// (0x0003fec5) mup_progress_pane_g3

0x0002,

0xf472,	// (0x0004227a) mup_progress_pane_g

0xc26a,	// (0x0003f072) bg_popup_window_pane_cp05

0xd0c6,	// (0x0003fece) heading_pane_cp02_ParamLimits

0xd0c6,	// (0x0003fece) heading_pane_cp02

0xd0e2,	// (0x0003feea) list_popup_blid_pane

0xd0ea,	// (0x0003fef2) list_blid_sat_info_pane_ParamLimits

0xd0ea,	// (0x0003fef2) list_blid_sat_info_pane

0xd0fd,	// (0x0003ff05) list_blid_sat_info_pane_g1

0xd105,	// (0x0003ff0d) list_blid_sat_info_pane_t1

0x6e08,	// (0x00039c10) mup_equalizer_pane_ParamLimits

0x6e08,	// (0x00039c10) mup_equalizer_pane

0x6e29,	// (0x00039c31) mup_equalizer_pane_cp1_ParamLimits

0x6e29,	// (0x00039c31) mup_equalizer_pane_cp1

0x6e4a,	// (0x00039c52) mup_equalizer_pane_cp2_ParamLimits

0x6e4a,	// (0x00039c52) mup_equalizer_pane_cp2

0x6e6b,	// (0x00039c73) mup_equalizer_pane_cp3_ParamLimits

0x6e6b,	// (0x00039c73) mup_equalizer_pane_cp3

0x6e90,	// (0x00039c98) mup_equalizer_pane_cp4_ParamLimits

0x6e90,	// (0x00039c98) mup_equalizer_pane_cp4

0x6eb5,	// (0x00039cbd) mup_equalizer_pane_cp5

0x6ecd,	// (0x00039cd5) mup_equalizer_pane_cp6

0x6ee5,	// (0x00039ced) mup_equalizer_pane_cp7

0xe2d4,	// (0x000410dc) bg_popup_call_poc_act_pane_g9

0xe2dc,	// (0x000410e4) bg_popup_call_poc_act_pane_g10

0xe2e4,	// (0x000410ec) bg_popup_call_poc_act_pane_g11

0x000a,

0xc4c5,	// (0x0003f2cd) mup_scale_pane

0xc5e5,	// (0x0003f3ed) mup_scale_pane_g1

0xd113,	// (0x0003ff1b) mup_scale_pane_g2

0x0006,

0xf48e,	// (0x00042296) mup_scale_pane_g

0xd137,	// (0x0003ff3f) msg_data_pane

0xd13f,	// (0x0003ff47) scroll_pane_cp017

0x3615,	// (0x0003641d) bg_list_pane_cp04_ParamLimits

0x3615,	// (0x0003641d) bg_list_pane_cp04

0xd147,	// (0x0003ff4f) msg_data_pane_g1

0x6f0f,	// (0x00039d17) msg_data_pane_g2

0x6f19,	// (0x00039d21) msg_data_pane_g3

0x6f23,	// (0x00039d2b) msg_data_pane_g4

0x6f2b,	// (0x00039d33) msg_data_pane_g5

0x6f33,	// (0x00039d3b) msg_data_pane_g6

0x6f3b,	// (0x00039d43) msg_data_pane_g7

0x0006,

0xf49d,	// (0x000422a5) msg_data_pane_g

0x363b,	// (0x00036443) msg_text_pane_ParamLimits

0x363b,	// (0x00036443) msg_text_pane

0x6f43,	// (0x00039d4b) qrid_highlight_pane_cp011_ParamLimits

0x6f43,	// (0x00039d4b) qrid_highlight_pane_cp011

0xc26a,	// (0x0003f072) msg_body_pane

0xc26a,	// (0x0003f072) msg_header_pane

0xd158,	// (0x0003ff60) input_focus_pane_cp07

0x367a,	// (0x00036482) msg_header_pane_t1_ParamLimits

0x367a,	// (0x00036482) msg_header_pane_t1

0x368e,	// (0x00036496) msg_header_pane_t2_ParamLimits

0x368e,	// (0x00036496) msg_header_pane_t2

0x0001,

0xf4b1,	// (0x000422b9) msg_header_pane_t_ParamLimits

0xf4b1,	// (0x000422b9) msg_header_pane_t

0xd16d,	// (0x0003ff75) msg_body_pane_g1

0x36a0,	// (0x000364a8) msg_body_pane_t1_ParamLimits

0x36a0,	// (0x000364a8) msg_body_pane_t1

0x36d1,	// (0x000364d9) msg_body_pane_t2_ParamLimits

0x36d1,	// (0x000364d9) msg_body_pane_t2

0x36e3,	// (0x000364eb) msg_body_pane_t3_ParamLimits

0x36e3,	// (0x000364eb) msg_body_pane_t3

0x0002,

0xf4b6,	// (0x000422be) msg_body_pane_t_ParamLimits

0xf4b6,	// (0x000422be) msg_body_pane_t

0x6fab,	// (0x00039db3) main_viewer_pane_g1_ParamLimits

0x6fab,	// (0x00039db3) main_viewer_pane_g1

0x6fb7,	// (0x00039dbf) main_viewer_pane_g2_ParamLimits

0x6fb7,	// (0x00039dbf) main_viewer_pane_g2

0x6fc3,	// (0x00039dcb) main_viewer_pane_g3_ParamLimits

0x6fc3,	// (0x00039dcb) main_viewer_pane_g3

0x6fd4,	// (0x00039ddc) main_viewer_pane_g4_ParamLimits

0x6fd4,	// (0x00039ddc) main_viewer_pane_g4

0x6fe5,	// (0x00039ded) main_viewer_pane_g5_ParamLimits

0x6fe5,	// (0x00039ded) main_viewer_pane_g5

0x6fe5,	// (0x00039ded) main_viewer_pane_g7_ParamLimits

0x6fe5,	// (0x00039ded) main_viewer_pane_g7

0x6ff7,	// (0x00039dff) main_viewer_pane_g8_ParamLimits

0x6ff7,	// (0x00039dff) main_viewer_pane_g8

0x0007,

0xf4c6,	// (0x000422ce) main_viewer_pane_g_ParamLimits

0xf4c6,	// (0x000422ce) main_viewer_pane_g

0xd175,	// (0x0003ff7d) viewer_content_pane_ParamLimits

0xd175,	// (0x0003ff7d) viewer_content_pane

0x702f,	// (0x00039e37) main_postcard_pane_g1_ParamLimits

0x702f,	// (0x00039e37) main_postcard_pane_g1

0x703d,	// (0x00039e45) main_postcard_pane_g2_ParamLimits

0x703d,	// (0x00039e45) main_postcard_pane_g2

0x704b,	// (0x00039e53) main_postcard_pane_g3_ParamLimits

0x704b,	// (0x00039e53) main_postcard_pane_g3

0x0005,

0xf4d7,	// (0x000422df) main_postcard_pane_g_ParamLimits

0xf4d7,	// (0x000422df) main_postcard_pane_g

0x705b,	// (0x00039e63) main_postcard_pane_g4

0xe504,	// (0x0004130c) smil_status_volume_pane_g2

0x7087,	// (0x00039e8f) postcard_pane_ParamLimits

0x7087,	// (0x00039e8f) postcard_pane

0xcd1f,	// (0x0003fb27) postcard_pane_g1_ParamLimits

0xcd1f,	// (0x0003fb27) postcard_pane_g1

0x70c1,	// (0x00039ec9) postcard_pane_g2_ParamLimits

0x70c1,	// (0x00039ec9) postcard_pane_g2

0x70cd,	// (0x00039ed5) postcard_pane_g3_ParamLimits

0x70cd,	// (0x00039ed5) postcard_pane_g3

0xd183,	// (0x0003ff8b) postcard_pane_g4_ParamLimits

0xd183,	// (0x0003ff8b) postcard_pane_g4

0x70d9,	// (0x00039ee1) postcard_pane_g5_ParamLimits

0x70d9,	// (0x00039ee1) postcard_pane_g5

0x70e5,	// (0x00039eed) postcard_pane_g6_ParamLimits

0x70e5,	// (0x00039eed) postcard_pane_g6

0xd191,	// (0x0003ff99) postcard_pane_g7_ParamLimits

0xd191,	// (0x0003ff99) postcard_pane_g7

0x0006,

0xf4e4,	// (0x000422ec) postcard_pane_g_ParamLimits

0xf4e4,	// (0x000422ec) postcard_pane_g

0x70f3,	// (0x00039efb) main_mp2_pane_g1_ParamLimits

0x70f3,	// (0x00039efb) main_mp2_pane_g1

0x7101,	// (0x00039f09) main_mp2_pane_g2_ParamLimits

0x7101,	// (0x00039f09) main_mp2_pane_g2

0x710d,	// (0x00039f15) main_mp2_pane_g3_ParamLimits

0x710d,	// (0x00039f15) main_mp2_pane_g3

0x0002,

0xf4f3,	// (0x000422fb) main_mp2_pane_g_ParamLimits

0xf4f3,	// (0x000422fb) main_mp2_pane_g

0x7119,	// (0x00039f21) main_mp2_pane_t1_ParamLimits

0x7119,	// (0x00039f21) main_mp2_pane_t1

0x7130,	// (0x00039f38) main_mp2_pane_t2_ParamLimits

0x7130,	// (0x00039f38) main_mp2_pane_t2

0x7144,	// (0x00039f4c) main_mp2_pane_t3_ParamLimits

0x7144,	// (0x00039f4c) main_mp2_pane_t3

0x0002,

0xf4fa,	// (0x00042302) main_mp2_pane_t_ParamLimits

0xf4fa,	// (0x00042302) main_mp2_pane_t

0xd19f,	// (0x0003ffa7) pec_content_pane_ParamLimits

0xd19f,	// (0x0003ffa7) pec_content_pane

0xc8ea,	// (0x0003f6f2) scroll_pane_cp015

0xd1b1,	// (0x0003ffb9) pec_attribute_pane_ParamLimits

0xd1b1,	// (0x0003ffb9) pec_attribute_pane

0x7156,	// (0x00039f5e) pec_content_pane_g1_ParamLimits

0x7156,	// (0x00039f5e) pec_content_pane_g1

0xd1c1,	// (0x0003ffc9) pec_content_pane_t1_ParamLimits

0xd1c1,	// (0x0003ffc9) pec_content_pane_t1

0xd1d3,	// (0x0003ffdb) pec_content_pane_t2_ParamLimits

0xd1d3,	// (0x0003ffdb) pec_content_pane_t2

0x0001,

0xf501,	// (0x00042309) pec_content_pane_t_ParamLimits

0xf501,	// (0x00042309) pec_content_pane_t

0x7162,	// (0x00039f6a) list_single_graphic_pane_cp01_ParamLimits

0x7162,	// (0x00039f6a) list_single_graphic_pane_cp01

0xc4c5,	// (0x0003f2cd) bg_popup_sub_pane_cp04

0xd1e5,	// (0x0003ffed) popup_mup_playback_window_g1

0xd1f1,	// (0x0003fff9) popup_mup_playback_window_t1

0xd206,	// (0x0004000e) popup_mup_playback_window_t2

0x0001,

0xf506,	// (0x0004230e) popup_mup_playback_window_t

0xd23d,	// (0x00040045) main_image_pane_g1_ParamLimits

0xd23d,	// (0x00040045) main_image_pane_g1

0xd280,	// (0x00040088) scroll_pane_cp018_ParamLimits

0xd280,	// (0x00040088) scroll_pane_cp018

0xd298,	// (0x000400a0) scroll_pane_cp016_ParamLimits

0xd298,	// (0x000400a0) scroll_pane_cp016

0x71f3,	// (0x00039ffb) smil2_image_pane_ParamLimits

0x71f3,	// (0x00039ffb) smil2_image_pane

0x7229,	// (0x0003a031) smil2_root_pane_ParamLimits

0x7229,	// (0x0003a031) smil2_root_pane

0x7255,	// (0x0003a05d) smil2_text_pane_ParamLimits

0x7255,	// (0x0003a05d) smil2_text_pane

0xc26a,	// (0x0003f072) bg_list_pane_cp06

0xd2d4,	// (0x000400dc) grid_radio_pane

0xc26a,	// (0x0003f072) bg_popup_window_pane_cp06

0xd2de,	// (0x000400e6) main_fmradio_pane_t1

0xcd96,	// (0x0003fb9e) heading_pane_cp04

0xd2ec,	// (0x000400f4) main_fmradio_pane_t2

0xe2ec,	// (0x000410f4) popup_cale_lunar_info_window_g1

0xd2fa,	// (0x00040102) main_fmradio_pane_t3

0xe2f4,	// (0x000410fc) popup_cale_lunar_info_window_g2

0xd30a,	// (0x00040112) main_fmradio_pane_t4

0x0001,

0xd318,	// (0x00040120) main_fmradio_pane_t5

0x0004,

0xf5e1,	// (0x000423e9) popup_cale_lunar_info_window_g

0xf51b,	// (0x00042323) main_fmradio_pane_t

0xd326,	// (0x0004012e) wait_bar_pane_cp03

0xd32e,	// (0x00040136) cell_fmradio_pane_ParamLimits

0xd32e,	// (0x00040136) cell_fmradio_pane

0xd191,	// (0x0003ff99) cell_fmradio_pane_g1_ParamLimits

0xd191,	// (0x0003ff99) cell_fmradio_pane_g1

0xc26a,	// (0x0003f072) grid_highlight_pane_cp011

0xd343,	// (0x0004014b) poc_content_pane_ParamLimits

0xd343,	// (0x0004014b) poc_content_pane

0xd355,	// (0x0004015d) scroll_pane_cp019

0x7295,	// (0x0003a09d) popup_call_poc_act_window_ParamLimits

0x7295,	// (0x0003a09d) popup_call_poc_act_window

0x72a2,	// (0x0003a0aa) popup_call_poc_inact_window_ParamLimits

0x72a2,	// (0x0003a0aa) popup_call_poc_inact_window

0xf5b8,	// (0x000423c0) bg_popup_call_poc_act_pane_g

0xe264,	// (0x0004106c) bg_popup_call_poc_inact_pane_g1

0xe26c,	// (0x00041074) bg_popup_call_poc_inact_pane_g2

0xd35d,	// (0x00040165) popup_call_poc_act_window_g2

0xe274,	// (0x0004107c) bg_popup_call_poc_inact_pane_g3

0xe27c,	// (0x00041084) bg_popup_call_poc_inact_pane_g4

0xe284,	// (0x0004108c) bg_popup_call_poc_inact_pane_g5

0xd365,	// (0x0004016d) popup_call_poc_act_window_t1_ParamLimits

0xd365,	// (0x0004016d) popup_call_poc_act_window_t1

0xd38d,	// (0x00040195) popup_call_poc_act_window_t2_ParamLimits

0xd38d,	// (0x00040195) popup_call_poc_act_window_t2

0xd3b5,	// (0x000401bd) popup_call_poc_act_window_t3_ParamLimits

0xd3b5,	// (0x000401bd) popup_call_poc_act_window_t3

0xd3dd,	// (0x000401e5) popup_call_poc_act_window_t4_ParamLimits

0xd3dd,	// (0x000401e5) popup_call_poc_act_window_t4

0x0003,

0xf526,	// (0x0004232e) popup_call_poc_act_window_t_ParamLimits

0xf526,	// (0x0004232e) popup_call_poc_act_window_t

0xe28c,	// (0x00041094) bg_popup_call_poc_inact_pane_g6

0xe294,	// (0x0004109c) bg_popup_call_poc_inact_pane_g7

0xe29c,	// (0x000410a4) bg_popup_call_poc_inact_pane_g8

0xd3ef,	// (0x000401f7) popup_call_poc_inact_window_g2

0xe2a4,	// (0x000410ac) bg_popup_call_poc_inact_pane_g9

0x0008,

0xf5a5,	// (0x000423ad) bg_popup_call_poc_inact_pane_g

0xd3f7,	// (0x000401ff) popup_call_poc_inact_window_t1_ParamLimits

0xd3f7,	// (0x000401ff) popup_call_poc_inact_window_t1

0xd40c,	// (0x00040214) popup_call_poc_inact_window_t2_ParamLimits

0xd40c,	// (0x00040214) popup_call_poc_inact_window_t2

0xd421,	// (0x00040229) popup_call_poc_inact_window_t3_ParamLimits

0xd421,	// (0x00040229) popup_call_poc_inact_window_t3

0x0002,

0xf52f,	// (0x00042337) popup_call_poc_inact_window_t_ParamLimits

0xf52f,	// (0x00042337) popup_call_poc_inact_window_t

0xe464,	// (0x0004126c) context_pane_ParamLimits

0x78c2,	// (0x0003a6ca) signal_pane_ParamLimits

0xcfe4,	// (0x0003fdec) main_call2_pane

0xe452,	// (0x0004125a) popup_phob_thumbnail2_window_ParamLimits

0xe452,	// (0x0004125a) popup_phob_thumbnail2_window

0x6f59,	// (0x00039d61) aid_hotspot_pointer_arrow_pane

0x6f61,	// (0x00039d69) aid_hotspot_pointer_hand_pane

0x75ca,	// (0x0003a3d2) phob_pre_status_pane_g5

0x549a,	// (0x000382a2) cams_zoom_pane_ParamLimits

0x54a6,	// (0x000382ae) image_vga_pane_ParamLimits

0x54b5,	// (0x000382bd) main_camera_pane_g1_ParamLimits

0x54c3,	// (0x000382cb) main_camera_pane_g2_ParamLimits

0x54cf,	// (0x000382d7) main_camera_pane_g3_ParamLimits

0x54dd,	// (0x000382e5) main_camera_pane_g4_ParamLimits

0x54eb,	// (0x000382f3) main_camera_pane_g5_ParamLimits

0x54f9,	// (0x00038301) main_camera_pane_g6_ParamLimits

0x5507,	// (0x0003830f) main_camera_pane_g7_ParamLimits

0xf22e,	// (0x00042036) main_camera_pane_g_ParamLimits

0x5515,	// (0x0003831d) main_camera_pane_t1_ParamLimits

0x5527,	// (0x0003832f) main_camera_pane_t2_ParamLimits

0xf23f,	// (0x00042047) main_camera_pane_t_ParamLimits

0xc4c5,	// (0x0003f2cd) bg_popup_preview_window_pane_cp01_ParamLimits

0xc4c5,	// (0x0003f2cd) bg_popup_preview_window_pane_cp01

0xd436,	// (0x0004023e) popup_phob_thumbnail2_window_g1_ParamLimits

0xd436,	// (0x0004023e) popup_phob_thumbnail2_window_g1

0xc26a,	// (0x0003f072) call2_cli_visual_pane

0x72be,	// (0x0003a0c6) popup_call2_audio_conf_window_ParamLimits

0x72be,	// (0x0003a0c6) popup_call2_audio_conf_window

0x72d7,	// (0x0003a0df) popup_call2_audio_first_window_ParamLimits

0x72d7,	// (0x0003a0df) popup_call2_audio_first_window

0x7375,	// (0x0003a17d) popup_call2_audio_in_window_ParamLimits

0x7375,	// (0x0003a17d) popup_call2_audio_in_window

0x73b9,	// (0x0003a1c1) popup_call2_audio_out_window_ParamLimits

0x73b9,	// (0x0003a1c1) popup_call2_audio_out_window

0x7423,	// (0x0003a22b) popup_call2_audio_second_window_ParamLimits

0x7423,	// (0x0003a22b) popup_call2_audio_second_window

0x7481,	// (0x0003a289) popup_call2_audio_wait_window_ParamLimits

0x7481,	// (0x0003a289) popup_call2_audio_wait_window

0xc26a,	// (0x0003f072) bg_popup_call2_act_pane_cp03

0xc4a7,	// (0x0003f2af) list_conf_pane_cp

0xd442,	// (0x0004024a) popup_call2_audio_conf_window_t1

0xd450,	// (0x00040258) list_single_graphic_popup_conf2_pane_ParamLimits

0xd450,	// (0x00040258) list_single_graphic_popup_conf2_pane

0xce05,	// (0x0003fc0d) list_highlight_pane_cp04

0xd463,	// (0x0004026b) list_single_graphic_popup_conf2_pane_g1

0xce16,	// (0x0003fc1e) list_single_graphic_popup_conf2_pane_g2

0x0001,

0xf536,	// (0x0004233e) list_single_graphic_popup_conf2_pane_g

0xd46d,	// (0x00040275) list_single_graphic_popup_conf2_pane_t1

0xd47b,	// (0x00040283) bg_popup_call2_act_pane_cp01_ParamLimits

0xd47b,	// (0x00040283) bg_popup_call2_act_pane_cp01

0xd505,	// (0x0004030d) call_type_pane_cp05_ParamLimits

0xd505,	// (0x0004030d) call_type_pane_cp05

0xd559,	// (0x00040361) popup_call2_audio_second_window_g1_ParamLimits

0xd559,	// (0x00040361) popup_call2_audio_second_window_g1

0xd5ad,	// (0x000403b5) popup_call2_audio_second_window_g2_ParamLimits

0xd5ad,	// (0x000403b5) popup_call2_audio_second_window_g2

0x0002,

0xf53b,	// (0x00042343) popup_call2_audio_second_window_g_ParamLimits

0xf53b,	// (0x00042343) popup_call2_audio_second_window_g

0xd612,	// (0x0004041a) popup_call2_audio_second_window_t1_ParamLimits

0xd612,	// (0x0004041a) popup_call2_audio_second_window_t1

0xd6cd,	// (0x000404d5) popup_call2_audio_second_window_t2_ParamLimits

0xd6cd,	// (0x000404d5) popup_call2_audio_second_window_t2

0xd720,	// (0x00040528) popup_call2_audio_second_window_t3_ParamLimits

0xd720,	// (0x00040528) popup_call2_audio_second_window_t3

0x0003,

0xf542,	// (0x0004234a) popup_call2_audio_second_window_t_ParamLimits

0xf542,	// (0x0004234a) popup_call2_audio_second_window_t

0xc26a,	// (0x0003f072) bg_popup_call2_in_pane_cp02

0xc274,	// (0x0003f07c) call_type_pane_cp04

0xc27c,	// (0x0003f084) popup_call2_audio_wait_window_g1

0xc284,	// (0x0003f08c) popup_call2_audio_wait_window_g2

0x0001,

0xf11b,	// (0x00041f23) popup_call2_audio_wait_window_g

0xc28c,	// (0x0003f094) popup_call2_audio_wait_window_t3

0xd813,	// (0x0004061b) bg_popup_call2_act_pane_ParamLimits

0xd813,	// (0x0004061b) bg_popup_call2_act_pane

0xd8f7,	// (0x000406ff) call_type_pane_cp03_ParamLimits

0xd8f7,	// (0x000406ff) call_type_pane_cp03

0xd95b,	// (0x00040763) popup_call2_audio_first_window_g1_ParamLimits

0xd95b,	// (0x00040763) popup_call2_audio_first_window_g1

0xd9cb,	// (0x000407d3) popup_call2_audio_first_window_g2_ParamLimits

0xd9cb,	// (0x000407d3) popup_call2_audio_first_window_g2

0xcd1f,	// (0x0003fb27) popup_call2_audio_first_window_g3_ParamLimits

0xcd1f,	// (0x0003fb27) popup_call2_audio_first_window_g3

0x0004,

0xf54b,	// (0x00042353) popup_call2_audio_first_window_g_ParamLimits

0xf54b,	// (0x00042353) popup_call2_audio_first_window_g

0xdaa9,	// (0x000408b1) popup_call2_audio_first_window_t1_ParamLimits

0xdaa9,	// (0x000408b1) popup_call2_audio_first_window_t1

0xdbac,	// (0x000409b4) popup_call2_audio_first_window_t4_ParamLimits

0xdbac,	// (0x000409b4) popup_call2_audio_first_window_t4

0xdc8f,	// (0x00040a97) popup_call2_audio_first_window_t5_ParamLimits

0xdc8f,	// (0x00040a97) popup_call2_audio_first_window_t5

0x0003,

0xf556,	// (0x0004235e) popup_call2_audio_first_window_t_ParamLimits

0xf556,	// (0x0004235e) popup_call2_audio_first_window_t

0xc4bd,	// (0x0003f2c5) bg_popup_call2_act_pane_g1

0xe2fe,	// (0x00041106) popup_cale_lunar_info_window_t1

0xe30c,	// (0x00041114) popup_cale_lunar_info_window_t2

0xe31a,	// (0x00041122) popup_cale_lunar_info_window_t3

0xc26a,	// (0x0003f072) bg_popup_call2_bubble_pane

0xdd90,	// (0x00040b98) bg_popup_call2_in_pane_cp01_ParamLimits

0xdd90,	// (0x00040b98) bg_popup_call2_in_pane_cp01

0xbf46,	// (0x0003ed4e) call_type_pane_cp02

0xddd8,	// (0x00040be0) popup_call2_audio_out_window_g1_ParamLimits

0xddd8,	// (0x00040be0) popup_call2_audio_out_window_g1

0xde04,	// (0x00040c0c) popup_call2_audio_out_window_g2_ParamLimits

0xde04,	// (0x00040c0c) popup_call2_audio_out_window_g2

0xde2c,	// (0x00040c34) popup_call2_audio_out_window_g3_ParamLimits

0xde2c,	// (0x00040c34) popup_call2_audio_out_window_g3

0x0003,

0xf55f,	// (0x00042367) popup_call2_audio_out_window_g_ParamLimits

0xf55f,	// (0x00042367) popup_call2_audio_out_window_g

0xde67,	// (0x00040c6f) popup_call2_audio_out_window_t1_ParamLimits

0xde67,	// (0x00040c6f) popup_call2_audio_out_window_t1

0xdec6,	// (0x00040cce) popup_call2_audio_out_window_t2_ParamLimits

0xdec6,	// (0x00040cce) popup_call2_audio_out_window_t2

0xdf1a,	// (0x00040d22) popup_call2_audio_out_window_t3_ParamLimits

0xdf1a,	// (0x00040d22) popup_call2_audio_out_window_t3

0xdf30,	// (0x00040d38) popup_call2_audio_out_window_t4_ParamLimits

0xdf30,	// (0x00040d38) popup_call2_audio_out_window_t4

0xdf46,	// (0x00040d4e) popup_call2_audio_out_window_t5_ParamLimits

0xdf46,	// (0x00040d4e) popup_call2_audio_out_window_t5

0x0005,

0xf568,	// (0x00042370) popup_call2_audio_out_window_t_ParamLimits

0xf568,	// (0x00042370) popup_call2_audio_out_window_t

0xdfaa,	// (0x00040db2) bg_popup_call2_in_pane_ParamLimits

0xdfaa,	// (0x00040db2) bg_popup_call2_in_pane

0xe006,	// (0x00040e0e) popup_call2_audio_in_window_g1_ParamLimits

0xe006,	// (0x00040e0e) popup_call2_audio_in_window_g1

0xe03e,	// (0x00040e46) popup_call2_audio_in_window_g2_ParamLimits

0xe03e,	// (0x00040e46) popup_call2_audio_in_window_g2

0xe076,	// (0x00040e7e) popup_call2_audio_in_window_g3_ParamLimits

0xe076,	// (0x00040e7e) popup_call2_audio_in_window_g3

0x0003,

0xf575,	// (0x0004237d) popup_call2_audio_in_window_g_ParamLimits

0xf575,	// (0x0004237d) popup_call2_audio_in_window_g

0xe0ce,	// (0x00040ed6) popup_call2_audio_in_window_t1_ParamLimits

0xe0ce,	// (0x00040ed6) popup_call2_audio_in_window_t1

0xe14e,	// (0x00040f56) popup_call2_audio_in_window_t2_ParamLimits

0xe14e,	// (0x00040f56) popup_call2_audio_in_window_t2

0xe1ce,	// (0x00040fd6) popup_call2_audio_in_window_t3_ParamLimits

0xe1ce,	// (0x00040fd6) popup_call2_audio_in_window_t3

0xe1e8,	// (0x00040ff0) popup_call2_audio_in_window_t4_ParamLimits

0xe1e8,	// (0x00040ff0) popup_call2_audio_in_window_t4

0xe1fa,	// (0x00041002) popup_call2_audio_in_window_t5_ParamLimits

0xe1fa,	// (0x00041002) popup_call2_audio_in_window_t5

0xe20f,	// (0x00041017) popup_call2_audio_in_window_t6_ParamLimits

0xe20f,	// (0x00041017) popup_call2_audio_in_window_t6

0x0005,

0xf57e,	// (0x00042386) popup_call2_audio_in_window_t_ParamLimits

0xf57e,	// (0x00042386) popup_call2_audio_in_window_t

0xc4bd,	// (0x0003f2c5) bg_popup_call2_in_pane_g1

0xe328,	// (0x00041130) popup_cale_lunar_info_window_t4

0x0003,

0xf5e6,	// (0x000423ee) popup_cale_lunar_info_window_t

0xc4c5,	// (0x0003f2cd) bg_popup_call2_rect_pane_ParamLimits

0xc4c5,	// (0x0003f2cd) bg_popup_call2_rect_pane

0xc26a,	// (0x0003f072) call2_cli_visual_graphic_pane

0xc26a,	// (0x0003f072) call2_cli_visual_text_pane

0x7947,	// (0x0003a74f) smil_status_volume_pane_g3

0x0002,

0xc5e5,	// (0x0003f3ed) call2_cli_visual_graphic_pane_g1

0xc5e5,	// (0x0003f3ed) call2_cli_visual_graphic_pane_g2

0xc5e5,	// (0x0003f3ed) call2_cli_visual_graphic_pane_g3

0x0002,

0xf58b,	// (0x00042393) call2_cli_visual_graphic_pane_g

0xe224,	// (0x0004102c) bg_popup_call2_rect_pane_g1

0xc683,	// (0x0003f48b) bg_popup_call2_rect_pane_g2

0xe22c,	// (0x00041034) bg_popup_call2_rect_pane_g3

0xe234,	// (0x0004103c) bg_popup_call2_rect_pane_g4

0xe23c,	// (0x00041044) bg_popup_call2_rect_pane_g5

0xe244,	// (0x0004104c) bg_popup_call2_rect_pane_g6

0xe24c,	// (0x00041054) bg_popup_call2_rect_pane_g7

0xe254,	// (0x0004105c) bg_popup_call2_rect_pane_g8

0xe25c,	// (0x00041064) bg_popup_call2_rect_pane_g9

0x0008,

0xf592,	// (0x0004239a) bg_popup_call2_rect_pane_g

0xe264,	// (0x0004106c) bg_popup_call2_bubble_pane_g1

0xe26c,	// (0x00041074) bg_popup_call2_bubble_pane_g2

0xe274,	// (0x0004107c) bg_popup_call2_bubble_pane_g3

0xe27c,	// (0x00041084) bg_popup_call2_bubble_pane_g4

0xe284,	// (0x0004108c) bg_popup_call2_bubble_pane_g5

0xe28c,	// (0x00041094) bg_popup_call2_bubble_pane_g6

0xe294,	// (0x0004109c) bg_popup_call2_bubble_pane_g7

0xe29c,	// (0x000410a4) bg_popup_call2_bubble_pane_g8

0xe2a4,	// (0x000410ac) bg_popup_call2_bubble_pane_g9

0x0008,

0xf5a5,	// (0x000423ad) bg_popup_call2_bubble_pane_g

0x4f31,	// (0x00037d39) aid_cale_week_size_cell_pane

0x553b,	// (0x00038343) aid_cams_cif_uncrop_pane_ParamLimits

0x553b,	// (0x00038343) aid_cams_cif_uncrop_pane

0x5698,	// (0x000384a0) aid_cams_size_cell_ParamLimits

0x5698,	// (0x000384a0) aid_cams_size_cell

0x56a4,	// (0x000384ac) grid_cams_pane_ParamLimits

0x56b2,	// (0x000384ba) linegrid_cams_pane_ParamLimits

0x5785,	// (0x0003858d) call_video_pane_t1

0x57a2,	// (0x000385aa) call_video_pane_t2

0x0001,

0xf292,	// (0x0004209a) call_video_pane_t

0x5c7d,	// (0x00038a85) aid_cale_month_size_cell_pane_ParamLimits

0x5c7d,	// (0x00038a85) aid_cale_month_size_cell_pane

0xf62f,	// (0x00042437) smil_status_volume_pane_g

0x7954,	// (0x0003a75c) volume_smil_pane_ParamLimits

0x45fb,	// (0x00037403) aid_popup2_width_pane

0x4e4d,	// (0x00037c55) cell_qdial_pane_g4_ParamLimits

0x4e4d,	// (0x00037c55) cell_qdial_pane_g4

0x68e4,	// (0x000396ec) aid_blid_cardinal_pane_ParamLimits

0x68f4,	// (0x000396fc) aid_blid_destination_pane_ParamLimits

0x68f4,	// (0x000396fc) aid_blid_destination_pane

0xc4c5,	// (0x0003f2cd) bg_popup_call_poc_act_pane_ParamLimits

0xc4c5,	// (0x0003f2cd) bg_popup_call_poc_act_pane

0xc4c5,	// (0x0003f2cd) bg_popup_call_poc_inact_pane_ParamLimits

0xc4c5,	// (0x0003f2cd) bg_popup_call_poc_inact_pane

0xe2ac,	// (0x000410b4) bg_popup_call_poc_act_pane_g1

0xe2b4,	// (0x000410bc) bg_popup_call_poc_act_pane_g2

0xe2bc,	// (0x000410c4) bg_popup_call_poc_act_pane_g3

0xe27c,	// (0x00041084) bg_popup_call_poc_act_pane_g4

0xe284,	// (0x0004108c) bg_popup_call_poc_act_pane_g5

0xe2c4,	// (0x000410cc) bg_popup_call_poc_act_pane_g6

0xe294,	// (0x0004109c) bg_popup_call_poc_act_pane_g7

0xe2cc,	// (0x000410d4) bg_popup_call_poc_act_pane_g8

0xc26a,	// (0x0003f072) main_usb_pane

0xe429,	// (0x00041231) popup_cale_lunar_info_window

0x5aba,	// (0x000388c2) im_reading_pane_t1_ParamLimits

0xc842,	// (0x0003f64a) list_im_pane_ParamLimits

0xc853,	// (0x0003f65b) scroll_pane_cp07_ParamLimits

0xc26a,	// (0x0003f072) grid_highlight_pane_cp012

0xc4c5,	// (0x0003f2cd) mup_scale_pane_ParamLimits

0xcd1f,	// (0x0003fb27) main_usb_pane_g1_ParamLimits

0xcd1f,	// (0x0003fb27) main_usb_pane_g1

0x74ed,	// (0x0003a2f5) main_usb_pane_g2_ParamLimits

0x74ed,	// (0x0003a2f5) main_usb_pane_g2

0x0001,

0xf5cf,	// (0x000423d7) main_usb_pane_g_ParamLimits

0xf5cf,	// (0x000423d7) main_usb_pane_g

0x74f9,	// (0x0003a301) main_usb_pane_t1_ParamLimits

0x74f9,	// (0x0003a301) main_usb_pane_t1

0x750b,	// (0x0003a313) main_usb_pane_t2_ParamLimits

0x750b,	// (0x0003a313) main_usb_pane_t2

0x751d,	// (0x0003a325) main_usb_pane_t3_ParamLimits

0x751d,	// (0x0003a325) main_usb_pane_t3

0x752f,	// (0x0003a337) main_usb_pane_t4_ParamLimits

0x752f,	// (0x0003a337) main_usb_pane_t4

0x7541,	// (0x0003a349) main_usb_pane_t5_ParamLimits

0x7541,	// (0x0003a349) main_usb_pane_t5

0x7553,	// (0x0003a35b) main_usb_pane_t6_ParamLimits

0x7553,	// (0x0003a35b) main_usb_pane_t6

0x0005,

0xf5d4,	// (0x000423dc) main_usb_pane_t_ParamLimits

0x689f,	// (0x000396a7) aid_text_placing

0x68aa,	// (0x000396b2) main_location2_pane_t1_ParamLimits

0x68be,	// (0x000396c6) main_location2_pane_t2_ParamLimits

0x68be,	// (0x000396c6) main_location2_pane_t3_ParamLimits

0x68d2,	// (0x000396da) main_location2_pane_t4_ParamLimits

0x68d2,	// (0x000396da) main_location2_pane_t4

0xf3f3,	// (0x000421fb) main_location2_pane_t_ParamLimits

0xc501,	// (0x0003f309) find_pinb_pane_g2_ParamLimits

0xc501,	// (0x0003f309) find_pinb_pane_g2

0x0001,

0xf141,	// (0x00041f49) find_pinb_pane_g_ParamLimits

0xf141,	// (0x00041f49) find_pinb_pane_g

0xc50d,	// (0x0003f315) find_pinb_pane_t1_ParamLimits

0xc51f,	// (0x0003f327) find_pinb_pane_t2_ParamLimits

0xf146,	// (0x00041f4e) find_pinb_pane_t_ParamLimits

0xc26a,	// (0x0003f072) main_call3_pane

0x5fd9,	// (0x00038de1) cale_month_day_heading_pane_t1_ParamLimits

0x6037,	// (0x00038e3f) cale_month_day_heading_pane_t2_ParamLimits

0x609c,	// (0x00038ea4) cale_month_day_heading_pane_t3_ParamLimits

0x6101,	// (0x00038f09) cale_month_day_heading_pane_t4_ParamLimits

0x6166,	// (0x00038f6e) cale_month_day_heading_pane_t5_ParamLimits

0x61d3,	// (0x00038fdb) cale_month_day_heading_pane_t6_ParamLimits

0x6248,	// (0x00039050) cale_month_day_heading_pane_t7_ParamLimits

0xf2ca,	// (0x000420d2) cale_month_day_heading_pane_t_ParamLimits

0xca93,	// (0x0003f89b) smil_status_volume_pane

0x70a5,	// (0x00039ead) postcard_address_pane_ParamLimits

0x70a5,	// (0x00039ead) postcard_address_pane

0x70b3,	// (0x00039ebb) postcard_message_pane_ParamLimits

0x70b3,	// (0x00039ebb) postcard_message_pane

0x74c0,	// (0x0003a2c8) call2_cli_visual_pane_t1_ParamLimits

0x74c0,	// (0x0003a2c8) call2_cli_visual_pane_t1

0x7a9a,	// (0x0003a8a2) postcard_message_pane_t1_ParamLimits

0x7a9a,	// (0x0003a8a2) postcard_message_pane_t1

0xe517,	// (0x0004131f) postcard_address_pane_t1_ParamLimits

0xe517,	// (0x0004131f) postcard_address_pane_t1

0x7a8b,	// (0x0003a893) popup_call3_audio_in_window_ParamLimits

0x7a8b,	// (0x0003a893) popup_call3_audio_in_window

0x7969,	// (0x0003a771) bg_popup_call3_in_pane_ParamLimits

0x7969,	// (0x0003a771) bg_popup_call3_in_pane

0x79d1,	// (0x0003a7d9) popup_call3_audio_in_window_g1_ParamLimits

0x79d1,	// (0x0003a7d9) popup_call3_audio_in_window_g1

0x79e9,	// (0x0003a7f1) popup_call3_audio_in_window_g2_ParamLimits

0x79e9,	// (0x0003a7f1) popup_call3_audio_in_window_g2

0x7a01,	// (0x0003a809) popup_call3_audio_in_window_g3_ParamLimits

0x7a01,	// (0x0003a809) popup_call3_audio_in_window_g3

0x0003,

0xf636,	// (0x0004243e) popup_call3_audio_in_window_g_ParamLimits

0xf636,	// (0x0004243e) popup_call3_audio_in_window_g

0x7a29,	// (0x0003a831) popup_call3_audio_in_window_t1_ParamLimits

0x7a29,	// (0x0003a831) popup_call3_audio_in_window_t1

0x7a51,	// (0x0003a859) popup_call3_audio_in_window_t2_ParamLimits

0x7a51,	// (0x0003a859) popup_call3_audio_in_window_t2

0x7a79,	// (0x0003a881) popup_call3_audio_in_window_t3_ParamLimits

0x7a79,	// (0x0003a881) popup_call3_audio_in_window_t3

0x0002,

0xf63f,	// (0x00042447) popup_call3_audio_in_window_t_ParamLimits

0xf63f,	// (0x00042447) popup_call3_audio_in_window_t

0xcfe4,	// (0x0003fdec) bg_popup_call3_rect_pane

0xe224,	// (0x0004102c) bg_popup_call3_rect_pane_g1

0xc683,	// (0x0003f48b) bg_popup_call3_rect_pane_g2

0xe22c,	// (0x00041034) bg_popup_call3_rect_pane_g3

0xe234,	// (0x0004103c) bg_popup_call3_rect_pane_g4

0xe23c,	// (0x00041044) bg_popup_call3_rect_pane_g5

0xe244,	// (0x0004104c) bg_popup_call3_rect_pane_g6

0xe24c,	// (0x00041054) bg_popup_call3_rect_pane_g7

0x6d04,	// (0x00039b0c) mup_visualizer_osc_pane

0xd0a3,	// (0x0003feab) mup_visualizer_spec_pane

0x7989,	// (0x0003a791) call3_video_qcif_pane_ParamLimits

0x7989,	// (0x0003a791) call3_video_qcif_pane

0x799b,	// (0x0003a7a3) call3_video_qcif_uncrop_pane_ParamLimits

0x799b,	// (0x0003a7a3) call3_video_qcif_uncrop_pane

0x79ab,	// (0x0003a7b3) call3_video_subqcif_pane_ParamLimits

0x79ab,	// (0x0003a7b3) call3_video_subqcif_pane

0x79bf,	// (0x0003a7c7) call3_video_subqcif_uncrop_pane_ParamLimits

0x79bf,	// (0x0003a7c7) call3_video_subqcif_uncrop_pane

0x7a19,	// (0x0003a821) popup_call3_audio_in_window_g4_ParamLimits

0x7a19,	// (0x0003a821) popup_call3_audio_in_window_g4

0x7936,	// (0x0003a73e) mup_spec_half_pane

0x793f,	// (0x0003a747) mup_spec_half_pane_cp

0xe4d7,	// (0x000412df) mup_osc_middle_pane

0xe4e0,	// (0x000412e8) mup_visualizer_osc_pane_g1

0x7916,	// (0x0003a71e) mup_spec_bar_pane_ParamLimits

0x7916,	// (0x0003a71e) mup_spec_bar_pane

0xe4c4,	// (0x000412cc) mup_spec_bar_pane_g1

0xe4ce,	// (0x000412d6) mup_spec_bar_pane_g2

0x0001,

0xf62a,	// (0x00042432) mup_spec_bar_pane_g

0x4f31,	// (0x00037d39) aid_cale_week_size_cell_pane_ParamLimits

0x4f44,	// (0x00037d4c) bg_cale_heading_pane_ParamLimits

0xc6b7,	// (0x0003f4bf) bg_cale_pane_cp01_ParamLimits

0x4f58,	// (0x00037d60) cale_week_corner_pane_ParamLimits

0x4f6e,	// (0x00037d76) cale_week_day_heading_pane_ParamLimits

0x4f82,	// (0x00037d8a) cale_week_scroll_pane_g1_ParamLimits

0x4f93,	// (0x00037d9b) cale_week_scroll_pane_g2_ParamLimits

0x4fa4,	// (0x00037dac) cale_week_scroll_pane_g3_ParamLimits

0x4fb5,	// (0x00037dbd) cale_week_scroll_pane_g4_ParamLimits

0x4fc6,	// (0x00037dce) cale_week_scroll_pane_g5_ParamLimits

0x4fd7,	// (0x00037ddf) cale_week_scroll_pane_g6_ParamLimits

0x4fea,	// (0x00037df2) cale_week_scroll_pane_g7_ParamLimits

0x4ffd,	// (0x00037e05) cale_week_scroll_pane_g8_ParamLimits

0x5010,	// (0x00037e18) cale_week_scroll_pane_g9_ParamLimits

0x5021,	// (0x00037e29) cale_week_scroll_pane_g10_ParamLimits

0x5032,	// (0x00037e3a) cale_week_scroll_pane_g11_ParamLimits

0x5043,	// (0x00037e4b) cale_week_scroll_pane_g12_ParamLimits

0x5054,	// (0x00037e5c) cale_week_scroll_pane_g13_ParamLimits

0x5065,	// (0x00037e6d) cale_week_scroll_pane_g14_ParamLimits

0x5076,	// (0x00037e7e) cale_week_scroll_pane_g15_ParamLimits

0xf1d2,	// (0x00041fda) cale_week_scroll_pane_g_ParamLimits

0x5087,	// (0x00037e8f) cale_week_time_pane_ParamLimits

0x509a,	// (0x00037ea2) grid_cale_week_pane_ParamLimits

0xc6d0,	// (0x0003f4d8) listscroll_cale_week_pane_t1

0x50af,	// (0x00037eb7) scroll_pane_cp08_ParamLimits

0x5cbe,	// (0x00038ac6) cale_month_corner_pane_ParamLimits

0xca69,	// (0x0003f871) cale_month_pane_t1

0x5f98,	// (0x00038da0) cale_month_week_pane_ParamLimits

0xcd1f,	// (0x0003fb27) popup_call_status_window_g1_ParamLimits

0x66b1,	// (0x000394b9) popup_call_status_window_g2_ParamLimits

0x66bd,	// (0x000394c5) popup_call_status_window_g3_ParamLimits

0xf37a,	// (0x00042182) popup_call_status_window_g_ParamLimits

0xcd86,	// (0x0003fb8e) aid_call2_pane

0x366c,	// (0x00036474) msg_header_pane_g1

0x70a5,	// (0x00039ead) postcard_address2_pane_ParamLimits

0x70a5,	// (0x00039ead) postcard_address2_pane

0x70b3,	// (0x00039ebb) postcard_message2_pane_ParamLimits

0x70b3,	// (0x00039ebb) postcard_message2_pane

0x78d0,	// (0x0003a6d8) message2_row_pane_ParamLimits

0x78d0,	// (0x0003a6d8) message2_row_pane

0xe47f,	// (0x00041287) address2_row_pane_ParamLimits

0xe47f,	// (0x00041287) address2_row_pane

0xe492,	// (0x0004129a) postcard_message2_row_pane_g1

0xe49a,	// (0x000412a2) postcard_message2_row_pane_t1

0xe492,	// (0x0004129a) address2_row_pane_g1

0xe49a,	// (0x000412a2) address2_row_pane_t1

0x53f9,	// (0x00038201) aid_size_cell_vorec

0xc26a,	// (0x0003f072) main_rss_pane

0x78ea,	// (0x0003a6f2) rss_list_single_pane_ParamLimits

0x78ea,	// (0x0003a6f2) rss_list_single_pane

0xe4a8,	// (0x000412b0) rss_list_single_pane_t1

0xe4b6,	// (0x000412be) rss_list_single_pane_t2

0x0001,

0xf625,	// (0x0004242d) rss_list_single_pane_t

0xc26a,	// (0x0003f072) main_camera2_pane

0xc26a,	// (0x0003f072) main_video2_pane

0x7afe,	// (0x0003a906) cams_zoom_pane_cp2_ParamLimits

0x7afe,	// (0x0003a906) cams_zoom_pane_cp2

0x7b0a,	// (0x0003a912) image2_vga_pane_ParamLimits

0x7b0a,	// (0x0003a912) image2_vga_pane

0x7b19,	// (0x0003a921) main_camera2_pane_g1_ParamLimits

0x7b19,	// (0x0003a921) main_camera2_pane_g1

0x7b25,	// (0x0003a92d) main_camera2_pane_g2_ParamLimits

0x7b25,	// (0x0003a92d) main_camera2_pane_g2

0x7b31,	// (0x0003a939) main_camera2_pane_g3_ParamLimits

0x7b31,	// (0x0003a939) main_camera2_pane_g3

0x7b3d,	// (0x0003a945) main_camera2_pane_g4_ParamLimits

0x7b3d,	// (0x0003a945) main_camera2_pane_g4

0x7b49,	// (0x0003a951) main_camera2_pane_g5_ParamLimits

0x7b49,	// (0x0003a951) main_camera2_pane_g5

0x7b55,	// (0x0003a95d) main_camera2_pane_g6_ParamLimits

0x7b55,	// (0x0003a95d) main_camera2_pane_g6

0x7b61,	// (0x0003a969) main_camera2_pane_g7_ParamLimits

0x7b61,	// (0x0003a969) main_camera2_pane_g7

0x7b6d,	// (0x0003a975) main_camera2_pane_g8_ParamLimits

0x7b6d,	// (0x0003a975) main_camera2_pane_g8

0x0008,

0xf646,	// (0x0004244e) main_camera2_pane_g_ParamLimits

0xf646,	// (0x0004244e) main_camera2_pane_g

0x7b85,	// (0x0003a98d) main_camera2_pane_t1_ParamLimits

0x7b85,	// (0x0003a98d) main_camera2_pane_t1

0x7b97,	// (0x0003a99f) main_camera2_pane_t2_ParamLimits

0x7b97,	// (0x0003a99f) main_camera2_pane_t2

0x7ba9,	// (0x0003a9b1) main_camera2_pane_t3_ParamLimits

0x7ba9,	// (0x0003a9b1) main_camera2_pane_t3

0x7bbb,	// (0x0003a9c3) main_camera2_pane_t4_ParamLimits

0x7bbb,	// (0x0003a9c3) main_camera2_pane_t4

0x0006,

0xf659,	// (0x00042461) main_camera2_pane_t_ParamLimits

0xf659,	// (0x00042461) main_camera2_pane_t

0x7c18,	// (0x0003aa20) cams_zoom_pane_cp4_ParamLimits

0x7c18,	// (0x0003aa20) cams_zoom_pane_cp4

0x7c28,	// (0x0003aa30) image2_cif_pane_ParamLimits

0x7c28,	// (0x0003aa30) image2_cif_pane

0x7c3d,	// (0x0003aa45) image2_subqcif_pane_ParamLimits

0x7c3d,	// (0x0003aa45) image2_subqcif_pane

0x7c4c,	// (0x0003aa54) main_video2_pane_g1_ParamLimits

0x7c4c,	// (0x0003aa54) main_video2_pane_g1

0x7c5e,	// (0x0003aa66) main_video2_pane_g2_ParamLimits

0x7c5e,	// (0x0003aa66) main_video2_pane_g2

0x7c6e,	// (0x0003aa76) main_video2_pane_g3_ParamLimits

0x7c6e,	// (0x0003aa76) main_video2_pane_g3

0x7c7e,	// (0x0003aa86) main_video2_pane_g4_ParamLimits

0x7c7e,	// (0x0003aa86) main_video2_pane_g4

0x7c8e,	// (0x0003aa96) main_video2_pane_g5_ParamLimits

0x7c8e,	// (0x0003aa96) main_video2_pane_g5

0x7c9e,	// (0x0003aaa6) main_video2_pane_g6_ParamLimits

0x7c9e,	// (0x0003aaa6) main_video2_pane_g6

0x0005,

0xf668,	// (0x00042470) main_video2_pane_g_ParamLimits

0xf668,	// (0x00042470) main_video2_pane_g

0x7cb0,	// (0x0003aab8) main_video2_pane_t1_ParamLimits

0x7cb0,	// (0x0003aab8) main_video2_pane_t1

0x7cca,	// (0x0003aad2) main_video2_pane_t2_ParamLimits

0x7cca,	// (0x0003aad2) main_video2_pane_t2

0x7cf0,	// (0x0003aaf8) main_video2_pane_t3_ParamLimits

0x7cf0,	// (0x0003aaf8) main_video2_pane_t3

0x0002,

0xf675,	// (0x0004247d) main_video2_pane_t_ParamLimits

0xf675,	// (0x0004247d) main_video2_pane_t

0x760a,	// (0x0003a412) call_muted_g2

0x0001,

0xf617,	// (0x0004241f) call_muted_g

0xc26a,	// (0x0003f072) main_mup2_pane

0xe52e,	// (0x00041336) main_mup2_pane_g1_ParamLimits

0xe52e,	// (0x00041336) main_mup2_pane_g1

0x7d16,	// (0x0003ab1e) main_mup2_pane_g2_ParamLimits

0x7d16,	// (0x0003ab1e) main_mup2_pane_g2

0x7fa8,	// (0x0003adb0) main_mup_pane_g13_cp1

0x7fb0,	// (0x0003adb8) mup_volume_pane_cp1

0x7d38,	// (0x0003ab40) main_mup2_pane_g4_ParamLimits

0x7d38,	// (0x0003ab40) main_mup2_pane_g4

0x7d4d,	// (0x0003ab55) main_mup2_pane_g5_ParamLimits

0x7d4d,	// (0x0003ab55) main_mup2_pane_g5

0x7d62,	// (0x0003ab6a) main_mup2_pane_g6_ParamLimits

0x7d62,	// (0x0003ab6a) main_mup2_pane_g6

0x7d77,	// (0x0003ab7f) main_mup2_pane_g7_ParamLimits

0x7d77,	// (0x0003ab7f) main_mup2_pane_g7

0x0006,

0xf67c,	// (0x00042484) main_mup2_pane_g_ParamLimits

0xf67c,	// (0x00042484) main_mup2_pane_g

0x7d93,	// (0x0003ab9b) main_mup2_pane_t1_ParamLimits

0x7d93,	// (0x0003ab9b) main_mup2_pane_t1

0x7daa,	// (0x0003abb2) main_mup2_pane_t2_ParamLimits

0x7daa,	// (0x0003abb2) main_mup2_pane_t2

0x7dc1,	// (0x0003abc9) main_mup2_pane_t3_ParamLimits

0x7dc1,	// (0x0003abc9) main_mup2_pane_t3

0x7dd8,	// (0x0003abe0) main_mup2_pane_t4_ParamLimits

0x7dd8,	// (0x0003abe0) main_mup2_pane_t4

0x7df2,	// (0x0003abfa) main_mup2_pane_t5_ParamLimits

0x7df2,	// (0x0003abfa) main_mup2_pane_t5

0x7e0c,	// (0x0003ac14) main_mup2_pane_t6_ParamLimits

0x7e0c,	// (0x0003ac14) main_mup2_pane_t6

0x0005,

0xf68b,	// (0x00042493) main_mup2_pane_t_ParamLimits

0xf68b,	// (0x00042493) main_mup2_pane_t

0x7e44,	// (0x0003ac4c) mup2_visualizer_pane_ParamLimits

0x7e44,	// (0x0003ac4c) mup2_visualizer_pane

0x7e7a,	// (0x0003ac82) mup_progress_pane_cp_ParamLimits

0x7e7a,	// (0x0003ac82) mup_progress_pane_cp

0x7f93,	// (0x0003ad9b) mup_volume_pane_cp_ParamLimits

0x7f93,	// (0x0003ad9b) mup_volume_pane_cp

0x7e93,	// (0x0003ac9b) mup2_visualizer_pane_g1_ParamLimits

0x7e93,	// (0x0003ac9b) mup2_visualizer_pane_g1

0xe53a,	// (0x00041342) mup2_visualizer_pane_g2_ParamLimits

0xe53a,	// (0x00041342) mup2_visualizer_pane_g2

0x7ea8,	// (0x0003acb0) mup2_visualizer_pane_g3_ParamLimits

0x7ea8,	// (0x0003acb0) mup2_visualizer_pane_g3

0x0002,

0xf698,	// (0x000424a0) mup2_visualizer_pane_g_ParamLimits

0xf698,	// (0x000424a0) mup2_visualizer_pane_g

0xd2cc,	// (0x000400d4) aid_size_cell_fmradio

0x7720,	// (0x0003a528) aid_height_parent_landcape

0xc8d1,	// (0x0003f6d9) wml_content_pane_cp

0xc8d9,	// (0x0003f6e1) wml_tabs_pane

0xc8e2,	// (0x0003f6ea) popup_wml_miniature_window

0xc8ea,	// (0x0003f6f2) scroll_pane_cp021

0xc8fe,	// (0x0003f706) wml_content_pane_comp8

0xc26a,	// (0x0003f072) bg_popup_sub_pane_cp05

0xe558,	// (0x00041360) popup_wml_miniature_window_g1

0xe560,	// (0x00041368) wml_miniature_view_pane

0x7eb6,	// (0x0003acbe) aid_size_wml_view

0x7ebe,	// (0x0003acc6) wml_miniature_view_pane_g1

0x7ec7,	// (0x0003accf) wml_miniature_view_pane_g2

0x7ed0,	// (0x0003acd8) wml_miniature_view_pane_g3

0x7ed8,	// (0x0003ace0) wml_miniature_view_pane_g4

0x7ee0,	// (0x0003ace8) wml_miniature_view_pane_g5

0x7ee8,	// (0x0003acf0) wml_miniature_view_pane_g6

0x7ef0,	// (0x0003acf8) wml_miniature_view_pane_g7

0x7ef8,	// (0x0003ad00) wml_miniature_view_pane_g8

0x0007,

0xf69f,	// (0x000424a7) wml_miniature_view_pane_g

0xe52e,	// (0x00041336) background_graphic_ParamLimits

0xe52e,	// (0x00041336) background_graphic

0xe568,	// (0x00041370) wml_tabs_2_pane

0xe571,	// (0x00041379) wml_tabs_3_pane_ParamLimits

0xe571,	// (0x00041379) wml_tabs_3_pane

0xe583,	// (0x0004138b) wml_tabs_4_pane_ParamLimits

0xe583,	// (0x0004138b) wml_tabs_4_pane

0xe599,	// (0x000413a1) wml_tabs_5_pane_ParamLimits

0xe599,	// (0x000413a1) wml_tabs_5_pane

0xe5b3,	// (0x000413bb) wml_tabs_pane_g2_ParamLimits

0xe5b3,	// (0x000413bb) wml_tabs_pane_g2

0xe5c7,	// (0x000413cf) wml_tabs_pane_g3_ParamLimits

0xe5c7,	// (0x000413cf) wml_tabs_pane_g3

0x7f00,	// (0x0003ad08) wml_tabs_2_active_pane_ParamLimits

0x7f00,	// (0x0003ad08) wml_tabs_2_active_pane

0x7f12,	// (0x0003ad1a) wml_tabs_2_passive_pane_ParamLimits

0x7f12,	// (0x0003ad1a) wml_tabs_2_passive_pane

0x7f24,	// (0x0003ad2c) wml_tabs_3_active_pane_cp_ParamLimits

0x7f24,	// (0x0003ad2c) wml_tabs_3_active_pane_cp

0x7f37,	// (0x0003ad3f) wml_tabs_3_passive_pane_ParamLimits

0x7f37,	// (0x0003ad3f) wml_tabs_3_passive_pane

0x7f48,	// (0x0003ad50) wml_tabs_3_passive_pane_cp_ParamLimits

0x7f48,	// (0x0003ad50) wml_tabs_3_passive_pane_cp

0x7f5d,	// (0x0003ad65) tabs_4_active_pane

0x7f65,	// (0x0003ad6d) tabs_4_passive_pane

0x7f6d,	// (0x0003ad75) tabs_4_passive_pane_cp

0x7f75,	// (0x0003ad7d) tabs_4_passive_pane_cp2

0x74e5,	// (0x0003a2ed) aid_height_text

0x6ccd,	// (0x00039ad5) mup_volume_cont_pane_ParamLimits

0x6ccd,	// (0x00039ad5) mup_volume_cont_pane

0x4ab0,	// (0x000378b8) aid_size_cell_pinb

0x4aba,	// (0x000378c2) aid_size_list_pinb

0x7e63,	// (0x0003ac6b) mup2_volume_cont_pane_ParamLimits

0x7e63,	// (0x0003ac6b) mup2_volume_cont_pane

0x7f7f,	// (0x0003ad87) mup2_volume_cont_pane_g1_ParamLimits

0x7f7f,	// (0x0003ad87) mup2_volume_cont_pane_g1

0x4607,	// (0x0003740f) aid_size_cell_touch_ParamLimits

0x4607,	// (0x0003740f) aid_size_cell_touch

0x48bb,	// (0x000376c3) touch_pane_ParamLimits

0x48bb,	// (0x000376c3) touch_pane

0x45e9,	// (0x000373f1) main_rss2_pane

0xe5e4,	// (0x000413ec) listscroll_rss2_pane

0xe5ed,	// (0x000413f5) rss2_navigation_pane

0xe5f5,	// (0x000413fd) list_rss2_pane

0xceaa,	// (0x0003fcb2) scroll_pane_cp22

0xe5fd,	// (0x00041405) rss2_navigation_pane_g1

0xe606,	// (0x0004140e) rss2_navigation_pane_g2

0xe60e,	// (0x00041416) rss2_navigation_pane_g3

0x0002,

0xf6b0,	// (0x000424b8) rss2_navigation_pane_g

0xe616,	// (0x0004141e) rss2_navigation_pane_t1

0x7fb8,	// (0x0003adc0) rss2_list_single_pane_ParamLimits

0x7fb8,	// (0x0003adc0) rss2_list_single_pane

0xe624,	// (0x0004142c) rss2_list_single_pane_t2

0xe632,	// (0x0004143a) rss2_list_single_pane_t3_ParamLimits

0xe632,	// (0x0004143a) rss2_list_single_pane_t3

0xe64f,	// (0x00041457) rss2_list_single_pane_t4

0x64c0,	// (0x000392c8) smil_status_pane_g1

0x7737,	// (0x0003a53f) main_image2_pane_ParamLimits

0x7737,	// (0x0003a53f) main_image2_pane

0x7b79,	// (0x0003a981) main_camera2_pane_g9_ParamLimits

0x7b79,	// (0x0003a981) main_camera2_pane_g9

0x7bcd,	// (0x0003a9d5) main_camera2_pane_t5_ParamLimits

0x7bcd,	// (0x0003a9d5) main_camera2_pane_t5

0x7bdf,	// (0x0003a9e7) main_camera2_pane_t6_ParamLimits

0x7bdf,	// (0x0003a9e7) main_camera2_pane_t6

0x7fde,	// (0x0003ade6) main_image2_pane_g1_ParamLimits

0x7fde,	// (0x0003ade6) main_image2_pane_g1

0x727f,	// (0x0003a087) smil2_video_pane_ParamLimits

0x727f,	// (0x0003a087) smil2_video_pane

0x33ed,	// (0x000361f5) aid_zoom_text_primary_cp

0x4860,	// (0x00037668) popup_preview_fixed_window

0xc83a,	// (0x0003f642) im_reading_pane_g1

0x7ac3,	// (0x0003a8cb) cams2_bc_adjust_pane_cp_ParamLimits

0x7ac3,	// (0x0003a8cb) cams2_bc_adjust_pane_cp

0x7c0a,	// (0x0003aa12) cams2_bc_adjust_pane_ParamLimits

0x7c0a,	// (0x0003aa12) cams2_bc_adjust_pane

0x7fea,	// (0x0003adf2) cams2_bc_adjust_pane_g1

0x7ff2,	// (0x0003adfa) cams2_slider_pane

0x7ffb,	// (0x0003ae03) cams2_slider_pane_g1

0x8004,	// (0x0003ae0c) cams2_slider_pane_g2

0x0006,

0xf6b7,	// (0x000424bf) cams2_slider_pane_g

0x4bad,	// (0x000379b5) calc_display_pane_ParamLimits

0x4bcb,	// (0x000379d3) calc_paper_pane_ParamLimits

0x4be7,	// (0x000379ef) grid_calc_pane_ParamLimits

0x671b,	// (0x00039523) popup_clock_digital_window_t1_ParamLimits

0xd269,	// (0x00040071) main_image_pane_t1

0x4b93,	// (0x0003799b) aid_size_cell_calc_ParamLimits

0x4b93,	// (0x0003799b) aid_size_cell_calc

0x7760,	// (0x0003a568) popup_blid_sat_info2_window_ParamLimits

0x7760,	// (0x0003a568) popup_blid_sat_info2_window

0xe665,	// (0x0004146d) aid_size_cell_blid

0xe66d,	// (0x00041475) bg_popup_window_pane_cp07

0xe690,	// (0x00041498) grid_popup_blid_pane

0xe69a,	// (0x000414a2) heading_pane_cp05_ParamLimits

0xe69a,	// (0x000414a2) heading_pane_cp05

0xe76c,	// (0x00041574) cell_popup_blid_pane_ParamLimits

0xe76c,	// (0x00041574) cell_popup_blid_pane

0xe796,	// (0x0004159e) cell_popup_blid_pane_g1

0xe79e,	// (0x000415a6) cell_popup_blid_pane_t1

0x7e29,	// (0x0003ac31) mup2_indicator_pane_ParamLimits

0x7e29,	// (0x0003ac31) mup2_indicator_pane

0xcfe4,	// (0x0003fdec) mup2_visualizer_osc_pane

0xe546,	// (0x0004134e) mup2_visualizer_spec_pane_ParamLimits

0xe546,	// (0x0004134e) mup2_visualizer_spec_pane

0x801e,	// (0x0003ae26) mup2_spec_half_pane

0x8027,	// (0x0003ae2f) mup2_spec_half_pane_cp

0x8031,	// (0x0003ae39) mup2_spec_bar_pane_ParamLimits

0x8031,	// (0x0003ae39) mup2_spec_bar_pane

0xe4c4,	// (0x000412cc) mup2_spec_bar_pane_g1

0xe4ce,	// (0x000412d6) mup2_spec_bar_pane_g2

0x0001,

0xf62a,	// (0x00042432) mup2_spec_bar_pane_g

0x8050,	// (0x0003ae58) mup2_osc_middle_pane

0xe4e0,	// (0x000412e8) mup2_visualizer_osc_pane_g1

0x4932,	// (0x0003773a) popup_number_entry_window_t1_ParamLimits

0x4945,	// (0x0003774d) popup_number_entry_window_t2_ParamLimits

0x4957,	// (0x0003775f) popup_number_entry_window_t3_ParamLimits

0x4969,	// (0x00037771) popup_number_entry_window_t5_ParamLimits

0x4969,	// (0x00037771) popup_number_entry_window_t5

0xf0ec,	// (0x00041ef4) popup_number_entry_window_t_ParamLimits

0x49a1,	// (0x000377a9) text_title_cp2_ParamLimits

0x6f69,	// (0x00039d71) aid_hotspot_pointer_text2_pane

0x7003,	// (0x00039e0b) main_viewer_pane_g9_ParamLimits

0x7003,	// (0x00039e0b) main_viewer_pane_g9

0xca69,	// (0x0003f871) cale_month_pane_t1_ParamLimits

0xcaa6,	// (0x0003f8ae) bg_cale_pane_ParamLimits

0xcabe,	// (0x0003f8c6) list_cale_pane_ParamLimits

0xc6d0,	// (0x0003f4d8) listscroll_cale_day_pane_t1

0xcacf,	// (0x0003f8d7) scroll_pane_cp09_ParamLimits

0x6d0c,	// (0x00039b14) main_mup_eq_pane_t1_ParamLimits

0x6d0c,	// (0x00039b14) main_mup_eq_pane_t1

0x6d28,	// (0x00039b30) main_mup_eq_pane_t2_ParamLimits

0x6d28,	// (0x00039b30) main_mup_eq_pane_t2

0x6d44,	// (0x00039b4c) main_mup_eq_pane_t3_ParamLimits

0x6d44,	// (0x00039b4c) main_mup_eq_pane_t3

0x6d5e,	// (0x00039b66) main_mup_eq_pane_t4_ParamLimits

0x6d5e,	// (0x00039b66) main_mup_eq_pane_t4

0x6d78,	// (0x00039b80) main_mup_eq_pane_t5_ParamLimits

0x6d78,	// (0x00039b80) main_mup_eq_pane_t5

0x6d92,	// (0x00039b9a) main_mup_eq_pane_t6_ParamLimits

0x6d92,	// (0x00039b9a) main_mup_eq_pane_t6

0x6da8,	// (0x00039bb0) main_mup_eq_pane_t7_ParamLimits

0x6da8,	// (0x00039bb0) main_mup_eq_pane_t7

0x6dbe,	// (0x00039bc6) main_mup_eq_pane_t8_ParamLimits

0x6dbe,	// (0x00039bc6) main_mup_eq_pane_t8

0x6dd4,	// (0x00039bdc) main_mup_eq_pane_t9_ParamLimits

0x6dd4,	// (0x00039bdc) main_mup_eq_pane_t9

0x6df0,	// (0x00039bf8) main_mup_eq_pane_t10_ParamLimits

0x6df0,	// (0x00039bf8) main_mup_eq_pane_t10

0x0009,

0xf479,	// (0x00042281) main_mup_eq_pane_t_ParamLimits

0xf479,	// (0x00042281) main_mup_eq_pane_t

0x6eb5,	// (0x00039cbd) mup_equalizer_pane_cp5_ParamLimits

0x6ecd,	// (0x00039cd5) mup_equalizer_pane_cp6_ParamLimits

0x6ee5,	// (0x00039ced) mup_equalizer_pane_cp7_ParamLimits

0x45e9,	// (0x000373f1) main_gallery_pane

0xe4e9,	// (0x000412f1) smil2_volume_pane

0xe4f1,	// (0x000412f9) smil_status_volume_pane_g1_ParamLimits

0xe504,	// (0x0004130c) smil_status_volume_pane_g2_ParamLimits

0x7947,	// (0x0003a74f) smil_status_volume_pane_g3_ParamLimits

0xf62f,	// (0x00042437) smil_status_volume_pane_g_ParamLimits

0xe66d,	// (0x00041475) bg_popup_window_pane_cp07_ParamLimits

0xe67b,	// (0x00041483) blid_firmament_pane

0x8059,	// (0x0003ae61) aid_size_cell_gallery_ParamLimits

0x8059,	// (0x0003ae61) aid_size_cell_gallery

0x8067,	// (0x0003ae6f) grid_gallery_pane_ParamLimits

0x8067,	// (0x0003ae6f) grid_gallery_pane

0x8077,	// (0x0003ae7f) cell_gallery_pane_ParamLimits

0x8077,	// (0x0003ae7f) cell_gallery_pane

0xe7ac,	// (0x000415b4) bg_cell_gallery_focus_pane_ParamLimits

0xe7ac,	// (0x000415b4) bg_cell_gallery_focus_pane

0xe7be,	// (0x000415c6) cell_gallery_pane_g1_ParamLimits

0xe7be,	// (0x000415c6) cell_gallery_pane_g1

0x80c5,	// (0x0003aecd) cell_gallery_pane_g2_ParamLimits

0x80c5,	// (0x0003aecd) cell_gallery_pane_g2

0x80d2,	// (0x0003aeda) cell_gallery_pane_g3_ParamLimits

0x80d2,	// (0x0003aeda) cell_gallery_pane_g3

0xe7ca,	// (0x000415d2) cell_gallery_pane_g4_ParamLimits

0xe7ca,	// (0x000415d2) cell_gallery_pane_g4

0x0003,

0xf6dd,	// (0x000424e5) cell_gallery_pane_g_ParamLimits

0xf6dd,	// (0x000424e5) cell_gallery_pane_g

0xe7d6,	// (0x000415de) bg_cell_gallery_focus_pane_g1

0xe7de,	// (0x000415e6) bg_cell_gallery_focus_pane_g2

0xe7e6,	// (0x000415ee) bg_cell_gallery_focus_pane_g3

0xe7ee,	// (0x000415f6) bg_cell_gallery_focus_pane_g4

0xe7f6,	// (0x000415fe) bg_cell_gallery_focus_pane_g5

0xe7fe,	// (0x00041606) bg_cell_gallery_focus_pane_g6

0xe806,	// (0x0004160e) bg_cell_gallery_focus_pane_g7

0xe80e,	// (0x00041616) bg_cell_gallery_focus_pane_g8

0x0007,

0xf6e6,	// (0x000424ee) bg_cell_gallery_focus_pane_g

0xe816,	// (0x0004161e) aid_firma_cardinal

0xe82a,	// (0x00041632) blid_firmament_pane_t1

0xe841,	// (0x00041649) blid_firmament_pane_t2

0xe858,	// (0x00041660) blid_firmament_pane_t3

0xe86f,	// (0x00041677) blid_firmament_pane_t4

0x0003,

0xf6f7,	// (0x000424ff) blid_firmament_pane_t

0xe886,	// (0x0004168e) blid_sat_info_pane

0xe896,	// (0x0004169e) blid_sat_info_pane_g1

0xe896,	// (0x0004169e) blid_sat_info_pane_g2

0x0001,

0xf700,	// (0x00042508) blid_sat_info_pane_g

0xe8a0,	// (0x000416a8) blid_sat_info_pane_t1

0xe8ae,	// (0x000416b6) smil2_volume_content_pane

0xe8b7,	// (0x000416bf) smil2_volume_pane_g1

0xe8bf,	// (0x000416c7) smil2_volume_content_pane_g1

0xe8c8,	// (0x000416d0) smil2_volume_content_pane_g2

0xe8d1,	// (0x000416d9) smil2_volume_content_pane_g3

0xe8da,	// (0x000416e2) smil2_volume_content_pane_g4

0xe8e3,	// (0x000416eb) smil2_volume_content_pane_g5

0xe8ec,	// (0x000416f4) smil2_volume_content_pane_g6

0xe8f5,	// (0x000416fd) smil2_volume_content_pane_g7

0xe8fe,	// (0x00041706) smil2_volume_content_pane_g8

0xe907,	// (0x0004170f) smil2_volume_content_pane_g9

0xe910,	// (0x00041718) smil2_volume_content_pane_g10

0x0009,

0xf705,	// (0x0004250d) smil2_volume_content_pane_g

0x5107,	// (0x00037f0f) cale_week_day_heading_pane_t1_ParamLimits

0x5134,	// (0x00037f3c) cale_week_day_heading_pane_t2_ParamLimits

0x5161,	// (0x00037f69) cale_week_day_heading_pane_t3_ParamLimits

0x518e,	// (0x00037f96) cale_week_day_heading_pane_t4_ParamLimits

0x51bb,	// (0x00037fc3) cale_week_day_heading_pane_t5_ParamLimits

0x51e8,	// (0x00037ff0) cale_week_day_heading_pane_t6_ParamLimits

0x5215,	// (0x0003801d) cale_week_day_heading_pane_t7_ParamLimits

0xf1f1,	// (0x00041ff9) cale_week_day_heading_pane_t_ParamLimits

0xc6e2,	// (0x0003f4ea) bg_cale_side_pane_ParamLimits

0x5242,	// (0x0003804a) cale_week_time_pane_t1_ParamLimits

0x526e,	// (0x00038076) cale_week_time_pane_t2_ParamLimits

0x529a,	// (0x000380a2) cale_week_time_pane_t3_ParamLimits

0x52c6,	// (0x000380ce) cale_week_time_pane_t4_ParamLimits

0x52f2,	// (0x000380fa) cale_week_time_pane_t5_ParamLimits

0x531e,	// (0x00038126) cale_week_time_pane_t6_ParamLimits

0x534a,	// (0x00038152) cale_week_time_pane_t7_ParamLimits

0x5376,	// (0x0003817e) cale_week_time_pane_t8_ParamLimits

0xf200,	// (0x00042008) cale_week_time_pane_t_ParamLimits

0x53a2,	// (0x000381aa) cell_cale_week_pane_g2_ParamLimits

0xc6e2,	// (0x0003f4ea) bg_cale_side_pane_cp01_ParamLimits

0x62bd,	// (0x000390c5) cale_month_week_pane_t1_ParamLimits

0x62e8,	// (0x000390f0) cale_month_week_pane_t2_ParamLimits

0x6313,	// (0x0003911b) cale_month_week_pane_t3_ParamLimits

0x633e,	// (0x00039146) cale_month_week_pane_t4_ParamLimits

0x6369,	// (0x00039171) cale_month_week_pane_t5_ParamLimits

0x6394,	// (0x0003919c) cale_month_week_pane_t6_ParamLimits

0xf2d9,	// (0x000420e1) cale_month_week_pane_t_ParamLimits

0x648d,	// (0x00039295) cell_cale_month_pane_g1_ParamLimits

0x45e9,	// (0x000373f1) main_cale_event_viewer_pane

0x45e9,	// (0x000373f1) listscroll_cale_event_viewer_pane

0xe919,	// (0x00041721) list_cale_ev_pane

0xe921,	// (0x00041729) scroll_pane_cp023

0x80df,	// (0x0003aee7) field_cale_ev_pane_ParamLimits

0x80df,	// (0x0003aee7) field_cale_ev_pane

0xe92d,	// (0x00041735) field_cale_ev_content_pane_ParamLimits

0xe92d,	// (0x00041735) field_cale_ev_content_pane

0xe939,	// (0x00041741) field_cale_ev_pane_g1_ParamLimits

0xe939,	// (0x00041741) field_cale_ev_pane_g1

0xe945,	// (0x0004174d) field_cale_ev_pane_g2_ParamLimits

0xe945,	// (0x0004174d) field_cale_ev_pane_g2

0xe95d,	// (0x00041765) field_cale_ev_pane_g3_ParamLimits

0xe95d,	// (0x00041765) field_cale_ev_pane_g3

0x0002,

0xf71a,	// (0x00042522) field_cale_ev_pane_g_ParamLimits

0xf71a,	// (0x00042522) field_cale_ev_pane_g

0xe975,	// (0x0004177d) field_cale_ev_pane_t1_ParamLimits

0xe975,	// (0x0004177d) field_cale_ev_pane_t1

0x8103,	// (0x0003af0b) field_cale_ev_content_pane_t1_ParamLimits

0x8103,	// (0x0003af0b) field_cale_ev_content_pane_t1

0xd14f,	// (0x0003ff57) bg_button_pane_cp01

0xc590,	// (0x0003f398) listscroll_cale_week_pane_ParamLimits

0x4f27,	// (0x00037d2f) popup_toolbar_window_cp01

0xc6d0,	// (0x0003f4d8) listscroll_cale_week_pane_t1_ParamLimits

0xc590,	// (0x0003f398) listscroll_cale_day_pane_ParamLimits

0x4f27,	// (0x00037d2f) popup_toolbar_window_cp02

0xc6d0,	// (0x0003f4d8) listscroll_cale_day_pane_t1_ParamLimits

0xc590,	// (0x0003f398) main_cale_month_pane_ParamLimits

0x7844,	// (0x0003a64c) popup_toolbar_window_cp03_ParamLimits

0x7844,	// (0x0003a64c) popup_toolbar_window_cp03

0x718f,	// (0x00039f97) main_image_pane_g2_ParamLimits

0x718f,	// (0x00039f97) main_image_pane_g2

0x719b,	// (0x00039fa3) main_image_pane_g3_ParamLimits

0x719b,	// (0x00039fa3) main_image_pane_g3

0x0002,

0xf50b,	// (0x00042313) main_image_pane_g_ParamLimits

0xf50b,	// (0x00042313) main_image_pane_g

0xd269,	// (0x00040071) main_image_pane_t1_ParamLimits

0x71a7,	// (0x00039faf) main_image_pane_t2_ParamLimits

0x71a7,	// (0x00039faf) main_image_pane_t2

0x71b9,	// (0x00039fc1) main_image_pane_t3_ParamLimits

0x71b9,	// (0x00039fc1) main_image_pane_t3

0x71cb,	// (0x00039fd3) main_image_pane_t4_ParamLimits

0x71cb,	// (0x00039fd3) main_image_pane_t4

0x0003,

0xf512,	// (0x0004231a) main_image_pane_t_ParamLimits

0xf512,	// (0x0004231a) main_image_pane_t

0x71dd,	// (0x00039fe5) popup_image_details_window_cp01

0x71e7,	// (0x00039fef) popup_toobar_trans_pane_cp01_ParamLimits

0x71e7,	// (0x00039fef) popup_toobar_trans_pane_cp01

0x77b5,	// (0x0003a5bd) popup_image_details_window_ParamLimits

0x77b5,	// (0x0003a5bd) popup_image_details_window

0xe435,	// (0x0004123d) popup_image_focus_window

0x7ab5,	// (0x0003a8bd) camera2_autofocus_pane_ParamLimits

0x7ab5,	// (0x0003a8bd) camera2_autofocus_pane

0x45e9,	// (0x000373f1) bg_popup_sub_pane_cp06

0xe98c,	// (0x00041794) popup_image_focus_window_g1

0xe994,	// (0x0004179c) popup_image_focus_window_g2

0xe99c,	// (0x000417a4) popup_image_focus_window_g3

0xe9a4,	// (0x000417ac) popup_image_focus_window_g4

0x0003,

0xf721,	// (0x00042529) popup_image_focus_window_g

0xe9ac,	// (0x000417b4) popup_image_focus_window_t1

0xe9ba,	// (0x000417c2) popup_image_focus_window_t2

0xe9ca,	// (0x000417d2) popup_image_focus_window_t3

0x0002,

0xf72a,	// (0x00042532) popup_image_focus_window_t

0xe9d8,	// (0x000417e0) camera2_autofocus_pane_g1

0x7737,	// (0x0003a53f) bg_tb_trans_pane_cp01

0xe9e6,	// (0x000417ee) popup_image_details_window_g1

0xe9f9,	// (0x00041801) popup_image_details_window_g2

0x0002,

0xf73c,	// (0x00042544) popup_image_details_window_g

0xea22,	// (0x0004182a) popup_image_details_window_t1

0xea34,	// (0x0004183c) popup_image_details_window_t2

0xea4d,	// (0x00041855) popup_image_details_window_t3

0xea61,	// (0x00041869) popup_image_details_window_t4

0xea7c,	// (0x00041884) popup_image_details_window_t5

0x0004,

0xf743,	// (0x0004254b) popup_image_details_window_t

0xc57c,	// (0x0003f384) bg_calc_paper_pane_ParamLimits

0x45e9,	// (0x000373f1) grid_highlight_pane_cp013

0x4ce0,	// (0x00037ae8) list_calc_pane_ParamLimits

0x4cf2,	// (0x00037afa) scroll_pane_cp024

0xc590,	// (0x0003f398) bg_calc_display_pane_ParamLimits

0x4cfa,	// (0x00037b02) calc_display_pane_t1_ParamLimits

0x4d0f,	// (0x00037b17) calc_display_pane_t2_ParamLimits

0x4d24,	// (0x00037b2c) calc_display_pane_t3_ParamLimits

0xf173,	// (0x00041f7b) calc_display_pane_t_ParamLimits

0x4df7,	// (0x00037bff) cell_calc_pane_g2

0x0001,

0xf190,	// (0x00041f98) cell_calc_pane_g

0x4e00,	// (0x00037c08) cell_calc_pane_t1

0xc5ef,	// (0x0003f3f7) grid_highlight_pane_cp02_ParamLimits

0xc605,	// (0x0003f40d) toolbar_button_pane_cp01_ParamLimits

0xc605,	// (0x0003f40d) toolbar_button_pane_cp01

0xd2ae,	// (0x000400b6) temp_image_control_pane_ParamLimits

0xd2ae,	// (0x000400b6) temp_image_control_pane

0x7737,	// (0x0003a53f) main_mp3_pane

0xea96,	// (0x0004189e) temp_image_control_pane_g1_ParamLimits

0xea96,	// (0x0004189e) temp_image_control_pane_g1

0xeaa4,	// (0x000418ac) temp_image_control_pane_g2_ParamLimits

0xeaa4,	// (0x000418ac) temp_image_control_pane_g2

0xeab6,	// (0x000418be) temp_image_control_pane_g3_ParamLimits

0xeab6,	// (0x000418be) temp_image_control_pane_g3

0x8151,	// (0x0003af59) temp_image_control_pane_g4_ParamLimits

0x8151,	// (0x0003af59) temp_image_control_pane_g4

0x0003,

0xf74e,	// (0x00042556) temp_image_control_pane_g_ParamLimits

0xf74e,	// (0x00042556) temp_image_control_pane_g

0xea96,	// (0x0004189e) main_mp3_pane_g1

0x8162,	// (0x0003af6a) main_mp3_pane_g2

0x0007,

0xf757,	// (0x0004255f) main_mp3_pane_g

0xeaf9,	// (0x00041901) main_mp3_pane_t1

0xc747,	// (0x0003f54f) main_camera_pane_g8_ParamLimits

0xc747,	// (0x0003f54f) main_camera_pane_g8

0x564e,	// (0x00038456) main_video_pane_g7_ParamLimits

0x564e,	// (0x00038456) main_video_pane_g7

0x7bf8,	// (0x0003aa00) main_camera2_pane_t7_ParamLimits

0x7bf8,	// (0x0003aa00) main_camera2_pane_t7

0xc891,	// (0x0003f699) scroll_pane_cp025_ParamLimits

0xc891,	// (0x0003f699) scroll_pane_cp025

0xc8a5,	// (0x0003f6ad) scroll_pane_cp026_ParamLimits

0xc8a5,	// (0x0003f6ad) scroll_pane_cp026

0xc8b4,	// (0x0003f6bc) wml_content_pane_ParamLimits

0x45e9,	// (0x000373f1) main_touch_calib_pane

0x8206,	// (0x0003b00e) main_touch_calib_pane_g1

0x8212,	// (0x0003b01a) main_touch_calib_pane_g2

0x821e,	// (0x0003b026) main_touch_calib_pane_g3

0x822a,	// (0x0003b032) main_touch_calib_pane_g4

0x0003,

0xf775,	// (0x0004257d) main_touch_calib_pane_g

0x8236,	// (0x0003b03e) main_touch_calib_pane_t1

0x824d,	// (0x0003b055) main_touch_calib_pane_t2

0x0004,

0xf77e,	// (0x00042586) main_touch_calib_pane_t

0xcf25,	// (0x0003fd2d) mup_progress_pane_cp02

0xcf44,	// (0x0003fd4c) navi_pane_g1

0xcfa6,	// (0x0003fdae) navi_pane_mp_t3

0x7737,	// (0x0003a53f) main_mp3_pane_ParamLimits

0x7886,	// (0x0003a68e) navi_pane_ParamLimits

0xea96,	// (0x0004189e) main_mp3_pane_g1_ParamLimits

0x8162,	// (0x0003af6a) main_mp3_pane_g2_ParamLimits

0x816e,	// (0x0003af76) main_mp3_pane_g3_ParamLimits

0x816e,	// (0x0003af76) main_mp3_pane_g3

0x817a,	// (0x0003af82) main_mp3_pane_g4_ParamLimits

0x817a,	// (0x0003af82) main_mp3_pane_g4

0xeac6,	// (0x000418ce) main_mp3_pane_g5_ParamLimits

0xeac6,	// (0x000418ce) main_mp3_pane_g5

0xead4,	// (0x000418dc) main_mp3_pane_g6_ParamLimits

0xead4,	// (0x000418dc) main_mp3_pane_g6

0xeae1,	// (0x000418e9) main_mp3_pane_g7_ParamLimits

0xeae1,	// (0x000418e9) main_mp3_pane_g7

0xeaed,	// (0x000418f5) main_mp3_pane_g8_ParamLimits

0xeaed,	// (0x000418f5) main_mp3_pane_g8

0xf757,	// (0x0004255f) main_mp3_pane_g_ParamLimits

0x8186,	// (0x0003af8e) main_mp3_pane_t2

0x8196,	// (0x0003af9e) main_mp3_pane_t3

0xeb07,	// (0x0004190f) main_mp3_pane_t4

0xeb15,	// (0x0004191d) main_mp3_pane_t5

0x0005,

0xf768,	// (0x00042570) main_mp3_pane_t

0xeb23,	// (0x0004192b) mup_progress_pane_cp01

0x33ed,	// (0x000361f5) aid_zoom_text_secondary2

0xe919,	// (0x00041721) list_cale_ev2_pane

0xe921,	// (0x00041729) scroll_pane_cp023_ParamLimits

0x82a4,	// (0x0003b0ac) field_cale_ev2_pane_ParamLimits

0x82a4,	// (0x0003b0ac) field_cale_ev2_pane

0x36f5,	// (0x000364fd) field_cale_ev2_pane_g1_ParamLimits

0x36f5,	// (0x000364fd) field_cale_ev2_pane_g1

0x3701,	// (0x00036509) field_cale_ev2_pane_g2_ParamLimits

0x3701,	// (0x00036509) field_cale_ev2_pane_g2

0x3719,	// (0x00036521) field_cale_ev2_pane_g3_ParamLimits

0x3719,	// (0x00036521) field_cale_ev2_pane_g3

0x0003,

0xf789,	// (0x00042591) field_cale_ev2_pane_g_ParamLimits

0xf789,	// (0x00042591) field_cale_ev2_pane_g

0x373d,	// (0x00036545) field_cale_ev2_pane_t1_ParamLimits

0x373d,	// (0x00036545) field_cale_ev2_pane_t1

0x3754,	// (0x0003655c) field_cale_ev2_pane_t2_ParamLimits

0x3754,	// (0x0003655c) field_cale_ev2_pane_t2

0x0001,

0xf792,	// (0x0004259a) field_cale_ev2_pane_t_ParamLimits

0xf792,	// (0x0004259a) field_cale_ev2_pane_t

0x706b,	// (0x00039e73) main_postcard_pane_g5_ParamLimits

0x706b,	// (0x00039e73) main_postcard_pane_g5

0x7079,	// (0x00039e81) main_postcard_pane_g6_ParamLimits

0x7079,	// (0x00039e81) main_postcard_pane_g6

0x548c,	// (0x00038294) camera2_autofocus_pane_cp_ParamLimits

0x548c,	// (0x00038294) camera2_autofocus_pane_cp

0x7737,	// (0x0003a53f) main_mup3_pane

0x82e2,	// (0x0003b0ea) main_mup3_pane_g1_ParamLimits

0x82e2,	// (0x0003b0ea) main_mup3_pane_g1

0x8303,	// (0x0003b10b) main_mup3_pane_g2_ParamLimits

0x8303,	// (0x0003b10b) main_mup3_pane_g2

0x837f,	// (0x0003b187) main_mup3_pane_g3_ParamLimits

0x837f,	// (0x0003b187) main_mup3_pane_g3

0x83c0,	// (0x0003b1c8) main_mup3_pane_g4_ParamLimits

0x83c0,	// (0x0003b1c8) main_mup3_pane_g4

0x8401,	// (0x0003b209) main_mup3_pane_g5_ParamLimits

0x8401,	// (0x0003b209) main_mup3_pane_g5

0x8442,	// (0x0003b24a) main_mup3_pane_g6_ParamLimits

0x8442,	// (0x0003b24a) main_mup3_pane_g6

0xeb2b,	// (0x00041933) main_mup3_pane_g7_ParamLimits

0xeb2b,	// (0x00041933) main_mup3_pane_g7

0x0007,

0xf7a2,	// (0x000425aa) main_mup3_pane_g_ParamLimits

0xf7a2,	// (0x000425aa) main_mup3_pane_g

0x84b4,	// (0x0003b2bc) main_mup3_pane_t1_ParamLimits

0x84b4,	// (0x0003b2bc) main_mup3_pane_t1

0x8527,	// (0x0003b32f) main_mup3_pane_t2_ParamLimits

0x8527,	// (0x0003b32f) main_mup3_pane_t2

0x85f4,	// (0x0003b3fc) main_mup3_pane_t4_ParamLimits

0x85f4,	// (0x0003b3fc) main_mup3_pane_t4

0x8648,	// (0x0003b450) main_mup3_pane_t5_ParamLimits

0x8648,	// (0x0003b450) main_mup3_pane_t5

0x86f4,	// (0x0003b4fc) main_mup3_pane_t6_ParamLimits

0x86f4,	// (0x0003b4fc) main_mup3_pane_t6

0x0005,

0xf7b3,	// (0x000425bb) main_mup3_pane_t_ParamLimits

0xf7b3,	// (0x000425bb) main_mup3_pane_t

0x879c,	// (0x0003b5a4) mup3_progress_pane_ParamLimits

0x879c,	// (0x0003b5a4) mup3_progress_pane

0x8807,	// (0x0003b60f) popup_mup3_control_window_ParamLimits

0x8807,	// (0x0003b60f) popup_mup3_control_window

0xeb39,	// (0x00041941) popup_mup3_text_window

0x8824,	// (0x0003b62c) mup3_progress_pane_t1

0x883b,	// (0x0003b643) mup3_progress_pane_t2

0xeb41,	// (0x00041949) mup3_progress_pane_t3

0x0002,

0xf7c0,	// (0x000425c8) mup3_progress_pane_t

0xeb58,	// (0x00041960) mup_progress_pane_cp03

0x45e9,	// (0x000373f1) bg_tb_trans_pane_cp04

0x8852,	// (0x0003b65a) mup3_volume_pane

0x885a,	// (0x0003b662) popup_mup3_control_window_g1

0x0bfe,	// (0x00033a06) mup3_volume_pane_g1

0x0c07,	// (0x00033a0f) mup3_volume_pane_g2

0x0c10,	// (0x00033a18) mup3_volume_pane_g3

0x0002,

0xf7c7,	// (0x000425cf) mup3_volume_pane_g

0x45e9,	// (0x000373f1) bg_tb_trans_pane_cp03

0xeb68,	// (0x00041970) popup_mup3_text_window_g1

0xeb70,	// (0x00041978) popup_mup3_text_window_t1

0xc5d8,	// (0x0003f3e0) list_calc_item_pane_g1_ParamLimits

0xe5db,	// (0x000413e3) mup_volume_pane_cp_g1

0x8264,	// (0x0003b06c) main_touch_calib_pane_t3

0x8278,	// (0x0003b080) main_touch_calib_pane_t4

0x828e,	// (0x0003b096) main_touch_calib_pane_t5

0x45f3,	// (0x000373fb) aid_cell_size_toolbar2

0x45fb,	// (0x00037403) aid_popup3_width_pane

0x33e5,	// (0x000361ed) aid_zoom_text_msg_primary

0x545f,	// (0x00038267) vorec_t7

0xc59c,	// (0x0003f3a4) bg_calc_paper_pane_g1_ParamLimits

0xc5a8,	// (0x0003f3b0) bg_calc_paper_pane_g2_ParamLimits

0xc5b4,	// (0x0003f3bc) bg_calc_paper_pane_g3_ParamLimits

0xc5c0,	// (0x0003f3c8) bg_calc_paper_pane_g4_ParamLimits

0xc5cc,	// (0x0003f3d4) bg_calc_paper_pane_g5_ParamLimits

0x4d65,	// (0x00037b6d) bg_calc_paper_pane_g6_ParamLimits

0x4d76,	// (0x00037b7e) bg_calc_paper_pane_g7_ParamLimits

0x4d87,	// (0x00037b8f) bg_calc_paper_pane_g8_ParamLimits

0xf17a,	// (0x00041f82) bg_calc_paper_pane_g_ParamLimits

0x4d98,	// (0x00037ba0) calc_bg_paper_pane_g9_ParamLimits

0x557d,	// (0x00038385) image_qvga_pane_ParamLimits

0x557d,	// (0x00038385) image_qvga_pane

0xc4c5,	// (0x0003f2cd) bg_popup_sub_pane_cp04_ParamLimits

0xd1e5,	// (0x0003ffed) popup_mup_playback_window_g1_ParamLimits

0xd1f1,	// (0x0003fff9) popup_mup_playback_window_t1_ParamLimits

0xd206,	// (0x0004000e) popup_mup_playback_window_t2_ParamLimits

0xf506,	// (0x0004230e) popup_mup_playback_window_t_ParamLimits

0x7d27,	// (0x0003ab2f) main_mup2_pane_g3_ParamLimits

0x7d27,	// (0x0003ab2f) main_mup2_pane_g3

0x582b,	// (0x00038633) popup_toolbar_window_cp04

0xd601,	// (0x00040409) popup_call2_audio_second_window_g3_ParamLimits

0xd601,	// (0x00040409) popup_call2_audio_second_window_g3

0xda2f,	// (0x00040837) popup_call2_audio_first_window_g4_ParamLimits

0xda2f,	// (0x00040837) popup_call2_audio_first_window_g4

0xe0ae,	// (0x00040eb6) popup_call2_audio_in_window_g4_ParamLimits

0xe0ae,	// (0x00040eb6) popup_call2_audio_in_window_g4

0x7182,	// (0x00039f8a) aid_area_sk_bg_cut_ParamLimits

0x7182,	// (0x00039f8a) aid_area_sk_bg_cut

0xd21b,	// (0x00040023) aid_area_sk_bg_cut_2_ParamLimits

0xd21b,	// (0x00040023) aid_area_sk_bg_cut_2

0x80b5,	// (0x0003aebd) aid_placing_details_win

0x80bd,	// (0x0003aec5) aid_placing_details_win_2

0xe9d8,	// (0x000417e0) camera2_autofocus_pane_g1_ParamLimits

0x4851,	// (0x00037659) popup_fixed_preview_cale_window_ParamLimits

0x4851,	// (0x00037659) popup_fixed_preview_cale_window

0xcff5,	// (0x0003fdfd) navi_slider_pane_g3

0xcffe,	// (0x0003fe06) navi_slider_pane_g4

0xd007,	// (0x0003fe0f) navi_slider_pane_g5

0xcff5,	// (0x0003fdfd) navi_slider_pane_g6

0x6a82,	// (0x0003988a) navi_slider_pane_g7

0xd11c,	// (0x0003ff24) mup_scale_pane_g3

0xd125,	// (0x0003ff2d) mup_scale_pane_g4

0xd12e,	// (0x0003ff36) mup_scale_pane_g5

0x6efd,	// (0x00039d05) mup_scale_pane_g6

0x6f06,	// (0x00039d0e) mup_scale_pane_g7

0xcff5,	// (0x0003fdfd) cams2_slider_pane_g3

0xe65d,	// (0x00041465) cams2_slider_pane_g4

0x800d,	// (0x0003ae15) cams2_slider_pane_g5

0xcff5,	// (0x0003fdfd) cams2_slider_pane_g6

0x8015,	// (0x0003ae1d) cams2_slider_pane_g7

0xe896,	// (0x0004169e) camera2_autofocus_pane_cp_g1

0xeb7e,	// (0x00041986) bg_popup_preview_window_pane_cp02_ParamLimits

0xeb7e,	// (0x00041986) bg_popup_preview_window_pane_cp02

0xeb8a,	// (0x00041992) list_fp_cale_pane_ParamLimits

0xeb8a,	// (0x00041992) list_fp_cale_pane

0xeb96,	// (0x0004199e) popup_fixed_preview_cale_window_t1_ParamLimits

0xeb96,	// (0x0004199e) popup_fixed_preview_cale_window_t1

0x8863,	// (0x0003b66b) popup_fixed_preview_cale_window_t2_ParamLimits

0x8863,	// (0x0003b66b) popup_fixed_preview_cale_window_t2

0x8878,	// (0x0003b680) popup_fixed_preview_cale_window_t3_ParamLimits

0x8878,	// (0x0003b680) popup_fixed_preview_cale_window_t3

0x0002,

0xf7ce,	// (0x000425d6) popup_fixed_preview_cale_window_t_ParamLimits

0xf7ce,	// (0x000425d6) popup_fixed_preview_cale_window_t

0x888d,	// (0x0003b695) list_single_fp_cale_pane_ParamLimits

0x888d,	// (0x0003b695) list_single_fp_cale_pane

0xebb4,	// (0x000419bc) list_single_fp_cale_pane_g1_ParamLimits

0xebb4,	// (0x000419bc) list_single_fp_cale_pane_g1

0xebc0,	// (0x000419c8) list_single_fp_cale_pane_g2_ParamLimits

0xebc0,	// (0x000419c8) list_single_fp_cale_pane_g2

0x0002,

0xf7d5,	// (0x000425dd) list_single_fp_cale_pane_g_ParamLimits

0xf7d5,	// (0x000425dd) list_single_fp_cale_pane_g

0xebd9,	// (0x000419e1) list_single_fp_cale_pane_t1_ParamLimits

0xebd9,	// (0x000419e1) list_single_fp_cale_pane_t1

0xebeb,	// (0x000419f3) list_single_fp_cale_pane_t2_ParamLimits

0xebeb,	// (0x000419f3) list_single_fp_cale_pane_t2

0x0001,

0xf7dc,	// (0x000425e4) list_single_fp_cale_pane_t_ParamLimits

0xf7dc,	// (0x000425e4) list_single_fp_cale_pane_t

0x0000,

0x0000,

0x0000,

0x0000,

0x45e9,	// (0x000373f1) main_dialer_pane

0x889d,	// (0x0003b6a5) aid_cell_size_keypad

0x88a7,	// (0x0003b6af) dialer_ne_pane

0x88b1,	// (0x0003b6b9) grid_dialer_command_1_pane

0x88b9,	// (0x0003b6c1) grid_dialer_command_2_pane

0x88c1,	// (0x0003b6c9) grid_dialer_keypad_pane

0x88d5,	// (0x0003b6dd) bg_popup_call_pane_cp06_ParamLimits

0x88d5,	// (0x0003b6dd) bg_popup_call_pane_cp06

0x88e1,	// (0x0003b6e9) dialer_ne_clear_pane_ParamLimits

0x88e1,	// (0x0003b6e9) dialer_ne_clear_pane

0xec1e,	// (0x00041a26) dialer_ne_pane_g1

0xec26,	// (0x00041a2e) dialer_ne_pane_t1_ParamLimits

0xec26,	// (0x00041a2e) dialer_ne_pane_t1

0x88ed,	// (0x0003b6f5) dialer_ne_pane_t2_ParamLimits

0x88ed,	// (0x0003b6f5) dialer_ne_pane_t2

0x890a,	// (0x0003b712) dialer_ne_pane_t3_ParamLimits

0x890a,	// (0x0003b712) dialer_ne_pane_t3

0x0002,

0xf7e1,	// (0x000425e9) dialer_ne_pane_t_ParamLimits

0xf7e1,	// (0x000425e9) dialer_ne_pane_t

0x892e,	// (0x0003b736) dialer_ne_pane_t3_copy1_ParamLimits

0x892e,	// (0x0003b736) dialer_ne_pane_t3_copy1

0x8952,	// (0x0003b75a) cell_dialer_keypad_pane_ParamLimits

0x8952,	// (0x0003b75a) cell_dialer_keypad_pane

0x8969,	// (0x0003b771) cell_dialer_command_1_pane_ParamLimits

0x8969,	// (0x0003b771) cell_dialer_command_1_pane

0x897f,	// (0x0003b787) cell_dialer_command_2_pane_ParamLimits

0x897f,	// (0x0003b787) cell_dialer_command_2_pane

0xec38,	// (0x00041a40) bg_button_pane_cp02_ParamLimits

0xec38,	// (0x00041a40) bg_button_pane_cp02

0x898e,	// (0x0003b796) cell_dialer_keypad_pane_g1_ParamLimits

0x898e,	// (0x0003b796) cell_dialer_keypad_pane_g1

0xec38,	// (0x00041a40) bg_button_pane_cp03_ParamLimits

0xec38,	// (0x00041a40) bg_button_pane_cp03

0x89a2,	// (0x0003b7aa) cell_dialer_command_1_pane_g1_ParamLimits

0x89a2,	// (0x0003b7aa) cell_dialer_command_1_pane_g1

0xec44,	// (0x00041a4c) bg_button_pane_cp04

0x89b6,	// (0x0003b7be) cell_dialer_command_2_pane_g1

0xcfe4,	// (0x0003fdec) bg_button_pane_cp06

0xec4c,	// (0x00041a54) dialer_ne_clear_pane_g1

0x69c5,	// (0x000397cd) navi_pane_g2

0x69f3,	// (0x000397fb) navi_pane_g3

0x0002,

0xf409,	// (0x00042211) navi_pane_g

0x6a1e,	// (0x00039826) navi_pane_mv_g2

0x6a45,	// (0x0003984d) navi_pane_mv_g5

0x6a4d,	// (0x00039855) navi_pane_mv_t1

0xc590,	// (0x0003f398) main_clock2_pane

0x89ec,	// (0x0003b7f4) main_clock2_list_pane_ParamLimits

0x89ec,	// (0x0003b7f4) main_clock2_list_pane

0x8a16,	// (0x0003b81e) main_clock2_pane_t1_ParamLimits

0x8a16,	// (0x0003b81e) main_clock2_pane_t1

0x8a44,	// (0x0003b84c) main_clock2_pane_t2_ParamLimits

0x8a44,	// (0x0003b84c) main_clock2_pane_t2

0x0004,

0xf7e8,	// (0x000425f0) main_clock2_pane_t_ParamLimits

0xf7e8,	// (0x000425f0) main_clock2_pane_t

0x8aad,	// (0x0003b8b5) popup_clock_analogue_window_cp03_ParamLimits

0x8aad,	// (0x0003b8b5) popup_clock_analogue_window_cp03

0x8acd,	// (0x0003b8d5) popup_clock_digital_window_cp02_ParamLimits

0x8acd,	// (0x0003b8d5) popup_clock_digital_window_cp02

0x8b3e,	// (0x0003b946) main_clock2_list_single_pane_ParamLimits

0x8b3e,	// (0x0003b946) main_clock2_list_single_pane

0xcfe4,	// (0x0003fdec) list_highlight_pane_cp05

0xec54,	// (0x00041a5c) main_clock2_list_single_pane_t1

0x582b,	// (0x00038633) popup_toolbar_window_cp04_ParamLimits

0x8121,	// (0x0003af29) camera2_autofocus_pane_g2_ParamLimits

0x8121,	// (0x0003af29) camera2_autofocus_pane_g2

0x812d,	// (0x0003af35) camera2_autofocus_pane_g3_ParamLimits

0x812d,	// (0x0003af35) camera2_autofocus_pane_g3

0x8139,	// (0x0003af41) camera2_autofocus_pane_g4_ParamLimits

0x8139,	// (0x0003af41) camera2_autofocus_pane_g4

0x8145,	// (0x0003af4d) camera2_autofocus_pane_g5_ParamLimits

0x8145,	// (0x0003af4d) camera2_autofocus_pane_g5

0x0004,

0xf731,	// (0x00042539) camera2_autofocus_pane_g_ParamLimits

0xf731,	// (0x00042539) camera2_autofocus_pane_g

0x82c2,	// (0x0003b0ca) camera2_autofocus_pane_cp_g2

0x82ca,	// (0x0003b0d2) camera2_autofocus_pane_cp_g3

0x82d2,	// (0x0003b0da) camera2_autofocus_pane_cp_g4

0x82da,	// (0x0003b0e2) camera2_autofocus_pane_cp_g5

0x0004,

0xf797,	// (0x0004259f) camera2_autofocus_pane_cp_g

0x88cd,	// (0x0003b6d5) popup_dialer_spcha_window

0x45e9,	// (0x000373f1) bg_popup_sub_pane_cp07

0xec62,	// (0x00041a6a) list_spcha_pane

0xec6a,	// (0x00041a72) list_single_spcha_pane_ParamLimits

0xec6a,	// (0x00041a72) list_single_spcha_pane

0x45e9,	// (0x000373f1) list_highlight_pane_cp06

0xec7b,	// (0x00041a83) list_single_spcha_pane_t1

0xde58,	// (0x00040c60) popup_call2_audio_out_window_g4_ParamLimits

0xde58,	// (0x00040c60) popup_call2_audio_out_window_g4

0x45e9,	// (0x000373f1) main_imed2_pane

0xe43f,	// (0x00041247) popup_imed_adjust2_window

0x77c3,	// (0x0003a5cb) popup_imed_trans_window_ParamLimits

0x77c3,	// (0x0003a5cb) popup_imed_trans_window

0xe6c6,	// (0x000414ce) popup_blid_sat_info2_window_t1

0xe6d4,	// (0x000414dc) popup_blid_sat_info2_window_t2

0x000a,

0xf6c6,	// (0x000424ce) popup_blid_sat_info2_window_t

0x8be8,	// (0x0003b9f0) aid_size_cell_colour_35

0x8c02,	// (0x0003ba0a) aid_size_cell_colour_112

0x8c19,	// (0x0003ba21) aid_size_cell_effect

0x7737,	// (0x0003a53f) bg_tb_trans_pane_cp02

0xd8d3,	// (0x000406db) heading_imed_pane

0x8c33,	// (0x0003ba3b) listscroll_imed_pane

0xec89,	// (0x00041a91) heading_imed_pane_g1

0xec91,	// (0x00041a99) heading_imed_pane_t1

0xec9f,	// (0x00041aa7) grid_imed_colour_35_pane_ParamLimits

0xec9f,	// (0x00041aa7) grid_imed_colour_35_pane

0x8c3f,	// (0x0003ba47) grid_imed_effect_pane

0xecbb,	// (0x00041ac3) list_imed_aspect_pane

0x8c4f,	// (0x0003ba57) scroll_pane_cp027_ParamLimits

0x8c4f,	// (0x0003ba57) scroll_pane_cp027

0x8c5b,	// (0x0003ba63) cell_imed_effect_pane_ParamLimits

0x8c5b,	// (0x0003ba63) cell_imed_effect_pane

0xecc3,	// (0x00041acb) cell_imed_colour_pane_ParamLimits

0xecc3,	// (0x00041acb) cell_imed_colour_pane

0xed0d,	// (0x00041b15) cell_imed_colour_pane_g1_ParamLimits

0xed0d,	// (0x00041b15) cell_imed_colour_pane_g1

0xed1e,	// (0x00041b26) hgihlgiht_grid_pane_cp016_ParamLimits

0xed1e,	// (0x00041b26) hgihlgiht_grid_pane_cp016

0x8c77,	// (0x0003ba7f) cell_imed_effect_pane_g1

0x8c7f,	// (0x0003ba87) grid_highlight_pane_cp017

0xed2f,	// (0x00041b37) list_imed_single_pane_ParamLimits

0xed2f,	// (0x00041b37) list_imed_single_pane

0x45e9,	// (0x000373f1) list_highlight_pane_cp07

0xed43,	// (0x00041b4b) list_imed_aspect_pane_comp1_t1

0xe413,	// (0x0004121b) bg_tb_trans_pane_cp05

0xed65,	// (0x00041b6d) popup_imed_adjust2_window_g1

0xed8c,	// (0x00041b94) popup_imed_adjust2_window_t1

0xeda4,	// (0x00041bac) slider_imed_adjust_pane

0xedb8,	// (0x00041bc0) slider_imed_adjust_pane_g1

0xedc8,	// (0x00041bd0) slider_imed_adjust_pane_g2

0xedd8,	// (0x00041be0) slider_imed_adjust_pane_g3

0xede9,	// (0x00041bf1) slider_imed_adjust_pane_g4

0x0003,

0xf805,	// (0x0004260d) slider_imed_adjust_pane_g

0x8c88,	// (0x0003ba90) aid_size_cell_clipart2

0x8c94,	// (0x0003ba9c) grid_imed_clipart_pane

0xedfa,	// (0x00041c02) scroll_pane_cp031

0x8c9e,	// (0x0003baa6) cell_imed_clipart_pane_ParamLimits

0x8c9e,	// (0x0003baa6) cell_imed_clipart_pane

0x8cbc,	// (0x0003bac4) cell_imed_clipart_pane_g1

0x45e9,	// (0x000373f1) grid_highlight_pane_cp014

0x89f8,	// (0x0003b800) main_clock2_pane_g1_ParamLimits

0x89f8,	// (0x0003b800) main_clock2_pane_g1

0x8ae9,	// (0x0003b8f1) aid_call2_pane_cp10

0x8afb,	// (0x0003b903) aid_call_pane_cp10

0xcf19,	// (0x0003fd21) popup_clock_analogue_window_cp10_g1

0xcf19,	// (0x0003fd21) popup_clock_analogue_window_cp10_g2

0x8b0d,	// (0x0003b915) popup_clock_analogue_window_cp10_g3

0x8b0d,	// (0x0003b915) popup_clock_analogue_window_cp10_g4

0xcf19,	// (0x0003fd21) popup_clock_analogue_window_cp10_g5

0x0004,

0xf7f3,	// (0x000425fb) popup_clock_analogue_window_cp10_g

0x8b1f,	// (0x0003b927) popup_clock_analogue_window_cp10_t1

0x8b50,	// (0x0003b958) clock_digital_number_pane_cp10_ParamLimits

0x8b50,	// (0x0003b958) clock_digital_number_pane_cp10

0x8b68,	// (0x0003b970) clock_digital_number_pane_cp11_ParamLimits

0x8b68,	// (0x0003b970) clock_digital_number_pane_cp11

0x8b80,	// (0x0003b988) clock_digital_number_pane_cp12_ParamLimits

0x8b80,	// (0x0003b988) clock_digital_number_pane_cp12

0x8b98,	// (0x0003b9a0) clock_digital_number_pane_cp13_ParamLimits

0x8b98,	// (0x0003b9a0) clock_digital_number_pane_cp13

0x8bb0,	// (0x0003b9b8) clock_digital_separator_pane_cp10_ParamLimits

0x8bb0,	// (0x0003b9b8) clock_digital_separator_pane_cp10

0x8bc8,	// (0x0003b9d0) popup_clock_digital_window_cp02_t1_ParamLimits

0x8bc8,	// (0x0003b9d0) popup_clock_digital_window_cp02_t1

0xc4bd,	// (0x0003f2c5) clock_digital_number_pane_cp10_g1

0xc4bd,	// (0x0003f2c5) clock_digital_number_pane_cp10_g2

0x0001,

0xf80e,	// (0x00042616) clock_digital_number_pane_cp10_g

0xc4bd,	// (0x0003f2c5) clock_digital_separator_pane_cp10_g1

0xc4bd,	// (0x0003f2c5) clock_digital_separator_pane_g2_cp10

0xcfb4,	// (0x0003fdbc) navi_pane_vded_g4

0xcfbd,	// (0x0003fdc5) navi_pane_vded_g5

0xcfc6,	// (0x0003fdce) navi_pane_vded_t1

0x45e9,	// (0x000373f1) main_vded_pane

0x8cc5,	// (0x0003bacd) main_vded_pane_g1

0x8cd1,	// (0x0003bad9) main_vded_pane_g2

0x8cdb,	// (0x0003bae3) main_vded_pane_g3

0x0002,

0xf813,	// (0x0004261b) main_vded_pane_g

0x8ce5,	// (0x0003baed) main_vded_pane_t1

0x8cf3,	// (0x0003bafb) main_vded_pane_t2

0x0001,

0xf81a,	// (0x00042622) main_vded_pane_t

0x8d01,	// (0x0003bb09) vded_slider_pane

0x8d0b,	// (0x0003bb13) vded_video_pane

0xee02,	// (0x00041c0a) vded_video_pane_g1

0x8d17,	// (0x0003bb1f) vded_video_pane_g2

0xe896,	// (0x0004169e) vded_video_pane_g3

0x0002,

0xf81f,	// (0x00042627) vded_video_pane_g

0xee0c,	// (0x00041c14) vded_slider_pane_g1

0xe5db,	// (0x000413e3) vded_slider_pane_g2

0xee15,	// (0x00041c1d) vded_slider_pane_g3

0xee1e,	// (0x00041c26) vded_slider_pane_g4

0xee27,	// (0x00041c2f) vded_slider_pane_g5

0x0004,

0xf826,	// (0x0004262e) vded_slider_pane_g

0x87fb,	// (0x0003b603) mup3_rocker_pane_ParamLimits

0x87fb,	// (0x0003b603) mup3_rocker_pane

0x8d20,	// (0x0003bb28) mup3_control_keys_pane_g1

0x8d28,	// (0x0003bb30) mup3_control_keys_pane_g2

0x8d30,	// (0x0003bb38) mup3_control_keys_pane_g3

0x8d38,	// (0x0003bb40) mup3_control_keys_pane_g4

0x0003,

0xf831,	// (0x00042639) mup3_control_keys_pane_g

0x4879,	// (0x00037681) popup_toolbar2_fixed_window_cp01_ParamLimits

0x4879,	// (0x00037681) popup_toolbar2_fixed_window_cp01

0x8817,	// (0x0003b61f) popup_toolbar2_fixed_window_cp02_ParamLimits

0x8817,	// (0x0003b61f) popup_toolbar2_fixed_window_cp02

0xd773,	// (0x0004057b) popup_call2_audio_second_window_t4_ParamLimits

0xd773,	// (0x0004057b) popup_call2_audio_second_window_t4

0xdcc5,	// (0x00040acd) popup_call2_audio_first_window_t6_ParamLimits

0xdcc5,	// (0x00040acd) popup_call2_audio_first_window_t6

0xdf5b,	// (0x00040d63) popup_call2_audio_out_window_t6_ParamLimits

0xdf5b,	// (0x00040d63) popup_call2_audio_out_window_t6

0x45e9,	// (0x000373f1) main_vitu_pane

0x8d48,	// (0x0003bb50) aid_size_cell_itu_ParamLimits

0x8d48,	// (0x0003bb50) aid_size_cell_itu

0x48a1,	// (0x000376a9) bg_popup_window_pane_cp08_ParamLimits

0x48a1,	// (0x000376a9) bg_popup_window_pane_cp08

0x8d56,	// (0x0003bb5e) field_vitu_entry_pane_ParamLimits

0x8d56,	// (0x0003bb5e) field_vitu_entry_pane

0x8d65,	// (0x0003bb6d) grid_vitu_function_pane_ParamLimits

0x8d65,	// (0x0003bb6d) grid_vitu_function_pane

0x8d75,	// (0x0003bb7d) grid_vitu_itu_pane_ParamLimits

0x8d75,	// (0x0003bb7d) grid_vitu_itu_pane

0x8d85,	// (0x0003bb8d) cell_vitu_itu_pane_ParamLimits

0x8d85,	// (0x0003bb8d) cell_vitu_itu_pane

0x8d9c,	// (0x0003bba4) cell_vitu_function_pane_ParamLimits

0x8d9c,	// (0x0003bba4) cell_vitu_function_pane

0x7737,	// (0x0003a53f) bg_popup_sub_pane_cp08_ParamLimits

0x7737,	// (0x0003a53f) bg_popup_sub_pane_cp08

0x8db0,	// (0x0003bbb8) field_vitu_entry_pane_t1_ParamLimits

0x8db0,	// (0x0003bbb8) field_vitu_entry_pane_t1

0xee48,	// (0x00041c50) field_vitu_entry_pane_t2_ParamLimits

0xee48,	// (0x00041c50) field_vitu_entry_pane_t2

0x0001,

0xf83f,	// (0x00042647) field_vitu_entry_pane_t_ParamLimits

0xf83f,	// (0x00042647) field_vitu_entry_pane_t

0xee65,	// (0x00041c6d) bg_button_pane_cp05_ParamLimits

0xee65,	// (0x00041c6d) bg_button_pane_cp05

0x8dca,	// (0x0003bbd2) cell_vitu_itu_pane_g1

0x8de2,	// (0x0003bbea) cell_vitu_itu_pane_t1_ParamLimits

0x8de2,	// (0x0003bbea) cell_vitu_itu_pane_t1

0x8df4,	// (0x0003bbfc) cell_vitu_itu_pane_t2_ParamLimits

0x8df4,	// (0x0003bbfc) cell_vitu_itu_pane_t2

0x0002,

0xf844,	// (0x0004264c) cell_vitu_itu_pane_t_ParamLimits

0xf844,	// (0x0004264c) cell_vitu_itu_pane_t

0xee73,	// (0x00041c7b) bg_button_pane_cp07

0x8e29,	// (0x0003bc31) cell_vitu_function_pane_g1

0x4c0b,	// (0x00037a13) main_calc_pane_g1

0x462f,	// (0x00037437) aid_visual_content_pane

0x45e9,	// (0x000373f1) main_vradio_pane

0x8e32,	// (0x0003bc3a) main_vradio_pane_g1_ParamLimits

0x8e32,	// (0x0003bc3a) main_vradio_pane_g1

0xee7d,	// (0x00041c85) main_vradio_pane_g2_ParamLimits

0xee7d,	// (0x00041c85) main_vradio_pane_g2

0x0001,

0xf84b,	// (0x00042653) main_vradio_pane_g_ParamLimits

0xf84b,	// (0x00042653) main_vradio_pane_g

0x8e40,	// (0x0003bc48) main_vradio_pane_t1_ParamLimits

0x8e40,	// (0x0003bc48) main_vradio_pane_t1

0x8e52,	// (0x0003bc5a) main_vradio_pane_t2_ParamLimits

0x8e52,	// (0x0003bc5a) main_vradio_pane_t2

0xee8a,	// (0x00041c92) main_vradio_pane_t3_ParamLimits

0xee8a,	// (0x00041c92) main_vradio_pane_t3

0x0002,

0xf850,	// (0x00042658) main_vradio_pane_t_ParamLimits

0xf850,	// (0x00042658) main_vradio_pane_t

0x8e64,	// (0x0003bc6c) vradio_rocker_control_pane_ParamLimits

0x8e64,	// (0x0003bc6c) vradio_rocker_control_pane

0x8e70,	// (0x0003bc78) vradio_station_info_pane_ParamLimits

0x8e70,	// (0x0003bc78) vradio_station_info_pane

0xee9e,	// (0x00041ca6) vradio_frequency_info_pane_ParamLimits

0xee9e,	// (0x00041ca6) vradio_frequency_info_pane

0xe896,	// (0x0004169e) vradio_station_info_pane_g1

0xeead,	// (0x00041cb5) vradio_station_info_pane_t1_ParamLimits

0xeead,	// (0x00041cb5) vradio_station_info_pane_t1

0xeecf,	// (0x00041cd7) vradio_station_info_pane_t2_ParamLimits

0xeecf,	// (0x00041cd7) vradio_station_info_pane_t2

0x0001,

0xf857,	// (0x0004265f) vradio_station_info_pane_t_ParamLimits

0xf857,	// (0x0004265f) vradio_station_info_pane_t

0xeee1,	// (0x00041ce9) vradio_tuning_pane

0xeee9,	// (0x00041cf1) vradio_rocker_control_pane_g1

0xeef1,	// (0x00041cf9) vradio_rocker_control_pane_g2

0xeef9,	// (0x00041d01) vradio_rocker_control_pane_g3

0xef01,	// (0x00041d09) vradio_rocker_control_pane_g4

0xef09,	// (0x00041d11) vradio_rocker_control_pane_g5

0x0004,

0xf85c,	// (0x00042664) vradio_rocker_control_pane_g

0x8e7d,	// (0x0003bc85) vradio_frequency_info_pane_g1

0xef11,	// (0x00041d19) vradio_frequency_info_pane_t1_ParamLimits

0xef11,	// (0x00041d19) vradio_frequency_info_pane_t1

0x8e87,	// (0x0003bc8f) vradio_tuning_pane_g1

0x8e92,	// (0x0003bc9a) vradio_tuning_pane_t1

0x4678,	// (0x00037480) area_side_right_pane_ParamLimits

0x4678,	// (0x00037480) area_side_right_pane

0xe3da,	// (0x000411e2) status_small_pane_g1

0xe3e2,	// (0x000411ea) status_small_pane_g2

0xe3eb,	// (0x000411f3) status_small_pane_g3

0xe3f4,	// (0x000411fc) status_small_pane_g4

0x0003,

0xf61c,	// (0x00042424) status_small_pane_g

0xe3fd,	// (0x00041205) status_small_pane_t1

0x45e9,	// (0x000373f1) main_video3_pane

0xef25,	// (0x00041d2d) cams_zoom_vslider_pane

0xef2d,	// (0x00041d35) image3_wide_pane_ParamLimits

0xef2d,	// (0x00041d35) image3_wide_pane

0xef47,	// (0x00041d4f) image3_wide_small_pane

0xef53,	// (0x00041d5b) main_video3_pane_g1_ParamLimits

0xef53,	// (0x00041d5b) main_video3_pane_g1

0xef6f,	// (0x00041d77) main_video3_pane_g2_ParamLimits

0xef6f,	// (0x00041d77) main_video3_pane_g2

0x0001,

0xf867,	// (0x0004266f) main_video3_pane_g_ParamLimits

0xf867,	// (0x0004266f) main_video3_pane_g

0xef8b,	// (0x00041d93) main_video3_pane_t1_ParamLimits

0xef8b,	// (0x00041d93) main_video3_pane_t1

0xefb6,	// (0x00041dbe) main_video3_pane_t2_ParamLimits

0xefb6,	// (0x00041dbe) main_video3_pane_t2

0xefe3,	// (0x00041deb) main_video3_pane_t3_ParamLimits

0xefe3,	// (0x00041deb) main_video3_pane_t3

0x0002,

0xf86c,	// (0x00042674) main_video3_pane_t_ParamLimits

0xf86c,	// (0x00042674) main_video3_pane_t

0xf010,	// (0x00041e18) cams_zoom_vslider_pane_g1

0xf019,	// (0x00041e21) cams_zoom_vslider_pane_g2

0x0001,

0xf873,	// (0x0004267b) cams_zoom_vslider_pane_g

0xf021,	// (0x00041e29) small_slider_vertical_pane

0xe896,	// (0x0004169e) small_slider_vertical_pane_g1

0xe896,	// (0x0004169e) small_slider_vertical_pane_g2

0xf029,	// (0x00041e31) small_slider_vertical_pane_g3

0x0002,

0xf878,	// (0x00042680) small_slider_vertical_pane_g

0x45e9,	// (0x000373f1) main_hwr_training_pane

0xf032,	// (0x00041e3a) hwr_training_instruct_pane_ParamLimits

0xf032,	// (0x00041e3a) hwr_training_instruct_pane

0x8ea1,	// (0x0003bca9) hwr_training_navi_pane_ParamLimits

0x8ea1,	// (0x0003bca9) hwr_training_navi_pane

0x8ebb,	// (0x0003bcc3) hwr_training_write_pane_ParamLimits

0x8ebb,	// (0x0003bcc3) hwr_training_write_pane

0x45e9,	// (0x000373f1) bg_frame_shadow_pane

0xf069,	// (0x00041e71) hwr_training_write_pane_g1

0xf071,	// (0x00041e79) hwr_training_write_pane_g2

0xf079,	// (0x00041e81) hwr_training_write_pane_g3

0xf081,	// (0x00041e89) hwr_training_write_pane_g4

0xf089,	// (0x00041e91) hwr_training_write_pane_g5

0xf091,	// (0x00041e99) hwr_training_write_pane_g6

0xf099,	// (0x00041ea1) hwr_training_write_pane_g7

0x0006,

0xf87f,	// (0x00042687) hwr_training_write_pane_g

0x8ef3,	// (0x0003bcfb) hwr_training_navi_pane_g1_ParamLimits

0x8ef3,	// (0x0003bcfb) hwr_training_navi_pane_g1

0x8f05,	// (0x0003bd0d) hwr_training_navi_pane_g2_ParamLimits

0x8f05,	// (0x0003bd0d) hwr_training_navi_pane_g2

0x8f17,	// (0x0003bd1f) hwr_training_navi_pane_g3_ParamLimits

0x8f17,	// (0x0003bd1f) hwr_training_navi_pane_g3

0x8f27,	// (0x0003bd2f) hwr_training_navi_pane_g4_ParamLimits

0x8f27,	// (0x0003bd2f) hwr_training_navi_pane_g4

0x0004,

0xf88e,	// (0x00042696) hwr_training_navi_pane_g_ParamLimits

0xf88e,	// (0x00042696) hwr_training_navi_pane_g

0x8f41,	// (0x0003bd49) hwr_training_navi_pane_t1

0x8f4f,	// (0x0003bd57) list_single_hwr_training_instruct_pane_ParamLimits

0x8f4f,	// (0x0003bd57) list_single_hwr_training_instruct_pane

0xf0a1,	// (0x00041ea9) list_single_hwr_training_instruct_pane_t1

0xe7d6,	// (0x000415de) bg_frame_shadow_pane_g1

0xf0b0,	// (0x00041eb8) bg_frame_shadow_pane_g2

0xf0b8,	// (0x00041ec0) bg_frame_shadow_pane_g3

0xf0c0,	// (0x00041ec8) bg_frame_shadow_pane_g4

0xf0c8,	// (0x00041ed0) bg_frame_shadow_pane_g5

0xf0d0,	// (0x00041ed8) bg_frame_shadow_pane_g6

0xf0d8,	// (0x00041ee0) bg_frame_shadow_pane_g7

0xc65b,	// (0x0003f463) bg_frame_shadow_pane_g8

0x0007,

0xf899,	// (0x000426a1) bg_frame_shadow_pane_g

0x45e9,	// (0x000373f1) main_video_tele_dialer_pane

0x8f6e,	// (0x0003bd76) aid_size_cell_video_keypad_ParamLimits

0x8f6e,	// (0x0003bd76) aid_size_cell_video_keypad

0x8f7e,	// (0x0003bd86) grid_video_dialer_keypad_pane_ParamLimits

0x8f7e,	// (0x0003bd86) grid_video_dialer_keypad_pane

0x8fb2,	// (0x0003bdba) video_down_pane_cp_ParamLimits

0x8fb2,	// (0x0003bdba) video_down_pane_cp

0x8fdc,	// (0x0003bde4) cell_video_dialer_keypad_pane_ParamLimits

0x8fdc,	// (0x0003bde4) cell_video_dialer_keypad_pane

0xf0e0,	// (0x00041ee8) bg_button_pane_cp08_ParamLimits

0xf0e0,	// (0x00041ee8) bg_button_pane_cp08

0x8ff3,	// (0x0003bdfb) cell_video_dialer_keypad_pane_g1_ParamLimits

0x8ff3,	// (0x0003bdfb) cell_video_dialer_keypad_pane_g1

0x87ef,	// (0x0003b5f7) mup3_rocker2_pane_ParamLimits

0x87ef,	// (0x0003b5f7) mup3_rocker2_pane

0xe896,	// (0x0004169e) mup3_rocker2_pane_g1

0x7745,	// (0x0003a54d) main_dialer2_pane

0x45e9,	// (0x000373f1) main_mp4_pane

0x9036,	// (0x0003be3e) main_mp4_pane_g1_ParamLimits

0x9036,	// (0x0003be3e) main_mp4_pane_g1

0x9044,	// (0x0003be4c) main_mp4_pane_g2_ParamLimits

0x9044,	// (0x0003be4c) main_mp4_pane_g2

0x9052,	// (0x0003be5a) main_mp4_pane_g3_ParamLimits

0x9052,	// (0x0003be5a) main_mp4_pane_g3

0x90a5,	// (0x0003bead) main_mp4_pane_g4_ParamLimits

0x90a5,	// (0x0003bead) main_mp4_pane_g4

0x90bf,	// (0x0003bec7) main_mp4_pane_g5_ParamLimits

0x90bf,	// (0x0003bec7) main_mp4_pane_g5

0x0005,

0xf8b9,	// (0x000426c1) main_mp4_pane_g_ParamLimits

0xf8b9,	// (0x000426c1) main_mp4_pane_g

0x90f3,	// (0x0003befb) main_mp4_pane_t1_ParamLimits

0x90f3,	// (0x0003befb) main_mp4_pane_t1

0x914f,	// (0x0003bf57) main_mp4_pane_t2_ParamLimits

0x914f,	// (0x0003bf57) main_mp4_pane_t2

0x0091,	// (0x00032e99) main_mp4_pane_t3_ParamLimits

0x0091,	// (0x00032e99) main_mp4_pane_t3

0x91a1,	// (0x0003bfa9) main_mp4_pane_t4_ParamLimits

0x91a1,	// (0x0003bfa9) main_mp4_pane_t4

0x0003,

0xf8c6,	// (0x000426ce) main_mp4_pane_t_ParamLimits

0xf8c6,	// (0x000426ce) main_mp4_pane_t

0x91e1,	// (0x0003bfe9) mp4_progress_pane_ParamLimits

0x91e1,	// (0x0003bfe9) mp4_progress_pane

0x922b,	// (0x0003c033) mp4_rocker_pane_ParamLimits

0x922b,	// (0x0003c033) mp4_rocker_pane

0x0165,	// (0x00032f6d) mp4_progress_pane_t1

0x017e,	// (0x00032f86) mp4_progress_pane_t2

0x0001,

0xf8cf,	// (0x000426d7) mp4_progress_pane_t

0x0197,	// (0x00032f9f) mup_progress_pane_cp04

0xe896,	// (0x0004169e) mp4_rocker_pane_g1

0x924d,	// (0x0003c055) aid_cell_size_keypad2_ParamLimits

0x924d,	// (0x0003c055) aid_cell_size_keypad2

0x925d,	// (0x0003c065) dialer2_ne_pane_ParamLimits

0x925d,	// (0x0003c065) dialer2_ne_pane

0x9269,	// (0x0003c071) grid_dialer2_keypad_pane_ParamLimits

0x9269,	// (0x0003c071) grid_dialer2_keypad_pane

0x0cd4,	// (0x00033adc) bg_popup_call_pane_cp07_ParamLimits

0x0cd4,	// (0x00033adc) bg_popup_call_pane_cp07

0x9277,	// (0x0003c07f) dialer2_ne_pane_t1_ParamLimits

0x9277,	// (0x0003c07f) dialer2_ne_pane_t1

0x929c,	// (0x0003c0a4) cell_dialer2_keypad_pane_ParamLimits

0x929c,	// (0x0003c0a4) cell_dialer2_keypad_pane

0x01bf,	// (0x00032fc7) bg_button_pane_pane_cp04_ParamLimits

0x01bf,	// (0x00032fc7) bg_button_pane_pane_cp04

0x92b3,	// (0x0003c0bb) cell_dialer2_keypad_pane_g1_ParamLimits

0x92b3,	// (0x0003c0bb) cell_dialer2_keypad_pane_g1

0x56fd,	// (0x00038505) aid_placing_vt_set_content_ParamLimits

0x56fd,	// (0x00038505) aid_placing_vt_set_content

0x5725,	// (0x0003852d) aid_placing_vt_set_title_ParamLimits

0x5725,	// (0x0003852d) aid_placing_vt_set_title

0x45e9,	// (0x000373f1) main_image3_pane

0x934d,	// (0x0003c155) area_side_right_pane_cp01_ParamLimits

0x934d,	// (0x0003c155) area_side_right_pane_cp01

0x12c2,	// (0x000340ca) main_image3_pane_g1_ParamLimits

0x12c2,	// (0x000340ca) main_image3_pane_g1

0x937c,	// (0x0003c184) main_image3_pane_g2_ParamLimits

0x937c,	// (0x0003c184) main_image3_pane_g2

0x9395,	// (0x0003c19d) main_image3_pane_g3_ParamLimits

0x9395,	// (0x0003c19d) main_image3_pane_g3

0x93ae,	// (0x0003c1b6) main_image3_pane_g4_ParamLimits

0x93ae,	// (0x0003c1b6) main_image3_pane_g4

0x0003,

0xf8de,	// (0x000426e6) main_image3_pane_g_ParamLimits

0xf8de,	// (0x000426e6) main_image3_pane_g

0x93c7,	// (0x0003c1cf) main_image3_pane_t1_ParamLimits

0x93c7,	// (0x0003c1cf) main_image3_pane_t1

0x93ec,	// (0x0003c1f4) main_image3_pane_t2_ParamLimits

0x93ec,	// (0x0003c1f4) main_image3_pane_t2

0x940b,	// (0x0003c213) main_image3_pane_t3_ParamLimits

0x940b,	// (0x0003c213) main_image3_pane_t3

0x0003,

0xf8e7,	// (0x000426ef) main_image3_pane_t_ParamLimits

0xf8e7,	// (0x000426ef) main_image3_pane_t

0x48a1,	// (0x000376a9) grid_sctrl_middle_pane_cp01_ParamLimits

0x48a1,	// (0x000376a9) grid_sctrl_middle_pane_cp01

0x946c,	// (0x0003c274) cell_sctrl_middle_pane_cp01_ParamLimits

0x946c,	// (0x0003c274) cell_sctrl_middle_pane_cp01

0x947d,	// (0x0003c285) cell_sctrl_middle_pane_cp01_g1_ParamLimits

0x947d,	// (0x0003c285) cell_sctrl_middle_pane_cp01_g1

0x45e9,	// (0x000373f1) main_call4_pane

0x948a,	// (0x0003c292) aid_size_button_call4_ParamLimits

0x948a,	// (0x0003c292) aid_size_button_call4

0x94bc,	// (0x0003c2c4) call4_windows_pane_ParamLimits

0x94bc,	// (0x0003c2c4) call4_windows_pane

0x94d8,	// (0x0003c2e0) grid_call4_button_pane_ParamLimits

0x94d8,	// (0x0003c2e0) grid_call4_button_pane

0x01ff,	// (0x00033007) call4_windows_conf_pane

0x021a,	// (0x00033022) popup_call4_audio_first_window_ParamLimits

0x021a,	// (0x00033022) popup_call4_audio_first_window

0x0268,	// (0x00033070) popup_call4_audio_second_window_ParamLimits

0x0268,	// (0x00033070) popup_call4_audio_second_window

0x027e,	// (0x00033086) popup_call4_audio_wait_window_ParamLimits

0x027e,	// (0x00033086) popup_call4_audio_wait_window

0x94fc,	// (0x0003c304) cell_call4_button_pane_ParamLimits

0x94fc,	// (0x0003c304) cell_call4_button_pane

0x951f,	// (0x0003c327) bg_button_pane_cp09_ParamLimits

0x951f,	// (0x0003c327) bg_button_pane_cp09

0x952b,	// (0x0003c333) cell_call4_button_pane_g1_ParamLimits

0x952b,	// (0x0003c333) cell_call4_button_pane_g1

0x9538,	// (0x0003c340) cell_call4_button_pane_t1_ParamLimits

0x9538,	// (0x0003c340) cell_call4_button_pane_t1

0x02c6,	// (0x000330ce) popup_call4_audio_conf_window_ParamLimits

0x02c6,	// (0x000330ce) popup_call4_audio_conf_window

0x8824,	// (0x0003b62c) mup3_progress_pane_t1_ParamLimits

0x883b,	// (0x0003b643) mup3_progress_pane_t2_ParamLimits

0xeb41,	// (0x00041949) mup3_progress_pane_t3_ParamLimits

0xf7c0,	// (0x000425c8) mup3_progress_pane_t_ParamLimits

0xeb58,	// (0x00041960) mup_progress_pane_cp03_ParamLimits

0x8d40,	// (0x0003bb48) mup3_control_keys_pane_g4_copy1

0x920f,	// (0x0003c017) mp4_rocker2_pane_ParamLimits

0x920f,	// (0x0003c017) mp4_rocker2_pane

0x02e8,	// (0x000330f0) mp4_rocker2_pane_g1

0x02e0,	// (0x000330e8) mp4_rocker2_pane_g2

0x954a,	// (0x0003c352) mp4_rocker2_pane_g3

0x9552,	// (0x0003c35a) mp4_rocker2_pane_g4

0x955a,	// (0x0003c362) mp4_rocker2_pane_g5

0x0004,

0xf8f0,	// (0x000426f8) mp4_rocker2_pane_g

0x45e9,	// (0x000373f1) main_camera4_pane

0x45e9,	// (0x000373f1) main_video4_pane

0x8f8e,	// (0x0003bd96) main_video_tele_dialer_pane_t1_ParamLimits

0x8f8e,	// (0x0003bd96) main_video_tele_dialer_pane_t1

0x8fa0,	// (0x0003bda8) main_video_tele_dialer_pane_t2_ParamLimits

0x8fa0,	// (0x0003bda8) main_video_tele_dialer_pane_t2

0x0001,

0xf8aa,	// (0x000426b2) main_video_tele_dialer_pane_t_ParamLimits

0xf8aa,	// (0x000426b2) main_video_tele_dialer_pane_t

0x957a,	// (0x0003c382) cam4_autofocus_pane_ParamLimits

0x957a,	// (0x0003c382) cam4_autofocus_pane

0x9592,	// (0x0003c39a) cam4_image_uncrop_pane_ParamLimits

0x9592,	// (0x0003c39a) cam4_image_uncrop_pane

0x95ab,	// (0x0003c3b3) cam4_indicators_pane_ParamLimits

0x95ab,	// (0x0003c3b3) cam4_indicators_pane

0x95c7,	// (0x0003c3cf) main_camera4_pane_g1_ParamLimits

0x95c7,	// (0x0003c3cf) main_camera4_pane_g1

0x95d3,	// (0x0003c3db) main_camera4_pane_g2_ParamLimits

0x95d3,	// (0x0003c3db) main_camera4_pane_g2

0x95d3,	// (0x0003c3db) main_camera4_pane_g3_ParamLimits

0x95d3,	// (0x0003c3db) main_camera4_pane_g3

0x95df,	// (0x0003c3e7) main_camera4_pane_g4_ParamLimits

0x95df,	// (0x0003c3e7) main_camera4_pane_g4

0x95eb,	// (0x0003c3f3) main_camera4_pane_g5_ParamLimits

0x95eb,	// (0x0003c3f3) main_camera4_pane_g5

0x0005,

0xf8fb,	// (0x00042703) main_camera4_pane_g_ParamLimits

0xf8fb,	// (0x00042703) main_camera4_pane_g

0x9605,	// (0x0003c40d) main_camera4_pane_t1_ParamLimits

0x9605,	// (0x0003c40d) main_camera4_pane_t1

0xeac6,	// (0x000418ce) bg_tb_trans_pane_cp06

0x9657,	// (0x0003c45f) cam4_indicators_pane_g1

0x9664,	// (0x0003c46c) cam4_indicators_pane_g2

0x0002,

0xf916,	// (0x0004271e) cam4_indicators_pane_g

0x9684,	// (0x0003c48c) cam4_indicators_pane_t1

0x96ae,	// (0x0003c4b6) main_video4_pane_g1_ParamLimits

0x96ae,	// (0x0003c4b6) main_video4_pane_g1

0x96ba,	// (0x0003c4c2) main_video4_pane_g2_ParamLimits

0x96ba,	// (0x0003c4c2) main_video4_pane_g2

0x96c6,	// (0x0003c4ce) main_video4_pane_g3_ParamLimits

0x96c6,	// (0x0003c4ce) main_video4_pane_g3

0x96d2,	// (0x0003c4da) main_video4_pane_g4_ParamLimits

0x96d2,	// (0x0003c4da) main_video4_pane_g4

0x0004,

0xf91d,	// (0x00042725) main_video4_pane_g_ParamLimits

0xf91d,	// (0x00042725) main_video4_pane_g

0x96f4,	// (0x0003c4fc) vid4_indicators_pane_ParamLimits

0x96f4,	// (0x0003c4fc) vid4_indicators_pane

0x9712,	// (0x0003c51a) video4_image_uncrop_cif_pane_ParamLimits

0x9712,	// (0x0003c51a) video4_image_uncrop_cif_pane

0x9721,	// (0x0003c529) video4_image_uncrop_nhd_pane_ParamLimits

0x9721,	// (0x0003c529) video4_image_uncrop_nhd_pane

0x9592,	// (0x0003c39a) video4_image_uncrop_vga_pane_ParamLimits

0x9592,	// (0x0003c39a) video4_image_uncrop_vga_pane

0x7737,	// (0x0003a53f) bg_tb_trans_pane_cp07

0x9657,	// (0x0003c45f) vid4_indicators_pane_g1

0x973a,	// (0x0003c542) vid4_indicators_pane_g2

0x9747,	// (0x0003c54f) vid4_indicators_pane_g3

0x0004,

0xf928,	// (0x00042730) vid4_indicators_pane_g

0x9774,	// (0x0003c57c) vid4_indicators_pane_t1

0x978e,	// (0x0003c596) cam4_autofocus_pane_g1

0x9796,	// (0x0003c59e) cam4_autofocus_pane_g2

0x979e,	// (0x0003c5a6) cam4_autofocus_pane_g3

0x0002,

0xf933,	// (0x0004273b) cam4_autofocus_pane_g

0x97a6,	// (0x0003c5ae) cam4_autofocus_pane_g3_copy1

0x8fc0,	// (0x0003bdc8) video_down_pane_cp_t1

0x8fce,	// (0x0003bdd6) video_down_pane_cp_t2

0x0001,

0xf8af,	// (0x000426b7) video_down_pane_cp_t

0x48a1,	// (0x000376a9) popup_vitu2_window_ParamLimits

0x48a1,	// (0x000376a9) popup_vitu2_window

0x97ae,	// (0x0003c5b6) aid_size_cell2_itu2_ParamLimits

0x97ae,	// (0x0003c5b6) aid_size_cell2_itu2

0x97d0,	// (0x0003c5d8) aid_size_cell_itu2_ParamLimits

0x97d0,	// (0x0003c5d8) aid_size_cell_itu2

0x0cd4,	// (0x00033adc) bg_popup_window_pane_cp09_ParamLimits

0x0cd4,	// (0x00033adc) bg_popup_window_pane_cp09

0x9814,	// (0x0003c61c) field_vitu2_entry_pane_ParamLimits

0x9814,	// (0x0003c61c) field_vitu2_entry_pane

0x9834,	// (0x0003c63c) grid_vitu2_function_pane_ParamLimits

0x9834,	// (0x0003c63c) grid_vitu2_function_pane

0x9878,	// (0x0003c680) grid_vitu2_itu_pane_ParamLimits

0x9878,	// (0x0003c680) grid_vitu2_itu_pane

0x98ec,	// (0x0003c6f4) cell_vitu2_itu_pane_ParamLimits

0x98ec,	// (0x0003c6f4) cell_vitu2_itu_pane

0x9903,	// (0x0003c70b) cell_vitu2_function_pane_ParamLimits

0x9903,	// (0x0003c70b) cell_vitu2_function_pane

0x03b9,	// (0x000331c1) bg_popup_call_pane_cp08_ParamLimits

0x03b9,	// (0x000331c1) bg_popup_call_pane_cp08

0x03d2,	// (0x000331da) field_vitu2_entry_pane_g1

0x03de,	// (0x000331e6) field_vitu2_entry_pane_g2

0x0002,

0xf93a,	// (0x00042742) field_vitu2_entry_pane_g

0x3769,	// (0x00036571) field_vitu2_entry_pane_t1_ParamLimits

0x3769,	// (0x00036571) field_vitu2_entry_pane_t1

0x3786,	// (0x0003658e) field_vitu2_entry_pane_t2_ParamLimits

0x3786,	// (0x0003658e) field_vitu2_entry_pane_t2

0x0001,

0xf941,	// (0x00042749) field_vitu2_entry_pane_t_ParamLimits

0xf941,	// (0x00042749) field_vitu2_entry_pane_t

0x9947,	// (0x0003c74f) bg_button_pane_cp010_ParamLimits

0x9947,	// (0x0003c74f) bg_button_pane_cp010

0x9955,	// (0x0003c75d) cell_vitu2_itu_pane_g1

0x9973,	// (0x0003c77b) cell_vitu2_itu_pane_t1_ParamLimits

0x9973,	// (0x0003c77b) cell_vitu2_itu_pane_t1

0x37a3,	// (0x000365ab) cell_vitu2_itu_pane_t2_ParamLimits

0x37a3,	// (0x000365ab) cell_vitu2_itu_pane_t2

0x0002,

0xf94b,	// (0x00042753) cell_vitu2_itu_pane_t_ParamLimits

0xf94b,	// (0x00042753) cell_vitu2_itu_pane_t

0x7737,	// (0x0003a53f) bg_button_pane_cp011

0x99c5,	// (0x0003c7cd) cell_vitu2_function_pane_g1

0x45e9,	// (0x000373f1) main_myfav_hc_pane

0x944d,	// (0x0003c255) popup_image3_note_pane_ParamLimits

0x944d,	// (0x0003c255) popup_image3_note_pane

0x945b,	// (0x0003c263) popup_image3_tool_bar_pane_ParamLimits

0x945b,	// (0x0003c263) popup_image3_tool_bar_pane

0x3811,	// (0x00036619) cell_vitu2_itu_pane_t3_ParamLimits

0x3811,	// (0x00036619) cell_vitu2_itu_pane_t3

0x45e9,	// (0x000373f1) bg_popup_trans_pane

0x042b,	// (0x00033233) grid_image3_tool_bar_pane

0x0435,	// (0x0003323d) bg_popup_trans_pane_g1

0xc99a,	// (0x0003f7a2) bg_popup_trans_pane_g2

0x043d,	// (0x00033245) bg_popup_trans_pane_g3

0x0445,	// (0x0003324d) bg_popup_trans_pane_g4

0x044d,	// (0x00033255) bg_popup_trans_pane_g5

0x0455,	// (0x0003325d) bg_popup_trans_pane_g6

0x045d,	// (0x00033265) bg_popup_trans_pane_g7

0x0465,	// (0x0003326d) bg_popup_trans_pane_g8

0xc97a,	// (0x0003f782) bg_popup_trans_pane_g9

0x0008,

0xf952,	// (0x0004275a) bg_popup_trans_pane_g

0x046d,	// (0x00033275) cell_image3_tool_bar_pane_ParamLimits

0x046d,	// (0x00033275) cell_image3_tool_bar_pane

0xe896,	// (0x0004169e) cell_image3_tool_bar_pane_g1

0x45e9,	// (0x000373f1) bg_popup_trans_pane_cp1

0x0483,	// (0x0003328b) popup_image3_note_pane_t1

0x0491,	// (0x00033299) popup_image3_note_pane_t2

0x049f,	// (0x000332a7) popup_image3_note_pane_t3

0x0002,

0xf965,	// (0x0004276d) popup_image3_note_pane_t

0x04af,	// (0x000332b7) popup_image3_note_pane_t3_copy1

0x99d9,	// (0x0003c7e1) bg_myfav_hc_instruction_pane_ParamLimits

0x99d9,	// (0x0003c7e1) bg_myfav_hc_instruction_pane

0x99f1,	// (0x0003c7f9) cell_myfav_contact_pane_ParamLimits

0x99f1,	// (0x0003c7f9) cell_myfav_contact_pane

0x9a0b,	// (0x0003c813) cell_myfav_contact_pane_cp1_ParamLimits

0x9a0b,	// (0x0003c813) cell_myfav_contact_pane_cp1

0x9a23,	// (0x0003c82b) cell_myfav_contact_pane_cp2_ParamLimits

0x9a23,	// (0x0003c82b) cell_myfav_contact_pane_cp2

0x9a3b,	// (0x0003c843) cell_myfav_contact_pane_cp3_ParamLimits

0x9a3b,	// (0x0003c843) cell_myfav_contact_pane_cp3

0x9a52,	// (0x0003c85a) cell_myfav_contact_pane_cp4_ParamLimits

0x9a52,	// (0x0003c85a) cell_myfav_contact_pane_cp4

0x9a68,	// (0x0003c870) cell_myfav_contact_pane_cp5_ParamLimits

0x9a68,	// (0x0003c870) cell_myfav_contact_pane_cp5

0x9a7c,	// (0x0003c884) cell_myfav_contact_pane_cp6_ParamLimits

0x9a7c,	// (0x0003c884) cell_myfav_contact_pane_cp6

0x9a90,	// (0x0003c898) cell_myfav_contact_pane_cp7_ParamLimits

0x9a90,	// (0x0003c898) cell_myfav_contact_pane_cp7

0x04bd,	// (0x000332c5) listscroll_gen_pane_cp05

0x9aa8,	// (0x0003c8b0) main_myfav_hc_pane_g1_ParamLimits

0x9aa8,	// (0x0003c8b0) main_myfav_hc_pane_g1

0x9ac2,	// (0x0003c8ca) main_myfav_hc_pane_g2_ParamLimits

0x9ac2,	// (0x0003c8ca) main_myfav_hc_pane_g2

0x0002,

0xf96c,	// (0x00042774) main_myfav_hc_pane_g_ParamLimits

0xf96c,	// (0x00042774) main_myfav_hc_pane_g

0x9af4,	// (0x0003c8fc) main_myfav_hc_pane_t1_ParamLimits

0x9af4,	// (0x0003c8fc) main_myfav_hc_pane_t1

0x04c6,	// (0x000332ce) main_myfav_hc_pane_t2_ParamLimits

0x04c6,	// (0x000332ce) main_myfav_hc_pane_t2

0x04d8,	// (0x000332e0) main_myfav_hc_pane_t3_ParamLimits

0x04d8,	// (0x000332e0) main_myfav_hc_pane_t3

0x9b0b,	// (0x0003c913) main_myfav_hc_pane_t4_ParamLimits

0x9b0b,	// (0x0003c913) main_myfav_hc_pane_t4

0x0004,

0xf973,	// (0x0004277b) main_myfav_hc_pane_t_ParamLimits

0xf973,	// (0x0004277b) main_myfav_hc_pane_t

0xe896,	// (0x0004169e) bg_myfav_hc_instruction_pane_g1

0x04ea,	// (0x000332f2) cell_myfav_contact_pane_g1_ParamLimits

0x04ea,	// (0x000332f2) cell_myfav_contact_pane_g1

0x04ea,	// (0x000332f2) cell_myfav_contact_pane_g2_ParamLimits

0x04ea,	// (0x000332f2) cell_myfav_contact_pane_g2

0x04f6,	// (0x000332fe) cell_myfav_contact_pane_g3_ParamLimits

0x04f6,	// (0x000332fe) cell_myfav_contact_pane_g3

0xeb2b,	// (0x00041933) cell_myfav_contact_pane_g4_ParamLimits

0xeb2b,	// (0x00041933) cell_myfav_contact_pane_g4

0x0503,	// (0x0003330b) cell_myfav_contact_pane_g5_ParamLimits

0x0503,	// (0x0003330b) cell_myfav_contact_pane_g5

0x0004,

0xf97e,	// (0x00042786) cell_myfav_contact_pane_g_ParamLimits

0xf97e,	// (0x00042786) cell_myfav_contact_pane_g

0x9adc,	// (0x0003c8e4) main_myfav_hc_pane_g3_ParamLimits

0x9adc,	// (0x0003c8e4) main_myfav_hc_pane_g3

0x47b2,	// (0x000375ba) popup_adpt_find_window

0x9b35,	// (0x0003c93d) afind_page_pane_ParamLimits

0x9b35,	// (0x0003c93d) afind_page_pane

0x9b42,	// (0x0003c94a) aid_size_cell_afind_ParamLimits

0x9b42,	// (0x0003c94a) aid_size_cell_afind

0x9b5c,	// (0x0003c964) bg_popup_sub_pane_cp09_ParamLimits

0x9b5c,	// (0x0003c964) bg_popup_sub_pane_cp09

0x9b69,	// (0x0003c971) find_pane_cp01_ParamLimits

0x9b69,	// (0x0003c971) find_pane_cp01

0x050f,	// (0x00033317) grid_afind_control_pane_ParamLimits

0x050f,	// (0x00033317) grid_afind_control_pane

0x9b76,	// (0x0003c97e) grid_afind_pane_ParamLimits

0x9b76,	// (0x0003c97e) grid_afind_pane

0x9b92,	// (0x0003c99a) cell_afind_pane_ParamLimits

0x9b92,	// (0x0003c99a) cell_afind_pane

0xe896,	// (0x0004169e) afind_page_pane_g1

0x9bde,	// (0x0003c9e6) afind_page_pane_g2

0x9be7,	// (0x0003c9ef) afind_page_pane_g3

0x0002,

0xf989,	// (0x00042791) afind_page_pane_g

0x9bf0,	// (0x0003c9f8) afind_page_pane_t1

0x0523,	// (0x0003332b) cell_afind_grid_control_pane_ParamLimits

0x0523,	// (0x0003332b) cell_afind_grid_control_pane

0x01bf,	// (0x00032fc7) bg_button_pane_cp69_ParamLimits

0x01bf,	// (0x00032fc7) bg_button_pane_cp69

0x9c10,	// (0x0003ca18) cell_afind_pane_g1_ParamLimits

0x9c10,	// (0x0003ca18) cell_afind_pane_g1

0x9c1d,	// (0x0003ca25) cell_afind_pane_t1_ParamLimits

0x9c1d,	// (0x0003ca25) cell_afind_pane_t1

0xc791,	// (0x0003f599) bg_button_pane_cp72

0x0532,	// (0x0003333a) cell_afind_grid_control_pane_g1

0x72af,	// (0x0003a0b7) aid_image_placing_area_ParamLimits

0x72af,	// (0x0003a0b7) aid_image_placing_area

0xee30,	// (0x00041c38) field_vitu_entry_pane_g1_ParamLimits

0xee30,	// (0x00041c38) field_vitu_entry_pane_g1

0xee3c,	// (0x00041c44) field_vitu_entry_pane_g2_ParamLimits

0xee3c,	// (0x00041c44) field_vitu_entry_pane_g2

0x0001,

0xf83a,	// (0x00042642) field_vitu_entry_pane_g_ParamLimits

0xf83a,	// (0x00042642) field_vitu_entry_pane_g

0x8dca,	// (0x0003bbd2) cell_vitu_itu_pane_g1_ParamLimits

0x8e0c,	// (0x0003bc14) cell_vitu_itu_pane_t3_ParamLimits

0x8e0c,	// (0x0003bc14) cell_vitu_itu_pane_t3

0x0165,	// (0x00032f6d) mp4_progress_pane_t1_ParamLimits

0x017e,	// (0x00032f86) mp4_progress_pane_t2_ParamLimits

0xf8cf,	// (0x000426d7) mp4_progress_pane_t_ParamLimits

0x0197,	// (0x00032f9f) mup_progress_pane_cp04_ParamLimits

0x9b1f,	// (0x0003c927) main_myfav_hc_pane_t5_ParamLimits

0x9b1f,	// (0x0003c927) main_myfav_hc_pane_t5

0x463b,	// (0x00037443) aid_zoom_text_primary

0x47b2,	// (0x000375ba) popup_adpt_find_window_ParamLimits

0x7737,	// (0x0003a53f) main_cam_set_pane

0x95b9,	// (0x0003c3c1) cam4_zoom_pane_ParamLimits

0x95b9,	// (0x0003c3c1) cam4_zoom_pane

0x9c2f,	// (0x0003ca37) main_cam_set_pane_g1_ParamLimits

0x9c2f,	// (0x0003ca37) main_cam_set_pane_g1

0x9c3d,	// (0x0003ca45) main_cam_set_pane_g2_ParamLimits

0x9c3d,	// (0x0003ca45) main_cam_set_pane_g2

0x0001,

0xf990,	// (0x00042798) main_cam_set_pane_g_ParamLimits

0xf990,	// (0x00042798) main_cam_set_pane_g

0x9c49,	// (0x0003ca51) main_cam_set_pane_t1_ParamLimits

0x9c49,	// (0x0003ca51) main_cam_set_pane_t1

0x9c65,	// (0x0003ca6d) main_cset_listscroll_pane_ParamLimits

0x9c65,	// (0x0003ca6d) main_cset_listscroll_pane

0x9c94,	// (0x0003ca9c) main_cset_slider_pane_ParamLimits

0x9c94,	// (0x0003ca9c) main_cset_slider_pane

0x0543,	// (0x0003334b) main_cset_list_pane_ParamLimits

0x0543,	// (0x0003334b) main_cset_list_pane

0x0553,	// (0x0003335b) scroll_pane_cp028

0x9cb5,	// (0x0003cabd) aid_area_touch_slider

0x9cd1,	// (0x0003cad9) cset_slider_pane

0x9cfb,	// (0x0003cb03) main_cset_slider_pane_g1

0x9d10,	// (0x0003cb18) main_cset_slider_pane_g2

0x0011,

0xf995,	// (0x0004279d) main_cset_slider_pane_g

0x058c,	// (0x00033394) main_cset_slider_pane_t1

0x9dcc,	// (0x0003cbd4) main_cset_slider_pane_t2

0x9de6,	// (0x0003cbee) main_cset_slider_pane_t3

0x9e00,	// (0x0003cc08) main_cset_slider_pane_t4

0x9e1a,	// (0x0003cc22) main_cset_slider_pane_t5

0x9e36,	// (0x0003cc3e) main_cset_slider_pane_t6

0x9e4b,	// (0x0003cc53) main_cset_slider_pane_t7

0x000e,

0xf9ba,	// (0x000427c2) main_cset_slider_pane_t

0x9f4f,	// (0x0003cd57) cset_list_set_pane_ParamLimits

0x9f4f,	// (0x0003cd57) cset_list_set_pane

0x9f60,	// (0x0003cd68) aid_position_infowindow_above

0x9f68,	// (0x0003cd70) aid_position_infowindow_below

0x385e,	// (0x00036666) cset_list_set_pane_g1_ParamLimits

0x385e,	// (0x00036666) cset_list_set_pane_g1

0x386a,	// (0x00036672) cset_list_set_pane_g3_ParamLimits

0x386a,	// (0x00036672) cset_list_set_pane_g3

0x0001,

0xf9d9,	// (0x000427e1) cset_list_set_pane_g_ParamLimits

0xf9d9,	// (0x000427e1) cset_list_set_pane_g

0x3879,	// (0x00036681) cset_list_set_pane_t1_ParamLimits

0x3879,	// (0x00036681) cset_list_set_pane_t1

0x7737,	// (0x0003a53f) list_highlight_pane_cp021_ParamLimits

0x7737,	// (0x0003a53f) list_highlight_pane_cp021

0xd11c,	// (0x0003ff24) cset_slider_pane_g1

0xd12e,	// (0x0003ff36) cset_slider_pane_g2

0xd125,	// (0x0003ff2d) cset_slider_pane_g3

0x0002,

0xf9de,	// (0x000427e6) cset_slider_pane_g

0x9f70,	// (0x0003cd78) aid_area_touch_cam4_zoom

0x9f78,	// (0x0003cd80) cam4_zoom_cont_pane

0x9f80,	// (0x0003cd88) cam4_zoom_pane_g1

0x9f88,	// (0x0003cd90) cam4_zoom_pane_g2

0x9f90,	// (0x0003cd98) cam4_zoom_pane_g3

0x0002,

0xf9e5,	// (0x000427ed) cam4_zoom_pane_g

0x104b,	// (0x00033e53) cam4_zoom_cont_pane_g1

0x1054,	// (0x00033e5c) cam4_zoom_cont_pane_g2

0x105d,	// (0x00033e65) cam4_zoom_cont_pane_g3

0x0002,

0xf9ec,	// (0x000427f4) cam4_zoom_cont_pane_g

0x94a4,	// (0x0003c2ac) call4_image_pane_ParamLimits

0x94a4,	// (0x0003c2ac) call4_image_pane

0x01ff,	// (0x00033007) call4_windows_conf_pane_ParamLimits

0x0246,	// (0x0003304e) popup_call4_audio_in_window_ParamLimits

0x0246,	// (0x0003304e) popup_call4_audio_in_window

0x45e9,	// (0x000373f1) bg_popup_call2_act_pane_cp02

0x02be,	// (0x000330c6) call4_list_conf_pane

0xe896,	// (0x0004169e) call4_image_pane_g1

0xe896,	// (0x0004169e) call4_image_pane_g2

0x0001,

0xf700,	// (0x00042508) call4_image_pane_g

0x0673,	// (0x0003347b) list_single_graphic_popup_conf4_pane_ParamLimits

0x0673,	// (0x0003347b) list_single_graphic_popup_conf4_pane

0x45e9,	// (0x000373f1) list_highlight_pane_cp022

0x0688,	// (0x00033490) list_single_graphic_popup_conf4_pane_g1

0xce16,	// (0x0003fc1e) list_single_graphic_popup_conf4_pane_g2

0x0001,

0xf9f3,	// (0x000427fb) list_single_graphic_popup_conf4_pane_g

0x0690,	// (0x00033498) list_single_graphic_popup_conf4_pane_t1

0x587f,	// (0x00038687) popup_vtel_slider_window_ParamLimits

0x587f,	// (0x00038687) popup_vtel_slider_window

0x01ad,	// (0x00032fb5) dialer2_ne_pane_t2_ParamLimits

0x01ad,	// (0x00032fb5) dialer2_ne_pane_t2

0x0001,

0xf8d4,	// (0x000426dc) dialer2_ne_pane_t_ParamLimits

0xf8d4,	// (0x000426dc) dialer2_ne_pane_t

0x7737,	// (0x0003a53f) bg_popup_sub_pane_cp010_ParamLimits

0x7737,	// (0x0003a53f) bg_popup_sub_pane_cp010

0x9f98,	// (0x0003cda0) popup_vtel_slider_window_g1_ParamLimits

0x9f98,	// (0x0003cda0) popup_vtel_slider_window_g1

0x9fa4,	// (0x0003cdac) popup_vtel_slider_window_g2_ParamLimits

0x9fa4,	// (0x0003cdac) popup_vtel_slider_window_g2

0x0003,

0xf9f8,	// (0x00042800) popup_vtel_slider_window_g_ParamLimits

0xf9f8,	// (0x00042800) popup_vtel_slider_window_g

0x9fec,	// (0x0003cdf4) vtel_slider_pane_ParamLimits

0x9fec,	// (0x0003cdf4) vtel_slider_pane

0x9ffb,	// (0x0003ce03) vtel_slider_pane_g1_ParamLimits

0x9ffb,	// (0x0003ce03) vtel_slider_pane_g1

0xa008,	// (0x0003ce10) vtel_slider_pane_g2_ParamLimits

0xa008,	// (0x0003ce10) vtel_slider_pane_g2

0xa015,	// (0x0003ce1d) vtel_slider_pane_g3_ParamLimits

0xa015,	// (0x0003ce1d) vtel_slider_pane_g3

0x9ffb,	// (0x0003ce03) vtel_slider_pane_g4_ParamLimits

0x9ffb,	// (0x0003ce03) vtel_slider_pane_g4

0xa022,	// (0x0003ce2a) vtel_slider_pane_g5_ParamLimits

0xa022,	// (0x0003ce2a) vtel_slider_pane_g5

0x0004,

0xfa01,	// (0x00042809) vtel_slider_pane_g_ParamLimits

0xfa01,	// (0x00042809) vtel_slider_pane_g

0x45e9,	// (0x000373f1) main_gallery2_pane

0x97f6,	// (0x0003c5fe) aid_size_row_itut2_dropdow_list_ParamLimits

0x97f6,	// (0x0003c5fe) aid_size_row_itut2_dropdow_list

0x9856,	// (0x0003c65e) grid_vitu2_function_top_pane_ParamLimits

0x9856,	// (0x0003c65e) grid_vitu2_function_top_pane

0x98a8,	// (0x0003c6b0) popup_vitu2_dropdown_list_window_ParamLimits

0x98a8,	// (0x0003c6b0) popup_vitu2_dropdown_list_window

0x98c8,	// (0x0003c6d0) popup_vitu2_match_list_window

0xa02f,	// (0x0003ce37) cell_vitu2_function_top_pane_ParamLimits

0xa02f,	// (0x0003ce37) cell_vitu2_function_top_pane

0xa04f,	// (0x0003ce57) cell_vitu2_function_top_pane_cp01_ParamLimits

0xa04f,	// (0x0003ce57) cell_vitu2_function_top_pane_cp01

0xa06d,	// (0x0003ce75) cell_vitu2_function_top_wide_pane_ParamLimits

0xa06d,	// (0x0003ce75) cell_vitu2_function_top_wide_pane

0x7737,	// (0x0003a53f) bg_button_pane_cp012

0xa08b,	// (0x0003ce93) cell_vitu2_function_top_pane_g1

0xa09a,	// (0x0003cea2) bg_button_pane_cp013_ParamLimits

0xa09a,	// (0x0003cea2) bg_button_pane_cp013

0xa0b6,	// (0x0003cebe) cell_vitu2_function_top_wide_pane_g1_ParamLimits

0xa0b6,	// (0x0003cebe) cell_vitu2_function_top_wide_pane_g1

0x48a1,	// (0x000376a9) bg_popup_sub_pane_cp20

0xa0ce,	// (0x0003ced6) list_vitu2_match_list_pane

0x0435,	// (0x0003323d) bg_popup_sub_pane_cp20_g1

0x043d,	// (0x00033245) bg_popup_sub_pane_cp20_g2

0xc99a,	// (0x0003f7a2) bg_popup_sub_pane_cp20_g3

0x0445,	// (0x0003324d) bg_popup_sub_pane_cp20_g4

0xc97a,	// (0x0003f782) bg_popup_sub_pane_cp20_g5

0x06d0,	// (0x000334d8) bg_popup_sub_pane_cp20_g6

0x0455,	// (0x0003325d) bg_popup_sub_pane_cp20_g7

0x045d,	// (0x00033265) bg_popup_sub_pane_cp20_g8

0x0465,	// (0x0003326d) bg_popup_sub_pane_cp20_g9

0x0008,

0xfa0c,	// (0x00042814) bg_popup_sub_pane_cp20_g

0xa0e6,	// (0x0003ceee) list_vitu2_match_list_item_pane_ParamLimits

0xa0e6,	// (0x0003ceee) list_vitu2_match_list_item_pane

0xa0f8,	// (0x0003cf00) list_vitu2_match_list_item_pane_t1

0x45e9,	// (0x000373f1) bg_popup_sub_pane_cp21

0xcd3f,	// (0x0003fb47) grid_vitu2_dropdown_list_pane

0xa106,	// (0x0003cf0e) cell_vitu2_dropdown_list_char_pane_ParamLimits

0xa106,	// (0x0003cf0e) cell_vitu2_dropdown_list_char_pane

0xa12b,	// (0x0003cf33) cell_vitu2_dropdown_list_ctrl_pane_ParamLimits

0xa12b,	// (0x0003cf33) cell_vitu2_dropdown_list_ctrl_pane

0x072a,	// (0x00033532) cell_vitu2_dropdown_list_char_pane_g1

0x0721,	// (0x00033529) cell_vitu2_dropdown_list_char_pane_g2

0x0718,	// (0x00033520) cell_vitu2_dropdown_list_char_pane_g3

0x0002,

0xfa29,	// (0x00042831) cell_vitu2_dropdown_list_char_pane_g

0xa159,	// (0x0003cf61) cell_vitu2_dropdown_list_char_pane_t1

0xa167,	// (0x0003cf6f) cell_vitu2_dropdown_list_ctrl_pane_g1_ParamLimits

0xa167,	// (0x0003cf6f) cell_vitu2_dropdown_list_ctrl_pane_g1

0xa177,	// (0x0003cf7f) cell_vitu2_dropdown_list_ctrl_pane_g2_ParamLimits

0xa177,	// (0x0003cf7f) cell_vitu2_dropdown_list_ctrl_pane_g2

0xa188,	// (0x0003cf90) cell_vitu2_dropdown_list_ctrl_pane_g3_ParamLimits

0xa188,	// (0x0003cf90) cell_vitu2_dropdown_list_ctrl_pane_g3

0xa198,	// (0x0003cfa0) cell_vitu2_dropdown_list_ctrl_pane_g4_ParamLimits

0xa198,	// (0x0003cfa0) cell_vitu2_dropdown_list_ctrl_pane_g4

0xeac6,	// (0x000418ce) cell_vitu2_dropdown_list_ctrl_pane_g5_ParamLimits

0xeac6,	// (0x000418ce) cell_vitu2_dropdown_list_ctrl_pane_g5

0x0004,

0xfa30,	// (0x00042838) cell_vitu2_dropdown_list_ctrl_pane_g_ParamLimits

0xfa30,	// (0x00042838) cell_vitu2_dropdown_list_ctrl_pane_g

0xa1b1,	// (0x0003cfb9) aid_size_cell_gallery2_ParamLimits

0xa1b1,	// (0x0003cfb9) aid_size_cell_gallery2

0xa1bf,	// (0x0003cfc7) grid_gallery2_pane_ParamLimits

0xa1bf,	// (0x0003cfc7) grid_gallery2_pane

0xa1ce,	// (0x0003cfd6) scroll_pane_cp029_ParamLimits

0xa1ce,	// (0x0003cfd6) scroll_pane_cp029

0xa1da,	// (0x0003cfe2) cell_gallery2_pane_ParamLimits

0xa1da,	// (0x0003cfe2) cell_gallery2_pane

0x0733,	// (0x0003353b) cell_gallery2_pane_g2

0xa204,	// (0x0003d00c) cell_gallery2_pane_g3

0x073d,	// (0x00033545) cell_gallery2_pane_g4

0x0745,	// (0x0003354d) cell_gallery2_pane_g5

0xcfe4,	// (0x0003fdec) grid_highlight_pane_cp10

0x98c8,	// (0x0003c6d0) popup_vitu2_match_list_window_ParamLimits

0x98dc,	// (0x0003c6e4) popup_vitu2_query_window_ParamLimits

0x98dc,	// (0x0003c6e4) popup_vitu2_query_window

0x45e9,	// (0x000373f1) bg_vitu2_candi_button_pane

0x072a,	// (0x00033532) cell_vitu2_dropdown_list_char_pane_g1_copy1

0x0721,	// (0x00033529) cell_vitu2_dropdown_list_char_pane_g2_copy1

0x0718,	// (0x00033520) cell_vitu2_dropdown_list_char_pane_g2_copy2

0x38e0,	// (0x000366e8) bg_button_pane_cp015

0xa20c,	// (0x0003d014) bg_button_pane_cp016

0xa21f,	// (0x0003d027) bg_button_pane_cp017

0xe413,	// (0x0004121b) bg_popup_sub_pane_cp22

0x074d,	// (0x00033555) popup_vitu2_query_window_g1

0x3913,	// (0x0003671b) popup_vitu2_query_window_g2

0x0002,

0xfa3b,	// (0x00042843) popup_vitu2_query_window_g

0x3930,	// (0x00036738) popup_vitu2_query_window_t1_ParamLimits

0x3930,	// (0x00036738) popup_vitu2_query_window_t1

0x3963,	// (0x0003676b) popup_vitu2_query_window_t2_ParamLimits

0x3963,	// (0x0003676b) popup_vitu2_query_window_t2

0x3975,	// (0x0003677d) popup_vitu2_query_window_t3_ParamLimits

0x3975,	// (0x0003677d) popup_vitu2_query_window_t3

0xa243,	// (0x0003d04b) popup_vitu2_query_window_t4_ParamLimits

0xa243,	// (0x0003d04b) popup_vitu2_query_window_t4

0xa266,	// (0x0003d06e) popup_vitu2_query_window_t5_ParamLimits

0xa266,	// (0x0003d06e) popup_vitu2_query_window_t5

0x0006,

0xfa42,	// (0x0004284a) popup_vitu2_query_window_t_ParamLimits

0xfa42,	// (0x0004284a) popup_vitu2_query_window_t

0x053b,	// (0x00033343) main_cset_text_pane

0x9cb5,	// (0x0003cabd) aid_area_touch_slider_ParamLimits

0x9cd1,	// (0x0003cad9) cset_slider_pane_ParamLimits

0x9cfb,	// (0x0003cb03) main_cset_slider_pane_g1_ParamLimits

0x9d10,	// (0x0003cb18) main_cset_slider_pane_g2_ParamLimits

0x055c,	// (0x00033364) main_cset_slider_pane_g3_ParamLimits

0x055c,	// (0x00033364) main_cset_slider_pane_g3

0x9d25,	// (0x0003cb2d) main_cset_slider_pane_g4_ParamLimits

0x9d25,	// (0x0003cb2d) main_cset_slider_pane_g4

0x9d34,	// (0x0003cb3c) main_cset_slider_pane_g5_ParamLimits

0x9d34,	// (0x0003cb3c) main_cset_slider_pane_g5

0x9d40,	// (0x0003cb48) main_cset_slider_pane_g6_ParamLimits

0x9d40,	// (0x0003cb48) main_cset_slider_pane_g6

0xf995,	// (0x0004279d) main_cset_slider_pane_g_ParamLimits

0x058c,	// (0x00033394) main_cset_slider_pane_t1_ParamLimits

0x9dcc,	// (0x0003cbd4) main_cset_slider_pane_t2_ParamLimits

0x9de6,	// (0x0003cbee) main_cset_slider_pane_t3_ParamLimits

0x9e00,	// (0x0003cc08) main_cset_slider_pane_t4_ParamLimits

0x9e1a,	// (0x0003cc22) main_cset_slider_pane_t5_ParamLimits

0x9e36,	// (0x0003cc3e) main_cset_slider_pane_t6_ParamLimits

0x9e4b,	// (0x0003cc53) main_cset_slider_pane_t7_ParamLimits

0x9e75,	// (0x0003cc7d) main_cset_slider_pane_t8_ParamLimits

0x9e75,	// (0x0003cc7d) main_cset_slider_pane_t8

0x9e9d,	// (0x0003cca5) main_cset_slider_pane_t9_ParamLimits

0x9e9d,	// (0x0003cca5) main_cset_slider_pane_t9

0x9ec5,	// (0x0003cccd) main_cset_slider_pane_t10_ParamLimits

0x9ec5,	// (0x0003cccd) main_cset_slider_pane_t10

0x9eed,	// (0x0003ccf5) main_cset_slider_pane_t11_ParamLimits

0x9eed,	// (0x0003ccf5) main_cset_slider_pane_t11

0x9f15,	// (0x0003cd1d) main_cset_slider_pane_t12_ParamLimits

0x9f15,	// (0x0003cd1d) main_cset_slider_pane_t12

0x9f32,	// (0x0003cd3a) main_cset_slider_pane_t13_ParamLimits

0x9f32,	// (0x0003cd3a) main_cset_slider_pane_t13

0xf9ba,	// (0x000427c2) main_cset_slider_pane_t_ParamLimits

0x45e9,	// (0x000373f1) bg_popup_sub_pane_cp011

0x0759,	// (0x00033561) main_cset_text_pane_g1

0x0761,	// (0x00033569) main_cset_text_pane_t1

0x076f,	// (0x00033577) main_cset_text_pane_t2

0x077d,	// (0x00033585) main_cset_text_pane_t3

0x078b,	// (0x00033593) main_cset_text_pane_t4

0x0799,	// (0x000335a1) main_cset_text_pane_t5

0x07a7,	// (0x000335af) main_cset_text_pane_t6

0x07b5,	// (0x000335bd) main_cset_text_pane_t7

0x0006,

0xfa51,	// (0x00042859) main_cset_text_pane_t

0x45e9,	// (0x000373f1) main_cam4_burst_pane

0x45e9,	// (0x000373f1) main_cam5_pane

0x9bfe,	// (0x0003ca06) bg_button_pane_cp019

0x9c07,	// (0x0003ca0f) bg_button_pane_cp020

0x0568,	// (0x00033370) main_cset_slider_pane_g7_ParamLimits

0x0568,	// (0x00033370) main_cset_slider_pane_g7

0x0574,	// (0x0003337c) main_cset_slider_pane_g8_ParamLimits

0x0574,	// (0x0003337c) main_cset_slider_pane_g8

0x9d54,	// (0x0003cb5c) main_cset_slider_pane_g9_ParamLimits

0x9d54,	// (0x0003cb5c) main_cset_slider_pane_g9

0x9d60,	// (0x0003cb68) main_cset_slider_pane_g10_ParamLimits

0x9d60,	// (0x0003cb68) main_cset_slider_pane_g10

0x9d6c,	// (0x0003cb74) main_cset_slider_pane_g11_ParamLimits

0x9d6c,	// (0x0003cb74) main_cset_slider_pane_g11

0x9d78,	// (0x0003cb80) main_cset_slider_pane_g12_ParamLimits

0x9d78,	// (0x0003cb80) main_cset_slider_pane_g12

0x9d84,	// (0x0003cb8c) main_cset_slider_pane_g13_ParamLimits

0x9d84,	// (0x0003cb8c) main_cset_slider_pane_g13

0x9d90,	// (0x0003cb98) main_cset_slider_pane_g14_ParamLimits

0x9d90,	// (0x0003cb98) main_cset_slider_pane_g14

0x9d9c,	// (0x0003cba4) main_cset_slider_pane_g15_ParamLimits

0x9d9c,	// (0x0003cba4) main_cset_slider_pane_g15

0x05ba,	// (0x000333c2) main_cset_slider_pane_t14_ParamLimits

0x05ba,	// (0x000333c2) main_cset_slider_pane_t14

0x05f3,	// (0x000333fb) main_cset_slider_pane_t15_ParamLimits

0x05f3,	// (0x000333fb) main_cset_slider_pane_t15

0xa289,	// (0x0003d091) aid_cam4_burst_size_cell_ParamLimits

0xa289,	// (0x0003d091) aid_cam4_burst_size_cell

0xa2a5,	// (0x0003d0ad) grid_cam4_burst_pane_ParamLimits

0xa2a5,	// (0x0003d0ad) grid_cam4_burst_pane

0xa2d7,	// (0x0003d0df) linegrid_cam4_burst_pane_ParamLimits

0xa2d7,	// (0x0003d0df) linegrid_cam4_burst_pane

0xa2f7,	// (0x0003d0ff) scroll_pane_cp30_ParamLimits

0xa2f7,	// (0x0003d0ff) scroll_pane_cp30

0xa303,	// (0x0003d10b) cell_cam4_burst_pane_ParamLimits

0xa303,	// (0x0003d10b) cell_cam4_burst_pane

0x07cf,	// (0x000335d7) linegrid_cam4_burst_pane_g1_ParamLimits

0x07cf,	// (0x000335d7) linegrid_cam4_burst_pane_g1

0xa343,	// (0x0003d14b) linegrid_cam4_burst_pane_g2_ParamLimits

0xa343,	// (0x0003d14b) linegrid_cam4_burst_pane_g2

0x07dc,	// (0x000335e4) linegrid_cam4_burst_pane_g3_ParamLimits

0x07dc,	// (0x000335e4) linegrid_cam4_burst_pane_g3

0x0002,

0xfa60,	// (0x00042868) linegrid_cam4_burst_pane_g_ParamLimits

0xfa60,	// (0x00042868) linegrid_cam4_burst_pane_g

0xa354,	// (0x0003d15c) linegrid_cam4_burst_pane_g3_copy1_ParamLimits

0xa354,	// (0x0003d15c) linegrid_cam4_burst_pane_g3_copy1

0x07e9,	// (0x000335f1) linegrid_cam4_burst_pane_g4_ParamLimits

0x07e9,	// (0x000335f1) linegrid_cam4_burst_pane_g4

0xa36e,	// (0x0003d176) linegrid_cam4_burst_pane_g5_ParamLimits

0xa36e,	// (0x0003d176) linegrid_cam4_burst_pane_g5

0xa37f,	// (0x0003d187) linegrid_cam4_burst_pane_g6_ParamLimits

0xa37f,	// (0x0003d187) linegrid_cam4_burst_pane_g6

0x07f6,	// (0x000335fe) linegrid_cam4_burst_pane_g7_ParamLimits

0x07f6,	// (0x000335fe) linegrid_cam4_burst_pane_g7

0xa396,	// (0x0003d19e) cell_cam4_burst_pane_g1

0x080f,	// (0x00033617) main_cam5_pane_t1_ParamLimits

0x080f,	// (0x00033617) main_cam5_pane_t1

0x0821,	// (0x00033629) main_cam5_pane_t2_ParamLimits

0x0821,	// (0x00033629) main_cam5_pane_t2

0x0833,	// (0x0003363b) main_cam5_pane_t3_ParamLimits

0x0833,	// (0x0003363b) main_cam5_pane_t3

0x0845,	// (0x0003364d) main_cam5_pane_t4_ParamLimits

0x0845,	// (0x0003364d) main_cam5_pane_t4

0x085d,	// (0x00033665) main_cam5_pane_t5_ParamLimits

0x085d,	// (0x00033665) main_cam5_pane_t5

0x0871,	// (0x00033679) main_cam5_pane_t6_ParamLimits

0x0871,	// (0x00033679) main_cam5_pane_t6

0x0885,	// (0x0003368d) main_cam5_pane_t7_ParamLimits

0x0885,	// (0x0003368d) main_cam5_pane_t7

0x0897,	// (0x0003369f) main_cam5_pane_t8_ParamLimits

0x0897,	// (0x0003369f) main_cam5_pane_t8

0x08b5,	// (0x000336bd) main_cam5_pane_t9_ParamLimits

0x08b5,	// (0x000336bd) main_cam5_pane_t9

0x08c7,	// (0x000336cf) main_cam5_pane_t10_ParamLimits

0x08c7,	// (0x000336cf) main_cam5_pane_t10

0x08d9,	// (0x000336e1) main_cam5_pane_t11_ParamLimits

0x08d9,	// (0x000336e1) main_cam5_pane_t11

0x08ed,	// (0x000336f5) main_cam5_pane_t12_ParamLimits

0x08ed,	// (0x000336f5) main_cam5_pane_t12

0x0904,	// (0x0003370c) main_cam5_pane_t13_ParamLimits

0x0904,	// (0x0003370c) main_cam5_pane_t13

0x000c,

0xfa6c,	// (0x00042874) main_cam5_pane_t_ParamLimits

0xfa6c,	// (0x00042874) main_cam5_pane_t

0x486a,	// (0x00037672) popup_scut_keymap_window_ParamLimits

0x486a,	// (0x00037672) popup_scut_keymap_window

0xa3a9,	// (0x0003d1b1) aid_size_cell_brow_shortcut

0xcfe4,	// (0x0003fdec) bg_popup_window_pane_cp010

0xa3b5,	// (0x0003d1bd) grid_scut_pane

0xa3c1,	// (0x0003d1c9) cell_scut_pane_ParamLimits

0xa3c1,	// (0x0003d1c9) cell_scut_pane

0xa3dc,	// (0x0003d1e4) cell_scut_pane_g1

0x0927,	// (0x0003372f) cell_scut_pane_t1

0x0936,	// (0x0003373e) cell_scut_pane_t2

0xa3e5,	// (0x0003d1ed) cell_scut_pane_t3

0x0002,

0xfa87,	// (0x0004288f) cell_scut_pane_t

0x8450,	// (0x0003b258) main_mup3_pane_g8_ParamLimits

0x8450,	// (0x0003b258) main_mup3_pane_g8

0x9804,	// (0x0003c60c) area_vitu2_query_pane_ParamLimits

0x9804,	// (0x0003c60c) area_vitu2_query_pane

0x38f2,	// (0x000366fa) input_focus_pane_cp08

0x0945,	// (0x0003374d) area_vitu2_query_pane_g1

0x39f3,	// (0x000367fb) area_vitu2_query_pane_g2

0x0001,

0xfa8e,	// (0x00042896) area_vitu2_query_pane_g

0xa3f3,	// (0x0003d1fb) area_vitu2_query_pane_t1_ParamLimits

0xa3f3,	// (0x0003d1fb) area_vitu2_query_pane_t1

0xa407,	// (0x0003d20f) area_vitu2_query_pane_t2_ParamLimits

0xa407,	// (0x0003d20f) area_vitu2_query_pane_t2

0x3a04,	// (0x0003680c) area_vitu2_query_pane_t3_ParamLimits

0x3a04,	// (0x0003680c) area_vitu2_query_pane_t3

0x3a2c,	// (0x00036834) area_vitu2_query_pane_t4_ParamLimits

0x3a2c,	// (0x00036834) area_vitu2_query_pane_t4

0x3a54,	// (0x0003685c) area_vitu2_query_pane_t5_ParamLimits

0x3a54,	// (0x0003685c) area_vitu2_query_pane_t5

0x3a7c,	// (0x00036884) area_vitu2_query_pane_t6_ParamLimits

0x3a7c,	// (0x00036884) area_vitu2_query_pane_t6

0x0006,

0xfa93,	// (0x0004289b) area_vitu2_query_pane_t_ParamLimits

0xfa93,	// (0x0004289b) area_vitu2_query_pane_t

0xa41b,	// (0x0003d223) bg_button_pane_cp018

0xa429,	// (0x0003d231) bg_button_pane_cp021

0x3ac8,	// (0x000368d0) bg_button_pane_cp022

0x3ad9,	// (0x000368e1) input_focus_pane_cp09

0x6971,	// (0x00039779) aid_size_touch_mv_arrow_left

0x699c,	// (0x000397a4) aid_size_touch_mv_arrow_right

0x9db4,	// (0x0003cbbc) main_cset_slider_pane_g16_ParamLimits

0x9db4,	// (0x0003cbbc) main_cset_slider_pane_g16

0x9dc0,	// (0x0003cbc8) main_cset_slider_pane_g17_ParamLimits

0x9dc0,	// (0x0003cbc8) main_cset_slider_pane_g17

0xa396,	// (0x0003d19e) cell_cam4_burst_pane_g1_ParamLimits

0x45e9,	// (0x000373f1) compa_mode_pane

0x9fb0,	// (0x0003cdb8) popup_vtel_slider_window_g3_ParamLimits

0x9fb0,	// (0x0003cdb8) popup_vtel_slider_window_g3

0x9fc4,	// (0x0003cdcc) popup_vtel_slider_window_g4_ParamLimits

0x9fc4,	// (0x0003cdcc) popup_vtel_slider_window_g4

0x9fd8,	// (0x0003cde0) popup_vtel_slider_window_t1_ParamLimits

0x9fd8,	// (0x0003cde0) popup_vtel_slider_window_t1

0x45e9,	// (0x000373f1) main_cl_pane

0xe43f,	// (0x00041247) popup_imed_adjust2_window_ParamLimits

0xe413,	// (0x0004121b) bg_tb_trans_pane_cp05_ParamLimits

0xed65,	// (0x00041b6d) popup_imed_adjust2_window_g1_ParamLimits

0xed74,	// (0x00041b7c) popup_imed_adjust2_window_g2_ParamLimits

0xed74,	// (0x00041b7c) popup_imed_adjust2_window_g2

0xed80,	// (0x00041b88) popup_imed_adjust2_window_g3_ParamLimits

0xed80,	// (0x00041b88) popup_imed_adjust2_window_g3

0x0002,

0xf7fe,	// (0x00042606) popup_imed_adjust2_window_g_ParamLimits

0xf7fe,	// (0x00042606) popup_imed_adjust2_window_g

0xed8c,	// (0x00041b94) popup_imed_adjust2_window_t1_ParamLimits

0xeda4,	// (0x00041bac) slider_imed_adjust_pane_ParamLimits

0xedb8,	// (0x00041bc0) slider_imed_adjust_pane_g1_ParamLimits

0xedc8,	// (0x00041bd0) slider_imed_adjust_pane_g2_ParamLimits

0xedd8,	// (0x00041be0) slider_imed_adjust_pane_g3_ParamLimits

0xede9,	// (0x00041bf1) slider_imed_adjust_pane_g4_ParamLimits

0xf805,	// (0x0004260d) slider_imed_adjust_pane_g_ParamLimits

0x9562,	// (0x0003c36a) aid_touch_area_cam4_ParamLimits

0x9562,	// (0x0003c36a) aid_touch_area_cam4

0x9572,	// (0x0003c37a) battery_pane_cp01

0x95f9,	// (0x0003c401) main_camera4_pane_g6_ParamLimits

0x95f9,	// (0x0003c401) main_camera4_pane_g6

0x9617,	// (0x0003c41f) main_camera4_pane_t2_ParamLimits

0x9617,	// (0x0003c41f) main_camera4_pane_t2

0x0001,

0xf908,	// (0x00042710) main_camera4_pane_t_ParamLimits

0xf908,	// (0x00042710) main_camera4_pane_t

0x969e,	// (0x0003c4a6) aid_touch_area_vid4_ParamLimits

0x969e,	// (0x0003c4a6) aid_touch_area_vid4

0x96de,	// (0x0003c4e6) main_video4_pane_g5_ParamLimits

0x96de,	// (0x0003c4e6) main_video4_pane_g5

0x9702,	// (0x0003c50a) vid4_progress_pane_ParamLimits

0x9702,	// (0x0003c50a) vid4_progress_pane

0x0580,	// (0x00033388) main_cset_slider_pane_g18_ParamLimits

0x0580,	// (0x00033388) main_cset_slider_pane_g18

0x0803,	// (0x0003360b) cell_cam4_burst_pane_g2_ParamLimits

0x0803,	// (0x0003360b) cell_cam4_burst_pane_g2

0x0001,

0xfa67,	// (0x0004286f) cell_cam4_burst_pane_g_ParamLimits

0xfa67,	// (0x0004286f) cell_cam4_burst_pane_g

0xa435,	// (0x0003d23d) bg_cl_pane_ParamLimits

0xa435,	// (0x0003d23d) bg_cl_pane

0xa441,	// (0x0003d249) cl_header_pane_ParamLimits

0xa441,	// (0x0003d249) cl_header_pane

0xa44d,	// (0x0003d255) cl_listscroll_pane_ParamLimits

0xa44d,	// (0x0003d255) cl_listscroll_pane

0x09ed,	// (0x000337f5) bg_cl_pane_g1

0x09f5,	// (0x000337fd) bg_cl_pane_g2

0x09fd,	// (0x00033805) bg_cl_pane_g3

0x0a05,	// (0x0003380d) bg_cl_pane_g4

0x0a0d,	// (0x00033815) bg_cl_pane_g5

0x0a15,	// (0x0003381d) bg_cl_pane_g6

0x0a1d,	// (0x00033825) bg_cl_pane_g7

0x0a25,	// (0x0003382d) bg_cl_pane_g8

0x0a2d,	// (0x00033835) bg_cl_pane_g9

0x0008,

0xfaa2,	// (0x000428aa) bg_cl_pane_g

0xa459,	// (0x0003d261) aid_height_cl_leading_ParamLimits

0xa459,	// (0x0003d261) aid_height_cl_leading

0xa465,	// (0x0003d26d) aid_height_cl_text_ParamLimits

0xa465,	// (0x0003d26d) aid_height_cl_text

0x48a1,	// (0x000376a9) bg_cl_header_pane_ParamLimits

0x48a1,	// (0x000376a9) bg_cl_header_pane

0xa47d,	// (0x0003d285) cl_header_pane_g1_ParamLimits

0xa47d,	// (0x0003d285) cl_header_pane_g1

0xa48a,	// (0x0003d292) cl_header_pane_t1_ParamLimits

0xa48a,	// (0x0003d292) cl_header_pane_t1

0x0a35,	// (0x0003383d) cl_list_pane

0x0553,	// (0x0003335b) hc_scroll_pane_cp01

0xc97a,	// (0x0003f782) bg_cl_header_pane_g1

0x0435,	// (0x0003323d) bg_cl_header_pane_g2

0xc99a,	// (0x0003f7a2) bg_cl_header_pane_g3

0x0445,	// (0x0003324d) bg_cl_header_pane_g4

0x043d,	// (0x00033245) bg_cl_header_pane_g5

0x06d0,	// (0x000334d8) bg_cl_header_pane_g6

0x045d,	// (0x00033265) bg_cl_header_pane_g7

0x0465,	// (0x0003326d) bg_cl_header_pane_g8

0x0455,	// (0x0003325d) bg_cl_header_pane_g9

0x0008,

0xfab5,	// (0x000428bd) bg_cl_header_pane_g

0xa49c,	// (0x0003d2a4) hc_cl_list_double_graphic_heading_pane_ParamLimits

0xa49c,	// (0x0003d2a4) hc_cl_list_double_graphic_heading_pane

0xa0e6,	// (0x0003ceee) hc_cl_list_single_graphic_pane_ParamLimits

0xa0e6,	// (0x0003ceee) hc_cl_list_single_graphic_pane

0xa4ac,	// (0x0003d2b4) hc_cl_list_single_graphic_pane_g1_ParamLimits

0xa4ac,	// (0x0003d2b4) hc_cl_list_single_graphic_pane_g1

0xa4b8,	// (0x0003d2c0) hc_cl_list_single_graphic_pane_g2_ParamLimits

0xa4b8,	// (0x0003d2c0) hc_cl_list_single_graphic_pane_g2

0x0001,

0xfac8,	// (0x000428d0) hc_cl_list_single_graphic_pane_g_ParamLimits

0xfac8,	// (0x000428d0) hc_cl_list_single_graphic_pane_g

0xa4cc,	// (0x0003d2d4) hc_cl_list_single_graphic_pane_t1_ParamLimits

0xa4cc,	// (0x0003d2d4) hc_cl_list_single_graphic_pane_t1

0xa4ac,	// (0x0003d2b4) hc_cl_list_double_graphic_heading_pane_g1_ParamLimits

0xa4ac,	// (0x0003d2b4) hc_cl_list_double_graphic_heading_pane_g1

0xa4e1,	// (0x0003d2e9) hc_cl_list_double_graphic_heading_pane_g2_ParamLimits

0xa4e1,	// (0x0003d2e9) hc_cl_list_double_graphic_heading_pane_g2

0xa4f5,	// (0x0003d2fd) hc_cl_list_double_graphic_heading_pane_g3_ParamLimits

0xa4f5,	// (0x0003d2fd) hc_cl_list_double_graphic_heading_pane_g3

0x0002,

0xfacd,	// (0x000428d5) hc_cl_list_double_graphic_heading_pane_g_ParamLimits

0xfacd,	// (0x000428d5) hc_cl_list_double_graphic_heading_pane_g

0xa509,	// (0x0003d311) hc_cl_list_double_graphic_heading_pane_t1_ParamLimits

0xa509,	// (0x0003d311) hc_cl_list_double_graphic_heading_pane_t1

0xa51e,	// (0x0003d326) hc_cl_list_double_graphic_heading_pane_t2_ParamLimits

0xa51e,	// (0x0003d326) hc_cl_list_double_graphic_heading_pane_t2

0x0001,

0xfad4,	// (0x000428dc) hc_cl_list_double_graphic_heading_pane_t_ParamLimits

0xfad4,	// (0x000428dc) hc_cl_list_double_graphic_heading_pane_t

0xa545,	// (0x0003d34d) vid4_progress_pane_g1

0xa551,	// (0x0003d359) vid4_progress_pane_g2

0xa55d,	// (0x0003d365) vid4_progress_pane_g3

0xa56c,	// (0x0003d374) vid4_progress_pane_g4

0x0004,

0xfad9,	// (0x000428e1) vid4_progress_pane_g

0xa58a,	// (0x0003d392) vid4_progress_pane_t1

0xa5a0,	// (0x0003d3a8) vid4_progress_pane_t2

0x0002,

0xfae4,	// (0x000428ec) vid4_progress_pane_t

0xa5cb,	// (0x0003d3d3) wait_bar_pane_cp07

0xe67b,	// (0x00041483) blid_firmament_pane_ParamLimits

0xe6be,	// (0x000414c6) popup_blid_sat_info2_window_g1

0xe6e2,	// (0x000414ea) popup_blid_sat_info2_window_t3

0xe6f0,	// (0x000414f8) popup_blid_sat_info2_window_t4

0xe6fe,	// (0x00041506) popup_blid_sat_info2_window_t5

0xe714,	// (0x0004151c) popup_blid_sat_info2_window_t6

0xe724,	// (0x0004152c) popup_blid_sat_info2_window_t7

0xe732,	// (0x0004153a) popup_blid_sat_info2_window_t8

0xe740,	// (0x00041548) popup_blid_sat_info2_window_t9

0xe74e,	// (0x00041556) popup_blid_sat_info2_window_t10

0xe816,	// (0x0004161e) aid_firma_cardinal_ParamLimits

0xe82a,	// (0x00041632) blid_firmament_pane_t1_ParamLimits

0xe841,	// (0x00041649) blid_firmament_pane_t2_ParamLimits

0xe858,	// (0x00041660) blid_firmament_pane_t3_ParamLimits

0xe86f,	// (0x00041677) blid_firmament_pane_t4_ParamLimits

0xf6f7,	// (0x000424ff) blid_firmament_pane_t_ParamLimits

0xe886,	// (0x0004168e) blid_sat_info_pane_ParamLimits

0x7737,	// (0x0003a53f) main_cam_set_pane_ParamLimits

0x8be8,	// (0x0003b9f0) aid_size_cell_colour_35_ParamLimits

0x8c02,	// (0x0003ba0a) aid_size_cell_colour_112_ParamLimits

0x8c19,	// (0x0003ba21) aid_size_cell_effect_ParamLimits

0x7737,	// (0x0003a53f) bg_tb_trans_pane_cp02_ParamLimits

0xd8d3,	// (0x000406db) heading_imed_pane_ParamLimits

0x8c33,	// (0x0003ba3b) listscroll_imed_pane_ParamLimits

0xda41,	// (0x00040849) popup_call2_audio_first_window_g5_ParamLimits

0xda41,	// (0x00040849) popup_call2_audio_first_window_g5

0x931b,	// (0x0003c123) aid_size_touch_image3_arrow_left_ParamLimits

0x931b,	// (0x0003c123) aid_size_touch_image3_arrow_left

0x9331,	// (0x0003c139) aid_size_touch_image3_arrow_right_ParamLimits

0x9331,	// (0x0003c139) aid_size_touch_image3_arrow_right

0xa5b6,	// (0x0003d3be) vid4_progress_pane_t3

0x8ed3,	// (0x0003bcdb) main_hwr_training_symbol_option_pane_ParamLimits

0x8ed3,	// (0x0003bcdb) main_hwr_training_symbol_option_pane

0xf054,	// (0x00041e5c) popup_hwr_training_preview_window_ParamLimits

0xf054,	// (0x00041e5c) popup_hwr_training_preview_window

0x8f34,	// (0x0003bd3c) hwr_training_navi_pane_g5_ParamLimits

0x8f34,	// (0x0003bd3c) hwr_training_navi_pane_g5

0x0415,	// (0x0003321d) popup_char_count_window

0x48a1,	// (0x000376a9) bg_popup_sub_pane_cp20_ParamLimits

0xa0ce,	// (0x0003ced6) list_vitu2_match_list_pane_ParamLimits

0xa0da,	// (0x0003cee2) vitu2_page_scroll_pane_ParamLimits

0xa0da,	// (0x0003cee2) vitu2_page_scroll_pane

0x0b38,	// (0x00033940) list_single_hwr_training_symbol_option_pane_ParamLimits

0x0b38,	// (0x00033940) list_single_hwr_training_symbol_option_pane

0x0b4b,	// (0x00033953) list_single_hwr_training_symbol_option_pane_g1

0x0b53,	// (0x0003395b) list_single_hwr_training_symbol_option_pane_t1

0x0b61,	// (0x00033969) bg_button_pane_cp023

0x0b6a,	// (0x00033972) bg_button_pane_cp024

0xa5dd,	// (0x0003d3e5) vitu2_page_scroll_pane_g1

0xa5e5,	// (0x0003d3ed) vitu2_page_scroll_pane_g2

0x0001,

0xfaeb,	// (0x000428f3) vitu2_page_scroll_pane_g

0xa5ef,	// (0x0003d3f7) vitu2_page_scroll_pane_t1

0xe5db,	// (0x000413e3) popup_char_count_window_g1

0x0b9d,	// (0x000339a5) popup_char_count_window_g2

0x0ba6,	// (0x000339ae) popup_char_count_window_g3

0x0002,

0xfaf0,	// (0x000428f8) popup_char_count_window_g

0x0baf,	// (0x000339b7) popup_char_count_window_t1

0x45e9,	// (0x000373f1) main_vded2_pane

0xed51,	// (0x00041b59) aid_size_cell_imed_line

0xed5b,	// (0x00041b63) grid_imed_line_width_pane

0x9758,	// (0x0003c560) vid4_indicators_pane_g4

0x0bbd,	// (0x000339c5) cell_imed_line_width_pane_ParamLimits

0x0bbd,	// (0x000339c5) cell_imed_line_width_pane

0x0bd3,	// (0x000339db) cell_imed_line_width_pane_g1

0xe70c,	// (0x00041514) cell_imed_line_width_pane_g2

0x0001,

0xfaf7,	// (0x000428ff) cell_imed_line_width_pane_g

0xa5fe,	// (0x0003d406) main_vded2_pane_g1_ParamLimits

0xa5fe,	// (0x0003d406) main_vded2_pane_g1

0xa60d,	// (0x0003d415) main_vded2_pane_g2_ParamLimits

0xa60d,	// (0x0003d415) main_vded2_pane_g2

0x0001,

0xfafc,	// (0x00042904) main_vded2_pane_g_ParamLimits

0xfafc,	// (0x00042904) main_vded2_pane_g

0xa61b,	// (0x0003d423) vded2_slider_pane_ParamLimits

0xa61b,	// (0x0003d423) vded2_slider_pane

0xa628,	// (0x0003d430) aid_size_touch_vded2_end

0xa632,	// (0x0003d43a) aid_size_touch_vded2_playhead

0x0bdc,	// (0x000339e4) aid_size_touch_vded2_start

0x0be4,	// (0x000339ec) vded2_slider_bg_pane

0x0bed,	// (0x000339f5) vded2_slider_pane_g1

0x0bf6,	// (0x000339fe) vded2_slider_pane_g2

0xa63a,	// (0x0003d442) vded2_slider_pane_g3

0x0002,

0xfb01,	// (0x00042909) vded2_slider_pane_g

0x0bfe,	// (0x00033a06) vded2_slider_bg_pane_g1

0x0c07,	// (0x00033a0f) vded2_slider_bg_pane_g2

0x0c10,	// (0x00033a18) vded2_slider_bg_pane_g3

0x0002,

0xf7c7,	// (0x000425cf) vded2_slider_bg_pane_g

0x700f,	// (0x00039e17) aid_postcard_touch_down_pane_ParamLimits

0x700f,	// (0x00039e17) aid_postcard_touch_down_pane

0x701f,	// (0x00039e27) aid_postcard_touch_up_pane_ParamLimits

0x701f,	// (0x00039e27) aid_postcard_touch_up_pane

0x45e9,	// (0x000373f1) main_blid2_pane

0xe421,	// (0x00041229) popup_blid2_search_window

0x45e9,	// (0x000373f1) blid2_gps_pane

0x45e9,	// (0x000373f1) blid2_navig_pane

0x45e9,	// (0x000373f1) blid2_search_pane

0x45e9,	// (0x000373f1) blid2_tripm_pane

0xa643,	// (0x0003d44b) blid2_search_pane_g1_ParamLimits

0xa643,	// (0x0003d44b) blid2_search_pane_g1

0xa653,	// (0x0003d45b) blid2_search_pane_t1_ParamLimits

0xa653,	// (0x0003d45b) blid2_search_pane_t1

0xa665,	// (0x0003d46d) aid_size_cell_blid2_gps_ParamLimits

0xa665,	// (0x0003d46d) aid_size_cell_blid2_gps

0xa675,	// (0x0003d47d) blid2_gps_pane_g1_ParamLimits

0xa675,	// (0x0003d47d) blid2_gps_pane_g1

0xa681,	// (0x0003d489) grid_blid2_satellite_pane_ParamLimits

0xa681,	// (0x0003d489) grid_blid2_satellite_pane

0xa68f,	// (0x0003d497) blid2_navig_pane_g1_ParamLimits

0xa68f,	// (0x0003d497) blid2_navig_pane_g1

0xa69b,	// (0x0003d4a3) blid2_navig_pane_t1_ParamLimits

0xa69b,	// (0x0003d4a3) blid2_navig_pane_t1

0xa6ad,	// (0x0003d4b5) blid2_navig_pane_t2_ParamLimits

0xa6ad,	// (0x0003d4b5) blid2_navig_pane_t2

0x0001,

0xfb08,	// (0x00042910) blid2_navig_pane_t_ParamLimits

0xfb08,	// (0x00042910) blid2_navig_pane_t

0xa6bf,	// (0x0003d4c7) blid2_navig_ring_pane_ParamLimits

0xa6bf,	// (0x0003d4c7) blid2_navig_ring_pane

0xa6cf,	// (0x0003d4d7) blid2_speed_pane_ParamLimits

0xa6cf,	// (0x0003d4d7) blid2_speed_pane

0xa6db,	// (0x0003d4e3) blid2_tripm_pane_g1_ParamLimits

0xa6db,	// (0x0003d4e3) blid2_tripm_pane_g1

0xa6eb,	// (0x0003d4f3) blid2_tripm_pane_g2_ParamLimits

0xa6eb,	// (0x0003d4f3) blid2_tripm_pane_g2

0xa6f7,	// (0x0003d4ff) blid2_tripm_pane_g3_ParamLimits

0xa6f7,	// (0x0003d4ff) blid2_tripm_pane_g3

0xa703,	// (0x0003d50b) blid2_tripm_pane_g4_ParamLimits

0xa703,	// (0x0003d50b) blid2_tripm_pane_g4

0xa70f,	// (0x0003d517) blid2_tripm_pane_g5_ParamLimits

0xa70f,	// (0x0003d517) blid2_tripm_pane_g5

0x0005,

0xfb0d,	// (0x00042915) blid2_tripm_pane_g_ParamLimits

0xfb0d,	// (0x00042915) blid2_tripm_pane_g

0xa72b,	// (0x0003d533) blid2_tripm_pane_t1_ParamLimits

0xa72b,	// (0x0003d533) blid2_tripm_pane_t1

0xa73f,	// (0x0003d547) blid2_tripm_pane_t2_ParamLimits

0xa73f,	// (0x0003d547) blid2_tripm_pane_t2

0xa751,	// (0x0003d559) blid2_tripm_pane_t3_ParamLimits

0xa751,	// (0x0003d559) blid2_tripm_pane_t3

0x0003,

0xfb1a,	// (0x00042922) blid2_tripm_pane_t_ParamLimits

0xfb1a,	// (0x00042922) blid2_tripm_pane_t

0xa783,	// (0x0003d58b) cell_blid2_satellite_pane_ParamLimits

0xa783,	// (0x0003d58b) cell_blid2_satellite_pane

0xa7a1,	// (0x0003d5a9) cell_blid2_satellite_pane_g1

0x0c19,	// (0x00033a21) cell_blid2_satellite_pane_t1

0xe896,	// (0x0004169e) blid2_speed_pane_g1

0x0c27,	// (0x00033a2f) blid2_speed_pane_t1

0x0c35,	// (0x00033a3d) blid2_speed_pane_t2

0x0001,

0xfb23,	// (0x0004292b) blid2_speed_pane_t

0xe896,	// (0x0004169e) blid2_navig_ring_pane_g1

0xa7aa,	// (0x0003d5b2) blid2_navig_ring_pane_g2

0xa7b2,	// (0x0003d5ba) blid2_navig_ring_pane_g3

0xa7ba,	// (0x0003d5c2) blid2_navig_ring_pane_g4

0xa7c2,	// (0x0003d5ca) blid2_navig_ring_pane_g5

0x0004,

0xfb28,	// (0x00042930) blid2_navig_ring_pane_g

0x45e9,	// (0x000373f1) bg_popup_window_pane_cp011

0x0c43,	// (0x00033a4b) popup_blid2_search_window_g1

0x0c4b,	// (0x00033a53) popup_blid2_search_window_t1

0x0c59,	// (0x00033a61) popup_blid2_search_window_t2

0x0001,

0xfb33,	// (0x0004293b) popup_blid2_search_window_t

0xc889,	// (0x0003f691) main_browser_pane_g1

0xc590,	// (0x0003f398) main_browser_pane_ParamLimits

0x7737,	// (0x0003a53f) bg_button_pane_cp011_ParamLimits

0x99c5,	// (0x0003c7cd) cell_vitu2_function_pane_g1_ParamLimits

0xe413,	// (0x0004121b) bg_popup_sub_pane_cp22_ParamLimits

0x38f2,	// (0x000366fa) input_focus_pane_cp08_ParamLimits

0xa232,	// (0x0003d03a) popup_vitu2_query_button_pane_ParamLimits

0xa232,	// (0x0003d03a) popup_vitu2_query_button_pane

0x3909,	// (0x00036711) popup_vitu2_query_input_button_pane

0x074d,	// (0x00033555) popup_vitu2_query_window_g1_ParamLimits

0x3913,	// (0x0003671b) popup_vitu2_query_window_g2_ParamLimits

0xfa3b,	// (0x00042843) popup_vitu2_query_window_g_ParamLimits

0x45e9,	// (0x000373f1) bg_button_pane_cp026

0xa7ca,	// (0x0003d5d2) popup_vitu2_query_input_button_pane_g1

0x45e9,	// (0x000373f1) bg_button_pane_cp025

0x0c67,	// (0x00033a6f) popup_vitu2_query_button_pane_t1

0x81a6,	// (0x0003afae) main_mp3_pane_t6

0x81b6,	// (0x0003afbe) popup_slider_window_cp01

0x964f,	// (0x0003c457) cam4_battery_pane

0x9730,	// (0x0003c538) cam4_battery_pane_cp02

0xa533,	// (0x0003d33b) cam4_battery_pane_cp01

0xa53d,	// (0x0003d345) cam4_battery_pane_cp03

0xe896,	// (0x0004169e) cam4_battery_pane_g1

0x01a3,	// (0x00032fab) cam4_battery_pane_g2

0x0001,

0xfb38,	// (0x00042940) cam4_battery_pane_g

0xe75c,	// (0x00041564) popup_blid_sat_info2_window_t11

0x6971,	// (0x00039779) aid_size_touch_mv_arrow_left_ParamLimits

0x699c,	// (0x000397a4) aid_size_touch_mv_arrow_right_ParamLimits

0xcf44,	// (0x0003fd4c) navi_pane_g1_ParamLimits

0x69c5,	// (0x000397cd) navi_pane_g2_ParamLimits

0x69f3,	// (0x000397fb) navi_pane_g3_ParamLimits

0xf409,	// (0x00042211) navi_pane_g_ParamLimits

0x6a4d,	// (0x00039855) navi_pane_mv_t1_ParamLimits

0x8c3f,	// (0x0003ba47) grid_imed_effect_pane_ParamLimits

0x5747,	// (0x0003854f) aid_placing_vt_slider_lsc

0xc7d6,	// (0x0003f5de) aid_placing_vt_slider_prt

0x7737,	// (0x0003a53f) bg_tb_trans_pane_cp01_ParamLimits

0xe9e6,	// (0x000417ee) popup_image_details_window_g1_ParamLimits

0xe9f9,	// (0x00041801) popup_image_details_window_g2_ParamLimits

0xea0e,	// (0x00041816) popup_image_details_window_g3_ParamLimits

0xea0e,	// (0x00041816) popup_image_details_window_g3

0xf73c,	// (0x00042544) popup_image_details_window_g_ParamLimits

0xea22,	// (0x0004182a) popup_image_details_window_t1_ParamLimits

0xea34,	// (0x0004183c) popup_image_details_window_t2_ParamLimits

0xea4d,	// (0x00041855) popup_image_details_window_t3_ParamLimits

0xea61,	// (0x00041869) popup_image_details_window_t4_ParamLimits

0xea7c,	// (0x00041884) popup_image_details_window_t5_ParamLimits

0xf743,	// (0x0004254b) popup_image_details_window_t_ParamLimits

0xa471,	// (0x0003d279) cl_header_name_pane_ParamLimits

0xa471,	// (0x0003d279) cl_header_name_pane

0xa7d2,	// (0x0003d5da) cl_header_name_pane_t1_ParamLimits

0xa7d2,	// (0x0003d5da) cl_header_name_pane_t1

0xa7e9,	// (0x0003d5f1) cl_header_name_pane_t2_ParamLimits

0xa7e9,	// (0x0003d5f1) cl_header_name_pane_t2

0xa813,	// (0x0003d61b) cl_header_name_pane_t3_ParamLimits

0xa813,	// (0x0003d61b) cl_header_name_pane_t3

0x0002,

0xfb3d,	// (0x00042945) cl_header_name_pane_t_ParamLimits

0xfb3d,	// (0x00042945) cl_header_name_pane_t

0x6a1e,	// (0x00039826) navi_pane_mv_g2_ParamLimits

0x03d2,	// (0x000331da) field_vitu2_entry_pane_g1_ParamLimits

0x03de,	// (0x000331e6) field_vitu2_entry_pane_g2_ParamLimits

0x03ea,	// (0x000331f2) field_vitu2_entry_pane_g3_ParamLimits

0x03ea,	// (0x000331f2) field_vitu2_entry_pane_g3

0xf93a,	// (0x00042742) field_vitu2_entry_pane_g_ParamLimits

0x9955,	// (0x0003c75d) cell_vitu2_itu_pane_g1_ParamLimits

0x9965,	// (0x0003c76d) cell_vitu2_itu_pane_g2_ParamLimits

0x9965,	// (0x0003c76d) cell_vitu2_itu_pane_g2

0x0001,

0xf946,	// (0x0004274e) cell_vitu2_itu_pane_g_ParamLimits

0xf946,	// (0x0004274e) cell_vitu2_itu_pane_g

0x7737,	// (0x0003a53f) bg_vkb2_func_pane_cp05_ParamLimits

0x7737,	// (0x0003a53f) bg_vkb2_func_pane_cp05

0x7737,	// (0x0003a53f) bg_vkb2_func_pane_cp03

0x7737,	// (0x0003a53f) bg_vkb2_func_pane_cp04

0x7737,	// (0x0003a53f) bg_vkb2_func_pane_cp10_ParamLimits

0x7737,	// (0x0003a53f) bg_vkb2_func_pane_cp10

0x3ac8,	// (0x000368d0) bg_vkb2_func_pane_cp08

0xa41b,	// (0x0003d223) bg_vkb2_func_pane_cp06

0xa429,	// (0x0003d231) bg_vkb2_func_pane_cp07

0x0b73,	// (0x0003397b) bg_vkb2_func_pane_cp11_ParamLimits

0x0b73,	// (0x0003397b) bg_vkb2_func_pane_cp11

0x0b88,	// (0x00033990) bg_vkb2_func_pane_cp12_ParamLimits

0x0b88,	// (0x00033990) bg_vkb2_func_pane_cp12

0x45e9,	// (0x000373f1) bg_vkb2_func_pane_cp09

0x0435,	// (0x0003323d) bg_vkb2_func_pane_g1

0xc99a,	// (0x0003f7a2) bg_vkb2_func_pane_g2

0x043d,	// (0x00033245) bg_vkb2_func_pane_g3

0x0445,	// (0x0003324d) bg_vkb2_func_pane_g4

0x06d0,	// (0x000334d8) bg_vkb2_func_pane_g5

0x045d,	// (0x00033265) bg_vkb2_func_pane_g6

0x0465,	// (0x0003326d) bg_vkb2_func_pane_g7

0x0455,	// (0x0003325d) bg_vkb2_func_pane_g8

0xc97a,	// (0x0003f782) bg_vkb2_func_pane_g9

0x0008,

0xfb44,	// (0x0004294c) bg_vkb2_func_pane_g

0xa71d,	// (0x0003d525) blid2_tripm_pane_g6_ParamLimits

0xa71d,	// (0x0003d525) blid2_tripm_pane_g6

0x015d,	// (0x00032f65) mp4_progress_pane_g1

0xa777,	// (0x0003d57f) blid2_tripm_values_pane_ParamLimits

0xa777,	// (0x0003d57f) blid2_tripm_values_pane

0xa838,	// (0x0003d640) blid2_tripm_values_pane_t1

0xa846,	// (0x0003d64e) blid2_tripm_values_pane_t2

0xa854,	// (0x0003d65c) blid2_tripm_values_pane_t3

0xa862,	// (0x0003d66a) blid2_tripm_values_pane_t4

0xa870,	// (0x0003d678) blid2_tripm_values_pane_t5

0xa87e,	// (0x0003d686) blid2_tripm_values_pane_t6

0xa88c,	// (0x0003d694) blid2_tripm_values_pane_t7

0xa89a,	// (0x0003d6a2) blid2_tripm_values_pane_t8

0xa8a8,	// (0x0003d6b0) blid2_tripm_values_pane_t9

0x0008,

0xfb57,	// (0x0004295f) blid2_tripm_values_pane_t

0x5785,	// (0x0003858d) call_video_pane_t1_ParamLimits

0x57a2,	// (0x000385aa) call_video_pane_t2_ParamLimits

0xf292,	// (0x0004209a) call_video_pane_t_ParamLimits

0x366c,	// (0x00036474) msg_header_pane_g1_ParamLimits

0xd161,	// (0x0003ff69) msg_header_pane_g2_ParamLimits

0xd161,	// (0x0003ff69) msg_header_pane_g2

0x0001,

0xf4ac,	// (0x000422b4) msg_header_pane_g_ParamLimits

0xf4ac,	// (0x000422b4) msg_header_pane_g

0xc590,	// (0x0003f398) main_clock2_pane_ParamLimits

0x89be,	// (0x0003b7c6) grid_clock2_toolbar_pane_ParamLimits

0x89be,	// (0x0003b7c6) grid_clock2_toolbar_pane

0x89be,	// (0x0003b7c6) listscroll_clock2_pane_ParamLimits

0x89be,	// (0x0003b7c6) listscroll_clock2_pane

0x8a76,	// (0x0003b87e) main_clock2_pane_t3_ParamLimits

0x8a76,	// (0x0003b87e) main_clock2_pane_t3

0x8a88,	// (0x0003b890) main_clock2_pane_t4_ParamLimits

0x8a88,	// (0x0003b890) main_clock2_pane_t4

0x0c75,	// (0x00033a7d) cell_clock2_toolbar_pane

0x0c7d,	// (0x00033a85) cell_clock2_toolbar_pane_cp01

0x0c7d,	// (0x00033a85) cell_clock2_toolbar_pane_cp02

0x0c85,	// (0x00033a8d) cell_clock2_toolbar_pane_cp03

0x0c8d,	// (0x00033a95) list_clock2_pane

0xceaa,	// (0x0003fcb2) scroll_pane_cp10

0x0c95,	// (0x00033a9d) list_single_clock2_pane_ParamLimits

0x0c95,	// (0x00033a9d) list_single_clock2_pane

0xcfe4,	// (0x0003fdec) list_highlight_pane_cp08

0x0ca2,	// (0x00033aaa) list_single_clock2_pane_t1

0x0cb0,	// (0x00033ab8) list_single_clock2_pane_t2

0x0001,

0xfb6a,	// (0x00042972) list_single_clock2_pane_t

0x45e9,	// (0x000373f1) bg_button_pane_cp10

0x0cbe,	// (0x00033ac6) cell_clock2_toolbar_pane_g1

0x6f71,	// (0x00039d79) aid_main_viewer_pane_g1_ParamLimits

0x6f71,	// (0x00039d79) aid_main_viewer_pane_g1

0x6f7d,	// (0x00039d85) aid_main_viewer_pane_g2_ParamLimits

0x6f7d,	// (0x00039d85) aid_main_viewer_pane_g2

0x6f89,	// (0x00039d91) aid_main_viewer_pane_g3_ParamLimits

0x6f89,	// (0x00039d91) aid_main_viewer_pane_g3

0x6f9a,	// (0x00039da2) aid_main_viewer_pane_g4_ParamLimits

0x6f9a,	// (0x00039da2) aid_main_viewer_pane_g4

0x0003,

0xf4bd,	// (0x000422c5) aid_main_viewer_pane_g_ParamLimits

0xf4bd,	// (0x000422c5) aid_main_viewer_pane_g

0x772a,	// (0x0003a532) main_calc_pane_ParamLimits

0x7745,	// (0x0003a54d) main_dialer2_pane_ParamLimits

0x45e9,	// (0x000373f1) main_cam6_pane

0x45e9,	// (0x000373f1) main_vid6_pane

0x89ca,	// (0x0003b7d2) listscroll_gen_pane_cp06_ParamLimits

0x89ca,	// (0x0003b7d2) listscroll_gen_pane_cp06

0x8a9a,	// (0x0003b8a2) main_clock2_pane_t5_ParamLimits

0x8a9a,	// (0x0003b8a2) main_clock2_pane_t5

0x8ae9,	// (0x0003b8f1) aid_call2_pane_cp10_ParamLimits

0x8afb,	// (0x0003b903) aid_call_pane_cp10_ParamLimits

0xcf19,	// (0x0003fd21) popup_clock_analogue_window_cp10_g1_ParamLimits

0xcf19,	// (0x0003fd21) popup_clock_analogue_window_cp10_g2_ParamLimits

0x8b0d,	// (0x0003b915) popup_clock_analogue_window_cp10_g3_ParamLimits

0x8b0d,	// (0x0003b915) popup_clock_analogue_window_cp10_g4_ParamLimits

0xcf19,	// (0x0003fd21) popup_clock_analogue_window_cp10_g5_ParamLimits

0xf7f3,	// (0x000425fb) popup_clock_analogue_window_cp10_g_ParamLimits

0x8b1f,	// (0x0003b927) popup_clock_analogue_window_cp10_t1_ParamLimits

0x92c8,	// (0x0003c0d0) cell_dialer2_keypad_pane_g2_ParamLimits

0x92c8,	// (0x0003c0d0) cell_dialer2_keypad_pane_g2

0x0001,

0xf8d9,	// (0x000426e1) cell_dialer2_keypad_pane_g_ParamLimits

0xf8d9,	// (0x000426e1) cell_dialer2_keypad_pane_g

0x92e4,	// (0x0003c0ec) cell_dialer2_keypad_pane_t1

0x9ca2,	// (0x0003caaa) main_cset_text2_pane_ParamLimits

0x9ca2,	// (0x0003caaa) main_cset_text2_pane

0x0945,	// (0x0003374d) area_vitu2_query_pane_g1_ParamLimits

0x39f3,	// (0x000367fb) area_vitu2_query_pane_g2_ParamLimits

0xfa8e,	// (0x00042896) area_vitu2_query_pane_g_ParamLimits

0x3aa4,	// (0x000368ac) area_vitu2_query_pane_t7_ParamLimits

0x3aa4,	// (0x000368ac) area_vitu2_query_pane_t7

0xa41b,	// (0x0003d223) bg_button_pane_cp018_ParamLimits

0xa429,	// (0x0003d231) bg_button_pane_cp021_ParamLimits

0x3ac8,	// (0x000368d0) bg_button_pane_cp022_ParamLimits

0x3ac8,	// (0x000368d0) bg_vkb2_func_pane_cp08_ParamLimits

0xa41b,	// (0x0003d223) bg_vkb2_func_pane_cp06_ParamLimits

0xa429,	// (0x0003d231) bg_vkb2_func_pane_cp07_ParamLimits

0x3ad9,	// (0x000368e1) input_focus_pane_cp09_ParamLimits

0xa8b6,	// (0x0003d6be) cam6_autofocus_pane_ParamLimits

0xa8b6,	// (0x0003d6be) cam6_autofocus_pane

0xa8d8,	// (0x0003d6e0) cam6_image_uncrop_pane_ParamLimits

0xa8d8,	// (0x0003d6e0) cam6_image_uncrop_pane

0xa905,	// (0x0003d70d) cam6_indi_pane_ParamLimits

0xa905,	// (0x0003d70d) cam6_indi_pane

0xa91f,	// (0x0003d727) cam6_mode_pane_ParamLimits

0xa91f,	// (0x0003d727) cam6_mode_pane

0xa933,	// (0x0003d73b) cam6_timer_pane_ParamLimits

0xa933,	// (0x0003d73b) cam6_timer_pane

0xa93f,	// (0x0003d747) cam6_zoom_pane_ParamLimits

0xa93f,	// (0x0003d747) cam6_zoom_pane

0x96ae,	// (0x0003c4b6) cam6_mode_pane_g1_ParamLimits

0x96ae,	// (0x0003c4b6) cam6_mode_pane_g1

0x96c6,	// (0x0003c4ce) cam6_mode_pane_g2_ParamLimits

0x96c6,	// (0x0003c4ce) cam6_mode_pane_g2

0x96d2,	// (0x0003c4da) cam6_mode_pane_g3_ParamLimits

0x96d2,	// (0x0003c4da) cam6_mode_pane_g3

0x96de,	// (0x0003c4e6) cam6_mode_pane_g4_ParamLimits

0x96de,	// (0x0003c4e6) cam6_mode_pane_g4

0x0003,

0xfb6f,	// (0x00042977) cam6_mode_pane_g_ParamLimits

0xfb6f,	// (0x00042977) cam6_mode_pane_g

0x0cd4,	// (0x00033adc) bg_tb_trans_pane_cp08_ParamLimits

0x0cd4,	// (0x00033adc) bg_tb_trans_pane_cp08

0x0ce2,	// (0x00033aea) cam6_battery_pane_ParamLimits

0x0ce2,	// (0x00033aea) cam6_battery_pane

0x0cf8,	// (0x00033b00) cam6_indi_pane_g1_ParamLimits

0x0cf8,	// (0x00033b00) cam6_indi_pane_g1

0x0d0a,	// (0x00033b12) cam6_indi_pane_g2_ParamLimits

0x0d0a,	// (0x00033b12) cam6_indi_pane_g2

0x0d1c,	// (0x00033b24) cam6_indi_pane_g3_ParamLimits

0x0d1c,	// (0x00033b24) cam6_indi_pane_g3

0x0002,

0xfb78,	// (0x00042980) cam6_indi_pane_g_ParamLimits

0xfb78,	// (0x00042980) cam6_indi_pane_g

0x0d2e,	// (0x00033b36) cam6_indi_pane_t1_ParamLimits

0x0d2e,	// (0x00033b36) cam6_indi_pane_t1

0x978e,	// (0x0003c596) cam6_autofocus_pane_g1

0x9796,	// (0x0003c59e) cam6_autofocus_pane_g2

0x979e,	// (0x0003c5a6) cam6_autofocus_pane_g3

0x97a6,	// (0x0003c5ae) cam6_autofocus_pane_g4

0x0003,

0xfb7f,	// (0x00042987) cam6_autofocus_pane_g

0x0d54,	// (0x00033b5c) cam6_timer_pane_g1

0x0d5c,	// (0x00033b64) cam6_timer_pane_t1

0x0d6a,	// (0x00033b72) cam6_zoom_cont_pane

0x0d72,	// (0x00033b7a) cam6_zoom_pane_g1

0x0d7a,	// (0x00033b82) cam6_zoom_pane_g2

0xa95d,	// (0x0003d765) cam6_zoom_pane_g3

0x0002,

0xfb88,	// (0x00042990) cam6_zoom_pane_g

0xe896,	// (0x0004169e) cam6_battery_pane_g1

0xe896,	// (0x0004169e) cam6_battery_pane_g2

0x0001,

0xf700,	// (0x00042508) cam6_battery_pane_g

0x0d82,	// (0x00033b8a) cam6_zoom_cont_pane_g1

0x0d8b,	// (0x00033b93) cam6_zoom_cont_pane_g2

0x0d94,	// (0x00033b9c) cam6_zoom_cont_pane_g3

0x0002,

0xfb8f,	// (0x00042997) cam6_zoom_cont_pane_g

0xa97a,	// (0x0003d782) cam6_mode_pane_cp_ParamLimits

0xa97a,	// (0x0003d782) cam6_mode_pane_cp

0xa93f,	// (0x0003d747) cam6_zoom_pane_cp_ParamLimits

0xa93f,	// (0x0003d747) cam6_zoom_pane_cp

0xa98e,	// (0x0003d796) vid6_image_uncrop_cif_pane_ParamLimits

0xa98e,	// (0x0003d796) vid6_image_uncrop_cif_pane

0xa9ba,	// (0x0003d7c2) vid6_image_uncrop_nhd_pane_ParamLimits

0xa9ba,	// (0x0003d7c2) vid6_image_uncrop_nhd_pane

0xa8d8,	// (0x0003d6e0) vid6_image_uncrop_vga_pane_ParamLimits

0xa8d8,	// (0x0003d6e0) vid6_image_uncrop_vga_pane

0xa9d9,	// (0x0003d7e1) vid6_image_uncrop_wvga_pane_ParamLimits

0xa9d9,	// (0x0003d7e1) vid6_image_uncrop_wvga_pane

0xa9f8,	// (0x0003d800) vid6_indi_pane_ParamLimits

0xa9f8,	// (0x0003d800) vid6_indi_pane

0x0cd4,	// (0x00033adc) bg_tb_trans_pane_cp09_ParamLimits

0x0cd4,	// (0x00033adc) bg_tb_trans_pane_cp09

0x0dac,	// (0x00033bb4) cam6_battery_pane_cp_ParamLimits

0x0dac,	// (0x00033bb4) cam6_battery_pane_cp

0x0db8,	// (0x00033bc0) vid6_indi_pane_g1_ParamLimits

0x0db8,	// (0x00033bc0) vid6_indi_pane_g1

0x0dca,	// (0x00033bd2) vid6_indi_pane_g2_ParamLimits

0x0dca,	// (0x00033bd2) vid6_indi_pane_g2

0x0ddc,	// (0x00033be4) vid6_indi_pane_g3_ParamLimits

0x0ddc,	// (0x00033be4) vid6_indi_pane_g3

0x0df3,	// (0x00033bfb) vid6_indi_pane_g4_ParamLimits

0x0df3,	// (0x00033bfb) vid6_indi_pane_g4

0x0e0a,	// (0x00033c12) vid6_indi_pane_g5_ParamLimits

0x0e0a,	// (0x00033c12) vid6_indi_pane_g5

0x0004,

0xfb96,	// (0x0004299e) vid6_indi_pane_g_ParamLimits

0xfb96,	// (0x0004299e) vid6_indi_pane_g

0x0e24,	// (0x00033c2c) vid6_indi_pane_t1_ParamLimits

0x0e24,	// (0x00033c2c) vid6_indi_pane_t1

0x0e3a,	// (0x00033c42) vid6_indi_pane_t2_ParamLimits

0x0e3a,	// (0x00033c42) vid6_indi_pane_t2

0x0e62,	// (0x00033c6a) vid6_indi_pane_t3_ParamLimits

0x0e62,	// (0x00033c6a) vid6_indi_pane_t3

0x0e8a,	// (0x00033c92) vid6_indi_pane_t4_ParamLimits

0x0e8a,	// (0x00033c92) vid6_indi_pane_t4

0x0003,

0xfba1,	// (0x000429a9) vid6_indi_pane_t_ParamLimits

0xfba1,	// (0x000429a9) vid6_indi_pane_t

0x0eae,	// (0x00033cb6) wait_bar_pane_cp08

0xaa1d,	// (0x0003d825) main_cset_text2_pane_t1_ParamLimits

0xaa1d,	// (0x0003d825) main_cset_text2_pane_t1

0xa965,	// (0x0003d76d) listscroll_gen_pane_cp06_t1_ParamLimits

0xa965,	// (0x0003d76d) listscroll_gen_pane_cp06_t1

0x45e9,	// (0x000373f1) main_cam6_set_pane

0xeac6,	// (0x000418ce) bg_tb_trans_pane_cp06_ParamLimits

0x9657,	// (0x0003c45f) cam4_indicators_pane_g1_ParamLimits

0x9664,	// (0x0003c46c) cam4_indicators_pane_g2_ParamLimits

0xf916,	// (0x0004271e) cam4_indicators_pane_g_ParamLimits

0x9684,	// (0x0003c48c) cam4_indicators_pane_t1_ParamLimits

0x7737,	// (0x0003a53f) bg_tb_trans_pane_cp07_ParamLimits

0x9657,	// (0x0003c45f) vid4_indicators_pane_g1_ParamLimits

0x973a,	// (0x0003c542) vid4_indicators_pane_g2_ParamLimits

0x9747,	// (0x0003c54f) vid4_indicators_pane_g3_ParamLimits

0x9758,	// (0x0003c560) vid4_indicators_pane_g4_ParamLimits

0xf928,	// (0x00042730) vid4_indicators_pane_g_ParamLimits

0x9774,	// (0x0003c57c) vid4_indicators_pane_t1_ParamLimits

0xa545,	// (0x0003d34d) vid4_progress_pane_g1_ParamLimits

0xa551,	// (0x0003d359) vid4_progress_pane_g2_ParamLimits

0xa55d,	// (0x0003d365) vid4_progress_pane_g3_ParamLimits

0xa56c,	// (0x0003d374) vid4_progress_pane_g4_ParamLimits

0xfad9,	// (0x000428e1) vid4_progress_pane_g_ParamLimits

0xa58a,	// (0x0003d392) vid4_progress_pane_t1_ParamLimits

0xa5a0,	// (0x0003d3a8) vid4_progress_pane_t2_ParamLimits

0xa5b6,	// (0x0003d3be) vid4_progress_pane_t3_ParamLimits

0xfae4,	// (0x000428ec) vid4_progress_pane_t_ParamLimits

0xa5cb,	// (0x0003d3d3) wait_bar_pane_cp07_ParamLimits

0xaa44,	// (0x0003d84c) main_cam6_set_pane_g2_ParamLimits

0xaa44,	// (0x0003d84c) main_cam6_set_pane_g2

0xaa50,	// (0x0003d858) main_cset6_listscroll_pane_ParamLimits

0xaa50,	// (0x0003d858) main_cset6_listscroll_pane

0xaa7d,	// (0x0003d885) main_cset6_slider_pane_ParamLimits

0xaa7d,	// (0x0003d885) main_cset6_slider_pane

0xaa89,	// (0x0003d891) main_cset6_text2_pane_ParamLimits

0xaa89,	// (0x0003d891) main_cset6_text2_pane

0x0ebd,	// (0x00033cc5) main_cset6_text_pane

0x0ec5,	// (0x00033ccd) main_cset_list_pane_copy1_ParamLimits

0x0ec5,	// (0x00033ccd) main_cset_list_pane_copy1

0x0ed5,	// (0x00033cdd) scroll_pane_cp028_copy1

0xaa9c,	// (0x0003d8a4) cset_list_set_pane_copy1

0xaaac,	// (0x0003d8b4) aid_position_infowindow_above_copy1

0xaab4,	// (0x0003d8bc) aid_position_infowindow_below_copy1

0x3b32,	// (0x0003693a) cset_list_set_pane_g1_copy1

0x3b3a,	// (0x00036942) cset_list_set_pane_g3_copy1_ParamLimits

0x3b3a,	// (0x00036942) cset_list_set_pane_g3_copy1

0x3b49,	// (0x00036951) cset_list_set_pane_t1_copy1_ParamLimits

0x3b49,	// (0x00036951) cset_list_set_pane_t1_copy1

0x7737,	// (0x0003a53f) list_highlight_pane_cp021_copy1_ParamLimits

0x7737,	// (0x0003a53f) list_highlight_pane_cp021_copy1

0x0f02,	// (0x00033d0a) cset6_slider_pane_ParamLimits

0x0f02,	// (0x00033d0a) cset6_slider_pane

0x0f2e,	// (0x00033d36) main_cset6_slider_pane_g1_ParamLimits

0x0f2e,	// (0x00033d36) main_cset6_slider_pane_g1

0xaabc,	// (0x0003d8c4) main_cset6_slider_pane_g2_ParamLimits

0xaabc,	// (0x0003d8c4) main_cset6_slider_pane_g2

0x0f56,	// (0x00033d5e) main_cset6_slider_pane_g3_ParamLimits

0x0f56,	// (0x00033d5e) main_cset6_slider_pane_g3

0xaae4,	// (0x0003d8ec) main_cset6_slider_pane_g4_ParamLimits

0xaae4,	// (0x0003d8ec) main_cset6_slider_pane_g4

0xaaf0,	// (0x0003d8f8) main_cset6_slider_pane_g5_ParamLimits

0xaaf0,	// (0x0003d8f8) main_cset6_slider_pane_g5

0x0568,	// (0x00033370) main_cset6_slider_pane_g7_ParamLimits

0x0568,	// (0x00033370) main_cset6_slider_pane_g7

0x0574,	// (0x0003337c) main_cset6_slider_pane_g8_ParamLimits

0x0574,	// (0x0003337c) main_cset6_slider_pane_g8

0xaafc,	// (0x0003d904) main_cset6_slider_pane_g9_ParamLimits

0xaafc,	// (0x0003d904) main_cset6_slider_pane_g9

0xab08,	// (0x0003d910) main_cset6_slider_pane_g10_ParamLimits

0xab08,	// (0x0003d910) main_cset6_slider_pane_g10

0xab14,	// (0x0003d91c) main_cset6_slider_pane_g11_ParamLimits

0xab14,	// (0x0003d91c) main_cset6_slider_pane_g11

0xab20,	// (0x0003d928) main_cset6_slider_pane_g12_ParamLimits

0xab20,	// (0x0003d928) main_cset6_slider_pane_g12

0xab2c,	// (0x0003d934) main_cset6_slider_pane_g13_ParamLimits

0xab2c,	// (0x0003d934) main_cset6_slider_pane_g13

0xab38,	// (0x0003d940) main_cset6_slider_pane_g14_ParamLimits

0xab38,	// (0x0003d940) main_cset6_slider_pane_g14

0xab44,	// (0x0003d94c) main_cset6_slider_pane_g15_ParamLimits

0xab44,	// (0x0003d94c) main_cset6_slider_pane_g15

0xab5c,	// (0x0003d964) main_cset6_slider_pane_g16_ParamLimits

0xab5c,	// (0x0003d964) main_cset6_slider_pane_g16

0xab68,	// (0x0003d970) main_cset6_slider_pane_g17_ParamLimits

0xab68,	// (0x0003d970) main_cset6_slider_pane_g17

0x0011,

0xfbaa,	// (0x000429b2) main_cset6_slider_pane_g_ParamLimits

0xfbaa,	// (0x000429b2) main_cset6_slider_pane_g

0x0f62,	// (0x00033d6a) main_cset6_slider_pane_t1_ParamLimits

0x0f62,	// (0x00033d6a) main_cset6_slider_pane_t1

0xab8c,	// (0x0003d994) main_cset6_slider_pane_t2_ParamLimits

0xab8c,	// (0x0003d994) main_cset6_slider_pane_t2

0xabb7,	// (0x0003d9bf) main_cset6_slider_pane_t3_ParamLimits

0xabb7,	// (0x0003d9bf) main_cset6_slider_pane_t3

0xabe2,	// (0x0003d9ea) main_cset6_slider_pane_t4_ParamLimits

0xabe2,	// (0x0003d9ea) main_cset6_slider_pane_t4

0xac0d,	// (0x0003da15) main_cset6_slider_pane_t5_ParamLimits

0xac0d,	// (0x0003da15) main_cset6_slider_pane_t5

0x0fa3,	// (0x00033dab) main_cset6_slider_pane_t7_ParamLimits

0x0fa3,	// (0x00033dab) main_cset6_slider_pane_t7

0xac38,	// (0x0003da40) main_cset6_slider_pane_t8_ParamLimits

0xac38,	// (0x0003da40) main_cset6_slider_pane_t8

0xac5c,	// (0x0003da64) main_cset6_slider_pane_t9_ParamLimits

0xac5c,	// (0x0003da64) main_cset6_slider_pane_t9

0xac80,	// (0x0003da88) main_cset6_slider_pane_t10_ParamLimits

0xac80,	// (0x0003da88) main_cset6_slider_pane_t10

0xaca4,	// (0x0003daac) main_cset6_slider_pane_t11_ParamLimits

0xaca4,	// (0x0003daac) main_cset6_slider_pane_t11

0x0fd9,	// (0x00033de1) main_cset6_slider_pane_t14_ParamLimits

0x0fd9,	// (0x00033de1) main_cset6_slider_pane_t14

0x1012,	// (0x00033e1a) main_cset6_slider_pane_t15_ParamLimits

0x1012,	// (0x00033e1a) main_cset6_slider_pane_t15

0x000b,

0xfbcf,	// (0x000429d7) main_cset6_slider_pane_t_ParamLimits

0xfbcf,	// (0x000429d7) main_cset6_slider_pane_t

0x104b,	// (0x00033e53) cset_slider_pane_g1_copy1

0x1054,	// (0x00033e5c) cset_slider_pane_g2_copy1

0x105d,	// (0x00033e65) cset_slider_pane_g3_copy1

0x45e9,	// (0x000373f1) bg_popup_sub_pane_cp011_copy1

0x0759,	// (0x00033561) main_cset_text_pane_g1_copy1

0x0761,	// (0x00033569) main_cset_text_pane_t1_copy1

0x076f,	// (0x00033577) main_cset_text_pane_t2_copy1

0x077d,	// (0x00033585) main_cset_text_pane_t3_copy1

0x078b,	// (0x00033593) main_cset_text_pane_t4_copy1

0x0799,	// (0x000335a1) main_cset_text_pane_t5_copy1

0x07a7,	// (0x000335af) main_cset_text_pane_t6_copy1

0x07b5,	// (0x000335bd) main_cset_text_pane_t7_copy1

0xacc8,	// (0x0003dad0) main_cset_text2_pane_t1_copy1

0x45e9,	// (0x000373f1) main_ncimui_pane

0x778a,	// (0x0003a592) popup_query_ncimui_window_ParamLimits

0x778a,	// (0x0003a592) popup_query_ncimui_window

0x3731,	// (0x00036539) field_cale_ev2_pane_g4_ParamLimits

0x3731,	// (0x00036539) field_cale_ev2_pane_g4

0x9008,	// (0x0003be10) cell_video_dialer_keypad_pane_g2_ParamLimits

0x9008,	// (0x0003be10) cell_video_dialer_keypad_pane_g2

0x0001,

0xf8b4,	// (0x000426bc) cell_video_dialer_keypad_pane_g_ParamLimits

0xf8b4,	// (0x000426bc) cell_video_dialer_keypad_pane_g

0x9020,	// (0x0003be28) cell_video_dialer_keypad_pane_t1

0x45e9,	// (0x000373f1) bg_popup_window_pane_cp012

0xcd96,	// (0x0003fb9e) heading_pane_cp06

0x1155,	// (0x00033f5d) ncim_query_content_pane

0x45e9,	// (0x000373f1) bg_popup_heading_pane_cp01

0x115d,	// (0x00033f65) ncim_heading_pane_t1

0x116b,	// (0x00033f73) ncim_indicator_popup_pane

0x117d,	// (0x00033f85) ncim_query_button_pane

0x1193,	// (0x00033f9b) ncim_query_content_pane_t1

0x11a5,	// (0x00033fad) ncim_query_content_pane_t2

0x0005,

0xfc0e,	// (0x00042a16) ncim_query_content_pane_t

0x11df,	// (0x00033fe7) ncim_query_list_pane

0x11f1,	// (0x00033ff9) ncim_query_popup_pane

0x116b,	// (0x00033f73) ncim_indicator_popup_pane_ParamLimits

0xadf3,	// (0x0003dbfb) ncim_query_content_pane_g1_ParamLimits

0xadf3,	// (0x0003dbfb) ncim_query_content_pane_g1

0x1193,	// (0x00033f9b) ncim_query_content_pane_t1_ParamLimits

0x11a5,	// (0x00033fad) ncim_query_content_pane_t2_ParamLimits

0xadff,	// (0x0003dc07) ncim_query_content_pane_t3_ParamLimits

0xadff,	// (0x0003dc07) ncim_query_content_pane_t3

0xae1c,	// (0x0003dc24) ncim_query_content_pane_t4_ParamLimits

0xae1c,	// (0x0003dc24) ncim_query_content_pane_t4

0xae39,	// (0x0003dc41) ncim_query_content_pane_t5_ParamLimits

0xae39,	// (0x0003dc41) ncim_query_content_pane_t5

0x11b7,	// (0x00033fbf) ncim_query_content_pane_t6_ParamLimits

0x11b7,	// (0x00033fbf) ncim_query_content_pane_t6

0xfc0e,	// (0x00042a16) ncim_query_content_pane_t_ParamLimits

0x11df,	// (0x00033fe7) ncim_query_list_pane_ParamLimits

0x11f1,	// (0x00033ff9) ncim_query_popup_pane_ParamLimits

0x1205,	// (0x0003400d) wait_bar_pane_cp04

0x45e9,	// (0x000373f1) input_focus_pane_cp011

0x120d,	// (0x00034015) ncim_query_popup_pane_t1

0x121b,	// (0x00034023) ncim_list_query_list_pane_ParamLimits

0x121b,	// (0x00034023) ncim_list_query_list_pane

0x45e9,	// (0x000373f1) bg_button_pane_cp027

0x122e,	// (0x00034036) ncim_query_button_pane_g1

0x45e9,	// (0x000373f1) list_highlight_pane_cp012

0x1238,	// (0x00034040) ncim_list_query_list_pane_g1

0x1240,	// (0x00034048) ncim_list_query_list_pane_t1

0x9674,	// (0x0003c47c) cam4_indicators_pane_g3_ParamLimits

0x9674,	// (0x0003c47c) cam4_indicators_pane_g3

0x9764,	// (0x0003c56c) vid4_indicators_pane_g5_ParamLimits

0x9764,	// (0x0003c56c) vid4_indicators_pane_g5

0xa57b,	// (0x0003d383) vid4_progress_pane_g5_ParamLimits

0xa57b,	// (0x0003d383) vid4_progress_pane_g5

0xacfa,	// (0x0003db02) main_ncimui_pane_g1

0xad54,	// (0x0003db5c) ncimui_group_query_pane_ParamLimits

0xad54,	// (0x0003db5c) ncimui_group_query_pane

0xad9e,	// (0x0003dba6) ncimui_list_pane_ParamLimits

0xad9e,	// (0x0003dba6) ncimui_list_pane

0xadbf,	// (0x0003dbc7) ncimui_text_pane_ParamLimits

0xadbf,	// (0x0003dbc7) ncimui_text_pane

0xae56,	// (0x0003dc5e) ncimui_text_pane_t1_ParamLimits

0xae56,	// (0x0003dc5e) ncimui_text_pane_t1

0x124e,	// (0x00034056) ncimui_list_single_graphic_pane_ParamLimits

0x124e,	// (0x00034056) ncimui_list_single_graphic_pane

0xae75,	// (0x0003dc7d) ncimui_query_pane_ParamLimits

0xae75,	// (0x0003dc7d) ncimui_query_pane

0x45e9,	// (0x000373f1) list_highlight_pane_cp013

0x125e,	// (0x00034066) ncim_list_query_list_pane_t1_copy1

0x1238,	// (0x00034040) ncim_list_single_graphic_pane_g1

0x126c,	// (0x00034074) ncim_query_button_pane_cp01

0x1278,	// (0x00034080) ncim_query_entry_pane_ParamLimits

0x1278,	// (0x00034080) ncim_query_entry_pane

0x128b,	// (0x00034093) ncimui_query_pane_g1

0x1297,	// (0x0003409f) ncimui_query_pane_t1_ParamLimits

0x1297,	// (0x0003409f) ncimui_query_pane_t1

0x7737,	// (0x0003a53f) input_focus_pane_cp012

0x12b0,	// (0x000340b8) ncim_query_entry_pane_t1

0xc590,	// (0x0003f398) main_im_pane_ParamLimits

0x7737,	// (0x0003a53f) main_mobtv_pane_ParamLimits

0x7737,	// (0x0003a53f) main_mobtv_pane

0xab74,	// (0x0003d97c) main_cset6_slider_pane_g18_ParamLimits

0xab74,	// (0x0003d97c) main_cset6_slider_pane_g18

0xab80,	// (0x0003d988) main_cset6_slider_pane_g19_ParamLimits

0xab80,	// (0x0003d988) main_cset6_slider_pane_g19

0x03ea,	// (0x000331f2) bg_main_mobtv_pane_ParamLimits

0x03ea,	// (0x000331f2) bg_main_mobtv_pane

0xae88,	// (0x0003dc90) main_mobtv_info_pane

0xae93,	// (0x0003dc9b) main_mobtv_loading_pane_ParamLimits

0xae93,	// (0x0003dc9b) main_mobtv_loading_pane

0x12d0,	// (0x000340d8) main_mobtv_pg_channel_list_pane

0x12da,	// (0x000340e2) main_mobtv_pg_hdr_pane

0xaea0,	// (0x0003dca8) main_mobtv_programe_curr_pane_ParamLimits

0xaea0,	// (0x0003dca8) main_mobtv_programe_curr_pane

0xaead,	// (0x0003dcb5) main_mobtv_programe_next_pane_ParamLimits

0xaead,	// (0x0003dcb5) main_mobtv_programe_next_pane

0x12e3,	// (0x000340eb) popup_mobtv_noti_window

0xe896,	// (0x0004169e) main_tv_pg_hdr_pane_g1

0x12ed,	// (0x000340f5) main_tv_pg_hdr_pane_g2

0x12f5,	// (0x000340fd) main_tv_pg_hdr_pane_g3

0x12fd,	// (0x00034105) main_tv_pg_hdr_pane_g4

0x1305,	// (0x0003410d) main_tv_pg_hdr_pane_g5

0x130f,	// (0x00034117) main_tv_pg_hdr_pane_g6

0x1319,	// (0x00034121) main_tv_pg_hdr_pane_g7

0x1323,	// (0x0003412b) main_tv_pg_hdr_pane_g8

0x132d,	// (0x00034135) main_tv_pg_hdr_pane_g9

0x1337,	// (0x0003413f) main_tv_pg_hdr_pane_g10

0x1341,	// (0x00034149) main_tv_pg_hdr_pane_g11

0x000a,

0xfc1b,	// (0x00042a23) main_tv_pg_hdr_pane_g

0x134b,	// (0x00034153) main_tv_pg_hdr_pane_t1

0x1359,	// (0x00034161) main_tv_pg_hdr_pane_t2

0x1367,	// (0x0003416f) main_tv_pg_hdr_pane_t3

0x1377,	// (0x0003417f) main_tv_pg_hdr_pane_t4

0x1387,	// (0x0003418f) main_tv_pg_hdr_pane_t5

0x0004,

0xfc32,	// (0x00042a3a) main_tv_pg_hdr_pane_t

0x1397,	// (0x0003419f) single_mobtv_pg_channel_pane_ParamLimits

0x1397,	// (0x0003419f) single_mobtv_pg_channel_pane

0x13a9,	// (0x000341b1) single_mobtv_pg_channel_table_pane

0x13b2,	// (0x000341ba) single_mobtv_pg_channel_thumb_pane

0x13bb,	// (0x000341c3) single_tv_pg_channel_pane_g1

0x13c4,	// (0x000341cc) single_tv_pg_channel_pane_g2

0x0001,

0xfc3d,	// (0x00042a45) single_tv_pg_channel_pane_g

0xeac6,	// (0x000418ce) bg_single_mobtv_pg_channel_thumb_pane_ParamLimits

0xeac6,	// (0x000418ce) bg_single_mobtv_pg_channel_thumb_pane

0x13cd,	// (0x000341d5) single_mobtv_pg_channel_thumb_pane_g1_ParamLimits

0x13cd,	// (0x000341d5) single_mobtv_pg_channel_thumb_pane_g1

0x13db,	// (0x000341e3) single_mobtv_pg_channel_thumb_pane_g2_ParamLimits

0x13db,	// (0x000341e3) single_mobtv_pg_channel_thumb_pane_g2

0x13e7,	// (0x000341ef) single_mobtv_pg_channel_thumb_pane_g3_ParamLimits

0x13e7,	// (0x000341ef) single_mobtv_pg_channel_thumb_pane_g3

0x0002,

0xfc42,	// (0x00042a4a) single_mobtv_pg_channel_thumb_pane_g_ParamLimits

0xfc42,	// (0x00042a4a) single_mobtv_pg_channel_thumb_pane_g

0x13f3,	// (0x000341fb) single_mobtv_pg_channel_thumb_pane_t1

0x1401,	// (0x00034209) single_mobtv_pg_channel_thumb_pane_t2

0x0001,

0xfc49,	// (0x00042a51) single_mobtv_pg_channel_thumb_pane_t

0xe896,	// (0x0004169e) bg_single_mobtv_pg_channel_table_pane_g1

0xe896,	// (0x0004169e) bg_single_mobtv_pg_channel_table_pane_g2

0x0001,

0xf700,	// (0x00042508) bg_single_mobtv_pg_channel_table_pane_g

0x140f,	// (0x00034217) single_mobtv_pg_channel_table_pane_t1

0x141d,	// (0x00034225) single_mobtv_pg_channel_table_pane_t2

0x0001,

0xfc4e,	// (0x00042a56) single_mobtv_pg_channel_table_pane_t

0xaec2,	// (0x0003dcca) main_mobtv_info_pane_g1_ParamLimits

0xaec2,	// (0x0003dcca) main_mobtv_info_pane_g1

0xaede,	// (0x0003dce6) main_mobtv_info_pane_t1_ParamLimits

0xaede,	// (0x0003dce6) main_mobtv_info_pane_t1

0xaf56,	// (0x0003dd5e) main_mobtv_info_pane_t2_ParamLimits

0xaf56,	// (0x0003dd5e) main_mobtv_info_pane_t2

0x0002,

0xfc58,	// (0x00042a60) main_mobtv_info_pane_t_ParamLimits

0xfc58,	// (0x00042a60) main_mobtv_info_pane_t

0xafe9,	// (0x0003ddf1) wait_bar_pane_cp05

0xaffb,	// (0x0003de03) main_mobtv_loading_pane_g1_ParamLimits

0xaffb,	// (0x0003de03) main_mobtv_loading_pane_g1

0xb007,	// (0x0003de0f) main_mobtv_loading_pane_g2_ParamLimits

0xb007,	// (0x0003de0f) main_mobtv_loading_pane_g2

0xb013,	// (0x0003de1b) main_mobtv_loading_pane_g3_ParamLimits

0xb013,	// (0x0003de1b) main_mobtv_loading_pane_g3

0x0002,

0xfc5f,	// (0x00042a67) main_mobtv_loading_pane_g_ParamLimits

0xfc5f,	// (0x00042a67) main_mobtv_loading_pane_g

0x142b,	// (0x00034233) main_mobtv_loading_pane_t1_ParamLimits

0x142b,	// (0x00034233) main_mobtv_loading_pane_t1

0x1443,	// (0x0003424b) main_mobtv_loading_pane_t2_ParamLimits

0x1443,	// (0x0003424b) main_mobtv_loading_pane_t2

0x0001,

0xfc66,	// (0x00042a6e) main_mobtv_loading_pane_t_ParamLimits

0xfc66,	// (0x00042a6e) main_mobtv_loading_pane_t

0xb021,	// (0x0003de29) wait_bar_pane_cp06_ParamLimits

0xb021,	// (0x0003de29) wait_bar_pane_cp06

0x1467,	// (0x0003426f) main_mobtv_programe_curr_pane_t1

0x1475,	// (0x0003427d) main_mobtv_programe_curr_pane_t2

0x0001,

0xfc6b,	// (0x00042a73) main_mobtv_programe_curr_pane_t

0x1483,	// (0x0003428b) main_mobtv_programe_next_pane_t1

0x1491,	// (0x00034299) main_mobtv_programe_next_pane_t2

0x149f,	// (0x000342a7) main_mobtv_programe_next_pane_t3

0x0002,

0xfc70,	// (0x00042a78) main_mobtv_programe_next_pane_t

0x45e9,	// (0x000373f1) bg_popup_mobtv_noti_window_pane

0x14ad,	// (0x000342b5) popup_mobtv_noti_window_g1

0x14b5,	// (0x000342bd) popup_mobtv_noti_window_t1

0x14c3,	// (0x000342cb) popup_mobtv_noti_window_t2

0x0001,

0xfc77,	// (0x00042a7f) popup_mobtv_noti_window_t

0xe896,	// (0x0004169e) bg_popup_mobtv_noti_window_pane_g1

0x45e9,	// (0x000373f1) sc_clock_pane

0x45e9,	// (0x000373f1) main_fs_bigclock_pane

0xa765,	// (0x0003d56d) blid2_tripm_pane_t4_ParamLimits

0xa765,	// (0x0003d56d) blid2_tripm_pane_t4

0xb02d,	// (0x0003de35) sc_clock_pane_g1_ParamLimits

0xb02d,	// (0x0003de35) sc_clock_pane_g1

0xb03b,	// (0x0003de43) sc_clock_pane_t1_ParamLimits

0xb03b,	// (0x0003de43) sc_clock_pane_t1

0xb050,	// (0x0003de58) sc_clock_pane_t2_ParamLimits

0xb050,	// (0x0003de58) sc_clock_pane_t2

0xb062,	// (0x0003de6a) sc_clock_pane_t3_ParamLimits

0xb062,	// (0x0003de6a) sc_clock_pane_t3

0x0004,

0xfc7c,	// (0x00042a84) sc_clock_pane_t_ParamLimits

0xfc7c,	// (0x00042a84) sc_clock_pane_t

0xb84a,	// (0x0003e652) main_fs_bigclock_indicator_pane_ParamLimits

0xb84a,	// (0x0003e652) main_fs_bigclock_indicator_pane

0xb0e9,	// (0x0003def1) main_fs_bigclock_pane_g1_ParamLimits

0xb0e9,	// (0x0003def1) main_fs_bigclock_pane_g1

0xb856,	// (0x0003e65e) main_fs_bigclock_pane_t1_ParamLimits

0xb856,	// (0x0003e65e) main_fs_bigclock_pane_t1

0xb868,	// (0x0003e670) main_fs_bigclock_pane_t2_ParamLimits

0xb868,	// (0x0003e670) main_fs_bigclock_pane_t2

0xb87c,	// (0x0003e684) main_fs_bigclock_pane_t3_ParamLimits

0xb87c,	// (0x0003e684) main_fs_bigclock_pane_t3

0x0002,

0xfe7b,	// (0x00042c83) main_fs_bigclock_pane_t_ParamLimits

0xfe7b,	// (0x00042c83) main_fs_bigclock_pane_t

0x213b,	// (0x00034f43) main_fs_bigclock_indicator_pane_g1

0x1185,	// (0x00033f8d) ncim_query_content_pane_g2_ParamLimits

0x1185,	// (0x00033f8d) ncim_query_content_pane_g2

0x0001,

0xfc09,	// (0x00042a11) ncim_query_content_pane_g_ParamLimits

0xfc09,	// (0x00042a11) ncim_query_content_pane_g

0xb074,	// (0x0003de7c) sc_clock_pane_t4_ParamLimits

0xb074,	// (0x0003de7c) sc_clock_pane_t4

0x7737,	// (0x0003a53f) main_radioblah_pane

0x028c,	// (0x00033094) cell_call4_button_pane_t1_copy1_ParamLimits

0x028c,	// (0x00033094) cell_call4_button_pane_t1_copy1

0xad04,	// (0x0003db0c) main_ncimui_pane_t1_ParamLimits

0xad04,	// (0x0003db0c) main_ncimui_pane_t1

0xad1e,	// (0x0003db26) main_ncimui_pane_t2_ParamLimits

0xad1e,	// (0x0003db26) main_ncimui_pane_t2

0x0002,

0xfc02,	// (0x00042a0a) main_ncimui_pane_t_ParamLimits

0xfc02,	// (0x00042a0a) main_ncimui_pane_t

0x15fb,	// (0x00034403) main_radioblah_anim_pane_ParamLimits

0x15fb,	// (0x00034403) main_radioblah_anim_pane

0x160c,	// (0x00034414) main_radioblah_info_pane_ParamLimits

0x160c,	// (0x00034414) main_radioblah_info_pane

0x1620,	// (0x00034428) main_radioblah_pane_t1_ParamLimits

0x1620,	// (0x00034428) main_radioblah_pane_t1

0x163c,	// (0x00034444) main_radioblah_pane_t2_ParamLimits

0x163c,	// (0x00034444) main_radioblah_pane_t2

0x0003,

0xfc9d,	// (0x00042aa5) main_radioblah_pane_t_ParamLimits

0xfc9d,	// (0x00042aa5) main_radioblah_pane_t

0xb13d,	// (0x0003df45) main_radioblah_rocker_ctrl_pane_ParamLimits

0xb13d,	// (0x0003df45) main_radioblah_rocker_ctrl_pane

0x1684,	// (0x0003448c) main_radioblah_info_pane_t1_ParamLimits

0x1684,	// (0x0003448c) main_radioblah_info_pane_t1

0xb186,	// (0x0003df8e) main_radioblah_info_pane_t2_ParamLimits

0xb186,	// (0x0003df8e) main_radioblah_info_pane_t2

0x0003,

0xfca6,	// (0x00042aae) main_radioblah_info_pane_t_ParamLimits

0xfca6,	// (0x00042aae) main_radioblah_info_pane_t

0xe896,	// (0x0004169e) main_radioblah_rocker_ctrl_pane_g1

0xb236,	// (0x0003e03e) main_radioblah_rocker_ctrl_pane_g2

0xb23e,	// (0x0003e046) main_radioblah_rocker_ctrl_pane_g3

0xb246,	// (0x0003e04e) main_radioblah_rocker_ctrl_pane_g4

0xb24e,	// (0x0003e056) main_radioblah_rocker_ctrl_pane_g5

0xb256,	// (0x0003e05e) main_radioblah_rocker_ctrl_pane_g6

0x0005,

0xfcaf,	// (0x00042ab7) main_radioblah_rocker_ctrl_pane_g

0xacc8,	// (0x0003dad0) main_cset_text2_pane_t1_copy1_ParamLimits

0x95a1,	// (0x0003c3a9) cam4_image_uncrop_qvga_pane

0x96ea,	// (0x0003c4f2) vid4_image_uncrop_qcif_pane

0xa8f7,	// (0x0003d6ff) cam6_image_uncrop_qvga_pane_ParamLimits

0xa8f7,	// (0x0003d6ff) cam6_image_uncrop_qvga_pane

0x0d9c,	// (0x00033ba4) vid6_image_uncrop_qcif_pane_ParamLimits

0x0d9c,	// (0x00033ba4) vid6_image_uncrop_qcif_pane

0x45e9,	// (0x000373f1) bg_popup_preview_window_pane_cp03

0x1137,	// (0x00033f3f) list_cset_text2_pane

0x113f,	// (0x00033f47) main_cset6_text2_pane_g1

0x1147,	// (0x00033f4f) main_cset6_text2_pane_t1

0xb25e,	// (0x0003e066) list_cset_text2_pane_t1_ParamLimits

0xb25e,	// (0x0003e066) list_cset_text2_pane_t1

0x7737,	// (0x0003a53f) main_radioblah_pane_ParamLimits

0xafd5,	// (0x0003dddd) main_mobtv_info_pane_t3_ParamLimits

0xafd5,	// (0x0003dddd) main_mobtv_info_pane_t3

0xb12b,	// (0x0003df33) main_radioblah_pane_g1

0xb156,	// (0x0003df5e) main_radioblah_info_pane_g1

0xb1db,	// (0x0003dfe3) main_radioblah_info_pane_t3_ParamLimits

0xb1db,	// (0x0003dfe3) main_radioblah_info_pane_t3

0x646f,	// (0x00039277) highlight_cell_cale_month_pane_ParamLimits

0x646f,	// (0x00039277) highlight_cell_cale_month_pane

0x45e9,	// (0x000373f1) main_phob_fisheye_pane

0xeba8,	// (0x000419b0) scroll_pane_cp0031_ParamLimits

0xeba8,	// (0x000419b0) scroll_pane_cp0031

0x0eae,	// (0x00033cb6) wait_bar_pane_cp08_ParamLimits

0xaa9c,	// (0x0003d8a4) cset_list_set_pane_copy1_ParamLimits

0x16d8,	// (0x000344e0) highlight_cell_cale_month_pane_g1

0xb277,	// (0x0003e07f) highlight_cell_cale_month_pane_t1

0x0a35,	// (0x0003383d) list_gen_pane_cp01

0x0553,	// (0x0003335b) scroll_pane_01

0x3b0c,	// (0x00036914) list_single_double_fisheye_pane

0x3c2f,	// (0x00036a37) list_double_fisheye_pane_g1_ParamLimits

0x3c2f,	// (0x00036a37) list_double_fisheye_pane_g1

0x3c3b,	// (0x00036a43) list_double_fisheye_pane_g2_ParamLimits

0x3c3b,	// (0x00036a43) list_double_fisheye_pane_g2

0x3c4f,	// (0x00036a57) list_double_fisheye_pane_g3_ParamLimits

0x3c4f,	// (0x00036a57) list_double_fisheye_pane_g3

0x0004,

0xfcbc,	// (0x00042ac4) list_double_fisheye_pane_g_ParamLimits

0xfcbc,	// (0x00042ac4) list_double_fisheye_pane_g

0x3c78,	// (0x00036a80) list_double_fisheye_pane_t1_ParamLimits

0x3c78,	// (0x00036a80) list_double_fisheye_pane_t1

0x3c93,	// (0x00036a9b) list_double_fisheye_pane_t2_ParamLimits

0x3c93,	// (0x00036a9b) list_double_fisheye_pane_t2

0x0001,

0xfcc7,	// (0x00042acf) list_double_fisheye_pane_t_ParamLimits

0xfcc7,	// (0x00042acf) list_double_fisheye_pane_t

0x45e9,	// (0x000373f1) main_call5_pane

0xb09a,	// (0x0003dea2) sc_swipe_pane_ParamLimits

0xb09a,	// (0x0003dea2) sc_swipe_pane

0xb291,	// (0x0003e099) call5_image_pane_ParamLimits

0xb291,	// (0x0003e099) call5_image_pane

0xb2a3,	// (0x0003e0ab) call5_swipe_1_pane_ParamLimits

0xb2a3,	// (0x0003e0ab) call5_swipe_1_pane

0xb2af,	// (0x0003e0b7) call5_swipe_2_pane_ParamLimits

0xb2af,	// (0x0003e0b7) call5_swipe_2_pane

0xb2cb,	// (0x0003e0d3) popup_call5_audio_first_window_ParamLimits

0xb2cb,	// (0x0003e0d3) popup_call5_audio_first_window

0xeac6,	// (0x000418ce) call5_swipe_1_pane_g1_ParamLimits

0xeac6,	// (0x000418ce) call5_swipe_1_pane_g1

0x171d,	// (0x00034525) call5_swipe_1_pane_g2_ParamLimits

0x171d,	// (0x00034525) call5_swipe_1_pane_g2

0x0001,

0xfccc,	// (0x00042ad4) call5_swipe_1_pane_g_ParamLimits

0xfccc,	// (0x00042ad4) call5_swipe_1_pane_g

0x1729,	// (0x00034531) call5_swipe_1_pane_t1_ParamLimits

0x1729,	// (0x00034531) call5_swipe_1_pane_t1

0xeac6,	// (0x000418ce) call5_swipe_2_pane_g1_ParamLimits

0xeac6,	// (0x000418ce) call5_swipe_2_pane_g1

0x173e,	// (0x00034546) call5_swipe_2_pane_g2_ParamLimits

0x173e,	// (0x00034546) call5_swipe_2_pane_g2

0x0001,

0xfcd1,	// (0x00042ad9) call5_swipe_2_pane_g_ParamLimits

0xfcd1,	// (0x00042ad9) call5_swipe_2_pane_g

0x174a,	// (0x00034552) call5_swipe_2_pane_t1_ParamLimits

0x174a,	// (0x00034552) call5_swipe_2_pane_t1

0x175f,	// (0x00034567) sc_swipe_pane_g1_ParamLimits

0x175f,	// (0x00034567) sc_swipe_pane_g1

0x176c,	// (0x00034574) sc_swipe_pane_g2_ParamLimits

0x176c,	// (0x00034574) sc_swipe_pane_g2

0x0001,

0xfcd6,	// (0x00042ade) sc_swipe_pane_g_ParamLimits

0xfcd6,	// (0x00042ade) sc_swipe_pane_g

0x1778,	// (0x00034580) sc_swipe_pane_t1_ParamLimits

0x1778,	// (0x00034580) sc_swipe_pane_t1

0x45e9,	// (0x000373f1) main_cmail_launcher_pane

0xb2db,	// (0x0003e0e3) aid_size_cell_cmail_l_ParamLimits

0xb2db,	// (0x0003e0e3) aid_size_cell_cmail_l

0xb2eb,	// (0x0003e0f3) grid_cmail_l_pane_ParamLimits

0xb2eb,	// (0x0003e0f3) grid_cmail_l_pane

0xb2fb,	// (0x0003e103) cell_cmail_l_pane_ParamLimits

0xb2fb,	// (0x0003e103) cell_cmail_l_pane

0xb311,	// (0x0003e119) cell_cmail_l_pane_g1_ParamLimits

0xb311,	// (0x0003e119) cell_cmail_l_pane_g1

0xb31d,	// (0x0003e125) cell_cmail_l_pane_t1_ParamLimits

0xb31d,	// (0x0003e125) cell_cmail_l_pane_t1

0x178d,	// (0x00034595) cell_cmail_l_pane_t2_ParamLimits

0x178d,	// (0x00034595) cell_cmail_l_pane_t2

0x0001,

0xfcdb,	// (0x00042ae3) cell_cmail_l_pane_t_ParamLimits

0xfcdb,	// (0x00042ae3) cell_cmail_l_pane_t

0x7737,	// (0x0003a53f) grid_highlight_pane_cp018_ParamLimits

0x7737,	// (0x0003a53f) grid_highlight_pane_cp018

0x4715,	// (0x0003751d) main2_pane_ParamLimits

0x4715,	// (0x0003751d) main2_pane

0xc63b,	// (0x0003f443) popup_sp_fs_action_menu_bg_pane_g1

0xc643,	// (0x0003f44b) popup_sp_fs_action_menu_bg_pane_g2

0xc64b,	// (0x0003f453) popup_sp_fs_action_menu_bg_pane_g3

0xc653,	// (0x0003f45b) popup_sp_fs_action_menu_bg_pane_g4

0xc65b,	// (0x0003f463) popup_sp_fs_action_menu_bg_pane_g5

0xc663,	// (0x0003f46b) popup_sp_fs_action_menu_bg_pane_g6

0xc66b,	// (0x0003f473) popup_sp_fs_action_menu_bg_pane_g7

0xc673,	// (0x0003f47b) popup_sp_fs_action_menu_bg_pane_g8

0xc67b,	// (0x0003f483) popup_sp_fs_action_menu_bg_pane_g9

0xc683,	// (0x0003f48b) popup_sp_fs_action_menu_bg_pane_g10

0xc683,	// (0x0003f48b) popup_sp_fs_action_menu_bg_pane_g11

0x000a,

0xf1ac,	// (0x00041fb4) popup_sp_fs_action_menu_bg_pane_g

0x3403,	// (0x0003620b) list_medium_line_x2_t3_g3_g1_ParamLimits

0x3403,	// (0x0003620b) list_medium_line_x2_t3_g3_g1

0x340f,	// (0x00036217) list_medium_line_x2_t3_g3_g2_ParamLimits

0x340f,	// (0x00036217) list_medium_line_x2_t3_g3_g2

0x341b,	// (0x00036223) list_medium_line_x2_t3_g3_g3_ParamLimits

0x341b,	// (0x00036223) list_medium_line_x2_t3_g3_g3

0x0002,

0xf25c,	// (0x00042064) list_medium_line_x2_t3_g3_g_ParamLimits

0xf25c,	// (0x00042064) list_medium_line_x2_t3_g3_g

0x3427,	// (0x0003622f) list_medium_line_x2_t3_g3_t1_ParamLimits

0x3427,	// (0x0003622f) list_medium_line_x2_t3_g3_t1

0x343c,	// (0x00036244) list_medium_line_x2_t3_g3_t2_ParamLimits

0x343c,	// (0x00036244) list_medium_line_x2_t3_g3_t2

0x3450,	// (0x00036258) list_medium_line_x2_t3_g3_t3_ParamLimits

0x3450,	// (0x00036258) list_medium_line_x2_t3_g3_t3

0x0002,

0xf263,	// (0x0004206b) list_medium_line_x2_t3_g3_t_ParamLimits

0xf263,	// (0x0004206b) list_medium_line_x2_t3_g3_t

0x3403,	// (0x0003620b) list_medium_line_x2_t3_g2_g1_ParamLimits

0x3403,	// (0x0003620b) list_medium_line_x2_t3_g2_g1

0x341b,	// (0x00036223) list_medium_line_x2_t3_g2_g2_ParamLimits

0x341b,	// (0x00036223) list_medium_line_x2_t3_g2_g2

0x0001,

0xf26a,	// (0x00042072) list_medium_line_x2_t3_g2_g_ParamLimits

0xf26a,	// (0x00042072) list_medium_line_x2_t3_g2_g

0x3465,	// (0x0003626d) list_medium_line_x2_t3_g2_t1_ParamLimits

0x3465,	// (0x0003626d) list_medium_line_x2_t3_g2_t1

0x347b,	// (0x00036283) list_medium_line_x2_t3_g2_t2_ParamLimits

0x347b,	// (0x00036283) list_medium_line_x2_t3_g2_t2

0x348d,	// (0x00036295) list_medium_line_x2_t3_g2_t3_ParamLimits

0x348d,	// (0x00036295) list_medium_line_x2_t3_g2_t3

0x0002,

0xf26f,	// (0x00042077) list_medium_line_x2_t3_g2_t_ParamLimits

0xf26f,	// (0x00042077) list_medium_line_x2_t3_g2_t

0x3403,	// (0x0003620b) list_medium_line_x2_t4_g4_g1_ParamLimits

0x3403,	// (0x0003620b) list_medium_line_x2_t4_g4_g1

0x34ab,	// (0x000362b3) list_medium_line_x2_t4_g4_g2_ParamLimits

0x34ab,	// (0x000362b3) list_medium_line_x2_t4_g4_g2

0x340f,	// (0x00036217) list_medium_line_x2_t4_g4_g3_ParamLimits

0x340f,	// (0x00036217) list_medium_line_x2_t4_g4_g3

0x34b7,	// (0x000362bf) list_medium_line_x2_t4_g4_g4_ParamLimits

0x34b7,	// (0x000362bf) list_medium_line_x2_t4_g4_g4

0x0003,

0xf276,	// (0x0004207e) list_medium_line_x2_t4_g4_g_ParamLimits

0xf276,	// (0x0004207e) list_medium_line_x2_t4_g4_g

0x34c3,	// (0x000362cb) list_medium_line_x2_t4_g4_t1_ParamLimits

0x34c3,	// (0x000362cb) list_medium_line_x2_t4_g4_t1

0x34dd,	// (0x000362e5) list_medium_line_x2_t4_g4_t2_ParamLimits

0x34dd,	// (0x000362e5) list_medium_line_x2_t4_g4_t2

0x34f3,	// (0x000362fb) list_medium_line_x2_t4_g4_t3_ParamLimits

0x34f3,	// (0x000362fb) list_medium_line_x2_t4_g4_t3

0x3508,	// (0x00036310) list_medium_line_x2_t4_g4_t4_ParamLimits

0x3508,	// (0x00036310) list_medium_line_x2_t4_g4_t4

0x0003,

0xf27f,	// (0x00042087) list_medium_line_x2_t4_g4_t_ParamLimits

0xf27f,	// (0x00042087) list_medium_line_x2_t4_g4_t

0x3403,	// (0x0003620b) list_medium_line_x2_t2_g4_g1_ParamLimits

0x3403,	// (0x0003620b) list_medium_line_x2_t2_g4_g1

0x34ab,	// (0x000362b3) list_medium_line_x2_t2_g4_g2_ParamLimits

0x34ab,	// (0x000362b3) list_medium_line_x2_t2_g4_g2

0x340f,	// (0x00036217) list_medium_line_x2_t2_g4_g3_ParamLimits

0x340f,	// (0x00036217) list_medium_line_x2_t2_g4_g3

0x341b,	// (0x00036223) list_medium_line_x2_t2_g4_g4_ParamLimits

0x341b,	// (0x00036223) list_medium_line_x2_t2_g4_g4

0x0003,

0xf2e6,	// (0x000420ee) list_medium_line_x2_t2_g4_g_ParamLimits

0xf2e6,	// (0x000420ee) list_medium_line_x2_t2_g4_g

0x351a,	// (0x00036322) list_medium_line_x2_t2_g4_t1_ParamLimits

0x351a,	// (0x00036322) list_medium_line_x2_t2_g4_t1

0x3450,	// (0x00036258) list_medium_line_x2_t2_g4_t2_ParamLimits

0x3450,	// (0x00036258) list_medium_line_x2_t2_g4_t2

0x0001,

0xf2ef,	// (0x000420f7) list_medium_line_x2_t2_g4_t_ParamLimits

0xf2ef,	// (0x000420f7) list_medium_line_x2_t2_g4_t

0x3403,	// (0x0003620b) list_medium_line_x2_t2_g3_g1_ParamLimits

0x3403,	// (0x0003620b) list_medium_line_x2_t2_g3_g1

0x340f,	// (0x00036217) list_medium_line_x2_t2_g3_g2_ParamLimits

0x340f,	// (0x00036217) list_medium_line_x2_t2_g3_g2

0x341b,	// (0x00036223) list_medium_line_x2_t2_g3_g3_ParamLimits

0x341b,	// (0x00036223) list_medium_line_x2_t2_g3_g3

0x0002,

0xf25c,	// (0x00042064) list_medium_line_x2_t2_g3_g_ParamLimits

0xf25c,	// (0x00042064) list_medium_line_x2_t2_g3_g

0x352f,	// (0x00036337) list_medium_line_x2_t2_g3_t1_ParamLimits

0x352f,	// (0x00036337) list_medium_line_x2_t2_g3_t1

0x3450,	// (0x00036258) list_medium_line_x2_t2_g3_t2_ParamLimits

0x3450,	// (0x00036258) list_medium_line_x2_t2_g3_t2

0x0001,

0xf2f4,	// (0x000420fc) list_medium_line_x2_t2_g3_t_ParamLimits

0xf2f4,	// (0x000420fc) list_medium_line_x2_t2_g3_t

0x668d,	// (0x00039495) main_sp_fs_list_pane_ParamLimits

0x668d,	// (0x00039495) main_sp_fs_list_pane

0x6699,	// (0x000394a1) sp_fs_scroll_pane_ParamLimits

0x6699,	// (0x000394a1) sp_fs_scroll_pane

0x3544,	// (0x0003634c) list_medium_line_x2_t3_t1

0x3554,	// (0x0003635c) list_medium_line_x2_t3_t2

0x3562,	// (0x0003636a) list_medium_line_x2_t3_t3

0x0002,

0xf33f,	// (0x00042147) list_medium_line_x2_t3_t

0x3570,	// (0x00036378) list_medium_line_x3_t4_t1

0x3580,	// (0x00036388) list_medium_line_x3_t4_t2

0x358e,	// (0x00036396) list_medium_line_x3_t4_t3

0x3562,	// (0x0003636a) list_medium_line_x3_t4_t4

0x0003,

0xf346,	// (0x0004214e) list_medium_line_x3_t4_t

0x359c,	// (0x000363a4) list_medium_line_x4_t5_t1

0x35ac,	// (0x000363b4) list_medium_line_x4_t5_t2

0x358e,	// (0x00036396) list_medium_line_x4_t5_t3

0x35ba,	// (0x000363c2) list_medium_line_x4_t5_t4

0x3562,	// (0x0003636a) list_medium_line_x4_t5_t5

0x0004,

0xf34f,	// (0x00042157) list_medium_line_x4_t5_t

0x3403,	// (0x0003620b) list_medium_line_t4_g4_g1_ParamLimits

0x3403,	// (0x0003620b) list_medium_line_t4_g4_g1

0x34b7,	// (0x000362bf) list_medium_line_t4_g4_g2_ParamLimits

0x34b7,	// (0x000362bf) list_medium_line_t4_g4_g2

0x35c8,	// (0x000363d0) list_medium_line_t4_g4_g3_ParamLimits

0x35c8,	// (0x000363d0) list_medium_line_t4_g4_g3

0x341b,	// (0x00036223) list_medium_line_t4_g4_g4_ParamLimits

0x341b,	// (0x00036223) list_medium_line_t4_g4_g4

0x0003,

0xf35a,	// (0x00042162) list_medium_line_t4_g4_g_ParamLimits

0xf35a,	// (0x00042162) list_medium_line_t4_g4_g

0x35d4,	// (0x000363dc) list_medium_line_t4_g4_t1_ParamLimits

0x35d4,	// (0x000363dc) list_medium_line_t4_g4_t1

0x35e9,	// (0x000363f1) list_medium_line_t4_g4_t2_ParamLimits

0x35e9,	// (0x000363f1) list_medium_line_t4_g4_t2

0x35ff,	// (0x00036407) list_medium_line_t4_g4_t3_ParamLimits

0x35ff,	// (0x00036407) list_medium_line_t4_g4_t3

0x3450,	// (0x00036258) list_medium_line_t4_g4_t4_ParamLimits

0x3450,	// (0x00036258) list_medium_line_t4_g4_t4

0x0003,

0xf363,	// (0x0004216b) list_medium_line_t4_g4_t_ParamLimits

0xf363,	// (0x0004216b) list_medium_line_t4_g4_t

0x67b8,	// (0x000395c0) chi_dic_find_pane_g1

0x7753,	// (0x0003a55b) main_tport_pane

0x388e,	// (0x00036696) list_medium_line_plain_t1

0x389c,	// (0x000366a4) list_medium_line_t2_g2_g1_ParamLimits

0x389c,	// (0x000366a4) list_medium_line_t2_g2_g1

0x38a8,	// (0x000366b0) list_medium_line_t2_g2_g2_ParamLimits

0x38a8,	// (0x000366b0) list_medium_line_t2_g2_g2

0x0001,

0xfa1f,	// (0x00042827) list_medium_line_t2_g2_g_ParamLimits

0xfa1f,	// (0x00042827) list_medium_line_t2_g2_g

0x38b4,	// (0x000366bc) list_medium_line_t2_g2_t1_ParamLimits

0x38b4,	// (0x000366bc) list_medium_line_t2_g2_t1

0x38cb,	// (0x000366d3) list_medium_line_t2_g2_t2_ParamLimits

0x38cb,	// (0x000366d3) list_medium_line_t2_g2_t2

0x0001,

0xfa24,	// (0x0004282c) list_medium_line_t2_g2_t_ParamLimits

0xfa24,	// (0x0004282c) list_medium_line_t2_g2_t

0x3aea,	// (0x000368f2) aid_sp_fs_list_icon_a_sm

0x3af2,	// (0x000368fa) aid_sp_fs_list_icon_d

0x1f70,	// (0x00034d78) aid_sp_fs_text_primary

0x1cd7,	// (0x00034adf) aid_sp_fs_text_secondary

0x3afa,	// (0x00036902) list_medium_line

0x3afa,	// (0x00036902) list_medium_line_g2

0x3afa,	// (0x00036902) list_medium_line_g3

0x3afa,	// (0x00036902) list_medium_line_plain

0x3afa,	// (0x00036902) list_medium_line_plain_t2

0x3afa,	// (0x00036902) list_medium_line_plain_t3

0x3afa,	// (0x00036902) list_medium_line_right_icon

0x3afa,	// (0x00036902) list_medium_line_right_iconx2

0x3afa,	// (0x00036902) list_medium_line_t2

0x3afa,	// (0x00036902) list_medium_line_t2_g2

0x3afa,	// (0x00036902) list_medium_line_t2_g3

0x3afa,	// (0x00036902) list_medium_line_t2_right_icon

0x3afa,	// (0x00036902) list_medium_line_t2_right_iconx2

0x3afa,	// (0x00036902) list_medium_line_t3

0x3afa,	// (0x00036902) list_medium_line_t3_g2

0x3afa,	// (0x00036902) list_medium_line_t3_g3

0x3afa,	// (0x00036902) list_medium_line_t3_right_iconx2

0x3b03,	// (0x0003690b) list_medium_line_t4_g4

0x3b0c,	// (0x00036914) list_medium_line_x2

0x3b0c,	// (0x00036914) list_medium_line_x2_t2_g2

0x3b0c,	// (0x00036914) list_medium_line_x2_t2_g3

0x3b0c,	// (0x00036914) list_medium_line_x2_t2_g4

0x3b0c,	// (0x00036914) list_medium_line_x2_t3

0x3b0c,	// (0x00036914) list_medium_line_x2_t3_g2

0x3b0c,	// (0x00036914) list_medium_line_x2_t3_g3

0x3b0c,	// (0x00036914) list_medium_line_x2_t3_g4

0x3b0c,	// (0x00036914) list_medium_line_x2_t4_g2

0x3b0c,	// (0x00036914) list_medium_line_x2_t4_g4

0x3b15,	// (0x0003691d) list_medium_line_x3

0x3b15,	// (0x0003691d) list_medium_line_x3_t4

0x3b15,	// (0x0003691d) list_medium_line_x3_t4_g4

0x3b03,	// (0x0003690b) list_medium_line_x4_t4

0x3b03,	// (0x0003690b) list_medium_line_x4_t4_g7

0x3b03,	// (0x0003690b) list_medium_line_x4_t5

0x3b1e,	// (0x00036926) list_single_fs_dyc_pane_ParamLimits

0x3b1e,	// (0x00036926) list_single_fs_dyc_pane

0x3403,	// (0x0003620b) list_medium_line_x4_t4_g7_g1_ParamLimits

0x3403,	// (0x0003620b) list_medium_line_x4_t4_g7_g1

0x3b5e,	// (0x00036966) list_medium_line_x4_t4_g7_g2_ParamLimits

0x3b5e,	// (0x00036966) list_medium_line_x4_t4_g7_g2

0x3b6a,	// (0x00036972) list_medium_line_x4_t4_g7_g3_ParamLimits

0x3b6a,	// (0x00036972) list_medium_line_x4_t4_g7_g3

0x3b79,	// (0x00036981) list_medium_line_x4_t4_g7_g4_ParamLimits

0x3b79,	// (0x00036981) list_medium_line_x4_t4_g7_g4

0x3b85,	// (0x0003698d) list_medium_line_x4_t4_g7_g5_ParamLimits

0x3b85,	// (0x0003698d) list_medium_line_x4_t4_g7_g5

0x3b94,	// (0x0003699c) list_medium_line_x4_t4_g7_g6_ParamLimits

0x3b94,	// (0x0003699c) list_medium_line_x4_t4_g7_g6

0x3ba3,	// (0x000369ab) list_medium_line_x4_t4_g7_g7_ParamLimits

0x3ba3,	// (0x000369ab) list_medium_line_x4_t4_g7_g7

0x0006,

0xfbe8,	// (0x000429f0) list_medium_line_x4_t4_g7_g_ParamLimits

0xfbe8,	// (0x000429f0) list_medium_line_x4_t4_g7_g

0x3baf,	// (0x000369b7) list_medium_line_x4_t4_g7_t1_ParamLimits

0x3baf,	// (0x000369b7) list_medium_line_x4_t4_g7_t1

0x3bc4,	// (0x000369cc) list_medium_line_x4_t4_g7_t2_ParamLimits

0x3bc4,	// (0x000369cc) list_medium_line_x4_t4_g7_t2

0x3bd9,	// (0x000369e1) list_medium_line_x4_t4_g7_t3_ParamLimits

0x3bd9,	// (0x000369e1) list_medium_line_x4_t4_g7_t3

0x3bee,	// (0x000369f6) list_medium_line_x4_t4_g7_t4_ParamLimits

0x3bee,	// (0x000369f6) list_medium_line_x4_t4_g7_t4

0x3c00,	// (0x00036a08) list_medium_line_x4_t4_g7_t5_ParamLimits

0x3c00,	// (0x00036a08) list_medium_line_x4_t4_g7_t5

0x0004,

0xfbf7,	// (0x000429ff) list_medium_line_x4_t4_g7_t_ParamLimits

0xfbf7,	// (0x000429ff) list_medium_line_x4_t4_g7_t

0x3c12,	// (0x00036a1a) list_single_dyc_row_pane_ParamLimits

0x3c12,	// (0x00036a1a) list_single_dyc_row_pane

0xb285,	// (0x0003e08d) call5_gesture_pane_ParamLimits

0xb285,	// (0x0003e08d) call5_gesture_pane

0xb2bb,	// (0x0003e0c3) call5_windows_pane_ParamLimits

0xb2bb,	// (0x0003e0c3) call5_windows_pane

0xb333,	// (0x0003e13b) call5_swipe_1_pane_cp_ParamLimits

0xb333,	// (0x0003e13b) call5_swipe_1_pane_cp

0xb33f,	// (0x0003e147) call5_swipe_2_pane_cp_ParamLimits

0xb33f,	// (0x0003e147) call5_swipe_2_pane_cp

0xcfe4,	// (0x0003fdec) call5_image_pane_cp

0xb34b,	// (0x0003e153) popup_call5_audio_first_window_cp_ParamLimits

0xb34b,	// (0x0003e153) popup_call5_audio_first_window_cp

0x175f,	// (0x00034567) call5_swipe_1_pane_g1_cp_ParamLimits

0x175f,	// (0x00034567) call5_swipe_1_pane_g1_cp

0x179f,	// (0x000345a7) call5_swipe_1_pane_g2_cp

0x1778,	// (0x00034580) call5_swipe_1_pane_t1_cp_ParamLimits

0x1778,	// (0x00034580) call5_swipe_1_pane_t1_cp

0x175f,	// (0x00034567) call5_swipe_2_pane_g1_cp_ParamLimits

0x175f,	// (0x00034567) call5_swipe_2_pane_g1_cp

0x17a7,	// (0x000345af) call5_swipe_2_pane_g2_cp

0x17af,	// (0x000345b7) call5_swipe_2_pane_t1_cp_ParamLimits

0x17af,	// (0x000345b7) call5_swipe_2_pane_t1_cp

0x7737,	// (0x0003a53f) main_sp_fs_email_pane

0x17c4,	// (0x000345cc) main_sp_fs_listscroll_pane_te

0x3cb5,	// (0x00036abd) popup_sp_fs_action_menu_pane_ParamLimits

0x3cb5,	// (0x00036abd) popup_sp_fs_action_menu_pane

0xe896,	// (0x0004169e) bg_sp_fs_ctrlbar_pane_g1

0x1813,	// (0x0003461b) bg_sp_fs_ctrlbar_ddmenu_pane_g1

0x181c,	// (0x00034624) bg_sp_fs_ctrlbar_ddmenu_pane_g2

0x1825,	// (0x0003462d) bg_sp_fs_ctrlbar_ddmenu_pane_g3

0xe896,	// (0x0004169e) bg_sp_fs_ctrlbar_ddmenu_pane_g4

0x0003,

0xfce0,	// (0x00042ae8) bg_sp_fs_ctrlbar_ddmenu_pane_g

0xe66d,	// (0x00041475) bg_sp_fs_ctrlbar_ddmenu_pane_ParamLimits

0xe66d,	// (0x00041475) bg_sp_fs_ctrlbar_ddmenu_pane

0x182e,	// (0x00034636) main_sp_fs_ctrlbar_ddmenu_pane_g1_ParamLimits

0x182e,	// (0x00034636) main_sp_fs_ctrlbar_ddmenu_pane_g1

0x183a,	// (0x00034642) main_sp_fs_ctrlbar_ddmenu_pane_g2_ParamLimits

0x183a,	// (0x00034642) main_sp_fs_ctrlbar_ddmenu_pane_g2

0x0001,

0xfce9,	// (0x00042af1) main_sp_fs_ctrlbar_ddmenu_pane_g_ParamLimits

0xfce9,	// (0x00042af1) main_sp_fs_ctrlbar_ddmenu_pane_g

0x1846,	// (0x0003464e) main_sp_fs_ctrlbar_ddmenu_pane_t1_ParamLimits

0x1846,	// (0x0003464e) main_sp_fs_ctrlbar_ddmenu_pane_t1

0x3cfb,	// (0x00036b03) list_medium_line_t2_right_icon_g1

0x3d03,	// (0x00036b0b) list_medium_line_t2_right_icon_t1

0x3d13,	// (0x00036b1b) list_medium_line_t2_right_icon_t2

0x0001,

0xfcee,	// (0x00042af6) list_medium_line_t2_right_icon_t

0xe413,	// (0x0004121b) bg_sp_fs_ctrlbar_pane_ParamLimits

0xe413,	// (0x0004121b) bg_sp_fs_ctrlbar_pane

0xb3b0,	// (0x0003e1b8) main_sp_fs_ctrlbar_button_pane_cp01

0xb3b8,	// (0x0003e1c0) main_sp_fs_ctrlbar_ddmenu_pane

0x18a2,	// (0x000346aa) main_sp_fs_ctrlbar_pane_g1

0x18ae,	// (0x000346b6) main_sp_fs_ctrlbar_pane_g2

0x0001,

0xfcf3,	// (0x00042afb) main_sp_fs_ctrlbar_pane_g

0x18ba,	// (0x000346c2) main_sp_fs_ctrlbar_pane_t1

0x3d21,	// (0x00036b29) main_sp_fs_ctrlbar_pane

0x3d3d,	// (0x00036b45) main_sp_fs_listscroll_pane_te_cp01

0x3d4e,	// (0x00036b56) popup_sp_fs_action_menu_pane_cp01_ParamLimits

0x3d4e,	// (0x00036b56) popup_sp_fs_action_menu_pane_cp01

0x7737,	// (0x0003a53f) bg_sp_fs_highlight_list_pane_cp01_ParamLimits

0x7737,	// (0x0003a53f) bg_sp_fs_highlight_list_pane_cp01

0x3d68,	// (0x00036b70) sp_fs_action_menu_list_gene_pane_g1_ParamLimits

0x3d68,	// (0x00036b70) sp_fs_action_menu_list_gene_pane_g1

0x18de,	// (0x000346e6) sp_fs_action_menu_list_gene_pane_g2_ParamLimits

0x18de,	// (0x000346e6) sp_fs_action_menu_list_gene_pane_g2

0x0001,

0xfcf8,	// (0x00042b00) sp_fs_action_menu_list_gene_pane_g_ParamLimits

0xfcf8,	// (0x00042b00) sp_fs_action_menu_list_gene_pane_g

0x3d77,	// (0x00036b7f) sp_fs_action_menu_list_gene_pane_t1_ParamLimits

0x3d77,	// (0x00036b7f) sp_fs_action_menu_list_gene_pane_t1

0x3d8f,	// (0x00036b97) sp_fs_action_menu_list_gene_pane_ParamLimits

0x3d8f,	// (0x00036b97) sp_fs_action_menu_list_gene_pane

0x1926,	// (0x0003472e) popup_sp_fs_action_menu_bg_pane_ParamLimits

0x1926,	// (0x0003472e) popup_sp_fs_action_menu_bg_pane

0x3db2,	// (0x00036bba) sp_fs_action_menu_list_pane_ParamLimits

0x3db2,	// (0x00036bba) sp_fs_action_menu_list_pane

0x1958,	// (0x00034760) sp_fs_scroll_pane_cp01_ParamLimits

0x1958,	// (0x00034760) sp_fs_scroll_pane_cp01

0x3dd6,	// (0x00036bde) list_medium_line_plain_t2_t1

0x3de6,	// (0x00036bee) list_medium_line_plain_t2_t2

0x0001,

0xfcfd,	// (0x00042b05) list_medium_line_plain_t2_t

0x3df4,	// (0x00036bfc) list_medium_line_plain_t3_t1

0x3e04,	// (0x00036c0c) list_medium_line_plain_t3_t2

0x3e12,	// (0x00036c1a) list_medium_line_plain_t3_t3

0x0002,

0xfd02,	// (0x00042b0a) list_medium_line_plain_t3_t

0x3403,	// (0x0003620b) list_medium_line_x2_t2_g2_g1_ParamLimits

0x3403,	// (0x0003620b) list_medium_line_x2_t2_g2_g1

0x341b,	// (0x00036223) list_medium_line_x2_t2_g2_g2_ParamLimits

0x341b,	// (0x00036223) list_medium_line_x2_t2_g2_g2

0x0001,

0xf26a,	// (0x00042072) list_medium_line_x2_t2_g2_g_ParamLimits

0xf26a,	// (0x00042072) list_medium_line_x2_t2_g2_g

0x35d4,	// (0x000363dc) list_medium_line_x2_t2_g2_t1_ParamLimits

0x35d4,	// (0x000363dc) list_medium_line_x2_t2_g2_t1

0x3450,	// (0x00036258) list_medium_line_x2_t2_g2_t2_ParamLimits

0x3450,	// (0x00036258) list_medium_line_x2_t2_g2_t2

0x0001,

0xfd09,	// (0x00042b11) list_medium_line_x2_t2_g2_t_ParamLimits

0xfd09,	// (0x00042b11) list_medium_line_x2_t2_g2_t

0x3403,	// (0x0003620b) list_medium_line_x2_t4_g2_g1_ParamLimits

0x3403,	// (0x0003620b) list_medium_line_x2_t4_g2_g1

0x3e20,	// (0x00036c28) list_medium_line_x2_t4_g2_g2_ParamLimits

0x3e20,	// (0x00036c28) list_medium_line_x2_t4_g2_g2

0x0001,

0xfd0e,	// (0x00042b16) list_medium_line_x2_t4_g2_g_ParamLimits

0xfd0e,	// (0x00042b16) list_medium_line_x2_t4_g2_g

0x3e32,	// (0x00036c3a) list_medium_line_x2_t4_g2_t1_ParamLimits

0x3e32,	// (0x00036c3a) list_medium_line_x2_t4_g2_t1

0x3e4c,	// (0x00036c54) list_medium_line_x2_t4_g2_t2_ParamLimits

0x3e4c,	// (0x00036c54) list_medium_line_x2_t4_g2_t2

0x3e62,	// (0x00036c6a) list_medium_line_x2_t4_g2_t3_ParamLimits

0x3e62,	// (0x00036c6a) list_medium_line_x2_t4_g2_t3

0x3450,	// (0x00036258) list_medium_line_x2_t4_g2_t4_ParamLimits

0x3450,	// (0x00036258) list_medium_line_x2_t4_g2_t4

0x0003,

0xfd13,	// (0x00042b1b) list_medium_line_x2_t4_g2_t_ParamLimits

0xfd13,	// (0x00042b1b) list_medium_line_x2_t4_g2_t

0x3e77,	// (0x00036c7f) list_medium_line_t3_right_iconx2_g1

0x3cfb,	// (0x00036b03) list_medium_line_t3_right_iconx2_g2

0x3e7f,	// (0x00036c87) list_medium_line_t3_right_iconx2_g3

0x0002,

0xfd1c,	// (0x00042b24) list_medium_line_t3_right_iconx2_g

0x3e89,	// (0x00036c91) list_medium_line_t3_right_iconx2_t1

0x3e99,	// (0x00036ca1) list_medium_line_t3_right_iconx2_t2

0x0001,

0xfd23,	// (0x00042b2b) list_medium_line_t3_right_iconx2_t

0x3403,	// (0x0003620b) list_medium_line_x3_t4_g4_g1_ParamLimits

0x3403,	// (0x0003620b) list_medium_line_x3_t4_g4_g1

0x340f,	// (0x00036217) list_medium_line_x3_t4_g4_g2_ParamLimits

0x340f,	// (0x00036217) list_medium_line_x3_t4_g4_g2

0x34b7,	// (0x000362bf) list_medium_line_x3_t4_g4_g3_ParamLimits

0x34b7,	// (0x000362bf) list_medium_line_x3_t4_g4_g3

0x3ea7,	// (0x00036caf) list_medium_line_x3_t4_g4_g4_ParamLimits

0x3ea7,	// (0x00036caf) list_medium_line_x3_t4_g4_g4

0x0003,

0xfd28,	// (0x00042b30) list_medium_line_x3_t4_g4_g_ParamLimits

0xfd28,	// (0x00042b30) list_medium_line_x3_t4_g4_g

0x3eb3,	// (0x00036cbb) list_medium_line_x3_t4_g4_t1_ParamLimits

0x3eb3,	// (0x00036cbb) list_medium_line_x3_t4_g4_t1

0x3eca,	// (0x00036cd2) list_medium_line_x3_t4_g4_t2_ParamLimits

0x3eca,	// (0x00036cd2) list_medium_line_x3_t4_g4_t2

0x3edf,	// (0x00036ce7) list_medium_line_x3_t4_g4_t3_ParamLimits

0x3edf,	// (0x00036ce7) list_medium_line_x3_t4_g4_t3

0x3ef4,	// (0x00036cfc) list_medium_line_x3_t4_g4_t4_ParamLimits

0x3ef4,	// (0x00036cfc) list_medium_line_x3_t4_g4_t4

0x0003,

0xfd31,	// (0x00042b39) list_medium_line_x3_t4_g4_t_ParamLimits

0xfd31,	// (0x00042b39) list_medium_line_x3_t4_g4_t

0x3f11,	// (0x00036d19) list_single_dyc_row_text_pane_t1_ParamLimits

0x3f11,	// (0x00036d19) list_single_dyc_row_text_pane_t1

0x3f4e,	// (0x00036d56) list_single_dyc_row_text_pane_t2_ParamLimits

0x3f4e,	// (0x00036d56) list_single_dyc_row_text_pane_t2

0x3fa8,	// (0x00036db0) list_single_dyc_row_text_pane_t3_ParamLimits

0x3fa8,	// (0x00036db0) list_single_dyc_row_text_pane_t3

0x0002,

0xfd3a,	// (0x00042b42) list_single_dyc_row_text_pane_t_ParamLimits

0xfd3a,	// (0x00042b42) list_single_dyc_row_text_pane_t

0x3fba,	// (0x00036dc2) list_single_dyc_row_pane_g1_ParamLimits

0x3fba,	// (0x00036dc2) list_single_dyc_row_pane_g1

0x3fc6,	// (0x00036dce) list_single_dyc_row_pane_g2_ParamLimits

0x3fc6,	// (0x00036dce) list_single_dyc_row_pane_g2

0x3fd2,	// (0x00036dda) list_single_dyc_row_pane_g3_ParamLimits

0x3fd2,	// (0x00036dda) list_single_dyc_row_pane_g3

0x3fde,	// (0x00036de6) list_single_dyc_row_pane_g4_ParamLimits

0x3fde,	// (0x00036de6) list_single_dyc_row_pane_g4

0x0003,

0xfd41,	// (0x00042b49) list_single_dyc_row_pane_g_ParamLimits

0xfd41,	// (0x00042b49) list_single_dyc_row_pane_g

0x3fea,	// (0x00036df2) list_single_dyc_row_text_pane_ParamLimits

0x3fea,	// (0x00036df2) list_single_dyc_row_text_pane

0x45e9,	// (0x000373f1) bg_sp_fs_scroll_pane

0x1a25,	// (0x0003482d) thumb_sp_fs_scroll_pane

0x389c,	// (0x000366a4) list_medium_line_g1_ParamLimits

0x389c,	// (0x000366a4) list_medium_line_g1

0x4009,	// (0x00036e11) list_medium_line_t1_ParamLimits

0x4009,	// (0x00036e11) list_medium_line_t1

0x3403,	// (0x0003620b) list_medium_line_x2_g1_ParamLimits

0x3403,	// (0x0003620b) list_medium_line_x2_g1

0x340f,	// (0x00036217) list_medium_line_x2_g2_ParamLimits

0x340f,	// (0x00036217) list_medium_line_x2_g2

0x0001,

0xfd4a,	// (0x00042b52) list_medium_line_x2_g_ParamLimits

0xfd4a,	// (0x00042b52) list_medium_line_x2_g

0x401e,	// (0x00036e26) list_medium_line_x2_t1_ParamLimits

0x401e,	// (0x00036e26) list_medium_line_x2_t1

0x3403,	// (0x0003620b) list_medium_line_x3_g1_ParamLimits

0x3403,	// (0x0003620b) list_medium_line_x3_g1

0x340f,	// (0x00036217) list_medium_line_x3_g2_ParamLimits

0x340f,	// (0x00036217) list_medium_line_x3_g2

0x0001,

0xfd4a,	// (0x00042b52) list_medium_line_x3_g_ParamLimits

0xfd4a,	// (0x00042b52) list_medium_line_x3_g

0x401e,	// (0x00036e26) list_medium_line_x3_t1_ParamLimits

0x401e,	// (0x00036e26) list_medium_line_x3_t1

0x1a59,	// (0x00034861) thumb_sp_fs_scroll_pane_g1

0x1a62,	// (0x0003486a) thumb_sp_fs_scroll_pane_g2

0x1a6b,	// (0x00034873) thumb_sp_fs_scroll_pane_g3

0x0002,

0xfd4f,	// (0x00042b57) thumb_sp_fs_scroll_pane_g

0x1a59,	// (0x00034861) bg_sp_fs_scroll_pane_g1

0x1a62,	// (0x0003486a) bg_sp_fs_scroll_pane_g2

0x1a6b,	// (0x00034873) bg_sp_fs_scroll_pane_g3

0x0002,

0xfd4f,	// (0x00042b57) bg_sp_fs_scroll_pane_g

0x3403,	// (0x0003620b) list_medium_line_x2_t3_g4_g1_ParamLimits

0x3403,	// (0x0003620b) list_medium_line_x2_t3_g4_g1

0x34ab,	// (0x000362b3) list_medium_line_x2_t3_g4_g2_ParamLimits

0x34ab,	// (0x000362b3) list_medium_line_x2_t3_g4_g2

0x340f,	// (0x00036217) list_medium_line_x2_t3_g4_g3_ParamLimits

0x340f,	// (0x00036217) list_medium_line_x2_t3_g4_g3

0x341b,	// (0x00036223) list_medium_line_x2_t3_g4_g4_ParamLimits

0x341b,	// (0x00036223) list_medium_line_x2_t3_g4_g4

0x0003,

0xf2e6,	// (0x000420ee) list_medium_line_x2_t3_g4_g_ParamLimits

0xf2e6,	// (0x000420ee) list_medium_line_x2_t3_g4_g

0x4034,	// (0x00036e3c) list_medium_line_x2_t3_g4_t1_ParamLimits

0x4034,	// (0x00036e3c) list_medium_line_x2_t3_g4_t1

0x404a,	// (0x00036e52) list_medium_line_x2_t3_g4_t2_ParamLimits

0x404a,	// (0x00036e52) list_medium_line_x2_t3_g4_t2

0x3450,	// (0x00036258) list_medium_line_x2_t3_g4_t3_ParamLimits

0x3450,	// (0x00036258) list_medium_line_x2_t3_g4_t3

0x0002,

0xfd56,	// (0x00042b5e) list_medium_line_x2_t3_g4_t_ParamLimits

0xfd56,	// (0x00042b5e) list_medium_line_x2_t3_g4_t

0x389c,	// (0x000366a4) list_medium_line_g2_g1_ParamLimits

0x389c,	// (0x000366a4) list_medium_line_g2_g1

0x38a8,	// (0x000366b0) list_medium_line_g2_g2_ParamLimits

0x38a8,	// (0x000366b0) list_medium_line_g2_g2

0x0001,

0xfa1f,	// (0x00042827) list_medium_line_g2_g_ParamLimits

0xfa1f,	// (0x00042827) list_medium_line_g2_g

0x4063,	// (0x00036e6b) list_medium_line_g2_t1_ParamLimits

0x4063,	// (0x00036e6b) list_medium_line_g2_t1

0x389c,	// (0x000366a4) list_medium_line_t3_g2_g1_ParamLimits

0x389c,	// (0x000366a4) list_medium_line_t3_g2_g1

0x38a8,	// (0x000366b0) list_medium_line_t3_g2_g2_ParamLimits

0x38a8,	// (0x000366b0) list_medium_line_t3_g2_g2

0x0001,

0xfa1f,	// (0x00042827) list_medium_line_t3_g2_g_ParamLimits

0xfa1f,	// (0x00042827) list_medium_line_t3_g2_g

0x4078,	// (0x00036e80) list_medium_line_t3_g2_t1_ParamLimits

0x4078,	// (0x00036e80) list_medium_line_t3_g2_t1

0x408f,	// (0x00036e97) list_medium_line_t3_g2_t2_ParamLimits

0x408f,	// (0x00036e97) list_medium_line_t3_g2_t2

0x40a4,	// (0x00036eac) list_medium_line_t3_g2_t3_ParamLimits

0x40a4,	// (0x00036eac) list_medium_line_t3_g2_t3

0x0002,

0xfd5d,	// (0x00042b65) list_medium_line_t3_g2_t_ParamLimits

0xfd5d,	// (0x00042b65) list_medium_line_t3_g2_t

0x3cfb,	// (0x00036b03) list_medium_line_right_icon_g1

0x40bd,	// (0x00036ec5) list_medium_line_right_icon_t1

0x389c,	// (0x000366a4) list_medium_line_t2_g1_ParamLimits

0x389c,	// (0x000366a4) list_medium_line_t2_g1

0x40cb,	// (0x00036ed3) list_medium_line_t2_t1_ParamLimits

0x40cb,	// (0x00036ed3) list_medium_line_t2_t1

0x40e5,	// (0x00036eed) list_medium_line_t2_t2_ParamLimits

0x40e5,	// (0x00036eed) list_medium_line_t2_t2

0x0001,

0xfd64,	// (0x00042b6c) list_medium_line_t2_t_ParamLimits

0xfd64,	// (0x00042b6c) list_medium_line_t2_t

0x389c,	// (0x000366a4) list_medium_line_t3_g1_ParamLimits

0x389c,	// (0x000366a4) list_medium_line_t3_g1

0x40fa,	// (0x00036f02) list_medium_line_t3_t1_ParamLimits

0x40fa,	// (0x00036f02) list_medium_line_t3_t1

0x4114,	// (0x00036f1c) list_medium_line_t3_t2_ParamLimits

0x4114,	// (0x00036f1c) list_medium_line_t3_t2

0x412a,	// (0x00036f32) list_medium_line_t3_t3_ParamLimits

0x412a,	// (0x00036f32) list_medium_line_t3_t3

0x0002,

0xfd69,	// (0x00042b71) list_medium_line_t3_t_ParamLimits

0xfd69,	// (0x00042b71) list_medium_line_t3_t

0x389c,	// (0x000366a4) list_medium_line_g3_g1_ParamLimits

0x389c,	// (0x000366a4) list_medium_line_g3_g1

0x413f,	// (0x00036f47) list_medium_line_g3_g2_ParamLimits

0x413f,	// (0x00036f47) list_medium_line_g3_g2

0x38a8,	// (0x000366b0) list_medium_line_g3_g3_ParamLimits

0x38a8,	// (0x000366b0) list_medium_line_g3_g3

0x0002,

0xfd70,	// (0x00042b78) list_medium_line_g3_g_ParamLimits

0xfd70,	// (0x00042b78) list_medium_line_g3_g

0x414b,	// (0x00036f53) list_medium_line_g3_t1_ParamLimits

0x414b,	// (0x00036f53) list_medium_line_g3_t1

0x389c,	// (0x000366a4) list_medium_line_t2_g3_g1_ParamLimits

0x389c,	// (0x000366a4) list_medium_line_t2_g3_g1

0x413f,	// (0x00036f47) list_medium_line_t2_g3_g2_ParamLimits

0x413f,	// (0x00036f47) list_medium_line_t2_g3_g2

0x38a8,	// (0x000366b0) list_medium_line_t2_g3_g3_ParamLimits

0x38a8,	// (0x000366b0) list_medium_line_t2_g3_g3

0x0002,

0xfd70,	// (0x00042b78) list_medium_line_t2_g3_g_ParamLimits

0xfd70,	// (0x00042b78) list_medium_line_t2_g3_g

0x4160,	// (0x00036f68) list_medium_line_t2_g3_t1_ParamLimits

0x4160,	// (0x00036f68) list_medium_line_t2_g3_t1

0x4177,	// (0x00036f7f) list_medium_line_t2_g3_t2_ParamLimits

0x4177,	// (0x00036f7f) list_medium_line_t2_g3_t2

0x0001,

0xfd77,	// (0x00042b7f) list_medium_line_t2_g3_t_ParamLimits

0xfd77,	// (0x00042b7f) list_medium_line_t2_g3_t

0x389c,	// (0x000366a4) list_medium_line_t3_g3_g1_ParamLimits

0x389c,	// (0x000366a4) list_medium_line_t3_g3_g1

0x413f,	// (0x00036f47) list_medium_line_t3_g3_g2_ParamLimits

0x413f,	// (0x00036f47) list_medium_line_t3_g3_g2

0x38a8,	// (0x000366b0) list_medium_line_t3_g3_g3_ParamLimits

0x38a8,	// (0x000366b0) list_medium_line_t3_g3_g3

0x0002,

0xfd70,	// (0x00042b78) list_medium_line_t3_g3_g_ParamLimits

0xfd70,	// (0x00042b78) list_medium_line_t3_g3_g

0x418c,	// (0x00036f94) list_medium_line_t3_g3_t1_ParamLimits

0x418c,	// (0x00036f94) list_medium_line_t3_g3_t1

0x41a0,	// (0x00036fa8) list_medium_line_t3_g3_t2_ParamLimits

0x41a0,	// (0x00036fa8) list_medium_line_t3_g3_t2

0x41b2,	// (0x00036fba) list_medium_line_t3_g3_t3_ParamLimits

0x41b2,	// (0x00036fba) list_medium_line_t3_g3_t3

0x0002,

0xfd7c,	// (0x00042b84) list_medium_line_t3_g3_t_ParamLimits

0xfd7c,	// (0x00042b84) list_medium_line_t3_g3_t

0x3e77,	// (0x00036c7f) list_medium_line_right_iconx2_g1

0x3cfb,	// (0x00036b03) list_medium_line_right_iconx2_g2

0x0001,

0xfd83,	// (0x00042b8b) list_medium_line_right_iconx2_g

0x41c6,	// (0x00036fce) list_medium_line_right_iconx2_t1

0x3e77,	// (0x00036c7f) list_medium_line_t2_right_iconx2_g1

0x3cfb,	// (0x00036b03) list_medium_line_t2_right_iconx2_g2

0x0001,

0xfd83,	// (0x00042b8b) list_medium_line_t2_right_iconx2_g

0x41d4,	// (0x00036fdc) list_medium_line_t2_right_iconx2_t1

0x41e4,	// (0x00036fec) list_medium_line_t2_right_iconx2_t2

0x0001,

0xfd88,	// (0x00042b90) list_medium_line_t2_right_iconx2_t

0x41f2,	// (0x00036ffa) list_medium_line_x4_t4_t1

0x4200,	// (0x00037008) list_medium_line_x4_t4_t2

0x4210,	// (0x00037018) list_medium_line_x4_t4_t3

0x4220,	// (0x00037028) list_medium_line_x4_t4_t4

0x0003,

0xfd8d,	// (0x00042b95) list_medium_line_x4_t4_t

0xb3eb,	// (0x0003e1f3) tport_appsw_pane_ParamLimits

0xb3eb,	// (0x0003e1f3) tport_appsw_pane

0xb3f9,	// (0x0003e201) tport_contact_pane_ParamLimits

0xb3f9,	// (0x0003e201) tport_contact_pane

0xb407,	// (0x0003e20f) tport_listscroll_pane_ParamLimits

0xb407,	// (0x0003e20f) tport_listscroll_pane

0xb415,	// (0x0003e21d) cell_tport_appsw_pane_ParamLimits

0xb415,	// (0x0003e21d) cell_tport_appsw_pane

0xeb2b,	// (0x00041933) tport_appsw_pane_g1_ParamLimits

0xeb2b,	// (0x00041933) tport_appsw_pane_g1

0x1ad4,	// (0x000348dc) tport_contact_pane_g1

0x1add,	// (0x000348e5) tport_contact_pane_t1

0x1aeb,	// (0x000348f3) tport_contact_pane_t2

0x0001,

0xfd96,	// (0x00042b9e) tport_contact_pane_t

0x1af9,	// (0x00034901) list_tport_pane

0x1b02,	// (0x0003490a) scroll_pane_cp_030

0xb440,	// (0x0003e248) cell_tport_appsw_pane_g1

0x1b1b,	// (0x00034923) cell_tport_appsw_pane_t1

0x45e9,	// (0x000373f1) grid_highlight_pane_cp019

0xb450,	// (0x0003e258) list_tport_double_graphic_pane_ParamLimits

0xb450,	// (0x0003e258) list_tport_double_graphic_pane

0x7737,	// (0x0003a53f) list_highlight_pane_cp023_ParamLimits

0x7737,	// (0x0003a53f) list_highlight_pane_cp023

0xb461,	// (0x0003e269) list_tport_double_graphic_pane_g1_ParamLimits

0xb461,	// (0x0003e269) list_tport_double_graphic_pane_g1

0xb46e,	// (0x0003e276) list_tport_double_graphic_pane_t1_ParamLimits

0xb46e,	// (0x0003e276) list_tport_double_graphic_pane_t1

0xb483,	// (0x0003e28b) list_tport_double_graphic_pane_t2_ParamLimits

0xb483,	// (0x0003e28b) list_tport_double_graphic_pane_t2

0x0001,

0xfda2,	// (0x00042baa) list_tport_double_graphic_pane_t_ParamLimits

0xfda2,	// (0x00042baa) list_tport_double_graphic_pane_t

0x45e9,	// (0x000373f1) main_cale_note_pane

0x992c,	// (0x0003c734) cell_vitu2_function_top_wide_pane_cp01_ParamLimits

0x992c,	// (0x0003c734) cell_vitu2_function_top_wide_pane_cp01

0xafe9,	// (0x0003ddf1) wait_bar_pane_cp05_ParamLimits

0x45e9,	// (0x000373f1) listscroll_cmail_pane

0x1b31,	// (0x00034939) list_cmail_pane

0xb49f,	// (0x0003e2a7) list_cmail_body_pane

0xb4b4,	// (0x0003e2bc) list_single_cmail_header_caption_pane

0xb4ce,	// (0x0003e2d6) list_single_cmail_header_detail_pane_ParamLimits

0xb4ce,	// (0x0003e2d6) list_single_cmail_header_detail_pane

0xb4fd,	// (0x0003e305) list_single_cmail_header_caption_pane_t1

0x4230,	// (0x00037038) list_single_cmail_header_detail_pane_g1_ParamLimits

0x4230,	// (0x00037038) list_single_cmail_header_detail_pane_g1

0x4248,	// (0x00037050) list_single_cmail_header_detail_pane_g2_ParamLimits

0x4248,	// (0x00037050) list_single_cmail_header_detail_pane_g2

0x0002,

0xfda7,	// (0x00042baf) list_single_cmail_header_detail_pane_g_ParamLimits

0xfda7,	// (0x00042baf) list_single_cmail_header_detail_pane_g

0x4254,	// (0x0003705c) list_single_cmail_header_detail_pane_t1_ParamLimits

0x4254,	// (0x0003705c) list_single_cmail_header_detail_pane_t1

0x42b8,	// (0x000370c0) list_single_cmail_header_editor_pane_bg_ParamLimits

0x42b8,	// (0x000370c0) list_single_cmail_header_editor_pane_bg

0x13c4,	// (0x000341cc) list_cmail_body_pane_g1

0x1bba,	// (0x000349c2) list_cmail_body_pane_t1

0x0435,	// (0x0003323d) list_single_cmail_header_editor_pane_bg_g1

0xc99a,	// (0x0003f7a2) list_single_cmail_header_editor_pane_bg_g1_copy1

0x0445,	// (0x0003324d) list_single_cmail_header_editor_pane_bg_g1_copy2

0x043d,	// (0x00033245) list_single_cmail_header_editor_pane_bg_g1_copy3

0x06d0,	// (0x000334d8) list_single_cmail_header_editor_pane_bg_g1_copy4

0x0465,	// (0x0003326d) list_single_cmail_header_editor_pane_bg_g1_copy4_copy1

0x0455,	// (0x0003325d) list_single_cmail_header_editor_pane_bg_g1_copy4_copy2

0x045d,	// (0x00033265) list_single_cmail_header_editor_pane_bg_g1_copy4_copy3

0xc97a,	// (0x0003f782) list_single_cmail_header_editor_pane_bg_g1_copy4_copy3_copy1

0xb50d,	// (0x0003e315) calenote_gesture_pane_ParamLimits

0xb50d,	// (0x0003e315) calenote_gesture_pane

0xb527,	// (0x0003e32f) calenote_window_pane_ParamLimits

0xb527,	// (0x0003e32f) calenote_window_pane

0x1bc8,	// (0x000349d0) popup_note_window_cp01

0xb53f,	// (0x0003e347) calenote_swipe_1_pane_ParamLimits

0xb53f,	// (0x0003e347) calenote_swipe_1_pane

0xb33f,	// (0x0003e147) calenote_swipe_2_pane_ParamLimits

0xb33f,	// (0x0003e147) calenote_swipe_2_pane

0x175f,	// (0x00034567) calenote_swipe_1_pane_g1_ParamLimits

0x175f,	// (0x00034567) calenote_swipe_1_pane_g1

0x176c,	// (0x00034574) calenote_swipe_1_pane_g2_ParamLimits

0x176c,	// (0x00034574) calenote_swipe_1_pane_g2

0x0001,

0xfcd6,	// (0x00042ade) calenote_swipe_1_pane_g_ParamLimits

0xfcd6,	// (0x00042ade) calenote_swipe_1_pane_g

0x1bda,	// (0x000349e2) calenote_swipe_1_pane_t1_ParamLimits

0x1bda,	// (0x000349e2) calenote_swipe_1_pane_t1

0x175f,	// (0x00034567) calenote_swipe_2_pane_g1_ParamLimits

0x175f,	// (0x00034567) calenote_swipe_2_pane_g1

0x1bf9,	// (0x00034a01) calenote_swipe_2_pane_g2_ParamLimits

0x1bf9,	// (0x00034a01) calenote_swipe_2_pane_g2

0x0001,

0xfdb3,	// (0x00042bbb) calenote_swipe_2_pane_g_ParamLimits

0xfdb3,	// (0x00042bbb) calenote_swipe_2_pane_g

0x1c05,	// (0x00034a0d) calenote_swipe_2_pane_t1_ParamLimits

0x1c05,	// (0x00034a0d) calenote_swipe_2_pane_t1

0x45e9,	// (0x000373f1) main_mup_navstr_pane

0x8706,	// (0x0003b50e) main_mup3_pane_t7_ParamLimits

0x8706,	// (0x0003b50e) main_mup3_pane_t7

0x90d9,	// (0x0003bee1) main_mp4_pane_g6_ParamLimits

0x90d9,	// (0x0003bee1) main_mp4_pane_g6

0x943b,	// (0x0003c243) main_image3_pane_t4_ParamLimits

0x943b,	// (0x0003c243) main_image3_pane_t4

0xb552,	// (0x0003e35a) popup_navstr_preview_pane_ParamLimits

0xb552,	// (0x0003e35a) popup_navstr_preview_pane

0xb55e,	// (0x0003e366) scroll_navstr_pane_ParamLimits

0xb55e,	// (0x0003e366) scroll_navstr_pane

0x45e9,	// (0x000373f1) bg_popup_preview_window_pane_cp04

0x1c2c,	// (0x00034a34) popup_navstr_preview_pane_t1

0xb56a,	// (0x0003e372) scroll_navstr_pane_g1_ParamLimits

0xb56a,	// (0x0003e372) scroll_navstr_pane_g1

0xb577,	// (0x0003e37f) scroll_navstr_pane_t1_ParamLimits

0xb577,	// (0x0003e37f) scroll_navstr_pane_t1

0x1bd1,	// (0x000349d9) bg_button_pane_cp014

0x1bd1,	// (0x000349d9) bg_button_pane_cp030

0x3c5b,	// (0x00036a63) list_double_fisheye_pane_g4_ParamLimits

0x3c5b,	// (0x00036a63) list_double_fisheye_pane_g4

0x3c67,	// (0x00036a6f) list_double_fisheye_pane_g5_ParamLimits

0x3c67,	// (0x00036a6f) list_double_fisheye_pane_g5

0x1b39,	// (0x00034941) sp_fs_scroll_pane_cp03

0x18a2,	// (0x000346aa) main_sp_fs_ctrlbar_pane_g1_ParamLimits

0x18ae,	// (0x000346b6) main_sp_fs_ctrlbar_pane_g2_ParamLimits

0xfcf3,	// (0x00042afb) main_sp_fs_ctrlbar_pane_g_ParamLimits

0x18ba,	// (0x000346c2) main_sp_fs_ctrlbar_pane_t1_ParamLimits

0xb495,	// (0x0003e29d) sp_fs_scroll_pane_cp02

0xc6a6,	// (0x0003f4ae) popup_sp_fs_calendar_preview_list_single_pane_ParamLimits

0xc6a6,	// (0x0003f4ae) popup_sp_fs_calendar_preview_list_single_pane

0x45e9,	// (0x000373f1) main_cam6_pano_pane

0x7737,	// (0x0003a53f) main_mup3_pane_ParamLimits

0x45e9,	// (0x000373f1) main_phacti_pane

0xaeba,	// (0x0003dcc2) bg_button_pane_cp11

0xaed2,	// (0x0003dcda) main_mobtv_info_pane_g2_ParamLimits

0xaed2,	// (0x0003dcda) main_mobtv_info_pane_g2

0x0001,

0xfc53,	// (0x00042a5b) main_mobtv_info_pane_g_ParamLimits

0xfc53,	// (0x00042a5b) main_mobtv_info_pane_g

0xb086,	// (0x0003de8e) sc_clock_pane_t5_ParamLimits

0xb086,	// (0x0003de8e) sc_clock_pane_t5

0xb12b,	// (0x0003df33) main_radioblah_pane_g1_ParamLimits

0x1654,	// (0x0003445c) main_radioblah_pane_t3_ParamLimits

0x1654,	// (0x0003445c) main_radioblah_pane_t3

0x166c,	// (0x00034474) main_radioblah_pane_t4_ParamLimits

0x166c,	// (0x00034474) main_radioblah_pane_t4

0xb149,	// (0x0003df51) main_radioblah_text_pane_ParamLimits

0xb149,	// (0x0003df51) main_radioblah_text_pane

0xb156,	// (0x0003df5e) main_radioblah_info_pane_g1_ParamLimits

0xb1ef,	// (0x0003dff7) main_radioblah_info_pane_t4_ParamLimits

0xb1ef,	// (0x0003dff7) main_radioblah_info_pane_t4

0x7737,	// (0x0003a53f) main_sp_fs_calendar_pane

0xb589,	// (0x0003e391) main_phacti_pane_g1

0xb591,	// (0x0003e399) phacti_note_pane_ParamLimits

0xb591,	// (0x0003e399) phacti_note_pane

0x1c43,	// (0x00034a4b) phacti_term_pane_ParamLimits

0x1c43,	// (0x00034a4b) phacti_term_pane

0x1c58,	// (0x00034a60) phacti_note_pane_t1_ParamLimits

0x1c58,	// (0x00034a60) phacti_note_pane_t1

0x42ca,	// (0x000370d2) phacti_term_pane_g1

0x42d2,	// (0x000370da) phacti_term_pane_t1_ParamLimits

0x42d2,	// (0x000370da) phacti_term_pane_t1

0x1ca1,	// (0x00034aa9) popup_sp_fs_calendar_preview_list_single_pane_g1

0x1ca9,	// (0x00034ab1) popup_sp_fs_calendar_preview_list_single_pane_g2

0x0001,

0xfdbd,	// (0x00042bc5) popup_sp_fs_calendar_preview_list_single_pane_g

0x1cb1,	// (0x00034ab9) popup_sp_fs_calendar_preview_list_single_pane_t1_ParamLimits

0x1cb1,	// (0x00034ab9) popup_sp_fs_calendar_preview_list_single_pane_t1

0x1cc7,	// (0x00034acf) aid_popup_sp_fs_bg_corner_pane

0xe896,	// (0x0004169e) popup_sp_fs_calendar_preview_bg_pane_g1

0x45e9,	// (0x000373f1) popup_sp_fs_calendar_preview_bg_pane

0x1ccf,	// (0x00034ad7) popup_sp_fs_calendar_preview_list_pane

0x7737,	// (0x0003a53f) bg_main_sp_fs_cale_pane_ParamLimits

0x7737,	// (0x0003a53f) bg_main_sp_fs_cale_pane

0x42fc,	// (0x00037104) listscroll_cale_mrui_pane_ParamLimits

0x42fc,	// (0x00037104) listscroll_cale_mrui_pane

0x4310,	// (0x00037118) listscroll_sp_fs_schedule_track_pane

0x4319,	// (0x00037121) main_sp_fs_ctrlbar_pane_cp01_ParamLimits

0x4319,	// (0x00037121) main_sp_fs_ctrlbar_pane_cp01

0x1d0e,	// (0x00034b16) main_sp_fs_ribbon_pane

0x1d16,	// (0x00034b1e) popup_sp_fs_cale_preview_window

0xb5d0,	// (0x0003e3d8) list_single_sp_fs_schedule_track_pane_ParamLimits

0xb5d0,	// (0x0003e3d8) list_single_sp_fs_schedule_track_pane

0x48a1,	// (0x000376a9) bg_sp_fs_highlight_list_pane_cp03_ParamLimits

0x48a1,	// (0x000376a9) bg_sp_fs_highlight_list_pane_cp03

0xb5e2,	// (0x0003e3ea) list_single_sp_fs_schedule_track_pane_g1_ParamLimits

0xb5e2,	// (0x0003e3ea) list_single_sp_fs_schedule_track_pane_g1

0xb5ee,	// (0x0003e3f6) list_single_sp_fs_schedule_track_pane_g2_ParamLimits

0xb5ee,	// (0x0003e3f6) list_single_sp_fs_schedule_track_pane_g2

0x0001,

0xfdc2,	// (0x00042bca) list_single_sp_fs_schedule_track_pane_g_ParamLimits

0xfdc2,	// (0x00042bca) list_single_sp_fs_schedule_track_pane_g

0xb5fa,	// (0x0003e402) list_single_sp_fs_schedule_track_pane_t1_ParamLimits

0xb5fa,	// (0x0003e402) list_single_sp_fs_schedule_track_pane_t1

0xb618,	// (0x0003e420) sp_fs_schedule_track_pane_ParamLimits

0xb618,	// (0x0003e420) sp_fs_schedule_track_pane

0x1d28,	// (0x00034b30) sp_fs_schedule_track_pane_g1

0x1d30,	// (0x00034b38) sp_fs_schedule_track_pane_g2

0x1d38,	// (0x00034b40) sp_fs_schedule_track_pane_g3

0x1d40,	// (0x00034b48) sp_fs_schedule_track_pane_g4

0x1d48,	// (0x00034b50) sp_fs_schedule_track_pane_g5

0x0004,

0xfdc7,	// (0x00042bcf) sp_fs_schedule_track_pane_g

0x0435,	// (0x0003323d) bg_sp_fs_schedule_viewer_highlight_g1

0xc99a,	// (0x0003f7a2) bg_sp_fs_schedule_viewer_highlight_g2

0x043d,	// (0x00033245) bg_sp_fs_schedule_viewer_highlight_g3

0x0445,	// (0x0003324d) bg_sp_fs_schedule_viewer_highlight_g4

0x06d0,	// (0x000334d8) bg_sp_fs_schedule_viewer_highlight_g5

0x0455,	// (0x0003325d) bg_sp_fs_schedule_viewer_highlight_g6

0x045d,	// (0x00033265) bg_sp_fs_schedule_viewer_highlight_g7

0x0465,	// (0x0003326d) bg_sp_fs_schedule_viewer_highlight_g8

0xc97a,	// (0x0003f782) bg_sp_fs_schedule_viewer_highlight_g9

0x0008,

0xfdd2,	// (0x00042bda) bg_sp_fs_schedule_viewer_highlight_g

0x45e9,	// (0x000373f1) bg_main_sp_fs_ribbon_pane

0xb62a,	// (0x0003e432) main_sp_fs_ribbon_pane_g1

0x1d50,	// (0x00034b58) main_sp_fs_ribbon_pane_t1

0xb633,	// (0x0003e43b) main_sp_fs_ribbon_pane_t2

0x1d5f,	// (0x00034b67) main_sp_fs_ribbon_pane_t3

0x0002,

0xfde5,	// (0x00042bed) main_sp_fs_ribbon_pane_t

0x1d6e,	// (0x00034b76) main_sp_fs_ribbon_scheduler_pane

0x1d76,	// (0x00034b7e) bg_main_sp_fs_ribbon_pane_g1

0x1d7f,	// (0x00034b87) bg_main_sp_fs_ribbon_pane_g2

0x1d88,	// (0x00034b90) bg_main_sp_fs_ribbon_pane_g3

0x0002,

0xfdec,	// (0x00042bf4) bg_main_sp_fs_ribbon_pane_g

0x1d90,	// (0x00034b98) main_sp_fs_ribbon_scheduler_pane_g1

0x1d99,	// (0x00034ba1) main_sp_fs_ribbon_scheduler_pane_g2

0x1da2,	// (0x00034baa) main_sp_fs_ribbon_scheduler_pane_g3

0x0002,

0xfdf3,	// (0x00042bfb) main_sp_fs_ribbon_scheduler_pane_g

0x1dab,	// (0x00034bb3) list_cale_mrui_pane

0xb642,	// (0x0003e44a) sp_fs_scroll_pane_cp07_ParamLimits

0xb642,	// (0x0003e44a) sp_fs_scroll_pane_cp07

0xb658,	// (0x0003e460) bg_sp_fs_schedule_viewer_highlight_ParamLimits

0xb658,	// (0x0003e460) bg_sp_fs_schedule_viewer_highlight

0x1db4,	// (0x00034bbc) list_single_sp_fs_schedule_track_pane_cp01

0x1dbc,	// (0x00034bc4) list_sp_fs_schedule_track_pane

0x1dc4,	// (0x00034bcc) sp_fs_scroll_pane_cp06_ParamLimits

0x1dc4,	// (0x00034bcc) sp_fs_scroll_pane_cp06

0xe896,	// (0x0004169e) bgmain_sp_fs_calendar_pane_g1

0x432a,	// (0x00037132) list_single_cale_mrui_pane_ParamLimits

0x432a,	// (0x00037132) list_single_cale_mrui_pane

0x434c,	// (0x00037154) list_single_cale_mrui_row_pane_ParamLimits

0x434c,	// (0x00037154) list_single_cale_mrui_row_pane

0x4359,	// (0x00037161) list_single_cale_mrui_row_pane_g1_ParamLimits

0x4359,	// (0x00037161) list_single_cale_mrui_row_pane_g1

0x4391,	// (0x00037199) list_single_cale_mrui_row_pane_t1_ParamLimits

0x4391,	// (0x00037199) list_single_cale_mrui_row_pane_t1

0x43a3,	// (0x000371ab) list_single_cale_mrui_row_pane_t2_ParamLimits

0x43a3,	// (0x000371ab) list_single_cale_mrui_row_pane_t2

0x4409,	// (0x00037211) list_single_cale_mrui_row_pane_t3_ParamLimits

0x4409,	// (0x00037211) list_single_cale_mrui_row_pane_t3

0x4438,	// (0x00037240) list_single_cale_mrui_row_pane_t4_ParamLimits

0x4438,	// (0x00037240) list_single_cale_mrui_row_pane_t4

0x0003,

0xfdff,	// (0x00042c07) list_single_cale_mrui_row_pane_t_ParamLimits

0xfdff,	// (0x00042c07) list_single_cale_mrui_row_pane_t

0x4467,	// (0x0003726f) list_single_cmail_header_editor_pane_bg_cp01_ParamLimits

0x4467,	// (0x0003726f) list_single_cmail_header_editor_pane_bg_cp01

0x448b,	// (0x00037293) list_single_cmail_header_editor_pane_bg_cp02_ParamLimits

0x448b,	// (0x00037293) list_single_cmail_header_editor_pane_bg_cp02

0xb665,	// (0x0003e46d) main_radioblah_text_pane_t1_ParamLimits

0xb665,	// (0x0003e46d) main_radioblah_text_pane_t1

0x1e8b,	// (0x00034c93) cam6_indi_pane_cp01

0x1e93,	// (0x00034c9b) cam6_mode_pane_cp01

0x1e9b,	// (0x00034ca3) cam6_pano_pane

0x1ea4,	// (0x00034cac) cam6_zoom_pane_cp01

0x1eae,	// (0x00034cb6) cam6_pano_image_pane

0x1eb7,	// (0x00034cbf) cam6_pano_pane_g1

0x13c4,	// (0x000341cc) cam6_pano_pane_g2

0x1ec0,	// (0x00034cc8) cam6_pano_pane_g3

0x1ec9,	// (0x00034cd1) cam6_pano_pane_g4

0xee02,	// (0x00041c0a) cam6_pano_pane_g5

0x1ed2,	// (0x00034cda) cam6_pano_pane_g6

0x1eda,	// (0x00034ce2) cam6_pano_pane_g7

0x1ee2,	// (0x00034cea) cam6_pano_pane_g8

0x1eeb,	// (0x00034cf3) cam6_pano_pane_g9

0x0008,

0xfe08,	// (0x00042c10) cam6_pano_pane_g

0x45e9,	// (0x000373f1) main_browser_tag_pane

0x1c24,	// (0x00034a2c) grid_navstr_albumart_pane

0x1ef6,	// (0x00034cfe) cell_navstr_albumart_pane_ParamLimits

0x1ef6,	// (0x00034cfe) cell_navstr_albumart_pane

0x1f12,	// (0x00034d1a) cell_navstr_albumart_pane_g1

0xe22c,	// (0x00041034) cell_navstr_albumart_pane_g2

0xe23c,	// (0x00041044) cell_navstr_albumart_pane_g3

0xe234,	// (0x0004103c) cell_navstr_albumart_pane_g4

0x0003,

0xfe1b,	// (0x00042c23) cell_navstr_albumart_pane_g

0xb680,	// (0x0003e488) bt_list_pane_ParamLimits

0xb680,	// (0x0003e488) bt_list_pane

0xb699,	// (0x0003e4a1) bt_list_pane_t1

0xb6a8,	// (0x0003e4b0) bt_list_pane_t2

0x0001,

0xfe24,	// (0x00042c2c) bt_list_pane_t

0x45e9,	// (0x000373f1) main_cale_prevew_pane

0xb6b7,	// (0x0003e4bf) popup_cale_preview_window_ParamLimits

0xb6b7,	// (0x0003e4bf) popup_cale_preview_window

0x7737,	// (0x0003a53f) bg_popup_preview_window_pane_cp05_ParamLimits

0x7737,	// (0x0003a53f) bg_popup_preview_window_pane_cp05

0x1f1a,	// (0x00034d22) list_cale_preview_pane_ParamLimits

0x1f1a,	// (0x00034d22) list_cale_preview_pane

0xb6d2,	// (0x0003e4da) list_double_cale_preview_pane_ParamLimits

0xb6d2,	// (0x0003e4da) list_double_cale_preview_pane

0xb6e6,	// (0x0003e4ee) list_single_cale_preview_pane_ParamLimits

0xb6e6,	// (0x0003e4ee) list_single_cale_preview_pane

0xb6fe,	// (0x0003e506) list_single_cale_preview_pane_g1

0xb706,	// (0x0003e50e) list_single_cale_preview_pane_t1_ParamLimits

0xb706,	// (0x0003e50e) list_single_cale_preview_pane_t1

0xb71b,	// (0x0003e523) list_double_cale_preview_pane_g1

0xb723,	// (0x0003e52b) list_double_cale_preview_pane_t1_ParamLimits

0xb723,	// (0x0003e52b) list_double_cale_preview_pane_t1

0xb738,	// (0x0003e540) list_double_cale_preview_pane_t2_ParamLimits

0xb738,	// (0x0003e540) list_double_cale_preview_pane_t2

0x0001,

0xfe29,	// (0x00042c31) list_double_cale_preview_pane_t_ParamLimits

0xfe29,	// (0x00042c31) list_double_cale_preview_pane_t

0x45e9,	// (0x000373f1) main_ezdial_pane

0x7737,	// (0x0003a53f) main_sp_fs_email_pane_ParamLimits

0xb359,	// (0x0003e161) cmail_ddmenu_btn01_pane_ParamLimits

0xb359,	// (0x0003e161) cmail_ddmenu_btn01_pane

0xb376,	// (0x0003e17e) cmail_ddmenu_btn02_pane_ParamLimits

0xb376,	// (0x0003e17e) cmail_ddmenu_btn02_pane

0xb394,	// (0x0003e19c) cmail_ddmenu_btn03_pane_ParamLimits

0xb394,	// (0x0003e19c) cmail_ddmenu_btn03_pane

0x3d21,	// (0x00036b29) main_sp_fs_ctrlbar_pane_ParamLimits

0x3d3d,	// (0x00036b45) main_sp_fs_listscroll_pane_te_cp01_ParamLimits

0xb49f,	// (0x0003e2a7) list_cmail_body_pane_ParamLimits

0x1b48,	// (0x00034950) bg_button_pane_cp12

0x1b5d,	// (0x00034965) list_single_cmail_header_detail_pane_g3_ParamLimits

0x1b5d,	// (0x00034965) list_single_cmail_header_detail_pane_g3

0x4292,	// (0x0003709a) list_single_cmail_header_detail_pane_t2_ParamLimits

0x4292,	// (0x0003709a) list_single_cmail_header_detail_pane_t2

0x0001,

0xfdae,	// (0x00042bb6) list_single_cmail_header_detail_pane_t_ParamLimits

0xfdae,	// (0x00042bb6) list_single_cmail_header_detail_pane_t

0x42e7,	// (0x000370ef) phacti_term_pane_t2_ParamLimits

0x42e7,	// (0x000370ef) phacti_term_pane_t2

0x0001,

0xfdb8,	// (0x00042bc0) phacti_term_pane_t_ParamLimits

0xfdb8,	// (0x00042bc0) phacti_term_pane_t

0x1f26,	// (0x00034d2e) aid_size_list_single_double

0xb750,	// (0x0003e558) popup_ezdial_listscroll_window

0xb770,	// (0x0003e578) popup_number_entry_window_cp01

0xcfe4,	// (0x0003fdec) bg_popup_call_pane_cp09

0x1f32,	// (0x00034d3a) ezdial_list_pane

0x1f3a,	// (0x00034d42) scroll_pane_cp23

0xe66d,	// (0x00041475) bg_button_pane_cp028_ParamLimits

0xe66d,	// (0x00041475) bg_button_pane_cp028

0xb77e,	// (0x0003e586) cmail_ddmenu_btn01_pane_g1_ParamLimits

0xb77e,	// (0x0003e586) cmail_ddmenu_btn01_pane_g1

0xb78e,	// (0x0003e596) cmail_ddmenu_btn01_pane_g2_ParamLimits

0xb78e,	// (0x0003e596) cmail_ddmenu_btn01_pane_g2

0x0001,

0xfe2e,	// (0x00042c36) cmail_ddmenu_btn01_pane_g_ParamLimits

0xfe2e,	// (0x00042c36) cmail_ddmenu_btn01_pane_g

0x1f42,	// (0x00034d4a) cmail_ddmenu_btn01_pane_t1_ParamLimits

0x1f42,	// (0x00034d4a) cmail_ddmenu_btn01_pane_t1

0xe413,	// (0x0004121b) bg_button_pane_cp029_ParamLimits

0xe413,	// (0x0004121b) bg_button_pane_cp029

0xb78e,	// (0x0003e596) cmail_ddmenu_btn02_pane_g1_ParamLimits

0xb78e,	// (0x0003e596) cmail_ddmenu_btn02_pane_g1

0xb7a6,	// (0x0003e5ae) cmail_ddmenu_btn02_pane_t1_ParamLimits

0xb7a6,	// (0x0003e5ae) cmail_ddmenu_btn02_pane_t1

0x48a1,	// (0x000376a9) bg_button_pane_cp031_ParamLimits

0x48a1,	// (0x000376a9) bg_button_pane_cp031

0xb78e,	// (0x0003e596) cmail_ddmenu_btn03_pane_g1_ParamLimits

0xb78e,	// (0x0003e596) cmail_ddmenu_btn03_pane_g1

0xb7a6,	// (0x0003e5ae) cmail_ddmenu_btn03_pane_t1_ParamLimits

0xb7a6,	// (0x0003e5ae) cmail_ddmenu_btn03_pane_t1

0x92e4,	// (0x0003c0ec) cell_dialer2_keypad_pane_t1_ParamLimits

0x92fe,	// (0x0003c106) cell_dialer2_keypad_pane_t1_copy1_ParamLimits

0x92fe,	// (0x0003c106) cell_dialer2_keypad_pane_t1_copy1

0xad4a,	// (0x0003db52) ncimui_group_button_pane

0x7737,	// (0x0003a53f) main_sp_fs_calendar_pane_ParamLimits

0xb4b4,	// (0x0003e2bc) list_single_cmail_header_caption_pane_ParamLimits

0x1cd7,	// (0x00034adf) aid_recal_txt_sm_pane

0x45e9,	// (0x000373f1) mian_recal_day_pane

0x1d16,	// (0x00034b1e) popup_sp_fs_cale_preview_window_ParamLimits

0x45e9,	// (0x000373f1) list_recal_day_pane

0x1f79,	// (0x00034d81) list_single_recal_day_pane_ParamLimits

0x1f79,	// (0x00034d81) list_single_recal_day_pane

0x1f8b,	// (0x00034d93) list_single_recal_day_pane_g1_ParamLimits

0x1f8b,	// (0x00034d93) list_single_recal_day_pane_g1

0x1f97,	// (0x00034d9f) list_single_recal_day_pane_g2_ParamLimits

0x1f97,	// (0x00034d9f) list_single_recal_day_pane_g2

0x1fa3,	// (0x00034dab) list_single_recal_day_pane_g3_ParamLimits

0x1fa3,	// (0x00034dab) list_single_recal_day_pane_g3

0xb7ca,	// (0x0003e5d2) list_single_recal_day_pane_g4_ParamLimits

0xb7ca,	// (0x0003e5d2) list_single_recal_day_pane_g4

0x1faf,	// (0x00034db7) list_single_recal_day_pane_g5_ParamLimits

0x1faf,	// (0x00034db7) list_single_recal_day_pane_g5

0x1fbb,	// (0x00034dc3) list_single_recal_day_pane_g6_ParamLimits

0x1fbb,	// (0x00034dc3) list_single_recal_day_pane_g6

0x0005,

0xfe3d,	// (0x00042c45) list_single_recal_day_pane_g_ParamLimits

0xfe3d,	// (0x00042c45) list_single_recal_day_pane_g

0x1fc7,	// (0x00034dcf) list_single_recal_day_pane_t1

0x1fd5,	// (0x00034ddd) list_single_recal_day_pane_t2

0x0001,

0xfe4a,	// (0x00042c52) list_single_recal_day_pane_t

0xb7d8,	// (0x0003e5e0) ncimui_query_button_pane_ParamLimits

0xb7d8,	// (0x0003e5e0) ncimui_query_button_pane

0xb7e8,	// (0x0003e5f0) ncimui_query_button_pane_t1_ParamLimits

0xb7e8,	// (0x0003e5f0) ncimui_query_button_pane_t1

0x1fe3,	// (0x00034deb) ncimui_query_button_pane_t2_ParamLimits

0x1fe3,	// (0x00034deb) ncimui_query_button_pane_t2

0x0001,

0xfe4f,	// (0x00042c57) ncimui_query_button_pane_t_ParamLimits

0xfe4f,	// (0x00042c57) ncimui_query_button_pane_t

0xb7fb,	// (0x0003e603) query_button_pane_ParamLimits

0xb7fb,	// (0x0003e603) query_button_pane

0x45e9,	// (0x000373f1) bg_button_pane_cp0028

0x1ff6,	// (0x00034dfe) query_button_pane_t1

0x7753,	// (0x0003a55b) main_tport_pane_ParamLimits

0xb3c2,	// (0x0003e1ca) bg_popup_window_pane_cp01_ParamLimits

0xb3c2,	// (0x0003e1ca) bg_popup_window_pane_cp01

0xb3cf,	// (0x0003e1d7) heading_pane_cp08_ParamLimits

0xb3cf,	// (0x0003e1d7) heading_pane_cp08

0xb3dd,	// (0x0003e1e5) heading_pane_cp07_ParamLimits

0xb3dd,	// (0x0003e1e5) heading_pane_cp07

0x1b13,	// (0x0003491b) cell_tport_appsw_pane_g2

0x0002,

0xfd9b,	// (0x00042ba3) cell_tport_appsw_pane_g

0x3633,	// (0x0003643b) input_candi_list_open_g1

0xcb35,	// (0x0003f93d) list_cale_time_pane_g6_ParamLimits

0xcb35,	// (0x0003f93d) list_cale_time_pane_g6

0x81c0,	// (0x0003afc8) aid_size_touch_calib_1_ParamLimits

0x81c0,	// (0x0003afc8) aid_size_touch_calib_1

0x81cc,	// (0x0003afd4) aid_size_touch_calib_2_ParamLimits

0x81cc,	// (0x0003afd4) aid_size_touch_calib_2

0x81da,	// (0x0003afe2) aid_size_touch_calib_3_ParamLimits

0x81da,	// (0x0003afe2) aid_size_touch_calib_3

0x81ea,	// (0x0003aff2) aid_size_touch_calib_4_ParamLimits

0x81ea,	// (0x0003aff2) aid_size_touch_calib_4

0x81f8,	// (0x0003b000) main_touch_calib_button_group_pane_ParamLimits

0x81f8,	// (0x0003b000) main_touch_calib_button_group_pane

0x8206,	// (0x0003b00e) main_touch_calib_pane_g1_ParamLimits

0x8212,	// (0x0003b01a) main_touch_calib_pane_g2_ParamLimits

0x821e,	// (0x0003b026) main_touch_calib_pane_g3_ParamLimits

0x822a,	// (0x0003b032) main_touch_calib_pane_g4_ParamLimits

0xf775,	// (0x0004257d) main_touch_calib_pane_g_ParamLimits

0x8236,	// (0x0003b03e) main_touch_calib_pane_t1_ParamLimits

0x824d,	// (0x0003b055) main_touch_calib_pane_t2_ParamLimits

0x8264,	// (0x0003b06c) main_touch_calib_pane_t3_ParamLimits

0x8278,	// (0x0003b080) main_touch_calib_pane_t4_ParamLimits

0x828e,	// (0x0003b096) main_touch_calib_pane_t5_ParamLimits

0xf77e,	// (0x00042586) main_touch_calib_pane_t_ParamLimits

0xebcc,	// (0x000419d4) list_single_fp_cale_pane_g3_ParamLimits

0xebcc,	// (0x000419d4) list_single_fp_cale_pane_g3

0x7737,	// (0x0003a53f) bg_button_pane_cp012_ParamLimits

0x7737,	// (0x0003a53f) bg_vkb2_func_pane_cp03_ParamLimits

0xa08b,	// (0x0003ce93) cell_vitu2_function_top_pane_g1_ParamLimits

0x7737,	// (0x0003a53f) bg_vkb2_func_pane_cp04_ParamLimits

0xace6,	// (0x0003daee) main_ncimui_button_group_pane_ParamLimits

0xace6,	// (0x0003daee) main_ncimui_button_group_pane

0xad38,	// (0x0003db40) main_ncimui_pane_t3_ParamLimits

0xad38,	// (0x0003db40) main_ncimui_pane_t3

0x1c3a,	// (0x00034a42) phacti_button_group_pane

0x1f26,	// (0x00034d2e) aid_size_list_single_double_ParamLimits

0xb750,	// (0x0003e558) popup_ezdial_listscroll_window_ParamLimits

0xb770,	// (0x0003e578) popup_number_entry_window_cp01_ParamLimits

0xb808,	// (0x0003e610) phacti_button_pane_ParamLimits

0xb808,	// (0x0003e610) phacti_button_pane

0x45e9,	// (0x000373f1) bg_button_pane_cp14

0x2004,	// (0x00034e0c) phacti_button_pane_t1

0xb819,	// (0x0003e621) main_touch_calib_button_pane_ParamLimits

0xb819,	// (0x0003e621) main_touch_calib_button_pane

0xc590,	// (0x0003f398) bg_button_pane_cp18_ParamLimits

0xc590,	// (0x0003f398) bg_button_pane_cp18

0x2012,	// (0x00034e1a) main_touch_calib_button_pane_t1_ParamLimits

0x2012,	// (0x00034e1a) main_touch_calib_button_pane_t1

0x2028,	// (0x00034e30) main_touch_calib_button_pane_t2_ParamLimits

0x2028,	// (0x00034e30) main_touch_calib_button_pane_t2

0x0001,

0xfe54,	// (0x00042c5c) main_touch_calib_button_pane_t_ParamLimits

0xfe54,	// (0x00042c5c) main_touch_calib_button_pane_t

0x45e9,	// (0x000373f1) cell_ncimui_button_pane

0x45e9,	// (0x000373f1) bg_button_pane_cp032

0x2046,	// (0x00034e4e) cell_ncimui_button_pane_t1

0x935a,	// (0x0003c162) image3_infobar_pane_ParamLimits

0x935a,	// (0x0003c162) image3_infobar_pane

0xb0a8,	// (0x0003deb0) fs_bigclock_status_pane_ParamLimits

0xb0a8,	// (0x0003deb0) fs_bigclock_status_pane

0xb0b5,	// (0x0003debd) main_fs_bigclock_clock_pane_ParamLimits

0xb0b5,	// (0x0003debd) main_fs_bigclock_clock_pane

0xb0c5,	// (0x0003decd) main_fs_bigclock_indi_pane_ParamLimits

0xb0c5,	// (0x0003decd) main_fs_bigclock_indi_pane

0xb0f7,	// (0x0003deff) main_fs_bigclock_swipe_pane_ParamLimits

0xb0f7,	// (0x0003deff) main_fs_bigclock_swipe_pane

0x45e9,	// (0x000373f1) main_fs_clock_dumped_data

0x14d1,	// (0x000342d9) list_single_fs_bigclock_indicator_pane_g1_ParamLimits

0x14d1,	// (0x000342d9) list_single_fs_bigclock_indicator_pane_g1

0x14f1,	// (0x000342f9) list_single_fs_bigclock_indicator_pane_g2_ParamLimits

0x14f1,	// (0x000342f9) list_single_fs_bigclock_indicator_pane_g2

0x150b,	// (0x00034313) list_single_fs_bigclock_indicator_pane_g3_ParamLimits

0x150b,	// (0x00034313) list_single_fs_bigclock_indicator_pane_g3

0x1527,	// (0x0003432f) list_single_fs_bigclock_indicator_pane_g4_ParamLimits

0x1527,	// (0x0003432f) list_single_fs_bigclock_indicator_pane_g4

0x0004,

0xfc87,	// (0x00042a8f) list_single_fs_bigclock_indicator_pane_g_ParamLimits

0xfc87,	// (0x00042a8f) list_single_fs_bigclock_indicator_pane_g

0x154d,	// (0x00034355) list_single_fs_bigclock_indicator_pane_t1_ParamLimits

0x154d,	// (0x00034355) list_single_fs_bigclock_indicator_pane_t1

0x1575,	// (0x0003437d) list_single_fs_bigclock_indicator_pane_t2_ParamLimits

0x1575,	// (0x0003437d) list_single_fs_bigclock_indicator_pane_t2

0x159d,	// (0x000343a5) list_single_fs_bigclock_indicator_pane_t3_ParamLimits

0x159d,	// (0x000343a5) list_single_fs_bigclock_indicator_pane_t3

0x15c7,	// (0x000343cf) list_single_fs_bigclock_indicator_pane_t4_ParamLimits

0x15c7,	// (0x000343cf) list_single_fs_bigclock_indicator_pane_t4

0x0004,

0xfc92,	// (0x00042a9a) list_single_fs_bigclock_indicator_pane_t_ParamLimits

0xfc92,	// (0x00042a9a) list_single_fs_bigclock_indicator_pane_t

0x2054,	// (0x00034e5c) image3_infobar_fav_pane_ParamLimits

0x2054,	// (0x00034e5c) image3_infobar_fav_pane

0x2064,	// (0x00034e6c) image3_infobar_loc_pane_ParamLimits

0x2064,	// (0x00034e6c) image3_infobar_loc_pane

0x207a,	// (0x00034e82) image3_infobar_time_pane_ParamLimits

0x207a,	// (0x00034e82) image3_infobar_time_pane

0xe896,	// (0x0004169e) image3_infobar_time_pane_g1

0x208a,	// (0x00034e92) image3_infobar_time_pane_t1

0xe896,	// (0x0004169e) image3_infobar_loc_pane_g1

0x2098,	// (0x00034ea0) image3_infobar_loc_pane_g2

0x0001,

0xfe59,	// (0x00042c61) image3_infobar_loc_pane_g

0x20a0,	// (0x00034ea8) image3_infobar_loc_pane_t1

0xe896,	// (0x0004169e) image3_infobar_fav_pane_g1

0x20ae,	// (0x00034eb6) image3_infobar_fav_pane_g2

0x0001,

0xfe5e,	// (0x00042c66) image3_infobar_fav_pane_g

0x20b6,	// (0x00034ebe) fs_bigclock_status_battery_pane

0x20bf,	// (0x00034ec7) fs_bigclock_status_signal_pane

0x20c8,	// (0x00034ed0) fs_bigclock_status_title_pane

0x20d1,	// (0x00034ed9) fs_bigclock_status_signal_pane_g1

0x20da,	// (0x00034ee2) fs_bigclock_status_signal_pane_g2

0x0001,

0xfe63,	// (0x00042c6b) fs_bigclock_status_signal_pane_g

0x20e2,	// (0x00034eea) fs_bigclock_status_battery_pane_g1

0x20eb,	// (0x00034ef3) fs_bigclock_status_battery_pane_g2

0x0001,

0xfe68,	// (0x00042c70) fs_bigclock_status_battery_pane_g

0x20f3,	// (0x00034efb) fs_bigclock_status_title_pane_t1

0xe896,	// (0x0004169e) main_fs_bigclock_clock_pane_g1

0x2101,	// (0x00034f09) main_fs_bigclock_clock_pane_g2

0x2101,	// (0x00034f09) main_fs_bigclock_clock_pane_g3

0x2101,	// (0x00034f09) main_fs_bigclock_clock_pane_g4

0x0003,

0xfe6d,	// (0x00042c75) main_fs_bigclock_clock_pane_g

0x210d,	// (0x00034f15) main_fs_bigclock_clock_pane_t1

0x211b,	// (0x00034f23) main_fs_bigclock_clock_pane_t2

0x0001,

0xfe76,	// (0x00042c7e) main_fs_bigclock_clock_pane_t

0x212a,	// (0x00034f32) list_single_fs_bigclock_indicator_pane_ParamLimits

0x212a,	// (0x00034f32) list_single_fs_bigclock_indicator_pane

0xb82b,	// (0x0003e633) list_single_fs_bigclock_pane_ParamLimits

0xb82b,	// (0x0003e633) list_single_fs_bigclock_pane

0x2144,	// (0x00034f4c) main_fs_bigclock_indicator_pane_t1

0x2153,	// (0x00034f5b) list_single_fs_bigclock_pane_g1

0x215b,	// (0x00034f63) list_single_fs_bigclock_pane_t1

0xe896,	// (0x0004169e) main_fs_bigclock_swipe_pane_g1

0x2199,	// (0x00034fa1) main_fs_bigclock_swipe_pane_g2

0x0001,

0xfe87,	// (0x00042c8f) main_fs_bigclock_swipe_pane_g

0x21a1,	// (0x00034fa9) main_fs_bigclock_swipe_pane_t1_ParamLimits

0x21a1,	// (0x00034fa9) main_fs_bigclock_swipe_pane_t1

0x66a5,	// (0x000394ad) call_type_pane_ParamLimits

0x45e9,	// (0x000373f1) main_btmg_pane

0x4385,	// (0x0003718d) list_single_cale_mrui_row_pane_g2_ParamLimits

0x4385,	// (0x0003718d) list_single_cale_mrui_row_pane_g2

0x0001,

0xfdfa,	// (0x00042c02) list_single_cale_mrui_row_pane_g_ParamLimits

0xfdfa,	// (0x00042c02) list_single_cale_mrui_row_pane_g

0x1f60,	// (0x00034d68) list_recal_vselct_arw_lo_pane

0x1f68,	// (0x00034d70) list_recal_vselct_arw_up_pane

0x1f70,	// (0x00034d78) list_recal_vselct_pane

0x21be,	// (0x00034fc6) btmg_button_pane

0xb88e,	// (0x0003e696) main_btmg_pane_g1

0x45e9,	// (0x000373f1) bg_button_pane_cp044

0x21c8,	// (0x00034fd0) btmg_button_pane_t1

0xe40b,	// (0x00041213) aid_listscroll_gen

0x7737,	// (0x0003a53f) main_cntbar_detail_pane

0x1b29,	// (0x00034931) list_cmail_folder_pane

0x1b39,	// (0x00034941) sp_fs_scroll_pane_cp03_ParamLimits

0xd8df,	// (0x000406e7) list_single_fs_dyc_pane_cp01_ParamLimits

0xd8df,	// (0x000406e7) list_single_fs_dyc_pane_cp01

0x21d6,	// (0x00034fde) aid_size_cmail_indent

0x44a7,	// (0x000372af) list_single_dyc_row_pane_cp01

0xb8b6,	// (0x0003e6be) cntbar_detail_list_pane_ParamLimits

0xb8b6,	// (0x0003e6be) cntbar_detail_list_pane

0xb8f6,	// (0x0003e6fe) main_cntbar_detail_cont_pane_ParamLimits

0xb8f6,	// (0x0003e6fe) main_cntbar_detail_cont_pane

0x6699,	// (0x000394a1) scroll_pane_cp032_ParamLimits

0x6699,	// (0x000394a1) scroll_pane_cp032

0xb902,	// (0x0003e70a) cntbar_detail_list_event_pane_ParamLimits

0xb902,	// (0x0003e70a) cntbar_detail_list_event_pane

0xb8c4,	// (0x0003e6cc) cntbar_detail_list_shct_pane

0xc9e8,	// (0x0003f7f0) aid_list_gen

0x21e8,	// (0x00034ff0) aid_scroll

0x21f1,	// (0x00034ff9) aid_size_touch_scroll_bar

0xb912,	// (0x0003e71a) aid_list_double

0x2203,	// (0x0003500b) aid_list_single

0x0b61,	// (0x00033969) aid_list_single_lg

0x44b0,	// (0x000372b8) aid_list_z_g_a_sm

0x44b8,	// (0x000372c0) aid_list_z_g_d

0x44c0,	// (0x000372c8) aid_txt_z_prm

0x44ce,	// (0x000372d6) aid_txt_z_prm_cp01

0x44dc,	// (0x000372e4) aid_txt_z_sec

0xb91b,	// (0x0003e723) main_cntbar_detail_cont_pane_g1_ParamLimits

0xb91b,	// (0x0003e723) main_cntbar_detail_cont_pane_g1

0xb928,	// (0x0003e730) main_cntbar_detail_cont_pane_g2_ParamLimits

0xb928,	// (0x0003e730) main_cntbar_detail_cont_pane_g2

0x0001,

0xfe8c,	// (0x00042c94) main_cntbar_detail_cont_pane_g_ParamLimits

0xfe8c,	// (0x00042c94) main_cntbar_detail_cont_pane_g

0x2246,	// (0x0003504e) main_cntbar_detail_cont_pane_t1

0x2254,	// (0x0003505c) main_cntbar_detail_cont_pane_t2

0x2262,	// (0x0003506a) main_cntbar_detail_cont_pane_t3

0x0002,

0xfe91,	// (0x00042c99) main_cntbar_detail_cont_pane_t

0xb934,	// (0x0003e73c) cell_cntbar_detail_list_shct_pane_ParamLimits

0xb934,	// (0x0003e73c) cell_cntbar_detail_list_shct_pane

0x2270,	// (0x00035078) cntbar_detail_list_shct_pane_g1

0x2279,	// (0x00035081) cntbar_detail_list_shct_pane_g2

0x0001,

0xfe98,	// (0x00042ca0) cntbar_detail_list_shct_pane_g

0xb948,	// (0x0003e750) cntbar_detail_list_event_pane_g1_ParamLimits

0xb948,	// (0x0003e750) cntbar_detail_list_event_pane_g1

0xb954,	// (0x0003e75c) cntbar_detail_list_event_pane_g2_ParamLimits

0xb954,	// (0x0003e75c) cntbar_detail_list_event_pane_g2

0x0005,

0xfe9d,	// (0x00042ca5) cntbar_detail_list_event_pane_g_ParamLimits

0xfe9d,	// (0x00042ca5) cntbar_detail_list_event_pane_g

0xb9c2,	// (0x0003e7ca) cntbar_detail_list_event_pane_t1_ParamLimits

0xb9c2,	// (0x0003e7ca) cntbar_detail_list_event_pane_t1

0xb9d7,	// (0x0003e7df) cntbar_detail_list_event_pane_t2_ParamLimits

0xb9d7,	// (0x0003e7df) cntbar_detail_list_event_pane_t2

0x0002,

0xfeaa,	// (0x00042cb2) cntbar_detail_list_event_pane_t_ParamLimits

0xfeaa,	// (0x00042cb2) cntbar_detail_list_event_pane_t

0xe896,	// (0x0004169e) cell_cntbar_detail_list_shct_pane_g1

0x6a3d,	// (0x00039845) navi_pane_mv_g3

0x7737,	// (0x0003a53f) main_cntbar_detail_pane_ParamLimits

0x45e9,	// (0x000373f1) main_notif_wgt_pane

0x902e,	// (0x0003be36) aid_tch_main_mp4_pane_g4

0x9243,	// (0x0003c04b) popup_slider_window_cp02

0x1f57,	// (0x00034d5f) list_recal_day_event_pane

0xb896,	// (0x0003e69e) cntbar_detail_btn_pane_ParamLimits

0xb896,	// (0x0003e69e) cntbar_detail_btn_pane

0xb8a6,	// (0x0003e6ae) cntbar_detail_btn_pane_cp01_ParamLimits

0xb8a6,	// (0x0003e6ae) cntbar_detail_btn_pane_cp01

0xb8c4,	// (0x0003e6cc) cntbar_detail_list_shct_pane_ParamLimits

0xb8d0,	// (0x0003e6d8) cntbar_detail_pane_g1_ParamLimits

0xb8d0,	// (0x0003e6d8) cntbar_detail_pane_g1

0xb8e0,	// (0x0003e6e8) cntbar_detail_pane_t1_ParamLimits

0xb8e0,	// (0x0003e6e8) cntbar_detail_pane_t1

0xb960,	// (0x0003e768) cntbar_detail_list_event_pane_g3_ParamLimits

0xb960,	// (0x0003e768) cntbar_detail_list_event_pane_g3

0xb978,	// (0x0003e780) cntbar_detail_list_event_pane_g4_ParamLimits

0xb978,	// (0x0003e780) cntbar_detail_list_event_pane_g4

0xb990,	// (0x0003e798) cntbar_detail_list_event_pane_g5_ParamLimits

0xb990,	// (0x0003e798) cntbar_detail_list_event_pane_g5

0xb9a8,	// (0x0003e7b0) cntbar_detail_list_event_pane_g6_ParamLimits

0xb9a8,	// (0x0003e7b0) cntbar_detail_list_event_pane_g6

0xb9ec,	// (0x0003e7f4) cntbar_detail_list_event_pane_t3_ParamLimits

0xb9ec,	// (0x0003e7f4) cntbar_detail_list_event_pane_t3

0xb9fe,	// (0x0003e806) popup_notif_wgt_window_ParamLimits

0xb9fe,	// (0x0003e806) popup_notif_wgt_window

0xba0e,	// (0x0003e816) popup_submenu_window_cp01_ParamLimits

0xba0e,	// (0x0003e816) popup_submenu_window_cp01

0xcfe4,	// (0x0003fdec) bg_popup_window_pane_cp10

0x2282,	// (0x0003508a) listscroll_notif_wgt_pane

0x228c,	// (0x00035094) list_notif_wgt_window

0x2295,	// (0x0003509d) scroll_pane_cp033

0x229e,	// (0x000350a6) list_notif_wgt_row_pane_ParamLimits

0x229e,	// (0x000350a6) list_notif_wgt_row_pane

0x22b2,	// (0x000350ba) aid_size_list_notif_wgt_del

0x22bb,	// (0x000350c3) list_notif_wgt_row_pane_g1

0x22c3,	// (0x000350cb) list_notif_wgt_row_pane_g2

0x22cb,	// (0x000350d3) list_notif_wgt_row_pane_g3

0x0002,

0xfeb1,	// (0x00042cb9) list_notif_wgt_row_pane_g

0x22d4,	// (0x000350dc) list_notif_wgt_row_pane_t1

0x22e2,	// (0x000350ea) list_notif_wgt_row_pane_t2

0x22f0,	// (0x000350f8) list_notif_wgt_row_pane_t3

0x0002,

0xfeb8,	// (0x00042cc0) list_notif_wgt_row_pane_t

0x072a,	// (0x00033532) list_recal_day_event_pane_g1

0x22fe,	// (0x00035106) list_recal_day_event_pane_t1

0x45e9,	// (0x000373f1) bg_button_pane_cp045

0x230d,	// (0x00035115) cntbar_detail_btn_pane_t1

0xe413,	// (0x0004121b) main_callh_pane_ParamLimits

0xe413,	// (0x0004121b) main_callh_pane

0x45e9,	// (0x000373f1) main_coverflow0_pane

0x45e9,	// (0x000373f1) main_wgtman_pane

0xb10f,	// (0x0003df17) main_fs_bigclock_unlock_btn_pane_ParamLimits

0xb10f,	// (0x0003df17) main_fs_bigclock_unlock_btn_pane

0x1b0b,	// (0x00034913) bg_button_pane_cp16

0xb448,	// (0x0003e250) cell_tport_appsw_pane_g3

0xba1c,	// (0x0003e824) cf0_flow_pane_ParamLimits

0xba1c,	// (0x0003e824) cf0_flow_pane

0x231b,	// (0x00035123) listscroll_cf0_pane

0x2324,	// (0x0003512c) main_cf0_pane_g1

0xba2b,	// (0x0003e833) main_cf0_pane_t1_ParamLimits

0xba2b,	// (0x0003e833) main_cf0_pane_t1

0xba3f,	// (0x0003e847) main_cf0_pane_t2_ParamLimits

0xba3f,	// (0x0003e847) main_cf0_pane_t2

0x0001,

0xfebf,	// (0x00042cc7) main_cf0_pane_t_ParamLimits

0xfebf,	// (0x00042cc7) main_cf0_pane_t

0x232e,	// (0x00035136) scroll_pane_cp11

0xba53,	// (0x0003e85b) cf0_flow_pane_g1

0xba5b,	// (0x0003e863) cf0_flow_pane_g2

0x0001,

0xfec4,	// (0x00042ccc) cf0_flow_pane_g

0xba63,	// (0x0003e86b) cf0_flow_pane_t1

0x45e9,	// (0x000373f1) main_call6_pane

0x45e9,	// (0x000373f1) main_calllock_pane

0xba71,	// (0x0003e879) call6_btn_grp_pane_ParamLimits

0xba71,	// (0x0003e879) call6_btn_grp_pane

0xba80,	// (0x0003e888) call6_pane_g1_ParamLimits

0xba80,	// (0x0003e888) call6_pane_g1

0xba90,	// (0x0003e898) popup_call6_1st_window_ParamLimits

0xba90,	// (0x0003e898) popup_call6_1st_window

0xba9e,	// (0x0003e8a6) popup_call6_2nd_window_ParamLimits

0xba9e,	// (0x0003e8a6) popup_call6_2nd_window

0xbaac,	// (0x0003e8b4) cell_call6_btn_pane_ParamLimits

0xbaac,	// (0x0003e8b4) cell_call6_btn_pane

0xcfe4,	// (0x0003fdec) bg_popup_call2_in_pane_cp03

0x2339,	// (0x00035141) popup_call6_1st_window_g1

0x2341,	// (0x00035149) popup_call6_1st_window_g2

0x2349,	// (0x00035151) popup_call6_1st_window_g3

0x0002,

0xfec9,	// (0x00042cd1) popup_call6_1st_window_g

0x2351,	// (0x00035159) popup_call6_1st_window_t1

0x2360,	// (0x00035168) popup_call6_1st_window_t2

0x2370,	// (0x00035178) popup_call6_1st_window_t3

0x0002,

0xfed0,	// (0x00042cd8) popup_call6_1st_window_t

0xcfe4,	// (0x0003fdec) bg_popup_call2_in_pane_cp04

0x2339,	// (0x00035141) popup_call6_2nd_window_g1

0x2341,	// (0x00035149) popup_call6_2nd_window_g2

0x2349,	// (0x00035151) popup_call6_2nd_window_g3

0x0002,

0xfec9,	// (0x00042cd1) popup_call6_2nd_window_g

0x2351,	// (0x00035159) popup_call6_2nd_window_t1

0x45e9,	// (0x000373f1) bg_button_pane_cp15

0x2380,	// (0x00035188) cell_call6_btn_pane_g1

0x2389,	// (0x00035191) cell_call6_btn_pane_t1

0xbabb,	// (0x0003e8c3) listscroll_wgtman_pane_ParamLimits

0xbabb,	// (0x0003e8c3) listscroll_wgtman_pane

0xbad9,	// (0x0003e8e1) wgtman_btn_pane_ParamLimits

0xbad9,	// (0x0003e8e1) wgtman_btn_pane

0xceaa,	// (0x0003fcb2) aid_scroll_copy1

0x2398,	// (0x000351a0) list_wgtman_pane

0xbb0e,	// (0x0003e916) wgtman_btn_pane_g1_ParamLimits

0xbb0e,	// (0x0003e916) wgtman_btn_pane_g1

0xbb36,	// (0x0003e93e) wgtman_btn_pane_t1_ParamLimits

0xbb36,	// (0x0003e93e) wgtman_btn_pane_t1

0x23a2,	// (0x000351aa) wgtman_btn_pane_t2_ParamLimits

0x23a2,	// (0x000351aa) wgtman_btn_pane_t2

0x0001,

0xfed7,	// (0x00042cdf) wgtman_btn_pane_t_ParamLimits

0xfed7,	// (0x00042cdf) wgtman_btn_pane_t

0x23b9,	// (0x000351c1) listrow_wgtman_pane_ParamLimits

0x23b9,	// (0x000351c1) listrow_wgtman_pane

0x23cd,	// (0x000351d5) listrow_wgtman_pane_g1

0xbb6d,	// (0x0003e975) listrow_wgtman_pane_g2

0x0001,

0xfedc,	// (0x00042ce4) listrow_wgtman_pane_g

0x44ea,	// (0x000372f2) listrow_wgtman_pane_t1

0x44f8,	// (0x00037300) listrow_wgtman_pane_t2

0x0001,

0xfee1,	// (0x00042ce9) listrow_wgtman_pane_t

0x4506,	// (0x0003730e) wait_bar_pane_cp09

0x23fa,	// (0x00035202) main_calllock_btn_pane

0x2404,	// (0x0003520c) main_calllock_pane_g1

0x45e9,	// (0x000373f1) bg_button_pane_cp17

0x2410,	// (0x00035218) main_calllock_btn_pane_g1

0x2419,	// (0x00035221) main_calllock_btn_pane_t1

0x45e9,	// (0x000373f1) main_dialer3_pane

0x45e9,	// (0x000373f1) main_fmrd2_pane

0xe896,	// (0x0004169e) main_fs_bigclock_unlock_btn_pane_g1

0x2430,	// (0x00035238) main_fs_bigclock_unlock_btn_pane_t1

0xbb77,	// (0x0003e97f) area_fmrd2_info_pane_ParamLimits

0xbb77,	// (0x0003e97f) area_fmrd2_info_pane

0xbb85,	// (0x0003e98d) area_fmrd2_visual_pane_ParamLimits

0xbb85,	// (0x0003e98d) area_fmrd2_visual_pane

0xbb93,	// (0x0003e99b) fmrd2_indi_pane_ParamLimits

0xbb93,	// (0x0003e99b) fmrd2_indi_pane

0xbba0,	// (0x0003e9a8) area_fmrd2_visual_pane_g1

0xbba8,	// (0x0003e9b0) area_fmrd2_visual_pane_t1

0xbbb8,	// (0x0003e9c0) area_fmrd2_visual_pane_t2

0xbbc8,	// (0x0003e9d0) area_fmrd2_visual_pane_t3

0x0002,

0xfeeb,	// (0x00042cf3) area_fmrd2_visual_pane_t

0xbbd8,	// (0x0003e9e0) area_fmrd2_info_pane_g1

0xbbe0,	// (0x0003e9e8) area_fmrd2_info_pane_t1

0xbbf0,	// (0x0003e9f8) area_fmrd2_info_pane_t2

0xbc00,	// (0x0003ea08) area_fmrd2_info_pane_t3

0xbc10,	// (0x0003ea18) area_fmrd2_info_pane_t4

0x0003,

0xfef2,	// (0x00042cfa) area_fmrd2_info_pane_t

0xbc20,	// (0x0003ea28) fmrd2_indi_pane_t1

0xbc30,	// (0x0003ea38) fmrd2_indi_pane_t2

0xbc40,	// (0x0003ea48) fmrd2_indi_pane_t3

0x0002,

0xfefb,	// (0x00042d03) fmrd2_indi_pane_t

0x1536,	// (0x0003433e) list_single_fs_bigclock_indicator_pane_g5_ParamLimits

0x1536,	// (0x0003433e) list_single_fs_bigclock_indicator_pane_g5

0x15dc,	// (0x000343e4) list_single_fs_bigclock_indicator_pane_t5_ParamLimits

0x15dc,	// (0x000343e4) list_single_fs_bigclock_indicator_pane_t5

0xb5a7,	// (0x0003e3af) aid_cell_bcale_month_pane_ParamLimits

0xb5a7,	// (0x0003e3af) aid_cell_bcale_month_pane

0xb5b3,	// (0x0003e3bb) bcale_month_pane_ParamLimits

0xb5b3,	// (0x0003e3bb) bcale_month_pane

0xb5c1,	// (0x0003e3c9) bcale_preview_pane_ParamLimits

0xb5c1,	// (0x0003e3c9) bcale_preview_pane

0x215b,	// (0x00034f63) list_single_fs_bigclock_pane_t1_ParamLimits

0x2175,	// (0x00034f7d) list_single_fs_bigclock_pane_t2_ParamLimits

0x2175,	// (0x00034f7d) list_single_fs_bigclock_pane_t2

0x0001,

0xfe82,	// (0x00042c8a) list_single_fs_bigclock_pane_t_ParamLimits

0xfe82,	// (0x00042c8a) list_single_fs_bigclock_pane_t

0x2428,	// (0x00035230) main_fs_bigclock_unlock_btn_pane_g2

0x0001,

0xfee6,	// (0x00042cee) main_fs_bigclock_unlock_btn_pane_g

0xbc50,	// (0x0003ea58) aid_dia3_key_size_ParamLimits

0xbc50,	// (0x0003ea58) aid_dia3_key_size

0xbc5c,	// (0x0003ea64) aid_dia3_listrow_size_ParamLimits

0xbc5c,	// (0x0003ea64) aid_dia3_listrow_size

0xbc6a,	// (0x0003ea72) dia3_keypad_fun_pane_ParamLimits

0xbc6a,	// (0x0003ea72) dia3_keypad_fun_pane

0xbc7a,	// (0x0003ea82) dia3_keypad_num_pane_ParamLimits

0xbc7a,	// (0x0003ea82) dia3_keypad_num_pane

0xbc8a,	// (0x0003ea92) dia3_listscroll_pane_ParamLimits

0xbc8a,	// (0x0003ea92) dia3_listscroll_pane

0xbc9a,	// (0x0003eaa2) dia3_numentry_pane_ParamLimits

0xbc9a,	// (0x0003eaa2) dia3_numentry_pane

0x243e,	// (0x00035246) dia3_list_pane

0x2449,	// (0x00035251) scroll_pane_cp12

0x45e9,	// (0x000373f1) bg_dia3_numentry_pane

0x2454,	// (0x0003525c) dia3_numentry_pane_t1

0xbcaa,	// (0x0003eab2) cell_dia3_key_num_pane

0xbcb2,	// (0x0003eaba) cell_dia3_key0_fun_pane_ParamLimits

0xbcb2,	// (0x0003eaba) cell_dia3_key0_fun_pane

0xbcbf,	// (0x0003eac7) cell_dia3_key1_fun_pane_ParamLimits

0xbcbf,	// (0x0003eac7) cell_dia3_key1_fun_pane

0xbccc,	// (0x0003ead4) dia3_listrow_pane

0x122e,	// (0x00034036) bg_dia3_numentry_pane_g1

0x45e9,	// (0x000373f1) bg_button_pane_cp21

0x2463,	// (0x0003526b) cell_dia3_key_num_pane_t1

0x2471,	// (0x00035279) cell_dia3_key_num_pane_t2

0x2480,	// (0x00035288) cell_dia3_key_num_pane_t3

0x248f,	// (0x00035297) cell_dia3_key_num_pane_t4

0x0003,

0xff02,	// (0x00042d0a) cell_dia3_key_num_pane_t

0x45e9,	// (0x000373f1) bg_button_pane_cp19

0xbcd9,	// (0x0003eae1) cell_dia3_key0_fun_pane_g1

0x45e9,	// (0x000373f1) bg_button_pane_cp20

0xbce1,	// (0x0003eae9) cell_dia3_key1_fun_pane_g1

0xbce9,	// (0x0003eaf1) area_left_week_number_pane

0xbcf2,	// (0x0003eafa) area_top_day_name_pane

0xbcfb,	// (0x0003eb03) frame_month_view_pane

0xbd05,	// (0x0003eb0d) grid_month_view_pane

0xbd0f,	// (0x0003eb17) cell_top_day_name_pane_ParamLimits

0xbd0f,	// (0x0003eb17) cell_top_day_name_pane

0xbd2b,	// (0x0003eb33) cell_area_left_week_number_pane_ParamLimits

0xbd2b,	// (0x0003eb33) cell_area_left_week_number_pane

0xbd3f,	// (0x0003eb47) cell_month_view_pane_ParamLimits

0xbd3f,	// (0x0003eb47) cell_month_view_pane

0x249e,	// (0x000352a6) frm_month_g1

0xbd5e,	// (0x0003eb66) frm_month_g2

0xbd68,	// (0x0003eb70) frm_month_g3

0xbd72,	// (0x0003eb7a) frm_month_g4

0xbd7c,	// (0x0003eb84) frm_month_g5

0xbd86,	// (0x0003eb8e) frm_month_g6

0xbd90,	// (0x0003eb98) frm_month_g7

0x24a7,	// (0x000352af) frm_month_g8

0xbd9a,	// (0x0003eba2) frm_month_g9

0xbda3,	// (0x0003ebab) frm_month_g10

0xbdac,	// (0x0003ebb4) frm_month_g11

0xbdb5,	// (0x0003ebbd) frm_month_g12

0xbdbe,	// (0x0003ebc6) frm_month_g13

0xbdc9,	// (0x0003ebd1) frm_month_g14

0xbdd4,	// (0x0003ebdc) frm_month_g15

0xbddf,	// (0x0003ebe7) frm_month_g16

0x000f,

0xff0b,	// (0x00042d13) frm_month_g

0xbdea,	// (0x0003ebf2) cell_top_day_name_pane_t1

0xbdf9,	// (0x0003ec01) cell_area_left_week_number_pane_g1

0xbdea,	// (0x0003ebf2) cell_area_left_week_number_pane_t1

0xe896,	// (0x0004169e) cell_month_view_pane_g1

0xbe01,	// (0x0003ec09) cell_month_view_pane_t1

0x45e9,	// (0x000373f1) main_fps_pane

0x1868,	// (0x00034670) cmail_ddmenu_btn02_pane_cp1_ParamLimits

0x1868,	// (0x00034670) cmail_ddmenu_btn02_pane_cp1

0x1884,	// (0x0003468c) cmail_ddmenu_btn02_pane_cp2_ParamLimits

0x1884,	// (0x0003468c) cmail_ddmenu_btn02_pane_cp2

0xb79a,	// (0x0003e5a2) cmail_ddmenu_btn02_pane_g2_ParamLimits

0xb79a,	// (0x0003e5a2) cmail_ddmenu_btn02_pane_g2

0x0001,

0xfe33,	// (0x00042c3b) cmail_ddmenu_btn02_pane_g_ParamLimits

0xfe33,	// (0x00042c3b) cmail_ddmenu_btn02_pane_g

0xb7b8,	// (0x0003e5c0) cmail_ddmenu_btn02_pane_t2_ParamLimits

0xb7b8,	// (0x0003e5c0) cmail_ddmenu_btn02_pane_t2

0x0001,

0xfe38,	// (0x00042c40) cmail_ddmenu_btn02_pane_t_ParamLimits

0xfe38,	// (0x00042c40) cmail_ddmenu_btn02_pane_t

0xbe10,	// (0x0003ec18) fps_text_pane_ParamLimits

0xbe10,	// (0x0003ec18) fps_text_pane

0xbe1d,	// (0x0003ec25) main_fps_pane_g1_ParamLimits

0xbe1d,	// (0x0003ec25) main_fps_pane_g1

0xbe29,	// (0x0003ec31) wait_bar_pane_cp010_ParamLimits

0xbe29,	// (0x0003ec31) wait_bar_pane_cp010

0xbe35,	// (0x0003ec3d) fps_text_pane_t1_ParamLimits

0xbe35,	// (0x0003ec3d) fps_text_pane_t1

0x9629,	// (0x0003c431) cam4_image_uncrop_pane_g1

0x9632,	// (0x0003c43a) cam4_image_uncrop_pane_g2

0x963b,	// (0x0003c443) cam4_image_uncrop_pane_g3

0x9644,	// (0x0003c44c) cam4_image_uncrop_pane_g4

0x0003,

0xf90d,	// (0x00042715) cam4_image_uncrop_pane_g

0xbccc,	// (0x0003ead4) dia3_listrow_pane_ParamLimits

0x45e9,	// (0x000373f1) main_phob2_pane

0xb422,	// (0x0003e22a) cell_tport_appsw_pane_cp02_ParamLimits

0xb422,	// (0x0003e22a) cell_tport_appsw_pane_cp02

0xb431,	// (0x0003e239) cell_tport_appsw_pane_cp03_ParamLimits

0xb431,	// (0x0003e239) cell_tport_appsw_pane_cp03

0x45e9,	// (0x000373f1) phob2_contact_card_pane

0x45e9,	// (0x000373f1) phob2_listscroll_pane

0x24b0,	// (0x000352b8) phob2_list_pane

0x24b8,	// (0x000352c0) scroll_pane_cp034

0xbe4e,	// (0x0003ec56) phob2_cc_data_pane_ParamLimits

0xbe4e,	// (0x0003ec56) phob2_cc_data_pane

0xbe6a,	// (0x0003ec72) phob2_cc_listscroll_pane_ParamLimits

0xbe6a,	// (0x0003ec72) phob2_cc_listscroll_pane

0xbe86,	// (0x0003ec8e) list_double_large_graphic_phob2_pane_ParamLimits

0xbe86,	// (0x0003ec8e) list_double_large_graphic_phob2_pane

0xbea0,	// (0x0003eca8) list_double_large_graphic_phob2_pane_g1_ParamLimits

0xbea0,	// (0x0003eca8) list_double_large_graphic_phob2_pane_g1

0x450e,	// (0x00037316) list_double_large_graphic_phob2_pane_g2_ParamLimits

0x450e,	// (0x00037316) list_double_large_graphic_phob2_pane_g2

0x0001,

0xff2c,	// (0x00042d34) list_double_large_graphic_phob2_pane_g_ParamLimits

0xff2c,	// (0x00042d34) list_double_large_graphic_phob2_pane_g

0x451a,	// (0x00037322) list_double_large_graphic_phob2_pane_t1_ParamLimits

0x451a,	// (0x00037322) list_double_large_graphic_phob2_pane_t1

0x452f,	// (0x00037337) list_double_large_graphic_phob2_pane_t2_ParamLimits

0x452f,	// (0x00037337) list_double_large_graphic_phob2_pane_t2

0x0001,

0xff31,	// (0x00042d39) list_double_large_graphic_phob2_pane_t_ParamLimits

0xff31,	// (0x00042d39) list_double_large_graphic_phob2_pane_t

0x45e9,	// (0x000373f1) list_highlight_pane_cp024

0x24c0,	// (0x000352c8) phob2_cc_button_pane

0xbead,	// (0x0003ecb5) phob2_cc_data_pane_g1_ParamLimits

0xbead,	// (0x0003ecb5) phob2_cc_data_pane_g1

0xbeb9,	// (0x0003ecc1) phob2_cc_data_pane_g2_ParamLimits

0xbeb9,	// (0x0003ecc1) phob2_cc_data_pane_g2

0x0001,

0xff36,	// (0x00042d3e) phob2_cc_data_pane_g_ParamLimits

0xff36,	// (0x00042d3e) phob2_cc_data_pane_g

0xbec5,	// (0x0003eccd) phob2_cc_data_pane_t1_ParamLimits

0xbec5,	// (0x0003eccd) phob2_cc_data_pane_t1

0xbed7,	// (0x0003ecdf) phob2_cc_data_pane_t2_ParamLimits

0xbed7,	// (0x0003ecdf) phob2_cc_data_pane_t2

0xbee9,	// (0x0003ecf1) phob2_cc_data_pane_t3_ParamLimits

0xbee9,	// (0x0003ecf1) phob2_cc_data_pane_t3

0x0002,

0xff3b,	// (0x00042d43) phob2_cc_data_pane_t_ParamLimits

0xff3b,	// (0x00042d43) phob2_cc_data_pane_t

0x24c8,	// (0x000352d0) phob2_cc_list_pane_ParamLimits

0x24c8,	// (0x000352d0) phob2_cc_list_pane

0x07c3,	// (0x000335cb) scroll_pane_cp035_ParamLimits

0x07c3,	// (0x000335cb) scroll_pane_cp035

0x7737,	// (0x0003a53f) bg_button_pane_cp033

0x24d4,	// (0x000352dc) phob2_cc_button_pane_g1

0x24e0,	// (0x000352e8) phob2_cc_button_pane_t1

0x24f5,	// (0x000352fd) phob2_cc_button_pane_t2

0x0001,

0xff42,	// (0x00042d4a) phob2_cc_button_pane_t

0xbefb,	// (0x0003ed03) list_double_large_graphic_phob2_cc_pane_ParamLimits

0xbefb,	// (0x0003ed03) list_double_large_graphic_phob2_cc_pane

0xbf1a,	// (0x0003ed22) list_double_large_graphic_phob2_cc_pane_g1_ParamLimits

0xbf1a,	// (0x0003ed22) list_double_large_graphic_phob2_cc_pane_g1

0x4541,	// (0x00037349) list_double_large_graphic_phob2_cc_pane_g2_ParamLimits

0x4541,	// (0x00037349) list_double_large_graphic_phob2_cc_pane_g2

0x4550,	// (0x00037358) list_double_large_graphic_phob2_cc_pane_g3_ParamLimits

0x4550,	// (0x00037358) list_double_large_graphic_phob2_cc_pane_g3

0x455f,	// (0x00037367) list_double_large_graphic_phob2_cc_pane_g4_ParamLimits

0x455f,	// (0x00037367) list_double_large_graphic_phob2_cc_pane_g4

0x4570,	// (0x00037378) list_double_large_graphic_phob2_cc_pane_g5_ParamLimits

0x4570,	// (0x00037378) list_double_large_graphic_phob2_cc_pane_g5

0x0004,

0xff47,	// (0x00042d4f) list_double_large_graphic_phob2_cc_pane_g_ParamLimits

0xff47,	// (0x00042d4f) list_double_large_graphic_phob2_cc_pane_g

0x457f,	// (0x00037387) list_double_large_graphic_phob2_cc_pane_t1_ParamLimits

0x457f,	// (0x00037387) list_double_large_graphic_phob2_cc_pane_t1

0x45a8,	// (0x000373b0) list_double_large_graphic_phob2_cc_pane_t2_ParamLimits

0x45a8,	// (0x000373b0) list_double_large_graphic_phob2_cc_pane_t2

0x0001,

0xff52,	// (0x00042d5a) list_double_large_graphic_phob2_cc_pane_t_ParamLimits

0xff52,	// (0x00042d5a) list_double_large_graphic_phob2_cc_pane_t

0x2507,	// (0x0003530f) list_highlight_pane_cp025_ParamLimits

0x2507,	// (0x0003530f) list_highlight_pane_cp025

0x7737,	// (0x0003a53f) bg_button_pane_cp033_ParamLimits

0x24d4,	// (0x000352dc) phob2_cc_button_pane_g1_ParamLimits

0x24e0,	// (0x000352e8) phob2_cc_button_pane_t1_ParamLimits

0x24f5,	// (0x000352fd) phob2_cc_button_pane_t2_ParamLimits

0xff42,	// (0x00042d4a) phob2_cc_button_pane_t_ParamLimits

0x48af,	// (0x000376b7) popup_wgtman_window

0x0553,	// (0x0003335b) scroll_pane_cp038

0xbaf6,	// (0x0003e8fe) wgtman_btn_pane_cp_01_ParamLimits

0xbaf6,	// (0x0003e8fe) wgtman_btn_pane_cp_01

0x2515,	// (0x0003531d) wgtman_content_pane

0x251e,	// (0x00035326) wgtman_heading_pane

0x45e9,	// (0x000373f1) bg_heading_pane_cp02

0x2527,	// (0x0003532f) wgtman_heading_pane_g1

0x252f,	// (0x00035337) wgtman_heading_pane_t1

0x253d,	// (0x00035345) scroll_pane_cp036

0x2545,	// (0x0003534d) wgtman_list_pane

0x16be,	// (0x000344c6) wgtman_list_pane_t1_ParamLimits

0x16be,	// (0x000344c6) wgtman_list_pane_t1

0x9586,	// (0x0003c38e) cam4_grid_pane

0x38e0,	// (0x000366e8) bg_button_pane_cp015_ParamLimits

0xa20c,	// (0x0003d014) bg_button_pane_cp016_ParamLimits

0xa21f,	// (0x0003d027) bg_button_pane_cp017_ParamLimits

0x3924,	// (0x0003672c) popup_vitu2_query_window_g3_ParamLimits

0x3924,	// (0x0003672c) popup_vitu2_query_window_g3

0x399d,	// (0x000367a5) popup_vitu2_query_window_t6_ParamLimits

0x399d,	// (0x000367a5) popup_vitu2_query_window_t6

0x39c8,	// (0x000367d0) popup_vitu2_query_window_t7_ParamLimits

0x39c8,	// (0x000367d0) popup_vitu2_query_window_t7

0x0326,	// (0x0003312e) cam4_grid_pane_g1

0x032f,	// (0x00033137) cam4_grid_pane_g2

0x254d,	// (0x00035355) cam4_grid_pane_g3

0x2556,	// (0x0003535e) cam4_grid_pane_g4

0x0003,

0xff57,	// (0x00042d5f) cam4_grid_pane_g

0x5747,	// (0x0003854f) aid_placing_vt_slider_lsc_ParamLimits

0x5a7a,	// (0x00038882) vidtel_button_pane_ParamLimits

0x5a7a,	// (0x00038882) vidtel_button_pane

0x45e9,	// (0x000373f1) bg_button_pane_cp034

0xbf2b,	// (0x0003ed33) vidtel_button_pane_g1

0x2561,	// (0x00035369) vidtel_button_pane_t1

0x069e,	// (0x000334a6) aid_size_vtel_slider_touch

0x07c3,	// (0x000335cb) scroll_pane_cp039

0x126c,	// (0x00034074) ncim_query_button_pane_cp01_ParamLimits

0x128b,	// (0x00034093) ncimui_query_pane_g1_ParamLimits

0x7737,	// (0x0003a53f) input_focus_pane_cp012_ParamLimits

0x12b0,	// (0x000340b8) ncim_query_entry_pane_t1_ParamLimits

0x07c3,	// (0x000335cb) scroll_pane_cp039_ParamLimits
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
	};

} // end of namespace AknLayoutScalable_Elaf_pvp4_apps_vga4_prt_tch_Small
