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
const SCompDataImplData KImplData = { KDataLookup, AknLayoutScalable_Apps::KByteCodedData_AknLayoutScalable_Elaf_pnp4_apps_nhd4_prt_tch + 0x0008b21a };

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
0x0f5f,	// (0x0008c179) Screen

0x0f6b,	// (0x0008c185) application_window

0x0fb7,	// (0x0008c1d1) area_bottom_pane_ParamLimits

0x0fb7,	// (0x0008c1d1) area_bottom_pane

0x0ff0,	// (0x0008c20a) area_top_pane_ParamLimits

0x0ff0,	// (0x0008c20a) area_top_pane

0x9789,	// (0x000949a3) call_video_uplink_pane_ParamLimits

0x9789,	// (0x000949a3) call_video_uplink_pane

0x107e,	// (0x0008c298) main_pane_ParamLimits

0x107e,	// (0x0008c298) main_pane

0xc82c,	// (0x00097a46) context_pane

0x4442,	// (0x0008f65c) navi_pane

0x4474,	// (0x0008f68e) popup_cale_events_window_ParamLimits

0x4474,	// (0x0008f68e) popup_cale_events_window

0xc83f,	// (0x00097a59) popup_mup_playback_window

0x448c,	// (0x0008f6a6) signal_pane

0xa766,	// (0x00095980) main_browser_pane

0xb402,	// (0x0009661c) main_burst_pane

0x41b2,	// (0x0008f3cc) main_calc_pane

0xc812,	// (0x00097a2c) main_cale_day_pane

0x16b0,	// (0x0008c8ca) main_cale_month_pane

0xc812,	// (0x00097a2c) main_cale_week_pane

0xb402,	// (0x0009661c) main_call_pane

0x9bba,	// (0x00094dd4) main_call_poc_pane

0xb402,	// (0x0009661c) main_camera_pane

0xb402,	// (0x0009661c) main_chi_dic_pane

0xb128,	// (0x00096342) main_clock_pane

0x9bba,	// (0x00094dd4) main_fmradio_pane

0xb402,	// (0x0009661c) main_graph_messa_pane

0x9bba,	// (0x00094dd4) main_help_pane

0xa766,	// (0x00095980) main_im_pane

0xa682,	// (0x0009589c) main_image_pane_ParamLimits

0xa682,	// (0x0009589c) main_image_pane

0x9bba,	// (0x00094dd4) main_location2_pane

0xb402,	// (0x0009661c) main_location_pane

0xa682,	// (0x0009589c) main_messa_pane

0x9bba,	// (0x00094dd4) main_mp2_pane

0xb402,	// (0x0009661c) main_mp_pane

0x9bba,	// (0x00094dd4) main_msg_pane

0x9bba,	// (0x00094dd4) main_mup_eq_pane

0x9bba,	// (0x00094dd4) main_mup_pane

0xa766,	// (0x00095980) main_notes_pane

0x9bba,	// (0x00094dd4) main_pec_pane

0x9bba,	// (0x00094dd4) main_phob_pane

0x9bba,	// (0x00094dd4) main_pinb_pane

0x9bba,	// (0x00094dd4) main_postcard_pane

0x9bba,	// (0x00094dd4) main_qdial_pane

0xb402,	// (0x0009661c) main_skin_pane

0x9bba,	// (0x00094dd4) main_smil2_pane

0xb402,	// (0x0009661c) main_smil_pane

0xb402,	// (0x0009661c) main_video_pane

0xb402,	// (0x0009661c) main_video_tele_pane

0xa682,	// (0x0009589c) main_viewer_pane_ParamLimits

0xa682,	// (0x0009589c) main_viewer_pane

0xb402,	// (0x0009661c) main_vorec_pane

0x4206,	// (0x0008f420) popup_blid_sat_info_window_ParamLimits

0x4206,	// (0x0008f420) popup_blid_sat_info_window

0x425e,	// (0x0008f478) popup_dyc_status_message_window_ParamLimits

0x425e,	// (0x0008f478) popup_dyc_status_message_window

0x4276,	// (0x0008f490) popup_grid_large_graphic_window_ParamLimits

0x4276,	// (0x0008f490) popup_grid_large_graphic_window

0x432c,	// (0x0008f546) popup_loc_request_window_ParamLimits

0x432c,	// (0x0008f546) popup_loc_request_window

0x441a,	// (0x0008f634) popup_wml_address_window_ParamLimits

0x441a,	// (0x0008f634) popup_wml_address_window

0x3fec,	// (0x0008f206) call_muted_g1

0x3c9f,	// (0x0008eeb9) popup_call_audio_conf_window_ParamLimits

0x3c9f,	// (0x0008eeb9) popup_call_audio_conf_window

0x4000,	// (0x0008f21a) popup_call_audio_first_window_ParamLimits

0x4000,	// (0x0008f21a) popup_call_audio_first_window

0x4076,	// (0x0008f290) popup_call_audio_in_window_ParamLimits

0x4076,	// (0x0008f290) popup_call_audio_in_window

0x40b2,	// (0x0008f2cc) popup_call_audio_out_window_ParamLimits

0x40b2,	// (0x0008f2cc) popup_call_audio_out_window

0x40ec,	// (0x0008f306) popup_call_audio_second_window_ParamLimits

0x40ec,	// (0x0008f306) popup_call_audio_second_window

0x4142,	// (0x0008f35c) popup_call_audio_wait_window_ParamLimits

0x4142,	// (0x0008f35c) popup_call_audio_wait_window

0x4177,	// (0x0008f391) popup_number_entry_window_ParamLimits

0x4177,	// (0x0008f391) popup_number_entry_window

0x97a7,	// (0x000949c1) bg_popup_call_pane_cp05_ParamLimits

0x97a7,	// (0x000949c1) bg_popup_call_pane_cp05

0x97c7,	// (0x000949e1) popup_number_entry_window_t1

0x97da,	// (0x000949f4) popup_number_entry_window_t2

0x97ec,	// (0x00094a06) popup_number_entry_window_t3

0x0003,

0xf0cd,	// (0x0009a2e7) popup_number_entry_window_t

0x97fe,	// (0x00094a18) text_title_cp2

0x9811,	// (0x00094a2b) bg_popup_call_pane_cp_ParamLimits

0x9811,	// (0x00094a2b) bg_popup_call_pane_cp

0x981f,	// (0x00094a39) call_thumbnail_pane

0x9827,	// (0x00094a41) popup_call_audio_in_window_g1_ParamLimits

0x9827,	// (0x00094a41) popup_call_audio_in_window_g1

0x9833,	// (0x00094a4d) popup_call_audio_in_window_g2_ParamLimits

0x9833,	// (0x00094a4d) popup_call_audio_in_window_g2

0x983f,	// (0x00094a59) popup_call_audio_in_window_g3_ParamLimits

0x983f,	// (0x00094a59) popup_call_audio_in_window_g3

0x0002,

0xf0d6,	// (0x0009a2f0) popup_call_audio_in_window_g_ParamLimits

0xf0d6,	// (0x0009a2f0) popup_call_audio_in_window_g

0x984b,	// (0x00094a65) popup_call_audio_in_window_t1_ParamLimits

0x984b,	// (0x00094a65) popup_call_audio_in_window_t1

0x9867,	// (0x00094a81) popup_call_audio_in_window_t2_ParamLimits

0x9867,	// (0x00094a81) popup_call_audio_in_window_t2

0x9883,	// (0x00094a9d) popup_call_audio_in_window_t3_ParamLimits

0x9883,	// (0x00094a9d) popup_call_audio_in_window_t3

0x0002,

0xf0dd,	// (0x0009a2f7) popup_call_audio_in_window_t_ParamLimits

0xf0dd,	// (0x0009a2f7) popup_call_audio_in_window_t

0x9811,	// (0x00094a2b) bg_popup_call_pane_cp01_ParamLimits

0x9811,	// (0x00094a2b) bg_popup_call_pane_cp01

0x981f,	// (0x00094a39) call_thumbnail_pane_cp02

0x9896,	// (0x00094ab0) call_type_pane_cp022

0x989e,	// (0x00094ab8) popup_call_audio_out_window_g1_ParamLimits

0x989e,	// (0x00094ab8) popup_call_audio_out_window_g1

0x98b0,	// (0x00094aca) popup_call_audio_out_window_g2_ParamLimits

0x98b0,	// (0x00094aca) popup_call_audio_out_window_g2

0x98bc,	// (0x00094ad6) popup_call_audio_out_window_g3_ParamLimits

0x98bc,	// (0x00094ad6) popup_call_audio_out_window_g3

0x0002,

0xf0e4,	// (0x0009a2fe) popup_call_audio_out_window_g_ParamLimits

0xf0e4,	// (0x0009a2fe) popup_call_audio_out_window_g

0x98ce,	// (0x00094ae8) popup_call_audio_out_window_t1_ParamLimits

0x98ce,	// (0x00094ae8) popup_call_audio_out_window_t1

0x98e6,	// (0x00094b00) popup_call_audio_out_window_t2_ParamLimits

0x98e6,	// (0x00094b00) popup_call_audio_out_window_t2

0x0001,

0xf0eb,	// (0x0009a305) popup_call_audio_out_window_t_ParamLimits

0xf0eb,	// (0x0009a305) popup_call_audio_out_window_t

0x98fb,	// (0x00094b15) bg_popup_call_pane_ParamLimits

0x98fb,	// (0x00094b15) bg_popup_call_pane

0x123b,	// (0x0008c455) call_thumbnail_pane_cp_ParamLimits

0x123b,	// (0x0008c455) call_thumbnail_pane_cp

0x997f,	// (0x00094b99) call_type_pane_cp01_ParamLimits

0x997f,	// (0x00094b99) call_type_pane_cp01

0x99c3,	// (0x00094bdd) popup_call_audio_first_window_g1_ParamLimits

0x99c3,	// (0x00094bdd) popup_call_audio_first_window_g1

0x9a0f,	// (0x00094c29) popup_call_audio_first_window_g2_ParamLimits

0x9a0f,	// (0x00094c29) popup_call_audio_first_window_g2

0x0001,

0xf0f0,	// (0x0009a30a) popup_call_audio_first_window_g_ParamLimits

0xf0f0,	// (0x0009a30a) popup_call_audio_first_window_g

0x9a53,	// (0x00094c6d) popup_call_audio_first_window_t1_ParamLimits

0x9a53,	// (0x00094c6d) popup_call_audio_first_window_t1

0x9aff,	// (0x00094d19) popup_call_audio_first_window_t4_ParamLimits

0x9aff,	// (0x00094d19) popup_call_audio_first_window_t4

0x9b8b,	// (0x00094da5) popup_call_audio_first_window_t5_ParamLimits

0x9b8b,	// (0x00094da5) popup_call_audio_first_window_t5

0x0002,

0xf0f5,	// (0x0009a30f) popup_call_audio_first_window_t_ParamLimits

0xf0f5,	// (0x0009a30f) popup_call_audio_first_window_t

0x9bba,	// (0x00094dd4) bg_popup_call_pane_cp02

0x9bc4,	// (0x00094dde) call_type_pane_cp023

0x9bcc,	// (0x00094de6) popup_call_audio_wait_window_g1

0x9bd4,	// (0x00094dee) popup_call_audio_wait_window_g2

0x0001,

0xf0fc,	// (0x0009a316) popup_call_audio_wait_window_g

0x9bdc,	// (0x00094df6) popup_call_audio_wait_window_t3

0x9bea,	// (0x00094e04) bg_popup_call_pane_cp03_ParamLimits

0x9bea,	// (0x00094e04) bg_popup_call_pane_cp03

0xa4b7,	// (0x000956d1) call_thumbnail_pane_cp011_ParamLimits

0xa4b7,	// (0x000956d1) call_thumbnail_pane_cp011

0xa4c3,	// (0x000956dd) call_type_pane_cp034_ParamLimits

0xa4c3,	// (0x000956dd) call_type_pane_cp034

0xa4ff,	// (0x00095719) popup_call_audio_second_window_g1_ParamLimits

0xa4ff,	// (0x00095719) popup_call_audio_second_window_g1

0xa53b,	// (0x00095755) popup_call_audio_second_window_g2_ParamLimits

0xa53b,	// (0x00095755) popup_call_audio_second_window_g2

0x0001,

0xf101,	// (0x0009a31b) popup_call_audio_second_window_g_ParamLimits

0xf101,	// (0x0009a31b) popup_call_audio_second_window_g

0xa577,	// (0x00095791) popup_call_audio_second_window_t1_ParamLimits

0xa577,	// (0x00095791) popup_call_audio_second_window_t1

0xa5f8,	// (0x00095812) popup_call_audio_second_window_t2_ParamLimits

0xa5f8,	// (0x00095812) popup_call_audio_second_window_t2

0xa62e,	// (0x00095848) popup_call_audio_second_window_t3_ParamLimits

0xa62e,	// (0x00095848) popup_call_audio_second_window_t3

0x0002,

0xf106,	// (0x0009a320) popup_call_audio_second_window_t_ParamLimits

0xf106,	// (0x0009a320) popup_call_audio_second_window_t

0x9bba,	// (0x00094dd4) bg_popup_call_pane_cp04

0xa664,	// (0x0009587e) list_conf_pane

0xa66c,	// (0x00095886) popup_call_audio_conf_window_t1

0xa67a,	// (0x00095894) call_thumbnail_pane_g1

0xa682,	// (0x0009589c) bg_pinb_pane_ParamLimits

0xa682,	// (0x0009589c) bg_pinb_pane

0xa690,	// (0x000958aa) find_pinb_pane

0xa699,	// (0x000958b3) listscroll_pinb_pane_ParamLimits

0xa699,	// (0x000958b3) listscroll_pinb_pane

0xa6a8,	// (0x000958c2) pinb_bg_pane_g1

0x125f,	// (0x0008c479) pinb_bg_pane_g2

0x126b,	// (0x0008c485) pinb_bg_pane_g3

0x1277,	// (0x0008c491) pinb_bg_pane_g4

0x1283,	// (0x0008c49d) pinb_bg_pane_g5

0x128f,	// (0x0008c4a9) pinb_bg_pane_g6

0x129a,	// (0x0008c4b4) pinb_bg_pane_g7

0x12a5,	// (0x0008c4bf) pinb_bg_pane_g8

0x12b0,	// (0x0008c4ca) pinb_bg_pane_g9

0x12ba,	// (0x0008c4d4) pinb_bg_pane_g10

0x0009,

0xf10d,	// (0x0009a327) pinb_bg_pane_g

0x12d7,	// (0x0008c4f1) grid_pinb_pane

0x12e0,	// (0x0008c4fa) list_pinb_pane

0x12e9,	// (0x0008c503) scroll_pane_cp01_ParamLimits

0x12e9,	// (0x0008c503) scroll_pane_cp01

0xa6b2,	// (0x000958cc) find_pinb_pane_g1_ParamLimits

0xa6b2,	// (0x000958cc) find_pinb_pane_g1

0xa6ca,	// (0x000958e4) find_pinb_pane_t1

0xa6dc,	// (0x000958f6) find_pinb_pane_t2

0x0001,

0xf127,	// (0x0009a341) find_pinb_pane_t

0xa6f1,	// (0x0009590b) input_focus_pane_cp01_ParamLimits

0xa6f1,	// (0x0009590b) input_focus_pane_cp01

0x12fb,	// (0x0008c515) cell_pinb_pane_ParamLimits

0x12fb,	// (0x0008c515) cell_pinb_pane

0xa6fd,	// (0x00095917) cell_pinb_pane_g1_ParamLimits

0xa6fd,	// (0x00095917) cell_pinb_pane_g1

0xa710,	// (0x0009592a) cell_pinb_pane_g2_ParamLimits

0xa710,	// (0x0009592a) cell_pinb_pane_g2

0xa71c,	// (0x00095936) cell_pinb_pane_g3_ParamLimits

0xa71c,	// (0x00095936) cell_pinb_pane_g3

0x0002,

0xf12c,	// (0x0009a346) cell_pinb_pane_g_ParamLimits

0xf12c,	// (0x0009a346) cell_pinb_pane_g

0x9bba,	// (0x00094dd4) grid_highlight_pane_cp01

0x1329,	// (0x0008c543) list_pinb_item_pane_ParamLimits

0x1329,	// (0x0008c543) list_pinb_item_pane

0x9bba,	// (0x00094dd4) list_highlight_pane_cp02

0x133c,	// (0x0008c556) list_pinb_item_pane_g1_ParamLimits

0x133c,	// (0x0008c556) list_pinb_item_pane_g1

0x1349,	// (0x0008c563) list_pinb_item_pane_g2_ParamLimits

0x1349,	// (0x0008c563) list_pinb_item_pane_g2

0x1355,	// (0x0008c56f) list_pinb_item_pane_g3_ParamLimits

0x1355,	// (0x0008c56f) list_pinb_item_pane_g3

0x1366,	// (0x0008c580) list_pinb_item_pane_g4_ParamLimits

0x1366,	// (0x0008c580) list_pinb_item_pane_g4

0x0003,

0xf133,	// (0x0009a34d) list_pinb_item_pane_g_ParamLimits

0xf133,	// (0x0009a34d) list_pinb_item_pane_g

0x1372,	// (0x0008c58c) list_pinb_item_pane_t1_ParamLimits

0x1372,	// (0x0008c58c) list_pinb_item_pane_t1

0x13a7,	// (0x0008c5c1) calc_display_pane

0x13cf,	// (0x0008c5e9) calc_paper_pane

0x13f2,	// (0x0008c60c) grid_calc_pane

0x9bba,	// (0x00094dd4) bg_list_pane_cp01

0x1420,	// (0x0008c63a) clock_g1

0x1428,	// (0x0008c642) clock_g2

0x0001,

0xf13c,	// (0x0009a356) clock_g

0x1430,	// (0x0008c64a) clock_t1_ParamLimits

0x1430,	// (0x0008c64a) clock_t1

0x1445,	// (0x0008c65f) clock_t2_ParamLimits

0x1445,	// (0x0008c65f) clock_t2

0x1457,	// (0x0008c671) clock_t3_ParamLimits

0x1457,	// (0x0008c671) clock_t3

0x1469,	// (0x0008c683) clock_t4_ParamLimits

0x1469,	// (0x0008c683) clock_t4

0x147b,	// (0x0008c695) clock_t5_ParamLimits

0x147b,	// (0x0008c695) clock_t5

0x1490,	// (0x0008c6aa) clock_t6_ParamLimits

0x1490,	// (0x0008c6aa) clock_t6

0x14a2,	// (0x0008c6bc) clock_t7_ParamLimits

0x14a2,	// (0x0008c6bc) clock_t7

0x14b4,	// (0x0008c6ce) clock_t8_ParamLimits

0x14b4,	// (0x0008c6ce) clock_t8

0x14c8,	// (0x0008c6e2) clock_t9_ParamLimits

0x14c8,	// (0x0008c6e2) clock_t9

0x0008,

0xf141,	// (0x0009a35b) clock_t_ParamLimits

0xf141,	// (0x0009a35b) clock_t

0xa728,	// (0x00095942) popup_clock_analogue_window_cp02

0xa728,	// (0x00095942) popup_clock_digital_window_cp01

0xa730,	// (0x0009594a) listscroll_help_pane

0x9bba,	// (0x00094dd4) phob_pre_status_pane

0xa73a,	// (0x00095954) grid_qdial_pane

0xa682,	// (0x0009589c) listscroll_mce_pane

0xa682,	// (0x0009589c) bg_notes_pane

0xa744,	// (0x0009595e) list_notes_pane

0x14dc,	// (0x0008c6f6) scroll_pane_cp06

0xa752,	// (0x0009596c) bg_calc_paper_pane

0x9c52,	// (0x00094e6c) list_calc_pane

0xa766,	// (0x00095980) bg_calc_display_pane

0x14f0,	// (0x0008c70a) calc_display_pane_t1

0x1502,	// (0x0008c71c) calc_display_pane_t2

0x9c6c,	// (0x00094e86) calc_display_pane_t3

0x0002,

0xf154,	// (0x0009a36e) calc_display_pane_t

0x1514,	// (0x0008c72e) cell_calc_pane_ParamLimits

0x1514,	// (0x0008c72e) cell_calc_pane

0xa772,	// (0x0009598c) bg_calc_paper_pane_g1

0xa77e,	// (0x00095998) bg_calc_paper_pane_g2

0xa78a,	// (0x000959a4) bg_calc_paper_pane_g3

0xa796,	// (0x000959b0) bg_calc_paper_pane_g4

0xa7a2,	// (0x000959bc) bg_calc_paper_pane_g5

0x154b,	// (0x0008c765) bg_calc_paper_pane_g6

0x155c,	// (0x0008c776) bg_calc_paper_pane_g7

0x156d,	// (0x0008c787) bg_calc_paper_pane_g8

0x0007,

0xf15b,	// (0x0009a375) bg_calc_paper_pane_g

0x1580,	// (0x0008c79a) calc_bg_paper_pane_g9

0x1593,	// (0x0008c7ad) list_calc_item_pane_ParamLimits

0x1593,	// (0x0008c7ad) list_calc_item_pane

0xa7ae,	// (0x000959c8) list_calc_item_pane_g1

0x9c7e,	// (0x00094e98) list_calc_item_pane_t1_ParamLimits

0x9c7e,	// (0x00094e98) list_calc_item_pane_t1

0x15ad,	// (0x0008c7c7) list_calc_item_pane_t2_ParamLimits

0x15ad,	// (0x0008c7c7) list_calc_item_pane_t2

0x0001,

0xf16c,	// (0x0009a386) list_calc_item_pane_t_ParamLimits

0xf16c,	// (0x0009a386) list_calc_item_pane_t

0xa7bb,	// (0x000959d5) cell_calc_pane_g1

0xa7c5,	// (0x000959df) grid_highlight_pane_cp02

0xa7e7,	// (0x00095a01) bg_calc_display_pane_g1

0x9c90,	// (0x00094eaa) bg_calc_display_pane_g2

0xa7f0,	// (0x00095a0a) bg_calc_display_pane_g3

0x0002,

0xf176,	// (0x0009a390) bg_calc_display_pane_g

0x15df,	// (0x0008c7f9) cell_qdial_pane_ParamLimits

0x15df,	// (0x0008c7f9) cell_qdial_pane

0x15f3,	// (0x0008c80d) cell_qdial_pane_g1_ParamLimits

0x15f3,	// (0x0008c80d) cell_qdial_pane_g1

0x1609,	// (0x0008c823) cell_qdial_pane_g2_ParamLimits

0x1609,	// (0x0008c823) cell_qdial_pane_g2

0xa7f9,	// (0x00095a13) cell_qdial_pane_g3_ParamLimits

0xa7f9,	// (0x00095a13) cell_qdial_pane_g3

0x0003,

0xf17d,	// (0x0009a397) cell_qdial_pane_g_ParamLimits

0xf17d,	// (0x0009a397) cell_qdial_pane_g

0x162f,	// (0x0008c849) cell_qdial_pane_t1_ParamLimits

0x162f,	// (0x0008c849) cell_qdial_pane_t1

0x1647,	// (0x0008c861) cell_qdial_pane_t2_ParamLimits

0x1647,	// (0x0008c861) cell_qdial_pane_t2

0x165a,	// (0x0008c874) cell_qdial_pane_t3_ParamLimits

0x165a,	// (0x0008c874) cell_qdial_pane_t3

0x0002,

0xf186,	// (0x0009a3a0) cell_qdial_pane_t_ParamLimits

0xf186,	// (0x0009a3a0) cell_qdial_pane_t

0x9bba,	// (0x00094dd4) grid_highlight_pane_cp04

0xa805,	// (0x00095a1f) thumbnail_qdial_pane_ParamLimits

0xa805,	// (0x00095a1f) thumbnail_qdial_pane

0xa861,	// (0x00095a7b) list_help_pane

0xa86a,	// (0x00095a84) scroll_pane_cp02

0x166d,	// (0x0008c887) help_list_pane_t1_ParamLimits

0x166d,	// (0x0008c887) help_list_pane_t1

0x9c9a,	// (0x00094eb4) bg_notes_pane_g2

0x9ca2,	// (0x00094ebc) bg_notes_pane_g3

0x9caa,	// (0x00094ec4) notes_bg_pane_g1

0x9cb2,	// (0x00094ecc) notes_bg_pane_g4

0x9cba,	// (0x00094ed4) notes_bg_pane_g5

0x9cc2,	// (0x00094edc) notes_bg_pane_g6

0x9cca,	// (0x00094ee4) notes_bg_pane_g7

0x9cd2,	// (0x00094eec) notes_bg_pane_g8

0x9cda,	// (0x00094ef4) notes_bg_pane_g9

0x0006,

0xf1a4,	// (0x0009a3be) notes_bg_pane_g

0x168c,	// (0x0008c8a6) list_notes_text_pane_ParamLimits

0x168c,	// (0x0008c8a6) list_notes_text_pane

0xa873,	// (0x00095a8d) list_notes_text_pane_g1

0x16a2,	// (0x0008c8bc) list_notes_text_pane_t1

0x16b0,	// (0x0008c8ca) listscroll_cale_week_pane

0x16dc,	// (0x0008c8f6) bg_cale_heading_pane

0xa896,	// (0x00095ab0) bg_cale_pane_cp01

0x16fa,	// (0x0008c914) cale_week_corner_pane

0x1719,	// (0x0008c933) cale_week_day_heading_pane

0x173c,	// (0x0008c956) cale_week_scroll_pane_g1

0x1755,	// (0x0008c96f) cale_week_scroll_pane_g2

0x176d,	// (0x0008c987) cale_week_scroll_pane_g3

0x1785,	// (0x0008c99f) cale_week_scroll_pane_g4

0x179d,	// (0x0008c9b7) cale_week_scroll_pane_g5

0x17b9,	// (0x0008c9d3) cale_week_scroll_pane_g6

0x17d9,	// (0x0008c9f3) cale_week_scroll_pane_g7

0x17f9,	// (0x0008ca13) cale_week_scroll_pane_g8

0x181d,	// (0x0008ca37) cale_week_scroll_pane_g9

0x1835,	// (0x0008ca4f) cale_week_scroll_pane_g10

0x184d,	// (0x0008ca67) cale_week_scroll_pane_g11

0x1865,	// (0x0008ca7f) cale_week_scroll_pane_g12

0x187d,	// (0x0008ca97) cale_week_scroll_pane_g13

0x187d,	// (0x0008ca97) cale_week_scroll_pane_g14

0x187d,	// (0x0008ca97) cale_week_scroll_pane_g15

0x000e,

0xf1b3,	// (0x0009a3cd) cale_week_scroll_pane_g

0x1895,	// (0x0008caaf) cale_week_time_pane

0x18b9,	// (0x0008cad3) grid_cale_week_pane

0xa8c6,	// (0x00095ae0) scroll_pane_cp08

0x18df,	// (0x0008caf9) cell_cale_week_pane_ParamLimits

0x18df,	// (0x0008caf9) cell_cale_week_pane

0x196d,	// (0x0008cb87) cale_week_day_heading_pane_t1

0x19b7,	// (0x0008cbd1) cale_week_day_heading_pane_t2

0x1a06,	// (0x0008cc20) cale_week_day_heading_pane_t3

0x1a55,	// (0x0008cc6f) cale_week_day_heading_pane_t4

0x1aa4,	// (0x0008ccbe) cale_week_day_heading_pane_t5

0x1afb,	// (0x0008cd15) cale_week_day_heading_pane_t6

0x1b52,	// (0x0008cd6c) cale_week_day_heading_pane_t7

0x0006,

0xf1d2,	// (0x0009a3ec) cale_week_day_heading_pane_t

0xa8e3,	// (0x00095afd) bg_cale_side_pane

0x1b9c,	// (0x0008cdb6) cale_week_time_pane_t1

0x1bb6,	// (0x0008cdd0) cale_week_time_pane_t2

0x1bd0,	// (0x0008cdea) cale_week_time_pane_t3

0x1bea,	// (0x0008ce04) cale_week_time_pane_t4

0x1c04,	// (0x0008ce1e) cale_week_time_pane_t5

0x1c1e,	// (0x0008ce38) cale_week_time_pane_t6

0x1c38,	// (0x0008ce52) cale_week_time_pane_t7

0x1c58,	// (0x0008ce72) cale_week_time_pane_t8

0x0007,

0xf1e1,	// (0x0009a3fb) cale_week_time_pane_t

0x1c78,	// (0x0008ce92) cell_cale_week_pane_g2

0x1c97,	// (0x0008ceb1) cell_cale_week_pane_g3_ParamLimits

0x1c97,	// (0x0008ceb1) cell_cale_week_pane_g3

0xa8f1,	// (0x00095b0b) grid_highlight_pane_cp07

0xa8f9,	// (0x00095b13) listscroll_gms_pane

0xa903,	// (0x00095b1d) grid_gms_pane

0xa90c,	// (0x00095b26) listscroll_gms_pane_g1

0xa914,	// (0x00095b2e) listscroll_gms_pane_g2

0x0001,

0xf1f2,	// (0x0009a40c) listscroll_gms_pane_g

0x1caf,	// (0x0008cec9) scroll_pane_cp010

0x1cba,	// (0x0008ced4) cell_gms_pane_ParamLimits

0x1cba,	// (0x0008ced4) cell_gms_pane

0x1ccc,	// (0x0008cee6) cell_gms_pane_g1

0xa91c,	// (0x00095b36) cell_gms_pane_g2

0xa873,	// (0x00095a8d) cell_gms_pane_g3

0xa924,	// (0x00095b3e) cell_gms_pane_g4

0x0003,

0xf1f7,	// (0x0009a411) cell_gms_pane_g

0xa92d,	// (0x00095b47) grid_highlight_pane_cp09

0x3f96,	// (0x0008f1b0) phob_pre_status_pane_g1

0x3f9e,	// (0x0008f1b8) phob_pre_status_pane_g2

0x3fa6,	// (0x0008f1c0) phob_pre_status_pane_g3

0x3fae,	// (0x0008f1c8) phob_pre_status_pane_g4

0x0004,

0xf5e6,	// (0x0009a800) phob_pre_status_pane_g

0x3fbe,	// (0x0008f1d8) phob_pre_status_pane_t1

0x3fcc,	// (0x0008f1e6) phob_pre_status_pane_t2

0x3fdc,	// (0x0008f1f6) phob_pre_status_pane_t3

0x0002,

0xf5f1,	// (0x0009a80b) phob_pre_status_pane_t

0x9bba,	// (0x00094dd4) bg_list_pane_cp05

0x1cdc,	// (0x0008cef6) grid_vorec_pane

0x1ce6,	// (0x0008cf00) vorec_t1

0x1cf4,	// (0x0008cf0e) vorec_t2

0x1d02,	// (0x0008cf1c) vorec_t3

0x1d10,	// (0x0008cf2a) vorec_t4

0x9ce2,	// (0x00094efc) vorec_t5

0x1d1e,	// (0x0008cf38) vorec_t6

0x0006,

0xf200,	// (0x0009a41a) vorec_t

0x1d3a,	// (0x0008cf54) wait_bar_pane_cp01

0x1d42,	// (0x0008cf5c) cell_vorec_pane_ParamLimits

0x1d42,	// (0x0008cf5c) cell_vorec_pane

0x9cf0,	// (0x00094f0a) cell_vorec_pane_g1

0x9bba,	// (0x00094dd4) grid_highlight_pane_cp05

0x1d6d,	// (0x0008cf87) cams_zoom_pane

0x1d7c,	// (0x0008cf96) image_vga_pane

0x1d96,	// (0x0008cfb0) main_camera_pane_g1

0x1da8,	// (0x0008cfc2) main_camera_pane_g2

0x1db8,	// (0x0008cfd2) main_camera_pane_g3

0x1dca,	// (0x0008cfe4) main_camera_pane_g4

0x1ddc,	// (0x0008cff6) main_camera_pane_g5

0x1dee,	// (0x0008d008) main_camera_pane_g6

0x1e00,	// (0x0008d01a) main_camera_pane_g7

0x0007,

0xf20f,	// (0x0009a429) main_camera_pane_g

0x1e12,	// (0x0008d02c) main_camera_pane_t1

0x1e28,	// (0x0008d042) main_camera_pane_t2

0x0001,

0xf220,	// (0x0009a43a) main_camera_pane_t

0x1e64,	// (0x0008d07e) cams_zoom_pane_cp_ParamLimits

0x1e64,	// (0x0008d07e) cams_zoom_pane_cp

0x1e8c,	// (0x0008d0a6) image_cif_pane_ParamLimits

0x1e8c,	// (0x0008d0a6) image_cif_pane

0x1ec7,	// (0x0008d0e1) image_subqcif_pane

0x1ecf,	// (0x0008d0e9) main_video_pane_g1_ParamLimits

0x1ecf,	// (0x0008d0e9) main_video_pane_g1

0x1ef3,	// (0x0008d10d) main_video_pane_g2_ParamLimits

0x1ef3,	// (0x0008d10d) main_video_pane_g2

0x1f27,	// (0x0008d141) main_video_pane_g3_ParamLimits

0x1f27,	// (0x0008d141) main_video_pane_g3

0x1f55,	// (0x0008d16f) main_video_pane_g4_ParamLimits

0x1f55,	// (0x0008d16f) main_video_pane_g4

0x1f83,	// (0x0008d19d) main_video_pane_g5_ParamLimits

0x1f83,	// (0x0008d19d) main_video_pane_g5

0xa941,	// (0x00095b5b) main_video_pane_g6_ParamLimits

0xa941,	// (0x00095b5b) main_video_pane_g6

0x0006,

0xf225,	// (0x0009a43f) main_video_pane_g_ParamLimits

0xf225,	// (0x0009a43f) main_video_pane_g

0x1fac,	// (0x0008d1c6) main_video_pane_t1_ParamLimits

0x1fac,	// (0x0008d1c6) main_video_pane_t1

0xa95b,	// (0x00095b75) cams_zoom_pane_g1

0xa964,	// (0x00095b7e) cams_zoom_pane_g2

0xa96d,	// (0x00095b87) cams_zoom_pane_g3

0xa976,	// (0x00095b90) cams_zoom_pane_g4

0x0003,

0xf234,	// (0x0009a44e) cams_zoom_pane_g

0x2009,	// (0x0008d223) grid_cams_pane

0x2023,	// (0x0008d23d) linegrid_cams_pane

0x2036,	// (0x0008d250) cell_cams_pane_ParamLimits

0x2036,	// (0x0008d250) cell_cams_pane

0xa97f,	// (0x00095b99) cams_burst_image_pane

0xa987,	// (0x00095ba1) cell_cams_pane_g1

0x9bba,	// (0x00094dd4) grid_highlight_pane_cp03

0xa7bb,	// (0x000959d5) mp_bg_pane_g1

0x9bba,	// (0x00094dd4) bg_list_pane_cp03

0xc737,	// (0x00097951) bg_mp_pane

0xc73f,	// (0x00097959) grid_mp_pane

0xc747,	// (0x00097961) media_player_g1

0xc74f,	// (0x00097969) media_player_t1

0xc75d,	// (0x00097977) media_player_t2

0xc76b,	// (0x00097985) media_player_t3

0xc779,	// (0x00097993) media_player_t4

0xc787,	// (0x000979a1) media_player_t5

0xc795,	// (0x000979af) media_player_t6

0xc7a3,	// (0x000979bd) media_player_t7

0x0006,

0xf5d0,	// (0x0009a7ea) media_player_t

0xc7b1,	// (0x000979cb) wait_bar_pane_cp02

0xf5b5,	// (0x0009a7cf) main_usb_pane_t

0x3f8d,	// (0x0008f1a7) cell_mp_pane

0xa7bb,	// (0x000959d5) cell_mp_pane_g1

0x9bba,	// (0x00094dd4) grid_highlight_pane_cp06

0xa98f,	// (0x00095ba9) grid_skin_colour_pane

0xa997,	// (0x00095bb1) list_highlight_pane_cp03

0x2056,	// (0x0008d270) skin_g1

0xa99f,	// (0x00095bb9) skin_t1

0xa9ae,	// (0x00095bc8) skin_t2

0x0001,

0xf269,	// (0x0009a483) skin_t

0x205e,	// (0x0008d278) cell_skin_colour_pane_ParamLimits

0x205e,	// (0x0008d278) cell_skin_colour_pane

0xa9bc,	// (0x00095bd6) cell_skin_colour_pane_g1

0x20d7,	// (0x0008d2f1) call_video_g1_ParamLimits

0x20d7,	// (0x0008d2f1) call_video_g1

0x20f3,	// (0x0008d30d) call_video_g2_ParamLimits

0x20f3,	// (0x0008d30d) call_video_g2

0x0001,

0xf26e,	// (0x0009a488) call_video_g_ParamLimits

0xf26e,	// (0x0009a488) call_video_g

0x2145,	// (0x0008d35f) call_video_uplink_pane_cp1_ParamLimits

0x2145,	// (0x0008d35f) call_video_uplink_pane_cp1

0xa9ce,	// (0x00095be8) call_video_uplink_pane_cp2

0x21e4,	// (0x0008d3fe) video_down_crop_pane_ParamLimits

0x21e4,	// (0x0008d3fe) video_down_crop_pane

0x22cd,	// (0x0008d4e7) video_down_pane_ParamLimits

0x22cd,	// (0x0008d4e7) video_down_pane

0xa9d6,	// (0x00095bf0) video_down_subqcif_pane_ParamLimits

0xa9d6,	// (0x00095bf0) video_down_subqcif_pane

0xa9ee,	// (0x00095c08) video_down_subqcif_pane_cp_ParamLimits

0xa9ee,	// (0x00095c08) video_down_subqcif_pane_cp

0xaa14,	// (0x00095c2e) im_reading_pane_ParamLimits

0xaa14,	// (0x00095c2e) im_reading_pane

0x23db,	// (0x0008d5f5) im_writing_pane_ParamLimits

0x23db,	// (0x0008d5f5) im_writing_pane

0x23f1,	// (0x0008d60b) im_reading_pane_t1

0xaa2e,	// (0x00095c48) list_im_pane

0xaa3f,	// (0x00095c59) scroll_pane_cp07

0x242e,	// (0x0008d648) im_writing_pane_t1_ParamLimits

0x242e,	// (0x0008d648) im_writing_pane_t1

0xaa58,	// (0x00095c72) im_writing_pane_t2_ParamLimits

0xaa58,	// (0x00095c72) im_writing_pane_t2

0x0001,

0xf278,	// (0x0009a492) im_writing_pane_t_ParamLimits

0xf278,	// (0x0009a492) im_writing_pane_t

0x9bba,	// (0x00094dd4) input_focus_pane_cp04

0x9bba,	// (0x00094dd4) input_focus_pane_cp05

0x2443,	// (0x0008d65d) list_im_single_pane_ParamLimits

0x2443,	// (0x0008d65d) list_im_single_pane

0x2459,	// (0x0008d673) list_single_im_pane_t1

0x3f4d,	// (0x0008f167) blid_accuracy_pane

0x3f55,	// (0x0008f16f) blid_compass_pane

0x3f5f,	// (0x0008f179) main_location_t1

0x3f6f,	// (0x0008f189) main_location_t2

0x3f7f,	// (0x0008f199) main_location_t3

0x0002,

0xf5df,	// (0x0009a7f9) main_location_t

0x9bba,	// (0x00094dd4) aid_levels_location

0xa7bb,	// (0x000959d5) blid_accuracy_pane_g1

0xa7bb,	// (0x000959d5) blid_accuracy_pane_g2

0x0001,

0xf2da,	// (0x0009a4f4) blid_accuracy_pane_g

0xaaa0,	// (0x00095cba) wml_content_pane

0xaade,	// (0x00095cf8) wml_button_pane_ParamLimits

0xaade,	// (0x00095cf8) wml_button_pane

0x2468,	// (0x0008d682) wml_list_single_large_pane_ParamLimits

0x2468,	// (0x0008d682) wml_list_single_large_pane

0x247e,	// (0x0008d698) wml_list_single_medium_pane_ParamLimits

0x247e,	// (0x0008d698) wml_list_single_medium_pane

0x2498,	// (0x0008d6b2) wml_list_single_small_pane_ParamLimits

0x2498,	// (0x0008d6b2) wml_list_single_small_pane

0xaaf2,	// (0x00095d0c) wml_selection_box_pane_ParamLimits

0xaaf2,	// (0x00095d0c) wml_selection_box_pane

0xab05,	// (0x00095d1f) wml_list_single_pane_t1

0xab14,	// (0x00095d2e) wml_list_single_medium_pane_t1

0xab23,	// (0x00095d3d) wml_list_single_large_pane_t1

0xab32,	// (0x00095d4c) input_focus_pane_cp02_ParamLimits

0xab32,	// (0x00095d4c) input_focus_pane_cp02

0xab45,	// (0x00095d5f) wml_selection_box_pane_g1

0xab4e,	// (0x00095d68) wml_selection_box_pane_t1_ParamLimits

0xab4e,	// (0x00095d68) wml_selection_box_pane_t1

0xa682,	// (0x0009589c) bg_wml_button_pane_ParamLimits

0xa682,	// (0x0009589c) bg_wml_button_pane

0xab66,	// (0x00095d80) wml_button_pane_g1

0xab6e,	// (0x00095d88) wml_button_pane_t1

0xab66,	// (0x00095d80) wml_button_bg_pane_g1

0xab7e,	// (0x00095d98) wml_button_bg_pane_g2

0xab86,	// (0x00095da0) wml_button_bg_pane_g3

0xab8e,	// (0x00095da8) wml_button_bg_pane_g4

0xab96,	// (0x00095db0) wml_button_bg_pane_g5

0xab9e,	// (0x00095db8) wml_button_bg_pane_g6

0xaba6,	// (0x00095dc0) wml_button_bg_pane_g7

0xabae,	// (0x00095dc8) wml_button_bg_pane_g8

0xabb6,	// (0x00095dd0) wml_button_bg_pane_g9

0x0008,

0xf27d,	// (0x0009a497) wml_button_bg_pane_g

0x24b2,	// (0x0008d6cc) bg_list_pane_cp02

0xabbe,	// (0x00095dd8) mce_header_pane_ParamLimits

0xabbe,	// (0x00095dd8) mce_header_pane

0xabd4,	// (0x00095dee) mce_icon_pane

0xabd4,	// (0x00095dee) mce_image_pane

0xabdd,	// (0x00095df7) mce_text_pane_ParamLimits

0xabdd,	// (0x00095df7) mce_text_pane

0x24ba,	// (0x0008d6d4) scroll_pane_cp03

0xaad6,	// (0x00095cf0) scroll_pane_cp04

0xabf0,	// (0x00095e0a) scroll_pane_cp05_ParamLimits

0xabf0,	// (0x00095e0a) scroll_pane_cp05

0x24c4,	// (0x0008d6de) mce_header_field_pane_ParamLimits

0x24c4,	// (0x0008d6de) mce_header_field_pane

0x24db,	// (0x0008d6f5) mce_header_field_pane_2_ParamLimits

0x24db,	// (0x0008d6f5) mce_header_field_pane_2

0x24f1,	// (0x0008d70b) mce_header_field_pane_3

0x24f9,	// (0x0008d713) list_single_mce_message_pane_ParamLimits

0x24f9,	// (0x0008d713) list_single_mce_message_pane

0x2510,	// (0x0008d72a) list_single_mce_smart_pane_ParamLimits

0x2510,	// (0x0008d72a) list_single_mce_smart_pane

0xabfc,	// (0x00095e16) input_focus_pane_cp03

0xac05,	// (0x00095e1f) list_header_data_pane

0x2532,	// (0x0008d74c) mce_header_field_pane_t1

0x2542,	// (0x0008d75c) list_single_mce_header_pane_ParamLimits

0x2542,	// (0x0008d75c) list_single_mce_header_pane

0xac0d,	// (0x00095e27) list_single_mce_header_pane_t1

0xac1c,	// (0x00095e36) list_single_mce_message_pane_g1

0xac24,	// (0x00095e3e) list_single_mce_message_pane_t1

0x257c,	// (0x0008d796) bg_cale_heading_pane_cp01_ParamLimits

0x257c,	// (0x0008d796) bg_cale_heading_pane_cp01

0xac32,	// (0x00095e4c) bg_cale_pane_cp02_ParamLimits

0xac32,	// (0x00095e4c) bg_cale_pane_cp02

0x25b7,	// (0x0008d7d1) cale_month_corner_pane

0x25d6,	// (0x0008d7f0) cale_month_day_heading_pane_ParamLimits

0x25d6,	// (0x0008d7f0) cale_month_day_heading_pane

0x2629,	// (0x0008d843) cale_month_pane_g1_ParamLimits

0x2629,	// (0x0008d843) cale_month_pane_g1

0x2659,	// (0x0008d873) cale_month_pane_g2_ParamLimits

0x2659,	// (0x0008d873) cale_month_pane_g2

0x2689,	// (0x0008d8a3) cale_month_pane_g3_ParamLimits

0x2689,	// (0x0008d8a3) cale_month_pane_g3

0x26c5,	// (0x0008d8df) cale_month_pane_g4_ParamLimits

0x26c5,	// (0x0008d8df) cale_month_pane_g4

0x2701,	// (0x0008d91b) cale_month_pane_g5_ParamLimits

0x2701,	// (0x0008d91b) cale_month_pane_g5

0x2749,	// (0x0008d963) cale_month_pane_g6_ParamLimits

0x2749,	// (0x0008d963) cale_month_pane_g6

0x2795,	// (0x0008d9af) cale_month_pane_g7_ParamLimits

0x2795,	// (0x0008d9af) cale_month_pane_g7

0x27e9,	// (0x0008da03) cale_month_pane_g8_ParamLimits

0x27e9,	// (0x0008da03) cale_month_pane_g8

0x283d,	// (0x0008da57) cale_month_pane_g9_ParamLimits

0x283d,	// (0x0008da57) cale_month_pane_g9

0x288f,	// (0x0008daa9) cale_month_pane_g10_ParamLimits

0x288f,	// (0x0008daa9) cale_month_pane_g10

0x28e1,	// (0x0008dafb) cale_month_pane_g11_ParamLimits

0x28e1,	// (0x0008dafb) cale_month_pane_g11

0x2933,	// (0x0008db4d) cale_month_pane_g12_ParamLimits

0x2933,	// (0x0008db4d) cale_month_pane_g12

0x2985,	// (0x0008db9f) cale_month_pane_g13_ParamLimits

0x2985,	// (0x0008db9f) cale_month_pane_g13

0x000c,

0xf290,	// (0x0009a4aa) cale_month_pane_g_ParamLimits

0xf290,	// (0x0009a4aa) cale_month_pane_g

0x29d7,	// (0x0008dbf1) cale_month_week_pane

0x29fb,	// (0x0008dc15) grid_cale_month_pane_ParamLimits

0x29fb,	// (0x0008dc15) grid_cale_month_pane

0x2a39,	// (0x0008dc53) cale_month_day_heading_pane_t1

0x2abf,	// (0x0008dcd9) cale_month_day_heading_pane_t2

0x2b50,	// (0x0008dd6a) cale_month_day_heading_pane_t3

0x2be1,	// (0x0008ddfb) cale_month_day_heading_pane_t4

0x2c7a,	// (0x0008de94) cale_month_day_heading_pane_t5

0x2d1b,	// (0x0008df35) cale_month_day_heading_pane_t6

0x2dbc,	// (0x0008dfd6) cale_month_day_heading_pane_t7

0x0006,

0xf2ab,	// (0x0009a4c5) cale_month_day_heading_pane_t

0xa8e3,	// (0x00095afd) bg_cale_side_pane_cp01

0x2e65,	// (0x0008e07f) cale_month_week_pane_t1

0x2e7e,	// (0x0008e098) cale_month_week_pane_t2

0x2e97,	// (0x0008e0b1) cale_month_week_pane_t3

0x2eb0,	// (0x0008e0ca) cale_month_week_pane_t4

0x2ec9,	// (0x0008e0e3) cale_month_week_pane_t5

0x2ee2,	// (0x0008e0fc) cale_month_week_pane_t6

0x0005,

0xf2ba,	// (0x0009a4d4) cale_month_week_pane_t

0x2efb,	// (0x0008e115) cell_cale_month_pane_ParamLimits

0x2efb,	// (0x0008e115) cell_cale_month_pane

0x9cfa,	// (0x00094f14) cell_cale_month_pane_g1

0x3029,	// (0x0008e243) cell_cale_month_pane_t1_ParamLimits

0x3029,	// (0x0008e243) cell_cale_month_pane_t1

0xa8f1,	// (0x00095b0b) grid_highlight_pane_cp08

0xa7bb,	// (0x000959d5) main_smil_g1

0x3049,	// (0x0008e263) smil_status_pane

0xac71,	// (0x00095e8b) smil_text_pane

0xc657,	// (0x00097871) bg_popup_call3_rect_pane_g8

0xc65f,	// (0x00097879) bg_popup_call3_rect_pane_g9

0x0008,

0xf573,	// (0x0009a78d) bg_popup_call3_rect_pane_g

0xc8a6,	// (0x00097ac0) smil_status_volume_pane_g1

0xac7b,	// (0x00095e95) smil_status_pane_t1

0x9e50,	// (0x0009506a) volume_smil_pane

0xac92,	// (0x00095eac) list_smil_text_pane

0x305e,	// (0x0008e278) scroll_pane_cp011

0x3069,	// (0x0008e283) smil_text_list_pane_t1_ParamLimits

0x3069,	// (0x0008e283) smil_text_list_pane_t1

0x9d06,	// (0x00094f20) aid_volume_smil_ParamLimits

0x9d06,	// (0x00094f20) aid_volume_smil

0xa7bb,	// (0x000959d5) smil_volume_pane_g1

0xa7bb,	// (0x000959d5) smil_volume_pane_g2

0x0001,

0xf2da,	// (0x0009a4f4) smil_volume_pane_g

0x16b0,	// (0x0008c8ca) listscroll_cale_day_pane

0xac9c,	// (0x00095eb6) bg_cale_pane

0xacb4,	// (0x00095ece) list_cale_pane

0xacd7,	// (0x00095ef1) scroll_pane_cp09

0xace8,	// (0x00095f02) cale_bg_pane_g1

0xacf0,	// (0x00095f0a) cale_bg_pane_g2

0xacf8,	// (0x00095f12) cale_bg_pane_g3

0xad00,	// (0x00095f1a) cale_bg_pane_g4

0xad08,	// (0x00095f22) cale_bg_pane_g5

0xad10,	// (0x00095f2a) cale_bg_pane_g6

0xad18,	// (0x00095f32) cale_bg_pane_g7

0xad20,	// (0x00095f3a) cale_bg_pane_g8

0xad28,	// (0x00095f42) cale_bg_pane_g9

0x0008,

0xf2df,	// (0x0009a4f9) cale_bg_pane_g

0x30ab,	// (0x0008e2c5) list_cale_time_pane_ParamLimits

0x30ab,	// (0x0008e2c5) list_cale_time_pane

0xad38,	// (0x00095f52) list_cale_time_pane_g1_ParamLimits

0xad38,	// (0x00095f52) list_cale_time_pane_g1

0xad44,	// (0x00095f5e) list_cale_time_pane_g2_ParamLimits

0xad44,	// (0x00095f5e) list_cale_time_pane_g2

0x30c2,	// (0x0008e2dc) list_cale_time_pane_g3_ParamLimits

0x30c2,	// (0x0008e2dc) list_cale_time_pane_g3

0x30d0,	// (0x0008e2ea) list_cale_time_pane_g4_ParamLimits

0x30d0,	// (0x0008e2ea) list_cale_time_pane_g4

0x30de,	// (0x0008e2f8) list_cale_time_pane_g5_ParamLimits

0x30de,	// (0x0008e2f8) list_cale_time_pane_g5

0x0005,

0xf2f2,	// (0x0009a50c) list_cale_time_pane_g_ParamLimits

0xf2f2,	// (0x0009a50c) list_cale_time_pane_g

0xad5e,	// (0x00095f78) list_cale_time_pane_t1_ParamLimits

0xad5e,	// (0x00095f78) list_cale_time_pane_t1

0xad86,	// (0x00095fa0) list_cale_time_pane_t2_ParamLimits

0xad86,	// (0x00095fa0) list_cale_time_pane_t2

0x3351,	// (0x0008e56b) aid_blid_cardinal_pane

0x338f,	// (0x0008e5a9) compass_pane_t4

0xadae,	// (0x00095fc8) list_cale_time_pane_t4_ParamLimits

0xadae,	// (0x00095fc8) list_cale_time_pane_t4

0x339d,	// (0x0008e5b7) compass_pane_t5

0x33ab,	// (0x0008e5c5) compass_pane_t6

0x33b9,	// (0x0008e5d3) compass_pane_t7

0xb2c4,	// (0x000964de) navi_pane_cc_t1

0xb4a9,	// (0x000966c3) aid_phob_thumbnail_center_pane

0x395d,	// (0x0008eb77) main_postcard_pane_g4_ParamLimits

0x0002,

0xf2ff,	// (0x0009a519) list_cale_time_pane_t_ParamLimits

0xf2ff,	// (0x0009a519) list_cale_time_pane_t

0x9811,	// (0x00094a2b) bg_popup_window_pane_cp02_ParamLimits

0x9811,	// (0x00094a2b) bg_popup_window_pane_cp02

0xadd6,	// (0x00095ff0) heading_pane_cp01_ParamLimits

0xadd6,	// (0x00095ff0) heading_pane_cp01

0xade2,	// (0x00095ffc) loc_req_pane_ParamLimits

0xade2,	// (0x00095ffc) loc_req_pane

0xadf2,	// (0x0009600c) loc_type_pane_ParamLimits

0xadf2,	// (0x0009600c) loc_type_pane

0xae04,	// (0x0009601e) loc_type_pane_t1_ParamLimits

0xae04,	// (0x0009601e) loc_type_pane_t1

0xae16,	// (0x00096030) loc_type_pane_t2_ParamLimits

0xae16,	// (0x00096030) loc_type_pane_t2

0xae28,	// (0x00096042) loc_type_pane_t3_ParamLimits

0xae28,	// (0x00096042) loc_type_pane_t3

0x0002,

0xf306,	// (0x0009a520) loc_type_pane_t_ParamLimits

0xf306,	// (0x0009a520) loc_type_pane_t

0xae3a,	// (0x00096054) list_loc_req_pane

0xae44,	// (0x0009605e) scroll_pane_cp012

0x30ec,	// (0x0008e306) list_single_loc_request_popup_menu_pane_ParamLimits

0x30ec,	// (0x0008e306) list_single_loc_request_popup_menu_pane

0xae4f,	// (0x00096069) list_single_loc_request_popup_menu_pane_g1_ParamLimits

0xae4f,	// (0x00096069) list_single_loc_request_popup_menu_pane_g1

0xae5b,	// (0x00096075) list_single_loc_request_popup_menu_pane_g2_ParamLimits

0xae5b,	// (0x00096075) list_single_loc_request_popup_menu_pane_g2

0x0001,

0xf30d,	// (0x0009a527) list_single_loc_request_popup_menu_pane_g_ParamLimits

0xf30d,	// (0x0009a527) list_single_loc_request_popup_menu_pane_g

0xae67,	// (0x00096081) list_single_loc_request_popup_menu_pane_t1_ParamLimits

0xae67,	// (0x00096081) list_single_loc_request_popup_menu_pane_t1

0xa682,	// (0x0009589c) bg_popup_window_pane_cp03_ParamLimits

0xa682,	// (0x0009589c) bg_popup_window_pane_cp03

0xb1f7,	// (0x00096411) heading_loc_req_pane_ParamLimits

0xb1f7,	// (0x00096411) heading_loc_req_pane

0x30f9,	// (0x0008e313) popup_dyc_status_message_window_g1_ParamLimits

0x30f9,	// (0x0008e313) popup_dyc_status_message_window_g1

0x310d,	// (0x0008e327) popup_dyc_status_message_window_t1_ParamLimits

0x310d,	// (0x0008e327) popup_dyc_status_message_window_t1

0x3122,	// (0x0008e33c) popup_dyc_status_message_window_t2_ParamLimits

0x3122,	// (0x0008e33c) popup_dyc_status_message_window_t2

0x3137,	// (0x0008e351) popup_dyc_status_message_window_t3_ParamLimits

0x3137,	// (0x0008e351) popup_dyc_status_message_window_t3

0x0002,

0xf312,	// (0x0009a52c) popup_dyc_status_message_window_t_ParamLimits

0xf312,	// (0x0009a52c) popup_dyc_status_message_window_t

0x9bba,	// (0x00094dd4) bg_heading_pane_cp01

0xae7d,	// (0x00096097) heading_loc_req_pane_g1

0xae85,	// (0x0009609f) heading_loc_req_pane_g2

0xae8d,	// (0x000960a7) heading_loc_req_pane_g3

0x0002,

0xf319,	// (0x0009a533) heading_loc_req_pane_g

0xae95,	// (0x000960af) heading_loc_req_pane_t1

0xaea4,	// (0x000960be) bg_popup_sub_pane_cp01_ParamLimits

0xaea4,	// (0x000960be) bg_popup_sub_pane_cp01

0xaeb2,	// (0x000960cc) popup_cale_events_window_g1_ParamLimits

0xaeb2,	// (0x000960cc) popup_cale_events_window_g1

0xaed2,	// (0x000960ec) popup_cale_events_window_g2_ParamLimits

0xaed2,	// (0x000960ec) popup_cale_events_window_g2

0x0001,

0xf34d,	// (0x0009a567) popup_cale_events_window_g_ParamLimits

0xf34d,	// (0x0009a567) popup_cale_events_window_g

0xaef2,	// (0x0009610c) popup_cale_events_window_t1_ParamLimits

0xaef2,	// (0x0009610c) popup_cale_events_window_t1

0xaf04,	// (0x0009611e) popup_cale_events_window_t2_ParamLimits

0xaf04,	// (0x0009611e) popup_cale_events_window_t2

0xaf42,	// (0x0009615c) popup_cale_events_window_t3_ParamLimits

0xaf42,	// (0x0009615c) popup_cale_events_window_t3

0xaf7c,	// (0x00096196) popup_cale_events_window_t4_ParamLimits

0xaf7c,	// (0x00096196) popup_cale_events_window_t4

0x0003,

0xf352,	// (0x0009a56c) popup_cale_events_window_t_ParamLimits

0xf352,	// (0x0009a56c) popup_cale_events_window_t

0x315f,	// (0x0008e379) call_type_pane

0x316f,	// (0x0008e389) popup_call_status_window_g1

0x3183,	// (0x0008e39d) popup_call_status_window_g2

0x3197,	// (0x0008e3b1) popup_call_status_window_g3

0x0002,

0xf35b,	// (0x0009a575) popup_call_status_window_g

0xafb2,	// (0x000961cc) call_type_pane_g1

0xafbb,	// (0x000961d5) call_type_pane_g2

0x0001,

0xf362,	// (0x0009a57c) call_type_pane_g

0x9bba,	// (0x00094dd4) bg_popup_sub_pane_cp02

0xafc4,	// (0x000961de) listscroll_popup_wml_pane

0xafcc,	// (0x000961e6) list_wml_pane

0xafd6,	// (0x000961f0) scroll_pane_cp013

0xafe1,	// (0x000961fb) list_single_graphic_popup_wml_pane_ParamLimits

0xafe1,	// (0x000961fb) list_single_graphic_popup_wml_pane

0xa7bb,	// (0x000959d5) list_single_graphic_popup_wml_pane_g1

0xaff5,	// (0x0009620f) list_single_graphic_popup_wml_pane_g2

0x0001,

0xf367,	// (0x0009a581) list_single_graphic_popup_wml_pane_g

0xaffd,	// (0x00096217) list_single_graphic_popup_wml_pane_t1

0xb013,	// (0x0009622d) aid_call_pane

0xa67a,	// (0x00095894) popup_clock_analogue_window_g1

0xa67a,	// (0x00095894) popup_clock_analogue_window_g2

0x9d28,	// (0x00094f42) popup_clock_analogue_window_g3

0x9d28,	// (0x00094f42) popup_clock_analogue_window_g4

0xa7bb,	// (0x000959d5) popup_clock_analogue_window_g5

0x0004,

0xf36c,	// (0x0009a586) popup_clock_analogue_window_g

0x9d30,	// (0x00094f4a) popup_clock_analogue_window_t1

0x9d3e,	// (0x00094f58) clock_digital_number_pane_ParamLimits

0x9d3e,	// (0x00094f58) clock_digital_number_pane

0x9d4a,	// (0x00094f64) clock_digital_number_pane_cp02_ParamLimits

0x9d4a,	// (0x00094f64) clock_digital_number_pane_cp02

0x9d56,	// (0x00094f70) clock_digital_number_pane_cp03_ParamLimits

0x9d56,	// (0x00094f70) clock_digital_number_pane_cp03

0x9d62,	// (0x00094f7c) clock_digital_number_pane_cp04_ParamLimits

0x9d62,	// (0x00094f7c) clock_digital_number_pane_cp04

0x9d72,	// (0x00094f8c) clock_digital_separator_pane_ParamLimits

0x9d72,	// (0x00094f8c) clock_digital_separator_pane

0x9d7e,	// (0x00094f98) popup_clock_digital_window_t1

0xa7bb,	// (0x000959d5) clock_digital_number_pane_g1

0xa7bb,	// (0x000959d5) clock_digital_number_pane_g2

0x0001,

0xf2da,	// (0x0009a4f4) clock_digital_number_pane_g

0xa7bb,	// (0x000959d5) clock_digital_separator_pane_g1

0xa7bb,	// (0x000959d5) clock_digital_separator_pane_g2

0x0001,

0xf2da,	// (0x0009a4f4) clock_digital_separator_pane_g

0x9bba,	// (0x00094dd4) bg_popup_window_pane_cp04

0xb01b,	// (0x00096235) heading_pane_cp03

0xb023,	// (0x0009623d) listscroll_popup_gms_pane

0xb02b,	// (0x00096245) grid_large_graphic_popup_pane

0xb035,	// (0x0009624f) listscroll_popup_gms_pane_g1

0xb03d,	// (0x00096257) listscroll_popup_gms_pane_g2

0x0001,

0xf377,	// (0x0009a591) listscroll_popup_gms_pane_g

0xaad6,	// (0x00095cf0) scroll_pane_cp014

0xb045,	// (0x0009625f) cell_large_graphic_popup_pane_ParamLimits

0xb045,	// (0x0009625f) cell_large_graphic_popup_pane

0xb05d,	// (0x00096277) cell_large_graphic_popup_pane_g1_ParamLimits

0xb05d,	// (0x00096277) cell_large_graphic_popup_pane_g1

0xb069,	// (0x00096283) cell_large_graphic_popup_pane_g2_ParamLimits

0xb069,	// (0x00096283) cell_large_graphic_popup_pane_g2

0xb075,	// (0x0009628f) cell_large_graphic_popup_pane_g3_ParamLimits

0xb075,	// (0x0009628f) cell_large_graphic_popup_pane_g3

0xb082,	// (0x0009629c) cell_large_graphic_popup_pane_g4_ParamLimits

0xb082,	// (0x0009629c) cell_large_graphic_popup_pane_g4

0x0003,

0xf37c,	// (0x0009a596) cell_large_graphic_popup_pane_g_ParamLimits

0xf37c,	// (0x0009a596) cell_large_graphic_popup_pane_g

0xb092,	// (0x000962ac) grid_highlight_pane_cp010

0xa7bb,	// (0x000959d5) bg_popup_call_pane_g1

0xb09c,	// (0x000962b6) list_single_graphic_popup_conf_pane_ParamLimits

0xb09c,	// (0x000962b6) list_single_graphic_popup_conf_pane

0xb0af,	// (0x000962c9) list_highlight_pane_cp01

0xb0b8,	// (0x000962d2) list_single_graphic_popup_conf_pane_g1

0xb0c0,	// (0x000962da) list_single_graphic_popup_conf_pane_g2

0x0001,

0xf385,	// (0x0009a59f) list_single_graphic_popup_conf_pane_g

0xb0c8,	// (0x000962e2) list_single_graphic_popup_conf_pane_t1

0xb0d6,	// (0x000962f0) linegrid_cams_pane_g1

0x31a6,	// (0x0008e3c0) linegrid_cams_pane_g2

0xa873,	// (0x00095a8d) linegrid_cams_pane_g3

0xb0df,	// (0x000962f9) linegrid_cams_pane_g4

0x31af,	// (0x0008e3c9) linegrid_cams_pane_g5

0x31b8,	// (0x0008e3d2) linegrid_cams_pane_g6

0xa924,	// (0x00095b3e) linegrid_cams_pane_g7

0x0006,

0xf38a,	// (0x0009a5a4) linegrid_cams_pane_g

0xb0e8,	// (0x00096302) popup_clock_analogue_window

0xb0e8,	// (0x00096302) popup_clock_digital_window

0x9bba,	// (0x00094dd4) popup_phob_thumbnail_window

0xa7bb,	// (0x000959d5) call_video_uplink_pane_g1

0xb0f1,	// (0x0009630b) call_video_uplink_pane_g2

0x0001,

0xf399,	// (0x0009a5b3) call_video_uplink_pane_g

0xa8f1,	// (0x00095b0b) video_uplink_pane

0xb0f9,	// (0x00096313) mce_image_pane_g1

0x31c3,	// (0x0008e3dd) mce_image_pane_g2

0x31cb,	// (0x0008e3e5) mce_image_pane_g3

0x31d3,	// (0x0008e3ed) mce_image_pane_g4

0x31dd,	// (0x0008e3f7) mce_image_pane_g5

0x0004,

0xf39e,	// (0x0009a5b8) mce_image_pane_g

0xb103,	// (0x0009631d) control_top_pane_stacon_cp01_ParamLimits

0xb103,	// (0x0009631d) control_top_pane_stacon_cp01

0xb117,	// (0x00096331) uni_indicator_pane_stacon_cp01_ParamLimits

0xb117,	// (0x00096331) uni_indicator_pane_stacon_cp01

0xb128,	// (0x00096342) bg_popup_sub_pane_cp03

0x31e5,	// (0x0008e3ff) chi_dic_find_pane

0x31ed,	// (0x0008e407) listscroll_chi_dic_pane

0x31f6,	// (0x0008e410) main_pane_chidic_g1

0xb132,	// (0x0009634c) chi_dic_find_pane_t1

0xb140,	// (0x0009635a) find_chidic_pane

0xb149,	// (0x00096363) chi_dic_list_pane_ParamLimits

0xb149,	// (0x00096363) chi_dic_list_pane

0xb15a,	// (0x00096374) scroll_pane_cp020

0xb162,	// (0x0009637c) find_chidic_pane_t1

0x9bba,	// (0x00094dd4) input_focus_pane_cp06

0x3209,	// (0x0008e423) list_chi_dic_pane_ParamLimits

0x3209,	// (0x0008e423) list_chi_dic_pane

0x321c,	// (0x0008e436) list_chi_dic_pane_t1_ParamLimits

0x321c,	// (0x0008e436) list_chi_dic_pane_t1

0x9bba,	// (0x00094dd4) list_highlight_pane_cp020

0xb171,	// (0x0009638b) bg_cale_heading_pane_g1

0x322f,	// (0x0008e449) bg_cale_heading_pane_g2

0x3237,	// (0x0008e451) bg_cale_heading_pane_g3

0x323f,	// (0x0008e459) bg_cale_heading_pane_g4

0x3249,	// (0x0008e463) bg_cale_heading_pane_g5

0x3253,	// (0x0008e46d) bg_cale_heading_pane_g6

0x325b,	// (0x0008e475) bg_cale_heading_pane_g7

0x3263,	// (0x0008e47d) bg_cale_heading_pane_g8

0x326d,	// (0x0008e487) bg_cale_heading_pane_g9

0x0008,

0xf3a9,	// (0x0009a5c3) bg_cale_heading_pane_g

0xb171,	// (0x0009638b) bg_cale_side_pane_g1

0x3277,	// (0x0008e491) bg_cale_side_pane_g2

0x327f,	// (0x0008e499) bg_cale_side_pane_g3

0x3287,	// (0x0008e4a1) bg_cale_side_pane_g4

0x328f,	// (0x0008e4a9) bg_cale_side_pane_g5

0x3297,	// (0x0008e4b1) bg_cale_side_pane_g6

0x329f,	// (0x0008e4b9) bg_cale_side_pane_g7

0x32a7,	// (0x0008e4c1) bg_cale_side_pane_g8

0x32af,	// (0x0008e4c9) bg_cale_side_pane_g9

0x0008,

0xf3bc,	// (0x0009a5d6) bg_cale_side_pane_g

0x32b7,	// (0x0008e4d1) popup_call_status_window_ParamLimits

0x32b7,	// (0x0008e4d1) popup_call_status_window

0xb179,	// (0x00096393) stacon_top_pane

0xb181,	// (0x0009639b) status_pane_ParamLimits

0xb181,	// (0x0009639b) status_pane

0xb196,	// (0x000963b0) status_small_pane

0xb203,	// (0x0009641d) control_pane

0x9bba,	// (0x00094dd4) stacon_bottom_pane

0xb20b,	// (0x00096425) list_single_mce_smart_pane_t1_ParamLimits

0xb20b,	// (0x00096425) list_single_mce_smart_pane_t1

0xb21e,	// (0x00096438) list_single_mce_smart_pane_t2_ParamLimits

0xb21e,	// (0x00096438) list_single_mce_smart_pane_t2

0x0001,

0xf3cf,	// (0x0009a5e9) list_single_mce_smart_pane_t_ParamLimits

0xf3cf,	// (0x0009a5e9) list_single_mce_smart_pane_t

0x32fe,	// (0x0008e518) compass_pane

0x3307,	// (0x0008e521) main_location2_pane_t1

0x3319,	// (0x0008e533) main_location2_pane_t2

0x332b,	// (0x0008e545) main_location2_pane_t3

0x0003,

0xf3d4,	// (0x0009a5ee) main_location2_pane_t

0xb23d,	// (0x00096457) compass_pane_g1_ParamLimits

0xb23d,	// (0x00096457) compass_pane_g1

0x3371,	// (0x0008e58b) compass_pane_t1

0x3380,	// (0x0008e59a) compass_pane_t2

0x0005,

0xf3dd,	// (0x0009a5f7) compass_pane_t

0x33c7,	// (0x0008e5e1) text_secondary_cp61

0xb2bb,	// (0x000964d5) navi_pane_cams_g5

0xb337,	// (0x00096551) navi_pane_im_t1

0xb345,	// (0x0009655f) navi_pane_mp_g1_ParamLimits

0xb345,	// (0x0009655f) navi_pane_mp_g1

0xb359,	// (0x00096573) navi_pane_mp_g2_ParamLimits

0xb359,	// (0x00096573) navi_pane_mp_g2

0xb365,	// (0x0009657f) navi_pane_mp_g3_ParamLimits

0xb365,	// (0x0009657f) navi_pane_mp_g3

0x0002,

0xf3f1,	// (0x0009a60b) navi_pane_mp_g_ParamLimits

0xf3f1,	// (0x0009a60b) navi_pane_mp_g

0xb371,	// (0x0009658b) navi_pane_mp_t1

0xb37f,	// (0x00096599) navi_pane_mp_t2

0x0002,

0xf3f8,	// (0x0009a612) navi_pane_mp_t

0xb3ea,	// (0x00096604) navi_pane_vt_g1

0xb371,	// (0x0009658b) navi_pane_vt_t1

0xb3f2,	// (0x0009660c) navi_slider_pane

0xb402,	// (0x0009661c) zooming_pane

0xb40a,	// (0x00096624) navi_slider_pane_g1

0x9d9b,	// (0x00094fb5) navi_slider_pane_g2

0x0006,

0xf3ff,	// (0x0009a619) navi_slider_pane_g

0xb42e,	// (0x00096648) aid_levels_zoom

0xb436,	// (0x00096650) zooming_pane_g1

0xb43e,	// (0x00096658) zooming_pane_g2

0xb43e,	// (0x00096658) zooming_pane_g3

0x0002,

0xf40e,	// (0x0009a628) zooming_pane_g

0xb446,	// (0x00096660) level_10_zoom

0xb44f,	// (0x00096669) level_11_zoom

0xb458,	// (0x00096672) level_1_zoom

0xb461,	// (0x0009667b) level_2_zoom

0xb46a,	// (0x00096684) level_3_zoom

0xb473,	// (0x0009668d) level_4_zoom

0xb47c,	// (0x00096696) level_5_zoom

0xb485,	// (0x0009669f) level_6_zoom

0xb48e,	// (0x000966a8) level_7_zoom

0xb497,	// (0x000966b1) level_8_zoom

0xb4a0,	// (0x000966ba) level_9_zoom

0xb4b1,	// (0x000966cb) popup_phob_thumbnail_window_g1

0xb4b9,	// (0x000966d3) popup_phob_thumbnail_window_g2

0x0001,

0xf415,	// (0x0009a62f) popup_phob_thumbnail_window_g

0xc7b9,	// (0x000979d3) level_1_location

0xc7c1,	// (0x000979db) level_2_location

0xc7c9,	// (0x000979e3) level_3_location

0xc7d1,	// (0x000979eb) level_4_location

0xb402,	// (0x0009661c) level_5_location

0x3418,	// (0x0008e632) mce_icon_pane_g1

0x3422,	// (0x0008e63c) mce_icon_pane_g2

0x0001,

0xf41a,	// (0x0009a634) mce_icon_pane_g

0x342c,	// (0x0008e646) main_mup_pane_g1_ParamLimits

0x342c,	// (0x0008e646) main_mup_pane_g1

0x3442,	// (0x0008e65c) main_mup_pane_g2_ParamLimits

0x3442,	// (0x0008e65c) main_mup_pane_g2

0x345a,	// (0x0008e674) main_mup_pane_g3_ParamLimits

0x345a,	// (0x0008e674) main_mup_pane_g3

0x3472,	// (0x0008e68c) main_mup_pane_g4_ParamLimits

0x3472,	// (0x0008e68c) main_mup_pane_g4

0x348a,	// (0x0008e6a4) main_mup_pane_g5_ParamLimits

0x348a,	// (0x0008e6a4) main_mup_pane_g5

0x34a6,	// (0x0008e6c0) main_mup_pane_g6_ParamLimits

0x34a6,	// (0x0008e6c0) main_mup_pane_g6

0x34be,	// (0x0008e6d8) main_mup_pane_g7_ParamLimits

0x34be,	// (0x0008e6d8) main_mup_pane_g7

0x34d6,	// (0x0008e6f0) main_mup_pane_g8_ParamLimits

0x34d6,	// (0x0008e6f0) main_mup_pane_g8

0x34ee,	// (0x0008e708) main_mup_pane_g9_ParamLimits

0x34ee,	// (0x0008e708) main_mup_pane_g9

0x3508,	// (0x0008e722) main_mup_pane_g10_ParamLimits

0x3508,	// (0x0008e722) main_mup_pane_g10

0x3522,	// (0x0008e73c) main_mup_pane_g11_ParamLimits

0x3522,	// (0x0008e73c) main_mup_pane_g11

0x3536,	// (0x0008e750) main_mup_pane_g12_ParamLimits

0x3536,	// (0x0008e750) main_mup_pane_g12

0x354c,	// (0x0008e766) main_mup_pane_g13_ParamLimits

0x354c,	// (0x0008e766) main_mup_pane_g13

0x000c,

0xf41f,	// (0x0009a639) main_mup_pane_g_ParamLimits

0xf41f,	// (0x0009a639) main_mup_pane_g

0x3560,	// (0x0008e77a) main_mup_pane_t1_ParamLimits

0x3560,	// (0x0008e77a) main_mup_pane_t1

0x357a,	// (0x0008e794) main_mup_pane_t2_ParamLimits

0x357a,	// (0x0008e794) main_mup_pane_t2

0x3592,	// (0x0008e7ac) main_mup_pane_t3_ParamLimits

0x3592,	// (0x0008e7ac) main_mup_pane_t3

0x35aa,	// (0x0008e7c4) main_mup_pane_t4_ParamLimits

0x35aa,	// (0x0008e7c4) main_mup_pane_t4

0x35c8,	// (0x0008e7e2) main_mup_pane_t5_ParamLimits

0x35c8,	// (0x0008e7e2) main_mup_pane_t5

0x35dd,	// (0x0008e7f7) main_mup_pane_t6_ParamLimits

0x35dd,	// (0x0008e7f7) main_mup_pane_t6

0x0005,

0xf43a,	// (0x0009a654) main_mup_pane_t_ParamLimits

0xf43a,	// (0x0009a654) main_mup_pane_t

0x35ef,	// (0x0008e809) mup_progress_pane_ParamLimits

0x35ef,	// (0x0008e809) mup_progress_pane

0x35fb,	// (0x0008e815) mup_visualizer_pane_ParamLimits

0x35fb,	// (0x0008e815) mup_visualizer_pane

0x362f,	// (0x0008e849) mup_volume_pane_ParamLimits

0x362f,	// (0x0008e849) mup_volume_pane

0xb4c1,	// (0x000966db) mup_visualizer_pane_g1_ParamLimits

0xb4c1,	// (0x000966db) mup_visualizer_pane_g1

0xb4c1,	// (0x000966db) mup_visualizer_pane_g2_ParamLimits

0xb4c1,	// (0x000966db) mup_visualizer_pane_g2

0xb23d,	// (0x00096457) mup_visualizer_pane_g3_ParamLimits

0xb23d,	// (0x00096457) mup_visualizer_pane_g3

0x0002,

0xf447,	// (0x0009a661) mup_visualizer_pane_g_ParamLimits

0xf447,	// (0x0009a661) mup_visualizer_pane_g

0xa7bb,	// (0x000959d5) mup_volume_pane_g1

0xb4d7,	// (0x000966f1) mup_volume_pane_g2

0x0001,

0xf44e,	// (0x0009a668) mup_volume_pane_g

0xa7bb,	// (0x000959d5) mup_progress_pane_g1

0xb4e0,	// (0x000966fa) mup_progress_pane_g2

0xb4e9,	// (0x00096703) mup_progress_pane_g3

0x0002,

0xf453,	// (0x0009a66d) mup_progress_pane_g

0x9bba,	// (0x00094dd4) bg_popup_window_pane_cp05

0xb4f2,	// (0x0009670c) heading_pane_cp02_ParamLimits

0xb4f2,	// (0x0009670c) heading_pane_cp02

0xb50c,	// (0x00096726) list_popup_blid_pane

0xb514,	// (0x0009672e) list_blid_sat_info_pane_ParamLimits

0xb514,	// (0x0009672e) list_blid_sat_info_pane

0xb527,	// (0x00096741) list_blid_sat_info_pane_g1

0xb52f,	// (0x00096749) list_blid_sat_info_pane_t1

0x3745,	// (0x0008e95f) mup_equalizer_pane_ParamLimits

0x3745,	// (0x0008e95f) mup_equalizer_pane

0x375e,	// (0x0008e978) mup_equalizer_pane_cp1_ParamLimits

0x375e,	// (0x0008e978) mup_equalizer_pane_cp1

0x377b,	// (0x0008e995) mup_equalizer_pane_cp2_ParamLimits

0x377b,	// (0x0008e995) mup_equalizer_pane_cp2

0x3798,	// (0x0008e9b2) mup_equalizer_pane_cp3_ParamLimits

0x3798,	// (0x0008e9b2) mup_equalizer_pane_cp3

0x37b9,	// (0x0008e9d3) mup_equalizer_pane_cp4_ParamLimits

0x37b9,	// (0x0008e9d3) mup_equalizer_pane_cp4

0x37da,	// (0x0008e9f4) mup_equalizer_pane_cp5

0x37ee,	// (0x0008ea08) mup_equalizer_pane_cp6

0x3802,	// (0x0008ea1c) mup_equalizer_pane_cp7

0xc6d7,	// (0x000978f1) bg_popup_call_poc_act_pane_g9

0xc6df,	// (0x000978f9) bg_popup_call_poc_act_pane_g10

0xc6e7,	// (0x00097901) bg_popup_call_poc_act_pane_g11

0x000a,

0xa682,	// (0x0009589c) mup_scale_pane

0xa7bb,	// (0x000959d5) mup_scale_pane_g1

0xb53d,	// (0x00096757) mup_scale_pane_g2

0x0006,

0xf46f,	// (0x0009a689) mup_scale_pane_g

0xb561,	// (0x0009677b) msg_data_pane

0xb569,	// (0x00096783) scroll_pane_cp017

0x02da,	// (0x0008b4f4) bg_list_pane_cp04_ParamLimits

0x02da,	// (0x0008b4f4) bg_list_pane_cp04

0xb571,	// (0x0009678b) msg_data_pane_g1

0x3828,	// (0x0008ea42) msg_data_pane_g2

0x3830,	// (0x0008ea4a) msg_data_pane_g3

0x3838,	// (0x0008ea52) msg_data_pane_g4

0x3840,	// (0x0008ea5a) msg_data_pane_g5

0x3848,	// (0x0008ea62) msg_data_pane_g6

0x3850,	// (0x0008ea6a) msg_data_pane_g7

0x0006,

0xf47e,	// (0x0009a698) msg_data_pane_g

0x02fe,	// (0x0008b518) msg_text_pane_ParamLimits

0x02fe,	// (0x0008b518) msg_text_pane

0x3858,	// (0x0008ea72) qrid_highlight_pane_cp011_ParamLimits

0x3858,	// (0x0008ea72) qrid_highlight_pane_cp011

0x9bba,	// (0x00094dd4) msg_body_pane

0x9bba,	// (0x00094dd4) msg_header_pane

0xb579,	// (0x00096793) input_focus_pane_cp07

0x0332,	// (0x0008b54c) msg_header_pane_t1_ParamLimits

0x0332,	// (0x0008b54c) msg_header_pane_t1

0x0344,	// (0x0008b55e) msg_header_pane_t2_ParamLimits

0x0344,	// (0x0008b55e) msg_header_pane_t2

0x0001,

0xf492,	// (0x0009a6ac) msg_header_pane_t_ParamLimits

0xf492,	// (0x0009a6ac) msg_header_pane_t

0xb58e,	// (0x000967a8) msg_body_pane_g1

0x0356,	// (0x0008b570) msg_body_pane_t1_ParamLimits

0x0356,	// (0x0008b570) msg_body_pane_t1

0x0387,	// (0x0008b5a1) msg_body_pane_t2_ParamLimits

0x0387,	// (0x0008b5a1) msg_body_pane_t2

0x0399,	// (0x0008b5b3) msg_body_pane_t3_ParamLimits

0x0399,	// (0x0008b5b3) msg_body_pane_t3

0x0002,

0xf497,	// (0x0009a6b1) msg_body_pane_t_ParamLimits

0xf497,	// (0x0009a6b1) msg_body_pane_t

0x38b3,	// (0x0008eacd) main_viewer_pane_g1_ParamLimits

0x38b3,	// (0x0008eacd) main_viewer_pane_g1

0x38c1,	// (0x0008eadb) main_viewer_pane_g2_ParamLimits

0x38c1,	// (0x0008eadb) main_viewer_pane_g2

0x38cf,	// (0x0008eae9) main_viewer_pane_g3_ParamLimits

0x38cf,	// (0x0008eae9) main_viewer_pane_g3

0x38de,	// (0x0008eaf8) main_viewer_pane_g4_ParamLimits

0x38de,	// (0x0008eaf8) main_viewer_pane_g4

0x9dc5,	// (0x00094fdf) main_viewer_pane_g5_ParamLimits

0x9dc5,	// (0x00094fdf) main_viewer_pane_g5

0x9dc5,	// (0x00094fdf) main_viewer_pane_g7_ParamLimits

0x9dc5,	// (0x00094fdf) main_viewer_pane_g7

0x9dd7,	// (0x00094ff1) main_viewer_pane_g8_ParamLimits

0x9dd7,	// (0x00094ff1) main_viewer_pane_g8

0x0007,

0xf4a7,	// (0x0009a6c1) main_viewer_pane_g_ParamLimits

0xf4a7,	// (0x0009a6c1) main_viewer_pane_g

0xb596,	// (0x000967b0) viewer_content_pane_ParamLimits

0xb596,	// (0x000967b0) viewer_content_pane

0x391a,	// (0x0008eb34) main_postcard_pane_g1_ParamLimits

0x391a,	// (0x0008eb34) main_postcard_pane_g1

0x3930,	// (0x0008eb4a) main_postcard_pane_g2_ParamLimits

0x3930,	// (0x0008eb4a) main_postcard_pane_g2

0x3946,	// (0x0008eb60) main_postcard_pane_g3_ParamLimits

0x3946,	// (0x0008eb60) main_postcard_pane_g3

0x0005,

0xf4b8,	// (0x0009a6d2) main_postcard_pane_g_ParamLimits

0xf4b8,	// (0x0009a6d2) main_postcard_pane_g

0x395d,	// (0x0008eb77) main_postcard_pane_g4

0xc8b9,	// (0x00097ad3) smil_status_volume_pane_g2

0x39a0,	// (0x0008ebba) postcard_pane_ParamLimits

0x39a0,	// (0x0008ebba) postcard_pane

0xb5a4,	// (0x000967be) postcard_pane_g1_ParamLimits

0xb5a4,	// (0x000967be) postcard_pane_g1

0x39e2,	// (0x0008ebfc) postcard_pane_g2_ParamLimits

0x39e2,	// (0x0008ebfc) postcard_pane_g2

0x39ee,	// (0x0008ec08) postcard_pane_g3_ParamLimits

0x39ee,	// (0x0008ec08) postcard_pane_g3

0xb5b2,	// (0x000967cc) postcard_pane_g4_ParamLimits

0xb5b2,	// (0x000967cc) postcard_pane_g4

0x39fa,	// (0x0008ec14) postcard_pane_g5_ParamLimits

0x39fa,	// (0x0008ec14) postcard_pane_g5

0x3a0f,	// (0x0008ec29) postcard_pane_g6_ParamLimits

0x3a0f,	// (0x0008ec29) postcard_pane_g6

0xb5a4,	// (0x000967be) postcard_pane_g7_ParamLimits

0xb5a4,	// (0x000967be) postcard_pane_g7

0x0006,

0xf4c5,	// (0x0009a6df) postcard_pane_g_ParamLimits

0xf4c5,	// (0x0009a6df) postcard_pane_g

0x3a23,	// (0x0008ec3d) main_mp2_pane_g1_ParamLimits

0x3a23,	// (0x0008ec3d) main_mp2_pane_g1

0x3a2f,	// (0x0008ec49) main_mp2_pane_g2_ParamLimits

0x3a2f,	// (0x0008ec49) main_mp2_pane_g2

0x3a3b,	// (0x0008ec55) main_mp2_pane_g3_ParamLimits

0x3a3b,	// (0x0008ec55) main_mp2_pane_g3

0x0002,

0xf4d4,	// (0x0009a6ee) main_mp2_pane_g_ParamLimits

0xf4d4,	// (0x0009a6ee) main_mp2_pane_g

0x3a47,	// (0x0008ec61) main_mp2_pane_t1_ParamLimits

0x3a47,	// (0x0008ec61) main_mp2_pane_t1

0x3a5c,	// (0x0008ec76) main_mp2_pane_t2_ParamLimits

0x3a5c,	// (0x0008ec76) main_mp2_pane_t2

0x3a6e,	// (0x0008ec88) main_mp2_pane_t3_ParamLimits

0x3a6e,	// (0x0008ec88) main_mp2_pane_t3

0x0002,

0xf4db,	// (0x0009a6f5) main_mp2_pane_t_ParamLimits

0xf4db,	// (0x0009a6f5) main_mp2_pane_t

0xb5c0,	// (0x000967da) pec_content_pane_ParamLimits

0xb5c0,	// (0x000967da) pec_content_pane

0xaad6,	// (0x00095cf0) scroll_pane_cp015

0xb5d2,	// (0x000967ec) pec_attribute_pane_ParamLimits

0xb5d2,	// (0x000967ec) pec_attribute_pane

0x3a80,	// (0x0008ec9a) pec_content_pane_g1_ParamLimits

0x3a80,	// (0x0008ec9a) pec_content_pane_g1

0xb5e2,	// (0x000967fc) pec_content_pane_t1_ParamLimits

0xb5e2,	// (0x000967fc) pec_content_pane_t1

0xb5f4,	// (0x0009680e) pec_content_pane_t2_ParamLimits

0xb5f4,	// (0x0009680e) pec_content_pane_t2

0x0001,

0xf4e2,	// (0x0009a6fc) pec_content_pane_t_ParamLimits

0xf4e2,	// (0x0009a6fc) pec_content_pane_t

0x3a8c,	// (0x0008eca6) list_single_graphic_pane_cp01_ParamLimits

0x3a8c,	// (0x0008eca6) list_single_graphic_pane_cp01

0xa682,	// (0x0009589c) bg_popup_sub_pane_cp04

0xb606,	// (0x00096820) popup_mup_playback_window_g1

0xb612,	// (0x0009682c) popup_mup_playback_window_t1

0xb627,	// (0x00096841) popup_mup_playback_window_t2

0x0001,

0xf4e7,	// (0x0009a701) popup_mup_playback_window_t

0xb65e,	// (0x00096878) main_image_pane_g1_ParamLimits

0xb65e,	// (0x00096878) main_image_pane_g1

0xb6a1,	// (0x000968bb) scroll_pane_cp018_ParamLimits

0xb6a1,	// (0x000968bb) scroll_pane_cp018

0xb6b9,	// (0x000968d3) scroll_pane_cp016_ParamLimits

0xb6b9,	// (0x000968d3) scroll_pane_cp016

0x3b5b,	// (0x0008ed75) smil2_image_pane_ParamLimits

0x3b5b,	// (0x0008ed75) smil2_image_pane

0x3b8f,	// (0x0008eda9) smil2_root_pane_ParamLimits

0x3b8f,	// (0x0008eda9) smil2_root_pane

0x3bc7,	// (0x0008ede1) smil2_text_pane_ParamLimits

0x3bc7,	// (0x0008ede1) smil2_text_pane

0x9bba,	// (0x00094dd4) bg_list_pane_cp06

0xb6f5,	// (0x0009690f) grid_radio_pane

0x9bba,	// (0x00094dd4) bg_popup_window_pane_cp06

0xb6fd,	// (0x00096917) main_fmradio_pane_t1

0xb01b,	// (0x00096235) heading_pane_cp04

0xb70b,	// (0x00096925) main_fmradio_pane_t2

0xc6ef,	// (0x00097909) popup_cale_lunar_info_window_g1

0xb719,	// (0x00096933) main_fmradio_pane_t3

0xc6f7,	// (0x00097911) popup_cale_lunar_info_window_g2

0xb727,	// (0x00096941) main_fmradio_pane_t4

0x0001,

0xb735,	// (0x0009694f) main_fmradio_pane_t5

0x0004,

0xf5c2,	// (0x0009a7dc) popup_cale_lunar_info_window_g

0xf4fc,	// (0x0009a716) main_fmradio_pane_t

0xb743,	// (0x0009695d) wait_bar_pane_cp03

0xb74b,	// (0x00096965) cell_fmradio_pane_ParamLimits

0xb74b,	// (0x00096965) cell_fmradio_pane

0xb5a4,	// (0x000967be) cell_fmradio_pane_g1_ParamLimits

0xb5a4,	// (0x000967be) cell_fmradio_pane_g1

0x9bba,	// (0x00094dd4) grid_highlight_pane_cp011

0xb75e,	// (0x00096978) poc_content_pane_ParamLimits

0xb75e,	// (0x00096978) poc_content_pane

0xb770,	// (0x0009698a) scroll_pane_cp019

0x3c47,	// (0x0008ee61) popup_call_poc_act_window_ParamLimits

0x3c47,	// (0x0008ee61) popup_call_poc_act_window

0x3c6b,	// (0x0008ee85) popup_call_poc_inact_window_ParamLimits

0x3c6b,	// (0x0008ee85) popup_call_poc_inact_window

0xf599,	// (0x0009a7b3) bg_popup_call_poc_act_pane_g

0xc667,	// (0x00097881) bg_popup_call_poc_inact_pane_g1

0xc66f,	// (0x00097889) bg_popup_call_poc_inact_pane_g2

0xb778,	// (0x00096992) popup_call_poc_act_window_g2

0xc677,	// (0x00097891) bg_popup_call_poc_inact_pane_g3

0xc67f,	// (0x00097899) bg_popup_call_poc_inact_pane_g4

0xc687,	// (0x000978a1) bg_popup_call_poc_inact_pane_g5

0xb780,	// (0x0009699a) popup_call_poc_act_window_t1_ParamLimits

0xb780,	// (0x0009699a) popup_call_poc_act_window_t1

0xb7a8,	// (0x000969c2) popup_call_poc_act_window_t2_ParamLimits

0xb7a8,	// (0x000969c2) popup_call_poc_act_window_t2

0xb7d0,	// (0x000969ea) popup_call_poc_act_window_t3_ParamLimits

0xb7d0,	// (0x000969ea) popup_call_poc_act_window_t3

0xb7f8,	// (0x00096a12) popup_call_poc_act_window_t4_ParamLimits

0xb7f8,	// (0x00096a12) popup_call_poc_act_window_t4

0x0003,

0xf507,	// (0x0009a721) popup_call_poc_act_window_t_ParamLimits

0xf507,	// (0x0009a721) popup_call_poc_act_window_t

0xc68f,	// (0x000978a9) bg_popup_call_poc_inact_pane_g6

0xc697,	// (0x000978b1) bg_popup_call_poc_inact_pane_g7

0xc69f,	// (0x000978b9) bg_popup_call_poc_inact_pane_g8

0xb80a,	// (0x00096a24) popup_call_poc_inact_window_g2

0xc6a7,	// (0x000978c1) bg_popup_call_poc_inact_pane_g9

0x0008,

0xf586,	// (0x0009a7a0) bg_popup_call_poc_inact_pane_g

0xb812,	// (0x00096a2c) popup_call_poc_inact_window_t1_ParamLimits

0xb812,	// (0x00096a2c) popup_call_poc_inact_window_t1

0xb827,	// (0x00096a41) popup_call_poc_inact_window_t2_ParamLimits

0xb827,	// (0x00096a41) popup_call_poc_inact_window_t2

0xb83c,	// (0x00096a56) popup_call_poc_inact_window_t3_ParamLimits

0xb83c,	// (0x00096a56) popup_call_poc_inact_window_t3

0x0002,

0xf510,	// (0x0009a72a) popup_call_poc_inact_window_t_ParamLimits

0xf510,	// (0x0009a72a) popup_call_poc_inact_window_t

0xc82c,	// (0x00097a46) context_pane_ParamLimits

0x448c,	// (0x0008f6a6) signal_pane_ParamLimits

0xb402,	// (0x0009661c) main_call2_pane

0x9e1c,	// (0x00095036) popup_phob_thumbnail2_window_ParamLimits

0x9e1c,	// (0x00095036) popup_phob_thumbnail2_window

0x9dad,	// (0x00094fc7) aid_hotspot_pointer_arrow_pane

0x9db5,	// (0x00094fcf) aid_hotspot_pointer_hand_pane

0x3fb6,	// (0x0008f1d0) phob_pre_status_pane_g5

0x1d6d,	// (0x0008cf87) cams_zoom_pane_ParamLimits

0x1d7c,	// (0x0008cf96) image_vga_pane_ParamLimits

0x1d96,	// (0x0008cfb0) main_camera_pane_g1_ParamLimits

0x1da8,	// (0x0008cfc2) main_camera_pane_g2_ParamLimits

0x1db8,	// (0x0008cfd2) main_camera_pane_g3_ParamLimits

0x1dca,	// (0x0008cfe4) main_camera_pane_g4_ParamLimits

0x1ddc,	// (0x0008cff6) main_camera_pane_g5_ParamLimits

0x1dee,	// (0x0008d008) main_camera_pane_g6_ParamLimits

0x1e00,	// (0x0008d01a) main_camera_pane_g7_ParamLimits

0xf20f,	// (0x0009a429) main_camera_pane_g_ParamLimits

0x1e12,	// (0x0008d02c) main_camera_pane_t1_ParamLimits

0x1e28,	// (0x0008d042) main_camera_pane_t2_ParamLimits

0xf220,	// (0x0009a43a) main_camera_pane_t_ParamLimits

0xa682,	// (0x0009589c) bg_popup_preview_window_pane_cp01_ParamLimits

0xa682,	// (0x0009589c) bg_popup_preview_window_pane_cp01

0xb851,	// (0x00096a6b) popup_phob_thumbnail2_window_g1_ParamLimits

0xb851,	// (0x00096a6b) popup_phob_thumbnail2_window_g1

0x9bba,	// (0x00094dd4) call2_cli_visual_pane

0x3c9f,	// (0x0008eeb9) popup_call2_audio_conf_window_ParamLimits

0x3c9f,	// (0x0008eeb9) popup_call2_audio_conf_window

0x3cbf,	// (0x0008eed9) popup_call2_audio_first_window_ParamLimits

0x3cbf,	// (0x0008eed9) popup_call2_audio_first_window

0x3d55,	// (0x0008ef6f) popup_call2_audio_in_window_ParamLimits

0x3d55,	// (0x0008ef6f) popup_call2_audio_in_window

0x3d9d,	// (0x0008efb7) popup_call2_audio_out_window_ParamLimits

0x3d9d,	// (0x0008efb7) popup_call2_audio_out_window

0x3e07,	// (0x0008f021) popup_call2_audio_second_window_ParamLimits

0x3e07,	// (0x0008f021) popup_call2_audio_second_window

0x3e6d,	// (0x0008f087) popup_call2_audio_wait_window_ParamLimits

0x3e6d,	// (0x0008f087) popup_call2_audio_wait_window

0x9bba,	// (0x00094dd4) bg_popup_call2_act_pane_cp03

0xa664,	// (0x0009587e) list_conf_pane_cp

0xb85d,	// (0x00096a77) popup_call2_audio_conf_window_t1

0xb86b,	// (0x00096a85) list_single_graphic_popup_conf2_pane_ParamLimits

0xb86b,	// (0x00096a85) list_single_graphic_popup_conf2_pane

0xb0af,	// (0x000962c9) list_highlight_pane_cp04

0xb87e,	// (0x00096a98) list_single_graphic_popup_conf2_pane_g1

0xb0c0,	// (0x000962da) list_single_graphic_popup_conf2_pane_g2

0x0001,

0xf517,	// (0x0009a731) list_single_graphic_popup_conf2_pane_g

0xb888,	// (0x00096aa2) list_single_graphic_popup_conf2_pane_t1

0xb896,	// (0x00096ab0) bg_popup_call2_act_pane_cp01_ParamLimits

0xb896,	// (0x00096ab0) bg_popup_call2_act_pane_cp01

0xb920,	// (0x00096b3a) call_type_pane_cp05_ParamLimits

0xb920,	// (0x00096b3a) call_type_pane_cp05

0xb974,	// (0x00096b8e) popup_call2_audio_second_window_g1_ParamLimits

0xb974,	// (0x00096b8e) popup_call2_audio_second_window_g1

0xb9c8,	// (0x00096be2) popup_call2_audio_second_window_g2_ParamLimits

0xb9c8,	// (0x00096be2) popup_call2_audio_second_window_g2

0x0002,

0xf51c,	// (0x0009a736) popup_call2_audio_second_window_g_ParamLimits

0xf51c,	// (0x0009a736) popup_call2_audio_second_window_g

0xba2d,	// (0x00096c47) popup_call2_audio_second_window_t1_ParamLimits

0xba2d,	// (0x00096c47) popup_call2_audio_second_window_t1

0xbae8,	// (0x00096d02) popup_call2_audio_second_window_t2_ParamLimits

0xbae8,	// (0x00096d02) popup_call2_audio_second_window_t2

0xbb3b,	// (0x00096d55) popup_call2_audio_second_window_t3_ParamLimits

0xbb3b,	// (0x00096d55) popup_call2_audio_second_window_t3

0x0003,

0xf523,	// (0x0009a73d) popup_call2_audio_second_window_t_ParamLimits

0xf523,	// (0x0009a73d) popup_call2_audio_second_window_t

0x9bba,	// (0x00094dd4) bg_popup_call2_in_pane_cp02

0x9bc4,	// (0x00094dde) call_type_pane_cp04

0x9bcc,	// (0x00094de6) popup_call2_audio_wait_window_g1

0x9bd4,	// (0x00094dee) popup_call2_audio_wait_window_g2

0x0001,

0xf0fc,	// (0x0009a316) popup_call2_audio_wait_window_g

0x9bdc,	// (0x00094df6) popup_call2_audio_wait_window_t3

0xbc2e,	// (0x00096e48) bg_popup_call2_act_pane_ParamLimits

0xbc2e,	// (0x00096e48) bg_popup_call2_act_pane

0xbcee,	// (0x00096f08) call_type_pane_cp03_ParamLimits

0xbcee,	// (0x00096f08) call_type_pane_cp03

0xbd52,	// (0x00096f6c) popup_call2_audio_first_window_g1_ParamLimits

0xbd52,	// (0x00096f6c) popup_call2_audio_first_window_g1

0xbdc2,	// (0x00096fdc) popup_call2_audio_first_window_g2_ParamLimits

0xbdc2,	// (0x00096fdc) popup_call2_audio_first_window_g2

0xb4c1,	// (0x000966db) popup_call2_audio_first_window_g3_ParamLimits

0xb4c1,	// (0x000966db) popup_call2_audio_first_window_g3

0x0004,

0xf52c,	// (0x0009a746) popup_call2_audio_first_window_g_ParamLimits

0xf52c,	// (0x0009a746) popup_call2_audio_first_window_g

0xbea0,	// (0x000970ba) popup_call2_audio_first_window_t1_ParamLimits

0xbea0,	// (0x000970ba) popup_call2_audio_first_window_t1

0xbfaf,	// (0x000971c9) popup_call2_audio_first_window_t4_ParamLimits

0xbfaf,	// (0x000971c9) popup_call2_audio_first_window_t4

0xc092,	// (0x000972ac) popup_call2_audio_first_window_t5_ParamLimits

0xc092,	// (0x000972ac) popup_call2_audio_first_window_t5

0x0003,

0xf537,	// (0x0009a751) popup_call2_audio_first_window_t_ParamLimits

0xf537,	// (0x0009a751) popup_call2_audio_first_window_t

0xa67a,	// (0x00095894) bg_popup_call2_act_pane_g1

0xc6ff,	// (0x00097919) popup_cale_lunar_info_window_t1

0xc70d,	// (0x00097927) popup_cale_lunar_info_window_t2

0xc71b,	// (0x00097935) popup_cale_lunar_info_window_t3

0x9bba,	// (0x00094dd4) bg_popup_call2_bubble_pane

0xc193,	// (0x000973ad) bg_popup_call2_in_pane_cp01_ParamLimits

0xc193,	// (0x000973ad) bg_popup_call2_in_pane_cp01

0x9896,	// (0x00094ab0) call_type_pane_cp02

0xc1db,	// (0x000973f5) popup_call2_audio_out_window_g1_ParamLimits

0xc1db,	// (0x000973f5) popup_call2_audio_out_window_g1

0xc207,	// (0x00097421) popup_call2_audio_out_window_g2_ParamLimits

0xc207,	// (0x00097421) popup_call2_audio_out_window_g2

0xc22f,	// (0x00097449) popup_call2_audio_out_window_g3_ParamLimits

0xc22f,	// (0x00097449) popup_call2_audio_out_window_g3

0x0003,

0xf540,	// (0x0009a75a) popup_call2_audio_out_window_g_ParamLimits

0xf540,	// (0x0009a75a) popup_call2_audio_out_window_g

0xc26a,	// (0x00097484) popup_call2_audio_out_window_t1_ParamLimits

0xc26a,	// (0x00097484) popup_call2_audio_out_window_t1

0xc2c9,	// (0x000974e3) popup_call2_audio_out_window_t2_ParamLimits

0xc2c9,	// (0x000974e3) popup_call2_audio_out_window_t2

0xc31d,	// (0x00097537) popup_call2_audio_out_window_t3_ParamLimits

0xc31d,	// (0x00097537) popup_call2_audio_out_window_t3

0xc333,	// (0x0009754d) popup_call2_audio_out_window_t4_ParamLimits

0xc333,	// (0x0009754d) popup_call2_audio_out_window_t4

0xc349,	// (0x00097563) popup_call2_audio_out_window_t5_ParamLimits

0xc349,	// (0x00097563) popup_call2_audio_out_window_t5

0x0005,

0xf549,	// (0x0009a763) popup_call2_audio_out_window_t_ParamLimits

0xf549,	// (0x0009a763) popup_call2_audio_out_window_t

0xc3ad,	// (0x000975c7) bg_popup_call2_in_pane_ParamLimits

0xc3ad,	// (0x000975c7) bg_popup_call2_in_pane

0xc409,	// (0x00097623) popup_call2_audio_in_window_g1_ParamLimits

0xc409,	// (0x00097623) popup_call2_audio_in_window_g1

0xc441,	// (0x0009765b) popup_call2_audio_in_window_g2_ParamLimits

0xc441,	// (0x0009765b) popup_call2_audio_in_window_g2

0xc479,	// (0x00097693) popup_call2_audio_in_window_g3_ParamLimits

0xc479,	// (0x00097693) popup_call2_audio_in_window_g3

0x0003,

0xf556,	// (0x0009a770) popup_call2_audio_in_window_g_ParamLimits

0xf556,	// (0x0009a770) popup_call2_audio_in_window_g

0xc4d1,	// (0x000976eb) popup_call2_audio_in_window_t1_ParamLimits

0xc4d1,	// (0x000976eb) popup_call2_audio_in_window_t1

0xc551,	// (0x0009776b) popup_call2_audio_in_window_t2_ParamLimits

0xc551,	// (0x0009776b) popup_call2_audio_in_window_t2

0xc5d1,	// (0x000977eb) popup_call2_audio_in_window_t3_ParamLimits

0xc5d1,	// (0x000977eb) popup_call2_audio_in_window_t3

0xc5eb,	// (0x00097805) popup_call2_audio_in_window_t4_ParamLimits

0xc5eb,	// (0x00097805) popup_call2_audio_in_window_t4

0xc5fd,	// (0x00097817) popup_call2_audio_in_window_t5_ParamLimits

0xc5fd,	// (0x00097817) popup_call2_audio_in_window_t5

0xc612,	// (0x0009782c) popup_call2_audio_in_window_t6_ParamLimits

0xc612,	// (0x0009782c) popup_call2_audio_in_window_t6

0x0005,

0xf55f,	// (0x0009a779) popup_call2_audio_in_window_t_ParamLimits

0xf55f,	// (0x0009a779) popup_call2_audio_in_window_t

0xa67a,	// (0x00095894) bg_popup_call2_in_pane_g1

0xc729,	// (0x00097943) popup_cale_lunar_info_window_t4

0x0003,

0xf5c7,	// (0x0009a7e1) popup_cale_lunar_info_window_t

0xa682,	// (0x0009589c) bg_popup_call2_rect_pane_ParamLimits

0xa682,	// (0x0009589c) bg_popup_call2_rect_pane

0x9bba,	// (0x00094dd4) call2_cli_visual_graphic_pane

0x9bba,	// (0x00094dd4) call2_cli_visual_text_pane

0x9e43,	// (0x0009505d) smil_status_volume_pane_g3

0x0002,

0xa7bb,	// (0x000959d5) call2_cli_visual_graphic_pane_g1

0xa7bb,	// (0x000959d5) call2_cli_visual_graphic_pane_g2

0xa7bb,	// (0x000959d5) call2_cli_visual_graphic_pane_g3

0x0002,

0xf56c,	// (0x0009a786) call2_cli_visual_graphic_pane_g

0xc627,	// (0x00097841) bg_popup_call2_rect_pane_g1

0xa859,	// (0x00095a73) bg_popup_call2_rect_pane_g2

0xc62f,	// (0x00097849) bg_popup_call2_rect_pane_g3

0xc637,	// (0x00097851) bg_popup_call2_rect_pane_g4

0xc63f,	// (0x00097859) bg_popup_call2_rect_pane_g5

0xc647,	// (0x00097861) bg_popup_call2_rect_pane_g6

0xc64f,	// (0x00097869) bg_popup_call2_rect_pane_g7

0xc657,	// (0x00097871) bg_popup_call2_rect_pane_g8

0xc65f,	// (0x00097879) bg_popup_call2_rect_pane_g9

0x0008,

0xf573,	// (0x0009a78d) bg_popup_call2_rect_pane_g

0xc667,	// (0x00097881) bg_popup_call2_bubble_pane_g1

0xc66f,	// (0x00097889) bg_popup_call2_bubble_pane_g2

0xc677,	// (0x00097891) bg_popup_call2_bubble_pane_g3

0xc67f,	// (0x00097899) bg_popup_call2_bubble_pane_g4

0xc687,	// (0x000978a1) bg_popup_call2_bubble_pane_g5

0xc68f,	// (0x000978a9) bg_popup_call2_bubble_pane_g6

0xc697,	// (0x000978b1) bg_popup_call2_bubble_pane_g7

0xc69f,	// (0x000978b9) bg_popup_call2_bubble_pane_g8

0xc6a7,	// (0x000978c1) bg_popup_call2_bubble_pane_g9

0x0008,

0xf586,	// (0x0009a7a0) bg_popup_call2_bubble_pane_g

0x16c2,	// (0x0008c8dc) aid_cale_week_size_cell_pane

0x1e40,	// (0x0008d05a) aid_cams_cif_uncrop_pane_ParamLimits

0x1e40,	// (0x0008d05a) aid_cams_cif_uncrop_pane

0x1ff5,	// (0x0008d20f) aid_cams_size_cell_ParamLimits

0x1ff5,	// (0x0008d20f) aid_cams_size_cell

0x2009,	// (0x0008d223) grid_cams_pane_ParamLimits

0x2023,	// (0x0008d23d) linegrid_cams_pane_ParamLimits

0x2109,	// (0x0008d323) call_video_pane_t1

0x2127,	// (0x0008d341) call_video_pane_t2

0x0001,

0xf273,	// (0x0009a48d) call_video_pane_t

0x2556,	// (0x0008d770) aid_cale_month_size_cell_pane_ParamLimits

0x2556,	// (0x0008d770) aid_cale_month_size_cell_pane

0xf610,	// (0x0009a82a) smil_status_volume_pane_g

0x9e50,	// (0x0009506a) volume_smil_pane_ParamLimits

0x9751,	// (0x0009496b) aid_popup2_width_pane

0x1619,	// (0x0008c833) cell_qdial_pane_g4_ParamLimits

0x1619,	// (0x0008c833) cell_qdial_pane_g4

0x3351,	// (0x0008e56b) aid_blid_cardinal_pane_ParamLimits

0x335d,	// (0x0008e577) aid_blid_destination_pane_ParamLimits

0x335d,	// (0x0008e577) aid_blid_destination_pane

0xa682,	// (0x0009589c) bg_popup_call_poc_act_pane_ParamLimits

0xa682,	// (0x0009589c) bg_popup_call_poc_act_pane

0xa682,	// (0x0009589c) bg_popup_call_poc_inact_pane_ParamLimits

0xa682,	// (0x0009589c) bg_popup_call_poc_inact_pane

0xc6af,	// (0x000978c9) bg_popup_call_poc_act_pane_g1

0xc6b7,	// (0x000978d1) bg_popup_call_poc_act_pane_g2

0xc6bf,	// (0x000978d9) bg_popup_call_poc_act_pane_g3

0xc67f,	// (0x00097899) bg_popup_call_poc_act_pane_g4

0xc687,	// (0x000978a1) bg_popup_call_poc_act_pane_g5

0xc6c7,	// (0x000978e1) bg_popup_call_poc_act_pane_g6

0xc697,	// (0x000978b1) bg_popup_call_poc_act_pane_g7

0xc6cf,	// (0x000978e9) bg_popup_call_poc_act_pane_g8

0x9bba,	// (0x00094dd4) main_usb_pane

0x9df7,	// (0x00095011) popup_cale_lunar_info_window

0x23f1,	// (0x0008d60b) im_reading_pane_t1_ParamLimits

0xaa2e,	// (0x00095c48) list_im_pane_ParamLimits

0xaa3f,	// (0x00095c59) scroll_pane_cp07_ParamLimits

0x9bba,	// (0x00094dd4) grid_highlight_pane_cp012

0xa682,	// (0x0009589c) mup_scale_pane_ParamLimits

0xb5a4,	// (0x000967be) main_usb_pane_g1_ParamLimits

0xb5a4,	// (0x000967be) main_usb_pane_g1

0x3ecb,	// (0x0008f0e5) main_usb_pane_g2_ParamLimits

0x3ecb,	// (0x0008f0e5) main_usb_pane_g2

0x0001,

0xf5b0,	// (0x0009a7ca) main_usb_pane_g_ParamLimits

0xf5b0,	// (0x0009a7ca) main_usb_pane_g

0x3ee1,	// (0x0008f0fb) main_usb_pane_t1_ParamLimits

0x3ee1,	// (0x0008f0fb) main_usb_pane_t1

0x3ef3,	// (0x0008f10d) main_usb_pane_t2_ParamLimits

0x3ef3,	// (0x0008f10d) main_usb_pane_t2

0x3f05,	// (0x0008f11f) main_usb_pane_t3_ParamLimits

0x3f05,	// (0x0008f11f) main_usb_pane_t3

0x3f17,	// (0x0008f131) main_usb_pane_t4_ParamLimits

0x3f17,	// (0x0008f131) main_usb_pane_t4

0x3f29,	// (0x0008f143) main_usb_pane_t5_ParamLimits

0x3f29,	// (0x0008f143) main_usb_pane_t5

0x3f3b,	// (0x0008f155) main_usb_pane_t6_ParamLimits

0x3f3b,	// (0x0008f155) main_usb_pane_t6

0x0005,

0xf5b5,	// (0x0009a7cf) main_usb_pane_t_ParamLimits

0x32fe,	// (0x0008e518) aid_text_placing

0x3307,	// (0x0008e521) main_location2_pane_t1_ParamLimits

0x3319,	// (0x0008e533) main_location2_pane_t2_ParamLimits

0x332b,	// (0x0008e545) main_location2_pane_t3_ParamLimits

0x333f,	// (0x0008e559) main_location2_pane_t4_ParamLimits

0x333f,	// (0x0008e559) main_location2_pane_t4

0xf3d4,	// (0x0009a5ee) main_location2_pane_t_ParamLimits

0xa6be,	// (0x000958d8) find_pinb_pane_g2_ParamLimits

0xa6be,	// (0x000958d8) find_pinb_pane_g2

0x0001,

0xf122,	// (0x0009a33c) find_pinb_pane_g_ParamLimits

0xf122,	// (0x0009a33c) find_pinb_pane_g

0xa6ca,	// (0x000958e4) find_pinb_pane_t1_ParamLimits

0xa6dc,	// (0x000958f6) find_pinb_pane_t2_ParamLimits

0xf127,	// (0x0009a341) find_pinb_pane_t_ParamLimits

0x9bba,	// (0x00094dd4) main_call3_pane

0x2a39,	// (0x0008dc53) cale_month_day_heading_pane_t1_ParamLimits

0x2abf,	// (0x0008dcd9) cale_month_day_heading_pane_t2_ParamLimits

0x2b50,	// (0x0008dd6a) cale_month_day_heading_pane_t3_ParamLimits

0x2be1,	// (0x0008ddfb) cale_month_day_heading_pane_t4_ParamLimits

0x2c7a,	// (0x0008de94) cale_month_day_heading_pane_t5_ParamLimits

0x2d1b,	// (0x0008df35) cale_month_day_heading_pane_t6_ParamLimits

0x2dbc,	// (0x0008dfd6) cale_month_day_heading_pane_t7_ParamLimits

0xf2ab,	// (0x0009a4c5) cale_month_day_heading_pane_t_ParamLimits

0xac89,	// (0x00095ea3) smil_status_volume_pane

0x39be,	// (0x0008ebd8) postcard_address_pane_ParamLimits

0x39be,	// (0x0008ebd8) postcard_address_pane

0x39d0,	// (0x0008ebea) postcard_message_pane_ParamLimits

0x39d0,	// (0x0008ebea) postcard_message_pane

0x3ea7,	// (0x0008f0c1) call2_cli_visual_pane_t1_ParamLimits

0x3ea7,	// (0x0008f0c1) call2_cli_visual_pane_t1

0x46bb,	// (0x0008f8d5) postcard_message_pane_t1_ParamLimits

0x46bb,	// (0x0008f8d5) postcard_message_pane_t1

0x46a4,	// (0x0008f8be) postcard_address_pane_t1_ParamLimits

0x46a4,	// (0x0008f8be) postcard_address_pane_t1

0x4690,	// (0x0008f8aa) popup_call3_audio_in_window_ParamLimits

0x4690,	// (0x0008f8aa) popup_call3_audio_in_window

0x451d,	// (0x0008f737) bg_popup_call3_in_pane_ParamLimits

0x451d,	// (0x0008f737) bg_popup_call3_in_pane

0x4591,	// (0x0008f7ab) popup_call3_audio_in_window_g1_ParamLimits

0x4591,	// (0x0008f7ab) popup_call3_audio_in_window_g1

0x45b1,	// (0x0008f7cb) popup_call3_audio_in_window_g2_ParamLimits

0x45b1,	// (0x0008f7cb) popup_call3_audio_in_window_g2

0x45d1,	// (0x0008f7eb) popup_call3_audio_in_window_g3_ParamLimits

0x45d1,	// (0x0008f7eb) popup_call3_audio_in_window_g3

0x0003,

0xf617,	// (0x0009a831) popup_call3_audio_in_window_g_ParamLimits

0xf617,	// (0x0009a831) popup_call3_audio_in_window_g

0x4602,	// (0x0008f81c) popup_call3_audio_in_window_t1_ParamLimits

0x4602,	// (0x0008f81c) popup_call3_audio_in_window_t1

0x4640,	// (0x0008f85a) popup_call3_audio_in_window_t2_ParamLimits

0x4640,	// (0x0008f85a) popup_call3_audio_in_window_t2

0x467e,	// (0x0008f898) popup_call3_audio_in_window_t3_ParamLimits

0x467e,	// (0x0008f898) popup_call3_audio_in_window_t3

0x0002,

0xf620,	// (0x0009a83a) popup_call3_audio_in_window_t_ParamLimits

0xf620,	// (0x0009a83a) popup_call3_audio_in_window_t

0xb402,	// (0x0009661c) bg_popup_call3_rect_pane

0xc627,	// (0x00097841) bg_popup_call3_rect_pane_g1

0xa859,	// (0x00095a73) bg_popup_call3_rect_pane_g2

0xc62f,	// (0x00097849) bg_popup_call3_rect_pane_g3

0xc637,	// (0x00097851) bg_popup_call3_rect_pane_g4

0xc63f,	// (0x00097859) bg_popup_call3_rect_pane_g5

0xc647,	// (0x00097861) bg_popup_call3_rect_pane_g6

0xc64f,	// (0x00097869) bg_popup_call3_rect_pane_g7

0x3645,	// (0x0008e85f) mup_visualizer_osc_pane

0xb4cf,	// (0x000966e9) mup_visualizer_spec_pane

0x454d,	// (0x0008f767) call3_video_qcif_pane_ParamLimits

0x454d,	// (0x0008f767) call3_video_qcif_pane

0x455e,	// (0x0008f778) call3_video_qcif_uncrop_pane_ParamLimits

0x455e,	// (0x0008f778) call3_video_qcif_uncrop_pane

0x456c,	// (0x0008f786) call3_video_subqcif_pane_ParamLimits

0x456c,	// (0x0008f786) call3_video_subqcif_pane

0x4580,	// (0x0008f79a) call3_video_subqcif_uncrop_pane_ParamLimits

0x4580,	// (0x0008f79a) call3_video_subqcif_uncrop_pane

0x45f1,	// (0x0008f80b) popup_call3_audio_in_window_g4_ParamLimits

0x45f1,	// (0x0008f80b) popup_call3_audio_in_window_g4

0x450c,	// (0x0008f726) mup_spec_half_pane

0x4515,	// (0x0008f72f) mup_spec_half_pane_cp

0xc88c,	// (0x00097aa6) mup_osc_middle_pane

0xc895,	// (0x00097aaf) mup_visualizer_osc_pane_g1

0x44ec,	// (0x0008f706) mup_spec_bar_pane_ParamLimits

0x44ec,	// (0x0008f706) mup_spec_bar_pane

0xc879,	// (0x00097a93) mup_spec_bar_pane_g1

0xc883,	// (0x00097a9d) mup_spec_bar_pane_g2

0x0001,

0xf60b,	// (0x0009a825) mup_spec_bar_pane_g

0x16c2,	// (0x0008c8dc) aid_cale_week_size_cell_pane_ParamLimits

0x16dc,	// (0x0008c8f6) bg_cale_heading_pane_ParamLimits

0xa896,	// (0x00095ab0) bg_cale_pane_cp01_ParamLimits

0x16fa,	// (0x0008c914) cale_week_corner_pane_ParamLimits

0x1719,	// (0x0008c933) cale_week_day_heading_pane_ParamLimits

0x173c,	// (0x0008c956) cale_week_scroll_pane_g1_ParamLimits

0x1755,	// (0x0008c96f) cale_week_scroll_pane_g2_ParamLimits

0x176d,	// (0x0008c987) cale_week_scroll_pane_g3_ParamLimits

0x1785,	// (0x0008c99f) cale_week_scroll_pane_g4_ParamLimits

0x179d,	// (0x0008c9b7) cale_week_scroll_pane_g5_ParamLimits

0x17b9,	// (0x0008c9d3) cale_week_scroll_pane_g6_ParamLimits

0x17d9,	// (0x0008c9f3) cale_week_scroll_pane_g7_ParamLimits

0x17f9,	// (0x0008ca13) cale_week_scroll_pane_g8_ParamLimits

0x181d,	// (0x0008ca37) cale_week_scroll_pane_g9_ParamLimits

0x1835,	// (0x0008ca4f) cale_week_scroll_pane_g10_ParamLimits

0x184d,	// (0x0008ca67) cale_week_scroll_pane_g11_ParamLimits

0x1865,	// (0x0008ca7f) cale_week_scroll_pane_g12_ParamLimits

0x187d,	// (0x0008ca97) cale_week_scroll_pane_g13_ParamLimits

0x187d,	// (0x0008ca97) cale_week_scroll_pane_g14_ParamLimits

0x187d,	// (0x0008ca97) cale_week_scroll_pane_g15_ParamLimits

0xf1b3,	// (0x0009a3cd) cale_week_scroll_pane_g_ParamLimits

0x1895,	// (0x0008caaf) cale_week_time_pane_ParamLimits

0x18b9,	// (0x0008cad3) grid_cale_week_pane_ParamLimits

0xa8b4,	// (0x00095ace) listscroll_cale_week_pane_t1

0xa8c6,	// (0x00095ae0) scroll_pane_cp08_ParamLimits

0x25b7,	// (0x0008d7d1) cale_month_corner_pane_ParamLimits

0xac5f,	// (0x00095e79) cale_month_pane_t1

0x29d7,	// (0x0008dbf1) cale_month_week_pane_ParamLimits

0x316f,	// (0x0008e389) popup_call_status_window_g1_ParamLimits

0x3183,	// (0x0008e39d) popup_call_status_window_g2_ParamLimits

0x3197,	// (0x0008e3b1) popup_call_status_window_g3_ParamLimits

0xf35b,	// (0x0009a575) popup_call_status_window_g_ParamLimits

0xb00b,	// (0x00096225) aid_call2_pane

0x0324,	// (0x0008b53e) msg_header_pane_g1

0x39be,	// (0x0008ebd8) postcard_address2_pane_ParamLimits

0x39be,	// (0x0008ebd8) postcard_address2_pane

0x39d0,	// (0x0008ebea) postcard_message2_pane_ParamLimits

0x39d0,	// (0x0008ebea) postcard_message2_pane

0x449a,	// (0x0008f6b4) message2_row_pane_ParamLimits

0x449a,	// (0x0008f6b4) message2_row_pane

0x44b9,	// (0x0008f6d3) address2_row_pane_ParamLimits

0x44b9,	// (0x0008f6d3) address2_row_pane

0xc847,	// (0x00097a61) postcard_message2_row_pane_g1

0xc84f,	// (0x00097a69) postcard_message2_row_pane_t1

0xc847,	// (0x00097a61) address2_row_pane_g1

0xc84f,	// (0x00097a69) address2_row_pane_t1

0x1cd4,	// (0x0008ceee) aid_size_cell_vorec

0x9bba,	// (0x00094dd4) main_rss_pane

0x44cc,	// (0x0008f6e6) rss_list_single_pane_ParamLimits

0x44cc,	// (0x0008f6e6) rss_list_single_pane

0xc85d,	// (0x00097a77) rss_list_single_pane_t1

0xc86b,	// (0x00097a85) rss_list_single_pane_t2

0x0001,

0xf606,	// (0x0009a820) rss_list_single_pane_t

0x9bba,	// (0x00094dd4) main_camera2_pane

0x9bba,	// (0x00094dd4) main_video2_pane

0x4734,	// (0x0008f94e) cams_zoom_pane_cp2_ParamLimits

0x4734,	// (0x0008f94e) cams_zoom_pane_cp2

0x4754,	// (0x0008f96e) image2_vga_pane_ParamLimits

0x4754,	// (0x0008f96e) image2_vga_pane

0x47a5,	// (0x0008f9bf) main_camera2_pane_g1_ParamLimits

0x47a5,	// (0x0008f9bf) main_camera2_pane_g1

0x47c5,	// (0x0008f9df) main_camera2_pane_g2_ParamLimits

0x47c5,	// (0x0008f9df) main_camera2_pane_g2

0x47e5,	// (0x0008f9ff) main_camera2_pane_g3_ParamLimits

0x47e5,	// (0x0008f9ff) main_camera2_pane_g3

0x4805,	// (0x0008fa1f) main_camera2_pane_g4_ParamLimits

0x4805,	// (0x0008fa1f) main_camera2_pane_g4

0x4825,	// (0x0008fa3f) main_camera2_pane_g5_ParamLimits

0x4825,	// (0x0008fa3f) main_camera2_pane_g5

0x4845,	// (0x0008fa5f) main_camera2_pane_g6_ParamLimits

0x4845,	// (0x0008fa5f) main_camera2_pane_g6

0x4865,	// (0x0008fa7f) main_camera2_pane_g7_ParamLimits

0x4865,	// (0x0008fa7f) main_camera2_pane_g7

0x4885,	// (0x0008fa9f) main_camera2_pane_g8_ParamLimits

0x4885,	// (0x0008fa9f) main_camera2_pane_g8

0x0008,

0xf627,	// (0x0009a841) main_camera2_pane_g_ParamLimits

0xf627,	// (0x0009a841) main_camera2_pane_g

0x48c5,	// (0x0008fadf) main_camera2_pane_t1_ParamLimits

0x48c5,	// (0x0008fadf) main_camera2_pane_t1

0x48fa,	// (0x0008fb14) main_camera2_pane_t2_ParamLimits

0x48fa,	// (0x0008fb14) main_camera2_pane_t2

0x4920,	// (0x0008fb3a) main_camera2_pane_t3_ParamLimits

0x4920,	// (0x0008fb3a) main_camera2_pane_t3

0x497e,	// (0x0008fb98) main_camera2_pane_t4_ParamLimits

0x497e,	// (0x0008fb98) main_camera2_pane_t4

0x0006,

0xf63a,	// (0x0009a854) main_camera2_pane_t_ParamLimits

0xf63a,	// (0x0009a854) main_camera2_pane_t

0x4a10,	// (0x0008fc2a) cams_zoom_pane_cp4_ParamLimits

0x4a10,	// (0x0008fc2a) cams_zoom_pane_cp4

0x4a26,	// (0x0008fc40) image2_cif_pane_ParamLimits

0x4a26,	// (0x0008fc40) image2_cif_pane

0x4a51,	// (0x0008fc6b) image2_subqcif_pane_ParamLimits

0x4a51,	// (0x0008fc6b) image2_subqcif_pane

0x4a6b,	// (0x0008fc85) main_video2_pane_g1_ParamLimits

0x4a6b,	// (0x0008fc85) main_video2_pane_g1

0x4a85,	// (0x0008fc9f) main_video2_pane_g2_ParamLimits

0x4a85,	// (0x0008fc9f) main_video2_pane_g2

0x4a9b,	// (0x0008fcb5) main_video2_pane_g3_ParamLimits

0x4a9b,	// (0x0008fcb5) main_video2_pane_g3

0x4ab1,	// (0x0008fccb) main_video2_pane_g4_ParamLimits

0x4ab1,	// (0x0008fccb) main_video2_pane_g4

0x4ac7,	// (0x0008fce1) main_video2_pane_g5_ParamLimits

0x4ac7,	// (0x0008fce1) main_video2_pane_g5

0x4add,	// (0x0008fcf7) main_video2_pane_g6_ParamLimits

0x4add,	// (0x0008fcf7) main_video2_pane_g6

0x0005,

0xf649,	// (0x0009a863) main_video2_pane_g_ParamLimits

0xf649,	// (0x0009a863) main_video2_pane_g

0x4af7,	// (0x0008fd11) main_video2_pane_t1_ParamLimits

0x4af7,	// (0x0008fd11) main_video2_pane_t1

0x4b1b,	// (0x0008fd35) main_video2_pane_t2_ParamLimits

0x4b1b,	// (0x0008fd35) main_video2_pane_t2

0x4b69,	// (0x0008fd83) main_video2_pane_t3_ParamLimits

0x4b69,	// (0x0008fd83) main_video2_pane_t3

0x0002,

0xf656,	// (0x0009a870) main_video2_pane_t_ParamLimits

0xf656,	// (0x0009a870) main_video2_pane_t

0x3ff6,	// (0x0008f210) call_muted_g2

0x0001,

0xf5f8,	// (0x0009a812) call_muted_g

0x9bba,	// (0x00094dd4) main_mup2_pane

0x4bb1,	// (0x0008fdcb) main_mup2_pane_g1_ParamLimits

0x4bb1,	// (0x0008fdcb) main_mup2_pane_g1

0x4bbd,	// (0x0008fdd7) main_mup2_pane_g2_ParamLimits

0x4bbd,	// (0x0008fdd7) main_mup2_pane_g2

0x9ebe,	// (0x000950d8) main_mup_pane_g13_cp1

0x9ec6,	// (0x000950e0) mup_volume_pane_cp1

0x4bd9,	// (0x0008fdf3) main_mup2_pane_g4_ParamLimits

0x4bd9,	// (0x0008fdf3) main_mup2_pane_g4

0x4beb,	// (0x0008fe05) main_mup2_pane_g5_ParamLimits

0x4beb,	// (0x0008fe05) main_mup2_pane_g5

0x4bfd,	// (0x0008fe17) main_mup2_pane_g6_ParamLimits

0x4bfd,	// (0x0008fe17) main_mup2_pane_g6

0x4c0f,	// (0x0008fe29) main_mup2_pane_g7_ParamLimits

0x4c0f,	// (0x0008fe29) main_mup2_pane_g7

0x0006,

0xf65d,	// (0x0009a877) main_mup2_pane_g_ParamLimits

0xf65d,	// (0x0009a877) main_mup2_pane_g

0x4c27,	// (0x0008fe41) main_mup2_pane_t1_ParamLimits

0x4c27,	// (0x0008fe41) main_mup2_pane_t1

0x4c3d,	// (0x0008fe57) main_mup2_pane_t2_ParamLimits

0x4c3d,	// (0x0008fe57) main_mup2_pane_t2

0x4c53,	// (0x0008fe6d) main_mup2_pane_t3_ParamLimits

0x4c53,	// (0x0008fe6d) main_mup2_pane_t3

0x4c69,	// (0x0008fe83) main_mup2_pane_t4_ParamLimits

0x4c69,	// (0x0008fe83) main_mup2_pane_t4

0x4c81,	// (0x0008fe9b) main_mup2_pane_t5_ParamLimits

0x4c81,	// (0x0008fe9b) main_mup2_pane_t5

0x4c99,	// (0x0008feb3) main_mup2_pane_t6_ParamLimits

0x4c99,	// (0x0008feb3) main_mup2_pane_t6

0x0005,

0xf66c,	// (0x0009a886) main_mup2_pane_t_ParamLimits

0xf66c,	// (0x0009a886) main_mup2_pane_t

0x4cc9,	// (0x0008fee3) mup2_visualizer_pane_ParamLimits

0x4cc9,	// (0x0008fee3) mup2_visualizer_pane

0x4cf7,	// (0x0008ff11) mup_progress_pane_cp_ParamLimits

0x4cf7,	// (0x0008ff11) mup_progress_pane_cp

0x9ea9,	// (0x000950c3) mup_volume_pane_cp_ParamLimits

0x9ea9,	// (0x000950c3) mup_volume_pane_cp

0x4d0b,	// (0x0008ff25) mup2_visualizer_pane_g1_ParamLimits

0x4d0b,	// (0x0008ff25) mup2_visualizer_pane_g1

0xc8cc,	// (0x00097ae6) mup2_visualizer_pane_g2_ParamLimits

0xc8cc,	// (0x00097ae6) mup2_visualizer_pane_g2

0x4d22,	// (0x0008ff3c) mup2_visualizer_pane_g3_ParamLimits

0x4d22,	// (0x0008ff3c) mup2_visualizer_pane_g3

0x0002,

0xf679,	// (0x0009a893) mup2_visualizer_pane_g_ParamLimits

0xf679,	// (0x0009a893) mup2_visualizer_pane_g

0xb6ed,	// (0x00096907) aid_size_cell_fmradio

0x41a8,	// (0x0008f3c2) aid_height_parent_landcape

0xaabd,	// (0x00095cd7) wml_content_pane_cp

0xaac5,	// (0x00095cdf) wml_tabs_pane

0xaace,	// (0x00095ce8) popup_wml_miniature_window

0xaad6,	// (0x00095cf0) scroll_pane_cp021

0xaaea,	// (0x00095d04) wml_content_pane_comp8

0x9bba,	// (0x00094dd4) bg_popup_sub_pane_cp05

0xc8ea,	// (0x00097b04) popup_wml_miniature_window_g1

0xc8f2,	// (0x00097b0c) wml_miniature_view_pane

0x4d2e,	// (0x0008ff48) aid_size_wml_view

0x4d36,	// (0x0008ff50) wml_miniature_view_pane_g1

0x4d3f,	// (0x0008ff59) wml_miniature_view_pane_g2

0x4d48,	// (0x0008ff62) wml_miniature_view_pane_g3

0x4d50,	// (0x0008ff6a) wml_miniature_view_pane_g4

0x4d58,	// (0x0008ff72) wml_miniature_view_pane_g5

0x4d60,	// (0x0008ff7a) wml_miniature_view_pane_g6

0x4d68,	// (0x0008ff82) wml_miniature_view_pane_g7

0x4d70,	// (0x0008ff8a) wml_miniature_view_pane_g8

0x0007,

0xf680,	// (0x0009a89a) wml_miniature_view_pane_g

0xc8fa,	// (0x00097b14) background_graphic_ParamLimits

0xc8fa,	// (0x00097b14) background_graphic

0xc906,	// (0x00097b20) wml_tabs_2_pane

0xc90f,	// (0x00097b29) wml_tabs_3_pane_ParamLimits

0xc90f,	// (0x00097b29) wml_tabs_3_pane

0xc921,	// (0x00097b3b) wml_tabs_4_pane_ParamLimits

0xc921,	// (0x00097b3b) wml_tabs_4_pane

0xc937,	// (0x00097b51) wml_tabs_5_pane_ParamLimits

0xc937,	// (0x00097b51) wml_tabs_5_pane

0xc951,	// (0x00097b6b) wml_tabs_pane_g2_ParamLimits

0xc951,	// (0x00097b6b) wml_tabs_pane_g2

0xc965,	// (0x00097b7f) wml_tabs_pane_g3_ParamLimits

0xc965,	// (0x00097b7f) wml_tabs_pane_g3

0x4d78,	// (0x0008ff92) wml_tabs_2_active_pane_ParamLimits

0x4d78,	// (0x0008ff92) wml_tabs_2_active_pane

0x4d8c,	// (0x0008ffa6) wml_tabs_2_passive_pane_ParamLimits

0x4d8c,	// (0x0008ffa6) wml_tabs_2_passive_pane

0x4da0,	// (0x0008ffba) wml_tabs_3_active_pane_cp_ParamLimits

0x4da0,	// (0x0008ffba) wml_tabs_3_active_pane_cp

0x4db5,	// (0x0008ffcf) wml_tabs_3_passive_pane_ParamLimits

0x4db5,	// (0x0008ffcf) wml_tabs_3_passive_pane

0x4dc8,	// (0x0008ffe2) wml_tabs_3_passive_pane_cp_ParamLimits

0x4dc8,	// (0x0008ffe2) wml_tabs_3_passive_pane_cp

0x4ddf,	// (0x0008fff9) tabs_4_active_pane

0x4de7,	// (0x00090001) tabs_4_passive_pane

0x4df1,	// (0x0009000b) tabs_4_passive_pane_cp

0x4df9,	// (0x00090013) tabs_4_passive_pane_cp2

0x3ec3,	// (0x0008f0dd) aid_height_text

0x3617,	// (0x0008e831) mup_volume_cont_pane_ParamLimits

0x3617,	// (0x0008e831) mup_volume_cont_pane

0x12c5,	// (0x0008c4df) aid_size_cell_pinb

0x12cf,	// (0x0008c4e9) aid_size_list_pinb

0x4ce3,	// (0x0008fefd) mup2_volume_cont_pane_ParamLimits

0x4ce3,	// (0x0008fefd) mup2_volume_cont_pane

0x9e95,	// (0x000950af) mup2_volume_cont_pane_g1_ParamLimits

0x9e95,	// (0x000950af) mup2_volume_cont_pane_g1

0x0f77,	// (0x0008c191) aid_size_cell_touch_ParamLimits

0x0f77,	// (0x0008c191) aid_size_cell_touch

0x11b4,	// (0x0008c3ce) touch_pane_ParamLimits

0x11b4,	// (0x0008c3ce) touch_pane

0x973f,	// (0x00094959) main_rss2_pane

0xc982,	// (0x00097b9c) listscroll_rss2_pane

0xc98b,	// (0x00097ba5) rss2_navigation_pane

0xc993,	// (0x00097bad) list_rss2_pane

0xb15a,	// (0x00096374) scroll_pane_cp22

0xc99b,	// (0x00097bb5) rss2_navigation_pane_g1

0xc9a4,	// (0x00097bbe) rss2_navigation_pane_g2

0xc9ac,	// (0x00097bc6) rss2_navigation_pane_g3

0x0002,

0xf691,	// (0x0009a8ab) rss2_navigation_pane_g

0xc9b4,	// (0x00097bce) rss2_navigation_pane_t1

0x4e03,	// (0x0009001d) rss2_list_single_pane_ParamLimits

0x4e03,	// (0x0009001d) rss2_list_single_pane

0xc9c2,	// (0x00097bdc) rss2_list_single_pane_t2

0xc9d0,	// (0x00097bea) rss2_list_single_pane_t3_ParamLimits

0xc9d0,	// (0x00097bea) rss2_list_single_pane_t3

0xc9ed,	// (0x00097c07) rss2_list_single_pane_t4

0x3054,	// (0x0008e26e) smil_status_pane_g1

0xa4a9,	// (0x000956c3) main_image2_pane_ParamLimits

0xa4a9,	// (0x000956c3) main_image2_pane

0x48a5,	// (0x0008fabf) main_camera2_pane_g9_ParamLimits

0x48a5,	// (0x0008fabf) main_camera2_pane_g9

0x49d3,	// (0x0008fbed) main_camera2_pane_t5_ParamLimits

0x49d3,	// (0x0008fbed) main_camera2_pane_t5

0x9e65,	// (0x0009507f) main_camera2_pane_t6_ParamLimits

0x9e65,	// (0x0009507f) main_camera2_pane_t6

0x4e1a,	// (0x00090034) main_image2_pane_g1_ParamLimits

0x4e1a,	// (0x00090034) main_image2_pane_g1

0x3bfd,	// (0x0008ee17) smil2_video_pane_ParamLimits

0x3bfd,	// (0x0008ee17) smil2_video_pane

0x0faf,	// (0x0008c1c9) aid_zoom_text_primary_cp

0x979d,	// (0x000949b7) popup_preview_fixed_window

0xaa26,	// (0x00095c40) im_reading_pane_g1

0x471c,	// (0x0008f936) cams2_bc_adjust_pane_cp_ParamLimits

0x471c,	// (0x0008f936) cams2_bc_adjust_pane_cp

0x4a02,	// (0x0008fc1c) cams2_bc_adjust_pane_ParamLimits

0x4a02,	// (0x0008fc1c) cams2_bc_adjust_pane

0x9ece,	// (0x000950e8) cams2_bc_adjust_pane_g1

0x9ed6,	// (0x000950f0) cams2_slider_pane

0x9edf,	// (0x000950f9) cams2_slider_pane_g1

0x9ee8,	// (0x00095102) cams2_slider_pane_g2

0x0006,

0xf698,	// (0x0009a8b2) cams2_slider_pane_g

0x13a7,	// (0x0008c5c1) calc_display_pane_ParamLimits

0x13cf,	// (0x0008c5e9) calc_paper_pane_ParamLimits

0x13f2,	// (0x0008c60c) grid_calc_pane_ParamLimits

0x9d7e,	// (0x00094f98) popup_clock_digital_window_t1_ParamLimits

0xb68a,	// (0x000968a4) main_image_pane_t1

0x1389,	// (0x0008c5a3) aid_size_cell_calc_ParamLimits

0x1389,	// (0x0008c5a3) aid_size_cell_calc

0x41ee,	// (0x0008f408) popup_blid_sat_info2_window_ParamLimits

0x41ee,	// (0x0008f408) popup_blid_sat_info2_window

0xca03,	// (0x00097c1d) aid_size_cell_blid

0xca0b,	// (0x00097c25) bg_popup_window_pane_cp07

0xca2e,	// (0x00097c48) grid_popup_blid_pane

0xca38,	// (0x00097c52) heading_pane_cp05_ParamLimits

0xca38,	// (0x00097c52) heading_pane_cp05

0xcb02,	// (0x00097d1c) cell_popup_blid_pane_ParamLimits

0xcb02,	// (0x00097d1c) cell_popup_blid_pane

0xcb28,	// (0x00097d42) cell_popup_blid_pane_g1

0xcb30,	// (0x00097d4a) cell_popup_blid_pane_t1

0x4cb3,	// (0x0008fecd) mup2_indicator_pane_ParamLimits

0x4cb3,	// (0x0008fecd) mup2_indicator_pane

0xb402,	// (0x0009661c) mup2_visualizer_osc_pane

0xc8d8,	// (0x00097af2) mup2_visualizer_spec_pane_ParamLimits

0xc8d8,	// (0x00097af2) mup2_visualizer_spec_pane

0x4e30,	// (0x0009004a) mup2_spec_half_pane

0x4e39,	// (0x00090053) mup2_spec_half_pane_cp

0x4e41,	// (0x0009005b) mup2_spec_bar_pane_ParamLimits

0x4e41,	// (0x0009005b) mup2_spec_bar_pane

0xc879,	// (0x00097a93) mup2_spec_bar_pane_g1

0xc883,	// (0x00097a9d) mup2_spec_bar_pane_g2

0x0001,

0xf60b,	// (0x0009a825) mup2_spec_bar_pane_g

0x4e61,	// (0x0009007b) mup2_osc_middle_pane

0xc895,	// (0x00097aaf) mup2_visualizer_osc_pane_g1

0x97c7,	// (0x000949e1) popup_number_entry_window_t1_ParamLimits

0x97da,	// (0x000949f4) popup_number_entry_window_t2_ParamLimits

0x97ec,	// (0x00094a06) popup_number_entry_window_t3_ParamLimits

0x1206,	// (0x0008c420) popup_number_entry_window_t5_ParamLimits

0x1206,	// (0x0008c420) popup_number_entry_window_t5

0xf0cd,	// (0x0009a2e7) popup_number_entry_window_t_ParamLimits

0x97fe,	// (0x00094a18) text_title_cp2_ParamLimits

0x9dbd,	// (0x00094fd7) aid_hotspot_pointer_text2_pane

0x9de3,	// (0x00094ffd) main_viewer_pane_g9_ParamLimits

0x9de3,	// (0x00094ffd) main_viewer_pane_g9

0xac5f,	// (0x00095e79) cale_month_pane_t1_ParamLimits

0xac9c,	// (0x00095eb6) bg_cale_pane_ParamLimits

0xacb4,	// (0x00095ece) list_cale_pane_ParamLimits

0xacc5,	// (0x00095edf) listscroll_cale_day_pane_t1

0xacd7,	// (0x00095ef1) scroll_pane_cp09_ParamLimits

0x364d,	// (0x0008e867) main_mup_eq_pane_t1_ParamLimits

0x364d,	// (0x0008e867) main_mup_eq_pane_t1

0x3667,	// (0x0008e881) main_mup_eq_pane_t2_ParamLimits

0x3667,	// (0x0008e881) main_mup_eq_pane_t2

0x3681,	// (0x0008e89b) main_mup_eq_pane_t3_ParamLimits

0x3681,	// (0x0008e89b) main_mup_eq_pane_t3

0x369d,	// (0x0008e8b7) main_mup_eq_pane_t4_ParamLimits

0x369d,	// (0x0008e8b7) main_mup_eq_pane_t4

0x36b9,	// (0x0008e8d3) main_mup_eq_pane_t5_ParamLimits

0x36b9,	// (0x0008e8d3) main_mup_eq_pane_t5

0x36d5,	// (0x0008e8ef) main_mup_eq_pane_t6_ParamLimits

0x36d5,	// (0x0008e8ef) main_mup_eq_pane_t6

0x36e9,	// (0x0008e903) main_mup_eq_pane_t7_ParamLimits

0x36e9,	// (0x0008e903) main_mup_eq_pane_t7

0x36fd,	// (0x0008e917) main_mup_eq_pane_t8_ParamLimits

0x36fd,	// (0x0008e917) main_mup_eq_pane_t8

0x3711,	// (0x0008e92b) main_mup_eq_pane_t9_ParamLimits

0x3711,	// (0x0008e92b) main_mup_eq_pane_t9

0x372b,	// (0x0008e945) main_mup_eq_pane_t10_ParamLimits

0x372b,	// (0x0008e945) main_mup_eq_pane_t10

0x0009,

0xf45a,	// (0x0009a674) main_mup_eq_pane_t_ParamLimits

0xf45a,	// (0x0009a674) main_mup_eq_pane_t

0x37da,	// (0x0008e9f4) mup_equalizer_pane_cp5_ParamLimits

0x37ee,	// (0x0008ea08) mup_equalizer_pane_cp6_ParamLimits

0x3802,	// (0x0008ea1c) mup_equalizer_pane_cp7_ParamLimits

0x973f,	// (0x00094959) main_gallery_pane

0xc89e,	// (0x00097ab8) smil2_volume_pane

0xc8a6,	// (0x00097ac0) smil_status_volume_pane_g1_ParamLimits

0xc8b9,	// (0x00097ad3) smil_status_volume_pane_g2_ParamLimits

0x9e43,	// (0x0009505d) smil_status_volume_pane_g3_ParamLimits

0xf610,	// (0x0009a82a) smil_status_volume_pane_g_ParamLimits

0xca0b,	// (0x00097c25) bg_popup_window_pane_cp07_ParamLimits

0xca19,	// (0x00097c33) blid_firmament_pane

0x4e6a,	// (0x00090084) aid_size_cell_gallery_ParamLimits

0x4e6a,	// (0x00090084) aid_size_cell_gallery

0x4e80,	// (0x0009009a) grid_gallery_pane_ParamLimits

0x4e80,	// (0x0009009a) grid_gallery_pane

0x4e99,	// (0x000900b3) cell_gallery_pane_ParamLimits

0x4e99,	// (0x000900b3) cell_gallery_pane

0xcb3e,	// (0x00097d58) bg_cell_gallery_focus_pane_ParamLimits

0xcb3e,	// (0x00097d58) bg_cell_gallery_focus_pane

0xcb50,	// (0x00097d6a) cell_gallery_pane_g1_ParamLimits

0xcb50,	// (0x00097d6a) cell_gallery_pane_g1

0x4ee2,	// (0x000900fc) cell_gallery_pane_g2_ParamLimits

0x4ee2,	// (0x000900fc) cell_gallery_pane_g2

0x4eef,	// (0x00090109) cell_gallery_pane_g3_ParamLimits

0x4eef,	// (0x00090109) cell_gallery_pane_g3

0xcb5c,	// (0x00097d76) cell_gallery_pane_g4_ParamLimits

0xcb5c,	// (0x00097d76) cell_gallery_pane_g4

0x0003,

0xf6be,	// (0x0009a8d8) cell_gallery_pane_g_ParamLimits

0xf6be,	// (0x0009a8d8) cell_gallery_pane_g

0xcb68,	// (0x00097d82) bg_cell_gallery_focus_pane_g1

0xcb70,	// (0x00097d8a) bg_cell_gallery_focus_pane_g2

0xcb78,	// (0x00097d92) bg_cell_gallery_focus_pane_g3

0xcb80,	// (0x00097d9a) bg_cell_gallery_focus_pane_g4

0xcb88,	// (0x00097da2) bg_cell_gallery_focus_pane_g5

0xcb90,	// (0x00097daa) bg_cell_gallery_focus_pane_g6

0xcb98,	// (0x00097db2) bg_cell_gallery_focus_pane_g7

0xcba0,	// (0x00097dba) bg_cell_gallery_focus_pane_g8

0x0007,

0xf6c7,	// (0x0009a8e1) bg_cell_gallery_focus_pane_g

0xcba8,	// (0x00097dc2) aid_firma_cardinal

0xcbbc,	// (0x00097dd6) blid_firmament_pane_t1

0xcbd3,	// (0x00097ded) blid_firmament_pane_t2

0xcbea,	// (0x00097e04) blid_firmament_pane_t3

0xcc01,	// (0x00097e1b) blid_firmament_pane_t4

0x0003,

0xf6d8,	// (0x0009a8f2) blid_firmament_pane_t

0xcc18,	// (0x00097e32) blid_sat_info_pane

0xcc28,	// (0x00097e42) blid_sat_info_pane_g1

0xcc28,	// (0x00097e42) blid_sat_info_pane_g2

0x0001,

0xf6e1,	// (0x0009a8fb) blid_sat_info_pane_g

0xcc32,	// (0x00097e4c) blid_sat_info_pane_t1

0xcc40,	// (0x00097e5a) smil2_volume_content_pane

0xcc49,	// (0x00097e63) smil2_volume_pane_g1

0xa7e7,	// (0x00095a01) smil2_volume_content_pane_g1

0xcc51,	// (0x00097e6b) smil2_volume_content_pane_g2

0xcc5a,	// (0x00097e74) smil2_volume_content_pane_g3

0xcc63,	// (0x00097e7d) smil2_volume_content_pane_g4

0xcc6c,	// (0x00097e86) smil2_volume_content_pane_g5

0xcc75,	// (0x00097e8f) smil2_volume_content_pane_g6

0xcc7e,	// (0x00097e98) smil2_volume_content_pane_g7

0xcc87,	// (0x00097ea1) smil2_volume_content_pane_g8

0xcc90,	// (0x00097eaa) smil2_volume_content_pane_g9

0xcc99,	// (0x00097eb3) smil2_volume_content_pane_g10

0x0009,

0xf6e6,	// (0x0009a900) smil2_volume_content_pane_g

0x196d,	// (0x0008cb87) cale_week_day_heading_pane_t1_ParamLimits

0x19b7,	// (0x0008cbd1) cale_week_day_heading_pane_t2_ParamLimits

0x1a06,	// (0x0008cc20) cale_week_day_heading_pane_t3_ParamLimits

0x1a55,	// (0x0008cc6f) cale_week_day_heading_pane_t4_ParamLimits

0x1aa4,	// (0x0008ccbe) cale_week_day_heading_pane_t5_ParamLimits

0x1afb,	// (0x0008cd15) cale_week_day_heading_pane_t6_ParamLimits

0x1b52,	// (0x0008cd6c) cale_week_day_heading_pane_t7_ParamLimits

0xf1d2,	// (0x0009a3ec) cale_week_day_heading_pane_t_ParamLimits

0xa8e3,	// (0x00095afd) bg_cale_side_pane_ParamLimits

0x1b9c,	// (0x0008cdb6) cale_week_time_pane_t1_ParamLimits

0x1bb6,	// (0x0008cdd0) cale_week_time_pane_t2_ParamLimits

0x1bd0,	// (0x0008cdea) cale_week_time_pane_t3_ParamLimits

0x1bea,	// (0x0008ce04) cale_week_time_pane_t4_ParamLimits

0x1c04,	// (0x0008ce1e) cale_week_time_pane_t5_ParamLimits

0x1c1e,	// (0x0008ce38) cale_week_time_pane_t6_ParamLimits

0x1c38,	// (0x0008ce52) cale_week_time_pane_t7_ParamLimits

0x1c58,	// (0x0008ce72) cale_week_time_pane_t8_ParamLimits

0xf1e1,	// (0x0009a3fb) cale_week_time_pane_t_ParamLimits

0x1c78,	// (0x0008ce92) cell_cale_week_pane_g2_ParamLimits

0xa8e3,	// (0x00095afd) bg_cale_side_pane_cp01_ParamLimits

0x2e65,	// (0x0008e07f) cale_month_week_pane_t1_ParamLimits

0x2e7e,	// (0x0008e098) cale_month_week_pane_t2_ParamLimits

0x2e97,	// (0x0008e0b1) cale_month_week_pane_t3_ParamLimits

0x2eb0,	// (0x0008e0ca) cale_month_week_pane_t4_ParamLimits

0x2ec9,	// (0x0008e0e3) cale_month_week_pane_t5_ParamLimits

0x2ee2,	// (0x0008e0fc) cale_month_week_pane_t6_ParamLimits

0xf2ba,	// (0x0009a4d4) cale_month_week_pane_t_ParamLimits

0x9cfa,	// (0x00094f14) cell_cale_month_pane_g1_ParamLimits

0x973f,	// (0x00094959) main_cale_event_viewer_pane

0x973f,	// (0x00094959) listscroll_cale_event_viewer_pane

0xcca2,	// (0x00097ebc) list_cale_ev_pane

0xccaa,	// (0x00097ec4) scroll_pane_cp023

0xccb6,	// (0x00097ed0) field_cale_ev_pane_ParamLimits

0xccb6,	// (0x00097ed0) field_cale_ev_pane

0xccd2,	// (0x00097eec) field_cale_ev_content_pane_ParamLimits

0xccd2,	// (0x00097eec) field_cale_ev_content_pane

0xccde,	// (0x00097ef8) field_cale_ev_pane_g1_ParamLimits

0xccde,	// (0x00097ef8) field_cale_ev_pane_g1

0xccea,	// (0x00097f04) field_cale_ev_pane_g2_ParamLimits

0xccea,	// (0x00097f04) field_cale_ev_pane_g2

0xcd02,	// (0x00097f1c) field_cale_ev_pane_g3_ParamLimits

0xcd02,	// (0x00097f1c) field_cale_ev_pane_g3

0x0002,

0xf6fb,	// (0x0009a915) field_cale_ev_pane_g_ParamLimits

0xf6fb,	// (0x0009a915) field_cale_ev_pane_g

0xcd1a,	// (0x00097f34) field_cale_ev_pane_t1_ParamLimits

0xcd1a,	// (0x00097f34) field_cale_ev_pane_t1

0xcd31,	// (0x00097f4b) field_cale_ev_content_pane_t1_ParamLimits

0xcd31,	// (0x00097f4b) field_cale_ev_content_pane_t1

0x386e,	// (0x0008ea88) bg_button_pane_cp01

0x16b0,	// (0x0008c8ca) listscroll_cale_week_pane_ParamLimits

0xa88d,	// (0x00095aa7) popup_toolbar_window_cp01

0xa8b4,	// (0x00095ace) listscroll_cale_week_pane_t1_ParamLimits

0x16b0,	// (0x0008c8ca) listscroll_cale_day_pane_ParamLimits

0xa88d,	// (0x00095aa7) popup_toolbar_window_cp02

0xacc5,	// (0x00095edf) listscroll_cale_day_pane_t1_ParamLimits

0x16b0,	// (0x0008c8ca) main_cale_month_pane_ParamLimits

0x9e2e,	// (0x00095048) popup_toolbar_window_cp03_ParamLimits

0x9e2e,	// (0x00095048) popup_toolbar_window_cp03

0x3ac1,	// (0x0008ecdb) main_image_pane_g2_ParamLimits

0x3ac1,	// (0x0008ecdb) main_image_pane_g2

0x3ad2,	// (0x0008ecec) main_image_pane_g3_ParamLimits

0x3ad2,	// (0x0008ecec) main_image_pane_g3

0x0002,

0xf4ec,	// (0x0009a706) main_image_pane_g_ParamLimits

0xf4ec,	// (0x0009a706) main_image_pane_g

0xb68a,	// (0x000968a4) main_image_pane_t1_ParamLimits

0x3ae3,	// (0x0008ecfd) main_image_pane_t2_ParamLimits

0x3ae3,	// (0x0008ecfd) main_image_pane_t2

0x3af5,	// (0x0008ed0f) main_image_pane_t3_ParamLimits

0x3af5,	// (0x0008ed0f) main_image_pane_t3

0x3b1d,	// (0x0008ed37) main_image_pane_t4_ParamLimits

0x3b1d,	// (0x0008ed37) main_image_pane_t4

0x0003,

0xf4f3,	// (0x0009a70d) main_image_pane_t_ParamLimits

0xf4f3,	// (0x0009a70d) main_image_pane_t

0x3b3d,	// (0x0008ed57) popup_image_details_window_cp01

0x3b47,	// (0x0008ed61) popup_toobar_trans_pane_cp01_ParamLimits

0x3b47,	// (0x0008ed61) popup_toobar_trans_pane_cp01

0x42c5,	// (0x0008f4df) popup_image_details_window_ParamLimits

0x42c5,	// (0x0008f4df) popup_image_details_window

0x9e01,	// (0x0009501b) popup_image_focus_window

0x46d6,	// (0x0008f8f0) camera2_autofocus_pane_ParamLimits

0x46d6,	// (0x0008f8f0) camera2_autofocus_pane

0x973f,	// (0x00094959) bg_popup_sub_pane_cp06

0xcd4e,	// (0x00097f68) popup_image_focus_window_g1

0xcd56,	// (0x00097f70) popup_image_focus_window_g2

0xcd5e,	// (0x00097f78) popup_image_focus_window_g3

0xcd66,	// (0x00097f80) popup_image_focus_window_g4

0x0003,

0xf702,	// (0x0009a91c) popup_image_focus_window_g

0xcd6e,	// (0x00097f88) popup_image_focus_window_t1

0xcd7c,	// (0x00097f96) popup_image_focus_window_t2

0xcd8c,	// (0x00097fa6) popup_image_focus_window_t3

0x0002,

0xf70b,	// (0x0009a925) popup_image_focus_window_t

0xcd9a,	// (0x00097fb4) camera2_autofocus_pane_g1

0xa4a9,	// (0x000956c3) bg_tb_trans_pane_cp01

0xcda8,	// (0x00097fc2) popup_image_details_window_g1

0xcdbb,	// (0x00097fd5) popup_image_details_window_g2

0x0002,

0xf71d,	// (0x0009a937) popup_image_details_window_g

0xcde4,	// (0x00097ffe) popup_image_details_window_t1

0xcdf6,	// (0x00098010) popup_image_details_window_t2

0xce0f,	// (0x00098029) popup_image_details_window_t3

0xce23,	// (0x0009803d) popup_image_details_window_t4

0xce3e,	// (0x00098058) popup_image_details_window_t5

0x0004,

0xf724,	// (0x0009a93e) popup_image_details_window_t

0xa752,	// (0x0009596c) bg_calc_paper_pane_ParamLimits

0x973f,	// (0x00094959) grid_highlight_pane_cp013

0x9c52,	// (0x00094e6c) list_calc_pane_ParamLimits

0x9c64,	// (0x00094e7e) scroll_pane_cp024

0xa766,	// (0x00095980) bg_calc_display_pane_ParamLimits

0x14f0,	// (0x0008c70a) calc_display_pane_t1_ParamLimits

0x1502,	// (0x0008c71c) calc_display_pane_t2_ParamLimits

0x9c6c,	// (0x00094e86) calc_display_pane_t3_ParamLimits

0xf154,	// (0x0009a36e) calc_display_pane_t_ParamLimits

0x15c7,	// (0x0008c7e1) cell_calc_pane_g2

0x0001,

0xf171,	// (0x0009a38b) cell_calc_pane_g

0x15d0,	// (0x0008c7ea) cell_calc_pane_t1

0xa7c5,	// (0x000959df) grid_highlight_pane_cp02_ParamLimits

0xa7db,	// (0x000959f5) toolbar_button_pane_cp01_ParamLimits

0xa7db,	// (0x000959f5) toolbar_button_pane_cp01

0xb6cf,	// (0x000968e9) temp_image_control_pane_ParamLimits

0xb6cf,	// (0x000968e9) temp_image_control_pane

0xa4a9,	// (0x000956c3) main_mp3_pane

0xce58,	// (0x00098072) temp_image_control_pane_g1_ParamLimits

0xce58,	// (0x00098072) temp_image_control_pane_g1

0xce66,	// (0x00098080) temp_image_control_pane_g2_ParamLimits

0xce66,	// (0x00098080) temp_image_control_pane_g2

0xce78,	// (0x00098092) temp_image_control_pane_g3_ParamLimits

0xce78,	// (0x00098092) temp_image_control_pane_g3

0x4f2c,	// (0x00090146) temp_image_control_pane_g4_ParamLimits

0x4f2c,	// (0x00090146) temp_image_control_pane_g4

0x0003,

0xf72f,	// (0x0009a949) temp_image_control_pane_g_ParamLimits

0xf72f,	// (0x0009a949) temp_image_control_pane_g

0xce58,	// (0x00098072) main_mp3_pane_g1

0x4f3f,	// (0x00090159) main_mp3_pane_g2

0x0007,

0xf738,	// (0x0009a952) main_mp3_pane_g

0xcebb,	// (0x000980d5) main_mp3_pane_t1

0xa935,	// (0x00095b4f) main_camera_pane_g8_ParamLimits

0xa935,	// (0x00095b4f) main_camera_pane_g8

0x1f9b,	// (0x0008d1b5) main_video_pane_g7_ParamLimits

0x1f9b,	// (0x0008d1b5) main_video_pane_g7

0x9e83,	// (0x0009509d) main_camera2_pane_t7_ParamLimits

0x9e83,	// (0x0009509d) main_camera2_pane_t7

0xaa7d,	// (0x00095c97) scroll_pane_cp025_ParamLimits

0xaa7d,	// (0x00095c97) scroll_pane_cp025

0xaa91,	// (0x00095cab) scroll_pane_cp026_ParamLimits

0xaa91,	// (0x00095cab) scroll_pane_cp026

0xaaa0,	// (0x00095cba) wml_content_pane_ParamLimits

0x973f,	// (0x00094959) main_touch_calib_pane

0x5015,	// (0x0009022f) main_touch_calib_pane_g1

0x5027,	// (0x00090241) main_touch_calib_pane_g2

0x5039,	// (0x00090253) main_touch_calib_pane_g3

0x504b,	// (0x00090265) main_touch_calib_pane_g4

0x0003,

0xf756,	// (0x0009a970) main_touch_calib_pane_g

0x505d,	// (0x00090277) main_touch_calib_pane_t1

0x5077,	// (0x00090291) main_touch_calib_pane_t2

0x0004,

0xf75f,	// (0x0009a979) main_touch_calib_pane_t

0xb29d,	// (0x000964b7) mup_progress_pane_cp02

0xb2d2,	// (0x000964ec) navi_pane_g1

0xb38d,	// (0x000965a7) navi_pane_mp_t3

0xa4a9,	// (0x000956c3) main_mp3_pane_ParamLimits

0x4442,	// (0x0008f65c) navi_pane_ParamLimits

0xce58,	// (0x00098072) main_mp3_pane_g1_ParamLimits

0x4f3f,	// (0x00090159) main_mp3_pane_g2_ParamLimits

0x4f4d,	// (0x00090167) main_mp3_pane_g3_ParamLimits

0x4f4d,	// (0x00090167) main_mp3_pane_g3

0x4f5b,	// (0x00090175) main_mp3_pane_g4_ParamLimits

0x4f5b,	// (0x00090175) main_mp3_pane_g4

0xce88,	// (0x000980a2) main_mp3_pane_g5_ParamLimits

0xce88,	// (0x000980a2) main_mp3_pane_g5

0xce96,	// (0x000980b0) main_mp3_pane_g6_ParamLimits

0xce96,	// (0x000980b0) main_mp3_pane_g6

0xcea3,	// (0x000980bd) main_mp3_pane_g7_ParamLimits

0xcea3,	// (0x000980bd) main_mp3_pane_g7

0xceaf,	// (0x000980c9) main_mp3_pane_g8_ParamLimits

0xceaf,	// (0x000980c9) main_mp3_pane_g8

0xf738,	// (0x0009a952) main_mp3_pane_g_ParamLimits

0x4f69,	// (0x00090183) main_mp3_pane_t2

0x4f77,	// (0x00090191) main_mp3_pane_t3

0xcec9,	// (0x000980e3) main_mp3_pane_t4

0xced7,	// (0x000980f1) main_mp3_pane_t5

0x0005,

0xf749,	// (0x0009a963) main_mp3_pane_t

0xcee5,	// (0x000980ff) mup_progress_pane_cp01

0x0faf,	// (0x0008c1c9) aid_zoom_text_secondary2

0xcca2,	// (0x00097ebc) list_cale_ev2_pane

0xccaa,	// (0x00097ec4) scroll_pane_cp023_ParamLimits

0x50cd,	// (0x000902e7) field_cale_ev2_pane_ParamLimits

0x50cd,	// (0x000902e7) field_cale_ev2_pane

0x9f02,	// (0x0009511c) field_cale_ev2_pane_g1_ParamLimits

0x9f02,	// (0x0009511c) field_cale_ev2_pane_g1

0x9f0e,	// (0x00095128) field_cale_ev2_pane_g2_ParamLimits

0x9f0e,	// (0x00095128) field_cale_ev2_pane_g2

0x9f26,	// (0x00095140) field_cale_ev2_pane_g3_ParamLimits

0x9f26,	// (0x00095140) field_cale_ev2_pane_g3

0x0003,

0xf76a,	// (0x0009a984) field_cale_ev2_pane_g_ParamLimits

0xf76a,	// (0x0009a984) field_cale_ev2_pane_g

0x50ef,	// (0x00090309) field_cale_ev2_pane_t1_ParamLimits

0x50ef,	// (0x00090309) field_cale_ev2_pane_t1

0x5106,	// (0x00090320) field_cale_ev2_pane_t2_ParamLimits

0x5106,	// (0x00090320) field_cale_ev2_pane_t2

0x0001,

0xf773,	// (0x0009a98d) field_cale_ev2_pane_t_ParamLimits

0xf773,	// (0x0009a98d) field_cale_ev2_pane_t

0x3974,	// (0x0008eb8e) main_postcard_pane_g5_ParamLimits

0x3974,	// (0x0008eb8e) main_postcard_pane_g5

0x398a,	// (0x0008eba4) main_postcard_pane_g6_ParamLimits

0x398a,	// (0x0008eba4) main_postcard_pane_g6

0x1d55,	// (0x0008cf6f) camera2_autofocus_pane_cp_ParamLimits

0x1d55,	// (0x0008cf6f) camera2_autofocus_pane_cp

0xa4a9,	// (0x000956c3) main_mup3_pane

0x513b,	// (0x00090355) main_mup3_pane_g1_ParamLimits

0x513b,	// (0x00090355) main_mup3_pane_g1

0x515d,	// (0x00090377) main_mup3_pane_g2_ParamLimits

0x515d,	// (0x00090377) main_mup3_pane_g2

0x51df,	// (0x000903f9) main_mup3_pane_g3_ParamLimits

0x51df,	// (0x000903f9) main_mup3_pane_g3

0x5225,	// (0x0009043f) main_mup3_pane_g4_ParamLimits

0x5225,	// (0x0009043f) main_mup3_pane_g4

0x526b,	// (0x00090485) main_mup3_pane_g5_ParamLimits

0x526b,	// (0x00090485) main_mup3_pane_g5

0x52b3,	// (0x000904cd) main_mup3_pane_g6_ParamLimits

0x52b3,	// (0x000904cd) main_mup3_pane_g6

0xceed,	// (0x00098107) main_mup3_pane_g7_ParamLimits

0xceed,	// (0x00098107) main_mup3_pane_g7

0x0007,

0xf783,	// (0x0009a99d) main_mup3_pane_g_ParamLimits

0xf783,	// (0x0009a99d) main_mup3_pane_g

0x5331,	// (0x0009054b) main_mup3_pane_t1_ParamLimits

0x5331,	// (0x0009054b) main_mup3_pane_t1

0x53a5,	// (0x000905bf) main_mup3_pane_t2_ParamLimits

0x53a5,	// (0x000905bf) main_mup3_pane_t2

0x5479,	// (0x00090693) main_mup3_pane_t4_ParamLimits

0x5479,	// (0x00090693) main_mup3_pane_t4

0x54cf,	// (0x000906e9) main_mup3_pane_t5_ParamLimits

0x54cf,	// (0x000906e9) main_mup3_pane_t5

0x558b,	// (0x000907a5) main_mup3_pane_t6_ParamLimits

0x558b,	// (0x000907a5) main_mup3_pane_t6

0x0005,

0xf794,	// (0x0009a9ae) main_mup3_pane_t_ParamLimits

0xf794,	// (0x0009a9ae) main_mup3_pane_t

0x5643,	// (0x0009085d) mup3_progress_pane_ParamLimits

0x5643,	// (0x0009085d) mup3_progress_pane

0x56cf,	// (0x000908e9) popup_mup3_control_window_ParamLimits

0x56cf,	// (0x000908e9) popup_mup3_control_window

0xcefb,	// (0x00098115) popup_mup3_text_window

0x5701,	// (0x0009091b) mup3_progress_pane_t1

0x5720,	// (0x0009093a) mup3_progress_pane_t2

0xcf03,	// (0x0009811d) mup3_progress_pane_t3

0x0002,

0xf7a1,	// (0x0009a9bb) mup3_progress_pane_t

0xcf20,	// (0x0009813a) mup_progress_pane_cp03

0x973f,	// (0x00094959) bg_tb_trans_pane_cp04

0x573f,	// (0x00090959) mup3_volume_pane

0x5747,	// (0x00090961) popup_mup3_control_window_g1

0x5750,	// (0x0009096a) mup3_volume_pane_g1

0x5759,	// (0x00090973) mup3_volume_pane_g2

0x5762,	// (0x0009097c) mup3_volume_pane_g3

0x0002,

0xf7a8,	// (0x0009a9c2) mup3_volume_pane_g

0x973f,	// (0x00094959) bg_tb_trans_pane_cp03

0xcf30,	// (0x0009814a) popup_mup3_text_window_g1

0xcf38,	// (0x00098152) popup_mup3_text_window_t1

0xa7ae,	// (0x000959c8) list_calc_item_pane_g1_ParamLimits

0xc979,	// (0x00097b93) mup_volume_pane_cp_g1

0x5091,	// (0x000902ab) main_touch_calib_pane_t3

0x50a5,	// (0x000902bf) main_touch_calib_pane_t4

0x50b9,	// (0x000902d3) main_touch_calib_pane_t5

0x9749,	// (0x00094963) aid_cell_size_toolbar2

0x9751,	// (0x0009496b) aid_popup3_width_pane

0x975d,	// (0x00094977) aid_zoom_text_msg_primary

0x1d2c,	// (0x0008cf46) vorec_t7

0xa772,	// (0x0009598c) bg_calc_paper_pane_g1_ParamLimits

0xa77e,	// (0x00095998) bg_calc_paper_pane_g2_ParamLimits

0xa78a,	// (0x000959a4) bg_calc_paper_pane_g3_ParamLimits

0xa796,	// (0x000959b0) bg_calc_paper_pane_g4_ParamLimits

0xa7a2,	// (0x000959bc) bg_calc_paper_pane_g5_ParamLimits

0x154b,	// (0x0008c765) bg_calc_paper_pane_g6_ParamLimits

0x155c,	// (0x0008c776) bg_calc_paper_pane_g7_ParamLimits

0x156d,	// (0x0008c787) bg_calc_paper_pane_g8_ParamLimits

0xf15b,	// (0x0009a375) bg_calc_paper_pane_g_ParamLimits

0x1580,	// (0x0008c79a) calc_bg_paper_pane_g9_ParamLimits

0x1ead,	// (0x0008d0c7) image_qvga_pane_ParamLimits

0x1ead,	// (0x0008d0c7) image_qvga_pane

0xa682,	// (0x0009589c) bg_popup_sub_pane_cp04_ParamLimits

0xb606,	// (0x00096820) popup_mup_playback_window_g1_ParamLimits

0xb612,	// (0x0009682c) popup_mup_playback_window_t1_ParamLimits

0xb627,	// (0x00096841) popup_mup_playback_window_t2_ParamLimits

0xf4e7,	// (0x0009a701) popup_mup_playback_window_t_ParamLimits

0x4bcd,	// (0x0008fde7) main_mup2_pane_g3_ParamLimits

0x4bcd,	// (0x0008fde7) main_mup2_pane_g3

0x21aa,	// (0x0008d3c4) popup_toolbar_window_cp04

0xba1c,	// (0x00096c36) popup_call2_audio_second_window_g3_ParamLimits

0xba1c,	// (0x00096c36) popup_call2_audio_second_window_g3

0xbe26,	// (0x00097040) popup_call2_audio_first_window_g4_ParamLimits

0xbe26,	// (0x00097040) popup_call2_audio_first_window_g4

0xc4b1,	// (0x000976cb) popup_call2_audio_in_window_g4_ParamLimits

0xc4b1,	// (0x000976cb) popup_call2_audio_in_window_g4

0x3aa3,	// (0x0008ecbd) aid_area_sk_bg_cut_ParamLimits

0x3aa3,	// (0x0008ecbd) aid_area_sk_bg_cut

0xb63c,	// (0x00096856) aid_area_sk_bg_cut_2_ParamLimits

0xb63c,	// (0x00096856) aid_area_sk_bg_cut_2

0x4ed2,	// (0x000900ec) aid_placing_details_win

0x4eda,	// (0x000900f4) aid_placing_details_win_2

0xcd9a,	// (0x00097fb4) camera2_autofocus_pane_g1_ParamLimits

0x114d,	// (0x0008c367) popup_fixed_preview_cale_window_ParamLimits

0x114d,	// (0x0008c367) popup_fixed_preview_cale_window

0xb413,	// (0x0009662d) navi_slider_pane_g3

0xb41c,	// (0x00096636) navi_slider_pane_g4

0xb425,	// (0x0009663f) navi_slider_pane_g5

0xb413,	// (0x0009662d) navi_slider_pane_g6

0x9da4,	// (0x00094fbe) navi_slider_pane_g7

0xb546,	// (0x00096760) mup_scale_pane_g3

0xb54f,	// (0x00096769) mup_scale_pane_g4

0xb558,	// (0x00096772) mup_scale_pane_g5

0x3816,	// (0x0008ea30) mup_scale_pane_g6

0x381f,	// (0x0008ea39) mup_scale_pane_g7

0xb413,	// (0x0009662d) cams2_slider_pane_g3

0xc9fb,	// (0x00097c15) cams2_slider_pane_g4

0x9ef1,	// (0x0009510b) cams2_slider_pane_g5

0xb413,	// (0x0009662d) cams2_slider_pane_g6

0x9ef9,	// (0x00095113) cams2_slider_pane_g7

0xcc28,	// (0x00097e42) camera2_autofocus_pane_cp_g1

0xc812,	// (0x00097a2c) bg_popup_preview_window_pane_cp02_ParamLimits

0xc812,	// (0x00097a2c) bg_popup_preview_window_pane_cp02

0xcf46,	// (0x00098160) list_fp_cale_pane_ParamLimits

0xcf46,	// (0x00098160) list_fp_cale_pane

0xcf52,	// (0x0009816c) popup_fixed_preview_cale_window_t1_ParamLimits

0xcf52,	// (0x0009816c) popup_fixed_preview_cale_window_t1

0x576b,	// (0x00090985) popup_fixed_preview_cale_window_t2_ParamLimits

0x576b,	// (0x00090985) popup_fixed_preview_cale_window_t2

0x5780,	// (0x0009099a) popup_fixed_preview_cale_window_t3_ParamLimits

0x5780,	// (0x0009099a) popup_fixed_preview_cale_window_t3

0x0002,

0xf7af,	// (0x0009a9c9) popup_fixed_preview_cale_window_t_ParamLimits

0xf7af,	// (0x0009a9c9) popup_fixed_preview_cale_window_t

0x5795,	// (0x000909af) list_single_fp_cale_pane_ParamLimits

0x5795,	// (0x000909af) list_single_fp_cale_pane

0xcf70,	// (0x0009818a) list_single_fp_cale_pane_g1_ParamLimits

0xcf70,	// (0x0009818a) list_single_fp_cale_pane_g1

0xcf7c,	// (0x00098196) list_single_fp_cale_pane_g2_ParamLimits

0xcf7c,	// (0x00098196) list_single_fp_cale_pane_g2

0x0002,

0xf7b6,	// (0x0009a9d0) list_single_fp_cale_pane_g_ParamLimits

0xf7b6,	// (0x0009a9d0) list_single_fp_cale_pane_g

0xcf95,	// (0x000981af) list_single_fp_cale_pane_t1_ParamLimits

0xcf95,	// (0x000981af) list_single_fp_cale_pane_t1

0xcfa7,	// (0x000981c1) list_single_fp_cale_pane_t2_ParamLimits

0xcfa7,	// (0x000981c1) list_single_fp_cale_pane_t2

0x0001,

0xf7bd,	// (0x0009a9d7) list_single_fp_cale_pane_t_ParamLimits

0xf7bd,	// (0x0009a9d7) list_single_fp_cale_pane_t

0x0000,

0x0000,

0x0000,

0x0000,

0x973f,	// (0x00094959) main_dialer_pane

0x57ac,	// (0x000909c6) aid_cell_size_keypad

0x57b6,	// (0x000909d0) dialer_ne_pane

0x57be,	// (0x000909d8) grid_dialer_command_1_pane

0x57c6,	// (0x000909e0) grid_dialer_command_2_pane

0x57ce,	// (0x000909e8) grid_dialer_keypad_pane

0x57e0,	// (0x000909fa) bg_popup_call_pane_cp06_ParamLimits

0x57e0,	// (0x000909fa) bg_popup_call_pane_cp06

0x57ec,	// (0x00090a06) dialer_ne_clear_pane_ParamLimits

0x57ec,	// (0x00090a06) dialer_ne_clear_pane

0xcfda,	// (0x000981f4) dialer_ne_pane_g1

0xcfe2,	// (0x000981fc) dialer_ne_pane_t1_ParamLimits

0xcfe2,	// (0x000981fc) dialer_ne_pane_t1

0x57f8,	// (0x00090a12) dialer_ne_pane_t2_ParamLimits

0x57f8,	// (0x00090a12) dialer_ne_pane_t2

0x5822,	// (0x00090a3c) dialer_ne_pane_t3_ParamLimits

0x5822,	// (0x00090a3c) dialer_ne_pane_t3

0x0002,

0xf7c2,	// (0x0009a9dc) dialer_ne_pane_t_ParamLimits

0xf7c2,	// (0x0009a9dc) dialer_ne_pane_t

0x5852,	// (0x00090a6c) dialer_ne_pane_t3_copy1_ParamLimits

0x5852,	// (0x00090a6c) dialer_ne_pane_t3_copy1

0x5881,	// (0x00090a9b) cell_dialer_keypad_pane_ParamLimits

0x5881,	// (0x00090a9b) cell_dialer_keypad_pane

0x5898,	// (0x00090ab2) cell_dialer_command_1_pane_ParamLimits

0x5898,	// (0x00090ab2) cell_dialer_command_1_pane

0x58ae,	// (0x00090ac8) cell_dialer_command_2_pane_ParamLimits

0x58ae,	// (0x00090ac8) cell_dialer_command_2_pane

0xcff4,	// (0x0009820e) bg_button_pane_cp02_ParamLimits

0xcff4,	// (0x0009820e) bg_button_pane_cp02

0x58bd,	// (0x00090ad7) cell_dialer_keypad_pane_g1_ParamLimits

0x58bd,	// (0x00090ad7) cell_dialer_keypad_pane_g1

0xcff4,	// (0x0009820e) bg_button_pane_cp03_ParamLimits

0xcff4,	// (0x0009820e) bg_button_pane_cp03

0x58d2,	// (0x00090aec) cell_dialer_command_1_pane_g1_ParamLimits

0x58d2,	// (0x00090aec) cell_dialer_command_1_pane_g1

0xd000,	// (0x0009821a) bg_button_pane_cp04

0x58e5,	// (0x00090aff) cell_dialer_command_2_pane_g1

0xb402,	// (0x0009661c) bg_button_pane_cp06

0xd008,	// (0x00098222) dialer_ne_clear_pane_g1

0xb2de,	// (0x000964f8) navi_pane_g2

0xb30c,	// (0x00096526) navi_pane_g3

0x0002,

0xf3ea,	// (0x0009a604) navi_pane_g

0xb39b,	// (0x000965b5) navi_pane_mv_g2

0xb3c2,	// (0x000965dc) navi_pane_mv_g5

0x33d6,	// (0x0008e5f0) navi_pane_mv_t1

0xa766,	// (0x00095980) main_clock2_pane

0x5932,	// (0x00090b4c) main_clock2_list_pane_ParamLimits

0x5932,	// (0x00090b4c) main_clock2_list_pane

0x596c,	// (0x00090b86) main_clock2_pane_t1_ParamLimits

0x596c,	// (0x00090b86) main_clock2_pane_t1

0x59aa,	// (0x00090bc4) main_clock2_pane_t2_ParamLimits

0x59aa,	// (0x00090bc4) main_clock2_pane_t2

0x0004,

0xf7c9,	// (0x0009a9e3) main_clock2_pane_t_ParamLimits

0xf7c9,	// (0x0009a9e3) main_clock2_pane_t

0x5a48,	// (0x00090c62) popup_clock_analogue_window_cp03_ParamLimits

0x5a48,	// (0x00090c62) popup_clock_analogue_window_cp03

0x5a6d,	// (0x00090c87) popup_clock_digital_window_cp02_ParamLimits

0x5a6d,	// (0x00090c87) popup_clock_digital_window_cp02

0x5ae0,	// (0x00090cfa) main_clock2_list_single_pane_ParamLimits

0x5ae0,	// (0x00090cfa) main_clock2_list_single_pane

0xb402,	// (0x0009661c) list_highlight_pane_cp05

0xd026,	// (0x00098240) main_clock2_list_single_pane_t1

0x21aa,	// (0x0008d3c4) popup_toolbar_window_cp04_ParamLimits

0x4efc,	// (0x00090116) camera2_autofocus_pane_g2_ParamLimits

0x4efc,	// (0x00090116) camera2_autofocus_pane_g2

0x4f08,	// (0x00090122) camera2_autofocus_pane_g3_ParamLimits

0x4f08,	// (0x00090122) camera2_autofocus_pane_g3

0x4f14,	// (0x0009012e) camera2_autofocus_pane_g4_ParamLimits

0x4f14,	// (0x0009012e) camera2_autofocus_pane_g4

0x4f20,	// (0x0009013a) camera2_autofocus_pane_g5_ParamLimits

0x4f20,	// (0x0009013a) camera2_autofocus_pane_g5

0x0004,

0xf712,	// (0x0009a92c) camera2_autofocus_pane_g_ParamLimits

0xf712,	// (0x0009a92c) camera2_autofocus_pane_g

0x511b,	// (0x00090335) camera2_autofocus_pane_cp_g2

0x5123,	// (0x0009033d) camera2_autofocus_pane_cp_g3

0x512b,	// (0x00090345) camera2_autofocus_pane_cp_g4

0x5133,	// (0x0009034d) camera2_autofocus_pane_cp_g5

0x0004,

0xf778,	// (0x0009a992) camera2_autofocus_pane_cp_g

0x57d8,	// (0x000909f2) popup_dialer_spcha_window

0x973f,	// (0x00094959) bg_popup_sub_pane_cp07

0xd034,	// (0x0009824e) list_spcha_pane

0xd03c,	// (0x00098256) list_single_spcha_pane_ParamLimits

0xd03c,	// (0x00098256) list_single_spcha_pane

0x973f,	// (0x00094959) list_highlight_pane_cp06

0xd04d,	// (0x00098267) list_single_spcha_pane_t1

0xc25b,	// (0x00097475) popup_call2_audio_out_window_g4_ParamLimits

0xc25b,	// (0x00097475) popup_call2_audio_out_window_g4

0x973f,	// (0x00094959) main_imed2_pane

0x9e09,	// (0x00095023) popup_imed_adjust2_window

0x42dd,	// (0x0008f4f7) popup_imed_trans_window_ParamLimits

0x42dd,	// (0x0008f4f7) popup_imed_trans_window

0xca64,	// (0x00097c7e) popup_blid_sat_info2_window_t1

0xca72,	// (0x00097c8c) popup_blid_sat_info2_window_t2

0x000a,

0xf6a7,	// (0x0009a8c1) popup_blid_sat_info2_window_t

0x5b8a,	// (0x00090da4) aid_size_cell_colour_35

0x5baa,	// (0x00090dc4) aid_size_cell_colour_112

0x5bca,	// (0x00090de4) aid_size_cell_effect

0xc81e,	// (0x00097a38) bg_tb_trans_pane_cp02

0xadd6,	// (0x00095ff0) heading_imed_pane

0x5bea,	// (0x00090e04) listscroll_imed_pane

0xd05b,	// (0x00098275) heading_imed_pane_g1

0xd063,	// (0x0009827d) heading_imed_pane_t1

0xd071,	// (0x0009828b) grid_imed_colour_35_pane_ParamLimits

0xd071,	// (0x0009828b) grid_imed_colour_35_pane

0x5bf6,	// (0x00090e10) grid_imed_effect_pane

0xd089,	// (0x000982a3) list_imed_aspect_pane

0x5c0c,	// (0x00090e26) scroll_pane_cp027_ParamLimits

0x5c0c,	// (0x00090e26) scroll_pane_cp027

0x5c1d,	// (0x00090e37) cell_imed_effect_pane_ParamLimits

0x5c1d,	// (0x00090e37) cell_imed_effect_pane

0xd091,	// (0x000982ab) cell_imed_colour_pane_ParamLimits

0xd091,	// (0x000982ab) cell_imed_colour_pane

0xd0d3,	// (0x000982ed) cell_imed_colour_pane_g1_ParamLimits

0xd0d3,	// (0x000982ed) cell_imed_colour_pane_g1

0xd0e4,	// (0x000982fe) hgihlgiht_grid_pane_cp016_ParamLimits

0xd0e4,	// (0x000982fe) hgihlgiht_grid_pane_cp016

0x5c44,	// (0x00090e5e) cell_imed_effect_pane_g1

0x5c4c,	// (0x00090e66) grid_highlight_pane_cp017

0xd0f5,	// (0x0009830f) list_imed_single_pane_ParamLimits

0xd0f5,	// (0x0009830f) list_imed_single_pane

0x973f,	// (0x00094959) list_highlight_pane_cp07

0xd10b,	// (0x00098325) list_imed_aspect_pane_comp1_t1

0xc81e,	// (0x00097a38) bg_tb_trans_pane_cp05

0xd12d,	// (0x00098347) popup_imed_adjust2_window_g1

0xd154,	// (0x0009836e) popup_imed_adjust2_window_t1

0xd16c,	// (0x00098386) slider_imed_adjust_pane

0xd180,	// (0x0009839a) slider_imed_adjust_pane_g1

0xd190,	// (0x000983aa) slider_imed_adjust_pane_g2

0xd1a0,	// (0x000983ba) slider_imed_adjust_pane_g3

0xd1b1,	// (0x000983cb) slider_imed_adjust_pane_g4

0x0003,

0xf7e6,	// (0x0009aa00) slider_imed_adjust_pane_g

0x5c55,	// (0x00090e6f) aid_size_cell_clipart2

0x5c61,	// (0x00090e7b) grid_imed_clipart_pane

0xd1c2,	// (0x000983dc) scroll_pane_cp031

0x5c6b,	// (0x00090e85) cell_imed_clipart_pane_ParamLimits

0x5c6b,	// (0x00090e85) cell_imed_clipart_pane

0x5c8f,	// (0x00090ea9) cell_imed_clipart_pane_g1

0x973f,	// (0x00094959) grid_highlight_pane_cp014

0x5947,	// (0x00090b61) main_clock2_pane_g1_ParamLimits

0x5947,	// (0x00090b61) main_clock2_pane_g1

0x5a8b,	// (0x00090ca5) aid_call2_pane_cp10

0x5a9d,	// (0x00090cb7) aid_call_pane_cp10

0xb23d,	// (0x00096457) popup_clock_analogue_window_cp10_g1

0xb23d,	// (0x00096457) popup_clock_analogue_window_cp10_g2

0x5aaf,	// (0x00090cc9) popup_clock_analogue_window_cp10_g3

0x5aaf,	// (0x00090cc9) popup_clock_analogue_window_cp10_g4

0xb23d,	// (0x00096457) popup_clock_analogue_window_cp10_g5

0x0004,

0xf7d4,	// (0x0009a9ee) popup_clock_analogue_window_cp10_g

0x5ac1,	// (0x00090cdb) popup_clock_analogue_window_cp10_t1

0x5af2,	// (0x00090d0c) clock_digital_number_pane_cp10_ParamLimits

0x5af2,	// (0x00090d0c) clock_digital_number_pane_cp10

0x5b0a,	// (0x00090d24) clock_digital_number_pane_cp11_ParamLimits

0x5b0a,	// (0x00090d24) clock_digital_number_pane_cp11

0x5b22,	// (0x00090d3c) clock_digital_number_pane_cp12_ParamLimits

0x5b22,	// (0x00090d3c) clock_digital_number_pane_cp12

0x5b3a,	// (0x00090d54) clock_digital_number_pane_cp13_ParamLimits

0x5b3a,	// (0x00090d54) clock_digital_number_pane_cp13

0x5b52,	// (0x00090d6c) clock_digital_separator_pane_cp10_ParamLimits

0x5b52,	// (0x00090d6c) clock_digital_separator_pane_cp10

0x5b6a,	// (0x00090d84) popup_clock_digital_window_cp02_t1_ParamLimits

0x5b6a,	// (0x00090d84) popup_clock_digital_window_cp02_t1

0xa67a,	// (0x00095894) clock_digital_number_pane_cp10_g1

0xa67a,	// (0x00095894) clock_digital_number_pane_cp10_g2

0x0001,

0xf7ef,	// (0x0009aa09) clock_digital_number_pane_cp10_g

0xa67a,	// (0x00095894) clock_digital_separator_pane_cp10_g1

0xa67a,	// (0x00095894) clock_digital_separator_pane_g2_cp10

0xb3ca,	// (0x000965e4) navi_pane_vded_g4

0xb3d3,	// (0x000965ed) navi_pane_vded_g5

0xb3dc,	// (0x000965f6) navi_pane_vded_t1

0x973f,	// (0x00094959) main_vded_pane

0x5c98,	// (0x00090eb2) main_vded_pane_g1

0x5ca2,	// (0x00090ebc) main_vded_pane_g2

0x5cac,	// (0x00090ec6) main_vded_pane_g3

0x0002,

0xf7f4,	// (0x0009aa0e) main_vded_pane_g

0x5cb6,	// (0x00090ed0) main_vded_pane_t1

0x5cc4,	// (0x00090ede) main_vded_pane_t2

0x0001,

0xf7fb,	// (0x0009aa15) main_vded_pane_t

0x5cd2,	// (0x00090eec) vded_slider_pane

0x5cdc,	// (0x00090ef6) vded_video_pane

0xd1ca,	// (0x000983e4) vded_video_pane_g1

0x5ce6,	// (0x00090f00) vded_video_pane_g2

0xcc28,	// (0x00097e42) vded_video_pane_g3

0x0002,

0xf800,	// (0x0009aa1a) vded_video_pane_g

0xd1d4,	// (0x000983ee) vded_slider_pane_g1

0xd1dd,	// (0x000983f7) vded_slider_pane_g2

0xd1e6,	// (0x00098400) vded_slider_pane_g3

0xd1ef,	// (0x00098409) vded_slider_pane_g4

0xd1f8,	// (0x00098412) vded_slider_pane_g5

0x0004,

0xf807,	// (0x0009aa21) vded_slider_pane_g

0x56b7,	// (0x000908d1) mup3_rocker_pane_ParamLimits

0x56b7,	// (0x000908d1) mup3_rocker_pane

0x5cef,	// (0x00090f09) mup3_control_keys_pane_g1

0x5cf7,	// (0x00090f11) mup3_control_keys_pane_g2

0x5cff,	// (0x00090f19) mup3_control_keys_pane_g3

0x5d07,	// (0x00090f21) mup3_control_keys_pane_g4

0x0003,

0xf812,	// (0x0009aa2c) mup3_control_keys_pane_g

0x1184,	// (0x0008c39e) popup_toolbar2_fixed_window_cp01_ParamLimits

0x1184,	// (0x0008c39e) popup_toolbar2_fixed_window_cp01

0x56eb,	// (0x00090905) popup_toolbar2_fixed_window_cp02_ParamLimits

0x56eb,	// (0x00090905) popup_toolbar2_fixed_window_cp02

0xbb8e,	// (0x00096da8) popup_call2_audio_second_window_t4_ParamLimits

0xbb8e,	// (0x00096da8) popup_call2_audio_second_window_t4

0xc0c8,	// (0x000972e2) popup_call2_audio_first_window_t6_ParamLimits

0xc0c8,	// (0x000972e2) popup_call2_audio_first_window_t6

0xc35e,	// (0x00097578) popup_call2_audio_out_window_t6_ParamLimits

0xc35e,	// (0x00097578) popup_call2_audio_out_window_t6

0x973f,	// (0x00094959) main_vitu_pane

0x5d17,	// (0x00090f31) aid_size_cell_itu_ParamLimits

0x5d17,	// (0x00090f31) aid_size_cell_itu

0xa4a9,	// (0x000956c3) bg_popup_window_pane_cp08_ParamLimits

0xa4a9,	// (0x000956c3) bg_popup_window_pane_cp08

0x5d2d,	// (0x00090f47) field_vitu_entry_pane_ParamLimits

0x5d2d,	// (0x00090f47) field_vitu_entry_pane

0x5d44,	// (0x00090f5e) grid_vitu_function_pane_ParamLimits

0x5d44,	// (0x00090f5e) grid_vitu_function_pane

0x5d5f,	// (0x00090f79) grid_vitu_itu_pane_ParamLimits

0x5d5f,	// (0x00090f79) grid_vitu_itu_pane

0x5d7d,	// (0x00090f97) cell_vitu_itu_pane_ParamLimits

0x5d7d,	// (0x00090f97) cell_vitu_itu_pane

0x5da1,	// (0x00090fbb) cell_vitu_function_pane_ParamLimits

0x5da1,	// (0x00090fbb) cell_vitu_function_pane

0xa4a9,	// (0x000956c3) bg_popup_sub_pane_cp08_ParamLimits

0xa4a9,	// (0x000956c3) bg_popup_sub_pane_cp08

0x5dbc,	// (0x00090fd6) field_vitu_entry_pane_t1_ParamLimits

0x5dbc,	// (0x00090fd6) field_vitu_entry_pane_t1

0xd219,	// (0x00098433) field_vitu_entry_pane_t2_ParamLimits

0xd219,	// (0x00098433) field_vitu_entry_pane_t2

0x0001,

0xf820,	// (0x0009aa3a) field_vitu_entry_pane_t_ParamLimits

0xf820,	// (0x0009aa3a) field_vitu_entry_pane_t

0xd236,	// (0x00098450) bg_button_pane_cp05_ParamLimits

0xd236,	// (0x00098450) bg_button_pane_cp05

0x5ddb,	// (0x00090ff5) cell_vitu_itu_pane_g1

0x5df3,	// (0x0009100d) cell_vitu_itu_pane_t1_ParamLimits

0x5df3,	// (0x0009100d) cell_vitu_itu_pane_t1

0x5e05,	// (0x0009101f) cell_vitu_itu_pane_t2_ParamLimits

0x5e05,	// (0x0009101f) cell_vitu_itu_pane_t2

0x0002,

0xf825,	// (0x0009aa3f) cell_vitu_itu_pane_t_ParamLimits

0xf825,	// (0x0009aa3f) cell_vitu_itu_pane_t

0xd244,	// (0x0009845e) bg_button_pane_cp07

0x5e48,	// (0x00091062) cell_vitu_function_pane_g1

0x9c4a,	// (0x00094e64) main_calc_pane_g1

0x0f9b,	// (0x0008c1b5) aid_visual_content_pane

0x973f,	// (0x00094959) main_vradio_pane

0x5e51,	// (0x0009106b) main_vradio_pane_g1_ParamLimits

0x5e51,	// (0x0009106b) main_vradio_pane_g1

0xd24e,	// (0x00098468) main_vradio_pane_g2_ParamLimits

0xd24e,	// (0x00098468) main_vradio_pane_g2

0x0001,

0xf82c,	// (0x0009aa46) main_vradio_pane_g_ParamLimits

0xf82c,	// (0x0009aa46) main_vradio_pane_g

0x5e6a,	// (0x00091084) main_vradio_pane_t1_ParamLimits

0x5e6a,	// (0x00091084) main_vradio_pane_t1

0x5e7f,	// (0x00091099) main_vradio_pane_t2_ParamLimits

0x5e7f,	// (0x00091099) main_vradio_pane_t2

0xd25b,	// (0x00098475) main_vradio_pane_t3_ParamLimits

0xd25b,	// (0x00098475) main_vradio_pane_t3

0x0002,

0xf831,	// (0x0009aa4b) main_vradio_pane_t_ParamLimits

0xf831,	// (0x0009aa4b) main_vradio_pane_t

0x5e94,	// (0x000910ae) vradio_rocker_control_pane_ParamLimits

0x5e94,	// (0x000910ae) vradio_rocker_control_pane

0x5ea6,	// (0x000910c0) vradio_station_info_pane_ParamLimits

0x5ea6,	// (0x000910c0) vradio_station_info_pane

0xd26f,	// (0x00098489) vradio_frequency_info_pane_ParamLimits

0xd26f,	// (0x00098489) vradio_frequency_info_pane

0xcc28,	// (0x00097e42) vradio_station_info_pane_g1

0xd27e,	// (0x00098498) vradio_station_info_pane_t1_ParamLimits

0xd27e,	// (0x00098498) vradio_station_info_pane_t1

0xd2a0,	// (0x000984ba) vradio_station_info_pane_t2_ParamLimits

0xd2a0,	// (0x000984ba) vradio_station_info_pane_t2

0x0001,

0xf838,	// (0x0009aa52) vradio_station_info_pane_t_ParamLimits

0xf838,	// (0x0009aa52) vradio_station_info_pane_t

0xd2b2,	// (0x000984cc) vradio_tuning_pane

0xd2ba,	// (0x000984d4) vradio_rocker_control_pane_g1

0xd2c2,	// (0x000984dc) vradio_rocker_control_pane_g2

0xd2ca,	// (0x000984e4) vradio_rocker_control_pane_g3

0xd2d2,	// (0x000984ec) vradio_rocker_control_pane_g4

0xd2da,	// (0x000984f4) vradio_rocker_control_pane_g5

0x0004,

0xf83d,	// (0x0009aa57) vradio_rocker_control_pane_g

0x5eb8,	// (0x000910d2) vradio_frequency_info_pane_g1

0xd2e2,	// (0x000984fc) vradio_frequency_info_pane_t1_ParamLimits

0xd2e2,	// (0x000984fc) vradio_frequency_info_pane_t1

0x5ec2,	// (0x000910dc) vradio_tuning_pane_g1

0x5ecd,	// (0x000910e7) vradio_tuning_pane_t1

0x9765,	// (0x0009497f) area_side_right_pane_ParamLimits

0x9765,	// (0x0009497f) area_side_right_pane

0xc7d9,	// (0x000979f3) status_small_pane_g1

0xc7e1,	// (0x000979fb) status_small_pane_g2

0xc7ea,	// (0x00097a04) status_small_pane_g3

0xc7f3,	// (0x00097a0d) status_small_pane_g4

0x0003,

0xf5fd,	// (0x0009a817) status_small_pane_g

0xc7fc,	// (0x00097a16) status_small_pane_t1

0x973f,	// (0x00094959) main_video3_pane

0xd2f6,	// (0x00098510) cams_zoom_vslider_pane

0xd2fe,	// (0x00098518) image3_wide_pane_ParamLimits

0xd2fe,	// (0x00098518) image3_wide_pane

0xd318,	// (0x00098532) image3_wide_small_pane

0xd324,	// (0x0009853e) main_video3_pane_g1_ParamLimits

0xd324,	// (0x0009853e) main_video3_pane_g1

0xd340,	// (0x0009855a) main_video3_pane_g2_ParamLimits

0xd340,	// (0x0009855a) main_video3_pane_g2

0x0001,

0xf848,	// (0x0009aa62) main_video3_pane_g_ParamLimits

0xf848,	// (0x0009aa62) main_video3_pane_g

0xd35c,	// (0x00098576) main_video3_pane_t1_ParamLimits

0xd35c,	// (0x00098576) main_video3_pane_t1

0xd387,	// (0x000985a1) main_video3_pane_t2_ParamLimits

0xd387,	// (0x000985a1) main_video3_pane_t2

0xd3b2,	// (0x000985cc) main_video3_pane_t3_ParamLimits

0xd3b2,	// (0x000985cc) main_video3_pane_t3

0x0002,

0xf84d,	// (0x0009aa67) main_video3_pane_t_ParamLimits

0xf84d,	// (0x0009aa67) main_video3_pane_t

0xd3df,	// (0x000985f9) cams_zoom_vslider_pane_g1

0xd3e8,	// (0x00098602) cams_zoom_vslider_pane_g2

0x0001,

0xf854,	// (0x0009aa6e) cams_zoom_vslider_pane_g

0xd3f0,	// (0x0009860a) small_slider_vertical_pane

0xcc28,	// (0x00097e42) small_slider_vertical_pane_g1

0xcc28,	// (0x00097e42) small_slider_vertical_pane_g2

0xd3f8,	// (0x00098612) small_slider_vertical_pane_g3

0x0002,

0xf859,	// (0x0009aa73) small_slider_vertical_pane_g

0x973f,	// (0x00094959) main_hwr_training_pane

0xd401,	// (0x0009861b) hwr_training_instruct_pane_ParamLimits

0xd401,	// (0x0009861b) hwr_training_instruct_pane

0x5edc,	// (0x000910f6) hwr_training_navi_pane_ParamLimits

0x5edc,	// (0x000910f6) hwr_training_navi_pane

0x5efb,	// (0x00091115) hwr_training_write_pane_ParamLimits

0x5efb,	// (0x00091115) hwr_training_write_pane

0x973f,	// (0x00094959) bg_frame_shadow_pane

0xd438,	// (0x00098652) hwr_training_write_pane_g1

0xd440,	// (0x0009865a) hwr_training_write_pane_g2

0xd448,	// (0x00098662) hwr_training_write_pane_g3

0xd450,	// (0x0009866a) hwr_training_write_pane_g4

0xd458,	// (0x00098672) hwr_training_write_pane_g5

0xd460,	// (0x0009867a) hwr_training_write_pane_g6

0xd468,	// (0x00098682) hwr_training_write_pane_g7

0x0006,

0xf860,	// (0x0009aa7a) hwr_training_write_pane_g

0x9f4a,	// (0x00095164) hwr_training_navi_pane_g1_ParamLimits

0x9f4a,	// (0x00095164) hwr_training_navi_pane_g1

0x9f5c,	// (0x00095176) hwr_training_navi_pane_g2_ParamLimits

0x9f5c,	// (0x00095176) hwr_training_navi_pane_g2

0x9f6e,	// (0x00095188) hwr_training_navi_pane_g3_ParamLimits

0x9f6e,	// (0x00095188) hwr_training_navi_pane_g3

0x9f7e,	// (0x00095198) hwr_training_navi_pane_g4_ParamLimits

0x9f7e,	// (0x00095198) hwr_training_navi_pane_g4

0x0004,

0xf86f,	// (0x0009aa89) hwr_training_navi_pane_g_ParamLimits

0xf86f,	// (0x0009aa89) hwr_training_navi_pane_g

0x9f8b,	// (0x000951a5) hwr_training_navi_pane_t1

0x5f45,	// (0x0009115f) list_single_hwr_training_instruct_pane_ParamLimits

0x5f45,	// (0x0009115f) list_single_hwr_training_instruct_pane

0xd470,	// (0x0009868a) list_single_hwr_training_instruct_pane_t1

0xcb68,	// (0x00097d82) bg_frame_shadow_pane_g1

0xd47f,	// (0x00098699) bg_frame_shadow_pane_g2

0xd487,	// (0x000986a1) bg_frame_shadow_pane_g3

0xd48f,	// (0x000986a9) bg_frame_shadow_pane_g4

0xd497,	// (0x000986b1) bg_frame_shadow_pane_g5

0xd49f,	// (0x000986b9) bg_frame_shadow_pane_g6

0xd4a7,	// (0x000986c1) bg_frame_shadow_pane_g7

0xa831,	// (0x00095a4b) bg_frame_shadow_pane_g8

0x0007,

0xf87a,	// (0x0009aa94) bg_frame_shadow_pane_g

0x973f,	// (0x00094959) main_video_tele_dialer_pane

0x5f5c,	// (0x00091176) aid_size_cell_video_keypad_ParamLimits

0x5f5c,	// (0x00091176) aid_size_cell_video_keypad

0x5f76,	// (0x00091190) grid_video_dialer_keypad_pane_ParamLimits

0x5f76,	// (0x00091190) grid_video_dialer_keypad_pane

0x5fc4,	// (0x000911de) video_down_pane_cp_ParamLimits

0x5fc4,	// (0x000911de) video_down_pane_cp

0x5ff6,	// (0x00091210) cell_video_dialer_keypad_pane_ParamLimits

0x5ff6,	// (0x00091210) cell_video_dialer_keypad_pane

0xd4af,	// (0x000986c9) bg_button_pane_cp08_ParamLimits

0xd4af,	// (0x000986c9) bg_button_pane_cp08

0x6018,	// (0x00091232) cell_video_dialer_keypad_pane_g1_ParamLimits

0x6018,	// (0x00091232) cell_video_dialer_keypad_pane_g1

0x56a1,	// (0x000908bb) mup3_rocker2_pane_ParamLimits

0x56a1,	// (0x000908bb) mup3_rocker2_pane

0xcc28,	// (0x00097e42) mup3_rocker2_pane_g1

0x41c6,	// (0x0008f3e0) main_dialer2_pane

0x973f,	// (0x00094959) main_mp4_pane

0x9fa1,	// (0x000951bb) main_mp4_pane_g1_ParamLimits

0x9fa1,	// (0x000951bb) main_mp4_pane_g1

0x9fa1,	// (0x000951bb) main_mp4_pane_g2_ParamLimits

0x9fa1,	// (0x000951bb) main_mp4_pane_g2

0x6053,	// (0x0009126d) main_mp4_pane_g3_ParamLimits

0x6053,	// (0x0009126d) main_mp4_pane_g3

0x9faf,	// (0x000951c9) main_mp4_pane_g4_ParamLimits

0x9faf,	// (0x000951c9) main_mp4_pane_g4

0x9fd7,	// (0x000951f1) main_mp4_pane_g5_ParamLimits

0x9fd7,	// (0x000951f1) main_mp4_pane_g5

0x0005,

0xf89a,	// (0x0009aab4) main_mp4_pane_g_ParamLimits

0xf89a,	// (0x0009aab4) main_mp4_pane_g

0xa027,	// (0x00095241) main_mp4_pane_t1_ParamLimits

0xa027,	// (0x00095241) main_mp4_pane_t1

0xa083,	// (0x0009529d) main_mp4_pane_t2_ParamLimits

0xa083,	// (0x0009529d) main_mp4_pane_t2

0xd4bb,	// (0x000986d5) main_mp4_pane_t3_ParamLimits

0xd4bb,	// (0x000986d5) main_mp4_pane_t3

0xa0d5,	// (0x000952ef) main_mp4_pane_t4_ParamLimits

0xa0d5,	// (0x000952ef) main_mp4_pane_t4

0x0003,

0xf8a7,	// (0x0009aac1) main_mp4_pane_t_ParamLimits

0xf8a7,	// (0x0009aac1) main_mp4_pane_t

0xa119,	// (0x00095333) mp4_progress_pane_ParamLimits

0xa119,	// (0x00095333) mp4_progress_pane

0xa163,	// (0x0009537d) mp4_rocker_pane_ParamLimits

0xa163,	// (0x0009537d) mp4_rocker_pane

0xd4e3,	// (0x000986fd) mp4_progress_pane_t1

0xd4fc,	// (0x00098716) mp4_progress_pane_t2

0x0001,

0xf8b0,	// (0x0009aaca) mp4_progress_pane_t

0xd515,	// (0x0009872f) mup_progress_pane_cp04

0xcc28,	// (0x00097e42) mp4_rocker_pane_g1

0x608f,	// (0x000912a9) aid_cell_size_keypad2_ParamLimits

0x608f,	// (0x000912a9) aid_cell_size_keypad2

0x60a5,	// (0x000912bf) dialer2_ne_pane_ParamLimits

0x60a5,	// (0x000912bf) dialer2_ne_pane

0x60bf,	// (0x000912d9) grid_dialer2_keypad_pane_ParamLimits

0x60bf,	// (0x000912d9) grid_dialer2_keypad_pane

0xca0b,	// (0x00097c25) bg_popup_call_pane_cp07_ParamLimits

0xca0b,	// (0x00097c25) bg_popup_call_pane_cp07

0x60dd,	// (0x000912f7) dialer2_ne_pane_t1_ParamLimits

0x60dd,	// (0x000912f7) dialer2_ne_pane_t1

0x611a,	// (0x00091334) cell_dialer2_keypad_pane_ParamLimits

0x611a,	// (0x00091334) cell_dialer2_keypad_pane

0xd533,	// (0x0009874d) bg_button_pane_pane_cp04_ParamLimits

0xd533,	// (0x0009874d) bg_button_pane_pane_cp04

0x613c,	// (0x00091356) cell_dialer2_keypad_pane_g1_ParamLimits

0x613c,	// (0x00091356) cell_dialer2_keypad_pane_g1

0x207e,	// (0x0008d298) aid_placing_vt_set_content_ParamLimits

0x207e,	// (0x0008d298) aid_placing_vt_set_content

0x20a6,	// (0x0008d2c0) aid_placing_vt_set_title_ParamLimits

0x20a6,	// (0x0008d2c0) aid_placing_vt_set_title

0x973f,	// (0x00094959) main_image3_pane

0x6202,	// (0x0009141c) area_side_right_pane_cp01_ParamLimits

0x6202,	// (0x0009141c) area_side_right_pane_cp01

0x9fa1,	// (0x000951bb) main_image3_pane_g1_ParamLimits

0x9fa1,	// (0x000951bb) main_image3_pane_g1

0x6219,	// (0x00091433) main_image3_pane_g2_ParamLimits

0x6219,	// (0x00091433) main_image3_pane_g2

0x6241,	// (0x0009145b) main_image3_pane_g3_ParamLimits

0x6241,	// (0x0009145b) main_image3_pane_g3

0x626b,	// (0x00091485) main_image3_pane_g4_ParamLimits

0x626b,	// (0x00091485) main_image3_pane_g4

0x0003,

0xf8bf,	// (0x0009aad9) main_image3_pane_g_ParamLimits

0xf8bf,	// (0x0009aad9) main_image3_pane_g

0x6295,	// (0x000914af) main_image3_pane_t1_ParamLimits

0x6295,	// (0x000914af) main_image3_pane_t1

0x62ed,	// (0x00091507) main_image3_pane_t2_ParamLimits

0x62ed,	// (0x00091507) main_image3_pane_t2

0x633f,	// (0x00091559) main_image3_pane_t3_ParamLimits

0x633f,	// (0x00091559) main_image3_pane_t3

0x0003,

0xf8c8,	// (0x0009aae2) main_image3_pane_t_ParamLimits

0xf8c8,	// (0x0009aae2) main_image3_pane_t

0xa4a9,	// (0x000956c3) grid_sctrl_middle_pane_cp01_ParamLimits

0xa4a9,	// (0x000956c3) grid_sctrl_middle_pane_cp01

0x63c7,	// (0x000915e1) cell_sctrl_middle_pane_cp01_ParamLimits

0x63c7,	// (0x000915e1) cell_sctrl_middle_pane_cp01

0x63e4,	// (0x000915fe) cell_sctrl_middle_pane_cp01_g1_ParamLimits

0x63e4,	// (0x000915fe) cell_sctrl_middle_pane_cp01_g1

0x973f,	// (0x00094959) main_call4_pane

0x63fa,	// (0x00091614) aid_size_button_call4_ParamLimits

0x63fa,	// (0x00091614) aid_size_button_call4

0x642b,	// (0x00091645) call4_windows_pane_ParamLimits

0x642b,	// (0x00091645) call4_windows_pane

0x644b,	// (0x00091665) grid_call4_button_pane_ParamLimits

0x644b,	// (0x00091665) grid_call4_button_pane

0xd53f,	// (0x00098759) call4_windows_conf_pane

0xd554,	// (0x0009876e) popup_call4_audio_first_window_ParamLimits

0xd554,	// (0x0009876e) popup_call4_audio_first_window

0xd5a0,	// (0x000987ba) popup_call4_audio_second_window_ParamLimits

0xd5a0,	// (0x000987ba) popup_call4_audio_second_window

0xd5b4,	// (0x000987ce) popup_call4_audio_wait_window_ParamLimits

0xd5b4,	// (0x000987ce) popup_call4_audio_wait_window

0x6478,	// (0x00091692) cell_call4_button_pane_ParamLimits

0x6478,	// (0x00091692) cell_call4_button_pane

0x64a1,	// (0x000916bb) bg_button_pane_cp09_ParamLimits

0x64a1,	// (0x000916bb) bg_button_pane_cp09

0x64ad,	// (0x000916c7) cell_call4_button_pane_g1_ParamLimits

0x64ad,	// (0x000916c7) cell_call4_button_pane_g1

0x64d3,	// (0x000916ed) cell_call4_button_pane_t1_ParamLimits

0x64d3,	// (0x000916ed) cell_call4_button_pane_t1

0xd5fc,	// (0x00098816) popup_call4_audio_conf_window_ParamLimits

0xd5fc,	// (0x00098816) popup_call4_audio_conf_window

0x5701,	// (0x0009091b) mup3_progress_pane_t1_ParamLimits

0x5720,	// (0x0009093a) mup3_progress_pane_t2_ParamLimits

0xcf03,	// (0x0009811d) mup3_progress_pane_t3_ParamLimits

0xf7a1,	// (0x0009a9bb) mup3_progress_pane_t_ParamLimits

0xcf20,	// (0x0009813a) mup_progress_pane_cp03_ParamLimits

0x5d0f,	// (0x00090f29) mup3_control_keys_pane_g4_copy1

0xa147,	// (0x00095361) mp4_rocker2_pane_ParamLimits

0xa147,	// (0x00095361) mp4_rocker2_pane

0xd610,	// (0x0009882a) mp4_rocker2_pane_g1

0xd618,	// (0x00098832) mp4_rocker2_pane_g2

0xa1b5,	// (0x000953cf) mp4_rocker2_pane_g3

0xa1bd,	// (0x000953d7) mp4_rocker2_pane_g4

0xa1c5,	// (0x000953df) mp4_rocker2_pane_g5

0x0004,

0xf8d1,	// (0x0009aaeb) mp4_rocker2_pane_g

0x973f,	// (0x00094959) main_camera4_pane

0x973f,	// (0x00094959) main_video4_pane

0x5f92,	// (0x000911ac) main_video_tele_dialer_pane_t1_ParamLimits

0x5f92,	// (0x000911ac) main_video_tele_dialer_pane_t1

0x5fab,	// (0x000911c5) main_video_tele_dialer_pane_t2_ParamLimits

0x5fab,	// (0x000911c5) main_video_tele_dialer_pane_t2

0x0001,

0xf88b,	// (0x0009aaa5) main_video_tele_dialer_pane_t_ParamLimits

0xf88b,	// (0x0009aaa5) main_video_tele_dialer_pane_t

0x6511,	// (0x0009172b) cam4_autofocus_pane_ParamLimits

0x6511,	// (0x0009172b) cam4_autofocus_pane

0x6527,	// (0x00091741) cam4_image_uncrop_pane_ParamLimits

0x6527,	// (0x00091741) cam4_image_uncrop_pane

0x6541,	// (0x0009175b) cam4_indicators_pane_ParamLimits

0x6541,	// (0x0009175b) cam4_indicators_pane

0x656c,	// (0x00091786) main_camera4_pane_g1_ParamLimits

0x656c,	// (0x00091786) main_camera4_pane_g1

0x657e,	// (0x00091798) main_camera4_pane_g2_ParamLimits

0x657e,	// (0x00091798) main_camera4_pane_g2

0x6591,	// (0x000917ab) main_camera4_pane_g3_ParamLimits

0x6591,	// (0x000917ab) main_camera4_pane_g3

0x65a4,	// (0x000917be) main_camera4_pane_g4_ParamLimits

0x65a4,	// (0x000917be) main_camera4_pane_g4

0x65b7,	// (0x000917d1) main_camera4_pane_g5_ParamLimits

0x65b7,	// (0x000917d1) main_camera4_pane_g5

0x0005,

0xf8dc,	// (0x0009aaf6) main_camera4_pane_g_ParamLimits

0xf8dc,	// (0x0009aaf6) main_camera4_pane_g

0x65db,	// (0x000917f5) main_camera4_pane_t1_ParamLimits

0x65db,	// (0x000917f5) main_camera4_pane_t1

0xce88,	// (0x000980a2) bg_tb_trans_pane_cp06

0xa1f1,	// (0x0009540b) cam4_indicators_pane_g1

0xa202,	// (0x0009541c) cam4_indicators_pane_g2

0x0002,

0xf8f7,	// (0x0009ab11) cam4_indicators_pane_g

0xa220,	// (0x0009543a) cam4_indicators_pane_t1

0x663f,	// (0x00091859) main_video4_pane_g1_ParamLimits

0x663f,	// (0x00091859) main_video4_pane_g1

0x664e,	// (0x00091868) main_video4_pane_g2_ParamLimits

0x664e,	// (0x00091868) main_video4_pane_g2

0x665d,	// (0x00091877) main_video4_pane_g3_ParamLimits

0x665d,	// (0x00091877) main_video4_pane_g3

0x666c,	// (0x00091886) main_video4_pane_g4_ParamLimits

0x666c,	// (0x00091886) main_video4_pane_g4

0x0004,

0xf8fe,	// (0x0009ab18) main_video4_pane_g_ParamLimits

0xf8fe,	// (0x0009ab18) main_video4_pane_g

0x668a,	// (0x000918a4) vid4_indicators_pane_ParamLimits

0x668a,	// (0x000918a4) vid4_indicators_pane

0x66b8,	// (0x000918d2) video4_image_uncrop_cif_pane_ParamLimits

0x66b8,	// (0x000918d2) video4_image_uncrop_cif_pane

0x66d2,	// (0x000918ec) video4_image_uncrop_nhd_pane_ParamLimits

0x66d2,	// (0x000918ec) video4_image_uncrop_nhd_pane

0x6527,	// (0x00091741) video4_image_uncrop_vga_pane_ParamLimits

0x6527,	// (0x00091741) video4_image_uncrop_vga_pane

0xa4a9,	// (0x000956c3) bg_tb_trans_pane_cp07

0xa24a,	// (0x00095464) vid4_indicators_pane_g1

0xa25e,	// (0x00095478) vid4_indicators_pane_g2

0xa272,	// (0x0009548c) vid4_indicators_pane_g3

0x0004,

0xf909,	// (0x0009ab23) vid4_indicators_pane_g

0xa29f,	// (0x000954b9) vid4_indicators_pane_t1

0x66e6,	// (0x00091900) cam4_autofocus_pane_g1

0x66ee,	// (0x00091908) cam4_autofocus_pane_g2

0x66f6,	// (0x00091910) cam4_autofocus_pane_g3

0x0002,

0xf914,	// (0x0009ab2e) cam4_autofocus_pane_g

0x66fe,	// (0x00091918) cam4_autofocus_pane_g3_copy1

0x5fda,	// (0x000911f4) video_down_pane_cp_t1

0x5fe8,	// (0x00091202) video_down_pane_cp_t2

0x0001,

0xf890,	// (0x0009aaaa) video_down_pane_cp_t

0xa4a9,	// (0x000956c3) popup_vitu2_window_ParamLimits

0xa4a9,	// (0x000956c3) popup_vitu2_window

0x6706,	// (0x00091920) aid_size_cell2_itu2_ParamLimits

0x6706,	// (0x00091920) aid_size_cell2_itu2

0x672c,	// (0x00091946) aid_size_cell_itu2_ParamLimits

0x672c,	// (0x00091946) aid_size_cell_itu2

0x6788,	// (0x000919a2) bg_popup_window_pane_cp09_ParamLimits

0x6788,	// (0x000919a2) bg_popup_window_pane_cp09

0x6796,	// (0x000919b0) field_vitu2_entry_pane_ParamLimits

0x6796,	// (0x000919b0) field_vitu2_entry_pane

0x67bc,	// (0x000919d6) grid_vitu2_function_pane_ParamLimits

0x67bc,	// (0x000919d6) grid_vitu2_function_pane

0x680d,	// (0x00091a27) grid_vitu2_itu_pane_ParamLimits

0x680d,	// (0x00091a27) grid_vitu2_itu_pane

0x689e,	// (0x00091ab8) cell_vitu2_itu_pane_ParamLimits

0x689e,	// (0x00091ab8) cell_vitu2_itu_pane

0x68c2,	// (0x00091adc) cell_vitu2_function_pane_ParamLimits

0x68c2,	// (0x00091adc) cell_vitu2_function_pane

0xd632,	// (0x0009884c) bg_popup_call_pane_cp08_ParamLimits

0xd632,	// (0x0009884c) bg_popup_call_pane_cp08

0xd64b,	// (0x00098865) field_vitu2_entry_pane_g1

0xd657,	// (0x00098871) field_vitu2_entry_pane_g2

0x0002,

0xf91b,	// (0x0009ab35) field_vitu2_entry_pane_g

0x03ab,	// (0x0008b5c5) field_vitu2_entry_pane_t1_ParamLimits

0x03ab,	// (0x0008b5c5) field_vitu2_entry_pane_t1

0x6901,	// (0x00091b1b) field_vitu2_entry_pane_t2_ParamLimits

0x6901,	// (0x00091b1b) field_vitu2_entry_pane_t2

0x0001,

0xf922,	// (0x0009ab3c) field_vitu2_entry_pane_t_ParamLimits

0xf922,	// (0x0009ab3c) field_vitu2_entry_pane_t

0x691e,	// (0x00091b38) bg_button_pane_cp010_ParamLimits

0x691e,	// (0x00091b38) bg_button_pane_cp010

0x692c,	// (0x00091b46) cell_vitu2_itu_pane_g1

0x6957,	// (0x00091b71) cell_vitu2_itu_pane_t1_ParamLimits

0x6957,	// (0x00091b71) cell_vitu2_itu_pane_t1

0x03da,	// (0x0008b5f4) cell_vitu2_itu_pane_t2_ParamLimits

0x03da,	// (0x0008b5f4) cell_vitu2_itu_pane_t2

0x0002,

0xf92c,	// (0x0009ab46) cell_vitu2_itu_pane_t_ParamLimits

0xf92c,	// (0x0009ab46) cell_vitu2_itu_pane_t

0xa4a9,	// (0x000956c3) bg_button_pane_cp011

0x69b5,	// (0x00091bcf) cell_vitu2_function_pane_g1

0x973f,	// (0x00094959) main_myfav_hc_pane

0x638f,	// (0x000915a9) popup_image3_note_pane_ParamLimits

0x638f,	// (0x000915a9) popup_image3_note_pane

0x63ab,	// (0x000915c5) popup_image3_tool_bar_pane_ParamLimits

0x63ab,	// (0x000915c5) popup_image3_tool_bar_pane

0x0468,	// (0x0008b682) cell_vitu2_itu_pane_t3_ParamLimits

0x0468,	// (0x0008b682) cell_vitu2_itu_pane_t3

0x973f,	// (0x00094959) bg_popup_trans_pane

0xd679,	// (0x00098893) grid_image3_tool_bar_pane

0xd683,	// (0x0009889d) bg_popup_trans_pane_g1

0xab86,	// (0x00095da0) bg_popup_trans_pane_g2

0xd68b,	// (0x000988a5) bg_popup_trans_pane_g3

0xd693,	// (0x000988ad) bg_popup_trans_pane_g4

0xd69b,	// (0x000988b5) bg_popup_trans_pane_g5

0xd6a3,	// (0x000988bd) bg_popup_trans_pane_g6

0xd6ab,	// (0x000988c5) bg_popup_trans_pane_g7

0xd6b3,	// (0x000988cd) bg_popup_trans_pane_g8

0xab66,	// (0x00095d80) bg_popup_trans_pane_g9

0x0008,

0xf933,	// (0x0009ab4d) bg_popup_trans_pane_g

0xd6bb,	// (0x000988d5) cell_image3_tool_bar_pane_ParamLimits

0xd6bb,	// (0x000988d5) cell_image3_tool_bar_pane

0xcc28,	// (0x00097e42) cell_image3_tool_bar_pane_g1

0x973f,	// (0x00094959) bg_popup_trans_pane_cp1

0xd6cf,	// (0x000988e9) popup_image3_note_pane_t1

0xd6dd,	// (0x000988f7) popup_image3_note_pane_t2

0xd6eb,	// (0x00098905) popup_image3_note_pane_t3

0x0002,

0xf946,	// (0x0009ab60) popup_image3_note_pane_t

0xd6f9,	// (0x00098913) popup_image3_note_pane_t3_copy1

0x69c9,	// (0x00091be3) bg_myfav_hc_instruction_pane_ParamLimits

0x69c9,	// (0x00091be3) bg_myfav_hc_instruction_pane

0x69df,	// (0x00091bf9) cell_myfav_contact_pane_ParamLimits

0x69df,	// (0x00091bf9) cell_myfav_contact_pane

0x69fd,	// (0x00091c17) cell_myfav_contact_pane_cp1_ParamLimits

0x69fd,	// (0x00091c17) cell_myfav_contact_pane_cp1

0x6a15,	// (0x00091c2f) cell_myfav_contact_pane_cp2_ParamLimits

0x6a15,	// (0x00091c2f) cell_myfav_contact_pane_cp2

0x6a2d,	// (0x00091c47) cell_myfav_contact_pane_cp3_ParamLimits

0x6a2d,	// (0x00091c47) cell_myfav_contact_pane_cp3

0x6a44,	// (0x00091c5e) cell_myfav_contact_pane_cp4_ParamLimits

0x6a44,	// (0x00091c5e) cell_myfav_contact_pane_cp4

0x6a5c,	// (0x00091c76) cell_myfav_contact_pane_cp5_ParamLimits

0x6a5c,	// (0x00091c76) cell_myfav_contact_pane_cp5

0x6a70,	// (0x00091c8a) cell_myfav_contact_pane_cp6_ParamLimits

0x6a70,	// (0x00091c8a) cell_myfav_contact_pane_cp6

0x6a86,	// (0x00091ca0) cell_myfav_contact_pane_cp7_ParamLimits

0x6a86,	// (0x00091ca0) cell_myfav_contact_pane_cp7

0xd707,	// (0x00098921) listscroll_gen_pane_cp05

0x6aa0,	// (0x00091cba) main_myfav_hc_pane_g1_ParamLimits

0x6aa0,	// (0x00091cba) main_myfav_hc_pane_g1

0x6aba,	// (0x00091cd4) main_myfav_hc_pane_g2_ParamLimits

0x6aba,	// (0x00091cd4) main_myfav_hc_pane_g2

0x0002,

0xf94d,	// (0x0009ab67) main_myfav_hc_pane_g_ParamLimits

0xf94d,	// (0x0009ab67) main_myfav_hc_pane_g

0x6aec,	// (0x00091d06) main_myfav_hc_pane_t1_ParamLimits

0x6aec,	// (0x00091d06) main_myfav_hc_pane_t1

0xd710,	// (0x0009892a) main_myfav_hc_pane_t2_ParamLimits

0xd710,	// (0x0009892a) main_myfav_hc_pane_t2

0xd722,	// (0x0009893c) main_myfav_hc_pane_t3_ParamLimits

0xd722,	// (0x0009893c) main_myfav_hc_pane_t3

0x6b03,	// (0x00091d1d) main_myfav_hc_pane_t4_ParamLimits

0x6b03,	// (0x00091d1d) main_myfav_hc_pane_t4

0x0004,

0xf954,	// (0x0009ab6e) main_myfav_hc_pane_t_ParamLimits

0xf954,	// (0x0009ab6e) main_myfav_hc_pane_t

0xcc28,	// (0x00097e42) bg_myfav_hc_instruction_pane_g1

0xd734,	// (0x0009894e) cell_myfav_contact_pane_g1_ParamLimits

0xd734,	// (0x0009894e) cell_myfav_contact_pane_g1

0xd734,	// (0x0009894e) cell_myfav_contact_pane_g2_ParamLimits

0xd734,	// (0x0009894e) cell_myfav_contact_pane_g2

0xd740,	// (0x0009895a) cell_myfav_contact_pane_g3_ParamLimits

0xd740,	// (0x0009895a) cell_myfav_contact_pane_g3

0xceed,	// (0x00098107) cell_myfav_contact_pane_g4_ParamLimits

0xceed,	// (0x00098107) cell_myfav_contact_pane_g4

0xd74d,	// (0x00098967) cell_myfav_contact_pane_g5_ParamLimits

0xd74d,	// (0x00098967) cell_myfav_contact_pane_g5

0x0004,

0xf95f,	// (0x0009ab79) cell_myfav_contact_pane_g_ParamLimits

0xf95f,	// (0x0009ab79) cell_myfav_contact_pane_g

0x6ad4,	// (0x00091cee) main_myfav_hc_pane_g3_ParamLimits

0x6ad4,	// (0x00091cee) main_myfav_hc_pane_g3

0x10e6,	// (0x0008c300) popup_adpt_find_window

0x6b2b,	// (0x00091d45) afind_page_pane_ParamLimits

0x6b2b,	// (0x00091d45) afind_page_pane

0x6b40,	// (0x00091d5a) aid_size_cell_afind_ParamLimits

0x6b40,	// (0x00091d5a) aid_size_cell_afind

0x6b5e,	// (0x00091d78) bg_popup_sub_pane_cp09_ParamLimits

0x6b5e,	// (0x00091d78) bg_popup_sub_pane_cp09

0x6b6b,	// (0x00091d85) find_pane_cp01_ParamLimits

0x6b6b,	// (0x00091d85) find_pane_cp01

0xd759,	// (0x00098973) grid_afind_control_pane_ParamLimits

0xd759,	// (0x00098973) grid_afind_control_pane

0x6b78,	// (0x00091d92) grid_afind_pane_ParamLimits

0x6b78,	// (0x00091d92) grid_afind_pane

0x6b97,	// (0x00091db1) cell_afind_pane_ParamLimits

0x6b97,	// (0x00091db1) cell_afind_pane

0xcc28,	// (0x00097e42) afind_page_pane_g1

0x6bf8,	// (0x00091e12) afind_page_pane_g2

0x6c01,	// (0x00091e1b) afind_page_pane_g3

0x0002,

0xf96a,	// (0x0009ab84) afind_page_pane_g

0x6c0a,	// (0x00091e24) afind_page_pane_t1

0xd76d,	// (0x00098987) cell_afind_grid_control_pane_ParamLimits

0xd76d,	// (0x00098987) cell_afind_grid_control_pane

0xd533,	// (0x0009874d) bg_button_pane_cp69_ParamLimits

0xd533,	// (0x0009874d) bg_button_pane_cp69

0x6c2a,	// (0x00091e44) cell_afind_pane_g1_ParamLimits

0x6c2a,	// (0x00091e44) cell_afind_pane_g1

0x6c37,	// (0x00091e51) cell_afind_pane_t1_ParamLimits

0x6c37,	// (0x00091e51) cell_afind_pane_t1

0xa97f,	// (0x00095b99) bg_button_pane_cp72

0xd77c,	// (0x00098996) cell_afind_grid_control_pane_g1

0x3c84,	// (0x0008ee9e) aid_image_placing_area_ParamLimits

0x3c84,	// (0x0008ee9e) aid_image_placing_area

0xd201,	// (0x0009841b) field_vitu_entry_pane_g1_ParamLimits

0xd201,	// (0x0009841b) field_vitu_entry_pane_g1

0xd20d,	// (0x00098427) field_vitu_entry_pane_g2_ParamLimits

0xd20d,	// (0x00098427) field_vitu_entry_pane_g2

0x0001,

0xf81b,	// (0x0009aa35) field_vitu_entry_pane_g_ParamLimits

0xf81b,	// (0x0009aa35) field_vitu_entry_pane_g

0x5ddb,	// (0x00090ff5) cell_vitu_itu_pane_g1_ParamLimits

0x5e2b,	// (0x00091045) cell_vitu_itu_pane_t3_ParamLimits

0x5e2b,	// (0x00091045) cell_vitu_itu_pane_t3

0xd4e3,	// (0x000986fd) mp4_progress_pane_t1_ParamLimits

0xd4fc,	// (0x00098716) mp4_progress_pane_t2_ParamLimits

0xf8b0,	// (0x0009aaca) mp4_progress_pane_t_ParamLimits

0xd515,	// (0x0009872f) mup_progress_pane_cp04_ParamLimits

0x6b17,	// (0x00091d31) main_myfav_hc_pane_t5_ParamLimits

0x6b17,	// (0x00091d31) main_myfav_hc_pane_t5

0x0fa7,	// (0x0008c1c1) aid_zoom_text_primary

0x10e6,	// (0x0008c300) popup_adpt_find_window_ParamLimits

0xa4a9,	// (0x000956c3) main_cam_set_pane

0x6558,	// (0x00091772) cam4_zoom_pane_ParamLimits

0x6558,	// (0x00091772) cam4_zoom_pane

0x6c49,	// (0x00091e63) main_cam_set_pane_g1_ParamLimits

0x6c49,	// (0x00091e63) main_cam_set_pane_g1

0x6c57,	// (0x00091e71) main_cam_set_pane_g2_ParamLimits

0x6c57,	// (0x00091e71) main_cam_set_pane_g2

0x0001,

0xf971,	// (0x0009ab8b) main_cam_set_pane_g_ParamLimits

0xf971,	// (0x0009ab8b) main_cam_set_pane_g

0x6c78,	// (0x00091e92) main_cam_set_pane_t1_ParamLimits

0x6c78,	// (0x00091e92) main_cam_set_pane_t1

0x6c93,	// (0x00091ead) main_cset_listscroll_pane_ParamLimits

0x6c93,	// (0x00091ead) main_cset_listscroll_pane

0x6cb3,	// (0x00091ecd) main_cset_slider_pane_ParamLimits

0x6cb3,	// (0x00091ecd) main_cset_slider_pane

0xd78d,	// (0x000989a7) main_cset_list_pane_ParamLimits

0xd78d,	// (0x000989a7) main_cset_list_pane

0xd79d,	// (0x000989b7) scroll_pane_cp028

0x6cd9,	// (0x00091ef3) aid_area_touch_slider

0x6cf5,	// (0x00091f0f) cset_slider_pane

0x6d1f,	// (0x00091f39) main_cset_slider_pane_g1

0x6d34,	// (0x00091f4e) main_cset_slider_pane_g2

0x0011,

0xf976,	// (0x0009ab90) main_cset_slider_pane_g

0xd7d6,	// (0x000989f0) main_cset_slider_pane_t1

0x6df0,	// (0x0009200a) main_cset_slider_pane_t2

0x6e0a,	// (0x00092024) main_cset_slider_pane_t3

0x6e24,	// (0x0009203e) main_cset_slider_pane_t4

0x6e3e,	// (0x00092058) main_cset_slider_pane_t5

0x6e58,	// (0x00092072) main_cset_slider_pane_t6

0x6e6d,	// (0x00092087) main_cset_slider_pane_t7

0x000e,

0xf99b,	// (0x0009abb5) main_cset_slider_pane_t

0x6f71,	// (0x0009218b) cset_list_set_pane_ParamLimits

0x6f71,	// (0x0009218b) cset_list_set_pane

0x6f84,	// (0x0009219e) aid_position_infowindow_above

0x6f8c,	// (0x000921a6) aid_position_infowindow_below

0x6f94,	// (0x000921ae) cset_list_set_pane_g1_ParamLimits

0x6f94,	// (0x000921ae) cset_list_set_pane_g1

0x6fa0,	// (0x000921ba) cset_list_set_pane_g3_ParamLimits

0x6fa0,	// (0x000921ba) cset_list_set_pane_g3

0x0001,

0xf9ba,	// (0x0009abd4) cset_list_set_pane_g_ParamLimits

0xf9ba,	// (0x0009abd4) cset_list_set_pane_g

0x6faf,	// (0x000921c9) cset_list_set_pane_t1_ParamLimits

0x6faf,	// (0x000921c9) cset_list_set_pane_t1

0xa4a9,	// (0x000956c3) list_highlight_pane_cp021_ParamLimits

0xa4a9,	// (0x000956c3) list_highlight_pane_cp021

0xb546,	// (0x00096760) cset_slider_pane_g1

0xb558,	// (0x00096772) cset_slider_pane_g2

0xb54f,	// (0x00096769) cset_slider_pane_g3

0x0002,

0xf9bf,	// (0x0009abd9) cset_slider_pane_g

0xa2b6,	// (0x000954d0) aid_area_touch_cam4_zoom

0xa2be,	// (0x000954d8) cam4_zoom_cont_pane

0xa2c6,	// (0x000954e0) cam4_zoom_pane_g1

0xa2ce,	// (0x000954e8) cam4_zoom_pane_g2

0x6fc4,	// (0x000921de) cam4_zoom_pane_g3

0x0002,

0xf9c6,	// (0x0009abe0) cam4_zoom_pane_g

0xda4e,	// (0x00098c68) cam4_zoom_cont_pane_g1

0xda57,	// (0x00098c71) cam4_zoom_cont_pane_g2

0xda60,	// (0x00098c7a) cam4_zoom_cont_pane_g3

0x0002,

0xf9cd,	// (0x0009abe7) cam4_zoom_cont_pane_g

0x6418,	// (0x00091632) call4_image_pane_ParamLimits

0x6418,	// (0x00091632) call4_image_pane

0xd53f,	// (0x00098759) call4_windows_conf_pane_ParamLimits

0xd57e,	// (0x00098798) popup_call4_audio_in_window_ParamLimits

0xd57e,	// (0x00098798) popup_call4_audio_in_window

0x973f,	// (0x00094959) bg_popup_call2_act_pane_cp02

0xd5f4,	// (0x0009880e) call4_list_conf_pane

0xcc28,	// (0x00097e42) call4_image_pane_g1

0xcc28,	// (0x00097e42) call4_image_pane_g2

0x0001,

0xf6e1,	// (0x0009a8fb) call4_image_pane_g

0xd876,	// (0x00098a90) list_single_graphic_popup_conf4_pane_ParamLimits

0xd876,	// (0x00098a90) list_single_graphic_popup_conf4_pane

0x973f,	// (0x00094959) list_highlight_pane_cp022

0xd889,	// (0x00098aa3) list_single_graphic_popup_conf4_pane_g1

0xb0c0,	// (0x000962da) list_single_graphic_popup_conf4_pane_g2

0x0001,

0xf9d4,	// (0x0009abee) list_single_graphic_popup_conf4_pane_g

0xd891,	// (0x00098aab) list_single_graphic_popup_conf4_pane_t1

0x21ca,	// (0x0008d3e4) popup_vtel_slider_window_ParamLimits

0x21ca,	// (0x0008d3e4) popup_vtel_slider_window

0xd521,	// (0x0009873b) dialer2_ne_pane_t2_ParamLimits

0xd521,	// (0x0009873b) dialer2_ne_pane_t2

0x0001,

0xf8b5,	// (0x0009aacf) dialer2_ne_pane_t_ParamLimits

0xf8b5,	// (0x0009aacf) dialer2_ne_pane_t

0xca0b,	// (0x00097c25) bg_popup_sub_pane_cp010_ParamLimits

0xca0b,	// (0x00097c25) bg_popup_sub_pane_cp010

0x6fcc,	// (0x000921e6) popup_vtel_slider_window_g1_ParamLimits

0x6fcc,	// (0x000921e6) popup_vtel_slider_window_g1

0x6fdf,	// (0x000921f9) popup_vtel_slider_window_g2_ParamLimits

0x6fdf,	// (0x000921f9) popup_vtel_slider_window_g2

0x0003,

0xf9d9,	// (0x0009abf3) popup_vtel_slider_window_g_ParamLimits

0xf9d9,	// (0x0009abf3) popup_vtel_slider_window_g

0x7035,	// (0x0009224f) vtel_slider_pane_ParamLimits

0x7035,	// (0x0009224f) vtel_slider_pane

0x7057,	// (0x00092271) vtel_slider_pane_g1_ParamLimits

0x7057,	// (0x00092271) vtel_slider_pane_g1

0x706b,	// (0x00092285) vtel_slider_pane_g2_ParamLimits

0x706b,	// (0x00092285) vtel_slider_pane_g2

0x7083,	// (0x0009229d) vtel_slider_pane_g3_ParamLimits

0x7083,	// (0x0009229d) vtel_slider_pane_g3

0x7057,	// (0x00092271) vtel_slider_pane_g4_ParamLimits

0x7057,	// (0x00092271) vtel_slider_pane_g4

0x7099,	// (0x000922b3) vtel_slider_pane_g5_ParamLimits

0x7099,	// (0x000922b3) vtel_slider_pane_g5

0x0004,

0xf9e2,	// (0x0009abfc) vtel_slider_pane_g_ParamLimits

0xf9e2,	// (0x0009abfc) vtel_slider_pane_g

0xa4a9,	// (0x000956c3) main_gallery2_pane

0x6758,	// (0x00091972) aid_size_row_itut2_dropdow_list_ParamLimits

0x6758,	// (0x00091972) aid_size_row_itut2_dropdow_list

0x67e4,	// (0x000919fe) grid_vitu2_function_top_pane_ParamLimits

0x67e4,	// (0x000919fe) grid_vitu2_function_top_pane

0x6849,	// (0x00091a63) popup_vitu2_dropdown_list_window_ParamLimits

0x6849,	// (0x00091a63) popup_vitu2_dropdown_list_window

0x6872,	// (0x00091a8c) popup_vitu2_match_list_window

0x70af,	// (0x000922c9) cell_vitu2_function_top_pane_ParamLimits

0x70af,	// (0x000922c9) cell_vitu2_function_top_pane

0x70cd,	// (0x000922e7) cell_vitu2_function_top_pane_cp01_ParamLimits

0x70cd,	// (0x000922e7) cell_vitu2_function_top_pane_cp01

0x70eb,	// (0x00092305) cell_vitu2_function_top_wide_pane_ParamLimits

0x70eb,	// (0x00092305) cell_vitu2_function_top_wide_pane

0xa4a9,	// (0x000956c3) bg_button_pane_cp012

0x7109,	// (0x00092323) cell_vitu2_function_top_pane_g1

0xa2d6,	// (0x000954f0) bg_button_pane_cp013_ParamLimits

0xa2d6,	// (0x000954f0) bg_button_pane_cp013

0x711d,	// (0x00092337) cell_vitu2_function_top_wide_pane_g1_ParamLimits

0x711d,	// (0x00092337) cell_vitu2_function_top_wide_pane_g1

0xa4a9,	// (0x000956c3) bg_popup_sub_pane_cp20

0x7135,	// (0x0009234f) list_vitu2_match_list_pane

0xd683,	// (0x0009889d) bg_popup_sub_pane_cp20_g1

0xd68b,	// (0x000988a5) bg_popup_sub_pane_cp20_g2

0xab86,	// (0x00095da0) bg_popup_sub_pane_cp20_g3

0xd693,	// (0x000988ad) bg_popup_sub_pane_cp20_g4

0xab66,	// (0x00095d80) bg_popup_sub_pane_cp20_g5

0xd8a7,	// (0x00098ac1) bg_popup_sub_pane_cp20_g6

0xd6a3,	// (0x000988bd) bg_popup_sub_pane_cp20_g7

0xd6ab,	// (0x000988c5) bg_popup_sub_pane_cp20_g8

0xd6b3,	// (0x000988cd) bg_popup_sub_pane_cp20_g9

0x0008,

0xf9ed,	// (0x0009ac07) bg_popup_sub_pane_cp20_g

0xa2f2,	// (0x0009550c) list_vitu2_match_list_item_pane_ParamLimits

0xa2f2,	// (0x0009550c) list_vitu2_match_list_item_pane

0xa304,	// (0x0009551e) list_vitu2_match_list_item_pane_t1

0x973f,	// (0x00094959) bg_popup_sub_pane_cp21

0xafc4,	// (0x000961de) grid_vitu2_dropdown_list_pane

0x715f,	// (0x00092379) cell_vitu2_dropdown_list_char_pane_ParamLimits

0x715f,	// (0x00092379) cell_vitu2_dropdown_list_char_pane

0x7180,	// (0x0009239a) cell_vitu2_dropdown_list_ctrl_pane_ParamLimits

0x7180,	// (0x0009239a) cell_vitu2_dropdown_list_ctrl_pane

0xd8af,	// (0x00098ac9) cell_vitu2_dropdown_list_char_pane_g1

0xd8b8,	// (0x00098ad2) cell_vitu2_dropdown_list_char_pane_g2

0xd8c1,	// (0x00098adb) cell_vitu2_dropdown_list_char_pane_g3

0x0002,

0xfa0a,	// (0x0009ac24) cell_vitu2_dropdown_list_char_pane_g

0x71ac,	// (0x000923c6) cell_vitu2_dropdown_list_char_pane_t1

0x71ba,	// (0x000923d4) cell_vitu2_dropdown_list_ctrl_pane_g1_ParamLimits

0x71ba,	// (0x000923d4) cell_vitu2_dropdown_list_ctrl_pane_g1

0x71ca,	// (0x000923e4) cell_vitu2_dropdown_list_ctrl_pane_g2_ParamLimits

0x71ca,	// (0x000923e4) cell_vitu2_dropdown_list_ctrl_pane_g2

0x71db,	// (0x000923f5) cell_vitu2_dropdown_list_ctrl_pane_g3_ParamLimits

0x71db,	// (0x000923f5) cell_vitu2_dropdown_list_ctrl_pane_g3

0x71eb,	// (0x00092405) cell_vitu2_dropdown_list_ctrl_pane_g4_ParamLimits

0x71eb,	// (0x00092405) cell_vitu2_dropdown_list_ctrl_pane_g4

0xce88,	// (0x000980a2) cell_vitu2_dropdown_list_ctrl_pane_g5_ParamLimits

0xce88,	// (0x000980a2) cell_vitu2_dropdown_list_ctrl_pane_g5

0x0004,

0xfa11,	// (0x0009ac2b) cell_vitu2_dropdown_list_ctrl_pane_g_ParamLimits

0xfa11,	// (0x0009ac2b) cell_vitu2_dropdown_list_ctrl_pane_g

0x7207,	// (0x00092421) aid_size_cell_gallery2_ParamLimits

0x7207,	// (0x00092421) aid_size_cell_gallery2

0x7225,	// (0x0009243f) grid_gallery2_pane_ParamLimits

0x7225,	// (0x0009243f) grid_gallery2_pane

0x723f,	// (0x00092459) scroll_pane_cp029_ParamLimits

0x723f,	// (0x00092459) scroll_pane_cp029

0x724b,	// (0x00092465) cell_gallery2_pane_ParamLimits

0x724b,	// (0x00092465) cell_gallery2_pane

0xd8ca,	// (0x00098ae4) cell_gallery2_pane_g2

0x72a7,	// (0x000924c1) cell_gallery2_pane_g3

0xd8d2,	// (0x00098aec) cell_gallery2_pane_g4

0xd8da,	// (0x00098af4) cell_gallery2_pane_g5

0xb402,	// (0x0009661c) grid_highlight_pane_cp10

0x6872,	// (0x00091a8c) popup_vitu2_match_list_window_ParamLimits

0x6887,	// (0x00091aa1) popup_vitu2_query_window_ParamLimits

0x6887,	// (0x00091aa1) popup_vitu2_query_window

0x973f,	// (0x00094959) bg_vitu2_candi_button_pane

0xd8af,	// (0x00098ac9) cell_vitu2_dropdown_list_char_pane_g1_copy1

0xd8b8,	// (0x00098ad2) cell_vitu2_dropdown_list_char_pane_g2_copy1

0xd8c1,	// (0x00098adb) cell_vitu2_dropdown_list_char_pane_g2_copy2

0x0512,	// (0x0008b72c) bg_button_pane_cp015

0x72af,	// (0x000924c9) bg_button_pane_cp016

0x72c2,	// (0x000924dc) bg_button_pane_cp017

0xc81e,	// (0x00097a38) bg_popup_sub_pane_cp22

0xd8e2,	// (0x00098afc) popup_vitu2_query_window_g1

0x0547,	// (0x0008b761) popup_vitu2_query_window_g2

0x0002,

0xfa1c,	// (0x0009ac36) popup_vitu2_query_window_g

0x055a,	// (0x0008b774) popup_vitu2_query_window_t1_ParamLimits

0x055a,	// (0x0008b774) popup_vitu2_query_window_t1

0x058f,	// (0x0008b7a9) popup_vitu2_query_window_t2_ParamLimits

0x058f,	// (0x0008b7a9) popup_vitu2_query_window_t2

0x05a1,	// (0x0008b7bb) popup_vitu2_query_window_t3_ParamLimits

0x05a1,	// (0x0008b7bb) popup_vitu2_query_window_t3

0x72f2,	// (0x0009250c) popup_vitu2_query_window_t4_ParamLimits

0x72f2,	// (0x0009250c) popup_vitu2_query_window_t4

0x7313,	// (0x0009252d) popup_vitu2_query_window_t5_ParamLimits

0x7313,	// (0x0009252d) popup_vitu2_query_window_t5

0x0006,

0xfa23,	// (0x0009ac3d) popup_vitu2_query_window_t_ParamLimits

0xfa23,	// (0x0009ac3d) popup_vitu2_query_window_t

0xd785,	// (0x0009899f) main_cset_text_pane

0x6cd9,	// (0x00091ef3) aid_area_touch_slider_ParamLimits

0x6cf5,	// (0x00091f0f) cset_slider_pane_ParamLimits

0x6d1f,	// (0x00091f39) main_cset_slider_pane_g1_ParamLimits

0x6d34,	// (0x00091f4e) main_cset_slider_pane_g2_ParamLimits

0xd7a6,	// (0x000989c0) main_cset_slider_pane_g3_ParamLimits

0xd7a6,	// (0x000989c0) main_cset_slider_pane_g3

0x6d49,	// (0x00091f63) main_cset_slider_pane_g4_ParamLimits

0x6d49,	// (0x00091f63) main_cset_slider_pane_g4

0x6d58,	// (0x00091f72) main_cset_slider_pane_g5_ParamLimits

0x6d58,	// (0x00091f72) main_cset_slider_pane_g5

0x6d64,	// (0x00091f7e) main_cset_slider_pane_g6_ParamLimits

0x6d64,	// (0x00091f7e) main_cset_slider_pane_g6

0xf976,	// (0x0009ab90) main_cset_slider_pane_g_ParamLimits

0xd7d6,	// (0x000989f0) main_cset_slider_pane_t1_ParamLimits

0x6df0,	// (0x0009200a) main_cset_slider_pane_t2_ParamLimits

0x6e0a,	// (0x00092024) main_cset_slider_pane_t3_ParamLimits

0x6e24,	// (0x0009203e) main_cset_slider_pane_t4_ParamLimits

0x6e3e,	// (0x00092058) main_cset_slider_pane_t5_ParamLimits

0x6e58,	// (0x00092072) main_cset_slider_pane_t6_ParamLimits

0x6e6d,	// (0x00092087) main_cset_slider_pane_t7_ParamLimits

0x6e97,	// (0x000920b1) main_cset_slider_pane_t8_ParamLimits

0x6e97,	// (0x000920b1) main_cset_slider_pane_t8

0x6ebf,	// (0x000920d9) main_cset_slider_pane_t9_ParamLimits

0x6ebf,	// (0x000920d9) main_cset_slider_pane_t9

0x6ee7,	// (0x00092101) main_cset_slider_pane_t10_ParamLimits

0x6ee7,	// (0x00092101) main_cset_slider_pane_t10

0x6f0f,	// (0x00092129) main_cset_slider_pane_t11_ParamLimits

0x6f0f,	// (0x00092129) main_cset_slider_pane_t11

0x6f37,	// (0x00092151) main_cset_slider_pane_t12_ParamLimits

0x6f37,	// (0x00092151) main_cset_slider_pane_t12

0x6f54,	// (0x0009216e) main_cset_slider_pane_t13_ParamLimits

0x6f54,	// (0x0009216e) main_cset_slider_pane_t13

0xf99b,	// (0x0009abb5) main_cset_slider_pane_t_ParamLimits

0x973f,	// (0x00094959) bg_popup_sub_pane_cp011

0xd8ee,	// (0x00098b08) main_cset_text_pane_g1

0xd8f6,	// (0x00098b10) main_cset_text_pane_t1

0xd904,	// (0x00098b1e) main_cset_text_pane_t2

0xd912,	// (0x00098b2c) main_cset_text_pane_t3

0xd920,	// (0x00098b3a) main_cset_text_pane_t4

0xd92e,	// (0x00098b48) main_cset_text_pane_t5

0xd93c,	// (0x00098b56) main_cset_text_pane_t6

0xd94a,	// (0x00098b64) main_cset_text_pane_t7

0x0006,

0xfa32,	// (0x0009ac4c) main_cset_text_pane_t

0x973f,	// (0x00094959) main_cam4_burst_pane

0x973f,	// (0x00094959) main_cam5_pane

0x6c18,	// (0x00091e32) bg_button_pane_cp019

0x6c21,	// (0x00091e3b) bg_button_pane_cp020

0xd7b2,	// (0x000989cc) main_cset_slider_pane_g7_ParamLimits

0xd7b2,	// (0x000989cc) main_cset_slider_pane_g7

0xd7be,	// (0x000989d8) main_cset_slider_pane_g8_ParamLimits

0xd7be,	// (0x000989d8) main_cset_slider_pane_g8

0x6d78,	// (0x00091f92) main_cset_slider_pane_g9_ParamLimits

0x6d78,	// (0x00091f92) main_cset_slider_pane_g9

0x6d84,	// (0x00091f9e) main_cset_slider_pane_g10_ParamLimits

0x6d84,	// (0x00091f9e) main_cset_slider_pane_g10

0x6d90,	// (0x00091faa) main_cset_slider_pane_g11_ParamLimits

0x6d90,	// (0x00091faa) main_cset_slider_pane_g11

0x6d9c,	// (0x00091fb6) main_cset_slider_pane_g12_ParamLimits

0x6d9c,	// (0x00091fb6) main_cset_slider_pane_g12

0x6da8,	// (0x00091fc2) main_cset_slider_pane_g13_ParamLimits

0x6da8,	// (0x00091fc2) main_cset_slider_pane_g13

0x6db4,	// (0x00091fce) main_cset_slider_pane_g14_ParamLimits

0x6db4,	// (0x00091fce) main_cset_slider_pane_g14

0x6dc0,	// (0x00091fda) main_cset_slider_pane_g15_ParamLimits

0x6dc0,	// (0x00091fda) main_cset_slider_pane_g15

0xd804,	// (0x00098a1e) main_cset_slider_pane_t14_ParamLimits

0xd804,	// (0x00098a1e) main_cset_slider_pane_t14

0xd83d,	// (0x00098a57) main_cset_slider_pane_t15_ParamLimits

0xd83d,	// (0x00098a57) main_cset_slider_pane_t15

0x738a,	// (0x000925a4) aid_cam4_burst_size_cell_ParamLimits

0x738a,	// (0x000925a4) aid_cam4_burst_size_cell

0x73aa,	// (0x000925c4) grid_cam4_burst_pane_ParamLimits

0x73aa,	// (0x000925c4) grid_cam4_burst_pane

0x73e2,	// (0x000925fc) linegrid_cam4_burst_pane_ParamLimits

0x73e2,	// (0x000925fc) linegrid_cam4_burst_pane

0xda69,	// (0x00098c83) scroll_pane_cp30_ParamLimits

0xda69,	// (0x00098c83) scroll_pane_cp30

0x7408,	// (0x00092622) cell_cam4_burst_pane_ParamLimits

0x7408,	// (0x00092622) cell_cam4_burst_pane

0xd958,	// (0x00098b72) linegrid_cam4_burst_pane_g1_ParamLimits

0xd958,	// (0x00098b72) linegrid_cam4_burst_pane_g1

0x7455,	// (0x0009266f) linegrid_cam4_burst_pane_g2_ParamLimits

0x7455,	// (0x0009266f) linegrid_cam4_burst_pane_g2

0xd965,	// (0x00098b7f) linegrid_cam4_burst_pane_g3_ParamLimits

0xd965,	// (0x00098b7f) linegrid_cam4_burst_pane_g3

0x0002,

0xfa41,	// (0x0009ac5b) linegrid_cam4_burst_pane_g_ParamLimits

0xfa41,	// (0x0009ac5b) linegrid_cam4_burst_pane_g

0x7466,	// (0x00092680) linegrid_cam4_burst_pane_g3_copy1_ParamLimits

0x7466,	// (0x00092680) linegrid_cam4_burst_pane_g3_copy1

0xd972,	// (0x00098b8c) linegrid_cam4_burst_pane_g4_ParamLimits

0xd972,	// (0x00098b8c) linegrid_cam4_burst_pane_g4

0x7480,	// (0x0009269a) linegrid_cam4_burst_pane_g5_ParamLimits

0x7480,	// (0x0009269a) linegrid_cam4_burst_pane_g5

0x7491,	// (0x000926ab) linegrid_cam4_burst_pane_g6_ParamLimits

0x7491,	// (0x000926ab) linegrid_cam4_burst_pane_g6

0xd97f,	// (0x00098b99) linegrid_cam4_burst_pane_g7_ParamLimits

0xd97f,	// (0x00098b99) linegrid_cam4_burst_pane_g7

0x74a8,	// (0x000926c2) cell_cam4_burst_pane_g1

0xd998,	// (0x00098bb2) main_cam5_pane_t1_ParamLimits

0xd998,	// (0x00098bb2) main_cam5_pane_t1

0xd9aa,	// (0x00098bc4) main_cam5_pane_t2_ParamLimits

0xd9aa,	// (0x00098bc4) main_cam5_pane_t2

0xd9bc,	// (0x00098bd6) main_cam5_pane_t3_ParamLimits

0xd9bc,	// (0x00098bd6) main_cam5_pane_t3

0xd9ce,	// (0x00098be8) main_cam5_pane_t4_ParamLimits

0xd9ce,	// (0x00098be8) main_cam5_pane_t4

0xd9e6,	// (0x00098c00) main_cam5_pane_t5_ParamLimits

0xd9e6,	// (0x00098c00) main_cam5_pane_t5

0xd9fa,	// (0x00098c14) main_cam5_pane_t6_ParamLimits

0xd9fa,	// (0x00098c14) main_cam5_pane_t6

0xda0e,	// (0x00098c28) main_cam5_pane_t7_ParamLimits

0xda0e,	// (0x00098c28) main_cam5_pane_t7

0xda20,	// (0x00098c3a) main_cam5_pane_t8_ParamLimits

0xda20,	// (0x00098c3a) main_cam5_pane_t8

0xda75,	// (0x00098c8f) main_cam5_pane_t9_ParamLimits

0xda75,	// (0x00098c8f) main_cam5_pane_t9

0xda87,	// (0x00098ca1) main_cam5_pane_t10_ParamLimits

0xda87,	// (0x00098ca1) main_cam5_pane_t10

0xda99,	// (0x00098cb3) main_cam5_pane_t11_ParamLimits

0xda99,	// (0x00098cb3) main_cam5_pane_t11

0xdaab,	// (0x00098cc5) main_cam5_pane_t12_ParamLimits

0xdaab,	// (0x00098cc5) main_cam5_pane_t12

0xdac0,	// (0x00098cda) main_cam5_pane_t13_ParamLimits

0xdac0,	// (0x00098cda) main_cam5_pane_t13

0x000c,

0xfa4d,	// (0x0009ac67) main_cam5_pane_t_ParamLimits

0xfa4d,	// (0x0009ac67) main_cam5_pane_t

0x1168,	// (0x0008c382) popup_scut_keymap_window_ParamLimits

0x1168,	// (0x0008c382) popup_scut_keymap_window

0x74bd,	// (0x000926d7) aid_size_cell_brow_shortcut

0xb402,	// (0x0009661c) bg_popup_window_pane_cp010

0x74c9,	// (0x000926e3) grid_scut_pane

0x74d5,	// (0x000926ef) cell_scut_pane_ParamLimits

0x74d5,	// (0x000926ef) cell_scut_pane

0x74ec,	// (0x00092706) cell_scut_pane_g1

0xdadd,	// (0x00098cf7) cell_scut_pane_t1

0xdaec,	// (0x00098d06) cell_scut_pane_t2

0x74f5,	// (0x0009270f) cell_scut_pane_t3

0x0002,

0xfa68,	// (0x0009ac82) cell_scut_pane_t

0x52c4,	// (0x000904de) main_mup3_pane_g8_ParamLimits

0x52c4,	// (0x000904de) main_mup3_pane_g8

0x6770,	// (0x0009198a) area_vitu2_query_pane_ParamLimits

0x6770,	// (0x0009198a) area_vitu2_query_pane

0x0526,	// (0x0008b740) input_focus_pane_cp08

0xdafb,	// (0x00098d15) area_vitu2_query_pane_g1

0x05c9,	// (0x0008b7e3) area_vitu2_query_pane_g2

0x0001,

0xfa6f,	// (0x0009ac89) area_vitu2_query_pane_g

0x7503,	// (0x0009271d) area_vitu2_query_pane_t1_ParamLimits

0x7503,	// (0x0009271d) area_vitu2_query_pane_t1

0x7517,	// (0x00092731) area_vitu2_query_pane_t2_ParamLimits

0x7517,	// (0x00092731) area_vitu2_query_pane_t2

0x05da,	// (0x0008b7f4) area_vitu2_query_pane_t3_ParamLimits

0x05da,	// (0x0008b7f4) area_vitu2_query_pane_t3

0x752b,	// (0x00092745) area_vitu2_query_pane_t4_ParamLimits

0x752b,	// (0x00092745) area_vitu2_query_pane_t4

0x7553,	// (0x0009276d) area_vitu2_query_pane_t5_ParamLimits

0x7553,	// (0x0009276d) area_vitu2_query_pane_t5

0x757b,	// (0x00092795) area_vitu2_query_pane_t6_ParamLimits

0x757b,	// (0x00092795) area_vitu2_query_pane_t6

0x0006,

0xfa74,	// (0x0009ac8e) area_vitu2_query_pane_t_ParamLimits

0xfa74,	// (0x0009ac8e) area_vitu2_query_pane_t

0x75c7,	// (0x000927e1) bg_button_pane_cp018

0x75d5,	// (0x000927ef) bg_button_pane_cp021

0x0602,	// (0x0008b81c) bg_button_pane_cp022

0x0613,	// (0x0008b82d) input_focus_pane_cp09

0xb249,	// (0x00096463) aid_size_touch_mv_arrow_left

0xb274,	// (0x0009648e) aid_size_touch_mv_arrow_right

0x6dd8,	// (0x00091ff2) main_cset_slider_pane_g16_ParamLimits

0x6dd8,	// (0x00091ff2) main_cset_slider_pane_g16

0x6de4,	// (0x00091ffe) main_cset_slider_pane_g17_ParamLimits

0x6de4,	// (0x00091ffe) main_cset_slider_pane_g17

0x74a8,	// (0x000926c2) cell_cam4_burst_pane_g1_ParamLimits

0x973f,	// (0x00094959) compa_mode_pane

0x6fef,	// (0x00092209) popup_vtel_slider_window_g3_ParamLimits

0x6fef,	// (0x00092209) popup_vtel_slider_window_g3

0x7006,	// (0x00092220) popup_vtel_slider_window_g4_ParamLimits

0x7006,	// (0x00092220) popup_vtel_slider_window_g4

0x701d,	// (0x00092237) popup_vtel_slider_window_t1_ParamLimits

0x701d,	// (0x00092237) popup_vtel_slider_window_t1

0x973f,	// (0x00094959) main_cl_pane

0x9e09,	// (0x00095023) popup_imed_adjust2_window_ParamLimits

0xc81e,	// (0x00097a38) bg_tb_trans_pane_cp05_ParamLimits

0xd12d,	// (0x00098347) popup_imed_adjust2_window_g1_ParamLimits

0xd13c,	// (0x00098356) popup_imed_adjust2_window_g2_ParamLimits

0xd13c,	// (0x00098356) popup_imed_adjust2_window_g2

0xd148,	// (0x00098362) popup_imed_adjust2_window_g3_ParamLimits

0xd148,	// (0x00098362) popup_imed_adjust2_window_g3

0x0002,

0xf7df,	// (0x0009a9f9) popup_imed_adjust2_window_g_ParamLimits

0xf7df,	// (0x0009a9f9) popup_imed_adjust2_window_g

0xd154,	// (0x0009836e) popup_imed_adjust2_window_t1_ParamLimits

0xd16c,	// (0x00098386) slider_imed_adjust_pane_ParamLimits

0xd180,	// (0x0009839a) slider_imed_adjust_pane_g1_ParamLimits

0xd190,	// (0x000983aa) slider_imed_adjust_pane_g2_ParamLimits

0xd1a0,	// (0x000983ba) slider_imed_adjust_pane_g3_ParamLimits

0xd1b1,	// (0x000983cb) slider_imed_adjust_pane_g4_ParamLimits

0xf7e6,	// (0x0009aa00) slider_imed_adjust_pane_g_ParamLimits

0x64f9,	// (0x00091713) aid_touch_area_cam4_ParamLimits

0x64f9,	// (0x00091713) aid_touch_area_cam4

0xa1cd,	// (0x000953e7) battery_pane_cp01

0x65c8,	// (0x000917e2) main_camera4_pane_g6_ParamLimits

0x65c8,	// (0x000917e2) main_camera4_pane_g6

0x65f2,	// (0x0009180c) main_camera4_pane_t2_ParamLimits

0x65f2,	// (0x0009180c) main_camera4_pane_t2

0x0001,

0xf8e9,	// (0x0009ab03) main_camera4_pane_t_ParamLimits

0xf8e9,	// (0x0009ab03) main_camera4_pane_t

0x6627,	// (0x00091841) aid_touch_area_vid4_ParamLimits

0x6627,	// (0x00091841) aid_touch_area_vid4

0x667b,	// (0x00091895) main_video4_pane_g5_ParamLimits

0x667b,	// (0x00091895) main_video4_pane_g5

0x66a0,	// (0x000918ba) vid4_progress_pane_ParamLimits

0x66a0,	// (0x000918ba) vid4_progress_pane

0xd7ca,	// (0x000989e4) main_cset_slider_pane_g18_ParamLimits

0xd7ca,	// (0x000989e4) main_cset_slider_pane_g18

0xd98c,	// (0x00098ba6) cell_cam4_burst_pane_g2_ParamLimits

0xd98c,	// (0x00098ba6) cell_cam4_burst_pane_g2

0x0001,

0xfa48,	// (0x0009ac62) cell_cam4_burst_pane_g_ParamLimits

0xfa48,	// (0x0009ac62) cell_cam4_burst_pane_g

0xa766,	// (0x00095980) bg_cl_pane_ParamLimits

0xa766,	// (0x00095980) bg_cl_pane

0x75e1,	// (0x000927fb) cl_header_pane_ParamLimits

0x75e1,	// (0x000927fb) cl_header_pane

0x75f5,	// (0x0009280f) cl_listscroll_pane_ParamLimits

0x75f5,	// (0x0009280f) cl_listscroll_pane

0xdb07,	// (0x00098d21) bg_cl_pane_g1

0xdb0f,	// (0x00098d29) bg_cl_pane_g2

0xdb17,	// (0x00098d31) bg_cl_pane_g3

0xdb1f,	// (0x00098d39) bg_cl_pane_g4

0xdb27,	// (0x00098d41) bg_cl_pane_g5

0xdb2f,	// (0x00098d49) bg_cl_pane_g6

0xdb37,	// (0x00098d51) bg_cl_pane_g7

0xdb3f,	// (0x00098d59) bg_cl_pane_g8

0xdb47,	// (0x00098d61) bg_cl_pane_g9

0x0008,

0xfa83,	// (0x0009ac9d) bg_cl_pane_g

0x7605,	// (0x0009281f) aid_height_cl_leading_ParamLimits

0x7605,	// (0x0009281f) aid_height_cl_leading

0x7611,	// (0x0009282b) aid_height_cl_text_ParamLimits

0x7611,	// (0x0009282b) aid_height_cl_text

0xa4a9,	// (0x000956c3) bg_cl_header_pane_ParamLimits

0xa4a9,	// (0x000956c3) bg_cl_header_pane

0x7630,	// (0x0009284a) cl_header_pane_g1_ParamLimits

0x7630,	// (0x0009284a) cl_header_pane_g1

0x7646,	// (0x00092860) cl_header_pane_t1_ParamLimits

0x7646,	// (0x00092860) cl_header_pane_t1

0xdb4f,	// (0x00098d69) cl_list_pane

0xd79d,	// (0x000989b7) hc_scroll_pane_cp01

0xab66,	// (0x00095d80) bg_cl_header_pane_g1

0xd683,	// (0x0009889d) bg_cl_header_pane_g2

0xab86,	// (0x00095da0) bg_cl_header_pane_g3

0xd693,	// (0x000988ad) bg_cl_header_pane_g4

0xd68b,	// (0x000988a5) bg_cl_header_pane_g5

0xd8a7,	// (0x00098ac1) bg_cl_header_pane_g6

0xd6ab,	// (0x000988c5) bg_cl_header_pane_g7

0xd6b3,	// (0x000988cd) bg_cl_header_pane_g8

0xd6a3,	// (0x000988bd) bg_cl_header_pane_g9

0x0008,

0xfa96,	// (0x0009acb0) bg_cl_header_pane_g

0x765f,	// (0x00092879) hc_cl_list_double_graphic_heading_pane_ParamLimits

0x765f,	// (0x00092879) hc_cl_list_double_graphic_heading_pane

0x7670,	// (0x0009288a) hc_cl_list_single_graphic_pane_ParamLimits

0x7670,	// (0x0009288a) hc_cl_list_single_graphic_pane

0x7689,	// (0x000928a3) hc_cl_list_single_graphic_pane_g1_ParamLimits

0x7689,	// (0x000928a3) hc_cl_list_single_graphic_pane_g1

0x7695,	// (0x000928af) hc_cl_list_single_graphic_pane_g2_ParamLimits

0x7695,	// (0x000928af) hc_cl_list_single_graphic_pane_g2

0x0001,

0xfaa9,	// (0x0009acc3) hc_cl_list_single_graphic_pane_g_ParamLimits

0xfaa9,	// (0x0009acc3) hc_cl_list_single_graphic_pane_g

0x76a9,	// (0x000928c3) hc_cl_list_single_graphic_pane_t1_ParamLimits

0x76a9,	// (0x000928c3) hc_cl_list_single_graphic_pane_t1

0x7689,	// (0x000928a3) hc_cl_list_double_graphic_heading_pane_g1_ParamLimits

0x7689,	// (0x000928a3) hc_cl_list_double_graphic_heading_pane_g1

0x76be,	// (0x000928d8) hc_cl_list_double_graphic_heading_pane_g2_ParamLimits

0x76be,	// (0x000928d8) hc_cl_list_double_graphic_heading_pane_g2

0x76d2,	// (0x000928ec) hc_cl_list_double_graphic_heading_pane_g3_ParamLimits

0x76d2,	// (0x000928ec) hc_cl_list_double_graphic_heading_pane_g3

0x0002,

0xfaae,	// (0x0009acc8) hc_cl_list_double_graphic_heading_pane_g_ParamLimits

0xfaae,	// (0x0009acc8) hc_cl_list_double_graphic_heading_pane_g

0x76e6,	// (0x00092900) hc_cl_list_double_graphic_heading_pane_t1_ParamLimits

0x76e6,	// (0x00092900) hc_cl_list_double_graphic_heading_pane_t1

0x76fb,	// (0x00092915) hc_cl_list_double_graphic_heading_pane_t2_ParamLimits

0x76fb,	// (0x00092915) hc_cl_list_double_graphic_heading_pane_t2

0x0001,

0xfab5,	// (0x0009accf) hc_cl_list_double_graphic_heading_pane_t_ParamLimits

0xfab5,	// (0x0009accf) hc_cl_list_double_graphic_heading_pane_t

0x7710,	// (0x0009292a) vid4_progress_pane_g1

0x7722,	// (0x0009293c) vid4_progress_pane_g2

0x9dd7,	// (0x00094ff1) vid4_progress_pane_g3

0xa31a,	// (0x00095534) vid4_progress_pane_g4

0x0004,

0xfaba,	// (0x0009acd4) vid4_progress_pane_g

0xa338,	// (0x00095552) vid4_progress_pane_t1

0xa34d,	// (0x00095567) vid4_progress_pane_t2

0x0002,

0xfac5,	// (0x0009acdf) vid4_progress_pane_t

0xa379,	// (0x00095593) wait_bar_pane_cp07

0xca19,	// (0x00097c33) blid_firmament_pane_ParamLimits

0xca5c,	// (0x00097c76) popup_blid_sat_info2_window_g1

0xca80,	// (0x00097c9a) popup_blid_sat_info2_window_t3

0xca8e,	// (0x00097ca8) popup_blid_sat_info2_window_t4

0xca9c,	// (0x00097cb6) popup_blid_sat_info2_window_t5

0xcaaa,	// (0x00097cc4) popup_blid_sat_info2_window_t6

0xcaba,	// (0x00097cd4) popup_blid_sat_info2_window_t7

0xcac8,	// (0x00097ce2) popup_blid_sat_info2_window_t8

0xcad6,	// (0x00097cf0) popup_blid_sat_info2_window_t9

0xcae4,	// (0x00097cfe) popup_blid_sat_info2_window_t10

0xcba8,	// (0x00097dc2) aid_firma_cardinal_ParamLimits

0xcbbc,	// (0x00097dd6) blid_firmament_pane_t1_ParamLimits

0xcbd3,	// (0x00097ded) blid_firmament_pane_t2_ParamLimits

0xcbea,	// (0x00097e04) blid_firmament_pane_t3_ParamLimits

0xcc01,	// (0x00097e1b) blid_firmament_pane_t4_ParamLimits

0xf6d8,	// (0x0009a8f2) blid_firmament_pane_t_ParamLimits

0xcc18,	// (0x00097e32) blid_sat_info_pane_ParamLimits

0xa4a9,	// (0x000956c3) main_cam_set_pane_ParamLimits

0x5b8a,	// (0x00090da4) aid_size_cell_colour_35_ParamLimits

0x5baa,	// (0x00090dc4) aid_size_cell_colour_112_ParamLimits

0x5bca,	// (0x00090de4) aid_size_cell_effect_ParamLimits

0xc81e,	// (0x00097a38) bg_tb_trans_pane_cp02_ParamLimits

0xadd6,	// (0x00095ff0) heading_imed_pane_ParamLimits

0x5bea,	// (0x00090e04) listscroll_imed_pane_ParamLimits

0xbe38,	// (0x00097052) popup_call2_audio_first_window_g5_ParamLimits

0xbe38,	// (0x00097052) popup_call2_audio_first_window_g5

0x61a4,	// (0x000913be) aid_size_touch_image3_arrow_left_ParamLimits

0x61a4,	// (0x000913be) aid_size_touch_image3_arrow_left

0x61d0,	// (0x000913ea) aid_size_touch_image3_arrow_right_ParamLimits

0x61d0,	// (0x000913ea) aid_size_touch_image3_arrow_right

0xa363,	// (0x0009557d) vid4_progress_pane_t3

0x5f16,	// (0x00091130) main_hwr_training_symbol_option_pane_ParamLimits

0x5f16,	// (0x00091130) main_hwr_training_symbol_option_pane

0xd423,	// (0x0009863d) popup_hwr_training_preview_window_ParamLimits

0xd423,	// (0x0009863d) popup_hwr_training_preview_window

0x5f36,	// (0x00091150) hwr_training_navi_pane_g5_ParamLimits

0x5f36,	// (0x00091150) hwr_training_navi_pane_g5

0xd671,	// (0x0009888b) popup_char_count_window

0xa4a9,	// (0x000956c3) bg_popup_sub_pane_cp20_ParamLimits

0x7135,	// (0x0009234f) list_vitu2_match_list_pane_ParamLimits

0x7144,	// (0x0009235e) vitu2_page_scroll_pane_ParamLimits

0x7144,	// (0x0009235e) vitu2_page_scroll_pane

0xdb58,	// (0x00098d72) list_single_hwr_training_symbol_option_pane_ParamLimits

0xdb58,	// (0x00098d72) list_single_hwr_training_symbol_option_pane

0xdb6b,	// (0x00098d85) list_single_hwr_training_symbol_option_pane_g1

0xdb73,	// (0x00098d8d) list_single_hwr_training_symbol_option_pane_t1

0xdb81,	// (0x00098d9b) bg_button_pane_cp023

0xdb8a,	// (0x00098da4) bg_button_pane_cp024

0x7745,	// (0x0009295f) vitu2_page_scroll_pane_g1

0x774d,	// (0x00092967) vitu2_page_scroll_pane_g2

0x0001,

0xfacc,	// (0x0009ace6) vitu2_page_scroll_pane_g

0x7755,	// (0x0009296f) vitu2_page_scroll_pane_t1

0xd1dd,	// (0x000983f7) popup_char_count_window_g1

0xdbbd,	// (0x00098dd7) popup_char_count_window_g2

0xdbc6,	// (0x00098de0) popup_char_count_window_g3

0x0002,

0xfad1,	// (0x0009aceb) popup_char_count_window_g

0xdbcf,	// (0x00098de9) popup_char_count_window_t1

0x973f,	// (0x00094959) main_vded2_pane

0xd119,	// (0x00098333) aid_size_cell_imed_line

0xd123,	// (0x0009833d) grid_imed_line_width_pane

0xa283,	// (0x0009549d) vid4_indicators_pane_g4

0xdbdd,	// (0x00098df7) cell_imed_line_width_pane_ParamLimits

0xdbdd,	// (0x00098df7) cell_imed_line_width_pane

0xdbf1,	// (0x00098e0b) cell_imed_line_width_pane_g1

0xda3c,	// (0x00098c56) cell_imed_line_width_pane_g2

0x0001,

0xfad8,	// (0x0009acf2) cell_imed_line_width_pane_g

0x7764,	// (0x0009297e) main_vded2_pane_g1_ParamLimits

0x7764,	// (0x0009297e) main_vded2_pane_g1

0x777a,	// (0x00092994) main_vded2_pane_g2_ParamLimits

0x777a,	// (0x00092994) main_vded2_pane_g2

0x0001,

0xfadd,	// (0x0009acf7) main_vded2_pane_g_ParamLimits

0xfadd,	// (0x0009acf7) main_vded2_pane_g

0x778c,	// (0x000929a6) vded2_slider_pane_ParamLimits

0x778c,	// (0x000929a6) vded2_slider_pane

0x779c,	// (0x000929b6) aid_size_touch_vded2_end

0x77a6,	// (0x000929c0) aid_size_touch_vded2_playhead

0xdbfa,	// (0x00098e14) aid_size_touch_vded2_start

0xdc02,	// (0x00098e1c) vded2_slider_bg_pane

0xdc0b,	// (0x00098e25) vded2_slider_pane_g1

0xdc14,	// (0x00098e2e) vded2_slider_pane_g2

0x77b0,	// (0x000929ca) vded2_slider_pane_g3

0x0002,

0xfae2,	// (0x0009acfc) vded2_slider_pane_g

0xdc1c,	// (0x00098e36) vded2_slider_bg_pane_g1

0xdc25,	// (0x00098e3f) vded2_slider_bg_pane_g2

0xdc2e,	// (0x00098e48) vded2_slider_bg_pane_g3

0x0002,

0xfae9,	// (0x0009ad03) vded2_slider_bg_pane_g

0x38ed,	// (0x0008eb07) aid_postcard_touch_down_pane_ParamLimits

0x38ed,	// (0x0008eb07) aid_postcard_touch_down_pane

0x3903,	// (0x0008eb1d) aid_postcard_touch_up_pane_ParamLimits

0x3903,	// (0x0008eb1d) aid_postcard_touch_up_pane

0x973f,	// (0x00094959) main_blid2_pane

0x9def,	// (0x00095009) popup_blid2_search_window

0x973f,	// (0x00094959) blid2_gps_pane

0x973f,	// (0x00094959) blid2_navig_pane

0x973f,	// (0x00094959) blid2_search_pane

0x973f,	// (0x00094959) blid2_tripm_pane

0x77bb,	// (0x000929d5) blid2_search_pane_g1_ParamLimits

0x77bb,	// (0x000929d5) blid2_search_pane_g1

0x77d3,	// (0x000929ed) blid2_search_pane_t1_ParamLimits

0x77d3,	// (0x000929ed) blid2_search_pane_t1

0x77e5,	// (0x000929ff) aid_size_cell_blid2_gps_ParamLimits

0x77e5,	// (0x000929ff) aid_size_cell_blid2_gps

0x77fd,	// (0x00092a17) blid2_gps_pane_g1_ParamLimits

0x77fd,	// (0x00092a17) blid2_gps_pane_g1

0x7811,	// (0x00092a2b) grid_blid2_satellite_pane_ParamLimits

0x7811,	// (0x00092a2b) grid_blid2_satellite_pane

0x782b,	// (0x00092a45) blid2_navig_pane_g1_ParamLimits

0x782b,	// (0x00092a45) blid2_navig_pane_g1

0x7837,	// (0x00092a51) blid2_navig_pane_t1_ParamLimits

0x7837,	// (0x00092a51) blid2_navig_pane_t1

0x7852,	// (0x00092a6c) blid2_navig_pane_t2_ParamLimits

0x7852,	// (0x00092a6c) blid2_navig_pane_t2

0x0001,

0xfaf0,	// (0x0009ad0a) blid2_navig_pane_t_ParamLimits

0xfaf0,	// (0x0009ad0a) blid2_navig_pane_t

0x786d,	// (0x00092a87) blid2_navig_ring_pane_ParamLimits

0x786d,	// (0x00092a87) blid2_navig_ring_pane

0x7886,	// (0x00092aa0) blid2_speed_pane_ParamLimits

0x7886,	// (0x00092aa0) blid2_speed_pane

0x7892,	// (0x00092aac) blid2_tripm_pane_g1_ParamLimits

0x7892,	// (0x00092aac) blid2_tripm_pane_g1

0x78ad,	// (0x00092ac7) blid2_tripm_pane_g2_ParamLimits

0x78ad,	// (0x00092ac7) blid2_tripm_pane_g2

0x78c1,	// (0x00092adb) blid2_tripm_pane_g3_ParamLimits

0x78c1,	// (0x00092adb) blid2_tripm_pane_g3

0x78d5,	// (0x00092aef) blid2_tripm_pane_g4_ParamLimits

0x78d5,	// (0x00092aef) blid2_tripm_pane_g4

0x78e9,	// (0x00092b03) blid2_tripm_pane_g5_ParamLimits

0x78e9,	// (0x00092b03) blid2_tripm_pane_g5

0x0005,

0xfaf5,	// (0x0009ad0f) blid2_tripm_pane_g_ParamLimits

0xfaf5,	// (0x0009ad0f) blid2_tripm_pane_g

0x790f,	// (0x00092b29) blid2_tripm_pane_t1_ParamLimits

0x790f,	// (0x00092b29) blid2_tripm_pane_t1

0x792a,	// (0x00092b44) blid2_tripm_pane_t2_ParamLimits

0x792a,	// (0x00092b44) blid2_tripm_pane_t2

0x7943,	// (0x00092b5d) blid2_tripm_pane_t3_ParamLimits

0x7943,	// (0x00092b5d) blid2_tripm_pane_t3

0x0003,

0xfb02,	// (0x0009ad1c) blid2_tripm_pane_t_ParamLimits

0xfb02,	// (0x0009ad1c) blid2_tripm_pane_t

0x798a,	// (0x00092ba4) cell_blid2_satellite_pane_ParamLimits

0x798a,	// (0x00092ba4) cell_blid2_satellite_pane

0x79a8,	// (0x00092bc2) cell_blid2_satellite_pane_g1

0xdc37,	// (0x00098e51) cell_blid2_satellite_pane_t1

0xcc28,	// (0x00097e42) blid2_speed_pane_g1

0xdc45,	// (0x00098e5f) blid2_speed_pane_t1

0xdc53,	// (0x00098e6d) blid2_speed_pane_t2

0x0001,

0xfb0b,	// (0x0009ad25) blid2_speed_pane_t

0xcc28,	// (0x00097e42) blid2_navig_ring_pane_g1

0x79b1,	// (0x00092bcb) blid2_navig_ring_pane_g2

0x79b9,	// (0x00092bd3) blid2_navig_ring_pane_g3

0x79c1,	// (0x00092bdb) blid2_navig_ring_pane_g4

0x79c9,	// (0x00092be3) blid2_navig_ring_pane_g5

0x0004,

0xfb10,	// (0x0009ad2a) blid2_navig_ring_pane_g

0x973f,	// (0x00094959) bg_popup_window_pane_cp011

0xdc61,	// (0x00098e7b) popup_blid2_search_window_g1

0xdc69,	// (0x00098e83) popup_blid2_search_window_t1

0xdc77,	// (0x00098e91) popup_blid2_search_window_t2

0x0001,

0xfb1b,	// (0x0009ad35) popup_blid2_search_window_t

0xaa75,	// (0x00095c8f) main_browser_pane_g1

0xa766,	// (0x00095980) main_browser_pane_ParamLimits

0xa4a9,	// (0x000956c3) bg_button_pane_cp011_ParamLimits

0x69b5,	// (0x00091bcf) cell_vitu2_function_pane_g1_ParamLimits

0xc81e,	// (0x00097a38) bg_popup_sub_pane_cp22_ParamLimits

0x0526,	// (0x0008b740) input_focus_pane_cp08_ParamLimits

0x72d5,	// (0x000924ef) popup_vitu2_query_button_pane_ParamLimits

0x72d5,	// (0x000924ef) popup_vitu2_query_button_pane

0x053d,	// (0x0008b757) popup_vitu2_query_input_button_pane

0xd8e2,	// (0x00098afc) popup_vitu2_query_window_g1_ParamLimits

0x0547,	// (0x0008b761) popup_vitu2_query_window_g2_ParamLimits

0xfa1c,	// (0x0009ac36) popup_vitu2_query_window_g_ParamLimits

0x973f,	// (0x00094959) bg_button_pane_cp026

0x79d1,	// (0x00092beb) popup_vitu2_query_input_button_pane_g1

0x973f,	// (0x00094959) bg_button_pane_cp025

0xdc85,	// (0x00098e9f) popup_vitu2_query_button_pane_t1

0x4f85,	// (0x0009019f) main_mp3_pane_t6

0x4f93,	// (0x000901ad) popup_slider_window_cp01

0xa1e9,	// (0x00095403) cam4_battery_pane

0xa242,	// (0x0009545c) cam4_battery_pane_cp02

0xa312,	// (0x0009552c) cam4_battery_pane_cp01

0xa312,	// (0x0009552c) cam4_battery_pane_cp03

0xcc28,	// (0x00097e42) cam4_battery_pane_g1

0xda44,	// (0x00098c5e) cam4_battery_pane_g2

0x0001,

0xfb20,	// (0x0009ad3a) cam4_battery_pane_g

0xcaf2,	// (0x00097d0c) popup_blid_sat_info2_window_t11

0xb249,	// (0x00096463) aid_size_touch_mv_arrow_left_ParamLimits

0xb274,	// (0x0009648e) aid_size_touch_mv_arrow_right_ParamLimits

0xb2d2,	// (0x000964ec) navi_pane_g1_ParamLimits

0xb2de,	// (0x000964f8) navi_pane_g2_ParamLimits

0xb30c,	// (0x00096526) navi_pane_g3_ParamLimits

0xf3ea,	// (0x0009a604) navi_pane_g_ParamLimits

0x33d6,	// (0x0008e5f0) navi_pane_mv_t1_ParamLimits

0x5bf6,	// (0x00090e10) grid_imed_effect_pane_ParamLimits

0x20c7,	// (0x0008d2e1) aid_placing_vt_slider_lsc

0xa9c4,	// (0x00095bde) aid_placing_vt_slider_prt

0xa4a9,	// (0x000956c3) bg_tb_trans_pane_cp01_ParamLimits

0xcda8,	// (0x00097fc2) popup_image_details_window_g1_ParamLimits

0xcdbb,	// (0x00097fd5) popup_image_details_window_g2_ParamLimits

0xcdd0,	// (0x00097fea) popup_image_details_window_g3_ParamLimits

0xcdd0,	// (0x00097fea) popup_image_details_window_g3

0xf71d,	// (0x0009a937) popup_image_details_window_g_ParamLimits

0xcde4,	// (0x00097ffe) popup_image_details_window_t1_ParamLimits

0xcdf6,	// (0x00098010) popup_image_details_window_t2_ParamLimits

0xce0f,	// (0x00098029) popup_image_details_window_t3_ParamLimits

0xce23,	// (0x0009803d) popup_image_details_window_t4_ParamLimits

0xce3e,	// (0x00098058) popup_image_details_window_t5_ParamLimits

0xf724,	// (0x0009a93e) popup_image_details_window_t_ParamLimits

0x761d,	// (0x00092837) cl_header_name_pane_ParamLimits

0x761d,	// (0x00092837) cl_header_name_pane

0x79d9,	// (0x00092bf3) cl_header_name_pane_t1_ParamLimits

0x79d9,	// (0x00092bf3) cl_header_name_pane_t1

0x79fa,	// (0x00092c14) cl_header_name_pane_t2_ParamLimits

0x79fa,	// (0x00092c14) cl_header_name_pane_t2

0x7a3c,	// (0x00092c56) cl_header_name_pane_t3_ParamLimits

0x7a3c,	// (0x00092c56) cl_header_name_pane_t3

0x0002,

0xfb25,	// (0x0009ad3f) cl_header_name_pane_t_ParamLimits

0xfb25,	// (0x0009ad3f) cl_header_name_pane_t

0xb39b,	// (0x000965b5) navi_pane_mv_g2_ParamLimits

0xd64b,	// (0x00098865) field_vitu2_entry_pane_g1_ParamLimits

0xd657,	// (0x00098871) field_vitu2_entry_pane_g2_ParamLimits

0xd663,	// (0x0009887d) field_vitu2_entry_pane_g3_ParamLimits

0xd663,	// (0x0009887d) field_vitu2_entry_pane_g3

0xf91b,	// (0x0009ab35) field_vitu2_entry_pane_g_ParamLimits

0x692c,	// (0x00091b46) cell_vitu2_itu_pane_g1_ParamLimits

0x693c,	// (0x00091b56) cell_vitu2_itu_pane_g2_ParamLimits

0x693c,	// (0x00091b56) cell_vitu2_itu_pane_g2

0x0001,

0xf927,	// (0x0009ab41) cell_vitu2_itu_pane_g_ParamLimits

0xf927,	// (0x0009ab41) cell_vitu2_itu_pane_g

0xa4a9,	// (0x000956c3) bg_vkb2_func_pane_cp05_ParamLimits

0xa4a9,	// (0x000956c3) bg_vkb2_func_pane_cp05

0xa4a9,	// (0x000956c3) bg_vkb2_func_pane_cp03

0xa4a9,	// (0x000956c3) bg_vkb2_func_pane_cp04

0xa4a9,	// (0x000956c3) bg_vkb2_func_pane_cp10_ParamLimits

0xa4a9,	// (0x000956c3) bg_vkb2_func_pane_cp10

0x0602,	// (0x0008b81c) bg_vkb2_func_pane_cp08

0x75c7,	// (0x000927e1) bg_vkb2_func_pane_cp06

0x75d5,	// (0x000927ef) bg_vkb2_func_pane_cp07

0xdb93,	// (0x00098dad) bg_vkb2_func_pane_cp11_ParamLimits

0xdb93,	// (0x00098dad) bg_vkb2_func_pane_cp11

0xdba8,	// (0x00098dc2) bg_vkb2_func_pane_cp12_ParamLimits

0xdba8,	// (0x00098dc2) bg_vkb2_func_pane_cp12

0x973f,	// (0x00094959) bg_vkb2_func_pane_cp09

0xd683,	// (0x0009889d) bg_vkb2_func_pane_g1

0xab86,	// (0x00095da0) bg_vkb2_func_pane_g2

0xd68b,	// (0x000988a5) bg_vkb2_func_pane_g3

0xd693,	// (0x000988ad) bg_vkb2_func_pane_g4

0xd8a7,	// (0x00098ac1) bg_vkb2_func_pane_g5

0xd6ab,	// (0x000988c5) bg_vkb2_func_pane_g6

0xd6b3,	// (0x000988cd) bg_vkb2_func_pane_g7

0xd6a3,	// (0x000988bd) bg_vkb2_func_pane_g8

0xab66,	// (0x00095d80) bg_vkb2_func_pane_g9

0x0008,

0xfb2c,	// (0x0009ad46) bg_vkb2_func_pane_g

0x78fd,	// (0x00092b17) blid2_tripm_pane_g6_ParamLimits

0x78fd,	// (0x00092b17) blid2_tripm_pane_g6

0xd4db,	// (0x000986f5) mp4_progress_pane_g1

0x7976,	// (0x00092b90) blid2_tripm_values_pane_ParamLimits

0x7976,	// (0x00092b90) blid2_tripm_values_pane

0x7a6d,	// (0x00092c87) blid2_tripm_values_pane_t1

0x7a7b,	// (0x00092c95) blid2_tripm_values_pane_t2

0x7a89,	// (0x00092ca3) blid2_tripm_values_pane_t3

0x7a97,	// (0x00092cb1) blid2_tripm_values_pane_t4

0x7aa5,	// (0x00092cbf) blid2_tripm_values_pane_t5

0x7ab3,	// (0x00092ccd) blid2_tripm_values_pane_t6

0x7ac1,	// (0x00092cdb) blid2_tripm_values_pane_t7

0x7acf,	// (0x00092ce9) blid2_tripm_values_pane_t8

0x7add,	// (0x00092cf7) blid2_tripm_values_pane_t9

0x0008,

0xfb3f,	// (0x0009ad59) blid2_tripm_values_pane_t

0x2109,	// (0x0008d323) call_video_pane_t1_ParamLimits

0x2127,	// (0x0008d341) call_video_pane_t2_ParamLimits

0xf273,	// (0x0009a48d) call_video_pane_t_ParamLimits

0x0324,	// (0x0008b53e) msg_header_pane_g1_ParamLimits

0xb582,	// (0x0009679c) msg_header_pane_g2_ParamLimits

0xb582,	// (0x0009679c) msg_header_pane_g2

0x0001,

0xf48d,	// (0x0009a6a7) msg_header_pane_g_ParamLimits

0xf48d,	// (0x0009a6a7) msg_header_pane_g

0xa766,	// (0x00095980) main_clock2_pane_ParamLimits

0x58ed,	// (0x00090b07) grid_clock2_toolbar_pane_ParamLimits

0x58ed,	// (0x00090b07) grid_clock2_toolbar_pane

0x58ed,	// (0x00090b07) listscroll_clock2_pane_ParamLimits

0x58ed,	// (0x00090b07) listscroll_clock2_pane

0x59e8,	// (0x00090c02) main_clock2_pane_t3_ParamLimits

0x59e8,	// (0x00090c02) main_clock2_pane_t3

0x5a0c,	// (0x00090c26) main_clock2_pane_t4_ParamLimits

0x5a0c,	// (0x00090c26) main_clock2_pane_t4

0xdc93,	// (0x00098ead) cell_clock2_toolbar_pane

0xdc9b,	// (0x00098eb5) cell_clock2_toolbar_pane_cp01

0xdc9b,	// (0x00098eb5) cell_clock2_toolbar_pane_cp02

0xdca3,	// (0x00098ebd) cell_clock2_toolbar_pane_cp03

0xdcab,	// (0x00098ec5) list_clock2_pane

0xb15a,	// (0x00096374) scroll_pane_cp10

0xdcb3,	// (0x00098ecd) list_single_clock2_pane_ParamLimits

0xdcb3,	// (0x00098ecd) list_single_clock2_pane

0xb402,	// (0x0009661c) list_highlight_pane_cp08

0xdcc0,	// (0x00098eda) list_single_clock2_pane_t1

0xdcce,	// (0x00098ee8) list_single_clock2_pane_t2

0x0001,

0xfb52,	// (0x0009ad6c) list_single_clock2_pane_t

0x973f,	// (0x00094959) bg_button_pane_cp10

0xdcdc,	// (0x00098ef6) cell_clock2_toolbar_pane_g1

0x3879,	// (0x0008ea93) aid_main_viewer_pane_g1_ParamLimits

0x3879,	// (0x0008ea93) aid_main_viewer_pane_g1

0x3887,	// (0x0008eaa1) aid_main_viewer_pane_g2_ParamLimits

0x3887,	// (0x0008eaa1) aid_main_viewer_pane_g2

0x3895,	// (0x0008eaaf) aid_main_viewer_pane_g3_ParamLimits

0x3895,	// (0x0008eaaf) aid_main_viewer_pane_g3

0x38a4,	// (0x0008eabe) aid_main_viewer_pane_g4_ParamLimits

0x38a4,	// (0x0008eabe) aid_main_viewer_pane_g4

0x0003,

0xf49e,	// (0x0009a6b8) aid_main_viewer_pane_g_ParamLimits

0xf49e,	// (0x0009a6b8) aid_main_viewer_pane_g

0x41b2,	// (0x0008f3cc) main_calc_pane_ParamLimits

0x41c6,	// (0x0008f3e0) main_dialer2_pane_ParamLimits

0x973f,	// (0x00094959) main_cam6_pane

0x973f,	// (0x00094959) main_vid6_pane

0x58f9,	// (0x00090b13) listscroll_gen_pane_cp06_ParamLimits

0x58f9,	// (0x00090b13) listscroll_gen_pane_cp06

0x5a2f,	// (0x00090c49) main_clock2_pane_t5_ParamLimits

0x5a2f,	// (0x00090c49) main_clock2_pane_t5

0x5a8b,	// (0x00090ca5) aid_call2_pane_cp10_ParamLimits

0x5a9d,	// (0x00090cb7) aid_call_pane_cp10_ParamLimits

0xb23d,	// (0x00096457) popup_clock_analogue_window_cp10_g1_ParamLimits

0xb23d,	// (0x00096457) popup_clock_analogue_window_cp10_g2_ParamLimits

0x5aaf,	// (0x00090cc9) popup_clock_analogue_window_cp10_g3_ParamLimits

0x5aaf,	// (0x00090cc9) popup_clock_analogue_window_cp10_g4_ParamLimits

0xb23d,	// (0x00096457) popup_clock_analogue_window_cp10_g5_ParamLimits

0xf7d4,	// (0x0009a9ee) popup_clock_analogue_window_cp10_g_ParamLimits

0x5ac1,	// (0x00090cdb) popup_clock_analogue_window_cp10_t1_ParamLimits

0x6151,	// (0x0009136b) cell_dialer2_keypad_pane_g2_ParamLimits

0x6151,	// (0x0009136b) cell_dialer2_keypad_pane_g2

0x0001,

0xf8ba,	// (0x0009aad4) cell_dialer2_keypad_pane_g_ParamLimits

0xf8ba,	// (0x0009aad4) cell_dialer2_keypad_pane_g

0x616d,	// (0x00091387) cell_dialer2_keypad_pane_t1

0x6ccb,	// (0x00091ee5) main_cset_text2_pane_ParamLimits

0x6ccb,	// (0x00091ee5) main_cset_text2_pane

0xdafb,	// (0x00098d15) area_vitu2_query_pane_g1_ParamLimits

0x05c9,	// (0x0008b7e3) area_vitu2_query_pane_g2_ParamLimits

0xfa6f,	// (0x0009ac89) area_vitu2_query_pane_g_ParamLimits

0x75a3,	// (0x000927bd) area_vitu2_query_pane_t7_ParamLimits

0x75a3,	// (0x000927bd) area_vitu2_query_pane_t7

0x75c7,	// (0x000927e1) bg_button_pane_cp018_ParamLimits

0x75d5,	// (0x000927ef) bg_button_pane_cp021_ParamLimits

0x0602,	// (0x0008b81c) bg_button_pane_cp022_ParamLimits

0x0602,	// (0x0008b81c) bg_vkb2_func_pane_cp08_ParamLimits

0x75c7,	// (0x000927e1) bg_vkb2_func_pane_cp06_ParamLimits

0x75d5,	// (0x000927ef) bg_vkb2_func_pane_cp07_ParamLimits

0x0613,	// (0x0008b82d) input_focus_pane_cp09_ParamLimits

0xa39a,	// (0x000955b4) cam6_autofocus_pane_ParamLimits

0xa39a,	// (0x000955b4) cam6_autofocus_pane

0x7aeb,	// (0x00092d05) cam6_image_uncrop_pane_ParamLimits

0x7aeb,	// (0x00092d05) cam6_image_uncrop_pane

0x7afa,	// (0x00092d14) cam6_indi_pane_ParamLimits

0x7afa,	// (0x00092d14) cam6_indi_pane

0x7b10,	// (0x00092d2a) cam6_mode_pane_ParamLimits

0x7b10,	// (0x00092d2a) cam6_mode_pane

0x7b22,	// (0x00092d3c) cam6_timer_pane_ParamLimits

0x7b22,	// (0x00092d3c) cam6_timer_pane

0x7b2e,	// (0x00092d48) cam6_zoom_pane_ParamLimits

0x7b2e,	// (0x00092d48) cam6_zoom_pane

0x7b3a,	// (0x00092d54) cam6_mode_pane_g1_ParamLimits

0x7b3a,	// (0x00092d54) cam6_mode_pane_g1

0x7b4a,	// (0x00092d64) cam6_mode_pane_g2_ParamLimits

0x7b4a,	// (0x00092d64) cam6_mode_pane_g2

0x7b5a,	// (0x00092d74) cam6_mode_pane_g3_ParamLimits

0x7b5a,	// (0x00092d74) cam6_mode_pane_g3

0x7b6a,	// (0x00092d84) cam6_mode_pane_g4_ParamLimits

0x7b6a,	// (0x00092d84) cam6_mode_pane_g4

0x0003,

0xfb57,	// (0x0009ad71) cam6_mode_pane_g_ParamLimits

0xfb57,	// (0x0009ad71) cam6_mode_pane_g

0xdce4,	// (0x00098efe) bg_tb_trans_pane_cp08_ParamLimits

0xdce4,	// (0x00098efe) bg_tb_trans_pane_cp08

0xdcf2,	// (0x00098f0c) cam6_battery_pane_ParamLimits

0xdcf2,	// (0x00098f0c) cam6_battery_pane

0xdd08,	// (0x00098f22) cam6_indi_pane_g1_ParamLimits

0xdd08,	// (0x00098f22) cam6_indi_pane_g1

0xdd1a,	// (0x00098f34) cam6_indi_pane_g2_ParamLimits

0xdd1a,	// (0x00098f34) cam6_indi_pane_g2

0xdd2c,	// (0x00098f46) cam6_indi_pane_g3_ParamLimits

0xdd2c,	// (0x00098f46) cam6_indi_pane_g3

0x0002,

0xfb60,	// (0x0009ad7a) cam6_indi_pane_g_ParamLimits

0xfb60,	// (0x0009ad7a) cam6_indi_pane_g

0xdd3e,	// (0x00098f58) cam6_indi_pane_t1_ParamLimits

0xdd3e,	// (0x00098f58) cam6_indi_pane_t1

0x7b7a,	// (0x00092d94) cam6_autofocus_pane_g1

0x7b82,	// (0x00092d9c) cam6_autofocus_pane_g2

0x7b8a,	// (0x00092da4) cam6_autofocus_pane_g3

0x7b92,	// (0x00092dac) cam6_autofocus_pane_g4

0x0003,

0xfb67,	// (0x0009ad81) cam6_autofocus_pane_g

0xdd64,	// (0x00098f7e) cam6_timer_pane_g1

0xdd6c,	// (0x00098f86) cam6_timer_pane_t1

0xdd7a,	// (0x00098f94) cam6_zoom_cont_pane

0xdd82,	// (0x00098f9c) cam6_zoom_pane_g1

0xdd8a,	// (0x00098fa4) cam6_zoom_pane_g2

0x7b9a,	// (0x00092db4) cam6_zoom_pane_g3

0x0002,

0xfb70,	// (0x0009ad8a) cam6_zoom_pane_g

0xcc28,	// (0x00097e42) cam6_battery_pane_g1

0xcc28,	// (0x00097e42) cam6_battery_pane_g2

0x0001,

0xf6e1,	// (0x0009a8fb) cam6_battery_pane_g

0xdd92,	// (0x00098fac) cam6_zoom_cont_pane_g1

0xdd9b,	// (0x00098fb5) cam6_zoom_cont_pane_g2

0xdda4,	// (0x00098fbe) cam6_zoom_cont_pane_g3

0x0002,

0xfb77,	// (0x0009ad91) cam6_zoom_cont_pane_g

0x7bb7,	// (0x00092dd1) cam6_mode_pane_cp_ParamLimits

0x7bb7,	// (0x00092dd1) cam6_mode_pane_cp

0x7b2e,	// (0x00092d48) cam6_zoom_pane_cp_ParamLimits

0x7b2e,	// (0x00092d48) cam6_zoom_pane_cp

0x7bc9,	// (0x00092de3) vid6_image_uncrop_cif_pane_ParamLimits

0x7bc9,	// (0x00092de3) vid6_image_uncrop_cif_pane

0x7bd9,	// (0x00092df3) vid6_image_uncrop_nhd_pane_ParamLimits

0x7bd9,	// (0x00092df3) vid6_image_uncrop_nhd_pane

0x7aeb,	// (0x00092d05) vid6_image_uncrop_vga_pane_ParamLimits

0x7aeb,	// (0x00092d05) vid6_image_uncrop_vga_pane

0x7be8,	// (0x00092e02) vid6_image_uncrop_wvga_pane_ParamLimits

0x7be8,	// (0x00092e02) vid6_image_uncrop_wvga_pane

0x7bf7,	// (0x00092e11) vid6_indi_pane_ParamLimits

0x7bf7,	// (0x00092e11) vid6_indi_pane

0xdce4,	// (0x00098efe) bg_tb_trans_pane_cp09_ParamLimits

0xdce4,	// (0x00098efe) bg_tb_trans_pane_cp09

0xddbc,	// (0x00098fd6) cam6_battery_pane_cp_ParamLimits

0xddbc,	// (0x00098fd6) cam6_battery_pane_cp

0xddc8,	// (0x00098fe2) vid6_indi_pane_g1_ParamLimits

0xddc8,	// (0x00098fe2) vid6_indi_pane_g1

0xddda,	// (0x00098ff4) vid6_indi_pane_g2_ParamLimits

0xddda,	// (0x00098ff4) vid6_indi_pane_g2

0xddec,	// (0x00099006) vid6_indi_pane_g3_ParamLimits

0xddec,	// (0x00099006) vid6_indi_pane_g3

0xde01,	// (0x0009901b) vid6_indi_pane_g4_ParamLimits

0xde01,	// (0x0009901b) vid6_indi_pane_g4

0xde16,	// (0x00099030) vid6_indi_pane_g5_ParamLimits

0xde16,	// (0x00099030) vid6_indi_pane_g5

0x0004,

0xfb7e,	// (0x0009ad98) vid6_indi_pane_g_ParamLimits

0xfb7e,	// (0x0009ad98) vid6_indi_pane_g

0xde30,	// (0x0009904a) vid6_indi_pane_t1_ParamLimits

0xde30,	// (0x0009904a) vid6_indi_pane_t1

0xde46,	// (0x00099060) vid6_indi_pane_t2_ParamLimits

0xde46,	// (0x00099060) vid6_indi_pane_t2

0xde6e,	// (0x00099088) vid6_indi_pane_t3_ParamLimits

0xde6e,	// (0x00099088) vid6_indi_pane_t3

0xde96,	// (0x000990b0) vid6_indi_pane_t4_ParamLimits

0xde96,	// (0x000990b0) vid6_indi_pane_t4

0x0003,

0xfb89,	// (0x0009ada3) vid6_indi_pane_t_ParamLimits

0xfb89,	// (0x0009ada3) vid6_indi_pane_t

0xdeba,	// (0x000990d4) wait_bar_pane_cp08

0x7c0f,	// (0x00092e29) main_cset_text2_pane_t1_ParamLimits

0x7c0f,	// (0x00092e29) main_cset_text2_pane_t1

0x7ba2,	// (0x00092dbc) listscroll_gen_pane_cp06_t1_ParamLimits

0x7ba2,	// (0x00092dbc) listscroll_gen_pane_cp06_t1

0x973f,	// (0x00094959) main_cam6_set_pane

0xce88,	// (0x000980a2) bg_tb_trans_pane_cp06_ParamLimits

0xa1f1,	// (0x0009540b) cam4_indicators_pane_g1_ParamLimits

0xa202,	// (0x0009541c) cam4_indicators_pane_g2_ParamLimits

0xf8f7,	// (0x0009ab11) cam4_indicators_pane_g_ParamLimits

0xa220,	// (0x0009543a) cam4_indicators_pane_t1_ParamLimits

0xa4a9,	// (0x000956c3) bg_tb_trans_pane_cp07_ParamLimits

0xa24a,	// (0x00095464) vid4_indicators_pane_g1_ParamLimits

0xa25e,	// (0x00095478) vid4_indicators_pane_g2_ParamLimits

0xa272,	// (0x0009548c) vid4_indicators_pane_g3_ParamLimits

0xa283,	// (0x0009549d) vid4_indicators_pane_g4_ParamLimits

0xf909,	// (0x0009ab23) vid4_indicators_pane_g_ParamLimits

0xa29f,	// (0x000954b9) vid4_indicators_pane_t1_ParamLimits

0x7710,	// (0x0009292a) vid4_progress_pane_g1_ParamLimits

0x7722,	// (0x0009293c) vid4_progress_pane_g2_ParamLimits

0x9dd7,	// (0x00094ff1) vid4_progress_pane_g3_ParamLimits

0xa31a,	// (0x00095534) vid4_progress_pane_g4_ParamLimits

0xfaba,	// (0x0009acd4) vid4_progress_pane_g_ParamLimits

0xa338,	// (0x00095552) vid4_progress_pane_t1_ParamLimits

0xa34d,	// (0x00095567) vid4_progress_pane_t2_ParamLimits

0xa363,	// (0x0009557d) vid4_progress_pane_t3_ParamLimits

0xfac5,	// (0x0009acdf) vid4_progress_pane_t_ParamLimits

0xa379,	// (0x00095593) wait_bar_pane_cp07_ParamLimits

0x7c2e,	// (0x00092e48) main_cam6_set_pane_g2_ParamLimits

0x7c2e,	// (0x00092e48) main_cam6_set_pane_g2

0x7c52,	// (0x00092e6c) main_cset6_listscroll_pane_ParamLimits

0x7c52,	// (0x00092e6c) main_cset6_listscroll_pane

0x7c6e,	// (0x00092e88) main_cset6_slider_pane_ParamLimits

0x7c6e,	// (0x00092e88) main_cset6_slider_pane

0x7c84,	// (0x00092e9e) main_cset6_text2_pane_ParamLimits

0x7c84,	// (0x00092e9e) main_cset6_text2_pane

0xdec9,	// (0x000990e3) main_cset6_text_pane

0xded1,	// (0x000990eb) main_cset_list_pane_copy1_ParamLimits

0xded1,	// (0x000990eb) main_cset_list_pane_copy1

0xdee1,	// (0x000990fb) scroll_pane_cp028_copy1

0x7c92,	// (0x00092eac) cset_list_set_pane_copy1

0x7ca4,	// (0x00092ebe) aid_position_infowindow_above_copy1

0x7cac,	// (0x00092ec6) aid_position_infowindow_below_copy1

0x7cb4,	// (0x00092ece) cset_list_set_pane_g1_copy1

0x0653,	// (0x0008b86d) cset_list_set_pane_g3_copy1_ParamLimits

0x0653,	// (0x0008b86d) cset_list_set_pane_g3_copy1

0x0662,	// (0x0008b87c) cset_list_set_pane_t1_copy1_ParamLimits

0x0662,	// (0x0008b87c) cset_list_set_pane_t1_copy1

0xa4a9,	// (0x000956c3) list_highlight_pane_cp021_copy1_ParamLimits

0xa4a9,	// (0x000956c3) list_highlight_pane_cp021_copy1

0xdeea,	// (0x00099104) cset6_slider_pane_ParamLimits

0xdeea,	// (0x00099104) cset6_slider_pane

0xdf16,	// (0x00099130) main_cset6_slider_pane_g1_ParamLimits

0xdf16,	// (0x00099130) main_cset6_slider_pane_g1

0x7cbc,	// (0x00092ed6) main_cset6_slider_pane_g2_ParamLimits

0x7cbc,	// (0x00092ed6) main_cset6_slider_pane_g2

0xdf3e,	// (0x00099158) main_cset6_slider_pane_g3_ParamLimits

0xdf3e,	// (0x00099158) main_cset6_slider_pane_g3

0x7ce4,	// (0x00092efe) main_cset6_slider_pane_g4_ParamLimits

0x7ce4,	// (0x00092efe) main_cset6_slider_pane_g4

0x7cf0,	// (0x00092f0a) main_cset6_slider_pane_g5_ParamLimits

0x7cf0,	// (0x00092f0a) main_cset6_slider_pane_g5

0xd7b2,	// (0x000989cc) main_cset6_slider_pane_g7_ParamLimits

0xd7b2,	// (0x000989cc) main_cset6_slider_pane_g7

0xd7be,	// (0x000989d8) main_cset6_slider_pane_g8_ParamLimits

0xd7be,	// (0x000989d8) main_cset6_slider_pane_g8

0x6d78,	// (0x00091f92) main_cset6_slider_pane_g9_ParamLimits

0x6d78,	// (0x00091f92) main_cset6_slider_pane_g9

0x6d84,	// (0x00091f9e) main_cset6_slider_pane_g10_ParamLimits

0x6d84,	// (0x00091f9e) main_cset6_slider_pane_g10

0x6d90,	// (0x00091faa) main_cset6_slider_pane_g11_ParamLimits

0x6d90,	// (0x00091faa) main_cset6_slider_pane_g11

0x6d9c,	// (0x00091fb6) main_cset6_slider_pane_g12_ParamLimits

0x6d9c,	// (0x00091fb6) main_cset6_slider_pane_g12

0x6da8,	// (0x00091fc2) main_cset6_slider_pane_g13_ParamLimits

0x6da8,	// (0x00091fc2) main_cset6_slider_pane_g13

0x6db4,	// (0x00091fce) main_cset6_slider_pane_g14_ParamLimits

0x6db4,	// (0x00091fce) main_cset6_slider_pane_g14

0x7cfc,	// (0x00092f16) main_cset6_slider_pane_g15_ParamLimits

0x7cfc,	// (0x00092f16) main_cset6_slider_pane_g15

0x6dd8,	// (0x00091ff2) main_cset6_slider_pane_g16_ParamLimits

0x6dd8,	// (0x00091ff2) main_cset6_slider_pane_g16

0x6de4,	// (0x00091ffe) main_cset6_slider_pane_g17_ParamLimits

0x6de4,	// (0x00091ffe) main_cset6_slider_pane_g17

0x0011,

0xfb92,	// (0x0009adac) main_cset6_slider_pane_g_ParamLimits

0xfb92,	// (0x0009adac) main_cset6_slider_pane_g

0xdf4a,	// (0x00099164) main_cset6_slider_pane_t1_ParamLimits

0xdf4a,	// (0x00099164) main_cset6_slider_pane_t1

0x7d2c,	// (0x00092f46) main_cset6_slider_pane_t2_ParamLimits

0x7d2c,	// (0x00092f46) main_cset6_slider_pane_t2

0x7d57,	// (0x00092f71) main_cset6_slider_pane_t3_ParamLimits

0x7d57,	// (0x00092f71) main_cset6_slider_pane_t3

0x7d82,	// (0x00092f9c) main_cset6_slider_pane_t4_ParamLimits

0x7d82,	// (0x00092f9c) main_cset6_slider_pane_t4

0x7dad,	// (0x00092fc7) main_cset6_slider_pane_t5_ParamLimits

0x7dad,	// (0x00092fc7) main_cset6_slider_pane_t5

0xdf8b,	// (0x000991a5) main_cset6_slider_pane_t7_ParamLimits

0xdf8b,	// (0x000991a5) main_cset6_slider_pane_t7

0x7dd8,	// (0x00092ff2) main_cset6_slider_pane_t8_ParamLimits

0x7dd8,	// (0x00092ff2) main_cset6_slider_pane_t8

0x7dfc,	// (0x00093016) main_cset6_slider_pane_t9_ParamLimits

0x7dfc,	// (0x00093016) main_cset6_slider_pane_t9

0x7e20,	// (0x0009303a) main_cset6_slider_pane_t10_ParamLimits

0x7e20,	// (0x0009303a) main_cset6_slider_pane_t10

0x7e44,	// (0x0009305e) main_cset6_slider_pane_t11_ParamLimits

0x7e44,	// (0x0009305e) main_cset6_slider_pane_t11

0xdfc1,	// (0x000991db) main_cset6_slider_pane_t14_ParamLimits

0xdfc1,	// (0x000991db) main_cset6_slider_pane_t14

0xdffa,	// (0x00099214) main_cset6_slider_pane_t15_ParamLimits

0xdffa,	// (0x00099214) main_cset6_slider_pane_t15

0x000b,

0xfbb7,	// (0x0009add1) main_cset6_slider_pane_t_ParamLimits

0xfbb7,	// (0x0009add1) main_cset6_slider_pane_t

0xda4e,	// (0x00098c68) cset_slider_pane_g1_copy1

0xda57,	// (0x00098c71) cset_slider_pane_g2_copy1

0xda60,	// (0x00098c7a) cset_slider_pane_g3_copy1

0x973f,	// (0x00094959) bg_popup_sub_pane_cp011_copy1

0xe033,	// (0x0009924d) main_cset_text_pane_g1_copy1

0xd8f6,	// (0x00098b10) main_cset_text_pane_t1_copy1

0xd904,	// (0x00098b1e) main_cset_text_pane_t2_copy1

0xd912,	// (0x00098b2c) main_cset_text_pane_t3_copy1

0xd920,	// (0x00098b3a) main_cset_text_pane_t4_copy1

0xd92e,	// (0x00098b48) main_cset_text_pane_t5_copy1

0xe03b,	// (0x00099255) main_cset_text_pane_t6_copy1

0xe049,	// (0x00099263) main_cset_text_pane_t7_copy1

0x7e68,	// (0x00093082) main_cset_text2_pane_t1_copy1

0xa4a9,	// (0x000956c3) main_ncimui_pane

0x4402,	// (0x0008f61c) popup_query_ncimui_window_ParamLimits

0x4402,	// (0x0008f61c) popup_query_ncimui_window

0x9f3e,	// (0x00095158) field_cale_ev2_pane_g4_ParamLimits

0x9f3e,	// (0x00095158) field_cale_ev2_pane_g4

0x602d,	// (0x00091247) cell_video_dialer_keypad_pane_g2_ParamLimits

0x602d,	// (0x00091247) cell_video_dialer_keypad_pane_g2

0x0001,

0xf895,	// (0x0009aaaf) cell_video_dialer_keypad_pane_g_ParamLimits

0xf895,	// (0x0009aaaf) cell_video_dialer_keypad_pane_g

0x6045,	// (0x0009125f) cell_video_dialer_keypad_pane_t1

0x973f,	// (0x00094959) bg_popup_window_pane_cp012

0xb01b,	// (0x00096235) heading_pane_cp06

0xe075,	// (0x0009928f) ncim_query_content_pane

0x973f,	// (0x00094959) bg_popup_heading_pane_cp01

0xe07d,	// (0x00099297) ncim_heading_pane_t1

0xe08b,	// (0x000992a5) ncim_indicator_popup_pane

0xe09d,	// (0x000992b7) ncim_query_button_pane

0xe0b1,	// (0x000992cb) ncim_query_content_pane_t1

0xe0c3,	// (0x000992dd) ncim_query_content_pane_t2

0x0005,

0xfbfb,	// (0x0009ae15) ncim_query_content_pane_t

0xe0fd,	// (0x00099317) ncim_query_list_pane

0xe10f,	// (0x00099329) ncim_query_popup_pane

0xe08b,	// (0x000992a5) ncim_indicator_popup_pane_ParamLimits

0x7fac,	// (0x000931c6) ncim_query_content_pane_g1_ParamLimits

0x7fac,	// (0x000931c6) ncim_query_content_pane_g1

0xe0b1,	// (0x000992cb) ncim_query_content_pane_t1_ParamLimits

0xe0c3,	// (0x000992dd) ncim_query_content_pane_t2_ParamLimits

0x7fb8,	// (0x000931d2) ncim_query_content_pane_t3_ParamLimits

0x7fb8,	// (0x000931d2) ncim_query_content_pane_t3

0x7fe0,	// (0x000931fa) ncim_query_content_pane_t4_ParamLimits

0x7fe0,	// (0x000931fa) ncim_query_content_pane_t4

0x8008,	// (0x00093222) ncim_query_content_pane_t5_ParamLimits

0x8008,	// (0x00093222) ncim_query_content_pane_t5

0xe0d5,	// (0x000992ef) ncim_query_content_pane_t6_ParamLimits

0xe0d5,	// (0x000992ef) ncim_query_content_pane_t6

0xfbfb,	// (0x0009ae15) ncim_query_content_pane_t_ParamLimits

0xe0fd,	// (0x00099317) ncim_query_list_pane_ParamLimits

0xe10f,	// (0x00099329) ncim_query_popup_pane_ParamLimits

0xe123,	// (0x0009933d) wait_bar_pane_cp04

0x973f,	// (0x00094959) input_focus_pane_cp011

0xe12b,	// (0x00099345) ncim_query_popup_pane_t1

0xe139,	// (0x00099353) ncim_list_query_list_pane_ParamLimits

0xe139,	// (0x00099353) ncim_list_query_list_pane

0x973f,	// (0x00094959) bg_button_pane_cp027

0xe14c,	// (0x00099366) ncim_query_button_pane_g1

0x973f,	// (0x00094959) list_highlight_pane_cp012

0xe156,	// (0x00099370) ncim_list_query_list_pane_g1

0xe15e,	// (0x00099378) ncim_list_query_list_pane_t1

0xa211,	// (0x0009542b) cam4_indicators_pane_g3_ParamLimits

0xa211,	// (0x0009542b) cam4_indicators_pane_g3

0xa28f,	// (0x000954a9) vid4_indicators_pane_g5_ParamLimits

0xa28f,	// (0x000954a9) vid4_indicators_pane_g5

0xa329,	// (0x00095543) vid4_progress_pane_g5_ParamLimits

0xa329,	// (0x00095543) vid4_progress_pane_g5

0x7e9a,	// (0x000930b4) main_ncimui_pane_g1

0x7f00,	// (0x0009311a) ncimui_group_query_pane_ParamLimits

0x7f00,	// (0x0009311a) ncimui_group_query_pane

0x7f48,	// (0x00093162) ncimui_list_pane_ParamLimits

0x7f48,	// (0x00093162) ncimui_list_pane

0x7f6f,	// (0x00093189) ncimui_text_pane_ParamLimits

0x7f6f,	// (0x00093189) ncimui_text_pane

0x8030,	// (0x0009324a) ncimui_text_pane_t1_ParamLimits

0x8030,	// (0x0009324a) ncimui_text_pane_t1

0xe16c,	// (0x00099386) ncimui_list_single_graphic_pane_ParamLimits

0xe16c,	// (0x00099386) ncimui_list_single_graphic_pane

0x804e,	// (0x00093268) ncimui_query_pane_ParamLimits

0x804e,	// (0x00093268) ncimui_query_pane

0x973f,	// (0x00094959) list_highlight_pane_cp013

0xe17c,	// (0x00099396) ncim_list_query_list_pane_t1_copy1

0xe156,	// (0x00099370) ncim_list_single_graphic_pane_g1

0xe18a,	// (0x000993a4) ncim_query_button_pane_cp01

0xe196,	// (0x000993b0) ncim_query_entry_pane_ParamLimits

0xe196,	// (0x000993b0) ncim_query_entry_pane

0xe1a9,	// (0x000993c3) ncimui_query_pane_g1

0xe1b5,	// (0x000993cf) ncimui_query_pane_t1_ParamLimits

0xe1b5,	// (0x000993cf) ncimui_query_pane_t1

0xa4a9,	// (0x000956c3) input_focus_pane_cp012

0xe1ce,	// (0x000993e8) ncim_query_entry_pane_t1

0xa766,	// (0x00095980) main_im_pane_ParamLimits

0xa4a9,	// (0x000956c3) main_mobtv_pane_ParamLimits

0xa4a9,	// (0x000956c3) main_mobtv_pane

0x7d14,	// (0x00092f2e) main_cset6_slider_pane_g18_ParamLimits

0x7d14,	// (0x00092f2e) main_cset6_slider_pane_g18

0x7d20,	// (0x00092f3a) main_cset6_slider_pane_g19_ParamLimits

0x7d20,	// (0x00092f3a) main_cset6_slider_pane_g19

0xb1a7,	// (0x000963c1) bg_main_mobtv_pane_ParamLimits

0xb1a7,	// (0x000963c1) bg_main_mobtv_pane

0x8061,	// (0x0009327b) main_mobtv_info_pane

0x806a,	// (0x00093284) main_mobtv_loading_pane_ParamLimits

0x806a,	// (0x00093284) main_mobtv_loading_pane

0xe1e0,	// (0x000993fa) main_mobtv_pg_channel_list_pane

0xe1ea,	// (0x00099404) main_mobtv_pg_hdr_pane

0x8077,	// (0x00093291) main_mobtv_programe_curr_pane_ParamLimits

0x8077,	// (0x00093291) main_mobtv_programe_curr_pane

0x8084,	// (0x0009329e) main_mobtv_programe_next_pane_ParamLimits

0x8084,	// (0x0009329e) main_mobtv_programe_next_pane

0xe1f3,	// (0x0009940d) popup_mobtv_noti_window

0xcc28,	// (0x00097e42) main_tv_pg_hdr_pane_g1

0xe1fb,	// (0x00099415) main_tv_pg_hdr_pane_g2

0xe203,	// (0x0009941d) main_tv_pg_hdr_pane_g3

0xe20b,	// (0x00099425) main_tv_pg_hdr_pane_g4

0xe213,	// (0x0009942d) main_tv_pg_hdr_pane_g5

0xe21d,	// (0x00099437) main_tv_pg_hdr_pane_g6

0xe227,	// (0x00099441) main_tv_pg_hdr_pane_g7

0xe231,	// (0x0009944b) main_tv_pg_hdr_pane_g8

0xe23b,	// (0x00099455) main_tv_pg_hdr_pane_g9

0xe245,	// (0x0009945f) main_tv_pg_hdr_pane_g10

0xe24f,	// (0x00099469) main_tv_pg_hdr_pane_g11

0x000a,

0xfc08,	// (0x0009ae22) main_tv_pg_hdr_pane_g

0xe259,	// (0x00099473) main_tv_pg_hdr_pane_t1

0xe267,	// (0x00099481) main_tv_pg_hdr_pane_t2

0xe275,	// (0x0009948f) main_tv_pg_hdr_pane_t3

0xe285,	// (0x0009949f) main_tv_pg_hdr_pane_t4

0xe295,	// (0x000994af) main_tv_pg_hdr_pane_t5

0x0004,

0xfc1f,	// (0x0009ae39) main_tv_pg_hdr_pane_t

0xe2a5,	// (0x000994bf) single_mobtv_pg_channel_pane_ParamLimits

0xe2a5,	// (0x000994bf) single_mobtv_pg_channel_pane

0xe2b7,	// (0x000994d1) single_mobtv_pg_channel_table_pane

0xe2c0,	// (0x000994da) single_mobtv_pg_channel_thumb_pane

0xe2c9,	// (0x000994e3) single_tv_pg_channel_pane_g1

0xe2d2,	// (0x000994ec) single_tv_pg_channel_pane_g2

0x0001,

0xfc2a,	// (0x0009ae44) single_tv_pg_channel_pane_g

0xce88,	// (0x000980a2) bg_single_mobtv_pg_channel_thumb_pane_ParamLimits

0xce88,	// (0x000980a2) bg_single_mobtv_pg_channel_thumb_pane

0xe2db,	// (0x000994f5) single_mobtv_pg_channel_thumb_pane_g1_ParamLimits

0xe2db,	// (0x000994f5) single_mobtv_pg_channel_thumb_pane_g1

0xe2e9,	// (0x00099503) single_mobtv_pg_channel_thumb_pane_g2_ParamLimits

0xe2e9,	// (0x00099503) single_mobtv_pg_channel_thumb_pane_g2

0xe2f5,	// (0x0009950f) single_mobtv_pg_channel_thumb_pane_g3_ParamLimits

0xe2f5,	// (0x0009950f) single_mobtv_pg_channel_thumb_pane_g3

0x0002,

0xfc2f,	// (0x0009ae49) single_mobtv_pg_channel_thumb_pane_g_ParamLimits

0xfc2f,	// (0x0009ae49) single_mobtv_pg_channel_thumb_pane_g

0xe301,	// (0x0009951b) single_mobtv_pg_channel_thumb_pane_t1

0xe30f,	// (0x00099529) single_mobtv_pg_channel_thumb_pane_t2

0x0001,

0xfc36,	// (0x0009ae50) single_mobtv_pg_channel_thumb_pane_t

0xcc28,	// (0x00097e42) bg_single_mobtv_pg_channel_table_pane_g1

0xcc28,	// (0x00097e42) bg_single_mobtv_pg_channel_table_pane_g2

0x0001,

0xf6e1,	// (0x0009a8fb) bg_single_mobtv_pg_channel_table_pane_g

0xe31d,	// (0x00099537) single_mobtv_pg_channel_table_pane_t1

0xe32b,	// (0x00099545) single_mobtv_pg_channel_table_pane_t2

0x0001,

0xfc3b,	// (0x0009ae55) single_mobtv_pg_channel_table_pane_t

0x8099,	// (0x000932b3) main_mobtv_info_pane_g1_ParamLimits

0x8099,	// (0x000932b3) main_mobtv_info_pane_g1

0x80b7,	// (0x000932d1) main_mobtv_info_pane_t1_ParamLimits

0x80b7,	// (0x000932d1) main_mobtv_info_pane_t1

0x812f,	// (0x00093349) main_mobtv_info_pane_t2_ParamLimits

0x812f,	// (0x00093349) main_mobtv_info_pane_t2

0x0002,

0xfc45,	// (0x0009ae5f) main_mobtv_info_pane_t_ParamLimits

0xfc45,	// (0x0009ae5f) main_mobtv_info_pane_t

0x81be,	// (0x000933d8) wait_bar_pane_cp05

0x81d0,	// (0x000933ea) main_mobtv_loading_pane_g1_ParamLimits

0x81d0,	// (0x000933ea) main_mobtv_loading_pane_g1

0x81e3,	// (0x000933fd) main_mobtv_loading_pane_g2_ParamLimits

0x81e3,	// (0x000933fd) main_mobtv_loading_pane_g2

0x81ef,	// (0x00093409) main_mobtv_loading_pane_g3_ParamLimits

0x81ef,	// (0x00093409) main_mobtv_loading_pane_g3

0x0002,

0xfc4c,	// (0x0009ae66) main_mobtv_loading_pane_g_ParamLimits

0xfc4c,	// (0x0009ae66) main_mobtv_loading_pane_g

0xe339,	// (0x00099553) main_mobtv_loading_pane_t1_ParamLimits

0xe339,	// (0x00099553) main_mobtv_loading_pane_t1

0xe351,	// (0x0009956b) main_mobtv_loading_pane_t2_ParamLimits

0xe351,	// (0x0009956b) main_mobtv_loading_pane_t2

0x0001,

0xfc53,	// (0x0009ae6d) main_mobtv_loading_pane_t_ParamLimits

0xfc53,	// (0x0009ae6d) main_mobtv_loading_pane_t

0x8202,	// (0x0009341c) wait_bar_pane_cp06_ParamLimits

0x8202,	// (0x0009341c) wait_bar_pane_cp06

0xe375,	// (0x0009958f) main_mobtv_programe_curr_pane_t1

0xe383,	// (0x0009959d) main_mobtv_programe_curr_pane_t2

0x0001,

0xfc58,	// (0x0009ae72) main_mobtv_programe_curr_pane_t

0xe391,	// (0x000995ab) main_mobtv_programe_next_pane_t1

0xe39f,	// (0x000995b9) main_mobtv_programe_next_pane_t2

0xe3ad,	// (0x000995c7) main_mobtv_programe_next_pane_t3

0x0002,

0xfc5d,	// (0x0009ae77) main_mobtv_programe_next_pane_t

0x973f,	// (0x00094959) bg_popup_mobtv_noti_window_pane

0xe3bb,	// (0x000995d5) popup_mobtv_noti_window_g1

0xe3c3,	// (0x000995dd) popup_mobtv_noti_window_t1

0xe3d1,	// (0x000995eb) popup_mobtv_noti_window_t2

0x0001,

0xfc64,	// (0x0009ae7e) popup_mobtv_noti_window_t

0xcc28,	// (0x00097e42) bg_popup_mobtv_noti_window_pane_g1

0x973f,	// (0x00094959) sc_clock_pane

0x973f,	// (0x00094959) main_fs_bigclock_pane

0x7960,	// (0x00092b7a) blid2_tripm_pane_t4_ParamLimits

0x7960,	// (0x00092b7a) blid2_tripm_pane_t4

0x8211,	// (0x0009342b) sc_clock_pane_g1_ParamLimits

0x8211,	// (0x0009342b) sc_clock_pane_g1

0x8223,	// (0x0009343d) sc_clock_pane_t1_ParamLimits

0x8223,	// (0x0009343d) sc_clock_pane_t1

0x8245,	// (0x0009345f) sc_clock_pane_t2_ParamLimits

0x8245,	// (0x0009345f) sc_clock_pane_t2

0x825d,	// (0x00093477) sc_clock_pane_t3_ParamLimits

0x825d,	// (0x00093477) sc_clock_pane_t3

0x0004,

0xfc69,	// (0x0009ae83) sc_clock_pane_t_ParamLimits

0xfc69,	// (0x0009ae83) sc_clock_pane_t

0x8d76,	// (0x00093f90) main_fs_bigclock_indicator_pane_ParamLimits

0x8d76,	// (0x00093f90) main_fs_bigclock_indicator_pane

0xce58,	// (0x00098072) main_fs_bigclock_pane_g1_ParamLimits

0xce58,	// (0x00098072) main_fs_bigclock_pane_g1

0x8d82,	// (0x00093f9c) main_fs_bigclock_pane_t1_ParamLimits

0x8d82,	// (0x00093f9c) main_fs_bigclock_pane_t1

0x8d94,	// (0x00093fae) main_fs_bigclock_pane_t2_ParamLimits

0x8d94,	// (0x00093fae) main_fs_bigclock_pane_t2

0x8da6,	// (0x00093fc0) main_fs_bigclock_pane_t3_ParamLimits

0x8da6,	// (0x00093fc0) main_fs_bigclock_pane_t3

0x0002,

0xfe73,	// (0x0009b08d) main_fs_bigclock_pane_t_ParamLimits

0xfe73,	// (0x0009b08d) main_fs_bigclock_pane_t

0xec65,	// (0x00099e7f) main_fs_bigclock_indicator_pane_g1

0xe0a5,	// (0x000992bf) ncim_query_content_pane_g2_ParamLimits

0xe0a5,	// (0x000992bf) ncim_query_content_pane_g2

0x0001,

0xfbf6,	// (0x0009ae10) ncim_query_content_pane_g_ParamLimits

0xfbf6,	// (0x0009ae10) ncim_query_content_pane_g

0x8276,	// (0x00093490) sc_clock_pane_t4_ParamLimits

0x8276,	// (0x00093490) sc_clock_pane_t4

0xa4a9,	// (0x000956c3) main_radioblah_pane

0xd5c2,	// (0x000987dc) cell_call4_button_pane_t1_copy1_ParamLimits

0xd5c2,	// (0x000987dc) cell_call4_button_pane_t1_copy1

0x7eb2,	// (0x000930cc) main_ncimui_pane_t1_ParamLimits

0x7eb2,	// (0x000930cc) main_ncimui_pane_t1

0x7ecc,	// (0x000930e6) main_ncimui_pane_t2_ParamLimits

0x7ecc,	// (0x000930e6) main_ncimui_pane_t2

0x0002,

0xfbef,	// (0x0009ae09) main_ncimui_pane_t_ParamLimits

0xfbef,	// (0x0009ae09) main_ncimui_pane_t

0xe50c,	// (0x00099726) main_radioblah_anim_pane_ParamLimits

0xe50c,	// (0x00099726) main_radioblah_anim_pane

0xe51d,	// (0x00099737) main_radioblah_info_pane_ParamLimits

0xe51d,	// (0x00099737) main_radioblah_info_pane

0xe531,	// (0x0009974b) main_radioblah_pane_t1_ParamLimits

0xe531,	// (0x0009974b) main_radioblah_pane_t1

0xe54d,	// (0x00099767) main_radioblah_pane_t2_ParamLimits

0xe54d,	// (0x00099767) main_radioblah_pane_t2

0x0003,

0xfc8a,	// (0x0009aea4) main_radioblah_pane_t_ParamLimits

0xfc8a,	// (0x0009aea4) main_radioblah_pane_t

0x832c,	// (0x00093546) main_radioblah_rocker_ctrl_pane_ParamLimits

0x832c,	// (0x00093546) main_radioblah_rocker_ctrl_pane

0xe595,	// (0x000997af) main_radioblah_info_pane_t1_ParamLimits

0xe595,	// (0x000997af) main_radioblah_info_pane_t1

0x8384,	// (0x0009359e) main_radioblah_info_pane_t2_ParamLimits

0x8384,	// (0x0009359e) main_radioblah_info_pane_t2

0x0003,

0xfc93,	// (0x0009aead) main_radioblah_info_pane_t_ParamLimits

0xfc93,	// (0x0009aead) main_radioblah_info_pane_t

0xcc28,	// (0x00097e42) main_radioblah_rocker_ctrl_pane_g1

0x8434,	// (0x0009364e) main_radioblah_rocker_ctrl_pane_g2

0x843c,	// (0x00093656) main_radioblah_rocker_ctrl_pane_g3

0x8444,	// (0x0009365e) main_radioblah_rocker_ctrl_pane_g4

0x844c,	// (0x00093666) main_radioblah_rocker_ctrl_pane_g5

0x8454,	// (0x0009366e) main_radioblah_rocker_ctrl_pane_g6

0x0005,

0xfc9c,	// (0x0009aeb6) main_radioblah_rocker_ctrl_pane_g

0x7e68,	// (0x00093082) main_cset_text2_pane_t1_copy1_ParamLimits

0xa1e1,	// (0x000953fb) cam4_image_uncrop_qvga_pane

0xa23a,	// (0x00095454) vid4_image_uncrop_qcif_pane

0xa39a,	// (0x000955b4) cam6_image_uncrop_qvga_pane_ParamLimits

0xa39a,	// (0x000955b4) cam6_image_uncrop_qvga_pane

0xddac,	// (0x00098fc6) vid6_image_uncrop_qcif_pane_ParamLimits

0xddac,	// (0x00098fc6) vid6_image_uncrop_qcif_pane

0x973f,	// (0x00094959) bg_popup_preview_window_pane_cp03

0xe057,	// (0x00099271) list_cset_text2_pane

0xe05f,	// (0x00099279) main_cset6_text2_pane_g1

0xe067,	// (0x00099281) main_cset6_text2_pane_t1

0x845c,	// (0x00093676) list_cset_text2_pane_t1_ParamLimits

0x845c,	// (0x00093676) list_cset_text2_pane_t1

0xa4a9,	// (0x000956c3) main_radioblah_pane_ParamLimits

0x81aa,	// (0x000933c4) main_mobtv_info_pane_t3_ParamLimits

0x81aa,	// (0x000933c4) main_mobtv_info_pane_t3

0x831a,	// (0x00093534) main_radioblah_pane_g1

0x8354,	// (0x0009356e) main_radioblah_info_pane_g1

0x83d9,	// (0x000935f3) main_radioblah_info_pane_t3_ParamLimits

0x83d9,	// (0x000935f3) main_radioblah_info_pane_t3

0x3003,	// (0x0008e21d) highlight_cell_cale_month_pane_ParamLimits

0x3003,	// (0x0008e21d) highlight_cell_cale_month_pane

0x973f,	// (0x00094959) main_phob_fisheye_pane

0xcf64,	// (0x0009817e) scroll_pane_cp0031_ParamLimits

0xcf64,	// (0x0009817e) scroll_pane_cp0031

0xdeba,	// (0x000990d4) wait_bar_pane_cp08_ParamLimits

0x7c92,	// (0x00092eac) cset_list_set_pane_copy1_ParamLimits

0xe5cf,	// (0x000997e9) highlight_cell_cale_month_pane_g1

0x8477,	// (0x00093691) highlight_cell_cale_month_pane_t1

0xdb4f,	// (0x00098d69) list_gen_pane_cp01

0xd79d,	// (0x000989b7) scroll_pane_01

0x0746,	// (0x0008b960) list_single_double_fisheye_pane

0x074f,	// (0x0008b969) list_double_fisheye_pane_g1_ParamLimits

0x074f,	// (0x0008b969) list_double_fisheye_pane_g1

0x075b,	// (0x0008b975) list_double_fisheye_pane_g2_ParamLimits

0x075b,	// (0x0008b975) list_double_fisheye_pane_g2

0x076f,	// (0x0008b989) list_double_fisheye_pane_g3_ParamLimits

0x076f,	// (0x0008b989) list_double_fisheye_pane_g3

0x0004,

0xfca9,	// (0x0009aec3) list_double_fisheye_pane_g_ParamLimits

0xfca9,	// (0x0009aec3) list_double_fisheye_pane_g

0x0798,	// (0x0008b9b2) list_double_fisheye_pane_t1_ParamLimits

0x0798,	// (0x0008b9b2) list_double_fisheye_pane_t1

0x07b3,	// (0x0008b9cd) list_double_fisheye_pane_t2_ParamLimits

0x07b3,	// (0x0008b9cd) list_double_fisheye_pane_t2

0x0001,

0xfcb4,	// (0x0009aece) list_double_fisheye_pane_t_ParamLimits

0xfcb4,	// (0x0009aece) list_double_fisheye_pane_t

0x973f,	// (0x00094959) main_call5_pane

0x82a1,	// (0x000934bb) sc_swipe_pane_ParamLimits

0x82a1,	// (0x000934bb) sc_swipe_pane

0x8498,	// (0x000936b2) call5_image_pane_ParamLimits

0x8498,	// (0x000936b2) call5_image_pane

0x84b5,	// (0x000936cf) call5_swipe_1_pane_ParamLimits

0x84b5,	// (0x000936cf) call5_swipe_1_pane

0x84c8,	// (0x000936e2) call5_swipe_2_pane_ParamLimits

0x84c8,	// (0x000936e2) call5_swipe_2_pane

0x84f3,	// (0x0009370d) popup_call5_audio_first_window_ParamLimits

0x84f3,	// (0x0009370d) popup_call5_audio_first_window

0xce88,	// (0x000980a2) call5_swipe_1_pane_g1_ParamLimits

0xce88,	// (0x000980a2) call5_swipe_1_pane_g1

0xe5d7,	// (0x000997f1) call5_swipe_1_pane_g2_ParamLimits

0xe5d7,	// (0x000997f1) call5_swipe_1_pane_g2

0x0001,

0xfcb9,	// (0x0009aed3) call5_swipe_1_pane_g_ParamLimits

0xfcb9,	// (0x0009aed3) call5_swipe_1_pane_g

0xe5e3,	// (0x000997fd) call5_swipe_1_pane_t1_ParamLimits

0xe5e3,	// (0x000997fd) call5_swipe_1_pane_t1

0xce88,	// (0x000980a2) call5_swipe_2_pane_g1_ParamLimits

0xce88,	// (0x000980a2) call5_swipe_2_pane_g1

0xe5f8,	// (0x00099812) call5_swipe_2_pane_g2_ParamLimits

0xe5f8,	// (0x00099812) call5_swipe_2_pane_g2

0x0001,

0xfcbe,	// (0x0009aed8) call5_swipe_2_pane_g_ParamLimits

0xfcbe,	// (0x0009aed8) call5_swipe_2_pane_g

0xe604,	// (0x0009981e) call5_swipe_2_pane_t1_ParamLimits

0xe604,	// (0x0009981e) call5_swipe_2_pane_t1

0xe619,	// (0x00099833) sc_swipe_pane_g1_ParamLimits

0xe619,	// (0x00099833) sc_swipe_pane_g1

0xe626,	// (0x00099840) sc_swipe_pane_g2_ParamLimits

0xe626,	// (0x00099840) sc_swipe_pane_g2

0x0001,

0xfcc3,	// (0x0009aedd) sc_swipe_pane_g_ParamLimits

0xfcc3,	// (0x0009aedd) sc_swipe_pane_g

0xe632,	// (0x0009984c) sc_swipe_pane_t1_ParamLimits

0xe632,	// (0x0009984c) sc_swipe_pane_t1

0x973f,	// (0x00094959) main_cmail_launcher_pane

0x8504,	// (0x0009371e) aid_size_cell_cmail_l_ParamLimits

0x8504,	// (0x0009371e) aid_size_cell_cmail_l

0x851e,	// (0x00093738) grid_cmail_l_pane_ParamLimits

0x851e,	// (0x00093738) grid_cmail_l_pane

0x8539,	// (0x00093753) cell_cmail_l_pane_ParamLimits

0x8539,	// (0x00093753) cell_cmail_l_pane

0x855f,	// (0x00093779) cell_cmail_l_pane_g1_ParamLimits

0x855f,	// (0x00093779) cell_cmail_l_pane_g1

0x8570,	// (0x0009378a) cell_cmail_l_pane_t1_ParamLimits

0x8570,	// (0x0009378a) cell_cmail_l_pane_t1

0xe647,	// (0x00099861) cell_cmail_l_pane_t2_ParamLimits

0xe647,	// (0x00099861) cell_cmail_l_pane_t2

0x0001,

0xfcc8,	// (0x0009aee2) cell_cmail_l_pane_t_ParamLimits

0xfcc8,	// (0x0009aee2) cell_cmail_l_pane_t

0xa4a9,	// (0x000956c3) grid_highlight_pane_cp018_ParamLimits

0xa4a9,	// (0x000956c3) grid_highlight_pane_cp018

0x104d,	// (0x0008c267) main2_pane_ParamLimits

0x104d,	// (0x0008c267) main2_pane

0xa811,	// (0x00095a2b) popup_sp_fs_action_menu_bg_pane_g1

0xa819,	// (0x00095a33) popup_sp_fs_action_menu_bg_pane_g2

0xa821,	// (0x00095a3b) popup_sp_fs_action_menu_bg_pane_g3

0xa829,	// (0x00095a43) popup_sp_fs_action_menu_bg_pane_g4

0xa831,	// (0x00095a4b) popup_sp_fs_action_menu_bg_pane_g5

0xa839,	// (0x00095a53) popup_sp_fs_action_menu_bg_pane_g6

0xa841,	// (0x00095a5b) popup_sp_fs_action_menu_bg_pane_g7

0xa849,	// (0x00095a63) popup_sp_fs_action_menu_bg_pane_g8

0xa851,	// (0x00095a6b) popup_sp_fs_action_menu_bg_pane_g9

0xa859,	// (0x00095a73) popup_sp_fs_action_menu_bg_pane_g10

0xa859,	// (0x00095a73) popup_sp_fs_action_menu_bg_pane_g11

0x000a,

0xf18d,	// (0x0009a3a7) popup_sp_fs_action_menu_bg_pane_g

0x00cc,	// (0x0008b2e6) list_medium_line_x2_t3_g3_g1_ParamLimits

0x00cc,	// (0x0008b2e6) list_medium_line_x2_t3_g3_g1

0x00d8,	// (0x0008b2f2) list_medium_line_x2_t3_g3_g2_ParamLimits

0x00d8,	// (0x0008b2f2) list_medium_line_x2_t3_g3_g2

0x00e4,	// (0x0008b2fe) list_medium_line_x2_t3_g3_g3_ParamLimits

0x00e4,	// (0x0008b2fe) list_medium_line_x2_t3_g3_g3

0x0002,

0xf23d,	// (0x0009a457) list_medium_line_x2_t3_g3_g_ParamLimits

0xf23d,	// (0x0009a457) list_medium_line_x2_t3_g3_g

0x00f0,	// (0x0008b30a) list_medium_line_x2_t3_g3_t1_ParamLimits

0x00f0,	// (0x0008b30a) list_medium_line_x2_t3_g3_t1

0x0105,	// (0x0008b31f) list_medium_line_x2_t3_g3_t2_ParamLimits

0x0105,	// (0x0008b31f) list_medium_line_x2_t3_g3_t2

0x0119,	// (0x0008b333) list_medium_line_x2_t3_g3_t3_ParamLimits

0x0119,	// (0x0008b333) list_medium_line_x2_t3_g3_t3

0x0002,

0xf244,	// (0x0009a45e) list_medium_line_x2_t3_g3_t_ParamLimits

0xf244,	// (0x0009a45e) list_medium_line_x2_t3_g3_t

0x00cc,	// (0x0008b2e6) list_medium_line_x2_t3_g2_g1_ParamLimits

0x00cc,	// (0x0008b2e6) list_medium_line_x2_t3_g2_g1

0x00e4,	// (0x0008b2fe) list_medium_line_x2_t3_g2_g2_ParamLimits

0x00e4,	// (0x0008b2fe) list_medium_line_x2_t3_g2_g2

0x0001,

0xf24b,	// (0x0009a465) list_medium_line_x2_t3_g2_g_ParamLimits

0xf24b,	// (0x0009a465) list_medium_line_x2_t3_g2_g

0x012e,	// (0x0008b348) list_medium_line_x2_t3_g2_t1_ParamLimits

0x012e,	// (0x0008b348) list_medium_line_x2_t3_g2_t1

0x0144,	// (0x0008b35e) list_medium_line_x2_t3_g2_t2_ParamLimits

0x0144,	// (0x0008b35e) list_medium_line_x2_t3_g2_t2

0x0156,	// (0x0008b370) list_medium_line_x2_t3_g2_t3_ParamLimits

0x0156,	// (0x0008b370) list_medium_line_x2_t3_g2_t3

0x0002,

0xf250,	// (0x0009a46a) list_medium_line_x2_t3_g2_t_ParamLimits

0xf250,	// (0x0009a46a) list_medium_line_x2_t3_g2_t

0x00cc,	// (0x0008b2e6) list_medium_line_x2_t4_g4_g1_ParamLimits

0x00cc,	// (0x0008b2e6) list_medium_line_x2_t4_g4_g1

0x0173,	// (0x0008b38d) list_medium_line_x2_t4_g4_g2_ParamLimits

0x0173,	// (0x0008b38d) list_medium_line_x2_t4_g4_g2

0x00d8,	// (0x0008b2f2) list_medium_line_x2_t4_g4_g3_ParamLimits

0x00d8,	// (0x0008b2f2) list_medium_line_x2_t4_g4_g3

0x017f,	// (0x0008b399) list_medium_line_x2_t4_g4_g4_ParamLimits

0x017f,	// (0x0008b399) list_medium_line_x2_t4_g4_g4

0x0003,

0xf257,	// (0x0009a471) list_medium_line_x2_t4_g4_g_ParamLimits

0xf257,	// (0x0009a471) list_medium_line_x2_t4_g4_g

0x018b,	// (0x0008b3a5) list_medium_line_x2_t4_g4_t1_ParamLimits

0x018b,	// (0x0008b3a5) list_medium_line_x2_t4_g4_t1

0x01a5,	// (0x0008b3bf) list_medium_line_x2_t4_g4_t2_ParamLimits

0x01a5,	// (0x0008b3bf) list_medium_line_x2_t4_g4_t2

0x01ba,	// (0x0008b3d4) list_medium_line_x2_t4_g4_t3_ParamLimits

0x01ba,	// (0x0008b3d4) list_medium_line_x2_t4_g4_t3

0x01cf,	// (0x0008b3e9) list_medium_line_x2_t4_g4_t4_ParamLimits

0x01cf,	// (0x0008b3e9) list_medium_line_x2_t4_g4_t4

0x0003,

0xf260,	// (0x0009a47a) list_medium_line_x2_t4_g4_t_ParamLimits

0xf260,	// (0x0009a47a) list_medium_line_x2_t4_g4_t

0x00cc,	// (0x0008b2e6) list_medium_line_x2_t2_g4_g1_ParamLimits

0x00cc,	// (0x0008b2e6) list_medium_line_x2_t2_g4_g1

0x0173,	// (0x0008b38d) list_medium_line_x2_t2_g4_g2_ParamLimits

0x0173,	// (0x0008b38d) list_medium_line_x2_t2_g4_g2

0x00d8,	// (0x0008b2f2) list_medium_line_x2_t2_g4_g3_ParamLimits

0x00d8,	// (0x0008b2f2) list_medium_line_x2_t2_g4_g3

0x00e4,	// (0x0008b2fe) list_medium_line_x2_t2_g4_g4_ParamLimits

0x00e4,	// (0x0008b2fe) list_medium_line_x2_t2_g4_g4

0x0003,

0xf2c7,	// (0x0009a4e1) list_medium_line_x2_t2_g4_g_ParamLimits

0xf2c7,	// (0x0009a4e1) list_medium_line_x2_t2_g4_g

0x01e1,	// (0x0008b3fb) list_medium_line_x2_t2_g4_t1_ParamLimits

0x01e1,	// (0x0008b3fb) list_medium_line_x2_t2_g4_t1

0x0119,	// (0x0008b333) list_medium_line_x2_t2_g4_t2_ParamLimits

0x0119,	// (0x0008b333) list_medium_line_x2_t2_g4_t2

0x0001,

0xf2d0,	// (0x0009a4ea) list_medium_line_x2_t2_g4_t_ParamLimits

0xf2d0,	// (0x0009a4ea) list_medium_line_x2_t2_g4_t

0x00cc,	// (0x0008b2e6) list_medium_line_x2_t2_g3_g1_ParamLimits

0x00cc,	// (0x0008b2e6) list_medium_line_x2_t2_g3_g1

0x00d8,	// (0x0008b2f2) list_medium_line_x2_t2_g3_g2_ParamLimits

0x00d8,	// (0x0008b2f2) list_medium_line_x2_t2_g3_g2

0x00e4,	// (0x0008b2fe) list_medium_line_x2_t2_g3_g3_ParamLimits

0x00e4,	// (0x0008b2fe) list_medium_line_x2_t2_g3_g3

0x0002,

0xf23d,	// (0x0009a457) list_medium_line_x2_t2_g3_g_ParamLimits

0xf23d,	// (0x0009a457) list_medium_line_x2_t2_g3_g

0x01f6,	// (0x0008b410) list_medium_line_x2_t2_g3_t1_ParamLimits

0x01f6,	// (0x0008b410) list_medium_line_x2_t2_g3_t1

0x0119,	// (0x0008b333) list_medium_line_x2_t2_g3_t2_ParamLimits

0x0119,	// (0x0008b333) list_medium_line_x2_t2_g3_t2

0x0001,

0xf2d5,	// (0x0009a4ef) list_medium_line_x2_t2_g3_t_ParamLimits

0xf2d5,	// (0x0009a4ef) list_medium_line_x2_t2_g3_t

0x3153,	// (0x0008e36d) main_sp_fs_list_pane_ParamLimits

0x3153,	// (0x0008e36d) main_sp_fs_list_pane

0xbfa3,	// (0x000971bd) sp_fs_scroll_pane_ParamLimits

0xbfa3,	// (0x000971bd) sp_fs_scroll_pane

0x020b,	// (0x0008b425) list_medium_line_x2_t3_t1

0x021b,	// (0x0008b435) list_medium_line_x2_t3_t2

0x0229,	// (0x0008b443) list_medium_line_x2_t3_t3

0x0002,

0xf320,	// (0x0009a53a) list_medium_line_x2_t3_t

0x0237,	// (0x0008b451) list_medium_line_x3_t4_t1

0x0247,	// (0x0008b461) list_medium_line_x3_t4_t2

0x0255,	// (0x0008b46f) list_medium_line_x3_t4_t3

0x0229,	// (0x0008b443) list_medium_line_x3_t4_t4

0x0003,

0xf327,	// (0x0009a541) list_medium_line_x3_t4_t

0x0263,	// (0x0008b47d) list_medium_line_x4_t5_t1

0x0273,	// (0x0008b48d) list_medium_line_x4_t5_t2

0x0255,	// (0x0008b46f) list_medium_line_x4_t5_t3

0x0281,	// (0x0008b49b) list_medium_line_x4_t5_t4

0x0229,	// (0x0008b443) list_medium_line_x4_t5_t5

0x0004,

0xf330,	// (0x0009a54a) list_medium_line_x4_t5_t

0x00cc,	// (0x0008b2e6) list_medium_line_t4_g4_g1_ParamLimits

0x00cc,	// (0x0008b2e6) list_medium_line_t4_g4_g1

0x017f,	// (0x0008b399) list_medium_line_t4_g4_g2_ParamLimits

0x017f,	// (0x0008b399) list_medium_line_t4_g4_g2

0x028f,	// (0x0008b4a9) list_medium_line_t4_g4_g3_ParamLimits

0x028f,	// (0x0008b4a9) list_medium_line_t4_g4_g3

0x00e4,	// (0x0008b2fe) list_medium_line_t4_g4_g4_ParamLimits

0x00e4,	// (0x0008b2fe) list_medium_line_t4_g4_g4

0x0003,

0xf33b,	// (0x0009a555) list_medium_line_t4_g4_g_ParamLimits

0xf33b,	// (0x0009a555) list_medium_line_t4_g4_g

0x029b,	// (0x0008b4b5) list_medium_line_t4_g4_t1_ParamLimits

0x029b,	// (0x0008b4b5) list_medium_line_t4_g4_t1

0x02b0,	// (0x0008b4ca) list_medium_line_t4_g4_t2_ParamLimits

0x02b0,	// (0x0008b4ca) list_medium_line_t4_g4_t2

0x02c5,	// (0x0008b4df) list_medium_line_t4_g4_t3_ParamLimits

0x02c5,	// (0x0008b4df) list_medium_line_t4_g4_t3

0x0119,	// (0x0008b333) list_medium_line_t4_g4_t4_ParamLimits

0x0119,	// (0x0008b333) list_medium_line_t4_g4_t4

0x0003,

0xf344,	// (0x0009a55e) list_medium_line_t4_g4_t_ParamLimits

0xf344,	// (0x0009a55e) list_medium_line_t4_g4_t

0x31fe,	// (0x0008e418) chi_dic_find_pane_g1

0x41da,	// (0x0008f3f4) main_tport_pane

0x04c6,	// (0x0008b6e0) list_medium_line_plain_t1

0x04d4,	// (0x0008b6ee) list_medium_line_t2_g2_g1_ParamLimits

0x04d4,	// (0x0008b6ee) list_medium_line_t2_g2_g1

0x7153,	// (0x0009236d) list_medium_line_t2_g2_g2_ParamLimits

0x7153,	// (0x0009236d) list_medium_line_t2_g2_g2

0x0001,

0xfa00,	// (0x0009ac1a) list_medium_line_t2_g2_g_ParamLimits

0xfa00,	// (0x0009ac1a) list_medium_line_t2_g2_g

0x04e0,	// (0x0008b6fa) list_medium_line_t2_g2_t1_ParamLimits

0x04e0,	// (0x0008b6fa) list_medium_line_t2_g2_t1

0x04f7,	// (0x0008b711) list_medium_line_t2_g2_t2_ParamLimits

0x04f7,	// (0x0008b711) list_medium_line_t2_g2_t2

0x0001,

0xfa05,	// (0x0009ac1f) list_medium_line_t2_g2_t_ParamLimits

0xfa05,	// (0x0009ac1f) list_medium_line_t2_g2_t

0x7734,	// (0x0009294e) aid_sp_fs_list_icon_a_sm

0xa389,	// (0x000955a3) aid_sp_fs_list_icon_d

0xb19e,	// (0x000963b8) aid_sp_fs_text_primary

0xa391,	// (0x000955ab) aid_sp_fs_text_secondary

0x773c,	// (0x00092956) list_medium_line

0x773c,	// (0x00092956) list_medium_line_g2

0x773c,	// (0x00092956) list_medium_line_g3

0x773c,	// (0x00092956) list_medium_line_plain

0x773c,	// (0x00092956) list_medium_line_plain_t2

0x773c,	// (0x00092956) list_medium_line_plain_t3

0x773c,	// (0x00092956) list_medium_line_right_icon

0x773c,	// (0x00092956) list_medium_line_right_iconx2

0x773c,	// (0x00092956) list_medium_line_t2

0x773c,	// (0x00092956) list_medium_line_t2_g2

0x773c,	// (0x00092956) list_medium_line_t2_g3

0x773c,	// (0x00092956) list_medium_line_t2_right_icon

0x773c,	// (0x00092956) list_medium_line_t2_right_iconx2

0x773c,	// (0x00092956) list_medium_line_t3

0x773c,	// (0x00092956) list_medium_line_t3_g2

0x773c,	// (0x00092956) list_medium_line_t3_g3

0x773c,	// (0x00092956) list_medium_line_t3_right_iconx2

0x0624,	// (0x0008b83e) list_medium_line_t4_g4

0x062d,	// (0x0008b847) list_medium_line_x2

0x062d,	// (0x0008b847) list_medium_line_x2_t2_g2

0x062d,	// (0x0008b847) list_medium_line_x2_t2_g3

0x062d,	// (0x0008b847) list_medium_line_x2_t2_g4

0x062d,	// (0x0008b847) list_medium_line_x2_t3

0x062d,	// (0x0008b847) list_medium_line_x2_t3_g2

0x062d,	// (0x0008b847) list_medium_line_x2_t3_g3

0x062d,	// (0x0008b847) list_medium_line_x2_t3_g4

0x062d,	// (0x0008b847) list_medium_line_x2_t4_g2

0x062d,	// (0x0008b847) list_medium_line_x2_t4_g4

0x0636,	// (0x0008b850) list_medium_line_x3

0x0636,	// (0x0008b850) list_medium_line_x3_t4

0x0636,	// (0x0008b850) list_medium_line_x3_t4_g4

0x0624,	// (0x0008b83e) list_medium_line_x4_t4

0x0624,	// (0x0008b83e) list_medium_line_x4_t4_g7

0x0624,	// (0x0008b83e) list_medium_line_x4_t5

0x063f,	// (0x0008b859) list_single_fs_dyc_pane_ParamLimits

0x063f,	// (0x0008b859) list_single_fs_dyc_pane

0x00cc,	// (0x0008b2e6) list_medium_line_x4_t4_g7_g1_ParamLimits

0x00cc,	// (0x0008b2e6) list_medium_line_x4_t4_g7_g1

0x0677,	// (0x0008b891) list_medium_line_x4_t4_g7_g2_ParamLimits

0x0677,	// (0x0008b891) list_medium_line_x4_t4_g7_g2

0x0683,	// (0x0008b89d) list_medium_line_x4_t4_g7_g3_ParamLimits

0x0683,	// (0x0008b89d) list_medium_line_x4_t4_g7_g3

0x0692,	// (0x0008b8ac) list_medium_line_x4_t4_g7_g4_ParamLimits

0x0692,	// (0x0008b8ac) list_medium_line_x4_t4_g7_g4

0x069e,	// (0x0008b8b8) list_medium_line_x4_t4_g7_g5_ParamLimits

0x069e,	// (0x0008b8b8) list_medium_line_x4_t4_g7_g5

0x06ad,	// (0x0008b8c7) list_medium_line_x4_t4_g7_g6_ParamLimits

0x06ad,	// (0x0008b8c7) list_medium_line_x4_t4_g7_g6

0x06bc,	// (0x0008b8d6) list_medium_line_x4_t4_g7_g7_ParamLimits

0x06bc,	// (0x0008b8d6) list_medium_line_x4_t4_g7_g7

0x0006,

0xfbd0,	// (0x0009adea) list_medium_line_x4_t4_g7_g_ParamLimits

0xfbd0,	// (0x0009adea) list_medium_line_x4_t4_g7_g

0x06c8,	// (0x0008b8e2) list_medium_line_x4_t4_g7_t1_ParamLimits

0x06c8,	// (0x0008b8e2) list_medium_line_x4_t4_g7_t1

0x06dd,	// (0x0008b8f7) list_medium_line_x4_t4_g7_t2_ParamLimits

0x06dd,	// (0x0008b8f7) list_medium_line_x4_t4_g7_t2

0x06f2,	// (0x0008b90c) list_medium_line_x4_t4_g7_t3_ParamLimits

0x06f2,	// (0x0008b90c) list_medium_line_x4_t4_g7_t3

0x0707,	// (0x0008b921) list_medium_line_x4_t4_g7_t4_ParamLimits

0x0707,	// (0x0008b921) list_medium_line_x4_t4_g7_t4

0x0719,	// (0x0008b933) list_medium_line_x4_t4_g7_t5_ParamLimits

0x0719,	// (0x0008b933) list_medium_line_x4_t4_g7_t5

0x0004,

0xfbdf,	// (0x0009adf9) list_medium_line_x4_t4_g7_t_ParamLimits

0xfbdf,	// (0x0009adf9) list_medium_line_x4_t4_g7_t

0x072b,	// (0x0008b945) list_single_dyc_row_pane_ParamLimits

0x072b,	// (0x0008b945) list_single_dyc_row_pane

0x8485,	// (0x0009369f) call5_gesture_pane_ParamLimits

0x8485,	// (0x0009369f) call5_gesture_pane

0x84db,	// (0x000936f5) call5_windows_pane_ParamLimits

0x84db,	// (0x000936f5) call5_windows_pane

0x8586,	// (0x000937a0) call5_swipe_1_pane_cp_ParamLimits

0x8586,	// (0x000937a0) call5_swipe_1_pane_cp

0x8592,	// (0x000937ac) call5_swipe_2_pane_cp_ParamLimits

0x8592,	// (0x000937ac) call5_swipe_2_pane_cp

0xb402,	// (0x0009661c) call5_image_pane_cp

0x859e,	// (0x000937b8) popup_call5_audio_first_window_cp_ParamLimits

0x859e,	// (0x000937b8) popup_call5_audio_first_window_cp

0xe619,	// (0x00099833) call5_swipe_1_pane_g1_cp_ParamLimits

0xe619,	// (0x00099833) call5_swipe_1_pane_g1_cp

0xe659,	// (0x00099873) call5_swipe_1_pane_g2_cp

0xe632,	// (0x0009984c) call5_swipe_1_pane_t1_cp_ParamLimits

0xe632,	// (0x0009984c) call5_swipe_1_pane_t1_cp

0xe619,	// (0x00099833) call5_swipe_2_pane_g1_cp_ParamLimits

0xe619,	// (0x00099833) call5_swipe_2_pane_g1_cp

0xe661,	// (0x0009987b) call5_swipe_2_pane_g2_cp

0xe669,	// (0x00099883) call5_swipe_2_pane_t1_cp_ParamLimits

0xe669,	// (0x00099883) call5_swipe_2_pane_t1_cp

0xa4a9,	// (0x000956c3) main_sp_fs_email_pane

0xe67e,	// (0x00099898) main_sp_fs_listscroll_pane_te

0xb1b5,	// (0x000963cf) popup_sp_fs_action_menu_pane_ParamLimits

0xb1b5,	// (0x000963cf) popup_sp_fs_action_menu_pane

0xcc28,	// (0x00097e42) bg_sp_fs_ctrlbar_pane_g1

0xe687,	// (0x000998a1) bg_sp_fs_ctrlbar_ddmenu_pane_g1

0xe690,	// (0x000998aa) bg_sp_fs_ctrlbar_ddmenu_pane_g2

0xe699,	// (0x000998b3) bg_sp_fs_ctrlbar_ddmenu_pane_g3

0xcc28,	// (0x00097e42) bg_sp_fs_ctrlbar_ddmenu_pane_g4

0x0003,

0xfccd,	// (0x0009aee7) bg_sp_fs_ctrlbar_ddmenu_pane_g

0xca0b,	// (0x00097c25) bg_sp_fs_ctrlbar_ddmenu_pane_ParamLimits

0xca0b,	// (0x00097c25) bg_sp_fs_ctrlbar_ddmenu_pane

0xe6a2,	// (0x000998bc) main_sp_fs_ctrlbar_ddmenu_pane_g1_ParamLimits

0xe6a2,	// (0x000998bc) main_sp_fs_ctrlbar_ddmenu_pane_g1

0xe6ae,	// (0x000998c8) main_sp_fs_ctrlbar_ddmenu_pane_g2_ParamLimits

0xe6ae,	// (0x000998c8) main_sp_fs_ctrlbar_ddmenu_pane_g2

0x0001,

0xfcd6,	// (0x0009aef0) main_sp_fs_ctrlbar_ddmenu_pane_g_ParamLimits

0xfcd6,	// (0x0009aef0) main_sp_fs_ctrlbar_ddmenu_pane_g

0xe6ba,	// (0x000998d4) main_sp_fs_ctrlbar_ddmenu_pane_t1_ParamLimits

0xe6ba,	// (0x000998d4) main_sp_fs_ctrlbar_ddmenu_pane_t1

0x85ac,	// (0x000937c6) list_medium_line_t2_right_icon_g1

0x07d5,	// (0x0008b9ef) list_medium_line_t2_right_icon_t1

0x07e5,	// (0x0008b9ff) list_medium_line_t2_right_icon_t2

0x0001,

0xfcdb,	// (0x0009aef5) list_medium_line_t2_right_icon_t

0xc81e,	// (0x00097a38) bg_sp_fs_ctrlbar_pane_ParamLimits

0xc81e,	// (0x00097a38) bg_sp_fs_ctrlbar_pane

0x85fc,	// (0x00093816) main_sp_fs_ctrlbar_button_pane_cp01

0x8606,	// (0x00093820) main_sp_fs_ctrlbar_ddmenu_pane

0xe70c,	// (0x00099926) main_sp_fs_ctrlbar_pane_g1

0xe718,	// (0x00099932) main_sp_fs_ctrlbar_pane_g2

0x0001,

0xfce0,	// (0x0009aefa) main_sp_fs_ctrlbar_pane_g

0xe724,	// (0x0009993e) main_sp_fs_ctrlbar_pane_t1

0x8610,	// (0x0009382a) main_sp_fs_ctrlbar_pane

0x8634,	// (0x0009384e) main_sp_fs_listscroll_pane_te_cp01

0x07f7,	// (0x0008ba11) popup_sp_fs_action_menu_pane_cp01_ParamLimits

0x07f7,	// (0x0008ba11) popup_sp_fs_action_menu_pane_cp01

0xa4a9,	// (0x000956c3) bg_sp_fs_highlight_list_pane_cp01_ParamLimits

0xa4a9,	// (0x000956c3) bg_sp_fs_highlight_list_pane_cp01

0x8654,	// (0x0009386e) sp_fs_action_menu_list_gene_pane_g1_ParamLimits

0x8654,	// (0x0009386e) sp_fs_action_menu_list_gene_pane_g1

0xe754,	// (0x0009996e) sp_fs_action_menu_list_gene_pane_g2_ParamLimits

0xe754,	// (0x0009996e) sp_fs_action_menu_list_gene_pane_g2

0x0001,

0xfcea,	// (0x0009af04) sp_fs_action_menu_list_gene_pane_g_ParamLimits

0xfcea,	// (0x0009af04) sp_fs_action_menu_list_gene_pane_g

0x8663,	// (0x0009387d) sp_fs_action_menu_list_gene_pane_t1_ParamLimits

0x8663,	// (0x0009387d) sp_fs_action_menu_list_gene_pane_t1

0x867b,	// (0x00093895) sp_fs_action_menu_list_gene_pane_ParamLimits

0x867b,	// (0x00093895) sp_fs_action_menu_list_gene_pane

0xe761,	// (0x0009997b) popup_sp_fs_action_menu_bg_pane_ParamLimits

0xe761,	// (0x0009997b) popup_sp_fs_action_menu_bg_pane

0x869a,	// (0x000938b4) sp_fs_action_menu_list_pane_ParamLimits

0x869a,	// (0x000938b4) sp_fs_action_menu_list_pane

0xa3a8,	// (0x000955c2) sp_fs_scroll_pane_cp01_ParamLimits

0xa3a8,	// (0x000955c2) sp_fs_scroll_pane_cp01

0x0827,	// (0x0008ba41) list_medium_line_plain_t2_t1

0x0837,	// (0x0008ba51) list_medium_line_plain_t2_t2

0x0001,

0xfcef,	// (0x0009af09) list_medium_line_plain_t2_t

0x0847,	// (0x0008ba61) list_medium_line_plain_t3_t1

0x0857,	// (0x0008ba71) list_medium_line_plain_t3_t2

0x0865,	// (0x0008ba7f) list_medium_line_plain_t3_t3

0x0002,

0xfcf4,	// (0x0009af0e) list_medium_line_plain_t3_t

0x00cc,	// (0x0008b2e6) list_medium_line_x2_t2_g2_g1_ParamLimits

0x00cc,	// (0x0008b2e6) list_medium_line_x2_t2_g2_g1

0x00e4,	// (0x0008b2fe) list_medium_line_x2_t2_g2_g2_ParamLimits

0x00e4,	// (0x0008b2fe) list_medium_line_x2_t2_g2_g2

0x0001,

0xf24b,	// (0x0009a465) list_medium_line_x2_t2_g2_g_ParamLimits

0xf24b,	// (0x0009a465) list_medium_line_x2_t2_g2_g

0x029b,	// (0x0008b4b5) list_medium_line_x2_t2_g2_t1_ParamLimits

0x029b,	// (0x0008b4b5) list_medium_line_x2_t2_g2_t1

0x0119,	// (0x0008b333) list_medium_line_x2_t2_g2_t2_ParamLimits

0x0119,	// (0x0008b333) list_medium_line_x2_t2_g2_t2

0x0001,

0xfcfb,	// (0x0009af15) list_medium_line_x2_t2_g2_t_ParamLimits

0xfcfb,	// (0x0009af15) list_medium_line_x2_t2_g2_t

0x00cc,	// (0x0008b2e6) list_medium_line_x2_t4_g2_g1_ParamLimits

0x00cc,	// (0x0008b2e6) list_medium_line_x2_t4_g2_g1

0x0873,	// (0x0008ba8d) list_medium_line_x2_t4_g2_g2_ParamLimits

0x0873,	// (0x0008ba8d) list_medium_line_x2_t4_g2_g2

0x0001,

0xfd00,	// (0x0009af1a) list_medium_line_x2_t4_g2_g_ParamLimits

0xfd00,	// (0x0009af1a) list_medium_line_x2_t4_g2_g

0x0885,	// (0x0008ba9f) list_medium_line_x2_t4_g2_t1_ParamLimits

0x0885,	// (0x0008ba9f) list_medium_line_x2_t4_g2_t1

0x089f,	// (0x0008bab9) list_medium_line_x2_t4_g2_t2_ParamLimits

0x089f,	// (0x0008bab9) list_medium_line_x2_t4_g2_t2

0x08b4,	// (0x0008bace) list_medium_line_x2_t4_g2_t3_ParamLimits

0x08b4,	// (0x0008bace) list_medium_line_x2_t4_g2_t3

0x0119,	// (0x0008b333) list_medium_line_x2_t4_g2_t4_ParamLimits

0x0119,	// (0x0008b333) list_medium_line_x2_t4_g2_t4

0x0003,

0xfd05,	// (0x0009af1f) list_medium_line_x2_t4_g2_t_ParamLimits

0xfd05,	// (0x0009af1f) list_medium_line_x2_t4_g2_t

0x86ba,	// (0x000938d4) list_medium_line_t3_right_iconx2_g1

0x85ac,	// (0x000937c6) list_medium_line_t3_right_iconx2_g2

0x08c9,	// (0x0008bae3) list_medium_line_t3_right_iconx2_g3

0x0002,

0xfd0e,	// (0x0009af28) list_medium_line_t3_right_iconx2_g

0x08d3,	// (0x0008baed) list_medium_line_t3_right_iconx2_t1

0x08e3,	// (0x0008bafd) list_medium_line_t3_right_iconx2_t2

0x0001,

0xfd15,	// (0x0009af2f) list_medium_line_t3_right_iconx2_t

0x00cc,	// (0x0008b2e6) list_medium_line_x3_t4_g4_g1_ParamLimits

0x00cc,	// (0x0008b2e6) list_medium_line_x3_t4_g4_g1

0x00d8,	// (0x0008b2f2) list_medium_line_x3_t4_g4_g2_ParamLimits

0x00d8,	// (0x0008b2f2) list_medium_line_x3_t4_g4_g2

0x017f,	// (0x0008b399) list_medium_line_x3_t4_g4_g3_ParamLimits

0x017f,	// (0x0008b399) list_medium_line_x3_t4_g4_g3

0x08f1,	// (0x0008bb0b) list_medium_line_x3_t4_g4_g4_ParamLimits

0x08f1,	// (0x0008bb0b) list_medium_line_x3_t4_g4_g4

0x0003,

0xfd1a,	// (0x0009af34) list_medium_line_x3_t4_g4_g_ParamLimits

0xfd1a,	// (0x0009af34) list_medium_line_x3_t4_g4_g

0x08fd,	// (0x0008bb17) list_medium_line_x3_t4_g4_t1_ParamLimits

0x08fd,	// (0x0008bb17) list_medium_line_x3_t4_g4_t1

0x0914,	// (0x0008bb2e) list_medium_line_x3_t4_g4_t2_ParamLimits

0x0914,	// (0x0008bb2e) list_medium_line_x3_t4_g4_t2

0x02b0,	// (0x0008b4ca) list_medium_line_x3_t4_g4_t3_ParamLimits

0x02b0,	// (0x0008b4ca) list_medium_line_x3_t4_g4_t3

0x092f,	// (0x0008bb49) list_medium_line_x3_t4_g4_t4_ParamLimits

0x092f,	// (0x0008bb49) list_medium_line_x3_t4_g4_t4

0x0003,

0xfd23,	// (0x0009af3d) list_medium_line_x3_t4_g4_t_ParamLimits

0xfd23,	// (0x0009af3d) list_medium_line_x3_t4_g4_t

0x094c,	// (0x0008bb66) list_single_dyc_row_text_pane_t1_ParamLimits

0x094c,	// (0x0008bb66) list_single_dyc_row_text_pane_t1

0x0995,	// (0x0008bbaf) list_single_dyc_row_text_pane_t2_ParamLimits

0x0995,	// (0x0008bbaf) list_single_dyc_row_text_pane_t2

0x86c2,	// (0x000938dc) list_single_dyc_row_text_pane_t3_ParamLimits

0x86c2,	// (0x000938dc) list_single_dyc_row_text_pane_t3

0x0005,

0xfd2c,	// (0x0009af46) list_single_dyc_row_text_pane_t_ParamLimits

0xfd2c,	// (0x0009af46) list_single_dyc_row_text_pane_t

0x86e6,	// (0x00093900) list_single_dyc_row_pane_g1_ParamLimits

0x86e6,	// (0x00093900) list_single_dyc_row_pane_g1

0x86f2,	// (0x0009390c) list_single_dyc_row_pane_g2_ParamLimits

0x86f2,	// (0x0009390c) list_single_dyc_row_pane_g2

0x86fe,	// (0x00093918) list_single_dyc_row_pane_g3_ParamLimits

0x86fe,	// (0x00093918) list_single_dyc_row_pane_g3

0x870a,	// (0x00093924) list_single_dyc_row_pane_g4_ParamLimits

0x870a,	// (0x00093924) list_single_dyc_row_pane_g4

0x0003,

0xfd39,	// (0x0009af53) list_single_dyc_row_pane_g_ParamLimits

0xfd39,	// (0x0009af53) list_single_dyc_row_pane_g

0x8716,	// (0x00093930) list_single_dyc_row_text_pane_ParamLimits

0x8716,	// (0x00093930) list_single_dyc_row_text_pane

0x973f,	// (0x00094959) bg_sp_fs_scroll_pane

0xe76f,	// (0x00099989) thumb_sp_fs_scroll_pane

0x04d4,	// (0x0008b6ee) list_medium_line_g1_ParamLimits

0x04d4,	// (0x0008b6ee) list_medium_line_g1

0x0aca,	// (0x0008bce4) list_medium_line_t1_ParamLimits

0x0aca,	// (0x0008bce4) list_medium_line_t1

0x00cc,	// (0x0008b2e6) list_medium_line_x2_g1_ParamLimits

0x00cc,	// (0x0008b2e6) list_medium_line_x2_g1

0x00d8,	// (0x0008b2f2) list_medium_line_x2_g2_ParamLimits

0x00d8,	// (0x0008b2f2) list_medium_line_x2_g2

0x0001,

0xfd42,	// (0x0009af5c) list_medium_line_x2_g_ParamLimits

0xfd42,	// (0x0009af5c) list_medium_line_x2_g

0x8735,	// (0x0009394f) list_medium_line_x2_t1_ParamLimits

0x8735,	// (0x0009394f) list_medium_line_x2_t1

0x00cc,	// (0x0008b2e6) list_medium_line_x3_g1_ParamLimits

0x00cc,	// (0x0008b2e6) list_medium_line_x3_g1

0x00d8,	// (0x0008b2f2) list_medium_line_x3_g2_ParamLimits

0x00d8,	// (0x0008b2f2) list_medium_line_x3_g2

0x0001,

0xfd42,	// (0x0009af5c) list_medium_line_x3_g_ParamLimits

0xfd42,	// (0x0009af5c) list_medium_line_x3_g

0x8735,	// (0x0009394f) list_medium_line_x3_t1_ParamLimits

0x8735,	// (0x0009394f) list_medium_line_x3_t1

0xe778,	// (0x00099992) thumb_sp_fs_scroll_pane_g1

0xe781,	// (0x0009999b) thumb_sp_fs_scroll_pane_g2

0xe78a,	// (0x000999a4) thumb_sp_fs_scroll_pane_g3

0x0002,

0xfd47,	// (0x0009af61) thumb_sp_fs_scroll_pane_g

0xe778,	// (0x00099992) bg_sp_fs_scroll_pane_g1

0xe781,	// (0x0009999b) bg_sp_fs_scroll_pane_g2

0xe78a,	// (0x000999a4) bg_sp_fs_scroll_pane_g3

0x0002,

0xfd47,	// (0x0009af61) bg_sp_fs_scroll_pane_g

0x00cc,	// (0x0008b2e6) list_medium_line_x2_t3_g4_g1_ParamLimits

0x00cc,	// (0x0008b2e6) list_medium_line_x2_t3_g4_g1

0x0173,	// (0x0008b38d) list_medium_line_x2_t3_g4_g2_ParamLimits

0x0173,	// (0x0008b38d) list_medium_line_x2_t3_g4_g2

0x00d8,	// (0x0008b2f2) list_medium_line_x2_t3_g4_g3_ParamLimits

0x00d8,	// (0x0008b2f2) list_medium_line_x2_t3_g4_g3

0x00e4,	// (0x0008b2fe) list_medium_line_x2_t3_g4_g4_ParamLimits

0x00e4,	// (0x0008b2fe) list_medium_line_x2_t3_g4_g4

0x0003,

0xf2c7,	// (0x0009a4e1) list_medium_line_x2_t3_g4_g_ParamLimits

0xf2c7,	// (0x0009a4e1) list_medium_line_x2_t3_g4_g

0x0adf,	// (0x0008bcf9) list_medium_line_x2_t3_g4_t1_ParamLimits

0x0adf,	// (0x0008bcf9) list_medium_line_x2_t3_g4_t1

0x0af9,	// (0x0008bd13) list_medium_line_x2_t3_g4_t2_ParamLimits

0x0af9,	// (0x0008bd13) list_medium_line_x2_t3_g4_t2

0x0119,	// (0x0008b333) list_medium_line_x2_t3_g4_t3_ParamLimits

0x0119,	// (0x0008b333) list_medium_line_x2_t3_g4_t3

0x0002,

0xfd4e,	// (0x0009af68) list_medium_line_x2_t3_g4_t_ParamLimits

0xfd4e,	// (0x0009af68) list_medium_line_x2_t3_g4_t

0x04d4,	// (0x0008b6ee) list_medium_line_g2_g1_ParamLimits

0x04d4,	// (0x0008b6ee) list_medium_line_g2_g1

0x7153,	// (0x0009236d) list_medium_line_g2_g2_ParamLimits

0x7153,	// (0x0009236d) list_medium_line_g2_g2

0x0001,

0xfa00,	// (0x0009ac1a) list_medium_line_g2_g_ParamLimits

0xfa00,	// (0x0009ac1a) list_medium_line_g2_g

0x0b12,	// (0x0008bd2c) list_medium_line_g2_t1_ParamLimits

0x0b12,	// (0x0008bd2c) list_medium_line_g2_t1

0x04d4,	// (0x0008b6ee) list_medium_line_t3_g2_g1_ParamLimits

0x04d4,	// (0x0008b6ee) list_medium_line_t3_g2_g1

0x7153,	// (0x0009236d) list_medium_line_t3_g2_g2_ParamLimits

0x7153,	// (0x0009236d) list_medium_line_t3_g2_g2

0x0001,

0xfa00,	// (0x0009ac1a) list_medium_line_t3_g2_g_ParamLimits

0xfa00,	// (0x0009ac1a) list_medium_line_t3_g2_g

0x0b27,	// (0x0008bd41) list_medium_line_t3_g2_t1_ParamLimits

0x0b27,	// (0x0008bd41) list_medium_line_t3_g2_t1

0x0b3e,	// (0x0008bd58) list_medium_line_t3_g2_t2_ParamLimits

0x0b3e,	// (0x0008bd58) list_medium_line_t3_g2_t2

0x0b53,	// (0x0008bd6d) list_medium_line_t3_g2_t3_ParamLimits

0x0b53,	// (0x0008bd6d) list_medium_line_t3_g2_t3

0x0002,

0xfd55,	// (0x0009af6f) list_medium_line_t3_g2_t_ParamLimits

0xfd55,	// (0x0009af6f) list_medium_line_t3_g2_t

0x85ac,	// (0x000937c6) list_medium_line_right_icon_g1

0x0b6c,	// (0x0008bd86) list_medium_line_right_icon_t1

0x04d4,	// (0x0008b6ee) list_medium_line_t2_g1_ParamLimits

0x04d4,	// (0x0008b6ee) list_medium_line_t2_g1

0x0b7a,	// (0x0008bd94) list_medium_line_t2_t1_ParamLimits

0x0b7a,	// (0x0008bd94) list_medium_line_t2_t1

0x0b94,	// (0x0008bdae) list_medium_line_t2_t2_ParamLimits

0x0b94,	// (0x0008bdae) list_medium_line_t2_t2

0x0001,

0xfd5c,	// (0x0009af76) list_medium_line_t2_t_ParamLimits

0xfd5c,	// (0x0009af76) list_medium_line_t2_t

0x04d4,	// (0x0008b6ee) list_medium_line_t3_g1_ParamLimits

0x04d4,	// (0x0008b6ee) list_medium_line_t3_g1

0x0bad,	// (0x0008bdc7) list_medium_line_t3_t1_ParamLimits

0x0bad,	// (0x0008bdc7) list_medium_line_t3_t1

0x0bc4,	// (0x0008bdde) list_medium_line_t3_t2_ParamLimits

0x0bc4,	// (0x0008bdde) list_medium_line_t3_t2

0x0bd9,	// (0x0008bdf3) list_medium_line_t3_t3_ParamLimits

0x0bd9,	// (0x0008bdf3) list_medium_line_t3_t3

0x0002,

0xfd61,	// (0x0009af7b) list_medium_line_t3_t_ParamLimits

0xfd61,	// (0x0009af7b) list_medium_line_t3_t

0x04d4,	// (0x0008b6ee) list_medium_line_g3_g1_ParamLimits

0x04d4,	// (0x0008b6ee) list_medium_line_g3_g1

0x874b,	// (0x00093965) list_medium_line_g3_g2_ParamLimits

0x874b,	// (0x00093965) list_medium_line_g3_g2

0x7153,	// (0x0009236d) list_medium_line_g3_g3_ParamLimits

0x7153,	// (0x0009236d) list_medium_line_g3_g3

0x0002,

0xfd68,	// (0x0009af82) list_medium_line_g3_g_ParamLimits

0xfd68,	// (0x0009af82) list_medium_line_g3_g

0x0beb,	// (0x0008be05) list_medium_line_g3_t1_ParamLimits

0x0beb,	// (0x0008be05) list_medium_line_g3_t1

0x04d4,	// (0x0008b6ee) list_medium_line_t2_g3_g1_ParamLimits

0x04d4,	// (0x0008b6ee) list_medium_line_t2_g3_g1

0x874b,	// (0x00093965) list_medium_line_t2_g3_g2_ParamLimits

0x874b,	// (0x00093965) list_medium_line_t2_g3_g2

0x7153,	// (0x0009236d) list_medium_line_t2_g3_g3_ParamLimits

0x7153,	// (0x0009236d) list_medium_line_t2_g3_g3

0x0002,

0xfd68,	// (0x0009af82) list_medium_line_t2_g3_g_ParamLimits

0xfd68,	// (0x0009af82) list_medium_line_t2_g3_g

0x0c00,	// (0x0008be1a) list_medium_line_t2_g3_t1_ParamLimits

0x0c00,	// (0x0008be1a) list_medium_line_t2_g3_t1

0x0c1a,	// (0x0008be34) list_medium_line_t2_g3_t2_ParamLimits

0x0c1a,	// (0x0008be34) list_medium_line_t2_g3_t2

0x0001,

0xfd6f,	// (0x0009af89) list_medium_line_t2_g3_t_ParamLimits

0xfd6f,	// (0x0009af89) list_medium_line_t2_g3_t

0x04d4,	// (0x0008b6ee) list_medium_line_t3_g3_g1_ParamLimits

0x04d4,	// (0x0008b6ee) list_medium_line_t3_g3_g1

0x874b,	// (0x00093965) list_medium_line_t3_g3_g2_ParamLimits

0x874b,	// (0x00093965) list_medium_line_t3_g3_g2

0x7153,	// (0x0009236d) list_medium_line_t3_g3_g3_ParamLimits

0x7153,	// (0x0009236d) list_medium_line_t3_g3_g3

0x0002,

0xfd68,	// (0x0009af82) list_medium_line_t3_g3_g_ParamLimits

0xfd68,	// (0x0009af82) list_medium_line_t3_g3_g

0x0c35,	// (0x0008be4f) list_medium_line_t3_g3_t1_ParamLimits

0x0c35,	// (0x0008be4f) list_medium_line_t3_g3_t1

0x0c49,	// (0x0008be63) list_medium_line_t3_g3_t2_ParamLimits

0x0c49,	// (0x0008be63) list_medium_line_t3_g3_t2

0x0c5b,	// (0x0008be75) list_medium_line_t3_g3_t3_ParamLimits

0x0c5b,	// (0x0008be75) list_medium_line_t3_g3_t3

0x0002,

0xfd74,	// (0x0009af8e) list_medium_line_t3_g3_t_ParamLimits

0xfd74,	// (0x0009af8e) list_medium_line_t3_g3_t

0x86ba,	// (0x000938d4) list_medium_line_right_iconx2_g1

0x85ac,	// (0x000937c6) list_medium_line_right_iconx2_g2

0x0001,

0xfd7b,	// (0x0009af95) list_medium_line_right_iconx2_g

0x8757,	// (0x00093971) list_medium_line_right_iconx2_t1

0x86ba,	// (0x000938d4) list_medium_line_t2_right_iconx2_g1

0x85ac,	// (0x000937c6) list_medium_line_t2_right_iconx2_g2

0x0001,

0xfd7b,	// (0x0009af95) list_medium_line_t2_right_iconx2_g

0x0c6f,	// (0x0008be89) list_medium_line_t2_right_iconx2_t1

0x0c7f,	// (0x0008be99) list_medium_line_t2_right_iconx2_t2

0x0001,

0xfd80,	// (0x0009af9a) list_medium_line_t2_right_iconx2_t

0x0c91,	// (0x0008beab) list_medium_line_x4_t4_t1

0x0c9f,	// (0x0008beb9) list_medium_line_x4_t4_t2

0x0caf,	// (0x0008bec9) list_medium_line_x4_t4_t3

0x0cbf,	// (0x0008bed9) list_medium_line_x4_t4_t4

0x0003,

0xfd85,	// (0x0009af9f) list_medium_line_x4_t4_t

0x87a8,	// (0x000939c2) tport_appsw_pane_ParamLimits

0x87a8,	// (0x000939c2) tport_appsw_pane

0x87c0,	// (0x000939da) tport_contact_pane_ParamLimits

0x87c0,	// (0x000939da) tport_contact_pane

0x87d8,	// (0x000939f2) tport_listscroll_pane_ParamLimits

0x87d8,	// (0x000939f2) tport_listscroll_pane

0x87f2,	// (0x00093a0c) cell_tport_appsw_pane_ParamLimits

0x87f2,	// (0x00093a0c) cell_tport_appsw_pane

0xd663,	// (0x0009887d) tport_appsw_pane_g1_ParamLimits

0xd663,	// (0x0009887d) tport_appsw_pane_g1

0xe79c,	// (0x000999b6) tport_contact_pane_g1

0xe12b,	// (0x00099345) tport_contact_pane_t1

0xe7a5,	// (0x000999bf) tport_contact_pane_t2

0x0001,

0xfd8e,	// (0x0009afa8) tport_contact_pane_t

0xe7b3,	// (0x000999cd) list_tport_pane

0xe7bc,	// (0x000999d6) scroll_pane_cp_030

0x883a,	// (0x00093a54) cell_tport_appsw_pane_g1

0x884a,	// (0x00093a64) cell_tport_appsw_pane_t1

0x8858,	// (0x00093a72) grid_highlight_pane_cp019

0x8860,	// (0x00093a7a) list_tport_double_graphic_pane_ParamLimits

0x8860,	// (0x00093a7a) list_tport_double_graphic_pane

0xa4a9,	// (0x000956c3) list_highlight_pane_cp023_ParamLimits

0xa4a9,	// (0x000956c3) list_highlight_pane_cp023

0x886d,	// (0x00093a87) list_tport_double_graphic_pane_g1_ParamLimits

0x886d,	// (0x00093a87) list_tport_double_graphic_pane_g1

0x887a,	// (0x00093a94) list_tport_double_graphic_pane_t1_ParamLimits

0x887a,	// (0x00093a94) list_tport_double_graphic_pane_t1

0x888f,	// (0x00093aa9) list_tport_double_graphic_pane_t2_ParamLimits

0x888f,	// (0x00093aa9) list_tport_double_graphic_pane_t2

0x0001,

0xfd9a,	// (0x0009afb4) list_tport_double_graphic_pane_t_ParamLimits

0xfd9a,	// (0x0009afb4) list_tport_double_graphic_pane_t

0x973f,	// (0x00094959) main_cale_note_pane

0x68e7,	// (0x00091b01) cell_vitu2_function_top_wide_pane_cp01_ParamLimits

0x68e7,	// (0x00091b01) cell_vitu2_function_top_wide_pane_cp01

0x81be,	// (0x000933d8) wait_bar_pane_cp05_ParamLimits

0xa4a9,	// (0x000956c3) listscroll_cmail_pane

0xe7c5,	// (0x000999df) list_cmail_pane

0x88a1,	// (0x00093abb) list_cmail_body_pane

0x88b6,	// (0x00093ad0) list_single_cmail_header_caption_pane

0x88cf,	// (0x00093ae9) list_single_cmail_header_detail_pane_ParamLimits

0x88cf,	// (0x00093ae9) list_single_cmail_header_detail_pane

0xe7d5,	// (0x000999ef) list_single_cmail_header_caption_pane_t1

0x0ccf,	// (0x0008bee9) list_single_cmail_header_detail_pane_g1_ParamLimits

0x0ccf,	// (0x0008bee9) list_single_cmail_header_detail_pane_g1

0xa3ce,	// (0x000955e8) list_single_cmail_header_detail_pane_g2_ParamLimits

0xa3ce,	// (0x000955e8) list_single_cmail_header_detail_pane_g2

0x0002,

0xfd9f,	// (0x0009afb9) list_single_cmail_header_detail_pane_g_ParamLimits

0xfd9f,	// (0x0009afb9) list_single_cmail_header_detail_pane_g

0x0ce7,	// (0x0008bf01) list_single_cmail_header_detail_pane_t1_ParamLimits

0x0ce7,	// (0x0008bf01) list_single_cmail_header_detail_pane_t1

0x0d25,	// (0x0008bf3f) list_single_cmail_header_editor_pane_bg_ParamLimits

0x0d25,	// (0x0008bf3f) list_single_cmail_header_editor_pane_bg

0xe7f0,	// (0x00099a0a) list_cmail_body_pane_g1

0xe7f9,	// (0x00099a13) list_cmail_body_pane_t1

0xd683,	// (0x0009889d) list_single_cmail_header_editor_pane_bg_g1

0xab86,	// (0x00095da0) list_single_cmail_header_editor_pane_bg_g1_copy1

0xd693,	// (0x000988ad) list_single_cmail_header_editor_pane_bg_g1_copy2

0xd68b,	// (0x000988a5) list_single_cmail_header_editor_pane_bg_g1_copy3

0xd8a7,	// (0x00098ac1) list_single_cmail_header_editor_pane_bg_g1_copy4

0xd6b3,	// (0x000988cd) list_single_cmail_header_editor_pane_bg_g1_copy4_copy1

0xd6a3,	// (0x000988bd) list_single_cmail_header_editor_pane_bg_g1_copy4_copy2

0xd6ab,	// (0x000988c5) list_single_cmail_header_editor_pane_bg_g1_copy4_copy3

0xab66,	// (0x00095d80) list_single_cmail_header_editor_pane_bg_g1_copy4_copy3_copy1

0x8927,	// (0x00093b41) calenote_gesture_pane_ParamLimits

0x8927,	// (0x00093b41) calenote_gesture_pane

0x8947,	// (0x00093b61) calenote_window_pane_ParamLimits

0x8947,	// (0x00093b61) calenote_window_pane

0xe807,	// (0x00099a21) popup_note_window_cp01

0x8963,	// (0x00093b7d) calenote_swipe_1_pane_ParamLimits

0x8963,	// (0x00093b7d) calenote_swipe_1_pane

0x8592,	// (0x000937ac) calenote_swipe_2_pane_ParamLimits

0x8592,	// (0x000937ac) calenote_swipe_2_pane

0xe619,	// (0x00099833) calenote_swipe_1_pane_g1_ParamLimits

0xe619,	// (0x00099833) calenote_swipe_1_pane_g1

0xe626,	// (0x00099840) calenote_swipe_1_pane_g2_ParamLimits

0xe626,	// (0x00099840) calenote_swipe_1_pane_g2

0x0001,

0xfcc3,	// (0x0009aedd) calenote_swipe_1_pane_g_ParamLimits

0xfcc3,	// (0x0009aedd) calenote_swipe_1_pane_g

0xe819,	// (0x00099a33) calenote_swipe_1_pane_t1_ParamLimits

0xe819,	// (0x00099a33) calenote_swipe_1_pane_t1

0xe619,	// (0x00099833) calenote_swipe_2_pane_g1_ParamLimits

0xe619,	// (0x00099833) calenote_swipe_2_pane_g1

0xe838,	// (0x00099a52) calenote_swipe_2_pane_g2_ParamLimits

0xe838,	// (0x00099a52) calenote_swipe_2_pane_g2

0x0001,

0xfdab,	// (0x0009afc5) calenote_swipe_2_pane_g_ParamLimits

0xfdab,	// (0x0009afc5) calenote_swipe_2_pane_g

0xe844,	// (0x00099a5e) calenote_swipe_2_pane_t1_ParamLimits

0xe844,	// (0x00099a5e) calenote_swipe_2_pane_t1

0x973f,	// (0x00094959) main_mup_navstr_pane

0x559d,	// (0x000907b7) main_mup3_pane_t7_ParamLimits

0x559d,	// (0x000907b7) main_mup3_pane_t7

0x9fff,	// (0x00095219) main_mp4_pane_g6_ParamLimits

0x9fff,	// (0x00095219) main_mp4_pane_g6

0xa1a3,	// (0x000953bd) main_image3_pane_t4_ParamLimits

0xa1a3,	// (0x000953bd) main_image3_pane_t4

0x8978,	// (0x00093b92) popup_navstr_preview_pane_ParamLimits

0x8978,	// (0x00093b92) popup_navstr_preview_pane

0x898c,	// (0x00093ba6) scroll_navstr_pane_ParamLimits

0x898c,	// (0x00093ba6) scroll_navstr_pane

0x973f,	// (0x00094959) bg_popup_preview_window_pane_cp04

0xe86b,	// (0x00099a85) popup_navstr_preview_pane_t1

0x89a0,	// (0x00093bba) scroll_navstr_pane_g1_ParamLimits

0x89a0,	// (0x00093bba) scroll_navstr_pane_g1

0x89b4,	// (0x00093bce) scroll_navstr_pane_t1_ParamLimits

0x89b4,	// (0x00093bce) scroll_navstr_pane_t1

0xe810,	// (0x00099a2a) bg_button_pane_cp014

0xe810,	// (0x00099a2a) bg_button_pane_cp030

0x077b,	// (0x0008b995) list_double_fisheye_pane_g4_ParamLimits

0x077b,	// (0x0008b995) list_double_fisheye_pane_g4

0x0787,	// (0x0008b9a1) list_double_fisheye_pane_g5_ParamLimits

0x0787,	// (0x0008b9a1) list_double_fisheye_pane_g5

0xbfa3,	// (0x000971bd) sp_fs_scroll_pane_cp03

0xe70c,	// (0x00099926) main_sp_fs_ctrlbar_pane_g1_ParamLimits

0xe718,	// (0x00099932) main_sp_fs_ctrlbar_pane_g2_ParamLimits

0xfce0,	// (0x0009aefa) main_sp_fs_ctrlbar_pane_g_ParamLimits

0xe724,	// (0x0009993e) main_sp_fs_ctrlbar_pane_t1_ParamLimits

0xe7cd,	// (0x000999e7) sp_fs_scroll_pane_cp02

0xa87c,	// (0x00095a96) popup_sp_fs_calendar_preview_list_single_pane_ParamLimits

0xa87c,	// (0x00095a96) popup_sp_fs_calendar_preview_list_single_pane

0x973f,	// (0x00094959) main_cam6_pano_pane

0xa4a9,	// (0x000956c3) main_mup3_pane_ParamLimits

0x973f,	// (0x00094959) main_phacti_pane

0x8091,	// (0x000932ab) bg_button_pane_cp11

0x80ab,	// (0x000932c5) main_mobtv_info_pane_g2_ParamLimits

0x80ab,	// (0x000932c5) main_mobtv_info_pane_g2

0x0001,

0xfc40,	// (0x0009ae5a) main_mobtv_info_pane_g_ParamLimits

0xfc40,	// (0x0009ae5a) main_mobtv_info_pane_g

0x8288,	// (0x000934a2) sc_clock_pane_t5_ParamLimits

0x8288,	// (0x000934a2) sc_clock_pane_t5

0x831a,	// (0x00093534) main_radioblah_pane_g1_ParamLimits

0xe565,	// (0x0009977f) main_radioblah_pane_t3_ParamLimits

0xe565,	// (0x0009977f) main_radioblah_pane_t3

0xe57d,	// (0x00099797) main_radioblah_pane_t4_ParamLimits

0xe57d,	// (0x00099797) main_radioblah_pane_t4

0x8342,	// (0x0009355c) main_radioblah_text_pane_ParamLimits

0x8342,	// (0x0009355c) main_radioblah_text_pane

0x8354,	// (0x0009356e) main_radioblah_info_pane_g1_ParamLimits

0x83ed,	// (0x00093607) main_radioblah_info_pane_t4_ParamLimits

0x83ed,	// (0x00093607) main_radioblah_info_pane_t4

0xa4a9,	// (0x000956c3) main_sp_fs_calendar_pane

0x89ca,	// (0x00093be4) main_phacti_pane_g1

0x89d2,	// (0x00093bec) phacti_note_pane_ParamLimits

0x89d2,	// (0x00093bec) phacti_note_pane

0xe882,	// (0x00099a9c) phacti_term_pane_ParamLimits

0xe882,	// (0x00099a9c) phacti_term_pane

0xe897,	// (0x00099ab1) phacti_note_pane_t1_ParamLimits

0xe897,	// (0x00099ab1) phacti_note_pane_t1

0x89e6,	// (0x00093c00) phacti_term_pane_g1

0x89ee,	// (0x00093c08) phacti_term_pane_t1_ParamLimits

0x89ee,	// (0x00093c08) phacti_term_pane_t1

0xe8ae,	// (0x00099ac8) popup_sp_fs_calendar_preview_list_single_pane_g1

0xe8b6,	// (0x00099ad0) popup_sp_fs_calendar_preview_list_single_pane_g2

0x0001,

0xfdb5,	// (0x0009afcf) popup_sp_fs_calendar_preview_list_single_pane_g

0xe8be,	// (0x00099ad8) popup_sp_fs_calendar_preview_list_single_pane_t1_ParamLimits

0xe8be,	// (0x00099ad8) popup_sp_fs_calendar_preview_list_single_pane_t1

0xe8d4,	// (0x00099aee) aid_popup_sp_fs_bg_corner_pane

0xcc28,	// (0x00097e42) popup_sp_fs_calendar_preview_bg_pane_g1

0x973f,	// (0x00094959) popup_sp_fs_calendar_preview_bg_pane

0x1edf,	// (0x0008d0f9) popup_sp_fs_calendar_preview_list_pane

0xc81e,	// (0x00097a38) bg_main_sp_fs_cale_pane_ParamLimits

0xc81e,	// (0x00097a38) bg_main_sp_fs_cale_pane

0x8a79,	// (0x00093c93) listscroll_cale_mrui_pane_ParamLimits

0x8a79,	// (0x00093c93) listscroll_cale_mrui_pane

0x8a8e,	// (0x00093ca8) listscroll_sp_fs_schedule_track_pane

0x8a97,	// (0x00093cb1) main_sp_fs_ctrlbar_pane_cp01_ParamLimits

0x8a97,	// (0x00093cb1) main_sp_fs_ctrlbar_pane_cp01

0xe8dc,	// (0x00099af6) main_sp_fs_ribbon_pane

0x8aaa,	// (0x00093cc4) popup_sp_fs_cale_preview_window

0x8abc,	// (0x00093cd6) list_single_sp_fs_schedule_track_pane_ParamLimits

0x8abc,	// (0x00093cd6) list_single_sp_fs_schedule_track_pane

0xa4a9,	// (0x000956c3) bg_sp_fs_highlight_list_pane_cp03_ParamLimits

0xa4a9,	// (0x000956c3) bg_sp_fs_highlight_list_pane_cp03

0x8ad2,	// (0x00093cec) list_single_sp_fs_schedule_track_pane_g1_ParamLimits

0x8ad2,	// (0x00093cec) list_single_sp_fs_schedule_track_pane_g1

0x8ade,	// (0x00093cf8) list_single_sp_fs_schedule_track_pane_g2_ParamLimits

0x8ade,	// (0x00093cf8) list_single_sp_fs_schedule_track_pane_g2

0x0001,

0xfdba,	// (0x0009afd4) list_single_sp_fs_schedule_track_pane_g_ParamLimits

0xfdba,	// (0x0009afd4) list_single_sp_fs_schedule_track_pane_g

0x8aea,	// (0x00093d04) list_single_sp_fs_schedule_track_pane_t1_ParamLimits

0x8aea,	// (0x00093d04) list_single_sp_fs_schedule_track_pane_t1

0x8b04,	// (0x00093d1e) sp_fs_schedule_track_pane_ParamLimits

0x8b04,	// (0x00093d1e) sp_fs_schedule_track_pane

0xe8e4,	// (0x00099afe) sp_fs_schedule_track_pane_g1

0xe8ec,	// (0x00099b06) sp_fs_schedule_track_pane_g2

0xe8f4,	// (0x00099b0e) sp_fs_schedule_track_pane_g3

0xe8fc,	// (0x00099b16) sp_fs_schedule_track_pane_g4

0xe904,	// (0x00099b1e) sp_fs_schedule_track_pane_g5

0x0004,

0xfdbf,	// (0x0009afd9) sp_fs_schedule_track_pane_g

0xd683,	// (0x0009889d) bg_sp_fs_schedule_viewer_highlight_g1

0xab86,	// (0x00095da0) bg_sp_fs_schedule_viewer_highlight_g2

0xd68b,	// (0x000988a5) bg_sp_fs_schedule_viewer_highlight_g3

0xd693,	// (0x000988ad) bg_sp_fs_schedule_viewer_highlight_g4

0xd8a7,	// (0x00098ac1) bg_sp_fs_schedule_viewer_highlight_g5

0xd6a3,	// (0x000988bd) bg_sp_fs_schedule_viewer_highlight_g6

0xd6ab,	// (0x000988c5) bg_sp_fs_schedule_viewer_highlight_g7

0xd6b3,	// (0x000988cd) bg_sp_fs_schedule_viewer_highlight_g8

0xab66,	// (0x00095d80) bg_sp_fs_schedule_viewer_highlight_g9

0x0008,

0xfdca,	// (0x0009afe4) bg_sp_fs_schedule_viewer_highlight_g

0x973f,	// (0x00094959) bg_main_sp_fs_ribbon_pane

0x8b15,	// (0x00093d2f) main_sp_fs_ribbon_pane_g1

0xe90c,	// (0x00099b26) main_sp_fs_ribbon_pane_t1

0x8b1e,	// (0x00093d38) main_sp_fs_ribbon_pane_t2

0xe91b,	// (0x00099b35) main_sp_fs_ribbon_pane_t3

0x0002,

0xfddd,	// (0x0009aff7) main_sp_fs_ribbon_pane_t

0xe92a,	// (0x00099b44) main_sp_fs_ribbon_scheduler_pane

0xe932,	// (0x00099b4c) bg_main_sp_fs_ribbon_pane_g1

0xe93b,	// (0x00099b55) bg_main_sp_fs_ribbon_pane_g2

0xe944,	// (0x00099b5e) bg_main_sp_fs_ribbon_pane_g3

0x0002,

0xfde4,	// (0x0009affe) bg_main_sp_fs_ribbon_pane_g

0xe94c,	// (0x00099b66) main_sp_fs_ribbon_scheduler_pane_g1

0xe955,	// (0x00099b6f) main_sp_fs_ribbon_scheduler_pane_g2

0xe95e,	// (0x00099b78) main_sp_fs_ribbon_scheduler_pane_g3

0x0002,

0xfdeb,	// (0x0009b005) main_sp_fs_ribbon_scheduler_pane_g

0xe967,	// (0x00099b81) list_cale_mrui_pane

0x8b2d,	// (0x00093d47) sp_fs_scroll_pane_cp07_ParamLimits

0x8b2d,	// (0x00093d47) sp_fs_scroll_pane_cp07

0x8b49,	// (0x00093d63) bg_sp_fs_schedule_viewer_highlight_ParamLimits

0x8b49,	// (0x00093d63) bg_sp_fs_schedule_viewer_highlight

0xe974,	// (0x00099b8e) list_single_sp_fs_schedule_track_pane_cp01

0xe97c,	// (0x00099b96) list_sp_fs_schedule_track_pane

0xe984,	// (0x00099b9e) sp_fs_scroll_pane_cp06_ParamLimits

0xe984,	// (0x00099b9e) sp_fs_scroll_pane_cp06

0xcc28,	// (0x00097e42) bgmain_sp_fs_calendar_pane_g1

0x0d3e,	// (0x0008bf58) list_single_cale_mrui_pane_ParamLimits

0x0d3e,	// (0x0008bf58) list_single_cale_mrui_pane

0x8b59,	// (0x00093d73) list_single_cale_mrui_row_pane_ParamLimits

0x8b59,	// (0x00093d73) list_single_cale_mrui_row_pane

0x8b66,	// (0x00093d80) list_single_cale_mrui_row_pane_g1_ParamLimits

0x8b66,	// (0x00093d80) list_single_cale_mrui_row_pane_g1

0x8b9e,	// (0x00093db8) list_single_cale_mrui_row_pane_t1_ParamLimits

0x8b9e,	// (0x00093db8) list_single_cale_mrui_row_pane_t1

0x0d60,	// (0x0008bf7a) list_single_cale_mrui_row_pane_t2_ParamLimits

0x0d60,	// (0x0008bf7a) list_single_cale_mrui_row_pane_t2

0x8bb0,	// (0x00093dca) list_single_cale_mrui_row_pane_t3_ParamLimits

0x8bb0,	// (0x00093dca) list_single_cale_mrui_row_pane_t3

0x8bdf,	// (0x00093df9) list_single_cale_mrui_row_pane_t4_ParamLimits

0x8bdf,	// (0x00093df9) list_single_cale_mrui_row_pane_t4

0x0003,

0xfdf9,	// (0x0009b013) list_single_cale_mrui_row_pane_t_ParamLimits

0xfdf9,	// (0x0009b013) list_single_cale_mrui_row_pane_t

0x0dc8,	// (0x0008bfe2) list_single_cmail_header_editor_pane_bg_cp01_ParamLimits

0x0dc8,	// (0x0008bfe2) list_single_cmail_header_editor_pane_bg_cp01

0x0dee,	// (0x0008c008) list_single_cmail_header_editor_pane_bg_cp02_ParamLimits

0x0dee,	// (0x0008c008) list_single_cmail_header_editor_pane_bg_cp02

0x8c0e,	// (0x00093e28) main_radioblah_text_pane_t1_ParamLimits

0x8c0e,	// (0x00093e28) main_radioblah_text_pane_t1

0xe9a3,	// (0x00099bbd) cam6_indi_pane_cp01

0xe9ab,	// (0x00099bc5) cam6_mode_pane_cp01

0xe9b3,	// (0x00099bcd) cam6_pano_pane

0xe9bc,	// (0x00099bd6) cam6_zoom_pane_cp01

0xe9c4,	// (0x00099bde) cam6_pano_image_pane

0xe9cf,	// (0x00099be9) cam6_pano_pane_g1

0xe2d2,	// (0x000994ec) cam6_pano_pane_g2

0xe9d8,	// (0x00099bf2) cam6_pano_pane_g3

0xe9e1,	// (0x00099bfb) cam6_pano_pane_g4

0xd1ca,	// (0x000983e4) cam6_pano_pane_g5

0xe9ea,	// (0x00099c04) cam6_pano_pane_g6

0xe9f4,	// (0x00099c0e) cam6_pano_pane_g7

0xe9fc,	// (0x00099c16) cam6_pano_pane_g8

0xea05,	// (0x00099c1f) cam6_pano_pane_g9

0x0008,

0xfe02,	// (0x0009b01c) cam6_pano_pane_g

0x973f,	// (0x00094959) main_browser_tag_pane

0xe863,	// (0x00099a7d) grid_navstr_albumart_pane

0xea10,	// (0x00099c2a) cell_navstr_albumart_pane_ParamLimits

0xea10,	// (0x00099c2a) cell_navstr_albumart_pane

0xb571,	// (0x0009678b) cell_navstr_albumart_pane_g1

0xc62f,	// (0x00097849) cell_navstr_albumart_pane_g2

0xc63f,	// (0x00097859) cell_navstr_albumart_pane_g3

0xc637,	// (0x00097851) cell_navstr_albumart_pane_g4

0x0003,

0xfe15,	// (0x0009b02f) cell_navstr_albumart_pane_g

0x8c29,	// (0x00093e43) bt_list_pane_ParamLimits

0x8c29,	// (0x00093e43) bt_list_pane

0xea32,	// (0x00099c4c) bt_list_pane_t1

0xea41,	// (0x00099c5b) bt_list_pane_t2

0x0001,

0xfe1e,	// (0x0009b038) bt_list_pane_t

0x973f,	// (0x00094959) main_cale_prevew_pane

0x8c3e,	// (0x00093e58) popup_cale_preview_window_ParamLimits

0x8c3e,	// (0x00093e58) popup_cale_preview_window

0xa4a9,	// (0x000956c3) bg_popup_preview_window_pane_cp05_ParamLimits

0xa4a9,	// (0x000956c3) bg_popup_preview_window_pane_cp05

0xea50,	// (0x00099c6a) list_cale_preview_pane_ParamLimits

0xea50,	// (0x00099c6a) list_cale_preview_pane

0xea5c,	// (0x00099c76) list_double_cale_preview_pane_ParamLimits

0xea5c,	// (0x00099c76) list_double_cale_preview_pane

0xea6e,	// (0x00099c88) list_single_cale_preview_pane_ParamLimits

0xea6e,	// (0x00099c88) list_single_cale_preview_pane

0xea82,	// (0x00099c9c) list_single_cale_preview_pane_g1

0xea8a,	// (0x00099ca4) list_single_cale_preview_pane_t1_ParamLimits

0xea8a,	// (0x00099ca4) list_single_cale_preview_pane_t1

0xea9f,	// (0x00099cb9) list_double_cale_preview_pane_g1

0xeaa7,	// (0x00099cc1) list_double_cale_preview_pane_t1_ParamLimits

0xeaa7,	// (0x00099cc1) list_double_cale_preview_pane_t1

0xeabc,	// (0x00099cd6) list_double_cale_preview_pane_t2_ParamLimits

0xeabc,	// (0x00099cd6) list_double_cale_preview_pane_t2

0x0001,

0xfe23,	// (0x0009b03d) list_double_cale_preview_pane_t_ParamLimits

0xfe23,	// (0x0009b03d) list_double_cale_preview_pane_t

0x973f,	// (0x00094959) main_ezdial_pane

0xa4a9,	// (0x000956c3) main_sp_fs_email_pane_ParamLimits

0x85b4,	// (0x000937ce) cmail_ddmenu_btn01_pane_ParamLimits

0x85b4,	// (0x000937ce) cmail_ddmenu_btn01_pane

0x85c7,	// (0x000937e1) cmail_ddmenu_btn02_pane_ParamLimits

0x85c7,	// (0x000937e1) cmail_ddmenu_btn02_pane

0x85ea,	// (0x00093804) cmail_ddmenu_btn03_pane_ParamLimits

0x85ea,	// (0x00093804) cmail_ddmenu_btn03_pane

0x8610,	// (0x0009382a) main_sp_fs_ctrlbar_pane_ParamLimits

0x8634,	// (0x0009384e) main_sp_fs_listscroll_pane_te_cp01_ParamLimits

0x88a1,	// (0x00093abb) list_cmail_body_pane_ParamLimits

0x88f8,	// (0x00093b12) bg_button_pane_cp12

0xe7e3,	// (0x000999fd) list_single_cmail_header_detail_pane_g3_ParamLimits

0xe7e3,	// (0x000999fd) list_single_cmail_header_detail_pane_g3

0x8903,	// (0x00093b1d) list_single_cmail_header_detail_pane_t2_ParamLimits

0x8903,	// (0x00093b1d) list_single_cmail_header_detail_pane_t2

0x0001,

0xfda6,	// (0x0009afc0) list_single_cmail_header_detail_pane_t_ParamLimits

0xfda6,	// (0x0009afc0) list_single_cmail_header_detail_pane_t

0x8a03,	// (0x00093c1d) phacti_term_pane_t2_ParamLimits

0x8a03,	// (0x00093c1d) phacti_term_pane_t2

0x0001,

0xfdb0,	// (0x0009afca) phacti_term_pane_t_ParamLimits

0xfdb0,	// (0x0009afca) phacti_term_pane_t

0xead4,	// (0x00099cee) aid_size_list_single_double

0x8c57,	// (0x00093e71) popup_ezdial_listscroll_window

0x8c72,	// (0x00093e8c) popup_number_entry_window_cp01

0xb402,	// (0x0009661c) bg_popup_call_pane_cp09

0xeae0,	// (0x00099cfa) ezdial_list_pane

0xeae8,	// (0x00099d02) scroll_pane_cp23

0xc81e,	// (0x00097a38) bg_button_pane_cp028_ParamLimits

0xc81e,	// (0x00097a38) bg_button_pane_cp028

0x8c80,	// (0x00093e9a) cmail_ddmenu_btn01_pane_g1_ParamLimits

0x8c80,	// (0x00093e9a) cmail_ddmenu_btn01_pane_g1

0x8c8c,	// (0x00093ea6) cmail_ddmenu_btn01_pane_g2_ParamLimits

0x8c8c,	// (0x00093ea6) cmail_ddmenu_btn01_pane_g2

0x0001,

0xfe28,	// (0x0009b042) cmail_ddmenu_btn01_pane_g_ParamLimits

0xfe28,	// (0x0009b042) cmail_ddmenu_btn01_pane_g

0xeaf0,	// (0x00099d0a) cmail_ddmenu_btn01_pane_t1_ParamLimits

0xeaf0,	// (0x00099d0a) cmail_ddmenu_btn01_pane_t1

0xc81e,	// (0x00097a38) bg_button_pane_cp029_ParamLimits

0xc81e,	// (0x00097a38) bg_button_pane_cp029

0x8c98,	// (0x00093eb2) cmail_ddmenu_btn02_pane_g1_ParamLimits

0x8c98,	// (0x00093eb2) cmail_ddmenu_btn02_pane_g1

0x8cb0,	// (0x00093eca) cmail_ddmenu_btn02_pane_t1_ParamLimits

0x8cb0,	// (0x00093eca) cmail_ddmenu_btn02_pane_t1

0xa4a9,	// (0x000956c3) bg_button_pane_cp031_ParamLimits

0xa4a9,	// (0x000956c3) bg_button_pane_cp031

0x8c98,	// (0x00093eb2) cmail_ddmenu_btn03_pane_g1_ParamLimits

0x8c98,	// (0x00093eb2) cmail_ddmenu_btn03_pane_g1

0x8cb0,	// (0x00093eca) cmail_ddmenu_btn03_pane_t1_ParamLimits

0x8cb0,	// (0x00093eca) cmail_ddmenu_btn03_pane_t1

0x616d,	// (0x00091387) cell_dialer2_keypad_pane_t1_ParamLimits

0x6187,	// (0x000913a1) cell_dialer2_keypad_pane_t1_copy1_ParamLimits

0x6187,	// (0x000913a1) cell_dialer2_keypad_pane_t1_copy1

0x7ef8,	// (0x00093112) ncimui_group_button_pane

0xa4a9,	// (0x000956c3) main_sp_fs_calendar_pane_ParamLimits

0x88b6,	// (0x00093ad0) list_single_cmail_header_caption_pane_ParamLimits

0xa3da,	// (0x000955f4) aid_recal_txt_sm_pane

0x973f,	// (0x00094959) mian_recal_day_pane

0x8aaa,	// (0x00093cc4) popup_sp_fs_cale_preview_window_ParamLimits

0xeb05,	// (0x00099d1f) list_recal_day_pane

0xa3fe,	// (0x00095618) list_single_recal_day_pane_ParamLimits

0xa3fe,	// (0x00095618) list_single_recal_day_pane

0xeb2c,	// (0x00099d46) list_single_recal_day_pane_g1_ParamLimits

0xeb2c,	// (0x00099d46) list_single_recal_day_pane_g1

0xa410,	// (0x0009562a) list_single_recal_day_pane_g2_ParamLimits

0xa410,	// (0x0009562a) list_single_recal_day_pane_g2

0xa420,	// (0x0009563a) list_single_recal_day_pane_g3_ParamLimits

0xa420,	// (0x0009563a) list_single_recal_day_pane_g3

0x0e0e,	// (0x0008c028) list_single_recal_day_pane_g4_ParamLimits

0x0e0e,	// (0x0008c028) list_single_recal_day_pane_g4

0xa42c,	// (0x00095646) list_single_recal_day_pane_g5_ParamLimits

0xa42c,	// (0x00095646) list_single_recal_day_pane_g5

0xa43c,	// (0x00095656) list_single_recal_day_pane_g6_ParamLimits

0xa43c,	// (0x00095656) list_single_recal_day_pane_g6

0x0004,

0xfe37,	// (0x0009b051) list_single_recal_day_pane_g_ParamLimits

0xfe37,	// (0x0009b051) list_single_recal_day_pane_g

0xa450,	// (0x0009566a) list_single_recal_day_pane_t1

0xa462,	// (0x0009567c) list_single_recal_day_pane_t2

0x0001,

0xfe42,	// (0x0009b05c) list_single_recal_day_pane_t

0x8cd4,	// (0x00093eee) ncimui_query_button_pane_ParamLimits

0x8cd4,	// (0x00093eee) ncimui_query_button_pane

0x8ce4,	// (0x00093efe) ncimui_query_button_pane_t1_ParamLimits

0x8ce4,	// (0x00093efe) ncimui_query_button_pane_t1

0xeb38,	// (0x00099d52) ncimui_query_button_pane_t2_ParamLimits

0xeb38,	// (0x00099d52) ncimui_query_button_pane_t2

0x0001,

0xfe47,	// (0x0009b061) ncimui_query_button_pane_t_ParamLimits

0xfe47,	// (0x0009b061) ncimui_query_button_pane_t

0x8cf7,	// (0x00093f11) query_button_pane_ParamLimits

0x8cf7,	// (0x00093f11) query_button_pane

0x973f,	// (0x00094959) bg_button_pane_cp0028

0xeb4b,	// (0x00099d65) query_button_pane_t1

0x41da,	// (0x0008f3f4) main_tport_pane_ParamLimits

0x8765,	// (0x0009397f) bg_popup_window_pane_cp01_ParamLimits

0x8765,	// (0x0009397f) bg_popup_window_pane_cp01

0x8780,	// (0x0009399a) heading_pane_cp08_ParamLimits

0x8780,	// (0x0009399a) heading_pane_cp08

0x8793,	// (0x000939ad) heading_pane_cp07_ParamLimits

0x8793,	// (0x000939ad) heading_pane_cp07

0x883a,	// (0x00093a54) cell_tport_appsw_pane_g2

0x0002,

0xfd93,	// (0x0009afad) cell_tport_appsw_pane_g

0x02f6,	// (0x0008b510) input_candi_list_open_g1

0xad51,	// (0x00095f6b) list_cale_time_pane_g6_ParamLimits

0xad51,	// (0x00095f6b) list_cale_time_pane_g6

0x4f9d,	// (0x000901b7) aid_size_touch_calib_1_ParamLimits

0x4f9d,	// (0x000901b7) aid_size_touch_calib_1

0x4faf,	// (0x000901c9) aid_size_touch_calib_2_ParamLimits

0x4faf,	// (0x000901c9) aid_size_touch_calib_2

0x4fc7,	// (0x000901e1) aid_size_touch_calib_3_ParamLimits

0x4fc7,	// (0x000901e1) aid_size_touch_calib_3

0x4fe5,	// (0x000901ff) aid_size_touch_calib_4_ParamLimits

0x4fe5,	// (0x000901ff) aid_size_touch_calib_4

0x4ffd,	// (0x00090217) main_touch_calib_button_group_pane_ParamLimits

0x4ffd,	// (0x00090217) main_touch_calib_button_group_pane

0x5015,	// (0x0009022f) main_touch_calib_pane_g1_ParamLimits

0x5027,	// (0x00090241) main_touch_calib_pane_g2_ParamLimits

0x5039,	// (0x00090253) main_touch_calib_pane_g3_ParamLimits

0x504b,	// (0x00090265) main_touch_calib_pane_g4_ParamLimits

0xf756,	// (0x0009a970) main_touch_calib_pane_g_ParamLimits

0x505d,	// (0x00090277) main_touch_calib_pane_t1_ParamLimits

0x5077,	// (0x00090291) main_touch_calib_pane_t2_ParamLimits

0x5091,	// (0x000902ab) main_touch_calib_pane_t3_ParamLimits

0x50a5,	// (0x000902bf) main_touch_calib_pane_t4_ParamLimits

0x50b9,	// (0x000902d3) main_touch_calib_pane_t5_ParamLimits

0xf75f,	// (0x0009a979) main_touch_calib_pane_t_ParamLimits

0xcf88,	// (0x000981a2) list_single_fp_cale_pane_g3_ParamLimits

0xcf88,	// (0x000981a2) list_single_fp_cale_pane_g3

0xa4a9,	// (0x000956c3) bg_button_pane_cp012_ParamLimits

0xa4a9,	// (0x000956c3) bg_vkb2_func_pane_cp03_ParamLimits

0x7109,	// (0x00092323) cell_vitu2_function_top_pane_g1_ParamLimits

0xa4a9,	// (0x000956c3) bg_vkb2_func_pane_cp04_ParamLimits

0x7e86,	// (0x000930a0) main_ncimui_button_group_pane_ParamLimits

0x7e86,	// (0x000930a0) main_ncimui_button_group_pane

0x7ee6,	// (0x00093100) main_ncimui_pane_t3_ParamLimits

0x7ee6,	// (0x00093100) main_ncimui_pane_t3

0xe879,	// (0x00099a93) phacti_button_group_pane

0xead4,	// (0x00099cee) aid_size_list_single_double_ParamLimits

0x8c57,	// (0x00093e71) popup_ezdial_listscroll_window_ParamLimits

0x8c72,	// (0x00093e8c) popup_number_entry_window_cp01_ParamLimits

0x8d0a,	// (0x00093f24) phacti_button_pane_ParamLimits

0x8d0a,	// (0x00093f24) phacti_button_pane

0x973f,	// (0x00094959) bg_button_pane_cp14

0xeb59,	// (0x00099d73) phacti_button_pane_t1

0x8d1b,	// (0x00093f35) main_touch_calib_button_pane_ParamLimits

0x8d1b,	// (0x00093f35) main_touch_calib_button_pane

0xa766,	// (0x00095980) bg_button_pane_cp18_ParamLimits

0xa766,	// (0x00095980) bg_button_pane_cp18

0xeb67,	// (0x00099d81) main_touch_calib_button_pane_t1_ParamLimits

0xeb67,	// (0x00099d81) main_touch_calib_button_pane_t1

0xeb7d,	// (0x00099d97) main_touch_calib_button_pane_t2_ParamLimits

0xeb7d,	// (0x00099d97) main_touch_calib_button_pane_t2

0x0001,

0xfe4c,	// (0x0009b066) main_touch_calib_button_pane_t_ParamLimits

0xfe4c,	// (0x0009b066) main_touch_calib_button_pane_t

0x973f,	// (0x00094959) cell_ncimui_button_pane

0x973f,	// (0x00094959) bg_button_pane_cp032

0xeb9b,	// (0x00099db5) cell_ncimui_button_pane_t1

0xa183,	// (0x0009539d) image3_infobar_pane_ParamLimits

0xa183,	// (0x0009539d) image3_infobar_pane

0x82b4,	// (0x000934ce) fs_bigclock_status_pane_ParamLimits

0x82b4,	// (0x000934ce) fs_bigclock_status_pane

0x82c1,	// (0x000934db) main_fs_bigclock_clock_pane_ParamLimits

0x82c1,	// (0x000934db) main_fs_bigclock_clock_pane

0x82dd,	// (0x000934f7) main_fs_bigclock_indi_pane_ParamLimits

0x82dd,	// (0x000934f7) main_fs_bigclock_indi_pane

0x82f6,	// (0x00093510) main_fs_bigclock_swipe_pane_ParamLimits

0x82f6,	// (0x00093510) main_fs_bigclock_swipe_pane

0x973f,	// (0x00094959) main_fs_clock_dumped_data

0xe3df,	// (0x000995f9) list_single_fs_bigclock_indicator_pane_g1_ParamLimits

0xe3df,	// (0x000995f9) list_single_fs_bigclock_indicator_pane_g1

0xe3fa,	// (0x00099614) list_single_fs_bigclock_indicator_pane_g2_ParamLimits

0xe3fa,	// (0x00099614) list_single_fs_bigclock_indicator_pane_g2

0xe414,	// (0x0009962e) list_single_fs_bigclock_indicator_pane_g3_ParamLimits

0xe414,	// (0x0009962e) list_single_fs_bigclock_indicator_pane_g3

0xe42e,	// (0x00099648) list_single_fs_bigclock_indicator_pane_g4_ParamLimits

0xe42e,	// (0x00099648) list_single_fs_bigclock_indicator_pane_g4

0x0004,

0xfc74,	// (0x0009ae8e) list_single_fs_bigclock_indicator_pane_g_ParamLimits

0xfc74,	// (0x0009ae8e) list_single_fs_bigclock_indicator_pane_g

0xe457,	// (0x00099671) list_single_fs_bigclock_indicator_pane_t1_ParamLimits

0xe457,	// (0x00099671) list_single_fs_bigclock_indicator_pane_t1

0xe47f,	// (0x00099699) list_single_fs_bigclock_indicator_pane_t2_ParamLimits

0xe47f,	// (0x00099699) list_single_fs_bigclock_indicator_pane_t2

0xe4a7,	// (0x000996c1) list_single_fs_bigclock_indicator_pane_t3_ParamLimits

0xe4a7,	// (0x000996c1) list_single_fs_bigclock_indicator_pane_t3

0xe4cf,	// (0x000996e9) list_single_fs_bigclock_indicator_pane_t4_ParamLimits

0xe4cf,	// (0x000996e9) list_single_fs_bigclock_indicator_pane_t4

0x0004,

0xfc7f,	// (0x0009ae99) list_single_fs_bigclock_indicator_pane_t_ParamLimits

0xfc7f,	// (0x0009ae99) list_single_fs_bigclock_indicator_pane_t

0xeba9,	// (0x00099dc3) image3_infobar_fav_pane_ParamLimits

0xeba9,	// (0x00099dc3) image3_infobar_fav_pane

0xebb9,	// (0x00099dd3) image3_infobar_loc_pane_ParamLimits

0xebb9,	// (0x00099dd3) image3_infobar_loc_pane

0xebcd,	// (0x00099de7) image3_infobar_time_pane_ParamLimits

0xebcd,	// (0x00099de7) image3_infobar_time_pane

0xcc28,	// (0x00097e42) image3_infobar_time_pane_g1

0xebdd,	// (0x00099df7) image3_infobar_time_pane_t1

0xcc28,	// (0x00097e42) image3_infobar_loc_pane_g1

0xebeb,	// (0x00099e05) image3_infobar_loc_pane_g2

0x0001,

0xfe51,	// (0x0009b06b) image3_infobar_loc_pane_g

0xebf3,	// (0x00099e0d) image3_infobar_loc_pane_t1

0xcc28,	// (0x00097e42) image3_infobar_fav_pane_g1

0xec01,	// (0x00099e1b) image3_infobar_fav_pane_g2

0x0001,

0xfe56,	// (0x0009b070) image3_infobar_fav_pane_g

0xec09,	// (0x00099e23) fs_bigclock_status_battery_pane

0xec12,	// (0x00099e2c) fs_bigclock_status_signal_pane

0xec1b,	// (0x00099e35) fs_bigclock_status_title_pane

0xec24,	// (0x00099e3e) fs_bigclock_status_signal_pane_g1

0xec2d,	// (0x00099e47) fs_bigclock_status_signal_pane_g2

0x0001,

0xfe5b,	// (0x0009b075) fs_bigclock_status_signal_pane_g

0xec35,	// (0x00099e4f) fs_bigclock_status_battery_pane_g1

0xec3e,	// (0x00099e58) fs_bigclock_status_battery_pane_g2

0x0001,

0xfe60,	// (0x0009b07a) fs_bigclock_status_battery_pane_g

0xec46,	// (0x00099e60) fs_bigclock_status_title_pane_t1

0xcc28,	// (0x00097e42) main_fs_bigclock_clock_pane_g1

0x8d30,	// (0x00093f4a) main_fs_bigclock_clock_pane_g2

0x8d30,	// (0x00093f4a) main_fs_bigclock_clock_pane_g3

0x8d30,	// (0x00093f4a) main_fs_bigclock_clock_pane_g4

0x0003,

0xfe65,	// (0x0009b07f) main_fs_bigclock_clock_pane_g

0x8d38,	// (0x00093f52) main_fs_bigclock_clock_pane_t1

0x8d46,	// (0x00093f60) main_fs_bigclock_clock_pane_t2

0x0001,

0xfe6e,	// (0x0009b088) main_fs_bigclock_clock_pane_t

0xec54,	// (0x00099e6e) list_single_fs_bigclock_indicator_pane_ParamLimits

0xec54,	// (0x00099e6e) list_single_fs_bigclock_indicator_pane

0x8d55,	// (0x00093f6f) list_single_fs_bigclock_pane_ParamLimits

0x8d55,	// (0x00093f6f) list_single_fs_bigclock_pane

0xec6e,	// (0x00099e88) main_fs_bigclock_indicator_pane_t1

0xec7d,	// (0x00099e97) list_single_fs_bigclock_pane_g1

0xec85,	// (0x00099e9f) list_single_fs_bigclock_pane_t1

0xcc28,	// (0x00097e42) main_fs_bigclock_swipe_pane_g1

0xecc8,	// (0x00099ee2) main_fs_bigclock_swipe_pane_g2

0x0001,

0xfe7f,	// (0x0009b099) main_fs_bigclock_swipe_pane_g

0xecd0,	// (0x00099eea) main_fs_bigclock_swipe_pane_t1_ParamLimits

0xecd0,	// (0x00099eea) main_fs_bigclock_swipe_pane_t1

0x315f,	// (0x0008e379) call_type_pane_ParamLimits

0x973f,	// (0x00094959) main_btmg_pane

0x8b92,	// (0x00093dac) list_single_cale_mrui_row_pane_g2_ParamLimits

0x8b92,	// (0x00093dac) list_single_cale_mrui_row_pane_g2

0x0002,

0xfdf2,	// (0x0009b00c) list_single_cale_mrui_row_pane_g_ParamLimits

0xfdf2,	// (0x0009b00c) list_single_cale_mrui_row_pane_g

0xa3ed,	// (0x00095607) list_recal_vselct_arw_lo_pane

0xeb24,	// (0x00099d3e) list_recal_vselct_arw_up_pane

0xa3f5,	// (0x0009560f) list_recal_vselct_pane

0x8db8,	// (0x00093fd2) btmg_button_pane

0x8dc2,	// (0x00093fdc) main_btmg_pane_g1

0x973f,	// (0x00094959) bg_button_pane_cp044

0xeced,	// (0x00099f07) btmg_button_pane_t1

0xc80a,	// (0x00097a24) aid_listscroll_gen

0xa4a9,	// (0x000956c3) main_cntbar_detail_pane

0xe7c5,	// (0x000999df) list_cmail_folder_pane

0xbfa3,	// (0x000971bd) sp_fs_scroll_pane_cp03_ParamLimits

0x0e2e,	// (0x0008c048) list_single_fs_dyc_pane_cp01_ParamLimits

0x0e2e,	// (0x0008c048) list_single_fs_dyc_pane_cp01

0xecfb,	// (0x00099f15) aid_size_cmail_indent

0xa474,	// (0x0009568e) list_single_dyc_row_pane_cp01

0x8df8,	// (0x00094012) cntbar_detail_list_pane_ParamLimits

0x8df8,	// (0x00094012) cntbar_detail_list_pane

0x8e44,	// (0x0009405e) main_cntbar_detail_cont_pane_ParamLimits

0x8e44,	// (0x0009405e) main_cntbar_detail_cont_pane

0xbfa3,	// (0x000971bd) scroll_pane_cp032_ParamLimits

0xbfa3,	// (0x000971bd) scroll_pane_cp032

0x8e58,	// (0x00094072) cntbar_detail_list_event_pane_ParamLimits

0x8e58,	// (0x00094072) cntbar_detail_list_event_pane

0x8e08,	// (0x00094022) cntbar_detail_list_shct_pane

0xabd4,	// (0x00095dee) aid_list_gen

0xed04,	// (0x00099f1e) aid_scroll

0xed0d,	// (0x00099f27) aid_size_touch_scroll_bar

0x062d,	// (0x0008b847) aid_list_double

0xe793,	// (0x000999ad) aid_list_single

0x773c,	// (0x00092956) aid_list_single_lg

0xa47d,	// (0x00095697) aid_list_z_g_a_sm

0xa485,	// (0x0009569f) aid_list_z_g_d

0xa48d,	// (0x000956a7) aid_txt_z_prm

0x0e46,	// (0x0008c060) aid_txt_z_prm_cp01

0x0e54,	// (0x0008c06e) aid_txt_z_sec

0x8e68,	// (0x00094082) main_cntbar_detail_cont_pane_g1_ParamLimits

0x8e68,	// (0x00094082) main_cntbar_detail_cont_pane_g1

0x8e7c,	// (0x00094096) main_cntbar_detail_cont_pane_g2_ParamLimits

0x8e7c,	// (0x00094096) main_cntbar_detail_cont_pane_g2

0x0001,

0xfe84,	// (0x0009b09e) main_cntbar_detail_cont_pane_g_ParamLimits

0xfe84,	// (0x0009b09e) main_cntbar_detail_cont_pane_g

0xed16,	// (0x00099f30) main_cntbar_detail_cont_pane_t1

0xed24,	// (0x00099f3e) main_cntbar_detail_cont_pane_t2

0xed32,	// (0x00099f4c) main_cntbar_detail_cont_pane_t3

0x0002,

0xfe89,	// (0x0009b0a3) main_cntbar_detail_cont_pane_t

0x8e8c,	// (0x000940a6) cell_cntbar_detail_list_shct_pane_ParamLimits

0x8e8c,	// (0x000940a6) cell_cntbar_detail_list_shct_pane

0xed40,	// (0x00099f5a) cntbar_detail_list_shct_pane_g1

0xed49,	// (0x00099f63) cntbar_detail_list_shct_pane_g2

0x0001,

0xfe90,	// (0x0009b0aa) cntbar_detail_list_shct_pane_g

0x8ea0,	// (0x000940ba) cntbar_detail_list_event_pane_g1_ParamLimits

0x8ea0,	// (0x000940ba) cntbar_detail_list_event_pane_g1

0x8eac,	// (0x000940c6) cntbar_detail_list_event_pane_g2_ParamLimits

0x8eac,	// (0x000940c6) cntbar_detail_list_event_pane_g2

0x0005,

0xfe95,	// (0x0009b0af) cntbar_detail_list_event_pane_g_ParamLimits

0xfe95,	// (0x0009b0af) cntbar_detail_list_event_pane_g

0x8f18,	// (0x00094132) cntbar_detail_list_event_pane_t1_ParamLimits

0x8f18,	// (0x00094132) cntbar_detail_list_event_pane_t1

0x8f2d,	// (0x00094147) cntbar_detail_list_event_pane_t2_ParamLimits

0x8f2d,	// (0x00094147) cntbar_detail_list_event_pane_t2

0x0002,

0xfea2,	// (0x0009b0bc) cntbar_detail_list_event_pane_t_ParamLimits

0xfea2,	// (0x0009b0bc) cntbar_detail_list_event_pane_t

0xcc28,	// (0x00097e42) cell_cntbar_detail_list_shct_pane_g1

0xb3ba,	// (0x000965d4) navi_pane_mv_g3

0xa4a9,	// (0x000956c3) main_cntbar_detail_pane_ParamLimits

0x973f,	// (0x00094959) main_notif_wgt_pane

0x9f99,	// (0x000951b3) aid_tch_main_mp4_pane_g4

0xa17b,	// (0x00095395) popup_slider_window_cp02

0xa3e3,	// (0x000955fd) list_recal_day_event_pane

0x8dcc,	// (0x00093fe6) cntbar_detail_btn_pane_ParamLimits

0x8dcc,	// (0x00093fe6) cntbar_detail_btn_pane

0x8de2,	// (0x00093ffc) cntbar_detail_btn_pane_cp01_ParamLimits

0x8de2,	// (0x00093ffc) cntbar_detail_btn_pane_cp01

0x8e08,	// (0x00094022) cntbar_detail_list_shct_pane_ParamLimits

0x8e18,	// (0x00094032) cntbar_detail_pane_g1_ParamLimits

0x8e18,	// (0x00094032) cntbar_detail_pane_g1

0x8e28,	// (0x00094042) cntbar_detail_pane_t1_ParamLimits

0x8e28,	// (0x00094042) cntbar_detail_pane_t1

0x8eb8,	// (0x000940d2) cntbar_detail_list_event_pane_g3_ParamLimits

0x8eb8,	// (0x000940d2) cntbar_detail_list_event_pane_g3

0x8ed0,	// (0x000940ea) cntbar_detail_list_event_pane_g4_ParamLimits

0x8ed0,	// (0x000940ea) cntbar_detail_list_event_pane_g4

0x8ee8,	// (0x00094102) cntbar_detail_list_event_pane_g5_ParamLimits

0x8ee8,	// (0x00094102) cntbar_detail_list_event_pane_g5

0x8f00,	// (0x0009411a) cntbar_detail_list_event_pane_g6_ParamLimits

0x8f00,	// (0x0009411a) cntbar_detail_list_event_pane_g6

0x8f42,	// (0x0009415c) cntbar_detail_list_event_pane_t3_ParamLimits

0x8f42,	// (0x0009415c) cntbar_detail_list_event_pane_t3

0x8f54,	// (0x0009416e) popup_notif_wgt_window_ParamLimits

0x8f54,	// (0x0009416e) popup_notif_wgt_window

0x8f6d,	// (0x00094187) popup_submenu_window_cp01_ParamLimits

0x8f6d,	// (0x00094187) popup_submenu_window_cp01

0xb402,	// (0x0009661c) bg_popup_window_pane_cp10

0xed52,	// (0x00099f6c) listscroll_notif_wgt_pane

0xed63,	// (0x00099f7d) list_notif_wgt_window

0xed6c,	// (0x00099f86) scroll_pane_cp033

0x8f7f,	// (0x00094199) list_notif_wgt_row_pane_ParamLimits

0x8f7f,	// (0x00094199) list_notif_wgt_row_pane

0xed75,	// (0x00099f8f) aid_size_list_notif_wgt_del

0xed82,	// (0x00099f9c) list_notif_wgt_row_pane_g1

0xed8e,	// (0x00099fa8) list_notif_wgt_row_pane_g2

0xed9a,	// (0x00099fb4) list_notif_wgt_row_pane_g3

0x0002,

0xfea9,	// (0x0009b0c3) list_notif_wgt_row_pane_g

0xeda7,	// (0x00099fc1) list_notif_wgt_row_pane_t1

0xedbc,	// (0x00099fd6) list_notif_wgt_row_pane_t2

0xedce,	// (0x00099fe8) list_notif_wgt_row_pane_t3

0x0002,

0xfeb0,	// (0x0009b0ca) list_notif_wgt_row_pane_t

0xd8af,	// (0x00098ac9) list_recal_day_event_pane_g1

0xede0,	// (0x00099ffa) list_recal_day_event_pane_t1

0x973f,	// (0x00094959) bg_button_pane_cp045

0xedef,	// (0x0009a009) cntbar_detail_btn_pane_t1

0xc81e,	// (0x00097a38) main_callh_pane_ParamLimits

0xc81e,	// (0x00097a38) main_callh_pane

0x973f,	// (0x00094959) main_coverflow0_pane

0x973f,	// (0x00094959) main_wgtman_pane

0x8304,	// (0x0009351e) main_fs_bigclock_unlock_btn_pane_ParamLimits

0x8304,	// (0x0009351e) main_fs_bigclock_unlock_btn_pane

0x8832,	// (0x00093a4c) bg_button_pane_cp16

0x8842,	// (0x00093a5c) cell_tport_appsw_pane_g3

0x8f8f,	// (0x000941a9) cf0_flow_pane_ParamLimits

0x8f8f,	// (0x000941a9) cf0_flow_pane

0xedfd,	// (0x0009a017) listscroll_cf0_pane

0xee08,	// (0x0009a022) main_cf0_pane_g1

0x8fa4,	// (0x000941be) main_cf0_pane_t1_ParamLimits

0x8fa4,	// (0x000941be) main_cf0_pane_t1

0x8fbb,	// (0x000941d5) main_cf0_pane_t2_ParamLimits

0x8fbb,	// (0x000941d5) main_cf0_pane_t2

0x0001,

0xfebc,	// (0x0009b0d6) main_cf0_pane_t_ParamLimits

0xfebc,	// (0x0009b0d6) main_cf0_pane_t

0xee1a,	// (0x0009a034) scroll_pane_cp11

0x8fd2,	// (0x000941ec) cf0_flow_pane_g1

0x8fda,	// (0x000941f4) cf0_flow_pane_g2

0x0001,

0xfec1,	// (0x0009b0db) cf0_flow_pane_g

0x8fe2,	// (0x000941fc) cf0_flow_pane_t1

0x973f,	// (0x00094959) main_call6_pane

0x973f,	// (0x00094959) main_calllock_pane

0x8ff0,	// (0x0009420a) call6_btn_grp_pane_ParamLimits

0x8ff0,	// (0x0009420a) call6_btn_grp_pane

0x900a,	// (0x00094224) call6_pane_g1_ParamLimits

0x900a,	// (0x00094224) call6_pane_g1

0x901f,	// (0x00094239) popup_call6_1st_window_ParamLimits

0x901f,	// (0x00094239) popup_call6_1st_window

0x9030,	// (0x0009424a) popup_call6_2nd_window_ParamLimits

0x9030,	// (0x0009424a) popup_call6_2nd_window

0x9041,	// (0x0009425b) cell_call6_btn_pane_ParamLimits

0x9041,	// (0x0009425b) cell_call6_btn_pane

0xb402,	// (0x0009661c) bg_popup_call2_in_pane_cp03

0xee25,	// (0x0009a03f) popup_call6_1st_window_g1

0xee2d,	// (0x0009a047) popup_call6_1st_window_g2

0xee35,	// (0x0009a04f) popup_call6_1st_window_g3

0x0002,

0xfec6,	// (0x0009b0e0) popup_call6_1st_window_g

0xee3d,	// (0x0009a057) popup_call6_1st_window_t1

0xee4c,	// (0x0009a066) popup_call6_1st_window_t2

0xee5c,	// (0x0009a076) popup_call6_1st_window_t3

0x0002,

0xfecd,	// (0x0009b0e7) popup_call6_1st_window_t

0xb402,	// (0x0009661c) bg_popup_call2_in_pane_cp04

0xee25,	// (0x0009a03f) popup_call6_2nd_window_g1

0xee2d,	// (0x0009a047) popup_call6_2nd_window_g2

0xee35,	// (0x0009a04f) popup_call6_2nd_window_g3

0x0002,

0xfec6,	// (0x0009b0e0) popup_call6_2nd_window_g

0xee3d,	// (0x0009a057) popup_call6_2nd_window_t1

0x973f,	// (0x00094959) bg_button_pane_cp15

0xee6c,	// (0x0009a086) cell_call6_btn_pane_g1

0xee75,	// (0x0009a08f) cell_call6_btn_pane_t1

0x9055,	// (0x0009426f) listscroll_wgtman_pane_ParamLimits

0x9055,	// (0x0009426f) listscroll_wgtman_pane

0x9076,	// (0x00094290) wgtman_btn_pane_ParamLimits

0x9076,	// (0x00094290) wgtman_btn_pane

0xb15a,	// (0x00096374) aid_scroll_copy1

0xee84,	// (0x0009a09e) list_wgtman_pane

0x90b9,	// (0x000942d3) wgtman_btn_pane_g1_ParamLimits

0x90b9,	// (0x000942d3) wgtman_btn_pane_g1

0x90e5,	// (0x000942ff) wgtman_btn_pane_t1_ParamLimits

0x90e5,	// (0x000942ff) wgtman_btn_pane_t1

0xee8e,	// (0x0009a0a8) wgtman_btn_pane_t2_ParamLimits

0xee8e,	// (0x0009a0a8) wgtman_btn_pane_t2

0x0001,

0xfed4,	// (0x0009b0ee) wgtman_btn_pane_t_ParamLimits

0xfed4,	// (0x0009b0ee) wgtman_btn_pane_t

0x9122,	// (0x0009433c) listrow_wgtman_pane_ParamLimits

0x9122,	// (0x0009433c) listrow_wgtman_pane

0x9135,	// (0x0009434f) listrow_wgtman_pane_g1

0x9142,	// (0x0009435c) listrow_wgtman_pane_g2

0x0001,

0xfed9,	// (0x0009b0f3) listrow_wgtman_pane_g

0x0e62,	// (0x0008c07c) listrow_wgtman_pane_t1

0x0e7a,	// (0x0008c094) listrow_wgtman_pane_t2

0x0001,

0xfede,	// (0x0009b0f8) listrow_wgtman_pane_t

0x0ea0,	// (0x0008c0ba) wait_bar_pane_cp09

0xeea5,	// (0x0009a0bf) main_calllock_btn_pane

0xeeaf,	// (0x0009a0c9) main_calllock_pane_g1

0x973f,	// (0x00094959) bg_button_pane_cp17

0xeeba,	// (0x0009a0d4) main_calllock_btn_pane_g1

0xeec3,	// (0x0009a0dd) main_calllock_btn_pane_t1

0x973f,	// (0x00094959) main_dialer3_pane

0x973f,	// (0x00094959) main_fmrd2_pane

0xcc28,	// (0x00097e42) main_fs_bigclock_unlock_btn_pane_g1

0xeeda,	// (0x0009a0f4) main_fs_bigclock_unlock_btn_pane_t1

0x9160,	// (0x0009437a) area_fmrd2_info_pane_ParamLimits

0x9160,	// (0x0009437a) area_fmrd2_info_pane

0x9171,	// (0x0009438b) area_fmrd2_visual_pane_ParamLimits

0x9171,	// (0x0009438b) area_fmrd2_visual_pane

0x917f,	// (0x00094399) fmrd2_indi_pane_ParamLimits

0x917f,	// (0x00094399) fmrd2_indi_pane

0x918c,	// (0x000943a6) area_fmrd2_visual_pane_g1

0x9194,	// (0x000943ae) area_fmrd2_visual_pane_t1

0x91a4,	// (0x000943be) area_fmrd2_visual_pane_t2

0x91b4,	// (0x000943ce) area_fmrd2_visual_pane_t3

0x0002,

0xfee8,	// (0x0009b102) area_fmrd2_visual_pane_t

0x91c4,	// (0x000943de) area_fmrd2_info_pane_g1

0x91cc,	// (0x000943e6) area_fmrd2_info_pane_t1

0x91dc,	// (0x000943f6) area_fmrd2_info_pane_t2

0x91ec,	// (0x00094406) area_fmrd2_info_pane_t3

0x91fc,	// (0x00094416) area_fmrd2_info_pane_t4

0x0003,

0xfeef,	// (0x0009b109) area_fmrd2_info_pane_t

0x920a,	// (0x00094424) fmrd2_indi_pane_t1

0x921a,	// (0x00094434) fmrd2_indi_pane_t2

0x922a,	// (0x00094444) fmrd2_indi_pane_t3

0x0002,

0xfef8,	// (0x0009b112) fmrd2_indi_pane_t

0xe43d,	// (0x00099657) list_single_fs_bigclock_indicator_pane_g5_ParamLimits

0xe43d,	// (0x00099657) list_single_fs_bigclock_indicator_pane_g5

0xe4e4,	// (0x000996fe) list_single_fs_bigclock_indicator_pane_t5_ParamLimits

0xe4e4,	// (0x000996fe) list_single_fs_bigclock_indicator_pane_t5

0x8a18,	// (0x00093c32) aid_cell_bcale_month_pane_ParamLimits

0x8a18,	// (0x00093c32) aid_cell_bcale_month_pane

0x8a36,	// (0x00093c50) bcale_month_pane_ParamLimits

0x8a36,	// (0x00093c50) bcale_month_pane

0x8a5a,	// (0x00093c74) bcale_preview_pane_ParamLimits

0x8a5a,	// (0x00093c74) bcale_preview_pane

0xec85,	// (0x00099e9f) list_single_fs_bigclock_pane_t1_ParamLimits

0xeca4,	// (0x00099ebe) list_single_fs_bigclock_pane_t2_ParamLimits

0xeca4,	// (0x00099ebe) list_single_fs_bigclock_pane_t2

0x0001,

0xfe7a,	// (0x0009b094) list_single_fs_bigclock_pane_t_ParamLimits

0xfe7a,	// (0x0009b094) list_single_fs_bigclock_pane_t

0xeed2,	// (0x0009a0ec) main_fs_bigclock_unlock_btn_pane_g2

0x0001,

0xfee3,	// (0x0009b0fd) main_fs_bigclock_unlock_btn_pane_g

0x923a,	// (0x00094454) aid_dia3_key_size_ParamLimits

0x923a,	// (0x00094454) aid_dia3_key_size

0x9249,	// (0x00094463) aid_dia3_listrow_size_ParamLimits

0x9249,	// (0x00094463) aid_dia3_listrow_size

0x925e,	// (0x00094478) dia3_keypad_fun_pane_ParamLimits

0x925e,	// (0x00094478) dia3_keypad_fun_pane

0x927a,	// (0x00094494) dia3_keypad_num_pane_ParamLimits

0x927a,	// (0x00094494) dia3_keypad_num_pane

0x9295,	// (0x000944af) dia3_listscroll_pane_ParamLimits

0x9295,	// (0x000944af) dia3_listscroll_pane

0x92a8,	// (0x000944c2) dia3_numentry_pane_ParamLimits

0x92a8,	// (0x000944c2) dia3_numentry_pane

0xeee8,	// (0x0009a102) dia3_list_pane

0xeef3,	// (0x0009a10d) scroll_pane_cp12

0x973f,	// (0x00094959) bg_dia3_numentry_pane

0x92bc,	// (0x000944d6) dia3_numentry_pane_t1

0x92cb,	// (0x000944e5) cell_dia3_key_num_pane

0x92d3,	// (0x000944ed) cell_dia3_key0_fun_pane_ParamLimits

0x92d3,	// (0x000944ed) cell_dia3_key0_fun_pane

0x92e7,	// (0x00094501) cell_dia3_key1_fun_pane_ParamLimits

0x92e7,	// (0x00094501) cell_dia3_key1_fun_pane

0x92ff,	// (0x00094519) dia3_listrow_pane

0xe14c,	// (0x00099366) bg_dia3_numentry_pane_g1

0x973f,	// (0x00094959) bg_button_pane_cp21

0xeefe,	// (0x0009a118) cell_dia3_key_num_pane_t1

0xef0c,	// (0x0009a126) cell_dia3_key_num_pane_t2

0xef1b,	// (0x0009a135) cell_dia3_key_num_pane_t3

0xef2a,	// (0x0009a144) cell_dia3_key_num_pane_t4

0x0003,

0xfeff,	// (0x0009b119) cell_dia3_key_num_pane_t

0x973f,	// (0x00094959) bg_button_pane_cp19

0x9311,	// (0x0009452b) cell_dia3_key0_fun_pane_g1

0x973f,	// (0x00094959) bg_button_pane_cp20

0x9319,	// (0x00094533) cell_dia3_key1_fun_pane_g1

0x9321,	// (0x0009453b) area_left_week_number_pane

0x932d,	// (0x00094547) area_top_day_name_pane

0x9340,	// (0x0009455a) frame_month_view_pane

0xef39,	// (0x0009a153) grid_month_view_pane

0x9353,	// (0x0009456d) cell_top_day_name_pane_ParamLimits

0x9353,	// (0x0009456d) cell_top_day_name_pane

0x9380,	// (0x0009459a) cell_area_left_week_number_pane_ParamLimits

0x9380,	// (0x0009459a) cell_area_left_week_number_pane

0x9394,	// (0x000945ae) cell_month_view_pane_ParamLimits

0x9394,	// (0x000945ae) cell_month_view_pane

0xef47,	// (0x0009a161) frm_month_g1

0x93c1,	// (0x000945db) frm_month_g2

0x93d4,	// (0x000945ee) frm_month_g3

0x93e7,	// (0x00094601) frm_month_g4

0x93fa,	// (0x00094614) frm_month_g5

0x940d,	// (0x00094627) frm_month_g6

0x9420,	// (0x0009463a) frm_month_g7

0xef54,	// (0x0009a16e) frm_month_g8

0x9433,	// (0x0009464d) frm_month_g9

0x9443,	// (0x0009465d) frm_month_g10

0x9453,	// (0x0009466d) frm_month_g11

0x9463,	// (0x0009467d) frm_month_g12

0x9475,	// (0x0009468f) frm_month_g13

0x9487,	// (0x000946a1) frm_month_g14

0x949b,	// (0x000946b5) frm_month_g15

0x94af,	// (0x000946c9) frm_month_g16

0x000f,

0xff08,	// (0x0009b122) frm_month_g

0xef61,	// (0x0009a17b) cell_top_day_name_pane_t1

0x94c3,	// (0x000946dd) cell_area_left_week_number_pane_g1

0x94cf,	// (0x000946e9) cell_area_left_week_number_pane_t1

0xce88,	// (0x000980a2) cell_month_view_pane_g1

0x94e2,	// (0x000946fc) cell_month_view_pane_t1

0x973f,	// (0x00094959) main_fps_pane

0xe6d4,	// (0x000998ee) cmail_ddmenu_btn02_pane_cp1_ParamLimits

0xe6d4,	// (0x000998ee) cmail_ddmenu_btn02_pane_cp1

0xe6f0,	// (0x0009990a) cmail_ddmenu_btn02_pane_cp2_ParamLimits

0xe6f0,	// (0x0009990a) cmail_ddmenu_btn02_pane_cp2

0x8ca4,	// (0x00093ebe) cmail_ddmenu_btn02_pane_g2_ParamLimits

0x8ca4,	// (0x00093ebe) cmail_ddmenu_btn02_pane_g2

0x0001,

0xfe2d,	// (0x0009b047) cmail_ddmenu_btn02_pane_g_ParamLimits

0xfe2d,	// (0x0009b047) cmail_ddmenu_btn02_pane_g

0x8cc2,	// (0x00093edc) cmail_ddmenu_btn02_pane_t2_ParamLimits

0x8cc2,	// (0x00093edc) cmail_ddmenu_btn02_pane_t2

0x0001,

0xfe32,	// (0x0009b04c) cmail_ddmenu_btn02_pane_t_ParamLimits

0xfe32,	// (0x0009b04c) cmail_ddmenu_btn02_pane_t

0x94f5,	// (0x0009470f) fps_text_pane_ParamLimits

0x94f5,	// (0x0009470f) fps_text_pane

0x950c,	// (0x00094726) main_fps_pane_g1_ParamLimits

0x950c,	// (0x00094726) main_fps_pane_g1

0x9526,	// (0x00094740) wait_bar_pane_cp010_ParamLimits

0x9526,	// (0x00094740) wait_bar_pane_cp010

0x9537,	// (0x00094751) fps_text_pane_t1_ParamLimits

0x9537,	// (0x00094751) fps_text_pane_t1

0xd620,	// (0x0009883a) cam4_image_uncrop_pane_g1

0xd629,	// (0x00098843) cam4_image_uncrop_pane_g2

0x6613,	// (0x0009182d) cam4_image_uncrop_pane_g3

0x661c,	// (0x00091836) cam4_image_uncrop_pane_g4

0x0003,

0xf8ee,	// (0x0009ab08) cam4_image_uncrop_pane_g

0x92ff,	// (0x00094519) dia3_listrow_pane_ParamLimits

0x973f,	// (0x00094959) main_phob2_pane

0x8803,	// (0x00093a1d) cell_tport_appsw_pane_cp02_ParamLimits

0x8803,	// (0x00093a1d) cell_tport_appsw_pane_cp02

0x8817,	// (0x00093a31) cell_tport_appsw_pane_cp03_ParamLimits

0x8817,	// (0x00093a31) cell_tport_appsw_pane_cp03

0x973f,	// (0x00094959) phob2_contact_card_pane

0x973f,	// (0x00094959) phob2_listscroll_pane

0xef74,	// (0x0009a18e) phob2_list_pane

0xef7c,	// (0x0009a196) scroll_pane_cp034

0x954f,	// (0x00094769) phob2_cc_data_pane_ParamLimits

0x954f,	// (0x00094769) phob2_cc_data_pane

0x956e,	// (0x00094788) phob2_cc_listscroll_pane_ParamLimits

0x956e,	// (0x00094788) phob2_cc_listscroll_pane

0x958c,	// (0x000947a6) list_double_large_graphic_phob2_pane_ParamLimits

0x958c,	// (0x000947a6) list_double_large_graphic_phob2_pane

0x959f,	// (0x000947b9) list_double_large_graphic_phob2_pane_g1_ParamLimits

0x959f,	// (0x000947b9) list_double_large_graphic_phob2_pane_g1

0x95b5,	// (0x000947cf) list_double_large_graphic_phob2_pane_g2_ParamLimits

0x95b5,	// (0x000947cf) list_double_large_graphic_phob2_pane_g2

0x0001,

0xff29,	// (0x0009b143) list_double_large_graphic_phob2_pane_g_ParamLimits

0xff29,	// (0x0009b143) list_double_large_graphic_phob2_pane_g

0x0eb2,	// (0x0008c0cc) list_double_large_graphic_phob2_pane_t1_ParamLimits

0x0eb2,	// (0x0008c0cc) list_double_large_graphic_phob2_pane_t1

0x0ec8,	// (0x0008c0e2) list_double_large_graphic_phob2_pane_t2_ParamLimits

0x0ec8,	// (0x0008c0e2) list_double_large_graphic_phob2_pane_t2

0x0001,

0xff2e,	// (0x0009b148) list_double_large_graphic_phob2_pane_t_ParamLimits

0xff2e,	// (0x0009b148) list_double_large_graphic_phob2_pane_t

0x973f,	// (0x00094959) list_highlight_pane_cp024

0x95c1,	// (0x000947db) phob2_cc_button_pane

0x95c9,	// (0x000947e3) phob2_cc_data_pane_g1_ParamLimits

0x95c9,	// (0x000947e3) phob2_cc_data_pane_g1

0x95de,	// (0x000947f8) phob2_cc_data_pane_g2_ParamLimits

0x95de,	// (0x000947f8) phob2_cc_data_pane_g2

0x0001,

0xff33,	// (0x0009b14d) phob2_cc_data_pane_g_ParamLimits

0xff33,	// (0x0009b14d) phob2_cc_data_pane_g

0x95ee,	// (0x00094808) phob2_cc_data_pane_t1_ParamLimits

0x95ee,	// (0x00094808) phob2_cc_data_pane_t1

0x9606,	// (0x00094820) phob2_cc_data_pane_t2_ParamLimits

0x9606,	// (0x00094820) phob2_cc_data_pane_t2

0x961e,	// (0x00094838) phob2_cc_data_pane_t3_ParamLimits

0x961e,	// (0x00094838) phob2_cc_data_pane_t3

0x0002,

0xff38,	// (0x0009b152) phob2_cc_data_pane_t_ParamLimits

0xff38,	// (0x0009b152) phob2_cc_data_pane_t

0xef84,	// (0x0009a19e) phob2_cc_list_pane_ParamLimits

0xef84,	// (0x0009a19e) phob2_cc_list_pane

0xda69,	// (0x00098c83) scroll_pane_cp035_ParamLimits

0xda69,	// (0x00098c83) scroll_pane_cp035

0xa4a9,	// (0x000956c3) bg_button_pane_cp033

0xef90,	// (0x0009a1aa) phob2_cc_button_pane_g1

0xef9c,	// (0x0009a1b6) phob2_cc_button_pane_t1

0xefb1,	// (0x0009a1cb) phob2_cc_button_pane_t2

0x0001,

0xff3f,	// (0x0009b159) phob2_cc_button_pane_t

0x9636,	// (0x00094850) list_double_large_graphic_phob2_cc_pane_ParamLimits

0x9636,	// (0x00094850) list_double_large_graphic_phob2_cc_pane

0x9649,	// (0x00094863) list_double_large_graphic_phob2_cc_pane_g1_ParamLimits

0x9649,	// (0x00094863) list_double_large_graphic_phob2_cc_pane_g1

0x0edd,	// (0x0008c0f7) list_double_large_graphic_phob2_cc_pane_g2_ParamLimits

0x0edd,	// (0x0008c0f7) list_double_large_graphic_phob2_cc_pane_g2

0x0ee9,	// (0x0008c103) list_double_large_graphic_phob2_cc_pane_g3_ParamLimits

0x0ee9,	// (0x0008c103) list_double_large_graphic_phob2_cc_pane_g3

0x0ef5,	// (0x0008c10f) list_double_large_graphic_phob2_cc_pane_g4_ParamLimits

0x0ef5,	// (0x0008c10f) list_double_large_graphic_phob2_cc_pane_g4

0x0f01,	// (0x0008c11b) list_double_large_graphic_phob2_cc_pane_g5_ParamLimits

0x0f01,	// (0x0008c11b) list_double_large_graphic_phob2_cc_pane_g5

0x0004,

0xff44,	// (0x0009b15e) list_double_large_graphic_phob2_cc_pane_g_ParamLimits

0xff44,	// (0x0009b15e) list_double_large_graphic_phob2_cc_pane_g

0x0f0d,	// (0x0008c127) list_double_large_graphic_phob2_cc_pane_t1_ParamLimits

0x0f0d,	// (0x0008c127) list_double_large_graphic_phob2_cc_pane_t1

0x0f36,	// (0x0008c150) list_double_large_graphic_phob2_cc_pane_t2_ParamLimits

0x0f36,	// (0x0008c150) list_double_large_graphic_phob2_cc_pane_t2

0x0001,

0xff4f,	// (0x0009b169) list_double_large_graphic_phob2_cc_pane_t_ParamLimits

0xff4f,	// (0x0009b169) list_double_large_graphic_phob2_cc_pane_t

0xefc3,	// (0x0009a1dd) list_highlight_pane_cp025_ParamLimits

0xefc3,	// (0x0009a1dd) list_highlight_pane_cp025

0xa4a9,	// (0x000956c3) bg_button_pane_cp033_ParamLimits

0xef90,	// (0x0009a1aa) phob2_cc_button_pane_g1_ParamLimits

0xef9c,	// (0x0009a1b6) phob2_cc_button_pane_t1_ParamLimits

0xefb1,	// (0x0009a1cb) phob2_cc_button_pane_t2_ParamLimits

0xff3f,	// (0x0009b159) phob2_cc_button_pane_t_ParamLimits

0x11a8,	// (0x0008c3c2) popup_wgtman_window

0xd79d,	// (0x000989b7) scroll_pane_cp038

0x909b,	// (0x000942b5) wgtman_btn_pane_cp_01_ParamLimits

0x909b,	// (0x000942b5) wgtman_btn_pane_cp_01

0xefd1,	// (0x0009a1eb) wgtman_content_pane

0xefda,	// (0x0009a1f4) wgtman_heading_pane

0x973f,	// (0x00094959) bg_heading_pane_cp02

0xefe3,	// (0x0009a1fd) wgtman_heading_pane_g1

0xefeb,	// (0x0009a205) wgtman_heading_pane_t1

0xeff9,	// (0x0009a213) scroll_pane_cp036

0xf001,	// (0x0009a21b) wgtman_list_pane

0xf009,	// (0x0009a223) wgtman_list_pane_t1_ParamLimits

0xf009,	// (0x0009a223) wgtman_list_pane_t1

0xa1d5,	// (0x000953ef) cam4_grid_pane

0x0512,	// (0x0008b72c) bg_button_pane_cp015_ParamLimits

0x72af,	// (0x000924c9) bg_button_pane_cp016_ParamLimits

0x72c2,	// (0x000924dc) bg_button_pane_cp017_ParamLimits

0x72e6,	// (0x00092500) popup_vitu2_query_window_g3_ParamLimits

0x72e6,	// (0x00092500) popup_vitu2_query_window_g3

0x7334,	// (0x0009254e) popup_vitu2_query_window_t6_ParamLimits

0x7334,	// (0x0009254e) popup_vitu2_query_window_t6

0x735f,	// (0x00092579) popup_vitu2_query_window_t7_ParamLimits

0x735f,	// (0x00092579) popup_vitu2_query_window_t7

0xd620,	// (0x0009883a) cam4_grid_pane_g1

0xd629,	// (0x00098843) cam4_grid_pane_g2

0xf025,	// (0x0009a23f) cam4_grid_pane_g3

0xf02e,	// (0x0009a248) cam4_grid_pane_g4

0x0003,

0xff54,	// (0x0009b16e) cam4_grid_pane_g

0x20c7,	// (0x0008d2e1) aid_placing_vt_slider_lsc_ParamLimits

0x23c4,	// (0x0008d5de) vidtel_button_pane_ParamLimits

0x23c4,	// (0x0008d5de) vidtel_button_pane

0xf039,	// (0x0009a253) bg_button_pane_cp034

0x9655,	// (0x0009486f) vidtel_button_pane_g1

0xf043,	// (0x0009a25d) vidtel_button_pane_t1

0xd89f,	// (0x00098ab9) aid_size_vtel_slider_touch

0xda69,	// (0x00098c83) scroll_pane_cp039

0xe18a,	// (0x000993a4) ncim_query_button_pane_cp01_ParamLimits

0xe1a9,	// (0x000993c3) ncimui_query_pane_g1_ParamLimits

0xa4a9,	// (0x000956c3) input_focus_pane_cp012_ParamLimits

0xe1ce,	// (0x000993e8) ncim_query_entry_pane_t1_ParamLimits

0xda69,	// (0x00098c83) scroll_pane_cp039_ParamLimits

0xb2a5,	// (0x000964bf) navi_pane_bcale_mc_g1

0xb2ad,	// (0x000964c7) navi_pane_bcale_mc_t1

0xe739,	// (0x00099953) main_sp_fs_email_pane_g1

0xe745,	// (0x0009995f) main_sp_fs_email_pane_g2

0x0001,

0xfce5,	// (0x0009aeff) main_sp_fs_email_pane_g

0xe996,	// (0x00099bb0) list_single_cale_mrui_row_pane_g3_ParamLimits

0xe996,	// (0x00099bb0) list_single_cale_mrui_row_pane_g3

0x0e24,	// (0x0008c03e) list_single_recal_day_pane_g5_event_pane

0xa448,	// (0x00095662) list_single_recal_day_pane_g7

0xf051,	// (0x0009a26b) list_recal_day_event_pane_cp01

0xf05a,	// (0x0009a274) list_recal_vselct_arw_lo_pane_cp01

0xf062,	// (0x0009a27c) list_recal_vselct_arw_up_pane_cp01

0xf06a,	// (0x0009a284) list_recal_vselct_pane_cp01

0xd8af,	// (0x00098ac9) list_recal_day_event_pane_cp01_g1

0xa49b,	// (0x000956b5) list_recal_day_event_pane_cp01_t1

0xa450,	// (0x0009566a) list_single_recal_day_pane_t1_ParamLimits

0xa462,	// (0x0009567c) list_single_recal_day_pane_t2_ParamLimits

0xfe42,	// (0x0009b05c) list_single_recal_day_pane_t_ParamLimits

0xa682,	// (0x0009589c) bg_notes_pane_ParamLimits

0xa744,	// (0x0009595e) list_notes_pane_ParamLimits

0x14dc,	// (0x0008c6f6) scroll_pane_cp06_ParamLimits

0xa766,	// (0x00095980) main_notes_pane_ParamLimits

0x973f,	// (0x00094959) main_welc_pane

0x965d,	// (0x00094877) main_welc_body_pane_ParamLimits

0x965d,	// (0x00094877) main_welc_body_pane

0x967a,	// (0x00094894) main_welc_opti_pane_ParamLimits

0x967a,	// (0x00094894) main_welc_opti_pane

0x96c3,	// (0x000948dd) main_welc_pane_t1_ParamLimits

0x96c3,	// (0x000948dd) main_welc_pane_t1

0x96e5,	// (0x000948ff) main_welc_body_row_pane_ParamLimits

0x96e5,	// (0x000948ff) main_welc_body_row_pane

0xf074,	// (0x0009a28e) main_welc_opti_row_pane_ParamLimits

0xf074,	// (0x0009a28e) main_welc_opti_row_pane

0xf082,	// (0x0009a29c) main_welc_opti_row_pane_g1

0xf08a,	// (0x0009a2a4) main_welc_opti_row_pane_t1

0xf09a,	// (0x0009a2b4) main_welc_body_row_pane_t1

0xed5b,	// (0x00099f75) popup_notif_wgt_heading_pane

0xed75,	// (0x00099f8f) aid_size_list_notif_wgt_del_ParamLimits

0xed82,	// (0x00099f9c) list_notif_wgt_row_pane_g1_ParamLimits

0xed8e,	// (0x00099fa8) list_notif_wgt_row_pane_g2_ParamLimits

0xed9a,	// (0x00099fb4) list_notif_wgt_row_pane_g3_ParamLimits

0xfea9,	// (0x0009b0c3) list_notif_wgt_row_pane_g_ParamLimits

0xeda7,	// (0x00099fc1) list_notif_wgt_row_pane_t1_ParamLimits

0xedbc,	// (0x00099fd6) list_notif_wgt_row_pane_t2_ParamLimits

0xedce,	// (0x00099fe8) list_notif_wgt_row_pane_t3_ParamLimits

0xfeb0,	// (0x0009b0ca) list_notif_wgt_row_pane_t_ParamLimits

0x9135,	// (0x0009434f) listrow_wgtman_pane_g1_ParamLimits

0x9142,	// (0x0009435c) listrow_wgtman_pane_g2_ParamLimits

0xfed9,	// (0x0009b0f3) listrow_wgtman_pane_g_ParamLimits

0x0e62,	// (0x0008c07c) listrow_wgtman_pane_t1_ParamLimits

0x0e7a,	// (0x0008c094) listrow_wgtman_pane_t2_ParamLimits

0xfede,	// (0x0009b0f8) listrow_wgtman_pane_t_ParamLimits

0x0ea0,	// (0x0008c0ba) wait_bar_pane_cp09_ParamLimits

0x973f,	// (0x00094959) bg_popup_heading_pane_cp02

0xf0a9,	// (0x0009a2c3) popup_notif_wgt_heading_pane_g1

0xf0b1,	// (0x0009a2cb) popup_notif_wgt_heading_pane_t1

0x973f,	// (0x00094959) main_vids_pane

0x973f,	// (0x00094959) vids_listscroll_pane

0x96fb,	// (0x00094915) scroll_pane_cp040

0x973f,	// (0x00094959) vids_list_pane

0x9706,	// (0x00094920) vids_list_double_pane_ParamLimits

0x9706,	// (0x00094920) vids_list_double_pane

0x9717,	// (0x00094931) vids_list_double_pane_g1

0x9720,	// (0x0009493a) vids_list_double_pane_t1

0x972f,	// (0x00094949) vids_list_double_pane_t2

0x0001,

0xff62,	// (0x0009b17c) vids_list_double_pane_t

0xa4a9,	// (0x000956c3) main_ncimui_pane_ParamLimits

0x7e9a,	// (0x000930b4) main_ncimui_pane_g1_ParamLimits

0x7ea6,	// (0x000930c0) main_ncimui_pane_g2_ParamLimits

0x7ea6,	// (0x000930c0) main_ncimui_pane_g2

0x0001,

0xfbea,	// (0x0009ae04) main_ncimui_pane_g_ParamLimits

0xfbea,	// (0x0009ae04) main_ncimui_pane_g

0x9699,	// (0x000948b3) main_welc_pane_g1_ParamLimits

0x9699,	// (0x000948b3) main_welc_pane_g1

0x96ae,	// (0x000948c8) main_welc_pane_g2_ParamLimits

0x96ae,	// (0x000948c8) main_welc_pane_g2

0x0001,

0xff5d,	// (0x0009b177) main_welc_pane_g_ParamLimits

0xff5d,	// (0x0009b177) main_welc_pane_g

0xa682,	// (0x0009589c) listscroll_mce_pane_ParamLimits

0xb3fa,	// (0x00096614) wait_bar_pane_cp10

0xc812,	// (0x00097a2c) main_cale_day_pane_ParamLimits

0xc812,	// (0x00097a2c) main_cale_week_pane_ParamLimits

0xa682,	// (0x0009589c) main_messa_pane_ParamLimits

0x591e,	// (0x00090b38) main_clock2_btn_pane_ParamLimits

0x591e,	// (0x00090b38) main_clock2_btn_pane

0xd010,	// (0x0009822a) main_clock2_btn_pane_cp01_ParamLimits

0xd010,	// (0x0009822a) main_clock2_btn_pane_cp01

0xe967,	// (0x00099b81) list_cale_mrui_pane_ParamLimits

0xee12,	// (0x0009a02c) main_cf0_pane_g2

0x0001,

0xfeb7,	// (0x0009b0d1) main_cf0_pane_g

0x9321,	// (0x0009453b) area_left_week_number_pane_ParamLimits

0x932d,	// (0x00094547) area_top_day_name_pane_ParamLimits

0x9340,	// (0x0009455a) frame_month_view_pane_ParamLimits

0xef39,	// (0x0009a153) grid_month_view_pane_ParamLimits

0xef47,	// (0x0009a161) frm_month_g1_ParamLimits

0x93c1,	// (0x000945db) frm_month_g2_ParamLimits

0x93d4,	// (0x000945ee) frm_month_g3_ParamLimits

0x93e7,	// (0x00094601) frm_month_g4_ParamLimits

0x93fa,	// (0x00094614) frm_month_g5_ParamLimits

0x940d,	// (0x00094627) frm_month_g6_ParamLimits

0x9420,	// (0x0009463a) frm_month_g7_ParamLimits

0xef54,	// (0x0009a16e) frm_month_g8_ParamLimits

0x9433,	// (0x0009464d) frm_month_g9_ParamLimits

0x9443,	// (0x0009465d) frm_month_g10_ParamLimits

0x9453,	// (0x0009466d) frm_month_g11_ParamLimits

0x9463,	// (0x0009467d) frm_month_g12_ParamLimits

0x9475,	// (0x0009468f) frm_month_g13_ParamLimits

0x9487,	// (0x000946a1) frm_month_g14_ParamLimits

0x949b,	// (0x000946b5) frm_month_g15_ParamLimits

0x94af,	// (0x000946c9) frm_month_g16_ParamLimits

0xff08,	// (0x0009b122) frm_month_g_ParamLimits

0xef61,	// (0x0009a17b) cell_top_day_name_pane_t1_ParamLimits

0x94c3,	// (0x000946dd) cell_area_left_week_number_pane_g1_ParamLimits

0x94cf,	// (0x000946e9) cell_area_left_week_number_pane_t1_ParamLimits

0xce88,	// (0x000980a2) cell_month_view_pane_g1_ParamLimits

0x94e2,	// (0x000946fc) cell_month_view_pane_t1_ParamLimits

0xa67a,	// (0x00095894) main_clock2_btn_pane_g1

0xf0bf,	// (0x0009a2d9) main_clock2_btn_pane_t1

0xa4a9,	// (0x000956c3) listscroll_cmail_pane_ParamLimits

0xe739,	// (0x00099953) main_sp_fs_email_pane_g1_ParamLimits

0xe745,	// (0x0009995f) main_sp_fs_email_pane_g2_ParamLimits

0xfce5,	// (0x0009aeff) main_sp_fs_email_pane_g_ParamLimits

0xeb05,	// (0x00099d1f) list_recal_day_pane_ParamLimits

0xeb16,	// (0x00099d30) mian_recal_day_pane_t1

0x0a0b,	// (0x0008bc25) list_single_dyc_row_text_pane_t4_ParamLimits

0x0a0b,	// (0x0008bc25) list_single_dyc_row_text_pane_t4

0x0a54,	// (0x0008bc6e) list_single_dyc_row_text_pane_t5_ParamLimits

0x0a54,	// (0x0008bc6e) list_single_dyc_row_text_pane_t5

0x86d4,	// (0x000938ee) list_single_dyc_row_text_pane_t6_ParamLimits

0x86d4,	// (0x000938ee) list_single_dyc_row_text_pane_t6

0xad30,	// (0x00095f4a) aid_mgn_list_cale_time_pane

0xa4a9,	// (0x000956c3) main_gallery2_pane_ParamLimits
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
	};

} // end of namespace AknLayoutScalable_Elaf_pnl4_apps_nhd4_lsc_tch_Large
