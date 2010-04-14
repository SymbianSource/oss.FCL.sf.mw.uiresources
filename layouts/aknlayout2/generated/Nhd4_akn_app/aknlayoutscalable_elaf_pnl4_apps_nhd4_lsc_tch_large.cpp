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

#include "aknlayoutscalable_elaf_pnl4_apps_nhd4_lsc_tch_large.h"
#include "AknLayout2ScalableDecode.h"
namespace AknLayoutScalable_Apps { extern const TUint8 KByteCodedData_AknLayoutScalable_Elaf_pnp4_apps_nhd4_prt_tch[]; }

namespace AknLayoutScalable_Elaf_pnl4_apps_nhd4_lsc_tch_Large
{

extern const TUint16 KDataLookup[AknLayoutScalable_Apps::E_TApiId_TableSize];
const SCompDataImplData KImplData = { KDataLookup, AknLayoutScalable_Apps::KByteCodedData_AknLayoutScalable_Elaf_pnp4_apps_nhd4_prt_tch + 0x0008b5ac };

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
0x0ebc,	// (0x0008c468) Screen

0x0ec8,	// (0x0008c474) application_window

0x0f14,	// (0x0008c4c0) area_bottom_pane_ParamLimits

0x0f14,	// (0x0008c4c0) area_bottom_pane

0x0f4d,	// (0x0008c4f9) area_top_pane_ParamLimits

0x0f4d,	// (0x0008c4f9) area_top_pane

0x971e,	// (0x00094cca) call_video_uplink_pane_ParamLimits

0x971e,	// (0x00094cca) call_video_uplink_pane

0x0fdb,	// (0x0008c587) main_pane_ParamLimits

0x0fdb,	// (0x0008c587) main_pane

0xc7c4,	// (0x00097d70) context_pane

0x43bd,	// (0x0008f969) navi_pane

0x43ef,	// (0x0008f99b) popup_cale_events_window_ParamLimits

0x43ef,	// (0x0008f99b) popup_cale_events_window

0xc7d7,	// (0x00097d83) popup_mup_playback_window

0x4407,	// (0x0008f9b3) signal_pane

0xa6f5,	// (0x00095ca1) main_browser_pane

0xb391,	// (0x0009693d) main_burst_pane

0x412d,	// (0x0008f6d9) main_calc_pane

0xc7aa,	// (0x00097d56) main_cale_day_pane

0x160d,	// (0x0008cbb9) main_cale_month_pane

0xc7aa,	// (0x00097d56) main_cale_week_pane

0xb391,	// (0x0009693d) main_call_pane

0x9b4f,	// (0x000950fb) main_call_poc_pane

0xb391,	// (0x0009693d) main_camera_pane

0xb391,	// (0x0009693d) main_chi_dic_pane

0xb0c3,	// (0x0009666f) main_clock_pane

0x9b4f,	// (0x000950fb) main_fmradio_pane

0xb391,	// (0x0009693d) main_graph_messa_pane

0x9b4f,	// (0x000950fb) main_help_pane

0xa6f5,	// (0x00095ca1) main_im_pane

0xa611,	// (0x00095bbd) main_image_pane_ParamLimits

0xa611,	// (0x00095bbd) main_image_pane

0x9b4f,	// (0x000950fb) main_location2_pane

0xb391,	// (0x0009693d) main_location_pane

0xa611,	// (0x00095bbd) main_messa_pane

0x9b4f,	// (0x000950fb) main_mp2_pane

0xb391,	// (0x0009693d) main_mp_pane

0x9b4f,	// (0x000950fb) main_msg_pane

0x9b4f,	// (0x000950fb) main_mup_eq_pane

0x9b4f,	// (0x000950fb) main_mup_pane

0xa6f5,	// (0x00095ca1) main_notes_pane

0x9b4f,	// (0x000950fb) main_pec_pane

0x9b4f,	// (0x000950fb) main_phob_pane

0x9b4f,	// (0x000950fb) main_pinb_pane

0x9b4f,	// (0x000950fb) main_postcard_pane

0x9b4f,	// (0x000950fb) main_qdial_pane

0xb391,	// (0x0009693d) main_skin_pane

0x9b4f,	// (0x000950fb) main_smil2_pane

0xb391,	// (0x0009693d) main_smil_pane

0xb391,	// (0x0009693d) main_video_pane

0xb391,	// (0x0009693d) main_video_tele_pane

0xa611,	// (0x00095bbd) main_viewer_pane_ParamLimits

0xa611,	// (0x00095bbd) main_viewer_pane

0xb391,	// (0x0009693d) main_vorec_pane

0x4181,	// (0x0008f72d) popup_blid_sat_info_window_ParamLimits

0x4181,	// (0x0008f72d) popup_blid_sat_info_window

0x41d9,	// (0x0008f785) popup_dyc_status_message_window_ParamLimits

0x41d9,	// (0x0008f785) popup_dyc_status_message_window

0x41f1,	// (0x0008f79d) popup_grid_large_graphic_window_ParamLimits

0x41f1,	// (0x0008f79d) popup_grid_large_graphic_window

0x42a7,	// (0x0008f853) popup_loc_request_window_ParamLimits

0x42a7,	// (0x0008f853) popup_loc_request_window

0x4395,	// (0x0008f941) popup_wml_address_window_ParamLimits

0x4395,	// (0x0008f941) popup_wml_address_window

0x3f67,	// (0x0008f513) call_muted_g1

0x3c1a,	// (0x0008f1c6) popup_call_audio_conf_window_ParamLimits

0x3c1a,	// (0x0008f1c6) popup_call_audio_conf_window

0x3f7b,	// (0x0008f527) popup_call_audio_first_window_ParamLimits

0x3f7b,	// (0x0008f527) popup_call_audio_first_window

0x3ff1,	// (0x0008f59d) popup_call_audio_in_window_ParamLimits

0x3ff1,	// (0x0008f59d) popup_call_audio_in_window

0x402d,	// (0x0008f5d9) popup_call_audio_out_window_ParamLimits

0x402d,	// (0x0008f5d9) popup_call_audio_out_window

0x4067,	// (0x0008f613) popup_call_audio_second_window_ParamLimits

0x4067,	// (0x0008f613) popup_call_audio_second_window

0x40bd,	// (0x0008f669) popup_call_audio_wait_window_ParamLimits

0x40bd,	// (0x0008f669) popup_call_audio_wait_window

0x40f2,	// (0x0008f69e) popup_number_entry_window_ParamLimits

0x40f2,	// (0x0008f69e) popup_number_entry_window

0x973c,	// (0x00094ce8) bg_popup_call_pane_cp05_ParamLimits

0x973c,	// (0x00094ce8) bg_popup_call_pane_cp05

0x975c,	// (0x00094d08) popup_number_entry_window_t1

0x976f,	// (0x00094d1b) popup_number_entry_window_t2

0x9781,	// (0x00094d2d) popup_number_entry_window_t3

0x0003,

0xf0c6,	// (0x0009a672) popup_number_entry_window_t

0x9793,	// (0x00094d3f) text_title_cp2

0x97a6,	// (0x00094d52) bg_popup_call_pane_cp_ParamLimits

0x97a6,	// (0x00094d52) bg_popup_call_pane_cp

0x97b4,	// (0x00094d60) call_thumbnail_pane

0x97bc,	// (0x00094d68) popup_call_audio_in_window_g1_ParamLimits

0x97bc,	// (0x00094d68) popup_call_audio_in_window_g1

0x97c8,	// (0x00094d74) popup_call_audio_in_window_g2_ParamLimits

0x97c8,	// (0x00094d74) popup_call_audio_in_window_g2

0x97d4,	// (0x00094d80) popup_call_audio_in_window_g3_ParamLimits

0x97d4,	// (0x00094d80) popup_call_audio_in_window_g3

0x0002,

0xf0cf,	// (0x0009a67b) popup_call_audio_in_window_g_ParamLimits

0xf0cf,	// (0x0009a67b) popup_call_audio_in_window_g

0x97e0,	// (0x00094d8c) popup_call_audio_in_window_t1_ParamLimits

0x97e0,	// (0x00094d8c) popup_call_audio_in_window_t1

0x97fc,	// (0x00094da8) popup_call_audio_in_window_t2_ParamLimits

0x97fc,	// (0x00094da8) popup_call_audio_in_window_t2

0x9818,	// (0x00094dc4) popup_call_audio_in_window_t3_ParamLimits

0x9818,	// (0x00094dc4) popup_call_audio_in_window_t3

0x0002,

0xf0d6,	// (0x0009a682) popup_call_audio_in_window_t_ParamLimits

0xf0d6,	// (0x0009a682) popup_call_audio_in_window_t

0x97a6,	// (0x00094d52) bg_popup_call_pane_cp01_ParamLimits

0x97a6,	// (0x00094d52) bg_popup_call_pane_cp01

0x97b4,	// (0x00094d60) call_thumbnail_pane_cp02

0x982b,	// (0x00094dd7) call_type_pane_cp022

0x9833,	// (0x00094ddf) popup_call_audio_out_window_g1_ParamLimits

0x9833,	// (0x00094ddf) popup_call_audio_out_window_g1

0x9845,	// (0x00094df1) popup_call_audio_out_window_g2_ParamLimits

0x9845,	// (0x00094df1) popup_call_audio_out_window_g2

0x9851,	// (0x00094dfd) popup_call_audio_out_window_g3_ParamLimits

0x9851,	// (0x00094dfd) popup_call_audio_out_window_g3

0x0002,

0xf0dd,	// (0x0009a689) popup_call_audio_out_window_g_ParamLimits

0xf0dd,	// (0x0009a689) popup_call_audio_out_window_g

0x9863,	// (0x00094e0f) popup_call_audio_out_window_t1_ParamLimits

0x9863,	// (0x00094e0f) popup_call_audio_out_window_t1

0x987b,	// (0x00094e27) popup_call_audio_out_window_t2_ParamLimits

0x987b,	// (0x00094e27) popup_call_audio_out_window_t2

0x0001,

0xf0e4,	// (0x0009a690) popup_call_audio_out_window_t_ParamLimits

0xf0e4,	// (0x0009a690) popup_call_audio_out_window_t

0x9890,	// (0x00094e3c) bg_popup_call_pane_ParamLimits

0x9890,	// (0x00094e3c) bg_popup_call_pane

0x1198,	// (0x0008c744) call_thumbnail_pane_cp_ParamLimits

0x1198,	// (0x0008c744) call_thumbnail_pane_cp

0x9914,	// (0x00094ec0) call_type_pane_cp01_ParamLimits

0x9914,	// (0x00094ec0) call_type_pane_cp01

0x9958,	// (0x00094f04) popup_call_audio_first_window_g1_ParamLimits

0x9958,	// (0x00094f04) popup_call_audio_first_window_g1

0x99a4,	// (0x00094f50) popup_call_audio_first_window_g2_ParamLimits

0x99a4,	// (0x00094f50) popup_call_audio_first_window_g2

0x0001,

0xf0e9,	// (0x0009a695) popup_call_audio_first_window_g_ParamLimits

0xf0e9,	// (0x0009a695) popup_call_audio_first_window_g

0x99e8,	// (0x00094f94) popup_call_audio_first_window_t1_ParamLimits

0x99e8,	// (0x00094f94) popup_call_audio_first_window_t1

0x9a94,	// (0x00095040) popup_call_audio_first_window_t4_ParamLimits

0x9a94,	// (0x00095040) popup_call_audio_first_window_t4

0x9b20,	// (0x000950cc) popup_call_audio_first_window_t5_ParamLimits

0x9b20,	// (0x000950cc) popup_call_audio_first_window_t5

0x0002,

0xf0ee,	// (0x0009a69a) popup_call_audio_first_window_t_ParamLimits

0xf0ee,	// (0x0009a69a) popup_call_audio_first_window_t

0x9b4f,	// (0x000950fb) bg_popup_call_pane_cp02

0x9b59,	// (0x00095105) call_type_pane_cp023

0x9b61,	// (0x0009510d) popup_call_audio_wait_window_g1

0x9b69,	// (0x00095115) popup_call_audio_wait_window_g2

0x0001,

0xf0f5,	// (0x0009a6a1) popup_call_audio_wait_window_g

0x9b71,	// (0x0009511d) popup_call_audio_wait_window_t3

0x9b7f,	// (0x0009512b) bg_popup_call_pane_cp03_ParamLimits

0x9b7f,	// (0x0009512b) bg_popup_call_pane_cp03

0x9bdf,	// (0x0009518b) call_thumbnail_pane_cp011_ParamLimits

0x9bdf,	// (0x0009518b) call_thumbnail_pane_cp011

0x9beb,	// (0x00095197) call_type_pane_cp034_ParamLimits

0x9beb,	// (0x00095197) call_type_pane_cp034

0xa48e,	// (0x00095a3a) popup_call_audio_second_window_g1_ParamLimits

0xa48e,	// (0x00095a3a) popup_call_audio_second_window_g1

0xa4ca,	// (0x00095a76) popup_call_audio_second_window_g2_ParamLimits

0xa4ca,	// (0x00095a76) popup_call_audio_second_window_g2

0x0001,

0xf0fa,	// (0x0009a6a6) popup_call_audio_second_window_g_ParamLimits

0xf0fa,	// (0x0009a6a6) popup_call_audio_second_window_g

0xa506,	// (0x00095ab2) popup_call_audio_second_window_t1_ParamLimits

0xa506,	// (0x00095ab2) popup_call_audio_second_window_t1

0xa587,	// (0x00095b33) popup_call_audio_second_window_t2_ParamLimits

0xa587,	// (0x00095b33) popup_call_audio_second_window_t2

0xa5bd,	// (0x00095b69) popup_call_audio_second_window_t3_ParamLimits

0xa5bd,	// (0x00095b69) popup_call_audio_second_window_t3

0x0002,

0xf0ff,	// (0x0009a6ab) popup_call_audio_second_window_t_ParamLimits

0xf0ff,	// (0x0009a6ab) popup_call_audio_second_window_t

0x9b4f,	// (0x000950fb) bg_popup_call_pane_cp04

0xa5f3,	// (0x00095b9f) list_conf_pane

0xa5fb,	// (0x00095ba7) popup_call_audio_conf_window_t1

0xa609,	// (0x00095bb5) call_thumbnail_pane_g1

0xa611,	// (0x00095bbd) bg_pinb_pane_ParamLimits

0xa611,	// (0x00095bbd) bg_pinb_pane

0xa61f,	// (0x00095bcb) find_pinb_pane

0xa628,	// (0x00095bd4) listscroll_pinb_pane_ParamLimits

0xa628,	// (0x00095bd4) listscroll_pinb_pane

0xa637,	// (0x00095be3) pinb_bg_pane_g1

0x11bc,	// (0x0008c768) pinb_bg_pane_g2

0x11c8,	// (0x0008c774) pinb_bg_pane_g3

0x11d4,	// (0x0008c780) pinb_bg_pane_g4

0x11e0,	// (0x0008c78c) pinb_bg_pane_g5

0x11ec,	// (0x0008c798) pinb_bg_pane_g6

0x11f7,	// (0x0008c7a3) pinb_bg_pane_g7

0x1202,	// (0x0008c7ae) pinb_bg_pane_g8

0x120d,	// (0x0008c7b9) pinb_bg_pane_g9

0x1217,	// (0x0008c7c3) pinb_bg_pane_g10

0x0009,

0xf106,	// (0x0009a6b2) pinb_bg_pane_g

0x1234,	// (0x0008c7e0) grid_pinb_pane

0x123d,	// (0x0008c7e9) list_pinb_pane

0x1246,	// (0x0008c7f2) scroll_pane_cp01_ParamLimits

0x1246,	// (0x0008c7f2) scroll_pane_cp01

0xa641,	// (0x00095bed) find_pinb_pane_g1_ParamLimits

0xa641,	// (0x00095bed) find_pinb_pane_g1

0xa659,	// (0x00095c05) find_pinb_pane_t1

0xa66b,	// (0x00095c17) find_pinb_pane_t2

0x0001,

0xf120,	// (0x0009a6cc) find_pinb_pane_t

0xa680,	// (0x00095c2c) input_focus_pane_cp01_ParamLimits

0xa680,	// (0x00095c2c) input_focus_pane_cp01

0x1258,	// (0x0008c804) cell_pinb_pane_ParamLimits

0x1258,	// (0x0008c804) cell_pinb_pane

0xa68c,	// (0x00095c38) cell_pinb_pane_g1_ParamLimits

0xa68c,	// (0x00095c38) cell_pinb_pane_g1

0xa69f,	// (0x00095c4b) cell_pinb_pane_g2_ParamLimits

0xa69f,	// (0x00095c4b) cell_pinb_pane_g2

0xa6ab,	// (0x00095c57) cell_pinb_pane_g3_ParamLimits

0xa6ab,	// (0x00095c57) cell_pinb_pane_g3

0x0002,

0xf125,	// (0x0009a6d1) cell_pinb_pane_g_ParamLimits

0xf125,	// (0x0009a6d1) cell_pinb_pane_g

0x9b4f,	// (0x000950fb) grid_highlight_pane_cp01

0x1286,	// (0x0008c832) list_pinb_item_pane_ParamLimits

0x1286,	// (0x0008c832) list_pinb_item_pane

0x9b4f,	// (0x000950fb) list_highlight_pane_cp02

0x1299,	// (0x0008c845) list_pinb_item_pane_g1_ParamLimits

0x1299,	// (0x0008c845) list_pinb_item_pane_g1

0x12a6,	// (0x0008c852) list_pinb_item_pane_g2_ParamLimits

0x12a6,	// (0x0008c852) list_pinb_item_pane_g2

0x12b2,	// (0x0008c85e) list_pinb_item_pane_g3_ParamLimits

0x12b2,	// (0x0008c85e) list_pinb_item_pane_g3

0x12c3,	// (0x0008c86f) list_pinb_item_pane_g4_ParamLimits

0x12c3,	// (0x0008c86f) list_pinb_item_pane_g4

0x0003,

0xf12c,	// (0x0009a6d8) list_pinb_item_pane_g_ParamLimits

0xf12c,	// (0x0009a6d8) list_pinb_item_pane_g

0x12cf,	// (0x0008c87b) list_pinb_item_pane_t1_ParamLimits

0x12cf,	// (0x0008c87b) list_pinb_item_pane_t1

0x1304,	// (0x0008c8b0) calc_display_pane

0x132c,	// (0x0008c8d8) calc_paper_pane

0x134f,	// (0x0008c8fb) grid_calc_pane

0x9b4f,	// (0x000950fb) bg_list_pane_cp01

0x137d,	// (0x0008c929) clock_g1

0x1385,	// (0x0008c931) clock_g2

0x0001,

0xf135,	// (0x0009a6e1) clock_g

0x138d,	// (0x0008c939) clock_t1_ParamLimits

0x138d,	// (0x0008c939) clock_t1

0x13a2,	// (0x0008c94e) clock_t2_ParamLimits

0x13a2,	// (0x0008c94e) clock_t2

0x13b4,	// (0x0008c960) clock_t3_ParamLimits

0x13b4,	// (0x0008c960) clock_t3

0x13c6,	// (0x0008c972) clock_t4_ParamLimits

0x13c6,	// (0x0008c972) clock_t4

0x13d8,	// (0x0008c984) clock_t5_ParamLimits

0x13d8,	// (0x0008c984) clock_t5

0x13ed,	// (0x0008c999) clock_t6_ParamLimits

0x13ed,	// (0x0008c999) clock_t6

0x13ff,	// (0x0008c9ab) clock_t7_ParamLimits

0x13ff,	// (0x0008c9ab) clock_t7

0x1411,	// (0x0008c9bd) clock_t8_ParamLimits

0x1411,	// (0x0008c9bd) clock_t8

0x1425,	// (0x0008c9d1) clock_t9_ParamLimits

0x1425,	// (0x0008c9d1) clock_t9

0x0008,

0xf13a,	// (0x0009a6e6) clock_t_ParamLimits

0xf13a,	// (0x0009a6e6) clock_t

0xa6b7,	// (0x00095c63) popup_clock_analogue_window_cp02

0xa6b7,	// (0x00095c63) popup_clock_digital_window_cp01

0xa6bf,	// (0x00095c6b) listscroll_help_pane

0x9b4f,	// (0x000950fb) phob_pre_status_pane

0xa6c9,	// (0x00095c75) grid_qdial_pane

0xa611,	// (0x00095bbd) listscroll_mce_pane

0xa611,	// (0x00095bbd) bg_notes_pane

0xa6d3,	// (0x00095c7f) list_notes_pane

0x1439,	// (0x0008c9e5) scroll_pane_cp06

0xa6e1,	// (0x00095c8d) bg_calc_paper_pane

0x9c2f,	// (0x000951db) list_calc_pane

0xa6f5,	// (0x00095ca1) bg_calc_display_pane

0x144d,	// (0x0008c9f9) calc_display_pane_t1

0x145f,	// (0x0008ca0b) calc_display_pane_t2

0x9c49,	// (0x000951f5) calc_display_pane_t3

0x0002,

0xf14d,	// (0x0009a6f9) calc_display_pane_t

0x1471,	// (0x0008ca1d) cell_calc_pane_ParamLimits

0x1471,	// (0x0008ca1d) cell_calc_pane

0xa701,	// (0x00095cad) bg_calc_paper_pane_g1

0xa70d,	// (0x00095cb9) bg_calc_paper_pane_g2

0xa719,	// (0x00095cc5) bg_calc_paper_pane_g3

0xa725,	// (0x00095cd1) bg_calc_paper_pane_g4

0xa731,	// (0x00095cdd) bg_calc_paper_pane_g5

0x14a8,	// (0x0008ca54) bg_calc_paper_pane_g6

0x14b9,	// (0x0008ca65) bg_calc_paper_pane_g7

0x14ca,	// (0x0008ca76) bg_calc_paper_pane_g8

0x0007,

0xf154,	// (0x0009a700) bg_calc_paper_pane_g

0x14dd,	// (0x0008ca89) calc_bg_paper_pane_g9

0x14f0,	// (0x0008ca9c) list_calc_item_pane_ParamLimits

0x14f0,	// (0x0008ca9c) list_calc_item_pane

0xa73d,	// (0x00095ce9) list_calc_item_pane_g1

0x9c5b,	// (0x00095207) list_calc_item_pane_t1_ParamLimits

0x9c5b,	// (0x00095207) list_calc_item_pane_t1

0x150a,	// (0x0008cab6) list_calc_item_pane_t2_ParamLimits

0x150a,	// (0x0008cab6) list_calc_item_pane_t2

0x0001,

0xf165,	// (0x0009a711) list_calc_item_pane_t_ParamLimits

0xf165,	// (0x0009a711) list_calc_item_pane_t

0xa74a,	// (0x00095cf6) cell_calc_pane_g1

0xa754,	// (0x00095d00) grid_highlight_pane_cp02

0xa776,	// (0x00095d22) bg_calc_display_pane_g1

0x9c6d,	// (0x00095219) bg_calc_display_pane_g2

0xa77f,	// (0x00095d2b) bg_calc_display_pane_g3

0x0002,

0xf16f,	// (0x0009a71b) bg_calc_display_pane_g

0x153c,	// (0x0008cae8) cell_qdial_pane_ParamLimits

0x153c,	// (0x0008cae8) cell_qdial_pane

0x1550,	// (0x0008cafc) cell_qdial_pane_g1_ParamLimits

0x1550,	// (0x0008cafc) cell_qdial_pane_g1

0x1566,	// (0x0008cb12) cell_qdial_pane_g2_ParamLimits

0x1566,	// (0x0008cb12) cell_qdial_pane_g2

0xa788,	// (0x00095d34) cell_qdial_pane_g3_ParamLimits

0xa788,	// (0x00095d34) cell_qdial_pane_g3

0x0003,

0xf176,	// (0x0009a722) cell_qdial_pane_g_ParamLimits

0xf176,	// (0x0009a722) cell_qdial_pane_g

0x158c,	// (0x0008cb38) cell_qdial_pane_t1_ParamLimits

0x158c,	// (0x0008cb38) cell_qdial_pane_t1

0x15a4,	// (0x0008cb50) cell_qdial_pane_t2_ParamLimits

0x15a4,	// (0x0008cb50) cell_qdial_pane_t2

0x15b7,	// (0x0008cb63) cell_qdial_pane_t3_ParamLimits

0x15b7,	// (0x0008cb63) cell_qdial_pane_t3

0x0002,

0xf17f,	// (0x0009a72b) cell_qdial_pane_t_ParamLimits

0xf17f,	// (0x0009a72b) cell_qdial_pane_t

0x9b4f,	// (0x000950fb) grid_highlight_pane_cp04

0xa794,	// (0x00095d40) thumbnail_qdial_pane_ParamLimits

0xa794,	// (0x00095d40) thumbnail_qdial_pane

0xa7f0,	// (0x00095d9c) list_help_pane

0xa7f9,	// (0x00095da5) scroll_pane_cp02

0x15ca,	// (0x0008cb76) help_list_pane_t1_ParamLimits

0x15ca,	// (0x0008cb76) help_list_pane_t1

0x9c77,	// (0x00095223) bg_notes_pane_g2

0x9c7f,	// (0x0009522b) bg_notes_pane_g3

0x9c87,	// (0x00095233) notes_bg_pane_g1

0x9c8f,	// (0x0009523b) notes_bg_pane_g4

0x9c97,	// (0x00095243) notes_bg_pane_g5

0x9c9f,	// (0x0009524b) notes_bg_pane_g6

0x9ca7,	// (0x00095253) notes_bg_pane_g7

0x9caf,	// (0x0009525b) notes_bg_pane_g8

0x9cb7,	// (0x00095263) notes_bg_pane_g9

0x0006,

0xf19d,	// (0x0009a749) notes_bg_pane_g

0x15e9,	// (0x0008cb95) list_notes_text_pane_ParamLimits

0x15e9,	// (0x0008cb95) list_notes_text_pane

0xa802,	// (0x00095dae) list_notes_text_pane_g1

0x15ff,	// (0x0008cbab) list_notes_text_pane_t1

0x160d,	// (0x0008cbb9) listscroll_cale_week_pane

0x1639,	// (0x0008cbe5) bg_cale_heading_pane

0xa825,	// (0x00095dd1) bg_cale_pane_cp01

0x1657,	// (0x0008cc03) cale_week_corner_pane

0x1676,	// (0x0008cc22) cale_week_day_heading_pane

0x1699,	// (0x0008cc45) cale_week_scroll_pane_g1

0x16b2,	// (0x0008cc5e) cale_week_scroll_pane_g2

0x16ca,	// (0x0008cc76) cale_week_scroll_pane_g3

0x16e2,	// (0x0008cc8e) cale_week_scroll_pane_g4

0x16fa,	// (0x0008cca6) cale_week_scroll_pane_g5

0x1716,	// (0x0008ccc2) cale_week_scroll_pane_g6

0x1736,	// (0x0008cce2) cale_week_scroll_pane_g7

0x1756,	// (0x0008cd02) cale_week_scroll_pane_g8

0x177a,	// (0x0008cd26) cale_week_scroll_pane_g9

0x1792,	// (0x0008cd3e) cale_week_scroll_pane_g10

0x17aa,	// (0x0008cd56) cale_week_scroll_pane_g11

0x17c2,	// (0x0008cd6e) cale_week_scroll_pane_g12

0x17da,	// (0x0008cd86) cale_week_scroll_pane_g13

0x17da,	// (0x0008cd86) cale_week_scroll_pane_g14

0x17da,	// (0x0008cd86) cale_week_scroll_pane_g15

0x000f,

0xf1ac,	// (0x0009a758) cale_week_scroll_pane_g

0x1816,	// (0x0008cdc2) cale_week_time_pane

0x183a,	// (0x0008cde6) grid_cale_week_pane

0xa855,	// (0x00095e01) scroll_pane_cp08

0x1860,	// (0x0008ce0c) cell_cale_week_pane_ParamLimits

0x1860,	// (0x0008ce0c) cell_cale_week_pane

0x18ee,	// (0x0008ce9a) cale_week_day_heading_pane_t1

0x1938,	// (0x0008cee4) cale_week_day_heading_pane_t2

0x1987,	// (0x0008cf33) cale_week_day_heading_pane_t3

0x19d6,	// (0x0008cf82) cale_week_day_heading_pane_t4

0x1a25,	// (0x0008cfd1) cale_week_day_heading_pane_t5

0x1a7c,	// (0x0008d028) cale_week_day_heading_pane_t6

0x1ad3,	// (0x0008d07f) cale_week_day_heading_pane_t7

0x0006,

0xf1cd,	// (0x0009a779) cale_week_day_heading_pane_t

0xa872,	// (0x00095e1e) bg_cale_side_pane

0x1b1d,	// (0x0008d0c9) cale_week_time_pane_t1

0x1b37,	// (0x0008d0e3) cale_week_time_pane_t2

0x1b51,	// (0x0008d0fd) cale_week_time_pane_t3

0x1b6b,	// (0x0008d117) cale_week_time_pane_t4

0x1b85,	// (0x0008d131) cale_week_time_pane_t5

0x1b9f,	// (0x0008d14b) cale_week_time_pane_t6

0x1bb9,	// (0x0008d165) cale_week_time_pane_t7

0x1bd9,	// (0x0008d185) cale_week_time_pane_t8

0x0007,

0xf1dc,	// (0x0009a788) cale_week_time_pane_t

0x1bf9,	// (0x0008d1a5) cell_cale_week_pane_g2

0x1c1d,	// (0x0008d1c9) cell_cale_week_pane_g3_ParamLimits

0x1c1d,	// (0x0008d1c9) cell_cale_week_pane_g3

0xa880,	// (0x00095e2c) grid_highlight_pane_cp07

0xa888,	// (0x00095e34) listscroll_gms_pane

0xa892,	// (0x00095e3e) grid_gms_pane

0xa89b,	// (0x00095e47) listscroll_gms_pane_g1

0xa8a3,	// (0x00095e4f) listscroll_gms_pane_g2

0x0001,

0xf1ed,	// (0x0009a799) listscroll_gms_pane_g

0x1c35,	// (0x0008d1e1) scroll_pane_cp010

0x1c40,	// (0x0008d1ec) cell_gms_pane_ParamLimits

0x1c40,	// (0x0008d1ec) cell_gms_pane

0x1c52,	// (0x0008d1fe) cell_gms_pane_g1

0xa8ab,	// (0x00095e57) cell_gms_pane_g2

0xa802,	// (0x00095dae) cell_gms_pane_g3

0xa8b3,	// (0x00095e5f) cell_gms_pane_g4

0x0003,

0xf1f2,	// (0x0009a79e) cell_gms_pane_g

0xa8bc,	// (0x00095e68) grid_highlight_pane_cp09

0x3f11,	// (0x0008f4bd) phob_pre_status_pane_g1

0x3f19,	// (0x0008f4c5) phob_pre_status_pane_g2

0x3f21,	// (0x0008f4cd) phob_pre_status_pane_g3

0x3f29,	// (0x0008f4d5) phob_pre_status_pane_g4

0x0004,

0xf5e1,	// (0x0009ab8d) phob_pre_status_pane_g

0x3f39,	// (0x0008f4e5) phob_pre_status_pane_t1

0x3f47,	// (0x0008f4f3) phob_pre_status_pane_t2

0x3f57,	// (0x0008f503) phob_pre_status_pane_t3

0x0002,

0xf5ec,	// (0x0009ab98) phob_pre_status_pane_t

0x9b4f,	// (0x000950fb) bg_list_pane_cp05

0x1c62,	// (0x0008d20e) grid_vorec_pane

0x1c6c,	// (0x0008d218) vorec_t1

0x1c7a,	// (0x0008d226) vorec_t2

0x1c88,	// (0x0008d234) vorec_t3

0x1c96,	// (0x0008d242) vorec_t4

0x9cbf,	// (0x0009526b) vorec_t5

0x1ca4,	// (0x0008d250) vorec_t6

0x0006,

0xf1fb,	// (0x0009a7a7) vorec_t

0x1cc0,	// (0x0008d26c) wait_bar_pane_cp01

0x1cc8,	// (0x0008d274) cell_vorec_pane_ParamLimits

0x1cc8,	// (0x0008d274) cell_vorec_pane

0x9ccd,	// (0x00095279) cell_vorec_pane_g1

0x9b4f,	// (0x000950fb) grid_highlight_pane_cp05

0x1cf3,	// (0x0008d29f) cams_zoom_pane

0x1d02,	// (0x0008d2ae) image_vga_pane

0x1d1c,	// (0x0008d2c8) main_camera_pane_g1

0x1d2e,	// (0x0008d2da) main_camera_pane_g2

0x1d3e,	// (0x0008d2ea) main_camera_pane_g3

0x1d50,	// (0x0008d2fc) main_camera_pane_g4

0x1d62,	// (0x0008d30e) main_camera_pane_g5

0x1d74,	// (0x0008d320) main_camera_pane_g6

0x1d86,	// (0x0008d332) main_camera_pane_g7

0x0007,

0xf20a,	// (0x0009a7b6) main_camera_pane_g

0x1d98,	// (0x0008d344) main_camera_pane_t1

0x1dae,	// (0x0008d35a) main_camera_pane_t2

0x0001,

0xf21b,	// (0x0009a7c7) main_camera_pane_t

0x1dea,	// (0x0008d396) cams_zoom_pane_cp_ParamLimits

0x1dea,	// (0x0008d396) cams_zoom_pane_cp

0x1e12,	// (0x0008d3be) image_cif_pane_ParamLimits

0x1e12,	// (0x0008d3be) image_cif_pane

0x1e4d,	// (0x0008d3f9) image_subqcif_pane

0x1e55,	// (0x0008d401) main_video_pane_g1_ParamLimits

0x1e55,	// (0x0008d401) main_video_pane_g1

0x1e79,	// (0x0008d425) main_video_pane_g2_ParamLimits

0x1e79,	// (0x0008d425) main_video_pane_g2

0x1ead,	// (0x0008d459) main_video_pane_g3_ParamLimits

0x1ead,	// (0x0008d459) main_video_pane_g3

0x1edb,	// (0x0008d487) main_video_pane_g4_ParamLimits

0x1edb,	// (0x0008d487) main_video_pane_g4

0x1f09,	// (0x0008d4b5) main_video_pane_g5_ParamLimits

0x1f09,	// (0x0008d4b5) main_video_pane_g5

0xa8d0,	// (0x00095e7c) main_video_pane_g6_ParamLimits

0xa8d0,	// (0x00095e7c) main_video_pane_g6

0x0006,

0xf220,	// (0x0009a7cc) main_video_pane_g_ParamLimits

0xf220,	// (0x0009a7cc) main_video_pane_g

0x1f32,	// (0x0008d4de) main_video_pane_t1_ParamLimits

0x1f32,	// (0x0008d4de) main_video_pane_t1

0xa8ea,	// (0x00095e96) cams_zoom_pane_g1

0xa8f3,	// (0x00095e9f) cams_zoom_pane_g2

0xa8fc,	// (0x00095ea8) cams_zoom_pane_g3

0xa905,	// (0x00095eb1) cams_zoom_pane_g4

0x0003,

0xf22f,	// (0x0009a7db) cams_zoom_pane_g

0x1f8f,	// (0x0008d53b) grid_cams_pane

0x1fa9,	// (0x0008d555) linegrid_cams_pane

0x1fbc,	// (0x0008d568) cell_cams_pane_ParamLimits

0x1fbc,	// (0x0008d568) cell_cams_pane

0xa90e,	// (0x00095eba) cams_burst_image_pane

0xa916,	// (0x00095ec2) cell_cams_pane_g1

0x9b4f,	// (0x000950fb) grid_highlight_pane_cp03

0xa74a,	// (0x00095cf6) mp_bg_pane_g1

0x9b4f,	// (0x000950fb) bg_list_pane_cp03

0xc6cf,	// (0x00097c7b) bg_mp_pane

0xc6d7,	// (0x00097c83) grid_mp_pane

0xc6df,	// (0x00097c8b) media_player_g1

0xc6e7,	// (0x00097c93) media_player_t1

0xc6f5,	// (0x00097ca1) media_player_t2

0xc703,	// (0x00097caf) media_player_t3

0xc711,	// (0x00097cbd) media_player_t4

0xc71f,	// (0x00097ccb) media_player_t5

0xc72d,	// (0x00097cd9) media_player_t6

0xc73b,	// (0x00097ce7) media_player_t7

0x0006,

0xf5cb,	// (0x0009ab77) media_player_t

0xc749,	// (0x00097cf5) wait_bar_pane_cp02

0xf5b0,	// (0x0009ab5c) main_usb_pane_t

0x3f08,	// (0x0008f4b4) cell_mp_pane

0xa74a,	// (0x00095cf6) cell_mp_pane_g1

0x9b4f,	// (0x000950fb) grid_highlight_pane_cp06

0xa91e,	// (0x00095eca) grid_skin_colour_pane

0xa926,	// (0x00095ed2) list_highlight_pane_cp03

0x1fdc,	// (0x0008d588) skin_g1

0xa92e,	// (0x00095eda) skin_t1

0xa93d,	// (0x00095ee9) skin_t2

0x0001,

0xf264,	// (0x0009a810) skin_t

0x1fe4,	// (0x0008d590) cell_skin_colour_pane_ParamLimits

0x1fe4,	// (0x0008d590) cell_skin_colour_pane

0xa94b,	// (0x00095ef7) cell_skin_colour_pane_g1

0x205d,	// (0x0008d609) call_video_g1_ParamLimits

0x205d,	// (0x0008d609) call_video_g1

0x2079,	// (0x0008d625) call_video_g2_ParamLimits

0x2079,	// (0x0008d625) call_video_g2

0x0001,

0xf269,	// (0x0009a815) call_video_g_ParamLimits

0xf269,	// (0x0009a815) call_video_g

0x20cb,	// (0x0008d677) call_video_uplink_pane_cp1_ParamLimits

0x20cb,	// (0x0008d677) call_video_uplink_pane_cp1

0xa95d,	// (0x00095f09) call_video_uplink_pane_cp2

0x216a,	// (0x0008d716) video_down_crop_pane_ParamLimits

0x216a,	// (0x0008d716) video_down_crop_pane

0x2253,	// (0x0008d7ff) video_down_pane_ParamLimits

0x2253,	// (0x0008d7ff) video_down_pane

0xa965,	// (0x00095f11) video_down_subqcif_pane_ParamLimits

0xa965,	// (0x00095f11) video_down_subqcif_pane

0xa97d,	// (0x00095f29) video_down_subqcif_pane_cp_ParamLimits

0xa97d,	// (0x00095f29) video_down_subqcif_pane_cp

0xa9a3,	// (0x00095f4f) im_reading_pane_ParamLimits

0xa9a3,	// (0x00095f4f) im_reading_pane

0x2361,	// (0x0008d90d) im_writing_pane_ParamLimits

0x2361,	// (0x0008d90d) im_writing_pane

0x2377,	// (0x0008d923) im_reading_pane_t1

0xa9bd,	// (0x00095f69) list_im_pane

0xa9ce,	// (0x00095f7a) scroll_pane_cp07

0x23b4,	// (0x0008d960) im_writing_pane_t1_ParamLimits

0x23b4,	// (0x0008d960) im_writing_pane_t1

0xa9e7,	// (0x00095f93) im_writing_pane_t2_ParamLimits

0xa9e7,	// (0x00095f93) im_writing_pane_t2

0x0001,

0xf273,	// (0x0009a81f) im_writing_pane_t_ParamLimits

0xf273,	// (0x0009a81f) im_writing_pane_t

0x9b4f,	// (0x000950fb) input_focus_pane_cp04

0x9b4f,	// (0x000950fb) input_focus_pane_cp05

0x23c9,	// (0x0008d975) list_im_single_pane_ParamLimits

0x23c9,	// (0x0008d975) list_im_single_pane

0x23df,	// (0x0008d98b) list_single_im_pane_t1

0x3ec8,	// (0x0008f474) blid_accuracy_pane

0x3ed0,	// (0x0008f47c) blid_compass_pane

0x3eda,	// (0x0008f486) main_location_t1

0x3eea,	// (0x0008f496) main_location_t2

0x3efa,	// (0x0008f4a6) main_location_t3

0x0002,

0xf5da,	// (0x0009ab86) main_location_t

0x9b4f,	// (0x000950fb) aid_levels_location

0xa74a,	// (0x00095cf6) blid_accuracy_pane_g1

0xa74a,	// (0x00095cf6) blid_accuracy_pane_g2

0x0001,

0xf2d5,	// (0x0009a881) blid_accuracy_pane_g

0xaa2f,	// (0x00095fdb) wml_content_pane

0xaa6d,	// (0x00096019) wml_button_pane_ParamLimits

0xaa6d,	// (0x00096019) wml_button_pane

0x23ee,	// (0x0008d99a) wml_list_single_large_pane_ParamLimits

0x23ee,	// (0x0008d99a) wml_list_single_large_pane

0x2404,	// (0x0008d9b0) wml_list_single_medium_pane_ParamLimits

0x2404,	// (0x0008d9b0) wml_list_single_medium_pane

0x241e,	// (0x0008d9ca) wml_list_single_small_pane_ParamLimits

0x241e,	// (0x0008d9ca) wml_list_single_small_pane

0xaa81,	// (0x0009602d) wml_selection_box_pane_ParamLimits

0xaa81,	// (0x0009602d) wml_selection_box_pane

0xaa94,	// (0x00096040) wml_list_single_pane_t1

0xaaa3,	// (0x0009604f) wml_list_single_medium_pane_t1

0xaab2,	// (0x0009605e) wml_list_single_large_pane_t1

0xaac1,	// (0x0009606d) input_focus_pane_cp02_ParamLimits

0xaac1,	// (0x0009606d) input_focus_pane_cp02

0xaad4,	// (0x00096080) wml_selection_box_pane_g1

0xaadd,	// (0x00096089) wml_selection_box_pane_t1_ParamLimits

0xaadd,	// (0x00096089) wml_selection_box_pane_t1

0xa611,	// (0x00095bbd) bg_wml_button_pane_ParamLimits

0xa611,	// (0x00095bbd) bg_wml_button_pane

0xaaf5,	// (0x000960a1) wml_button_pane_g1

0xaafd,	// (0x000960a9) wml_button_pane_t1

0xaaf5,	// (0x000960a1) wml_button_bg_pane_g1

0xab0d,	// (0x000960b9) wml_button_bg_pane_g2

0xab15,	// (0x000960c1) wml_button_bg_pane_g3

0xab1d,	// (0x000960c9) wml_button_bg_pane_g4

0xab25,	// (0x000960d1) wml_button_bg_pane_g5

0xab2d,	// (0x000960d9) wml_button_bg_pane_g6

0xab35,	// (0x000960e1) wml_button_bg_pane_g7

0xab3d,	// (0x000960e9) wml_button_bg_pane_g8

0xab45,	// (0x000960f1) wml_button_bg_pane_g9

0x0008,

0xf278,	// (0x0009a824) wml_button_bg_pane_g

0x2438,	// (0x0008d9e4) bg_list_pane_cp02

0xab4d,	// (0x000960f9) mce_header_pane_ParamLimits

0xab4d,	// (0x000960f9) mce_header_pane

0xab63,	// (0x0009610f) mce_icon_pane

0xab63,	// (0x0009610f) mce_image_pane

0xab6c,	// (0x00096118) mce_text_pane_ParamLimits

0xab6c,	// (0x00096118) mce_text_pane

0x2440,	// (0x0008d9ec) scroll_pane_cp03

0xaa65,	// (0x00096011) scroll_pane_cp04

0xab7f,	// (0x0009612b) scroll_pane_cp05_ParamLimits

0xab7f,	// (0x0009612b) scroll_pane_cp05

0x244a,	// (0x0008d9f6) mce_header_field_pane_ParamLimits

0x244a,	// (0x0008d9f6) mce_header_field_pane

0x2461,	// (0x0008da0d) mce_header_field_pane_2_ParamLimits

0x2461,	// (0x0008da0d) mce_header_field_pane_2

0x2477,	// (0x0008da23) mce_header_field_pane_3

0x247f,	// (0x0008da2b) list_single_mce_message_pane_ParamLimits

0x247f,	// (0x0008da2b) list_single_mce_message_pane

0x2496,	// (0x0008da42) list_single_mce_smart_pane_ParamLimits

0x2496,	// (0x0008da42) list_single_mce_smart_pane

0xab8b,	// (0x00096137) input_focus_pane_cp03

0xab94,	// (0x00096140) list_header_data_pane

0x24b8,	// (0x0008da64) mce_header_field_pane_t1

0x24c8,	// (0x0008da74) list_single_mce_header_pane_ParamLimits

0x24c8,	// (0x0008da74) list_single_mce_header_pane

0xab9c,	// (0x00096148) list_single_mce_header_pane_t1

0xabab,	// (0x00096157) list_single_mce_message_pane_g1

0xabb3,	// (0x0009615f) list_single_mce_message_pane_t1

0x2502,	// (0x0008daae) bg_cale_heading_pane_cp01_ParamLimits

0x2502,	// (0x0008daae) bg_cale_heading_pane_cp01

0xabc1,	// (0x0009616d) bg_cale_pane_cp02_ParamLimits

0xabc1,	// (0x0009616d) bg_cale_pane_cp02

0x253d,	// (0x0008dae9) cale_month_corner_pane

0x255c,	// (0x0008db08) cale_month_day_heading_pane_ParamLimits

0x255c,	// (0x0008db08) cale_month_day_heading_pane

0x25af,	// (0x0008db5b) cale_month_pane_g1_ParamLimits

0x25af,	// (0x0008db5b) cale_month_pane_g1

0x25df,	// (0x0008db8b) cale_month_pane_g2_ParamLimits

0x25df,	// (0x0008db8b) cale_month_pane_g2

0x260f,	// (0x0008dbbb) cale_month_pane_g3_ParamLimits

0x260f,	// (0x0008dbbb) cale_month_pane_g3

0x264b,	// (0x0008dbf7) cale_month_pane_g4_ParamLimits

0x264b,	// (0x0008dbf7) cale_month_pane_g4

0x2687,	// (0x0008dc33) cale_month_pane_g5_ParamLimits

0x2687,	// (0x0008dc33) cale_month_pane_g5

0x26cf,	// (0x0008dc7b) cale_month_pane_g6_ParamLimits

0x26cf,	// (0x0008dc7b) cale_month_pane_g6

0x271b,	// (0x0008dcc7) cale_month_pane_g7_ParamLimits

0x271b,	// (0x0008dcc7) cale_month_pane_g7

0x276f,	// (0x0008dd1b) cale_month_pane_g8_ParamLimits

0x276f,	// (0x0008dd1b) cale_month_pane_g8

0x27c3,	// (0x0008dd6f) cale_month_pane_g9_ParamLimits

0x27c3,	// (0x0008dd6f) cale_month_pane_g9

0x2815,	// (0x0008ddc1) cale_month_pane_g10_ParamLimits

0x2815,	// (0x0008ddc1) cale_month_pane_g10

0x2867,	// (0x0008de13) cale_month_pane_g11_ParamLimits

0x2867,	// (0x0008de13) cale_month_pane_g11

0x28b9,	// (0x0008de65) cale_month_pane_g12_ParamLimits

0x28b9,	// (0x0008de65) cale_month_pane_g12

0x290b,	// (0x0008deb7) cale_month_pane_g13_ParamLimits

0x290b,	// (0x0008deb7) cale_month_pane_g13

0x000c,

0xf28b,	// (0x0009a837) cale_month_pane_g_ParamLimits

0xf28b,	// (0x0009a837) cale_month_pane_g

0x295d,	// (0x0008df09) cale_month_week_pane

0x2981,	// (0x0008df2d) grid_cale_month_pane_ParamLimits

0x2981,	// (0x0008df2d) grid_cale_month_pane

0x29bf,	// (0x0008df6b) cale_month_day_heading_pane_t1

0x2a45,	// (0x0008dff1) cale_month_day_heading_pane_t2

0x2ad6,	// (0x0008e082) cale_month_day_heading_pane_t3

0x2b67,	// (0x0008e113) cale_month_day_heading_pane_t4

0x2c00,	// (0x0008e1ac) cale_month_day_heading_pane_t5

0x2ca1,	// (0x0008e24d) cale_month_day_heading_pane_t6

0x2d42,	// (0x0008e2ee) cale_month_day_heading_pane_t7

0x0006,

0xf2a6,	// (0x0009a852) cale_month_day_heading_pane_t

0xa872,	// (0x00095e1e) bg_cale_side_pane_cp01

0x2deb,	// (0x0008e397) cale_month_week_pane_t1

0x2e04,	// (0x0008e3b0) cale_month_week_pane_t2

0x2e1d,	// (0x0008e3c9) cale_month_week_pane_t3

0x2e36,	// (0x0008e3e2) cale_month_week_pane_t4

0x2e4f,	// (0x0008e3fb) cale_month_week_pane_t5

0x2e68,	// (0x0008e414) cale_month_week_pane_t6

0x0005,

0xf2b5,	// (0x0009a861) cale_month_week_pane_t

0x2e81,	// (0x0008e42d) cell_cale_month_pane_ParamLimits

0x2e81,	// (0x0008e42d) cell_cale_month_pane

0x9cd7,	// (0x00095283) cell_cale_month_pane_g1

0x2faf,	// (0x0008e55b) cell_cale_month_pane_t1_ParamLimits

0x2faf,	// (0x0008e55b) cell_cale_month_pane_t1

0xa880,	// (0x00095e2c) grid_highlight_pane_cp08

0xa74a,	// (0x00095cf6) main_smil_g1

0x2fcf,	// (0x0008e57b) smil_status_pane

0xac00,	// (0x000961ac) smil_text_pane

0xc5ef,	// (0x00097b9b) bg_popup_call3_rect_pane_g8

0xc5f7,	// (0x00097ba3) bg_popup_call3_rect_pane_g9

0x0008,

0xf56e,	// (0x0009ab1a) bg_popup_call3_rect_pane_g

0xc83e,	// (0x00097dea) smil_status_volume_pane_g1

0xac0a,	// (0x000961b6) smil_status_pane_t1

0x9e2d,	// (0x000953d9) volume_smil_pane

0xac21,	// (0x000961cd) list_smil_text_pane

0x2fe4,	// (0x0008e590) scroll_pane_cp011

0x2fef,	// (0x0008e59b) smil_text_list_pane_t1_ParamLimits

0x2fef,	// (0x0008e59b) smil_text_list_pane_t1

0x9ce3,	// (0x0009528f) aid_volume_smil_ParamLimits

0x9ce3,	// (0x0009528f) aid_volume_smil

0xa74a,	// (0x00095cf6) smil_volume_pane_g1

0xa74a,	// (0x00095cf6) smil_volume_pane_g2

0x0001,

0xf2d5,	// (0x0009a881) smil_volume_pane_g

0x160d,	// (0x0008cbb9) listscroll_cale_day_pane

0xac2b,	// (0x000961d7) bg_cale_pane

0xac43,	// (0x000961ef) list_cale_pane

0xac66,	// (0x00096212) scroll_pane_cp09

0xac77,	// (0x00096223) cale_bg_pane_g1

0xac7f,	// (0x0009622b) cale_bg_pane_g2

0xac87,	// (0x00096233) cale_bg_pane_g3

0xac8f,	// (0x0009623b) cale_bg_pane_g4

0xac97,	// (0x00096243) cale_bg_pane_g5

0xac9f,	// (0x0009624b) cale_bg_pane_g6

0xaca7,	// (0x00096253) cale_bg_pane_g7

0xacaf,	// (0x0009625b) cale_bg_pane_g8

0xacb7,	// (0x00096263) cale_bg_pane_g9

0x0008,

0xf2da,	// (0x0009a886) cale_bg_pane_g

0x3031,	// (0x0008e5dd) list_cale_time_pane_ParamLimits

0x3031,	// (0x0008e5dd) list_cale_time_pane

0xacc7,	// (0x00096273) list_cale_time_pane_g1_ParamLimits

0xacc7,	// (0x00096273) list_cale_time_pane_g1

0xacd3,	// (0x0009627f) list_cale_time_pane_g2_ParamLimits

0xacd3,	// (0x0009627f) list_cale_time_pane_g2

0x3048,	// (0x0008e5f4) list_cale_time_pane_g3_ParamLimits

0x3048,	// (0x0008e5f4) list_cale_time_pane_g3

0x3056,	// (0x0008e602) list_cale_time_pane_g4_ParamLimits

0x3056,	// (0x0008e602) list_cale_time_pane_g4

0x3064,	// (0x0008e610) list_cale_time_pane_g5_ParamLimits

0x3064,	// (0x0008e610) list_cale_time_pane_g5

0x0005,

0xf2ed,	// (0x0009a899) list_cale_time_pane_g_ParamLimits

0xf2ed,	// (0x0009a899) list_cale_time_pane_g

0xaced,	// (0x00096299) list_cale_time_pane_t1_ParamLimits

0xaced,	// (0x00096299) list_cale_time_pane_t1

0xad15,	// (0x000962c1) list_cale_time_pane_t2_ParamLimits

0xad15,	// (0x000962c1) list_cale_time_pane_t2

0x32d7,	// (0x0008e883) aid_blid_cardinal_pane

0x3315,	// (0x0008e8c1) compass_pane_t4

0xad3d,	// (0x000962e9) list_cale_time_pane_t4_ParamLimits

0xad3d,	// (0x000962e9) list_cale_time_pane_t4

0x3323,	// (0x0008e8cf) compass_pane_t5

0x3331,	// (0x0008e8dd) compass_pane_t6

0x333f,	// (0x0008e8eb) compass_pane_t7

0xb253,	// (0x000967ff) navi_pane_cc_t1

0xb438,	// (0x000969e4) aid_phob_thumbnail_center_pane

0x38d8,	// (0x0008ee84) main_postcard_pane_g4_ParamLimits

0x0002,

0xf2fa,	// (0x0009a8a6) list_cale_time_pane_t_ParamLimits

0xf2fa,	// (0x0009a8a6) list_cale_time_pane_t

0x97a6,	// (0x00094d52) bg_popup_window_pane_cp02_ParamLimits

0x97a6,	// (0x00094d52) bg_popup_window_pane_cp02

0xad65,	// (0x00096311) heading_pane_cp01_ParamLimits

0xad65,	// (0x00096311) heading_pane_cp01

0xad71,	// (0x0009631d) loc_req_pane_ParamLimits

0xad71,	// (0x0009631d) loc_req_pane

0xad81,	// (0x0009632d) loc_type_pane_ParamLimits

0xad81,	// (0x0009632d) loc_type_pane

0xad93,	// (0x0009633f) loc_type_pane_t1_ParamLimits

0xad93,	// (0x0009633f) loc_type_pane_t1

0xada5,	// (0x00096351) loc_type_pane_t2_ParamLimits

0xada5,	// (0x00096351) loc_type_pane_t2

0xadb7,	// (0x00096363) loc_type_pane_t3_ParamLimits

0xadb7,	// (0x00096363) loc_type_pane_t3

0x0002,

0xf301,	// (0x0009a8ad) loc_type_pane_t_ParamLimits

0xf301,	// (0x0009a8ad) loc_type_pane_t

0xadc9,	// (0x00096375) list_loc_req_pane

0xadd3,	// (0x0009637f) scroll_pane_cp012

0x3072,	// (0x0008e61e) list_single_loc_request_popup_menu_pane_ParamLimits

0x3072,	// (0x0008e61e) list_single_loc_request_popup_menu_pane

0xadde,	// (0x0009638a) list_single_loc_request_popup_menu_pane_g1_ParamLimits

0xadde,	// (0x0009638a) list_single_loc_request_popup_menu_pane_g1

0xadea,	// (0x00096396) list_single_loc_request_popup_menu_pane_g2_ParamLimits

0xadea,	// (0x00096396) list_single_loc_request_popup_menu_pane_g2

0x0001,

0xf308,	// (0x0009a8b4) list_single_loc_request_popup_menu_pane_g_ParamLimits

0xf308,	// (0x0009a8b4) list_single_loc_request_popup_menu_pane_g

0xadf6,	// (0x000963a2) list_single_loc_request_popup_menu_pane_t1_ParamLimits

0xadf6,	// (0x000963a2) list_single_loc_request_popup_menu_pane_t1

0xa611,	// (0x00095bbd) bg_popup_window_pane_cp03_ParamLimits

0xa611,	// (0x00095bbd) bg_popup_window_pane_cp03

0xae0c,	// (0x000963b8) heading_loc_req_pane_ParamLimits

0xae0c,	// (0x000963b8) heading_loc_req_pane

0x307f,	// (0x0008e62b) popup_dyc_status_message_window_g1_ParamLimits

0x307f,	// (0x0008e62b) popup_dyc_status_message_window_g1

0x3093,	// (0x0008e63f) popup_dyc_status_message_window_t1_ParamLimits

0x3093,	// (0x0008e63f) popup_dyc_status_message_window_t1

0x30a8,	// (0x0008e654) popup_dyc_status_message_window_t2_ParamLimits

0x30a8,	// (0x0008e654) popup_dyc_status_message_window_t2

0x30bd,	// (0x0008e669) popup_dyc_status_message_window_t3_ParamLimits

0x30bd,	// (0x0008e669) popup_dyc_status_message_window_t3

0x0002,

0xf30d,	// (0x0009a8b9) popup_dyc_status_message_window_t_ParamLimits

0xf30d,	// (0x0009a8b9) popup_dyc_status_message_window_t

0x9b4f,	// (0x000950fb) bg_heading_pane_cp01

0xae18,	// (0x000963c4) heading_loc_req_pane_g1

0xae20,	// (0x000963cc) heading_loc_req_pane_g2

0xae28,	// (0x000963d4) heading_loc_req_pane_g3

0x0002,

0xf314,	// (0x0009a8c0) heading_loc_req_pane_g

0xae30,	// (0x000963dc) heading_loc_req_pane_t1

0xae3f,	// (0x000963eb) bg_popup_sub_pane_cp01_ParamLimits

0xae3f,	// (0x000963eb) bg_popup_sub_pane_cp01

0xae4d,	// (0x000963f9) popup_cale_events_window_g1_ParamLimits

0xae4d,	// (0x000963f9) popup_cale_events_window_g1

0xae6d,	// (0x00096419) popup_cale_events_window_g2_ParamLimits

0xae6d,	// (0x00096419) popup_cale_events_window_g2

0x0001,

0xf348,	// (0x0009a8f4) popup_cale_events_window_g_ParamLimits

0xf348,	// (0x0009a8f4) popup_cale_events_window_g

0xae8d,	// (0x00096439) popup_cale_events_window_t1_ParamLimits

0xae8d,	// (0x00096439) popup_cale_events_window_t1

0xae9f,	// (0x0009644b) popup_cale_events_window_t2_ParamLimits

0xae9f,	// (0x0009644b) popup_cale_events_window_t2

0xaedd,	// (0x00096489) popup_cale_events_window_t3_ParamLimits

0xaedd,	// (0x00096489) popup_cale_events_window_t3

0xaf17,	// (0x000964c3) popup_cale_events_window_t4_ParamLimits

0xaf17,	// (0x000964c3) popup_cale_events_window_t4

0x0003,

0xf34d,	// (0x0009a8f9) popup_cale_events_window_t_ParamLimits

0xf34d,	// (0x0009a8f9) popup_cale_events_window_t

0x30e5,	// (0x0008e691) call_type_pane

0x30f5,	// (0x0008e6a1) popup_call_status_window_g1

0x3109,	// (0x0008e6b5) popup_call_status_window_g2

0x311d,	// (0x0008e6c9) popup_call_status_window_g3

0x0002,

0xf356,	// (0x0009a902) popup_call_status_window_g

0xaf4d,	// (0x000964f9) call_type_pane_g1

0xaf56,	// (0x00096502) call_type_pane_g2

0x0001,

0xf35d,	// (0x0009a909) call_type_pane_g

0x9b4f,	// (0x000950fb) bg_popup_sub_pane_cp02

0xaf5f,	// (0x0009650b) listscroll_popup_wml_pane

0xaf67,	// (0x00096513) list_wml_pane

0xaf71,	// (0x0009651d) scroll_pane_cp013

0xaf7c,	// (0x00096528) list_single_graphic_popup_wml_pane_ParamLimits

0xaf7c,	// (0x00096528) list_single_graphic_popup_wml_pane

0xa74a,	// (0x00095cf6) list_single_graphic_popup_wml_pane_g1

0xaf90,	// (0x0009653c) list_single_graphic_popup_wml_pane_g2

0x0001,

0xf362,	// (0x0009a90e) list_single_graphic_popup_wml_pane_g

0xaf98,	// (0x00096544) list_single_graphic_popup_wml_pane_t1

0xafae,	// (0x0009655a) aid_call_pane

0xa609,	// (0x00095bb5) popup_clock_analogue_window_g1

0xa609,	// (0x00095bb5) popup_clock_analogue_window_g2

0x9d05,	// (0x000952b1) popup_clock_analogue_window_g3

0x9d05,	// (0x000952b1) popup_clock_analogue_window_g4

0xa74a,	// (0x00095cf6) popup_clock_analogue_window_g5

0x0004,

0xf367,	// (0x0009a913) popup_clock_analogue_window_g

0x9d0d,	// (0x000952b9) popup_clock_analogue_window_t1

0x9d1b,	// (0x000952c7) clock_digital_number_pane_ParamLimits

0x9d1b,	// (0x000952c7) clock_digital_number_pane

0x9d27,	// (0x000952d3) clock_digital_number_pane_cp02_ParamLimits

0x9d27,	// (0x000952d3) clock_digital_number_pane_cp02

0x9d33,	// (0x000952df) clock_digital_number_pane_cp03_ParamLimits

0x9d33,	// (0x000952df) clock_digital_number_pane_cp03

0x9d3f,	// (0x000952eb) clock_digital_number_pane_cp04_ParamLimits

0x9d3f,	// (0x000952eb) clock_digital_number_pane_cp04

0x9d4f,	// (0x000952fb) clock_digital_separator_pane_ParamLimits

0x9d4f,	// (0x000952fb) clock_digital_separator_pane

0x9d5b,	// (0x00095307) popup_clock_digital_window_t1

0xa74a,	// (0x00095cf6) clock_digital_number_pane_g1

0xa74a,	// (0x00095cf6) clock_digital_number_pane_g2

0x0001,

0xf2d5,	// (0x0009a881) clock_digital_number_pane_g

0xa74a,	// (0x00095cf6) clock_digital_separator_pane_g1

0xa74a,	// (0x00095cf6) clock_digital_separator_pane_g2

0x0001,

0xf2d5,	// (0x0009a881) clock_digital_separator_pane_g

0x9b4f,	// (0x000950fb) bg_popup_window_pane_cp04

0xafb6,	// (0x00096562) heading_pane_cp03

0xafbe,	// (0x0009656a) listscroll_popup_gms_pane

0xafc6,	// (0x00096572) grid_large_graphic_popup_pane

0xafd0,	// (0x0009657c) listscroll_popup_gms_pane_g1

0xafd8,	// (0x00096584) listscroll_popup_gms_pane_g2

0x0001,

0xf372,	// (0x0009a91e) listscroll_popup_gms_pane_g

0xaa65,	// (0x00096011) scroll_pane_cp014

0xafe0,	// (0x0009658c) cell_large_graphic_popup_pane_ParamLimits

0xafe0,	// (0x0009658c) cell_large_graphic_popup_pane

0xaff8,	// (0x000965a4) cell_large_graphic_popup_pane_g1_ParamLimits

0xaff8,	// (0x000965a4) cell_large_graphic_popup_pane_g1

0xb004,	// (0x000965b0) cell_large_graphic_popup_pane_g2_ParamLimits

0xb004,	// (0x000965b0) cell_large_graphic_popup_pane_g2

0xb010,	// (0x000965bc) cell_large_graphic_popup_pane_g3_ParamLimits

0xb010,	// (0x000965bc) cell_large_graphic_popup_pane_g3

0xb01d,	// (0x000965c9) cell_large_graphic_popup_pane_g4_ParamLimits

0xb01d,	// (0x000965c9) cell_large_graphic_popup_pane_g4

0x0003,

0xf377,	// (0x0009a923) cell_large_graphic_popup_pane_g_ParamLimits

0xf377,	// (0x0009a923) cell_large_graphic_popup_pane_g

0xb02d,	// (0x000965d9) grid_highlight_pane_cp010

0xa74a,	// (0x00095cf6) bg_popup_call_pane_g1

0xb037,	// (0x000965e3) list_single_graphic_popup_conf_pane_ParamLimits

0xb037,	// (0x000965e3) list_single_graphic_popup_conf_pane

0xb04a,	// (0x000965f6) list_highlight_pane_cp01

0xb053,	// (0x000965ff) list_single_graphic_popup_conf_pane_g1

0xb05b,	// (0x00096607) list_single_graphic_popup_conf_pane_g2

0x0001,

0xf380,	// (0x0009a92c) list_single_graphic_popup_conf_pane_g

0xb063,	// (0x0009660f) list_single_graphic_popup_conf_pane_t1

0xb071,	// (0x0009661d) linegrid_cams_pane_g1

0x312c,	// (0x0008e6d8) linegrid_cams_pane_g2

0xa802,	// (0x00095dae) linegrid_cams_pane_g3

0xb07a,	// (0x00096626) linegrid_cams_pane_g4

0x3135,	// (0x0008e6e1) linegrid_cams_pane_g5

0x313e,	// (0x0008e6ea) linegrid_cams_pane_g6

0xa8b3,	// (0x00095e5f) linegrid_cams_pane_g7

0x0006,

0xf385,	// (0x0009a931) linegrid_cams_pane_g

0xb083,	// (0x0009662f) popup_clock_analogue_window

0xb083,	// (0x0009662f) popup_clock_digital_window

0x9b4f,	// (0x000950fb) popup_phob_thumbnail_window

0xa74a,	// (0x00095cf6) call_video_uplink_pane_g1

0xb08c,	// (0x00096638) call_video_uplink_pane_g2

0x0001,

0xf394,	// (0x0009a940) call_video_uplink_pane_g

0xa880,	// (0x00095e2c) video_uplink_pane

0xb094,	// (0x00096640) mce_image_pane_g1

0x3149,	// (0x0008e6f5) mce_image_pane_g2

0x3151,	// (0x0008e6fd) mce_image_pane_g3

0x3159,	// (0x0008e705) mce_image_pane_g4

0x3163,	// (0x0008e70f) mce_image_pane_g5

0x0004,

0xf399,	// (0x0009a945) mce_image_pane_g

0xb09e,	// (0x0009664a) control_top_pane_stacon_cp01_ParamLimits

0xb09e,	// (0x0009664a) control_top_pane_stacon_cp01

0xb0b2,	// (0x0009665e) uni_indicator_pane_stacon_cp01_ParamLimits

0xb0b2,	// (0x0009665e) uni_indicator_pane_stacon_cp01

0xb0c3,	// (0x0009666f) bg_popup_sub_pane_cp03

0x316b,	// (0x0008e717) chi_dic_find_pane

0x3173,	// (0x0008e71f) listscroll_chi_dic_pane

0x317c,	// (0x0008e728) main_pane_chidic_g1

0xb0cd,	// (0x00096679) chi_dic_find_pane_t1

0xb0db,	// (0x00096687) find_chidic_pane

0xb0e4,	// (0x00096690) chi_dic_list_pane_ParamLimits

0xb0e4,	// (0x00096690) chi_dic_list_pane

0xb0f5,	// (0x000966a1) scroll_pane_cp020

0xb0fd,	// (0x000966a9) find_chidic_pane_t1

0x9b4f,	// (0x000950fb) input_focus_pane_cp06

0x318f,	// (0x0008e73b) list_chi_dic_pane_ParamLimits

0x318f,	// (0x0008e73b) list_chi_dic_pane

0x31a2,	// (0x0008e74e) list_chi_dic_pane_t1_ParamLimits

0x31a2,	// (0x0008e74e) list_chi_dic_pane_t1

0x9b4f,	// (0x000950fb) list_highlight_pane_cp020

0xb10c,	// (0x000966b8) bg_cale_heading_pane_g1

0x31b5,	// (0x0008e761) bg_cale_heading_pane_g2

0x31bd,	// (0x0008e769) bg_cale_heading_pane_g3

0x31c5,	// (0x0008e771) bg_cale_heading_pane_g4

0x31cf,	// (0x0008e77b) bg_cale_heading_pane_g5

0x31d9,	// (0x0008e785) bg_cale_heading_pane_g6

0x31e1,	// (0x0008e78d) bg_cale_heading_pane_g7

0x31e9,	// (0x0008e795) bg_cale_heading_pane_g8

0x31f3,	// (0x0008e79f) bg_cale_heading_pane_g9

0x0008,

0xf3a4,	// (0x0009a950) bg_cale_heading_pane_g

0xb10c,	// (0x000966b8) bg_cale_side_pane_g1

0x31fd,	// (0x0008e7a9) bg_cale_side_pane_g2

0x3205,	// (0x0008e7b1) bg_cale_side_pane_g3

0x320d,	// (0x0008e7b9) bg_cale_side_pane_g4

0x3215,	// (0x0008e7c1) bg_cale_side_pane_g5

0x321d,	// (0x0008e7c9) bg_cale_side_pane_g6

0x3225,	// (0x0008e7d1) bg_cale_side_pane_g7

0x322d,	// (0x0008e7d9) bg_cale_side_pane_g8

0x3235,	// (0x0008e7e1) bg_cale_side_pane_g9

0x0008,

0xf3b7,	// (0x0009a963) bg_cale_side_pane_g

0x323d,	// (0x0008e7e9) popup_call_status_window_ParamLimits

0x323d,	// (0x0008e7e9) popup_call_status_window

0xb114,	// (0x000966c0) stacon_top_pane

0xb11c,	// (0x000966c8) status_pane_ParamLimits

0xb11c,	// (0x000966c8) status_pane

0xb131,	// (0x000966dd) status_small_pane

0xb139,	// (0x000966e5) control_pane

0x9b4f,	// (0x000950fb) stacon_bottom_pane

0xb141,	// (0x000966ed) list_single_mce_smart_pane_t1_ParamLimits

0xb141,	// (0x000966ed) list_single_mce_smart_pane_t1

0xb154,	// (0x00096700) list_single_mce_smart_pane_t2_ParamLimits

0xb154,	// (0x00096700) list_single_mce_smart_pane_t2

0x0001,

0xf3ca,	// (0x0009a976) list_single_mce_smart_pane_t_ParamLimits

0xf3ca,	// (0x0009a976) list_single_mce_smart_pane_t

0x3284,	// (0x0008e830) compass_pane

0x328d,	// (0x0008e839) main_location2_pane_t1

0x329f,	// (0x0008e84b) main_location2_pane_t2

0x32b1,	// (0x0008e85d) main_location2_pane_t3

0x0003,

0xf3cf,	// (0x0009a97b) main_location2_pane_t

0xb173,	// (0x0009671f) compass_pane_g1_ParamLimits

0xb173,	// (0x0009671f) compass_pane_g1

0x32f7,	// (0x0008e8a3) compass_pane_t1

0x3306,	// (0x0008e8b2) compass_pane_t2

0x0005,

0xf3d8,	// (0x0009a984) compass_pane_t

0x334d,	// (0x0008e8f9) text_secondary_cp61

0xb24a,	// (0x000967f6) navi_pane_cams_g5

0xb2c6,	// (0x00096872) navi_pane_im_t1

0xb2d4,	// (0x00096880) navi_pane_mp_g1_ParamLimits

0xb2d4,	// (0x00096880) navi_pane_mp_g1

0xb2e8,	// (0x00096894) navi_pane_mp_g2_ParamLimits

0xb2e8,	// (0x00096894) navi_pane_mp_g2

0xb2f4,	// (0x000968a0) navi_pane_mp_g3_ParamLimits

0xb2f4,	// (0x000968a0) navi_pane_mp_g3

0x0002,

0xf3ec,	// (0x0009a998) navi_pane_mp_g_ParamLimits

0xf3ec,	// (0x0009a998) navi_pane_mp_g

0xb300,	// (0x000968ac) navi_pane_mp_t1

0xb30e,	// (0x000968ba) navi_pane_mp_t2

0x0002,

0xf3f3,	// (0x0009a99f) navi_pane_mp_t

0xb379,	// (0x00096925) navi_pane_vt_g1

0xb300,	// (0x000968ac) navi_pane_vt_t1

0xb381,	// (0x0009692d) navi_slider_pane

0xb391,	// (0x0009693d) zooming_pane

0xb399,	// (0x00096945) navi_slider_pane_g1

0x9d78,	// (0x00095324) navi_slider_pane_g2

0x0006,

0xf3fa,	// (0x0009a9a6) navi_slider_pane_g

0xb3bd,	// (0x00096969) aid_levels_zoom

0xb3c5,	// (0x00096971) zooming_pane_g1

0xb3cd,	// (0x00096979) zooming_pane_g2

0xb3cd,	// (0x00096979) zooming_pane_g3

0x0002,

0xf409,	// (0x0009a9b5) zooming_pane_g

0xb3d5,	// (0x00096981) level_10_zoom

0xb3de,	// (0x0009698a) level_11_zoom

0xb3e7,	// (0x00096993) level_1_zoom

0xb3f0,	// (0x0009699c) level_2_zoom

0xb3f9,	// (0x000969a5) level_3_zoom

0xb402,	// (0x000969ae) level_4_zoom

0xb40b,	// (0x000969b7) level_5_zoom

0xb414,	// (0x000969c0) level_6_zoom

0xb41d,	// (0x000969c9) level_7_zoom

0xb426,	// (0x000969d2) level_8_zoom

0xb42f,	// (0x000969db) level_9_zoom

0xb440,	// (0x000969ec) popup_phob_thumbnail_window_g1

0xb448,	// (0x000969f4) popup_phob_thumbnail_window_g2

0x0001,

0xf410,	// (0x0009a9bc) popup_phob_thumbnail_window_g

0xc751,	// (0x00097cfd) level_1_location

0xc759,	// (0x00097d05) level_2_location

0xc761,	// (0x00097d0d) level_3_location

0xc769,	// (0x00097d15) level_4_location

0xb391,	// (0x0009693d) level_5_location

0x339e,	// (0x0008e94a) mce_icon_pane_g1

0x33a8,	// (0x0008e954) mce_icon_pane_g2

0x0001,

0xf415,	// (0x0009a9c1) mce_icon_pane_g

0x33b2,	// (0x0008e95e) main_mup_pane_g1_ParamLimits

0x33b2,	// (0x0008e95e) main_mup_pane_g1

0x33c8,	// (0x0008e974) main_mup_pane_g2_ParamLimits

0x33c8,	// (0x0008e974) main_mup_pane_g2

0x33e0,	// (0x0008e98c) main_mup_pane_g3_ParamLimits

0x33e0,	// (0x0008e98c) main_mup_pane_g3

0x33f8,	// (0x0008e9a4) main_mup_pane_g4_ParamLimits

0x33f8,	// (0x0008e9a4) main_mup_pane_g4

0x3410,	// (0x0008e9bc) main_mup_pane_g5_ParamLimits

0x3410,	// (0x0008e9bc) main_mup_pane_g5

0x342c,	// (0x0008e9d8) main_mup_pane_g6_ParamLimits

0x342c,	// (0x0008e9d8) main_mup_pane_g6

0x3444,	// (0x0008e9f0) main_mup_pane_g7_ParamLimits

0x3444,	// (0x0008e9f0) main_mup_pane_g7

0x345c,	// (0x0008ea08) main_mup_pane_g8_ParamLimits

0x345c,	// (0x0008ea08) main_mup_pane_g8

0x3474,	// (0x0008ea20) main_mup_pane_g9_ParamLimits

0x3474,	// (0x0008ea20) main_mup_pane_g9

0x348e,	// (0x0008ea3a) main_mup_pane_g10_ParamLimits

0x348e,	// (0x0008ea3a) main_mup_pane_g10

0x34a8,	// (0x0008ea54) main_mup_pane_g11_ParamLimits

0x34a8,	// (0x0008ea54) main_mup_pane_g11

0x34bc,	// (0x0008ea68) main_mup_pane_g12_ParamLimits

0x34bc,	// (0x0008ea68) main_mup_pane_g12

0x34d2,	// (0x0008ea7e) main_mup_pane_g13_ParamLimits

0x34d2,	// (0x0008ea7e) main_mup_pane_g13

0x000c,

0xf41a,	// (0x0009a9c6) main_mup_pane_g_ParamLimits

0xf41a,	// (0x0009a9c6) main_mup_pane_g

0x34e6,	// (0x0008ea92) main_mup_pane_t1_ParamLimits

0x34e6,	// (0x0008ea92) main_mup_pane_t1

0x3500,	// (0x0008eaac) main_mup_pane_t2_ParamLimits

0x3500,	// (0x0008eaac) main_mup_pane_t2

0x3518,	// (0x0008eac4) main_mup_pane_t3_ParamLimits

0x3518,	// (0x0008eac4) main_mup_pane_t3

0x3530,	// (0x0008eadc) main_mup_pane_t4_ParamLimits

0x3530,	// (0x0008eadc) main_mup_pane_t4

0x354e,	// (0x0008eafa) main_mup_pane_t5_ParamLimits

0x354e,	// (0x0008eafa) main_mup_pane_t5

0x3563,	// (0x0008eb0f) main_mup_pane_t6_ParamLimits

0x3563,	// (0x0008eb0f) main_mup_pane_t6

0x0005,

0xf435,	// (0x0009a9e1) main_mup_pane_t_ParamLimits

0xf435,	// (0x0009a9e1) main_mup_pane_t

0x3575,	// (0x0008eb21) mup_progress_pane_ParamLimits

0x3575,	// (0x0008eb21) mup_progress_pane

0x3581,	// (0x0008eb2d) mup_visualizer_pane_ParamLimits

0x3581,	// (0x0008eb2d) mup_visualizer_pane

0x35b5,	// (0x0008eb61) mup_volume_pane_ParamLimits

0x35b5,	// (0x0008eb61) mup_volume_pane

0xb450,	// (0x000969fc) mup_visualizer_pane_g1_ParamLimits

0xb450,	// (0x000969fc) mup_visualizer_pane_g1

0xb450,	// (0x000969fc) mup_visualizer_pane_g2_ParamLimits

0xb450,	// (0x000969fc) mup_visualizer_pane_g2

0xb173,	// (0x0009671f) mup_visualizer_pane_g3_ParamLimits

0xb173,	// (0x0009671f) mup_visualizer_pane_g3

0x0002,

0xf442,	// (0x0009a9ee) mup_visualizer_pane_g_ParamLimits

0xf442,	// (0x0009a9ee) mup_visualizer_pane_g

0xa74a,	// (0x00095cf6) mup_volume_pane_g1

0xb466,	// (0x00096a12) mup_volume_pane_g2

0x0001,

0xf449,	// (0x0009a9f5) mup_volume_pane_g

0xa74a,	// (0x00095cf6) mup_progress_pane_g1

0xb46f,	// (0x00096a1b) mup_progress_pane_g2

0xb478,	// (0x00096a24) mup_progress_pane_g3

0x0002,

0xf44e,	// (0x0009a9fa) mup_progress_pane_g

0x9b4f,	// (0x000950fb) bg_popup_window_pane_cp05

0xb481,	// (0x00096a2d) heading_pane_cp02_ParamLimits

0xb481,	// (0x00096a2d) heading_pane_cp02

0xb49b,	// (0x00096a47) list_popup_blid_pane

0xb4a3,	// (0x00096a4f) list_blid_sat_info_pane_ParamLimits

0xb4a3,	// (0x00096a4f) list_blid_sat_info_pane

0xb4b6,	// (0x00096a62) list_blid_sat_info_pane_g1

0xb4be,	// (0x00096a6a) list_blid_sat_info_pane_t1

0x36cb,	// (0x0008ec77) mup_equalizer_pane_ParamLimits

0x36cb,	// (0x0008ec77) mup_equalizer_pane

0x36e4,	// (0x0008ec90) mup_equalizer_pane_cp1_ParamLimits

0x36e4,	// (0x0008ec90) mup_equalizer_pane_cp1

0x3701,	// (0x0008ecad) mup_equalizer_pane_cp2_ParamLimits

0x3701,	// (0x0008ecad) mup_equalizer_pane_cp2

0x371e,	// (0x0008ecca) mup_equalizer_pane_cp3_ParamLimits

0x371e,	// (0x0008ecca) mup_equalizer_pane_cp3

0x373f,	// (0x0008eceb) mup_equalizer_pane_cp4_ParamLimits

0x373f,	// (0x0008eceb) mup_equalizer_pane_cp4

0x3760,	// (0x0008ed0c) mup_equalizer_pane_cp5

0x3774,	// (0x0008ed20) mup_equalizer_pane_cp6

0x3788,	// (0x0008ed34) mup_equalizer_pane_cp7

0xc66f,	// (0x00097c1b) bg_popup_call_poc_act_pane_g9

0xc677,	// (0x00097c23) bg_popup_call_poc_act_pane_g10

0xc67f,	// (0x00097c2b) bg_popup_call_poc_act_pane_g11

0x000a,

0xa611,	// (0x00095bbd) mup_scale_pane

0xa74a,	// (0x00095cf6) mup_scale_pane_g1

0xb4cc,	// (0x00096a78) mup_scale_pane_g2

0x0006,

0xf46a,	// (0x0009aa16) mup_scale_pane_g

0xb4f0,	// (0x00096a9c) msg_data_pane

0xb4f8,	// (0x00096aa4) scroll_pane_cp017

0x0276,	// (0x0008b822) bg_list_pane_cp04_ParamLimits

0x0276,	// (0x0008b822) bg_list_pane_cp04

0xb500,	// (0x00096aac) msg_data_pane_g1

0x37ae,	// (0x0008ed5a) msg_data_pane_g2

0x37b6,	// (0x0008ed62) msg_data_pane_g3

0x37be,	// (0x0008ed6a) msg_data_pane_g4

0x37c6,	// (0x0008ed72) msg_data_pane_g5

0x37ce,	// (0x0008ed7a) msg_data_pane_g6

0x37d6,	// (0x0008ed82) msg_data_pane_g7

0x0006,

0xf479,	// (0x0009aa25) msg_data_pane_g

0x029a,	// (0x0008b846) msg_text_pane_ParamLimits

0x029a,	// (0x0008b846) msg_text_pane

0x37de,	// (0x0008ed8a) qrid_highlight_pane_cp011_ParamLimits

0x37de,	// (0x0008ed8a) qrid_highlight_pane_cp011

0x9b4f,	// (0x000950fb) msg_body_pane

0x9b4f,	// (0x000950fb) msg_header_pane

0xb511,	// (0x00096abd) input_focus_pane_cp07

0x02ce,	// (0x0008b87a) msg_header_pane_t1_ParamLimits

0x02ce,	// (0x0008b87a) msg_header_pane_t1

0x02e0,	// (0x0008b88c) msg_header_pane_t2_ParamLimits

0x02e0,	// (0x0008b88c) msg_header_pane_t2

0x0001,

0xf48d,	// (0x0009aa39) msg_header_pane_t_ParamLimits

0xf48d,	// (0x0009aa39) msg_header_pane_t

0xb526,	// (0x00096ad2) msg_body_pane_g1

0x02f2,	// (0x0008b89e) msg_body_pane_t1_ParamLimits

0x02f2,	// (0x0008b89e) msg_body_pane_t1

0x0323,	// (0x0008b8cf) msg_body_pane_t2_ParamLimits

0x0323,	// (0x0008b8cf) msg_body_pane_t2

0x0335,	// (0x0008b8e1) msg_body_pane_t3_ParamLimits

0x0335,	// (0x0008b8e1) msg_body_pane_t3

0x0002,

0xf492,	// (0x0009aa3e) msg_body_pane_t_ParamLimits

0xf492,	// (0x0009aa3e) msg_body_pane_t

0x382e,	// (0x0008edda) main_viewer_pane_g1_ParamLimits

0x382e,	// (0x0008edda) main_viewer_pane_g1

0x383c,	// (0x0008ede8) main_viewer_pane_g2_ParamLimits

0x383c,	// (0x0008ede8) main_viewer_pane_g2

0x384a,	// (0x0008edf6) main_viewer_pane_g3_ParamLimits

0x384a,	// (0x0008edf6) main_viewer_pane_g3

0x3859,	// (0x0008ee05) main_viewer_pane_g4_ParamLimits

0x3859,	// (0x0008ee05) main_viewer_pane_g4

0x9da2,	// (0x0009534e) main_viewer_pane_g5_ParamLimits

0x9da2,	// (0x0009534e) main_viewer_pane_g5

0x9da2,	// (0x0009534e) main_viewer_pane_g7_ParamLimits

0x9da2,	// (0x0009534e) main_viewer_pane_g7

0x9db4,	// (0x00095360) main_viewer_pane_g8_ParamLimits

0x9db4,	// (0x00095360) main_viewer_pane_g8

0x0007,

0xf4a2,	// (0x0009aa4e) main_viewer_pane_g_ParamLimits

0xf4a2,	// (0x0009aa4e) main_viewer_pane_g

0xb52e,	// (0x00096ada) viewer_content_pane_ParamLimits

0xb52e,	// (0x00096ada) viewer_content_pane

0x3895,	// (0x0008ee41) main_postcard_pane_g1_ParamLimits

0x3895,	// (0x0008ee41) main_postcard_pane_g1

0x38ab,	// (0x0008ee57) main_postcard_pane_g2_ParamLimits

0x38ab,	// (0x0008ee57) main_postcard_pane_g2

0x38c1,	// (0x0008ee6d) main_postcard_pane_g3_ParamLimits

0x38c1,	// (0x0008ee6d) main_postcard_pane_g3

0x0005,

0xf4b3,	// (0x0009aa5f) main_postcard_pane_g_ParamLimits

0xf4b3,	// (0x0009aa5f) main_postcard_pane_g

0x38d8,	// (0x0008ee84) main_postcard_pane_g4

0xc851,	// (0x00097dfd) smil_status_volume_pane_g2

0x391b,	// (0x0008eec7) postcard_pane_ParamLimits

0x391b,	// (0x0008eec7) postcard_pane

0xb53c,	// (0x00096ae8) postcard_pane_g1_ParamLimits

0xb53c,	// (0x00096ae8) postcard_pane_g1

0x395d,	// (0x0008ef09) postcard_pane_g2_ParamLimits

0x395d,	// (0x0008ef09) postcard_pane_g2

0x3969,	// (0x0008ef15) postcard_pane_g3_ParamLimits

0x3969,	// (0x0008ef15) postcard_pane_g3

0xb54a,	// (0x00096af6) postcard_pane_g4_ParamLimits

0xb54a,	// (0x00096af6) postcard_pane_g4

0x3975,	// (0x0008ef21) postcard_pane_g5_ParamLimits

0x3975,	// (0x0008ef21) postcard_pane_g5

0x398a,	// (0x0008ef36) postcard_pane_g6_ParamLimits

0x398a,	// (0x0008ef36) postcard_pane_g6

0xb53c,	// (0x00096ae8) postcard_pane_g7_ParamLimits

0xb53c,	// (0x00096ae8) postcard_pane_g7

0x0006,

0xf4c0,	// (0x0009aa6c) postcard_pane_g_ParamLimits

0xf4c0,	// (0x0009aa6c) postcard_pane_g

0x399e,	// (0x0008ef4a) main_mp2_pane_g1_ParamLimits

0x399e,	// (0x0008ef4a) main_mp2_pane_g1

0x39aa,	// (0x0008ef56) main_mp2_pane_g2_ParamLimits

0x39aa,	// (0x0008ef56) main_mp2_pane_g2

0x39b6,	// (0x0008ef62) main_mp2_pane_g3_ParamLimits

0x39b6,	// (0x0008ef62) main_mp2_pane_g3

0x0002,

0xf4cf,	// (0x0009aa7b) main_mp2_pane_g_ParamLimits

0xf4cf,	// (0x0009aa7b) main_mp2_pane_g

0x39c2,	// (0x0008ef6e) main_mp2_pane_t1_ParamLimits

0x39c2,	// (0x0008ef6e) main_mp2_pane_t1

0x39d7,	// (0x0008ef83) main_mp2_pane_t2_ParamLimits

0x39d7,	// (0x0008ef83) main_mp2_pane_t2

0x39e9,	// (0x0008ef95) main_mp2_pane_t3_ParamLimits

0x39e9,	// (0x0008ef95) main_mp2_pane_t3

0x0002,

0xf4d6,	// (0x0009aa82) main_mp2_pane_t_ParamLimits

0xf4d6,	// (0x0009aa82) main_mp2_pane_t

0xb558,	// (0x00096b04) pec_content_pane_ParamLimits

0xb558,	// (0x00096b04) pec_content_pane

0xaa65,	// (0x00096011) scroll_pane_cp015

0xb56a,	// (0x00096b16) pec_attribute_pane_ParamLimits

0xb56a,	// (0x00096b16) pec_attribute_pane

0x39fb,	// (0x0008efa7) pec_content_pane_g1_ParamLimits

0x39fb,	// (0x0008efa7) pec_content_pane_g1

0xb57a,	// (0x00096b26) pec_content_pane_t1_ParamLimits

0xb57a,	// (0x00096b26) pec_content_pane_t1

0xb58c,	// (0x00096b38) pec_content_pane_t2_ParamLimits

0xb58c,	// (0x00096b38) pec_content_pane_t2

0x0001,

0xf4dd,	// (0x0009aa89) pec_content_pane_t_ParamLimits

0xf4dd,	// (0x0009aa89) pec_content_pane_t

0x3a07,	// (0x0008efb3) list_single_graphic_pane_cp01_ParamLimits

0x3a07,	// (0x0008efb3) list_single_graphic_pane_cp01

0xa611,	// (0x00095bbd) bg_popup_sub_pane_cp04

0xb59e,	// (0x00096b4a) popup_mup_playback_window_g1

0xb5aa,	// (0x00096b56) popup_mup_playback_window_t1

0xb5bf,	// (0x00096b6b) popup_mup_playback_window_t2

0x0001,

0xf4e2,	// (0x0009aa8e) popup_mup_playback_window_t

0xb5f6,	// (0x00096ba2) main_image_pane_g1_ParamLimits

0xb5f6,	// (0x00096ba2) main_image_pane_g1

0xb639,	// (0x00096be5) scroll_pane_cp018_ParamLimits

0xb639,	// (0x00096be5) scroll_pane_cp018

0xb651,	// (0x00096bfd) scroll_pane_cp016_ParamLimits

0xb651,	// (0x00096bfd) scroll_pane_cp016

0x3ad6,	// (0x0008f082) smil2_image_pane_ParamLimits

0x3ad6,	// (0x0008f082) smil2_image_pane

0x3b0a,	// (0x0008f0b6) smil2_root_pane_ParamLimits

0x3b0a,	// (0x0008f0b6) smil2_root_pane

0x3b42,	// (0x0008f0ee) smil2_text_pane_ParamLimits

0x3b42,	// (0x0008f0ee) smil2_text_pane

0x9b4f,	// (0x000950fb) bg_list_pane_cp06

0xb68d,	// (0x00096c39) grid_radio_pane

0x9b4f,	// (0x000950fb) bg_popup_window_pane_cp06

0xb695,	// (0x00096c41) main_fmradio_pane_t1

0xafb6,	// (0x00096562) heading_pane_cp04

0xb6a3,	// (0x00096c4f) main_fmradio_pane_t2

0xc687,	// (0x00097c33) popup_cale_lunar_info_window_g1

0xb6b1,	// (0x00096c5d) main_fmradio_pane_t3

0xc68f,	// (0x00097c3b) popup_cale_lunar_info_window_g2

0xb6bf,	// (0x00096c6b) main_fmradio_pane_t4

0x0001,

0xb6cd,	// (0x00096c79) main_fmradio_pane_t5

0x0004,

0xf5bd,	// (0x0009ab69) popup_cale_lunar_info_window_g

0xf4f7,	// (0x0009aaa3) main_fmradio_pane_t

0xb6db,	// (0x00096c87) wait_bar_pane_cp03

0xb6e3,	// (0x00096c8f) cell_fmradio_pane_ParamLimits

0xb6e3,	// (0x00096c8f) cell_fmradio_pane

0xb53c,	// (0x00096ae8) cell_fmradio_pane_g1_ParamLimits

0xb53c,	// (0x00096ae8) cell_fmradio_pane_g1

0x9b4f,	// (0x000950fb) grid_highlight_pane_cp011

0xb6f6,	// (0x00096ca2) poc_content_pane_ParamLimits

0xb6f6,	// (0x00096ca2) poc_content_pane

0xb708,	// (0x00096cb4) scroll_pane_cp019

0x3bc2,	// (0x0008f16e) popup_call_poc_act_window_ParamLimits

0x3bc2,	// (0x0008f16e) popup_call_poc_act_window

0x3be6,	// (0x0008f192) popup_call_poc_inact_window_ParamLimits

0x3be6,	// (0x0008f192) popup_call_poc_inact_window

0xf594,	// (0x0009ab40) bg_popup_call_poc_act_pane_g

0xc5ff,	// (0x00097bab) bg_popup_call_poc_inact_pane_g1

0xc607,	// (0x00097bb3) bg_popup_call_poc_inact_pane_g2

0xb710,	// (0x00096cbc) popup_call_poc_act_window_g2

0xc60f,	// (0x00097bbb) bg_popup_call_poc_inact_pane_g3

0xc617,	// (0x00097bc3) bg_popup_call_poc_inact_pane_g4

0xc61f,	// (0x00097bcb) bg_popup_call_poc_inact_pane_g5

0xb718,	// (0x00096cc4) popup_call_poc_act_window_t1_ParamLimits

0xb718,	// (0x00096cc4) popup_call_poc_act_window_t1

0xb740,	// (0x00096cec) popup_call_poc_act_window_t2_ParamLimits

0xb740,	// (0x00096cec) popup_call_poc_act_window_t2

0xb768,	// (0x00096d14) popup_call_poc_act_window_t3_ParamLimits

0xb768,	// (0x00096d14) popup_call_poc_act_window_t3

0xb790,	// (0x00096d3c) popup_call_poc_act_window_t4_ParamLimits

0xb790,	// (0x00096d3c) popup_call_poc_act_window_t4

0x0003,

0xf502,	// (0x0009aaae) popup_call_poc_act_window_t_ParamLimits

0xf502,	// (0x0009aaae) popup_call_poc_act_window_t

0xc627,	// (0x00097bd3) bg_popup_call_poc_inact_pane_g6

0xc62f,	// (0x00097bdb) bg_popup_call_poc_inact_pane_g7

0xc637,	// (0x00097be3) bg_popup_call_poc_inact_pane_g8

0xb7a2,	// (0x00096d4e) popup_call_poc_inact_window_g2

0xc63f,	// (0x00097beb) bg_popup_call_poc_inact_pane_g9

0x0008,

0xf581,	// (0x0009ab2d) bg_popup_call_poc_inact_pane_g

0xb7aa,	// (0x00096d56) popup_call_poc_inact_window_t1_ParamLimits

0xb7aa,	// (0x00096d56) popup_call_poc_inact_window_t1

0xb7bf,	// (0x00096d6b) popup_call_poc_inact_window_t2_ParamLimits

0xb7bf,	// (0x00096d6b) popup_call_poc_inact_window_t2

0xb7d4,	// (0x00096d80) popup_call_poc_inact_window_t3_ParamLimits

0xb7d4,	// (0x00096d80) popup_call_poc_inact_window_t3

0x0002,

0xf50b,	// (0x0009aab7) popup_call_poc_inact_window_t_ParamLimits

0xf50b,	// (0x0009aab7) popup_call_poc_inact_window_t

0xc7c4,	// (0x00097d70) context_pane_ParamLimits

0x4407,	// (0x0008f9b3) signal_pane_ParamLimits

0xb391,	// (0x0009693d) main_call2_pane

0x9df9,	// (0x000953a5) popup_phob_thumbnail2_window_ParamLimits

0x9df9,	// (0x000953a5) popup_phob_thumbnail2_window

0x9d8a,	// (0x00095336) aid_hotspot_pointer_arrow_pane

0x9d92,	// (0x0009533e) aid_hotspot_pointer_hand_pane

0x3f31,	// (0x0008f4dd) phob_pre_status_pane_g5

0x1cf3,	// (0x0008d29f) cams_zoom_pane_ParamLimits

0x1d02,	// (0x0008d2ae) image_vga_pane_ParamLimits

0x1d1c,	// (0x0008d2c8) main_camera_pane_g1_ParamLimits

0x1d2e,	// (0x0008d2da) main_camera_pane_g2_ParamLimits

0x1d3e,	// (0x0008d2ea) main_camera_pane_g3_ParamLimits

0x1d50,	// (0x0008d2fc) main_camera_pane_g4_ParamLimits

0x1d62,	// (0x0008d30e) main_camera_pane_g5_ParamLimits

0x1d74,	// (0x0008d320) main_camera_pane_g6_ParamLimits

0x1d86,	// (0x0008d332) main_camera_pane_g7_ParamLimits

0xf20a,	// (0x0009a7b6) main_camera_pane_g_ParamLimits

0x1d98,	// (0x0008d344) main_camera_pane_t1_ParamLimits

0x1dae,	// (0x0008d35a) main_camera_pane_t2_ParamLimits

0xf21b,	// (0x0009a7c7) main_camera_pane_t_ParamLimits

0xa611,	// (0x00095bbd) bg_popup_preview_window_pane_cp01_ParamLimits

0xa611,	// (0x00095bbd) bg_popup_preview_window_pane_cp01

0xb7e9,	// (0x00096d95) popup_phob_thumbnail2_window_g1_ParamLimits

0xb7e9,	// (0x00096d95) popup_phob_thumbnail2_window_g1

0x9b4f,	// (0x000950fb) call2_cli_visual_pane

0x3c1a,	// (0x0008f1c6) popup_call2_audio_conf_window_ParamLimits

0x3c1a,	// (0x0008f1c6) popup_call2_audio_conf_window

0x3c3a,	// (0x0008f1e6) popup_call2_audio_first_window_ParamLimits

0x3c3a,	// (0x0008f1e6) popup_call2_audio_first_window

0x3cd0,	// (0x0008f27c) popup_call2_audio_in_window_ParamLimits

0x3cd0,	// (0x0008f27c) popup_call2_audio_in_window

0x3d18,	// (0x0008f2c4) popup_call2_audio_out_window_ParamLimits

0x3d18,	// (0x0008f2c4) popup_call2_audio_out_window

0x3d82,	// (0x0008f32e) popup_call2_audio_second_window_ParamLimits

0x3d82,	// (0x0008f32e) popup_call2_audio_second_window

0x3de8,	// (0x0008f394) popup_call2_audio_wait_window_ParamLimits

0x3de8,	// (0x0008f394) popup_call2_audio_wait_window

0x9b4f,	// (0x000950fb) bg_popup_call2_act_pane_cp03

0xa5f3,	// (0x00095b9f) list_conf_pane_cp

0xb7f5,	// (0x00096da1) popup_call2_audio_conf_window_t1

0xb803,	// (0x00096daf) list_single_graphic_popup_conf2_pane_ParamLimits

0xb803,	// (0x00096daf) list_single_graphic_popup_conf2_pane

0xb04a,	// (0x000965f6) list_highlight_pane_cp04

0xb816,	// (0x00096dc2) list_single_graphic_popup_conf2_pane_g1

0xb05b,	// (0x00096607) list_single_graphic_popup_conf2_pane_g2

0x0001,

0xf512,	// (0x0009aabe) list_single_graphic_popup_conf2_pane_g

0xb820,	// (0x00096dcc) list_single_graphic_popup_conf2_pane_t1

0xb82e,	// (0x00096dda) bg_popup_call2_act_pane_cp01_ParamLimits

0xb82e,	// (0x00096dda) bg_popup_call2_act_pane_cp01

0xb8b8,	// (0x00096e64) call_type_pane_cp05_ParamLimits

0xb8b8,	// (0x00096e64) call_type_pane_cp05

0xb90c,	// (0x00096eb8) popup_call2_audio_second_window_g1_ParamLimits

0xb90c,	// (0x00096eb8) popup_call2_audio_second_window_g1

0xb960,	// (0x00096f0c) popup_call2_audio_second_window_g2_ParamLimits

0xb960,	// (0x00096f0c) popup_call2_audio_second_window_g2

0x0002,

0xf517,	// (0x0009aac3) popup_call2_audio_second_window_g_ParamLimits

0xf517,	// (0x0009aac3) popup_call2_audio_second_window_g

0xb9c5,	// (0x00096f71) popup_call2_audio_second_window_t1_ParamLimits

0xb9c5,	// (0x00096f71) popup_call2_audio_second_window_t1

0xba80,	// (0x0009702c) popup_call2_audio_second_window_t2_ParamLimits

0xba80,	// (0x0009702c) popup_call2_audio_second_window_t2

0xbad3,	// (0x0009707f) popup_call2_audio_second_window_t3_ParamLimits

0xbad3,	// (0x0009707f) popup_call2_audio_second_window_t3

0x0003,

0xf51e,	// (0x0009aaca) popup_call2_audio_second_window_t_ParamLimits

0xf51e,	// (0x0009aaca) popup_call2_audio_second_window_t

0x9b4f,	// (0x000950fb) bg_popup_call2_in_pane_cp02

0x9b59,	// (0x00095105) call_type_pane_cp04

0x9b61,	// (0x0009510d) popup_call2_audio_wait_window_g1

0x9b69,	// (0x00095115) popup_call2_audio_wait_window_g2

0x0001,

0xf0f5,	// (0x0009a6a1) popup_call2_audio_wait_window_g

0x9b71,	// (0x0009511d) popup_call2_audio_wait_window_t3

0xbbc6,	// (0x00097172) bg_popup_call2_act_pane_ParamLimits

0xbbc6,	// (0x00097172) bg_popup_call2_act_pane

0xbc86,	// (0x00097232) call_type_pane_cp03_ParamLimits

0xbc86,	// (0x00097232) call_type_pane_cp03

0xbcea,	// (0x00097296) popup_call2_audio_first_window_g1_ParamLimits

0xbcea,	// (0x00097296) popup_call2_audio_first_window_g1

0xbd5a,	// (0x00097306) popup_call2_audio_first_window_g2_ParamLimits

0xbd5a,	// (0x00097306) popup_call2_audio_first_window_g2

0xb450,	// (0x000969fc) popup_call2_audio_first_window_g3_ParamLimits

0xb450,	// (0x000969fc) popup_call2_audio_first_window_g3

0x0004,

0xf527,	// (0x0009aad3) popup_call2_audio_first_window_g_ParamLimits

0xf527,	// (0x0009aad3) popup_call2_audio_first_window_g

0xbe38,	// (0x000973e4) popup_call2_audio_first_window_t1_ParamLimits

0xbe38,	// (0x000973e4) popup_call2_audio_first_window_t1

0xbf3b,	// (0x000974e7) popup_call2_audio_first_window_t4_ParamLimits

0xbf3b,	// (0x000974e7) popup_call2_audio_first_window_t4

0xc02a,	// (0x000975d6) popup_call2_audio_first_window_t5_ParamLimits

0xc02a,	// (0x000975d6) popup_call2_audio_first_window_t5

0x0003,

0xf532,	// (0x0009aade) popup_call2_audio_first_window_t_ParamLimits

0xf532,	// (0x0009aade) popup_call2_audio_first_window_t

0xa609,	// (0x00095bb5) bg_popup_call2_act_pane_g1

0xc697,	// (0x00097c43) popup_cale_lunar_info_window_t1

0xc6a5,	// (0x00097c51) popup_cale_lunar_info_window_t2

0xc6b3,	// (0x00097c5f) popup_cale_lunar_info_window_t3

0x9b4f,	// (0x000950fb) bg_popup_call2_bubble_pane

0xc12b,	// (0x000976d7) bg_popup_call2_in_pane_cp01_ParamLimits

0xc12b,	// (0x000976d7) bg_popup_call2_in_pane_cp01

0x982b,	// (0x00094dd7) call_type_pane_cp02

0xc173,	// (0x0009771f) popup_call2_audio_out_window_g1_ParamLimits

0xc173,	// (0x0009771f) popup_call2_audio_out_window_g1

0xc19f,	// (0x0009774b) popup_call2_audio_out_window_g2_ParamLimits

0xc19f,	// (0x0009774b) popup_call2_audio_out_window_g2

0xc1c7,	// (0x00097773) popup_call2_audio_out_window_g3_ParamLimits

0xc1c7,	// (0x00097773) popup_call2_audio_out_window_g3

0x0003,

0xf53b,	// (0x0009aae7) popup_call2_audio_out_window_g_ParamLimits

0xf53b,	// (0x0009aae7) popup_call2_audio_out_window_g

0xc202,	// (0x000977ae) popup_call2_audio_out_window_t1_ParamLimits

0xc202,	// (0x000977ae) popup_call2_audio_out_window_t1

0xc261,	// (0x0009780d) popup_call2_audio_out_window_t2_ParamLimits

0xc261,	// (0x0009780d) popup_call2_audio_out_window_t2

0xc2b5,	// (0x00097861) popup_call2_audio_out_window_t3_ParamLimits

0xc2b5,	// (0x00097861) popup_call2_audio_out_window_t3

0xc2cb,	// (0x00097877) popup_call2_audio_out_window_t4_ParamLimits

0xc2cb,	// (0x00097877) popup_call2_audio_out_window_t4

0xc2e1,	// (0x0009788d) popup_call2_audio_out_window_t5_ParamLimits

0xc2e1,	// (0x0009788d) popup_call2_audio_out_window_t5

0x0005,

0xf544,	// (0x0009aaf0) popup_call2_audio_out_window_t_ParamLimits

0xf544,	// (0x0009aaf0) popup_call2_audio_out_window_t

0xc345,	// (0x000978f1) bg_popup_call2_in_pane_ParamLimits

0xc345,	// (0x000978f1) bg_popup_call2_in_pane

0xc3a1,	// (0x0009794d) popup_call2_audio_in_window_g1_ParamLimits

0xc3a1,	// (0x0009794d) popup_call2_audio_in_window_g1

0xc3d9,	// (0x00097985) popup_call2_audio_in_window_g2_ParamLimits

0xc3d9,	// (0x00097985) popup_call2_audio_in_window_g2

0xc411,	// (0x000979bd) popup_call2_audio_in_window_g3_ParamLimits

0xc411,	// (0x000979bd) popup_call2_audio_in_window_g3

0x0003,

0xf551,	// (0x0009aafd) popup_call2_audio_in_window_g_ParamLimits

0xf551,	// (0x0009aafd) popup_call2_audio_in_window_g

0xc469,	// (0x00097a15) popup_call2_audio_in_window_t1_ParamLimits

0xc469,	// (0x00097a15) popup_call2_audio_in_window_t1

0xc4e9,	// (0x00097a95) popup_call2_audio_in_window_t2_ParamLimits

0xc4e9,	// (0x00097a95) popup_call2_audio_in_window_t2

0xc569,	// (0x00097b15) popup_call2_audio_in_window_t3_ParamLimits

0xc569,	// (0x00097b15) popup_call2_audio_in_window_t3

0xc583,	// (0x00097b2f) popup_call2_audio_in_window_t4_ParamLimits

0xc583,	// (0x00097b2f) popup_call2_audio_in_window_t4

0xc595,	// (0x00097b41) popup_call2_audio_in_window_t5_ParamLimits

0xc595,	// (0x00097b41) popup_call2_audio_in_window_t5

0xc5aa,	// (0x00097b56) popup_call2_audio_in_window_t6_ParamLimits

0xc5aa,	// (0x00097b56) popup_call2_audio_in_window_t6

0x0005,

0xf55a,	// (0x0009ab06) popup_call2_audio_in_window_t_ParamLimits

0xf55a,	// (0x0009ab06) popup_call2_audio_in_window_t

0xa609,	// (0x00095bb5) bg_popup_call2_in_pane_g1

0xc6c1,	// (0x00097c6d) popup_cale_lunar_info_window_t4

0x0003,

0xf5c2,	// (0x0009ab6e) popup_cale_lunar_info_window_t

0xa611,	// (0x00095bbd) bg_popup_call2_rect_pane_ParamLimits

0xa611,	// (0x00095bbd) bg_popup_call2_rect_pane

0x9b4f,	// (0x000950fb) call2_cli_visual_graphic_pane

0x9b4f,	// (0x000950fb) call2_cli_visual_text_pane

0x9e20,	// (0x000953cc) smil_status_volume_pane_g3

0x0002,

0xa74a,	// (0x00095cf6) call2_cli_visual_graphic_pane_g1

0xa74a,	// (0x00095cf6) call2_cli_visual_graphic_pane_g2

0xa74a,	// (0x00095cf6) call2_cli_visual_graphic_pane_g3

0x0002,

0xf567,	// (0x0009ab13) call2_cli_visual_graphic_pane_g

0xc5bf,	// (0x00097b6b) bg_popup_call2_rect_pane_g1

0xa7e8,	// (0x00095d94) bg_popup_call2_rect_pane_g2

0xc5c7,	// (0x00097b73) bg_popup_call2_rect_pane_g3

0xc5cf,	// (0x00097b7b) bg_popup_call2_rect_pane_g4

0xc5d7,	// (0x00097b83) bg_popup_call2_rect_pane_g5

0xc5df,	// (0x00097b8b) bg_popup_call2_rect_pane_g6

0xc5e7,	// (0x00097b93) bg_popup_call2_rect_pane_g7

0xc5ef,	// (0x00097b9b) bg_popup_call2_rect_pane_g8

0xc5f7,	// (0x00097ba3) bg_popup_call2_rect_pane_g9

0x0008,

0xf56e,	// (0x0009ab1a) bg_popup_call2_rect_pane_g

0xc5ff,	// (0x00097bab) bg_popup_call2_bubble_pane_g1

0xc607,	// (0x00097bb3) bg_popup_call2_bubble_pane_g2

0xc60f,	// (0x00097bbb) bg_popup_call2_bubble_pane_g3

0xc617,	// (0x00097bc3) bg_popup_call2_bubble_pane_g4

0xc61f,	// (0x00097bcb) bg_popup_call2_bubble_pane_g5

0xc627,	// (0x00097bd3) bg_popup_call2_bubble_pane_g6

0xc62f,	// (0x00097bdb) bg_popup_call2_bubble_pane_g7

0xc637,	// (0x00097be3) bg_popup_call2_bubble_pane_g8

0xc63f,	// (0x00097beb) bg_popup_call2_bubble_pane_g9

0x0008,

0xf581,	// (0x0009ab2d) bg_popup_call2_bubble_pane_g

0x161f,	// (0x0008cbcb) aid_cale_week_size_cell_pane

0x1dc6,	// (0x0008d372) aid_cams_cif_uncrop_pane_ParamLimits

0x1dc6,	// (0x0008d372) aid_cams_cif_uncrop_pane

0x1f7b,	// (0x0008d527) aid_cams_size_cell_ParamLimits

0x1f7b,	// (0x0008d527) aid_cams_size_cell

0x1f8f,	// (0x0008d53b) grid_cams_pane_ParamLimits

0x1fa9,	// (0x0008d555) linegrid_cams_pane_ParamLimits

0x208f,	// (0x0008d63b) call_video_pane_t1

0x20ad,	// (0x0008d659) call_video_pane_t2

0x0001,

0xf26e,	// (0x0009a81a) call_video_pane_t

0x24dc,	// (0x0008da88) aid_cale_month_size_cell_pane_ParamLimits

0x24dc,	// (0x0008da88) aid_cale_month_size_cell_pane

0xf60b,	// (0x0009abb7) smil_status_volume_pane_g

0x9e2d,	// (0x000953d9) volume_smil_pane_ParamLimits

0x96e6,	// (0x00094c92) aid_popup2_width_pane

0x1576,	// (0x0008cb22) cell_qdial_pane_g4_ParamLimits

0x1576,	// (0x0008cb22) cell_qdial_pane_g4

0x32d7,	// (0x0008e883) aid_blid_cardinal_pane_ParamLimits

0x32e3,	// (0x0008e88f) aid_blid_destination_pane_ParamLimits

0x32e3,	// (0x0008e88f) aid_blid_destination_pane

0xa611,	// (0x00095bbd) bg_popup_call_poc_act_pane_ParamLimits

0xa611,	// (0x00095bbd) bg_popup_call_poc_act_pane

0xa611,	// (0x00095bbd) bg_popup_call_poc_inact_pane_ParamLimits

0xa611,	// (0x00095bbd) bg_popup_call_poc_inact_pane

0xc647,	// (0x00097bf3) bg_popup_call_poc_act_pane_g1

0xc64f,	// (0x00097bfb) bg_popup_call_poc_act_pane_g2

0xc657,	// (0x00097c03) bg_popup_call_poc_act_pane_g3

0xc617,	// (0x00097bc3) bg_popup_call_poc_act_pane_g4

0xc61f,	// (0x00097bcb) bg_popup_call_poc_act_pane_g5

0xc65f,	// (0x00097c0b) bg_popup_call_poc_act_pane_g6

0xc62f,	// (0x00097bdb) bg_popup_call_poc_act_pane_g7

0xc667,	// (0x00097c13) bg_popup_call_poc_act_pane_g8

0x9b4f,	// (0x000950fb) main_usb_pane

0x9dd4,	// (0x00095380) popup_cale_lunar_info_window

0x2377,	// (0x0008d923) im_reading_pane_t1_ParamLimits

0xa9bd,	// (0x00095f69) list_im_pane_ParamLimits

0xa9ce,	// (0x00095f7a) scroll_pane_cp07_ParamLimits

0x9b4f,	// (0x000950fb) grid_highlight_pane_cp012

0xa611,	// (0x00095bbd) mup_scale_pane_ParamLimits

0xb53c,	// (0x00096ae8) main_usb_pane_g1_ParamLimits

0xb53c,	// (0x00096ae8) main_usb_pane_g1

0x3e46,	// (0x0008f3f2) main_usb_pane_g2_ParamLimits

0x3e46,	// (0x0008f3f2) main_usb_pane_g2

0x0001,

0xf5ab,	// (0x0009ab57) main_usb_pane_g_ParamLimits

0xf5ab,	// (0x0009ab57) main_usb_pane_g

0x3e5c,	// (0x0008f408) main_usb_pane_t1_ParamLimits

0x3e5c,	// (0x0008f408) main_usb_pane_t1

0x3e6e,	// (0x0008f41a) main_usb_pane_t2_ParamLimits

0x3e6e,	// (0x0008f41a) main_usb_pane_t2

0x3e80,	// (0x0008f42c) main_usb_pane_t3_ParamLimits

0x3e80,	// (0x0008f42c) main_usb_pane_t3

0x3e92,	// (0x0008f43e) main_usb_pane_t4_ParamLimits

0x3e92,	// (0x0008f43e) main_usb_pane_t4

0x3ea4,	// (0x0008f450) main_usb_pane_t5_ParamLimits

0x3ea4,	// (0x0008f450) main_usb_pane_t5

0x3eb6,	// (0x0008f462) main_usb_pane_t6_ParamLimits

0x3eb6,	// (0x0008f462) main_usb_pane_t6

0x0005,

0xf5b0,	// (0x0009ab5c) main_usb_pane_t_ParamLimits

0x3284,	// (0x0008e830) aid_text_placing

0x328d,	// (0x0008e839) main_location2_pane_t1_ParamLimits

0x329f,	// (0x0008e84b) main_location2_pane_t2_ParamLimits

0x32b1,	// (0x0008e85d) main_location2_pane_t3_ParamLimits

0x32c5,	// (0x0008e871) main_location2_pane_t4_ParamLimits

0x32c5,	// (0x0008e871) main_location2_pane_t4

0xf3cf,	// (0x0009a97b) main_location2_pane_t_ParamLimits

0xa64d,	// (0x00095bf9) find_pinb_pane_g2_ParamLimits

0xa64d,	// (0x00095bf9) find_pinb_pane_g2

0x0001,

0xf11b,	// (0x0009a6c7) find_pinb_pane_g_ParamLimits

0xf11b,	// (0x0009a6c7) find_pinb_pane_g

0xa659,	// (0x00095c05) find_pinb_pane_t1_ParamLimits

0xa66b,	// (0x00095c17) find_pinb_pane_t2_ParamLimits

0xf120,	// (0x0009a6cc) find_pinb_pane_t_ParamLimits

0x9b4f,	// (0x000950fb) main_call3_pane

0x29bf,	// (0x0008df6b) cale_month_day_heading_pane_t1_ParamLimits

0x2a45,	// (0x0008dff1) cale_month_day_heading_pane_t2_ParamLimits

0x2ad6,	// (0x0008e082) cale_month_day_heading_pane_t3_ParamLimits

0x2b67,	// (0x0008e113) cale_month_day_heading_pane_t4_ParamLimits

0x2c00,	// (0x0008e1ac) cale_month_day_heading_pane_t5_ParamLimits

0x2ca1,	// (0x0008e24d) cale_month_day_heading_pane_t6_ParamLimits

0x2d42,	// (0x0008e2ee) cale_month_day_heading_pane_t7_ParamLimits

0xf2a6,	// (0x0009a852) cale_month_day_heading_pane_t_ParamLimits

0xac18,	// (0x000961c4) smil_status_volume_pane

0x3939,	// (0x0008eee5) postcard_address_pane_ParamLimits

0x3939,	// (0x0008eee5) postcard_address_pane

0x394b,	// (0x0008eef7) postcard_message_pane_ParamLimits

0x394b,	// (0x0008eef7) postcard_message_pane

0x3e22,	// (0x0008f3ce) call2_cli_visual_pane_t1_ParamLimits

0x3e22,	// (0x0008f3ce) call2_cli_visual_pane_t1

0x4636,	// (0x0008fbe2) postcard_message_pane_t1_ParamLimits

0x4636,	// (0x0008fbe2) postcard_message_pane_t1

0x461f,	// (0x0008fbcb) postcard_address_pane_t1_ParamLimits

0x461f,	// (0x0008fbcb) postcard_address_pane_t1

0x460b,	// (0x0008fbb7) popup_call3_audio_in_window_ParamLimits

0x460b,	// (0x0008fbb7) popup_call3_audio_in_window

0x4498,	// (0x0008fa44) bg_popup_call3_in_pane_ParamLimits

0x4498,	// (0x0008fa44) bg_popup_call3_in_pane

0x450c,	// (0x0008fab8) popup_call3_audio_in_window_g1_ParamLimits

0x450c,	// (0x0008fab8) popup_call3_audio_in_window_g1

0x452c,	// (0x0008fad8) popup_call3_audio_in_window_g2_ParamLimits

0x452c,	// (0x0008fad8) popup_call3_audio_in_window_g2

0x454c,	// (0x0008faf8) popup_call3_audio_in_window_g3_ParamLimits

0x454c,	// (0x0008faf8) popup_call3_audio_in_window_g3

0x0003,

0xf612,	// (0x0009abbe) popup_call3_audio_in_window_g_ParamLimits

0xf612,	// (0x0009abbe) popup_call3_audio_in_window_g

0x457d,	// (0x0008fb29) popup_call3_audio_in_window_t1_ParamLimits

0x457d,	// (0x0008fb29) popup_call3_audio_in_window_t1

0x45bb,	// (0x0008fb67) popup_call3_audio_in_window_t2_ParamLimits

0x45bb,	// (0x0008fb67) popup_call3_audio_in_window_t2

0x45f9,	// (0x0008fba5) popup_call3_audio_in_window_t3_ParamLimits

0x45f9,	// (0x0008fba5) popup_call3_audio_in_window_t3

0x0002,

0xf61b,	// (0x0009abc7) popup_call3_audio_in_window_t_ParamLimits

0xf61b,	// (0x0009abc7) popup_call3_audio_in_window_t

0xb391,	// (0x0009693d) bg_popup_call3_rect_pane

0xc5bf,	// (0x00097b6b) bg_popup_call3_rect_pane_g1

0xa7e8,	// (0x00095d94) bg_popup_call3_rect_pane_g2

0xc5c7,	// (0x00097b73) bg_popup_call3_rect_pane_g3

0xc5cf,	// (0x00097b7b) bg_popup_call3_rect_pane_g4

0xc5d7,	// (0x00097b83) bg_popup_call3_rect_pane_g5

0xc5df,	// (0x00097b8b) bg_popup_call3_rect_pane_g6

0xc5e7,	// (0x00097b93) bg_popup_call3_rect_pane_g7

0x35cb,	// (0x0008eb77) mup_visualizer_osc_pane

0xb45e,	// (0x00096a0a) mup_visualizer_spec_pane

0x44c8,	// (0x0008fa74) call3_video_qcif_pane_ParamLimits

0x44c8,	// (0x0008fa74) call3_video_qcif_pane

0x44d9,	// (0x0008fa85) call3_video_qcif_uncrop_pane_ParamLimits

0x44d9,	// (0x0008fa85) call3_video_qcif_uncrop_pane

0x44e7,	// (0x0008fa93) call3_video_subqcif_pane_ParamLimits

0x44e7,	// (0x0008fa93) call3_video_subqcif_pane

0x44fb,	// (0x0008faa7) call3_video_subqcif_uncrop_pane_ParamLimits

0x44fb,	// (0x0008faa7) call3_video_subqcif_uncrop_pane

0x456c,	// (0x0008fb18) popup_call3_audio_in_window_g4_ParamLimits

0x456c,	// (0x0008fb18) popup_call3_audio_in_window_g4

0x4487,	// (0x0008fa33) mup_spec_half_pane

0x4490,	// (0x0008fa3c) mup_spec_half_pane_cp

0xc824,	// (0x00097dd0) mup_osc_middle_pane

0xc82d,	// (0x00097dd9) mup_visualizer_osc_pane_g1

0x4467,	// (0x0008fa13) mup_spec_bar_pane_ParamLimits

0x4467,	// (0x0008fa13) mup_spec_bar_pane

0xc811,	// (0x00097dbd) mup_spec_bar_pane_g1

0xc81b,	// (0x00097dc7) mup_spec_bar_pane_g2

0x0001,

0xf606,	// (0x0009abb2) mup_spec_bar_pane_g

0x161f,	// (0x0008cbcb) aid_cale_week_size_cell_pane_ParamLimits

0x1639,	// (0x0008cbe5) bg_cale_heading_pane_ParamLimits

0xa825,	// (0x00095dd1) bg_cale_pane_cp01_ParamLimits

0x1657,	// (0x0008cc03) cale_week_corner_pane_ParamLimits

0x1676,	// (0x0008cc22) cale_week_day_heading_pane_ParamLimits

0x1699,	// (0x0008cc45) cale_week_scroll_pane_g1_ParamLimits

0x16b2,	// (0x0008cc5e) cale_week_scroll_pane_g2_ParamLimits

0x16ca,	// (0x0008cc76) cale_week_scroll_pane_g3_ParamLimits

0x16e2,	// (0x0008cc8e) cale_week_scroll_pane_g4_ParamLimits

0x16fa,	// (0x0008cca6) cale_week_scroll_pane_g5_ParamLimits

0x1716,	// (0x0008ccc2) cale_week_scroll_pane_g6_ParamLimits

0x1736,	// (0x0008cce2) cale_week_scroll_pane_g7_ParamLimits

0x1756,	// (0x0008cd02) cale_week_scroll_pane_g8_ParamLimits

0x177a,	// (0x0008cd26) cale_week_scroll_pane_g9_ParamLimits

0x1792,	// (0x0008cd3e) cale_week_scroll_pane_g10_ParamLimits

0x17aa,	// (0x0008cd56) cale_week_scroll_pane_g11_ParamLimits

0x17c2,	// (0x0008cd6e) cale_week_scroll_pane_g12_ParamLimits

0x17da,	// (0x0008cd86) cale_week_scroll_pane_g13_ParamLimits

0x17da,	// (0x0008cd86) cale_week_scroll_pane_g14_ParamLimits

0x17da,	// (0x0008cd86) cale_week_scroll_pane_g15_ParamLimits

0xf1ac,	// (0x0009a758) cale_week_scroll_pane_g_ParamLimits

0x1816,	// (0x0008cdc2) cale_week_time_pane_ParamLimits

0x183a,	// (0x0008cde6) grid_cale_week_pane_ParamLimits

0xa843,	// (0x00095def) listscroll_cale_week_pane_t1

0xa855,	// (0x00095e01) scroll_pane_cp08_ParamLimits

0x253d,	// (0x0008dae9) cale_month_corner_pane_ParamLimits

0xabee,	// (0x0009619a) cale_month_pane_t1

0x295d,	// (0x0008df09) cale_month_week_pane_ParamLimits

0x30f5,	// (0x0008e6a1) popup_call_status_window_g1_ParamLimits

0x3109,	// (0x0008e6b5) popup_call_status_window_g2_ParamLimits

0x311d,	// (0x0008e6c9) popup_call_status_window_g3_ParamLimits

0xf356,	// (0x0009a902) popup_call_status_window_g_ParamLimits

0xafa6,	// (0x00096552) aid_call2_pane

0x02c0,	// (0x0008b86c) msg_header_pane_g1

0x3939,	// (0x0008eee5) postcard_address2_pane_ParamLimits

0x3939,	// (0x0008eee5) postcard_address2_pane

0x394b,	// (0x0008eef7) postcard_message2_pane_ParamLimits

0x394b,	// (0x0008eef7) postcard_message2_pane

0x4415,	// (0x0008f9c1) message2_row_pane_ParamLimits

0x4415,	// (0x0008f9c1) message2_row_pane

0x4434,	// (0x0008f9e0) address2_row_pane_ParamLimits

0x4434,	// (0x0008f9e0) address2_row_pane

0xc7df,	// (0x00097d8b) postcard_message2_row_pane_g1

0xc7e7,	// (0x00097d93) postcard_message2_row_pane_t1

0xc7df,	// (0x00097d8b) address2_row_pane_g1

0xc7e7,	// (0x00097d93) address2_row_pane_t1

0x1c5a,	// (0x0008d206) aid_size_cell_vorec

0x9b4f,	// (0x000950fb) main_rss_pane

0x4447,	// (0x0008f9f3) rss_list_single_pane_ParamLimits

0x4447,	// (0x0008f9f3) rss_list_single_pane

0xc7f5,	// (0x00097da1) rss_list_single_pane_t1

0xc803,	// (0x00097daf) rss_list_single_pane_t2

0x0001,

0xf601,	// (0x0009abad) rss_list_single_pane_t

0x9b4f,	// (0x000950fb) main_camera2_pane

0x9b4f,	// (0x000950fb) main_video2_pane

0x46af,	// (0x0008fc5b) cams_zoom_pane_cp2_ParamLimits

0x46af,	// (0x0008fc5b) cams_zoom_pane_cp2

0x46cf,	// (0x0008fc7b) image2_vga_pane_ParamLimits

0x46cf,	// (0x0008fc7b) image2_vga_pane

0x4720,	// (0x0008fccc) main_camera2_pane_g1_ParamLimits

0x4720,	// (0x0008fccc) main_camera2_pane_g1

0x4740,	// (0x0008fcec) main_camera2_pane_g2_ParamLimits

0x4740,	// (0x0008fcec) main_camera2_pane_g2

0x4760,	// (0x0008fd0c) main_camera2_pane_g3_ParamLimits

0x4760,	// (0x0008fd0c) main_camera2_pane_g3

0x4780,	// (0x0008fd2c) main_camera2_pane_g4_ParamLimits

0x4780,	// (0x0008fd2c) main_camera2_pane_g4

0x47a0,	// (0x0008fd4c) main_camera2_pane_g5_ParamLimits

0x47a0,	// (0x0008fd4c) main_camera2_pane_g5

0x47c0,	// (0x0008fd6c) main_camera2_pane_g6_ParamLimits

0x47c0,	// (0x0008fd6c) main_camera2_pane_g6

0x47e0,	// (0x0008fd8c) main_camera2_pane_g7_ParamLimits

0x47e0,	// (0x0008fd8c) main_camera2_pane_g7

0x4800,	// (0x0008fdac) main_camera2_pane_g8_ParamLimits

0x4800,	// (0x0008fdac) main_camera2_pane_g8

0x0008,

0xf622,	// (0x0009abce) main_camera2_pane_g_ParamLimits

0xf622,	// (0x0009abce) main_camera2_pane_g

0x4840,	// (0x0008fdec) main_camera2_pane_t1_ParamLimits

0x4840,	// (0x0008fdec) main_camera2_pane_t1

0x4875,	// (0x0008fe21) main_camera2_pane_t2_ParamLimits

0x4875,	// (0x0008fe21) main_camera2_pane_t2

0x489b,	// (0x0008fe47) main_camera2_pane_t3_ParamLimits

0x489b,	// (0x0008fe47) main_camera2_pane_t3

0x48f9,	// (0x0008fea5) main_camera2_pane_t4_ParamLimits

0x48f9,	// (0x0008fea5) main_camera2_pane_t4

0x0006,

0xf635,	// (0x0009abe1) main_camera2_pane_t_ParamLimits

0xf635,	// (0x0009abe1) main_camera2_pane_t

0x498b,	// (0x0008ff37) cams_zoom_pane_cp4_ParamLimits

0x498b,	// (0x0008ff37) cams_zoom_pane_cp4

0x49a1,	// (0x0008ff4d) image2_cif_pane_ParamLimits

0x49a1,	// (0x0008ff4d) image2_cif_pane

0x49cc,	// (0x0008ff78) image2_subqcif_pane_ParamLimits

0x49cc,	// (0x0008ff78) image2_subqcif_pane

0x49e6,	// (0x0008ff92) main_video2_pane_g1_ParamLimits

0x49e6,	// (0x0008ff92) main_video2_pane_g1

0x4a00,	// (0x0008ffac) main_video2_pane_g2_ParamLimits

0x4a00,	// (0x0008ffac) main_video2_pane_g2

0x4a16,	// (0x0008ffc2) main_video2_pane_g3_ParamLimits

0x4a16,	// (0x0008ffc2) main_video2_pane_g3

0x4a2c,	// (0x0008ffd8) main_video2_pane_g4_ParamLimits

0x4a2c,	// (0x0008ffd8) main_video2_pane_g4

0x4a42,	// (0x0008ffee) main_video2_pane_g5_ParamLimits

0x4a42,	// (0x0008ffee) main_video2_pane_g5

0x4a58,	// (0x00090004) main_video2_pane_g6_ParamLimits

0x4a58,	// (0x00090004) main_video2_pane_g6

0x0005,

0xf644,	// (0x0009abf0) main_video2_pane_g_ParamLimits

0xf644,	// (0x0009abf0) main_video2_pane_g

0x4a72,	// (0x0009001e) main_video2_pane_t1_ParamLimits

0x4a72,	// (0x0009001e) main_video2_pane_t1

0x4a96,	// (0x00090042) main_video2_pane_t2_ParamLimits

0x4a96,	// (0x00090042) main_video2_pane_t2

0x4ae4,	// (0x00090090) main_video2_pane_t3_ParamLimits

0x4ae4,	// (0x00090090) main_video2_pane_t3

0x0002,

0xf651,	// (0x0009abfd) main_video2_pane_t_ParamLimits

0xf651,	// (0x0009abfd) main_video2_pane_t

0x3f71,	// (0x0008f51d) call_muted_g2

0x0001,

0xf5f3,	// (0x0009ab9f) call_muted_g

0x9b4f,	// (0x000950fb) main_mup2_pane

0x4b2c,	// (0x000900d8) main_mup2_pane_g1_ParamLimits

0x4b2c,	// (0x000900d8) main_mup2_pane_g1

0x4b38,	// (0x000900e4) main_mup2_pane_g2_ParamLimits

0x4b38,	// (0x000900e4) main_mup2_pane_g2

0x9e9b,	// (0x00095447) main_mup_pane_g13_cp1

0x9ea3,	// (0x0009544f) mup_volume_pane_cp1

0x4b54,	// (0x00090100) main_mup2_pane_g4_ParamLimits

0x4b54,	// (0x00090100) main_mup2_pane_g4

0x4b66,	// (0x00090112) main_mup2_pane_g5_ParamLimits

0x4b66,	// (0x00090112) main_mup2_pane_g5

0x4b78,	// (0x00090124) main_mup2_pane_g6_ParamLimits

0x4b78,	// (0x00090124) main_mup2_pane_g6

0x4b8a,	// (0x00090136) main_mup2_pane_g7_ParamLimits

0x4b8a,	// (0x00090136) main_mup2_pane_g7

0x0006,

0xf658,	// (0x0009ac04) main_mup2_pane_g_ParamLimits

0xf658,	// (0x0009ac04) main_mup2_pane_g

0x4ba2,	// (0x0009014e) main_mup2_pane_t1_ParamLimits

0x4ba2,	// (0x0009014e) main_mup2_pane_t1

0x4bb8,	// (0x00090164) main_mup2_pane_t2_ParamLimits

0x4bb8,	// (0x00090164) main_mup2_pane_t2

0x4bce,	// (0x0009017a) main_mup2_pane_t3_ParamLimits

0x4bce,	// (0x0009017a) main_mup2_pane_t3

0x4be4,	// (0x00090190) main_mup2_pane_t4_ParamLimits

0x4be4,	// (0x00090190) main_mup2_pane_t4

0x4bfc,	// (0x000901a8) main_mup2_pane_t5_ParamLimits

0x4bfc,	// (0x000901a8) main_mup2_pane_t5

0x4c14,	// (0x000901c0) main_mup2_pane_t6_ParamLimits

0x4c14,	// (0x000901c0) main_mup2_pane_t6

0x0005,

0xf667,	// (0x0009ac13) main_mup2_pane_t_ParamLimits

0xf667,	// (0x0009ac13) main_mup2_pane_t

0x4c44,	// (0x000901f0) mup2_visualizer_pane_ParamLimits

0x4c44,	// (0x000901f0) mup2_visualizer_pane

0x4c72,	// (0x0009021e) mup_progress_pane_cp_ParamLimits

0x4c72,	// (0x0009021e) mup_progress_pane_cp

0x9e86,	// (0x00095432) mup_volume_pane_cp_ParamLimits

0x9e86,	// (0x00095432) mup_volume_pane_cp

0x4c86,	// (0x00090232) mup2_visualizer_pane_g1_ParamLimits

0x4c86,	// (0x00090232) mup2_visualizer_pane_g1

0xc864,	// (0x00097e10) mup2_visualizer_pane_g2_ParamLimits

0xc864,	// (0x00097e10) mup2_visualizer_pane_g2

0x4c9d,	// (0x00090249) mup2_visualizer_pane_g3_ParamLimits

0x4c9d,	// (0x00090249) mup2_visualizer_pane_g3

0x0002,

0xf674,	// (0x0009ac20) mup2_visualizer_pane_g_ParamLimits

0xf674,	// (0x0009ac20) mup2_visualizer_pane_g

0xb685,	// (0x00096c31) aid_size_cell_fmradio

0x4123,	// (0x0008f6cf) aid_height_parent_landcape

0xaa4c,	// (0x00095ff8) wml_content_pane_cp

0xaa54,	// (0x00096000) wml_tabs_pane

0xaa5d,	// (0x00096009) popup_wml_miniature_window

0xaa65,	// (0x00096011) scroll_pane_cp021

0xaa79,	// (0x00096025) wml_content_pane_comp8

0x9b4f,	// (0x000950fb) bg_popup_sub_pane_cp05

0xc882,	// (0x00097e2e) popup_wml_miniature_window_g1

0xc88a,	// (0x00097e36) wml_miniature_view_pane

0x4ca9,	// (0x00090255) aid_size_wml_view

0x4cb1,	// (0x0009025d) wml_miniature_view_pane_g1

0x4cba,	// (0x00090266) wml_miniature_view_pane_g2

0x4cc3,	// (0x0009026f) wml_miniature_view_pane_g3

0x4ccb,	// (0x00090277) wml_miniature_view_pane_g4

0x4cd3,	// (0x0009027f) wml_miniature_view_pane_g5

0x4cdb,	// (0x00090287) wml_miniature_view_pane_g6

0x4ce3,	// (0x0009028f) wml_miniature_view_pane_g7

0x4ceb,	// (0x00090297) wml_miniature_view_pane_g8

0x0007,

0xf67b,	// (0x0009ac27) wml_miniature_view_pane_g

0xc892,	// (0x00097e3e) background_graphic_ParamLimits

0xc892,	// (0x00097e3e) background_graphic

0xc89e,	// (0x00097e4a) wml_tabs_2_pane

0xc8a7,	// (0x00097e53) wml_tabs_3_pane_ParamLimits

0xc8a7,	// (0x00097e53) wml_tabs_3_pane

0xc8b9,	// (0x00097e65) wml_tabs_4_pane_ParamLimits

0xc8b9,	// (0x00097e65) wml_tabs_4_pane

0xc8cf,	// (0x00097e7b) wml_tabs_5_pane_ParamLimits

0xc8cf,	// (0x00097e7b) wml_tabs_5_pane

0xc8e9,	// (0x00097e95) wml_tabs_pane_g2_ParamLimits

0xc8e9,	// (0x00097e95) wml_tabs_pane_g2

0xc8fd,	// (0x00097ea9) wml_tabs_pane_g3_ParamLimits

0xc8fd,	// (0x00097ea9) wml_tabs_pane_g3

0x4cf3,	// (0x0009029f) wml_tabs_2_active_pane_ParamLimits

0x4cf3,	// (0x0009029f) wml_tabs_2_active_pane

0x4d07,	// (0x000902b3) wml_tabs_2_passive_pane_ParamLimits

0x4d07,	// (0x000902b3) wml_tabs_2_passive_pane

0x4d1b,	// (0x000902c7) wml_tabs_3_active_pane_cp_ParamLimits

0x4d1b,	// (0x000902c7) wml_tabs_3_active_pane_cp

0x4d30,	// (0x000902dc) wml_tabs_3_passive_pane_ParamLimits

0x4d30,	// (0x000902dc) wml_tabs_3_passive_pane

0x4d43,	// (0x000902ef) wml_tabs_3_passive_pane_cp_ParamLimits

0x4d43,	// (0x000902ef) wml_tabs_3_passive_pane_cp

0x4d5a,	// (0x00090306) tabs_4_active_pane

0x4d62,	// (0x0009030e) tabs_4_passive_pane

0x4d6c,	// (0x00090318) tabs_4_passive_pane_cp

0x4d74,	// (0x00090320) tabs_4_passive_pane_cp2

0x3e3e,	// (0x0008f3ea) aid_height_text

0x359d,	// (0x0008eb49) mup_volume_cont_pane_ParamLimits

0x359d,	// (0x0008eb49) mup_volume_cont_pane

0x1222,	// (0x0008c7ce) aid_size_cell_pinb

0x122c,	// (0x0008c7d8) aid_size_list_pinb

0x4c5e,	// (0x0009020a) mup2_volume_cont_pane_ParamLimits

0x4c5e,	// (0x0009020a) mup2_volume_cont_pane

0x9e72,	// (0x0009541e) mup2_volume_cont_pane_g1_ParamLimits

0x9e72,	// (0x0009541e) mup2_volume_cont_pane_g1

0x0ed4,	// (0x0008c480) aid_size_cell_touch_ParamLimits

0x0ed4,	// (0x0008c480) aid_size_cell_touch

0x1111,	// (0x0008c6bd) touch_pane_ParamLimits

0x1111,	// (0x0008c6bd) touch_pane

0x96d4,	// (0x00094c80) main_rss2_pane

0xc91a,	// (0x00097ec6) listscroll_rss2_pane

0xc923,	// (0x00097ecf) rss2_navigation_pane

0xc92b,	// (0x00097ed7) list_rss2_pane

0xb0f5,	// (0x000966a1) scroll_pane_cp22

0xc933,	// (0x00097edf) rss2_navigation_pane_g1

0xc93c,	// (0x00097ee8) rss2_navigation_pane_g2

0xc944,	// (0x00097ef0) rss2_navigation_pane_g3

0x0002,

0xf68c,	// (0x0009ac38) rss2_navigation_pane_g

0xc94c,	// (0x00097ef8) rss2_navigation_pane_t1

0x4d7e,	// (0x0009032a) rss2_list_single_pane_ParamLimits

0x4d7e,	// (0x0009032a) rss2_list_single_pane

0xc95a,	// (0x00097f06) rss2_list_single_pane_t2

0xc968,	// (0x00097f14) rss2_list_single_pane_t3_ParamLimits

0xc968,	// (0x00097f14) rss2_list_single_pane_t3

0xc985,	// (0x00097f31) rss2_list_single_pane_t4

0x2fda,	// (0x0008e586) smil_status_pane_g1

0xa480,	// (0x00095a2c) main_image2_pane_ParamLimits

0xa480,	// (0x00095a2c) main_image2_pane

0x4820,	// (0x0008fdcc) main_camera2_pane_g9_ParamLimits

0x4820,	// (0x0008fdcc) main_camera2_pane_g9

0x494e,	// (0x0008fefa) main_camera2_pane_t5_ParamLimits

0x494e,	// (0x0008fefa) main_camera2_pane_t5

0x9e42,	// (0x000953ee) main_camera2_pane_t6_ParamLimits

0x9e42,	// (0x000953ee) main_camera2_pane_t6

0x4d95,	// (0x00090341) main_image2_pane_g1_ParamLimits

0x4d95,	// (0x00090341) main_image2_pane_g1

0x3b78,	// (0x0008f124) smil2_video_pane_ParamLimits

0x3b78,	// (0x0008f124) smil2_video_pane

0x0f0c,	// (0x0008c4b8) aid_zoom_text_primary_cp

0x9732,	// (0x00094cde) popup_preview_fixed_window

0xa9b5,	// (0x00095f61) im_reading_pane_g1

0x4697,	// (0x0008fc43) cams2_bc_adjust_pane_cp_ParamLimits

0x4697,	// (0x0008fc43) cams2_bc_adjust_pane_cp

0x497d,	// (0x0008ff29) cams2_bc_adjust_pane_ParamLimits

0x497d,	// (0x0008ff29) cams2_bc_adjust_pane

0x9eab,	// (0x00095457) cams2_bc_adjust_pane_g1

0x9eb3,	// (0x0009545f) cams2_slider_pane

0x9ebc,	// (0x00095468) cams2_slider_pane_g1

0x9ec5,	// (0x00095471) cams2_slider_pane_g2

0x0006,

0xf693,	// (0x0009ac3f) cams2_slider_pane_g

0x1304,	// (0x0008c8b0) calc_display_pane_ParamLimits

0x132c,	// (0x0008c8d8) calc_paper_pane_ParamLimits

0x134f,	// (0x0008c8fb) grid_calc_pane_ParamLimits

0x9d5b,	// (0x00095307) popup_clock_digital_window_t1_ParamLimits

0xb622,	// (0x00096bce) main_image_pane_t1

0x12e6,	// (0x0008c892) aid_size_cell_calc_ParamLimits

0x12e6,	// (0x0008c892) aid_size_cell_calc

0x4169,	// (0x0008f715) popup_blid_sat_info2_window_ParamLimits

0x4169,	// (0x0008f715) popup_blid_sat_info2_window

0xc99b,	// (0x00097f47) aid_size_cell_blid

0xc9a3,	// (0x00097f4f) bg_popup_window_pane_cp07

0xc9c6,	// (0x00097f72) grid_popup_blid_pane

0xc9d0,	// (0x00097f7c) heading_pane_cp05_ParamLimits

0xc9d0,	// (0x00097f7c) heading_pane_cp05

0xca9a,	// (0x00098046) cell_popup_blid_pane_ParamLimits

0xca9a,	// (0x00098046) cell_popup_blid_pane

0xcac0,	// (0x0009806c) cell_popup_blid_pane_g1

0xcac8,	// (0x00098074) cell_popup_blid_pane_t1

0x4c2e,	// (0x000901da) mup2_indicator_pane_ParamLimits

0x4c2e,	// (0x000901da) mup2_indicator_pane

0xb391,	// (0x0009693d) mup2_visualizer_osc_pane

0xc870,	// (0x00097e1c) mup2_visualizer_spec_pane_ParamLimits

0xc870,	// (0x00097e1c) mup2_visualizer_spec_pane

0x4dab,	// (0x00090357) mup2_spec_half_pane

0x4db4,	// (0x00090360) mup2_spec_half_pane_cp

0x4dbc,	// (0x00090368) mup2_spec_bar_pane_ParamLimits

0x4dbc,	// (0x00090368) mup2_spec_bar_pane

0xc811,	// (0x00097dbd) mup2_spec_bar_pane_g1

0xc81b,	// (0x00097dc7) mup2_spec_bar_pane_g2

0x0001,

0xf606,	// (0x0009abb2) mup2_spec_bar_pane_g

0x4ddc,	// (0x00090388) mup2_osc_middle_pane

0xc82d,	// (0x00097dd9) mup2_visualizer_osc_pane_g1

0x975c,	// (0x00094d08) popup_number_entry_window_t1_ParamLimits

0x976f,	// (0x00094d1b) popup_number_entry_window_t2_ParamLimits

0x9781,	// (0x00094d2d) popup_number_entry_window_t3_ParamLimits

0x1163,	// (0x0008c70f) popup_number_entry_window_t5_ParamLimits

0x1163,	// (0x0008c70f) popup_number_entry_window_t5

0xf0c6,	// (0x0009a672) popup_number_entry_window_t_ParamLimits

0x9793,	// (0x00094d3f) text_title_cp2_ParamLimits

0x9d9a,	// (0x00095346) aid_hotspot_pointer_text2_pane

0x9dc0,	// (0x0009536c) main_viewer_pane_g9_ParamLimits

0x9dc0,	// (0x0009536c) main_viewer_pane_g9

0xabee,	// (0x0009619a) cale_month_pane_t1_ParamLimits

0xac2b,	// (0x000961d7) bg_cale_pane_ParamLimits

0xac43,	// (0x000961ef) list_cale_pane_ParamLimits

0xac54,	// (0x00096200) listscroll_cale_day_pane_t1

0xac66,	// (0x00096212) scroll_pane_cp09_ParamLimits

0x35d3,	// (0x0008eb7f) main_mup_eq_pane_t1_ParamLimits

0x35d3,	// (0x0008eb7f) main_mup_eq_pane_t1

0x35ed,	// (0x0008eb99) main_mup_eq_pane_t2_ParamLimits

0x35ed,	// (0x0008eb99) main_mup_eq_pane_t2

0x3607,	// (0x0008ebb3) main_mup_eq_pane_t3_ParamLimits

0x3607,	// (0x0008ebb3) main_mup_eq_pane_t3

0x3623,	// (0x0008ebcf) main_mup_eq_pane_t4_ParamLimits

0x3623,	// (0x0008ebcf) main_mup_eq_pane_t4

0x363f,	// (0x0008ebeb) main_mup_eq_pane_t5_ParamLimits

0x363f,	// (0x0008ebeb) main_mup_eq_pane_t5

0x365b,	// (0x0008ec07) main_mup_eq_pane_t6_ParamLimits

0x365b,	// (0x0008ec07) main_mup_eq_pane_t6

0x366f,	// (0x0008ec1b) main_mup_eq_pane_t7_ParamLimits

0x366f,	// (0x0008ec1b) main_mup_eq_pane_t7

0x3683,	// (0x0008ec2f) main_mup_eq_pane_t8_ParamLimits

0x3683,	// (0x0008ec2f) main_mup_eq_pane_t8

0x3697,	// (0x0008ec43) main_mup_eq_pane_t9_ParamLimits

0x3697,	// (0x0008ec43) main_mup_eq_pane_t9

0x36b1,	// (0x0008ec5d) main_mup_eq_pane_t10_ParamLimits

0x36b1,	// (0x0008ec5d) main_mup_eq_pane_t10

0x0009,

0xf455,	// (0x0009aa01) main_mup_eq_pane_t_ParamLimits

0xf455,	// (0x0009aa01) main_mup_eq_pane_t

0x3760,	// (0x0008ed0c) mup_equalizer_pane_cp5_ParamLimits

0x3774,	// (0x0008ed20) mup_equalizer_pane_cp6_ParamLimits

0x3788,	// (0x0008ed34) mup_equalizer_pane_cp7_ParamLimits

0x96d4,	// (0x00094c80) main_gallery_pane

0xc836,	// (0x00097de2) smil2_volume_pane

0xc83e,	// (0x00097dea) smil_status_volume_pane_g1_ParamLimits

0xc851,	// (0x00097dfd) smil_status_volume_pane_g2_ParamLimits

0x9e20,	// (0x000953cc) smil_status_volume_pane_g3_ParamLimits

0xf60b,	// (0x0009abb7) smil_status_volume_pane_g_ParamLimits

0xc9a3,	// (0x00097f4f) bg_popup_window_pane_cp07_ParamLimits

0xc9b1,	// (0x00097f5d) blid_firmament_pane

0x4de5,	// (0x00090391) aid_size_cell_gallery_ParamLimits

0x4de5,	// (0x00090391) aid_size_cell_gallery

0x4dfb,	// (0x000903a7) grid_gallery_pane_ParamLimits

0x4dfb,	// (0x000903a7) grid_gallery_pane

0x4e14,	// (0x000903c0) cell_gallery_pane_ParamLimits

0x4e14,	// (0x000903c0) cell_gallery_pane

0xcad6,	// (0x00098082) bg_cell_gallery_focus_pane_ParamLimits

0xcad6,	// (0x00098082) bg_cell_gallery_focus_pane

0xcae8,	// (0x00098094) cell_gallery_pane_g1_ParamLimits

0xcae8,	// (0x00098094) cell_gallery_pane_g1

0x4e5d,	// (0x00090409) cell_gallery_pane_g2_ParamLimits

0x4e5d,	// (0x00090409) cell_gallery_pane_g2

0x4e6a,	// (0x00090416) cell_gallery_pane_g3_ParamLimits

0x4e6a,	// (0x00090416) cell_gallery_pane_g3

0xcaf4,	// (0x000980a0) cell_gallery_pane_g4_ParamLimits

0xcaf4,	// (0x000980a0) cell_gallery_pane_g4

0x0003,

0xf6b9,	// (0x0009ac65) cell_gallery_pane_g_ParamLimits

0xf6b9,	// (0x0009ac65) cell_gallery_pane_g

0xcb00,	// (0x000980ac) bg_cell_gallery_focus_pane_g1

0xcb08,	// (0x000980b4) bg_cell_gallery_focus_pane_g2

0xcb10,	// (0x000980bc) bg_cell_gallery_focus_pane_g3

0xcb18,	// (0x000980c4) bg_cell_gallery_focus_pane_g4

0xcb20,	// (0x000980cc) bg_cell_gallery_focus_pane_g5

0xcb28,	// (0x000980d4) bg_cell_gallery_focus_pane_g6

0xcb30,	// (0x000980dc) bg_cell_gallery_focus_pane_g7

0xcb38,	// (0x000980e4) bg_cell_gallery_focus_pane_g8

0x0007,

0xf6c2,	// (0x0009ac6e) bg_cell_gallery_focus_pane_g

0xcb40,	// (0x000980ec) aid_firma_cardinal

0xcb54,	// (0x00098100) blid_firmament_pane_t1

0xcb6b,	// (0x00098117) blid_firmament_pane_t2

0xcb82,	// (0x0009812e) blid_firmament_pane_t3

0xcb99,	// (0x00098145) blid_firmament_pane_t4

0x0003,

0xf6d3,	// (0x0009ac7f) blid_firmament_pane_t

0xcbb0,	// (0x0009815c) blid_sat_info_pane

0xcbc0,	// (0x0009816c) blid_sat_info_pane_g1

0xcbc0,	// (0x0009816c) blid_sat_info_pane_g2

0x0001,

0xf6dc,	// (0x0009ac88) blid_sat_info_pane_g

0xcbca,	// (0x00098176) blid_sat_info_pane_t1

0xcbd8,	// (0x00098184) smil2_volume_content_pane

0xcbe1,	// (0x0009818d) smil2_volume_pane_g1

0xa776,	// (0x00095d22) smil2_volume_content_pane_g1

0xcbe9,	// (0x00098195) smil2_volume_content_pane_g2

0xcbf2,	// (0x0009819e) smil2_volume_content_pane_g3

0xcbfb,	// (0x000981a7) smil2_volume_content_pane_g4

0xcc04,	// (0x000981b0) smil2_volume_content_pane_g5

0xcc0d,	// (0x000981b9) smil2_volume_content_pane_g6

0xcc16,	// (0x000981c2) smil2_volume_content_pane_g7

0xcc1f,	// (0x000981cb) smil2_volume_content_pane_g8

0xcc28,	// (0x000981d4) smil2_volume_content_pane_g9

0xcc31,	// (0x000981dd) smil2_volume_content_pane_g10

0x0009,

0xf6e1,	// (0x0009ac8d) smil2_volume_content_pane_g

0x18ee,	// (0x0008ce9a) cale_week_day_heading_pane_t1_ParamLimits

0x1938,	// (0x0008cee4) cale_week_day_heading_pane_t2_ParamLimits

0x1987,	// (0x0008cf33) cale_week_day_heading_pane_t3_ParamLimits

0x19d6,	// (0x0008cf82) cale_week_day_heading_pane_t4_ParamLimits

0x1a25,	// (0x0008cfd1) cale_week_day_heading_pane_t5_ParamLimits

0x1a7c,	// (0x0008d028) cale_week_day_heading_pane_t6_ParamLimits

0x1ad3,	// (0x0008d07f) cale_week_day_heading_pane_t7_ParamLimits

0xf1cd,	// (0x0009a779) cale_week_day_heading_pane_t_ParamLimits

0xa872,	// (0x00095e1e) bg_cale_side_pane_ParamLimits

0x1b1d,	// (0x0008d0c9) cale_week_time_pane_t1_ParamLimits

0x1b37,	// (0x0008d0e3) cale_week_time_pane_t2_ParamLimits

0x1b51,	// (0x0008d0fd) cale_week_time_pane_t3_ParamLimits

0x1b6b,	// (0x0008d117) cale_week_time_pane_t4_ParamLimits

0x1b85,	// (0x0008d131) cale_week_time_pane_t5_ParamLimits

0x1b9f,	// (0x0008d14b) cale_week_time_pane_t6_ParamLimits

0x1bb9,	// (0x0008d165) cale_week_time_pane_t7_ParamLimits

0x1bd9,	// (0x0008d185) cale_week_time_pane_t8_ParamLimits

0xf1dc,	// (0x0009a788) cale_week_time_pane_t_ParamLimits

0x1bf9,	// (0x0008d1a5) cell_cale_week_pane_g2_ParamLimits

0xa872,	// (0x00095e1e) bg_cale_side_pane_cp01_ParamLimits

0x2deb,	// (0x0008e397) cale_month_week_pane_t1_ParamLimits

0x2e04,	// (0x0008e3b0) cale_month_week_pane_t2_ParamLimits

0x2e1d,	// (0x0008e3c9) cale_month_week_pane_t3_ParamLimits

0x2e36,	// (0x0008e3e2) cale_month_week_pane_t4_ParamLimits

0x2e4f,	// (0x0008e3fb) cale_month_week_pane_t5_ParamLimits

0x2e68,	// (0x0008e414) cale_month_week_pane_t6_ParamLimits

0xf2b5,	// (0x0009a861) cale_month_week_pane_t_ParamLimits

0x9cd7,	// (0x00095283) cell_cale_month_pane_g1_ParamLimits

0x96d4,	// (0x00094c80) main_cale_event_viewer_pane

0x96d4,	// (0x00094c80) listscroll_cale_event_viewer_pane

0xcc3a,	// (0x000981e6) list_cale_ev_pane

0xcc42,	// (0x000981ee) scroll_pane_cp023

0xcc4e,	// (0x000981fa) field_cale_ev_pane_ParamLimits

0xcc4e,	// (0x000981fa) field_cale_ev_pane

0xcc6a,	// (0x00098216) field_cale_ev_content_pane_ParamLimits

0xcc6a,	// (0x00098216) field_cale_ev_content_pane

0xcc76,	// (0x00098222) field_cale_ev_pane_g1_ParamLimits

0xcc76,	// (0x00098222) field_cale_ev_pane_g1

0xcc82,	// (0x0009822e) field_cale_ev_pane_g2_ParamLimits

0xcc82,	// (0x0009822e) field_cale_ev_pane_g2

0xcc9a,	// (0x00098246) field_cale_ev_pane_g3_ParamLimits

0xcc9a,	// (0x00098246) field_cale_ev_pane_g3

0x0002,

0xf6f6,	// (0x0009aca2) field_cale_ev_pane_g_ParamLimits

0xf6f6,	// (0x0009aca2) field_cale_ev_pane_g

0xccb2,	// (0x0009825e) field_cale_ev_pane_t1_ParamLimits

0xccb2,	// (0x0009825e) field_cale_ev_pane_t1

0xccc9,	// (0x00098275) field_cale_ev_content_pane_t1_ParamLimits

0xccc9,	// (0x00098275) field_cale_ev_content_pane_t1

0xb508,	// (0x00096ab4) bg_button_pane_cp01

0x160d,	// (0x0008cbb9) listscroll_cale_week_pane_ParamLimits

0xa81c,	// (0x00095dc8) popup_toolbar_window_cp01

0xa843,	// (0x00095def) listscroll_cale_week_pane_t1_ParamLimits

0x160d,	// (0x0008cbb9) listscroll_cale_day_pane_ParamLimits

0xa81c,	// (0x00095dc8) popup_toolbar_window_cp02

0xac54,	// (0x00096200) listscroll_cale_day_pane_t1_ParamLimits

0x160d,	// (0x0008cbb9) main_cale_month_pane_ParamLimits

0x9e0b,	// (0x000953b7) popup_toolbar_window_cp03_ParamLimits

0x9e0b,	// (0x000953b7) popup_toolbar_window_cp03

0x3a3c,	// (0x0008efe8) main_image_pane_g2_ParamLimits

0x3a3c,	// (0x0008efe8) main_image_pane_g2

0x3a4d,	// (0x0008eff9) main_image_pane_g3_ParamLimits

0x3a4d,	// (0x0008eff9) main_image_pane_g3

0x0002,

0xf4e7,	// (0x0009aa93) main_image_pane_g_ParamLimits

0xf4e7,	// (0x0009aa93) main_image_pane_g

0xb622,	// (0x00096bce) main_image_pane_t1_ParamLimits

0x3a5e,	// (0x0008f00a) main_image_pane_t2_ParamLimits

0x3a5e,	// (0x0008f00a) main_image_pane_t2

0x3a70,	// (0x0008f01c) main_image_pane_t3_ParamLimits

0x3a70,	// (0x0008f01c) main_image_pane_t3

0x3a98,	// (0x0008f044) main_image_pane_t4_ParamLimits

0x3a98,	// (0x0008f044) main_image_pane_t4

0x0003,

0xf4ee,	// (0x0009aa9a) main_image_pane_t_ParamLimits

0xf4ee,	// (0x0009aa9a) main_image_pane_t

0x3ab8,	// (0x0008f064) popup_image_details_window_cp01

0x3ac2,	// (0x0008f06e) popup_toobar_trans_pane_cp01_ParamLimits

0x3ac2,	// (0x0008f06e) popup_toobar_trans_pane_cp01

0x4240,	// (0x0008f7ec) popup_image_details_window_ParamLimits

0x4240,	// (0x0008f7ec) popup_image_details_window

0x9dde,	// (0x0009538a) popup_image_focus_window

0x4651,	// (0x0008fbfd) camera2_autofocus_pane_ParamLimits

0x4651,	// (0x0008fbfd) camera2_autofocus_pane

0x96d4,	// (0x00094c80) bg_popup_sub_pane_cp06

0xcce6,	// (0x00098292) popup_image_focus_window_g1

0xccee,	// (0x0009829a) popup_image_focus_window_g2

0xccf6,	// (0x000982a2) popup_image_focus_window_g3

0xccfe,	// (0x000982aa) popup_image_focus_window_g4

0x0003,

0xf6fd,	// (0x0009aca9) popup_image_focus_window_g

0xcd06,	// (0x000982b2) popup_image_focus_window_t1

0xcd14,	// (0x000982c0) popup_image_focus_window_t2

0xcd24,	// (0x000982d0) popup_image_focus_window_t3

0x0002,

0xf706,	// (0x0009acb2) popup_image_focus_window_t

0xcd32,	// (0x000982de) camera2_autofocus_pane_g1

0xa480,	// (0x00095a2c) bg_tb_trans_pane_cp01

0xcd40,	// (0x000982ec) popup_image_details_window_g1

0xcd53,	// (0x000982ff) popup_image_details_window_g2

0x0002,

0xf718,	// (0x0009acc4) popup_image_details_window_g

0xcd7c,	// (0x00098328) popup_image_details_window_t1

0xcd8e,	// (0x0009833a) popup_image_details_window_t2

0xcda7,	// (0x00098353) popup_image_details_window_t3

0xcdbb,	// (0x00098367) popup_image_details_window_t4

0xcdd6,	// (0x00098382) popup_image_details_window_t5

0x0004,

0xf71f,	// (0x0009accb) popup_image_details_window_t

0xa6e1,	// (0x00095c8d) bg_calc_paper_pane_ParamLimits

0x96d4,	// (0x00094c80) grid_highlight_pane_cp013

0x9c2f,	// (0x000951db) list_calc_pane_ParamLimits

0x9c41,	// (0x000951ed) scroll_pane_cp024

0xa6f5,	// (0x00095ca1) bg_calc_display_pane_ParamLimits

0x144d,	// (0x0008c9f9) calc_display_pane_t1_ParamLimits

0x145f,	// (0x0008ca0b) calc_display_pane_t2_ParamLimits

0x9c49,	// (0x000951f5) calc_display_pane_t3_ParamLimits

0xf14d,	// (0x0009a6f9) calc_display_pane_t_ParamLimits

0x1524,	// (0x0008cad0) cell_calc_pane_g2

0x0001,

0xf16a,	// (0x0009a716) cell_calc_pane_g

0x152d,	// (0x0008cad9) cell_calc_pane_t1

0xa754,	// (0x00095d00) grid_highlight_pane_cp02_ParamLimits

0xa76a,	// (0x00095d16) toolbar_button_pane_cp01_ParamLimits

0xa76a,	// (0x00095d16) toolbar_button_pane_cp01

0xb667,	// (0x00096c13) temp_image_control_pane_ParamLimits

0xb667,	// (0x00096c13) temp_image_control_pane

0xa480,	// (0x00095a2c) main_mp3_pane

0xcdf0,	// (0x0009839c) temp_image_control_pane_g1_ParamLimits

0xcdf0,	// (0x0009839c) temp_image_control_pane_g1

0xcdfe,	// (0x000983aa) temp_image_control_pane_g2_ParamLimits

0xcdfe,	// (0x000983aa) temp_image_control_pane_g2

0xce10,	// (0x000983bc) temp_image_control_pane_g3_ParamLimits

0xce10,	// (0x000983bc) temp_image_control_pane_g3

0x4ea7,	// (0x00090453) temp_image_control_pane_g4_ParamLimits

0x4ea7,	// (0x00090453) temp_image_control_pane_g4

0x0003,

0xf72a,	// (0x0009acd6) temp_image_control_pane_g_ParamLimits

0xf72a,	// (0x0009acd6) temp_image_control_pane_g

0xcdf0,	// (0x0009839c) main_mp3_pane_g1

0x4eba,	// (0x00090466) main_mp3_pane_g2

0x0007,

0xf733,	// (0x0009acdf) main_mp3_pane_g

0xce53,	// (0x000983ff) main_mp3_pane_t1

0xa8c4,	// (0x00095e70) main_camera_pane_g8_ParamLimits

0xa8c4,	// (0x00095e70) main_camera_pane_g8

0x1f21,	// (0x0008d4cd) main_video_pane_g7_ParamLimits

0x1f21,	// (0x0008d4cd) main_video_pane_g7

0x9e60,	// (0x0009540c) main_camera2_pane_t7_ParamLimits

0x9e60,	// (0x0009540c) main_camera2_pane_t7

0xaa0c,	// (0x00095fb8) scroll_pane_cp025_ParamLimits

0xaa0c,	// (0x00095fb8) scroll_pane_cp025

0xaa20,	// (0x00095fcc) scroll_pane_cp026_ParamLimits

0xaa20,	// (0x00095fcc) scroll_pane_cp026

0xaa2f,	// (0x00095fdb) wml_content_pane_ParamLimits

0x96d4,	// (0x00094c80) main_touch_calib_pane

0x4f90,	// (0x0009053c) main_touch_calib_pane_g1

0x4fa2,	// (0x0009054e) main_touch_calib_pane_g2

0x4fb4,	// (0x00090560) main_touch_calib_pane_g3

0x4fc6,	// (0x00090572) main_touch_calib_pane_g4

0x0003,

0xf751,	// (0x0009acfd) main_touch_calib_pane_g

0x4fd8,	// (0x00090584) main_touch_calib_pane_t1

0x4ff2,	// (0x0009059e) main_touch_calib_pane_t2

0x0004,

0xf75a,	// (0x0009ad06) main_touch_calib_pane_t

0xb22c,	// (0x000967d8) mup_progress_pane_cp02

0xb261,	// (0x0009680d) navi_pane_g1

0xb31c,	// (0x000968c8) navi_pane_mp_t3

0xa480,	// (0x00095a2c) main_mp3_pane_ParamLimits

0x43bd,	// (0x0008f969) navi_pane_ParamLimits

0xcdf0,	// (0x0009839c) main_mp3_pane_g1_ParamLimits

0x4eba,	// (0x00090466) main_mp3_pane_g2_ParamLimits

0x4ec8,	// (0x00090474) main_mp3_pane_g3_ParamLimits

0x4ec8,	// (0x00090474) main_mp3_pane_g3

0x4ed6,	// (0x00090482) main_mp3_pane_g4_ParamLimits

0x4ed6,	// (0x00090482) main_mp3_pane_g4

0xce20,	// (0x000983cc) main_mp3_pane_g5_ParamLimits

0xce20,	// (0x000983cc) main_mp3_pane_g5

0xce2e,	// (0x000983da) main_mp3_pane_g6_ParamLimits

0xce2e,	// (0x000983da) main_mp3_pane_g6

0xce3b,	// (0x000983e7) main_mp3_pane_g7_ParamLimits

0xce3b,	// (0x000983e7) main_mp3_pane_g7

0xce47,	// (0x000983f3) main_mp3_pane_g8_ParamLimits

0xce47,	// (0x000983f3) main_mp3_pane_g8

0xf733,	// (0x0009acdf) main_mp3_pane_g_ParamLimits

0x4ee4,	// (0x00090490) main_mp3_pane_t2

0x4ef2,	// (0x0009049e) main_mp3_pane_t3

0xce61,	// (0x0009840d) main_mp3_pane_t4

0xce6f,	// (0x0009841b) main_mp3_pane_t5

0x0005,

0xf744,	// (0x0009acf0) main_mp3_pane_t

0xce7d,	// (0x00098429) mup_progress_pane_cp01

0x0f0c,	// (0x0008c4b8) aid_zoom_text_secondary2

0xcc3a,	// (0x000981e6) list_cale_ev2_pane

0xcc42,	// (0x000981ee) scroll_pane_cp023_ParamLimits

0x5048,	// (0x000905f4) field_cale_ev2_pane_ParamLimits

0x5048,	// (0x000905f4) field_cale_ev2_pane

0x9edf,	// (0x0009548b) field_cale_ev2_pane_g1_ParamLimits

0x9edf,	// (0x0009548b) field_cale_ev2_pane_g1

0x9eeb,	// (0x00095497) field_cale_ev2_pane_g2_ParamLimits

0x9eeb,	// (0x00095497) field_cale_ev2_pane_g2

0x9f03,	// (0x000954af) field_cale_ev2_pane_g3_ParamLimits

0x9f03,	// (0x000954af) field_cale_ev2_pane_g3

0x0003,

0xf765,	// (0x0009ad11) field_cale_ev2_pane_g_ParamLimits

0xf765,	// (0x0009ad11) field_cale_ev2_pane_g

0x506a,	// (0x00090616) field_cale_ev2_pane_t1_ParamLimits

0x506a,	// (0x00090616) field_cale_ev2_pane_t1

0x5081,	// (0x0009062d) field_cale_ev2_pane_t2_ParamLimits

0x5081,	// (0x0009062d) field_cale_ev2_pane_t2

0x0001,

0xf76e,	// (0x0009ad1a) field_cale_ev2_pane_t_ParamLimits

0xf76e,	// (0x0009ad1a) field_cale_ev2_pane_t

0x38ef,	// (0x0008ee9b) main_postcard_pane_g5_ParamLimits

0x38ef,	// (0x0008ee9b) main_postcard_pane_g5

0x3905,	// (0x0008eeb1) main_postcard_pane_g6_ParamLimits

0x3905,	// (0x0008eeb1) main_postcard_pane_g6

0x1cdb,	// (0x0008d287) camera2_autofocus_pane_cp_ParamLimits

0x1cdb,	// (0x0008d287) camera2_autofocus_pane_cp

0xa480,	// (0x00095a2c) main_mup3_pane

0x50b6,	// (0x00090662) main_mup3_pane_g1_ParamLimits

0x50b6,	// (0x00090662) main_mup3_pane_g1

0x50d8,	// (0x00090684) main_mup3_pane_g2_ParamLimits

0x50d8,	// (0x00090684) main_mup3_pane_g2

0x515a,	// (0x00090706) main_mup3_pane_g3_ParamLimits

0x515a,	// (0x00090706) main_mup3_pane_g3

0x51a0,	// (0x0009074c) main_mup3_pane_g4_ParamLimits

0x51a0,	// (0x0009074c) main_mup3_pane_g4

0x51e6,	// (0x00090792) main_mup3_pane_g5_ParamLimits

0x51e6,	// (0x00090792) main_mup3_pane_g5

0x522e,	// (0x000907da) main_mup3_pane_g6_ParamLimits

0x522e,	// (0x000907da) main_mup3_pane_g6

0xce85,	// (0x00098431) main_mup3_pane_g7_ParamLimits

0xce85,	// (0x00098431) main_mup3_pane_g7

0x0007,

0xf77e,	// (0x0009ad2a) main_mup3_pane_g_ParamLimits

0xf77e,	// (0x0009ad2a) main_mup3_pane_g

0x52ac,	// (0x00090858) main_mup3_pane_t1_ParamLimits

0x52ac,	// (0x00090858) main_mup3_pane_t1

0x5320,	// (0x000908cc) main_mup3_pane_t2_ParamLimits

0x5320,	// (0x000908cc) main_mup3_pane_t2

0x53f4,	// (0x000909a0) main_mup3_pane_t4_ParamLimits

0x53f4,	// (0x000909a0) main_mup3_pane_t4

0x544a,	// (0x000909f6) main_mup3_pane_t5_ParamLimits

0x544a,	// (0x000909f6) main_mup3_pane_t5

0x5506,	// (0x00090ab2) main_mup3_pane_t6_ParamLimits

0x5506,	// (0x00090ab2) main_mup3_pane_t6

0x0005,

0xf78f,	// (0x0009ad3b) main_mup3_pane_t_ParamLimits

0xf78f,	// (0x0009ad3b) main_mup3_pane_t

0x55be,	// (0x00090b6a) mup3_progress_pane_ParamLimits

0x55be,	// (0x00090b6a) mup3_progress_pane

0x564a,	// (0x00090bf6) popup_mup3_control_window_ParamLimits

0x564a,	// (0x00090bf6) popup_mup3_control_window

0xce93,	// (0x0009843f) popup_mup3_text_window

0x567c,	// (0x00090c28) mup3_progress_pane_t1

0x569b,	// (0x00090c47) mup3_progress_pane_t2

0xce9b,	// (0x00098447) mup3_progress_pane_t3

0x0002,

0xf79c,	// (0x0009ad48) mup3_progress_pane_t

0xceb8,	// (0x00098464) mup_progress_pane_cp03

0x96d4,	// (0x00094c80) bg_tb_trans_pane_cp04

0x56ba,	// (0x00090c66) mup3_volume_pane

0x56c2,	// (0x00090c6e) popup_mup3_control_window_g1

0x56cb,	// (0x00090c77) mup3_volume_pane_g1

0x56d4,	// (0x00090c80) mup3_volume_pane_g2

0x56dd,	// (0x00090c89) mup3_volume_pane_g3

0x0002,

0xf7a3,	// (0x0009ad4f) mup3_volume_pane_g

0x96d4,	// (0x00094c80) bg_tb_trans_pane_cp03

0xcec8,	// (0x00098474) popup_mup3_text_window_g1

0xced0,	// (0x0009847c) popup_mup3_text_window_t1

0xa73d,	// (0x00095ce9) list_calc_item_pane_g1_ParamLimits

0xc911,	// (0x00097ebd) mup_volume_pane_cp_g1

0x500c,	// (0x000905b8) main_touch_calib_pane_t3

0x5020,	// (0x000905cc) main_touch_calib_pane_t4

0x5034,	// (0x000905e0) main_touch_calib_pane_t5

0x96de,	// (0x00094c8a) aid_cell_size_toolbar2

0x96e6,	// (0x00094c92) aid_popup3_width_pane

0x96f2,	// (0x00094c9e) aid_zoom_text_msg_primary

0x1cb2,	// (0x0008d25e) vorec_t7

0xa701,	// (0x00095cad) bg_calc_paper_pane_g1_ParamLimits

0xa70d,	// (0x00095cb9) bg_calc_paper_pane_g2_ParamLimits

0xa719,	// (0x00095cc5) bg_calc_paper_pane_g3_ParamLimits

0xa725,	// (0x00095cd1) bg_calc_paper_pane_g4_ParamLimits

0xa731,	// (0x00095cdd) bg_calc_paper_pane_g5_ParamLimits

0x14a8,	// (0x0008ca54) bg_calc_paper_pane_g6_ParamLimits

0x14b9,	// (0x0008ca65) bg_calc_paper_pane_g7_ParamLimits

0x14ca,	// (0x0008ca76) bg_calc_paper_pane_g8_ParamLimits

0xf154,	// (0x0009a700) bg_calc_paper_pane_g_ParamLimits

0x14dd,	// (0x0008ca89) calc_bg_paper_pane_g9_ParamLimits

0x1e33,	// (0x0008d3df) image_qvga_pane_ParamLimits

0x1e33,	// (0x0008d3df) image_qvga_pane

0xa611,	// (0x00095bbd) bg_popup_sub_pane_cp04_ParamLimits

0xb59e,	// (0x00096b4a) popup_mup_playback_window_g1_ParamLimits

0xb5aa,	// (0x00096b56) popup_mup_playback_window_t1_ParamLimits

0xb5bf,	// (0x00096b6b) popup_mup_playback_window_t2_ParamLimits

0xf4e2,	// (0x0009aa8e) popup_mup_playback_window_t_ParamLimits

0x4b48,	// (0x000900f4) main_mup2_pane_g3_ParamLimits

0x4b48,	// (0x000900f4) main_mup2_pane_g3

0x2130,	// (0x0008d6dc) popup_toolbar_window_cp04

0xb9b4,	// (0x00096f60) popup_call2_audio_second_window_g3_ParamLimits

0xb9b4,	// (0x00096f60) popup_call2_audio_second_window_g3

0xbdbe,	// (0x0009736a) popup_call2_audio_first_window_g4_ParamLimits

0xbdbe,	// (0x0009736a) popup_call2_audio_first_window_g4

0xc449,	// (0x000979f5) popup_call2_audio_in_window_g4_ParamLimits

0xc449,	// (0x000979f5) popup_call2_audio_in_window_g4

0x3a1e,	// (0x0008efca) aid_area_sk_bg_cut_ParamLimits

0x3a1e,	// (0x0008efca) aid_area_sk_bg_cut

0xb5d4,	// (0x00096b80) aid_area_sk_bg_cut_2_ParamLimits

0xb5d4,	// (0x00096b80) aid_area_sk_bg_cut_2

0x4e4d,	// (0x000903f9) aid_placing_details_win

0x4e55,	// (0x00090401) aid_placing_details_win_2

0xcd32,	// (0x000982de) camera2_autofocus_pane_g1_ParamLimits

0x10aa,	// (0x0008c656) popup_fixed_preview_cale_window_ParamLimits

0x10aa,	// (0x0008c656) popup_fixed_preview_cale_window

0xb3a2,	// (0x0009694e) navi_slider_pane_g3

0xb3ab,	// (0x00096957) navi_slider_pane_g4

0xb3b4,	// (0x00096960) navi_slider_pane_g5

0xb3a2,	// (0x0009694e) navi_slider_pane_g6

0x9d81,	// (0x0009532d) navi_slider_pane_g7

0xb4d5,	// (0x00096a81) mup_scale_pane_g3

0xb4de,	// (0x00096a8a) mup_scale_pane_g4

0xb4e7,	// (0x00096a93) mup_scale_pane_g5

0x379c,	// (0x0008ed48) mup_scale_pane_g6

0x37a5,	// (0x0008ed51) mup_scale_pane_g7

0xb3a2,	// (0x0009694e) cams2_slider_pane_g3

0xc993,	// (0x00097f3f) cams2_slider_pane_g4

0x9ece,	// (0x0009547a) cams2_slider_pane_g5

0xb3a2,	// (0x0009694e) cams2_slider_pane_g6

0x9ed6,	// (0x00095482) cams2_slider_pane_g7

0xcbc0,	// (0x0009816c) camera2_autofocus_pane_cp_g1

0xc7aa,	// (0x00097d56) bg_popup_preview_window_pane_cp02_ParamLimits

0xc7aa,	// (0x00097d56) bg_popup_preview_window_pane_cp02

0xcede,	// (0x0009848a) list_fp_cale_pane_ParamLimits

0xcede,	// (0x0009848a) list_fp_cale_pane

0xceea,	// (0x00098496) popup_fixed_preview_cale_window_t1_ParamLimits

0xceea,	// (0x00098496) popup_fixed_preview_cale_window_t1

0x56e6,	// (0x00090c92) popup_fixed_preview_cale_window_t2_ParamLimits

0x56e6,	// (0x00090c92) popup_fixed_preview_cale_window_t2

0x56fb,	// (0x00090ca7) popup_fixed_preview_cale_window_t3_ParamLimits

0x56fb,	// (0x00090ca7) popup_fixed_preview_cale_window_t3

0x0002,

0xf7aa,	// (0x0009ad56) popup_fixed_preview_cale_window_t_ParamLimits

0xf7aa,	// (0x0009ad56) popup_fixed_preview_cale_window_t

0x5710,	// (0x00090cbc) list_single_fp_cale_pane_ParamLimits

0x5710,	// (0x00090cbc) list_single_fp_cale_pane

0xcf08,	// (0x000984b4) list_single_fp_cale_pane_g1_ParamLimits

0xcf08,	// (0x000984b4) list_single_fp_cale_pane_g1

0xcf14,	// (0x000984c0) list_single_fp_cale_pane_g2_ParamLimits

0xcf14,	// (0x000984c0) list_single_fp_cale_pane_g2

0x0002,

0xf7b1,	// (0x0009ad5d) list_single_fp_cale_pane_g_ParamLimits

0xf7b1,	// (0x0009ad5d) list_single_fp_cale_pane_g

0xcf2d,	// (0x000984d9) list_single_fp_cale_pane_t1_ParamLimits

0xcf2d,	// (0x000984d9) list_single_fp_cale_pane_t1

0xcf3f,	// (0x000984eb) list_single_fp_cale_pane_t2_ParamLimits

0xcf3f,	// (0x000984eb) list_single_fp_cale_pane_t2

0x0001,

0xf7b8,	// (0x0009ad64) list_single_fp_cale_pane_t_ParamLimits

0xf7b8,	// (0x0009ad64) list_single_fp_cale_pane_t

0x0000,

0x0000,

0x0000,

0x0000,

0x96d4,	// (0x00094c80) main_dialer_pane

0x5727,	// (0x00090cd3) aid_cell_size_keypad

0x5731,	// (0x00090cdd) dialer_ne_pane

0x5739,	// (0x00090ce5) grid_dialer_command_1_pane

0x5741,	// (0x00090ced) grid_dialer_command_2_pane

0x5749,	// (0x00090cf5) grid_dialer_keypad_pane

0x575b,	// (0x00090d07) bg_popup_call_pane_cp06_ParamLimits

0x575b,	// (0x00090d07) bg_popup_call_pane_cp06

0x5767,	// (0x00090d13) dialer_ne_clear_pane_ParamLimits

0x5767,	// (0x00090d13) dialer_ne_clear_pane

0xcf72,	// (0x0009851e) dialer_ne_pane_g1

0xcf7a,	// (0x00098526) dialer_ne_pane_t1_ParamLimits

0xcf7a,	// (0x00098526) dialer_ne_pane_t1

0x5773,	// (0x00090d1f) dialer_ne_pane_t2_ParamLimits

0x5773,	// (0x00090d1f) dialer_ne_pane_t2

0x579d,	// (0x00090d49) dialer_ne_pane_t3_ParamLimits

0x579d,	// (0x00090d49) dialer_ne_pane_t3

0x0002,

0xf7bd,	// (0x0009ad69) dialer_ne_pane_t_ParamLimits

0xf7bd,	// (0x0009ad69) dialer_ne_pane_t

0x57cd,	// (0x00090d79) dialer_ne_pane_t3_copy1_ParamLimits

0x57cd,	// (0x00090d79) dialer_ne_pane_t3_copy1

0x57fc,	// (0x00090da8) cell_dialer_keypad_pane_ParamLimits

0x57fc,	// (0x00090da8) cell_dialer_keypad_pane

0x5813,	// (0x00090dbf) cell_dialer_command_1_pane_ParamLimits

0x5813,	// (0x00090dbf) cell_dialer_command_1_pane

0x5829,	// (0x00090dd5) cell_dialer_command_2_pane_ParamLimits

0x5829,	// (0x00090dd5) cell_dialer_command_2_pane

0xcf8c,	// (0x00098538) bg_button_pane_cp02_ParamLimits

0xcf8c,	// (0x00098538) bg_button_pane_cp02

0x5838,	// (0x00090de4) cell_dialer_keypad_pane_g1_ParamLimits

0x5838,	// (0x00090de4) cell_dialer_keypad_pane_g1

0xcf8c,	// (0x00098538) bg_button_pane_cp03_ParamLimits

0xcf8c,	// (0x00098538) bg_button_pane_cp03

0x584d,	// (0x00090df9) cell_dialer_command_1_pane_g1_ParamLimits

0x584d,	// (0x00090df9) cell_dialer_command_1_pane_g1

0xcf98,	// (0x00098544) bg_button_pane_cp04

0x5860,	// (0x00090e0c) cell_dialer_command_2_pane_g1

0xb391,	// (0x0009693d) bg_button_pane_cp06

0xcfa0,	// (0x0009854c) dialer_ne_clear_pane_g1

0xb26d,	// (0x00096819) navi_pane_g2

0xb29b,	// (0x00096847) navi_pane_g3

0x0002,

0xf3e5,	// (0x0009a991) navi_pane_g

0xb32a,	// (0x000968d6) navi_pane_mv_g2

0xb351,	// (0x000968fd) navi_pane_mv_g5

0x335c,	// (0x0008e908) navi_pane_mv_t1

0xa6f5,	// (0x00095ca1) main_clock2_pane

0x58ad,	// (0x00090e59) main_clock2_list_pane_ParamLimits

0x58ad,	// (0x00090e59) main_clock2_list_pane

0x58e5,	// (0x00090e91) main_clock2_pane_t1_ParamLimits

0x58e5,	// (0x00090e91) main_clock2_pane_t1

0x5923,	// (0x00090ecf) main_clock2_pane_t2_ParamLimits

0x5923,	// (0x00090ecf) main_clock2_pane_t2

0x0004,

0xf7c9,	// (0x0009ad75) main_clock2_pane_t_ParamLimits

0xf7c9,	// (0x0009ad75) main_clock2_pane_t

0x59c1,	// (0x00090f6d) popup_clock_analogue_window_cp03_ParamLimits

0x59c1,	// (0x00090f6d) popup_clock_analogue_window_cp03

0x59e6,	// (0x00090f92) popup_clock_digital_window_cp02_ParamLimits

0x59e6,	// (0x00090f92) popup_clock_digital_window_cp02

0x5a59,	// (0x00091005) main_clock2_list_single_pane_ParamLimits

0x5a59,	// (0x00091005) main_clock2_list_single_pane

0xb391,	// (0x0009693d) list_highlight_pane_cp05

0xcfda,	// (0x00098586) main_clock2_list_single_pane_t1

0x2130,	// (0x0008d6dc) popup_toolbar_window_cp04_ParamLimits

0x4e77,	// (0x00090423) camera2_autofocus_pane_g2_ParamLimits

0x4e77,	// (0x00090423) camera2_autofocus_pane_g2

0x4e83,	// (0x0009042f) camera2_autofocus_pane_g3_ParamLimits

0x4e83,	// (0x0009042f) camera2_autofocus_pane_g3

0x4e8f,	// (0x0009043b) camera2_autofocus_pane_g4_ParamLimits

0x4e8f,	// (0x0009043b) camera2_autofocus_pane_g4

0x4e9b,	// (0x00090447) camera2_autofocus_pane_g5_ParamLimits

0x4e9b,	// (0x00090447) camera2_autofocus_pane_g5

0x0004,

0xf70d,	// (0x0009acb9) camera2_autofocus_pane_g_ParamLimits

0xf70d,	// (0x0009acb9) camera2_autofocus_pane_g

0x5096,	// (0x00090642) camera2_autofocus_pane_cp_g2

0x509e,	// (0x0009064a) camera2_autofocus_pane_cp_g3

0x50a6,	// (0x00090652) camera2_autofocus_pane_cp_g4

0x50ae,	// (0x0009065a) camera2_autofocus_pane_cp_g5

0x0004,

0xf773,	// (0x0009ad1f) camera2_autofocus_pane_cp_g

0x5753,	// (0x00090cff) popup_dialer_spcha_window

0x96d4,	// (0x00094c80) bg_popup_sub_pane_cp07

0xcfe8,	// (0x00098594) list_spcha_pane

0xcff0,	// (0x0009859c) list_single_spcha_pane_ParamLimits

0xcff0,	// (0x0009859c) list_single_spcha_pane

0x96d4,	// (0x00094c80) list_highlight_pane_cp06

0xd001,	// (0x000985ad) list_single_spcha_pane_t1

0xc1f3,	// (0x0009779f) popup_call2_audio_out_window_g4_ParamLimits

0xc1f3,	// (0x0009779f) popup_call2_audio_out_window_g4

0x96d4,	// (0x00094c80) main_imed2_pane

0x9de6,	// (0x00095392) popup_imed_adjust2_window

0x4258,	// (0x0008f804) popup_imed_trans_window_ParamLimits

0x4258,	// (0x0008f804) popup_imed_trans_window

0xc9fc,	// (0x00097fa8) popup_blid_sat_info2_window_t1

0xca0a,	// (0x00097fb6) popup_blid_sat_info2_window_t2

0x000a,

0xf6a2,	// (0x0009ac4e) popup_blid_sat_info2_window_t

0x5b03,	// (0x000910af) aid_size_cell_colour_35

0x5b23,	// (0x000910cf) aid_size_cell_colour_112

0x5b43,	// (0x000910ef) aid_size_cell_effect

0xc7b6,	// (0x00097d62) bg_tb_trans_pane_cp02

0xad65,	// (0x00096311) heading_imed_pane

0x5b63,	// (0x0009110f) listscroll_imed_pane

0xd00f,	// (0x000985bb) heading_imed_pane_g1

0xd017,	// (0x000985c3) heading_imed_pane_t1

0xd025,	// (0x000985d1) grid_imed_colour_35_pane_ParamLimits

0xd025,	// (0x000985d1) grid_imed_colour_35_pane

0x5b6f,	// (0x0009111b) grid_imed_effect_pane

0xd03d,	// (0x000985e9) list_imed_aspect_pane

0x5b85,	// (0x00091131) scroll_pane_cp027_ParamLimits

0x5b85,	// (0x00091131) scroll_pane_cp027

0x5b96,	// (0x00091142) cell_imed_effect_pane_ParamLimits

0x5b96,	// (0x00091142) cell_imed_effect_pane

0xd045,	// (0x000985f1) cell_imed_colour_pane_ParamLimits

0xd045,	// (0x000985f1) cell_imed_colour_pane

0xd087,	// (0x00098633) cell_imed_colour_pane_g1_ParamLimits

0xd087,	// (0x00098633) cell_imed_colour_pane_g1

0xd098,	// (0x00098644) hgihlgiht_grid_pane_cp016_ParamLimits

0xd098,	// (0x00098644) hgihlgiht_grid_pane_cp016

0x5bbd,	// (0x00091169) cell_imed_effect_pane_g1

0x5bc5,	// (0x00091171) grid_highlight_pane_cp017

0xd0a9,	// (0x00098655) list_imed_single_pane_ParamLimits

0xd0a9,	// (0x00098655) list_imed_single_pane

0x96d4,	// (0x00094c80) list_highlight_pane_cp07

0xd0bf,	// (0x0009866b) list_imed_aspect_pane_comp1_t1

0xc7b6,	// (0x00097d62) bg_tb_trans_pane_cp05

0xd0e1,	// (0x0009868d) popup_imed_adjust2_window_g1

0xd108,	// (0x000986b4) popup_imed_adjust2_window_t1

0xd120,	// (0x000986cc) slider_imed_adjust_pane

0xd134,	// (0x000986e0) slider_imed_adjust_pane_g1

0xd144,	// (0x000986f0) slider_imed_adjust_pane_g2

0xd154,	// (0x00098700) slider_imed_adjust_pane_g3

0xd165,	// (0x00098711) slider_imed_adjust_pane_g4

0x0003,

0xf7e6,	// (0x0009ad92) slider_imed_adjust_pane_g

0x5bce,	// (0x0009117a) aid_size_cell_clipart2

0x5bda,	// (0x00091186) grid_imed_clipart_pane

0xd176,	// (0x00098722) scroll_pane_cp031

0x5be4,	// (0x00091190) cell_imed_clipart_pane_ParamLimits

0x5be4,	// (0x00091190) cell_imed_clipart_pane

0x5c08,	// (0x000911b4) cell_imed_clipart_pane_g1

0x96d4,	// (0x00094c80) grid_highlight_pane_cp014

0x58c2,	// (0x00090e6e) main_clock2_pane_g1_ParamLimits

0x58c2,	// (0x00090e6e) main_clock2_pane_g1

0x5a04,	// (0x00090fb0) aid_call2_pane_cp10

0x5a16,	// (0x00090fc2) aid_call_pane_cp10

0xb173,	// (0x0009671f) popup_clock_analogue_window_cp10_g1

0xb173,	// (0x0009671f) popup_clock_analogue_window_cp10_g2

0x5a28,	// (0x00090fd4) popup_clock_analogue_window_cp10_g3

0x5a28,	// (0x00090fd4) popup_clock_analogue_window_cp10_g4

0xb173,	// (0x0009671f) popup_clock_analogue_window_cp10_g5

0x0004,

0xf7d4,	// (0x0009ad80) popup_clock_analogue_window_cp10_g

0x5a3a,	// (0x00090fe6) popup_clock_analogue_window_cp10_t1

0x5a6b,	// (0x00091017) clock_digital_number_pane_cp10_ParamLimits

0x5a6b,	// (0x00091017) clock_digital_number_pane_cp10

0x5a83,	// (0x0009102f) clock_digital_number_pane_cp11_ParamLimits

0x5a83,	// (0x0009102f) clock_digital_number_pane_cp11

0x5a9b,	// (0x00091047) clock_digital_number_pane_cp12_ParamLimits

0x5a9b,	// (0x00091047) clock_digital_number_pane_cp12

0x5ab3,	// (0x0009105f) clock_digital_number_pane_cp13_ParamLimits

0x5ab3,	// (0x0009105f) clock_digital_number_pane_cp13

0x5acb,	// (0x00091077) clock_digital_separator_pane_cp10_ParamLimits

0x5acb,	// (0x00091077) clock_digital_separator_pane_cp10

0x5ae3,	// (0x0009108f) popup_clock_digital_window_cp02_t1_ParamLimits

0x5ae3,	// (0x0009108f) popup_clock_digital_window_cp02_t1

0xa609,	// (0x00095bb5) clock_digital_number_pane_cp10_g1

0xa609,	// (0x00095bb5) clock_digital_number_pane_cp10_g2

0x0001,

0xf7ef,	// (0x0009ad9b) clock_digital_number_pane_cp10_g

0xa609,	// (0x00095bb5) clock_digital_separator_pane_cp10_g1

0xa609,	// (0x00095bb5) clock_digital_separator_pane_g2_cp10

0xb359,	// (0x00096905) navi_pane_vded_g4

0xb362,	// (0x0009690e) navi_pane_vded_g5

0xb36b,	// (0x00096917) navi_pane_vded_t1

0x96d4,	// (0x00094c80) main_vded_pane

0x5c11,	// (0x000911bd) main_vded_pane_g1

0x5c1b,	// (0x000911c7) main_vded_pane_g2

0x5c25,	// (0x000911d1) main_vded_pane_g3

0x0002,

0xf7f4,	// (0x0009ada0) main_vded_pane_g

0x5c2f,	// (0x000911db) main_vded_pane_t1

0x5c3d,	// (0x000911e9) main_vded_pane_t2

0x0001,

0xf7fb,	// (0x0009ada7) main_vded_pane_t

0x5c4b,	// (0x000911f7) vded_slider_pane

0x5c55,	// (0x00091201) vded_video_pane

0xd17e,	// (0x0009872a) vded_video_pane_g1

0x5c5f,	// (0x0009120b) vded_video_pane_g2

0xcbc0,	// (0x0009816c) vded_video_pane_g3

0x0002,

0xf800,	// (0x0009adac) vded_video_pane_g

0xd188,	// (0x00098734) vded_slider_pane_g1

0xd191,	// (0x0009873d) vded_slider_pane_g2

0xd19a,	// (0x00098746) vded_slider_pane_g3

0xd1a3,	// (0x0009874f) vded_slider_pane_g4

0xd1ac,	// (0x00098758) vded_slider_pane_g5

0x0004,

0xf807,	// (0x0009adb3) vded_slider_pane_g

0x5632,	// (0x00090bde) mup3_rocker_pane_ParamLimits

0x5632,	// (0x00090bde) mup3_rocker_pane

0x5c68,	// (0x00091214) mup3_control_keys_pane_g1

0x5c70,	// (0x0009121c) mup3_control_keys_pane_g2

0x5c78,	// (0x00091224) mup3_control_keys_pane_g3

0x5c80,	// (0x0009122c) mup3_control_keys_pane_g4

0x0003,

0xf812,	// (0x0009adbe) mup3_control_keys_pane_g

0x10e1,	// (0x0008c68d) popup_toolbar2_fixed_window_cp01_ParamLimits

0x10e1,	// (0x0008c68d) popup_toolbar2_fixed_window_cp01

0x5666,	// (0x00090c12) popup_toolbar2_fixed_window_cp02_ParamLimits

0x5666,	// (0x00090c12) popup_toolbar2_fixed_window_cp02

0xbb26,	// (0x000970d2) popup_call2_audio_second_window_t4_ParamLimits

0xbb26,	// (0x000970d2) popup_call2_audio_second_window_t4

0xc060,	// (0x0009760c) popup_call2_audio_first_window_t6_ParamLimits

0xc060,	// (0x0009760c) popup_call2_audio_first_window_t6

0xc2f6,	// (0x000978a2) popup_call2_audio_out_window_t6_ParamLimits

0xc2f6,	// (0x000978a2) popup_call2_audio_out_window_t6

0x96d4,	// (0x00094c80) main_vitu_pane

0x5c90,	// (0x0009123c) aid_size_cell_itu_ParamLimits

0x5c90,	// (0x0009123c) aid_size_cell_itu

0xa480,	// (0x00095a2c) bg_popup_window_pane_cp08_ParamLimits

0xa480,	// (0x00095a2c) bg_popup_window_pane_cp08

0x5ca6,	// (0x00091252) field_vitu_entry_pane_ParamLimits

0x5ca6,	// (0x00091252) field_vitu_entry_pane

0x5cbd,	// (0x00091269) grid_vitu_function_pane_ParamLimits

0x5cbd,	// (0x00091269) grid_vitu_function_pane

0x5cd8,	// (0x00091284) grid_vitu_itu_pane_ParamLimits

0x5cd8,	// (0x00091284) grid_vitu_itu_pane

0x5cf6,	// (0x000912a2) cell_vitu_itu_pane_ParamLimits

0x5cf6,	// (0x000912a2) cell_vitu_itu_pane

0x5d1a,	// (0x000912c6) cell_vitu_function_pane_ParamLimits

0x5d1a,	// (0x000912c6) cell_vitu_function_pane

0xa480,	// (0x00095a2c) bg_popup_sub_pane_cp08_ParamLimits

0xa480,	// (0x00095a2c) bg_popup_sub_pane_cp08

0x5d35,	// (0x000912e1) field_vitu_entry_pane_t1_ParamLimits

0x5d35,	// (0x000912e1) field_vitu_entry_pane_t1

0xd1cd,	// (0x00098779) field_vitu_entry_pane_t2_ParamLimits

0xd1cd,	// (0x00098779) field_vitu_entry_pane_t2

0x0001,

0xf820,	// (0x0009adcc) field_vitu_entry_pane_t_ParamLimits

0xf820,	// (0x0009adcc) field_vitu_entry_pane_t

0xd1ea,	// (0x00098796) bg_button_pane_cp05_ParamLimits

0xd1ea,	// (0x00098796) bg_button_pane_cp05

0x5d54,	// (0x00091300) cell_vitu_itu_pane_g1

0x5d6c,	// (0x00091318) cell_vitu_itu_pane_t1_ParamLimits

0x5d6c,	// (0x00091318) cell_vitu_itu_pane_t1

0x5d7e,	// (0x0009132a) cell_vitu_itu_pane_t2_ParamLimits

0x5d7e,	// (0x0009132a) cell_vitu_itu_pane_t2

0x0002,

0xf825,	// (0x0009add1) cell_vitu_itu_pane_t_ParamLimits

0xf825,	// (0x0009add1) cell_vitu_itu_pane_t

0xd1f8,	// (0x000987a4) bg_button_pane_cp07

0x5dc1,	// (0x0009136d) cell_vitu_function_pane_g1

0x9c27,	// (0x000951d3) main_calc_pane_g1

0x0ef8,	// (0x0008c4a4) aid_visual_content_pane

0x96d4,	// (0x00094c80) main_vradio_pane

0x5dca,	// (0x00091376) main_vradio_pane_g1_ParamLimits

0x5dca,	// (0x00091376) main_vradio_pane_g1

0xd202,	// (0x000987ae) main_vradio_pane_g2_ParamLimits

0xd202,	// (0x000987ae) main_vradio_pane_g2

0x0001,

0xf82c,	// (0x0009add8) main_vradio_pane_g_ParamLimits

0xf82c,	// (0x0009add8) main_vradio_pane_g

0x5de3,	// (0x0009138f) main_vradio_pane_t1_ParamLimits

0x5de3,	// (0x0009138f) main_vradio_pane_t1

0x5df8,	// (0x000913a4) main_vradio_pane_t2_ParamLimits

0x5df8,	// (0x000913a4) main_vradio_pane_t2

0xd20f,	// (0x000987bb) main_vradio_pane_t3_ParamLimits

0xd20f,	// (0x000987bb) main_vradio_pane_t3

0x0002,

0xf831,	// (0x0009addd) main_vradio_pane_t_ParamLimits

0xf831,	// (0x0009addd) main_vradio_pane_t

0x5e0d,	// (0x000913b9) vradio_rocker_control_pane_ParamLimits

0x5e0d,	// (0x000913b9) vradio_rocker_control_pane

0x5e1f,	// (0x000913cb) vradio_station_info_pane_ParamLimits

0x5e1f,	// (0x000913cb) vradio_station_info_pane

0xd223,	// (0x000987cf) vradio_frequency_info_pane_ParamLimits

0xd223,	// (0x000987cf) vradio_frequency_info_pane

0xcbc0,	// (0x0009816c) vradio_station_info_pane_g1

0xd232,	// (0x000987de) vradio_station_info_pane_t1_ParamLimits

0xd232,	// (0x000987de) vradio_station_info_pane_t1

0xd254,	// (0x00098800) vradio_station_info_pane_t2_ParamLimits

0xd254,	// (0x00098800) vradio_station_info_pane_t2

0x0001,

0xf838,	// (0x0009ade4) vradio_station_info_pane_t_ParamLimits

0xf838,	// (0x0009ade4) vradio_station_info_pane_t

0xd266,	// (0x00098812) vradio_tuning_pane

0xd26e,	// (0x0009881a) vradio_rocker_control_pane_g1

0xd276,	// (0x00098822) vradio_rocker_control_pane_g2

0xd27e,	// (0x0009882a) vradio_rocker_control_pane_g3

0xd286,	// (0x00098832) vradio_rocker_control_pane_g4

0xd28e,	// (0x0009883a) vradio_rocker_control_pane_g5

0x0004,

0xf83d,	// (0x0009ade9) vradio_rocker_control_pane_g

0x5e31,	// (0x000913dd) vradio_frequency_info_pane_g1

0xd296,	// (0x00098842) vradio_frequency_info_pane_t1_ParamLimits

0xd296,	// (0x00098842) vradio_frequency_info_pane_t1

0x5e3b,	// (0x000913e7) vradio_tuning_pane_g1

0x5e46,	// (0x000913f2) vradio_tuning_pane_t1

0x96fa,	// (0x00094ca6) area_side_right_pane_ParamLimits

0x96fa,	// (0x00094ca6) area_side_right_pane

0xc771,	// (0x00097d1d) status_small_pane_g1

0xc779,	// (0x00097d25) status_small_pane_g2

0xc782,	// (0x00097d2e) status_small_pane_g3

0xc78b,	// (0x00097d37) status_small_pane_g4

0x0003,

0xf5f8,	// (0x0009aba4) status_small_pane_g

0xc794,	// (0x00097d40) status_small_pane_t1

0x96d4,	// (0x00094c80) main_video3_pane

0xd2aa,	// (0x00098856) cams_zoom_vslider_pane

0xd2b2,	// (0x0009885e) image3_wide_pane_ParamLimits

0xd2b2,	// (0x0009885e) image3_wide_pane

0xd2cc,	// (0x00098878) image3_wide_small_pane

0xd2d8,	// (0x00098884) main_video3_pane_g1_ParamLimits

0xd2d8,	// (0x00098884) main_video3_pane_g1

0xd2f4,	// (0x000988a0) main_video3_pane_g2_ParamLimits

0xd2f4,	// (0x000988a0) main_video3_pane_g2

0x0001,

0xf848,	// (0x0009adf4) main_video3_pane_g_ParamLimits

0xf848,	// (0x0009adf4) main_video3_pane_g

0xd310,	// (0x000988bc) main_video3_pane_t1_ParamLimits

0xd310,	// (0x000988bc) main_video3_pane_t1

0xd33b,	// (0x000988e7) main_video3_pane_t2_ParamLimits

0xd33b,	// (0x000988e7) main_video3_pane_t2

0xd366,	// (0x00098912) main_video3_pane_t3_ParamLimits

0xd366,	// (0x00098912) main_video3_pane_t3

0x0002,

0xf84d,	// (0x0009adf9) main_video3_pane_t_ParamLimits

0xf84d,	// (0x0009adf9) main_video3_pane_t

0xd393,	// (0x0009893f) cams_zoom_vslider_pane_g1

0xd39c,	// (0x00098948) cams_zoom_vslider_pane_g2

0x0001,

0xf854,	// (0x0009ae00) cams_zoom_vslider_pane_g

0xd3a4,	// (0x00098950) small_slider_vertical_pane

0xcbc0,	// (0x0009816c) small_slider_vertical_pane_g1

0xcbc0,	// (0x0009816c) small_slider_vertical_pane_g2

0xd3ac,	// (0x00098958) small_slider_vertical_pane_g3

0x0002,

0xf859,	// (0x0009ae05) small_slider_vertical_pane_g

0x96d4,	// (0x00094c80) main_hwr_training_pane

0xd3b5,	// (0x00098961) hwr_training_instruct_pane_ParamLimits

0xd3b5,	// (0x00098961) hwr_training_instruct_pane

0x5e55,	// (0x00091401) hwr_training_navi_pane_ParamLimits

0x5e55,	// (0x00091401) hwr_training_navi_pane

0x5e74,	// (0x00091420) hwr_training_write_pane_ParamLimits

0x5e74,	// (0x00091420) hwr_training_write_pane

0x96d4,	// (0x00094c80) bg_frame_shadow_pane

0xd3ec,	// (0x00098998) hwr_training_write_pane_g1

0xd3f4,	// (0x000989a0) hwr_training_write_pane_g2

0xd3fc,	// (0x000989a8) hwr_training_write_pane_g3

0xd404,	// (0x000989b0) hwr_training_write_pane_g4

0xd40c,	// (0x000989b8) hwr_training_write_pane_g5

0xd414,	// (0x000989c0) hwr_training_write_pane_g6

0xd41c,	// (0x000989c8) hwr_training_write_pane_g7

0x0006,

0xf860,	// (0x0009ae0c) hwr_training_write_pane_g

0x9f27,	// (0x000954d3) hwr_training_navi_pane_g1_ParamLimits

0x9f27,	// (0x000954d3) hwr_training_navi_pane_g1

0x9f39,	// (0x000954e5) hwr_training_navi_pane_g2_ParamLimits

0x9f39,	// (0x000954e5) hwr_training_navi_pane_g2

0x9f4b,	// (0x000954f7) hwr_training_navi_pane_g3_ParamLimits

0x9f4b,	// (0x000954f7) hwr_training_navi_pane_g3

0x9f5b,	// (0x00095507) hwr_training_navi_pane_g4_ParamLimits

0x9f5b,	// (0x00095507) hwr_training_navi_pane_g4

0x0004,

0xf86f,	// (0x0009ae1b) hwr_training_navi_pane_g_ParamLimits

0xf86f,	// (0x0009ae1b) hwr_training_navi_pane_g

0x9f68,	// (0x00095514) hwr_training_navi_pane_t1

0x5ebe,	// (0x0009146a) list_single_hwr_training_instruct_pane_ParamLimits

0x5ebe,	// (0x0009146a) list_single_hwr_training_instruct_pane

0xd424,	// (0x000989d0) list_single_hwr_training_instruct_pane_t1

0xcb00,	// (0x000980ac) bg_frame_shadow_pane_g1

0xd433,	// (0x000989df) bg_frame_shadow_pane_g2

0xd43b,	// (0x000989e7) bg_frame_shadow_pane_g3

0xd443,	// (0x000989ef) bg_frame_shadow_pane_g4

0xd44b,	// (0x000989f7) bg_frame_shadow_pane_g5

0xd453,	// (0x000989ff) bg_frame_shadow_pane_g6

0xd45b,	// (0x00098a07) bg_frame_shadow_pane_g7

0xa7c0,	// (0x00095d6c) bg_frame_shadow_pane_g8

0x0007,

0xf87a,	// (0x0009ae26) bg_frame_shadow_pane_g

0x96d4,	// (0x00094c80) main_video_tele_dialer_pane

0x5ed5,	// (0x00091481) aid_size_cell_video_keypad_ParamLimits

0x5ed5,	// (0x00091481) aid_size_cell_video_keypad

0x5eef,	// (0x0009149b) grid_video_dialer_keypad_pane_ParamLimits

0x5eef,	// (0x0009149b) grid_video_dialer_keypad_pane

0x5f3d,	// (0x000914e9) video_down_pane_cp_ParamLimits

0x5f3d,	// (0x000914e9) video_down_pane_cp

0x5f6f,	// (0x0009151b) cell_video_dialer_keypad_pane_ParamLimits

0x5f6f,	// (0x0009151b) cell_video_dialer_keypad_pane

0xd463,	// (0x00098a0f) bg_button_pane_cp08_ParamLimits

0xd463,	// (0x00098a0f) bg_button_pane_cp08

0x5f91,	// (0x0009153d) cell_video_dialer_keypad_pane_g1_ParamLimits

0x5f91,	// (0x0009153d) cell_video_dialer_keypad_pane_g1

0x561c,	// (0x00090bc8) mup3_rocker2_pane_ParamLimits

0x561c,	// (0x00090bc8) mup3_rocker2_pane

0xcbc0,	// (0x0009816c) mup3_rocker2_pane_g1

0x4141,	// (0x0008f6ed) main_dialer2_pane

0x96d4,	// (0x00094c80) main_mp4_pane

0x9f7e,	// (0x0009552a) main_mp4_pane_g1_ParamLimits

0x9f7e,	// (0x0009552a) main_mp4_pane_g1

0x9f7e,	// (0x0009552a) main_mp4_pane_g2_ParamLimits

0x9f7e,	// (0x0009552a) main_mp4_pane_g2

0x5fcc,	// (0x00091578) main_mp4_pane_g3_ParamLimits

0x5fcc,	// (0x00091578) main_mp4_pane_g3

0x9f8c,	// (0x00095538) main_mp4_pane_g4_ParamLimits

0x9f8c,	// (0x00095538) main_mp4_pane_g4

0x9fb4,	// (0x00095560) main_mp4_pane_g5_ParamLimits

0x9fb4,	// (0x00095560) main_mp4_pane_g5

0x0005,

0xf89a,	// (0x0009ae46) main_mp4_pane_g_ParamLimits

0xf89a,	// (0x0009ae46) main_mp4_pane_g

0xa004,	// (0x000955b0) main_mp4_pane_t1_ParamLimits

0xa004,	// (0x000955b0) main_mp4_pane_t1

0xa060,	// (0x0009560c) main_mp4_pane_t2_ParamLimits

0xa060,	// (0x0009560c) main_mp4_pane_t2

0xd46f,	// (0x00098a1b) main_mp4_pane_t3_ParamLimits

0xd46f,	// (0x00098a1b) main_mp4_pane_t3

0xa0b2,	// (0x0009565e) main_mp4_pane_t4_ParamLimits

0xa0b2,	// (0x0009565e) main_mp4_pane_t4

0x0003,

0xf8a7,	// (0x0009ae53) main_mp4_pane_t_ParamLimits

0xf8a7,	// (0x0009ae53) main_mp4_pane_t

0xa0f6,	// (0x000956a2) mp4_progress_pane_ParamLimits

0xa0f6,	// (0x000956a2) mp4_progress_pane

0xa140,	// (0x000956ec) mp4_rocker_pane_ParamLimits

0xa140,	// (0x000956ec) mp4_rocker_pane

0xd497,	// (0x00098a43) mp4_progress_pane_t1

0xd4b0,	// (0x00098a5c) mp4_progress_pane_t2

0x0001,

0xf8b0,	// (0x0009ae5c) mp4_progress_pane_t

0xd4c9,	// (0x00098a75) mup_progress_pane_cp04

0xcbc0,	// (0x0009816c) mp4_rocker_pane_g1

0x6008,	// (0x000915b4) aid_cell_size_keypad2_ParamLimits

0x6008,	// (0x000915b4) aid_cell_size_keypad2

0x601e,	// (0x000915ca) dialer2_ne_pane_ParamLimits

0x601e,	// (0x000915ca) dialer2_ne_pane

0x6038,	// (0x000915e4) grid_dialer2_keypad_pane_ParamLimits

0x6038,	// (0x000915e4) grid_dialer2_keypad_pane

0xc9a3,	// (0x00097f4f) bg_popup_call_pane_cp07_ParamLimits

0xc9a3,	// (0x00097f4f) bg_popup_call_pane_cp07

0x6056,	// (0x00091602) dialer2_ne_pane_t1_ParamLimits

0x6056,	// (0x00091602) dialer2_ne_pane_t1

0x6093,	// (0x0009163f) cell_dialer2_keypad_pane_ParamLimits

0x6093,	// (0x0009163f) cell_dialer2_keypad_pane

0xd4e7,	// (0x00098a93) bg_button_pane_pane_cp04_ParamLimits

0xd4e7,	// (0x00098a93) bg_button_pane_pane_cp04

0x60b5,	// (0x00091661) cell_dialer2_keypad_pane_g1_ParamLimits

0x60b5,	// (0x00091661) cell_dialer2_keypad_pane_g1

0x2004,	// (0x0008d5b0) aid_placing_vt_set_content_ParamLimits

0x2004,	// (0x0008d5b0) aid_placing_vt_set_content

0x202c,	// (0x0008d5d8) aid_placing_vt_set_title_ParamLimits

0x202c,	// (0x0008d5d8) aid_placing_vt_set_title

0x96d4,	// (0x00094c80) main_image3_pane

0x617b,	// (0x00091727) area_side_right_pane_cp01_ParamLimits

0x617b,	// (0x00091727) area_side_right_pane_cp01

0x9f7e,	// (0x0009552a) main_image3_pane_g1_ParamLimits

0x9f7e,	// (0x0009552a) main_image3_pane_g1

0x6192,	// (0x0009173e) main_image3_pane_g2_ParamLimits

0x6192,	// (0x0009173e) main_image3_pane_g2

0x61ba,	// (0x00091766) main_image3_pane_g3_ParamLimits

0x61ba,	// (0x00091766) main_image3_pane_g3

0x61e4,	// (0x00091790) main_image3_pane_g4_ParamLimits

0x61e4,	// (0x00091790) main_image3_pane_g4

0x0003,

0xf8bf,	// (0x0009ae6b) main_image3_pane_g_ParamLimits

0xf8bf,	// (0x0009ae6b) main_image3_pane_g

0x620e,	// (0x000917ba) main_image3_pane_t1_ParamLimits

0x620e,	// (0x000917ba) main_image3_pane_t1

0x6266,	// (0x00091812) main_image3_pane_t2_ParamLimits

0x6266,	// (0x00091812) main_image3_pane_t2

0x62b8,	// (0x00091864) main_image3_pane_t3_ParamLimits

0x62b8,	// (0x00091864) main_image3_pane_t3

0x0003,

0xf8c8,	// (0x0009ae74) main_image3_pane_t_ParamLimits

0xf8c8,	// (0x0009ae74) main_image3_pane_t

0xa480,	// (0x00095a2c) grid_sctrl_middle_pane_cp01_ParamLimits

0xa480,	// (0x00095a2c) grid_sctrl_middle_pane_cp01

0x6340,	// (0x000918ec) cell_sctrl_middle_pane_cp01_ParamLimits

0x6340,	// (0x000918ec) cell_sctrl_middle_pane_cp01

0x635d,	// (0x00091909) cell_sctrl_middle_pane_cp01_g1_ParamLimits

0x635d,	// (0x00091909) cell_sctrl_middle_pane_cp01_g1

0x96d4,	// (0x00094c80) main_call4_pane

0x6373,	// (0x0009191f) aid_size_button_call4_ParamLimits

0x6373,	// (0x0009191f) aid_size_button_call4

0x63a4,	// (0x00091950) call4_windows_pane_ParamLimits

0x63a4,	// (0x00091950) call4_windows_pane

0x63c4,	// (0x00091970) grid_call4_button_pane_ParamLimits

0x63c4,	// (0x00091970) grid_call4_button_pane

0xd4f3,	// (0x00098a9f) call4_windows_conf_pane

0xd508,	// (0x00098ab4) popup_call4_audio_first_window_ParamLimits

0xd508,	// (0x00098ab4) popup_call4_audio_first_window

0xd554,	// (0x00098b00) popup_call4_audio_second_window_ParamLimits

0xd554,	// (0x00098b00) popup_call4_audio_second_window

0xd568,	// (0x00098b14) popup_call4_audio_wait_window_ParamLimits

0xd568,	// (0x00098b14) popup_call4_audio_wait_window

0x63f1,	// (0x0009199d) cell_call4_button_pane_ParamLimits

0x63f1,	// (0x0009199d) cell_call4_button_pane

0x641a,	// (0x000919c6) bg_button_pane_cp09_ParamLimits

0x641a,	// (0x000919c6) bg_button_pane_cp09

0x6426,	// (0x000919d2) cell_call4_button_pane_g1_ParamLimits

0x6426,	// (0x000919d2) cell_call4_button_pane_g1

0x644c,	// (0x000919f8) cell_call4_button_pane_t1_ParamLimits

0x644c,	// (0x000919f8) cell_call4_button_pane_t1

0xd5b0,	// (0x00098b5c) popup_call4_audio_conf_window_ParamLimits

0xd5b0,	// (0x00098b5c) popup_call4_audio_conf_window

0x567c,	// (0x00090c28) mup3_progress_pane_t1_ParamLimits

0x569b,	// (0x00090c47) mup3_progress_pane_t2_ParamLimits

0xce9b,	// (0x00098447) mup3_progress_pane_t3_ParamLimits

0xf79c,	// (0x0009ad48) mup3_progress_pane_t_ParamLimits

0xceb8,	// (0x00098464) mup_progress_pane_cp03_ParamLimits

0x5c88,	// (0x00091234) mup3_control_keys_pane_g4_copy1

0xa124,	// (0x000956d0) mp4_rocker2_pane_ParamLimits

0xa124,	// (0x000956d0) mp4_rocker2_pane

0xd5c4,	// (0x00098b70) mp4_rocker2_pane_g1

0xd5cc,	// (0x00098b78) mp4_rocker2_pane_g2

0xa192,	// (0x0009573e) mp4_rocker2_pane_g3

0xa19a,	// (0x00095746) mp4_rocker2_pane_g4

0xa1a2,	// (0x0009574e) mp4_rocker2_pane_g5

0x0004,

0xf8d1,	// (0x0009ae7d) mp4_rocker2_pane_g

0x96d4,	// (0x00094c80) main_camera4_pane

0x96d4,	// (0x00094c80) main_video4_pane

0x5f0b,	// (0x000914b7) main_video_tele_dialer_pane_t1_ParamLimits

0x5f0b,	// (0x000914b7) main_video_tele_dialer_pane_t1

0x5f24,	// (0x000914d0) main_video_tele_dialer_pane_t2_ParamLimits

0x5f24,	// (0x000914d0) main_video_tele_dialer_pane_t2

0x0001,

0xf88b,	// (0x0009ae37) main_video_tele_dialer_pane_t_ParamLimits

0xf88b,	// (0x0009ae37) main_video_tele_dialer_pane_t

0x648a,	// (0x00091a36) cam4_autofocus_pane_ParamLimits

0x648a,	// (0x00091a36) cam4_autofocus_pane

0x64a0,	// (0x00091a4c) cam4_image_uncrop_pane_ParamLimits

0x64a0,	// (0x00091a4c) cam4_image_uncrop_pane

0x64ba,	// (0x00091a66) cam4_indicators_pane_ParamLimits

0x64ba,	// (0x00091a66) cam4_indicators_pane

0x64e5,	// (0x00091a91) main_camera4_pane_g1_ParamLimits

0x64e5,	// (0x00091a91) main_camera4_pane_g1

0x64f7,	// (0x00091aa3) main_camera4_pane_g2_ParamLimits

0x64f7,	// (0x00091aa3) main_camera4_pane_g2

0x650a,	// (0x00091ab6) main_camera4_pane_g3_ParamLimits

0x650a,	// (0x00091ab6) main_camera4_pane_g3

0x651d,	// (0x00091ac9) main_camera4_pane_g4_ParamLimits

0x651d,	// (0x00091ac9) main_camera4_pane_g4

0x6530,	// (0x00091adc) main_camera4_pane_g5_ParamLimits

0x6530,	// (0x00091adc) main_camera4_pane_g5

0x0005,

0xf8dc,	// (0x0009ae88) main_camera4_pane_g_ParamLimits

0xf8dc,	// (0x0009ae88) main_camera4_pane_g

0x6554,	// (0x00091b00) main_camera4_pane_t1_ParamLimits

0x6554,	// (0x00091b00) main_camera4_pane_t1

0xce20,	// (0x000983cc) bg_tb_trans_pane_cp06

0xa1ce,	// (0x0009577a) cam4_indicators_pane_g1

0xa1df,	// (0x0009578b) cam4_indicators_pane_g2

0x0002,

0xf8f7,	// (0x0009aea3) cam4_indicators_pane_g

0xa1fd,	// (0x000957a9) cam4_indicators_pane_t1

0x65b8,	// (0x00091b64) main_video4_pane_g1_ParamLimits

0x65b8,	// (0x00091b64) main_video4_pane_g1

0x65c7,	// (0x00091b73) main_video4_pane_g2_ParamLimits

0x65c7,	// (0x00091b73) main_video4_pane_g2

0x65d6,	// (0x00091b82) main_video4_pane_g3_ParamLimits

0x65d6,	// (0x00091b82) main_video4_pane_g3

0x65e5,	// (0x00091b91) main_video4_pane_g4_ParamLimits

0x65e5,	// (0x00091b91) main_video4_pane_g4

0x0004,

0xf8fe,	// (0x0009aeaa) main_video4_pane_g_ParamLimits

0xf8fe,	// (0x0009aeaa) main_video4_pane_g

0x6603,	// (0x00091baf) vid4_indicators_pane_ParamLimits

0x6603,	// (0x00091baf) vid4_indicators_pane

0x6631,	// (0x00091bdd) video4_image_uncrop_cif_pane_ParamLimits

0x6631,	// (0x00091bdd) video4_image_uncrop_cif_pane

0x664b,	// (0x00091bf7) video4_image_uncrop_nhd_pane_ParamLimits

0x664b,	// (0x00091bf7) video4_image_uncrop_nhd_pane

0x64a0,	// (0x00091a4c) video4_image_uncrop_vga_pane_ParamLimits

0x64a0,	// (0x00091a4c) video4_image_uncrop_vga_pane

0xa480,	// (0x00095a2c) bg_tb_trans_pane_cp07

0xa227,	// (0x000957d3) vid4_indicators_pane_g1

0xa23b,	// (0x000957e7) vid4_indicators_pane_g2

0xa24f,	// (0x000957fb) vid4_indicators_pane_g3

0x0004,

0xf909,	// (0x0009aeb5) vid4_indicators_pane_g

0xa27c,	// (0x00095828) vid4_indicators_pane_t1

0x665f,	// (0x00091c0b) cam4_autofocus_pane_g1

0x6667,	// (0x00091c13) cam4_autofocus_pane_g2

0x666f,	// (0x00091c1b) cam4_autofocus_pane_g3

0x0002,

0xf914,	// (0x0009aec0) cam4_autofocus_pane_g

0x6677,	// (0x00091c23) cam4_autofocus_pane_g3_copy1

0x5f53,	// (0x000914ff) video_down_pane_cp_t1

0x5f61,	// (0x0009150d) video_down_pane_cp_t2

0x0001,

0xf890,	// (0x0009ae3c) video_down_pane_cp_t

0xa480,	// (0x00095a2c) popup_vitu2_window_ParamLimits

0xa480,	// (0x00095a2c) popup_vitu2_window

0x667f,	// (0x00091c2b) aid_size_cell2_itu2_ParamLimits

0x667f,	// (0x00091c2b) aid_size_cell2_itu2

0x66a5,	// (0x00091c51) aid_size_cell_itu2_ParamLimits

0x66a5,	// (0x00091c51) aid_size_cell_itu2

0x6701,	// (0x00091cad) bg_popup_window_pane_cp09_ParamLimits

0x6701,	// (0x00091cad) bg_popup_window_pane_cp09

0x670f,	// (0x00091cbb) field_vitu2_entry_pane_ParamLimits

0x670f,	// (0x00091cbb) field_vitu2_entry_pane

0x6735,	// (0x00091ce1) grid_vitu2_function_pane_ParamLimits

0x6735,	// (0x00091ce1) grid_vitu2_function_pane

0x6786,	// (0x00091d32) grid_vitu2_itu_pane_ParamLimits

0x6786,	// (0x00091d32) grid_vitu2_itu_pane

0x6817,	// (0x00091dc3) cell_vitu2_itu_pane_ParamLimits

0x6817,	// (0x00091dc3) cell_vitu2_itu_pane

0x683b,	// (0x00091de7) cell_vitu2_function_pane_ParamLimits

0x683b,	// (0x00091de7) cell_vitu2_function_pane

0xd5e6,	// (0x00098b92) bg_popup_call_pane_cp08_ParamLimits

0xd5e6,	// (0x00098b92) bg_popup_call_pane_cp08

0xd5fd,	// (0x00098ba9) field_vitu2_entry_pane_g1

0xd609,	// (0x00098bb5) field_vitu2_entry_pane_g2

0x0002,

0xf91b,	// (0x0009aec7) field_vitu2_entry_pane_g

0x687a,	// (0x00091e26) field_vitu2_entry_pane_t1_ParamLimits

0x687a,	// (0x00091e26) field_vitu2_entry_pane_t1

0x68a6,	// (0x00091e52) field_vitu2_entry_pane_t2_ParamLimits

0x68a6,	// (0x00091e52) field_vitu2_entry_pane_t2

0x0001,

0xf922,	// (0x0009aece) field_vitu2_entry_pane_t_ParamLimits

0xf922,	// (0x0009aece) field_vitu2_entry_pane_t

0x68c3,	// (0x00091e6f) bg_button_pane_cp010_ParamLimits

0x68c3,	// (0x00091e6f) bg_button_pane_cp010

0x68d1,	// (0x00091e7d) cell_vitu2_itu_pane_g1

0x68fc,	// (0x00091ea8) cell_vitu2_itu_pane_t1_ParamLimits

0x68fc,	// (0x00091ea8) cell_vitu2_itu_pane_t1

0x0347,	// (0x0008b8f3) cell_vitu2_itu_pane_t2_ParamLimits

0x0347,	// (0x0008b8f3) cell_vitu2_itu_pane_t2

0x0002,

0xf92c,	// (0x0009aed8) cell_vitu2_itu_pane_t_ParamLimits

0xf92c,	// (0x0009aed8) cell_vitu2_itu_pane_t

0xa480,	// (0x00095a2c) bg_button_pane_cp011

0x695a,	// (0x00091f06) cell_vitu2_function_pane_g1

0x96d4,	// (0x00094c80) main_myfav_hc_pane

0x6308,	// (0x000918b4) popup_image3_note_pane_ParamLimits

0x6308,	// (0x000918b4) popup_image3_note_pane

0x6324,	// (0x000918d0) popup_image3_tool_bar_pane_ParamLimits

0x6324,	// (0x000918d0) popup_image3_tool_bar_pane

0x03cb,	// (0x0008b977) cell_vitu2_itu_pane_t3_ParamLimits

0x03cb,	// (0x0008b977) cell_vitu2_itu_pane_t3

0x96d4,	// (0x00094c80) bg_popup_trans_pane

0xd62b,	// (0x00098bd7) grid_image3_tool_bar_pane

0xd635,	// (0x00098be1) bg_popup_trans_pane_g1

0xab15,	// (0x000960c1) bg_popup_trans_pane_g2

0xd63d,	// (0x00098be9) bg_popup_trans_pane_g3

0xd645,	// (0x00098bf1) bg_popup_trans_pane_g4

0xd64d,	// (0x00098bf9) bg_popup_trans_pane_g5

0xd655,	// (0x00098c01) bg_popup_trans_pane_g6

0xd65d,	// (0x00098c09) bg_popup_trans_pane_g7

0xd665,	// (0x00098c11) bg_popup_trans_pane_g8

0xaaf5,	// (0x000960a1) bg_popup_trans_pane_g9

0x0008,

0xf933,	// (0x0009aedf) bg_popup_trans_pane_g

0xd66d,	// (0x00098c19) cell_image3_tool_bar_pane_ParamLimits

0xd66d,	// (0x00098c19) cell_image3_tool_bar_pane

0xcbc0,	// (0x0009816c) cell_image3_tool_bar_pane_g1

0x96d4,	// (0x00094c80) bg_popup_trans_pane_cp1

0xd681,	// (0x00098c2d) popup_image3_note_pane_t1

0xd68f,	// (0x00098c3b) popup_image3_note_pane_t2

0xd69d,	// (0x00098c49) popup_image3_note_pane_t3

0x0002,

0xf946,	// (0x0009aef2) popup_image3_note_pane_t

0xd6ab,	// (0x00098c57) popup_image3_note_pane_t3_copy1

0x696e,	// (0x00091f1a) bg_myfav_hc_instruction_pane_ParamLimits

0x696e,	// (0x00091f1a) bg_myfav_hc_instruction_pane

0x6984,	// (0x00091f30) cell_myfav_contact_pane_ParamLimits

0x6984,	// (0x00091f30) cell_myfav_contact_pane

0x69a2,	// (0x00091f4e) cell_myfav_contact_pane_cp1_ParamLimits

0x69a2,	// (0x00091f4e) cell_myfav_contact_pane_cp1

0x69ba,	// (0x00091f66) cell_myfav_contact_pane_cp2_ParamLimits

0x69ba,	// (0x00091f66) cell_myfav_contact_pane_cp2

0x69d2,	// (0x00091f7e) cell_myfav_contact_pane_cp3_ParamLimits

0x69d2,	// (0x00091f7e) cell_myfav_contact_pane_cp3

0x69e9,	// (0x00091f95) cell_myfav_contact_pane_cp4_ParamLimits

0x69e9,	// (0x00091f95) cell_myfav_contact_pane_cp4

0x6a01,	// (0x00091fad) cell_myfav_contact_pane_cp5_ParamLimits

0x6a01,	// (0x00091fad) cell_myfav_contact_pane_cp5

0x6a15,	// (0x00091fc1) cell_myfav_contact_pane_cp6_ParamLimits

0x6a15,	// (0x00091fc1) cell_myfav_contact_pane_cp6

0x6a2b,	// (0x00091fd7) cell_myfav_contact_pane_cp7_ParamLimits

0x6a2b,	// (0x00091fd7) cell_myfav_contact_pane_cp7

0xd6b9,	// (0x00098c65) listscroll_gen_pane_cp05

0x6a45,	// (0x00091ff1) main_myfav_hc_pane_g1_ParamLimits

0x6a45,	// (0x00091ff1) main_myfav_hc_pane_g1

0x6a5f,	// (0x0009200b) main_myfav_hc_pane_g2_ParamLimits

0x6a5f,	// (0x0009200b) main_myfav_hc_pane_g2

0x0002,

0xf94d,	// (0x0009aef9) main_myfav_hc_pane_g_ParamLimits

0xf94d,	// (0x0009aef9) main_myfav_hc_pane_g

0x6a91,	// (0x0009203d) main_myfav_hc_pane_t1_ParamLimits

0x6a91,	// (0x0009203d) main_myfav_hc_pane_t1

0xd6c2,	// (0x00098c6e) main_myfav_hc_pane_t2_ParamLimits

0xd6c2,	// (0x00098c6e) main_myfav_hc_pane_t2

0xd6d4,	// (0x00098c80) main_myfav_hc_pane_t3_ParamLimits

0xd6d4,	// (0x00098c80) main_myfav_hc_pane_t3

0x6aa8,	// (0x00092054) main_myfav_hc_pane_t4_ParamLimits

0x6aa8,	// (0x00092054) main_myfav_hc_pane_t4

0x0004,

0xf954,	// (0x0009af00) main_myfav_hc_pane_t_ParamLimits

0xf954,	// (0x0009af00) main_myfav_hc_pane_t

0xcbc0,	// (0x0009816c) bg_myfav_hc_instruction_pane_g1

0xd6e6,	// (0x00098c92) cell_myfav_contact_pane_g1_ParamLimits

0xd6e6,	// (0x00098c92) cell_myfav_contact_pane_g1

0xd6e6,	// (0x00098c92) cell_myfav_contact_pane_g2_ParamLimits

0xd6e6,	// (0x00098c92) cell_myfav_contact_pane_g2

0xd6f2,	// (0x00098c9e) cell_myfav_contact_pane_g3_ParamLimits

0xd6f2,	// (0x00098c9e) cell_myfav_contact_pane_g3

0xce85,	// (0x00098431) cell_myfav_contact_pane_g4_ParamLimits

0xce85,	// (0x00098431) cell_myfav_contact_pane_g4

0xd6ff,	// (0x00098cab) cell_myfav_contact_pane_g5_ParamLimits

0xd6ff,	// (0x00098cab) cell_myfav_contact_pane_g5

0x0004,

0xf95f,	// (0x0009af0b) cell_myfav_contact_pane_g_ParamLimits

0xf95f,	// (0x0009af0b) cell_myfav_contact_pane_g

0x6a79,	// (0x00092025) main_myfav_hc_pane_g3_ParamLimits

0x6a79,	// (0x00092025) main_myfav_hc_pane_g3

0x1043,	// (0x0008c5ef) popup_adpt_find_window

0x6ad0,	// (0x0009207c) afind_page_pane_ParamLimits

0x6ad0,	// (0x0009207c) afind_page_pane

0x6ae5,	// (0x00092091) aid_size_cell_afind_ParamLimits

0x6ae5,	// (0x00092091) aid_size_cell_afind

0x6b03,	// (0x000920af) bg_popup_sub_pane_cp09_ParamLimits

0x6b03,	// (0x000920af) bg_popup_sub_pane_cp09

0x6b10,	// (0x000920bc) find_pane_cp01_ParamLimits

0x6b10,	// (0x000920bc) find_pane_cp01

0xd70b,	// (0x00098cb7) grid_afind_control_pane_ParamLimits

0xd70b,	// (0x00098cb7) grid_afind_control_pane

0x6b1d,	// (0x000920c9) grid_afind_pane_ParamLimits

0x6b1d,	// (0x000920c9) grid_afind_pane

0x6b3c,	// (0x000920e8) cell_afind_pane_ParamLimits

0x6b3c,	// (0x000920e8) cell_afind_pane

0xcbc0,	// (0x0009816c) afind_page_pane_g1

0x6b9d,	// (0x00092149) afind_page_pane_g2

0x6ba6,	// (0x00092152) afind_page_pane_g3

0x0002,

0xf96a,	// (0x0009af16) afind_page_pane_g

0x6baf,	// (0x0009215b) afind_page_pane_t1

0xd71f,	// (0x00098ccb) cell_afind_grid_control_pane_ParamLimits

0xd71f,	// (0x00098ccb) cell_afind_grid_control_pane

0xd4e7,	// (0x00098a93) bg_button_pane_cp69_ParamLimits

0xd4e7,	// (0x00098a93) bg_button_pane_cp69

0x6bcf,	// (0x0009217b) cell_afind_pane_g1_ParamLimits

0x6bcf,	// (0x0009217b) cell_afind_pane_g1

0x6bdc,	// (0x00092188) cell_afind_pane_t1_ParamLimits

0x6bdc,	// (0x00092188) cell_afind_pane_t1

0xa90e,	// (0x00095eba) bg_button_pane_cp72

0xd72e,	// (0x00098cda) cell_afind_grid_control_pane_g1

0x3bff,	// (0x0008f1ab) aid_image_placing_area_ParamLimits

0x3bff,	// (0x0008f1ab) aid_image_placing_area

0xd1b5,	// (0x00098761) field_vitu_entry_pane_g1_ParamLimits

0xd1b5,	// (0x00098761) field_vitu_entry_pane_g1

0xd1c1,	// (0x0009876d) field_vitu_entry_pane_g2_ParamLimits

0xd1c1,	// (0x0009876d) field_vitu_entry_pane_g2

0x0001,

0xf81b,	// (0x0009adc7) field_vitu_entry_pane_g_ParamLimits

0xf81b,	// (0x0009adc7) field_vitu_entry_pane_g

0x5d54,	// (0x00091300) cell_vitu_itu_pane_g1_ParamLimits

0x5da4,	// (0x00091350) cell_vitu_itu_pane_t3_ParamLimits

0x5da4,	// (0x00091350) cell_vitu_itu_pane_t3

0xd497,	// (0x00098a43) mp4_progress_pane_t1_ParamLimits

0xd4b0,	// (0x00098a5c) mp4_progress_pane_t2_ParamLimits

0xf8b0,	// (0x0009ae5c) mp4_progress_pane_t_ParamLimits

0xd4c9,	// (0x00098a75) mup_progress_pane_cp04_ParamLimits

0x6abc,	// (0x00092068) main_myfav_hc_pane_t5_ParamLimits

0x6abc,	// (0x00092068) main_myfav_hc_pane_t5

0x0f04,	// (0x0008c4b0) aid_zoom_text_primary

0x1043,	// (0x0008c5ef) popup_adpt_find_window_ParamLimits

0xa480,	// (0x00095a2c) main_cam_set_pane

0x64d1,	// (0x00091a7d) cam4_zoom_pane_ParamLimits

0x64d1,	// (0x00091a7d) cam4_zoom_pane

0x6bee,	// (0x0009219a) main_cam_set_pane_g1_ParamLimits

0x6bee,	// (0x0009219a) main_cam_set_pane_g1

0x6bfc,	// (0x000921a8) main_cam_set_pane_g2_ParamLimits

0x6bfc,	// (0x000921a8) main_cam_set_pane_g2

0x0001,

0xf971,	// (0x0009af1d) main_cam_set_pane_g_ParamLimits

0xf971,	// (0x0009af1d) main_cam_set_pane_g

0x6c1d,	// (0x000921c9) main_cam_set_pane_t1_ParamLimits

0x6c1d,	// (0x000921c9) main_cam_set_pane_t1

0x6c38,	// (0x000921e4) main_cset_listscroll_pane_ParamLimits

0x6c38,	// (0x000921e4) main_cset_listscroll_pane

0x6c58,	// (0x00092204) main_cset_slider_pane_ParamLimits

0x6c58,	// (0x00092204) main_cset_slider_pane

0xd73f,	// (0x00098ceb) main_cset_list_pane_ParamLimits

0xd73f,	// (0x00098ceb) main_cset_list_pane

0xd74f,	// (0x00098cfb) scroll_pane_cp028

0x6c7e,	// (0x0009222a) aid_area_touch_slider

0x6c9a,	// (0x00092246) cset_slider_pane

0x6cc4,	// (0x00092270) main_cset_slider_pane_g1

0x6cd9,	// (0x00092285) main_cset_slider_pane_g2

0x0011,

0xf976,	// (0x0009af22) main_cset_slider_pane_g

0xd788,	// (0x00098d34) main_cset_slider_pane_t1

0x6d95,	// (0x00092341) main_cset_slider_pane_t2

0x6daf,	// (0x0009235b) main_cset_slider_pane_t3

0x6dc9,	// (0x00092375) main_cset_slider_pane_t4

0x6de3,	// (0x0009238f) main_cset_slider_pane_t5

0x6dfd,	// (0x000923a9) main_cset_slider_pane_t6

0x6e12,	// (0x000923be) main_cset_slider_pane_t7

0x000e,

0xf99b,	// (0x0009af47) main_cset_slider_pane_t

0x6f16,	// (0x000924c2) cset_list_set_pane_ParamLimits

0x6f16,	// (0x000924c2) cset_list_set_pane

0x6f29,	// (0x000924d5) aid_position_infowindow_above

0x6f31,	// (0x000924dd) aid_position_infowindow_below

0x6f39,	// (0x000924e5) cset_list_set_pane_g1_ParamLimits

0x6f39,	// (0x000924e5) cset_list_set_pane_g1

0x6f45,	// (0x000924f1) cset_list_set_pane_g3_ParamLimits

0x6f45,	// (0x000924f1) cset_list_set_pane_g3

0x0001,

0xf9ba,	// (0x0009af66) cset_list_set_pane_g_ParamLimits

0xf9ba,	// (0x0009af66) cset_list_set_pane_g

0x6f54,	// (0x00092500) cset_list_set_pane_t1_ParamLimits

0x6f54,	// (0x00092500) cset_list_set_pane_t1

0xa480,	// (0x00095a2c) list_highlight_pane_cp021_ParamLimits

0xa480,	// (0x00095a2c) list_highlight_pane_cp021

0xb4d5,	// (0x00096a81) cset_slider_pane_g1

0xb4e7,	// (0x00096a93) cset_slider_pane_g2

0xb4de,	// (0x00096a8a) cset_slider_pane_g3

0x0002,

0xf9bf,	// (0x0009af6b) cset_slider_pane_g

0xa293,	// (0x0009583f) aid_area_touch_cam4_zoom

0xa29b,	// (0x00095847) cam4_zoom_cont_pane

0xa2a3,	// (0x0009584f) cam4_zoom_pane_g1

0xa2ab,	// (0x00095857) cam4_zoom_pane_g2

0x6f69,	// (0x00092515) cam4_zoom_pane_g3

0x0002,

0xf9c6,	// (0x0009af72) cam4_zoom_pane_g

0xdb88,	// (0x00099134) cam4_zoom_cont_pane_g1

0xdb91,	// (0x0009913d) cam4_zoom_cont_pane_g2

0xdb9a,	// (0x00099146) cam4_zoom_cont_pane_g3

0x0002,

0xf9cd,	// (0x0009af79) cam4_zoom_cont_pane_g

0x6391,	// (0x0009193d) call4_image_pane_ParamLimits

0x6391,	// (0x0009193d) call4_image_pane

0xd4f3,	// (0x00098a9f) call4_windows_conf_pane_ParamLimits

0xd532,	// (0x00098ade) popup_call4_audio_in_window_ParamLimits

0xd532,	// (0x00098ade) popup_call4_audio_in_window

0x96d4,	// (0x00094c80) bg_popup_call2_act_pane_cp02

0xd5a8,	// (0x00098b54) call4_list_conf_pane

0xcbc0,	// (0x0009816c) call4_image_pane_g1

0xcbc0,	// (0x0009816c) call4_image_pane_g2

0x0001,

0xf6dc,	// (0x0009ac88) call4_image_pane_g

0xd828,	// (0x00098dd4) list_single_graphic_popup_conf4_pane_ParamLimits

0xd828,	// (0x00098dd4) list_single_graphic_popup_conf4_pane

0x96d4,	// (0x00094c80) list_highlight_pane_cp022

0xd83b,	// (0x00098de7) list_single_graphic_popup_conf4_pane_g1

0xb05b,	// (0x00096607) list_single_graphic_popup_conf4_pane_g2

0x0001,

0xf9d4,	// (0x0009af80) list_single_graphic_popup_conf4_pane_g

0xd843,	// (0x00098def) list_single_graphic_popup_conf4_pane_t1

0x2150,	// (0x0008d6fc) popup_vtel_slider_window_ParamLimits

0x2150,	// (0x0008d6fc) popup_vtel_slider_window

0xd4d5,	// (0x00098a81) dialer2_ne_pane_t2_ParamLimits

0xd4d5,	// (0x00098a81) dialer2_ne_pane_t2

0x0001,

0xf8b5,	// (0x0009ae61) dialer2_ne_pane_t_ParamLimits

0xf8b5,	// (0x0009ae61) dialer2_ne_pane_t

0xc9a3,	// (0x00097f4f) bg_popup_sub_pane_cp010_ParamLimits

0xc9a3,	// (0x00097f4f) bg_popup_sub_pane_cp010

0x6f71,	// (0x0009251d) popup_vtel_slider_window_g1_ParamLimits

0x6f71,	// (0x0009251d) popup_vtel_slider_window_g1

0x6f84,	// (0x00092530) popup_vtel_slider_window_g2_ParamLimits

0x6f84,	// (0x00092530) popup_vtel_slider_window_g2

0x0003,

0xf9d9,	// (0x0009af85) popup_vtel_slider_window_g_ParamLimits

0xf9d9,	// (0x0009af85) popup_vtel_slider_window_g

0x6fda,	// (0x00092586) vtel_slider_pane_ParamLimits

0x6fda,	// (0x00092586) vtel_slider_pane

0x6ffc,	// (0x000925a8) vtel_slider_pane_g1_ParamLimits

0x6ffc,	// (0x000925a8) vtel_slider_pane_g1

0x7010,	// (0x000925bc) vtel_slider_pane_g2_ParamLimits

0x7010,	// (0x000925bc) vtel_slider_pane_g2

0x7028,	// (0x000925d4) vtel_slider_pane_g3_ParamLimits

0x7028,	// (0x000925d4) vtel_slider_pane_g3

0x6ffc,	// (0x000925a8) vtel_slider_pane_g4_ParamLimits

0x6ffc,	// (0x000925a8) vtel_slider_pane_g4

0x703e,	// (0x000925ea) vtel_slider_pane_g5_ParamLimits

0x703e,	// (0x000925ea) vtel_slider_pane_g5

0x0004,

0xf9e2,	// (0x0009af8e) vtel_slider_pane_g_ParamLimits

0xf9e2,	// (0x0009af8e) vtel_slider_pane_g

0xa480,	// (0x00095a2c) main_gallery2_pane

0x66d1,	// (0x00091c7d) aid_size_row_itut2_dropdow_list_ParamLimits

0x66d1,	// (0x00091c7d) aid_size_row_itut2_dropdow_list

0x675d,	// (0x00091d09) grid_vitu2_function_top_pane_ParamLimits

0x675d,	// (0x00091d09) grid_vitu2_function_top_pane

0x67c2,	// (0x00091d6e) popup_vitu2_dropdown_list_window_ParamLimits

0x67c2,	// (0x00091d6e) popup_vitu2_dropdown_list_window

0x67eb,	// (0x00091d97) popup_vitu2_match_list_window

0x7054,	// (0x00092600) cell_vitu2_function_top_pane_ParamLimits

0x7054,	// (0x00092600) cell_vitu2_function_top_pane

0x7072,	// (0x0009261e) cell_vitu2_function_top_pane_cp01_ParamLimits

0x7072,	// (0x0009261e) cell_vitu2_function_top_pane_cp01

0x7090,	// (0x0009263c) cell_vitu2_function_top_wide_pane_ParamLimits

0x7090,	// (0x0009263c) cell_vitu2_function_top_wide_pane

0xa480,	// (0x00095a2c) bg_button_pane_cp012

0x70ae,	// (0x0009265a) cell_vitu2_function_top_pane_g1

0xa2b3,	// (0x0009585f) bg_button_pane_cp013_ParamLimits

0xa2b3,	// (0x0009585f) bg_button_pane_cp013

0x70c2,	// (0x0009266e) cell_vitu2_function_top_wide_pane_g1_ParamLimits

0x70c2,	// (0x0009266e) cell_vitu2_function_top_wide_pane_g1

0xa480,	// (0x00095a2c) bg_popup_sub_pane_cp20

0x70da,	// (0x00092686) list_vitu2_match_list_pane

0xd635,	// (0x00098be1) bg_popup_sub_pane_cp20_g1

0xd63d,	// (0x00098be9) bg_popup_sub_pane_cp20_g2

0xab15,	// (0x000960c1) bg_popup_sub_pane_cp20_g3

0xd645,	// (0x00098bf1) bg_popup_sub_pane_cp20_g4

0xaaf5,	// (0x000960a1) bg_popup_sub_pane_cp20_g5

0xd859,	// (0x00098e05) bg_popup_sub_pane_cp20_g6

0xd655,	// (0x00098c01) bg_popup_sub_pane_cp20_g7

0xd65d,	// (0x00098c09) bg_popup_sub_pane_cp20_g8

0xd665,	// (0x00098c11) bg_popup_sub_pane_cp20_g9

0x0008,

0xf9ed,	// (0x0009af99) bg_popup_sub_pane_cp20_g

0xa2cf,	// (0x0009587b) list_vitu2_match_list_item_pane_ParamLimits

0xa2cf,	// (0x0009587b) list_vitu2_match_list_item_pane

0xa2e1,	// (0x0009588d) list_vitu2_match_list_item_pane_t1

0x96d4,	// (0x00094c80) bg_popup_sub_pane_cp21

0xaf5f,	// (0x0009650b) grid_vitu2_dropdown_list_pane

0x7104,	// (0x000926b0) cell_vitu2_dropdown_list_char_pane_ParamLimits

0x7104,	// (0x000926b0) cell_vitu2_dropdown_list_char_pane

0x7125,	// (0x000926d1) cell_vitu2_dropdown_list_ctrl_pane_ParamLimits

0x7125,	// (0x000926d1) cell_vitu2_dropdown_list_ctrl_pane

0xd861,	// (0x00098e0d) cell_vitu2_dropdown_list_char_pane_g1

0xd86a,	// (0x00098e16) cell_vitu2_dropdown_list_char_pane_g2

0xd873,	// (0x00098e1f) cell_vitu2_dropdown_list_char_pane_g3

0x0002,

0xfa0a,	// (0x0009afb6) cell_vitu2_dropdown_list_char_pane_g

0x7151,	// (0x000926fd) cell_vitu2_dropdown_list_char_pane_t1

0x715f,	// (0x0009270b) cell_vitu2_dropdown_list_ctrl_pane_g1_ParamLimits

0x715f,	// (0x0009270b) cell_vitu2_dropdown_list_ctrl_pane_g1

0x716f,	// (0x0009271b) cell_vitu2_dropdown_list_ctrl_pane_g2_ParamLimits

0x716f,	// (0x0009271b) cell_vitu2_dropdown_list_ctrl_pane_g2

0x7180,	// (0x0009272c) cell_vitu2_dropdown_list_ctrl_pane_g3_ParamLimits

0x7180,	// (0x0009272c) cell_vitu2_dropdown_list_ctrl_pane_g3

0x7190,	// (0x0009273c) cell_vitu2_dropdown_list_ctrl_pane_g4_ParamLimits

0x7190,	// (0x0009273c) cell_vitu2_dropdown_list_ctrl_pane_g4

0xce20,	// (0x000983cc) cell_vitu2_dropdown_list_ctrl_pane_g5_ParamLimits

0xce20,	// (0x000983cc) cell_vitu2_dropdown_list_ctrl_pane_g5

0x0004,

0xfa11,	// (0x0009afbd) cell_vitu2_dropdown_list_ctrl_pane_g_ParamLimits

0xfa11,	// (0x0009afbd) cell_vitu2_dropdown_list_ctrl_pane_g

0x71ac,	// (0x00092758) aid_size_cell_gallery2_ParamLimits

0x71ac,	// (0x00092758) aid_size_cell_gallery2

0x71ca,	// (0x00092776) grid_gallery2_pane_ParamLimits

0x71ca,	// (0x00092776) grid_gallery2_pane

0x71e4,	// (0x00092790) scroll_pane_cp029_ParamLimits

0x71e4,	// (0x00092790) scroll_pane_cp029

0x71f0,	// (0x0009279c) cell_gallery2_pane_ParamLimits

0x71f0,	// (0x0009279c) cell_gallery2_pane

0xd87c,	// (0x00098e28) cell_gallery2_pane_g2

0x724c,	// (0x000927f8) cell_gallery2_pane_g3

0xd884,	// (0x00098e30) cell_gallery2_pane_g4

0xd88c,	// (0x00098e38) cell_gallery2_pane_g5

0xb391,	// (0x0009693d) grid_highlight_pane_cp10

0x67eb,	// (0x00091d97) popup_vitu2_match_list_window_ParamLimits

0x6800,	// (0x00091dac) popup_vitu2_query_window_ParamLimits

0x6800,	// (0x00091dac) popup_vitu2_query_window

0x96d4,	// (0x00094c80) bg_vitu2_candi_button_pane

0xd861,	// (0x00098e0d) cell_vitu2_dropdown_list_char_pane_g1_copy1

0xd86a,	// (0x00098e16) cell_vitu2_dropdown_list_char_pane_g2_copy1

0xd873,	// (0x00098e1f) cell_vitu2_dropdown_list_char_pane_g2_copy2

0x046f,	// (0x0008ba1b) bg_button_pane_cp015

0x7254,	// (0x00092800) bg_button_pane_cp016

0x7267,	// (0x00092813) bg_button_pane_cp017

0xc7b6,	// (0x00097d62) bg_popup_sub_pane_cp22

0xd894,	// (0x00098e40) popup_vitu2_query_window_g1

0x04a4,	// (0x0008ba50) popup_vitu2_query_window_g2

0x0002,

0xfa1c,	// (0x0009afc8) popup_vitu2_query_window_g

0x04b7,	// (0x0008ba63) popup_vitu2_query_window_t1_ParamLimits

0x04b7,	// (0x0008ba63) popup_vitu2_query_window_t1

0x04ec,	// (0x0008ba98) popup_vitu2_query_window_t2_ParamLimits

0x04ec,	// (0x0008ba98) popup_vitu2_query_window_t2

0x04fe,	// (0x0008baaa) popup_vitu2_query_window_t3_ParamLimits

0x04fe,	// (0x0008baaa) popup_vitu2_query_window_t3

0x7297,	// (0x00092843) popup_vitu2_query_window_t4_ParamLimits

0x7297,	// (0x00092843) popup_vitu2_query_window_t4

0x72b8,	// (0x00092864) popup_vitu2_query_window_t5_ParamLimits

0x72b8,	// (0x00092864) popup_vitu2_query_window_t5

0x0006,

0xfa23,	// (0x0009afcf) popup_vitu2_query_window_t_ParamLimits

0xfa23,	// (0x0009afcf) popup_vitu2_query_window_t

0xd737,	// (0x00098ce3) main_cset_text_pane

0x6c7e,	// (0x0009222a) aid_area_touch_slider_ParamLimits

0x6c9a,	// (0x00092246) cset_slider_pane_ParamLimits

0x6cc4,	// (0x00092270) main_cset_slider_pane_g1_ParamLimits

0x6cd9,	// (0x00092285) main_cset_slider_pane_g2_ParamLimits

0xd758,	// (0x00098d04) main_cset_slider_pane_g3_ParamLimits

0xd758,	// (0x00098d04) main_cset_slider_pane_g3

0x6cee,	// (0x0009229a) main_cset_slider_pane_g4_ParamLimits

0x6cee,	// (0x0009229a) main_cset_slider_pane_g4

0x6cfd,	// (0x000922a9) main_cset_slider_pane_g5_ParamLimits

0x6cfd,	// (0x000922a9) main_cset_slider_pane_g5

0x6d09,	// (0x000922b5) main_cset_slider_pane_g6_ParamLimits

0x6d09,	// (0x000922b5) main_cset_slider_pane_g6

0xf976,	// (0x0009af22) main_cset_slider_pane_g_ParamLimits

0xd788,	// (0x00098d34) main_cset_slider_pane_t1_ParamLimits

0x6d95,	// (0x00092341) main_cset_slider_pane_t2_ParamLimits

0x6daf,	// (0x0009235b) main_cset_slider_pane_t3_ParamLimits

0x6dc9,	// (0x00092375) main_cset_slider_pane_t4_ParamLimits

0x6de3,	// (0x0009238f) main_cset_slider_pane_t5_ParamLimits

0x6dfd,	// (0x000923a9) main_cset_slider_pane_t6_ParamLimits

0x6e12,	// (0x000923be) main_cset_slider_pane_t7_ParamLimits

0x6e3c,	// (0x000923e8) main_cset_slider_pane_t8_ParamLimits

0x6e3c,	// (0x000923e8) main_cset_slider_pane_t8

0x6e64,	// (0x00092410) main_cset_slider_pane_t9_ParamLimits

0x6e64,	// (0x00092410) main_cset_slider_pane_t9

0x6e8c,	// (0x00092438) main_cset_slider_pane_t10_ParamLimits

0x6e8c,	// (0x00092438) main_cset_slider_pane_t10

0x6eb4,	// (0x00092460) main_cset_slider_pane_t11_ParamLimits

0x6eb4,	// (0x00092460) main_cset_slider_pane_t11

0x6edc,	// (0x00092488) main_cset_slider_pane_t12_ParamLimits

0x6edc,	// (0x00092488) main_cset_slider_pane_t12

0x6ef9,	// (0x000924a5) main_cset_slider_pane_t13_ParamLimits

0x6ef9,	// (0x000924a5) main_cset_slider_pane_t13

0xf99b,	// (0x0009af47) main_cset_slider_pane_t_ParamLimits

0x96d4,	// (0x00094c80) bg_popup_sub_pane_cp011

0xd8a0,	// (0x00098e4c) main_cset_text_pane_g1

0xd8a8,	// (0x00098e54) main_cset_text_pane_t1

0xd8b6,	// (0x00098e62) main_cset_text_pane_t2

0xd8c4,	// (0x00098e70) main_cset_text_pane_t3

0xd8d2,	// (0x00098e7e) main_cset_text_pane_t4

0xd8e0,	// (0x00098e8c) main_cset_text_pane_t5

0xd8ee,	// (0x00098e9a) main_cset_text_pane_t6

0xd8fc,	// (0x00098ea8) main_cset_text_pane_t7

0x0006,

0xfa32,	// (0x0009afde) main_cset_text_pane_t

0x96d4,	// (0x00094c80) main_cam4_burst_pane

0x96d4,	// (0x00094c80) main_cam5_pane

0x6bbd,	// (0x00092169) bg_button_pane_cp019

0x6bc6,	// (0x00092172) bg_button_pane_cp020

0xd764,	// (0x00098d10) main_cset_slider_pane_g7_ParamLimits

0xd764,	// (0x00098d10) main_cset_slider_pane_g7

0xd770,	// (0x00098d1c) main_cset_slider_pane_g8_ParamLimits

0xd770,	// (0x00098d1c) main_cset_slider_pane_g8

0x6d1d,	// (0x000922c9) main_cset_slider_pane_g9_ParamLimits

0x6d1d,	// (0x000922c9) main_cset_slider_pane_g9

0x6d29,	// (0x000922d5) main_cset_slider_pane_g10_ParamLimits

0x6d29,	// (0x000922d5) main_cset_slider_pane_g10

0x6d35,	// (0x000922e1) main_cset_slider_pane_g11_ParamLimits

0x6d35,	// (0x000922e1) main_cset_slider_pane_g11

0x6d41,	// (0x000922ed) main_cset_slider_pane_g12_ParamLimits

0x6d41,	// (0x000922ed) main_cset_slider_pane_g12

0x6d4d,	// (0x000922f9) main_cset_slider_pane_g13_ParamLimits

0x6d4d,	// (0x000922f9) main_cset_slider_pane_g13

0x6d59,	// (0x00092305) main_cset_slider_pane_g14_ParamLimits

0x6d59,	// (0x00092305) main_cset_slider_pane_g14

0x6d65,	// (0x00092311) main_cset_slider_pane_g15_ParamLimits

0x6d65,	// (0x00092311) main_cset_slider_pane_g15

0xd7b6,	// (0x00098d62) main_cset_slider_pane_t14_ParamLimits

0xd7b6,	// (0x00098d62) main_cset_slider_pane_t14

0xd7ef,	// (0x00098d9b) main_cset_slider_pane_t15_ParamLimits

0xd7ef,	// (0x00098d9b) main_cset_slider_pane_t15

0x732f,	// (0x000928db) aid_cam4_burst_size_cell_ParamLimits

0x732f,	// (0x000928db) aid_cam4_burst_size_cell

0x734f,	// (0x000928fb) grid_cam4_burst_pane_ParamLimits

0x734f,	// (0x000928fb) grid_cam4_burst_pane

0x7387,	// (0x00092933) linegrid_cam4_burst_pane_ParamLimits

0x7387,	// (0x00092933) linegrid_cam4_burst_pane

0xd90a,	// (0x00098eb6) scroll_pane_cp30_ParamLimits

0xd90a,	// (0x00098eb6) scroll_pane_cp30

0x73ad,	// (0x00092959) cell_cam4_burst_pane_ParamLimits

0x73ad,	// (0x00092959) cell_cam4_burst_pane

0xd916,	// (0x00098ec2) linegrid_cam4_burst_pane_g1_ParamLimits

0xd916,	// (0x00098ec2) linegrid_cam4_burst_pane_g1

0x73fa,	// (0x000929a6) linegrid_cam4_burst_pane_g2_ParamLimits

0x73fa,	// (0x000929a6) linegrid_cam4_burst_pane_g2

0xd923,	// (0x00098ecf) linegrid_cam4_burst_pane_g3_ParamLimits

0xd923,	// (0x00098ecf) linegrid_cam4_burst_pane_g3

0x0002,

0xfa41,	// (0x0009afed) linegrid_cam4_burst_pane_g_ParamLimits

0xfa41,	// (0x0009afed) linegrid_cam4_burst_pane_g

0x740b,	// (0x000929b7) linegrid_cam4_burst_pane_g3_copy1_ParamLimits

0x740b,	// (0x000929b7) linegrid_cam4_burst_pane_g3_copy1

0xd930,	// (0x00098edc) linegrid_cam4_burst_pane_g4_ParamLimits

0xd930,	// (0x00098edc) linegrid_cam4_burst_pane_g4

0x7425,	// (0x000929d1) linegrid_cam4_burst_pane_g5_ParamLimits

0x7425,	// (0x000929d1) linegrid_cam4_burst_pane_g5

0x7436,	// (0x000929e2) linegrid_cam4_burst_pane_g6_ParamLimits

0x7436,	// (0x000929e2) linegrid_cam4_burst_pane_g6

0xd93d,	// (0x00098ee9) linegrid_cam4_burst_pane_g7_ParamLimits

0xd93d,	// (0x00098ee9) linegrid_cam4_burst_pane_g7

0x744d,	// (0x000929f9) cell_cam4_burst_pane_g1

0xd956,	// (0x00098f02) main_cam5_pane_t1_ParamLimits

0xd956,	// (0x00098f02) main_cam5_pane_t1

0xd968,	// (0x00098f14) main_cam5_pane_t2_ParamLimits

0xd968,	// (0x00098f14) main_cam5_pane_t2

0xd97a,	// (0x00098f26) main_cam5_pane_t3_ParamLimits

0xd97a,	// (0x00098f26) main_cam5_pane_t3

0xd98c,	// (0x00098f38) main_cam5_pane_t4_ParamLimits

0xd98c,	// (0x00098f38) main_cam5_pane_t4

0xd9a4,	// (0x00098f50) main_cam5_pane_t5_ParamLimits

0xd9a4,	// (0x00098f50) main_cam5_pane_t5

0xd9b8,	// (0x00098f64) main_cam5_pane_t6_ParamLimits

0xd9b8,	// (0x00098f64) main_cam5_pane_t6

0xd9cc,	// (0x00098f78) main_cam5_pane_t7_ParamLimits

0xd9cc,	// (0x00098f78) main_cam5_pane_t7

0xd9de,	// (0x00098f8a) main_cam5_pane_t8_ParamLimits

0xd9de,	// (0x00098f8a) main_cam5_pane_t8

0xd9fa,	// (0x00098fa6) main_cam5_pane_t9_ParamLimits

0xd9fa,	// (0x00098fa6) main_cam5_pane_t9

0xda0c,	// (0x00098fb8) main_cam5_pane_t10_ParamLimits

0xda0c,	// (0x00098fb8) main_cam5_pane_t10

0xda1e,	// (0x00098fca) main_cam5_pane_t11_ParamLimits

0xda1e,	// (0x00098fca) main_cam5_pane_t11

0xda30,	// (0x00098fdc) main_cam5_pane_t12_ParamLimits

0xda30,	// (0x00098fdc) main_cam5_pane_t12

0xda45,	// (0x00098ff1) main_cam5_pane_t13_ParamLimits

0xda45,	// (0x00098ff1) main_cam5_pane_t13

0x000c,

0xfa4d,	// (0x0009aff9) main_cam5_pane_t_ParamLimits

0xfa4d,	// (0x0009aff9) main_cam5_pane_t

0x10c5,	// (0x0008c671) popup_scut_keymap_window_ParamLimits

0x10c5,	// (0x0008c671) popup_scut_keymap_window

0x7462,	// (0x00092a0e) aid_size_cell_brow_shortcut

0xb391,	// (0x0009693d) bg_popup_window_pane_cp010

0x746e,	// (0x00092a1a) grid_scut_pane

0x747a,	// (0x00092a26) cell_scut_pane_ParamLimits

0x747a,	// (0x00092a26) cell_scut_pane

0x7491,	// (0x00092a3d) cell_scut_pane_g1

0xda62,	// (0x0009900e) cell_scut_pane_t1

0xda71,	// (0x0009901d) cell_scut_pane_t2

0x749a,	// (0x00092a46) cell_scut_pane_t3

0x0002,

0xfa68,	// (0x0009b014) cell_scut_pane_t

0x523f,	// (0x000907eb) main_mup3_pane_g8_ParamLimits

0x523f,	// (0x000907eb) main_mup3_pane_g8

0x66e9,	// (0x00091c95) area_vitu2_query_pane_ParamLimits

0x66e9,	// (0x00091c95) area_vitu2_query_pane

0x0483,	// (0x0008ba2f) input_focus_pane_cp08

0xda80,	// (0x0009902c) area_vitu2_query_pane_g1

0x0526,	// (0x0008bad2) area_vitu2_query_pane_g2

0x0001,

0xfa6f,	// (0x0009b01b) area_vitu2_query_pane_g

0x74a8,	// (0x00092a54) area_vitu2_query_pane_t1_ParamLimits

0x74a8,	// (0x00092a54) area_vitu2_query_pane_t1

0x74bc,	// (0x00092a68) area_vitu2_query_pane_t2_ParamLimits

0x74bc,	// (0x00092a68) area_vitu2_query_pane_t2

0x0537,	// (0x0008bae3) area_vitu2_query_pane_t3_ParamLimits

0x0537,	// (0x0008bae3) area_vitu2_query_pane_t3

0x74d0,	// (0x00092a7c) area_vitu2_query_pane_t4_ParamLimits

0x74d0,	// (0x00092a7c) area_vitu2_query_pane_t4

0x74f8,	// (0x00092aa4) area_vitu2_query_pane_t5_ParamLimits

0x74f8,	// (0x00092aa4) area_vitu2_query_pane_t5

0x7520,	// (0x00092acc) area_vitu2_query_pane_t6_ParamLimits

0x7520,	// (0x00092acc) area_vitu2_query_pane_t6

0x0006,

0xfa74,	// (0x0009b020) area_vitu2_query_pane_t_ParamLimits

0xfa74,	// (0x0009b020) area_vitu2_query_pane_t

0x756c,	// (0x00092b18) bg_button_pane_cp018

0x757a,	// (0x00092b26) bg_button_pane_cp021

0x055f,	// (0x0008bb0b) bg_button_pane_cp022

0x0570,	// (0x0008bb1c) input_focus_pane_cp09

0xb17f,	// (0x0009672b) aid_size_touch_mv_arrow_left

0xb1aa,	// (0x00096756) aid_size_touch_mv_arrow_right

0x6d7d,	// (0x00092329) main_cset_slider_pane_g16_ParamLimits

0x6d7d,	// (0x00092329) main_cset_slider_pane_g16

0x6d89,	// (0x00092335) main_cset_slider_pane_g17_ParamLimits

0x6d89,	// (0x00092335) main_cset_slider_pane_g17

0x744d,	// (0x000929f9) cell_cam4_burst_pane_g1_ParamLimits

0x96d4,	// (0x00094c80) compa_mode_pane

0x6f94,	// (0x00092540) popup_vtel_slider_window_g3_ParamLimits

0x6f94,	// (0x00092540) popup_vtel_slider_window_g3

0x6fab,	// (0x00092557) popup_vtel_slider_window_g4_ParamLimits

0x6fab,	// (0x00092557) popup_vtel_slider_window_g4

0x6fc2,	// (0x0009256e) popup_vtel_slider_window_t1_ParamLimits

0x6fc2,	// (0x0009256e) popup_vtel_slider_window_t1

0x96d4,	// (0x00094c80) main_cl_pane

0x9de6,	// (0x00095392) popup_imed_adjust2_window_ParamLimits

0xc7b6,	// (0x00097d62) bg_tb_trans_pane_cp05_ParamLimits

0xd0e1,	// (0x0009868d) popup_imed_adjust2_window_g1_ParamLimits

0xd0f0,	// (0x0009869c) popup_imed_adjust2_window_g2_ParamLimits

0xd0f0,	// (0x0009869c) popup_imed_adjust2_window_g2

0xd0fc,	// (0x000986a8) popup_imed_adjust2_window_g3_ParamLimits

0xd0fc,	// (0x000986a8) popup_imed_adjust2_window_g3

0x0002,

0xf7df,	// (0x0009ad8b) popup_imed_adjust2_window_g_ParamLimits

0xf7df,	// (0x0009ad8b) popup_imed_adjust2_window_g

0xd108,	// (0x000986b4) popup_imed_adjust2_window_t1_ParamLimits

0xd120,	// (0x000986cc) slider_imed_adjust_pane_ParamLimits

0xd134,	// (0x000986e0) slider_imed_adjust_pane_g1_ParamLimits

0xd144,	// (0x000986f0) slider_imed_adjust_pane_g2_ParamLimits

0xd154,	// (0x00098700) slider_imed_adjust_pane_g3_ParamLimits

0xd165,	// (0x00098711) slider_imed_adjust_pane_g4_ParamLimits

0xf7e6,	// (0x0009ad92) slider_imed_adjust_pane_g_ParamLimits

0x6472,	// (0x00091a1e) aid_touch_area_cam4_ParamLimits

0x6472,	// (0x00091a1e) aid_touch_area_cam4

0xa1aa,	// (0x00095756) battery_pane_cp01

0x6541,	// (0x00091aed) main_camera4_pane_g6_ParamLimits

0x6541,	// (0x00091aed) main_camera4_pane_g6

0x656b,	// (0x00091b17) main_camera4_pane_t2_ParamLimits

0x656b,	// (0x00091b17) main_camera4_pane_t2

0x0001,

0xf8e9,	// (0x0009ae95) main_camera4_pane_t_ParamLimits

0xf8e9,	// (0x0009ae95) main_camera4_pane_t

0x65a0,	// (0x00091b4c) aid_touch_area_vid4_ParamLimits

0x65a0,	// (0x00091b4c) aid_touch_area_vid4

0x65f4,	// (0x00091ba0) main_video4_pane_g5_ParamLimits

0x65f4,	// (0x00091ba0) main_video4_pane_g5

0x6619,	// (0x00091bc5) vid4_progress_pane_ParamLimits

0x6619,	// (0x00091bc5) vid4_progress_pane

0xd77c,	// (0x00098d28) main_cset_slider_pane_g18_ParamLimits

0xd77c,	// (0x00098d28) main_cset_slider_pane_g18

0xd94a,	// (0x00098ef6) cell_cam4_burst_pane_g2_ParamLimits

0xd94a,	// (0x00098ef6) cell_cam4_burst_pane_g2

0x0001,

0xfa48,	// (0x0009aff4) cell_cam4_burst_pane_g_ParamLimits

0xfa48,	// (0x0009aff4) cell_cam4_burst_pane_g

0xa6f5,	// (0x00095ca1) bg_cl_pane_ParamLimits

0xa6f5,	// (0x00095ca1) bg_cl_pane

0x7586,	// (0x00092b32) cl_header_pane_ParamLimits

0x7586,	// (0x00092b32) cl_header_pane

0x759a,	// (0x00092b46) cl_listscroll_pane_ParamLimits

0x759a,	// (0x00092b46) cl_listscroll_pane

0xda8c,	// (0x00099038) bg_cl_pane_g1

0xda94,	// (0x00099040) bg_cl_pane_g2

0xda9c,	// (0x00099048) bg_cl_pane_g3

0xdaa4,	// (0x00099050) bg_cl_pane_g4

0xdaac,	// (0x00099058) bg_cl_pane_g5

0xdab4,	// (0x00099060) bg_cl_pane_g6

0xdabc,	// (0x00099068) bg_cl_pane_g7

0xdac4,	// (0x00099070) bg_cl_pane_g8

0xdacc,	// (0x00099078) bg_cl_pane_g9

0x0008,

0xfa83,	// (0x0009b02f) bg_cl_pane_g

0x75aa,	// (0x00092b56) aid_height_cl_leading_ParamLimits

0x75aa,	// (0x00092b56) aid_height_cl_leading

0x75b6,	// (0x00092b62) aid_height_cl_text_ParamLimits

0x75b6,	// (0x00092b62) aid_height_cl_text

0xa480,	// (0x00095a2c) bg_cl_header_pane_ParamLimits

0xa480,	// (0x00095a2c) bg_cl_header_pane

0x75d5,	// (0x00092b81) cl_header_pane_g1_ParamLimits

0x75d5,	// (0x00092b81) cl_header_pane_g1

0x75eb,	// (0x00092b97) cl_header_pane_t1_ParamLimits

0x75eb,	// (0x00092b97) cl_header_pane_t1

0xdad4,	// (0x00099080) cl_list_pane

0xd74f,	// (0x00098cfb) hc_scroll_pane_cp01

0xaaf5,	// (0x000960a1) bg_cl_header_pane_g1

0xd635,	// (0x00098be1) bg_cl_header_pane_g2

0xab15,	// (0x000960c1) bg_cl_header_pane_g3

0xd645,	// (0x00098bf1) bg_cl_header_pane_g4

0xd63d,	// (0x00098be9) bg_cl_header_pane_g5

0xd859,	// (0x00098e05) bg_cl_header_pane_g6

0xd65d,	// (0x00098c09) bg_cl_header_pane_g7

0xd665,	// (0x00098c11) bg_cl_header_pane_g8

0xd655,	// (0x00098c01) bg_cl_header_pane_g9

0x0008,

0xfa96,	// (0x0009b042) bg_cl_header_pane_g

0x7604,	// (0x00092bb0) hc_cl_list_double_graphic_heading_pane_ParamLimits

0x7604,	// (0x00092bb0) hc_cl_list_double_graphic_heading_pane

0x7615,	// (0x00092bc1) hc_cl_list_single_graphic_pane_ParamLimits

0x7615,	// (0x00092bc1) hc_cl_list_single_graphic_pane

0x762e,	// (0x00092bda) hc_cl_list_single_graphic_pane_g1_ParamLimits

0x762e,	// (0x00092bda) hc_cl_list_single_graphic_pane_g1

0x763a,	// (0x00092be6) hc_cl_list_single_graphic_pane_g2_ParamLimits

0x763a,	// (0x00092be6) hc_cl_list_single_graphic_pane_g2

0x0001,

0xfaa9,	// (0x0009b055) hc_cl_list_single_graphic_pane_g_ParamLimits

0xfaa9,	// (0x0009b055) hc_cl_list_single_graphic_pane_g

0x764e,	// (0x00092bfa) hc_cl_list_single_graphic_pane_t1_ParamLimits

0x764e,	// (0x00092bfa) hc_cl_list_single_graphic_pane_t1

0x762e,	// (0x00092bda) hc_cl_list_double_graphic_heading_pane_g1_ParamLimits

0x762e,	// (0x00092bda) hc_cl_list_double_graphic_heading_pane_g1

0x7663,	// (0x00092c0f) hc_cl_list_double_graphic_heading_pane_g2_ParamLimits

0x7663,	// (0x00092c0f) hc_cl_list_double_graphic_heading_pane_g2

0x7677,	// (0x00092c23) hc_cl_list_double_graphic_heading_pane_g3_ParamLimits

0x7677,	// (0x00092c23) hc_cl_list_double_graphic_heading_pane_g3

0x0002,

0xfaae,	// (0x0009b05a) hc_cl_list_double_graphic_heading_pane_g_ParamLimits

0xfaae,	// (0x0009b05a) hc_cl_list_double_graphic_heading_pane_g

0x768b,	// (0x00092c37) hc_cl_list_double_graphic_heading_pane_t1_ParamLimits

0x768b,	// (0x00092c37) hc_cl_list_double_graphic_heading_pane_t1

0x76a0,	// (0x00092c4c) hc_cl_list_double_graphic_heading_pane_t2_ParamLimits

0x76a0,	// (0x00092c4c) hc_cl_list_double_graphic_heading_pane_t2

0x0001,

0xfab5,	// (0x0009b061) hc_cl_list_double_graphic_heading_pane_t_ParamLimits

0xfab5,	// (0x0009b061) hc_cl_list_double_graphic_heading_pane_t

0xa2f7,	// (0x000958a3) vid4_progress_pane_g1

0xa307,	// (0x000958b3) vid4_progress_pane_g2

0x76b5,	// (0x00092c61) vid4_progress_pane_g3

0xa317,	// (0x000958c3) vid4_progress_pane_g4

0x0004,

0xfaba,	// (0x0009b066) vid4_progress_pane_g

0x76c7,	// (0x00092c73) vid4_progress_pane_t1

0xa335,	// (0x000958e1) vid4_progress_pane_t2

0x0002,

0xfac5,	// (0x0009b071) vid4_progress_pane_t

0x76dd,	// (0x00092c89) wait_bar_pane_cp07

0xc9b1,	// (0x00097f5d) blid_firmament_pane_ParamLimits

0xc9f4,	// (0x00097fa0) popup_blid_sat_info2_window_g1

0xca18,	// (0x00097fc4) popup_blid_sat_info2_window_t3

0xca26,	// (0x00097fd2) popup_blid_sat_info2_window_t4

0xca34,	// (0x00097fe0) popup_blid_sat_info2_window_t5

0xca42,	// (0x00097fee) popup_blid_sat_info2_window_t6

0xca52,	// (0x00097ffe) popup_blid_sat_info2_window_t7

0xca60,	// (0x0009800c) popup_blid_sat_info2_window_t8

0xca6e,	// (0x0009801a) popup_blid_sat_info2_window_t9

0xca7c,	// (0x00098028) popup_blid_sat_info2_window_t10

0xcb40,	// (0x000980ec) aid_firma_cardinal_ParamLimits

0xcb54,	// (0x00098100) blid_firmament_pane_t1_ParamLimits

0xcb6b,	// (0x00098117) blid_firmament_pane_t2_ParamLimits

0xcb82,	// (0x0009812e) blid_firmament_pane_t3_ParamLimits

0xcb99,	// (0x00098145) blid_firmament_pane_t4_ParamLimits

0xf6d3,	// (0x0009ac7f) blid_firmament_pane_t_ParamLimits

0xcbb0,	// (0x0009815c) blid_sat_info_pane_ParamLimits

0xa480,	// (0x00095a2c) main_cam_set_pane_ParamLimits

0x5b03,	// (0x000910af) aid_size_cell_colour_35_ParamLimits

0x5b23,	// (0x000910cf) aid_size_cell_colour_112_ParamLimits

0x5b43,	// (0x000910ef) aid_size_cell_effect_ParamLimits

0xc7b6,	// (0x00097d62) bg_tb_trans_pane_cp02_ParamLimits

0xad65,	// (0x00096311) heading_imed_pane_ParamLimits

0x5b63,	// (0x0009110f) listscroll_imed_pane_ParamLimits

0xbdd0,	// (0x0009737c) popup_call2_audio_first_window_g5_ParamLimits

0xbdd0,	// (0x0009737c) popup_call2_audio_first_window_g5

0x611d,	// (0x000916c9) aid_size_touch_image3_arrow_left_ParamLimits

0x611d,	// (0x000916c9) aid_size_touch_image3_arrow_left

0x6149,	// (0x000916f5) aid_size_touch_image3_arrow_right_ParamLimits

0x6149,	// (0x000916f5) aid_size_touch_image3_arrow_right

0xa34a,	// (0x000958f6) vid4_progress_pane_t3

0x5e8f,	// (0x0009143b) main_hwr_training_symbol_option_pane_ParamLimits

0x5e8f,	// (0x0009143b) main_hwr_training_symbol_option_pane

0xd3d7,	// (0x00098983) popup_hwr_training_preview_window_ParamLimits

0xd3d7,	// (0x00098983) popup_hwr_training_preview_window

0x5eaf,	// (0x0009145b) hwr_training_navi_pane_g5_ParamLimits

0x5eaf,	// (0x0009145b) hwr_training_navi_pane_g5

0xd623,	// (0x00098bcf) popup_char_count_window

0xa480,	// (0x00095a2c) bg_popup_sub_pane_cp20_ParamLimits

0x70da,	// (0x00092686) list_vitu2_match_list_pane_ParamLimits

0x70e9,	// (0x00092695) vitu2_page_scroll_pane_ParamLimits

0x70e9,	// (0x00092695) vitu2_page_scroll_pane

0xdadd,	// (0x00099089) list_single_hwr_training_symbol_option_pane_ParamLimits

0xdadd,	// (0x00099089) list_single_hwr_training_symbol_option_pane

0xdaf0,	// (0x0009909c) list_single_hwr_training_symbol_option_pane_g1

0xdaf8,	// (0x000990a4) list_single_hwr_training_symbol_option_pane_t1

0xdb06,	// (0x000990b2) bg_button_pane_cp023

0xdb0f,	// (0x000990bb) bg_button_pane_cp024

0x76ff,	// (0x00092cab) vitu2_page_scroll_pane_g1

0x7707,	// (0x00092cb3) vitu2_page_scroll_pane_g2

0x0001,

0xfacc,	// (0x0009b078) vitu2_page_scroll_pane_g

0x770f,	// (0x00092cbb) vitu2_page_scroll_pane_t1

0xd191,	// (0x0009873d) popup_char_count_window_g1

0xdb42,	// (0x000990ee) popup_char_count_window_g2

0xdb4b,	// (0x000990f7) popup_char_count_window_g3

0x0002,

0xfad1,	// (0x0009b07d) popup_char_count_window_g

0xdb54,	// (0x00099100) popup_char_count_window_t1

0x96d4,	// (0x00094c80) main_vded2_pane

0xd0cd,	// (0x00098679) aid_size_cell_imed_line

0xd0d7,	// (0x00098683) grid_imed_line_width_pane

0xa260,	// (0x0009580c) vid4_indicators_pane_g4

0xdb62,	// (0x0009910e) cell_imed_line_width_pane_ParamLimits

0xdb62,	// (0x0009910e) cell_imed_line_width_pane

0xdba3,	// (0x0009914f) cell_imed_line_width_pane_g1

0xdb76,	// (0x00099122) cell_imed_line_width_pane_g2

0x0001,

0xfad8,	// (0x0009b084) cell_imed_line_width_pane_g

0x771e,	// (0x00092cca) main_vded2_pane_g1_ParamLimits

0x771e,	// (0x00092cca) main_vded2_pane_g1

0x7734,	// (0x00092ce0) main_vded2_pane_g2_ParamLimits

0x7734,	// (0x00092ce0) main_vded2_pane_g2

0x0001,

0xfadd,	// (0x0009b089) main_vded2_pane_g_ParamLimits

0xfadd,	// (0x0009b089) main_vded2_pane_g

0x7746,	// (0x00092cf2) vded2_slider_pane_ParamLimits

0x7746,	// (0x00092cf2) vded2_slider_pane

0x7756,	// (0x00092d02) aid_size_touch_vded2_end

0x7760,	// (0x00092d0c) aid_size_touch_vded2_playhead

0xdbac,	// (0x00099158) aid_size_touch_vded2_start

0xdbb4,	// (0x00099160) vded2_slider_bg_pane

0xdbbd,	// (0x00099169) vded2_slider_pane_g1

0xdbc6,	// (0x00099172) vded2_slider_pane_g2

0x776a,	// (0x00092d16) vded2_slider_pane_g3

0x0002,

0xfae2,	// (0x0009b08e) vded2_slider_pane_g

0xdbce,	// (0x0009917a) vded2_slider_bg_pane_g1

0xdbd7,	// (0x00099183) vded2_slider_bg_pane_g2

0xdbe0,	// (0x0009918c) vded2_slider_bg_pane_g3

0x0002,

0xfae9,	// (0x0009b095) vded2_slider_bg_pane_g

0x3868,	// (0x0008ee14) aid_postcard_touch_down_pane_ParamLimits

0x3868,	// (0x0008ee14) aid_postcard_touch_down_pane

0x387e,	// (0x0008ee2a) aid_postcard_touch_up_pane_ParamLimits

0x387e,	// (0x0008ee2a) aid_postcard_touch_up_pane

0x96d4,	// (0x00094c80) main_blid2_pane

0x9dcc,	// (0x00095378) popup_blid2_search_window

0x96d4,	// (0x00094c80) blid2_gps_pane

0x96d4,	// (0x00094c80) blid2_navig_pane

0x96d4,	// (0x00094c80) blid2_search_pane

0x96d4,	// (0x00094c80) blid2_tripm_pane

0x7775,	// (0x00092d21) blid2_search_pane_g1_ParamLimits

0x7775,	// (0x00092d21) blid2_search_pane_g1

0x778d,	// (0x00092d39) blid2_search_pane_t1_ParamLimits

0x778d,	// (0x00092d39) blid2_search_pane_t1

0x779f,	// (0x00092d4b) aid_size_cell_blid2_gps_ParamLimits

0x779f,	// (0x00092d4b) aid_size_cell_blid2_gps

0x77b7,	// (0x00092d63) blid2_gps_pane_g1_ParamLimits

0x77b7,	// (0x00092d63) blid2_gps_pane_g1

0x77cb,	// (0x00092d77) grid_blid2_satellite_pane_ParamLimits

0x77cb,	// (0x00092d77) grid_blid2_satellite_pane

0x77e5,	// (0x00092d91) blid2_navig_pane_g1_ParamLimits

0x77e5,	// (0x00092d91) blid2_navig_pane_g1

0x77f1,	// (0x00092d9d) blid2_navig_pane_t1_ParamLimits

0x77f1,	// (0x00092d9d) blid2_navig_pane_t1

0x780c,	// (0x00092db8) blid2_navig_pane_t2_ParamLimits

0x780c,	// (0x00092db8) blid2_navig_pane_t2

0x0001,

0xfaf0,	// (0x0009b09c) blid2_navig_pane_t_ParamLimits

0xfaf0,	// (0x0009b09c) blid2_navig_pane_t

0x7827,	// (0x00092dd3) blid2_navig_ring_pane_ParamLimits

0x7827,	// (0x00092dd3) blid2_navig_ring_pane

0x7840,	// (0x00092dec) blid2_speed_pane_ParamLimits

0x7840,	// (0x00092dec) blid2_speed_pane

0x784c,	// (0x00092df8) blid2_tripm_pane_g1_ParamLimits

0x784c,	// (0x00092df8) blid2_tripm_pane_g1

0x7867,	// (0x00092e13) blid2_tripm_pane_g2_ParamLimits

0x7867,	// (0x00092e13) blid2_tripm_pane_g2

0x787b,	// (0x00092e27) blid2_tripm_pane_g3_ParamLimits

0x787b,	// (0x00092e27) blid2_tripm_pane_g3

0x788f,	// (0x00092e3b) blid2_tripm_pane_g4_ParamLimits

0x788f,	// (0x00092e3b) blid2_tripm_pane_g4

0x78a3,	// (0x00092e4f) blid2_tripm_pane_g5_ParamLimits

0x78a3,	// (0x00092e4f) blid2_tripm_pane_g5

0x0005,

0xfaf5,	// (0x0009b0a1) blid2_tripm_pane_g_ParamLimits

0xfaf5,	// (0x0009b0a1) blid2_tripm_pane_g

0x78c9,	// (0x00092e75) blid2_tripm_pane_t1_ParamLimits

0x78c9,	// (0x00092e75) blid2_tripm_pane_t1

0x78e4,	// (0x00092e90) blid2_tripm_pane_t2_ParamLimits

0x78e4,	// (0x00092e90) blid2_tripm_pane_t2

0x78fd,	// (0x00092ea9) blid2_tripm_pane_t3_ParamLimits

0x78fd,	// (0x00092ea9) blid2_tripm_pane_t3

0x0003,

0xfb02,	// (0x0009b0ae) blid2_tripm_pane_t_ParamLimits

0xfb02,	// (0x0009b0ae) blid2_tripm_pane_t

0x7944,	// (0x00092ef0) cell_blid2_satellite_pane_ParamLimits

0x7944,	// (0x00092ef0) cell_blid2_satellite_pane

0x7962,	// (0x00092f0e) cell_blid2_satellite_pane_g1

0xdbe9,	// (0x00099195) cell_blid2_satellite_pane_t1

0xcbc0,	// (0x0009816c) blid2_speed_pane_g1

0xdbf7,	// (0x000991a3) blid2_speed_pane_t1

0xdc05,	// (0x000991b1) blid2_speed_pane_t2

0x0001,

0xfb0b,	// (0x0009b0b7) blid2_speed_pane_t

0xcbc0,	// (0x0009816c) blid2_navig_ring_pane_g1

0x796b,	// (0x00092f17) blid2_navig_ring_pane_g2

0x7973,	// (0x00092f1f) blid2_navig_ring_pane_g3

0x797b,	// (0x00092f27) blid2_navig_ring_pane_g4

0x7983,	// (0x00092f2f) blid2_navig_ring_pane_g5

0x0004,

0xfb10,	// (0x0009b0bc) blid2_navig_ring_pane_g

0x96d4,	// (0x00094c80) bg_popup_window_pane_cp011

0xdc13,	// (0x000991bf) popup_blid2_search_window_g1

0xdc1b,	// (0x000991c7) popup_blid2_search_window_t1

0xdc29,	// (0x000991d5) popup_blid2_search_window_t2

0x0001,

0xfb1b,	// (0x0009b0c7) popup_blid2_search_window_t

0xaa04,	// (0x00095fb0) main_browser_pane_g1

0xa6f5,	// (0x00095ca1) main_browser_pane_ParamLimits

0xa480,	// (0x00095a2c) bg_button_pane_cp011_ParamLimits

0x695a,	// (0x00091f06) cell_vitu2_function_pane_g1_ParamLimits

0xc7b6,	// (0x00097d62) bg_popup_sub_pane_cp22_ParamLimits

0x0483,	// (0x0008ba2f) input_focus_pane_cp08_ParamLimits

0x727a,	// (0x00092826) popup_vitu2_query_button_pane_ParamLimits

0x727a,	// (0x00092826) popup_vitu2_query_button_pane

0x049a,	// (0x0008ba46) popup_vitu2_query_input_button_pane

0xd894,	// (0x00098e40) popup_vitu2_query_window_g1_ParamLimits

0x04a4,	// (0x0008ba50) popup_vitu2_query_window_g2_ParamLimits

0xfa1c,	// (0x0009afc8) popup_vitu2_query_window_g_ParamLimits

0x96d4,	// (0x00094c80) bg_button_pane_cp026

0x798b,	// (0x00092f37) popup_vitu2_query_input_button_pane_g1

0x96d4,	// (0x00094c80) bg_button_pane_cp025

0xdc37,	// (0x000991e3) popup_vitu2_query_button_pane_t1

0x4f00,	// (0x000904ac) main_mp3_pane_t6

0x4f0e,	// (0x000904ba) popup_slider_window_cp01

0xa1c6,	// (0x00095772) cam4_battery_pane

0xa21f,	// (0x000957cb) cam4_battery_pane_cp02

0xa2ef,	// (0x0009589b) cam4_battery_pane_cp01

0xa2ef,	// (0x0009589b) cam4_battery_pane_cp03

0xcbc0,	// (0x0009816c) cam4_battery_pane_g1

0xdb7e,	// (0x0009912a) cam4_battery_pane_g2

0x0001,

0xfb20,	// (0x0009b0cc) cam4_battery_pane_g

0xca8a,	// (0x00098036) popup_blid_sat_info2_window_t11

0xb17f,	// (0x0009672b) aid_size_touch_mv_arrow_left_ParamLimits

0xb1aa,	// (0x00096756) aid_size_touch_mv_arrow_right_ParamLimits

0xb261,	// (0x0009680d) navi_pane_g1_ParamLimits

0xb26d,	// (0x00096819) navi_pane_g2_ParamLimits

0xb29b,	// (0x00096847) navi_pane_g3_ParamLimits

0xf3e5,	// (0x0009a991) navi_pane_g_ParamLimits

0x335c,	// (0x0008e908) navi_pane_mv_t1_ParamLimits

0x5b6f,	// (0x0009111b) grid_imed_effect_pane_ParamLimits

0x204d,	// (0x0008d5f9) aid_placing_vt_slider_lsc

0xa953,	// (0x00095eff) aid_placing_vt_slider_prt

0xa480,	// (0x00095a2c) bg_tb_trans_pane_cp01_ParamLimits

0xcd40,	// (0x000982ec) popup_image_details_window_g1_ParamLimits

0xcd53,	// (0x000982ff) popup_image_details_window_g2_ParamLimits

0xcd68,	// (0x00098314) popup_image_details_window_g3_ParamLimits

0xcd68,	// (0x00098314) popup_image_details_window_g3

0xf718,	// (0x0009acc4) popup_image_details_window_g_ParamLimits

0xcd7c,	// (0x00098328) popup_image_details_window_t1_ParamLimits

0xcd8e,	// (0x0009833a) popup_image_details_window_t2_ParamLimits

0xcda7,	// (0x00098353) popup_image_details_window_t3_ParamLimits

0xcdbb,	// (0x00098367) popup_image_details_window_t4_ParamLimits

0xcdd6,	// (0x00098382) popup_image_details_window_t5_ParamLimits

0xf71f,	// (0x0009accb) popup_image_details_window_t_ParamLimits

0x75c2,	// (0x00092b6e) cl_header_name_pane_ParamLimits

0x75c2,	// (0x00092b6e) cl_header_name_pane

0x7993,	// (0x00092f3f) cl_header_name_pane_t1_ParamLimits

0x7993,	// (0x00092f3f) cl_header_name_pane_t1

0x79b4,	// (0x00092f60) cl_header_name_pane_t2_ParamLimits

0x79b4,	// (0x00092f60) cl_header_name_pane_t2

0x79f6,	// (0x00092fa2) cl_header_name_pane_t3_ParamLimits

0x79f6,	// (0x00092fa2) cl_header_name_pane_t3

0x0002,

0xfb25,	// (0x0009b0d1) cl_header_name_pane_t_ParamLimits

0xfb25,	// (0x0009b0d1) cl_header_name_pane_t

0xb32a,	// (0x000968d6) navi_pane_mv_g2_ParamLimits

0xd5fd,	// (0x00098ba9) field_vitu2_entry_pane_g1_ParamLimits

0xd609,	// (0x00098bb5) field_vitu2_entry_pane_g2_ParamLimits

0xd615,	// (0x00098bc1) field_vitu2_entry_pane_g3_ParamLimits

0xd615,	// (0x00098bc1) field_vitu2_entry_pane_g3

0xf91b,	// (0x0009aec7) field_vitu2_entry_pane_g_ParamLimits

0x68d1,	// (0x00091e7d) cell_vitu2_itu_pane_g1_ParamLimits

0x68e1,	// (0x00091e8d) cell_vitu2_itu_pane_g2_ParamLimits

0x68e1,	// (0x00091e8d) cell_vitu2_itu_pane_g2

0x0001,

0xf927,	// (0x0009aed3) cell_vitu2_itu_pane_g_ParamLimits

0xf927,	// (0x0009aed3) cell_vitu2_itu_pane_g

0xa480,	// (0x00095a2c) bg_vkb2_func_pane_cp05_ParamLimits

0xa480,	// (0x00095a2c) bg_vkb2_func_pane_cp05

0xa480,	// (0x00095a2c) bg_vkb2_func_pane_cp03

0xa480,	// (0x00095a2c) bg_vkb2_func_pane_cp04

0xa480,	// (0x00095a2c) bg_vkb2_func_pane_cp10_ParamLimits

0xa480,	// (0x00095a2c) bg_vkb2_func_pane_cp10

0x055f,	// (0x0008bb0b) bg_vkb2_func_pane_cp08

0x756c,	// (0x00092b18) bg_vkb2_func_pane_cp06

0x757a,	// (0x00092b26) bg_vkb2_func_pane_cp07

0xdb18,	// (0x000990c4) bg_vkb2_func_pane_cp11_ParamLimits

0xdb18,	// (0x000990c4) bg_vkb2_func_pane_cp11

0xdb2d,	// (0x000990d9) bg_vkb2_func_pane_cp12_ParamLimits

0xdb2d,	// (0x000990d9) bg_vkb2_func_pane_cp12

0x96d4,	// (0x00094c80) bg_vkb2_func_pane_cp09

0xd635,	// (0x00098be1) bg_vkb2_func_pane_g1

0xab15,	// (0x000960c1) bg_vkb2_func_pane_g2

0xd63d,	// (0x00098be9) bg_vkb2_func_pane_g3

0xd645,	// (0x00098bf1) bg_vkb2_func_pane_g4

0xd859,	// (0x00098e05) bg_vkb2_func_pane_g5

0xd65d,	// (0x00098c09) bg_vkb2_func_pane_g6

0xd665,	// (0x00098c11) bg_vkb2_func_pane_g7

0xd655,	// (0x00098c01) bg_vkb2_func_pane_g8

0xaaf5,	// (0x000960a1) bg_vkb2_func_pane_g9

0x0008,

0xfb2c,	// (0x0009b0d8) bg_vkb2_func_pane_g

0x78b7,	// (0x00092e63) blid2_tripm_pane_g6_ParamLimits

0x78b7,	// (0x00092e63) blid2_tripm_pane_g6

0xd48f,	// (0x00098a3b) mp4_progress_pane_g1

0x7930,	// (0x00092edc) blid2_tripm_values_pane_ParamLimits

0x7930,	// (0x00092edc) blid2_tripm_values_pane

0x7a27,	// (0x00092fd3) blid2_tripm_values_pane_t1

0x7a35,	// (0x00092fe1) blid2_tripm_values_pane_t2

0x7a43,	// (0x00092fef) blid2_tripm_values_pane_t3

0x7a51,	// (0x00092ffd) blid2_tripm_values_pane_t4

0x7a5f,	// (0x0009300b) blid2_tripm_values_pane_t5

0x7a6d,	// (0x00093019) blid2_tripm_values_pane_t6

0x7a7b,	// (0x00093027) blid2_tripm_values_pane_t7

0x7a89,	// (0x00093035) blid2_tripm_values_pane_t8

0x7a97,	// (0x00093043) blid2_tripm_values_pane_t9

0x0008,

0xfb3f,	// (0x0009b0eb) blid2_tripm_values_pane_t

0x208f,	// (0x0008d63b) call_video_pane_t1_ParamLimits

0x20ad,	// (0x0008d659) call_video_pane_t2_ParamLimits

0xf26e,	// (0x0009a81a) call_video_pane_t_ParamLimits

0x02c0,	// (0x0008b86c) msg_header_pane_g1_ParamLimits

0xb51a,	// (0x00096ac6) msg_header_pane_g2_ParamLimits

0xb51a,	// (0x00096ac6) msg_header_pane_g2

0x0001,

0xf488,	// (0x0009aa34) msg_header_pane_g_ParamLimits

0xf488,	// (0x0009aa34) msg_header_pane_g

0xa6f5,	// (0x00095ca1) main_clock2_pane_ParamLimits

0x5868,	// (0x00090e14) grid_clock2_toolbar_pane_ParamLimits

0x5868,	// (0x00090e14) grid_clock2_toolbar_pane

0x5868,	// (0x00090e14) listscroll_clock2_pane_ParamLimits

0x5868,	// (0x00090e14) listscroll_clock2_pane

0x5961,	// (0x00090f0d) main_clock2_pane_t3_ParamLimits

0x5961,	// (0x00090f0d) main_clock2_pane_t3

0x5985,	// (0x00090f31) main_clock2_pane_t4_ParamLimits

0x5985,	// (0x00090f31) main_clock2_pane_t4

0xdc45,	// (0x000991f1) cell_clock2_toolbar_pane

0xdc4d,	// (0x000991f9) cell_clock2_toolbar_pane_cp01

0xdc4d,	// (0x000991f9) cell_clock2_toolbar_pane_cp02

0xdc55,	// (0x00099201) cell_clock2_toolbar_pane_cp03

0xdc5d,	// (0x00099209) list_clock2_pane

0xb0f5,	// (0x000966a1) scroll_pane_cp10

0xdc65,	// (0x00099211) list_single_clock2_pane_ParamLimits

0xdc65,	// (0x00099211) list_single_clock2_pane

0xb391,	// (0x0009693d) list_highlight_pane_cp08

0xdc72,	// (0x0009921e) list_single_clock2_pane_t1

0xdc80,	// (0x0009922c) list_single_clock2_pane_t2

0x0001,

0xfb52,	// (0x0009b0fe) list_single_clock2_pane_t

0x96d4,	// (0x00094c80) bg_button_pane_cp10

0xdc8e,	// (0x0009923a) cell_clock2_toolbar_pane_g1

0x37f4,	// (0x0008eda0) aid_main_viewer_pane_g1_ParamLimits

0x37f4,	// (0x0008eda0) aid_main_viewer_pane_g1

0x3802,	// (0x0008edae) aid_main_viewer_pane_g2_ParamLimits

0x3802,	// (0x0008edae) aid_main_viewer_pane_g2

0x3810,	// (0x0008edbc) aid_main_viewer_pane_g3_ParamLimits

0x3810,	// (0x0008edbc) aid_main_viewer_pane_g3

0x381f,	// (0x0008edcb) aid_main_viewer_pane_g4_ParamLimits

0x381f,	// (0x0008edcb) aid_main_viewer_pane_g4

0x0003,

0xf499,	// (0x0009aa45) aid_main_viewer_pane_g_ParamLimits

0xf499,	// (0x0009aa45) aid_main_viewer_pane_g

0x412d,	// (0x0008f6d9) main_calc_pane_ParamLimits

0x4141,	// (0x0008f6ed) main_dialer2_pane_ParamLimits

0x96d4,	// (0x00094c80) main_cam6_pane

0x96d4,	// (0x00094c80) main_vid6_pane

0x5874,	// (0x00090e20) listscroll_gen_pane_cp06_ParamLimits

0x5874,	// (0x00090e20) listscroll_gen_pane_cp06

0x59a8,	// (0x00090f54) main_clock2_pane_t5_ParamLimits

0x59a8,	// (0x00090f54) main_clock2_pane_t5

0x5a04,	// (0x00090fb0) aid_call2_pane_cp10_ParamLimits

0x5a16,	// (0x00090fc2) aid_call_pane_cp10_ParamLimits

0xb173,	// (0x0009671f) popup_clock_analogue_window_cp10_g1_ParamLimits

0xb173,	// (0x0009671f) popup_clock_analogue_window_cp10_g2_ParamLimits

0x5a28,	// (0x00090fd4) popup_clock_analogue_window_cp10_g3_ParamLimits

0x5a28,	// (0x00090fd4) popup_clock_analogue_window_cp10_g4_ParamLimits

0xb173,	// (0x0009671f) popup_clock_analogue_window_cp10_g5_ParamLimits

0xf7d4,	// (0x0009ad80) popup_clock_analogue_window_cp10_g_ParamLimits

0x5a3a,	// (0x00090fe6) popup_clock_analogue_window_cp10_t1_ParamLimits

0x60ca,	// (0x00091676) cell_dialer2_keypad_pane_g2_ParamLimits

0x60ca,	// (0x00091676) cell_dialer2_keypad_pane_g2

0x0001,

0xf8ba,	// (0x0009ae66) cell_dialer2_keypad_pane_g_ParamLimits

0xf8ba,	// (0x0009ae66) cell_dialer2_keypad_pane_g

0x60e6,	// (0x00091692) cell_dialer2_keypad_pane_t1

0x6c70,	// (0x0009221c) main_cset_text2_pane_ParamLimits

0x6c70,	// (0x0009221c) main_cset_text2_pane

0xda80,	// (0x0009902c) area_vitu2_query_pane_g1_ParamLimits

0x0526,	// (0x0008bad2) area_vitu2_query_pane_g2_ParamLimits

0xfa6f,	// (0x0009b01b) area_vitu2_query_pane_g_ParamLimits

0x7548,	// (0x00092af4) area_vitu2_query_pane_t7_ParamLimits

0x7548,	// (0x00092af4) area_vitu2_query_pane_t7

0x756c,	// (0x00092b18) bg_button_pane_cp018_ParamLimits

0x757a,	// (0x00092b26) bg_button_pane_cp021_ParamLimits

0x055f,	// (0x0008bb0b) bg_button_pane_cp022_ParamLimits

0x055f,	// (0x0008bb0b) bg_vkb2_func_pane_cp08_ParamLimits

0x756c,	// (0x00092b18) bg_vkb2_func_pane_cp06_ParamLimits

0x757a,	// (0x00092b26) bg_vkb2_func_pane_cp07_ParamLimits

0x0570,	// (0x0008bb1c) input_focus_pane_cp09_ParamLimits

0xa371,	// (0x0009591d) cam6_autofocus_pane_ParamLimits

0xa371,	// (0x0009591d) cam6_autofocus_pane

0x7aa5,	// (0x00093051) cam6_image_uncrop_pane_ParamLimits

0x7aa5,	// (0x00093051) cam6_image_uncrop_pane

0x7ab4,	// (0x00093060) cam6_indi_pane_ParamLimits

0x7ab4,	// (0x00093060) cam6_indi_pane

0x7aca,	// (0x00093076) cam6_mode_pane_ParamLimits

0x7aca,	// (0x00093076) cam6_mode_pane

0x7adc,	// (0x00093088) cam6_timer_pane_ParamLimits

0x7adc,	// (0x00093088) cam6_timer_pane

0x7ae8,	// (0x00093094) cam6_zoom_pane_ParamLimits

0x7ae8,	// (0x00093094) cam6_zoom_pane

0x7af4,	// (0x000930a0) cam6_mode_pane_g1_ParamLimits

0x7af4,	// (0x000930a0) cam6_mode_pane_g1

0x7b04,	// (0x000930b0) cam6_mode_pane_g2_ParamLimits

0x7b04,	// (0x000930b0) cam6_mode_pane_g2

0x7b14,	// (0x000930c0) cam6_mode_pane_g3_ParamLimits

0x7b14,	// (0x000930c0) cam6_mode_pane_g3

0x7b24,	// (0x000930d0) cam6_mode_pane_g4_ParamLimits

0x7b24,	// (0x000930d0) cam6_mode_pane_g4

0x0003,

0xfb57,	// (0x0009b103) cam6_mode_pane_g_ParamLimits

0xfb57,	// (0x0009b103) cam6_mode_pane_g

0xdc96,	// (0x00099242) bg_tb_trans_pane_cp08_ParamLimits

0xdc96,	// (0x00099242) bg_tb_trans_pane_cp08

0xdca4,	// (0x00099250) cam6_battery_pane_ParamLimits

0xdca4,	// (0x00099250) cam6_battery_pane

0xdcba,	// (0x00099266) cam6_indi_pane_g1_ParamLimits

0xdcba,	// (0x00099266) cam6_indi_pane_g1

0xdccc,	// (0x00099278) cam6_indi_pane_g2_ParamLimits

0xdccc,	// (0x00099278) cam6_indi_pane_g2

0xdcde,	// (0x0009928a) cam6_indi_pane_g3_ParamLimits

0xdcde,	// (0x0009928a) cam6_indi_pane_g3

0x0002,

0xfb60,	// (0x0009b10c) cam6_indi_pane_g_ParamLimits

0xfb60,	// (0x0009b10c) cam6_indi_pane_g

0xdcf0,	// (0x0009929c) cam6_indi_pane_t1_ParamLimits

0xdcf0,	// (0x0009929c) cam6_indi_pane_t1

0x7b34,	// (0x000930e0) cam6_autofocus_pane_g1

0x7b3c,	// (0x000930e8) cam6_autofocus_pane_g2

0x7b44,	// (0x000930f0) cam6_autofocus_pane_g3

0x7b4c,	// (0x000930f8) cam6_autofocus_pane_g4

0x0003,

0xfb67,	// (0x0009b113) cam6_autofocus_pane_g

0xdd16,	// (0x000992c2) cam6_timer_pane_g1

0xdd1e,	// (0x000992ca) cam6_timer_pane_t1

0xdd2c,	// (0x000992d8) cam6_zoom_cont_pane

0xdd34,	// (0x000992e0) cam6_zoom_pane_g1

0xdd3c,	// (0x000992e8) cam6_zoom_pane_g2

0x7b54,	// (0x00093100) cam6_zoom_pane_g3

0x0002,

0xfb70,	// (0x0009b11c) cam6_zoom_pane_g

0xcbc0,	// (0x0009816c) cam6_battery_pane_g1

0xcbc0,	// (0x0009816c) cam6_battery_pane_g2

0x0001,

0xf6dc,	// (0x0009ac88) cam6_battery_pane_g

0xdd44,	// (0x000992f0) cam6_zoom_cont_pane_g1

0xdd4d,	// (0x000992f9) cam6_zoom_cont_pane_g2

0xdd56,	// (0x00099302) cam6_zoom_cont_pane_g3

0x0002,

0xfb77,	// (0x0009b123) cam6_zoom_cont_pane_g

0x7b71,	// (0x0009311d) cam6_mode_pane_cp_ParamLimits

0x7b71,	// (0x0009311d) cam6_mode_pane_cp

0x7ae8,	// (0x00093094) cam6_zoom_pane_cp_ParamLimits

0x7ae8,	// (0x00093094) cam6_zoom_pane_cp

0x7b83,	// (0x0009312f) vid6_image_uncrop_cif_pane_ParamLimits

0x7b83,	// (0x0009312f) vid6_image_uncrop_cif_pane

0x7b93,	// (0x0009313f) vid6_image_uncrop_nhd_pane_ParamLimits

0x7b93,	// (0x0009313f) vid6_image_uncrop_nhd_pane

0x7aa5,	// (0x00093051) vid6_image_uncrop_vga_pane_ParamLimits

0x7aa5,	// (0x00093051) vid6_image_uncrop_vga_pane

0x7ba2,	// (0x0009314e) vid6_image_uncrop_wvga_pane_ParamLimits

0x7ba2,	// (0x0009314e) vid6_image_uncrop_wvga_pane

0x7bb1,	// (0x0009315d) vid6_indi_pane_ParamLimits

0x7bb1,	// (0x0009315d) vid6_indi_pane

0xdc96,	// (0x00099242) bg_tb_trans_pane_cp09_ParamLimits

0xdc96,	// (0x00099242) bg_tb_trans_pane_cp09

0xdd6e,	// (0x0009931a) cam6_battery_pane_cp_ParamLimits

0xdd6e,	// (0x0009931a) cam6_battery_pane_cp

0xdd7a,	// (0x00099326) vid6_indi_pane_g1_ParamLimits

0xdd7a,	// (0x00099326) vid6_indi_pane_g1

0xdd8c,	// (0x00099338) vid6_indi_pane_g2_ParamLimits

0xdd8c,	// (0x00099338) vid6_indi_pane_g2

0xdd9e,	// (0x0009934a) vid6_indi_pane_g3_ParamLimits

0xdd9e,	// (0x0009934a) vid6_indi_pane_g3

0xddb3,	// (0x0009935f) vid6_indi_pane_g4_ParamLimits

0xddb3,	// (0x0009935f) vid6_indi_pane_g4

0xddc8,	// (0x00099374) vid6_indi_pane_g5_ParamLimits

0xddc8,	// (0x00099374) vid6_indi_pane_g5

0x0004,

0xfb7e,	// (0x0009b12a) vid6_indi_pane_g_ParamLimits

0xfb7e,	// (0x0009b12a) vid6_indi_pane_g

0xdde2,	// (0x0009938e) vid6_indi_pane_t1_ParamLimits

0xdde2,	// (0x0009938e) vid6_indi_pane_t1

0xddf8,	// (0x000993a4) vid6_indi_pane_t2_ParamLimits

0xddf8,	// (0x000993a4) vid6_indi_pane_t2

0xde20,	// (0x000993cc) vid6_indi_pane_t3_ParamLimits

0xde20,	// (0x000993cc) vid6_indi_pane_t3

0xde48,	// (0x000993f4) vid6_indi_pane_t4_ParamLimits

0xde48,	// (0x000993f4) vid6_indi_pane_t4

0x0003,

0xfb89,	// (0x0009b135) vid6_indi_pane_t_ParamLimits

0xfb89,	// (0x0009b135) vid6_indi_pane_t

0xde6c,	// (0x00099418) wait_bar_pane_cp08

0x7bc9,	// (0x00093175) main_cset_text2_pane_t1_ParamLimits

0x7bc9,	// (0x00093175) main_cset_text2_pane_t1

0x7b5c,	// (0x00093108) listscroll_gen_pane_cp06_t1_ParamLimits

0x7b5c,	// (0x00093108) listscroll_gen_pane_cp06_t1

0x96d4,	// (0x00094c80) main_cam6_set_pane

0xce20,	// (0x000983cc) bg_tb_trans_pane_cp06_ParamLimits

0xa1ce,	// (0x0009577a) cam4_indicators_pane_g1_ParamLimits

0xa1df,	// (0x0009578b) cam4_indicators_pane_g2_ParamLimits

0xf8f7,	// (0x0009aea3) cam4_indicators_pane_g_ParamLimits

0xa1fd,	// (0x000957a9) cam4_indicators_pane_t1_ParamLimits

0xa480,	// (0x00095a2c) bg_tb_trans_pane_cp07_ParamLimits

0xa227,	// (0x000957d3) vid4_indicators_pane_g1_ParamLimits

0xa23b,	// (0x000957e7) vid4_indicators_pane_g2_ParamLimits

0xa24f,	// (0x000957fb) vid4_indicators_pane_g3_ParamLimits

0xa260,	// (0x0009580c) vid4_indicators_pane_g4_ParamLimits

0xf909,	// (0x0009aeb5) vid4_indicators_pane_g_ParamLimits

0xa27c,	// (0x00095828) vid4_indicators_pane_t1_ParamLimits

0xa2f7,	// (0x000958a3) vid4_progress_pane_g1_ParamLimits

0xa307,	// (0x000958b3) vid4_progress_pane_g2_ParamLimits

0x76b5,	// (0x00092c61) vid4_progress_pane_g3_ParamLimits

0xa317,	// (0x000958c3) vid4_progress_pane_g4_ParamLimits

0xfaba,	// (0x0009b066) vid4_progress_pane_g_ParamLimits

0x76c7,	// (0x00092c73) vid4_progress_pane_t1_ParamLimits

0xa335,	// (0x000958e1) vid4_progress_pane_t2_ParamLimits

0xa34a,	// (0x000958f6) vid4_progress_pane_t3_ParamLimits

0xfac5,	// (0x0009b071) vid4_progress_pane_t_ParamLimits

0x76dd,	// (0x00092c89) wait_bar_pane_cp07_ParamLimits

0x7be8,	// (0x00093194) main_cam6_set_pane_g2_ParamLimits

0x7be8,	// (0x00093194) main_cam6_set_pane_g2

0x7c0c,	// (0x000931b8) main_cset6_listscroll_pane_ParamLimits

0x7c0c,	// (0x000931b8) main_cset6_listscroll_pane

0x7c28,	// (0x000931d4) main_cset6_slider_pane_ParamLimits

0x7c28,	// (0x000931d4) main_cset6_slider_pane

0x7c3e,	// (0x000931ea) main_cset6_text2_pane_ParamLimits

0x7c3e,	// (0x000931ea) main_cset6_text2_pane

0xde7b,	// (0x00099427) main_cset6_text_pane

0xde83,	// (0x0009942f) main_cset_list_pane_copy1_ParamLimits

0xde83,	// (0x0009942f) main_cset_list_pane_copy1

0xde93,	// (0x0009943f) scroll_pane_cp028_copy1

0x7c4c,	// (0x000931f8) cset_list_set_pane_copy1

0x7c5e,	// (0x0009320a) aid_position_infowindow_above_copy1

0x7c66,	// (0x00093212) aid_position_infowindow_below_copy1

0x7c6e,	// (0x0009321a) cset_list_set_pane_g1_copy1

0x05b0,	// (0x0008bb5c) cset_list_set_pane_g3_copy1_ParamLimits

0x05b0,	// (0x0008bb5c) cset_list_set_pane_g3_copy1

0x05bf,	// (0x0008bb6b) cset_list_set_pane_t1_copy1_ParamLimits

0x05bf,	// (0x0008bb6b) cset_list_set_pane_t1_copy1

0xa480,	// (0x00095a2c) list_highlight_pane_cp021_copy1_ParamLimits

0xa480,	// (0x00095a2c) list_highlight_pane_cp021_copy1

0xde9c,	// (0x00099448) cset6_slider_pane_ParamLimits

0xde9c,	// (0x00099448) cset6_slider_pane

0xdec8,	// (0x00099474) main_cset6_slider_pane_g1_ParamLimits

0xdec8,	// (0x00099474) main_cset6_slider_pane_g1

0x7c76,	// (0x00093222) main_cset6_slider_pane_g2_ParamLimits

0x7c76,	// (0x00093222) main_cset6_slider_pane_g2

0xdef0,	// (0x0009949c) main_cset6_slider_pane_g3_ParamLimits

0xdef0,	// (0x0009949c) main_cset6_slider_pane_g3

0x7c9e,	// (0x0009324a) main_cset6_slider_pane_g4_ParamLimits

0x7c9e,	// (0x0009324a) main_cset6_slider_pane_g4

0x7caa,	// (0x00093256) main_cset6_slider_pane_g5_ParamLimits

0x7caa,	// (0x00093256) main_cset6_slider_pane_g5

0xd764,	// (0x00098d10) main_cset6_slider_pane_g7_ParamLimits

0xd764,	// (0x00098d10) main_cset6_slider_pane_g7

0xd770,	// (0x00098d1c) main_cset6_slider_pane_g8_ParamLimits

0xd770,	// (0x00098d1c) main_cset6_slider_pane_g8

0x6d1d,	// (0x000922c9) main_cset6_slider_pane_g9_ParamLimits

0x6d1d,	// (0x000922c9) main_cset6_slider_pane_g9

0x6d29,	// (0x000922d5) main_cset6_slider_pane_g10_ParamLimits

0x6d29,	// (0x000922d5) main_cset6_slider_pane_g10

0x6d35,	// (0x000922e1) main_cset6_slider_pane_g11_ParamLimits

0x6d35,	// (0x000922e1) main_cset6_slider_pane_g11

0x6d41,	// (0x000922ed) main_cset6_slider_pane_g12_ParamLimits

0x6d41,	// (0x000922ed) main_cset6_slider_pane_g12

0x6d4d,	// (0x000922f9) main_cset6_slider_pane_g13_ParamLimits

0x6d4d,	// (0x000922f9) main_cset6_slider_pane_g13

0x6d59,	// (0x00092305) main_cset6_slider_pane_g14_ParamLimits

0x6d59,	// (0x00092305) main_cset6_slider_pane_g14

0x7cb6,	// (0x00093262) main_cset6_slider_pane_g15_ParamLimits

0x7cb6,	// (0x00093262) main_cset6_slider_pane_g15

0x6d7d,	// (0x00092329) main_cset6_slider_pane_g16_ParamLimits

0x6d7d,	// (0x00092329) main_cset6_slider_pane_g16

0x6d89,	// (0x00092335) main_cset6_slider_pane_g17_ParamLimits

0x6d89,	// (0x00092335) main_cset6_slider_pane_g17

0x0011,

0xfb92,	// (0x0009b13e) main_cset6_slider_pane_g_ParamLimits

0xfb92,	// (0x0009b13e) main_cset6_slider_pane_g

0xdefc,	// (0x000994a8) main_cset6_slider_pane_t1_ParamLimits

0xdefc,	// (0x000994a8) main_cset6_slider_pane_t1

0x7ce6,	// (0x00093292) main_cset6_slider_pane_t2_ParamLimits

0x7ce6,	// (0x00093292) main_cset6_slider_pane_t2

0x7d11,	// (0x000932bd) main_cset6_slider_pane_t3_ParamLimits

0x7d11,	// (0x000932bd) main_cset6_slider_pane_t3

0x7d3c,	// (0x000932e8) main_cset6_slider_pane_t4_ParamLimits

0x7d3c,	// (0x000932e8) main_cset6_slider_pane_t4

0x7d67,	// (0x00093313) main_cset6_slider_pane_t5_ParamLimits

0x7d67,	// (0x00093313) main_cset6_slider_pane_t5

0xdf3d,	// (0x000994e9) main_cset6_slider_pane_t7_ParamLimits

0xdf3d,	// (0x000994e9) main_cset6_slider_pane_t7

0x7d92,	// (0x0009333e) main_cset6_slider_pane_t8_ParamLimits

0x7d92,	// (0x0009333e) main_cset6_slider_pane_t8

0x7db6,	// (0x00093362) main_cset6_slider_pane_t9_ParamLimits

0x7db6,	// (0x00093362) main_cset6_slider_pane_t9

0x7dda,	// (0x00093386) main_cset6_slider_pane_t10_ParamLimits

0x7dda,	// (0x00093386) main_cset6_slider_pane_t10

0x7dfe,	// (0x000933aa) main_cset6_slider_pane_t11_ParamLimits

0x7dfe,	// (0x000933aa) main_cset6_slider_pane_t11

0xdf73,	// (0x0009951f) main_cset6_slider_pane_t14_ParamLimits

0xdf73,	// (0x0009951f) main_cset6_slider_pane_t14

0xdfac,	// (0x00099558) main_cset6_slider_pane_t15_ParamLimits

0xdfac,	// (0x00099558) main_cset6_slider_pane_t15

0x000b,

0xfbb7,	// (0x0009b163) main_cset6_slider_pane_t_ParamLimits

0xfbb7,	// (0x0009b163) main_cset6_slider_pane_t

0xdb88,	// (0x00099134) cset_slider_pane_g1_copy1

0xdb91,	// (0x0009913d) cset_slider_pane_g2_copy1

0xdb9a,	// (0x00099146) cset_slider_pane_g3_copy1

0x96d4,	// (0x00094c80) bg_popup_sub_pane_cp011_copy1

0xdfe5,	// (0x00099591) main_cset_text_pane_g1_copy1

0xd8a8,	// (0x00098e54) main_cset_text_pane_t1_copy1

0xd8b6,	// (0x00098e62) main_cset_text_pane_t2_copy1

0xd8c4,	// (0x00098e70) main_cset_text_pane_t3_copy1

0xd8d2,	// (0x00098e7e) main_cset_text_pane_t4_copy1

0xd8e0,	// (0x00098e8c) main_cset_text_pane_t5_copy1

0xdfed,	// (0x00099599) main_cset_text_pane_t6_copy1

0xdffb,	// (0x000995a7) main_cset_text_pane_t7_copy1

0x7e22,	// (0x000933ce) main_cset_text2_pane_t1_copy1

0xa480,	// (0x00095a2c) main_ncimui_pane

0x437d,	// (0x0008f929) popup_query_ncimui_window_ParamLimits

0x437d,	// (0x0008f929) popup_query_ncimui_window

0x9f1b,	// (0x000954c7) field_cale_ev2_pane_g4_ParamLimits

0x9f1b,	// (0x000954c7) field_cale_ev2_pane_g4

0x5fa6,	// (0x00091552) cell_video_dialer_keypad_pane_g2_ParamLimits

0x5fa6,	// (0x00091552) cell_video_dialer_keypad_pane_g2

0x0001,

0xf895,	// (0x0009ae41) cell_video_dialer_keypad_pane_g_ParamLimits

0xf895,	// (0x0009ae41) cell_video_dialer_keypad_pane_g

0x5fbe,	// (0x0009156a) cell_video_dialer_keypad_pane_t1

0x96d4,	// (0x00094c80) bg_popup_window_pane_cp012

0xafb6,	// (0x00096562) heading_pane_cp06

0xe027,	// (0x000995d3) ncim_query_content_pane

0x96d4,	// (0x00094c80) bg_popup_heading_pane_cp01

0xe02f,	// (0x000995db) ncim_heading_pane_t1

0xe03d,	// (0x000995e9) ncim_indicator_popup_pane

0xe04f,	// (0x000995fb) ncim_query_button_pane

0xe063,	// (0x0009960f) ncim_query_content_pane_t1

0xe075,	// (0x00099621) ncim_query_content_pane_t2

0x0005,

0xfbfb,	// (0x0009b1a7) ncim_query_content_pane_t

0xe0af,	// (0x0009965b) ncim_query_list_pane

0xe0c1,	// (0x0009966d) ncim_query_popup_pane

0xe03d,	// (0x000995e9) ncim_indicator_popup_pane_ParamLimits

0x7f66,	// (0x00093512) ncim_query_content_pane_g1_ParamLimits

0x7f66,	// (0x00093512) ncim_query_content_pane_g1

0xe063,	// (0x0009960f) ncim_query_content_pane_t1_ParamLimits

0xe075,	// (0x00099621) ncim_query_content_pane_t2_ParamLimits

0x7f72,	// (0x0009351e) ncim_query_content_pane_t3_ParamLimits

0x7f72,	// (0x0009351e) ncim_query_content_pane_t3

0x7f9a,	// (0x00093546) ncim_query_content_pane_t4_ParamLimits

0x7f9a,	// (0x00093546) ncim_query_content_pane_t4

0x7fc2,	// (0x0009356e) ncim_query_content_pane_t5_ParamLimits

0x7fc2,	// (0x0009356e) ncim_query_content_pane_t5

0xe087,	// (0x00099633) ncim_query_content_pane_t6_ParamLimits

0xe087,	// (0x00099633) ncim_query_content_pane_t6

0xfbfb,	// (0x0009b1a7) ncim_query_content_pane_t_ParamLimits

0xe0af,	// (0x0009965b) ncim_query_list_pane_ParamLimits

0xe0c1,	// (0x0009966d) ncim_query_popup_pane_ParamLimits

0xe0d5,	// (0x00099681) wait_bar_pane_cp04

0x96d4,	// (0x00094c80) input_focus_pane_cp011

0xe0dd,	// (0x00099689) ncim_query_popup_pane_t1

0xe0eb,	// (0x00099697) ncim_list_query_list_pane_ParamLimits

0xe0eb,	// (0x00099697) ncim_list_query_list_pane

0x96d4,	// (0x00094c80) bg_button_pane_cp027

0xe0fe,	// (0x000996aa) ncim_query_button_pane_g1

0x96d4,	// (0x00094c80) list_highlight_pane_cp012

0xe108,	// (0x000996b4) ncim_list_query_list_pane_g1

0xe110,	// (0x000996bc) ncim_list_query_list_pane_t1

0xa1ee,	// (0x0009579a) cam4_indicators_pane_g3_ParamLimits

0xa1ee,	// (0x0009579a) cam4_indicators_pane_g3

0xa26c,	// (0x00095818) vid4_indicators_pane_g5_ParamLimits

0xa26c,	// (0x00095818) vid4_indicators_pane_g5

0xa326,	// (0x000958d2) vid4_progress_pane_g5_ParamLimits

0xa326,	// (0x000958d2) vid4_progress_pane_g5

0x7e54,	// (0x00093400) main_ncimui_pane_g1

0x7eba,	// (0x00093466) ncimui_group_query_pane_ParamLimits

0x7eba,	// (0x00093466) ncimui_group_query_pane

0x7f02,	// (0x000934ae) ncimui_list_pane_ParamLimits

0x7f02,	// (0x000934ae) ncimui_list_pane

0x7f29,	// (0x000934d5) ncimui_text_pane_ParamLimits

0x7f29,	// (0x000934d5) ncimui_text_pane

0x7fea,	// (0x00093596) ncimui_text_pane_t1_ParamLimits

0x7fea,	// (0x00093596) ncimui_text_pane_t1

0xe11e,	// (0x000996ca) ncimui_list_single_graphic_pane_ParamLimits

0xe11e,	// (0x000996ca) ncimui_list_single_graphic_pane

0x8008,	// (0x000935b4) ncimui_query_pane_ParamLimits

0x8008,	// (0x000935b4) ncimui_query_pane

0x96d4,	// (0x00094c80) list_highlight_pane_cp013

0xe12e,	// (0x000996da) ncim_list_query_list_pane_t1_copy1

0xe108,	// (0x000996b4) ncim_list_single_graphic_pane_g1

0xe13c,	// (0x000996e8) ncim_query_button_pane_cp01

0xe148,	// (0x000996f4) ncim_query_entry_pane_ParamLimits

0xe148,	// (0x000996f4) ncim_query_entry_pane

0xe15b,	// (0x00099707) ncimui_query_pane_g1

0xe167,	// (0x00099713) ncimui_query_pane_t1_ParamLimits

0xe167,	// (0x00099713) ncimui_query_pane_t1

0xa480,	// (0x00095a2c) input_focus_pane_cp012

0xe180,	// (0x0009972c) ncim_query_entry_pane_t1

0xa6f5,	// (0x00095ca1) main_im_pane_ParamLimits

0xa480,	// (0x00095a2c) main_mobtv_pane_ParamLimits

0xa480,	// (0x00095a2c) main_mobtv_pane

0x7cce,	// (0x0009327a) main_cset6_slider_pane_g18_ParamLimits

0x7cce,	// (0x0009327a) main_cset6_slider_pane_g18

0x7cda,	// (0x00093286) main_cset6_slider_pane_g19_ParamLimits

0x7cda,	// (0x00093286) main_cset6_slider_pane_g19

0xb1dc,	// (0x00096788) bg_main_mobtv_pane_ParamLimits

0xb1dc,	// (0x00096788) bg_main_mobtv_pane

0x801b,	// (0x000935c7) main_mobtv_info_pane

0x8024,	// (0x000935d0) main_mobtv_loading_pane_ParamLimits

0x8024,	// (0x000935d0) main_mobtv_loading_pane

0xe192,	// (0x0009973e) main_mobtv_pg_channel_list_pane

0xe19c,	// (0x00099748) main_mobtv_pg_hdr_pane

0x8031,	// (0x000935dd) main_mobtv_programe_curr_pane_ParamLimits

0x8031,	// (0x000935dd) main_mobtv_programe_curr_pane

0x803e,	// (0x000935ea) main_mobtv_programe_next_pane_ParamLimits

0x803e,	// (0x000935ea) main_mobtv_programe_next_pane

0xe1a5,	// (0x00099751) popup_mobtv_noti_window

0xcbc0,	// (0x0009816c) main_tv_pg_hdr_pane_g1

0xe1ad,	// (0x00099759) main_tv_pg_hdr_pane_g2

0xe1b5,	// (0x00099761) main_tv_pg_hdr_pane_g3

0xe1bd,	// (0x00099769) main_tv_pg_hdr_pane_g4

0xe1c5,	// (0x00099771) main_tv_pg_hdr_pane_g5

0xe1cf,	// (0x0009977b) main_tv_pg_hdr_pane_g6

0xe1d9,	// (0x00099785) main_tv_pg_hdr_pane_g7

0xe1e3,	// (0x0009978f) main_tv_pg_hdr_pane_g8

0xe1ed,	// (0x00099799) main_tv_pg_hdr_pane_g9

0xe1f7,	// (0x000997a3) main_tv_pg_hdr_pane_g10

0xe201,	// (0x000997ad) main_tv_pg_hdr_pane_g11

0x000a,

0xfc08,	// (0x0009b1b4) main_tv_pg_hdr_pane_g

0xe20b,	// (0x000997b7) main_tv_pg_hdr_pane_t1

0xe219,	// (0x000997c5) main_tv_pg_hdr_pane_t2

0xe227,	// (0x000997d3) main_tv_pg_hdr_pane_t3

0xe237,	// (0x000997e3) main_tv_pg_hdr_pane_t4

0xe247,	// (0x000997f3) main_tv_pg_hdr_pane_t5

0x0004,

0xfc1f,	// (0x0009b1cb) main_tv_pg_hdr_pane_t

0xe257,	// (0x00099803) single_mobtv_pg_channel_pane_ParamLimits

0xe257,	// (0x00099803) single_mobtv_pg_channel_pane

0xe269,	// (0x00099815) single_mobtv_pg_channel_table_pane

0xe272,	// (0x0009981e) single_mobtv_pg_channel_thumb_pane

0xe27b,	// (0x00099827) single_tv_pg_channel_pane_g1

0xe284,	// (0x00099830) single_tv_pg_channel_pane_g2

0x0001,

0xfc2a,	// (0x0009b1d6) single_tv_pg_channel_pane_g

0xce20,	// (0x000983cc) bg_single_mobtv_pg_channel_thumb_pane_ParamLimits

0xce20,	// (0x000983cc) bg_single_mobtv_pg_channel_thumb_pane

0xe28d,	// (0x00099839) single_mobtv_pg_channel_thumb_pane_g1_ParamLimits

0xe28d,	// (0x00099839) single_mobtv_pg_channel_thumb_pane_g1

0xe29b,	// (0x00099847) single_mobtv_pg_channel_thumb_pane_g2_ParamLimits

0xe29b,	// (0x00099847) single_mobtv_pg_channel_thumb_pane_g2

0xe2a7,	// (0x00099853) single_mobtv_pg_channel_thumb_pane_g3_ParamLimits

0xe2a7,	// (0x00099853) single_mobtv_pg_channel_thumb_pane_g3

0x0002,

0xfc2f,	// (0x0009b1db) single_mobtv_pg_channel_thumb_pane_g_ParamLimits

0xfc2f,	// (0x0009b1db) single_mobtv_pg_channel_thumb_pane_g

0xe2b3,	// (0x0009985f) single_mobtv_pg_channel_thumb_pane_t1

0xe2c1,	// (0x0009986d) single_mobtv_pg_channel_thumb_pane_t2

0x0001,

0xfc36,	// (0x0009b1e2) single_mobtv_pg_channel_thumb_pane_t

0xcbc0,	// (0x0009816c) bg_single_mobtv_pg_channel_table_pane_g1

0xcbc0,	// (0x0009816c) bg_single_mobtv_pg_channel_table_pane_g2

0x0001,

0xf6dc,	// (0x0009ac88) bg_single_mobtv_pg_channel_table_pane_g

0xe2cf,	// (0x0009987b) single_mobtv_pg_channel_table_pane_t1

0xe2dd,	// (0x00099889) single_mobtv_pg_channel_table_pane_t2

0x0001,

0xfc3b,	// (0x0009b1e7) single_mobtv_pg_channel_table_pane_t

0x8053,	// (0x000935ff) main_mobtv_info_pane_g1_ParamLimits

0x8053,	// (0x000935ff) main_mobtv_info_pane_g1

0x8071,	// (0x0009361d) main_mobtv_info_pane_t1_ParamLimits

0x8071,	// (0x0009361d) main_mobtv_info_pane_t1

0x80e9,	// (0x00093695) main_mobtv_info_pane_t2_ParamLimits

0x80e9,	// (0x00093695) main_mobtv_info_pane_t2

0x0002,

0xfc45,	// (0x0009b1f1) main_mobtv_info_pane_t_ParamLimits

0xfc45,	// (0x0009b1f1) main_mobtv_info_pane_t

0x8178,	// (0x00093724) wait_bar_pane_cp05

0x818a,	// (0x00093736) main_mobtv_loading_pane_g1_ParamLimits

0x818a,	// (0x00093736) main_mobtv_loading_pane_g1

0x819d,	// (0x00093749) main_mobtv_loading_pane_g2_ParamLimits

0x819d,	// (0x00093749) main_mobtv_loading_pane_g2

0x81a9,	// (0x00093755) main_mobtv_loading_pane_g3_ParamLimits

0x81a9,	// (0x00093755) main_mobtv_loading_pane_g3

0x0002,

0xfc4c,	// (0x0009b1f8) main_mobtv_loading_pane_g_ParamLimits

0xfc4c,	// (0x0009b1f8) main_mobtv_loading_pane_g

0xe2eb,	// (0x00099897) main_mobtv_loading_pane_t1_ParamLimits

0xe2eb,	// (0x00099897) main_mobtv_loading_pane_t1

0xe303,	// (0x000998af) main_mobtv_loading_pane_t2_ParamLimits

0xe303,	// (0x000998af) main_mobtv_loading_pane_t2

0x0001,

0xfc53,	// (0x0009b1ff) main_mobtv_loading_pane_t_ParamLimits

0xfc53,	// (0x0009b1ff) main_mobtv_loading_pane_t

0x81bc,	// (0x00093768) wait_bar_pane_cp06_ParamLimits

0x81bc,	// (0x00093768) wait_bar_pane_cp06

0xe327,	// (0x000998d3) main_mobtv_programe_curr_pane_t1

0xe335,	// (0x000998e1) main_mobtv_programe_curr_pane_t2

0x0001,

0xfc58,	// (0x0009b204) main_mobtv_programe_curr_pane_t

0xe343,	// (0x000998ef) main_mobtv_programe_next_pane_t1

0xe351,	// (0x000998fd) main_mobtv_programe_next_pane_t2

0xe35f,	// (0x0009990b) main_mobtv_programe_next_pane_t3

0x0002,

0xfc5d,	// (0x0009b209) main_mobtv_programe_next_pane_t

0x96d4,	// (0x00094c80) bg_popup_mobtv_noti_window_pane

0xe36d,	// (0x00099919) popup_mobtv_noti_window_g1

0xe375,	// (0x00099921) popup_mobtv_noti_window_t1

0xe383,	// (0x0009992f) popup_mobtv_noti_window_t2

0x0001,

0xfc64,	// (0x0009b210) popup_mobtv_noti_window_t

0xcbc0,	// (0x0009816c) bg_popup_mobtv_noti_window_pane_g1

0x96d4,	// (0x00094c80) sc_clock_pane

0x96d4,	// (0x00094c80) main_fs_bigclock_pane

0x791a,	// (0x00092ec6) blid2_tripm_pane_t4_ParamLimits

0x791a,	// (0x00092ec6) blid2_tripm_pane_t4

0x81cb,	// (0x00093777) sc_clock_pane_g1_ParamLimits

0x81cb,	// (0x00093777) sc_clock_pane_g1

0x81dd,	// (0x00093789) sc_clock_pane_t1_ParamLimits

0x81dd,	// (0x00093789) sc_clock_pane_t1

0x81ff,	// (0x000937ab) sc_clock_pane_t2_ParamLimits

0x81ff,	// (0x000937ab) sc_clock_pane_t2

0x8217,	// (0x000937c3) sc_clock_pane_t3_ParamLimits

0x8217,	// (0x000937c3) sc_clock_pane_t3

0x0004,

0xfc69,	// (0x0009b215) sc_clock_pane_t_ParamLimits

0xfc69,	// (0x0009b215) sc_clock_pane_t

0x8cfc,	// (0x000942a8) main_fs_bigclock_indicator_pane_ParamLimits

0x8cfc,	// (0x000942a8) main_fs_bigclock_indicator_pane

0x82b7,	// (0x00093863) main_fs_bigclock_pane_g1_ParamLimits

0x82b7,	// (0x00093863) main_fs_bigclock_pane_g1

0x8d08,	// (0x000942b4) main_fs_bigclock_pane_t1_ParamLimits

0x8d08,	// (0x000942b4) main_fs_bigclock_pane_t1

0x8d1a,	// (0x000942c6) main_fs_bigclock_pane_t2_ParamLimits

0x8d1a,	// (0x000942c6) main_fs_bigclock_pane_t2

0x8d2c,	// (0x000942d8) main_fs_bigclock_pane_t3_ParamLimits

0x8d2c,	// (0x000942d8) main_fs_bigclock_pane_t3

0x0002,

0xfe73,	// (0x0009b41f) main_fs_bigclock_pane_t_ParamLimits

0xfe73,	// (0x0009b41f) main_fs_bigclock_pane_t

0xec8f,	// (0x0009a23b) main_fs_bigclock_indicator_pane_g1

0xe057,	// (0x00099603) ncim_query_content_pane_g2_ParamLimits

0xe057,	// (0x00099603) ncim_query_content_pane_g2

0x0001,

0xfbf6,	// (0x0009b1a2) ncim_query_content_pane_g_ParamLimits

0xfbf6,	// (0x0009b1a2) ncim_query_content_pane_g

0x8230,	// (0x000937dc) sc_clock_pane_t4_ParamLimits

0x8230,	// (0x000937dc) sc_clock_pane_t4

0xa480,	// (0x00095a2c) main_radioblah_pane

0xd576,	// (0x00098b22) cell_call4_button_pane_t1_copy1_ParamLimits

0xd576,	// (0x00098b22) cell_call4_button_pane_t1_copy1

0x7e6c,	// (0x00093418) main_ncimui_pane_t1_ParamLimits

0x7e6c,	// (0x00093418) main_ncimui_pane_t1

0x7e86,	// (0x00093432) main_ncimui_pane_t2_ParamLimits

0x7e86,	// (0x00093432) main_ncimui_pane_t2

0x0002,

0xfbef,	// (0x0009b19b) main_ncimui_pane_t_ParamLimits

0xfbef,	// (0x0009b19b) main_ncimui_pane_t

0xe4c8,	// (0x00099a74) main_radioblah_anim_pane_ParamLimits

0xe4c8,	// (0x00099a74) main_radioblah_anim_pane

0xe4d9,	// (0x00099a85) main_radioblah_info_pane_ParamLimits

0xe4d9,	// (0x00099a85) main_radioblah_info_pane

0xe4ed,	// (0x00099a99) main_radioblah_pane_t1_ParamLimits

0xe4ed,	// (0x00099a99) main_radioblah_pane_t1

0xe509,	// (0x00099ab5) main_radioblah_pane_t2_ParamLimits

0xe509,	// (0x00099ab5) main_radioblah_pane_t2

0x0003,

0xfc8a,	// (0x0009b236) main_radioblah_pane_t_ParamLimits

0xfc8a,	// (0x0009b236) main_radioblah_pane_t

0x830f,	// (0x000938bb) main_radioblah_rocker_ctrl_pane_ParamLimits

0x830f,	// (0x000938bb) main_radioblah_rocker_ctrl_pane

0xe551,	// (0x00099afd) main_radioblah_info_pane_t1_ParamLimits

0xe551,	// (0x00099afd) main_radioblah_info_pane_t1

0x8367,	// (0x00093913) main_radioblah_info_pane_t2_ParamLimits

0x8367,	// (0x00093913) main_radioblah_info_pane_t2

0x0003,

0xfc93,	// (0x0009b23f) main_radioblah_info_pane_t_ParamLimits

0xfc93,	// (0x0009b23f) main_radioblah_info_pane_t

0xcbc0,	// (0x0009816c) main_radioblah_rocker_ctrl_pane_g1

0x8417,	// (0x000939c3) main_radioblah_rocker_ctrl_pane_g2

0x841f,	// (0x000939cb) main_radioblah_rocker_ctrl_pane_g3

0x8427,	// (0x000939d3) main_radioblah_rocker_ctrl_pane_g4

0x842f,	// (0x000939db) main_radioblah_rocker_ctrl_pane_g5

0x8437,	// (0x000939e3) main_radioblah_rocker_ctrl_pane_g6

0x0005,

0xfc9c,	// (0x0009b248) main_radioblah_rocker_ctrl_pane_g

0x7e22,	// (0x000933ce) main_cset_text2_pane_t1_copy1_ParamLimits

0xa1be,	// (0x0009576a) cam4_image_uncrop_qvga_pane

0xa217,	// (0x000957c3) vid4_image_uncrop_qcif_pane

0xa371,	// (0x0009591d) cam6_image_uncrop_qvga_pane_ParamLimits

0xa371,	// (0x0009591d) cam6_image_uncrop_qvga_pane

0xdd5e,	// (0x0009930a) vid6_image_uncrop_qcif_pane_ParamLimits

0xdd5e,	// (0x0009930a) vid6_image_uncrop_qcif_pane

0x96d4,	// (0x00094c80) bg_popup_preview_window_pane_cp03

0xe009,	// (0x000995b5) list_cset_text2_pane

0xe011,	// (0x000995bd) main_cset6_text2_pane_g1

0xe019,	// (0x000995c5) main_cset6_text2_pane_t1

0xe58b,	// (0x00099b37) list_cset_text2_pane_t1_ParamLimits

0xe58b,	// (0x00099b37) list_cset_text2_pane_t1

0xa480,	// (0x00095a2c) main_radioblah_pane_ParamLimits

0x8164,	// (0x00093710) main_mobtv_info_pane_t3_ParamLimits

0x8164,	// (0x00093710) main_mobtv_info_pane_t3

0x82fd,	// (0x000938a9) main_radioblah_pane_g1

0x8337,	// (0x000938e3) main_radioblah_info_pane_g1

0x83bc,	// (0x00093968) main_radioblah_info_pane_t3_ParamLimits

0x83bc,	// (0x00093968) main_radioblah_info_pane_t3

0x2f89,	// (0x0008e535) highlight_cell_cale_month_pane_ParamLimits

0x2f89,	// (0x0008e535) highlight_cell_cale_month_pane

0x96d4,	// (0x00094c80) main_phob_fisheye_pane

0xcefc,	// (0x000984a8) scroll_pane_cp0031_ParamLimits

0xcefc,	// (0x000984a8) scroll_pane_cp0031

0xde6c,	// (0x00099418) wait_bar_pane_cp08_ParamLimits

0x7c4c,	// (0x000931f8) cset_list_set_pane_copy1_ParamLimits

0xe5a6,	// (0x00099b52) highlight_cell_cale_month_pane_g1

0x843f,	// (0x000939eb) highlight_cell_cale_month_pane_t1

0xdad4,	// (0x00099080) list_gen_pane_cp01

0xd74f,	// (0x00098cfb) scroll_pane_01

0x06a3,	// (0x0008bc4f) list_single_double_fisheye_pane

0x06ac,	// (0x0008bc58) list_double_fisheye_pane_g1_ParamLimits

0x06ac,	// (0x0008bc58) list_double_fisheye_pane_g1

0x06b8,	// (0x0008bc64) list_double_fisheye_pane_g2_ParamLimits

0x06b8,	// (0x0008bc64) list_double_fisheye_pane_g2

0x06cc,	// (0x0008bc78) list_double_fisheye_pane_g3_ParamLimits

0x06cc,	// (0x0008bc78) list_double_fisheye_pane_g3

0x0004,

0xfca9,	// (0x0009b255) list_double_fisheye_pane_g_ParamLimits

0xfca9,	// (0x0009b255) list_double_fisheye_pane_g

0x06f5,	// (0x0008bca1) list_double_fisheye_pane_t1_ParamLimits

0x06f5,	// (0x0008bca1) list_double_fisheye_pane_t1

0x0710,	// (0x0008bcbc) list_double_fisheye_pane_t2_ParamLimits

0x0710,	// (0x0008bcbc) list_double_fisheye_pane_t2

0x0001,

0xfcb4,	// (0x0009b260) list_double_fisheye_pane_t_ParamLimits

0xfcb4,	// (0x0009b260) list_double_fisheye_pane_t

0x96d4,	// (0x00094c80) main_call5_pane

0x825b,	// (0x00093807) sc_swipe_pane_ParamLimits

0x825b,	// (0x00093807) sc_swipe_pane

0x8460,	// (0x00093a0c) call5_image_pane_ParamLimits

0x8460,	// (0x00093a0c) call5_image_pane

0x847d,	// (0x00093a29) call5_swipe_1_pane_ParamLimits

0x847d,	// (0x00093a29) call5_swipe_1_pane

0x8490,	// (0x00093a3c) call5_swipe_2_pane_ParamLimits

0x8490,	// (0x00093a3c) call5_swipe_2_pane

0x84bb,	// (0x00093a67) popup_call5_audio_first_window_ParamLimits

0x84bb,	// (0x00093a67) popup_call5_audio_first_window

0xce20,	// (0x000983cc) call5_swipe_1_pane_g1_ParamLimits

0xce20,	// (0x000983cc) call5_swipe_1_pane_g1

0xe5ae,	// (0x00099b5a) call5_swipe_1_pane_g2_ParamLimits

0xe5ae,	// (0x00099b5a) call5_swipe_1_pane_g2

0x0001,

0xfcb9,	// (0x0009b265) call5_swipe_1_pane_g_ParamLimits

0xfcb9,	// (0x0009b265) call5_swipe_1_pane_g

0xe5ba,	// (0x00099b66) call5_swipe_1_pane_t1_ParamLimits

0xe5ba,	// (0x00099b66) call5_swipe_1_pane_t1

0xce20,	// (0x000983cc) call5_swipe_2_pane_g1_ParamLimits

0xce20,	// (0x000983cc) call5_swipe_2_pane_g1

0xe5cf,	// (0x00099b7b) call5_swipe_2_pane_g2_ParamLimits

0xe5cf,	// (0x00099b7b) call5_swipe_2_pane_g2

0x0001,

0xfcbe,	// (0x0009b26a) call5_swipe_2_pane_g_ParamLimits

0xfcbe,	// (0x0009b26a) call5_swipe_2_pane_g

0xe5db,	// (0x00099b87) call5_swipe_2_pane_t1_ParamLimits

0xe5db,	// (0x00099b87) call5_swipe_2_pane_t1

0xe5f0,	// (0x00099b9c) sc_swipe_pane_g1_ParamLimits

0xe5f0,	// (0x00099b9c) sc_swipe_pane_g1

0xe5fd,	// (0x00099ba9) sc_swipe_pane_g2_ParamLimits

0xe5fd,	// (0x00099ba9) sc_swipe_pane_g2

0x0001,

0xfcc3,	// (0x0009b26f) sc_swipe_pane_g_ParamLimits

0xfcc3,	// (0x0009b26f) sc_swipe_pane_g

0xe609,	// (0x00099bb5) sc_swipe_pane_t1_ParamLimits

0xe609,	// (0x00099bb5) sc_swipe_pane_t1

0x96d4,	// (0x00094c80) main_cmail_launcher_pane

0x84cc,	// (0x00093a78) aid_size_cell_cmail_l_ParamLimits

0x84cc,	// (0x00093a78) aid_size_cell_cmail_l

0x84e6,	// (0x00093a92) grid_cmail_l_pane_ParamLimits

0x84e6,	// (0x00093a92) grid_cmail_l_pane

0x8501,	// (0x00093aad) cell_cmail_l_pane_ParamLimits

0x8501,	// (0x00093aad) cell_cmail_l_pane

0x8527,	// (0x00093ad3) cell_cmail_l_pane_g1_ParamLimits

0x8527,	// (0x00093ad3) cell_cmail_l_pane_g1

0x8538,	// (0x00093ae4) cell_cmail_l_pane_t1_ParamLimits

0x8538,	// (0x00093ae4) cell_cmail_l_pane_t1

0xe61e,	// (0x00099bca) cell_cmail_l_pane_t2_ParamLimits

0xe61e,	// (0x00099bca) cell_cmail_l_pane_t2

0x0001,

0xfcc8,	// (0x0009b274) cell_cmail_l_pane_t_ParamLimits

0xfcc8,	// (0x0009b274) cell_cmail_l_pane_t

0xa480,	// (0x00095a2c) grid_highlight_pane_cp018_ParamLimits

0xa480,	// (0x00095a2c) grid_highlight_pane_cp018

0x0faa,	// (0x0008c556) main2_pane_ParamLimits

0x0faa,	// (0x0008c556) main2_pane

0xa7a0,	// (0x00095d4c) popup_sp_fs_action_menu_bg_pane_g1

0xa7a8,	// (0x00095d54) popup_sp_fs_action_menu_bg_pane_g2

0xa7b0,	// (0x00095d5c) popup_sp_fs_action_menu_bg_pane_g3

0xa7b8,	// (0x00095d64) popup_sp_fs_action_menu_bg_pane_g4

0xa7c0,	// (0x00095d6c) popup_sp_fs_action_menu_bg_pane_g5

0xa7c8,	// (0x00095d74) popup_sp_fs_action_menu_bg_pane_g6

0xa7d0,	// (0x00095d7c) popup_sp_fs_action_menu_bg_pane_g7

0xa7d8,	// (0x00095d84) popup_sp_fs_action_menu_bg_pane_g8

0xa7e0,	// (0x00095d8c) popup_sp_fs_action_menu_bg_pane_g9

0xa7e8,	// (0x00095d94) popup_sp_fs_action_menu_bg_pane_g10

0xa7e8,	// (0x00095d94) popup_sp_fs_action_menu_bg_pane_g11

0x000a,

0xf186,	// (0x0009a732) popup_sp_fs_action_menu_bg_pane_g

0x0068,	// (0x0008b614) list_medium_line_x2_t3_g3_g1_ParamLimits

0x0068,	// (0x0008b614) list_medium_line_x2_t3_g3_g1

0x0074,	// (0x0008b620) list_medium_line_x2_t3_g3_g2_ParamLimits

0x0074,	// (0x0008b620) list_medium_line_x2_t3_g3_g2

0x0080,	// (0x0008b62c) list_medium_line_x2_t3_g3_g3_ParamLimits

0x0080,	// (0x0008b62c) list_medium_line_x2_t3_g3_g3

0x0002,

0xf238,	// (0x0009a7e4) list_medium_line_x2_t3_g3_g_ParamLimits

0xf238,	// (0x0009a7e4) list_medium_line_x2_t3_g3_g

0x008c,	// (0x0008b638) list_medium_line_x2_t3_g3_t1_ParamLimits

0x008c,	// (0x0008b638) list_medium_line_x2_t3_g3_t1

0x00a1,	// (0x0008b64d) list_medium_line_x2_t3_g3_t2_ParamLimits

0x00a1,	// (0x0008b64d) list_medium_line_x2_t3_g3_t2

0x00b5,	// (0x0008b661) list_medium_line_x2_t3_g3_t3_ParamLimits

0x00b5,	// (0x0008b661) list_medium_line_x2_t3_g3_t3

0x0002,

0xf23f,	// (0x0009a7eb) list_medium_line_x2_t3_g3_t_ParamLimits

0xf23f,	// (0x0009a7eb) list_medium_line_x2_t3_g3_t

0x0068,	// (0x0008b614) list_medium_line_x2_t3_g2_g1_ParamLimits

0x0068,	// (0x0008b614) list_medium_line_x2_t3_g2_g1

0x0080,	// (0x0008b62c) list_medium_line_x2_t3_g2_g2_ParamLimits

0x0080,	// (0x0008b62c) list_medium_line_x2_t3_g2_g2

0x0001,

0xf246,	// (0x0009a7f2) list_medium_line_x2_t3_g2_g_ParamLimits

0xf246,	// (0x0009a7f2) list_medium_line_x2_t3_g2_g

0x00ca,	// (0x0008b676) list_medium_line_x2_t3_g2_t1_ParamLimits

0x00ca,	// (0x0008b676) list_medium_line_x2_t3_g2_t1

0x00e0,	// (0x0008b68c) list_medium_line_x2_t3_g2_t2_ParamLimits

0x00e0,	// (0x0008b68c) list_medium_line_x2_t3_g2_t2

0x00f2,	// (0x0008b69e) list_medium_line_x2_t3_g2_t3_ParamLimits

0x00f2,	// (0x0008b69e) list_medium_line_x2_t3_g2_t3

0x0002,

0xf24b,	// (0x0009a7f7) list_medium_line_x2_t3_g2_t_ParamLimits

0xf24b,	// (0x0009a7f7) list_medium_line_x2_t3_g2_t

0x0068,	// (0x0008b614) list_medium_line_x2_t4_g4_g1_ParamLimits

0x0068,	// (0x0008b614) list_medium_line_x2_t4_g4_g1

0x010f,	// (0x0008b6bb) list_medium_line_x2_t4_g4_g2_ParamLimits

0x010f,	// (0x0008b6bb) list_medium_line_x2_t4_g4_g2

0x0074,	// (0x0008b620) list_medium_line_x2_t4_g4_g3_ParamLimits

0x0074,	// (0x0008b620) list_medium_line_x2_t4_g4_g3

0x011b,	// (0x0008b6c7) list_medium_line_x2_t4_g4_g4_ParamLimits

0x011b,	// (0x0008b6c7) list_medium_line_x2_t4_g4_g4

0x0003,

0xf252,	// (0x0009a7fe) list_medium_line_x2_t4_g4_g_ParamLimits

0xf252,	// (0x0009a7fe) list_medium_line_x2_t4_g4_g

0x0127,	// (0x0008b6d3) list_medium_line_x2_t4_g4_t1_ParamLimits

0x0127,	// (0x0008b6d3) list_medium_line_x2_t4_g4_t1

0x0141,	// (0x0008b6ed) list_medium_line_x2_t4_g4_t2_ParamLimits

0x0141,	// (0x0008b6ed) list_medium_line_x2_t4_g4_t2

0x0156,	// (0x0008b702) list_medium_line_x2_t4_g4_t3_ParamLimits

0x0156,	// (0x0008b702) list_medium_line_x2_t4_g4_t3

0x016b,	// (0x0008b717) list_medium_line_x2_t4_g4_t4_ParamLimits

0x016b,	// (0x0008b717) list_medium_line_x2_t4_g4_t4

0x0003,

0xf25b,	// (0x0009a807) list_medium_line_x2_t4_g4_t_ParamLimits

0xf25b,	// (0x0009a807) list_medium_line_x2_t4_g4_t

0x0068,	// (0x0008b614) list_medium_line_x2_t2_g4_g1_ParamLimits

0x0068,	// (0x0008b614) list_medium_line_x2_t2_g4_g1

0x010f,	// (0x0008b6bb) list_medium_line_x2_t2_g4_g2_ParamLimits

0x010f,	// (0x0008b6bb) list_medium_line_x2_t2_g4_g2

0x0074,	// (0x0008b620) list_medium_line_x2_t2_g4_g3_ParamLimits

0x0074,	// (0x0008b620) list_medium_line_x2_t2_g4_g3

0x0080,	// (0x0008b62c) list_medium_line_x2_t2_g4_g4_ParamLimits

0x0080,	// (0x0008b62c) list_medium_line_x2_t2_g4_g4

0x0003,

0xf2c2,	// (0x0009a86e) list_medium_line_x2_t2_g4_g_ParamLimits

0xf2c2,	// (0x0009a86e) list_medium_line_x2_t2_g4_g

0x017d,	// (0x0008b729) list_medium_line_x2_t2_g4_t1_ParamLimits

0x017d,	// (0x0008b729) list_medium_line_x2_t2_g4_t1

0x00b5,	// (0x0008b661) list_medium_line_x2_t2_g4_t2_ParamLimits

0x00b5,	// (0x0008b661) list_medium_line_x2_t2_g4_t2

0x0001,

0xf2cb,	// (0x0009a877) list_medium_line_x2_t2_g4_t_ParamLimits

0xf2cb,	// (0x0009a877) list_medium_line_x2_t2_g4_t

0x0068,	// (0x0008b614) list_medium_line_x2_t2_g3_g1_ParamLimits

0x0068,	// (0x0008b614) list_medium_line_x2_t2_g3_g1

0x0074,	// (0x0008b620) list_medium_line_x2_t2_g3_g2_ParamLimits

0x0074,	// (0x0008b620) list_medium_line_x2_t2_g3_g2

0x0080,	// (0x0008b62c) list_medium_line_x2_t2_g3_g3_ParamLimits

0x0080,	// (0x0008b62c) list_medium_line_x2_t2_g3_g3

0x0002,

0xf238,	// (0x0009a7e4) list_medium_line_x2_t2_g3_g_ParamLimits

0xf238,	// (0x0009a7e4) list_medium_line_x2_t2_g3_g

0x0192,	// (0x0008b73e) list_medium_line_x2_t2_g3_t1_ParamLimits

0x0192,	// (0x0008b73e) list_medium_line_x2_t2_g3_t1

0x00b5,	// (0x0008b661) list_medium_line_x2_t2_g3_t2_ParamLimits

0x00b5,	// (0x0008b661) list_medium_line_x2_t2_g3_t2

0x0001,

0xf2d0,	// (0x0009a87c) list_medium_line_x2_t2_g3_t_ParamLimits

0xf2d0,	// (0x0009a87c) list_medium_line_x2_t2_g3_t

0x30d9,	// (0x0008e685) main_sp_fs_list_pane_ParamLimits

0x30d9,	// (0x0008e685) main_sp_fs_list_pane

0xc01e,	// (0x000975ca) sp_fs_scroll_pane_ParamLimits

0xc01e,	// (0x000975ca) sp_fs_scroll_pane

0x01a7,	// (0x0008b753) list_medium_line_x2_t3_t1

0x01b7,	// (0x0008b763) list_medium_line_x2_t3_t2

0x01c5,	// (0x0008b771) list_medium_line_x2_t3_t3

0x0002,

0xf31b,	// (0x0009a8c7) list_medium_line_x2_t3_t

0x01d3,	// (0x0008b77f) list_medium_line_x3_t4_t1

0x01e3,	// (0x0008b78f) list_medium_line_x3_t4_t2

0x01f1,	// (0x0008b79d) list_medium_line_x3_t4_t3

0x01c5,	// (0x0008b771) list_medium_line_x3_t4_t4

0x0003,

0xf322,	// (0x0009a8ce) list_medium_line_x3_t4_t

0x01ff,	// (0x0008b7ab) list_medium_line_x4_t5_t1

0x020f,	// (0x0008b7bb) list_medium_line_x4_t5_t2

0x01f1,	// (0x0008b79d) list_medium_line_x4_t5_t3

0x021d,	// (0x0008b7c9) list_medium_line_x4_t5_t4

0x01c5,	// (0x0008b771) list_medium_line_x4_t5_t5

0x0004,

0xf32b,	// (0x0009a8d7) list_medium_line_x4_t5_t

0x0068,	// (0x0008b614) list_medium_line_t4_g4_g1_ParamLimits

0x0068,	// (0x0008b614) list_medium_line_t4_g4_g1

0x011b,	// (0x0008b6c7) list_medium_line_t4_g4_g2_ParamLimits

0x011b,	// (0x0008b6c7) list_medium_line_t4_g4_g2

0x022b,	// (0x0008b7d7) list_medium_line_t4_g4_g3_ParamLimits

0x022b,	// (0x0008b7d7) list_medium_line_t4_g4_g3

0x0080,	// (0x0008b62c) list_medium_line_t4_g4_g4_ParamLimits

0x0080,	// (0x0008b62c) list_medium_line_t4_g4_g4

0x0003,

0xf336,	// (0x0009a8e2) list_medium_line_t4_g4_g_ParamLimits

0xf336,	// (0x0009a8e2) list_medium_line_t4_g4_g

0x0237,	// (0x0008b7e3) list_medium_line_t4_g4_t1_ParamLimits

0x0237,	// (0x0008b7e3) list_medium_line_t4_g4_t1

0x024c,	// (0x0008b7f8) list_medium_line_t4_g4_t2_ParamLimits

0x024c,	// (0x0008b7f8) list_medium_line_t4_g4_t2

0x0261,	// (0x0008b80d) list_medium_line_t4_g4_t3_ParamLimits

0x0261,	// (0x0008b80d) list_medium_line_t4_g4_t3

0x00b5,	// (0x0008b661) list_medium_line_t4_g4_t4_ParamLimits

0x00b5,	// (0x0008b661) list_medium_line_t4_g4_t4

0x0003,

0xf33f,	// (0x0009a8eb) list_medium_line_t4_g4_t_ParamLimits

0xf33f,	// (0x0009a8eb) list_medium_line_t4_g4_t

0x3184,	// (0x0008e730) chi_dic_find_pane_g1

0x4155,	// (0x0008f701) main_tport_pane

0x0423,	// (0x0008b9cf) list_medium_line_plain_t1

0x0431,	// (0x0008b9dd) list_medium_line_t2_g2_g1_ParamLimits

0x0431,	// (0x0008b9dd) list_medium_line_t2_g2_g1

0x70f8,	// (0x000926a4) list_medium_line_t2_g2_g2_ParamLimits

0x70f8,	// (0x000926a4) list_medium_line_t2_g2_g2

0x0001,

0xfa00,	// (0x0009afac) list_medium_line_t2_g2_g_ParamLimits

0xfa00,	// (0x0009afac) list_medium_line_t2_g2_g

0x043d,	// (0x0008b9e9) list_medium_line_t2_g2_t1_ParamLimits

0x043d,	// (0x0008b9e9) list_medium_line_t2_g2_t1

0x0454,	// (0x0008ba00) list_medium_line_t2_g2_t2_ParamLimits

0x0454,	// (0x0008ba00) list_medium_line_t2_g2_t2

0x0001,

0xfa05,	// (0x0009afb1) list_medium_line_t2_g2_t_ParamLimits

0xfa05,	// (0x0009afb1) list_medium_line_t2_g2_t

0x76ee,	// (0x00092c9a) aid_sp_fs_list_icon_a_sm

0xa360,	// (0x0009590c) aid_sp_fs_list_icon_d

0xb1d3,	// (0x0009677f) aid_sp_fs_text_primary

0xa368,	// (0x00095914) aid_sp_fs_text_secondary

0x76f6,	// (0x00092ca2) list_medium_line

0x76f6,	// (0x00092ca2) list_medium_line_g2

0x76f6,	// (0x00092ca2) list_medium_line_g3

0x76f6,	// (0x00092ca2) list_medium_line_plain

0x76f6,	// (0x00092ca2) list_medium_line_plain_t2

0x76f6,	// (0x00092ca2) list_medium_line_plain_t3

0x76f6,	// (0x00092ca2) list_medium_line_right_icon

0x76f6,	// (0x00092ca2) list_medium_line_right_iconx2

0x76f6,	// (0x00092ca2) list_medium_line_t2

0x76f6,	// (0x00092ca2) list_medium_line_t2_g2

0x76f6,	// (0x00092ca2) list_medium_line_t2_g3

0x76f6,	// (0x00092ca2) list_medium_line_t2_right_icon

0x76f6,	// (0x00092ca2) list_medium_line_t2_right_iconx2

0x76f6,	// (0x00092ca2) list_medium_line_t3

0x76f6,	// (0x00092ca2) list_medium_line_t3_g2

0x76f6,	// (0x00092ca2) list_medium_line_t3_g3

0x76f6,	// (0x00092ca2) list_medium_line_t3_right_iconx2

0x0581,	// (0x0008bb2d) list_medium_line_t4_g4

0x058a,	// (0x0008bb36) list_medium_line_x2

0x058a,	// (0x0008bb36) list_medium_line_x2_t2_g2

0x058a,	// (0x0008bb36) list_medium_line_x2_t2_g3

0x058a,	// (0x0008bb36) list_medium_line_x2_t2_g4

0x058a,	// (0x0008bb36) list_medium_line_x2_t3

0x058a,	// (0x0008bb36) list_medium_line_x2_t3_g2

0x058a,	// (0x0008bb36) list_medium_line_x2_t3_g3

0x058a,	// (0x0008bb36) list_medium_line_x2_t3_g4

0x058a,	// (0x0008bb36) list_medium_line_x2_t4_g2

0x058a,	// (0x0008bb36) list_medium_line_x2_t4_g4

0x0593,	// (0x0008bb3f) list_medium_line_x3

0x0593,	// (0x0008bb3f) list_medium_line_x3_t4

0x0593,	// (0x0008bb3f) list_medium_line_x3_t4_g4

0x0581,	// (0x0008bb2d) list_medium_line_x4_t4

0x0581,	// (0x0008bb2d) list_medium_line_x4_t4_g7

0x0581,	// (0x0008bb2d) list_medium_line_x4_t5

0x059c,	// (0x0008bb48) list_single_fs_dyc_pane_ParamLimits

0x059c,	// (0x0008bb48) list_single_fs_dyc_pane

0x0068,	// (0x0008b614) list_medium_line_x4_t4_g7_g1_ParamLimits

0x0068,	// (0x0008b614) list_medium_line_x4_t4_g7_g1

0x05d4,	// (0x0008bb80) list_medium_line_x4_t4_g7_g2_ParamLimits

0x05d4,	// (0x0008bb80) list_medium_line_x4_t4_g7_g2

0x05e0,	// (0x0008bb8c) list_medium_line_x4_t4_g7_g3_ParamLimits

0x05e0,	// (0x0008bb8c) list_medium_line_x4_t4_g7_g3

0x05ef,	// (0x0008bb9b) list_medium_line_x4_t4_g7_g4_ParamLimits

0x05ef,	// (0x0008bb9b) list_medium_line_x4_t4_g7_g4

0x05fb,	// (0x0008bba7) list_medium_line_x4_t4_g7_g5_ParamLimits

0x05fb,	// (0x0008bba7) list_medium_line_x4_t4_g7_g5

0x060a,	// (0x0008bbb6) list_medium_line_x4_t4_g7_g6_ParamLimits

0x060a,	// (0x0008bbb6) list_medium_line_x4_t4_g7_g6

0x0619,	// (0x0008bbc5) list_medium_line_x4_t4_g7_g7_ParamLimits

0x0619,	// (0x0008bbc5) list_medium_line_x4_t4_g7_g7

0x0006,

0xfbd0,	// (0x0009b17c) list_medium_line_x4_t4_g7_g_ParamLimits

0xfbd0,	// (0x0009b17c) list_medium_line_x4_t4_g7_g

0x0625,	// (0x0008bbd1) list_medium_line_x4_t4_g7_t1_ParamLimits

0x0625,	// (0x0008bbd1) list_medium_line_x4_t4_g7_t1

0x063a,	// (0x0008bbe6) list_medium_line_x4_t4_g7_t2_ParamLimits

0x063a,	// (0x0008bbe6) list_medium_line_x4_t4_g7_t2

0x064f,	// (0x0008bbfb) list_medium_line_x4_t4_g7_t3_ParamLimits

0x064f,	// (0x0008bbfb) list_medium_line_x4_t4_g7_t3

0x0664,	// (0x0008bc10) list_medium_line_x4_t4_g7_t4_ParamLimits

0x0664,	// (0x0008bc10) list_medium_line_x4_t4_g7_t4

0x0676,	// (0x0008bc22) list_medium_line_x4_t4_g7_t5_ParamLimits

0x0676,	// (0x0008bc22) list_medium_line_x4_t4_g7_t5

0x0004,

0xfbdf,	// (0x0009b18b) list_medium_line_x4_t4_g7_t_ParamLimits

0xfbdf,	// (0x0009b18b) list_medium_line_x4_t4_g7_t

0x0688,	// (0x0008bc34) list_single_dyc_row_pane_ParamLimits

0x0688,	// (0x0008bc34) list_single_dyc_row_pane

0x844d,	// (0x000939f9) call5_gesture_pane_ParamLimits

0x844d,	// (0x000939f9) call5_gesture_pane

0x84a3,	// (0x00093a4f) call5_windows_pane_ParamLimits

0x84a3,	// (0x00093a4f) call5_windows_pane

0x854e,	// (0x00093afa) call5_swipe_1_pane_cp_ParamLimits

0x854e,	// (0x00093afa) call5_swipe_1_pane_cp

0x855a,	// (0x00093b06) call5_swipe_2_pane_cp_ParamLimits

0x855a,	// (0x00093b06) call5_swipe_2_pane_cp

0xb391,	// (0x0009693d) call5_image_pane_cp

0x8566,	// (0x00093b12) popup_call5_audio_first_window_cp_ParamLimits

0x8566,	// (0x00093b12) popup_call5_audio_first_window_cp

0xe5f0,	// (0x00099b9c) call5_swipe_1_pane_g1_cp_ParamLimits

0xe5f0,	// (0x00099b9c) call5_swipe_1_pane_g1_cp

0xe630,	// (0x00099bdc) call5_swipe_1_pane_g2_cp

0xe609,	// (0x00099bb5) call5_swipe_1_pane_t1_cp_ParamLimits

0xe609,	// (0x00099bb5) call5_swipe_1_pane_t1_cp

0xe5f0,	// (0x00099b9c) call5_swipe_2_pane_g1_cp_ParamLimits

0xe5f0,	// (0x00099b9c) call5_swipe_2_pane_g1_cp

0xe638,	// (0x00099be4) call5_swipe_2_pane_g2_cp

0xe640,	// (0x00099bec) call5_swipe_2_pane_t1_cp_ParamLimits

0xe640,	// (0x00099bec) call5_swipe_2_pane_t1_cp

0xa480,	// (0x00095a2c) main_sp_fs_email_pane

0xe655,	// (0x00099c01) main_sp_fs_listscroll_pane_te

0xb1ea,	// (0x00096796) popup_sp_fs_action_menu_pane_ParamLimits

0xb1ea,	// (0x00096796) popup_sp_fs_action_menu_pane

0xcbc0,	// (0x0009816c) bg_sp_fs_ctrlbar_pane_g1

0xe65e,	// (0x00099c0a) bg_sp_fs_ctrlbar_ddmenu_pane_g1

0xe667,	// (0x00099c13) bg_sp_fs_ctrlbar_ddmenu_pane_g2

0xe670,	// (0x00099c1c) bg_sp_fs_ctrlbar_ddmenu_pane_g3

0xcbc0,	// (0x0009816c) bg_sp_fs_ctrlbar_ddmenu_pane_g4

0x0003,

0xfccd,	// (0x0009b279) bg_sp_fs_ctrlbar_ddmenu_pane_g

0xc9a3,	// (0x00097f4f) bg_sp_fs_ctrlbar_ddmenu_pane_ParamLimits

0xc9a3,	// (0x00097f4f) bg_sp_fs_ctrlbar_ddmenu_pane

0xe679,	// (0x00099c25) main_sp_fs_ctrlbar_ddmenu_pane_g1_ParamLimits

0xe679,	// (0x00099c25) main_sp_fs_ctrlbar_ddmenu_pane_g1

0xe685,	// (0x00099c31) main_sp_fs_ctrlbar_ddmenu_pane_g2_ParamLimits

0xe685,	// (0x00099c31) main_sp_fs_ctrlbar_ddmenu_pane_g2

0x0001,

0xfcd6,	// (0x0009b282) main_sp_fs_ctrlbar_ddmenu_pane_g_ParamLimits

0xfcd6,	// (0x0009b282) main_sp_fs_ctrlbar_ddmenu_pane_g

0xe691,	// (0x00099c3d) main_sp_fs_ctrlbar_ddmenu_pane_t1_ParamLimits

0xe691,	// (0x00099c3d) main_sp_fs_ctrlbar_ddmenu_pane_t1

0x8574,	// (0x00093b20) list_medium_line_t2_right_icon_g1

0x0732,	// (0x0008bcde) list_medium_line_t2_right_icon_t1

0x0742,	// (0x0008bcee) list_medium_line_t2_right_icon_t2

0x0001,

0xfcdb,	// (0x0009b287) list_medium_line_t2_right_icon_t

0xc7b6,	// (0x00097d62) bg_sp_fs_ctrlbar_pane_ParamLimits

0xc7b6,	// (0x00097d62) bg_sp_fs_ctrlbar_pane

0x85c4,	// (0x00093b70) main_sp_fs_ctrlbar_button_pane_cp01

0x85ce,	// (0x00093b7a) main_sp_fs_ctrlbar_ddmenu_pane

0xe6e3,	// (0x00099c8f) main_sp_fs_ctrlbar_pane_g1

0xe6ef,	// (0x00099c9b) main_sp_fs_ctrlbar_pane_g2

0x0001,

0xfce0,	// (0x0009b28c) main_sp_fs_ctrlbar_pane_g

0xe6fb,	// (0x00099ca7) main_sp_fs_ctrlbar_pane_t1

0x85d8,	// (0x00093b84) main_sp_fs_ctrlbar_pane

0x85fc,	// (0x00093ba8) main_sp_fs_listscroll_pane_te_cp01

0x0754,	// (0x0008bd00) popup_sp_fs_action_menu_pane_cp01_ParamLimits

0x0754,	// (0x0008bd00) popup_sp_fs_action_menu_pane_cp01

0xa480,	// (0x00095a2c) bg_sp_fs_highlight_list_pane_cp01_ParamLimits

0xa480,	// (0x00095a2c) bg_sp_fs_highlight_list_pane_cp01

0x861c,	// (0x00093bc8) sp_fs_action_menu_list_gene_pane_g1_ParamLimits

0x861c,	// (0x00093bc8) sp_fs_action_menu_list_gene_pane_g1

0xe72b,	// (0x00099cd7) sp_fs_action_menu_list_gene_pane_g2_ParamLimits

0xe72b,	// (0x00099cd7) sp_fs_action_menu_list_gene_pane_g2

0x0001,

0xfcea,	// (0x0009b296) sp_fs_action_menu_list_gene_pane_g_ParamLimits

0xfcea,	// (0x0009b296) sp_fs_action_menu_list_gene_pane_g

0x862b,	// (0x00093bd7) sp_fs_action_menu_list_gene_pane_t1_ParamLimits

0x862b,	// (0x00093bd7) sp_fs_action_menu_list_gene_pane_t1

0x8643,	// (0x00093bef) sp_fs_action_menu_list_gene_pane_ParamLimits

0x8643,	// (0x00093bef) sp_fs_action_menu_list_gene_pane

0xe738,	// (0x00099ce4) popup_sp_fs_action_menu_bg_pane_ParamLimits

0xe738,	// (0x00099ce4) popup_sp_fs_action_menu_bg_pane

0x8662,	// (0x00093c0e) sp_fs_action_menu_list_pane_ParamLimits

0x8662,	// (0x00093c0e) sp_fs_action_menu_list_pane

0xa37f,	// (0x0009592b) sp_fs_scroll_pane_cp01_ParamLimits

0xa37f,	// (0x0009592b) sp_fs_scroll_pane_cp01

0x0784,	// (0x0008bd30) list_medium_line_plain_t2_t1

0x0794,	// (0x0008bd40) list_medium_line_plain_t2_t2

0x0001,

0xfcef,	// (0x0009b29b) list_medium_line_plain_t2_t

0x07a4,	// (0x0008bd50) list_medium_line_plain_t3_t1

0x07b4,	// (0x0008bd60) list_medium_line_plain_t3_t2

0x07c2,	// (0x0008bd6e) list_medium_line_plain_t3_t3

0x0002,

0xfcf4,	// (0x0009b2a0) list_medium_line_plain_t3_t

0x0068,	// (0x0008b614) list_medium_line_x2_t2_g2_g1_ParamLimits

0x0068,	// (0x0008b614) list_medium_line_x2_t2_g2_g1

0x0080,	// (0x0008b62c) list_medium_line_x2_t2_g2_g2_ParamLimits

0x0080,	// (0x0008b62c) list_medium_line_x2_t2_g2_g2

0x0001,

0xf246,	// (0x0009a7f2) list_medium_line_x2_t2_g2_g_ParamLimits

0xf246,	// (0x0009a7f2) list_medium_line_x2_t2_g2_g

0x0237,	// (0x0008b7e3) list_medium_line_x2_t2_g2_t1_ParamLimits

0x0237,	// (0x0008b7e3) list_medium_line_x2_t2_g2_t1

0x00b5,	// (0x0008b661) list_medium_line_x2_t2_g2_t2_ParamLimits

0x00b5,	// (0x0008b661) list_medium_line_x2_t2_g2_t2

0x0001,

0xfcfb,	// (0x0009b2a7) list_medium_line_x2_t2_g2_t_ParamLimits

0xfcfb,	// (0x0009b2a7) list_medium_line_x2_t2_g2_t

0x0068,	// (0x0008b614) list_medium_line_x2_t4_g2_g1_ParamLimits

0x0068,	// (0x0008b614) list_medium_line_x2_t4_g2_g1

0x07d0,	// (0x0008bd7c) list_medium_line_x2_t4_g2_g2_ParamLimits

0x07d0,	// (0x0008bd7c) list_medium_line_x2_t4_g2_g2

0x0001,

0xfd00,	// (0x0009b2ac) list_medium_line_x2_t4_g2_g_ParamLimits

0xfd00,	// (0x0009b2ac) list_medium_line_x2_t4_g2_g

0x07e2,	// (0x0008bd8e) list_medium_line_x2_t4_g2_t1_ParamLimits

0x07e2,	// (0x0008bd8e) list_medium_line_x2_t4_g2_t1

0x07fc,	// (0x0008bda8) list_medium_line_x2_t4_g2_t2_ParamLimits

0x07fc,	// (0x0008bda8) list_medium_line_x2_t4_g2_t2

0x0811,	// (0x0008bdbd) list_medium_line_x2_t4_g2_t3_ParamLimits

0x0811,	// (0x0008bdbd) list_medium_line_x2_t4_g2_t3

0x00b5,	// (0x0008b661) list_medium_line_x2_t4_g2_t4_ParamLimits

0x00b5,	// (0x0008b661) list_medium_line_x2_t4_g2_t4

0x0003,

0xfd05,	// (0x0009b2b1) list_medium_line_x2_t4_g2_t_ParamLimits

0xfd05,	// (0x0009b2b1) list_medium_line_x2_t4_g2_t

0x8682,	// (0x00093c2e) list_medium_line_t3_right_iconx2_g1

0x8574,	// (0x00093b20) list_medium_line_t3_right_iconx2_g2

0x0826,	// (0x0008bdd2) list_medium_line_t3_right_iconx2_g3

0x0002,

0xfd0e,	// (0x0009b2ba) list_medium_line_t3_right_iconx2_g

0x0830,	// (0x0008bddc) list_medium_line_t3_right_iconx2_t1

0x0840,	// (0x0008bdec) list_medium_line_t3_right_iconx2_t2

0x0001,

0xfd15,	// (0x0009b2c1) list_medium_line_t3_right_iconx2_t

0x0068,	// (0x0008b614) list_medium_line_x3_t4_g4_g1_ParamLimits

0x0068,	// (0x0008b614) list_medium_line_x3_t4_g4_g1

0x0074,	// (0x0008b620) list_medium_line_x3_t4_g4_g2_ParamLimits

0x0074,	// (0x0008b620) list_medium_line_x3_t4_g4_g2

0x011b,	// (0x0008b6c7) list_medium_line_x3_t4_g4_g3_ParamLimits

0x011b,	// (0x0008b6c7) list_medium_line_x3_t4_g4_g3

0x084e,	// (0x0008bdfa) list_medium_line_x3_t4_g4_g4_ParamLimits

0x084e,	// (0x0008bdfa) list_medium_line_x3_t4_g4_g4

0x0003,

0xfd1a,	// (0x0009b2c6) list_medium_line_x3_t4_g4_g_ParamLimits

0xfd1a,	// (0x0009b2c6) list_medium_line_x3_t4_g4_g

0x085a,	// (0x0008be06) list_medium_line_x3_t4_g4_t1_ParamLimits

0x085a,	// (0x0008be06) list_medium_line_x3_t4_g4_t1

0x0871,	// (0x0008be1d) list_medium_line_x3_t4_g4_t2_ParamLimits

0x0871,	// (0x0008be1d) list_medium_line_x3_t4_g4_t2

0x024c,	// (0x0008b7f8) list_medium_line_x3_t4_g4_t3_ParamLimits

0x024c,	// (0x0008b7f8) list_medium_line_x3_t4_g4_t3

0x088c,	// (0x0008be38) list_medium_line_x3_t4_g4_t4_ParamLimits

0x088c,	// (0x0008be38) list_medium_line_x3_t4_g4_t4

0x0003,

0xfd23,	// (0x0009b2cf) list_medium_line_x3_t4_g4_t_ParamLimits

0xfd23,	// (0x0009b2cf) list_medium_line_x3_t4_g4_t

0x08a9,	// (0x0008be55) list_single_dyc_row_text_pane_t1_ParamLimits

0x08a9,	// (0x0008be55) list_single_dyc_row_text_pane_t1

0x08f2,	// (0x0008be9e) list_single_dyc_row_text_pane_t2_ParamLimits

0x08f2,	// (0x0008be9e) list_single_dyc_row_text_pane_t2

0x868a,	// (0x00093c36) list_single_dyc_row_text_pane_t3_ParamLimits

0x868a,	// (0x00093c36) list_single_dyc_row_text_pane_t3

0x0005,

0xfd2c,	// (0x0009b2d8) list_single_dyc_row_text_pane_t_ParamLimits

0xfd2c,	// (0x0009b2d8) list_single_dyc_row_text_pane_t

0x86ae,	// (0x00093c5a) list_single_dyc_row_pane_g1_ParamLimits

0x86ae,	// (0x00093c5a) list_single_dyc_row_pane_g1

0x86ba,	// (0x00093c66) list_single_dyc_row_pane_g2_ParamLimits

0x86ba,	// (0x00093c66) list_single_dyc_row_pane_g2

0x86c6,	// (0x00093c72) list_single_dyc_row_pane_g3_ParamLimits

0x86c6,	// (0x00093c72) list_single_dyc_row_pane_g3

0x86d2,	// (0x00093c7e) list_single_dyc_row_pane_g4_ParamLimits

0x86d2,	// (0x00093c7e) list_single_dyc_row_pane_g4

0x0003,

0xfd39,	// (0x0009b2e5) list_single_dyc_row_pane_g_ParamLimits

0xfd39,	// (0x0009b2e5) list_single_dyc_row_pane_g

0x86de,	// (0x00093c8a) list_single_dyc_row_text_pane_ParamLimits

0x86de,	// (0x00093c8a) list_single_dyc_row_text_pane

0x96d4,	// (0x00094c80) bg_sp_fs_scroll_pane

0xe746,	// (0x00099cf2) thumb_sp_fs_scroll_pane

0x0431,	// (0x0008b9dd) list_medium_line_g1_ParamLimits

0x0431,	// (0x0008b9dd) list_medium_line_g1

0x0a27,	// (0x0008bfd3) list_medium_line_t1_ParamLimits

0x0a27,	// (0x0008bfd3) list_medium_line_t1

0x0068,	// (0x0008b614) list_medium_line_x2_g1_ParamLimits

0x0068,	// (0x0008b614) list_medium_line_x2_g1

0x0074,	// (0x0008b620) list_medium_line_x2_g2_ParamLimits

0x0074,	// (0x0008b620) list_medium_line_x2_g2

0x0001,

0xfd42,	// (0x0009b2ee) list_medium_line_x2_g_ParamLimits

0xfd42,	// (0x0009b2ee) list_medium_line_x2_g

0x86fd,	// (0x00093ca9) list_medium_line_x2_t1_ParamLimits

0x86fd,	// (0x00093ca9) list_medium_line_x2_t1

0x0068,	// (0x0008b614) list_medium_line_x3_g1_ParamLimits

0x0068,	// (0x0008b614) list_medium_line_x3_g1

0x0074,	// (0x0008b620) list_medium_line_x3_g2_ParamLimits

0x0074,	// (0x0008b620) list_medium_line_x3_g2

0x0001,

0xfd42,	// (0x0009b2ee) list_medium_line_x3_g_ParamLimits

0xfd42,	// (0x0009b2ee) list_medium_line_x3_g

0x86fd,	// (0x00093ca9) list_medium_line_x3_t1_ParamLimits

0x86fd,	// (0x00093ca9) list_medium_line_x3_t1

0xe74f,	// (0x00099cfb) thumb_sp_fs_scroll_pane_g1

0xe758,	// (0x00099d04) thumb_sp_fs_scroll_pane_g2

0xe761,	// (0x00099d0d) thumb_sp_fs_scroll_pane_g3

0x0002,

0xfd47,	// (0x0009b2f3) thumb_sp_fs_scroll_pane_g

0xe74f,	// (0x00099cfb) bg_sp_fs_scroll_pane_g1

0xe758,	// (0x00099d04) bg_sp_fs_scroll_pane_g2

0xe761,	// (0x00099d0d) bg_sp_fs_scroll_pane_g3

0x0002,

0xfd47,	// (0x0009b2f3) bg_sp_fs_scroll_pane_g

0x0068,	// (0x0008b614) list_medium_line_x2_t3_g4_g1_ParamLimits

0x0068,	// (0x0008b614) list_medium_line_x2_t3_g4_g1

0x010f,	// (0x0008b6bb) list_medium_line_x2_t3_g4_g2_ParamLimits

0x010f,	// (0x0008b6bb) list_medium_line_x2_t3_g4_g2

0x0074,	// (0x0008b620) list_medium_line_x2_t3_g4_g3_ParamLimits

0x0074,	// (0x0008b620) list_medium_line_x2_t3_g4_g3

0x0080,	// (0x0008b62c) list_medium_line_x2_t3_g4_g4_ParamLimits

0x0080,	// (0x0008b62c) list_medium_line_x2_t3_g4_g4

0x0003,

0xf2c2,	// (0x0009a86e) list_medium_line_x2_t3_g4_g_ParamLimits

0xf2c2,	// (0x0009a86e) list_medium_line_x2_t3_g4_g

0x0a3c,	// (0x0008bfe8) list_medium_line_x2_t3_g4_t1_ParamLimits

0x0a3c,	// (0x0008bfe8) list_medium_line_x2_t3_g4_t1

0x0a56,	// (0x0008c002) list_medium_line_x2_t3_g4_t2_ParamLimits

0x0a56,	// (0x0008c002) list_medium_line_x2_t3_g4_t2

0x00b5,	// (0x0008b661) list_medium_line_x2_t3_g4_t3_ParamLimits

0x00b5,	// (0x0008b661) list_medium_line_x2_t3_g4_t3

0x0002,

0xfd4e,	// (0x0009b2fa) list_medium_line_x2_t3_g4_t_ParamLimits

0xfd4e,	// (0x0009b2fa) list_medium_line_x2_t3_g4_t

0x0431,	// (0x0008b9dd) list_medium_line_g2_g1_ParamLimits

0x0431,	// (0x0008b9dd) list_medium_line_g2_g1

0x70f8,	// (0x000926a4) list_medium_line_g2_g2_ParamLimits

0x70f8,	// (0x000926a4) list_medium_line_g2_g2

0x0001,

0xfa00,	// (0x0009afac) list_medium_line_g2_g_ParamLimits

0xfa00,	// (0x0009afac) list_medium_line_g2_g

0x0a6f,	// (0x0008c01b) list_medium_line_g2_t1_ParamLimits

0x0a6f,	// (0x0008c01b) list_medium_line_g2_t1

0x0431,	// (0x0008b9dd) list_medium_line_t3_g2_g1_ParamLimits

0x0431,	// (0x0008b9dd) list_medium_line_t3_g2_g1

0x70f8,	// (0x000926a4) list_medium_line_t3_g2_g2_ParamLimits

0x70f8,	// (0x000926a4) list_medium_line_t3_g2_g2

0x0001,

0xfa00,	// (0x0009afac) list_medium_line_t3_g2_g_ParamLimits

0xfa00,	// (0x0009afac) list_medium_line_t3_g2_g

0x0a84,	// (0x0008c030) list_medium_line_t3_g2_t1_ParamLimits

0x0a84,	// (0x0008c030) list_medium_line_t3_g2_t1

0x0a9b,	// (0x0008c047) list_medium_line_t3_g2_t2_ParamLimits

0x0a9b,	// (0x0008c047) list_medium_line_t3_g2_t2

0x0ab0,	// (0x0008c05c) list_medium_line_t3_g2_t3_ParamLimits

0x0ab0,	// (0x0008c05c) list_medium_line_t3_g2_t3

0x0002,

0xfd55,	// (0x0009b301) list_medium_line_t3_g2_t_ParamLimits

0xfd55,	// (0x0009b301) list_medium_line_t3_g2_t

0x8574,	// (0x00093b20) list_medium_line_right_icon_g1

0x0ac9,	// (0x0008c075) list_medium_line_right_icon_t1

0x0431,	// (0x0008b9dd) list_medium_line_t2_g1_ParamLimits

0x0431,	// (0x0008b9dd) list_medium_line_t2_g1

0x0ad7,	// (0x0008c083) list_medium_line_t2_t1_ParamLimits

0x0ad7,	// (0x0008c083) list_medium_line_t2_t1

0x0af1,	// (0x0008c09d) list_medium_line_t2_t2_ParamLimits

0x0af1,	// (0x0008c09d) list_medium_line_t2_t2

0x0001,

0xfd5c,	// (0x0009b308) list_medium_line_t2_t_ParamLimits

0xfd5c,	// (0x0009b308) list_medium_line_t2_t

0x0431,	// (0x0008b9dd) list_medium_line_t3_g1_ParamLimits

0x0431,	// (0x0008b9dd) list_medium_line_t3_g1

0x0b0a,	// (0x0008c0b6) list_medium_line_t3_t1_ParamLimits

0x0b0a,	// (0x0008c0b6) list_medium_line_t3_t1

0x0b21,	// (0x0008c0cd) list_medium_line_t3_t2_ParamLimits

0x0b21,	// (0x0008c0cd) list_medium_line_t3_t2

0x0b36,	// (0x0008c0e2) list_medium_line_t3_t3_ParamLimits

0x0b36,	// (0x0008c0e2) list_medium_line_t3_t3

0x0002,

0xfd61,	// (0x0009b30d) list_medium_line_t3_t_ParamLimits

0xfd61,	// (0x0009b30d) list_medium_line_t3_t

0x0431,	// (0x0008b9dd) list_medium_line_g3_g1_ParamLimits

0x0431,	// (0x0008b9dd) list_medium_line_g3_g1

0x8713,	// (0x00093cbf) list_medium_line_g3_g2_ParamLimits

0x8713,	// (0x00093cbf) list_medium_line_g3_g2

0x70f8,	// (0x000926a4) list_medium_line_g3_g3_ParamLimits

0x70f8,	// (0x000926a4) list_medium_line_g3_g3

0x0002,

0xfd68,	// (0x0009b314) list_medium_line_g3_g_ParamLimits

0xfd68,	// (0x0009b314) list_medium_line_g3_g

0x0b48,	// (0x0008c0f4) list_medium_line_g3_t1_ParamLimits

0x0b48,	// (0x0008c0f4) list_medium_line_g3_t1

0x0431,	// (0x0008b9dd) list_medium_line_t2_g3_g1_ParamLimits

0x0431,	// (0x0008b9dd) list_medium_line_t2_g3_g1

0x8713,	// (0x00093cbf) list_medium_line_t2_g3_g2_ParamLimits

0x8713,	// (0x00093cbf) list_medium_line_t2_g3_g2

0x70f8,	// (0x000926a4) list_medium_line_t2_g3_g3_ParamLimits

0x70f8,	// (0x000926a4) list_medium_line_t2_g3_g3

0x0002,

0xfd68,	// (0x0009b314) list_medium_line_t2_g3_g_ParamLimits

0xfd68,	// (0x0009b314) list_medium_line_t2_g3_g

0x0b5d,	// (0x0008c109) list_medium_line_t2_g3_t1_ParamLimits

0x0b5d,	// (0x0008c109) list_medium_line_t2_g3_t1

0x0b77,	// (0x0008c123) list_medium_line_t2_g3_t2_ParamLimits

0x0b77,	// (0x0008c123) list_medium_line_t2_g3_t2

0x0001,

0xfd6f,	// (0x0009b31b) list_medium_line_t2_g3_t_ParamLimits

0xfd6f,	// (0x0009b31b) list_medium_line_t2_g3_t

0x0431,	// (0x0008b9dd) list_medium_line_t3_g3_g1_ParamLimits

0x0431,	// (0x0008b9dd) list_medium_line_t3_g3_g1

0x8713,	// (0x00093cbf) list_medium_line_t3_g3_g2_ParamLimits

0x8713,	// (0x00093cbf) list_medium_line_t3_g3_g2

0x70f8,	// (0x000926a4) list_medium_line_t3_g3_g3_ParamLimits

0x70f8,	// (0x000926a4) list_medium_line_t3_g3_g3

0x0002,

0xfd68,	// (0x0009b314) list_medium_line_t3_g3_g_ParamLimits

0xfd68,	// (0x0009b314) list_medium_line_t3_g3_g

0x0b92,	// (0x0008c13e) list_medium_line_t3_g3_t1_ParamLimits

0x0b92,	// (0x0008c13e) list_medium_line_t3_g3_t1

0x0ba6,	// (0x0008c152) list_medium_line_t3_g3_t2_ParamLimits

0x0ba6,	// (0x0008c152) list_medium_line_t3_g3_t2

0x0bb8,	// (0x0008c164) list_medium_line_t3_g3_t3_ParamLimits

0x0bb8,	// (0x0008c164) list_medium_line_t3_g3_t3

0x0002,

0xfd74,	// (0x0009b320) list_medium_line_t3_g3_t_ParamLimits

0xfd74,	// (0x0009b320) list_medium_line_t3_g3_t

0x8682,	// (0x00093c2e) list_medium_line_right_iconx2_g1

0x8574,	// (0x00093b20) list_medium_line_right_iconx2_g2

0x0001,

0xfd7b,	// (0x0009b327) list_medium_line_right_iconx2_g

0x871f,	// (0x00093ccb) list_medium_line_right_iconx2_t1

0x8682,	// (0x00093c2e) list_medium_line_t2_right_iconx2_g1

0x8574,	// (0x00093b20) list_medium_line_t2_right_iconx2_g2

0x0001,

0xfd7b,	// (0x0009b327) list_medium_line_t2_right_iconx2_g

0x0bcc,	// (0x0008c178) list_medium_line_t2_right_iconx2_t1

0x0bdc,	// (0x0008c188) list_medium_line_t2_right_iconx2_t2

0x0001,

0xfd80,	// (0x0009b32c) list_medium_line_t2_right_iconx2_t

0x0bee,	// (0x0008c19a) list_medium_line_x4_t4_t1

0x0bfc,	// (0x0008c1a8) list_medium_line_x4_t4_t2

0x0c0c,	// (0x0008c1b8) list_medium_line_x4_t4_t3

0x0c1c,	// (0x0008c1c8) list_medium_line_x4_t4_t4

0x0003,

0xfd85,	// (0x0009b331) list_medium_line_x4_t4_t

0x8770,	// (0x00093d1c) tport_appsw_pane_ParamLimits

0x8770,	// (0x00093d1c) tport_appsw_pane

0x8788,	// (0x00093d34) tport_contact_pane_ParamLimits

0x8788,	// (0x00093d34) tport_contact_pane

0x87a0,	// (0x00093d4c) tport_listscroll_pane_ParamLimits

0x87a0,	// (0x00093d4c) tport_listscroll_pane

0x87ba,	// (0x00093d66) cell_tport_appsw_pane_ParamLimits

0x87ba,	// (0x00093d66) cell_tport_appsw_pane

0xd615,	// (0x00098bc1) tport_appsw_pane_g1_ParamLimits

0xd615,	// (0x00098bc1) tport_appsw_pane_g1

0xe76a,	// (0x00099d16) tport_contact_pane_g1

0xe0dd,	// (0x00099689) tport_contact_pane_t1

0xe773,	// (0x00099d1f) tport_contact_pane_t2

0x0001,

0xfd8e,	// (0x0009b33a) tport_contact_pane_t

0xe781,	// (0x00099d2d) list_tport_pane

0xe78a,	// (0x00099d36) scroll_pane_cp_030

0x8802,	// (0x00093dae) cell_tport_appsw_pane_g1

0x8812,	// (0x00093dbe) cell_tport_appsw_pane_t1

0x8820,	// (0x00093dcc) grid_highlight_pane_cp019

0x8828,	// (0x00093dd4) list_tport_double_graphic_pane_ParamLimits

0x8828,	// (0x00093dd4) list_tport_double_graphic_pane

0xa480,	// (0x00095a2c) list_highlight_pane_cp023_ParamLimits

0xa480,	// (0x00095a2c) list_highlight_pane_cp023

0x8835,	// (0x00093de1) list_tport_double_graphic_pane_g1_ParamLimits

0x8835,	// (0x00093de1) list_tport_double_graphic_pane_g1

0x8842,	// (0x00093dee) list_tport_double_graphic_pane_t1_ParamLimits

0x8842,	// (0x00093dee) list_tport_double_graphic_pane_t1

0x8857,	// (0x00093e03) list_tport_double_graphic_pane_t2_ParamLimits

0x8857,	// (0x00093e03) list_tport_double_graphic_pane_t2

0x0001,

0xfd9a,	// (0x0009b346) list_tport_double_graphic_pane_t_ParamLimits

0xfd9a,	// (0x0009b346) list_tport_double_graphic_pane_t

0x96d4,	// (0x00094c80) main_cale_note_pane

0x6860,	// (0x00091e0c) cell_vitu2_function_top_wide_pane_cp01_ParamLimits

0x6860,	// (0x00091e0c) cell_vitu2_function_top_wide_pane_cp01

0x8178,	// (0x00093724) wait_bar_pane_cp05_ParamLimits

0xa480,	// (0x00095a2c) listscroll_cmail_pane

0xe793,	// (0x00099d3f) list_cmail_pane

0x8869,	// (0x00093e15) list_cmail_body_pane

0x887e,	// (0x00093e2a) list_single_cmail_header_caption_pane

0x8897,	// (0x00093e43) list_single_cmail_header_detail_pane_ParamLimits

0x8897,	// (0x00093e43) list_single_cmail_header_detail_pane

0xe7a3,	// (0x00099d4f) list_single_cmail_header_caption_pane_t1

0x0c2c,	// (0x0008c1d8) list_single_cmail_header_detail_pane_g1_ParamLimits

0x0c2c,	// (0x0008c1d8) list_single_cmail_header_detail_pane_g1

0xa3a5,	// (0x00095951) list_single_cmail_header_detail_pane_g2_ParamLimits

0xa3a5,	// (0x00095951) list_single_cmail_header_detail_pane_g2

0x0002,

0xfd9f,	// (0x0009b34b) list_single_cmail_header_detail_pane_g_ParamLimits

0xfd9f,	// (0x0009b34b) list_single_cmail_header_detail_pane_g

0x0c44,	// (0x0008c1f0) list_single_cmail_header_detail_pane_t1_ParamLimits

0x0c44,	// (0x0008c1f0) list_single_cmail_header_detail_pane_t1

0x0c82,	// (0x0008c22e) list_single_cmail_header_editor_pane_bg_ParamLimits

0x0c82,	// (0x0008c22e) list_single_cmail_header_editor_pane_bg

0xe7c7,	// (0x00099d73) list_cmail_body_pane_g1

0xe7d0,	// (0x00099d7c) list_cmail_body_pane_t1

0xd635,	// (0x00098be1) list_single_cmail_header_editor_pane_bg_g1

0xab15,	// (0x000960c1) list_single_cmail_header_editor_pane_bg_g1_copy1

0xd645,	// (0x00098bf1) list_single_cmail_header_editor_pane_bg_g1_copy2

0xd63d,	// (0x00098be9) list_single_cmail_header_editor_pane_bg_g1_copy3

0xd859,	// (0x00098e05) list_single_cmail_header_editor_pane_bg_g1_copy4

0xd665,	// (0x00098c11) list_single_cmail_header_editor_pane_bg_g1_copy4_copy1

0xd655,	// (0x00098c01) list_single_cmail_header_editor_pane_bg_g1_copy4_copy2

0xd65d,	// (0x00098c09) list_single_cmail_header_editor_pane_bg_g1_copy4_copy3

0xaaf5,	// (0x000960a1) list_single_cmail_header_editor_pane_bg_g1_copy4_copy3_copy1

0x88e4,	// (0x00093e90) calenote_gesture_pane_ParamLimits

0x88e4,	// (0x00093e90) calenote_gesture_pane

0x8904,	// (0x00093eb0) calenote_window_pane_ParamLimits

0x8904,	// (0x00093eb0) calenote_window_pane

0xe7de,	// (0x00099d8a) popup_note_window_cp01

0x8920,	// (0x00093ecc) calenote_swipe_1_pane_ParamLimits

0x8920,	// (0x00093ecc) calenote_swipe_1_pane

0x855a,	// (0x00093b06) calenote_swipe_2_pane_ParamLimits

0x855a,	// (0x00093b06) calenote_swipe_2_pane

0xe5f0,	// (0x00099b9c) calenote_swipe_1_pane_g1_ParamLimits

0xe5f0,	// (0x00099b9c) calenote_swipe_1_pane_g1

0xe5fd,	// (0x00099ba9) calenote_swipe_1_pane_g2_ParamLimits

0xe5fd,	// (0x00099ba9) calenote_swipe_1_pane_g2

0x0001,

0xfcc3,	// (0x0009b26f) calenote_swipe_1_pane_g_ParamLimits

0xfcc3,	// (0x0009b26f) calenote_swipe_1_pane_g

0xe7f0,	// (0x00099d9c) calenote_swipe_1_pane_t1_ParamLimits

0xe7f0,	// (0x00099d9c) calenote_swipe_1_pane_t1

0xe5f0,	// (0x00099b9c) calenote_swipe_2_pane_g1_ParamLimits

0xe5f0,	// (0x00099b9c) calenote_swipe_2_pane_g1

0xe80f,	// (0x00099dbb) calenote_swipe_2_pane_g2_ParamLimits

0xe80f,	// (0x00099dbb) calenote_swipe_2_pane_g2

0x0001,

0xfdab,	// (0x0009b357) calenote_swipe_2_pane_g_ParamLimits

0xfdab,	// (0x0009b357) calenote_swipe_2_pane_g

0xe81b,	// (0x00099dc7) calenote_swipe_2_pane_t1_ParamLimits

0xe81b,	// (0x00099dc7) calenote_swipe_2_pane_t1

0x96d4,	// (0x00094c80) main_mup_navstr_pane

0x5518,	// (0x00090ac4) main_mup3_pane_t7_ParamLimits

0x5518,	// (0x00090ac4) main_mup3_pane_t7

0x9fdc,	// (0x00095588) main_mp4_pane_g6_ParamLimits

0x9fdc,	// (0x00095588) main_mp4_pane_g6

0xa180,	// (0x0009572c) main_image3_pane_t4_ParamLimits

0xa180,	// (0x0009572c) main_image3_pane_t4

0x8935,	// (0x00093ee1) popup_navstr_preview_pane_ParamLimits

0x8935,	// (0x00093ee1) popup_navstr_preview_pane

0x8949,	// (0x00093ef5) scroll_navstr_pane_ParamLimits

0x8949,	// (0x00093ef5) scroll_navstr_pane

0x96d4,	// (0x00094c80) bg_popup_preview_window_pane_cp04

0xe842,	// (0x00099dee) popup_navstr_preview_pane_t1

0x895d,	// (0x00093f09) scroll_navstr_pane_g1_ParamLimits

0x895d,	// (0x00093f09) scroll_navstr_pane_g1

0x8971,	// (0x00093f1d) scroll_navstr_pane_t1_ParamLimits

0x8971,	// (0x00093f1d) scroll_navstr_pane_t1

0xe7e7,	// (0x00099d93) bg_button_pane_cp014

0xe7e7,	// (0x00099d93) bg_button_pane_cp030

0x06d8,	// (0x0008bc84) list_double_fisheye_pane_g4_ParamLimits

0x06d8,	// (0x0008bc84) list_double_fisheye_pane_g4

0x06e4,	// (0x0008bc90) list_double_fisheye_pane_g5_ParamLimits

0x06e4,	// (0x0008bc90) list_double_fisheye_pane_g5

0xc01e,	// (0x000975ca) sp_fs_scroll_pane_cp03

0xe6e3,	// (0x00099c8f) main_sp_fs_ctrlbar_pane_g1_ParamLimits

0xe6ef,	// (0x00099c9b) main_sp_fs_ctrlbar_pane_g2_ParamLimits

0xfce0,	// (0x0009b28c) main_sp_fs_ctrlbar_pane_g_ParamLimits

0xe6fb,	// (0x00099ca7) main_sp_fs_ctrlbar_pane_t1_ParamLimits

0xe79b,	// (0x00099d47) sp_fs_scroll_pane_cp02

0xa80b,	// (0x00095db7) popup_sp_fs_calendar_preview_list_single_pane_ParamLimits

0xa80b,	// (0x00095db7) popup_sp_fs_calendar_preview_list_single_pane

0x96d4,	// (0x00094c80) main_cam6_pano_pane

0xa480,	// (0x00095a2c) main_mup3_pane_ParamLimits

0x96d4,	// (0x00094c80) main_phacti_pane

0x804b,	// (0x000935f7) bg_button_pane_cp11

0x8065,	// (0x00093611) main_mobtv_info_pane_g2_ParamLimits

0x8065,	// (0x00093611) main_mobtv_info_pane_g2

0x0001,

0xfc40,	// (0x0009b1ec) main_mobtv_info_pane_g_ParamLimits

0xfc40,	// (0x0009b1ec) main_mobtv_info_pane_g

0x8242,	// (0x000937ee) sc_clock_pane_t5_ParamLimits

0x8242,	// (0x000937ee) sc_clock_pane_t5

0x82fd,	// (0x000938a9) main_radioblah_pane_g1_ParamLimits

0xe521,	// (0x00099acd) main_radioblah_pane_t3_ParamLimits

0xe521,	// (0x00099acd) main_radioblah_pane_t3

0xe539,	// (0x00099ae5) main_radioblah_pane_t4_ParamLimits

0xe539,	// (0x00099ae5) main_radioblah_pane_t4

0x8325,	// (0x000938d1) main_radioblah_text_pane_ParamLimits

0x8325,	// (0x000938d1) main_radioblah_text_pane

0x8337,	// (0x000938e3) main_radioblah_info_pane_g1_ParamLimits

0x83d0,	// (0x0009397c) main_radioblah_info_pane_t4_ParamLimits

0x83d0,	// (0x0009397c) main_radioblah_info_pane_t4

0xa480,	// (0x00095a2c) main_sp_fs_calendar_pane

0x8987,	// (0x00093f33) main_phacti_pane_g1

0x898f,	// (0x00093f3b) phacti_note_pane_ParamLimits

0x898f,	// (0x00093f3b) phacti_note_pane

0xe859,	// (0x00099e05) phacti_term_pane_ParamLimits

0xe859,	// (0x00099e05) phacti_term_pane

0xe86e,	// (0x00099e1a) phacti_note_pane_t1_ParamLimits

0xe86e,	// (0x00099e1a) phacti_note_pane_t1

0x89a3,	// (0x00093f4f) phacti_term_pane_g1

0x89ab,	// (0x00093f57) phacti_term_pane_t1_ParamLimits

0x89ab,	// (0x00093f57) phacti_term_pane_t1

0xe885,	// (0x00099e31) popup_sp_fs_calendar_preview_list_single_pane_g1

0xe88d,	// (0x00099e39) popup_sp_fs_calendar_preview_list_single_pane_g2

0x0001,

0xfdb5,	// (0x0009b361) popup_sp_fs_calendar_preview_list_single_pane_g

0xe895,	// (0x00099e41) popup_sp_fs_calendar_preview_list_single_pane_t1_ParamLimits

0xe895,	// (0x00099e41) popup_sp_fs_calendar_preview_list_single_pane_t1

0xe8ab,	// (0x00099e57) aid_popup_sp_fs_bg_corner_pane

0xcbc0,	// (0x0009816c) popup_sp_fs_calendar_preview_bg_pane_g1

0x96d4,	// (0x00094c80) popup_sp_fs_calendar_preview_bg_pane

0x1e65,	// (0x0008d411) popup_sp_fs_calendar_preview_list_pane

0xc7b6,	// (0x00097d62) bg_main_sp_fs_cale_pane_ParamLimits

0xc7b6,	// (0x00097d62) bg_main_sp_fs_cale_pane

0x8a36,	// (0x00093fe2) listscroll_cale_mrui_pane_ParamLimits

0x8a36,	// (0x00093fe2) listscroll_cale_mrui_pane

0x8a4b,	// (0x00093ff7) listscroll_sp_fs_schedule_track_pane

0x8a54,	// (0x00094000) main_sp_fs_ctrlbar_pane_cp01_ParamLimits

0x8a54,	// (0x00094000) main_sp_fs_ctrlbar_pane_cp01

0xe8b3,	// (0x00099e5f) main_sp_fs_ribbon_pane

0x8a67,	// (0x00094013) popup_sp_fs_cale_preview_window

0x8a79,	// (0x00094025) list_single_sp_fs_schedule_track_pane_ParamLimits

0x8a79,	// (0x00094025) list_single_sp_fs_schedule_track_pane

0xa480,	// (0x00095a2c) bg_sp_fs_highlight_list_pane_cp03_ParamLimits

0xa480,	// (0x00095a2c) bg_sp_fs_highlight_list_pane_cp03

0x8a8f,	// (0x0009403b) list_single_sp_fs_schedule_track_pane_g1_ParamLimits

0x8a8f,	// (0x0009403b) list_single_sp_fs_schedule_track_pane_g1

0x8a9b,	// (0x00094047) list_single_sp_fs_schedule_track_pane_g2_ParamLimits

0x8a9b,	// (0x00094047) list_single_sp_fs_schedule_track_pane_g2

0x0001,

0xfdba,	// (0x0009b366) list_single_sp_fs_schedule_track_pane_g_ParamLimits

0xfdba,	// (0x0009b366) list_single_sp_fs_schedule_track_pane_g

0x8aa7,	// (0x00094053) list_single_sp_fs_schedule_track_pane_t1_ParamLimits

0x8aa7,	// (0x00094053) list_single_sp_fs_schedule_track_pane_t1

0x8ac1,	// (0x0009406d) sp_fs_schedule_track_pane_ParamLimits

0x8ac1,	// (0x0009406d) sp_fs_schedule_track_pane

0xe8bb,	// (0x00099e67) sp_fs_schedule_track_pane_g1

0xe8c3,	// (0x00099e6f) sp_fs_schedule_track_pane_g2

0xe8cb,	// (0x00099e77) sp_fs_schedule_track_pane_g3

0xe8d3,	// (0x00099e7f) sp_fs_schedule_track_pane_g4

0xe8db,	// (0x00099e87) sp_fs_schedule_track_pane_g5

0x0004,

0xfdbf,	// (0x0009b36b) sp_fs_schedule_track_pane_g

0xd635,	// (0x00098be1) bg_sp_fs_schedule_viewer_highlight_g1

0xab15,	// (0x000960c1) bg_sp_fs_schedule_viewer_highlight_g2

0xd63d,	// (0x00098be9) bg_sp_fs_schedule_viewer_highlight_g3

0xd645,	// (0x00098bf1) bg_sp_fs_schedule_viewer_highlight_g4

0xd859,	// (0x00098e05) bg_sp_fs_schedule_viewer_highlight_g5

0xd655,	// (0x00098c01) bg_sp_fs_schedule_viewer_highlight_g6

0xd65d,	// (0x00098c09) bg_sp_fs_schedule_viewer_highlight_g7

0xd665,	// (0x00098c11) bg_sp_fs_schedule_viewer_highlight_g8

0xaaf5,	// (0x000960a1) bg_sp_fs_schedule_viewer_highlight_g9

0x0008,

0xfdca,	// (0x0009b376) bg_sp_fs_schedule_viewer_highlight_g

0x96d4,	// (0x00094c80) bg_main_sp_fs_ribbon_pane

0x8ad2,	// (0x0009407e) main_sp_fs_ribbon_pane_g1

0xe8e3,	// (0x00099e8f) main_sp_fs_ribbon_pane_t1

0x8adb,	// (0x00094087) main_sp_fs_ribbon_pane_t2

0xe8f2,	// (0x00099e9e) main_sp_fs_ribbon_pane_t3

0x0002,

0xfddd,	// (0x0009b389) main_sp_fs_ribbon_pane_t

0xe901,	// (0x00099ead) main_sp_fs_ribbon_scheduler_pane

0xe909,	// (0x00099eb5) bg_main_sp_fs_ribbon_pane_g1

0xe912,	// (0x00099ebe) bg_main_sp_fs_ribbon_pane_g2

0xe932,	// (0x00099ede) bg_main_sp_fs_ribbon_pane_g3

0x0002,

0xfde4,	// (0x0009b390) bg_main_sp_fs_ribbon_pane_g

0xe93a,	// (0x00099ee6) main_sp_fs_ribbon_scheduler_pane_g1

0xe943,	// (0x00099eef) main_sp_fs_ribbon_scheduler_pane_g2

0xe94c,	// (0x00099ef8) main_sp_fs_ribbon_scheduler_pane_g3

0x0002,

0xfdeb,	// (0x0009b397) main_sp_fs_ribbon_scheduler_pane_g

0xe955,	// (0x00099f01) list_cale_mrui_pane

0x8aea,	// (0x00094096) sp_fs_scroll_pane_cp07_ParamLimits

0x8aea,	// (0x00094096) sp_fs_scroll_pane_cp07

0x8b06,	// (0x000940b2) bg_sp_fs_schedule_viewer_highlight_ParamLimits

0x8b06,	// (0x000940b2) bg_sp_fs_schedule_viewer_highlight

0xe962,	// (0x00099f0e) list_single_sp_fs_schedule_track_pane_cp01

0xe96a,	// (0x00099f16) list_sp_fs_schedule_track_pane

0xe972,	// (0x00099f1e) sp_fs_scroll_pane_cp06_ParamLimits

0xe972,	// (0x00099f1e) sp_fs_scroll_pane_cp06

0xcbc0,	// (0x0009816c) bgmain_sp_fs_calendar_pane_g1

0x0c9b,	// (0x0008c247) list_single_cale_mrui_pane_ParamLimits

0x0c9b,	// (0x0008c247) list_single_cale_mrui_pane

0x8b16,	// (0x000940c2) list_single_cale_mrui_row_pane_ParamLimits

0x8b16,	// (0x000940c2) list_single_cale_mrui_row_pane

0x8b23,	// (0x000940cf) list_single_cale_mrui_row_pane_g1_ParamLimits

0x8b23,	// (0x000940cf) list_single_cale_mrui_row_pane_g1

0x8b5b,	// (0x00094107) list_single_cale_mrui_row_pane_t1_ParamLimits

0x8b5b,	// (0x00094107) list_single_cale_mrui_row_pane_t1

0x0cbd,	// (0x0008c269) list_single_cale_mrui_row_pane_t2_ParamLimits

0x0cbd,	// (0x0008c269) list_single_cale_mrui_row_pane_t2

0x8b6d,	// (0x00094119) list_single_cale_mrui_row_pane_t3_ParamLimits

0x8b6d,	// (0x00094119) list_single_cale_mrui_row_pane_t3

0x8b9c,	// (0x00094148) list_single_cale_mrui_row_pane_t4_ParamLimits

0x8b9c,	// (0x00094148) list_single_cale_mrui_row_pane_t4

0x0003,

0xfdf9,	// (0x0009b3a5) list_single_cale_mrui_row_pane_t_ParamLimits

0xfdf9,	// (0x0009b3a5) list_single_cale_mrui_row_pane_t

0x0d25,	// (0x0008c2d1) list_single_cmail_header_editor_pane_bg_cp01_ParamLimits

0x0d25,	// (0x0008c2d1) list_single_cmail_header_editor_pane_bg_cp01

0x0d4b,	// (0x0008c2f7) list_single_cmail_header_editor_pane_bg_cp02_ParamLimits

0x0d4b,	// (0x0008c2f7) list_single_cmail_header_editor_pane_bg_cp02

0x8bcb,	// (0x00094177) main_radioblah_text_pane_t1_ParamLimits

0x8bcb,	// (0x00094177) main_radioblah_text_pane_t1

0xe991,	// (0x00099f3d) cam6_indi_pane_cp01

0xe999,	// (0x00099f45) cam6_mode_pane_cp01

0xe9a1,	// (0x00099f4d) cam6_pano_pane

0xe9aa,	// (0x00099f56) cam6_zoom_pane_cp01

0xe9b2,	// (0x00099f5e) cam6_pano_image_pane

0xe9bd,	// (0x00099f69) cam6_pano_pane_g1

0xe284,	// (0x00099830) cam6_pano_pane_g2

0xe9c6,	// (0x00099f72) cam6_pano_pane_g3

0xe9cf,	// (0x00099f7b) cam6_pano_pane_g4

0xd17e,	// (0x0009872a) cam6_pano_pane_g5

0xe9d8,	// (0x00099f84) cam6_pano_pane_g6

0xe9e2,	// (0x00099f8e) cam6_pano_pane_g7

0xe9ea,	// (0x00099f96) cam6_pano_pane_g8

0xe9f3,	// (0x00099f9f) cam6_pano_pane_g9

0x0008,

0xfe02,	// (0x0009b3ae) cam6_pano_pane_g

0x96d4,	// (0x00094c80) main_browser_tag_pane

0xe83a,	// (0x00099de6) grid_navstr_albumart_pane

0xe9fe,	// (0x00099faa) cell_navstr_albumart_pane_ParamLimits

0xe9fe,	// (0x00099faa) cell_navstr_albumart_pane

0xb500,	// (0x00096aac) cell_navstr_albumart_pane_g1

0xc5c7,	// (0x00097b73) cell_navstr_albumart_pane_g2

0xc5d7,	// (0x00097b83) cell_navstr_albumart_pane_g3

0xc5cf,	// (0x00097b7b) cell_navstr_albumart_pane_g4

0x0003,

0xfe15,	// (0x0009b3c1) cell_navstr_albumart_pane_g

0x8be6,	// (0x00094192) bt_list_pane_ParamLimits

0x8be6,	// (0x00094192) bt_list_pane

0xea20,	// (0x00099fcc) bt_list_pane_t1

0xea2f,	// (0x00099fdb) bt_list_pane_t2

0x0001,

0xfe1e,	// (0x0009b3ca) bt_list_pane_t

0x96d4,	// (0x00094c80) main_cale_prevew_pane

0x8bfb,	// (0x000941a7) popup_cale_preview_window_ParamLimits

0x8bfb,	// (0x000941a7) popup_cale_preview_window

0xa480,	// (0x00095a2c) bg_popup_preview_window_pane_cp05_ParamLimits

0xa480,	// (0x00095a2c) bg_popup_preview_window_pane_cp05

0xea3e,	// (0x00099fea) list_cale_preview_pane_ParamLimits

0xea3e,	// (0x00099fea) list_cale_preview_pane

0xea4a,	// (0x00099ff6) list_double_cale_preview_pane_ParamLimits

0xea4a,	// (0x00099ff6) list_double_cale_preview_pane

0xea5c,	// (0x0009a008) list_single_cale_preview_pane_ParamLimits

0xea5c,	// (0x0009a008) list_single_cale_preview_pane

0xea70,	// (0x0009a01c) list_single_cale_preview_pane_g1

0xea78,	// (0x0009a024) list_single_cale_preview_pane_t1_ParamLimits

0xea78,	// (0x0009a024) list_single_cale_preview_pane_t1

0xea8d,	// (0x0009a039) list_double_cale_preview_pane_g1

0xea95,	// (0x0009a041) list_double_cale_preview_pane_t1_ParamLimits

0xea95,	// (0x0009a041) list_double_cale_preview_pane_t1

0xeaaa,	// (0x0009a056) list_double_cale_preview_pane_t2_ParamLimits

0xeaaa,	// (0x0009a056) list_double_cale_preview_pane_t2

0x0001,

0xfe23,	// (0x0009b3cf) list_double_cale_preview_pane_t_ParamLimits

0xfe23,	// (0x0009b3cf) list_double_cale_preview_pane_t

0x96d4,	// (0x00094c80) main_ezdial_pane

0xa480,	// (0x00095a2c) main_sp_fs_email_pane_ParamLimits

0x857c,	// (0x00093b28) cmail_ddmenu_btn01_pane_ParamLimits

0x857c,	// (0x00093b28) cmail_ddmenu_btn01_pane

0x858f,	// (0x00093b3b) cmail_ddmenu_btn02_pane_ParamLimits

0x858f,	// (0x00093b3b) cmail_ddmenu_btn02_pane

0x85b2,	// (0x00093b5e) cmail_ddmenu_btn03_pane_ParamLimits

0x85b2,	// (0x00093b5e) cmail_ddmenu_btn03_pane

0x85d8,	// (0x00093b84) main_sp_fs_ctrlbar_pane_ParamLimits

0x85fc,	// (0x00093ba8) main_sp_fs_listscroll_pane_te_cp01_ParamLimits

0x8869,	// (0x00093e15) list_cmail_body_pane_ParamLimits

0xe7b1,	// (0x00099d5d) bg_button_pane_cp12

0xe7ba,	// (0x00099d66) list_single_cmail_header_detail_pane_g3_ParamLimits

0xe7ba,	// (0x00099d66) list_single_cmail_header_detail_pane_g3

0x88c0,	// (0x00093e6c) list_single_cmail_header_detail_pane_t2_ParamLimits

0x88c0,	// (0x00093e6c) list_single_cmail_header_detail_pane_t2

0x0001,

0xfda6,	// (0x0009b352) list_single_cmail_header_detail_pane_t_ParamLimits

0xfda6,	// (0x0009b352) list_single_cmail_header_detail_pane_t

0x89c0,	// (0x00093f6c) phacti_term_pane_t2_ParamLimits

0x89c0,	// (0x00093f6c) phacti_term_pane_t2

0x0001,

0xfdb0,	// (0x0009b35c) phacti_term_pane_t_ParamLimits

0xfdb0,	// (0x0009b35c) phacti_term_pane_t

0xeac2,	// (0x0009a06e) aid_size_list_single_double

0x8c14,	// (0x000941c0) popup_ezdial_listscroll_window

0x8c2f,	// (0x000941db) popup_number_entry_window_cp01

0xb391,	// (0x0009693d) bg_popup_call_pane_cp09

0xeace,	// (0x0009a07a) ezdial_list_pane

0xead6,	// (0x0009a082) scroll_pane_cp23

0xc7b6,	// (0x00097d62) bg_button_pane_cp028_ParamLimits

0xc7b6,	// (0x00097d62) bg_button_pane_cp028

0x8c3d,	// (0x000941e9) cmail_ddmenu_btn01_pane_g1_ParamLimits

0x8c3d,	// (0x000941e9) cmail_ddmenu_btn01_pane_g1

0x8c49,	// (0x000941f5) cmail_ddmenu_btn01_pane_g2_ParamLimits

0x8c49,	// (0x000941f5) cmail_ddmenu_btn01_pane_g2

0x0001,

0xfe28,	// (0x0009b3d4) cmail_ddmenu_btn01_pane_g_ParamLimits

0xfe28,	// (0x0009b3d4) cmail_ddmenu_btn01_pane_g

0xeade,	// (0x0009a08a) cmail_ddmenu_btn01_pane_t1_ParamLimits

0xeade,	// (0x0009a08a) cmail_ddmenu_btn01_pane_t1

0xc7b6,	// (0x00097d62) bg_button_pane_cp029_ParamLimits

0xc7b6,	// (0x00097d62) bg_button_pane_cp029

0x8c55,	// (0x00094201) cmail_ddmenu_btn02_pane_g1_ParamLimits

0x8c55,	// (0x00094201) cmail_ddmenu_btn02_pane_g1

0x8c6d,	// (0x00094219) cmail_ddmenu_btn02_pane_t1_ParamLimits

0x8c6d,	// (0x00094219) cmail_ddmenu_btn02_pane_t1

0xa480,	// (0x00095a2c) bg_button_pane_cp031_ParamLimits

0xa480,	// (0x00095a2c) bg_button_pane_cp031

0x8c55,	// (0x00094201) cmail_ddmenu_btn03_pane_g1_ParamLimits

0x8c55,	// (0x00094201) cmail_ddmenu_btn03_pane_g1

0x8c6d,	// (0x00094219) cmail_ddmenu_btn03_pane_t1_ParamLimits

0x8c6d,	// (0x00094219) cmail_ddmenu_btn03_pane_t1

0x60e6,	// (0x00091692) cell_dialer2_keypad_pane_t1_ParamLimits

0x6100,	// (0x000916ac) cell_dialer2_keypad_pane_t1_copy1_ParamLimits

0x6100,	// (0x000916ac) cell_dialer2_keypad_pane_t1_copy1

0x7eb2,	// (0x0009345e) ncimui_group_button_pane

0xa480,	// (0x00095a2c) main_sp_fs_calendar_pane_ParamLimits

0x887e,	// (0x00093e2a) list_single_cmail_header_caption_pane_ParamLimits

0xa3b1,	// (0x0009595d) aid_recal_txt_sm_pane

0x96d4,	// (0x00094c80) mian_recal_day_pane

0x8a67,	// (0x00094013) popup_sp_fs_cale_preview_window_ParamLimits

0xeaf3,	// (0x0009a09f) list_recal_day_pane

0xa3d5,	// (0x00095981) list_single_recal_day_pane_ParamLimits

0xa3d5,	// (0x00095981) list_single_recal_day_pane

0xeb1a,	// (0x0009a0c6) list_single_recal_day_pane_g1_ParamLimits

0xeb1a,	// (0x0009a0c6) list_single_recal_day_pane_g1

0xa3e7,	// (0x00095993) list_single_recal_day_pane_g2_ParamLimits

0xa3e7,	// (0x00095993) list_single_recal_day_pane_g2

0xa3f7,	// (0x000959a3) list_single_recal_day_pane_g3_ParamLimits

0xa3f7,	// (0x000959a3) list_single_recal_day_pane_g3

0x0d6b,	// (0x0008c317) list_single_recal_day_pane_g4_ParamLimits

0x0d6b,	// (0x0008c317) list_single_recal_day_pane_g4

0xa403,	// (0x000959af) list_single_recal_day_pane_g5_ParamLimits

0xa403,	// (0x000959af) list_single_recal_day_pane_g5

0xa413,	// (0x000959bf) list_single_recal_day_pane_g6_ParamLimits

0xa413,	// (0x000959bf) list_single_recal_day_pane_g6

0x0004,

0xfe37,	// (0x0009b3e3) list_single_recal_day_pane_g_ParamLimits

0xfe37,	// (0x0009b3e3) list_single_recal_day_pane_g

0xa427,	// (0x000959d3) list_single_recal_day_pane_t1

0xa439,	// (0x000959e5) list_single_recal_day_pane_t2

0x0001,

0xfe42,	// (0x0009b3ee) list_single_recal_day_pane_t

0x8c91,	// (0x0009423d) ncimui_query_button_pane_ParamLimits

0x8c91,	// (0x0009423d) ncimui_query_button_pane

0x8ca1,	// (0x0009424d) ncimui_query_button_pane_t1_ParamLimits

0x8ca1,	// (0x0009424d) ncimui_query_button_pane_t1

0xeb26,	// (0x0009a0d2) ncimui_query_button_pane_t2_ParamLimits

0xeb26,	// (0x0009a0d2) ncimui_query_button_pane_t2

0x0001,

0xfe47,	// (0x0009b3f3) ncimui_query_button_pane_t_ParamLimits

0xfe47,	// (0x0009b3f3) ncimui_query_button_pane_t

0x8cb4,	// (0x00094260) query_button_pane_ParamLimits

0x8cb4,	// (0x00094260) query_button_pane

0x96d4,	// (0x00094c80) bg_button_pane_cp0028

0xeb39,	// (0x0009a0e5) query_button_pane_t1

0x4155,	// (0x0008f701) main_tport_pane_ParamLimits

0x872d,	// (0x00093cd9) bg_popup_window_pane_cp01_ParamLimits

0x872d,	// (0x00093cd9) bg_popup_window_pane_cp01

0x8748,	// (0x00093cf4) heading_pane_cp08_ParamLimits

0x8748,	// (0x00093cf4) heading_pane_cp08

0x875b,	// (0x00093d07) heading_pane_cp07_ParamLimits

0x875b,	// (0x00093d07) heading_pane_cp07

0x8802,	// (0x00093dae) cell_tport_appsw_pane_g2

0x0002,

0xfd93,	// (0x0009b33f) cell_tport_appsw_pane_g

0x0292,	// (0x0008b83e) input_candi_list_open_g1

0xace0,	// (0x0009628c) list_cale_time_pane_g6_ParamLimits

0xace0,	// (0x0009628c) list_cale_time_pane_g6

0x4f18,	// (0x000904c4) aid_size_touch_calib_1_ParamLimits

0x4f18,	// (0x000904c4) aid_size_touch_calib_1

0x4f2a,	// (0x000904d6) aid_size_touch_calib_2_ParamLimits

0x4f2a,	// (0x000904d6) aid_size_touch_calib_2

0x4f42,	// (0x000904ee) aid_size_touch_calib_3_ParamLimits

0x4f42,	// (0x000904ee) aid_size_touch_calib_3

0x4f60,	// (0x0009050c) aid_size_touch_calib_4_ParamLimits

0x4f60,	// (0x0009050c) aid_size_touch_calib_4

0x4f78,	// (0x00090524) main_touch_calib_button_group_pane_ParamLimits

0x4f78,	// (0x00090524) main_touch_calib_button_group_pane

0x4f90,	// (0x0009053c) main_touch_calib_pane_g1_ParamLimits

0x4fa2,	// (0x0009054e) main_touch_calib_pane_g2_ParamLimits

0x4fb4,	// (0x00090560) main_touch_calib_pane_g3_ParamLimits

0x4fc6,	// (0x00090572) main_touch_calib_pane_g4_ParamLimits

0xf751,	// (0x0009acfd) main_touch_calib_pane_g_ParamLimits

0x4fd8,	// (0x00090584) main_touch_calib_pane_t1_ParamLimits

0x4ff2,	// (0x0009059e) main_touch_calib_pane_t2_ParamLimits

0x500c,	// (0x000905b8) main_touch_calib_pane_t3_ParamLimits

0x5020,	// (0x000905cc) main_touch_calib_pane_t4_ParamLimits

0x5034,	// (0x000905e0) main_touch_calib_pane_t5_ParamLimits

0xf75a,	// (0x0009ad06) main_touch_calib_pane_t_ParamLimits

0xcf20,	// (0x000984cc) list_single_fp_cale_pane_g3_ParamLimits

0xcf20,	// (0x000984cc) list_single_fp_cale_pane_g3

0xa480,	// (0x00095a2c) bg_button_pane_cp012_ParamLimits

0xa480,	// (0x00095a2c) bg_vkb2_func_pane_cp03_ParamLimits

0x70ae,	// (0x0009265a) cell_vitu2_function_top_pane_g1_ParamLimits

0xa480,	// (0x00095a2c) bg_vkb2_func_pane_cp04_ParamLimits

0x7e40,	// (0x000933ec) main_ncimui_button_group_pane_ParamLimits

0x7e40,	// (0x000933ec) main_ncimui_button_group_pane

0x7ea0,	// (0x0009344c) main_ncimui_pane_t3_ParamLimits

0x7ea0,	// (0x0009344c) main_ncimui_pane_t3

0xe850,	// (0x00099dfc) phacti_button_group_pane

0xeac2,	// (0x0009a06e) aid_size_list_single_double_ParamLimits

0x8c14,	// (0x000941c0) popup_ezdial_listscroll_window_ParamLimits

0x8c2f,	// (0x000941db) popup_number_entry_window_cp01_ParamLimits

0x8cc7,	// (0x00094273) phacti_button_pane_ParamLimits

0x8cc7,	// (0x00094273) phacti_button_pane

0x96d4,	// (0x00094c80) bg_button_pane_cp14

0xeb47,	// (0x0009a0f3) phacti_button_pane_t1

0x8cd8,	// (0x00094284) main_touch_calib_button_pane_ParamLimits

0x8cd8,	// (0x00094284) main_touch_calib_button_pane

0xa6f5,	// (0x00095ca1) bg_button_pane_cp18_ParamLimits

0xa6f5,	// (0x00095ca1) bg_button_pane_cp18

0xeb55,	// (0x0009a101) main_touch_calib_button_pane_t1_ParamLimits

0xeb55,	// (0x0009a101) main_touch_calib_button_pane_t1

0xeb6b,	// (0x0009a117) main_touch_calib_button_pane_t2_ParamLimits

0xeb6b,	// (0x0009a117) main_touch_calib_button_pane_t2

0x0001,

0xfe4c,	// (0x0009b3f8) main_touch_calib_button_pane_t_ParamLimits

0xfe4c,	// (0x0009b3f8) main_touch_calib_button_pane_t

0x96d4,	// (0x00094c80) cell_ncimui_button_pane

0x96d4,	// (0x00094c80) bg_button_pane_cp032

0xeb89,	// (0x0009a135) cell_ncimui_button_pane_t1

0xa160,	// (0x0009570c) image3_infobar_pane_ParamLimits

0xa160,	// (0x0009570c) image3_infobar_pane

0x826e,	// (0x0009381a) fs_bigclock_status_pane_ParamLimits

0x826e,	// (0x0009381a) fs_bigclock_status_pane

0x827b,	// (0x00093827) main_fs_bigclock_clock_pane_ParamLimits

0x827b,	// (0x00093827) main_fs_bigclock_clock_pane

0x829b,	// (0x00093847) main_fs_bigclock_indi_pane_ParamLimits

0x829b,	// (0x00093847) main_fs_bigclock_indi_pane

0x82c5,	// (0x00093871) main_fs_bigclock_swipe_pane_ParamLimits

0x82c5,	// (0x00093871) main_fs_bigclock_swipe_pane

0x96d4,	// (0x00094c80) main_fs_clock_dumped_data

0xe391,	// (0x0009993d) list_single_fs_bigclock_indicator_pane_g1_ParamLimits

0xe391,	// (0x0009993d) list_single_fs_bigclock_indicator_pane_g1

0xe3ad,	// (0x00099959) list_single_fs_bigclock_indicator_pane_g2_ParamLimits

0xe3ad,	// (0x00099959) list_single_fs_bigclock_indicator_pane_g2

0xe3c7,	// (0x00099973) list_single_fs_bigclock_indicator_pane_g3_ParamLimits

0xe3c7,	// (0x00099973) list_single_fs_bigclock_indicator_pane_g3

0xe3e1,	// (0x0009998d) list_single_fs_bigclock_indicator_pane_g4_ParamLimits

0xe3e1,	// (0x0009998d) list_single_fs_bigclock_indicator_pane_g4

0x0004,

0xfc74,	// (0x0009b220) list_single_fs_bigclock_indicator_pane_g_ParamLimits

0xfc74,	// (0x0009b220) list_single_fs_bigclock_indicator_pane_g

0xe40c,	// (0x000999b8) list_single_fs_bigclock_indicator_pane_t1_ParamLimits

0xe40c,	// (0x000999b8) list_single_fs_bigclock_indicator_pane_t1

0xe434,	// (0x000999e0) list_single_fs_bigclock_indicator_pane_t2_ParamLimits

0xe434,	// (0x000999e0) list_single_fs_bigclock_indicator_pane_t2

0xe45c,	// (0x00099a08) list_single_fs_bigclock_indicator_pane_t3_ParamLimits

0xe45c,	// (0x00099a08) list_single_fs_bigclock_indicator_pane_t3

0xe484,	// (0x00099a30) list_single_fs_bigclock_indicator_pane_t4_ParamLimits

0xe484,	// (0x00099a30) list_single_fs_bigclock_indicator_pane_t4

0x0004,

0xfc7f,	// (0x0009b22b) list_single_fs_bigclock_indicator_pane_t_ParamLimits

0xfc7f,	// (0x0009b22b) list_single_fs_bigclock_indicator_pane_t

0xeb97,	// (0x0009a143) image3_infobar_fav_pane_ParamLimits

0xeb97,	// (0x0009a143) image3_infobar_fav_pane

0xeba7,	// (0x0009a153) image3_infobar_loc_pane_ParamLimits

0xeba7,	// (0x0009a153) image3_infobar_loc_pane

0xebbb,	// (0x0009a167) image3_infobar_time_pane_ParamLimits

0xebbb,	// (0x0009a167) image3_infobar_time_pane

0xcbc0,	// (0x0009816c) image3_infobar_time_pane_g1

0xebcb,	// (0x0009a177) image3_infobar_time_pane_t1

0xcbc0,	// (0x0009816c) image3_infobar_loc_pane_g1

0xebd9,	// (0x0009a185) image3_infobar_loc_pane_g2

0x0001,

0xfe51,	// (0x0009b3fd) image3_infobar_loc_pane_g

0xebe1,	// (0x0009a18d) image3_infobar_loc_pane_t1

0xcbc0,	// (0x0009816c) image3_infobar_fav_pane_g1

0xebef,	// (0x0009a19b) image3_infobar_fav_pane_g2

0x0001,

0xfe56,	// (0x0009b402) image3_infobar_fav_pane_g

0xebf7,	// (0x0009a1a3) fs_bigclock_status_battery_pane

0xec00,	// (0x0009a1ac) fs_bigclock_status_signal_pane

0xec09,	// (0x0009a1b5) fs_bigclock_status_title_pane

0xec12,	// (0x0009a1be) fs_bigclock_status_signal_pane_g1

0xec1b,	// (0x0009a1c7) fs_bigclock_status_signal_pane_g2

0x0001,

0xfe5b,	// (0x0009b407) fs_bigclock_status_signal_pane_g

0xec23,	// (0x0009a1cf) fs_bigclock_status_battery_pane_g1

0xec2c,	// (0x0009a1d8) fs_bigclock_status_battery_pane_g2

0x0001,

0xfe60,	// (0x0009b40c) fs_bigclock_status_battery_pane_g

0xec34,	// (0x0009a1e0) fs_bigclock_status_title_pane_t1

0xcbc0,	// (0x0009816c) main_fs_bigclock_clock_pane_g1

0xec42,	// (0x0009a1ee) main_fs_bigclock_clock_pane_g2

0xec4b,	// (0x0009a1f7) main_fs_bigclock_clock_pane_g3

0xec4b,	// (0x0009a1f7) main_fs_bigclock_clock_pane_g4

0x0003,

0xfe65,	// (0x0009b411) main_fs_bigclock_clock_pane_g

0xec53,	// (0x0009a1ff) main_fs_bigclock_clock_pane_t1

0x8ced,	// (0x00094299) main_fs_bigclock_clock_pane_t2

0x0001,

0xfe6e,	// (0x0009b41a) main_fs_bigclock_clock_pane_t

0xec61,	// (0x0009a20d) list_single_fs_bigclock_indicator_pane_ParamLimits

0xec61,	// (0x0009a20d) list_single_fs_bigclock_indicator_pane

0xec72,	// (0x0009a21e) list_single_fs_bigclock_pane_ParamLimits

0xec72,	// (0x0009a21e) list_single_fs_bigclock_pane

0xec98,	// (0x0009a244) main_fs_bigclock_indicator_pane_t1

0xeca7,	// (0x0009a253) list_single_fs_bigclock_pane_g1

0xecaf,	// (0x0009a25b) list_single_fs_bigclock_pane_t1

0xcbc0,	// (0x0009816c) main_fs_bigclock_swipe_pane_g1

0xecf2,	// (0x0009a29e) main_fs_bigclock_swipe_pane_g2

0x0001,

0xfe7f,	// (0x0009b42b) main_fs_bigclock_swipe_pane_g

0xecfa,	// (0x0009a2a6) main_fs_bigclock_swipe_pane_t1_ParamLimits

0xecfa,	// (0x0009a2a6) main_fs_bigclock_swipe_pane_t1

0x30e5,	// (0x0008e691) call_type_pane_ParamLimits

0x96d4,	// (0x00094c80) main_btmg_pane

0x8b4f,	// (0x000940fb) list_single_cale_mrui_row_pane_g2_ParamLimits

0x8b4f,	// (0x000940fb) list_single_cale_mrui_row_pane_g2

0x0002,

0xfdf2,	// (0x0009b39e) list_single_cale_mrui_row_pane_g_ParamLimits

0xfdf2,	// (0x0009b39e) list_single_cale_mrui_row_pane_g

0xa3c4,	// (0x00095970) list_recal_vselct_arw_lo_pane

0xeb12,	// (0x0009a0be) list_recal_vselct_arw_up_pane

0xa3cc,	// (0x00095978) list_recal_vselct_pane

0x8d3e,	// (0x000942ea) btmg_button_pane

0x8d48,	// (0x000942f4) main_btmg_pane_g1

0x96d4,	// (0x00094c80) bg_button_pane_cp044

0xed17,	// (0x0009a2c3) btmg_button_pane_t1

0xc7a2,	// (0x00097d4e) aid_listscroll_gen

0xa480,	// (0x00095a2c) main_cntbar_detail_pane

0xe793,	// (0x00099d3f) list_cmail_folder_pane

0xc01e,	// (0x000975ca) sp_fs_scroll_pane_cp03_ParamLimits

0x0d8b,	// (0x0008c337) list_single_fs_dyc_pane_cp01_ParamLimits

0x0d8b,	// (0x0008c337) list_single_fs_dyc_pane_cp01

0xed25,	// (0x0009a2d1) aid_size_cmail_indent

0xa44b,	// (0x000959f7) list_single_dyc_row_pane_cp01

0x8d7e,	// (0x0009432a) cntbar_detail_list_pane_ParamLimits

0x8d7e,	// (0x0009432a) cntbar_detail_list_pane

0x8dca,	// (0x00094376) main_cntbar_detail_cont_pane_ParamLimits

0x8dca,	// (0x00094376) main_cntbar_detail_cont_pane

0xc01e,	// (0x000975ca) scroll_pane_cp032_ParamLimits

0xc01e,	// (0x000975ca) scroll_pane_cp032

0x8dde,	// (0x0009438a) cntbar_detail_list_event_pane_ParamLimits

0x8dde,	// (0x0009438a) cntbar_detail_list_event_pane

0x8d8e,	// (0x0009433a) cntbar_detail_list_shct_pane

0xab63,	// (0x0009610f) aid_list_gen

0xed2e,	// (0x0009a2da) aid_scroll

0xed37,	// (0x0009a2e3) aid_size_touch_scroll_bar

0x058a,	// (0x0008bb36) aid_list_double

0xe91b,	// (0x00099ec7) aid_list_single

0x76f6,	// (0x00092ca2) aid_list_single_lg

0xa454,	// (0x00095a00) aid_list_z_g_a_sm

0xa45c,	// (0x00095a08) aid_list_z_g_d

0xa464,	// (0x00095a10) aid_txt_z_prm

0x0da3,	// (0x0008c34f) aid_txt_z_prm_cp01

0x0db1,	// (0x0008c35d) aid_txt_z_sec

0x8dee,	// (0x0009439a) main_cntbar_detail_cont_pane_g1_ParamLimits

0x8dee,	// (0x0009439a) main_cntbar_detail_cont_pane_g1

0x8e02,	// (0x000943ae) main_cntbar_detail_cont_pane_g2_ParamLimits

0x8e02,	// (0x000943ae) main_cntbar_detail_cont_pane_g2

0x0001,

0xfe84,	// (0x0009b430) main_cntbar_detail_cont_pane_g_ParamLimits

0xfe84,	// (0x0009b430) main_cntbar_detail_cont_pane_g

0xed40,	// (0x0009a2ec) main_cntbar_detail_cont_pane_t1

0xed4e,	// (0x0009a2fa) main_cntbar_detail_cont_pane_t2

0xed5c,	// (0x0009a308) main_cntbar_detail_cont_pane_t3

0x0002,

0xfe89,	// (0x0009b435) main_cntbar_detail_cont_pane_t

0x8e12,	// (0x000943be) cell_cntbar_detail_list_shct_pane_ParamLimits

0x8e12,	// (0x000943be) cell_cntbar_detail_list_shct_pane

0xed6a,	// (0x0009a316) cntbar_detail_list_shct_pane_g1

0xed73,	// (0x0009a31f) cntbar_detail_list_shct_pane_g2

0x0001,

0xfe90,	// (0x0009b43c) cntbar_detail_list_shct_pane_g

0x8e26,	// (0x000943d2) cntbar_detail_list_event_pane_g1_ParamLimits

0x8e26,	// (0x000943d2) cntbar_detail_list_event_pane_g1

0x8e32,	// (0x000943de) cntbar_detail_list_event_pane_g2_ParamLimits

0x8e32,	// (0x000943de) cntbar_detail_list_event_pane_g2

0x0005,

0xfe95,	// (0x0009b441) cntbar_detail_list_event_pane_g_ParamLimits

0xfe95,	// (0x0009b441) cntbar_detail_list_event_pane_g

0x8e9e,	// (0x0009444a) cntbar_detail_list_event_pane_t1_ParamLimits

0x8e9e,	// (0x0009444a) cntbar_detail_list_event_pane_t1

0x8eb3,	// (0x0009445f) cntbar_detail_list_event_pane_t2_ParamLimits

0x8eb3,	// (0x0009445f) cntbar_detail_list_event_pane_t2

0x0002,

0xfea2,	// (0x0009b44e) cntbar_detail_list_event_pane_t_ParamLimits

0xfea2,	// (0x0009b44e) cntbar_detail_list_event_pane_t

0xcbc0,	// (0x0009816c) cell_cntbar_detail_list_shct_pane_g1

0xb349,	// (0x000968f5) navi_pane_mv_g3

0xa480,	// (0x00095a2c) main_cntbar_detail_pane_ParamLimits

0x96d4,	// (0x00094c80) main_notif_wgt_pane

0x9f76,	// (0x00095522) aid_tch_main_mp4_pane_g4

0xa158,	// (0x00095704) popup_slider_window_cp02

0xa3ba,	// (0x00095966) list_recal_day_event_pane

0x8d52,	// (0x000942fe) cntbar_detail_btn_pane_ParamLimits

0x8d52,	// (0x000942fe) cntbar_detail_btn_pane

0x8d68,	// (0x00094314) cntbar_detail_btn_pane_cp01_ParamLimits

0x8d68,	// (0x00094314) cntbar_detail_btn_pane_cp01

0x8d8e,	// (0x0009433a) cntbar_detail_list_shct_pane_ParamLimits

0x8d9e,	// (0x0009434a) cntbar_detail_pane_g1_ParamLimits

0x8d9e,	// (0x0009434a) cntbar_detail_pane_g1

0x8dae,	// (0x0009435a) cntbar_detail_pane_t1_ParamLimits

0x8dae,	// (0x0009435a) cntbar_detail_pane_t1

0x8e3e,	// (0x000943ea) cntbar_detail_list_event_pane_g3_ParamLimits

0x8e3e,	// (0x000943ea) cntbar_detail_list_event_pane_g3

0x8e56,	// (0x00094402) cntbar_detail_list_event_pane_g4_ParamLimits

0x8e56,	// (0x00094402) cntbar_detail_list_event_pane_g4

0x8e6e,	// (0x0009441a) cntbar_detail_list_event_pane_g5_ParamLimits

0x8e6e,	// (0x0009441a) cntbar_detail_list_event_pane_g5

0x8e86,	// (0x00094432) cntbar_detail_list_event_pane_g6_ParamLimits

0x8e86,	// (0x00094432) cntbar_detail_list_event_pane_g6

0x8ec8,	// (0x00094474) cntbar_detail_list_event_pane_t3_ParamLimits

0x8ec8,	// (0x00094474) cntbar_detail_list_event_pane_t3

0x8eda,	// (0x00094486) popup_notif_wgt_window_ParamLimits

0x8eda,	// (0x00094486) popup_notif_wgt_window

0x8ef3,	// (0x0009449f) popup_submenu_window_cp01_ParamLimits

0x8ef3,	// (0x0009449f) popup_submenu_window_cp01

0xb391,	// (0x0009693d) bg_popup_window_pane_cp10

0xed7c,	// (0x0009a328) listscroll_notif_wgt_pane

0xed8d,	// (0x0009a339) list_notif_wgt_window

0xed96,	// (0x0009a342) scroll_pane_cp033

0x8f05,	// (0x000944b1) list_notif_wgt_row_pane_ParamLimits

0x8f05,	// (0x000944b1) list_notif_wgt_row_pane

0xed9f,	// (0x0009a34b) aid_size_list_notif_wgt_del

0xedac,	// (0x0009a358) list_notif_wgt_row_pane_g1

0xedb8,	// (0x0009a364) list_notif_wgt_row_pane_g2

0xedcc,	// (0x0009a378) list_notif_wgt_row_pane_g3

0x0002,

0xfea9,	// (0x0009b455) list_notif_wgt_row_pane_g

0xedd9,	// (0x0009a385) list_notif_wgt_row_pane_t1

0xedef,	// (0x0009a39b) list_notif_wgt_row_pane_t2

0xee01,	// (0x0009a3ad) list_notif_wgt_row_pane_t3

0x0002,

0xfeb0,	// (0x0009b45c) list_notif_wgt_row_pane_t

0xd861,	// (0x00098e0d) list_recal_day_event_pane_g1

0xee13,	// (0x0009a3bf) list_recal_day_event_pane_t1

0x96d4,	// (0x00094c80) bg_button_pane_cp045

0xee22,	// (0x0009a3ce) cntbar_detail_btn_pane_t1

0xc7b6,	// (0x00097d62) main_callh_pane_ParamLimits

0xc7b6,	// (0x00097d62) main_callh_pane

0x96d4,	// (0x00094c80) main_coverflow0_pane

0x96d4,	// (0x00094c80) main_wgtman_pane

0x82dd,	// (0x00093889) main_fs_bigclock_unlock_btn_pane_ParamLimits

0x82dd,	// (0x00093889) main_fs_bigclock_unlock_btn_pane

0x87fa,	// (0x00093da6) bg_button_pane_cp16

0x880a,	// (0x00093db6) cell_tport_appsw_pane_g3

0x8f15,	// (0x000944c1) cf0_flow_pane_ParamLimits

0x8f15,	// (0x000944c1) cf0_flow_pane

0xee30,	// (0x0009a3dc) listscroll_cf0_pane

0xee3b,	// (0x0009a3e7) main_cf0_pane_g1

0x8f2a,	// (0x000944d6) main_cf0_pane_t1_ParamLimits

0x8f2a,	// (0x000944d6) main_cf0_pane_t1

0x8f41,	// (0x000944ed) main_cf0_pane_t2_ParamLimits

0x8f41,	// (0x000944ed) main_cf0_pane_t2

0x0001,

0xfebc,	// (0x0009b468) main_cf0_pane_t_ParamLimits

0xfebc,	// (0x0009b468) main_cf0_pane_t

0xee4d,	// (0x0009a3f9) scroll_pane_cp11

0x8f58,	// (0x00094504) cf0_flow_pane_g1

0x8f60,	// (0x0009450c) cf0_flow_pane_g2

0x0001,

0xfec1,	// (0x0009b46d) cf0_flow_pane_g

0x8f68,	// (0x00094514) cf0_flow_pane_t1

0x96d4,	// (0x00094c80) main_call6_pane

0x96d4,	// (0x00094c80) main_calllock_pane

0x8f76,	// (0x00094522) call6_btn_grp_pane_ParamLimits

0x8f76,	// (0x00094522) call6_btn_grp_pane

0x8f90,	// (0x0009453c) call6_pane_g1_ParamLimits

0x8f90,	// (0x0009453c) call6_pane_g1

0x8fa5,	// (0x00094551) popup_call6_1st_window_ParamLimits

0x8fa5,	// (0x00094551) popup_call6_1st_window

0x8fb6,	// (0x00094562) popup_call6_2nd_window_ParamLimits

0x8fb6,	// (0x00094562) popup_call6_2nd_window

0x8fc7,	// (0x00094573) cell_call6_btn_pane_ParamLimits

0x8fc7,	// (0x00094573) cell_call6_btn_pane

0xb391,	// (0x0009693d) bg_popup_call2_in_pane_cp03

0xee58,	// (0x0009a404) popup_call6_1st_window_g1

0xee60,	// (0x0009a40c) popup_call6_1st_window_g2

0xee68,	// (0x0009a414) popup_call6_1st_window_g3

0x0002,

0xfec6,	// (0x0009b472) popup_call6_1st_window_g

0xee70,	// (0x0009a41c) popup_call6_1st_window_t1

0xee7f,	// (0x0009a42b) popup_call6_1st_window_t2

0xee8f,	// (0x0009a43b) popup_call6_1st_window_t3

0x0002,

0xfecd,	// (0x0009b479) popup_call6_1st_window_t

0xb391,	// (0x0009693d) bg_popup_call2_in_pane_cp04

0xee58,	// (0x0009a404) popup_call6_2nd_window_g1

0xee60,	// (0x0009a40c) popup_call6_2nd_window_g2

0xee68,	// (0x0009a414) popup_call6_2nd_window_g3

0x0002,

0xfec6,	// (0x0009b472) popup_call6_2nd_window_g

0xee70,	// (0x0009a41c) popup_call6_2nd_window_t1

0x96d4,	// (0x00094c80) bg_button_pane_cp15

0xee9f,	// (0x0009a44b) cell_call6_btn_pane_g1

0xeea8,	// (0x0009a454) cell_call6_btn_pane_t1

0x8fdb,	// (0x00094587) listscroll_wgtman_pane_ParamLimits

0x8fdb,	// (0x00094587) listscroll_wgtman_pane

0x8ffc,	// (0x000945a8) wgtman_btn_pane_ParamLimits

0x8ffc,	// (0x000945a8) wgtman_btn_pane

0xb0f5,	// (0x000966a1) aid_scroll_copy1

0xeeb7,	// (0x0009a463) list_wgtman_pane

0x903f,	// (0x000945eb) wgtman_btn_pane_g1_ParamLimits

0x903f,	// (0x000945eb) wgtman_btn_pane_g1

0x906b,	// (0x00094617) wgtman_btn_pane_t1_ParamLimits

0x906b,	// (0x00094617) wgtman_btn_pane_t1

0xeec1,	// (0x0009a46d) wgtman_btn_pane_t2_ParamLimits

0xeec1,	// (0x0009a46d) wgtman_btn_pane_t2

0x0001,

0xfed4,	// (0x0009b480) wgtman_btn_pane_t_ParamLimits

0xfed4,	// (0x0009b480) wgtman_btn_pane_t

0x90a8,	// (0x00094654) listrow_wgtman_pane_ParamLimits

0x90a8,	// (0x00094654) listrow_wgtman_pane

0x90bb,	// (0x00094667) listrow_wgtman_pane_g1

0x90c8,	// (0x00094674) listrow_wgtman_pane_g2

0x0001,

0xfed9,	// (0x0009b485) listrow_wgtman_pane_g

0x0dbf,	// (0x0008c36b) listrow_wgtman_pane_t1

0x0dd7,	// (0x0008c383) listrow_wgtman_pane_t2

0x0001,

0xfede,	// (0x0009b48a) listrow_wgtman_pane_t

0x0dfd,	// (0x0008c3a9) wait_bar_pane_cp09

0xeed8,	// (0x0009a484) main_calllock_btn_pane

0xeee2,	// (0x0009a48e) main_calllock_pane_g1

0x96d4,	// (0x00094c80) bg_button_pane_cp17

0xeeed,	// (0x0009a499) main_calllock_btn_pane_g1

0xeef6,	// (0x0009a4a2) main_calllock_btn_pane_t1

0x96d4,	// (0x00094c80) main_dialer3_pane

0x96d4,	// (0x00094c80) main_fmrd2_pane

0xcbc0,	// (0x0009816c) main_fs_bigclock_unlock_btn_pane_g1

0xef0d,	// (0x0009a4b9) main_fs_bigclock_unlock_btn_pane_t1

0x90e6,	// (0x00094692) area_fmrd2_info_pane_ParamLimits

0x90e6,	// (0x00094692) area_fmrd2_info_pane

0x90f7,	// (0x000946a3) area_fmrd2_visual_pane_ParamLimits

0x90f7,	// (0x000946a3) area_fmrd2_visual_pane

0x9105,	// (0x000946b1) fmrd2_indi_pane_ParamLimits

0x9105,	// (0x000946b1) fmrd2_indi_pane

0x9112,	// (0x000946be) area_fmrd2_visual_pane_g1

0x911a,	// (0x000946c6) area_fmrd2_visual_pane_t1

0x912a,	// (0x000946d6) area_fmrd2_visual_pane_t2

0x913a,	// (0x000946e6) area_fmrd2_visual_pane_t3

0x0002,

0xfee8,	// (0x0009b494) area_fmrd2_visual_pane_t

0x914a,	// (0x000946f6) area_fmrd2_info_pane_g1

0x9152,	// (0x000946fe) area_fmrd2_info_pane_t1

0x9162,	// (0x0009470e) area_fmrd2_info_pane_t2

0x9172,	// (0x0009471e) area_fmrd2_info_pane_t3

0x9182,	// (0x0009472e) area_fmrd2_info_pane_t4

0x0003,

0xfeef,	// (0x0009b49b) area_fmrd2_info_pane_t

0x9190,	// (0x0009473c) fmrd2_indi_pane_t1

0x91a0,	// (0x0009474c) fmrd2_indi_pane_t2

0x91b0,	// (0x0009475c) fmrd2_indi_pane_t3

0x0002,

0xfef8,	// (0x0009b4a4) fmrd2_indi_pane_t

0xe3f0,	// (0x0009999c) list_single_fs_bigclock_indicator_pane_g5_ParamLimits

0xe3f0,	// (0x0009999c) list_single_fs_bigclock_indicator_pane_g5

0xe4a0,	// (0x00099a4c) list_single_fs_bigclock_indicator_pane_t5_ParamLimits

0xe4a0,	// (0x00099a4c) list_single_fs_bigclock_indicator_pane_t5

0x89d5,	// (0x00093f81) aid_cell_bcale_month_pane_ParamLimits

0x89d5,	// (0x00093f81) aid_cell_bcale_month_pane

0x89f3,	// (0x00093f9f) bcale_month_pane_ParamLimits

0x89f3,	// (0x00093f9f) bcale_month_pane

0x8a17,	// (0x00093fc3) bcale_preview_pane_ParamLimits

0x8a17,	// (0x00093fc3) bcale_preview_pane

0xecaf,	// (0x0009a25b) list_single_fs_bigclock_pane_t1_ParamLimits

0xecce,	// (0x0009a27a) list_single_fs_bigclock_pane_t2_ParamLimits

0xecce,	// (0x0009a27a) list_single_fs_bigclock_pane_t2

0x0001,

0xfe7a,	// (0x0009b426) list_single_fs_bigclock_pane_t_ParamLimits

0xfe7a,	// (0x0009b426) list_single_fs_bigclock_pane_t

0xef05,	// (0x0009a4b1) main_fs_bigclock_unlock_btn_pane_g2

0x0001,

0xfee3,	// (0x0009b48f) main_fs_bigclock_unlock_btn_pane_g

0x91c0,	// (0x0009476c) aid_dia3_key_size_ParamLimits

0x91c0,	// (0x0009476c) aid_dia3_key_size

0x91cf,	// (0x0009477b) aid_dia3_listrow_size_ParamLimits

0x91cf,	// (0x0009477b) aid_dia3_listrow_size

0x91e4,	// (0x00094790) dia3_keypad_fun_pane_ParamLimits

0x91e4,	// (0x00094790) dia3_keypad_fun_pane

0x9200,	// (0x000947ac) dia3_keypad_num_pane_ParamLimits

0x9200,	// (0x000947ac) dia3_keypad_num_pane

0x921b,	// (0x000947c7) dia3_listscroll_pane_ParamLimits

0x921b,	// (0x000947c7) dia3_listscroll_pane

0x922e,	// (0x000947da) dia3_numentry_pane_ParamLimits

0x922e,	// (0x000947da) dia3_numentry_pane

0xef1b,	// (0x0009a4c7) dia3_list_pane

0xef26,	// (0x0009a4d2) scroll_pane_cp12

0x96d4,	// (0x00094c80) bg_dia3_numentry_pane

0x9242,	// (0x000947ee) dia3_numentry_pane_t1

0x9251,	// (0x000947fd) cell_dia3_key_num_pane

0x9259,	// (0x00094805) cell_dia3_key0_fun_pane_ParamLimits

0x9259,	// (0x00094805) cell_dia3_key0_fun_pane

0x926d,	// (0x00094819) cell_dia3_key1_fun_pane_ParamLimits

0x926d,	// (0x00094819) cell_dia3_key1_fun_pane

0x9285,	// (0x00094831) dia3_listrow_pane

0xe0fe,	// (0x000996aa) bg_dia3_numentry_pane_g1

0x96d4,	// (0x00094c80) bg_button_pane_cp21

0xef31,	// (0x0009a4dd) cell_dia3_key_num_pane_t1

0xef3f,	// (0x0009a4eb) cell_dia3_key_num_pane_t2

0xef4e,	// (0x0009a4fa) cell_dia3_key_num_pane_t3

0xef5d,	// (0x0009a509) cell_dia3_key_num_pane_t4

0x0003,

0xfeff,	// (0x0009b4ab) cell_dia3_key_num_pane_t

0x96d4,	// (0x00094c80) bg_button_pane_cp19

0x9297,	// (0x00094843) cell_dia3_key0_fun_pane_g1

0x96d4,	// (0x00094c80) bg_button_pane_cp20

0x929f,	// (0x0009484b) cell_dia3_key1_fun_pane_g1

0x92a7,	// (0x00094853) area_left_week_number_pane

0x92b3,	// (0x0009485f) area_top_day_name_pane

0x92c6,	// (0x00094872) frame_month_view_pane

0xef6c,	// (0x0009a518) grid_month_view_pane

0x92d9,	// (0x00094885) cell_top_day_name_pane_ParamLimits

0x92d9,	// (0x00094885) cell_top_day_name_pane

0x9306,	// (0x000948b2) cell_area_left_week_number_pane_ParamLimits

0x9306,	// (0x000948b2) cell_area_left_week_number_pane

0x931a,	// (0x000948c6) cell_month_view_pane_ParamLimits

0x931a,	// (0x000948c6) cell_month_view_pane

0xef7a,	// (0x0009a526) frm_month_g1

0x9347,	// (0x000948f3) frm_month_g2

0x935a,	// (0x00094906) frm_month_g3

0x936d,	// (0x00094919) frm_month_g4

0x9380,	// (0x0009492c) frm_month_g5

0x9393,	// (0x0009493f) frm_month_g6

0x93a6,	// (0x00094952) frm_month_g7

0xef87,	// (0x0009a533) frm_month_g8

0x93b9,	// (0x00094965) frm_month_g9

0x93c9,	// (0x00094975) frm_month_g10

0x93d9,	// (0x00094985) frm_month_g11

0x93e9,	// (0x00094995) frm_month_g12

0x93fb,	// (0x000949a7) frm_month_g13

0x940d,	// (0x000949b9) frm_month_g14

0x9421,	// (0x000949cd) frm_month_g15

0x9435,	// (0x000949e1) frm_month_g16

0x000f,

0xff08,	// (0x0009b4b4) frm_month_g

0xef94,	// (0x0009a540) cell_top_day_name_pane_t1

0x9449,	// (0x000949f5) cell_area_left_week_number_pane_g1

0x9455,	// (0x00094a01) cell_area_left_week_number_pane_t1

0xce20,	// (0x000983cc) cell_month_view_pane_g1

0x9468,	// (0x00094a14) cell_month_view_pane_t1

0x96d4,	// (0x00094c80) main_fps_pane

0xe6ab,	// (0x00099c57) cmail_ddmenu_btn02_pane_cp1_ParamLimits

0xe6ab,	// (0x00099c57) cmail_ddmenu_btn02_pane_cp1

0xe6c7,	// (0x00099c73) cmail_ddmenu_btn02_pane_cp2_ParamLimits

0xe6c7,	// (0x00099c73) cmail_ddmenu_btn02_pane_cp2

0x8c61,	// (0x0009420d) cmail_ddmenu_btn02_pane_g2_ParamLimits

0x8c61,	// (0x0009420d) cmail_ddmenu_btn02_pane_g2

0x0001,

0xfe2d,	// (0x0009b3d9) cmail_ddmenu_btn02_pane_g_ParamLimits

0xfe2d,	// (0x0009b3d9) cmail_ddmenu_btn02_pane_g

0x8c7f,	// (0x0009422b) cmail_ddmenu_btn02_pane_t2_ParamLimits

0x8c7f,	// (0x0009422b) cmail_ddmenu_btn02_pane_t2

0x0001,

0xfe32,	// (0x0009b3de) cmail_ddmenu_btn02_pane_t_ParamLimits

0xfe32,	// (0x0009b3de) cmail_ddmenu_btn02_pane_t

0x947b,	// (0x00094a27) fps_text_pane_ParamLimits

0x947b,	// (0x00094a27) fps_text_pane

0x9492,	// (0x00094a3e) main_fps_pane_g1_ParamLimits

0x9492,	// (0x00094a3e) main_fps_pane_g1

0x94ac,	// (0x00094a58) wait_bar_pane_cp010_ParamLimits

0x94ac,	// (0x00094a58) wait_bar_pane_cp010

0x94bd,	// (0x00094a69) fps_text_pane_t1_ParamLimits

0x94bd,	// (0x00094a69) fps_text_pane_t1

0xd5d4,	// (0x00098b80) cam4_image_uncrop_pane_g1

0xd5dd,	// (0x00098b89) cam4_image_uncrop_pane_g2

0x658c,	// (0x00091b38) cam4_image_uncrop_pane_g3

0x6595,	// (0x00091b41) cam4_image_uncrop_pane_g4

0x0003,

0xf8ee,	// (0x0009ae9a) cam4_image_uncrop_pane_g

0x9285,	// (0x00094831) dia3_listrow_pane_ParamLimits

0x96d4,	// (0x00094c80) main_phob2_pane

0x87cb,	// (0x00093d77) cell_tport_appsw_pane_cp02_ParamLimits

0x87cb,	// (0x00093d77) cell_tport_appsw_pane_cp02

0x87df,	// (0x00093d8b) cell_tport_appsw_pane_cp03_ParamLimits

0x87df,	// (0x00093d8b) cell_tport_appsw_pane_cp03

0x96d4,	// (0x00094c80) phob2_contact_card_pane

0x96d4,	// (0x00094c80) phob2_listscroll_pane

0xefa7,	// (0x0009a553) phob2_list_pane

0xefaf,	// (0x0009a55b) scroll_pane_cp034

0x94d5,	// (0x00094a81) phob2_cc_data_pane_ParamLimits

0x94d5,	// (0x00094a81) phob2_cc_data_pane

0x94f4,	// (0x00094aa0) phob2_cc_listscroll_pane_ParamLimits

0x94f4,	// (0x00094aa0) phob2_cc_listscroll_pane

0x9512,	// (0x00094abe) list_double_large_graphic_phob2_pane_ParamLimits

0x9512,	// (0x00094abe) list_double_large_graphic_phob2_pane

0x9525,	// (0x00094ad1) list_double_large_graphic_phob2_pane_g1_ParamLimits

0x9525,	// (0x00094ad1) list_double_large_graphic_phob2_pane_g1

0x953b,	// (0x00094ae7) list_double_large_graphic_phob2_pane_g2_ParamLimits

0x953b,	// (0x00094ae7) list_double_large_graphic_phob2_pane_g2

0x0001,

0xff29,	// (0x0009b4d5) list_double_large_graphic_phob2_pane_g_ParamLimits

0xff29,	// (0x0009b4d5) list_double_large_graphic_phob2_pane_g

0x0e0f,	// (0x0008c3bb) list_double_large_graphic_phob2_pane_t1_ParamLimits

0x0e0f,	// (0x0008c3bb) list_double_large_graphic_phob2_pane_t1

0x0e25,	// (0x0008c3d1) list_double_large_graphic_phob2_pane_t2_ParamLimits

0x0e25,	// (0x0008c3d1) list_double_large_graphic_phob2_pane_t2

0x0001,

0xff2e,	// (0x0009b4da) list_double_large_graphic_phob2_pane_t_ParamLimits

0xff2e,	// (0x0009b4da) list_double_large_graphic_phob2_pane_t

0x96d4,	// (0x00094c80) list_highlight_pane_cp024

0x9547,	// (0x00094af3) phob2_cc_button_pane

0x954f,	// (0x00094afb) phob2_cc_data_pane_g1_ParamLimits

0x954f,	// (0x00094afb) phob2_cc_data_pane_g1

0x9564,	// (0x00094b10) phob2_cc_data_pane_g2_ParamLimits

0x9564,	// (0x00094b10) phob2_cc_data_pane_g2

0x0001,

0xff33,	// (0x0009b4df) phob2_cc_data_pane_g_ParamLimits

0xff33,	// (0x0009b4df) phob2_cc_data_pane_g

0x9574,	// (0x00094b20) phob2_cc_data_pane_t1_ParamLimits

0x9574,	// (0x00094b20) phob2_cc_data_pane_t1

0x958c,	// (0x00094b38) phob2_cc_data_pane_t2_ParamLimits

0x958c,	// (0x00094b38) phob2_cc_data_pane_t2

0x95a4,	// (0x00094b50) phob2_cc_data_pane_t3_ParamLimits

0x95a4,	// (0x00094b50) phob2_cc_data_pane_t3

0x0002,

0xff38,	// (0x0009b4e4) phob2_cc_data_pane_t_ParamLimits

0xff38,	// (0x0009b4e4) phob2_cc_data_pane_t

0xefb7,	// (0x0009a563) phob2_cc_list_pane_ParamLimits

0xefb7,	// (0x0009a563) phob2_cc_list_pane

0xd90a,	// (0x00098eb6) scroll_pane_cp035_ParamLimits

0xd90a,	// (0x00098eb6) scroll_pane_cp035

0xa480,	// (0x00095a2c) bg_button_pane_cp033

0xefc3,	// (0x0009a56f) phob2_cc_button_pane_g1

0xefcf,	// (0x0009a57b) phob2_cc_button_pane_t1

0xefe4,	// (0x0009a590) phob2_cc_button_pane_t2

0x0001,

0xff3f,	// (0x0009b4eb) phob2_cc_button_pane_t

0x95bc,	// (0x00094b68) list_double_large_graphic_phob2_cc_pane_ParamLimits

0x95bc,	// (0x00094b68) list_double_large_graphic_phob2_cc_pane

0x95cf,	// (0x00094b7b) list_double_large_graphic_phob2_cc_pane_g1_ParamLimits

0x95cf,	// (0x00094b7b) list_double_large_graphic_phob2_cc_pane_g1

0x0e3a,	// (0x0008c3e6) list_double_large_graphic_phob2_cc_pane_g2_ParamLimits

0x0e3a,	// (0x0008c3e6) list_double_large_graphic_phob2_cc_pane_g2

0x0e46,	// (0x0008c3f2) list_double_large_graphic_phob2_cc_pane_g3_ParamLimits

0x0e46,	// (0x0008c3f2) list_double_large_graphic_phob2_cc_pane_g3

0x0e52,	// (0x0008c3fe) list_double_large_graphic_phob2_cc_pane_g4_ParamLimits

0x0e52,	// (0x0008c3fe) list_double_large_graphic_phob2_cc_pane_g4

0x0e5e,	// (0x0008c40a) list_double_large_graphic_phob2_cc_pane_g5_ParamLimits

0x0e5e,	// (0x0008c40a) list_double_large_graphic_phob2_cc_pane_g5

0x0004,

0xff44,	// (0x0009b4f0) list_double_large_graphic_phob2_cc_pane_g_ParamLimits

0xff44,	// (0x0009b4f0) list_double_large_graphic_phob2_cc_pane_g

0x0e6a,	// (0x0008c416) list_double_large_graphic_phob2_cc_pane_t1_ParamLimits

0x0e6a,	// (0x0008c416) list_double_large_graphic_phob2_cc_pane_t1

0x0e93,	// (0x0008c43f) list_double_large_graphic_phob2_cc_pane_t2_ParamLimits

0x0e93,	// (0x0008c43f) list_double_large_graphic_phob2_cc_pane_t2

0x0001,

0xff4f,	// (0x0009b4fb) list_double_large_graphic_phob2_cc_pane_t_ParamLimits

0xff4f,	// (0x0009b4fb) list_double_large_graphic_phob2_cc_pane_t

0xeff6,	// (0x0009a5a2) list_highlight_pane_cp025_ParamLimits

0xeff6,	// (0x0009a5a2) list_highlight_pane_cp025

0xa480,	// (0x00095a2c) bg_button_pane_cp033_ParamLimits

0xefc3,	// (0x0009a56f) phob2_cc_button_pane_g1_ParamLimits

0xefcf,	// (0x0009a57b) phob2_cc_button_pane_t1_ParamLimits

0xefe4,	// (0x0009a590) phob2_cc_button_pane_t2_ParamLimits

0xff3f,	// (0x0009b4eb) phob2_cc_button_pane_t_ParamLimits

0x1105,	// (0x0008c6b1) popup_wgtman_window

0xd74f,	// (0x00098cfb) scroll_pane_cp038

0x9021,	// (0x000945cd) wgtman_btn_pane_cp_01_ParamLimits

0x9021,	// (0x000945cd) wgtman_btn_pane_cp_01

0xf004,	// (0x0009a5b0) wgtman_content_pane

0xf00d,	// (0x0009a5b9) wgtman_heading_pane

0x96d4,	// (0x00094c80) bg_heading_pane_cp02

0xf016,	// (0x0009a5c2) wgtman_heading_pane_g1

0xf01e,	// (0x0009a5ca) wgtman_heading_pane_t1

0xf02c,	// (0x0009a5d8) scroll_pane_cp036

0xf034,	// (0x0009a5e0) wgtman_list_pane

0xe58b,	// (0x00099b37) wgtman_list_pane_t1_ParamLimits

0xe58b,	// (0x00099b37) wgtman_list_pane_t1

0xa1b2,	// (0x0009575e) cam4_grid_pane

0x046f,	// (0x0008ba1b) bg_button_pane_cp015_ParamLimits

0x7254,	// (0x00092800) bg_button_pane_cp016_ParamLimits

0x7267,	// (0x00092813) bg_button_pane_cp017_ParamLimits

0x728b,	// (0x00092837) popup_vitu2_query_window_g3_ParamLimits

0x728b,	// (0x00092837) popup_vitu2_query_window_g3

0x72d9,	// (0x00092885) popup_vitu2_query_window_t6_ParamLimits

0x72d9,	// (0x00092885) popup_vitu2_query_window_t6

0x7304,	// (0x000928b0) popup_vitu2_query_window_t7_ParamLimits

0x7304,	// (0x000928b0) popup_vitu2_query_window_t7

0xd5d4,	// (0x00098b80) cam4_grid_pane_g1

0xd5dd,	// (0x00098b89) cam4_grid_pane_g2

0xf03c,	// (0x0009a5e8) cam4_grid_pane_g3

0xf045,	// (0x0009a5f1) cam4_grid_pane_g4

0x0003,

0xff54,	// (0x0009b500) cam4_grid_pane_g

0x204d,	// (0x0008d5f9) aid_placing_vt_slider_lsc_ParamLimits

0x234a,	// (0x0008d8f6) vidtel_button_pane_ParamLimits

0x234a,	// (0x0008d8f6) vidtel_button_pane

0xf050,	// (0x0009a5fc) bg_button_pane_cp034

0x95db,	// (0x00094b87) vidtel_button_pane_g1

0xf05a,	// (0x0009a606) vidtel_button_pane_t1

0xd851,	// (0x00098dfd) aid_size_vtel_slider_touch

0xd90a,	// (0x00098eb6) scroll_pane_cp039

0xe13c,	// (0x000996e8) ncim_query_button_pane_cp01_ParamLimits

0xe15b,	// (0x00099707) ncimui_query_pane_g1_ParamLimits

0xa480,	// (0x00095a2c) input_focus_pane_cp012_ParamLimits

0xe180,	// (0x0009972c) ncim_query_entry_pane_t1_ParamLimits

0xd90a,	// (0x00098eb6) scroll_pane_cp039_ParamLimits

0xb234,	// (0x000967e0) navi_pane_bcale_mc_g1

0xb23c,	// (0x000967e8) navi_pane_bcale_mc_t1

0xe710,	// (0x00099cbc) main_sp_fs_email_pane_g1

0xe71c,	// (0x00099cc8) main_sp_fs_email_pane_g2

0x0001,

0xfce5,	// (0x0009b291) main_sp_fs_email_pane_g

0xe984,	// (0x00099f30) list_single_cale_mrui_row_pane_g3_ParamLimits

0xe984,	// (0x00099f30) list_single_cale_mrui_row_pane_g3

0x0d81,	// (0x0008c32d) list_single_recal_day_pane_g5_event_pane

0xa41f,	// (0x000959cb) list_single_recal_day_pane_g7

0xf068,	// (0x0009a614) list_recal_day_event_pane_cp01

0xf071,	// (0x0009a61d) list_recal_vselct_arw_lo_pane_cp01

0xf079,	// (0x0009a625) list_recal_vselct_arw_up_pane_cp01

0xf081,	// (0x0009a62d) list_recal_vselct_pane_cp01

0xd861,	// (0x00098e0d) list_recal_day_event_pane_cp01_g1

0xa472,	// (0x00095a1e) list_recal_day_event_pane_cp01_t1

0xa427,	// (0x000959d3) list_single_recal_day_pane_t1_ParamLimits

0xa439,	// (0x000959e5) list_single_recal_day_pane_t2_ParamLimits

0xfe42,	// (0x0009b3ee) list_single_recal_day_pane_t_ParamLimits

0xa611,	// (0x00095bbd) bg_notes_pane_ParamLimits

0xa6d3,	// (0x00095c7f) list_notes_pane_ParamLimits

0x1439,	// (0x0008c9e5) scroll_pane_cp06_ParamLimits

0xa6f5,	// (0x00095ca1) main_notes_pane_ParamLimits

0x96d4,	// (0x00094c80) main_welc_pane

0x95e3,	// (0x00094b8f) main_welc_body_pane_ParamLimits

0x95e3,	// (0x00094b8f) main_welc_body_pane

0x9600,	// (0x00094bac) main_welc_opti_pane_ParamLimits

0x9600,	// (0x00094bac) main_welc_opti_pane

0x9649,	// (0x00094bf5) main_welc_pane_t1_ParamLimits

0x9649,	// (0x00094bf5) main_welc_pane_t1

0x966b,	// (0x00094c17) main_welc_body_row_pane_ParamLimits

0x966b,	// (0x00094c17) main_welc_body_row_pane

0xe924,	// (0x00099ed0) main_welc_opti_row_pane_ParamLimits

0xe924,	// (0x00099ed0) main_welc_opti_row_pane

0xf08b,	// (0x0009a637) main_welc_opti_row_pane_g1

0x9681,	// (0x00094c2d) main_welc_opti_row_pane_t1

0xf093,	// (0x0009a63f) main_welc_body_row_pane_t1

0xed85,	// (0x0009a331) popup_notif_wgt_heading_pane

0xed9f,	// (0x0009a34b) aid_size_list_notif_wgt_del_ParamLimits

0xedac,	// (0x0009a358) list_notif_wgt_row_pane_g1_ParamLimits

0xedb8,	// (0x0009a364) list_notif_wgt_row_pane_g2_ParamLimits

0xedcc,	// (0x0009a378) list_notif_wgt_row_pane_g3_ParamLimits

0xfea9,	// (0x0009b455) list_notif_wgt_row_pane_g_ParamLimits

0xedd9,	// (0x0009a385) list_notif_wgt_row_pane_t1_ParamLimits

0xedef,	// (0x0009a39b) list_notif_wgt_row_pane_t2_ParamLimits

0xee01,	// (0x0009a3ad) list_notif_wgt_row_pane_t3_ParamLimits

0xfeb0,	// (0x0009b45c) list_notif_wgt_row_pane_t_ParamLimits

0x90bb,	// (0x00094667) listrow_wgtman_pane_g1_ParamLimits

0x90c8,	// (0x00094674) listrow_wgtman_pane_g2_ParamLimits

0xfed9,	// (0x0009b485) listrow_wgtman_pane_g_ParamLimits

0x0dbf,	// (0x0008c36b) listrow_wgtman_pane_t1_ParamLimits

0x0dd7,	// (0x0008c383) listrow_wgtman_pane_t2_ParamLimits

0xfede,	// (0x0009b48a) listrow_wgtman_pane_t_ParamLimits

0x0dfd,	// (0x0008c3a9) wait_bar_pane_cp09_ParamLimits

0x96d4,	// (0x00094c80) bg_popup_heading_pane_cp02

0xf0a2,	// (0x0009a64e) popup_notif_wgt_heading_pane_g1

0xf0aa,	// (0x0009a656) popup_notif_wgt_heading_pane_t1

0x96d4,	// (0x00094c80) main_vids_pane

0x96d4,	// (0x00094c80) vids_listscroll_pane

0x9690,	// (0x00094c3c) scroll_pane_cp040

0x96d4,	// (0x00094c80) vids_list_pane

0x969b,	// (0x00094c47) vids_list_double_pane_ParamLimits

0x969b,	// (0x00094c47) vids_list_double_pane

0x96ac,	// (0x00094c58) vids_list_double_pane_g1

0x96b5,	// (0x00094c61) vids_list_double_pane_t1

0x96c4,	// (0x00094c70) vids_list_double_pane_t2

0x0001,

0xff62,	// (0x0009b50e) vids_list_double_pane_t

0xa480,	// (0x00095a2c) main_ncimui_pane_ParamLimits

0x7e54,	// (0x00093400) main_ncimui_pane_g1_ParamLimits

0x7e60,	// (0x0009340c) main_ncimui_pane_g2_ParamLimits

0x7e60,	// (0x0009340c) main_ncimui_pane_g2

0x0001,

0xfbea,	// (0x0009b196) main_ncimui_pane_g_ParamLimits

0xfbea,	// (0x0009b196) main_ncimui_pane_g

0x961f,	// (0x00094bcb) main_welc_pane_g1_ParamLimits

0x961f,	// (0x00094bcb) main_welc_pane_g1

0x9634,	// (0x00094be0) main_welc_pane_g2_ParamLimits

0x9634,	// (0x00094be0) main_welc_pane_g2

0x0001,

0xff5d,	// (0x0009b509) main_welc_pane_g_ParamLimits

0xff5d,	// (0x0009b509) main_welc_pane_g

0xa611,	// (0x00095bbd) listscroll_mce_pane_ParamLimits

0xb389,	// (0x00096935) wait_bar_pane_cp10

0xc7aa,	// (0x00097d56) main_cale_day_pane_ParamLimits

0xc7aa,	// (0x00097d56) main_cale_week_pane_ParamLimits

0xa611,	// (0x00095bbd) main_messa_pane_ParamLimits

0x5899,	// (0x00090e45) main_clock2_btn_pane_ParamLimits

0x5899,	// (0x00090e45) main_clock2_btn_pane

0xcfa8,	// (0x00098554) main_clock2_btn_pane_cp01_ParamLimits

0xcfa8,	// (0x00098554) main_clock2_btn_pane_cp01

0xe955,	// (0x00099f01) list_cale_mrui_pane_ParamLimits

0xee45,	// (0x0009a3f1) main_cf0_pane_g2

0x0001,

0xfeb7,	// (0x0009b463) main_cf0_pane_g

0x92a7,	// (0x00094853) area_left_week_number_pane_ParamLimits

0x92b3,	// (0x0009485f) area_top_day_name_pane_ParamLimits

0x92c6,	// (0x00094872) frame_month_view_pane_ParamLimits

0xef6c,	// (0x0009a518) grid_month_view_pane_ParamLimits

0xef7a,	// (0x0009a526) frm_month_g1_ParamLimits

0x9347,	// (0x000948f3) frm_month_g2_ParamLimits

0x935a,	// (0x00094906) frm_month_g3_ParamLimits

0x936d,	// (0x00094919) frm_month_g4_ParamLimits

0x9380,	// (0x0009492c) frm_month_g5_ParamLimits

0x9393,	// (0x0009493f) frm_month_g6_ParamLimits

0x93a6,	// (0x00094952) frm_month_g7_ParamLimits

0xef87,	// (0x0009a533) frm_month_g8_ParamLimits

0x93b9,	// (0x00094965) frm_month_g9_ParamLimits

0x93c9,	// (0x00094975) frm_month_g10_ParamLimits

0x93d9,	// (0x00094985) frm_month_g11_ParamLimits

0x93e9,	// (0x00094995) frm_month_g12_ParamLimits

0x93fb,	// (0x000949a7) frm_month_g13_ParamLimits

0x940d,	// (0x000949b9) frm_month_g14_ParamLimits

0x9421,	// (0x000949cd) frm_month_g15_ParamLimits

0x9435,	// (0x000949e1) frm_month_g16_ParamLimits

0xff08,	// (0x0009b4b4) frm_month_g_ParamLimits

0xef94,	// (0x0009a540) cell_top_day_name_pane_t1_ParamLimits

0x9449,	// (0x000949f5) cell_area_left_week_number_pane_g1_ParamLimits

0x9455,	// (0x00094a01) cell_area_left_week_number_pane_t1_ParamLimits

0xce20,	// (0x000983cc) cell_month_view_pane_g1_ParamLimits

0x9468,	// (0x00094a14) cell_month_view_pane_t1_ParamLimits

0xa609,	// (0x00095bb5) main_clock2_btn_pane_g1

0xf0b8,	// (0x0009a664) main_clock2_btn_pane_t1

0xa480,	// (0x00095a2c) listscroll_cmail_pane_ParamLimits

0xe710,	// (0x00099cbc) main_sp_fs_email_pane_g1_ParamLimits

0xe71c,	// (0x00099cc8) main_sp_fs_email_pane_g2_ParamLimits

0xfce5,	// (0x0009b291) main_sp_fs_email_pane_g_ParamLimits

0xeaf3,	// (0x0009a09f) list_recal_day_pane_ParamLimits

0xeb04,	// (0x0009a0b0) mian_recal_day_pane_t1

0x0968,	// (0x0008bf14) list_single_dyc_row_text_pane_t4_ParamLimits

0x0968,	// (0x0008bf14) list_single_dyc_row_text_pane_t4

0x09b1,	// (0x0008bf5d) list_single_dyc_row_text_pane_t5_ParamLimits

0x09b1,	// (0x0008bf5d) list_single_dyc_row_text_pane_t5

0x869c,	// (0x00093c48) list_single_dyc_row_text_pane_t6_ParamLimits

0x869c,	// (0x00093c48) list_single_dyc_row_text_pane_t6

0xacbf,	// (0x0009626b) aid_mgn_list_cale_time_pane

0xa480,	// (0x00095a2c) main_gallery2_pane_ParamLimits

0xcfbe,	// (0x0009856a) main_clock2_pane_cp01_t1

0xcfcc,	// (0x00098578) main_clock2_pane_cp01_t3

0x0001,

0xf7c4,	// (0x0009ad70) main_clock2_pane_cp01_t

0x17f2,	// (0x0008cd9e) cale_week_scroll_pane_g16_ParamLimits

0x17f2,	// (0x0008cd9e) cale_week_scroll_pane_g16
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
	};

} // end of namespace AknLayoutScalable_Elaf_pnl4_apps_nhd4_lsc_tch_Large
