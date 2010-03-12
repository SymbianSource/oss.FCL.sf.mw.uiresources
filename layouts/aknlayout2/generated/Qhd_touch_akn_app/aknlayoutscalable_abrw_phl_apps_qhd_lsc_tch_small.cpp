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

#include "aknlayoutscalable_abrw_phl_apps_qhd_lsc_tch_small.h"
#include "AknLayout2ScalableDecode.h"
namespace AknLayoutScalable_Apps { extern const TUint8 KByteCodedData_AknLayoutScalable_Elaf_php_apps_qhd_prt_tch[]; }

namespace AknLayoutScalable_Abrw_phl_apps_qhd_lsc_tch_Small
{

extern const TUint16 KDataLookup[AknLayoutScalable_Apps::E_TApiId_TableSize];
const SCompDataImplData KImplData = { KDataLookup, AknLayoutScalable_Apps::KByteCodedData_AknLayoutScalable_Elaf_php_apps_qhd_prt_tch + 0x0005c4df };

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
0x0a8b,	// (0x0005cf6a) Screen

0x0a97,	// (0x0005cf76) application_window

0x0add,	// (0x0005cfbc) area_bottom_pane_ParamLimits

0x0add,	// (0x0005cfbc) area_bottom_pane

0x0b16,	// (0x0005cff5) area_top_pane_ParamLimits

0x0b16,	// (0x0005cff5) area_top_pane

0x9a38,	// (0x00065f17) call_video_uplink_pane_ParamLimits

0x9a38,	// (0x00065f17) call_video_uplink_pane

0x0b8b,	// (0x0005d06a) main_pane_ParamLimits

0x0b8b,	// (0x0005d06a) main_pane

0xc268,	// (0x00068747) context_pane

0x3e19,	// (0x000602f8) navi_pane

0x3e41,	// (0x00060320) popup_cale_events_window_ParamLimits

0x3e41,	// (0x00060320) popup_cale_events_window

0xc27b,	// (0x0006875a) popup_mup_playback_window

0x3e59,	// (0x00060338) signal_pane

0xa1d1,	// (0x000666b0) main_browser_pane

0xadcb,	// (0x000672aa) main_burst_pane

0x3b6b,	// (0x0006004a) main_calc_pane

0xadcb,	// (0x000672aa) main_cale_day_pane

0xa1d1,	// (0x000666b0) main_cale_month_pane

0xadcb,	// (0x000672aa) main_cale_week_pane

0xadcb,	// (0x000672aa) main_call_pane

0x9e81,	// (0x00066360) main_call_poc_pane

0xadcb,	// (0x000672aa) main_camera_pane

0xadcb,	// (0x000672aa) main_chi_dic_pane

0xac50,	// (0x0006712f) main_clock_pane

0x9e81,	// (0x00066360) main_fmradio_pane

0xadcb,	// (0x000672aa) main_graph_messa_pane

0x9e81,	// (0x00066360) main_help_pane

0xa1d1,	// (0x000666b0) main_im_pane

0xa0dc,	// (0x000665bb) main_image_pane_ParamLimits

0xa0dc,	// (0x000665bb) main_image_pane

0x9e81,	// (0x00066360) main_location2_pane

0xadcb,	// (0x000672aa) main_location_pane

0x9e81,	// (0x00066360) main_messa_pane

0x9e81,	// (0x00066360) main_mp2_pane

0xadcb,	// (0x000672aa) main_mp_pane

0x9e81,	// (0x00066360) main_msg_pane

0x9e81,	// (0x00066360) main_mup_eq_pane

0x9e81,	// (0x00066360) main_mup_pane

0xa1d1,	// (0x000666b0) main_notes_pane

0x9e81,	// (0x00066360) main_pec_pane

0x9e81,	// (0x00066360) main_phob_pane

0x9e81,	// (0x00066360) main_pinb_pane

0x9e81,	// (0x00066360) main_postcard_pane

0x9e81,	// (0x00066360) main_qdial_pane

0xadcb,	// (0x000672aa) main_skin_pane

0x9e81,	// (0x00066360) main_smil2_pane

0xadcb,	// (0x000672aa) main_smil_pane

0xadcb,	// (0x000672aa) main_video_pane

0xadcb,	// (0x000672aa) main_video_tele_pane

0xa0dc,	// (0x000665bb) main_viewer_pane_ParamLimits

0xa0dc,	// (0x000665bb) main_viewer_pane

0xadcb,	// (0x000672aa) main_vorec_pane

0x3bbf,	// (0x0006009e) popup_blid_sat_info_window_ParamLimits

0x3bbf,	// (0x0006009e) popup_blid_sat_info_window

0x3c17,	// (0x000600f6) popup_dyc_status_message_window_ParamLimits

0x3c17,	// (0x000600f6) popup_dyc_status_message_window

0x3c31,	// (0x00060110) popup_grid_large_graphic_window_ParamLimits

0x3c31,	// (0x00060110) popup_grid_large_graphic_window

0x3ced,	// (0x000601cc) popup_loc_request_window_ParamLimits

0x3ced,	// (0x000601cc) popup_loc_request_window

0x3df1,	// (0x000602d0) popup_wml_address_window_ParamLimits

0x3df1,	// (0x000602d0) popup_wml_address_window

0x39a5,	// (0x0005fe84) call_muted_g1

0x365a,	// (0x0005fb39) popup_call_audio_conf_window_ParamLimits

0x365a,	// (0x0005fb39) popup_call_audio_conf_window

0x39b9,	// (0x0005fe98) popup_call_audio_first_window_ParamLimits

0x39b9,	// (0x0005fe98) popup_call_audio_first_window

0x3a2f,	// (0x0005ff0e) popup_call_audio_in_window_ParamLimits

0x3a2f,	// (0x0005ff0e) popup_call_audio_in_window

0x3a6b,	// (0x0005ff4a) popup_call_audio_out_window_ParamLimits

0x3a6b,	// (0x0005ff4a) popup_call_audio_out_window

0x3aa5,	// (0x0005ff84) popup_call_audio_second_window_ParamLimits

0x3aa5,	// (0x0005ff84) popup_call_audio_second_window

0x3afb,	// (0x0005ffda) popup_call_audio_wait_window_ParamLimits

0x3afb,	// (0x0005ffda) popup_call_audio_wait_window

0x3b30,	// (0x0006000f) popup_number_entry_window_ParamLimits

0x3b30,	// (0x0006000f) popup_number_entry_window

0x9a6e,	// (0x00065f4d) bg_popup_call_pane_cp05_ParamLimits

0x9a6e,	// (0x00065f4d) bg_popup_call_pane_cp05

0x9a8e,	// (0x00065f6d) popup_number_entry_window_t1

0x9aa1,	// (0x00065f80) popup_number_entry_window_t2

0x9ab3,	// (0x00065f92) popup_number_entry_window_t3

0x0003,

0xf0d8,	// (0x0006b5b7) popup_number_entry_window_t

0x9ac5,	// (0x00065fa4) text_title_cp2

0x9ad8,	// (0x00065fb7) bg_popup_call_pane_cp_ParamLimits

0x9ad8,	// (0x00065fb7) bg_popup_call_pane_cp

0x9ae6,	// (0x00065fc5) call_thumbnail_pane

0x9aee,	// (0x00065fcd) popup_call_audio_in_window_g1_ParamLimits

0x9aee,	// (0x00065fcd) popup_call_audio_in_window_g1

0x9afa,	// (0x00065fd9) popup_call_audio_in_window_g2_ParamLimits

0x9afa,	// (0x00065fd9) popup_call_audio_in_window_g2

0x9b06,	// (0x00065fe5) popup_call_audio_in_window_g3_ParamLimits

0x9b06,	// (0x00065fe5) popup_call_audio_in_window_g3

0x0002,

0xf0e1,	// (0x0006b5c0) popup_call_audio_in_window_g_ParamLimits

0xf0e1,	// (0x0006b5c0) popup_call_audio_in_window_g

0x9b12,	// (0x00065ff1) popup_call_audio_in_window_t1_ParamLimits

0x9b12,	// (0x00065ff1) popup_call_audio_in_window_t1

0x9b2e,	// (0x0006600d) popup_call_audio_in_window_t2_ParamLimits

0x9b2e,	// (0x0006600d) popup_call_audio_in_window_t2

0x9b4a,	// (0x00066029) popup_call_audio_in_window_t3_ParamLimits

0x9b4a,	// (0x00066029) popup_call_audio_in_window_t3

0x0002,

0xf0e8,	// (0x0006b5c7) popup_call_audio_in_window_t_ParamLimits

0xf0e8,	// (0x0006b5c7) popup_call_audio_in_window_t

0x9ad8,	// (0x00065fb7) bg_popup_call_pane_cp01_ParamLimits

0x9ad8,	// (0x00065fb7) bg_popup_call_pane_cp01

0x9ae6,	// (0x00065fc5) call_thumbnail_pane_cp02

0x9b5d,	// (0x0006603c) call_type_pane_cp022

0x9b65,	// (0x00066044) popup_call_audio_out_window_g1_ParamLimits

0x9b65,	// (0x00066044) popup_call_audio_out_window_g1

0x9b77,	// (0x00066056) popup_call_audio_out_window_g2_ParamLimits

0x9b77,	// (0x00066056) popup_call_audio_out_window_g2

0x9b83,	// (0x00066062) popup_call_audio_out_window_g3_ParamLimits

0x9b83,	// (0x00066062) popup_call_audio_out_window_g3

0x0002,

0xf0ef,	// (0x0006b5ce) popup_call_audio_out_window_g_ParamLimits

0xf0ef,	// (0x0006b5ce) popup_call_audio_out_window_g

0x9b95,	// (0x00066074) popup_call_audio_out_window_t1_ParamLimits

0x9b95,	// (0x00066074) popup_call_audio_out_window_t1

0x9bad,	// (0x0006608c) popup_call_audio_out_window_t2_ParamLimits

0x9bad,	// (0x0006608c) popup_call_audio_out_window_t2

0x0001,

0xf0f6,	// (0x0006b5d5) popup_call_audio_out_window_t_ParamLimits

0xf0f6,	// (0x0006b5d5) popup_call_audio_out_window_t

0x9bc2,	// (0x000660a1) bg_popup_call_pane_ParamLimits

0x9bc2,	// (0x000660a1) bg_popup_call_pane

0x0d41,	// (0x0005d220) call_thumbnail_pane_cp_ParamLimits

0x0d41,	// (0x0005d220) call_thumbnail_pane_cp

0x9c46,	// (0x00066125) call_type_pane_cp01_ParamLimits

0x9c46,	// (0x00066125) call_type_pane_cp01

0x9c8a,	// (0x00066169) popup_call_audio_first_window_g1_ParamLimits

0x9c8a,	// (0x00066169) popup_call_audio_first_window_g1

0x9cd6,	// (0x000661b5) popup_call_audio_first_window_g2_ParamLimits

0x9cd6,	// (0x000661b5) popup_call_audio_first_window_g2

0x0001,

0xf0fb,	// (0x0006b5da) popup_call_audio_first_window_g_ParamLimits

0xf0fb,	// (0x0006b5da) popup_call_audio_first_window_g

0x9d1a,	// (0x000661f9) popup_call_audio_first_window_t1_ParamLimits

0x9d1a,	// (0x000661f9) popup_call_audio_first_window_t1

0x9dc6,	// (0x000662a5) popup_call_audio_first_window_t4_ParamLimits

0x9dc6,	// (0x000662a5) popup_call_audio_first_window_t4

0x9e52,	// (0x00066331) popup_call_audio_first_window_t5_ParamLimits

0x9e52,	// (0x00066331) popup_call_audio_first_window_t5

0x0002,

0xf100,	// (0x0006b5df) popup_call_audio_first_window_t_ParamLimits

0xf100,	// (0x0006b5df) popup_call_audio_first_window_t

0x9e81,	// (0x00066360) bg_popup_call_pane_cp02

0x9e8b,	// (0x0006636a) call_type_pane_cp023

0x9e93,	// (0x00066372) popup_call_audio_wait_window_g1

0x9e9b,	// (0x0006637a) popup_call_audio_wait_window_g2

0x0001,

0xf107,	// (0x0006b5e6) popup_call_audio_wait_window_g

0x9ea3,	// (0x00066382) popup_call_audio_wait_window_t3

0x9eb1,	// (0x00066390) bg_popup_call_pane_cp03_ParamLimits

0x9eb1,	// (0x00066390) bg_popup_call_pane_cp03

0x9f11,	// (0x000663f0) call_thumbnail_pane_cp011_ParamLimits

0x9f11,	// (0x000663f0) call_thumbnail_pane_cp011

0x9f1d,	// (0x000663fc) call_type_pane_cp034_ParamLimits

0x9f1d,	// (0x000663fc) call_type_pane_cp034

0x9f59,	// (0x00066438) popup_call_audio_second_window_g1_ParamLimits

0x9f59,	// (0x00066438) popup_call_audio_second_window_g1

0x9f95,	// (0x00066474) popup_call_audio_second_window_g2_ParamLimits

0x9f95,	// (0x00066474) popup_call_audio_second_window_g2

0x0001,

0xf10c,	// (0x0006b5eb) popup_call_audio_second_window_g_ParamLimits

0xf10c,	// (0x0006b5eb) popup_call_audio_second_window_g

0x9fd1,	// (0x000664b0) popup_call_audio_second_window_t1_ParamLimits

0x9fd1,	// (0x000664b0) popup_call_audio_second_window_t1

0xa052,	// (0x00066531) popup_call_audio_second_window_t2_ParamLimits

0xa052,	// (0x00066531) popup_call_audio_second_window_t2

0xa088,	// (0x00066567) popup_call_audio_second_window_t3_ParamLimits

0xa088,	// (0x00066567) popup_call_audio_second_window_t3

0x0002,

0xf111,	// (0x0006b5f0) popup_call_audio_second_window_t_ParamLimits

0xf111,	// (0x0006b5f0) popup_call_audio_second_window_t

0x9e81,	// (0x00066360) bg_popup_call_pane_cp04

0xa0be,	// (0x0006659d) list_conf_pane

0xa0c6,	// (0x000665a5) popup_call_audio_conf_window_t1

0xa0d4,	// (0x000665b3) call_thumbnail_pane_g1

0xa0dc,	// (0x000665bb) bg_pinb_pane_ParamLimits

0xa0dc,	// (0x000665bb) bg_pinb_pane

0xa0ea,	// (0x000665c9) find_pinb_pane

0xa0f3,	// (0x000665d2) listscroll_pinb_pane_ParamLimits

0xa0f3,	// (0x000665d2) listscroll_pinb_pane

0xa102,	// (0x000665e1) pinb_bg_pane_g1

0x0d65,	// (0x0005d244) pinb_bg_pane_g2

0x0d71,	// (0x0005d250) pinb_bg_pane_g3

0x0d7d,	// (0x0005d25c) pinb_bg_pane_g4

0x0d89,	// (0x0005d268) pinb_bg_pane_g5

0x0d95,	// (0x0005d274) pinb_bg_pane_g6

0x0da0,	// (0x0005d27f) pinb_bg_pane_g7

0x0dab,	// (0x0005d28a) pinb_bg_pane_g8

0x0db6,	// (0x0005d295) pinb_bg_pane_g9

0x0dc0,	// (0x0005d29f) pinb_bg_pane_g10

0x0009,

0xf118,	// (0x0006b5f7) pinb_bg_pane_g

0x0ddd,	// (0x0005d2bc) grid_pinb_pane

0x0de6,	// (0x0005d2c5) list_pinb_pane

0x0def,	// (0x0005d2ce) scroll_pane_cp01_ParamLimits

0x0def,	// (0x0005d2ce) scroll_pane_cp01

0xa10c,	// (0x000665eb) find_pinb_pane_g1_ParamLimits

0xa10c,	// (0x000665eb) find_pinb_pane_g1

0xa124,	// (0x00066603) find_pinb_pane_t1

0xa136,	// (0x00066615) find_pinb_pane_t2

0x0001,

0xf132,	// (0x0006b611) find_pinb_pane_t

0xa14b,	// (0x0006662a) input_focus_pane_cp01_ParamLimits

0xa14b,	// (0x0006662a) input_focus_pane_cp01

0x0e01,	// (0x0005d2e0) cell_pinb_pane_ParamLimits

0x0e01,	// (0x0005d2e0) cell_pinb_pane

0x0e2a,	// (0x0005d309) cell_pinb_pane_g1_ParamLimits

0x0e2a,	// (0x0005d309) cell_pinb_pane_g1

0x0e3a,	// (0x0005d319) cell_pinb_pane_g2_ParamLimits

0x0e3a,	// (0x0005d319) cell_pinb_pane_g2

0xa157,	// (0x00066636) cell_pinb_pane_g3_ParamLimits

0xa157,	// (0x00066636) cell_pinb_pane_g3

0x0002,

0xf137,	// (0x0006b616) cell_pinb_pane_g_ParamLimits

0xf137,	// (0x0006b616) cell_pinb_pane_g

0x9e81,	// (0x00066360) grid_highlight_pane_cp01

0x0e46,	// (0x0005d325) list_pinb_item_pane_ParamLimits

0x0e46,	// (0x0005d325) list_pinb_item_pane

0x9e81,	// (0x00066360) list_highlight_pane_cp02

0x0e58,	// (0x0005d337) list_pinb_item_pane_g1_ParamLimits

0x0e58,	// (0x0005d337) list_pinb_item_pane_g1

0x0e65,	// (0x0005d344) list_pinb_item_pane_g2_ParamLimits

0x0e65,	// (0x0005d344) list_pinb_item_pane_g2

0x0e71,	// (0x0005d350) list_pinb_item_pane_g3_ParamLimits

0x0e71,	// (0x0005d350) list_pinb_item_pane_g3

0x0e82,	// (0x0005d361) list_pinb_item_pane_g4_ParamLimits

0x0e82,	// (0x0005d361) list_pinb_item_pane_g4

0x0003,

0xf13e,	// (0x0006b61d) list_pinb_item_pane_g_ParamLimits

0xf13e,	// (0x0006b61d) list_pinb_item_pane_g

0x0e8e,	// (0x0005d36d) list_pinb_item_pane_t1_ParamLimits

0x0e8e,	// (0x0005d36d) list_pinb_item_pane_t1

0x0ec3,	// (0x0005d3a2) calc_display_pane

0x0eeb,	// (0x0005d3ca) calc_paper_pane

0x0f0e,	// (0x0005d3ed) grid_calc_pane

0x9e81,	// (0x00066360) bg_list_pane_cp01

0x0f3c,	// (0x0005d41b) clock_g1

0x0f44,	// (0x0005d423) clock_g2

0x0001,

0xf147,	// (0x0006b626) clock_g

0x0f4c,	// (0x0005d42b) clock_t1_ParamLimits

0x0f4c,	// (0x0005d42b) clock_t1

0x0f61,	// (0x0005d440) clock_t2_ParamLimits

0x0f61,	// (0x0005d440) clock_t2

0x0f73,	// (0x0005d452) clock_t3_ParamLimits

0x0f73,	// (0x0005d452) clock_t3

0x0f85,	// (0x0005d464) clock_t4_ParamLimits

0x0f85,	// (0x0005d464) clock_t4

0x0f97,	// (0x0005d476) clock_t5_ParamLimits

0x0f97,	// (0x0005d476) clock_t5

0x0fac,	// (0x0005d48b) clock_t6_ParamLimits

0x0fac,	// (0x0005d48b) clock_t6

0x0fbe,	// (0x0005d49d) clock_t7_ParamLimits

0x0fbe,	// (0x0005d49d) clock_t7

0x0fd0,	// (0x0005d4af) clock_t8_ParamLimits

0x0fd0,	// (0x0005d4af) clock_t8

0x0fe4,	// (0x0005d4c3) clock_t9_ParamLimits

0x0fe4,	// (0x0005d4c3) clock_t9

0x0008,

0xf14c,	// (0x0006b62b) clock_t_ParamLimits

0xf14c,	// (0x0006b62b) clock_t

0xa16b,	// (0x0006664a) popup_clock_analogue_window_cp02

0xa16b,	// (0x0006664a) popup_clock_digital_window_cp01

0xa173,	// (0x00066652) listscroll_help_pane

0x9e81,	// (0x00066360) phob_pre_status_pane

0xa17d,	// (0x0006665c) grid_qdial_pane

0x9e81,	// (0x00066360) listscroll_mce_pane

0xa187,	// (0x00066666) bg_notes_pane

0xa195,	// (0x00066674) list_notes_pane

0x0ff8,	// (0x0005d4d7) scroll_pane_cp06

0xa1a3,	// (0x00066682) bg_calc_paper_pane

0xa1b7,	// (0x00066696) list_calc_pane

0xa1d1,	// (0x000666b0) bg_calc_display_pane

0x100c,	// (0x0005d4eb) calc_display_pane_t1

0x101e,	// (0x0005d4fd) calc_display_pane_t2

0xa1dd,	// (0x000666bc) calc_display_pane_t3

0x0002,

0xf15f,	// (0x0006b63e) calc_display_pane_t

0x1030,	// (0x0005d50f) cell_calc_pane_ParamLimits

0x1030,	// (0x0005d50f) cell_calc_pane

0xa1ef,	// (0x000666ce) bg_calc_paper_pane_g1

0xa1fb,	// (0x000666da) bg_calc_paper_pane_g2

0xa207,	// (0x000666e6) bg_calc_paper_pane_g3

0xa213,	// (0x000666f2) bg_calc_paper_pane_g4

0xa21f,	// (0x000666fe) bg_calc_paper_pane_g5

0x1065,	// (0x0005d544) bg_calc_paper_pane_g6

0x1074,	// (0x0005d553) bg_calc_paper_pane_g7

0x1083,	// (0x0005d562) bg_calc_paper_pane_g8

0x0007,

0xf166,	// (0x0006b645) bg_calc_paper_pane_g

0x1096,	// (0x0005d575) calc_bg_paper_pane_g9

0x10a9,	// (0x0005d588) list_calc_item_pane_ParamLimits

0x10a9,	// (0x0005d588) list_calc_item_pane

0xa22b,	// (0x0006670a) list_calc_item_pane_g1

0xa238,	// (0x00066717) list_calc_item_pane_t1_ParamLimits

0xa238,	// (0x00066717) list_calc_item_pane_t1

0x10c1,	// (0x0005d5a0) list_calc_item_pane_t2_ParamLimits

0x10c1,	// (0x0005d5a0) list_calc_item_pane_t2

0x0001,

0xf177,	// (0x0006b656) list_calc_item_pane_t_ParamLimits

0xf177,	// (0x0006b656) list_calc_item_pane_t

0xa24a,	// (0x00066729) cell_calc_pane_g1

0xa254,	// (0x00066733) grid_highlight_pane_cp02

0x10f3,	// (0x0005d5d2) bg_calc_display_pane_g1

0x10fc,	// (0x0005d5db) bg_calc_display_pane_g2

0x1106,	// (0x0005d5e5) bg_calc_display_pane_g3

0x0002,

0xf181,	// (0x0006b660) bg_calc_display_pane_g

0x110f,	// (0x0005d5ee) cell_qdial_pane_ParamLimits

0x110f,	// (0x0005d5ee) cell_qdial_pane

0x1123,	// (0x0005d602) cell_qdial_pane_g1_ParamLimits

0x1123,	// (0x0005d602) cell_qdial_pane_g1

0x1139,	// (0x0005d618) cell_qdial_pane_g2_ParamLimits

0x1139,	// (0x0005d618) cell_qdial_pane_g2

0xa276,	// (0x00066755) cell_qdial_pane_g3_ParamLimits

0xa276,	// (0x00066755) cell_qdial_pane_g3

0x0003,

0xf188,	// (0x0006b667) cell_qdial_pane_g_ParamLimits

0xf188,	// (0x0006b667) cell_qdial_pane_g

0x1160,	// (0x0005d63f) cell_qdial_pane_t1_ParamLimits

0x1160,	// (0x0005d63f) cell_qdial_pane_t1

0x1178,	// (0x0005d657) cell_qdial_pane_t2_ParamLimits

0x1178,	// (0x0005d657) cell_qdial_pane_t2

0x118b,	// (0x0005d66a) cell_qdial_pane_t3_ParamLimits

0x118b,	// (0x0005d66a) cell_qdial_pane_t3

0x0002,

0xf191,	// (0x0006b670) cell_qdial_pane_t_ParamLimits

0xf191,	// (0x0006b670) cell_qdial_pane_t

0x9e81,	// (0x00066360) grid_highlight_pane_cp04

0xa282,	// (0x00066761) thumbnail_qdial_pane_ParamLimits

0xa282,	// (0x00066761) thumbnail_qdial_pane

0xa2de,	// (0x000667bd) list_help_pane

0xa2e7,	// (0x000667c6) scroll_pane_cp02

0x119e,	// (0x0005d67d) help_list_pane_t1_ParamLimits

0x119e,	// (0x0005d67d) help_list_pane_t1

0xa2f0,	// (0x000667cf) bg_notes_pane_g2

0xa2f8,	// (0x000667d7) bg_notes_pane_g3

0xa300,	// (0x000667df) notes_bg_pane_g1

0xa308,	// (0x000667e7) notes_bg_pane_g4

0xa310,	// (0x000667ef) notes_bg_pane_g5

0xa318,	// (0x000667f7) notes_bg_pane_g6

0xa320,	// (0x000667ff) notes_bg_pane_g7

0xa328,	// (0x00066807) notes_bg_pane_g8

0xa330,	// (0x0006680f) notes_bg_pane_g9

0x0006,

0xf1af,	// (0x0006b68e) notes_bg_pane_g

0x11bb,	// (0x0005d69a) list_notes_text_pane_ParamLimits

0x11bb,	// (0x0005d69a) list_notes_text_pane

0xa338,	// (0x00066817) list_notes_text_pane_g1

0x11d0,	// (0x0005d6af) list_notes_text_pane_t1

0xa1d1,	// (0x000666b0) listscroll_cale_week_pane

0x11fb,	// (0x0005d6da) bg_cale_heading_pane

0xa352,	// (0x00066831) bg_cale_pane_cp01

0x120f,	// (0x0005d6ee) cale_week_corner_pane

0x1225,	// (0x0005d704) cale_week_day_heading_pane

0x1239,	// (0x0005d718) cale_week_scroll_pane_g1

0x124a,	// (0x0005d729) cale_week_scroll_pane_g2

0x125b,	// (0x0005d73a) cale_week_scroll_pane_g3

0x126c,	// (0x0005d74b) cale_week_scroll_pane_g4

0x127d,	// (0x0005d75c) cale_week_scroll_pane_g5

0x1290,	// (0x0005d76f) cale_week_scroll_pane_g6

0x12a3,	// (0x0005d782) cale_week_scroll_pane_g7

0x12b6,	// (0x0005d795) cale_week_scroll_pane_g8

0x12c9,	// (0x0005d7a8) cale_week_scroll_pane_g9

0x12da,	// (0x0005d7b9) cale_week_scroll_pane_g10

0x12eb,	// (0x0005d7ca) cale_week_scroll_pane_g11

0x12fc,	// (0x0005d7db) cale_week_scroll_pane_g12

0x130d,	// (0x0005d7ec) cale_week_scroll_pane_g13

0x131e,	// (0x0005d7fd) cale_week_scroll_pane_g14

0x132f,	// (0x0005d80e) cale_week_scroll_pane_g15

0x000e,

0xf1be,	// (0x0006b69d) cale_week_scroll_pane_g

0x1340,	// (0x0005d81f) cale_week_time_pane

0x1353,	// (0x0005d832) grid_cale_week_pane

0x1368,	// (0x0005d847) scroll_pane_cp08

0x1382,	// (0x0005d861) cell_cale_week_pane_ParamLimits

0x1382,	// (0x0005d861) cell_cale_week_pane

0x13c2,	// (0x0005d8a1) cale_week_day_heading_pane_t1

0x13ec,	// (0x0005d8cb) cale_week_day_heading_pane_t2

0x1416,	// (0x0005d8f5) cale_week_day_heading_pane_t3

0x1440,	// (0x0005d91f) cale_week_day_heading_pane_t4

0x146a,	// (0x0005d949) cale_week_day_heading_pane_t5

0x1494,	// (0x0005d973) cale_week_day_heading_pane_t6

0x14c0,	// (0x0005d99f) cale_week_day_heading_pane_t7

0x0006,

0xf1dd,	// (0x0006b6bc) cale_week_day_heading_pane_t

0xa37d,	// (0x0006685c) bg_cale_side_pane

0x14ea,	// (0x0005d9c9) cale_week_time_pane_t1

0x1502,	// (0x0005d9e1) cale_week_time_pane_t2

0x151a,	// (0x0005d9f9) cale_week_time_pane_t3

0x1532,	// (0x0005da11) cale_week_time_pane_t4

0x154a,	// (0x0005da29) cale_week_time_pane_t5

0x1562,	// (0x0005da41) cale_week_time_pane_t6

0x157a,	// (0x0005da59) cale_week_time_pane_t7

0x1592,	// (0x0005da71) cale_week_time_pane_t8

0x0007,

0xf1ec,	// (0x0006b6cb) cale_week_time_pane_t

0x15aa,	// (0x0005da89) cell_cale_week_pane_g2

0x15c3,	// (0x0005daa2) cell_cale_week_pane_g3_ParamLimits

0x15c3,	// (0x0005daa2) cell_cale_week_pane_g3

0xa38b,	// (0x0006686a) grid_highlight_pane_cp07

0xa393,	// (0x00066872) listscroll_gms_pane

0xa39d,	// (0x0006687c) grid_gms_pane

0xa3a6,	// (0x00066885) listscroll_gms_pane_g1

0xa3ae,	// (0x0006688d) listscroll_gms_pane_g2

0x0001,

0xf1fd,	// (0x0006b6dc) listscroll_gms_pane_g

0x15db,	// (0x0005daba) scroll_pane_cp010

0x15e6,	// (0x0005dac5) cell_gms_pane_ParamLimits

0x15e6,	// (0x0005dac5) cell_gms_pane

0x15f8,	// (0x0005dad7) cell_gms_pane_g1

0xa3b6,	// (0x00066895) cell_gms_pane_g2

0xa3be,	// (0x0006689d) cell_gms_pane_g3

0xa3c7,	// (0x000668a6) cell_gms_pane_g4

0x0003,

0xf202,	// (0x0006b6e1) cell_gms_pane_g

0xa3d0,	// (0x000668af) grid_highlight_pane_cp09

0x394f,	// (0x0005fe2e) phob_pre_status_pane_g1

0x3957,	// (0x0005fe36) phob_pre_status_pane_g2

0x395f,	// (0x0005fe3e) phob_pre_status_pane_g3

0x3967,	// (0x0005fe46) phob_pre_status_pane_g4

0x0004,

0xf5f1,	// (0x0006bad0) phob_pre_status_pane_g

0x3977,	// (0x0005fe56) phob_pre_status_pane_t1

0x3985,	// (0x0005fe64) phob_pre_status_pane_t2

0x3995,	// (0x0005fe74) phob_pre_status_pane_t3

0x0002,

0xf5fc,	// (0x0006badb) phob_pre_status_pane_t

0x9e81,	// (0x00066360) bg_list_pane_cp05

0x1608,	// (0x0005dae7) grid_vorec_pane

0x1612,	// (0x0005daf1) vorec_t1

0x1620,	// (0x0005daff) vorec_t2

0x162e,	// (0x0005db0d) vorec_t3

0x163c,	// (0x0005db1b) vorec_t4

0x164a,	// (0x0005db29) vorec_t5

0xa3d8,	// (0x000668b7) vorec_t6

0x0006,

0xf20b,	// (0x0006b6ea) vorec_t

0x1666,	// (0x0005db45) wait_bar_pane_cp01

0x166e,	// (0x0005db4d) cell_vorec_pane_ParamLimits

0x166e,	// (0x0005db4d) cell_vorec_pane

0xa3e6,	// (0x000668c5) cell_vorec_pane_g1

0x9e81,	// (0x00066360) grid_highlight_pane_cp05

0x1699,	// (0x0005db78) cams_zoom_pane

0x16a8,	// (0x0005db87) image_vga_pane

0x16c2,	// (0x0005dba1) main_camera_pane_g1

0x16d4,	// (0x0005dbb3) main_camera_pane_g2

0x16e4,	// (0x0005dbc3) main_camera_pane_g3

0x16f4,	// (0x0005dbd3) main_camera_pane_g4

0x1704,	// (0x0005dbe3) main_camera_pane_g5

0x1714,	// (0x0005dbf3) main_camera_pane_g6

0x1726,	// (0x0005dc05) main_camera_pane_g7

0x0007,

0xf21a,	// (0x0006b6f9) main_camera_pane_g

0x1736,	// (0x0005dc15) main_camera_pane_t1

0x174c,	// (0x0005dc2b) main_camera_pane_t2

0x0001,

0xf22b,	// (0x0006b70a) main_camera_pane_t

0x1786,	// (0x0005dc65) cams_zoom_pane_cp_ParamLimits

0x1786,	// (0x0005dc65) cams_zoom_pane_cp

0x17ae,	// (0x0005dc8d) image_cif_pane_ParamLimits

0x17ae,	// (0x0005dc8d) image_cif_pane

0x17e9,	// (0x0005dcc8) image_subqcif_pane

0x17f1,	// (0x0005dcd0) main_video_pane_g1_ParamLimits

0x17f1,	// (0x0005dcd0) main_video_pane_g1

0x1815,	// (0x0005dcf4) main_video_pane_g2_ParamLimits

0x1815,	// (0x0005dcf4) main_video_pane_g2

0x1849,	// (0x0005dd28) main_video_pane_g3_ParamLimits

0x1849,	// (0x0005dd28) main_video_pane_g3

0x1877,	// (0x0005dd56) main_video_pane_g4_ParamLimits

0x1877,	// (0x0005dd56) main_video_pane_g4

0x18a5,	// (0x0005dd84) main_video_pane_g5_ParamLimits

0x18a5,	// (0x0005dd84) main_video_pane_g5

0xa3fc,	// (0x000668db) main_video_pane_g6_ParamLimits

0xa3fc,	// (0x000668db) main_video_pane_g6

0x0006,

0xf230,	// (0x0006b70f) main_video_pane_g_ParamLimits

0xf230,	// (0x0006b70f) main_video_pane_g

0x18ce,	// (0x0005ddad) main_video_pane_t1_ParamLimits

0x18ce,	// (0x0005ddad) main_video_pane_t1

0xa416,	// (0x000668f5) cams_zoom_pane_g1

0xa41f,	// (0x000668fe) cams_zoom_pane_g2

0xa428,	// (0x00066907) cams_zoom_pane_g3

0xa431,	// (0x00066910) cams_zoom_pane_g4

0x0003,

0xf23f,	// (0x0006b71e) cams_zoom_pane_g

0x192b,	// (0x0005de0a) grid_cams_pane

0x1945,	// (0x0005de24) linegrid_cams_pane

0x1959,	// (0x0005de38) cell_cams_pane_ParamLimits

0x1959,	// (0x0005de38) cell_cams_pane

0xa43a,	// (0x00066919) cams_burst_image_pane

0xa442,	// (0x00066921) cell_cams_pane_g1

0x9e81,	// (0x00066360) grid_highlight_pane_cp03

0xa24a,	// (0x00066729) mp_bg_pane_g1

0x9e81,	// (0x00066360) bg_list_pane_cp03

0xc132,	// (0x00068611) bg_mp_pane

0xc13a,	// (0x00068619) grid_mp_pane

0xc142,	// (0x00068621) media_player_g1

0xc14a,	// (0x00068629) media_player_t1

0xc158,	// (0x00068637) media_player_t2

0xc166,	// (0x00068645) media_player_t3

0xc174,	// (0x00068653) media_player_t4

0xc182,	// (0x00068661) media_player_t5

0xc190,	// (0x0006866f) media_player_t6

0xc19e,	// (0x0006867d) media_player_t7

0x0006,

0xf5db,	// (0x0006baba) media_player_t

0xc1ac,	// (0x0006868b) wait_bar_pane_cp02

0xf5c0,	// (0x0006ba9f) main_usb_pane_t

0x3946,	// (0x0005fe25) cell_mp_pane

0xa24a,	// (0x00066729) cell_mp_pane_g1

0x9e81,	// (0x00066360) grid_highlight_pane_cp06

0xa44a,	// (0x00066929) grid_skin_colour_pane

0xa452,	// (0x00066931) list_highlight_pane_cp03

0x1a72,	// (0x0005df51) skin_g1

0xa45a,	// (0x00066939) skin_t1

0xa469,	// (0x00066948) skin_t2

0x0001,

0xf274,	// (0x0006b753) skin_t

0x1a7a,	// (0x0005df59) cell_skin_colour_pane_ParamLimits

0x1a7a,	// (0x0005df59) cell_skin_colour_pane

0xa477,	// (0x00066956) cell_skin_colour_pane_g1

0x1af3,	// (0x0005dfd2) call_video_g1_ParamLimits

0x1af3,	// (0x0005dfd2) call_video_g1

0x1b0f,	// (0x0005dfee) call_video_g2_ParamLimits

0x1b0f,	// (0x0005dfee) call_video_g2

0x0001,

0xf279,	// (0x0006b758) call_video_g_ParamLimits

0xf279,	// (0x0006b758) call_video_g

0x1b61,	// (0x0005e040) call_video_uplink_pane_cp1_ParamLimits

0x1b61,	// (0x0005e040) call_video_uplink_pane_cp1

0xa489,	// (0x00066968) call_video_uplink_pane_cp2

0x1c00,	// (0x0005e0df) video_down_crop_pane_ParamLimits

0x1c00,	// (0x0005e0df) video_down_crop_pane

0x1cf7,	// (0x0005e1d6) video_down_pane_ParamLimits

0x1cf7,	// (0x0005e1d6) video_down_pane

0xa491,	// (0x00066970) video_down_subqcif_pane_ParamLimits

0xa491,	// (0x00066970) video_down_subqcif_pane

0xa4a9,	// (0x00066988) video_down_subqcif_pane_cp_ParamLimits

0xa4a9,	// (0x00066988) video_down_subqcif_pane_cp

0xa4cf,	// (0x000669ae) im_reading_pane_ParamLimits

0xa4cf,	// (0x000669ae) im_reading_pane

0x1e05,	// (0x0005e2e4) im_writing_pane_ParamLimits

0x1e05,	// (0x0005e2e4) im_writing_pane

0x1e1b,	// (0x0005e2fa) im_reading_pane_t1

0xa4e9,	// (0x000669c8) list_im_pane

0xa4fa,	// (0x000669d9) scroll_pane_cp07

0x1e54,	// (0x0005e333) im_writing_pane_t1_ParamLimits

0x1e54,	// (0x0005e333) im_writing_pane_t1

0xa513,	// (0x000669f2) im_writing_pane_t2_ParamLimits

0xa513,	// (0x000669f2) im_writing_pane_t2

0x0001,

0xf283,	// (0x0006b762) im_writing_pane_t_ParamLimits

0xf283,	// (0x0006b762) im_writing_pane_t

0x9e81,	// (0x00066360) input_focus_pane_cp04

0x9e81,	// (0x00066360) input_focus_pane_cp05

0x1e69,	// (0x0005e348) list_im_single_pane_ParamLimits

0x1e69,	// (0x0005e348) list_im_single_pane

0x1e7d,	// (0x0005e35c) list_single_im_pane_t1

0x3906,	// (0x0005fde5) blid_accuracy_pane

0x390e,	// (0x0005fded) blid_compass_pane

0x3918,	// (0x0005fdf7) main_location_t1

0x3928,	// (0x0005fe07) main_location_t2

0x3938,	// (0x0005fe17) main_location_t3

0x0002,

0xf5ea,	// (0x0006bac9) main_location_t

0x9e81,	// (0x00066360) aid_levels_location

0xa24a,	// (0x00066729) blid_accuracy_pane_g1

0xa24a,	// (0x00066729) blid_accuracy_pane_g2

0x0001,

0xf2e5,	// (0x0006b7c4) blid_accuracy_pane_g

0xa55b,	// (0x00066a3a) wml_content_pane

0xa599,	// (0x00066a78) wml_button_pane_ParamLimits

0xa599,	// (0x00066a78) wml_button_pane

0x1e8c,	// (0x0005e36b) wml_list_single_large_pane_ParamLimits

0x1e8c,	// (0x0005e36b) wml_list_single_large_pane

0x1ea1,	// (0x0005e380) wml_list_single_medium_pane_ParamLimits

0x1ea1,	// (0x0005e380) wml_list_single_medium_pane

0x1eb7,	// (0x0005e396) wml_list_single_small_pane_ParamLimits

0x1eb7,	// (0x0005e396) wml_list_single_small_pane

0xa5ad,	// (0x00066a8c) wml_selection_box_pane_ParamLimits

0xa5ad,	// (0x00066a8c) wml_selection_box_pane

0xa5c0,	// (0x00066a9f) wml_list_single_pane_t1

0xa5cf,	// (0x00066aae) wml_list_single_medium_pane_t1

0xa5de,	// (0x00066abd) wml_list_single_large_pane_t1

0xa5ed,	// (0x00066acc) input_focus_pane_cp02_ParamLimits

0xa5ed,	// (0x00066acc) input_focus_pane_cp02

0xa600,	// (0x00066adf) wml_selection_box_pane_g1

0xa609,	// (0x00066ae8) wml_selection_box_pane_t1_ParamLimits

0xa609,	// (0x00066ae8) wml_selection_box_pane_t1

0xa0dc,	// (0x000665bb) bg_wml_button_pane_ParamLimits

0xa0dc,	// (0x000665bb) bg_wml_button_pane

0xa621,	// (0x00066b00) wml_button_pane_g1

0xa629,	// (0x00066b08) wml_button_pane_t1

0xa621,	// (0x00066b00) wml_button_bg_pane_g1

0xa639,	// (0x00066b18) wml_button_bg_pane_g2

0xa641,	// (0x00066b20) wml_button_bg_pane_g3

0xa649,	// (0x00066b28) wml_button_bg_pane_g4

0xa651,	// (0x00066b30) wml_button_bg_pane_g5

0xa659,	// (0x00066b38) wml_button_bg_pane_g6

0xa661,	// (0x00066b40) wml_button_bg_pane_g7

0xa669,	// (0x00066b48) wml_button_bg_pane_g8

0xa671,	// (0x00066b50) wml_button_bg_pane_g9

0x0008,

0xf288,	// (0x0006b767) wml_button_bg_pane_g

0x1ecf,	// (0x0005e3ae) bg_list_pane_cp02

0xa679,	// (0x00066b58) mce_header_pane_ParamLimits

0xa679,	// (0x00066b58) mce_header_pane

0xa68f,	// (0x00066b6e) mce_icon_pane

0xa68f,	// (0x00066b6e) mce_image_pane

0xa698,	// (0x00066b77) mce_text_pane_ParamLimits

0xa698,	// (0x00066b77) mce_text_pane

0x1ed7,	// (0x0005e3b6) scroll_pane_cp03

0xa591,	// (0x00066a70) scroll_pane_cp04

0xa6ab,	// (0x00066b8a) scroll_pane_cp05_ParamLimits

0xa6ab,	// (0x00066b8a) scroll_pane_cp05

0x1ee1,	// (0x0005e3c0) mce_header_field_pane_ParamLimits

0x1ee1,	// (0x0005e3c0) mce_header_field_pane

0x1ef8,	// (0x0005e3d7) mce_header_field_pane_2_ParamLimits

0x1ef8,	// (0x0005e3d7) mce_header_field_pane_2

0x1f0e,	// (0x0005e3ed) mce_header_field_pane_3

0x1f16,	// (0x0005e3f5) list_single_mce_message_pane_ParamLimits

0x1f16,	// (0x0005e3f5) list_single_mce_message_pane

0x1f2b,	// (0x0005e40a) list_single_mce_smart_pane_ParamLimits

0x1f2b,	// (0x0005e40a) list_single_mce_smart_pane

0xa6b7,	// (0x00066b96) input_focus_pane_cp03

0xa6c0,	// (0x00066b9f) list_header_data_pane

0x1f4b,	// (0x0005e42a) mce_header_field_pane_t1

0x1f5b,	// (0x0005e43a) list_single_mce_header_pane_ParamLimits

0x1f5b,	// (0x0005e43a) list_single_mce_header_pane

0xa6c8,	// (0x00066ba7) list_single_mce_header_pane_t1

0xa6d7,	// (0x00066bb6) list_single_mce_message_pane_g1

0xa6df,	// (0x00066bbe) list_single_mce_message_pane_t1

0x1f8d,	// (0x0005e46c) bg_cale_heading_pane_cp01_ParamLimits

0x1f8d,	// (0x0005e46c) bg_cale_heading_pane_cp01

0xa6ed,	// (0x00066bcc) bg_cale_pane_cp02_ParamLimits

0xa6ed,	// (0x00066bcc) bg_cale_pane_cp02

0x1fb0,	// (0x0005e48f) cale_month_corner_pane

0x1fc6,	// (0x0005e4a5) cale_month_day_heading_pane_ParamLimits

0x1fc6,	// (0x0005e4a5) cale_month_day_heading_pane

0x1ff9,	// (0x0005e4d8) cale_month_pane_g1_ParamLimits

0x1ff9,	// (0x0005e4d8) cale_month_pane_g1

0x2015,	// (0x0005e4f4) cale_month_pane_g2_ParamLimits

0x2015,	// (0x0005e4f4) cale_month_pane_g2

0x2030,	// (0x0005e50f) cale_month_pane_g3_ParamLimits

0x2030,	// (0x0005e50f) cale_month_pane_g3

0x205c,	// (0x0005e53b) cale_month_pane_g4_ParamLimits

0x205c,	// (0x0005e53b) cale_month_pane_g4

0x2088,	// (0x0005e567) cale_month_pane_g5_ParamLimits

0x2088,	// (0x0005e567) cale_month_pane_g5

0x20bc,	// (0x0005e59b) cale_month_pane_g6_ParamLimits

0x20bc,	// (0x0005e59b) cale_month_pane_g6

0x20f8,	// (0x0005e5d7) cale_month_pane_g7_ParamLimits

0x20f8,	// (0x0005e5d7) cale_month_pane_g7

0x2134,	// (0x0005e613) cale_month_pane_g8_ParamLimits

0x2134,	// (0x0005e613) cale_month_pane_g8

0x2170,	// (0x0005e64f) cale_month_pane_g9_ParamLimits

0x2170,	// (0x0005e64f) cale_month_pane_g9

0x21aa,	// (0x0005e689) cale_month_pane_g10_ParamLimits

0x21aa,	// (0x0005e689) cale_month_pane_g10

0x21e4,	// (0x0005e6c3) cale_month_pane_g11_ParamLimits

0x21e4,	// (0x0005e6c3) cale_month_pane_g11

0x221e,	// (0x0005e6fd) cale_month_pane_g12_ParamLimits

0x221e,	// (0x0005e6fd) cale_month_pane_g12

0x2258,	// (0x0005e737) cale_month_pane_g13_ParamLimits

0x2258,	// (0x0005e737) cale_month_pane_g13

0x000c,

0xf29b,	// (0x0006b77a) cale_month_pane_g_ParamLimits

0xf29b,	// (0x0006b77a) cale_month_pane_g

0x2292,	// (0x0005e771) cale_month_week_pane

0x22a5,	// (0x0005e784) grid_cale_month_pane_ParamLimits

0x22a5,	// (0x0005e784) grid_cale_month_pane

0x22d3,	// (0x0005e7b2) cale_month_day_heading_pane_t1

0x2331,	// (0x0005e810) cale_month_day_heading_pane_t2

0x2396,	// (0x0005e875) cale_month_day_heading_pane_t3

0x23fb,	// (0x0005e8da) cale_month_day_heading_pane_t4

0x2460,	// (0x0005e93f) cale_month_day_heading_pane_t5

0x24d5,	// (0x0005e9b4) cale_month_day_heading_pane_t6

0x254a,	// (0x0005ea29) cale_month_day_heading_pane_t7

0x0006,

0xf2b6,	// (0x0006b795) cale_month_day_heading_pane_t

0xa37d,	// (0x0006685c) bg_cale_side_pane_cp01

0x25bf,	// (0x0005ea9e) cale_month_week_pane_t1

0x25d6,	// (0x0005eab5) cale_month_week_pane_t2

0x25ed,	// (0x0005eacc) cale_month_week_pane_t3

0x2604,	// (0x0005eae3) cale_month_week_pane_t4

0x261b,	// (0x0005eafa) cale_month_week_pane_t5

0x2632,	// (0x0005eb11) cale_month_week_pane_t6

0x0005,

0xf2c5,	// (0x0006b7a4) cale_month_week_pane_t

0x2649,	// (0x0005eb28) cell_cale_month_pane_ParamLimits

0x2649,	// (0x0005eb28) cell_cale_month_pane

0xa722,	// (0x00066c01) cell_cale_month_pane_g1

0x2749,	// (0x0005ec28) cell_cale_month_pane_t1_ParamLimits

0x2749,	// (0x0005ec28) cell_cale_month_pane_t1

0xa38b,	// (0x0006686a) grid_highlight_pane_cp08

0xa24a,	// (0x00066729) main_smil_g1

0x2765,	// (0x0005ec44) smil_status_pane

0xa72e,	// (0x00066c0d) smil_text_pane

0xc052,	// (0x00068531) bg_popup_call3_rect_pane_g8

0xc05a,	// (0x00068539) bg_popup_call3_rect_pane_g9

0x0008,

0xf57e,	// (0x0006ba5d) bg_popup_call3_rect_pane_g

0xc2e2,	// (0x000687c1) smil_status_volume_pane_g1

0xa738,	// (0x00066c17) smil_status_pane_t1

0xc315,	// (0x000687f4) volume_smil_pane

0xa74f,	// (0x00066c2e) list_smil_text_pane

0x2778,	// (0x0005ec57) scroll_pane_cp011

0x2783,	// (0x0005ec62) smil_text_list_pane_t1_ParamLimits

0x2783,	// (0x0005ec62) smil_text_list_pane_t1

0xa759,	// (0x00066c38) aid_volume_smil_ParamLimits

0xa759,	// (0x00066c38) aid_volume_smil

0xa24a,	// (0x00066729) smil_volume_pane_g1

0xa24a,	// (0x00066729) smil_volume_pane_g2

0x0001,

0xf2e5,	// (0x0006b7c4) smil_volume_pane_g

0xa1d1,	// (0x000666b0) listscroll_cale_day_pane

0xa77b,	// (0x00066c5a) bg_cale_pane

0xa793,	// (0x00066c72) list_cale_pane

0xa7a4,	// (0x00066c83) scroll_pane_cp09

0xa7b5,	// (0x00066c94) cale_bg_pane_g1

0xa7bd,	// (0x00066c9c) cale_bg_pane_g2

0xa7c5,	// (0x00066ca4) cale_bg_pane_g3

0xa7cd,	// (0x00066cac) cale_bg_pane_g4

0xa7d5,	// (0x00066cb4) cale_bg_pane_g5

0xa7dd,	// (0x00066cbc) cale_bg_pane_g6

0xa7e5,	// (0x00066cc4) cale_bg_pane_g7

0xa7ed,	// (0x00066ccc) cale_bg_pane_g8

0xa7f5,	// (0x00066cd4) cale_bg_pane_g9

0x0008,

0xf2ea,	// (0x0006b7c9) cale_bg_pane_g

0x27c9,	// (0x0005eca8) list_cale_time_pane_ParamLimits

0x27c9,	// (0x0005eca8) list_cale_time_pane

0xa7fd,	// (0x00066cdc) list_cale_time_pane_g1_ParamLimits

0xa7fd,	// (0x00066cdc) list_cale_time_pane_g1

0xa809,	// (0x00066ce8) list_cale_time_pane_g2_ParamLimits

0xa809,	// (0x00066ce8) list_cale_time_pane_g2

0x27dc,	// (0x0005ecbb) list_cale_time_pane_g3_ParamLimits

0x27dc,	// (0x0005ecbb) list_cale_time_pane_g3

0x27ea,	// (0x0005ecc9) list_cale_time_pane_g4_ParamLimits

0x27ea,	// (0x0005ecc9) list_cale_time_pane_g4

0x27f8,	// (0x0005ecd7) list_cale_time_pane_g5_ParamLimits

0x27f8,	// (0x0005ecd7) list_cale_time_pane_g5

0x0005,

0xf2fd,	// (0x0006b7dc) list_cale_time_pane_g_ParamLimits

0xf2fd,	// (0x0006b7dc) list_cale_time_pane_g

0xa823,	// (0x00066d02) list_cale_time_pane_t1_ParamLimits

0xa823,	// (0x00066d02) list_cale_time_pane_t1

0xa84b,	// (0x00066d2a) list_cale_time_pane_t2_ParamLimits

0xa84b,	// (0x00066d2a) list_cale_time_pane_t2

0x2b69,	// (0x0005f048) aid_blid_cardinal_pane

0x2ba7,	// (0x0005f086) compass_pane_t4

0xa873,	// (0x00066d52) list_cale_time_pane_t4_ParamLimits

0xa873,	// (0x00066d52) list_cale_time_pane_t4

0x2bb5,	// (0x0005f094) compass_pane_t5

0x2bc3,	// (0x0005f0a2) compass_pane_t6

0x2bd1,	// (0x0005f0b0) compass_pane_t7

0xad1d,	// (0x000671fc) navi_pane_cc_t1

0xae84,	// (0x00067363) aid_phob_thumbnail_center_pane

0x331e,	// (0x0005f7fd) main_postcard_pane_g4_ParamLimits

0x0002,

0xf30a,	// (0x0006b7e9) list_cale_time_pane_t_ParamLimits

0xf30a,	// (0x0006b7e9) list_cale_time_pane_t

0x9ad8,	// (0x00065fb7) bg_popup_window_pane_cp02_ParamLimits

0x9ad8,	// (0x00065fb7) bg_popup_window_pane_cp02

0xa89b,	// (0x00066d7a) heading_pane_cp01_ParamLimits

0xa89b,	// (0x00066d7a) heading_pane_cp01

0xa8a7,	// (0x00066d86) loc_req_pane_ParamLimits

0xa8a7,	// (0x00066d86) loc_req_pane

0xa8b7,	// (0x00066d96) loc_type_pane_ParamLimits

0xa8b7,	// (0x00066d96) loc_type_pane

0xa8c9,	// (0x00066da8) loc_type_pane_t1_ParamLimits

0xa8c9,	// (0x00066da8) loc_type_pane_t1

0xa8db,	// (0x00066dba) loc_type_pane_t2_ParamLimits

0xa8db,	// (0x00066dba) loc_type_pane_t2

0xa8ed,	// (0x00066dcc) loc_type_pane_t3_ParamLimits

0xa8ed,	// (0x00066dcc) loc_type_pane_t3

0x0002,

0xf311,	// (0x0006b7f0) loc_type_pane_t_ParamLimits

0xf311,	// (0x0006b7f0) loc_type_pane_t

0xa8ff,	// (0x00066dde) list_loc_req_pane

0xa909,	// (0x00066de8) scroll_pane_cp012

0x2806,	// (0x0005ece5) list_single_loc_request_popup_menu_pane_ParamLimits

0x2806,	// (0x0005ece5) list_single_loc_request_popup_menu_pane

0xa914,	// (0x00066df3) list_single_loc_request_popup_menu_pane_g1_ParamLimits

0xa914,	// (0x00066df3) list_single_loc_request_popup_menu_pane_g1

0xa920,	// (0x00066dff) list_single_loc_request_popup_menu_pane_g2_ParamLimits

0xa920,	// (0x00066dff) list_single_loc_request_popup_menu_pane_g2

0x0001,

0xf318,	// (0x0006b7f7) list_single_loc_request_popup_menu_pane_g_ParamLimits

0xf318,	// (0x0006b7f7) list_single_loc_request_popup_menu_pane_g

0xa92c,	// (0x00066e0b) list_single_loc_request_popup_menu_pane_t1_ParamLimits

0xa92c,	// (0x00066e0b) list_single_loc_request_popup_menu_pane_t1

0xa0dc,	// (0x000665bb) bg_popup_window_pane_cp03_ParamLimits

0xa0dc,	// (0x000665bb) bg_popup_window_pane_cp03

0xa942,	// (0x00066e21) heading_loc_req_pane_ParamLimits

0xa942,	// (0x00066e21) heading_loc_req_pane

0x2813,	// (0x0005ecf2) popup_dyc_status_message_window_g1_ParamLimits

0x2813,	// (0x0005ecf2) popup_dyc_status_message_window_g1

0x2827,	// (0x0005ed06) popup_dyc_status_message_window_t1_ParamLimits

0x2827,	// (0x0005ed06) popup_dyc_status_message_window_t1

0x283c,	// (0x0005ed1b) popup_dyc_status_message_window_t2_ParamLimits

0x283c,	// (0x0005ed1b) popup_dyc_status_message_window_t2

0x2851,	// (0x0005ed30) popup_dyc_status_message_window_t3_ParamLimits

0x2851,	// (0x0005ed30) popup_dyc_status_message_window_t3

0x0002,

0xf31d,	// (0x0006b7fc) popup_dyc_status_message_window_t_ParamLimits

0xf31d,	// (0x0006b7fc) popup_dyc_status_message_window_t

0x9e81,	// (0x00066360) bg_heading_pane_cp01

0xa94e,	// (0x00066e2d) heading_loc_req_pane_g1

0xa956,	// (0x00066e35) heading_loc_req_pane_g2

0xa95e,	// (0x00066e3d) heading_loc_req_pane_g3

0x0002,

0xf324,	// (0x0006b803) heading_loc_req_pane_g

0xa966,	// (0x00066e45) heading_loc_req_pane_t1

0xa975,	// (0x00066e54) bg_popup_sub_pane_cp01_ParamLimits

0xa975,	// (0x00066e54) bg_popup_sub_pane_cp01

0xa983,	// (0x00066e62) popup_cale_events_window_g1_ParamLimits

0xa983,	// (0x00066e62) popup_cale_events_window_g1

0xa9a3,	// (0x00066e82) popup_cale_events_window_g2_ParamLimits

0xa9a3,	// (0x00066e82) popup_cale_events_window_g2

0x0001,

0xf358,	// (0x0006b837) popup_cale_events_window_g_ParamLimits

0xf358,	// (0x0006b837) popup_cale_events_window_g

0xa9c3,	// (0x00066ea2) popup_cale_events_window_t1_ParamLimits

0xa9c3,	// (0x00066ea2) popup_cale_events_window_t1

0xa9d5,	// (0x00066eb4) popup_cale_events_window_t2_ParamLimits

0xa9d5,	// (0x00066eb4) popup_cale_events_window_t2

0xaa13,	// (0x00066ef2) popup_cale_events_window_t3_ParamLimits

0xaa13,	// (0x00066ef2) popup_cale_events_window_t3

0xaa4d,	// (0x00066f2c) popup_cale_events_window_t4_ParamLimits

0xaa4d,	// (0x00066f2c) popup_cale_events_window_t4

0x0003,

0xf35d,	// (0x0006b83c) popup_cale_events_window_t_ParamLimits

0xf35d,	// (0x0006b83c) popup_cale_events_window_t

0x2954,	// (0x0005ee33) call_type_pane

0x2964,	// (0x0005ee43) popup_call_status_window_g1

0x2978,	// (0x0005ee57) popup_call_status_window_g2

0x298c,	// (0x0005ee6b) popup_call_status_window_g3

0x0002,

0xf366,	// (0x0006b845) popup_call_status_window_g

0xaa83,	// (0x00066f62) call_type_pane_g1

0xaa8c,	// (0x00066f6b) call_type_pane_g2

0x0001,

0xf36d,	// (0x0006b84c) call_type_pane_g

0x9e81,	// (0x00066360) bg_popup_sub_pane_cp02

0xaa95,	// (0x00066f74) listscroll_popup_wml_pane

0xaa9d,	// (0x00066f7c) list_wml_pane

0xaaa7,	// (0x00066f86) scroll_pane_cp013

0xaab2,	// (0x00066f91) list_single_graphic_popup_wml_pane_ParamLimits

0xaab2,	// (0x00066f91) list_single_graphic_popup_wml_pane

0xa24a,	// (0x00066729) list_single_graphic_popup_wml_pane_g1

0xaac6,	// (0x00066fa5) list_single_graphic_popup_wml_pane_g2

0x0001,

0xf372,	// (0x0006b851) list_single_graphic_popup_wml_pane_g

0xaace,	// (0x00066fad) list_single_graphic_popup_wml_pane_t1

0xaae4,	// (0x00066fc3) aid_call_pane

0xa0d4,	// (0x000665b3) popup_clock_analogue_window_g1

0xa0d4,	// (0x000665b3) popup_clock_analogue_window_g2

0xaaec,	// (0x00066fcb) popup_clock_analogue_window_g3

0xaaec,	// (0x00066fcb) popup_clock_analogue_window_g4

0xa24a,	// (0x00066729) popup_clock_analogue_window_g5

0x0004,

0xf377,	// (0x0006b856) popup_clock_analogue_window_g

0xaaf4,	// (0x00066fd3) popup_clock_analogue_window_t1

0xab02,	// (0x00066fe1) clock_digital_number_pane_ParamLimits

0xab02,	// (0x00066fe1) clock_digital_number_pane

0xab0e,	// (0x00066fed) clock_digital_number_pane_cp02_ParamLimits

0xab0e,	// (0x00066fed) clock_digital_number_pane_cp02

0xab1a,	// (0x00066ff9) clock_digital_number_pane_cp03_ParamLimits

0xab1a,	// (0x00066ff9) clock_digital_number_pane_cp03

0xab26,	// (0x00067005) clock_digital_number_pane_cp04_ParamLimits

0xab26,	// (0x00067005) clock_digital_number_pane_cp04

0xab36,	// (0x00067015) clock_digital_separator_pane_ParamLimits

0xab36,	// (0x00067015) clock_digital_separator_pane

0xab42,	// (0x00067021) popup_clock_digital_window_t1

0xa24a,	// (0x00066729) clock_digital_number_pane_g1

0xa24a,	// (0x00066729) clock_digital_number_pane_g2

0x0001,

0xf2e5,	// (0x0006b7c4) clock_digital_number_pane_g

0xa24a,	// (0x00066729) clock_digital_separator_pane_g1

0xa24a,	// (0x00066729) clock_digital_separator_pane_g2

0x0001,

0xf2e5,	// (0x0006b7c4) clock_digital_separator_pane_g

0x9e81,	// (0x00066360) bg_popup_window_pane_cp04

0xab5f,	// (0x0006703e) heading_pane_cp03

0xab67,	// (0x00067046) listscroll_popup_gms_pane

0xab6f,	// (0x0006704e) grid_large_graphic_popup_pane

0xab79,	// (0x00067058) listscroll_popup_gms_pane_g1

0xab81,	// (0x00067060) listscroll_popup_gms_pane_g2

0x0001,

0xf382,	// (0x0006b861) listscroll_popup_gms_pane_g

0xa591,	// (0x00066a70) scroll_pane_cp014

0x299b,	// (0x0005ee7a) cell_large_graphic_popup_pane_ParamLimits

0x299b,	// (0x0005ee7a) cell_large_graphic_popup_pane

0x29b3,	// (0x0005ee92) cell_large_graphic_popup_pane_g1_ParamLimits

0x29b3,	// (0x0005ee92) cell_large_graphic_popup_pane_g1

0xab89,	// (0x00067068) cell_large_graphic_popup_pane_g2_ParamLimits

0xab89,	// (0x00067068) cell_large_graphic_popup_pane_g2

0xab95,	// (0x00067074) cell_large_graphic_popup_pane_g3_ParamLimits

0xab95,	// (0x00067074) cell_large_graphic_popup_pane_g3

0xaba2,	// (0x00067081) cell_large_graphic_popup_pane_g4_ParamLimits

0xaba2,	// (0x00067081) cell_large_graphic_popup_pane_g4

0x0003,

0xf387,	// (0x0006b866) cell_large_graphic_popup_pane_g_ParamLimits

0xf387,	// (0x0006b866) cell_large_graphic_popup_pane_g

0xabb2,	// (0x00067091) grid_highlight_pane_cp010

0xa24a,	// (0x00066729) bg_popup_call_pane_g1

0xabbc,	// (0x0006709b) list_single_graphic_popup_conf_pane_ParamLimits

0xabbc,	// (0x0006709b) list_single_graphic_popup_conf_pane

0xabcf,	// (0x000670ae) list_highlight_pane_cp01

0xabd8,	// (0x000670b7) list_single_graphic_popup_conf_pane_g1

0xabe0,	// (0x000670bf) list_single_graphic_popup_conf_pane_g2

0x0001,

0xf390,	// (0x0006b86f) list_single_graphic_popup_conf_pane_g

0xabe8,	// (0x000670c7) list_single_graphic_popup_conf_pane_t1

0xabf6,	// (0x000670d5) linegrid_cams_pane_g1

0x29bf,	// (0x0005ee9e) linegrid_cams_pane_g2

0xa3be,	// (0x0006689d) linegrid_cams_pane_g3

0xabff,	// (0x000670de) linegrid_cams_pane_g4

0x29c8,	// (0x0005eea7) linegrid_cams_pane_g5

0x29d1,	// (0x0005eeb0) linegrid_cams_pane_g6

0xa3c7,	// (0x000668a6) linegrid_cams_pane_g7

0x0006,

0xf395,	// (0x0006b874) linegrid_cams_pane_g

0xac08,	// (0x000670e7) popup_clock_analogue_window

0xac08,	// (0x000670e7) popup_clock_digital_window

0x9e81,	// (0x00066360) popup_phob_thumbnail_window

0xa24a,	// (0x00066729) call_video_uplink_pane_g1

0xac11,	// (0x000670f0) call_video_uplink_pane_g2

0x0001,

0xf3a4,	// (0x0006b883) call_video_uplink_pane_g

0xac19,	// (0x000670f8) video_uplink_pane

0xac21,	// (0x00067100) mce_image_pane_g1

0x29dc,	// (0x0005eebb) mce_image_pane_g2

0x29e6,	// (0x0005eec5) mce_image_pane_g3

0x29ee,	// (0x0005eecd) mce_image_pane_g4

0x29f6,	// (0x0005eed5) mce_image_pane_g5

0x0004,

0xf3a9,	// (0x0006b888) mce_image_pane_g

0xac2b,	// (0x0006710a) control_top_pane_stacon_cp01_ParamLimits

0xac2b,	// (0x0006710a) control_top_pane_stacon_cp01

0xac3f,	// (0x0006711e) uni_indicator_pane_stacon_cp01_ParamLimits

0xac3f,	// (0x0006711e) uni_indicator_pane_stacon_cp01

0xac50,	// (0x0006712f) bg_popup_sub_pane_cp03

0x29fe,	// (0x0005eedd) chi_dic_find_pane

0x2a06,	// (0x0005eee5) listscroll_chi_dic_pane

0x2a0f,	// (0x0005eeee) main_pane_chidic_g1

0xac5a,	// (0x00067139) chi_dic_find_pane_t1

0xac68,	// (0x00067147) find_chidic_pane

0xac71,	// (0x00067150) chi_dic_list_pane_ParamLimits

0xac71,	// (0x00067150) chi_dic_list_pane

0xac82,	// (0x00067161) scroll_pane_cp020

0xac8a,	// (0x00067169) find_chidic_pane_t1

0x9e81,	// (0x00066360) input_focus_pane_cp06

0x2a22,	// (0x0005ef01) list_chi_dic_pane_ParamLimits

0x2a22,	// (0x0005ef01) list_chi_dic_pane

0x2a34,	// (0x0005ef13) list_chi_dic_pane_t1_ParamLimits

0x2a34,	// (0x0005ef13) list_chi_dic_pane_t1

0x9e81,	// (0x00066360) list_highlight_pane_cp020

0xac99,	// (0x00067178) bg_cale_heading_pane_g1

0x2a47,	// (0x0005ef26) bg_cale_heading_pane_g2

0x2a4f,	// (0x0005ef2e) bg_cale_heading_pane_g3

0x2a57,	// (0x0005ef36) bg_cale_heading_pane_g4

0x2a61,	// (0x0005ef40) bg_cale_heading_pane_g5

0x2a6b,	// (0x0005ef4a) bg_cale_heading_pane_g6

0x2a73,	// (0x0005ef52) bg_cale_heading_pane_g7

0x2a7b,	// (0x0005ef5a) bg_cale_heading_pane_g8

0x2a85,	// (0x0005ef64) bg_cale_heading_pane_g9

0x0008,

0xf3b4,	// (0x0006b893) bg_cale_heading_pane_g

0xac99,	// (0x00067178) bg_cale_side_pane_g1

0x2a8f,	// (0x0005ef6e) bg_cale_side_pane_g2

0x2a97,	// (0x0005ef76) bg_cale_side_pane_g3

0x2a9f,	// (0x0005ef7e) bg_cale_side_pane_g4

0x2aa7,	// (0x0005ef86) bg_cale_side_pane_g5

0x2aaf,	// (0x0005ef8e) bg_cale_side_pane_g6

0x2ab7,	// (0x0005ef96) bg_cale_side_pane_g7

0x2abf,	// (0x0005ef9e) bg_cale_side_pane_g8

0x2ac7,	// (0x0005efa6) bg_cale_side_pane_g9

0x0008,

0xf3c7,	// (0x0006b8a6) bg_cale_side_pane_g

0x2acf,	// (0x0005efae) popup_call_status_window_ParamLimits

0x2acf,	// (0x0005efae) popup_call_status_window

0xaca1,	// (0x00067180) stacon_top_pane

0xaca9,	// (0x00067188) status_pane_ParamLimits

0xaca9,	// (0x00067188) status_pane

0xacbe,	// (0x0006719d) status_small_pane

0xacc6,	// (0x000671a5) control_pane

0x9e81,	// (0x00066360) stacon_bottom_pane

0xacce,	// (0x000671ad) list_single_mce_smart_pane_t1_ParamLimits

0xacce,	// (0x000671ad) list_single_mce_smart_pane_t1

0xace1,	// (0x000671c0) list_single_mce_smart_pane_t2_ParamLimits

0xace1,	// (0x000671c0) list_single_mce_smart_pane_t2

0x0001,

0xf3da,	// (0x0006b8b9) list_single_mce_smart_pane_t_ParamLimits

0xf3da,	// (0x0006b8b9) list_single_mce_smart_pane_t

0x2b18,	// (0x0005eff7) compass_pane

0x2b21,	// (0x0005f000) main_location2_pane_t1

0x2b33,	// (0x0005f012) main_location2_pane_t2

0x2b45,	// (0x0005f024) main_location2_pane_t3

0x0003,

0xf3df,	// (0x0006b8be) main_location2_pane_t

0xad00,	// (0x000671df) compass_pane_g1_ParamLimits

0xad00,	// (0x000671df) compass_pane_g1

0x2b89,	// (0x0005f068) compass_pane_t1

0x2b98,	// (0x0005f077) compass_pane_t2

0x0005,

0xf3e8,	// (0x0006b8c7) compass_pane_t

0x2bdf,	// (0x0005f0be) text_secondary_cp61

0xad14,	// (0x000671f3) navi_pane_cams_g5

0xad37,	// (0x00067216) navi_pane_im_t1

0xad45,	// (0x00067224) navi_pane_mp_g1_ParamLimits

0xad45,	// (0x00067224) navi_pane_mp_g1

0xad59,	// (0x00067238) navi_pane_mp_g2_ParamLimits

0xad59,	// (0x00067238) navi_pane_mp_g2

0xad65,	// (0x00067244) navi_pane_mp_g3_ParamLimits

0xad65,	// (0x00067244) navi_pane_mp_g3

0x0002,

0xf3fc,	// (0x0006b8db) navi_pane_mp_g_ParamLimits

0xf3fc,	// (0x0006b8db) navi_pane_mp_g

0xad71,	// (0x00067250) navi_pane_mp_t1

0xad7f,	// (0x0006725e) navi_pane_mp_t2

0x0002,

0xf403,	// (0x0006b8e2) navi_pane_mp_t

0xadbb,	// (0x0006729a) navi_pane_vt_g1

0xad71,	// (0x00067250) navi_pane_vt_t1

0xadc3,	// (0x000672a2) navi_slider_pane

0xadcb,	// (0x000672aa) zooming_pane

0xadd3,	// (0x000672b2) navi_slider_pane_g1

0xaddc,	// (0x000672bb) navi_slider_pane_g2

0x0006,

0xf40a,	// (0x0006b8e9) navi_slider_pane_g

0xae09,	// (0x000672e8) aid_levels_zoom

0xae11,	// (0x000672f0) zooming_pane_g1

0xae19,	// (0x000672f8) zooming_pane_g2

0xae19,	// (0x000672f8) zooming_pane_g3

0x0002,

0xf419,	// (0x0006b8f8) zooming_pane_g

0xae21,	// (0x00067300) level_10_zoom

0xae2a,	// (0x00067309) level_11_zoom

0xae33,	// (0x00067312) level_1_zoom

0xae3c,	// (0x0006731b) level_2_zoom

0xae45,	// (0x00067324) level_3_zoom

0xae4e,	// (0x0006732d) level_4_zoom

0xae57,	// (0x00067336) level_5_zoom

0xae60,	// (0x0006733f) level_6_zoom

0xae69,	// (0x00067348) level_7_zoom

0xae72,	// (0x00067351) level_8_zoom

0xae7b,	// (0x0006735a) level_9_zoom

0xae8c,	// (0x0006736b) popup_phob_thumbnail_window_g1

0xae94,	// (0x00067373) popup_phob_thumbnail_window_g2

0x0001,

0xf420,	// (0x0006b8ff) popup_phob_thumbnail_window_g

0xc1b4,	// (0x00068693) level_1_location

0xc1bc,	// (0x0006869b) level_2_location

0xc1c4,	// (0x000686a3) level_3_location

0xc1cc,	// (0x000686ab) level_4_location

0xadcb,	// (0x000672aa) level_5_location

0x2d1a,	// (0x0005f1f9) mce_icon_pane_g1

0x2d22,	// (0x0005f201) mce_icon_pane_g2

0x0001,

0xf425,	// (0x0006b904) mce_icon_pane_g

0x2d2a,	// (0x0005f209) main_mup_pane_g1_ParamLimits

0x2d2a,	// (0x0005f209) main_mup_pane_g1

0x2d40,	// (0x0005f21f) main_mup_pane_g2_ParamLimits

0x2d40,	// (0x0005f21f) main_mup_pane_g2

0x2d58,	// (0x0005f237) main_mup_pane_g3_ParamLimits

0x2d58,	// (0x0005f237) main_mup_pane_g3

0x2d70,	// (0x0005f24f) main_mup_pane_g4_ParamLimits

0x2d70,	// (0x0005f24f) main_mup_pane_g4

0x2d88,	// (0x0005f267) main_mup_pane_g5_ParamLimits

0x2d88,	// (0x0005f267) main_mup_pane_g5

0x2da4,	// (0x0005f283) main_mup_pane_g6_ParamLimits

0x2da4,	// (0x0005f283) main_mup_pane_g6

0x2dbc,	// (0x0005f29b) main_mup_pane_g7_ParamLimits

0x2dbc,	// (0x0005f29b) main_mup_pane_g7

0x2dd4,	// (0x0005f2b3) main_mup_pane_g8_ParamLimits

0x2dd4,	// (0x0005f2b3) main_mup_pane_g8

0x2dee,	// (0x0005f2cd) main_mup_pane_g9_ParamLimits

0x2dee,	// (0x0005f2cd) main_mup_pane_g9

0x2e08,	// (0x0005f2e7) main_mup_pane_g10_ParamLimits

0x2e08,	// (0x0005f2e7) main_mup_pane_g10

0x2e22,	// (0x0005f301) main_mup_pane_g11_ParamLimits

0x2e22,	// (0x0005f301) main_mup_pane_g11

0x2e36,	// (0x0005f315) main_mup_pane_g12_ParamLimits

0x2e36,	// (0x0005f315) main_mup_pane_g12

0x2e4c,	// (0x0005f32b) main_mup_pane_g13_ParamLimits

0x2e4c,	// (0x0005f32b) main_mup_pane_g13

0x000c,

0xf42a,	// (0x0006b909) main_mup_pane_g_ParamLimits

0xf42a,	// (0x0006b909) main_mup_pane_g

0x2e60,	// (0x0005f33f) main_mup_pane_t1_ParamLimits

0x2e60,	// (0x0005f33f) main_mup_pane_t1

0x2e7a,	// (0x0005f359) main_mup_pane_t2_ParamLimits

0x2e7a,	// (0x0005f359) main_mup_pane_t2

0x2e92,	// (0x0005f371) main_mup_pane_t3_ParamLimits

0x2e92,	// (0x0005f371) main_mup_pane_t3

0x2eaa,	// (0x0005f389) main_mup_pane_t4_ParamLimits

0x2eaa,	// (0x0005f389) main_mup_pane_t4

0x2ec8,	// (0x0005f3a7) main_mup_pane_t5_ParamLimits

0x2ec8,	// (0x0005f3a7) main_mup_pane_t5

0x2edd,	// (0x0005f3bc) main_mup_pane_t6_ParamLimits

0x2edd,	// (0x0005f3bc) main_mup_pane_t6

0x0005,

0xf445,	// (0x0006b924) main_mup_pane_t_ParamLimits

0xf445,	// (0x0006b924) main_mup_pane_t

0x2eef,	// (0x0005f3ce) mup_progress_pane_ParamLimits

0x2eef,	// (0x0005f3ce) mup_progress_pane

0x2efb,	// (0x0005f3da) mup_visualizer_pane_ParamLimits

0x2efb,	// (0x0005f3da) mup_visualizer_pane

0x2f2b,	// (0x0005f40a) mup_volume_pane_ParamLimits

0x2f2b,	// (0x0005f40a) mup_volume_pane

0xae9c,	// (0x0006737b) mup_visualizer_pane_g1_ParamLimits

0xae9c,	// (0x0006737b) mup_visualizer_pane_g1

0xae9c,	// (0x0006737b) mup_visualizer_pane_g2_ParamLimits

0xae9c,	// (0x0006737b) mup_visualizer_pane_g2

0xad00,	// (0x000671df) mup_visualizer_pane_g3_ParamLimits

0xad00,	// (0x000671df) mup_visualizer_pane_g3

0x0002,

0xf452,	// (0x0006b931) mup_visualizer_pane_g_ParamLimits

0xf452,	// (0x0006b931) mup_visualizer_pane_g

0xa24a,	// (0x00066729) mup_volume_pane_g1

0xaeb2,	// (0x00067391) mup_volume_pane_g2

0x0001,

0xf459,	// (0x0006b938) mup_volume_pane_g

0xa24a,	// (0x00066729) mup_progress_pane_g1

0xaebb,	// (0x0006739a) mup_progress_pane_g2

0xaec4,	// (0x000673a3) mup_progress_pane_g3

0x0002,

0xf45e,	// (0x0006b93d) mup_progress_pane_g

0x9e81,	// (0x00066360) bg_popup_window_pane_cp05

0xaecd,	// (0x000673ac) heading_pane_cp02_ParamLimits

0xaecd,	// (0x000673ac) heading_pane_cp02

0xaee7,	// (0x000673c6) list_popup_blid_pane

0xaeef,	// (0x000673ce) list_blid_sat_info_pane_ParamLimits

0xaeef,	// (0x000673ce) list_blid_sat_info_pane

0xaf02,	// (0x000673e1) list_blid_sat_info_pane_g1

0xaf0a,	// (0x000673e9) list_blid_sat_info_pane_t1

0x3041,	// (0x0005f520) mup_equalizer_pane_ParamLimits

0x3041,	// (0x0005f520) mup_equalizer_pane

0x305a,	// (0x0005f539) mup_equalizer_pane_cp1_ParamLimits

0x305a,	// (0x0005f539) mup_equalizer_pane_cp1

0x3077,	// (0x0005f556) mup_equalizer_pane_cp2_ParamLimits

0x3077,	// (0x0005f556) mup_equalizer_pane_cp2

0x3094,	// (0x0005f573) mup_equalizer_pane_cp3_ParamLimits

0x3094,	// (0x0005f573) mup_equalizer_pane_cp3

0x30b5,	// (0x0005f594) mup_equalizer_pane_cp4_ParamLimits

0x30b5,	// (0x0005f594) mup_equalizer_pane_cp4

0x30d6,	// (0x0005f5b5) mup_equalizer_pane_cp5

0x30ea,	// (0x0005f5c9) mup_equalizer_pane_cp6

0x30fe,	// (0x0005f5dd) mup_equalizer_pane_cp7

0xc0d2,	// (0x000685b1) bg_popup_call_poc_act_pane_g9

0xc0da,	// (0x000685b9) bg_popup_call_poc_act_pane_g10

0xc0e2,	// (0x000685c1) bg_popup_call_poc_act_pane_g11

0x000a,

0xa0dc,	// (0x000665bb) mup_scale_pane

0xa24a,	// (0x00066729) mup_scale_pane_g1

0xaf18,	// (0x000673f7) mup_scale_pane_g2

0x0006,

0xf47a,	// (0x0006b959) mup_scale_pane_g

0xaf3c,	// (0x0006741b) msg_data_pane

0xaf44,	// (0x00067423) scroll_pane_cp017

0x3124,	// (0x0005f603) bg_list_pane_cp04_ParamLimits

0x3124,	// (0x0005f603) bg_list_pane_cp04

0xaf4c,	// (0x0006742b) msg_data_pane_g1

0x3144,	// (0x0005f623) msg_data_pane_g2

0x314e,	// (0x0005f62d) msg_data_pane_g3

0x3156,	// (0x0005f635) msg_data_pane_g4

0x315e,	// (0x0005f63d) msg_data_pane_g5

0x3166,	// (0x0005f645) msg_data_pane_g6

0x316e,	// (0x0005f64d) msg_data_pane_g7

0x0006,

0xf489,	// (0x0006b968) msg_data_pane_g

0x3176,	// (0x0005f655) msg_text_pane_ParamLimits

0x3176,	// (0x0005f655) msg_text_pane

0x319b,	// (0x0005f67a) qrid_highlight_pane_cp011_ParamLimits

0x319b,	// (0x0005f67a) qrid_highlight_pane_cp011

0x9e81,	// (0x00066360) msg_body_pane

0x9e81,	// (0x00066360) msg_header_pane

0xaf5d,	// (0x0006743c) input_focus_pane_cp07

0x31bf,	// (0x0005f69e) msg_header_pane_t1_ParamLimits

0x31bf,	// (0x0005f69e) msg_header_pane_t1

0x31d3,	// (0x0005f6b2) msg_header_pane_t2_ParamLimits

0x31d3,	// (0x0005f6b2) msg_header_pane_t2

0x0001,

0xf49d,	// (0x0006b97c) msg_header_pane_t_ParamLimits

0xf49d,	// (0x0006b97c) msg_header_pane_t

0xaf72,	// (0x00067451) msg_body_pane_g1

0x31e5,	// (0x0005f6c4) msg_body_pane_t1_ParamLimits

0x31e5,	// (0x0005f6c4) msg_body_pane_t1

0x3216,	// (0x0005f6f5) msg_body_pane_t2_ParamLimits

0x3216,	// (0x0005f6f5) msg_body_pane_t2

0x3228,	// (0x0005f707) msg_body_pane_t3_ParamLimits

0x3228,	// (0x0005f707) msg_body_pane_t3

0x0002,

0xf4a2,	// (0x0006b981) msg_body_pane_t_ParamLimits

0xf4a2,	// (0x0006b981) msg_body_pane_t

0x3274,	// (0x0005f753) main_viewer_pane_g1_ParamLimits

0x3274,	// (0x0005f753) main_viewer_pane_g1

0x3282,	// (0x0005f761) main_viewer_pane_g2_ParamLimits

0x3282,	// (0x0005f761) main_viewer_pane_g2

0x3290,	// (0x0005f76f) main_viewer_pane_g3_ParamLimits

0x3290,	// (0x0005f76f) main_viewer_pane_g3

0x329f,	// (0x0005f77e) main_viewer_pane_g4_ParamLimits

0x329f,	// (0x0005f77e) main_viewer_pane_g4

0xaf92,	// (0x00067471) main_viewer_pane_g5_ParamLimits

0xaf92,	// (0x00067471) main_viewer_pane_g5

0xaf92,	// (0x00067471) main_viewer_pane_g7_ParamLimits

0xaf92,	// (0x00067471) main_viewer_pane_g7

0xa914,	// (0x00066df3) main_viewer_pane_g8_ParamLimits

0xa914,	// (0x00066df3) main_viewer_pane_g8

0x0007,

0xf4b2,	// (0x0006b991) main_viewer_pane_g_ParamLimits

0xf4b2,	// (0x0006b991) main_viewer_pane_g

0xafb0,	// (0x0006748f) viewer_content_pane_ParamLimits

0xafb0,	// (0x0006748f) viewer_content_pane

0x32db,	// (0x0005f7ba) main_postcard_pane_g1_ParamLimits

0x32db,	// (0x0005f7ba) main_postcard_pane_g1

0x32f1,	// (0x0005f7d0) main_postcard_pane_g2_ParamLimits

0x32f1,	// (0x0005f7d0) main_postcard_pane_g2

0x3307,	// (0x0005f7e6) main_postcard_pane_g3_ParamLimits

0x3307,	// (0x0005f7e6) main_postcard_pane_g3

0x0005,

0xf4c3,	// (0x0006b9a2) main_postcard_pane_g_ParamLimits

0xf4c3,	// (0x0006b9a2) main_postcard_pane_g

0x331e,	// (0x0005f7fd) main_postcard_pane_g4

0xc2f5,	// (0x000687d4) smil_status_volume_pane_g2

0x3361,	// (0x0005f840) postcard_pane_ParamLimits

0x3361,	// (0x0005f840) postcard_pane

0xafbe,	// (0x0006749d) postcard_pane_g1_ParamLimits

0xafbe,	// (0x0006749d) postcard_pane_g1

0x33a3,	// (0x0005f882) postcard_pane_g2_ParamLimits

0x33a3,	// (0x0005f882) postcard_pane_g2

0x33af,	// (0x0005f88e) postcard_pane_g3_ParamLimits

0x33af,	// (0x0005f88e) postcard_pane_g3

0xafcc,	// (0x000674ab) postcard_pane_g4_ParamLimits

0xafcc,	// (0x000674ab) postcard_pane_g4

0x33bb,	// (0x0005f89a) postcard_pane_g5_ParamLimits

0x33bb,	// (0x0005f89a) postcard_pane_g5

0x33d0,	// (0x0005f8af) postcard_pane_g6_ParamLimits

0x33d0,	// (0x0005f8af) postcard_pane_g6

0xafbe,	// (0x0006749d) postcard_pane_g7_ParamLimits

0xafbe,	// (0x0006749d) postcard_pane_g7

0x0006,

0xf4d0,	// (0x0006b9af) postcard_pane_g_ParamLimits

0xf4d0,	// (0x0006b9af) postcard_pane_g

0x33e4,	// (0x0005f8c3) main_mp2_pane_g1_ParamLimits

0x33e4,	// (0x0005f8c3) main_mp2_pane_g1

0x33f0,	// (0x0005f8cf) main_mp2_pane_g2_ParamLimits

0x33f0,	// (0x0005f8cf) main_mp2_pane_g2

0x33fc,	// (0x0005f8db) main_mp2_pane_g3_ParamLimits

0x33fc,	// (0x0005f8db) main_mp2_pane_g3

0x0002,

0xf4df,	// (0x0006b9be) main_mp2_pane_g_ParamLimits

0xf4df,	// (0x0006b9be) main_mp2_pane_g

0x3408,	// (0x0005f8e7) main_mp2_pane_t1_ParamLimits

0x3408,	// (0x0005f8e7) main_mp2_pane_t1

0x341d,	// (0x0005f8fc) main_mp2_pane_t2_ParamLimits

0x341d,	// (0x0005f8fc) main_mp2_pane_t2

0x342f,	// (0x0005f90e) main_mp2_pane_t3_ParamLimits

0x342f,	// (0x0005f90e) main_mp2_pane_t3

0x0002,

0xf4e6,	// (0x0006b9c5) main_mp2_pane_t_ParamLimits

0xf4e6,	// (0x0006b9c5) main_mp2_pane_t

0xafda,	// (0x000674b9) pec_content_pane_ParamLimits

0xafda,	// (0x000674b9) pec_content_pane

0xa591,	// (0x00066a70) scroll_pane_cp015

0xafec,	// (0x000674cb) pec_attribute_pane_ParamLimits

0xafec,	// (0x000674cb) pec_attribute_pane

0x3441,	// (0x0005f920) pec_content_pane_g1_ParamLimits

0x3441,	// (0x0005f920) pec_content_pane_g1

0xaffc,	// (0x000674db) pec_content_pane_t1_ParamLimits

0xaffc,	// (0x000674db) pec_content_pane_t1

0xb00e,	// (0x000674ed) pec_content_pane_t2_ParamLimits

0xb00e,	// (0x000674ed) pec_content_pane_t2

0x0001,

0xf4ed,	// (0x0006b9cc) pec_content_pane_t_ParamLimits

0xf4ed,	// (0x0006b9cc) pec_content_pane_t

0x344d,	// (0x0005f92c) list_single_graphic_pane_cp01_ParamLimits

0x344d,	// (0x0005f92c) list_single_graphic_pane_cp01

0xa0dc,	// (0x000665bb) bg_popup_sub_pane_cp04

0xb020,	// (0x000674ff) popup_mup_playback_window_g1

0xb02c,	// (0x0006750b) popup_mup_playback_window_t1

0xb041,	// (0x00067520) popup_mup_playback_window_t2

0x0001,

0xf4f2,	// (0x0006b9d1) popup_mup_playback_window_t

0xb078,	// (0x00067557) main_image_pane_g1_ParamLimits

0xb078,	// (0x00067557) main_image_pane_g1

0xb0bb,	// (0x0006759a) scroll_pane_cp018_ParamLimits

0xb0bb,	// (0x0006759a) scroll_pane_cp018

0xb0d3,	// (0x000675b2) scroll_pane_cp016_ParamLimits

0xb0d3,	// (0x000675b2) scroll_pane_cp016

0x351a,	// (0x0005f9f9) smil2_image_pane_ParamLimits

0x351a,	// (0x0005f9f9) smil2_image_pane

0x354a,	// (0x0005fa29) smil2_root_pane_ParamLimits

0x354a,	// (0x0005fa29) smil2_root_pane

0x3582,	// (0x0005fa61) smil2_text_pane_ParamLimits

0x3582,	// (0x0005fa61) smil2_text_pane

0x9e81,	// (0x00066360) bg_list_pane_cp06

0xb10f,	// (0x000675ee) grid_radio_pane

0x9e81,	// (0x00066360) bg_popup_window_pane_cp06

0xb117,	// (0x000675f6) main_fmradio_pane_t1

0xab5f,	// (0x0006703e) heading_pane_cp04

0xb125,	// (0x00067604) main_fmradio_pane_t2

0xc0ea,	// (0x000685c9) popup_cale_lunar_info_window_g1

0xb133,	// (0x00067612) main_fmradio_pane_t3

0xc0f2,	// (0x000685d1) popup_cale_lunar_info_window_g2

0xb141,	// (0x00067620) main_fmradio_pane_t4

0x0001,

0xb14f,	// (0x0006762e) main_fmradio_pane_t5

0x0004,

0xf5cd,	// (0x0006baac) popup_cale_lunar_info_window_g

0xf507,	// (0x0006b9e6) main_fmradio_pane_t

0xb15d,	// (0x0006763c) wait_bar_pane_cp03

0xb165,	// (0x00067644) cell_fmradio_pane_ParamLimits

0xb165,	// (0x00067644) cell_fmradio_pane

0xafbe,	// (0x0006749d) cell_fmradio_pane_g1_ParamLimits

0xafbe,	// (0x0006749d) cell_fmradio_pane_g1

0x9e81,	// (0x00066360) grid_highlight_pane_cp011

0xb178,	// (0x00067657) poc_content_pane_ParamLimits

0xb178,	// (0x00067657) poc_content_pane

0xb18a,	// (0x00067669) scroll_pane_cp019

0x3602,	// (0x0005fae1) popup_call_poc_act_window_ParamLimits

0x3602,	// (0x0005fae1) popup_call_poc_act_window

0x3626,	// (0x0005fb05) popup_call_poc_inact_window_ParamLimits

0x3626,	// (0x0005fb05) popup_call_poc_inact_window

0xf5a4,	// (0x0006ba83) bg_popup_call_poc_act_pane_g

0xc062,	// (0x00068541) bg_popup_call_poc_inact_pane_g1

0xc06a,	// (0x00068549) bg_popup_call_poc_inact_pane_g2

0xb192,	// (0x00067671) popup_call_poc_act_window_g2

0xc072,	// (0x00068551) bg_popup_call_poc_inact_pane_g3

0xc07a,	// (0x00068559) bg_popup_call_poc_inact_pane_g4

0xc082,	// (0x00068561) bg_popup_call_poc_inact_pane_g5

0xb19a,	// (0x00067679) popup_call_poc_act_window_t1_ParamLimits

0xb19a,	// (0x00067679) popup_call_poc_act_window_t1

0xb1c2,	// (0x000676a1) popup_call_poc_act_window_t2_ParamLimits

0xb1c2,	// (0x000676a1) popup_call_poc_act_window_t2

0xb1ea,	// (0x000676c9) popup_call_poc_act_window_t3_ParamLimits

0xb1ea,	// (0x000676c9) popup_call_poc_act_window_t3

0xb212,	// (0x000676f1) popup_call_poc_act_window_t4_ParamLimits

0xb212,	// (0x000676f1) popup_call_poc_act_window_t4

0x0003,

0xf512,	// (0x0006b9f1) popup_call_poc_act_window_t_ParamLimits

0xf512,	// (0x0006b9f1) popup_call_poc_act_window_t

0xc08a,	// (0x00068569) bg_popup_call_poc_inact_pane_g6

0xc092,	// (0x00068571) bg_popup_call_poc_inact_pane_g7

0xc09a,	// (0x00068579) bg_popup_call_poc_inact_pane_g8

0xb224,	// (0x00067703) popup_call_poc_inact_window_g2

0xc0a2,	// (0x00068581) bg_popup_call_poc_inact_pane_g9

0x0008,

0xf591,	// (0x0006ba70) bg_popup_call_poc_inact_pane_g

0xb22c,	// (0x0006770b) popup_call_poc_inact_window_t1_ParamLimits

0xb22c,	// (0x0006770b) popup_call_poc_inact_window_t1

0xb241,	// (0x00067720) popup_call_poc_inact_window_t2_ParamLimits

0xb241,	// (0x00067720) popup_call_poc_inact_window_t2

0xb256,	// (0x00067735) popup_call_poc_inact_window_t3_ParamLimits

0xb256,	// (0x00067735) popup_call_poc_inact_window_t3

0x0002,

0xf51b,	// (0x0006b9fa) popup_call_poc_inact_window_t_ParamLimits

0xf51b,	// (0x0006b9fa) popup_call_poc_inact_window_t

0xc268,	// (0x00068747) context_pane_ParamLimits

0x3e59,	// (0x00060338) signal_pane_ParamLimits

0xadcb,	// (0x000672aa) main_call2_pane

0xc256,	// (0x00068735) popup_phob_thumbnail2_window_ParamLimits

0xc256,	// (0x00068735) popup_phob_thumbnail2_window

0xaf7a,	// (0x00067459) aid_hotspot_pointer_arrow_pane

0xaf82,	// (0x00067461) aid_hotspot_pointer_hand_pane

0x396f,	// (0x0005fe4e) phob_pre_status_pane_g5

0x1699,	// (0x0005db78) cams_zoom_pane_ParamLimits

0x16a8,	// (0x0005db87) image_vga_pane_ParamLimits

0x16c2,	// (0x0005dba1) main_camera_pane_g1_ParamLimits

0x16d4,	// (0x0005dbb3) main_camera_pane_g2_ParamLimits

0x16e4,	// (0x0005dbc3) main_camera_pane_g3_ParamLimits

0x16f4,	// (0x0005dbd3) main_camera_pane_g4_ParamLimits

0x1704,	// (0x0005dbe3) main_camera_pane_g5_ParamLimits

0x1714,	// (0x0005dbf3) main_camera_pane_g6_ParamLimits

0x1726,	// (0x0005dc05) main_camera_pane_g7_ParamLimits

0xf21a,	// (0x0006b6f9) main_camera_pane_g_ParamLimits

0x1736,	// (0x0005dc15) main_camera_pane_t1_ParamLimits

0x174c,	// (0x0005dc2b) main_camera_pane_t2_ParamLimits

0xf22b,	// (0x0006b70a) main_camera_pane_t_ParamLimits

0xa0dc,	// (0x000665bb) bg_popup_preview_window_pane_cp01_ParamLimits

0xa0dc,	// (0x000665bb) bg_popup_preview_window_pane_cp01

0xb26b,	// (0x0006774a) popup_phob_thumbnail2_window_g1_ParamLimits

0xb26b,	// (0x0006774a) popup_phob_thumbnail2_window_g1

0x9e81,	// (0x00066360) call2_cli_visual_pane

0x365a,	// (0x0005fb39) popup_call2_audio_conf_window_ParamLimits

0x365a,	// (0x0005fb39) popup_call2_audio_conf_window

0x367a,	// (0x0005fb59) popup_call2_audio_first_window_ParamLimits

0x367a,	// (0x0005fb59) popup_call2_audio_first_window

0x3710,	// (0x0005fbef) popup_call2_audio_in_window_ParamLimits

0x3710,	// (0x0005fbef) popup_call2_audio_in_window

0x3758,	// (0x0005fc37) popup_call2_audio_out_window_ParamLimits

0x3758,	// (0x0005fc37) popup_call2_audio_out_window

0x37c2,	// (0x0005fca1) popup_call2_audio_second_window_ParamLimits

0x37c2,	// (0x0005fca1) popup_call2_audio_second_window

0x3828,	// (0x0005fd07) popup_call2_audio_wait_window_ParamLimits

0x3828,	// (0x0005fd07) popup_call2_audio_wait_window

0x9e81,	// (0x00066360) bg_popup_call2_act_pane_cp03

0xa0be,	// (0x0006659d) list_conf_pane_cp

0xb277,	// (0x00067756) popup_call2_audio_conf_window_t1

0xabbc,	// (0x0006709b) list_single_graphic_popup_conf2_pane_ParamLimits

0xabbc,	// (0x0006709b) list_single_graphic_popup_conf2_pane

0xabcf,	// (0x000670ae) list_highlight_pane_cp04

0xb285,	// (0x00067764) list_single_graphic_popup_conf2_pane_g1

0xabe0,	// (0x000670bf) list_single_graphic_popup_conf2_pane_g2

0x0001,

0xf522,	// (0x0006ba01) list_single_graphic_popup_conf2_pane_g

0xb28f,	// (0x0006776e) list_single_graphic_popup_conf2_pane_t1

0xb29d,	// (0x0006777c) bg_popup_call2_act_pane_cp01_ParamLimits

0xb29d,	// (0x0006777c) bg_popup_call2_act_pane_cp01

0xb327,	// (0x00067806) call_type_pane_cp05_ParamLimits

0xb327,	// (0x00067806) call_type_pane_cp05

0xb37b,	// (0x0006785a) popup_call2_audio_second_window_g1_ParamLimits

0xb37b,	// (0x0006785a) popup_call2_audio_second_window_g1

0xb3cf,	// (0x000678ae) popup_call2_audio_second_window_g2_ParamLimits

0xb3cf,	// (0x000678ae) popup_call2_audio_second_window_g2

0x0002,

0xf527,	// (0x0006ba06) popup_call2_audio_second_window_g_ParamLimits

0xf527,	// (0x0006ba06) popup_call2_audio_second_window_g

0xb434,	// (0x00067913) popup_call2_audio_second_window_t1_ParamLimits

0xb434,	// (0x00067913) popup_call2_audio_second_window_t1

0xb4ef,	// (0x000679ce) popup_call2_audio_second_window_t2_ParamLimits

0xb4ef,	// (0x000679ce) popup_call2_audio_second_window_t2

0xb542,	// (0x00067a21) popup_call2_audio_second_window_t3_ParamLimits

0xb542,	// (0x00067a21) popup_call2_audio_second_window_t3

0x0003,

0xf52e,	// (0x0006ba0d) popup_call2_audio_second_window_t_ParamLimits

0xf52e,	// (0x0006ba0d) popup_call2_audio_second_window_t

0x9e81,	// (0x00066360) bg_popup_call2_in_pane_cp02

0x9e8b,	// (0x0006636a) call_type_pane_cp04

0x9e93,	// (0x00066372) popup_call2_audio_wait_window_g1

0x9e9b,	// (0x0006637a) popup_call2_audio_wait_window_g2

0x0001,

0xf107,	// (0x0006b5e6) popup_call2_audio_wait_window_g

0x9ea3,	// (0x00066382) popup_call2_audio_wait_window_t3

0xb635,	// (0x00067b14) bg_popup_call2_act_pane_ParamLimits

0xb635,	// (0x00067b14) bg_popup_call2_act_pane

0xb6f5,	// (0x00067bd4) call_type_pane_cp03_ParamLimits

0xb6f5,	// (0x00067bd4) call_type_pane_cp03

0xb759,	// (0x00067c38) popup_call2_audio_first_window_g1_ParamLimits

0xb759,	// (0x00067c38) popup_call2_audio_first_window_g1

0xb7c9,	// (0x00067ca8) popup_call2_audio_first_window_g2_ParamLimits

0xb7c9,	// (0x00067ca8) popup_call2_audio_first_window_g2

0xae9c,	// (0x0006737b) popup_call2_audio_first_window_g3_ParamLimits

0xae9c,	// (0x0006737b) popup_call2_audio_first_window_g3

0x0004,

0xf537,	// (0x0006ba16) popup_call2_audio_first_window_g_ParamLimits

0xf537,	// (0x0006ba16) popup_call2_audio_first_window_g

0xb8a7,	// (0x00067d86) popup_call2_audio_first_window_t1_ParamLimits

0xb8a7,	// (0x00067d86) popup_call2_audio_first_window_t1

0xb9aa,	// (0x00067e89) popup_call2_audio_first_window_t4_ParamLimits

0xb9aa,	// (0x00067e89) popup_call2_audio_first_window_t4

0xba8d,	// (0x00067f6c) popup_call2_audio_first_window_t5_ParamLimits

0xba8d,	// (0x00067f6c) popup_call2_audio_first_window_t5

0x0003,

0xf542,	// (0x0006ba21) popup_call2_audio_first_window_t_ParamLimits

0xf542,	// (0x0006ba21) popup_call2_audio_first_window_t

0xa0d4,	// (0x000665b3) bg_popup_call2_act_pane_g1

0xc0fa,	// (0x000685d9) popup_cale_lunar_info_window_t1

0xc108,	// (0x000685e7) popup_cale_lunar_info_window_t2

0xc116,	// (0x000685f5) popup_cale_lunar_info_window_t3

0x9e81,	// (0x00066360) bg_popup_call2_bubble_pane

0xbb8e,	// (0x0006806d) bg_popup_call2_in_pane_cp01_ParamLimits

0xbb8e,	// (0x0006806d) bg_popup_call2_in_pane_cp01

0x9b5d,	// (0x0006603c) call_type_pane_cp02

0xbbd6,	// (0x000680b5) popup_call2_audio_out_window_g1_ParamLimits

0xbbd6,	// (0x000680b5) popup_call2_audio_out_window_g1

0xbc02,	// (0x000680e1) popup_call2_audio_out_window_g2_ParamLimits

0xbc02,	// (0x000680e1) popup_call2_audio_out_window_g2

0xbc2a,	// (0x00068109) popup_call2_audio_out_window_g3_ParamLimits

0xbc2a,	// (0x00068109) popup_call2_audio_out_window_g3

0x0003,

0xf54b,	// (0x0006ba2a) popup_call2_audio_out_window_g_ParamLimits

0xf54b,	// (0x0006ba2a) popup_call2_audio_out_window_g

0xbc65,	// (0x00068144) popup_call2_audio_out_window_t1_ParamLimits

0xbc65,	// (0x00068144) popup_call2_audio_out_window_t1

0xbcc4,	// (0x000681a3) popup_call2_audio_out_window_t2_ParamLimits

0xbcc4,	// (0x000681a3) popup_call2_audio_out_window_t2

0xbd18,	// (0x000681f7) popup_call2_audio_out_window_t3_ParamLimits

0xbd18,	// (0x000681f7) popup_call2_audio_out_window_t3

0xbd2e,	// (0x0006820d) popup_call2_audio_out_window_t4_ParamLimits

0xbd2e,	// (0x0006820d) popup_call2_audio_out_window_t4

0xbd44,	// (0x00068223) popup_call2_audio_out_window_t5_ParamLimits

0xbd44,	// (0x00068223) popup_call2_audio_out_window_t5

0x0005,

0xf554,	// (0x0006ba33) popup_call2_audio_out_window_t_ParamLimits

0xf554,	// (0x0006ba33) popup_call2_audio_out_window_t

0xbda8,	// (0x00068287) bg_popup_call2_in_pane_ParamLimits

0xbda8,	// (0x00068287) bg_popup_call2_in_pane

0xbe04,	// (0x000682e3) popup_call2_audio_in_window_g1_ParamLimits

0xbe04,	// (0x000682e3) popup_call2_audio_in_window_g1

0xbe3c,	// (0x0006831b) popup_call2_audio_in_window_g2_ParamLimits

0xbe3c,	// (0x0006831b) popup_call2_audio_in_window_g2

0xbe74,	// (0x00068353) popup_call2_audio_in_window_g3_ParamLimits

0xbe74,	// (0x00068353) popup_call2_audio_in_window_g3

0x0003,

0xf561,	// (0x0006ba40) popup_call2_audio_in_window_g_ParamLimits

0xf561,	// (0x0006ba40) popup_call2_audio_in_window_g

0xbecc,	// (0x000683ab) popup_call2_audio_in_window_t1_ParamLimits

0xbecc,	// (0x000683ab) popup_call2_audio_in_window_t1

0xbf4c,	// (0x0006842b) popup_call2_audio_in_window_t2_ParamLimits

0xbf4c,	// (0x0006842b) popup_call2_audio_in_window_t2

0xbfcc,	// (0x000684ab) popup_call2_audio_in_window_t3_ParamLimits

0xbfcc,	// (0x000684ab) popup_call2_audio_in_window_t3

0xbfe6,	// (0x000684c5) popup_call2_audio_in_window_t4_ParamLimits

0xbfe6,	// (0x000684c5) popup_call2_audio_in_window_t4

0xbff8,	// (0x000684d7) popup_call2_audio_in_window_t5_ParamLimits

0xbff8,	// (0x000684d7) popup_call2_audio_in_window_t5

0xc00d,	// (0x000684ec) popup_call2_audio_in_window_t6_ParamLimits

0xc00d,	// (0x000684ec) popup_call2_audio_in_window_t6

0x0005,

0xf56a,	// (0x0006ba49) popup_call2_audio_in_window_t_ParamLimits

0xf56a,	// (0x0006ba49) popup_call2_audio_in_window_t

0xa0d4,	// (0x000665b3) bg_popup_call2_in_pane_g1

0xc124,	// (0x00068603) popup_cale_lunar_info_window_t4

0x0003,

0xf5d2,	// (0x0006bab1) popup_cale_lunar_info_window_t

0xa0dc,	// (0x000665bb) bg_popup_call2_rect_pane_ParamLimits

0xa0dc,	// (0x000665bb) bg_popup_call2_rect_pane

0x9e81,	// (0x00066360) call2_cli_visual_graphic_pane

0x9e81,	// (0x00066360) call2_cli_visual_text_pane

0xc308,	// (0x000687e7) smil_status_volume_pane_g3

0x0002,

0xa24a,	// (0x00066729) call2_cli_visual_graphic_pane_g1

0xa24a,	// (0x00066729) call2_cli_visual_graphic_pane_g2

0xa24a,	// (0x00066729) call2_cli_visual_graphic_pane_g3

0x0002,

0xf577,	// (0x0006ba56) call2_cli_visual_graphic_pane_g

0xc022,	// (0x00068501) bg_popup_call2_rect_pane_g1

0xa2d6,	// (0x000667b5) bg_popup_call2_rect_pane_g2

0xc02a,	// (0x00068509) bg_popup_call2_rect_pane_g3

0xc032,	// (0x00068511) bg_popup_call2_rect_pane_g4

0xc03a,	// (0x00068519) bg_popup_call2_rect_pane_g5

0xc042,	// (0x00068521) bg_popup_call2_rect_pane_g6

0xc04a,	// (0x00068529) bg_popup_call2_rect_pane_g7

0xc052,	// (0x00068531) bg_popup_call2_rect_pane_g8

0xc05a,	// (0x00068539) bg_popup_call2_rect_pane_g9

0x0008,

0xf57e,	// (0x0006ba5d) bg_popup_call2_rect_pane_g

0xc062,	// (0x00068541) bg_popup_call2_bubble_pane_g1

0xc06a,	// (0x00068549) bg_popup_call2_bubble_pane_g2

0xc072,	// (0x00068551) bg_popup_call2_bubble_pane_g3

0xc07a,	// (0x00068559) bg_popup_call2_bubble_pane_g4

0xc082,	// (0x00068561) bg_popup_call2_bubble_pane_g5

0xc08a,	// (0x00068569) bg_popup_call2_bubble_pane_g6

0xc092,	// (0x00068571) bg_popup_call2_bubble_pane_g7

0xc09a,	// (0x00068579) bg_popup_call2_bubble_pane_g8

0xc0a2,	// (0x00068581) bg_popup_call2_bubble_pane_g9

0x0008,

0xf591,	// (0x0006ba70) bg_popup_call2_bubble_pane_g

0x11e8,	// (0x0005d6c7) aid_cale_week_size_cell_pane

0x1762,	// (0x0005dc41) aid_cams_cif_uncrop_pane_ParamLimits

0x1762,	// (0x0005dc41) aid_cams_cif_uncrop_pane

0x1917,	// (0x0005ddf6) aid_cams_size_cell_ParamLimits

0x1917,	// (0x0005ddf6) aid_cams_size_cell

0x192b,	// (0x0005de0a) grid_cams_pane_ParamLimits

0x1945,	// (0x0005de24) linegrid_cams_pane_ParamLimits

0x1b25,	// (0x0005e004) call_video_pane_t1

0x1b43,	// (0x0005e022) call_video_pane_t2

0x0001,

0xf27e,	// (0x0006b75d) call_video_pane_t

0x1f6f,	// (0x0005e44e) aid_cale_month_size_cell_pane_ParamLimits

0x1f6f,	// (0x0005e44e) aid_cale_month_size_cell_pane

0xf61b,	// (0x0006bafa) smil_status_volume_pane_g

0xc315,	// (0x000687f4) volume_smil_pane_ParamLimits

0x99f0,	// (0x00065ecf) aid_popup2_width_pane

0x114a,	// (0x0005d629) cell_qdial_pane_g4_ParamLimits

0x114a,	// (0x0005d629) cell_qdial_pane_g4

0x2b69,	// (0x0005f048) aid_blid_cardinal_pane_ParamLimits

0x2b75,	// (0x0005f054) aid_blid_destination_pane_ParamLimits

0x2b75,	// (0x0005f054) aid_blid_destination_pane

0xa0dc,	// (0x000665bb) bg_popup_call_poc_act_pane_ParamLimits

0xa0dc,	// (0x000665bb) bg_popup_call_poc_act_pane

0xa0dc,	// (0x000665bb) bg_popup_call_poc_inact_pane_ParamLimits

0xa0dc,	// (0x000665bb) bg_popup_call_poc_inact_pane

0xc0aa,	// (0x00068589) bg_popup_call_poc_act_pane_g1

0xc0b2,	// (0x00068591) bg_popup_call_poc_act_pane_g2

0xc0ba,	// (0x00068599) bg_popup_call_poc_act_pane_g3

0xc07a,	// (0x00068559) bg_popup_call_poc_act_pane_g4

0xc082,	// (0x00068561) bg_popup_call_poc_act_pane_g5

0xc0c2,	// (0x000685a1) bg_popup_call_poc_act_pane_g6

0xc092,	// (0x00068571) bg_popup_call_poc_act_pane_g7

0xc0ca,	// (0x000685a9) bg_popup_call_poc_act_pane_g8

0x9e81,	// (0x00066360) main_usb_pane

0xc231,	// (0x00068710) popup_cale_lunar_info_window

0x1e1b,	// (0x0005e2fa) im_reading_pane_t1_ParamLimits

0xa4e9,	// (0x000669c8) list_im_pane_ParamLimits

0xa4fa,	// (0x000669d9) scroll_pane_cp07_ParamLimits

0x9e81,	// (0x00066360) grid_highlight_pane_cp012

0xa0dc,	// (0x000665bb) mup_scale_pane_ParamLimits

0xafbe,	// (0x0006749d) main_usb_pane_g1_ParamLimits

0xafbe,	// (0x0006749d) main_usb_pane_g1

0x3884,	// (0x0005fd63) main_usb_pane_g2_ParamLimits

0x3884,	// (0x0005fd63) main_usb_pane_g2

0x0001,

0xf5bb,	// (0x0006ba9a) main_usb_pane_g_ParamLimits

0xf5bb,	// (0x0006ba9a) main_usb_pane_g

0x389a,	// (0x0005fd79) main_usb_pane_t1_ParamLimits

0x389a,	// (0x0005fd79) main_usb_pane_t1

0x38ac,	// (0x0005fd8b) main_usb_pane_t2_ParamLimits

0x38ac,	// (0x0005fd8b) main_usb_pane_t2

0x38be,	// (0x0005fd9d) main_usb_pane_t3_ParamLimits

0x38be,	// (0x0005fd9d) main_usb_pane_t3

0x38d0,	// (0x0005fdaf) main_usb_pane_t4_ParamLimits

0x38d0,	// (0x0005fdaf) main_usb_pane_t4

0x38e2,	// (0x0005fdc1) main_usb_pane_t5_ParamLimits

0x38e2,	// (0x0005fdc1) main_usb_pane_t5

0x38f4,	// (0x0005fdd3) main_usb_pane_t6_ParamLimits

0x38f4,	// (0x0005fdd3) main_usb_pane_t6

0x0005,

0xf5c0,	// (0x0006ba9f) main_usb_pane_t_ParamLimits

0x2b18,	// (0x0005eff7) aid_text_placing

0x2b21,	// (0x0005f000) main_location2_pane_t1_ParamLimits

0x2b33,	// (0x0005f012) main_location2_pane_t2_ParamLimits

0x2b45,	// (0x0005f024) main_location2_pane_t3_ParamLimits

0x2b57,	// (0x0005f036) main_location2_pane_t4_ParamLimits

0x2b57,	// (0x0005f036) main_location2_pane_t4

0xf3df,	// (0x0006b8be) main_location2_pane_t_ParamLimits

0xa118,	// (0x000665f7) find_pinb_pane_g2_ParamLimits

0xa118,	// (0x000665f7) find_pinb_pane_g2

0x0001,

0xf12d,	// (0x0006b60c) find_pinb_pane_g_ParamLimits

0xf12d,	// (0x0006b60c) find_pinb_pane_g

0xa124,	// (0x00066603) find_pinb_pane_t1_ParamLimits

0xa136,	// (0x00066615) find_pinb_pane_t2_ParamLimits

0xf132,	// (0x0006b611) find_pinb_pane_t_ParamLimits

0x9e81,	// (0x00066360) main_call3_pane

0x22d3,	// (0x0005e7b2) cale_month_day_heading_pane_t1_ParamLimits

0x2331,	// (0x0005e810) cale_month_day_heading_pane_t2_ParamLimits

0x2396,	// (0x0005e875) cale_month_day_heading_pane_t3_ParamLimits

0x23fb,	// (0x0005e8da) cale_month_day_heading_pane_t4_ParamLimits

0x2460,	// (0x0005e93f) cale_month_day_heading_pane_t5_ParamLimits

0x24d5,	// (0x0005e9b4) cale_month_day_heading_pane_t6_ParamLimits

0x254a,	// (0x0005ea29) cale_month_day_heading_pane_t7_ParamLimits

0xf2b6,	// (0x0006b795) cale_month_day_heading_pane_t_ParamLimits

0xa746,	// (0x00066c25) smil_status_volume_pane

0x337f,	// (0x0005f85e) postcard_address_pane_ParamLimits

0x337f,	// (0x0005f85e) postcard_address_pane

0x3391,	// (0x0005f870) postcard_message_pane_ParamLimits

0x3391,	// (0x0005f870) postcard_message_pane

0x3862,	// (0x0005fd41) call2_cli_visual_pane_t1_ParamLimits

0x3862,	// (0x0005fd41) call2_cli_visual_pane_t1

0x4086,	// (0x00060565) postcard_message_pane_t1_ParamLimits

0x4086,	// (0x00060565) postcard_message_pane_t1

0x406f,	// (0x0006054e) postcard_address_pane_t1_ParamLimits

0x406f,	// (0x0006054e) postcard_address_pane_t1

0x405b,	// (0x0006053a) popup_call3_audio_in_window_ParamLimits

0x405b,	// (0x0006053a) popup_call3_audio_in_window

0x3ee6,	// (0x000603c5) bg_popup_call3_in_pane_ParamLimits

0x3ee6,	// (0x000603c5) bg_popup_call3_in_pane

0x3f5c,	// (0x0006043b) popup_call3_audio_in_window_g1_ParamLimits

0x3f5c,	// (0x0006043b) popup_call3_audio_in_window_g1

0x3f7c,	// (0x0006045b) popup_call3_audio_in_window_g2_ParamLimits

0x3f7c,	// (0x0006045b) popup_call3_audio_in_window_g2

0x3f9c,	// (0x0006047b) popup_call3_audio_in_window_g3_ParamLimits

0x3f9c,	// (0x0006047b) popup_call3_audio_in_window_g3

0x0003,

0xf622,	// (0x0006bb01) popup_call3_audio_in_window_g_ParamLimits

0xf622,	// (0x0006bb01) popup_call3_audio_in_window_g

0x3fcd,	// (0x000604ac) popup_call3_audio_in_window_t1_ParamLimits

0x3fcd,	// (0x000604ac) popup_call3_audio_in_window_t1

0x400b,	// (0x000604ea) popup_call3_audio_in_window_t2_ParamLimits

0x400b,	// (0x000604ea) popup_call3_audio_in_window_t2

0x4049,	// (0x00060528) popup_call3_audio_in_window_t3_ParamLimits

0x4049,	// (0x00060528) popup_call3_audio_in_window_t3

0x0002,

0xf62b,	// (0x0006bb0a) popup_call3_audio_in_window_t_ParamLimits

0xf62b,	// (0x0006bb0a) popup_call3_audio_in_window_t

0xadcb,	// (0x000672aa) bg_popup_call3_rect_pane

0xc022,	// (0x00068501) bg_popup_call3_rect_pane_g1

0xa2d6,	// (0x000667b5) bg_popup_call3_rect_pane_g2

0xc02a,	// (0x00068509) bg_popup_call3_rect_pane_g3

0xc032,	// (0x00068511) bg_popup_call3_rect_pane_g4

0xc03a,	// (0x00068519) bg_popup_call3_rect_pane_g5

0xc042,	// (0x00068521) bg_popup_call3_rect_pane_g6

0xc04a,	// (0x00068529) bg_popup_call3_rect_pane_g7

0x2f41,	// (0x0005f420) mup_visualizer_osc_pane

0xaeaa,	// (0x00067389) mup_visualizer_spec_pane

0x3f16,	// (0x000603f5) call3_video_qcif_pane_ParamLimits

0x3f16,	// (0x000603f5) call3_video_qcif_pane

0x3f29,	// (0x00060408) call3_video_qcif_uncrop_pane_ParamLimits

0x3f29,	// (0x00060408) call3_video_qcif_uncrop_pane

0x3f37,	// (0x00060416) call3_video_subqcif_pane_ParamLimits

0x3f37,	// (0x00060416) call3_video_subqcif_pane

0x3f4b,	// (0x0006042a) call3_video_subqcif_uncrop_pane_ParamLimits

0x3f4b,	// (0x0006042a) call3_video_subqcif_uncrop_pane

0x3fbc,	// (0x0006049b) popup_call3_audio_in_window_g4_ParamLimits

0x3fbc,	// (0x0006049b) popup_call3_audio_in_window_g4

0x3ed5,	// (0x000603b4) mup_spec_half_pane

0x3ede,	// (0x000603bd) mup_spec_half_pane_cp

0xc2c8,	// (0x000687a7) mup_osc_middle_pane

0xc2d1,	// (0x000687b0) mup_visualizer_osc_pane_g1

0x3eb5,	// (0x00060394) mup_spec_bar_pane_ParamLimits

0x3eb5,	// (0x00060394) mup_spec_bar_pane

0xc2b5,	// (0x00068794) mup_spec_bar_pane_g1

0xc2bf,	// (0x0006879e) mup_spec_bar_pane_g2

0x0001,

0xf616,	// (0x0006baf5) mup_spec_bar_pane_g

0x11e8,	// (0x0005d6c7) aid_cale_week_size_cell_pane_ParamLimits

0x11fb,	// (0x0005d6da) bg_cale_heading_pane_ParamLimits

0xa352,	// (0x00066831) bg_cale_pane_cp01_ParamLimits

0x120f,	// (0x0005d6ee) cale_week_corner_pane_ParamLimits

0x1225,	// (0x0005d704) cale_week_day_heading_pane_ParamLimits

0x1239,	// (0x0005d718) cale_week_scroll_pane_g1_ParamLimits

0x124a,	// (0x0005d729) cale_week_scroll_pane_g2_ParamLimits

0x125b,	// (0x0005d73a) cale_week_scroll_pane_g3_ParamLimits

0x126c,	// (0x0005d74b) cale_week_scroll_pane_g4_ParamLimits

0x127d,	// (0x0005d75c) cale_week_scroll_pane_g5_ParamLimits

0x1290,	// (0x0005d76f) cale_week_scroll_pane_g6_ParamLimits

0x12a3,	// (0x0005d782) cale_week_scroll_pane_g7_ParamLimits

0x12b6,	// (0x0005d795) cale_week_scroll_pane_g8_ParamLimits

0x12c9,	// (0x0005d7a8) cale_week_scroll_pane_g9_ParamLimits

0x12da,	// (0x0005d7b9) cale_week_scroll_pane_g10_ParamLimits

0x12eb,	// (0x0005d7ca) cale_week_scroll_pane_g11_ParamLimits

0x12fc,	// (0x0005d7db) cale_week_scroll_pane_g12_ParamLimits

0x130d,	// (0x0005d7ec) cale_week_scroll_pane_g13_ParamLimits

0x131e,	// (0x0005d7fd) cale_week_scroll_pane_g14_ParamLimits

0x132f,	// (0x0005d80e) cale_week_scroll_pane_g15_ParamLimits

0xf1be,	// (0x0006b69d) cale_week_scroll_pane_g_ParamLimits

0x1340,	// (0x0005d81f) cale_week_time_pane_ParamLimits

0x1353,	// (0x0005d832) grid_cale_week_pane_ParamLimits

0xa36b,	// (0x0006684a) listscroll_cale_week_pane_t1

0x1368,	// (0x0005d847) scroll_pane_cp08_ParamLimits

0x1fb0,	// (0x0005e48f) cale_month_corner_pane_ParamLimits

0xa710,	// (0x00066bef) cale_month_pane_t1

0x2292,	// (0x0005e771) cale_month_week_pane_ParamLimits

0x2964,	// (0x0005ee43) popup_call_status_window_g1_ParamLimits

0x2978,	// (0x0005ee57) popup_call_status_window_g2_ParamLimits

0x298c,	// (0x0005ee6b) popup_call_status_window_g3_ParamLimits

0xf366,	// (0x0006b845) popup_call_status_window_g_ParamLimits

0xaadc,	// (0x00066fbb) aid_call2_pane

0x31b1,	// (0x0005f690) msg_header_pane_g1

0x337f,	// (0x0005f85e) postcard_address2_pane_ParamLimits

0x337f,	// (0x0005f85e) postcard_address2_pane

0x3391,	// (0x0005f870) postcard_message2_pane_ParamLimits

0x3391,	// (0x0005f870) postcard_message2_pane

0x3e67,	// (0x00060346) message2_row_pane_ParamLimits

0x3e67,	// (0x00060346) message2_row_pane

0x3e83,	// (0x00060362) address2_row_pane_ParamLimits

0x3e83,	// (0x00060362) address2_row_pane

0xc283,	// (0x00068762) postcard_message2_row_pane_g1

0xc28b,	// (0x0006876a) postcard_message2_row_pane_t1

0xc283,	// (0x00068762) address2_row_pane_g1

0xc28b,	// (0x0006876a) address2_row_pane_t1

0x1600,	// (0x0005dadf) aid_size_cell_vorec

0x9e81,	// (0x00066360) main_rss_pane

0x3e96,	// (0x00060375) rss_list_single_pane_ParamLimits

0x3e96,	// (0x00060375) rss_list_single_pane

0xc299,	// (0x00068778) rss_list_single_pane_t1

0xc2a7,	// (0x00068786) rss_list_single_pane_t2

0x0001,

0xf611,	// (0x0006baf0) rss_list_single_pane_t

0x9e81,	// (0x00066360) main_camera2_pane

0x9e81,	// (0x00066360) main_video2_pane

0x40ff,	// (0x000605de) cams_zoom_pane_cp2_ParamLimits

0x40ff,	// (0x000605de) cams_zoom_pane_cp2

0x411f,	// (0x000605fe) image2_vga_pane_ParamLimits

0x411f,	// (0x000605fe) image2_vga_pane

0x4170,	// (0x0006064f) main_camera2_pane_g1_ParamLimits

0x4170,	// (0x0006064f) main_camera2_pane_g1

0x4190,	// (0x0006066f) main_camera2_pane_g2_ParamLimits

0x4190,	// (0x0006066f) main_camera2_pane_g2

0x41b0,	// (0x0006068f) main_camera2_pane_g3_ParamLimits

0x41b0,	// (0x0006068f) main_camera2_pane_g3

0x41d0,	// (0x000606af) main_camera2_pane_g4_ParamLimits

0x41d0,	// (0x000606af) main_camera2_pane_g4

0x41f0,	// (0x000606cf) main_camera2_pane_g5_ParamLimits

0x41f0,	// (0x000606cf) main_camera2_pane_g5

0x4210,	// (0x000606ef) main_camera2_pane_g6_ParamLimits

0x4210,	// (0x000606ef) main_camera2_pane_g6

0x4230,	// (0x0006070f) main_camera2_pane_g7_ParamLimits

0x4230,	// (0x0006070f) main_camera2_pane_g7

0x4250,	// (0x0006072f) main_camera2_pane_g8_ParamLimits

0x4250,	// (0x0006072f) main_camera2_pane_g8

0x0008,

0xf632,	// (0x0006bb11) main_camera2_pane_g_ParamLimits

0xf632,	// (0x0006bb11) main_camera2_pane_g

0x4290,	// (0x0006076f) main_camera2_pane_t1_ParamLimits

0x4290,	// (0x0006076f) main_camera2_pane_t1

0x42c5,	// (0x000607a4) main_camera2_pane_t2_ParamLimits

0x42c5,	// (0x000607a4) main_camera2_pane_t2

0x42eb,	// (0x000607ca) main_camera2_pane_t3_ParamLimits

0x42eb,	// (0x000607ca) main_camera2_pane_t3

0x4349,	// (0x00060828) main_camera2_pane_t4_ParamLimits

0x4349,	// (0x00060828) main_camera2_pane_t4

0x0006,

0xf645,	// (0x0006bb24) main_camera2_pane_t_ParamLimits

0xf645,	// (0x0006bb24) main_camera2_pane_t

0x43db,	// (0x000608ba) cams_zoom_pane_cp4_ParamLimits

0x43db,	// (0x000608ba) cams_zoom_pane_cp4

0x43f1,	// (0x000608d0) image2_cif_pane_ParamLimits

0x43f1,	// (0x000608d0) image2_cif_pane

0x441c,	// (0x000608fb) image2_subqcif_pane_ParamLimits

0x441c,	// (0x000608fb) image2_subqcif_pane

0x4436,	// (0x00060915) main_video2_pane_g1_ParamLimits

0x4436,	// (0x00060915) main_video2_pane_g1

0x4450,	// (0x0006092f) main_video2_pane_g2_ParamLimits

0x4450,	// (0x0006092f) main_video2_pane_g2

0x4466,	// (0x00060945) main_video2_pane_g3_ParamLimits

0x4466,	// (0x00060945) main_video2_pane_g3

0x447c,	// (0x0006095b) main_video2_pane_g4_ParamLimits

0x447c,	// (0x0006095b) main_video2_pane_g4

0x4492,	// (0x00060971) main_video2_pane_g5_ParamLimits

0x4492,	// (0x00060971) main_video2_pane_g5

0x44a8,	// (0x00060987) main_video2_pane_g6_ParamLimits

0x44a8,	// (0x00060987) main_video2_pane_g6

0x0005,

0xf654,	// (0x0006bb33) main_video2_pane_g_ParamLimits

0xf654,	// (0x0006bb33) main_video2_pane_g

0x44c2,	// (0x000609a1) main_video2_pane_t1_ParamLimits

0x44c2,	// (0x000609a1) main_video2_pane_t1

0x44e6,	// (0x000609c5) main_video2_pane_t2_ParamLimits

0x44e6,	// (0x000609c5) main_video2_pane_t2

0x4534,	// (0x00060a13) main_video2_pane_t3_ParamLimits

0x4534,	// (0x00060a13) main_video2_pane_t3

0x0002,

0xf661,	// (0x0006bb40) main_video2_pane_t_ParamLimits

0xf661,	// (0x0006bb40) main_video2_pane_t

0x39af,	// (0x0005fe8e) call_muted_g2

0x0001,

0xf603,	// (0x0006bae2) call_muted_g

0x9e81,	// (0x00066360) main_mup2_pane

0x4578,	// (0x00060a57) main_mup2_pane_g1_ParamLimits

0x4578,	// (0x00060a57) main_mup2_pane_g1

0x4584,	// (0x00060a63) main_mup2_pane_g2_ParamLimits

0x4584,	// (0x00060a63) main_mup2_pane_g2

0xc439,	// (0x00068918) main_mup_pane_g13_cp1

0xc441,	// (0x00068920) mup_volume_pane_cp1

0x45a0,	// (0x00060a7f) main_mup2_pane_g4_ParamLimits

0x45a0,	// (0x00060a7f) main_mup2_pane_g4

0x45b2,	// (0x00060a91) main_mup2_pane_g5_ParamLimits

0x45b2,	// (0x00060a91) main_mup2_pane_g5

0x45c4,	// (0x00060aa3) main_mup2_pane_g6_ParamLimits

0x45c4,	// (0x00060aa3) main_mup2_pane_g6

0x45d6,	// (0x00060ab5) main_mup2_pane_g7_ParamLimits

0x45d6,	// (0x00060ab5) main_mup2_pane_g7

0x0006,

0xf668,	// (0x0006bb47) main_mup2_pane_g_ParamLimits

0xf668,	// (0x0006bb47) main_mup2_pane_g

0x45ee,	// (0x00060acd) main_mup2_pane_t1_ParamLimits

0x45ee,	// (0x00060acd) main_mup2_pane_t1

0x4604,	// (0x00060ae3) main_mup2_pane_t2_ParamLimits

0x4604,	// (0x00060ae3) main_mup2_pane_t2

0x461a,	// (0x00060af9) main_mup2_pane_t3_ParamLimits

0x461a,	// (0x00060af9) main_mup2_pane_t3

0x4630,	// (0x00060b0f) main_mup2_pane_t4_ParamLimits

0x4630,	// (0x00060b0f) main_mup2_pane_t4

0x4648,	// (0x00060b27) main_mup2_pane_t5_ParamLimits

0x4648,	// (0x00060b27) main_mup2_pane_t5

0x4660,	// (0x00060b3f) main_mup2_pane_t6_ParamLimits

0x4660,	// (0x00060b3f) main_mup2_pane_t6

0x0005,

0xf677,	// (0x0006bb56) main_mup2_pane_t_ParamLimits

0xf677,	// (0x0006bb56) main_mup2_pane_t

0x4690,	// (0x00060b6f) mup2_visualizer_pane_ParamLimits

0x4690,	// (0x00060b6f) mup2_visualizer_pane

0x46be,	// (0x00060b9d) mup_progress_pane_cp_ParamLimits

0x46be,	// (0x00060b9d) mup_progress_pane_cp

0xc41b,	// (0x000688fa) mup_volume_pane_cp_ParamLimits

0xc41b,	// (0x000688fa) mup_volume_pane_cp

0x46d2,	// (0x00060bb1) mup2_visualizer_pane_g1_ParamLimits

0x46d2,	// (0x00060bb1) mup2_visualizer_pane_g1

0xc35a,	// (0x00068839) mup2_visualizer_pane_g2_ParamLimits

0xc35a,	// (0x00068839) mup2_visualizer_pane_g2

0x46e9,	// (0x00060bc8) mup2_visualizer_pane_g3_ParamLimits

0x46e9,	// (0x00060bc8) mup2_visualizer_pane_g3

0x0002,

0xf684,	// (0x0006bb63) mup2_visualizer_pane_g_ParamLimits

0xf684,	// (0x0006bb63) mup2_visualizer_pane_g

0xb107,	// (0x000675e6) aid_size_cell_fmradio

0x3b61,	// (0x00060040) aid_height_parent_landcape

0xa578,	// (0x00066a57) wml_content_pane_cp

0xa580,	// (0x00066a5f) wml_tabs_pane

0xa589,	// (0x00066a68) popup_wml_miniature_window

0xa591,	// (0x00066a70) scroll_pane_cp021

0xa5a5,	// (0x00066a84) wml_content_pane_comp8

0x9e81,	// (0x00066360) bg_popup_sub_pane_cp05

0xc378,	// (0x00068857) popup_wml_miniature_window_g1

0xc380,	// (0x0006885f) wml_miniature_view_pane

0x46f5,	// (0x00060bd4) aid_size_wml_view

0x46fd,	// (0x00060bdc) wml_miniature_view_pane_g1

0x4706,	// (0x00060be5) wml_miniature_view_pane_g2

0x470f,	// (0x00060bee) wml_miniature_view_pane_g3

0x4717,	// (0x00060bf6) wml_miniature_view_pane_g4

0x471f,	// (0x00060bfe) wml_miniature_view_pane_g5

0x4727,	// (0x00060c06) wml_miniature_view_pane_g6

0x472f,	// (0x00060c0e) wml_miniature_view_pane_g7

0x4737,	// (0x00060c16) wml_miniature_view_pane_g8

0x0007,

0xf68b,	// (0x0006bb6a) wml_miniature_view_pane_g

0xc388,	// (0x00068867) background_graphic_ParamLimits

0xc388,	// (0x00068867) background_graphic

0xc394,	// (0x00068873) wml_tabs_2_pane

0xc39d,	// (0x0006887c) wml_tabs_3_pane_ParamLimits

0xc39d,	// (0x0006887c) wml_tabs_3_pane

0xc3af,	// (0x0006888e) wml_tabs_4_pane_ParamLimits

0xc3af,	// (0x0006888e) wml_tabs_4_pane

0xc3c5,	// (0x000688a4) wml_tabs_5_pane_ParamLimits

0xc3c5,	// (0x000688a4) wml_tabs_5_pane

0xc3df,	// (0x000688be) wml_tabs_pane_g2_ParamLimits

0xc3df,	// (0x000688be) wml_tabs_pane_g2

0xc3f3,	// (0x000688d2) wml_tabs_pane_g3_ParamLimits

0xc3f3,	// (0x000688d2) wml_tabs_pane_g3

0x473f,	// (0x00060c1e) wml_tabs_2_active_pane_ParamLimits

0x473f,	// (0x00060c1e) wml_tabs_2_active_pane

0x4753,	// (0x00060c32) wml_tabs_2_passive_pane_ParamLimits

0x4753,	// (0x00060c32) wml_tabs_2_passive_pane

0x4767,	// (0x00060c46) wml_tabs_3_active_pane_cp_ParamLimits

0x4767,	// (0x00060c46) wml_tabs_3_active_pane_cp

0x477c,	// (0x00060c5b) wml_tabs_3_passive_pane_ParamLimits

0x477c,	// (0x00060c5b) wml_tabs_3_passive_pane

0x478f,	// (0x00060c6e) wml_tabs_3_passive_pane_cp_ParamLimits

0x478f,	// (0x00060c6e) wml_tabs_3_passive_pane_cp

0x47a6,	// (0x00060c85) tabs_4_active_pane

0x47ae,	// (0x00060c8d) tabs_4_passive_pane

0x47b8,	// (0x00060c97) tabs_4_passive_pane_cp

0x47c0,	// (0x00060c9f) tabs_4_passive_pane_cp2

0x387c,	// (0x0005fd5b) aid_height_text

0x2f17,	// (0x0005f3f6) mup_volume_cont_pane_ParamLimits

0x2f17,	// (0x0005f3f6) mup_volume_cont_pane

0x0dcb,	// (0x0005d2aa) aid_size_cell_pinb

0x0dd5,	// (0x0005d2b4) aid_size_list_pinb

0x46aa,	// (0x00060b89) mup2_volume_cont_pane_ParamLimits

0x46aa,	// (0x00060b89) mup2_volume_cont_pane

0xc407,	// (0x000688e6) mup2_volume_cont_pane_g1_ParamLimits

0xc407,	// (0x000688e6) mup2_volume_cont_pane_g1

0x0aad,	// (0x0005cf8c) aid_size_cell_touch_ParamLimits

0x0aad,	// (0x0005cf8c) aid_size_cell_touch

0x0cbb,	// (0x0005d19a) touch_pane_ParamLimits

0x0cbb,	// (0x0005d19a) touch_pane

0x9a64,	// (0x00065f43) main_rss2_pane

0xc449,	// (0x00068928) listscroll_rss2_pane

0xc452,	// (0x00068931) rss2_navigation_pane

0xc45a,	// (0x00068939) list_rss2_pane

0xac82,	// (0x00067161) scroll_pane_cp22

0xc462,	// (0x00068941) rss2_navigation_pane_g1

0xc46b,	// (0x0006894a) rss2_navigation_pane_g2

0xc473,	// (0x00068952) rss2_navigation_pane_g3

0x0002,

0xf69c,	// (0x0006bb7b) rss2_navigation_pane_g

0xc47b,	// (0x0006895a) rss2_navigation_pane_t1

0x47ca,	// (0x00060ca9) rss2_list_single_pane_ParamLimits

0x47ca,	// (0x00060ca9) rss2_list_single_pane

0xc489,	// (0x00068968) rss2_list_single_pane_t2

0xc497,	// (0x00068976) rss2_list_single_pane_t3_ParamLimits

0xc497,	// (0x00068976) rss2_list_single_pane_t3

0xc4b4,	// (0x00068993) rss2_list_single_pane_t4

0x276e,	// (0x0005ec4d) smil_status_pane_g1

0x9a56,	// (0x00065f35) main_image2_pane_ParamLimits

0x9a56,	// (0x00065f35) main_image2_pane

0x4270,	// (0x0006074f) main_camera2_pane_g9_ParamLimits

0x4270,	// (0x0006074f) main_camera2_pane_g9

0x439e,	// (0x0006087d) main_camera2_pane_t5_ParamLimits

0x439e,	// (0x0006087d) main_camera2_pane_t5

0xc32a,	// (0x00068809) main_camera2_pane_t6_ParamLimits

0xc32a,	// (0x00068809) main_camera2_pane_t6

0x47df,	// (0x00060cbe) main_image2_pane_g1_ParamLimits

0x47df,	// (0x00060cbe) main_image2_pane_g1

0x35b8,	// (0x0005fa97) smil2_video_pane_ParamLimits

0x35b8,	// (0x0005fa97) smil2_video_pane

0x9a0c,	// (0x00065eeb) aid_zoom_text_primary_cp

0x9a4c,	// (0x00065f2b) popup_preview_fixed_window

0xa4e1,	// (0x000669c0) im_reading_pane_g1

0x40e7,	// (0x000605c6) cams2_bc_adjust_pane_cp_ParamLimits

0x40e7,	// (0x000605c6) cams2_bc_adjust_pane_cp

0x43cd,	// (0x000608ac) cams2_bc_adjust_pane_ParamLimits

0x43cd,	// (0x000608ac) cams2_bc_adjust_pane

0xc4c2,	// (0x000689a1) cams2_bc_adjust_pane_g1

0xc4ca,	// (0x000689a9) cams2_slider_pane

0xc4d3,	// (0x000689b2) cams2_slider_pane_g1

0xc4dc,	// (0x000689bb) cams2_slider_pane_g2

0x0006,

0xf6a3,	// (0x0006bb82) cams2_slider_pane_g

0x0ec3,	// (0x0005d3a2) calc_display_pane_ParamLimits

0x0eeb,	// (0x0005d3ca) calc_paper_pane_ParamLimits

0x0f0e,	// (0x0005d3ed) grid_calc_pane_ParamLimits

0xab42,	// (0x00067021) popup_clock_digital_window_t1_ParamLimits

0xb0a4,	// (0x00067583) main_image_pane_t1

0x0ea5,	// (0x0005d384) aid_size_cell_calc_ParamLimits

0x0ea5,	// (0x0005d384) aid_size_cell_calc

0x3ba7,	// (0x00060086) popup_blid_sat_info2_window_ParamLimits

0x3ba7,	// (0x00060086) popup_blid_sat_info2_window

0xc4fe,	// (0x000689dd) aid_size_cell_blid

0xc506,	// (0x000689e5) bg_popup_window_pane_cp07

0xc529,	// (0x00068a08) grid_popup_blid_pane

0xc533,	// (0x00068a12) heading_pane_cp05_ParamLimits

0xc533,	// (0x00068a12) heading_pane_cp05

0xc5fd,	// (0x00068adc) cell_popup_blid_pane_ParamLimits

0xc5fd,	// (0x00068adc) cell_popup_blid_pane

0xc621,	// (0x00068b00) cell_popup_blid_pane_g1

0xc629,	// (0x00068b08) cell_popup_blid_pane_t1

0x467a,	// (0x00060b59) mup2_indicator_pane_ParamLimits

0x467a,	// (0x00060b59) mup2_indicator_pane

0xadcb,	// (0x000672aa) mup2_visualizer_osc_pane

0xc366,	// (0x00068845) mup2_visualizer_spec_pane_ParamLimits

0xc366,	// (0x00068845) mup2_visualizer_spec_pane

0x47f5,	// (0x00060cd4) mup2_spec_half_pane

0x47fe,	// (0x00060cdd) mup2_spec_half_pane_cp

0x4806,	// (0x00060ce5) mup2_spec_bar_pane_ParamLimits

0x4806,	// (0x00060ce5) mup2_spec_bar_pane

0xc2b5,	// (0x00068794) mup2_spec_bar_pane_g1

0xc2bf,	// (0x0006879e) mup2_spec_bar_pane_g2

0x0001,

0xf616,	// (0x0006baf5) mup2_spec_bar_pane_g

0x4826,	// (0x00060d05) mup2_osc_middle_pane

0xc2d1,	// (0x000687b0) mup2_visualizer_osc_pane_g1

0x9a8e,	// (0x00065f6d) popup_number_entry_window_t1_ParamLimits

0x9aa1,	// (0x00065f80) popup_number_entry_window_t2_ParamLimits

0x9ab3,	// (0x00065f92) popup_number_entry_window_t3_ParamLimits

0x0d0d,	// (0x0005d1ec) popup_number_entry_window_t5_ParamLimits

0x0d0d,	// (0x0005d1ec) popup_number_entry_window_t5

0xf0d8,	// (0x0006b5b7) popup_number_entry_window_t_ParamLimits

0x9ac5,	// (0x00065fa4) text_title_cp2_ParamLimits

0xaf8a,	// (0x00067469) aid_hotspot_pointer_text2_pane

0xafa4,	// (0x00067483) main_viewer_pane_g9_ParamLimits

0xafa4,	// (0x00067483) main_viewer_pane_g9

0xa710,	// (0x00066bef) cale_month_pane_t1_ParamLimits

0xa77b,	// (0x00066c5a) bg_cale_pane_ParamLimits

0xa793,	// (0x00066c72) list_cale_pane_ParamLimits

0xa36b,	// (0x0006684a) listscroll_cale_day_pane_t1

0xa7a4,	// (0x00066c83) scroll_pane_cp09_ParamLimits

0x2f49,	// (0x0005f428) main_mup_eq_pane_t1_ParamLimits

0x2f49,	// (0x0005f428) main_mup_eq_pane_t1

0x2f63,	// (0x0005f442) main_mup_eq_pane_t2_ParamLimits

0x2f63,	// (0x0005f442) main_mup_eq_pane_t2

0x2f7d,	// (0x0005f45c) main_mup_eq_pane_t3_ParamLimits

0x2f7d,	// (0x0005f45c) main_mup_eq_pane_t3

0x2f99,	// (0x0005f478) main_mup_eq_pane_t4_ParamLimits

0x2f99,	// (0x0005f478) main_mup_eq_pane_t4

0x2fb5,	// (0x0005f494) main_mup_eq_pane_t5_ParamLimits

0x2fb5,	// (0x0005f494) main_mup_eq_pane_t5

0x2fd1,	// (0x0005f4b0) main_mup_eq_pane_t6_ParamLimits

0x2fd1,	// (0x0005f4b0) main_mup_eq_pane_t6

0x2fe5,	// (0x0005f4c4) main_mup_eq_pane_t7_ParamLimits

0x2fe5,	// (0x0005f4c4) main_mup_eq_pane_t7

0x2ff9,	// (0x0005f4d8) main_mup_eq_pane_t8_ParamLimits

0x2ff9,	// (0x0005f4d8) main_mup_eq_pane_t8

0x300d,	// (0x0005f4ec) main_mup_eq_pane_t9_ParamLimits

0x300d,	// (0x0005f4ec) main_mup_eq_pane_t9

0x3027,	// (0x0005f506) main_mup_eq_pane_t10_ParamLimits

0x3027,	// (0x0005f506) main_mup_eq_pane_t10

0x0009,

0xf465,	// (0x0006b944) main_mup_eq_pane_t_ParamLimits

0xf465,	// (0x0006b944) main_mup_eq_pane_t

0x30d6,	// (0x0005f5b5) mup_equalizer_pane_cp5_ParamLimits

0x30ea,	// (0x0005f5c9) mup_equalizer_pane_cp6_ParamLimits

0x30fe,	// (0x0005f5dd) mup_equalizer_pane_cp7_ParamLimits

0x9a64,	// (0x00065f43) main_gallery_pane

0xc2da,	// (0x000687b9) smil2_volume_pane

0xc2e2,	// (0x000687c1) smil_status_volume_pane_g1_ParamLimits

0xc2f5,	// (0x000687d4) smil_status_volume_pane_g2_ParamLimits

0xc308,	// (0x000687e7) smil_status_volume_pane_g3_ParamLimits

0xf61b,	// (0x0006bafa) smil_status_volume_pane_g_ParamLimits

0xc506,	// (0x000689e5) bg_popup_window_pane_cp07_ParamLimits

0xc514,	// (0x000689f3) blid_firmament_pane

0x482f,	// (0x00060d0e) aid_size_cell_gallery_ParamLimits

0x482f,	// (0x00060d0e) aid_size_cell_gallery

0x4845,	// (0x00060d24) grid_gallery_pane_ParamLimits

0x4845,	// (0x00060d24) grid_gallery_pane

0x485e,	// (0x00060d3d) cell_gallery_pane_ParamLimits

0x485e,	// (0x00060d3d) cell_gallery_pane

0xc637,	// (0x00068b16) bg_cell_gallery_focus_pane_ParamLimits

0xc637,	// (0x00068b16) bg_cell_gallery_focus_pane

0xc649,	// (0x00068b28) cell_gallery_pane_g1_ParamLimits

0xc649,	// (0x00068b28) cell_gallery_pane_g1

0x48a7,	// (0x00060d86) cell_gallery_pane_g2_ParamLimits

0x48a7,	// (0x00060d86) cell_gallery_pane_g2

0x48b4,	// (0x00060d93) cell_gallery_pane_g3_ParamLimits

0x48b4,	// (0x00060d93) cell_gallery_pane_g3

0xc655,	// (0x00068b34) cell_gallery_pane_g4_ParamLimits

0xc655,	// (0x00068b34) cell_gallery_pane_g4

0x0003,

0xf6c9,	// (0x0006bba8) cell_gallery_pane_g_ParamLimits

0xf6c9,	// (0x0006bba8) cell_gallery_pane_g

0xc661,	// (0x00068b40) bg_cell_gallery_focus_pane_g1

0xc669,	// (0x00068b48) bg_cell_gallery_focus_pane_g2

0xc671,	// (0x00068b50) bg_cell_gallery_focus_pane_g3

0xc679,	// (0x00068b58) bg_cell_gallery_focus_pane_g4

0xc681,	// (0x00068b60) bg_cell_gallery_focus_pane_g5

0xc689,	// (0x00068b68) bg_cell_gallery_focus_pane_g6

0xc691,	// (0x00068b70) bg_cell_gallery_focus_pane_g7

0xc699,	// (0x00068b78) bg_cell_gallery_focus_pane_g8

0x0007,

0xf6d2,	// (0x0006bbb1) bg_cell_gallery_focus_pane_g

0xc6a1,	// (0x00068b80) aid_firma_cardinal

0xc6b5,	// (0x00068b94) blid_firmament_pane_t1

0xc6cc,	// (0x00068bab) blid_firmament_pane_t2

0xc6e3,	// (0x00068bc2) blid_firmament_pane_t3

0xc6fa,	// (0x00068bd9) blid_firmament_pane_t4

0x0003,

0xf6e3,	// (0x0006bbc2) blid_firmament_pane_t

0xc711,	// (0x00068bf0) blid_sat_info_pane

0xc721,	// (0x00068c00) blid_sat_info_pane_g1

0xc721,	// (0x00068c00) blid_sat_info_pane_g2

0x0001,

0xf6ec,	// (0x0006bbcb) blid_sat_info_pane_g

0xc72b,	// (0x00068c0a) blid_sat_info_pane_t1

0xc739,	// (0x00068c18) smil2_volume_content_pane

0xc742,	// (0x00068c21) smil2_volume_pane_g1

0xc74a,	// (0x00068c29) smil2_volume_content_pane_g1

0xc753,	// (0x00068c32) smil2_volume_content_pane_g2

0xc75c,	// (0x00068c3b) smil2_volume_content_pane_g3

0xc765,	// (0x00068c44) smil2_volume_content_pane_g4

0xc76e,	// (0x00068c4d) smil2_volume_content_pane_g5

0xc777,	// (0x00068c56) smil2_volume_content_pane_g6

0xc780,	// (0x00068c5f) smil2_volume_content_pane_g7

0xc789,	// (0x00068c68) smil2_volume_content_pane_g8

0xc792,	// (0x00068c71) smil2_volume_content_pane_g9

0xc79b,	// (0x00068c7a) smil2_volume_content_pane_g10

0x0009,

0xf6f1,	// (0x0006bbd0) smil2_volume_content_pane_g

0x13c2,	// (0x0005d8a1) cale_week_day_heading_pane_t1_ParamLimits

0x13ec,	// (0x0005d8cb) cale_week_day_heading_pane_t2_ParamLimits

0x1416,	// (0x0005d8f5) cale_week_day_heading_pane_t3_ParamLimits

0x1440,	// (0x0005d91f) cale_week_day_heading_pane_t4_ParamLimits

0x146a,	// (0x0005d949) cale_week_day_heading_pane_t5_ParamLimits

0x1494,	// (0x0005d973) cale_week_day_heading_pane_t6_ParamLimits

0x14c0,	// (0x0005d99f) cale_week_day_heading_pane_t7_ParamLimits

0xf1dd,	// (0x0006b6bc) cale_week_day_heading_pane_t_ParamLimits

0xa37d,	// (0x0006685c) bg_cale_side_pane_ParamLimits

0x14ea,	// (0x0005d9c9) cale_week_time_pane_t1_ParamLimits

0x1502,	// (0x0005d9e1) cale_week_time_pane_t2_ParamLimits

0x151a,	// (0x0005d9f9) cale_week_time_pane_t3_ParamLimits

0x1532,	// (0x0005da11) cale_week_time_pane_t4_ParamLimits

0x154a,	// (0x0005da29) cale_week_time_pane_t5_ParamLimits

0x1562,	// (0x0005da41) cale_week_time_pane_t6_ParamLimits

0x157a,	// (0x0005da59) cale_week_time_pane_t7_ParamLimits

0x1592,	// (0x0005da71) cale_week_time_pane_t8_ParamLimits

0xf1ec,	// (0x0006b6cb) cale_week_time_pane_t_ParamLimits

0x15aa,	// (0x0005da89) cell_cale_week_pane_g2_ParamLimits

0xa37d,	// (0x0006685c) bg_cale_side_pane_cp01_ParamLimits

0x25bf,	// (0x0005ea9e) cale_month_week_pane_t1_ParamLimits

0x25d6,	// (0x0005eab5) cale_month_week_pane_t2_ParamLimits

0x25ed,	// (0x0005eacc) cale_month_week_pane_t3_ParamLimits

0x2604,	// (0x0005eae3) cale_month_week_pane_t4_ParamLimits

0x261b,	// (0x0005eafa) cale_month_week_pane_t5_ParamLimits

0x2632,	// (0x0005eb11) cale_month_week_pane_t6_ParamLimits

0xf2c5,	// (0x0006b7a4) cale_month_week_pane_t_ParamLimits

0xa722,	// (0x00066c01) cell_cale_month_pane_g1_ParamLimits

0x9a64,	// (0x00065f43) main_cale_event_viewer_pane

0x0aa3,	// (0x0005cf82) listscroll_cale_event_viewer_pane

0xc7a4,	// (0x00068c83) list_cale_ev_pane

0xc7ac,	// (0x00068c8b) scroll_pane_cp023

0xc7b8,	// (0x00068c97) field_cale_ev_pane_ParamLimits

0xc7b8,	// (0x00068c97) field_cale_ev_pane

0xc7d6,	// (0x00068cb5) field_cale_ev_content_pane_ParamLimits

0xc7d6,	// (0x00068cb5) field_cale_ev_content_pane

0xc7e2,	// (0x00068cc1) field_cale_ev_pane_g1_ParamLimits

0xc7e2,	// (0x00068cc1) field_cale_ev_pane_g1

0xc7ee,	// (0x00068ccd) field_cale_ev_pane_g2_ParamLimits

0xc7ee,	// (0x00068ccd) field_cale_ev_pane_g2

0xc806,	// (0x00068ce5) field_cale_ev_pane_g3_ParamLimits

0xc806,	// (0x00068ce5) field_cale_ev_pane_g3

0x0002,

0xf706,	// (0x0006bbe5) field_cale_ev_pane_g_ParamLimits

0xf706,	// (0x0006bbe5) field_cale_ev_pane_g

0xc81e,	// (0x00068cfd) field_cale_ev_pane_t1_ParamLimits

0xc81e,	// (0x00068cfd) field_cale_ev_pane_t1

0xc835,	// (0x00068d14) field_cale_ev_content_pane_t1_ParamLimits

0xc835,	// (0x00068d14) field_cale_ev_content_pane_t1

0xaf54,	// (0x00067433) bg_button_pane_cp01

0xa1d1,	// (0x000666b0) listscroll_cale_week_pane_ParamLimits

0x11de,	// (0x0005d6bd) popup_toolbar_window_cp01

0xa36b,	// (0x0006684a) listscroll_cale_week_pane_t1_ParamLimits

0xa1d1,	// (0x000666b0) listscroll_cale_day_pane_ParamLimits

0x27bf,	// (0x0005ec9e) popup_toolbar_window_cp02

0xa36b,	// (0x0006684a) listscroll_cale_day_pane_t1_ParamLimits

0xa1d1,	// (0x000666b0) main_cale_month_pane_ParamLimits

0x3ddb,	// (0x000602ba) popup_toolbar_window_cp03_ParamLimits

0x3ddb,	// (0x000602ba) popup_toolbar_window_cp03

0x3480,	// (0x0005f95f) main_image_pane_g2_ParamLimits

0x3480,	// (0x0005f95f) main_image_pane_g2

0x3491,	// (0x0005f970) main_image_pane_g3_ParamLimits

0x3491,	// (0x0005f970) main_image_pane_g3

0x0002,

0xf4f7,	// (0x0006b9d6) main_image_pane_g_ParamLimits

0xf4f7,	// (0x0006b9d6) main_image_pane_g

0xb0a4,	// (0x00067583) main_image_pane_t1_ParamLimits

0x34a2,	// (0x0005f981) main_image_pane_t2_ParamLimits

0x34a2,	// (0x0005f981) main_image_pane_t2

0x34b4,	// (0x0005f993) main_image_pane_t3_ParamLimits

0x34b4,	// (0x0005f993) main_image_pane_t3

0x34dc,	// (0x0005f9bb) main_image_pane_t4_ParamLimits

0x34dc,	// (0x0005f9bb) main_image_pane_t4

0x0003,

0xf4fe,	// (0x0006b9dd) main_image_pane_t_ParamLimits

0xf4fe,	// (0x0006b9dd) main_image_pane_t

0x34fc,	// (0x0005f9db) popup_image_details_window_cp01

0x3506,	// (0x0005f9e5) popup_toobar_trans_pane_cp01_ParamLimits

0x3506,	// (0x0005f9e5) popup_toobar_trans_pane_cp01

0x3c86,	// (0x00060165) popup_image_details_window_ParamLimits

0x3c86,	// (0x00060165) popup_image_details_window

0xc23b,	// (0x0006871a) popup_image_focus_window

0x40a1,	// (0x00060580) camera2_autofocus_pane_ParamLimits

0x40a1,	// (0x00060580) camera2_autofocus_pane

0x0aa3,	// (0x0005cf82) bg_popup_sub_pane_cp06

0xc853,	// (0x00068d32) popup_image_focus_window_g1

0xc85b,	// (0x00068d3a) popup_image_focus_window_g2

0xc863,	// (0x00068d42) popup_image_focus_window_g3

0xc86b,	// (0x00068d4a) popup_image_focus_window_g4

0x0003,

0xf70d,	// (0x0006bbec) popup_image_focus_window_g

0xc873,	// (0x00068d52) popup_image_focus_window_t1

0xc881,	// (0x00068d60) popup_image_focus_window_t2

0xc891,	// (0x00068d70) popup_image_focus_window_t3

0x0002,

0xf716,	// (0x0006bbf5) popup_image_focus_window_t

0xc89f,	// (0x00068d7e) camera2_autofocus_pane_g1

0xc21b,	// (0x000686fa) bg_tb_trans_pane_cp01

0xc8ad,	// (0x00068d8c) popup_image_details_window_g1

0xc8c0,	// (0x00068d9f) popup_image_details_window_g2

0x0002,

0xf728,	// (0x0006bc07) popup_image_details_window_g

0xc8e9,	// (0x00068dc8) popup_image_details_window_t1

0xc8fb,	// (0x00068dda) popup_image_details_window_t2

0xc914,	// (0x00068df3) popup_image_details_window_t3

0xc928,	// (0x00068e07) popup_image_details_window_t4

0xc943,	// (0x00068e22) popup_image_details_window_t5

0x0004,

0xf72f,	// (0x0006bc0e) popup_image_details_window_t

0xa1a3,	// (0x00066682) bg_calc_paper_pane_ParamLimits

0x9a64,	// (0x00065f43) grid_highlight_pane_cp013

0xa1b7,	// (0x00066696) list_calc_pane_ParamLimits

0xa1c9,	// (0x000666a8) scroll_pane_cp024

0xa1d1,	// (0x000666b0) bg_calc_display_pane_ParamLimits

0x100c,	// (0x0005d4eb) calc_display_pane_t1_ParamLimits

0x101e,	// (0x0005d4fd) calc_display_pane_t2_ParamLimits

0xa1dd,	// (0x000666bc) calc_display_pane_t3_ParamLimits

0xf15f,	// (0x0006b63e) calc_display_pane_t_ParamLimits

0x10db,	// (0x0005d5ba) cell_calc_pane_g2

0x0001,

0xf17c,	// (0x0006b65b) cell_calc_pane_g

0x10e4,	// (0x0005d5c3) cell_calc_pane_t1

0xa254,	// (0x00066733) grid_highlight_pane_cp02_ParamLimits

0xa26a,	// (0x00066749) toolbar_button_pane_cp01_ParamLimits

0xa26a,	// (0x00066749) toolbar_button_pane_cp01

0xb0e9,	// (0x000675c8) temp_image_control_pane_ParamLimits

0xb0e9,	// (0x000675c8) temp_image_control_pane

0x9a56,	// (0x00065f35) main_mp3_pane

0xc95d,	// (0x00068e3c) temp_image_control_pane_g1_ParamLimits

0xc95d,	// (0x00068e3c) temp_image_control_pane_g1

0xc96b,	// (0x00068e4a) temp_image_control_pane_g2_ParamLimits

0xc96b,	// (0x00068e4a) temp_image_control_pane_g2

0xc97d,	// (0x00068e5c) temp_image_control_pane_g3_ParamLimits

0xc97d,	// (0x00068e5c) temp_image_control_pane_g3

0x48f1,	// (0x00060dd0) temp_image_control_pane_g4_ParamLimits

0x48f1,	// (0x00060dd0) temp_image_control_pane_g4

0x0003,

0xf73a,	// (0x0006bc19) temp_image_control_pane_g_ParamLimits

0xf73a,	// (0x0006bc19) temp_image_control_pane_g

0xc95d,	// (0x00068e3c) main_mp3_pane_g1

0x4904,	// (0x00060de3) main_mp3_pane_g2

0x0007,

0xf743,	// (0x0006bc22) main_mp3_pane_g

0xc9c0,	// (0x00068e9f) main_mp3_pane_t1

0xa3f0,	// (0x000668cf) main_camera_pane_g8_ParamLimits

0xa3f0,	// (0x000668cf) main_camera_pane_g8

0x18bd,	// (0x0005dd9c) main_video_pane_g7_ParamLimits

0x18bd,	// (0x0005dd9c) main_video_pane_g7

0xc348,	// (0x00068827) main_camera2_pane_t7_ParamLimits

0xc348,	// (0x00068827) main_camera2_pane_t7

0xa538,	// (0x00066a17) scroll_pane_cp025_ParamLimits

0xa538,	// (0x00066a17) scroll_pane_cp025

0xa54c,	// (0x00066a2b) scroll_pane_cp026_ParamLimits

0xa54c,	// (0x00066a2b) scroll_pane_cp026

0xa55b,	// (0x00066a3a) wml_content_pane_ParamLimits

0x9a64,	// (0x00065f43) main_touch_calib_pane

0x49ce,	// (0x00060ead) main_touch_calib_pane_g1

0x49da,	// (0x00060eb9) main_touch_calib_pane_g2

0x49e6,	// (0x00060ec5) main_touch_calib_pane_g3

0x49f2,	// (0x00060ed1) main_touch_calib_pane_g4

0x0003,

0xf761,	// (0x0006bc40) main_touch_calib_pane_g

0x49fe,	// (0x00060edd) main_touch_calib_pane_t1

0x4a18,	// (0x00060ef7) main_touch_calib_pane_t2

0x0004,

0xf76a,	// (0x0006bc49) main_touch_calib_pane_t

0xad0c,	// (0x000671eb) mup_progress_pane_cp02

0xad2b,	// (0x0006720a) navi_pane_g1

0xad8d,	// (0x0006726c) navi_pane_mp_t3

0x9a56,	// (0x00065f35) main_mp3_pane_ParamLimits

0x3e19,	// (0x000602f8) navi_pane_ParamLimits

0xc95d,	// (0x00068e3c) main_mp3_pane_g1_ParamLimits

0x4904,	// (0x00060de3) main_mp3_pane_g2_ParamLimits

0x4912,	// (0x00060df1) main_mp3_pane_g3_ParamLimits

0x4912,	// (0x00060df1) main_mp3_pane_g3

0x4920,	// (0x00060dff) main_mp3_pane_g4_ParamLimits

0x4920,	// (0x00060dff) main_mp3_pane_g4

0xc98d,	// (0x00068e6c) main_mp3_pane_g5_ParamLimits

0xc98d,	// (0x00068e6c) main_mp3_pane_g5

0xc99b,	// (0x00068e7a) main_mp3_pane_g6_ParamLimits

0xc99b,	// (0x00068e7a) main_mp3_pane_g6

0xc9a8,	// (0x00068e87) main_mp3_pane_g7_ParamLimits

0xc9a8,	// (0x00068e87) main_mp3_pane_g7

0xc9b4,	// (0x00068e93) main_mp3_pane_g8_ParamLimits

0xc9b4,	// (0x00068e93) main_mp3_pane_g8

0xf743,	// (0x0006bc22) main_mp3_pane_g_ParamLimits

0x492c,	// (0x00060e0b) main_mp3_pane_t2

0x493a,	// (0x00060e19) main_mp3_pane_t3

0xc9ce,	// (0x00068ead) main_mp3_pane_t4

0xc9dc,	// (0x00068ebb) main_mp3_pane_t5

0x0005,

0xf754,	// (0x0006bc33) main_mp3_pane_t

0xc9ea,	// (0x00068ec9) mup_progress_pane_cp01

0x9a0c,	// (0x00065eeb) aid_zoom_text_secondary2

0xc7a4,	// (0x00068c83) list_cale_ev2_pane

0xc7ac,	// (0x00068c8b) scroll_pane_cp023_ParamLimits

0x4a6e,	// (0x00060f4d) field_cale_ev2_pane_ParamLimits

0x4a6e,	// (0x00060f4d) field_cale_ev2_pane

0x4a8e,	// (0x00060f6d) field_cale_ev2_pane_g1_ParamLimits

0x4a8e,	// (0x00060f6d) field_cale_ev2_pane_g1

0x4a9a,	// (0x00060f79) field_cale_ev2_pane_g2_ParamLimits

0x4a9a,	// (0x00060f79) field_cale_ev2_pane_g2

0x4ab2,	// (0x00060f91) field_cale_ev2_pane_g3_ParamLimits

0x4ab2,	// (0x00060f91) field_cale_ev2_pane_g3

0x0003,

0xf775,	// (0x0006bc54) field_cale_ev2_pane_g_ParamLimits

0xf775,	// (0x0006bc54) field_cale_ev2_pane_g

0x4ad6,	// (0x00060fb5) field_cale_ev2_pane_t1_ParamLimits

0x4ad6,	// (0x00060fb5) field_cale_ev2_pane_t1

0x4aed,	// (0x00060fcc) field_cale_ev2_pane_t2_ParamLimits

0x4aed,	// (0x00060fcc) field_cale_ev2_pane_t2

0x0001,

0xf77e,	// (0x0006bc5d) field_cale_ev2_pane_t_ParamLimits

0xf77e,	// (0x0006bc5d) field_cale_ev2_pane_t

0x3335,	// (0x0005f814) main_postcard_pane_g5_ParamLimits

0x3335,	// (0x0005f814) main_postcard_pane_g5

0x334b,	// (0x0005f82a) main_postcard_pane_g6_ParamLimits

0x334b,	// (0x0005f82a) main_postcard_pane_g6

0x1681,	// (0x0005db60) camera2_autofocus_pane_cp_ParamLimits

0x1681,	// (0x0005db60) camera2_autofocus_pane_cp

0x9a56,	// (0x00065f35) main_mup3_pane

0x4b22,	// (0x00061001) main_mup3_pane_g1_ParamLimits

0x4b22,	// (0x00061001) main_mup3_pane_g1

0x4b44,	// (0x00061023) main_mup3_pane_g2_ParamLimits

0x4b44,	// (0x00061023) main_mup3_pane_g2

0x4bc2,	// (0x000610a1) main_mup3_pane_g3_ParamLimits

0x4bc2,	// (0x000610a1) main_mup3_pane_g3

0x4c08,	// (0x000610e7) main_mup3_pane_g4_ParamLimits

0x4c08,	// (0x000610e7) main_mup3_pane_g4

0x4c4e,	// (0x0006112d) main_mup3_pane_g5_ParamLimits

0x4c4e,	// (0x0006112d) main_mup3_pane_g5

0x4c94,	// (0x00061173) main_mup3_pane_g6_ParamLimits

0x4c94,	// (0x00061173) main_mup3_pane_g6

0xc9f2,	// (0x00068ed1) main_mup3_pane_g7_ParamLimits

0xc9f2,	// (0x00068ed1) main_mup3_pane_g7

0x0007,

0xf78e,	// (0x0006bc6d) main_mup3_pane_g_ParamLimits

0xf78e,	// (0x0006bc6d) main_mup3_pane_g

0x4d12,	// (0x000611f1) main_mup3_pane_t1_ParamLimits

0x4d12,	// (0x000611f1) main_mup3_pane_t1

0x4d86,	// (0x00061265) main_mup3_pane_t2_ParamLimits

0x4d86,	// (0x00061265) main_mup3_pane_t2

0x4e5a,	// (0x00061339) main_mup3_pane_t4_ParamLimits

0x4e5a,	// (0x00061339) main_mup3_pane_t4

0x4eb0,	// (0x0006138f) main_mup3_pane_t5_ParamLimits

0x4eb0,	// (0x0006138f) main_mup3_pane_t5

0x4f6c,	// (0x0006144b) main_mup3_pane_t6_ParamLimits

0x4f6c,	// (0x0006144b) main_mup3_pane_t6

0x0005,

0xf79f,	// (0x0006bc7e) main_mup3_pane_t_ParamLimits

0xf79f,	// (0x0006bc7e) main_mup3_pane_t

0x5024,	// (0x00061503) mup3_progress_pane_ParamLimits

0x5024,	// (0x00061503) mup3_progress_pane

0x50ba,	// (0x00061599) popup_mup3_control_window_ParamLimits

0x50ba,	// (0x00061599) popup_mup3_control_window

0xca00,	// (0x00068edf) popup_mup3_text_window

0x50ec,	// (0x000615cb) mup3_progress_pane_t1

0x510b,	// (0x000615ea) mup3_progress_pane_t2

0xca08,	// (0x00068ee7) mup3_progress_pane_t3

0x0002,

0xf7ac,	// (0x0006bc8b) mup3_progress_pane_t

0xca25,	// (0x00068f04) mup_progress_pane_cp03

0x0aa3,	// (0x0005cf82) bg_tb_trans_pane_cp04

0x512a,	// (0x00061609) mup3_volume_pane

0x5132,	// (0x00061611) popup_mup3_control_window_g1

0x513b,	// (0x0006161a) mup3_volume_pane_g1

0x5144,	// (0x00061623) mup3_volume_pane_g2

0x514d,	// (0x0006162c) mup3_volume_pane_g3

0x0002,

0xf7b3,	// (0x0006bc92) mup3_volume_pane_g

0x0aa3,	// (0x0005cf82) bg_tb_trans_pane_cp03

0xca35,	// (0x00068f14) popup_mup3_text_window_g1

0xca3d,	// (0x00068f1c) popup_mup3_text_window_t1

0xa22b,	// (0x0006670a) list_calc_item_pane_g1_ParamLimits

0xc430,	// (0x0006890f) mup_volume_pane_cp_g1

0x4a32,	// (0x00060f11) main_touch_calib_pane_t3

0x4a46,	// (0x00060f25) main_touch_calib_pane_t4

0x4a5a,	// (0x00060f39) main_touch_calib_pane_t5

0x99e8,	// (0x00065ec7) aid_cell_size_toolbar2

0x99f0,	// (0x00065ecf) aid_popup3_width_pane

0x99fc,	// (0x00065edb) aid_zoom_text_msg_primary

0x1658,	// (0x0005db37) vorec_t7

0xa1ef,	// (0x000666ce) bg_calc_paper_pane_g1_ParamLimits

0xa1fb,	// (0x000666da) bg_calc_paper_pane_g2_ParamLimits

0xa207,	// (0x000666e6) bg_calc_paper_pane_g3_ParamLimits

0xa213,	// (0x000666f2) bg_calc_paper_pane_g4_ParamLimits

0xa21f,	// (0x000666fe) bg_calc_paper_pane_g5_ParamLimits

0x1065,	// (0x0005d544) bg_calc_paper_pane_g6_ParamLimits

0x1074,	// (0x0005d553) bg_calc_paper_pane_g7_ParamLimits

0x1083,	// (0x0005d562) bg_calc_paper_pane_g8_ParamLimits

0xf166,	// (0x0006b645) bg_calc_paper_pane_g_ParamLimits

0x1096,	// (0x0005d575) calc_bg_paper_pane_g9_ParamLimits

0x17cf,	// (0x0005dcae) image_qvga_pane_ParamLimits

0x17cf,	// (0x0005dcae) image_qvga_pane

0xa0dc,	// (0x000665bb) bg_popup_sub_pane_cp04_ParamLimits

0xb020,	// (0x000674ff) popup_mup_playback_window_g1_ParamLimits

0xb02c,	// (0x0006750b) popup_mup_playback_window_t1_ParamLimits

0xb041,	// (0x00067520) popup_mup_playback_window_t2_ParamLimits

0xf4f2,	// (0x0006b9d1) popup_mup_playback_window_t_ParamLimits

0x4594,	// (0x00060a73) main_mup2_pane_g3_ParamLimits

0x4594,	// (0x00060a73) main_mup2_pane_g3

0x1bc6,	// (0x0005e0a5) popup_toolbar_window_cp04

0xb423,	// (0x00067902) popup_call2_audio_second_window_g3_ParamLimits

0xb423,	// (0x00067902) popup_call2_audio_second_window_g3

0xb82d,	// (0x00067d0c) popup_call2_audio_first_window_g4_ParamLimits

0xb82d,	// (0x00067d0c) popup_call2_audio_first_window_g4

0xbeac,	// (0x0006838b) popup_call2_audio_in_window_g4_ParamLimits

0xbeac,	// (0x0006838b) popup_call2_audio_in_window_g4

0x3462,	// (0x0005f941) aid_area_sk_bg_cut_ParamLimits

0x3462,	// (0x0005f941) aid_area_sk_bg_cut

0xb056,	// (0x00067535) aid_area_sk_bg_cut_2_ParamLimits

0xb056,	// (0x00067535) aid_area_sk_bg_cut_2

0x4897,	// (0x00060d76) aid_placing_details_win

0x489f,	// (0x00060d7e) aid_placing_details_win_2

0xc89f,	// (0x00068d7e) camera2_autofocus_pane_g1_ParamLimits

0x0c5a,	// (0x0005d139) popup_fixed_preview_cale_window_ParamLimits

0x0c5a,	// (0x0005d139) popup_fixed_preview_cale_window

0xade5,	// (0x000672c4) navi_slider_pane_g3

0xadee,	// (0x000672cd) navi_slider_pane_g4

0xadf7,	// (0x000672d6) navi_slider_pane_g5

0xade5,	// (0x000672c4) navi_slider_pane_g6

0xae00,	// (0x000672df) navi_slider_pane_g7

0xaf21,	// (0x00067400) mup_scale_pane_g3

0xaf2a,	// (0x00067409) mup_scale_pane_g4

0xaf33,	// (0x00067412) mup_scale_pane_g5

0x3112,	// (0x0005f5f1) mup_scale_pane_g6

0x311b,	// (0x0005f5fa) mup_scale_pane_g7

0xade5,	// (0x000672c4) cams2_slider_pane_g3

0xc4e5,	// (0x000689c4) cams2_slider_pane_g4

0xc4ed,	// (0x000689cc) cams2_slider_pane_g5

0xade5,	// (0x000672c4) cams2_slider_pane_g6

0xc4f5,	// (0x000689d4) cams2_slider_pane_g7

0xc721,	// (0x00068c00) camera2_autofocus_pane_cp_g1

0xca4b,	// (0x00068f2a) bg_popup_preview_window_pane_cp02_ParamLimits

0xca4b,	// (0x00068f2a) bg_popup_preview_window_pane_cp02

0xca57,	// (0x00068f36) list_fp_cale_pane_ParamLimits

0xca57,	// (0x00068f36) list_fp_cale_pane

0xca63,	// (0x00068f42) popup_fixed_preview_cale_window_t1_ParamLimits

0xca63,	// (0x00068f42) popup_fixed_preview_cale_window_t1

0x5156,	// (0x00061635) popup_fixed_preview_cale_window_t2_ParamLimits

0x5156,	// (0x00061635) popup_fixed_preview_cale_window_t2

0x516b,	// (0x0006164a) popup_fixed_preview_cale_window_t3_ParamLimits

0x516b,	// (0x0006164a) popup_fixed_preview_cale_window_t3

0x0002,

0xf7ba,	// (0x0006bc99) popup_fixed_preview_cale_window_t_ParamLimits

0xf7ba,	// (0x0006bc99) popup_fixed_preview_cale_window_t

0x5180,	// (0x0006165f) list_single_fp_cale_pane_ParamLimits

0x5180,	// (0x0006165f) list_single_fp_cale_pane

0xca81,	// (0x00068f60) list_single_fp_cale_pane_g1_ParamLimits

0xca81,	// (0x00068f60) list_single_fp_cale_pane_g1

0xca8d,	// (0x00068f6c) list_single_fp_cale_pane_g2_ParamLimits

0xca8d,	// (0x00068f6c) list_single_fp_cale_pane_g2

0x0002,

0xf7c1,	// (0x0006bca0) list_single_fp_cale_pane_g_ParamLimits

0xf7c1,	// (0x0006bca0) list_single_fp_cale_pane_g

0xcaa6,	// (0x00068f85) list_single_fp_cale_pane_t1_ParamLimits

0xcaa6,	// (0x00068f85) list_single_fp_cale_pane_t1

0xcab8,	// (0x00068f97) list_single_fp_cale_pane_t2_ParamLimits

0xcab8,	// (0x00068f97) list_single_fp_cale_pane_t2

0x0001,

0xf7c8,	// (0x0006bca7) list_single_fp_cale_pane_t_ParamLimits

0xf7c8,	// (0x0006bca7) list_single_fp_cale_pane_t

0x0000,

0x0000,

0x0000,

0x0000,

0x9a64,	// (0x00065f43) main_dialer_pane

0x5195,	// (0x00061674) aid_cell_size_keypad

0x519f,	// (0x0006167e) dialer_ne_pane

0x51a7,	// (0x00061686) grid_dialer_command_1_pane

0x51af,	// (0x0006168e) grid_dialer_command_2_pane

0x51b7,	// (0x00061696) grid_dialer_keypad_pane

0x51c9,	// (0x000616a8) bg_popup_call_pane_cp06_ParamLimits

0x51c9,	// (0x000616a8) bg_popup_call_pane_cp06

0x51d5,	// (0x000616b4) dialer_ne_clear_pane_ParamLimits

0x51d5,	// (0x000616b4) dialer_ne_clear_pane

0xcaeb,	// (0x00068fca) dialer_ne_pane_g1

0xcaf3,	// (0x00068fd2) dialer_ne_pane_t1_ParamLimits

0xcaf3,	// (0x00068fd2) dialer_ne_pane_t1

0x51e1,	// (0x000616c0) dialer_ne_pane_t2_ParamLimits

0x51e1,	// (0x000616c0) dialer_ne_pane_t2

0x520b,	// (0x000616ea) dialer_ne_pane_t3_ParamLimits

0x520b,	// (0x000616ea) dialer_ne_pane_t3

0x0002,

0xf7cd,	// (0x0006bcac) dialer_ne_pane_t_ParamLimits

0xf7cd,	// (0x0006bcac) dialer_ne_pane_t

0x523b,	// (0x0006171a) dialer_ne_pane_t3_copy1_ParamLimits

0x523b,	// (0x0006171a) dialer_ne_pane_t3_copy1

0x526a,	// (0x00061749) cell_dialer_keypad_pane_ParamLimits

0x526a,	// (0x00061749) cell_dialer_keypad_pane

0x5281,	// (0x00061760) cell_dialer_command_1_pane_ParamLimits

0x5281,	// (0x00061760) cell_dialer_command_1_pane

0x5297,	// (0x00061776) cell_dialer_command_2_pane_ParamLimits

0x5297,	// (0x00061776) cell_dialer_command_2_pane

0xcb05,	// (0x00068fe4) bg_button_pane_cp02_ParamLimits

0xcb05,	// (0x00068fe4) bg_button_pane_cp02

0x52a6,	// (0x00061785) cell_dialer_keypad_pane_g1_ParamLimits

0x52a6,	// (0x00061785) cell_dialer_keypad_pane_g1

0xcb05,	// (0x00068fe4) bg_button_pane_cp03_ParamLimits

0xcb05,	// (0x00068fe4) bg_button_pane_cp03

0x52ba,	// (0x00061799) cell_dialer_command_1_pane_g1_ParamLimits

0x52ba,	// (0x00061799) cell_dialer_command_1_pane_g1

0xcb11,	// (0x00068ff0) bg_button_pane_cp04

0x52ce,	// (0x000617ad) cell_dialer_command_2_pane_g1

0xadcb,	// (0x000672aa) bg_button_pane_cp06

0xcb19,	// (0x00068ff8) dialer_ne_clear_pane_g1

0x2c56,	// (0x0005f135) navi_pane_g2

0x2c84,	// (0x0005f163) navi_pane_g3

0x0002,

0xf3f5,	// (0x0006b8d4) navi_pane_g

0x2cad,	// (0x0005f18c) navi_pane_mv_g2

0x2cd4,	// (0x0005f1b3) navi_pane_mv_g5

0x2cdc,	// (0x0005f1bb) navi_pane_mv_t1

0xa1d1,	// (0x000666b0) main_clock2_pane

0x5306,	// (0x000617e5) main_clock2_list_pane_ParamLimits

0x5306,	// (0x000617e5) main_clock2_list_pane

0x533e,	// (0x0006181d) main_clock2_pane_t1_ParamLimits

0x533e,	// (0x0006181d) main_clock2_pane_t1

0x537a,	// (0x00061859) main_clock2_pane_t2_ParamLimits

0x537a,	// (0x00061859) main_clock2_pane_t2

0x0004,

0xf7d4,	// (0x0006bcb3) main_clock2_pane_t_ParamLimits

0xf7d4,	// (0x0006bcb3) main_clock2_pane_t

0x5417,	// (0x000618f6) popup_clock_analogue_window_cp03_ParamLimits

0x5417,	// (0x000618f6) popup_clock_analogue_window_cp03

0x543c,	// (0x0006191b) popup_clock_digital_window_cp02_ParamLimits

0x543c,	// (0x0006191b) popup_clock_digital_window_cp02

0x54ad,	// (0x0006198c) main_clock2_list_single_pane_ParamLimits

0x54ad,	// (0x0006198c) main_clock2_list_single_pane

0xadcb,	// (0x000672aa) list_highlight_pane_cp05

0xcb21,	// (0x00069000) main_clock2_list_single_pane_t1

0x1bc6,	// (0x0005e0a5) popup_toolbar_window_cp04_ParamLimits

0x48c1,	// (0x00060da0) camera2_autofocus_pane_g2_ParamLimits

0x48c1,	// (0x00060da0) camera2_autofocus_pane_g2

0x48cd,	// (0x00060dac) camera2_autofocus_pane_g3_ParamLimits

0x48cd,	// (0x00060dac) camera2_autofocus_pane_g3

0x48d9,	// (0x00060db8) camera2_autofocus_pane_g4_ParamLimits

0x48d9,	// (0x00060db8) camera2_autofocus_pane_g4

0x48e5,	// (0x00060dc4) camera2_autofocus_pane_g5_ParamLimits

0x48e5,	// (0x00060dc4) camera2_autofocus_pane_g5

0x0004,

0xf71d,	// (0x0006bbfc) camera2_autofocus_pane_g_ParamLimits

0xf71d,	// (0x0006bbfc) camera2_autofocus_pane_g

0x4b02,	// (0x00060fe1) camera2_autofocus_pane_cp_g2

0x4b0a,	// (0x00060fe9) camera2_autofocus_pane_cp_g3

0x4b12,	// (0x00060ff1) camera2_autofocus_pane_cp_g4

0x4b1a,	// (0x00060ff9) camera2_autofocus_pane_cp_g5

0x0004,

0xf783,	// (0x0006bc62) camera2_autofocus_pane_cp_g

0x51c1,	// (0x000616a0) popup_dialer_spcha_window

0x0aa3,	// (0x0005cf82) bg_popup_sub_pane_cp07

0xcb2f,	// (0x0006900e) list_spcha_pane

0xcb37,	// (0x00069016) list_single_spcha_pane_ParamLimits

0xcb37,	// (0x00069016) list_single_spcha_pane

0x0aa3,	// (0x0005cf82) list_highlight_pane_cp06

0xcb48,	// (0x00069027) list_single_spcha_pane_t1

0xbc56,	// (0x00068135) popup_call2_audio_out_window_g4_ParamLimits

0xbc56,	// (0x00068135) popup_call2_audio_out_window_g4

0x9a64,	// (0x00065f43) main_imed2_pane

0xc243,	// (0x00068722) popup_imed_adjust2_window

0x3c9e,	// (0x0006017d) popup_imed_trans_window_ParamLimits

0x3c9e,	// (0x0006017d) popup_imed_trans_window

0xc55f,	// (0x00068a3e) popup_blid_sat_info2_window_t1

0xc56d,	// (0x00068a4c) popup_blid_sat_info2_window_t2

0x000a,

0xf6b2,	// (0x0006bb91) popup_blid_sat_info2_window_t

0x5557,	// (0x00061a36) aid_size_cell_colour_35

0x5577,	// (0x00061a56) aid_size_cell_colour_112

0x5597,	// (0x00061a76) aid_size_cell_effect

0xc20d,	// (0x000686ec) bg_tb_trans_pane_cp02

0xa89b,	// (0x00066d7a) heading_imed_pane

0x55b7,	// (0x00061a96) listscroll_imed_pane

0xcb56,	// (0x00069035) heading_imed_pane_g1

0xcb5e,	// (0x0006903d) heading_imed_pane_t1

0xcb6c,	// (0x0006904b) grid_imed_colour_35_pane_ParamLimits

0xcb6c,	// (0x0006904b) grid_imed_colour_35_pane

0x55c3,	// (0x00061aa2) grid_imed_effect_pane

0xcb83,	// (0x00069062) list_imed_aspect_pane

0x55d9,	// (0x00061ab8) scroll_pane_cp027_ParamLimits

0x55d9,	// (0x00061ab8) scroll_pane_cp027

0x55ea,	// (0x00061ac9) cell_imed_effect_pane_ParamLimits

0x55ea,	// (0x00061ac9) cell_imed_effect_pane

0xcb8b,	// (0x0006906a) cell_imed_colour_pane_ParamLimits

0xcb8b,	// (0x0006906a) cell_imed_colour_pane

0xcbcd,	// (0x000690ac) cell_imed_colour_pane_g1_ParamLimits

0xcbcd,	// (0x000690ac) cell_imed_colour_pane_g1

0xcbde,	// (0x000690bd) hgihlgiht_grid_pane_cp016_ParamLimits

0xcbde,	// (0x000690bd) hgihlgiht_grid_pane_cp016

0x5611,	// (0x00061af0) cell_imed_effect_pane_g1

0x5619,	// (0x00061af8) grid_highlight_pane_cp017

0xcbef,	// (0x000690ce) list_imed_single_pane_ParamLimits

0xcbef,	// (0x000690ce) list_imed_single_pane

0x0aa3,	// (0x0005cf82) list_highlight_pane_cp07

0xcc04,	// (0x000690e3) list_imed_aspect_pane_comp1_t1

0xc20d,	// (0x000686ec) bg_tb_trans_pane_cp05

0xcc26,	// (0x00069105) popup_imed_adjust2_window_g1

0xcc4d,	// (0x0006912c) popup_imed_adjust2_window_t1

0xcc65,	// (0x00069144) slider_imed_adjust_pane

0xcc79,	// (0x00069158) slider_imed_adjust_pane_g1

0xcc89,	// (0x00069168) slider_imed_adjust_pane_g2

0xcc99,	// (0x00069178) slider_imed_adjust_pane_g3

0xccaa,	// (0x00069189) slider_imed_adjust_pane_g4

0x0003,

0xf7f1,	// (0x0006bcd0) slider_imed_adjust_pane_g

0x5622,	// (0x00061b01) aid_size_cell_clipart2

0x562e,	// (0x00061b0d) grid_imed_clipart_pane

0xccbb,	// (0x0006919a) scroll_pane_cp031

0x5638,	// (0x00061b17) cell_imed_clipart_pane_ParamLimits

0x5638,	// (0x00061b17) cell_imed_clipart_pane

0x565a,	// (0x00061b39) cell_imed_clipart_pane_g1

0x0aa3,	// (0x0005cf82) grid_highlight_pane_cp014

0x531b,	// (0x000617fa) main_clock2_pane_g1_ParamLimits

0x531b,	// (0x000617fa) main_clock2_pane_g1

0x5458,	// (0x00061937) aid_call2_pane_cp10

0x546a,	// (0x00061949) aid_call_pane_cp10

0xad00,	// (0x000671df) popup_clock_analogue_window_cp10_g1

0xad00,	// (0x000671df) popup_clock_analogue_window_cp10_g2

0x547c,	// (0x0006195b) popup_clock_analogue_window_cp10_g3

0x547c,	// (0x0006195b) popup_clock_analogue_window_cp10_g4

0xad00,	// (0x000671df) popup_clock_analogue_window_cp10_g5

0x0004,

0xf7df,	// (0x0006bcbe) popup_clock_analogue_window_cp10_g

0x548e,	// (0x0006196d) popup_clock_analogue_window_cp10_t1

0x54bf,	// (0x0006199e) clock_digital_number_pane_cp10_ParamLimits

0x54bf,	// (0x0006199e) clock_digital_number_pane_cp10

0x54d7,	// (0x000619b6) clock_digital_number_pane_cp11_ParamLimits

0x54d7,	// (0x000619b6) clock_digital_number_pane_cp11

0x54ef,	// (0x000619ce) clock_digital_number_pane_cp12_ParamLimits

0x54ef,	// (0x000619ce) clock_digital_number_pane_cp12

0x5507,	// (0x000619e6) clock_digital_number_pane_cp13_ParamLimits

0x5507,	// (0x000619e6) clock_digital_number_pane_cp13

0x551f,	// (0x000619fe) clock_digital_separator_pane_cp10_ParamLimits

0x551f,	// (0x000619fe) clock_digital_separator_pane_cp10

0x5537,	// (0x00061a16) popup_clock_digital_window_cp02_t1_ParamLimits

0x5537,	// (0x00061a16) popup_clock_digital_window_cp02_t1

0xa0d4,	// (0x000665b3) clock_digital_number_pane_cp10_g1

0xa0d4,	// (0x000665b3) clock_digital_number_pane_cp10_g2

0x0001,

0xf7fa,	// (0x0006bcd9) clock_digital_number_pane_cp10_g

0xa0d4,	// (0x000665b3) clock_digital_separator_pane_cp10_g1

0xa0d4,	// (0x000665b3) clock_digital_separator_pane_g2_cp10

0xad9b,	// (0x0006727a) navi_pane_vded_g4

0xada4,	// (0x00067283) navi_pane_vded_g5

0xadad,	// (0x0006728c) navi_pane_vded_t1

0x9a64,	// (0x00065f43) main_vded_pane

0x5663,	// (0x00061b42) main_vded_pane_g1

0x566d,	// (0x00061b4c) main_vded_pane_g2

0x5677,	// (0x00061b56) main_vded_pane_g3

0x0002,

0xf7ff,	// (0x0006bcde) main_vded_pane_g

0x5681,	// (0x00061b60) main_vded_pane_t1

0x568f,	// (0x00061b6e) main_vded_pane_t2

0x0001,

0xf806,	// (0x0006bce5) main_vded_pane_t

0x569d,	// (0x00061b7c) vded_slider_pane

0x56a5,	// (0x00061b84) vded_video_pane

0xccc3,	// (0x000691a2) vded_video_pane_g1

0x56ad,	// (0x00061b8c) vded_video_pane_g2

0xc721,	// (0x00068c00) vded_video_pane_g3

0x0002,

0xf80b,	// (0x0006bcea) vded_video_pane_g

0xcccd,	// (0x000691ac) vded_slider_pane_g1

0xc430,	// (0x0006890f) vded_slider_pane_g2

0xccd6,	// (0x000691b5) vded_slider_pane_g3

0xccdf,	// (0x000691be) vded_slider_pane_g4

0xcce8,	// (0x000691c7) vded_slider_pane_g5

0x0004,

0xf812,	// (0x0006bcf1) vded_slider_pane_g

0x50a2,	// (0x00061581) mup3_rocker_pane_ParamLimits

0x50a2,	// (0x00061581) mup3_rocker_pane

0x56b6,	// (0x00061b95) mup3_control_keys_pane_g1

0x56be,	// (0x00061b9d) mup3_control_keys_pane_g2

0x56c6,	// (0x00061ba5) mup3_control_keys_pane_g3

0x56ce,	// (0x00061bad) mup3_control_keys_pane_g4

0x0003,

0xf81d,	// (0x0006bcfc) mup3_control_keys_pane_g

0x0c91,	// (0x0005d170) popup_toolbar2_fixed_window_cp01_ParamLimits

0x0c91,	// (0x0005d170) popup_toolbar2_fixed_window_cp01

0x50d6,	// (0x000615b5) popup_toolbar2_fixed_window_cp02_ParamLimits

0x50d6,	// (0x000615b5) popup_toolbar2_fixed_window_cp02

0xb595,	// (0x00067a74) popup_call2_audio_second_window_t4_ParamLimits

0xb595,	// (0x00067a74) popup_call2_audio_second_window_t4

0xbac3,	// (0x00067fa2) popup_call2_audio_first_window_t6_ParamLimits

0xbac3,	// (0x00067fa2) popup_call2_audio_first_window_t6

0xbd59,	// (0x00068238) popup_call2_audio_out_window_t6_ParamLimits

0xbd59,	// (0x00068238) popup_call2_audio_out_window_t6

0x9a64,	// (0x00065f43) main_vitu_pane

0x56de,	// (0x00061bbd) aid_size_cell_itu_ParamLimits

0x56de,	// (0x00061bbd) aid_size_cell_itu

0xc21b,	// (0x000686fa) bg_popup_window_pane_cp08_ParamLimits

0xc21b,	// (0x000686fa) bg_popup_window_pane_cp08

0x56f4,	// (0x00061bd3) field_vitu_entry_pane_ParamLimits

0x56f4,	// (0x00061bd3) field_vitu_entry_pane

0x570b,	// (0x00061bea) grid_vitu_function_pane_ParamLimits

0x570b,	// (0x00061bea) grid_vitu_function_pane

0x5726,	// (0x00061c05) grid_vitu_itu_pane_ParamLimits

0x5726,	// (0x00061c05) grid_vitu_itu_pane

0x5744,	// (0x00061c23) cell_vitu_itu_pane_ParamLimits

0x5744,	// (0x00061c23) cell_vitu_itu_pane

0x5766,	// (0x00061c45) cell_vitu_function_pane_ParamLimits

0x5766,	// (0x00061c45) cell_vitu_function_pane

0xc21b,	// (0x000686fa) bg_popup_sub_pane_cp08_ParamLimits

0xc21b,	// (0x000686fa) bg_popup_sub_pane_cp08

0x577f,	// (0x00061c5e) field_vitu_entry_pane_t1_ParamLimits

0x577f,	// (0x00061c5e) field_vitu_entry_pane_t1

0xcd09,	// (0x000691e8) field_vitu_entry_pane_t2_ParamLimits

0xcd09,	// (0x000691e8) field_vitu_entry_pane_t2

0x0001,

0xf82b,	// (0x0006bd0a) field_vitu_entry_pane_t_ParamLimits

0xf82b,	// (0x0006bd0a) field_vitu_entry_pane_t

0xcd26,	// (0x00069205) bg_button_pane_cp05_ParamLimits

0xcd26,	// (0x00069205) bg_button_pane_cp05

0x579d,	// (0x00061c7c) cell_vitu_itu_pane_g1

0x57b5,	// (0x00061c94) cell_vitu_itu_pane_t1_ParamLimits

0x57b5,	// (0x00061c94) cell_vitu_itu_pane_t1

0x57c7,	// (0x00061ca6) cell_vitu_itu_pane_t2_ParamLimits

0x57c7,	// (0x00061ca6) cell_vitu_itu_pane_t2

0x0002,

0xf830,	// (0x0006bd0f) cell_vitu_itu_pane_t_ParamLimits

0xf830,	// (0x0006bd0f) cell_vitu_itu_pane_t

0xcd34,	// (0x00069213) bg_button_pane_cp07

0x57fc,	// (0x00061cdb) cell_vitu_function_pane_g1

0xa163,	// (0x00066642) main_calc_pane_g1

0x0ad1,	// (0x0005cfb0) aid_visual_content_pane

0x9a64,	// (0x00065f43) main_vradio_pane

0x5805,	// (0x00061ce4) main_vradio_pane_g1_ParamLimits

0x5805,	// (0x00061ce4) main_vradio_pane_g1

0xcd3e,	// (0x0006921d) main_vradio_pane_g2_ParamLimits

0xcd3e,	// (0x0006921d) main_vradio_pane_g2

0x0001,

0xf837,	// (0x0006bd16) main_vradio_pane_g_ParamLimits

0xf837,	// (0x0006bd16) main_vradio_pane_g

0x581e,	// (0x00061cfd) main_vradio_pane_t1_ParamLimits

0x581e,	// (0x00061cfd) main_vradio_pane_t1

0x5833,	// (0x00061d12) main_vradio_pane_t2_ParamLimits

0x5833,	// (0x00061d12) main_vradio_pane_t2

0xcd4b,	// (0x0006922a) main_vradio_pane_t3_ParamLimits

0xcd4b,	// (0x0006922a) main_vradio_pane_t3

0x0002,

0xf83c,	// (0x0006bd1b) main_vradio_pane_t_ParamLimits

0xf83c,	// (0x0006bd1b) main_vradio_pane_t

0x5848,	// (0x00061d27) vradio_rocker_control_pane_ParamLimits

0x5848,	// (0x00061d27) vradio_rocker_control_pane

0x585a,	// (0x00061d39) vradio_station_info_pane_ParamLimits

0x585a,	// (0x00061d39) vradio_station_info_pane

0xcd5f,	// (0x0006923e) vradio_frequency_info_pane_ParamLimits

0xcd5f,	// (0x0006923e) vradio_frequency_info_pane

0xc721,	// (0x00068c00) vradio_station_info_pane_g1

0xcd6e,	// (0x0006924d) vradio_station_info_pane_t1_ParamLimits

0xcd6e,	// (0x0006924d) vradio_station_info_pane_t1

0xcd90,	// (0x0006926f) vradio_station_info_pane_t2_ParamLimits

0xcd90,	// (0x0006926f) vradio_station_info_pane_t2

0x0001,

0xf843,	// (0x0006bd22) vradio_station_info_pane_t_ParamLimits

0xf843,	// (0x0006bd22) vradio_station_info_pane_t

0xcda2,	// (0x00069281) vradio_tuning_pane

0xcdaa,	// (0x00069289) vradio_rocker_control_pane_g1

0xcdb2,	// (0x00069291) vradio_rocker_control_pane_g2

0xcdba,	// (0x00069299) vradio_rocker_control_pane_g3

0xcdc2,	// (0x000692a1) vradio_rocker_control_pane_g4

0xcdca,	// (0x000692a9) vradio_rocker_control_pane_g5

0x0004,

0xf848,	// (0x0006bd27) vradio_rocker_control_pane_g

0x586c,	// (0x00061d4b) vradio_frequency_info_pane_g1

0xcdd2,	// (0x000692b1) vradio_frequency_info_pane_t1_ParamLimits

0xcdd2,	// (0x000692b1) vradio_frequency_info_pane_t1

0x5876,	// (0x00061d55) vradio_tuning_pane_g1

0x5881,	// (0x00061d60) vradio_tuning_pane_t1

0x9a14,	// (0x00065ef3) area_side_right_pane_ParamLimits

0x9a14,	// (0x00065ef3) area_side_right_pane

0xc1d4,	// (0x000686b3) status_small_pane_g1

0xc1dc,	// (0x000686bb) status_small_pane_g2

0xc1e5,	// (0x000686c4) status_small_pane_g3

0xc1ee,	// (0x000686cd) status_small_pane_g4

0x0003,

0xf608,	// (0x0006bae7) status_small_pane_g

0xc1f7,	// (0x000686d6) status_small_pane_t1

0x9a64,	// (0x00065f43) main_video3_pane

0xcde6,	// (0x000692c5) cams_zoom_vslider_pane

0xcdee,	// (0x000692cd) image3_wide_pane_ParamLimits

0xcdee,	// (0x000692cd) image3_wide_pane

0xce08,	// (0x000692e7) image3_wide_small_pane

0xce14,	// (0x000692f3) main_video3_pane_g1_ParamLimits

0xce14,	// (0x000692f3) main_video3_pane_g1

0xce30,	// (0x0006930f) main_video3_pane_g2_ParamLimits

0xce30,	// (0x0006930f) main_video3_pane_g2

0x0001,

0xf853,	// (0x0006bd32) main_video3_pane_g_ParamLimits

0xf853,	// (0x0006bd32) main_video3_pane_g

0xce4c,	// (0x0006932b) main_video3_pane_t1_ParamLimits

0xce4c,	// (0x0006932b) main_video3_pane_t1

0xce77,	// (0x00069356) main_video3_pane_t2_ParamLimits

0xce77,	// (0x00069356) main_video3_pane_t2

0xcea2,	// (0x00069381) main_video3_pane_t3_ParamLimits

0xcea2,	// (0x00069381) main_video3_pane_t3

0x0002,

0xf858,	// (0x0006bd37) main_video3_pane_t_ParamLimits

0xf858,	// (0x0006bd37) main_video3_pane_t

0xcecf,	// (0x000693ae) cams_zoom_vslider_pane_g1

0xced8,	// (0x000693b7) cams_zoom_vslider_pane_g2

0x0001,

0xf85f,	// (0x0006bd3e) cams_zoom_vslider_pane_g

0xcee0,	// (0x000693bf) small_slider_vertical_pane

0xc721,	// (0x00068c00) small_slider_vertical_pane_g1

0xc721,	// (0x00068c00) small_slider_vertical_pane_g2

0xcee8,	// (0x000693c7) small_slider_vertical_pane_g3

0x0002,

0xf864,	// (0x0006bd43) small_slider_vertical_pane_g

0x9a64,	// (0x00065f43) main_hwr_training_pane

0xcef1,	// (0x000693d0) hwr_training_instruct_pane_ParamLimits

0xcef1,	// (0x000693d0) hwr_training_instruct_pane

0x5890,	// (0x00061d6f) hwr_training_navi_pane_ParamLimits

0x5890,	// (0x00061d6f) hwr_training_navi_pane

0x58af,	// (0x00061d8e) hwr_training_write_pane_ParamLimits

0x58af,	// (0x00061d8e) hwr_training_write_pane

0x0aa3,	// (0x0005cf82) bg_frame_shadow_pane

0xcf28,	// (0x00069407) hwr_training_write_pane_g1

0xcf30,	// (0x0006940f) hwr_training_write_pane_g2

0xcf38,	// (0x00069417) hwr_training_write_pane_g3

0xcf40,	// (0x0006941f) hwr_training_write_pane_g4

0xcf48,	// (0x00069427) hwr_training_write_pane_g5

0xcf50,	// (0x0006942f) hwr_training_write_pane_g6

0xcf58,	// (0x00069437) hwr_training_write_pane_g7

0x0006,

0xf86b,	// (0x0006bd4a) hwr_training_write_pane_g

0xd963,	// (0x00069e42) hwr_training_navi_pane_g1_ParamLimits

0xd963,	// (0x00069e42) hwr_training_navi_pane_g1

0xd975,	// (0x00069e54) hwr_training_navi_pane_g2_ParamLimits

0xd975,	// (0x00069e54) hwr_training_navi_pane_g2

0xd987,	// (0x00069e66) hwr_training_navi_pane_g3_ParamLimits

0xd987,	// (0x00069e66) hwr_training_navi_pane_g3

0xd997,	// (0x00069e76) hwr_training_navi_pane_g4_ParamLimits

0xd997,	// (0x00069e76) hwr_training_navi_pane_g4

0x0004,

0xf87a,	// (0x0006bd59) hwr_training_navi_pane_g_ParamLimits

0xf87a,	// (0x0006bd59) hwr_training_navi_pane_g

0xd9a4,	// (0x00069e83) hwr_training_navi_pane_t1

0x58f7,	// (0x00061dd6) list_single_hwr_training_instruct_pane_ParamLimits

0x58f7,	// (0x00061dd6) list_single_hwr_training_instruct_pane

0xcf60,	// (0x0006943f) list_single_hwr_training_instruct_pane_t1

0xc661,	// (0x00068b40) bg_frame_shadow_pane_g1

0xcf6f,	// (0x0006944e) bg_frame_shadow_pane_g2

0xcf77,	// (0x00069456) bg_frame_shadow_pane_g3

0xcf7f,	// (0x0006945e) bg_frame_shadow_pane_g4

0xcf87,	// (0x00069466) bg_frame_shadow_pane_g5

0xcf8f,	// (0x0006946e) bg_frame_shadow_pane_g6

0xcf97,	// (0x00069476) bg_frame_shadow_pane_g7

0xa2ae,	// (0x0006678d) bg_frame_shadow_pane_g8

0x0007,

0xf885,	// (0x0006bd64) bg_frame_shadow_pane_g

0x9a64,	// (0x00065f43) main_video_tele_dialer_pane

0x590c,	// (0x00061deb) aid_size_cell_video_keypad_ParamLimits

0x590c,	// (0x00061deb) aid_size_cell_video_keypad

0x5926,	// (0x00061e05) grid_video_dialer_keypad_pane_ParamLimits

0x5926,	// (0x00061e05) grid_video_dialer_keypad_pane

0x5970,	// (0x00061e4f) video_down_pane_cp_ParamLimits

0x5970,	// (0x00061e4f) video_down_pane_cp

0x5980,	// (0x00061e5f) cell_video_dialer_keypad_pane_ParamLimits

0x5980,	// (0x00061e5f) cell_video_dialer_keypad_pane

0xcfbb,	// (0x0006949a) bg_button_pane_cp08_ParamLimits

0xcfbb,	// (0x0006949a) bg_button_pane_cp08

0x59a2,	// (0x00061e81) cell_video_dialer_keypad_pane_g1_ParamLimits

0x59a2,	// (0x00061e81) cell_video_dialer_keypad_pane_g1

0x508c,	// (0x0006156b) mup3_rocker2_pane_ParamLimits

0x508c,	// (0x0006156b) mup3_rocker2_pane

0xc721,	// (0x00068c00) mup3_rocker2_pane_g1

0x3b7f,	// (0x0006005e) main_dialer2_pane

0x9a64,	// (0x00065f43) main_mp4_pane

0xd9ba,	// (0x00069e99) main_mp4_pane_g1_ParamLimits

0xd9ba,	// (0x00069e99) main_mp4_pane_g1

0xd9ba,	// (0x00069e99) main_mp4_pane_g2_ParamLimits

0xd9ba,	// (0x00069e99) main_mp4_pane_g2

0x59dc,	// (0x00061ebb) main_mp4_pane_g3_ParamLimits

0x59dc,	// (0x00061ebb) main_mp4_pane_g3

0xd9c8,	// (0x00069ea7) main_mp4_pane_g4_ParamLimits

0xd9c8,	// (0x00069ea7) main_mp4_pane_g4

0xd9f0,	// (0x00069ecf) main_mp4_pane_g5_ParamLimits

0xd9f0,	// (0x00069ecf) main_mp4_pane_g5

0x0005,

0xf8a5,	// (0x0006bd84) main_mp4_pane_g_ParamLimits

0xf8a5,	// (0x0006bd84) main_mp4_pane_g

0xda40,	// (0x00069f1f) main_mp4_pane_t1_ParamLimits

0xda40,	// (0x00069f1f) main_mp4_pane_t1

0xda9c,	// (0x00069f7b) main_mp4_pane_t2_ParamLimits

0xda9c,	// (0x00069f7b) main_mp4_pane_t2

0xcfc7,	// (0x000694a6) main_mp4_pane_t3_ParamLimits

0xcfc7,	// (0x000694a6) main_mp4_pane_t3

0xdaee,	// (0x00069fcd) main_mp4_pane_t4_ParamLimits

0xdaee,	// (0x00069fcd) main_mp4_pane_t4

0x0003,

0xf8b2,	// (0x0006bd91) main_mp4_pane_t_ParamLimits

0xf8b2,	// (0x0006bd91) main_mp4_pane_t

0xdb32,	// (0x0006a011) mp4_progress_pane_ParamLimits

0xdb32,	// (0x0006a011) mp4_progress_pane

0xdb7c,	// (0x0006a05b) mp4_rocker_pane_ParamLimits

0xdb7c,	// (0x0006a05b) mp4_rocker_pane

0xcfef,	// (0x000694ce) mp4_progress_pane_t1

0xd008,	// (0x000694e7) mp4_progress_pane_t2

0x0001,

0xf8bb,	// (0x0006bd9a) mp4_progress_pane_t

0xd021,	// (0x00069500) mup_progress_pane_cp04

0xd02d,	// (0x0006950c) mp4_rocker_pane_g1

0x5a18,	// (0x00061ef7) aid_cell_size_keypad2_ParamLimits

0x5a18,	// (0x00061ef7) aid_cell_size_keypad2

0x5a2e,	// (0x00061f0d) dialer2_ne_pane_ParamLimits

0x5a2e,	// (0x00061f0d) dialer2_ne_pane

0x5a48,	// (0x00061f27) grid_dialer2_keypad_pane_ParamLimits

0x5a48,	// (0x00061f27) grid_dialer2_keypad_pane

0xc506,	// (0x000689e5) bg_popup_call_pane_cp07_ParamLimits

0xc506,	// (0x000689e5) bg_popup_call_pane_cp07

0x5a64,	// (0x00061f43) dialer2_ne_pane_t1_ParamLimits

0x5a64,	// (0x00061f43) dialer2_ne_pane_t1

0x5a9f,	// (0x00061f7e) cell_dialer2_keypad_pane_ParamLimits

0x5a9f,	// (0x00061f7e) cell_dialer2_keypad_pane

0xd049,	// (0x00069528) bg_button_pane_pane_cp04_ParamLimits

0xd049,	// (0x00069528) bg_button_pane_pane_cp04

0x5ac1,	// (0x00061fa0) cell_dialer2_keypad_pane_g1_ParamLimits

0x5ac1,	// (0x00061fa0) cell_dialer2_keypad_pane_g1

0x1a9a,	// (0x0005df79) aid_placing_vt_set_content_ParamLimits

0x1a9a,	// (0x0005df79) aid_placing_vt_set_content

0x1ac2,	// (0x0005dfa1) aid_placing_vt_set_title_ParamLimits

0x1ac2,	// (0x0005dfa1) aid_placing_vt_set_title

0x9a64,	// (0x00065f43) main_image3_pane

0x5b87,	// (0x00062066) area_side_right_pane_cp01_ParamLimits

0x5b87,	// (0x00062066) area_side_right_pane_cp01

0xd9ba,	// (0x00069e99) main_image3_pane_g1_ParamLimits

0xd9ba,	// (0x00069e99) main_image3_pane_g1

0x5b9e,	// (0x0006207d) main_image3_pane_g2_ParamLimits

0x5b9e,	// (0x0006207d) main_image3_pane_g2

0x5bc6,	// (0x000620a5) main_image3_pane_g3_ParamLimits

0x5bc6,	// (0x000620a5) main_image3_pane_g3

0x5bf0,	// (0x000620cf) main_image3_pane_g4_ParamLimits

0x5bf0,	// (0x000620cf) main_image3_pane_g4

0x0003,

0xf8ca,	// (0x0006bda9) main_image3_pane_g_ParamLimits

0xf8ca,	// (0x0006bda9) main_image3_pane_g

0x5c1a,	// (0x000620f9) main_image3_pane_t1_ParamLimits

0x5c1a,	// (0x000620f9) main_image3_pane_t1

0x5c72,	// (0x00062151) main_image3_pane_t2_ParamLimits

0x5c72,	// (0x00062151) main_image3_pane_t2

0x5cc4,	// (0x000621a3) main_image3_pane_t3_ParamLimits

0x5cc4,	// (0x000621a3) main_image3_pane_t3

0x0003,

0xf8d3,	// (0x0006bdb2) main_image3_pane_t_ParamLimits

0xf8d3,	// (0x0006bdb2) main_image3_pane_t

0xc21b,	// (0x000686fa) grid_sctrl_middle_pane_cp01_ParamLimits

0xc21b,	// (0x000686fa) grid_sctrl_middle_pane_cp01

0x5d4c,	// (0x0006222b) cell_sctrl_middle_pane_cp01_ParamLimits

0x5d4c,	// (0x0006222b) cell_sctrl_middle_pane_cp01

0x5d69,	// (0x00062248) cell_sctrl_middle_pane_cp01_g1_ParamLimits

0x5d69,	// (0x00062248) cell_sctrl_middle_pane_cp01_g1

0x9a64,	// (0x00065f43) main_call4_pane

0x5d7f,	// (0x0006225e) aid_size_button_call4_ParamLimits

0x5d7f,	// (0x0006225e) aid_size_button_call4

0x5db0,	// (0x0006228f) call4_windows_pane_ParamLimits

0x5db0,	// (0x0006228f) call4_windows_pane

0x5dd0,	// (0x000622af) grid_call4_button_pane_ParamLimits

0x5dd0,	// (0x000622af) grid_call4_button_pane

0xd055,	// (0x00069534) call4_windows_conf_pane

0xd06c,	// (0x0006954b) popup_call4_audio_first_window_ParamLimits

0xd06c,	// (0x0006954b) popup_call4_audio_first_window

0xd0b8,	// (0x00069597) popup_call4_audio_second_window_ParamLimits

0xd0b8,	// (0x00069597) popup_call4_audio_second_window

0xd0cc,	// (0x000695ab) popup_call4_audio_wait_window_ParamLimits

0xd0cc,	// (0x000695ab) popup_call4_audio_wait_window

0x5dfd,	// (0x000622dc) cell_call4_button_pane_ParamLimits

0x5dfd,	// (0x000622dc) cell_call4_button_pane

0x5e26,	// (0x00062305) bg_button_pane_cp09_ParamLimits

0x5e26,	// (0x00062305) bg_button_pane_cp09

0x5e32,	// (0x00062311) cell_call4_button_pane_g1_ParamLimits

0x5e32,	// (0x00062311) cell_call4_button_pane_g1

0x5e58,	// (0x00062337) cell_call4_button_pane_t1_ParamLimits

0x5e58,	// (0x00062337) cell_call4_button_pane_t1

0xd114,	// (0x000695f3) popup_call4_audio_conf_window_ParamLimits

0xd114,	// (0x000695f3) popup_call4_audio_conf_window

0x50ec,	// (0x000615cb) mup3_progress_pane_t1_ParamLimits

0x510b,	// (0x000615ea) mup3_progress_pane_t2_ParamLimits

0xca08,	// (0x00068ee7) mup3_progress_pane_t3_ParamLimits

0xf7ac,	// (0x0006bc8b) mup3_progress_pane_t_ParamLimits

0xca25,	// (0x00068f04) mup_progress_pane_cp03_ParamLimits

0x56d6,	// (0x00061bb5) mup3_control_keys_pane_g4_copy1

0xdb60,	// (0x0006a03f) mp4_rocker2_pane_ParamLimits

0xdb60,	// (0x0006a03f) mp4_rocker2_pane

0xd128,	// (0x00069607) mp4_rocker2_pane_g1

0xd130,	// (0x0006960f) mp4_rocker2_pane_g2

0xdbce,	// (0x0006a0ad) mp4_rocker2_pane_g3

0xdbd6,	// (0x0006a0b5) mp4_rocker2_pane_g4

0xdbde,	// (0x0006a0bd) mp4_rocker2_pane_g5

0x0004,

0xf8dc,	// (0x0006bdbb) mp4_rocker2_pane_g

0x9a64,	// (0x00065f43) main_camera4_pane

0x9a64,	// (0x00065f43) main_video4_pane

0x593e,	// (0x00061e1d) main_video_tele_dialer_pane_t1_ParamLimits

0x593e,	// (0x00061e1d) main_video_tele_dialer_pane_t1

0x5957,	// (0x00061e36) main_video_tele_dialer_pane_t2_ParamLimits

0x5957,	// (0x00061e36) main_video_tele_dialer_pane_t2

0x0001,

0xf896,	// (0x0006bd75) main_video_tele_dialer_pane_t_ParamLimits

0xf896,	// (0x0006bd75) main_video_tele_dialer_pane_t

0x5e96,	// (0x00062375) cam4_autofocus_pane_ParamLimits

0x5e96,	// (0x00062375) cam4_autofocus_pane

0x5eac,	// (0x0006238b) cam4_image_uncrop_pane_ParamLimits

0x5eac,	// (0x0006238b) cam4_image_uncrop_pane

0x5ec6,	// (0x000623a5) cam4_indicators_pane_ParamLimits

0x5ec6,	// (0x000623a5) cam4_indicators_pane

0x5ef1,	// (0x000623d0) main_camera4_pane_g1_ParamLimits

0x5ef1,	// (0x000623d0) main_camera4_pane_g1

0x5f03,	// (0x000623e2) main_camera4_pane_g2_ParamLimits

0x5f03,	// (0x000623e2) main_camera4_pane_g2

0x5f16,	// (0x000623f5) main_camera4_pane_g3_ParamLimits

0x5f16,	// (0x000623f5) main_camera4_pane_g3

0x5f29,	// (0x00062408) main_camera4_pane_g4_ParamLimits

0x5f29,	// (0x00062408) main_camera4_pane_g4

0x5f3c,	// (0x0006241b) main_camera4_pane_g5_ParamLimits

0x5f3c,	// (0x0006241b) main_camera4_pane_g5

0x0005,

0xf8e7,	// (0x0006bdc6) main_camera4_pane_g_ParamLimits

0xf8e7,	// (0x0006bdc6) main_camera4_pane_g

0x5f60,	// (0x0006243f) main_camera4_pane_t1_ParamLimits

0x5f60,	// (0x0006243f) main_camera4_pane_t1

0xdc02,	// (0x0006a0e1) bg_tb_trans_pane_cp06

0xdc18,	// (0x0006a0f7) cam4_indicators_pane_g1

0xdc29,	// (0x0006a108) cam4_indicators_pane_g2

0x0002,

0xf902,	// (0x0006bde1) cam4_indicators_pane_g

0xdc47,	// (0x0006a126) cam4_indicators_pane_t1

0x5fc4,	// (0x000624a3) main_video4_pane_g1_ParamLimits

0x5fc4,	// (0x000624a3) main_video4_pane_g1

0x5fd3,	// (0x000624b2) main_video4_pane_g2_ParamLimits

0x5fd3,	// (0x000624b2) main_video4_pane_g2

0x5fe2,	// (0x000624c1) main_video4_pane_g3_ParamLimits

0x5fe2,	// (0x000624c1) main_video4_pane_g3

0x5ff1,	// (0x000624d0) main_video4_pane_g4_ParamLimits

0x5ff1,	// (0x000624d0) main_video4_pane_g4

0x0004,

0xf909,	// (0x0006bde8) main_video4_pane_g_ParamLimits

0xf909,	// (0x0006bde8) main_video4_pane_g

0x600f,	// (0x000624ee) vid4_indicators_pane_ParamLimits

0x600f,	// (0x000624ee) vid4_indicators_pane

0x603d,	// (0x0006251c) video4_image_uncrop_cif_pane_ParamLimits

0x603d,	// (0x0006251c) video4_image_uncrop_cif_pane

0x6057,	// (0x00062536) video4_image_uncrop_nhd_pane_ParamLimits

0x6057,	// (0x00062536) video4_image_uncrop_nhd_pane

0x5eac,	// (0x0006238b) video4_image_uncrop_vga_pane_ParamLimits

0x5eac,	// (0x0006238b) video4_image_uncrop_vga_pane

0x9a56,	// (0x00065f35) bg_tb_trans_pane_cp07

0xdc73,	// (0x0006a152) vid4_indicators_pane_g1

0xdc87,	// (0x0006a166) vid4_indicators_pane_g2

0xdc9b,	// (0x0006a17a) vid4_indicators_pane_g3

0x0004,

0xf914,	// (0x0006bdf3) vid4_indicators_pane_g

0xdcca,	// (0x0006a1a9) vid4_indicators_pane_t1

0x606b,	// (0x0006254a) cam4_autofocus_pane_g1

0x6073,	// (0x00062552) cam4_autofocus_pane_g2

0x607b,	// (0x0006255a) cam4_autofocus_pane_g3

0x0002,

0xf91f,	// (0x0006bdfe) cam4_autofocus_pane_g

0x6083,	// (0x00062562) cam4_autofocus_pane_g3_copy1

0xcf9f,	// (0x0006947e) video_down_pane_cp_t1

0xcfad,	// (0x0006948c) video_down_pane_cp_t2

0x0001,

0xf89b,	// (0x0006bd7a) video_down_pane_cp_t

0x9a56,	// (0x00065f35) popup_vitu2_window_ParamLimits

0x9a56,	// (0x00065f35) popup_vitu2_window

0x608b,	// (0x0006256a) aid_size_cell2_itu2_ParamLimits

0x608b,	// (0x0006256a) aid_size_cell2_itu2

0x60b1,	// (0x00062590) aid_size_cell_itu2_ParamLimits

0x60b1,	// (0x00062590) aid_size_cell_itu2

0x610d,	// (0x000625ec) bg_popup_window_pane_cp09_ParamLimits

0x610d,	// (0x000625ec) bg_popup_window_pane_cp09

0x611b,	// (0x000625fa) field_vitu2_entry_pane_ParamLimits

0x611b,	// (0x000625fa) field_vitu2_entry_pane

0x6141,	// (0x00062620) grid_vitu2_function_pane_ParamLimits

0x6141,	// (0x00062620) grid_vitu2_function_pane

0x6192,	// (0x00062671) grid_vitu2_itu_pane_ParamLimits

0x6192,	// (0x00062671) grid_vitu2_itu_pane

0x6225,	// (0x00062704) cell_vitu2_itu_pane_ParamLimits

0x6225,	// (0x00062704) cell_vitu2_itu_pane

0x6249,	// (0x00062728) cell_vitu2_function_pane_ParamLimits

0x6249,	// (0x00062728) cell_vitu2_function_pane

0xdce1,	// (0x0006a1c0) bg_popup_call_pane_cp08_ParamLimits

0xdce1,	// (0x0006a1c0) bg_popup_call_pane_cp08

0xdcfa,	// (0x0006a1d9) field_vitu2_entry_pane_g1

0xdd06,	// (0x0006a1e5) field_vitu2_entry_pane_g2

0x0002,

0xf926,	// (0x0006be05) field_vitu2_entry_pane_g

0x6288,	// (0x00062767) field_vitu2_entry_pane_t1_ParamLimits

0x6288,	// (0x00062767) field_vitu2_entry_pane_t1

0x62b7,	// (0x00062796) field_vitu2_entry_pane_t2_ParamLimits

0x62b7,	// (0x00062796) field_vitu2_entry_pane_t2

0x0001,

0xf92d,	// (0x0006be0c) field_vitu2_entry_pane_t_ParamLimits

0xf92d,	// (0x0006be0c) field_vitu2_entry_pane_t

0x62d4,	// (0x000627b3) bg_button_pane_cp010_ParamLimits

0x62d4,	// (0x000627b3) bg_button_pane_cp010

0x62e2,	// (0x000627c1) cell_vitu2_itu_pane_g1

0x6300,	// (0x000627df) cell_vitu2_itu_pane_t1_ParamLimits

0x6300,	// (0x000627df) cell_vitu2_itu_pane_t1

0x09af,	// (0x0005ce8e) cell_vitu2_itu_pane_t2_ParamLimits

0x09af,	// (0x0005ce8e) cell_vitu2_itu_pane_t2

0x0002,

0xf937,	// (0x0006be16) cell_vitu2_itu_pane_t_ParamLimits

0xf937,	// (0x0006be16) cell_vitu2_itu_pane_t

0x9a56,	// (0x00065f35) bg_button_pane_cp011

0x6366,	// (0x00062845) cell_vitu2_function_pane_g1

0x9a64,	// (0x00065f43) main_myfav_hc_pane

0x5d14,	// (0x000621f3) popup_image3_note_pane_ParamLimits

0x5d14,	// (0x000621f3) popup_image3_note_pane

0x5d30,	// (0x0006220f) popup_image3_tool_bar_pane_ParamLimits

0x5d30,	// (0x0006220f) popup_image3_tool_bar_pane

0x0a33,	// (0x0005cf12) cell_vitu2_itu_pane_t3_ParamLimits

0x0a33,	// (0x0005cf12) cell_vitu2_itu_pane_t3

0x0aa3,	// (0x0005cf82) bg_popup_trans_pane

0xdd28,	// (0x0006a207) grid_image3_tool_bar_pane

0xde45,	// (0x0006a324) bg_popup_trans_pane_g1

0xa641,	// (0x00066b20) bg_popup_trans_pane_g2

0xde4d,	// (0x0006a32c) bg_popup_trans_pane_g3

0xde55,	// (0x0006a334) bg_popup_trans_pane_g4

0xde5d,	// (0x0006a33c) bg_popup_trans_pane_g5

0xde65,	// (0x0006a344) bg_popup_trans_pane_g6

0xde6d,	// (0x0006a34c) bg_popup_trans_pane_g7

0xde75,	// (0x0006a354) bg_popup_trans_pane_g8

0xa621,	// (0x00066b00) bg_popup_trans_pane_g9

0x0008,

0xf93e,	// (0x0006be1d) bg_popup_trans_pane_g

0xde7d,	// (0x0006a35c) cell_image3_tool_bar_pane_ParamLimits

0xde7d,	// (0x0006a35c) cell_image3_tool_bar_pane

0xc721,	// (0x00068c00) cell_image3_tool_bar_pane_g1

0x0aa3,	// (0x0005cf82) bg_popup_trans_pane_cp1

0xde91,	// (0x0006a370) popup_image3_note_pane_t1

0xde9f,	// (0x0006a37e) popup_image3_note_pane_t2

0xdead,	// (0x0006a38c) popup_image3_note_pane_t3

0x0002,

0x0399,	// (0x0005c878) popup_image3_note_pane_t

0xdebb,	// (0x0006a39a) popup_image3_note_pane_t3_copy1

0x637a,	// (0x00062859) bg_myfav_hc_instruction_pane_ParamLimits

0x637a,	// (0x00062859) bg_myfav_hc_instruction_pane

0x638e,	// (0x0006286d) cell_myfav_contact_pane_ParamLimits

0x638e,	// (0x0006286d) cell_myfav_contact_pane

0x63ac,	// (0x0006288b) cell_myfav_contact_pane_cp1_ParamLimits

0x63ac,	// (0x0006288b) cell_myfav_contact_pane_cp1

0x63c4,	// (0x000628a3) cell_myfav_contact_pane_cp2_ParamLimits

0x63c4,	// (0x000628a3) cell_myfav_contact_pane_cp2

0x63dc,	// (0x000628bb) cell_myfav_contact_pane_cp3_ParamLimits

0x63dc,	// (0x000628bb) cell_myfav_contact_pane_cp3

0x63f3,	// (0x000628d2) cell_myfav_contact_pane_cp4_ParamLimits

0x63f3,	// (0x000628d2) cell_myfav_contact_pane_cp4

0x640b,	// (0x000628ea) cell_myfav_contact_pane_cp5_ParamLimits

0x640b,	// (0x000628ea) cell_myfav_contact_pane_cp5

0x641f,	// (0x000628fe) cell_myfav_contact_pane_cp6_ParamLimits

0x641f,	// (0x000628fe) cell_myfav_contact_pane_cp6

0x6435,	// (0x00062914) cell_myfav_contact_pane_cp7_ParamLimits

0x6435,	// (0x00062914) cell_myfav_contact_pane_cp7

0xdec9,	// (0x0006a3a8) listscroll_gen_pane_cp05

0x644f,	// (0x0006292e) main_myfav_hc_pane_g1_ParamLimits

0x644f,	// (0x0006292e) main_myfav_hc_pane_g1

0x6469,	// (0x00062948) main_myfav_hc_pane_g2_ParamLimits

0x6469,	// (0x00062948) main_myfav_hc_pane_g2

0x0002,

0xf951,	// (0x0006be30) main_myfav_hc_pane_g_ParamLimits

0xf951,	// (0x0006be30) main_myfav_hc_pane_g

0x649b,	// (0x0006297a) main_myfav_hc_pane_t1_ParamLimits

0x649b,	// (0x0006297a) main_myfav_hc_pane_t1

0xded2,	// (0x0006a3b1) main_myfav_hc_pane_t2_ParamLimits

0xded2,	// (0x0006a3b1) main_myfav_hc_pane_t2

0xdee4,	// (0x0006a3c3) main_myfav_hc_pane_t3_ParamLimits

0xdee4,	// (0x0006a3c3) main_myfav_hc_pane_t3

0x64b2,	// (0x00062991) main_myfav_hc_pane_t4_ParamLimits

0x64b2,	// (0x00062991) main_myfav_hc_pane_t4

0x0004,

0xf958,	// (0x0006be37) main_myfav_hc_pane_t_ParamLimits

0xf958,	// (0x0006be37) main_myfav_hc_pane_t

0xc721,	// (0x00068c00) bg_myfav_hc_instruction_pane_g1

0xdef6,	// (0x0006a3d5) cell_myfav_contact_pane_g1_ParamLimits

0xdef6,	// (0x0006a3d5) cell_myfav_contact_pane_g1

0xdef6,	// (0x0006a3d5) cell_myfav_contact_pane_g2_ParamLimits

0xdef6,	// (0x0006a3d5) cell_myfav_contact_pane_g2

0xdf02,	// (0x0006a3e1) cell_myfav_contact_pane_g3_ParamLimits

0xdf02,	// (0x0006a3e1) cell_myfav_contact_pane_g3

0xc9f2,	// (0x00068ed1) cell_myfav_contact_pane_g4_ParamLimits

0xc9f2,	// (0x00068ed1) cell_myfav_contact_pane_g4

0xdf0f,	// (0x0006a3ee) cell_myfav_contact_pane_g5_ParamLimits

0xdf0f,	// (0x0006a3ee) cell_myfav_contact_pane_g5

0x0004,

0xf963,	// (0x0006be42) cell_myfav_contact_pane_g_ParamLimits

0xf963,	// (0x0006be42) cell_myfav_contact_pane_g

0x6483,	// (0x00062962) main_myfav_hc_pane_g3_ParamLimits

0x6483,	// (0x00062962) main_myfav_hc_pane_g3

0x0bf3,	// (0x0005d0d2) popup_adpt_find_window

0x64da,	// (0x000629b9) afind_page_pane_ParamLimits

0x64da,	// (0x000629b9) afind_page_pane

0x64ef,	// (0x000629ce) aid_size_cell_afind_ParamLimits

0x64ef,	// (0x000629ce) aid_size_cell_afind

0x650d,	// (0x000629ec) bg_popup_sub_pane_cp09_ParamLimits

0x650d,	// (0x000629ec) bg_popup_sub_pane_cp09

0x651a,	// (0x000629f9) find_pane_cp01_ParamLimits

0x651a,	// (0x000629f9) find_pane_cp01

0xdf1b,	// (0x0006a3fa) grid_afind_control_pane_ParamLimits

0xdf1b,	// (0x0006a3fa) grid_afind_control_pane

0x6527,	// (0x00062a06) grid_afind_pane_ParamLimits

0x6527,	// (0x00062a06) grid_afind_pane

0x6549,	// (0x00062a28) cell_afind_pane_ParamLimits

0x6549,	// (0x00062a28) cell_afind_pane

0xc721,	// (0x00068c00) afind_page_pane_g1

0x65aa,	// (0x00062a89) afind_page_pane_g2

0x65b3,	// (0x00062a92) afind_page_pane_g3

0x0002,

0xf96e,	// (0x0006be4d) afind_page_pane_g

0x65bc,	// (0x00062a9b) afind_page_pane_t1

0xdf2f,	// (0x0006a40e) cell_afind_grid_control_pane_ParamLimits

0xdf2f,	// (0x0006a40e) cell_afind_grid_control_pane

0xd049,	// (0x00069528) bg_button_pane_cp69_ParamLimits

0xd049,	// (0x00069528) bg_button_pane_cp69

0x65dc,	// (0x00062abb) cell_afind_pane_g1_ParamLimits

0x65dc,	// (0x00062abb) cell_afind_pane_g1

0x65e9,	// (0x00062ac8) cell_afind_pane_t1_ParamLimits

0x65e9,	// (0x00062ac8) cell_afind_pane_t1

0xa43a,	// (0x00066919) bg_button_pane_cp72

0xdf3e,	// (0x0006a41d) cell_afind_grid_control_pane_g1

0x363f,	// (0x0005fb1e) aid_image_placing_area_ParamLimits

0x363f,	// (0x0005fb1e) aid_image_placing_area

0xccf1,	// (0x000691d0) field_vitu_entry_pane_g1_ParamLimits

0xccf1,	// (0x000691d0) field_vitu_entry_pane_g1

0xccfd,	// (0x000691dc) field_vitu_entry_pane_g2_ParamLimits

0xccfd,	// (0x000691dc) field_vitu_entry_pane_g2

0x0001,

0xf826,	// (0x0006bd05) field_vitu_entry_pane_g_ParamLimits

0xf826,	// (0x0006bd05) field_vitu_entry_pane_g

0x579d,	// (0x00061c7c) cell_vitu_itu_pane_g1_ParamLimits

0x57df,	// (0x00061cbe) cell_vitu_itu_pane_t3_ParamLimits

0x57df,	// (0x00061cbe) cell_vitu_itu_pane_t3

0xcfef,	// (0x000694ce) mp4_progress_pane_t1_ParamLimits

0xd008,	// (0x000694e7) mp4_progress_pane_t2_ParamLimits

0xf8bb,	// (0x0006bd9a) mp4_progress_pane_t_ParamLimits

0xd021,	// (0x00069500) mup_progress_pane_cp04_ParamLimits

0x64c6,	// (0x000629a5) main_myfav_hc_pane_t5_ParamLimits

0x64c6,	// (0x000629a5) main_myfav_hc_pane_t5

0x9a04,	// (0x00065ee3) aid_zoom_text_primary

0x0bf3,	// (0x0005d0d2) popup_adpt_find_window_ParamLimits

0x9a56,	// (0x00065f35) main_cam_set_pane

0x5edd,	// (0x000623bc) cam4_zoom_pane_ParamLimits

0x5edd,	// (0x000623bc) cam4_zoom_pane

0x65fb,	// (0x00062ada) main_cam_set_pane_g1_ParamLimits

0x65fb,	// (0x00062ada) main_cam_set_pane_g1

0x6609,	// (0x00062ae8) main_cam_set_pane_g2_ParamLimits

0x6609,	// (0x00062ae8) main_cam_set_pane_g2

0x0001,

0xf975,	// (0x0006be54) main_cam_set_pane_g_ParamLimits

0xf975,	// (0x0006be54) main_cam_set_pane_g

0x662a,	// (0x00062b09) main_cam_set_pane_t1_ParamLimits

0x662a,	// (0x00062b09) main_cam_set_pane_t1

0x6645,	// (0x00062b24) main_cset_listscroll_pane_ParamLimits

0x6645,	// (0x00062b24) main_cset_listscroll_pane

0x6665,	// (0x00062b44) main_cset_slider_pane_ParamLimits

0x6665,	// (0x00062b44) main_cset_slider_pane

0xdf4f,	// (0x0006a42e) main_cset_list_pane_ParamLimits

0xdf4f,	// (0x0006a42e) main_cset_list_pane

0xdf5f,	// (0x0006a43e) scroll_pane_cp028

0x668b,	// (0x00062b6a) aid_area_touch_slider

0x66a7,	// (0x00062b86) cset_slider_pane

0x66d1,	// (0x00062bb0) main_cset_slider_pane_g1

0x66e6,	// (0x00062bc5) main_cset_slider_pane_g2

0x0011,

0xf97a,	// (0x0006be59) main_cset_slider_pane_g

0xdf98,	// (0x0006a477) main_cset_slider_pane_t1

0x67a2,	// (0x00062c81) main_cset_slider_pane_t2

0x67bc,	// (0x00062c9b) main_cset_slider_pane_t3

0x67d6,	// (0x00062cb5) main_cset_slider_pane_t4

0x67f0,	// (0x00062ccf) main_cset_slider_pane_t5

0x680a,	// (0x00062ce9) main_cset_slider_pane_t6

0x681f,	// (0x00062cfe) main_cset_slider_pane_t7

0x000e,

0xf99f,	// (0x0006be7e) main_cset_slider_pane_t

0x6923,	// (0x00062e02) cset_list_set_pane_ParamLimits

0x6923,	// (0x00062e02) cset_list_set_pane

0x6935,	// (0x00062e14) aid_position_infowindow_above

0x693d,	// (0x00062e1c) aid_position_infowindow_below

0x6945,	// (0x00062e24) cset_list_set_pane_g1_ParamLimits

0x6945,	// (0x00062e24) cset_list_set_pane_g1

0x6951,	// (0x00062e30) cset_list_set_pane_g3_ParamLimits

0x6951,	// (0x00062e30) cset_list_set_pane_g3

0x0001,

0xf9be,	// (0x0006be9d) cset_list_set_pane_g_ParamLimits

0xf9be,	// (0x0006be9d) cset_list_set_pane_g

0x6960,	// (0x00062e3f) cset_list_set_pane_t1_ParamLimits

0x6960,	// (0x00062e3f) cset_list_set_pane_t1

0xc21b,	// (0x000686fa) list_highlight_pane_cp021_ParamLimits

0xc21b,	// (0x000686fa) list_highlight_pane_cp021

0xaf21,	// (0x00067400) cset_slider_pane_g1

0xaf33,	// (0x00067412) cset_slider_pane_g2

0xaf2a,	// (0x00067409) cset_slider_pane_g3

0x0002,

0xf9c3,	// (0x0006bea2) cset_slider_pane_g

0xdd32,	// (0x0006a211) aid_area_touch_cam4_zoom

0xdd3a,	// (0x0006a219) cam4_zoom_cont_pane

0xdd42,	// (0x0006a221) cam4_zoom_pane_g1

0xdd4a,	// (0x0006a229) cam4_zoom_pane_g2

0x6975,	// (0x00062e54) cam4_zoom_pane_g3

0x0002,

0xf9ca,	// (0x0006bea9) cam4_zoom_pane_g

0xdd52,	// (0x0006a231) cam4_zoom_cont_pane_g1

0xdd5b,	// (0x0006a23a) cam4_zoom_cont_pane_g2

0xdd64,	// (0x0006a243) cam4_zoom_cont_pane_g3

0x0002,

0xf9d1,	// (0x0006beb0) cam4_zoom_cont_pane_g

0x5d9d,	// (0x0006227c) call4_image_pane_ParamLimits

0x5d9d,	// (0x0006227c) call4_image_pane

0xd055,	// (0x00069534) call4_windows_conf_pane_ParamLimits

0xd096,	// (0x00069575) popup_call4_audio_in_window_ParamLimits

0xd096,	// (0x00069575) popup_call4_audio_in_window

0x0aa3,	// (0x0005cf82) bg_popup_call2_act_pane_cp02

0xd10c,	// (0x000695eb) call4_list_conf_pane

0xc721,	// (0x00068c00) call4_image_pane_g1

0xc721,	// (0x00068c00) call4_image_pane_g2

0x0001,

0xf6ec,	// (0x0006bbcb) call4_image_pane_g

0xe038,	// (0x0006a517) list_single_graphic_popup_conf4_pane_ParamLimits

0xe038,	// (0x0006a517) list_single_graphic_popup_conf4_pane

0x0aa3,	// (0x0005cf82) list_highlight_pane_cp022

0xe04b,	// (0x0006a52a) list_single_graphic_popup_conf4_pane_g1

0xabe0,	// (0x000670bf) list_single_graphic_popup_conf4_pane_g2

0x0001,

0xf9d8,	// (0x0006beb7) list_single_graphic_popup_conf4_pane_g

0xe053,	// (0x0006a532) list_single_graphic_popup_conf4_pane_t1

0x1be6,	// (0x0005e0c5) popup_vtel_slider_window_ParamLimits

0x1be6,	// (0x0005e0c5) popup_vtel_slider_window

0xd037,	// (0x00069516) dialer2_ne_pane_t2_ParamLimits

0xd037,	// (0x00069516) dialer2_ne_pane_t2

0x0001,

0xf8c0,	// (0x0006bd9f) dialer2_ne_pane_t_ParamLimits

0xf8c0,	// (0x0006bd9f) dialer2_ne_pane_t

0xc506,	// (0x000689e5) bg_popup_sub_pane_cp010_ParamLimits

0xc506,	// (0x000689e5) bg_popup_sub_pane_cp010

0x697d,	// (0x00062e5c) popup_vtel_slider_window_g1_ParamLimits

0x697d,	// (0x00062e5c) popup_vtel_slider_window_g1

0x6990,	// (0x00062e6f) popup_vtel_slider_window_g2_ParamLimits

0x6990,	// (0x00062e6f) popup_vtel_slider_window_g2

0x0003,

0xf9dd,	// (0x0006bebc) popup_vtel_slider_window_g_ParamLimits

0xf9dd,	// (0x0006bebc) popup_vtel_slider_window_g

0x69e6,	// (0x00062ec5) vtel_slider_pane_ParamLimits

0x69e6,	// (0x00062ec5) vtel_slider_pane

0x6a08,	// (0x00062ee7) vtel_slider_pane_g1_ParamLimits

0x6a08,	// (0x00062ee7) vtel_slider_pane_g1

0x6a1c,	// (0x00062efb) vtel_slider_pane_g2_ParamLimits

0x6a1c,	// (0x00062efb) vtel_slider_pane_g2

0x6a34,	// (0x00062f13) vtel_slider_pane_g3_ParamLimits

0x6a34,	// (0x00062f13) vtel_slider_pane_g3

0x6a08,	// (0x00062ee7) vtel_slider_pane_g4_ParamLimits

0x6a08,	// (0x00062ee7) vtel_slider_pane_g4

0x6a4a,	// (0x00062f29) vtel_slider_pane_g5_ParamLimits

0x6a4a,	// (0x00062f29) vtel_slider_pane_g5

0x0004,

0xf9e6,	// (0x0006bec5) vtel_slider_pane_g_ParamLimits

0xf9e6,	// (0x0006bec5) vtel_slider_pane_g

0x9a64,	// (0x00065f43) main_gallery2_pane

0x60dd,	// (0x000625bc) aid_size_row_itut2_dropdow_list_ParamLimits

0x60dd,	// (0x000625bc) aid_size_row_itut2_dropdow_list

0x6169,	// (0x00062648) grid_vitu2_function_top_pane_ParamLimits

0x6169,	// (0x00062648) grid_vitu2_function_top_pane

0x61ce,	// (0x000626ad) popup_vitu2_dropdown_list_window_ParamLimits

0x61ce,	// (0x000626ad) popup_vitu2_dropdown_list_window

0x61f7,	// (0x000626d6) popup_vitu2_match_list_window

0x6a6e,	// (0x00062f4d) cell_vitu2_function_top_pane_ParamLimits

0x6a6e,	// (0x00062f4d) cell_vitu2_function_top_pane

0x6a8c,	// (0x00062f6b) cell_vitu2_function_top_pane_cp01_ParamLimits

0x6a8c,	// (0x00062f6b) cell_vitu2_function_top_pane_cp01

0x6aaa,	// (0x00062f89) cell_vitu2_function_top_wide_pane_ParamLimits

0x6aaa,	// (0x00062f89) cell_vitu2_function_top_wide_pane

0x9a56,	// (0x00065f35) bg_button_pane_cp012

0x6ac8,	// (0x00062fa7) cell_vitu2_function_top_pane_g1

0xdd6d,	// (0x0006a24c) bg_button_pane_cp013_ParamLimits

0xdd6d,	// (0x0006a24c) bg_button_pane_cp013

0x6adc,	// (0x00062fbb) cell_vitu2_function_top_wide_pane_g1_ParamLimits

0x6adc,	// (0x00062fbb) cell_vitu2_function_top_wide_pane_g1

0x9a56,	// (0x00065f35) bg_popup_sub_pane_cp20

0x6af4,	// (0x00062fd3) list_vitu2_match_list_pane

0xde45,	// (0x0006a324) bg_popup_sub_pane_cp20_g1

0xde4d,	// (0x0006a32c) bg_popup_sub_pane_cp20_g2

0xa641,	// (0x00066b20) bg_popup_sub_pane_cp20_g3

0xde55,	// (0x0006a334) bg_popup_sub_pane_cp20_g4

0xa621,	// (0x00066b00) bg_popup_sub_pane_cp20_g5

0xe069,	// (0x0006a548) bg_popup_sub_pane_cp20_g6

0xde65,	// (0x0006a344) bg_popup_sub_pane_cp20_g7

0xde6d,	// (0x0006a34c) bg_popup_sub_pane_cp20_g8

0xde75,	// (0x0006a354) bg_popup_sub_pane_cp20_g9

0x0008,

0xf9f1,	// (0x0006bed0) bg_popup_sub_pane_cp20_g

0xdd89,	// (0x0006a268) list_vitu2_match_list_item_pane_ParamLimits

0xdd89,	// (0x0006a268) list_vitu2_match_list_item_pane

0xdd9b,	// (0x0006a27a) list_vitu2_match_list_item_pane_t1

0x9a64,	// (0x00065f43) bg_popup_sub_pane_cp21

0xdda9,	// (0x0006a288) grid_vitu2_dropdown_list_pane

0x6b5f,	// (0x0006303e) cell_vitu2_dropdown_list_char_pane_ParamLimits

0x6b5f,	// (0x0006303e) cell_vitu2_dropdown_list_char_pane

0x6b80,	// (0x0006305f) cell_vitu2_dropdown_list_ctrl_pane_ParamLimits

0x6b80,	// (0x0006305f) cell_vitu2_dropdown_list_ctrl_pane

0xe071,	// (0x0006a550) cell_vitu2_dropdown_list_char_pane_g1

0xe07a,	// (0x0006a559) cell_vitu2_dropdown_list_char_pane_g2

0xe083,	// (0x0006a562) cell_vitu2_dropdown_list_char_pane_g3

0x0002,

0x045d,	// (0x0005c93c) cell_vitu2_dropdown_list_char_pane_g

0x6bac,	// (0x0006308b) cell_vitu2_dropdown_list_char_pane_t1

0x6bba,	// (0x00063099) cell_vitu2_dropdown_list_ctrl_pane_g1_ParamLimits

0x6bba,	// (0x00063099) cell_vitu2_dropdown_list_ctrl_pane_g1

0x6bc7,	// (0x000630a6) cell_vitu2_dropdown_list_ctrl_pane_g2_ParamLimits

0x6bc7,	// (0x000630a6) cell_vitu2_dropdown_list_ctrl_pane_g2

0x6bd4,	// (0x000630b3) cell_vitu2_dropdown_list_ctrl_pane_g3_ParamLimits

0x6bd4,	// (0x000630b3) cell_vitu2_dropdown_list_ctrl_pane_g3

0x6be1,	// (0x000630c0) cell_vitu2_dropdown_list_ctrl_pane_g4_ParamLimits

0x6be1,	// (0x000630c0) cell_vitu2_dropdown_list_ctrl_pane_g4

0xdc02,	// (0x0006a0e1) cell_vitu2_dropdown_list_ctrl_pane_g5_ParamLimits

0xdc02,	// (0x0006a0e1) cell_vitu2_dropdown_list_ctrl_pane_g5

0x0004,

0xfa0e,	// (0x0006beed) cell_vitu2_dropdown_list_ctrl_pane_g_ParamLimits

0xfa0e,	// (0x0006beed) cell_vitu2_dropdown_list_ctrl_pane_g

0x6bfd,	// (0x000630dc) aid_size_cell_gallery2_ParamLimits

0x6bfd,	// (0x000630dc) aid_size_cell_gallery2

0x6c13,	// (0x000630f2) grid_gallery2_pane_ParamLimits

0x6c13,	// (0x000630f2) grid_gallery2_pane

0x6c27,	// (0x00063106) scroll_pane_cp029_ParamLimits

0x6c27,	// (0x00063106) scroll_pane_cp029

0x6c33,	// (0x00063112) cell_gallery2_pane_ParamLimits

0x6c33,	// (0x00063112) cell_gallery2_pane

0xe08c,	// (0x0006a56b) cell_gallery2_pane_g2

0x6c69,	// (0x00063148) cell_gallery2_pane_g3

0xe096,	// (0x0006a575) cell_gallery2_pane_g4

0xe09e,	// (0x0006a57d) cell_gallery2_pane_g5

0xadcb,	// (0x000672aa) grid_highlight_pane_cp10

0x61f7,	// (0x000626d6) popup_vitu2_match_list_window_ParamLimits

0x620e,	// (0x000626ed) popup_vitu2_query_window_ParamLimits

0x620e,	// (0x000626ed) popup_vitu2_query_window

0x9a64,	// (0x00065f43) bg_vitu2_candi_button_pane

0xe071,	// (0x0006a550) cell_vitu2_dropdown_list_char_pane_g1_copy1

0xe07a,	// (0x0006a559) cell_vitu2_dropdown_list_char_pane_g2_copy1

0xe083,	// (0x0006a562) cell_vitu2_dropdown_list_char_pane_g2_copy2

0x6c71,	// (0x00063150) bg_button_pane_cp015

0x6c83,	// (0x00063162) bg_button_pane_cp016

0x6c96,	// (0x00063175) bg_button_pane_cp017

0xc20d,	// (0x000686ec) bg_popup_sub_pane_cp22

0xe0a6,	// (0x0006a585) popup_vitu2_query_window_g1

0x6cdb,	// (0x000631ba) popup_vitu2_query_window_g2

0x0002,

0xfa19,	// (0x0006bef8) popup_vitu2_query_window_g

0x6cfa,	// (0x000631d9) popup_vitu2_query_window_t1_ParamLimits

0x6cfa,	// (0x000631d9) popup_vitu2_query_window_t1

0x6d2f,	// (0x0006320e) popup_vitu2_query_window_t2_ParamLimits

0x6d2f,	// (0x0006320e) popup_vitu2_query_window_t2

0x6d41,	// (0x00063220) popup_vitu2_query_window_t3_ParamLimits

0x6d41,	// (0x00063220) popup_vitu2_query_window_t3

0x6d69,	// (0x00063248) popup_vitu2_query_window_t4_ParamLimits

0x6d69,	// (0x00063248) popup_vitu2_query_window_t4

0x6d8a,	// (0x00063269) popup_vitu2_query_window_t5_ParamLimits

0x6d8a,	// (0x00063269) popup_vitu2_query_window_t5

0x0006,

0xfa20,	// (0x0006beff) popup_vitu2_query_window_t_ParamLimits

0xfa20,	// (0x0006beff) popup_vitu2_query_window_t

0xdf47,	// (0x0006a426) main_cset_text_pane

0x668b,	// (0x00062b6a) aid_area_touch_slider_ParamLimits

0x66a7,	// (0x00062b86) cset_slider_pane_ParamLimits

0x66d1,	// (0x00062bb0) main_cset_slider_pane_g1_ParamLimits

0x66e6,	// (0x00062bc5) main_cset_slider_pane_g2_ParamLimits

0xdf68,	// (0x0006a447) main_cset_slider_pane_g3_ParamLimits

0xdf68,	// (0x0006a447) main_cset_slider_pane_g3

0x66fb,	// (0x00062bda) main_cset_slider_pane_g4_ParamLimits

0x66fb,	// (0x00062bda) main_cset_slider_pane_g4

0x670a,	// (0x00062be9) main_cset_slider_pane_g5_ParamLimits

0x670a,	// (0x00062be9) main_cset_slider_pane_g5

0x6716,	// (0x00062bf5) main_cset_slider_pane_g6_ParamLimits

0x6716,	// (0x00062bf5) main_cset_slider_pane_g6

0xf97a,	// (0x0006be59) main_cset_slider_pane_g_ParamLimits

0xdf98,	// (0x0006a477) main_cset_slider_pane_t1_ParamLimits

0x67a2,	// (0x00062c81) main_cset_slider_pane_t2_ParamLimits

0x67bc,	// (0x00062c9b) main_cset_slider_pane_t3_ParamLimits

0x67d6,	// (0x00062cb5) main_cset_slider_pane_t4_ParamLimits

0x67f0,	// (0x00062ccf) main_cset_slider_pane_t5_ParamLimits

0x680a,	// (0x00062ce9) main_cset_slider_pane_t6_ParamLimits

0x681f,	// (0x00062cfe) main_cset_slider_pane_t7_ParamLimits

0x6849,	// (0x00062d28) main_cset_slider_pane_t8_ParamLimits

0x6849,	// (0x00062d28) main_cset_slider_pane_t8

0x6871,	// (0x00062d50) main_cset_slider_pane_t9_ParamLimits

0x6871,	// (0x00062d50) main_cset_slider_pane_t9

0x6899,	// (0x00062d78) main_cset_slider_pane_t10_ParamLimits

0x6899,	// (0x00062d78) main_cset_slider_pane_t10

0x68c1,	// (0x00062da0) main_cset_slider_pane_t11_ParamLimits

0x68c1,	// (0x00062da0) main_cset_slider_pane_t11

0x68e9,	// (0x00062dc8) main_cset_slider_pane_t12_ParamLimits

0x68e9,	// (0x00062dc8) main_cset_slider_pane_t12

0x6906,	// (0x00062de5) main_cset_slider_pane_t13_ParamLimits

0x6906,	// (0x00062de5) main_cset_slider_pane_t13

0xf99f,	// (0x0006be7e) main_cset_slider_pane_t_ParamLimits

0x0aa3,	// (0x0005cf82) bg_popup_sub_pane_cp011

0xe0b2,	// (0x0006a591) main_cset_text_pane_g1

0xe0ba,	// (0x0006a599) main_cset_text_pane_t1

0xe0c8,	// (0x0006a5a7) main_cset_text_pane_t2

0xe0d6,	// (0x0006a5b5) main_cset_text_pane_t3

0xe0e4,	// (0x0006a5c3) main_cset_text_pane_t4

0xe0f2,	// (0x0006a5d1) main_cset_text_pane_t5

0xe100,	// (0x0006a5df) main_cset_text_pane_t6

0xe10e,	// (0x0006a5ed) main_cset_text_pane_t7

0x0006,

0x0485,	// (0x0005c964) main_cset_text_pane_t

0x9a64,	// (0x00065f43) main_cam4_burst_pane

0x9a64,	// (0x00065f43) main_cam5_pane

0x65ca,	// (0x00062aa9) bg_button_pane_cp019

0x65d3,	// (0x00062ab2) bg_button_pane_cp020

0xdf74,	// (0x0006a453) main_cset_slider_pane_g7_ParamLimits

0xdf74,	// (0x0006a453) main_cset_slider_pane_g7

0xdf80,	// (0x0006a45f) main_cset_slider_pane_g8_ParamLimits

0xdf80,	// (0x0006a45f) main_cset_slider_pane_g8

0x672a,	// (0x00062c09) main_cset_slider_pane_g9_ParamLimits

0x672a,	// (0x00062c09) main_cset_slider_pane_g9

0x6736,	// (0x00062c15) main_cset_slider_pane_g10_ParamLimits

0x6736,	// (0x00062c15) main_cset_slider_pane_g10

0x6742,	// (0x00062c21) main_cset_slider_pane_g11_ParamLimits

0x6742,	// (0x00062c21) main_cset_slider_pane_g11

0x674e,	// (0x00062c2d) main_cset_slider_pane_g12_ParamLimits

0x674e,	// (0x00062c2d) main_cset_slider_pane_g12

0x675a,	// (0x00062c39) main_cset_slider_pane_g13_ParamLimits

0x675a,	// (0x00062c39) main_cset_slider_pane_g13

0x6766,	// (0x00062c45) main_cset_slider_pane_g14_ParamLimits

0x6766,	// (0x00062c45) main_cset_slider_pane_g14

0x6772,	// (0x00062c51) main_cset_slider_pane_g15_ParamLimits

0x6772,	// (0x00062c51) main_cset_slider_pane_g15

0xdfc6,	// (0x0006a4a5) main_cset_slider_pane_t14_ParamLimits

0xdfc6,	// (0x0006a4a5) main_cset_slider_pane_t14

0xdfff,	// (0x0006a4de) main_cset_slider_pane_t15_ParamLimits

0xdfff,	// (0x0006a4de) main_cset_slider_pane_t15

0x6e01,	// (0x000632e0) aid_cam4_burst_size_cell_ParamLimits

0x6e01,	// (0x000632e0) aid_cam4_burst_size_cell

0x6e21,	// (0x00063300) grid_cam4_burst_pane_ParamLimits

0x6e21,	// (0x00063300) grid_cam4_burst_pane

0x6e59,	// (0x00063338) linegrid_cam4_burst_pane_ParamLimits

0x6e59,	// (0x00063338) linegrid_cam4_burst_pane

0xe809,	// (0x0006ace8) scroll_pane_cp30_ParamLimits

0xe809,	// (0x0006ace8) scroll_pane_cp30

0x6e7d,	// (0x0006335c) cell_cam4_burst_pane_ParamLimits

0x6e7d,	// (0x0006335c) cell_cam4_burst_pane

0xe11c,	// (0x0006a5fb) linegrid_cam4_burst_pane_g1_ParamLimits

0xe11c,	// (0x0006a5fb) linegrid_cam4_burst_pane_g1

0x6eca,	// (0x000633a9) linegrid_cam4_burst_pane_g2_ParamLimits

0x6eca,	// (0x000633a9) linegrid_cam4_burst_pane_g2

0xe129,	// (0x0006a608) linegrid_cam4_burst_pane_g3_ParamLimits

0xe129,	// (0x0006a608) linegrid_cam4_burst_pane_g3

0x0002,

0xfa2f,	// (0x0006bf0e) linegrid_cam4_burst_pane_g_ParamLimits

0xfa2f,	// (0x0006bf0e) linegrid_cam4_burst_pane_g

0x6edb,	// (0x000633ba) linegrid_cam4_burst_pane_g3_copy1_ParamLimits

0x6edb,	// (0x000633ba) linegrid_cam4_burst_pane_g3_copy1

0xe136,	// (0x0006a615) linegrid_cam4_burst_pane_g4_ParamLimits

0xe136,	// (0x0006a615) linegrid_cam4_burst_pane_g4

0x6ef5,	// (0x000633d4) linegrid_cam4_burst_pane_g5_ParamLimits

0x6ef5,	// (0x000633d4) linegrid_cam4_burst_pane_g5

0x6f06,	// (0x000633e5) linegrid_cam4_burst_pane_g6_ParamLimits

0x6f06,	// (0x000633e5) linegrid_cam4_burst_pane_g6

0xe143,	// (0x0006a622) linegrid_cam4_burst_pane_g7_ParamLimits

0xe143,	// (0x0006a622) linegrid_cam4_burst_pane_g7

0x6f1d,	// (0x000633fc) cell_cam4_burst_pane_g1

0xe15c,	// (0x0006a63b) main_cam5_pane_t1_ParamLimits

0xe15c,	// (0x0006a63b) main_cam5_pane_t1

0xe16e,	// (0x0006a64d) main_cam5_pane_t2_ParamLimits

0xe16e,	// (0x0006a64d) main_cam5_pane_t2

0xe180,	// (0x0006a65f) main_cam5_pane_t3_ParamLimits

0xe180,	// (0x0006a65f) main_cam5_pane_t3

0xe192,	// (0x0006a671) main_cam5_pane_t4_ParamLimits

0xe192,	// (0x0006a671) main_cam5_pane_t4

0xe1aa,	// (0x0006a689) main_cam5_pane_t5_ParamLimits

0xe1aa,	// (0x0006a689) main_cam5_pane_t5

0xe1be,	// (0x0006a69d) main_cam5_pane_t6_ParamLimits

0xe1be,	// (0x0006a69d) main_cam5_pane_t6

0xe1d2,	// (0x0006a6b1) main_cam5_pane_t7_ParamLimits

0xe1d2,	// (0x0006a6b1) main_cam5_pane_t7

0xe1e4,	// (0x0006a6c3) main_cam5_pane_t8_ParamLimits

0xe1e4,	// (0x0006a6c3) main_cam5_pane_t8

0xe200,	// (0x0006a6df) main_cam5_pane_t9_ParamLimits

0xe200,	// (0x0006a6df) main_cam5_pane_t9

0xe212,	// (0x0006a6f1) main_cam5_pane_t10_ParamLimits

0xe212,	// (0x0006a6f1) main_cam5_pane_t10

0xe224,	// (0x0006a703) main_cam5_pane_t11_ParamLimits

0xe224,	// (0x0006a703) main_cam5_pane_t11

0xe236,	// (0x0006a715) main_cam5_pane_t12_ParamLimits

0xe236,	// (0x0006a715) main_cam5_pane_t12

0xe24b,	// (0x0006a72a) main_cam5_pane_t13_ParamLimits

0xe24b,	// (0x0006a72a) main_cam5_pane_t13

0x000c,

0x04a0,	// (0x0005c97f) main_cam5_pane_t_ParamLimits

0x04a0,	// (0x0005c97f) main_cam5_pane_t

0x0c75,	// (0x0005d154) popup_scut_keymap_window_ParamLimits

0x0c75,	// (0x0005d154) popup_scut_keymap_window

0x6f30,	// (0x0006340f) aid_size_cell_brow_shortcut

0xadcb,	// (0x000672aa) bg_popup_window_pane_cp010

0x6f3c,	// (0x0006341b) grid_scut_pane

0x6f48,	// (0x00063427) cell_scut_pane_ParamLimits

0x6f48,	// (0x00063427) cell_scut_pane

0x6f5f,	// (0x0006343e) cell_scut_pane_g1

0xe268,	// (0x0006a747) cell_scut_pane_t1

0xe277,	// (0x0006a756) cell_scut_pane_t2

0x6f68,	// (0x00063447) cell_scut_pane_t3

0x0002,

0xfa3b,	// (0x0006bf1a) cell_scut_pane_t

0x4ca5,	// (0x00061184) main_mup3_pane_g8_ParamLimits

0x4ca5,	// (0x00061184) main_mup3_pane_g8

0x60f5,	// (0x000625d4) area_vitu2_query_pane_ParamLimits

0x60f5,	// (0x000625d4) area_vitu2_query_pane

0x6ca9,	// (0x00063188) input_focus_pane_cp08

0xe286,	// (0x0006a765) area_vitu2_query_pane_g1

0x6f76,	// (0x00063455) area_vitu2_query_pane_g2

0x0001,

0xfa42,	// (0x0006bf21) area_vitu2_query_pane_g

0x6f87,	// (0x00063466) area_vitu2_query_pane_t1_ParamLimits

0x6f87,	// (0x00063466) area_vitu2_query_pane_t1

0x6f9b,	// (0x0006347a) area_vitu2_query_pane_t2_ParamLimits

0x6f9b,	// (0x0006347a) area_vitu2_query_pane_t2

0x6faf,	// (0x0006348e) area_vitu2_query_pane_t3_ParamLimits

0x6faf,	// (0x0006348e) area_vitu2_query_pane_t3

0x6fd7,	// (0x000634b6) area_vitu2_query_pane_t4_ParamLimits

0x6fd7,	// (0x000634b6) area_vitu2_query_pane_t4

0x6fff,	// (0x000634de) area_vitu2_query_pane_t5_ParamLimits

0x6fff,	// (0x000634de) area_vitu2_query_pane_t5

0x7027,	// (0x00063506) area_vitu2_query_pane_t6_ParamLimits

0x7027,	// (0x00063506) area_vitu2_query_pane_t6

0x0006,

0xfa47,	// (0x0006bf26) area_vitu2_query_pane_t_ParamLimits

0xfa47,	// (0x0006bf26) area_vitu2_query_pane_t

0x7073,	// (0x00063552) bg_button_pane_cp018

0x7081,	// (0x00063560) bg_button_pane_cp021

0x708d,	// (0x0006356c) bg_button_pane_cp022

0x709c,	// (0x0006357b) input_focus_pane_cp09

0x2bee,	// (0x0005f0cd) aid_size_touch_mv_arrow_left

0x2c17,	// (0x0005f0f6) aid_size_touch_mv_arrow_right

0x678a,	// (0x00062c69) main_cset_slider_pane_g16_ParamLimits

0x678a,	// (0x00062c69) main_cset_slider_pane_g16

0x6796,	// (0x00062c75) main_cset_slider_pane_g17_ParamLimits

0x6796,	// (0x00062c75) main_cset_slider_pane_g17

0x6f1d,	// (0x000633fc) cell_cam4_burst_pane_g1_ParamLimits

0x0aa3,	// (0x0005cf82) compa_mode_pane

0x69a0,	// (0x00062e7f) popup_vtel_slider_window_g3_ParamLimits

0x69a0,	// (0x00062e7f) popup_vtel_slider_window_g3

0x69b7,	// (0x00062e96) popup_vtel_slider_window_g4_ParamLimits

0x69b7,	// (0x00062e96) popup_vtel_slider_window_g4

0x69ce,	// (0x00062ead) popup_vtel_slider_window_t1_ParamLimits

0x69ce,	// (0x00062ead) popup_vtel_slider_window_t1

0x9a64,	// (0x00065f43) main_cl_pane

0xc243,	// (0x00068722) popup_imed_adjust2_window_ParamLimits

0xc20d,	// (0x000686ec) bg_tb_trans_pane_cp05_ParamLimits

0xcc26,	// (0x00069105) popup_imed_adjust2_window_g1_ParamLimits

0xcc35,	// (0x00069114) popup_imed_adjust2_window_g2_ParamLimits

0xcc35,	// (0x00069114) popup_imed_adjust2_window_g2

0xcc41,	// (0x00069120) popup_imed_adjust2_window_g3_ParamLimits

0xcc41,	// (0x00069120) popup_imed_adjust2_window_g3

0x0002,

0xf7ea,	// (0x0006bcc9) popup_imed_adjust2_window_g_ParamLimits

0xf7ea,	// (0x0006bcc9) popup_imed_adjust2_window_g

0xcc4d,	// (0x0006912c) popup_imed_adjust2_window_t1_ParamLimits

0xcc65,	// (0x00069144) slider_imed_adjust_pane_ParamLimits

0xcc79,	// (0x00069158) slider_imed_adjust_pane_g1_ParamLimits

0xcc89,	// (0x00069168) slider_imed_adjust_pane_g2_ParamLimits

0xcc99,	// (0x00069178) slider_imed_adjust_pane_g3_ParamLimits

0xccaa,	// (0x00069189) slider_imed_adjust_pane_g4_ParamLimits

0xf7f1,	// (0x0006bcd0) slider_imed_adjust_pane_g_ParamLimits

0x5e7e,	// (0x0006235d) aid_touch_area_cam4_ParamLimits

0x5e7e,	// (0x0006235d) aid_touch_area_cam4

0xdbe6,	// (0x0006a0c5) battery_pane_cp01

0x5f4d,	// (0x0006242c) main_camera4_pane_g6_ParamLimits

0x5f4d,	// (0x0006242c) main_camera4_pane_g6

0x5f77,	// (0x00062456) main_camera4_pane_t2_ParamLimits

0x5f77,	// (0x00062456) main_camera4_pane_t2

0x0001,

0xf8f4,	// (0x0006bdd3) main_camera4_pane_t_ParamLimits

0xf8f4,	// (0x0006bdd3) main_camera4_pane_t

0x5fac,	// (0x0006248b) aid_touch_area_vid4_ParamLimits

0x5fac,	// (0x0006248b) aid_touch_area_vid4

0x6000,	// (0x000624df) main_video4_pane_g5_ParamLimits

0x6000,	// (0x000624df) main_video4_pane_g5

0x6025,	// (0x00062504) vid4_progress_pane_ParamLimits

0x6025,	// (0x00062504) vid4_progress_pane

0xdf8c,	// (0x0006a46b) main_cset_slider_pane_g18_ParamLimits

0xdf8c,	// (0x0006a46b) main_cset_slider_pane_g18

0xe150,	// (0x0006a62f) cell_cam4_burst_pane_g2_ParamLimits

0xe150,	// (0x0006a62f) cell_cam4_burst_pane_g2

0x0001,

0xfa36,	// (0x0006bf15) cell_cam4_burst_pane_g_ParamLimits

0xfa36,	// (0x0006bf15) cell_cam4_burst_pane_g

0xa1d1,	// (0x000666b0) bg_cl_pane_ParamLimits

0xa1d1,	// (0x000666b0) bg_cl_pane

0x70ab,	// (0x0006358a) cl_header_pane_ParamLimits

0x70ab,	// (0x0006358a) cl_header_pane

0x70bf,	// (0x0006359e) cl_listscroll_pane_ParamLimits

0x70bf,	// (0x0006359e) cl_listscroll_pane

0xe292,	// (0x0006a771) bg_cl_pane_g1

0xe29a,	// (0x0006a779) bg_cl_pane_g2

0xe2a2,	// (0x0006a781) bg_cl_pane_g3

0xe2aa,	// (0x0006a789) bg_cl_pane_g4

0xe2b2,	// (0x0006a791) bg_cl_pane_g5

0xe2ba,	// (0x0006a799) bg_cl_pane_g6

0xe2c2,	// (0x0006a7a1) bg_cl_pane_g7

0xe2ca,	// (0x0006a7a9) bg_cl_pane_g8

0xe2d2,	// (0x0006a7b1) bg_cl_pane_g9

0x0008,

0x04d6,	// (0x0005c9b5) bg_cl_pane_g

0x70cf,	// (0x000635ae) aid_height_cl_leading_ParamLimits

0x70cf,	// (0x000635ae) aid_height_cl_leading

0x70db,	// (0x000635ba) aid_height_cl_text_ParamLimits

0x70db,	// (0x000635ba) aid_height_cl_text

0xc21b,	// (0x000686fa) bg_cl_header_pane_ParamLimits

0xc21b,	// (0x000686fa) bg_cl_header_pane

0x70fa,	// (0x000635d9) cl_header_pane_g1_ParamLimits

0x70fa,	// (0x000635d9) cl_header_pane_g1

0x7110,	// (0x000635ef) cl_header_pane_t1_ParamLimits

0x7110,	// (0x000635ef) cl_header_pane_t1

0xe2da,	// (0x0006a7b9) cl_list_pane

0xdf5f,	// (0x0006a43e) hc_scroll_pane_cp01

0xa621,	// (0x00066b00) bg_cl_header_pane_g1

0xde45,	// (0x0006a324) bg_cl_header_pane_g2

0xa641,	// (0x00066b20) bg_cl_header_pane_g3

0xde55,	// (0x0006a334) bg_cl_header_pane_g4

0xde4d,	// (0x0006a32c) bg_cl_header_pane_g5

0xe069,	// (0x0006a548) bg_cl_header_pane_g6

0xde6d,	// (0x0006a34c) bg_cl_header_pane_g7

0xde75,	// (0x0006a354) bg_cl_header_pane_g8

0xde65,	// (0x0006a344) bg_cl_header_pane_g9

0x0008,

0xfa56,	// (0x0006bf35) bg_cl_header_pane_g

0x7129,	// (0x00063608) hc_cl_list_double_graphic_heading_pane_ParamLimits

0x7129,	// (0x00063608) hc_cl_list_double_graphic_heading_pane

0x713a,	// (0x00063619) hc_cl_list_single_graphic_pane_ParamLimits

0x713a,	// (0x00063619) hc_cl_list_single_graphic_pane

0x7150,	// (0x0006362f) hc_cl_list_single_graphic_pane_g1_ParamLimits

0x7150,	// (0x0006362f) hc_cl_list_single_graphic_pane_g1

0x715c,	// (0x0006363b) hc_cl_list_single_graphic_pane_g2_ParamLimits

0x715c,	// (0x0006363b) hc_cl_list_single_graphic_pane_g2

0x0001,

0xfa69,	// (0x0006bf48) hc_cl_list_single_graphic_pane_g_ParamLimits

0xfa69,	// (0x0006bf48) hc_cl_list_single_graphic_pane_g

0x7170,	// (0x0006364f) hc_cl_list_single_graphic_pane_t1_ParamLimits

0x7170,	// (0x0006364f) hc_cl_list_single_graphic_pane_t1

0x7150,	// (0x0006362f) hc_cl_list_double_graphic_heading_pane_g1_ParamLimits

0x7150,	// (0x0006362f) hc_cl_list_double_graphic_heading_pane_g1

0x7185,	// (0x00063664) hc_cl_list_double_graphic_heading_pane_g2_ParamLimits

0x7185,	// (0x00063664) hc_cl_list_double_graphic_heading_pane_g2

0x7199,	// (0x00063678) hc_cl_list_double_graphic_heading_pane_g3_ParamLimits

0x7199,	// (0x00063678) hc_cl_list_double_graphic_heading_pane_g3

0x0002,

0xfa6e,	// (0x0006bf4d) hc_cl_list_double_graphic_heading_pane_g_ParamLimits

0xfa6e,	// (0x0006bf4d) hc_cl_list_double_graphic_heading_pane_g

0x71ad,	// (0x0006368c) hc_cl_list_double_graphic_heading_pane_t1_ParamLimits

0x71ad,	// (0x0006368c) hc_cl_list_double_graphic_heading_pane_t1

0x71c2,	// (0x000636a1) hc_cl_list_double_graphic_heading_pane_t2_ParamLimits

0x71c2,	// (0x000636a1) hc_cl_list_double_graphic_heading_pane_t2

0x0001,

0xfa75,	// (0x0006bf54) hc_cl_list_double_graphic_heading_pane_t_ParamLimits

0xfa75,	// (0x0006bf54) hc_cl_list_double_graphic_heading_pane_t

0x71d7,	// (0x000636b6) vid4_progress_pane_g1

0x71e9,	// (0x000636c8) vid4_progress_pane_g2

0xa914,	// (0x00066df3) vid4_progress_pane_g3

0xddb9,	// (0x0006a298) vid4_progress_pane_g4

0x0004,

0xfa7a,	// (0x0006bf59) vid4_progress_pane_g

0xddd7,	// (0x0006a2b6) vid4_progress_pane_t1

0xddec,	// (0x0006a2cb) vid4_progress_pane_t2

0x0002,

0xfa85,	// (0x0006bf64) vid4_progress_pane_t

0xde17,	// (0x0006a2f6) wait_bar_pane_cp07

0xc514,	// (0x000689f3) blid_firmament_pane_ParamLimits

0xc557,	// (0x00068a36) popup_blid_sat_info2_window_g1

0xc57b,	// (0x00068a5a) popup_blid_sat_info2_window_t3

0xc589,	// (0x00068a68) popup_blid_sat_info2_window_t4

0xc597,	// (0x00068a76) popup_blid_sat_info2_window_t5

0xc5a5,	// (0x00068a84) popup_blid_sat_info2_window_t6

0xc5b5,	// (0x00068a94) popup_blid_sat_info2_window_t7

0xc5c3,	// (0x00068aa2) popup_blid_sat_info2_window_t8

0xc5d1,	// (0x00068ab0) popup_blid_sat_info2_window_t9

0xc5df,	// (0x00068abe) popup_blid_sat_info2_window_t10

0xc6a1,	// (0x00068b80) aid_firma_cardinal_ParamLimits

0xc6b5,	// (0x00068b94) blid_firmament_pane_t1_ParamLimits

0xc6cc,	// (0x00068bab) blid_firmament_pane_t2_ParamLimits

0xc6e3,	// (0x00068bc2) blid_firmament_pane_t3_ParamLimits

0xc6fa,	// (0x00068bd9) blid_firmament_pane_t4_ParamLimits

0xf6e3,	// (0x0006bbc2) blid_firmament_pane_t_ParamLimits

0xc711,	// (0x00068bf0) blid_sat_info_pane_ParamLimits

0x9a56,	// (0x00065f35) main_cam_set_pane_ParamLimits

0x5557,	// (0x00061a36) aid_size_cell_colour_35_ParamLimits

0x5577,	// (0x00061a56) aid_size_cell_colour_112_ParamLimits

0x5597,	// (0x00061a76) aid_size_cell_effect_ParamLimits

0xc20d,	// (0x000686ec) bg_tb_trans_pane_cp02_ParamLimits

0xa89b,	// (0x00066d7a) heading_imed_pane_ParamLimits

0x55b7,	// (0x00061a96) listscroll_imed_pane_ParamLimits

0xb83f,	// (0x00067d1e) popup_call2_audio_first_window_g5_ParamLimits

0xb83f,	// (0x00067d1e) popup_call2_audio_first_window_g5

0x5b29,	// (0x00062008) aid_size_touch_image3_arrow_left_ParamLimits

0x5b29,	// (0x00062008) aid_size_touch_image3_arrow_left

0x5b55,	// (0x00062034) aid_size_touch_image3_arrow_right_ParamLimits

0x5b55,	// (0x00062034) aid_size_touch_image3_arrow_right

0xde02,	// (0x0006a2e1) vid4_progress_pane_t3

0x58ca,	// (0x00061da9) main_hwr_training_symbol_option_pane_ParamLimits

0x58ca,	// (0x00061da9) main_hwr_training_symbol_option_pane

0xcf13,	// (0x000693f2) popup_hwr_training_preview_window_ParamLimits

0xcf13,	// (0x000693f2) popup_hwr_training_preview_window

0x58ea,	// (0x00061dc9) hwr_training_navi_pane_g5_ParamLimits

0x58ea,	// (0x00061dc9) hwr_training_navi_pane_g5

0xdd20,	// (0x0006a1ff) popup_char_count_window

0x9a56,	// (0x00065f35) bg_popup_sub_pane_cp20_ParamLimits

0x6af4,	// (0x00062fd3) list_vitu2_match_list_pane_ParamLimits

0x6b03,	// (0x00062fe2) vitu2_page_scroll_pane_ParamLimits

0x6b03,	// (0x00062fe2) vitu2_page_scroll_pane

0xe2ec,	// (0x0006a7cb) list_single_hwr_training_symbol_option_pane_ParamLimits

0xe2ec,	// (0x0006a7cb) list_single_hwr_training_symbol_option_pane

0xe2ff,	// (0x0006a7de) list_single_hwr_training_symbol_option_pane_g1

0xe307,	// (0x0006a7e6) list_single_hwr_training_symbol_option_pane_t1

0xe315,	// (0x0006a7f4) bg_button_pane_cp023

0xe31e,	// (0x0006a7fd) bg_button_pane_cp024

0x724c,	// (0x0006372b) vitu2_page_scroll_pane_g1

0x7254,	// (0x00063733) vitu2_page_scroll_pane_g2

0x0001,

0xfa8c,	// (0x0006bf6b) vitu2_page_scroll_pane_g

0x725c,	// (0x0006373b) vitu2_page_scroll_pane_t1

0xe351,	// (0x0006a830) popup_char_count_window_g1

0xe35a,	// (0x0006a839) popup_char_count_window_g2

0xe363,	// (0x0006a842) popup_char_count_window_g3

0x0002,

0x0524,	// (0x0005ca03) popup_char_count_window_g

0xe36c,	// (0x0006a84b) popup_char_count_window_t1

0x9a64,	// (0x00065f43) main_vded2_pane

0xcc12,	// (0x000690f1) aid_size_cell_imed_line

0xcc1c,	// (0x000690fb) grid_imed_line_width_pane

0xdcac,	// (0x0006a18b) vid4_indicators_pane_g4

0xe37a,	// (0x0006a859) cell_imed_line_width_pane_ParamLimits

0xe37a,	// (0x0006a859) cell_imed_line_width_pane

0xe38e,	// (0x0006a86d) cell_imed_line_width_pane_g1

0xc4c2,	// (0x000689a1) cell_imed_line_width_pane_g2

0x0001,

0xfa91,	// (0x0006bf70) cell_imed_line_width_pane_g

0x726b,	// (0x0006374a) main_vded2_pane_g1_ParamLimits

0x726b,	// (0x0006374a) main_vded2_pane_g1

0x7281,	// (0x00063760) main_vded2_pane_g2_ParamLimits

0x7281,	// (0x00063760) main_vded2_pane_g2

0x0001,

0xfa96,	// (0x0006bf75) main_vded2_pane_g_ParamLimits

0xfa96,	// (0x0006bf75) main_vded2_pane_g

0x7293,	// (0x00063772) vded2_slider_pane_ParamLimits

0x7293,	// (0x00063772) vded2_slider_pane

0x72a3,	// (0x00063782) aid_size_touch_vded2_end

0x72ad,	// (0x0006378c) aid_size_touch_vded2_playhead

0xe397,	// (0x0006a876) aid_size_touch_vded2_start

0xe39f,	// (0x0006a87e) vded2_slider_bg_pane

0xe3a8,	// (0x0006a887) vded2_slider_pane_g1

0xe3b1,	// (0x0006a890) vded2_slider_pane_g2

0x72b7,	// (0x00063796) vded2_slider_pane_g3

0x0002,

0xfa9b,	// (0x0006bf7a) vded2_slider_pane_g

0xe3b9,	// (0x0006a898) vded2_slider_bg_pane_g1

0xe3c2,	// (0x0006a8a1) vded2_slider_bg_pane_g2

0xe3cb,	// (0x0006a8aa) vded2_slider_bg_pane_g3

0x0002,

0x053c,	// (0x0005ca1b) vded2_slider_bg_pane_g

0x32ae,	// (0x0005f78d) aid_postcard_touch_down_pane_ParamLimits

0x32ae,	// (0x0005f78d) aid_postcard_touch_down_pane

0x32c4,	// (0x0005f7a3) aid_postcard_touch_up_pane_ParamLimits

0x32c4,	// (0x0005f7a3) aid_postcard_touch_up_pane

0x9a64,	// (0x00065f43) main_blid2_pane

0xc229,	// (0x00068708) popup_blid2_search_window

0x0aa3,	// (0x0005cf82) blid2_gps_pane

0x0aa3,	// (0x0005cf82) blid2_navig_pane

0x0aa3,	// (0x0005cf82) blid2_search_pane

0x0aa3,	// (0x0005cf82) blid2_tripm_pane

0x72c2,	// (0x000637a1) blid2_search_pane_g1_ParamLimits

0x72c2,	// (0x000637a1) blid2_search_pane_g1

0x72dc,	// (0x000637bb) blid2_search_pane_t1_ParamLimits

0x72dc,	// (0x000637bb) blid2_search_pane_t1

0x72ee,	// (0x000637cd) aid_size_cell_blid2_gps_ParamLimits

0x72ee,	// (0x000637cd) aid_size_cell_blid2_gps

0x7306,	// (0x000637e5) blid2_gps_pane_g1_ParamLimits

0x7306,	// (0x000637e5) blid2_gps_pane_g1

0x731a,	// (0x000637f9) grid_blid2_satellite_pane_ParamLimits

0x731a,	// (0x000637f9) grid_blid2_satellite_pane

0x7334,	// (0x00063813) blid2_navig_pane_g1_ParamLimits

0x7334,	// (0x00063813) blid2_navig_pane_g1

0x7340,	// (0x0006381f) blid2_navig_pane_t1_ParamLimits

0x7340,	// (0x0006381f) blid2_navig_pane_t1

0x735b,	// (0x0006383a) blid2_navig_pane_t2_ParamLimits

0x735b,	// (0x0006383a) blid2_navig_pane_t2

0x0001,

0xfaa2,	// (0x0006bf81) blid2_navig_pane_t_ParamLimits

0xfaa2,	// (0x0006bf81) blid2_navig_pane_t

0x7376,	// (0x00063855) blid2_navig_ring_pane_ParamLimits

0x7376,	// (0x00063855) blid2_navig_ring_pane

0x738f,	// (0x0006386e) blid2_speed_pane_ParamLimits

0x738f,	// (0x0006386e) blid2_speed_pane

0x739b,	// (0x0006387a) blid2_tripm_pane_g1_ParamLimits

0x739b,	// (0x0006387a) blid2_tripm_pane_g1

0x73b4,	// (0x00063893) blid2_tripm_pane_g2_ParamLimits

0x73b4,	// (0x00063893) blid2_tripm_pane_g2

0x73c8,	// (0x000638a7) blid2_tripm_pane_g3_ParamLimits

0x73c8,	// (0x000638a7) blid2_tripm_pane_g3

0x73dc,	// (0x000638bb) blid2_tripm_pane_g4_ParamLimits

0x73dc,	// (0x000638bb) blid2_tripm_pane_g4

0x73f0,	// (0x000638cf) blid2_tripm_pane_g5_ParamLimits

0x73f0,	// (0x000638cf) blid2_tripm_pane_g5

0x0005,

0xfaa7,	// (0x0006bf86) blid2_tripm_pane_g_ParamLimits

0xfaa7,	// (0x0006bf86) blid2_tripm_pane_g

0x7416,	// (0x000638f5) blid2_tripm_pane_t1_ParamLimits

0x7416,	// (0x000638f5) blid2_tripm_pane_t1

0x7431,	// (0x00063910) blid2_tripm_pane_t2_ParamLimits

0x7431,	// (0x00063910) blid2_tripm_pane_t2

0x744a,	// (0x00063929) blid2_tripm_pane_t3_ParamLimits

0x744a,	// (0x00063929) blid2_tripm_pane_t3

0x0003,

0xfab4,	// (0x0006bf93) blid2_tripm_pane_t_ParamLimits

0xfab4,	// (0x0006bf93) blid2_tripm_pane_t

0x7491,	// (0x00063970) cell_blid2_satellite_pane_ParamLimits

0x7491,	// (0x00063970) cell_blid2_satellite_pane

0x74af,	// (0x0006398e) cell_blid2_satellite_pane_g1

0xe3d4,	// (0x0006a8b3) cell_blid2_satellite_pane_t1

0xc721,	// (0x00068c00) blid2_speed_pane_g1

0xe3e2,	// (0x0006a8c1) blid2_speed_pane_t1

0xe3f0,	// (0x0006a8cf) blid2_speed_pane_t2

0x0001,

0x055e,	// (0x0005ca3d) blid2_speed_pane_t

0xc721,	// (0x00068c00) blid2_navig_ring_pane_g1

0x74b8,	// (0x00063997) blid2_navig_ring_pane_g2

0x74c0,	// (0x0006399f) blid2_navig_ring_pane_g3

0x74c8,	// (0x000639a7) blid2_navig_ring_pane_g4

0x74d0,	// (0x000639af) blid2_navig_ring_pane_g5

0x0004,

0xfabd,	// (0x0006bf9c) blid2_navig_ring_pane_g

0x0aa3,	// (0x0005cf82) bg_popup_window_pane_cp011

0xe3fe,	// (0x0006a8dd) popup_blid2_search_window_g1

0xe406,	// (0x0006a8e5) popup_blid2_search_window_t1

0xe414,	// (0x0006a8f3) popup_blid2_search_window_t2

0x0001,

0x056e,	// (0x0005ca4d) popup_blid2_search_window_t

0xa530,	// (0x00066a0f) main_browser_pane_g1

0xa1d1,	// (0x000666b0) main_browser_pane_ParamLimits

0x9a56,	// (0x00065f35) bg_button_pane_cp011_ParamLimits

0x6366,	// (0x00062845) cell_vitu2_function_pane_g1_ParamLimits

0xc20d,	// (0x000686ec) bg_popup_sub_pane_cp22_ParamLimits

0x6ca9,	// (0x00063188) input_focus_pane_cp08_ParamLimits

0x6cc0,	// (0x0006319f) popup_vitu2_query_button_pane_ParamLimits

0x6cc0,	// (0x0006319f) popup_vitu2_query_button_pane

0x6cd1,	// (0x000631b0) popup_vitu2_query_input_button_pane

0xe0a6,	// (0x0006a585) popup_vitu2_query_window_g1_ParamLimits

0x6cdb,	// (0x000631ba) popup_vitu2_query_window_g2_ParamLimits

0xfa19,	// (0x0006bef8) popup_vitu2_query_window_g_ParamLimits

0x0aa3,	// (0x0005cf82) bg_button_pane_cp026

0x74d8,	// (0x000639b7) popup_vitu2_query_input_button_pane_g1

0x0aa3,	// (0x0005cf82) bg_button_pane_cp025

0xe422,	// (0x0006a901) popup_vitu2_query_button_pane_t1

0x4948,	// (0x00060e27) main_mp3_pane_t6

0x4956,	// (0x00060e35) popup_slider_window_cp01

0xdc10,	// (0x0006a0ef) cam4_battery_pane

0xdc69,	// (0x0006a148) cam4_battery_pane_cp02

0xddb1,	// (0x0006a290) cam4_battery_pane_cp01

0xddb1,	// (0x0006a290) cam4_battery_pane_cp03

0xd02d,	// (0x0006950c) cam4_battery_pane_g1

0xc721,	// (0x00068c00) cam4_battery_pane_g2

0x0001,

0xfac8,	// (0x0006bfa7) cam4_battery_pane_g

0xc5ed,	// (0x00068acc) popup_blid_sat_info2_window_t11

0x2bee,	// (0x0005f0cd) aid_size_touch_mv_arrow_left_ParamLimits

0x2c17,	// (0x0005f0f6) aid_size_touch_mv_arrow_right_ParamLimits

0xad2b,	// (0x0006720a) navi_pane_g1_ParamLimits

0x2c56,	// (0x0005f135) navi_pane_g2_ParamLimits

0x2c84,	// (0x0005f163) navi_pane_g3_ParamLimits

0xf3f5,	// (0x0006b8d4) navi_pane_g_ParamLimits

0x2cdc,	// (0x0005f1bb) navi_pane_mv_t1_ParamLimits

0x55c3,	// (0x00061aa2) grid_imed_effect_pane_ParamLimits

0x1ae3,	// (0x0005dfc2) aid_placing_vt_slider_lsc

0xa47f,	// (0x0006695e) aid_placing_vt_slider_prt

0xc21b,	// (0x000686fa) bg_tb_trans_pane_cp01_ParamLimits

0xc8ad,	// (0x00068d8c) popup_image_details_window_g1_ParamLimits

0xc8c0,	// (0x00068d9f) popup_image_details_window_g2_ParamLimits

0xc8d5,	// (0x00068db4) popup_image_details_window_g3_ParamLimits

0xc8d5,	// (0x00068db4) popup_image_details_window_g3

0xf728,	// (0x0006bc07) popup_image_details_window_g_ParamLimits

0xc8e9,	// (0x00068dc8) popup_image_details_window_t1_ParamLimits

0xc8fb,	// (0x00068dda) popup_image_details_window_t2_ParamLimits

0xc914,	// (0x00068df3) popup_image_details_window_t3_ParamLimits

0xc928,	// (0x00068e07) popup_image_details_window_t4_ParamLimits

0xc943,	// (0x00068e22) popup_image_details_window_t5_ParamLimits

0xf72f,	// (0x0006bc0e) popup_image_details_window_t_ParamLimits

0x70e7,	// (0x000635c6) cl_header_name_pane_ParamLimits

0x70e7,	// (0x000635c6) cl_header_name_pane

0x74e0,	// (0x000639bf) cl_header_name_pane_t1_ParamLimits

0x74e0,	// (0x000639bf) cl_header_name_pane_t1

0x7501,	// (0x000639e0) cl_header_name_pane_t2_ParamLimits

0x7501,	// (0x000639e0) cl_header_name_pane_t2

0x7543,	// (0x00063a22) cl_header_name_pane_t3_ParamLimits

0x7543,	// (0x00063a22) cl_header_name_pane_t3

0x0002,

0xfacd,	// (0x0006bfac) cl_header_name_pane_t_ParamLimits

0xfacd,	// (0x0006bfac) cl_header_name_pane_t

0x2cad,	// (0x0005f18c) navi_pane_mv_g2_ParamLimits

0xdcfa,	// (0x0006a1d9) field_vitu2_entry_pane_g1_ParamLimits

0xdd06,	// (0x0006a1e5) field_vitu2_entry_pane_g2_ParamLimits

0xdd12,	// (0x0006a1f1) field_vitu2_entry_pane_g3_ParamLimits

0xdd12,	// (0x0006a1f1) field_vitu2_entry_pane_g3

0xf926,	// (0x0006be05) field_vitu2_entry_pane_g_ParamLimits

0x62e2,	// (0x000627c1) cell_vitu2_itu_pane_g1_ParamLimits

0x62f2,	// (0x000627d1) cell_vitu2_itu_pane_g2_ParamLimits

0x62f2,	// (0x000627d1) cell_vitu2_itu_pane_g2

0x0001,

0xf932,	// (0x0006be11) cell_vitu2_itu_pane_g_ParamLimits

0xf932,	// (0x0006be11) cell_vitu2_itu_pane_g

0x9a56,	// (0x00065f35) bg_vkb2_func_pane_cp05_ParamLimits

0x9a56,	// (0x00065f35) bg_vkb2_func_pane_cp05

0x9a56,	// (0x00065f35) bg_vkb2_func_pane_cp03

0x9a56,	// (0x00065f35) bg_vkb2_func_pane_cp04

0x9a56,	// (0x00065f35) bg_vkb2_func_pane_cp10_ParamLimits

0x9a56,	// (0x00065f35) bg_vkb2_func_pane_cp10

0x708d,	// (0x0006356c) bg_vkb2_func_pane_cp08

0x7073,	// (0x00063552) bg_vkb2_func_pane_cp06

0x7081,	// (0x00063560) bg_vkb2_func_pane_cp07

0xe327,	// (0x0006a806) bg_vkb2_func_pane_cp11_ParamLimits

0xe327,	// (0x0006a806) bg_vkb2_func_pane_cp11

0xe33c,	// (0x0006a81b) bg_vkb2_func_pane_cp12_ParamLimits

0xe33c,	// (0x0006a81b) bg_vkb2_func_pane_cp12

0x0aa3,	// (0x0005cf82) bg_vkb2_func_pane_cp09

0xde45,	// (0x0006a324) bg_vkb2_func_pane_g1

0xa641,	// (0x00066b20) bg_vkb2_func_pane_g2

0xde4d,	// (0x0006a32c) bg_vkb2_func_pane_g3

0xde55,	// (0x0006a334) bg_vkb2_func_pane_g4

0xe069,	// (0x0006a548) bg_vkb2_func_pane_g5

0xde6d,	// (0x0006a34c) bg_vkb2_func_pane_g6

0xde75,	// (0x0006a354) bg_vkb2_func_pane_g7

0xde65,	// (0x0006a344) bg_vkb2_func_pane_g8

0xa621,	// (0x00066b00) bg_vkb2_func_pane_g9

0x0008,

0xfad4,	// (0x0006bfb3) bg_vkb2_func_pane_g

0x7404,	// (0x000638e3) blid2_tripm_pane_g6_ParamLimits

0x7404,	// (0x000638e3) blid2_tripm_pane_g6

0xcfe7,	// (0x000694c6) mp4_progress_pane_g1

0x747d,	// (0x0006395c) blid2_tripm_values_pane_ParamLimits

0x747d,	// (0x0006395c) blid2_tripm_values_pane

0x7574,	// (0x00063a53) blid2_tripm_values_pane_t1

0x7582,	// (0x00063a61) blid2_tripm_values_pane_t2

0x7590,	// (0x00063a6f) blid2_tripm_values_pane_t3

0x759e,	// (0x00063a7d) blid2_tripm_values_pane_t4

0x75ac,	// (0x00063a8b) blid2_tripm_values_pane_t5

0x75ba,	// (0x00063a99) blid2_tripm_values_pane_t6

0x75c8,	// (0x00063aa7) blid2_tripm_values_pane_t7

0x75d6,	// (0x00063ab5) blid2_tripm_values_pane_t8

0x75e4,	// (0x00063ac3) blid2_tripm_values_pane_t9

0x0008,

0xfae7,	// (0x0006bfc6) blid2_tripm_values_pane_t

0x1b25,	// (0x0005e004) call_video_pane_t1_ParamLimits

0x1b43,	// (0x0005e022) call_video_pane_t2_ParamLimits

0xf27e,	// (0x0006b75d) call_video_pane_t_ParamLimits

0x31b1,	// (0x0005f690) msg_header_pane_g1_ParamLimits

0xaf66,	// (0x00067445) msg_header_pane_g2_ParamLimits

0xaf66,	// (0x00067445) msg_header_pane_g2

0x0001,

0xf498,	// (0x0006b977) msg_header_pane_g_ParamLimits

0xf498,	// (0x0006b977) msg_header_pane_g

0xa1d1,	// (0x000666b0) main_clock2_pane_ParamLimits

0x52d6,	// (0x000617b5) grid_clock2_toolbar_pane_ParamLimits

0x52d6,	// (0x000617b5) grid_clock2_toolbar_pane

0x52d6,	// (0x000617b5) listscroll_clock2_pane_ParamLimits

0x52d6,	// (0x000617b5) listscroll_clock2_pane

0x53b8,	// (0x00061897) main_clock2_pane_t3_ParamLimits

0x53b8,	// (0x00061897) main_clock2_pane_t3

0x53db,	// (0x000618ba) main_clock2_pane_t4_ParamLimits

0x53db,	// (0x000618ba) main_clock2_pane_t4

0xe430,	// (0x0006a90f) cell_clock2_toolbar_pane

0xe438,	// (0x0006a917) cell_clock2_toolbar_pane_cp01

0xe438,	// (0x0006a917) cell_clock2_toolbar_pane_cp02

0xe440,	// (0x0006a91f) cell_clock2_toolbar_pane_cp03

0xe448,	// (0x0006a927) list_clock2_pane

0xac82,	// (0x00067161) scroll_pane_cp10

0xe450,	// (0x0006a92f) list_single_clock2_pane_ParamLimits

0xe450,	// (0x0006a92f) list_single_clock2_pane

0xadcb,	// (0x000672aa) list_highlight_pane_cp08

0xe45d,	// (0x0006a93c) list_single_clock2_pane_t1

0xe46b,	// (0x0006a94a) list_single_clock2_pane_t2

0x0001,

0x05a5,	// (0x0005ca84) list_single_clock2_pane_t

0x0aa3,	// (0x0005cf82) bg_button_pane_cp10

0xe479,	// (0x0006a958) cell_clock2_toolbar_pane_g1

0x323a,	// (0x0005f719) aid_main_viewer_pane_g1_ParamLimits

0x323a,	// (0x0005f719) aid_main_viewer_pane_g1

0x3248,	// (0x0005f727) aid_main_viewer_pane_g2_ParamLimits

0x3248,	// (0x0005f727) aid_main_viewer_pane_g2

0x3256,	// (0x0005f735) aid_main_viewer_pane_g3_ParamLimits

0x3256,	// (0x0005f735) aid_main_viewer_pane_g3

0x3265,	// (0x0005f744) aid_main_viewer_pane_g4_ParamLimits

0x3265,	// (0x0005f744) aid_main_viewer_pane_g4

0x0003,

0xf4a9,	// (0x0006b988) aid_main_viewer_pane_g_ParamLimits

0xf4a9,	// (0x0006b988) aid_main_viewer_pane_g

0x3b6b,	// (0x0006004a) main_calc_pane_ParamLimits

0x3b7f,	// (0x0006005e) main_dialer2_pane_ParamLimits

0x9a64,	// (0x00065f43) main_cam6_pane

0x9a64,	// (0x00065f43) main_vid6_pane

0x52e2,	// (0x000617c1) listscroll_gen_pane_cp06_ParamLimits

0x52e2,	// (0x000617c1) listscroll_gen_pane_cp06

0x53fe,	// (0x000618dd) main_clock2_pane_t5_ParamLimits

0x53fe,	// (0x000618dd) main_clock2_pane_t5

0x5458,	// (0x00061937) aid_call2_pane_cp10_ParamLimits

0x546a,	// (0x00061949) aid_call_pane_cp10_ParamLimits

0xad00,	// (0x000671df) popup_clock_analogue_window_cp10_g1_ParamLimits

0xad00,	// (0x000671df) popup_clock_analogue_window_cp10_g2_ParamLimits

0x547c,	// (0x0006195b) popup_clock_analogue_window_cp10_g3_ParamLimits

0x547c,	// (0x0006195b) popup_clock_analogue_window_cp10_g4_ParamLimits

0xad00,	// (0x000671df) popup_clock_analogue_window_cp10_g5_ParamLimits

0xf7df,	// (0x0006bcbe) popup_clock_analogue_window_cp10_g_ParamLimits

0x548e,	// (0x0006196d) popup_clock_analogue_window_cp10_t1_ParamLimits

0x5ad6,	// (0x00061fb5) cell_dialer2_keypad_pane_g2_ParamLimits

0x5ad6,	// (0x00061fb5) cell_dialer2_keypad_pane_g2

0x0001,

0xf8c5,	// (0x0006bda4) cell_dialer2_keypad_pane_g_ParamLimits

0xf8c5,	// (0x0006bda4) cell_dialer2_keypad_pane_g

0x5af2,	// (0x00061fd1) cell_dialer2_keypad_pane_t1

0x667d,	// (0x00062b5c) main_cset_text2_pane_ParamLimits

0x667d,	// (0x00062b5c) main_cset_text2_pane

0xe286,	// (0x0006a765) area_vitu2_query_pane_g1_ParamLimits

0x6f76,	// (0x00063455) area_vitu2_query_pane_g2_ParamLimits

0xfa42,	// (0x0006bf21) area_vitu2_query_pane_g_ParamLimits

0x704f,	// (0x0006352e) area_vitu2_query_pane_t7_ParamLimits

0x704f,	// (0x0006352e) area_vitu2_query_pane_t7

0x7073,	// (0x00063552) bg_button_pane_cp018_ParamLimits

0x7081,	// (0x00063560) bg_button_pane_cp021_ParamLimits

0x708d,	// (0x0006356c) bg_button_pane_cp022_ParamLimits

0x708d,	// (0x0006356c) bg_vkb2_func_pane_cp08_ParamLimits

0x7073,	// (0x00063552) bg_vkb2_func_pane_cp06_ParamLimits

0x7081,	// (0x00063560) bg_vkb2_func_pane_cp07_ParamLimits

0x709c,	// (0x0006357b) input_focus_pane_cp09_ParamLimits

0xde29,	// (0x0006a308) cam6_autofocus_pane_ParamLimits

0xde29,	// (0x0006a308) cam6_autofocus_pane

0x75f2,	// (0x00063ad1) cam6_image_uncrop_pane_ParamLimits

0x75f2,	// (0x00063ad1) cam6_image_uncrop_pane

0x7601,	// (0x00063ae0) cam6_indi_pane_ParamLimits

0x7601,	// (0x00063ae0) cam6_indi_pane

0x7617,	// (0x00063af6) cam6_mode_pane_ParamLimits

0x7617,	// (0x00063af6) cam6_mode_pane

0x7629,	// (0x00063b08) cam6_timer_pane_ParamLimits

0x7629,	// (0x00063b08) cam6_timer_pane

0x7635,	// (0x00063b14) cam6_zoom_pane_ParamLimits

0x7635,	// (0x00063b14) cam6_zoom_pane

0x7641,	// (0x00063b20) cam6_mode_pane_g1_ParamLimits

0x7641,	// (0x00063b20) cam6_mode_pane_g1

0x7651,	// (0x00063b30) cam6_mode_pane_g2_ParamLimits

0x7651,	// (0x00063b30) cam6_mode_pane_g2

0x7661,	// (0x00063b40) cam6_mode_pane_g3_ParamLimits

0x7661,	// (0x00063b40) cam6_mode_pane_g3

0x7671,	// (0x00063b50) cam6_mode_pane_g4_ParamLimits

0x7671,	// (0x00063b50) cam6_mode_pane_g4

0x0003,

0xfafa,	// (0x0006bfd9) cam6_mode_pane_g_ParamLimits

0xfafa,	// (0x0006bfd9) cam6_mode_pane_g

0xde37,	// (0x0006a316) bg_tb_trans_pane_cp08_ParamLimits

0xde37,	// (0x0006a316) bg_tb_trans_pane_cp08

0xe481,	// (0x0006a960) cam6_battery_pane_ParamLimits

0xe481,	// (0x0006a960) cam6_battery_pane

0xe497,	// (0x0006a976) cam6_indi_pane_g1_ParamLimits

0xe497,	// (0x0006a976) cam6_indi_pane_g1

0xe4a9,	// (0x0006a988) cam6_indi_pane_g2_ParamLimits

0xe4a9,	// (0x0006a988) cam6_indi_pane_g2

0xe4bb,	// (0x0006a99a) cam6_indi_pane_g3_ParamLimits

0xe4bb,	// (0x0006a99a) cam6_indi_pane_g3

0x0002,

0x05b3,	// (0x0005ca92) cam6_indi_pane_g_ParamLimits

0x05b3,	// (0x0005ca92) cam6_indi_pane_g

0xe4cd,	// (0x0006a9ac) cam6_indi_pane_t1_ParamLimits

0xe4cd,	// (0x0006a9ac) cam6_indi_pane_t1

0x7681,	// (0x00063b60) cam6_autofocus_pane_g1

0x7689,	// (0x00063b68) cam6_autofocus_pane_g2

0x7691,	// (0x00063b70) cam6_autofocus_pane_g3

0x7699,	// (0x00063b78) cam6_autofocus_pane_g4

0x0003,

0xfb03,	// (0x0006bfe2) cam6_autofocus_pane_g

0xe4f3,	// (0x0006a9d2) cam6_timer_pane_g1

0xe4fb,	// (0x0006a9da) cam6_timer_pane_t1

0xe509,	// (0x0006a9e8) cam6_zoom_cont_pane

0xe511,	// (0x0006a9f0) cam6_zoom_pane_g1

0xe519,	// (0x0006a9f8) cam6_zoom_pane_g2

0x76a1,	// (0x00063b80) cam6_zoom_pane_g3

0x0002,

0xfb0c,	// (0x0006bfeb) cam6_zoom_pane_g

0xc721,	// (0x00068c00) cam6_battery_pane_g1

0xc721,	// (0x00068c00) cam6_battery_pane_g2

0x0001,

0xf6ec,	// (0x0006bbcb) cam6_battery_pane_g

0xe521,	// (0x0006aa00) cam6_zoom_cont_pane_g1

0xe52a,	// (0x0006aa09) cam6_zoom_cont_pane_g2

0xe533,	// (0x0006aa12) cam6_zoom_cont_pane_g3

0x0002,

0x05ca,	// (0x0005caa9) cam6_zoom_cont_pane_g

0x76be,	// (0x00063b9d) cam6_mode_pane_cp_ParamLimits

0x76be,	// (0x00063b9d) cam6_mode_pane_cp

0x76d0,	// (0x00063baf) cam6_zoom_pane_cp_ParamLimits

0x76d0,	// (0x00063baf) cam6_zoom_pane_cp

0x76dc,	// (0x00063bbb) vid6_image_uncrop_cif_pane_ParamLimits

0x76dc,	// (0x00063bbb) vid6_image_uncrop_cif_pane

0x76ec,	// (0x00063bcb) vid6_image_uncrop_nhd_pane_ParamLimits

0x76ec,	// (0x00063bcb) vid6_image_uncrop_nhd_pane

0x76fb,	// (0x00063bda) vid6_image_uncrop_vga_pane_ParamLimits

0x76fb,	// (0x00063bda) vid6_image_uncrop_vga_pane

0x770a,	// (0x00063be9) vid6_image_uncrop_wvga_pane_ParamLimits

0x770a,	// (0x00063be9) vid6_image_uncrop_wvga_pane

0x7719,	// (0x00063bf8) vid6_indi_pane_ParamLimits

0x7719,	// (0x00063bf8) vid6_indi_pane

0xde37,	// (0x0006a316) bg_tb_trans_pane_cp09_ParamLimits

0xde37,	// (0x0006a316) bg_tb_trans_pane_cp09

0xe54b,	// (0x0006aa2a) cam6_battery_pane_cp_ParamLimits

0xe54b,	// (0x0006aa2a) cam6_battery_pane_cp

0xe557,	// (0x0006aa36) vid6_indi_pane_g1_ParamLimits

0xe557,	// (0x0006aa36) vid6_indi_pane_g1

0xe569,	// (0x0006aa48) vid6_indi_pane_g2_ParamLimits

0xe569,	// (0x0006aa48) vid6_indi_pane_g2

0xe57b,	// (0x0006aa5a) vid6_indi_pane_g3_ParamLimits

0xe57b,	// (0x0006aa5a) vid6_indi_pane_g3

0xe590,	// (0x0006aa6f) vid6_indi_pane_g4_ParamLimits

0xe590,	// (0x0006aa6f) vid6_indi_pane_g4

0xe5a5,	// (0x0006aa84) vid6_indi_pane_g5_ParamLimits

0xe5a5,	// (0x0006aa84) vid6_indi_pane_g5

0x0004,

0x05d1,	// (0x0005cab0) vid6_indi_pane_g_ParamLimits

0x05d1,	// (0x0005cab0) vid6_indi_pane_g

0xe5bf,	// (0x0006aa9e) vid6_indi_pane_t1_ParamLimits

0xe5bf,	// (0x0006aa9e) vid6_indi_pane_t1

0xe5d5,	// (0x0006aab4) vid6_indi_pane_t2_ParamLimits

0xe5d5,	// (0x0006aab4) vid6_indi_pane_t2

0xe5fd,	// (0x0006aadc) vid6_indi_pane_t3_ParamLimits

0xe5fd,	// (0x0006aadc) vid6_indi_pane_t3

0xe625,	// (0x0006ab04) vid6_indi_pane_t4_ParamLimits

0xe625,	// (0x0006ab04) vid6_indi_pane_t4

0x0003,

0x05dc,	// (0x0005cabb) vid6_indi_pane_t_ParamLimits

0x05dc,	// (0x0005cabb) vid6_indi_pane_t

0xe649,	// (0x0006ab28) wait_bar_pane_cp08

0x7731,	// (0x00063c10) main_cset_text2_pane_t1_ParamLimits

0x7731,	// (0x00063c10) main_cset_text2_pane_t1

0x76a9,	// (0x00063b88) listscroll_gen_pane_cp06_t1_ParamLimits

0x76a9,	// (0x00063b88) listscroll_gen_pane_cp06_t1

0x9a64,	// (0x00065f43) main_cam6_set_pane

0xdc02,	// (0x0006a0e1) bg_tb_trans_pane_cp06_ParamLimits

0xdc18,	// (0x0006a0f7) cam4_indicators_pane_g1_ParamLimits

0xdc29,	// (0x0006a108) cam4_indicators_pane_g2_ParamLimits

0xf902,	// (0x0006bde1) cam4_indicators_pane_g_ParamLimits

0xdc47,	// (0x0006a126) cam4_indicators_pane_t1_ParamLimits

0x9a56,	// (0x00065f35) bg_tb_trans_pane_cp07_ParamLimits

0xdc73,	// (0x0006a152) vid4_indicators_pane_g1_ParamLimits

0xdc87,	// (0x0006a166) vid4_indicators_pane_g2_ParamLimits

0xdc9b,	// (0x0006a17a) vid4_indicators_pane_g3_ParamLimits

0xdcac,	// (0x0006a18b) vid4_indicators_pane_g4_ParamLimits

0xf914,	// (0x0006bdf3) vid4_indicators_pane_g_ParamLimits

0xdcca,	// (0x0006a1a9) vid4_indicators_pane_t1_ParamLimits

0x71d7,	// (0x000636b6) vid4_progress_pane_g1_ParamLimits

0x71e9,	// (0x000636c8) vid4_progress_pane_g2_ParamLimits

0xa914,	// (0x00066df3) vid4_progress_pane_g3_ParamLimits

0xddb9,	// (0x0006a298) vid4_progress_pane_g4_ParamLimits

0xfa7a,	// (0x0006bf59) vid4_progress_pane_g_ParamLimits

0xddd7,	// (0x0006a2b6) vid4_progress_pane_t1_ParamLimits

0xddec,	// (0x0006a2cb) vid4_progress_pane_t2_ParamLimits

0xde02,	// (0x0006a2e1) vid4_progress_pane_t3_ParamLimits

0xfa85,	// (0x0006bf64) vid4_progress_pane_t_ParamLimits

0xde17,	// (0x0006a2f6) wait_bar_pane_cp07_ParamLimits

0x774e,	// (0x00063c2d) main_cam6_set_pane_g2_ParamLimits

0x774e,	// (0x00063c2d) main_cam6_set_pane_g2

0x7772,	// (0x00063c51) main_cset6_listscroll_pane_ParamLimits

0x7772,	// (0x00063c51) main_cset6_listscroll_pane

0x7792,	// (0x00063c71) main_cset6_slider_pane_ParamLimits

0x7792,	// (0x00063c71) main_cset6_slider_pane

0x77a8,	// (0x00063c87) main_cset6_text2_pane_ParamLimits

0x77a8,	// (0x00063c87) main_cset6_text2_pane

0xe658,	// (0x0006ab37) main_cset6_text_pane

0xe660,	// (0x0006ab3f) main_cset_list_pane_copy1_ParamLimits

0xe660,	// (0x0006ab3f) main_cset_list_pane_copy1

0xe670,	// (0x0006ab4f) scroll_pane_cp028_copy1

0x77b6,	// (0x00063c95) cset_list_set_pane_copy1

0x77c7,	// (0x00063ca6) aid_position_infowindow_above_copy1

0x77cf,	// (0x00063cae) aid_position_infowindow_below_copy1

0x77d7,	// (0x00063cb6) cset_list_set_pane_g1_copy1

0x77df,	// (0x00063cbe) cset_list_set_pane_g3_copy1_ParamLimits

0x77df,	// (0x00063cbe) cset_list_set_pane_g3_copy1

0x77ee,	// (0x00063ccd) cset_list_set_pane_t1_copy1_ParamLimits

0x77ee,	// (0x00063ccd) cset_list_set_pane_t1_copy1

0xc21b,	// (0x000686fa) list_highlight_pane_cp021_copy1_ParamLimits

0xc21b,	// (0x000686fa) list_highlight_pane_cp021_copy1

0xe679,	// (0x0006ab58) cset6_slider_pane_ParamLimits

0xe679,	// (0x0006ab58) cset6_slider_pane

0xe6a5,	// (0x0006ab84) main_cset6_slider_pane_g1_ParamLimits

0xe6a5,	// (0x0006ab84) main_cset6_slider_pane_g1

0x7803,	// (0x00063ce2) main_cset6_slider_pane_g2_ParamLimits

0x7803,	// (0x00063ce2) main_cset6_slider_pane_g2

0xe6cd,	// (0x0006abac) main_cset6_slider_pane_g3_ParamLimits

0xe6cd,	// (0x0006abac) main_cset6_slider_pane_g3

0x782b,	// (0x00063d0a) main_cset6_slider_pane_g4_ParamLimits

0x782b,	// (0x00063d0a) main_cset6_slider_pane_g4

0x7837,	// (0x00063d16) main_cset6_slider_pane_g5_ParamLimits

0x7837,	// (0x00063d16) main_cset6_slider_pane_g5

0xdf74,	// (0x0006a453) main_cset6_slider_pane_g7_ParamLimits

0xdf74,	// (0x0006a453) main_cset6_slider_pane_g7

0xdf80,	// (0x0006a45f) main_cset6_slider_pane_g8_ParamLimits

0xdf80,	// (0x0006a45f) main_cset6_slider_pane_g8

0x672a,	// (0x00062c09) main_cset6_slider_pane_g9_ParamLimits

0x672a,	// (0x00062c09) main_cset6_slider_pane_g9

0x6736,	// (0x00062c15) main_cset6_slider_pane_g10_ParamLimits

0x6736,	// (0x00062c15) main_cset6_slider_pane_g10

0x6742,	// (0x00062c21) main_cset6_slider_pane_g11_ParamLimits

0x6742,	// (0x00062c21) main_cset6_slider_pane_g11

0x674e,	// (0x00062c2d) main_cset6_slider_pane_g12_ParamLimits

0x674e,	// (0x00062c2d) main_cset6_slider_pane_g12

0x675a,	// (0x00062c39) main_cset6_slider_pane_g13_ParamLimits

0x675a,	// (0x00062c39) main_cset6_slider_pane_g13

0x6766,	// (0x00062c45) main_cset6_slider_pane_g14_ParamLimits

0x6766,	// (0x00062c45) main_cset6_slider_pane_g14

0x7843,	// (0x00063d22) main_cset6_slider_pane_g15_ParamLimits

0x7843,	// (0x00063d22) main_cset6_slider_pane_g15

0x678a,	// (0x00062c69) main_cset6_slider_pane_g16_ParamLimits

0x678a,	// (0x00062c69) main_cset6_slider_pane_g16

0x6796,	// (0x00062c75) main_cset6_slider_pane_g17_ParamLimits

0x6796,	// (0x00062c75) main_cset6_slider_pane_g17

0x0011,

0xfb13,	// (0x0006bff2) main_cset6_slider_pane_g_ParamLimits

0xfb13,	// (0x0006bff2) main_cset6_slider_pane_g

0xe6d9,	// (0x0006abb8) main_cset6_slider_pane_t1_ParamLimits

0xe6d9,	// (0x0006abb8) main_cset6_slider_pane_t1

0x7873,	// (0x00063d52) main_cset6_slider_pane_t2_ParamLimits

0x7873,	// (0x00063d52) main_cset6_slider_pane_t2

0x789e,	// (0x00063d7d) main_cset6_slider_pane_t3_ParamLimits

0x789e,	// (0x00063d7d) main_cset6_slider_pane_t3

0x78c9,	// (0x00063da8) main_cset6_slider_pane_t4_ParamLimits

0x78c9,	// (0x00063da8) main_cset6_slider_pane_t4

0x78f4,	// (0x00063dd3) main_cset6_slider_pane_t5_ParamLimits

0x78f4,	// (0x00063dd3) main_cset6_slider_pane_t5

0xe71a,	// (0x0006abf9) main_cset6_slider_pane_t7_ParamLimits

0xe71a,	// (0x0006abf9) main_cset6_slider_pane_t7

0x791f,	// (0x00063dfe) main_cset6_slider_pane_t8_ParamLimits

0x791f,	// (0x00063dfe) main_cset6_slider_pane_t8

0x7943,	// (0x00063e22) main_cset6_slider_pane_t9_ParamLimits

0x7943,	// (0x00063e22) main_cset6_slider_pane_t9

0x7967,	// (0x00063e46) main_cset6_slider_pane_t10_ParamLimits

0x7967,	// (0x00063e46) main_cset6_slider_pane_t10

0x798b,	// (0x00063e6a) main_cset6_slider_pane_t11_ParamLimits

0x798b,	// (0x00063e6a) main_cset6_slider_pane_t11

0xe750,	// (0x0006ac2f) main_cset6_slider_pane_t14_ParamLimits

0xe750,	// (0x0006ac2f) main_cset6_slider_pane_t14

0xe789,	// (0x0006ac68) main_cset6_slider_pane_t15_ParamLimits

0xe789,	// (0x0006ac68) main_cset6_slider_pane_t15

0x000b,

0xfb38,	// (0x0006c017) main_cset6_slider_pane_t_ParamLimits

0xfb38,	// (0x0006c017) main_cset6_slider_pane_t

0xe7c2,	// (0x0006aca1) cset_slider_pane_g1_copy1

0xe7cb,	// (0x0006acaa) cset_slider_pane_g2_copy1

0xe7d4,	// (0x0006acb3) cset_slider_pane_g3_copy1

0x0aa3,	// (0x0005cf82) bg_popup_sub_pane_cp011_copy1

0xe7dd,	// (0x0006acbc) main_cset_text_pane_g1_copy1

0xe0ba,	// (0x0006a599) main_cset_text_pane_t1_copy1

0xe0c8,	// (0x0006a5a7) main_cset_text_pane_t2_copy1

0xe0d6,	// (0x0006a5b5) main_cset_text_pane_t3_copy1

0xe0e4,	// (0x0006a5c3) main_cset_text_pane_t4_copy1

0xe0f2,	// (0x0006a5d1) main_cset_text_pane_t5_copy1

0xe7e5,	// (0x0006acc4) main_cset_text_pane_t6_copy1

0xe7f3,	// (0x0006acd2) main_cset_text_pane_t7_copy1

0x7731,	// (0x00063c10) main_cset_text2_pane_t1_copy1

0x9a56,	// (0x00065f35) main_ncimui_pane

0x3dc1,	// (0x000602a0) popup_query_ncimui_window_ParamLimits

0x3dc1,	// (0x000602a0) popup_query_ncimui_window

0x4aca,	// (0x00060fa9) field_cale_ev2_pane_g4_ParamLimits

0x4aca,	// (0x00060fa9) field_cale_ev2_pane_g4

0x59b6,	// (0x00061e95) cell_video_dialer_keypad_pane_g2_ParamLimits

0x59b6,	// (0x00061e95) cell_video_dialer_keypad_pane_g2

0x0001,

0xf8a0,	// (0x0006bd7f) cell_video_dialer_keypad_pane_g_ParamLimits

0xf8a0,	// (0x0006bd7f) cell_video_dialer_keypad_pane_g

0x59ce,	// (0x00061ead) cell_video_dialer_keypad_pane_t1

0x0aa3,	// (0x0005cf82) bg_popup_window_pane_cp012

0xab5f,	// (0x0006703e) heading_pane_cp06

0xe82b,	// (0x0006ad0a) ncim_query_content_pane

0x0aa3,	// (0x0005cf82) bg_popup_heading_pane_cp01

0xe833,	// (0x0006ad12) ncim_heading_pane_t1

0xe841,	// (0x0006ad20) ncim_indicator_popup_pane

0xe853,	// (0x0006ad32) ncim_query_button_pane

0xe867,	// (0x0006ad46) ncim_query_content_pane_t1

0xe879,	// (0x0006ad58) ncim_query_content_pane_t2

0x0005,

0xfb7c,	// (0x0006c05b) ncim_query_content_pane_t

0xe8b3,	// (0x0006ad92) ncim_query_list_pane

0xe8c5,	// (0x0006ada4) ncim_query_popup_pane

0xe841,	// (0x0006ad20) ncim_indicator_popup_pane_ParamLimits

0x7ba6,	// (0x00064085) ncim_query_content_pane_g1_ParamLimits

0x7ba6,	// (0x00064085) ncim_query_content_pane_g1

0xe867,	// (0x0006ad46) ncim_query_content_pane_t1_ParamLimits

0xe879,	// (0x0006ad58) ncim_query_content_pane_t2_ParamLimits

0x7bb2,	// (0x00064091) ncim_query_content_pane_t3_ParamLimits

0x7bb2,	// (0x00064091) ncim_query_content_pane_t3

0x7bda,	// (0x000640b9) ncim_query_content_pane_t4_ParamLimits

0x7bda,	// (0x000640b9) ncim_query_content_pane_t4

0x7c02,	// (0x000640e1) ncim_query_content_pane_t5_ParamLimits

0x7c02,	// (0x000640e1) ncim_query_content_pane_t5

0xe88b,	// (0x0006ad6a) ncim_query_content_pane_t6_ParamLimits

0xe88b,	// (0x0006ad6a) ncim_query_content_pane_t6

0xfb7c,	// (0x0006c05b) ncim_query_content_pane_t_ParamLimits

0xe8b3,	// (0x0006ad92) ncim_query_list_pane_ParamLimits

0xe8c5,	// (0x0006ada4) ncim_query_popup_pane_ParamLimits

0xe8d9,	// (0x0006adb8) wait_bar_pane_cp04

0x0aa3,	// (0x0005cf82) input_focus_pane_cp011

0xe8e1,	// (0x0006adc0) ncim_query_popup_pane_t1

0xe8ef,	// (0x0006adce) ncim_list_query_list_pane_ParamLimits

0xe8ef,	// (0x0006adce) ncim_list_query_list_pane

0x0aa3,	// (0x0005cf82) bg_button_pane_cp027

0xe8fc,	// (0x0006addb) ncim_query_button_pane_g1

0x0aa3,	// (0x0005cf82) list_highlight_pane_cp012

0xe906,	// (0x0006ade5) ncim_list_query_list_pane_g1

0xe90e,	// (0x0006aded) ncim_list_query_list_pane_t1

0xdc38,	// (0x0006a117) cam4_indicators_pane_g3_ParamLimits

0xdc38,	// (0x0006a117) cam4_indicators_pane_g3

0xdcb8,	// (0x0006a197) vid4_indicators_pane_g5_ParamLimits

0xdcb8,	// (0x0006a197) vid4_indicators_pane_g5

0xddc8,	// (0x0006a2a7) vid4_progress_pane_g5_ParamLimits

0xddc8,	// (0x0006a2a7) vid4_progress_pane_g5

0x7a94,	// (0x00063f73) main_ncimui_pane_g1

0x7afa,	// (0x00063fd9) ncimui_group_query_pane_ParamLimits

0x7afa,	// (0x00063fd9) ncimui_group_query_pane

0x7b42,	// (0x00064021) ncimui_list_pane_ParamLimits

0x7b42,	// (0x00064021) ncimui_list_pane

0x7b69,	// (0x00064048) ncimui_text_pane_ParamLimits

0x7b69,	// (0x00064048) ncimui_text_pane

0x7c2a,	// (0x00064109) ncimui_text_pane_t1_ParamLimits

0x7c2a,	// (0x00064109) ncimui_text_pane_t1

0xe91c,	// (0x0006adfb) ncimui_list_single_graphic_pane_ParamLimits

0xe91c,	// (0x0006adfb) ncimui_list_single_graphic_pane

0x7c48,	// (0x00064127) ncimui_query_pane_ParamLimits

0x7c48,	// (0x00064127) ncimui_query_pane

0x0aa3,	// (0x0005cf82) list_highlight_pane_cp013

0xe92c,	// (0x0006ae0b) ncim_list_query_list_pane_t1_copy1

0xe906,	// (0x0006ade5) ncim_list_single_graphic_pane_g1

0xe93a,	// (0x0006ae19) ncim_query_button_pane_cp01

0xe946,	// (0x0006ae25) ncim_query_entry_pane_ParamLimits

0xe946,	// (0x0006ae25) ncim_query_entry_pane

0xe959,	// (0x0006ae38) ncimui_query_pane_g1

0xe965,	// (0x0006ae44) ncimui_query_pane_t1_ParamLimits

0xe965,	// (0x0006ae44) ncimui_query_pane_t1

0xc21b,	// (0x000686fa) input_focus_pane_cp012

0xe97e,	// (0x0006ae5d) ncim_query_entry_pane_t1

0xa1d1,	// (0x000666b0) main_im_pane_ParamLimits

0x9a56,	// (0x00065f35) main_mobtv_pane_ParamLimits

0x9a56,	// (0x00065f35) main_mobtv_pane

0x785b,	// (0x00063d3a) main_cset6_slider_pane_g18_ParamLimits

0x785b,	// (0x00063d3a) main_cset6_slider_pane_g18

0x7867,	// (0x00063d46) main_cset6_slider_pane_g19_ParamLimits

0x7867,	// (0x00063d46) main_cset6_slider_pane_g19

0x7c5b,	// (0x0006413a) bg_main_mobtv_pane_ParamLimits

0x7c5b,	// (0x0006413a) bg_main_mobtv_pane

0x7c69,	// (0x00064148) main_mobtv_info_pane

0x7c72,	// (0x00064151) main_mobtv_loading_pane_ParamLimits

0x7c72,	// (0x00064151) main_mobtv_loading_pane

0xe990,	// (0x0006ae6f) main_mobtv_pg_channel_list_pane

0xe99a,	// (0x0006ae79) main_mobtv_pg_hdr_pane

0x7c7f,	// (0x0006415e) main_mobtv_programe_curr_pane_ParamLimits

0x7c7f,	// (0x0006415e) main_mobtv_programe_curr_pane

0x7c8c,	// (0x0006416b) main_mobtv_programe_next_pane_ParamLimits

0x7c8c,	// (0x0006416b) main_mobtv_programe_next_pane

0xe9a3,	// (0x0006ae82) popup_mobtv_noti_window

0xc721,	// (0x00068c00) main_tv_pg_hdr_pane_g1

0xe9ab,	// (0x0006ae8a) main_tv_pg_hdr_pane_g2

0xe9b3,	// (0x0006ae92) main_tv_pg_hdr_pane_g3

0xe9bb,	// (0x0006ae9a) main_tv_pg_hdr_pane_g4

0xe9c3,	// (0x0006aea2) main_tv_pg_hdr_pane_g5

0xe9cd,	// (0x0006aeac) main_tv_pg_hdr_pane_g6

0xe9d7,	// (0x0006aeb6) main_tv_pg_hdr_pane_g7

0xe9e1,	// (0x0006aec0) main_tv_pg_hdr_pane_g8

0xe9eb,	// (0x0006aeca) main_tv_pg_hdr_pane_g9

0xe9f5,	// (0x0006aed4) main_tv_pg_hdr_pane_g10

0xe9ff,	// (0x0006aede) main_tv_pg_hdr_pane_g11

0x000a,

0xfb89,	// (0x0006c068) main_tv_pg_hdr_pane_g

0xea09,	// (0x0006aee8) main_tv_pg_hdr_pane_t1

0xea17,	// (0x0006aef6) main_tv_pg_hdr_pane_t2

0xea25,	// (0x0006af04) main_tv_pg_hdr_pane_t3

0xea35,	// (0x0006af14) main_tv_pg_hdr_pane_t4

0xea45,	// (0x0006af24) main_tv_pg_hdr_pane_t5

0x0004,

0x0672,	// (0x0005cb51) main_tv_pg_hdr_pane_t

0xea55,	// (0x0006af34) single_mobtv_pg_channel_pane_ParamLimits

0xea55,	// (0x0006af34) single_mobtv_pg_channel_pane

0xea67,	// (0x0006af46) single_mobtv_pg_channel_table_pane

0xea70,	// (0x0006af4f) single_mobtv_pg_channel_thumb_pane

0xea79,	// (0x0006af58) single_tv_pg_channel_pane_g1

0xea82,	// (0x0006af61) single_tv_pg_channel_pane_g2

0x0001,

0x067d,	// (0x0005cb5c) single_tv_pg_channel_pane_g

0xc98d,	// (0x00068e6c) bg_single_mobtv_pg_channel_thumb_pane_ParamLimits

0xc98d,	// (0x00068e6c) bg_single_mobtv_pg_channel_thumb_pane

0xea8b,	// (0x0006af6a) single_mobtv_pg_channel_thumb_pane_g1_ParamLimits

0xea8b,	// (0x0006af6a) single_mobtv_pg_channel_thumb_pane_g1

0xea99,	// (0x0006af78) single_mobtv_pg_channel_thumb_pane_g2_ParamLimits

0xea99,	// (0x0006af78) single_mobtv_pg_channel_thumb_pane_g2

0xeaa5,	// (0x0006af84) single_mobtv_pg_channel_thumb_pane_g3_ParamLimits

0xeaa5,	// (0x0006af84) single_mobtv_pg_channel_thumb_pane_g3

0x0002,

0x0682,	// (0x0005cb61) single_mobtv_pg_channel_thumb_pane_g_ParamLimits

0x0682,	// (0x0005cb61) single_mobtv_pg_channel_thumb_pane_g

0xeab1,	// (0x0006af90) single_mobtv_pg_channel_thumb_pane_t1

0xeabf,	// (0x0006af9e) single_mobtv_pg_channel_thumb_pane_t2

0x0001,

0x0689,	// (0x0005cb68) single_mobtv_pg_channel_thumb_pane_t

0xc721,	// (0x00068c00) bg_single_mobtv_pg_channel_table_pane_g1

0xc721,	// (0x00068c00) bg_single_mobtv_pg_channel_table_pane_g2

0x0001,

0xf6ec,	// (0x0006bbcb) bg_single_mobtv_pg_channel_table_pane_g

0xeacd,	// (0x0006afac) single_mobtv_pg_channel_table_pane_t1

0xeadb,	// (0x0006afba) single_mobtv_pg_channel_table_pane_t2

0x0001,

0x068e,	// (0x0005cb6d) single_mobtv_pg_channel_table_pane_t

0x7ca1,	// (0x00064180) main_mobtv_info_pane_g1_ParamLimits

0x7ca1,	// (0x00064180) main_mobtv_info_pane_g1

0x7cbf,	// (0x0006419e) main_mobtv_info_pane_t1_ParamLimits

0x7cbf,	// (0x0006419e) main_mobtv_info_pane_t1

0x7d37,	// (0x00064216) main_mobtv_info_pane_t2_ParamLimits

0x7d37,	// (0x00064216) main_mobtv_info_pane_t2

0x0002,

0xfba5,	// (0x0006c084) main_mobtv_info_pane_t_ParamLimits

0xfba5,	// (0x0006c084) main_mobtv_info_pane_t

0x7dc6,	// (0x000642a5) wait_bar_pane_cp05

0x7dd8,	// (0x000642b7) main_mobtv_loading_pane_g1_ParamLimits

0x7dd8,	// (0x000642b7) main_mobtv_loading_pane_g1

0x7deb,	// (0x000642ca) main_mobtv_loading_pane_g2_ParamLimits

0x7deb,	// (0x000642ca) main_mobtv_loading_pane_g2

0x7df7,	// (0x000642d6) main_mobtv_loading_pane_g3_ParamLimits

0x7df7,	// (0x000642d6) main_mobtv_loading_pane_g3

0x0002,

0xfbac,	// (0x0006c08b) main_mobtv_loading_pane_g_ParamLimits

0xfbac,	// (0x0006c08b) main_mobtv_loading_pane_g

0xeae9,	// (0x0006afc8) main_mobtv_loading_pane_t1_ParamLimits

0xeae9,	// (0x0006afc8) main_mobtv_loading_pane_t1

0xeb01,	// (0x0006afe0) main_mobtv_loading_pane_t2_ParamLimits

0xeb01,	// (0x0006afe0) main_mobtv_loading_pane_t2

0x0001,

0x06a6,	// (0x0005cb85) main_mobtv_loading_pane_t_ParamLimits

0x06a6,	// (0x0005cb85) main_mobtv_loading_pane_t

0x7e0a,	// (0x000642e9) wait_bar_pane_cp06_ParamLimits

0x7e0a,	// (0x000642e9) wait_bar_pane_cp06

0xeb25,	// (0x0006b004) main_mobtv_programe_curr_pane_t1

0xeb33,	// (0x0006b012) main_mobtv_programe_curr_pane_t2

0x0001,

0x06ab,	// (0x0005cb8a) main_mobtv_programe_curr_pane_t

0xeb41,	// (0x0006b020) main_mobtv_programe_next_pane_t1

0xeb4f,	// (0x0006b02e) main_mobtv_programe_next_pane_t2

0xeb5d,	// (0x0006b03c) main_mobtv_programe_next_pane_t3

0x0002,

0x06b0,	// (0x0005cb8f) main_mobtv_programe_next_pane_t

0x0aa3,	// (0x0005cf82) bg_popup_mobtv_noti_window_pane

0xeb6b,	// (0x0006b04a) popup_mobtv_noti_window_g1

0xeb73,	// (0x0006b052) popup_mobtv_noti_window_t1

0xeb81,	// (0x0006b060) popup_mobtv_noti_window_t2

0x0001,

0x06b7,	// (0x0005cb96) popup_mobtv_noti_window_t

0xc721,	// (0x00068c00) bg_popup_mobtv_noti_window_pane_g1

0x9a64,	// (0x00065f43) sc_clock_pane

0x9a64,	// (0x00065f43) main_fs_bigclock_pane

0x7467,	// (0x00063946) blid2_tripm_pane_t4_ParamLimits

0x7467,	// (0x00063946) blid2_tripm_pane_t4

0x7e19,	// (0x000642f8) sc_clock_pane_g1_ParamLimits

0x7e19,	// (0x000642f8) sc_clock_pane_g1

0x7e2b,	// (0x0006430a) sc_clock_pane_t1_ParamLimits

0x7e2b,	// (0x0006430a) sc_clock_pane_t1

0x7e4d,	// (0x0006432c) sc_clock_pane_t2_ParamLimits

0x7e4d,	// (0x0006432c) sc_clock_pane_t2

0x7e65,	// (0x00064344) sc_clock_pane_t3_ParamLimits

0x7e65,	// (0x00064344) sc_clock_pane_t3

0x0004,

0xfbb3,	// (0x0006c092) sc_clock_pane_t_ParamLimits

0xfbb3,	// (0x0006c092) sc_clock_pane_t

0x9000,	// (0x000654df) main_fs_bigclock_indicator_pane_ParamLimits

0x9000,	// (0x000654df) main_fs_bigclock_indicator_pane

0xc95d,	// (0x00068e3c) main_fs_bigclock_pane_g1_ParamLimits

0xc95d,	// (0x00068e3c) main_fs_bigclock_pane_g1

0x900c,	// (0x000654eb) main_fs_bigclock_pane_t1_ParamLimits

0x900c,	// (0x000654eb) main_fs_bigclock_pane_t1

0x901e,	// (0x000654fd) main_fs_bigclock_pane_t2_ParamLimits

0x901e,	// (0x000654fd) main_fs_bigclock_pane_t2

0x9032,	// (0x00065511) main_fs_bigclock_pane_t3_ParamLimits

0x9032,	// (0x00065511) main_fs_bigclock_pane_t3

0x0002,

0xfd6c,	// (0x0006c24b) main_fs_bigclock_pane_t_ParamLimits

0xfd6c,	// (0x0006c24b) main_fs_bigclock_pane_t

0xd49c,	// (0x0006997b) main_fs_bigclock_indicator_pane_g1

0xe85b,	// (0x0006ad3a) ncim_query_content_pane_g2_ParamLimits

0xe85b,	// (0x0006ad3a) ncim_query_content_pane_g2

0x0001,

0xfb77,	// (0x0006c056) ncim_query_content_pane_g_ParamLimits

0xfb77,	// (0x0006c056) ncim_query_content_pane_g

0x7e7e,	// (0x0006435d) sc_clock_pane_t4_ParamLimits

0x7e7e,	// (0x0006435d) sc_clock_pane_t4

0x9a56,	// (0x00065f35) main_radioblah_pane

0xd0da,	// (0x000695b9) cell_call4_button_pane_t1_copy1_ParamLimits

0xd0da,	// (0x000695b9) cell_call4_button_pane_t1_copy1

0x7aac,	// (0x00063f8b) main_ncimui_pane_t1_ParamLimits

0x7aac,	// (0x00063f8b) main_ncimui_pane_t1

0x7ac6,	// (0x00063fa5) main_ncimui_pane_t2_ParamLimits

0x7ac6,	// (0x00063fa5) main_ncimui_pane_t2

0x0002,

0xfb70,	// (0x0006c04f) main_ncimui_pane_t_ParamLimits

0xfb70,	// (0x0006c04f) main_ncimui_pane_t

0xecc7,	// (0x0006b1a6) main_radioblah_anim_pane_ParamLimits

0xecc7,	// (0x0006b1a6) main_radioblah_anim_pane

0xecd8,	// (0x0006b1b7) main_radioblah_info_pane_ParamLimits

0xecd8,	// (0x0006b1b7) main_radioblah_info_pane

0xecec,	// (0x0006b1cb) main_radioblah_pane_t1_ParamLimits

0xecec,	// (0x0006b1cb) main_radioblah_pane_t1

0xed08,	// (0x0006b1e7) main_radioblah_pane_t2_ParamLimits

0xed08,	// (0x0006b1e7) main_radioblah_pane_t2

0x0003,

0x06dd,	// (0x0005cbbc) main_radioblah_pane_t_ParamLimits

0x06dd,	// (0x0005cbbc) main_radioblah_pane_t

0x7f2c,	// (0x0006440b) main_radioblah_rocker_ctrl_pane_ParamLimits

0x7f2c,	// (0x0006440b) main_radioblah_rocker_ctrl_pane

0xed50,	// (0x0006b22f) main_radioblah_info_pane_t1_ParamLimits

0xed50,	// (0x0006b22f) main_radioblah_info_pane_t1

0x7f84,	// (0x00064463) main_radioblah_info_pane_t2_ParamLimits

0x7f84,	// (0x00064463) main_radioblah_info_pane_t2

0x0003,

0xfbbe,	// (0x0006c09d) main_radioblah_info_pane_t_ParamLimits

0xfbbe,	// (0x0006c09d) main_radioblah_info_pane_t

0xc721,	// (0x00068c00) main_radioblah_rocker_ctrl_pane_g1

0x8034,	// (0x00064513) main_radioblah_rocker_ctrl_pane_g2

0x803c,	// (0x0006451b) main_radioblah_rocker_ctrl_pane_g3

0x8044,	// (0x00064523) main_radioblah_rocker_ctrl_pane_g4

0x804c,	// (0x0006452b) main_radioblah_rocker_ctrl_pane_g5

0x8054,	// (0x00064533) main_radioblah_rocker_ctrl_pane_g6

0x0005,

0xfbc7,	// (0x0006c0a6) main_radioblah_rocker_ctrl_pane_g

0x7731,	// (0x00063c10) main_cset_text2_pane_t1_copy1_ParamLimits

0xdbfa,	// (0x0006a0d9) cam4_image_uncrop_qvga_pane

0xdc61,	// (0x0006a140) vid4_image_uncrop_qcif_pane

0xde29,	// (0x0006a308) cam6_image_uncrop_qvga_pane_ParamLimits

0xde29,	// (0x0006a308) cam6_image_uncrop_qvga_pane

0xe53b,	// (0x0006aa1a) vid6_image_uncrop_qcif_pane_ParamLimits

0xe53b,	// (0x0006aa1a) vid6_image_uncrop_qcif_pane

0x0aa3,	// (0x0005cf82) bg_popup_preview_window_pane_cp03

0xe801,	// (0x0006ace0) list_cset_text2_pane

0xe815,	// (0x0006acf4) main_cset6_text2_pane_g1

0xe81d,	// (0x0006acfc) main_cset6_text2_pane_t1

0x805c,	// (0x0006453b) list_cset_text2_pane_t1_ParamLimits

0x805c,	// (0x0006453b) list_cset_text2_pane_t1

0x9a56,	// (0x00065f35) main_radioblah_pane_ParamLimits

0x7db2,	// (0x00064291) main_mobtv_info_pane_t3_ParamLimits

0x7db2,	// (0x00064291) main_mobtv_info_pane_t3

0x7f1a,	// (0x000643f9) main_radioblah_pane_g1

0x7f54,	// (0x00064433) main_radioblah_info_pane_g1

0x7fd9,	// (0x000644b8) main_radioblah_info_pane_t3_ParamLimits

0x7fd9,	// (0x000644b8) main_radioblah_info_pane_t3

0x2701,	// (0x0005ebe0) highlight_cell_cale_month_pane_ParamLimits

0x2701,	// (0x0005ebe0) highlight_cell_cale_month_pane

0x9a64,	// (0x00065f43) main_phob_fisheye_pane

0xca75,	// (0x00068f54) scroll_pane_cp0031_ParamLimits

0xca75,	// (0x00068f54) scroll_pane_cp0031

0xe649,	// (0x0006ab28) wait_bar_pane_cp08_ParamLimits

0x77b6,	// (0x00063c95) cset_list_set_pane_copy1_ParamLimits

0xed8a,	// (0x0006b269) highlight_cell_cale_month_pane_g1

0x8075,	// (0x00064554) highlight_cell_cale_month_pane_t1

0xe2da,	// (0x0006a7b9) list_gen_pane_cp01

0xdf5f,	// (0x0006a43e) scroll_pane_01

0x8083,	// (0x00064562) list_single_double_fisheye_pane

0x808c,	// (0x0006456b) list_double_fisheye_pane_g1_ParamLimits

0x808c,	// (0x0006456b) list_double_fisheye_pane_g1

0x8098,	// (0x00064577) list_double_fisheye_pane_g2_ParamLimits

0x8098,	// (0x00064577) list_double_fisheye_pane_g2

0x80ac,	// (0x0006458b) list_double_fisheye_pane_g3_ParamLimits

0x80ac,	// (0x0006458b) list_double_fisheye_pane_g3

0x0004,

0xfbd4,	// (0x0006c0b3) list_double_fisheye_pane_g_ParamLimits

0xfbd4,	// (0x0006c0b3) list_double_fisheye_pane_g

0x80d5,	// (0x000645b4) list_double_fisheye_pane_t1_ParamLimits

0x80d5,	// (0x000645b4) list_double_fisheye_pane_t1

0x80f0,	// (0x000645cf) list_double_fisheye_pane_t2_ParamLimits

0x80f0,	// (0x000645cf) list_double_fisheye_pane_t2

0x0001,

0xfbdf,	// (0x0006c0be) list_double_fisheye_pane_t_ParamLimits

0xfbdf,	// (0x0006c0be) list_double_fisheye_pane_t

0x9a64,	// (0x00065f43) main_call5_pane

0x7ea9,	// (0x00064388) sc_swipe_pane_ParamLimits

0x7ea9,	// (0x00064388) sc_swipe_pane

0x8125,	// (0x00064604) call5_image_pane_ParamLimits

0x8125,	// (0x00064604) call5_image_pane

0x8142,	// (0x00064621) call5_swipe_1_pane_ParamLimits

0x8142,	// (0x00064621) call5_swipe_1_pane

0x8155,	// (0x00064634) call5_swipe_2_pane_ParamLimits

0x8155,	// (0x00064634) call5_swipe_2_pane

0x8180,	// (0x0006465f) popup_call5_audio_first_window_ParamLimits

0x8180,	// (0x0006465f) popup_call5_audio_first_window

0xc98d,	// (0x00068e6c) call5_swipe_1_pane_g1_ParamLimits

0xc98d,	// (0x00068e6c) call5_swipe_1_pane_g1

0xed92,	// (0x0006b271) call5_swipe_1_pane_g2_ParamLimits

0xed92,	// (0x0006b271) call5_swipe_1_pane_g2

0x0001,

0xfbe4,	// (0x0006c0c3) call5_swipe_1_pane_g_ParamLimits

0xfbe4,	// (0x0006c0c3) call5_swipe_1_pane_g

0xed9e,	// (0x0006b27d) call5_swipe_1_pane_t1_ParamLimits

0xed9e,	// (0x0006b27d) call5_swipe_1_pane_t1

0xc98d,	// (0x00068e6c) call5_swipe_2_pane_g1_ParamLimits

0xc98d,	// (0x00068e6c) call5_swipe_2_pane_g1

0xedb3,	// (0x0006b292) call5_swipe_2_pane_g2_ParamLimits

0xedb3,	// (0x0006b292) call5_swipe_2_pane_g2

0x0001,

0xfbe9,	// (0x0006c0c8) call5_swipe_2_pane_g_ParamLimits

0xfbe9,	// (0x0006c0c8) call5_swipe_2_pane_g

0xedbf,	// (0x0006b29e) call5_swipe_2_pane_t1_ParamLimits

0xedbf,	// (0x0006b29e) call5_swipe_2_pane_t1

0xedd4,	// (0x0006b2b3) sc_swipe_pane_g1_ParamLimits

0xedd4,	// (0x0006b2b3) sc_swipe_pane_g1

0xede1,	// (0x0006b2c0) sc_swipe_pane_g2_ParamLimits

0xede1,	// (0x0006b2c0) sc_swipe_pane_g2

0x0001,

0x0716,	// (0x0005cbf5) sc_swipe_pane_g_ParamLimits

0x0716,	// (0x0005cbf5) sc_swipe_pane_g

0xeded,	// (0x0006b2cc) sc_swipe_pane_t1_ParamLimits

0xeded,	// (0x0006b2cc) sc_swipe_pane_t1

0x9a64,	// (0x00065f43) main_cmail_launcher_pane

0x8191,	// (0x00064670) aid_size_cell_cmail_l_ParamLimits

0x8191,	// (0x00064670) aid_size_cell_cmail_l

0x81ab,	// (0x0006468a) grid_cmail_l_pane_ParamLimits

0x81ab,	// (0x0006468a) grid_cmail_l_pane

0x81c6,	// (0x000646a5) cell_cmail_l_pane_ParamLimits

0x81c6,	// (0x000646a5) cell_cmail_l_pane

0x81ec,	// (0x000646cb) cell_cmail_l_pane_g1_ParamLimits

0x81ec,	// (0x000646cb) cell_cmail_l_pane_g1

0x81f8,	// (0x000646d7) cell_cmail_l_pane_t1_ParamLimits

0x81f8,	// (0x000646d7) cell_cmail_l_pane_t1

0xee02,	// (0x0006b2e1) cell_cmail_l_pane_t2_ParamLimits

0xee02,	// (0x0006b2e1) cell_cmail_l_pane_t2

0x0001,

0xfbee,	// (0x0006c0cd) cell_cmail_l_pane_t_ParamLimits

0xfbee,	// (0x0006c0cd) cell_cmail_l_pane_t

0xc21b,	// (0x000686fa) grid_highlight_pane_cp018_ParamLimits

0xc21b,	// (0x000686fa) grid_highlight_pane_cp018

0x0b73,	// (0x0005d052) main2_pane_ParamLimits

0x0b73,	// (0x0005d052) main2_pane

0xa28e,	// (0x0006676d) popup_sp_fs_action_menu_bg_pane_g1

0xa296,	// (0x00066775) popup_sp_fs_action_menu_bg_pane_g2

0xa29e,	// (0x0006677d) popup_sp_fs_action_menu_bg_pane_g3

0xa2a6,	// (0x00066785) popup_sp_fs_action_menu_bg_pane_g4

0xa2ae,	// (0x0006678d) popup_sp_fs_action_menu_bg_pane_g5

0xa2b6,	// (0x00066795) popup_sp_fs_action_menu_bg_pane_g6

0xa2be,	// (0x0006679d) popup_sp_fs_action_menu_bg_pane_g7

0xa2c6,	// (0x000667a5) popup_sp_fs_action_menu_bg_pane_g8

0xa2ce,	// (0x000667ad) popup_sp_fs_action_menu_bg_pane_g9

0xa2d6,	// (0x000667b5) popup_sp_fs_action_menu_bg_pane_g10

0xa2d6,	// (0x000667b5) popup_sp_fs_action_menu_bg_pane_g11

0x000a,

0xf198,	// (0x0006b677) popup_sp_fs_action_menu_bg_pane_g

0x1979,	// (0x0005de58) list_medium_line_x2_t3_g3_g1_ParamLimits

0x1979,	// (0x0005de58) list_medium_line_x2_t3_g3_g1

0x1985,	// (0x0005de64) list_medium_line_x2_t3_g3_g2_ParamLimits

0x1985,	// (0x0005de64) list_medium_line_x2_t3_g3_g2

0x1991,	// (0x0005de70) list_medium_line_x2_t3_g3_g3_ParamLimits

0x1991,	// (0x0005de70) list_medium_line_x2_t3_g3_g3

0x0002,

0xf248,	// (0x0006b727) list_medium_line_x2_t3_g3_g_ParamLimits

0xf248,	// (0x0006b727) list_medium_line_x2_t3_g3_g

0x199d,	// (0x0005de7c) list_medium_line_x2_t3_g3_t1_ParamLimits

0x199d,	// (0x0005de7c) list_medium_line_x2_t3_g3_t1

0x19b2,	// (0x0005de91) list_medium_line_x2_t3_g3_t2_ParamLimits

0x19b2,	// (0x0005de91) list_medium_line_x2_t3_g3_t2

0x19c6,	// (0x0005dea5) list_medium_line_x2_t3_g3_t3_ParamLimits

0x19c6,	// (0x0005dea5) list_medium_line_x2_t3_g3_t3

0x0002,

0xf24f,	// (0x0006b72e) list_medium_line_x2_t3_g3_t_ParamLimits

0xf24f,	// (0x0006b72e) list_medium_line_x2_t3_g3_t

0x1979,	// (0x0005de58) list_medium_line_x2_t3_g2_g1_ParamLimits

0x1979,	// (0x0005de58) list_medium_line_x2_t3_g2_g1

0x1991,	// (0x0005de70) list_medium_line_x2_t3_g2_g2_ParamLimits

0x1991,	// (0x0005de70) list_medium_line_x2_t3_g2_g2

0x0001,

0xf256,	// (0x0006b735) list_medium_line_x2_t3_g2_g_ParamLimits

0xf256,	// (0x0006b735) list_medium_line_x2_t3_g2_g

0x19db,	// (0x0005deba) list_medium_line_x2_t3_g2_t1_ParamLimits

0x19db,	// (0x0005deba) list_medium_line_x2_t3_g2_t1

0x19f1,	// (0x0005ded0) list_medium_line_x2_t3_g2_t2_ParamLimits

0x19f1,	// (0x0005ded0) list_medium_line_x2_t3_g2_t2

0x19c6,	// (0x0005dea5) list_medium_line_x2_t3_g2_t3_ParamLimits

0x19c6,	// (0x0005dea5) list_medium_line_x2_t3_g2_t3

0x0002,

0xf25b,	// (0x0006b73a) list_medium_line_x2_t3_g2_t_ParamLimits

0xf25b,	// (0x0006b73a) list_medium_line_x2_t3_g2_t

0x1979,	// (0x0005de58) list_medium_line_x2_t4_g4_g1_ParamLimits

0x1979,	// (0x0005de58) list_medium_line_x2_t4_g4_g1

0x1a03,	// (0x0005dee2) list_medium_line_x2_t4_g4_g2_ParamLimits

0x1a03,	// (0x0005dee2) list_medium_line_x2_t4_g4_g2

0x1985,	// (0x0005de64) list_medium_line_x2_t4_g4_g3_ParamLimits

0x1985,	// (0x0005de64) list_medium_line_x2_t4_g4_g3

0x1a0f,	// (0x0005deee) list_medium_line_x2_t4_g4_g4_ParamLimits

0x1a0f,	// (0x0005deee) list_medium_line_x2_t4_g4_g4

0x0003,

0xf262,	// (0x0006b741) list_medium_line_x2_t4_g4_g_ParamLimits

0xf262,	// (0x0006b741) list_medium_line_x2_t4_g4_g

0x1a1b,	// (0x0005defa) list_medium_line_x2_t4_g4_t1_ParamLimits

0x1a1b,	// (0x0005defa) list_medium_line_x2_t4_g4_t1

0x1a35,	// (0x0005df14) list_medium_line_x2_t4_g4_t2_ParamLimits

0x1a35,	// (0x0005df14) list_medium_line_x2_t4_g4_t2

0x1a4b,	// (0x0005df2a) list_medium_line_x2_t4_g4_t3_ParamLimits

0x1a4b,	// (0x0005df2a) list_medium_line_x2_t4_g4_t3

0x1a60,	// (0x0005df3f) list_medium_line_x2_t4_g4_t4_ParamLimits

0x1a60,	// (0x0005df3f) list_medium_line_x2_t4_g4_t4

0x0003,

0xf26b,	// (0x0006b74a) list_medium_line_x2_t4_g4_t_ParamLimits

0xf26b,	// (0x0006b74a) list_medium_line_x2_t4_g4_t

0x1979,	// (0x0005de58) list_medium_line_x2_t2_g4_g1_ParamLimits

0x1979,	// (0x0005de58) list_medium_line_x2_t2_g4_g1

0x1a03,	// (0x0005dee2) list_medium_line_x2_t2_g4_g2_ParamLimits

0x1a03,	// (0x0005dee2) list_medium_line_x2_t2_g4_g2

0x1985,	// (0x0005de64) list_medium_line_x2_t2_g4_g3_ParamLimits

0x1985,	// (0x0005de64) list_medium_line_x2_t2_g4_g3

0x1991,	// (0x0005de70) list_medium_line_x2_t2_g4_g4_ParamLimits

0x1991,	// (0x0005de70) list_medium_line_x2_t2_g4_g4

0x0003,

0xf2d2,	// (0x0006b7b1) list_medium_line_x2_t2_g4_g_ParamLimits

0xf2d2,	// (0x0006b7b1) list_medium_line_x2_t2_g4_g

0x271f,	// (0x0005ebfe) list_medium_line_x2_t2_g4_t1_ParamLimits

0x271f,	// (0x0005ebfe) list_medium_line_x2_t2_g4_t1

0x19c6,	// (0x0005dea5) list_medium_line_x2_t2_g4_t2_ParamLimits

0x19c6,	// (0x0005dea5) list_medium_line_x2_t2_g4_t2

0x0001,

0xf2db,	// (0x0006b7ba) list_medium_line_x2_t2_g4_t_ParamLimits

0xf2db,	// (0x0006b7ba) list_medium_line_x2_t2_g4_t

0x1979,	// (0x0005de58) list_medium_line_x2_t2_g3_g1_ParamLimits

0x1979,	// (0x0005de58) list_medium_line_x2_t2_g3_g1

0x1985,	// (0x0005de64) list_medium_line_x2_t2_g3_g2_ParamLimits

0x1985,	// (0x0005de64) list_medium_line_x2_t2_g3_g2

0x1991,	// (0x0005de70) list_medium_line_x2_t2_g3_g3_ParamLimits

0x1991,	// (0x0005de70) list_medium_line_x2_t2_g3_g3

0x0002,

0xf248,	// (0x0006b727) list_medium_line_x2_t2_g3_g_ParamLimits

0xf248,	// (0x0006b727) list_medium_line_x2_t2_g3_g

0x2734,	// (0x0005ec13) list_medium_line_x2_t2_g3_t1_ParamLimits

0x2734,	// (0x0005ec13) list_medium_line_x2_t2_g3_t1

0x19c6,	// (0x0005dea5) list_medium_line_x2_t2_g3_t2_ParamLimits

0x19c6,	// (0x0005dea5) list_medium_line_x2_t2_g3_t2

0x0001,

0xf2e0,	// (0x0006b7bf) list_medium_line_x2_t2_g3_t_ParamLimits

0xf2e0,	// (0x0006b7bf) list_medium_line_x2_t2_g3_t

0x286d,	// (0x0005ed4c) main_sp_fs_list_pane_ParamLimits

0x286d,	// (0x0005ed4c) main_sp_fs_list_pane

0x2879,	// (0x0005ed58) sp_fs_scroll_pane_ParamLimits

0x2879,	// (0x0005ed58) sp_fs_scroll_pane

0x2885,	// (0x0005ed64) list_medium_line_x2_t3_t1

0x2895,	// (0x0005ed74) list_medium_line_x2_t3_t2

0x28a3,	// (0x0005ed82) list_medium_line_x2_t3_t3

0x0002,

0xf32b,	// (0x0006b80a) list_medium_line_x2_t3_t

0x28b1,	// (0x0005ed90) list_medium_line_x3_t4_t1

0x28c1,	// (0x0005eda0) list_medium_line_x3_t4_t2

0x28cf,	// (0x0005edae) list_medium_line_x3_t4_t3

0x28a3,	// (0x0005ed82) list_medium_line_x3_t4_t4

0x0003,

0xf332,	// (0x0006b811) list_medium_line_x3_t4_t

0x28dd,	// (0x0005edbc) list_medium_line_x4_t5_t1

0x28ed,	// (0x0005edcc) list_medium_line_x4_t5_t2

0x28cf,	// (0x0005edae) list_medium_line_x4_t5_t3

0x28fb,	// (0x0005edda) list_medium_line_x4_t5_t4

0x28a3,	// (0x0005ed82) list_medium_line_x4_t5_t5

0x0004,

0xf33b,	// (0x0006b81a) list_medium_line_x4_t5_t

0x1979,	// (0x0005de58) list_medium_line_t4_g4_g1_ParamLimits

0x1979,	// (0x0005de58) list_medium_line_t4_g4_g1

0x1a0f,	// (0x0005deee) list_medium_line_t4_g4_g2_ParamLimits

0x1a0f,	// (0x0005deee) list_medium_line_t4_g4_g2

0x2909,	// (0x0005ede8) list_medium_line_t4_g4_g3_ParamLimits

0x2909,	// (0x0005ede8) list_medium_line_t4_g4_g3

0x1991,	// (0x0005de70) list_medium_line_t4_g4_g4_ParamLimits

0x1991,	// (0x0005de70) list_medium_line_t4_g4_g4

0x0003,

0xf346,	// (0x0006b825) list_medium_line_t4_g4_g_ParamLimits

0xf346,	// (0x0006b825) list_medium_line_t4_g4_g

0x2915,	// (0x0005edf4) list_medium_line_t4_g4_t1_ParamLimits

0x2915,	// (0x0005edf4) list_medium_line_t4_g4_t1

0x292a,	// (0x0005ee09) list_medium_line_t4_g4_t2_ParamLimits

0x292a,	// (0x0005ee09) list_medium_line_t4_g4_t2

0x293f,	// (0x0005ee1e) list_medium_line_t4_g4_t3_ParamLimits

0x293f,	// (0x0005ee1e) list_medium_line_t4_g4_t3

0x19c6,	// (0x0005dea5) list_medium_line_t4_g4_t4_ParamLimits

0x19c6,	// (0x0005dea5) list_medium_line_t4_g4_t4

0x0003,

0xf34f,	// (0x0006b82e) list_medium_line_t4_g4_t_ParamLimits

0xf34f,	// (0x0006b82e) list_medium_line_t4_g4_t

0x2a17,	// (0x0005eef6) chi_dic_find_pane_g1

0x3b93,	// (0x00060072) main_tport_pane

0x6a60,	// (0x00062f3f) list_medium_line_plain_t1

0x6b12,	// (0x00062ff1) list_medium_line_t2_g2_g1_ParamLimits

0x6b12,	// (0x00062ff1) list_medium_line_t2_g2_g1

0x6b1e,	// (0x00062ffd) list_medium_line_t2_g2_g2_ParamLimits

0x6b1e,	// (0x00062ffd) list_medium_line_t2_g2_g2

0x0001,

0xfa04,	// (0x0006bee3) list_medium_line_t2_g2_g_ParamLimits

0xfa04,	// (0x0006bee3) list_medium_line_t2_g2_g

0x6b2a,	// (0x00063009) list_medium_line_t2_g2_t1_ParamLimits

0x6b2a,	// (0x00063009) list_medium_line_t2_g2_t1

0x6b44,	// (0x00063023) list_medium_line_t2_g2_t2_ParamLimits

0x6b44,	// (0x00063023) list_medium_line_t2_g2_t2

0x0001,

0xfa09,	// (0x0006bee8) list_medium_line_t2_g2_t_ParamLimits

0xfa09,	// (0x0006bee8) list_medium_line_t2_g2_t

0x71fb,	// (0x000636da) aid_sp_fs_list_icon_a_sm

0x7203,	// (0x000636e2) aid_sp_fs_list_icon_d

0x720b,	// (0x000636ea) aid_sp_fs_text_primary

0xe2e3,	// (0x0006a7c2) aid_sp_fs_text_secondary

0x7214,	// (0x000636f3) list_medium_line

0x7214,	// (0x000636f3) list_medium_line_g2

0x7214,	// (0x000636f3) list_medium_line_g3

0x7214,	// (0x000636f3) list_medium_line_plain

0x7214,	// (0x000636f3) list_medium_line_plain_t2

0x7214,	// (0x000636f3) list_medium_line_plain_t3

0x7214,	// (0x000636f3) list_medium_line_right_icon

0x7214,	// (0x000636f3) list_medium_line_right_iconx2

0x7214,	// (0x000636f3) list_medium_line_t2

0x7214,	// (0x000636f3) list_medium_line_t2_g2

0x7214,	// (0x000636f3) list_medium_line_t2_g3

0x7214,	// (0x000636f3) list_medium_line_t2_right_icon

0x7214,	// (0x000636f3) list_medium_line_t2_right_iconx2

0x7214,	// (0x000636f3) list_medium_line_t3

0x7214,	// (0x000636f3) list_medium_line_t3_g2

0x7214,	// (0x000636f3) list_medium_line_t3_g3

0x7214,	// (0x000636f3) list_medium_line_t3_right_iconx2

0x721d,	// (0x000636fc) list_medium_line_t4_g4

0x7226,	// (0x00063705) list_medium_line_x2

0x7226,	// (0x00063705) list_medium_line_x2_t2_g2

0x7226,	// (0x00063705) list_medium_line_x2_t2_g3

0x7226,	// (0x00063705) list_medium_line_x2_t2_g4

0x7226,	// (0x00063705) list_medium_line_x2_t3

0x7226,	// (0x00063705) list_medium_line_x2_t3_g2

0x7226,	// (0x00063705) list_medium_line_x2_t3_g3

0x7226,	// (0x00063705) list_medium_line_x2_t3_g4

0x7226,	// (0x00063705) list_medium_line_x2_t4_g2

0x7226,	// (0x00063705) list_medium_line_x2_t4_g4

0x722f,	// (0x0006370e) list_medium_line_x3

0x722f,	// (0x0006370e) list_medium_line_x3_t4

0x722f,	// (0x0006370e) list_medium_line_x3_t4_g4

0x721d,	// (0x000636fc) list_medium_line_x4_t4

0x721d,	// (0x000636fc) list_medium_line_x4_t4_g7

0x721d,	// (0x000636fc) list_medium_line_x4_t5

0x7238,	// (0x00063717) list_single_fs_dyc_pane_ParamLimits

0x7238,	// (0x00063717) list_single_fs_dyc_pane

0x1979,	// (0x0005de58) list_medium_line_x4_t4_g7_g1_ParamLimits

0x1979,	// (0x0005de58) list_medium_line_x4_t4_g7_g1

0x79af,	// (0x00063e8e) list_medium_line_x4_t4_g7_g2_ParamLimits

0x79af,	// (0x00063e8e) list_medium_line_x4_t4_g7_g2

0x79bb,	// (0x00063e9a) list_medium_line_x4_t4_g7_g3_ParamLimits

0x79bb,	// (0x00063e9a) list_medium_line_x4_t4_g7_g3

0x79ca,	// (0x00063ea9) list_medium_line_x4_t4_g7_g4_ParamLimits

0x79ca,	// (0x00063ea9) list_medium_line_x4_t4_g7_g4

0x79d6,	// (0x00063eb5) list_medium_line_x4_t4_g7_g5_ParamLimits

0x79d6,	// (0x00063eb5) list_medium_line_x4_t4_g7_g5

0x79e5,	// (0x00063ec4) list_medium_line_x4_t4_g7_g6_ParamLimits

0x79e5,	// (0x00063ec4) list_medium_line_x4_t4_g7_g6

0x79f4,	// (0x00063ed3) list_medium_line_x4_t4_g7_g7_ParamLimits

0x79f4,	// (0x00063ed3) list_medium_line_x4_t4_g7_g7

0x0006,

0xfb51,	// (0x0006c030) list_medium_line_x4_t4_g7_g_ParamLimits

0xfb51,	// (0x0006c030) list_medium_line_x4_t4_g7_g

0x7a00,	// (0x00063edf) list_medium_line_x4_t4_g7_t1_ParamLimits

0x7a00,	// (0x00063edf) list_medium_line_x4_t4_g7_t1

0x7a15,	// (0x00063ef4) list_medium_line_x4_t4_g7_t2_ParamLimits

0x7a15,	// (0x00063ef4) list_medium_line_x4_t4_g7_t2

0x7a2a,	// (0x00063f09) list_medium_line_x4_t4_g7_t3_ParamLimits

0x7a2a,	// (0x00063f09) list_medium_line_x4_t4_g7_t3

0x7a3f,	// (0x00063f1e) list_medium_line_x4_t4_g7_t4_ParamLimits

0x7a3f,	// (0x00063f1e) list_medium_line_x4_t4_g7_t4

0x7a51,	// (0x00063f30) list_medium_line_x4_t4_g7_t5_ParamLimits

0x7a51,	// (0x00063f30) list_medium_line_x4_t4_g7_t5

0x0004,

0xfb60,	// (0x0006c03f) list_medium_line_x4_t4_g7_t_ParamLimits

0xfb60,	// (0x0006c03f) list_medium_line_x4_t4_g7_t

0x7a63,	// (0x00063f42) list_single_dyc_row_pane_ParamLimits

0x7a63,	// (0x00063f42) list_single_dyc_row_pane

0x8112,	// (0x000645f1) call5_gesture_pane_ParamLimits

0x8112,	// (0x000645f1) call5_gesture_pane

0x8168,	// (0x00064647) call5_windows_pane_ParamLimits

0x8168,	// (0x00064647) call5_windows_pane

0x820e,	// (0x000646ed) call5_swipe_1_pane_cp_ParamLimits

0x820e,	// (0x000646ed) call5_swipe_1_pane_cp

0x821a,	// (0x000646f9) call5_swipe_2_pane_cp_ParamLimits

0x821a,	// (0x000646f9) call5_swipe_2_pane_cp

0xadcb,	// (0x000672aa) call5_image_pane_cp

0x8226,	// (0x00064705) popup_call5_audio_first_window_cp_ParamLimits

0x8226,	// (0x00064705) popup_call5_audio_first_window_cp

0xedd4,	// (0x0006b2b3) call5_swipe_1_pane_g1_cp_ParamLimits

0xedd4,	// (0x0006b2b3) call5_swipe_1_pane_g1_cp

0xee14,	// (0x0006b2f3) call5_swipe_1_pane_g2_cp

0xeded,	// (0x0006b2cc) call5_swipe_1_pane_t1_cp_ParamLimits

0xeded,	// (0x0006b2cc) call5_swipe_1_pane_t1_cp

0xedd4,	// (0x0006b2b3) call5_swipe_2_pane_g1_cp_ParamLimits

0xedd4,	// (0x0006b2b3) call5_swipe_2_pane_g1_cp

0xee1c,	// (0x0006b2fb) call5_swipe_2_pane_g2_cp

0xee24,	// (0x0006b303) call5_swipe_2_pane_t1_cp_ParamLimits

0xee24,	// (0x0006b303) call5_swipe_2_pane_t1_cp

0xc21b,	// (0x000686fa) main_sp_fs_email_pane

0xee39,	// (0x0006b318) main_sp_fs_listscroll_pane_te

0x8234,	// (0x00064713) popup_sp_fs_action_menu_pane_ParamLimits

0x8234,	// (0x00064713) popup_sp_fs_action_menu_pane

0xc721,	// (0x00068c00) bg_sp_fs_ctrlbar_pane_g1

0xee42,	// (0x0006b321) bg_sp_fs_ctrlbar_ddmenu_pane_g1

0xee4b,	// (0x0006b32a) bg_sp_fs_ctrlbar_ddmenu_pane_g2

0xee54,	// (0x0006b333) bg_sp_fs_ctrlbar_ddmenu_pane_g3

0xc721,	// (0x00068c00) bg_sp_fs_ctrlbar_ddmenu_pane_g4

0x0003,

0xfbf3,	// (0x0006c0d2) bg_sp_fs_ctrlbar_ddmenu_pane_g

0xc506,	// (0x000689e5) bg_sp_fs_ctrlbar_ddmenu_pane_ParamLimits

0xc506,	// (0x000689e5) bg_sp_fs_ctrlbar_ddmenu_pane

0xee5d,	// (0x0006b33c) main_sp_fs_ctrlbar_ddmenu_pane_g1_ParamLimits

0xee5d,	// (0x0006b33c) main_sp_fs_ctrlbar_ddmenu_pane_g1

0xee69,	// (0x0006b348) main_sp_fs_ctrlbar_ddmenu_pane_g2_ParamLimits

0xee69,	// (0x0006b348) main_sp_fs_ctrlbar_ddmenu_pane_g2

0x0001,

0x0729,	// (0x0005cc08) main_sp_fs_ctrlbar_ddmenu_pane_g_ParamLimits

0x0729,	// (0x0005cc08) main_sp_fs_ctrlbar_ddmenu_pane_g

0xee75,	// (0x0006b354) main_sp_fs_ctrlbar_ddmenu_pane_t1_ParamLimits

0xee75,	// (0x0006b354) main_sp_fs_ctrlbar_ddmenu_pane_t1

0x8278,	// (0x00064757) list_medium_line_t2_right_icon_g1

0x8280,	// (0x0006475f) list_medium_line_t2_right_icon_t1

0x8290,	// (0x0006476f) list_medium_line_t2_right_icon_t2

0x0001,

0xfbfc,	// (0x0006c0db) list_medium_line_t2_right_icon_t

0xc20d,	// (0x000686ec) bg_sp_fs_ctrlbar_pane_ParamLimits

0xc20d,	// (0x000686ec) bg_sp_fs_ctrlbar_pane

0x82ed,	// (0x000647cc) main_sp_fs_ctrlbar_button_pane_cp01

0x82f7,	// (0x000647d6) main_sp_fs_ctrlbar_ddmenu_pane

0xeec7,	// (0x0006b3a6) main_sp_fs_ctrlbar_pane_g1

0xeed3,	// (0x0006b3b2) main_sp_fs_ctrlbar_pane_g2

0x0001,

0x0733,	// (0x0005cc12) main_sp_fs_ctrlbar_pane_g

0xeedf,	// (0x0006b3be) main_sp_fs_ctrlbar_pane_t1

0x8301,	// (0x000647e0) main_sp_fs_ctrlbar_pane

0x8325,	// (0x00064804) main_sp_fs_listscroll_pane_te_cp01

0x8345,	// (0x00064824) popup_sp_fs_action_menu_pane_cp01_ParamLimits

0x8345,	// (0x00064824) popup_sp_fs_action_menu_pane_cp01

0xc21b,	// (0x000686fa) bg_sp_fs_highlight_list_pane_cp01_ParamLimits

0xc21b,	// (0x000686fa) bg_sp_fs_highlight_list_pane_cp01

0x8375,	// (0x00064854) sp_fs_action_menu_list_gene_pane_g1_ParamLimits

0x8375,	// (0x00064854) sp_fs_action_menu_list_gene_pane_g1

0xef04,	// (0x0006b3e3) sp_fs_action_menu_list_gene_pane_g2_ParamLimits

0xef04,	// (0x0006b3e3) sp_fs_action_menu_list_gene_pane_g2

0x0001,

0xfc01,	// (0x0006c0e0) sp_fs_action_menu_list_gene_pane_g_ParamLimits

0xfc01,	// (0x0006c0e0) sp_fs_action_menu_list_gene_pane_g

0x8384,	// (0x00064863) sp_fs_action_menu_list_gene_pane_t1_ParamLimits

0x8384,	// (0x00064863) sp_fs_action_menu_list_gene_pane_t1

0x839c,	// (0x0006487b) sp_fs_action_menu_list_gene_pane_ParamLimits

0x839c,	// (0x0006487b) sp_fs_action_menu_list_gene_pane

0xef11,	// (0x0006b3f0) popup_sp_fs_action_menu_bg_pane_ParamLimits

0xef11,	// (0x0006b3f0) popup_sp_fs_action_menu_bg_pane

0x83bb,	// (0x0006489a) sp_fs_action_menu_list_pane_ParamLimits

0x83bb,	// (0x0006489a) sp_fs_action_menu_list_pane

0xef1f,	// (0x0006b3fe) sp_fs_scroll_pane_cp01_ParamLimits

0xef1f,	// (0x0006b3fe) sp_fs_scroll_pane_cp01

0x83db,	// (0x000648ba) list_medium_line_plain_t2_t1

0x83eb,	// (0x000648ca) list_medium_line_plain_t2_t2

0x0001,

0xfc06,	// (0x0006c0e5) list_medium_line_plain_t2_t

0x83fb,	// (0x000648da) list_medium_line_plain_t3_t1

0x840b,	// (0x000648ea) list_medium_line_plain_t3_t2

0x8419,	// (0x000648f8) list_medium_line_plain_t3_t3

0x0002,

0xfc0b,	// (0x0006c0ea) list_medium_line_plain_t3_t

0x1979,	// (0x0005de58) list_medium_line_x2_t2_g2_g1_ParamLimits

0x1979,	// (0x0005de58) list_medium_line_x2_t2_g2_g1

0x1991,	// (0x0005de70) list_medium_line_x2_t2_g2_g2_ParamLimits

0x1991,	// (0x0005de70) list_medium_line_x2_t2_g2_g2

0x0001,

0xf256,	// (0x0006b735) list_medium_line_x2_t2_g2_g_ParamLimits

0xf256,	// (0x0006b735) list_medium_line_x2_t2_g2_g

0x2915,	// (0x0005edf4) list_medium_line_x2_t2_g2_t1_ParamLimits

0x2915,	// (0x0005edf4) list_medium_line_x2_t2_g2_t1

0x19c6,	// (0x0005dea5) list_medium_line_x2_t2_g2_t2_ParamLimits

0x19c6,	// (0x0005dea5) list_medium_line_x2_t2_g2_t2

0x0001,

0xfc12,	// (0x0006c0f1) list_medium_line_x2_t2_g2_t_ParamLimits

0xfc12,	// (0x0006c0f1) list_medium_line_x2_t2_g2_t

0x1979,	// (0x0005de58) list_medium_line_x2_t4_g2_g1_ParamLimits

0x1979,	// (0x0005de58) list_medium_line_x2_t4_g2_g1

0x8427,	// (0x00064906) list_medium_line_x2_t4_g2_g2_ParamLimits

0x8427,	// (0x00064906) list_medium_line_x2_t4_g2_g2

0x0001,

0xfc17,	// (0x0006c0f6) list_medium_line_x2_t4_g2_g_ParamLimits

0xfc17,	// (0x0006c0f6) list_medium_line_x2_t4_g2_g

0x8439,	// (0x00064918) list_medium_line_x2_t4_g2_t1_ParamLimits

0x8439,	// (0x00064918) list_medium_line_x2_t4_g2_t1

0x8450,	// (0x0006492f) list_medium_line_x2_t4_g2_t2_ParamLimits

0x8450,	// (0x0006492f) list_medium_line_x2_t4_g2_t2

0x8465,	// (0x00064944) list_medium_line_x2_t4_g2_t3_ParamLimits

0x8465,	// (0x00064944) list_medium_line_x2_t4_g2_t3

0x19c6,	// (0x0005dea5) list_medium_line_x2_t4_g2_t4_ParamLimits

0x19c6,	// (0x0005dea5) list_medium_line_x2_t4_g2_t4

0x0003,

0xfc1c,	// (0x0006c0fb) list_medium_line_x2_t4_g2_t_ParamLimits

0xfc1c,	// (0x0006c0fb) list_medium_line_x2_t4_g2_t

0x8477,	// (0x00064956) list_medium_line_t3_right_iconx2_g1

0x8278,	// (0x00064757) list_medium_line_t3_right_iconx2_g2

0x847f,	// (0x0006495e) list_medium_line_t3_right_iconx2_g3

0x0002,

0xfc25,	// (0x0006c104) list_medium_line_t3_right_iconx2_g

0x8489,	// (0x00064968) list_medium_line_t3_right_iconx2_t1

0x8499,	// (0x00064978) list_medium_line_t3_right_iconx2_t2

0x0001,

0xfc2c,	// (0x0006c10b) list_medium_line_t3_right_iconx2_t

0x1979,	// (0x0005de58) list_medium_line_x3_t4_g4_g1_ParamLimits

0x1979,	// (0x0005de58) list_medium_line_x3_t4_g4_g1

0x1985,	// (0x0005de64) list_medium_line_x3_t4_g4_g2_ParamLimits

0x1985,	// (0x0005de64) list_medium_line_x3_t4_g4_g2

0x1a0f,	// (0x0005deee) list_medium_line_x3_t4_g4_g3_ParamLimits

0x1a0f,	// (0x0005deee) list_medium_line_x3_t4_g4_g3

0x84a7,	// (0x00064986) list_medium_line_x3_t4_g4_g4_ParamLimits

0x84a7,	// (0x00064986) list_medium_line_x3_t4_g4_g4

0x0003,

0xfc31,	// (0x0006c110) list_medium_line_x3_t4_g4_g_ParamLimits

0xfc31,	// (0x0006c110) list_medium_line_x3_t4_g4_g

0x84b3,	// (0x00064992) list_medium_line_x3_t4_g4_t1_ParamLimits

0x84b3,	// (0x00064992) list_medium_line_x3_t4_g4_t1

0x84ca,	// (0x000649a9) list_medium_line_x3_t4_g4_t2_ParamLimits

0x84ca,	// (0x000649a9) list_medium_line_x3_t4_g4_t2

0x292a,	// (0x0005ee09) list_medium_line_x3_t4_g4_t3_ParamLimits

0x292a,	// (0x0005ee09) list_medium_line_x3_t4_g4_t3

0x84e5,	// (0x000649c4) list_medium_line_x3_t4_g4_t4_ParamLimits

0x84e5,	// (0x000649c4) list_medium_line_x3_t4_g4_t4

0x0003,

0xfc3a,	// (0x0006c119) list_medium_line_x3_t4_g4_t_ParamLimits

0xfc3a,	// (0x0006c119) list_medium_line_x3_t4_g4_t

0x8502,	// (0x000649e1) list_single_dyc_row_text_pane_t1_ParamLimits

0x8502,	// (0x000649e1) list_single_dyc_row_text_pane_t1

0x854b,	// (0x00064a2a) list_single_dyc_row_text_pane_t2_ParamLimits

0x854b,	// (0x00064a2a) list_single_dyc_row_text_pane_t2

0x85a5,	// (0x00064a84) list_single_dyc_row_text_pane_t3_ParamLimits

0x85a5,	// (0x00064a84) list_single_dyc_row_text_pane_t3

0x0002,

0xfc43,	// (0x0006c122) list_single_dyc_row_text_pane_t_ParamLimits

0xfc43,	// (0x0006c122) list_single_dyc_row_text_pane_t

0x85b7,	// (0x00064a96) list_single_dyc_row_pane_g1_ParamLimits

0x85b7,	// (0x00064a96) list_single_dyc_row_pane_g1

0x85c3,	// (0x00064aa2) list_single_dyc_row_pane_g2_ParamLimits

0x85c3,	// (0x00064aa2) list_single_dyc_row_pane_g2

0x85cf,	// (0x00064aae) list_single_dyc_row_pane_g3_ParamLimits

0x85cf,	// (0x00064aae) list_single_dyc_row_pane_g3

0x85db,	// (0x00064aba) list_single_dyc_row_pane_g4_ParamLimits

0x85db,	// (0x00064aba) list_single_dyc_row_pane_g4

0x0003,

0xfc4a,	// (0x0006c129) list_single_dyc_row_pane_g_ParamLimits

0xfc4a,	// (0x0006c129) list_single_dyc_row_pane_g

0x85e7,	// (0x00064ac6) list_single_dyc_row_text_pane_ParamLimits

0x85e7,	// (0x00064ac6) list_single_dyc_row_text_pane

0x0aa3,	// (0x0005cf82) bg_sp_fs_scroll_pane

0xef45,	// (0x0006b424) thumb_sp_fs_scroll_pane

0x6b12,	// (0x00062ff1) list_medium_line_g1_ParamLimits

0x6b12,	// (0x00062ff1) list_medium_line_g1

0x8606,	// (0x00064ae5) list_medium_line_t1_ParamLimits

0x8606,	// (0x00064ae5) list_medium_line_t1

0x1979,	// (0x0005de58) list_medium_line_x2_g1_ParamLimits

0x1979,	// (0x0005de58) list_medium_line_x2_g1

0x1985,	// (0x0005de64) list_medium_line_x2_g2_ParamLimits

0x1985,	// (0x0005de64) list_medium_line_x2_g2

0x0001,

0xfc53,	// (0x0006c132) list_medium_line_x2_g_ParamLimits

0xfc53,	// (0x0006c132) list_medium_line_x2_g

0x861b,	// (0x00064afa) list_medium_line_x2_t1_ParamLimits

0x861b,	// (0x00064afa) list_medium_line_x2_t1

0x1979,	// (0x0005de58) list_medium_line_x3_g1_ParamLimits

0x1979,	// (0x0005de58) list_medium_line_x3_g1

0x1985,	// (0x0005de64) list_medium_line_x3_g2_ParamLimits

0x1985,	// (0x0005de64) list_medium_line_x3_g2

0x0001,

0xfc53,	// (0x0006c132) list_medium_line_x3_g_ParamLimits

0xfc53,	// (0x0006c132) list_medium_line_x3_g

0x861b,	// (0x00064afa) list_medium_line_x3_t1_ParamLimits

0x861b,	// (0x00064afa) list_medium_line_x3_t1

0xef4e,	// (0x0006b42d) thumb_sp_fs_scroll_pane_g1

0xef57,	// (0x0006b436) thumb_sp_fs_scroll_pane_g2

0xef60,	// (0x0006b43f) thumb_sp_fs_scroll_pane_g3

0x0002,

0x0794,	// (0x0005cc73) thumb_sp_fs_scroll_pane_g

0xef4e,	// (0x0006b42d) bg_sp_fs_scroll_pane_g1

0xef57,	// (0x0006b436) bg_sp_fs_scroll_pane_g2

0xef60,	// (0x0006b43f) bg_sp_fs_scroll_pane_g3

0x0002,

0x0794,	// (0x0005cc73) bg_sp_fs_scroll_pane_g

0x1979,	// (0x0005de58) list_medium_line_x2_t3_g4_g1_ParamLimits

0x1979,	// (0x0005de58) list_medium_line_x2_t3_g4_g1

0x1a03,	// (0x0005dee2) list_medium_line_x2_t3_g4_g2_ParamLimits

0x1a03,	// (0x0005dee2) list_medium_line_x2_t3_g4_g2

0x1985,	// (0x0005de64) list_medium_line_x2_t3_g4_g3_ParamLimits

0x1985,	// (0x0005de64) list_medium_line_x2_t3_g4_g3

0x1991,	// (0x0005de70) list_medium_line_x2_t3_g4_g4_ParamLimits

0x1991,	// (0x0005de70) list_medium_line_x2_t3_g4_g4

0x0003,

0xf2d2,	// (0x0006b7b1) list_medium_line_x2_t3_g4_g_ParamLimits

0xf2d2,	// (0x0006b7b1) list_medium_line_x2_t3_g4_g

0x8631,	// (0x00064b10) list_medium_line_x2_t3_g4_t1_ParamLimits

0x8631,	// (0x00064b10) list_medium_line_x2_t3_g4_t1

0x864b,	// (0x00064b2a) list_medium_line_x2_t3_g4_t2_ParamLimits

0x864b,	// (0x00064b2a) list_medium_line_x2_t3_g4_t2

0x19c6,	// (0x0005dea5) list_medium_line_x2_t3_g4_t3_ParamLimits

0x19c6,	// (0x0005dea5) list_medium_line_x2_t3_g4_t3

0x0002,

0xfc58,	// (0x0006c137) list_medium_line_x2_t3_g4_t_ParamLimits

0xfc58,	// (0x0006c137) list_medium_line_x2_t3_g4_t

0x6b12,	// (0x00062ff1) list_medium_line_g2_g1_ParamLimits

0x6b12,	// (0x00062ff1) list_medium_line_g2_g1

0x6b1e,	// (0x00062ffd) list_medium_line_g2_g2_ParamLimits

0x6b1e,	// (0x00062ffd) list_medium_line_g2_g2

0x0001,

0xfa04,	// (0x0006bee3) list_medium_line_g2_g_ParamLimits

0xfa04,	// (0x0006bee3) list_medium_line_g2_g

0x8665,	// (0x00064b44) list_medium_line_g2_t1_ParamLimits

0x8665,	// (0x00064b44) list_medium_line_g2_t1

0x6b12,	// (0x00062ff1) list_medium_line_t3_g2_g1_ParamLimits

0x6b12,	// (0x00062ff1) list_medium_line_t3_g2_g1

0x6b1e,	// (0x00062ffd) list_medium_line_t3_g2_g2_ParamLimits

0x6b1e,	// (0x00062ffd) list_medium_line_t3_g2_g2

0x0001,

0xfa04,	// (0x0006bee3) list_medium_line_t3_g2_g_ParamLimits

0xfa04,	// (0x0006bee3) list_medium_line_t3_g2_g

0x867a,	// (0x00064b59) list_medium_line_t3_g2_t1_ParamLimits

0x867a,	// (0x00064b59) list_medium_line_t3_g2_t1

0x8694,	// (0x00064b73) list_medium_line_t3_g2_t2_ParamLimits

0x8694,	// (0x00064b73) list_medium_line_t3_g2_t2

0x86a9,	// (0x00064b88) list_medium_line_t3_g2_t3_ParamLimits

0x86a9,	// (0x00064b88) list_medium_line_t3_g2_t3

0x0002,

0xfc5f,	// (0x0006c13e) list_medium_line_t3_g2_t_ParamLimits

0xfc5f,	// (0x0006c13e) list_medium_line_t3_g2_t

0x8278,	// (0x00064757) list_medium_line_right_icon_g1

0x86c3,	// (0x00064ba2) list_medium_line_right_icon_t1

0x6b12,	// (0x00062ff1) list_medium_line_t2_g1_ParamLimits

0x6b12,	// (0x00062ff1) list_medium_line_t2_g1

0x86d1,	// (0x00064bb0) list_medium_line_t2_t1_ParamLimits

0x86d1,	// (0x00064bb0) list_medium_line_t2_t1

0x86eb,	// (0x00064bca) list_medium_line_t2_t2_ParamLimits

0x86eb,	// (0x00064bca) list_medium_line_t2_t2

0x0001,

0xfc66,	// (0x0006c145) list_medium_line_t2_t_ParamLimits

0xfc66,	// (0x0006c145) list_medium_line_t2_t

0x6b12,	// (0x00062ff1) list_medium_line_t3_g1_ParamLimits

0x6b12,	// (0x00062ff1) list_medium_line_t3_g1

0x8704,	// (0x00064be3) list_medium_line_t3_t1_ParamLimits

0x8704,	// (0x00064be3) list_medium_line_t3_t1

0x871b,	// (0x00064bfa) list_medium_line_t3_t2_ParamLimits

0x871b,	// (0x00064bfa) list_medium_line_t3_t2

0x8730,	// (0x00064c0f) list_medium_line_t3_t3_ParamLimits

0x8730,	// (0x00064c0f) list_medium_line_t3_t3

0x0002,

0xfc6b,	// (0x0006c14a) list_medium_line_t3_t_ParamLimits

0xfc6b,	// (0x0006c14a) list_medium_line_t3_t

0x6b12,	// (0x00062ff1) list_medium_line_g3_g1_ParamLimits

0x6b12,	// (0x00062ff1) list_medium_line_g3_g1

0x8742,	// (0x00064c21) list_medium_line_g3_g2_ParamLimits

0x8742,	// (0x00064c21) list_medium_line_g3_g2

0x6b1e,	// (0x00062ffd) list_medium_line_g3_g3_ParamLimits

0x6b1e,	// (0x00062ffd) list_medium_line_g3_g3

0x0002,

0xfc72,	// (0x0006c151) list_medium_line_g3_g_ParamLimits

0xfc72,	// (0x0006c151) list_medium_line_g3_g

0x874e,	// (0x00064c2d) list_medium_line_g3_t1_ParamLimits

0x874e,	// (0x00064c2d) list_medium_line_g3_t1

0x6b12,	// (0x00062ff1) list_medium_line_t2_g3_g1_ParamLimits

0x6b12,	// (0x00062ff1) list_medium_line_t2_g3_g1

0x8742,	// (0x00064c21) list_medium_line_t2_g3_g2_ParamLimits

0x8742,	// (0x00064c21) list_medium_line_t2_g3_g2

0x6b1e,	// (0x00062ffd) list_medium_line_t2_g3_g3_ParamLimits

0x6b1e,	// (0x00062ffd) list_medium_line_t2_g3_g3

0x0002,

0xfc72,	// (0x0006c151) list_medium_line_t2_g3_g_ParamLimits

0xfc72,	// (0x0006c151) list_medium_line_t2_g3_g

0x8763,	// (0x00064c42) list_medium_line_t2_g3_t1_ParamLimits

0x8763,	// (0x00064c42) list_medium_line_t2_g3_t1

0x877d,	// (0x00064c5c) list_medium_line_t2_g3_t2_ParamLimits

0x877d,	// (0x00064c5c) list_medium_line_t2_g3_t2

0x0001,

0xfc79,	// (0x0006c158) list_medium_line_t2_g3_t_ParamLimits

0xfc79,	// (0x0006c158) list_medium_line_t2_g3_t

0x6b12,	// (0x00062ff1) list_medium_line_t3_g3_g1_ParamLimits

0x6b12,	// (0x00062ff1) list_medium_line_t3_g3_g1

0x8742,	// (0x00064c21) list_medium_line_t3_g3_g2_ParamLimits

0x8742,	// (0x00064c21) list_medium_line_t3_g3_g2

0x6b1e,	// (0x00062ffd) list_medium_line_t3_g3_g3_ParamLimits

0x6b1e,	// (0x00062ffd) list_medium_line_t3_g3_g3

0x0002,

0xfc72,	// (0x0006c151) list_medium_line_t3_g3_g_ParamLimits

0xfc72,	// (0x0006c151) list_medium_line_t3_g3_g

0x8798,	// (0x00064c77) list_medium_line_t3_g3_t1_ParamLimits

0x8798,	// (0x00064c77) list_medium_line_t3_g3_t1

0x87ac,	// (0x00064c8b) list_medium_line_t3_g3_t2_ParamLimits

0x87ac,	// (0x00064c8b) list_medium_line_t3_g3_t2

0x87be,	// (0x00064c9d) list_medium_line_t3_g3_t3_ParamLimits

0x87be,	// (0x00064c9d) list_medium_line_t3_g3_t3

0x0002,

0xfc7e,	// (0x0006c15d) list_medium_line_t3_g3_t_ParamLimits

0xfc7e,	// (0x0006c15d) list_medium_line_t3_g3_t

0x8477,	// (0x00064956) list_medium_line_right_iconx2_g1

0x8278,	// (0x00064757) list_medium_line_right_iconx2_g2

0x0001,

0xfc85,	// (0x0006c164) list_medium_line_right_iconx2_g

0x87d2,	// (0x00064cb1) list_medium_line_right_iconx2_t1

0x8477,	// (0x00064956) list_medium_line_t2_right_iconx2_g1

0x8278,	// (0x00064757) list_medium_line_t2_right_iconx2_g2

0x0001,

0xfc85,	// (0x0006c164) list_medium_line_t2_right_iconx2_g

0x87e0,	// (0x00064cbf) list_medium_line_t2_right_iconx2_t1

0x87f0,	// (0x00064ccf) list_medium_line_t2_right_iconx2_t2

0x0001,

0xfc8a,	// (0x0006c169) list_medium_line_t2_right_iconx2_t

0x8802,	// (0x00064ce1) list_medium_line_x4_t4_t1

0x8810,	// (0x00064cef) list_medium_line_x4_t4_t2

0x8820,	// (0x00064cff) list_medium_line_x4_t4_t3

0x8830,	// (0x00064d0f) list_medium_line_x4_t4_t4

0x0003,

0xfc8f,	// (0x0006c16e) list_medium_line_x4_t4_t

0x8883,	// (0x00064d62) tport_appsw_pane_ParamLimits

0x8883,	// (0x00064d62) tport_appsw_pane

0x8894,	// (0x00064d73) tport_contact_pane_ParamLimits

0x8894,	// (0x00064d73) tport_contact_pane

0x88ad,	// (0x00064d8c) tport_listscroll_pane_ParamLimits

0x88ad,	// (0x00064d8c) tport_listscroll_pane

0x88c8,	// (0x00064da7) cell_tport_appsw_pane_ParamLimits

0x88c8,	// (0x00064da7) cell_tport_appsw_pane

0xdd12,	// (0x0006a1f1) tport_appsw_pane_g1_ParamLimits

0xdd12,	// (0x0006a1f1) tport_appsw_pane_g1

0xef69,	// (0x0006b448) tport_contact_pane_g1

0xe8e1,	// (0x0006adc0) tport_contact_pane_t1

0xef72,	// (0x0006b451) tport_contact_pane_t2

0x0001,

0x07db,	// (0x0005ccba) tport_contact_pane_t

0xef80,	// (0x0006b45f) list_tport_pane

0xef89,	// (0x0006b468) scroll_pane_cp_030

0xef9a,	// (0x0006b479) cell_tport_appsw_pane_g1

0xefaa,	// (0x0006b489) cell_tport_appsw_pane_t1

0x0aa3,	// (0x0005cf82) grid_highlight_pane_cp019

0x8908,	// (0x00064de7) list_tport_double_graphic_pane_ParamLimits

0x8908,	// (0x00064de7) list_tport_double_graphic_pane

0xc21b,	// (0x000686fa) list_highlight_pane_cp023_ParamLimits

0xc21b,	// (0x000686fa) list_highlight_pane_cp023

0x8915,	// (0x00064df4) list_tport_double_graphic_pane_g1_ParamLimits

0x8915,	// (0x00064df4) list_tport_double_graphic_pane_g1

0x8922,	// (0x00064e01) list_tport_double_graphic_pane_t1_ParamLimits

0x8922,	// (0x00064e01) list_tport_double_graphic_pane_t1

0x8937,	// (0x00064e16) list_tport_double_graphic_pane_t2_ParamLimits

0x8937,	// (0x00064e16) list_tport_double_graphic_pane_t2

0x0001,

0xfc98,	// (0x0006c177) list_tport_double_graphic_pane_t_ParamLimits

0xfc98,	// (0x0006c177) list_tport_double_graphic_pane_t

0x0aa3,	// (0x0005cf82) main_cale_note_pane

0x626e,	// (0x0006274d) cell_vitu2_function_top_wide_pane_cp01_ParamLimits

0x626e,	// (0x0006274d) cell_vitu2_function_top_wide_pane_cp01

0x7dc6,	// (0x000642a5) wait_bar_pane_cp05_ParamLimits

0x0aa3,	// (0x0005cf82) listscroll_cmail_pane

0xefc0,	// (0x0006b49f) list_cmail_pane

0xe038,	// (0x0006a517) list_cmail_body_pane

0x8953,	// (0x00064e32) list_single_cmail_header_caption_pane

0x8969,	// (0x00064e48) list_single_cmail_header_detail_pane_ParamLimits

0x8969,	// (0x00064e48) list_single_cmail_header_detail_pane

0x8992,	// (0x00064e71) list_single_cmail_header_caption_pane_t1

0x89a2,	// (0x00064e81) list_single_cmail_header_detail_pane_g1_ParamLimits

0x89a2,	// (0x00064e81) list_single_cmail_header_detail_pane_g1

0x89ba,	// (0x00064e99) list_single_cmail_header_detail_pane_g2_ParamLimits

0x89ba,	// (0x00064e99) list_single_cmail_header_detail_pane_g2

0x0002,

0xfc9d,	// (0x0006c17c) list_single_cmail_header_detail_pane_g_ParamLimits

0xfc9d,	// (0x0006c17c) list_single_cmail_header_detail_pane_g

0x89c6,	// (0x00064ea5) list_single_cmail_header_detail_pane_t1_ParamLimits

0x89c6,	// (0x00064ea5) list_single_cmail_header_detail_pane_t1

0x8a22,	// (0x00064f01) list_single_cmail_header_editor_pane_bg_ParamLimits

0x8a22,	// (0x00064f01) list_single_cmail_header_editor_pane_bg

0xea82,	// (0x0006af61) list_cmail_body_pane_g1

0xefee,	// (0x0006b4cd) list_cmail_body_pane_t1

0xde45,	// (0x0006a324) list_single_cmail_header_editor_pane_bg_g1

0xa641,	// (0x00066b20) list_single_cmail_header_editor_pane_bg_g1_copy1

0xde55,	// (0x0006a334) list_single_cmail_header_editor_pane_bg_g1_copy2

0xde4d,	// (0x0006a32c) list_single_cmail_header_editor_pane_bg_g1_copy3

0xe069,	// (0x0006a548) list_single_cmail_header_editor_pane_bg_g1_copy4

0xde75,	// (0x0006a354) list_single_cmail_header_editor_pane_bg_g1_copy4_copy1

0xde65,	// (0x0006a344) list_single_cmail_header_editor_pane_bg_g1_copy4_copy2

0xde6d,	// (0x0006a34c) list_single_cmail_header_editor_pane_bg_g1_copy4_copy3

0xa621,	// (0x00066b00) list_single_cmail_header_editor_pane_bg_g1_copy4_copy3_copy1

0x8a34,	// (0x00064f13) calenote_gesture_pane_ParamLimits

0x8a34,	// (0x00064f13) calenote_gesture_pane

0x8a54,	// (0x00064f33) calenote_window_pane_ParamLimits

0x8a54,	// (0x00064f33) calenote_window_pane

0xeffc,	// (0x0006b4db) popup_note_window_cp01

0x8a70,	// (0x00064f4f) calenote_swipe_1_pane_ParamLimits

0x8a70,	// (0x00064f4f) calenote_swipe_1_pane

0x821a,	// (0x000646f9) calenote_swipe_2_pane_ParamLimits

0x821a,	// (0x000646f9) calenote_swipe_2_pane

0xedd4,	// (0x0006b2b3) calenote_swipe_1_pane_g1_ParamLimits

0xedd4,	// (0x0006b2b3) calenote_swipe_1_pane_g1

0xede1,	// (0x0006b2c0) calenote_swipe_1_pane_g2_ParamLimits

0xede1,	// (0x0006b2c0) calenote_swipe_1_pane_g2

0x0001,

0x0716,	// (0x0005cbf5) calenote_swipe_1_pane_g_ParamLimits

0x0716,	// (0x0005cbf5) calenote_swipe_1_pane_g

0xf00e,	// (0x0006b4ed) calenote_swipe_1_pane_t1_ParamLimits

0xf00e,	// (0x0006b4ed) calenote_swipe_1_pane_t1

0xedd4,	// (0x0006b2b3) calenote_swipe_2_pane_g1_ParamLimits

0xedd4,	// (0x0006b2b3) calenote_swipe_2_pane_g1

0xf02d,	// (0x0006b50c) calenote_swipe_2_pane_g2_ParamLimits

0xf02d,	// (0x0006b50c) calenote_swipe_2_pane_g2

0x0001,

0x07f8,	// (0x0005ccd7) calenote_swipe_2_pane_g_ParamLimits

0x07f8,	// (0x0005ccd7) calenote_swipe_2_pane_g

0xf039,	// (0x0006b518) calenote_swipe_2_pane_t1_ParamLimits

0xf039,	// (0x0006b518) calenote_swipe_2_pane_t1

0x0aa3,	// (0x0005cf82) main_mup_navstr_pane

0x4f7e,	// (0x0006145d) main_mup3_pane_t7_ParamLimits

0x4f7e,	// (0x0006145d) main_mup3_pane_t7

0xda18,	// (0x00069ef7) main_mp4_pane_g6_ParamLimits

0xda18,	// (0x00069ef7) main_mp4_pane_g6

0xdbbc,	// (0x0006a09b) main_image3_pane_t4_ParamLimits

0xdbbc,	// (0x0006a09b) main_image3_pane_t4

0x8a85,	// (0x00064f64) popup_navstr_preview_pane_ParamLimits

0x8a85,	// (0x00064f64) popup_navstr_preview_pane

0x8a99,	// (0x00064f78) scroll_navstr_pane_ParamLimits

0x8a99,	// (0x00064f78) scroll_navstr_pane

0x0aa3,	// (0x0005cf82) bg_popup_preview_window_pane_cp04

0xf060,	// (0x0006b53f) popup_navstr_preview_pane_t1

0x8aad,	// (0x00064f8c) scroll_navstr_pane_g1_ParamLimits

0x8aad,	// (0x00064f8c) scroll_navstr_pane_g1

0x8ac1,	// (0x00064fa0) scroll_navstr_pane_t1_ParamLimits

0x8ac1,	// (0x00064fa0) scroll_navstr_pane_t1

0xf005,	// (0x0006b4e4) bg_button_pane_cp014

0xf005,	// (0x0006b4e4) bg_button_pane_cp030

0x80b8,	// (0x00064597) list_double_fisheye_pane_g4_ParamLimits

0x80b8,	// (0x00064597) list_double_fisheye_pane_g4

0x80c4,	// (0x000645a3) list_double_fisheye_pane_g5_ParamLimits

0x80c4,	// (0x000645a3) list_double_fisheye_pane_g5

0xefc8,	// (0x0006b4a7) sp_fs_scroll_pane_cp03

0xeec7,	// (0x0006b3a6) main_sp_fs_ctrlbar_pane_g1_ParamLimits

0xeed3,	// (0x0006b3b2) main_sp_fs_ctrlbar_pane_g2_ParamLimits

0x0733,	// (0x0005cc12) main_sp_fs_ctrlbar_pane_g_ParamLimits

0xeedf,	// (0x0006b3be) main_sp_fs_ctrlbar_pane_t1_ParamLimits

0x8949,	// (0x00064e28) sp_fs_scroll_pane_cp02

0xa341,	// (0x00066820) popup_sp_fs_calendar_preview_list_single_pane_ParamLimits

0xa341,	// (0x00066820) popup_sp_fs_calendar_preview_list_single_pane

0x0aa3,	// (0x0005cf82) main_cam6_pano_pane

0x9a56,	// (0x00065f35) main_mup3_pane_ParamLimits

0x0aa3,	// (0x0005cf82) main_phacti_pane

0x7c99,	// (0x00064178) bg_button_pane_cp11

0x7cb3,	// (0x00064192) main_mobtv_info_pane_g2_ParamLimits

0x7cb3,	// (0x00064192) main_mobtv_info_pane_g2

0x0001,

0xfba0,	// (0x0006c07f) main_mobtv_info_pane_g_ParamLimits

0xfba0,	// (0x0006c07f) main_mobtv_info_pane_g

0x7e90,	// (0x0006436f) sc_clock_pane_t5_ParamLimits

0x7e90,	// (0x0006436f) sc_clock_pane_t5

0x7f1a,	// (0x000643f9) main_radioblah_pane_g1_ParamLimits

0xed20,	// (0x0006b1ff) main_radioblah_pane_t3_ParamLimits

0xed20,	// (0x0006b1ff) main_radioblah_pane_t3

0xed38,	// (0x0006b217) main_radioblah_pane_t4_ParamLimits

0xed38,	// (0x0006b217) main_radioblah_pane_t4

0x7f42,	// (0x00064421) main_radioblah_text_pane_ParamLimits

0x7f42,	// (0x00064421) main_radioblah_text_pane

0x7f54,	// (0x00064433) main_radioblah_info_pane_g1_ParamLimits

0x7fed,	// (0x000644cc) main_radioblah_info_pane_t4_ParamLimits

0x7fed,	// (0x000644cc) main_radioblah_info_pane_t4

0xc21b,	// (0x000686fa) main_sp_fs_calendar_pane

0x8ad8,	// (0x00064fb7) main_phacti_pane_g1

0x8ae0,	// (0x00064fbf) phacti_note_pane_ParamLimits

0x8ae0,	// (0x00064fbf) phacti_note_pane

0xf077,	// (0x0006b556) phacti_term_pane_ParamLimits

0xf077,	// (0x0006b556) phacti_term_pane

0xf08c,	// (0x0006b56b) phacti_note_pane_t1_ParamLimits

0xf08c,	// (0x0006b56b) phacti_note_pane_t1

0x8af4,	// (0x00064fd3) phacti_term_pane_g1

0x8afc,	// (0x00064fdb) phacti_term_pane_t1_ParamLimits

0x8afc,	// (0x00064fdb) phacti_term_pane_t1

0xf0a3,	// (0x0006b582) popup_sp_fs_calendar_preview_list_single_pane_g1

0xa442,	// (0x00066921) popup_sp_fs_calendar_preview_list_single_pane_g2

0x0001,

0xfcae,	// (0x0006c18d) popup_sp_fs_calendar_preview_list_single_pane_g

0xf0ab,	// (0x0006b58a) popup_sp_fs_calendar_preview_list_single_pane_t1_ParamLimits

0xf0ab,	// (0x0006b58a) popup_sp_fs_calendar_preview_list_single_pane_t1

0xf0c0,	// (0x0006b59f) aid_popup_sp_fs_bg_corner_pane

0xc721,	// (0x00068c00) popup_sp_fs_calendar_preview_bg_pane_g1

0x0aa3,	// (0x0005cf82) popup_sp_fs_calendar_preview_bg_pane

0xf0c8,	// (0x0006b5a7) popup_sp_fs_calendar_preview_list_pane

0xc21b,	// (0x000686fa) bg_main_sp_fs_cale_pane_ParamLimits

0xc21b,	// (0x000686fa) bg_main_sp_fs_cale_pane

0x8b73,	// (0x00065052) listscroll_cale_mrui_pane_ParamLimits

0x8b73,	// (0x00065052) listscroll_cale_mrui_pane

0x8b87,	// (0x00065066) listscroll_sp_fs_schedule_track_pane

0x8b90,	// (0x0006506f) main_sp_fs_ctrlbar_pane_cp01_ParamLimits

0x8b90,	// (0x0006506f) main_sp_fs_ctrlbar_pane_cp01

0xf0d0,	// (0x0006b5af) main_sp_fs_ribbon_pane

0x8ba1,	// (0x00065080) popup_sp_fs_cale_preview_window

0x8bb3,	// (0x00065092) list_single_sp_fs_schedule_track_pane_ParamLimits

0x8bb3,	// (0x00065092) list_single_sp_fs_schedule_track_pane

0xc21b,	// (0x000686fa) bg_sp_fs_highlight_list_pane_cp03_ParamLimits

0xc21b,	// (0x000686fa) bg_sp_fs_highlight_list_pane_cp03

0x8bc5,	// (0x000650a4) list_single_sp_fs_schedule_track_pane_g1_ParamLimits

0x8bc5,	// (0x000650a4) list_single_sp_fs_schedule_track_pane_g1

0x8bd1,	// (0x000650b0) list_single_sp_fs_schedule_track_pane_g2_ParamLimits

0x8bd1,	// (0x000650b0) list_single_sp_fs_schedule_track_pane_g2

0x0001,

0xfcb3,	// (0x0006c192) list_single_sp_fs_schedule_track_pane_g_ParamLimits

0xfcb3,	// (0x0006c192) list_single_sp_fs_schedule_track_pane_g

0x8bdd,	// (0x000650bc) list_single_sp_fs_schedule_track_pane_t1_ParamLimits

0x8bdd,	// (0x000650bc) list_single_sp_fs_schedule_track_pane_t1

0x8bf7,	// (0x000650d6) sp_fs_schedule_track_pane_ParamLimits

0x8bf7,	// (0x000650d6) sp_fs_schedule_track_pane

0x8c08,	// (0x000650e7) sp_fs_schedule_track_pane_g1

0x8c10,	// (0x000650ef) sp_fs_schedule_track_pane_g2

0x8c18,	// (0x000650f7) sp_fs_schedule_track_pane_g3

0x8c20,	// (0x000650ff) sp_fs_schedule_track_pane_g4

0x8c28,	// (0x00065107) sp_fs_schedule_track_pane_g5

0x0004,

0xfcb8,	// (0x0006c197) sp_fs_schedule_track_pane_g

0xde45,	// (0x0006a324) bg_sp_fs_schedule_viewer_highlight_g1

0xa641,	// (0x00066b20) bg_sp_fs_schedule_viewer_highlight_g2

0xde4d,	// (0x0006a32c) bg_sp_fs_schedule_viewer_highlight_g3

0xde55,	// (0x0006a334) bg_sp_fs_schedule_viewer_highlight_g4

0xe069,	// (0x0006a548) bg_sp_fs_schedule_viewer_highlight_g5

0xde65,	// (0x0006a344) bg_sp_fs_schedule_viewer_highlight_g6

0xde6d,	// (0x0006a34c) bg_sp_fs_schedule_viewer_highlight_g7

0xde75,	// (0x0006a354) bg_sp_fs_schedule_viewer_highlight_g8

0xa621,	// (0x00066b00) bg_sp_fs_schedule_viewer_highlight_g9

0x0008,

0xfcc3,	// (0x0006c1a2) bg_sp_fs_schedule_viewer_highlight_g

0x0aa3,	// (0x0005cf82) bg_main_sp_fs_ribbon_pane

0x8c30,	// (0x0006510f) main_sp_fs_ribbon_pane_g1

0x8c39,	// (0x00065118) main_sp_fs_ribbon_pane_t1

0x8c48,	// (0x00065127) main_sp_fs_ribbon_pane_t2

0x8c57,	// (0x00065136) main_sp_fs_ribbon_pane_t3

0x0002,

0xfcd6,	// (0x0006c1b5) main_sp_fs_ribbon_pane_t

0x8c66,	// (0x00065145) main_sp_fs_ribbon_scheduler_pane

0x8c6e,	// (0x0006514d) bg_main_sp_fs_ribbon_pane_g1

0x8c77,	// (0x00065156) bg_main_sp_fs_ribbon_pane_g2

0x8c80,	// (0x0006515f) bg_main_sp_fs_ribbon_pane_g3

0x0002,

0xfcdd,	// (0x0006c1bc) bg_main_sp_fs_ribbon_pane_g

0x8c88,	// (0x00065167) main_sp_fs_ribbon_scheduler_pane_g1

0x8c91,	// (0x00065170) main_sp_fs_ribbon_scheduler_pane_g2

0x8c9a,	// (0x00065179) main_sp_fs_ribbon_scheduler_pane_g3

0x0002,

0xfce4,	// (0x0006c1c3) main_sp_fs_ribbon_scheduler_pane_g

0x8ca3,	// (0x00065182) list_cale_mrui_pane

0x8cac,	// (0x0006518b) sp_fs_scroll_pane_cp07_ParamLimits

0x8cac,	// (0x0006518b) sp_fs_scroll_pane_cp07

0x8cc0,	// (0x0006519f) bg_sp_fs_schedule_viewer_highlight_ParamLimits

0x8cc0,	// (0x0006519f) bg_sp_fs_schedule_viewer_highlight

0x8cd0,	// (0x000651af) list_single_sp_fs_schedule_track_pane_cp01

0x8cd8,	// (0x000651b7) list_sp_fs_schedule_track_pane

0x8ce0,	// (0x000651bf) sp_fs_scroll_pane_cp06_ParamLimits

0x8ce0,	// (0x000651bf) sp_fs_scroll_pane_cp06

0xc721,	// (0x00068c00) bgmain_sp_fs_calendar_pane_g1

0x8cf2,	// (0x000651d1) list_single_cale_mrui_pane_ParamLimits

0x8cf2,	// (0x000651d1) list_single_cale_mrui_pane

0x8d12,	// (0x000651f1) list_single_cale_mrui_row_pane_ParamLimits

0x8d12,	// (0x000651f1) list_single_cale_mrui_row_pane

0x8d1f,	// (0x000651fe) list_single_cale_mrui_row_pane_g1_ParamLimits

0x8d1f,	// (0x000651fe) list_single_cale_mrui_row_pane_g1

0xd163,	// (0x00069642) list_single_cale_mrui_row_pane_t1_ParamLimits

0xd163,	// (0x00069642) list_single_cale_mrui_row_pane_t1

0x8d4b,	// (0x0006522a) list_single_cale_mrui_row_pane_t2_ParamLimits

0x8d4b,	// (0x0006522a) list_single_cale_mrui_row_pane_t2

0xd175,	// (0x00069654) list_single_cale_mrui_row_pane_t3_ParamLimits

0xd175,	// (0x00069654) list_single_cale_mrui_row_pane_t3

0xd1a4,	// (0x00069683) list_single_cale_mrui_row_pane_t4_ParamLimits

0xd1a4,	// (0x00069683) list_single_cale_mrui_row_pane_t4

0x0003,

0xfcf2,	// (0x0006c1d1) list_single_cale_mrui_row_pane_t_ParamLimits

0xfcf2,	// (0x0006c1d1) list_single_cale_mrui_row_pane_t

0x8db3,	// (0x00065292) list_single_cmail_header_editor_pane_bg_cp01_ParamLimits

0x8db3,	// (0x00065292) list_single_cmail_header_editor_pane_bg_cp01

0x8dd9,	// (0x000652b8) list_single_cmail_header_editor_pane_bg_cp02_ParamLimits

0x8dd9,	// (0x000652b8) list_single_cmail_header_editor_pane_bg_cp02

0x8df9,	// (0x000652d8) main_radioblah_text_pane_t1_ParamLimits

0x8df9,	// (0x000652d8) main_radioblah_text_pane_t1

0xd1d3,	// (0x000696b2) cam6_indi_pane_cp01

0xd1db,	// (0x000696ba) cam6_mode_pane_cp01

0xd1e3,	// (0x000696c2) cam6_pano_pane

0xd1ec,	// (0x000696cb) cam6_zoom_pane_cp01

0xd1f4,	// (0x000696d3) cam6_pano_image_pane

0xd1ff,	// (0x000696de) cam6_pano_pane_g1

0xea82,	// (0x0006af61) cam6_pano_pane_g2

0xd208,	// (0x000696e7) cam6_pano_pane_g3

0xd211,	// (0x000696f0) cam6_pano_pane_g4

0xccc3,	// (0x000691a2) cam6_pano_pane_g5

0xd21a,	// (0x000696f9) cam6_pano_pane_g6

0xd224,	// (0x00069703) cam6_pano_pane_g7

0xd22c,	// (0x0006970b) cam6_pano_pane_g8

0xd235,	// (0x00069714) cam6_pano_pane_g9

0x0008,

0xfcfb,	// (0x0006c1da) cam6_pano_pane_g

0x0aa3,	// (0x0005cf82) main_browser_tag_pane

0xf058,	// (0x0006b537) grid_navstr_albumart_pane

0xd240,	// (0x0006971f) cell_navstr_albumart_pane_ParamLimits

0xd240,	// (0x0006971f) cell_navstr_albumart_pane

0xd263,	// (0x00069742) cell_navstr_albumart_pane_g1

0xc02a,	// (0x00068509) cell_navstr_albumart_pane_g2

0xc03a,	// (0x00068519) cell_navstr_albumart_pane_g3

0xc032,	// (0x00068511) cell_navstr_albumart_pane_g4

0x0003,

0xfd0e,	// (0x0006c1ed) cell_navstr_albumart_pane_g

0x8e13,	// (0x000652f2) bt_list_pane_ParamLimits

0x8e13,	// (0x000652f2) bt_list_pane

0x8e27,	// (0x00065306) bt_list_pane_t1

0x8e36,	// (0x00065315) bt_list_pane_t2

0x0001,

0xfd17,	// (0x0006c1f6) bt_list_pane_t

0x0aa3,	// (0x0005cf82) main_cale_prevew_pane

0x8e45,	// (0x00065324) popup_cale_preview_window_ParamLimits

0x8e45,	// (0x00065324) popup_cale_preview_window

0xc21b,	// (0x000686fa) bg_popup_preview_window_pane_cp05_ParamLimits

0xc21b,	// (0x000686fa) bg_popup_preview_window_pane_cp05

0xd26b,	// (0x0006974a) list_cale_preview_pane_ParamLimits

0xd26b,	// (0x0006974a) list_cale_preview_pane

0x8e60,	// (0x0006533f) list_double_cale_preview_pane_ParamLimits

0x8e60,	// (0x0006533f) list_double_cale_preview_pane

0x8e72,	// (0x00065351) list_single_cale_preview_pane_ParamLimits

0x8e72,	// (0x00065351) list_single_cale_preview_pane

0x8e88,	// (0x00065367) list_single_cale_preview_pane_g1

0x8e90,	// (0x0006536f) list_single_cale_preview_pane_t1_ParamLimits

0x8e90,	// (0x0006536f) list_single_cale_preview_pane_t1

0x8ea5,	// (0x00065384) list_double_cale_preview_pane_g1

0x8ead,	// (0x0006538c) list_double_cale_preview_pane_t1_ParamLimits

0x8ead,	// (0x0006538c) list_double_cale_preview_pane_t1

0x8ec2,	// (0x000653a1) list_double_cale_preview_pane_t2_ParamLimits

0x8ec2,	// (0x000653a1) list_double_cale_preview_pane_t2

0x0001,

0xfd1c,	// (0x0006c1fb) list_double_cale_preview_pane_t_ParamLimits

0xfd1c,	// (0x0006c1fb) list_double_cale_preview_pane_t

0x0aa3,	// (0x0005cf82) main_ezdial_pane

0xc21b,	// (0x000686fa) main_sp_fs_email_pane_ParamLimits

0x82a2,	// (0x00064781) cmail_ddmenu_btn01_pane_ParamLimits

0x82a2,	// (0x00064781) cmail_ddmenu_btn01_pane

0x82b5,	// (0x00064794) cmail_ddmenu_btn02_pane_ParamLimits

0x82b5,	// (0x00064794) cmail_ddmenu_btn02_pane

0x82d8,	// (0x000647b7) cmail_ddmenu_btn03_pane_ParamLimits

0x82d8,	// (0x000647b7) cmail_ddmenu_btn03_pane

0x8301,	// (0x000647e0) main_sp_fs_ctrlbar_pane_ParamLimits

0x8325,	// (0x00064804) main_sp_fs_listscroll_pane_te_cp01_ParamLimits

0xe038,	// (0x0006a517) list_cmail_body_pane_ParamLimits

0xefd8,	// (0x0006b4b7) bg_button_pane_cp12

0xefe1,	// (0x0006b4c0) list_single_cmail_header_detail_pane_g3_ParamLimits

0xefe1,	// (0x0006b4c0) list_single_cmail_header_detail_pane_g3

0x89fc,	// (0x00064edb) list_single_cmail_header_detail_pane_t2_ParamLimits

0x89fc,	// (0x00064edb) list_single_cmail_header_detail_pane_t2

0x0001,

0xfca4,	// (0x0006c183) list_single_cmail_header_detail_pane_t_ParamLimits

0xfca4,	// (0x0006c183) list_single_cmail_header_detail_pane_t

0x8b11,	// (0x00064ff0) phacti_term_pane_t2_ParamLimits

0x8b11,	// (0x00064ff0) phacti_term_pane_t2

0x0001,

0xfca9,	// (0x0006c188) phacti_term_pane_t_ParamLimits

0xfca9,	// (0x0006c188) phacti_term_pane_t

0xd277,	// (0x00069756) aid_size_list_single_double

0x8eda,	// (0x000653b9) popup_ezdial_listscroll_window

0x8ef6,	// (0x000653d5) popup_number_entry_window_cp01

0xadcb,	// (0x000672aa) bg_popup_call_pane_cp09

0xd283,	// (0x00069762) ezdial_list_pane

0xd28b,	// (0x0006976a) scroll_pane_cp23

0xc20d,	// (0x000686ec) bg_button_pane_cp028_ParamLimits

0xc20d,	// (0x000686ec) bg_button_pane_cp028

0x8f04,	// (0x000653e3) cmail_ddmenu_btn01_pane_g1_ParamLimits

0x8f04,	// (0x000653e3) cmail_ddmenu_btn01_pane_g1

0x8f13,	// (0x000653f2) cmail_ddmenu_btn01_pane_g2_ParamLimits

0x8f13,	// (0x000653f2) cmail_ddmenu_btn01_pane_g2

0x0001,

0xfd21,	// (0x0006c200) cmail_ddmenu_btn01_pane_g_ParamLimits

0xfd21,	// (0x0006c200) cmail_ddmenu_btn01_pane_g

0xd293,	// (0x00069772) cmail_ddmenu_btn01_pane_t1_ParamLimits

0xd293,	// (0x00069772) cmail_ddmenu_btn01_pane_t1

0xc20d,	// (0x000686ec) bg_button_pane_cp029_ParamLimits

0xc20d,	// (0x000686ec) bg_button_pane_cp029

0x8f23,	// (0x00065402) cmail_ddmenu_btn02_pane_g1_ParamLimits

0x8f23,	// (0x00065402) cmail_ddmenu_btn02_pane_g1

0x8f3e,	// (0x0006541d) cmail_ddmenu_btn02_pane_t1_ParamLimits

0x8f3e,	// (0x0006541d) cmail_ddmenu_btn02_pane_t1

0xc21b,	// (0x000686fa) bg_button_pane_cp031_ParamLimits

0xc21b,	// (0x000686fa) bg_button_pane_cp031

0x8f23,	// (0x00065402) cmail_ddmenu_btn03_pane_g1_ParamLimits

0x8f23,	// (0x00065402) cmail_ddmenu_btn03_pane_g1

0x8f3e,	// (0x0006541d) cmail_ddmenu_btn03_pane_t1_ParamLimits

0x8f3e,	// (0x0006541d) cmail_ddmenu_btn03_pane_t1

0x5af2,	// (0x00061fd1) cell_dialer2_keypad_pane_t1_ParamLimits

0x5b0c,	// (0x00061feb) cell_dialer2_keypad_pane_t1_copy1_ParamLimits

0x5b0c,	// (0x00061feb) cell_dialer2_keypad_pane_t1_copy1

0x7af2,	// (0x00063fd1) ncimui_group_button_pane

0xc21b,	// (0x000686fa) main_sp_fs_calendar_pane_ParamLimits

0x8953,	// (0x00064e32) list_single_cmail_header_caption_pane_ParamLimits

0xe2e3,	// (0x0006a7c2) aid_recal_txt_sm_pane

0x0aa3,	// (0x0005cf82) mian_recal_day_pane

0x8ba1,	// (0x00065080) popup_sp_fs_cale_preview_window_ParamLimits

0x0aa3,	// (0x0005cf82) list_recal_day_pane

0xd2c2,	// (0x000697a1) list_single_recal_day_pane_ParamLimits

0xd2c2,	// (0x000697a1) list_single_recal_day_pane

0xd2d4,	// (0x000697b3) list_single_recal_day_pane_g1_ParamLimits

0xd2d4,	// (0x000697b3) list_single_recal_day_pane_g1

0xd2e0,	// (0x000697bf) list_single_recal_day_pane_g2_ParamLimits

0xd2e0,	// (0x000697bf) list_single_recal_day_pane_g2

0xd2f0,	// (0x000697cf) list_single_recal_day_pane_g3_ParamLimits

0xd2f0,	// (0x000697cf) list_single_recal_day_pane_g3

0x8f65,	// (0x00065444) list_single_recal_day_pane_g4_ParamLimits

0x8f65,	// (0x00065444) list_single_recal_day_pane_g4

0xd2fc,	// (0x000697db) list_single_recal_day_pane_g5_ParamLimits

0xd2fc,	// (0x000697db) list_single_recal_day_pane_g5

0xd30c,	// (0x000697eb) list_single_recal_day_pane_g6_ParamLimits

0xd30c,	// (0x000697eb) list_single_recal_day_pane_g6

0x0004,

0xfd30,	// (0x0006c20f) list_single_recal_day_pane_g_ParamLimits

0xfd30,	// (0x0006c20f) list_single_recal_day_pane_g

0xd323,	// (0x00069802) list_single_recal_day_pane_t1

0xd335,	// (0x00069814) list_single_recal_day_pane_t2

0x0001,

0xfd3b,	// (0x0006c21a) list_single_recal_day_pane_t

0x8f85,	// (0x00065464) ncimui_query_button_pane_ParamLimits

0x8f85,	// (0x00065464) ncimui_query_button_pane

0x8f95,	// (0x00065474) ncimui_query_button_pane_t1_ParamLimits

0x8f95,	// (0x00065474) ncimui_query_button_pane_t1

0xd34a,	// (0x00069829) ncimui_query_button_pane_t2_ParamLimits

0xd34a,	// (0x00069829) ncimui_query_button_pane_t2

0x0001,

0xfd40,	// (0x0006c21f) ncimui_query_button_pane_t_ParamLimits

0xfd40,	// (0x0006c21f) ncimui_query_button_pane_t

0x8fa8,	// (0x00065487) query_button_pane_ParamLimits

0x8fa8,	// (0x00065487) query_button_pane

0x0aa3,	// (0x0005cf82) bg_button_pane_cp0028

0xd35d,	// (0x0006983c) query_button_pane_t1

0x3b93,	// (0x00060072) main_tport_pane_ParamLimits

0x8840,	// (0x00064d1f) bg_popup_window_pane_cp01_ParamLimits

0x8840,	// (0x00064d1f) bg_popup_window_pane_cp01

0x885a,	// (0x00064d39) heading_pane_cp08_ParamLimits

0x885a,	// (0x00064d39) heading_pane_cp08

0x886e,	// (0x00064d4d) heading_pane_cp07_ParamLimits

0x886e,	// (0x00064d4d) heading_pane_cp07

0xef9a,	// (0x0006b479) cell_tport_appsw_pane_g2

0x0002,

0x07e0,	// (0x0005ccbf) cell_tport_appsw_pane_g

0x313c,	// (0x0005f61b) input_candi_list_open_g1

0xa816,	// (0x00066cf5) list_cale_time_pane_g6_ParamLimits

0xa816,	// (0x00066cf5) list_cale_time_pane_g6

0x4960,	// (0x00060e3f) aid_size_touch_calib_1_ParamLimits

0x4960,	// (0x00060e3f) aid_size_touch_calib_1

0x496c,	// (0x00060e4b) aid_size_touch_calib_2_ParamLimits

0x496c,	// (0x00060e4b) aid_size_touch_calib_2

0x4982,	// (0x00060e61) aid_size_touch_calib_3_ParamLimits

0x4982,	// (0x00060e61) aid_size_touch_calib_3

0x49a0,	// (0x00060e7f) aid_size_touch_calib_4_ParamLimits

0x49a0,	// (0x00060e7f) aid_size_touch_calib_4

0x49b6,	// (0x00060e95) main_touch_calib_button_group_pane_ParamLimits

0x49b6,	// (0x00060e95) main_touch_calib_button_group_pane

0x49ce,	// (0x00060ead) main_touch_calib_pane_g1_ParamLimits

0x49da,	// (0x00060eb9) main_touch_calib_pane_g2_ParamLimits

0x49e6,	// (0x00060ec5) main_touch_calib_pane_g3_ParamLimits

0x49f2,	// (0x00060ed1) main_touch_calib_pane_g4_ParamLimits

0xf761,	// (0x0006bc40) main_touch_calib_pane_g_ParamLimits

0x49fe,	// (0x00060edd) main_touch_calib_pane_t1_ParamLimits

0x4a18,	// (0x00060ef7) main_touch_calib_pane_t2_ParamLimits

0x4a32,	// (0x00060f11) main_touch_calib_pane_t3_ParamLimits

0x4a46,	// (0x00060f25) main_touch_calib_pane_t4_ParamLimits

0x4a5a,	// (0x00060f39) main_touch_calib_pane_t5_ParamLimits

0xf76a,	// (0x0006bc49) main_touch_calib_pane_t_ParamLimits

0xca99,	// (0x00068f78) list_single_fp_cale_pane_g3_ParamLimits

0xca99,	// (0x00068f78) list_single_fp_cale_pane_g3

0x9a56,	// (0x00065f35) bg_button_pane_cp012_ParamLimits

0x9a56,	// (0x00065f35) bg_vkb2_func_pane_cp03_ParamLimits

0x6ac8,	// (0x00062fa7) cell_vitu2_function_top_pane_g1_ParamLimits

0x9a56,	// (0x00065f35) bg_vkb2_func_pane_cp04_ParamLimits

0x7a80,	// (0x00063f5f) main_ncimui_button_group_pane_ParamLimits

0x7a80,	// (0x00063f5f) main_ncimui_button_group_pane

0x7ae0,	// (0x00063fbf) main_ncimui_pane_t3_ParamLimits

0x7ae0,	// (0x00063fbf) main_ncimui_pane_t3

0xf06e,	// (0x0006b54d) phacti_button_group_pane

0xd277,	// (0x00069756) aid_size_list_single_double_ParamLimits

0x8eda,	// (0x000653b9) popup_ezdial_listscroll_window_ParamLimits

0x8ef6,	// (0x000653d5) popup_number_entry_window_cp01_ParamLimits

0x8fbb,	// (0x0006549a) phacti_button_pane_ParamLimits

0x8fbb,	// (0x0006549a) phacti_button_pane

0x0aa3,	// (0x0005cf82) bg_button_pane_cp14

0xd36b,	// (0x0006984a) phacti_button_pane_t1

0x8fcc,	// (0x000654ab) main_touch_calib_button_pane_ParamLimits

0x8fcc,	// (0x000654ab) main_touch_calib_button_pane

0xa1d1,	// (0x000666b0) bg_button_pane_cp18_ParamLimits

0xa1d1,	// (0x000666b0) bg_button_pane_cp18

0xd379,	// (0x00069858) main_touch_calib_button_pane_t1_ParamLimits

0xd379,	// (0x00069858) main_touch_calib_button_pane_t1

0xd38f,	// (0x0006986e) main_touch_calib_button_pane_t2_ParamLimits

0xd38f,	// (0x0006986e) main_touch_calib_button_pane_t2

0x0001,

0xfd45,	// (0x0006c224) main_touch_calib_button_pane_t_ParamLimits

0xfd45,	// (0x0006c224) main_touch_calib_button_pane_t

0x0aa3,	// (0x0005cf82) cell_ncimui_button_pane

0x0aa3,	// (0x0005cf82) bg_button_pane_cp032

0xd3ad,	// (0x0006988c) cell_ncimui_button_pane_t1

0xdb9c,	// (0x0006a07b) image3_infobar_pane_ParamLimits

0xdb9c,	// (0x0006a07b) image3_infobar_pane

0x7ebc,	// (0x0006439b) fs_bigclock_status_pane_ParamLimits

0x7ebc,	// (0x0006439b) fs_bigclock_status_pane

0x7ec9,	// (0x000643a8) main_fs_bigclock_clock_pane_ParamLimits

0x7ec9,	// (0x000643a8) main_fs_bigclock_clock_pane

0x7edd,	// (0x000643bc) main_fs_bigclock_indi_pane_ParamLimits

0x7edd,	// (0x000643bc) main_fs_bigclock_indi_pane

0x7ef6,	// (0x000643d5) main_fs_bigclock_swipe_pane_ParamLimits

0x7ef6,	// (0x000643d5) main_fs_bigclock_swipe_pane

0x0aa3,	// (0x0005cf82) main_fs_clock_dumped_data

0xeb8f,	// (0x0006b06e) list_single_fs_bigclock_indicator_pane_g1_ParamLimits

0xeb8f,	// (0x0006b06e) list_single_fs_bigclock_indicator_pane_g1

0xebb5,	// (0x0006b094) list_single_fs_bigclock_indicator_pane_g2_ParamLimits

0xebb5,	// (0x0006b094) list_single_fs_bigclock_indicator_pane_g2

0xebcf,	// (0x0006b0ae) list_single_fs_bigclock_indicator_pane_g3_ParamLimits

0xebcf,	// (0x0006b0ae) list_single_fs_bigclock_indicator_pane_g3

0xebe9,	// (0x0006b0c8) list_single_fs_bigclock_indicator_pane_g4_ParamLimits

0xebe9,	// (0x0006b0c8) list_single_fs_bigclock_indicator_pane_g4

0x0004,

0x06c7,	// (0x0005cba6) list_single_fs_bigclock_indicator_pane_g_ParamLimits

0x06c7,	// (0x0005cba6) list_single_fs_bigclock_indicator_pane_g

0xec12,	// (0x0006b0f1) list_single_fs_bigclock_indicator_pane_t1_ParamLimits

0xec12,	// (0x0006b0f1) list_single_fs_bigclock_indicator_pane_t1

0xec3a,	// (0x0006b119) list_single_fs_bigclock_indicator_pane_t2_ParamLimits

0xec3a,	// (0x0006b119) list_single_fs_bigclock_indicator_pane_t2

0xec62,	// (0x0006b141) list_single_fs_bigclock_indicator_pane_t3_ParamLimits

0xec62,	// (0x0006b141) list_single_fs_bigclock_indicator_pane_t3

0xec8a,	// (0x0006b169) list_single_fs_bigclock_indicator_pane_t4_ParamLimits

0xec8a,	// (0x0006b169) list_single_fs_bigclock_indicator_pane_t4

0x0004,

0x06d2,	// (0x0005cbb1) list_single_fs_bigclock_indicator_pane_t_ParamLimits

0x06d2,	// (0x0005cbb1) list_single_fs_bigclock_indicator_pane_t

0xd3bb,	// (0x0006989a) image3_infobar_fav_pane_ParamLimits

0xd3bb,	// (0x0006989a) image3_infobar_fav_pane

0xd3cb,	// (0x000698aa) image3_infobar_loc_pane_ParamLimits

0xd3cb,	// (0x000698aa) image3_infobar_loc_pane

0xd3df,	// (0x000698be) image3_infobar_time_pane_ParamLimits

0xd3df,	// (0x000698be) image3_infobar_time_pane

0xc721,	// (0x00068c00) image3_infobar_time_pane_g1

0xd3ef,	// (0x000698ce) image3_infobar_time_pane_t1

0xc721,	// (0x00068c00) image3_infobar_loc_pane_g1

0xd3fd,	// (0x000698dc) image3_infobar_loc_pane_g2

0x0001,

0xfd4a,	// (0x0006c229) image3_infobar_loc_pane_g

0xd405,	// (0x000698e4) image3_infobar_loc_pane_t1

0xc721,	// (0x00068c00) image3_infobar_fav_pane_g1

0xd413,	// (0x000698f2) image3_infobar_fav_pane_g2

0x0001,

0xfd4f,	// (0x0006c22e) image3_infobar_fav_pane_g

0xd41b,	// (0x000698fa) fs_bigclock_status_battery_pane

0xd424,	// (0x00069903) fs_bigclock_status_signal_pane

0xd42d,	// (0x0006990c) fs_bigclock_status_title_pane

0xd436,	// (0x00069915) fs_bigclock_status_signal_pane_g1

0xd43f,	// (0x0006991e) fs_bigclock_status_signal_pane_g2

0x0001,

0xfd54,	// (0x0006c233) fs_bigclock_status_signal_pane_g

0xd447,	// (0x00069926) fs_bigclock_status_battery_pane_g1

0xd450,	// (0x0006992f) fs_bigclock_status_battery_pane_g2

0x0001,

0xfd59,	// (0x0006c238) fs_bigclock_status_battery_pane_g

0xd458,	// (0x00069937) fs_bigclock_status_title_pane_t1

0xc721,	// (0x00068c00) main_fs_bigclock_clock_pane_g1

0xd466,	// (0x00069945) main_fs_bigclock_clock_pane_g2

0xd466,	// (0x00069945) main_fs_bigclock_clock_pane_g3

0xd466,	// (0x00069945) main_fs_bigclock_clock_pane_g4

0x0003,

0xfd5e,	// (0x0006c23d) main_fs_bigclock_clock_pane_g

0xd46e,	// (0x0006994d) main_fs_bigclock_clock_pane_t1

0xd47c,	// (0x0006995b) main_fs_bigclock_clock_pane_t2

0x0001,

0xfd67,	// (0x0006c246) main_fs_bigclock_clock_pane_t

0xd48b,	// (0x0006996a) list_single_fs_bigclock_indicator_pane_ParamLimits

0xd48b,	// (0x0006996a) list_single_fs_bigclock_indicator_pane

0x8fe1,	// (0x000654c0) list_single_fs_bigclock_pane_ParamLimits

0x8fe1,	// (0x000654c0) list_single_fs_bigclock_pane

0xd4a5,	// (0x00069984) main_fs_bigclock_indicator_pane_t1

0xd4b4,	// (0x00069993) list_single_fs_bigclock_pane_g1

0xd4bc,	// (0x0006999b) list_single_fs_bigclock_pane_t1

0xc721,	// (0x00068c00) main_fs_bigclock_swipe_pane_g1

0xd4ff,	// (0x000699de) main_fs_bigclock_swipe_pane_g2

0x0001,

0xfd78,	// (0x0006c257) main_fs_bigclock_swipe_pane_g

0xd507,	// (0x000699e6) main_fs_bigclock_swipe_pane_t1_ParamLimits

0xd507,	// (0x000699e6) main_fs_bigclock_swipe_pane_t1

0x2954,	// (0x0005ee33) call_type_pane_ParamLimits

0x0aa3,	// (0x0005cf82) main_btmg_pane

0xd14a,	// (0x00069629) list_single_cale_mrui_row_pane_g2_ParamLimits

0xd14a,	// (0x00069629) list_single_cale_mrui_row_pane_g2

0x0002,

0xfceb,	// (0x0006c1ca) list_single_cale_mrui_row_pane_g_ParamLimits

0xfceb,	// (0x0006c1ca) list_single_cale_mrui_row_pane_g

0xd2b2,	// (0x00069791) list_recal_vselct_arw_lo_pane

0xd2ba,	// (0x00069799) list_recal_vselct_arw_up_pane

0x720b,	// (0x000636ea) list_recal_vselct_pane

0x9044,	// (0x00065523) btmg_button_pane

0x904e,	// (0x0006552d) main_btmg_pane_g1

0x0aa3,	// (0x0005cf82) bg_button_pane_cp044

0xd524,	// (0x00069a03) btmg_button_pane_t1

0xc205,	// (0x000686e4) aid_listscroll_gen

0xc21b,	// (0x000686fa) main_cntbar_detail_pane

0xefb8,	// (0x0006b497) list_cmail_folder_pane

0xefc8,	// (0x0006b4a7) sp_fs_scroll_pane_cp03_ParamLimits

0x9058,	// (0x00065537) list_single_fs_dyc_pane_cp01_ParamLimits

0x9058,	// (0x00065537) list_single_fs_dyc_pane_cp01

0xd532,	// (0x00069a11) aid_size_cmail_indent

0xd53b,	// (0x00069a1a) list_single_dyc_row_pane_cp01

0x909a,	// (0x00065579) cntbar_detail_list_pane_ParamLimits

0x909a,	// (0x00065579) cntbar_detail_list_pane

0x90e6,	// (0x000655c5) main_cntbar_detail_cont_pane_ParamLimits

0x90e6,	// (0x000655c5) main_cntbar_detail_cont_pane

0x2879,	// (0x0005ed58) scroll_pane_cp032_ParamLimits

0x2879,	// (0x0005ed58) scroll_pane_cp032

0x90fa,	// (0x000655d9) cntbar_detail_list_event_pane_ParamLimits

0x90fa,	// (0x000655d9) cntbar_detail_list_event_pane

0x90aa,	// (0x00065589) cntbar_detail_list_shct_pane

0xa68f,	// (0x00066b6e) aid_list_gen

0xd544,	// (0x00069a23) aid_scroll

0xd54d,	// (0x00069a2c) aid_size_touch_scroll_bar

0x910a,	// (0x000655e9) aid_list_double

0xd556,	// (0x00069a35) aid_list_single

0x9113,	// (0x000655f2) aid_list_single_lg

0xd55f,	// (0x00069a3e) aid_list_z_g_a_sm

0xd567,	// (0x00069a46) aid_list_z_g_d

0xd56f,	// (0x00069a4e) aid_txt_z_prm

0x911c,	// (0x000655fb) aid_txt_z_prm_cp01

0x912a,	// (0x00065609) aid_txt_z_sec

0x9138,	// (0x00065617) main_cntbar_detail_cont_pane_g1_ParamLimits

0x9138,	// (0x00065617) main_cntbar_detail_cont_pane_g1

0x914c,	// (0x0006562b) main_cntbar_detail_cont_pane_g2_ParamLimits

0x914c,	// (0x0006562b) main_cntbar_detail_cont_pane_g2

0x0001,

0xfd7d,	// (0x0006c25c) main_cntbar_detail_cont_pane_g_ParamLimits

0xfd7d,	// (0x0006c25c) main_cntbar_detail_cont_pane_g

0xd57d,	// (0x00069a5c) main_cntbar_detail_cont_pane_t1

0xd58b,	// (0x00069a6a) main_cntbar_detail_cont_pane_t2

0xd599,	// (0x00069a78) main_cntbar_detail_cont_pane_t3

0x0002,

0xfd82,	// (0x0006c261) main_cntbar_detail_cont_pane_t

0x915c,	// (0x0006563b) cell_cntbar_detail_list_shct_pane_ParamLimits

0x915c,	// (0x0006563b) cell_cntbar_detail_list_shct_pane

0xd5a7,	// (0x00069a86) cntbar_detail_list_shct_pane_g1

0xd5b0,	// (0x00069a8f) cntbar_detail_list_shct_pane_g2

0x0001,

0xfd89,	// (0x0006c268) cntbar_detail_list_shct_pane_g

0x9170,	// (0x0006564f) cntbar_detail_list_event_pane_g1_ParamLimits

0x9170,	// (0x0006564f) cntbar_detail_list_event_pane_g1

0x917c,	// (0x0006565b) cntbar_detail_list_event_pane_g2_ParamLimits

0x917c,	// (0x0006565b) cntbar_detail_list_event_pane_g2

0x0005,

0xfd8e,	// (0x0006c26d) cntbar_detail_list_event_pane_g_ParamLimits

0xfd8e,	// (0x0006c26d) cntbar_detail_list_event_pane_g

0x91e8,	// (0x000656c7) cntbar_detail_list_event_pane_t1_ParamLimits

0x91e8,	// (0x000656c7) cntbar_detail_list_event_pane_t1

0x91fd,	// (0x000656dc) cntbar_detail_list_event_pane_t2_ParamLimits

0x91fd,	// (0x000656dc) cntbar_detail_list_event_pane_t2

0x0002,

0xfd9b,	// (0x0006c27a) cntbar_detail_list_event_pane_t_ParamLimits

0xfd9b,	// (0x0006c27a) cntbar_detail_list_event_pane_t

0xc721,	// (0x00068c00) cell_cntbar_detail_list_shct_pane_g1

0x2ccc,	// (0x0005f1ab) navi_pane_mv_g3

0xc21b,	// (0x000686fa) main_cntbar_detail_pane_ParamLimits

0x0aa3,	// (0x0005cf82) main_notif_wgt_pane

0xd9b2,	// (0x00069e91) aid_tch_main_mp4_pane_g4

0xdb94,	// (0x0006a073) popup_slider_window_cp02

0xd2a8,	// (0x00069787) list_recal_day_event_pane

0x906e,	// (0x0006554d) cntbar_detail_btn_pane_ParamLimits

0x906e,	// (0x0006554d) cntbar_detail_btn_pane

0x9084,	// (0x00065563) cntbar_detail_btn_pane_cp01_ParamLimits

0x9084,	// (0x00065563) cntbar_detail_btn_pane_cp01

0x90aa,	// (0x00065589) cntbar_detail_list_shct_pane_ParamLimits

0x90ba,	// (0x00065599) cntbar_detail_pane_g1_ParamLimits

0x90ba,	// (0x00065599) cntbar_detail_pane_g1

0x90ca,	// (0x000655a9) cntbar_detail_pane_t1_ParamLimits

0x90ca,	// (0x000655a9) cntbar_detail_pane_t1

0x9188,	// (0x00065667) cntbar_detail_list_event_pane_g3_ParamLimits

0x9188,	// (0x00065667) cntbar_detail_list_event_pane_g3

0x91a0,	// (0x0006567f) cntbar_detail_list_event_pane_g4_ParamLimits

0x91a0,	// (0x0006567f) cntbar_detail_list_event_pane_g4

0x91b8,	// (0x00065697) cntbar_detail_list_event_pane_g5_ParamLimits

0x91b8,	// (0x00065697) cntbar_detail_list_event_pane_g5

0x91d0,	// (0x000656af) cntbar_detail_list_event_pane_g6_ParamLimits

0x91d0,	// (0x000656af) cntbar_detail_list_event_pane_g6

0x9212,	// (0x000656f1) cntbar_detail_list_event_pane_t3_ParamLimits

0x9212,	// (0x000656f1) cntbar_detail_list_event_pane_t3

0x9224,	// (0x00065703) popup_notif_wgt_window_ParamLimits

0x9224,	// (0x00065703) popup_notif_wgt_window

0x923d,	// (0x0006571c) popup_submenu_window_cp01_ParamLimits

0x923d,	// (0x0006571c) popup_submenu_window_cp01

0xadcb,	// (0x000672aa) bg_popup_window_pane_cp10

0xd5b9,	// (0x00069a98) listscroll_notif_wgt_pane

0xd5ca,	// (0x00069aa9) list_notif_wgt_window

0xd5d3,	// (0x00069ab2) scroll_pane_cp033

0x8f85,	// (0x00065464) list_notif_wgt_row_pane_ParamLimits

0x8f85,	// (0x00065464) list_notif_wgt_row_pane

0xd5dc,	// (0x00069abb) aid_size_list_notif_wgt_del

0xd5e9,	// (0x00069ac8) list_notif_wgt_row_pane_g1

0xd5f5,	// (0x00069ad4) list_notif_wgt_row_pane_g2

0xd601,	// (0x00069ae0) list_notif_wgt_row_pane_g3

0x0002,

0xfda2,	// (0x0006c281) list_notif_wgt_row_pane_g

0xd60e,	// (0x00069aed) list_notif_wgt_row_pane_t1

0xd623,	// (0x00069b02) list_notif_wgt_row_pane_t2

0xd635,	// (0x00069b14) list_notif_wgt_row_pane_t3

0x0002,

0xfda9,	// (0x0006c288) list_notif_wgt_row_pane_t

0xe083,	// (0x0006a562) list_recal_day_event_pane_g1

0xd647,	// (0x00069b26) list_recal_day_event_pane_t1

0x0aa3,	// (0x0005cf82) bg_button_pane_cp045

0xd656,	// (0x00069b35) cntbar_detail_btn_pane_t1

0xc20d,	// (0x000686ec) main_callh_pane_ParamLimits

0xc20d,	// (0x000686ec) main_callh_pane

0x0aa3,	// (0x0005cf82) main_coverflow0_pane

0x0aa3,	// (0x0005cf82) main_wgtman_pane

0x7f04,	// (0x000643e3) main_fs_bigclock_unlock_btn_pane_ParamLimits

0x7f04,	// (0x000643e3) main_fs_bigclock_unlock_btn_pane

0xef92,	// (0x0006b471) bg_button_pane_cp16

0xefa2,	// (0x0006b481) cell_tport_appsw_pane_g3

0x924f,	// (0x0006572e) cf0_flow_pane_ParamLimits

0x924f,	// (0x0006572e) cf0_flow_pane

0xd664,	// (0x00069b43) listscroll_cf0_pane

0xd66f,	// (0x00069b4e) main_cf0_pane_g1

0x9264,	// (0x00065743) main_cf0_pane_t1_ParamLimits

0x9264,	// (0x00065743) main_cf0_pane_t1

0x927b,	// (0x0006575a) main_cf0_pane_t2_ParamLimits

0x927b,	// (0x0006575a) main_cf0_pane_t2

0x0001,

0xfdb0,	// (0x0006c28f) main_cf0_pane_t_ParamLimits

0xfdb0,	// (0x0006c28f) main_cf0_pane_t

0xd679,	// (0x00069b58) scroll_pane_cp11

0x9292,	// (0x00065771) cf0_flow_pane_g1

0x929a,	// (0x00065779) cf0_flow_pane_g2

0x0001,

0xfdb5,	// (0x0006c294) cf0_flow_pane_g

0x92a2,	// (0x00065781) cf0_flow_pane_t1

0x0aa3,	// (0x0005cf82) main_call6_pane

0x0aa3,	// (0x0005cf82) main_calllock_pane

0x92b0,	// (0x0006578f) call6_btn_grp_pane_ParamLimits

0x92b0,	// (0x0006578f) call6_btn_grp_pane

0x92ca,	// (0x000657a9) call6_pane_g1_ParamLimits

0x92ca,	// (0x000657a9) call6_pane_g1

0x92df,	// (0x000657be) popup_call6_1st_window_ParamLimits

0x92df,	// (0x000657be) popup_call6_1st_window

0x92f0,	// (0x000657cf) popup_call6_2nd_window_ParamLimits

0x92f0,	// (0x000657cf) popup_call6_2nd_window

0x9301,	// (0x000657e0) cell_call6_btn_pane_ParamLimits

0x9301,	// (0x000657e0) cell_call6_btn_pane

0xadcb,	// (0x000672aa) bg_popup_call2_in_pane_cp03

0xd684,	// (0x00069b63) popup_call6_1st_window_g1

0xd68c,	// (0x00069b6b) popup_call6_1st_window_g2

0xd694,	// (0x00069b73) popup_call6_1st_window_g3

0x0002,

0xfdba,	// (0x0006c299) popup_call6_1st_window_g

0xd69c,	// (0x00069b7b) popup_call6_1st_window_t1

0xd6ab,	// (0x00069b8a) popup_call6_1st_window_t2

0xd6bb,	// (0x00069b9a) popup_call6_1st_window_t3

0x0002,

0xfdc1,	// (0x0006c2a0) popup_call6_1st_window_t

0xadcb,	// (0x000672aa) bg_popup_call2_in_pane_cp04

0xd684,	// (0x00069b63) popup_call6_2nd_window_g1

0xd68c,	// (0x00069b6b) popup_call6_2nd_window_g2

0xd694,	// (0x00069b73) popup_call6_2nd_window_g3

0x0002,

0xfdba,	// (0x0006c299) popup_call6_2nd_window_g

0xd69c,	// (0x00069b7b) popup_call6_2nd_window_t1

0x0aa3,	// (0x0005cf82) bg_button_pane_cp15

0xd6cb,	// (0x00069baa) cell_call6_btn_pane_g1

0xd6d4,	// (0x00069bb3) cell_call6_btn_pane_t1

0x9315,	// (0x000657f4) listscroll_wgtman_pane_ParamLimits

0x9315,	// (0x000657f4) listscroll_wgtman_pane

0x9338,	// (0x00065817) wgtman_btn_pane_ParamLimits

0x9338,	// (0x00065817) wgtman_btn_pane

0xac82,	// (0x00067161) aid_scroll_copy1

0xd6e3,	// (0x00069bc2) list_wgtman_pane

0x937b,	// (0x0006585a) wgtman_btn_pane_g1_ParamLimits

0x937b,	// (0x0006585a) wgtman_btn_pane_g1

0x93a7,	// (0x00065886) wgtman_btn_pane_t1_ParamLimits

0x93a7,	// (0x00065886) wgtman_btn_pane_t1

0xd6ed,	// (0x00069bcc) wgtman_btn_pane_t2_ParamLimits

0xd6ed,	// (0x00069bcc) wgtman_btn_pane_t2

0x0001,

0xfdc8,	// (0x0006c2a7) wgtman_btn_pane_t_ParamLimits

0xfdc8,	// (0x0006c2a7) wgtman_btn_pane_t

0x93e4,	// (0x000658c3) listrow_wgtman_pane_ParamLimits

0x93e4,	// (0x000658c3) listrow_wgtman_pane

0x93f6,	// (0x000658d5) listrow_wgtman_pane_g1

0x9403,	// (0x000658e2) listrow_wgtman_pane_g2

0x0001,

0xfdcd,	// (0x0006c2ac) listrow_wgtman_pane_g

0x9421,	// (0x00065900) listrow_wgtman_pane_t1

0x9439,	// (0x00065918) listrow_wgtman_pane_t2

0x0001,

0xfdd2,	// (0x0006c2b1) listrow_wgtman_pane_t

0x945f,	// (0x0006593e) wait_bar_pane_cp09

0xd704,	// (0x00069be3) main_calllock_btn_pane

0xd70e,	// (0x00069bed) main_calllock_pane_g1

0x0aa3,	// (0x0005cf82) bg_button_pane_cp17

0xd71a,	// (0x00069bf9) main_calllock_btn_pane_g1

0xd723,	// (0x00069c02) main_calllock_btn_pane_t1

0x0aa3,	// (0x0005cf82) main_dialer3_pane

0x0aa3,	// (0x0005cf82) main_fmrd2_pane

0xc721,	// (0x00068c00) main_fs_bigclock_unlock_btn_pane_g1

0xd73a,	// (0x00069c19) main_fs_bigclock_unlock_btn_pane_t1

0x9471,	// (0x00065950) area_fmrd2_info_pane_ParamLimits

0x9471,	// (0x00065950) area_fmrd2_info_pane

0x9482,	// (0x00065961) area_fmrd2_visual_pane_ParamLimits

0x9482,	// (0x00065961) area_fmrd2_visual_pane

0x9490,	// (0x0006596f) fmrd2_indi_pane_ParamLimits

0x9490,	// (0x0006596f) fmrd2_indi_pane

0x949d,	// (0x0006597c) area_fmrd2_visual_pane_g1

0x94a5,	// (0x00065984) area_fmrd2_visual_pane_t1

0x94b5,	// (0x00065994) area_fmrd2_visual_pane_t2

0x94c5,	// (0x000659a4) area_fmrd2_visual_pane_t3

0x0002,

0xfddc,	// (0x0006c2bb) area_fmrd2_visual_pane_t

0x94d5,	// (0x000659b4) area_fmrd2_info_pane_g1

0x94dd,	// (0x000659bc) area_fmrd2_info_pane_t1

0x94ed,	// (0x000659cc) area_fmrd2_info_pane_t2

0x94fd,	// (0x000659dc) area_fmrd2_info_pane_t3

0x950d,	// (0x000659ec) area_fmrd2_info_pane_t4

0x0003,

0xfde3,	// (0x0006c2c2) area_fmrd2_info_pane_t

0x951b,	// (0x000659fa) fmrd2_indi_pane_t1

0x952b,	// (0x00065a0a) fmrd2_indi_pane_t2

0x953b,	// (0x00065a1a) fmrd2_indi_pane_t3

0x0002,

0xfdec,	// (0x0006c2cb) fmrd2_indi_pane_t

0xebf8,	// (0x0006b0d7) list_single_fs_bigclock_indicator_pane_g5_ParamLimits

0xebf8,	// (0x0006b0d7) list_single_fs_bigclock_indicator_pane_g5

0xec9f,	// (0x0006b17e) list_single_fs_bigclock_indicator_pane_t5_ParamLimits

0xec9f,	// (0x0006b17e) list_single_fs_bigclock_indicator_pane_t5

0x8b26,	// (0x00065005) aid_cell_bcale_month_pane_ParamLimits

0x8b26,	// (0x00065005) aid_cell_bcale_month_pane

0x8b3e,	// (0x0006501d) bcale_month_pane_ParamLimits

0x8b3e,	// (0x0006501d) bcale_month_pane

0x8b55,	// (0x00065034) bcale_preview_pane_ParamLimits

0x8b55,	// (0x00065034) bcale_preview_pane

0xd4bc,	// (0x0006999b) list_single_fs_bigclock_pane_t1_ParamLimits

0xd4db,	// (0x000699ba) list_single_fs_bigclock_pane_t2_ParamLimits

0xd4db,	// (0x000699ba) list_single_fs_bigclock_pane_t2

0x0001,

0xfd73,	// (0x0006c252) list_single_fs_bigclock_pane_t_ParamLimits

0xfd73,	// (0x0006c252) list_single_fs_bigclock_pane_t

0xd732,	// (0x00069c11) main_fs_bigclock_unlock_btn_pane_g2

0x0001,

0xfdd7,	// (0x0006c2b6) main_fs_bigclock_unlock_btn_pane_g

0x954b,	// (0x00065a2a) aid_dia3_key_size_ParamLimits

0x954b,	// (0x00065a2a) aid_dia3_key_size

0x955a,	// (0x00065a39) aid_dia3_listrow_size_ParamLimits

0x955a,	// (0x00065a39) aid_dia3_listrow_size

0x956f,	// (0x00065a4e) dia3_keypad_fun_pane_ParamLimits

0x956f,	// (0x00065a4e) dia3_keypad_fun_pane

0x958b,	// (0x00065a6a) dia3_keypad_num_pane_ParamLimits

0x958b,	// (0x00065a6a) dia3_keypad_num_pane

0x95a6,	// (0x00065a85) dia3_listscroll_pane_ParamLimits

0x95a6,	// (0x00065a85) dia3_listscroll_pane

0x95b9,	// (0x00065a98) dia3_numentry_pane_ParamLimits

0x95b9,	// (0x00065a98) dia3_numentry_pane

0xd748,	// (0x00069c27) dia3_list_pane

0xd753,	// (0x00069c32) scroll_pane_cp12

0x0aa3,	// (0x0005cf82) bg_dia3_numentry_pane

0x95cd,	// (0x00065aac) dia3_numentry_pane_t1

0x95dc,	// (0x00065abb) cell_dia3_key_num_pane

0x95e4,	// (0x00065ac3) cell_dia3_key0_fun_pane_ParamLimits

0x95e4,	// (0x00065ac3) cell_dia3_key0_fun_pane

0x95f8,	// (0x00065ad7) cell_dia3_key1_fun_pane_ParamLimits

0x95f8,	// (0x00065ad7) cell_dia3_key1_fun_pane

0x9610,	// (0x00065aef) dia3_listrow_pane

0xe8fc,	// (0x0006addb) bg_dia3_numentry_pane_g1

0x0aa3,	// (0x0005cf82) bg_button_pane_cp21

0xd75e,	// (0x00069c3d) cell_dia3_key_num_pane_t1

0xd76c,	// (0x00069c4b) cell_dia3_key_num_pane_t2

0xd77b,	// (0x00069c5a) cell_dia3_key_num_pane_t3

0xd78a,	// (0x00069c69) cell_dia3_key_num_pane_t4

0x0003,

0xfdf3,	// (0x0006c2d2) cell_dia3_key_num_pane_t

0x0aa3,	// (0x0005cf82) bg_button_pane_cp19

0x9622,	// (0x00065b01) cell_dia3_key0_fun_pane_g1

0x0aa3,	// (0x0005cf82) bg_button_pane_cp20

0x962a,	// (0x00065b09) cell_dia3_key1_fun_pane_g1

0x9632,	// (0x00065b11) area_left_week_number_pane

0x963c,	// (0x00065b1b) area_top_day_name_pane

0x9648,	// (0x00065b27) frame_month_view_pane

0x9652,	// (0x00065b31) grid_month_view_pane

0xd799,	// (0x00069c78) cell_top_day_name_pane_ParamLimits

0xd799,	// (0x00069c78) cell_top_day_name_pane

0x965c,	// (0x00065b3b) cell_area_left_week_number_pane_ParamLimits

0x965c,	// (0x00065b3b) cell_area_left_week_number_pane

0x9670,	// (0x00065b4f) cell_month_view_pane_ParamLimits

0x9670,	// (0x00065b4f) cell_month_view_pane

0xd7b3,	// (0x00069c92) frm_month_g1

0x968d,	// (0x00065b6c) frm_month_g2

0x9697,	// (0x00065b76) frm_month_g3

0x96a1,	// (0x00065b80) frm_month_g4

0x96ab,	// (0x00065b8a) frm_month_g5

0x96b5,	// (0x00065b94) frm_month_g6

0x96bf,	// (0x00065b9e) frm_month_g7

0xd7bc,	// (0x00069c9b) frm_month_g8

0xd7c5,	// (0x00069ca4) frm_month_g9

0xd7ce,	// (0x00069cad) frm_month_g10

0xd7d7,	// (0x00069cb6) frm_month_g11

0xd7e0,	// (0x00069cbf) frm_month_g12

0xd7e9,	// (0x00069cc8) frm_month_g13

0xd7f2,	// (0x00069cd1) frm_month_g14

0xd7fd,	// (0x00069cdc) frm_month_g15

0xd808,	// (0x00069ce7) frm_month_g16

0x000f,

0xfdfc,	// (0x0006c2db) frm_month_g

0x96c9,	// (0x00065ba8) cell_top_day_name_pane_t1

0x96d8,	// (0x00065bb7) cell_area_left_week_number_pane_g1

0x96e0,	// (0x00065bbf) cell_area_left_week_number_pane_t1

0xc721,	// (0x00068c00) cell_month_view_pane_g1

0x96ef,	// (0x00065bce) cell_month_view_pane_t1

0x0aa3,	// (0x0005cf82) main_fps_pane

0xee8f,	// (0x0006b36e) cmail_ddmenu_btn02_pane_cp1_ParamLimits

0xee8f,	// (0x0006b36e) cmail_ddmenu_btn02_pane_cp1

0xeeab,	// (0x0006b38a) cmail_ddmenu_btn02_pane_cp2_ParamLimits

0xeeab,	// (0x0006b38a) cmail_ddmenu_btn02_pane_cp2

0x8f32,	// (0x00065411) cmail_ddmenu_btn02_pane_g2_ParamLimits

0x8f32,	// (0x00065411) cmail_ddmenu_btn02_pane_g2

0x0001,

0xfd26,	// (0x0006c205) cmail_ddmenu_btn02_pane_g_ParamLimits

0xfd26,	// (0x0006c205) cmail_ddmenu_btn02_pane_g

0x8f53,	// (0x00065432) cmail_ddmenu_btn02_pane_t2_ParamLimits

0x8f53,	// (0x00065432) cmail_ddmenu_btn02_pane_t2

0x0001,

0xfd2b,	// (0x0006c20a) cmail_ddmenu_btn02_pane_t_ParamLimits

0xfd2b,	// (0x0006c20a) cmail_ddmenu_btn02_pane_t

0x96fe,	// (0x00065bdd) fps_text_pane_ParamLimits

0x96fe,	// (0x00065bdd) fps_text_pane

0x9715,	// (0x00065bf4) main_fps_pane_g1_ParamLimits

0x9715,	// (0x00065bf4) main_fps_pane_g1

0x972f,	// (0x00065c0e) wait_bar_pane_cp010_ParamLimits

0x972f,	// (0x00065c0e) wait_bar_pane_cp010

0x9740,	// (0x00065c1f) fps_text_pane_t1_ParamLimits

0x9740,	// (0x00065c1f) fps_text_pane_t1

0xd138,	// (0x00069617) cam4_image_uncrop_pane_g1

0xd141,	// (0x00069620) cam4_image_uncrop_pane_g2

0x5f98,	// (0x00062477) cam4_image_uncrop_pane_g3

0x5fa1,	// (0x00062480) cam4_image_uncrop_pane_g4

0x0003,

0xf8f9,	// (0x0006bdd8) cam4_image_uncrop_pane_g

0x9610,	// (0x00065aef) dia3_listrow_pane_ParamLimits

0x0aa3,	// (0x0005cf82) main_phob2_pane

0x88d9,	// (0x00064db8) cell_tport_appsw_pane_cp02_ParamLimits

0x88d9,	// (0x00064db8) cell_tport_appsw_pane_cp02

0x88ed,	// (0x00064dcc) cell_tport_appsw_pane_cp03_ParamLimits

0x88ed,	// (0x00064dcc) cell_tport_appsw_pane_cp03

0x0aa3,	// (0x0005cf82) phob2_contact_card_pane

0x0aa3,	// (0x0005cf82) phob2_listscroll_pane

0xd813,	// (0x00069cf2) phob2_list_pane

0xd81b,	// (0x00069cfa) scroll_pane_cp034

0x9758,	// (0x00065c37) phob2_cc_data_pane_ParamLimits

0x9758,	// (0x00065c37) phob2_cc_data_pane

0x9777,	// (0x00065c56) phob2_cc_listscroll_pane_ParamLimits

0x9777,	// (0x00065c56) phob2_cc_listscroll_pane

0x9795,	// (0x00065c74) list_double_large_graphic_phob2_pane_ParamLimits

0x9795,	// (0x00065c74) list_double_large_graphic_phob2_pane

0x97a7,	// (0x00065c86) list_double_large_graphic_phob2_pane_g1_ParamLimits

0x97a7,	// (0x00065c86) list_double_large_graphic_phob2_pane_g1

0x97b4,	// (0x00065c93) list_double_large_graphic_phob2_pane_g2_ParamLimits

0x97b4,	// (0x00065c93) list_double_large_graphic_phob2_pane_g2

0x0001,

0xfe1d,	// (0x0006c2fc) list_double_large_graphic_phob2_pane_g_ParamLimits

0xfe1d,	// (0x0006c2fc) list_double_large_graphic_phob2_pane_g

0x97c0,	// (0x00065c9f) list_double_large_graphic_phob2_pane_t1_ParamLimits

0x97c0,	// (0x00065c9f) list_double_large_graphic_phob2_pane_t1

0x97d5,	// (0x00065cb4) list_double_large_graphic_phob2_pane_t2_ParamLimits

0x97d5,	// (0x00065cb4) list_double_large_graphic_phob2_pane_t2

0x0001,

0xfe22,	// (0x0006c301) list_double_large_graphic_phob2_pane_t_ParamLimits

0xfe22,	// (0x0006c301) list_double_large_graphic_phob2_pane_t

0x0aa3,	// (0x0005cf82) list_highlight_pane_cp024

0xd823,	// (0x00069d02) phob2_cc_button_pane

0x97e7,	// (0x00065cc6) phob2_cc_data_pane_g1_ParamLimits

0x97e7,	// (0x00065cc6) phob2_cc_data_pane_g1

0x97fc,	// (0x00065cdb) phob2_cc_data_pane_g2_ParamLimits

0x97fc,	// (0x00065cdb) phob2_cc_data_pane_g2

0x0001,

0xfe27,	// (0x0006c306) phob2_cc_data_pane_g_ParamLimits

0xfe27,	// (0x0006c306) phob2_cc_data_pane_g

0x980e,	// (0x00065ced) phob2_cc_data_pane_t1_ParamLimits

0x980e,	// (0x00065ced) phob2_cc_data_pane_t1

0x9826,	// (0x00065d05) phob2_cc_data_pane_t2_ParamLimits

0x9826,	// (0x00065d05) phob2_cc_data_pane_t2

0x983e,	// (0x00065d1d) phob2_cc_data_pane_t3_ParamLimits

0x983e,	// (0x00065d1d) phob2_cc_data_pane_t3

0x0002,

0xfe2c,	// (0x0006c30b) phob2_cc_data_pane_t_ParamLimits

0xfe2c,	// (0x0006c30b) phob2_cc_data_pane_t

0xd82b,	// (0x00069d0a) phob2_cc_list_pane_ParamLimits

0xd82b,	// (0x00069d0a) phob2_cc_list_pane

0xe809,	// (0x0006ace8) scroll_pane_cp035_ParamLimits

0xe809,	// (0x0006ace8) scroll_pane_cp035

0xc21b,	// (0x000686fa) bg_button_pane_cp033

0xd837,	// (0x00069d16) phob2_cc_button_pane_g1

0xd843,	// (0x00069d22) phob2_cc_button_pane_t1

0xd858,	// (0x00069d37) phob2_cc_button_pane_t2

0x0001,

0xfe33,	// (0x0006c312) phob2_cc_button_pane_t

0x9856,	// (0x00065d35) list_double_large_graphic_phob2_cc_pane_ParamLimits

0x9856,	// (0x00065d35) list_double_large_graphic_phob2_cc_pane

0x9868,	// (0x00065d47) list_double_large_graphic_phob2_cc_pane_g1_ParamLimits

0x9868,	// (0x00065d47) list_double_large_graphic_phob2_cc_pane_g1

0x9874,	// (0x00065d53) list_double_large_graphic_phob2_cc_pane_g2_ParamLimits

0x9874,	// (0x00065d53) list_double_large_graphic_phob2_cc_pane_g2

0x9880,	// (0x00065d5f) list_double_large_graphic_phob2_cc_pane_g3_ParamLimits

0x9880,	// (0x00065d5f) list_double_large_graphic_phob2_cc_pane_g3

0x988c,	// (0x00065d6b) list_double_large_graphic_phob2_cc_pane_g4_ParamLimits

0x988c,	// (0x00065d6b) list_double_large_graphic_phob2_cc_pane_g4

0x9898,	// (0x00065d77) list_double_large_graphic_phob2_cc_pane_g5_ParamLimits

0x9898,	// (0x00065d77) list_double_large_graphic_phob2_cc_pane_g5

0x0004,

0xfe38,	// (0x0006c317) list_double_large_graphic_phob2_cc_pane_g_ParamLimits

0xfe38,	// (0x0006c317) list_double_large_graphic_phob2_cc_pane_g

0x98a4,	// (0x00065d83) list_double_large_graphic_phob2_cc_pane_t1_ParamLimits

0x98a4,	// (0x00065d83) list_double_large_graphic_phob2_cc_pane_t1

0x98cd,	// (0x00065dac) list_double_large_graphic_phob2_cc_pane_t2_ParamLimits

0x98cd,	// (0x00065dac) list_double_large_graphic_phob2_cc_pane_t2

0x0001,

0xfe43,	// (0x0006c322) list_double_large_graphic_phob2_cc_pane_t_ParamLimits

0xfe43,	// (0x0006c322) list_double_large_graphic_phob2_cc_pane_t

0xd86a,	// (0x00069d49) list_highlight_pane_cp025_ParamLimits

0xd86a,	// (0x00069d49) list_highlight_pane_cp025

0xc21b,	// (0x000686fa) bg_button_pane_cp033_ParamLimits

0xd837,	// (0x00069d16) phob2_cc_button_pane_g1_ParamLimits

0xd843,	// (0x00069d22) phob2_cc_button_pane_t1_ParamLimits

0xd858,	// (0x00069d37) phob2_cc_button_pane_t2_ParamLimits

0xfe33,	// (0x0006c312) phob2_cc_button_pane_t_ParamLimits

0x0caf,	// (0x0005d18e) popup_wgtman_window

0xdf5f,	// (0x0006a43e) scroll_pane_cp038

0x935d,	// (0x0006583c) wgtman_btn_pane_cp_01_ParamLimits

0x935d,	// (0x0006583c) wgtman_btn_pane_cp_01

0xd878,	// (0x00069d57) wgtman_content_pane

0xd881,	// (0x00069d60) wgtman_heading_pane

0x0aa3,	// (0x0005cf82) bg_heading_pane_cp02

0xd88a,	// (0x00069d69) wgtman_heading_pane_g1

0xd892,	// (0x00069d71) wgtman_heading_pane_t1

0xd8a0,	// (0x00069d7f) scroll_pane_cp036

0xd8a8,	// (0x00069d87) wgtman_list_pane

0xd8b0,	// (0x00069d8f) wgtman_list_pane_t1_ParamLimits

0xd8b0,	// (0x00069d8f) wgtman_list_pane_t1

0xdbee,	// (0x0006a0cd) cam4_grid_pane

0x6c71,	// (0x00063150) bg_button_pane_cp015_ParamLimits

0x6c83,	// (0x00063162) bg_button_pane_cp016_ParamLimits

0x6c96,	// (0x00063175) bg_button_pane_cp017_ParamLimits

0x6cee,	// (0x000631cd) popup_vitu2_query_window_g3_ParamLimits

0x6cee,	// (0x000631cd) popup_vitu2_query_window_g3

0x6dab,	// (0x0006328a) popup_vitu2_query_window_t6_ParamLimits

0x6dab,	// (0x0006328a) popup_vitu2_query_window_t6

0x6dd6,	// (0x000632b5) popup_vitu2_query_window_t7_ParamLimits

0x6dd6,	// (0x000632b5) popup_vitu2_query_window_t7

0xd138,	// (0x00069617) cam4_grid_pane_g1

0xd141,	// (0x00069620) cam4_grid_pane_g2

0xd8ca,	// (0x00069da9) cam4_grid_pane_g3

0xd8d3,	// (0x00069db2) cam4_grid_pane_g4

0x0003,

0xfe48,	// (0x0006c327) cam4_grid_pane_g

0x1ae3,	// (0x0005dfc2) aid_placing_vt_slider_lsc_ParamLimits

0x1dee,	// (0x0005e2cd) vidtel_button_pane_ParamLimits

0x1dee,	// (0x0005e2cd) vidtel_button_pane

0xd8de,	// (0x00069dbd) bg_button_pane_cp034

0x98f6,	// (0x00065dd5) vidtel_button_pane_g1

0xd8e8,	// (0x00069dc7) vidtel_button_pane_t1

0xe061,	// (0x0006a540) aid_size_vtel_slider_touch

0xe809,	// (0x0006ace8) scroll_pane_cp039

0xe93a,	// (0x0006ae19) ncim_query_button_pane_cp01_ParamLimits

0xe959,	// (0x0006ae38) ncimui_query_pane_g1_ParamLimits

0xc21b,	// (0x000686fa) input_focus_pane_cp012_ParamLimits

0xe97e,	// (0x0006ae5d) ncim_query_entry_pane_t1_ParamLimits

0xe809,	// (0x0006ace8) scroll_pane_cp039_ParamLimits

0x2c40,	// (0x0005f11f) navi_pane_bcale_mc_g1

0x2c48,	// (0x0005f127) navi_pane_bcale_mc_t1

0xeef4,	// (0x0006b3d3) main_sp_fs_email_pane_g1

0xeefc,	// (0x0006b3db) main_sp_fs_email_pane_g2

0x0001,

0x0738,	// (0x0005cc17) main_sp_fs_email_pane_g

0xd156,	// (0x00069635) list_single_cale_mrui_row_pane_g3_ParamLimits

0xd156,	// (0x00069635) list_single_cale_mrui_row_pane_g3

0x8f7b,	// (0x0006545a) list_single_recal_day_pane_g5_event_pane

0xd31b,	// (0x000697fa) list_single_recal_day_pane_g7

0xd8f6,	// (0x00069dd5) list_recal_day_event_pane_cp01

0xd8ff,	// (0x00069dde) list_recal_vselct_arw_lo_pane_cp01

0xd907,	// (0x00069de6) list_recal_vselct_arw_up_pane_cp01

0xd90f,	// (0x00069dee) list_recal_vselct_pane_cp01

0xe083,	// (0x0006a562) list_recal_day_event_pane_cp01_g1

0xd919,	// (0x00069df8) list_recal_day_event_pane_cp01_t1

0xd323,	// (0x00069802) list_single_recal_day_pane_t1_ParamLimits

0xd335,	// (0x00069814) list_single_recal_day_pane_t2_ParamLimits

0xfd3b,	// (0x0006c21a) list_single_recal_day_pane_t_ParamLimits

0xa187,	// (0x00066666) bg_notes_pane_ParamLimits

0xa195,	// (0x00066674) list_notes_pane_ParamLimits

0x0ff8,	// (0x0005d4d7) scroll_pane_cp06_ParamLimits

0xa1d1,	// (0x000666b0) main_notes_pane_ParamLimits

0x0aa3,	// (0x0005cf82) main_welc_pane

0x98fe,	// (0x00065ddd) main_welc_body_pane_ParamLimits

0x98fe,	// (0x00065ddd) main_welc_body_pane

0x991c,	// (0x00065dfb) main_welc_opti_pane_ParamLimits

0x991c,	// (0x00065dfb) main_welc_opti_pane

0x9961,	// (0x00065e40) main_welc_pane_t1_ParamLimits

0x9961,	// (0x00065e40) main_welc_pane_t1

0x997f,	// (0x00065e5e) main_welc_body_row_pane_ParamLimits

0x997f,	// (0x00065e5e) main_welc_body_row_pane

0x9993,	// (0x00065e72) main_welc_opti_row_pane_ParamLimits

0x9993,	// (0x00065e72) main_welc_opti_row_pane

0xd927,	// (0x00069e06) main_welc_opti_row_pane_g1

0xd92f,	// (0x00069e0e) main_welc_opti_row_pane_t1

0xd93e,	// (0x00069e1d) main_welc_body_row_pane_t1

0xd5c2,	// (0x00069aa1) popup_notif_wgt_heading_pane

0xd5dc,	// (0x00069abb) aid_size_list_notif_wgt_del_ParamLimits

0xd5e9,	// (0x00069ac8) list_notif_wgt_row_pane_g1_ParamLimits

0xd5f5,	// (0x00069ad4) list_notif_wgt_row_pane_g2_ParamLimits

0xd601,	// (0x00069ae0) list_notif_wgt_row_pane_g3_ParamLimits

0xfda2,	// (0x0006c281) list_notif_wgt_row_pane_g_ParamLimits

0xd60e,	// (0x00069aed) list_notif_wgt_row_pane_t1_ParamLimits

0xd623,	// (0x00069b02) list_notif_wgt_row_pane_t2_ParamLimits

0xd635,	// (0x00069b14) list_notif_wgt_row_pane_t3_ParamLimits

0xfda9,	// (0x0006c288) list_notif_wgt_row_pane_t_ParamLimits

0x93f6,	// (0x000658d5) listrow_wgtman_pane_g1_ParamLimits

0x9403,	// (0x000658e2) listrow_wgtman_pane_g2_ParamLimits

0xfdcd,	// (0x0006c2ac) listrow_wgtman_pane_g_ParamLimits

0x9421,	// (0x00065900) listrow_wgtman_pane_t1_ParamLimits

0x9439,	// (0x00065918) listrow_wgtman_pane_t2_ParamLimits

0xfdd2,	// (0x0006c2b1) listrow_wgtman_pane_t_ParamLimits

0x945f,	// (0x0006593e) wait_bar_pane_cp09_ParamLimits

0x0aa3,	// (0x0005cf82) bg_popup_heading_pane_cp02

0xd94d,	// (0x00069e2c) popup_notif_wgt_heading_pane_g1

0xd955,	// (0x00069e34) popup_notif_wgt_heading_pane_t1

0x0aa3,	// (0x0005cf82) main_vids_pane

0x0aa3,	// (0x0005cf82) vids_listscroll_pane

0x99a3,	// (0x00065e82) scroll_pane_cp040

0x0aa3,	// (0x0005cf82) vids_list_pane

0x99ae,	// (0x00065e8d) vids_list_double_pane_ParamLimits

0x99ae,	// (0x00065e8d) vids_list_double_pane

0x99bf,	// (0x00065e9e) vids_list_double_pane_g1

0x99c8,	// (0x00065ea7) vids_list_double_pane_t1

0x99d8,	// (0x00065eb7) vids_list_double_pane_t2

0x0001,

0xfe56,	// (0x0006c335) vids_list_double_pane_t

0x9a56,	// (0x00065f35) main_ncimui_pane_ParamLimits

0x7a94,	// (0x00063f73) main_ncimui_pane_g1_ParamLimits

0x7aa0,	// (0x00063f7f) main_ncimui_pane_g2_ParamLimits

0x7aa0,	// (0x00063f7f) main_ncimui_pane_g2

0x0001,

0xfb6b,	// (0x0006c04a) main_ncimui_pane_g_ParamLimits

0xfb6b,	// (0x0006c04a) main_ncimui_pane_g

0x9937,	// (0x00065e16) main_welc_pane_g1_ParamLimits

0x9937,	// (0x00065e16) main_welc_pane_g1

0x994c,	// (0x00065e2b) main_welc_pane_g2_ParamLimits

0x994c,	// (0x00065e2b) main_welc_pane_g2

0x0001,

0xfe51,	// (0x0006c330) main_welc_pane_g_ParamLimits

0xfe51,	// (0x0006c330) main_welc_pane_g
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
	};

} // end of namespace AknLayoutScalable_Abrw_phl_apps_qhd_lsc_tch_Small
