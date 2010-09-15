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
const SCompDataImplData KImplData = { KDataLookup, AknLayoutScalable_Apps::KByteCodedData_AknLayoutScalable_Elaf_pqp_apps_qvga_prt + 0x0002eaa1 };

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
0x64b3,	// (0x00034f54) Screen

0x64bd,	// (0x00034f5e) application_window

0x650f,	// (0x00034fb0) area_bottom_pane_ParamLimits

0x650f,	// (0x00034fb0) area_bottom_pane

0x654b,	// (0x00034fec) area_top_pane_ParamLimits

0x654b,	// (0x00034fec) area_top_pane

0x65a7,	// (0x00035048) call_video_uplink_pane_ParamLimits

0x65a7,	// (0x00035048) call_video_uplink_pane

0x65e2,	// (0x00035083) main_pane_ParamLimits

0x65e2,	// (0x00035083) main_pane

0x179f,	// (0x00030240) context_pane

0x8faa,	// (0x00037a4b) navi_pane

0x8fc4,	// (0x00037a65) popup_cale_events_window_ParamLimits

0x8fc4,	// (0x00037a65) popup_cale_events_window

0x17b2,	// (0x00030253) popup_mup_playback_window

0x8fdb,	// (0x00037a7c) signal_pane

0xe0f5,	// (0x0003cb96) main_browser_pane

0xe2c2,	// (0x0003cd63) main_burst_pane

0xd98b,	// (0x0003c42c) main_calc_pane

0x1739,	// (0x000301da) main_cale_day_pane

0x6b35,	// (0x000355d6) main_cale_month_pane

0x1739,	// (0x000301da) main_cale_week_pane

0xe2c2,	// (0x0003cd63) main_call_pane

0xddaa,	// (0x0003c84b) main_call_poc_pane

0xe2c2,	// (0x0003cd63) main_camera_pane

0xe2c2,	// (0x0003cd63) main_chi_dic_pane

0xea98,	// (0x0003d539) main_clock_pane

0xddaa,	// (0x0003c84b) main_fmradio_pane

0xe2c2,	// (0x0003cd63) main_graph_messa_pane

0xddaa,	// (0x0003c84b) main_help_pane

0xe0f5,	// (0x0003cb96) main_im_pane

0xe005,	// (0x0003caa6) main_image_pane_ParamLimits

0xe005,	// (0x0003caa6) main_image_pane

0xddaa,	// (0x0003c84b) main_location2_pane

0xe2c2,	// (0x0003cd63) main_location_pane

0xe005,	// (0x0003caa6) main_messa_pane

0xddaa,	// (0x0003c84b) main_mp2_pane

0xe2c2,	// (0x0003cd63) main_mp_pane

0xddaa,	// (0x0003c84b) main_msg_pane

0xddaa,	// (0x0003c84b) main_mup_eq_pane

0xddaa,	// (0x0003c84b) main_mup_pane

0xe0f5,	// (0x0003cb96) main_notes_pane

0xddaa,	// (0x0003c84b) main_pec_pane

0xddaa,	// (0x0003c84b) main_phob_pane

0xddaa,	// (0x0003c84b) main_pinb_pane

0xddaa,	// (0x0003c84b) main_postcard_pane

0xddaa,	// (0x0003c84b) main_qdial_pane

0xe2c2,	// (0x0003cd63) main_skin_pane

0xddaa,	// (0x0003c84b) main_smil2_pane

0xe2c2,	// (0x0003cd63) main_smil_pane

0xe2c2,	// (0x0003cd63) main_video_pane

0xe2c2,	// (0x0003cd63) main_video_tele_pane

0xe005,	// (0x0003caa6) main_viewer_pane_ParamLimits

0xe005,	// (0x0003caa6) main_viewer_pane

0xe2c2,	// (0x0003cd63) main_vorec_pane

0x8ea8,	// (0x00037949) popup_blid_sat_info_window_ParamLimits

0x8ea8,	// (0x00037949) popup_blid_sat_info_window

0x8ec4,	// (0x00037965) popup_dyc_status_message_window_ParamLimits

0x8ec4,	// (0x00037965) popup_dyc_status_message_window

0x8ed0,	// (0x00037971) popup_grid_large_graphic_window_ParamLimits

0x8ed0,	// (0x00037971) popup_grid_large_graphic_window

0x8f41,	// (0x000379e2) popup_loc_request_window_ParamLimits

0x8f41,	// (0x000379e2) popup_loc_request_window

0x8f84,	// (0x00037a25) popup_wml_address_window_ParamLimits

0x8f84,	// (0x00037a25) popup_wml_address_window

0x8d85,	// (0x00037826) call_muted_g1

0x8a7b,	// (0x0003751c) popup_call_audio_conf_window_ParamLimits

0x8a7b,	// (0x0003751c) popup_call_audio_conf_window

0x8d95,	// (0x00037836) popup_call_audio_first_window_ParamLimits

0x8d95,	// (0x00037836) popup_call_audio_first_window

0x8dc9,	// (0x0003786a) popup_call_audio_in_window_ParamLimits

0x8dc9,	// (0x0003786a) popup_call_audio_in_window

0x8de5,	// (0x00037886) popup_call_audio_out_window_ParamLimits

0x8de5,	// (0x00037886) popup_call_audio_out_window

0x8e01,	// (0x000378a2) popup_call_audio_second_window_ParamLimits

0x8e01,	// (0x000378a2) popup_call_audio_second_window

0x8e29,	// (0x000378ca) popup_call_audio_wait_window_ParamLimits

0x8e29,	// (0x000378ca) popup_call_audio_wait_window

0x8e48,	// (0x000378e9) popup_number_entry_window_ParamLimits

0x8e48,	// (0x000378e9) popup_number_entry_window

0xd999,	// (0x0003c43a) bg_popup_call_pane_cp05_ParamLimits

0xd999,	// (0x0003c43a) bg_popup_call_pane_cp05

0xd9b9,	// (0x0003c45a) popup_number_entry_window_t1

0xd9cc,	// (0x0003c46d) popup_number_entry_window_t2

0xd9de,	// (0x0003c47f) popup_number_entry_window_t3

0x0003,

0xf05f,	// (0x0003db00) popup_number_entry_window_t

0xd9f0,	// (0x0003c491) text_title_cp2

0xda03,	// (0x0003c4a4) bg_popup_call_pane_cp_ParamLimits

0xda03,	// (0x0003c4a4) bg_popup_call_pane_cp

0xda11,	// (0x0003c4b2) call_thumbnail_pane

0xda19,	// (0x0003c4ba) popup_call_audio_in_window_g1_ParamLimits

0xda19,	// (0x0003c4ba) popup_call_audio_in_window_g1

0xda25,	// (0x0003c4c6) popup_call_audio_in_window_g2_ParamLimits

0xda25,	// (0x0003c4c6) popup_call_audio_in_window_g2

0xda31,	// (0x0003c4d2) popup_call_audio_in_window_g3_ParamLimits

0xda31,	// (0x0003c4d2) popup_call_audio_in_window_g3

0x0002,

0xf068,	// (0x0003db09) popup_call_audio_in_window_g_ParamLimits

0xf068,	// (0x0003db09) popup_call_audio_in_window_g

0xda3d,	// (0x0003c4de) popup_call_audio_in_window_t1_ParamLimits

0xda3d,	// (0x0003c4de) popup_call_audio_in_window_t1

0xda58,	// (0x0003c4f9) popup_call_audio_in_window_t2_ParamLimits

0xda58,	// (0x0003c4f9) popup_call_audio_in_window_t2

0xda73,	// (0x0003c514) popup_call_audio_in_window_t3_ParamLimits

0xda73,	// (0x0003c514) popup_call_audio_in_window_t3

0x0002,

0xf06f,	// (0x0003db10) popup_call_audio_in_window_t_ParamLimits

0xf06f,	// (0x0003db10) popup_call_audio_in_window_t

0xda03,	// (0x0003c4a4) bg_popup_call_pane_cp01_ParamLimits

0xda03,	// (0x0003c4a4) bg_popup_call_pane_cp01

0xda11,	// (0x0003c4b2) call_thumbnail_pane_cp02

0xda86,	// (0x0003c527) call_type_pane_cp022

0xda8e,	// (0x0003c52f) popup_call_audio_out_window_g1_ParamLimits

0xda8e,	// (0x0003c52f) popup_call_audio_out_window_g1

0xdaa0,	// (0x0003c541) popup_call_audio_out_window_g2_ParamLimits

0xdaa0,	// (0x0003c541) popup_call_audio_out_window_g2

0xdaac,	// (0x0003c54d) popup_call_audio_out_window_g3_ParamLimits

0xdaac,	// (0x0003c54d) popup_call_audio_out_window_g3

0x0002,

0xf076,	// (0x0003db17) popup_call_audio_out_window_g_ParamLimits

0xf076,	// (0x0003db17) popup_call_audio_out_window_g

0xdabe,	// (0x0003c55f) popup_call_audio_out_window_t1_ParamLimits

0xdabe,	// (0x0003c55f) popup_call_audio_out_window_t1

0xdad6,	// (0x0003c577) popup_call_audio_out_window_t2_ParamLimits

0xdad6,	// (0x0003c577) popup_call_audio_out_window_t2

0x0001,

0xf07d,	// (0x0003db1e) popup_call_audio_out_window_t_ParamLimits

0xf07d,	// (0x0003db1e) popup_call_audio_out_window_t

0xdaeb,	// (0x0003c58c) bg_popup_call_pane_ParamLimits

0xdaeb,	// (0x0003c58c) bg_popup_call_pane

0x6793,	// (0x00035234) call_thumbnail_pane_cp_ParamLimits

0x6793,	// (0x00035234) call_thumbnail_pane_cp

0xdb6f,	// (0x0003c610) call_type_pane_cp01_ParamLimits

0xdb6f,	// (0x0003c610) call_type_pane_cp01

0xdbb3,	// (0x0003c654) popup_call_audio_first_window_g1_ParamLimits

0xdbb3,	// (0x0003c654) popup_call_audio_first_window_g1

0xdbff,	// (0x0003c6a0) popup_call_audio_first_window_g2_ParamLimits

0xdbff,	// (0x0003c6a0) popup_call_audio_first_window_g2

0x0001,

0xf082,	// (0x0003db23) popup_call_audio_first_window_g_ParamLimits

0xf082,	// (0x0003db23) popup_call_audio_first_window_g

0xdc43,	// (0x0003c6e4) popup_call_audio_first_window_t1_ParamLimits

0xdc43,	// (0x0003c6e4) popup_call_audio_first_window_t1

0xdcef,	// (0x0003c790) popup_call_audio_first_window_t4_ParamLimits

0xdcef,	// (0x0003c790) popup_call_audio_first_window_t4

0xdd7b,	// (0x0003c81c) popup_call_audio_first_window_t5_ParamLimits

0xdd7b,	// (0x0003c81c) popup_call_audio_first_window_t5

0x0002,

0xf087,	// (0x0003db28) popup_call_audio_first_window_t_ParamLimits

0xf087,	// (0x0003db28) popup_call_audio_first_window_t

0xddaa,	// (0x0003c84b) bg_popup_call_pane_cp02

0xddb4,	// (0x0003c855) call_type_pane_cp023

0xddbc,	// (0x0003c85d) popup_call_audio_wait_window_g1

0xddc4,	// (0x0003c865) popup_call_audio_wait_window_g2

0x0001,

0xf08e,	// (0x0003db2f) popup_call_audio_wait_window_g

0xddcc,	// (0x0003c86d) popup_call_audio_wait_window_t3

0xddda,	// (0x0003c87b) bg_popup_call_pane_cp03_ParamLimits

0xddda,	// (0x0003c87b) bg_popup_call_pane_cp03

0xde3a,	// (0x0003c8db) call_thumbnail_pane_cp011_ParamLimits

0xde3a,	// (0x0003c8db) call_thumbnail_pane_cp011

0xde46,	// (0x0003c8e7) call_type_pane_cp034_ParamLimits

0xde46,	// (0x0003c8e7) call_type_pane_cp034

0xde82,	// (0x0003c923) popup_call_audio_second_window_g1_ParamLimits

0xde82,	// (0x0003c923) popup_call_audio_second_window_g1

0xdebe,	// (0x0003c95f) popup_call_audio_second_window_g2_ParamLimits

0xdebe,	// (0x0003c95f) popup_call_audio_second_window_g2

0x0001,

0xf093,	// (0x0003db34) popup_call_audio_second_window_g_ParamLimits

0xf093,	// (0x0003db34) popup_call_audio_second_window_g

0xdefa,	// (0x0003c99b) popup_call_audio_second_window_t1_ParamLimits

0xdefa,	// (0x0003c99b) popup_call_audio_second_window_t1

0xdf7b,	// (0x0003ca1c) popup_call_audio_second_window_t2_ParamLimits

0xdf7b,	// (0x0003ca1c) popup_call_audio_second_window_t2

0xdfb1,	// (0x0003ca52) popup_call_audio_second_window_t3_ParamLimits

0xdfb1,	// (0x0003ca52) popup_call_audio_second_window_t3

0x0002,

0xf098,	// (0x0003db39) popup_call_audio_second_window_t_ParamLimits

0xf098,	// (0x0003db39) popup_call_audio_second_window_t

0xddaa,	// (0x0003c84b) bg_popup_call_pane_cp04

0xdfe7,	// (0x0003ca88) list_conf_pane

0xdfef,	// (0x0003ca90) popup_call_audio_conf_window_t1

0xdffd,	// (0x0003ca9e) call_thumbnail_pane_g1

0xe005,	// (0x0003caa6) bg_pinb_pane_ParamLimits

0xe005,	// (0x0003caa6) bg_pinb_pane

0xe013,	// (0x0003cab4) find_pinb_pane

0xe005,	// (0x0003caa6) listscroll_pinb_pane_ParamLimits

0xe005,	// (0x0003caa6) listscroll_pinb_pane

0xe01d,	// (0x0003cabe) pinb_bg_pane_g1

0xe01d,	// (0x0003cabe) pinb_bg_pane_g2

0xe01d,	// (0x0003cabe) pinb_bg_pane_g3

0xe01d,	// (0x0003cabe) pinb_bg_pane_g4

0xe01d,	// (0x0003cabe) pinb_bg_pane_g5

0xe01d,	// (0x0003cabe) pinb_bg_pane_g6

0xe01d,	// (0x0003cabe) pinb_bg_pane_g7

0xe01d,	// (0x0003cabe) pinb_bg_pane_g8

0xe01d,	// (0x0003cabe) pinb_bg_pane_g9

0xe01d,	// (0x0003cabe) pinb_bg_pane_g10

0x0009,

0xf09f,	// (0x0003db40) pinb_bg_pane_g

0x67c2,	// (0x00035263) grid_pinb_pane

0xd981,	// (0x0003c422) list_pinb_pane

0xe027,	// (0x0003cac8) scroll_pane_cp01_ParamLimits

0xe027,	// (0x0003cac8) scroll_pane_cp01

0xe034,	// (0x0003cad5) find_pinb_pane_g1_ParamLimits

0xe034,	// (0x0003cad5) find_pinb_pane_g1

0xe04c,	// (0x0003caed) find_pinb_pane_t1

0xe05e,	// (0x0003caff) find_pinb_pane_t2

0x0001,

0xf0b9,	// (0x0003db5a) find_pinb_pane_t

0xe073,	// (0x0003cb14) input_focus_pane_cp01_ParamLimits

0xe073,	// (0x0003cb14) input_focus_pane_cp01

0x67cc,	// (0x0003526d) cell_pinb_pane_ParamLimits

0x67cc,	// (0x0003526d) cell_pinb_pane

0xe07f,	// (0x0003cb20) cell_pinb_pane_g1_ParamLimits

0xe07f,	// (0x0003cb20) cell_pinb_pane_g1

0xe08d,	// (0x0003cb2e) cell_pinb_pane_g2_ParamLimits

0xe08d,	// (0x0003cb2e) cell_pinb_pane_g2

0xe08d,	// (0x0003cb2e) cell_pinb_pane_g3_ParamLimits

0xe08d,	// (0x0003cb2e) cell_pinb_pane_g3

0x0002,

0xf0be,	// (0x0003db5f) cell_pinb_pane_g_ParamLimits

0xf0be,	// (0x0003db5f) cell_pinb_pane_g

0xddaa,	// (0x0003c84b) grid_highlight_pane_cp01

0xd98b,	// (0x0003c42c) list_pinb_item_pane_ParamLimits

0xd98b,	// (0x0003c42c) list_pinb_item_pane

0xd981,	// (0x0003c422) list_highlight_pane_cp02

0xe09b,	// (0x0003cb3c) list_pinb_item_pane_g1_ParamLimits

0xe09b,	// (0x0003cb3c) list_pinb_item_pane_g1

0xe08d,	// (0x0003cb2e) list_pinb_item_pane_g2_ParamLimits

0xe08d,	// (0x0003cb2e) list_pinb_item_pane_g2

0xe07f,	// (0x0003cb20) list_pinb_item_pane_g3_ParamLimits

0xe07f,	// (0x0003cb20) list_pinb_item_pane_g3

0xe08d,	// (0x0003cb2e) list_pinb_item_pane_g4_ParamLimits

0xe08d,	// (0x0003cb2e) list_pinb_item_pane_g4

0x0003,

0xf0c5,	// (0x0003db66) list_pinb_item_pane_g_ParamLimits

0xf0c5,	// (0x0003db66) list_pinb_item_pane_g

0xe0a9,	// (0x0003cb4a) list_pinb_item_pane_t1_ParamLimits

0xe0a9,	// (0x0003cb4a) list_pinb_item_pane_t1

0x67fa,	// (0x0003529b) calc_display_pane

0x6812,	// (0x000352b3) calc_paper_pane

0x682e,	// (0x000352cf) grid_calc_pane

0xddaa,	// (0x0003c84b) bg_list_pane_cp01

0x684e,	// (0x000352ef) clock_g1

0x6856,	// (0x000352f7) clock_g2

0x0001,

0xf0ce,	// (0x0003db6f) clock_g

0x685e,	// (0x000352ff) clock_t1_ParamLimits

0x685e,	// (0x000352ff) clock_t1

0x6873,	// (0x00035314) clock_t2_ParamLimits

0x6873,	// (0x00035314) clock_t2

0x6885,	// (0x00035326) clock_t3_ParamLimits

0x6885,	// (0x00035326) clock_t3

0x6897,	// (0x00035338) clock_t4_ParamLimits

0x6897,	// (0x00035338) clock_t4

0x68a9,	// (0x0003534a) clock_t5_ParamLimits

0x68a9,	// (0x0003534a) clock_t5

0x68be,	// (0x0003535f) clock_t6_ParamLimits

0x68be,	// (0x0003535f) clock_t6

0x68d0,	// (0x00035371) clock_t7_ParamLimits

0x68d0,	// (0x00035371) clock_t7

0x68e2,	// (0x00035383) clock_t8_ParamLimits

0x68e2,	// (0x00035383) clock_t8

0x68f4,	// (0x00035395) clock_t9_ParamLimits

0x68f4,	// (0x00035395) clock_t9

0x0008,

0xf0d3,	// (0x0003db74) clock_t_ParamLimits

0xf0d3,	// (0x0003db74) clock_t

0xe0bd,	// (0x0003cb5e) popup_clock_analogue_window_cp02

0xe0bd,	// (0x0003cb5e) popup_clock_digital_window_cp01

0xddaa,	// (0x0003c84b) listscroll_help_pane

0xddaa,	// (0x0003c84b) phob_pre_status_pane

0xe0c5,	// (0x0003cb66) grid_qdial_pane

0xe005,	// (0x0003caa6) listscroll_mce_pane

0xe005,	// (0x0003caa6) bg_notes_pane

0xe0cf,	// (0x0003cb70) list_notes_pane

0x6906,	// (0x000353a7) scroll_pane_cp06

0xe0dd,	// (0x0003cb7e) bg_calc_paper_pane

0x6913,	// (0x000353b4) list_calc_pane

0xe0f5,	// (0x0003cb96) bg_calc_display_pane

0x692d,	// (0x000353ce) calc_display_pane_t1

0x6942,	// (0x000353e3) calc_display_pane_t2

0x6957,	// (0x000353f8) calc_display_pane_t3

0x0002,

0xf0e6,	// (0x0003db87) calc_display_pane_t

0x6969,	// (0x0003540a) cell_calc_pane_ParamLimits

0x6969,	// (0x0003540a) cell_calc_pane

0xe101,	// (0x0003cba2) bg_calc_paper_pane_g1

0xe10d,	// (0x0003cbae) bg_calc_paper_pane_g2

0xe119,	// (0x0003cbba) bg_calc_paper_pane_g3

0xe125,	// (0x0003cbc6) bg_calc_paper_pane_g4

0xe131,	// (0x0003cbd2) bg_calc_paper_pane_g5

0x6990,	// (0x00035431) bg_calc_paper_pane_g6

0x699f,	// (0x00035440) bg_calc_paper_pane_g7

0x69ae,	// (0x0003544f) bg_calc_paper_pane_g8

0x0007,

0xf0ed,	// (0x0003db8e) bg_calc_paper_pane_g

0x69bd,	// (0x0003545e) calc_bg_paper_pane_g9

0x69cc,	// (0x0003546d) list_calc_item_pane_ParamLimits

0x69cc,	// (0x0003546d) list_calc_item_pane

0xe13d,	// (0x0003cbde) list_calc_item_pane_g1

0x69e5,	// (0x00035486) list_calc_item_pane_t1_ParamLimits

0x69e5,	// (0x00035486) list_calc_item_pane_t1

0x69f7,	// (0x00035498) list_calc_item_pane_t2_ParamLimits

0x69f7,	// (0x00035498) list_calc_item_pane_t2

0x0001,

0xf0fe,	// (0x0003db9f) list_calc_item_pane_t_ParamLimits

0xf0fe,	// (0x0003db9f) list_calc_item_pane_t

0xe01d,	// (0x0003cabe) cell_calc_pane_g1

0xe14a,	// (0x0003cbeb) grid_highlight_pane_cp02

0xe16c,	// (0x0003cc0d) bg_calc_display_pane_g1

0x6a25,	// (0x000354c6) bg_calc_display_pane_g2

0xe175,	// (0x0003cc16) bg_calc_display_pane_g3

0x0002,

0xf108,	// (0x0003dba9) bg_calc_display_pane_g

0x6a2f,	// (0x000354d0) cell_qdial_pane_ParamLimits

0x6a2f,	// (0x000354d0) cell_qdial_pane

0x6a41,	// (0x000354e2) cell_qdial_pane_g1_ParamLimits

0x6a41,	// (0x000354e2) cell_qdial_pane_g1

0x6a4e,	// (0x000354ef) cell_qdial_pane_g2_ParamLimits

0x6a4e,	// (0x000354ef) cell_qdial_pane_g2

0xe17e,	// (0x0003cc1f) cell_qdial_pane_g3_ParamLimits

0xe17e,	// (0x0003cc1f) cell_qdial_pane_g3

0x0003,

0xf10f,	// (0x0003dbb0) cell_qdial_pane_g_ParamLimits

0xf10f,	// (0x0003dbb0) cell_qdial_pane_g

0x6a6c,	// (0x0003550d) cell_qdial_pane_t1_ParamLimits

0x6a6c,	// (0x0003550d) cell_qdial_pane_t1

0x6a84,	// (0x00035525) cell_qdial_pane_t2_ParamLimits

0x6a84,	// (0x00035525) cell_qdial_pane_t2

0x6a97,	// (0x00035538) cell_qdial_pane_t3_ParamLimits

0x6a97,	// (0x00035538) cell_qdial_pane_t3

0x0002,

0xf118,	// (0x0003dbb9) cell_qdial_pane_t_ParamLimits

0xf118,	// (0x0003dbb9) cell_qdial_pane_t

0xddaa,	// (0x0003c84b) grid_highlight_pane_cp04

0xe18a,	// (0x0003cc2b) thumbnail_qdial_pane_ParamLimits

0xe18a,	// (0x0003cc2b) thumbnail_qdial_pane

0xe1e6,	// (0x0003cc87) list_help_pane

0xe1f0,	// (0x0003cc91) scroll_pane_cp02

0x6aaa,	// (0x0003554b) help_list_pane_t1_ParamLimits

0x6aaa,	// (0x0003554b) help_list_pane_t1

0x6ac9,	// (0x0003556a) bg_notes_pane_g2

0x6ad1,	// (0x00035572) bg_notes_pane_g3

0x6ad9,	// (0x0003557a) notes_bg_pane_g1

0x6ae1,	// (0x00035582) notes_bg_pane_g4

0x6ae9,	// (0x0003558a) notes_bg_pane_g5

0x6af1,	// (0x00035592) notes_bg_pane_g6

0x6af9,	// (0x0003559a) notes_bg_pane_g7

0x6b01,	// (0x000355a2) notes_bg_pane_g8

0x6b09,	// (0x000355aa) notes_bg_pane_g9

0x0006,

0xf136,	// (0x0003dbd7) notes_bg_pane_g

0x6b11,	// (0x000355b2) list_notes_text_pane_ParamLimits

0x6b11,	// (0x000355b2) list_notes_text_pane

0xe1f9,	// (0x0003cc9a) list_notes_text_pane_g1

0x5794,	// (0x00034235) list_notes_text_pane_t1

0x6b35,	// (0x000355d6) listscroll_cale_week_pane

0x6b5a,	// (0x000355fb) bg_cale_heading_pane

0xe21c,	// (0x0003ccbd) bg_cale_pane_cp01

0x6b72,	// (0x00035613) cale_week_corner_pane

0x6b8c,	// (0x0003562d) cale_week_day_heading_pane

0x6ba4,	// (0x00035645) cale_week_scroll_pane_g1

0x6bb7,	// (0x00035658) cale_week_scroll_pane_g2

0x6bca,	// (0x0003566b) cale_week_scroll_pane_g3

0x6bdd,	// (0x0003567e) cale_week_scroll_pane_g4

0x6bf0,	// (0x00035691) cale_week_scroll_pane_g5

0x6c03,	// (0x000356a4) cale_week_scroll_pane_g6

0x6c16,	// (0x000356b7) cale_week_scroll_pane_g7

0x6c29,	// (0x000356ca) cale_week_scroll_pane_g8

0x6c3c,	// (0x000356dd) cale_week_scroll_pane_g9

0x6c4f,	// (0x000356f0) cale_week_scroll_pane_g10

0x6c62,	// (0x00035703) cale_week_scroll_pane_g11

0x6c75,	// (0x00035716) cale_week_scroll_pane_g12

0x6c88,	// (0x00035729) cale_week_scroll_pane_g13

0x6c9b,	// (0x0003573c) cale_week_scroll_pane_g14

0x6cae,	// (0x0003574f) cale_week_scroll_pane_g15

0x000f,

0xf145,	// (0x0003dbe6) cale_week_scroll_pane_g

0x6cd4,	// (0x00035775) cale_week_time_pane

0x6ce7,	// (0x00035788) grid_cale_week_pane

0xe24b,	// (0x0003ccec) scroll_pane_cp08

0x6cfc,	// (0x0003579d) cell_cale_week_pane_ParamLimits

0x6cfc,	// (0x0003579d) cell_cale_week_pane

0x6d4a,	// (0x000357eb) cale_week_day_heading_pane_t1

0x6d85,	// (0x00035826) cale_week_day_heading_pane_t2

0x6dc0,	// (0x00035861) cale_week_day_heading_pane_t3

0x6dfb,	// (0x0003589c) cale_week_day_heading_pane_t4

0x6e36,	// (0x000358d7) cale_week_day_heading_pane_t5

0x6e71,	// (0x00035912) cale_week_day_heading_pane_t6

0x6eac,	// (0x0003594d) cale_week_day_heading_pane_t7

0x0006,

0xf166,	// (0x0003dc07) cale_week_day_heading_pane_t

0xe268,	// (0x0003cd09) bg_cale_side_pane

0x6ee7,	// (0x00035988) cale_week_time_pane_t1

0x6f21,	// (0x000359c2) cale_week_time_pane_t2

0x6f5b,	// (0x000359fc) cale_week_time_pane_t3

0x6f95,	// (0x00035a36) cale_week_time_pane_t4

0x6fcf,	// (0x00035a70) cale_week_time_pane_t5

0x7009,	// (0x00035aaa) cale_week_time_pane_t6

0x7043,	// (0x00035ae4) cale_week_time_pane_t7

0x707d,	// (0x00035b1e) cale_week_time_pane_t8

0x0007,

0xf175,	// (0x0003dc16) cale_week_time_pane_t

0x70b7,	// (0x00035b58) cell_cale_week_pane_g2

0x70db,	// (0x00035b7c) cell_cale_week_pane_g3_ParamLimits

0x70db,	// (0x00035b7c) cell_cale_week_pane_g3

0xe276,	// (0x0003cd17) grid_highlight_pane_cp07

0xe27e,	// (0x0003cd1f) listscroll_gms_pane

0xe288,	// (0x0003cd29) grid_gms_pane

0xe291,	// (0x0003cd32) listscroll_gms_pane_g1

0xe299,	// (0x0003cd3a) listscroll_gms_pane_g2

0x0001,

0xf186,	// (0x0003dc27) listscroll_gms_pane_g

0x70f3,	// (0x00035b94) scroll_pane_cp010

0x70fc,	// (0x00035b9d) cell_gms_pane_ParamLimits

0x70fc,	// (0x00035b9d) cell_gms_pane

0x710d,	// (0x00035bae) cell_gms_pane_g1

0xe2a1,	// (0x0003cd42) cell_gms_pane_g2

0xe1f9,	// (0x0003cc9a) cell_gms_pane_g3

0xe2a9,	// (0x0003cd4a) cell_gms_pane_g4

0x0003,

0xf18b,	// (0x0003dc2c) cell_gms_pane_g

0xe2b2,	// (0x0003cd53) grid_highlight_pane_cp09

0x8d13,	// (0x000377b4) phob_pre_status_pane_g1

0x8d1b,	// (0x000377bc) phob_pre_status_pane_g2

0x8d23,	// (0x000377c4) phob_pre_status_pane_g3

0x8d2b,	// (0x000377cc) phob_pre_status_pane_g4

0x0004,

0xf579,	// (0x0003e01a) phob_pre_status_pane_g

0x8d3b,	// (0x000377dc) phob_pre_status_pane_t1

0x8d49,	// (0x000377ea) phob_pre_status_pane_t2

0x8d57,	// (0x000377f8) phob_pre_status_pane_t3

0x0002,

0xf584,	// (0x0003e025) phob_pre_status_pane_t

0xe2c2,	// (0x0003cd63) bg_list_pane_cp05

0x7115,	// (0x00035bb6) grid_vorec_pane

0xe2ca,	// (0x0003cd6b) vorec_t1

0xe2d8,	// (0x0003cd79) vorec_t2

0xe2e6,	// (0x0003cd87) vorec_t3

0x711d,	// (0x00035bbe) vorec_t4

0xd00f,	// (0x0003bab0) vorec_t5

0xd01d,	// (0x0003babe) vorec_t6

0x0004,

0xf194,	// (0x0003dc35) vorec_t

0xd02b,	// (0x0003bacc) wait_bar_pane_cp01

0xe302,	// (0x0003cda3) cell_vorec_pane_ParamLimits

0xe302,	// (0x0003cda3) cell_vorec_pane

0x712b,	// (0x00035bcc) cell_vorec_pane_g1

0xddaa,	// (0x0003c84b) grid_highlight_pane_cp05

0xd98b,	// (0x0003c42c) cams_zoom_pane

0xd98b,	// (0x0003c42c) image_vga_pane

0xe08d,	// (0x0003cb2e) main_camera_pane_g1

0xe08d,	// (0x0003cb2e) main_camera_pane_g2

0xe08d,	// (0x0003cb2e) main_camera_pane_g3

0xe08d,	// (0x0003cb2e) main_camera_pane_g4

0xe08d,	// (0x0003cb2e) main_camera_pane_g5

0xe08d,	// (0x0003cb2e) main_camera_pane_g6

0xe08d,	// (0x0003cb2e) main_camera_pane_g7

0x0007,

0xf19f,	// (0x0003dc40) main_camera_pane_g

0xe315,	// (0x0003cdb6) main_camera_pane_t1

0xe315,	// (0x0003cdb6) main_camera_pane_t2

0x0001,

0xf1b0,	// (0x0003dc51) main_camera_pane_t

0x7135,	// (0x00035bd6) cams_zoom_pane_cp_ParamLimits

0x7135,	// (0x00035bd6) cams_zoom_pane_cp

0x7163,	// (0x00035c04) image_cif_pane_ParamLimits

0x7163,	// (0x00035c04) image_cif_pane

0xd981,	// (0x0003c422) image_subqcif_pane

0x7171,	// (0x00035c12) main_video_pane_g1_ParamLimits

0x7171,	// (0x00035c12) main_video_pane_g1

0x7199,	// (0x00035c3a) main_video_pane_g2_ParamLimits

0x7199,	// (0x00035c3a) main_video_pane_g2

0x71cc,	// (0x00035c6d) main_video_pane_g3_ParamLimits

0x71cc,	// (0x00035c6d) main_video_pane_g3

0x71cc,	// (0x00035c6d) main_video_pane_g4_ParamLimits

0x71cc,	// (0x00035c6d) main_video_pane_g4

0x71fa,	// (0x00035c9b) main_video_pane_g5_ParamLimits

0x71fa,	// (0x00035c9b) main_video_pane_g5

0xe329,	// (0x0003cdca) main_video_pane_g6_ParamLimits

0xe329,	// (0x0003cdca) main_video_pane_g6

0x0006,

0xf1b5,	// (0x0003dc56) main_video_pane_g_ParamLimits

0xf1b5,	// (0x0003dc56) main_video_pane_g

0x7216,	// (0x00035cb7) main_video_pane_t1_ParamLimits

0x7216,	// (0x00035cb7) main_video_pane_t1

0xe343,	// (0x0003cde4) cams_zoom_pane_g1

0xe343,	// (0x0003cde4) cams_zoom_pane_g2

0xe343,	// (0x0003cde4) cams_zoom_pane_g3

0xe343,	// (0x0003cde4) cams_zoom_pane_g4

0x0003,

0xf1c4,	// (0x0003dc65) cams_zoom_pane_g

0x725c,	// (0x00035cfd) grid_cams_pane

0x7268,	// (0x00035d09) linegrid_cams_pane

0x7274,	// (0x00035d15) cell_cams_pane_ParamLimits

0x7274,	// (0x00035d15) cell_cams_pane

0xe34d,	// (0x0003cdee) cams_burst_image_pane

0xe355,	// (0x0003cdf6) cell_cams_pane_g1

0xddaa,	// (0x0003c84b) grid_highlight_pane_cp03

0xe01d,	// (0x0003cabe) mp_bg_pane_g1

0xd981,	// (0x0003c422) bg_list_pane_cp03

0xd981,	// (0x0003c422) bg_mp_pane

0xd981,	// (0x0003c422) grid_mp_pane

0xe343,	// (0x0003cde4) media_player_g1

0x16e1,	// (0x00030182) media_player_t1

0x16e1,	// (0x00030182) media_player_t2

0x16e1,	// (0x00030182) media_player_t3

0x16e1,	// (0x00030182) media_player_t4

0x16e1,	// (0x00030182) media_player_t5

0x16e1,	// (0x00030182) media_player_t6

0x16e1,	// (0x00030182) media_player_t7

0x0006,

0xf563,	// (0x0003e004) media_player_t

0xd981,	// (0x0003c422) wait_bar_pane_cp02

0xf548,	// (0x0003dfe9) main_usb_pane_t

0xea98,	// (0x0003d539) cell_mp_pane

0xe01d,	// (0x0003cabe) cell_mp_pane_g1

0xddaa,	// (0x0003c84b) grid_highlight_pane_cp06

0xe35d,	// (0x0003cdfe) grid_skin_colour_pane

0xe365,	// (0x0003ce06) list_highlight_pane_cp03

0x7287,	// (0x00035d28) skin_g1

0xe36d,	// (0x0003ce0e) skin_t1

0xe37c,	// (0x0003ce1d) skin_t2

0x0001,

0xf1f2,	// (0x0003dc93) skin_t

0x728f,	// (0x00035d30) cell_skin_colour_pane_ParamLimits

0x728f,	// (0x00035d30) cell_skin_colour_pane

0xe38a,	// (0x0003ce2b) cell_skin_colour_pane_g1

0x7305,	// (0x00035da6) call_video_g1_ParamLimits

0x7305,	// (0x00035da6) call_video_g1

0x7311,	// (0x00035db2) call_video_g2_ParamLimits

0x7311,	// (0x00035db2) call_video_g2

0x0001,

0xf1f7,	// (0x0003dc98) call_video_g_ParamLimits

0xf1f7,	// (0x0003dc98) call_video_g

0x7361,	// (0x00035e02) call_video_uplink_pane_cp1_ParamLimits

0x7361,	// (0x00035e02) call_video_uplink_pane_cp1

0xe39c,	// (0x0003ce3d) call_video_uplink_pane_cp2

0x741d,	// (0x00035ebe) video_down_crop_pane_ParamLimits

0x741d,	// (0x00035ebe) video_down_crop_pane

0x74e7,	// (0x00035f88) video_down_pane_ParamLimits

0x74e7,	// (0x00035f88) video_down_pane

0xe3a4,	// (0x0003ce45) video_down_subqcif_pane_ParamLimits

0xe3a4,	// (0x0003ce45) video_down_subqcif_pane

0xe3bc,	// (0x0003ce5d) video_down_subqcif_pane_cp_ParamLimits

0xe3bc,	// (0x0003ce5d) video_down_subqcif_pane_cp

0xe3e0,	// (0x0003ce81) im_reading_pane_ParamLimits

0xe3e0,	// (0x0003ce81) im_reading_pane

0x75b3,	// (0x00036054) im_writing_pane_ParamLimits

0x75b3,	// (0x00036054) im_writing_pane

0x75c9,	// (0x0003606a) im_reading_pane_t1

0xe3fa,	// (0x0003ce9b) list_im_pane

0xe40b,	// (0x0003ceac) scroll_pane_cp07

0x7601,	// (0x000360a2) im_writing_pane_t1_ParamLimits

0x7601,	// (0x000360a2) im_writing_pane_t1

0xe424,	// (0x0003cec5) im_writing_pane_t2_ParamLimits

0xe424,	// (0x0003cec5) im_writing_pane_t2

0x0001,

0xf201,	// (0x0003dca2) im_writing_pane_t_ParamLimits

0xf201,	// (0x0003dca2) im_writing_pane_t

0xddaa,	// (0x0003c84b) input_focus_pane_cp04

0xddaa,	// (0x0003c84b) input_focus_pane_cp05

0x7616,	// (0x000360b7) list_im_single_pane_ParamLimits

0x7616,	// (0x000360b7) list_im_single_pane

0xe441,	// (0x0003cee2) list_single_im_pane_t1

0xe2c2,	// (0x0003cd63) blid_accuracy_pane

0xe2c2,	// (0x0003cd63) blid_compass_pane

0x16f1,	// (0x00030192) main_location_t1

0x16f1,	// (0x00030192) main_location_t2

0x16f1,	// (0x00030192) main_location_t3

0x0002,

0xf572,	// (0x0003e013) main_location_t

0xddaa,	// (0x0003c84b) aid_levels_location

0xe01d,	// (0x0003cabe) blid_accuracy_pane_g1

0xe01d,	// (0x0003cabe) blid_accuracy_pane_g2

0x0001,

0xf255,	// (0x0003dcf6) blid_accuracy_pane_g

0xe47b,	// (0x0003cf1c) wml_content_pane

0xe4b9,	// (0x0003cf5a) wml_button_pane_ParamLimits

0xe4b9,	// (0x0003cf5a) wml_button_pane

0x762e,	// (0x000360cf) wml_list_single_large_pane_ParamLimits

0x762e,	// (0x000360cf) wml_list_single_large_pane

0x7645,	// (0x000360e6) wml_list_single_medium_pane_ParamLimits

0x7645,	// (0x000360e6) wml_list_single_medium_pane

0x765d,	// (0x000360fe) wml_list_single_small_pane_ParamLimits

0x765d,	// (0x000360fe) wml_list_single_small_pane

0xe4cd,	// (0x0003cf6e) wml_selection_box_pane_ParamLimits

0xe4cd,	// (0x0003cf6e) wml_selection_box_pane

0xe4e0,	// (0x0003cf81) wml_list_single_pane_t1

0xe4ef,	// (0x0003cf90) wml_list_single_medium_pane_t1

0xe4fe,	// (0x0003cf9f) wml_list_single_large_pane_t1

0xe50d,	// (0x0003cfae) input_focus_pane_cp02_ParamLimits

0xe50d,	// (0x0003cfae) input_focus_pane_cp02

0xe520,	// (0x0003cfc1) wml_selection_box_pane_g1

0xe529,	// (0x0003cfca) wml_selection_box_pane_t1_ParamLimits

0xe529,	// (0x0003cfca) wml_selection_box_pane_t1

0xe005,	// (0x0003caa6) bg_wml_button_pane_ParamLimits

0xe005,	// (0x0003caa6) bg_wml_button_pane

0xe541,	// (0x0003cfe2) wml_button_pane_g1

0xe549,	// (0x0003cfea) wml_button_pane_t1

0xe541,	// (0x0003cfe2) wml_button_bg_pane_g1

0xe559,	// (0x0003cffa) wml_button_bg_pane_g2

0xe561,	// (0x0003d002) wml_button_bg_pane_g3

0xe569,	// (0x0003d00a) wml_button_bg_pane_g4

0xe571,	// (0x0003d012) wml_button_bg_pane_g5

0xe579,	// (0x0003d01a) wml_button_bg_pane_g6

0xe581,	// (0x0003d022) wml_button_bg_pane_g7

0xe589,	// (0x0003d02a) wml_button_bg_pane_g8

0xe591,	// (0x0003d032) wml_button_bg_pane_g9

0x0008,

0xf206,	// (0x0003dca7) wml_button_bg_pane_g

0x7678,	// (0x00036119) bg_list_pane_cp02

0xe599,	// (0x0003d03a) mce_header_pane_ParamLimits

0xe599,	// (0x0003d03a) mce_header_pane

0xe5ad,	// (0x0003d04e) mce_icon_pane

0xe5ad,	// (0x0003d04e) mce_image_pane

0xe5b6,	// (0x0003d057) mce_text_pane_ParamLimits

0xe5b6,	// (0x0003d057) mce_text_pane

0x7681,	// (0x00036122) scroll_pane_cp03

0x7681,	// (0x00036122) scroll_pane_cp04

0xe5ca,	// (0x0003d06b) scroll_pane_cp05_ParamLimits

0xe5ca,	// (0x0003d06b) scroll_pane_cp05

0x7689,	// (0x0003612a) mce_header_field_pane_ParamLimits

0x7689,	// (0x0003612a) mce_header_field_pane

0x76a9,	// (0x0003614a) mce_header_field_pane_2_ParamLimits

0x76a9,	// (0x0003614a) mce_header_field_pane_2

0x76bf,	// (0x00036160) mce_header_field_pane_3

0x76c7,	// (0x00036168) list_single_mce_message_pane_ParamLimits

0x76c7,	// (0x00036168) list_single_mce_message_pane

0x76de,	// (0x0003617f) list_single_mce_smart_pane_ParamLimits

0x76de,	// (0x0003617f) list_single_mce_smart_pane

0xe5d6,	// (0x0003d077) input_focus_pane_cp03

0xe5df,	// (0x0003d080) list_header_data_pane

0x7700,	// (0x000361a1) mce_header_field_pane_t1

0x770e,	// (0x000361af) list_single_mce_header_pane_ParamLimits

0x770e,	// (0x000361af) list_single_mce_header_pane

0xe5e7,	// (0x0003d088) list_single_mce_header_pane_t1

0xe5f6,	// (0x0003d097) list_single_mce_message_pane_g1

0xe5ff,	// (0x0003d0a0) list_single_mce_message_pane_t1

0x774c,	// (0x000361ed) bg_cale_heading_pane_cp01_ParamLimits

0x774c,	// (0x000361ed) bg_cale_heading_pane_cp01

0xe60e,	// (0x0003d0af) bg_cale_pane_cp02_ParamLimits

0xe60e,	// (0x0003d0af) bg_cale_pane_cp02

0x777b,	// (0x0003621c) cale_month_corner_pane

0x7795,	// (0x00036236) cale_month_day_heading_pane_ParamLimits

0x7795,	// (0x00036236) cale_month_day_heading_pane

0x77c4,	// (0x00036265) cale_month_pane_g1_ParamLimits

0x77c4,	// (0x00036265) cale_month_pane_g1

0x77e8,	// (0x00036289) cale_month_pane_g2_ParamLimits

0x77e8,	// (0x00036289) cale_month_pane_g2

0x7807,	// (0x000362a8) cale_month_pane_g3_ParamLimits

0x7807,	// (0x000362a8) cale_month_pane_g3

0x7843,	// (0x000362e4) cale_month_pane_g4_ParamLimits

0x7843,	// (0x000362e4) cale_month_pane_g4

0x787f,	// (0x00036320) cale_month_pane_g5_ParamLimits

0x787f,	// (0x00036320) cale_month_pane_g5

0x78bb,	// (0x0003635c) cale_month_pane_g6_ParamLimits

0x78bb,	// (0x0003635c) cale_month_pane_g6

0x78f7,	// (0x00036398) cale_month_pane_g7_ParamLimits

0x78f7,	// (0x00036398) cale_month_pane_g7

0x7933,	// (0x000363d4) cale_month_pane_g8_ParamLimits

0x7933,	// (0x000363d4) cale_month_pane_g8

0x796f,	// (0x00036410) cale_month_pane_g9_ParamLimits

0x796f,	// (0x00036410) cale_month_pane_g9

0x79a9,	// (0x0003644a) cale_month_pane_g10_ParamLimits

0x79a9,	// (0x0003644a) cale_month_pane_g10

0x79e3,	// (0x00036484) cale_month_pane_g11_ParamLimits

0x79e3,	// (0x00036484) cale_month_pane_g11

0x7a1d,	// (0x000364be) cale_month_pane_g12_ParamLimits

0x7a1d,	// (0x000364be) cale_month_pane_g12

0x7a57,	// (0x000364f8) cale_month_pane_g13_ParamLimits

0x7a57,	// (0x000364f8) cale_month_pane_g13

0x000c,

0xf219,	// (0x0003dcba) cale_month_pane_g_ParamLimits

0xf219,	// (0x0003dcba) cale_month_pane_g

0x7a91,	// (0x00036532) cale_month_week_pane

0x7aa4,	// (0x00036545) grid_cale_month_pane_ParamLimits

0x7aa4,	// (0x00036545) grid_cale_month_pane

0x7aca,	// (0x0003656b) cale_month_day_heading_pane_t1

0x7b50,	// (0x000365f1) cale_month_day_heading_pane_t2

0x7be1,	// (0x00036682) cale_month_day_heading_pane_t3

0x7c72,	// (0x00036713) cale_month_day_heading_pane_t4

0x7d03,	// (0x000367a4) cale_month_day_heading_pane_t5

0x7d94,	// (0x00036835) cale_month_day_heading_pane_t6

0x7e25,	// (0x000368c6) cale_month_day_heading_pane_t7

0x0006,

0xf234,	// (0x0003dcd5) cale_month_day_heading_pane_t

0xe268,	// (0x0003cd09) bg_cale_side_pane_cp01

0x7eb6,	// (0x00036957) cale_month_week_pane_t1

0x7eef,	// (0x00036990) cale_month_week_pane_t2

0x7f28,	// (0x000369c9) cale_month_week_pane_t3

0x7f61,	// (0x00036a02) cale_month_week_pane_t4

0x7f9a,	// (0x00036a3b) cale_month_week_pane_t5

0x7fd3,	// (0x00036a74) cale_month_week_pane_t6

0x0005,

0xf243,	// (0x0003dce4) cale_month_week_pane_t

0x800c,	// (0x00036aad) cell_cale_month_pane_ParamLimits

0x800c,	// (0x00036aad) cell_cale_month_pane

0x80fa,	// (0x00036b9b) cell_cale_month_pane_g1

0x8106,	// (0x00036ba7) cell_cale_month_pane_t1_ParamLimits

0x8106,	// (0x00036ba7) cell_cale_month_pane_t1

0xe276,	// (0x0003cd17) grid_highlight_pane_cp08

0xe01d,	// (0x0003cabe) main_smil_g1

0x8126,	// (0x00036bc7) smil_status_pane

0xe64d,	// (0x0003d0ee) smil_text_pane

0x15b9,	// (0x0003005a) bg_popup_call3_rect_pane_g8

0x15c1,	// (0x00030062) bg_popup_call3_rect_pane_g9

0x0008,

0xf4f3,	// (0x0003df94) bg_popup_call3_rect_pane_g

0x1827,	// (0x000302c8) smil_status_volume_pane_g1

0x8137,	// (0x00036bd8) smil_status_pane_t1

0x901f,	// (0x00037ac0) volume_smil_pane

0xe657,	// (0x0003d0f8) list_smil_text_pane

0x814e,	// (0x00036bef) scroll_pane_cp011

0x8157,	// (0x00036bf8) smil_text_list_pane_t1_ParamLimits

0x8157,	// (0x00036bf8) smil_text_list_pane_t1

0x8196,	// (0x00036c37) aid_volume_smil_ParamLimits

0x8196,	// (0x00036c37) aid_volume_smil

0xe01d,	// (0x0003cabe) smil_volume_pane_g1

0xe01d,	// (0x0003cabe) smil_volume_pane_g2

0x0001,

0xf255,	// (0x0003dcf6) smil_volume_pane_g

0x6b35,	// (0x000355d6) listscroll_cale_day_pane

0xe661,	// (0x0003d102) bg_cale_pane

0xe679,	// (0x0003d11a) list_cale_pane

0xe69c,	// (0x0003d13d) scroll_pane_cp09

0xe6ad,	// (0x0003d14e) cale_bg_pane_g1

0xe6b5,	// (0x0003d156) cale_bg_pane_g2

0xe6bd,	// (0x0003d15e) cale_bg_pane_g3

0xe6c5,	// (0x0003d166) cale_bg_pane_g4

0xe6cd,	// (0x0003d16e) cale_bg_pane_g5

0xe6d5,	// (0x0003d176) cale_bg_pane_g6

0xe6dd,	// (0x0003d17e) cale_bg_pane_g7

0xe6e5,	// (0x0003d186) cale_bg_pane_g8

0xe6ed,	// (0x0003d18e) cale_bg_pane_g9

0x0008,

0xf25a,	// (0x0003dcfb) cale_bg_pane_g

0x81c0,	// (0x00036c61) list_cale_time_pane_ParamLimits

0x81c0,	// (0x00036c61) list_cale_time_pane

0xe6f5,	// (0x0003d196) list_cale_time_pane_g1_ParamLimits

0xe6f5,	// (0x0003d196) list_cale_time_pane_g1

0xe701,	// (0x0003d1a2) list_cale_time_pane_g2_ParamLimits

0xe701,	// (0x0003d1a2) list_cale_time_pane_g2

0x81d4,	// (0x00036c75) list_cale_time_pane_g3_ParamLimits

0x81d4,	// (0x00036c75) list_cale_time_pane_g3

0x81e0,	// (0x00036c81) list_cale_time_pane_g4_ParamLimits

0x81e0,	// (0x00036c81) list_cale_time_pane_g4

0x81ec,	// (0x00036c8d) list_cale_time_pane_g5_ParamLimits

0x81ec,	// (0x00036c8d) list_cale_time_pane_g5

0x0005,

0xf26d,	// (0x0003dd0e) list_cale_time_pane_g_ParamLimits

0xf26d,	// (0x0003dd0e) list_cale_time_pane_g

0xe71b,	// (0x0003d1bc) list_cale_time_pane_t1_ParamLimits

0xe71b,	// (0x0003d1bc) list_cale_time_pane_t1

0xe743,	// (0x0003d1e4) list_cale_time_pane_t2_ParamLimits

0xe743,	// (0x0003d1e4) list_cale_time_pane_t2

0x8486,	// (0x00036f27) aid_blid_cardinal_pane

0x84c4,	// (0x00036f65) compass_pane_t4

0xe76b,	// (0x0003d20c) list_cale_time_pane_t4_ParamLimits

0xe76b,	// (0x0003d20c) list_cale_time_pane_t4

0x84d2,	// (0x00036f73) compass_pane_t5

0x84e0,	// (0x00036f81) compass_pane_t6

0x84ee,	// (0x00036f8f) compass_pane_t7

0xebb5,	// (0x0003d656) navi_pane_cc_t1

0xed5a,	// (0x0003d7fb) aid_phob_thumbnail_center_pane

0x8858,	// (0x000372f9) main_postcard_pane_g4_ParamLimits

0x0002,

0xf27a,	// (0x0003dd1b) list_cale_time_pane_t_ParamLimits

0xf27a,	// (0x0003dd1b) list_cale_time_pane_t

0xda03,	// (0x0003c4a4) bg_popup_window_pane_cp02_ParamLimits

0xda03,	// (0x0003c4a4) bg_popup_window_pane_cp02

0xe793,	// (0x0003d234) heading_pane_cp01_ParamLimits

0xe793,	// (0x0003d234) heading_pane_cp01

0xe79f,	// (0x0003d240) loc_req_pane_ParamLimits

0xe79f,	// (0x0003d240) loc_req_pane

0xe7af,	// (0x0003d250) loc_type_pane_ParamLimits

0xe7af,	// (0x0003d250) loc_type_pane

0xe7c1,	// (0x0003d262) loc_type_pane_t1_ParamLimits

0xe7c1,	// (0x0003d262) loc_type_pane_t1

0xe7d3,	// (0x0003d274) loc_type_pane_t2_ParamLimits

0xe7d3,	// (0x0003d274) loc_type_pane_t2

0xe7e5,	// (0x0003d286) loc_type_pane_t3_ParamLimits

0xe7e5,	// (0x0003d286) loc_type_pane_t3

0x0002,

0xf281,	// (0x0003dd22) loc_type_pane_t_ParamLimits

0xf281,	// (0x0003dd22) loc_type_pane_t

0xe7f7,	// (0x0003d298) list_loc_req_pane

0xe801,	// (0x0003d2a2) scroll_pane_cp012

0x81f8,	// (0x00036c99) list_single_loc_request_popup_menu_pane_ParamLimits

0x81f8,	// (0x00036c99) list_single_loc_request_popup_menu_pane

0xe80a,	// (0x0003d2ab) list_single_loc_request_popup_menu_pane_g1_ParamLimits

0xe80a,	// (0x0003d2ab) list_single_loc_request_popup_menu_pane_g1

0xe816,	// (0x0003d2b7) list_single_loc_request_popup_menu_pane_g2_ParamLimits

0xe816,	// (0x0003d2b7) list_single_loc_request_popup_menu_pane_g2

0x0001,

0xf288,	// (0x0003dd29) list_single_loc_request_popup_menu_pane_g_ParamLimits

0xf288,	// (0x0003dd29) list_single_loc_request_popup_menu_pane_g

0xe822,	// (0x0003d2c3) list_single_loc_request_popup_menu_pane_t1_ParamLimits

0xe822,	// (0x0003d2c3) list_single_loc_request_popup_menu_pane_t1

0x820a,	// (0x00036cab) bg_popup_window_pane_cp03_ParamLimits

0x820a,	// (0x00036cab) bg_popup_window_pane_cp03

0x8218,	// (0x00036cb9) heading_loc_req_pane_ParamLimits

0x8218,	// (0x00036cb9) heading_loc_req_pane

0x8224,	// (0x00036cc5) popup_dyc_status_message_window_g1_ParamLimits

0x8224,	// (0x00036cc5) popup_dyc_status_message_window_g1

0x8230,	// (0x00036cd1) popup_dyc_status_message_window_t1_ParamLimits

0x8230,	// (0x00036cd1) popup_dyc_status_message_window_t1

0x8242,	// (0x00036ce3) popup_dyc_status_message_window_t2_ParamLimits

0x8242,	// (0x00036ce3) popup_dyc_status_message_window_t2

0x8254,	// (0x00036cf5) popup_dyc_status_message_window_t3_ParamLimits

0x8254,	// (0x00036cf5) popup_dyc_status_message_window_t3

0x0002,

0xf28d,	// (0x0003dd2e) popup_dyc_status_message_window_t_ParamLimits

0xf28d,	// (0x0003dd2e) popup_dyc_status_message_window_t

0xddaa,	// (0x0003c84b) bg_heading_pane_cp01

0xe838,	// (0x0003d2d9) heading_loc_req_pane_g1

0xe840,	// (0x0003d2e1) heading_loc_req_pane_g2

0xe848,	// (0x0003d2e9) heading_loc_req_pane_g3

0x0002,

0xf294,	// (0x0003dd35) heading_loc_req_pane_g

0xe850,	// (0x0003d2f1) heading_loc_req_pane_t1

0xe85f,	// (0x0003d300) bg_popup_sub_pane_cp01_ParamLimits

0xe85f,	// (0x0003d300) bg_popup_sub_pane_cp01

0xe86d,	// (0x0003d30e) popup_cale_events_window_g1_ParamLimits

0xe86d,	// (0x0003d30e) popup_cale_events_window_g1

0xe88d,	// (0x0003d32e) popup_cale_events_window_g2_ParamLimits

0xe88d,	// (0x0003d32e) popup_cale_events_window_g2

0x0001,

0xf2c8,	// (0x0003dd69) popup_cale_events_window_g_ParamLimits

0xf2c8,	// (0x0003dd69) popup_cale_events_window_g

0xe8ad,	// (0x0003d34e) popup_cale_events_window_t1_ParamLimits

0xe8ad,	// (0x0003d34e) popup_cale_events_window_t1

0xe8bf,	// (0x0003d360) popup_cale_events_window_t2_ParamLimits

0xe8bf,	// (0x0003d360) popup_cale_events_window_t2

0xe8fd,	// (0x0003d39e) popup_cale_events_window_t3_ParamLimits

0xe8fd,	// (0x0003d39e) popup_cale_events_window_t3

0xe937,	// (0x0003d3d8) popup_cale_events_window_t4_ParamLimits

0xe937,	// (0x0003d3d8) popup_cale_events_window_t4

0x0003,

0xf2cd,	// (0x0003dd6e) popup_cale_events_window_t_ParamLimits

0xf2cd,	// (0x0003dd6e) popup_cale_events_window_t

0x8280,	// (0x00036d21) call_type_pane

0x0dde,	// (0x0002f87f) popup_call_status_window_g1

0x828c,	// (0x00036d2d) popup_call_status_window_g2

0x8298,	// (0x00036d39) popup_call_status_window_g3

0x0002,

0xf2d6,	// (0x0003dd77) popup_call_status_window_g

0xe96d,	// (0x0003d40e) call_type_pane_g1

0xe976,	// (0x0003d417) call_type_pane_g2

0x0001,

0xf2dd,	// (0x0003dd7e) call_type_pane_g

0xddaa,	// (0x0003c84b) bg_popup_sub_pane_cp02

0xe97f,	// (0x0003d420) listscroll_popup_wml_pane

0xe987,	// (0x0003d428) list_wml_pane

0xe991,	// (0x0003d432) scroll_pane_cp013

0x82a4,	// (0x00036d45) list_single_graphic_popup_wml_pane_ParamLimits

0x82a4,	// (0x00036d45) list_single_graphic_popup_wml_pane

0xe01d,	// (0x0003cabe) list_single_graphic_popup_wml_pane_g1

0xe99a,	// (0x0003d43b) list_single_graphic_popup_wml_pane_g2

0x0001,

0xf2e2,	// (0x0003dd83) list_single_graphic_popup_wml_pane_g

0xe9a2,	// (0x0003d443) list_single_graphic_popup_wml_pane_t1

0xe9b8,	// (0x0003d459) aid_call_pane

0xdffd,	// (0x0003ca9e) popup_clock_analogue_window_g1

0xdffd,	// (0x0003ca9e) popup_clock_analogue_window_g2

0x82b8,	// (0x00036d59) popup_clock_analogue_window_g3

0x82b8,	// (0x00036d59) popup_clock_analogue_window_g4

0xe01d,	// (0x0003cabe) popup_clock_analogue_window_g5

0x0004,

0xf2e7,	// (0x0003dd88) popup_clock_analogue_window_g

0x82c0,	// (0x00036d61) popup_clock_analogue_window_t1

0x82ce,	// (0x00036d6f) clock_digital_number_pane_ParamLimits

0x82ce,	// (0x00036d6f) clock_digital_number_pane

0x82da,	// (0x00036d7b) clock_digital_number_pane_cp02_ParamLimits

0x82da,	// (0x00036d7b) clock_digital_number_pane_cp02

0x82e6,	// (0x00036d87) clock_digital_number_pane_cp03_ParamLimits

0x82e6,	// (0x00036d87) clock_digital_number_pane_cp03

0x82f2,	// (0x00036d93) clock_digital_number_pane_cp04_ParamLimits

0x82f2,	// (0x00036d93) clock_digital_number_pane_cp04

0x82fe,	// (0x00036d9f) clock_digital_separator_pane_ParamLimits

0x82fe,	// (0x00036d9f) clock_digital_separator_pane

0x830a,	// (0x00036dab) popup_clock_digital_window_t1

0xe01d,	// (0x0003cabe) clock_digital_number_pane_g1

0xe01d,	// (0x0003cabe) clock_digital_number_pane_g2

0x0001,

0xf255,	// (0x0003dcf6) clock_digital_number_pane_g

0xe01d,	// (0x0003cabe) clock_digital_separator_pane_g1

0xe01d,	// (0x0003cabe) clock_digital_separator_pane_g2

0x0001,

0xf255,	// (0x0003dcf6) clock_digital_separator_pane_g

0xddaa,	// (0x0003c84b) bg_popup_window_pane_cp04

0xe9c0,	// (0x0003d461) heading_pane_cp03

0xe2c2,	// (0x0003cd63) listscroll_popup_gms_pane

0xddaa,	// (0x0003c84b) grid_large_graphic_popup_pane

0xe9c9,	// (0x0003d46a) listscroll_popup_gms_pane_g1

0xe9d2,	// (0x0003d473) listscroll_popup_gms_pane_g2

0x0001,

0xf2f2,	// (0x0003dd93) listscroll_popup_gms_pane_g

0xe9db,	// (0x0003d47c) scroll_pane_cp014

0xd98b,	// (0x0003c42c) cell_large_graphic_popup_pane_ParamLimits

0xd98b,	// (0x0003c42c) cell_large_graphic_popup_pane

0xe07f,	// (0x0003cb20) cell_large_graphic_popup_pane_g1_ParamLimits

0xe07f,	// (0x0003cb20) cell_large_graphic_popup_pane_g1

0xe9e3,	// (0x0003d484) cell_large_graphic_popup_pane_g2_ParamLimits

0xe9e3,	// (0x0003d484) cell_large_graphic_popup_pane_g2

0xe9f1,	// (0x0003d492) cell_large_graphic_popup_pane_g3_ParamLimits

0xe9f1,	// (0x0003d492) cell_large_graphic_popup_pane_g3

0xe9ff,	// (0x0003d4a0) cell_large_graphic_popup_pane_g4_ParamLimits

0xe9ff,	// (0x0003d4a0) cell_large_graphic_popup_pane_g4

0x0003,

0xf2f7,	// (0x0003dd98) cell_large_graphic_popup_pane_g_ParamLimits

0xf2f7,	// (0x0003dd98) cell_large_graphic_popup_pane_g

0xddaa,	// (0x0003c84b) grid_highlight_pane_cp010

0xe01d,	// (0x0003cabe) bg_popup_call_pane_g1

0xea10,	// (0x0003d4b1) list_single_graphic_popup_conf_pane_ParamLimits

0xea10,	// (0x0003d4b1) list_single_graphic_popup_conf_pane

0xea23,	// (0x0003d4c4) list_highlight_pane_cp01

0xea2c,	// (0x0003d4cd) list_single_graphic_popup_conf_pane_g1

0xea34,	// (0x0003d4d5) list_single_graphic_popup_conf_pane_g2

0x0001,

0xf300,	// (0x0003dda1) list_single_graphic_popup_conf_pane_g

0xea3c,	// (0x0003d4dd) list_single_graphic_popup_conf_pane_t1

0xea4a,	// (0x0003d4eb) linegrid_cams_pane_g1

0x8327,	// (0x00036dc8) linegrid_cams_pane_g2

0xe1f9,	// (0x0003cc9a) linegrid_cams_pane_g3

0xea53,	// (0x0003d4f4) linegrid_cams_pane_g4

0x8330,	// (0x00036dd1) linegrid_cams_pane_g5

0x8339,	// (0x00036dda) linegrid_cams_pane_g6

0xe2a9,	// (0x0003cd4a) linegrid_cams_pane_g7

0x0006,

0xf305,	// (0x0003dda6) linegrid_cams_pane_g

0xea5c,	// (0x0003d4fd) popup_clock_analogue_window

0xea5c,	// (0x0003d4fd) popup_clock_digital_window

0xddaa,	// (0x0003c84b) popup_phob_thumbnail_window

0xe01d,	// (0x0003cabe) call_video_uplink_pane_g1

0xea65,	// (0x0003d506) call_video_uplink_pane_g2

0x0001,

0xf314,	// (0x0003ddb5) call_video_uplink_pane_g

0xe276,	// (0x0003cd17) video_uplink_pane

0xea6d,	// (0x0003d50e) mce_image_pane_g1

0x8342,	// (0x00036de3) mce_image_pane_g2

0x834a,	// (0x00036deb) mce_image_pane_g3

0x8352,	// (0x00036df3) mce_image_pane_g4

0x835a,	// (0x00036dfb) mce_image_pane_g5

0x0004,

0xf319,	// (0x0003ddba) mce_image_pane_g

0xea77,	// (0x0003d518) control_top_pane_stacon_cp01_ParamLimits

0xea77,	// (0x0003d518) control_top_pane_stacon_cp01

0xea87,	// (0x0003d528) uni_indicator_pane_stacon_cp01_ParamLimits

0xea87,	// (0x0003d528) uni_indicator_pane_stacon_cp01

0xea98,	// (0x0003d539) bg_popup_sub_pane_cp03

0xeaa2,	// (0x0003d543) chi_dic_find_pane

0x8362,	// (0x00036e03) listscroll_chi_dic_pane

0xeaaa,	// (0x0003d54b) main_pane_chidic_g1

0xeab2,	// (0x0003d553) chi_dic_find_pane_t1

0xeac0,	// (0x0003d561) find_chidic_pane

0xeac9,	// (0x0003d56a) chi_dic_list_pane_ParamLimits

0xeac9,	// (0x0003d56a) chi_dic_list_pane

0xe9db,	// (0x0003d47c) scroll_pane_cp020

0xeada,	// (0x0003d57b) find_chidic_pane_t1

0xddaa,	// (0x0003c84b) input_focus_pane_cp06

0x8374,	// (0x00036e15) list_chi_dic_pane_ParamLimits

0x8374,	// (0x00036e15) list_chi_dic_pane

0x8387,	// (0x00036e28) list_chi_dic_pane_t1_ParamLimits

0x8387,	// (0x00036e28) list_chi_dic_pane_t1

0xddaa,	// (0x0003c84b) list_highlight_pane_cp020

0xeae9,	// (0x0003d58a) bg_cale_heading_pane_g1

0x839a,	// (0x00036e3b) bg_cale_heading_pane_g2

0x83a2,	// (0x00036e43) bg_cale_heading_pane_g3

0x83aa,	// (0x00036e4b) bg_cale_heading_pane_g4

0x83b2,	// (0x00036e53) bg_cale_heading_pane_g5

0x83ba,	// (0x00036e5b) bg_cale_heading_pane_g6

0x83c2,	// (0x00036e63) bg_cale_heading_pane_g7

0x83ca,	// (0x00036e6b) bg_cale_heading_pane_g8

0x83d2,	// (0x00036e73) bg_cale_heading_pane_g9

0x0008,

0xf324,	// (0x0003ddc5) bg_cale_heading_pane_g

0xeae9,	// (0x0003d58a) bg_cale_side_pane_g1

0x83da,	// (0x00036e7b) bg_cale_side_pane_g2

0x83e2,	// (0x00036e83) bg_cale_side_pane_g3

0x83ea,	// (0x00036e8b) bg_cale_side_pane_g4

0x83f2,	// (0x00036e93) bg_cale_side_pane_g5

0x83fa,	// (0x00036e9b) bg_cale_side_pane_g6

0x8402,	// (0x00036ea3) bg_cale_side_pane_g7

0x840a,	// (0x00036eab) bg_cale_side_pane_g8

0x8412,	// (0x00036eb3) bg_cale_side_pane_g9

0x0008,

0xf337,	// (0x0003ddd8) bg_cale_side_pane_g

0x841a,	// (0x00036ebb) popup_call_status_window_ParamLimits

0x841a,	// (0x00036ebb) popup_call_status_window

0xeaf1,	// (0x0003d592) stacon_top_pane

0xeaf9,	// (0x0003d59a) status_pane_ParamLimits

0xeaf9,	// (0x0003d59a) status_pane

0xeb13,	// (0x0003d5b4) status_small_pane

0xeb1b,	// (0x0003d5bc) control_pane

0xddaa,	// (0x0003c84b) stacon_bottom_pane

0xeb23,	// (0x0003d5c4) list_single_mce_smart_pane_t1_ParamLimits

0xeb23,	// (0x0003d5c4) list_single_mce_smart_pane_t1

0xeb36,	// (0x0003d5d7) list_single_mce_smart_pane_t2_ParamLimits

0xeb36,	// (0x0003d5d7) list_single_mce_smart_pane_t2

0x0001,

0xf34a,	// (0x0003ddeb) list_single_mce_smart_pane_t_ParamLimits

0xf34a,	// (0x0003ddeb) list_single_mce_smart_pane_t

0x8429,	// (0x00036eca) compass_pane

0x8432,	// (0x00036ed3) main_location2_pane_t1

0x8448,	// (0x00036ee9) main_location2_pane_t2

0x845e,	// (0x00036eff) main_location2_pane_t3

0x0003,

0xf34f,	// (0x0003ddf0) main_location2_pane_t

0xeb5e,	// (0x0003d5ff) compass_pane_g1_ParamLimits

0xeb5e,	// (0x0003d5ff) compass_pane_g1

0x84a6,	// (0x00036f47) compass_pane_t1

0x84b5,	// (0x00036f56) compass_pane_t2

0x0005,

0xf358,	// (0x0003ddf9) compass_pane_t

0x84fc,	// (0x00036f9d) text_secondary_cp61

0xebac,	// (0x0003d64d) navi_pane_cams_g5

0xebf8,	// (0x0003d699) navi_pane_im_t1

0xec06,	// (0x0003d6a7) navi_pane_mp_g1_ParamLimits

0xec06,	// (0x0003d6a7) navi_pane_mp_g1

0xec1a,	// (0x0003d6bb) navi_pane_mp_g2_ParamLimits

0xec1a,	// (0x0003d6bb) navi_pane_mp_g2

0xec26,	// (0x0003d6c7) navi_pane_mp_g3_ParamLimits

0xec26,	// (0x0003d6c7) navi_pane_mp_g3

0x0002,

0xf36c,	// (0x0003de0d) navi_pane_mp_g_ParamLimits

0xf36c,	// (0x0003de0d) navi_pane_mp_g

0xec32,	// (0x0003d6d3) navi_pane_mp_t1

0xec40,	// (0x0003d6e1) navi_pane_mp_t2

0x0002,

0xf373,	// (0x0003de14) navi_pane_mp_t

0xecab,	// (0x0003d74c) navi_pane_vt_g1

0xec32,	// (0x0003d6d3) navi_pane_vt_t1

0xecb3,	// (0x0003d754) navi_slider_pane

0xe2c2,	// (0x0003cd63) zooming_pane

0xecbb,	// (0x0003d75c) navi_slider_pane_g1

0x857e,	// (0x0003701f) navi_slider_pane_g2

0x0006,

0xf37a,	// (0x0003de1b) navi_slider_pane_g

0xecdf,	// (0x0003d780) aid_levels_zoom

0xece7,	// (0x0003d788) zooming_pane_g1

0xecef,	// (0x0003d790) zooming_pane_g2

0xecef,	// (0x0003d790) zooming_pane_g3

0x0002,

0xf389,	// (0x0003de2a) zooming_pane_g

0xecf7,	// (0x0003d798) level_10_zoom

0xed00,	// (0x0003d7a1) level_11_zoom

0xed09,	// (0x0003d7aa) level_1_zoom

0xed12,	// (0x0003d7b3) level_2_zoom

0xed1b,	// (0x0003d7bc) level_3_zoom

0xed24,	// (0x0003d7c5) level_4_zoom

0xed2d,	// (0x0003d7ce) level_5_zoom

0xed36,	// (0x0003d7d7) level_6_zoom

0xed3f,	// (0x0003d7e0) level_7_zoom

0xed48,	// (0x0003d7e9) level_8_zoom

0xed51,	// (0x0003d7f2) level_9_zoom

0xed62,	// (0x0003d803) popup_phob_thumbnail_window_g1

0xed6a,	// (0x0003d80b) popup_phob_thumbnail_window_g2

0x0001,

0xf390,	// (0x0003de31) popup_phob_thumbnail_window_g

0x8d65,	// (0x00037806) level_1_location

0x8d6d,	// (0x0003780e) level_2_location

0x8d75,	// (0x00037816) level_3_location

0x8d7d,	// (0x0003781e) level_4_location

0xe2c2,	// (0x0003cd63) level_5_location

0x8590,	// (0x00037031) mce_icon_pane_g1

0x8598,	// (0x00037039) mce_icon_pane_g2

0x0001,

0xf395,	// (0x0003de36) mce_icon_pane_g

0x85a0,	// (0x00037041) main_mup_pane_g1_ParamLimits

0x85a0,	// (0x00037041) main_mup_pane_g1

0xe09b,	// (0x0003cb3c) main_mup_pane_g2_ParamLimits

0xe09b,	// (0x0003cb3c) main_mup_pane_g2

0xe09b,	// (0x0003cb3c) main_mup_pane_g3_ParamLimits

0xe09b,	// (0x0003cb3c) main_mup_pane_g3

0xe09b,	// (0x0003cb3c) main_mup_pane_g4_ParamLimits

0xe09b,	// (0x0003cb3c) main_mup_pane_g4

0xe09b,	// (0x0003cb3c) main_mup_pane_g5_ParamLimits

0xe09b,	// (0x0003cb3c) main_mup_pane_g5

0xe09b,	// (0x0003cb3c) main_mup_pane_g6_ParamLimits

0xe09b,	// (0x0003cb3c) main_mup_pane_g6

0xe09b,	// (0x0003cb3c) main_mup_pane_g7_ParamLimits

0xe09b,	// (0x0003cb3c) main_mup_pane_g7

0xe09b,	// (0x0003cb3c) main_mup_pane_g8_ParamLimits

0xe09b,	// (0x0003cb3c) main_mup_pane_g8

0xe09b,	// (0x0003cb3c) main_mup_pane_g9_ParamLimits

0xe09b,	// (0x0003cb3c) main_mup_pane_g9

0xe09b,	// (0x0003cb3c) main_mup_pane_g10_ParamLimits

0xe09b,	// (0x0003cb3c) main_mup_pane_g10

0xe09b,	// (0x0003cb3c) main_mup_pane_g11_ParamLimits

0xe09b,	// (0x0003cb3c) main_mup_pane_g11

0xe08d,	// (0x0003cb2e) main_mup_pane_g12_ParamLimits

0xe08d,	// (0x0003cb2e) main_mup_pane_g12

0xe09b,	// (0x0003cb3c) main_mup_pane_g13_ParamLimits

0xe09b,	// (0x0003cb3c) main_mup_pane_g13

0x000c,

0xf39a,	// (0x0003de3b) main_mup_pane_g_ParamLimits

0xf39a,	// (0x0003de3b) main_mup_pane_g

0xe0a9,	// (0x0003cb4a) main_mup_pane_t1_ParamLimits

0xe0a9,	// (0x0003cb4a) main_mup_pane_t1

0xe0a9,	// (0x0003cb4a) main_mup_pane_t2_ParamLimits

0xe0a9,	// (0x0003cb4a) main_mup_pane_t2

0xe0a9,	// (0x0003cb4a) main_mup_pane_t3_ParamLimits

0xe0a9,	// (0x0003cb4a) main_mup_pane_t3

0xe315,	// (0x0003cdb6) main_mup_pane_t4_ParamLimits

0xe315,	// (0x0003cdb6) main_mup_pane_t4

0xe315,	// (0x0003cdb6) main_mup_pane_t5_ParamLimits

0xe315,	// (0x0003cdb6) main_mup_pane_t5

0xed72,	// (0x0003d813) main_mup_pane_t6_ParamLimits

0xed72,	// (0x0003d813) main_mup_pane_t6

0x0005,

0xf3b5,	// (0x0003de56) main_mup_pane_t_ParamLimits

0xf3b5,	// (0x0003de56) main_mup_pane_t

0xed86,	// (0x0003d827) mup_progress_pane_ParamLimits

0xed86,	// (0x0003d827) mup_progress_pane

0x1a65,	// (0x00030506) mup_visualizer_pane_ParamLimits

0x1a65,	// (0x00030506) mup_visualizer_pane

0x1a65,	// (0x00030506) mup_volume_pane_ParamLimits

0x1a65,	// (0x00030506) mup_volume_pane

0xe08d,	// (0x0003cb2e) mup_visualizer_pane_g1_ParamLimits

0xe08d,	// (0x0003cb2e) mup_visualizer_pane_g1

0xed94,	// (0x0003d835) mup_visualizer_pane_g2_ParamLimits

0xed94,	// (0x0003d835) mup_visualizer_pane_g2

0xe07f,	// (0x0003cb20) mup_visualizer_pane_g3_ParamLimits

0xe07f,	// (0x0003cb20) mup_visualizer_pane_g3

0x0002,

0xf3c2,	// (0x0003de63) mup_visualizer_pane_g_ParamLimits

0xf3c2,	// (0x0003de63) mup_visualizer_pane_g

0xe343,	// (0x0003cde4) mup_volume_pane_g1

0xe343,	// (0x0003cde4) mup_volume_pane_g2

0x0001,

0xf3c9,	// (0x0003de6a) mup_volume_pane_g

0xe343,	// (0x0003cde4) mup_progress_pane_g1

0xe343,	// (0x0003cde4) mup_progress_pane_g2

0xe343,	// (0x0003cde4) mup_progress_pane_g3

0x0002,

0xf3ce,	// (0x0003de6f) mup_progress_pane_g

0xddaa,	// (0x0003c84b) bg_popup_window_pane_cp05

0xeda2,	// (0x0003d843) heading_pane_cp02_ParamLimits

0xeda2,	// (0x0003d843) heading_pane_cp02

0xedbc,	// (0x0003d85d) list_popup_blid_pane

0xedc4,	// (0x0003d865) list_blid_sat_info_pane_ParamLimits

0xedc4,	// (0x0003d865) list_blid_sat_info_pane

0xedd7,	// (0x0003d878) list_blid_sat_info_pane_g1

0xeddf,	// (0x0003d880) list_blid_sat_info_pane_t1

0x8683,	// (0x00037124) mup_equalizer_pane_ParamLimits

0x8683,	// (0x00037124) mup_equalizer_pane

0x869c,	// (0x0003713d) mup_equalizer_pane_cp1_ParamLimits

0x869c,	// (0x0003713d) mup_equalizer_pane_cp1

0x86b5,	// (0x00037156) mup_equalizer_pane_cp2_ParamLimits

0x86b5,	// (0x00037156) mup_equalizer_pane_cp2

0x86ce,	// (0x0003716f) mup_equalizer_pane_cp3_ParamLimits

0x86ce,	// (0x0003716f) mup_equalizer_pane_cp3

0x86e7,	// (0x00037188) mup_equalizer_pane_cp4_ParamLimits

0x86e7,	// (0x00037188) mup_equalizer_pane_cp4

0x8700,	// (0x000371a1) mup_equalizer_pane_cp5

0x8712,	// (0x000371b3) mup_equalizer_pane_cp6

0x8724,	// (0x000371c5) mup_equalizer_pane_cp7

0x1639,	// (0x000300da) bg_popup_call_poc_act_pane_g9

0x1641,	// (0x000300e2) bg_popup_call_poc_act_pane_g10

0x1649,	// (0x000300ea) bg_popup_call_poc_act_pane_g11

0x000a,

0xe005,	// (0x0003caa6) mup_scale_pane

0xe01d,	// (0x0003cabe) mup_scale_pane_g1

0xeded,	// (0x0003d88e) mup_scale_pane_g2

0x0006,

0xf3ea,	// (0x0003de8b) mup_scale_pane_g

0xee11,	// (0x0003d8b2) msg_data_pane

0xee19,	// (0x0003d8ba) scroll_pane_cp017

0x57fe,	// (0x0003429f) bg_list_pane_cp04_ParamLimits

0x57fe,	// (0x0003429f) bg_list_pane_cp04

0xee21,	// (0x0003d8c2) msg_data_pane_g1

0x8342,	// (0x00036de3) msg_data_pane_g2

0x834a,	// (0x00036deb) msg_data_pane_g3

0x8748,	// (0x000371e9) msg_data_pane_g4

0x835a,	// (0x00036dfb) msg_data_pane_g5

0x8590,	// (0x00037031) msg_data_pane_g6

0x8750,	// (0x000371f1) msg_data_pane_g7

0x0006,

0xf3f9,	// (0x0003de9a) msg_data_pane_g

0x581e,	// (0x000342bf) msg_text_pane_ParamLimits

0x581e,	// (0x000342bf) msg_text_pane

0x8758,	// (0x000371f9) qrid_highlight_pane_cp011_ParamLimits

0x8758,	// (0x000371f9) qrid_highlight_pane_cp011

0xddaa,	// (0x0003c84b) msg_body_pane

0xddaa,	// (0x0003c84b) msg_header_pane

0xee32,	// (0x0003d8d3) input_focus_pane_cp07

0x5856,	// (0x000342f7) msg_header_pane_t1_ParamLimits

0x5856,	// (0x000342f7) msg_header_pane_t1

0x586c,	// (0x0003430d) msg_header_pane_t2_ParamLimits

0x586c,	// (0x0003430d) msg_header_pane_t2

0x0001,

0xf40d,	// (0x0003deae) msg_header_pane_t_ParamLimits

0xf40d,	// (0x0003deae) msg_header_pane_t

0xee47,	// (0x0003d8e8) msg_body_pane_g1

0x5883,	// (0x00034324) msg_body_pane_t1_ParamLimits

0x5883,	// (0x00034324) msg_body_pane_t1

0x58ae,	// (0x0003434f) msg_body_pane_t2_ParamLimits

0x58ae,	// (0x0003434f) msg_body_pane_t2

0x58c0,	// (0x00034361) msg_body_pane_t3_ParamLimits

0x58c0,	// (0x00034361) msg_body_pane_t3

0x0002,

0xf412,	// (0x0003deb3) msg_body_pane_t_ParamLimits

0xf412,	// (0x0003deb3) msg_body_pane_t

0x87bc,	// (0x0003725d) main_viewer_pane_g1_ParamLimits

0x87bc,	// (0x0003725d) main_viewer_pane_g1

0x87c8,	// (0x00037269) main_viewer_pane_g2_ParamLimits

0x87c8,	// (0x00037269) main_viewer_pane_g2

0x87d4,	// (0x00037275) main_viewer_pane_g3_ParamLimits

0x87d4,	// (0x00037275) main_viewer_pane_g3

0x87e3,	// (0x00037284) main_viewer_pane_g4_ParamLimits

0x87e3,	// (0x00037284) main_viewer_pane_g4

0x87f2,	// (0x00037293) main_viewer_pane_g5_ParamLimits

0x87f2,	// (0x00037293) main_viewer_pane_g5

0x87f2,	// (0x00037293) main_viewer_pane_g7_ParamLimits

0x87f2,	// (0x00037293) main_viewer_pane_g7

0x8804,	// (0x000372a5) main_viewer_pane_g8_ParamLimits

0x8804,	// (0x000372a5) main_viewer_pane_g8

0x0007,

0xf422,	// (0x0003dec3) main_viewer_pane_g_ParamLimits

0xf422,	// (0x0003dec3) main_viewer_pane_g

0xee4f,	// (0x0003d8f0) viewer_content_pane_ParamLimits

0xee4f,	// (0x0003d8f0) viewer_content_pane

0x8834,	// (0x000372d5) main_postcard_pane_g1_ParamLimits

0x8834,	// (0x000372d5) main_postcard_pane_g1

0x8840,	// (0x000372e1) main_postcard_pane_g2_ParamLimits

0x8840,	// (0x000372e1) main_postcard_pane_g2

0x884c,	// (0x000372ed) main_postcard_pane_g3_ParamLimits

0x884c,	// (0x000372ed) main_postcard_pane_g3

0x0005,

0xf433,	// (0x0003ded4) main_postcard_pane_g_ParamLimits

0xf433,	// (0x0003ded4) main_postcard_pane_g

0x8858,	// (0x000372f9) main_postcard_pane_g4

0x1814,	// (0x000302b5) smil_status_volume_pane_g2

0x887c,	// (0x0003731d) postcard_pane_ParamLimits

0x887c,	// (0x0003731d) postcard_pane

0x0dde,	// (0x0002f87f) postcard_pane_g1_ParamLimits

0x0dde,	// (0x0002f87f) postcard_pane_g1

0x88ac,	// (0x0003734d) postcard_pane_g2_ParamLimits

0x88ac,	// (0x0003734d) postcard_pane_g2

0x88b8,	// (0x00037359) postcard_pane_g3_ParamLimits

0x88b8,	// (0x00037359) postcard_pane_g3

0xee5d,	// (0x0003d8fe) postcard_pane_g4_ParamLimits

0xee5d,	// (0x0003d8fe) postcard_pane_g4

0x88c4,	// (0x00037365) postcard_pane_g5_ParamLimits

0x88c4,	// (0x00037365) postcard_pane_g5

0x88d0,	// (0x00037371) postcard_pane_g6_ParamLimits

0x88d0,	// (0x00037371) postcard_pane_g6

0xee6b,	// (0x0003d90c) postcard_pane_g7_ParamLimits

0xee6b,	// (0x0003d90c) postcard_pane_g7

0x0006,

0xf440,	// (0x0003dee1) postcard_pane_g_ParamLimits

0xf440,	// (0x0003dee1) postcard_pane_g

0x88dc,	// (0x0003737d) main_mp2_pane_g1_ParamLimits

0x88dc,	// (0x0003737d) main_mp2_pane_g1

0x88e8,	// (0x00037389) main_mp2_pane_g2_ParamLimits

0x88e8,	// (0x00037389) main_mp2_pane_g2

0x88f4,	// (0x00037395) main_mp2_pane_g3_ParamLimits

0x88f4,	// (0x00037395) main_mp2_pane_g3

0x0002,

0xf44f,	// (0x0003def0) main_mp2_pane_g_ParamLimits

0xf44f,	// (0x0003def0) main_mp2_pane_g

0x8900,	// (0x000373a1) main_mp2_pane_t1_ParamLimits

0x8900,	// (0x000373a1) main_mp2_pane_t1

0x8915,	// (0x000373b6) main_mp2_pane_t2_ParamLimits

0x8915,	// (0x000373b6) main_mp2_pane_t2

0x8927,	// (0x000373c8) main_mp2_pane_t3_ParamLimits

0x8927,	// (0x000373c8) main_mp2_pane_t3

0x0002,

0xf456,	// (0x0003def7) main_mp2_pane_t_ParamLimits

0xf456,	// (0x0003def7) main_mp2_pane_t

0xee79,	// (0x0003d91a) pec_content_pane_ParamLimits

0xee79,	// (0x0003d91a) pec_content_pane

0xe4b1,	// (0x0003cf52) scroll_pane_cp015

0xee8b,	// (0x0003d92c) pec_attribute_pane_ParamLimits

0xee8b,	// (0x0003d92c) pec_attribute_pane

0x8939,	// (0x000373da) pec_content_pane_g1_ParamLimits

0x8939,	// (0x000373da) pec_content_pane_g1

0xee9b,	// (0x0003d93c) pec_content_pane_t1_ParamLimits

0xee9b,	// (0x0003d93c) pec_content_pane_t1

0xeead,	// (0x0003d94e) pec_content_pane_t2_ParamLimits

0xeead,	// (0x0003d94e) pec_content_pane_t2

0x0001,

0xf45d,	// (0x0003defe) pec_content_pane_t_ParamLimits

0xf45d,	// (0x0003defe) pec_content_pane_t

0x8945,	// (0x000373e6) list_single_graphic_pane_cp01_ParamLimits

0x8945,	// (0x000373e6) list_single_graphic_pane_cp01

0xe005,	// (0x0003caa6) bg_popup_sub_pane_cp04

0xeebf,	// (0x0003d960) popup_mup_playback_window_g1

0xeecb,	// (0x0003d96c) popup_mup_playback_window_t1

0xeee0,	// (0x0003d981) popup_mup_playback_window_t2

0x0001,

0xf462,	// (0x0003df03) popup_mup_playback_window_t

0xef17,	// (0x0003d9b8) main_image_pane_g1_ParamLimits

0xef17,	// (0x0003d9b8) main_image_pane_g1

0xef5a,	// (0x0003d9fb) scroll_pane_cp018_ParamLimits

0xef5a,	// (0x0003d9fb) scroll_pane_cp018

0xef72,	// (0x0003da13) scroll_pane_cp016_ParamLimits

0xef72,	// (0x0003da13) scroll_pane_cp016

0x89ca,	// (0x0003746b) smil2_image_pane_ParamLimits

0x89ca,	// (0x0003746b) smil2_image_pane

0x89f2,	// (0x00037493) smil2_root_pane_ParamLimits

0x89f2,	// (0x00037493) smil2_root_pane

0x8a1e,	// (0x000374bf) smil2_text_pane_ParamLimits

0x8a1e,	// (0x000374bf) smil2_text_pane

0xddaa,	// (0x0003c84b) bg_list_pane_cp06

0xefa6,	// (0x0003da47) grid_radio_pane

0xddaa,	// (0x0003c84b) bg_popup_window_pane_cp06

0xefae,	// (0x0003da4f) main_fmradio_pane_t1

0x1691,	// (0x00030132) heading_pane_cp04

0xefbc,	// (0x0003da5d) main_fmradio_pane_t2

0x1699,	// (0x0003013a) popup_cale_lunar_info_window_g1

0xefca,	// (0x0003da6b) main_fmradio_pane_t3

0x16a1,	// (0x00030142) popup_cale_lunar_info_window_g2

0xefd8,	// (0x0003da79) main_fmradio_pane_t4

0x0001,

0xefe6,	// (0x0003da87) main_fmradio_pane_t5

0x0004,

0xf555,	// (0x0003dff6) popup_cale_lunar_info_window_g

0xf477,	// (0x0003df18) main_fmradio_pane_t

0xeff4,	// (0x0003da95) wait_bar_pane_cp03

0xe302,	// (0x0003cda3) cell_fmradio_pane_ParamLimits

0xe302,	// (0x0003cda3) cell_fmradio_pane

0xee6b,	// (0x0003d90c) cell_fmradio_pane_g1_ParamLimits

0xee6b,	// (0x0003d90c) cell_fmradio_pane_g1

0xddaa,	// (0x0003c84b) grid_highlight_pane_cp011

0x072a,	// (0x0002f1cb) poc_content_pane_ParamLimits

0x072a,	// (0x0002f1cb) poc_content_pane

0x073d,	// (0x0002f1de) scroll_pane_cp019

0x8a52,	// (0x000374f3) popup_call_poc_act_window_ParamLimits

0x8a52,	// (0x000374f3) popup_call_poc_act_window

0x8a5f,	// (0x00037500) popup_call_poc_inact_window_ParamLimits

0x8a5f,	// (0x00037500) popup_call_poc_inact_window

0xf519,	// (0x0003dfba) bg_popup_call_poc_act_pane_g

0x1651,	// (0x000300f2) bg_popup_call_poc_inact_pane_g1

0x1659,	// (0x000300fa) bg_popup_call_poc_inact_pane_g2

0x0745,	// (0x0002f1e6) popup_call_poc_act_window_g2

0x1661,	// (0x00030102) bg_popup_call_poc_inact_pane_g3

0x15e1,	// (0x00030082) bg_popup_call_poc_inact_pane_g4

0x1669,	// (0x0003010a) bg_popup_call_poc_inact_pane_g5

0x074d,	// (0x0002f1ee) popup_call_poc_act_window_t1_ParamLimits

0x074d,	// (0x0002f1ee) popup_call_poc_act_window_t1

0x0775,	// (0x0002f216) popup_call_poc_act_window_t2_ParamLimits

0x0775,	// (0x0002f216) popup_call_poc_act_window_t2

0x079d,	// (0x0002f23e) popup_call_poc_act_window_t3_ParamLimits

0x079d,	// (0x0002f23e) popup_call_poc_act_window_t3

0x07c5,	// (0x0002f266) popup_call_poc_act_window_t4_ParamLimits

0x07c5,	// (0x0002f266) popup_call_poc_act_window_t4

0x0003,

0xf482,	// (0x0003df23) popup_call_poc_act_window_t_ParamLimits

0xf482,	// (0x0003df23) popup_call_poc_act_window_t

0x1671,	// (0x00030112) bg_popup_call_poc_inact_pane_g6

0x1679,	// (0x0003011a) bg_popup_call_poc_inact_pane_g7

0x1681,	// (0x00030122) bg_popup_call_poc_inact_pane_g8

0x07d7,	// (0x0002f278) popup_call_poc_inact_window_g2

0x1689,	// (0x0003012a) bg_popup_call_poc_inact_pane_g9

0x0008,

0xf530,	// (0x0003dfd1) bg_popup_call_poc_inact_pane_g

0x07df,	// (0x0002f280) popup_call_poc_inact_window_t1_ParamLimits

0x07df,	// (0x0002f280) popup_call_poc_inact_window_t1

0x07f4,	// (0x0002f295) popup_call_poc_inact_window_t2_ParamLimits

0x07f4,	// (0x0002f295) popup_call_poc_inact_window_t2

0x0809,	// (0x0002f2aa) popup_call_poc_inact_window_t3_ParamLimits

0x0809,	// (0x0002f2aa) popup_call_poc_inact_window_t3

0x0002,

0xf48b,	// (0x0003df2c) popup_call_poc_inact_window_t_ParamLimits

0xf48b,	// (0x0003df2c) popup_call_poc_inact_window_t

0x179f,	// (0x00030240) context_pane_ParamLimits

0x8fdb,	// (0x00037a7c) signal_pane_ParamLimits

0xe2c2,	// (0x0003cd63) main_call2_pane

0x8f5d,	// (0x000379fe) popup_phob_thumbnail2_window_ParamLimits

0x8f5d,	// (0x000379fe) popup_phob_thumbnail2_window

0x876e,	// (0x0003720f) aid_hotspot_pointer_arrow_pane

0x8776,	// (0x00037217) aid_hotspot_pointer_hand_pane

0x8d33,	// (0x000377d4) phob_pre_status_pane_g5

0xd98b,	// (0x0003c42c) cams_zoom_pane_ParamLimits

0xd98b,	// (0x0003c42c) image_vga_pane_ParamLimits

0xe08d,	// (0x0003cb2e) main_camera_pane_g1_ParamLimits

0xe08d,	// (0x0003cb2e) main_camera_pane_g2_ParamLimits

0xe08d,	// (0x0003cb2e) main_camera_pane_g3_ParamLimits

0xe08d,	// (0x0003cb2e) main_camera_pane_g4_ParamLimits

0xe08d,	// (0x0003cb2e) main_camera_pane_g5_ParamLimits

0xe08d,	// (0x0003cb2e) main_camera_pane_g6_ParamLimits

0xe08d,	// (0x0003cb2e) main_camera_pane_g7_ParamLimits

0xf19f,	// (0x0003dc40) main_camera_pane_g_ParamLimits

0xe315,	// (0x0003cdb6) main_camera_pane_t1_ParamLimits

0xe315,	// (0x0003cdb6) main_camera_pane_t2_ParamLimits

0xf1b0,	// (0x0003dc51) main_camera_pane_t_ParamLimits

0xe005,	// (0x0003caa6) bg_popup_preview_window_pane_cp01_ParamLimits

0xe005,	// (0x0003caa6) bg_popup_preview_window_pane_cp01

0x081e,	// (0x0002f2bf) popup_phob_thumbnail2_window_g1_ParamLimits

0x081e,	// (0x0002f2bf) popup_phob_thumbnail2_window_g1

0xddaa,	// (0x0003c84b) call2_cli_visual_pane

0x8a7b,	// (0x0003751c) popup_call2_audio_conf_window_ParamLimits

0x8a7b,	// (0x0003751c) popup_call2_audio_conf_window

0x8a8e,	// (0x0003752f) popup_call2_audio_first_window_ParamLimits

0x8a8e,	// (0x0003752f) popup_call2_audio_first_window

0x8b0a,	// (0x000375ab) popup_call2_audio_in_window_ParamLimits

0x8b0a,	// (0x000375ab) popup_call2_audio_in_window

0x8b3a,	// (0x000375db) popup_call2_audio_out_window_ParamLimits

0x8b3a,	// (0x000375db) popup_call2_audio_out_window

0x8b86,	// (0x00037627) popup_call2_audio_second_window_ParamLimits

0x8b86,	// (0x00037627) popup_call2_audio_second_window

0x8bd2,	// (0x00037673) popup_call2_audio_wait_window_ParamLimits

0x8bd2,	// (0x00037673) popup_call2_audio_wait_window

0xddaa,	// (0x0003c84b) bg_popup_call2_act_pane_cp03

0xdfe7,	// (0x0003ca88) list_conf_pane_cp

0x082a,	// (0x0002f2cb) popup_call2_audio_conf_window_t1

0xea10,	// (0x0003d4b1) list_single_graphic_popup_conf2_pane_ParamLimits

0xea10,	// (0x0003d4b1) list_single_graphic_popup_conf2_pane

0xea23,	// (0x0003d4c4) list_highlight_pane_cp04

0x0838,	// (0x0002f2d9) list_single_graphic_popup_conf2_pane_g1

0xea34,	// (0x0003d4d5) list_single_graphic_popup_conf2_pane_g2

0x0001,

0xf492,	// (0x0003df33) list_single_graphic_popup_conf2_pane_g

0x0840,	// (0x0002f2e1) list_single_graphic_popup_conf2_pane_t1

0x084e,	// (0x0002f2ef) bg_popup_call2_act_pane_cp01_ParamLimits

0x084e,	// (0x0002f2ef) bg_popup_call2_act_pane_cp01

0x08d8,	// (0x0002f379) call_type_pane_cp05_ParamLimits

0x08d8,	// (0x0002f379) call_type_pane_cp05

0x092c,	// (0x0002f3cd) popup_call2_audio_second_window_g1_ParamLimits

0x092c,	// (0x0002f3cd) popup_call2_audio_second_window_g1

0x0980,	// (0x0002f421) popup_call2_audio_second_window_g2_ParamLimits

0x0980,	// (0x0002f421) popup_call2_audio_second_window_g2

0x0002,

0xf497,	// (0x0003df38) popup_call2_audio_second_window_g_ParamLimits

0xf497,	// (0x0003df38) popup_call2_audio_second_window_g

0x09e5,	// (0x0002f486) popup_call2_audio_second_window_t1_ParamLimits

0x09e5,	// (0x0002f486) popup_call2_audio_second_window_t1

0x0aa0,	// (0x0002f541) popup_call2_audio_second_window_t2_ParamLimits

0x0aa0,	// (0x0002f541) popup_call2_audio_second_window_t2

0x0af3,	// (0x0002f594) popup_call2_audio_second_window_t3_ParamLimits

0x0af3,	// (0x0002f594) popup_call2_audio_second_window_t3

0x0003,

0xf49e,	// (0x0003df3f) popup_call2_audio_second_window_t_ParamLimits

0xf49e,	// (0x0003df3f) popup_call2_audio_second_window_t

0xddaa,	// (0x0003c84b) bg_popup_call2_in_pane_cp02

0xddb4,	// (0x0003c855) call_type_pane_cp04

0x8c0f,	// (0x000376b0) popup_call2_audio_wait_window_g1

0x8c17,	// (0x000376b8) popup_call2_audio_wait_window_g2

0x0001,

0xf4a7,	// (0x0003df48) popup_call2_audio_wait_window_g

0xddcc,	// (0x0003c86d) popup_call2_audio_wait_window_t3

0x0be6,	// (0x0002f687) bg_popup_call2_act_pane_ParamLimits

0x0be6,	// (0x0002f687) bg_popup_call2_act_pane

0x0ca6,	// (0x0002f747) call_type_pane_cp03_ParamLimits

0x0ca6,	// (0x0002f747) call_type_pane_cp03

0x0d0a,	// (0x0002f7ab) popup_call2_audio_first_window_g1_ParamLimits

0x0d0a,	// (0x0002f7ab) popup_call2_audio_first_window_g1

0x0d7a,	// (0x0002f81b) popup_call2_audio_first_window_g2_ParamLimits

0x0d7a,	// (0x0002f81b) popup_call2_audio_first_window_g2

0x0dde,	// (0x0002f87f) popup_call2_audio_first_window_g3_ParamLimits

0x0dde,	// (0x0002f87f) popup_call2_audio_first_window_g3

0x0004,

0xf4ac,	// (0x0003df4d) popup_call2_audio_first_window_g_ParamLimits

0xf4ac,	// (0x0003df4d) popup_call2_audio_first_window_g

0x0e66,	// (0x0002f907) popup_call2_audio_first_window_t1_ParamLimits

0x0e66,	// (0x0002f907) popup_call2_audio_first_window_t1

0x0f69,	// (0x0002fa0a) popup_call2_audio_first_window_t4_ParamLimits

0x0f69,	// (0x0002fa0a) popup_call2_audio_first_window_t4

0x104c,	// (0x0002faed) popup_call2_audio_first_window_t5_ParamLimits

0x104c,	// (0x0002faed) popup_call2_audio_first_window_t5

0x0003,

0xf4b7,	// (0x0003df58) popup_call2_audio_first_window_t_ParamLimits

0xf4b7,	// (0x0003df58) popup_call2_audio_first_window_t

0xdffd,	// (0x0003ca9e) bg_popup_call2_act_pane_g1

0x16a9,	// (0x0003014a) popup_cale_lunar_info_window_t1

0x16b7,	// (0x00030158) popup_cale_lunar_info_window_t2

0x16c5,	// (0x00030166) popup_cale_lunar_info_window_t3

0xddaa,	// (0x0003c84b) bg_popup_call2_bubble_pane

0x114d,	// (0x0002fbee) bg_popup_call2_in_pane_cp01_ParamLimits

0x114d,	// (0x0002fbee) bg_popup_call2_in_pane_cp01

0xda86,	// (0x0003c527) call_type_pane_cp02

0x8c1f,	// (0x000376c0) popup_call2_audio_out_window_g1_ParamLimits

0x8c1f,	// (0x000376c0) popup_call2_audio_out_window_g1

0x1195,	// (0x0002fc36) popup_call2_audio_out_window_g2_ParamLimits

0x1195,	// (0x0002fc36) popup_call2_audio_out_window_g2

0x8c4b,	// (0x000376ec) popup_call2_audio_out_window_g3_ParamLimits

0x8c4b,	// (0x000376ec) popup_call2_audio_out_window_g3

0x0003,

0xf4c0,	// (0x0003df61) popup_call2_audio_out_window_g_ParamLimits

0xf4c0,	// (0x0003df61) popup_call2_audio_out_window_g

0x11cc,	// (0x0002fc6d) popup_call2_audio_out_window_t1_ParamLimits

0x11cc,	// (0x0002fc6d) popup_call2_audio_out_window_t1

0x122b,	// (0x0002fccc) popup_call2_audio_out_window_t2_ParamLimits

0x122b,	// (0x0002fccc) popup_call2_audio_out_window_t2

0x127f,	// (0x0002fd20) popup_call2_audio_out_window_t3_ParamLimits

0x127f,	// (0x0002fd20) popup_call2_audio_out_window_t3

0x1295,	// (0x0002fd36) popup_call2_audio_out_window_t4_ParamLimits

0x1295,	// (0x0002fd36) popup_call2_audio_out_window_t4

0x12ab,	// (0x0002fd4c) popup_call2_audio_out_window_t5_ParamLimits

0x12ab,	// (0x0002fd4c) popup_call2_audio_out_window_t5

0x0005,

0xf4c9,	// (0x0003df6a) popup_call2_audio_out_window_t_ParamLimits

0xf4c9,	// (0x0003df6a) popup_call2_audio_out_window_t

0x130f,	// (0x0002fdb0) bg_popup_call2_in_pane_ParamLimits

0x130f,	// (0x0002fdb0) bg_popup_call2_in_pane

0x136b,	// (0x0002fe0c) popup_call2_audio_in_window_g1_ParamLimits

0x136b,	// (0x0002fe0c) popup_call2_audio_in_window_g1

0x13a3,	// (0x0002fe44) popup_call2_audio_in_window_g2_ParamLimits

0x13a3,	// (0x0002fe44) popup_call2_audio_in_window_g2

0x13db,	// (0x0002fe7c) popup_call2_audio_in_window_g3_ParamLimits

0x13db,	// (0x0002fe7c) popup_call2_audio_in_window_g3

0x0003,

0xf4d6,	// (0x0003df77) popup_call2_audio_in_window_g_ParamLimits

0xf4d6,	// (0x0003df77) popup_call2_audio_in_window_g

0x1433,	// (0x0002fed4) popup_call2_audio_in_window_t1_ParamLimits

0x1433,	// (0x0002fed4) popup_call2_audio_in_window_t1

0x14b3,	// (0x0002ff54) popup_call2_audio_in_window_t2_ParamLimits

0x14b3,	// (0x0002ff54) popup_call2_audio_in_window_t2

0x1533,	// (0x0002ffd4) popup_call2_audio_in_window_t3_ParamLimits

0x1533,	// (0x0002ffd4) popup_call2_audio_in_window_t3

0x154d,	// (0x0002ffee) popup_call2_audio_in_window_t4_ParamLimits

0x154d,	// (0x0002ffee) popup_call2_audio_in_window_t4

0x155f,	// (0x00030000) popup_call2_audio_in_window_t5_ParamLimits

0x155f,	// (0x00030000) popup_call2_audio_in_window_t5

0x1574,	// (0x00030015) popup_call2_audio_in_window_t6_ParamLimits

0x1574,	// (0x00030015) popup_call2_audio_in_window_t6

0x0005,

0xf4df,	// (0x0003df80) popup_call2_audio_in_window_t_ParamLimits

0xf4df,	// (0x0003df80) popup_call2_audio_in_window_t

0xdffd,	// (0x0003ca9e) bg_popup_call2_in_pane_g1

0x16d3,	// (0x00030174) popup_cale_lunar_info_window_t4

0x0003,

0xf55a,	// (0x0003dffb) popup_cale_lunar_info_window_t

0xe005,	// (0x0003caa6) bg_popup_call2_rect_pane_ParamLimits

0xe005,	// (0x0003caa6) bg_popup_call2_rect_pane

0xddaa,	// (0x0003c84b) call2_cli_visual_graphic_pane

0xddaa,	// (0x0003c84b) call2_cli_visual_text_pane

0x9012,	// (0x00037ab3) smil_status_volume_pane_g3

0x0002,

0xe01d,	// (0x0003cabe) call2_cli_visual_graphic_pane_g1

0xe01d,	// (0x0003cabe) call2_cli_visual_graphic_pane_g2

0xe01d,	// (0x0003cabe) call2_cli_visual_graphic_pane_g3

0x0002,

0xf4ec,	// (0x0003df8d) call2_cli_visual_graphic_pane_g

0x1589,	// (0x0003002a) bg_popup_call2_rect_pane_g1

0xe1de,	// (0x0003cc7f) bg_popup_call2_rect_pane_g2

0x1591,	// (0x00030032) bg_popup_call2_rect_pane_g3

0x1599,	// (0x0003003a) bg_popup_call2_rect_pane_g4

0x15a1,	// (0x00030042) bg_popup_call2_rect_pane_g5

0x15a9,	// (0x0003004a) bg_popup_call2_rect_pane_g6

0x15b1,	// (0x00030052) bg_popup_call2_rect_pane_g7

0x15b9,	// (0x0003005a) bg_popup_call2_rect_pane_g8

0x15c1,	// (0x00030062) bg_popup_call2_rect_pane_g9

0x0008,

0xf4f3,	// (0x0003df94) bg_popup_call2_rect_pane_g

0x15c9,	// (0x0003006a) bg_popup_call2_bubble_pane_g1

0x15d1,	// (0x00030072) bg_popup_call2_bubble_pane_g2

0x15d9,	// (0x0003007a) bg_popup_call2_bubble_pane_g3

0x15e1,	// (0x00030082) bg_popup_call2_bubble_pane_g4

0x15e9,	// (0x0003008a) bg_popup_call2_bubble_pane_g5

0x15f1,	// (0x00030092) bg_popup_call2_bubble_pane_g6

0x15f9,	// (0x0003009a) bg_popup_call2_bubble_pane_g7

0x1601,	// (0x000300a2) bg_popup_call2_bubble_pane_g8

0x1609,	// (0x000300aa) bg_popup_call2_bubble_pane_g9

0x0008,

0xf506,	// (0x0003dfa7) bg_popup_call2_bubble_pane_g

0x6b45,	// (0x000355e6) aid_cale_week_size_cell_pane

0xe005,	// (0x0003caa6) aid_cams_cif_uncrop_pane_ParamLimits

0xe005,	// (0x0003caa6) aid_cams_cif_uncrop_pane

0x7250,	// (0x00035cf1) aid_cams_size_cell_ParamLimits

0x7250,	// (0x00035cf1) aid_cams_size_cell

0x725c,	// (0x00035cfd) grid_cams_pane_ParamLimits

0x7268,	// (0x00035d09) linegrid_cams_pane_ParamLimits

0x7327,	// (0x00035dc8) call_video_pane_t1

0x7344,	// (0x00035de5) call_video_pane_t2

0x0001,

0xf1fc,	// (0x0003dc9d) call_video_pane_t

0x7726,	// (0x000361c7) aid_cale_month_size_cell_pane_ParamLimits

0x7726,	// (0x000361c7) aid_cale_month_size_cell_pane

0xf59e,	// (0x0003e03f) smil_status_volume_pane_g

0x901f,	// (0x00037ac0) volume_smil_pane_ParamLimits

0x64cf,	// (0x00034f70) aid_popup2_width_pane

0x6a5f,	// (0x00035500) cell_qdial_pane_g4_ParamLimits

0x6a5f,	// (0x00035500) cell_qdial_pane_g4

0x8486,	// (0x00036f27) aid_blid_cardinal_pane_ParamLimits

0x8492,	// (0x00036f33) aid_blid_destination_pane_ParamLimits

0x8492,	// (0x00036f33) aid_blid_destination_pane

0xe005,	// (0x0003caa6) bg_popup_call_poc_act_pane_ParamLimits

0xe005,	// (0x0003caa6) bg_popup_call_poc_act_pane

0xe005,	// (0x0003caa6) bg_popup_call_poc_inact_pane_ParamLimits

0xe005,	// (0x0003caa6) bg_popup_call_poc_inact_pane

0x1611,	// (0x000300b2) bg_popup_call_poc_act_pane_g1

0x1619,	// (0x000300ba) bg_popup_call_poc_act_pane_g2

0x1621,	// (0x000300c2) bg_popup_call_poc_act_pane_g3

0x15e1,	// (0x00030082) bg_popup_call_poc_act_pane_g4

0x15e9,	// (0x0003008a) bg_popup_call_poc_act_pane_g5

0x1629,	// (0x000300ca) bg_popup_call_poc_act_pane_g6

0x15f9,	// (0x0003009a) bg_popup_call_poc_act_pane_g7

0x1631,	// (0x000300d2) bg_popup_call_poc_act_pane_g8

0xddaa,	// (0x0003c84b) main_usb_pane

0x8ebc,	// (0x0003795d) popup_cale_lunar_info_window

0x75c9,	// (0x0003606a) im_reading_pane_t1_ParamLimits

0xe3fa,	// (0x0003ce9b) list_im_pane_ParamLimits

0xe40b,	// (0x0003ceac) scroll_pane_cp07_ParamLimits

0xddaa,	// (0x0003c84b) grid_highlight_pane_cp012

0xe005,	// (0x0003caa6) mup_scale_pane_ParamLimits

0x0dde,	// (0x0002f87f) main_usb_pane_g1_ParamLimits

0x0dde,	// (0x0002f87f) main_usb_pane_g1

0x8c9b,	// (0x0003773c) main_usb_pane_g2_ParamLimits

0x8c9b,	// (0x0003773c) main_usb_pane_g2

0x0001,

0xf543,	// (0x0003dfe4) main_usb_pane_g_ParamLimits

0xf543,	// (0x0003dfe4) main_usb_pane_g

0x8ca7,	// (0x00037748) main_usb_pane_t1_ParamLimits

0x8ca7,	// (0x00037748) main_usb_pane_t1

0x8cb9,	// (0x0003775a) main_usb_pane_t2_ParamLimits

0x8cb9,	// (0x0003775a) main_usb_pane_t2

0x8ccb,	// (0x0003776c) main_usb_pane_t3_ParamLimits

0x8ccb,	// (0x0003776c) main_usb_pane_t3

0x8cdd,	// (0x0003777e) main_usb_pane_t4_ParamLimits

0x8cdd,	// (0x0003777e) main_usb_pane_t4

0x8cef,	// (0x00037790) main_usb_pane_t5_ParamLimits

0x8cef,	// (0x00037790) main_usb_pane_t5

0x8d01,	// (0x000377a2) main_usb_pane_t6_ParamLimits

0x8d01,	// (0x000377a2) main_usb_pane_t6

0x0005,

0xf548,	// (0x0003dfe9) main_usb_pane_t_ParamLimits

0xeb55,	// (0x0003d5f6) aid_text_placing

0x8432,	// (0x00036ed3) main_location2_pane_t1_ParamLimits

0x8448,	// (0x00036ee9) main_location2_pane_t2_ParamLimits

0x845e,	// (0x00036eff) main_location2_pane_t3_ParamLimits

0x8474,	// (0x00036f15) main_location2_pane_t4_ParamLimits

0x8474,	// (0x00036f15) main_location2_pane_t4

0xf34f,	// (0x0003ddf0) main_location2_pane_t_ParamLimits

0xe040,	// (0x0003cae1) find_pinb_pane_g2_ParamLimits

0xe040,	// (0x0003cae1) find_pinb_pane_g2

0x0001,

0xf0b4,	// (0x0003db55) find_pinb_pane_g_ParamLimits

0xf0b4,	// (0x0003db55) find_pinb_pane_g

0xe04c,	// (0x0003caed) find_pinb_pane_t1_ParamLimits

0xe05e,	// (0x0003caff) find_pinb_pane_t2_ParamLimits

0xf0b9,	// (0x0003db5a) find_pinb_pane_t_ParamLimits

0xddaa,	// (0x0003c84b) main_call3_pane

0x7aca,	// (0x0003656b) cale_month_day_heading_pane_t1_ParamLimits

0x7b50,	// (0x000365f1) cale_month_day_heading_pane_t2_ParamLimits

0x7be1,	// (0x00036682) cale_month_day_heading_pane_t3_ParamLimits

0x7c72,	// (0x00036713) cale_month_day_heading_pane_t4_ParamLimits

0x7d03,	// (0x000367a4) cale_month_day_heading_pane_t5_ParamLimits

0x7d94,	// (0x00036835) cale_month_day_heading_pane_t6_ParamLimits

0x7e25,	// (0x000368c6) cale_month_day_heading_pane_t7_ParamLimits

0xf234,	// (0x0003dcd5) cale_month_day_heading_pane_t_ParamLimits

0x8145,	// (0x00036be6) smil_status_volume_pane

0x8894,	// (0x00037335) postcard_address_pane_ParamLimits

0x8894,	// (0x00037335) postcard_address_pane

0x88a0,	// (0x00037341) postcard_message_pane_ParamLimits

0x88a0,	// (0x00037341) postcard_message_pane

0x8c77,	// (0x00037718) call2_cli_visual_pane_t1_ParamLimits

0x8c77,	// (0x00037718) call2_cli_visual_pane_t1

0x1874,	// (0x00030315) postcard_message_pane_t1_ParamLimits

0x1874,	// (0x00030315) postcard_message_pane_t1

0x185c,	// (0x000302fd) postcard_address_pane_t1_ParamLimits

0x185c,	// (0x000302fd) postcard_address_pane_t1

0x914c,	// (0x00037bed) popup_call3_audio_in_window_ParamLimits

0x914c,	// (0x00037bed) popup_call3_audio_in_window

0x9034,	// (0x00037ad5) bg_popup_call3_in_pane_ParamLimits

0x9034,	// (0x00037ad5) bg_popup_call3_in_pane

0x9092,	// (0x00037b33) popup_call3_audio_in_window_g1_ParamLimits

0x9092,	// (0x00037b33) popup_call3_audio_in_window_g1

0x90aa,	// (0x00037b4b) popup_call3_audio_in_window_g2_ParamLimits

0x90aa,	// (0x00037b4b) popup_call3_audio_in_window_g2

0x90c2,	// (0x00037b63) popup_call3_audio_in_window_g3_ParamLimits

0x90c2,	// (0x00037b63) popup_call3_audio_in_window_g3

0x0003,

0xf5a5,	// (0x0003e046) popup_call3_audio_in_window_g_ParamLimits

0xf5a5,	// (0x0003e046) popup_call3_audio_in_window_g

0x90ea,	// (0x00037b8b) popup_call3_audio_in_window_t1_ParamLimits

0x90ea,	// (0x00037b8b) popup_call3_audio_in_window_t1

0x9112,	// (0x00037bb3) popup_call3_audio_in_window_t2_ParamLimits

0x9112,	// (0x00037bb3) popup_call3_audio_in_window_t2

0x913a,	// (0x00037bdb) popup_call3_audio_in_window_t3_ParamLimits

0x913a,	// (0x00037bdb) popup_call3_audio_in_window_t3

0x0002,

0xf5ae,	// (0x0003e04f) popup_call3_audio_in_window_t_ParamLimits

0xf5ae,	// (0x0003e04f) popup_call3_audio_in_window_t

0xe2c2,	// (0x0003cd63) bg_popup_call3_rect_pane

0x1589,	// (0x0003002a) bg_popup_call3_rect_pane_g1

0xe1de,	// (0x0003cc7f) bg_popup_call3_rect_pane_g2

0x1591,	// (0x00030032) bg_popup_call3_rect_pane_g3

0x1599,	// (0x0003003a) bg_popup_call3_rect_pane_g4

0x15a1,	// (0x00030042) bg_popup_call3_rect_pane_g5

0x15a9,	// (0x0003004a) bg_popup_call3_rect_pane_g6

0x15b1,	// (0x00030052) bg_popup_call3_rect_pane_g7

0xd981,	// (0x0003c422) mup_visualizer_osc_pane

0xd981,	// (0x0003c422) mup_visualizer_spec_pane

0x9054,	// (0x00037af5) call3_video_qcif_pane_ParamLimits

0x9054,	// (0x00037af5) call3_video_qcif_pane

0x9064,	// (0x00037b05) call3_video_qcif_uncrop_pane_ParamLimits

0x9064,	// (0x00037b05) call3_video_qcif_uncrop_pane

0x9070,	// (0x00037b11) call3_video_subqcif_pane_ParamLimits

0x9070,	// (0x00037b11) call3_video_subqcif_pane

0x9082,	// (0x00037b23) call3_video_subqcif_uncrop_pane_ParamLimits

0x9082,	// (0x00037b23) call3_video_subqcif_uncrop_pane

0x90da,	// (0x00037b7b) popup_call3_audio_in_window_g4_ParamLimits

0x90da,	// (0x00037b7b) popup_call3_audio_in_window_g4

0xd981,	// (0x0003c422) mup_spec_half_pane

0xd981,	// (0x0003c422) mup_spec_half_pane_cp

0xd981,	// (0x0003c422) mup_osc_middle_pane

0xe343,	// (0x0003cde4) mup_visualizer_osc_pane_g1

0x17ed,	// (0x0003028e) mup_spec_bar_pane_ParamLimits

0x17ed,	// (0x0003028e) mup_spec_bar_pane

0xe343,	// (0x0003cde4) mup_spec_bar_pane_g1

0xe343,	// (0x0003cde4) mup_spec_bar_pane_g2

0x0001,

0xf3c9,	// (0x0003de6a) mup_spec_bar_pane_g

0x6b45,	// (0x000355e6) aid_cale_week_size_cell_pane_ParamLimits

0x6b5a,	// (0x000355fb) bg_cale_heading_pane_ParamLimits

0xe21c,	// (0x0003ccbd) bg_cale_pane_cp01_ParamLimits

0x6b72,	// (0x00035613) cale_week_corner_pane_ParamLimits

0x6b8c,	// (0x0003562d) cale_week_day_heading_pane_ParamLimits

0x6ba4,	// (0x00035645) cale_week_scroll_pane_g1_ParamLimits

0x6bb7,	// (0x00035658) cale_week_scroll_pane_g2_ParamLimits

0x6bca,	// (0x0003566b) cale_week_scroll_pane_g3_ParamLimits

0x6bdd,	// (0x0003567e) cale_week_scroll_pane_g4_ParamLimits

0x6bf0,	// (0x00035691) cale_week_scroll_pane_g5_ParamLimits

0x6c03,	// (0x000356a4) cale_week_scroll_pane_g6_ParamLimits

0x6c16,	// (0x000356b7) cale_week_scroll_pane_g7_ParamLimits

0x6c29,	// (0x000356ca) cale_week_scroll_pane_g8_ParamLimits

0x6c3c,	// (0x000356dd) cale_week_scroll_pane_g9_ParamLimits

0x6c4f,	// (0x000356f0) cale_week_scroll_pane_g10_ParamLimits

0x6c62,	// (0x00035703) cale_week_scroll_pane_g11_ParamLimits

0x6c75,	// (0x00035716) cale_week_scroll_pane_g12_ParamLimits

0x6c88,	// (0x00035729) cale_week_scroll_pane_g13_ParamLimits

0x6c9b,	// (0x0003573c) cale_week_scroll_pane_g14_ParamLimits

0x6cae,	// (0x0003574f) cale_week_scroll_pane_g15_ParamLimits

0xf145,	// (0x0003dbe6) cale_week_scroll_pane_g_ParamLimits

0x6cd4,	// (0x00035775) cale_week_time_pane_ParamLimits

0x6ce7,	// (0x00035788) grid_cale_week_pane_ParamLimits

0xe239,	// (0x0003ccda) listscroll_cale_week_pane_t1

0xe24b,	// (0x0003ccec) scroll_pane_cp08_ParamLimits

0x777b,	// (0x0003621c) cale_month_corner_pane_ParamLimits

0xe63b,	// (0x0003d0dc) cale_month_pane_t1

0x7a91,	// (0x00036532) cale_month_week_pane_ParamLimits

0x0dde,	// (0x0002f87f) popup_call_status_window_g1_ParamLimits

0x828c,	// (0x00036d2d) popup_call_status_window_g2_ParamLimits

0x8298,	// (0x00036d39) popup_call_status_window_g3_ParamLimits

0xf2d6,	// (0x0003dd77) popup_call_status_window_g_ParamLimits

0xe9b0,	// (0x0003d451) aid_call2_pane

0x584a,	// (0x000342eb) msg_header_pane_g1

0x8894,	// (0x00037335) postcard_address2_pane_ParamLimits

0x8894,	// (0x00037335) postcard_address2_pane

0x88a0,	// (0x00037341) postcard_message2_pane_ParamLimits

0x88a0,	// (0x00037341) postcard_message2_pane

0x8fe7,	// (0x00037a88) message2_row_pane_ParamLimits

0x8fe7,	// (0x00037a88) message2_row_pane

0x8fff,	// (0x00037aa0) address2_row_pane_ParamLimits

0x8fff,	// (0x00037aa0) address2_row_pane

0x17ba,	// (0x0003025b) postcard_message2_row_pane_g1

0x17c2,	// (0x00030263) postcard_message2_row_pane_t1

0x17ba,	// (0x0003025b) address2_row_pane_g1

0x17c2,	// (0x00030263) address2_row_pane_t1

0xe2ba,	// (0x0003cd5b) aid_size_cell_vorec

0xddaa,	// (0x0003c84b) main_rss_pane

0x17d0,	// (0x00030271) rss_list_single_pane_ParamLimits

0x17d0,	// (0x00030271) rss_list_single_pane

0x17de,	// (0x0003027f) rss_list_single_pane_t1

0x17de,	// (0x0003027f) rss_list_single_pane_t2

0x0001,

0xf599,	// (0x0003e03a) rss_list_single_pane_t

0xddaa,	// (0x0003c84b) main_camera2_pane

0xddaa,	// (0x0003c84b) main_video2_pane

0xd98b,	// (0x0003c42c) cams_zoom_pane_cp2_ParamLimits

0xd98b,	// (0x0003c42c) cams_zoom_pane_cp2

0xd98b,	// (0x0003c42c) image2_vga_pane_ParamLimits

0xd98b,	// (0x0003c42c) image2_vga_pane

0xe08d,	// (0x0003cb2e) main_camera2_pane_g1_ParamLimits

0xe08d,	// (0x0003cb2e) main_camera2_pane_g1

0xe08d,	// (0x0003cb2e) main_camera2_pane_g2_ParamLimits

0xe08d,	// (0x0003cb2e) main_camera2_pane_g2

0xe08d,	// (0x0003cb2e) main_camera2_pane_g3_ParamLimits

0xe08d,	// (0x0003cb2e) main_camera2_pane_g3

0xe08d,	// (0x0003cb2e) main_camera2_pane_g4_ParamLimits

0xe08d,	// (0x0003cb2e) main_camera2_pane_g4

0xe08d,	// (0x0003cb2e) main_camera2_pane_g5_ParamLimits

0xe08d,	// (0x0003cb2e) main_camera2_pane_g5

0xe08d,	// (0x0003cb2e) main_camera2_pane_g6_ParamLimits

0xe08d,	// (0x0003cb2e) main_camera2_pane_g6

0xe08d,	// (0x0003cb2e) main_camera2_pane_g7_ParamLimits

0xe08d,	// (0x0003cb2e) main_camera2_pane_g7

0xe08d,	// (0x0003cb2e) main_camera2_pane_g8_ParamLimits

0xe08d,	// (0x0003cb2e) main_camera2_pane_g8

0x0008,

0xf5b5,	// (0x0003e056) main_camera2_pane_g_ParamLimits

0xf5b5,	// (0x0003e056) main_camera2_pane_g

0xe315,	// (0x0003cdb6) main_camera2_pane_t1_ParamLimits

0xe315,	// (0x0003cdb6) main_camera2_pane_t1

0xe315,	// (0x0003cdb6) main_camera2_pane_t2_ParamLimits

0xe315,	// (0x0003cdb6) main_camera2_pane_t2

0xe315,	// (0x0003cdb6) main_camera2_pane_t3_ParamLimits

0xe315,	// (0x0003cdb6) main_camera2_pane_t3

0xe315,	// (0x0003cdb6) main_camera2_pane_t4_ParamLimits

0xe315,	// (0x0003cdb6) main_camera2_pane_t4

0x0006,

0xf5c8,	// (0x0003e069) main_camera2_pane_t_ParamLimits

0xf5c8,	// (0x0003e069) main_camera2_pane_t

0xeffc,	// (0x0003da9d) cams_zoom_pane_cp4_ParamLimits

0xeffc,	// (0x0003da9d) cams_zoom_pane_cp4

0xed86,	// (0x0003d827) image2_cif_pane_ParamLimits

0xed86,	// (0x0003d827) image2_cif_pane

0xd98b,	// (0x0003c42c) image2_subqcif_pane_ParamLimits

0xd98b,	// (0x0003c42c) image2_subqcif_pane

0xf00a,	// (0x0003daab) main_video2_pane_g1_ParamLimits

0xf00a,	// (0x0003daab) main_video2_pane_g1

0xf00a,	// (0x0003daab) main_video2_pane_g2_ParamLimits

0xf00a,	// (0x0003daab) main_video2_pane_g2

0xf00a,	// (0x0003daab) main_video2_pane_g3_ParamLimits

0xf00a,	// (0x0003daab) main_video2_pane_g3

0xf00a,	// (0x0003daab) main_video2_pane_g4_ParamLimits

0xf00a,	// (0x0003daab) main_video2_pane_g4

0xf00a,	// (0x0003daab) main_video2_pane_g5_ParamLimits

0xf00a,	// (0x0003daab) main_video2_pane_g5

0xf00a,	// (0x0003daab) main_video2_pane_g6_ParamLimits

0xf00a,	// (0x0003daab) main_video2_pane_g6

0x0005,

0xf5d7,	// (0x0003e078) main_video2_pane_g_ParamLimits

0xf5d7,	// (0x0003e078) main_video2_pane_g

0xf018,	// (0x0003dab9) main_video2_pane_t1_ParamLimits

0xf018,	// (0x0003dab9) main_video2_pane_t1

0xf018,	// (0x0003dab9) main_video2_pane_t2_ParamLimits

0xf018,	// (0x0003dab9) main_video2_pane_t2

0xf018,	// (0x0003dab9) main_video2_pane_t3_ParamLimits

0xf018,	// (0x0003dab9) main_video2_pane_t3

0x0002,

0xf5e4,	// (0x0003e085) main_video2_pane_t_ParamLimits

0xf5e4,	// (0x0003e085) main_video2_pane_t

0x8d8d,	// (0x0003782e) call_muted_g2

0x0001,

0xf58b,	// (0x0003e02c) call_muted_g

0xddaa,	// (0x0003c84b) main_mup2_pane

0xe09b,	// (0x0003cb3c) main_mup2_pane_g1_ParamLimits

0xe09b,	// (0x0003cb3c) main_mup2_pane_g1

0xe09b,	// (0x0003cb3c) main_mup2_pane_g2_ParamLimits

0xe09b,	// (0x0003cb3c) main_mup2_pane_g2

0xe343,	// (0x0003cde4) main_mup_pane_g13_cp1

0xd981,	// (0x0003c422) mup_volume_pane_cp1

0xe09b,	// (0x0003cb3c) main_mup2_pane_g4_ParamLimits

0xe09b,	// (0x0003cb3c) main_mup2_pane_g4

0xe09b,	// (0x0003cb3c) main_mup2_pane_g5_ParamLimits

0xe09b,	// (0x0003cb3c) main_mup2_pane_g5

0xe09b,	// (0x0003cb3c) main_mup2_pane_g6_ParamLimits

0xe09b,	// (0x0003cb3c) main_mup2_pane_g6

0xe09b,	// (0x0003cb3c) main_mup2_pane_g7_ParamLimits

0xe09b,	// (0x0003cb3c) main_mup2_pane_g7

0x0006,

0xf5eb,	// (0x0003e08c) main_mup2_pane_g_ParamLimits

0xf5eb,	// (0x0003e08c) main_mup2_pane_g

0xe0a9,	// (0x0003cb4a) main_mup2_pane_t1_ParamLimits

0xe0a9,	// (0x0003cb4a) main_mup2_pane_t1

0xe0a9,	// (0x0003cb4a) main_mup2_pane_t2_ParamLimits

0xe0a9,	// (0x0003cb4a) main_mup2_pane_t2

0xe0a9,	// (0x0003cb4a) main_mup2_pane_t3_ParamLimits

0xe0a9,	// (0x0003cb4a) main_mup2_pane_t3

0xe0a9,	// (0x0003cb4a) main_mup2_pane_t4_ParamLimits

0xe0a9,	// (0x0003cb4a) main_mup2_pane_t4

0xe0a9,	// (0x0003cb4a) main_mup2_pane_t5_ParamLimits

0xe0a9,	// (0x0003cb4a) main_mup2_pane_t5

0xe0a9,	// (0x0003cb4a) main_mup2_pane_t6_ParamLimits

0xe0a9,	// (0x0003cb4a) main_mup2_pane_t6

0x0005,

0xf5fa,	// (0x0003e09b) main_mup2_pane_t_ParamLimits

0xf5fa,	// (0x0003e09b) main_mup2_pane_t

0x1a65,	// (0x00030506) mup2_visualizer_pane_ParamLimits

0x1a65,	// (0x00030506) mup2_visualizer_pane

0x1a65,	// (0x00030506) mup_progress_pane_cp_ParamLimits

0x1a65,	// (0x00030506) mup_progress_pane_cp

0x18f0,	// (0x00030391) mup_volume_pane_cp_ParamLimits

0x18f0,	// (0x00030391) mup_volume_pane_cp

0xe07f,	// (0x0003cb20) mup2_visualizer_pane_g1_ParamLimits

0xe07f,	// (0x0003cb20) mup2_visualizer_pane_g1

0xe08d,	// (0x0003cb2e) mup2_visualizer_pane_g2_ParamLimits

0xe08d,	// (0x0003cb2e) mup2_visualizer_pane_g2

0xe08d,	// (0x0003cb2e) mup2_visualizer_pane_g3_ParamLimits

0xe08d,	// (0x0003cb2e) mup2_visualizer_pane_g3

0x0002,

0xf0be,	// (0x0003db5f) mup2_visualizer_pane_g_ParamLimits

0xf0be,	// (0x0003db5f) mup2_visualizer_pane_g

0xe2ba,	// (0x0003cd5b) aid_size_cell_fmradio

0x8e6f,	// (0x00037910) aid_height_parent_landcape

0xe498,	// (0x0003cf39) wml_content_pane_cp

0xe4a0,	// (0x0003cf41) wml_tabs_pane

0xe4a9,	// (0x0003cf4a) popup_wml_miniature_window

0xe4b1,	// (0x0003cf52) scroll_pane_cp021

0xe4c5,	// (0x0003cf66) wml_content_pane_comp8

0xddaa,	// (0x0003c84b) bg_popup_sub_pane_cp05

0x1906,	// (0x000303a7) popup_wml_miniature_window_g1

0x190e,	// (0x000303af) wml_miniature_view_pane

0x91a3,	// (0x00037c44) aid_size_wml_view

0x91ab,	// (0x00037c4c) wml_miniature_view_pane_g1

0x91b4,	// (0x00037c55) wml_miniature_view_pane_g2

0x91bd,	// (0x00037c5e) wml_miniature_view_pane_g3

0x91c5,	// (0x00037c66) wml_miniature_view_pane_g4

0x91cd,	// (0x00037c6e) wml_miniature_view_pane_g5

0x91d5,	// (0x00037c76) wml_miniature_view_pane_g6

0x91dd,	// (0x00037c7e) wml_miniature_view_pane_g7

0x91e5,	// (0x00037c86) wml_miniature_view_pane_g8

0x0007,

0xf607,	// (0x0003e0a8) wml_miniature_view_pane_g

0x1916,	// (0x000303b7) background_graphic_ParamLimits

0x1916,	// (0x000303b7) background_graphic

0x1922,	// (0x000303c3) wml_tabs_2_pane

0x192b,	// (0x000303cc) wml_tabs_3_pane_ParamLimits

0x192b,	// (0x000303cc) wml_tabs_3_pane

0x193d,	// (0x000303de) wml_tabs_4_pane_ParamLimits

0x193d,	// (0x000303de) wml_tabs_4_pane

0x1953,	// (0x000303f4) wml_tabs_5_pane_ParamLimits

0x1953,	// (0x000303f4) wml_tabs_5_pane

0x196d,	// (0x0003040e) wml_tabs_pane_g2_ParamLimits

0x196d,	// (0x0003040e) wml_tabs_pane_g2

0x1982,	// (0x00030423) wml_tabs_pane_g3_ParamLimits

0x1982,	// (0x00030423) wml_tabs_pane_g3

0x1997,	// (0x00030438) wml_tabs_2_active_pane_ParamLimits

0x1997,	// (0x00030438) wml_tabs_2_active_pane

0x1997,	// (0x00030438) wml_tabs_2_passive_pane_ParamLimits

0x1997,	// (0x00030438) wml_tabs_2_passive_pane

0x91ed,	// (0x00037c8e) wml_tabs_3_active_pane_cp_ParamLimits

0x91ed,	// (0x00037c8e) wml_tabs_3_active_pane_cp

0x91fe,	// (0x00037c9f) wml_tabs_3_passive_pane_ParamLimits

0x91fe,	// (0x00037c9f) wml_tabs_3_passive_pane

0x920f,	// (0x00037cb0) wml_tabs_3_passive_pane_cp_ParamLimits

0x920f,	// (0x00037cb0) wml_tabs_3_passive_pane_cp

0x9220,	// (0x00037cc1) tabs_4_active_pane

0x9228,	// (0x00037cc9) tabs_4_passive_pane

0x9230,	// (0x00037cd1) tabs_4_passive_pane_cp

0x9238,	// (0x00037cd9) tabs_4_passive_pane_cp2

0x8c93,	// (0x00037734) aid_height_text

0x1a65,	// (0x00030506) mup_volume_cont_pane_ParamLimits

0x1a65,	// (0x00030506) mup_volume_cont_pane

0x67b7,	// (0x00035258) aid_size_cell_pinb

0xd981,	// (0x0003c422) aid_size_list_pinb

0x1a65,	// (0x00030506) mup2_volume_cont_pane_ParamLimits

0x1a65,	// (0x00030506) mup2_volume_cont_pane

0x9240,	// (0x00037ce1) mup2_volume_cont_pane_g1_ParamLimits

0x9240,	// (0x00037ce1) mup2_volume_cont_pane_g1

0x64d7,	// (0x00034f78) aid_size_cell_touch_ParamLimits

0x64d7,	// (0x00034f78) aid_size_cell_touch

0x6711,	// (0x000351b2) touch_pane_ParamLimits

0x6711,	// (0x000351b2) touch_pane

0xd981,	// (0x0003c422) main_rss2_pane

0x19e4,	// (0x00030485) listscroll_rss2_pane

0x19ed,	// (0x0003048e) rss2_navigation_pane

0x19f5,	// (0x00030496) list_rss2_pane

0xe9db,	// (0x0003d47c) scroll_pane_cp22

0x19fd,	// (0x0003049e) rss2_navigation_pane_g1

0x1a06,	// (0x000304a7) rss2_navigation_pane_g2

0x1a0e,	// (0x000304af) rss2_navigation_pane_g3

0x0002,

0xf618,	// (0x0003e0b9) rss2_navigation_pane_g

0x1a16,	// (0x000304b7) rss2_navigation_pane_t1

0x9256,	// (0x00037cf7) rss2_list_single_pane_ParamLimits

0x9256,	// (0x00037cf7) rss2_list_single_pane

0x1a24,	// (0x000304c5) rss2_list_single_pane_t2

0x1a32,	// (0x000304d3) rss2_list_single_pane_t3_ParamLimits

0x1a32,	// (0x000304d3) rss2_list_single_pane_t3

0x1a4f,	// (0x000304f0) rss2_list_single_pane_t4

0x812f,	// (0x00036bd0) smil_status_pane_g1

0xed86,	// (0x0003d827) main_image2_pane_ParamLimits

0xed86,	// (0x0003d827) main_image2_pane

0xe08d,	// (0x0003cb2e) main_camera2_pane_g9_ParamLimits

0xe08d,	// (0x0003cb2e) main_camera2_pane_g9

0xe315,	// (0x0003cdb6) main_camera2_pane_t5_ParamLimits

0xe315,	// (0x0003cdb6) main_camera2_pane_t5

0x918f,	// (0x00037c30) main_camera2_pane_t6_ParamLimits

0x918f,	// (0x00037c30) main_camera2_pane_t6

0x926d,	// (0x00037d0e) main_image2_pane_g1_ParamLimits

0x926d,	// (0x00037d0e) main_image2_pane_g1

0x8a40,	// (0x000374e1) smil2_video_pane_ParamLimits

0x8a40,	// (0x000374e1) smil2_video_pane

0x578c,	// (0x0003422d) aid_zoom_text_primary_cp

0x66c0,	// (0x00035161) popup_preview_fixed_window

0xe3f2,	// (0x0003ce93) im_reading_pane_g1

0x9159,	// (0x00037bfa) cams2_bc_adjust_pane_cp_ParamLimits

0x9159,	// (0x00037bfa) cams2_bc_adjust_pane_cp

0xd98b,	// (0x0003c42c) cams2_bc_adjust_pane_ParamLimits

0xd98b,	// (0x0003c42c) cams2_bc_adjust_pane

0xe343,	// (0x0003cde4) cams2_bc_adjust_pane_g1

0xd981,	// (0x0003c422) cams2_slider_pane

0xe343,	// (0x0003cde4) cams2_slider_pane_g1

0xe343,	// (0x0003cde4) cams2_slider_pane_g2

0x0006,

0xf61f,	// (0x0003e0c0) cams2_slider_pane_g

0x67fa,	// (0x0003529b) calc_display_pane_ParamLimits

0x6812,	// (0x000352b3) calc_paper_pane_ParamLimits

0x682e,	// (0x000352cf) grid_calc_pane_ParamLimits

0x830a,	// (0x00036dab) popup_clock_digital_window_t1_ParamLimits

0xef43,	// (0x0003d9e4) main_image_pane_t1

0x67e0,	// (0x00035281) aid_size_cell_calc_ParamLimits

0x67e0,	// (0x00035281) aid_size_cell_calc

0x8e9c,	// (0x0003793d) popup_blid_sat_info2_window_ParamLimits

0x8e9c,	// (0x0003793d) popup_blid_sat_info2_window

0x1a5d,	// (0x000304fe) aid_size_cell_blid

0x1a65,	// (0x00030506) bg_popup_window_pane_cp07

0x1a88,	// (0x00030529) grid_popup_blid_pane

0x1a90,	// (0x00030531) heading_pane_cp05_ParamLimits

0x1a90,	// (0x00030531) heading_pane_cp05

0x1b58,	// (0x000305f9) cell_popup_blid_pane_ParamLimits

0x1b58,	// (0x000305f9) cell_popup_blid_pane

0x1b78,	// (0x00030619) cell_popup_blid_pane_g1

0x1b80,	// (0x00030621) cell_popup_blid_pane_t1

0x1a65,	// (0x00030506) mup2_indicator_pane_ParamLimits

0x1a65,	// (0x00030506) mup2_indicator_pane

0xd981,	// (0x0003c422) mup2_visualizer_osc_pane

0x18f0,	// (0x00030391) mup2_visualizer_spec_pane_ParamLimits

0x18f0,	// (0x00030391) mup2_visualizer_spec_pane

0xd981,	// (0x0003c422) mup2_spec_half_pane

0xd981,	// (0x0003c422) mup2_spec_half_pane_cp

0x1b8e,	// (0x0003062f) mup2_spec_bar_pane_ParamLimits

0x1b8e,	// (0x0003062f) mup2_spec_bar_pane

0xe343,	// (0x0003cde4) mup2_spec_bar_pane_g1

0x1bad,	// (0x0003064e) mup2_spec_bar_pane_g2

0x0001,

0xf645,	// (0x0003e0e6) mup2_spec_bar_pane_g

0xd981,	// (0x0003c422) mup2_osc_middle_pane

0xe343,	// (0x0003cde4) mup2_visualizer_osc_pane_g1

0xd9b9,	// (0x0003c45a) popup_number_entry_window_t1_ParamLimits

0xd9cc,	// (0x0003c46d) popup_number_entry_window_t2_ParamLimits

0xd9de,	// (0x0003c47f) popup_number_entry_window_t3_ParamLimits

0x675e,	// (0x000351ff) popup_number_entry_window_t5_ParamLimits

0x675e,	// (0x000351ff) popup_number_entry_window_t5

0xf05f,	// (0x0003db00) popup_number_entry_window_t_ParamLimits

0xd9f0,	// (0x0003c491) text_title_cp2_ParamLimits

0x877e,	// (0x0003721f) aid_hotspot_pointer_text2_pane

0x8810,	// (0x000372b1) main_viewer_pane_g9_ParamLimits

0x8810,	// (0x000372b1) main_viewer_pane_g9

0xe63b,	// (0x0003d0dc) cale_month_pane_t1_ParamLimits

0xe661,	// (0x0003d102) bg_cale_pane_ParamLimits

0xe679,	// (0x0003d11a) list_cale_pane_ParamLimits

0xe68a,	// (0x0003d12b) listscroll_cale_day_pane_t1

0xe69c,	// (0x0003d13d) scroll_pane_cp09_ParamLimits

0x85b3,	// (0x00037054) main_mup_eq_pane_t1_ParamLimits

0x85b3,	// (0x00037054) main_mup_eq_pane_t1

0x85c9,	// (0x0003706a) main_mup_eq_pane_t2_ParamLimits

0x85c9,	// (0x0003706a) main_mup_eq_pane_t2

0x85df,	// (0x00037080) main_mup_eq_pane_t3_ParamLimits

0x85df,	// (0x00037080) main_mup_eq_pane_t3

0x85f5,	// (0x00037096) main_mup_eq_pane_t4_ParamLimits

0x85f5,	// (0x00037096) main_mup_eq_pane_t4

0x860b,	// (0x000370ac) main_mup_eq_pane_t5_ParamLimits

0x860b,	// (0x000370ac) main_mup_eq_pane_t5

0x8621,	// (0x000370c2) main_mup_eq_pane_t6_ParamLimits

0x8621,	// (0x000370c2) main_mup_eq_pane_t6

0x8633,	// (0x000370d4) main_mup_eq_pane_t7_ParamLimits

0x8633,	// (0x000370d4) main_mup_eq_pane_t7

0x8645,	// (0x000370e6) main_mup_eq_pane_t8_ParamLimits

0x8645,	// (0x000370e6) main_mup_eq_pane_t8

0x8657,	// (0x000370f8) main_mup_eq_pane_t9_ParamLimits

0x8657,	// (0x000370f8) main_mup_eq_pane_t9

0x866d,	// (0x0003710e) main_mup_eq_pane_t10_ParamLimits

0x866d,	// (0x0003710e) main_mup_eq_pane_t10

0x0009,

0xf3d5,	// (0x0003de76) main_mup_eq_pane_t_ParamLimits

0xf3d5,	// (0x0003de76) main_mup_eq_pane_t

0x8700,	// (0x000371a1) mup_equalizer_pane_cp5_ParamLimits

0x8712,	// (0x000371b3) mup_equalizer_pane_cp6_ParamLimits

0x8724,	// (0x000371c5) mup_equalizer_pane_cp7_ParamLimits

0xd981,	// (0x0003c422) main_gallery_pane

0x180c,	// (0x000302ad) smil2_volume_pane

0x1827,	// (0x000302c8) smil_status_volume_pane_g1_ParamLimits

0x1814,	// (0x000302b5) smil_status_volume_pane_g2_ParamLimits

0x9012,	// (0x00037ab3) smil_status_volume_pane_g3_ParamLimits

0xf59e,	// (0x0003e03f) smil_status_volume_pane_g_ParamLimits

0x1a65,	// (0x00030506) bg_popup_window_pane_cp07_ParamLimits

0x1a73,	// (0x00030514) blid_firmament_pane

0xd98b,	// (0x0003c42c) aid_size_cell_gallery_ParamLimits

0xd98b,	// (0x0003c42c) aid_size_cell_gallery

0x9279,	// (0x00037d1a) grid_gallery_pane_ParamLimits

0x9279,	// (0x00037d1a) grid_gallery_pane

0x9288,	// (0x00037d29) cell_gallery_pane_ParamLimits

0x9288,	// (0x00037d29) cell_gallery_pane

0xed86,	// (0x0003d827) bg_cell_gallery_focus_pane_ParamLimits

0xed86,	// (0x0003d827) bg_cell_gallery_focus_pane

0xe07f,	// (0x0003cb20) cell_gallery_pane_g1_ParamLimits

0xe07f,	// (0x0003cb20) cell_gallery_pane_g1

0xe07f,	// (0x0003cb20) cell_gallery_pane_g2_ParamLimits

0xe07f,	// (0x0003cb20) cell_gallery_pane_g2

0xe07f,	// (0x0003cb20) cell_gallery_pane_g3_ParamLimits

0xe07f,	// (0x0003cb20) cell_gallery_pane_g3

0xe08d,	// (0x0003cb2e) cell_gallery_pane_g4_ParamLimits

0xe08d,	// (0x0003cb2e) cell_gallery_pane_g4

0x0003,

0xf64a,	// (0x0003e0eb) cell_gallery_pane_g_ParamLimits

0xf64a,	// (0x0003e0eb) cell_gallery_pane_g

0x1bb7,	// (0x00030658) bg_cell_gallery_focus_pane_g1

0x1bbf,	// (0x00030660) bg_cell_gallery_focus_pane_g2

0x1bc7,	// (0x00030668) bg_cell_gallery_focus_pane_g3

0x1bcf,	// (0x00030670) bg_cell_gallery_focus_pane_g4

0x1bd7,	// (0x00030678) bg_cell_gallery_focus_pane_g5

0x1bdf,	// (0x00030680) bg_cell_gallery_focus_pane_g6

0x1be7,	// (0x00030688) bg_cell_gallery_focus_pane_g7

0x1bef,	// (0x00030690) bg_cell_gallery_focus_pane_g8

0x0007,

0xf653,	// (0x0003e0f4) bg_cell_gallery_focus_pane_g

0x1bf7,	// (0x00030698) aid_firma_cardinal

0x1c0b,	// (0x000306ac) blid_firmament_pane_t1

0x1c22,	// (0x000306c3) blid_firmament_pane_t2

0x1c39,	// (0x000306da) blid_firmament_pane_t3

0x1c50,	// (0x000306f1) blid_firmament_pane_t4

0x0003,

0xf664,	// (0x0003e105) blid_firmament_pane_t

0x1c67,	// (0x00030708) blid_sat_info_pane

0xe343,	// (0x0003cde4) blid_sat_info_pane_g1

0xe343,	// (0x0003cde4) blid_sat_info_pane_g2

0x0001,

0xf3c9,	// (0x0003de6a) blid_sat_info_pane_g

0x1c77,	// (0x00030718) blid_sat_info_pane_t1

0x1c85,	// (0x00030726) smil2_volume_content_pane

0x1c8e,	// (0x0003072f) smil2_volume_pane_g1

0x1c96,	// (0x00030737) smil2_volume_content_pane_g1

0x1c9f,	// (0x00030740) smil2_volume_content_pane_g2

0x1ca8,	// (0x00030749) smil2_volume_content_pane_g3

0x1cb1,	// (0x00030752) smil2_volume_content_pane_g4

0x1cba,	// (0x0003075b) smil2_volume_content_pane_g5

0x1cc3,	// (0x00030764) smil2_volume_content_pane_g6

0x1ccc,	// (0x0003076d) smil2_volume_content_pane_g7

0x1cd5,	// (0x00030776) smil2_volume_content_pane_g8

0x1cde,	// (0x0003077f) smil2_volume_content_pane_g9

0x1ce7,	// (0x00030788) smil2_volume_content_pane_g10

0x0009,

0xf66d,	// (0x0003e10e) smil2_volume_content_pane_g

0x6d4a,	// (0x000357eb) cale_week_day_heading_pane_t1_ParamLimits

0x6d85,	// (0x00035826) cale_week_day_heading_pane_t2_ParamLimits

0x6dc0,	// (0x00035861) cale_week_day_heading_pane_t3_ParamLimits

0x6dfb,	// (0x0003589c) cale_week_day_heading_pane_t4_ParamLimits

0x6e36,	// (0x000358d7) cale_week_day_heading_pane_t5_ParamLimits

0x6e71,	// (0x00035912) cale_week_day_heading_pane_t6_ParamLimits

0x6eac,	// (0x0003594d) cale_week_day_heading_pane_t7_ParamLimits

0xf166,	// (0x0003dc07) cale_week_day_heading_pane_t_ParamLimits

0xe268,	// (0x0003cd09) bg_cale_side_pane_ParamLimits

0x6ee7,	// (0x00035988) cale_week_time_pane_t1_ParamLimits

0x6f21,	// (0x000359c2) cale_week_time_pane_t2_ParamLimits

0x6f5b,	// (0x000359fc) cale_week_time_pane_t3_ParamLimits

0x6f95,	// (0x00035a36) cale_week_time_pane_t4_ParamLimits

0x6fcf,	// (0x00035a70) cale_week_time_pane_t5_ParamLimits

0x7009,	// (0x00035aaa) cale_week_time_pane_t6_ParamLimits

0x7043,	// (0x00035ae4) cale_week_time_pane_t7_ParamLimits

0x707d,	// (0x00035b1e) cale_week_time_pane_t8_ParamLimits

0xf175,	// (0x0003dc16) cale_week_time_pane_t_ParamLimits

0x70b7,	// (0x00035b58) cell_cale_week_pane_g2_ParamLimits

0xe268,	// (0x0003cd09) bg_cale_side_pane_cp01_ParamLimits

0x7eb6,	// (0x00036957) cale_month_week_pane_t1_ParamLimits

0x7eef,	// (0x00036990) cale_month_week_pane_t2_ParamLimits

0x7f28,	// (0x000369c9) cale_month_week_pane_t3_ParamLimits

0x7f61,	// (0x00036a02) cale_month_week_pane_t4_ParamLimits

0x7f9a,	// (0x00036a3b) cale_month_week_pane_t5_ParamLimits

0x7fd3,	// (0x00036a74) cale_month_week_pane_t6_ParamLimits

0xf243,	// (0x0003dce4) cale_month_week_pane_t_ParamLimits

0x80fa,	// (0x00036b9b) cell_cale_month_pane_g1_ParamLimits

0xd981,	// (0x0003c422) main_cale_event_viewer_pane

0xd981,	// (0x0003c422) listscroll_cale_event_viewer_pane

0x1cf0,	// (0x00030791) list_cale_ev_pane

0x1cf8,	// (0x00030799) scroll_pane_cp023

0x92a4,	// (0x00037d45) field_cale_ev_pane_ParamLimits

0x92a4,	// (0x00037d45) field_cale_ev_pane

0x1d04,	// (0x000307a5) field_cale_ev_content_pane_ParamLimits

0x1d04,	// (0x000307a5) field_cale_ev_content_pane

0x1d10,	// (0x000307b1) field_cale_ev_pane_g1_ParamLimits

0x1d10,	// (0x000307b1) field_cale_ev_pane_g1

0x1d1c,	// (0x000307bd) field_cale_ev_pane_g2_ParamLimits

0x1d1c,	// (0x000307bd) field_cale_ev_pane_g2

0x1d34,	// (0x000307d5) field_cale_ev_pane_g3_ParamLimits

0x1d34,	// (0x000307d5) field_cale_ev_pane_g3

0x0002,

0xf682,	// (0x0003e123) field_cale_ev_pane_g_ParamLimits

0xf682,	// (0x0003e123) field_cale_ev_pane_g

0x1d4c,	// (0x000307ed) field_cale_ev_pane_t1_ParamLimits

0x1d4c,	// (0x000307ed) field_cale_ev_pane_t1

0x92be,	// (0x00037d5f) field_cale_ev_content_pane_t1_ParamLimits

0x92be,	// (0x00037d5f) field_cale_ev_content_pane_t1

0xee29,	// (0x0003d8ca) bg_button_pane_cp01

0x6b35,	// (0x000355d6) listscroll_cale_week_pane_ParamLimits

0xe213,	// (0x0003ccb4) popup_toolbar_window_cp01

0xe239,	// (0x0003ccda) listscroll_cale_week_pane_t1_ParamLimits

0x6b35,	// (0x000355d6) listscroll_cale_day_pane_ParamLimits

0xe213,	// (0x0003ccb4) popup_toolbar_window_cp02

0xe68a,	// (0x0003d12b) listscroll_cale_day_pane_t1_ParamLimits

0x6b35,	// (0x000355d6) main_cale_month_pane_ParamLimits

0x8f6f,	// (0x00037a10) popup_toolbar_window_cp03_ParamLimits

0x8f6f,	// (0x00037a10) popup_toolbar_window_cp03

0x8968,	// (0x00037409) main_image_pane_g2_ParamLimits

0x8968,	// (0x00037409) main_image_pane_g2

0x8974,	// (0x00037415) main_image_pane_g3_ParamLimits

0x8974,	// (0x00037415) main_image_pane_g3

0x0002,

0xf467,	// (0x0003df08) main_image_pane_g_ParamLimits

0xf467,	// (0x0003df08) main_image_pane_g

0xef43,	// (0x0003d9e4) main_image_pane_t1_ParamLimits

0x8980,	// (0x00037421) main_image_pane_t2_ParamLimits

0x8980,	// (0x00037421) main_image_pane_t2

0x8992,	// (0x00037433) main_image_pane_t3_ParamLimits

0x8992,	// (0x00037433) main_image_pane_t3

0x89a4,	// (0x00037445) main_image_pane_t4_ParamLimits

0x89a4,	// (0x00037445) main_image_pane_t4

0x0003,

0xf46e,	// (0x0003df0f) main_image_pane_t_ParamLimits

0xf46e,	// (0x0003df0f) main_image_pane_t

0x89b6,	// (0x00037457) popup_image_details_window_cp01

0x89be,	// (0x0003745f) popup_toobar_trans_pane_cp01_ParamLimits

0x89be,	// (0x0003745f) popup_toobar_trans_pane_cp01

0x8ee3,	// (0x00037984) popup_image_details_window_ParamLimits

0x8ee3,	// (0x00037984) popup_image_details_window

0x8eef,	// (0x00037990) popup_image_focus_window

0xd98b,	// (0x0003c42c) camera2_autofocus_pane_ParamLimits

0xd98b,	// (0x0003c42c) camera2_autofocus_pane

0xd981,	// (0x0003c422) bg_popup_sub_pane_cp06

0x1d63,	// (0x00030804) popup_image_focus_window_g1

0x1d6b,	// (0x0003080c) popup_image_focus_window_g2

0x1d73,	// (0x00030814) popup_image_focus_window_g3

0x1d7b,	// (0x0003081c) popup_image_focus_window_g4

0x0003,

0xf689,	// (0x0003e12a) popup_image_focus_window_g

0x1d83,	// (0x00030824) popup_image_focus_window_t1

0x1d91,	// (0x00030832) popup_image_focus_window_t2

0x1da0,	// (0x00030841) popup_image_focus_window_t3

0x0002,

0xf692,	// (0x0003e133) popup_image_focus_window_t

0xe07f,	// (0x0003cb20) camera2_autofocus_pane_g1

0xed86,	// (0x0003d827) bg_tb_trans_pane_cp01

0x1dae,	// (0x0003084f) popup_image_details_window_g1

0x1dc1,	// (0x00030862) popup_image_details_window_g2

0x0002,

0xf6a4,	// (0x0003e145) popup_image_details_window_g

0x1dea,	// (0x0003088b) popup_image_details_window_t1

0x1dfc,	// (0x0003089d) popup_image_details_window_t2

0x1e15,	// (0x000308b6) popup_image_details_window_t3

0x1e29,	// (0x000308ca) popup_image_details_window_t4

0x1e44,	// (0x000308e5) popup_image_details_window_t5

0x0004,

0xf6ab,	// (0x0003e14c) popup_image_details_window_t

0xe0dd,	// (0x0003cb7e) bg_calc_paper_pane_ParamLimits

0xd981,	// (0x0003c422) grid_highlight_pane_cp013

0x6913,	// (0x000353b4) list_calc_pane_ParamLimits

0x6925,	// (0x000353c6) scroll_pane_cp024

0xe0f5,	// (0x0003cb96) bg_calc_display_pane_ParamLimits

0x692d,	// (0x000353ce) calc_display_pane_t1_ParamLimits

0x6942,	// (0x000353e3) calc_display_pane_t2_ParamLimits

0x6957,	// (0x000353f8) calc_display_pane_t3_ParamLimits

0xf0e6,	// (0x0003db87) calc_display_pane_t_ParamLimits

0x6a0d,	// (0x000354ae) cell_calc_pane_g2

0x0001,

0xf103,	// (0x0003dba4) cell_calc_pane_g

0x6a16,	// (0x000354b7) cell_calc_pane_t1

0xe14a,	// (0x0003cbeb) grid_highlight_pane_cp02_ParamLimits

0xe160,	// (0x0003cc01) toolbar_button_pane_cp01_ParamLimits

0xe160,	// (0x0003cc01) toolbar_button_pane_cp01

0xef88,	// (0x0003da29) temp_image_control_pane_ParamLimits

0xef88,	// (0x0003da29) temp_image_control_pane

0xed86,	// (0x0003d827) main_mp3_pane

0x1e5e,	// (0x000308ff) temp_image_control_pane_g1_ParamLimits

0x1e5e,	// (0x000308ff) temp_image_control_pane_g1

0x1e6c,	// (0x0003090d) temp_image_control_pane_g2_ParamLimits

0x1e6c,	// (0x0003090d) temp_image_control_pane_g2

0x1e7e,	// (0x0003091f) temp_image_control_pane_g3_ParamLimits

0x1e7e,	// (0x0003091f) temp_image_control_pane_g3

0x92d8,	// (0x00037d79) temp_image_control_pane_g4_ParamLimits

0x92d8,	// (0x00037d79) temp_image_control_pane_g4

0x0003,

0xf6b6,	// (0x0003e157) temp_image_control_pane_g_ParamLimits

0xf6b6,	// (0x0003e157) temp_image_control_pane_g

0x1e5e,	// (0x000308ff) main_mp3_pane_g1

0x92e9,	// (0x00037d8a) main_mp3_pane_g2

0x0007,

0xf6bf,	// (0x0003e160) main_mp3_pane_g

0x1eb3,	// (0x00030954) main_mp3_pane_t1

0xe08d,	// (0x0003cb2e) main_camera_pane_g8_ParamLimits

0xe08d,	// (0x0003cb2e) main_camera_pane_g8

0x7208,	// (0x00035ca9) main_video_pane_g7_ParamLimits

0x7208,	// (0x00035ca9) main_video_pane_g7

0xe315,	// (0x0003cdb6) main_camera2_pane_t7_ParamLimits

0xe315,	// (0x0003cdb6) main_camera2_pane_t7

0xe458,	// (0x0003cef9) scroll_pane_cp025_ParamLimits

0xe458,	// (0x0003cef9) scroll_pane_cp025

0xe46c,	// (0x0003cf0d) scroll_pane_cp026_ParamLimits

0xe46c,	// (0x0003cf0d) scroll_pane_cp026

0xe47b,	// (0x0003cf1c) wml_content_pane_ParamLimits

0xd981,	// (0x0003c422) main_touch_calib_pane

0x9381,	// (0x00037e22) main_touch_calib_pane_g1

0x938d,	// (0x00037e2e) main_touch_calib_pane_g2

0x9399,	// (0x00037e3a) main_touch_calib_pane_g3

0x93a5,	// (0x00037e46) main_touch_calib_pane_g4

0x0003,

0xf6dd,	// (0x0003e17e) main_touch_calib_pane_g

0x93b1,	// (0x00037e52) main_touch_calib_pane_t1

0x93c6,	// (0x00037e67) main_touch_calib_pane_t2

0x0004,

0xf6e6,	// (0x0003e187) main_touch_calib_pane_t

0xeb8e,	// (0x0003d62f) mup_progress_pane_cp02

0xebc3,	// (0x0003d664) navi_pane_g1

0xec4e,	// (0x0003d6ef) navi_pane_mp_t3

0xed86,	// (0x0003d827) main_mp3_pane_ParamLimits

0x8faa,	// (0x00037a4b) navi_pane_ParamLimits

0x1e5e,	// (0x000308ff) main_mp3_pane_g1_ParamLimits

0x92e9,	// (0x00037d8a) main_mp3_pane_g2_ParamLimits

0x92f5,	// (0x00037d96) main_mp3_pane_g3_ParamLimits

0x92f5,	// (0x00037d96) main_mp3_pane_g3

0x9301,	// (0x00037da2) main_mp3_pane_g4_ParamLimits

0x9301,	// (0x00037da2) main_mp3_pane_g4

0xe07f,	// (0x0003cb20) main_mp3_pane_g5_ParamLimits

0xe07f,	// (0x0003cb20) main_mp3_pane_g5

0x1e8e,	// (0x0003092f) main_mp3_pane_g6_ParamLimits

0x1e8e,	// (0x0003092f) main_mp3_pane_g6

0x1e9b,	// (0x0003093c) main_mp3_pane_g7_ParamLimits

0x1e9b,	// (0x0003093c) main_mp3_pane_g7

0x1ea7,	// (0x00030948) main_mp3_pane_g8_ParamLimits

0x1ea7,	// (0x00030948) main_mp3_pane_g8

0xf6bf,	// (0x0003e160) main_mp3_pane_g_ParamLimits

0x930d,	// (0x00037dae) main_mp3_pane_t2

0x931b,	// (0x00037dbc) main_mp3_pane_t3

0x1ec1,	// (0x00030962) main_mp3_pane_t4

0x1ecf,	// (0x00030970) main_mp3_pane_t5

0x0005,

0xf6d0,	// (0x0003e171) main_mp3_pane_t

0x1edd,	// (0x0003097e) mup_progress_pane_cp01

0x578c,	// (0x0003422d) aid_zoom_text_secondary2

0x1cf0,	// (0x00030791) list_cale_ev2_pane

0x1cf8,	// (0x00030799) scroll_pane_cp023_ParamLimits

0x9411,	// (0x00037eb2) field_cale_ev2_pane_ParamLimits

0x9411,	// (0x00037eb2) field_cale_ev2_pane

0x58d2,	// (0x00034373) field_cale_ev2_pane_g1_ParamLimits

0x58d2,	// (0x00034373) field_cale_ev2_pane_g1

0x58de,	// (0x0003437f) field_cale_ev2_pane_g2_ParamLimits

0x58de,	// (0x0003437f) field_cale_ev2_pane_g2

0x58f6,	// (0x00034397) field_cale_ev2_pane_g3_ParamLimits

0x58f6,	// (0x00034397) field_cale_ev2_pane_g3

0x0003,

0xf6f1,	// (0x0003e192) field_cale_ev2_pane_g_ParamLimits

0xf6f1,	// (0x0003e192) field_cale_ev2_pane_g

0x591a,	// (0x000343bb) field_cale_ev2_pane_t1_ParamLimits

0x591a,	// (0x000343bb) field_cale_ev2_pane_t1

0x5931,	// (0x000343d2) field_cale_ev2_pane_t2_ParamLimits

0x5931,	// (0x000343d2) field_cale_ev2_pane_t2

0x0001,

0xf6fa,	// (0x0003e19b) field_cale_ev2_pane_t_ParamLimits

0xf6fa,	// (0x0003e19b) field_cale_ev2_pane_t

0x8864,	// (0x00037305) main_postcard_pane_g5_ParamLimits

0x8864,	// (0x00037305) main_postcard_pane_g5

0x8870,	// (0x00037311) main_postcard_pane_g6_ParamLimits

0x8870,	// (0x00037311) main_postcard_pane_g6

0xd98b,	// (0x0003c42c) camera2_autofocus_pane_cp_ParamLimits

0xd98b,	// (0x0003c42c) camera2_autofocus_pane_cp

0xed86,	// (0x0003d827) main_mup3_pane

0x9460,	// (0x00037f01) main_mup3_pane_g1_ParamLimits

0x9460,	// (0x00037f01) main_mup3_pane_g1

0x9481,	// (0x00037f22) main_mup3_pane_g2_ParamLimits

0x9481,	// (0x00037f22) main_mup3_pane_g2

0x94ee,	// (0x00037f8f) main_mup3_pane_g3_ParamLimits

0x94ee,	// (0x00037f8f) main_mup3_pane_g3

0x9529,	// (0x00037fca) main_mup3_pane_g4_ParamLimits

0x9529,	// (0x00037fca) main_mup3_pane_g4

0x9564,	// (0x00038005) main_mup3_pane_g5_ParamLimits

0x9564,	// (0x00038005) main_mup3_pane_g5

0x959f,	// (0x00038040) main_mup3_pane_g6_ParamLimits

0x959f,	// (0x00038040) main_mup3_pane_g6

0xe08d,	// (0x0003cb2e) main_mup3_pane_g7_ParamLimits

0xe08d,	// (0x0003cb2e) main_mup3_pane_g7

0x0007,

0xf70a,	// (0x0003e1ab) main_mup3_pane_g_ParamLimits

0xf70a,	// (0x0003e1ab) main_mup3_pane_g

0x960d,	// (0x000380ae) main_mup3_pane_t1_ParamLimits

0x960d,	// (0x000380ae) main_mup3_pane_t1

0x966e,	// (0x0003810f) main_mup3_pane_t2_ParamLimits

0x966e,	// (0x0003810f) main_mup3_pane_t2

0x9729,	// (0x000381ca) main_mup3_pane_t4_ParamLimits

0x9729,	// (0x000381ca) main_mup3_pane_t4

0x976f,	// (0x00038210) main_mup3_pane_t5_ParamLimits

0x976f,	// (0x00038210) main_mup3_pane_t5

0x9813,	// (0x000382b4) main_mup3_pane_t6_ParamLimits

0x9813,	// (0x000382b4) main_mup3_pane_t6

0x0005,

0xf71b,	// (0x0003e1bc) main_mup3_pane_t_ParamLimits

0xf71b,	// (0x0003e1bc) main_mup3_pane_t

0x98bb,	// (0x0003835c) mup3_progress_pane_ParamLimits

0x98bb,	// (0x0003835c) mup3_progress_pane

0x991f,	// (0x000383c0) popup_mup3_control_window_ParamLimits

0x991f,	// (0x000383c0) popup_mup3_control_window

0x1f59,	// (0x000309fa) popup_mup3_text_window

0x9938,	// (0x000383d9) mup3_progress_pane_t1

0x9956,	// (0x000383f7) mup3_progress_pane_t2

0x1f61,	// (0x00030a02) mup3_progress_pane_t3

0x0002,

0xf728,	// (0x0003e1c9) mup3_progress_pane_t

0x1f7e,	// (0x00030a1f) mup_progress_pane_cp03

0xd981,	// (0x0003c422) bg_tb_trans_pane_cp04

0x9974,	// (0x00038415) mup3_volume_pane

0x997c,	// (0x0003841d) popup_mup3_control_window_g1

0x9985,	// (0x00038426) mup3_volume_pane_g1

0x998e,	// (0x0003842f) mup3_volume_pane_g2

0x9997,	// (0x00038438) mup3_volume_pane_g3

0x0002,

0xf72f,	// (0x0003e1d0) mup3_volume_pane_g

0xd981,	// (0x0003c422) bg_tb_trans_pane_cp03

0x1f8e,	// (0x00030a2f) popup_mup3_text_window_g1

0x1f96,	// (0x00030a37) popup_mup3_text_window_t1

0xe13d,	// (0x0003cbde) list_calc_item_pane_g1_ParamLimits

0x19d1,	// (0x00030472) mup_volume_pane_cp_g1

0x93db,	// (0x00037e7c) main_touch_calib_pane_t3

0x93ed,	// (0x00037e8e) main_touch_calib_pane_t4

0x93ff,	// (0x00037ea0) main_touch_calib_pane_t5

0x64c7,	// (0x00034f68) aid_cell_size_toolbar2

0x64cf,	// (0x00034f70) aid_popup3_width_pane

0x5784,	// (0x00034225) aid_zoom_text_msg_primary

0xe2f4,	// (0x0003cd95) vorec_t7

0xe101,	// (0x0003cba2) bg_calc_paper_pane_g1_ParamLimits

0xe10d,	// (0x0003cbae) bg_calc_paper_pane_g2_ParamLimits

0xe119,	// (0x0003cbba) bg_calc_paper_pane_g3_ParamLimits

0xe125,	// (0x0003cbc6) bg_calc_paper_pane_g4_ParamLimits

0xe131,	// (0x0003cbd2) bg_calc_paper_pane_g5_ParamLimits

0x6990,	// (0x00035431) bg_calc_paper_pane_g6_ParamLimits

0x699f,	// (0x00035440) bg_calc_paper_pane_g7_ParamLimits

0x69ae,	// (0x0003544f) bg_calc_paper_pane_g8_ParamLimits

0xf0ed,	// (0x0003db8e) bg_calc_paper_pane_g_ParamLimits

0x69bd,	// (0x0003545e) calc_bg_paper_pane_g9_ParamLimits

0xd98b,	// (0x0003c42c) image_qvga_pane_ParamLimits

0xd98b,	// (0x0003c42c) image_qvga_pane

0xe005,	// (0x0003caa6) bg_popup_sub_pane_cp04_ParamLimits

0xeebf,	// (0x0003d960) popup_mup_playback_window_g1_ParamLimits

0xeecb,	// (0x0003d96c) popup_mup_playback_window_t1_ParamLimits

0xeee0,	// (0x0003d981) popup_mup_playback_window_t2_ParamLimits

0xf462,	// (0x0003df03) popup_mup_playback_window_t_ParamLimits

0xe07f,	// (0x0003cb20) main_mup2_pane_g3_ParamLimits

0xe07f,	// (0x0003cb20) main_mup2_pane_g3

0x73cb,	// (0x00035e6c) popup_toolbar_window_cp04

0x09d4,	// (0x0002f475) popup_call2_audio_second_window_g3_ParamLimits

0x09d4,	// (0x0002f475) popup_call2_audio_second_window_g3

0x0dec,	// (0x0002f88d) popup_call2_audio_first_window_g4_ParamLimits

0x0dec,	// (0x0002f88d) popup_call2_audio_first_window_g4

0x1413,	// (0x0002feb4) popup_call2_audio_in_window_g4_ParamLimits

0x1413,	// (0x0002feb4) popup_call2_audio_in_window_g4

0x895b,	// (0x000373fc) aid_area_sk_bg_cut_ParamLimits

0x895b,	// (0x000373fc) aid_area_sk_bg_cut

0xeef5,	// (0x0003d996) aid_area_sk_bg_cut_2_ParamLimits

0xeef5,	// (0x0003d996) aid_area_sk_bg_cut_2

0xd981,	// (0x0003c422) aid_placing_details_win

0xd981,	// (0x0003c422) aid_placing_details_win_2

0xe07f,	// (0x0003cb20) camera2_autofocus_pane_g1_ParamLimits

0x66b3,	// (0x00035154) popup_fixed_preview_cale_window_ParamLimits

0x66b3,	// (0x00035154) popup_fixed_preview_cale_window

0xecc4,	// (0x0003d765) navi_slider_pane_g3

0xeccd,	// (0x0003d76e) navi_slider_pane_g4

0xecd6,	// (0x0003d777) navi_slider_pane_g5

0xecc4,	// (0x0003d765) navi_slider_pane_g6

0x8587,	// (0x00037028) navi_slider_pane_g7

0xedf6,	// (0x0003d897) mup_scale_pane_g3

0xedff,	// (0x0003d8a0) mup_scale_pane_g4

0xee08,	// (0x0003d8a9) mup_scale_pane_g5

0x8736,	// (0x000371d7) mup_scale_pane_g6

0x873f,	// (0x000371e0) mup_scale_pane_g7

0xe343,	// (0x0003cde4) cams2_slider_pane_g3

0xe343,	// (0x0003cde4) cams2_slider_pane_g4

0xe343,	// (0x0003cde4) cams2_slider_pane_g5

0xe343,	// (0x0003cde4) cams2_slider_pane_g6

0xe343,	// (0x0003cde4) cams2_slider_pane_g7

0xe343,	// (0x0003cde4) camera2_autofocus_pane_cp_g1

0x1739,	// (0x000301da) bg_popup_preview_window_pane_cp02_ParamLimits

0x1739,	// (0x000301da) bg_popup_preview_window_pane_cp02

0x1fa4,	// (0x00030a45) list_fp_cale_pane_ParamLimits

0x1fa4,	// (0x00030a45) list_fp_cale_pane

0x1fb0,	// (0x00030a51) popup_fixed_preview_cale_window_t1_ParamLimits

0x1fb0,	// (0x00030a51) popup_fixed_preview_cale_window_t1

0x99a0,	// (0x00038441) popup_fixed_preview_cale_window_t2_ParamLimits

0x99a0,	// (0x00038441) popup_fixed_preview_cale_window_t2

0x99b5,	// (0x00038456) popup_fixed_preview_cale_window_t3_ParamLimits

0x99b5,	// (0x00038456) popup_fixed_preview_cale_window_t3

0x0002,

0xf736,	// (0x0003e1d7) popup_fixed_preview_cale_window_t_ParamLimits

0xf736,	// (0x0003e1d7) popup_fixed_preview_cale_window_t

0x99ca,	// (0x0003846b) list_single_fp_cale_pane_ParamLimits

0x99ca,	// (0x0003846b) list_single_fp_cale_pane

0x1fce,	// (0x00030a6f) list_single_fp_cale_pane_g1_ParamLimits

0x1fce,	// (0x00030a6f) list_single_fp_cale_pane_g1

0x1fda,	// (0x00030a7b) list_single_fp_cale_pane_g2_ParamLimits

0x1fda,	// (0x00030a7b) list_single_fp_cale_pane_g2

0x0002,

0xf73d,	// (0x0003e1de) list_single_fp_cale_pane_g_ParamLimits

0xf73d,	// (0x0003e1de) list_single_fp_cale_pane_g

0x1ff3,	// (0x00030a94) list_single_fp_cale_pane_t1_ParamLimits

0x1ff3,	// (0x00030a94) list_single_fp_cale_pane_t1

0x2005,	// (0x00030aa6) list_single_fp_cale_pane_t2_ParamLimits

0x2005,	// (0x00030aa6) list_single_fp_cale_pane_t2

0x0001,

0xf744,	// (0x0003e1e5) list_single_fp_cale_pane_t_ParamLimits

0xf744,	// (0x0003e1e5) list_single_fp_cale_pane_t

0x0000,

0x0000,

0x0000,

0x0000,

0xd981,	// (0x0003c422) main_dialer_pane

0x99da,	// (0x0003847b) aid_cell_size_keypad

0xd981,	// (0x0003c422) dialer_ne_pane

0xd981,	// (0x0003c422) grid_dialer_command_1_pane

0xd981,	// (0x0003c422) grid_dialer_command_2_pane

0xd981,	// (0x0003c422) grid_dialer_keypad_pane

0x1a65,	// (0x00030506) bg_popup_call_pane_cp06_ParamLimits

0x1a65,	// (0x00030506) bg_popup_call_pane_cp06

0x1a65,	// (0x00030506) dialer_ne_clear_pane_ParamLimits

0x1a65,	// (0x00030506) dialer_ne_clear_pane

0xe343,	// (0x0003cde4) dialer_ne_pane_g1

0xe315,	// (0x0003cdb6) dialer_ne_pane_t1_ParamLimits

0xe315,	// (0x0003cdb6) dialer_ne_pane_t1

0x2213,	// (0x00030cb4) dialer_ne_pane_t2_ParamLimits

0x2213,	// (0x00030cb4) dialer_ne_pane_t2

0x99e4,	// (0x00038485) dialer_ne_pane_t3_ParamLimits

0x99e4,	// (0x00038485) dialer_ne_pane_t3

0x0002,

0xf749,	// (0x0003e1ea) dialer_ne_pane_t_ParamLimits

0xf749,	// (0x0003e1ea) dialer_ne_pane_t

0x99e4,	// (0x00038485) dialer_ne_pane_t3_copy1_ParamLimits

0x99e4,	// (0x00038485) dialer_ne_pane_t3_copy1

0x9a06,	// (0x000384a7) cell_dialer_keypad_pane_ParamLimits

0x9a06,	// (0x000384a7) cell_dialer_keypad_pane

0x9a1b,	// (0x000384bc) cell_dialer_command_1_pane_ParamLimits

0x9a1b,	// (0x000384bc) cell_dialer_command_1_pane

0x9a2c,	// (0x000384cd) cell_dialer_command_2_pane_ParamLimits

0x9a2c,	// (0x000384cd) cell_dialer_command_2_pane

0xed86,	// (0x0003d827) bg_button_pane_cp02_ParamLimits

0xed86,	// (0x0003d827) bg_button_pane_cp02

0xe07f,	// (0x0003cb20) cell_dialer_keypad_pane_g1_ParamLimits

0xe07f,	// (0x0003cb20) cell_dialer_keypad_pane_g1

0xed86,	// (0x0003d827) bg_button_pane_cp03_ParamLimits

0xed86,	// (0x0003d827) bg_button_pane_cp03

0xe07f,	// (0x0003cb20) cell_dialer_command_1_pane_g1_ParamLimits

0xe07f,	// (0x0003cb20) cell_dialer_command_1_pane_g1

0xd981,	// (0x0003c422) bg_button_pane_cp04

0xe343,	// (0x0003cde4) cell_dialer_command_2_pane_g1

0xd981,	// (0x0003c422) bg_button_pane_cp06

0xe343,	// (0x0003cde4) dialer_ne_clear_pane_g1

0xebcf,	// (0x0003d670) navi_pane_g2

0x852f,	// (0x00036fd0) navi_pane_g3

0x0002,

0xf365,	// (0x0003de06) navi_pane_g

0xec5c,	// (0x0003d6fd) navi_pane_mv_g2

0xec83,	// (0x0003d724) navi_pane_mv_g5

0x854c,	// (0x00036fed) navi_pane_mv_t1

0xe0f5,	// (0x0003cb96) main_clock2_pane

0x9a6f,	// (0x00038510) main_clock2_list_pane_ParamLimits

0x9a6f,	// (0x00038510) main_clock2_list_pane

0x9a95,	// (0x00038536) main_clock2_pane_t1_ParamLimits

0x9a95,	// (0x00038536) main_clock2_pane_t1

0x9ab5,	// (0x00038556) main_clock2_pane_t2_ParamLimits

0x9ab5,	// (0x00038556) main_clock2_pane_t2

0x0004,

0xf755,	// (0x0003e1f6) main_clock2_pane_t_ParamLimits

0xf755,	// (0x0003e1f6) main_clock2_pane_t

0x9b0e,	// (0x000385af) popup_clock_analogue_window_cp03_ParamLimits

0x9b0e,	// (0x000385af) popup_clock_analogue_window_cp03

0x9b2c,	// (0x000385cd) popup_clock_digital_window_cp02_ParamLimits

0x9b2c,	// (0x000385cd) popup_clock_digital_window_cp02

0x9b99,	// (0x0003863a) main_clock2_list_single_pane_ParamLimits

0x9b99,	// (0x0003863a) main_clock2_list_single_pane

0xe2c2,	// (0x0003cd63) list_highlight_pane_cp05

0x2068,	// (0x00030b09) main_clock2_list_single_pane_t1

0x73cb,	// (0x00035e6c) popup_toolbar_window_cp04_ParamLimits

0xe08d,	// (0x0003cb2e) camera2_autofocus_pane_g2_ParamLimits

0xe08d,	// (0x0003cb2e) camera2_autofocus_pane_g2

0xe08d,	// (0x0003cb2e) camera2_autofocus_pane_g3_ParamLimits

0xe08d,	// (0x0003cb2e) camera2_autofocus_pane_g3

0xe08d,	// (0x0003cb2e) camera2_autofocus_pane_g4_ParamLimits

0xe08d,	// (0x0003cb2e) camera2_autofocus_pane_g4

0xe08d,	// (0x0003cb2e) camera2_autofocus_pane_g5_ParamLimits

0xe08d,	// (0x0003cb2e) camera2_autofocus_pane_g5

0x0004,

0xf699,	// (0x0003e13a) camera2_autofocus_pane_g_ParamLimits

0xf699,	// (0x0003e13a) camera2_autofocus_pane_g

0x9427,	// (0x00037ec8) camera2_autofocus_pane_cp_g2

0x942f,	// (0x00037ed0) camera2_autofocus_pane_cp_g3

0x9437,	// (0x00037ed8) camera2_autofocus_pane_cp_g4

0x943f,	// (0x00037ee0) camera2_autofocus_pane_cp_g5

0x0004,

0xf6ff,	// (0x0003e1a0) camera2_autofocus_pane_cp_g

0xd981,	// (0x0003c422) popup_dialer_spcha_window

0xd981,	// (0x0003c422) bg_popup_sub_pane_cp07

0xd981,	// (0x0003c422) list_spcha_pane

0x2076,	// (0x00030b17) list_single_spcha_pane_ParamLimits

0x2076,	// (0x00030b17) list_single_spcha_pane

0xd981,	// (0x0003c422) list_highlight_pane_cp06

0x16e1,	// (0x00030182) list_single_spcha_pane_t1

0x11bd,	// (0x0002fc5e) popup_call2_audio_out_window_g4_ParamLimits

0x11bd,	// (0x0002fc5e) popup_call2_audio_out_window_g4

0xd981,	// (0x0003c422) main_imed2_pane

0x8ef7,	// (0x00037998) popup_imed_adjust2_window

0x8f08,	// (0x000379a9) popup_imed_trans_window_ParamLimits

0x8f08,	// (0x000379a9) popup_imed_trans_window

0x1abc,	// (0x0003055d) popup_blid_sat_info2_window_t1

0x1aca,	// (0x0003056b) popup_blid_sat_info2_window_t2

0x000a,

0xf62e,	// (0x0003e0cf) popup_blid_sat_info2_window_t

0x9c43,	// (0x000386e4) aid_size_cell_colour_35

0x9c5a,	// (0x000386fb) aid_size_cell_colour_112

0x9c71,	// (0x00038712) aid_size_cell_effect

0xed86,	// (0x0003d827) bg_tb_trans_pane_cp02

0xf02c,	// (0x0003dacd) heading_imed_pane

0x9c8b,	// (0x0003872c) listscroll_imed_pane

0x2088,	// (0x00030b29) heading_imed_pane_g1

0x2090,	// (0x00030b31) heading_imed_pane_t1

0x209e,	// (0x00030b3f) grid_imed_colour_35_pane_ParamLimits

0x209e,	// (0x00030b3f) grid_imed_colour_35_pane

0x9c97,	// (0x00038738) grid_imed_effect_pane

0x20b1,	// (0x00030b52) list_imed_aspect_pane

0x9ca3,	// (0x00038744) scroll_pane_cp027_ParamLimits

0x9ca3,	// (0x00038744) scroll_pane_cp027

0x9caf,	// (0x00038750) cell_imed_effect_pane_ParamLimits

0x9caf,	// (0x00038750) cell_imed_effect_pane

0x20b9,	// (0x00030b5a) cell_imed_colour_pane_ParamLimits

0x20b9,	// (0x00030b5a) cell_imed_colour_pane

0x20f3,	// (0x00030b94) cell_imed_colour_pane_g1_ParamLimits

0x20f3,	// (0x00030b94) cell_imed_colour_pane_g1

0x2104,	// (0x00030ba5) hgihlgiht_grid_pane_cp016_ParamLimits

0x2104,	// (0x00030ba5) hgihlgiht_grid_pane_cp016

0x9cc5,	// (0x00038766) cell_imed_effect_pane_g1

0x9ccd,	// (0x0003876e) grid_highlight_pane_cp017

0x2115,	// (0x00030bb6) list_imed_single_pane_ParamLimits

0x2115,	// (0x00030bb6) list_imed_single_pane

0xd981,	// (0x0003c422) list_highlight_pane_cp07

0x2128,	// (0x00030bc9) list_imed_aspect_pane_comp1_t1

0xeffc,	// (0x0003da9d) bg_tb_trans_pane_cp05

0x2148,	// (0x00030be9) popup_imed_adjust2_window_g1

0x216f,	// (0x00030c10) popup_imed_adjust2_window_t1

0x2187,	// (0x00030c28) slider_imed_adjust_pane

0x219b,	// (0x00030c3c) slider_imed_adjust_pane_g1

0x21ab,	// (0x00030c4c) slider_imed_adjust_pane_g2

0x21bb,	// (0x00030c5c) slider_imed_adjust_pane_g3

0x21cc,	// (0x00030c6d) slider_imed_adjust_pane_g4

0x0003,

0xf772,	// (0x0003e213) slider_imed_adjust_pane_g

0x9cd6,	// (0x00038777) aid_size_cell_clipart2

0x9ce2,	// (0x00038783) grid_imed_clipart_pane

0x21dd,	// (0x00030c7e) scroll_pane_cp031

0x9cec,	// (0x0003878d) cell_imed_clipart_pane_ParamLimits

0x9cec,	// (0x0003878d) cell_imed_clipart_pane

0x9d03,	// (0x000387a4) cell_imed_clipart_pane_g1

0xd981,	// (0x0003c422) grid_highlight_pane_cp014

0x9a7b,	// (0x0003851c) main_clock2_pane_g1_ParamLimits

0x9a7b,	// (0x0003851c) main_clock2_pane_g1

0x9b44,	// (0x000385e5) aid_call2_pane_cp10

0x9b56,	// (0x000385f7) aid_call_pane_cp10

0xeb5e,	// (0x0003d5ff) popup_clock_analogue_window_cp10_g1

0xeb5e,	// (0x0003d5ff) popup_clock_analogue_window_cp10_g2

0x9b68,	// (0x00038609) popup_clock_analogue_window_cp10_g3

0x9b68,	// (0x00038609) popup_clock_analogue_window_cp10_g4

0xeb5e,	// (0x0003d5ff) popup_clock_analogue_window_cp10_g5

0x0004,

0xf760,	// (0x0003e201) popup_clock_analogue_window_cp10_g

0x9b7a,	// (0x0003861b) popup_clock_analogue_window_cp10_t1

0x9bab,	// (0x0003864c) clock_digital_number_pane_cp10_ParamLimits

0x9bab,	// (0x0003864c) clock_digital_number_pane_cp10

0x9bc3,	// (0x00038664) clock_digital_number_pane_cp11_ParamLimits

0x9bc3,	// (0x00038664) clock_digital_number_pane_cp11

0x9bdb,	// (0x0003867c) clock_digital_number_pane_cp12_ParamLimits

0x9bdb,	// (0x0003867c) clock_digital_number_pane_cp12

0x9bf3,	// (0x00038694) clock_digital_number_pane_cp13_ParamLimits

0x9bf3,	// (0x00038694) clock_digital_number_pane_cp13

0x9c0b,	// (0x000386ac) clock_digital_separator_pane_cp10_ParamLimits

0x9c0b,	// (0x000386ac) clock_digital_separator_pane_cp10

0x9c23,	// (0x000386c4) popup_clock_digital_window_cp02_t1_ParamLimits

0x9c23,	// (0x000386c4) popup_clock_digital_window_cp02_t1

0xdffd,	// (0x0003ca9e) clock_digital_number_pane_cp10_g1

0xdffd,	// (0x0003ca9e) clock_digital_number_pane_cp10_g2

0x0001,

0xf77b,	// (0x0003e21c) clock_digital_number_pane_cp10_g

0xdffd,	// (0x0003ca9e) clock_digital_separator_pane_cp10_g1

0xdffd,	// (0x0003ca9e) clock_digital_separator_pane_g2_cp10

0xec8b,	// (0x0003d72c) navi_pane_vded_g4

0xec94,	// (0x0003d735) navi_pane_vded_g5

0xec9d,	// (0x0003d73e) navi_pane_vded_t1

0xd981,	// (0x0003c422) main_vded_pane

0x9d0c,	// (0x000387ad) main_vded_pane_g1

0x9d14,	// (0x000387b5) main_vded_pane_g2

0x9d1c,	// (0x000387bd) main_vded_pane_g3

0x0002,

0xf780,	// (0x0003e221) main_vded_pane_g

0x9d24,	// (0x000387c5) main_vded_pane_t1

0x9d32,	// (0x000387d3) main_vded_pane_t2

0x0001,

0xf787,	// (0x0003e228) main_vded_pane_t

0x9d40,	// (0x000387e1) vded_slider_pane

0x9d48,	// (0x000387e9) vded_video_pane

0x21e5,	// (0x00030c86) vded_video_pane_g1

0x9d50,	// (0x000387f1) vded_video_pane_g2

0xe343,	// (0x0003cde4) vded_video_pane_g3

0x0002,

0xf78c,	// (0x0003e22d) vded_video_pane_g

0x21ef,	// (0x00030c90) vded_slider_pane_g1

0x19d1,	// (0x00030472) vded_slider_pane_g2

0x21f8,	// (0x00030c99) vded_slider_pane_g3

0x2201,	// (0x00030ca2) vded_slider_pane_g4

0x220a,	// (0x00030cab) vded_slider_pane_g5

0x0004,

0xf793,	// (0x0003e234) vded_slider_pane_g

0x9913,	// (0x000383b4) mup3_rocker_pane_ParamLimits

0x9913,	// (0x000383b4) mup3_rocker_pane

0x9d59,	// (0x000387fa) mup3_control_keys_pane_g1

0x9d61,	// (0x00038802) mup3_control_keys_pane_g2

0x9d69,	// (0x0003880a) mup3_control_keys_pane_g3

0x9d71,	// (0x00038812) mup3_control_keys_pane_g4

0x0003,

0xf79e,	// (0x0003e23f) mup3_control_keys_pane_g

0x66d7,	// (0x00035178) popup_toolbar2_fixed_window_cp01_ParamLimits

0x66d7,	// (0x00035178) popup_toolbar2_fixed_window_cp01

0x992b,	// (0x000383cc) popup_toolbar2_fixed_window_cp02_ParamLimits

0x992b,	// (0x000383cc) popup_toolbar2_fixed_window_cp02

0x0b46,	// (0x0002f5e7) popup_call2_audio_second_window_t4_ParamLimits

0x0b46,	// (0x0002f5e7) popup_call2_audio_second_window_t4

0x1082,	// (0x0002fb23) popup_call2_audio_first_window_t6_ParamLimits

0x1082,	// (0x0002fb23) popup_call2_audio_first_window_t6

0x12c0,	// (0x0002fd61) popup_call2_audio_out_window_t6_ParamLimits

0x12c0,	// (0x0002fd61) popup_call2_audio_out_window_t6

0xd981,	// (0x0003c422) main_vitu_pane

0xd98b,	// (0x0003c42c) aid_size_cell_itu_ParamLimits

0xd98b,	// (0x0003c42c) aid_size_cell_itu

0xd98b,	// (0x0003c42c) bg_popup_window_pane_cp08_ParamLimits

0xd98b,	// (0x0003c42c) bg_popup_window_pane_cp08

0xd98b,	// (0x0003c42c) field_vitu_entry_pane_ParamLimits

0xd98b,	// (0x0003c42c) field_vitu_entry_pane

0xd98b,	// (0x0003c42c) grid_vitu_function_pane_ParamLimits

0xd98b,	// (0x0003c42c) grid_vitu_function_pane

0xd98b,	// (0x0003c42c) grid_vitu_itu_pane_ParamLimits

0xd98b,	// (0x0003c42c) grid_vitu_itu_pane

0x9d81,	// (0x00038822) cell_vitu_itu_pane_ParamLimits

0x9d81,	// (0x00038822) cell_vitu_itu_pane

0xd98b,	// (0x0003c42c) cell_vitu_function_pane_ParamLimits

0xd98b,	// (0x0003c42c) cell_vitu_function_pane

0xed86,	// (0x0003d827) bg_popup_sub_pane_cp08_ParamLimits

0xed86,	// (0x0003d827) bg_popup_sub_pane_cp08

0xed72,	// (0x0003d813) field_vitu_entry_pane_t1_ParamLimits

0xed72,	// (0x0003d813) field_vitu_entry_pane_t1

0x2213,	// (0x00030cb4) field_vitu_entry_pane_t2_ParamLimits

0x2213,	// (0x00030cb4) field_vitu_entry_pane_t2

0x0001,

0xf7ac,	// (0x0003e24d) field_vitu_entry_pane_t_ParamLimits

0xf7ac,	// (0x0003e24d) field_vitu_entry_pane_t

0x1a65,	// (0x00030506) bg_button_pane_cp05_ParamLimits

0x1a65,	// (0x00030506) bg_button_pane_cp05

0x2230,	// (0x00030cd1) cell_vitu_itu_pane_g1

0xf018,	// (0x0003dab9) cell_vitu_itu_pane_t1_ParamLimits

0xf018,	// (0x0003dab9) cell_vitu_itu_pane_t1

0xf018,	// (0x0003dab9) cell_vitu_itu_pane_t2_ParamLimits

0xf018,	// (0x0003dab9) cell_vitu_itu_pane_t2

0x0002,

0xf7b1,	// (0x0003e252) cell_vitu_itu_pane_t_ParamLimits

0xf7b1,	// (0x0003e252) cell_vitu_itu_pane_t

0xd981,	// (0x0003c422) bg_button_pane_cp07

0xe343,	// (0x0003cde4) cell_vitu_function_pane_g1

0x6846,	// (0x000352e7) main_calc_pane_g1

0x64ff,	// (0x00034fa0) aid_visual_content_pane

0xd981,	// (0x0003c422) main_vradio_pane

0xe08d,	// (0x0003cb2e) main_vradio_pane_g1_ParamLimits

0xe08d,	// (0x0003cb2e) main_vradio_pane_g1

0xe08d,	// (0x0003cb2e) main_vradio_pane_g2_ParamLimits

0xe08d,	// (0x0003cb2e) main_vradio_pane_g2

0x0001,

0xf7b8,	// (0x0003e259) main_vradio_pane_g_ParamLimits

0xf7b8,	// (0x0003e259) main_vradio_pane_g

0xe315,	// (0x0003cdb6) main_vradio_pane_t1_ParamLimits

0xe315,	// (0x0003cdb6) main_vradio_pane_t1

0xe315,	// (0x0003cdb6) main_vradio_pane_t2_ParamLimits

0xe315,	// (0x0003cdb6) main_vradio_pane_t2

0xe315,	// (0x0003cdb6) main_vradio_pane_t3_ParamLimits

0xe315,	// (0x0003cdb6) main_vradio_pane_t3

0x0002,

0xf7bd,	// (0x0003e25e) main_vradio_pane_t_ParamLimits

0xf7bd,	// (0x0003e25e) main_vradio_pane_t

0xd98b,	// (0x0003c42c) vradio_rocker_control_pane_ParamLimits

0xd98b,	// (0x0003c42c) vradio_rocker_control_pane

0xd98b,	// (0x0003c42c) vradio_station_info_pane_ParamLimits

0xd98b,	// (0x0003c42c) vradio_station_info_pane

0xed86,	// (0x0003d827) vradio_frequency_info_pane_ParamLimits

0xed86,	// (0x0003d827) vradio_frequency_info_pane

0xe343,	// (0x0003cde4) vradio_station_info_pane_g1

0xf018,	// (0x0003dab9) vradio_station_info_pane_t1_ParamLimits

0xf018,	// (0x0003dab9) vradio_station_info_pane_t1

0xe315,	// (0x0003cdb6) vradio_station_info_pane_t2_ParamLimits

0xe315,	// (0x0003cdb6) vradio_station_info_pane_t2

0x0001,

0xf7c4,	// (0x0003e265) vradio_station_info_pane_t_ParamLimits

0xf7c4,	// (0x0003e265) vradio_station_info_pane_t

0xd981,	// (0x0003c422) vradio_tuning_pane

0x9d8f,	// (0x00038830) vradio_rocker_control_pane_g1

0x224c,	// (0x00030ced) vradio_rocker_control_pane_g2

0x9d97,	// (0x00038838) vradio_rocker_control_pane_g3

0x9d9f,	// (0x00038840) vradio_rocker_control_pane_g4

0x9da7,	// (0x00038848) vradio_rocker_control_pane_g5

0x0004,

0xf7c9,	// (0x0003e26a) vradio_rocker_control_pane_g

0xe343,	// (0x0003cde4) vradio_frequency_info_pane_g1

0xed72,	// (0x0003d813) vradio_frequency_info_pane_t1_ParamLimits

0xed72,	// (0x0003d813) vradio_frequency_info_pane_t1

0x9daf,	// (0x00038850) vradio_tuning_pane_g1

0x9db8,	// (0x00038859) vradio_tuning_pane_t1

0x653e,	// (0x00034fdf) area_side_right_pane_ParamLimits

0x653e,	// (0x00034fdf) area_side_right_pane

0x1700,	// (0x000301a1) status_small_pane_g1

0x1708,	// (0x000301a9) status_small_pane_g2

0x1711,	// (0x000301b2) status_small_pane_g3

0x171a,	// (0x000301bb) status_small_pane_g4

0x0003,

0xf590,	// (0x0003e031) status_small_pane_g

0x1723,	// (0x000301c4) status_small_pane_t1

0xd981,	// (0x0003c422) main_video3_pane

0x2254,	// (0x00030cf5) cams_zoom_vslider_pane

0x225c,	// (0x00030cfd) image3_wide_pane_ParamLimits

0x225c,	// (0x00030cfd) image3_wide_pane

0x2276,	// (0x00030d17) image3_wide_small_pane

0x2280,	// (0x00030d21) main_video3_pane_g1_ParamLimits

0x2280,	// (0x00030d21) main_video3_pane_g1

0x229c,	// (0x00030d3d) main_video3_pane_g2_ParamLimits

0x229c,	// (0x00030d3d) main_video3_pane_g2

0x0001,

0xf7d4,	// (0x0003e275) main_video3_pane_g_ParamLimits

0xf7d4,	// (0x0003e275) main_video3_pane_g

0x22b8,	// (0x00030d59) main_video3_pane_t1_ParamLimits

0x22b8,	// (0x00030d59) main_video3_pane_t1

0x22e3,	// (0x00030d84) main_video3_pane_t2_ParamLimits

0x22e3,	// (0x00030d84) main_video3_pane_t2

0x230e,	// (0x00030daf) main_video3_pane_t3_ParamLimits

0x230e,	// (0x00030daf) main_video3_pane_t3

0x0002,

0xf7d9,	// (0x0003e27a) main_video3_pane_t_ParamLimits

0xf7d9,	// (0x0003e27a) main_video3_pane_t

0x2339,	// (0x00030dda) cams_zoom_vslider_pane_g1

0x2342,	// (0x00030de3) cams_zoom_vslider_pane_g2

0x0001,

0xf7e0,	// (0x0003e281) cams_zoom_vslider_pane_g

0x234a,	// (0x00030deb) small_slider_vertical_pane

0xe343,	// (0x0003cde4) small_slider_vertical_pane_g1

0xe343,	// (0x0003cde4) small_slider_vertical_pane_g2

0x2352,	// (0x00030df3) small_slider_vertical_pane_g3

0x0002,

0xf7e5,	// (0x0003e286) small_slider_vertical_pane_g

0xd981,	// (0x0003c422) main_hwr_training_pane

0x235b,	// (0x00030dfc) hwr_training_instruct_pane_ParamLimits

0x235b,	// (0x00030dfc) hwr_training_instruct_pane

0x9dc7,	// (0x00038868) hwr_training_navi_pane_ParamLimits

0x9dc7,	// (0x00038868) hwr_training_navi_pane

0x9ddb,	// (0x0003887c) hwr_training_write_pane_ParamLimits

0x9ddb,	// (0x0003887c) hwr_training_write_pane

0xd981,	// (0x0003c422) bg_frame_shadow_pane

0x238a,	// (0x00030e2b) hwr_training_write_pane_g1

0x2392,	// (0x00030e33) hwr_training_write_pane_g2

0x239a,	// (0x00030e3b) hwr_training_write_pane_g3

0x23a2,	// (0x00030e43) hwr_training_write_pane_g4

0x23aa,	// (0x00030e4b) hwr_training_write_pane_g5

0x23b2,	// (0x00030e53) hwr_training_write_pane_g6

0x23ba,	// (0x00030e5b) hwr_training_write_pane_g7

0x0006,

0xf7ec,	// (0x0003e28d) hwr_training_write_pane_g

0x9e09,	// (0x000388aa) hwr_training_navi_pane_g1_ParamLimits

0x9e09,	// (0x000388aa) hwr_training_navi_pane_g1

0x9e1b,	// (0x000388bc) hwr_training_navi_pane_g2_ParamLimits

0x9e1b,	// (0x000388bc) hwr_training_navi_pane_g2

0x9e2d,	// (0x000388ce) hwr_training_navi_pane_g3_ParamLimits

0x9e2d,	// (0x000388ce) hwr_training_navi_pane_g3

0x9e3d,	// (0x000388de) hwr_training_navi_pane_g4_ParamLimits

0x9e3d,	// (0x000388de) hwr_training_navi_pane_g4

0x0004,

0xf7fb,	// (0x0003e29c) hwr_training_navi_pane_g_ParamLimits

0xf7fb,	// (0x0003e29c) hwr_training_navi_pane_g

0x9e57,	// (0x000388f8) hwr_training_navi_pane_t1

0x9e65,	// (0x00038906) list_single_hwr_training_instruct_pane_ParamLimits

0x9e65,	// (0x00038906) list_single_hwr_training_instruct_pane

0x2411,	// (0x00030eb2) list_single_hwr_training_instruct_pane_t1

0x1bb7,	// (0x00030658) bg_frame_shadow_pane_g1

0x2420,	// (0x00030ec1) bg_frame_shadow_pane_g2

0x2428,	// (0x00030ec9) bg_frame_shadow_pane_g3

0x2430,	// (0x00030ed1) bg_frame_shadow_pane_g4

0x2438,	// (0x00030ed9) bg_frame_shadow_pane_g5

0x2440,	// (0x00030ee1) bg_frame_shadow_pane_g6

0x2448,	// (0x00030ee9) bg_frame_shadow_pane_g7

0xe1b6,	// (0x0003cc57) bg_frame_shadow_pane_g8

0x0007,

0xf806,	// (0x0003e2a7) bg_frame_shadow_pane_g

0xd981,	// (0x0003c422) main_video_tele_dialer_pane

0x9e7d,	// (0x0003891e) aid_size_cell_video_keypad_ParamLimits

0x9e7d,	// (0x0003891e) aid_size_cell_video_keypad

0x9e8d,	// (0x0003892e) grid_video_dialer_keypad_pane_ParamLimits

0x9e8d,	// (0x0003892e) grid_video_dialer_keypad_pane

0x9ebd,	// (0x0003895e) video_down_pane_cp_ParamLimits

0x9ebd,	// (0x0003895e) video_down_pane_cp

0x9ee5,	// (0x00038986) cell_video_dialer_keypad_pane_ParamLimits

0x9ee5,	// (0x00038986) cell_video_dialer_keypad_pane

0x2450,	// (0x00030ef1) bg_button_pane_cp08_ParamLimits

0x2450,	// (0x00030ef1) bg_button_pane_cp08

0x9efa,	// (0x0003899b) cell_video_dialer_keypad_pane_g1_ParamLimits

0x9efa,	// (0x0003899b) cell_video_dialer_keypad_pane_g1

0x9907,	// (0x000383a8) mup3_rocker2_pane_ParamLimits

0x9907,	// (0x000383a8) mup3_rocker2_pane

0xe343,	// (0x0003cde4) mup3_rocker2_pane_g1

0x8e79,	// (0x0003791a) main_dialer2_pane

0xd981,	// (0x0003c422) main_mp4_pane

0x9f4d,	// (0x000389ee) main_mp4_pane_g1_ParamLimits

0x9f4d,	// (0x000389ee) main_mp4_pane_g1

0x9f5b,	// (0x000389fc) main_mp4_pane_g2_ParamLimits

0x9f5b,	// (0x000389fc) main_mp4_pane_g2

0x9f69,	// (0x00038a0a) main_mp4_pane_g3_ParamLimits

0x9f69,	// (0x00038a0a) main_mp4_pane_g3

0x9f9e,	// (0x00038a3f) main_mp4_pane_g4_ParamLimits

0x9f9e,	// (0x00038a3f) main_mp4_pane_g4

0x9fcc,	// (0x00038a6d) main_mp4_pane_g5_ParamLimits

0x9fcc,	// (0x00038a6d) main_mp4_pane_g5

0x0007,

0xf826,	// (0x0003e2c7) main_mp4_pane_g_ParamLimits

0xf826,	// (0x0003e2c7) main_mp4_pane_g

0xa040,	// (0x00038ae1) main_mp4_pane_t1_ParamLimits

0xa040,	// (0x00038ae1) main_mp4_pane_t1

0xa098,	// (0x00038b39) main_mp4_pane_t2_ParamLimits

0xa098,	// (0x00038b39) main_mp4_pane_t2

0x25d2,	// (0x00031073) main_mp4_pane_t3_ParamLimits

0x25d2,	// (0x00031073) main_mp4_pane_t3

0xa0ea,	// (0x00038b8b) main_mp4_pane_t4_ParamLimits

0xa0ea,	// (0x00038b8b) main_mp4_pane_t4

0x0003,

0xf837,	// (0x0003e2d8) main_mp4_pane_t_ParamLimits

0xf837,	// (0x0003e2d8) main_mp4_pane_t

0xa12a,	// (0x00038bcb) mp4_progress_pane_ParamLimits

0xa12a,	// (0x00038bcb) mp4_progress_pane

0xa16e,	// (0x00038c0f) mp4_rocker_pane_ParamLimits

0xa16e,	// (0x00038c0f) mp4_rocker_pane

0x26a2,	// (0x00031143) mp4_progress_pane_t1

0x26b9,	// (0x0003115a) mp4_progress_pane_t2

0x0001,

0xf840,	// (0x0003e2e1) mp4_progress_pane_t

0x26d0,	// (0x00031171) mup_progress_pane_cp04

0xe343,	// (0x0003cde4) mp4_rocker_pane_g1

0xa18c,	// (0x00038c2d) aid_cell_size_keypad2_ParamLimits

0xa18c,	// (0x00038c2d) aid_cell_size_keypad2

0xa19c,	// (0x00038c3d) dialer2_ne_pane_ParamLimits

0xa19c,	// (0x00038c3d) dialer2_ne_pane

0xa1a8,	// (0x00038c49) grid_dialer2_keypad_pane_ParamLimits

0xa1a8,	// (0x00038c49) grid_dialer2_keypad_pane

0x3158,	// (0x00031bf9) bg_popup_call_pane_cp07_ParamLimits

0x3158,	// (0x00031bf9) bg_popup_call_pane_cp07

0xa1b4,	// (0x00038c55) dialer2_ne_pane_t1_ParamLimits

0xa1b4,	// (0x00038c55) dialer2_ne_pane_t1

0xa1d9,	// (0x00038c7a) cell_dialer2_keypad_pane_ParamLimits

0xa1d9,	// (0x00038c7a) cell_dialer2_keypad_pane

0x26ee,	// (0x0003118f) bg_button_pane_pane_cp04_ParamLimits

0x26ee,	// (0x0003118f) bg_button_pane_pane_cp04

0xa1ee,	// (0x00038c8f) cell_dialer2_keypad_pane_g1_ParamLimits

0xa1ee,	// (0x00038c8f) cell_dialer2_keypad_pane_g1

0x72a7,	// (0x00035d48) aid_placing_vt_set_content_ParamLimits

0x72a7,	// (0x00035d48) aid_placing_vt_set_content

0x72cd,	// (0x00035d6e) aid_placing_vt_set_title_ParamLimits

0x72cd,	// (0x00035d6e) aid_placing_vt_set_title

0xd981,	// (0x0003c422) main_image3_pane

0xa262,	// (0x00038d03) area_side_right_pane_cp01_ParamLimits

0xa262,	// (0x00038d03) area_side_right_pane_cp01

0xe09b,	// (0x0003cb3c) main_image3_pane_g1_ParamLimits

0xe09b,	// (0x0003cb3c) main_image3_pane_g1

0xa28f,	// (0x00038d30) main_image3_pane_g2_ParamLimits

0xa28f,	// (0x00038d30) main_image3_pane_g2

0xa2a6,	// (0x00038d47) main_image3_pane_g3_ParamLimits

0xa2a6,	// (0x00038d47) main_image3_pane_g3

0xa2bd,	// (0x00038d5e) main_image3_pane_g4_ParamLimits

0xa2bd,	// (0x00038d5e) main_image3_pane_g4

0x0003,

0xf84f,	// (0x0003e2f0) main_image3_pane_g_ParamLimits

0xf84f,	// (0x0003e2f0) main_image3_pane_g

0xa2d4,	// (0x00038d75) main_image3_pane_t1_ParamLimits

0xa2d4,	// (0x00038d75) main_image3_pane_t1

0xa2f9,	// (0x00038d9a) main_image3_pane_t2_ParamLimits

0xa2f9,	// (0x00038d9a) main_image3_pane_t2

0xa318,	// (0x00038db9) main_image3_pane_t3_ParamLimits

0xa318,	// (0x00038db9) main_image3_pane_t3

0x0003,

0xf858,	// (0x0003e2f9) main_image3_pane_t_ParamLimits

0xf858,	// (0x0003e2f9) main_image3_pane_t

0xd98b,	// (0x0003c42c) grid_sctrl_middle_pane_cp01_ParamLimits

0xd98b,	// (0x0003c42c) grid_sctrl_middle_pane_cp01

0xa373,	// (0x00038e14) cell_sctrl_middle_pane_cp01_ParamLimits

0xa373,	// (0x00038e14) cell_sctrl_middle_pane_cp01

0xa384,	// (0x00038e25) cell_sctrl_middle_pane_cp01_g1_ParamLimits

0xa384,	// (0x00038e25) cell_sctrl_middle_pane_cp01_g1

0xd981,	// (0x0003c422) main_call4_pane

0xa391,	// (0x00038e32) aid_size_button_call4_ParamLimits

0xa391,	// (0x00038e32) aid_size_button_call4

0xa3bb,	// (0x00038e5c) call4_windows_pane_ParamLimits

0xa3bb,	// (0x00038e5c) call4_windows_pane

0xa3cf,	// (0x00038e70) grid_call4_button_pane_ParamLimits

0xa3cf,	// (0x00038e70) grid_call4_button_pane

0x2744,	// (0x000311e5) call4_windows_conf_pane

0xa3f1,	// (0x00038e92) popup_call4_audio_first_window_ParamLimits

0xa3f1,	// (0x00038e92) popup_call4_audio_first_window

0x2777,	// (0x00031218) popup_call4_audio_second_window_ParamLimits

0x2777,	// (0x00031218) popup_call4_audio_second_window

0x2789,	// (0x0003122a) popup_call4_audio_wait_window_ParamLimits

0x2789,	// (0x0003122a) popup_call4_audio_wait_window

0xa411,	// (0x00038eb2) cell_call4_button_pane_ParamLimits

0xa411,	// (0x00038eb2) cell_call4_button_pane

0xe160,	// (0x0003cc01) bg_button_pane_cp09_ParamLimits

0xe160,	// (0x0003cc01) bg_button_pane_cp09

0xa434,	// (0x00038ed5) cell_call4_button_pane_g1_ParamLimits

0xa434,	// (0x00038ed5) cell_call4_button_pane_g1

0xa441,	// (0x00038ee2) cell_call4_button_pane_t1_ParamLimits

0xa441,	// (0x00038ee2) cell_call4_button_pane_t1

0x27cf,	// (0x00031270) popup_call4_audio_conf_window_ParamLimits

0x27cf,	// (0x00031270) popup_call4_audio_conf_window

0x9938,	// (0x000383d9) mup3_progress_pane_t1_ParamLimits

0x9956,	// (0x000383f7) mup3_progress_pane_t2_ParamLimits

0x1f61,	// (0x00030a02) mup3_progress_pane_t3_ParamLimits

0xf728,	// (0x0003e1c9) mup3_progress_pane_t_ParamLimits

0x1f7e,	// (0x00030a1f) mup_progress_pane_cp03_ParamLimits

0x9d79,	// (0x0003881a) mup3_control_keys_pane_g4_copy1

0xa158,	// (0x00038bf9) mp4_rocker2_pane_ParamLimits

0xa158,	// (0x00038bf9) mp4_rocker2_pane

0x27eb,	// (0x0003128c) mp4_rocker2_pane_g1

0x27e3,	// (0x00031284) mp4_rocker2_pane_g2

0xa485,	// (0x00038f26) mp4_rocker2_pane_g3

0xa48d,	// (0x00038f2e) mp4_rocker2_pane_g4

0xa495,	// (0x00038f36) mp4_rocker2_pane_g5

0x0004,

0xf861,	// (0x0003e302) mp4_rocker2_pane_g

0xd981,	// (0x0003c422) main_camera4_pane

0xd981,	// (0x0003c422) main_video4_pane

0x9e99,	// (0x0003893a) main_video_tele_dialer_pane_t1_ParamLimits

0x9e99,	// (0x0003893a) main_video_tele_dialer_pane_t1

0x9eab,	// (0x0003894c) main_video_tele_dialer_pane_t2_ParamLimits

0x9eab,	// (0x0003894c) main_video_tele_dialer_pane_t2

0x0001,

0xf817,	// (0x0003e2b8) main_video_tele_dialer_pane_t_ParamLimits

0xf817,	// (0x0003e2b8) main_video_tele_dialer_pane_t

0xa4b3,	// (0x00038f54) cam4_autofocus_pane_ParamLimits

0xa4b3,	// (0x00038f54) cam4_autofocus_pane

0xa4c9,	// (0x00038f6a) cam4_image_uncrop_pane_ParamLimits

0xa4c9,	// (0x00038f6a) cam4_image_uncrop_pane

0xa4de,	// (0x00038f7f) cam4_indicators_pane_ParamLimits

0xa4de,	// (0x00038f7f) cam4_indicators_pane

0xa4f8,	// (0x00038f99) main_camera4_pane_g1_ParamLimits

0xa4f8,	// (0x00038f99) main_camera4_pane_g1

0xa504,	// (0x00038fa5) main_camera4_pane_g2_ParamLimits

0xa504,	// (0x00038fa5) main_camera4_pane_g2

0xa504,	// (0x00038fa5) main_camera4_pane_g3_ParamLimits

0xa504,	// (0x00038fa5) main_camera4_pane_g3

0xa510,	// (0x00038fb1) main_camera4_pane_g4_ParamLimits

0xa510,	// (0x00038fb1) main_camera4_pane_g4

0xa51c,	// (0x00038fbd) main_camera4_pane_g5_ParamLimits

0xa51c,	// (0x00038fbd) main_camera4_pane_g5

0x0005,

0xf86c,	// (0x0003e30d) main_camera4_pane_g_ParamLimits

0xf86c,	// (0x0003e30d) main_camera4_pane_g

0xa536,	// (0x00038fd7) main_camera4_pane_t1_ParamLimits

0xa536,	// (0x00038fd7) main_camera4_pane_t1

0xe07f,	// (0x0003cb20) bg_tb_trans_pane_cp06

0xa586,	// (0x00039027) cam4_indicators_pane_g1

0xa596,	// (0x00039037) cam4_indicators_pane_g2

0x0002,

0xf887,	// (0x0003e328) cam4_indicators_pane_g

0xa5b6,	// (0x00039057) cam4_indicators_pane_t1

0xa5de,	// (0x0003907f) main_video4_pane_g1_ParamLimits

0xa5de,	// (0x0003907f) main_video4_pane_g1

0xa504,	// (0x00038fa5) main_video4_pane_g2_ParamLimits

0xa504,	// (0x00038fa5) main_video4_pane_g2

0xa504,	// (0x00038fa5) main_video4_pane_g3_ParamLimits

0xa504,	// (0x00038fa5) main_video4_pane_g3

0xa510,	// (0x00038fb1) main_video4_pane_g4_ParamLimits

0xa510,	// (0x00038fb1) main_video4_pane_g4

0x0004,

0xf88e,	// (0x0003e32f) main_video4_pane_g_ParamLimits

0xf88e,	// (0x0003e32f) main_video4_pane_g

0xa5f2,	// (0x00039093) vid4_indicators_pane_ParamLimits

0xa5f2,	// (0x00039093) vid4_indicators_pane

0xa610,	// (0x000390b1) video4_image_uncrop_cif_pane_ParamLimits

0xa610,	// (0x000390b1) video4_image_uncrop_cif_pane

0xa61d,	// (0x000390be) video4_image_uncrop_nhd_pane_ParamLimits

0xa61d,	// (0x000390be) video4_image_uncrop_nhd_pane

0xa4c9,	// (0x00038f6a) video4_image_uncrop_vga_pane_ParamLimits

0xa4c9,	// (0x00038f6a) video4_image_uncrop_vga_pane

0xed86,	// (0x0003d827) bg_tb_trans_pane_cp07

0xa586,	// (0x00039027) vid4_indicators_pane_g1

0xa62a,	// (0x000390cb) vid4_indicators_pane_g2

0xa63a,	// (0x000390db) vid4_indicators_pane_g3

0x0004,

0xf899,	// (0x0003e33a) vid4_indicators_pane_g

0xa667,	// (0x00039108) vid4_indicators_pane_t1

0xa681,	// (0x00039122) cam4_autofocus_pane_g1

0xa689,	// (0x0003912a) cam4_autofocus_pane_g2

0xa691,	// (0x00039132) cam4_autofocus_pane_g3

0x0002,

0xf8a4,	// (0x0003e345) cam4_autofocus_pane_g

0xa699,	// (0x0003913a) cam4_autofocus_pane_g3_copy1

0x9ec9,	// (0x0003896a) video_down_pane_cp_t1

0x9ed7,	// (0x00038978) video_down_pane_cp_t2

0x0001,

0xf81c,	// (0x0003e2bd) video_down_pane_cp_t

0xd98b,	// (0x0003c42c) popup_vitu2_window_ParamLimits

0xd98b,	// (0x0003c42c) popup_vitu2_window

0xa6a1,	// (0x00039142) aid_size_cell2_itu2_ParamLimits

0xa6a1,	// (0x00039142) aid_size_cell2_itu2

0xa6c3,	// (0x00039164) aid_size_cell_itu2_ParamLimits

0xa6c3,	// (0x00039164) aid_size_cell_itu2

0x3158,	// (0x00031bf9) bg_popup_window_pane_cp09_ParamLimits

0x3158,	// (0x00031bf9) bg_popup_window_pane_cp09

0xa701,	// (0x000391a2) field_vitu2_entry_pane_ParamLimits

0xa701,	// (0x000391a2) field_vitu2_entry_pane

0xa717,	// (0x000391b8) grid_vitu2_function_pane_ParamLimits

0xa717,	// (0x000391b8) grid_vitu2_function_pane

0xa749,	// (0x000391ea) grid_vitu2_itu_pane_ParamLimits

0xa749,	// (0x000391ea) grid_vitu2_itu_pane

0xa7a5,	// (0x00039246) cell_vitu2_itu_pane_ParamLimits

0xa7a5,	// (0x00039246) cell_vitu2_itu_pane

0xa7bd,	// (0x0003925e) cell_vitu2_function_pane_ParamLimits

0xa7bd,	// (0x0003925e) cell_vitu2_function_pane

0x28f6,	// (0x00031397) bg_popup_call_pane_cp08_ParamLimits

0x28f6,	// (0x00031397) bg_popup_call_pane_cp08

0x290d,	// (0x000313ae) field_vitu2_entry_pane_g1

0x2919,	// (0x000313ba) field_vitu2_entry_pane_g2

0x0002,

0xf8ab,	// (0x0003e34c) field_vitu2_entry_pane_g

0x5946,	// (0x000343e7) field_vitu2_entry_pane_t1_ParamLimits

0x5946,	// (0x000343e7) field_vitu2_entry_pane_t1

0x5977,	// (0x00034418) field_vitu2_entry_pane_t2_ParamLimits

0x5977,	// (0x00034418) field_vitu2_entry_pane_t2

0x0001,

0xf8b2,	// (0x0003e353) field_vitu2_entry_pane_t_ParamLimits

0xf8b2,	// (0x0003e353) field_vitu2_entry_pane_t

0xa7fc,	// (0x0003929d) bg_button_pane_cp010_ParamLimits

0xa7fc,	// (0x0003929d) bg_button_pane_cp010

0xa80a,	// (0x000392ab) cell_vitu2_itu_pane_g1

0xa830,	// (0x000392d1) cell_vitu2_itu_pane_t1_ParamLimits

0xa830,	// (0x000392d1) cell_vitu2_itu_pane_t1

0x5994,	// (0x00034435) cell_vitu2_itu_pane_t2_ParamLimits

0x5994,	// (0x00034435) cell_vitu2_itu_pane_t2

0x0002,

0xf8bc,	// (0x0003e35d) cell_vitu2_itu_pane_t_ParamLimits

0xf8bc,	// (0x0003e35d) cell_vitu2_itu_pane_t

0xed86,	// (0x0003d827) bg_button_pane_cp011

0xa87c,	// (0x0003931d) cell_vitu2_function_pane_g1

0xd981,	// (0x0003c422) main_myfav_hc_pane

0xa358,	// (0x00038df9) popup_image3_note_pane_ParamLimits

0xa358,	// (0x00038df9) popup_image3_note_pane

0xa364,	// (0x00038e05) popup_image3_tool_bar_pane_ParamLimits

0xa364,	// (0x00038e05) popup_image3_tool_bar_pane

0x5a0a,	// (0x000344ab) cell_vitu2_itu_pane_t3_ParamLimits

0x5a0a,	// (0x000344ab) cell_vitu2_itu_pane_t3

0xd981,	// (0x0003c422) bg_popup_trans_pane

0x294a,	// (0x000313eb) grid_image3_tool_bar_pane

0x2954,	// (0x000313f5) bg_popup_trans_pane_g1

0xe561,	// (0x0003d002) bg_popup_trans_pane_g2

0x295c,	// (0x000313fd) bg_popup_trans_pane_g3

0x2964,	// (0x00031405) bg_popup_trans_pane_g4

0x296c,	// (0x0003140d) bg_popup_trans_pane_g5

0x2974,	// (0x00031415) bg_popup_trans_pane_g6

0x297c,	// (0x0003141d) bg_popup_trans_pane_g7

0x2984,	// (0x00031425) bg_popup_trans_pane_g8

0xe541,	// (0x0003cfe2) bg_popup_trans_pane_g9

0x0008,

0xf8c3,	// (0x0003e364) bg_popup_trans_pane_g

0x298c,	// (0x0003142d) cell_image3_tool_bar_pane_ParamLimits

0x298c,	// (0x0003142d) cell_image3_tool_bar_pane

0xe343,	// (0x0003cde4) cell_image3_tool_bar_pane_g1

0xd981,	// (0x0003c422) bg_popup_trans_pane_cp1

0x29a0,	// (0x00031441) popup_image3_note_pane_t1

0x29ae,	// (0x0003144f) popup_image3_note_pane_t2

0x29bc,	// (0x0003145d) popup_image3_note_pane_t3

0x0002,

0xf8d6,	// (0x0003e377) popup_image3_note_pane_t

0x29ca,	// (0x0003146b) popup_image3_note_pane_t3_copy1

0xa890,	// (0x00039331) bg_myfav_hc_instruction_pane_ParamLimits

0xa890,	// (0x00039331) bg_myfav_hc_instruction_pane

0xa8a2,	// (0x00039343) cell_myfav_contact_pane_ParamLimits

0xa8a2,	// (0x00039343) cell_myfav_contact_pane

0xa8bc,	// (0x0003935d) cell_myfav_contact_pane_cp1_ParamLimits

0xa8bc,	// (0x0003935d) cell_myfav_contact_pane_cp1

0xa8d2,	// (0x00039373) cell_myfav_contact_pane_cp2_ParamLimits

0xa8d2,	// (0x00039373) cell_myfav_contact_pane_cp2

0xa8e8,	// (0x00039389) cell_myfav_contact_pane_cp3_ParamLimits

0xa8e8,	// (0x00039389) cell_myfav_contact_pane_cp3

0xa8fd,	// (0x0003939e) cell_myfav_contact_pane_cp4_ParamLimits

0xa8fd,	// (0x0003939e) cell_myfav_contact_pane_cp4

0xa911,	// (0x000393b2) cell_myfav_contact_pane_cp5_ParamLimits

0xa911,	// (0x000393b2) cell_myfav_contact_pane_cp5

0xa925,	// (0x000393c6) cell_myfav_contact_pane_cp6_ParamLimits

0xa925,	// (0x000393c6) cell_myfav_contact_pane_cp6

0xa939,	// (0x000393da) cell_myfav_contact_pane_cp7_ParamLimits

0xa939,	// (0x000393da) cell_myfav_contact_pane_cp7

0x29d8,	// (0x00031479) listscroll_gen_pane_cp05

0xa951,	// (0x000393f2) main_myfav_hc_pane_g1_ParamLimits

0xa951,	// (0x000393f2) main_myfav_hc_pane_g1

0xa967,	// (0x00039408) main_myfav_hc_pane_g2_ParamLimits

0xa967,	// (0x00039408) main_myfav_hc_pane_g2

0x0002,

0xf8dd,	// (0x0003e37e) main_myfav_hc_pane_g_ParamLimits

0xf8dd,	// (0x0003e37e) main_myfav_hc_pane_g

0xa991,	// (0x00039432) main_myfav_hc_pane_t1_ParamLimits

0xa991,	// (0x00039432) main_myfav_hc_pane_t1

0x29e1,	// (0x00031482) main_myfav_hc_pane_t2_ParamLimits

0x29e1,	// (0x00031482) main_myfav_hc_pane_t2

0x29f3,	// (0x00031494) main_myfav_hc_pane_t3_ParamLimits

0x29f3,	// (0x00031494) main_myfav_hc_pane_t3

0xa9a6,	// (0x00039447) main_myfav_hc_pane_t4_ParamLimits

0xa9a6,	// (0x00039447) main_myfav_hc_pane_t4

0x0004,

0xf8e4,	// (0x0003e385) main_myfav_hc_pane_t_ParamLimits

0xf8e4,	// (0x0003e385) main_myfav_hc_pane_t

0xe343,	// (0x0003cde4) bg_myfav_hc_instruction_pane_g1

0x2a05,	// (0x000314a6) cell_myfav_contact_pane_g1_ParamLimits

0x2a05,	// (0x000314a6) cell_myfav_contact_pane_g1

0x2a05,	// (0x000314a6) cell_myfav_contact_pane_g2_ParamLimits

0x2a05,	// (0x000314a6) cell_myfav_contact_pane_g2

0x2a11,	// (0x000314b2) cell_myfav_contact_pane_g3_ParamLimits

0x2a11,	// (0x000314b2) cell_myfav_contact_pane_g3

0xe08d,	// (0x0003cb2e) cell_myfav_contact_pane_g4_ParamLimits

0xe08d,	// (0x0003cb2e) cell_myfav_contact_pane_g4

0x2a1e,	// (0x000314bf) cell_myfav_contact_pane_g5_ParamLimits

0x2a1e,	// (0x000314bf) cell_myfav_contact_pane_g5

0x0004,

0xf8ef,	// (0x0003e390) cell_myfav_contact_pane_g_ParamLimits

0xf8ef,	// (0x0003e390) cell_myfav_contact_pane_g

0xa97d,	// (0x0003941e) main_myfav_hc_pane_g3_ParamLimits

0xa97d,	// (0x0003941e) main_myfav_hc_pane_g3

0x664f,	// (0x000350f0) popup_adpt_find_window

0xa9ca,	// (0x0003946b) afind_page_pane_ParamLimits

0xa9ca,	// (0x0003946b) afind_page_pane

0xa9d7,	// (0x00039478) aid_size_cell_afind_ParamLimits

0xa9d7,	// (0x00039478) aid_size_cell_afind

0xa9f1,	// (0x00039492) bg_popup_sub_pane_cp09_ParamLimits

0xa9f1,	// (0x00039492) bg_popup_sub_pane_cp09

0xa9fe,	// (0x0003949f) find_pane_cp01_ParamLimits

0xa9fe,	// (0x0003949f) find_pane_cp01

0x2a2a,	// (0x000314cb) grid_afind_control_pane_ParamLimits

0x2a2a,	// (0x000314cb) grid_afind_control_pane

0xaa0b,	// (0x000394ac) grid_afind_pane_ParamLimits

0xaa0b,	// (0x000394ac) grid_afind_pane

0xaa21,	// (0x000394c2) cell_afind_pane_ParamLimits

0xaa21,	// (0x000394c2) cell_afind_pane

0xe343,	// (0x0003cde4) afind_page_pane_g1

0xaa57,	// (0x000394f8) afind_page_pane_g2

0xaa5f,	// (0x00039500) afind_page_pane_g3

0x0002,

0xf8fa,	// (0x0003e39b) afind_page_pane_g

0xaa67,	// (0x00039508) afind_page_pane_t1

0x2a50,	// (0x000314f1) cell_afind_grid_control_pane_ParamLimits

0x2a50,	// (0x000314f1) cell_afind_grid_control_pane

0x26ee,	// (0x0003118f) bg_button_pane_cp69_ParamLimits

0x26ee,	// (0x0003118f) bg_button_pane_cp69

0xaa75,	// (0x00039516) cell_afind_pane_g1_ParamLimits

0xaa75,	// (0x00039516) cell_afind_pane_g1

0xaa82,	// (0x00039523) cell_afind_pane_t1_ParamLimits

0xaa82,	// (0x00039523) cell_afind_pane_t1

0xe34d,	// (0x0003cdee) bg_button_pane_cp72

0x2a5f,	// (0x00031500) cell_afind_grid_control_pane_g1

0x8a6c,	// (0x0003750d) aid_image_placing_area_ParamLimits

0x8a6c,	// (0x0003750d) aid_image_placing_area

0xe07f,	// (0x0003cb20) field_vitu_entry_pane_g1_ParamLimits

0xe07f,	// (0x0003cb20) field_vitu_entry_pane_g1

0xe07f,	// (0x0003cb20) field_vitu_entry_pane_g2_ParamLimits

0xe07f,	// (0x0003cb20) field_vitu_entry_pane_g2

0x0001,

0xf7a7,	// (0x0003e248) field_vitu_entry_pane_g_ParamLimits

0xf7a7,	// (0x0003e248) field_vitu_entry_pane_g

0x2230,	// (0x00030cd1) cell_vitu_itu_pane_g1_ParamLimits

0x2213,	// (0x00030cb4) cell_vitu_itu_pane_t3_ParamLimits

0x2213,	// (0x00030cb4) cell_vitu_itu_pane_t3

0x26a2,	// (0x00031143) mp4_progress_pane_t1_ParamLimits

0x26b9,	// (0x0003115a) mp4_progress_pane_t2_ParamLimits

0xf840,	// (0x0003e2e1) mp4_progress_pane_t_ParamLimits

0x26d0,	// (0x00031171) mup_progress_pane_cp04_ParamLimits

0xa9b8,	// (0x00039459) main_myfav_hc_pane_t5_ParamLimits

0xa9b8,	// (0x00039459) main_myfav_hc_pane_t5

0x6507,	// (0x00034fa8) aid_zoom_text_primary

0x664f,	// (0x000350f0) popup_adpt_find_window_ParamLimits

0xed86,	// (0x0003d827) main_cam_set_pane

0xa4ec,	// (0x00038f8d) cam4_zoom_pane_ParamLimits

0xa4ec,	// (0x00038f8d) cam4_zoom_pane

0xaa94,	// (0x00039535) main_cam_set_pane_g1_ParamLimits

0xaa94,	// (0x00039535) main_cam_set_pane_g1

0xaaa2,	// (0x00039543) main_cam_set_pane_g2_ParamLimits

0xaaa2,	// (0x00039543) main_cam_set_pane_g2

0x0001,

0xf901,	// (0x0003e3a2) main_cam_set_pane_g_ParamLimits

0xf901,	// (0x0003e3a2) main_cam_set_pane_g

0xaaae,	// (0x0003954f) main_cam_set_pane_t1_ParamLimits

0xaaae,	// (0x0003954f) main_cam_set_pane_t1

0xaac0,	// (0x00039561) main_cset_listscroll_pane_ParamLimits

0xaac0,	// (0x00039561) main_cset_listscroll_pane

0xaaee,	// (0x0003958f) main_cset_slider_pane_ParamLimits

0xaaee,	// (0x0003958f) main_cset_slider_pane

0x2a70,	// (0x00031511) main_cset_list_pane_ParamLimits

0x2a70,	// (0x00031511) main_cset_list_pane

0x2a80,	// (0x00031521) scroll_pane_cp028

0xab0d,	// (0x000395ae) aid_area_touch_slider

0xab29,	// (0x000395ca) cset_slider_pane

0xab4c,	// (0x000395ed) main_cset_slider_pane_g1

0xab61,	// (0x00039602) main_cset_slider_pane_g2

0x0011,

0xf906,	// (0x0003e3a7) main_cset_slider_pane_g

0x2ab9,	// (0x0003155a) main_cset_slider_pane_t1

0xac1d,	// (0x000396be) main_cset_slider_pane_t2

0xac37,	// (0x000396d8) main_cset_slider_pane_t3

0xac51,	// (0x000396f2) main_cset_slider_pane_t4

0xac6b,	// (0x0003970c) main_cset_slider_pane_t5

0xac85,	// (0x00039726) main_cset_slider_pane_t6

0xac9a,	// (0x0003973b) main_cset_slider_pane_t7

0x000e,

0xf92b,	// (0x0003e3cc) main_cset_slider_pane_t

0xad9e,	// (0x0003983f) cset_list_set_pane_ParamLimits

0xad9e,	// (0x0003983f) cset_list_set_pane

0x2b53,	// (0x000315f4) aid_position_infowindow_above

0x2b5b,	// (0x000315fc) aid_position_infowindow_below

0x5a5c,	// (0x000344fd) cset_list_set_pane_g1_ParamLimits

0x5a5c,	// (0x000344fd) cset_list_set_pane_g1

0x5a68,	// (0x00034509) cset_list_set_pane_g3_ParamLimits

0x5a68,	// (0x00034509) cset_list_set_pane_g3

0x0001,

0xf94a,	// (0x0003e3eb) cset_list_set_pane_g_ParamLimits

0xf94a,	// (0x0003e3eb) cset_list_set_pane_g

0x5a77,	// (0x00034518) cset_list_set_pane_t1_ParamLimits

0x5a77,	// (0x00034518) cset_list_set_pane_t1

0xed86,	// (0x0003d827) list_highlight_pane_cp021_ParamLimits

0xed86,	// (0x0003d827) list_highlight_pane_cp021

0xedf6,	// (0x0003d897) cset_slider_pane_g1

0xee08,	// (0x0003d8a9) cset_slider_pane_g2

0xedff,	// (0x0003d8a0) cset_slider_pane_g3

0x0002,

0xf94f,	// (0x0003e3f0) cset_slider_pane_g

0xadae,	// (0x0003984f) aid_area_touch_cam4_zoom

0xadb6,	// (0x00039857) cam4_zoom_cont_pane

0xadbe,	// (0x0003985f) cam4_zoom_pane_g1

0xadc6,	// (0x00039867) cam4_zoom_pane_g2

0xadce,	// (0x0003986f) cam4_zoom_pane_g3

0x0002,

0xf956,	// (0x0003e3f7) cam4_zoom_pane_g

0x34c5,	// (0x00031f66) cam4_zoom_cont_pane_g1

0x34ce,	// (0x00031f6f) cam4_zoom_cont_pane_g2

0x34d7,	// (0x00031f78) cam4_zoom_cont_pane_g3

0x0002,

0xf95d,	// (0x0003e3fe) cam4_zoom_cont_pane_g

0xa3ab,	// (0x00038e4c) call4_image_pane_ParamLimits

0xa3ab,	// (0x00038e4c) call4_image_pane

0x2744,	// (0x000311e5) call4_windows_conf_pane_ParamLimits

0x2757,	// (0x000311f8) popup_call4_audio_in_window_ParamLimits

0x2757,	// (0x000311f8) popup_call4_audio_in_window

0xd981,	// (0x0003c422) bg_popup_call2_act_pane_cp02

0x27c7,	// (0x00031268) call4_list_conf_pane

0xe343,	// (0x0003cde4) call4_image_pane_g1

0xe343,	// (0x0003cde4) call4_image_pane_g2

0x0001,

0xf3c9,	// (0x0003de6a) call4_image_pane_g

0x2b9e,	// (0x0003163f) list_single_graphic_popup_conf4_pane_ParamLimits

0x2b9e,	// (0x0003163f) list_single_graphic_popup_conf4_pane

0xd981,	// (0x0003c422) list_highlight_pane_cp022

0x2bb1,	// (0x00031652) list_single_graphic_popup_conf4_pane_g1

0xea34,	// (0x0003d4d5) list_single_graphic_popup_conf4_pane_g2

0x0001,

0xf964,	// (0x0003e405) list_single_graphic_popup_conf4_pane_g

0x2bb9,	// (0x0003165a) list_single_graphic_popup_conf4_pane_t1

0x7411,	// (0x00035eb2) popup_vtel_slider_window_ParamLimits

0x7411,	// (0x00035eb2) popup_vtel_slider_window

0x26dc,	// (0x0003117d) dialer2_ne_pane_t2_ParamLimits

0x26dc,	// (0x0003117d) dialer2_ne_pane_t2

0x0001,

0xf845,	// (0x0003e2e6) dialer2_ne_pane_t_ParamLimits

0xf845,	// (0x0003e2e6) dialer2_ne_pane_t

0xed86,	// (0x0003d827) bg_popup_sub_pane_cp010_ParamLimits

0xed86,	// (0x0003d827) bg_popup_sub_pane_cp010

0xadd6,	// (0x00039877) popup_vtel_slider_window_g1_ParamLimits

0xadd6,	// (0x00039877) popup_vtel_slider_window_g1

0xade2,	// (0x00039883) popup_vtel_slider_window_g2_ParamLimits

0xade2,	// (0x00039883) popup_vtel_slider_window_g2

0x0003,

0xf969,	// (0x0003e40a) popup_vtel_slider_window_g_ParamLimits

0xf969,	// (0x0003e40a) popup_vtel_slider_window_g

0xae28,	// (0x000398c9) vtel_slider_pane_ParamLimits

0xae28,	// (0x000398c9) vtel_slider_pane

0xae37,	// (0x000398d8) vtel_slider_pane_g1_ParamLimits

0xae37,	// (0x000398d8) vtel_slider_pane_g1

0xae44,	// (0x000398e5) vtel_slider_pane_g2_ParamLimits

0xae44,	// (0x000398e5) vtel_slider_pane_g2

0xae51,	// (0x000398f2) vtel_slider_pane_g3_ParamLimits

0xae51,	// (0x000398f2) vtel_slider_pane_g3

0xae37,	// (0x000398d8) vtel_slider_pane_g4_ParamLimits

0xae37,	// (0x000398d8) vtel_slider_pane_g4

0xae5e,	// (0x000398ff) vtel_slider_pane_g5_ParamLimits

0xae5e,	// (0x000398ff) vtel_slider_pane_g5

0x0004,

0xf972,	// (0x0003e413) vtel_slider_pane_g_ParamLimits

0xf972,	// (0x0003e413) vtel_slider_pane_g

0xed86,	// (0x0003d827) main_gallery2_pane

0xa6e9,	// (0x0003918a) aid_size_row_itut2_dropdow_list_ParamLimits

0xa6e9,	// (0x0003918a) aid_size_row_itut2_dropdow_list

0xa72f,	// (0x000391d0) grid_vitu2_function_top_pane_ParamLimits

0xa72f,	// (0x000391d0) grid_vitu2_function_top_pane

0xa76d,	// (0x0003920e) popup_vitu2_dropdown_list_window_ParamLimits

0xa76d,	// (0x0003920e) popup_vitu2_dropdown_list_window

0xa789,	// (0x0003922a) popup_vitu2_match_list_window

0xae6b,	// (0x0003990c) cell_vitu2_function_top_pane_ParamLimits

0xae6b,	// (0x0003990c) cell_vitu2_function_top_pane

0xae83,	// (0x00039924) cell_vitu2_function_top_pane_cp01_ParamLimits

0xae83,	// (0x00039924) cell_vitu2_function_top_pane_cp01

0xae9f,	// (0x00039940) cell_vitu2_function_top_wide_pane_ParamLimits

0xae9f,	// (0x00039940) cell_vitu2_function_top_wide_pane

0xed86,	// (0x0003d827) bg_button_pane_cp012

0xaebc,	// (0x0003995d) cell_vitu2_function_top_pane_g1

0xaed0,	// (0x00039971) bg_button_pane_cp013_ParamLimits

0xaed0,	// (0x00039971) bg_button_pane_cp013

0xaeec,	// (0x0003998d) cell_vitu2_function_top_wide_pane_g1_ParamLimits

0xaeec,	// (0x0003998d) cell_vitu2_function_top_wide_pane_g1

0xd98b,	// (0x0003c42c) bg_popup_sub_pane_cp20

0xaf04,	// (0x000399a5) list_vitu2_match_list_pane

0x2954,	// (0x000313f5) bg_popup_sub_pane_cp20_g1

0x295c,	// (0x000313fd) bg_popup_sub_pane_cp20_g2

0xe561,	// (0x0003d002) bg_popup_sub_pane_cp20_g3

0x2964,	// (0x00031405) bg_popup_sub_pane_cp20_g4

0xe541,	// (0x0003cfe2) bg_popup_sub_pane_cp20_g5

0x2beb,	// (0x0003168c) bg_popup_sub_pane_cp20_g6

0x2974,	// (0x00031415) bg_popup_sub_pane_cp20_g7

0x297c,	// (0x0003141d) bg_popup_sub_pane_cp20_g8

0x2984,	// (0x00031425) bg_popup_sub_pane_cp20_g9

0x0008,

0xf97d,	// (0x0003e41e) bg_popup_sub_pane_cp20_g

0xaf1c,	// (0x000399bd) list_vitu2_match_list_item_pane_ParamLimits

0xaf1c,	// (0x000399bd) list_vitu2_match_list_item_pane

0xaf2e,	// (0x000399cf) list_vitu2_match_list_item_pane_t1

0xd981,	// (0x0003c422) bg_popup_sub_pane_cp21

0xe2c2,	// (0x0003cd63) grid_vitu2_dropdown_list_pane

0xaf3c,	// (0x000399dd) cell_vitu2_dropdown_list_char_pane_ParamLimits

0xaf3c,	// (0x000399dd) cell_vitu2_dropdown_list_char_pane

0xaf5a,	// (0x000399fb) cell_vitu2_dropdown_list_ctrl_pane_ParamLimits

0xaf5a,	// (0x000399fb) cell_vitu2_dropdown_list_ctrl_pane

0x2c32,	// (0x000316d3) cell_vitu2_dropdown_list_char_pane_g1

0x2c29,	// (0x000316ca) cell_vitu2_dropdown_list_char_pane_g2

0x2c20,	// (0x000316c1) cell_vitu2_dropdown_list_char_pane_g3

0x0002,

0xf99a,	// (0x0003e43b) cell_vitu2_dropdown_list_char_pane_g

0xaf82,	// (0x00039a23) cell_vitu2_dropdown_list_char_pane_t1

0xaf90,	// (0x00039a31) cell_vitu2_dropdown_list_ctrl_pane_g1_ParamLimits

0xaf90,	// (0x00039a31) cell_vitu2_dropdown_list_ctrl_pane_g1

0xafa0,	// (0x00039a41) cell_vitu2_dropdown_list_ctrl_pane_g2_ParamLimits

0xafa0,	// (0x00039a41) cell_vitu2_dropdown_list_ctrl_pane_g2

0xafb1,	// (0x00039a52) cell_vitu2_dropdown_list_ctrl_pane_g3_ParamLimits

0xafb1,	// (0x00039a52) cell_vitu2_dropdown_list_ctrl_pane_g3

0xafc1,	// (0x00039a62) cell_vitu2_dropdown_list_ctrl_pane_g4_ParamLimits

0xafc1,	// (0x00039a62) cell_vitu2_dropdown_list_ctrl_pane_g4

0xe07f,	// (0x0003cb20) cell_vitu2_dropdown_list_ctrl_pane_g5_ParamLimits

0xe07f,	// (0x0003cb20) cell_vitu2_dropdown_list_ctrl_pane_g5

0x0004,

0xf9a1,	// (0x0003e442) cell_vitu2_dropdown_list_ctrl_pane_g_ParamLimits

0xf9a1,	// (0x0003e442) cell_vitu2_dropdown_list_ctrl_pane_g

0xafda,	// (0x00039a7b) aid_size_cell_gallery2_ParamLimits

0xafda,	// (0x00039a7b) aid_size_cell_gallery2

0xaff4,	// (0x00039a95) grid_gallery2_pane_ParamLimits

0xaff4,	// (0x00039a95) grid_gallery2_pane

0x9ca3,	// (0x00038744) scroll_pane_cp029_ParamLimits

0x9ca3,	// (0x00038744) scroll_pane_cp029

0xb005,	// (0x00039aa6) cell_gallery2_pane_ParamLimits

0xb005,	// (0x00039aa6) cell_gallery2_pane

0x2c3b,	// (0x000316dc) cell_gallery2_pane_g2

0xb052,	// (0x00039af3) cell_gallery2_pane_g3

0x2c43,	// (0x000316e4) cell_gallery2_pane_g4

0x2c4b,	// (0x000316ec) cell_gallery2_pane_g5

0xe2c2,	// (0x0003cd63) grid_highlight_pane_cp10

0xa789,	// (0x0003922a) popup_vitu2_match_list_window_ParamLimits

0xa799,	// (0x0003923a) popup_vitu2_query_window_ParamLimits

0xa799,	// (0x0003923a) popup_vitu2_query_window

0xd981,	// (0x0003c422) bg_vitu2_candi_button_pane

0x2c32,	// (0x000316d3) cell_vitu2_dropdown_list_char_pane_g1_copy1

0x2c29,	// (0x000316ca) cell_vitu2_dropdown_list_char_pane_g2_copy1

0x2c20,	// (0x000316c1) cell_vitu2_dropdown_list_char_pane_g2_copy2

0x5a99,	// (0x0003453a) bg_button_pane_cp015

0xb05a,	// (0x00039afb) bg_button_pane_cp016

0xb066,	// (0x00039b07) bg_button_pane_cp017

0xeffc,	// (0x0003da9d) bg_popup_sub_pane_cp22

0x2c53,	// (0x000316f4) popup_vitu2_query_window_g1

0xb081,	// (0x00039b22) popup_vitu2_query_window_g2

0x0002,

0xf9ac,	// (0x0003e44d) popup_vitu2_query_window_g

0x5acd,	// (0x0003456e) popup_vitu2_query_window_t1_ParamLimits

0x5acd,	// (0x0003456e) popup_vitu2_query_window_t1

0x5b00,	// (0x000345a1) popup_vitu2_query_window_t2_ParamLimits

0x5b00,	// (0x000345a1) popup_vitu2_query_window_t2

0x5b12,	// (0x000345b3) popup_vitu2_query_window_t3_ParamLimits

0x5b12,	// (0x000345b3) popup_vitu2_query_window_t3

0xb0a1,	// (0x00039b42) popup_vitu2_query_window_t4_ParamLimits

0xb0a1,	// (0x00039b42) popup_vitu2_query_window_t4

0xb0b3,	// (0x00039b54) popup_vitu2_query_window_t5_ParamLimits

0xb0b3,	// (0x00039b54) popup_vitu2_query_window_t5

0x0006,

0xf9b3,	// (0x0003e454) popup_vitu2_query_window_t_ParamLimits

0xf9b3,	// (0x0003e454) popup_vitu2_query_window_t

0x2a68,	// (0x00031509) main_cset_text_pane

0xab0d,	// (0x000395ae) aid_area_touch_slider_ParamLimits

0xab29,	// (0x000395ca) cset_slider_pane_ParamLimits

0xab4c,	// (0x000395ed) main_cset_slider_pane_g1_ParamLimits

0xab61,	// (0x00039602) main_cset_slider_pane_g2_ParamLimits

0x2a89,	// (0x0003152a) main_cset_slider_pane_g3_ParamLimits

0x2a89,	// (0x0003152a) main_cset_slider_pane_g3

0xab76,	// (0x00039617) main_cset_slider_pane_g4_ParamLimits

0xab76,	// (0x00039617) main_cset_slider_pane_g4

0xab85,	// (0x00039626) main_cset_slider_pane_g5_ParamLimits

0xab85,	// (0x00039626) main_cset_slider_pane_g5

0xab91,	// (0x00039632) main_cset_slider_pane_g6_ParamLimits

0xab91,	// (0x00039632) main_cset_slider_pane_g6

0xf906,	// (0x0003e3a7) main_cset_slider_pane_g_ParamLimits

0x2ab9,	// (0x0003155a) main_cset_slider_pane_t1_ParamLimits

0xac1d,	// (0x000396be) main_cset_slider_pane_t2_ParamLimits

0xac37,	// (0x000396d8) main_cset_slider_pane_t3_ParamLimits

0xac51,	// (0x000396f2) main_cset_slider_pane_t4_ParamLimits

0xac6b,	// (0x0003970c) main_cset_slider_pane_t5_ParamLimits

0xac85,	// (0x00039726) main_cset_slider_pane_t6_ParamLimits

0xac9a,	// (0x0003973b) main_cset_slider_pane_t7_ParamLimits

0xacc4,	// (0x00039765) main_cset_slider_pane_t8_ParamLimits

0xacc4,	// (0x00039765) main_cset_slider_pane_t8

0xacec,	// (0x0003978d) main_cset_slider_pane_t9_ParamLimits

0xacec,	// (0x0003978d) main_cset_slider_pane_t9

0xad14,	// (0x000397b5) main_cset_slider_pane_t10_ParamLimits

0xad14,	// (0x000397b5) main_cset_slider_pane_t10

0xad3c,	// (0x000397dd) main_cset_slider_pane_t11_ParamLimits

0xad3c,	// (0x000397dd) main_cset_slider_pane_t11

0xad64,	// (0x00039805) main_cset_slider_pane_t12_ParamLimits

0xad64,	// (0x00039805) main_cset_slider_pane_t12

0xad81,	// (0x00039822) main_cset_slider_pane_t13_ParamLimits

0xad81,	// (0x00039822) main_cset_slider_pane_t13

0xf92b,	// (0x0003e3cc) main_cset_slider_pane_t_ParamLimits

0xd981,	// (0x0003c422) bg_popup_sub_pane_cp011

0x2c5f,	// (0x00031700) main_cset_text_pane_g1

0x2c67,	// (0x00031708) main_cset_text_pane_t1

0x2c75,	// (0x00031716) main_cset_text_pane_t2

0x2c83,	// (0x00031724) main_cset_text_pane_t3

0x2c91,	// (0x00031732) main_cset_text_pane_t4

0x2c9f,	// (0x00031740) main_cset_text_pane_t5

0x2cad,	// (0x0003174e) main_cset_text_pane_t6

0x2cbb,	// (0x0003175c) main_cset_text_pane_t7

0x0006,

0xf9c2,	// (0x0003e463) main_cset_text_pane_t

0xd981,	// (0x0003c422) main_cam4_burst_pane

0xd981,	// (0x0003c422) main_cam5_pane

0x2a3e,	// (0x000314df) bg_button_pane_cp019

0x2a47,	// (0x000314e8) bg_button_pane_cp020

0x2a95,	// (0x00031536) main_cset_slider_pane_g7_ParamLimits

0x2a95,	// (0x00031536) main_cset_slider_pane_g7

0x2aa1,	// (0x00031542) main_cset_slider_pane_g8_ParamLimits

0x2aa1,	// (0x00031542) main_cset_slider_pane_g8

0xaba5,	// (0x00039646) main_cset_slider_pane_g9_ParamLimits

0xaba5,	// (0x00039646) main_cset_slider_pane_g9

0xabb1,	// (0x00039652) main_cset_slider_pane_g10_ParamLimits

0xabb1,	// (0x00039652) main_cset_slider_pane_g10

0xabbd,	// (0x0003965e) main_cset_slider_pane_g11_ParamLimits

0xabbd,	// (0x0003965e) main_cset_slider_pane_g11

0xabc9,	// (0x0003966a) main_cset_slider_pane_g12_ParamLimits

0xabc9,	// (0x0003966a) main_cset_slider_pane_g12

0xabd5,	// (0x00039676) main_cset_slider_pane_g13_ParamLimits

0xabd5,	// (0x00039676) main_cset_slider_pane_g13

0xabe1,	// (0x00039682) main_cset_slider_pane_g14_ParamLimits

0xabe1,	// (0x00039682) main_cset_slider_pane_g14

0xabed,	// (0x0003968e) main_cset_slider_pane_g15_ParamLimits

0xabed,	// (0x0003968e) main_cset_slider_pane_g15

0x2ae1,	// (0x00031582) main_cset_slider_pane_t14_ParamLimits

0x2ae1,	// (0x00031582) main_cset_slider_pane_t14

0x2b1a,	// (0x000315bb) main_cset_slider_pane_t15_ParamLimits

0x2b1a,	// (0x000315bb) main_cset_slider_pane_t15

0xb0c5,	// (0x00039b66) aid_cam4_burst_size_cell_ParamLimits

0xb0c5,	// (0x00039b66) aid_cam4_burst_size_cell

0xb0e1,	// (0x00039b82) grid_cam4_burst_pane_ParamLimits

0xb0e1,	// (0x00039b82) grid_cam4_burst_pane

0xb103,	// (0x00039ba4) linegrid_cam4_burst_pane_ParamLimits

0xb103,	// (0x00039ba4) linegrid_cam4_burst_pane

0xb121,	// (0x00039bc2) scroll_pane_cp30_ParamLimits

0xb121,	// (0x00039bc2) scroll_pane_cp30

0xb12d,	// (0x00039bce) cell_cam4_burst_pane_ParamLimits

0xb12d,	// (0x00039bce) cell_cam4_burst_pane

0x2cc9,	// (0x0003176a) linegrid_cam4_burst_pane_g1_ParamLimits

0x2cc9,	// (0x0003176a) linegrid_cam4_burst_pane_g1

0xb165,	// (0x00039c06) linegrid_cam4_burst_pane_g2_ParamLimits

0xb165,	// (0x00039c06) linegrid_cam4_burst_pane_g2

0x2cd6,	// (0x00031777) linegrid_cam4_burst_pane_g3_ParamLimits

0x2cd6,	// (0x00031777) linegrid_cam4_burst_pane_g3

0x0002,

0xf9d1,	// (0x0003e472) linegrid_cam4_burst_pane_g_ParamLimits

0xf9d1,	// (0x0003e472) linegrid_cam4_burst_pane_g

0xb176,	// (0x00039c17) linegrid_cam4_burst_pane_g3_copy1_ParamLimits

0xb176,	// (0x00039c17) linegrid_cam4_burst_pane_g3_copy1

0x2ce3,	// (0x00031784) linegrid_cam4_burst_pane_g4_ParamLimits

0x2ce3,	// (0x00031784) linegrid_cam4_burst_pane_g4

0xb190,	// (0x00039c31) linegrid_cam4_burst_pane_g5_ParamLimits

0xb190,	// (0x00039c31) linegrid_cam4_burst_pane_g5

0xb1a1,	// (0x00039c42) linegrid_cam4_burst_pane_g6_ParamLimits

0xb1a1,	// (0x00039c42) linegrid_cam4_burst_pane_g6

0x2cf0,	// (0x00031791) linegrid_cam4_burst_pane_g7_ParamLimits

0x2cf0,	// (0x00031791) linegrid_cam4_burst_pane_g7

0xb1b2,	// (0x00039c53) cell_cam4_burst_pane_g1

0x2d09,	// (0x000317aa) main_cam5_pane_t1_ParamLimits

0x2d09,	// (0x000317aa) main_cam5_pane_t1

0x2d1b,	// (0x000317bc) main_cam5_pane_t2_ParamLimits

0x2d1b,	// (0x000317bc) main_cam5_pane_t2

0x2d2d,	// (0x000317ce) main_cam5_pane_t3_ParamLimits

0x2d2d,	// (0x000317ce) main_cam5_pane_t3

0x2d3f,	// (0x000317e0) main_cam5_pane_t4_ParamLimits

0x2d3f,	// (0x000317e0) main_cam5_pane_t4

0x2d55,	// (0x000317f6) main_cam5_pane_t5_ParamLimits

0x2d55,	// (0x000317f6) main_cam5_pane_t5

0x2d67,	// (0x00031808) main_cam5_pane_t6_ParamLimits

0x2d67,	// (0x00031808) main_cam5_pane_t6

0x2d79,	// (0x0003181a) main_cam5_pane_t7_ParamLimits

0x2d79,	// (0x0003181a) main_cam5_pane_t7

0x2d8b,	// (0x0003182c) main_cam5_pane_t8_ParamLimits

0x2d8b,	// (0x0003182c) main_cam5_pane_t8

0x2da7,	// (0x00031848) main_cam5_pane_t9_ParamLimits

0x2da7,	// (0x00031848) main_cam5_pane_t9

0x2db9,	// (0x0003185a) main_cam5_pane_t10_ParamLimits

0x2db9,	// (0x0003185a) main_cam5_pane_t10

0x2dcb,	// (0x0003186c) main_cam5_pane_t11_ParamLimits

0x2dcb,	// (0x0003186c) main_cam5_pane_t11

0x2ddd,	// (0x0003187e) main_cam5_pane_t12_ParamLimits

0x2ddd,	// (0x0003187e) main_cam5_pane_t12

0x2df2,	// (0x00031893) main_cam5_pane_t13_ParamLimits

0x2df2,	// (0x00031893) main_cam5_pane_t13

0x000c,

0xf9dd,	// (0x0003e47e) main_cam5_pane_t_ParamLimits

0xf9dd,	// (0x0003e47e) main_cam5_pane_t

0x66c8,	// (0x00035169) popup_scut_keymap_window_ParamLimits

0x66c8,	// (0x00035169) popup_scut_keymap_window

0xb1c5,	// (0x00039c66) aid_size_cell_brow_shortcut

0xe2c2,	// (0x0003cd63) bg_popup_window_pane_cp010

0xb1d1,	// (0x00039c72) grid_scut_pane

0xb1db,	// (0x00039c7c) cell_scut_pane_ParamLimits

0xb1db,	// (0x00039c7c) cell_scut_pane

0xb1f0,	// (0x00039c91) cell_scut_pane_g1

0x2e0f,	// (0x000318b0) cell_scut_pane_t1

0x2e1e,	// (0x000318bf) cell_scut_pane_t2

0xb1f9,	// (0x00039c9a) cell_scut_pane_t3

0x0002,

0xf9f8,	// (0x0003e499) cell_scut_pane_t

0x95ab,	// (0x0003804c) main_mup3_pane_g8_ParamLimits

0x95ab,	// (0x0003804c) main_mup3_pane_g8

0xa6f5,	// (0x00039196) area_vitu2_query_pane_ParamLimits

0xa6f5,	// (0x00039196) area_vitu2_query_pane

0x5aaa,	// (0x0003454b) input_focus_pane_cp08

0x2e2d,	// (0x000318ce) area_vitu2_query_pane_g1

0x5b90,	// (0x00034631) area_vitu2_query_pane_g2

0x0001,

0xf9ff,	// (0x0003e4a0) area_vitu2_query_pane_g

0xb207,	// (0x00039ca8) area_vitu2_query_pane_t1_ParamLimits

0xb207,	// (0x00039ca8) area_vitu2_query_pane_t1

0xb219,	// (0x00039cba) area_vitu2_query_pane_t2_ParamLimits

0xb219,	// (0x00039cba) area_vitu2_query_pane_t2

0x5b9f,	// (0x00034640) area_vitu2_query_pane_t3_ParamLimits

0x5b9f,	// (0x00034640) area_vitu2_query_pane_t3

0x5bc7,	// (0x00034668) area_vitu2_query_pane_t4_ParamLimits

0x5bc7,	// (0x00034668) area_vitu2_query_pane_t4

0x5bef,	// (0x00034690) area_vitu2_query_pane_t5_ParamLimits

0x5bef,	// (0x00034690) area_vitu2_query_pane_t5

0x5c17,	// (0x000346b8) area_vitu2_query_pane_t6_ParamLimits

0x5c17,	// (0x000346b8) area_vitu2_query_pane_t6

0x0006,

0xfa04,	// (0x0003e4a5) area_vitu2_query_pane_t_ParamLimits

0xfa04,	// (0x0003e4a5) area_vitu2_query_pane_t

0xb05a,	// (0x00039afb) bg_button_pane_cp018

0xb22b,	// (0x00039ccc) bg_button_pane_cp021

0x5c63,	// (0x00034704) bg_button_pane_cp022

0x5c82,	// (0x00034723) input_focus_pane_cp09

0x850b,	// (0x00036fac) aid_size_touch_mv_arrow_left

0xeb6a,	// (0x0003d60b) aid_size_touch_mv_arrow_right

0xac05,	// (0x000396a6) main_cset_slider_pane_g16_ParamLimits

0xac05,	// (0x000396a6) main_cset_slider_pane_g16

0xac11,	// (0x000396b2) main_cset_slider_pane_g17_ParamLimits

0xac11,	// (0x000396b2) main_cset_slider_pane_g17

0xb1b2,	// (0x00039c53) cell_cam4_burst_pane_g1_ParamLimits

0xd981,	// (0x0003c422) compa_mode_pane

0xadee,	// (0x0003988f) popup_vtel_slider_window_g3_ParamLimits

0xadee,	// (0x0003988f) popup_vtel_slider_window_g3

0xae02,	// (0x000398a3) popup_vtel_slider_window_g4_ParamLimits

0xae02,	// (0x000398a3) popup_vtel_slider_window_g4

0xae16,	// (0x000398b7) popup_vtel_slider_window_t1_ParamLimits

0xae16,	// (0x000398b7) popup_vtel_slider_window_t1

0xd981,	// (0x0003c422) main_cl_pane

0x8ef7,	// (0x00037998) popup_imed_adjust2_window_ParamLimits

0xeffc,	// (0x0003da9d) bg_tb_trans_pane_cp05_ParamLimits

0x2148,	// (0x00030be9) popup_imed_adjust2_window_g1_ParamLimits

0x2157,	// (0x00030bf8) popup_imed_adjust2_window_g2_ParamLimits

0x2157,	// (0x00030bf8) popup_imed_adjust2_window_g2

0x2163,	// (0x00030c04) popup_imed_adjust2_window_g3_ParamLimits

0x2163,	// (0x00030c04) popup_imed_adjust2_window_g3

0x0002,

0xf76b,	// (0x0003e20c) popup_imed_adjust2_window_g_ParamLimits

0xf76b,	// (0x0003e20c) popup_imed_adjust2_window_g

0x216f,	// (0x00030c10) popup_imed_adjust2_window_t1_ParamLimits

0x2187,	// (0x00030c28) slider_imed_adjust_pane_ParamLimits

0x219b,	// (0x00030c3c) slider_imed_adjust_pane_g1_ParamLimits

0x21ab,	// (0x00030c4c) slider_imed_adjust_pane_g2_ParamLimits

0x21bb,	// (0x00030c5c) slider_imed_adjust_pane_g3_ParamLimits

0x21cc,	// (0x00030c6d) slider_imed_adjust_pane_g4_ParamLimits

0xf772,	// (0x0003e213) slider_imed_adjust_pane_g_ParamLimits

0xa49d,	// (0x00038f3e) aid_touch_area_cam4_ParamLimits

0xa49d,	// (0x00038f3e) aid_touch_area_cam4

0xa4ab,	// (0x00038f4c) battery_pane_cp01

0xa52a,	// (0x00038fcb) main_camera4_pane_g6_ParamLimits

0xa52a,	// (0x00038fcb) main_camera4_pane_g6

0xa548,	// (0x00038fe9) main_camera4_pane_t2_ParamLimits

0xa548,	// (0x00038fe9) main_camera4_pane_t2

0x0001,

0xf879,	// (0x0003e31a) main_camera4_pane_t_ParamLimits

0xf879,	// (0x0003e31a) main_camera4_pane_t

0xa5d0,	// (0x00039071) aid_touch_area_vid4_ParamLimits

0xa5d0,	// (0x00039071) aid_touch_area_vid4

0xa52a,	// (0x00038fcb) main_video4_pane_g5_ParamLimits

0xa52a,	// (0x00038fcb) main_video4_pane_g5

0xa600,	// (0x000390a1) vid4_progress_pane_ParamLimits

0xa600,	// (0x000390a1) vid4_progress_pane

0x2aad,	// (0x0003154e) main_cset_slider_pane_g18_ParamLimits

0x2aad,	// (0x0003154e) main_cset_slider_pane_g18

0x2cfd,	// (0x0003179e) cell_cam4_burst_pane_g2_ParamLimits

0x2cfd,	// (0x0003179e) cell_cam4_burst_pane_g2

0x0001,

0xf9d8,	// (0x0003e479) cell_cam4_burst_pane_g_ParamLimits

0xf9d8,	// (0x0003e479) cell_cam4_burst_pane_g

0xb237,	// (0x00039cd8) bg_cl_pane_ParamLimits

0xb237,	// (0x00039cd8) bg_cl_pane

0xb243,	// (0x00039ce4) cl_header_pane_ParamLimits

0xb243,	// (0x00039ce4) cl_header_pane

0xb24f,	// (0x00039cf0) cl_listscroll_pane_ParamLimits

0xb24f,	// (0x00039cf0) cl_listscroll_pane

0x2ed5,	// (0x00031976) bg_cl_pane_g1

0x2edd,	// (0x0003197e) bg_cl_pane_g2

0x2ee5,	// (0x00031986) bg_cl_pane_g3

0x2eed,	// (0x0003198e) bg_cl_pane_g4

0x2ef5,	// (0x00031996) bg_cl_pane_g5

0x2efd,	// (0x0003199e) bg_cl_pane_g6

0x2f05,	// (0x000319a6) bg_cl_pane_g7

0x2f0d,	// (0x000319ae) bg_cl_pane_g8

0x2f15,	// (0x000319b6) bg_cl_pane_g9

0x0008,

0xfa13,	// (0x0003e4b4) bg_cl_pane_g

0xb25b,	// (0x00039cfc) aid_height_cl_leading_ParamLimits

0xb25b,	// (0x00039cfc) aid_height_cl_leading

0xb267,	// (0x00039d08) aid_height_cl_text_ParamLimits

0xb267,	// (0x00039d08) aid_height_cl_text

0xd98b,	// (0x0003c42c) bg_cl_header_pane_ParamLimits

0xd98b,	// (0x0003c42c) bg_cl_header_pane

0xb27f,	// (0x00039d20) cl_header_pane_g1_ParamLimits

0xb27f,	// (0x00039d20) cl_header_pane_g1

0xb28c,	// (0x00039d2d) cl_header_pane_t1_ParamLimits

0xb28c,	// (0x00039d2d) cl_header_pane_t1

0x2f1d,	// (0x000319be) cl_list_pane

0x2f26,	// (0x000319c7) hc_scroll_pane_cp01

0xe541,	// (0x0003cfe2) bg_cl_header_pane_g1

0x2954,	// (0x000313f5) bg_cl_header_pane_g2

0xe561,	// (0x0003d002) bg_cl_header_pane_g3

0x2964,	// (0x00031405) bg_cl_header_pane_g4

0x295c,	// (0x000313fd) bg_cl_header_pane_g5

0x2beb,	// (0x0003168c) bg_cl_header_pane_g6

0x297c,	// (0x0003141d) bg_cl_header_pane_g7

0x2984,	// (0x00031425) bg_cl_header_pane_g8

0x2974,	// (0x00031415) bg_cl_header_pane_g9

0x0008,

0xfa26,	// (0x0003e4c7) bg_cl_header_pane_g

0xb29e,	// (0x00039d3f) hc_cl_list_double_graphic_heading_pane_ParamLimits

0xb29e,	// (0x00039d3f) hc_cl_list_double_graphic_heading_pane

0xb2ae,	// (0x00039d4f) hc_cl_list_single_graphic_pane_ParamLimits

0xb2ae,	// (0x00039d4f) hc_cl_list_single_graphic_pane

0xb2c0,	// (0x00039d61) hc_cl_list_single_graphic_pane_g1_ParamLimits

0xb2c0,	// (0x00039d61) hc_cl_list_single_graphic_pane_g1

0xb2cc,	// (0x00039d6d) hc_cl_list_single_graphic_pane_g2_ParamLimits

0xb2cc,	// (0x00039d6d) hc_cl_list_single_graphic_pane_g2

0x0001,

0xfa39,	// (0x0003e4da) hc_cl_list_single_graphic_pane_g_ParamLimits

0xfa39,	// (0x0003e4da) hc_cl_list_single_graphic_pane_g

0xb2e0,	// (0x00039d81) hc_cl_list_single_graphic_pane_t1_ParamLimits

0xb2e0,	// (0x00039d81) hc_cl_list_single_graphic_pane_t1

0xb2c0,	// (0x00039d61) hc_cl_list_double_graphic_heading_pane_g1_ParamLimits

0xb2c0,	// (0x00039d61) hc_cl_list_double_graphic_heading_pane_g1

0xb2f5,	// (0x00039d96) hc_cl_list_double_graphic_heading_pane_g2_ParamLimits

0xb2f5,	// (0x00039d96) hc_cl_list_double_graphic_heading_pane_g2

0xb309,	// (0x00039daa) hc_cl_list_double_graphic_heading_pane_g3_ParamLimits

0xb309,	// (0x00039daa) hc_cl_list_double_graphic_heading_pane_g3

0x0002,

0xfa3e,	// (0x0003e4df) hc_cl_list_double_graphic_heading_pane_g_ParamLimits

0xfa3e,	// (0x0003e4df) hc_cl_list_double_graphic_heading_pane_g

0xb31d,	// (0x00039dbe) hc_cl_list_double_graphic_heading_pane_t1_ParamLimits

0xb31d,	// (0x00039dbe) hc_cl_list_double_graphic_heading_pane_t1

0xb332,	// (0x00039dd3) hc_cl_list_double_graphic_heading_pane_t2_ParamLimits

0xb332,	// (0x00039dd3) hc_cl_list_double_graphic_heading_pane_t2

0x0001,

0xfa45,	// (0x0003e4e6) hc_cl_list_double_graphic_heading_pane_t_ParamLimits

0xfa45,	// (0x0003e4e6) hc_cl_list_double_graphic_heading_pane_t

0xb347,	// (0x00039de8) vid4_progress_pane_g1

0xb356,	// (0x00039df7) vid4_progress_pane_g2

0xb365,	// (0x00039e06) vid4_progress_pane_g3

0xb374,	// (0x00039e15) vid4_progress_pane_g4

0x0004,

0xfa4a,	// (0x0003e4eb) vid4_progress_pane_g

0xb380,	// (0x00039e21) vid4_progress_pane_t1

0xb396,	// (0x00039e37) vid4_progress_pane_t2

0x0002,

0xfa55,	// (0x0003e4f6) vid4_progress_pane_t

0xb3c0,	// (0x00039e61) wait_bar_pane_cp07

0x1a73,	// (0x00030514) blid_firmament_pane_ParamLimits

0x1ab4,	// (0x00030555) popup_blid_sat_info2_window_g1

0x1ad8,	// (0x00030579) popup_blid_sat_info2_window_t3

0x1ae6,	// (0x00030587) popup_blid_sat_info2_window_t4

0x1af4,	// (0x00030595) popup_blid_sat_info2_window_t5

0x1b02,	// (0x000305a3) popup_blid_sat_info2_window_t6

0x1b12,	// (0x000305b3) popup_blid_sat_info2_window_t7

0x1b20,	// (0x000305c1) popup_blid_sat_info2_window_t8

0x1b2e,	// (0x000305cf) popup_blid_sat_info2_window_t9

0x1b3c,	// (0x000305dd) popup_blid_sat_info2_window_t10

0x1bf7,	// (0x00030698) aid_firma_cardinal_ParamLimits

0x1c0b,	// (0x000306ac) blid_firmament_pane_t1_ParamLimits

0x1c22,	// (0x000306c3) blid_firmament_pane_t2_ParamLimits

0x1c39,	// (0x000306da) blid_firmament_pane_t3_ParamLimits

0x1c50,	// (0x000306f1) blid_firmament_pane_t4_ParamLimits

0xf664,	// (0x0003e105) blid_firmament_pane_t_ParamLimits

0x1c67,	// (0x00030708) blid_sat_info_pane_ParamLimits

0xed86,	// (0x0003d827) main_cam_set_pane_ParamLimits

0x9c43,	// (0x000386e4) aid_size_cell_colour_35_ParamLimits

0x9c5a,	// (0x000386fb) aid_size_cell_colour_112_ParamLimits

0x9c71,	// (0x00038712) aid_size_cell_effect_ParamLimits

0xed86,	// (0x0003d827) bg_tb_trans_pane_cp02_ParamLimits

0xf02c,	// (0x0003dacd) heading_imed_pane_ParamLimits

0x9c8b,	// (0x0003872c) listscroll_imed_pane_ParamLimits

0x0dfe,	// (0x0002f89f) popup_call2_audio_first_window_g5_ParamLimits

0x0dfe,	// (0x0002f89f) popup_call2_audio_first_window_g5

0xa23a,	// (0x00038cdb) aid_size_touch_image3_arrow_left_ParamLimits

0xa23a,	// (0x00038cdb) aid_size_touch_image3_arrow_left

0xa24e,	// (0x00038cef) aid_size_touch_image3_arrow_right_ParamLimits

0xa24e,	// (0x00038cef) aid_size_touch_image3_arrow_right

0xb3ab,	// (0x00039e4c) vid4_progress_pane_t3

0x9def,	// (0x00038890) main_hwr_training_symbol_option_pane_ParamLimits

0x9def,	// (0x00038890) main_hwr_training_symbol_option_pane

0x2375,	// (0x00030e16) popup_hwr_training_preview_window_ParamLimits

0x2375,	// (0x00030e16) popup_hwr_training_preview_window

0x9e4a,	// (0x000388eb) hwr_training_navi_pane_g5_ParamLimits

0x9e4a,	// (0x000388eb) hwr_training_navi_pane_g5

0x2942,	// (0x000313e3) popup_char_count_window

0xd98b,	// (0x0003c42c) bg_popup_sub_pane_cp20_ParamLimits

0xaf04,	// (0x000399a5) list_vitu2_match_list_pane_ParamLimits

0xaf10,	// (0x000399b1) vitu2_page_scroll_pane_ParamLimits

0xaf10,	// (0x000399b1) vitu2_page_scroll_pane

0x2fef,	// (0x00031a90) list_single_hwr_training_symbol_option_pane_ParamLimits

0x2fef,	// (0x00031a90) list_single_hwr_training_symbol_option_pane

0x3002,	// (0x00031aa3) list_single_hwr_training_symbol_option_pane_g1

0x300a,	// (0x00031aab) list_single_hwr_training_symbol_option_pane_t1

0x3018,	// (0x00031ab9) bg_button_pane_cp023

0x3021,	// (0x00031ac2) bg_button_pane_cp024

0xb3d9,	// (0x00039e7a) vitu2_page_scroll_pane_g1

0xb3e1,	// (0x00039e82) vitu2_page_scroll_pane_g2

0x0001,

0xfa5c,	// (0x0003e4fd) vitu2_page_scroll_pane_g

0xb3e9,	// (0x00039e8a) vitu2_page_scroll_pane_t1

0x1c96,	// (0x00030737) popup_char_count_window_g1

0x3054,	// (0x00031af5) popup_char_count_window_g2

0x305d,	// (0x00031afe) popup_char_count_window_g3

0x0002,

0xfa61,	// (0x0003e502) popup_char_count_window_g

0x3066,	// (0x00031b07) popup_char_count_window_t1

0xd981,	// (0x0003c422) main_vded2_pane

0x2136,	// (0x00030bd7) aid_size_cell_imed_line

0x2140,	// (0x00030be1) grid_imed_line_width_pane

0xa64b,	// (0x000390ec) vid4_indicators_pane_g4

0x3074,	// (0x00031b15) cell_imed_line_width_pane_ParamLimits

0x3074,	// (0x00031b15) cell_imed_line_width_pane

0x3086,	// (0x00031b27) cell_imed_line_width_pane_g1

0x308f,	// (0x00031b30) cell_imed_line_width_pane_g2

0x0001,

0xfa68,	// (0x0003e509) cell_imed_line_width_pane_g

0xb3f8,	// (0x00039e99) main_vded2_pane_g1_ParamLimits

0xb3f8,	// (0x00039e99) main_vded2_pane_g1

0xb405,	// (0x00039ea6) main_vded2_pane_g2_ParamLimits

0xb405,	// (0x00039ea6) main_vded2_pane_g2

0x0001,

0xfa6d,	// (0x0003e50e) main_vded2_pane_g_ParamLimits

0xfa6d,	// (0x0003e50e) main_vded2_pane_g

0xb411,	// (0x00039eb2) vded2_slider_pane_ParamLimits

0xb411,	// (0x00039eb2) vded2_slider_pane

0xb41e,	// (0x00039ebf) aid_size_touch_vded2_end

0xb426,	// (0x00039ec7) aid_size_touch_vded2_playhead

0xb42e,	// (0x00039ecf) aid_size_touch_vded2_start

0xb436,	// (0x00039ed7) vded2_slider_bg_pane

0xb43f,	// (0x00039ee0) vded2_slider_pane_g1

0xb448,	// (0x00039ee9) vded2_slider_pane_g2

0xb450,	// (0x00039ef1) vded2_slider_pane_g3

0x0002,

0xfa72,	// (0x0003e513) vded2_slider_pane_g

0xb459,	// (0x00039efa) vded2_slider_bg_pane_g1

0xb462,	// (0x00039f03) vded2_slider_bg_pane_g2

0xb46b,	// (0x00039f0c) vded2_slider_bg_pane_g3

0x0002,

0xfa79,	// (0x0003e51a) vded2_slider_bg_pane_g

0x881c,	// (0x000372bd) aid_postcard_touch_down_pane_ParamLimits

0x881c,	// (0x000372bd) aid_postcard_touch_down_pane

0x8828,	// (0x000372c9) aid_postcard_touch_up_pane_ParamLimits

0x8828,	// (0x000372c9) aid_postcard_touch_up_pane

0xd981,	// (0x0003c422) main_blid2_pane

0x8e94,	// (0x00037935) popup_blid2_search_window

0xd981,	// (0x0003c422) blid2_gps_pane

0xd981,	// (0x0003c422) blid2_navig_pane

0xd981,	// (0x0003c422) blid2_search_pane

0xd981,	// (0x0003c422) blid2_tripm_pane

0xb474,	// (0x00039f15) blid2_search_pane_g1_ParamLimits

0xb474,	// (0x00039f15) blid2_search_pane_g1

0xb480,	// (0x00039f21) blid2_search_pane_t1_ParamLimits

0xb480,	// (0x00039f21) blid2_search_pane_t1

0xb492,	// (0x00039f33) aid_size_cell_blid2_gps_ParamLimits

0xb492,	// (0x00039f33) aid_size_cell_blid2_gps

0xb4a2,	// (0x00039f43) blid2_gps_pane_g1_ParamLimits

0xb4a2,	// (0x00039f43) blid2_gps_pane_g1

0xb4ae,	// (0x00039f4f) grid_blid2_satellite_pane_ParamLimits

0xb4ae,	// (0x00039f4f) grid_blid2_satellite_pane

0xb4ba,	// (0x00039f5b) blid2_navig_pane_g1_ParamLimits

0xb4ba,	// (0x00039f5b) blid2_navig_pane_g1

0xb4c6,	// (0x00039f67) blid2_navig_pane_t1_ParamLimits

0xb4c6,	// (0x00039f67) blid2_navig_pane_t1

0xb4d8,	// (0x00039f79) blid2_navig_pane_t2_ParamLimits

0xb4d8,	// (0x00039f79) blid2_navig_pane_t2

0x0001,

0xfa80,	// (0x0003e521) blid2_navig_pane_t_ParamLimits

0xfa80,	// (0x0003e521) blid2_navig_pane_t

0xb4ea,	// (0x00039f8b) blid2_navig_ring_pane_ParamLimits

0xb4ea,	// (0x00039f8b) blid2_navig_ring_pane

0xb4f6,	// (0x00039f97) blid2_speed_pane_ParamLimits

0xb4f6,	// (0x00039f97) blid2_speed_pane

0xb502,	// (0x00039fa3) blid2_tripm_pane_g1_ParamLimits

0xb502,	// (0x00039fa3) blid2_tripm_pane_g1

0xb50e,	// (0x00039faf) blid2_tripm_pane_g2_ParamLimits

0xb50e,	// (0x00039faf) blid2_tripm_pane_g2

0xb51a,	// (0x00039fbb) blid2_tripm_pane_g3_ParamLimits

0xb51a,	// (0x00039fbb) blid2_tripm_pane_g3

0xb526,	// (0x00039fc7) blid2_tripm_pane_g4_ParamLimits

0xb526,	// (0x00039fc7) blid2_tripm_pane_g4

0xb532,	// (0x00039fd3) blid2_tripm_pane_g5_ParamLimits

0xb532,	// (0x00039fd3) blid2_tripm_pane_g5

0x0005,

0xfa85,	// (0x0003e526) blid2_tripm_pane_g_ParamLimits

0xfa85,	// (0x0003e526) blid2_tripm_pane_g

0xb54a,	// (0x00039feb) blid2_tripm_pane_t1_ParamLimits

0xb54a,	// (0x00039feb) blid2_tripm_pane_t1

0xb55c,	// (0x00039ffd) blid2_tripm_pane_t2_ParamLimits

0xb55c,	// (0x00039ffd) blid2_tripm_pane_t2

0xb56e,	// (0x0003a00f) blid2_tripm_pane_t3_ParamLimits

0xb56e,	// (0x0003a00f) blid2_tripm_pane_t3

0x0003,

0xfa92,	// (0x0003e533) blid2_tripm_pane_t_ParamLimits

0xfa92,	// (0x0003e533) blid2_tripm_pane_t

0xb59e,	// (0x0003a03f) cell_blid2_satellite_pane_ParamLimits

0xb59e,	// (0x0003a03f) cell_blid2_satellite_pane

0xb5b6,	// (0x0003a057) cell_blid2_satellite_pane_g1

0x3097,	// (0x00031b38) cell_blid2_satellite_pane_t1

0xe343,	// (0x0003cde4) blid2_speed_pane_g1

0x30a5,	// (0x00031b46) blid2_speed_pane_t1

0x30b3,	// (0x00031b54) blid2_speed_pane_t2

0x0001,

0xfa9b,	// (0x0003e53c) blid2_speed_pane_t

0xe343,	// (0x0003cde4) blid2_navig_ring_pane_g1

0xb5bf,	// (0x0003a060) blid2_navig_ring_pane_g2

0xb5c7,	// (0x0003a068) blid2_navig_ring_pane_g3

0xb5cf,	// (0x0003a070) blid2_navig_ring_pane_g4

0xb5d7,	// (0x0003a078) blid2_navig_ring_pane_g5

0x0004,

0xfaa0,	// (0x0003e541) blid2_navig_ring_pane_g

0xd981,	// (0x0003c422) bg_popup_window_pane_cp011

0x30c1,	// (0x00031b62) popup_blid2_search_window_g1

0x30c9,	// (0x00031b6a) popup_blid2_search_window_t1

0x30d7,	// (0x00031b78) popup_blid2_search_window_t2

0x0001,

0xfaab,	// (0x0003e54c) popup_blid2_search_window_t

0xe450,	// (0x0003cef1) main_browser_pane_g1

0xe0f5,	// (0x0003cb96) main_browser_pane_ParamLimits

0xed86,	// (0x0003d827) bg_button_pane_cp011_ParamLimits

0xa87c,	// (0x0003931d) cell_vitu2_function_pane_g1_ParamLimits

0xeffc,	// (0x0003da9d) bg_popup_sub_pane_cp22_ParamLimits

0x5aaa,	// (0x0003454b) input_focus_pane_cp08_ParamLimits

0xb072,	// (0x00039b13) popup_vitu2_query_button_pane_ParamLimits

0xb072,	// (0x00039b13) popup_vitu2_query_button_pane

0x5ac5,	// (0x00034566) popup_vitu2_query_input_button_pane

0x2c53,	// (0x000316f4) popup_vitu2_query_window_g1_ParamLimits

0xb081,	// (0x00039b22) popup_vitu2_query_window_g2_ParamLimits

0xf9ac,	// (0x0003e44d) popup_vitu2_query_window_g_ParamLimits

0xd981,	// (0x0003c422) bg_button_pane_cp026

0xb5df,	// (0x0003a080) popup_vitu2_query_input_button_pane_g1

0xd981,	// (0x0003c422) bg_button_pane_cp025

0x30e5,	// (0x00031b86) popup_vitu2_query_button_pane_t1

0x9329,	// (0x00037dca) main_mp3_pane_t6

0x9337,	// (0x00037dd8) popup_slider_window_cp01

0xa57e,	// (0x0003901f) cam4_battery_pane

0xa57e,	// (0x0003901f) cam4_battery_pane_cp02

0xa57e,	// (0x0003901f) cam4_battery_pane_cp01

0xa57e,	// (0x0003901f) cam4_battery_pane_cp03

0xe343,	// (0x0003cde4) cam4_battery_pane_g1

0x19da,	// (0x0003047b) cam4_battery_pane_g2

0x0001,

0xfab0,	// (0x0003e551) cam4_battery_pane_g

0x1b4a,	// (0x000305eb) popup_blid_sat_info2_window_t11

0x850b,	// (0x00036fac) aid_size_touch_mv_arrow_left_ParamLimits

0xeb6a,	// (0x0003d60b) aid_size_touch_mv_arrow_right_ParamLimits

0xebc3,	// (0x0003d664) navi_pane_g1_ParamLimits

0xebcf,	// (0x0003d670) navi_pane_g2_ParamLimits

0x852f,	// (0x00036fd0) navi_pane_g3_ParamLimits

0xf365,	// (0x0003de06) navi_pane_g_ParamLimits

0x854c,	// (0x00036fed) navi_pane_mv_t1_ParamLimits

0x9c97,	// (0x00038738) grid_imed_effect_pane_ParamLimits

0x72ed,	// (0x00035d8e) aid_placing_vt_slider_lsc

0xe392,	// (0x0003ce33) aid_placing_vt_slider_prt

0xed86,	// (0x0003d827) bg_tb_trans_pane_cp01_ParamLimits

0x1dae,	// (0x0003084f) popup_image_details_window_g1_ParamLimits

0x1dc1,	// (0x00030862) popup_image_details_window_g2_ParamLimits

0x1dd6,	// (0x00030877) popup_image_details_window_g3_ParamLimits

0x1dd6,	// (0x00030877) popup_image_details_window_g3

0xf6a4,	// (0x0003e145) popup_image_details_window_g_ParamLimits

0x1dea,	// (0x0003088b) popup_image_details_window_t1_ParamLimits

0x1dfc,	// (0x0003089d) popup_image_details_window_t2_ParamLimits

0x1e15,	// (0x000308b6) popup_image_details_window_t3_ParamLimits

0x1e29,	// (0x000308ca) popup_image_details_window_t4_ParamLimits

0x1e44,	// (0x000308e5) popup_image_details_window_t5_ParamLimits

0xf6ab,	// (0x0003e14c) popup_image_details_window_t_ParamLimits

0xb273,	// (0x00039d14) cl_header_name_pane_ParamLimits

0xb273,	// (0x00039d14) cl_header_name_pane

0xb5e7,	// (0x0003a088) cl_header_name_pane_t1_ParamLimits

0xb5e7,	// (0x0003a088) cl_header_name_pane_t1

0xb5fe,	// (0x0003a09f) cl_header_name_pane_t2_ParamLimits

0xb5fe,	// (0x0003a09f) cl_header_name_pane_t2

0xb628,	// (0x0003a0c9) cl_header_name_pane_t3_ParamLimits

0xb628,	// (0x0003a0c9) cl_header_name_pane_t3

0x0002,

0xfab5,	// (0x0003e556) cl_header_name_pane_t_ParamLimits

0xfab5,	// (0x0003e556) cl_header_name_pane_t

0xec5c,	// (0x0003d6fd) navi_pane_mv_g2_ParamLimits

0x290d,	// (0x000313ae) field_vitu2_entry_pane_g1_ParamLimits

0x2919,	// (0x000313ba) field_vitu2_entry_pane_g2_ParamLimits

0xf00a,	// (0x0003daab) field_vitu2_entry_pane_g3_ParamLimits

0xf00a,	// (0x0003daab) field_vitu2_entry_pane_g3

0xf8ab,	// (0x0003e34c) field_vitu2_entry_pane_g_ParamLimits

0xa80a,	// (0x000392ab) cell_vitu2_itu_pane_g1_ParamLimits

0xa822,	// (0x000392c3) cell_vitu2_itu_pane_g2_ParamLimits

0xa822,	// (0x000392c3) cell_vitu2_itu_pane_g2

0x0001,

0xf8b7,	// (0x0003e358) cell_vitu2_itu_pane_g_ParamLimits

0xf8b7,	// (0x0003e358) cell_vitu2_itu_pane_g

0xed86,	// (0x0003d827) bg_vkb2_func_pane_cp05_ParamLimits

0xed86,	// (0x0003d827) bg_vkb2_func_pane_cp05

0xed86,	// (0x0003d827) bg_vkb2_func_pane_cp03

0xed86,	// (0x0003d827) bg_vkb2_func_pane_cp04

0xed86,	// (0x0003d827) bg_vkb2_func_pane_cp10_ParamLimits

0xed86,	// (0x0003d827) bg_vkb2_func_pane_cp10

0x5c72,	// (0x00034713) bg_vkb2_func_pane_cp08

0xb05a,	// (0x00039afb) bg_vkb2_func_pane_cp06

0xb22b,	// (0x00039ccc) bg_vkb2_func_pane_cp07

0x302a,	// (0x00031acb) bg_vkb2_func_pane_cp11_ParamLimits

0x302a,	// (0x00031acb) bg_vkb2_func_pane_cp11

0x303f,	// (0x00031ae0) bg_vkb2_func_pane_cp12_ParamLimits

0x303f,	// (0x00031ae0) bg_vkb2_func_pane_cp12

0xd981,	// (0x0003c422) bg_vkb2_func_pane_cp09

0x2954,	// (0x000313f5) bg_vkb2_func_pane_g1

0xe561,	// (0x0003d002) bg_vkb2_func_pane_g2

0x295c,	// (0x000313fd) bg_vkb2_func_pane_g3

0x2964,	// (0x00031405) bg_vkb2_func_pane_g4

0x2beb,	// (0x0003168c) bg_vkb2_func_pane_g5

0x297c,	// (0x0003141d) bg_vkb2_func_pane_g6

0x2984,	// (0x00031425) bg_vkb2_func_pane_g7

0x2974,	// (0x00031415) bg_vkb2_func_pane_g8

0xe541,	// (0x0003cfe2) bg_vkb2_func_pane_g9

0x0008,

0xfabc,	// (0x0003e55d) bg_vkb2_func_pane_g

0xb53e,	// (0x00039fdf) blid2_tripm_pane_g6_ParamLimits

0xb53e,	// (0x00039fdf) blid2_tripm_pane_g6

0x269a,	// (0x0003113b) mp4_progress_pane_g1

0xb592,	// (0x0003a033) blid2_tripm_values_pane_ParamLimits

0xb592,	// (0x0003a033) blid2_tripm_values_pane

0xb64d,	// (0x0003a0ee) blid2_tripm_values_pane_t1

0xb65b,	// (0x0003a0fc) blid2_tripm_values_pane_t2

0xb669,	// (0x0003a10a) blid2_tripm_values_pane_t3

0xb677,	// (0x0003a118) blid2_tripm_values_pane_t4

0xb685,	// (0x0003a126) blid2_tripm_values_pane_t5

0xb693,	// (0x0003a134) blid2_tripm_values_pane_t6

0xb6a1,	// (0x0003a142) blid2_tripm_values_pane_t7

0xb6af,	// (0x0003a150) blid2_tripm_values_pane_t8

0xb6bd,	// (0x0003a15e) blid2_tripm_values_pane_t9

0x0008,

0xfacf,	// (0x0003e570) blid2_tripm_values_pane_t

0x7327,	// (0x00035dc8) call_video_pane_t1_ParamLimits

0x7344,	// (0x00035de5) call_video_pane_t2_ParamLimits

0xf1fc,	// (0x0003dc9d) call_video_pane_t_ParamLimits

0x584a,	// (0x000342eb) msg_header_pane_g1_ParamLimits

0xee3b,	// (0x0003d8dc) msg_header_pane_g2_ParamLimits

0xee3b,	// (0x0003d8dc) msg_header_pane_g2

0x0001,

0xf408,	// (0x0003dea9) msg_header_pane_g_ParamLimits

0xf408,	// (0x0003dea9) msg_header_pane_g

0xe0f5,	// (0x0003cb96) main_clock2_pane_ParamLimits

0x9a3b,	// (0x000384dc) grid_clock2_toolbar_pane_ParamLimits

0x9a3b,	// (0x000384dc) grid_clock2_toolbar_pane

0x9a3b,	// (0x000384dc) listscroll_clock2_pane_ParamLimits

0x9a3b,	// (0x000384dc) listscroll_clock2_pane

0x9ad7,	// (0x00038578) main_clock2_pane_t3_ParamLimits

0x9ad7,	// (0x00038578) main_clock2_pane_t3

0x9ae9,	// (0x0003858a) main_clock2_pane_t4_ParamLimits

0x9ae9,	// (0x0003858a) main_clock2_pane_t4

0x30f3,	// (0x00031b94) cell_clock2_toolbar_pane

0x30fb,	// (0x00031b9c) cell_clock2_toolbar_pane_cp01

0x30fb,	// (0x00031b9c) cell_clock2_toolbar_pane_cp02

0x3103,	// (0x00031ba4) cell_clock2_toolbar_pane_cp03

0x310b,	// (0x00031bac) list_clock2_pane

0x3113,	// (0x00031bb4) scroll_pane_cp10

0x311b,	// (0x00031bbc) list_single_clock2_pane_ParamLimits

0x311b,	// (0x00031bbc) list_single_clock2_pane

0xe2c2,	// (0x0003cd63) list_highlight_pane_cp08

0x3128,	// (0x00031bc9) list_single_clock2_pane_t1

0x3136,	// (0x00031bd7) list_single_clock2_pane_t2

0x0001,

0xfae2,	// (0x0003e583) list_single_clock2_pane_t

0xd981,	// (0x0003c422) bg_button_pane_cp10

0x3144,	// (0x00031be5) cell_clock2_toolbar_pane_g1

0x8786,	// (0x00037227) aid_main_viewer_pane_g1_ParamLimits

0x8786,	// (0x00037227) aid_main_viewer_pane_g1

0x8792,	// (0x00037233) aid_main_viewer_pane_g2_ParamLimits

0x8792,	// (0x00037233) aid_main_viewer_pane_g2

0x879e,	// (0x0003723f) aid_main_viewer_pane_g3_ParamLimits

0x879e,	// (0x0003723f) aid_main_viewer_pane_g3

0x87ad,	// (0x0003724e) aid_main_viewer_pane_g4_ParamLimits

0x87ad,	// (0x0003724e) aid_main_viewer_pane_g4

0x0003,

0xf419,	// (0x0003deba) aid_main_viewer_pane_g_ParamLimits

0xf419,	// (0x0003deba) aid_main_viewer_pane_g

0xd98b,	// (0x0003c42c) main_calc_pane_ParamLimits

0x8e79,	// (0x0003791a) main_dialer2_pane_ParamLimits

0xd981,	// (0x0003c422) main_cam6_pane

0xd981,	// (0x0003c422) main_vid6_pane

0x9a47,	// (0x000384e8) listscroll_gen_pane_cp06_ParamLimits

0x9a47,	// (0x000384e8) listscroll_gen_pane_cp06

0x9afb,	// (0x0003859c) main_clock2_pane_t5_ParamLimits

0x9afb,	// (0x0003859c) main_clock2_pane_t5

0x9b44,	// (0x000385e5) aid_call2_pane_cp10_ParamLimits

0x9b56,	// (0x000385f7) aid_call_pane_cp10_ParamLimits

0xeb5e,	// (0x0003d5ff) popup_clock_analogue_window_cp10_g1_ParamLimits

0xeb5e,	// (0x0003d5ff) popup_clock_analogue_window_cp10_g2_ParamLimits

0x9b68,	// (0x00038609) popup_clock_analogue_window_cp10_g3_ParamLimits

0x9b68,	// (0x00038609) popup_clock_analogue_window_cp10_g4_ParamLimits

0xeb5e,	// (0x0003d5ff) popup_clock_analogue_window_cp10_g5_ParamLimits

0xf760,	// (0x0003e201) popup_clock_analogue_window_cp10_g_ParamLimits

0x9b7a,	// (0x0003861b) popup_clock_analogue_window_cp10_t1_ParamLimits

0x26fa,	// (0x0003119b) cell_dialer2_keypad_pane_g2_ParamLimits

0x26fa,	// (0x0003119b) cell_dialer2_keypad_pane_g2

0x0001,

0xf84a,	// (0x0003e2eb) cell_dialer2_keypad_pane_g_ParamLimits

0xf84a,	// (0x0003e2eb) cell_dialer2_keypad_pane_g

0xa203,	// (0x00038ca4) cell_dialer2_keypad_pane_t1

0xaafa,	// (0x0003959b) main_cset_text2_pane_ParamLimits

0xaafa,	// (0x0003959b) main_cset_text2_pane

0x2e2d,	// (0x000318ce) area_vitu2_query_pane_g1_ParamLimits

0x5b90,	// (0x00034631) area_vitu2_query_pane_g2_ParamLimits

0xf9ff,	// (0x0003e4a0) area_vitu2_query_pane_g_ParamLimits

0x5c3f,	// (0x000346e0) area_vitu2_query_pane_t7_ParamLimits

0x5c3f,	// (0x000346e0) area_vitu2_query_pane_t7

0xb05a,	// (0x00039afb) bg_button_pane_cp018_ParamLimits

0xb22b,	// (0x00039ccc) bg_button_pane_cp021_ParamLimits

0x5c63,	// (0x00034704) bg_button_pane_cp022_ParamLimits

0x5c72,	// (0x00034713) bg_vkb2_func_pane_cp08_ParamLimits

0xb05a,	// (0x00039afb) bg_vkb2_func_pane_cp06_ParamLimits

0xb22b,	// (0x00039ccc) bg_vkb2_func_pane_cp07_ParamLimits

0x5c82,	// (0x00034723) input_focus_pane_cp09_ParamLimits

0xb6cb,	// (0x0003a16c) cam6_autofocus_pane_ParamLimits

0xb6cb,	// (0x0003a16c) cam6_autofocus_pane

0xb6e7,	// (0x0003a188) cam6_image_uncrop_pane_ParamLimits

0xb6e7,	// (0x0003a188) cam6_image_uncrop_pane

0xb713,	// (0x0003a1b4) cam6_indi_pane_ParamLimits

0xb713,	// (0x0003a1b4) cam6_indi_pane

0xb72d,	// (0x0003a1ce) cam6_mode_pane_ParamLimits

0xb72d,	// (0x0003a1ce) cam6_mode_pane

0xb741,	// (0x0003a1e2) cam6_timer_pane_ParamLimits

0xb741,	// (0x0003a1e2) cam6_timer_pane

0xb755,	// (0x0003a1f6) cam6_zoom_pane_ParamLimits

0xb755,	// (0x0003a1f6) cam6_zoom_pane

0xa5de,	// (0x0003907f) cam6_mode_pane_g1_ParamLimits

0xa5de,	// (0x0003907f) cam6_mode_pane_g1

0xb76e,	// (0x0003a20f) cam6_mode_pane_g2_ParamLimits

0xb76e,	// (0x0003a20f) cam6_mode_pane_g2

0xb77a,	// (0x0003a21b) cam6_mode_pane_g3_ParamLimits

0xb77a,	// (0x0003a21b) cam6_mode_pane_g3

0xb786,	// (0x0003a227) cam6_mode_pane_g4_ParamLimits

0xb786,	// (0x0003a227) cam6_mode_pane_g4

0x0003,

0xfae7,	// (0x0003e588) cam6_mode_pane_g_ParamLimits

0xfae7,	// (0x0003e588) cam6_mode_pane_g

0x3158,	// (0x00031bf9) bg_tb_trans_pane_cp08_ParamLimits

0x3158,	// (0x00031bf9) bg_tb_trans_pane_cp08

0x3166,	// (0x00031c07) cam6_battery_pane_ParamLimits

0x3166,	// (0x00031c07) cam6_battery_pane

0x317c,	// (0x00031c1d) cam6_indi_pane_g1_ParamLimits

0x317c,	// (0x00031c1d) cam6_indi_pane_g1

0x318e,	// (0x00031c2f) cam6_indi_pane_g2_ParamLimits

0x318e,	// (0x00031c2f) cam6_indi_pane_g2

0x31a0,	// (0x00031c41) cam6_indi_pane_g3_ParamLimits

0x31a0,	// (0x00031c41) cam6_indi_pane_g3

0x0002,

0xfaf0,	// (0x0003e591) cam6_indi_pane_g_ParamLimits

0xfaf0,	// (0x0003e591) cam6_indi_pane_g

0x31b2,	// (0x00031c53) cam6_indi_pane_t1_ParamLimits

0x31b2,	// (0x00031c53) cam6_indi_pane_t1

0xa681,	// (0x00039122) cam6_autofocus_pane_g1

0xa689,	// (0x0003912a) cam6_autofocus_pane_g2

0xa691,	// (0x00039132) cam6_autofocus_pane_g3

0xa699,	// (0x0003913a) cam6_autofocus_pane_g4

0x0003,

0xfaf7,	// (0x0003e598) cam6_autofocus_pane_g

0x31d8,	// (0x00031c79) cam6_timer_pane_g1

0x31e0,	// (0x00031c81) cam6_timer_pane_t1

0x31ee,	// (0x00031c8f) cam6_zoom_cont_pane

0x31f6,	// (0x00031c97) cam6_zoom_pane_g1

0x31ff,	// (0x00031ca0) cam6_zoom_pane_g2

0xb792,	// (0x0003a233) cam6_zoom_pane_g3

0x0002,

0xfb00,	// (0x0003e5a1) cam6_zoom_pane_g

0xe343,	// (0x0003cde4) cam6_battery_pane_g1

0xe343,	// (0x0003cde4) cam6_battery_pane_g2

0x0001,

0xf3c9,	// (0x0003de6a) cam6_battery_pane_g

0x31f6,	// (0x00031c97) cam6_zoom_cont_pane_g1

0x31ff,	// (0x00031ca0) cam6_zoom_cont_pane_g2

0x3208,	// (0x00031ca9) cam6_zoom_cont_pane_g3

0x0002,

0xfb07,	// (0x0003e5a8) cam6_zoom_cont_pane_g

0xb7b0,	// (0x0003a251) cam6_mode_pane_cp_ParamLimits

0xb7b0,	// (0x0003a251) cam6_mode_pane_cp

0xb7c4,	// (0x0003a265) cam6_zoom_pane_cp_ParamLimits

0xb7c4,	// (0x0003a265) cam6_zoom_pane_cp

0xb7da,	// (0x0003a27b) vid6_image_uncrop_cif_pane_ParamLimits

0xb7da,	// (0x0003a27b) vid6_image_uncrop_cif_pane

0xb7fc,	// (0x0003a29d) vid6_image_uncrop_nhd_pane_ParamLimits

0xb7fc,	// (0x0003a29d) vid6_image_uncrop_nhd_pane

0xb813,	// (0x0003a2b4) vid6_image_uncrop_vga_pane_ParamLimits

0xb813,	// (0x0003a2b4) vid6_image_uncrop_vga_pane

0xb82a,	// (0x0003a2cb) vid6_image_uncrop_wvga_pane_ParamLimits

0xb82a,	// (0x0003a2cb) vid6_image_uncrop_wvga_pane

0xb841,	// (0x0003a2e2) vid6_indi_pane_ParamLimits

0xb841,	// (0x0003a2e2) vid6_indi_pane

0x3158,	// (0x00031bf9) bg_tb_trans_pane_cp09_ParamLimits

0x3158,	// (0x00031bf9) bg_tb_trans_pane_cp09

0x321c,	// (0x00031cbd) cam6_battery_pane_cp_ParamLimits

0x321c,	// (0x00031cbd) cam6_battery_pane_cp

0x3228,	// (0x00031cc9) vid6_indi_pane_g1_ParamLimits

0x3228,	// (0x00031cc9) vid6_indi_pane_g1

0x323a,	// (0x00031cdb) vid6_indi_pane_g2_ParamLimits

0x323a,	// (0x00031cdb) vid6_indi_pane_g2

0x324c,	// (0x00031ced) vid6_indi_pane_g3_ParamLimits

0x324c,	// (0x00031ced) vid6_indi_pane_g3

0x3261,	// (0x00031d02) vid6_indi_pane_g4_ParamLimits

0x3261,	// (0x00031d02) vid6_indi_pane_g4

0x3276,	// (0x00031d17) vid6_indi_pane_g5_ParamLimits

0x3276,	// (0x00031d17) vid6_indi_pane_g5

0x0004,

0xfb0e,	// (0x0003e5af) vid6_indi_pane_g_ParamLimits

0xfb0e,	// (0x0003e5af) vid6_indi_pane_g

0x3290,	// (0x00031d31) vid6_indi_pane_t1_ParamLimits

0x3290,	// (0x00031d31) vid6_indi_pane_t1

0x32a6,	// (0x00031d47) vid6_indi_pane_t2_ParamLimits

0x32a6,	// (0x00031d47) vid6_indi_pane_t2

0x32ce,	// (0x00031d6f) vid6_indi_pane_t3_ParamLimits

0x32ce,	// (0x00031d6f) vid6_indi_pane_t3

0x32f6,	// (0x00031d97) vid6_indi_pane_t4_ParamLimits

0x32f6,	// (0x00031d97) vid6_indi_pane_t4

0x0003,

0xfb19,	// (0x0003e5ba) vid6_indi_pane_t_ParamLimits

0xfb19,	// (0x0003e5ba) vid6_indi_pane_t

0x331a,	// (0x00031dbb) wait_bar_pane_cp08

0xb861,	// (0x0003a302) main_cset_text2_pane_t1_ParamLimits

0xb861,	// (0x0003a302) main_cset_text2_pane_t1

0xb79b,	// (0x0003a23c) listscroll_gen_pane_cp06_t1_ParamLimits

0xb79b,	// (0x0003a23c) listscroll_gen_pane_cp06_t1

0xd981,	// (0x0003c422) main_cam6_set_pane

0xe07f,	// (0x0003cb20) bg_tb_trans_pane_cp06_ParamLimits

0xa586,	// (0x00039027) cam4_indicators_pane_g1_ParamLimits

0xa596,	// (0x00039037) cam4_indicators_pane_g2_ParamLimits

0xf887,	// (0x0003e328) cam4_indicators_pane_g_ParamLimits

0xa5b6,	// (0x00039057) cam4_indicators_pane_t1_ParamLimits

0xed86,	// (0x0003d827) bg_tb_trans_pane_cp07_ParamLimits

0xa586,	// (0x00039027) vid4_indicators_pane_g1_ParamLimits

0xa62a,	// (0x000390cb) vid4_indicators_pane_g2_ParamLimits

0xa63a,	// (0x000390db) vid4_indicators_pane_g3_ParamLimits

0xa64b,	// (0x000390ec) vid4_indicators_pane_g4_ParamLimits

0xf899,	// (0x0003e33a) vid4_indicators_pane_g_ParamLimits

0xa667,	// (0x00039108) vid4_indicators_pane_t1_ParamLimits

0xb347,	// (0x00039de8) vid4_progress_pane_g1_ParamLimits

0xb356,	// (0x00039df7) vid4_progress_pane_g2_ParamLimits

0xb365,	// (0x00039e06) vid4_progress_pane_g3_ParamLimits

0xb374,	// (0x00039e15) vid4_progress_pane_g4_ParamLimits

0xfa4a,	// (0x0003e4eb) vid4_progress_pane_g_ParamLimits

0xb380,	// (0x00039e21) vid4_progress_pane_t1_ParamLimits

0xb396,	// (0x00039e37) vid4_progress_pane_t2_ParamLimits

0xb3ab,	// (0x00039e4c) vid4_progress_pane_t3_ParamLimits

0xfa55,	// (0x0003e4f6) vid4_progress_pane_t_ParamLimits

0xb3c0,	// (0x00039e61) wait_bar_pane_cp07_ParamLimits

0xb87d,	// (0x0003a31e) main_cam6_set_pane_g2_ParamLimits

0xb87d,	// (0x0003a31e) main_cam6_set_pane_g2

0xb889,	// (0x0003a32a) main_cset6_listscroll_pane_ParamLimits

0xb889,	// (0x0003a32a) main_cset6_listscroll_pane

0xb8b2,	// (0x0003a353) main_cset6_slider_pane_ParamLimits

0xb8b2,	// (0x0003a353) main_cset6_slider_pane

0xb8be,	// (0x0003a35f) main_cset6_text2_pane_ParamLimits

0xb8be,	// (0x0003a35f) main_cset6_text2_pane

0x332a,	// (0x00031dcb) main_cset6_text_pane

0x2a70,	// (0x00031511) main_cset_list_pane_copy1_ParamLimits

0x2a70,	// (0x00031511) main_cset_list_pane_copy1

0x2a80,	// (0x00031521) scroll_pane_cp028_copy1

0xb8d1,	// (0x0003a372) cset_list_set_pane_copy1

0x2b53,	// (0x000315f4) aid_position_infowindow_above_copy1

0x2b5b,	// (0x000315fc) aid_position_infowindow_below_copy1

0x5cc8,	// (0x00034769) cset_list_set_pane_g1_copy1

0x5cd0,	// (0x00034771) cset_list_set_pane_g3_copy1_ParamLimits

0x5cd0,	// (0x00034771) cset_list_set_pane_g3_copy1

0x5cdf,	// (0x00034780) cset_list_set_pane_t1_copy1_ParamLimits

0x5cdf,	// (0x00034780) cset_list_set_pane_t1_copy1

0xed86,	// (0x0003d827) list_highlight_pane_cp021_copy1_ParamLimits

0xed86,	// (0x0003d827) list_highlight_pane_cp021_copy1

0x3332,	// (0x00031dd3) cset6_slider_pane_ParamLimits

0x3332,	// (0x00031dd3) cset6_slider_pane

0x335e,	// (0x00031dff) main_cset6_slider_pane_g1_ParamLimits

0x335e,	// (0x00031dff) main_cset6_slider_pane_g1

0xb8e0,	// (0x0003a381) main_cset6_slider_pane_g2_ParamLimits

0xb8e0,	// (0x0003a381) main_cset6_slider_pane_g2

0x2a95,	// (0x00031536) main_cset6_slider_pane_g3_ParamLimits

0x2a95,	// (0x00031536) main_cset6_slider_pane_g3

0xb908,	// (0x0003a3a9) main_cset6_slider_pane_g4_ParamLimits

0xb908,	// (0x0003a3a9) main_cset6_slider_pane_g4

0xb914,	// (0x0003a3b5) main_cset6_slider_pane_g5_ParamLimits

0xb914,	// (0x0003a3b5) main_cset6_slider_pane_g5

0x2a95,	// (0x00031536) main_cset6_slider_pane_g7_ParamLimits

0x2a95,	// (0x00031536) main_cset6_slider_pane_g7

0x2aa1,	// (0x00031542) main_cset6_slider_pane_g8_ParamLimits

0x2aa1,	// (0x00031542) main_cset6_slider_pane_g8

0xb920,	// (0x0003a3c1) main_cset6_slider_pane_g9_ParamLimits

0xb920,	// (0x0003a3c1) main_cset6_slider_pane_g9

0xb92c,	// (0x0003a3cd) main_cset6_slider_pane_g10_ParamLimits

0xb92c,	// (0x0003a3cd) main_cset6_slider_pane_g10

0xb908,	// (0x0003a3a9) main_cset6_slider_pane_g11_ParamLimits

0xb908,	// (0x0003a3a9) main_cset6_slider_pane_g11

0xb938,	// (0x0003a3d9) main_cset6_slider_pane_g12_ParamLimits

0xb938,	// (0x0003a3d9) main_cset6_slider_pane_g12

0xb944,	// (0x0003a3e5) main_cset6_slider_pane_g13_ParamLimits

0xb944,	// (0x0003a3e5) main_cset6_slider_pane_g13

0xb950,	// (0x0003a3f1) main_cset6_slider_pane_g14_ParamLimits

0xb950,	// (0x0003a3f1) main_cset6_slider_pane_g14

0xb95c,	// (0x0003a3fd) main_cset6_slider_pane_g15_ParamLimits

0xb95c,	// (0x0003a3fd) main_cset6_slider_pane_g15

0xb914,	// (0x0003a3b5) main_cset6_slider_pane_g16_ParamLimits

0xb914,	// (0x0003a3b5) main_cset6_slider_pane_g16

0xb974,	// (0x0003a415) main_cset6_slider_pane_g17_ParamLimits

0xb974,	// (0x0003a415) main_cset6_slider_pane_g17

0x0011,

0xfb22,	// (0x0003e5c3) main_cset6_slider_pane_g_ParamLimits

0xfb22,	// (0x0003e5c3) main_cset6_slider_pane_g

0x3386,	// (0x00031e27) main_cset6_slider_pane_t1_ParamLimits

0x3386,	// (0x00031e27) main_cset6_slider_pane_t1

0xb980,	// (0x0003a421) main_cset6_slider_pane_t2_ParamLimits

0xb980,	// (0x0003a421) main_cset6_slider_pane_t2

0x33c7,	// (0x00031e68) main_cset6_slider_pane_t3_ParamLimits

0x33c7,	// (0x00031e68) main_cset6_slider_pane_t3

0xb9ab,	// (0x0003a44c) main_cset6_slider_pane_t4_ParamLimits

0xb9ab,	// (0x0003a44c) main_cset6_slider_pane_t4

0x33f2,	// (0x00031e93) main_cset6_slider_pane_t5_ParamLimits

0x33f2,	// (0x00031e93) main_cset6_slider_pane_t5

0x341d,	// (0x00031ebe) main_cset6_slider_pane_t7_ParamLimits

0x341d,	// (0x00031ebe) main_cset6_slider_pane_t7

0xb9d6,	// (0x0003a477) main_cset6_slider_pane_t8_ParamLimits

0xb9d6,	// (0x0003a477) main_cset6_slider_pane_t8

0xb9fa,	// (0x0003a49b) main_cset6_slider_pane_t9_ParamLimits

0xb9fa,	// (0x0003a49b) main_cset6_slider_pane_t9

0xba1e,	// (0x0003a4bf) main_cset6_slider_pane_t10_ParamLimits

0xba1e,	// (0x0003a4bf) main_cset6_slider_pane_t10

0xba42,	// (0x0003a4e3) main_cset6_slider_pane_t11_ParamLimits

0xba42,	// (0x0003a4e3) main_cset6_slider_pane_t11

0x3453,	// (0x00031ef4) main_cset6_slider_pane_t14_ParamLimits

0x3453,	// (0x00031ef4) main_cset6_slider_pane_t14

0x348c,	// (0x00031f2d) main_cset6_slider_pane_t15_ParamLimits

0x348c,	// (0x00031f2d) main_cset6_slider_pane_t15

0x000b,

0xfb47,	// (0x0003e5e8) main_cset6_slider_pane_t_ParamLimits

0xfb47,	// (0x0003e5e8) main_cset6_slider_pane_t

0x34c5,	// (0x00031f66) cset_slider_pane_g1_copy1

0x34ce,	// (0x00031f6f) cset_slider_pane_g2_copy1

0x34d7,	// (0x00031f78) cset_slider_pane_g3_copy1

0xd981,	// (0x0003c422) bg_popup_sub_pane_cp011_copy1

0x2c5f,	// (0x00031700) main_cset_text_pane_g1_copy1

0x2c67,	// (0x00031708) main_cset_text_pane_t1_copy1

0x2c75,	// (0x00031716) main_cset_text_pane_t2_copy1

0x2c83,	// (0x00031724) main_cset_text_pane_t3_copy1

0x2c91,	// (0x00031732) main_cset_text_pane_t4_copy1

0x2c9f,	// (0x00031740) main_cset_text_pane_t5_copy1

0x2cad,	// (0x0003174e) main_cset_text_pane_t6_copy1

0x2cbb,	// (0x0003175c) main_cset_text_pane_t7_copy1

0xba66,	// (0x0003a507) main_cset_text2_pane_t1_copy1

0xed86,	// (0x0003d827) main_ncimui_pane

0x8ec4,	// (0x00037965) popup_query_ncimui_window_ParamLimits

0x8ec4,	// (0x00037965) popup_query_ncimui_window

0x590e,	// (0x000343af) field_cale_ev2_pane_g4_ParamLimits

0x590e,	// (0x000343af) field_cale_ev2_pane_g4

0x9f0b,	// (0x000389ac) cell_video_dialer_keypad_pane_g2_ParamLimits

0x9f0b,	// (0x000389ac) cell_video_dialer_keypad_pane_g2

0x0001,

0xf821,	// (0x0003e2c2) cell_video_dialer_keypad_pane_g_ParamLimits

0xf821,	// (0x0003e2c2) cell_video_dialer_keypad_pane_g

0x9f23,	// (0x000389c4) cell_video_dialer_keypad_pane_t1

0xd981,	// (0x0003c422) bg_popup_window_pane_cp012

0x1691,	// (0x00030132) heading_pane_cp06

0x3530,	// (0x00031fd1) ncim_query_content_pane

0xd981,	// (0x0003c422) bg_popup_heading_pane_cp01

0x3538,	// (0x00031fd9) ncim_heading_pane_t1

0x3546,	// (0x00031fe7) ncim_indicator_popup_pane

0x3558,	// (0x00031ff9) ncim_query_button_pane

0x356c,	// (0x0003200d) ncim_query_content_pane_t1

0x357e,	// (0x0003201f) ncim_query_content_pane_t2

0x0005,

0xfb8b,	// (0x0003e62c) ncim_query_content_pane_t

0x35b8,	// (0x00032059) ncim_query_list_pane

0x35ca,	// (0x0003206b) ncim_query_popup_pane

0x3546,	// (0x00031fe7) ncim_indicator_popup_pane_ParamLimits

0xbba7,	// (0x0003a648) ncim_query_content_pane_g1_ParamLimits

0xbba7,	// (0x0003a648) ncim_query_content_pane_g1

0x356c,	// (0x0003200d) ncim_query_content_pane_t1_ParamLimits

0x357e,	// (0x0003201f) ncim_query_content_pane_t2_ParamLimits

0xbbb3,	// (0x0003a654) ncim_query_content_pane_t3_ParamLimits

0xbbb3,	// (0x0003a654) ncim_query_content_pane_t3

0xbbd0,	// (0x0003a671) ncim_query_content_pane_t4_ParamLimits

0xbbd0,	// (0x0003a671) ncim_query_content_pane_t4

0xbbed,	// (0x0003a68e) ncim_query_content_pane_t5_ParamLimits

0xbbed,	// (0x0003a68e) ncim_query_content_pane_t5

0x3590,	// (0x00032031) ncim_query_content_pane_t6_ParamLimits

0x3590,	// (0x00032031) ncim_query_content_pane_t6

0xfb8b,	// (0x0003e62c) ncim_query_content_pane_t_ParamLimits

0x35b8,	// (0x00032059) ncim_query_list_pane_ParamLimits

0x35ca,	// (0x0003206b) ncim_query_popup_pane_ParamLimits

0x35de,	// (0x0003207f) wait_bar_pane_cp04

0xd981,	// (0x0003c422) input_focus_pane_cp011

0x35e6,	// (0x00032087) ncim_query_popup_pane_t1

0x35f4,	// (0x00032095) ncim_list_query_list_pane_ParamLimits

0x35f4,	// (0x00032095) ncim_list_query_list_pane

0xd981,	// (0x0003c422) bg_button_pane_cp027

0x3607,	// (0x000320a8) ncim_query_button_pane_g1

0xd981,	// (0x0003c422) list_highlight_pane_cp012

0x3611,	// (0x000320b2) ncim_list_query_list_pane_g1

0x3619,	// (0x000320ba) ncim_list_query_list_pane_t1

0xa5a6,	// (0x00039047) cam4_indicators_pane_g3_ParamLimits

0xa5a6,	// (0x00039047) cam4_indicators_pane_g3

0xa657,	// (0x000390f8) vid4_indicators_pane_g5_ParamLimits

0xa657,	// (0x000390f8) vid4_indicators_pane_g5

0xe80a,	// (0x0003d2ab) vid4_progress_pane_g5_ParamLimits

0xe80a,	// (0x0003d2ab) vid4_progress_pane_g5

0xba97,	// (0x0003a538) main_ncimui_pane_g1

0xbafd,	// (0x0003a59e) ncimui_group_query_pane_ParamLimits

0xbafd,	// (0x0003a59e) ncimui_group_query_pane

0xbb45,	// (0x0003a5e6) ncimui_list_pane_ParamLimits

0xbb45,	// (0x0003a5e6) ncimui_list_pane

0xbb6a,	// (0x0003a60b) ncimui_text_pane_ParamLimits

0xbb6a,	// (0x0003a60b) ncimui_text_pane

0xbc0a,	// (0x0003a6ab) ncimui_text_pane_t1_ParamLimits

0xbc0a,	// (0x0003a6ab) ncimui_text_pane_t1

0x3630,	// (0x000320d1) ncimui_list_single_graphic_pane_ParamLimits

0x3630,	// (0x000320d1) ncimui_list_single_graphic_pane

0xbc28,	// (0x0003a6c9) ncimui_query_pane_ParamLimits

0xbc28,	// (0x0003a6c9) ncimui_query_pane

0xd981,	// (0x0003c422) list_highlight_pane_cp013

0x3640,	// (0x000320e1) ncim_list_query_list_pane_t1_copy1

0x364e,	// (0x000320ef) ncim_list_single_graphic_pane_g1

0x3656,	// (0x000320f7) ncim_query_button_pane_cp01

0x3662,	// (0x00032103) ncim_query_entry_pane_ParamLimits

0x3662,	// (0x00032103) ncim_query_entry_pane

0x3675,	// (0x00032116) ncimui_query_pane_g1

0x3681,	// (0x00032122) ncimui_query_pane_t1_ParamLimits

0x3681,	// (0x00032122) ncimui_query_pane_t1

0xed86,	// (0x0003d827) input_focus_pane_cp012

0x369a,	// (0x0003213b) ncim_query_entry_pane_t1

0xe0f5,	// (0x0003cb96) main_im_pane_ParamLimits

0xed86,	// (0x0003d827) main_mobtv_pane_ParamLimits

0xed86,	// (0x0003d827) main_mobtv_pane

0xb920,	// (0x0003a3c1) main_cset6_slider_pane_g18_ParamLimits

0xb920,	// (0x0003a3c1) main_cset6_slider_pane_g18

0xb944,	// (0x0003a3e5) main_cset6_slider_pane_g19_ParamLimits

0xb944,	// (0x0003a3e5) main_cset6_slider_pane_g19

0xf00a,	// (0x0003daab) bg_main_mobtv_pane_ParamLimits

0xf00a,	// (0x0003daab) bg_main_mobtv_pane

0xbc38,	// (0x0003a6d9) main_mobtv_info_pane

0xbc41,	// (0x0003a6e2) main_mobtv_loading_pane_ParamLimits

0xbc41,	// (0x0003a6e2) main_mobtv_loading_pane

0x36ac,	// (0x0003214d) main_mobtv_pg_channel_list_pane

0x36b6,	// (0x00032157) main_mobtv_pg_hdr_pane

0xbc4e,	// (0x0003a6ef) main_mobtv_programe_curr_pane_ParamLimits

0xbc4e,	// (0x0003a6ef) main_mobtv_programe_curr_pane

0xbc5b,	// (0x0003a6fc) main_mobtv_programe_next_pane_ParamLimits

0xbc5b,	// (0x0003a6fc) main_mobtv_programe_next_pane

0x36bf,	// (0x00032160) popup_mobtv_noti_window

0xe343,	// (0x0003cde4) main_tv_pg_hdr_pane_g1

0x36c7,	// (0x00032168) main_tv_pg_hdr_pane_g2

0x36cf,	// (0x00032170) main_tv_pg_hdr_pane_g3

0x36d7,	// (0x00032178) main_tv_pg_hdr_pane_g4

0x36df,	// (0x00032180) main_tv_pg_hdr_pane_g5

0x36e7,	// (0x00032188) main_tv_pg_hdr_pane_g6

0x36ef,	// (0x00032190) main_tv_pg_hdr_pane_g7

0x36f7,	// (0x00032198) main_tv_pg_hdr_pane_g8

0x36ff,	// (0x000321a0) main_tv_pg_hdr_pane_g9

0x3707,	// (0x000321a8) main_tv_pg_hdr_pane_g10

0x3711,	// (0x000321b2) main_tv_pg_hdr_pane_g11

0x000a,

0xfb98,	// (0x0003e639) main_tv_pg_hdr_pane_g

0x371b,	// (0x000321bc) main_tv_pg_hdr_pane_t1

0x3729,	// (0x000321ca) main_tv_pg_hdr_pane_t2

0x3737,	// (0x000321d8) main_tv_pg_hdr_pane_t3

0x3745,	// (0x000321e6) main_tv_pg_hdr_pane_t4

0x3753,	// (0x000321f4) main_tv_pg_hdr_pane_t5

0x0004,

0xfbaf,	// (0x0003e650) main_tv_pg_hdr_pane_t

0x3761,	// (0x00032202) single_mobtv_pg_channel_pane_ParamLimits

0x3761,	// (0x00032202) single_mobtv_pg_channel_pane

0x3773,	// (0x00032214) single_mobtv_pg_channel_table_pane

0x377c,	// (0x0003221d) single_mobtv_pg_channel_thumb_pane

0x3785,	// (0x00032226) single_tv_pg_channel_pane_g1

0x378e,	// (0x0003222f) single_tv_pg_channel_pane_g2

0x0001,

0xfbba,	// (0x0003e65b) single_tv_pg_channel_pane_g

0xe07f,	// (0x0003cb20) bg_single_mobtv_pg_channel_thumb_pane_ParamLimits

0xe07f,	// (0x0003cb20) bg_single_mobtv_pg_channel_thumb_pane

0x3797,	// (0x00032238) single_mobtv_pg_channel_thumb_pane_g1_ParamLimits

0x3797,	// (0x00032238) single_mobtv_pg_channel_thumb_pane_g1

0x37a5,	// (0x00032246) single_mobtv_pg_channel_thumb_pane_g2_ParamLimits

0x37a5,	// (0x00032246) single_mobtv_pg_channel_thumb_pane_g2

0x37b1,	// (0x00032252) single_mobtv_pg_channel_thumb_pane_g3_ParamLimits

0x37b1,	// (0x00032252) single_mobtv_pg_channel_thumb_pane_g3

0x0002,

0xfbbf,	// (0x0003e660) single_mobtv_pg_channel_thumb_pane_g_ParamLimits

0xfbbf,	// (0x0003e660) single_mobtv_pg_channel_thumb_pane_g

0x37bd,	// (0x0003225e) single_mobtv_pg_channel_thumb_pane_t1

0x37cb,	// (0x0003226c) single_mobtv_pg_channel_thumb_pane_t2

0x0001,

0xfbc6,	// (0x0003e667) single_mobtv_pg_channel_thumb_pane_t

0xe343,	// (0x0003cde4) bg_single_mobtv_pg_channel_table_pane_g1

0xe343,	// (0x0003cde4) bg_single_mobtv_pg_channel_table_pane_g2

0x0001,

0xf3c9,	// (0x0003de6a) bg_single_mobtv_pg_channel_table_pane_g

0x37d9,	// (0x0003227a) single_mobtv_pg_channel_table_pane_t1

0x37e7,	// (0x00032288) single_mobtv_pg_channel_table_pane_t2

0x0001,

0xfbcb,	// (0x0003e66c) single_mobtv_pg_channel_table_pane_t

0xbc70,	// (0x0003a711) main_mobtv_info_pane_g1_ParamLimits

0xbc70,	// (0x0003a711) main_mobtv_info_pane_g1

0xbc8c,	// (0x0003a72d) main_mobtv_info_pane_t1_ParamLimits

0xbc8c,	// (0x0003a72d) main_mobtv_info_pane_t1

0xbcf2,	// (0x0003a793) main_mobtv_info_pane_t2_ParamLimits

0xbcf2,	// (0x0003a793) main_mobtv_info_pane_t2

0x0002,

0xfbd5,	// (0x0003e676) main_mobtv_info_pane_t_ParamLimits

0xfbd5,	// (0x0003e676) main_mobtv_info_pane_t

0xbd75,	// (0x0003a816) wait_bar_pane_cp05

0xbd85,	// (0x0003a826) main_mobtv_loading_pane_g1_ParamLimits

0xbd85,	// (0x0003a826) main_mobtv_loading_pane_g1

0xbd91,	// (0x0003a832) main_mobtv_loading_pane_g2_ParamLimits

0xbd91,	// (0x0003a832) main_mobtv_loading_pane_g2

0xbd9d,	// (0x0003a83e) main_mobtv_loading_pane_g3_ParamLimits

0xbd9d,	// (0x0003a83e) main_mobtv_loading_pane_g3

0x0002,

0xfbdc,	// (0x0003e67d) main_mobtv_loading_pane_g_ParamLimits

0xfbdc,	// (0x0003e67d) main_mobtv_loading_pane_g

0x37f5,	// (0x00032296) main_mobtv_loading_pane_t1_ParamLimits

0x37f5,	// (0x00032296) main_mobtv_loading_pane_t1

0x380d,	// (0x000322ae) main_mobtv_loading_pane_t2_ParamLimits

0x380d,	// (0x000322ae) main_mobtv_loading_pane_t2

0x0001,

0xfbe3,	// (0x0003e684) main_mobtv_loading_pane_t_ParamLimits

0xfbe3,	// (0x0003e684) main_mobtv_loading_pane_t

0xbda9,	// (0x0003a84a) wait_bar_pane_cp06_ParamLimits

0xbda9,	// (0x0003a84a) wait_bar_pane_cp06

0x3831,	// (0x000322d2) main_mobtv_programe_curr_pane_t1

0x383f,	// (0x000322e0) main_mobtv_programe_curr_pane_t2

0x0001,

0xfbe8,	// (0x0003e689) main_mobtv_programe_curr_pane_t

0x384d,	// (0x000322ee) main_mobtv_programe_next_pane_t1

0x385b,	// (0x000322fc) main_mobtv_programe_next_pane_t2

0x3869,	// (0x0003230a) main_mobtv_programe_next_pane_t3

0x0002,

0xfbed,	// (0x0003e68e) main_mobtv_programe_next_pane_t

0xd981,	// (0x0003c422) bg_popup_mobtv_noti_window_pane

0x3877,	// (0x00032318) popup_mobtv_noti_window_g1

0x387f,	// (0x00032320) popup_mobtv_noti_window_t1

0x388d,	// (0x0003232e) popup_mobtv_noti_window_t2

0x0001,

0xfbf4,	// (0x0003e695) popup_mobtv_noti_window_t

0xe343,	// (0x0003cde4) bg_popup_mobtv_noti_window_pane_g1

0xd981,	// (0x0003c422) sc_clock_pane

0xd981,	// (0x0003c422) main_fs_bigclock_pane

0xb580,	// (0x0003a021) blid2_tripm_pane_t4_ParamLimits

0xb580,	// (0x0003a021) blid2_tripm_pane_t4

0xbdb5,	// (0x0003a856) sc_clock_pane_g1_ParamLimits

0xbdb5,	// (0x0003a856) sc_clock_pane_g1

0xbdc3,	// (0x0003a864) sc_clock_pane_t1_ParamLimits

0xbdc3,	// (0x0003a864) sc_clock_pane_t1

0xbdd6,	// (0x0003a877) sc_clock_pane_t2_ParamLimits

0xbdd6,	// (0x0003a877) sc_clock_pane_t2

0xbde8,	// (0x0003a889) sc_clock_pane_t3_ParamLimits

0xbde8,	// (0x0003a889) sc_clock_pane_t3

0x0004,

0xfbf9,	// (0x0003e69a) sc_clock_pane_t_ParamLimits

0xfbf9,	// (0x0003e69a) sc_clock_pane_t

0xc634,	// (0x0003b0d5) main_fs_bigclock_indicator_pane_ParamLimits

0xc634,	// (0x0003b0d5) main_fs_bigclock_indicator_pane

0xbe63,	// (0x0003a904) main_fs_bigclock_pane_g1_ParamLimits

0xbe63,	// (0x0003a904) main_fs_bigclock_pane_g1

0xc640,	// (0x0003b0e1) main_fs_bigclock_pane_t1_ParamLimits

0xc640,	// (0x0003b0e1) main_fs_bigclock_pane_t1

0xc652,	// (0x0003b0f3) main_fs_bigclock_pane_t2_ParamLimits

0xc652,	// (0x0003b0f3) main_fs_bigclock_pane_t2

0xc664,	// (0x0003b105) main_fs_bigclock_pane_t3_ParamLimits

0xc664,	// (0x0003b105) main_fs_bigclock_pane_t3

0x0002,

0xfdc2,	// (0x0003e863) main_fs_bigclock_pane_t_ParamLimits

0xfdc2,	// (0x0003e863) main_fs_bigclock_pane_t

0x4301,	// (0x00032da2) main_fs_bigclock_indicator_pane_g1

0x3560,	// (0x00032001) ncim_query_content_pane_g2_ParamLimits

0x3560,	// (0x00032001) ncim_query_content_pane_g2

0x0001,

0xfb86,	// (0x0003e627) ncim_query_content_pane_g_ParamLimits

0xfb86,	// (0x0003e627) ncim_query_content_pane_g

0xbdfa,	// (0x0003a89b) sc_clock_pane_t4_ParamLimits

0xbdfa,	// (0x0003a89b) sc_clock_pane_t4

0xed86,	// (0x0003d827) main_radioblah_pane

0xa453,	// (0x00038ef4) cell_call4_button_pane_t1_copy1_ParamLimits

0xa453,	// (0x00038ef4) cell_call4_button_pane_t1_copy1

0xbaaf,	// (0x0003a550) main_ncimui_pane_t1_ParamLimits

0xbaaf,	// (0x0003a550) main_ncimui_pane_t1

0xbac9,	// (0x0003a56a) main_ncimui_pane_t2_ParamLimits

0xbac9,	// (0x0003a56a) main_ncimui_pane_t2

0x0002,

0xfb7f,	// (0x0003e620) main_ncimui_pane_t_ParamLimits

0xfb7f,	// (0x0003e620) main_ncimui_pane_t

0x39ce,	// (0x0003246f) main_radioblah_anim_pane_ParamLimits

0x39ce,	// (0x0003246f) main_radioblah_anim_pane

0x39df,	// (0x00032480) main_radioblah_info_pane_ParamLimits

0x39df,	// (0x00032480) main_radioblah_info_pane

0x39f3,	// (0x00032494) main_radioblah_pane_t1_ParamLimits

0x39f3,	// (0x00032494) main_radioblah_pane_t1

0x3a0f,	// (0x000324b0) main_radioblah_pane_t2_ParamLimits

0x3a0f,	// (0x000324b0) main_radioblah_pane_t2

0x0003,

0xfc1a,	// (0x0003e6bb) main_radioblah_pane_t_ParamLimits

0xfc1a,	// (0x0003e6bb) main_radioblah_pane_t

0xbeab,	// (0x0003a94c) main_radioblah_rocker_ctrl_pane_ParamLimits

0xbeab,	// (0x0003a94c) main_radioblah_rocker_ctrl_pane

0x3a57,	// (0x000324f8) main_radioblah_info_pane_t1_ParamLimits

0x3a57,	// (0x000324f8) main_radioblah_info_pane_t1

0xbef0,	// (0x0003a991) main_radioblah_info_pane_t2_ParamLimits

0xbef0,	// (0x0003a991) main_radioblah_info_pane_t2

0x0003,

0xfc23,	// (0x0003e6c4) main_radioblah_info_pane_t_ParamLimits

0xfc23,	// (0x0003e6c4) main_radioblah_info_pane_t

0xe343,	// (0x0003cde4) main_radioblah_rocker_ctrl_pane_g1

0xbf98,	// (0x0003aa39) main_radioblah_rocker_ctrl_pane_g2

0xbfa0,	// (0x0003aa41) main_radioblah_rocker_ctrl_pane_g3

0xbfa8,	// (0x0003aa49) main_radioblah_rocker_ctrl_pane_g4

0xbfb0,	// (0x0003aa51) main_radioblah_rocker_ctrl_pane_g5

0xbfb8,	// (0x0003aa59) main_radioblah_rocker_ctrl_pane_g6

0x0005,

0xfc2c,	// (0x0003e6cd) main_radioblah_rocker_ctrl_pane_g

0xba66,	// (0x0003a507) main_cset_text2_pane_t1_copy1_ParamLimits

0xa4d6,	// (0x00038f77) cam4_image_uncrop_qvga_pane

0xa5ea,	// (0x0003908b) vid4_image_uncrop_qcif_pane

0xb707,	// (0x0003a1a8) cam6_image_uncrop_qvga_pane_ParamLimits

0xb707,	// (0x0003a1a8) cam6_image_uncrop_qvga_pane

0x3210,	// (0x00031cb1) vid6_image_uncrop_qcif_pane_ParamLimits

0x3210,	// (0x00031cb1) vid6_image_uncrop_qcif_pane

0xd981,	// (0x0003c422) bg_popup_preview_window_pane_cp03

0x3506,	// (0x00031fa7) list_cset_text2_pane

0x350e,	// (0x00031faf) main_cset6_text2_pane_g1

0x3516,	// (0x00031fb7) main_cset6_text2_pane_t1

0x46e2,	// (0x00033183) list_cset_text2_pane_t1_ParamLimits

0x46e2,	// (0x00033183) list_cset_text2_pane_t1

0xed86,	// (0x0003d827) main_radioblah_pane_ParamLimits

0xbd63,	// (0x0003a804) main_mobtv_info_pane_t3_ParamLimits

0xbd63,	// (0x0003a804) main_mobtv_info_pane_t3

0xbe99,	// (0x0003a93a) main_radioblah_pane_g1

0xbec4,	// (0x0003a965) main_radioblah_info_pane_g1

0xbf3f,	// (0x0003a9e0) main_radioblah_info_pane_t3_ParamLimits

0xbf3f,	// (0x0003a9e0) main_radioblah_info_pane_t3

0x80d4,	// (0x00036b75) highlight_cell_cale_month_pane_ParamLimits

0x80d4,	// (0x00036b75) highlight_cell_cale_month_pane

0xd981,	// (0x0003c422) main_phob_fisheye_pane

0x1fc2,	// (0x00030a63) scroll_pane_cp0031_ParamLimits

0x1fc2,	// (0x00030a63) scroll_pane_cp0031

0x331a,	// (0x00031dbb) wait_bar_pane_cp08_ParamLimits

0xb8d1,	// (0x0003a372) cset_list_set_pane_copy1_ParamLimits

0x3a91,	// (0x00032532) highlight_cell_cale_month_pane_g1

0xbfc0,	// (0x0003aa61) highlight_cell_cale_month_pane_t1

0x3a99,	// (0x0003253a) list_gen_pane_cp01

0x2a80,	// (0x00031521) scroll_pane_01

0xf04a,	// (0x0003daeb) list_single_double_fisheye_pane

0x5d24,	// (0x000347c5) list_double_fisheye_pane_g1_ParamLimits

0x5d24,	// (0x000347c5) list_double_fisheye_pane_g1

0x5d30,	// (0x000347d1) list_double_fisheye_pane_g2_ParamLimits

0x5d30,	// (0x000347d1) list_double_fisheye_pane_g2

0xf053,	// (0x0003daf4) list_double_fisheye_pane_g3_ParamLimits

0xf053,	// (0x0003daf4) list_double_fisheye_pane_g3

0x0004,

0xfc39,	// (0x0003e6da) list_double_fisheye_pane_g_ParamLimits

0xfc39,	// (0x0003e6da) list_double_fisheye_pane_g

0x5d61,	// (0x00034802) list_double_fisheye_pane_t1_ParamLimits

0x5d61,	// (0x00034802) list_double_fisheye_pane_t1

0x5d7c,	// (0x0003481d) list_double_fisheye_pane_t2_ParamLimits

0x5d7c,	// (0x0003481d) list_double_fisheye_pane_t2

0x0001,

0xfc44,	// (0x0003e6e5) list_double_fisheye_pane_t_ParamLimits

0xfc44,	// (0x0003e6e5) list_double_fisheye_pane_t

0xd981,	// (0x0003c422) main_call5_pane

0xbe20,	// (0x0003a8c1) sc_swipe_pane_ParamLimits

0xbe20,	// (0x0003a8c1) sc_swipe_pane

0xbfda,	// (0x0003aa7b) call5_image_pane_ParamLimits

0xbfda,	// (0x0003aa7b) call5_image_pane

0xbfe6,	// (0x0003aa87) call5_swipe_1_pane_ParamLimits

0xbfe6,	// (0x0003aa87) call5_swipe_1_pane

0xbff2,	// (0x0003aa93) call5_swipe_2_pane_ParamLimits

0xbff2,	// (0x0003aa93) call5_swipe_2_pane

0xc00a,	// (0x0003aaab) popup_call5_audio_first_window_ParamLimits

0xc00a,	// (0x0003aaab) popup_call5_audio_first_window

0xe07f,	// (0x0003cb20) call5_swipe_1_pane_g1_ParamLimits

0xe07f,	// (0x0003cb20) call5_swipe_1_pane_g1

0x3aa2,	// (0x00032543) call5_swipe_1_pane_g2_ParamLimits

0x3aa2,	// (0x00032543) call5_swipe_1_pane_g2

0x0001,

0xfc49,	// (0x0003e6ea) call5_swipe_1_pane_g_ParamLimits

0xfc49,	// (0x0003e6ea) call5_swipe_1_pane_g

0x3aae,	// (0x0003254f) call5_swipe_1_pane_t1_ParamLimits

0x3aae,	// (0x0003254f) call5_swipe_1_pane_t1

0xe07f,	// (0x0003cb20) call5_swipe_2_pane_g1_ParamLimits

0xe07f,	// (0x0003cb20) call5_swipe_2_pane_g1

0x3ac3,	// (0x00032564) call5_swipe_2_pane_g2_ParamLimits

0x3ac3,	// (0x00032564) call5_swipe_2_pane_g2

0x0001,

0xfc4e,	// (0x0003e6ef) call5_swipe_2_pane_g_ParamLimits

0xfc4e,	// (0x0003e6ef) call5_swipe_2_pane_g

0x3acf,	// (0x00032570) call5_swipe_2_pane_t1_ParamLimits

0x3acf,	// (0x00032570) call5_swipe_2_pane_t1

0x3ae4,	// (0x00032585) sc_swipe_pane_g1_ParamLimits

0x3ae4,	// (0x00032585) sc_swipe_pane_g1

0x3af1,	// (0x00032592) sc_swipe_pane_g2_ParamLimits

0x3af1,	// (0x00032592) sc_swipe_pane_g2

0x0001,

0xfc53,	// (0x0003e6f4) sc_swipe_pane_g_ParamLimits

0xfc53,	// (0x0003e6f4) sc_swipe_pane_g

0x3afd,	// (0x0003259e) sc_swipe_pane_t1_ParamLimits

0x3afd,	// (0x0003259e) sc_swipe_pane_t1

0xd981,	// (0x0003c422) main_cmail_launcher_pane

0xc016,	// (0x0003aab7) aid_size_cell_cmail_l_ParamLimits

0xc016,	// (0x0003aab7) aid_size_cell_cmail_l

0xc026,	// (0x0003aac7) grid_cmail_l_pane_ParamLimits

0xc026,	// (0x0003aac7) grid_cmail_l_pane

0xc032,	// (0x0003aad3) cell_cmail_l_pane_ParamLimits

0xc032,	// (0x0003aad3) cell_cmail_l_pane

0xc044,	// (0x0003aae5) cell_cmail_l_pane_g1_ParamLimits

0xc044,	// (0x0003aae5) cell_cmail_l_pane_g1

0xc054,	// (0x0003aaf5) cell_cmail_l_pane_t1_ParamLimits

0xc054,	// (0x0003aaf5) cell_cmail_l_pane_t1

0x3b12,	// (0x000325b3) cell_cmail_l_pane_t2_ParamLimits

0x3b12,	// (0x000325b3) cell_cmail_l_pane_t2

0x0001,

0xfc58,	// (0x0003e6f9) cell_cmail_l_pane_t_ParamLimits

0xfc58,	// (0x0003e6f9) cell_cmail_l_pane_t

0xed86,	// (0x0003d827) grid_highlight_pane_cp018_ParamLimits

0xed86,	// (0x0003d827) grid_highlight_pane_cp018

0x65bb,	// (0x0003505c) main2_pane_ParamLimits

0x65bb,	// (0x0003505c) main2_pane

0xe196,	// (0x0003cc37) popup_sp_fs_action_menu_bg_pane_g1

0xe19e,	// (0x0003cc3f) popup_sp_fs_action_menu_bg_pane_g2

0xe1a6,	// (0x0003cc47) popup_sp_fs_action_menu_bg_pane_g3

0xe1ae,	// (0x0003cc4f) popup_sp_fs_action_menu_bg_pane_g4

0xe1b6,	// (0x0003cc57) popup_sp_fs_action_menu_bg_pane_g5

0xe1be,	// (0x0003cc5f) popup_sp_fs_action_menu_bg_pane_g6

0xe1c6,	// (0x0003cc67) popup_sp_fs_action_menu_bg_pane_g7

0xe1ce,	// (0x0003cc6f) popup_sp_fs_action_menu_bg_pane_g8

0xe1d6,	// (0x0003cc77) popup_sp_fs_action_menu_bg_pane_g9

0xe1de,	// (0x0003cc7f) popup_sp_fs_action_menu_bg_pane_g10

0xe1de,	// (0x0003cc7f) popup_sp_fs_action_menu_bg_pane_g11

0x000a,

0xf11f,	// (0x0003dbc0) popup_sp_fs_action_menu_bg_pane_g

0x57a2,	// (0x00034243) list_medium_line_x2_t3_g3_g1_ParamLimits

0x57a2,	// (0x00034243) list_medium_line_x2_t3_g3_g1

0x57ae,	// (0x0003424f) list_medium_line_x2_t3_g3_g2_ParamLimits

0x57ae,	// (0x0003424f) list_medium_line_x2_t3_g3_g2

0x57a2,	// (0x00034243) list_medium_line_x2_t3_g3_g3_ParamLimits

0x57a2,	// (0x00034243) list_medium_line_x2_t3_g3_g3

0x0002,

0xf1cd,	// (0x0003dc6e) list_medium_line_x2_t3_g3_g_ParamLimits

0xf1cd,	// (0x0003dc6e) list_medium_line_x2_t3_g3_g

0x57ba,	// (0x0003425b) list_medium_line_x2_t3_g3_t1_ParamLimits

0x57ba,	// (0x0003425b) list_medium_line_x2_t3_g3_t1

0x57ba,	// (0x0003425b) list_medium_line_x2_t3_g3_t2_ParamLimits

0x57ba,	// (0x0003425b) list_medium_line_x2_t3_g3_t2

0x57cd,	// (0x0003426e) list_medium_line_x2_t3_g3_t3_ParamLimits

0x57cd,	// (0x0003426e) list_medium_line_x2_t3_g3_t3

0x0002,

0xf1d4,	// (0x0003dc75) list_medium_line_x2_t3_g3_t_ParamLimits

0xf1d4,	// (0x0003dc75) list_medium_line_x2_t3_g3_t

0x57a2,	// (0x00034243) list_medium_line_x2_t3_g2_g1_ParamLimits

0x57a2,	// (0x00034243) list_medium_line_x2_t3_g2_g1

0x57a2,	// (0x00034243) list_medium_line_x2_t3_g2_g2_ParamLimits

0x57a2,	// (0x00034243) list_medium_line_x2_t3_g2_g2

0x0001,

0xf1db,	// (0x0003dc7c) list_medium_line_x2_t3_g2_g_ParamLimits

0xf1db,	// (0x0003dc7c) list_medium_line_x2_t3_g2_g

0x57ba,	// (0x0003425b) list_medium_line_x2_t3_g2_t1_ParamLimits

0x57ba,	// (0x0003425b) list_medium_line_x2_t3_g2_t1

0x57ba,	// (0x0003425b) list_medium_line_x2_t3_g2_t2_ParamLimits

0x57ba,	// (0x0003425b) list_medium_line_x2_t3_g2_t2

0x57cd,	// (0x0003426e) list_medium_line_x2_t3_g2_t3_ParamLimits

0x57cd,	// (0x0003426e) list_medium_line_x2_t3_g2_t3

0x0002,

0xf1d4,	// (0x0003dc75) list_medium_line_x2_t3_g2_t_ParamLimits

0xf1d4,	// (0x0003dc75) list_medium_line_x2_t3_g2_t

0x57a2,	// (0x00034243) list_medium_line_x2_t4_g4_g1_ParamLimits

0x57a2,	// (0x00034243) list_medium_line_x2_t4_g4_g1

0x57ae,	// (0x0003424f) list_medium_line_x2_t4_g4_g2_ParamLimits

0x57ae,	// (0x0003424f) list_medium_line_x2_t4_g4_g2

0x57ae,	// (0x0003424f) list_medium_line_x2_t4_g4_g3_ParamLimits

0x57ae,	// (0x0003424f) list_medium_line_x2_t4_g4_g3

0x57a2,	// (0x00034243) list_medium_line_x2_t4_g4_g4_ParamLimits

0x57a2,	// (0x00034243) list_medium_line_x2_t4_g4_g4

0x0003,

0xf1e0,	// (0x0003dc81) list_medium_line_x2_t4_g4_g_ParamLimits

0xf1e0,	// (0x0003dc81) list_medium_line_x2_t4_g4_g

0x57ba,	// (0x0003425b) list_medium_line_x2_t4_g4_t1_ParamLimits

0x57ba,	// (0x0003425b) list_medium_line_x2_t4_g4_t1

0x57ba,	// (0x0003425b) list_medium_line_x2_t4_g4_t2_ParamLimits

0x57ba,	// (0x0003425b) list_medium_line_x2_t4_g4_t2

0x57ba,	// (0x0003425b) list_medium_line_x2_t4_g4_t3_ParamLimits

0x57ba,	// (0x0003425b) list_medium_line_x2_t4_g4_t3

0x57cd,	// (0x0003426e) list_medium_line_x2_t4_g4_t4_ParamLimits

0x57cd,	// (0x0003426e) list_medium_line_x2_t4_g4_t4

0x0003,

0xf1e9,	// (0x0003dc8a) list_medium_line_x2_t4_g4_t_ParamLimits

0xf1e9,	// (0x0003dc8a) list_medium_line_x2_t4_g4_t

0x57a2,	// (0x00034243) list_medium_line_x2_t2_g4_g1_ParamLimits

0x57a2,	// (0x00034243) list_medium_line_x2_t2_g4_g1

0x57ae,	// (0x0003424f) list_medium_line_x2_t2_g4_g2_ParamLimits

0x57ae,	// (0x0003424f) list_medium_line_x2_t2_g4_g2

0x57ae,	// (0x0003424f) list_medium_line_x2_t2_g4_g3_ParamLimits

0x57ae,	// (0x0003424f) list_medium_line_x2_t2_g4_g3

0x57a2,	// (0x00034243) list_medium_line_x2_t2_g4_g4_ParamLimits

0x57a2,	// (0x00034243) list_medium_line_x2_t2_g4_g4

0x0003,

0xf1e0,	// (0x0003dc81) list_medium_line_x2_t2_g4_g_ParamLimits

0xf1e0,	// (0x0003dc81) list_medium_line_x2_t2_g4_g

0x57ba,	// (0x0003425b) list_medium_line_x2_t2_g4_t1_ParamLimits

0x57ba,	// (0x0003425b) list_medium_line_x2_t2_g4_t1

0x57cd,	// (0x0003426e) list_medium_line_x2_t2_g4_t2_ParamLimits

0x57cd,	// (0x0003426e) list_medium_line_x2_t2_g4_t2

0x0001,

0xf250,	// (0x0003dcf1) list_medium_line_x2_t2_g4_t_ParamLimits

0xf250,	// (0x0003dcf1) list_medium_line_x2_t2_g4_t

0x57a2,	// (0x00034243) list_medium_line_x2_t2_g3_g1_ParamLimits

0x57a2,	// (0x00034243) list_medium_line_x2_t2_g3_g1

0x57ae,	// (0x0003424f) list_medium_line_x2_t2_g3_g2_ParamLimits

0x57ae,	// (0x0003424f) list_medium_line_x2_t2_g3_g2

0x57a2,	// (0x00034243) list_medium_line_x2_t2_g3_g3_ParamLimits

0x57a2,	// (0x00034243) list_medium_line_x2_t2_g3_g3

0x0002,

0xf1cd,	// (0x0003dc6e) list_medium_line_x2_t2_g3_g_ParamLimits

0xf1cd,	// (0x0003dc6e) list_medium_line_x2_t2_g3_g

0x57ba,	// (0x0003425b) list_medium_line_x2_t2_g3_t1_ParamLimits

0x57ba,	// (0x0003425b) list_medium_line_x2_t2_g3_t1

0x57cd,	// (0x0003426e) list_medium_line_x2_t2_g3_t2_ParamLimits

0x57cd,	// (0x0003426e) list_medium_line_x2_t2_g3_t2

0x0001,

0xf250,	// (0x0003dcf1) list_medium_line_x2_t2_g3_t_ParamLimits

0xf250,	// (0x0003dcf1) list_medium_line_x2_t2_g3_t

0x8266,	// (0x00036d07) main_sp_fs_list_pane_ParamLimits

0x8266,	// (0x00036d07) main_sp_fs_list_pane

0x8273,	// (0x00036d14) sp_fs_scroll_pane_ParamLimits

0x8273,	// (0x00036d14) sp_fs_scroll_pane

0x57e0,	// (0x00034281) list_medium_line_x2_t3_t1

0x57e0,	// (0x00034281) list_medium_line_x2_t3_t2

0x57ef,	// (0x00034290) list_medium_line_x2_t3_t3

0x0002,

0xf29b,	// (0x0003dd3c) list_medium_line_x2_t3_t

0x57e0,	// (0x00034281) list_medium_line_x3_t4_t1

0x57e0,	// (0x00034281) list_medium_line_x3_t4_t2

0x57e0,	// (0x00034281) list_medium_line_x3_t4_t3

0x57e0,	// (0x00034281) list_medium_line_x3_t4_t4

0x0003,

0xf2a2,	// (0x0003dd43) list_medium_line_x3_t4_t

0x57e0,	// (0x00034281) list_medium_line_x4_t5_t1

0x57e0,	// (0x00034281) list_medium_line_x4_t5_t2

0x57e0,	// (0x00034281) list_medium_line_x4_t5_t3

0x57e0,	// (0x00034281) list_medium_line_x4_t5_t4

0x57e0,	// (0x00034281) list_medium_line_x4_t5_t5

0x0004,

0xf2ab,	// (0x0003dd4c) list_medium_line_x4_t5_t

0x57a2,	// (0x00034243) list_medium_line_t4_g4_g1_ParamLimits

0x57a2,	// (0x00034243) list_medium_line_t4_g4_g1

0x57a2,	// (0x00034243) list_medium_line_t4_g4_g2_ParamLimits

0x57a2,	// (0x00034243) list_medium_line_t4_g4_g2

0x57a2,	// (0x00034243) list_medium_line_t4_g4_g3_ParamLimits

0x57a2,	// (0x00034243) list_medium_line_t4_g4_g3

0x57a2,	// (0x00034243) list_medium_line_t4_g4_g4_ParamLimits

0x57a2,	// (0x00034243) list_medium_line_t4_g4_g4

0x0003,

0xf2b6,	// (0x0003dd57) list_medium_line_t4_g4_g_ParamLimits

0xf2b6,	// (0x0003dd57) list_medium_line_t4_g4_g

0x57ba,	// (0x0003425b) list_medium_line_t4_g4_t1_ParamLimits

0x57ba,	// (0x0003425b) list_medium_line_t4_g4_t1

0x57ba,	// (0x0003425b) list_medium_line_t4_g4_t2_ParamLimits

0x57ba,	// (0x0003425b) list_medium_line_t4_g4_t2

0x57ba,	// (0x0003425b) list_medium_line_t4_g4_t3_ParamLimits

0x57ba,	// (0x0003425b) list_medium_line_t4_g4_t3

0x57ba,	// (0x0003425b) list_medium_line_t4_g4_t4_ParamLimits

0x57ba,	// (0x0003425b) list_medium_line_t4_g4_t4

0x0003,

0xf2bf,	// (0x0003dd60) list_medium_line_t4_g4_t_ParamLimits

0xf2bf,	// (0x0003dd60) list_medium_line_t4_g4_t

0x836b,	// (0x00036e0c) chi_dic_find_pane_g1

0x8e87,	// (0x00037928) main_tport_pane

0x57e0,	// (0x00034281) list_medium_line_plain_t1

0x57a2,	// (0x00034243) list_medium_line_t2_g2_g1_ParamLimits

0x57a2,	// (0x00034243) list_medium_line_t2_g2_g1

0x5a8c,	// (0x0003452d) list_medium_line_t2_g2_g2_ParamLimits

0x5a8c,	// (0x0003452d) list_medium_line_t2_g2_g2

0x0001,

0xf990,	// (0x0003e431) list_medium_line_t2_g2_g_ParamLimits

0xf990,	// (0x0003e431) list_medium_line_t2_g2_g

0x57ba,	// (0x0003425b) list_medium_line_t2_g2_t1_ParamLimits

0x57ba,	// (0x0003425b) list_medium_line_t2_g2_t1

0x57ba,	// (0x0003425b) list_medium_line_t2_g2_t2_ParamLimits

0x57ba,	// (0x0003425b) list_medium_line_t2_g2_t2

0x0001,

0xf995,	// (0x0003e436) list_medium_line_t2_g2_t_ParamLimits

0xf995,	// (0x0003e436) list_medium_line_t2_g2_t

0x5c92,	// (0x00034733) aid_sp_fs_list_icon_a_sm

0x5c9a,	// (0x0003473b) aid_sp_fs_list_icon_d

0x5ca2,	// (0x00034743) aid_sp_fs_text_primary

0x5cab,	// (0x0003474c) aid_sp_fs_text_secondary

0xb3d0,	// (0x00039e71) list_medium_line

0xb3d0,	// (0x00039e71) list_medium_line_g2

0xb3d0,	// (0x00039e71) list_medium_line_g3

0xb3d0,	// (0x00039e71) list_medium_line_plain

0xb3d0,	// (0x00039e71) list_medium_line_plain_t2

0xb3d0,	// (0x00039e71) list_medium_line_plain_t3

0xb3d0,	// (0x00039e71) list_medium_line_right_icon

0xb3d0,	// (0x00039e71) list_medium_line_right_iconx2

0xb3d0,	// (0x00039e71) list_medium_line_t2

0xb3d0,	// (0x00039e71) list_medium_line_t2_g2

0xb3d0,	// (0x00039e71) list_medium_line_t2_g3

0xb3d0,	// (0x00039e71) list_medium_line_t2_right_icon

0xb3d0,	// (0x00039e71) list_medium_line_t2_right_iconx2

0xb3d0,	// (0x00039e71) list_medium_line_t3

0xb3d0,	// (0x00039e71) list_medium_line_t3_g2

0xb3d0,	// (0x00039e71) list_medium_line_t3_g3

0xb3d0,	// (0x00039e71) list_medium_line_t3_right_iconx2

0xf038,	// (0x0003dad9) list_medium_line_t4_g4

0x2fe6,	// (0x00031a87) list_medium_line_x2

0x2fe6,	// (0x00031a87) list_medium_line_x2_t2_g2

0x2fe6,	// (0x00031a87) list_medium_line_x2_t2_g3

0x2fe6,	// (0x00031a87) list_medium_line_x2_t2_g4

0x2fe6,	// (0x00031a87) list_medium_line_x2_t3

0x2fe6,	// (0x00031a87) list_medium_line_x2_t3_g2

0x2fe6,	// (0x00031a87) list_medium_line_x2_t3_g3

0x2fe6,	// (0x00031a87) list_medium_line_x2_t3_g4

0x2fe6,	// (0x00031a87) list_medium_line_x2_t4_g2

0x2fe6,	// (0x00031a87) list_medium_line_x2_t4_g4

0xf041,	// (0x0003dae2) list_medium_line_x3

0xf041,	// (0x0003dae2) list_medium_line_x3_t4

0xf041,	// (0x0003dae2) list_medium_line_x3_t4_g4

0xf038,	// (0x0003dad9) list_medium_line_x4_t4

0xf038,	// (0x0003dad9) list_medium_line_x4_t4_g7

0xf038,	// (0x0003dad9) list_medium_line_x4_t5

0x5cb4,	// (0x00034755) list_single_fs_dyc_pane_ParamLimits

0x5cb4,	// (0x00034755) list_single_fs_dyc_pane

0x57a2,	// (0x00034243) list_medium_line_x4_t4_g7_g1_ParamLimits

0x57a2,	// (0x00034243) list_medium_line_x4_t4_g7_g1

0xe07f,	// (0x0003cb20) list_medium_line_x4_t4_g7_g2_ParamLimits

0xe07f,	// (0x0003cb20) list_medium_line_x4_t4_g7_g2

0x57ae,	// (0x0003424f) list_medium_line_x4_t4_g7_g3_ParamLimits

0x57ae,	// (0x0003424f) list_medium_line_x4_t4_g7_g3

0xe07f,	// (0x0003cb20) list_medium_line_x4_t4_g7_g4_ParamLimits

0xe07f,	// (0x0003cb20) list_medium_line_x4_t4_g7_g4

0xe07f,	// (0x0003cb20) list_medium_line_x4_t4_g7_g5_ParamLimits

0xe07f,	// (0x0003cb20) list_medium_line_x4_t4_g7_g5

0xe07f,	// (0x0003cb20) list_medium_line_x4_t4_g7_g6_ParamLimits

0xe07f,	// (0x0003cb20) list_medium_line_x4_t4_g7_g6

0xe08d,	// (0x0003cb2e) list_medium_line_x4_t4_g7_g7_ParamLimits

0xe08d,	// (0x0003cb2e) list_medium_line_x4_t4_g7_g7

0x0006,

0xfb60,	// (0x0003e601) list_medium_line_x4_t4_g7_g_ParamLimits

0xfb60,	// (0x0003e601) list_medium_line_x4_t4_g7_g

0x57ba,	// (0x0003425b) list_medium_line_x4_t4_g7_t1_ParamLimits

0x57ba,	// (0x0003425b) list_medium_line_x4_t4_g7_t1

0x57ba,	// (0x0003425b) list_medium_line_x4_t4_g7_t2_ParamLimits

0x57ba,	// (0x0003425b) list_medium_line_x4_t4_g7_t2

0x57ba,	// (0x0003425b) list_medium_line_x4_t4_g7_t3_ParamLimits

0x57ba,	// (0x0003425b) list_medium_line_x4_t4_g7_t3

0x34e0,	// (0x00031f81) list_medium_line_x4_t4_g7_t4_ParamLimits

0x34e0,	// (0x00031f81) list_medium_line_x4_t4_g7_t4

0x5cf4,	// (0x00034795) list_medium_line_x4_t4_g7_t5_ParamLimits

0x5cf4,	// (0x00034795) list_medium_line_x4_t4_g7_t5

0x0004,

0xfb6f,	// (0x0003e610) list_medium_line_x4_t4_g7_t_ParamLimits

0xfb6f,	// (0x0003e610) list_medium_line_x4_t4_g7_t

0x5d07,	// (0x000347a8) list_single_dyc_row_pane_ParamLimits

0x5d07,	// (0x000347a8) list_single_dyc_row_pane

0xbfce,	// (0x0003aa6f) call5_gesture_pane_ParamLimits

0xbfce,	// (0x0003aa6f) call5_gesture_pane

0xbffe,	// (0x0003aa9f) call5_windows_pane_ParamLimits

0xbffe,	// (0x0003aa9f) call5_windows_pane

0xc06a,	// (0x0003ab0b) call5_swipe_1_pane_cp_ParamLimits

0xc06a,	// (0x0003ab0b) call5_swipe_1_pane_cp

0xc076,	// (0x0003ab17) call5_swipe_2_pane_cp_ParamLimits

0xc076,	// (0x0003ab17) call5_swipe_2_pane_cp

0xe2c2,	// (0x0003cd63) call5_image_pane_cp

0xc082,	// (0x0003ab23) popup_call5_audio_first_window_cp_ParamLimits

0xc082,	// (0x0003ab23) popup_call5_audio_first_window_cp

0x3ae4,	// (0x00032585) call5_swipe_1_pane_g1_cp_ParamLimits

0x3ae4,	// (0x00032585) call5_swipe_1_pane_g1_cp

0x3b2a,	// (0x000325cb) call5_swipe_1_pane_g2_cp

0x3afd,	// (0x0003259e) call5_swipe_1_pane_t1_cp_ParamLimits

0x3afd,	// (0x0003259e) call5_swipe_1_pane_t1_cp

0x3ae4,	// (0x00032585) call5_swipe_2_pane_g1_cp_ParamLimits

0x3ae4,	// (0x00032585) call5_swipe_2_pane_g1_cp

0x3b32,	// (0x000325d3) call5_swipe_2_pane_g2_cp

0x3b3a,	// (0x000325db) call5_swipe_2_pane_t1_cp_ParamLimits

0x3b3a,	// (0x000325db) call5_swipe_2_pane_t1_cp

0xed86,	// (0x0003d827) main_sp_fs_email_pane

0x3b4f,	// (0x000325f0) main_sp_fs_listscroll_pane_te

0xc08e,	// (0x0003ab2f) popup_sp_fs_action_menu_pane_ParamLimits

0xc08e,	// (0x0003ab2f) popup_sp_fs_action_menu_pane

0xe343,	// (0x0003cde4) bg_sp_fs_ctrlbar_pane_g1

0x21f8,	// (0x00030c99) bg_sp_fs_ctrlbar_ddmenu_pane_g1

0x220a,	// (0x00030cab) bg_sp_fs_ctrlbar_ddmenu_pane_g2

0x2201,	// (0x00030ca2) bg_sp_fs_ctrlbar_ddmenu_pane_g3

0xe343,	// (0x0003cde4) bg_sp_fs_ctrlbar_ddmenu_pane_g4

0x0003,

0xfc5d,	// (0x0003e6fe) bg_sp_fs_ctrlbar_ddmenu_pane_g

0x1a65,	// (0x00030506) bg_sp_fs_ctrlbar_ddmenu_pane_ParamLimits

0x1a65,	// (0x00030506) bg_sp_fs_ctrlbar_ddmenu_pane

0x3b58,	// (0x000325f9) main_sp_fs_ctrlbar_ddmenu_pane_g1_ParamLimits

0x3b58,	// (0x000325f9) main_sp_fs_ctrlbar_ddmenu_pane_g1

0x3b64,	// (0x00032605) main_sp_fs_ctrlbar_ddmenu_pane_g2_ParamLimits

0x3b64,	// (0x00032605) main_sp_fs_ctrlbar_ddmenu_pane_g2

0x0001,

0xfc66,	// (0x0003e707) main_sp_fs_ctrlbar_ddmenu_pane_g_ParamLimits

0xfc66,	// (0x0003e707) main_sp_fs_ctrlbar_ddmenu_pane_g

0x3b70,	// (0x00032611) main_sp_fs_ctrlbar_ddmenu_pane_t1_ParamLimits

0x3b70,	// (0x00032611) main_sp_fs_ctrlbar_ddmenu_pane_t1

0xe1de,	// (0x0003cc7f) list_medium_line_t2_right_icon_g1

0x57e0,	// (0x00034281) list_medium_line_t2_right_icon_t1

0x57e0,	// (0x00034281) list_medium_line_t2_right_icon_t2

0x0001,

0xfc6b,	// (0x0003e70c) list_medium_line_t2_right_icon_t

0xeffc,	// (0x0003da9d) bg_sp_fs_ctrlbar_pane_ParamLimits

0xeffc,	// (0x0003da9d) bg_sp_fs_ctrlbar_pane

0xc115,	// (0x0003abb6) main_sp_fs_ctrlbar_button_pane_cp01

0xc11d,	// (0x0003abbe) main_sp_fs_ctrlbar_ddmenu_pane

0x3bca,	// (0x0003266b) main_sp_fs_ctrlbar_pane_g1

0x3bd6,	// (0x00032677) main_sp_fs_ctrlbar_pane_g2

0x0003,

0xfc70,	// (0x0003e711) main_sp_fs_ctrlbar_pane_g

0xc157,	// (0x0003abf8) main_sp_fs_ctrlbar_pane_t1

0xc19f,	// (0x0003ac40) main_sp_fs_ctrlbar_pane

0xc1b3,	// (0x0003ac54) main_sp_fs_listscroll_pane_te_cp01

0x5d9e,	// (0x0003483f) popup_sp_fs_action_menu_pane_cp01_ParamLimits

0x5d9e,	// (0x0003483f) popup_sp_fs_action_menu_pane_cp01

0xed86,	// (0x0003d827) bg_sp_fs_highlight_list_pane_cp01_ParamLimits

0xed86,	// (0x0003d827) bg_sp_fs_highlight_list_pane_cp01

0x5dbe,	// (0x0003485f) sp_fs_action_menu_list_gene_pane_g1_ParamLimits

0x5dbe,	// (0x0003485f) sp_fs_action_menu_list_gene_pane_g1

0x3bfd,	// (0x0003269e) sp_fs_action_menu_list_gene_pane_g2_ParamLimits

0x3bfd,	// (0x0003269e) sp_fs_action_menu_list_gene_pane_g2

0x0001,

0xfc7e,	// (0x0003e71f) sp_fs_action_menu_list_gene_pane_g_ParamLimits

0xfc7e,	// (0x0003e71f) sp_fs_action_menu_list_gene_pane_g

0x5dcd,	// (0x0003486e) sp_fs_action_menu_list_gene_pane_t1_ParamLimits

0x5dcd,	// (0x0003486e) sp_fs_action_menu_list_gene_pane_t1

0xc1c4,	// (0x0003ac65) sp_fs_action_menu_list_gene_pane_ParamLimits

0xc1c4,	// (0x0003ac65) sp_fs_action_menu_list_gene_pane

0x3c0a,	// (0x000326ab) popup_sp_fs_action_menu_bg_pane_ParamLimits

0x3c0a,	// (0x000326ab) popup_sp_fs_action_menu_bg_pane

0xc1e1,	// (0x0003ac82) sp_fs_action_menu_list_pane_ParamLimits

0xc1e1,	// (0x0003ac82) sp_fs_action_menu_list_pane

0x3c18,	// (0x000326b9) sp_fs_scroll_pane_cp01_ParamLimits

0x3c18,	// (0x000326b9) sp_fs_scroll_pane_cp01

0x57e0,	// (0x00034281) list_medium_line_plain_t2_t1

0x57e0,	// (0x00034281) list_medium_line_plain_t2_t2

0x0001,

0xfc6b,	// (0x0003e70c) list_medium_line_plain_t2_t

0x57e0,	// (0x00034281) list_medium_line_plain_t3_t1

0x57e0,	// (0x00034281) list_medium_line_plain_t3_t2

0x57e0,	// (0x00034281) list_medium_line_plain_t3_t3

0x0002,

0xfc83,	// (0x0003e724) list_medium_line_plain_t3_t

0x57a2,	// (0x00034243) list_medium_line_x2_t2_g2_g1_ParamLimits

0x57a2,	// (0x00034243) list_medium_line_x2_t2_g2_g1

0x57a2,	// (0x00034243) list_medium_line_x2_t2_g2_g2_ParamLimits

0x57a2,	// (0x00034243) list_medium_line_x2_t2_g2_g2

0x0001,

0xf1db,	// (0x0003dc7c) list_medium_line_x2_t2_g2_g_ParamLimits

0xf1db,	// (0x0003dc7c) list_medium_line_x2_t2_g2_g

0x57ba,	// (0x0003425b) list_medium_line_x2_t2_g2_t1_ParamLimits

0x57ba,	// (0x0003425b) list_medium_line_x2_t2_g2_t1

0x57cd,	// (0x0003426e) list_medium_line_x2_t2_g2_t2_ParamLimits

0x57cd,	// (0x0003426e) list_medium_line_x2_t2_g2_t2

0x0001,

0xf250,	// (0x0003dcf1) list_medium_line_x2_t2_g2_t_ParamLimits

0xf250,	// (0x0003dcf1) list_medium_line_x2_t2_g2_t

0x57a2,	// (0x00034243) list_medium_line_x2_t4_g2_g1_ParamLimits

0x57a2,	// (0x00034243) list_medium_line_x2_t4_g2_g1

0x5de5,	// (0x00034886) list_medium_line_x2_t4_g2_g2_ParamLimits

0x5de5,	// (0x00034886) list_medium_line_x2_t4_g2_g2

0x0001,

0xfc8a,	// (0x0003e72b) list_medium_line_x2_t4_g2_g_ParamLimits

0xfc8a,	// (0x0003e72b) list_medium_line_x2_t4_g2_g

0x57ba,	// (0x0003425b) list_medium_line_x2_t4_g2_t1_ParamLimits

0x57ba,	// (0x0003425b) list_medium_line_x2_t4_g2_t1

0x57ba,	// (0x0003425b) list_medium_line_x2_t4_g2_t2_ParamLimits

0x57ba,	// (0x0003425b) list_medium_line_x2_t4_g2_t2

0x57ba,	// (0x0003425b) list_medium_line_x2_t4_g2_t3_ParamLimits

0x57ba,	// (0x0003425b) list_medium_line_x2_t4_g2_t3

0x57cd,	// (0x0003426e) list_medium_line_x2_t4_g2_t4_ParamLimits

0x57cd,	// (0x0003426e) list_medium_line_x2_t4_g2_t4

0x0003,

0xf1e9,	// (0x0003dc8a) list_medium_line_x2_t4_g2_t_ParamLimits

0xf1e9,	// (0x0003dc8a) list_medium_line_x2_t4_g2_t

0xe1de,	// (0x0003cc7f) list_medium_line_t3_right_iconx2_g1

0xe343,	// (0x0003cde4) list_medium_line_t3_right_iconx2_g2

0x3d1c,	// (0x000327bd) list_medium_line_t3_right_iconx2_g3

0x0002,

0xfc8f,	// (0x0003e730) list_medium_line_t3_right_iconx2_g

0x57e0,	// (0x00034281) list_medium_line_t3_right_iconx2_t1

0x57e0,	// (0x00034281) list_medium_line_t3_right_iconx2_t2

0x0001,

0xfc6b,	// (0x0003e70c) list_medium_line_t3_right_iconx2_t

0x57a2,	// (0x00034243) list_medium_line_x3_t4_g4_g1_ParamLimits

0x57a2,	// (0x00034243) list_medium_line_x3_t4_g4_g1

0x57ae,	// (0x0003424f) list_medium_line_x3_t4_g4_g2_ParamLimits

0x57ae,	// (0x0003424f) list_medium_line_x3_t4_g4_g2

0x57a2,	// (0x00034243) list_medium_line_x3_t4_g4_g3_ParamLimits

0x57a2,	// (0x00034243) list_medium_line_x3_t4_g4_g3

0x57ae,	// (0x0003424f) list_medium_line_x3_t4_g4_g4_ParamLimits

0x57ae,	// (0x0003424f) list_medium_line_x3_t4_g4_g4

0x0003,

0xfc96,	// (0x0003e737) list_medium_line_x3_t4_g4_g_ParamLimits

0xfc96,	// (0x0003e737) list_medium_line_x3_t4_g4_g

0x57ba,	// (0x0003425b) list_medium_line_x3_t4_g4_t1_ParamLimits

0x57ba,	// (0x0003425b) list_medium_line_x3_t4_g4_t1

0x57ba,	// (0x0003425b) list_medium_line_x3_t4_g4_t2_ParamLimits

0x57ba,	// (0x0003425b) list_medium_line_x3_t4_g4_t2

0x57ba,	// (0x0003425b) list_medium_line_x3_t4_g4_t3_ParamLimits

0x57ba,	// (0x0003425b) list_medium_line_x3_t4_g4_t3

0x5df6,	// (0x00034897) list_medium_line_x3_t4_g4_t4_ParamLimits

0x5df6,	// (0x00034897) list_medium_line_x3_t4_g4_t4

0x0003,

0xfc9f,	// (0x0003e740) list_medium_line_x3_t4_g4_t_ParamLimits

0xfc9f,	// (0x0003e740) list_medium_line_x3_t4_g4_t

0x5e13,	// (0x000348b4) list_single_dyc_row_text_pane_t1_ParamLimits

0x5e13,	// (0x000348b4) list_single_dyc_row_text_pane_t1

0x5e4a,	// (0x000348eb) list_single_dyc_row_text_pane_t2_ParamLimits

0x5e4a,	// (0x000348eb) list_single_dyc_row_text_pane_t2

0x5ebb,	// (0x0003495c) list_single_dyc_row_text_pane_t3_ParamLimits

0x5ebb,	// (0x0003495c) list_single_dyc_row_text_pane_t3

0x0005,

0xfca8,	// (0x0003e749) list_single_dyc_row_text_pane_t_ParamLimits

0xfca8,	// (0x0003e749) list_single_dyc_row_text_pane_t

0x5f86,	// (0x00034a27) list_single_dyc_row_pane_g1_ParamLimits

0x5f86,	// (0x00034a27) list_single_dyc_row_pane_g1

0x5f92,	// (0x00034a33) list_single_dyc_row_pane_g2_ParamLimits

0x5f92,	// (0x00034a33) list_single_dyc_row_pane_g2

0x5f9e,	// (0x00034a3f) list_single_dyc_row_pane_g3_ParamLimits

0x5f9e,	// (0x00034a3f) list_single_dyc_row_pane_g3

0x5faa,	// (0x00034a4b) list_single_dyc_row_pane_g4_ParamLimits

0x5faa,	// (0x00034a4b) list_single_dyc_row_pane_g4

0x0003,

0xfcb5,	// (0x0003e756) list_single_dyc_row_pane_g_ParamLimits

0xfcb5,	// (0x0003e756) list_single_dyc_row_pane_g

0x5fb6,	// (0x00034a57) list_single_dyc_row_text_pane_ParamLimits

0x5fb6,	// (0x00034a57) list_single_dyc_row_text_pane

0xd981,	// (0x0003c422) bg_sp_fs_scroll_pane

0x3cd7,	// (0x00032778) thumb_sp_fs_scroll_pane

0x57a2,	// (0x00034243) list_medium_line_g1_ParamLimits

0x57a2,	// (0x00034243) list_medium_line_g1

0x57ba,	// (0x0003425b) list_medium_line_t1_ParamLimits

0x57ba,	// (0x0003425b) list_medium_line_t1

0x57a2,	// (0x00034243) list_medium_line_x2_g1_ParamLimits

0x57a2,	// (0x00034243) list_medium_line_x2_g1

0x5a8c,	// (0x0003452d) list_medium_line_x2_g2_ParamLimits

0x5a8c,	// (0x0003452d) list_medium_line_x2_g2

0x0001,

0xf990,	// (0x0003e431) list_medium_line_x2_g_ParamLimits

0xf990,	// (0x0003e431) list_medium_line_x2_g

0xed72,	// (0x0003d813) list_medium_line_x2_t1_ParamLimits

0xed72,	// (0x0003d813) list_medium_line_x2_t1

0x57a2,	// (0x00034243) list_medium_line_x3_g1_ParamLimits

0x57a2,	// (0x00034243) list_medium_line_x3_g1

0x5fd5,	// (0x00034a76) list_medium_line_x3_g2_ParamLimits

0x5fd5,	// (0x00034a76) list_medium_line_x3_g2

0x0001,

0xfcbe,	// (0x0003e75f) list_medium_line_x3_g_ParamLimits

0xfcbe,	// (0x0003e75f) list_medium_line_x3_g

0x3ced,	// (0x0003278e) list_medium_line_x3_t1_ParamLimits

0x3ced,	// (0x0003278e) list_medium_line_x3_t1

0x3d01,	// (0x000327a2) thumb_sp_fs_scroll_pane_g1

0x3d0a,	// (0x000327ab) thumb_sp_fs_scroll_pane_g2

0x3d13,	// (0x000327b4) thumb_sp_fs_scroll_pane_g3

0x0002,

0xfcc3,	// (0x0003e764) thumb_sp_fs_scroll_pane_g

0x3d01,	// (0x000327a2) bg_sp_fs_scroll_pane_g1

0x3d0a,	// (0x000327ab) bg_sp_fs_scroll_pane_g2

0x3d13,	// (0x000327b4) bg_sp_fs_scroll_pane_g3

0x0002,

0xfcc3,	// (0x0003e764) bg_sp_fs_scroll_pane_g

0x57a2,	// (0x00034243) list_medium_line_x2_t3_g4_g1_ParamLimits

0x57a2,	// (0x00034243) list_medium_line_x2_t3_g4_g1

0x57ae,	// (0x0003424f) list_medium_line_x2_t3_g4_g2_ParamLimits

0x57ae,	// (0x0003424f) list_medium_line_x2_t3_g4_g2

0x57ae,	// (0x0003424f) list_medium_line_x2_t3_g4_g3_ParamLimits

0x57ae,	// (0x0003424f) list_medium_line_x2_t3_g4_g3

0x57a2,	// (0x00034243) list_medium_line_x2_t3_g4_g4_ParamLimits

0x57a2,	// (0x00034243) list_medium_line_x2_t3_g4_g4

0x0003,

0xf1e0,	// (0x0003dc81) list_medium_line_x2_t3_g4_g_ParamLimits

0xf1e0,	// (0x0003dc81) list_medium_line_x2_t3_g4_g

0x57ba,	// (0x0003425b) list_medium_line_x2_t3_g4_t1_ParamLimits

0x57ba,	// (0x0003425b) list_medium_line_x2_t3_g4_t1

0x57ba,	// (0x0003425b) list_medium_line_x2_t3_g4_t2_ParamLimits

0x57ba,	// (0x0003425b) list_medium_line_x2_t3_g4_t2

0x57cd,	// (0x0003426e) list_medium_line_x2_t3_g4_t3_ParamLimits

0x57cd,	// (0x0003426e) list_medium_line_x2_t3_g4_t3

0x0002,

0xf1d4,	// (0x0003dc75) list_medium_line_x2_t3_g4_t_ParamLimits

0xf1d4,	// (0x0003dc75) list_medium_line_x2_t3_g4_t

0x57a2,	// (0x00034243) list_medium_line_g2_g1_ParamLimits

0x57a2,	// (0x00034243) list_medium_line_g2_g1

0x5a8c,	// (0x0003452d) list_medium_line_g2_g2_ParamLimits

0x5a8c,	// (0x0003452d) list_medium_line_g2_g2

0x0001,

0xf990,	// (0x0003e431) list_medium_line_g2_g_ParamLimits

0xf990,	// (0x0003e431) list_medium_line_g2_g

0x57ba,	// (0x0003425b) list_medium_line_g2_t1_ParamLimits

0x57ba,	// (0x0003425b) list_medium_line_g2_t1

0x57a2,	// (0x00034243) list_medium_line_t3_g2_g1_ParamLimits

0x57a2,	// (0x00034243) list_medium_line_t3_g2_g1

0x5a8c,	// (0x0003452d) list_medium_line_t3_g2_g2_ParamLimits

0x5a8c,	// (0x0003452d) list_medium_line_t3_g2_g2

0x0001,

0xf990,	// (0x0003e431) list_medium_line_t3_g2_g_ParamLimits

0xf990,	// (0x0003e431) list_medium_line_t3_g2_g

0x57ba,	// (0x0003425b) list_medium_line_t3_g2_t1_ParamLimits

0x57ba,	// (0x0003425b) list_medium_line_t3_g2_t1

0x57ba,	// (0x0003425b) list_medium_line_t3_g2_t2_ParamLimits

0x57ba,	// (0x0003425b) list_medium_line_t3_g2_t2

0x57ba,	// (0x0003425b) list_medium_line_t3_g2_t3_ParamLimits

0x57ba,	// (0x0003425b) list_medium_line_t3_g2_t3

0x0002,

0xfcca,	// (0x0003e76b) list_medium_line_t3_g2_t_ParamLimits

0xfcca,	// (0x0003e76b) list_medium_line_t3_g2_t

0x34c5,	// (0x00031f66) list_medium_line_right_icon_g1

0x57e0,	// (0x00034281) list_medium_line_right_icon_t1

0x57a2,	// (0x00034243) list_medium_line_t2_g1_ParamLimits

0x57a2,	// (0x00034243) list_medium_line_t2_g1

0x57ba,	// (0x0003425b) list_medium_line_t2_t1_ParamLimits

0x57ba,	// (0x0003425b) list_medium_line_t2_t1

0x57ba,	// (0x0003425b) list_medium_line_t2_t2_ParamLimits

0x57ba,	// (0x0003425b) list_medium_line_t2_t2

0x0001,

0xf995,	// (0x0003e436) list_medium_line_t2_t_ParamLimits

0xf995,	// (0x0003e436) list_medium_line_t2_t

0x57a2,	// (0x00034243) list_medium_line_t3_g1_ParamLimits

0x57a2,	// (0x00034243) list_medium_line_t3_g1

0x57ba,	// (0x0003425b) list_medium_line_t3_t1_ParamLimits

0x57ba,	// (0x0003425b) list_medium_line_t3_t1

0x57ba,	// (0x0003425b) list_medium_line_t3_t2_ParamLimits

0x57ba,	// (0x0003425b) list_medium_line_t3_t2

0x57ba,	// (0x0003425b) list_medium_line_t3_t3_ParamLimits

0x57ba,	// (0x0003425b) list_medium_line_t3_t3

0x0002,

0xfcca,	// (0x0003e76b) list_medium_line_t3_t_ParamLimits

0xfcca,	// (0x0003e76b) list_medium_line_t3_t

0x57a2,	// (0x00034243) list_medium_line_g3_g1_ParamLimits

0x57a2,	// (0x00034243) list_medium_line_g3_g1

0x57ae,	// (0x0003424f) list_medium_line_g3_g2_ParamLimits

0x57ae,	// (0x0003424f) list_medium_line_g3_g2

0x57ae,	// (0x0003424f) list_medium_line_g3_g3_ParamLimits

0x57ae,	// (0x0003424f) list_medium_line_g3_g3

0x0002,

0xfcd1,	// (0x0003e772) list_medium_line_g3_g_ParamLimits

0xfcd1,	// (0x0003e772) list_medium_line_g3_g

0x57ba,	// (0x0003425b) list_medium_line_g3_t1_ParamLimits

0x57ba,	// (0x0003425b) list_medium_line_g3_t1

0x57a2,	// (0x00034243) list_medium_line_t2_g3_g1_ParamLimits

0x57a2,	// (0x00034243) list_medium_line_t2_g3_g1

0x57ae,	// (0x0003424f) list_medium_line_t2_g3_g2_ParamLimits

0x57ae,	// (0x0003424f) list_medium_line_t2_g3_g2

0x57ae,	// (0x0003424f) list_medium_line_t2_g3_g3_ParamLimits

0x57ae,	// (0x0003424f) list_medium_line_t2_g3_g3

0x0002,

0xfcd1,	// (0x0003e772) list_medium_line_t2_g3_g_ParamLimits

0xfcd1,	// (0x0003e772) list_medium_line_t2_g3_g

0x57ba,	// (0x0003425b) list_medium_line_t2_g3_t1_ParamLimits

0x57ba,	// (0x0003425b) list_medium_line_t2_g3_t1

0x57ba,	// (0x0003425b) list_medium_line_t2_g3_t2_ParamLimits

0x57ba,	// (0x0003425b) list_medium_line_t2_g3_t2

0x0001,

0xf995,	// (0x0003e436) list_medium_line_t2_g3_t_ParamLimits

0xf995,	// (0x0003e436) list_medium_line_t2_g3_t

0x57a2,	// (0x00034243) list_medium_line_t3_g3_g1_ParamLimits

0x57a2,	// (0x00034243) list_medium_line_t3_g3_g1

0x57ae,	// (0x0003424f) list_medium_line_t3_g3_g2_ParamLimits

0x57ae,	// (0x0003424f) list_medium_line_t3_g3_g2

0x57ae,	// (0x0003424f) list_medium_line_t3_g3_g3_ParamLimits

0x57ae,	// (0x0003424f) list_medium_line_t3_g3_g3

0x0002,

0xfcd1,	// (0x0003e772) list_medium_line_t3_g3_g_ParamLimits

0xfcd1,	// (0x0003e772) list_medium_line_t3_g3_g

0x57ba,	// (0x0003425b) list_medium_line_t3_g3_t1_ParamLimits

0x57ba,	// (0x0003425b) list_medium_line_t3_g3_t1

0x57ba,	// (0x0003425b) list_medium_line_t3_g3_t2_ParamLimits

0x57ba,	// (0x0003425b) list_medium_line_t3_g3_t2

0x57ba,	// (0x0003425b) list_medium_line_t3_g3_t3_ParamLimits

0x57ba,	// (0x0003425b) list_medium_line_t3_g3_t3

0x0002,

0xfcca,	// (0x0003e76b) list_medium_line_t3_g3_t_ParamLimits

0xfcca,	// (0x0003e76b) list_medium_line_t3_g3_t

0xe1de,	// (0x0003cc7f) list_medium_line_right_iconx2_g1

0xe1de,	// (0x0003cc7f) list_medium_line_right_iconx2_g2

0x0001,

0xfcd8,	// (0x0003e779) list_medium_line_right_iconx2_g

0x3d25,	// (0x000327c6) list_medium_line_right_iconx2_t1

0xe1de,	// (0x0003cc7f) list_medium_line_t2_right_iconx2_g1

0xe1de,	// (0x0003cc7f) list_medium_line_t2_right_iconx2_g2

0x0001,

0xfcd8,	// (0x0003e779) list_medium_line_t2_right_iconx2_g

0x57e0,	// (0x00034281) list_medium_line_t2_right_iconx2_t1

0x57e0,	// (0x00034281) list_medium_line_t2_right_iconx2_t2

0x0001,

0xfc6b,	// (0x0003e70c) list_medium_line_t2_right_iconx2_t

0x57e0,	// (0x00034281) list_medium_line_x4_t4_t1

0x57e0,	// (0x00034281) list_medium_line_x4_t4_t2

0x57e0,	// (0x00034281) list_medium_line_x4_t4_t3

0x57e0,	// (0x00034281) list_medium_line_x4_t4_t4

0x0003,

0xf2a2,	// (0x0003dd43) list_medium_line_x4_t4_t

0xc223,	// (0x0003acc4) tport_appsw_pane_ParamLimits

0xc223,	// (0x0003acc4) tport_appsw_pane

0xc22f,	// (0x0003acd0) tport_contact_pane_ParamLimits

0xc22f,	// (0x0003acd0) tport_contact_pane

0xc23d,	// (0x0003acde) tport_listscroll_pane_ParamLimits

0xc23d,	// (0x0003acde) tport_listscroll_pane

0xc24b,	// (0x0003acec) cell_tport_appsw_pane_ParamLimits

0xc24b,	// (0x0003acec) cell_tport_appsw_pane

0xe08d,	// (0x0003cb2e) tport_appsw_pane_g1_ParamLimits

0xe08d,	// (0x0003cb2e) tport_appsw_pane_g1

0x3d34,	// (0x000327d5) tport_contact_pane_g1

0x3d3d,	// (0x000327de) tport_contact_pane_t1

0x3d4b,	// (0x000327ec) tport_contact_pane_t2

0x0001,

0xfcdd,	// (0x0003e77e) tport_contact_pane_t

0x3d59,	// (0x000327fa) list_tport_pane

0xe1f0,	// (0x0003cc91) scroll_pane_cp_030

0x3d6a,	// (0x0003280b) cell_tport_appsw_pane_g1

0x3d7a,	// (0x0003281b) cell_tport_appsw_pane_t1

0x3d88,	// (0x00032829) grid_highlight_pane_cp019

0xc272,	// (0x0003ad13) list_tport_double_graphic_pane_ParamLimits

0xc272,	// (0x0003ad13) list_tport_double_graphic_pane

0xed86,	// (0x0003d827) list_highlight_pane_cp023_ParamLimits

0xed86,	// (0x0003d827) list_highlight_pane_cp023

0xc27f,	// (0x0003ad20) list_tport_double_graphic_pane_g1_ParamLimits

0xc27f,	// (0x0003ad20) list_tport_double_graphic_pane_g1

0xc28c,	// (0x0003ad2d) list_tport_double_graphic_pane_t1_ParamLimits

0xc28c,	// (0x0003ad2d) list_tport_double_graphic_pane_t1

0xc2a1,	// (0x0003ad42) list_tport_double_graphic_pane_t2_ParamLimits

0xc2a1,	// (0x0003ad42) list_tport_double_graphic_pane_t2

0x0001,

0xfce9,	// (0x0003e78a) list_tport_double_graphic_pane_t_ParamLimits

0xfce9,	// (0x0003e78a) list_tport_double_graphic_pane_t

0xd981,	// (0x0003c422) main_cale_note_pane

0xa7e2,	// (0x00039283) cell_vitu2_function_top_wide_pane_cp01_ParamLimits

0xa7e2,	// (0x00039283) cell_vitu2_function_top_wide_pane_cp01

0xbd75,	// (0x0003a816) wait_bar_pane_cp05_ParamLimits

0xed86,	// (0x0003d827) listscroll_cmail_pane

0x3d98,	// (0x00032839) list_cmail_pane

0xc2b3,	// (0x0003ad54) list_cmail_body_pane

0xc2b3,	// (0x0003ad54) list_single_cmail_header_caption_pane

0xc2cc,	// (0x0003ad6d) list_single_cmail_header_detail_pane_ParamLimits

0xc2cc,	// (0x0003ad6d) list_single_cmail_header_detail_pane

0x3dbb,	// (0x0003285c) list_single_cmail_header_caption_pane_t1

0x5fe2,	// (0x00034a83) list_single_cmail_header_detail_pane_g1_ParamLimits

0x5fe2,	// (0x00034a83) list_single_cmail_header_detail_pane_g1

0x5ff8,	// (0x00034a99) list_single_cmail_header_detail_pane_g2_ParamLimits

0x5ff8,	// (0x00034a99) list_single_cmail_header_detail_pane_g2

0x0002,

0xfcee,	// (0x0003e78f) list_single_cmail_header_detail_pane_g_ParamLimits

0xfcee,	// (0x0003e78f) list_single_cmail_header_detail_pane_g

0x6004,	// (0x00034aa5) list_single_cmail_header_detail_pane_t1_ParamLimits

0x6004,	// (0x00034aa5) list_single_cmail_header_detail_pane_t1

0x6064,	// (0x00034b05) list_single_cmail_header_editor_pane_bg_ParamLimits

0x6064,	// (0x00034b05) list_single_cmail_header_editor_pane_bg

0x3e26,	// (0x000328c7) list_cmail_body_pane_g1

0x3e2f,	// (0x000328d0) list_cmail_body_pane_t1

0x2954,	// (0x000313f5) list_single_cmail_header_editor_pane_bg_g1

0xe561,	// (0x0003d002) list_single_cmail_header_editor_pane_bg_g1_copy1

0x2964,	// (0x00031405) list_single_cmail_header_editor_pane_bg_g1_copy2

0x295c,	// (0x000313fd) list_single_cmail_header_editor_pane_bg_g1_copy3

0x2beb,	// (0x0003168c) list_single_cmail_header_editor_pane_bg_g1_copy4

0x2984,	// (0x00031425) list_single_cmail_header_editor_pane_bg_g1_copy4_copy1

0x2974,	// (0x00031415) list_single_cmail_header_editor_pane_bg_g1_copy4_copy2

0x297c,	// (0x0003141d) list_single_cmail_header_editor_pane_bg_g1_copy4_copy3

0xe541,	// (0x0003cfe2) list_single_cmail_header_editor_pane_bg_g1_copy4_copy3_copy1

0xc2f9,	// (0x0003ad9a) calenote_gesture_pane_ParamLimits

0xc2f9,	// (0x0003ad9a) calenote_gesture_pane

0xc311,	// (0x0003adb2) calenote_window_pane_ParamLimits

0xc311,	// (0x0003adb2) calenote_window_pane

0x3e3d,	// (0x000328de) popup_note_window_cp01

0xc329,	// (0x0003adca) calenote_swipe_1_pane_ParamLimits

0xc329,	// (0x0003adca) calenote_swipe_1_pane

0xc076,	// (0x0003ab17) calenote_swipe_2_pane_ParamLimits

0xc076,	// (0x0003ab17) calenote_swipe_2_pane

0x3ae4,	// (0x00032585) calenote_swipe_1_pane_g1_ParamLimits

0x3ae4,	// (0x00032585) calenote_swipe_1_pane_g1

0x3af1,	// (0x00032592) calenote_swipe_1_pane_g2_ParamLimits

0x3af1,	// (0x00032592) calenote_swipe_1_pane_g2

0x0001,

0xfc53,	// (0x0003e6f4) calenote_swipe_1_pane_g_ParamLimits

0xfc53,	// (0x0003e6f4) calenote_swipe_1_pane_g

0x3e4f,	// (0x000328f0) calenote_swipe_1_pane_t1_ParamLimits

0x3e4f,	// (0x000328f0) calenote_swipe_1_pane_t1

0x3ae4,	// (0x00032585) calenote_swipe_2_pane_g1_ParamLimits

0x3ae4,	// (0x00032585) calenote_swipe_2_pane_g1

0x3e6e,	// (0x0003290f) calenote_swipe_2_pane_g2_ParamLimits

0x3e6e,	// (0x0003290f) calenote_swipe_2_pane_g2

0x0001,

0xfcfa,	// (0x0003e79b) calenote_swipe_2_pane_g_ParamLimits

0xfcfa,	// (0x0003e79b) calenote_swipe_2_pane_g

0x3e7a,	// (0x0003291b) calenote_swipe_2_pane_t1_ParamLimits

0x3e7a,	// (0x0003291b) calenote_swipe_2_pane_t1

0xd981,	// (0x0003c422) main_mup_navstr_pane

0x9825,	// (0x000382c6) main_mup3_pane_t7_ParamLimits

0x9825,	// (0x000382c6) main_mup3_pane_t7

0x9ffa,	// (0x00038a9b) main_mp4_pane_g6_ParamLimits

0x9ffa,	// (0x00038a9b) main_mp4_pane_g6

0xa346,	// (0x00038de7) main_image3_pane_t4_ParamLimits

0xa346,	// (0x00038de7) main_image3_pane_t4

0xc33c,	// (0x0003addd) popup_navstr_preview_pane_ParamLimits

0xc33c,	// (0x0003addd) popup_navstr_preview_pane

0xc348,	// (0x0003ade9) scroll_navstr_pane_ParamLimits

0xc348,	// (0x0003ade9) scroll_navstr_pane

0xd981,	// (0x0003c422) bg_popup_preview_window_pane_cp04

0x3ea1,	// (0x00032942) popup_navstr_preview_pane_t1

0xc354,	// (0x0003adf5) scroll_navstr_pane_g1_ParamLimits

0xc354,	// (0x0003adf5) scroll_navstr_pane_g1

0xc361,	// (0x0003ae02) scroll_navstr_pane_t1_ParamLimits

0xc361,	// (0x0003ae02) scroll_navstr_pane_t1

0x3e46,	// (0x000328e7) bg_button_pane_cp014

0x3e46,	// (0x000328e7) bg_button_pane_cp030

0x5d44,	// (0x000347e5) list_double_fisheye_pane_g4_ParamLimits

0x5d44,	// (0x000347e5) list_double_fisheye_pane_g4

0x5d50,	// (0x000347f1) list_double_fisheye_pane_g5_ParamLimits

0x5d50,	// (0x000347f1) list_double_fisheye_pane_g5

0x3daf,	// (0x00032850) sp_fs_scroll_pane_cp03

0x3bca,	// (0x0003266b) main_sp_fs_ctrlbar_pane_g1_ParamLimits

0x3bd6,	// (0x00032677) main_sp_fs_ctrlbar_pane_g2_ParamLimits

0xfc70,	// (0x0003e711) main_sp_fs_ctrlbar_pane_g_ParamLimits

0xc157,	// (0x0003abf8) main_sp_fs_ctrlbar_pane_t1_ParamLimits

0x3da7,	// (0x00032848) sp_fs_scroll_pane_cp02

0xe202,	// (0x0003cca3) popup_sp_fs_calendar_preview_list_single_pane_ParamLimits

0xe202,	// (0x0003cca3) popup_sp_fs_calendar_preview_list_single_pane

0xd981,	// (0x0003c422) main_cam6_pano_pane

0xed86,	// (0x0003d827) main_mup3_pane_ParamLimits

0xd981,	// (0x0003c422) main_phacti_pane

0xbc68,	// (0x0003a709) bg_button_pane_cp11

0xbc80,	// (0x0003a721) main_mobtv_info_pane_g2_ParamLimits

0xbc80,	// (0x0003a721) main_mobtv_info_pane_g2

0x0001,

0xfbd0,	// (0x0003e671) main_mobtv_info_pane_g_ParamLimits

0xfbd0,	// (0x0003e671) main_mobtv_info_pane_g

0xbe0c,	// (0x0003a8ad) sc_clock_pane_t5_ParamLimits

0xbe0c,	// (0x0003a8ad) sc_clock_pane_t5

0xbe99,	// (0x0003a93a) main_radioblah_pane_g1_ParamLimits

0x3a27,	// (0x000324c8) main_radioblah_pane_t3_ParamLimits

0x3a27,	// (0x000324c8) main_radioblah_pane_t3

0x3a3f,	// (0x000324e0) main_radioblah_pane_t4_ParamLimits

0x3a3f,	// (0x000324e0) main_radioblah_pane_t4

0xbeb7,	// (0x0003a958) main_radioblah_text_pane_ParamLimits

0xbeb7,	// (0x0003a958) main_radioblah_text_pane

0xbec4,	// (0x0003a965) main_radioblah_info_pane_g1_ParamLimits

0xbf51,	// (0x0003a9f2) main_radioblah_info_pane_t4_ParamLimits

0xbf51,	// (0x0003a9f2) main_radioblah_info_pane_t4

0xed86,	// (0x0003d827) main_sp_fs_calendar_pane

0xc373,	// (0x0003ae14) main_phacti_pane_g1

0xc37b,	// (0x0003ae1c) phacti_note_pane_ParamLimits

0xc37b,	// (0x0003ae1c) phacti_note_pane

0x3eb8,	// (0x00032959) phacti_term_pane_ParamLimits

0x3eb8,	// (0x00032959) phacti_term_pane

0x3ecd,	// (0x0003296e) phacti_note_pane_t1_ParamLimits

0x3ecd,	// (0x0003296e) phacti_note_pane_t1

0x607b,	// (0x00034b1c) phacti_term_pane_g1

0x6083,	// (0x00034b24) phacti_term_pane_t1_ParamLimits

0x6083,	// (0x00034b24) phacti_term_pane_t1

0x3f16,	// (0x000329b7) popup_sp_fs_calendar_preview_list_single_pane_g1

0x3f1e,	// (0x000329bf) popup_sp_fs_calendar_preview_list_single_pane_g2

0x0001,

0xfd04,	// (0x0003e7a5) popup_sp_fs_calendar_preview_list_single_pane_g

0x3f26,	// (0x000329c7) popup_sp_fs_calendar_preview_list_single_pane_t1_ParamLimits

0x3f26,	// (0x000329c7) popup_sp_fs_calendar_preview_list_single_pane_t1

0x3f3c,	// (0x000329dd) aid_popup_sp_fs_bg_corner_pane

0xe343,	// (0x0003cde4) popup_sp_fs_calendar_preview_bg_pane_g1

0xd981,	// (0x0003c422) popup_sp_fs_calendar_preview_bg_pane

0x3f44,	// (0x000329e5) popup_sp_fs_calendar_preview_list_pane

0xeffc,	// (0x0003da9d) bg_main_sp_fs_cale_pane_ParamLimits

0xeffc,	// (0x0003da9d) bg_main_sp_fs_cale_pane

0x60ad,	// (0x00034b4e) listscroll_cale_mrui_pane_ParamLimits

0x60ad,	// (0x00034b4e) listscroll_cale_mrui_pane

0x60c2,	// (0x00034b63) listscroll_sp_fs_schedule_track_pane

0x60cb,	// (0x00034b6c) main_sp_fs_ctrlbar_pane_cp01_ParamLimits

0x60cb,	// (0x00034b6c) main_sp_fs_ctrlbar_pane_cp01

0x3f86,	// (0x00032a27) main_sp_fs_ribbon_pane

0x60de,	// (0x00034b7f) popup_sp_fs_cale_preview_window

0x439c,	// (0x00032e3d) list_single_sp_fs_schedule_track_pane_ParamLimits

0x439c,	// (0x00032e3d) list_single_sp_fs_schedule_track_pane

0xd98b,	// (0x0003c42c) bg_sp_fs_highlight_list_pane_cp03_ParamLimits

0xd98b,	// (0x0003c42c) bg_sp_fs_highlight_list_pane_cp03

0xc3d2,	// (0x0003ae73) list_single_sp_fs_schedule_track_pane_g1_ParamLimits

0xc3d2,	// (0x0003ae73) list_single_sp_fs_schedule_track_pane_g1

0xc3de,	// (0x0003ae7f) list_single_sp_fs_schedule_track_pane_g2_ParamLimits

0xc3de,	// (0x0003ae7f) list_single_sp_fs_schedule_track_pane_g2

0x0001,

0xfd09,	// (0x0003e7aa) list_single_sp_fs_schedule_track_pane_g_ParamLimits

0xfd09,	// (0x0003e7aa) list_single_sp_fs_schedule_track_pane_g

0xc3ea,	// (0x0003ae8b) list_single_sp_fs_schedule_track_pane_t1_ParamLimits

0xc3ea,	// (0x0003ae8b) list_single_sp_fs_schedule_track_pane_t1

0xc402,	// (0x0003aea3) sp_fs_schedule_track_pane_ParamLimits

0xc402,	// (0x0003aea3) sp_fs_schedule_track_pane

0x3fa0,	// (0x00032a41) sp_fs_schedule_track_pane_g1

0x3fa8,	// (0x00032a49) sp_fs_schedule_track_pane_g2

0x3fb0,	// (0x00032a51) sp_fs_schedule_track_pane_g3

0x3fb8,	// (0x00032a59) sp_fs_schedule_track_pane_g4

0x3fc0,	// (0x00032a61) sp_fs_schedule_track_pane_g5

0x0004,

0xfd0e,	// (0x0003e7af) sp_fs_schedule_track_pane_g

0x2954,	// (0x000313f5) bg_sp_fs_schedule_viewer_highlight_g1

0xe561,	// (0x0003d002) bg_sp_fs_schedule_viewer_highlight_g2

0x295c,	// (0x000313fd) bg_sp_fs_schedule_viewer_highlight_g3

0x2964,	// (0x00031405) bg_sp_fs_schedule_viewer_highlight_g4

0x2beb,	// (0x0003168c) bg_sp_fs_schedule_viewer_highlight_g5

0x2974,	// (0x00031415) bg_sp_fs_schedule_viewer_highlight_g6

0x297c,	// (0x0003141d) bg_sp_fs_schedule_viewer_highlight_g7

0x2984,	// (0x00031425) bg_sp_fs_schedule_viewer_highlight_g8

0xe541,	// (0x0003cfe2) bg_sp_fs_schedule_viewer_highlight_g9

0x0008,

0xfd19,	// (0x0003e7ba) bg_sp_fs_schedule_viewer_highlight_g

0xd981,	// (0x0003c422) bg_main_sp_fs_ribbon_pane

0xa563,	// (0x00039004) main_sp_fs_ribbon_pane_g1

0x3fc8,	// (0x00032a69) main_sp_fs_ribbon_pane_t1

0xc412,	// (0x0003aeb3) main_sp_fs_ribbon_pane_t2

0x3fd7,	// (0x00032a78) main_sp_fs_ribbon_pane_t3

0x0002,

0xfd2c,	// (0x0003e7cd) main_sp_fs_ribbon_pane_t

0x3fe6,	// (0x00032a87) main_sp_fs_ribbon_scheduler_pane

0x3fee,	// (0x00032a8f) bg_main_sp_fs_ribbon_pane_g1

0x3ff7,	// (0x00032a98) bg_main_sp_fs_ribbon_pane_g2

0x4000,	// (0x00032aa1) bg_main_sp_fs_ribbon_pane_g3

0x0002,

0xfd33,	// (0x0003e7d4) bg_main_sp_fs_ribbon_pane_g

0x4008,	// (0x00032aa9) main_sp_fs_ribbon_scheduler_pane_g1

0x4011,	// (0x00032ab2) main_sp_fs_ribbon_scheduler_pane_g2

0x401a,	// (0x00032abb) main_sp_fs_ribbon_scheduler_pane_g3

0x0002,

0xfd3a,	// (0x0003e7db) main_sp_fs_ribbon_scheduler_pane_g

0x4023,	// (0x00032ac4) list_cale_mrui_pane

0xc421,	// (0x0003aec2) sp_fs_scroll_pane_cp07_ParamLimits

0xc421,	// (0x0003aec2) sp_fs_scroll_pane_cp07

0xc439,	// (0x0003aeda) bg_sp_fs_schedule_viewer_highlight_ParamLimits

0xc439,	// (0x0003aeda) bg_sp_fs_schedule_viewer_highlight

0x4030,	// (0x00032ad1) list_single_sp_fs_schedule_track_pane_cp01

0x4038,	// (0x00032ad9) list_sp_fs_schedule_track_pane

0x4040,	// (0x00032ae1) sp_fs_scroll_pane_cp06_ParamLimits

0x4040,	// (0x00032ae1) sp_fs_scroll_pane_cp06

0xe343,	// (0x0003cde4) bgmain_sp_fs_calendar_pane_g1

0x60ed,	// (0x00034b8e) list_single_cale_mrui_pane_ParamLimits

0x60ed,	// (0x00034b8e) list_single_cale_mrui_pane

0x610f,	// (0x00034bb0) list_single_cale_mrui_row_pane_ParamLimits

0x610f,	// (0x00034bb0) list_single_cale_mrui_row_pane

0x6125,	// (0x00034bc6) list_single_cale_mrui_row_pane_g1_ParamLimits

0x6125,	// (0x00034bc6) list_single_cale_mrui_row_pane_g1

0x615d,	// (0x00034bfe) list_single_cale_mrui_row_pane_t1_ParamLimits

0x615d,	// (0x00034bfe) list_single_cale_mrui_row_pane_t1

0x616f,	// (0x00034c10) list_single_cale_mrui_row_pane_t2_ParamLimits

0x616f,	// (0x00034c10) list_single_cale_mrui_row_pane_t2

0x61d5,	// (0x00034c76) list_single_cale_mrui_row_pane_t3_ParamLimits

0x61d5,	// (0x00034c76) list_single_cale_mrui_row_pane_t3

0x6204,	// (0x00034ca5) list_single_cale_mrui_row_pane_t4_ParamLimits

0x6204,	// (0x00034ca5) list_single_cale_mrui_row_pane_t4

0x0003,

0xfd48,	// (0x0003e7e9) list_single_cale_mrui_row_pane_t_ParamLimits

0xfd48,	// (0x0003e7e9) list_single_cale_mrui_row_pane_t

0x6233,	// (0x00034cd4) list_single_cmail_header_editor_pane_bg_cp01_ParamLimits

0x6233,	// (0x00034cd4) list_single_cmail_header_editor_pane_bg_cp01

0x6257,	// (0x00034cf8) list_single_cmail_header_editor_pane_bg_cp02_ParamLimits

0x6257,	// (0x00034cf8) list_single_cmail_header_editor_pane_bg_cp02

0xc446,	// (0x0003aee7) main_radioblah_text_pane_t1_ParamLimits

0xc446,	// (0x0003aee7) main_radioblah_text_pane_t1

0x4075,	// (0x00032b16) cam6_indi_pane_cp01

0x407d,	// (0x00032b1e) cam6_mode_pane_cp01

0x4085,	// (0x00032b26) cam6_pano_pane

0x408e,	// (0x00032b2f) cam6_zoom_pane_cp01

0x4096,	// (0x00032b37) cam6_pano_image_pane

0x409f,	// (0x00032b40) cam6_pano_pane_g1

0x378e,	// (0x0003222f) cam6_pano_pane_g2

0x40a8,	// (0x00032b49) cam6_pano_pane_g3

0x40b1,	// (0x00032b52) cam6_pano_pane_g4

0x21e5,	// (0x00030c86) cam6_pano_pane_g5

0x40ba,	// (0x00032b5b) cam6_pano_pane_g6

0x40c2,	// (0x00032b63) cam6_pano_pane_g7

0x40ca,	// (0x00032b6b) cam6_pano_pane_g8

0x40d3,	// (0x00032b74) cam6_pano_pane_g9

0x0008,

0xfd51,	// (0x0003e7f2) cam6_pano_pane_g

0xd981,	// (0x0003c422) main_browser_tag_pane

0x3e99,	// (0x0003293a) grid_navstr_albumart_pane

0x40dc,	// (0x00032b7d) cell_navstr_albumart_pane_ParamLimits

0x40dc,	// (0x00032b7d) cell_navstr_albumart_pane

0xee21,	// (0x0003d8c2) cell_navstr_albumart_pane_g1

0x1591,	// (0x00030032) cell_navstr_albumart_pane_g2

0x15a1,	// (0x00030042) cell_navstr_albumart_pane_g3

0x1599,	// (0x0003003a) cell_navstr_albumart_pane_g4

0x0003,

0xfd64,	// (0x0003e805) cell_navstr_albumart_pane_g

0xc45f,	// (0x0003af00) bt_list_pane_ParamLimits

0xc45f,	// (0x0003af00) bt_list_pane

0xc474,	// (0x0003af15) bt_list_pane_t1

0xc483,	// (0x0003af24) bt_list_pane_t2

0x0001,

0xfd6d,	// (0x0003e80e) bt_list_pane_t

0xd981,	// (0x0003c422) main_cale_prevew_pane

0xc492,	// (0x0003af33) popup_cale_preview_window_ParamLimits

0xc492,	// (0x0003af33) popup_cale_preview_window

0xed86,	// (0x0003d827) bg_popup_preview_window_pane_cp05_ParamLimits

0xed86,	// (0x0003d827) bg_popup_preview_window_pane_cp05

0x40f3,	// (0x00032b94) list_cale_preview_pane_ParamLimits

0x40f3,	// (0x00032b94) list_cale_preview_pane

0xc4a7,	// (0x0003af48) list_double_cale_preview_pane_ParamLimits

0xc4a7,	// (0x0003af48) list_double_cale_preview_pane

0xc4b8,	// (0x0003af59) list_single_cale_preview_pane_ParamLimits

0xc4b8,	// (0x0003af59) list_single_cale_preview_pane

0xc4cc,	// (0x0003af6d) list_single_cale_preview_pane_g1

0xc4d4,	// (0x0003af75) list_single_cale_preview_pane_t1_ParamLimits

0xc4d4,	// (0x0003af75) list_single_cale_preview_pane_t1

0x40ff,	// (0x00032ba0) list_double_cale_preview_pane_g1

0x4107,	// (0x00032ba8) list_double_cale_preview_pane_t1_ParamLimits

0x4107,	// (0x00032ba8) list_double_cale_preview_pane_t1

0xc4e9,	// (0x0003af8a) list_double_cale_preview_pane_t2_ParamLimits

0xc4e9,	// (0x0003af8a) list_double_cale_preview_pane_t2

0x0001,

0xfd72,	// (0x0003e813) list_double_cale_preview_pane_t_ParamLimits

0xfd72,	// (0x0003e813) list_double_cale_preview_pane_t

0xd981,	// (0x0003c422) main_ezdial_pane

0xed86,	// (0x0003d827) main_sp_fs_email_pane_ParamLimits

0xc0c0,	// (0x0003ab61) cmail_ddmenu_btn01_pane_ParamLimits

0xc0c0,	// (0x0003ab61) cmail_ddmenu_btn01_pane

0xc0dd,	// (0x0003ab7e) cmail_ddmenu_btn02_pane_ParamLimits

0xc0dd,	// (0x0003ab7e) cmail_ddmenu_btn02_pane

0xc0fb,	// (0x0003ab9c) cmail_ddmenu_btn03_pane_ParamLimits

0xc0fb,	// (0x0003ab9c) cmail_ddmenu_btn03_pane

0xc19f,	// (0x0003ac40) main_sp_fs_ctrlbar_pane_ParamLimits

0xc1b3,	// (0x0003ac54) main_sp_fs_listscroll_pane_te_cp01_ParamLimits

0xc2b3,	// (0x0003ad54) list_cmail_body_pane_ParamLimits

0x3dc9,	// (0x0003286a) bg_button_pane_cp12

0x3dde,	// (0x0003287f) list_single_cmail_header_detail_pane_g3_ParamLimits

0x3dde,	// (0x0003287f) list_single_cmail_header_detail_pane_g3

0x6040,	// (0x00034ae1) list_single_cmail_header_detail_pane_t2_ParamLimits

0x6040,	// (0x00034ae1) list_single_cmail_header_detail_pane_t2

0x0001,

0xfcf5,	// (0x0003e796) list_single_cmail_header_detail_pane_t_ParamLimits

0xfcf5,	// (0x0003e796) list_single_cmail_header_detail_pane_t

0x6098,	// (0x00034b39) phacti_term_pane_t2_ParamLimits

0x6098,	// (0x00034b39) phacti_term_pane_t2

0x0001,

0xfcff,	// (0x0003e7a0) phacti_term_pane_t_ParamLimits

0xfcff,	// (0x0003e7a0) phacti_term_pane_t

0x411c,	// (0x00032bbd) aid_size_list_single_double

0xc501,	// (0x0003afa2) popup_ezdial_listscroll_window

0xc51a,	// (0x0003afbb) popup_number_entry_window_cp01

0xe2c2,	// (0x0003cd63) bg_popup_call_pane_cp09

0x4128,	// (0x00032bc9) ezdial_list_pane

0x4130,	// (0x00032bd1) scroll_pane_cp23

0x1a65,	// (0x00030506) bg_button_pane_cp028_ParamLimits

0x1a65,	// (0x00030506) bg_button_pane_cp028

0xc526,	// (0x0003afc7) cmail_ddmenu_btn01_pane_g1_ParamLimits

0xc526,	// (0x0003afc7) cmail_ddmenu_btn01_pane_g1

0xc536,	// (0x0003afd7) cmail_ddmenu_btn01_pane_g2_ParamLimits

0xc536,	// (0x0003afd7) cmail_ddmenu_btn01_pane_g2

0x0001,

0xfd77,	// (0x0003e818) cmail_ddmenu_btn01_pane_g_ParamLimits

0xfd77,	// (0x0003e818) cmail_ddmenu_btn01_pane_g

0x4138,	// (0x00032bd9) cmail_ddmenu_btn01_pane_t1_ParamLimits

0x4138,	// (0x00032bd9) cmail_ddmenu_btn01_pane_t1

0xeffc,	// (0x0003da9d) bg_button_pane_cp029_ParamLimits

0xeffc,	// (0x0003da9d) bg_button_pane_cp029

0xc536,	// (0x0003afd7) cmail_ddmenu_btn02_pane_g1_ParamLimits

0xc536,	// (0x0003afd7) cmail_ddmenu_btn02_pane_g1

0xc54e,	// (0x0003afef) cmail_ddmenu_btn02_pane_t1_ParamLimits

0xc54e,	// (0x0003afef) cmail_ddmenu_btn02_pane_t1

0xd98b,	// (0x0003c42c) bg_button_pane_cp031_ParamLimits

0xd98b,	// (0x0003c42c) bg_button_pane_cp031

0xc536,	// (0x0003afd7) cmail_ddmenu_btn03_pane_g1_ParamLimits

0xc536,	// (0x0003afd7) cmail_ddmenu_btn03_pane_g1

0xc54e,	// (0x0003afef) cmail_ddmenu_btn03_pane_t1_ParamLimits

0xc54e,	// (0x0003afef) cmail_ddmenu_btn03_pane_t1

0xa203,	// (0x00038ca4) cell_dialer2_keypad_pane_t1_ParamLimits

0xa21d,	// (0x00038cbe) cell_dialer2_keypad_pane_t1_copy1_ParamLimits

0xa21d,	// (0x00038cbe) cell_dialer2_keypad_pane_t1_copy1

0xbaf5,	// (0x0003a596) ncimui_group_button_pane

0xed86,	// (0x0003d827) main_sp_fs_calendar_pane_ParamLimits

0xc2b3,	// (0x0003ad54) list_single_cmail_header_caption_pane_ParamLimits

0x2fdd,	// (0x00031a7e) aid_recal_txt_sm_pane

0xd981,	// (0x0003c422) mian_recal_day_pane

0x60de,	// (0x00034b7f) popup_sp_fs_cale_preview_window_ParamLimits

0x414d,	// (0x00032bee) list_recal_day_pane

0x6290,	// (0x00034d31) list_single_recal_day_pane_ParamLimits

0x6290,	// (0x00034d31) list_single_recal_day_pane

0x41a1,	// (0x00032c42) list_single_recal_day_pane_g1_ParamLimits

0x41a1,	// (0x00032c42) list_single_recal_day_pane_g1

0x62a2,	// (0x00034d43) list_single_recal_day_pane_g2_ParamLimits

0x62a2,	// (0x00034d43) list_single_recal_day_pane_g2

0x62ae,	// (0x00034d4f) list_single_recal_day_pane_g3_ParamLimits

0x62ae,	// (0x00034d4f) list_single_recal_day_pane_g3

0x62ba,	// (0x00034d5b) list_single_recal_day_pane_g4_ParamLimits

0x62ba,	// (0x00034d5b) list_single_recal_day_pane_g4

0x62c6,	// (0x00034d67) list_single_recal_day_pane_g5_ParamLimits

0x62c6,	// (0x00034d67) list_single_recal_day_pane_g5

0x62da,	// (0x00034d7b) list_single_recal_day_pane_g6_ParamLimits

0x62da,	// (0x00034d7b) list_single_recal_day_pane_g6

0x0004,

0xfd86,	// (0x0003e827) list_single_recal_day_pane_g_ParamLimits

0xfd86,	// (0x0003e827) list_single_recal_day_pane_g

0x62f1,	// (0x00034d92) list_single_recal_day_pane_t1

0x6303,	// (0x00034da4) list_single_recal_day_pane_t2

0x0001,

0xfd91,	// (0x0003e832) list_single_recal_day_pane_t

0xc572,	// (0x0003b013) ncimui_query_button_pane_ParamLimits

0xc572,	// (0x0003b013) ncimui_query_button_pane

0xc582,	// (0x0003b023) ncimui_query_button_pane_t1_ParamLimits

0xc582,	// (0x0003b023) ncimui_query_button_pane_t1

0x41eb,	// (0x00032c8c) ncimui_query_button_pane_t2_ParamLimits

0x41eb,	// (0x00032c8c) ncimui_query_button_pane_t2

0x0001,

0xfd96,	// (0x0003e837) ncimui_query_button_pane_t_ParamLimits

0xfd96,	// (0x0003e837) ncimui_query_button_pane_t

0xc595,	// (0x0003b036) query_button_pane_ParamLimits

0xc595,	// (0x0003b036) query_button_pane

0xd981,	// (0x0003c422) bg_button_pane_cp0028

0x41fe,	// (0x00032c9f) query_button_pane_t1

0x8e87,	// (0x00037928) main_tport_pane_ParamLimits

0xc1ff,	// (0x0003aca0) bg_popup_window_pane_cp01_ParamLimits

0xc1ff,	// (0x0003aca0) bg_popup_window_pane_cp01

0xc20b,	// (0x0003acac) heading_pane_cp08_ParamLimits

0xc20b,	// (0x0003acac) heading_pane_cp08

0xc217,	// (0x0003acb8) heading_pane_cp07_ParamLimits

0xc217,	// (0x0003acb8) heading_pane_cp07

0x3d6a,	// (0x0003280b) cell_tport_appsw_pane_g2

0x0002,

0xfce2,	// (0x0003e783) cell_tport_appsw_pane_g

0x5816,	// (0x000342b7) input_candi_list_open_g1

0xe70e,	// (0x0003d1af) list_cale_time_pane_g6_ParamLimits

0xe70e,	// (0x0003d1af) list_cale_time_pane_g6

0x933f,	// (0x00037de0) aid_size_touch_calib_1_ParamLimits

0x933f,	// (0x00037de0) aid_size_touch_calib_1

0x934b,	// (0x00037dec) aid_size_touch_calib_2_ParamLimits

0x934b,	// (0x00037dec) aid_size_touch_calib_2

0x9357,	// (0x00037df8) aid_size_touch_calib_3_ParamLimits

0x9357,	// (0x00037df8) aid_size_touch_calib_3

0x9365,	// (0x00037e06) aid_size_touch_calib_4_ParamLimits

0x9365,	// (0x00037e06) aid_size_touch_calib_4

0x9373,	// (0x00037e14) main_touch_calib_button_group_pane_ParamLimits

0x9373,	// (0x00037e14) main_touch_calib_button_group_pane

0x9381,	// (0x00037e22) main_touch_calib_pane_g1_ParamLimits

0x938d,	// (0x00037e2e) main_touch_calib_pane_g2_ParamLimits

0x9399,	// (0x00037e3a) main_touch_calib_pane_g3_ParamLimits

0x93a5,	// (0x00037e46) main_touch_calib_pane_g4_ParamLimits

0xf6dd,	// (0x0003e17e) main_touch_calib_pane_g_ParamLimits

0x93b1,	// (0x00037e52) main_touch_calib_pane_t1_ParamLimits

0x93c6,	// (0x00037e67) main_touch_calib_pane_t2_ParamLimits

0x93db,	// (0x00037e7c) main_touch_calib_pane_t3_ParamLimits

0x93ed,	// (0x00037e8e) main_touch_calib_pane_t4_ParamLimits

0x93ff,	// (0x00037ea0) main_touch_calib_pane_t5_ParamLimits

0xf6e6,	// (0x0003e187) main_touch_calib_pane_t_ParamLimits

0x1fe6,	// (0x00030a87) list_single_fp_cale_pane_g3_ParamLimits

0x1fe6,	// (0x00030a87) list_single_fp_cale_pane_g3

0xed86,	// (0x0003d827) bg_button_pane_cp012_ParamLimits

0xed86,	// (0x0003d827) bg_vkb2_func_pane_cp03_ParamLimits

0xaebc,	// (0x0003995d) cell_vitu2_function_top_pane_g1_ParamLimits

0xed86,	// (0x0003d827) bg_vkb2_func_pane_cp04_ParamLimits

0xba81,	// (0x0003a522) main_ncimui_button_group_pane_ParamLimits

0xba81,	// (0x0003a522) main_ncimui_button_group_pane

0xbae3,	// (0x0003a584) main_ncimui_pane_t3_ParamLimits

0xbae3,	// (0x0003a584) main_ncimui_pane_t3

0x3eaf,	// (0x00032950) phacti_button_group_pane

0x411c,	// (0x00032bbd) aid_size_list_single_double_ParamLimits

0xc501,	// (0x0003afa2) popup_ezdial_listscroll_window_ParamLimits

0xc51a,	// (0x0003afbb) popup_number_entry_window_cp01_ParamLimits

0xc5a2,	// (0x0003b043) phacti_button_pane_ParamLimits

0xc5a2,	// (0x0003b043) phacti_button_pane

0xd981,	// (0x0003c422) bg_button_pane_cp14

0x420c,	// (0x00032cad) phacti_button_pane_t1

0xc5b1,	// (0x0003b052) main_touch_calib_button_pane_ParamLimits

0xc5b1,	// (0x0003b052) main_touch_calib_button_pane

0xe0f5,	// (0x0003cb96) bg_button_pane_cp18_ParamLimits

0xe0f5,	// (0x0003cb96) bg_button_pane_cp18

0xc5c2,	// (0x0003b063) main_touch_calib_button_pane_t1_ParamLimits

0xc5c2,	// (0x0003b063) main_touch_calib_button_pane_t1

0xc5d8,	// (0x0003b079) main_touch_calib_button_pane_t2_ParamLimits

0xc5d8,	// (0x0003b079) main_touch_calib_button_pane_t2

0x0001,

0xfd9b,	// (0x0003e83c) main_touch_calib_button_pane_t_ParamLimits

0xfd9b,	// (0x0003e83c) main_touch_calib_button_pane_t

0xd981,	// (0x0003c422) cell_ncimui_button_pane

0xd981,	// (0x0003c422) bg_button_pane_cp032

0x421a,	// (0x00032cbb) cell_ncimui_button_pane_t1

0xa26f,	// (0x00038d10) image3_infobar_pane_ParamLimits

0xa26f,	// (0x00038d10) image3_infobar_pane

0xbe2c,	// (0x0003a8cd) fs_bigclock_status_pane_ParamLimits

0xbe2c,	// (0x0003a8cd) fs_bigclock_status_pane

0xbe39,	// (0x0003a8da) main_fs_bigclock_clock_pane_ParamLimits

0xbe39,	// (0x0003a8da) main_fs_bigclock_clock_pane

0xbe51,	// (0x0003a8f2) main_fs_bigclock_indi_pane_ParamLimits

0xbe51,	// (0x0003a8f2) main_fs_bigclock_indi_pane

0xbe71,	// (0x0003a912) main_fs_bigclock_swipe_pane_ParamLimits

0xbe71,	// (0x0003a912) main_fs_bigclock_swipe_pane

0xd981,	// (0x0003c422) main_fs_clock_dumped_data

0x389b,	// (0x0003233c) list_single_fs_bigclock_indicator_pane_g1_ParamLimits

0x389b,	// (0x0003233c) list_single_fs_bigclock_indicator_pane_g1

0x38b5,	// (0x00032356) list_single_fs_bigclock_indicator_pane_g2_ParamLimits

0x38b5,	// (0x00032356) list_single_fs_bigclock_indicator_pane_g2

0x38cf,	// (0x00032370) list_single_fs_bigclock_indicator_pane_g3_ParamLimits

0x38cf,	// (0x00032370) list_single_fs_bigclock_indicator_pane_g3

0x38e9,	// (0x0003238a) list_single_fs_bigclock_indicator_pane_g4_ParamLimits

0x38e9,	// (0x0003238a) list_single_fs_bigclock_indicator_pane_g4

0x0004,

0xfc04,	// (0x0003e6a5) list_single_fs_bigclock_indicator_pane_g_ParamLimits

0xfc04,	// (0x0003e6a5) list_single_fs_bigclock_indicator_pane_g

0x3912,	// (0x000323b3) list_single_fs_bigclock_indicator_pane_t1_ParamLimits

0x3912,	// (0x000323b3) list_single_fs_bigclock_indicator_pane_t1

0x393a,	// (0x000323db) list_single_fs_bigclock_indicator_pane_t2_ParamLimits

0x393a,	// (0x000323db) list_single_fs_bigclock_indicator_pane_t2

0x3962,	// (0x00032403) list_single_fs_bigclock_indicator_pane_t3_ParamLimits

0x3962,	// (0x00032403) list_single_fs_bigclock_indicator_pane_t3

0x398a,	// (0x0003242b) list_single_fs_bigclock_indicator_pane_t4_ParamLimits

0x398a,	// (0x0003242b) list_single_fs_bigclock_indicator_pane_t4

0x0004,

0xfc0f,	// (0x0003e6b0) list_single_fs_bigclock_indicator_pane_t_ParamLimits

0xfc0f,	// (0x0003e6b0) list_single_fs_bigclock_indicator_pane_t

0x4228,	// (0x00032cc9) image3_infobar_fav_pane_ParamLimits

0x4228,	// (0x00032cc9) image3_infobar_fav_pane

0x4238,	// (0x00032cd9) image3_infobar_loc_pane_ParamLimits

0x4238,	// (0x00032cd9) image3_infobar_loc_pane

0x424c,	// (0x00032ced) image3_infobar_time_pane_ParamLimits

0x424c,	// (0x00032ced) image3_infobar_time_pane

0xe343,	// (0x0003cde4) image3_infobar_time_pane_g1

0x425c,	// (0x00032cfd) image3_infobar_time_pane_t1

0xe343,	// (0x0003cde4) image3_infobar_loc_pane_g1

0x426a,	// (0x00032d0b) image3_infobar_loc_pane_g2

0x0001,

0xfda0,	// (0x0003e841) image3_infobar_loc_pane_g

0x4272,	// (0x00032d13) image3_infobar_loc_pane_t1

0xe343,	// (0x0003cde4) image3_infobar_fav_pane_g1

0x4280,	// (0x00032d21) image3_infobar_fav_pane_g2

0x0001,

0xfda5,	// (0x0003e846) image3_infobar_fav_pane_g

0x4288,	// (0x00032d29) fs_bigclock_status_battery_pane

0x4291,	// (0x00032d32) fs_bigclock_status_signal_pane

0x429a,	// (0x00032d3b) fs_bigclock_status_title_pane

0x42a3,	// (0x00032d44) fs_bigclock_status_signal_pane_g1

0x42ac,	// (0x00032d4d) fs_bigclock_status_signal_pane_g2

0x0001,

0xfdaa,	// (0x0003e84b) fs_bigclock_status_signal_pane_g

0x42b4,	// (0x00032d55) fs_bigclock_status_battery_pane_g1

0x42bd,	// (0x00032d5e) fs_bigclock_status_battery_pane_g2

0x0001,

0xfdaf,	// (0x0003e850) fs_bigclock_status_battery_pane_g

0x42c5,	// (0x00032d66) fs_bigclock_status_title_pane_t1

0xe08d,	// (0x0003cb2e) main_fs_bigclock_clock_pane_g1

0xc5f6,	// (0x0003b097) main_fs_bigclock_clock_pane_g2

0xc603,	// (0x0003b0a4) main_fs_bigclock_clock_pane_g3

0xc603,	// (0x0003b0a4) main_fs_bigclock_clock_pane_g4

0x0003,

0xfdb4,	// (0x0003e855) main_fs_bigclock_clock_pane_g

0xc60f,	// (0x0003b0b0) main_fs_bigclock_clock_pane_t1

0xc621,	// (0x0003b0c2) main_fs_bigclock_clock_pane_t2

0x0001,

0xfdbd,	// (0x0003e85e) main_fs_bigclock_clock_pane_t

0x42d3,	// (0x00032d74) list_single_fs_bigclock_indicator_pane_ParamLimits

0x42d3,	// (0x00032d74) list_single_fs_bigclock_indicator_pane

0x42e4,	// (0x00032d85) list_single_fs_bigclock_pane_ParamLimits

0x42e4,	// (0x00032d85) list_single_fs_bigclock_pane

0x430a,	// (0x00032dab) main_fs_bigclock_indicator_pane_t1

0x4319,	// (0x00032dba) list_single_fs_bigclock_pane_g1

0x4321,	// (0x00032dc2) list_single_fs_bigclock_pane_t1

0xe343,	// (0x0003cde4) main_fs_bigclock_swipe_pane_g1

0x4361,	// (0x00032e02) main_fs_bigclock_swipe_pane_g2

0x0001,

0xfdce,	// (0x0003e86f) main_fs_bigclock_swipe_pane_g

0x4369,	// (0x00032e0a) main_fs_bigclock_swipe_pane_t1_ParamLimits

0x4369,	// (0x00032e0a) main_fs_bigclock_swipe_pane_t1

0x8280,	// (0x00036d21) call_type_pane_ParamLimits

0xd981,	// (0x0003c422) main_btmg_pane

0x6151,	// (0x00034bf2) list_single_cale_mrui_row_pane_g2_ParamLimits

0x6151,	// (0x00034bf2) list_single_cale_mrui_row_pane_g2

0x0002,

0xfd41,	// (0x0003e7e2) list_single_cale_mrui_row_pane_g_ParamLimits

0xfd41,	// (0x0003e7e2) list_single_cale_mrui_row_pane_g

0x627f,	// (0x00034d20) list_recal_vselct_arw_lo_pane

0x417e,	// (0x00032c1f) list_recal_vselct_arw_up_pane

0x6287,	// (0x00034d28) list_recal_vselct_pane

0x4386,	// (0x00032e27) btmg_button_pane

0xc676,	// (0x0003b117) main_btmg_pane_g1

0xd981,	// (0x0003c422) bg_button_pane_cp044

0x438e,	// (0x00032e2f) btmg_button_pane_t1

0x1731,	// (0x000301d2) aid_listscroll_gen

0xed86,	// (0x0003d827) main_cntbar_detail_pane

0x3d90,	// (0x00032831) list_cmail_folder_pane

0x3daf,	// (0x00032850) sp_fs_scroll_pane_cp03_ParamLimits

0xc2b3,	// (0x0003ad54) list_single_fs_dyc_pane_cp01_ParamLimits

0xc2b3,	// (0x0003ad54) list_single_fs_dyc_pane_cp01

0x43b2,	// (0x00032e53) aid_size_cmail_indent

0x6318,	// (0x00034db9) list_single_dyc_row_pane_cp01

0xc698,	// (0x0003b139) cntbar_detail_list_pane_ParamLimits

0xc698,	// (0x0003b139) cntbar_detail_list_pane

0xc6ce,	// (0x0003b16f) main_cntbar_detail_cont_pane_ParamLimits

0xc6ce,	// (0x0003b16f) main_cntbar_detail_cont_pane

0xc6da,	// (0x0003b17b) scroll_pane_cp032_ParamLimits

0xc6da,	// (0x0003b17b) scroll_pane_cp032

0x4779,	// (0x0003321a) cntbar_detail_list_event_pane_ParamLimits

0x4779,	// (0x0003321a) cntbar_detail_list_event_pane

0xc6a4,	// (0x0003b145) cntbar_detail_list_shct_pane

0x43c4,	// (0x00032e65) aid_list_gen

0xe1f0,	// (0x0003cc91) aid_scroll

0x2f26,	// (0x000319c7) aid_size_touch_scroll_bar

0x2fe6,	// (0x00031a87) aid_list_double

0xb3d0,	// (0x00039e71) aid_list_single

0xb3d0,	// (0x00039e71) aid_list_single_lg

0x6321,	// (0x00034dc2) aid_list_z_g_a_sm

0x6329,	// (0x00034dca) aid_list_z_g_d

0x6331,	// (0x00034dd2) aid_txt_z_prm

0x633f,	// (0x00034de0) aid_txt_z_prm_cp01

0x634d,	// (0x00034dee) aid_txt_z_sec

0xc6e6,	// (0x0003b187) main_cntbar_detail_cont_pane_g1_ParamLimits

0xc6e6,	// (0x0003b187) main_cntbar_detail_cont_pane_g1

0xc6f3,	// (0x0003b194) main_cntbar_detail_cont_pane_g2_ParamLimits

0xc6f3,	// (0x0003b194) main_cntbar_detail_cont_pane_g2

0x0001,

0xfdd3,	// (0x0003e874) main_cntbar_detail_cont_pane_g_ParamLimits

0xfdd3,	// (0x0003e874) main_cntbar_detail_cont_pane_g

0x43cd,	// (0x00032e6e) main_cntbar_detail_cont_pane_t1

0x43db,	// (0x00032e7c) main_cntbar_detail_cont_pane_t2

0x43e9,	// (0x00032e8a) main_cntbar_detail_cont_pane_t3

0x0002,

0xfdd8,	// (0x0003e879) main_cntbar_detail_cont_pane_t

0xc6ff,	// (0x0003b1a0) cell_cntbar_detail_list_shct_pane_ParamLimits

0xc6ff,	// (0x0003b1a0) cell_cntbar_detail_list_shct_pane

0x43f7,	// (0x00032e98) cntbar_detail_list_shct_pane_g1

0x4400,	// (0x00032ea1) cntbar_detail_list_shct_pane_g2

0x0001,

0xfddf,	// (0x0003e880) cntbar_detail_list_shct_pane_g

0xc711,	// (0x0003b1b2) cntbar_detail_list_event_pane_g1_ParamLimits

0xc711,	// (0x0003b1b2) cntbar_detail_list_event_pane_g1

0xc71d,	// (0x0003b1be) cntbar_detail_list_event_pane_g2_ParamLimits

0xc71d,	// (0x0003b1be) cntbar_detail_list_event_pane_g2

0x0005,

0xfde4,	// (0x0003e885) cntbar_detail_list_event_pane_g_ParamLimits

0xfde4,	// (0x0003e885) cntbar_detail_list_event_pane_g

0xc789,	// (0x0003b22a) cntbar_detail_list_event_pane_t1_ParamLimits

0xc789,	// (0x0003b22a) cntbar_detail_list_event_pane_t1

0xc79e,	// (0x0003b23f) cntbar_detail_list_event_pane_t2_ParamLimits

0xc79e,	// (0x0003b23f) cntbar_detail_list_event_pane_t2

0x0002,

0xfdf1,	// (0x0003e892) cntbar_detail_list_event_pane_t_ParamLimits

0xfdf1,	// (0x0003e892) cntbar_detail_list_event_pane_t

0xe343,	// (0x0003cde4) cell_cntbar_detail_list_shct_pane_g1

0xec7b,	// (0x0003d71c) navi_pane_mv_g3

0xed86,	// (0x0003d827) main_cntbar_detail_pane_ParamLimits

0xd981,	// (0x0003c422) main_notif_wgt_pane

0x9f45,	// (0x000389e6) aid_tch_main_mp4_pane_g4

0xa184,	// (0x00038c25) popup_slider_window_cp02

0x6275,	// (0x00034d16) list_recal_day_event_pane

0xc67e,	// (0x0003b11f) cntbar_detail_btn_pane_ParamLimits

0xc67e,	// (0x0003b11f) cntbar_detail_btn_pane

0xc68a,	// (0x0003b12b) cntbar_detail_btn_pane_cp01_ParamLimits

0xc68a,	// (0x0003b12b) cntbar_detail_btn_pane_cp01

0xc6a4,	// (0x0003b145) cntbar_detail_list_shct_pane_ParamLimits

0xc6b0,	// (0x0003b151) cntbar_detail_pane_g1_ParamLimits

0xc6b0,	// (0x0003b151) cntbar_detail_pane_g1

0xc6bc,	// (0x0003b15d) cntbar_detail_pane_t1_ParamLimits

0xc6bc,	// (0x0003b15d) cntbar_detail_pane_t1

0xc729,	// (0x0003b1ca) cntbar_detail_list_event_pane_g3_ParamLimits

0xc729,	// (0x0003b1ca) cntbar_detail_list_event_pane_g3

0xc741,	// (0x0003b1e2) cntbar_detail_list_event_pane_g4_ParamLimits

0xc741,	// (0x0003b1e2) cntbar_detail_list_event_pane_g4

0xc759,	// (0x0003b1fa) cntbar_detail_list_event_pane_g5_ParamLimits

0xc759,	// (0x0003b1fa) cntbar_detail_list_event_pane_g5

0xc771,	// (0x0003b212) cntbar_detail_list_event_pane_g6_ParamLimits

0xc771,	// (0x0003b212) cntbar_detail_list_event_pane_g6

0xc7b3,	// (0x0003b254) cntbar_detail_list_event_pane_t3_ParamLimits

0xc7b3,	// (0x0003b254) cntbar_detail_list_event_pane_t3

0xc7c5,	// (0x0003b266) popup_notif_wgt_window_ParamLimits

0xc7c5,	// (0x0003b266) popup_notif_wgt_window

0xc7d3,	// (0x0003b274) popup_submenu_window_cp01_ParamLimits

0xc7d3,	// (0x0003b274) popup_submenu_window_cp01

0xe2c2,	// (0x0003cd63) bg_popup_window_pane_cp10

0x4409,	// (0x00032eaa) listscroll_notif_wgt_pane

0x441a,	// (0x00032ebb) list_notif_wgt_window

0x4423,	// (0x00032ec4) scroll_pane_cp033

0xc7df,	// (0x0003b280) list_notif_wgt_row_pane_ParamLimits

0xc7df,	// (0x0003b280) list_notif_wgt_row_pane

0x442c,	// (0x00032ecd) aid_size_list_notif_wgt_del

0x4439,	// (0x00032eda) list_notif_wgt_row_pane_g1

0x4445,	// (0x00032ee6) list_notif_wgt_row_pane_g2

0x4459,	// (0x00032efa) list_notif_wgt_row_pane_g3

0x0002,

0xfdf8,	// (0x0003e899) list_notif_wgt_row_pane_g

0x4466,	// (0x00032f07) list_notif_wgt_row_pane_t1

0x447c,	// (0x00032f1d) list_notif_wgt_row_pane_t2

0x448e,	// (0x00032f2f) list_notif_wgt_row_pane_t3

0x0002,

0xfdff,	// (0x0003e8a0) list_notif_wgt_row_pane_t

0x2c32,	// (0x000316d3) list_recal_day_event_pane_g1

0x44a0,	// (0x00032f41) list_recal_day_event_pane_t1

0xd981,	// (0x0003c422) bg_button_pane_cp045

0xc7f1,	// (0x0003b292) cntbar_detail_btn_pane_t1

0xeffc,	// (0x0003da9d) main_callh_pane_ParamLimits

0xeffc,	// (0x0003da9d) main_callh_pane

0xd981,	// (0x0003c422) main_coverflow0_pane

0xd981,	// (0x0003c422) main_wgtman_pane

0xbe83,	// (0x0003a924) main_fs_bigclock_unlock_btn_pane_ParamLimits

0xbe83,	// (0x0003a924) main_fs_bigclock_unlock_btn_pane

0x3d62,	// (0x00032803) bg_button_pane_cp16

0x3d72,	// (0x00032813) cell_tport_appsw_pane_g3

0xc7ff,	// (0x0003b2a0) cf0_flow_pane_ParamLimits

0xc7ff,	// (0x0003b2a0) cf0_flow_pane

0x44af,	// (0x00032f50) listscroll_cf0_pane

0x44b8,	// (0x00032f59) main_cf0_pane_g1

0xc80e,	// (0x0003b2af) main_cf0_pane_t1_ParamLimits

0xc80e,	// (0x0003b2af) main_cf0_pane_t1

0xc820,	// (0x0003b2c1) main_cf0_pane_t2_ParamLimits

0xc820,	// (0x0003b2c1) main_cf0_pane_t2

0x0001,

0xfe0b,	// (0x0003e8ac) main_cf0_pane_t_ParamLimits

0xfe0b,	// (0x0003e8ac) main_cf0_pane_t

0x44ca,	// (0x00032f6b) scroll_pane_cp11

0xc832,	// (0x0003b2d3) cf0_flow_pane_g1

0xc83a,	// (0x0003b2db) cf0_flow_pane_g2

0x0001,

0xfe10,	// (0x0003e8b1) cf0_flow_pane_g

0xc842,	// (0x0003b2e3) cf0_flow_pane_t1

0xd981,	// (0x0003c422) main_call6_pane

0xd981,	// (0x0003c422) main_calllock_pane

0xc850,	// (0x0003b2f1) call6_btn_grp_pane_ParamLimits

0xc850,	// (0x0003b2f1) call6_btn_grp_pane

0xc85d,	// (0x0003b2fe) call6_pane_g1_ParamLimits

0xc85d,	// (0x0003b2fe) call6_pane_g1

0xc86a,	// (0x0003b30b) popup_call6_1st_window_ParamLimits

0xc86a,	// (0x0003b30b) popup_call6_1st_window

0xc876,	// (0x0003b317) popup_call6_2nd_window_ParamLimits

0xc876,	// (0x0003b317) popup_call6_2nd_window

0xc882,	// (0x0003b323) cell_call6_btn_pane_ParamLimits

0xc882,	// (0x0003b323) cell_call6_btn_pane

0xe2c2,	// (0x0003cd63) bg_popup_call2_in_pane_cp03

0x44d3,	// (0x00032f74) popup_call6_1st_window_g1

0x44db,	// (0x00032f7c) popup_call6_1st_window_g2

0x44e3,	// (0x00032f84) popup_call6_1st_window_g3

0x0002,

0xfe15,	// (0x0003e8b6) popup_call6_1st_window_g

0x44eb,	// (0x00032f8c) popup_call6_1st_window_t1

0x44fa,	// (0x00032f9b) popup_call6_1st_window_t2

0x4508,	// (0x00032fa9) popup_call6_1st_window_t3

0x0002,

0xfe1c,	// (0x0003e8bd) popup_call6_1st_window_t

0xe2c2,	// (0x0003cd63) bg_popup_call2_in_pane_cp04

0x4516,	// (0x00032fb7) popup_call6_2nd_window_g1

0x451e,	// (0x00032fbf) popup_call6_2nd_window_g2

0x4526,	// (0x00032fc7) popup_call6_2nd_window_g3

0x0002,

0xfe23,	// (0x0003e8c4) popup_call6_2nd_window_g

0x452e,	// (0x00032fcf) popup_call6_2nd_window_t1

0xd981,	// (0x0003c422) bg_button_pane_cp15

0xc891,	// (0x0003b332) cell_call6_btn_pane_g1

0xc89a,	// (0x0003b33b) cell_call6_btn_pane_t1

0xc8a9,	// (0x0003b34a) listscroll_wgtman_pane_ParamLimits

0xc8a9,	// (0x0003b34a) listscroll_wgtman_pane

0xc8c5,	// (0x0003b366) wgtman_btn_pane_ParamLimits

0xc8c5,	// (0x0003b366) wgtman_btn_pane

0xe9db,	// (0x0003d47c) aid_scroll_copy1

0x4555,	// (0x00032ff6) list_wgtman_pane

0xc8f8,	// (0x0003b399) wgtman_btn_pane_g1_ParamLimits

0xc8f8,	// (0x0003b399) wgtman_btn_pane_g1

0xc920,	// (0x0003b3c1) wgtman_btn_pane_t1_ParamLimits

0xc920,	// (0x0003b3c1) wgtman_btn_pane_t1

0x455f,	// (0x00033000) wgtman_btn_pane_t2_ParamLimits

0x455f,	// (0x00033000) wgtman_btn_pane_t2

0x0001,

0xfe2a,	// (0x0003e8cb) wgtman_btn_pane_t_ParamLimits

0xfe2a,	// (0x0003e8cb) wgtman_btn_pane_t

0x47d6,	// (0x00033277) listrow_wgtman_pane_ParamLimits

0x47d6,	// (0x00033277) listrow_wgtman_pane

0xc957,	// (0x0003b3f8) listrow_wgtman_pane_g1

0xc964,	// (0x0003b405) listrow_wgtman_pane_g2

0x0001,

0xfe2f,	// (0x0003e8d0) listrow_wgtman_pane_g

0x635b,	// (0x00034dfc) listrow_wgtman_pane_t1

0x6373,	// (0x00034e14) listrow_wgtman_pane_t2

0x0001,

0xfe34,	// (0x0003e8d5) listrow_wgtman_pane_t

0x6399,	// (0x00034e3a) wait_bar_pane_cp09

0x4576,	// (0x00033017) main_calllock_btn_pane

0x457e,	// (0x0003301f) main_calllock_pane_g1

0xd981,	// (0x0003c422) bg_button_pane_cp17

0x4587,	// (0x00033028) main_calllock_btn_pane_g1

0x4590,	// (0x00033031) main_calllock_btn_pane_t1

0xd981,	// (0x0003c422) main_dialer3_pane

0xd981,	// (0x0003c422) main_fmrd2_pane

0xe343,	// (0x0003cde4) main_fs_bigclock_unlock_btn_pane_g1

0x45a7,	// (0x00033048) main_fs_bigclock_unlock_btn_pane_t1

0xc97c,	// (0x0003b41d) area_fmrd2_info_pane_ParamLimits

0xc97c,	// (0x0003b41d) area_fmrd2_info_pane

0xc988,	// (0x0003b429) area_fmrd2_visual_pane_ParamLimits

0xc988,	// (0x0003b429) area_fmrd2_visual_pane

0xc996,	// (0x0003b437) fmrd2_indi_pane_ParamLimits

0xc996,	// (0x0003b437) fmrd2_indi_pane

0xc9a3,	// (0x0003b444) area_fmrd2_visual_pane_g1

0xc9ab,	// (0x0003b44c) area_fmrd2_visual_pane_t1

0xc9b9,	// (0x0003b45a) area_fmrd2_visual_pane_t2

0xc9c7,	// (0x0003b468) area_fmrd2_visual_pane_t3

0x0002,

0xfe3e,	// (0x0003e8df) area_fmrd2_visual_pane_t

0xc9d5,	// (0x0003b476) area_fmrd2_info_pane_g1

0xc9dd,	// (0x0003b47e) area_fmrd2_info_pane_t1

0xc9eb,	// (0x0003b48c) area_fmrd2_info_pane_t2

0xc9f9,	// (0x0003b49a) area_fmrd2_info_pane_t3

0xca07,	// (0x0003b4a8) area_fmrd2_info_pane_t4

0x0003,

0xfe45,	// (0x0003e8e6) area_fmrd2_info_pane_t

0xca15,	// (0x0003b4b6) fmrd2_indi_pane_t1

0xca23,	// (0x0003b4c4) fmrd2_indi_pane_t2

0xca31,	// (0x0003b4d2) fmrd2_indi_pane_t3

0x0002,

0xfe4e,	// (0x0003e8ef) fmrd2_indi_pane_t

0x38f8,	// (0x00032399) list_single_fs_bigclock_indicator_pane_g5_ParamLimits

0x38f8,	// (0x00032399) list_single_fs_bigclock_indicator_pane_g5

0x39a6,	// (0x00032447) list_single_fs_bigclock_indicator_pane_t5_ParamLimits

0x39a6,	// (0x00032447) list_single_fs_bigclock_indicator_pane_t5

0xc38f,	// (0x0003ae30) aid_cell_bcale_month_pane_ParamLimits

0xc38f,	// (0x0003ae30) aid_cell_bcale_month_pane

0xc3ad,	// (0x0003ae4e) bcale_month_pane_ParamLimits

0xc3ad,	// (0x0003ae4e) bcale_month_pane

0xc3c3,	// (0x0003ae64) bcale_preview_pane_ParamLimits

0xc3c3,	// (0x0003ae64) bcale_preview_pane

0x4321,	// (0x00032dc2) list_single_fs_bigclock_pane_t1_ParamLimits

0x433d,	// (0x00032dde) list_single_fs_bigclock_pane_t2_ParamLimits

0x433d,	// (0x00032dde) list_single_fs_bigclock_pane_t2

0x0001,

0xfdc9,	// (0x0003e86a) list_single_fs_bigclock_pane_t_ParamLimits

0xfdc9,	// (0x0003e86a) list_single_fs_bigclock_pane_t

0x459f,	// (0x00033040) main_fs_bigclock_unlock_btn_pane_g2

0x0001,

0xfe39,	// (0x0003e8da) main_fs_bigclock_unlock_btn_pane_g

0xca3f,	// (0x0003b4e0) aid_dia3_key_size_ParamLimits

0xca3f,	// (0x0003b4e0) aid_dia3_key_size

0xca4b,	// (0x0003b4ec) aid_dia3_listrow_size_ParamLimits

0xca4b,	// (0x0003b4ec) aid_dia3_listrow_size

0xca59,	// (0x0003b4fa) dia3_keypad_fun_pane_ParamLimits

0xca59,	// (0x0003b4fa) dia3_keypad_fun_pane

0xca65,	// (0x0003b506) dia3_keypad_num_pane_ParamLimits

0xca65,	// (0x0003b506) dia3_keypad_num_pane

0xca71,	// (0x0003b512) dia3_listscroll_pane_ParamLimits

0xca71,	// (0x0003b512) dia3_listscroll_pane

0xca7d,	// (0x0003b51e) dia3_numentry_pane_ParamLimits

0xca7d,	// (0x0003b51e) dia3_numentry_pane

0x45b5,	// (0x00033056) dia3_list_pane

0x45be,	// (0x0003305f) scroll_pane_cp12

0xd981,	// (0x0003c422) bg_dia3_numentry_pane

0xca89,	// (0x0003b52a) dia3_numentry_pane_t1

0xca98,	// (0x0003b539) cell_dia3_key_num_pane

0xcaa0,	// (0x0003b541) cell_dia3_key0_fun_pane_ParamLimits

0xcaa0,	// (0x0003b541) cell_dia3_key0_fun_pane

0xcaad,	// (0x0003b54e) cell_dia3_key1_fun_pane_ParamLimits

0xcaad,	// (0x0003b54e) cell_dia3_key1_fun_pane

0xcaba,	// (0x0003b55b) dia3_listrow_pane

0x3607,	// (0x000320a8) bg_dia3_numentry_pane_g1

0xd981,	// (0x0003c422) bg_button_pane_cp21

0x45c7,	// (0x00033068) cell_dia3_key_num_pane_t1

0x45d5,	// (0x00033076) cell_dia3_key_num_pane_t2

0x45e4,	// (0x00033085) cell_dia3_key_num_pane_t3

0x45f3,	// (0x00033094) cell_dia3_key_num_pane_t4

0x0003,

0xfe55,	// (0x0003e8f6) cell_dia3_key_num_pane_t

0xd981,	// (0x0003c422) bg_button_pane_cp19

0x4602,	// (0x000330a3) cell_dia3_key0_fun_pane_g1

0xd981,	// (0x0003c422) bg_button_pane_cp20

0xcac7,	// (0x0003b568) cell_dia3_key1_fun_pane_g1

0xcacf,	// (0x0003b570) area_left_week_number_pane

0xcae0,	// (0x0003b581) area_top_day_name_pane

0xcaec,	// (0x0003b58d) frame_month_view_pane

0x460a,	// (0x000330ab) grid_month_view_pane

0xcafd,	// (0x0003b59e) cell_top_day_name_pane_ParamLimits

0xcafd,	// (0x0003b59e) cell_top_day_name_pane

0xcb13,	// (0x0003b5b4) cell_area_left_week_number_pane_ParamLimits

0xcb13,	// (0x0003b5b4) cell_area_left_week_number_pane

0xcb32,	// (0x0003b5d3) cell_month_view_pane_ParamLimits

0xcb32,	// (0x0003b5d3) cell_month_view_pane

0x4618,	// (0x000330b9) frm_month_g1

0xcb58,	// (0x0003b5f9) frm_month_g2

0xcb67,	// (0x0003b608) frm_month_g3

0xcb76,	// (0x0003b617) frm_month_g4

0xcb85,	// (0x0003b626) frm_month_g5

0xcb94,	// (0x0003b635) frm_month_g6

0xcba3,	// (0x0003b644) frm_month_g7

0x4625,	// (0x000330c6) frm_month_g8

0xcbb2,	// (0x0003b653) frm_month_g9

0xcbbf,	// (0x0003b660) frm_month_g10

0xcbcc,	// (0x0003b66d) frm_month_g11

0xcbd9,	// (0x0003b67a) frm_month_g12

0xcbe6,	// (0x0003b687) frm_month_g13

0xcbf3,	// (0x0003b694) frm_month_g14

0xcc00,	// (0x0003b6a1) frm_month_g15

0xcc0d,	// (0x0003b6ae) frm_month_g16

0x000f,

0xfe5e,	// (0x0003e8ff) frm_month_g

0x4632,	// (0x000330d3) cell_top_day_name_pane_t1

0xcc1a,	// (0x0003b6bb) cell_area_left_week_number_pane_g1

0xcc29,	// (0x0003b6ca) cell_area_left_week_number_pane_t1

0xe07f,	// (0x0003cb20) cell_month_view_pane_g1

0xcc3f,	// (0x0003b6e0) cell_month_view_pane_t1

0xd981,	// (0x0003c422) main_fps_pane

0x3b92,	// (0x00032633) cmail_ddmenu_btn02_pane_cp1_ParamLimits

0x3b92,	// (0x00032633) cmail_ddmenu_btn02_pane_cp1

0x3bae,	// (0x0003264f) cmail_ddmenu_btn02_pane_cp2_ParamLimits

0x3bae,	// (0x0003264f) cmail_ddmenu_btn02_pane_cp2

0xc542,	// (0x0003afe3) cmail_ddmenu_btn02_pane_g2_ParamLimits

0xc542,	// (0x0003afe3) cmail_ddmenu_btn02_pane_g2

0x0001,

0xfd7c,	// (0x0003e81d) cmail_ddmenu_btn02_pane_g_ParamLimits

0xfd7c,	// (0x0003e81d) cmail_ddmenu_btn02_pane_g

0xc560,	// (0x0003b001) cmail_ddmenu_btn02_pane_t2_ParamLimits

0xc560,	// (0x0003b001) cmail_ddmenu_btn02_pane_t2

0x0001,

0xfd81,	// (0x0003e822) cmail_ddmenu_btn02_pane_t_ParamLimits

0xfd81,	// (0x0003e822) cmail_ddmenu_btn02_pane_t

0xcc55,	// (0x0003b6f6) fps_text_pane_ParamLimits

0xcc55,	// (0x0003b6f6) fps_text_pane

0xcc62,	// (0x0003b703) main_fps_pane_g1_ParamLimits

0xcc62,	// (0x0003b703) main_fps_pane_g1

0xcc6e,	// (0x0003b70f) wait_bar_pane_cp010_ParamLimits

0xcc6e,	// (0x0003b70f) wait_bar_pane_cp010

0xcc7a,	// (0x0003b71b) fps_text_pane_t1_ParamLimits

0xcc7a,	// (0x0003b71b) fps_text_pane_t1

0xa55a,	// (0x00038ffb) cam4_image_uncrop_pane_g1

0xa563,	// (0x00039004) cam4_image_uncrop_pane_g2

0xa56c,	// (0x0003900d) cam4_image_uncrop_pane_g3

0xa575,	// (0x00039016) cam4_image_uncrop_pane_g4

0x0003,

0xf87e,	// (0x0003e31f) cam4_image_uncrop_pane_g

0xcaba,	// (0x0003b55b) dia3_listrow_pane_ParamLimits

0xd981,	// (0x0003c422) main_phob2_pane

0xc258,	// (0x0003acf9) cell_tport_appsw_pane_cp02_ParamLimits

0xc258,	// (0x0003acf9) cell_tport_appsw_pane_cp02

0xc265,	// (0x0003ad06) cell_tport_appsw_pane_cp03_ParamLimits

0xc265,	// (0x0003ad06) cell_tport_appsw_pane_cp03

0xd981,	// (0x0003c422) phob2_contact_card_pane

0xd981,	// (0x0003c422) phob2_listscroll_pane

0x4645,	// (0x000330e6) phob2_list_pane

0x464d,	// (0x000330ee) scroll_pane_cp034

0xcc93,	// (0x0003b734) phob2_cc_data_pane_ParamLimits

0xcc93,	// (0x0003b734) phob2_cc_data_pane

0xccab,	// (0x0003b74c) phob2_cc_listscroll_pane_ParamLimits

0xccab,	// (0x0003b74c) phob2_cc_listscroll_pane

0xccc3,	// (0x0003b764) list_double_large_graphic_phob2_pane_ParamLimits

0xccc3,	// (0x0003b764) list_double_large_graphic_phob2_pane

0xccd5,	// (0x0003b776) list_double_large_graphic_phob2_pane_g1_ParamLimits

0xccd5,	// (0x0003b776) list_double_large_graphic_phob2_pane_g1

0x63ab,	// (0x00034e4c) list_double_large_graphic_phob2_pane_g2_ParamLimits

0x63ab,	// (0x00034e4c) list_double_large_graphic_phob2_pane_g2

0x0003,

0xfe7f,	// (0x0003e920) list_double_large_graphic_phob2_pane_g_ParamLimits

0xfe7f,	// (0x0003e920) list_double_large_graphic_phob2_pane_g

0x63cf,	// (0x00034e70) list_double_large_graphic_phob2_pane_t1_ParamLimits

0x63cf,	// (0x00034e70) list_double_large_graphic_phob2_pane_t1

0x63e4,	// (0x00034e85) list_double_large_graphic_phob2_pane_t2_ParamLimits

0x63e4,	// (0x00034e85) list_double_large_graphic_phob2_pane_t2

0x0001,

0xfe88,	// (0x0003e929) list_double_large_graphic_phob2_pane_t_ParamLimits

0xfe88,	// (0x0003e929) list_double_large_graphic_phob2_pane_t

0xd981,	// (0x0003c422) list_highlight_pane_cp024

0x4655,	// (0x000330f6) phob2_cc_button_pane

0xcce2,	// (0x0003b783) phob2_cc_data_pane_g1_ParamLimits

0xcce2,	// (0x0003b783) phob2_cc_data_pane_g1

0xccf1,	// (0x0003b792) phob2_cc_data_pane_g2_ParamLimits

0xccf1,	// (0x0003b792) phob2_cc_data_pane_g2

0x0001,

0xfe8d,	// (0x0003e92e) phob2_cc_data_pane_g_ParamLimits

0xfe8d,	// (0x0003e92e) phob2_cc_data_pane_g

0xcd00,	// (0x0003b7a1) phob2_cc_data_pane_t1_ParamLimits

0xcd00,	// (0x0003b7a1) phob2_cc_data_pane_t1

0xcd15,	// (0x0003b7b6) phob2_cc_data_pane_t2_ParamLimits

0xcd15,	// (0x0003b7b6) phob2_cc_data_pane_t2

0xcd2a,	// (0x0003b7cb) phob2_cc_data_pane_t3_ParamLimits

0xcd2a,	// (0x0003b7cb) phob2_cc_data_pane_t3

0x0002,

0xfe92,	// (0x0003e933) phob2_cc_data_pane_t_ParamLimits

0xfe92,	// (0x0003e933) phob2_cc_data_pane_t

0x465d,	// (0x000330fe) phob2_cc_list_pane_ParamLimits

0x465d,	// (0x000330fe) phob2_cc_list_pane

0x3524,	// (0x00031fc5) scroll_pane_cp035_ParamLimits

0x3524,	// (0x00031fc5) scroll_pane_cp035

0xed86,	// (0x0003d827) bg_button_pane_cp033

0x4669,	// (0x0003310a) phob2_cc_button_pane_g1

0x4675,	// (0x00033116) phob2_cc_button_pane_t1

0x468a,	// (0x0003312b) phob2_cc_button_pane_t2

0x0001,

0xfe99,	// (0x0003e93a) phob2_cc_button_pane_t

0xcd3f,	// (0x0003b7e0) list_double_large_graphic_phob2_cc_pane_ParamLimits

0xcd3f,	// (0x0003b7e0) list_double_large_graphic_phob2_cc_pane

0xcd85,	// (0x0003b826) list_double_large_graphic_phob2_cc_pane_g1_ParamLimits

0xcd85,	// (0x0003b826) list_double_large_graphic_phob2_cc_pane_g1

0x63f9,	// (0x00034e9a) list_double_large_graphic_phob2_cc_pane_g2_ParamLimits

0x63f9,	// (0x00034e9a) list_double_large_graphic_phob2_cc_pane_g2

0x6408,	// (0x00034ea9) list_double_large_graphic_phob2_cc_pane_g3_ParamLimits

0x6408,	// (0x00034ea9) list_double_large_graphic_phob2_cc_pane_g3

0x6417,	// (0x00034eb8) list_double_large_graphic_phob2_cc_pane_g4_ParamLimits

0x6417,	// (0x00034eb8) list_double_large_graphic_phob2_cc_pane_g4

0x6428,	// (0x00034ec9) list_double_large_graphic_phob2_cc_pane_g5_ParamLimits

0x6428,	// (0x00034ec9) list_double_large_graphic_phob2_cc_pane_g5

0x0004,

0xfe9e,	// (0x0003e93f) list_double_large_graphic_phob2_cc_pane_g_ParamLimits

0xfe9e,	// (0x0003e93f) list_double_large_graphic_phob2_cc_pane_g

0x6437,	// (0x00034ed8) list_double_large_graphic_phob2_cc_pane_t1_ParamLimits

0x6437,	// (0x00034ed8) list_double_large_graphic_phob2_cc_pane_t1

0x6460,	// (0x00034f01) list_double_large_graphic_phob2_cc_pane_t2_ParamLimits

0x6460,	// (0x00034f01) list_double_large_graphic_phob2_cc_pane_t2

0x0001,

0xfea9,	// (0x0003e94a) list_double_large_graphic_phob2_cc_pane_t_ParamLimits

0xfea9,	// (0x0003e94a) list_double_large_graphic_phob2_cc_pane_t

0x469c,	// (0x0003313d) list_highlight_pane_cp025_ParamLimits

0x469c,	// (0x0003313d) list_highlight_pane_cp025

0xed86,	// (0x0003d827) bg_button_pane_cp033_ParamLimits

0x4669,	// (0x0003310a) phob2_cc_button_pane_g1_ParamLimits

0x4675,	// (0x00033116) phob2_cc_button_pane_t1_ParamLimits

0x468a,	// (0x0003312b) phob2_cc_button_pane_t2_ParamLimits

0xfe99,	// (0x0003e93a) phob2_cc_button_pane_t_ParamLimits

0x6709,	// (0x000351aa) popup_wgtman_window

0x3627,	// (0x000320c8) scroll_pane_cp038

0xc8e0,	// (0x0003b381) wgtman_btn_pane_cp_01_ParamLimits

0xc8e0,	// (0x0003b381) wgtman_btn_pane_cp_01

0x46aa,	// (0x0003314b) wgtman_content_pane

0x46b3,	// (0x00033154) wgtman_heading_pane

0xd981,	// (0x0003c422) bg_heading_pane_cp02

0x46bc,	// (0x0003315d) wgtman_heading_pane_g1

0x46c4,	// (0x00033165) wgtman_heading_pane_t1

0x46d2,	// (0x00033173) scroll_pane_cp036

0x46da,	// (0x0003317b) wgtman_list_pane

0x46e2,	// (0x00033183) wgtman_list_pane_t1_ParamLimits

0x46e2,	// (0x00033183) wgtman_list_pane_t1

0xa4bf,	// (0x00038f60) cam4_grid_pane

0x5a99,	// (0x0003453a) bg_button_pane_cp015_ParamLimits

0xb05a,	// (0x00039afb) bg_button_pane_cp016_ParamLimits

0xb066,	// (0x00039b07) bg_button_pane_cp017_ParamLimits

0xb095,	// (0x00039b36) popup_vitu2_query_window_g3_ParamLimits

0xb095,	// (0x00039b36) popup_vitu2_query_window_g3

0x5b3a,	// (0x000345db) popup_vitu2_query_window_t6_ParamLimits

0x5b3a,	// (0x000345db) popup_vitu2_query_window_t6

0x5b65,	// (0x00034606) popup_vitu2_query_window_t7_ParamLimits

0x5b65,	// (0x00034606) popup_vitu2_query_window_t7

0x2825,	// (0x000312c6) cam4_grid_pane_g1

0x282e,	// (0x000312cf) cam4_grid_pane_g2

0x46f9,	// (0x0003319a) cam4_grid_pane_g3

0x4702,	// (0x000331a3) cam4_grid_pane_g4

0x0003,

0xfeae,	// (0x0003e94f) cam4_grid_pane_g

0x72ed,	// (0x00035d8e) aid_placing_vt_slider_lsc_ParamLimits

0x7597,	// (0x00036038) vidtel_button_pane_ParamLimits

0x7597,	// (0x00036038) vidtel_button_pane

0xd981,	// (0x0003c422) bg_button_pane_cp034

0xcd96,	// (0x0003b837) vidtel_button_pane_g1

0xcd9e,	// (0x0003b83f) vidtel_button_pane_t1

0x2bc7,	// (0x00031668) aid_size_vtel_slider_touch

0x3524,	// (0x00031fc5) scroll_pane_cp039

0x3656,	// (0x000320f7) ncim_query_button_pane_cp01_ParamLimits

0x3675,	// (0x00032116) ncimui_query_pane_g1_ParamLimits

0xed86,	// (0x0003d827) input_focus_pane_cp012_ParamLimits

0x369a,	// (0x0003213b) ncim_query_entry_pane_t1_ParamLimits

0x3524,	// (0x00031fc5) scroll_pane_cp039_ParamLimits

0xeb96,	// (0x0003d637) navi_pane_bcale_mc_g1

0xeb9e,	// (0x0003d63f) navi_pane_bcale_mc_t1

0x3be2,	// (0x00032683) main_sp_fs_email_pane_g1

0x3bee,	// (0x0003268f) main_sp_fs_email_pane_g2

0x0001,

0xfc79,	// (0x0003e71a) main_sp_fs_email_pane_g

0x4068,	// (0x00032b09) list_single_cale_mrui_row_pane_g3_ParamLimits

0x4068,	// (0x00032b09) list_single_cale_mrui_row_pane_g3

0x62d2,	// (0x00034d73) list_single_recal_day_pane_g5_event_pane

0x62e9,	// (0x00034d8a) list_single_recal_day_pane_g7

0x470b,	// (0x000331ac) list_recal_day_event_pane_cp01

0x4714,	// (0x000331b5) list_recal_vselct_arw_lo_pane_cp01

0x471c,	// (0x000331bd) list_recal_vselct_arw_up_pane_cp01

0x4724,	// (0x000331c5) list_recal_vselct_pane_cp01

0x2c32,	// (0x000316d3) list_recal_day_event_pane_cp01_g1

0x6489,	// (0x00034f2a) list_recal_day_event_pane_cp01_t1

0x62f1,	// (0x00034d92) list_single_recal_day_pane_t1_ParamLimits

0x6303,	// (0x00034da4) list_single_recal_day_pane_t2_ParamLimits

0xfd91,	// (0x0003e832) list_single_recal_day_pane_t_ParamLimits

0xe005,	// (0x0003caa6) bg_notes_pane_ParamLimits

0xe0cf,	// (0x0003cb70) list_notes_pane_ParamLimits

0x6906,	// (0x000353a7) scroll_pane_cp06_ParamLimits

0xe0f5,	// (0x0003cb96) main_notes_pane_ParamLimits

0xed86,	// (0x0003d827) main_welc_pane

0xcdd2,	// (0x0003b873) main_welc_body_pane_ParamLimits

0xcdd2,	// (0x0003b873) main_welc_body_pane

0xcdeb,	// (0x0003b88c) main_welc_opti_pane_ParamLimits

0xcdeb,	// (0x0003b88c) main_welc_opti_pane

0xce44,	// (0x0003b8e5) main_welc_pane_t1_ParamLimits

0xce44,	// (0x0003b8e5) main_welc_pane_t1

0xcfaa,	// (0x0003ba4b) main_welc_body_row_pane_ParamLimits

0xcfaa,	// (0x0003ba4b) main_welc_body_row_pane

0xd98b,	// (0x0003c42c) main_welc_opti_row_pane_ParamLimits

0xd98b,	// (0x0003c42c) main_welc_opti_row_pane

0x474c,	// (0x000331ed) main_welc_opti_row_pane_g1

0xcfbf,	// (0x0003ba60) main_welc_opti_row_pane_t1

0x4754,	// (0x000331f5) main_welc_body_row_pane_t1

0x4412,	// (0x00032eb3) popup_notif_wgt_heading_pane

0x442c,	// (0x00032ecd) aid_size_list_notif_wgt_del_ParamLimits

0x4439,	// (0x00032eda) list_notif_wgt_row_pane_g1_ParamLimits

0x4445,	// (0x00032ee6) list_notif_wgt_row_pane_g2_ParamLimits

0x4459,	// (0x00032efa) list_notif_wgt_row_pane_g3_ParamLimits

0xfdf8,	// (0x0003e899) list_notif_wgt_row_pane_g_ParamLimits

0x4466,	// (0x00032f07) list_notif_wgt_row_pane_t1_ParamLimits

0x447c,	// (0x00032f1d) list_notif_wgt_row_pane_t2_ParamLimits

0x448e,	// (0x00032f2f) list_notif_wgt_row_pane_t3_ParamLimits

0xfdff,	// (0x0003e8a0) list_notif_wgt_row_pane_t_ParamLimits

0xc957,	// (0x0003b3f8) listrow_wgtman_pane_g1_ParamLimits

0xc964,	// (0x0003b405) listrow_wgtman_pane_g2_ParamLimits

0xfe2f,	// (0x0003e8d0) listrow_wgtman_pane_g_ParamLimits

0x635b,	// (0x00034dfc) listrow_wgtman_pane_t1_ParamLimits

0x6373,	// (0x00034e14) listrow_wgtman_pane_t2_ParamLimits

0xfe34,	// (0x0003e8d5) listrow_wgtman_pane_t_ParamLimits

0x6399,	// (0x00034e3a) wait_bar_pane_cp09_ParamLimits

0xd981,	// (0x0003c422) bg_popup_heading_pane_cp02

0x4763,	// (0x00033204) popup_notif_wgt_heading_pane_g1

0x476b,	// (0x0003320c) popup_notif_wgt_heading_pane_t1

0x1745,	// (0x000301e6) main_vids_pane

0xd981,	// (0x0003c422) vids_listscroll_pane

0xcfce,	// (0x0003ba6f) scroll_pane_cp040

0xd981,	// (0x0003c422) vids_list_pane

0xcfd7,	// (0x0003ba78) vids_list_double_pane_ParamLimits

0xcfd7,	// (0x0003ba78) vids_list_double_pane

0xcfe8,	// (0x0003ba89) vids_list_double_pane_g1

0xcff1,	// (0x0003ba92) vids_list_double_pane_t1

0xd001,	// (0x0003baa2) vids_list_double_pane_t2

0x0001,

0xfecd,	// (0x0003e96e) vids_list_double_pane_t

0xed86,	// (0x0003d827) main_ncimui_pane_ParamLimits

0xba97,	// (0x0003a538) main_ncimui_pane_g1_ParamLimits

0xbaa3,	// (0x0003a544) main_ncimui_pane_g2_ParamLimits

0xbaa3,	// (0x0003a544) main_ncimui_pane_g2

0x0001,

0xfb7a,	// (0x0003e61b) main_ncimui_pane_g_ParamLimits

0xfb7a,	// (0x0003e61b) main_ncimui_pane_g

0xce00,	// (0x0003b8a1) main_welc_pane_g1_ParamLimits

0xce00,	// (0x0003b8a1) main_welc_pane_g1

0xce0c,	// (0x0003b8ad) main_welc_pane_g2_ParamLimits

0xce0c,	// (0x0003b8ad) main_welc_pane_g2

0x0003,

0xfeb7,	// (0x0003e958) main_welc_pane_g_ParamLimits

0xfeb7,	// (0x0003e958) main_welc_pane_g

0xe005,	// (0x0003caa6) listscroll_mce_pane_ParamLimits

0x8576,	// (0x00037017) wait_bar_pane_cp10

0x1739,	// (0x000301da) main_cale_day_pane_ParamLimits

0x1739,	// (0x000301da) main_cale_week_pane_ParamLimits

0xe005,	// (0x0003caa6) main_messa_pane_ParamLimits

0x9a63,	// (0x00038504) main_clock2_btn_pane_ParamLimits

0x9a63,	// (0x00038504) main_clock2_btn_pane

0x2038,	// (0x00030ad9) main_clock2_btn_pane_cp01_ParamLimits

0x2038,	// (0x00030ad9) main_clock2_btn_pane_cp01

0x4023,	// (0x00032ac4) list_cale_mrui_pane_ParamLimits

0x44c2,	// (0x00032f63) main_cf0_pane_g2

0x0001,

0xfe06,	// (0x0003e8a7) main_cf0_pane_g

0xcacf,	// (0x0003b570) area_left_week_number_pane_ParamLimits

0xcae0,	// (0x0003b581) area_top_day_name_pane_ParamLimits

0xcaec,	// (0x0003b58d) frame_month_view_pane_ParamLimits

0x460a,	// (0x000330ab) grid_month_view_pane_ParamLimits

0x4618,	// (0x000330b9) frm_month_g1_ParamLimits

0xcb58,	// (0x0003b5f9) frm_month_g2_ParamLimits

0xcb67,	// (0x0003b608) frm_month_g3_ParamLimits

0xcb76,	// (0x0003b617) frm_month_g4_ParamLimits

0xcb85,	// (0x0003b626) frm_month_g5_ParamLimits

0xcb94,	// (0x0003b635) frm_month_g6_ParamLimits

0xcba3,	// (0x0003b644) frm_month_g7_ParamLimits

0x4625,	// (0x000330c6) frm_month_g8_ParamLimits

0xcbb2,	// (0x0003b653) frm_month_g9_ParamLimits

0xcbbf,	// (0x0003b660) frm_month_g10_ParamLimits

0xcbcc,	// (0x0003b66d) frm_month_g11_ParamLimits

0xcbd9,	// (0x0003b67a) frm_month_g12_ParamLimits

0xcbe6,	// (0x0003b687) frm_month_g13_ParamLimits

0xcbf3,	// (0x0003b694) frm_month_g14_ParamLimits

0xcc00,	// (0x0003b6a1) frm_month_g15_ParamLimits

0xcc0d,	// (0x0003b6ae) frm_month_g16_ParamLimits

0xfe5e,	// (0x0003e8ff) frm_month_g_ParamLimits

0x4632,	// (0x000330d3) cell_top_day_name_pane_t1_ParamLimits

0xcc1a,	// (0x0003b6bb) cell_area_left_week_number_pane_g1_ParamLimits

0xcc29,	// (0x0003b6ca) cell_area_left_week_number_pane_t1_ParamLimits

0xe07f,	// (0x0003cb20) cell_month_view_pane_g1_ParamLimits

0xcc3f,	// (0x0003b6e0) cell_month_view_pane_t1_ParamLimits

0xdffd,	// (0x0003ca9e) main_clock2_btn_pane_g1

0x4789,	// (0x0003322a) main_clock2_btn_pane_t1

0xed86,	// (0x0003d827) listscroll_cmail_pane_ParamLimits

0x3be2,	// (0x00032683) main_sp_fs_email_pane_g1_ParamLimits

0x3bee,	// (0x0003268f) main_sp_fs_email_pane_g2_ParamLimits

0xfc79,	// (0x0003e71a) main_sp_fs_email_pane_g_ParamLimits

0x414d,	// (0x00032bee) list_recal_day_pane_ParamLimits

0x415e,	// (0x00032bff) mian_recal_day_pane_t1

0x5ecd,	// (0x0003496e) list_single_dyc_row_text_pane_t4_ParamLimits

0x5ecd,	// (0x0003496e) list_single_dyc_row_text_pane_t4

0x5f04,	// (0x000349a5) list_single_dyc_row_text_pane_t5_ParamLimits

0x5f04,	// (0x000349a5) list_single_dyc_row_text_pane_t5

0x5f74,	// (0x00034a15) list_single_dyc_row_text_pane_t6_ParamLimits

0x5f74,	// (0x00034a15) list_single_dyc_row_text_pane_t6

0x81b8,	// (0x00036c59) aid_mgn_list_cale_time_pane

0xed86,	// (0x0003d827) main_gallery2_pane_ParamLimits

0x204c,	// (0x00030aed) main_clock2_pane_cp01_t1

0x205a,	// (0x00030afb) main_clock2_pane_cp01_t3

0x0001,

0xf750,	// (0x0003e1f1) main_clock2_pane_cp01_t

0x6cc1,	// (0x00035762) cale_week_scroll_pane_g16_ParamLimits

0x6cc1,	// (0x00035762) cale_week_scroll_pane_g16

0xe2c2,	// (0x0003cd63) vorec_slider_pane

0xcd9e,	// (0x0003b83f) vidtel_button_pane_t1_ParamLimits

0xe08d,	// (0x0003cb2e) main_fs_bigclock_clock_pane_g1_ParamLimits

0xc5f6,	// (0x0003b097) main_fs_bigclock_clock_pane_g2_ParamLimits

0xc603,	// (0x0003b0a4) main_fs_bigclock_clock_pane_g3_ParamLimits

0xc603,	// (0x0003b0a4) main_fs_bigclock_clock_pane_g4_ParamLimits

0xfdb4,	// (0x0003e855) main_fs_bigclock_clock_pane_g_ParamLimits

0xc60f,	// (0x0003b0b0) main_fs_bigclock_clock_pane_t1_ParamLimits

0xc621,	// (0x0003b0c2) main_fs_bigclock_clock_pane_t2_ParamLimits

0xfdbd,	// (0x0003e85e) main_fs_bigclock_clock_pane_t_ParamLimits

0x9447,	// (0x00037ee8) main_mup3_lyrics_pane_ParamLimits

0x9447,	// (0x00037ee8) main_mup3_lyrics_pane

0xd033,	// (0x0003bad4) main_mup3_lyrics_pane_t1_ParamLimits

0xd033,	// (0x0003bad4) main_mup3_lyrics_pane_t1

0x9f31,	// (0x000389d2) aid_main_mp4_pane_t1_area

0x9f3b,	// (0x000389dc) aid_main_mp4_pane_t2_area

0xa028,	// (0x00038ac9) main_mp4_pane_g7_ParamLimits

0xa028,	// (0x00038ac9) main_mp4_pane_g7

0xa034,	// (0x00038ad5) main_mp4_pane_g8_ParamLimits

0xa034,	// (0x00038ad5) main_mp4_pane_g8

0xa3e9,	// (0x00038e8a) aid_call6_pane_g1_size

0xcd69,	// (0x0003b80a) list_double_large_graphic_phob2_other_pane_ParamLimits

0xcd69,	// (0x0003b80a) list_double_large_graphic_phob2_other_pane

0xeae9,	// (0x0003d58a) list_double_large_graphic_phob2_other_pane_g1

0xd981,	// (0x0003c422) list_highlight_pane_cp026

0xed86,	// (0x0003d827) main_welc_pane_ParamLimits

0xc127,	// (0x0003abc8) main_sp_fs_ctrlbar_pane_g3_ParamLimits

0xc127,	// (0x0003abc8) main_sp_fs_ctrlbar_pane_g3

0xc13f,	// (0x0003abe0) main_sp_fs_ctrlbar_pane_g4_ParamLimits

0xc13f,	// (0x0003abe0) main_sp_fs_ctrlbar_pane_g4

0xc17f,	// (0x0003ac20) toolbar2_fixed_button_pane_cp01

0xc189,	// (0x0003ac2a) toolbar2_fixed_button_pane_cp02

0xc194,	// (0x0003ac35) toolbar2_fixed_button_pane_cp03

0xcdc6,	// (0x0003b867) list_welc_entry_pane_ParamLimits

0xcdc6,	// (0x0003b867) list_welc_entry_pane

0xce18,	// (0x0003b8b9) main_welc_pane_g3_ParamLimits

0xce18,	// (0x0003b8b9) main_welc_pane_g3

0xce5c,	// (0x0003b8fd) main_welc_pane_t2_ParamLimits

0xce5c,	// (0x0003b8fd) main_welc_pane_t2

0xce6e,	// (0x0003b90f) main_welc_pane_t3_ParamLimits

0xce6e,	// (0x0003b90f) main_welc_pane_t3

0x0005,

0xfec0,	// (0x0003e961) main_welc_pane_t_ParamLimits

0xfec0,	// (0x0003e961) main_welc_pane_t

0xcf54,	// (0x0003b9f5) welc_button_pane_ParamLimits

0xcf54,	// (0x0003b9f5) welc_button_pane

0xcf9e,	// (0x0003ba3f) welc_service_logo_pane_ParamLimits

0xcf9e,	// (0x0003ba3f) welc_service_logo_pane

0xd051,	// (0x0003baf2) list_single_welc_entry_pane_ParamLimits

0xd051,	// (0x0003baf2) list_single_welc_entry_pane

0xd062,	// (0x0003bb03) list_single_welc_entry_pane_g1

0xd06a,	// (0x0003bb0b) list_single_welc_entry_pane_t1

0xd078,	// (0x0003bb19) list_single_welc_entry_pane_t2

0x0001,

0xfed2,	// (0x0003e973) list_single_welc_entry_pane_t

0xd981,	// (0x0003c422) bg_button_pane_cp035

0xd086,	// (0x0003bb27) welc_button_pane_t1

0x4797,	// (0x00033238) welc_service_logo_pane_g1

0x47a0,	// (0x00033241) welc_service_logo_pane_g2

0x0001,

0xfed7,	// (0x0003e978) welc_service_logo_pane_g

0xd981,	// (0x0003c422) main_int_radio_pane

0xe16c,	// (0x0003cc0d) list_single_fs_dyc_pane_g1

0x63b7,	// (0x00034e58) list_double_large_graphic_phob2_pane_g3_ParamLimits

0x63b7,	// (0x00034e58) list_double_large_graphic_phob2_pane_g3

0x63c3,	// (0x00034e64) list_double_large_graphic_phob2_pane_g4_ParamLimits

0x63c3,	// (0x00034e64) list_double_large_graphic_phob2_pane_g4

0xd094,	// (0x0003bb35) main_int_radio1_pane_ParamLimits

0xd094,	// (0x0003bb35) main_int_radio1_pane

0x47a9,	// (0x0003324a) find_pane_cp02

0xd0aa,	// (0x0003bb4b) input_focus_pane_cp12_ParamLimits

0xd0aa,	// (0x0003bb4b) input_focus_pane_cp12

0xd0b6,	// (0x0003bb57) input_focus_pane_cp13_ParamLimits

0xd0b6,	// (0x0003bb57) input_focus_pane_cp13

0xd0ce,	// (0x0003bb6f) input_focus_pane_cp14_ParamLimits

0xd0ce,	// (0x0003bb6f) input_focus_pane_cp14

0x47b2,	// (0x00033253) int_radio1_listscroll_pane

0xd0e6,	// (0x0003bb87) main_int_radio1_pane_g1_ParamLimits

0xd0e6,	// (0x0003bb87) main_int_radio1_pane_g1

0xd0f2,	// (0x0003bb93) main_int_radio1_pane_t1_ParamLimits

0xd0f2,	// (0x0003bb93) main_int_radio1_pane_t1

0xd104,	// (0x0003bba5) main_int_radio1_pane_t2_ParamLimits

0xd104,	// (0x0003bba5) main_int_radio1_pane_t2

0xd116,	// (0x0003bbb7) main_int_radio1_pane_t3_ParamLimits

0xd116,	// (0x0003bbb7) main_int_radio1_pane_t3

0xd128,	// (0x0003bbc9) main_int_radio1_pane_t4_ParamLimits

0xd128,	// (0x0003bbc9) main_int_radio1_pane_t4

0x47bc,	// (0x0003325d) main_int_radio1_pane_t5_ParamLimits

0x47bc,	// (0x0003325d) main_int_radio1_pane_t5

0xd13f,	// (0x0003bbe0) main_int_radio1_pane_t6_ParamLimits

0xd13f,	// (0x0003bbe0) main_int_radio1_pane_t6

0xd151,	// (0x0003bbf2) main_int_radio1_pane_t7_ParamLimits

0xd151,	// (0x0003bbf2) main_int_radio1_pane_t7

0xd163,	// (0x0003bc04) main_int_radio1_pane_t8_ParamLimits

0xd163,	// (0x0003bc04) main_int_radio1_pane_t8

0xd175,	// (0x0003bc16) main_int_radio1_pane_t9_ParamLimits

0xd175,	// (0x0003bc16) main_int_radio1_pane_t9

0xd187,	// (0x0003bc28) main_int_radio1_pane_t10_ParamLimits

0xd187,	// (0x0003bc28) main_int_radio1_pane_t10

0xd1b6,	// (0x0003bc57) main_int_radio1_pane_t11_ParamLimits

0xd1b6,	// (0x0003bc57) main_int_radio1_pane_t11

0xd1e5,	// (0x0003bc86) main_int_radio1_pane_t12_ParamLimits

0xd1e5,	// (0x0003bc86) main_int_radio1_pane_t12

0x000b,

0xfedc,	// (0x0003e97d) main_int_radio1_pane_t_ParamLimits

0xfedc,	// (0x0003e97d) main_int_radio1_pane_t

0x47ce,	// (0x0003326f) int_radio_list_pane

0x464d,	// (0x000330ee) scroll_pane_cp037

0x47d6,	// (0x00033277) list_double_large_graphic_int_radio_pane_ParamLimits

0x47d6,	// (0x00033277) list_double_large_graphic_int_radio_pane

0x47e7,	// (0x00033288) list_double_large_graphic_int_radio_pane_g1

0x6497,	// (0x00034f38) list_double_large_graphic_int_radio_pane_t1

0x64a5,	// (0x00034f46) list_double_large_graphic_int_radio_pane_t2

0x0001,

0xfef5,	// (0x0003e996) list_double_large_graphic_int_radio_pane_t

0xd981,	// (0x0003c422) list_highlight_pane_cp027

0x473c,	// (0x000331dd) main_button_pane_4

0xce24,	// (0x0003b8c5) main_welc_pane_g4_ParamLimits

0xce24,	// (0x0003b8c5) main_welc_pane_g4

0xce80,	// (0x0003b921) main_welc_pane_t4_ParamLimits

0xce80,	// (0x0003b921) main_welc_pane_t4

0xce92,	// (0x0003b933) main_welc_pane_t5_ParamLimits

0xce92,	// (0x0003b933) main_welc_pane_t5

0xcec2,	// (0x0003b963) main_welc_pane_t6_ParamLimits

0xcec2,	// (0x0003b963) main_welc_pane_t6

0xcf60,	// (0x0003ba01) welc_button_pane_2_ParamLimits

0xcf60,	// (0x0003ba01) welc_button_pane_2

0xcf72,	// (0x0003ba13) welc_button_pane_3_ParamLimits

0xcf72,	// (0x0003ba13) welc_button_pane_3

0x4744,	// (0x000331e5) welc_button_pane_4

0xcf86,	// (0x0003ba27) welc_button_pane_5_ParamLimits

0xcf86,	// (0x0003ba27) welc_button_pane_5

0x64ff,	// (0x00034fa0) main_popup_welc_pane

0x481b,	// (0x000332bc) main_welc_sk_g3

0x4825,	// (0x000332c6) main_welc_sk_g4

0x482f,	// (0x000332d0) main_welc_sk_t3

0x483d,	// (0x000332de) main_welc_sk_t4

0x484b,	// (0x000332ec) popup_welc_pane_t4

0x4859,	// (0x000332fa) popup_welc_pane_t5

0x4867,	// (0x00033308) popup_welc_pane_t6

0xd981,	// (0x0003c422) main_acti_pane

0xd981,	// (0x0003c422) main_sso_pane

0xd1fc,	// (0x0003bc9d) sso_body_pane_ParamLimits

0xd1fc,	// (0x0003bc9d) sso_body_pane

0xd20a,	// (0x0003bcab) sso_logo_pane_ParamLimits

0xd20a,	// (0x0003bcab) sso_logo_pane

0xd22d,	// (0x0003bcce) sso_sk_pane_ParamLimits

0xd22d,	// (0x0003bcce) sso_sk_pane

0xe343,	// (0x0003cde4) main_sso_logo_pane_g1

0xd23a,	// (0x0003bcdb) sso_sk_pane_t1_ParamLimits

0xd23a,	// (0x0003bcdb) sso_sk_pane_t1

0xd24d,	// (0x0003bcee) sso_sk_pane_t2_ParamLimits

0xd24d,	// (0x0003bcee) sso_sk_pane_t2

0x0001,

0xfefa,	// (0x0003e99b) sso_sk_pane_t_ParamLimits

0xfefa,	// (0x0003e99b) sso_sk_pane_t

0x489f,	// (0x00033340) aid_sso_gap

0x48a8,	// (0x00033349) aid_sso_txt1

0x48b0,	// (0x00033351) aid_sso_txt2

0x48b8,	// (0x00033359) aid_sso_txt3

0x0002,

0xfeff,	// (0x0003e9a0) aid_sso_txt

0x48c0,	// (0x00033361) aid_sso_widget

0xd2a2,	// (0x0003bd43) sso_btn_pane_ParamLimits

0xd2a2,	// (0x0003bd43) sso_btn_pane

0xd30b,	// (0x0003bdac) sso_option_pane_ParamLimits

0xd30b,	// (0x0003bdac) sso_option_pane

0xd365,	// (0x0003be06) sso_query_pane_ParamLimits

0xd365,	// (0x0003be06) sso_query_pane

0xd3a1,	// (0x0003be42) sso_query_pane_cp01_ParamLimits

0xd3a1,	// (0x0003be42) sso_query_pane_cp01

0xd3df,	// (0x0003be80) sso_t_hdr_pane_ParamLimits

0xd3df,	// (0x0003be80) sso_t_hdr_pane

0xd3fd,	// (0x0003be9e) sso_t_nml_pane_ParamLimits

0xd3fd,	// (0x0003be9e) sso_t_nml_pane

0x48b8,	// (0x00033359) sso_t_sub_pane

0xd217,	// (0x0003bcb8) sso_popup_window_ParamLimits

0xd217,	// (0x0003bcb8) sso_popup_window

0xd25f,	// (0x0003bd00) sso_apps_pane_ParamLimits

0xd25f,	// (0x0003bd00) sso_apps_pane

0xd27e,	// (0x0003bd1f) sso_body_pane_g1

0xd286,	// (0x0003bd27) sso_body_pane_t1

0xd294,	// (0x0003bd35) sso_body_pane_t2

0x0001,

0xff06,	// (0x0003e9a7) sso_body_pane_t

0xd2df,	// (0x0003bd80) sso_btn_pane_cp01_ParamLimits

0xd2df,	// (0x0003bd80) sso_btn_pane_cp01

0xd33f,	// (0x0003bde0) sso_prog_pane_ParamLimits

0xd33f,	// (0x0003bde0) sso_prog_pane

0xd441,	// (0x0003bee2) sso_t_hdr_pane_t1_ParamLimits

0xd441,	// (0x0003bee2) sso_t_hdr_pane_t1

0xd45a,	// (0x0003befb) input_focus_pane_cp10_ParamLimits

0xd45a,	// (0x0003befb) input_focus_pane_cp10

0xd472,	// (0x0003bf13) sso_query_pane_t1_ParamLimits

0xd472,	// (0x0003bf13) sso_query_pane_t1

0xd485,	// (0x0003bf26) sso_query_pane_t2_ParamLimits

0xd485,	// (0x0003bf26) sso_query_pane_t2

0xd4a0,	// (0x0003bf41) sso_query_pane_t3_ParamLimits

0xd4a0,	// (0x0003bf41) sso_query_pane_t3

0xd4ca,	// (0x0003bf6b) sso_query_pane_t4_ParamLimits

0xd4ca,	// (0x0003bf6b) sso_query_pane_t4

0x0003,

0xff0b,	// (0x0003e9ac) sso_query_pane_t_ParamLimits

0xff0b,	// (0x0003e9ac) sso_query_pane_t

0xd981,	// (0x0003c422) bg_button_pane_cp22

0x480c,	// (0x000332ad) sso_btn_pane_t1

0xd4ee,	// (0x0003bf8f) sso_t_nml_pane_t1_ParamLimits

0xd4ee,	// (0x0003bf8f) sso_t_nml_pane_t1

0xd50b,	// (0x0003bfac) sso_option_row_pane_ParamLimits

0xd50b,	// (0x0003bfac) sso_option_row_pane

0xd51e,	// (0x0003bfbf) sso_t_sub_pane_t1_ParamLimits

0xd51e,	// (0x0003bfbf) sso_t_sub_pane_t1

0xed86,	// (0x0003d827) bg_popup_window_pane_cp11_ParamLimits

0xed86,	// (0x0003d827) bg_popup_window_pane_cp11

0xd531,	// (0x0003bfd2) popup_sk_window_cp01_ParamLimits

0xd531,	// (0x0003bfd2) popup_sk_window_cp01

0xd53e,	// (0x0003bfdf) sso_popup_body_pane_ParamLimits

0xd53e,	// (0x0003bfdf) sso_popup_body_pane

0xd54b,	// (0x0003bfec) scroll_pane_cp21_ParamLimits

0xd54b,	// (0x0003bfec) scroll_pane_cp21

0xd558,	// (0x0003bff9) sso_popup_body_t_pane_ParamLimits

0xd558,	// (0x0003bff9) sso_popup_body_t_pane

0xd565,	// (0x0003c006) sso_popup_body_t_hdr_pane_ParamLimits

0xd565,	// (0x0003c006) sso_popup_body_t_hdr_pane

0xd571,	// (0x0003c012) sso_popup_body_t_nml_pane_ParamLimits

0xd571,	// (0x0003c012) sso_popup_body_t_nml_pane

0xd58a,	// (0x0003c02b) sso_popup_body_t_sub_pane_ParamLimits

0xd58a,	// (0x0003c02b) sso_popup_body_t_sub_pane

0xd5a9,	// (0x0003c04a) sso_popup_body_t_hdr_pane_t1

0xd5b9,	// (0x0003c05a) sso_popup_body_t_nml_pane_t1_ParamLimits

0xd5b9,	// (0x0003c05a) sso_popup_body_t_nml_pane_t1

0xd5f3,	// (0x0003c094) sso_popup_body_t_sub_pane_t1_ParamLimits

0xd5f3,	// (0x0003c094) sso_popup_body_t_sub_pane_t1

0xe343,	// (0x0003cde4) sso_prog_pane_g1

0xd618,	// (0x0003c0b9) sso_apps_pane_comp1_ParamLimits

0xd618,	// (0x0003c0b9) sso_apps_pane_comp1

0xd62a,	// (0x0003c0cb) sso_apps_pane_comp1_g1

0xd632,	// (0x0003c0d3) sso_apps_pane_comp1_t1

0xd64e,	// (0x0003c0ef) sso_option_row_pane_g1

0xd656,	// (0x0003c0f7) sso_option_row_pane_t1

0xcdb4,	// (0x0003b855) bg_welc_area_ParamLimits

0xcdb4,	// (0x0003b855) bg_welc_area

0xcef8,	// (0x0003b999) sso_t_hdr_pane_a_t1_ParamLimits

0xcef8,	// (0x0003b999) sso_t_hdr_pane_a_t1

0xcf0a,	// (0x0003b9ab) sso_t_nml_pane_a_t1_ParamLimits

0xcf0a,	// (0x0003b9ab) sso_t_nml_pane_a_t1

0xcf2c,	// (0x0003b9cd) sso_t_sub_pane_a_t1_ParamLimits

0xcf2c,	// (0x0003b9cd) sso_t_sub_pane_a_t1

0x480c,	// (0x000332ad) sso_btn_pane_t1_copy1

0xd981,	// (0x0003c422) welc_button_pane_2_comp1

0x4875,	// (0x00033316) sso_t_hdr_pane_p_t1

0x4883,	// (0x00033324) sso_t_nml_pane_p_t1

0x4891,	// (0x00033332) sso_t_sub_pane_p_t1

0x3d98,	// (0x00032839) list_cmail_pane_ParamLimits

0xcf92,	// (0x0003ba33) welc_button_pane_cp01_ParamLimits

0xcf92,	// (0x0003ba33) welc_button_pane_cp01

0xd981,	// (0x0003c422) main_att_pane

0xd640,	// (0x0003c0e1) input_focus_pane_cp10_t1

0xd656,	// (0x0003c0f7) sso_option_row_pane_t1_ParamLimits

0xd66b,	// (0x0003c10c) main_att_body_pane_ParamLimits

0xd66b,	// (0x0003c10c) main_att_body_pane

0xd67f,	// (0x0003c120) att_btn_pane_ParamLimits

0xd67f,	// (0x0003c120) att_btn_pane

0xd699,	// (0x0003c13a) att_btn_pane_cp01_ParamLimits

0xd699,	// (0x0003c13a) att_btn_pane_cp01

0xd6b1,	// (0x0003c152) att_li_srv_pane_ParamLimits

0xd6b1,	// (0x0003c152) att_li_srv_pane

0xd6bf,	// (0x0003c160) att_opt_pane_ParamLimits

0xd6bf,	// (0x0003c160) att_opt_pane

0xd701,	// (0x0003c1a2) att_query_pane_ParamLimits

0xd701,	// (0x0003c1a2) att_query_pane

0xd731,	// (0x0003c1d2) att_query_pane_cp01_ParamLimits

0xd731,	// (0x0003c1d2) att_query_pane_cp01

0xd767,	// (0x0003c208) att_t_hdr_pane_ParamLimits

0xd767,	// (0x0003c208) att_t_hdr_pane

0xd7a7,	// (0x0003c248) att_t_nml_pane_ParamLimits

0xd7a7,	// (0x0003c248) att_t_nml_pane

0xd7d5,	// (0x0003c276) att_t_nml_pane_cp01_ParamLimits

0xd7d5,	// (0x0003c276) att_t_nml_pane_cp01

0xd7f7,	// (0x0003c298) att_t_nmlb_pane_ParamLimits

0xd7f7,	// (0x0003c298) att_t_nmlb_pane

0xd80d,	// (0x0003c2ae) att_term_pane_ParamLimits

0xd80d,	// (0x0003c2ae) att_term_pane

0xd84d,	// (0x0003c2ee) main_att_body_pane_g1_ParamLimits

0xd84d,	// (0x0003c2ee) main_att_body_pane_g1

0xd441,	// (0x0003bee2) att_t_hdr_pane_t1_ParamLimits

0xd441,	// (0x0003bee2) att_t_hdr_pane_t1

0xd88d,	// (0x0003c32e) att_t_nml_pane_t1_ParamLimits

0xd88d,	// (0x0003c32e) att_t_nml_pane_t1

0xd8b2,	// (0x0003c353) att_btn_pane_t1

0xd981,	// (0x0003c422) bg_button_pane_cp23

0xd8c0,	// (0x0003c361) att_li_srv_row_pane_ParamLimits

0xd8c0,	// (0x0003c361) att_li_srv_row_pane

0xd8d0,	// (0x0003c371) att_t_nmlb_pane_t1_ParamLimits

0xd8d0,	// (0x0003c371) att_t_nmlb_pane_t1

0xd8e9,	// (0x0003c38a) att_query_pane_t1

0xd8f8,	// (0x0003c399) att_query_pane_t2

0xd907,	// (0x0003c3a8) att_query_pane_t3

0x0002,

0xff14,	// (0x0003e9b5) att_query_pane_t

0xd916,	// (0x0003c3b7) input_focus_pane_cp11

0xd91f,	// (0x0003c3c0) att_term_pane_t1_ParamLimits

0xd91f,	// (0x0003c3c0) att_term_pane_t1

0xd981,	// (0x0003c422) att_opt_row_pane

0xd93c,	// (0x0003c3dd) att_opt_row_pane_g1

0xd944,	// (0x0003c3e5) att_opt_row_pane_t1_ParamLimits

0xd944,	// (0x0003c3e5) att_opt_row_pane_t1

0xd95d,	// (0x0003c3fe) att_li_srv_row_pane_g1

0xd965,	// (0x0003c406) att_li_srv_row_pane_t1

0xd973,	// (0x0003c414) att_li_srv_row_pane_t2

0x0001,

0xff1b,	// (0x0003e9bc) att_li_srv_row_pane_t
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
	&ParameterLimitsV,
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
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
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
	&TextLineVCR,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&TextLineVCR,
	&TextLineVCR,
	&TextLineVCR,
	&Limits,
	&TextTableLVCR,
	&WindowLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&WindowLineVCR,
	&TextLineVCR,
	&TextLineVCR,
	&Limits,
	&TextTableLVCR,
	};

} // end of namespace AknLayoutScalable_Elaf_pqp_apps_qvga_prt_Small
