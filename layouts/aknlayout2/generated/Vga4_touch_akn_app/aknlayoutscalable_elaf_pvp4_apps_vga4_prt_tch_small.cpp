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
const SCompDataImplData KImplData = { KDataLookup, AknLayoutScalable_Apps::KByteCodedData_AknLayoutScalable_Elaf_pvp4_apps_vga4_prt_tch + 0x000330a9 };

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
0x4485,	// (0x0003752e) Screen

0x4491,	// (0x0003753a) application_window

0x44f7,	// (0x000375a0) area_bottom_pane_ParamLimits

0x44f7,	// (0x000375a0) area_bottom_pane

0x4551,	// (0x000375fa) area_top_pane_ParamLimits

0x4551,	// (0x000375fa) area_top_pane

0x45b5,	// (0x0003765e) call_video_uplink_pane_ParamLimits

0x45b5,	// (0x0003765e) call_video_uplink_pane

0x45f2,	// (0x0003769b) main_pane_ParamLimits

0x45f2,	// (0x0003769b) main_pane

0xe464,	// (0x0004150d) context_pane

0x772e,	// (0x0003a7d7) navi_pane

0x7752,	// (0x0003a7fb) popup_cale_events_window_ParamLimits

0x7752,	// (0x0003a7fb) popup_cale_events_window

0xe477,	// (0x00041520) popup_mup_playback_window

0x776a,	// (0x0003a813) signal_pane

0xc590,	// (0x0003f639) main_browser_pane

0xcfe4,	// (0x0004008d) main_burst_pane

0x75d2,	// (0x0003a67b) main_calc_pane

0xcfe4,	// (0x0004008d) main_cale_day_pane

0xc590,	// (0x0003f639) main_cale_month_pane

0xcfe4,	// (0x0004008d) main_cale_week_pane

0xcfe4,	// (0x0004008d) main_call_pane

0xc26a,	// (0x0003f313) main_call_poc_pane

0xcfe4,	// (0x0004008d) main_camera_pane

0xcfe4,	// (0x0004008d) main_chi_dic_pane

0xce86,	// (0x0003ff2f) main_clock_pane

0xc26a,	// (0x0003f313) main_fmradio_pane

0xcfe4,	// (0x0004008d) main_graph_messa_pane

0xc26a,	// (0x0003f313) main_help_pane

0xc590,	// (0x0003f639) main_im_pane

0xc4c5,	// (0x0003f56e) main_image_pane_ParamLimits

0xc4c5,	// (0x0003f56e) main_image_pane

0xc26a,	// (0x0003f313) main_location2_pane

0xcfe4,	// (0x0004008d) main_location_pane

0xc26a,	// (0x0003f313) main_messa_pane

0xc26a,	// (0x0003f313) main_mp2_pane

0xcfe4,	// (0x0004008d) main_mp_pane

0xc26a,	// (0x0003f313) main_msg_pane

0xc26a,	// (0x0003f313) main_mup_eq_pane

0xc26a,	// (0x0003f313) main_mup_pane

0xcfe4,	// (0x0004008d) main_notes_pane

0xc26a,	// (0x0003f313) main_pec_pane

0xc26a,	// (0x0003f313) main_phob_pane

0xc26a,	// (0x0003f313) main_pinb_pane

0xc26a,	// (0x0003f313) main_postcard_pane

0xc26a,	// (0x0003f313) main_qdial_pane

0xcfe4,	// (0x0004008d) main_skin_pane

0xc26a,	// (0x0003f313) main_smil2_pane

0xcfe4,	// (0x0004008d) main_smil_pane

0xcfe4,	// (0x0004008d) main_video_pane

0xcfe4,	// (0x0004008d) main_video_tele_pane

0xc4c5,	// (0x0003f56e) main_viewer_pane_ParamLimits

0xc4c5,	// (0x0003f56e) main_viewer_pane

0xcfe4,	// (0x0004008d) main_vorec_pane

0x7618,	// (0x0003a6c1) popup_blid_sat_info_window_ParamLimits

0x7618,	// (0x0003a6c1) popup_blid_sat_info_window

0x7632,	// (0x0003a6db) popup_dyc_status_message_window_ParamLimits

0x7632,	// (0x0003a6db) popup_dyc_status_message_window

0x7642,	// (0x0003a6eb) popup_grid_large_graphic_window_ParamLimits

0x7642,	// (0x0003a6eb) popup_grid_large_graphic_window

0x76ba,	// (0x0003a763) popup_loc_request_window_ParamLimits

0x76ba,	// (0x0003a763) popup_loc_request_window

0x7702,	// (0x0003a7ab) popup_wml_address_window_ParamLimits

0x7702,	// (0x0003a7ab) popup_wml_address_window

0x74aa,	// (0x0003a553) call_muted_g1

0x7166,	// (0x0003a20f) popup_call_audio_conf_window_ParamLimits

0x7166,	// (0x0003a20f) popup_call_audio_conf_window

0x74ba,	// (0x0003a563) popup_call_audio_first_window_ParamLimits

0x74ba,	// (0x0003a563) popup_call_audio_first_window

0x74fa,	// (0x0003a5a3) popup_call_audio_in_window_ParamLimits

0x74fa,	// (0x0003a5a3) popup_call_audio_in_window

0x751e,	// (0x0003a5c7) popup_call_audio_out_window_ParamLimits

0x751e,	// (0x0003a5c7) popup_call_audio_out_window

0x7540,	// (0x0003a5e9) popup_call_audio_second_window_ParamLimits

0x7540,	// (0x0003a5e9) popup_call_audio_second_window

0x7570,	// (0x0003a619) popup_call_audio_wait_window_ParamLimits

0x7570,	// (0x0003a619) popup_call_audio_wait_window

0x7591,	// (0x0003a63a) popup_number_entry_window_ParamLimits

0x7591,	// (0x0003a63a) popup_number_entry_window

0x47ba,	// (0x00037863) bg_popup_call_pane_cp05_ParamLimits

0x47ba,	// (0x00037863) bg_popup_call_pane_cp05

0x47da,	// (0x00037883) popup_number_entry_window_t1

0x47ed,	// (0x00037896) popup_number_entry_window_t2

0x47ff,	// (0x000378a8) popup_number_entry_window_t3

0x0003,

0xf0ec,	// (0x00042195) popup_number_entry_window_t

0x4849,	// (0x000378f2) text_title_cp2

0x485c,	// (0x00037905) bg_popup_call_pane_cp_ParamLimits

0x485c,	// (0x00037905) bg_popup_call_pane_cp

0x486a,	// (0x00037913) call_thumbnail_pane

0x4872,	// (0x0003791b) popup_call_audio_in_window_g1_ParamLimits

0x4872,	// (0x0003791b) popup_call_audio_in_window_g1

0x487e,	// (0x00037927) popup_call_audio_in_window_g2_ParamLimits

0x487e,	// (0x00037927) popup_call_audio_in_window_g2

0x488a,	// (0x00037933) popup_call_audio_in_window_g3_ParamLimits

0x488a,	// (0x00037933) popup_call_audio_in_window_g3

0x0002,

0xf0f5,	// (0x0004219e) popup_call_audio_in_window_g_ParamLimits

0xf0f5,	// (0x0004219e) popup_call_audio_in_window_g

0x4896,	// (0x0003793f) popup_call_audio_in_window_t1_ParamLimits

0x4896,	// (0x0003793f) popup_call_audio_in_window_t1

0x48b2,	// (0x0003795b) popup_call_audio_in_window_t2_ParamLimits

0x48b2,	// (0x0003795b) popup_call_audio_in_window_t2

0xbf33,	// (0x0003efdc) popup_call_audio_in_window_t3_ParamLimits

0xbf33,	// (0x0003efdc) popup_call_audio_in_window_t3

0x0002,

0xf0fc,	// (0x000421a5) popup_call_audio_in_window_t_ParamLimits

0xf0fc,	// (0x000421a5) popup_call_audio_in_window_t

0x485c,	// (0x00037905) bg_popup_call_pane_cp01_ParamLimits

0x485c,	// (0x00037905) bg_popup_call_pane_cp01

0x486a,	// (0x00037913) call_thumbnail_pane_cp02

0xbf46,	// (0x0003efef) call_type_pane_cp022

0xbf4e,	// (0x0003eff7) popup_call_audio_out_window_g1_ParamLimits

0xbf4e,	// (0x0003eff7) popup_call_audio_out_window_g1

0xbf60,	// (0x0003f009) popup_call_audio_out_window_g2_ParamLimits

0xbf60,	// (0x0003f009) popup_call_audio_out_window_g2

0xbf6c,	// (0x0003f015) popup_call_audio_out_window_g3_ParamLimits

0xbf6c,	// (0x0003f015) popup_call_audio_out_window_g3

0x0002,

0xf103,	// (0x000421ac) popup_call_audio_out_window_g_ParamLimits

0xf103,	// (0x000421ac) popup_call_audio_out_window_g

0xbf7e,	// (0x0003f027) popup_call_audio_out_window_t1_ParamLimits

0xbf7e,	// (0x0003f027) popup_call_audio_out_window_t1

0xbf96,	// (0x0003f03f) popup_call_audio_out_window_t2_ParamLimits

0xbf96,	// (0x0003f03f) popup_call_audio_out_window_t2

0x0001,

0xf10a,	// (0x000421b3) popup_call_audio_out_window_t_ParamLimits

0xf10a,	// (0x000421b3) popup_call_audio_out_window_t

0xbfab,	// (0x0003f054) bg_popup_call_pane_ParamLimits

0xbfab,	// (0x0003f054) bg_popup_call_pane

0x48ce,	// (0x00037977) call_thumbnail_pane_cp_ParamLimits

0x48ce,	// (0x00037977) call_thumbnail_pane_cp

0xc02f,	// (0x0003f0d8) call_type_pane_cp01_ParamLimits

0xc02f,	// (0x0003f0d8) call_type_pane_cp01

0xc073,	// (0x0003f11c) popup_call_audio_first_window_g1_ParamLimits

0xc073,	// (0x0003f11c) popup_call_audio_first_window_g1

0xc0bf,	// (0x0003f168) popup_call_audio_first_window_g2_ParamLimits

0xc0bf,	// (0x0003f168) popup_call_audio_first_window_g2

0x0001,

0xf10f,	// (0x000421b8) popup_call_audio_first_window_g_ParamLimits

0xf10f,	// (0x000421b8) popup_call_audio_first_window_g

0xc103,	// (0x0003f1ac) popup_call_audio_first_window_t1_ParamLimits

0xc103,	// (0x0003f1ac) popup_call_audio_first_window_t1

0xc1af,	// (0x0003f258) popup_call_audio_first_window_t4_ParamLimits

0xc1af,	// (0x0003f258) popup_call_audio_first_window_t4

0xc23b,	// (0x0003f2e4) popup_call_audio_first_window_t5_ParamLimits

0xc23b,	// (0x0003f2e4) popup_call_audio_first_window_t5

0x0002,

0xf114,	// (0x000421bd) popup_call_audio_first_window_t_ParamLimits

0xf114,	// (0x000421bd) popup_call_audio_first_window_t

0xc26a,	// (0x0003f313) bg_popup_call_pane_cp02

0xc274,	// (0x0003f31d) call_type_pane_cp023

0xc27c,	// (0x0003f325) popup_call_audio_wait_window_g1

0xc284,	// (0x0003f32d) popup_call_audio_wait_window_g2

0x0001,

0xf11b,	// (0x000421c4) popup_call_audio_wait_window_g

0xc28c,	// (0x0003f335) popup_call_audio_wait_window_t3

0xc29a,	// (0x0003f343) bg_popup_call_pane_cp03_ParamLimits

0xc29a,	// (0x0003f343) bg_popup_call_pane_cp03

0xc2fa,	// (0x0003f3a3) call_thumbnail_pane_cp011_ParamLimits

0xc2fa,	// (0x0003f3a3) call_thumbnail_pane_cp011

0xc306,	// (0x0003f3af) call_type_pane_cp034_ParamLimits

0xc306,	// (0x0003f3af) call_type_pane_cp034

0xc342,	// (0x0003f3eb) popup_call_audio_second_window_g1_ParamLimits

0xc342,	// (0x0003f3eb) popup_call_audio_second_window_g1

0xc37e,	// (0x0003f427) popup_call_audio_second_window_g2_ParamLimits

0xc37e,	// (0x0003f427) popup_call_audio_second_window_g2

0x0001,

0xf120,	// (0x000421c9) popup_call_audio_second_window_g_ParamLimits

0xf120,	// (0x000421c9) popup_call_audio_second_window_g

0xc3ba,	// (0x0003f463) popup_call_audio_second_window_t1_ParamLimits

0xc3ba,	// (0x0003f463) popup_call_audio_second_window_t1

0xc43b,	// (0x0003f4e4) popup_call_audio_second_window_t2_ParamLimits

0xc43b,	// (0x0003f4e4) popup_call_audio_second_window_t2

0xc471,	// (0x0003f51a) popup_call_audio_second_window_t3_ParamLimits

0xc471,	// (0x0003f51a) popup_call_audio_second_window_t3

0x0002,

0xf125,	// (0x000421ce) popup_call_audio_second_window_t_ParamLimits

0xf125,	// (0x000421ce) popup_call_audio_second_window_t

0xc26a,	// (0x0003f313) bg_popup_call_pane_cp04

0xc4a7,	// (0x0003f550) list_conf_pane

0xc4af,	// (0x0003f558) popup_call_audio_conf_window_t1

0xc4bd,	// (0x0003f566) call_thumbnail_pane_g1

0xc4c5,	// (0x0003f56e) bg_pinb_pane_ParamLimits

0xc4c5,	// (0x0003f56e) bg_pinb_pane

0xc4d3,	// (0x0003f57c) find_pinb_pane

0xc4dc,	// (0x0003f585) listscroll_pinb_pane_ParamLimits

0xc4dc,	// (0x0003f585) listscroll_pinb_pane

0xc4eb,	// (0x0003f594) pinb_bg_pane_g1

0x48f2,	// (0x0003799b) pinb_bg_pane_g2

0x48fe,	// (0x000379a7) pinb_bg_pane_g3

0x490a,	// (0x000379b3) pinb_bg_pane_g4

0x4916,	// (0x000379bf) pinb_bg_pane_g5

0x4922,	// (0x000379cb) pinb_bg_pane_g6

0x492d,	// (0x000379d6) pinb_bg_pane_g7

0x4938,	// (0x000379e1) pinb_bg_pane_g8

0x4943,	// (0x000379ec) pinb_bg_pane_g9

0x494d,	// (0x000379f6) pinb_bg_pane_g10

0x0009,

0xf12c,	// (0x000421d5) pinb_bg_pane_g

0x496a,	// (0x00037a13) grid_pinb_pane

0x4975,	// (0x00037a1e) list_pinb_pane

0x4980,	// (0x00037a29) scroll_pane_cp01_ParamLimits

0x4980,	// (0x00037a29) scroll_pane_cp01

0xc4f5,	// (0x0003f59e) find_pinb_pane_g1_ParamLimits

0xc4f5,	// (0x0003f59e) find_pinb_pane_g1

0xc50d,	// (0x0003f5b6) find_pinb_pane_t1

0xc51f,	// (0x0003f5c8) find_pinb_pane_t2

0x0001,

0xf146,	// (0x000421ef) find_pinb_pane_t

0xc534,	// (0x0003f5dd) input_focus_pane_cp01_ParamLimits

0xc534,	// (0x0003f5dd) input_focus_pane_cp01

0x4992,	// (0x00037a3b) cell_pinb_pane_ParamLimits

0x4992,	// (0x00037a3b) cell_pinb_pane

0x49b2,	// (0x00037a5b) cell_pinb_pane_g1_ParamLimits

0x49b2,	// (0x00037a5b) cell_pinb_pane_g1

0x49c7,	// (0x00037a70) cell_pinb_pane_g2_ParamLimits

0x49c7,	// (0x00037a70) cell_pinb_pane_g2

0xc540,	// (0x0003f5e9) cell_pinb_pane_g3_ParamLimits

0xc540,	// (0x0003f5e9) cell_pinb_pane_g3

0x0002,

0xf14b,	// (0x000421f4) cell_pinb_pane_g_ParamLimits

0xf14b,	// (0x000421f4) cell_pinb_pane_g

0xc26a,	// (0x0003f313) grid_highlight_pane_cp01

0x49d3,	// (0x00037a7c) list_pinb_item_pane_ParamLimits

0x49d3,	// (0x00037a7c) list_pinb_item_pane

0xc26a,	// (0x0003f313) list_highlight_pane_cp02

0x49ee,	// (0x00037a97) list_pinb_item_pane_g1_ParamLimits

0x49ee,	// (0x00037a97) list_pinb_item_pane_g1

0x49fb,	// (0x00037aa4) list_pinb_item_pane_g2_ParamLimits

0x49fb,	// (0x00037aa4) list_pinb_item_pane_g2

0x4a07,	// (0x00037ab0) list_pinb_item_pane_g3_ParamLimits

0x4a07,	// (0x00037ab0) list_pinb_item_pane_g3

0x4a18,	// (0x00037ac1) list_pinb_item_pane_g4_ParamLimits

0x4a18,	// (0x00037ac1) list_pinb_item_pane_g4

0x0003,

0xf152,	// (0x000421fb) list_pinb_item_pane_g_ParamLimits

0xf152,	// (0x000421fb) list_pinb_item_pane_g

0x4a24,	// (0x00037acd) list_pinb_item_pane_t1_ParamLimits

0x4a24,	// (0x00037acd) list_pinb_item_pane_t1

0x4a55,	// (0x00037afe) calc_display_pane

0x4a73,	// (0x00037b1c) calc_paper_pane

0x4a8f,	// (0x00037b38) grid_calc_pane

0xc26a,	// (0x0003f313) bg_list_pane_cp01

0x4abb,	// (0x00037b64) clock_g1

0x4ac3,	// (0x00037b6c) clock_g2

0x0001,

0xf15b,	// (0x00042204) clock_g

0x4acd,	// (0x00037b76) clock_t1_ParamLimits

0x4acd,	// (0x00037b76) clock_t1

0x4ae2,	// (0x00037b8b) clock_t2_ParamLimits

0x4ae2,	// (0x00037b8b) clock_t2

0x4af4,	// (0x00037b9d) clock_t3_ParamLimits

0x4af4,	// (0x00037b9d) clock_t3

0x4b06,	// (0x00037baf) clock_t4_ParamLimits

0x4b06,	// (0x00037baf) clock_t4

0x4b18,	// (0x00037bc1) clock_t5_ParamLimits

0x4b18,	// (0x00037bc1) clock_t5

0x4b2d,	// (0x00037bd6) clock_t6_ParamLimits

0x4b2d,	// (0x00037bd6) clock_t6

0x4b3f,	// (0x00037be8) clock_t7_ParamLimits

0x4b3f,	// (0x00037be8) clock_t7

0x4b51,	// (0x00037bfa) clock_t8_ParamLimits

0x4b51,	// (0x00037bfa) clock_t8

0x4b67,	// (0x00037c10) clock_t9_ParamLimits

0x4b67,	// (0x00037c10) clock_t9

0x0008,

0xf160,	// (0x00042209) clock_t_ParamLimits

0xf160,	// (0x00042209) clock_t

0xc54c,	// (0x0003f5f5) popup_clock_analogue_window_cp02

0xc54c,	// (0x0003f5f5) popup_clock_digital_window_cp01

0xc554,	// (0x0003f5fd) listscroll_help_pane

0xc26a,	// (0x0003f313) phob_pre_status_pane

0xc55e,	// (0x0003f607) grid_qdial_pane

0xc26a,	// (0x0003f313) listscroll_mce_pane

0xc568,	// (0x0003f611) bg_notes_pane

0xc572,	// (0x0003f61b) list_notes_pane

0x4b7d,	// (0x00037c26) scroll_pane_cp06

0xc57c,	// (0x0003f625) bg_calc_paper_pane

0x4b88,	// (0x00037c31) list_calc_pane

0xc590,	// (0x0003f639) bg_calc_display_pane

0x4ba2,	// (0x00037c4b) calc_display_pane_t1

0x4bb7,	// (0x00037c60) calc_display_pane_t2

0x4bcc,	// (0x00037c75) calc_display_pane_t3

0x0002,

0xf173,	// (0x0004221c) calc_display_pane_t

0x4bde,	// (0x00037c87) cell_calc_pane_ParamLimits

0x4bde,	// (0x00037c87) cell_calc_pane

0xc59c,	// (0x0003f645) bg_calc_paper_pane_g1

0xc5a8,	// (0x0003f651) bg_calc_paper_pane_g2

0xc5b4,	// (0x0003f65d) bg_calc_paper_pane_g3

0xc5c0,	// (0x0003f669) bg_calc_paper_pane_g4

0xc5cc,	// (0x0003f675) bg_calc_paper_pane_g5

0x4c0d,	// (0x00037cb6) bg_calc_paper_pane_g6

0x4c1e,	// (0x00037cc7) bg_calc_paper_pane_g7

0x4c2f,	// (0x00037cd8) bg_calc_paper_pane_g8

0x0007,

0xf17a,	// (0x00042223) bg_calc_paper_pane_g

0x4c40,	// (0x00037ce9) calc_bg_paper_pane_g9

0x4c51,	// (0x00037cfa) list_calc_item_pane_ParamLimits

0x4c51,	// (0x00037cfa) list_calc_item_pane

0xc5d8,	// (0x0003f681) list_calc_item_pane_g1

0x4c75,	// (0x00037d1e) list_calc_item_pane_t1_ParamLimits

0x4c75,	// (0x00037d1e) list_calc_item_pane_t1

0x4c87,	// (0x00037d30) list_calc_item_pane_t2_ParamLimits

0x4c87,	// (0x00037d30) list_calc_item_pane_t2

0x0001,

0xf18b,	// (0x00042234) list_calc_item_pane_t_ParamLimits

0xf18b,	// (0x00042234) list_calc_item_pane_t

0xc5e5,	// (0x0003f68e) cell_calc_pane_g1

0xc5ef,	// (0x0003f698) grid_highlight_pane_cp02

0xc611,	// (0x0003f6ba) bg_calc_display_pane_g1

0x4cb7,	// (0x00037d60) bg_calc_display_pane_g2

0xc61a,	// (0x0003f6c3) bg_calc_display_pane_g3

0x0002,

0xf195,	// (0x0004223e) bg_calc_display_pane_g

0x4cc1,	// (0x00037d6a) cell_qdial_pane_ParamLimits

0x4cc1,	// (0x00037d6a) cell_qdial_pane

0x4cd7,	// (0x00037d80) cell_qdial_pane_g1_ParamLimits

0x4cd7,	// (0x00037d80) cell_qdial_pane_g1

0x4ce4,	// (0x00037d8d) cell_qdial_pane_g2_ParamLimits

0x4ce4,	// (0x00037d8d) cell_qdial_pane_g2

0xc623,	// (0x0003f6cc) cell_qdial_pane_g3_ParamLimits

0xc623,	// (0x0003f6cc) cell_qdial_pane_g3

0x0003,

0xf19c,	// (0x00042245) cell_qdial_pane_g_ParamLimits

0xf19c,	// (0x00042245) cell_qdial_pane_g

0x4d02,	// (0x00037dab) cell_qdial_pane_t1_ParamLimits

0x4d02,	// (0x00037dab) cell_qdial_pane_t1

0x4d1a,	// (0x00037dc3) cell_qdial_pane_t2_ParamLimits

0x4d1a,	// (0x00037dc3) cell_qdial_pane_t2

0x4d2d,	// (0x00037dd6) cell_qdial_pane_t3_ParamLimits

0x4d2d,	// (0x00037dd6) cell_qdial_pane_t3

0x0002,

0xf1a5,	// (0x0004224e) cell_qdial_pane_t_ParamLimits

0xf1a5,	// (0x0004224e) cell_qdial_pane_t

0xc26a,	// (0x0003f313) grid_highlight_pane_cp04

0xc62f,	// (0x0003f6d8) thumbnail_qdial_pane_ParamLimits

0xc62f,	// (0x0003f6d8) thumbnail_qdial_pane

0xc68b,	// (0x0003f734) list_help_pane

0xc694,	// (0x0003f73d) scroll_pane_cp02

0x4d40,	// (0x00037de9) help_list_pane_t1_ParamLimits

0x4d40,	// (0x00037de9) help_list_pane_t1

0x4d6a,	// (0x00037e13) bg_notes_pane_g2

0x4d72,	// (0x00037e1b) bg_notes_pane_g3

0x4d7a,	// (0x00037e23) notes_bg_pane_g1

0x4d82,	// (0x00037e2b) notes_bg_pane_g4

0x4d8a,	// (0x00037e33) notes_bg_pane_g5

0x4d92,	// (0x00037e3b) notes_bg_pane_g6

0x4d9a,	// (0x00037e43) notes_bg_pane_g7

0x4da2,	// (0x00037e4b) notes_bg_pane_g8

0x4daa,	// (0x00037e53) notes_bg_pane_g9

0x0006,

0xf1c3,	// (0x0004226c) notes_bg_pane_g

0x4db2,	// (0x00037e5b) list_notes_text_pane_ParamLimits

0x4db2,	// (0x00037e5b) list_notes_text_pane

0xc69d,	// (0x0003f746) list_notes_text_pane_g1

0x32a9,	// (0x00036352) list_notes_text_pane_t1

0xc590,	// (0x0003f639) listscroll_cale_week_pane

0x4dec,	// (0x00037e95) bg_cale_heading_pane

0xc6b7,	// (0x0003f760) bg_cale_pane_cp01

0x4e00,	// (0x00037ea9) cale_week_corner_pane

0x4e16,	// (0x00037ebf) cale_week_day_heading_pane

0x4e2a,	// (0x00037ed3) cale_week_scroll_pane_g1

0x4e3b,	// (0x00037ee4) cale_week_scroll_pane_g2

0x4e4c,	// (0x00037ef5) cale_week_scroll_pane_g3

0x4e5d,	// (0x00037f06) cale_week_scroll_pane_g4

0x4e6e,	// (0x00037f17) cale_week_scroll_pane_g5

0x4e7f,	// (0x00037f28) cale_week_scroll_pane_g6

0x4e92,	// (0x00037f3b) cale_week_scroll_pane_g7

0x4ea5,	// (0x00037f4e) cale_week_scroll_pane_g8

0x4eb8,	// (0x00037f61) cale_week_scroll_pane_g9

0x4ec9,	// (0x00037f72) cale_week_scroll_pane_g10

0x4eda,	// (0x00037f83) cale_week_scroll_pane_g11

0x4eeb,	// (0x00037f94) cale_week_scroll_pane_g12

0x4efc,	// (0x00037fa5) cale_week_scroll_pane_g13

0x4f0d,	// (0x00037fb6) cale_week_scroll_pane_g14

0x4f1e,	// (0x00037fc7) cale_week_scroll_pane_g15

0x000e,

0xf1d2,	// (0x0004227b) cale_week_scroll_pane_g

0x4f2f,	// (0x00037fd8) cale_week_time_pane

0x4f42,	// (0x00037feb) grid_cale_week_pane

0x4f57,	// (0x00038000) scroll_pane_cp08

0x4f71,	// (0x0003801a) cell_cale_week_pane_ParamLimits

0x4f71,	// (0x0003801a) cell_cale_week_pane

0x4faf,	// (0x00038058) cale_week_day_heading_pane_t1

0x4fdc,	// (0x00038085) cale_week_day_heading_pane_t2

0x5009,	// (0x000380b2) cale_week_day_heading_pane_t3

0x5036,	// (0x000380df) cale_week_day_heading_pane_t4

0x5063,	// (0x0003810c) cale_week_day_heading_pane_t5

0x5090,	// (0x00038139) cale_week_day_heading_pane_t6

0x50bd,	// (0x00038166) cale_week_day_heading_pane_t7

0x0006,

0xf1f1,	// (0x0004229a) cale_week_day_heading_pane_t

0xc6e2,	// (0x0003f78b) bg_cale_side_pane

0x50ea,	// (0x00038193) cale_week_time_pane_t1

0x5116,	// (0x000381bf) cale_week_time_pane_t2

0x5142,	// (0x000381eb) cale_week_time_pane_t3

0x516e,	// (0x00038217) cale_week_time_pane_t4

0x519a,	// (0x00038243) cale_week_time_pane_t5

0x51c6,	// (0x0003826f) cale_week_time_pane_t6

0x51f2,	// (0x0003829b) cale_week_time_pane_t7

0x521e,	// (0x000382c7) cale_week_time_pane_t8

0x0007,

0xf200,	// (0x000422a9) cale_week_time_pane_t

0x524a,	// (0x000382f3) cell_cale_week_pane_g2

0x5263,	// (0x0003830c) cell_cale_week_pane_g3_ParamLimits

0x5263,	// (0x0003830c) cell_cale_week_pane_g3

0xc6f0,	// (0x0003f799) grid_highlight_pane_cp07

0xc6f8,	// (0x0003f7a1) listscroll_gms_pane

0xc702,	// (0x0003f7ab) grid_gms_pane

0xc70b,	// (0x0003f7b4) listscroll_gms_pane_g1

0xc713,	// (0x0003f7bc) listscroll_gms_pane_g2

0x0001,

0xf211,	// (0x000422ba) listscroll_gms_pane_g

0x527b,	// (0x00038324) scroll_pane_cp010

0x5286,	// (0x0003832f) cell_gms_pane_ParamLimits

0x5286,	// (0x0003832f) cell_gms_pane

0x5299,	// (0x00038342) cell_gms_pane_g1

0xc71b,	// (0x0003f7c4) cell_gms_pane_g2

0xc723,	// (0x0003f7cc) cell_gms_pane_g3

0xc72c,	// (0x0003f7d5) cell_gms_pane_g4

0x0003,

0xf216,	// (0x000422bf) cell_gms_pane_g

0xc735,	// (0x0003f7de) grid_highlight_pane_cp09

0x7452,	// (0x0003a4fb) phob_pre_status_pane_g1

0x745a,	// (0x0003a503) phob_pre_status_pane_g2

0x7462,	// (0x0003a50b) phob_pre_status_pane_g3

0x746a,	// (0x0003a513) phob_pre_status_pane_g4

0x0004,

0xf605,	// (0x000426ae) phob_pre_status_pane_g

0x747a,	// (0x0003a523) phob_pre_status_pane_t1

0x748a,	// (0x0003a533) phob_pre_status_pane_t2

0x749a,	// (0x0003a543) phob_pre_status_pane_t3

0x0002,

0xf610,	// (0x000426b9) phob_pre_status_pane_t

0xc26a,	// (0x0003f313) bg_list_pane_cp05

0x52a9,	// (0x00038352) grid_vorec_pane

0x52b3,	// (0x0003835c) vorec_t1

0x52c1,	// (0x0003836a) vorec_t2

0x52cf,	// (0x00038378) vorec_t3

0x52dd,	// (0x00038386) vorec_t4

0x52eb,	// (0x00038394) vorec_t5

0x52f9,	// (0x000383a2) vorec_t6

0x0006,

0xf21f,	// (0x000422c8) vorec_t

0x5315,	// (0x000383be) wait_bar_pane_cp01

0x531d,	// (0x000383c6) cell_vorec_pane_ParamLimits

0x531d,	// (0x000383c6) cell_vorec_pane

0xc73d,	// (0x0003f7e6) cell_vorec_pane_g1

0xc26a,	// (0x0003f313) grid_highlight_pane_cp05

0x5342,	// (0x000383eb) cams_zoom_pane

0x534e,	// (0x000383f7) image_vga_pane

0x535d,	// (0x00038406) main_camera_pane_g1

0x536b,	// (0x00038414) main_camera_pane_g2

0x5377,	// (0x00038420) main_camera_pane_g3

0x5385,	// (0x0003842e) main_camera_pane_g4

0x5393,	// (0x0003843c) main_camera_pane_g5

0x53a1,	// (0x0003844a) main_camera_pane_g6

0x53af,	// (0x00038458) main_camera_pane_g7

0x0007,

0xf22e,	// (0x000422d7) main_camera_pane_g

0x53bd,	// (0x00038466) main_camera_pane_t1

0x53cf,	// (0x00038478) main_camera_pane_t2

0x0001,

0xf23f,	// (0x000422e8) main_camera_pane_t

0x53f2,	// (0x0003849b) cams_zoom_pane_cp_ParamLimits

0x53f2,	// (0x0003849b) cams_zoom_pane_cp

0x5416,	// (0x000384bf) image_cif_pane_ParamLimits

0x5416,	// (0x000384bf) image_cif_pane

0x5434,	// (0x000384dd) image_subqcif_pane

0x543e,	// (0x000384e7) main_video_pane_g1_ParamLimits

0x543e,	// (0x000384e7) main_video_pane_g1

0x545e,	// (0x00038507) main_video_pane_g2_ParamLimits

0x545e,	// (0x00038507) main_video_pane_g2

0x548e,	// (0x00038537) main_video_pane_g3_ParamLimits

0x548e,	// (0x00038537) main_video_pane_g3

0x54b7,	// (0x00038560) main_video_pane_g4_ParamLimits

0x54b7,	// (0x00038560) main_video_pane_g4

0x54e0,	// (0x00038589) main_video_pane_g5_ParamLimits

0x54e0,	// (0x00038589) main_video_pane_g5

0xc753,	// (0x0003f7fc) main_video_pane_g6_ParamLimits

0xc753,	// (0x0003f7fc) main_video_pane_g6

0x0006,

0xf244,	// (0x000422ed) main_video_pane_g_ParamLimits

0xf244,	// (0x000422ed) main_video_pane_g

0x5502,	// (0x000385ab) main_video_pane_t1_ParamLimits

0x5502,	// (0x000385ab) main_video_pane_t1

0xc76d,	// (0x0003f816) cams_zoom_pane_g1

0xc776,	// (0x0003f81f) cams_zoom_pane_g2

0xc77f,	// (0x0003f828) cams_zoom_pane_g3

0xc788,	// (0x0003f831) cams_zoom_pane_g4

0x0003,

0xf253,	// (0x000422fc) cams_zoom_pane_g

0x554c,	// (0x000385f5) grid_cams_pane

0x555a,	// (0x00038603) linegrid_cams_pane

0x5568,	// (0x00038611) cell_cams_pane_ParamLimits

0x5568,	// (0x00038611) cell_cams_pane

0xc791,	// (0x0003f83a) cams_burst_image_pane

0xc799,	// (0x0003f842) cell_cams_pane_g1

0xc26a,	// (0x0003f313) grid_highlight_pane_cp03

0xc5e5,	// (0x0003f68e) mp_bg_pane_g1

0xc26a,	// (0x0003f313) bg_list_pane_cp03

0xe336,	// (0x000413df) bg_mp_pane

0xe33e,	// (0x000413e7) grid_mp_pane

0xe346,	// (0x000413ef) media_player_g1

0xe350,	// (0x000413f9) media_player_t1

0xe35e,	// (0x00041407) media_player_t2

0xe36c,	// (0x00041415) media_player_t3

0xe37a,	// (0x00041423) media_player_t4

0xe388,	// (0x00041431) media_player_t5

0xe396,	// (0x0004143f) media_player_t6

0xe3a4,	// (0x0004144d) media_player_t7

0x0006,

0xf5ef,	// (0x00042698) media_player_t

0xe3b2,	// (0x0004145b) wait_bar_pane_cp02

0xf5d4,	// (0x0004267d) main_usb_pane_t

0x7449,	// (0x0003a4f2) cell_mp_pane

0xc5e5,	// (0x0003f68e) cell_mp_pane_g1

0xc26a,	// (0x0003f313) grid_highlight_pane_cp06

0xc7a1,	// (0x0003f84a) grid_skin_colour_pane

0xc7a9,	// (0x0003f852) list_highlight_pane_cp03

0x557d,	// (0x00038626) skin_g1

0xc7b1,	// (0x0003f85a) skin_t1

0xc7c0,	// (0x0003f869) skin_t2

0x0001,

0xf288,	// (0x00042331) skin_t

0x5587,	// (0x00038630) cell_skin_colour_pane_ParamLimits

0x5587,	// (0x00038630) cell_skin_colour_pane

0xc7ce,	// (0x0003f877) cell_skin_colour_pane_g1

0x5607,	// (0x000386b0) call_video_g1_ParamLimits

0x5607,	// (0x000386b0) call_video_g1

0x5617,	// (0x000386c0) call_video_g2_ParamLimits

0x5617,	// (0x000386c0) call_video_g2

0x0001,

0xf28d,	// (0x00042336) call_video_g_ParamLimits

0xf28d,	// (0x00042336) call_video_g

0x5667,	// (0x00038710) call_video_uplink_pane_cp1_ParamLimits

0x5667,	// (0x00038710) call_video_uplink_pane_cp1

0xc7e0,	// (0x0003f889) call_video_uplink_pane_cp2

0x5735,	// (0x000387de) video_down_crop_pane_ParamLimits

0x5735,	// (0x000387de) video_down_crop_pane

0x5827,	// (0x000388d0) video_down_pane_ParamLimits

0x5827,	// (0x000388d0) video_down_pane

0xc7e8,	// (0x0003f891) video_down_subqcif_pane_ParamLimits

0xc7e8,	// (0x0003f891) video_down_subqcif_pane

0xc802,	// (0x0003f8ab) video_down_subqcif_pane_cp_ParamLimits

0xc802,	// (0x0003f8ab) video_down_subqcif_pane_cp

0xc828,	// (0x0003f8d1) im_reading_pane_ParamLimits

0xc828,	// (0x0003f8d1) im_reading_pane

0x5944,	// (0x000389ed) im_writing_pane_ParamLimits

0x5944,	// (0x000389ed) im_writing_pane

0x5962,	// (0x00038a0b) im_reading_pane_t1

0xc842,	// (0x0003f8eb) list_im_pane

0xc853,	// (0x0003f8fc) scroll_pane_cp07

0x59aa,	// (0x00038a53) im_writing_pane_t1_ParamLimits

0x59aa,	// (0x00038a53) im_writing_pane_t1

0xc86c,	// (0x0003f915) im_writing_pane_t2_ParamLimits

0xc86c,	// (0x0003f915) im_writing_pane_t2

0x0001,

0xf297,	// (0x00042340) im_writing_pane_t_ParamLimits

0xf297,	// (0x00042340) im_writing_pane_t

0xc26a,	// (0x0003f313) input_focus_pane_cp04

0xc26a,	// (0x0003f313) input_focus_pane_cp05

0x59bc,	// (0x00038a65) list_im_single_pane_ParamLimits

0x59bc,	// (0x00038a65) list_im_single_pane

0x59d8,	// (0x00038a81) list_single_im_pane_t1

0x740d,	// (0x0003a4b6) blid_accuracy_pane

0x7415,	// (0x0003a4be) blid_compass_pane

0x741f,	// (0x0003a4c8) main_location_t1

0x742d,	// (0x0003a4d6) main_location_t2

0x743b,	// (0x0003a4e4) main_location_t3

0x0002,

0xf5fe,	// (0x000426a7) main_location_t

0xc26a,	// (0x0003f313) aid_levels_location

0xc5e5,	// (0x0003f68e) blid_accuracy_pane_g1

0xc5e5,	// (0x0003f68e) blid_accuracy_pane_g2

0x0001,

0xf2f9,	// (0x000423a2) blid_accuracy_pane_g

0xc8b4,	// (0x0003f95d) wml_content_pane

0xc8f2,	// (0x0003f99b) wml_button_pane_ParamLimits

0xc8f2,	// (0x0003f99b) wml_button_pane

0x59e7,	// (0x00038a90) wml_list_single_large_pane_ParamLimits

0x59e7,	// (0x00038a90) wml_list_single_large_pane

0x5a09,	// (0x00038ab2) wml_list_single_medium_pane_ParamLimits

0x5a09,	// (0x00038ab2) wml_list_single_medium_pane

0x5a2f,	// (0x00038ad8) wml_list_single_small_pane_ParamLimits

0x5a2f,	// (0x00038ad8) wml_list_single_small_pane

0xc906,	// (0x0003f9af) wml_selection_box_pane_ParamLimits

0xc906,	// (0x0003f9af) wml_selection_box_pane

0xc919,	// (0x0003f9c2) wml_list_single_pane_t1

0xc928,	// (0x0003f9d1) wml_list_single_medium_pane_t1

0xc937,	// (0x0003f9e0) wml_list_single_large_pane_t1

0xc946,	// (0x0003f9ef) input_focus_pane_cp02_ParamLimits

0xc946,	// (0x0003f9ef) input_focus_pane_cp02

0xc959,	// (0x0003fa02) wml_selection_box_pane_g1

0xc962,	// (0x0003fa0b) wml_selection_box_pane_t1_ParamLimits

0xc962,	// (0x0003fa0b) wml_selection_box_pane_t1

0xc4c5,	// (0x0003f56e) bg_wml_button_pane_ParamLimits

0xc4c5,	// (0x0003f56e) bg_wml_button_pane

0xc97a,	// (0x0003fa23) wml_button_pane_g1

0xc982,	// (0x0003fa2b) wml_button_pane_t1

0xc97a,	// (0x0003fa23) wml_button_bg_pane_g1

0xc992,	// (0x0003fa3b) wml_button_bg_pane_g2

0xc99a,	// (0x0003fa43) wml_button_bg_pane_g3

0xc9a2,	// (0x0003fa4b) wml_button_bg_pane_g4

0xc9aa,	// (0x0003fa53) wml_button_bg_pane_g5

0xc9b2,	// (0x0003fa5b) wml_button_bg_pane_g6

0xc9ba,	// (0x0003fa63) wml_button_bg_pane_g7

0xc9c2,	// (0x0003fa6b) wml_button_bg_pane_g8

0xc9ca,	// (0x0003fa73) wml_button_bg_pane_g9

0x0008,

0xf29c,	// (0x00042345) wml_button_bg_pane_g

0x5a5a,	// (0x00038b03) bg_list_pane_cp02

0xc9d2,	// (0x0003fa7b) mce_header_pane_ParamLimits

0xc9d2,	// (0x0003fa7b) mce_header_pane

0xc9e8,	// (0x0003fa91) mce_icon_pane

0xc9e8,	// (0x0003fa91) mce_image_pane

0xc9f1,	// (0x0003fa9a) mce_text_pane_ParamLimits

0xc9f1,	// (0x0003fa9a) mce_text_pane

0x5a64,	// (0x00038b0d) scroll_pane_cp03

0xc8ea,	// (0x0003f993) scroll_pane_cp04

0xca04,	// (0x0003faad) scroll_pane_cp05_ParamLimits

0xca04,	// (0x0003faad) scroll_pane_cp05

0x5a6e,	// (0x00038b17) mce_header_field_pane_ParamLimits

0x5a6e,	// (0x00038b17) mce_header_field_pane

0x5a90,	// (0x00038b39) mce_header_field_pane_2_ParamLimits

0x5a90,	// (0x00038b39) mce_header_field_pane_2

0x5aa6,	// (0x00038b4f) mce_header_field_pane_3

0x5aae,	// (0x00038b57) list_single_mce_message_pane_ParamLimits

0x5aae,	// (0x00038b57) list_single_mce_message_pane

0x5acd,	// (0x00038b76) list_single_mce_smart_pane_ParamLimits

0x5acd,	// (0x00038b76) list_single_mce_smart_pane

0xca10,	// (0x0003fab9) input_focus_pane_cp03

0xca19,	// (0x0003fac2) list_header_data_pane

0x5af7,	// (0x00038ba0) mce_header_field_pane_t1

0x5b07,	// (0x00038bb0) list_single_mce_header_pane_ParamLimits

0x5b07,	// (0x00038bb0) list_single_mce_header_pane

0xca21,	// (0x0003faca) list_single_mce_header_pane_t1

0xca30,	// (0x0003fad9) list_single_mce_message_pane_g1

0xca38,	// (0x0003fae1) list_single_mce_message_pane_t1

0x5b43,	// (0x00038bec) bg_cale_heading_pane_cp01_ParamLimits

0x5b43,	// (0x00038bec) bg_cale_heading_pane_cp01

0xca46,	// (0x0003faef) bg_cale_pane_cp02_ParamLimits

0xca46,	// (0x0003faef) bg_cale_pane_cp02

0x5b66,	// (0x00038c0f) cale_month_corner_pane

0x5b7c,	// (0x00038c25) cale_month_day_heading_pane_ParamLimits

0x5b7c,	// (0x00038c25) cale_month_day_heading_pane

0x5baf,	// (0x00038c58) cale_month_pane_g1_ParamLimits

0x5baf,	// (0x00038c58) cale_month_pane_g1

0x5bcb,	// (0x00038c74) cale_month_pane_g2_ParamLimits

0x5bcb,	// (0x00038c74) cale_month_pane_g2

0x5be6,	// (0x00038c8f) cale_month_pane_g3_ParamLimits

0x5be6,	// (0x00038c8f) cale_month_pane_g3

0x5c12,	// (0x00038cbb) cale_month_pane_g4_ParamLimits

0x5c12,	// (0x00038cbb) cale_month_pane_g4

0x5c3e,	// (0x00038ce7) cale_month_pane_g5_ParamLimits

0x5c3e,	// (0x00038ce7) cale_month_pane_g5

0x5c6a,	// (0x00038d13) cale_month_pane_g6_ParamLimits

0x5c6a,	// (0x00038d13) cale_month_pane_g6

0x5ca6,	// (0x00038d4f) cale_month_pane_g7_ParamLimits

0x5ca6,	// (0x00038d4f) cale_month_pane_g7

0x5ce2,	// (0x00038d8b) cale_month_pane_g8_ParamLimits

0x5ce2,	// (0x00038d8b) cale_month_pane_g8

0x5d1e,	// (0x00038dc7) cale_month_pane_g9_ParamLimits

0x5d1e,	// (0x00038dc7) cale_month_pane_g9

0x5d58,	// (0x00038e01) cale_month_pane_g10_ParamLimits

0x5d58,	// (0x00038e01) cale_month_pane_g10

0x5d92,	// (0x00038e3b) cale_month_pane_g11_ParamLimits

0x5d92,	// (0x00038e3b) cale_month_pane_g11

0x5dcc,	// (0x00038e75) cale_month_pane_g12_ParamLimits

0x5dcc,	// (0x00038e75) cale_month_pane_g12

0x5e06,	// (0x00038eaf) cale_month_pane_g13_ParamLimits

0x5e06,	// (0x00038eaf) cale_month_pane_g13

0x000c,

0xf2af,	// (0x00042358) cale_month_pane_g_ParamLimits

0xf2af,	// (0x00042358) cale_month_pane_g

0x5e40,	// (0x00038ee9) cale_month_week_pane

0x5e53,	// (0x00038efc) grid_cale_month_pane_ParamLimits

0x5e53,	// (0x00038efc) grid_cale_month_pane

0x5e81,	// (0x00038f2a) cale_month_day_heading_pane_t1

0x5edf,	// (0x00038f88) cale_month_day_heading_pane_t2

0x5f44,	// (0x00038fed) cale_month_day_heading_pane_t3

0x5fa9,	// (0x00039052) cale_month_day_heading_pane_t4

0x600e,	// (0x000390b7) cale_month_day_heading_pane_t5

0x607b,	// (0x00039124) cale_month_day_heading_pane_t6

0x60f0,	// (0x00039199) cale_month_day_heading_pane_t7

0x0006,

0xf2ca,	// (0x00042373) cale_month_day_heading_pane_t

0xc6e2,	// (0x0003f78b) bg_cale_side_pane_cp01

0x6165,	// (0x0003920e) cale_month_week_pane_t1

0x6190,	// (0x00039239) cale_month_week_pane_t2

0x61bb,	// (0x00039264) cale_month_week_pane_t3

0x61e6,	// (0x0003928f) cale_month_week_pane_t4

0x6211,	// (0x000392ba) cale_month_week_pane_t5

0x623c,	// (0x000392e5) cale_month_week_pane_t6

0x0005,

0xf2d9,	// (0x00042382) cale_month_week_pane_t

0x6267,	// (0x00039310) cell_cale_month_pane_ParamLimits

0x6267,	// (0x00039310) cell_cale_month_pane

0x6335,	// (0x000393de) cell_cale_month_pane_g1

0x6341,	// (0x000393ea) cell_cale_month_pane_t1_ParamLimits

0x6341,	// (0x000393ea) cell_cale_month_pane_t1

0xc6f0,	// (0x0003f799) grid_highlight_pane_cp08

0xc5e5,	// (0x0003f68e) main_smil_g1

0x635d,	// (0x00039406) smil_status_pane

0xca7b,	// (0x0003fb24) smil_text_pane

0xe254,	// (0x000412fd) bg_popup_call3_rect_pane_g8

0xe25c,	// (0x00041305) bg_popup_call3_rect_pane_g9

0x0008,

0xf592,	// (0x0004263b) bg_popup_call3_rect_pane_g

0xe4f1,	// (0x0004159a) smil_status_volume_pane_g1

0xca85,	// (0x0003fb2e) smil_status_pane_t1

0x77fc,	// (0x0003a8a5) volume_smil_pane

0xca9c,	// (0x0003fb45) list_smil_text_pane

0x6370,	// (0x00039419) scroll_pane_cp011

0x637b,	// (0x00039424) smil_text_list_pane_t1_ParamLimits

0x637b,	// (0x00039424) smil_text_list_pane_t1

0x63df,	// (0x00039488) aid_volume_smil_ParamLimits

0x63df,	// (0x00039488) aid_volume_smil

0xc5e5,	// (0x0003f68e) smil_volume_pane_g1

0xc5e5,	// (0x0003f68e) smil_volume_pane_g2

0x0001,

0xf2f9,	// (0x000423a2) smil_volume_pane_g

0xc590,	// (0x0003f639) listscroll_cale_day_pane

0xcaa6,	// (0x0003fb4f) bg_cale_pane

0xcabe,	// (0x0003fb67) list_cale_pane

0xcacf,	// (0x0003fb78) scroll_pane_cp09

0xcae0,	// (0x0003fb89) cale_bg_pane_g1

0xcae8,	// (0x0003fb91) cale_bg_pane_g2

0xcaf0,	// (0x0003fb99) cale_bg_pane_g3

0xcaf8,	// (0x0003fba1) cale_bg_pane_g4

0xcb00,	// (0x0003fba9) cale_bg_pane_g5

0xcb08,	// (0x0003fbb1) cale_bg_pane_g6

0xcb10,	// (0x0003fbb9) cale_bg_pane_g7

0xcb18,	// (0x0003fbc1) cale_bg_pane_g8

0xcb20,	// (0x0003fbc9) cale_bg_pane_g9

0x0008,

0xf2fe,	// (0x000423a7) cale_bg_pane_g

0x6401,	// (0x000394aa) list_cale_time_pane_ParamLimits

0x6401,	// (0x000394aa) list_cale_time_pane

0x6419,	// (0x000394c2) list_cale_time_pane_g1_ParamLimits

0x6419,	// (0x000394c2) list_cale_time_pane_g1

0xcb28,	// (0x0003fbd1) list_cale_time_pane_g2_ParamLimits

0xcb28,	// (0x0003fbd1) list_cale_time_pane_g2

0x6425,	// (0x000394ce) list_cale_time_pane_g3_ParamLimits

0x6425,	// (0x000394ce) list_cale_time_pane_g3

0x6433,	// (0x000394dc) list_cale_time_pane_g4_ParamLimits

0x6433,	// (0x000394dc) list_cale_time_pane_g4

0x6441,	// (0x000394ea) list_cale_time_pane_g5_ParamLimits

0x6441,	// (0x000394ea) list_cale_time_pane_g5

0x0005,

0xf311,	// (0x000423ba) list_cale_time_pane_g_ParamLimits

0xf311,	// (0x000423ba) list_cale_time_pane_g

0x644f,	// (0x000394f8) list_cale_time_pane_t1_ParamLimits

0x644f,	// (0x000394f8) list_cale_time_pane_t1

0x6477,	// (0x00039520) list_cale_time_pane_t2_ParamLimits

0x6477,	// (0x00039520) list_cale_time_pane_t2

0x678c,	// (0x00039835) aid_blid_cardinal_pane

0x67ce,	// (0x00039877) compass_pane_t4

0x649f,	// (0x00039548) list_cale_time_pane_t4_ParamLimits

0x649f,	// (0x00039548) list_cale_time_pane_t4

0x67dc,	// (0x00039885) compass_pane_t5

0x67ec,	// (0x00039895) compass_pane_t6

0x67fa,	// (0x000398a3) compass_pane_t7

0xcf36,	// (0x0003ffdf) navi_pane_cc_t1

0xd08b,	// (0x00040134) aid_phob_thumbnail_center_pane

0x6f03,	// (0x00039fac) main_postcard_pane_g4_ParamLimits

0x0002,

0xf31e,	// (0x000423c7) list_cale_time_pane_t_ParamLimits

0xf31e,	// (0x000423c7) list_cale_time_pane_t

0x485c,	// (0x00037905) bg_popup_window_pane_cp02_ParamLimits

0x485c,	// (0x00037905) bg_popup_window_pane_cp02

0xcb42,	// (0x0003fbeb) heading_pane_cp01_ParamLimits

0xcb42,	// (0x0003fbeb) heading_pane_cp01

0xcb4e,	// (0x0003fbf7) loc_req_pane_ParamLimits

0xcb4e,	// (0x0003fbf7) loc_req_pane

0xcb5e,	// (0x0003fc07) loc_type_pane_ParamLimits

0xcb5e,	// (0x0003fc07) loc_type_pane

0xcb70,	// (0x0003fc19) loc_type_pane_t1_ParamLimits

0xcb70,	// (0x0003fc19) loc_type_pane_t1

0xcb82,	// (0x0003fc2b) loc_type_pane_t2_ParamLimits

0xcb82,	// (0x0003fc2b) loc_type_pane_t2

0xcb94,	// (0x0003fc3d) loc_type_pane_t3_ParamLimits

0xcb94,	// (0x0003fc3d) loc_type_pane_t3

0x0002,

0xf325,	// (0x000423ce) loc_type_pane_t_ParamLimits

0xf325,	// (0x000423ce) loc_type_pane_t

0xcba6,	// (0x0003fc4f) list_loc_req_pane

0xcbb0,	// (0x0003fc59) scroll_pane_cp012

0x64c7,	// (0x00039570) list_single_loc_request_popup_menu_pane_ParamLimits

0x64c7,	// (0x00039570) list_single_loc_request_popup_menu_pane

0xcbbb,	// (0x0003fc64) list_single_loc_request_popup_menu_pane_g1_ParamLimits

0xcbbb,	// (0x0003fc64) list_single_loc_request_popup_menu_pane_g1

0xcbc7,	// (0x0003fc70) list_single_loc_request_popup_menu_pane_g2_ParamLimits

0xcbc7,	// (0x0003fc70) list_single_loc_request_popup_menu_pane_g2

0x0001,

0xf32c,	// (0x000423d5) list_single_loc_request_popup_menu_pane_g_ParamLimits

0xf32c,	// (0x000423d5) list_single_loc_request_popup_menu_pane_g

0xcbd3,	// (0x0003fc7c) list_single_loc_request_popup_menu_pane_t1_ParamLimits

0xcbd3,	// (0x0003fc7c) list_single_loc_request_popup_menu_pane_t1

0x64d9,	// (0x00039582) bg_popup_window_pane_cp03_ParamLimits

0x64d9,	// (0x00039582) bg_popup_window_pane_cp03

0x64e7,	// (0x00039590) heading_loc_req_pane_ParamLimits

0x64e7,	// (0x00039590) heading_loc_req_pane

0x64f3,	// (0x0003959c) popup_dyc_status_message_window_g1_ParamLimits

0x64f3,	// (0x0003959c) popup_dyc_status_message_window_g1

0x64ff,	// (0x000395a8) popup_dyc_status_message_window_t1_ParamLimits

0x64ff,	// (0x000395a8) popup_dyc_status_message_window_t1

0x6511,	// (0x000395ba) popup_dyc_status_message_window_t2_ParamLimits

0x6511,	// (0x000395ba) popup_dyc_status_message_window_t2

0x6523,	// (0x000395cc) popup_dyc_status_message_window_t3_ParamLimits

0x6523,	// (0x000395cc) popup_dyc_status_message_window_t3

0x0002,

0xf331,	// (0x000423da) popup_dyc_status_message_window_t_ParamLimits

0xf331,	// (0x000423da) popup_dyc_status_message_window_t

0xc26a,	// (0x0003f313) bg_heading_pane_cp01

0xcbe9,	// (0x0003fc92) heading_loc_req_pane_g1

0xcbf1,	// (0x0003fc9a) heading_loc_req_pane_g2

0xcbf9,	// (0x0003fca2) heading_loc_req_pane_g3

0x0002,

0xf338,	// (0x000423e1) heading_loc_req_pane_g

0xcc01,	// (0x0003fcaa) heading_loc_req_pane_t1

0xcc11,	// (0x0003fcba) bg_popup_sub_pane_cp01_ParamLimits

0xcc11,	// (0x0003fcba) bg_popup_sub_pane_cp01

0xcc1f,	// (0x0003fcc8) popup_cale_events_window_g1_ParamLimits

0xcc1f,	// (0x0003fcc8) popup_cale_events_window_g1

0xcc3f,	// (0x0003fce8) popup_cale_events_window_g2_ParamLimits

0xcc3f,	// (0x0003fce8) popup_cale_events_window_g2

0x0001,

0xf36c,	// (0x00042415) popup_cale_events_window_g_ParamLimits

0xf36c,	// (0x00042415) popup_cale_events_window_g

0xcc5f,	// (0x0003fd08) popup_cale_events_window_t1_ParamLimits

0xcc5f,	// (0x0003fd08) popup_cale_events_window_t1

0xcc71,	// (0x0003fd1a) popup_cale_events_window_t2_ParamLimits

0xcc71,	// (0x0003fd1a) popup_cale_events_window_t2

0xccaf,	// (0x0003fd58) popup_cale_events_window_t3_ParamLimits

0xccaf,	// (0x0003fd58) popup_cale_events_window_t3

0xcce9,	// (0x0003fd92) popup_cale_events_window_t4_ParamLimits

0xcce9,	// (0x0003fd92) popup_cale_events_window_t4

0x0003,

0xf371,	// (0x0004241a) popup_cale_events_window_t_ParamLimits

0xf371,	// (0x0004241a) popup_cale_events_window_t

0x654d,	// (0x000395f6) call_type_pane

0xcd1f,	// (0x0003fdc8) popup_call_status_window_g1

0x6559,	// (0x00039602) popup_call_status_window_g2

0x6565,	// (0x0003960e) popup_call_status_window_g3

0x0002,

0xf37a,	// (0x00042423) popup_call_status_window_g

0xcd2d,	// (0x0003fdd6) call_type_pane_g1

0xcd36,	// (0x0003fddf) call_type_pane_g2

0x0001,

0xf381,	// (0x0004242a) call_type_pane_g

0xc26a,	// (0x0003f313) bg_popup_sub_pane_cp02

0xcd3f,	// (0x0003fde8) listscroll_popup_wml_pane

0xcd47,	// (0x0003fdf0) list_wml_pane

0xcd51,	// (0x0003fdfa) scroll_pane_cp013

0xcd5c,	// (0x0003fe05) list_single_graphic_popup_wml_pane_ParamLimits

0xcd5c,	// (0x0003fe05) list_single_graphic_popup_wml_pane

0xc5e5,	// (0x0003f68e) list_single_graphic_popup_wml_pane_g1

0xcd70,	// (0x0003fe19) list_single_graphic_popup_wml_pane_g2

0x0001,

0xf386,	// (0x0004242f) list_single_graphic_popup_wml_pane_g

0xcd78,	// (0x0003fe21) list_single_graphic_popup_wml_pane_t1

0xcd8e,	// (0x0003fe37) aid_call_pane

0xc4bd,	// (0x0003f566) popup_clock_analogue_window_g1

0xc4bd,	// (0x0003f566) popup_clock_analogue_window_g2

0x6571,	// (0x0003961a) popup_clock_analogue_window_g3

0x6571,	// (0x0003961a) popup_clock_analogue_window_g4

0xc5e5,	// (0x0003f68e) popup_clock_analogue_window_g5

0x0004,

0xf38b,	// (0x00042434) popup_clock_analogue_window_g

0x6579,	// (0x00039622) popup_clock_analogue_window_t1

0x6587,	// (0x00039630) clock_digital_number_pane_ParamLimits

0x6587,	// (0x00039630) clock_digital_number_pane

0x6593,	// (0x0003963c) clock_digital_number_pane_cp02_ParamLimits

0x6593,	// (0x0003963c) clock_digital_number_pane_cp02

0x659f,	// (0x00039648) clock_digital_number_pane_cp03_ParamLimits

0x659f,	// (0x00039648) clock_digital_number_pane_cp03

0x65ab,	// (0x00039654) clock_digital_number_pane_cp04_ParamLimits

0x65ab,	// (0x00039654) clock_digital_number_pane_cp04

0x65b7,	// (0x00039660) clock_digital_separator_pane_ParamLimits

0x65b7,	// (0x00039660) clock_digital_separator_pane

0x65c3,	// (0x0003966c) popup_clock_digital_window_t1

0xc5e5,	// (0x0003f68e) clock_digital_number_pane_g1

0xc5e5,	// (0x0003f68e) clock_digital_number_pane_g2

0x0001,

0xf2f9,	// (0x000423a2) clock_digital_number_pane_g

0xc5e5,	// (0x0003f68e) clock_digital_separator_pane_g1

0xc5e5,	// (0x0003f68e) clock_digital_separator_pane_g2

0x0001,

0xf2f9,	// (0x000423a2) clock_digital_separator_pane_g

0xc26a,	// (0x0003f313) bg_popup_window_pane_cp04

0xcd96,	// (0x0003fe3f) heading_pane_cp03

0xcd9e,	// (0x0003fe47) listscroll_popup_gms_pane

0xcda6,	// (0x0003fe4f) grid_large_graphic_popup_pane

0xcdb0,	// (0x0003fe59) listscroll_popup_gms_pane_g1

0xcdb8,	// (0x0003fe61) listscroll_popup_gms_pane_g2

0x0001,

0xf396,	// (0x0004243f) listscroll_popup_gms_pane_g

0xc8ea,	// (0x0003f993) scroll_pane_cp014

0x65e0,	// (0x00039689) cell_large_graphic_popup_pane_ParamLimits

0x65e0,	// (0x00039689) cell_large_graphic_popup_pane

0x65fa,	// (0x000396a3) cell_large_graphic_popup_pane_g1_ParamLimits

0x65fa,	// (0x000396a3) cell_large_graphic_popup_pane_g1

0xcdc0,	// (0x0003fe69) cell_large_graphic_popup_pane_g2_ParamLimits

0xcdc0,	// (0x0003fe69) cell_large_graphic_popup_pane_g2

0xcdcc,	// (0x0003fe75) cell_large_graphic_popup_pane_g3_ParamLimits

0xcdcc,	// (0x0003fe75) cell_large_graphic_popup_pane_g3

0xcdd9,	// (0x0003fe82) cell_large_graphic_popup_pane_g4_ParamLimits

0xcdd9,	// (0x0003fe82) cell_large_graphic_popup_pane_g4

0x0003,

0xf39b,	// (0x00042444) cell_large_graphic_popup_pane_g_ParamLimits

0xf39b,	// (0x00042444) cell_large_graphic_popup_pane_g

0xcde9,	// (0x0003fe92) grid_highlight_pane_cp010

0xc5e5,	// (0x0003f68e) bg_popup_call_pane_g1

0xcdf3,	// (0x0003fe9c) list_single_graphic_popup_conf_pane_ParamLimits

0xcdf3,	// (0x0003fe9c) list_single_graphic_popup_conf_pane

0xce05,	// (0x0003feae) list_highlight_pane_cp01

0xce0e,	// (0x0003feb7) list_single_graphic_popup_conf_pane_g1

0xce16,	// (0x0003febf) list_single_graphic_popup_conf_pane_g2

0x0001,

0xf3a4,	// (0x0004244d) list_single_graphic_popup_conf_pane_g

0xce1e,	// (0x0003fec7) list_single_graphic_popup_conf_pane_t1

0xce2c,	// (0x0003fed5) linegrid_cams_pane_g1

0x6606,	// (0x000396af) linegrid_cams_pane_g2

0xc723,	// (0x0003f7cc) linegrid_cams_pane_g3

0xce35,	// (0x0003fede) linegrid_cams_pane_g4

0x660f,	// (0x000396b8) linegrid_cams_pane_g5

0x6618,	// (0x000396c1) linegrid_cams_pane_g6

0xc72c,	// (0x0003f7d5) linegrid_cams_pane_g7

0x0006,

0xf3a9,	// (0x00042452) linegrid_cams_pane_g

0xce3e,	// (0x0003fee7) popup_clock_analogue_window

0xce3e,	// (0x0003fee7) popup_clock_digital_window

0xc26a,	// (0x0003f313) popup_phob_thumbnail_window

0xc5e5,	// (0x0003f68e) call_video_uplink_pane_g1

0xce47,	// (0x0003fef0) call_video_uplink_pane_g2

0x0001,

0xf3b8,	// (0x00042461) call_video_uplink_pane_g

0xce4f,	// (0x0003fef8) video_uplink_pane

0xce57,	// (0x0003ff00) mce_image_pane_g1

0x6623,	// (0x000396cc) mce_image_pane_g2

0x662d,	// (0x000396d6) mce_image_pane_g3

0x6637,	// (0x000396e0) mce_image_pane_g4

0x663f,	// (0x000396e8) mce_image_pane_g5

0x0004,

0xf3bd,	// (0x00042466) mce_image_pane_g

0xce61,	// (0x0003ff0a) control_top_pane_stacon_cp01_ParamLimits

0xce61,	// (0x0003ff0a) control_top_pane_stacon_cp01

0xce75,	// (0x0003ff1e) uni_indicator_pane_stacon_cp01_ParamLimits

0xce75,	// (0x0003ff1e) uni_indicator_pane_stacon_cp01

0xce86,	// (0x0003ff2f) bg_popup_sub_pane_cp03

0x6647,	// (0x000396f0) chi_dic_find_pane

0x664f,	// (0x000396f8) listscroll_chi_dic_pane

0x6658,	// (0x00039701) main_pane_chidic_g1

0x666b,	// (0x00039714) chi_dic_find_pane_t1

0xce90,	// (0x0003ff39) find_chidic_pane

0xce99,	// (0x0003ff42) chi_dic_list_pane_ParamLimits

0xce99,	// (0x0003ff42) chi_dic_list_pane

0xceaa,	// (0x0003ff53) scroll_pane_cp020

0x6679,	// (0x00039722) find_chidic_pane_t1

0xc26a,	// (0x0003f313) input_focus_pane_cp06

0x6688,	// (0x00039731) list_chi_dic_pane_ParamLimits

0x6688,	// (0x00039731) list_chi_dic_pane

0x66a0,	// (0x00039749) list_chi_dic_pane_t1_ParamLimits

0x66a0,	// (0x00039749) list_chi_dic_pane_t1

0xc26a,	// (0x0003f313) list_highlight_pane_cp020

0xceb2,	// (0x0003ff5b) bg_cale_heading_pane_g1

0x66b3,	// (0x0003975c) bg_cale_heading_pane_g2

0x66bb,	// (0x00039764) bg_cale_heading_pane_g3

0x66c3,	// (0x0003976c) bg_cale_heading_pane_g4

0x66cd,	// (0x00039776) bg_cale_heading_pane_g5

0x66d7,	// (0x00039780) bg_cale_heading_pane_g6

0x66df,	// (0x00039788) bg_cale_heading_pane_g7

0x66e7,	// (0x00039790) bg_cale_heading_pane_g8

0x66f1,	// (0x0003979a) bg_cale_heading_pane_g9

0x0008,

0xf3c8,	// (0x00042471) bg_cale_heading_pane_g

0xceb2,	// (0x0003ff5b) bg_cale_side_pane_g1

0x66fb,	// (0x000397a4) bg_cale_side_pane_g2

0x6703,	// (0x000397ac) bg_cale_side_pane_g3

0x670b,	// (0x000397b4) bg_cale_side_pane_g4

0x6713,	// (0x000397bc) bg_cale_side_pane_g5

0x671b,	// (0x000397c4) bg_cale_side_pane_g6

0x6723,	// (0x000397cc) bg_cale_side_pane_g7

0x672b,	// (0x000397d4) bg_cale_side_pane_g8

0x6733,	// (0x000397dc) bg_cale_side_pane_g9

0x0008,

0xf3db,	// (0x00042484) bg_cale_side_pane_g

0x673b,	// (0x000397e4) popup_call_status_window_ParamLimits

0x673b,	// (0x000397e4) popup_call_status_window

0xceba,	// (0x0003ff63) stacon_top_pane

0xcec2,	// (0x0003ff6b) status_pane_ParamLimits

0xcec2,	// (0x0003ff6b) status_pane

0xced7,	// (0x0003ff80) status_small_pane

0xcedf,	// (0x0003ff88) control_pane

0xc26a,	// (0x0003f313) stacon_bottom_pane

0xcee7,	// (0x0003ff90) list_single_mce_smart_pane_t1_ParamLimits

0xcee7,	// (0x0003ff90) list_single_mce_smart_pane_t1

0xcefa,	// (0x0003ffa3) list_single_mce_smart_pane_t2_ParamLimits

0xcefa,	// (0x0003ffa3) list_single_mce_smart_pane_t2

0x0001,

0xf3ee,	// (0x00042497) list_single_mce_smart_pane_t_ParamLimits

0xf3ee,	// (0x00042497) list_single_mce_smart_pane_t

0x6747,	// (0x000397f0) compass_pane

0x6752,	// (0x000397fb) main_location2_pane_t1

0x6766,	// (0x0003980f) main_location2_pane_t2

0x6766,	// (0x0003980f) main_location2_pane_t3

0x0003,

0xf3f3,	// (0x0004249c) main_location2_pane_t

0xcf19,	// (0x0003ffc2) compass_pane_g1_ParamLimits

0xcf19,	// (0x0003ffc2) compass_pane_g1

0x67b0,	// (0x00039859) compass_pane_t1

0x67bf,	// (0x00039868) compass_pane_t2

0x0005,

0xf3fc,	// (0x000424a5) compass_pane_t

0x680a,	// (0x000398b3) text_secondary_cp61

0xcf2d,	// (0x0003ffd6) navi_pane_cams_g5

0xcf50,	// (0x0003fff9) navi_pane_im_t1

0xcf5e,	// (0x00040007) navi_pane_mp_g1_ParamLimits

0xcf5e,	// (0x00040007) navi_pane_mp_g1

0xcf72,	// (0x0004001b) navi_pane_mp_g2_ParamLimits

0xcf72,	// (0x0004001b) navi_pane_mp_g2

0xcf7e,	// (0x00040027) navi_pane_mp_g3_ParamLimits

0xcf7e,	// (0x00040027) navi_pane_mp_g3

0x0002,

0xf410,	// (0x000424b9) navi_pane_mp_g_ParamLimits

0xf410,	// (0x000424b9) navi_pane_mp_g

0xcf8a,	// (0x00040033) navi_pane_mp_t1

0xcf98,	// (0x00040041) navi_pane_mp_t2

0x0002,

0xf417,	// (0x000424c0) navi_pane_mp_t

0xcfd4,	// (0x0004007d) navi_pane_vt_g1

0xcf8a,	// (0x00040033) navi_pane_vt_t1

0xcfdc,	// (0x00040085) navi_slider_pane

0xcfe4,	// (0x0004008d) zooming_pane

0xcfec,	// (0x00040095) navi_slider_pane_g1

0x6921,	// (0x000399ca) navi_slider_pane_g2

0x0006,

0xf41e,	// (0x000424c7) navi_slider_pane_g

0xd010,	// (0x000400b9) aid_levels_zoom

0xd018,	// (0x000400c1) zooming_pane_g1

0xd020,	// (0x000400c9) zooming_pane_g2

0xd020,	// (0x000400c9) zooming_pane_g3

0x0002,

0xf42d,	// (0x000424d6) zooming_pane_g

0xd028,	// (0x000400d1) level_10_zoom

0xd031,	// (0x000400da) level_11_zoom

0xd03a,	// (0x000400e3) level_1_zoom

0xd043,	// (0x000400ec) level_2_zoom

0xd04c,	// (0x000400f5) level_3_zoom

0xd055,	// (0x000400fe) level_4_zoom

0xd05e,	// (0x00040107) level_5_zoom

0xd067,	// (0x00040110) level_6_zoom

0xd070,	// (0x00040119) level_7_zoom

0xd079,	// (0x00040122) level_8_zoom

0xd082,	// (0x0004012b) level_9_zoom

0xd093,	// (0x0004013c) popup_phob_thumbnail_window_g1

0xd09b,	// (0x00040144) popup_phob_thumbnail_window_g2

0x0001,

0xf434,	// (0x000424dd) popup_phob_thumbnail_window_g

0xe3ba,	// (0x00041463) level_1_location

0xe3c2,	// (0x0004146b) level_2_location

0xe3ca,	// (0x00041473) level_3_location

0xe3d2,	// (0x0004147b) level_4_location

0xcfe4,	// (0x0004008d) level_5_location

0x6933,	// (0x000399dc) mce_icon_pane_g1

0x693b,	// (0x000399e4) mce_icon_pane_g2

0x0001,

0xf439,	// (0x000424e2) mce_icon_pane_g

0x6943,	// (0x000399ec) main_mup_pane_g1_ParamLimits

0x6943,	// (0x000399ec) main_mup_pane_g1

0x695b,	// (0x00039a04) main_mup_pane_g2_ParamLimits

0x695b,	// (0x00039a04) main_mup_pane_g2

0x6977,	// (0x00039a20) main_mup_pane_g3_ParamLimits

0x6977,	// (0x00039a20) main_mup_pane_g3

0x6993,	// (0x00039a3c) main_mup_pane_g4_ParamLimits

0x6993,	// (0x00039a3c) main_mup_pane_g4

0x69a7,	// (0x00039a50) main_mup_pane_g5_ParamLimits

0x69a7,	// (0x00039a50) main_mup_pane_g5

0x69c8,	// (0x00039a71) main_mup_pane_g6_ParamLimits

0x69c8,	// (0x00039a71) main_mup_pane_g6

0x69e8,	// (0x00039a91) main_mup_pane_g7_ParamLimits

0x69e8,	// (0x00039a91) main_mup_pane_g7

0x6a0c,	// (0x00039ab5) main_mup_pane_g8_ParamLimits

0x6a0c,	// (0x00039ab5) main_mup_pane_g8

0x6a30,	// (0x00039ad9) main_mup_pane_g9_ParamLimits

0x6a30,	// (0x00039ad9) main_mup_pane_g9

0x6a53,	// (0x00039afc) main_mup_pane_g10_ParamLimits

0x6a53,	// (0x00039afc) main_mup_pane_g10

0x6a76,	// (0x00039b1f) main_mup_pane_g11_ParamLimits

0x6a76,	// (0x00039b1f) main_mup_pane_g11

0x6a96,	// (0x00039b3f) main_mup_pane_g12_ParamLimits

0x6a96,	// (0x00039b3f) main_mup_pane_g12

0x6aa4,	// (0x00039b4d) main_mup_pane_g13_ParamLimits

0x6aa4,	// (0x00039b4d) main_mup_pane_g13

0x000c,

0xf43e,	// (0x000424e7) main_mup_pane_g_ParamLimits

0xf43e,	// (0x000424e7) main_mup_pane_g

0x6aba,	// (0x00039b63) main_mup_pane_t1_ParamLimits

0x6aba,	// (0x00039b63) main_mup_pane_t1

0x6ad9,	// (0x00039b82) main_mup_pane_t2_ParamLimits

0x6ad9,	// (0x00039b82) main_mup_pane_t2

0x6af3,	// (0x00039b9c) main_mup_pane_t3_ParamLimits

0x6af3,	// (0x00039b9c) main_mup_pane_t3

0x6b0d,	// (0x00039bb6) main_mup_pane_t4_ParamLimits

0x6b0d,	// (0x00039bb6) main_mup_pane_t4

0x6b1f,	// (0x00039bc8) main_mup_pane_t5_ParamLimits

0x6b1f,	// (0x00039bc8) main_mup_pane_t5

0x6b31,	// (0x00039bda) main_mup_pane_t6_ParamLimits

0x6b31,	// (0x00039bda) main_mup_pane_t6

0x0005,

0xf459,	// (0x00042502) main_mup_pane_t_ParamLimits

0xf459,	// (0x00042502) main_mup_pane_t

0x6b47,	// (0x00039bf0) mup_progress_pane_ParamLimits

0x6b47,	// (0x00039bf0) mup_progress_pane

0x6b53,	// (0x00039bfc) mup_visualizer_pane_ParamLimits

0x6b53,	// (0x00039bfc) mup_visualizer_pane

0x6b91,	// (0x00039c3a) mup_volume_pane_ParamLimits

0x6b91,	// (0x00039c3a) mup_volume_pane

0xcd1f,	// (0x0003fdc8) mup_visualizer_pane_g1_ParamLimits

0xcd1f,	// (0x0003fdc8) mup_visualizer_pane_g1

0xcd1f,	// (0x0003fdc8) mup_visualizer_pane_g2_ParamLimits

0xcd1f,	// (0x0003fdc8) mup_visualizer_pane_g2

0xcf19,	// (0x0003ffc2) mup_visualizer_pane_g3_ParamLimits

0xcf19,	// (0x0003ffc2) mup_visualizer_pane_g3

0x0002,

0xf466,	// (0x0004250f) mup_visualizer_pane_g_ParamLimits

0xf466,	// (0x0004250f) mup_visualizer_pane_g

0xc5e5,	// (0x0003f68e) mup_volume_pane_g1

0xd0ab,	// (0x00040154) mup_volume_pane_g2

0x0001,

0xf46d,	// (0x00042516) mup_volume_pane_g

0xc5e5,	// (0x0003f68e) mup_progress_pane_g1

0xd0b4,	// (0x0004015d) mup_progress_pane_g2

0xd0bd,	// (0x00040166) mup_progress_pane_g3

0x0002,

0xf472,	// (0x0004251b) mup_progress_pane_g

0xc26a,	// (0x0003f313) bg_popup_window_pane_cp05

0xd0c6,	// (0x0004016f) heading_pane_cp02_ParamLimits

0xd0c6,	// (0x0004016f) heading_pane_cp02

0xd0e2,	// (0x0004018b) list_popup_blid_pane

0xd0ea,	// (0x00040193) list_blid_sat_info_pane_ParamLimits

0xd0ea,	// (0x00040193) list_blid_sat_info_pane

0xd0fd,	// (0x000401a6) list_blid_sat_info_pane_g1

0xd105,	// (0x000401ae) list_blid_sat_info_pane_t1

0x6cb0,	// (0x00039d59) mup_equalizer_pane_ParamLimits

0x6cb0,	// (0x00039d59) mup_equalizer_pane

0x6cd1,	// (0x00039d7a) mup_equalizer_pane_cp1_ParamLimits

0x6cd1,	// (0x00039d7a) mup_equalizer_pane_cp1

0x6cf2,	// (0x00039d9b) mup_equalizer_pane_cp2_ParamLimits

0x6cf2,	// (0x00039d9b) mup_equalizer_pane_cp2

0x6d13,	// (0x00039dbc) mup_equalizer_pane_cp3_ParamLimits

0x6d13,	// (0x00039dbc) mup_equalizer_pane_cp3

0x6d38,	// (0x00039de1) mup_equalizer_pane_cp4_ParamLimits

0x6d38,	// (0x00039de1) mup_equalizer_pane_cp4

0x6d5d,	// (0x00039e06) mup_equalizer_pane_cp5

0x6d75,	// (0x00039e1e) mup_equalizer_pane_cp6

0x6d8d,	// (0x00039e36) mup_equalizer_pane_cp7

0xe2d4,	// (0x0004137d) bg_popup_call_poc_act_pane_g9

0xe2dc,	// (0x00041385) bg_popup_call_poc_act_pane_g10

0xe2e4,	// (0x0004138d) bg_popup_call_poc_act_pane_g11

0x000a,

0xc4c5,	// (0x0003f56e) mup_scale_pane

0xc5e5,	// (0x0003f68e) mup_scale_pane_g1

0xd113,	// (0x000401bc) mup_scale_pane_g2

0x0006,

0xf48e,	// (0x00042537) mup_scale_pane_g

0xd137,	// (0x000401e0) msg_data_pane

0xd13f,	// (0x000401e8) scroll_pane_cp017

0x34c9,	// (0x00036572) bg_list_pane_cp04_ParamLimits

0x34c9,	// (0x00036572) bg_list_pane_cp04

0xd147,	// (0x000401f0) msg_data_pane_g1

0x6db7,	// (0x00039e60) msg_data_pane_g2

0x6dc1,	// (0x00039e6a) msg_data_pane_g3

0x6dcb,	// (0x00039e74) msg_data_pane_g4

0x6dd3,	// (0x00039e7c) msg_data_pane_g5

0x6ddb,	// (0x00039e84) msg_data_pane_g6

0x6de3,	// (0x00039e8c) msg_data_pane_g7

0x0006,

0xf49d,	// (0x00042546) msg_data_pane_g

0x34ef,	// (0x00036598) msg_text_pane_ParamLimits

0x34ef,	// (0x00036598) msg_text_pane

0x6deb,	// (0x00039e94) qrid_highlight_pane_cp011_ParamLimits

0x6deb,	// (0x00039e94) qrid_highlight_pane_cp011

0xc26a,	// (0x0003f313) msg_body_pane

0xc26a,	// (0x0003f313) msg_header_pane

0xd158,	// (0x00040201) input_focus_pane_cp07

0x352e,	// (0x000365d7) msg_header_pane_t1_ParamLimits

0x352e,	// (0x000365d7) msg_header_pane_t1

0x3542,	// (0x000365eb) msg_header_pane_t2_ParamLimits

0x3542,	// (0x000365eb) msg_header_pane_t2

0x0001,

0xf4b1,	// (0x0004255a) msg_header_pane_t_ParamLimits

0xf4b1,	// (0x0004255a) msg_header_pane_t

0xd16d,	// (0x00040216) msg_body_pane_g1

0x3554,	// (0x000365fd) msg_body_pane_t1_ParamLimits

0x3554,	// (0x000365fd) msg_body_pane_t1

0x3585,	// (0x0003662e) msg_body_pane_t2_ParamLimits

0x3585,	// (0x0003662e) msg_body_pane_t2

0x3597,	// (0x00036640) msg_body_pane_t3_ParamLimits

0x3597,	// (0x00036640) msg_body_pane_t3

0x0002,

0xf4b6,	// (0x0004255f) msg_body_pane_t_ParamLimits

0xf4b6,	// (0x0004255f) msg_body_pane_t

0x6e53,	// (0x00039efc) main_viewer_pane_g1_ParamLimits

0x6e53,	// (0x00039efc) main_viewer_pane_g1

0x6e5f,	// (0x00039f08) main_viewer_pane_g2_ParamLimits

0x6e5f,	// (0x00039f08) main_viewer_pane_g2

0x6e6b,	// (0x00039f14) main_viewer_pane_g3_ParamLimits

0x6e6b,	// (0x00039f14) main_viewer_pane_g3

0x6e7c,	// (0x00039f25) main_viewer_pane_g4_ParamLimits

0x6e7c,	// (0x00039f25) main_viewer_pane_g4

0x6e8d,	// (0x00039f36) main_viewer_pane_g5_ParamLimits

0x6e8d,	// (0x00039f36) main_viewer_pane_g5

0x6e8d,	// (0x00039f36) main_viewer_pane_g7_ParamLimits

0x6e8d,	// (0x00039f36) main_viewer_pane_g7

0x6e9f,	// (0x00039f48) main_viewer_pane_g8_ParamLimits

0x6e9f,	// (0x00039f48) main_viewer_pane_g8

0x0007,

0xf4c6,	// (0x0004256f) main_viewer_pane_g_ParamLimits

0xf4c6,	// (0x0004256f) main_viewer_pane_g

0xd175,	// (0x0004021e) viewer_content_pane_ParamLimits

0xd175,	// (0x0004021e) viewer_content_pane

0x6ed7,	// (0x00039f80) main_postcard_pane_g1_ParamLimits

0x6ed7,	// (0x00039f80) main_postcard_pane_g1

0x6ee5,	// (0x00039f8e) main_postcard_pane_g2_ParamLimits

0x6ee5,	// (0x00039f8e) main_postcard_pane_g2

0x6ef3,	// (0x00039f9c) main_postcard_pane_g3_ParamLimits

0x6ef3,	// (0x00039f9c) main_postcard_pane_g3

0x0005,

0xf4d7,	// (0x00042580) main_postcard_pane_g_ParamLimits

0xf4d7,	// (0x00042580) main_postcard_pane_g

0x6f03,	// (0x00039fac) main_postcard_pane_g4

0xe504,	// (0x000415ad) smil_status_volume_pane_g2

0x6f2f,	// (0x00039fd8) postcard_pane_ParamLimits

0x6f2f,	// (0x00039fd8) postcard_pane

0xcd1f,	// (0x0003fdc8) postcard_pane_g1_ParamLimits

0xcd1f,	// (0x0003fdc8) postcard_pane_g1

0x6f69,	// (0x0003a012) postcard_pane_g2_ParamLimits

0x6f69,	// (0x0003a012) postcard_pane_g2

0x6f75,	// (0x0003a01e) postcard_pane_g3_ParamLimits

0x6f75,	// (0x0003a01e) postcard_pane_g3

0xd183,	// (0x0004022c) postcard_pane_g4_ParamLimits

0xd183,	// (0x0004022c) postcard_pane_g4

0x6f81,	// (0x0003a02a) postcard_pane_g5_ParamLimits

0x6f81,	// (0x0003a02a) postcard_pane_g5

0x6f8d,	// (0x0003a036) postcard_pane_g6_ParamLimits

0x6f8d,	// (0x0003a036) postcard_pane_g6

0xd191,	// (0x0004023a) postcard_pane_g7_ParamLimits

0xd191,	// (0x0004023a) postcard_pane_g7

0x0006,

0xf4e4,	// (0x0004258d) postcard_pane_g_ParamLimits

0xf4e4,	// (0x0004258d) postcard_pane_g

0x6f9b,	// (0x0003a044) main_mp2_pane_g1_ParamLimits

0x6f9b,	// (0x0003a044) main_mp2_pane_g1

0x6fa9,	// (0x0003a052) main_mp2_pane_g2_ParamLimits

0x6fa9,	// (0x0003a052) main_mp2_pane_g2

0x6fb5,	// (0x0003a05e) main_mp2_pane_g3_ParamLimits

0x6fb5,	// (0x0003a05e) main_mp2_pane_g3

0x0002,

0xf4f3,	// (0x0004259c) main_mp2_pane_g_ParamLimits

0xf4f3,	// (0x0004259c) main_mp2_pane_g

0x6fc1,	// (0x0003a06a) main_mp2_pane_t1_ParamLimits

0x6fc1,	// (0x0003a06a) main_mp2_pane_t1

0x6fd8,	// (0x0003a081) main_mp2_pane_t2_ParamLimits

0x6fd8,	// (0x0003a081) main_mp2_pane_t2

0x6fec,	// (0x0003a095) main_mp2_pane_t3_ParamLimits

0x6fec,	// (0x0003a095) main_mp2_pane_t3

0x0002,

0xf4fa,	// (0x000425a3) main_mp2_pane_t_ParamLimits

0xf4fa,	// (0x000425a3) main_mp2_pane_t

0xd19f,	// (0x00040248) pec_content_pane_ParamLimits

0xd19f,	// (0x00040248) pec_content_pane

0xc8ea,	// (0x0003f993) scroll_pane_cp015

0xd1b1,	// (0x0004025a) pec_attribute_pane_ParamLimits

0xd1b1,	// (0x0004025a) pec_attribute_pane

0x6ffe,	// (0x0003a0a7) pec_content_pane_g1_ParamLimits

0x6ffe,	// (0x0003a0a7) pec_content_pane_g1

0xd1c1,	// (0x0004026a) pec_content_pane_t1_ParamLimits

0xd1c1,	// (0x0004026a) pec_content_pane_t1

0xd1d3,	// (0x0004027c) pec_content_pane_t2_ParamLimits

0xd1d3,	// (0x0004027c) pec_content_pane_t2

0x0001,

0xf501,	// (0x000425aa) pec_content_pane_t_ParamLimits

0xf501,	// (0x000425aa) pec_content_pane_t

0x700a,	// (0x0003a0b3) list_single_graphic_pane_cp01_ParamLimits

0x700a,	// (0x0003a0b3) list_single_graphic_pane_cp01

0xc4c5,	// (0x0003f56e) bg_popup_sub_pane_cp04

0xd1e5,	// (0x0004028e) popup_mup_playback_window_g1

0xd1f1,	// (0x0004029a) popup_mup_playback_window_t1

0xd206,	// (0x000402af) popup_mup_playback_window_t2

0x0001,

0xf506,	// (0x000425af) popup_mup_playback_window_t

0xd23d,	// (0x000402e6) main_image_pane_g1_ParamLimits

0xd23d,	// (0x000402e6) main_image_pane_g1

0xd280,	// (0x00040329) scroll_pane_cp018_ParamLimits

0xd280,	// (0x00040329) scroll_pane_cp018

0xd298,	// (0x00040341) scroll_pane_cp016_ParamLimits

0xd298,	// (0x00040341) scroll_pane_cp016

0x709b,	// (0x0003a144) smil2_image_pane_ParamLimits

0x709b,	// (0x0003a144) smil2_image_pane

0x70d1,	// (0x0003a17a) smil2_root_pane_ParamLimits

0x70d1,	// (0x0003a17a) smil2_root_pane

0x70fd,	// (0x0003a1a6) smil2_text_pane_ParamLimits

0x70fd,	// (0x0003a1a6) smil2_text_pane

0xc26a,	// (0x0003f313) bg_list_pane_cp06

0xd2d4,	// (0x0004037d) grid_radio_pane

0xc26a,	// (0x0003f313) bg_popup_window_pane_cp06

0xd2de,	// (0x00040387) main_fmradio_pane_t1

0xcd96,	// (0x0003fe3f) heading_pane_cp04

0xd2ec,	// (0x00040395) main_fmradio_pane_t2

0xe2ec,	// (0x00041395) popup_cale_lunar_info_window_g1

0xd2fa,	// (0x000403a3) main_fmradio_pane_t3

0xe2f4,	// (0x0004139d) popup_cale_lunar_info_window_g2

0xd30a,	// (0x000403b3) main_fmradio_pane_t4

0x0001,

0xd318,	// (0x000403c1) main_fmradio_pane_t5

0x0004,

0xf5e1,	// (0x0004268a) popup_cale_lunar_info_window_g

0xf51b,	// (0x000425c4) main_fmradio_pane_t

0xd326,	// (0x000403cf) wait_bar_pane_cp03

0xd32e,	// (0x000403d7) cell_fmradio_pane_ParamLimits

0xd32e,	// (0x000403d7) cell_fmradio_pane

0xd191,	// (0x0004023a) cell_fmradio_pane_g1_ParamLimits

0xd191,	// (0x0004023a) cell_fmradio_pane_g1

0xc26a,	// (0x0003f313) grid_highlight_pane_cp011

0xd343,	// (0x000403ec) poc_content_pane_ParamLimits

0xd343,	// (0x000403ec) poc_content_pane

0xd355,	// (0x000403fe) scroll_pane_cp019

0x713d,	// (0x0003a1e6) popup_call_poc_act_window_ParamLimits

0x713d,	// (0x0003a1e6) popup_call_poc_act_window

0x714a,	// (0x0003a1f3) popup_call_poc_inact_window_ParamLimits

0x714a,	// (0x0003a1f3) popup_call_poc_inact_window

0xf5b8,	// (0x00042661) bg_popup_call_poc_act_pane_g

0xe264,	// (0x0004130d) bg_popup_call_poc_inact_pane_g1

0xe26c,	// (0x00041315) bg_popup_call_poc_inact_pane_g2

0xd35d,	// (0x00040406) popup_call_poc_act_window_g2

0xe274,	// (0x0004131d) bg_popup_call_poc_inact_pane_g3

0xe27c,	// (0x00041325) bg_popup_call_poc_inact_pane_g4

0xe284,	// (0x0004132d) bg_popup_call_poc_inact_pane_g5

0xd365,	// (0x0004040e) popup_call_poc_act_window_t1_ParamLimits

0xd365,	// (0x0004040e) popup_call_poc_act_window_t1

0xd38d,	// (0x00040436) popup_call_poc_act_window_t2_ParamLimits

0xd38d,	// (0x00040436) popup_call_poc_act_window_t2

0xd3b5,	// (0x0004045e) popup_call_poc_act_window_t3_ParamLimits

0xd3b5,	// (0x0004045e) popup_call_poc_act_window_t3

0xd3dd,	// (0x00040486) popup_call_poc_act_window_t4_ParamLimits

0xd3dd,	// (0x00040486) popup_call_poc_act_window_t4

0x0003,

0xf526,	// (0x000425cf) popup_call_poc_act_window_t_ParamLimits

0xf526,	// (0x000425cf) popup_call_poc_act_window_t

0xe28c,	// (0x00041335) bg_popup_call_poc_inact_pane_g6

0xe294,	// (0x0004133d) bg_popup_call_poc_inact_pane_g7

0xe29c,	// (0x00041345) bg_popup_call_poc_inact_pane_g8

0xd3ef,	// (0x00040498) popup_call_poc_inact_window_g2

0xe2a4,	// (0x0004134d) bg_popup_call_poc_inact_pane_g9

0x0008,

0xf5a5,	// (0x0004264e) bg_popup_call_poc_inact_pane_g

0xd3f7,	// (0x000404a0) popup_call_poc_inact_window_t1_ParamLimits

0xd3f7,	// (0x000404a0) popup_call_poc_inact_window_t1

0xd40c,	// (0x000404b5) popup_call_poc_inact_window_t2_ParamLimits

0xd40c,	// (0x000404b5) popup_call_poc_inact_window_t2

0xd421,	// (0x000404ca) popup_call_poc_inact_window_t3_ParamLimits

0xd421,	// (0x000404ca) popup_call_poc_inact_window_t3

0x0002,

0xf52f,	// (0x000425d8) popup_call_poc_inact_window_t_ParamLimits

0xf52f,	// (0x000425d8) popup_call_poc_inact_window_t

0xe464,	// (0x0004150d) context_pane_ParamLimits

0x776a,	// (0x0003a813) signal_pane_ParamLimits

0xcfe4,	// (0x0004008d) main_call2_pane

0xe452,	// (0x000414fb) popup_phob_thumbnail2_window_ParamLimits

0xe452,	// (0x000414fb) popup_phob_thumbnail2_window

0x6e01,	// (0x00039eaa) aid_hotspot_pointer_arrow_pane

0x6e09,	// (0x00039eb2) aid_hotspot_pointer_hand_pane

0x7472,	// (0x0003a51b) phob_pre_status_pane_g5

0x5342,	// (0x000383eb) cams_zoom_pane_ParamLimits

0x534e,	// (0x000383f7) image_vga_pane_ParamLimits

0x535d,	// (0x00038406) main_camera_pane_g1_ParamLimits

0x536b,	// (0x00038414) main_camera_pane_g2_ParamLimits

0x5377,	// (0x00038420) main_camera_pane_g3_ParamLimits

0x5385,	// (0x0003842e) main_camera_pane_g4_ParamLimits

0x5393,	// (0x0003843c) main_camera_pane_g5_ParamLimits

0x53a1,	// (0x0003844a) main_camera_pane_g6_ParamLimits

0x53af,	// (0x00038458) main_camera_pane_g7_ParamLimits

0xf22e,	// (0x000422d7) main_camera_pane_g_ParamLimits

0x53bd,	// (0x00038466) main_camera_pane_t1_ParamLimits

0x53cf,	// (0x00038478) main_camera_pane_t2_ParamLimits

0xf23f,	// (0x000422e8) main_camera_pane_t_ParamLimits

0xc4c5,	// (0x0003f56e) bg_popup_preview_window_pane_cp01_ParamLimits

0xc4c5,	// (0x0003f56e) bg_popup_preview_window_pane_cp01

0xd436,	// (0x000404df) popup_phob_thumbnail2_window_g1_ParamLimits

0xd436,	// (0x000404df) popup_phob_thumbnail2_window_g1

0xc26a,	// (0x0003f313) call2_cli_visual_pane

0x7166,	// (0x0003a20f) popup_call2_audio_conf_window_ParamLimits

0x7166,	// (0x0003a20f) popup_call2_audio_conf_window

0x717f,	// (0x0003a228) popup_call2_audio_first_window_ParamLimits

0x717f,	// (0x0003a228) popup_call2_audio_first_window

0x721d,	// (0x0003a2c6) popup_call2_audio_in_window_ParamLimits

0x721d,	// (0x0003a2c6) popup_call2_audio_in_window

0x7261,	// (0x0003a30a) popup_call2_audio_out_window_ParamLimits

0x7261,	// (0x0003a30a) popup_call2_audio_out_window

0x72cb,	// (0x0003a374) popup_call2_audio_second_window_ParamLimits

0x72cb,	// (0x0003a374) popup_call2_audio_second_window

0x7329,	// (0x0003a3d2) popup_call2_audio_wait_window_ParamLimits

0x7329,	// (0x0003a3d2) popup_call2_audio_wait_window

0xc26a,	// (0x0003f313) bg_popup_call2_act_pane_cp03

0xc4a7,	// (0x0003f550) list_conf_pane_cp

0xd442,	// (0x000404eb) popup_call2_audio_conf_window_t1

0xd450,	// (0x000404f9) list_single_graphic_popup_conf2_pane_ParamLimits

0xd450,	// (0x000404f9) list_single_graphic_popup_conf2_pane

0xce05,	// (0x0003feae) list_highlight_pane_cp04

0xd463,	// (0x0004050c) list_single_graphic_popup_conf2_pane_g1

0xce16,	// (0x0003febf) list_single_graphic_popup_conf2_pane_g2

0x0001,

0xf536,	// (0x000425df) list_single_graphic_popup_conf2_pane_g

0xd46d,	// (0x00040516) list_single_graphic_popup_conf2_pane_t1

0xd47b,	// (0x00040524) bg_popup_call2_act_pane_cp01_ParamLimits

0xd47b,	// (0x00040524) bg_popup_call2_act_pane_cp01

0xd505,	// (0x000405ae) call_type_pane_cp05_ParamLimits

0xd505,	// (0x000405ae) call_type_pane_cp05

0xd559,	// (0x00040602) popup_call2_audio_second_window_g1_ParamLimits

0xd559,	// (0x00040602) popup_call2_audio_second_window_g1

0xd5ad,	// (0x00040656) popup_call2_audio_second_window_g2_ParamLimits

0xd5ad,	// (0x00040656) popup_call2_audio_second_window_g2

0x0002,

0xf53b,	// (0x000425e4) popup_call2_audio_second_window_g_ParamLimits

0xf53b,	// (0x000425e4) popup_call2_audio_second_window_g

0xd612,	// (0x000406bb) popup_call2_audio_second_window_t1_ParamLimits

0xd612,	// (0x000406bb) popup_call2_audio_second_window_t1

0xd6cd,	// (0x00040776) popup_call2_audio_second_window_t2_ParamLimits

0xd6cd,	// (0x00040776) popup_call2_audio_second_window_t2

0xd720,	// (0x000407c9) popup_call2_audio_second_window_t3_ParamLimits

0xd720,	// (0x000407c9) popup_call2_audio_second_window_t3

0x0003,

0xf542,	// (0x000425eb) popup_call2_audio_second_window_t_ParamLimits

0xf542,	// (0x000425eb) popup_call2_audio_second_window_t

0xc26a,	// (0x0003f313) bg_popup_call2_in_pane_cp02

0xc274,	// (0x0003f31d) call_type_pane_cp04

0xc27c,	// (0x0003f325) popup_call2_audio_wait_window_g1

0xc284,	// (0x0003f32d) popup_call2_audio_wait_window_g2

0x0001,

0xf11b,	// (0x000421c4) popup_call2_audio_wait_window_g

0xc28c,	// (0x0003f335) popup_call2_audio_wait_window_t3

0xd813,	// (0x000408bc) bg_popup_call2_act_pane_ParamLimits

0xd813,	// (0x000408bc) bg_popup_call2_act_pane

0xd8f7,	// (0x000409a0) call_type_pane_cp03_ParamLimits

0xd8f7,	// (0x000409a0) call_type_pane_cp03

0xd95b,	// (0x00040a04) popup_call2_audio_first_window_g1_ParamLimits

0xd95b,	// (0x00040a04) popup_call2_audio_first_window_g1

0xd9cb,	// (0x00040a74) popup_call2_audio_first_window_g2_ParamLimits

0xd9cb,	// (0x00040a74) popup_call2_audio_first_window_g2

0xcd1f,	// (0x0003fdc8) popup_call2_audio_first_window_g3_ParamLimits

0xcd1f,	// (0x0003fdc8) popup_call2_audio_first_window_g3

0x0004,

0xf54b,	// (0x000425f4) popup_call2_audio_first_window_g_ParamLimits

0xf54b,	// (0x000425f4) popup_call2_audio_first_window_g

0xdaa9,	// (0x00040b52) popup_call2_audio_first_window_t1_ParamLimits

0xdaa9,	// (0x00040b52) popup_call2_audio_first_window_t1

0xdbac,	// (0x00040c55) popup_call2_audio_first_window_t4_ParamLimits

0xdbac,	// (0x00040c55) popup_call2_audio_first_window_t4

0xdc8f,	// (0x00040d38) popup_call2_audio_first_window_t5_ParamLimits

0xdc8f,	// (0x00040d38) popup_call2_audio_first_window_t5

0x0003,

0xf556,	// (0x000425ff) popup_call2_audio_first_window_t_ParamLimits

0xf556,	// (0x000425ff) popup_call2_audio_first_window_t

0xc4bd,	// (0x0003f566) bg_popup_call2_act_pane_g1

0xe2fe,	// (0x000413a7) popup_cale_lunar_info_window_t1

0xe30c,	// (0x000413b5) popup_cale_lunar_info_window_t2

0xe31a,	// (0x000413c3) popup_cale_lunar_info_window_t3

0xc26a,	// (0x0003f313) bg_popup_call2_bubble_pane

0xdd90,	// (0x00040e39) bg_popup_call2_in_pane_cp01_ParamLimits

0xdd90,	// (0x00040e39) bg_popup_call2_in_pane_cp01

0xbf46,	// (0x0003efef) call_type_pane_cp02

0xddd8,	// (0x00040e81) popup_call2_audio_out_window_g1_ParamLimits

0xddd8,	// (0x00040e81) popup_call2_audio_out_window_g1

0xde04,	// (0x00040ead) popup_call2_audio_out_window_g2_ParamLimits

0xde04,	// (0x00040ead) popup_call2_audio_out_window_g2

0xde2c,	// (0x00040ed5) popup_call2_audio_out_window_g3_ParamLimits

0xde2c,	// (0x00040ed5) popup_call2_audio_out_window_g3

0x0003,

0xf55f,	// (0x00042608) popup_call2_audio_out_window_g_ParamLimits

0xf55f,	// (0x00042608) popup_call2_audio_out_window_g

0xde67,	// (0x00040f10) popup_call2_audio_out_window_t1_ParamLimits

0xde67,	// (0x00040f10) popup_call2_audio_out_window_t1

0xdec6,	// (0x00040f6f) popup_call2_audio_out_window_t2_ParamLimits

0xdec6,	// (0x00040f6f) popup_call2_audio_out_window_t2

0xdf1a,	// (0x00040fc3) popup_call2_audio_out_window_t3_ParamLimits

0xdf1a,	// (0x00040fc3) popup_call2_audio_out_window_t3

0xdf30,	// (0x00040fd9) popup_call2_audio_out_window_t4_ParamLimits

0xdf30,	// (0x00040fd9) popup_call2_audio_out_window_t4

0xdf46,	// (0x00040fef) popup_call2_audio_out_window_t5_ParamLimits

0xdf46,	// (0x00040fef) popup_call2_audio_out_window_t5

0x0005,

0xf568,	// (0x00042611) popup_call2_audio_out_window_t_ParamLimits

0xf568,	// (0x00042611) popup_call2_audio_out_window_t

0xdfaa,	// (0x00041053) bg_popup_call2_in_pane_ParamLimits

0xdfaa,	// (0x00041053) bg_popup_call2_in_pane

0xe006,	// (0x000410af) popup_call2_audio_in_window_g1_ParamLimits

0xe006,	// (0x000410af) popup_call2_audio_in_window_g1

0xe03e,	// (0x000410e7) popup_call2_audio_in_window_g2_ParamLimits

0xe03e,	// (0x000410e7) popup_call2_audio_in_window_g2

0xe076,	// (0x0004111f) popup_call2_audio_in_window_g3_ParamLimits

0xe076,	// (0x0004111f) popup_call2_audio_in_window_g3

0x0003,

0xf575,	// (0x0004261e) popup_call2_audio_in_window_g_ParamLimits

0xf575,	// (0x0004261e) popup_call2_audio_in_window_g

0xe0ce,	// (0x00041177) popup_call2_audio_in_window_t1_ParamLimits

0xe0ce,	// (0x00041177) popup_call2_audio_in_window_t1

0xe14e,	// (0x000411f7) popup_call2_audio_in_window_t2_ParamLimits

0xe14e,	// (0x000411f7) popup_call2_audio_in_window_t2

0xe1ce,	// (0x00041277) popup_call2_audio_in_window_t3_ParamLimits

0xe1ce,	// (0x00041277) popup_call2_audio_in_window_t3

0xe1e8,	// (0x00041291) popup_call2_audio_in_window_t4_ParamLimits

0xe1e8,	// (0x00041291) popup_call2_audio_in_window_t4

0xe1fa,	// (0x000412a3) popup_call2_audio_in_window_t5_ParamLimits

0xe1fa,	// (0x000412a3) popup_call2_audio_in_window_t5

0xe20f,	// (0x000412b8) popup_call2_audio_in_window_t6_ParamLimits

0xe20f,	// (0x000412b8) popup_call2_audio_in_window_t6

0x0005,

0xf57e,	// (0x00042627) popup_call2_audio_in_window_t_ParamLimits

0xf57e,	// (0x00042627) popup_call2_audio_in_window_t

0xc4bd,	// (0x0003f566) bg_popup_call2_in_pane_g1

0xe328,	// (0x000413d1) popup_cale_lunar_info_window_t4

0x0003,

0xf5e6,	// (0x0004268f) popup_cale_lunar_info_window_t

0xc4c5,	// (0x0003f56e) bg_popup_call2_rect_pane_ParamLimits

0xc4c5,	// (0x0003f56e) bg_popup_call2_rect_pane

0xc26a,	// (0x0003f313) call2_cli_visual_graphic_pane

0xc26a,	// (0x0003f313) call2_cli_visual_text_pane

0x77ef,	// (0x0003a898) smil_status_volume_pane_g3

0x0002,

0xc5e5,	// (0x0003f68e) call2_cli_visual_graphic_pane_g1

0xc5e5,	// (0x0003f68e) call2_cli_visual_graphic_pane_g2

0xc5e5,	// (0x0003f68e) call2_cli_visual_graphic_pane_g3

0x0002,

0xf58b,	// (0x00042634) call2_cli_visual_graphic_pane_g

0xe224,	// (0x000412cd) bg_popup_call2_rect_pane_g1

0xc683,	// (0x0003f72c) bg_popup_call2_rect_pane_g2

0xe22c,	// (0x000412d5) bg_popup_call2_rect_pane_g3

0xe234,	// (0x000412dd) bg_popup_call2_rect_pane_g4

0xe23c,	// (0x000412e5) bg_popup_call2_rect_pane_g5

0xe244,	// (0x000412ed) bg_popup_call2_rect_pane_g6

0xe24c,	// (0x000412f5) bg_popup_call2_rect_pane_g7

0xe254,	// (0x000412fd) bg_popup_call2_rect_pane_g8

0xe25c,	// (0x00041305) bg_popup_call2_rect_pane_g9

0x0008,

0xf592,	// (0x0004263b) bg_popup_call2_rect_pane_g

0xe264,	// (0x0004130d) bg_popup_call2_bubble_pane_g1

0xe26c,	// (0x00041315) bg_popup_call2_bubble_pane_g2

0xe274,	// (0x0004131d) bg_popup_call2_bubble_pane_g3

0xe27c,	// (0x00041325) bg_popup_call2_bubble_pane_g4

0xe284,	// (0x0004132d) bg_popup_call2_bubble_pane_g5

0xe28c,	// (0x00041335) bg_popup_call2_bubble_pane_g6

0xe294,	// (0x0004133d) bg_popup_call2_bubble_pane_g7

0xe29c,	// (0x00041345) bg_popup_call2_bubble_pane_g8

0xe2a4,	// (0x0004134d) bg_popup_call2_bubble_pane_g9

0x0008,

0xf5a5,	// (0x0004264e) bg_popup_call2_bubble_pane_g

0x4dd9,	// (0x00037e82) aid_cale_week_size_cell_pane

0x53e3,	// (0x0003848c) aid_cams_cif_uncrop_pane_ParamLimits

0x53e3,	// (0x0003848c) aid_cams_cif_uncrop_pane

0x5540,	// (0x000385e9) aid_cams_size_cell_ParamLimits

0x5540,	// (0x000385e9) aid_cams_size_cell

0x554c,	// (0x000385f5) grid_cams_pane_ParamLimits

0x555a,	// (0x00038603) linegrid_cams_pane_ParamLimits

0x562d,	// (0x000386d6) call_video_pane_t1

0x564a,	// (0x000386f3) call_video_pane_t2

0x0001,

0xf292,	// (0x0004233b) call_video_pane_t

0x5b25,	// (0x00038bce) aid_cale_month_size_cell_pane_ParamLimits

0x5b25,	// (0x00038bce) aid_cale_month_size_cell_pane

0xf62f,	// (0x000426d8) smil_status_volume_pane_g

0x77fc,	// (0x0003a8a5) volume_smil_pane_ParamLimits

0x44af,	// (0x00037558) aid_popup2_width_pane

0x4cf5,	// (0x00037d9e) cell_qdial_pane_g4_ParamLimits

0x4cf5,	// (0x00037d9e) cell_qdial_pane_g4

0x678c,	// (0x00039835) aid_blid_cardinal_pane_ParamLimits

0x679c,	// (0x00039845) aid_blid_destination_pane_ParamLimits

0x679c,	// (0x00039845) aid_blid_destination_pane

0xc4c5,	// (0x0003f56e) bg_popup_call_poc_act_pane_ParamLimits

0xc4c5,	// (0x0003f56e) bg_popup_call_poc_act_pane

0xc4c5,	// (0x0003f56e) bg_popup_call_poc_inact_pane_ParamLimits

0xc4c5,	// (0x0003f56e) bg_popup_call_poc_inact_pane

0xe2ac,	// (0x00041355) bg_popup_call_poc_act_pane_g1

0xe2b4,	// (0x0004135d) bg_popup_call_poc_act_pane_g2

0xe2bc,	// (0x00041365) bg_popup_call_poc_act_pane_g3

0xe27c,	// (0x00041325) bg_popup_call_poc_act_pane_g4

0xe284,	// (0x0004132d) bg_popup_call_poc_act_pane_g5

0xe2c4,	// (0x0004136d) bg_popup_call_poc_act_pane_g6

0xe294,	// (0x0004133d) bg_popup_call_poc_act_pane_g7

0xe2cc,	// (0x00041375) bg_popup_call_poc_act_pane_g8

0xc26a,	// (0x0003f313) main_usb_pane

0xe429,	// (0x000414d2) popup_cale_lunar_info_window

0x5962,	// (0x00038a0b) im_reading_pane_t1_ParamLimits

0xc842,	// (0x0003f8eb) list_im_pane_ParamLimits

0xc853,	// (0x0003f8fc) scroll_pane_cp07_ParamLimits

0xc26a,	// (0x0003f313) grid_highlight_pane_cp012

0xc4c5,	// (0x0003f56e) mup_scale_pane_ParamLimits

0xcd1f,	// (0x0003fdc8) main_usb_pane_g1_ParamLimits

0xcd1f,	// (0x0003fdc8) main_usb_pane_g1

0x7395,	// (0x0003a43e) main_usb_pane_g2_ParamLimits

0x7395,	// (0x0003a43e) main_usb_pane_g2

0x0001,

0xf5cf,	// (0x00042678) main_usb_pane_g_ParamLimits

0xf5cf,	// (0x00042678) main_usb_pane_g

0x73a1,	// (0x0003a44a) main_usb_pane_t1_ParamLimits

0x73a1,	// (0x0003a44a) main_usb_pane_t1

0x73b3,	// (0x0003a45c) main_usb_pane_t2_ParamLimits

0x73b3,	// (0x0003a45c) main_usb_pane_t2

0x73c5,	// (0x0003a46e) main_usb_pane_t3_ParamLimits

0x73c5,	// (0x0003a46e) main_usb_pane_t3

0x73d7,	// (0x0003a480) main_usb_pane_t4_ParamLimits

0x73d7,	// (0x0003a480) main_usb_pane_t4

0x73e9,	// (0x0003a492) main_usb_pane_t5_ParamLimits

0x73e9,	// (0x0003a492) main_usb_pane_t5

0x73fb,	// (0x0003a4a4) main_usb_pane_t6_ParamLimits

0x73fb,	// (0x0003a4a4) main_usb_pane_t6

0x0005,

0xf5d4,	// (0x0004267d) main_usb_pane_t_ParamLimits

0x6747,	// (0x000397f0) aid_text_placing

0x6752,	// (0x000397fb) main_location2_pane_t1_ParamLimits

0x6766,	// (0x0003980f) main_location2_pane_t2_ParamLimits

0x6766,	// (0x0003980f) main_location2_pane_t3_ParamLimits

0x677a,	// (0x00039823) main_location2_pane_t4_ParamLimits

0x677a,	// (0x00039823) main_location2_pane_t4

0xf3f3,	// (0x0004249c) main_location2_pane_t_ParamLimits

0xc501,	// (0x0003f5aa) find_pinb_pane_g2_ParamLimits

0xc501,	// (0x0003f5aa) find_pinb_pane_g2

0x0001,

0xf141,	// (0x000421ea) find_pinb_pane_g_ParamLimits

0xf141,	// (0x000421ea) find_pinb_pane_g

0xc50d,	// (0x0003f5b6) find_pinb_pane_t1_ParamLimits

0xc51f,	// (0x0003f5c8) find_pinb_pane_t2_ParamLimits

0xf146,	// (0x000421ef) find_pinb_pane_t_ParamLimits

0xc26a,	// (0x0003f313) main_call3_pane

0x5e81,	// (0x00038f2a) cale_month_day_heading_pane_t1_ParamLimits

0x5edf,	// (0x00038f88) cale_month_day_heading_pane_t2_ParamLimits

0x5f44,	// (0x00038fed) cale_month_day_heading_pane_t3_ParamLimits

0x5fa9,	// (0x00039052) cale_month_day_heading_pane_t4_ParamLimits

0x600e,	// (0x000390b7) cale_month_day_heading_pane_t5_ParamLimits

0x607b,	// (0x00039124) cale_month_day_heading_pane_t6_ParamLimits

0x60f0,	// (0x00039199) cale_month_day_heading_pane_t7_ParamLimits

0xf2ca,	// (0x00042373) cale_month_day_heading_pane_t_ParamLimits

0xca93,	// (0x0003fb3c) smil_status_volume_pane

0x6f4d,	// (0x00039ff6) postcard_address_pane_ParamLimits

0x6f4d,	// (0x00039ff6) postcard_address_pane

0x6f5b,	// (0x0003a004) postcard_message_pane_ParamLimits

0x6f5b,	// (0x0003a004) postcard_message_pane

0x7368,	// (0x0003a411) call2_cli_visual_pane_t1_ParamLimits

0x7368,	// (0x0003a411) call2_cli_visual_pane_t1

0x7942,	// (0x0003a9eb) postcard_message_pane_t1_ParamLimits

0x7942,	// (0x0003a9eb) postcard_message_pane_t1

0xe517,	// (0x000415c0) postcard_address_pane_t1_ParamLimits

0xe517,	// (0x000415c0) postcard_address_pane_t1

0x7933,	// (0x0003a9dc) popup_call3_audio_in_window_ParamLimits

0x7933,	// (0x0003a9dc) popup_call3_audio_in_window

0x7811,	// (0x0003a8ba) bg_popup_call3_in_pane_ParamLimits

0x7811,	// (0x0003a8ba) bg_popup_call3_in_pane

0x7879,	// (0x0003a922) popup_call3_audio_in_window_g1_ParamLimits

0x7879,	// (0x0003a922) popup_call3_audio_in_window_g1

0x7891,	// (0x0003a93a) popup_call3_audio_in_window_g2_ParamLimits

0x7891,	// (0x0003a93a) popup_call3_audio_in_window_g2

0x78a9,	// (0x0003a952) popup_call3_audio_in_window_g3_ParamLimits

0x78a9,	// (0x0003a952) popup_call3_audio_in_window_g3

0x0003,

0xf636,	// (0x000426df) popup_call3_audio_in_window_g_ParamLimits

0xf636,	// (0x000426df) popup_call3_audio_in_window_g

0x78d1,	// (0x0003a97a) popup_call3_audio_in_window_t1_ParamLimits

0x78d1,	// (0x0003a97a) popup_call3_audio_in_window_t1

0x78f9,	// (0x0003a9a2) popup_call3_audio_in_window_t2_ParamLimits

0x78f9,	// (0x0003a9a2) popup_call3_audio_in_window_t2

0x7921,	// (0x0003a9ca) popup_call3_audio_in_window_t3_ParamLimits

0x7921,	// (0x0003a9ca) popup_call3_audio_in_window_t3

0x0002,

0xf63f,	// (0x000426e8) popup_call3_audio_in_window_t_ParamLimits

0xf63f,	// (0x000426e8) popup_call3_audio_in_window_t

0xcfe4,	// (0x0004008d) bg_popup_call3_rect_pane

0xe224,	// (0x000412cd) bg_popup_call3_rect_pane_g1

0xc683,	// (0x0003f72c) bg_popup_call3_rect_pane_g2

0xe22c,	// (0x000412d5) bg_popup_call3_rect_pane_g3

0xe234,	// (0x000412dd) bg_popup_call3_rect_pane_g4

0xe23c,	// (0x000412e5) bg_popup_call3_rect_pane_g5

0xe244,	// (0x000412ed) bg_popup_call3_rect_pane_g6

0xe24c,	// (0x000412f5) bg_popup_call3_rect_pane_g7

0x6bac,	// (0x00039c55) mup_visualizer_osc_pane

0xd0a3,	// (0x0004014c) mup_visualizer_spec_pane

0x7831,	// (0x0003a8da) call3_video_qcif_pane_ParamLimits

0x7831,	// (0x0003a8da) call3_video_qcif_pane

0x7843,	// (0x0003a8ec) call3_video_qcif_uncrop_pane_ParamLimits

0x7843,	// (0x0003a8ec) call3_video_qcif_uncrop_pane

0x7853,	// (0x0003a8fc) call3_video_subqcif_pane_ParamLimits

0x7853,	// (0x0003a8fc) call3_video_subqcif_pane

0x7867,	// (0x0003a910) call3_video_subqcif_uncrop_pane_ParamLimits

0x7867,	// (0x0003a910) call3_video_subqcif_uncrop_pane

0x78c1,	// (0x0003a96a) popup_call3_audio_in_window_g4_ParamLimits

0x78c1,	// (0x0003a96a) popup_call3_audio_in_window_g4

0x77de,	// (0x0003a887) mup_spec_half_pane

0x77e7,	// (0x0003a890) mup_spec_half_pane_cp

0xe4d7,	// (0x00041580) mup_osc_middle_pane

0xe4e0,	// (0x00041589) mup_visualizer_osc_pane_g1

0x77be,	// (0x0003a867) mup_spec_bar_pane_ParamLimits

0x77be,	// (0x0003a867) mup_spec_bar_pane

0xe4c4,	// (0x0004156d) mup_spec_bar_pane_g1

0xe4ce,	// (0x00041577) mup_spec_bar_pane_g2

0x0001,

0xf62a,	// (0x000426d3) mup_spec_bar_pane_g

0x4dd9,	// (0x00037e82) aid_cale_week_size_cell_pane_ParamLimits

0x4dec,	// (0x00037e95) bg_cale_heading_pane_ParamLimits

0xc6b7,	// (0x0003f760) bg_cale_pane_cp01_ParamLimits

0x4e00,	// (0x00037ea9) cale_week_corner_pane_ParamLimits

0x4e16,	// (0x00037ebf) cale_week_day_heading_pane_ParamLimits

0x4e2a,	// (0x00037ed3) cale_week_scroll_pane_g1_ParamLimits

0x4e3b,	// (0x00037ee4) cale_week_scroll_pane_g2_ParamLimits

0x4e4c,	// (0x00037ef5) cale_week_scroll_pane_g3_ParamLimits

0x4e5d,	// (0x00037f06) cale_week_scroll_pane_g4_ParamLimits

0x4e6e,	// (0x00037f17) cale_week_scroll_pane_g5_ParamLimits

0x4e7f,	// (0x00037f28) cale_week_scroll_pane_g6_ParamLimits

0x4e92,	// (0x00037f3b) cale_week_scroll_pane_g7_ParamLimits

0x4ea5,	// (0x00037f4e) cale_week_scroll_pane_g8_ParamLimits

0x4eb8,	// (0x00037f61) cale_week_scroll_pane_g9_ParamLimits

0x4ec9,	// (0x00037f72) cale_week_scroll_pane_g10_ParamLimits

0x4eda,	// (0x00037f83) cale_week_scroll_pane_g11_ParamLimits

0x4eeb,	// (0x00037f94) cale_week_scroll_pane_g12_ParamLimits

0x4efc,	// (0x00037fa5) cale_week_scroll_pane_g13_ParamLimits

0x4f0d,	// (0x00037fb6) cale_week_scroll_pane_g14_ParamLimits

0x4f1e,	// (0x00037fc7) cale_week_scroll_pane_g15_ParamLimits

0xf1d2,	// (0x0004227b) cale_week_scroll_pane_g_ParamLimits

0x4f2f,	// (0x00037fd8) cale_week_time_pane_ParamLimits

0x4f42,	// (0x00037feb) grid_cale_week_pane_ParamLimits

0xc6d0,	// (0x0003f779) listscroll_cale_week_pane_t1

0x4f57,	// (0x00038000) scroll_pane_cp08_ParamLimits

0x5b66,	// (0x00038c0f) cale_month_corner_pane_ParamLimits

0xca69,	// (0x0003fb12) cale_month_pane_t1

0x5e40,	// (0x00038ee9) cale_month_week_pane_ParamLimits

0xcd1f,	// (0x0003fdc8) popup_call_status_window_g1_ParamLimits

0x6559,	// (0x00039602) popup_call_status_window_g2_ParamLimits

0x6565,	// (0x0003960e) popup_call_status_window_g3_ParamLimits

0xf37a,	// (0x00042423) popup_call_status_window_g_ParamLimits

0xcd86,	// (0x0003fe2f) aid_call2_pane

0x3520,	// (0x000365c9) msg_header_pane_g1

0x6f4d,	// (0x00039ff6) postcard_address2_pane_ParamLimits

0x6f4d,	// (0x00039ff6) postcard_address2_pane

0x6f5b,	// (0x0003a004) postcard_message2_pane_ParamLimits

0x6f5b,	// (0x0003a004) postcard_message2_pane

0x7778,	// (0x0003a821) message2_row_pane_ParamLimits

0x7778,	// (0x0003a821) message2_row_pane

0xe47f,	// (0x00041528) address2_row_pane_ParamLimits

0xe47f,	// (0x00041528) address2_row_pane

0xe492,	// (0x0004153b) postcard_message2_row_pane_g1

0xe49a,	// (0x00041543) postcard_message2_row_pane_t1

0xe492,	// (0x0004153b) address2_row_pane_g1

0xe49a,	// (0x00041543) address2_row_pane_t1

0x52a1,	// (0x0003834a) aid_size_cell_vorec

0xc26a,	// (0x0003f313) main_rss_pane

0x7792,	// (0x0003a83b) rss_list_single_pane_ParamLimits

0x7792,	// (0x0003a83b) rss_list_single_pane

0xe4a8,	// (0x00041551) rss_list_single_pane_t1

0xe4b6,	// (0x0004155f) rss_list_single_pane_t2

0x0001,

0xf625,	// (0x000426ce) rss_list_single_pane_t

0xc26a,	// (0x0003f313) main_camera2_pane

0xc26a,	// (0x0003f313) main_video2_pane

0x79a6,	// (0x0003aa4f) cams_zoom_pane_cp2_ParamLimits

0x79a6,	// (0x0003aa4f) cams_zoom_pane_cp2

0x79b2,	// (0x0003aa5b) image2_vga_pane_ParamLimits

0x79b2,	// (0x0003aa5b) image2_vga_pane

0x79c1,	// (0x0003aa6a) main_camera2_pane_g1_ParamLimits

0x79c1,	// (0x0003aa6a) main_camera2_pane_g1

0x79cd,	// (0x0003aa76) main_camera2_pane_g2_ParamLimits

0x79cd,	// (0x0003aa76) main_camera2_pane_g2

0x79d9,	// (0x0003aa82) main_camera2_pane_g3_ParamLimits

0x79d9,	// (0x0003aa82) main_camera2_pane_g3

0x79e5,	// (0x0003aa8e) main_camera2_pane_g4_ParamLimits

0x79e5,	// (0x0003aa8e) main_camera2_pane_g4

0x79f1,	// (0x0003aa9a) main_camera2_pane_g5_ParamLimits

0x79f1,	// (0x0003aa9a) main_camera2_pane_g5

0x79fd,	// (0x0003aaa6) main_camera2_pane_g6_ParamLimits

0x79fd,	// (0x0003aaa6) main_camera2_pane_g6

0x7a09,	// (0x0003aab2) main_camera2_pane_g7_ParamLimits

0x7a09,	// (0x0003aab2) main_camera2_pane_g7

0x7a15,	// (0x0003aabe) main_camera2_pane_g8_ParamLimits

0x7a15,	// (0x0003aabe) main_camera2_pane_g8

0x0008,

0xf646,	// (0x000426ef) main_camera2_pane_g_ParamLimits

0xf646,	// (0x000426ef) main_camera2_pane_g

0x7a2d,	// (0x0003aad6) main_camera2_pane_t1_ParamLimits

0x7a2d,	// (0x0003aad6) main_camera2_pane_t1

0x7a3f,	// (0x0003aae8) main_camera2_pane_t2_ParamLimits

0x7a3f,	// (0x0003aae8) main_camera2_pane_t2

0x7a51,	// (0x0003aafa) main_camera2_pane_t3_ParamLimits

0x7a51,	// (0x0003aafa) main_camera2_pane_t3

0x7a63,	// (0x0003ab0c) main_camera2_pane_t4_ParamLimits

0x7a63,	// (0x0003ab0c) main_camera2_pane_t4

0x0006,

0xf659,	// (0x00042702) main_camera2_pane_t_ParamLimits

0xf659,	// (0x00042702) main_camera2_pane_t

0x7ac0,	// (0x0003ab69) cams_zoom_pane_cp4_ParamLimits

0x7ac0,	// (0x0003ab69) cams_zoom_pane_cp4

0x7ad0,	// (0x0003ab79) image2_cif_pane_ParamLimits

0x7ad0,	// (0x0003ab79) image2_cif_pane

0x7ae5,	// (0x0003ab8e) image2_subqcif_pane_ParamLimits

0x7ae5,	// (0x0003ab8e) image2_subqcif_pane

0x7af4,	// (0x0003ab9d) main_video2_pane_g1_ParamLimits

0x7af4,	// (0x0003ab9d) main_video2_pane_g1

0x7b06,	// (0x0003abaf) main_video2_pane_g2_ParamLimits

0x7b06,	// (0x0003abaf) main_video2_pane_g2

0x7b16,	// (0x0003abbf) main_video2_pane_g3_ParamLimits

0x7b16,	// (0x0003abbf) main_video2_pane_g3

0x7b26,	// (0x0003abcf) main_video2_pane_g4_ParamLimits

0x7b26,	// (0x0003abcf) main_video2_pane_g4

0x7b36,	// (0x0003abdf) main_video2_pane_g5_ParamLimits

0x7b36,	// (0x0003abdf) main_video2_pane_g5

0x7b46,	// (0x0003abef) main_video2_pane_g6_ParamLimits

0x7b46,	// (0x0003abef) main_video2_pane_g6

0x0005,

0xf668,	// (0x00042711) main_video2_pane_g_ParamLimits

0xf668,	// (0x00042711) main_video2_pane_g

0x7b58,	// (0x0003ac01) main_video2_pane_t1_ParamLimits

0x7b58,	// (0x0003ac01) main_video2_pane_t1

0x7b72,	// (0x0003ac1b) main_video2_pane_t2_ParamLimits

0x7b72,	// (0x0003ac1b) main_video2_pane_t2

0x7b98,	// (0x0003ac41) main_video2_pane_t3_ParamLimits

0x7b98,	// (0x0003ac41) main_video2_pane_t3

0x0002,

0xf675,	// (0x0004271e) main_video2_pane_t_ParamLimits

0xf675,	// (0x0004271e) main_video2_pane_t

0x74b2,	// (0x0003a55b) call_muted_g2

0x0001,

0xf617,	// (0x000426c0) call_muted_g

0xc26a,	// (0x0003f313) main_mup2_pane

0xe52e,	// (0x000415d7) main_mup2_pane_g1_ParamLimits

0xe52e,	// (0x000415d7) main_mup2_pane_g1

0x7bbe,	// (0x0003ac67) main_mup2_pane_g2_ParamLimits

0x7bbe,	// (0x0003ac67) main_mup2_pane_g2

0x7e50,	// (0x0003aef9) main_mup_pane_g13_cp1

0x7e58,	// (0x0003af01) mup_volume_pane_cp1

0x7be0,	// (0x0003ac89) main_mup2_pane_g4_ParamLimits

0x7be0,	// (0x0003ac89) main_mup2_pane_g4

0x7bf5,	// (0x0003ac9e) main_mup2_pane_g5_ParamLimits

0x7bf5,	// (0x0003ac9e) main_mup2_pane_g5

0x7c0a,	// (0x0003acb3) main_mup2_pane_g6_ParamLimits

0x7c0a,	// (0x0003acb3) main_mup2_pane_g6

0x7c1f,	// (0x0003acc8) main_mup2_pane_g7_ParamLimits

0x7c1f,	// (0x0003acc8) main_mup2_pane_g7

0x0006,

0xf67c,	// (0x00042725) main_mup2_pane_g_ParamLimits

0xf67c,	// (0x00042725) main_mup2_pane_g

0x7c3b,	// (0x0003ace4) main_mup2_pane_t1_ParamLimits

0x7c3b,	// (0x0003ace4) main_mup2_pane_t1

0x7c52,	// (0x0003acfb) main_mup2_pane_t2_ParamLimits

0x7c52,	// (0x0003acfb) main_mup2_pane_t2

0x7c69,	// (0x0003ad12) main_mup2_pane_t3_ParamLimits

0x7c69,	// (0x0003ad12) main_mup2_pane_t3

0x7c80,	// (0x0003ad29) main_mup2_pane_t4_ParamLimits

0x7c80,	// (0x0003ad29) main_mup2_pane_t4

0x7c9a,	// (0x0003ad43) main_mup2_pane_t5_ParamLimits

0x7c9a,	// (0x0003ad43) main_mup2_pane_t5

0x7cb4,	// (0x0003ad5d) main_mup2_pane_t6_ParamLimits

0x7cb4,	// (0x0003ad5d) main_mup2_pane_t6

0x0005,

0xf68b,	// (0x00042734) main_mup2_pane_t_ParamLimits

0xf68b,	// (0x00042734) main_mup2_pane_t

0x7cec,	// (0x0003ad95) mup2_visualizer_pane_ParamLimits

0x7cec,	// (0x0003ad95) mup2_visualizer_pane

0x7d22,	// (0x0003adcb) mup_progress_pane_cp_ParamLimits

0x7d22,	// (0x0003adcb) mup_progress_pane_cp

0x7e3b,	// (0x0003aee4) mup_volume_pane_cp_ParamLimits

0x7e3b,	// (0x0003aee4) mup_volume_pane_cp

0x7d3b,	// (0x0003ade4) mup2_visualizer_pane_g1_ParamLimits

0x7d3b,	// (0x0003ade4) mup2_visualizer_pane_g1

0xe53a,	// (0x000415e3) mup2_visualizer_pane_g2_ParamLimits

0xe53a,	// (0x000415e3) mup2_visualizer_pane_g2

0x7d50,	// (0x0003adf9) mup2_visualizer_pane_g3_ParamLimits

0x7d50,	// (0x0003adf9) mup2_visualizer_pane_g3

0x0002,

0xf698,	// (0x00042741) mup2_visualizer_pane_g_ParamLimits

0xf698,	// (0x00042741) mup2_visualizer_pane_g

0xd2cc,	// (0x00040375) aid_size_cell_fmradio

0x75c8,	// (0x0003a671) aid_height_parent_landcape

0xc8d1,	// (0x0003f97a) wml_content_pane_cp

0xc8d9,	// (0x0003f982) wml_tabs_pane

0xc8e2,	// (0x0003f98b) popup_wml_miniature_window

0xc8ea,	// (0x0003f993) scroll_pane_cp021

0xc8fe,	// (0x0003f9a7) wml_content_pane_comp8

0xc26a,	// (0x0003f313) bg_popup_sub_pane_cp05

0xe558,	// (0x00041601) popup_wml_miniature_window_g1

0xe560,	// (0x00041609) wml_miniature_view_pane

0x7d5e,	// (0x0003ae07) aid_size_wml_view

0x7d66,	// (0x0003ae0f) wml_miniature_view_pane_g1

0x7d6f,	// (0x0003ae18) wml_miniature_view_pane_g2

0x7d78,	// (0x0003ae21) wml_miniature_view_pane_g3

0x7d80,	// (0x0003ae29) wml_miniature_view_pane_g4

0x7d88,	// (0x0003ae31) wml_miniature_view_pane_g5

0x7d90,	// (0x0003ae39) wml_miniature_view_pane_g6

0x7d98,	// (0x0003ae41) wml_miniature_view_pane_g7

0x7da0,	// (0x0003ae49) wml_miniature_view_pane_g8

0x0007,

0xf69f,	// (0x00042748) wml_miniature_view_pane_g

0xe52e,	// (0x000415d7) background_graphic_ParamLimits

0xe52e,	// (0x000415d7) background_graphic

0xe568,	// (0x00041611) wml_tabs_2_pane

0xe571,	// (0x0004161a) wml_tabs_3_pane_ParamLimits

0xe571,	// (0x0004161a) wml_tabs_3_pane

0xe583,	// (0x0004162c) wml_tabs_4_pane_ParamLimits

0xe583,	// (0x0004162c) wml_tabs_4_pane

0xe599,	// (0x00041642) wml_tabs_5_pane_ParamLimits

0xe599,	// (0x00041642) wml_tabs_5_pane

0xe5b3,	// (0x0004165c) wml_tabs_pane_g2_ParamLimits

0xe5b3,	// (0x0004165c) wml_tabs_pane_g2

0xe5c7,	// (0x00041670) wml_tabs_pane_g3_ParamLimits

0xe5c7,	// (0x00041670) wml_tabs_pane_g3

0x7da8,	// (0x0003ae51) wml_tabs_2_active_pane_ParamLimits

0x7da8,	// (0x0003ae51) wml_tabs_2_active_pane

0x7dba,	// (0x0003ae63) wml_tabs_2_passive_pane_ParamLimits

0x7dba,	// (0x0003ae63) wml_tabs_2_passive_pane

0x7dcc,	// (0x0003ae75) wml_tabs_3_active_pane_cp_ParamLimits

0x7dcc,	// (0x0003ae75) wml_tabs_3_active_pane_cp

0x7ddf,	// (0x0003ae88) wml_tabs_3_passive_pane_ParamLimits

0x7ddf,	// (0x0003ae88) wml_tabs_3_passive_pane

0x7df0,	// (0x0003ae99) wml_tabs_3_passive_pane_cp_ParamLimits

0x7df0,	// (0x0003ae99) wml_tabs_3_passive_pane_cp

0x7e05,	// (0x0003aeae) tabs_4_active_pane

0x7e0d,	// (0x0003aeb6) tabs_4_passive_pane

0x7e15,	// (0x0003aebe) tabs_4_passive_pane_cp

0x7e1d,	// (0x0003aec6) tabs_4_passive_pane_cp2

0x738d,	// (0x0003a436) aid_height_text

0x6b75,	// (0x00039c1e) mup_volume_cont_pane_ParamLimits

0x6b75,	// (0x00039c1e) mup_volume_cont_pane

0x4958,	// (0x00037a01) aid_size_cell_pinb

0x4962,	// (0x00037a0b) aid_size_list_pinb

0x7d0b,	// (0x0003adb4) mup2_volume_cont_pane_ParamLimits

0x7d0b,	// (0x0003adb4) mup2_volume_cont_pane

0x7e27,	// (0x0003aed0) mup2_volume_cont_pane_g1_ParamLimits

0x7e27,	// (0x0003aed0) mup2_volume_cont_pane_g1

0x44bb,	// (0x00037564) aid_size_cell_touch_ParamLimits

0x44bb,	// (0x00037564) aid_size_cell_touch

0x4763,	// (0x0003780c) touch_pane_ParamLimits

0x4763,	// (0x0003780c) touch_pane

0x449d,	// (0x00037546) main_rss2_pane

0xe5e4,	// (0x0004168d) listscroll_rss2_pane

0xe5ed,	// (0x00041696) rss2_navigation_pane

0xe5f5,	// (0x0004169e) list_rss2_pane

0xceaa,	// (0x0003ff53) scroll_pane_cp22

0xe5fd,	// (0x000416a6) rss2_navigation_pane_g1

0xe606,	// (0x000416af) rss2_navigation_pane_g2

0xe60e,	// (0x000416b7) rss2_navigation_pane_g3

0x0002,

0xf6b0,	// (0x00042759) rss2_navigation_pane_g

0xe616,	// (0x000416bf) rss2_navigation_pane_t1

0x7e60,	// (0x0003af09) rss2_list_single_pane_ParamLimits

0x7e60,	// (0x0003af09) rss2_list_single_pane

0xe624,	// (0x000416cd) rss2_list_single_pane_t2

0xe632,	// (0x000416db) rss2_list_single_pane_t3_ParamLimits

0xe632,	// (0x000416db) rss2_list_single_pane_t3

0xe64f,	// (0x000416f8) rss2_list_single_pane_t4

0x6368,	// (0x00039411) smil_status_pane_g1

0x75df,	// (0x0003a688) main_image2_pane_ParamLimits

0x75df,	// (0x0003a688) main_image2_pane

0x7a21,	// (0x0003aaca) main_camera2_pane_g9_ParamLimits

0x7a21,	// (0x0003aaca) main_camera2_pane_g9

0x7a75,	// (0x0003ab1e) main_camera2_pane_t5_ParamLimits

0x7a75,	// (0x0003ab1e) main_camera2_pane_t5

0x7a87,	// (0x0003ab30) main_camera2_pane_t6_ParamLimits

0x7a87,	// (0x0003ab30) main_camera2_pane_t6

0x7e86,	// (0x0003af2f) main_image2_pane_g1_ParamLimits

0x7e86,	// (0x0003af2f) main_image2_pane_g1

0x7127,	// (0x0003a1d0) smil2_video_pane_ParamLimits

0x7127,	// (0x0003a1d0) smil2_video_pane

0x32a1,	// (0x0003634a) aid_zoom_text_primary_cp

0x4714,	// (0x000377bd) popup_preview_fixed_window

0xc83a,	// (0x0003f8e3) im_reading_pane_g1

0x796b,	// (0x0003aa14) cams2_bc_adjust_pane_cp_ParamLimits

0x796b,	// (0x0003aa14) cams2_bc_adjust_pane_cp

0x7ab2,	// (0x0003ab5b) cams2_bc_adjust_pane_ParamLimits

0x7ab2,	// (0x0003ab5b) cams2_bc_adjust_pane

0x7e92,	// (0x0003af3b) cams2_bc_adjust_pane_g1

0x7e9a,	// (0x0003af43) cams2_slider_pane

0x7ea3,	// (0x0003af4c) cams2_slider_pane_g1

0x7eac,	// (0x0003af55) cams2_slider_pane_g2

0x0006,

0xf6b7,	// (0x00042760) cams2_slider_pane_g

0x4a55,	// (0x00037afe) calc_display_pane_ParamLimits

0x4a73,	// (0x00037b1c) calc_paper_pane_ParamLimits

0x4a8f,	// (0x00037b38) grid_calc_pane_ParamLimits

0x65c3,	// (0x0003966c) popup_clock_digital_window_t1_ParamLimits

0xd269,	// (0x00040312) main_image_pane_t1

0x4a3b,	// (0x00037ae4) aid_size_cell_calc_ParamLimits

0x4a3b,	// (0x00037ae4) aid_size_cell_calc

0x7608,	// (0x0003a6b1) popup_blid_sat_info2_window_ParamLimits

0x7608,	// (0x0003a6b1) popup_blid_sat_info2_window

0xe665,	// (0x0004170e) aid_size_cell_blid

0xe66d,	// (0x00041716) bg_popup_window_pane_cp07

0xe690,	// (0x00041739) grid_popup_blid_pane

0xe69a,	// (0x00041743) heading_pane_cp05_ParamLimits

0xe69a,	// (0x00041743) heading_pane_cp05

0xe76c,	// (0x00041815) cell_popup_blid_pane_ParamLimits

0xe76c,	// (0x00041815) cell_popup_blid_pane

0xe796,	// (0x0004183f) cell_popup_blid_pane_g1

0xe79e,	// (0x00041847) cell_popup_blid_pane_t1

0x7cd1,	// (0x0003ad7a) mup2_indicator_pane_ParamLimits

0x7cd1,	// (0x0003ad7a) mup2_indicator_pane

0xcfe4,	// (0x0004008d) mup2_visualizer_osc_pane

0xe546,	// (0x000415ef) mup2_visualizer_spec_pane_ParamLimits

0xe546,	// (0x000415ef) mup2_visualizer_spec_pane

0x7ec6,	// (0x0003af6f) mup2_spec_half_pane

0x7ecf,	// (0x0003af78) mup2_spec_half_pane_cp

0x7ed9,	// (0x0003af82) mup2_spec_bar_pane_ParamLimits

0x7ed9,	// (0x0003af82) mup2_spec_bar_pane

0xe4c4,	// (0x0004156d) mup2_spec_bar_pane_g1

0xe4ce,	// (0x00041577) mup2_spec_bar_pane_g2

0x0001,

0xf62a,	// (0x000426d3) mup2_spec_bar_pane_g

0x7ef8,	// (0x0003afa1) mup2_osc_middle_pane

0xe4e0,	// (0x00041589) mup2_visualizer_osc_pane_g1

0x47da,	// (0x00037883) popup_number_entry_window_t1_ParamLimits

0x47ed,	// (0x00037896) popup_number_entry_window_t2_ParamLimits

0x47ff,	// (0x000378a8) popup_number_entry_window_t3_ParamLimits

0x4811,	// (0x000378ba) popup_number_entry_window_t5_ParamLimits

0x4811,	// (0x000378ba) popup_number_entry_window_t5

0xf0ec,	// (0x00042195) popup_number_entry_window_t_ParamLimits

0x4849,	// (0x000378f2) text_title_cp2_ParamLimits

0x6e11,	// (0x00039eba) aid_hotspot_pointer_text2_pane

0x6eab,	// (0x00039f54) main_viewer_pane_g9_ParamLimits

0x6eab,	// (0x00039f54) main_viewer_pane_g9

0xca69,	// (0x0003fb12) cale_month_pane_t1_ParamLimits

0xcaa6,	// (0x0003fb4f) bg_cale_pane_ParamLimits

0xcabe,	// (0x0003fb67) list_cale_pane_ParamLimits

0xc6d0,	// (0x0003f779) listscroll_cale_day_pane_t1

0xcacf,	// (0x0003fb78) scroll_pane_cp09_ParamLimits

0x6bb4,	// (0x00039c5d) main_mup_eq_pane_t1_ParamLimits

0x6bb4,	// (0x00039c5d) main_mup_eq_pane_t1

0x6bd0,	// (0x00039c79) main_mup_eq_pane_t2_ParamLimits

0x6bd0,	// (0x00039c79) main_mup_eq_pane_t2

0x6bec,	// (0x00039c95) main_mup_eq_pane_t3_ParamLimits

0x6bec,	// (0x00039c95) main_mup_eq_pane_t3

0x6c06,	// (0x00039caf) main_mup_eq_pane_t4_ParamLimits

0x6c06,	// (0x00039caf) main_mup_eq_pane_t4

0x6c20,	// (0x00039cc9) main_mup_eq_pane_t5_ParamLimits

0x6c20,	// (0x00039cc9) main_mup_eq_pane_t5

0x6c3a,	// (0x00039ce3) main_mup_eq_pane_t6_ParamLimits

0x6c3a,	// (0x00039ce3) main_mup_eq_pane_t6

0x6c50,	// (0x00039cf9) main_mup_eq_pane_t7_ParamLimits

0x6c50,	// (0x00039cf9) main_mup_eq_pane_t7

0x6c66,	// (0x00039d0f) main_mup_eq_pane_t8_ParamLimits

0x6c66,	// (0x00039d0f) main_mup_eq_pane_t8

0x6c7c,	// (0x00039d25) main_mup_eq_pane_t9_ParamLimits

0x6c7c,	// (0x00039d25) main_mup_eq_pane_t9

0x6c98,	// (0x00039d41) main_mup_eq_pane_t10_ParamLimits

0x6c98,	// (0x00039d41) main_mup_eq_pane_t10

0x0009,

0xf479,	// (0x00042522) main_mup_eq_pane_t_ParamLimits

0xf479,	// (0x00042522) main_mup_eq_pane_t

0x6d5d,	// (0x00039e06) mup_equalizer_pane_cp5_ParamLimits

0x6d75,	// (0x00039e1e) mup_equalizer_pane_cp6_ParamLimits

0x6d8d,	// (0x00039e36) mup_equalizer_pane_cp7_ParamLimits

0x449d,	// (0x00037546) main_gallery_pane

0xe4e9,	// (0x00041592) smil2_volume_pane

0xe4f1,	// (0x0004159a) smil_status_volume_pane_g1_ParamLimits

0xe504,	// (0x000415ad) smil_status_volume_pane_g2_ParamLimits

0x77ef,	// (0x0003a898) smil_status_volume_pane_g3_ParamLimits

0xf62f,	// (0x000426d8) smil_status_volume_pane_g_ParamLimits

0xe66d,	// (0x00041716) bg_popup_window_pane_cp07_ParamLimits

0xe67b,	// (0x00041724) blid_firmament_pane

0x7f01,	// (0x0003afaa) aid_size_cell_gallery_ParamLimits

0x7f01,	// (0x0003afaa) aid_size_cell_gallery

0x7f0f,	// (0x0003afb8) grid_gallery_pane_ParamLimits

0x7f0f,	// (0x0003afb8) grid_gallery_pane

0x7f1f,	// (0x0003afc8) cell_gallery_pane_ParamLimits

0x7f1f,	// (0x0003afc8) cell_gallery_pane

0xe7ac,	// (0x00041855) bg_cell_gallery_focus_pane_ParamLimits

0xe7ac,	// (0x00041855) bg_cell_gallery_focus_pane

0xe7be,	// (0x00041867) cell_gallery_pane_g1_ParamLimits

0xe7be,	// (0x00041867) cell_gallery_pane_g1

0x7f6d,	// (0x0003b016) cell_gallery_pane_g2_ParamLimits

0x7f6d,	// (0x0003b016) cell_gallery_pane_g2

0x7f7a,	// (0x0003b023) cell_gallery_pane_g3_ParamLimits

0x7f7a,	// (0x0003b023) cell_gallery_pane_g3

0xe7ca,	// (0x00041873) cell_gallery_pane_g4_ParamLimits

0xe7ca,	// (0x00041873) cell_gallery_pane_g4

0x0003,

0xf6dd,	// (0x00042786) cell_gallery_pane_g_ParamLimits

0xf6dd,	// (0x00042786) cell_gallery_pane_g

0xe7d6,	// (0x0004187f) bg_cell_gallery_focus_pane_g1

0xe7de,	// (0x00041887) bg_cell_gallery_focus_pane_g2

0xe7e6,	// (0x0004188f) bg_cell_gallery_focus_pane_g3

0xe7ee,	// (0x00041897) bg_cell_gallery_focus_pane_g4

0xe7f6,	// (0x0004189f) bg_cell_gallery_focus_pane_g5

0xe7fe,	// (0x000418a7) bg_cell_gallery_focus_pane_g6

0xe806,	// (0x000418af) bg_cell_gallery_focus_pane_g7

0xe80e,	// (0x000418b7) bg_cell_gallery_focus_pane_g8

0x0007,

0xf6e6,	// (0x0004278f) bg_cell_gallery_focus_pane_g

0xe816,	// (0x000418bf) aid_firma_cardinal

0xe82a,	// (0x000418d3) blid_firmament_pane_t1

0xe841,	// (0x000418ea) blid_firmament_pane_t2

0xe858,	// (0x00041901) blid_firmament_pane_t3

0xe86f,	// (0x00041918) blid_firmament_pane_t4

0x0003,

0xf6f7,	// (0x000427a0) blid_firmament_pane_t

0xe886,	// (0x0004192f) blid_sat_info_pane

0xe896,	// (0x0004193f) blid_sat_info_pane_g1

0xe896,	// (0x0004193f) blid_sat_info_pane_g2

0x0001,

0xf700,	// (0x000427a9) blid_sat_info_pane_g

0xe8a0,	// (0x00041949) blid_sat_info_pane_t1

0xe8ae,	// (0x00041957) smil2_volume_content_pane

0xe8b7,	// (0x00041960) smil2_volume_pane_g1

0xe8bf,	// (0x00041968) smil2_volume_content_pane_g1

0xe8c8,	// (0x00041971) smil2_volume_content_pane_g2

0xe8d1,	// (0x0004197a) smil2_volume_content_pane_g3

0xe8da,	// (0x00041983) smil2_volume_content_pane_g4

0xe8e3,	// (0x0004198c) smil2_volume_content_pane_g5

0xe8ec,	// (0x00041995) smil2_volume_content_pane_g6

0xe8f5,	// (0x0004199e) smil2_volume_content_pane_g7

0xe8fe,	// (0x000419a7) smil2_volume_content_pane_g8

0xe907,	// (0x000419b0) smil2_volume_content_pane_g9

0xe910,	// (0x000419b9) smil2_volume_content_pane_g10

0x0009,

0xf705,	// (0x000427ae) smil2_volume_content_pane_g

0x4faf,	// (0x00038058) cale_week_day_heading_pane_t1_ParamLimits

0x4fdc,	// (0x00038085) cale_week_day_heading_pane_t2_ParamLimits

0x5009,	// (0x000380b2) cale_week_day_heading_pane_t3_ParamLimits

0x5036,	// (0x000380df) cale_week_day_heading_pane_t4_ParamLimits

0x5063,	// (0x0003810c) cale_week_day_heading_pane_t5_ParamLimits

0x5090,	// (0x00038139) cale_week_day_heading_pane_t6_ParamLimits

0x50bd,	// (0x00038166) cale_week_day_heading_pane_t7_ParamLimits

0xf1f1,	// (0x0004229a) cale_week_day_heading_pane_t_ParamLimits

0xc6e2,	// (0x0003f78b) bg_cale_side_pane_ParamLimits

0x50ea,	// (0x00038193) cale_week_time_pane_t1_ParamLimits

0x5116,	// (0x000381bf) cale_week_time_pane_t2_ParamLimits

0x5142,	// (0x000381eb) cale_week_time_pane_t3_ParamLimits

0x516e,	// (0x00038217) cale_week_time_pane_t4_ParamLimits

0x519a,	// (0x00038243) cale_week_time_pane_t5_ParamLimits

0x51c6,	// (0x0003826f) cale_week_time_pane_t6_ParamLimits

0x51f2,	// (0x0003829b) cale_week_time_pane_t7_ParamLimits

0x521e,	// (0x000382c7) cale_week_time_pane_t8_ParamLimits

0xf200,	// (0x000422a9) cale_week_time_pane_t_ParamLimits

0x524a,	// (0x000382f3) cell_cale_week_pane_g2_ParamLimits

0xc6e2,	// (0x0003f78b) bg_cale_side_pane_cp01_ParamLimits

0x6165,	// (0x0003920e) cale_month_week_pane_t1_ParamLimits

0x6190,	// (0x00039239) cale_month_week_pane_t2_ParamLimits

0x61bb,	// (0x00039264) cale_month_week_pane_t3_ParamLimits

0x61e6,	// (0x0003928f) cale_month_week_pane_t4_ParamLimits

0x6211,	// (0x000392ba) cale_month_week_pane_t5_ParamLimits

0x623c,	// (0x000392e5) cale_month_week_pane_t6_ParamLimits

0xf2d9,	// (0x00042382) cale_month_week_pane_t_ParamLimits

0x6335,	// (0x000393de) cell_cale_month_pane_g1_ParamLimits

0x449d,	// (0x00037546) main_cale_event_viewer_pane

0x449d,	// (0x00037546) listscroll_cale_event_viewer_pane

0xe919,	// (0x000419c2) list_cale_ev_pane

0xe921,	// (0x000419ca) scroll_pane_cp023

0x7f87,	// (0x0003b030) field_cale_ev_pane_ParamLimits

0x7f87,	// (0x0003b030) field_cale_ev_pane

0xe92d,	// (0x000419d6) field_cale_ev_content_pane_ParamLimits

0xe92d,	// (0x000419d6) field_cale_ev_content_pane

0xe939,	// (0x000419e2) field_cale_ev_pane_g1_ParamLimits

0xe939,	// (0x000419e2) field_cale_ev_pane_g1

0xe945,	// (0x000419ee) field_cale_ev_pane_g2_ParamLimits

0xe945,	// (0x000419ee) field_cale_ev_pane_g2

0xe95d,	// (0x00041a06) field_cale_ev_pane_g3_ParamLimits

0xe95d,	// (0x00041a06) field_cale_ev_pane_g3

0x0002,

0xf71a,	// (0x000427c3) field_cale_ev_pane_g_ParamLimits

0xf71a,	// (0x000427c3) field_cale_ev_pane_g

0xe975,	// (0x00041a1e) field_cale_ev_pane_t1_ParamLimits

0xe975,	// (0x00041a1e) field_cale_ev_pane_t1

0x7fab,	// (0x0003b054) field_cale_ev_content_pane_t1_ParamLimits

0x7fab,	// (0x0003b054) field_cale_ev_content_pane_t1

0xd14f,	// (0x000401f8) bg_button_pane_cp01

0xc590,	// (0x0003f639) listscroll_cale_week_pane_ParamLimits

0x4dcf,	// (0x00037e78) popup_toolbar_window_cp01

0xc6d0,	// (0x0003f779) listscroll_cale_week_pane_t1_ParamLimits

0xc590,	// (0x0003f639) listscroll_cale_day_pane_ParamLimits

0x4dcf,	// (0x00037e78) popup_toolbar_window_cp02

0xc6d0,	// (0x0003f779) listscroll_cale_day_pane_t1_ParamLimits

0xc590,	// (0x0003f639) main_cale_month_pane_ParamLimits

0x76ec,	// (0x0003a795) popup_toolbar_window_cp03_ParamLimits

0x76ec,	// (0x0003a795) popup_toolbar_window_cp03

0x7037,	// (0x0003a0e0) main_image_pane_g2_ParamLimits

0x7037,	// (0x0003a0e0) main_image_pane_g2

0x7043,	// (0x0003a0ec) main_image_pane_g3_ParamLimits

0x7043,	// (0x0003a0ec) main_image_pane_g3

0x0002,

0xf50b,	// (0x000425b4) main_image_pane_g_ParamLimits

0xf50b,	// (0x000425b4) main_image_pane_g

0xd269,	// (0x00040312) main_image_pane_t1_ParamLimits

0x704f,	// (0x0003a0f8) main_image_pane_t2_ParamLimits

0x704f,	// (0x0003a0f8) main_image_pane_t2

0x7061,	// (0x0003a10a) main_image_pane_t3_ParamLimits

0x7061,	// (0x0003a10a) main_image_pane_t3

0x7073,	// (0x0003a11c) main_image_pane_t4_ParamLimits

0x7073,	// (0x0003a11c) main_image_pane_t4

0x0003,

0xf512,	// (0x000425bb) main_image_pane_t_ParamLimits

0xf512,	// (0x000425bb) main_image_pane_t

0x7085,	// (0x0003a12e) popup_image_details_window_cp01

0x708f,	// (0x0003a138) popup_toobar_trans_pane_cp01_ParamLimits

0x708f,	// (0x0003a138) popup_toobar_trans_pane_cp01

0x765d,	// (0x0003a706) popup_image_details_window_ParamLimits

0x765d,	// (0x0003a706) popup_image_details_window

0xe435,	// (0x000414de) popup_image_focus_window

0x795d,	// (0x0003aa06) camera2_autofocus_pane_ParamLimits

0x795d,	// (0x0003aa06) camera2_autofocus_pane

0x449d,	// (0x00037546) bg_popup_sub_pane_cp06

0xe98c,	// (0x00041a35) popup_image_focus_window_g1

0xe994,	// (0x00041a3d) popup_image_focus_window_g2

0xe99c,	// (0x00041a45) popup_image_focus_window_g3

0xe9a4,	// (0x00041a4d) popup_image_focus_window_g4

0x0003,

0xf721,	// (0x000427ca) popup_image_focus_window_g

0xe9ac,	// (0x00041a55) popup_image_focus_window_t1

0xe9ba,	// (0x00041a63) popup_image_focus_window_t2

0xe9ca,	// (0x00041a73) popup_image_focus_window_t3

0x0002,

0xf72a,	// (0x000427d3) popup_image_focus_window_t

0xe9d8,	// (0x00041a81) camera2_autofocus_pane_g1

0x75df,	// (0x0003a688) bg_tb_trans_pane_cp01

0xe9e6,	// (0x00041a8f) popup_image_details_window_g1

0xe9f9,	// (0x00041aa2) popup_image_details_window_g2

0x0002,

0xf73c,	// (0x000427e5) popup_image_details_window_g

0xea22,	// (0x00041acb) popup_image_details_window_t1

0xea34,	// (0x00041add) popup_image_details_window_t2

0xea4d,	// (0x00041af6) popup_image_details_window_t3

0xea61,	// (0x00041b0a) popup_image_details_window_t4

0xea7c,	// (0x00041b25) popup_image_details_window_t5

0x0004,

0xf743,	// (0x000427ec) popup_image_details_window_t

0xc57c,	// (0x0003f625) bg_calc_paper_pane_ParamLimits

0x449d,	// (0x00037546) grid_highlight_pane_cp013

0x4b88,	// (0x00037c31) list_calc_pane_ParamLimits

0x4b9a,	// (0x00037c43) scroll_pane_cp024

0xc590,	// (0x0003f639) bg_calc_display_pane_ParamLimits

0x4ba2,	// (0x00037c4b) calc_display_pane_t1_ParamLimits

0x4bb7,	// (0x00037c60) calc_display_pane_t2_ParamLimits

0x4bcc,	// (0x00037c75) calc_display_pane_t3_ParamLimits

0xf173,	// (0x0004221c) calc_display_pane_t_ParamLimits

0x4c9f,	// (0x00037d48) cell_calc_pane_g2

0x0001,

0xf190,	// (0x00042239) cell_calc_pane_g

0x4ca8,	// (0x00037d51) cell_calc_pane_t1

0xc5ef,	// (0x0003f698) grid_highlight_pane_cp02_ParamLimits

0xc605,	// (0x0003f6ae) toolbar_button_pane_cp01_ParamLimits

0xc605,	// (0x0003f6ae) toolbar_button_pane_cp01

0xd2ae,	// (0x00040357) temp_image_control_pane_ParamLimits

0xd2ae,	// (0x00040357) temp_image_control_pane

0x75df,	// (0x0003a688) main_mp3_pane

0xea96,	// (0x00041b3f) temp_image_control_pane_g1_ParamLimits

0xea96,	// (0x00041b3f) temp_image_control_pane_g1

0xeaa4,	// (0x00041b4d) temp_image_control_pane_g2_ParamLimits

0xeaa4,	// (0x00041b4d) temp_image_control_pane_g2

0xeab6,	// (0x00041b5f) temp_image_control_pane_g3_ParamLimits

0xeab6,	// (0x00041b5f) temp_image_control_pane_g3

0x7ff9,	// (0x0003b0a2) temp_image_control_pane_g4_ParamLimits

0x7ff9,	// (0x0003b0a2) temp_image_control_pane_g4

0x0003,

0xf74e,	// (0x000427f7) temp_image_control_pane_g_ParamLimits

0xf74e,	// (0x000427f7) temp_image_control_pane_g

0xea96,	// (0x00041b3f) main_mp3_pane_g1

0x800a,	// (0x0003b0b3) main_mp3_pane_g2

0x0007,

0xf757,	// (0x00042800) main_mp3_pane_g

0xeaf9,	// (0x00041ba2) main_mp3_pane_t1

0xc747,	// (0x0003f7f0) main_camera_pane_g8_ParamLimits

0xc747,	// (0x0003f7f0) main_camera_pane_g8

0x54f6,	// (0x0003859f) main_video_pane_g7_ParamLimits

0x54f6,	// (0x0003859f) main_video_pane_g7

0x7aa0,	// (0x0003ab49) main_camera2_pane_t7_ParamLimits

0x7aa0,	// (0x0003ab49) main_camera2_pane_t7

0xc891,	// (0x0003f93a) scroll_pane_cp025_ParamLimits

0xc891,	// (0x0003f93a) scroll_pane_cp025

0xc8a5,	// (0x0003f94e) scroll_pane_cp026_ParamLimits

0xc8a5,	// (0x0003f94e) scroll_pane_cp026

0xc8b4,	// (0x0003f95d) wml_content_pane_ParamLimits

0x449d,	// (0x00037546) main_touch_calib_pane

0x80ae,	// (0x0003b157) main_touch_calib_pane_g1

0x80ba,	// (0x0003b163) main_touch_calib_pane_g2

0x80c6,	// (0x0003b16f) main_touch_calib_pane_g3

0x80d2,	// (0x0003b17b) main_touch_calib_pane_g4

0x0003,

0xf775,	// (0x0004281e) main_touch_calib_pane_g

0x80de,	// (0x0003b187) main_touch_calib_pane_t1

0x80f5,	// (0x0003b19e) main_touch_calib_pane_t2

0x0004,

0xf77e,	// (0x00042827) main_touch_calib_pane_t

0xcf25,	// (0x0003ffce) mup_progress_pane_cp02

0xcf44,	// (0x0003ffed) navi_pane_g1

0xcfa6,	// (0x0004004f) navi_pane_mp_t3

0x75df,	// (0x0003a688) main_mp3_pane_ParamLimits

0x772e,	// (0x0003a7d7) navi_pane_ParamLimits

0xea96,	// (0x00041b3f) main_mp3_pane_g1_ParamLimits

0x800a,	// (0x0003b0b3) main_mp3_pane_g2_ParamLimits

0x8016,	// (0x0003b0bf) main_mp3_pane_g3_ParamLimits

0x8016,	// (0x0003b0bf) main_mp3_pane_g3

0x8022,	// (0x0003b0cb) main_mp3_pane_g4_ParamLimits

0x8022,	// (0x0003b0cb) main_mp3_pane_g4

0xeac6,	// (0x00041b6f) main_mp3_pane_g5_ParamLimits

0xeac6,	// (0x00041b6f) main_mp3_pane_g5

0xead4,	// (0x00041b7d) main_mp3_pane_g6_ParamLimits

0xead4,	// (0x00041b7d) main_mp3_pane_g6

0xeae1,	// (0x00041b8a) main_mp3_pane_g7_ParamLimits

0xeae1,	// (0x00041b8a) main_mp3_pane_g7

0xeaed,	// (0x00041b96) main_mp3_pane_g8_ParamLimits

0xeaed,	// (0x00041b96) main_mp3_pane_g8

0xf757,	// (0x00042800) main_mp3_pane_g_ParamLimits

0x802e,	// (0x0003b0d7) main_mp3_pane_t2

0x803e,	// (0x0003b0e7) main_mp3_pane_t3

0xeb07,	// (0x00041bb0) main_mp3_pane_t4

0xeb15,	// (0x00041bbe) main_mp3_pane_t5

0x0005,

0xf768,	// (0x00042811) main_mp3_pane_t

0xeb23,	// (0x00041bcc) mup_progress_pane_cp01

0x32a1,	// (0x0003634a) aid_zoom_text_secondary2

0xe919,	// (0x000419c2) list_cale_ev2_pane

0xe921,	// (0x000419ca) scroll_pane_cp023_ParamLimits

0x814c,	// (0x0003b1f5) field_cale_ev2_pane_ParamLimits

0x814c,	// (0x0003b1f5) field_cale_ev2_pane

0x35a9,	// (0x00036652) field_cale_ev2_pane_g1_ParamLimits

0x35a9,	// (0x00036652) field_cale_ev2_pane_g1

0x35b5,	// (0x0003665e) field_cale_ev2_pane_g2_ParamLimits

0x35b5,	// (0x0003665e) field_cale_ev2_pane_g2

0x35cd,	// (0x00036676) field_cale_ev2_pane_g3_ParamLimits

0x35cd,	// (0x00036676) field_cale_ev2_pane_g3

0x0003,

0xf789,	// (0x00042832) field_cale_ev2_pane_g_ParamLimits

0xf789,	// (0x00042832) field_cale_ev2_pane_g

0x35f1,	// (0x0003669a) field_cale_ev2_pane_t1_ParamLimits

0x35f1,	// (0x0003669a) field_cale_ev2_pane_t1

0x3608,	// (0x000366b1) field_cale_ev2_pane_t2_ParamLimits

0x3608,	// (0x000366b1) field_cale_ev2_pane_t2

0x0001,

0xf792,	// (0x0004283b) field_cale_ev2_pane_t_ParamLimits

0xf792,	// (0x0004283b) field_cale_ev2_pane_t

0x6f13,	// (0x00039fbc) main_postcard_pane_g5_ParamLimits

0x6f13,	// (0x00039fbc) main_postcard_pane_g5

0x6f21,	// (0x00039fca) main_postcard_pane_g6_ParamLimits

0x6f21,	// (0x00039fca) main_postcard_pane_g6

0x5334,	// (0x000383dd) camera2_autofocus_pane_cp_ParamLimits

0x5334,	// (0x000383dd) camera2_autofocus_pane_cp

0x75df,	// (0x0003a688) main_mup3_pane

0x818a,	// (0x0003b233) main_mup3_pane_g1_ParamLimits

0x818a,	// (0x0003b233) main_mup3_pane_g1

0x81ab,	// (0x0003b254) main_mup3_pane_g2_ParamLimits

0x81ab,	// (0x0003b254) main_mup3_pane_g2

0x8227,	// (0x0003b2d0) main_mup3_pane_g3_ParamLimits

0x8227,	// (0x0003b2d0) main_mup3_pane_g3

0x8268,	// (0x0003b311) main_mup3_pane_g4_ParamLimits

0x8268,	// (0x0003b311) main_mup3_pane_g4

0x82a9,	// (0x0003b352) main_mup3_pane_g5_ParamLimits

0x82a9,	// (0x0003b352) main_mup3_pane_g5

0x82ea,	// (0x0003b393) main_mup3_pane_g6_ParamLimits

0x82ea,	// (0x0003b393) main_mup3_pane_g6

0xeb2b,	// (0x00041bd4) main_mup3_pane_g7_ParamLimits

0xeb2b,	// (0x00041bd4) main_mup3_pane_g7

0x0007,

0xf7a2,	// (0x0004284b) main_mup3_pane_g_ParamLimits

0xf7a2,	// (0x0004284b) main_mup3_pane_g

0x835c,	// (0x0003b405) main_mup3_pane_t1_ParamLimits

0x835c,	// (0x0003b405) main_mup3_pane_t1

0x83cf,	// (0x0003b478) main_mup3_pane_t2_ParamLimits

0x83cf,	// (0x0003b478) main_mup3_pane_t2

0x849c,	// (0x0003b545) main_mup3_pane_t4_ParamLimits

0x849c,	// (0x0003b545) main_mup3_pane_t4

0x84f0,	// (0x0003b599) main_mup3_pane_t5_ParamLimits

0x84f0,	// (0x0003b599) main_mup3_pane_t5

0x859c,	// (0x0003b645) main_mup3_pane_t6_ParamLimits

0x859c,	// (0x0003b645) main_mup3_pane_t6

0x0005,

0xf7b3,	// (0x0004285c) main_mup3_pane_t_ParamLimits

0xf7b3,	// (0x0004285c) main_mup3_pane_t

0x8644,	// (0x0003b6ed) mup3_progress_pane_ParamLimits

0x8644,	// (0x0003b6ed) mup3_progress_pane

0x86af,	// (0x0003b758) popup_mup3_control_window_ParamLimits

0x86af,	// (0x0003b758) popup_mup3_control_window

0xeb39,	// (0x00041be2) popup_mup3_text_window

0x86cc,	// (0x0003b775) mup3_progress_pane_t1

0x86e3,	// (0x0003b78c) mup3_progress_pane_t2

0xeb41,	// (0x00041bea) mup3_progress_pane_t3

0x0002,

0xf7c0,	// (0x00042869) mup3_progress_pane_t

0xeb58,	// (0x00041c01) mup_progress_pane_cp03

0x449d,	// (0x00037546) bg_tb_trans_pane_cp04

0x86fa,	// (0x0003b7a3) mup3_volume_pane

0x8702,	// (0x0003b7ab) popup_mup3_control_window_g1

0x0be9,	// (0x00033c92) mup3_volume_pane_g1

0x0bf2,	// (0x00033c9b) mup3_volume_pane_g2

0x0bfb,	// (0x00033ca4) mup3_volume_pane_g3

0x0002,

0xf7c7,	// (0x00042870) mup3_volume_pane_g

0x449d,	// (0x00037546) bg_tb_trans_pane_cp03

0xeb68,	// (0x00041c11) popup_mup3_text_window_g1

0xeb70,	// (0x00041c19) popup_mup3_text_window_t1

0xc5d8,	// (0x0003f681) list_calc_item_pane_g1_ParamLimits

0xe5db,	// (0x00041684) mup_volume_pane_cp_g1

0x810c,	// (0x0003b1b5) main_touch_calib_pane_t3

0x8120,	// (0x0003b1c9) main_touch_calib_pane_t4

0x8136,	// (0x0003b1df) main_touch_calib_pane_t5

0x44a7,	// (0x00037550) aid_cell_size_toolbar2

0x44af,	// (0x00037558) aid_popup3_width_pane

0x3299,	// (0x00036342) aid_zoom_text_msg_primary

0x5307,	// (0x000383b0) vorec_t7

0xc59c,	// (0x0003f645) bg_calc_paper_pane_g1_ParamLimits

0xc5a8,	// (0x0003f651) bg_calc_paper_pane_g2_ParamLimits

0xc5b4,	// (0x0003f65d) bg_calc_paper_pane_g3_ParamLimits

0xc5c0,	// (0x0003f669) bg_calc_paper_pane_g4_ParamLimits

0xc5cc,	// (0x0003f675) bg_calc_paper_pane_g5_ParamLimits

0x4c0d,	// (0x00037cb6) bg_calc_paper_pane_g6_ParamLimits

0x4c1e,	// (0x00037cc7) bg_calc_paper_pane_g7_ParamLimits

0x4c2f,	// (0x00037cd8) bg_calc_paper_pane_g8_ParamLimits

0xf17a,	// (0x00042223) bg_calc_paper_pane_g_ParamLimits

0x4c40,	// (0x00037ce9) calc_bg_paper_pane_g9_ParamLimits

0x5425,	// (0x000384ce) image_qvga_pane_ParamLimits

0x5425,	// (0x000384ce) image_qvga_pane

0xc4c5,	// (0x0003f56e) bg_popup_sub_pane_cp04_ParamLimits

0xd1e5,	// (0x0004028e) popup_mup_playback_window_g1_ParamLimits

0xd1f1,	// (0x0004029a) popup_mup_playback_window_t1_ParamLimits

0xd206,	// (0x000402af) popup_mup_playback_window_t2_ParamLimits

0xf506,	// (0x000425af) popup_mup_playback_window_t_ParamLimits

0x7bcf,	// (0x0003ac78) main_mup2_pane_g3_ParamLimits

0x7bcf,	// (0x0003ac78) main_mup2_pane_g3

0x56d3,	// (0x0003877c) popup_toolbar_window_cp04

0xd601,	// (0x000406aa) popup_call2_audio_second_window_g3_ParamLimits

0xd601,	// (0x000406aa) popup_call2_audio_second_window_g3

0xda2f,	// (0x00040ad8) popup_call2_audio_first_window_g4_ParamLimits

0xda2f,	// (0x00040ad8) popup_call2_audio_first_window_g4

0xe0ae,	// (0x00041157) popup_call2_audio_in_window_g4_ParamLimits

0xe0ae,	// (0x00041157) popup_call2_audio_in_window_g4

0x702a,	// (0x0003a0d3) aid_area_sk_bg_cut_ParamLimits

0x702a,	// (0x0003a0d3) aid_area_sk_bg_cut

0xd21b,	// (0x000402c4) aid_area_sk_bg_cut_2_ParamLimits

0xd21b,	// (0x000402c4) aid_area_sk_bg_cut_2

0x7f5d,	// (0x0003b006) aid_placing_details_win

0x7f65,	// (0x0003b00e) aid_placing_details_win_2

0xe9d8,	// (0x00041a81) camera2_autofocus_pane_g1_ParamLimits

0x4705,	// (0x000377ae) popup_fixed_preview_cale_window_ParamLimits

0x4705,	// (0x000377ae) popup_fixed_preview_cale_window

0xcff5,	// (0x0004009e) navi_slider_pane_g3

0xcffe,	// (0x000400a7) navi_slider_pane_g4

0xd007,	// (0x000400b0) navi_slider_pane_g5

0xcff5,	// (0x0004009e) navi_slider_pane_g6

0x692a,	// (0x000399d3) navi_slider_pane_g7

0xd11c,	// (0x000401c5) mup_scale_pane_g3

0xd125,	// (0x000401ce) mup_scale_pane_g4

0xd12e,	// (0x000401d7) mup_scale_pane_g5

0x6da5,	// (0x00039e4e) mup_scale_pane_g6

0x6dae,	// (0x00039e57) mup_scale_pane_g7

0xcff5,	// (0x0004009e) cams2_slider_pane_g3

0xe65d,	// (0x00041706) cams2_slider_pane_g4

0x7eb5,	// (0x0003af5e) cams2_slider_pane_g5

0xcff5,	// (0x0004009e) cams2_slider_pane_g6

0x7ebd,	// (0x0003af66) cams2_slider_pane_g7

0xe896,	// (0x0004193f) camera2_autofocus_pane_cp_g1

0xeb7e,	// (0x00041c27) bg_popup_preview_window_pane_cp02_ParamLimits

0xeb7e,	// (0x00041c27) bg_popup_preview_window_pane_cp02

0xeb8a,	// (0x00041c33) list_fp_cale_pane_ParamLimits

0xeb8a,	// (0x00041c33) list_fp_cale_pane

0xeb96,	// (0x00041c3f) popup_fixed_preview_cale_window_t1_ParamLimits

0xeb96,	// (0x00041c3f) popup_fixed_preview_cale_window_t1

0x870b,	// (0x0003b7b4) popup_fixed_preview_cale_window_t2_ParamLimits

0x870b,	// (0x0003b7b4) popup_fixed_preview_cale_window_t2

0x8720,	// (0x0003b7c9) popup_fixed_preview_cale_window_t3_ParamLimits

0x8720,	// (0x0003b7c9) popup_fixed_preview_cale_window_t3

0x0002,

0xf7ce,	// (0x00042877) popup_fixed_preview_cale_window_t_ParamLimits

0xf7ce,	// (0x00042877) popup_fixed_preview_cale_window_t

0x8735,	// (0x0003b7de) list_single_fp_cale_pane_ParamLimits

0x8735,	// (0x0003b7de) list_single_fp_cale_pane

0xebb4,	// (0x00041c5d) list_single_fp_cale_pane_g1_ParamLimits

0xebb4,	// (0x00041c5d) list_single_fp_cale_pane_g1

0xebc0,	// (0x00041c69) list_single_fp_cale_pane_g2_ParamLimits

0xebc0,	// (0x00041c69) list_single_fp_cale_pane_g2

0x0002,

0xf7d5,	// (0x0004287e) list_single_fp_cale_pane_g_ParamLimits

0xf7d5,	// (0x0004287e) list_single_fp_cale_pane_g

0xebd9,	// (0x00041c82) list_single_fp_cale_pane_t1_ParamLimits

0xebd9,	// (0x00041c82) list_single_fp_cale_pane_t1

0xebeb,	// (0x00041c94) list_single_fp_cale_pane_t2_ParamLimits

0xebeb,	// (0x00041c94) list_single_fp_cale_pane_t2

0x0001,

0xf7dc,	// (0x00042885) list_single_fp_cale_pane_t_ParamLimits

0xf7dc,	// (0x00042885) list_single_fp_cale_pane_t

0x0000,

0x0000,

0x0000,

0x0000,

0x449d,	// (0x00037546) main_dialer_pane

0x8745,	// (0x0003b7ee) aid_cell_size_keypad

0x874f,	// (0x0003b7f8) dialer_ne_pane

0x8759,	// (0x0003b802) grid_dialer_command_1_pane

0x8761,	// (0x0003b80a) grid_dialer_command_2_pane

0x8769,	// (0x0003b812) grid_dialer_keypad_pane

0x877d,	// (0x0003b826) bg_popup_call_pane_cp06_ParamLimits

0x877d,	// (0x0003b826) bg_popup_call_pane_cp06

0x8789,	// (0x0003b832) dialer_ne_clear_pane_ParamLimits

0x8789,	// (0x0003b832) dialer_ne_clear_pane

0xec1e,	// (0x00041cc7) dialer_ne_pane_g1

0xec26,	// (0x00041ccf) dialer_ne_pane_t1_ParamLimits

0xec26,	// (0x00041ccf) dialer_ne_pane_t1

0x8795,	// (0x0003b83e) dialer_ne_pane_t2_ParamLimits

0x8795,	// (0x0003b83e) dialer_ne_pane_t2

0x87b2,	// (0x0003b85b) dialer_ne_pane_t3_ParamLimits

0x87b2,	// (0x0003b85b) dialer_ne_pane_t3

0x0002,

0xf7e1,	// (0x0004288a) dialer_ne_pane_t_ParamLimits

0xf7e1,	// (0x0004288a) dialer_ne_pane_t

0x87d6,	// (0x0003b87f) dialer_ne_pane_t3_copy1_ParamLimits

0x87d6,	// (0x0003b87f) dialer_ne_pane_t3_copy1

0x87fa,	// (0x0003b8a3) cell_dialer_keypad_pane_ParamLimits

0x87fa,	// (0x0003b8a3) cell_dialer_keypad_pane

0x8811,	// (0x0003b8ba) cell_dialer_command_1_pane_ParamLimits

0x8811,	// (0x0003b8ba) cell_dialer_command_1_pane

0x8827,	// (0x0003b8d0) cell_dialer_command_2_pane_ParamLimits

0x8827,	// (0x0003b8d0) cell_dialer_command_2_pane

0xec38,	// (0x00041ce1) bg_button_pane_cp02_ParamLimits

0xec38,	// (0x00041ce1) bg_button_pane_cp02

0x8836,	// (0x0003b8df) cell_dialer_keypad_pane_g1_ParamLimits

0x8836,	// (0x0003b8df) cell_dialer_keypad_pane_g1

0xec38,	// (0x00041ce1) bg_button_pane_cp03_ParamLimits

0xec38,	// (0x00041ce1) bg_button_pane_cp03

0x884a,	// (0x0003b8f3) cell_dialer_command_1_pane_g1_ParamLimits

0x884a,	// (0x0003b8f3) cell_dialer_command_1_pane_g1

0xec44,	// (0x00041ced) bg_button_pane_cp04

0x885e,	// (0x0003b907) cell_dialer_command_2_pane_g1

0xcfe4,	// (0x0004008d) bg_button_pane_cp06

0xec4c,	// (0x00041cf5) dialer_ne_clear_pane_g1

0x686d,	// (0x00039916) navi_pane_g2

0x689b,	// (0x00039944) navi_pane_g3

0x0002,

0xf409,	// (0x000424b2) navi_pane_g

0x68c6,	// (0x0003996f) navi_pane_mv_g2

0x68ed,	// (0x00039996) navi_pane_mv_g5

0x68f5,	// (0x0003999e) navi_pane_mv_t1

0xc590,	// (0x0003f639) main_clock2_pane

0x8894,	// (0x0003b93d) main_clock2_list_pane_ParamLimits

0x8894,	// (0x0003b93d) main_clock2_list_pane

0x88be,	// (0x0003b967) main_clock2_pane_t1_ParamLimits

0x88be,	// (0x0003b967) main_clock2_pane_t1

0x88ec,	// (0x0003b995) main_clock2_pane_t2_ParamLimits

0x88ec,	// (0x0003b995) main_clock2_pane_t2

0x0004,

0xf7e8,	// (0x00042891) main_clock2_pane_t_ParamLimits

0xf7e8,	// (0x00042891) main_clock2_pane_t

0x8955,	// (0x0003b9fe) popup_clock_analogue_window_cp03_ParamLimits

0x8955,	// (0x0003b9fe) popup_clock_analogue_window_cp03

0x8975,	// (0x0003ba1e) popup_clock_digital_window_cp02_ParamLimits

0x8975,	// (0x0003ba1e) popup_clock_digital_window_cp02

0x89e6,	// (0x0003ba8f) main_clock2_list_single_pane_ParamLimits

0x89e6,	// (0x0003ba8f) main_clock2_list_single_pane

0xcfe4,	// (0x0004008d) list_highlight_pane_cp05

0xec54,	// (0x00041cfd) main_clock2_list_single_pane_t1

0x56d3,	// (0x0003877c) popup_toolbar_window_cp04_ParamLimits

0x7fc9,	// (0x0003b072) camera2_autofocus_pane_g2_ParamLimits

0x7fc9,	// (0x0003b072) camera2_autofocus_pane_g2

0x7fd5,	// (0x0003b07e) camera2_autofocus_pane_g3_ParamLimits

0x7fd5,	// (0x0003b07e) camera2_autofocus_pane_g3

0x7fe1,	// (0x0003b08a) camera2_autofocus_pane_g4_ParamLimits

0x7fe1,	// (0x0003b08a) camera2_autofocus_pane_g4

0x7fed,	// (0x0003b096) camera2_autofocus_pane_g5_ParamLimits

0x7fed,	// (0x0003b096) camera2_autofocus_pane_g5

0x0004,

0xf731,	// (0x000427da) camera2_autofocus_pane_g_ParamLimits

0xf731,	// (0x000427da) camera2_autofocus_pane_g

0x816a,	// (0x0003b213) camera2_autofocus_pane_cp_g2

0x8172,	// (0x0003b21b) camera2_autofocus_pane_cp_g3

0x817a,	// (0x0003b223) camera2_autofocus_pane_cp_g4

0x8182,	// (0x0003b22b) camera2_autofocus_pane_cp_g5

0x0004,

0xf797,	// (0x00042840) camera2_autofocus_pane_cp_g

0x8775,	// (0x0003b81e) popup_dialer_spcha_window

0x449d,	// (0x00037546) bg_popup_sub_pane_cp07

0xec62,	// (0x00041d0b) list_spcha_pane

0xec6a,	// (0x00041d13) list_single_spcha_pane_ParamLimits

0xec6a,	// (0x00041d13) list_single_spcha_pane

0x449d,	// (0x00037546) list_highlight_pane_cp06

0xec7b,	// (0x00041d24) list_single_spcha_pane_t1

0xde58,	// (0x00040f01) popup_call2_audio_out_window_g4_ParamLimits

0xde58,	// (0x00040f01) popup_call2_audio_out_window_g4

0x449d,	// (0x00037546) main_imed2_pane

0xe43f,	// (0x000414e8) popup_imed_adjust2_window

0x766b,	// (0x0003a714) popup_imed_trans_window_ParamLimits

0x766b,	// (0x0003a714) popup_imed_trans_window

0xe6c6,	// (0x0004176f) popup_blid_sat_info2_window_t1

0xe6d4,	// (0x0004177d) popup_blid_sat_info2_window_t2

0x000a,

0xf6c6,	// (0x0004276f) popup_blid_sat_info2_window_t

0x8a90,	// (0x0003bb39) aid_size_cell_colour_35

0x8aaa,	// (0x0003bb53) aid_size_cell_colour_112

0x8ac1,	// (0x0003bb6a) aid_size_cell_effect

0x75df,	// (0x0003a688) bg_tb_trans_pane_cp02

0xd8d3,	// (0x0004097c) heading_imed_pane

0x8adb,	// (0x0003bb84) listscroll_imed_pane

0xec89,	// (0x00041d32) heading_imed_pane_g1

0xec91,	// (0x00041d3a) heading_imed_pane_t1

0xec9f,	// (0x00041d48) grid_imed_colour_35_pane_ParamLimits

0xec9f,	// (0x00041d48) grid_imed_colour_35_pane

0x8ae7,	// (0x0003bb90) grid_imed_effect_pane

0xecbb,	// (0x00041d64) list_imed_aspect_pane

0x8af7,	// (0x0003bba0) scroll_pane_cp027_ParamLimits

0x8af7,	// (0x0003bba0) scroll_pane_cp027

0x8b03,	// (0x0003bbac) cell_imed_effect_pane_ParamLimits

0x8b03,	// (0x0003bbac) cell_imed_effect_pane

0xecc3,	// (0x00041d6c) cell_imed_colour_pane_ParamLimits

0xecc3,	// (0x00041d6c) cell_imed_colour_pane

0xed0d,	// (0x00041db6) cell_imed_colour_pane_g1_ParamLimits

0xed0d,	// (0x00041db6) cell_imed_colour_pane_g1

0xed1e,	// (0x00041dc7) hgihlgiht_grid_pane_cp016_ParamLimits

0xed1e,	// (0x00041dc7) hgihlgiht_grid_pane_cp016

0x8b1f,	// (0x0003bbc8) cell_imed_effect_pane_g1

0x8b27,	// (0x0003bbd0) grid_highlight_pane_cp017

0xed2f,	// (0x00041dd8) list_imed_single_pane_ParamLimits

0xed2f,	// (0x00041dd8) list_imed_single_pane

0x449d,	// (0x00037546) list_highlight_pane_cp07

0xed43,	// (0x00041dec) list_imed_aspect_pane_comp1_t1

0xe413,	// (0x000414bc) bg_tb_trans_pane_cp05

0xed65,	// (0x00041e0e) popup_imed_adjust2_window_g1

0xed8c,	// (0x00041e35) popup_imed_adjust2_window_t1

0xeda4,	// (0x00041e4d) slider_imed_adjust_pane

0xedb8,	// (0x00041e61) slider_imed_adjust_pane_g1

0xedc8,	// (0x00041e71) slider_imed_adjust_pane_g2

0xedd8,	// (0x00041e81) slider_imed_adjust_pane_g3

0xede9,	// (0x00041e92) slider_imed_adjust_pane_g4

0x0003,

0xf805,	// (0x000428ae) slider_imed_adjust_pane_g

0x8b30,	// (0x0003bbd9) aid_size_cell_clipart2

0x8b3c,	// (0x0003bbe5) grid_imed_clipart_pane

0xedfa,	// (0x00041ea3) scroll_pane_cp031

0x8b46,	// (0x0003bbef) cell_imed_clipart_pane_ParamLimits

0x8b46,	// (0x0003bbef) cell_imed_clipart_pane

0x8b64,	// (0x0003bc0d) cell_imed_clipart_pane_g1

0x449d,	// (0x00037546) grid_highlight_pane_cp014

0x88a0,	// (0x0003b949) main_clock2_pane_g1_ParamLimits

0x88a0,	// (0x0003b949) main_clock2_pane_g1

0x8991,	// (0x0003ba3a) aid_call2_pane_cp10

0x89a3,	// (0x0003ba4c) aid_call_pane_cp10

0xcf19,	// (0x0003ffc2) popup_clock_analogue_window_cp10_g1

0xcf19,	// (0x0003ffc2) popup_clock_analogue_window_cp10_g2

0x89b5,	// (0x0003ba5e) popup_clock_analogue_window_cp10_g3

0x89b5,	// (0x0003ba5e) popup_clock_analogue_window_cp10_g4

0xcf19,	// (0x0003ffc2) popup_clock_analogue_window_cp10_g5

0x0004,

0xf7f3,	// (0x0004289c) popup_clock_analogue_window_cp10_g

0x89c7,	// (0x0003ba70) popup_clock_analogue_window_cp10_t1

0x89f8,	// (0x0003baa1) clock_digital_number_pane_cp10_ParamLimits

0x89f8,	// (0x0003baa1) clock_digital_number_pane_cp10

0x8a10,	// (0x0003bab9) clock_digital_number_pane_cp11_ParamLimits

0x8a10,	// (0x0003bab9) clock_digital_number_pane_cp11

0x8a28,	// (0x0003bad1) clock_digital_number_pane_cp12_ParamLimits

0x8a28,	// (0x0003bad1) clock_digital_number_pane_cp12

0x8a40,	// (0x0003bae9) clock_digital_number_pane_cp13_ParamLimits

0x8a40,	// (0x0003bae9) clock_digital_number_pane_cp13

0x8a58,	// (0x0003bb01) clock_digital_separator_pane_cp10_ParamLimits

0x8a58,	// (0x0003bb01) clock_digital_separator_pane_cp10

0x8a70,	// (0x0003bb19) popup_clock_digital_window_cp02_t1_ParamLimits

0x8a70,	// (0x0003bb19) popup_clock_digital_window_cp02_t1

0xc4bd,	// (0x0003f566) clock_digital_number_pane_cp10_g1

0xc4bd,	// (0x0003f566) clock_digital_number_pane_cp10_g2

0x0001,

0xf80e,	// (0x000428b7) clock_digital_number_pane_cp10_g

0xc4bd,	// (0x0003f566) clock_digital_separator_pane_cp10_g1

0xc4bd,	// (0x0003f566) clock_digital_separator_pane_g2_cp10

0xcfb4,	// (0x0004005d) navi_pane_vded_g4

0xcfbd,	// (0x00040066) navi_pane_vded_g5

0xcfc6,	// (0x0004006f) navi_pane_vded_t1

0x449d,	// (0x00037546) main_vded_pane

0x8b6d,	// (0x0003bc16) main_vded_pane_g1

0x8b79,	// (0x0003bc22) main_vded_pane_g2

0x8b83,	// (0x0003bc2c) main_vded_pane_g3

0x0002,

0xf813,	// (0x000428bc) main_vded_pane_g

0x8b8d,	// (0x0003bc36) main_vded_pane_t1

0x8b9b,	// (0x0003bc44) main_vded_pane_t2

0x0001,

0xf81a,	// (0x000428c3) main_vded_pane_t

0x8ba9,	// (0x0003bc52) vded_slider_pane

0x8bb3,	// (0x0003bc5c) vded_video_pane

0xee02,	// (0x00041eab) vded_video_pane_g1

0x8bbf,	// (0x0003bc68) vded_video_pane_g2

0xe896,	// (0x0004193f) vded_video_pane_g3

0x0002,

0xf81f,	// (0x000428c8) vded_video_pane_g

0xee0c,	// (0x00041eb5) vded_slider_pane_g1

0xe5db,	// (0x00041684) vded_slider_pane_g2

0xee15,	// (0x00041ebe) vded_slider_pane_g3

0xee1e,	// (0x00041ec7) vded_slider_pane_g4

0xee27,	// (0x00041ed0) vded_slider_pane_g5

0x0004,

0xf826,	// (0x000428cf) vded_slider_pane_g

0x86a3,	// (0x0003b74c) mup3_rocker_pane_ParamLimits

0x86a3,	// (0x0003b74c) mup3_rocker_pane

0x8bc8,	// (0x0003bc71) mup3_control_keys_pane_g1

0x8bd0,	// (0x0003bc79) mup3_control_keys_pane_g2

0x8bd8,	// (0x0003bc81) mup3_control_keys_pane_g3

0x8be0,	// (0x0003bc89) mup3_control_keys_pane_g4

0x0003,

0xf831,	// (0x000428da) mup3_control_keys_pane_g

0x472d,	// (0x000377d6) popup_toolbar2_fixed_window_cp01_ParamLimits

0x472d,	// (0x000377d6) popup_toolbar2_fixed_window_cp01

0x86bf,	// (0x0003b768) popup_toolbar2_fixed_window_cp02_ParamLimits

0x86bf,	// (0x0003b768) popup_toolbar2_fixed_window_cp02

0xd773,	// (0x0004081c) popup_call2_audio_second_window_t4_ParamLimits

0xd773,	// (0x0004081c) popup_call2_audio_second_window_t4

0xdcc5,	// (0x00040d6e) popup_call2_audio_first_window_t6_ParamLimits

0xdcc5,	// (0x00040d6e) popup_call2_audio_first_window_t6

0xdf5b,	// (0x00041004) popup_call2_audio_out_window_t6_ParamLimits

0xdf5b,	// (0x00041004) popup_call2_audio_out_window_t6

0x449d,	// (0x00037546) main_vitu_pane

0x8bf0,	// (0x0003bc99) aid_size_cell_itu_ParamLimits

0x8bf0,	// (0x0003bc99) aid_size_cell_itu

0x4755,	// (0x000377fe) bg_popup_window_pane_cp08_ParamLimits

0x4755,	// (0x000377fe) bg_popup_window_pane_cp08

0x8bfe,	// (0x0003bca7) field_vitu_entry_pane_ParamLimits

0x8bfe,	// (0x0003bca7) field_vitu_entry_pane

0x8c0d,	// (0x0003bcb6) grid_vitu_function_pane_ParamLimits

0x8c0d,	// (0x0003bcb6) grid_vitu_function_pane

0x8c1d,	// (0x0003bcc6) grid_vitu_itu_pane_ParamLimits

0x8c1d,	// (0x0003bcc6) grid_vitu_itu_pane

0x8c2d,	// (0x0003bcd6) cell_vitu_itu_pane_ParamLimits

0x8c2d,	// (0x0003bcd6) cell_vitu_itu_pane

0x8c44,	// (0x0003bced) cell_vitu_function_pane_ParamLimits

0x8c44,	// (0x0003bced) cell_vitu_function_pane

0x75df,	// (0x0003a688) bg_popup_sub_pane_cp08_ParamLimits

0x75df,	// (0x0003a688) bg_popup_sub_pane_cp08

0x8c58,	// (0x0003bd01) field_vitu_entry_pane_t1_ParamLimits

0x8c58,	// (0x0003bd01) field_vitu_entry_pane_t1

0xee48,	// (0x00041ef1) field_vitu_entry_pane_t2_ParamLimits

0xee48,	// (0x00041ef1) field_vitu_entry_pane_t2

0x0001,

0xf83f,	// (0x000428e8) field_vitu_entry_pane_t_ParamLimits

0xf83f,	// (0x000428e8) field_vitu_entry_pane_t

0xee65,	// (0x00041f0e) bg_button_pane_cp05_ParamLimits

0xee65,	// (0x00041f0e) bg_button_pane_cp05

0x8c72,	// (0x0003bd1b) cell_vitu_itu_pane_g1

0x8c8a,	// (0x0003bd33) cell_vitu_itu_pane_t1_ParamLimits

0x8c8a,	// (0x0003bd33) cell_vitu_itu_pane_t1

0x8c9c,	// (0x0003bd45) cell_vitu_itu_pane_t2_ParamLimits

0x8c9c,	// (0x0003bd45) cell_vitu_itu_pane_t2

0x0002,

0xf844,	// (0x000428ed) cell_vitu_itu_pane_t_ParamLimits

0xf844,	// (0x000428ed) cell_vitu_itu_pane_t

0xee73,	// (0x00041f1c) bg_button_pane_cp07

0x8cd1,	// (0x0003bd7a) cell_vitu_function_pane_g1

0x4ab3,	// (0x00037b5c) main_calc_pane_g1

0x44e3,	// (0x0003758c) aid_visual_content_pane

0x449d,	// (0x00037546) main_vradio_pane

0x8cda,	// (0x0003bd83) main_vradio_pane_g1_ParamLimits

0x8cda,	// (0x0003bd83) main_vradio_pane_g1

0xee7d,	// (0x00041f26) main_vradio_pane_g2_ParamLimits

0xee7d,	// (0x00041f26) main_vradio_pane_g2

0x0001,

0xf84b,	// (0x000428f4) main_vradio_pane_g_ParamLimits

0xf84b,	// (0x000428f4) main_vradio_pane_g

0x8ce8,	// (0x0003bd91) main_vradio_pane_t1_ParamLimits

0x8ce8,	// (0x0003bd91) main_vradio_pane_t1

0x8cfa,	// (0x0003bda3) main_vradio_pane_t2_ParamLimits

0x8cfa,	// (0x0003bda3) main_vradio_pane_t2

0xee8a,	// (0x00041f33) main_vradio_pane_t3_ParamLimits

0xee8a,	// (0x00041f33) main_vradio_pane_t3

0x0002,

0xf850,	// (0x000428f9) main_vradio_pane_t_ParamLimits

0xf850,	// (0x000428f9) main_vradio_pane_t

0x8d0c,	// (0x0003bdb5) vradio_rocker_control_pane_ParamLimits

0x8d0c,	// (0x0003bdb5) vradio_rocker_control_pane

0x8d18,	// (0x0003bdc1) vradio_station_info_pane_ParamLimits

0x8d18,	// (0x0003bdc1) vradio_station_info_pane

0xee9e,	// (0x00041f47) vradio_frequency_info_pane_ParamLimits

0xee9e,	// (0x00041f47) vradio_frequency_info_pane

0xe896,	// (0x0004193f) vradio_station_info_pane_g1

0xeead,	// (0x00041f56) vradio_station_info_pane_t1_ParamLimits

0xeead,	// (0x00041f56) vradio_station_info_pane_t1

0xeecf,	// (0x00041f78) vradio_station_info_pane_t2_ParamLimits

0xeecf,	// (0x00041f78) vradio_station_info_pane_t2

0x0001,

0xf857,	// (0x00042900) vradio_station_info_pane_t_ParamLimits

0xf857,	// (0x00042900) vradio_station_info_pane_t

0xeee1,	// (0x00041f8a) vradio_tuning_pane

0xeee9,	// (0x00041f92) vradio_rocker_control_pane_g1

0xeef1,	// (0x00041f9a) vradio_rocker_control_pane_g2

0xeef9,	// (0x00041fa2) vradio_rocker_control_pane_g3

0xef01,	// (0x00041faa) vradio_rocker_control_pane_g4

0xef09,	// (0x00041fb2) vradio_rocker_control_pane_g5

0x0004,

0xf85c,	// (0x00042905) vradio_rocker_control_pane_g

0x8d25,	// (0x0003bdce) vradio_frequency_info_pane_g1

0xef11,	// (0x00041fba) vradio_frequency_info_pane_t1_ParamLimits

0xef11,	// (0x00041fba) vradio_frequency_info_pane_t1

0x8d2f,	// (0x0003bdd8) vradio_tuning_pane_g1

0x8d3a,	// (0x0003bde3) vradio_tuning_pane_t1

0x452c,	// (0x000375d5) area_side_right_pane_ParamLimits

0x452c,	// (0x000375d5) area_side_right_pane

0xe3da,	// (0x00041483) status_small_pane_g1

0xe3e2,	// (0x0004148b) status_small_pane_g2

0xe3eb,	// (0x00041494) status_small_pane_g3

0xe3f4,	// (0x0004149d) status_small_pane_g4

0x0003,

0xf61c,	// (0x000426c5) status_small_pane_g

0xe3fd,	// (0x000414a6) status_small_pane_t1

0x449d,	// (0x00037546) main_video3_pane

0xef25,	// (0x00041fce) cams_zoom_vslider_pane

0xef2d,	// (0x00041fd6) image3_wide_pane_ParamLimits

0xef2d,	// (0x00041fd6) image3_wide_pane

0xef47,	// (0x00041ff0) image3_wide_small_pane

0xef53,	// (0x00041ffc) main_video3_pane_g1_ParamLimits

0xef53,	// (0x00041ffc) main_video3_pane_g1

0xef6f,	// (0x00042018) main_video3_pane_g2_ParamLimits

0xef6f,	// (0x00042018) main_video3_pane_g2

0x0001,

0xf867,	// (0x00042910) main_video3_pane_g_ParamLimits

0xf867,	// (0x00042910) main_video3_pane_g

0xef8b,	// (0x00042034) main_video3_pane_t1_ParamLimits

0xef8b,	// (0x00042034) main_video3_pane_t1

0xefb6,	// (0x0004205f) main_video3_pane_t2_ParamLimits

0xefb6,	// (0x0004205f) main_video3_pane_t2

0xefe3,	// (0x0004208c) main_video3_pane_t3_ParamLimits

0xefe3,	// (0x0004208c) main_video3_pane_t3

0x0002,

0xf86c,	// (0x00042915) main_video3_pane_t_ParamLimits

0xf86c,	// (0x00042915) main_video3_pane_t

0xf010,	// (0x000420b9) cams_zoom_vslider_pane_g1

0xf019,	// (0x000420c2) cams_zoom_vslider_pane_g2

0x0001,

0xf873,	// (0x0004291c) cams_zoom_vslider_pane_g

0xf021,	// (0x000420ca) small_slider_vertical_pane

0xe896,	// (0x0004193f) small_slider_vertical_pane_g1

0xe896,	// (0x0004193f) small_slider_vertical_pane_g2

0xf029,	// (0x000420d2) small_slider_vertical_pane_g3

0x0002,

0xf878,	// (0x00042921) small_slider_vertical_pane_g

0x449d,	// (0x00037546) main_hwr_training_pane

0xf032,	// (0x000420db) hwr_training_instruct_pane_ParamLimits

0xf032,	// (0x000420db) hwr_training_instruct_pane

0x8d49,	// (0x0003bdf2) hwr_training_navi_pane_ParamLimits

0x8d49,	// (0x0003bdf2) hwr_training_navi_pane

0x8d63,	// (0x0003be0c) hwr_training_write_pane_ParamLimits

0x8d63,	// (0x0003be0c) hwr_training_write_pane

0x449d,	// (0x00037546) bg_frame_shadow_pane

0xf069,	// (0x00042112) hwr_training_write_pane_g1

0xf071,	// (0x0004211a) hwr_training_write_pane_g2

0xf079,	// (0x00042122) hwr_training_write_pane_g3

0xf081,	// (0x0004212a) hwr_training_write_pane_g4

0xf089,	// (0x00042132) hwr_training_write_pane_g5

0xf091,	// (0x0004213a) hwr_training_write_pane_g6

0xf099,	// (0x00042142) hwr_training_write_pane_g7

0x0006,

0xf87f,	// (0x00042928) hwr_training_write_pane_g

0x8d9b,	// (0x0003be44) hwr_training_navi_pane_g1_ParamLimits

0x8d9b,	// (0x0003be44) hwr_training_navi_pane_g1

0x8dad,	// (0x0003be56) hwr_training_navi_pane_g2_ParamLimits

0x8dad,	// (0x0003be56) hwr_training_navi_pane_g2

0x8dbf,	// (0x0003be68) hwr_training_navi_pane_g3_ParamLimits

0x8dbf,	// (0x0003be68) hwr_training_navi_pane_g3

0x8dcf,	// (0x0003be78) hwr_training_navi_pane_g4_ParamLimits

0x8dcf,	// (0x0003be78) hwr_training_navi_pane_g4

0x0004,

0xf88e,	// (0x00042937) hwr_training_navi_pane_g_ParamLimits

0xf88e,	// (0x00042937) hwr_training_navi_pane_g

0x8de9,	// (0x0003be92) hwr_training_navi_pane_t1

0x8df7,	// (0x0003bea0) list_single_hwr_training_instruct_pane_ParamLimits

0x8df7,	// (0x0003bea0) list_single_hwr_training_instruct_pane

0xf0a1,	// (0x0004214a) list_single_hwr_training_instruct_pane_t1

0xe7d6,	// (0x0004187f) bg_frame_shadow_pane_g1

0xf0b0,	// (0x00042159) bg_frame_shadow_pane_g2

0xf0b8,	// (0x00042161) bg_frame_shadow_pane_g3

0xf0c0,	// (0x00042169) bg_frame_shadow_pane_g4

0xf0c8,	// (0x00042171) bg_frame_shadow_pane_g5

0xf0d0,	// (0x00042179) bg_frame_shadow_pane_g6

0xf0d8,	// (0x00042181) bg_frame_shadow_pane_g7

0xc65b,	// (0x0003f704) bg_frame_shadow_pane_g8

0x0007,

0xf899,	// (0x00042942) bg_frame_shadow_pane_g

0x449d,	// (0x00037546) main_video_tele_dialer_pane

0x8e16,	// (0x0003bebf) aid_size_cell_video_keypad_ParamLimits

0x8e16,	// (0x0003bebf) aid_size_cell_video_keypad

0x8e26,	// (0x0003becf) grid_video_dialer_keypad_pane_ParamLimits

0x8e26,	// (0x0003becf) grid_video_dialer_keypad_pane

0x8e5a,	// (0x0003bf03) video_down_pane_cp_ParamLimits

0x8e5a,	// (0x0003bf03) video_down_pane_cp

0x8e84,	// (0x0003bf2d) cell_video_dialer_keypad_pane_ParamLimits

0x8e84,	// (0x0003bf2d) cell_video_dialer_keypad_pane

0xf0e0,	// (0x00042189) bg_button_pane_cp08_ParamLimits

0xf0e0,	// (0x00042189) bg_button_pane_cp08

0x8e9b,	// (0x0003bf44) cell_video_dialer_keypad_pane_g1_ParamLimits

0x8e9b,	// (0x0003bf44) cell_video_dialer_keypad_pane_g1

0x8697,	// (0x0003b740) mup3_rocker2_pane_ParamLimits

0x8697,	// (0x0003b740) mup3_rocker2_pane

0xe896,	// (0x0004193f) mup3_rocker2_pane_g1

0x75ed,	// (0x0003a696) main_dialer2_pane

0x449d,	// (0x00037546) main_mp4_pane

0x8ede,	// (0x0003bf87) main_mp4_pane_g1_ParamLimits

0x8ede,	// (0x0003bf87) main_mp4_pane_g1

0x8eec,	// (0x0003bf95) main_mp4_pane_g2_ParamLimits

0x8eec,	// (0x0003bf95) main_mp4_pane_g2

0x8efa,	// (0x0003bfa3) main_mp4_pane_g3_ParamLimits

0x8efa,	// (0x0003bfa3) main_mp4_pane_g3

0x8f4d,	// (0x0003bff6) main_mp4_pane_g4_ParamLimits

0x8f4d,	// (0x0003bff6) main_mp4_pane_g4

0x8f67,	// (0x0003c010) main_mp4_pane_g5_ParamLimits

0x8f67,	// (0x0003c010) main_mp4_pane_g5

0x0005,

0xf8b9,	// (0x00042962) main_mp4_pane_g_ParamLimits

0xf8b9,	// (0x00042962) main_mp4_pane_g

0x8f9b,	// (0x0003c044) main_mp4_pane_t1_ParamLimits

0x8f9b,	// (0x0003c044) main_mp4_pane_t1

0x8ff7,	// (0x0003c0a0) main_mp4_pane_t2_ParamLimits

0x8ff7,	// (0x0003c0a0) main_mp4_pane_t2

0x007c,	// (0x00033125) main_mp4_pane_t3_ParamLimits

0x007c,	// (0x00033125) main_mp4_pane_t3

0x9049,	// (0x0003c0f2) main_mp4_pane_t4_ParamLimits

0x9049,	// (0x0003c0f2) main_mp4_pane_t4

0x0003,

0xf8c6,	// (0x0004296f) main_mp4_pane_t_ParamLimits

0xf8c6,	// (0x0004296f) main_mp4_pane_t

0x9089,	// (0x0003c132) mp4_progress_pane_ParamLimits

0x9089,	// (0x0003c132) mp4_progress_pane

0x90d3,	// (0x0003c17c) mp4_rocker_pane_ParamLimits

0x90d3,	// (0x0003c17c) mp4_rocker_pane

0x0150,	// (0x000331f9) mp4_progress_pane_t1

0x0169,	// (0x00033212) mp4_progress_pane_t2

0x0001,

0xf8cf,	// (0x00042978) mp4_progress_pane_t

0x0182,	// (0x0003322b) mup_progress_pane_cp04

0xe896,	// (0x0004193f) mp4_rocker_pane_g1

0x90f5,	// (0x0003c19e) aid_cell_size_keypad2_ParamLimits

0x90f5,	// (0x0003c19e) aid_cell_size_keypad2

0x9105,	// (0x0003c1ae) dialer2_ne_pane_ParamLimits

0x9105,	// (0x0003c1ae) dialer2_ne_pane

0x9111,	// (0x0003c1ba) grid_dialer2_keypad_pane_ParamLimits

0x9111,	// (0x0003c1ba) grid_dialer2_keypad_pane

0x0cbf,	// (0x00033d68) bg_popup_call_pane_cp07_ParamLimits

0x0cbf,	// (0x00033d68) bg_popup_call_pane_cp07

0x911f,	// (0x0003c1c8) dialer2_ne_pane_t1_ParamLimits

0x911f,	// (0x0003c1c8) dialer2_ne_pane_t1

0x9144,	// (0x0003c1ed) cell_dialer2_keypad_pane_ParamLimits

0x9144,	// (0x0003c1ed) cell_dialer2_keypad_pane

0x01aa,	// (0x00033253) bg_button_pane_pane_cp04_ParamLimits

0x01aa,	// (0x00033253) bg_button_pane_pane_cp04

0x915b,	// (0x0003c204) cell_dialer2_keypad_pane_g1_ParamLimits

0x915b,	// (0x0003c204) cell_dialer2_keypad_pane_g1

0x55a5,	// (0x0003864e) aid_placing_vt_set_content_ParamLimits

0x55a5,	// (0x0003864e) aid_placing_vt_set_content

0x55cd,	// (0x00038676) aid_placing_vt_set_title_ParamLimits

0x55cd,	// (0x00038676) aid_placing_vt_set_title

0x449d,	// (0x00037546) main_image3_pane

0x91f5,	// (0x0003c29e) area_side_right_pane_cp01_ParamLimits

0x91f5,	// (0x0003c29e) area_side_right_pane_cp01

0x12ad,	// (0x00034356) main_image3_pane_g1_ParamLimits

0x12ad,	// (0x00034356) main_image3_pane_g1

0x9224,	// (0x0003c2cd) main_image3_pane_g2_ParamLimits

0x9224,	// (0x0003c2cd) main_image3_pane_g2

0x923d,	// (0x0003c2e6) main_image3_pane_g3_ParamLimits

0x923d,	// (0x0003c2e6) main_image3_pane_g3

0x9256,	// (0x0003c2ff) main_image3_pane_g4_ParamLimits

0x9256,	// (0x0003c2ff) main_image3_pane_g4

0x0003,

0xf8de,	// (0x00042987) main_image3_pane_g_ParamLimits

0xf8de,	// (0x00042987) main_image3_pane_g

0x926f,	// (0x0003c318) main_image3_pane_t1_ParamLimits

0x926f,	// (0x0003c318) main_image3_pane_t1

0x9294,	// (0x0003c33d) main_image3_pane_t2_ParamLimits

0x9294,	// (0x0003c33d) main_image3_pane_t2

0x92b3,	// (0x0003c35c) main_image3_pane_t3_ParamLimits

0x92b3,	// (0x0003c35c) main_image3_pane_t3

0x0003,

0xf8e7,	// (0x00042990) main_image3_pane_t_ParamLimits

0xf8e7,	// (0x00042990) main_image3_pane_t

0x4755,	// (0x000377fe) grid_sctrl_middle_pane_cp01_ParamLimits

0x4755,	// (0x000377fe) grid_sctrl_middle_pane_cp01

0x9314,	// (0x0003c3bd) cell_sctrl_middle_pane_cp01_ParamLimits

0x9314,	// (0x0003c3bd) cell_sctrl_middle_pane_cp01

0x9325,	// (0x0003c3ce) cell_sctrl_middle_pane_cp01_g1_ParamLimits

0x9325,	// (0x0003c3ce) cell_sctrl_middle_pane_cp01_g1

0x449d,	// (0x00037546) main_call4_pane

0x9332,	// (0x0003c3db) aid_size_button_call4_ParamLimits

0x9332,	// (0x0003c3db) aid_size_button_call4

0x9364,	// (0x0003c40d) call4_windows_pane_ParamLimits

0x9364,	// (0x0003c40d) call4_windows_pane

0x9380,	// (0x0003c429) grid_call4_button_pane_ParamLimits

0x9380,	// (0x0003c429) grid_call4_button_pane

0x01ea,	// (0x00033293) call4_windows_conf_pane

0x0205,	// (0x000332ae) popup_call4_audio_first_window_ParamLimits

0x0205,	// (0x000332ae) popup_call4_audio_first_window

0x0253,	// (0x000332fc) popup_call4_audio_second_window_ParamLimits

0x0253,	// (0x000332fc) popup_call4_audio_second_window

0x0269,	// (0x00033312) popup_call4_audio_wait_window_ParamLimits

0x0269,	// (0x00033312) popup_call4_audio_wait_window

0x93a4,	// (0x0003c44d) cell_call4_button_pane_ParamLimits

0x93a4,	// (0x0003c44d) cell_call4_button_pane

0x93c7,	// (0x0003c470) bg_button_pane_cp09_ParamLimits

0x93c7,	// (0x0003c470) bg_button_pane_cp09

0x93d3,	// (0x0003c47c) cell_call4_button_pane_g1_ParamLimits

0x93d3,	// (0x0003c47c) cell_call4_button_pane_g1

0x93e0,	// (0x0003c489) cell_call4_button_pane_t1_ParamLimits

0x93e0,	// (0x0003c489) cell_call4_button_pane_t1

0x02b1,	// (0x0003335a) popup_call4_audio_conf_window_ParamLimits

0x02b1,	// (0x0003335a) popup_call4_audio_conf_window

0x86cc,	// (0x0003b775) mup3_progress_pane_t1_ParamLimits

0x86e3,	// (0x0003b78c) mup3_progress_pane_t2_ParamLimits

0xeb41,	// (0x00041bea) mup3_progress_pane_t3_ParamLimits

0xf7c0,	// (0x00042869) mup3_progress_pane_t_ParamLimits

0xeb58,	// (0x00041c01) mup_progress_pane_cp03_ParamLimits

0x8be8,	// (0x0003bc91) mup3_control_keys_pane_g4_copy1

0x90b7,	// (0x0003c160) mp4_rocker2_pane_ParamLimits

0x90b7,	// (0x0003c160) mp4_rocker2_pane

0x02d3,	// (0x0003337c) mp4_rocker2_pane_g1

0x02cb,	// (0x00033374) mp4_rocker2_pane_g2

0x93f2,	// (0x0003c49b) mp4_rocker2_pane_g3

0x93fa,	// (0x0003c4a3) mp4_rocker2_pane_g4

0x9402,	// (0x0003c4ab) mp4_rocker2_pane_g5

0x0004,

0xf8f0,	// (0x00042999) mp4_rocker2_pane_g

0x449d,	// (0x00037546) main_camera4_pane

0x449d,	// (0x00037546) main_video4_pane

0x8e36,	// (0x0003bedf) main_video_tele_dialer_pane_t1_ParamLimits

0x8e36,	// (0x0003bedf) main_video_tele_dialer_pane_t1

0x8e48,	// (0x0003bef1) main_video_tele_dialer_pane_t2_ParamLimits

0x8e48,	// (0x0003bef1) main_video_tele_dialer_pane_t2

0x0001,

0xf8aa,	// (0x00042953) main_video_tele_dialer_pane_t_ParamLimits

0xf8aa,	// (0x00042953) main_video_tele_dialer_pane_t

0x9422,	// (0x0003c4cb) cam4_autofocus_pane_ParamLimits

0x9422,	// (0x0003c4cb) cam4_autofocus_pane

0x943a,	// (0x0003c4e3) cam4_image_uncrop_pane_ParamLimits

0x943a,	// (0x0003c4e3) cam4_image_uncrop_pane

0x9453,	// (0x0003c4fc) cam4_indicators_pane_ParamLimits

0x9453,	// (0x0003c4fc) cam4_indicators_pane

0x946f,	// (0x0003c518) main_camera4_pane_g1_ParamLimits

0x946f,	// (0x0003c518) main_camera4_pane_g1

0x947b,	// (0x0003c524) main_camera4_pane_g2_ParamLimits

0x947b,	// (0x0003c524) main_camera4_pane_g2

0x947b,	// (0x0003c524) main_camera4_pane_g3_ParamLimits

0x947b,	// (0x0003c524) main_camera4_pane_g3

0x9487,	// (0x0003c530) main_camera4_pane_g4_ParamLimits

0x9487,	// (0x0003c530) main_camera4_pane_g4

0x9493,	// (0x0003c53c) main_camera4_pane_g5_ParamLimits

0x9493,	// (0x0003c53c) main_camera4_pane_g5

0x0005,

0xf8fb,	// (0x000429a4) main_camera4_pane_g_ParamLimits

0xf8fb,	// (0x000429a4) main_camera4_pane_g

0x94ad,	// (0x0003c556) main_camera4_pane_t1_ParamLimits

0x94ad,	// (0x0003c556) main_camera4_pane_t1

0xeac6,	// (0x00041b6f) bg_tb_trans_pane_cp06

0x94ff,	// (0x0003c5a8) cam4_indicators_pane_g1

0x950c,	// (0x0003c5b5) cam4_indicators_pane_g2

0x0002,

0xf916,	// (0x000429bf) cam4_indicators_pane_g

0x952c,	// (0x0003c5d5) cam4_indicators_pane_t1

0x9556,	// (0x0003c5ff) main_video4_pane_g1_ParamLimits

0x9556,	// (0x0003c5ff) main_video4_pane_g1

0x9562,	// (0x0003c60b) main_video4_pane_g2_ParamLimits

0x9562,	// (0x0003c60b) main_video4_pane_g2

0x956e,	// (0x0003c617) main_video4_pane_g3_ParamLimits

0x956e,	// (0x0003c617) main_video4_pane_g3

0x957a,	// (0x0003c623) main_video4_pane_g4_ParamLimits

0x957a,	// (0x0003c623) main_video4_pane_g4

0x0004,

0xf91d,	// (0x000429c6) main_video4_pane_g_ParamLimits

0xf91d,	// (0x000429c6) main_video4_pane_g

0x959c,	// (0x0003c645) vid4_indicators_pane_ParamLimits

0x959c,	// (0x0003c645) vid4_indicators_pane

0x95ba,	// (0x0003c663) video4_image_uncrop_cif_pane_ParamLimits

0x95ba,	// (0x0003c663) video4_image_uncrop_cif_pane

0x95c9,	// (0x0003c672) video4_image_uncrop_nhd_pane_ParamLimits

0x95c9,	// (0x0003c672) video4_image_uncrop_nhd_pane

0x943a,	// (0x0003c4e3) video4_image_uncrop_vga_pane_ParamLimits

0x943a,	// (0x0003c4e3) video4_image_uncrop_vga_pane

0x75df,	// (0x0003a688) bg_tb_trans_pane_cp07

0x94ff,	// (0x0003c5a8) vid4_indicators_pane_g1

0x95e2,	// (0x0003c68b) vid4_indicators_pane_g2

0x95ef,	// (0x0003c698) vid4_indicators_pane_g3

0x0004,

0xf928,	// (0x000429d1) vid4_indicators_pane_g

0x961c,	// (0x0003c6c5) vid4_indicators_pane_t1

0x9636,	// (0x0003c6df) cam4_autofocus_pane_g1

0x963e,	// (0x0003c6e7) cam4_autofocus_pane_g2

0x9646,	// (0x0003c6ef) cam4_autofocus_pane_g3

0x0002,

0xf933,	// (0x000429dc) cam4_autofocus_pane_g

0x964e,	// (0x0003c6f7) cam4_autofocus_pane_g3_copy1

0x8e68,	// (0x0003bf11) video_down_pane_cp_t1

0x8e76,	// (0x0003bf1f) video_down_pane_cp_t2

0x0001,

0xf8af,	// (0x00042958) video_down_pane_cp_t

0x4755,	// (0x000377fe) popup_vitu2_window_ParamLimits

0x4755,	// (0x000377fe) popup_vitu2_window

0x9656,	// (0x0003c6ff) aid_size_cell2_itu2_ParamLimits

0x9656,	// (0x0003c6ff) aid_size_cell2_itu2

0x9678,	// (0x0003c721) aid_size_cell_itu2_ParamLimits

0x9678,	// (0x0003c721) aid_size_cell_itu2

0x0cbf,	// (0x00033d68) bg_popup_window_pane_cp09_ParamLimits

0x0cbf,	// (0x00033d68) bg_popup_window_pane_cp09

0x96bc,	// (0x0003c765) field_vitu2_entry_pane_ParamLimits

0x96bc,	// (0x0003c765) field_vitu2_entry_pane

0x96dc,	// (0x0003c785) grid_vitu2_function_pane_ParamLimits

0x96dc,	// (0x0003c785) grid_vitu2_function_pane

0x9720,	// (0x0003c7c9) grid_vitu2_itu_pane_ParamLimits

0x9720,	// (0x0003c7c9) grid_vitu2_itu_pane

0x9794,	// (0x0003c83d) cell_vitu2_itu_pane_ParamLimits

0x9794,	// (0x0003c83d) cell_vitu2_itu_pane

0x97ab,	// (0x0003c854) cell_vitu2_function_pane_ParamLimits

0x97ab,	// (0x0003c854) cell_vitu2_function_pane

0x03a4,	// (0x0003344d) bg_popup_call_pane_cp08_ParamLimits

0x03a4,	// (0x0003344d) bg_popup_call_pane_cp08

0x03bd,	// (0x00033466) field_vitu2_entry_pane_g1

0x03c9,	// (0x00033472) field_vitu2_entry_pane_g2

0x0002,

0xf93a,	// (0x000429e3) field_vitu2_entry_pane_g

0x361d,	// (0x000366c6) field_vitu2_entry_pane_t1_ParamLimits

0x361d,	// (0x000366c6) field_vitu2_entry_pane_t1

0x363a,	// (0x000366e3) field_vitu2_entry_pane_t2_ParamLimits

0x363a,	// (0x000366e3) field_vitu2_entry_pane_t2

0x0001,

0xf941,	// (0x000429ea) field_vitu2_entry_pane_t_ParamLimits

0xf941,	// (0x000429ea) field_vitu2_entry_pane_t

0x97ef,	// (0x0003c898) bg_button_pane_cp010_ParamLimits

0x97ef,	// (0x0003c898) bg_button_pane_cp010

0x97fd,	// (0x0003c8a6) cell_vitu2_itu_pane_g1

0x981b,	// (0x0003c8c4) cell_vitu2_itu_pane_t1_ParamLimits

0x981b,	// (0x0003c8c4) cell_vitu2_itu_pane_t1

0x3657,	// (0x00036700) cell_vitu2_itu_pane_t2_ParamLimits

0x3657,	// (0x00036700) cell_vitu2_itu_pane_t2

0x0002,

0xf94b,	// (0x000429f4) cell_vitu2_itu_pane_t_ParamLimits

0xf94b,	// (0x000429f4) cell_vitu2_itu_pane_t

0x75df,	// (0x0003a688) bg_button_pane_cp011

0x986d,	// (0x0003c916) cell_vitu2_function_pane_g1

0x449d,	// (0x00037546) main_myfav_hc_pane

0x92f5,	// (0x0003c39e) popup_image3_note_pane_ParamLimits

0x92f5,	// (0x0003c39e) popup_image3_note_pane

0x9303,	// (0x0003c3ac) popup_image3_tool_bar_pane_ParamLimits

0x9303,	// (0x0003c3ac) popup_image3_tool_bar_pane

0x36c5,	// (0x0003676e) cell_vitu2_itu_pane_t3_ParamLimits

0x36c5,	// (0x0003676e) cell_vitu2_itu_pane_t3

0x449d,	// (0x00037546) bg_popup_trans_pane

0x0416,	// (0x000334bf) grid_image3_tool_bar_pane

0x0420,	// (0x000334c9) bg_popup_trans_pane_g1

0xc99a,	// (0x0003fa43) bg_popup_trans_pane_g2

0x0428,	// (0x000334d1) bg_popup_trans_pane_g3

0x0430,	// (0x000334d9) bg_popup_trans_pane_g4

0x0438,	// (0x000334e1) bg_popup_trans_pane_g5

0x0440,	// (0x000334e9) bg_popup_trans_pane_g6

0x0448,	// (0x000334f1) bg_popup_trans_pane_g7

0x0450,	// (0x000334f9) bg_popup_trans_pane_g8

0xc97a,	// (0x0003fa23) bg_popup_trans_pane_g9

0x0008,

0xf952,	// (0x000429fb) bg_popup_trans_pane_g

0x0458,	// (0x00033501) cell_image3_tool_bar_pane_ParamLimits

0x0458,	// (0x00033501) cell_image3_tool_bar_pane

0xe896,	// (0x0004193f) cell_image3_tool_bar_pane_g1

0x449d,	// (0x00037546) bg_popup_trans_pane_cp1

0x046e,	// (0x00033517) popup_image3_note_pane_t1

0x047c,	// (0x00033525) popup_image3_note_pane_t2

0x048a,	// (0x00033533) popup_image3_note_pane_t3

0x0002,

0xf965,	// (0x00042a0e) popup_image3_note_pane_t

0x049a,	// (0x00033543) popup_image3_note_pane_t3_copy1

0x9881,	// (0x0003c92a) bg_myfav_hc_instruction_pane_ParamLimits

0x9881,	// (0x0003c92a) bg_myfav_hc_instruction_pane

0x9899,	// (0x0003c942) cell_myfav_contact_pane_ParamLimits

0x9899,	// (0x0003c942) cell_myfav_contact_pane

0x98b3,	// (0x0003c95c) cell_myfav_contact_pane_cp1_ParamLimits

0x98b3,	// (0x0003c95c) cell_myfav_contact_pane_cp1

0x98cb,	// (0x0003c974) cell_myfav_contact_pane_cp2_ParamLimits

0x98cb,	// (0x0003c974) cell_myfav_contact_pane_cp2

0x98e3,	// (0x0003c98c) cell_myfav_contact_pane_cp3_ParamLimits

0x98e3,	// (0x0003c98c) cell_myfav_contact_pane_cp3

0x98fa,	// (0x0003c9a3) cell_myfav_contact_pane_cp4_ParamLimits

0x98fa,	// (0x0003c9a3) cell_myfav_contact_pane_cp4

0x9910,	// (0x0003c9b9) cell_myfav_contact_pane_cp5_ParamLimits

0x9910,	// (0x0003c9b9) cell_myfav_contact_pane_cp5

0x9924,	// (0x0003c9cd) cell_myfav_contact_pane_cp6_ParamLimits

0x9924,	// (0x0003c9cd) cell_myfav_contact_pane_cp6

0x9938,	// (0x0003c9e1) cell_myfav_contact_pane_cp7_ParamLimits

0x9938,	// (0x0003c9e1) cell_myfav_contact_pane_cp7

0x04a8,	// (0x00033551) listscroll_gen_pane_cp05

0x9950,	// (0x0003c9f9) main_myfav_hc_pane_g1_ParamLimits

0x9950,	// (0x0003c9f9) main_myfav_hc_pane_g1

0x996a,	// (0x0003ca13) main_myfav_hc_pane_g2_ParamLimits

0x996a,	// (0x0003ca13) main_myfav_hc_pane_g2

0x0002,

0xf96c,	// (0x00042a15) main_myfav_hc_pane_g_ParamLimits

0xf96c,	// (0x00042a15) main_myfav_hc_pane_g

0x999c,	// (0x0003ca45) main_myfav_hc_pane_t1_ParamLimits

0x999c,	// (0x0003ca45) main_myfav_hc_pane_t1

0x04b1,	// (0x0003355a) main_myfav_hc_pane_t2_ParamLimits

0x04b1,	// (0x0003355a) main_myfav_hc_pane_t2

0x04c3,	// (0x0003356c) main_myfav_hc_pane_t3_ParamLimits

0x04c3,	// (0x0003356c) main_myfav_hc_pane_t3

0x99b3,	// (0x0003ca5c) main_myfav_hc_pane_t4_ParamLimits

0x99b3,	// (0x0003ca5c) main_myfav_hc_pane_t4

0x0004,

0xf973,	// (0x00042a1c) main_myfav_hc_pane_t_ParamLimits

0xf973,	// (0x00042a1c) main_myfav_hc_pane_t

0xe896,	// (0x0004193f) bg_myfav_hc_instruction_pane_g1

0x04d5,	// (0x0003357e) cell_myfav_contact_pane_g1_ParamLimits

0x04d5,	// (0x0003357e) cell_myfav_contact_pane_g1

0x04d5,	// (0x0003357e) cell_myfav_contact_pane_g2_ParamLimits

0x04d5,	// (0x0003357e) cell_myfav_contact_pane_g2

0x04e1,	// (0x0003358a) cell_myfav_contact_pane_g3_ParamLimits

0x04e1,	// (0x0003358a) cell_myfav_contact_pane_g3

0xeb2b,	// (0x00041bd4) cell_myfav_contact_pane_g4_ParamLimits

0xeb2b,	// (0x00041bd4) cell_myfav_contact_pane_g4

0x04ee,	// (0x00033597) cell_myfav_contact_pane_g5_ParamLimits

0x04ee,	// (0x00033597) cell_myfav_contact_pane_g5

0x0004,

0xf97e,	// (0x00042a27) cell_myfav_contact_pane_g_ParamLimits

0xf97e,	// (0x00042a27) cell_myfav_contact_pane_g

0x9984,	// (0x0003ca2d) main_myfav_hc_pane_g3_ParamLimits

0x9984,	// (0x0003ca2d) main_myfav_hc_pane_g3

0x4666,	// (0x0003770f) popup_adpt_find_window

0x99dd,	// (0x0003ca86) afind_page_pane_ParamLimits

0x99dd,	// (0x0003ca86) afind_page_pane

0x99ea,	// (0x0003ca93) aid_size_cell_afind_ParamLimits

0x99ea,	// (0x0003ca93) aid_size_cell_afind

0x9a04,	// (0x0003caad) bg_popup_sub_pane_cp09_ParamLimits

0x9a04,	// (0x0003caad) bg_popup_sub_pane_cp09

0x9a11,	// (0x0003caba) find_pane_cp01_ParamLimits

0x9a11,	// (0x0003caba) find_pane_cp01

0x04fa,	// (0x000335a3) grid_afind_control_pane_ParamLimits

0x04fa,	// (0x000335a3) grid_afind_control_pane

0x9a1e,	// (0x0003cac7) grid_afind_pane_ParamLimits

0x9a1e,	// (0x0003cac7) grid_afind_pane

0x9a3a,	// (0x0003cae3) cell_afind_pane_ParamLimits

0x9a3a,	// (0x0003cae3) cell_afind_pane

0xe896,	// (0x0004193f) afind_page_pane_g1

0x9a86,	// (0x0003cb2f) afind_page_pane_g2

0x9a8f,	// (0x0003cb38) afind_page_pane_g3

0x0002,

0xf989,	// (0x00042a32) afind_page_pane_g

0x9a98,	// (0x0003cb41) afind_page_pane_t1

0x050e,	// (0x000335b7) cell_afind_grid_control_pane_ParamLimits

0x050e,	// (0x000335b7) cell_afind_grid_control_pane

0x01aa,	// (0x00033253) bg_button_pane_cp69_ParamLimits

0x01aa,	// (0x00033253) bg_button_pane_cp69

0x9ab8,	// (0x0003cb61) cell_afind_pane_g1_ParamLimits

0x9ab8,	// (0x0003cb61) cell_afind_pane_g1

0x9ac5,	// (0x0003cb6e) cell_afind_pane_t1_ParamLimits

0x9ac5,	// (0x0003cb6e) cell_afind_pane_t1

0xc791,	// (0x0003f83a) bg_button_pane_cp72

0x051d,	// (0x000335c6) cell_afind_grid_control_pane_g1

0x7157,	// (0x0003a200) aid_image_placing_area_ParamLimits

0x7157,	// (0x0003a200) aid_image_placing_area

0xee30,	// (0x00041ed9) field_vitu_entry_pane_g1_ParamLimits

0xee30,	// (0x00041ed9) field_vitu_entry_pane_g1

0xee3c,	// (0x00041ee5) field_vitu_entry_pane_g2_ParamLimits

0xee3c,	// (0x00041ee5) field_vitu_entry_pane_g2

0x0001,

0xf83a,	// (0x000428e3) field_vitu_entry_pane_g_ParamLimits

0xf83a,	// (0x000428e3) field_vitu_entry_pane_g

0x8c72,	// (0x0003bd1b) cell_vitu_itu_pane_g1_ParamLimits

0x8cb4,	// (0x0003bd5d) cell_vitu_itu_pane_t3_ParamLimits

0x8cb4,	// (0x0003bd5d) cell_vitu_itu_pane_t3

0x0150,	// (0x000331f9) mp4_progress_pane_t1_ParamLimits

0x0169,	// (0x00033212) mp4_progress_pane_t2_ParamLimits

0xf8cf,	// (0x00042978) mp4_progress_pane_t_ParamLimits

0x0182,	// (0x0003322b) mup_progress_pane_cp04_ParamLimits

0x99c7,	// (0x0003ca70) main_myfav_hc_pane_t5_ParamLimits

0x99c7,	// (0x0003ca70) main_myfav_hc_pane_t5

0x44ef,	// (0x00037598) aid_zoom_text_primary

0x4666,	// (0x0003770f) popup_adpt_find_window_ParamLimits

0x75df,	// (0x0003a688) main_cam_set_pane

0x9461,	// (0x0003c50a) cam4_zoom_pane_ParamLimits

0x9461,	// (0x0003c50a) cam4_zoom_pane

0x9ad7,	// (0x0003cb80) main_cam_set_pane_g1_ParamLimits

0x9ad7,	// (0x0003cb80) main_cam_set_pane_g1

0x9ae5,	// (0x0003cb8e) main_cam_set_pane_g2_ParamLimits

0x9ae5,	// (0x0003cb8e) main_cam_set_pane_g2

0x0001,

0xf990,	// (0x00042a39) main_cam_set_pane_g_ParamLimits

0xf990,	// (0x00042a39) main_cam_set_pane_g

0x9af1,	// (0x0003cb9a) main_cam_set_pane_t1_ParamLimits

0x9af1,	// (0x0003cb9a) main_cam_set_pane_t1

0x9b0d,	// (0x0003cbb6) main_cset_listscroll_pane_ParamLimits

0x9b0d,	// (0x0003cbb6) main_cset_listscroll_pane

0x9b3c,	// (0x0003cbe5) main_cset_slider_pane_ParamLimits

0x9b3c,	// (0x0003cbe5) main_cset_slider_pane

0x052e,	// (0x000335d7) main_cset_list_pane_ParamLimits

0x052e,	// (0x000335d7) main_cset_list_pane

0x053e,	// (0x000335e7) scroll_pane_cp028

0x9b5d,	// (0x0003cc06) aid_area_touch_slider

0x9b79,	// (0x0003cc22) cset_slider_pane

0x9ba3,	// (0x0003cc4c) main_cset_slider_pane_g1

0x9bb8,	// (0x0003cc61) main_cset_slider_pane_g2

0x0011,

0xf995,	// (0x00042a3e) main_cset_slider_pane_g

0x0577,	// (0x00033620) main_cset_slider_pane_t1

0x9c74,	// (0x0003cd1d) main_cset_slider_pane_t2

0x9c8e,	// (0x0003cd37) main_cset_slider_pane_t3

0x9ca8,	// (0x0003cd51) main_cset_slider_pane_t4

0x9cc2,	// (0x0003cd6b) main_cset_slider_pane_t5

0x9cde,	// (0x0003cd87) main_cset_slider_pane_t6

0x9cf3,	// (0x0003cd9c) main_cset_slider_pane_t7

0x000e,

0xf9ba,	// (0x00042a63) main_cset_slider_pane_t

0x9df7,	// (0x0003cea0) cset_list_set_pane_ParamLimits

0x9df7,	// (0x0003cea0) cset_list_set_pane

0x9e08,	// (0x0003ceb1) aid_position_infowindow_above

0x9e10,	// (0x0003ceb9) aid_position_infowindow_below

0x3712,	// (0x000367bb) cset_list_set_pane_g1_ParamLimits

0x3712,	// (0x000367bb) cset_list_set_pane_g1

0x371e,	// (0x000367c7) cset_list_set_pane_g3_ParamLimits

0x371e,	// (0x000367c7) cset_list_set_pane_g3

0x0001,

0xf9d9,	// (0x00042a82) cset_list_set_pane_g_ParamLimits

0xf9d9,	// (0x00042a82) cset_list_set_pane_g

0x372d,	// (0x000367d6) cset_list_set_pane_t1_ParamLimits

0x372d,	// (0x000367d6) cset_list_set_pane_t1

0x75df,	// (0x0003a688) list_highlight_pane_cp021_ParamLimits

0x75df,	// (0x0003a688) list_highlight_pane_cp021

0xd11c,	// (0x000401c5) cset_slider_pane_g1

0xd12e,	// (0x000401d7) cset_slider_pane_g2

0xd125,	// (0x000401ce) cset_slider_pane_g3

0x0002,

0xf9de,	// (0x00042a87) cset_slider_pane_g

0x9e18,	// (0x0003cec1) aid_area_touch_cam4_zoom

0x9e20,	// (0x0003cec9) cam4_zoom_cont_pane

0x9e28,	// (0x0003ced1) cam4_zoom_pane_g1

0x9e30,	// (0x0003ced9) cam4_zoom_pane_g2

0x9e38,	// (0x0003cee1) cam4_zoom_pane_g3

0x0002,

0xf9e5,	// (0x00042a8e) cam4_zoom_pane_g

0x1036,	// (0x000340df) cam4_zoom_cont_pane_g1

0x103f,	// (0x000340e8) cam4_zoom_cont_pane_g2

0x1048,	// (0x000340f1) cam4_zoom_cont_pane_g3

0x0002,

0xf9ec,	// (0x00042a95) cam4_zoom_cont_pane_g

0x934c,	// (0x0003c3f5) call4_image_pane_ParamLimits

0x934c,	// (0x0003c3f5) call4_image_pane

0x01ea,	// (0x00033293) call4_windows_conf_pane_ParamLimits

0x0231,	// (0x000332da) popup_call4_audio_in_window_ParamLimits

0x0231,	// (0x000332da) popup_call4_audio_in_window

0x449d,	// (0x00037546) bg_popup_call2_act_pane_cp02

0x02a9,	// (0x00033352) call4_list_conf_pane

0xe896,	// (0x0004193f) call4_image_pane_g1

0xe896,	// (0x0004193f) call4_image_pane_g2

0x0001,

0xf700,	// (0x000427a9) call4_image_pane_g

0x065e,	// (0x00033707) list_single_graphic_popup_conf4_pane_ParamLimits

0x065e,	// (0x00033707) list_single_graphic_popup_conf4_pane

0x449d,	// (0x00037546) list_highlight_pane_cp022

0x0673,	// (0x0003371c) list_single_graphic_popup_conf4_pane_g1

0xce16,	// (0x0003febf) list_single_graphic_popup_conf4_pane_g2

0x0001,

0xf9f3,	// (0x00042a9c) list_single_graphic_popup_conf4_pane_g

0x067b,	// (0x00033724) list_single_graphic_popup_conf4_pane_t1

0x5727,	// (0x000387d0) popup_vtel_slider_window_ParamLimits

0x5727,	// (0x000387d0) popup_vtel_slider_window

0x0198,	// (0x00033241) dialer2_ne_pane_t2_ParamLimits

0x0198,	// (0x00033241) dialer2_ne_pane_t2

0x0001,

0xf8d4,	// (0x0004297d) dialer2_ne_pane_t_ParamLimits

0xf8d4,	// (0x0004297d) dialer2_ne_pane_t

0x75df,	// (0x0003a688) bg_popup_sub_pane_cp010_ParamLimits

0x75df,	// (0x0003a688) bg_popup_sub_pane_cp010

0x9e40,	// (0x0003cee9) popup_vtel_slider_window_g1_ParamLimits

0x9e40,	// (0x0003cee9) popup_vtel_slider_window_g1

0x9e4c,	// (0x0003cef5) popup_vtel_slider_window_g2_ParamLimits

0x9e4c,	// (0x0003cef5) popup_vtel_slider_window_g2

0x0003,

0xf9f8,	// (0x00042aa1) popup_vtel_slider_window_g_ParamLimits

0xf9f8,	// (0x00042aa1) popup_vtel_slider_window_g

0x9e94,	// (0x0003cf3d) vtel_slider_pane_ParamLimits

0x9e94,	// (0x0003cf3d) vtel_slider_pane

0x9ea3,	// (0x0003cf4c) vtel_slider_pane_g1_ParamLimits

0x9ea3,	// (0x0003cf4c) vtel_slider_pane_g1

0x9eb0,	// (0x0003cf59) vtel_slider_pane_g2_ParamLimits

0x9eb0,	// (0x0003cf59) vtel_slider_pane_g2

0x9ebd,	// (0x0003cf66) vtel_slider_pane_g3_ParamLimits

0x9ebd,	// (0x0003cf66) vtel_slider_pane_g3

0x9ea3,	// (0x0003cf4c) vtel_slider_pane_g4_ParamLimits

0x9ea3,	// (0x0003cf4c) vtel_slider_pane_g4

0x9eca,	// (0x0003cf73) vtel_slider_pane_g5_ParamLimits

0x9eca,	// (0x0003cf73) vtel_slider_pane_g5

0x0004,

0xfa01,	// (0x00042aaa) vtel_slider_pane_g_ParamLimits

0xfa01,	// (0x00042aaa) vtel_slider_pane_g

0x449d,	// (0x00037546) main_gallery2_pane

0x969e,	// (0x0003c747) aid_size_row_itut2_dropdow_list_ParamLimits

0x969e,	// (0x0003c747) aid_size_row_itut2_dropdow_list

0x96fe,	// (0x0003c7a7) grid_vitu2_function_top_pane_ParamLimits

0x96fe,	// (0x0003c7a7) grid_vitu2_function_top_pane

0x9750,	// (0x0003c7f9) popup_vitu2_dropdown_list_window_ParamLimits

0x9750,	// (0x0003c7f9) popup_vitu2_dropdown_list_window

0x9770,	// (0x0003c819) popup_vitu2_match_list_window

0x9ed7,	// (0x0003cf80) cell_vitu2_function_top_pane_ParamLimits

0x9ed7,	// (0x0003cf80) cell_vitu2_function_top_pane

0x9ef7,	// (0x0003cfa0) cell_vitu2_function_top_pane_cp01_ParamLimits

0x9ef7,	// (0x0003cfa0) cell_vitu2_function_top_pane_cp01

0x9f15,	// (0x0003cfbe) cell_vitu2_function_top_wide_pane_ParamLimits

0x9f15,	// (0x0003cfbe) cell_vitu2_function_top_wide_pane

0x75df,	// (0x0003a688) bg_button_pane_cp012

0x9f33,	// (0x0003cfdc) cell_vitu2_function_top_pane_g1

0x9f42,	// (0x0003cfeb) bg_button_pane_cp013_ParamLimits

0x9f42,	// (0x0003cfeb) bg_button_pane_cp013

0x9f5e,	// (0x0003d007) cell_vitu2_function_top_wide_pane_g1_ParamLimits

0x9f5e,	// (0x0003d007) cell_vitu2_function_top_wide_pane_g1

0x4755,	// (0x000377fe) bg_popup_sub_pane_cp20

0x9f76,	// (0x0003d01f) list_vitu2_match_list_pane

0x0420,	// (0x000334c9) bg_popup_sub_pane_cp20_g1

0x0428,	// (0x000334d1) bg_popup_sub_pane_cp20_g2

0xc99a,	// (0x0003fa43) bg_popup_sub_pane_cp20_g3

0x0430,	// (0x000334d9) bg_popup_sub_pane_cp20_g4

0xc97a,	// (0x0003fa23) bg_popup_sub_pane_cp20_g5

0x06bb,	// (0x00033764) bg_popup_sub_pane_cp20_g6

0x0440,	// (0x000334e9) bg_popup_sub_pane_cp20_g7

0x0448,	// (0x000334f1) bg_popup_sub_pane_cp20_g8

0x0450,	// (0x000334f9) bg_popup_sub_pane_cp20_g9

0x0008,

0xfa0c,	// (0x00042ab5) bg_popup_sub_pane_cp20_g

0x9f8e,	// (0x0003d037) list_vitu2_match_list_item_pane_ParamLimits

0x9f8e,	// (0x0003d037) list_vitu2_match_list_item_pane

0x9fa0,	// (0x0003d049) list_vitu2_match_list_item_pane_t1

0x449d,	// (0x00037546) bg_popup_sub_pane_cp21

0xcd3f,	// (0x0003fde8) grid_vitu2_dropdown_list_pane

0x9fae,	// (0x0003d057) cell_vitu2_dropdown_list_char_pane_ParamLimits

0x9fae,	// (0x0003d057) cell_vitu2_dropdown_list_char_pane

0x9fd3,	// (0x0003d07c) cell_vitu2_dropdown_list_ctrl_pane_ParamLimits

0x9fd3,	// (0x0003d07c) cell_vitu2_dropdown_list_ctrl_pane

0x0715,	// (0x000337be) cell_vitu2_dropdown_list_char_pane_g1

0x070c,	// (0x000337b5) cell_vitu2_dropdown_list_char_pane_g2

0x0703,	// (0x000337ac) cell_vitu2_dropdown_list_char_pane_g3

0x0002,

0xfa29,	// (0x00042ad2) cell_vitu2_dropdown_list_char_pane_g

0xa001,	// (0x0003d0aa) cell_vitu2_dropdown_list_char_pane_t1

0xa00f,	// (0x0003d0b8) cell_vitu2_dropdown_list_ctrl_pane_g1_ParamLimits

0xa00f,	// (0x0003d0b8) cell_vitu2_dropdown_list_ctrl_pane_g1

0xa01f,	// (0x0003d0c8) cell_vitu2_dropdown_list_ctrl_pane_g2_ParamLimits

0xa01f,	// (0x0003d0c8) cell_vitu2_dropdown_list_ctrl_pane_g2

0xa030,	// (0x0003d0d9) cell_vitu2_dropdown_list_ctrl_pane_g3_ParamLimits

0xa030,	// (0x0003d0d9) cell_vitu2_dropdown_list_ctrl_pane_g3

0xa040,	// (0x0003d0e9) cell_vitu2_dropdown_list_ctrl_pane_g4_ParamLimits

0xa040,	// (0x0003d0e9) cell_vitu2_dropdown_list_ctrl_pane_g4

0xeac6,	// (0x00041b6f) cell_vitu2_dropdown_list_ctrl_pane_g5_ParamLimits

0xeac6,	// (0x00041b6f) cell_vitu2_dropdown_list_ctrl_pane_g5

0x0004,

0xfa30,	// (0x00042ad9) cell_vitu2_dropdown_list_ctrl_pane_g_ParamLimits

0xfa30,	// (0x00042ad9) cell_vitu2_dropdown_list_ctrl_pane_g

0xa059,	// (0x0003d102) aid_size_cell_gallery2_ParamLimits

0xa059,	// (0x0003d102) aid_size_cell_gallery2

0xa067,	// (0x0003d110) grid_gallery2_pane_ParamLimits

0xa067,	// (0x0003d110) grid_gallery2_pane

0xa076,	// (0x0003d11f) scroll_pane_cp029_ParamLimits

0xa076,	// (0x0003d11f) scroll_pane_cp029

0xa082,	// (0x0003d12b) cell_gallery2_pane_ParamLimits

0xa082,	// (0x0003d12b) cell_gallery2_pane

0x071e,	// (0x000337c7) cell_gallery2_pane_g2

0xa0ac,	// (0x0003d155) cell_gallery2_pane_g3

0x0728,	// (0x000337d1) cell_gallery2_pane_g4

0x0730,	// (0x000337d9) cell_gallery2_pane_g5

0xcfe4,	// (0x0004008d) grid_highlight_pane_cp10

0x9770,	// (0x0003c819) popup_vitu2_match_list_window_ParamLimits

0x9784,	// (0x0003c82d) popup_vitu2_query_window_ParamLimits

0x9784,	// (0x0003c82d) popup_vitu2_query_window

0x449d,	// (0x00037546) bg_vitu2_candi_button_pane

0x0715,	// (0x000337be) cell_vitu2_dropdown_list_char_pane_g1_copy1

0x070c,	// (0x000337b5) cell_vitu2_dropdown_list_char_pane_g2_copy1

0x0703,	// (0x000337ac) cell_vitu2_dropdown_list_char_pane_g2_copy2

0x3794,	// (0x0003683d) bg_button_pane_cp015

0xa0b4,	// (0x0003d15d) bg_button_pane_cp016

0xa0c7,	// (0x0003d170) bg_button_pane_cp017

0xe413,	// (0x000414bc) bg_popup_sub_pane_cp22

0x0738,	// (0x000337e1) popup_vitu2_query_window_g1

0x37c7,	// (0x00036870) popup_vitu2_query_window_g2

0x0002,

0xfa3b,	// (0x00042ae4) popup_vitu2_query_window_g

0x37e4,	// (0x0003688d) popup_vitu2_query_window_t1_ParamLimits

0x37e4,	// (0x0003688d) popup_vitu2_query_window_t1

0x3817,	// (0x000368c0) popup_vitu2_query_window_t2_ParamLimits

0x3817,	// (0x000368c0) popup_vitu2_query_window_t2

0x3829,	// (0x000368d2) popup_vitu2_query_window_t3_ParamLimits

0x3829,	// (0x000368d2) popup_vitu2_query_window_t3

0xa0eb,	// (0x0003d194) popup_vitu2_query_window_t4_ParamLimits

0xa0eb,	// (0x0003d194) popup_vitu2_query_window_t4

0xa10e,	// (0x0003d1b7) popup_vitu2_query_window_t5_ParamLimits

0xa10e,	// (0x0003d1b7) popup_vitu2_query_window_t5

0x0006,

0xfa42,	// (0x00042aeb) popup_vitu2_query_window_t_ParamLimits

0xfa42,	// (0x00042aeb) popup_vitu2_query_window_t

0x0526,	// (0x000335cf) main_cset_text_pane

0x9b5d,	// (0x0003cc06) aid_area_touch_slider_ParamLimits

0x9b79,	// (0x0003cc22) cset_slider_pane_ParamLimits

0x9ba3,	// (0x0003cc4c) main_cset_slider_pane_g1_ParamLimits

0x9bb8,	// (0x0003cc61) main_cset_slider_pane_g2_ParamLimits

0x0547,	// (0x000335f0) main_cset_slider_pane_g3_ParamLimits

0x0547,	// (0x000335f0) main_cset_slider_pane_g3

0x9bcd,	// (0x0003cc76) main_cset_slider_pane_g4_ParamLimits

0x9bcd,	// (0x0003cc76) main_cset_slider_pane_g4

0x9bdc,	// (0x0003cc85) main_cset_slider_pane_g5_ParamLimits

0x9bdc,	// (0x0003cc85) main_cset_slider_pane_g5

0x9be8,	// (0x0003cc91) main_cset_slider_pane_g6_ParamLimits

0x9be8,	// (0x0003cc91) main_cset_slider_pane_g6

0xf995,	// (0x00042a3e) main_cset_slider_pane_g_ParamLimits

0x0577,	// (0x00033620) main_cset_slider_pane_t1_ParamLimits

0x9c74,	// (0x0003cd1d) main_cset_slider_pane_t2_ParamLimits

0x9c8e,	// (0x0003cd37) main_cset_slider_pane_t3_ParamLimits

0x9ca8,	// (0x0003cd51) main_cset_slider_pane_t4_ParamLimits

0x9cc2,	// (0x0003cd6b) main_cset_slider_pane_t5_ParamLimits

0x9cde,	// (0x0003cd87) main_cset_slider_pane_t6_ParamLimits

0x9cf3,	// (0x0003cd9c) main_cset_slider_pane_t7_ParamLimits

0x9d1d,	// (0x0003cdc6) main_cset_slider_pane_t8_ParamLimits

0x9d1d,	// (0x0003cdc6) main_cset_slider_pane_t8

0x9d45,	// (0x0003cdee) main_cset_slider_pane_t9_ParamLimits

0x9d45,	// (0x0003cdee) main_cset_slider_pane_t9

0x9d6d,	// (0x0003ce16) main_cset_slider_pane_t10_ParamLimits

0x9d6d,	// (0x0003ce16) main_cset_slider_pane_t10

0x9d95,	// (0x0003ce3e) main_cset_slider_pane_t11_ParamLimits

0x9d95,	// (0x0003ce3e) main_cset_slider_pane_t11

0x9dbd,	// (0x0003ce66) main_cset_slider_pane_t12_ParamLimits

0x9dbd,	// (0x0003ce66) main_cset_slider_pane_t12

0x9dda,	// (0x0003ce83) main_cset_slider_pane_t13_ParamLimits

0x9dda,	// (0x0003ce83) main_cset_slider_pane_t13

0xf9ba,	// (0x00042a63) main_cset_slider_pane_t_ParamLimits

0x449d,	// (0x00037546) bg_popup_sub_pane_cp011

0x0744,	// (0x000337ed) main_cset_text_pane_g1

0x074c,	// (0x000337f5) main_cset_text_pane_t1

0x075a,	// (0x00033803) main_cset_text_pane_t2

0x0768,	// (0x00033811) main_cset_text_pane_t3

0x0776,	// (0x0003381f) main_cset_text_pane_t4

0x0784,	// (0x0003382d) main_cset_text_pane_t5

0x0792,	// (0x0003383b) main_cset_text_pane_t6

0x07a0,	// (0x00033849) main_cset_text_pane_t7

0x0006,

0xfa51,	// (0x00042afa) main_cset_text_pane_t

0x449d,	// (0x00037546) main_cam4_burst_pane

0x449d,	// (0x00037546) main_cam5_pane

0x9aa6,	// (0x0003cb4f) bg_button_pane_cp019

0x9aaf,	// (0x0003cb58) bg_button_pane_cp020

0x0553,	// (0x000335fc) main_cset_slider_pane_g7_ParamLimits

0x0553,	// (0x000335fc) main_cset_slider_pane_g7

0x055f,	// (0x00033608) main_cset_slider_pane_g8_ParamLimits

0x055f,	// (0x00033608) main_cset_slider_pane_g8

0x9bfc,	// (0x0003cca5) main_cset_slider_pane_g9_ParamLimits

0x9bfc,	// (0x0003cca5) main_cset_slider_pane_g9

0x9c08,	// (0x0003ccb1) main_cset_slider_pane_g10_ParamLimits

0x9c08,	// (0x0003ccb1) main_cset_slider_pane_g10

0x9c14,	// (0x0003ccbd) main_cset_slider_pane_g11_ParamLimits

0x9c14,	// (0x0003ccbd) main_cset_slider_pane_g11

0x9c20,	// (0x0003ccc9) main_cset_slider_pane_g12_ParamLimits

0x9c20,	// (0x0003ccc9) main_cset_slider_pane_g12

0x9c2c,	// (0x0003ccd5) main_cset_slider_pane_g13_ParamLimits

0x9c2c,	// (0x0003ccd5) main_cset_slider_pane_g13

0x9c38,	// (0x0003cce1) main_cset_slider_pane_g14_ParamLimits

0x9c38,	// (0x0003cce1) main_cset_slider_pane_g14

0x9c44,	// (0x0003cced) main_cset_slider_pane_g15_ParamLimits

0x9c44,	// (0x0003cced) main_cset_slider_pane_g15

0x05a5,	// (0x0003364e) main_cset_slider_pane_t14_ParamLimits

0x05a5,	// (0x0003364e) main_cset_slider_pane_t14

0x05de,	// (0x00033687) main_cset_slider_pane_t15_ParamLimits

0x05de,	// (0x00033687) main_cset_slider_pane_t15

0xa131,	// (0x0003d1da) aid_cam4_burst_size_cell_ParamLimits

0xa131,	// (0x0003d1da) aid_cam4_burst_size_cell

0xa14d,	// (0x0003d1f6) grid_cam4_burst_pane_ParamLimits

0xa14d,	// (0x0003d1f6) grid_cam4_burst_pane

0xa17f,	// (0x0003d228) linegrid_cam4_burst_pane_ParamLimits

0xa17f,	// (0x0003d228) linegrid_cam4_burst_pane

0xa19f,	// (0x0003d248) scroll_pane_cp30_ParamLimits

0xa19f,	// (0x0003d248) scroll_pane_cp30

0xa1ab,	// (0x0003d254) cell_cam4_burst_pane_ParamLimits

0xa1ab,	// (0x0003d254) cell_cam4_burst_pane

0x07ba,	// (0x00033863) linegrid_cam4_burst_pane_g1_ParamLimits

0x07ba,	// (0x00033863) linegrid_cam4_burst_pane_g1

0xa1eb,	// (0x0003d294) linegrid_cam4_burst_pane_g2_ParamLimits

0xa1eb,	// (0x0003d294) linegrid_cam4_burst_pane_g2

0x07c7,	// (0x00033870) linegrid_cam4_burst_pane_g3_ParamLimits

0x07c7,	// (0x00033870) linegrid_cam4_burst_pane_g3

0x0002,

0xfa60,	// (0x00042b09) linegrid_cam4_burst_pane_g_ParamLimits

0xfa60,	// (0x00042b09) linegrid_cam4_burst_pane_g

0xa1fc,	// (0x0003d2a5) linegrid_cam4_burst_pane_g3_copy1_ParamLimits

0xa1fc,	// (0x0003d2a5) linegrid_cam4_burst_pane_g3_copy1

0x07d4,	// (0x0003387d) linegrid_cam4_burst_pane_g4_ParamLimits

0x07d4,	// (0x0003387d) linegrid_cam4_burst_pane_g4

0xa216,	// (0x0003d2bf) linegrid_cam4_burst_pane_g5_ParamLimits

0xa216,	// (0x0003d2bf) linegrid_cam4_burst_pane_g5

0xa227,	// (0x0003d2d0) linegrid_cam4_burst_pane_g6_ParamLimits

0xa227,	// (0x0003d2d0) linegrid_cam4_burst_pane_g6

0x07e1,	// (0x0003388a) linegrid_cam4_burst_pane_g7_ParamLimits

0x07e1,	// (0x0003388a) linegrid_cam4_burst_pane_g7

0xa23e,	// (0x0003d2e7) cell_cam4_burst_pane_g1

0x07fa,	// (0x000338a3) main_cam5_pane_t1_ParamLimits

0x07fa,	// (0x000338a3) main_cam5_pane_t1

0x080c,	// (0x000338b5) main_cam5_pane_t2_ParamLimits

0x080c,	// (0x000338b5) main_cam5_pane_t2

0x081e,	// (0x000338c7) main_cam5_pane_t3_ParamLimits

0x081e,	// (0x000338c7) main_cam5_pane_t3

0x0830,	// (0x000338d9) main_cam5_pane_t4_ParamLimits

0x0830,	// (0x000338d9) main_cam5_pane_t4

0x0848,	// (0x000338f1) main_cam5_pane_t5_ParamLimits

0x0848,	// (0x000338f1) main_cam5_pane_t5

0x085c,	// (0x00033905) main_cam5_pane_t6_ParamLimits

0x085c,	// (0x00033905) main_cam5_pane_t6

0x0870,	// (0x00033919) main_cam5_pane_t7_ParamLimits

0x0870,	// (0x00033919) main_cam5_pane_t7

0x0882,	// (0x0003392b) main_cam5_pane_t8_ParamLimits

0x0882,	// (0x0003392b) main_cam5_pane_t8

0x08a0,	// (0x00033949) main_cam5_pane_t9_ParamLimits

0x08a0,	// (0x00033949) main_cam5_pane_t9

0x08b2,	// (0x0003395b) main_cam5_pane_t10_ParamLimits

0x08b2,	// (0x0003395b) main_cam5_pane_t10

0x08c4,	// (0x0003396d) main_cam5_pane_t11_ParamLimits

0x08c4,	// (0x0003396d) main_cam5_pane_t11

0x08d8,	// (0x00033981) main_cam5_pane_t12_ParamLimits

0x08d8,	// (0x00033981) main_cam5_pane_t12

0x08ef,	// (0x00033998) main_cam5_pane_t13_ParamLimits

0x08ef,	// (0x00033998) main_cam5_pane_t13

0x000c,

0xfa6c,	// (0x00042b15) main_cam5_pane_t_ParamLimits

0xfa6c,	// (0x00042b15) main_cam5_pane_t

0x471e,	// (0x000377c7) popup_scut_keymap_window_ParamLimits

0x471e,	// (0x000377c7) popup_scut_keymap_window

0xa251,	// (0x0003d2fa) aid_size_cell_brow_shortcut

0xcfe4,	// (0x0004008d) bg_popup_window_pane_cp010

0xa25d,	// (0x0003d306) grid_scut_pane

0xa269,	// (0x0003d312) cell_scut_pane_ParamLimits

0xa269,	// (0x0003d312) cell_scut_pane

0xa284,	// (0x0003d32d) cell_scut_pane_g1

0x0912,	// (0x000339bb) cell_scut_pane_t1

0x0921,	// (0x000339ca) cell_scut_pane_t2

0xa28d,	// (0x0003d336) cell_scut_pane_t3

0x0002,

0xfa87,	// (0x00042b30) cell_scut_pane_t

0x82f8,	// (0x0003b3a1) main_mup3_pane_g8_ParamLimits

0x82f8,	// (0x0003b3a1) main_mup3_pane_g8

0x96ac,	// (0x0003c755) area_vitu2_query_pane_ParamLimits

0x96ac,	// (0x0003c755) area_vitu2_query_pane

0x37a6,	// (0x0003684f) input_focus_pane_cp08

0x0930,	// (0x000339d9) area_vitu2_query_pane_g1

0x38a7,	// (0x00036950) area_vitu2_query_pane_g2

0x0001,

0xfa8e,	// (0x00042b37) area_vitu2_query_pane_g

0xa29b,	// (0x0003d344) area_vitu2_query_pane_t1_ParamLimits

0xa29b,	// (0x0003d344) area_vitu2_query_pane_t1

0xa2af,	// (0x0003d358) area_vitu2_query_pane_t2_ParamLimits

0xa2af,	// (0x0003d358) area_vitu2_query_pane_t2

0x38b8,	// (0x00036961) area_vitu2_query_pane_t3_ParamLimits

0x38b8,	// (0x00036961) area_vitu2_query_pane_t3

0x38e0,	// (0x00036989) area_vitu2_query_pane_t4_ParamLimits

0x38e0,	// (0x00036989) area_vitu2_query_pane_t4

0x3908,	// (0x000369b1) area_vitu2_query_pane_t5_ParamLimits

0x3908,	// (0x000369b1) area_vitu2_query_pane_t5

0x3930,	// (0x000369d9) area_vitu2_query_pane_t6_ParamLimits

0x3930,	// (0x000369d9) area_vitu2_query_pane_t6

0x0006,

0xfa93,	// (0x00042b3c) area_vitu2_query_pane_t_ParamLimits

0xfa93,	// (0x00042b3c) area_vitu2_query_pane_t

0xa2c3,	// (0x0003d36c) bg_button_pane_cp018

0xa2d1,	// (0x0003d37a) bg_button_pane_cp021

0x397c,	// (0x00036a25) bg_button_pane_cp022

0x398d,	// (0x00036a36) input_focus_pane_cp09

0x6819,	// (0x000398c2) aid_size_touch_mv_arrow_left

0x6844,	// (0x000398ed) aid_size_touch_mv_arrow_right

0x9c5c,	// (0x0003cd05) main_cset_slider_pane_g16_ParamLimits

0x9c5c,	// (0x0003cd05) main_cset_slider_pane_g16

0x9c68,	// (0x0003cd11) main_cset_slider_pane_g17_ParamLimits

0x9c68,	// (0x0003cd11) main_cset_slider_pane_g17

0xa23e,	// (0x0003d2e7) cell_cam4_burst_pane_g1_ParamLimits

0x449d,	// (0x00037546) compa_mode_pane

0x9e58,	// (0x0003cf01) popup_vtel_slider_window_g3_ParamLimits

0x9e58,	// (0x0003cf01) popup_vtel_slider_window_g3

0x9e6c,	// (0x0003cf15) popup_vtel_slider_window_g4_ParamLimits

0x9e6c,	// (0x0003cf15) popup_vtel_slider_window_g4

0x9e80,	// (0x0003cf29) popup_vtel_slider_window_t1_ParamLimits

0x9e80,	// (0x0003cf29) popup_vtel_slider_window_t1

0x449d,	// (0x00037546) main_cl_pane

0xe43f,	// (0x000414e8) popup_imed_adjust2_window_ParamLimits

0xe413,	// (0x000414bc) bg_tb_trans_pane_cp05_ParamLimits

0xed65,	// (0x00041e0e) popup_imed_adjust2_window_g1_ParamLimits

0xed74,	// (0x00041e1d) popup_imed_adjust2_window_g2_ParamLimits

0xed74,	// (0x00041e1d) popup_imed_adjust2_window_g2

0xed80,	// (0x00041e29) popup_imed_adjust2_window_g3_ParamLimits

0xed80,	// (0x00041e29) popup_imed_adjust2_window_g3

0x0002,

0xf7fe,	// (0x000428a7) popup_imed_adjust2_window_g_ParamLimits

0xf7fe,	// (0x000428a7) popup_imed_adjust2_window_g

0xed8c,	// (0x00041e35) popup_imed_adjust2_window_t1_ParamLimits

0xeda4,	// (0x00041e4d) slider_imed_adjust_pane_ParamLimits

0xedb8,	// (0x00041e61) slider_imed_adjust_pane_g1_ParamLimits

0xedc8,	// (0x00041e71) slider_imed_adjust_pane_g2_ParamLimits

0xedd8,	// (0x00041e81) slider_imed_adjust_pane_g3_ParamLimits

0xede9,	// (0x00041e92) slider_imed_adjust_pane_g4_ParamLimits

0xf805,	// (0x000428ae) slider_imed_adjust_pane_g_ParamLimits

0x940a,	// (0x0003c4b3) aid_touch_area_cam4_ParamLimits

0x940a,	// (0x0003c4b3) aid_touch_area_cam4

0x941a,	// (0x0003c4c3) battery_pane_cp01

0x94a1,	// (0x0003c54a) main_camera4_pane_g6_ParamLimits

0x94a1,	// (0x0003c54a) main_camera4_pane_g6

0x94bf,	// (0x0003c568) main_camera4_pane_t2_ParamLimits

0x94bf,	// (0x0003c568) main_camera4_pane_t2

0x0001,

0xf908,	// (0x000429b1) main_camera4_pane_t_ParamLimits

0xf908,	// (0x000429b1) main_camera4_pane_t

0x9546,	// (0x0003c5ef) aid_touch_area_vid4_ParamLimits

0x9546,	// (0x0003c5ef) aid_touch_area_vid4

0x9586,	// (0x0003c62f) main_video4_pane_g5_ParamLimits

0x9586,	// (0x0003c62f) main_video4_pane_g5

0x95aa,	// (0x0003c653) vid4_progress_pane_ParamLimits

0x95aa,	// (0x0003c653) vid4_progress_pane

0x056b,	// (0x00033614) main_cset_slider_pane_g18_ParamLimits

0x056b,	// (0x00033614) main_cset_slider_pane_g18

0x07ee,	// (0x00033897) cell_cam4_burst_pane_g2_ParamLimits

0x07ee,	// (0x00033897) cell_cam4_burst_pane_g2

0x0001,

0xfa67,	// (0x00042b10) cell_cam4_burst_pane_g_ParamLimits

0xfa67,	// (0x00042b10) cell_cam4_burst_pane_g

0xa2dd,	// (0x0003d386) bg_cl_pane_ParamLimits

0xa2dd,	// (0x0003d386) bg_cl_pane

0xa2e9,	// (0x0003d392) cl_header_pane_ParamLimits

0xa2e9,	// (0x0003d392) cl_header_pane

0xa2f5,	// (0x0003d39e) cl_listscroll_pane_ParamLimits

0xa2f5,	// (0x0003d39e) cl_listscroll_pane

0x09d8,	// (0x00033a81) bg_cl_pane_g1

0x09e0,	// (0x00033a89) bg_cl_pane_g2

0x09e8,	// (0x00033a91) bg_cl_pane_g3

0x09f0,	// (0x00033a99) bg_cl_pane_g4

0x09f8,	// (0x00033aa1) bg_cl_pane_g5

0x0a00,	// (0x00033aa9) bg_cl_pane_g6

0x0a08,	// (0x00033ab1) bg_cl_pane_g7

0x0a10,	// (0x00033ab9) bg_cl_pane_g8

0x0a18,	// (0x00033ac1) bg_cl_pane_g9

0x0008,

0xfaa2,	// (0x00042b4b) bg_cl_pane_g

0xa301,	// (0x0003d3aa) aid_height_cl_leading_ParamLimits

0xa301,	// (0x0003d3aa) aid_height_cl_leading

0xa30d,	// (0x0003d3b6) aid_height_cl_text_ParamLimits

0xa30d,	// (0x0003d3b6) aid_height_cl_text

0x4755,	// (0x000377fe) bg_cl_header_pane_ParamLimits

0x4755,	// (0x000377fe) bg_cl_header_pane

0xa325,	// (0x0003d3ce) cl_header_pane_g1_ParamLimits

0xa325,	// (0x0003d3ce) cl_header_pane_g1

0xa332,	// (0x0003d3db) cl_header_pane_t1_ParamLimits

0xa332,	// (0x0003d3db) cl_header_pane_t1

0x0a20,	// (0x00033ac9) cl_list_pane

0x053e,	// (0x000335e7) hc_scroll_pane_cp01

0xc97a,	// (0x0003fa23) bg_cl_header_pane_g1

0x0420,	// (0x000334c9) bg_cl_header_pane_g2

0xc99a,	// (0x0003fa43) bg_cl_header_pane_g3

0x0430,	// (0x000334d9) bg_cl_header_pane_g4

0x0428,	// (0x000334d1) bg_cl_header_pane_g5

0x06bb,	// (0x00033764) bg_cl_header_pane_g6

0x0448,	// (0x000334f1) bg_cl_header_pane_g7

0x0450,	// (0x000334f9) bg_cl_header_pane_g8

0x0440,	// (0x000334e9) bg_cl_header_pane_g9

0x0008,

0xfab5,	// (0x00042b5e) bg_cl_header_pane_g

0xa344,	// (0x0003d3ed) hc_cl_list_double_graphic_heading_pane_ParamLimits

0xa344,	// (0x0003d3ed) hc_cl_list_double_graphic_heading_pane

0x9f8e,	// (0x0003d037) hc_cl_list_single_graphic_pane_ParamLimits

0x9f8e,	// (0x0003d037) hc_cl_list_single_graphic_pane

0xa354,	// (0x0003d3fd) hc_cl_list_single_graphic_pane_g1_ParamLimits

0xa354,	// (0x0003d3fd) hc_cl_list_single_graphic_pane_g1

0xa360,	// (0x0003d409) hc_cl_list_single_graphic_pane_g2_ParamLimits

0xa360,	// (0x0003d409) hc_cl_list_single_graphic_pane_g2

0x0001,

0xfac8,	// (0x00042b71) hc_cl_list_single_graphic_pane_g_ParamLimits

0xfac8,	// (0x00042b71) hc_cl_list_single_graphic_pane_g

0xa374,	// (0x0003d41d) hc_cl_list_single_graphic_pane_t1_ParamLimits

0xa374,	// (0x0003d41d) hc_cl_list_single_graphic_pane_t1

0xa354,	// (0x0003d3fd) hc_cl_list_double_graphic_heading_pane_g1_ParamLimits

0xa354,	// (0x0003d3fd) hc_cl_list_double_graphic_heading_pane_g1

0xa389,	// (0x0003d432) hc_cl_list_double_graphic_heading_pane_g2_ParamLimits

0xa389,	// (0x0003d432) hc_cl_list_double_graphic_heading_pane_g2

0xa39d,	// (0x0003d446) hc_cl_list_double_graphic_heading_pane_g3_ParamLimits

0xa39d,	// (0x0003d446) hc_cl_list_double_graphic_heading_pane_g3

0x0002,

0xfacd,	// (0x00042b76) hc_cl_list_double_graphic_heading_pane_g_ParamLimits

0xfacd,	// (0x00042b76) hc_cl_list_double_graphic_heading_pane_g

0xa3b1,	// (0x0003d45a) hc_cl_list_double_graphic_heading_pane_t1_ParamLimits

0xa3b1,	// (0x0003d45a) hc_cl_list_double_graphic_heading_pane_t1

0xa3c6,	// (0x0003d46f) hc_cl_list_double_graphic_heading_pane_t2_ParamLimits

0xa3c6,	// (0x0003d46f) hc_cl_list_double_graphic_heading_pane_t2

0x0001,

0xfad4,	// (0x00042b7d) hc_cl_list_double_graphic_heading_pane_t_ParamLimits

0xfad4,	// (0x00042b7d) hc_cl_list_double_graphic_heading_pane_t

0xa3ed,	// (0x0003d496) vid4_progress_pane_g1

0xa3f9,	// (0x0003d4a2) vid4_progress_pane_g2

0xa405,	// (0x0003d4ae) vid4_progress_pane_g3

0xa414,	// (0x0003d4bd) vid4_progress_pane_g4

0x0004,

0xfad9,	// (0x00042b82) vid4_progress_pane_g

0xa432,	// (0x0003d4db) vid4_progress_pane_t1

0xa448,	// (0x0003d4f1) vid4_progress_pane_t2

0x0002,

0xfae4,	// (0x00042b8d) vid4_progress_pane_t

0xa473,	// (0x0003d51c) wait_bar_pane_cp07

0xe67b,	// (0x00041724) blid_firmament_pane_ParamLimits

0xe6be,	// (0x00041767) popup_blid_sat_info2_window_g1

0xe6e2,	// (0x0004178b) popup_blid_sat_info2_window_t3

0xe6f0,	// (0x00041799) popup_blid_sat_info2_window_t4

0xe6fe,	// (0x000417a7) popup_blid_sat_info2_window_t5

0xe70c,	// (0x000417b5) popup_blid_sat_info2_window_t6

0xe71c,	// (0x000417c5) popup_blid_sat_info2_window_t7

0xe72a,	// (0x000417d3) popup_blid_sat_info2_window_t8

0xe740,	// (0x000417e9) popup_blid_sat_info2_window_t9

0xe74e,	// (0x000417f7) popup_blid_sat_info2_window_t10

0xe816,	// (0x000418bf) aid_firma_cardinal_ParamLimits

0xe82a,	// (0x000418d3) blid_firmament_pane_t1_ParamLimits

0xe841,	// (0x000418ea) blid_firmament_pane_t2_ParamLimits

0xe858,	// (0x00041901) blid_firmament_pane_t3_ParamLimits

0xe86f,	// (0x00041918) blid_firmament_pane_t4_ParamLimits

0xf6f7,	// (0x000427a0) blid_firmament_pane_t_ParamLimits

0xe886,	// (0x0004192f) blid_sat_info_pane_ParamLimits

0x75df,	// (0x0003a688) main_cam_set_pane_ParamLimits

0x8a90,	// (0x0003bb39) aid_size_cell_colour_35_ParamLimits

0x8aaa,	// (0x0003bb53) aid_size_cell_colour_112_ParamLimits

0x8ac1,	// (0x0003bb6a) aid_size_cell_effect_ParamLimits

0x75df,	// (0x0003a688) bg_tb_trans_pane_cp02_ParamLimits

0xd8d3,	// (0x0004097c) heading_imed_pane_ParamLimits

0x8adb,	// (0x0003bb84) listscroll_imed_pane_ParamLimits

0xda41,	// (0x00040aea) popup_call2_audio_first_window_g5_ParamLimits

0xda41,	// (0x00040aea) popup_call2_audio_first_window_g5

0x91c3,	// (0x0003c26c) aid_size_touch_image3_arrow_left_ParamLimits

0x91c3,	// (0x0003c26c) aid_size_touch_image3_arrow_left

0x91d9,	// (0x0003c282) aid_size_touch_image3_arrow_right_ParamLimits

0x91d9,	// (0x0003c282) aid_size_touch_image3_arrow_right

0xa45e,	// (0x0003d507) vid4_progress_pane_t3

0x8d7b,	// (0x0003be24) main_hwr_training_symbol_option_pane_ParamLimits

0x8d7b,	// (0x0003be24) main_hwr_training_symbol_option_pane

0xf054,	// (0x000420fd) popup_hwr_training_preview_window_ParamLimits

0xf054,	// (0x000420fd) popup_hwr_training_preview_window

0x8ddc,	// (0x0003be85) hwr_training_navi_pane_g5_ParamLimits

0x8ddc,	// (0x0003be85) hwr_training_navi_pane_g5

0x0400,	// (0x000334a9) popup_char_count_window

0x4755,	// (0x000377fe) bg_popup_sub_pane_cp20_ParamLimits

0x9f76,	// (0x0003d01f) list_vitu2_match_list_pane_ParamLimits

0x9f82,	// (0x0003d02b) vitu2_page_scroll_pane_ParamLimits

0x9f82,	// (0x0003d02b) vitu2_page_scroll_pane

0x0b23,	// (0x00033bcc) list_single_hwr_training_symbol_option_pane_ParamLimits

0x0b23,	// (0x00033bcc) list_single_hwr_training_symbol_option_pane

0x0b36,	// (0x00033bdf) list_single_hwr_training_symbol_option_pane_g1

0x0b3e,	// (0x00033be7) list_single_hwr_training_symbol_option_pane_t1

0x0b4c,	// (0x00033bf5) bg_button_pane_cp023

0x0b55,	// (0x00033bfe) bg_button_pane_cp024

0xa485,	// (0x0003d52e) vitu2_page_scroll_pane_g1

0xa48d,	// (0x0003d536) vitu2_page_scroll_pane_g2

0x0001,

0xfaeb,	// (0x00042b94) vitu2_page_scroll_pane_g

0xa497,	// (0x0003d540) vitu2_page_scroll_pane_t1

0xe5db,	// (0x00041684) popup_char_count_window_g1

0x0b88,	// (0x00033c31) popup_char_count_window_g2

0x0b91,	// (0x00033c3a) popup_char_count_window_g3

0x0002,

0xfaf0,	// (0x00042b99) popup_char_count_window_g

0x0b9a,	// (0x00033c43) popup_char_count_window_t1

0x449d,	// (0x00037546) main_vded2_pane

0xed51,	// (0x00041dfa) aid_size_cell_imed_line

0xed5b,	// (0x00041e04) grid_imed_line_width_pane

0x9600,	// (0x0003c6a9) vid4_indicators_pane_g4

0x0ba8,	// (0x00033c51) cell_imed_line_width_pane_ParamLimits

0x0ba8,	// (0x00033c51) cell_imed_line_width_pane

0x0bbe,	// (0x00033c67) cell_imed_line_width_pane_g1

0xe738,	// (0x000417e1) cell_imed_line_width_pane_g2

0x0001,

0xfaf7,	// (0x00042ba0) cell_imed_line_width_pane_g

0xa4a6,	// (0x0003d54f) main_vded2_pane_g1_ParamLimits

0xa4a6,	// (0x0003d54f) main_vded2_pane_g1

0xa4b5,	// (0x0003d55e) main_vded2_pane_g2_ParamLimits

0xa4b5,	// (0x0003d55e) main_vded2_pane_g2

0x0001,

0xfafc,	// (0x00042ba5) main_vded2_pane_g_ParamLimits

0xfafc,	// (0x00042ba5) main_vded2_pane_g

0xa4c3,	// (0x0003d56c) vded2_slider_pane_ParamLimits

0xa4c3,	// (0x0003d56c) vded2_slider_pane

0xa4d0,	// (0x0003d579) aid_size_touch_vded2_end

0xa4da,	// (0x0003d583) aid_size_touch_vded2_playhead

0x0bc7,	// (0x00033c70) aid_size_touch_vded2_start

0x0bcf,	// (0x00033c78) vded2_slider_bg_pane

0x0bd8,	// (0x00033c81) vded2_slider_pane_g1

0x0be1,	// (0x00033c8a) vded2_slider_pane_g2

0xa4e2,	// (0x0003d58b) vded2_slider_pane_g3

0x0002,

0xfb01,	// (0x00042baa) vded2_slider_pane_g

0x0be9,	// (0x00033c92) vded2_slider_bg_pane_g1

0x0bf2,	// (0x00033c9b) vded2_slider_bg_pane_g2

0x0bfb,	// (0x00033ca4) vded2_slider_bg_pane_g3

0x0002,

0xf7c7,	// (0x00042870) vded2_slider_bg_pane_g

0x6eb7,	// (0x00039f60) aid_postcard_touch_down_pane_ParamLimits

0x6eb7,	// (0x00039f60) aid_postcard_touch_down_pane

0x6ec7,	// (0x00039f70) aid_postcard_touch_up_pane_ParamLimits

0x6ec7,	// (0x00039f70) aid_postcard_touch_up_pane

0x449d,	// (0x00037546) main_blid2_pane

0xe421,	// (0x000414ca) popup_blid2_search_window

0x449d,	// (0x00037546) blid2_gps_pane

0x449d,	// (0x00037546) blid2_navig_pane

0x449d,	// (0x00037546) blid2_search_pane

0x449d,	// (0x00037546) blid2_tripm_pane

0xa4eb,	// (0x0003d594) blid2_search_pane_g1_ParamLimits

0xa4eb,	// (0x0003d594) blid2_search_pane_g1

0xa4fb,	// (0x0003d5a4) blid2_search_pane_t1_ParamLimits

0xa4fb,	// (0x0003d5a4) blid2_search_pane_t1

0xa50d,	// (0x0003d5b6) aid_size_cell_blid2_gps_ParamLimits

0xa50d,	// (0x0003d5b6) aid_size_cell_blid2_gps

0xa51d,	// (0x0003d5c6) blid2_gps_pane_g1_ParamLimits

0xa51d,	// (0x0003d5c6) blid2_gps_pane_g1

0xa529,	// (0x0003d5d2) grid_blid2_satellite_pane_ParamLimits

0xa529,	// (0x0003d5d2) grid_blid2_satellite_pane

0xa537,	// (0x0003d5e0) blid2_navig_pane_g1_ParamLimits

0xa537,	// (0x0003d5e0) blid2_navig_pane_g1

0xa543,	// (0x0003d5ec) blid2_navig_pane_t1_ParamLimits

0xa543,	// (0x0003d5ec) blid2_navig_pane_t1

0xa555,	// (0x0003d5fe) blid2_navig_pane_t2_ParamLimits

0xa555,	// (0x0003d5fe) blid2_navig_pane_t2

0x0001,

0xfb08,	// (0x00042bb1) blid2_navig_pane_t_ParamLimits

0xfb08,	// (0x00042bb1) blid2_navig_pane_t

0xa567,	// (0x0003d610) blid2_navig_ring_pane_ParamLimits

0xa567,	// (0x0003d610) blid2_navig_ring_pane

0xa577,	// (0x0003d620) blid2_speed_pane_ParamLimits

0xa577,	// (0x0003d620) blid2_speed_pane

0xa583,	// (0x0003d62c) blid2_tripm_pane_g1_ParamLimits

0xa583,	// (0x0003d62c) blid2_tripm_pane_g1

0xa593,	// (0x0003d63c) blid2_tripm_pane_g2_ParamLimits

0xa593,	// (0x0003d63c) blid2_tripm_pane_g2

0xa59f,	// (0x0003d648) blid2_tripm_pane_g3_ParamLimits

0xa59f,	// (0x0003d648) blid2_tripm_pane_g3

0xa5ab,	// (0x0003d654) blid2_tripm_pane_g4_ParamLimits

0xa5ab,	// (0x0003d654) blid2_tripm_pane_g4

0xa5b7,	// (0x0003d660) blid2_tripm_pane_g5_ParamLimits

0xa5b7,	// (0x0003d660) blid2_tripm_pane_g5

0x0005,

0xfb0d,	// (0x00042bb6) blid2_tripm_pane_g_ParamLimits

0xfb0d,	// (0x00042bb6) blid2_tripm_pane_g

0xa5d3,	// (0x0003d67c) blid2_tripm_pane_t1_ParamLimits

0xa5d3,	// (0x0003d67c) blid2_tripm_pane_t1

0xa5e7,	// (0x0003d690) blid2_tripm_pane_t2_ParamLimits

0xa5e7,	// (0x0003d690) blid2_tripm_pane_t2

0xa5f9,	// (0x0003d6a2) blid2_tripm_pane_t3_ParamLimits

0xa5f9,	// (0x0003d6a2) blid2_tripm_pane_t3

0x0003,

0xfb1a,	// (0x00042bc3) blid2_tripm_pane_t_ParamLimits

0xfb1a,	// (0x00042bc3) blid2_tripm_pane_t

0xa62b,	// (0x0003d6d4) cell_blid2_satellite_pane_ParamLimits

0xa62b,	// (0x0003d6d4) cell_blid2_satellite_pane

0xa649,	// (0x0003d6f2) cell_blid2_satellite_pane_g1

0x0c04,	// (0x00033cad) cell_blid2_satellite_pane_t1

0xe896,	// (0x0004193f) blid2_speed_pane_g1

0x0c12,	// (0x00033cbb) blid2_speed_pane_t1

0x0c20,	// (0x00033cc9) blid2_speed_pane_t2

0x0001,

0xfb23,	// (0x00042bcc) blid2_speed_pane_t

0xe896,	// (0x0004193f) blid2_navig_ring_pane_g1

0xa652,	// (0x0003d6fb) blid2_navig_ring_pane_g2

0xa65a,	// (0x0003d703) blid2_navig_ring_pane_g3

0xa662,	// (0x0003d70b) blid2_navig_ring_pane_g4

0xa66a,	// (0x0003d713) blid2_navig_ring_pane_g5

0x0004,

0xfb28,	// (0x00042bd1) blid2_navig_ring_pane_g

0x449d,	// (0x00037546) bg_popup_window_pane_cp011

0x0c2e,	// (0x00033cd7) popup_blid2_search_window_g1

0x0c36,	// (0x00033cdf) popup_blid2_search_window_t1

0x0c44,	// (0x00033ced) popup_blid2_search_window_t2

0x0001,

0xfb33,	// (0x00042bdc) popup_blid2_search_window_t

0xc889,	// (0x0003f932) main_browser_pane_g1

0xc590,	// (0x0003f639) main_browser_pane_ParamLimits

0x75df,	// (0x0003a688) bg_button_pane_cp011_ParamLimits

0x986d,	// (0x0003c916) cell_vitu2_function_pane_g1_ParamLimits

0xe413,	// (0x000414bc) bg_popup_sub_pane_cp22_ParamLimits

0x37a6,	// (0x0003684f) input_focus_pane_cp08_ParamLimits

0xa0da,	// (0x0003d183) popup_vitu2_query_button_pane_ParamLimits

0xa0da,	// (0x0003d183) popup_vitu2_query_button_pane

0x37bd,	// (0x00036866) popup_vitu2_query_input_button_pane

0x0738,	// (0x000337e1) popup_vitu2_query_window_g1_ParamLimits

0x37c7,	// (0x00036870) popup_vitu2_query_window_g2_ParamLimits

0xfa3b,	// (0x00042ae4) popup_vitu2_query_window_g_ParamLimits

0x449d,	// (0x00037546) bg_button_pane_cp026

0xa672,	// (0x0003d71b) popup_vitu2_query_input_button_pane_g1

0x449d,	// (0x00037546) bg_button_pane_cp025

0x0c52,	// (0x00033cfb) popup_vitu2_query_button_pane_t1

0x804e,	// (0x0003b0f7) main_mp3_pane_t6

0x805e,	// (0x0003b107) popup_slider_window_cp01

0x94f7,	// (0x0003c5a0) cam4_battery_pane

0x95d8,	// (0x0003c681) cam4_battery_pane_cp02

0xa3db,	// (0x0003d484) cam4_battery_pane_cp01

0xa3e5,	// (0x0003d48e) cam4_battery_pane_cp03

0xe896,	// (0x0004193f) cam4_battery_pane_g1

0x018e,	// (0x00033237) cam4_battery_pane_g2

0x0001,

0xfb38,	// (0x00042be1) cam4_battery_pane_g

0xe75c,	// (0x00041805) popup_blid_sat_info2_window_t11

0x6819,	// (0x000398c2) aid_size_touch_mv_arrow_left_ParamLimits

0x6844,	// (0x000398ed) aid_size_touch_mv_arrow_right_ParamLimits

0xcf44,	// (0x0003ffed) navi_pane_g1_ParamLimits

0x686d,	// (0x00039916) navi_pane_g2_ParamLimits

0x689b,	// (0x00039944) navi_pane_g3_ParamLimits

0xf409,	// (0x000424b2) navi_pane_g_ParamLimits

0x68f5,	// (0x0003999e) navi_pane_mv_t1_ParamLimits

0x8ae7,	// (0x0003bb90) grid_imed_effect_pane_ParamLimits

0x55ef,	// (0x00038698) aid_placing_vt_slider_lsc

0xc7d6,	// (0x0003f87f) aid_placing_vt_slider_prt

0x75df,	// (0x0003a688) bg_tb_trans_pane_cp01_ParamLimits

0xe9e6,	// (0x00041a8f) popup_image_details_window_g1_ParamLimits

0xe9f9,	// (0x00041aa2) popup_image_details_window_g2_ParamLimits

0xea0e,	// (0x00041ab7) popup_image_details_window_g3_ParamLimits

0xea0e,	// (0x00041ab7) popup_image_details_window_g3

0xf73c,	// (0x000427e5) popup_image_details_window_g_ParamLimits

0xea22,	// (0x00041acb) popup_image_details_window_t1_ParamLimits

0xea34,	// (0x00041add) popup_image_details_window_t2_ParamLimits

0xea4d,	// (0x00041af6) popup_image_details_window_t3_ParamLimits

0xea61,	// (0x00041b0a) popup_image_details_window_t4_ParamLimits

0xea7c,	// (0x00041b25) popup_image_details_window_t5_ParamLimits

0xf743,	// (0x000427ec) popup_image_details_window_t_ParamLimits

0xa319,	// (0x0003d3c2) cl_header_name_pane_ParamLimits

0xa319,	// (0x0003d3c2) cl_header_name_pane

0xa67a,	// (0x0003d723) cl_header_name_pane_t1_ParamLimits

0xa67a,	// (0x0003d723) cl_header_name_pane_t1

0xa691,	// (0x0003d73a) cl_header_name_pane_t2_ParamLimits

0xa691,	// (0x0003d73a) cl_header_name_pane_t2

0xa6bb,	// (0x0003d764) cl_header_name_pane_t3_ParamLimits

0xa6bb,	// (0x0003d764) cl_header_name_pane_t3

0x0002,

0xfb3d,	// (0x00042be6) cl_header_name_pane_t_ParamLimits

0xfb3d,	// (0x00042be6) cl_header_name_pane_t

0x68c6,	// (0x0003996f) navi_pane_mv_g2_ParamLimits

0x03bd,	// (0x00033466) field_vitu2_entry_pane_g1_ParamLimits

0x03c9,	// (0x00033472) field_vitu2_entry_pane_g2_ParamLimits

0x03d5,	// (0x0003347e) field_vitu2_entry_pane_g3_ParamLimits

0x03d5,	// (0x0003347e) field_vitu2_entry_pane_g3

0xf93a,	// (0x000429e3) field_vitu2_entry_pane_g_ParamLimits

0x97fd,	// (0x0003c8a6) cell_vitu2_itu_pane_g1_ParamLimits

0x980d,	// (0x0003c8b6) cell_vitu2_itu_pane_g2_ParamLimits

0x980d,	// (0x0003c8b6) cell_vitu2_itu_pane_g2

0x0001,

0xf946,	// (0x000429ef) cell_vitu2_itu_pane_g_ParamLimits

0xf946,	// (0x000429ef) cell_vitu2_itu_pane_g

0x75df,	// (0x0003a688) bg_vkb2_func_pane_cp05_ParamLimits

0x75df,	// (0x0003a688) bg_vkb2_func_pane_cp05

0x75df,	// (0x0003a688) bg_vkb2_func_pane_cp03

0x75df,	// (0x0003a688) bg_vkb2_func_pane_cp04

0x75df,	// (0x0003a688) bg_vkb2_func_pane_cp10_ParamLimits

0x75df,	// (0x0003a688) bg_vkb2_func_pane_cp10

0x397c,	// (0x00036a25) bg_vkb2_func_pane_cp08

0xa2c3,	// (0x0003d36c) bg_vkb2_func_pane_cp06

0xa2d1,	// (0x0003d37a) bg_vkb2_func_pane_cp07

0x0b5e,	// (0x00033c07) bg_vkb2_func_pane_cp11_ParamLimits

0x0b5e,	// (0x00033c07) bg_vkb2_func_pane_cp11

0x0b73,	// (0x00033c1c) bg_vkb2_func_pane_cp12_ParamLimits

0x0b73,	// (0x00033c1c) bg_vkb2_func_pane_cp12

0x449d,	// (0x00037546) bg_vkb2_func_pane_cp09

0x0420,	// (0x000334c9) bg_vkb2_func_pane_g1

0xc99a,	// (0x0003fa43) bg_vkb2_func_pane_g2

0x0428,	// (0x000334d1) bg_vkb2_func_pane_g3

0x0430,	// (0x000334d9) bg_vkb2_func_pane_g4

0x06bb,	// (0x00033764) bg_vkb2_func_pane_g5

0x0448,	// (0x000334f1) bg_vkb2_func_pane_g6

0x0450,	// (0x000334f9) bg_vkb2_func_pane_g7

0x0440,	// (0x000334e9) bg_vkb2_func_pane_g8

0xc97a,	// (0x0003fa23) bg_vkb2_func_pane_g9

0x0008,

0xfb44,	// (0x00042bed) bg_vkb2_func_pane_g

0xa5c5,	// (0x0003d66e) blid2_tripm_pane_g6_ParamLimits

0xa5c5,	// (0x0003d66e) blid2_tripm_pane_g6

0x0148,	// (0x000331f1) mp4_progress_pane_g1

0xa61f,	// (0x0003d6c8) blid2_tripm_values_pane_ParamLimits

0xa61f,	// (0x0003d6c8) blid2_tripm_values_pane

0xa6e0,	// (0x0003d789) blid2_tripm_values_pane_t1

0xa6ee,	// (0x0003d797) blid2_tripm_values_pane_t2

0xa6fc,	// (0x0003d7a5) blid2_tripm_values_pane_t3

0xa70a,	// (0x0003d7b3) blid2_tripm_values_pane_t4

0xa718,	// (0x0003d7c1) blid2_tripm_values_pane_t5

0xa726,	// (0x0003d7cf) blid2_tripm_values_pane_t6

0xa734,	// (0x0003d7dd) blid2_tripm_values_pane_t7

0xa742,	// (0x0003d7eb) blid2_tripm_values_pane_t8

0xa750,	// (0x0003d7f9) blid2_tripm_values_pane_t9

0x0008,

0xfb57,	// (0x00042c00) blid2_tripm_values_pane_t

0x562d,	// (0x000386d6) call_video_pane_t1_ParamLimits

0x564a,	// (0x000386f3) call_video_pane_t2_ParamLimits

0xf292,	// (0x0004233b) call_video_pane_t_ParamLimits

0x3520,	// (0x000365c9) msg_header_pane_g1_ParamLimits

0xd161,	// (0x0004020a) msg_header_pane_g2_ParamLimits

0xd161,	// (0x0004020a) msg_header_pane_g2

0x0001,

0xf4ac,	// (0x00042555) msg_header_pane_g_ParamLimits

0xf4ac,	// (0x00042555) msg_header_pane_g

0xc590,	// (0x0003f639) main_clock2_pane_ParamLimits

0x8866,	// (0x0003b90f) grid_clock2_toolbar_pane_ParamLimits

0x8866,	// (0x0003b90f) grid_clock2_toolbar_pane

0x8866,	// (0x0003b90f) listscroll_clock2_pane_ParamLimits

0x8866,	// (0x0003b90f) listscroll_clock2_pane

0x891e,	// (0x0003b9c7) main_clock2_pane_t3_ParamLimits

0x891e,	// (0x0003b9c7) main_clock2_pane_t3

0x8930,	// (0x0003b9d9) main_clock2_pane_t4_ParamLimits

0x8930,	// (0x0003b9d9) main_clock2_pane_t4

0x0c60,	// (0x00033d09) cell_clock2_toolbar_pane

0x0c68,	// (0x00033d11) cell_clock2_toolbar_pane_cp01

0x0c68,	// (0x00033d11) cell_clock2_toolbar_pane_cp02

0x0c70,	// (0x00033d19) cell_clock2_toolbar_pane_cp03

0x0c78,	// (0x00033d21) list_clock2_pane

0xceaa,	// (0x0003ff53) scroll_pane_cp10

0x0c80,	// (0x00033d29) list_single_clock2_pane_ParamLimits

0x0c80,	// (0x00033d29) list_single_clock2_pane

0xcfe4,	// (0x0004008d) list_highlight_pane_cp08

0x0c8d,	// (0x00033d36) list_single_clock2_pane_t1

0x0c9b,	// (0x00033d44) list_single_clock2_pane_t2

0x0001,

0xfb6a,	// (0x00042c13) list_single_clock2_pane_t

0x449d,	// (0x00037546) bg_button_pane_cp10

0x0ca9,	// (0x00033d52) cell_clock2_toolbar_pane_g1

0x6e19,	// (0x00039ec2) aid_main_viewer_pane_g1_ParamLimits

0x6e19,	// (0x00039ec2) aid_main_viewer_pane_g1

0x6e25,	// (0x00039ece) aid_main_viewer_pane_g2_ParamLimits

0x6e25,	// (0x00039ece) aid_main_viewer_pane_g2

0x6e31,	// (0x00039eda) aid_main_viewer_pane_g3_ParamLimits

0x6e31,	// (0x00039eda) aid_main_viewer_pane_g3

0x6e42,	// (0x00039eeb) aid_main_viewer_pane_g4_ParamLimits

0x6e42,	// (0x00039eeb) aid_main_viewer_pane_g4

0x0003,

0xf4bd,	// (0x00042566) aid_main_viewer_pane_g_ParamLimits

0xf4bd,	// (0x00042566) aid_main_viewer_pane_g

0x75d2,	// (0x0003a67b) main_calc_pane_ParamLimits

0x75ed,	// (0x0003a696) main_dialer2_pane_ParamLimits

0x449d,	// (0x00037546) main_cam6_pane

0x449d,	// (0x00037546) main_vid6_pane

0x8872,	// (0x0003b91b) listscroll_gen_pane_cp06_ParamLimits

0x8872,	// (0x0003b91b) listscroll_gen_pane_cp06

0x8942,	// (0x0003b9eb) main_clock2_pane_t5_ParamLimits

0x8942,	// (0x0003b9eb) main_clock2_pane_t5

0x8991,	// (0x0003ba3a) aid_call2_pane_cp10_ParamLimits

0x89a3,	// (0x0003ba4c) aid_call_pane_cp10_ParamLimits

0xcf19,	// (0x0003ffc2) popup_clock_analogue_window_cp10_g1_ParamLimits

0xcf19,	// (0x0003ffc2) popup_clock_analogue_window_cp10_g2_ParamLimits

0x89b5,	// (0x0003ba5e) popup_clock_analogue_window_cp10_g3_ParamLimits

0x89b5,	// (0x0003ba5e) popup_clock_analogue_window_cp10_g4_ParamLimits

0xcf19,	// (0x0003ffc2) popup_clock_analogue_window_cp10_g5_ParamLimits

0xf7f3,	// (0x0004289c) popup_clock_analogue_window_cp10_g_ParamLimits

0x89c7,	// (0x0003ba70) popup_clock_analogue_window_cp10_t1_ParamLimits

0x9170,	// (0x0003c219) cell_dialer2_keypad_pane_g2_ParamLimits

0x9170,	// (0x0003c219) cell_dialer2_keypad_pane_g2

0x0001,

0xf8d9,	// (0x00042982) cell_dialer2_keypad_pane_g_ParamLimits

0xf8d9,	// (0x00042982) cell_dialer2_keypad_pane_g

0x918c,	// (0x0003c235) cell_dialer2_keypad_pane_t1

0x9b4a,	// (0x0003cbf3) main_cset_text2_pane_ParamLimits

0x9b4a,	// (0x0003cbf3) main_cset_text2_pane

0x0930,	// (0x000339d9) area_vitu2_query_pane_g1_ParamLimits

0x38a7,	// (0x00036950) area_vitu2_query_pane_g2_ParamLimits

0xfa8e,	// (0x00042b37) area_vitu2_query_pane_g_ParamLimits

0x3958,	// (0x00036a01) area_vitu2_query_pane_t7_ParamLimits

0x3958,	// (0x00036a01) area_vitu2_query_pane_t7

0xa2c3,	// (0x0003d36c) bg_button_pane_cp018_ParamLimits

0xa2d1,	// (0x0003d37a) bg_button_pane_cp021_ParamLimits

0x397c,	// (0x00036a25) bg_button_pane_cp022_ParamLimits

0x397c,	// (0x00036a25) bg_vkb2_func_pane_cp08_ParamLimits

0xa2c3,	// (0x0003d36c) bg_vkb2_func_pane_cp06_ParamLimits

0xa2d1,	// (0x0003d37a) bg_vkb2_func_pane_cp07_ParamLimits

0x398d,	// (0x00036a36) input_focus_pane_cp09_ParamLimits

0xa75e,	// (0x0003d807) cam6_autofocus_pane_ParamLimits

0xa75e,	// (0x0003d807) cam6_autofocus_pane

0xa780,	// (0x0003d829) cam6_image_uncrop_pane_ParamLimits

0xa780,	// (0x0003d829) cam6_image_uncrop_pane

0xa7ad,	// (0x0003d856) cam6_indi_pane_ParamLimits

0xa7ad,	// (0x0003d856) cam6_indi_pane

0xa7c7,	// (0x0003d870) cam6_mode_pane_ParamLimits

0xa7c7,	// (0x0003d870) cam6_mode_pane

0xa7db,	// (0x0003d884) cam6_timer_pane_ParamLimits

0xa7db,	// (0x0003d884) cam6_timer_pane

0xa7e7,	// (0x0003d890) cam6_zoom_pane_ParamLimits

0xa7e7,	// (0x0003d890) cam6_zoom_pane

0x9556,	// (0x0003c5ff) cam6_mode_pane_g1_ParamLimits

0x9556,	// (0x0003c5ff) cam6_mode_pane_g1

0x956e,	// (0x0003c617) cam6_mode_pane_g2_ParamLimits

0x956e,	// (0x0003c617) cam6_mode_pane_g2

0x957a,	// (0x0003c623) cam6_mode_pane_g3_ParamLimits

0x957a,	// (0x0003c623) cam6_mode_pane_g3

0x9586,	// (0x0003c62f) cam6_mode_pane_g4_ParamLimits

0x9586,	// (0x0003c62f) cam6_mode_pane_g4

0x0003,

0xfb6f,	// (0x00042c18) cam6_mode_pane_g_ParamLimits

0xfb6f,	// (0x00042c18) cam6_mode_pane_g

0x0cbf,	// (0x00033d68) bg_tb_trans_pane_cp08_ParamLimits

0x0cbf,	// (0x00033d68) bg_tb_trans_pane_cp08

0x0ccd,	// (0x00033d76) cam6_battery_pane_ParamLimits

0x0ccd,	// (0x00033d76) cam6_battery_pane

0x0ce3,	// (0x00033d8c) cam6_indi_pane_g1_ParamLimits

0x0ce3,	// (0x00033d8c) cam6_indi_pane_g1

0x0cf5,	// (0x00033d9e) cam6_indi_pane_g2_ParamLimits

0x0cf5,	// (0x00033d9e) cam6_indi_pane_g2

0x0d07,	// (0x00033db0) cam6_indi_pane_g3_ParamLimits

0x0d07,	// (0x00033db0) cam6_indi_pane_g3

0x0002,

0xfb78,	// (0x00042c21) cam6_indi_pane_g_ParamLimits

0xfb78,	// (0x00042c21) cam6_indi_pane_g

0x0d19,	// (0x00033dc2) cam6_indi_pane_t1_ParamLimits

0x0d19,	// (0x00033dc2) cam6_indi_pane_t1

0x9636,	// (0x0003c6df) cam6_autofocus_pane_g1

0x963e,	// (0x0003c6e7) cam6_autofocus_pane_g2

0x9646,	// (0x0003c6ef) cam6_autofocus_pane_g3

0x964e,	// (0x0003c6f7) cam6_autofocus_pane_g4

0x0003,

0xfb7f,	// (0x00042c28) cam6_autofocus_pane_g

0x0d3f,	// (0x00033de8) cam6_timer_pane_g1

0x0d47,	// (0x00033df0) cam6_timer_pane_t1

0x0d55,	// (0x00033dfe) cam6_zoom_cont_pane

0x0d5d,	// (0x00033e06) cam6_zoom_pane_g1

0x0d65,	// (0x00033e0e) cam6_zoom_pane_g2

0xa805,	// (0x0003d8ae) cam6_zoom_pane_g3

0x0002,

0xfb88,	// (0x00042c31) cam6_zoom_pane_g

0xe896,	// (0x0004193f) cam6_battery_pane_g1

0xe896,	// (0x0004193f) cam6_battery_pane_g2

0x0001,

0xf700,	// (0x000427a9) cam6_battery_pane_g

0x0d6d,	// (0x00033e16) cam6_zoom_cont_pane_g1

0x0d76,	// (0x00033e1f) cam6_zoom_cont_pane_g2

0x0d7f,	// (0x00033e28) cam6_zoom_cont_pane_g3

0x0002,

0xfb8f,	// (0x00042c38) cam6_zoom_cont_pane_g

0xa822,	// (0x0003d8cb) cam6_mode_pane_cp_ParamLimits

0xa822,	// (0x0003d8cb) cam6_mode_pane_cp

0xa7e7,	// (0x0003d890) cam6_zoom_pane_cp_ParamLimits

0xa7e7,	// (0x0003d890) cam6_zoom_pane_cp

0xa836,	// (0x0003d8df) vid6_image_uncrop_cif_pane_ParamLimits

0xa836,	// (0x0003d8df) vid6_image_uncrop_cif_pane

0xa862,	// (0x0003d90b) vid6_image_uncrop_nhd_pane_ParamLimits

0xa862,	// (0x0003d90b) vid6_image_uncrop_nhd_pane

0xa780,	// (0x0003d829) vid6_image_uncrop_vga_pane_ParamLimits

0xa780,	// (0x0003d829) vid6_image_uncrop_vga_pane

0xa881,	// (0x0003d92a) vid6_image_uncrop_wvga_pane_ParamLimits

0xa881,	// (0x0003d92a) vid6_image_uncrop_wvga_pane

0xa8a0,	// (0x0003d949) vid6_indi_pane_ParamLimits

0xa8a0,	// (0x0003d949) vid6_indi_pane

0x0cbf,	// (0x00033d68) bg_tb_trans_pane_cp09_ParamLimits

0x0cbf,	// (0x00033d68) bg_tb_trans_pane_cp09

0x0d97,	// (0x00033e40) cam6_battery_pane_cp_ParamLimits

0x0d97,	// (0x00033e40) cam6_battery_pane_cp

0x0da3,	// (0x00033e4c) vid6_indi_pane_g1_ParamLimits

0x0da3,	// (0x00033e4c) vid6_indi_pane_g1

0x0db5,	// (0x00033e5e) vid6_indi_pane_g2_ParamLimits

0x0db5,	// (0x00033e5e) vid6_indi_pane_g2

0x0dc7,	// (0x00033e70) vid6_indi_pane_g3_ParamLimits

0x0dc7,	// (0x00033e70) vid6_indi_pane_g3

0x0dde,	// (0x00033e87) vid6_indi_pane_g4_ParamLimits

0x0dde,	// (0x00033e87) vid6_indi_pane_g4

0x0df5,	// (0x00033e9e) vid6_indi_pane_g5_ParamLimits

0x0df5,	// (0x00033e9e) vid6_indi_pane_g5

0x0004,

0xfb96,	// (0x00042c3f) vid6_indi_pane_g_ParamLimits

0xfb96,	// (0x00042c3f) vid6_indi_pane_g

0x0e0f,	// (0x00033eb8) vid6_indi_pane_t1_ParamLimits

0x0e0f,	// (0x00033eb8) vid6_indi_pane_t1

0x0e25,	// (0x00033ece) vid6_indi_pane_t2_ParamLimits

0x0e25,	// (0x00033ece) vid6_indi_pane_t2

0x0e4d,	// (0x00033ef6) vid6_indi_pane_t3_ParamLimits

0x0e4d,	// (0x00033ef6) vid6_indi_pane_t3

0x0e75,	// (0x00033f1e) vid6_indi_pane_t4_ParamLimits

0x0e75,	// (0x00033f1e) vid6_indi_pane_t4

0x0003,

0xfba1,	// (0x00042c4a) vid6_indi_pane_t_ParamLimits

0xfba1,	// (0x00042c4a) vid6_indi_pane_t

0x0e99,	// (0x00033f42) wait_bar_pane_cp08

0xa8c5,	// (0x0003d96e) main_cset_text2_pane_t1_ParamLimits

0xa8c5,	// (0x0003d96e) main_cset_text2_pane_t1

0xa80d,	// (0x0003d8b6) listscroll_gen_pane_cp06_t1_ParamLimits

0xa80d,	// (0x0003d8b6) listscroll_gen_pane_cp06_t1

0x449d,	// (0x00037546) main_cam6_set_pane

0xeac6,	// (0x00041b6f) bg_tb_trans_pane_cp06_ParamLimits

0x94ff,	// (0x0003c5a8) cam4_indicators_pane_g1_ParamLimits

0x950c,	// (0x0003c5b5) cam4_indicators_pane_g2_ParamLimits

0xf916,	// (0x000429bf) cam4_indicators_pane_g_ParamLimits

0x952c,	// (0x0003c5d5) cam4_indicators_pane_t1_ParamLimits

0x75df,	// (0x0003a688) bg_tb_trans_pane_cp07_ParamLimits

0x94ff,	// (0x0003c5a8) vid4_indicators_pane_g1_ParamLimits

0x95e2,	// (0x0003c68b) vid4_indicators_pane_g2_ParamLimits

0x95ef,	// (0x0003c698) vid4_indicators_pane_g3_ParamLimits

0x9600,	// (0x0003c6a9) vid4_indicators_pane_g4_ParamLimits

0xf928,	// (0x000429d1) vid4_indicators_pane_g_ParamLimits

0x961c,	// (0x0003c6c5) vid4_indicators_pane_t1_ParamLimits

0xa3ed,	// (0x0003d496) vid4_progress_pane_g1_ParamLimits

0xa3f9,	// (0x0003d4a2) vid4_progress_pane_g2_ParamLimits

0xa405,	// (0x0003d4ae) vid4_progress_pane_g3_ParamLimits

0xa414,	// (0x0003d4bd) vid4_progress_pane_g4_ParamLimits

0xfad9,	// (0x00042b82) vid4_progress_pane_g_ParamLimits

0xa432,	// (0x0003d4db) vid4_progress_pane_t1_ParamLimits

0xa448,	// (0x0003d4f1) vid4_progress_pane_t2_ParamLimits

0xa45e,	// (0x0003d507) vid4_progress_pane_t3_ParamLimits

0xfae4,	// (0x00042b8d) vid4_progress_pane_t_ParamLimits

0xa473,	// (0x0003d51c) wait_bar_pane_cp07_ParamLimits

0xa8ec,	// (0x0003d995) main_cam6_set_pane_g2_ParamLimits

0xa8ec,	// (0x0003d995) main_cam6_set_pane_g2

0xa8f8,	// (0x0003d9a1) main_cset6_listscroll_pane_ParamLimits

0xa8f8,	// (0x0003d9a1) main_cset6_listscroll_pane

0xa925,	// (0x0003d9ce) main_cset6_slider_pane_ParamLimits

0xa925,	// (0x0003d9ce) main_cset6_slider_pane

0xa931,	// (0x0003d9da) main_cset6_text2_pane_ParamLimits

0xa931,	// (0x0003d9da) main_cset6_text2_pane

0x0ea8,	// (0x00033f51) main_cset6_text_pane

0x0eb0,	// (0x00033f59) main_cset_list_pane_copy1_ParamLimits

0x0eb0,	// (0x00033f59) main_cset_list_pane_copy1

0x0ec0,	// (0x00033f69) scroll_pane_cp028_copy1

0xa944,	// (0x0003d9ed) cset_list_set_pane_copy1

0xa954,	// (0x0003d9fd) aid_position_infowindow_above_copy1

0xa95c,	// (0x0003da05) aid_position_infowindow_below_copy1

0x39e6,	// (0x00036a8f) cset_list_set_pane_g1_copy1

0x39ee,	// (0x00036a97) cset_list_set_pane_g3_copy1_ParamLimits

0x39ee,	// (0x00036a97) cset_list_set_pane_g3_copy1

0x39fd,	// (0x00036aa6) cset_list_set_pane_t1_copy1_ParamLimits

0x39fd,	// (0x00036aa6) cset_list_set_pane_t1_copy1

0x75df,	// (0x0003a688) list_highlight_pane_cp021_copy1_ParamLimits

0x75df,	// (0x0003a688) list_highlight_pane_cp021_copy1

0x0eed,	// (0x00033f96) cset6_slider_pane_ParamLimits

0x0eed,	// (0x00033f96) cset6_slider_pane

0x0f19,	// (0x00033fc2) main_cset6_slider_pane_g1_ParamLimits

0x0f19,	// (0x00033fc2) main_cset6_slider_pane_g1

0xa964,	// (0x0003da0d) main_cset6_slider_pane_g2_ParamLimits

0xa964,	// (0x0003da0d) main_cset6_slider_pane_g2

0x0f41,	// (0x00033fea) main_cset6_slider_pane_g3_ParamLimits

0x0f41,	// (0x00033fea) main_cset6_slider_pane_g3

0xa98c,	// (0x0003da35) main_cset6_slider_pane_g4_ParamLimits

0xa98c,	// (0x0003da35) main_cset6_slider_pane_g4

0xa998,	// (0x0003da41) main_cset6_slider_pane_g5_ParamLimits

0xa998,	// (0x0003da41) main_cset6_slider_pane_g5

0x0553,	// (0x000335fc) main_cset6_slider_pane_g7_ParamLimits

0x0553,	// (0x000335fc) main_cset6_slider_pane_g7

0x055f,	// (0x00033608) main_cset6_slider_pane_g8_ParamLimits

0x055f,	// (0x00033608) main_cset6_slider_pane_g8

0xa9a4,	// (0x0003da4d) main_cset6_slider_pane_g9_ParamLimits

0xa9a4,	// (0x0003da4d) main_cset6_slider_pane_g9

0xa9b0,	// (0x0003da59) main_cset6_slider_pane_g10_ParamLimits

0xa9b0,	// (0x0003da59) main_cset6_slider_pane_g10

0xa9bc,	// (0x0003da65) main_cset6_slider_pane_g11_ParamLimits

0xa9bc,	// (0x0003da65) main_cset6_slider_pane_g11

0xa9c8,	// (0x0003da71) main_cset6_slider_pane_g12_ParamLimits

0xa9c8,	// (0x0003da71) main_cset6_slider_pane_g12

0xa9d4,	// (0x0003da7d) main_cset6_slider_pane_g13_ParamLimits

0xa9d4,	// (0x0003da7d) main_cset6_slider_pane_g13

0xa9e0,	// (0x0003da89) main_cset6_slider_pane_g14_ParamLimits

0xa9e0,	// (0x0003da89) main_cset6_slider_pane_g14

0xa9ec,	// (0x0003da95) main_cset6_slider_pane_g15_ParamLimits

0xa9ec,	// (0x0003da95) main_cset6_slider_pane_g15

0xaa04,	// (0x0003daad) main_cset6_slider_pane_g16_ParamLimits

0xaa04,	// (0x0003daad) main_cset6_slider_pane_g16

0xaa10,	// (0x0003dab9) main_cset6_slider_pane_g17_ParamLimits

0xaa10,	// (0x0003dab9) main_cset6_slider_pane_g17

0x0011,

0xfbaa,	// (0x00042c53) main_cset6_slider_pane_g_ParamLimits

0xfbaa,	// (0x00042c53) main_cset6_slider_pane_g

0x0f4d,	// (0x00033ff6) main_cset6_slider_pane_t1_ParamLimits

0x0f4d,	// (0x00033ff6) main_cset6_slider_pane_t1

0xaa34,	// (0x0003dadd) main_cset6_slider_pane_t2_ParamLimits

0xaa34,	// (0x0003dadd) main_cset6_slider_pane_t2

0xaa5f,	// (0x0003db08) main_cset6_slider_pane_t3_ParamLimits

0xaa5f,	// (0x0003db08) main_cset6_slider_pane_t3

0xaa8a,	// (0x0003db33) main_cset6_slider_pane_t4_ParamLimits

0xaa8a,	// (0x0003db33) main_cset6_slider_pane_t4

0xaab5,	// (0x0003db5e) main_cset6_slider_pane_t5_ParamLimits

0xaab5,	// (0x0003db5e) main_cset6_slider_pane_t5

0x0f8e,	// (0x00034037) main_cset6_slider_pane_t7_ParamLimits

0x0f8e,	// (0x00034037) main_cset6_slider_pane_t7

0xaae0,	// (0x0003db89) main_cset6_slider_pane_t8_ParamLimits

0xaae0,	// (0x0003db89) main_cset6_slider_pane_t8

0xab04,	// (0x0003dbad) main_cset6_slider_pane_t9_ParamLimits

0xab04,	// (0x0003dbad) main_cset6_slider_pane_t9

0xab28,	// (0x0003dbd1) main_cset6_slider_pane_t10_ParamLimits

0xab28,	// (0x0003dbd1) main_cset6_slider_pane_t10

0xab4c,	// (0x0003dbf5) main_cset6_slider_pane_t11_ParamLimits

0xab4c,	// (0x0003dbf5) main_cset6_slider_pane_t11

0x0fc4,	// (0x0003406d) main_cset6_slider_pane_t14_ParamLimits

0x0fc4,	// (0x0003406d) main_cset6_slider_pane_t14

0x0ffd,	// (0x000340a6) main_cset6_slider_pane_t15_ParamLimits

0x0ffd,	// (0x000340a6) main_cset6_slider_pane_t15

0x000b,

0xfbcf,	// (0x00042c78) main_cset6_slider_pane_t_ParamLimits

0xfbcf,	// (0x00042c78) main_cset6_slider_pane_t

0x1036,	// (0x000340df) cset_slider_pane_g1_copy1

0x103f,	// (0x000340e8) cset_slider_pane_g2_copy1

0x1048,	// (0x000340f1) cset_slider_pane_g3_copy1

0x449d,	// (0x00037546) bg_popup_sub_pane_cp011_copy1

0x0744,	// (0x000337ed) main_cset_text_pane_g1_copy1

0x074c,	// (0x000337f5) main_cset_text_pane_t1_copy1

0x075a,	// (0x00033803) main_cset_text_pane_t2_copy1

0x0768,	// (0x00033811) main_cset_text_pane_t3_copy1

0x0776,	// (0x0003381f) main_cset_text_pane_t4_copy1

0x0784,	// (0x0003382d) main_cset_text_pane_t5_copy1

0x0792,	// (0x0003383b) main_cset_text_pane_t6_copy1

0x07a0,	// (0x00033849) main_cset_text_pane_t7_copy1

0xab70,	// (0x0003dc19) main_cset_text2_pane_t1_copy1

0x449d,	// (0x00037546) main_ncimui_pane

0x7632,	// (0x0003a6db) popup_query_ncimui_window_ParamLimits

0x7632,	// (0x0003a6db) popup_query_ncimui_window

0x35e5,	// (0x0003668e) field_cale_ev2_pane_g4_ParamLimits

0x35e5,	// (0x0003668e) field_cale_ev2_pane_g4

0x8eb0,	// (0x0003bf59) cell_video_dialer_keypad_pane_g2_ParamLimits

0x8eb0,	// (0x0003bf59) cell_video_dialer_keypad_pane_g2

0x0001,

0xf8b4,	// (0x0004295d) cell_video_dialer_keypad_pane_g_ParamLimits

0xf8b4,	// (0x0004295d) cell_video_dialer_keypad_pane_g

0x8ec8,	// (0x0003bf71) cell_video_dialer_keypad_pane_t1

0x449d,	// (0x00037546) bg_popup_window_pane_cp012

0xcd96,	// (0x0003fe3f) heading_pane_cp06

0x1140,	// (0x000341e9) ncim_query_content_pane

0x449d,	// (0x00037546) bg_popup_heading_pane_cp01

0x1148,	// (0x000341f1) ncim_heading_pane_t1

0x1156,	// (0x000341ff) ncim_indicator_popup_pane

0x1168,	// (0x00034211) ncim_query_button_pane

0x117e,	// (0x00034227) ncim_query_content_pane_t1

0x1190,	// (0x00034239) ncim_query_content_pane_t2

0x0005,

0xfc0e,	// (0x00042cb7) ncim_query_content_pane_t

0x11ca,	// (0x00034273) ncim_query_list_pane

0x11dc,	// (0x00034285) ncim_query_popup_pane

0x1156,	// (0x000341ff) ncim_indicator_popup_pane_ParamLimits

0xac9b,	// (0x0003dd44) ncim_query_content_pane_g1_ParamLimits

0xac9b,	// (0x0003dd44) ncim_query_content_pane_g1

0x117e,	// (0x00034227) ncim_query_content_pane_t1_ParamLimits

0x1190,	// (0x00034239) ncim_query_content_pane_t2_ParamLimits

0xaca7,	// (0x0003dd50) ncim_query_content_pane_t3_ParamLimits

0xaca7,	// (0x0003dd50) ncim_query_content_pane_t3

0xacc4,	// (0x0003dd6d) ncim_query_content_pane_t4_ParamLimits

0xacc4,	// (0x0003dd6d) ncim_query_content_pane_t4

0xace1,	// (0x0003dd8a) ncim_query_content_pane_t5_ParamLimits

0xace1,	// (0x0003dd8a) ncim_query_content_pane_t5

0x11a2,	// (0x0003424b) ncim_query_content_pane_t6_ParamLimits

0x11a2,	// (0x0003424b) ncim_query_content_pane_t6

0xfc0e,	// (0x00042cb7) ncim_query_content_pane_t_ParamLimits

0x11ca,	// (0x00034273) ncim_query_list_pane_ParamLimits

0x11dc,	// (0x00034285) ncim_query_popup_pane_ParamLimits

0x11f0,	// (0x00034299) wait_bar_pane_cp04

0x449d,	// (0x00037546) input_focus_pane_cp011

0x11f8,	// (0x000342a1) ncim_query_popup_pane_t1

0x1206,	// (0x000342af) ncim_list_query_list_pane_ParamLimits

0x1206,	// (0x000342af) ncim_list_query_list_pane

0x449d,	// (0x00037546) bg_button_pane_cp027

0x1219,	// (0x000342c2) ncim_query_button_pane_g1

0x449d,	// (0x00037546) list_highlight_pane_cp012

0x1223,	// (0x000342cc) ncim_list_query_list_pane_g1

0x122b,	// (0x000342d4) ncim_list_query_list_pane_t1

0x951c,	// (0x0003c5c5) cam4_indicators_pane_g3_ParamLimits

0x951c,	// (0x0003c5c5) cam4_indicators_pane_g3

0x960c,	// (0x0003c6b5) vid4_indicators_pane_g5_ParamLimits

0x960c,	// (0x0003c6b5) vid4_indicators_pane_g5

0xa423,	// (0x0003d4cc) vid4_progress_pane_g5_ParamLimits

0xa423,	// (0x0003d4cc) vid4_progress_pane_g5

0xaba2,	// (0x0003dc4b) main_ncimui_pane_g1

0xabfc,	// (0x0003dca5) ncimui_group_query_pane_ParamLimits

0xabfc,	// (0x0003dca5) ncimui_group_query_pane

0xac46,	// (0x0003dcef) ncimui_list_pane_ParamLimits

0xac46,	// (0x0003dcef) ncimui_list_pane

0xac67,	// (0x0003dd10) ncimui_text_pane_ParamLimits

0xac67,	// (0x0003dd10) ncimui_text_pane

0xacfe,	// (0x0003dda7) ncimui_text_pane_t1_ParamLimits

0xacfe,	// (0x0003dda7) ncimui_text_pane_t1

0x1239,	// (0x000342e2) ncimui_list_single_graphic_pane_ParamLimits

0x1239,	// (0x000342e2) ncimui_list_single_graphic_pane

0xad1d,	// (0x0003ddc6) ncimui_query_pane_ParamLimits

0xad1d,	// (0x0003ddc6) ncimui_query_pane

0x449d,	// (0x00037546) list_highlight_pane_cp013

0x1249,	// (0x000342f2) ncim_list_query_list_pane_t1_copy1

0x1223,	// (0x000342cc) ncim_list_single_graphic_pane_g1

0x1257,	// (0x00034300) ncim_query_button_pane_cp01

0x1263,	// (0x0003430c) ncim_query_entry_pane_ParamLimits

0x1263,	// (0x0003430c) ncim_query_entry_pane

0x1276,	// (0x0003431f) ncimui_query_pane_g1

0x1282,	// (0x0003432b) ncimui_query_pane_t1_ParamLimits

0x1282,	// (0x0003432b) ncimui_query_pane_t1

0x75df,	// (0x0003a688) input_focus_pane_cp012

0x129b,	// (0x00034344) ncim_query_entry_pane_t1

0xc590,	// (0x0003f639) main_im_pane_ParamLimits

0x75df,	// (0x0003a688) main_mobtv_pane_ParamLimits

0x75df,	// (0x0003a688) main_mobtv_pane

0xaa1c,	// (0x0003dac5) main_cset6_slider_pane_g18_ParamLimits

0xaa1c,	// (0x0003dac5) main_cset6_slider_pane_g18

0xaa28,	// (0x0003dad1) main_cset6_slider_pane_g19_ParamLimits

0xaa28,	// (0x0003dad1) main_cset6_slider_pane_g19

0x03d5,	// (0x0003347e) bg_main_mobtv_pane_ParamLimits

0x03d5,	// (0x0003347e) bg_main_mobtv_pane

0xad30,	// (0x0003ddd9) main_mobtv_info_pane

0xad3b,	// (0x0003dde4) main_mobtv_loading_pane_ParamLimits

0xad3b,	// (0x0003dde4) main_mobtv_loading_pane

0x12bb,	// (0x00034364) main_mobtv_pg_channel_list_pane

0x12c5,	// (0x0003436e) main_mobtv_pg_hdr_pane

0xad48,	// (0x0003ddf1) main_mobtv_programe_curr_pane_ParamLimits

0xad48,	// (0x0003ddf1) main_mobtv_programe_curr_pane

0xad55,	// (0x0003ddfe) main_mobtv_programe_next_pane_ParamLimits

0xad55,	// (0x0003ddfe) main_mobtv_programe_next_pane

0x12ce,	// (0x00034377) popup_mobtv_noti_window

0xe896,	// (0x0004193f) main_tv_pg_hdr_pane_g1

0x12d8,	// (0x00034381) main_tv_pg_hdr_pane_g2

0x12e0,	// (0x00034389) main_tv_pg_hdr_pane_g3

0x12e8,	// (0x00034391) main_tv_pg_hdr_pane_g4

0x12f0,	// (0x00034399) main_tv_pg_hdr_pane_g5

0x12fa,	// (0x000343a3) main_tv_pg_hdr_pane_g6

0x1304,	// (0x000343ad) main_tv_pg_hdr_pane_g7

0x130e,	// (0x000343b7) main_tv_pg_hdr_pane_g8

0x1318,	// (0x000343c1) main_tv_pg_hdr_pane_g9

0x1322,	// (0x000343cb) main_tv_pg_hdr_pane_g10

0x132c,	// (0x000343d5) main_tv_pg_hdr_pane_g11

0x000a,

0xfc1b,	// (0x00042cc4) main_tv_pg_hdr_pane_g

0x1336,	// (0x000343df) main_tv_pg_hdr_pane_t1

0x1344,	// (0x000343ed) main_tv_pg_hdr_pane_t2

0x1352,	// (0x000343fb) main_tv_pg_hdr_pane_t3

0x1362,	// (0x0003440b) main_tv_pg_hdr_pane_t4

0x1372,	// (0x0003441b) main_tv_pg_hdr_pane_t5

0x0004,

0xfc32,	// (0x00042cdb) main_tv_pg_hdr_pane_t

0x1382,	// (0x0003442b) single_mobtv_pg_channel_pane_ParamLimits

0x1382,	// (0x0003442b) single_mobtv_pg_channel_pane

0x1394,	// (0x0003443d) single_mobtv_pg_channel_table_pane

0x139d,	// (0x00034446) single_mobtv_pg_channel_thumb_pane

0x13a6,	// (0x0003444f) single_tv_pg_channel_pane_g1

0x13af,	// (0x00034458) single_tv_pg_channel_pane_g2

0x0001,

0xfc3d,	// (0x00042ce6) single_tv_pg_channel_pane_g

0xeac6,	// (0x00041b6f) bg_single_mobtv_pg_channel_thumb_pane_ParamLimits

0xeac6,	// (0x00041b6f) bg_single_mobtv_pg_channel_thumb_pane

0x13b8,	// (0x00034461) single_mobtv_pg_channel_thumb_pane_g1_ParamLimits

0x13b8,	// (0x00034461) single_mobtv_pg_channel_thumb_pane_g1

0x13c6,	// (0x0003446f) single_mobtv_pg_channel_thumb_pane_g2_ParamLimits

0x13c6,	// (0x0003446f) single_mobtv_pg_channel_thumb_pane_g2

0x13d2,	// (0x0003447b) single_mobtv_pg_channel_thumb_pane_g3_ParamLimits

0x13d2,	// (0x0003447b) single_mobtv_pg_channel_thumb_pane_g3

0x0002,

0xfc42,	// (0x00042ceb) single_mobtv_pg_channel_thumb_pane_g_ParamLimits

0xfc42,	// (0x00042ceb) single_mobtv_pg_channel_thumb_pane_g

0x13de,	// (0x00034487) single_mobtv_pg_channel_thumb_pane_t1

0x13ec,	// (0x00034495) single_mobtv_pg_channel_thumb_pane_t2

0x0001,

0xfc49,	// (0x00042cf2) single_mobtv_pg_channel_thumb_pane_t

0xe896,	// (0x0004193f) bg_single_mobtv_pg_channel_table_pane_g1

0xe896,	// (0x0004193f) bg_single_mobtv_pg_channel_table_pane_g2

0x0001,

0xf700,	// (0x000427a9) bg_single_mobtv_pg_channel_table_pane_g

0x13fa,	// (0x000344a3) single_mobtv_pg_channel_table_pane_t1

0x1408,	// (0x000344b1) single_mobtv_pg_channel_table_pane_t2

0x0001,

0xfc4e,	// (0x00042cf7) single_mobtv_pg_channel_table_pane_t

0xad6a,	// (0x0003de13) main_mobtv_info_pane_g1_ParamLimits

0xad6a,	// (0x0003de13) main_mobtv_info_pane_g1

0xad86,	// (0x0003de2f) main_mobtv_info_pane_t1_ParamLimits

0xad86,	// (0x0003de2f) main_mobtv_info_pane_t1

0xadfe,	// (0x0003dea7) main_mobtv_info_pane_t2_ParamLimits

0xadfe,	// (0x0003dea7) main_mobtv_info_pane_t2

0x0002,

0xfc58,	// (0x00042d01) main_mobtv_info_pane_t_ParamLimits

0xfc58,	// (0x00042d01) main_mobtv_info_pane_t

0xae91,	// (0x0003df3a) wait_bar_pane_cp05

0xaea3,	// (0x0003df4c) main_mobtv_loading_pane_g1_ParamLimits

0xaea3,	// (0x0003df4c) main_mobtv_loading_pane_g1

0xaeaf,	// (0x0003df58) main_mobtv_loading_pane_g2_ParamLimits

0xaeaf,	// (0x0003df58) main_mobtv_loading_pane_g2

0xaebb,	// (0x0003df64) main_mobtv_loading_pane_g3_ParamLimits

0xaebb,	// (0x0003df64) main_mobtv_loading_pane_g3

0x0002,

0xfc5f,	// (0x00042d08) main_mobtv_loading_pane_g_ParamLimits

0xfc5f,	// (0x00042d08) main_mobtv_loading_pane_g

0x1416,	// (0x000344bf) main_mobtv_loading_pane_t1_ParamLimits

0x1416,	// (0x000344bf) main_mobtv_loading_pane_t1

0x142e,	// (0x000344d7) main_mobtv_loading_pane_t2_ParamLimits

0x142e,	// (0x000344d7) main_mobtv_loading_pane_t2

0x0001,

0xfc66,	// (0x00042d0f) main_mobtv_loading_pane_t_ParamLimits

0xfc66,	// (0x00042d0f) main_mobtv_loading_pane_t

0xaec9,	// (0x0003df72) wait_bar_pane_cp06_ParamLimits

0xaec9,	// (0x0003df72) wait_bar_pane_cp06

0x1452,	// (0x000344fb) main_mobtv_programe_curr_pane_t1

0x1460,	// (0x00034509) main_mobtv_programe_curr_pane_t2

0x0001,

0xfc6b,	// (0x00042d14) main_mobtv_programe_curr_pane_t

0x146e,	// (0x00034517) main_mobtv_programe_next_pane_t1

0x147c,	// (0x00034525) main_mobtv_programe_next_pane_t2

0x148a,	// (0x00034533) main_mobtv_programe_next_pane_t3

0x0002,

0xfc70,	// (0x00042d19) main_mobtv_programe_next_pane_t

0x449d,	// (0x00037546) bg_popup_mobtv_noti_window_pane

0x1498,	// (0x00034541) popup_mobtv_noti_window_g1

0x14a0,	// (0x00034549) popup_mobtv_noti_window_t1

0x14ae,	// (0x00034557) popup_mobtv_noti_window_t2

0x0001,

0xfc77,	// (0x00042d20) popup_mobtv_noti_window_t

0xe896,	// (0x0004193f) bg_popup_mobtv_noti_window_pane_g1

0x449d,	// (0x00037546) sc_clock_pane

0x449d,	// (0x00037546) main_fs_bigclock_pane

0xa60d,	// (0x0003d6b6) blid2_tripm_pane_t4_ParamLimits

0xa60d,	// (0x0003d6b6) blid2_tripm_pane_t4

0xaed5,	// (0x0003df7e) sc_clock_pane_g1_ParamLimits

0xaed5,	// (0x0003df7e) sc_clock_pane_g1

0xaee3,	// (0x0003df8c) sc_clock_pane_t1_ParamLimits

0xaee3,	// (0x0003df8c) sc_clock_pane_t1

0xaef8,	// (0x0003dfa1) sc_clock_pane_t2_ParamLimits

0xaef8,	// (0x0003dfa1) sc_clock_pane_t2

0xaf0a,	// (0x0003dfb3) sc_clock_pane_t3_ParamLimits

0xaf0a,	// (0x0003dfb3) sc_clock_pane_t3

0x0004,

0xfc7c,	// (0x00042d25) sc_clock_pane_t_ParamLimits

0xfc7c,	// (0x00042d25) sc_clock_pane_t

0xb84a,	// (0x0003e8f3) main_fs_bigclock_indicator_pane_ParamLimits

0xb84a,	// (0x0003e8f3) main_fs_bigclock_indicator_pane

0xafab,	// (0x0003e054) main_fs_bigclock_pane_g1_ParamLimits

0xafab,	// (0x0003e054) main_fs_bigclock_pane_g1

0xb856,	// (0x0003e8ff) main_fs_bigclock_pane_t1_ParamLimits

0xb856,	// (0x0003e8ff) main_fs_bigclock_pane_t1

0xb868,	// (0x0003e911) main_fs_bigclock_pane_t2_ParamLimits

0xb868,	// (0x0003e911) main_fs_bigclock_pane_t2

0xb87c,	// (0x0003e925) main_fs_bigclock_pane_t3_ParamLimits

0xb87c,	// (0x0003e925) main_fs_bigclock_pane_t3

0x0002,

0xfe7b,	// (0x00042f24) main_fs_bigclock_pane_t_ParamLimits

0xfe7b,	// (0x00042f24) main_fs_bigclock_pane_t

0x1fed,	// (0x00035096) main_fs_bigclock_indicator_pane_g1

0x1170,	// (0x00034219) ncim_query_content_pane_g2_ParamLimits

0x1170,	// (0x00034219) ncim_query_content_pane_g2

0x0001,

0xfc09,	// (0x00042cb2) ncim_query_content_pane_g_ParamLimits

0xfc09,	// (0x00042cb2) ncim_query_content_pane_g

0xaf1c,	// (0x0003dfc5) sc_clock_pane_t4_ParamLimits

0xaf1c,	// (0x0003dfc5) sc_clock_pane_t4

0x75df,	// (0x0003a688) main_radioblah_pane

0x0277,	// (0x00033320) cell_call4_button_pane_t1_copy1_ParamLimits

0x0277,	// (0x00033320) cell_call4_button_pane_t1_copy1

0xabac,	// (0x0003dc55) main_ncimui_pane_t1_ParamLimits

0xabac,	// (0x0003dc55) main_ncimui_pane_t1

0xabc6,	// (0x0003dc6f) main_ncimui_pane_t2_ParamLimits

0xabc6,	// (0x0003dc6f) main_ncimui_pane_t2

0x0002,

0xfc02,	// (0x00042cab) main_ncimui_pane_t_ParamLimits

0xfc02,	// (0x00042cab) main_ncimui_pane_t

0x14bc,	// (0x00034565) main_radioblah_anim_pane_ParamLimits

0x14bc,	// (0x00034565) main_radioblah_anim_pane

0x14cd,	// (0x00034576) main_radioblah_info_pane_ParamLimits

0x14cd,	// (0x00034576) main_radioblah_info_pane

0x14e1,	// (0x0003458a) main_radioblah_pane_t1_ParamLimits

0x14e1,	// (0x0003458a) main_radioblah_pane_t1

0x14fd,	// (0x000345a6) main_radioblah_pane_t2_ParamLimits

0x14fd,	// (0x000345a6) main_radioblah_pane_t2

0x0003,

0xfc9d,	// (0x00042d46) main_radioblah_pane_t_ParamLimits

0xfc9d,	// (0x00042d46) main_radioblah_pane_t

0xb12e,	// (0x0003e1d7) main_radioblah_rocker_ctrl_pane_ParamLimits

0xb12e,	// (0x0003e1d7) main_radioblah_rocker_ctrl_pane

0x1545,	// (0x000345ee) main_radioblah_info_pane_t1_ParamLimits

0x1545,	// (0x000345ee) main_radioblah_info_pane_t1

0xb177,	// (0x0003e220) main_radioblah_info_pane_t2_ParamLimits

0xb177,	// (0x0003e220) main_radioblah_info_pane_t2

0x0003,

0xfca6,	// (0x00042d4f) main_radioblah_info_pane_t_ParamLimits

0xfca6,	// (0x00042d4f) main_radioblah_info_pane_t

0xe896,	// (0x0004193f) main_radioblah_rocker_ctrl_pane_g1

0xb227,	// (0x0003e2d0) main_radioblah_rocker_ctrl_pane_g2

0xb22f,	// (0x0003e2d8) main_radioblah_rocker_ctrl_pane_g3

0xb237,	// (0x0003e2e0) main_radioblah_rocker_ctrl_pane_g4

0xb23f,	// (0x0003e2e8) main_radioblah_rocker_ctrl_pane_g5

0xb247,	// (0x0003e2f0) main_radioblah_rocker_ctrl_pane_g6

0x0005,

0xfcaf,	// (0x00042d58) main_radioblah_rocker_ctrl_pane_g

0xab70,	// (0x0003dc19) main_cset_text2_pane_t1_copy1_ParamLimits

0x9449,	// (0x0003c4f2) cam4_image_uncrop_qvga_pane

0x9592,	// (0x0003c63b) vid4_image_uncrop_qcif_pane

0xa79f,	// (0x0003d848) cam6_image_uncrop_qvga_pane_ParamLimits

0xa79f,	// (0x0003d848) cam6_image_uncrop_qvga_pane

0x0d87,	// (0x00033e30) vid6_image_uncrop_qcif_pane_ParamLimits

0x0d87,	// (0x00033e30) vid6_image_uncrop_qcif_pane

0x449d,	// (0x00037546) bg_popup_preview_window_pane_cp03

0x1122,	// (0x000341cb) list_cset_text2_pane

0x112a,	// (0x000341d3) main_cset6_text2_pane_g1

0x1132,	// (0x000341db) main_cset6_text2_pane_t1

0xb24f,	// (0x0003e2f8) list_cset_text2_pane_t1_ParamLimits

0xb24f,	// (0x0003e2f8) list_cset_text2_pane_t1

0x75df,	// (0x0003a688) main_radioblah_pane_ParamLimits

0xae7d,	// (0x0003df26) main_mobtv_info_pane_t3_ParamLimits

0xae7d,	// (0x0003df26) main_mobtv_info_pane_t3

0xb11c,	// (0x0003e1c5) main_radioblah_pane_g1

0xb147,	// (0x0003e1f0) main_radioblah_info_pane_g1

0xb1cc,	// (0x0003e275) main_radioblah_info_pane_t3_ParamLimits

0xb1cc,	// (0x0003e275) main_radioblah_info_pane_t3

0x6317,	// (0x000393c0) highlight_cell_cale_month_pane_ParamLimits

0x6317,	// (0x000393c0) highlight_cell_cale_month_pane

0x449d,	// (0x00037546) main_phob_fisheye_pane

0xeba8,	// (0x00041c51) scroll_pane_cp0031_ParamLimits

0xeba8,	// (0x00041c51) scroll_pane_cp0031

0x0e99,	// (0x00033f42) wait_bar_pane_cp08_ParamLimits

0xa944,	// (0x0003d9ed) cset_list_set_pane_copy1_ParamLimits

0x1599,	// (0x00034642) highlight_cell_cale_month_pane_g1

0xb268,	// (0x0003e311) highlight_cell_cale_month_pane_t1

0x0a20,	// (0x00033ac9) list_gen_pane_cp01

0x053e,	// (0x000335e7) scroll_pane_01

0x39c0,	// (0x00036a69) list_single_double_fisheye_pane

0x3ae3,	// (0x00036b8c) list_double_fisheye_pane_g1_ParamLimits

0x3ae3,	// (0x00036b8c) list_double_fisheye_pane_g1

0x3aef,	// (0x00036b98) list_double_fisheye_pane_g2_ParamLimits

0x3aef,	// (0x00036b98) list_double_fisheye_pane_g2

0x3b03,	// (0x00036bac) list_double_fisheye_pane_g3_ParamLimits

0x3b03,	// (0x00036bac) list_double_fisheye_pane_g3

0x0004,

0xfcbc,	// (0x00042d65) list_double_fisheye_pane_g_ParamLimits

0xfcbc,	// (0x00042d65) list_double_fisheye_pane_g

0x3b2c,	// (0x00036bd5) list_double_fisheye_pane_t1_ParamLimits

0x3b2c,	// (0x00036bd5) list_double_fisheye_pane_t1

0x3b47,	// (0x00036bf0) list_double_fisheye_pane_t2_ParamLimits

0x3b47,	// (0x00036bf0) list_double_fisheye_pane_t2

0x0001,

0xfcc7,	// (0x00042d70) list_double_fisheye_pane_t_ParamLimits

0xfcc7,	// (0x00042d70) list_double_fisheye_pane_t

0x449d,	// (0x00037546) main_call5_pane

0xaf42,	// (0x0003dfeb) sc_swipe_pane_ParamLimits

0xaf42,	// (0x0003dfeb) sc_swipe_pane

0xb282,	// (0x0003e32b) call5_image_pane_ParamLimits

0xb282,	// (0x0003e32b) call5_image_pane

0xb294,	// (0x0003e33d) call5_swipe_1_pane_ParamLimits

0xb294,	// (0x0003e33d) call5_swipe_1_pane

0xb2a0,	// (0x0003e349) call5_swipe_2_pane_ParamLimits

0xb2a0,	// (0x0003e349) call5_swipe_2_pane

0xb2bc,	// (0x0003e365) popup_call5_audio_first_window_ParamLimits

0xb2bc,	// (0x0003e365) popup_call5_audio_first_window

0xeac6,	// (0x00041b6f) call5_swipe_1_pane_g1_ParamLimits

0xeac6,	// (0x00041b6f) call5_swipe_1_pane_g1

0x15de,	// (0x00034687) call5_swipe_1_pane_g2_ParamLimits

0x15de,	// (0x00034687) call5_swipe_1_pane_g2

0x0001,

0xfccc,	// (0x00042d75) call5_swipe_1_pane_g_ParamLimits

0xfccc,	// (0x00042d75) call5_swipe_1_pane_g

0x15ea,	// (0x00034693) call5_swipe_1_pane_t1_ParamLimits

0x15ea,	// (0x00034693) call5_swipe_1_pane_t1

0xeac6,	// (0x00041b6f) call5_swipe_2_pane_g1_ParamLimits

0xeac6,	// (0x00041b6f) call5_swipe_2_pane_g1

0x15ff,	// (0x000346a8) call5_swipe_2_pane_g2_ParamLimits

0x15ff,	// (0x000346a8) call5_swipe_2_pane_g2

0x0001,

0xfcd1,	// (0x00042d7a) call5_swipe_2_pane_g_ParamLimits

0xfcd1,	// (0x00042d7a) call5_swipe_2_pane_g

0x160b,	// (0x000346b4) call5_swipe_2_pane_t1_ParamLimits

0x160b,	// (0x000346b4) call5_swipe_2_pane_t1

0x1620,	// (0x000346c9) sc_swipe_pane_g1_ParamLimits

0x1620,	// (0x000346c9) sc_swipe_pane_g1

0x162d,	// (0x000346d6) sc_swipe_pane_g2_ParamLimits

0x162d,	// (0x000346d6) sc_swipe_pane_g2

0x0001,

0xfcd6,	// (0x00042d7f) sc_swipe_pane_g_ParamLimits

0xfcd6,	// (0x00042d7f) sc_swipe_pane_g

0x1639,	// (0x000346e2) sc_swipe_pane_t1_ParamLimits

0x1639,	// (0x000346e2) sc_swipe_pane_t1

0x449d,	// (0x00037546) main_cmail_launcher_pane

0xb2cc,	// (0x0003e375) aid_size_cell_cmail_l_ParamLimits

0xb2cc,	// (0x0003e375) aid_size_cell_cmail_l

0xb2dc,	// (0x0003e385) grid_cmail_l_pane_ParamLimits

0xb2dc,	// (0x0003e385) grid_cmail_l_pane

0xb2ec,	// (0x0003e395) cell_cmail_l_pane_ParamLimits

0xb2ec,	// (0x0003e395) cell_cmail_l_pane

0xb302,	// (0x0003e3ab) cell_cmail_l_pane_g1_ParamLimits

0xb302,	// (0x0003e3ab) cell_cmail_l_pane_g1

0xb30e,	// (0x0003e3b7) cell_cmail_l_pane_t1_ParamLimits

0xb30e,	// (0x0003e3b7) cell_cmail_l_pane_t1

0x164e,	// (0x000346f7) cell_cmail_l_pane_t2_ParamLimits

0x164e,	// (0x000346f7) cell_cmail_l_pane_t2

0x0001,

0xfcdb,	// (0x00042d84) cell_cmail_l_pane_t_ParamLimits

0xfcdb,	// (0x00042d84) cell_cmail_l_pane_t

0x75df,	// (0x0003a688) grid_highlight_pane_cp018_ParamLimits

0x75df,	// (0x0003a688) grid_highlight_pane_cp018

0x45c9,	// (0x00037672) main2_pane_ParamLimits

0x45c9,	// (0x00037672) main2_pane

0xc63b,	// (0x0003f6e4) popup_sp_fs_action_menu_bg_pane_g1

0xc643,	// (0x0003f6ec) popup_sp_fs_action_menu_bg_pane_g2

0xc64b,	// (0x0003f6f4) popup_sp_fs_action_menu_bg_pane_g3

0xc653,	// (0x0003f6fc) popup_sp_fs_action_menu_bg_pane_g4

0xc65b,	// (0x0003f704) popup_sp_fs_action_menu_bg_pane_g5

0xc663,	// (0x0003f70c) popup_sp_fs_action_menu_bg_pane_g6

0xc66b,	// (0x0003f714) popup_sp_fs_action_menu_bg_pane_g7

0xc673,	// (0x0003f71c) popup_sp_fs_action_menu_bg_pane_g8

0xc67b,	// (0x0003f724) popup_sp_fs_action_menu_bg_pane_g9

0xc683,	// (0x0003f72c) popup_sp_fs_action_menu_bg_pane_g10

0xc683,	// (0x0003f72c) popup_sp_fs_action_menu_bg_pane_g11

0x000a,

0xf1ac,	// (0x00042255) popup_sp_fs_action_menu_bg_pane_g

0x32b7,	// (0x00036360) list_medium_line_x2_t3_g3_g1_ParamLimits

0x32b7,	// (0x00036360) list_medium_line_x2_t3_g3_g1

0x32c3,	// (0x0003636c) list_medium_line_x2_t3_g3_g2_ParamLimits

0x32c3,	// (0x0003636c) list_medium_line_x2_t3_g3_g2

0x32cf,	// (0x00036378) list_medium_line_x2_t3_g3_g3_ParamLimits

0x32cf,	// (0x00036378) list_medium_line_x2_t3_g3_g3

0x0002,

0xf25c,	// (0x00042305) list_medium_line_x2_t3_g3_g_ParamLimits

0xf25c,	// (0x00042305) list_medium_line_x2_t3_g3_g

0x32db,	// (0x00036384) list_medium_line_x2_t3_g3_t1_ParamLimits

0x32db,	// (0x00036384) list_medium_line_x2_t3_g3_t1

0x32f0,	// (0x00036399) list_medium_line_x2_t3_g3_t2_ParamLimits

0x32f0,	// (0x00036399) list_medium_line_x2_t3_g3_t2

0x3304,	// (0x000363ad) list_medium_line_x2_t3_g3_t3_ParamLimits

0x3304,	// (0x000363ad) list_medium_line_x2_t3_g3_t3

0x0002,

0xf263,	// (0x0004230c) list_medium_line_x2_t3_g3_t_ParamLimits

0xf263,	// (0x0004230c) list_medium_line_x2_t3_g3_t

0x32b7,	// (0x00036360) list_medium_line_x2_t3_g2_g1_ParamLimits

0x32b7,	// (0x00036360) list_medium_line_x2_t3_g2_g1

0x32cf,	// (0x00036378) list_medium_line_x2_t3_g2_g2_ParamLimits

0x32cf,	// (0x00036378) list_medium_line_x2_t3_g2_g2

0x0001,

0xf26a,	// (0x00042313) list_medium_line_x2_t3_g2_g_ParamLimits

0xf26a,	// (0x00042313) list_medium_line_x2_t3_g2_g

0x3319,	// (0x000363c2) list_medium_line_x2_t3_g2_t1_ParamLimits

0x3319,	// (0x000363c2) list_medium_line_x2_t3_g2_t1

0x332f,	// (0x000363d8) list_medium_line_x2_t3_g2_t2_ParamLimits

0x332f,	// (0x000363d8) list_medium_line_x2_t3_g2_t2

0x3341,	// (0x000363ea) list_medium_line_x2_t3_g2_t3_ParamLimits

0x3341,	// (0x000363ea) list_medium_line_x2_t3_g2_t3

0x0002,

0xf26f,	// (0x00042318) list_medium_line_x2_t3_g2_t_ParamLimits

0xf26f,	// (0x00042318) list_medium_line_x2_t3_g2_t

0x32b7,	// (0x00036360) list_medium_line_x2_t4_g4_g1_ParamLimits

0x32b7,	// (0x00036360) list_medium_line_x2_t4_g4_g1

0x335f,	// (0x00036408) list_medium_line_x2_t4_g4_g2_ParamLimits

0x335f,	// (0x00036408) list_medium_line_x2_t4_g4_g2

0x32c3,	// (0x0003636c) list_medium_line_x2_t4_g4_g3_ParamLimits

0x32c3,	// (0x0003636c) list_medium_line_x2_t4_g4_g3

0x336b,	// (0x00036414) list_medium_line_x2_t4_g4_g4_ParamLimits

0x336b,	// (0x00036414) list_medium_line_x2_t4_g4_g4

0x0003,

0xf276,	// (0x0004231f) list_medium_line_x2_t4_g4_g_ParamLimits

0xf276,	// (0x0004231f) list_medium_line_x2_t4_g4_g

0x3377,	// (0x00036420) list_medium_line_x2_t4_g4_t1_ParamLimits

0x3377,	// (0x00036420) list_medium_line_x2_t4_g4_t1

0x3391,	// (0x0003643a) list_medium_line_x2_t4_g4_t2_ParamLimits

0x3391,	// (0x0003643a) list_medium_line_x2_t4_g4_t2

0x33a7,	// (0x00036450) list_medium_line_x2_t4_g4_t3_ParamLimits

0x33a7,	// (0x00036450) list_medium_line_x2_t4_g4_t3

0x33bc,	// (0x00036465) list_medium_line_x2_t4_g4_t4_ParamLimits

0x33bc,	// (0x00036465) list_medium_line_x2_t4_g4_t4

0x0003,

0xf27f,	// (0x00042328) list_medium_line_x2_t4_g4_t_ParamLimits

0xf27f,	// (0x00042328) list_medium_line_x2_t4_g4_t

0x32b7,	// (0x00036360) list_medium_line_x2_t2_g4_g1_ParamLimits

0x32b7,	// (0x00036360) list_medium_line_x2_t2_g4_g1

0x335f,	// (0x00036408) list_medium_line_x2_t2_g4_g2_ParamLimits

0x335f,	// (0x00036408) list_medium_line_x2_t2_g4_g2

0x32c3,	// (0x0003636c) list_medium_line_x2_t2_g4_g3_ParamLimits

0x32c3,	// (0x0003636c) list_medium_line_x2_t2_g4_g3

0x32cf,	// (0x00036378) list_medium_line_x2_t2_g4_g4_ParamLimits

0x32cf,	// (0x00036378) list_medium_line_x2_t2_g4_g4

0x0003,

0xf2e6,	// (0x0004238f) list_medium_line_x2_t2_g4_g_ParamLimits

0xf2e6,	// (0x0004238f) list_medium_line_x2_t2_g4_g

0x33ce,	// (0x00036477) list_medium_line_x2_t2_g4_t1_ParamLimits

0x33ce,	// (0x00036477) list_medium_line_x2_t2_g4_t1

0x3304,	// (0x000363ad) list_medium_line_x2_t2_g4_t2_ParamLimits

0x3304,	// (0x000363ad) list_medium_line_x2_t2_g4_t2

0x0001,

0xf2ef,	// (0x00042398) list_medium_line_x2_t2_g4_t_ParamLimits

0xf2ef,	// (0x00042398) list_medium_line_x2_t2_g4_t

0x32b7,	// (0x00036360) list_medium_line_x2_t2_g3_g1_ParamLimits

0x32b7,	// (0x00036360) list_medium_line_x2_t2_g3_g1

0x32c3,	// (0x0003636c) list_medium_line_x2_t2_g3_g2_ParamLimits

0x32c3,	// (0x0003636c) list_medium_line_x2_t2_g3_g2

0x32cf,	// (0x00036378) list_medium_line_x2_t2_g3_g3_ParamLimits

0x32cf,	// (0x00036378) list_medium_line_x2_t2_g3_g3

0x0002,

0xf25c,	// (0x00042305) list_medium_line_x2_t2_g3_g_ParamLimits

0xf25c,	// (0x00042305) list_medium_line_x2_t2_g3_g

0x33e3,	// (0x0003648c) list_medium_line_x2_t2_g3_t1_ParamLimits

0x33e3,	// (0x0003648c) list_medium_line_x2_t2_g3_t1

0x3304,	// (0x000363ad) list_medium_line_x2_t2_g3_t2_ParamLimits

0x3304,	// (0x000363ad) list_medium_line_x2_t2_g3_t2

0x0001,

0xf2f4,	// (0x0004239d) list_medium_line_x2_t2_g3_t_ParamLimits

0xf2f4,	// (0x0004239d) list_medium_line_x2_t2_g3_t

0x6535,	// (0x000395de) main_sp_fs_list_pane_ParamLimits

0x6535,	// (0x000395de) main_sp_fs_list_pane

0x6541,	// (0x000395ea) sp_fs_scroll_pane_ParamLimits

0x6541,	// (0x000395ea) sp_fs_scroll_pane

0x33f8,	// (0x000364a1) list_medium_line_x2_t3_t1

0x3408,	// (0x000364b1) list_medium_line_x2_t3_t2

0x3416,	// (0x000364bf) list_medium_line_x2_t3_t3

0x0002,

0xf33f,	// (0x000423e8) list_medium_line_x2_t3_t

0x3424,	// (0x000364cd) list_medium_line_x3_t4_t1

0x3434,	// (0x000364dd) list_medium_line_x3_t4_t2

0x3442,	// (0x000364eb) list_medium_line_x3_t4_t3

0x3416,	// (0x000364bf) list_medium_line_x3_t4_t4

0x0003,

0xf346,	// (0x000423ef) list_medium_line_x3_t4_t

0x3450,	// (0x000364f9) list_medium_line_x4_t5_t1

0x3460,	// (0x00036509) list_medium_line_x4_t5_t2

0x3442,	// (0x000364eb) list_medium_line_x4_t5_t3

0x346e,	// (0x00036517) list_medium_line_x4_t5_t4

0x3416,	// (0x000364bf) list_medium_line_x4_t5_t5

0x0004,

0xf34f,	// (0x000423f8) list_medium_line_x4_t5_t

0x32b7,	// (0x00036360) list_medium_line_t4_g4_g1_ParamLimits

0x32b7,	// (0x00036360) list_medium_line_t4_g4_g1

0x336b,	// (0x00036414) list_medium_line_t4_g4_g2_ParamLimits

0x336b,	// (0x00036414) list_medium_line_t4_g4_g2

0x347c,	// (0x00036525) list_medium_line_t4_g4_g3_ParamLimits

0x347c,	// (0x00036525) list_medium_line_t4_g4_g3

0x32cf,	// (0x00036378) list_medium_line_t4_g4_g4_ParamLimits

0x32cf,	// (0x00036378) list_medium_line_t4_g4_g4

0x0003,

0xf35a,	// (0x00042403) list_medium_line_t4_g4_g_ParamLimits

0xf35a,	// (0x00042403) list_medium_line_t4_g4_g

0x3488,	// (0x00036531) list_medium_line_t4_g4_t1_ParamLimits

0x3488,	// (0x00036531) list_medium_line_t4_g4_t1

0x349d,	// (0x00036546) list_medium_line_t4_g4_t2_ParamLimits

0x349d,	// (0x00036546) list_medium_line_t4_g4_t2

0x34b3,	// (0x0003655c) list_medium_line_t4_g4_t3_ParamLimits

0x34b3,	// (0x0003655c) list_medium_line_t4_g4_t3

0x3304,	// (0x000363ad) list_medium_line_t4_g4_t4_ParamLimits

0x3304,	// (0x000363ad) list_medium_line_t4_g4_t4

0x0003,

0xf363,	// (0x0004240c) list_medium_line_t4_g4_t_ParamLimits

0xf363,	// (0x0004240c) list_medium_line_t4_g4_t

0x6660,	// (0x00039709) chi_dic_find_pane_g1

0x75fb,	// (0x0003a6a4) main_tport_pane

0x3742,	// (0x000367eb) list_medium_line_plain_t1

0x3750,	// (0x000367f9) list_medium_line_t2_g2_g1_ParamLimits

0x3750,	// (0x000367f9) list_medium_line_t2_g2_g1

0x375c,	// (0x00036805) list_medium_line_t2_g2_g2_ParamLimits

0x375c,	// (0x00036805) list_medium_line_t2_g2_g2

0x0001,

0xfa1f,	// (0x00042ac8) list_medium_line_t2_g2_g_ParamLimits

0xfa1f,	// (0x00042ac8) list_medium_line_t2_g2_g

0x3768,	// (0x00036811) list_medium_line_t2_g2_t1_ParamLimits

0x3768,	// (0x00036811) list_medium_line_t2_g2_t1

0x377f,	// (0x00036828) list_medium_line_t2_g2_t2_ParamLimits

0x377f,	// (0x00036828) list_medium_line_t2_g2_t2

0x0001,

0xfa24,	// (0x00042acd) list_medium_line_t2_g2_t_ParamLimits

0xfa24,	// (0x00042acd) list_medium_line_t2_g2_t

0x399e,	// (0x00036a47) aid_sp_fs_list_icon_a_sm

0x39a6,	// (0x00036a4f) aid_sp_fs_list_icon_d

0x1e31,	// (0x00034eda) aid_sp_fs_text_primary

0x1b98,	// (0x00034c41) aid_sp_fs_text_secondary

0x39ae,	// (0x00036a57) list_medium_line

0x39ae,	// (0x00036a57) list_medium_line_g2

0x39ae,	// (0x00036a57) list_medium_line_g3

0x39ae,	// (0x00036a57) list_medium_line_plain

0x39ae,	// (0x00036a57) list_medium_line_plain_t2

0x39ae,	// (0x00036a57) list_medium_line_plain_t3

0x39ae,	// (0x00036a57) list_medium_line_right_icon

0x39ae,	// (0x00036a57) list_medium_line_right_iconx2

0x39ae,	// (0x00036a57) list_medium_line_t2

0x39ae,	// (0x00036a57) list_medium_line_t2_g2

0x39ae,	// (0x00036a57) list_medium_line_t2_g3

0x39ae,	// (0x00036a57) list_medium_line_t2_right_icon

0x39ae,	// (0x00036a57) list_medium_line_t2_right_iconx2

0x39ae,	// (0x00036a57) list_medium_line_t3

0x39ae,	// (0x00036a57) list_medium_line_t3_g2

0x39ae,	// (0x00036a57) list_medium_line_t3_g3

0x39ae,	// (0x00036a57) list_medium_line_t3_right_iconx2

0x39b7,	// (0x00036a60) list_medium_line_t4_g4

0x39c0,	// (0x00036a69) list_medium_line_x2

0x39c0,	// (0x00036a69) list_medium_line_x2_t2_g2

0x39c0,	// (0x00036a69) list_medium_line_x2_t2_g3

0x39c0,	// (0x00036a69) list_medium_line_x2_t2_g4

0x39c0,	// (0x00036a69) list_medium_line_x2_t3

0x39c0,	// (0x00036a69) list_medium_line_x2_t3_g2

0x39c0,	// (0x00036a69) list_medium_line_x2_t3_g3

0x39c0,	// (0x00036a69) list_medium_line_x2_t3_g4

0x39c0,	// (0x00036a69) list_medium_line_x2_t4_g2

0x39c0,	// (0x00036a69) list_medium_line_x2_t4_g4

0x39c9,	// (0x00036a72) list_medium_line_x3

0x39c9,	// (0x00036a72) list_medium_line_x3_t4

0x39c9,	// (0x00036a72) list_medium_line_x3_t4_g4

0x39b7,	// (0x00036a60) list_medium_line_x4_t4

0x39b7,	// (0x00036a60) list_medium_line_x4_t4_g7

0x39b7,	// (0x00036a60) list_medium_line_x4_t5

0x39d2,	// (0x00036a7b) list_single_fs_dyc_pane_ParamLimits

0x39d2,	// (0x00036a7b) list_single_fs_dyc_pane

0x32b7,	// (0x00036360) list_medium_line_x4_t4_g7_g1_ParamLimits

0x32b7,	// (0x00036360) list_medium_line_x4_t4_g7_g1

0x3a12,	// (0x00036abb) list_medium_line_x4_t4_g7_g2_ParamLimits

0x3a12,	// (0x00036abb) list_medium_line_x4_t4_g7_g2

0x3a1e,	// (0x00036ac7) list_medium_line_x4_t4_g7_g3_ParamLimits

0x3a1e,	// (0x00036ac7) list_medium_line_x4_t4_g7_g3

0x3a2d,	// (0x00036ad6) list_medium_line_x4_t4_g7_g4_ParamLimits

0x3a2d,	// (0x00036ad6) list_medium_line_x4_t4_g7_g4

0x3a39,	// (0x00036ae2) list_medium_line_x4_t4_g7_g5_ParamLimits

0x3a39,	// (0x00036ae2) list_medium_line_x4_t4_g7_g5

0x3a48,	// (0x00036af1) list_medium_line_x4_t4_g7_g6_ParamLimits

0x3a48,	// (0x00036af1) list_medium_line_x4_t4_g7_g6

0x3a57,	// (0x00036b00) list_medium_line_x4_t4_g7_g7_ParamLimits

0x3a57,	// (0x00036b00) list_medium_line_x4_t4_g7_g7

0x0006,

0xfbe8,	// (0x00042c91) list_medium_line_x4_t4_g7_g_ParamLimits

0xfbe8,	// (0x00042c91) list_medium_line_x4_t4_g7_g

0x3a63,	// (0x00036b0c) list_medium_line_x4_t4_g7_t1_ParamLimits

0x3a63,	// (0x00036b0c) list_medium_line_x4_t4_g7_t1

0x3a78,	// (0x00036b21) list_medium_line_x4_t4_g7_t2_ParamLimits

0x3a78,	// (0x00036b21) list_medium_line_x4_t4_g7_t2

0x3a8d,	// (0x00036b36) list_medium_line_x4_t4_g7_t3_ParamLimits

0x3a8d,	// (0x00036b36) list_medium_line_x4_t4_g7_t3

0x3aa2,	// (0x00036b4b) list_medium_line_x4_t4_g7_t4_ParamLimits

0x3aa2,	// (0x00036b4b) list_medium_line_x4_t4_g7_t4

0x3ab4,	// (0x00036b5d) list_medium_line_x4_t4_g7_t5_ParamLimits

0x3ab4,	// (0x00036b5d) list_medium_line_x4_t4_g7_t5

0x0004,

0xfbf7,	// (0x00042ca0) list_medium_line_x4_t4_g7_t_ParamLimits

0xfbf7,	// (0x00042ca0) list_medium_line_x4_t4_g7_t

0x3ac6,	// (0x00036b6f) list_single_dyc_row_pane_ParamLimits

0x3ac6,	// (0x00036b6f) list_single_dyc_row_pane

0xb276,	// (0x0003e31f) call5_gesture_pane_ParamLimits

0xb276,	// (0x0003e31f) call5_gesture_pane

0xb2ac,	// (0x0003e355) call5_windows_pane_ParamLimits

0xb2ac,	// (0x0003e355) call5_windows_pane

0xb324,	// (0x0003e3cd) call5_swipe_1_pane_cp_ParamLimits

0xb324,	// (0x0003e3cd) call5_swipe_1_pane_cp

0xb330,	// (0x0003e3d9) call5_swipe_2_pane_cp_ParamLimits

0xb330,	// (0x0003e3d9) call5_swipe_2_pane_cp

0xcfe4,	// (0x0004008d) call5_image_pane_cp

0xb33c,	// (0x0003e3e5) popup_call5_audio_first_window_cp_ParamLimits

0xb33c,	// (0x0003e3e5) popup_call5_audio_first_window_cp

0x1620,	// (0x000346c9) call5_swipe_1_pane_g1_cp_ParamLimits

0x1620,	// (0x000346c9) call5_swipe_1_pane_g1_cp

0x1660,	// (0x00034709) call5_swipe_1_pane_g2_cp

0x1639,	// (0x000346e2) call5_swipe_1_pane_t1_cp_ParamLimits

0x1639,	// (0x000346e2) call5_swipe_1_pane_t1_cp

0x1620,	// (0x000346c9) call5_swipe_2_pane_g1_cp_ParamLimits

0x1620,	// (0x000346c9) call5_swipe_2_pane_g1_cp

0x1668,	// (0x00034711) call5_swipe_2_pane_g2_cp

0x1670,	// (0x00034719) call5_swipe_2_pane_t1_cp_ParamLimits

0x1670,	// (0x00034719) call5_swipe_2_pane_t1_cp

0x75df,	// (0x0003a688) main_sp_fs_email_pane

0x1685,	// (0x0003472e) main_sp_fs_listscroll_pane_te

0x3b69,	// (0x00036c12) popup_sp_fs_action_menu_pane_ParamLimits

0x3b69,	// (0x00036c12) popup_sp_fs_action_menu_pane

0xe896,	// (0x0004193f) bg_sp_fs_ctrlbar_pane_g1

0x16d4,	// (0x0003477d) bg_sp_fs_ctrlbar_ddmenu_pane_g1

0x16dd,	// (0x00034786) bg_sp_fs_ctrlbar_ddmenu_pane_g2

0x16e6,	// (0x0003478f) bg_sp_fs_ctrlbar_ddmenu_pane_g3

0xe896,	// (0x0004193f) bg_sp_fs_ctrlbar_ddmenu_pane_g4

0x0003,

0xfce0,	// (0x00042d89) bg_sp_fs_ctrlbar_ddmenu_pane_g

0xe66d,	// (0x00041716) bg_sp_fs_ctrlbar_ddmenu_pane_ParamLimits

0xe66d,	// (0x00041716) bg_sp_fs_ctrlbar_ddmenu_pane

0x16ef,	// (0x00034798) main_sp_fs_ctrlbar_ddmenu_pane_g1_ParamLimits

0x16ef,	// (0x00034798) main_sp_fs_ctrlbar_ddmenu_pane_g1

0x16fb,	// (0x000347a4) main_sp_fs_ctrlbar_ddmenu_pane_g2_ParamLimits

0x16fb,	// (0x000347a4) main_sp_fs_ctrlbar_ddmenu_pane_g2

0x0001,

0xfce9,	// (0x00042d92) main_sp_fs_ctrlbar_ddmenu_pane_g_ParamLimits

0xfce9,	// (0x00042d92) main_sp_fs_ctrlbar_ddmenu_pane_g

0x1707,	// (0x000347b0) main_sp_fs_ctrlbar_ddmenu_pane_t1_ParamLimits

0x1707,	// (0x000347b0) main_sp_fs_ctrlbar_ddmenu_pane_t1

0x3baf,	// (0x00036c58) list_medium_line_t2_right_icon_g1

0x3bb7,	// (0x00036c60) list_medium_line_t2_right_icon_t1

0x3bc7,	// (0x00036c70) list_medium_line_t2_right_icon_t2

0x0001,

0xfcee,	// (0x00042d97) list_medium_line_t2_right_icon_t

0xe413,	// (0x000414bc) bg_sp_fs_ctrlbar_pane_ParamLimits

0xe413,	// (0x000414bc) bg_sp_fs_ctrlbar_pane

0xb3a1,	// (0x0003e44a) main_sp_fs_ctrlbar_button_pane_cp01

0xb3a9,	// (0x0003e452) main_sp_fs_ctrlbar_ddmenu_pane

0x1763,	// (0x0003480c) main_sp_fs_ctrlbar_pane_g1

0x176f,	// (0x00034818) main_sp_fs_ctrlbar_pane_g2

0x0001,

0xfcf3,	// (0x00042d9c) main_sp_fs_ctrlbar_pane_g

0x177b,	// (0x00034824) main_sp_fs_ctrlbar_pane_t1

0x3bd5,	// (0x00036c7e) main_sp_fs_ctrlbar_pane

0x3bf1,	// (0x00036c9a) main_sp_fs_listscroll_pane_te_cp01

0x3c02,	// (0x00036cab) popup_sp_fs_action_menu_pane_cp01_ParamLimits

0x3c02,	// (0x00036cab) popup_sp_fs_action_menu_pane_cp01

0x75df,	// (0x0003a688) bg_sp_fs_highlight_list_pane_cp01_ParamLimits

0x75df,	// (0x0003a688) bg_sp_fs_highlight_list_pane_cp01

0x3c1c,	// (0x00036cc5) sp_fs_action_menu_list_gene_pane_g1_ParamLimits

0x3c1c,	// (0x00036cc5) sp_fs_action_menu_list_gene_pane_g1

0x179f,	// (0x00034848) sp_fs_action_menu_list_gene_pane_g2_ParamLimits

0x179f,	// (0x00034848) sp_fs_action_menu_list_gene_pane_g2

0x0001,

0xfcf8,	// (0x00042da1) sp_fs_action_menu_list_gene_pane_g_ParamLimits

0xfcf8,	// (0x00042da1) sp_fs_action_menu_list_gene_pane_g

0x3c2b,	// (0x00036cd4) sp_fs_action_menu_list_gene_pane_t1_ParamLimits

0x3c2b,	// (0x00036cd4) sp_fs_action_menu_list_gene_pane_t1

0x3c43,	// (0x00036cec) sp_fs_action_menu_list_gene_pane_ParamLimits

0x3c43,	// (0x00036cec) sp_fs_action_menu_list_gene_pane

0x17e7,	// (0x00034890) popup_sp_fs_action_menu_bg_pane_ParamLimits

0x17e7,	// (0x00034890) popup_sp_fs_action_menu_bg_pane

0x3c66,	// (0x00036d0f) sp_fs_action_menu_list_pane_ParamLimits

0x3c66,	// (0x00036d0f) sp_fs_action_menu_list_pane

0x1819,	// (0x000348c2) sp_fs_scroll_pane_cp01_ParamLimits

0x1819,	// (0x000348c2) sp_fs_scroll_pane_cp01

0x3c8a,	// (0x00036d33) list_medium_line_plain_t2_t1

0x3c9a,	// (0x00036d43) list_medium_line_plain_t2_t2

0x0001,

0xfcfd,	// (0x00042da6) list_medium_line_plain_t2_t

0x3ca8,	// (0x00036d51) list_medium_line_plain_t3_t1

0x3cb8,	// (0x00036d61) list_medium_line_plain_t3_t2

0x3cc6,	// (0x00036d6f) list_medium_line_plain_t3_t3

0x0002,

0xfd02,	// (0x00042dab) list_medium_line_plain_t3_t

0x32b7,	// (0x00036360) list_medium_line_x2_t2_g2_g1_ParamLimits

0x32b7,	// (0x00036360) list_medium_line_x2_t2_g2_g1

0x32cf,	// (0x00036378) list_medium_line_x2_t2_g2_g2_ParamLimits

0x32cf,	// (0x00036378) list_medium_line_x2_t2_g2_g2

0x0001,

0xf26a,	// (0x00042313) list_medium_line_x2_t2_g2_g_ParamLimits

0xf26a,	// (0x00042313) list_medium_line_x2_t2_g2_g

0x3488,	// (0x00036531) list_medium_line_x2_t2_g2_t1_ParamLimits

0x3488,	// (0x00036531) list_medium_line_x2_t2_g2_t1

0x3304,	// (0x000363ad) list_medium_line_x2_t2_g2_t2_ParamLimits

0x3304,	// (0x000363ad) list_medium_line_x2_t2_g2_t2

0x0001,

0xfd09,	// (0x00042db2) list_medium_line_x2_t2_g2_t_ParamLimits

0xfd09,	// (0x00042db2) list_medium_line_x2_t2_g2_t

0x32b7,	// (0x00036360) list_medium_line_x2_t4_g2_g1_ParamLimits

0x32b7,	// (0x00036360) list_medium_line_x2_t4_g2_g1

0x3cd4,	// (0x00036d7d) list_medium_line_x2_t4_g2_g2_ParamLimits

0x3cd4,	// (0x00036d7d) list_medium_line_x2_t4_g2_g2

0x0001,

0xfd0e,	// (0x00042db7) list_medium_line_x2_t4_g2_g_ParamLimits

0xfd0e,	// (0x00042db7) list_medium_line_x2_t4_g2_g

0x3ce6,	// (0x00036d8f) list_medium_line_x2_t4_g2_t1_ParamLimits

0x3ce6,	// (0x00036d8f) list_medium_line_x2_t4_g2_t1

0x3d00,	// (0x00036da9) list_medium_line_x2_t4_g2_t2_ParamLimits

0x3d00,	// (0x00036da9) list_medium_line_x2_t4_g2_t2

0x3d16,	// (0x00036dbf) list_medium_line_x2_t4_g2_t3_ParamLimits

0x3d16,	// (0x00036dbf) list_medium_line_x2_t4_g2_t3

0x3304,	// (0x000363ad) list_medium_line_x2_t4_g2_t4_ParamLimits

0x3304,	// (0x000363ad) list_medium_line_x2_t4_g2_t4

0x0003,

0xfd13,	// (0x00042dbc) list_medium_line_x2_t4_g2_t_ParamLimits

0xfd13,	// (0x00042dbc) list_medium_line_x2_t4_g2_t

0x3d2b,	// (0x00036dd4) list_medium_line_t3_right_iconx2_g1

0x3baf,	// (0x00036c58) list_medium_line_t3_right_iconx2_g2

0x3d33,	// (0x00036ddc) list_medium_line_t3_right_iconx2_g3

0x0002,

0xfd1c,	// (0x00042dc5) list_medium_line_t3_right_iconx2_g

0x3d3d,	// (0x00036de6) list_medium_line_t3_right_iconx2_t1

0x3d4d,	// (0x00036df6) list_medium_line_t3_right_iconx2_t2

0x0001,

0xfd23,	// (0x00042dcc) list_medium_line_t3_right_iconx2_t

0x32b7,	// (0x00036360) list_medium_line_x3_t4_g4_g1_ParamLimits

0x32b7,	// (0x00036360) list_medium_line_x3_t4_g4_g1

0x32c3,	// (0x0003636c) list_medium_line_x3_t4_g4_g2_ParamLimits

0x32c3,	// (0x0003636c) list_medium_line_x3_t4_g4_g2

0x336b,	// (0x00036414) list_medium_line_x3_t4_g4_g3_ParamLimits

0x336b,	// (0x00036414) list_medium_line_x3_t4_g4_g3

0x3d5b,	// (0x00036e04) list_medium_line_x3_t4_g4_g4_ParamLimits

0x3d5b,	// (0x00036e04) list_medium_line_x3_t4_g4_g4

0x0003,

0xfd28,	// (0x00042dd1) list_medium_line_x3_t4_g4_g_ParamLimits

0xfd28,	// (0x00042dd1) list_medium_line_x3_t4_g4_g

0x3d67,	// (0x00036e10) list_medium_line_x3_t4_g4_t1_ParamLimits

0x3d67,	// (0x00036e10) list_medium_line_x3_t4_g4_t1

0x3d7e,	// (0x00036e27) list_medium_line_x3_t4_g4_t2_ParamLimits

0x3d7e,	// (0x00036e27) list_medium_line_x3_t4_g4_t2

0x3d93,	// (0x00036e3c) list_medium_line_x3_t4_g4_t3_ParamLimits

0x3d93,	// (0x00036e3c) list_medium_line_x3_t4_g4_t3

0x3da8,	// (0x00036e51) list_medium_line_x3_t4_g4_t4_ParamLimits

0x3da8,	// (0x00036e51) list_medium_line_x3_t4_g4_t4

0x0003,

0xfd31,	// (0x00042dda) list_medium_line_x3_t4_g4_t_ParamLimits

0xfd31,	// (0x00042dda) list_medium_line_x3_t4_g4_t

0x3dc5,	// (0x00036e6e) list_single_dyc_row_text_pane_t1_ParamLimits

0x3dc5,	// (0x00036e6e) list_single_dyc_row_text_pane_t1

0x3e02,	// (0x00036eab) list_single_dyc_row_text_pane_t2_ParamLimits

0x3e02,	// (0x00036eab) list_single_dyc_row_text_pane_t2

0x3e5c,	// (0x00036f05) list_single_dyc_row_text_pane_t3_ParamLimits

0x3e5c,	// (0x00036f05) list_single_dyc_row_text_pane_t3

0x0002,

0xfd3a,	// (0x00042de3) list_single_dyc_row_text_pane_t_ParamLimits

0xfd3a,	// (0x00042de3) list_single_dyc_row_text_pane_t

0x3e6e,	// (0x00036f17) list_single_dyc_row_pane_g1_ParamLimits

0x3e6e,	// (0x00036f17) list_single_dyc_row_pane_g1

0x3e7a,	// (0x00036f23) list_single_dyc_row_pane_g2_ParamLimits

0x3e7a,	// (0x00036f23) list_single_dyc_row_pane_g2

0x3e86,	// (0x00036f2f) list_single_dyc_row_pane_g3_ParamLimits

0x3e86,	// (0x00036f2f) list_single_dyc_row_pane_g3

0x3e92,	// (0x00036f3b) list_single_dyc_row_pane_g4_ParamLimits

0x3e92,	// (0x00036f3b) list_single_dyc_row_pane_g4

0x0003,

0xfd41,	// (0x00042dea) list_single_dyc_row_pane_g_ParamLimits

0xfd41,	// (0x00042dea) list_single_dyc_row_pane_g

0x3e9e,	// (0x00036f47) list_single_dyc_row_text_pane_ParamLimits

0x3e9e,	// (0x00036f47) list_single_dyc_row_text_pane

0x449d,	// (0x00037546) bg_sp_fs_scroll_pane

0x18e6,	// (0x0003498f) thumb_sp_fs_scroll_pane

0x3750,	// (0x000367f9) list_medium_line_g1_ParamLimits

0x3750,	// (0x000367f9) list_medium_line_g1

0x3ebd,	// (0x00036f66) list_medium_line_t1_ParamLimits

0x3ebd,	// (0x00036f66) list_medium_line_t1

0x32b7,	// (0x00036360) list_medium_line_x2_g1_ParamLimits

0x32b7,	// (0x00036360) list_medium_line_x2_g1

0x32c3,	// (0x0003636c) list_medium_line_x2_g2_ParamLimits

0x32c3,	// (0x0003636c) list_medium_line_x2_g2

0x0001,

0xfd4a,	// (0x00042df3) list_medium_line_x2_g_ParamLimits

0xfd4a,	// (0x00042df3) list_medium_line_x2_g

0x3ed2,	// (0x00036f7b) list_medium_line_x2_t1_ParamLimits

0x3ed2,	// (0x00036f7b) list_medium_line_x2_t1

0x32b7,	// (0x00036360) list_medium_line_x3_g1_ParamLimits

0x32b7,	// (0x00036360) list_medium_line_x3_g1

0x32c3,	// (0x0003636c) list_medium_line_x3_g2_ParamLimits

0x32c3,	// (0x0003636c) list_medium_line_x3_g2

0x0001,

0xfd4a,	// (0x00042df3) list_medium_line_x3_g_ParamLimits

0xfd4a,	// (0x00042df3) list_medium_line_x3_g

0x3ed2,	// (0x00036f7b) list_medium_line_x3_t1_ParamLimits

0x3ed2,	// (0x00036f7b) list_medium_line_x3_t1

0x191a,	// (0x000349c3) thumb_sp_fs_scroll_pane_g1

0x1923,	// (0x000349cc) thumb_sp_fs_scroll_pane_g2

0x192c,	// (0x000349d5) thumb_sp_fs_scroll_pane_g3

0x0002,

0xfd4f,	// (0x00042df8) thumb_sp_fs_scroll_pane_g

0x191a,	// (0x000349c3) bg_sp_fs_scroll_pane_g1

0x1923,	// (0x000349cc) bg_sp_fs_scroll_pane_g2

0x192c,	// (0x000349d5) bg_sp_fs_scroll_pane_g3

0x0002,

0xfd4f,	// (0x00042df8) bg_sp_fs_scroll_pane_g

0x32b7,	// (0x00036360) list_medium_line_x2_t3_g4_g1_ParamLimits

0x32b7,	// (0x00036360) list_medium_line_x2_t3_g4_g1

0x335f,	// (0x00036408) list_medium_line_x2_t3_g4_g2_ParamLimits

0x335f,	// (0x00036408) list_medium_line_x2_t3_g4_g2

0x32c3,	// (0x0003636c) list_medium_line_x2_t3_g4_g3_ParamLimits

0x32c3,	// (0x0003636c) list_medium_line_x2_t3_g4_g3

0x32cf,	// (0x00036378) list_medium_line_x2_t3_g4_g4_ParamLimits

0x32cf,	// (0x00036378) list_medium_line_x2_t3_g4_g4

0x0003,

0xf2e6,	// (0x0004238f) list_medium_line_x2_t3_g4_g_ParamLimits

0xf2e6,	// (0x0004238f) list_medium_line_x2_t3_g4_g

0x3ee8,	// (0x00036f91) list_medium_line_x2_t3_g4_t1_ParamLimits

0x3ee8,	// (0x00036f91) list_medium_line_x2_t3_g4_t1

0x3efe,	// (0x00036fa7) list_medium_line_x2_t3_g4_t2_ParamLimits

0x3efe,	// (0x00036fa7) list_medium_line_x2_t3_g4_t2

0x3304,	// (0x000363ad) list_medium_line_x2_t3_g4_t3_ParamLimits

0x3304,	// (0x000363ad) list_medium_line_x2_t3_g4_t3

0x0002,

0xfd56,	// (0x00042dff) list_medium_line_x2_t3_g4_t_ParamLimits

0xfd56,	// (0x00042dff) list_medium_line_x2_t3_g4_t

0x3750,	// (0x000367f9) list_medium_line_g2_g1_ParamLimits

0x3750,	// (0x000367f9) list_medium_line_g2_g1

0x375c,	// (0x00036805) list_medium_line_g2_g2_ParamLimits

0x375c,	// (0x00036805) list_medium_line_g2_g2

0x0001,

0xfa1f,	// (0x00042ac8) list_medium_line_g2_g_ParamLimits

0xfa1f,	// (0x00042ac8) list_medium_line_g2_g

0x3f17,	// (0x00036fc0) list_medium_line_g2_t1_ParamLimits

0x3f17,	// (0x00036fc0) list_medium_line_g2_t1

0x3750,	// (0x000367f9) list_medium_line_t3_g2_g1_ParamLimits

0x3750,	// (0x000367f9) list_medium_line_t3_g2_g1

0x375c,	// (0x00036805) list_medium_line_t3_g2_g2_ParamLimits

0x375c,	// (0x00036805) list_medium_line_t3_g2_g2

0x0001,

0xfa1f,	// (0x00042ac8) list_medium_line_t3_g2_g_ParamLimits

0xfa1f,	// (0x00042ac8) list_medium_line_t3_g2_g

0x3f2c,	// (0x00036fd5) list_medium_line_t3_g2_t1_ParamLimits

0x3f2c,	// (0x00036fd5) list_medium_line_t3_g2_t1

0x3f43,	// (0x00036fec) list_medium_line_t3_g2_t2_ParamLimits

0x3f43,	// (0x00036fec) list_medium_line_t3_g2_t2

0x3f58,	// (0x00037001) list_medium_line_t3_g2_t3_ParamLimits

0x3f58,	// (0x00037001) list_medium_line_t3_g2_t3

0x0002,

0xfd5d,	// (0x00042e06) list_medium_line_t3_g2_t_ParamLimits

0xfd5d,	// (0x00042e06) list_medium_line_t3_g2_t

0x3baf,	// (0x00036c58) list_medium_line_right_icon_g1

0x3f71,	// (0x0003701a) list_medium_line_right_icon_t1

0x3750,	// (0x000367f9) list_medium_line_t2_g1_ParamLimits

0x3750,	// (0x000367f9) list_medium_line_t2_g1

0x3f7f,	// (0x00037028) list_medium_line_t2_t1_ParamLimits

0x3f7f,	// (0x00037028) list_medium_line_t2_t1

0x3f99,	// (0x00037042) list_medium_line_t2_t2_ParamLimits

0x3f99,	// (0x00037042) list_medium_line_t2_t2

0x0001,

0xfd64,	// (0x00042e0d) list_medium_line_t2_t_ParamLimits

0xfd64,	// (0x00042e0d) list_medium_line_t2_t

0x3750,	// (0x000367f9) list_medium_line_t3_g1_ParamLimits

0x3750,	// (0x000367f9) list_medium_line_t3_g1

0x3fae,	// (0x00037057) list_medium_line_t3_t1_ParamLimits

0x3fae,	// (0x00037057) list_medium_line_t3_t1

0x3fc8,	// (0x00037071) list_medium_line_t3_t2_ParamLimits

0x3fc8,	// (0x00037071) list_medium_line_t3_t2

0x3fde,	// (0x00037087) list_medium_line_t3_t3_ParamLimits

0x3fde,	// (0x00037087) list_medium_line_t3_t3

0x0002,

0xfd69,	// (0x00042e12) list_medium_line_t3_t_ParamLimits

0xfd69,	// (0x00042e12) list_medium_line_t3_t

0x3750,	// (0x000367f9) list_medium_line_g3_g1_ParamLimits

0x3750,	// (0x000367f9) list_medium_line_g3_g1

0x3ff3,	// (0x0003709c) list_medium_line_g3_g2_ParamLimits

0x3ff3,	// (0x0003709c) list_medium_line_g3_g2

0x375c,	// (0x00036805) list_medium_line_g3_g3_ParamLimits

0x375c,	// (0x00036805) list_medium_line_g3_g3

0x0002,

0xfd70,	// (0x00042e19) list_medium_line_g3_g_ParamLimits

0xfd70,	// (0x00042e19) list_medium_line_g3_g

0x3fff,	// (0x000370a8) list_medium_line_g3_t1_ParamLimits

0x3fff,	// (0x000370a8) list_medium_line_g3_t1

0x3750,	// (0x000367f9) list_medium_line_t2_g3_g1_ParamLimits

0x3750,	// (0x000367f9) list_medium_line_t2_g3_g1

0x3ff3,	// (0x0003709c) list_medium_line_t2_g3_g2_ParamLimits

0x3ff3,	// (0x0003709c) list_medium_line_t2_g3_g2

0x375c,	// (0x00036805) list_medium_line_t2_g3_g3_ParamLimits

0x375c,	// (0x00036805) list_medium_line_t2_g3_g3

0x0002,

0xfd70,	// (0x00042e19) list_medium_line_t2_g3_g_ParamLimits

0xfd70,	// (0x00042e19) list_medium_line_t2_g3_g

0x4014,	// (0x000370bd) list_medium_line_t2_g3_t1_ParamLimits

0x4014,	// (0x000370bd) list_medium_line_t2_g3_t1

0x402b,	// (0x000370d4) list_medium_line_t2_g3_t2_ParamLimits

0x402b,	// (0x000370d4) list_medium_line_t2_g3_t2

0x0001,

0xfd77,	// (0x00042e20) list_medium_line_t2_g3_t_ParamLimits

0xfd77,	// (0x00042e20) list_medium_line_t2_g3_t

0x3750,	// (0x000367f9) list_medium_line_t3_g3_g1_ParamLimits

0x3750,	// (0x000367f9) list_medium_line_t3_g3_g1

0x3ff3,	// (0x0003709c) list_medium_line_t3_g3_g2_ParamLimits

0x3ff3,	// (0x0003709c) list_medium_line_t3_g3_g2

0x375c,	// (0x00036805) list_medium_line_t3_g3_g3_ParamLimits

0x375c,	// (0x00036805) list_medium_line_t3_g3_g3

0x0002,

0xfd70,	// (0x00042e19) list_medium_line_t3_g3_g_ParamLimits

0xfd70,	// (0x00042e19) list_medium_line_t3_g3_g

0x4040,	// (0x000370e9) list_medium_line_t3_g3_t1_ParamLimits

0x4040,	// (0x000370e9) list_medium_line_t3_g3_t1

0x4054,	// (0x000370fd) list_medium_line_t3_g3_t2_ParamLimits

0x4054,	// (0x000370fd) list_medium_line_t3_g3_t2

0x4066,	// (0x0003710f) list_medium_line_t3_g3_t3_ParamLimits

0x4066,	// (0x0003710f) list_medium_line_t3_g3_t3

0x0002,

0xfd7c,	// (0x00042e25) list_medium_line_t3_g3_t_ParamLimits

0xfd7c,	// (0x00042e25) list_medium_line_t3_g3_t

0x3d2b,	// (0x00036dd4) list_medium_line_right_iconx2_g1

0x3baf,	// (0x00036c58) list_medium_line_right_iconx2_g2

0x0001,

0xfd83,	// (0x00042e2c) list_medium_line_right_iconx2_g

0x407a,	// (0x00037123) list_medium_line_right_iconx2_t1

0x3d2b,	// (0x00036dd4) list_medium_line_t2_right_iconx2_g1

0x3baf,	// (0x00036c58) list_medium_line_t2_right_iconx2_g2

0x0001,

0xfd83,	// (0x00042e2c) list_medium_line_t2_right_iconx2_g

0x4088,	// (0x00037131) list_medium_line_t2_right_iconx2_t1

0x4098,	// (0x00037141) list_medium_line_t2_right_iconx2_t2

0x0001,

0xfd88,	// (0x00042e31) list_medium_line_t2_right_iconx2_t

0x40a6,	// (0x0003714f) list_medium_line_x4_t4_t1

0x40b4,	// (0x0003715d) list_medium_line_x4_t4_t2

0x40c4,	// (0x0003716d) list_medium_line_x4_t4_t3

0x40d4,	// (0x0003717d) list_medium_line_x4_t4_t4

0x0003,

0xfd8d,	// (0x00042e36) list_medium_line_x4_t4_t

0xb3dc,	// (0x0003e485) tport_appsw_pane_ParamLimits

0xb3dc,	// (0x0003e485) tport_appsw_pane

0xb3ea,	// (0x0003e493) tport_contact_pane_ParamLimits

0xb3ea,	// (0x0003e493) tport_contact_pane

0xb3f8,	// (0x0003e4a1) tport_listscroll_pane_ParamLimits

0xb3f8,	// (0x0003e4a1) tport_listscroll_pane

0xb406,	// (0x0003e4af) cell_tport_appsw_pane_ParamLimits

0xb406,	// (0x0003e4af) cell_tport_appsw_pane

0xeb2b,	// (0x00041bd4) tport_appsw_pane_g1_ParamLimits

0xeb2b,	// (0x00041bd4) tport_appsw_pane_g1

0x1995,	// (0x00034a3e) tport_contact_pane_g1

0x199e,	// (0x00034a47) tport_contact_pane_t1

0x19ac,	// (0x00034a55) tport_contact_pane_t2

0x0001,

0xfd96,	// (0x00042e3f) tport_contact_pane_t

0x19ba,	// (0x00034a63) list_tport_pane

0x19c3,	// (0x00034a6c) scroll_pane_cp_030

0xb431,	// (0x0003e4da) cell_tport_appsw_pane_g1

0x19dc,	// (0x00034a85) cell_tport_appsw_pane_t1

0x449d,	// (0x00037546) grid_highlight_pane_cp019

0xb441,	// (0x0003e4ea) list_tport_double_graphic_pane_ParamLimits

0xb441,	// (0x0003e4ea) list_tport_double_graphic_pane

0x75df,	// (0x0003a688) list_highlight_pane_cp023_ParamLimits

0x75df,	// (0x0003a688) list_highlight_pane_cp023

0xb452,	// (0x0003e4fb) list_tport_double_graphic_pane_g1_ParamLimits

0xb452,	// (0x0003e4fb) list_tport_double_graphic_pane_g1

0xb45f,	// (0x0003e508) list_tport_double_graphic_pane_t1_ParamLimits

0xb45f,	// (0x0003e508) list_tport_double_graphic_pane_t1

0xb474,	// (0x0003e51d) list_tport_double_graphic_pane_t2_ParamLimits

0xb474,	// (0x0003e51d) list_tport_double_graphic_pane_t2

0x0001,

0xfda2,	// (0x00042e4b) list_tport_double_graphic_pane_t_ParamLimits

0xfda2,	// (0x00042e4b) list_tport_double_graphic_pane_t

0x449d,	// (0x00037546) main_cale_note_pane

0x97d4,	// (0x0003c87d) cell_vitu2_function_top_wide_pane_cp01_ParamLimits

0x97d4,	// (0x0003c87d) cell_vitu2_function_top_wide_pane_cp01

0xae91,	// (0x0003df3a) wait_bar_pane_cp05_ParamLimits

0x449d,	// (0x00037546) listscroll_cmail_pane

0x19f2,	// (0x00034a9b) list_cmail_pane

0xb490,	// (0x0003e539) list_cmail_body_pane

0xb4a5,	// (0x0003e54e) list_single_cmail_header_caption_pane

0xb4bf,	// (0x0003e568) list_single_cmail_header_detail_pane_ParamLimits

0xb4bf,	// (0x0003e568) list_single_cmail_header_detail_pane

0xb4ee,	// (0x0003e597) list_single_cmail_header_caption_pane_t1

0x40e4,	// (0x0003718d) list_single_cmail_header_detail_pane_g1_ParamLimits

0x40e4,	// (0x0003718d) list_single_cmail_header_detail_pane_g1

0x40fc,	// (0x000371a5) list_single_cmail_header_detail_pane_g2_ParamLimits

0x40fc,	// (0x000371a5) list_single_cmail_header_detail_pane_g2

0x0002,

0xfda7,	// (0x00042e50) list_single_cmail_header_detail_pane_g_ParamLimits

0xfda7,	// (0x00042e50) list_single_cmail_header_detail_pane_g

0x4108,	// (0x000371b1) list_single_cmail_header_detail_pane_t1_ParamLimits

0x4108,	// (0x000371b1) list_single_cmail_header_detail_pane_t1

0x416c,	// (0x00037215) list_single_cmail_header_editor_pane_bg_ParamLimits

0x416c,	// (0x00037215) list_single_cmail_header_editor_pane_bg

0x13af,	// (0x00034458) list_cmail_body_pane_g1

0x1a7b,	// (0x00034b24) list_cmail_body_pane_t1

0x0420,	// (0x000334c9) list_single_cmail_header_editor_pane_bg_g1

0xc99a,	// (0x0003fa43) list_single_cmail_header_editor_pane_bg_g1_copy1

0x0430,	// (0x000334d9) list_single_cmail_header_editor_pane_bg_g1_copy2

0x0428,	// (0x000334d1) list_single_cmail_header_editor_pane_bg_g1_copy3

0x06bb,	// (0x00033764) list_single_cmail_header_editor_pane_bg_g1_copy4

0x0450,	// (0x000334f9) list_single_cmail_header_editor_pane_bg_g1_copy4_copy1

0x0440,	// (0x000334e9) list_single_cmail_header_editor_pane_bg_g1_copy4_copy2

0x0448,	// (0x000334f1) list_single_cmail_header_editor_pane_bg_g1_copy4_copy3

0xc97a,	// (0x0003fa23) list_single_cmail_header_editor_pane_bg_g1_copy4_copy3_copy1

0xb4fe,	// (0x0003e5a7) calenote_gesture_pane_ParamLimits

0xb4fe,	// (0x0003e5a7) calenote_gesture_pane

0xb518,	// (0x0003e5c1) calenote_window_pane_ParamLimits

0xb518,	// (0x0003e5c1) calenote_window_pane

0x1a89,	// (0x00034b32) popup_note_window_cp01

0xb530,	// (0x0003e5d9) calenote_swipe_1_pane_ParamLimits

0xb530,	// (0x0003e5d9) calenote_swipe_1_pane

0xb330,	// (0x0003e3d9) calenote_swipe_2_pane_ParamLimits

0xb330,	// (0x0003e3d9) calenote_swipe_2_pane

0x1620,	// (0x000346c9) calenote_swipe_1_pane_g1_ParamLimits

0x1620,	// (0x000346c9) calenote_swipe_1_pane_g1

0x162d,	// (0x000346d6) calenote_swipe_1_pane_g2_ParamLimits

0x162d,	// (0x000346d6) calenote_swipe_1_pane_g2

0x0001,

0xfcd6,	// (0x00042d7f) calenote_swipe_1_pane_g_ParamLimits

0xfcd6,	// (0x00042d7f) calenote_swipe_1_pane_g

0x1a9b,	// (0x00034b44) calenote_swipe_1_pane_t1_ParamLimits

0x1a9b,	// (0x00034b44) calenote_swipe_1_pane_t1

0x1620,	// (0x000346c9) calenote_swipe_2_pane_g1_ParamLimits

0x1620,	// (0x000346c9) calenote_swipe_2_pane_g1

0x1aba,	// (0x00034b63) calenote_swipe_2_pane_g2_ParamLimits

0x1aba,	// (0x00034b63) calenote_swipe_2_pane_g2

0x0001,

0xfdb3,	// (0x00042e5c) calenote_swipe_2_pane_g_ParamLimits

0xfdb3,	// (0x00042e5c) calenote_swipe_2_pane_g

0x1ac6,	// (0x00034b6f) calenote_swipe_2_pane_t1_ParamLimits

0x1ac6,	// (0x00034b6f) calenote_swipe_2_pane_t1

0x449d,	// (0x00037546) main_mup_navstr_pane

0x85ae,	// (0x0003b657) main_mup3_pane_t7_ParamLimits

0x85ae,	// (0x0003b657) main_mup3_pane_t7

0x8f81,	// (0x0003c02a) main_mp4_pane_g6_ParamLimits

0x8f81,	// (0x0003c02a) main_mp4_pane_g6

0x92e3,	// (0x0003c38c) main_image3_pane_t4_ParamLimits

0x92e3,	// (0x0003c38c) main_image3_pane_t4

0xb543,	// (0x0003e5ec) popup_navstr_preview_pane_ParamLimits

0xb543,	// (0x0003e5ec) popup_navstr_preview_pane

0xb54f,	// (0x0003e5f8) scroll_navstr_pane_ParamLimits

0xb54f,	// (0x0003e5f8) scroll_navstr_pane

0x449d,	// (0x00037546) bg_popup_preview_window_pane_cp04

0x1aed,	// (0x00034b96) popup_navstr_preview_pane_t1

0xb55b,	// (0x0003e604) scroll_navstr_pane_g1_ParamLimits

0xb55b,	// (0x0003e604) scroll_navstr_pane_g1

0xb568,	// (0x0003e611) scroll_navstr_pane_t1_ParamLimits

0xb568,	// (0x0003e611) scroll_navstr_pane_t1

0x1a92,	// (0x00034b3b) bg_button_pane_cp014

0x1a92,	// (0x00034b3b) bg_button_pane_cp030

0x3b0f,	// (0x00036bb8) list_double_fisheye_pane_g4_ParamLimits

0x3b0f,	// (0x00036bb8) list_double_fisheye_pane_g4

0x3b1b,	// (0x00036bc4) list_double_fisheye_pane_g5_ParamLimits

0x3b1b,	// (0x00036bc4) list_double_fisheye_pane_g5

0x19fa,	// (0x00034aa3) sp_fs_scroll_pane_cp03

0x1763,	// (0x0003480c) main_sp_fs_ctrlbar_pane_g1_ParamLimits

0x176f,	// (0x00034818) main_sp_fs_ctrlbar_pane_g2_ParamLimits

0xfcf3,	// (0x00042d9c) main_sp_fs_ctrlbar_pane_g_ParamLimits

0x177b,	// (0x00034824) main_sp_fs_ctrlbar_pane_t1_ParamLimits

0xb486,	// (0x0003e52f) sp_fs_scroll_pane_cp02

0xc6a6,	// (0x0003f74f) popup_sp_fs_calendar_preview_list_single_pane_ParamLimits

0xc6a6,	// (0x0003f74f) popup_sp_fs_calendar_preview_list_single_pane

0x449d,	// (0x00037546) main_cam6_pano_pane

0x75df,	// (0x0003a688) main_mup3_pane_ParamLimits

0x449d,	// (0x00037546) main_phacti_pane

0xad62,	// (0x0003de0b) bg_button_pane_cp11

0xad7a,	// (0x0003de23) main_mobtv_info_pane_g2_ParamLimits

0xad7a,	// (0x0003de23) main_mobtv_info_pane_g2

0x0001,

0xfc53,	// (0x00042cfc) main_mobtv_info_pane_g_ParamLimits

0xfc53,	// (0x00042cfc) main_mobtv_info_pane_g

0xaf2e,	// (0x0003dfd7) sc_clock_pane_t5_ParamLimits

0xaf2e,	// (0x0003dfd7) sc_clock_pane_t5

0xb11c,	// (0x0003e1c5) main_radioblah_pane_g1_ParamLimits

0x1515,	// (0x000345be) main_radioblah_pane_t3_ParamLimits

0x1515,	// (0x000345be) main_radioblah_pane_t3

0x152d,	// (0x000345d6) main_radioblah_pane_t4_ParamLimits

0x152d,	// (0x000345d6) main_radioblah_pane_t4

0xb13a,	// (0x0003e1e3) main_radioblah_text_pane_ParamLimits

0xb13a,	// (0x0003e1e3) main_radioblah_text_pane

0xb147,	// (0x0003e1f0) main_radioblah_info_pane_g1_ParamLimits

0xb1e0,	// (0x0003e289) main_radioblah_info_pane_t4_ParamLimits

0xb1e0,	// (0x0003e289) main_radioblah_info_pane_t4

0x75df,	// (0x0003a688) main_sp_fs_calendar_pane

0xb57a,	// (0x0003e623) main_phacti_pane_g1

0xb582,	// (0x0003e62b) phacti_note_pane_ParamLimits

0xb582,	// (0x0003e62b) phacti_note_pane

0x1b04,	// (0x00034bad) phacti_term_pane_ParamLimits

0x1b04,	// (0x00034bad) phacti_term_pane

0x1b19,	// (0x00034bc2) phacti_note_pane_t1_ParamLimits

0x1b19,	// (0x00034bc2) phacti_note_pane_t1

0x417e,	// (0x00037227) phacti_term_pane_g1

0x4186,	// (0x0003722f) phacti_term_pane_t1_ParamLimits

0x4186,	// (0x0003722f) phacti_term_pane_t1

0x1b62,	// (0x00034c0b) popup_sp_fs_calendar_preview_list_single_pane_g1

0x1b6a,	// (0x00034c13) popup_sp_fs_calendar_preview_list_single_pane_g2

0x0001,

0xfdbd,	// (0x00042e66) popup_sp_fs_calendar_preview_list_single_pane_g

0x1b72,	// (0x00034c1b) popup_sp_fs_calendar_preview_list_single_pane_t1_ParamLimits

0x1b72,	// (0x00034c1b) popup_sp_fs_calendar_preview_list_single_pane_t1

0x1b88,	// (0x00034c31) aid_popup_sp_fs_bg_corner_pane

0xe896,	// (0x0004193f) popup_sp_fs_calendar_preview_bg_pane_g1

0x449d,	// (0x00037546) popup_sp_fs_calendar_preview_bg_pane

0x1b90,	// (0x00034c39) popup_sp_fs_calendar_preview_list_pane

0x75df,	// (0x0003a688) bg_main_sp_fs_cale_pane_ParamLimits

0x75df,	// (0x0003a688) bg_main_sp_fs_cale_pane

0x41b0,	// (0x00037259) listscroll_cale_mrui_pane_ParamLimits

0x41b0,	// (0x00037259) listscroll_cale_mrui_pane

0x41c4,	// (0x0003726d) listscroll_sp_fs_schedule_track_pane

0x41cd,	// (0x00037276) main_sp_fs_ctrlbar_pane_cp01_ParamLimits

0x41cd,	// (0x00037276) main_sp_fs_ctrlbar_pane_cp01

0x1bcf,	// (0x00034c78) main_sp_fs_ribbon_pane

0x1bd7,	// (0x00034c80) popup_sp_fs_cale_preview_window

0xb5c1,	// (0x0003e66a) list_single_sp_fs_schedule_track_pane_ParamLimits

0xb5c1,	// (0x0003e66a) list_single_sp_fs_schedule_track_pane

0x4755,	// (0x000377fe) bg_sp_fs_highlight_list_pane_cp03_ParamLimits

0x4755,	// (0x000377fe) bg_sp_fs_highlight_list_pane_cp03

0xb5d3,	// (0x0003e67c) list_single_sp_fs_schedule_track_pane_g1_ParamLimits

0xb5d3,	// (0x0003e67c) list_single_sp_fs_schedule_track_pane_g1

0xb5df,	// (0x0003e688) list_single_sp_fs_schedule_track_pane_g2_ParamLimits

0xb5df,	// (0x0003e688) list_single_sp_fs_schedule_track_pane_g2

0x0001,

0xfdc2,	// (0x00042e6b) list_single_sp_fs_schedule_track_pane_g_ParamLimits

0xfdc2,	// (0x00042e6b) list_single_sp_fs_schedule_track_pane_g

0xb5eb,	// (0x0003e694) list_single_sp_fs_schedule_track_pane_t1_ParamLimits

0xb5eb,	// (0x0003e694) list_single_sp_fs_schedule_track_pane_t1

0xb609,	// (0x0003e6b2) sp_fs_schedule_track_pane_ParamLimits

0xb609,	// (0x0003e6b2) sp_fs_schedule_track_pane

0x1be9,	// (0x00034c92) sp_fs_schedule_track_pane_g1

0x1bf1,	// (0x00034c9a) sp_fs_schedule_track_pane_g2

0x1bf9,	// (0x00034ca2) sp_fs_schedule_track_pane_g3

0x1c01,	// (0x00034caa) sp_fs_schedule_track_pane_g4

0x1c09,	// (0x00034cb2) sp_fs_schedule_track_pane_g5

0x0004,

0xfdc7,	// (0x00042e70) sp_fs_schedule_track_pane_g

0x0420,	// (0x000334c9) bg_sp_fs_schedule_viewer_highlight_g1

0xc99a,	// (0x0003fa43) bg_sp_fs_schedule_viewer_highlight_g2

0x0428,	// (0x000334d1) bg_sp_fs_schedule_viewer_highlight_g3

0x0430,	// (0x000334d9) bg_sp_fs_schedule_viewer_highlight_g4

0x06bb,	// (0x00033764) bg_sp_fs_schedule_viewer_highlight_g5

0x0440,	// (0x000334e9) bg_sp_fs_schedule_viewer_highlight_g6

0x0448,	// (0x000334f1) bg_sp_fs_schedule_viewer_highlight_g7

0x0450,	// (0x000334f9) bg_sp_fs_schedule_viewer_highlight_g8

0xc97a,	// (0x0003fa23) bg_sp_fs_schedule_viewer_highlight_g9

0x0008,

0xfdd2,	// (0x00042e7b) bg_sp_fs_schedule_viewer_highlight_g

0x449d,	// (0x00037546) bg_main_sp_fs_ribbon_pane

0xb61b,	// (0x0003e6c4) main_sp_fs_ribbon_pane_g1

0x1c11,	// (0x00034cba) main_sp_fs_ribbon_pane_t1

0xb624,	// (0x0003e6cd) main_sp_fs_ribbon_pane_t2

0x1c20,	// (0x00034cc9) main_sp_fs_ribbon_pane_t3

0x0002,

0xfde5,	// (0x00042e8e) main_sp_fs_ribbon_pane_t

0x1c2f,	// (0x00034cd8) main_sp_fs_ribbon_scheduler_pane

0x1c37,	// (0x00034ce0) bg_main_sp_fs_ribbon_pane_g1

0x1c40,	// (0x00034ce9) bg_main_sp_fs_ribbon_pane_g2

0x1c49,	// (0x00034cf2) bg_main_sp_fs_ribbon_pane_g3

0x0002,

0xfdec,	// (0x00042e95) bg_main_sp_fs_ribbon_pane_g

0x1c51,	// (0x00034cfa) main_sp_fs_ribbon_scheduler_pane_g1

0x1c5a,	// (0x00034d03) main_sp_fs_ribbon_scheduler_pane_g2

0x1c63,	// (0x00034d0c) main_sp_fs_ribbon_scheduler_pane_g3

0x0002,

0xfdf3,	// (0x00042e9c) main_sp_fs_ribbon_scheduler_pane_g

0x1c6c,	// (0x00034d15) list_cale_mrui_pane

0xb633,	// (0x0003e6dc) sp_fs_scroll_pane_cp07_ParamLimits

0xb633,	// (0x0003e6dc) sp_fs_scroll_pane_cp07

0xb649,	// (0x0003e6f2) bg_sp_fs_schedule_viewer_highlight_ParamLimits

0xb649,	// (0x0003e6f2) bg_sp_fs_schedule_viewer_highlight

0x1c75,	// (0x00034d1e) list_single_sp_fs_schedule_track_pane_cp01

0x1c7d,	// (0x00034d26) list_sp_fs_schedule_track_pane

0x1c85,	// (0x00034d2e) sp_fs_scroll_pane_cp06_ParamLimits

0x1c85,	// (0x00034d2e) sp_fs_scroll_pane_cp06

0xe896,	// (0x0004193f) bgmain_sp_fs_calendar_pane_g1

0x41de,	// (0x00037287) list_single_cale_mrui_pane_ParamLimits

0x41de,	// (0x00037287) list_single_cale_mrui_pane

0x4200,	// (0x000372a9) list_single_cale_mrui_row_pane_ParamLimits

0x4200,	// (0x000372a9) list_single_cale_mrui_row_pane

0x420d,	// (0x000372b6) list_single_cale_mrui_row_pane_g1_ParamLimits

0x420d,	// (0x000372b6) list_single_cale_mrui_row_pane_g1

0x4245,	// (0x000372ee) list_single_cale_mrui_row_pane_t1_ParamLimits

0x4245,	// (0x000372ee) list_single_cale_mrui_row_pane_t1

0x4257,	// (0x00037300) list_single_cale_mrui_row_pane_t2_ParamLimits

0x4257,	// (0x00037300) list_single_cale_mrui_row_pane_t2

0x42bd,	// (0x00037366) list_single_cale_mrui_row_pane_t3_ParamLimits

0x42bd,	// (0x00037366) list_single_cale_mrui_row_pane_t3

0x42ec,	// (0x00037395) list_single_cale_mrui_row_pane_t4_ParamLimits

0x42ec,	// (0x00037395) list_single_cale_mrui_row_pane_t4

0x0003,

0xfdff,	// (0x00042ea8) list_single_cale_mrui_row_pane_t_ParamLimits

0xfdff,	// (0x00042ea8) list_single_cale_mrui_row_pane_t

0x431b,	// (0x000373c4) list_single_cmail_header_editor_pane_bg_cp01_ParamLimits

0x431b,	// (0x000373c4) list_single_cmail_header_editor_pane_bg_cp01

0x433f,	// (0x000373e8) list_single_cmail_header_editor_pane_bg_cp02_ParamLimits

0x433f,	// (0x000373e8) list_single_cmail_header_editor_pane_bg_cp02

0xb656,	// (0x0003e6ff) main_radioblah_text_pane_t1_ParamLimits

0xb656,	// (0x0003e6ff) main_radioblah_text_pane_t1

0x1d4c,	// (0x00034df5) cam6_indi_pane_cp01

0x1d54,	// (0x00034dfd) cam6_mode_pane_cp01

0x1d5c,	// (0x00034e05) cam6_pano_pane

0x1d65,	// (0x00034e0e) cam6_zoom_pane_cp01

0x1d6f,	// (0x00034e18) cam6_pano_image_pane

0x1d78,	// (0x00034e21) cam6_pano_pane_g1

0x13af,	// (0x00034458) cam6_pano_pane_g2

0x1d81,	// (0x00034e2a) cam6_pano_pane_g3

0x1d8a,	// (0x00034e33) cam6_pano_pane_g4

0xee02,	// (0x00041eab) cam6_pano_pane_g5

0x1d93,	// (0x00034e3c) cam6_pano_pane_g6

0x1d9b,	// (0x00034e44) cam6_pano_pane_g7

0x1da3,	// (0x00034e4c) cam6_pano_pane_g8

0x1dac,	// (0x00034e55) cam6_pano_pane_g9

0x0008,

0xfe08,	// (0x00042eb1) cam6_pano_pane_g

0x449d,	// (0x00037546) main_browser_tag_pane

0x1ae5,	// (0x00034b8e) grid_navstr_albumart_pane

0x1db7,	// (0x00034e60) cell_navstr_albumart_pane_ParamLimits

0x1db7,	// (0x00034e60) cell_navstr_albumart_pane

0x1dd3,	// (0x00034e7c) cell_navstr_albumart_pane_g1

0xe22c,	// (0x000412d5) cell_navstr_albumart_pane_g2

0xe23c,	// (0x000412e5) cell_navstr_albumart_pane_g3

0xe234,	// (0x000412dd) cell_navstr_albumart_pane_g4

0x0003,

0xfe1b,	// (0x00042ec4) cell_navstr_albumart_pane_g

0xb671,	// (0x0003e71a) bt_list_pane_ParamLimits

0xb671,	// (0x0003e71a) bt_list_pane

0xb68a,	// (0x0003e733) bt_list_pane_t1

0xb699,	// (0x0003e742) bt_list_pane_t2

0x0001,

0xfe24,	// (0x00042ecd) bt_list_pane_t

0x449d,	// (0x00037546) main_cale_prevew_pane

0xb6a8,	// (0x0003e751) popup_cale_preview_window_ParamLimits

0xb6a8,	// (0x0003e751) popup_cale_preview_window

0x75df,	// (0x0003a688) bg_popup_preview_window_pane_cp05_ParamLimits

0x75df,	// (0x0003a688) bg_popup_preview_window_pane_cp05

0x1ddb,	// (0x00034e84) list_cale_preview_pane_ParamLimits

0x1ddb,	// (0x00034e84) list_cale_preview_pane

0xb6c3,	// (0x0003e76c) list_double_cale_preview_pane_ParamLimits

0xb6c3,	// (0x0003e76c) list_double_cale_preview_pane

0xb6d7,	// (0x0003e780) list_single_cale_preview_pane_ParamLimits

0xb6d7,	// (0x0003e780) list_single_cale_preview_pane

0xb6ef,	// (0x0003e798) list_single_cale_preview_pane_g1

0xb6f7,	// (0x0003e7a0) list_single_cale_preview_pane_t1_ParamLimits

0xb6f7,	// (0x0003e7a0) list_single_cale_preview_pane_t1

0xb70c,	// (0x0003e7b5) list_double_cale_preview_pane_g1

0xb714,	// (0x0003e7bd) list_double_cale_preview_pane_t1_ParamLimits

0xb714,	// (0x0003e7bd) list_double_cale_preview_pane_t1

0xb729,	// (0x0003e7d2) list_double_cale_preview_pane_t2_ParamLimits

0xb729,	// (0x0003e7d2) list_double_cale_preview_pane_t2

0x0001,

0xfe29,	// (0x00042ed2) list_double_cale_preview_pane_t_ParamLimits

0xfe29,	// (0x00042ed2) list_double_cale_preview_pane_t

0x449d,	// (0x00037546) main_ezdial_pane

0x75df,	// (0x0003a688) main_sp_fs_email_pane_ParamLimits

0xb34a,	// (0x0003e3f3) cmail_ddmenu_btn01_pane_ParamLimits

0xb34a,	// (0x0003e3f3) cmail_ddmenu_btn01_pane

0xb367,	// (0x0003e410) cmail_ddmenu_btn02_pane_ParamLimits

0xb367,	// (0x0003e410) cmail_ddmenu_btn02_pane

0xb385,	// (0x0003e42e) cmail_ddmenu_btn03_pane_ParamLimits

0xb385,	// (0x0003e42e) cmail_ddmenu_btn03_pane

0x3bd5,	// (0x00036c7e) main_sp_fs_ctrlbar_pane_ParamLimits

0x3bf1,	// (0x00036c9a) main_sp_fs_listscroll_pane_te_cp01_ParamLimits

0xb490,	// (0x0003e539) list_cmail_body_pane_ParamLimits

0x1a09,	// (0x00034ab2) bg_button_pane_cp12

0x1a1e,	// (0x00034ac7) list_single_cmail_header_detail_pane_g3_ParamLimits

0x1a1e,	// (0x00034ac7) list_single_cmail_header_detail_pane_g3

0x4146,	// (0x000371ef) list_single_cmail_header_detail_pane_t2_ParamLimits

0x4146,	// (0x000371ef) list_single_cmail_header_detail_pane_t2

0x0001,

0xfdae,	// (0x00042e57) list_single_cmail_header_detail_pane_t_ParamLimits

0xfdae,	// (0x00042e57) list_single_cmail_header_detail_pane_t

0x419b,	// (0x00037244) phacti_term_pane_t2_ParamLimits

0x419b,	// (0x00037244) phacti_term_pane_t2

0x0001,

0xfdb8,	// (0x00042e61) phacti_term_pane_t_ParamLimits

0xfdb8,	// (0x00042e61) phacti_term_pane_t

0x1de7,	// (0x00034e90) aid_size_list_single_double

0xb741,	// (0x0003e7ea) popup_ezdial_listscroll_window

0xb761,	// (0x0003e80a) popup_number_entry_window_cp01

0xcfe4,	// (0x0004008d) bg_popup_call_pane_cp09

0x1df3,	// (0x00034e9c) ezdial_list_pane

0x1dfb,	// (0x00034ea4) scroll_pane_cp23

0xe66d,	// (0x00041716) bg_button_pane_cp028_ParamLimits

0xe66d,	// (0x00041716) bg_button_pane_cp028

0xb76f,	// (0x0003e818) cmail_ddmenu_btn01_pane_g1_ParamLimits

0xb76f,	// (0x0003e818) cmail_ddmenu_btn01_pane_g1

0xb77f,	// (0x0003e828) cmail_ddmenu_btn01_pane_g2_ParamLimits

0xb77f,	// (0x0003e828) cmail_ddmenu_btn01_pane_g2

0x0001,

0xfe2e,	// (0x00042ed7) cmail_ddmenu_btn01_pane_g_ParamLimits

0xfe2e,	// (0x00042ed7) cmail_ddmenu_btn01_pane_g

0x1e03,	// (0x00034eac) cmail_ddmenu_btn01_pane_t1_ParamLimits

0x1e03,	// (0x00034eac) cmail_ddmenu_btn01_pane_t1

0xe413,	// (0x000414bc) bg_button_pane_cp029_ParamLimits

0xe413,	// (0x000414bc) bg_button_pane_cp029

0xb77f,	// (0x0003e828) cmail_ddmenu_btn02_pane_g1_ParamLimits

0xb77f,	// (0x0003e828) cmail_ddmenu_btn02_pane_g1

0xb797,	// (0x0003e840) cmail_ddmenu_btn02_pane_t1_ParamLimits

0xb797,	// (0x0003e840) cmail_ddmenu_btn02_pane_t1

0x4755,	// (0x000377fe) bg_button_pane_cp031_ParamLimits

0x4755,	// (0x000377fe) bg_button_pane_cp031

0xb77f,	// (0x0003e828) cmail_ddmenu_btn03_pane_g1_ParamLimits

0xb77f,	// (0x0003e828) cmail_ddmenu_btn03_pane_g1

0xb797,	// (0x0003e840) cmail_ddmenu_btn03_pane_t1_ParamLimits

0xb797,	// (0x0003e840) cmail_ddmenu_btn03_pane_t1

0x918c,	// (0x0003c235) cell_dialer2_keypad_pane_t1_ParamLimits

0x91a6,	// (0x0003c24f) cell_dialer2_keypad_pane_t1_copy1_ParamLimits

0x91a6,	// (0x0003c24f) cell_dialer2_keypad_pane_t1_copy1

0xabf2,	// (0x0003dc9b) ncimui_group_button_pane

0x75df,	// (0x0003a688) main_sp_fs_calendar_pane_ParamLimits

0xb4a5,	// (0x0003e54e) list_single_cmail_header_caption_pane_ParamLimits

0x1b98,	// (0x00034c41) aid_recal_txt_sm_pane

0x449d,	// (0x00037546) mian_recal_day_pane

0x1bd7,	// (0x00034c80) popup_sp_fs_cale_preview_window_ParamLimits

0x449d,	// (0x00037546) list_recal_day_pane

0x1e3a,	// (0x00034ee3) list_single_recal_day_pane_ParamLimits

0x1e3a,	// (0x00034ee3) list_single_recal_day_pane

0x1e4c,	// (0x00034ef5) list_single_recal_day_pane_g1_ParamLimits

0x1e4c,	// (0x00034ef5) list_single_recal_day_pane_g1

0x1e58,	// (0x00034f01) list_single_recal_day_pane_g2_ParamLimits

0x1e58,	// (0x00034f01) list_single_recal_day_pane_g2

0x1e64,	// (0x00034f0d) list_single_recal_day_pane_g3_ParamLimits

0x1e64,	// (0x00034f0d) list_single_recal_day_pane_g3

0xb7bb,	// (0x0003e864) list_single_recal_day_pane_g4_ParamLimits

0xb7bb,	// (0x0003e864) list_single_recal_day_pane_g4

0x1e70,	// (0x00034f19) list_single_recal_day_pane_g5_ParamLimits

0x1e70,	// (0x00034f19) list_single_recal_day_pane_g5

0x1e7c,	// (0x00034f25) list_single_recal_day_pane_g6_ParamLimits

0x1e7c,	// (0x00034f25) list_single_recal_day_pane_g6

0x0005,

0xfe3d,	// (0x00042ee6) list_single_recal_day_pane_g_ParamLimits

0xfe3d,	// (0x00042ee6) list_single_recal_day_pane_g

0x1e88,	// (0x00034f31) list_single_recal_day_pane_t1

0x1e96,	// (0x00034f3f) list_single_recal_day_pane_t2

0x0001,

0xfe4a,	// (0x00042ef3) list_single_recal_day_pane_t

0xb7c9,	// (0x0003e872) ncimui_query_button_pane_ParamLimits

0xb7c9,	// (0x0003e872) ncimui_query_button_pane

0xb7d9,	// (0x0003e882) ncimui_query_button_pane_t1_ParamLimits

0xb7d9,	// (0x0003e882) ncimui_query_button_pane_t1

0x1ea4,	// (0x00034f4d) ncimui_query_button_pane_t2_ParamLimits

0x1ea4,	// (0x00034f4d) ncimui_query_button_pane_t2

0x0001,

0xfe4f,	// (0x00042ef8) ncimui_query_button_pane_t_ParamLimits

0xfe4f,	// (0x00042ef8) ncimui_query_button_pane_t

0xb7ec,	// (0x0003e895) query_button_pane_ParamLimits

0xb7ec,	// (0x0003e895) query_button_pane

0x449d,	// (0x00037546) bg_button_pane_cp0028

0x1eb7,	// (0x00034f60) query_button_pane_t1

0x75fb,	// (0x0003a6a4) main_tport_pane_ParamLimits

0xb3b3,	// (0x0003e45c) bg_popup_window_pane_cp01_ParamLimits

0xb3b3,	// (0x0003e45c) bg_popup_window_pane_cp01

0xb3c0,	// (0x0003e469) heading_pane_cp08_ParamLimits

0xb3c0,	// (0x0003e469) heading_pane_cp08

0xb3ce,	// (0x0003e477) heading_pane_cp07_ParamLimits

0xb3ce,	// (0x0003e477) heading_pane_cp07

0x19d4,	// (0x00034a7d) cell_tport_appsw_pane_g2

0x0002,

0xfd9b,	// (0x00042e44) cell_tport_appsw_pane_g

0x34e7,	// (0x00036590) input_candi_list_open_g1

0xcb35,	// (0x0003fbde) list_cale_time_pane_g6_ParamLimits

0xcb35,	// (0x0003fbde) list_cale_time_pane_g6

0x8068,	// (0x0003b111) aid_size_touch_calib_1_ParamLimits

0x8068,	// (0x0003b111) aid_size_touch_calib_1

0x8074,	// (0x0003b11d) aid_size_touch_calib_2_ParamLimits

0x8074,	// (0x0003b11d) aid_size_touch_calib_2

0x8082,	// (0x0003b12b) aid_size_touch_calib_3_ParamLimits

0x8082,	// (0x0003b12b) aid_size_touch_calib_3

0x8092,	// (0x0003b13b) aid_size_touch_calib_4_ParamLimits

0x8092,	// (0x0003b13b) aid_size_touch_calib_4

0x80a0,	// (0x0003b149) main_touch_calib_button_group_pane_ParamLimits

0x80a0,	// (0x0003b149) main_touch_calib_button_group_pane

0x80ae,	// (0x0003b157) main_touch_calib_pane_g1_ParamLimits

0x80ba,	// (0x0003b163) main_touch_calib_pane_g2_ParamLimits

0x80c6,	// (0x0003b16f) main_touch_calib_pane_g3_ParamLimits

0x80d2,	// (0x0003b17b) main_touch_calib_pane_g4_ParamLimits

0xf775,	// (0x0004281e) main_touch_calib_pane_g_ParamLimits

0x80de,	// (0x0003b187) main_touch_calib_pane_t1_ParamLimits

0x80f5,	// (0x0003b19e) main_touch_calib_pane_t2_ParamLimits

0x810c,	// (0x0003b1b5) main_touch_calib_pane_t3_ParamLimits

0x8120,	// (0x0003b1c9) main_touch_calib_pane_t4_ParamLimits

0x8136,	// (0x0003b1df) main_touch_calib_pane_t5_ParamLimits

0xf77e,	// (0x00042827) main_touch_calib_pane_t_ParamLimits

0xebcc,	// (0x00041c75) list_single_fp_cale_pane_g3_ParamLimits

0xebcc,	// (0x00041c75) list_single_fp_cale_pane_g3

0x75df,	// (0x0003a688) bg_button_pane_cp012_ParamLimits

0x75df,	// (0x0003a688) bg_vkb2_func_pane_cp03_ParamLimits

0x9f33,	// (0x0003cfdc) cell_vitu2_function_top_pane_g1_ParamLimits

0x75df,	// (0x0003a688) bg_vkb2_func_pane_cp04_ParamLimits

0xab8e,	// (0x0003dc37) main_ncimui_button_group_pane_ParamLimits

0xab8e,	// (0x0003dc37) main_ncimui_button_group_pane

0xabe0,	// (0x0003dc89) main_ncimui_pane_t3_ParamLimits

0xabe0,	// (0x0003dc89) main_ncimui_pane_t3

0x1afb,	// (0x00034ba4) phacti_button_group_pane

0x1de7,	// (0x00034e90) aid_size_list_single_double_ParamLimits

0xb741,	// (0x0003e7ea) popup_ezdial_listscroll_window_ParamLimits

0xb761,	// (0x0003e80a) popup_number_entry_window_cp01_ParamLimits

0xb7f9,	// (0x0003e8a2) phacti_button_pane_ParamLimits

0xb7f9,	// (0x0003e8a2) phacti_button_pane

0x449d,	// (0x00037546) bg_button_pane_cp14

0x1ec5,	// (0x00034f6e) phacti_button_pane_t1

0xb80a,	// (0x0003e8b3) main_touch_calib_button_pane_ParamLimits

0xb80a,	// (0x0003e8b3) main_touch_calib_button_pane

0xc590,	// (0x0003f639) bg_button_pane_cp18_ParamLimits

0xc590,	// (0x0003f639) bg_button_pane_cp18

0x1ed3,	// (0x00034f7c) main_touch_calib_button_pane_t1_ParamLimits

0x1ed3,	// (0x00034f7c) main_touch_calib_button_pane_t1

0x1ee9,	// (0x00034f92) main_touch_calib_button_pane_t2_ParamLimits

0x1ee9,	// (0x00034f92) main_touch_calib_button_pane_t2

0x0001,

0xfe54,	// (0x00042efd) main_touch_calib_button_pane_t_ParamLimits

0xfe54,	// (0x00042efd) main_touch_calib_button_pane_t

0x449d,	// (0x00037546) cell_ncimui_button_pane

0x449d,	// (0x00037546) bg_button_pane_cp032

0x1f07,	// (0x00034fb0) cell_ncimui_button_pane_t1

0x9202,	// (0x0003c2ab) image3_infobar_pane_ParamLimits

0x9202,	// (0x0003c2ab) image3_infobar_pane

0xaf50,	// (0x0003dff9) fs_bigclock_status_pane_ParamLimits

0xaf50,	// (0x0003dff9) fs_bigclock_status_pane

0xaf5d,	// (0x0003e006) main_fs_bigclock_clock_pane_ParamLimits

0xaf5d,	// (0x0003e006) main_fs_bigclock_clock_pane

0xaf81,	// (0x0003e02a) main_fs_bigclock_indi_pane_ParamLimits

0xaf81,	// (0x0003e02a) main_fs_bigclock_indi_pane

0xafb9,	// (0x0003e062) main_fs_bigclock_swipe_pane_ParamLimits

0xafb9,	// (0x0003e062) main_fs_bigclock_swipe_pane

0x449d,	// (0x00037546) main_fs_clock_dumped_data

0xafeb,	// (0x0003e094) list_single_fs_bigclock_indicator_pane_g1_ParamLimits

0xafeb,	// (0x0003e094) list_single_fs_bigclock_indicator_pane_g1

0xb010,	// (0x0003e0b9) list_single_fs_bigclock_indicator_pane_g2_ParamLimits

0xb010,	// (0x0003e0b9) list_single_fs_bigclock_indicator_pane_g2

0xb02a,	// (0x0003e0d3) list_single_fs_bigclock_indicator_pane_g3_ParamLimits

0xb02a,	// (0x0003e0d3) list_single_fs_bigclock_indicator_pane_g3

0xb048,	// (0x0003e0f1) list_single_fs_bigclock_indicator_pane_g4_ParamLimits

0xb048,	// (0x0003e0f1) list_single_fs_bigclock_indicator_pane_g4

0x0004,

0xfc87,	// (0x00042d30) list_single_fs_bigclock_indicator_pane_g_ParamLimits

0xfc87,	// (0x00042d30) list_single_fs_bigclock_indicator_pane_g

0xb06e,	// (0x0003e117) list_single_fs_bigclock_indicator_pane_t1_ParamLimits

0xb06e,	// (0x0003e117) list_single_fs_bigclock_indicator_pane_t1

0xb096,	// (0x0003e13f) list_single_fs_bigclock_indicator_pane_t2_ParamLimits

0xb096,	// (0x0003e13f) list_single_fs_bigclock_indicator_pane_t2

0xb0be,	// (0x0003e167) list_single_fs_bigclock_indicator_pane_t3_ParamLimits

0xb0be,	// (0x0003e167) list_single_fs_bigclock_indicator_pane_t3

0xb0e8,	// (0x0003e191) list_single_fs_bigclock_indicator_pane_t4_ParamLimits

0xb0e8,	// (0x0003e191) list_single_fs_bigclock_indicator_pane_t4

0x0004,

0xfc92,	// (0x00042d3b) list_single_fs_bigclock_indicator_pane_t_ParamLimits

0xfc92,	// (0x00042d3b) list_single_fs_bigclock_indicator_pane_t

0x1f15,	// (0x00034fbe) image3_infobar_fav_pane_ParamLimits

0x1f15,	// (0x00034fbe) image3_infobar_fav_pane

0x1f25,	// (0x00034fce) image3_infobar_loc_pane_ParamLimits

0x1f25,	// (0x00034fce) image3_infobar_loc_pane

0x1f3b,	// (0x00034fe4) image3_infobar_time_pane_ParamLimits

0x1f3b,	// (0x00034fe4) image3_infobar_time_pane

0xe896,	// (0x0004193f) image3_infobar_time_pane_g1

0x1f4b,	// (0x00034ff4) image3_infobar_time_pane_t1

0xe896,	// (0x0004193f) image3_infobar_loc_pane_g1

0x1f59,	// (0x00035002) image3_infobar_loc_pane_g2

0x0001,

0xfe59,	// (0x00042f02) image3_infobar_loc_pane_g

0x1f61,	// (0x0003500a) image3_infobar_loc_pane_t1

0xe896,	// (0x0004193f) image3_infobar_fav_pane_g1

0x1f6f,	// (0x00035018) image3_infobar_fav_pane_g2

0x0001,

0xfe5e,	// (0x00042f07) image3_infobar_fav_pane_g

0x1f77,	// (0x00035020) fs_bigclock_status_battery_pane

0x1f80,	// (0x00035029) fs_bigclock_status_signal_pane

0x1f89,	// (0x00035032) fs_bigclock_status_title_pane

0x1f92,	// (0x0003503b) fs_bigclock_status_signal_pane_g1

0x1f9b,	// (0x00035044) fs_bigclock_status_signal_pane_g2

0x0001,

0xfe63,	// (0x00042f0c) fs_bigclock_status_signal_pane_g

0x1fa3,	// (0x0003504c) fs_bigclock_status_battery_pane_g1

0x1fac,	// (0x00035055) fs_bigclock_status_battery_pane_g2

0x0001,

0xfe68,	// (0x00042f11) fs_bigclock_status_battery_pane_g

0x1fb4,	// (0x0003505d) fs_bigclock_status_title_pane_t1

0xe896,	// (0x0004193f) main_fs_bigclock_clock_pane_g1

0x1fc2,	// (0x0003506b) main_fs_bigclock_clock_pane_g2

0x1fc2,	// (0x0003506b) main_fs_bigclock_clock_pane_g3

0x1fc2,	// (0x0003506b) main_fs_bigclock_clock_pane_g4

0x0003,

0xfe6d,	// (0x00042f16) main_fs_bigclock_clock_pane_g

0x1fce,	// (0x00035077) main_fs_bigclock_clock_pane_t1

0xb81c,	// (0x0003e8c5) main_fs_bigclock_clock_pane_t2

0x0001,

0xfe76,	// (0x00042f1f) main_fs_bigclock_clock_pane_t

0x1fdc,	// (0x00035085) list_single_fs_bigclock_indicator_pane_ParamLimits

0x1fdc,	// (0x00035085) list_single_fs_bigclock_indicator_pane

0xb82b,	// (0x0003e8d4) list_single_fs_bigclock_pane_ParamLimits

0xb82b,	// (0x0003e8d4) list_single_fs_bigclock_pane

0x1ff6,	// (0x0003509f) main_fs_bigclock_indicator_pane_t1

0x2005,	// (0x000350ae) list_single_fs_bigclock_pane_g1

0x200d,	// (0x000350b6) list_single_fs_bigclock_pane_t1

0xe896,	// (0x0004193f) main_fs_bigclock_swipe_pane_g1

0x204d,	// (0x000350f6) main_fs_bigclock_swipe_pane_g2

0x0001,

0xfe87,	// (0x00042f30) main_fs_bigclock_swipe_pane_g

0x2055,	// (0x000350fe) main_fs_bigclock_swipe_pane_t1_ParamLimits

0x2055,	// (0x000350fe) main_fs_bigclock_swipe_pane_t1

0x654d,	// (0x000395f6) call_type_pane_ParamLimits

0x449d,	// (0x00037546) main_btmg_pane

0x4239,	// (0x000372e2) list_single_cale_mrui_row_pane_g2_ParamLimits

0x4239,	// (0x000372e2) list_single_cale_mrui_row_pane_g2

0x0001,

0xfdfa,	// (0x00042ea3) list_single_cale_mrui_row_pane_g_ParamLimits

0xfdfa,	// (0x00042ea3) list_single_cale_mrui_row_pane_g

0x1e21,	// (0x00034eca) list_recal_vselct_arw_lo_pane

0x1e29,	// (0x00034ed2) list_recal_vselct_arw_up_pane

0x1e31,	// (0x00034eda) list_recal_vselct_pane

0x2072,	// (0x0003511b) btmg_button_pane

0xb88e,	// (0x0003e937) main_btmg_pane_g1

0x449d,	// (0x00037546) bg_button_pane_cp044

0x207c,	// (0x00035125) btmg_button_pane_t1

0xe40b,	// (0x000414b4) aid_listscroll_gen

0x75df,	// (0x0003a688) main_cntbar_detail_pane

0x19ea,	// (0x00034a93) list_cmail_folder_pane

0x19fa,	// (0x00034aa3) sp_fs_scroll_pane_cp03_ParamLimits

0xd8df,	// (0x00040988) list_single_fs_dyc_pane_cp01_ParamLimits

0xd8df,	// (0x00040988) list_single_fs_dyc_pane_cp01

0x208a,	// (0x00035133) aid_size_cmail_indent

0x435b,	// (0x00037404) list_single_dyc_row_pane_cp01

0xb8b6,	// (0x0003e95f) cntbar_detail_list_pane_ParamLimits

0xb8b6,	// (0x0003e95f) cntbar_detail_list_pane

0xb8f6,	// (0x0003e99f) main_cntbar_detail_cont_pane_ParamLimits

0xb8f6,	// (0x0003e99f) main_cntbar_detail_cont_pane

0x6541,	// (0x000395ea) scroll_pane_cp032_ParamLimits

0x6541,	// (0x000395ea) scroll_pane_cp032

0xb902,	// (0x0003e9ab) cntbar_detail_list_event_pane_ParamLimits

0xb902,	// (0x0003e9ab) cntbar_detail_list_event_pane

0xb8c4,	// (0x0003e96d) cntbar_detail_list_shct_pane

0xc9e8,	// (0x0003fa91) aid_list_gen

0x209c,	// (0x00035145) aid_scroll

0x20a5,	// (0x0003514e) aid_size_touch_scroll_bar

0xb912,	// (0x0003e9bb) aid_list_double

0x20b7,	// (0x00035160) aid_list_single

0x0b4c,	// (0x00033bf5) aid_list_single_lg

0x4364,	// (0x0003740d) aid_list_z_g_a_sm

0x436c,	// (0x00037415) aid_list_z_g_d

0x4374,	// (0x0003741d) aid_txt_z_prm

0x4382,	// (0x0003742b) aid_txt_z_prm_cp01

0x4390,	// (0x00037439) aid_txt_z_sec

0xb91b,	// (0x0003e9c4) main_cntbar_detail_cont_pane_g1_ParamLimits

0xb91b,	// (0x0003e9c4) main_cntbar_detail_cont_pane_g1

0xb928,	// (0x0003e9d1) main_cntbar_detail_cont_pane_g2_ParamLimits

0xb928,	// (0x0003e9d1) main_cntbar_detail_cont_pane_g2

0x0001,

0xfe8c,	// (0x00042f35) main_cntbar_detail_cont_pane_g_ParamLimits

0xfe8c,	// (0x00042f35) main_cntbar_detail_cont_pane_g

0x20fa,	// (0x000351a3) main_cntbar_detail_cont_pane_t1

0x2108,	// (0x000351b1) main_cntbar_detail_cont_pane_t2

0x2116,	// (0x000351bf) main_cntbar_detail_cont_pane_t3

0x0002,

0xfe91,	// (0x00042f3a) main_cntbar_detail_cont_pane_t

0xb934,	// (0x0003e9dd) cell_cntbar_detail_list_shct_pane_ParamLimits

0xb934,	// (0x0003e9dd) cell_cntbar_detail_list_shct_pane

0x2124,	// (0x000351cd) cntbar_detail_list_shct_pane_g1

0x212d,	// (0x000351d6) cntbar_detail_list_shct_pane_g2

0x0001,

0xfe98,	// (0x00042f41) cntbar_detail_list_shct_pane_g

0xb948,	// (0x0003e9f1) cntbar_detail_list_event_pane_g1_ParamLimits

0xb948,	// (0x0003e9f1) cntbar_detail_list_event_pane_g1

0xb954,	// (0x0003e9fd) cntbar_detail_list_event_pane_g2_ParamLimits

0xb954,	// (0x0003e9fd) cntbar_detail_list_event_pane_g2

0x0005,

0xfe9d,	// (0x00042f46) cntbar_detail_list_event_pane_g_ParamLimits

0xfe9d,	// (0x00042f46) cntbar_detail_list_event_pane_g

0xb9c2,	// (0x0003ea6b) cntbar_detail_list_event_pane_t1_ParamLimits

0xb9c2,	// (0x0003ea6b) cntbar_detail_list_event_pane_t1

0xb9d7,	// (0x0003ea80) cntbar_detail_list_event_pane_t2_ParamLimits

0xb9d7,	// (0x0003ea80) cntbar_detail_list_event_pane_t2

0x0002,

0xfeaa,	// (0x00042f53) cntbar_detail_list_event_pane_t_ParamLimits

0xfeaa,	// (0x00042f53) cntbar_detail_list_event_pane_t

0xe896,	// (0x0004193f) cell_cntbar_detail_list_shct_pane_g1

0x68e5,	// (0x0003998e) navi_pane_mv_g3

0x75df,	// (0x0003a688) main_cntbar_detail_pane_ParamLimits

0x449d,	// (0x00037546) main_notif_wgt_pane

0x8ed6,	// (0x0003bf7f) aid_tch_main_mp4_pane_g4

0x90eb,	// (0x0003c194) popup_slider_window_cp02

0x1e18,	// (0x00034ec1) list_recal_day_event_pane

0xb896,	// (0x0003e93f) cntbar_detail_btn_pane_ParamLimits

0xb896,	// (0x0003e93f) cntbar_detail_btn_pane

0xb8a6,	// (0x0003e94f) cntbar_detail_btn_pane_cp01_ParamLimits

0xb8a6,	// (0x0003e94f) cntbar_detail_btn_pane_cp01

0xb8c4,	// (0x0003e96d) cntbar_detail_list_shct_pane_ParamLimits

0xb8d0,	// (0x0003e979) cntbar_detail_pane_g1_ParamLimits

0xb8d0,	// (0x0003e979) cntbar_detail_pane_g1

0xb8e0,	// (0x0003e989) cntbar_detail_pane_t1_ParamLimits

0xb8e0,	// (0x0003e989) cntbar_detail_pane_t1

0xb960,	// (0x0003ea09) cntbar_detail_list_event_pane_g3_ParamLimits

0xb960,	// (0x0003ea09) cntbar_detail_list_event_pane_g3

0xb978,	// (0x0003ea21) cntbar_detail_list_event_pane_g4_ParamLimits

0xb978,	// (0x0003ea21) cntbar_detail_list_event_pane_g4

0xb990,	// (0x0003ea39) cntbar_detail_list_event_pane_g5_ParamLimits

0xb990,	// (0x0003ea39) cntbar_detail_list_event_pane_g5

0xb9a8,	// (0x0003ea51) cntbar_detail_list_event_pane_g6_ParamLimits

0xb9a8,	// (0x0003ea51) cntbar_detail_list_event_pane_g6

0xb9ec,	// (0x0003ea95) cntbar_detail_list_event_pane_t3_ParamLimits

0xb9ec,	// (0x0003ea95) cntbar_detail_list_event_pane_t3

0xb9fe,	// (0x0003eaa7) popup_notif_wgt_window_ParamLimits

0xb9fe,	// (0x0003eaa7) popup_notif_wgt_window

0xba0e,	// (0x0003eab7) popup_submenu_window_cp01_ParamLimits

0xba0e,	// (0x0003eab7) popup_submenu_window_cp01

0xcfe4,	// (0x0004008d) bg_popup_window_pane_cp10

0x2136,	// (0x000351df) listscroll_notif_wgt_pane

0x2140,	// (0x000351e9) list_notif_wgt_window

0x2149,	// (0x000351f2) scroll_pane_cp033

0x2152,	// (0x000351fb) list_notif_wgt_row_pane_ParamLimits

0x2152,	// (0x000351fb) list_notif_wgt_row_pane

0x2166,	// (0x0003520f) aid_size_list_notif_wgt_del

0x216f,	// (0x00035218) list_notif_wgt_row_pane_g1

0x2177,	// (0x00035220) list_notif_wgt_row_pane_g2

0x217f,	// (0x00035228) list_notif_wgt_row_pane_g3

0x0002,

0xfeb1,	// (0x00042f5a) list_notif_wgt_row_pane_g

0x2188,	// (0x00035231) list_notif_wgt_row_pane_t1

0x2196,	// (0x0003523f) list_notif_wgt_row_pane_t2

0x21a4,	// (0x0003524d) list_notif_wgt_row_pane_t3

0x0002,

0xfeb8,	// (0x00042f61) list_notif_wgt_row_pane_t

0x0715,	// (0x000337be) list_recal_day_event_pane_g1

0x21b2,	// (0x0003525b) list_recal_day_event_pane_t1

0x449d,	// (0x00037546) bg_button_pane_cp045

0x21c1,	// (0x0003526a) cntbar_detail_btn_pane_t1

0xe413,	// (0x000414bc) main_callh_pane_ParamLimits

0xe413,	// (0x000414bc) main_callh_pane

0x449d,	// (0x00037546) main_coverflow0_pane

0x449d,	// (0x00037546) main_wgtman_pane

0xafd1,	// (0x0003e07a) main_fs_bigclock_unlock_btn_pane_ParamLimits

0xafd1,	// (0x0003e07a) main_fs_bigclock_unlock_btn_pane

0x19cc,	// (0x00034a75) bg_button_pane_cp16

0xb439,	// (0x0003e4e2) cell_tport_appsw_pane_g3

0xba1c,	// (0x0003eac5) cf0_flow_pane_ParamLimits

0xba1c,	// (0x0003eac5) cf0_flow_pane

0x21cf,	// (0x00035278) listscroll_cf0_pane

0x21d8,	// (0x00035281) main_cf0_pane_g1

0xba2b,	// (0x0003ead4) main_cf0_pane_t1_ParamLimits

0xba2b,	// (0x0003ead4) main_cf0_pane_t1

0xba3f,	// (0x0003eae8) main_cf0_pane_t2_ParamLimits

0xba3f,	// (0x0003eae8) main_cf0_pane_t2

0x0001,

0xfebf,	// (0x00042f68) main_cf0_pane_t_ParamLimits

0xfebf,	// (0x00042f68) main_cf0_pane_t

0x21e2,	// (0x0003528b) scroll_pane_cp11

0xba53,	// (0x0003eafc) cf0_flow_pane_g1

0xba5b,	// (0x0003eb04) cf0_flow_pane_g2

0x0001,

0xfec4,	// (0x00042f6d) cf0_flow_pane_g

0xba63,	// (0x0003eb0c) cf0_flow_pane_t1

0x449d,	// (0x00037546) main_call6_pane

0x449d,	// (0x00037546) main_calllock_pane

0xba71,	// (0x0003eb1a) call6_btn_grp_pane_ParamLimits

0xba71,	// (0x0003eb1a) call6_btn_grp_pane

0xba80,	// (0x0003eb29) call6_pane_g1_ParamLimits

0xba80,	// (0x0003eb29) call6_pane_g1

0xba90,	// (0x0003eb39) popup_call6_1st_window_ParamLimits

0xba90,	// (0x0003eb39) popup_call6_1st_window

0xba9e,	// (0x0003eb47) popup_call6_2nd_window_ParamLimits

0xba9e,	// (0x0003eb47) popup_call6_2nd_window

0xbaac,	// (0x0003eb55) cell_call6_btn_pane_ParamLimits

0xbaac,	// (0x0003eb55) cell_call6_btn_pane

0xcfe4,	// (0x0004008d) bg_popup_call2_in_pane_cp03

0x21ed,	// (0x00035296) popup_call6_1st_window_g1

0x21f5,	// (0x0003529e) popup_call6_1st_window_g2

0x21fd,	// (0x000352a6) popup_call6_1st_window_g3

0x0002,

0xfec9,	// (0x00042f72) popup_call6_1st_window_g

0x2205,	// (0x000352ae) popup_call6_1st_window_t1

0x2214,	// (0x000352bd) popup_call6_1st_window_t2

0x2224,	// (0x000352cd) popup_call6_1st_window_t3

0x0002,

0xfed0,	// (0x00042f79) popup_call6_1st_window_t

0xcfe4,	// (0x0004008d) bg_popup_call2_in_pane_cp04

0x21ed,	// (0x00035296) popup_call6_2nd_window_g1

0x21f5,	// (0x0003529e) popup_call6_2nd_window_g2

0x21fd,	// (0x000352a6) popup_call6_2nd_window_g3

0x0002,

0xfec9,	// (0x00042f72) popup_call6_2nd_window_g

0x2205,	// (0x000352ae) popup_call6_2nd_window_t1

0x449d,	// (0x00037546) bg_button_pane_cp15

0x2234,	// (0x000352dd) cell_call6_btn_pane_g1

0x223d,	// (0x000352e6) cell_call6_btn_pane_t1

0xbabb,	// (0x0003eb64) listscroll_wgtman_pane_ParamLimits

0xbabb,	// (0x0003eb64) listscroll_wgtman_pane

0xbad9,	// (0x0003eb82) wgtman_btn_pane_ParamLimits

0xbad9,	// (0x0003eb82) wgtman_btn_pane

0xceaa,	// (0x0003ff53) aid_scroll_copy1

0x224c,	// (0x000352f5) list_wgtman_pane

0xbb0e,	// (0x0003ebb7) wgtman_btn_pane_g1_ParamLimits

0xbb0e,	// (0x0003ebb7) wgtman_btn_pane_g1

0xbb36,	// (0x0003ebdf) wgtman_btn_pane_t1_ParamLimits

0xbb36,	// (0x0003ebdf) wgtman_btn_pane_t1

0x2256,	// (0x000352ff) wgtman_btn_pane_t2_ParamLimits

0x2256,	// (0x000352ff) wgtman_btn_pane_t2

0x0001,

0xfed7,	// (0x00042f80) wgtman_btn_pane_t_ParamLimits

0xfed7,	// (0x00042f80) wgtman_btn_pane_t

0x226d,	// (0x00035316) listrow_wgtman_pane_ParamLimits

0x226d,	// (0x00035316) listrow_wgtman_pane

0x2281,	// (0x0003532a) listrow_wgtman_pane_g1

0xbb6d,	// (0x0003ec16) listrow_wgtman_pane_g2

0x0001,

0xfedc,	// (0x00042f85) listrow_wgtman_pane_g

0x439e,	// (0x00037447) listrow_wgtman_pane_t1

0x43ac,	// (0x00037455) listrow_wgtman_pane_t2

0x0001,

0xfee1,	// (0x00042f8a) listrow_wgtman_pane_t

0x43ba,	// (0x00037463) wait_bar_pane_cp09

0x22ae,	// (0x00035357) main_calllock_btn_pane

0x22b8,	// (0x00035361) main_calllock_pane_g1

0x449d,	// (0x00037546) bg_button_pane_cp17

0x22c4,	// (0x0003536d) main_calllock_btn_pane_g1

0x22cd,	// (0x00035376) main_calllock_btn_pane_t1

0x449d,	// (0x00037546) main_dialer3_pane

0x449d,	// (0x00037546) main_fmrd2_pane

0xe896,	// (0x0004193f) main_fs_bigclock_unlock_btn_pane_g1

0x22e4,	// (0x0003538d) main_fs_bigclock_unlock_btn_pane_t1

0xbb77,	// (0x0003ec20) area_fmrd2_info_pane_ParamLimits

0xbb77,	// (0x0003ec20) area_fmrd2_info_pane

0xbb85,	// (0x0003ec2e) area_fmrd2_visual_pane_ParamLimits

0xbb85,	// (0x0003ec2e) area_fmrd2_visual_pane

0xbb93,	// (0x0003ec3c) fmrd2_indi_pane_ParamLimits

0xbb93,	// (0x0003ec3c) fmrd2_indi_pane

0xbba0,	// (0x0003ec49) area_fmrd2_visual_pane_g1

0xbba8,	// (0x0003ec51) area_fmrd2_visual_pane_t1

0xbbb8,	// (0x0003ec61) area_fmrd2_visual_pane_t2

0xbbc8,	// (0x0003ec71) area_fmrd2_visual_pane_t3

0x0002,

0xfeeb,	// (0x00042f94) area_fmrd2_visual_pane_t

0xbbd8,	// (0x0003ec81) area_fmrd2_info_pane_g1

0xbbe0,	// (0x0003ec89) area_fmrd2_info_pane_t1

0xbbf0,	// (0x0003ec99) area_fmrd2_info_pane_t2

0xbc00,	// (0x0003eca9) area_fmrd2_info_pane_t3

0xbc10,	// (0x0003ecb9) area_fmrd2_info_pane_t4

0x0003,

0xfef2,	// (0x00042f9b) area_fmrd2_info_pane_t

0xbc20,	// (0x0003ecc9) fmrd2_indi_pane_t1

0xbc30,	// (0x0003ecd9) fmrd2_indi_pane_t2

0xbc40,	// (0x0003ece9) fmrd2_indi_pane_t3

0x0002,

0xfefb,	// (0x00042fa4) fmrd2_indi_pane_t

0xb057,	// (0x0003e100) list_single_fs_bigclock_indicator_pane_g5_ParamLimits

0xb057,	// (0x0003e100) list_single_fs_bigclock_indicator_pane_g5

0xb0fd,	// (0x0003e1a6) list_single_fs_bigclock_indicator_pane_t5_ParamLimits

0xb0fd,	// (0x0003e1a6) list_single_fs_bigclock_indicator_pane_t5

0xb598,	// (0x0003e641) aid_cell_bcale_month_pane_ParamLimits

0xb598,	// (0x0003e641) aid_cell_bcale_month_pane

0xb5a4,	// (0x0003e64d) bcale_month_pane_ParamLimits

0xb5a4,	// (0x0003e64d) bcale_month_pane

0xb5b2,	// (0x0003e65b) bcale_preview_pane_ParamLimits

0xb5b2,	// (0x0003e65b) bcale_preview_pane

0x200d,	// (0x000350b6) list_single_fs_bigclock_pane_t1_ParamLimits

0x2029,	// (0x000350d2) list_single_fs_bigclock_pane_t2_ParamLimits

0x2029,	// (0x000350d2) list_single_fs_bigclock_pane_t2

0x0001,

0xfe82,	// (0x00042f2b) list_single_fs_bigclock_pane_t_ParamLimits

0xfe82,	// (0x00042f2b) list_single_fs_bigclock_pane_t

0x22dc,	// (0x00035385) main_fs_bigclock_unlock_btn_pane_g2

0x0001,

0xfee6,	// (0x00042f8f) main_fs_bigclock_unlock_btn_pane_g

0xbc50,	// (0x0003ecf9) aid_dia3_key_size_ParamLimits

0xbc50,	// (0x0003ecf9) aid_dia3_key_size

0xbc5c,	// (0x0003ed05) aid_dia3_listrow_size_ParamLimits

0xbc5c,	// (0x0003ed05) aid_dia3_listrow_size

0xbc6a,	// (0x0003ed13) dia3_keypad_fun_pane_ParamLimits

0xbc6a,	// (0x0003ed13) dia3_keypad_fun_pane

0xbc7a,	// (0x0003ed23) dia3_keypad_num_pane_ParamLimits

0xbc7a,	// (0x0003ed23) dia3_keypad_num_pane

0xbc8a,	// (0x0003ed33) dia3_listscroll_pane_ParamLimits

0xbc8a,	// (0x0003ed33) dia3_listscroll_pane

0xbc9a,	// (0x0003ed43) dia3_numentry_pane_ParamLimits

0xbc9a,	// (0x0003ed43) dia3_numentry_pane

0x22f2,	// (0x0003539b) dia3_list_pane

0x22fd,	// (0x000353a6) scroll_pane_cp12

0x449d,	// (0x00037546) bg_dia3_numentry_pane

0x2308,	// (0x000353b1) dia3_numentry_pane_t1

0xbcaa,	// (0x0003ed53) cell_dia3_key_num_pane

0xbcb2,	// (0x0003ed5b) cell_dia3_key0_fun_pane_ParamLimits

0xbcb2,	// (0x0003ed5b) cell_dia3_key0_fun_pane

0xbcbf,	// (0x0003ed68) cell_dia3_key1_fun_pane_ParamLimits

0xbcbf,	// (0x0003ed68) cell_dia3_key1_fun_pane

0xbccc,	// (0x0003ed75) dia3_listrow_pane

0x1219,	// (0x000342c2) bg_dia3_numentry_pane_g1

0x449d,	// (0x00037546) bg_button_pane_cp21

0x2317,	// (0x000353c0) cell_dia3_key_num_pane_t1

0x2325,	// (0x000353ce) cell_dia3_key_num_pane_t2

0x2334,	// (0x000353dd) cell_dia3_key_num_pane_t3

0x2343,	// (0x000353ec) cell_dia3_key_num_pane_t4

0x0003,

0xff02,	// (0x00042fab) cell_dia3_key_num_pane_t

0x449d,	// (0x00037546) bg_button_pane_cp19

0xbcd9,	// (0x0003ed82) cell_dia3_key0_fun_pane_g1

0x449d,	// (0x00037546) bg_button_pane_cp20

0xbce1,	// (0x0003ed8a) cell_dia3_key1_fun_pane_g1

0xbce9,	// (0x0003ed92) area_left_week_number_pane

0xbcf2,	// (0x0003ed9b) area_top_day_name_pane

0xbcfb,	// (0x0003eda4) frame_month_view_pane

0xbd05,	// (0x0003edae) grid_month_view_pane

0xbd0f,	// (0x0003edb8) cell_top_day_name_pane_ParamLimits

0xbd0f,	// (0x0003edb8) cell_top_day_name_pane

0xbd2b,	// (0x0003edd4) cell_area_left_week_number_pane_ParamLimits

0xbd2b,	// (0x0003edd4) cell_area_left_week_number_pane

0xbd3f,	// (0x0003ede8) cell_month_view_pane_ParamLimits

0xbd3f,	// (0x0003ede8) cell_month_view_pane

0x2352,	// (0x000353fb) frm_month_g1

0xbd5e,	// (0x0003ee07) frm_month_g2

0xbd68,	// (0x0003ee11) frm_month_g3

0xbd72,	// (0x0003ee1b) frm_month_g4

0xbd7c,	// (0x0003ee25) frm_month_g5

0xbd86,	// (0x0003ee2f) frm_month_g6

0xbd90,	// (0x0003ee39) frm_month_g7

0x235b,	// (0x00035404) frm_month_g8

0xbd9a,	// (0x0003ee43) frm_month_g9

0xbda3,	// (0x0003ee4c) frm_month_g10

0xbdac,	// (0x0003ee55) frm_month_g11

0xbdb5,	// (0x0003ee5e) frm_month_g12

0xbdbe,	// (0x0003ee67) frm_month_g13

0xbdc9,	// (0x0003ee72) frm_month_g14

0xbdd4,	// (0x0003ee7d) frm_month_g15

0xbddf,	// (0x0003ee88) frm_month_g16

0x000f,

0xff0b,	// (0x00042fb4) frm_month_g

0xbdea,	// (0x0003ee93) cell_top_day_name_pane_t1

0xbdf9,	// (0x0003eea2) cell_area_left_week_number_pane_g1

0xbdea,	// (0x0003ee93) cell_area_left_week_number_pane_t1

0xe896,	// (0x0004193f) cell_month_view_pane_g1

0xbe01,	// (0x0003eeaa) cell_month_view_pane_t1

0x449d,	// (0x00037546) main_fps_pane

0x1729,	// (0x000347d2) cmail_ddmenu_btn02_pane_cp1_ParamLimits

0x1729,	// (0x000347d2) cmail_ddmenu_btn02_pane_cp1

0x1745,	// (0x000347ee) cmail_ddmenu_btn02_pane_cp2_ParamLimits

0x1745,	// (0x000347ee) cmail_ddmenu_btn02_pane_cp2

0xb78b,	// (0x0003e834) cmail_ddmenu_btn02_pane_g2_ParamLimits

0xb78b,	// (0x0003e834) cmail_ddmenu_btn02_pane_g2

0x0001,

0xfe33,	// (0x00042edc) cmail_ddmenu_btn02_pane_g_ParamLimits

0xfe33,	// (0x00042edc) cmail_ddmenu_btn02_pane_g

0xb7a9,	// (0x0003e852) cmail_ddmenu_btn02_pane_t2_ParamLimits

0xb7a9,	// (0x0003e852) cmail_ddmenu_btn02_pane_t2

0x0001,

0xfe38,	// (0x00042ee1) cmail_ddmenu_btn02_pane_t_ParamLimits

0xfe38,	// (0x00042ee1) cmail_ddmenu_btn02_pane_t

0xbe10,	// (0x0003eeb9) fps_text_pane_ParamLimits

0xbe10,	// (0x0003eeb9) fps_text_pane

0xbe1d,	// (0x0003eec6) main_fps_pane_g1_ParamLimits

0xbe1d,	// (0x0003eec6) main_fps_pane_g1

0xbe29,	// (0x0003eed2) wait_bar_pane_cp010_ParamLimits

0xbe29,	// (0x0003eed2) wait_bar_pane_cp010

0xbe35,	// (0x0003eede) fps_text_pane_t1_ParamLimits

0xbe35,	// (0x0003eede) fps_text_pane_t1

0x94d1,	// (0x0003c57a) cam4_image_uncrop_pane_g1

0x94da,	// (0x0003c583) cam4_image_uncrop_pane_g2

0x94e3,	// (0x0003c58c) cam4_image_uncrop_pane_g3

0x94ec,	// (0x0003c595) cam4_image_uncrop_pane_g4

0x0003,

0xf90d,	// (0x000429b6) cam4_image_uncrop_pane_g

0xbccc,	// (0x0003ed75) dia3_listrow_pane_ParamLimits

0x449d,	// (0x00037546) main_phob2_pane

0xb413,	// (0x0003e4bc) cell_tport_appsw_pane_cp02_ParamLimits

0xb413,	// (0x0003e4bc) cell_tport_appsw_pane_cp02

0xb422,	// (0x0003e4cb) cell_tport_appsw_pane_cp03_ParamLimits

0xb422,	// (0x0003e4cb) cell_tport_appsw_pane_cp03

0x449d,	// (0x00037546) phob2_contact_card_pane

0x449d,	// (0x00037546) phob2_listscroll_pane

0x2364,	// (0x0003540d) phob2_list_pane

0x236c,	// (0x00035415) scroll_pane_cp034

0xbe4e,	// (0x0003eef7) phob2_cc_data_pane_ParamLimits

0xbe4e,	// (0x0003eef7) phob2_cc_data_pane

0xbe6a,	// (0x0003ef13) phob2_cc_listscroll_pane_ParamLimits

0xbe6a,	// (0x0003ef13) phob2_cc_listscroll_pane

0xbe86,	// (0x0003ef2f) list_double_large_graphic_phob2_pane_ParamLimits

0xbe86,	// (0x0003ef2f) list_double_large_graphic_phob2_pane

0xbea0,	// (0x0003ef49) list_double_large_graphic_phob2_pane_g1_ParamLimits

0xbea0,	// (0x0003ef49) list_double_large_graphic_phob2_pane_g1

0x43c2,	// (0x0003746b) list_double_large_graphic_phob2_pane_g2_ParamLimits

0x43c2,	// (0x0003746b) list_double_large_graphic_phob2_pane_g2

0x0001,

0xff2c,	// (0x00042fd5) list_double_large_graphic_phob2_pane_g_ParamLimits

0xff2c,	// (0x00042fd5) list_double_large_graphic_phob2_pane_g

0x43ce,	// (0x00037477) list_double_large_graphic_phob2_pane_t1_ParamLimits

0x43ce,	// (0x00037477) list_double_large_graphic_phob2_pane_t1

0x43e3,	// (0x0003748c) list_double_large_graphic_phob2_pane_t2_ParamLimits

0x43e3,	// (0x0003748c) list_double_large_graphic_phob2_pane_t2

0x0001,

0xff31,	// (0x00042fda) list_double_large_graphic_phob2_pane_t_ParamLimits

0xff31,	// (0x00042fda) list_double_large_graphic_phob2_pane_t

0x449d,	// (0x00037546) list_highlight_pane_cp024

0x2374,	// (0x0003541d) phob2_cc_button_pane

0xbead,	// (0x0003ef56) phob2_cc_data_pane_g1_ParamLimits

0xbead,	// (0x0003ef56) phob2_cc_data_pane_g1

0xbeb9,	// (0x0003ef62) phob2_cc_data_pane_g2_ParamLimits

0xbeb9,	// (0x0003ef62) phob2_cc_data_pane_g2

0x0001,

0xff36,	// (0x00042fdf) phob2_cc_data_pane_g_ParamLimits

0xff36,	// (0x00042fdf) phob2_cc_data_pane_g

0xbec5,	// (0x0003ef6e) phob2_cc_data_pane_t1_ParamLimits

0xbec5,	// (0x0003ef6e) phob2_cc_data_pane_t1

0xbed7,	// (0x0003ef80) phob2_cc_data_pane_t2_ParamLimits

0xbed7,	// (0x0003ef80) phob2_cc_data_pane_t2

0xbee9,	// (0x0003ef92) phob2_cc_data_pane_t3_ParamLimits

0xbee9,	// (0x0003ef92) phob2_cc_data_pane_t3

0x0002,

0xff3b,	// (0x00042fe4) phob2_cc_data_pane_t_ParamLimits

0xff3b,	// (0x00042fe4) phob2_cc_data_pane_t

0x237c,	// (0x00035425) phob2_cc_list_pane_ParamLimits

0x237c,	// (0x00035425) phob2_cc_list_pane

0x07ae,	// (0x00033857) scroll_pane_cp035_ParamLimits

0x07ae,	// (0x00033857) scroll_pane_cp035

0x75df,	// (0x0003a688) bg_button_pane_cp033

0x2388,	// (0x00035431) phob2_cc_button_pane_g1

0x2394,	// (0x0003543d) phob2_cc_button_pane_t1

0x23a9,	// (0x00035452) phob2_cc_button_pane_t2

0x0001,

0xff42,	// (0x00042feb) phob2_cc_button_pane_t

0xbefb,	// (0x0003efa4) list_double_large_graphic_phob2_cc_pane_ParamLimits

0xbefb,	// (0x0003efa4) list_double_large_graphic_phob2_cc_pane

0xbf1a,	// (0x0003efc3) list_double_large_graphic_phob2_cc_pane_g1_ParamLimits

0xbf1a,	// (0x0003efc3) list_double_large_graphic_phob2_cc_pane_g1

0x43f5,	// (0x0003749e) list_double_large_graphic_phob2_cc_pane_g2_ParamLimits

0x43f5,	// (0x0003749e) list_double_large_graphic_phob2_cc_pane_g2

0x4404,	// (0x000374ad) list_double_large_graphic_phob2_cc_pane_g3_ParamLimits

0x4404,	// (0x000374ad) list_double_large_graphic_phob2_cc_pane_g3

0x4413,	// (0x000374bc) list_double_large_graphic_phob2_cc_pane_g4_ParamLimits

0x4413,	// (0x000374bc) list_double_large_graphic_phob2_cc_pane_g4

0x4424,	// (0x000374cd) list_double_large_graphic_phob2_cc_pane_g5_ParamLimits

0x4424,	// (0x000374cd) list_double_large_graphic_phob2_cc_pane_g5

0x0004,

0xff47,	// (0x00042ff0) list_double_large_graphic_phob2_cc_pane_g_ParamLimits

0xff47,	// (0x00042ff0) list_double_large_graphic_phob2_cc_pane_g

0x4433,	// (0x000374dc) list_double_large_graphic_phob2_cc_pane_t1_ParamLimits

0x4433,	// (0x000374dc) list_double_large_graphic_phob2_cc_pane_t1

0x445c,	// (0x00037505) list_double_large_graphic_phob2_cc_pane_t2_ParamLimits

0x445c,	// (0x00037505) list_double_large_graphic_phob2_cc_pane_t2

0x0001,

0xff52,	// (0x00042ffb) list_double_large_graphic_phob2_cc_pane_t_ParamLimits

0xff52,	// (0x00042ffb) list_double_large_graphic_phob2_cc_pane_t

0x23bb,	// (0x00035464) list_highlight_pane_cp025_ParamLimits

0x23bb,	// (0x00035464) list_highlight_pane_cp025

0x75df,	// (0x0003a688) bg_button_pane_cp033_ParamLimits

0x2388,	// (0x00035431) phob2_cc_button_pane_g1_ParamLimits

0x2394,	// (0x0003543d) phob2_cc_button_pane_t1_ParamLimits

0x23a9,	// (0x00035452) phob2_cc_button_pane_t2_ParamLimits

0xff42,	// (0x00042feb) phob2_cc_button_pane_t_ParamLimits

0x44e3,	// (0x0003758c) popup_wgtman_window

0x053e,	// (0x000335e7) scroll_pane_cp038

0xbaf6,	// (0x0003eb9f) wgtman_btn_pane_cp_01_ParamLimits

0xbaf6,	// (0x0003eb9f) wgtman_btn_pane_cp_01

0x23c9,	// (0x00035472) wgtman_content_pane

0x23d2,	// (0x0003547b) wgtman_heading_pane

0x449d,	// (0x00037546) bg_heading_pane_cp02

0x23db,	// (0x00035484) wgtman_heading_pane_g1

0x23e3,	// (0x0003548c) wgtman_heading_pane_t1

0x23f1,	// (0x0003549a) scroll_pane_cp036

0x23f9,	// (0x000354a2) wgtman_list_pane

0x157f,	// (0x00034628) wgtman_list_pane_t1_ParamLimits

0x157f,	// (0x00034628) wgtman_list_pane_t1

0x942e,	// (0x0003c4d7) cam4_grid_pane

0x3794,	// (0x0003683d) bg_button_pane_cp015_ParamLimits

0xa0b4,	// (0x0003d15d) bg_button_pane_cp016_ParamLimits

0xa0c7,	// (0x0003d170) bg_button_pane_cp017_ParamLimits

0x37d8,	// (0x00036881) popup_vitu2_query_window_g3_ParamLimits

0x37d8,	// (0x00036881) popup_vitu2_query_window_g3

0x3851,	// (0x000368fa) popup_vitu2_query_window_t6_ParamLimits

0x3851,	// (0x000368fa) popup_vitu2_query_window_t6

0x387c,	// (0x00036925) popup_vitu2_query_window_t7_ParamLimits

0x387c,	// (0x00036925) popup_vitu2_query_window_t7

0x0311,	// (0x000333ba) cam4_grid_pane_g1

0x031a,	// (0x000333c3) cam4_grid_pane_g2

0x2401,	// (0x000354aa) cam4_grid_pane_g3

0x240a,	// (0x000354b3) cam4_grid_pane_g4

0x0003,

0xff57,	// (0x00043000) cam4_grid_pane_g

0x55ef,	// (0x00038698) aid_placing_vt_slider_lsc_ParamLimits

0x5922,	// (0x000389cb) vidtel_button_pane_ParamLimits

0x5922,	// (0x000389cb) vidtel_button_pane

0x449d,	// (0x00037546) bg_button_pane_cp034

0xbf2b,	// (0x0003efd4) vidtel_button_pane_g1

0x2415,	// (0x000354be) vidtel_button_pane_t1

0x0689,	// (0x00033732) aid_size_vtel_slider_touch

0x07ae,	// (0x00033857) scroll_pane_cp039

0x1257,	// (0x00034300) ncim_query_button_pane_cp01_ParamLimits

0x1276,	// (0x0003431f) ncimui_query_pane_g1_ParamLimits

0x75df,	// (0x0003a688) input_focus_pane_cp012_ParamLimits

0x129b,	// (0x00034344) ncim_query_entry_pane_t1_ParamLimits

0x07ae,	// (0x00033857) scroll_pane_cp039_ParamLimits
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
