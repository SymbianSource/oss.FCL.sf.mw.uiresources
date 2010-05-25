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

#include "aknlayoutscalable_abrw_php_apps_qhd_prt_tch_large.h"
#include "AknLayout2ScalableDecode.h"
namespace AknLayoutScalable_Apps { extern const TUint8 KByteCodedData_AknLayoutScalable_Elaf_php_apps_qhd_prt_tch[]; }

namespace AknLayoutScalable_Abrw_php_apps_qhd_prt_tch_Large
{

extern const TUint16 KDataLookup[AknLayoutScalable_Apps::E_TApiId_TableSize];
const SCompDataImplData KImplData = { KDataLookup, AknLayoutScalable_Apps::KByteCodedData_AknLayoutScalable_Elaf_php_apps_qhd_prt_tch + 0x0008d747 };

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
0x1d7d,	// (0x0008f4c4) Screen

0x1d89,	// (0x0008f4d0) application_window

0x1de5,	// (0x0008f52c) area_bottom_pane_ParamLimits

0x1de5,	// (0x0008f52c) area_bottom_pane

0x1e3e,	// (0x0008f585) area_top_pane_ParamLimits

0x1e3e,	// (0x0008f585) area_top_pane

0x1ea2,	// (0x0008f5e9) call_video_uplink_pane_ParamLimits

0x1ea2,	// (0x0008f5e9) call_video_uplink_pane

0x1ee1,	// (0x0008f628) main_pane_ParamLimits

0x1ee1,	// (0x0008f628) main_pane

0xd89b,	// (0x0009afe2) context_pane

0x53e8,	// (0x00092b2f) navi_pane

0x540e,	// (0x00092b55) popup_cale_events_window_ParamLimits

0x540e,	// (0x00092b55) popup_cale_events_window

0xd8ae,	// (0x0009aff5) popup_mup_playback_window

0x5426,	// (0x00092b6d) signal_pane

0xac29,	// (0x00098370) main_browser_pane

0xadee,	// (0x00098535) main_burst_pane

0x5266,	// (0x000929ad) main_calc_pane

0xd881,	// (0x0009afc8) main_cale_day_pane

0x2644,	// (0x0008fd8b) main_cale_month_pane

0xd881,	// (0x0009afc8) main_cale_week_pane

0xadee,	// (0x00098535) main_call_pane

0x0ce2,	// (0x0008e429) main_call_poc_pane

0xadee,	// (0x00098535) main_camera_pane

0xadee,	// (0x00098535) main_chi_dic_pane

0xb5d3,	// (0x00098d1a) main_clock_pane

0x0ce2,	// (0x0008e429) main_fmradio_pane

0xadee,	// (0x00098535) main_graph_messa_pane

0x0ce2,	// (0x0008e429) main_help_pane

0xac29,	// (0x00098370) main_im_pane

0xab64,	// (0x000982ab) main_image_pane_ParamLimits

0xab64,	// (0x000982ab) main_image_pane

0x0ce2,	// (0x0008e429) main_location2_pane

0xadee,	// (0x00098535) main_location_pane

0xab64,	// (0x000982ab) main_messa_pane

0x0ce2,	// (0x0008e429) main_mp2_pane

0xadee,	// (0x00098535) main_mp_pane

0x0ce2,	// (0x0008e429) main_msg_pane

0x0ce2,	// (0x0008e429) main_mup_eq_pane

0x0ce2,	// (0x0008e429) main_mup_pane

0xac29,	// (0x00098370) main_notes_pane

0x0ce2,	// (0x0008e429) main_pec_pane

0x0ce2,	// (0x0008e429) main_phob_pane

0x0ce2,	// (0x0008e429) main_pinb_pane

0x0ce2,	// (0x0008e429) main_postcard_pane

0x0ce2,	// (0x0008e429) main_qdial_pane

0xadee,	// (0x00098535) main_skin_pane

0x0ce2,	// (0x0008e429) main_smil2_pane

0xadee,	// (0x00098535) main_smil_pane

0xadee,	// (0x00098535) main_video_pane

0xadee,	// (0x00098535) main_video_tele_pane

0xab64,	// (0x000982ab) main_viewer_pane_ParamLimits

0xab64,	// (0x000982ab) main_viewer_pane

0xadee,	// (0x00098535) main_vorec_pane

0x52b2,	// (0x000929f9) popup_blid_sat_info_window_ParamLimits

0x52b2,	// (0x000929f9) popup_blid_sat_info_window

0x52d2,	// (0x00092a19) popup_dyc_status_message_window_ParamLimits

0x52d2,	// (0x00092a19) popup_dyc_status_message_window

0x52e2,	// (0x00092a29) popup_grid_large_graphic_window_ParamLimits

0x52e2,	// (0x00092a29) popup_grid_large_graphic_window

0x5373,	// (0x00092aba) popup_loc_request_window_ParamLimits

0x5373,	// (0x00092aba) popup_loc_request_window

0x53c0,	// (0x00092b07) popup_wml_address_window_ParamLimits

0x53c0,	// (0x00092b07) popup_wml_address_window

0x513e,	// (0x00092885) call_muted_g1

0x4e00,	// (0x00092547) popup_call_audio_conf_window_ParamLimits

0x4e00,	// (0x00092547) popup_call_audio_conf_window

0x514e,	// (0x00092895) popup_call_audio_first_window_ParamLimits

0x514e,	// (0x00092895) popup_call_audio_first_window

0x518e,	// (0x000928d5) popup_call_audio_in_window_ParamLimits

0x518e,	// (0x000928d5) popup_call_audio_in_window

0x51b2,	// (0x000928f9) popup_call_audio_out_window_ParamLimits

0x51b2,	// (0x000928f9) popup_call_audio_out_window

0x51d4,	// (0x0009291b) popup_call_audio_second_window_ParamLimits

0x51d4,	// (0x0009291b) popup_call_audio_second_window

0x5204,	// (0x0009294b) popup_call_audio_wait_window_ParamLimits

0x5204,	// (0x0009294b) popup_call_audio_wait_window

0x5225,	// (0x0009296c) popup_number_entry_window_ParamLimits

0x5225,	// (0x0009296c) popup_number_entry_window

0xedd6,	// (0x0009c51d) bg_popup_call_pane_cp05_ParamLimits

0xedd6,	// (0x0009c51d) bg_popup_call_pane_cp05

0xedf6,	// (0x0009c53d) popup_number_entry_window_t1

0xee09,	// (0x0009c550) popup_number_entry_window_t2

0xee1b,	// (0x0009c562) popup_number_entry_window_t3

0x0003,

0xf0ca,	// (0x0009c811) popup_number_entry_window_t

0xee2d,	// (0x0009c574) text_title_cp2

0xee40,	// (0x0009c587) bg_popup_call_pane_cp_ParamLimits

0xee40,	// (0x0009c587) bg_popup_call_pane_cp

0x0947,	// (0x0008e08e) call_thumbnail_pane

0x094f,	// (0x0008e096) popup_call_audio_in_window_g1_ParamLimits

0x094f,	// (0x0008e096) popup_call_audio_in_window_g1

0x095b,	// (0x0008e0a2) popup_call_audio_in_window_g2_ParamLimits

0x095b,	// (0x0008e0a2) popup_call_audio_in_window_g2

0x0967,	// (0x0008e0ae) popup_call_audio_in_window_g3_ParamLimits

0x0967,	// (0x0008e0ae) popup_call_audio_in_window_g3

0x0002,

0xf0d3,	// (0x0009c81a) popup_call_audio_in_window_g_ParamLimits

0xf0d3,	// (0x0009c81a) popup_call_audio_in_window_g

0x0973,	// (0x0008e0ba) popup_call_audio_in_window_t1_ParamLimits

0x0973,	// (0x0008e0ba) popup_call_audio_in_window_t1

0x098f,	// (0x0008e0d6) popup_call_audio_in_window_t2_ParamLimits

0x098f,	// (0x0008e0d6) popup_call_audio_in_window_t2

0x09ab,	// (0x0008e0f2) popup_call_audio_in_window_t3_ParamLimits

0x09ab,	// (0x0008e0f2) popup_call_audio_in_window_t3

0x0002,

0xf0da,	// (0x0009c821) popup_call_audio_in_window_t_ParamLimits

0xf0da,	// (0x0009c821) popup_call_audio_in_window_t

0xee40,	// (0x0009c587) bg_popup_call_pane_cp01_ParamLimits

0xee40,	// (0x0009c587) bg_popup_call_pane_cp01

0x0947,	// (0x0008e08e) call_thumbnail_pane_cp02

0x09be,	// (0x0008e105) call_type_pane_cp022

0x09c6,	// (0x0008e10d) popup_call_audio_out_window_g1_ParamLimits

0x09c6,	// (0x0008e10d) popup_call_audio_out_window_g1

0x09d8,	// (0x0008e11f) popup_call_audio_out_window_g2_ParamLimits

0x09d8,	// (0x0008e11f) popup_call_audio_out_window_g2

0x09e4,	// (0x0008e12b) popup_call_audio_out_window_g3_ParamLimits

0x09e4,	// (0x0008e12b) popup_call_audio_out_window_g3

0x0002,

0xf0e1,	// (0x0009c828) popup_call_audio_out_window_g_ParamLimits

0xf0e1,	// (0x0009c828) popup_call_audio_out_window_g

0x09f6,	// (0x0008e13d) popup_call_audio_out_window_t1_ParamLimits

0x09f6,	// (0x0008e13d) popup_call_audio_out_window_t1

0x0a0e,	// (0x0008e155) popup_call_audio_out_window_t2_ParamLimits

0x0a0e,	// (0x0008e155) popup_call_audio_out_window_t2

0x0001,

0xf0e8,	// (0x0009c82f) popup_call_audio_out_window_t_ParamLimits

0xf0e8,	// (0x0009c82f) popup_call_audio_out_window_t

0x0a23,	// (0x0008e16a) bg_popup_call_pane_ParamLimits

0x0a23,	// (0x0008e16a) bg_popup_call_pane

0x20fa,	// (0x0008f841) call_thumbnail_pane_cp_ParamLimits

0x20fa,	// (0x0008f841) call_thumbnail_pane_cp

0x0aa7,	// (0x0008e1ee) call_type_pane_cp01_ParamLimits

0x0aa7,	// (0x0008e1ee) call_type_pane_cp01

0x0aeb,	// (0x0008e232) popup_call_audio_first_window_g1_ParamLimits

0x0aeb,	// (0x0008e232) popup_call_audio_first_window_g1

0x0b37,	// (0x0008e27e) popup_call_audio_first_window_g2_ParamLimits

0x0b37,	// (0x0008e27e) popup_call_audio_first_window_g2

0x0001,

0xf0ed,	// (0x0009c834) popup_call_audio_first_window_g_ParamLimits

0xf0ed,	// (0x0009c834) popup_call_audio_first_window_g

0x0b7b,	// (0x0008e2c2) popup_call_audio_first_window_t1_ParamLimits

0x0b7b,	// (0x0008e2c2) popup_call_audio_first_window_t1

0x0c27,	// (0x0008e36e) popup_call_audio_first_window_t4_ParamLimits

0x0c27,	// (0x0008e36e) popup_call_audio_first_window_t4

0x0cb3,	// (0x0008e3fa) popup_call_audio_first_window_t5_ParamLimits

0x0cb3,	// (0x0008e3fa) popup_call_audio_first_window_t5

0x0002,

0xf0f2,	// (0x0009c839) popup_call_audio_first_window_t_ParamLimits

0xf0f2,	// (0x0009c839) popup_call_audio_first_window_t

0x0ce2,	// (0x0008e429) bg_popup_call_pane_cp02

0x0cec,	// (0x0008e433) call_type_pane_cp023

0x0cf4,	// (0x0008e43b) popup_call_audio_wait_window_g1

0x0cfc,	// (0x0008e443) popup_call_audio_wait_window_g2

0x0001,

0xf0f9,	// (0x0009c840) popup_call_audio_wait_window_g

0x0d04,	// (0x0008e44b) popup_call_audio_wait_window_t3

0x0d12,	// (0x0008e459) bg_popup_call_pane_cp03_ParamLimits

0x0d12,	// (0x0008e459) bg_popup_call_pane_cp03

0x0d72,	// (0x0008e4b9) call_thumbnail_pane_cp011_ParamLimits

0x0d72,	// (0x0008e4b9) call_thumbnail_pane_cp011

0x0d7e,	// (0x0008e4c5) call_type_pane_cp034_ParamLimits

0x0d7e,	// (0x0008e4c5) call_type_pane_cp034

0x0dba,	// (0x0008e501) popup_call_audio_second_window_g1_ParamLimits

0x0dba,	// (0x0008e501) popup_call_audio_second_window_g1

0xaa1d,	// (0x00098164) popup_call_audio_second_window_g2_ParamLimits

0xaa1d,	// (0x00098164) popup_call_audio_second_window_g2

0x0001,

0xf0fe,	// (0x0009c845) popup_call_audio_second_window_g_ParamLimits

0xf0fe,	// (0x0009c845) popup_call_audio_second_window_g

0xaa59,	// (0x000981a0) popup_call_audio_second_window_t1_ParamLimits

0xaa59,	// (0x000981a0) popup_call_audio_second_window_t1

0xaada,	// (0x00098221) popup_call_audio_second_window_t2_ParamLimits

0xaada,	// (0x00098221) popup_call_audio_second_window_t2

0xab10,	// (0x00098257) popup_call_audio_second_window_t3_ParamLimits

0xab10,	// (0x00098257) popup_call_audio_second_window_t3

0x0002,

0xf103,	// (0x0009c84a) popup_call_audio_second_window_t_ParamLimits

0xf103,	// (0x0009c84a) popup_call_audio_second_window_t

0x0ce2,	// (0x0008e429) bg_popup_call_pane_cp04

0xab46,	// (0x0009828d) list_conf_pane

0xab4e,	// (0x00098295) popup_call_audio_conf_window_t1

0xab5c,	// (0x000982a3) call_thumbnail_pane_g1

0xab64,	// (0x000982ab) bg_pinb_pane_ParamLimits

0xab64,	// (0x000982ab) bg_pinb_pane

0xab72,	// (0x000982b9) find_pinb_pane

0xab7b,	// (0x000982c2) listscroll_pinb_pane_ParamLimits

0xab7b,	// (0x000982c2) listscroll_pinb_pane

0xab8a,	// (0x000982d1) pinb_bg_pane_g1

0x211e,	// (0x0008f865) pinb_bg_pane_g2

0x212a,	// (0x0008f871) pinb_bg_pane_g3

0x2136,	// (0x0008f87d) pinb_bg_pane_g4

0x2142,	// (0x0008f889) pinb_bg_pane_g5

0x214e,	// (0x0008f895) pinb_bg_pane_g6

0x2159,	// (0x0008f8a0) pinb_bg_pane_g7

0x2164,	// (0x0008f8ab) pinb_bg_pane_g8

0x216f,	// (0x0008f8b6) pinb_bg_pane_g9

0x2179,	// (0x0008f8c0) pinb_bg_pane_g10

0x0009,

0xf10a,	// (0x0009c851) pinb_bg_pane_g

0x2196,	// (0x0008f8dd) grid_pinb_pane

0x21a1,	// (0x0008f8e8) list_pinb_pane

0x21ac,	// (0x0008f8f3) scroll_pane_cp01_ParamLimits

0x21ac,	// (0x0008f8f3) scroll_pane_cp01

0xab94,	// (0x000982db) find_pinb_pane_g1_ParamLimits

0xab94,	// (0x000982db) find_pinb_pane_g1

0xabac,	// (0x000982f3) find_pinb_pane_t1

0xabbe,	// (0x00098305) find_pinb_pane_t2

0x0001,

0xf124,	// (0x0009c86b) find_pinb_pane_t

0xabd3,	// (0x0009831a) input_focus_pane_cp01_ParamLimits

0xabd3,	// (0x0009831a) input_focus_pane_cp01

0x21be,	// (0x0008f905) cell_pinb_pane_ParamLimits

0x21be,	// (0x0008f905) cell_pinb_pane

0x21e6,	// (0x0008f92d) cell_pinb_pane_g1_ParamLimits

0x21e6,	// (0x0008f92d) cell_pinb_pane_g1

0x21fb,	// (0x0008f942) cell_pinb_pane_g2_ParamLimits

0x21fb,	// (0x0008f942) cell_pinb_pane_g2

0xabdf,	// (0x00098326) cell_pinb_pane_g3_ParamLimits

0xabdf,	// (0x00098326) cell_pinb_pane_g3

0x0002,

0xf129,	// (0x0009c870) cell_pinb_pane_g_ParamLimits

0xf129,	// (0x0009c870) cell_pinb_pane_g

0x0ce2,	// (0x0008e429) grid_highlight_pane_cp01

0x2207,	// (0x0008f94e) list_pinb_item_pane_ParamLimits

0x2207,	// (0x0008f94e) list_pinb_item_pane

0x0ce2,	// (0x0008e429) list_highlight_pane_cp02

0x222d,	// (0x0008f974) list_pinb_item_pane_g1_ParamLimits

0x222d,	// (0x0008f974) list_pinb_item_pane_g1

0x223a,	// (0x0008f981) list_pinb_item_pane_g2_ParamLimits

0x223a,	// (0x0008f981) list_pinb_item_pane_g2

0x2246,	// (0x0008f98d) list_pinb_item_pane_g3_ParamLimits

0x2246,	// (0x0008f98d) list_pinb_item_pane_g3

0x2257,	// (0x0008f99e) list_pinb_item_pane_g4_ParamLimits

0x2257,	// (0x0008f99e) list_pinb_item_pane_g4

0x0003,

0xf130,	// (0x0009c877) list_pinb_item_pane_g_ParamLimits

0xf130,	// (0x0009c877) list_pinb_item_pane_g

0x2263,	// (0x0008f9aa) list_pinb_item_pane_t1_ParamLimits

0x2263,	// (0x0008f9aa) list_pinb_item_pane_t1

0x2294,	// (0x0008f9db) calc_display_pane

0x22b2,	// (0x0008f9f9) calc_paper_pane

0x22ce,	// (0x0008fa15) grid_calc_pane

0x0ce2,	// (0x0008e429) bg_list_pane_cp01

0x22fa,	// (0x0008fa41) clock_g1

0x2302,	// (0x0008fa49) clock_g2

0x0001,

0xf139,	// (0x0009c880) clock_g

0x230c,	// (0x0008fa53) clock_t1_ParamLimits

0x230c,	// (0x0008fa53) clock_t1

0x2321,	// (0x0008fa68) clock_t2_ParamLimits

0x2321,	// (0x0008fa68) clock_t2

0x2333,	// (0x0008fa7a) clock_t3_ParamLimits

0x2333,	// (0x0008fa7a) clock_t3

0x2345,	// (0x0008fa8c) clock_t4_ParamLimits

0x2345,	// (0x0008fa8c) clock_t4

0x2357,	// (0x0008fa9e) clock_t5_ParamLimits

0x2357,	// (0x0008fa9e) clock_t5

0x236c,	// (0x0008fab3) clock_t6_ParamLimits

0x236c,	// (0x0008fab3) clock_t6

0x237e,	// (0x0008fac5) clock_t7_ParamLimits

0x237e,	// (0x0008fac5) clock_t7

0x2390,	// (0x0008fad7) clock_t8_ParamLimits

0x2390,	// (0x0008fad7) clock_t8

0x23a6,	// (0x0008faed) clock_t9_ParamLimits

0x23a6,	// (0x0008faed) clock_t9

0x0008,

0xf13e,	// (0x0009c885) clock_t_ParamLimits

0xf13e,	// (0x0009c885) clock_t

0xabeb,	// (0x00098332) popup_clock_analogue_window_cp02

0xabeb,	// (0x00098332) popup_clock_digital_window_cp01

0xabf3,	// (0x0009833a) listscroll_help_pane

0x0ce2,	// (0x0008e429) phob_pre_status_pane

0xabfd,	// (0x00098344) grid_qdial_pane

0xab64,	// (0x000982ab) listscroll_mce_pane

0xab64,	// (0x000982ab) bg_notes_pane

0xac07,	// (0x0009834e) list_notes_pane

0x23bc,	// (0x0008fb03) scroll_pane_cp06

0xac15,	// (0x0009835c) bg_calc_paper_pane

0x23cb,	// (0x0008fb12) list_calc_pane

0xac29,	// (0x00098370) bg_calc_display_pane

0x23e5,	// (0x0008fb2c) calc_display_pane_t1

0x23fa,	// (0x0008fb41) calc_display_pane_t2

0x240f,	// (0x0008fb56) calc_display_pane_t3

0x0002,

0xf151,	// (0x0009c898) calc_display_pane_t

0x2421,	// (0x0008fb68) cell_calc_pane_ParamLimits

0x2421,	// (0x0008fb68) cell_calc_pane

0xac35,	// (0x0009837c) bg_calc_paper_pane_g1

0xac41,	// (0x00098388) bg_calc_paper_pane_g2

0xac4d,	// (0x00098394) bg_calc_paper_pane_g3

0xac59,	// (0x000983a0) bg_calc_paper_pane_g4

0xac65,	// (0x000983ac) bg_calc_paper_pane_g5

0x244e,	// (0x0008fb95) bg_calc_paper_pane_g6

0x245f,	// (0x0008fba6) bg_calc_paper_pane_g7

0x2470,	// (0x0008fbb7) bg_calc_paper_pane_g8

0x0007,

0xf158,	// (0x0009c89f) bg_calc_paper_pane_g

0x2481,	// (0x0008fbc8) calc_bg_paper_pane_g9

0x2492,	// (0x0008fbd9) list_calc_item_pane_ParamLimits

0x2492,	// (0x0008fbd9) list_calc_item_pane

0xac71,	// (0x000983b8) list_calc_item_pane_g1

0x24c1,	// (0x0008fc08) list_calc_item_pane_t1_ParamLimits

0x24c1,	// (0x0008fc08) list_calc_item_pane_t1

0x24d3,	// (0x0008fc1a) list_calc_item_pane_t2_ParamLimits

0x24d3,	// (0x0008fc1a) list_calc_item_pane_t2

0x0001,

0xf169,	// (0x0009c8b0) list_calc_item_pane_t_ParamLimits

0xf169,	// (0x0009c8b0) list_calc_item_pane_t

0xac7e,	// (0x000983c5) cell_calc_pane_g1

0xac88,	// (0x000983cf) grid_highlight_pane_cp02

0x2503,	// (0x0008fc4a) bg_calc_display_pane_g1

0x250c,	// (0x0008fc53) bg_calc_display_pane_g2

0xda6a,	// (0x0009b1b1) bg_calc_display_pane_g3

0x0002,

0xf173,	// (0x0009c8ba) bg_calc_display_pane_g

0x2516,	// (0x0008fc5d) cell_qdial_pane_ParamLimits

0x2516,	// (0x0008fc5d) cell_qdial_pane

0x252a,	// (0x0008fc71) cell_qdial_pane_g1_ParamLimits

0x252a,	// (0x0008fc71) cell_qdial_pane_g1

0x2537,	// (0x0008fc7e) cell_qdial_pane_g2_ParamLimits

0x2537,	// (0x0008fc7e) cell_qdial_pane_g2

0xacaa,	// (0x000983f1) cell_qdial_pane_g3_ParamLimits

0xacaa,	// (0x000983f1) cell_qdial_pane_g3

0x0003,

0xf17a,	// (0x0009c8c1) cell_qdial_pane_g_ParamLimits

0xf17a,	// (0x0009c8c1) cell_qdial_pane_g

0x2555,	// (0x0008fc9c) cell_qdial_pane_t1_ParamLimits

0x2555,	// (0x0008fc9c) cell_qdial_pane_t1

0x256d,	// (0x0008fcb4) cell_qdial_pane_t2_ParamLimits

0x256d,	// (0x0008fcb4) cell_qdial_pane_t2

0x2580,	// (0x0008fcc7) cell_qdial_pane_t3_ParamLimits

0x2580,	// (0x0008fcc7) cell_qdial_pane_t3

0x0002,

0xf183,	// (0x0009c8ca) cell_qdial_pane_t_ParamLimits

0xf183,	// (0x0009c8ca) cell_qdial_pane_t

0x0ce2,	// (0x0008e429) grid_highlight_pane_cp04

0xacb6,	// (0x000983fd) thumbnail_qdial_pane_ParamLimits

0xacb6,	// (0x000983fd) thumbnail_qdial_pane

0xad12,	// (0x00098459) list_help_pane

0xad1b,	// (0x00098462) scroll_pane_cp02

0x2593,	// (0x0008fcda) help_list_pane_t1_ParamLimits

0x2593,	// (0x0008fcda) help_list_pane_t1

0x25c6,	// (0x0008fd0d) bg_notes_pane_g2

0x25ce,	// (0x0008fd15) bg_notes_pane_g3

0x25d6,	// (0x0008fd1d) notes_bg_pane_g1

0x25de,	// (0x0008fd25) notes_bg_pane_g4

0x25e6,	// (0x0008fd2d) notes_bg_pane_g5

0x25ee,	// (0x0008fd35) notes_bg_pane_g6

0x25f6,	// (0x0008fd3d) notes_bg_pane_g7

0x25fe,	// (0x0008fd45) notes_bg_pane_g8

0x2606,	// (0x0008fd4d) notes_bg_pane_g9

0x0006,

0xf1a1,	// (0x0009c8e8) notes_bg_pane_g

0x260e,	// (0x0008fd55) list_notes_text_pane_ParamLimits

0x260e,	// (0x0008fd55) list_notes_text_pane

0xad24,	// (0x0009846b) list_notes_text_pane_g1

0x2636,	// (0x0008fd7d) list_notes_text_pane_t1

0x2644,	// (0x0008fd8b) listscroll_cale_week_pane

0x2669,	// (0x0008fdb0) bg_cale_heading_pane

0xad47,	// (0x0009848e) bg_cale_pane_cp01

0x2689,	// (0x0008fdd0) cale_week_corner_pane

0x26a3,	// (0x0008fdea) cale_week_day_heading_pane

0x26c3,	// (0x0008fe0a) cale_week_scroll_pane_g1

0x26de,	// (0x0008fe25) cale_week_scroll_pane_g2

0x26f1,	// (0x0008fe38) cale_week_scroll_pane_g3

0x2704,	// (0x0008fe4b) cale_week_scroll_pane_g4

0x2717,	// (0x0008fe5e) cale_week_scroll_pane_g5

0x272a,	// (0x0008fe71) cale_week_scroll_pane_g6

0x273d,	// (0x0008fe84) cale_week_scroll_pane_g7

0x2752,	// (0x0008fe99) cale_week_scroll_pane_g8

0x2767,	// (0x0008feae) cale_week_scroll_pane_g9

0x277a,	// (0x0008fec1) cale_week_scroll_pane_g10

0x278d,	// (0x0008fed4) cale_week_scroll_pane_g11

0x27a0,	// (0x0008fee7) cale_week_scroll_pane_g12

0x27b7,	// (0x0008fefe) cale_week_scroll_pane_g13

0x27d2,	// (0x0008ff19) cale_week_scroll_pane_g14

0x27ed,	// (0x0008ff34) cale_week_scroll_pane_g15

0x000f,

0xf1b0,	// (0x0009c8f7) cale_week_scroll_pane_g

0x281d,	// (0x0008ff64) cale_week_time_pane

0x2832,	// (0x0008ff79) grid_cale_week_pane

0xad76,	// (0x000984bd) scroll_pane_cp08

0x2851,	// (0x0008ff98) cell_cale_week_pane_ParamLimits

0x2851,	// (0x0008ff98) cell_cale_week_pane

0x28b3,	// (0x0008fffa) cale_week_day_heading_pane_t1

0x28ce,	// (0x00090015) cale_week_day_heading_pane_t2

0x28e9,	// (0x00090030) cale_week_day_heading_pane_t3

0x2904,	// (0x0009004b) cale_week_day_heading_pane_t4

0x291f,	// (0x00090066) cale_week_day_heading_pane_t5

0x293a,	// (0x00090081) cale_week_day_heading_pane_t6

0x2955,	// (0x0009009c) cale_week_day_heading_pane_t7

0x0006,

0xf1d1,	// (0x0009c918) cale_week_day_heading_pane_t

0xad93,	// (0x000984da) bg_cale_side_pane

0x2970,	// (0x000900b7) cale_week_time_pane_t1

0x298a,	// (0x000900d1) cale_week_time_pane_t2

0x29a4,	// (0x000900eb) cale_week_time_pane_t3

0x29be,	// (0x00090105) cale_week_time_pane_t4

0x29d8,	// (0x0009011f) cale_week_time_pane_t5

0x29f2,	// (0x00090139) cale_week_time_pane_t6

0x2a10,	// (0x00090157) cale_week_time_pane_t7

0x2a32,	// (0x00090179) cale_week_time_pane_t8

0x0007,

0xf1e0,	// (0x0009c927) cale_week_time_pane_t

0x2a56,	// (0x0009019d) cell_cale_week_pane_g2

0x2a7a,	// (0x000901c1) cell_cale_week_pane_g3_ParamLimits

0x2a7a,	// (0x000901c1) cell_cale_week_pane_g3

0xada1,	// (0x000984e8) grid_highlight_pane_cp07

0xada9,	// (0x000984f0) listscroll_gms_pane

0xadb3,	// (0x000984fa) grid_gms_pane

0xadbc,	// (0x00098503) listscroll_gms_pane_g1

0xadc4,	// (0x0009850b) listscroll_gms_pane_g2

0x0001,

0xf1f1,	// (0x0009c938) listscroll_gms_pane_g

0x2a92,	// (0x000901d9) scroll_pane_cp010

0x2a9d,	// (0x000901e4) cell_gms_pane_ParamLimits

0x2a9d,	// (0x000901e4) cell_gms_pane

0x2ab0,	// (0x000901f7) cell_gms_pane_g1

0xadcc,	// (0x00098513) cell_gms_pane_g2

0xadd4,	// (0x0009851b) cell_gms_pane_g3

0xaddd,	// (0x00098524) cell_gms_pane_g4

0x0003,

0xf1f6,	// (0x0009c93d) cell_gms_pane_g

0xade6,	// (0x0009852d) grid_highlight_pane_cp09

0x50e6,	// (0x0009282d) phob_pre_status_pane_g1

0x50ee,	// (0x00092835) phob_pre_status_pane_g2

0x50f6,	// (0x0009283d) phob_pre_status_pane_g3

0x50fe,	// (0x00092845) phob_pre_status_pane_g4

0x0004,

0xf5e1,	// (0x0009cd28) phob_pre_status_pane_g

0x510e,	// (0x00092855) phob_pre_status_pane_t1

0x511e,	// (0x00092865) phob_pre_status_pane_t2

0x512e,	// (0x00092875) phob_pre_status_pane_t3

0x0002,

0xf5ec,	// (0x0009cd33) phob_pre_status_pane_t

0xadee,	// (0x00098535) bg_list_pane_cp05

0x2ac0,	// (0x00090207) grid_vorec_pane

0x2aca,	// (0x00090211) vorec_t1

0x2ad8,	// (0x0009021f) vorec_t2

0x2ae6,	// (0x0009022d) vorec_t3

0x2af4,	// (0x0009023b) vorec_t4

0xa9f7,	// (0x0009813e) vorec_t5

0xaa05,	// (0x0009814c) vorec_t6

0x0004,

0xf1ff,	// (0x0009c946) vorec_t

0xaa13,	// (0x0009815a) wait_bar_pane_cp01

0x2b10,	// (0x00090257) cell_vorec_pane_ParamLimits

0x2b10,	// (0x00090257) cell_vorec_pane

0x2b23,	// (0x0009026a) cell_vorec_pane_g1

0x0ce2,	// (0x0008e429) grid_highlight_pane_cp05

0x2b3d,	// (0x00090284) cams_zoom_pane

0x2b49,	// (0x00090290) image_vga_pane

0x2b58,	// (0x0009029f) main_camera_pane_g1

0x2b66,	// (0x000902ad) main_camera_pane_g2

0x2b72,	// (0x000902b9) main_camera_pane_g3

0x2b7e,	// (0x000902c5) main_camera_pane_g4

0x2b8a,	// (0x000902d1) main_camera_pane_g5

0x2b96,	// (0x000902dd) main_camera_pane_g6

0x2ba2,	// (0x000902e9) main_camera_pane_g7

0x0007,

0xf20a,	// (0x0009c951) main_camera_pane_g

0x2bae,	// (0x000902f5) main_camera_pane_t1

0x2bc0,	// (0x00090307) main_camera_pane_t2

0x0001,

0xf21b,	// (0x0009c962) main_camera_pane_t

0x2be1,	// (0x00090328) cams_zoom_pane_cp_ParamLimits

0x2be1,	// (0x00090328) cams_zoom_pane_cp

0x2c05,	// (0x0009034c) image_cif_pane_ParamLimits

0x2c05,	// (0x0009034c) image_cif_pane

0x2c23,	// (0x0009036a) image_subqcif_pane

0x2c2b,	// (0x00090372) main_video_pane_g1_ParamLimits

0x2c2b,	// (0x00090372) main_video_pane_g1

0x2c4b,	// (0x00090392) main_video_pane_g2_ParamLimits

0x2c4b,	// (0x00090392) main_video_pane_g2

0x2c7b,	// (0x000903c2) main_video_pane_g3_ParamLimits

0x2c7b,	// (0x000903c2) main_video_pane_g3

0x2ca4,	// (0x000903eb) main_video_pane_g4_ParamLimits

0x2ca4,	// (0x000903eb) main_video_pane_g4

0x2ccd,	// (0x00090414) main_video_pane_g5_ParamLimits

0x2ccd,	// (0x00090414) main_video_pane_g5

0xae02,	// (0x00098549) main_video_pane_g6_ParamLimits

0xae02,	// (0x00098549) main_video_pane_g6

0x0006,

0xf220,	// (0x0009c967) main_video_pane_g_ParamLimits

0xf220,	// (0x0009c967) main_video_pane_g

0x2cef,	// (0x00090436) main_video_pane_t1_ParamLimits

0x2cef,	// (0x00090436) main_video_pane_t1

0xae1c,	// (0x00098563) cams_zoom_pane_g1

0xae25,	// (0x0009856c) cams_zoom_pane_g2

0xae2e,	// (0x00098575) cams_zoom_pane_g3

0xae37,	// (0x0009857e) cams_zoom_pane_g4

0x0003,

0xf22f,	// (0x0009c976) cams_zoom_pane_g

0x2d39,	// (0x00090480) grid_cams_pane

0x2d47,	// (0x0009048e) linegrid_cams_pane

0x2d55,	// (0x0009049c) cell_cams_pane_ParamLimits

0x2d55,	// (0x0009049c) cell_cams_pane

0xae40,	// (0x00098587) cams_burst_image_pane

0xae48,	// (0x0009858f) cell_cams_pane_g1

0x0ce2,	// (0x0008e429) grid_highlight_pane_cp03

0xac7e,	// (0x000983c5) mp_bg_pane_g1

0x0ce2,	// (0x0008e429) bg_list_pane_cp03

0xd7a6,	// (0x0009aeed) bg_mp_pane

0xd7ae,	// (0x0009aef5) grid_mp_pane

0xd7b6,	// (0x0009aefd) media_player_g1

0xd7be,	// (0x0009af05) media_player_t1

0xd7cc,	// (0x0009af13) media_player_t2

0xd7da,	// (0x0009af21) media_player_t3

0xd7e8,	// (0x0009af2f) media_player_t4

0xd7f6,	// (0x0009af3d) media_player_t5

0xd804,	// (0x0009af4b) media_player_t6

0xd812,	// (0x0009af59) media_player_t7

0x0006,

0xf5cb,	// (0x0009cd12) media_player_t

0xd820,	// (0x0009af67) wait_bar_pane_cp02

0xf5b0,	// (0x0009ccf7) main_usb_pane_t

0x50dd,	// (0x00092824) cell_mp_pane

0xac7e,	// (0x000983c5) cell_mp_pane_g1

0x0ce2,	// (0x0008e429) grid_highlight_pane_cp06

0xae50,	// (0x00098597) grid_skin_colour_pane

0xae58,	// (0x0009859f) list_highlight_pane_cp03

0x2e5f,	// (0x000905a6) skin_g1

0xae60,	// (0x000985a7) skin_t1

0xae6f,	// (0x000985b6) skin_t2

0x0001,

0xf264,	// (0x0009c9ab) skin_t

0x2e69,	// (0x000905b0) cell_skin_colour_pane_ParamLimits

0x2e69,	// (0x000905b0) cell_skin_colour_pane

0xae7d,	// (0x000985c4) cell_skin_colour_pane_g1

0x2eed,	// (0x00090634) call_video_g1_ParamLimits

0x2eed,	// (0x00090634) call_video_g1

0x2efd,	// (0x00090644) call_video_g2_ParamLimits

0x2efd,	// (0x00090644) call_video_g2

0x0001,

0xf269,	// (0x0009c9b0) call_video_g_ParamLimits

0xf269,	// (0x0009c9b0) call_video_g

0x2f57,	// (0x0009069e) call_video_uplink_pane_cp1_ParamLimits

0x2f57,	// (0x0009069e) call_video_uplink_pane_cp1

0xae8f,	// (0x000985d6) call_video_uplink_pane_cp2

0x3023,	// (0x0009076a) video_down_crop_pane_ParamLimits

0x3023,	// (0x0009076a) video_down_crop_pane

0x3121,	// (0x00090868) video_down_pane_ParamLimits

0x3121,	// (0x00090868) video_down_pane

0xae97,	// (0x000985de) video_down_subqcif_pane_ParamLimits

0xae97,	// (0x000985de) video_down_subqcif_pane

0xaeaf,	// (0x000985f6) video_down_subqcif_pane_cp_ParamLimits

0xaeaf,	// (0x000985f6) video_down_subqcif_pane_cp

0xaed5,	// (0x0009861c) im_reading_pane_ParamLimits

0xaed5,	// (0x0009861c) im_reading_pane

0x3241,	// (0x00090988) im_writing_pane_ParamLimits

0x3241,	// (0x00090988) im_writing_pane

0x325f,	// (0x000909a6) im_reading_pane_t1

0xaeef,	// (0x00098636) list_im_pane

0xaf00,	// (0x00098647) scroll_pane_cp07

0x32b3,	// (0x000909fa) im_writing_pane_t1_ParamLimits

0x32b3,	// (0x000909fa) im_writing_pane_t1

0xaf19,	// (0x00098660) im_writing_pane_t2_ParamLimits

0xaf19,	// (0x00098660) im_writing_pane_t2

0x0001,

0xf273,	// (0x0009c9ba) im_writing_pane_t_ParamLimits

0xf273,	// (0x0009c9ba) im_writing_pane_t

0x0ce2,	// (0x0008e429) input_focus_pane_cp04

0x0ce2,	// (0x0008e429) input_focus_pane_cp05

0x32c8,	// (0x00090a0f) list_im_single_pane_ParamLimits

0x32c8,	// (0x00090a0f) list_im_single_pane

0x32ec,	// (0x00090a33) list_single_im_pane_t1

0x50a1,	// (0x000927e8) blid_accuracy_pane

0x50a9,	// (0x000927f0) blid_compass_pane

0x50b3,	// (0x000927fa) main_location_t1

0x50c1,	// (0x00092808) main_location_t2

0x50cf,	// (0x00092816) main_location_t3

0x0002,

0xf5da,	// (0x0009cd21) main_location_t

0x0ce2,	// (0x0008e429) aid_levels_location

0xac7e,	// (0x000983c5) blid_accuracy_pane_g1

0xac7e,	// (0x000983c5) blid_accuracy_pane_g2

0x0001,

0xf2d5,	// (0x0009ca1c) blid_accuracy_pane_g

0xaf61,	// (0x000986a8) wml_content_pane

0xaf9f,	// (0x000986e6) wml_button_pane_ParamLimits

0xaf9f,	// (0x000986e6) wml_button_pane

0x32fb,	// (0x00090a42) wml_list_single_large_pane_ParamLimits

0x32fb,	// (0x00090a42) wml_list_single_large_pane

0x3325,	// (0x00090a6c) wml_list_single_medium_pane_ParamLimits

0x3325,	// (0x00090a6c) wml_list_single_medium_pane

0x3356,	// (0x00090a9d) wml_list_single_small_pane_ParamLimits

0x3356,	// (0x00090a9d) wml_list_single_small_pane

0xafb3,	// (0x000986fa) wml_selection_box_pane_ParamLimits

0xafb3,	// (0x000986fa) wml_selection_box_pane

0xafc6,	// (0x0009870d) wml_list_single_pane_t1

0xafd5,	// (0x0009871c) wml_list_single_medium_pane_t1

0xafe4,	// (0x0009872b) wml_list_single_large_pane_t1

0xaff3,	// (0x0009873a) input_focus_pane_cp02_ParamLimits

0xaff3,	// (0x0009873a) input_focus_pane_cp02

0xb006,	// (0x0009874d) wml_selection_box_pane_g1

0xb00f,	// (0x00098756) wml_selection_box_pane_t1_ParamLimits

0xb00f,	// (0x00098756) wml_selection_box_pane_t1

0xab64,	// (0x000982ab) bg_wml_button_pane_ParamLimits

0xab64,	// (0x000982ab) bg_wml_button_pane

0xb027,	// (0x0009876e) wml_button_pane_g1

0xb02f,	// (0x00098776) wml_button_pane_t1

0xb027,	// (0x0009876e) wml_button_bg_pane_g1

0xb03f,	// (0x00098786) wml_button_bg_pane_g2

0xb047,	// (0x0009878e) wml_button_bg_pane_g3

0xb04f,	// (0x00098796) wml_button_bg_pane_g4

0xb057,	// (0x0009879e) wml_button_bg_pane_g5

0xb05f,	// (0x000987a6) wml_button_bg_pane_g6

0xb067,	// (0x000987ae) wml_button_bg_pane_g7

0xb06f,	// (0x000987b6) wml_button_bg_pane_g8

0xb077,	// (0x000987be) wml_button_bg_pane_g9

0x0008,

0xf278,	// (0x0009c9bf) wml_button_bg_pane_g

0x3390,	// (0x00090ad7) bg_list_pane_cp02

0xb07f,	// (0x000987c6) mce_header_pane_ParamLimits

0xb07f,	// (0x000987c6) mce_header_pane

0xb095,	// (0x000987dc) mce_icon_pane

0xb095,	// (0x000987dc) mce_image_pane

0xb09e,	// (0x000987e5) mce_text_pane_ParamLimits

0xb09e,	// (0x000987e5) mce_text_pane

0x339a,	// (0x00090ae1) scroll_pane_cp03

0xaf97,	// (0x000986de) scroll_pane_cp04

0xb0b1,	// (0x000987f8) scroll_pane_cp05_ParamLimits

0xb0b1,	// (0x000987f8) scroll_pane_cp05

0x33a4,	// (0x00090aeb) mce_header_field_pane_ParamLimits

0x33a4,	// (0x00090aeb) mce_header_field_pane

0x33c4,	// (0x00090b0b) mce_header_field_pane_2_ParamLimits

0x33c4,	// (0x00090b0b) mce_header_field_pane_2

0x33da,	// (0x00090b21) mce_header_field_pane_3

0x33e2,	// (0x00090b29) list_single_mce_message_pane_ParamLimits

0x33e2,	// (0x00090b29) list_single_mce_message_pane

0x340d,	// (0x00090b54) list_single_mce_smart_pane_ParamLimits

0x340d,	// (0x00090b54) list_single_mce_smart_pane

0xb0bd,	// (0x00098804) input_focus_pane_cp03

0xb0c6,	// (0x0009880d) list_header_data_pane

0x3443,	// (0x00090b8a) mce_header_field_pane_t1

0x3451,	// (0x00090b98) list_single_mce_header_pane_ParamLimits

0x3451,	// (0x00090b98) list_single_mce_header_pane

0xb0ce,	// (0x00098815) list_single_mce_header_pane_t1

0xb0dd,	// (0x00098824) list_single_mce_message_pane_g1

0xb0e5,	// (0x0009882c) list_single_mce_message_pane_t1

0x34a3,	// (0x00090bea) bg_cale_heading_pane_cp01_ParamLimits

0x34a3,	// (0x00090bea) bg_cale_heading_pane_cp01

0xb0f3,	// (0x0009883a) bg_cale_pane_cp02_ParamLimits

0xb0f3,	// (0x0009883a) bg_cale_pane_cp02

0x34f1,	// (0x00090c38) cale_month_corner_pane

0x3510,	// (0x00090c57) cale_month_day_heading_pane_ParamLimits

0x3510,	// (0x00090c57) cale_month_day_heading_pane

0x3576,	// (0x00090cbd) cale_month_pane_g1_ParamLimits

0x3576,	// (0x00090cbd) cale_month_pane_g1

0x35b9,	// (0x00090d00) cale_month_pane_g2_ParamLimits

0x35b9,	// (0x00090d00) cale_month_pane_g2

0x35f1,	// (0x00090d38) cale_month_pane_g3_ParamLimits

0x35f1,	// (0x00090d38) cale_month_pane_g3

0x363d,	// (0x00090d84) cale_month_pane_g4_ParamLimits

0x363d,	// (0x00090d84) cale_month_pane_g4

0x3689,	// (0x00090dd0) cale_month_pane_g5_ParamLimits

0x3689,	// (0x00090dd0) cale_month_pane_g5

0x36d5,	// (0x00090e1c) cale_month_pane_g6_ParamLimits

0x36d5,	// (0x00090e1c) cale_month_pane_g6

0x3721,	// (0x00090e68) cale_month_pane_g7_ParamLimits

0x3721,	// (0x00090e68) cale_month_pane_g7

0x3785,	// (0x00090ecc) cale_month_pane_g8_ParamLimits

0x3785,	// (0x00090ecc) cale_month_pane_g8

0x37e9,	// (0x00090f30) cale_month_pane_g9_ParamLimits

0x37e9,	// (0x00090f30) cale_month_pane_g9

0x3847,	// (0x00090f8e) cale_month_pane_g10_ParamLimits

0x3847,	// (0x00090f8e) cale_month_pane_g10

0x38a3,	// (0x00090fea) cale_month_pane_g11_ParamLimits

0x38a3,	// (0x00090fea) cale_month_pane_g11

0x38f7,	// (0x0009103e) cale_month_pane_g12_ParamLimits

0x38f7,	// (0x0009103e) cale_month_pane_g12

0x394d,	// (0x00091094) cale_month_pane_g13_ParamLimits

0x394d,	// (0x00091094) cale_month_pane_g13

0x000c,

0xf28b,	// (0x0009c9d2) cale_month_pane_g_ParamLimits

0xf28b,	// (0x0009c9d2) cale_month_pane_g

0x39a3,	// (0x000910ea) cale_month_week_pane

0x39c7,	// (0x0009110e) grid_cale_month_pane_ParamLimits

0x39c7,	// (0x0009110e) grid_cale_month_pane

0x3a20,	// (0x00091167) cale_month_day_heading_pane_t1

0x3aa6,	// (0x000911ed) cale_month_day_heading_pane_t2

0x3b1f,	// (0x00091266) cale_month_day_heading_pane_t3

0x3b98,	// (0x000912df) cale_month_day_heading_pane_t4

0x3c11,	// (0x00091358) cale_month_day_heading_pane_t5

0x3c8a,	// (0x000913d1) cale_month_day_heading_pane_t6

0x3d03,	// (0x0009144a) cale_month_day_heading_pane_t7

0x0006,

0xf2a6,	// (0x0009c9ed) cale_month_day_heading_pane_t

0xad93,	// (0x000984da) bg_cale_side_pane_cp01

0x3d94,	// (0x000914db) cale_month_week_pane_t1

0x3dad,	// (0x000914f4) cale_month_week_pane_t2

0x3dc6,	// (0x0009150d) cale_month_week_pane_t3

0x3ddf,	// (0x00091526) cale_month_week_pane_t4

0x3df8,	// (0x0009153f) cale_month_week_pane_t5

0x3e19,	// (0x00091560) cale_month_week_pane_t6

0x0005,

0xf2b5,	// (0x0009c9fc) cale_month_week_pane_t

0x3e3a,	// (0x00091581) cell_cale_month_pane_ParamLimits

0x3e3a,	// (0x00091581) cell_cale_month_pane

0x3f86,	// (0x000916cd) cell_cale_month_pane_g1

0x3f92,	// (0x000916d9) cell_cale_month_pane_t1_ParamLimits

0x3f92,	// (0x000916d9) cell_cale_month_pane_t1

0xada1,	// (0x000984e8) grid_highlight_pane_cp08

0xac7e,	// (0x000983c5) main_smil_g1

0x3fbe,	// (0x00091705) smil_status_pane

0xb132,	// (0x00098879) smil_text_pane

0xd6c6,	// (0x0009ae0d) bg_popup_call3_rect_pane_g8

0xd6ce,	// (0x0009ae15) bg_popup_call3_rect_pane_g9

0x0008,

0xf56e,	// (0x0009ccb5) bg_popup_call3_rect_pane_g

0xd915,	// (0x0009b05c) smil_status_volume_pane_g1

0xb13c,	// (0x00098883) smil_status_pane_t1

0x54d9,	// (0x00092c20) volume_smil_pane

0xb153,	// (0x0009889a) list_smil_text_pane

0x3fd1,	// (0x00091718) scroll_pane_cp011

0x3fdc,	// (0x00091723) smil_text_list_pane_t1_ParamLimits

0x3fdc,	// (0x00091723) smil_text_list_pane_t1

0x4054,	// (0x0009179b) aid_volume_smil_ParamLimits

0x4054,	// (0x0009179b) aid_volume_smil

0xac7e,	// (0x000983c5) smil_volume_pane_g1

0xac7e,	// (0x000983c5) smil_volume_pane_g2

0x0001,

0xf2d5,	// (0x0009ca1c) smil_volume_pane_g

0x2644,	// (0x0008fd8b) listscroll_cale_day_pane

0xb15d,	// (0x000988a4) bg_cale_pane

0xb175,	// (0x000988bc) list_cale_pane

0xb198,	// (0x000988df) scroll_pane_cp09

0xb1a9,	// (0x000988f0) cale_bg_pane_g1

0xb1b1,	// (0x000988f8) cale_bg_pane_g2

0xb1b9,	// (0x00098900) cale_bg_pane_g3

0xb1c1,	// (0x00098908) cale_bg_pane_g4

0xb1c9,	// (0x00098910) cale_bg_pane_g5

0xb1d1,	// (0x00098918) cale_bg_pane_g6

0xb1d9,	// (0x00098920) cale_bg_pane_g7

0xb1e1,	// (0x00098928) cale_bg_pane_g8

0xb1e9,	// (0x00098930) cale_bg_pane_g9

0x0008,

0xf2da,	// (0x0009ca21) cale_bg_pane_g

0x407e,	// (0x000917c5) list_cale_time_pane_ParamLimits

0x407e,	// (0x000917c5) list_cale_time_pane

0xb1f1,	// (0x00098938) list_cale_time_pane_g1_ParamLimits

0xb1f1,	// (0x00098938) list_cale_time_pane_g1

0xb1fd,	// (0x00098944) list_cale_time_pane_g2_ParamLimits

0xb1fd,	// (0x00098944) list_cale_time_pane_g2

0x40a0,	// (0x000917e7) list_cale_time_pane_g3_ParamLimits

0x40a0,	// (0x000917e7) list_cale_time_pane_g3

0x40ae,	// (0x000917f5) list_cale_time_pane_g4_ParamLimits

0x40ae,	// (0x000917f5) list_cale_time_pane_g4

0x40bc,	// (0x00091803) list_cale_time_pane_g5_ParamLimits

0x40bc,	// (0x00091803) list_cale_time_pane_g5

0x0005,

0xf2ed,	// (0x0009ca34) list_cale_time_pane_g_ParamLimits

0xf2ed,	// (0x0009ca34) list_cale_time_pane_g

0xb217,	// (0x0009895e) list_cale_time_pane_t1_ParamLimits

0xb217,	// (0x0009895e) list_cale_time_pane_t1

0xb23f,	// (0x00098986) list_cale_time_pane_t2_ParamLimits

0xb23f,	// (0x00098986) list_cale_time_pane_t2

0x445e,	// (0x00091ba5) aid_blid_cardinal_pane

0x44a0,	// (0x00091be7) compass_pane_t4

0xb267,	// (0x000989ae) list_cale_time_pane_t4_ParamLimits

0xb267,	// (0x000989ae) list_cale_time_pane_t4

0x44ae,	// (0x00091bf5) compass_pane_t5

0x44be,	// (0x00091c05) compass_pane_t6

0x44cc,	// (0x00091c13) compass_pane_t7

0xb718,	// (0x00098e5f) navi_pane_cc_t1

0xb8f5,	// (0x0009903c) aid_phob_thumbnail_center_pane

0x4ba7,	// (0x000922ee) main_postcard_pane_g4_ParamLimits

0x0002,

0xf2fa,	// (0x0009ca41) list_cale_time_pane_t_ParamLimits

0xf2fa,	// (0x0009ca41) list_cale_time_pane_t

0xee40,	// (0x0009c587) bg_popup_window_pane_cp02_ParamLimits

0xee40,	// (0x0009c587) bg_popup_window_pane_cp02

0xb28f,	// (0x000989d6) heading_pane_cp01_ParamLimits

0xb28f,	// (0x000989d6) heading_pane_cp01

0xb29b,	// (0x000989e2) loc_req_pane_ParamLimits

0xb29b,	// (0x000989e2) loc_req_pane

0xb2ab,	// (0x000989f2) loc_type_pane_ParamLimits

0xb2ab,	// (0x000989f2) loc_type_pane

0xb2bd,	// (0x00098a04) loc_type_pane_t1_ParamLimits

0xb2bd,	// (0x00098a04) loc_type_pane_t1

0xb2cf,	// (0x00098a16) loc_type_pane_t2_ParamLimits

0xb2cf,	// (0x00098a16) loc_type_pane_t2

0xb2e1,	// (0x00098a28) loc_type_pane_t3_ParamLimits

0xb2e1,	// (0x00098a28) loc_type_pane_t3

0x0002,

0xf301,	// (0x0009ca48) loc_type_pane_t_ParamLimits

0xf301,	// (0x0009ca48) loc_type_pane_t

0xb2f3,	// (0x00098a3a) list_loc_req_pane

0xb2fd,	// (0x00098a44) scroll_pane_cp012

0x40ca,	// (0x00091811) list_single_loc_request_popup_menu_pane_ParamLimits

0x40ca,	// (0x00091811) list_single_loc_request_popup_menu_pane

0xb308,	// (0x00098a4f) list_single_loc_request_popup_menu_pane_g1_ParamLimits

0xb308,	// (0x00098a4f) list_single_loc_request_popup_menu_pane_g1

0xb314,	// (0x00098a5b) list_single_loc_request_popup_menu_pane_g2_ParamLimits

0xb314,	// (0x00098a5b) list_single_loc_request_popup_menu_pane_g2

0x0001,

0xf308,	// (0x0009ca4f) list_single_loc_request_popup_menu_pane_g_ParamLimits

0xf308,	// (0x0009ca4f) list_single_loc_request_popup_menu_pane_g

0xb320,	// (0x00098a67) list_single_loc_request_popup_menu_pane_t1_ParamLimits

0xb320,	// (0x00098a67) list_single_loc_request_popup_menu_pane_t1

0x40dc,	// (0x00091823) bg_popup_window_pane_cp03_ParamLimits

0x40dc,	// (0x00091823) bg_popup_window_pane_cp03

0x40ea,	// (0x00091831) heading_loc_req_pane_ParamLimits

0x40ea,	// (0x00091831) heading_loc_req_pane

0x40f6,	// (0x0009183d) popup_dyc_status_message_window_g1_ParamLimits

0x40f6,	// (0x0009183d) popup_dyc_status_message_window_g1

0x4102,	// (0x00091849) popup_dyc_status_message_window_t1_ParamLimits

0x4102,	// (0x00091849) popup_dyc_status_message_window_t1

0x4114,	// (0x0009185b) popup_dyc_status_message_window_t2_ParamLimits

0x4114,	// (0x0009185b) popup_dyc_status_message_window_t2

0x4126,	// (0x0009186d) popup_dyc_status_message_window_t3_ParamLimits

0x4126,	// (0x0009186d) popup_dyc_status_message_window_t3

0x0002,

0xf30d,	// (0x0009ca54) popup_dyc_status_message_window_t_ParamLimits

0xf30d,	// (0x0009ca54) popup_dyc_status_message_window_t

0x0ce2,	// (0x0008e429) bg_heading_pane_cp01

0xb336,	// (0x00098a7d) heading_loc_req_pane_g1

0xb33e,	// (0x00098a85) heading_loc_req_pane_g2

0xb346,	// (0x00098a8d) heading_loc_req_pane_g3

0x0002,

0xf314,	// (0x0009ca5b) heading_loc_req_pane_g

0xb34e,	// (0x00098a95) heading_loc_req_pane_t1

0xb35d,	// (0x00098aa4) bg_popup_sub_pane_cp01_ParamLimits

0xb35d,	// (0x00098aa4) bg_popup_sub_pane_cp01

0xb36b,	// (0x00098ab2) popup_cale_events_window_g1_ParamLimits

0xb36b,	// (0x00098ab2) popup_cale_events_window_g1

0xb38b,	// (0x00098ad2) popup_cale_events_window_g2_ParamLimits

0xb38b,	// (0x00098ad2) popup_cale_events_window_g2

0x0001,

0xf348,	// (0x0009ca8f) popup_cale_events_window_g_ParamLimits

0xf348,	// (0x0009ca8f) popup_cale_events_window_g

0xb3ab,	// (0x00098af2) popup_cale_events_window_t1_ParamLimits

0xb3ab,	// (0x00098af2) popup_cale_events_window_t1

0xb3bd,	// (0x00098b04) popup_cale_events_window_t2_ParamLimits

0xb3bd,	// (0x00098b04) popup_cale_events_window_t2

0xb3fb,	// (0x00098b42) popup_cale_events_window_t3_ParamLimits

0xb3fb,	// (0x00098b42) popup_cale_events_window_t3

0xb435,	// (0x00098b7c) popup_cale_events_window_t4_ParamLimits

0xb435,	// (0x00098b7c) popup_cale_events_window_t4

0x0003,

0xf34d,	// (0x0009ca94) popup_cale_events_window_t_ParamLimits

0xf34d,	// (0x0009ca94) popup_cale_events_window_t

0x422b,	// (0x00091972) call_type_pane

0xb46b,	// (0x00098bb2) popup_call_status_window_g1

0x4237,	// (0x0009197e) popup_call_status_window_g2

0x4243,	// (0x0009198a) popup_call_status_window_g3

0x0002,

0xf356,	// (0x0009ca9d) popup_call_status_window_g

0xb479,	// (0x00098bc0) call_type_pane_g1

0xb482,	// (0x00098bc9) call_type_pane_g2

0x0001,

0xf35d,	// (0x0009caa4) call_type_pane_g

0x0ce2,	// (0x0008e429) bg_popup_sub_pane_cp02

0xb48b,	// (0x00098bd2) listscroll_popup_wml_pane

0xb493,	// (0x00098bda) list_wml_pane

0xb49d,	// (0x00098be4) scroll_pane_cp013

0xb4a8,	// (0x00098bef) list_single_graphic_popup_wml_pane_ParamLimits

0xb4a8,	// (0x00098bef) list_single_graphic_popup_wml_pane

0xac7e,	// (0x000983c5) list_single_graphic_popup_wml_pane_g1

0xb4bc,	// (0x00098c03) list_single_graphic_popup_wml_pane_g2

0x0001,

0xf362,	// (0x0009caa9) list_single_graphic_popup_wml_pane_g

0xb4c4,	// (0x00098c0b) list_single_graphic_popup_wml_pane_t1

0xb4da,	// (0x00098c21) aid_call_pane

0xab5c,	// (0x000982a3) popup_clock_analogue_window_g1

0xab5c,	// (0x000982a3) popup_clock_analogue_window_g2

0x424f,	// (0x00091996) popup_clock_analogue_window_g3

0x424f,	// (0x00091996) popup_clock_analogue_window_g4

0xac7e,	// (0x000983c5) popup_clock_analogue_window_g5

0x0004,

0xf367,	// (0x0009caae) popup_clock_analogue_window_g

0x4257,	// (0x0009199e) popup_clock_analogue_window_t1

0x4265,	// (0x000919ac) clock_digital_number_pane_ParamLimits

0x4265,	// (0x000919ac) clock_digital_number_pane

0x4271,	// (0x000919b8) clock_digital_number_pane_cp02_ParamLimits

0x4271,	// (0x000919b8) clock_digital_number_pane_cp02

0x427d,	// (0x000919c4) clock_digital_number_pane_cp03_ParamLimits

0x427d,	// (0x000919c4) clock_digital_number_pane_cp03

0x4289,	// (0x000919d0) clock_digital_number_pane_cp04_ParamLimits

0x4289,	// (0x000919d0) clock_digital_number_pane_cp04

0x4299,	// (0x000919e0) clock_digital_separator_pane_ParamLimits

0x4299,	// (0x000919e0) clock_digital_separator_pane

0x42a5,	// (0x000919ec) popup_clock_digital_window_t1

0xac7e,	// (0x000983c5) clock_digital_number_pane_g1

0xac7e,	// (0x000983c5) clock_digital_number_pane_g2

0x0001,

0xf2d5,	// (0x0009ca1c) clock_digital_number_pane_g

0xac7e,	// (0x000983c5) clock_digital_separator_pane_g1

0xac7e,	// (0x000983c5) clock_digital_separator_pane_g2

0x0001,

0xf2d5,	// (0x0009ca1c) clock_digital_separator_pane_g

0x0ce2,	// (0x0008e429) bg_popup_window_pane_cp04

0xb4e2,	// (0x00098c29) heading_pane_cp03

0xb4ea,	// (0x00098c31) listscroll_popup_gms_pane

0xb4f2,	// (0x00098c39) grid_large_graphic_popup_pane

0xb4fc,	// (0x00098c43) listscroll_popup_gms_pane_g1

0xb504,	// (0x00098c4b) listscroll_popup_gms_pane_g2

0x0001,

0xf372,	// (0x0009cab9) listscroll_popup_gms_pane_g

0xaf97,	// (0x000986de) scroll_pane_cp014

0x42c2,	// (0x00091a09) cell_large_graphic_popup_pane_ParamLimits

0x42c2,	// (0x00091a09) cell_large_graphic_popup_pane

0x42da,	// (0x00091a21) cell_large_graphic_popup_pane_g1_ParamLimits

0x42da,	// (0x00091a21) cell_large_graphic_popup_pane_g1

0xb50c,	// (0x00098c53) cell_large_graphic_popup_pane_g2_ParamLimits

0xb50c,	// (0x00098c53) cell_large_graphic_popup_pane_g2

0xb518,	// (0x00098c5f) cell_large_graphic_popup_pane_g3_ParamLimits

0xb518,	// (0x00098c5f) cell_large_graphic_popup_pane_g3

0xb525,	// (0x00098c6c) cell_large_graphic_popup_pane_g4_ParamLimits

0xb525,	// (0x00098c6c) cell_large_graphic_popup_pane_g4

0x0003,

0xf377,	// (0x0009cabe) cell_large_graphic_popup_pane_g_ParamLimits

0xf377,	// (0x0009cabe) cell_large_graphic_popup_pane_g

0xb535,	// (0x00098c7c) grid_highlight_pane_cp010

0xac7e,	// (0x000983c5) bg_popup_call_pane_g1

0xb53f,	// (0x00098c86) list_single_graphic_popup_conf_pane_ParamLimits

0xb53f,	// (0x00098c86) list_single_graphic_popup_conf_pane

0xb552,	// (0x00098c99) list_highlight_pane_cp01

0xb55b,	// (0x00098ca2) list_single_graphic_popup_conf_pane_g1

0xb563,	// (0x00098caa) list_single_graphic_popup_conf_pane_g2

0x0001,

0xf380,	// (0x0009cac7) list_single_graphic_popup_conf_pane_g

0xb56b,	// (0x00098cb2) list_single_graphic_popup_conf_pane_t1

0xb579,	// (0x00098cc0) linegrid_cams_pane_g1

0x42e6,	// (0x00091a2d) linegrid_cams_pane_g2

0xadd4,	// (0x0009851b) linegrid_cams_pane_g3

0xb582,	// (0x00098cc9) linegrid_cams_pane_g4

0x42ef,	// (0x00091a36) linegrid_cams_pane_g5

0x42f8,	// (0x00091a3f) linegrid_cams_pane_g6

0xaddd,	// (0x00098524) linegrid_cams_pane_g7

0x0006,

0xf385,	// (0x0009cacc) linegrid_cams_pane_g

0xb58b,	// (0x00098cd2) popup_clock_analogue_window

0xb58b,	// (0x00098cd2) popup_clock_digital_window

0x0ce2,	// (0x0008e429) popup_phob_thumbnail_window

0xac7e,	// (0x000983c5) call_video_uplink_pane_g1

0xb594,	// (0x00098cdb) call_video_uplink_pane_g2

0x0001,

0xf394,	// (0x0009cadb) call_video_uplink_pane_g

0xb59c,	// (0x00098ce3) video_uplink_pane

0xb5a4,	// (0x00098ceb) mce_image_pane_g1

0x4301,	// (0x00091a48) mce_image_pane_g2

0x430b,	// (0x00091a52) mce_image_pane_g3

0x4313,	// (0x00091a5a) mce_image_pane_g4

0x431b,	// (0x00091a62) mce_image_pane_g5

0x0004,

0xf399,	// (0x0009cae0) mce_image_pane_g

0xb5ae,	// (0x00098cf5) control_top_pane_stacon_cp01_ParamLimits

0xb5ae,	// (0x00098cf5) control_top_pane_stacon_cp01

0xb5c2,	// (0x00098d09) uni_indicator_pane_stacon_cp01_ParamLimits

0xb5c2,	// (0x00098d09) uni_indicator_pane_stacon_cp01

0xb5d3,	// (0x00098d1a) bg_popup_sub_pane_cp03

0xb5dd,	// (0x00098d24) chi_dic_find_pane

0x4323,	// (0x00091a6a) listscroll_chi_dic_pane

0xb5e5,	// (0x00098d2c) main_pane_chidic_g1

0xb5ed,	// (0x00098d34) chi_dic_find_pane_t1

0xb5fb,	// (0x00098d42) find_chidic_pane

0xb604,	// (0x00098d4b) chi_dic_list_pane_ParamLimits

0xb604,	// (0x00098d4b) chi_dic_list_pane

0xb615,	// (0x00098d5c) scroll_pane_cp020

0xb61d,	// (0x00098d64) find_chidic_pane_t1

0x0ce2,	// (0x0008e429) input_focus_pane_cp06

0x4337,	// (0x00091a7e) list_chi_dic_pane_ParamLimits

0x4337,	// (0x00091a7e) list_chi_dic_pane

0x4351,	// (0x00091a98) list_chi_dic_pane_t1_ParamLimits

0x4351,	// (0x00091a98) list_chi_dic_pane_t1

0x0ce2,	// (0x0008e429) list_highlight_pane_cp020

0xb62c,	// (0x00098d73) bg_cale_heading_pane_g1

0x4364,	// (0x00091aab) bg_cale_heading_pane_g2

0x436c,	// (0x00091ab3) bg_cale_heading_pane_g3

0x4374,	// (0x00091abb) bg_cale_heading_pane_g4

0x437e,	// (0x00091ac5) bg_cale_heading_pane_g5

0x4388,	// (0x00091acf) bg_cale_heading_pane_g6

0x4390,	// (0x00091ad7) bg_cale_heading_pane_g7

0x4398,	// (0x00091adf) bg_cale_heading_pane_g8

0x43a2,	// (0x00091ae9) bg_cale_heading_pane_g9

0x0008,

0xf3a4,	// (0x0009caeb) bg_cale_heading_pane_g

0xb62c,	// (0x00098d73) bg_cale_side_pane_g1

0x43ac,	// (0x00091af3) bg_cale_side_pane_g2

0x43b6,	// (0x00091afd) bg_cale_side_pane_g3

0x43c0,	// (0x00091b07) bg_cale_side_pane_g4

0x43ca,	// (0x00091b11) bg_cale_side_pane_g5

0x43d4,	// (0x00091b1b) bg_cale_side_pane_g6

0x43de,	// (0x00091b25) bg_cale_side_pane_g7

0x43e8,	// (0x00091b2f) bg_cale_side_pane_g8

0x43f0,	// (0x00091b37) bg_cale_side_pane_g9

0x0008,

0xf3b7,	// (0x0009cafe) bg_cale_side_pane_g

0x43f8,	// (0x00091b3f) popup_call_status_window_ParamLimits

0x43f8,	// (0x00091b3f) popup_call_status_window

0xb634,	// (0x00098d7b) stacon_top_pane

0xb63c,	// (0x00098d83) status_pane_ParamLimits

0xb63c,	// (0x00098d83) status_pane

0xb651,	// (0x00098d98) status_small_pane

0xb659,	// (0x00098da0) control_pane

0x0ce2,	// (0x0008e429) stacon_bottom_pane

0xb661,	// (0x00098da8) list_single_mce_smart_pane_t1_ParamLimits

0xb661,	// (0x00098da8) list_single_mce_smart_pane_t1

0xb674,	// (0x00098dbb) list_single_mce_smart_pane_t2_ParamLimits

0xb674,	// (0x00098dbb) list_single_mce_smart_pane_t2

0x0001,

0xf3ca,	// (0x0009cb11) list_single_mce_smart_pane_t_ParamLimits

0xf3ca,	// (0x0009cb11) list_single_mce_smart_pane_t

0x4404,	// (0x00091b4b) compass_pane

0x4410,	// (0x00091b57) main_location2_pane_t1

0x4424,	// (0x00091b6b) main_location2_pane_t2

0x4438,	// (0x00091b7f) main_location2_pane_t3

0x0003,

0xf3cf,	// (0x0009cb16) main_location2_pane_t

0xb693,	// (0x00098dda) compass_pane_g1_ParamLimits

0xb693,	// (0x00098dda) compass_pane_g1

0x4482,	// (0x00091bc9) compass_pane_t1

0x4491,	// (0x00091bd8) compass_pane_t2

0x0005,

0xf3d8,	// (0x0009cb1f) compass_pane_t

0x44dc,	// (0x00091c23) text_secondary_cp61

0xb70f,	// (0x00098e56) navi_pane_cams_g5

0xb78b,	// (0x00098ed2) navi_pane_im_t1

0xb799,	// (0x00098ee0) navi_pane_mp_g1_ParamLimits

0xb799,	// (0x00098ee0) navi_pane_mp_g1

0xb7ad,	// (0x00098ef4) navi_pane_mp_g2_ParamLimits

0xb7ad,	// (0x00098ef4) navi_pane_mp_g2

0xb7b9,	// (0x00098f00) navi_pane_mp_g3_ParamLimits

0xb7b9,	// (0x00098f00) navi_pane_mp_g3

0x0002,

0xf3ec,	// (0x0009cb33) navi_pane_mp_g_ParamLimits

0xf3ec,	// (0x0009cb33) navi_pane_mp_g

0xb7c5,	// (0x00098f0c) navi_pane_mp_t1

0xb7d3,	// (0x00098f1a) navi_pane_mp_t2

0x0002,

0xf3f3,	// (0x0009cb3a) navi_pane_mp_t

0xb83e,	// (0x00098f85) navi_pane_vt_g1

0xb7c5,	// (0x00098f0c) navi_pane_vt_t1

0xb846,	// (0x00098f8d) navi_slider_pane

0xadee,	// (0x00098535) zooming_pane

0xb856,	// (0x00098f9d) navi_slider_pane_g1

0x4517,	// (0x00091c5e) navi_slider_pane_g2

0x0006,

0xf3fa,	// (0x0009cb41) navi_slider_pane_g

0xb87a,	// (0x00098fc1) aid_levels_zoom

0xb882,	// (0x00098fc9) zooming_pane_g1

0xb88a,	// (0x00098fd1) zooming_pane_g2

0xb88a,	// (0x00098fd1) zooming_pane_g3

0x0002,

0xf409,	// (0x0009cb50) zooming_pane_g

0xb892,	// (0x00098fd9) level_10_zoom

0xb89b,	// (0x00098fe2) level_11_zoom

0xb8a4,	// (0x00098feb) level_1_zoom

0xb8ad,	// (0x00098ff4) level_2_zoom

0xb8b6,	// (0x00098ffd) level_3_zoom

0xb8bf,	// (0x00099006) level_4_zoom

0xb8c8,	// (0x0009900f) level_5_zoom

0xb8d1,	// (0x00099018) level_6_zoom

0xb8da,	// (0x00099021) level_7_zoom

0xb8e3,	// (0x0009902a) level_8_zoom

0xb8ec,	// (0x00099033) level_9_zoom

0xb8fd,	// (0x00099044) popup_phob_thumbnail_window_g1

0xb905,	// (0x0009904c) popup_phob_thumbnail_window_g2

0x0001,

0xf410,	// (0x0009cb57) popup_phob_thumbnail_window_g

0xd828,	// (0x0009af6f) level_1_location

0xd830,	// (0x0009af77) level_2_location

0xd838,	// (0x0009af7f) level_3_location

0xd840,	// (0x0009af87) level_4_location

0xadee,	// (0x00098535) level_5_location

0x4529,	// (0x00091c70) mce_icon_pane_g1

0x4531,	// (0x00091c78) mce_icon_pane_g2

0x0001,

0xf415,	// (0x0009cb5c) mce_icon_pane_g

0x4539,	// (0x00091c80) main_mup_pane_g1_ParamLimits

0x4539,	// (0x00091c80) main_mup_pane_g1

0x4551,	// (0x00091c98) main_mup_pane_g2_ParamLimits

0x4551,	// (0x00091c98) main_mup_pane_g2

0x456d,	// (0x00091cb4) main_mup_pane_g3_ParamLimits

0x456d,	// (0x00091cb4) main_mup_pane_g3

0x4589,	// (0x00091cd0) main_mup_pane_g4_ParamLimits

0x4589,	// (0x00091cd0) main_mup_pane_g4

0x45a5,	// (0x00091cec) main_mup_pane_g5_ParamLimits

0x45a5,	// (0x00091cec) main_mup_pane_g5

0x45c6,	// (0x00091d0d) main_mup_pane_g6_ParamLimits

0x45c6,	// (0x00091d0d) main_mup_pane_g6

0x45e2,	// (0x00091d29) main_mup_pane_g7_ParamLimits

0x45e2,	// (0x00091d29) main_mup_pane_g7

0x45fe,	// (0x00091d45) main_mup_pane_g8_ParamLimits

0x45fe,	// (0x00091d45) main_mup_pane_g8

0x461e,	// (0x00091d65) main_mup_pane_g9_ParamLimits

0x461e,	// (0x00091d65) main_mup_pane_g9

0x463d,	// (0x00091d84) main_mup_pane_g10_ParamLimits

0x463d,	// (0x00091d84) main_mup_pane_g10

0x465c,	// (0x00091da3) main_mup_pane_g11_ParamLimits

0x465c,	// (0x00091da3) main_mup_pane_g11

0x4674,	// (0x00091dbb) main_mup_pane_g12_ParamLimits

0x4674,	// (0x00091dbb) main_mup_pane_g12

0x4682,	// (0x00091dc9) main_mup_pane_g13_ParamLimits

0x4682,	// (0x00091dc9) main_mup_pane_g13

0x000c,

0xf41a,	// (0x0009cb61) main_mup_pane_g_ParamLimits

0xf41a,	// (0x0009cb61) main_mup_pane_g

0x4698,	// (0x00091ddf) main_mup_pane_t1_ParamLimits

0x4698,	// (0x00091ddf) main_mup_pane_t1

0x46b5,	// (0x00091dfc) main_mup_pane_t2_ParamLimits

0x46b5,	// (0x00091dfc) main_mup_pane_t2

0x46cf,	// (0x00091e16) main_mup_pane_t3_ParamLimits

0x46cf,	// (0x00091e16) main_mup_pane_t3

0x46e9,	// (0x00091e30) main_mup_pane_t4_ParamLimits

0x46e9,	// (0x00091e30) main_mup_pane_t4

0x46fb,	// (0x00091e42) main_mup_pane_t5_ParamLimits

0x46fb,	// (0x00091e42) main_mup_pane_t5

0x470d,	// (0x00091e54) main_mup_pane_t6_ParamLimits

0x470d,	// (0x00091e54) main_mup_pane_t6

0x0005,

0xf435,	// (0x0009cb7c) main_mup_pane_t_ParamLimits

0xf435,	// (0x0009cb7c) main_mup_pane_t

0x4723,	// (0x00091e6a) mup_progress_pane_ParamLimits

0x4723,	// (0x00091e6a) mup_progress_pane

0x472f,	// (0x00091e76) mup_visualizer_pane_ParamLimits

0x472f,	// (0x00091e76) mup_visualizer_pane

0x4769,	// (0x00091eb0) mup_volume_pane_ParamLimits

0x4769,	// (0x00091eb0) mup_volume_pane

0xb46b,	// (0x00098bb2) mup_visualizer_pane_g1_ParamLimits

0xb46b,	// (0x00098bb2) mup_visualizer_pane_g1

0xb46b,	// (0x00098bb2) mup_visualizer_pane_g2_ParamLimits

0xb46b,	// (0x00098bb2) mup_visualizer_pane_g2

0xb693,	// (0x00098dda) mup_visualizer_pane_g3_ParamLimits

0xb693,	// (0x00098dda) mup_visualizer_pane_g3

0x0002,

0xf442,	// (0x0009cb89) mup_visualizer_pane_g_ParamLimits

0xf442,	// (0x0009cb89) mup_visualizer_pane_g

0xac7e,	// (0x000983c5) mup_volume_pane_g1

0xb915,	// (0x0009905c) mup_volume_pane_g2

0x0001,

0xf449,	// (0x0009cb90) mup_volume_pane_g

0xac7e,	// (0x000983c5) mup_progress_pane_g1

0xb91e,	// (0x00099065) mup_progress_pane_g2

0xb927,	// (0x0009906e) mup_progress_pane_g3

0x0002,

0xf44e,	// (0x0009cb95) mup_progress_pane_g

0x0ce2,	// (0x0008e429) bg_popup_window_pane_cp05

0xb930,	// (0x00099077) heading_pane_cp02_ParamLimits

0xb930,	// (0x00099077) heading_pane_cp02

0xb94a,	// (0x00099091) list_popup_blid_pane

0xb952,	// (0x00099099) list_blid_sat_info_pane_ParamLimits

0xb952,	// (0x00099099) list_blid_sat_info_pane

0xb965,	// (0x000990ac) list_blid_sat_info_pane_g1

0xb96d,	// (0x000990b4) list_blid_sat_info_pane_t1

0x4876,	// (0x00091fbd) mup_equalizer_pane_ParamLimits

0x4876,	// (0x00091fbd) mup_equalizer_pane

0x4897,	// (0x00091fde) mup_equalizer_pane_cp1_ParamLimits

0x4897,	// (0x00091fde) mup_equalizer_pane_cp1

0x48b8,	// (0x00091fff) mup_equalizer_pane_cp2_ParamLimits

0x48b8,	// (0x00091fff) mup_equalizer_pane_cp2

0x48d9,	// (0x00092020) mup_equalizer_pane_cp3_ParamLimits

0x48d9,	// (0x00092020) mup_equalizer_pane_cp3

0x48fa,	// (0x00092041) mup_equalizer_pane_cp4_ParamLimits

0x48fa,	// (0x00092041) mup_equalizer_pane_cp4

0x491b,	// (0x00092062) mup_equalizer_pane_cp5

0x4931,	// (0x00092078) mup_equalizer_pane_cp6

0x4949,	// (0x00092090) mup_equalizer_pane_cp7

0xd746,	// (0x0009ae8d) bg_popup_call_poc_act_pane_g9

0xd74e,	// (0x0009ae95) bg_popup_call_poc_act_pane_g10

0xd756,	// (0x0009ae9d) bg_popup_call_poc_act_pane_g11

0x000a,

0xab64,	// (0x000982ab) mup_scale_pane

0xac7e,	// (0x000983c5) mup_scale_pane_g1

0xb97b,	// (0x000990c2) mup_scale_pane_g2

0x0006,

0xf46a,	// (0x0009cbb1) mup_scale_pane_g

0xb99f,	// (0x000990e6) msg_data_pane

0xb9a7,	// (0x000990ee) scroll_pane_cp017

0x4973,	// (0x000920ba) bg_list_pane_cp04_ParamLimits

0x4973,	// (0x000920ba) bg_list_pane_cp04

0xb9af,	// (0x000990f6) msg_data_pane_g1

0x4999,	// (0x000920e0) msg_data_pane_g2

0x49a3,	// (0x000920ea) msg_data_pane_g3

0x49ab,	// (0x000920f2) msg_data_pane_g4

0x49b3,	// (0x000920fa) msg_data_pane_g5

0x49bb,	// (0x00092102) msg_data_pane_g6

0x49c3,	// (0x0009210a) msg_data_pane_g7

0x0006,

0xf479,	// (0x0009cbc0) msg_data_pane_g

0x49cb,	// (0x00092112) msg_text_pane_ParamLimits

0x49cb,	// (0x00092112) msg_text_pane

0x4a12,	// (0x00092159) qrid_highlight_pane_cp011_ParamLimits

0x4a12,	// (0x00092159) qrid_highlight_pane_cp011

0x0ce2,	// (0x0008e429) msg_body_pane

0x0ce2,	// (0x0008e429) msg_header_pane

0xb9c0,	// (0x00099107) input_focus_pane_cp07

0x4a38,	// (0x0009217f) msg_header_pane_t1_ParamLimits

0x4a38,	// (0x0009217f) msg_header_pane_t1

0x4a4a,	// (0x00092191) msg_header_pane_t2_ParamLimits

0x4a4a,	// (0x00092191) msg_header_pane_t2

0x0001,

0xf48d,	// (0x0009cbd4) msg_header_pane_t_ParamLimits

0xf48d,	// (0x0009cbd4) msg_header_pane_t

0xb9d5,	// (0x0009911c) msg_body_pane_g1

0x4a5c,	// (0x000921a3) msg_body_pane_t1_ParamLimits

0x4a5c,	// (0x000921a3) msg_body_pane_t1

0x4a8d,	// (0x000921d4) msg_body_pane_t2_ParamLimits

0x4a8d,	// (0x000921d4) msg_body_pane_t2

0x4a9f,	// (0x000921e6) msg_body_pane_t3_ParamLimits

0x4a9f,	// (0x000921e6) msg_body_pane_t3

0x0002,

0xf492,	// (0x0009cbd9) msg_body_pane_t_ParamLimits

0xf492,	// (0x0009cbd9) msg_body_pane_t

0x4b03,	// (0x0009224a) main_viewer_pane_g1_ParamLimits

0x4b03,	// (0x0009224a) main_viewer_pane_g1

0x4b0f,	// (0x00092256) main_viewer_pane_g2_ParamLimits

0x4b0f,	// (0x00092256) main_viewer_pane_g2

0x4b1b,	// (0x00092262) main_viewer_pane_g3_ParamLimits

0x4b1b,	// (0x00092262) main_viewer_pane_g3

0x4b2c,	// (0x00092273) main_viewer_pane_g4_ParamLimits

0x4b2c,	// (0x00092273) main_viewer_pane_g4

0x4b3d,	// (0x00092284) main_viewer_pane_g5_ParamLimits

0x4b3d,	// (0x00092284) main_viewer_pane_g5

0x4b3d,	// (0x00092284) main_viewer_pane_g7_ParamLimits

0x4b3d,	// (0x00092284) main_viewer_pane_g7

0xb308,	// (0x00098a4f) main_viewer_pane_g8_ParamLimits

0xb308,	// (0x00098a4f) main_viewer_pane_g8

0x0007,

0xf4a2,	// (0x0009cbe9) main_viewer_pane_g_ParamLimits

0xf4a2,	// (0x0009cbe9) main_viewer_pane_g

0xb9dd,	// (0x00099124) viewer_content_pane_ParamLimits

0xb9dd,	// (0x00099124) viewer_content_pane

0x4b7b,	// (0x000922c2) main_postcard_pane_g1_ParamLimits

0x4b7b,	// (0x000922c2) main_postcard_pane_g1

0x4b89,	// (0x000922d0) main_postcard_pane_g2_ParamLimits

0x4b89,	// (0x000922d0) main_postcard_pane_g2

0x4b97,	// (0x000922de) main_postcard_pane_g3_ParamLimits

0x4b97,	// (0x000922de) main_postcard_pane_g3

0x0005,

0xf4b3,	// (0x0009cbfa) main_postcard_pane_g_ParamLimits

0xf4b3,	// (0x0009cbfa) main_postcard_pane_g

0x4ba7,	// (0x000922ee) main_postcard_pane_g4

0xd928,	// (0x0009b06f) smil_status_volume_pane_g2

0x4bd3,	// (0x0009231a) postcard_pane_ParamLimits

0x4bd3,	// (0x0009231a) postcard_pane

0xb46b,	// (0x00098bb2) postcard_pane_g1_ParamLimits

0xb46b,	// (0x00098bb2) postcard_pane_g1

0x4c05,	// (0x0009234c) postcard_pane_g2_ParamLimits

0x4c05,	// (0x0009234c) postcard_pane_g2

0x4c11,	// (0x00092358) postcard_pane_g3_ParamLimits

0x4c11,	// (0x00092358) postcard_pane_g3

0xb9eb,	// (0x00099132) postcard_pane_g4_ParamLimits

0xb9eb,	// (0x00099132) postcard_pane_g4

0x4c1d,	// (0x00092364) postcard_pane_g5_ParamLimits

0x4c1d,	// (0x00092364) postcard_pane_g5

0x4c29,	// (0x00092370) postcard_pane_g6_ParamLimits

0x4c29,	// (0x00092370) postcard_pane_g6

0xb9f9,	// (0x00099140) postcard_pane_g7_ParamLimits

0xb9f9,	// (0x00099140) postcard_pane_g7

0x0006,

0xf4c0,	// (0x0009cc07) postcard_pane_g_ParamLimits

0xf4c0,	// (0x0009cc07) postcard_pane_g

0x4c35,	// (0x0009237c) main_mp2_pane_g1_ParamLimits

0x4c35,	// (0x0009237c) main_mp2_pane_g1

0x4c41,	// (0x00092388) main_mp2_pane_g2_ParamLimits

0x4c41,	// (0x00092388) main_mp2_pane_g2

0x4c4d,	// (0x00092394) main_mp2_pane_g3_ParamLimits

0x4c4d,	// (0x00092394) main_mp2_pane_g3

0x0002,

0xf4cf,	// (0x0009cc16) main_mp2_pane_g_ParamLimits

0xf4cf,	// (0x0009cc16) main_mp2_pane_g

0x4c59,	// (0x000923a0) main_mp2_pane_t1_ParamLimits

0x4c59,	// (0x000923a0) main_mp2_pane_t1

0x4c70,	// (0x000923b7) main_mp2_pane_t2_ParamLimits

0x4c70,	// (0x000923b7) main_mp2_pane_t2

0x4c84,	// (0x000923cb) main_mp2_pane_t3_ParamLimits

0x4c84,	// (0x000923cb) main_mp2_pane_t3

0x0002,

0xf4d6,	// (0x0009cc1d) main_mp2_pane_t_ParamLimits

0xf4d6,	// (0x0009cc1d) main_mp2_pane_t

0xba07,	// (0x0009914e) pec_content_pane_ParamLimits

0xba07,	// (0x0009914e) pec_content_pane

0xaf97,	// (0x000986de) scroll_pane_cp015

0xba19,	// (0x00099160) pec_attribute_pane_ParamLimits

0xba19,	// (0x00099160) pec_attribute_pane

0x4c96,	// (0x000923dd) pec_content_pane_g1_ParamLimits

0x4c96,	// (0x000923dd) pec_content_pane_g1

0xba29,	// (0x00099170) pec_content_pane_t1_ParamLimits

0xba29,	// (0x00099170) pec_content_pane_t1

0xba3b,	// (0x00099182) pec_content_pane_t2_ParamLimits

0xba3b,	// (0x00099182) pec_content_pane_t2

0x0001,

0xf4dd,	// (0x0009cc24) pec_content_pane_t_ParamLimits

0xf4dd,	// (0x0009cc24) pec_content_pane_t

0x4ca2,	// (0x000923e9) list_single_graphic_pane_cp01_ParamLimits

0x4ca2,	// (0x000923e9) list_single_graphic_pane_cp01

0xab64,	// (0x000982ab) bg_popup_sub_pane_cp04

0xba4d,	// (0x00099194) popup_mup_playback_window_g1

0xba59,	// (0x000991a0) popup_mup_playback_window_t1

0xba6e,	// (0x000991b5) popup_mup_playback_window_t2

0x0001,

0xf4e2,	// (0x0009cc29) popup_mup_playback_window_t

0xbaa5,	// (0x000991ec) main_image_pane_g1_ParamLimits

0xbaa5,	// (0x000991ec) main_image_pane_g1

0xbae8,	// (0x0009922f) scroll_pane_cp018_ParamLimits

0xbae8,	// (0x0009922f) scroll_pane_cp018

0xc6e6,	// (0x00099e2d) scroll_pane_cp016_ParamLimits

0xc6e6,	// (0x00099e2d) scroll_pane_cp016

0x4d3b,	// (0x00092482) smil2_image_pane_ParamLimits

0x4d3b,	// (0x00092482) smil2_image_pane

0x4d6b,	// (0x000924b2) smil2_root_pane_ParamLimits

0x4d6b,	// (0x000924b2) smil2_root_pane

0x4d97,	// (0x000924de) smil2_text_pane_ParamLimits

0x4d97,	// (0x000924de) smil2_text_pane

0x0ce2,	// (0x0008e429) bg_list_pane_cp06

0xc722,	// (0x00099e69) grid_radio_pane

0x0ce2,	// (0x0008e429) bg_popup_window_pane_cp06

0xc72a,	// (0x00099e71) main_fmradio_pane_t1

0xb4e2,	// (0x00098c29) heading_pane_cp04

0xc738,	// (0x00099e7f) main_fmradio_pane_t2

0xd75e,	// (0x0009aea5) popup_cale_lunar_info_window_g1

0xc746,	// (0x00099e8d) main_fmradio_pane_t3

0xd766,	// (0x0009aead) popup_cale_lunar_info_window_g2

0xc754,	// (0x00099e9b) main_fmradio_pane_t4

0x0001,

0xc762,	// (0x00099ea9) main_fmradio_pane_t5

0x0004,

0xf5bd,	// (0x0009cd04) popup_cale_lunar_info_window_g

0xf4f7,	// (0x0009cc3e) main_fmradio_pane_t

0xc770,	// (0x00099eb7) wait_bar_pane_cp03

0xc778,	// (0x00099ebf) cell_fmradio_pane_ParamLimits

0xc778,	// (0x00099ebf) cell_fmradio_pane

0xb9f9,	// (0x00099140) cell_fmradio_pane_g1_ParamLimits

0xb9f9,	// (0x00099140) cell_fmradio_pane_g1

0x0ce2,	// (0x0008e429) grid_highlight_pane_cp011

0xc78b,	// (0x00099ed2) poc_content_pane_ParamLimits

0xc78b,	// (0x00099ed2) poc_content_pane

0xc79d,	// (0x00099ee4) scroll_pane_cp019

0x4dd7,	// (0x0009251e) popup_call_poc_act_window_ParamLimits

0x4dd7,	// (0x0009251e) popup_call_poc_act_window

0x4de4,	// (0x0009252b) popup_call_poc_inact_window_ParamLimits

0x4de4,	// (0x0009252b) popup_call_poc_inact_window

0xf594,	// (0x0009ccdb) bg_popup_call_poc_act_pane_g

0xd6d6,	// (0x0009ae1d) bg_popup_call_poc_inact_pane_g1

0xd6de,	// (0x0009ae25) bg_popup_call_poc_inact_pane_g2

0xc7a5,	// (0x00099eec) popup_call_poc_act_window_g2

0xd6e6,	// (0x0009ae2d) bg_popup_call_poc_inact_pane_g3

0xd6ee,	// (0x0009ae35) bg_popup_call_poc_inact_pane_g4

0xd6f6,	// (0x0009ae3d) bg_popup_call_poc_inact_pane_g5

0xc7ad,	// (0x00099ef4) popup_call_poc_act_window_t1_ParamLimits

0xc7ad,	// (0x00099ef4) popup_call_poc_act_window_t1

0xc7d5,	// (0x00099f1c) popup_call_poc_act_window_t2_ParamLimits

0xc7d5,	// (0x00099f1c) popup_call_poc_act_window_t2

0xc7fd,	// (0x00099f44) popup_call_poc_act_window_t3_ParamLimits

0xc7fd,	// (0x00099f44) popup_call_poc_act_window_t3

0xc825,	// (0x00099f6c) popup_call_poc_act_window_t4_ParamLimits

0xc825,	// (0x00099f6c) popup_call_poc_act_window_t4

0x0003,

0xf502,	// (0x0009cc49) popup_call_poc_act_window_t_ParamLimits

0xf502,	// (0x0009cc49) popup_call_poc_act_window_t

0xd6fe,	// (0x0009ae45) bg_popup_call_poc_inact_pane_g6

0xd706,	// (0x0009ae4d) bg_popup_call_poc_inact_pane_g7

0xd70e,	// (0x0009ae55) bg_popup_call_poc_inact_pane_g8

0xc837,	// (0x00099f7e) popup_call_poc_inact_window_g2

0xd716,	// (0x0009ae5d) bg_popup_call_poc_inact_pane_g9

0x0008,

0xf581,	// (0x0009ccc8) bg_popup_call_poc_inact_pane_g

0xc83f,	// (0x00099f86) popup_call_poc_inact_window_t1_ParamLimits

0xc83f,	// (0x00099f86) popup_call_poc_inact_window_t1

0xc854,	// (0x00099f9b) popup_call_poc_inact_window_t2_ParamLimits

0xc854,	// (0x00099f9b) popup_call_poc_inact_window_t2

0xc869,	// (0x00099fb0) popup_call_poc_inact_window_t3_ParamLimits

0xc869,	// (0x00099fb0) popup_call_poc_inact_window_t3

0x0002,

0xf50b,	// (0x0009cc52) popup_call_poc_inact_window_t_ParamLimits

0xf50b,	// (0x0009cc52) popup_call_poc_inact_window_t

0xd89b,	// (0x0009afe2) context_pane_ParamLimits

0x5426,	// (0x00092b6d) signal_pane_ParamLimits

0xadee,	// (0x00098535) main_call2_pane

0x5399,	// (0x00092ae0) popup_phob_thumbnail2_window_ParamLimits

0x5399,	// (0x00092ae0) popup_phob_thumbnail2_window

0x4ab1,	// (0x000921f8) aid_hotspot_pointer_arrow_pane

0x4ab9,	// (0x00092200) aid_hotspot_pointer_hand_pane

0x5106,	// (0x0009284d) phob_pre_status_pane_g5

0x2b3d,	// (0x00090284) cams_zoom_pane_ParamLimits

0x2b49,	// (0x00090290) image_vga_pane_ParamLimits

0x2b58,	// (0x0009029f) main_camera_pane_g1_ParamLimits

0x2b66,	// (0x000902ad) main_camera_pane_g2_ParamLimits

0x2b72,	// (0x000902b9) main_camera_pane_g3_ParamLimits

0x2b7e,	// (0x000902c5) main_camera_pane_g4_ParamLimits

0x2b8a,	// (0x000902d1) main_camera_pane_g5_ParamLimits

0x2b96,	// (0x000902dd) main_camera_pane_g6_ParamLimits

0x2ba2,	// (0x000902e9) main_camera_pane_g7_ParamLimits

0xf20a,	// (0x0009c951) main_camera_pane_g_ParamLimits

0x2bae,	// (0x000902f5) main_camera_pane_t1_ParamLimits

0x2bc0,	// (0x00090307) main_camera_pane_t2_ParamLimits

0xf21b,	// (0x0009c962) main_camera_pane_t_ParamLimits

0xab64,	// (0x000982ab) bg_popup_preview_window_pane_cp01_ParamLimits

0xab64,	// (0x000982ab) bg_popup_preview_window_pane_cp01

0xc87e,	// (0x00099fc5) popup_phob_thumbnail2_window_g1_ParamLimits

0xc87e,	// (0x00099fc5) popup_phob_thumbnail2_window_g1

0x0ce2,	// (0x0008e429) call2_cli_visual_pane

0x4e00,	// (0x00092547) popup_call2_audio_conf_window_ParamLimits

0x4e00,	// (0x00092547) popup_call2_audio_conf_window

0x4e15,	// (0x0009255c) popup_call2_audio_first_window_ParamLimits

0x4e15,	// (0x0009255c) popup_call2_audio_first_window

0x4eb3,	// (0x000925fa) popup_call2_audio_in_window_ParamLimits

0x4eb3,	// (0x000925fa) popup_call2_audio_in_window

0x4ef5,	// (0x0009263c) popup_call2_audio_out_window_ParamLimits

0x4ef5,	// (0x0009263c) popup_call2_audio_out_window

0x4f57,	// (0x0009269e) popup_call2_audio_second_window_ParamLimits

0x4f57,	// (0x0009269e) popup_call2_audio_second_window

0x4fb5,	// (0x000926fc) popup_call2_audio_wait_window_ParamLimits

0x4fb5,	// (0x000926fc) popup_call2_audio_wait_window

0x0ce2,	// (0x0008e429) bg_popup_call2_act_pane_cp03

0xab46,	// (0x0009828d) list_conf_pane_cp

0xc88a,	// (0x00099fd1) popup_call2_audio_conf_window_t1

0xb53f,	// (0x00098c86) list_single_graphic_popup_conf2_pane_ParamLimits

0xb53f,	// (0x00098c86) list_single_graphic_popup_conf2_pane

0xb552,	// (0x00098c99) list_highlight_pane_cp04

0xc898,	// (0x00099fdf) list_single_graphic_popup_conf2_pane_g1

0xb563,	// (0x00098caa) list_single_graphic_popup_conf2_pane_g2

0x0001,

0xf512,	// (0x0009cc59) list_single_graphic_popup_conf2_pane_g

0xc8a2,	// (0x00099fe9) list_single_graphic_popup_conf2_pane_t1

0xc8b0,	// (0x00099ff7) bg_popup_call2_act_pane_cp01_ParamLimits

0xc8b0,	// (0x00099ff7) bg_popup_call2_act_pane_cp01

0xc93a,	// (0x0009a081) call_type_pane_cp05_ParamLimits

0xc93a,	// (0x0009a081) call_type_pane_cp05

0xc98e,	// (0x0009a0d5) popup_call2_audio_second_window_g1_ParamLimits

0xc98e,	// (0x0009a0d5) popup_call2_audio_second_window_g1

0xc9e2,	// (0x0009a129) popup_call2_audio_second_window_g2_ParamLimits

0xc9e2,	// (0x0009a129) popup_call2_audio_second_window_g2

0x0002,

0xf517,	// (0x0009cc5e) popup_call2_audio_second_window_g_ParamLimits

0xf517,	// (0x0009cc5e) popup_call2_audio_second_window_g

0xca47,	// (0x0009a18e) popup_call2_audio_second_window_t1_ParamLimits

0xca47,	// (0x0009a18e) popup_call2_audio_second_window_t1

0xcb02,	// (0x0009a249) popup_call2_audio_second_window_t2_ParamLimits

0xcb02,	// (0x0009a249) popup_call2_audio_second_window_t2

0xcb55,	// (0x0009a29c) popup_call2_audio_second_window_t3_ParamLimits

0xcb55,	// (0x0009a29c) popup_call2_audio_second_window_t3

0x0003,

0xf51e,	// (0x0009cc65) popup_call2_audio_second_window_t_ParamLimits

0xf51e,	// (0x0009cc65) popup_call2_audio_second_window_t

0x0ce2,	// (0x0008e429) bg_popup_call2_in_pane_cp02

0x0cec,	// (0x0008e433) call_type_pane_cp04

0x0cf4,	// (0x0008e43b) popup_call2_audio_wait_window_g1

0x0cfc,	// (0x0008e443) popup_call2_audio_wait_window_g2

0x0001,

0xf0f9,	// (0x0009c840) popup_call2_audio_wait_window_g

0x0d04,	// (0x0008e44b) popup_call2_audio_wait_window_t3

0xcca9,	// (0x0009a3f0) bg_popup_call2_act_pane_ParamLimits

0xcca9,	// (0x0009a3f0) bg_popup_call2_act_pane

0xcd69,	// (0x0009a4b0) call_type_pane_cp03_ParamLimits

0xcd69,	// (0x0009a4b0) call_type_pane_cp03

0xcdcd,	// (0x0009a514) popup_call2_audio_first_window_g1_ParamLimits

0xcdcd,	// (0x0009a514) popup_call2_audio_first_window_g1

0xce3d,	// (0x0009a584) popup_call2_audio_first_window_g2_ParamLimits

0xce3d,	// (0x0009a584) popup_call2_audio_first_window_g2

0xb46b,	// (0x00098bb2) popup_call2_audio_first_window_g3_ParamLimits

0xb46b,	// (0x00098bb2) popup_call2_audio_first_window_g3

0x0004,

0xf527,	// (0x0009cc6e) popup_call2_audio_first_window_g_ParamLimits

0xf527,	// (0x0009cc6e) popup_call2_audio_first_window_g

0xcf1b,	// (0x0009a662) popup_call2_audio_first_window_t1_ParamLimits

0xcf1b,	// (0x0009a662) popup_call2_audio_first_window_t1

0xd01e,	// (0x0009a765) popup_call2_audio_first_window_t4_ParamLimits

0xd01e,	// (0x0009a765) popup_call2_audio_first_window_t4

0xd101,	// (0x0009a848) popup_call2_audio_first_window_t5_ParamLimits

0xd101,	// (0x0009a848) popup_call2_audio_first_window_t5

0x0003,

0xf532,	// (0x0009cc79) popup_call2_audio_first_window_t_ParamLimits

0xf532,	// (0x0009cc79) popup_call2_audio_first_window_t

0xab5c,	// (0x000982a3) bg_popup_call2_act_pane_g1

0xd76e,	// (0x0009aeb5) popup_cale_lunar_info_window_t1

0xd77c,	// (0x0009aec3) popup_cale_lunar_info_window_t2

0xd78a,	// (0x0009aed1) popup_cale_lunar_info_window_t3

0x0ce2,	// (0x0008e429) bg_popup_call2_bubble_pane

0xd202,	// (0x0009a949) bg_popup_call2_in_pane_cp01_ParamLimits

0xd202,	// (0x0009a949) bg_popup_call2_in_pane_cp01

0x09be,	// (0x0008e105) call_type_pane_cp02

0xd24a,	// (0x0009a991) popup_call2_audio_out_window_g1_ParamLimits

0xd24a,	// (0x0009a991) popup_call2_audio_out_window_g1

0xd276,	// (0x0009a9bd) popup_call2_audio_out_window_g2_ParamLimits

0xd276,	// (0x0009a9bd) popup_call2_audio_out_window_g2

0xd29e,	// (0x0009a9e5) popup_call2_audio_out_window_g3_ParamLimits

0xd29e,	// (0x0009a9e5) popup_call2_audio_out_window_g3

0x0003,

0xf53b,	// (0x0009cc82) popup_call2_audio_out_window_g_ParamLimits

0xf53b,	// (0x0009cc82) popup_call2_audio_out_window_g

0xd2d9,	// (0x0009aa20) popup_call2_audio_out_window_t1_ParamLimits

0xd2d9,	// (0x0009aa20) popup_call2_audio_out_window_t1

0xd338,	// (0x0009aa7f) popup_call2_audio_out_window_t2_ParamLimits

0xd338,	// (0x0009aa7f) popup_call2_audio_out_window_t2

0xd38c,	// (0x0009aad3) popup_call2_audio_out_window_t3_ParamLimits

0xd38c,	// (0x0009aad3) popup_call2_audio_out_window_t3

0xd3a2,	// (0x0009aae9) popup_call2_audio_out_window_t4_ParamLimits

0xd3a2,	// (0x0009aae9) popup_call2_audio_out_window_t4

0xd3b8,	// (0x0009aaff) popup_call2_audio_out_window_t5_ParamLimits

0xd3b8,	// (0x0009aaff) popup_call2_audio_out_window_t5

0x0005,

0xf544,	// (0x0009cc8b) popup_call2_audio_out_window_t_ParamLimits

0xf544,	// (0x0009cc8b) popup_call2_audio_out_window_t

0xd41c,	// (0x0009ab63) bg_popup_call2_in_pane_ParamLimits

0xd41c,	// (0x0009ab63) bg_popup_call2_in_pane

0xd478,	// (0x0009abbf) popup_call2_audio_in_window_g1_ParamLimits

0xd478,	// (0x0009abbf) popup_call2_audio_in_window_g1

0xd4b0,	// (0x0009abf7) popup_call2_audio_in_window_g2_ParamLimits

0xd4b0,	// (0x0009abf7) popup_call2_audio_in_window_g2

0xd4e8,	// (0x0009ac2f) popup_call2_audio_in_window_g3_ParamLimits

0xd4e8,	// (0x0009ac2f) popup_call2_audio_in_window_g3

0x0003,

0xf551,	// (0x0009cc98) popup_call2_audio_in_window_g_ParamLimits

0xf551,	// (0x0009cc98) popup_call2_audio_in_window_g

0xd540,	// (0x0009ac87) popup_call2_audio_in_window_t1_ParamLimits

0xd540,	// (0x0009ac87) popup_call2_audio_in_window_t1

0xd5c0,	// (0x0009ad07) popup_call2_audio_in_window_t2_ParamLimits

0xd5c0,	// (0x0009ad07) popup_call2_audio_in_window_t2

0xd640,	// (0x0009ad87) popup_call2_audio_in_window_t3_ParamLimits

0xd640,	// (0x0009ad87) popup_call2_audio_in_window_t3

0xd65a,	// (0x0009ada1) popup_call2_audio_in_window_t4_ParamLimits

0xd65a,	// (0x0009ada1) popup_call2_audio_in_window_t4

0xd66c,	// (0x0009adb3) popup_call2_audio_in_window_t5_ParamLimits

0xd66c,	// (0x0009adb3) popup_call2_audio_in_window_t5

0xd681,	// (0x0009adc8) popup_call2_audio_in_window_t6_ParamLimits

0xd681,	// (0x0009adc8) popup_call2_audio_in_window_t6

0x0005,

0xf55a,	// (0x0009cca1) popup_call2_audio_in_window_t_ParamLimits

0xf55a,	// (0x0009cca1) popup_call2_audio_in_window_t

0xab5c,	// (0x000982a3) bg_popup_call2_in_pane_g1

0xd798,	// (0x0009aedf) popup_cale_lunar_info_window_t4

0x0003,

0xf5c2,	// (0x0009cd09) popup_cale_lunar_info_window_t

0xab64,	// (0x000982ab) bg_popup_call2_rect_pane_ParamLimits

0xab64,	// (0x000982ab) bg_popup_call2_rect_pane

0x0ce2,	// (0x0008e429) call2_cli_visual_graphic_pane

0x0ce2,	// (0x0008e429) call2_cli_visual_text_pane

0x54cc,	// (0x00092c13) smil_status_volume_pane_g3

0x0002,

0xac7e,	// (0x000983c5) call2_cli_visual_graphic_pane_g1

0xac7e,	// (0x000983c5) call2_cli_visual_graphic_pane_g2

0xac7e,	// (0x000983c5) call2_cli_visual_graphic_pane_g3

0x0002,

0xf567,	// (0x0009ccae) call2_cli_visual_graphic_pane_g

0xd696,	// (0x0009addd) bg_popup_call2_rect_pane_g1

0xad0a,	// (0x00098451) bg_popup_call2_rect_pane_g2

0xd69e,	// (0x0009ade5) bg_popup_call2_rect_pane_g3

0xd6a6,	// (0x0009aded) bg_popup_call2_rect_pane_g4

0xd6ae,	// (0x0009adf5) bg_popup_call2_rect_pane_g5

0xd6b6,	// (0x0009adfd) bg_popup_call2_rect_pane_g6

0xd6be,	// (0x0009ae05) bg_popup_call2_rect_pane_g7

0xd6c6,	// (0x0009ae0d) bg_popup_call2_rect_pane_g8

0xd6ce,	// (0x0009ae15) bg_popup_call2_rect_pane_g9

0x0008,

0xf56e,	// (0x0009ccb5) bg_popup_call2_rect_pane_g

0xd6d6,	// (0x0009ae1d) bg_popup_call2_bubble_pane_g1

0xd6de,	// (0x0009ae25) bg_popup_call2_bubble_pane_g2

0xd6e6,	// (0x0009ae2d) bg_popup_call2_bubble_pane_g3

0xd6ee,	// (0x0009ae35) bg_popup_call2_bubble_pane_g4

0xd6f6,	// (0x0009ae3d) bg_popup_call2_bubble_pane_g5

0xd6fe,	// (0x0009ae45) bg_popup_call2_bubble_pane_g6

0xd706,	// (0x0009ae4d) bg_popup_call2_bubble_pane_g7

0xd70e,	// (0x0009ae55) bg_popup_call2_bubble_pane_g8

0xd716,	// (0x0009ae5d) bg_popup_call2_bubble_pane_g9

0x0008,

0xf581,	// (0x0009ccc8) bg_popup_call2_bubble_pane_g

0x2654,	// (0x0008fd9b) aid_cale_week_size_cell_pane

0x2bd2,	// (0x00090319) aid_cams_cif_uncrop_pane_ParamLimits

0x2bd2,	// (0x00090319) aid_cams_cif_uncrop_pane

0x2d2d,	// (0x00090474) aid_cams_size_cell_ParamLimits

0x2d2d,	// (0x00090474) aid_cams_size_cell

0x2d39,	// (0x00090480) grid_cams_pane_ParamLimits

0x2d47,	// (0x0009048e) linegrid_cams_pane_ParamLimits

0x2f15,	// (0x0009065c) call_video_pane_t1

0x2f36,	// (0x0009067d) call_video_pane_t2

0x0001,

0xf26e,	// (0x0009c9b5) call_video_pane_t

0x347d,	// (0x00090bc4) aid_cale_month_size_cell_pane_ParamLimits

0x347d,	// (0x00090bc4) aid_cale_month_size_cell_pane

0xf60b,	// (0x0009cd52) smil_status_volume_pane_g

0x54d9,	// (0x00092c20) volume_smil_pane_ParamLimits

0x1d9d,	// (0x0008f4e4) aid_popup2_width_pane

0x2548,	// (0x0008fc8f) cell_qdial_pane_g4_ParamLimits

0x2548,	// (0x0008fc8f) cell_qdial_pane_g4

0x445e,	// (0x00091ba5) aid_blid_cardinal_pane_ParamLimits

0x446e,	// (0x00091bb5) aid_blid_destination_pane_ParamLimits

0x446e,	// (0x00091bb5) aid_blid_destination_pane

0xab64,	// (0x000982ab) bg_popup_call_poc_act_pane_ParamLimits

0xab64,	// (0x000982ab) bg_popup_call_poc_act_pane

0xab64,	// (0x000982ab) bg_popup_call_poc_inact_pane_ParamLimits

0xab64,	// (0x000982ab) bg_popup_call_poc_inact_pane

0xd71e,	// (0x0009ae65) bg_popup_call_poc_act_pane_g1

0xd726,	// (0x0009ae6d) bg_popup_call_poc_act_pane_g2

0xd72e,	// (0x0009ae75) bg_popup_call_poc_act_pane_g3

0xd6ee,	// (0x0009ae35) bg_popup_call_poc_act_pane_g4

0xd6f6,	// (0x0009ae3d) bg_popup_call_poc_act_pane_g5

0xd736,	// (0x0009ae7d) bg_popup_call_poc_act_pane_g6

0xd706,	// (0x0009ae4d) bg_popup_call_poc_act_pane_g7

0xd73e,	// (0x0009ae85) bg_popup_call_poc_act_pane_g8

0x0ce2,	// (0x0008e429) main_usb_pane

0x52c8,	// (0x00092a0f) popup_cale_lunar_info_window

0x325f,	// (0x000909a6) im_reading_pane_t1_ParamLimits

0xaeef,	// (0x00098636) list_im_pane_ParamLimits

0xaf00,	// (0x00098647) scroll_pane_cp07_ParamLimits

0x0ce2,	// (0x0008e429) grid_highlight_pane_cp012

0xab64,	// (0x000982ab) mup_scale_pane_ParamLimits

0xb46b,	// (0x00098bb2) main_usb_pane_g1_ParamLimits

0xb46b,	// (0x00098bb2) main_usb_pane_g1

0x5029,	// (0x00092770) main_usb_pane_g2_ParamLimits

0x5029,	// (0x00092770) main_usb_pane_g2

0x0001,

0xf5ab,	// (0x0009ccf2) main_usb_pane_g_ParamLimits

0xf5ab,	// (0x0009ccf2) main_usb_pane_g

0x5035,	// (0x0009277c) main_usb_pane_t1_ParamLimits

0x5035,	// (0x0009277c) main_usb_pane_t1

0x5047,	// (0x0009278e) main_usb_pane_t2_ParamLimits

0x5047,	// (0x0009278e) main_usb_pane_t2

0x5059,	// (0x000927a0) main_usb_pane_t3_ParamLimits

0x5059,	// (0x000927a0) main_usb_pane_t3

0x506b,	// (0x000927b2) main_usb_pane_t4_ParamLimits

0x506b,	// (0x000927b2) main_usb_pane_t4

0x507d,	// (0x000927c4) main_usb_pane_t5_ParamLimits

0x507d,	// (0x000927c4) main_usb_pane_t5

0x508f,	// (0x000927d6) main_usb_pane_t6_ParamLimits

0x508f,	// (0x000927d6) main_usb_pane_t6

0x0005,

0xf5b0,	// (0x0009ccf7) main_usb_pane_t_ParamLimits

0x4404,	// (0x00091b4b) aid_text_placing

0x4410,	// (0x00091b57) main_location2_pane_t1_ParamLimits

0x4424,	// (0x00091b6b) main_location2_pane_t2_ParamLimits

0x4438,	// (0x00091b7f) main_location2_pane_t3_ParamLimits

0x444c,	// (0x00091b93) main_location2_pane_t4_ParamLimits

0x444c,	// (0x00091b93) main_location2_pane_t4

0xf3cf,	// (0x0009cb16) main_location2_pane_t_ParamLimits

0xaba0,	// (0x000982e7) find_pinb_pane_g2_ParamLimits

0xaba0,	// (0x000982e7) find_pinb_pane_g2

0x0001,

0xf11f,	// (0x0009c866) find_pinb_pane_g_ParamLimits

0xf11f,	// (0x0009c866) find_pinb_pane_g

0xabac,	// (0x000982f3) find_pinb_pane_t1_ParamLimits

0xabbe,	// (0x00098305) find_pinb_pane_t2_ParamLimits

0xf124,	// (0x0009c86b) find_pinb_pane_t_ParamLimits

0x0ce2,	// (0x0008e429) main_call3_pane

0x3a20,	// (0x00091167) cale_month_day_heading_pane_t1_ParamLimits

0x3aa6,	// (0x000911ed) cale_month_day_heading_pane_t2_ParamLimits

0x3b1f,	// (0x00091266) cale_month_day_heading_pane_t3_ParamLimits

0x3b98,	// (0x000912df) cale_month_day_heading_pane_t4_ParamLimits

0x3c11,	// (0x00091358) cale_month_day_heading_pane_t5_ParamLimits

0x3c8a,	// (0x000913d1) cale_month_day_heading_pane_t6_ParamLimits

0x3d03,	// (0x0009144a) cale_month_day_heading_pane_t7_ParamLimits

0xf2a6,	// (0x0009c9ed) cale_month_day_heading_pane_t_ParamLimits

0xb14a,	// (0x00098891) smil_status_volume_pane

0x4bed,	// (0x00092334) postcard_address_pane_ParamLimits

0x4bed,	// (0x00092334) postcard_address_pane

0x4bf9,	// (0x00092340) postcard_message_pane_ParamLimits

0x4bf9,	// (0x00092340) postcard_message_pane

0x4ff4,	// (0x0009273b) call2_cli_visual_pane_t1_ParamLimits

0x4ff4,	// (0x0009273b) call2_cli_visual_pane_t1

0x5630,	// (0x00092d77) postcard_message_pane_t1_ParamLimits

0x5630,	// (0x00092d77) postcard_message_pane_t1

0x5619,	// (0x00092d60) postcard_address_pane_t1_ParamLimits

0x5619,	// (0x00092d60) postcard_address_pane_t1

0x560a,	// (0x00092d51) popup_call3_audio_in_window_ParamLimits

0x560a,	// (0x00092d51) popup_call3_audio_in_window

0x54ee,	// (0x00092c35) bg_popup_call3_in_pane_ParamLimits

0x54ee,	// (0x00092c35) bg_popup_call3_in_pane

0x5550,	// (0x00092c97) popup_call3_audio_in_window_g1_ParamLimits

0x5550,	// (0x00092c97) popup_call3_audio_in_window_g1

0x5568,	// (0x00092caf) popup_call3_audio_in_window_g2_ParamLimits

0x5568,	// (0x00092caf) popup_call3_audio_in_window_g2

0x5580,	// (0x00092cc7) popup_call3_audio_in_window_g3_ParamLimits

0x5580,	// (0x00092cc7) popup_call3_audio_in_window_g3

0x0003,

0xf612,	// (0x0009cd59) popup_call3_audio_in_window_g_ParamLimits

0xf612,	// (0x0009cd59) popup_call3_audio_in_window_g

0x55a8,	// (0x00092cef) popup_call3_audio_in_window_t1_ParamLimits

0x55a8,	// (0x00092cef) popup_call3_audio_in_window_t1

0x55d0,	// (0x00092d17) popup_call3_audio_in_window_t2_ParamLimits

0x55d0,	// (0x00092d17) popup_call3_audio_in_window_t2

0x55f8,	// (0x00092d3f) popup_call3_audio_in_window_t3_ParamLimits

0x55f8,	// (0x00092d3f) popup_call3_audio_in_window_t3

0x0002,

0xf61b,	// (0x0009cd62) popup_call3_audio_in_window_t_ParamLimits

0xf61b,	// (0x0009cd62) popup_call3_audio_in_window_t

0xadee,	// (0x00098535) bg_popup_call3_rect_pane

0xd696,	// (0x0009addd) bg_popup_call3_rect_pane_g1

0xad0a,	// (0x00098451) bg_popup_call3_rect_pane_g2

0xd69e,	// (0x0009ade5) bg_popup_call3_rect_pane_g3

0xd6a6,	// (0x0009aded) bg_popup_call3_rect_pane_g4

0xd6ae,	// (0x0009adf5) bg_popup_call3_rect_pane_g5

0xd6b6,	// (0x0009adfd) bg_popup_call3_rect_pane_g6

0xd6be,	// (0x0009ae05) bg_popup_call3_rect_pane_g7

0x4784,	// (0x00091ecb) mup_visualizer_osc_pane

0xb90d,	// (0x00099054) mup_visualizer_spec_pane

0x550e,	// (0x00092c55) call3_video_qcif_pane_ParamLimits

0x550e,	// (0x00092c55) call3_video_qcif_pane

0x5520,	// (0x00092c67) call3_video_qcif_uncrop_pane_ParamLimits

0x5520,	// (0x00092c67) call3_video_qcif_uncrop_pane

0x552e,	// (0x00092c75) call3_video_subqcif_pane_ParamLimits

0x552e,	// (0x00092c75) call3_video_subqcif_pane

0x5540,	// (0x00092c87) call3_video_subqcif_uncrop_pane_ParamLimits

0x5540,	// (0x00092c87) call3_video_subqcif_uncrop_pane

0x5598,	// (0x00092cdf) popup_call3_audio_in_window_g4_ParamLimits

0x5598,	// (0x00092cdf) popup_call3_audio_in_window_g4

0x54bb,	// (0x00092c02) mup_spec_half_pane

0x54c4,	// (0x00092c0b) mup_spec_half_pane_cp

0xd8fb,	// (0x0009b042) mup_osc_middle_pane

0xd904,	// (0x0009b04b) mup_visualizer_osc_pane_g1

0x549c,	// (0x00092be3) mup_spec_bar_pane_ParamLimits

0x549c,	// (0x00092be3) mup_spec_bar_pane

0xd8e8,	// (0x0009b02f) mup_spec_bar_pane_g1

0xd8f2,	// (0x0009b039) mup_spec_bar_pane_g2

0x0001,

0xf606,	// (0x0009cd4d) mup_spec_bar_pane_g

0x2654,	// (0x0008fd9b) aid_cale_week_size_cell_pane_ParamLimits

0x2669,	// (0x0008fdb0) bg_cale_heading_pane_ParamLimits

0xad47,	// (0x0009848e) bg_cale_pane_cp01_ParamLimits

0x2689,	// (0x0008fdd0) cale_week_corner_pane_ParamLimits

0x26a3,	// (0x0008fdea) cale_week_day_heading_pane_ParamLimits

0x26c3,	// (0x0008fe0a) cale_week_scroll_pane_g1_ParamLimits

0x26de,	// (0x0008fe25) cale_week_scroll_pane_g2_ParamLimits

0x26f1,	// (0x0008fe38) cale_week_scroll_pane_g3_ParamLimits

0x2704,	// (0x0008fe4b) cale_week_scroll_pane_g4_ParamLimits

0x2717,	// (0x0008fe5e) cale_week_scroll_pane_g5_ParamLimits

0x272a,	// (0x0008fe71) cale_week_scroll_pane_g6_ParamLimits

0x273d,	// (0x0008fe84) cale_week_scroll_pane_g7_ParamLimits

0x2752,	// (0x0008fe99) cale_week_scroll_pane_g8_ParamLimits

0x2767,	// (0x0008feae) cale_week_scroll_pane_g9_ParamLimits

0x277a,	// (0x0008fec1) cale_week_scroll_pane_g10_ParamLimits

0x278d,	// (0x0008fed4) cale_week_scroll_pane_g11_ParamLimits

0x27a0,	// (0x0008fee7) cale_week_scroll_pane_g12_ParamLimits

0x27b7,	// (0x0008fefe) cale_week_scroll_pane_g13_ParamLimits

0x27d2,	// (0x0008ff19) cale_week_scroll_pane_g14_ParamLimits

0x27ed,	// (0x0008ff34) cale_week_scroll_pane_g15_ParamLimits

0xf1b0,	// (0x0009c8f7) cale_week_scroll_pane_g_ParamLimits

0x281d,	// (0x0008ff64) cale_week_time_pane_ParamLimits

0x2832,	// (0x0008ff79) grid_cale_week_pane_ParamLimits

0xad64,	// (0x000984ab) listscroll_cale_week_pane_t1

0xad76,	// (0x000984bd) scroll_pane_cp08_ParamLimits

0x34f1,	// (0x00090c38) cale_month_corner_pane_ParamLimits

0xb120,	// (0x00098867) cale_month_pane_t1

0x39a3,	// (0x000910ea) cale_month_week_pane_ParamLimits

0xb46b,	// (0x00098bb2) popup_call_status_window_g1_ParamLimits

0x4237,	// (0x0009197e) popup_call_status_window_g2_ParamLimits

0x4243,	// (0x0009198a) popup_call_status_window_g3_ParamLimits

0xf356,	// (0x0009ca9d) popup_call_status_window_g_ParamLimits

0xb4d2,	// (0x00098c19) aid_call2_pane

0x4a2c,	// (0x00092173) msg_header_pane_g1

0x4bed,	// (0x00092334) postcard_address2_pane_ParamLimits

0x4bed,	// (0x00092334) postcard_address2_pane

0x4bf9,	// (0x00092340) postcard_message2_pane_ParamLimits

0x4bf9,	// (0x00092340) postcard_message2_pane

0x5434,	// (0x00092b7b) message2_row_pane_ParamLimits

0x5434,	// (0x00092b7b) message2_row_pane

0x544f,	// (0x00092b96) address2_row_pane_ParamLimits

0x544f,	// (0x00092b96) address2_row_pane

0xd8b6,	// (0x0009affd) postcard_message2_row_pane_g1

0xd8be,	// (0x0009b005) postcard_message2_row_pane_t1

0xd8b6,	// (0x0009affd) address2_row_pane_g1

0xd8be,	// (0x0009b005) address2_row_pane_t1

0x2ab8,	// (0x000901ff) aid_size_cell_vorec

0x0ce2,	// (0x0008e429) main_rss_pane

0x5462,	// (0x00092ba9) rss_list_single_pane_ParamLimits

0x5462,	// (0x00092ba9) rss_list_single_pane

0xd8cc,	// (0x0009b013) rss_list_single_pane_t1

0xd8da,	// (0x0009b021) rss_list_single_pane_t2

0x0001,

0xf601,	// (0x0009cd48) rss_list_single_pane_t

0x0ce2,	// (0x0008e429) main_camera2_pane

0x0ce2,	// (0x0008e429) main_video2_pane

0x5694,	// (0x00092ddb) cams_zoom_pane_cp2_ParamLimits

0x5694,	// (0x00092ddb) cams_zoom_pane_cp2

0x56a0,	// (0x00092de7) image2_vga_pane_ParamLimits

0x56a0,	// (0x00092de7) image2_vga_pane

0x56af,	// (0x00092df6) main_camera2_pane_g1_ParamLimits

0x56af,	// (0x00092df6) main_camera2_pane_g1

0x56bb,	// (0x00092e02) main_camera2_pane_g2_ParamLimits

0x56bb,	// (0x00092e02) main_camera2_pane_g2

0x56c7,	// (0x00092e0e) main_camera2_pane_g3_ParamLimits

0x56c7,	// (0x00092e0e) main_camera2_pane_g3

0x56d3,	// (0x00092e1a) main_camera2_pane_g4_ParamLimits

0x56d3,	// (0x00092e1a) main_camera2_pane_g4

0x56df,	// (0x00092e26) main_camera2_pane_g5_ParamLimits

0x56df,	// (0x00092e26) main_camera2_pane_g5

0x56eb,	// (0x00092e32) main_camera2_pane_g6_ParamLimits

0x56eb,	// (0x00092e32) main_camera2_pane_g6

0x56f7,	// (0x00092e3e) main_camera2_pane_g7_ParamLimits

0x56f7,	// (0x00092e3e) main_camera2_pane_g7

0x5703,	// (0x00092e4a) main_camera2_pane_g8_ParamLimits

0x5703,	// (0x00092e4a) main_camera2_pane_g8

0x0008,

0xf622,	// (0x0009cd69) main_camera2_pane_g_ParamLimits

0xf622,	// (0x0009cd69) main_camera2_pane_g

0x571b,	// (0x00092e62) main_camera2_pane_t1_ParamLimits

0x571b,	// (0x00092e62) main_camera2_pane_t1

0x572d,	// (0x00092e74) main_camera2_pane_t2_ParamLimits

0x572d,	// (0x00092e74) main_camera2_pane_t2

0x573f,	// (0x00092e86) main_camera2_pane_t3_ParamLimits

0x573f,	// (0x00092e86) main_camera2_pane_t3

0x5751,	// (0x00092e98) main_camera2_pane_t4_ParamLimits

0x5751,	// (0x00092e98) main_camera2_pane_t4

0x0006,

0xf635,	// (0x0009cd7c) main_camera2_pane_t_ParamLimits

0xf635,	// (0x0009cd7c) main_camera2_pane_t

0x57b3,	// (0x00092efa) cams_zoom_pane_cp4_ParamLimits

0x57b3,	// (0x00092efa) cams_zoom_pane_cp4

0x57c3,	// (0x00092f0a) image2_cif_pane_ParamLimits

0x57c3,	// (0x00092f0a) image2_cif_pane

0x57d8,	// (0x00092f1f) image2_subqcif_pane_ParamLimits

0x57d8,	// (0x00092f1f) image2_subqcif_pane

0x57e7,	// (0x00092f2e) main_video2_pane_g1_ParamLimits

0x57e7,	// (0x00092f2e) main_video2_pane_g1

0x57f9,	// (0x00092f40) main_video2_pane_g2_ParamLimits

0x57f9,	// (0x00092f40) main_video2_pane_g2

0x5809,	// (0x00092f50) main_video2_pane_g3_ParamLimits

0x5809,	// (0x00092f50) main_video2_pane_g3

0x5819,	// (0x00092f60) main_video2_pane_g4_ParamLimits

0x5819,	// (0x00092f60) main_video2_pane_g4

0x5829,	// (0x00092f70) main_video2_pane_g5_ParamLimits

0x5829,	// (0x00092f70) main_video2_pane_g5

0x5839,	// (0x00092f80) main_video2_pane_g6_ParamLimits

0x5839,	// (0x00092f80) main_video2_pane_g6

0x0005,

0xf644,	// (0x0009cd8b) main_video2_pane_g_ParamLimits

0xf644,	// (0x0009cd8b) main_video2_pane_g

0x584b,	// (0x00092f92) main_video2_pane_t1_ParamLimits

0x584b,	// (0x00092f92) main_video2_pane_t1

0x5865,	// (0x00092fac) main_video2_pane_t2_ParamLimits

0x5865,	// (0x00092fac) main_video2_pane_t2

0x588b,	// (0x00092fd2) main_video2_pane_t3_ParamLimits

0x588b,	// (0x00092fd2) main_video2_pane_t3

0x0002,

0xf651,	// (0x0009cd98) main_video2_pane_t_ParamLimits

0xf651,	// (0x0009cd98) main_video2_pane_t

0x5146,	// (0x0009288d) call_muted_g2

0x0001,

0xf5f3,	// (0x0009cd3a) call_muted_g

0x0ce2,	// (0x0008e429) main_mup2_pane

0xd93b,	// (0x0009b082) main_mup2_pane_g1_ParamLimits

0xd93b,	// (0x0009b082) main_mup2_pane_g1

0x58b1,	// (0x00092ff8) main_mup2_pane_g2_ParamLimits

0x58b1,	// (0x00092ff8) main_mup2_pane_g2

0x5b33,	// (0x0009327a) main_mup_pane_g13_cp1

0x5b3b,	// (0x00093282) mup_volume_pane_cp1

0x58d1,	// (0x00093018) main_mup2_pane_g4_ParamLimits

0x58d1,	// (0x00093018) main_mup2_pane_g4

0x58e6,	// (0x0009302d) main_mup2_pane_g5_ParamLimits

0x58e6,	// (0x0009302d) main_mup2_pane_g5

0x58fb,	// (0x00093042) main_mup2_pane_g6_ParamLimits

0x58fb,	// (0x00093042) main_mup2_pane_g6

0x5910,	// (0x00093057) main_mup2_pane_g7_ParamLimits

0x5910,	// (0x00093057) main_mup2_pane_g7

0x0006,

0xf658,	// (0x0009cd9f) main_mup2_pane_g_ParamLimits

0xf658,	// (0x0009cd9f) main_mup2_pane_g

0x592c,	// (0x00093073) main_mup2_pane_t1_ParamLimits

0x592c,	// (0x00093073) main_mup2_pane_t1

0x5943,	// (0x0009308a) main_mup2_pane_t2_ParamLimits

0x5943,	// (0x0009308a) main_mup2_pane_t2

0x595a,	// (0x000930a1) main_mup2_pane_t3_ParamLimits

0x595a,	// (0x000930a1) main_mup2_pane_t3

0x5971,	// (0x000930b8) main_mup2_pane_t4_ParamLimits

0x5971,	// (0x000930b8) main_mup2_pane_t4

0x598b,	// (0x000930d2) main_mup2_pane_t5_ParamLimits

0x598b,	// (0x000930d2) main_mup2_pane_t5

0x59a5,	// (0x000930ec) main_mup2_pane_t6_ParamLimits

0x59a5,	// (0x000930ec) main_mup2_pane_t6

0x0005,

0xf667,	// (0x0009cdae) main_mup2_pane_t_ParamLimits

0xf667,	// (0x0009cdae) main_mup2_pane_t

0x59dd,	// (0x00093124) mup2_visualizer_pane_ParamLimits

0x59dd,	// (0x00093124) mup2_visualizer_pane

0x5a13,	// (0x0009315a) mup_progress_pane_cp_ParamLimits

0x5a13,	// (0x0009315a) mup_progress_pane_cp

0x5b1e,	// (0x00093265) mup_volume_pane_cp_ParamLimits

0x5b1e,	// (0x00093265) mup_volume_pane_cp

0x5a2a,	// (0x00093171) mup2_visualizer_pane_g1_ParamLimits

0x5a2a,	// (0x00093171) mup2_visualizer_pane_g1

0xd947,	// (0x0009b08e) mup2_visualizer_pane_g2_ParamLimits

0xd947,	// (0x0009b08e) mup2_visualizer_pane_g2

0x5a3f,	// (0x00093186) mup2_visualizer_pane_g3_ParamLimits

0x5a3f,	// (0x00093186) mup2_visualizer_pane_g3

0x0002,

0xf674,	// (0x0009cdbb) mup2_visualizer_pane_g_ParamLimits

0xf674,	// (0x0009cdbb) mup2_visualizer_pane_g

0xc71a,	// (0x00099e61) aid_size_cell_fmradio

0x525c,	// (0x000929a3) aid_height_parent_landcape

0xaf7e,	// (0x000986c5) wml_content_pane_cp

0xaf86,	// (0x000986cd) wml_tabs_pane

0xaf8f,	// (0x000986d6) popup_wml_miniature_window

0xaf97,	// (0x000986de) scroll_pane_cp021

0xafab,	// (0x000986f2) wml_content_pane_comp8

0x0ce2,	// (0x0008e429) bg_popup_sub_pane_cp05

0xd965,	// (0x0009b0ac) popup_wml_miniature_window_g1

0xd96d,	// (0x0009b0b4) wml_miniature_view_pane

0x5a4d,	// (0x00093194) aid_size_wml_view

0x5a55,	// (0x0009319c) wml_miniature_view_pane_g1

0x5a5e,	// (0x000931a5) wml_miniature_view_pane_g2

0x5a67,	// (0x000931ae) wml_miniature_view_pane_g3

0x5a6f,	// (0x000931b6) wml_miniature_view_pane_g4

0x5a77,	// (0x000931be) wml_miniature_view_pane_g5

0x5a7f,	// (0x000931c6) wml_miniature_view_pane_g6

0x5a87,	// (0x000931ce) wml_miniature_view_pane_g7

0x5a8f,	// (0x000931d6) wml_miniature_view_pane_g8

0x0007,

0xf67b,	// (0x0009cdc2) wml_miniature_view_pane_g

0xd93b,	// (0x0009b082) background_graphic_ParamLimits

0xd93b,	// (0x0009b082) background_graphic

0xd975,	// (0x0009b0bc) wml_tabs_2_pane

0xd97e,	// (0x0009b0c5) wml_tabs_3_pane_ParamLimits

0xd97e,	// (0x0009b0c5) wml_tabs_3_pane

0xd990,	// (0x0009b0d7) wml_tabs_4_pane_ParamLimits

0xd990,	// (0x0009b0d7) wml_tabs_4_pane

0xd9a6,	// (0x0009b0ed) wml_tabs_5_pane_ParamLimits

0xd9a6,	// (0x0009b0ed) wml_tabs_5_pane

0xd9c0,	// (0x0009b107) wml_tabs_pane_g2_ParamLimits

0xd9c0,	// (0x0009b107) wml_tabs_pane_g2

0xd9d4,	// (0x0009b11b) wml_tabs_pane_g3_ParamLimits

0xd9d4,	// (0x0009b11b) wml_tabs_pane_g3

0x5a97,	// (0x000931de) wml_tabs_2_active_pane_ParamLimits

0x5a97,	// (0x000931de) wml_tabs_2_active_pane

0x5aa7,	// (0x000931ee) wml_tabs_2_passive_pane_ParamLimits

0x5aa7,	// (0x000931ee) wml_tabs_2_passive_pane

0x5ab7,	// (0x000931fe) wml_tabs_3_active_pane_cp_ParamLimits

0x5ab7,	// (0x000931fe) wml_tabs_3_active_pane_cp

0x5ac8,	// (0x0009320f) wml_tabs_3_passive_pane_ParamLimits

0x5ac8,	// (0x0009320f) wml_tabs_3_passive_pane

0x5ad9,	// (0x00093220) wml_tabs_3_passive_pane_cp_ParamLimits

0x5ad9,	// (0x00093220) wml_tabs_3_passive_pane_cp

0x5aea,	// (0x00093231) tabs_4_active_pane

0x5af2,	// (0x00093239) tabs_4_passive_pane

0x5afa,	// (0x00093241) tabs_4_passive_pane_cp

0x5b02,	// (0x00093249) tabs_4_passive_pane_cp2

0x5021,	// (0x00092768) aid_height_text

0x4751,	// (0x00091e98) mup_volume_cont_pane_ParamLimits

0x4751,	// (0x00091e98) mup_volume_cont_pane

0x2184,	// (0x0008f8cb) aid_size_cell_pinb

0x218e,	// (0x0008f8d5) aid_size_list_pinb

0x59fc,	// (0x00093143) mup2_volume_cont_pane_ParamLimits

0x59fc,	// (0x00093143) mup2_volume_cont_pane

0x5b0a,	// (0x00093251) mup2_volume_cont_pane_g1_ParamLimits

0x5b0a,	// (0x00093251) mup2_volume_cont_pane_g1

0x1da9,	// (0x0008f4f0) aid_size_cell_touch_ParamLimits

0x1da9,	// (0x0008f4f0) aid_size_cell_touch

0x206a,	// (0x0008f7b1) touch_pane_ParamLimits

0x206a,	// (0x0008f7b1) touch_pane

0x2060,	// (0x0008f7a7) main_rss2_pane

0xd9f1,	// (0x0009b138) listscroll_rss2_pane

0xd9fa,	// (0x0009b141) rss2_navigation_pane

0xda02,	// (0x0009b149) list_rss2_pane

0xb615,	// (0x00098d5c) scroll_pane_cp22

0xda0a,	// (0x0009b151) rss2_navigation_pane_g1

0xda13,	// (0x0009b15a) rss2_navigation_pane_g2

0xda1b,	// (0x0009b162) rss2_navigation_pane_g3

0x0002,

0xf68c,	// (0x0009cdd3) rss2_navigation_pane_g

0xda23,	// (0x0009b16a) rss2_navigation_pane_t1

0x5b43,	// (0x0009328a) rss2_list_single_pane_ParamLimits

0x5b43,	// (0x0009328a) rss2_list_single_pane

0xda31,	// (0x0009b178) rss2_list_single_pane_t2

0xda3f,	// (0x0009b186) rss2_list_single_pane_t3_ParamLimits

0xda3f,	// (0x0009b186) rss2_list_single_pane_t3

0xda5c,	// (0x0009b1a3) rss2_list_single_pane_t4

0x3fc9,	// (0x00091710) smil_status_pane_g1

0x5273,	// (0x000929ba) main_image2_pane_ParamLimits

0x5273,	// (0x000929ba) main_image2_pane

0x570f,	// (0x00092e56) main_camera2_pane_g9_ParamLimits

0x570f,	// (0x00092e56) main_camera2_pane_g9

0x5763,	// (0x00092eaa) main_camera2_pane_t5_ParamLimits

0x5763,	// (0x00092eaa) main_camera2_pane_t5

0x5775,	// (0x00092ebc) main_camera2_pane_t6_ParamLimits

0x5775,	// (0x00092ebc) main_camera2_pane_t6

0x5b74,	// (0x000932bb) main_image2_pane_g1_ParamLimits

0x5b74,	// (0x000932bb) main_image2_pane_g1

0x4dc1,	// (0x00092508) smil2_video_pane_ParamLimits

0x4dc1,	// (0x00092508) smil2_video_pane

0x1ddd,	// (0x0008f524) aid_zoom_text_primary_cp

0x1ffb,	// (0x0008f742) popup_preview_fixed_window

0xaee7,	// (0x0009862e) im_reading_pane_g1

0x5659,	// (0x00092da0) cams2_bc_adjust_pane_cp_ParamLimits

0x5659,	// (0x00092da0) cams2_bc_adjust_pane_cp

0x57a5,	// (0x00092eec) cams2_bc_adjust_pane_ParamLimits

0x57a5,	// (0x00092eec) cams2_bc_adjust_pane

0x0111,	// (0x0008d858) cams2_bc_adjust_pane_g1

0x5b80,	// (0x000932c7) cams2_slider_pane

0x5b89,	// (0x000932d0) cams2_slider_pane_g1

0x5b92,	// (0x000932d9) cams2_slider_pane_g2

0x0006,

0xf693,	// (0x0009cdda) cams2_slider_pane_g

0x2294,	// (0x0008f9db) calc_display_pane_ParamLimits

0x22b2,	// (0x0008f9f9) calc_paper_pane_ParamLimits

0x22ce,	// (0x0008fa15) grid_calc_pane_ParamLimits

0x42a5,	// (0x000919ec) popup_clock_digital_window_t1_ParamLimits

0xbad1,	// (0x00099218) main_image_pane_t1

0x227a,	// (0x0008f9c1) aid_size_cell_calc_ParamLimits

0x227a,	// (0x0008f9c1) aid_size_cell_calc

0x52a4,	// (0x000929eb) popup_blid_sat_info2_window_ParamLimits

0x52a4,	// (0x000929eb) popup_blid_sat_info2_window

0xda7b,	// (0x0009b1c2) aid_size_cell_blid

0xda83,	// (0x0009b1ca) bg_popup_window_pane_cp07

0xdaa6,	// (0x0009b1ed) grid_popup_blid_pane

0xdab0,	// (0x0009b1f7) heading_pane_cp05_ParamLimits

0xdab0,	// (0x0009b1f7) heading_pane_cp05

0xdb7a,	// (0x0009b2c1) cell_popup_blid_pane_ParamLimits

0xdb7a,	// (0x0009b2c1) cell_popup_blid_pane

0xdb9e,	// (0x0009b2e5) cell_popup_blid_pane_g1

0xdba6,	// (0x0009b2ed) cell_popup_blid_pane_t1

0x59c2,	// (0x00093109) mup2_indicator_pane_ParamLimits

0x59c2,	// (0x00093109) mup2_indicator_pane

0xadee,	// (0x00098535) mup2_visualizer_osc_pane

0xd953,	// (0x0009b09a) mup2_visualizer_spec_pane_ParamLimits

0xd953,	// (0x0009b09a) mup2_visualizer_spec_pane

0x5bac,	// (0x000932f3) mup2_spec_half_pane

0x5bb5,	// (0x000932fc) mup2_spec_half_pane_cp

0x5bbf,	// (0x00093306) mup2_spec_bar_pane_ParamLimits

0x5bbf,	// (0x00093306) mup2_spec_bar_pane

0xd8e8,	// (0x0009b02f) mup2_spec_bar_pane_g1

0xd8f2,	// (0x0009b039) mup2_spec_bar_pane_g2

0x0001,

0xf606,	// (0x0009cd4d) mup2_spec_bar_pane_g

0x5bde,	// (0x00093325) mup2_osc_middle_pane

0xd904,	// (0x0009b04b) mup2_visualizer_osc_pane_g1

0xedf6,	// (0x0009c53d) popup_number_entry_window_t1_ParamLimits

0xee09,	// (0x0009c550) popup_number_entry_window_t2_ParamLimits

0xee1b,	// (0x0009c562) popup_number_entry_window_t3_ParamLimits

0x20c1,	// (0x0008f808) popup_number_entry_window_t5_ParamLimits

0x20c1,	// (0x0008f808) popup_number_entry_window_t5

0xf0ca,	// (0x0009c811) popup_number_entry_window_t_ParamLimits

0xee2d,	// (0x0009c574) text_title_cp2_ParamLimits

0x4ac1,	// (0x00092208) aid_hotspot_pointer_text2_pane

0x4b4f,	// (0x00092296) main_viewer_pane_g9_ParamLimits

0x4b4f,	// (0x00092296) main_viewer_pane_g9

0xb120,	// (0x00098867) cale_month_pane_t1_ParamLimits

0xb15d,	// (0x000988a4) bg_cale_pane_ParamLimits

0xb175,	// (0x000988bc) list_cale_pane_ParamLimits

0xb186,	// (0x000988cd) listscroll_cale_day_pane_t1

0xb198,	// (0x000988df) scroll_pane_cp09_ParamLimits

0x478c,	// (0x00091ed3) main_mup_eq_pane_t1_ParamLimits

0x478c,	// (0x00091ed3) main_mup_eq_pane_t1

0x47a6,	// (0x00091eed) main_mup_eq_pane_t2_ParamLimits

0x47a6,	// (0x00091eed) main_mup_eq_pane_t2

0x47c0,	// (0x00091f07) main_mup_eq_pane_t3_ParamLimits

0x47c0,	// (0x00091f07) main_mup_eq_pane_t3

0x47d8,	// (0x00091f1f) main_mup_eq_pane_t4_ParamLimits

0x47d8,	// (0x00091f1f) main_mup_eq_pane_t4

0x47f0,	// (0x00091f37) main_mup_eq_pane_t5_ParamLimits

0x47f0,	// (0x00091f37) main_mup_eq_pane_t5

0x4808,	// (0x00091f4f) main_mup_eq_pane_t6_ParamLimits

0x4808,	// (0x00091f4f) main_mup_eq_pane_t6

0x481c,	// (0x00091f63) main_mup_eq_pane_t7_ParamLimits

0x481c,	// (0x00091f63) main_mup_eq_pane_t7

0x4830,	// (0x00091f77) main_mup_eq_pane_t8_ParamLimits

0x4830,	// (0x00091f77) main_mup_eq_pane_t8

0x4846,	// (0x00091f8d) main_mup_eq_pane_t9_ParamLimits

0x4846,	// (0x00091f8d) main_mup_eq_pane_t9

0x485e,	// (0x00091fa5) main_mup_eq_pane_t10_ParamLimits

0x485e,	// (0x00091fa5) main_mup_eq_pane_t10

0x0009,

0xf455,	// (0x0009cb9c) main_mup_eq_pane_t_ParamLimits

0xf455,	// (0x0009cb9c) main_mup_eq_pane_t

0x491b,	// (0x00092062) mup_equalizer_pane_cp5_ParamLimits

0x4931,	// (0x00092078) mup_equalizer_pane_cp6_ParamLimits

0x4949,	// (0x00092090) mup_equalizer_pane_cp7_ParamLimits

0x2060,	// (0x0008f7a7) main_gallery_pane

0xd90d,	// (0x0009b054) smil2_volume_pane

0xd915,	// (0x0009b05c) smil_status_volume_pane_g1_ParamLimits

0xd928,	// (0x0009b06f) smil_status_volume_pane_g2_ParamLimits

0x54cc,	// (0x00092c13) smil_status_volume_pane_g3_ParamLimits

0xf60b,	// (0x0009cd52) smil_status_volume_pane_g_ParamLimits

0xda83,	// (0x0009b1ca) bg_popup_window_pane_cp07_ParamLimits

0xda91,	// (0x0009b1d8) blid_firmament_pane

0x5be7,	// (0x0009332e) aid_size_cell_gallery_ParamLimits

0x5be7,	// (0x0009332e) aid_size_cell_gallery

0x5bf5,	// (0x0009333c) grid_gallery_pane_ParamLimits

0x5bf5,	// (0x0009333c) grid_gallery_pane

0x5c05,	// (0x0009334c) cell_gallery_pane_ParamLimits

0x5c05,	// (0x0009334c) cell_gallery_pane

0xdbb4,	// (0x0009b2fb) bg_cell_gallery_focus_pane_ParamLimits

0xdbb4,	// (0x0009b2fb) bg_cell_gallery_focus_pane

0xdbc6,	// (0x0009b30d) cell_gallery_pane_g1_ParamLimits

0xdbc6,	// (0x0009b30d) cell_gallery_pane_g1

0x5c53,	// (0x0009339a) cell_gallery_pane_g2_ParamLimits

0x5c53,	// (0x0009339a) cell_gallery_pane_g2

0x5c60,	// (0x000933a7) cell_gallery_pane_g3_ParamLimits

0x5c60,	// (0x000933a7) cell_gallery_pane_g3

0xdbd2,	// (0x0009b319) cell_gallery_pane_g4_ParamLimits

0xdbd2,	// (0x0009b319) cell_gallery_pane_g4

0x0003,

0xf6b9,	// (0x0009ce00) cell_gallery_pane_g_ParamLimits

0xf6b9,	// (0x0009ce00) cell_gallery_pane_g

0xdbde,	// (0x0009b325) bg_cell_gallery_focus_pane_g1

0xdbe6,	// (0x0009b32d) bg_cell_gallery_focus_pane_g2

0xdbee,	// (0x0009b335) bg_cell_gallery_focus_pane_g3

0xdbf6,	// (0x0009b33d) bg_cell_gallery_focus_pane_g4

0xdbfe,	// (0x0009b345) bg_cell_gallery_focus_pane_g5

0xdc06,	// (0x0009b34d) bg_cell_gallery_focus_pane_g6

0xdc0e,	// (0x0009b355) bg_cell_gallery_focus_pane_g7

0xdc16,	// (0x0009b35d) bg_cell_gallery_focus_pane_g8

0x0007,

0xf6c2,	// (0x0009ce09) bg_cell_gallery_focus_pane_g

0xdc1e,	// (0x0009b365) aid_firma_cardinal

0xdc32,	// (0x0009b379) blid_firmament_pane_t1

0xdc49,	// (0x0009b390) blid_firmament_pane_t2

0xdc60,	// (0x0009b3a7) blid_firmament_pane_t3

0xdc77,	// (0x0009b3be) blid_firmament_pane_t4

0x0003,

0xf6d3,	// (0x0009ce1a) blid_firmament_pane_t

0xdc8e,	// (0x0009b3d5) blid_sat_info_pane

0xdc9e,	// (0x0009b3e5) blid_sat_info_pane_g1

0xdc9e,	// (0x0009b3e5) blid_sat_info_pane_g2

0x0001,

0xf6dc,	// (0x0009ce23) blid_sat_info_pane_g

0xdca8,	// (0x0009b3ef) blid_sat_info_pane_t1

0xdcb6,	// (0x0009b3fd) smil2_volume_content_pane

0xdcbf,	// (0x0009b406) smil2_volume_pane_g1

0xda6a,	// (0x0009b1b1) smil2_volume_content_pane_g1

0xdcc7,	// (0x0009b40e) smil2_volume_content_pane_g2

0xdcd0,	// (0x0009b417) smil2_volume_content_pane_g3

0xdcd9,	// (0x0009b420) smil2_volume_content_pane_g4

0xdce2,	// (0x0009b429) smil2_volume_content_pane_g5

0xdceb,	// (0x0009b432) smil2_volume_content_pane_g6

0xdcf4,	// (0x0009b43b) smil2_volume_content_pane_g7

0xdcfd,	// (0x0009b444) smil2_volume_content_pane_g8

0xdd06,	// (0x0009b44d) smil2_volume_content_pane_g9

0xdd0f,	// (0x0009b456) smil2_volume_content_pane_g10

0x0009,

0xf6e1,	// (0x0009ce28) smil2_volume_content_pane_g

0x28b3,	// (0x0008fffa) cale_week_day_heading_pane_t1_ParamLimits

0x28ce,	// (0x00090015) cale_week_day_heading_pane_t2_ParamLimits

0x28e9,	// (0x00090030) cale_week_day_heading_pane_t3_ParamLimits

0x2904,	// (0x0009004b) cale_week_day_heading_pane_t4_ParamLimits

0x291f,	// (0x00090066) cale_week_day_heading_pane_t5_ParamLimits

0x293a,	// (0x00090081) cale_week_day_heading_pane_t6_ParamLimits

0x2955,	// (0x0009009c) cale_week_day_heading_pane_t7_ParamLimits

0xf1d1,	// (0x0009c918) cale_week_day_heading_pane_t_ParamLimits

0xad93,	// (0x000984da) bg_cale_side_pane_ParamLimits

0x2970,	// (0x000900b7) cale_week_time_pane_t1_ParamLimits

0x298a,	// (0x000900d1) cale_week_time_pane_t2_ParamLimits

0x29a4,	// (0x000900eb) cale_week_time_pane_t3_ParamLimits

0x29be,	// (0x00090105) cale_week_time_pane_t4_ParamLimits

0x29d8,	// (0x0009011f) cale_week_time_pane_t5_ParamLimits

0x29f2,	// (0x00090139) cale_week_time_pane_t6_ParamLimits

0x2a10,	// (0x00090157) cale_week_time_pane_t7_ParamLimits

0x2a32,	// (0x00090179) cale_week_time_pane_t8_ParamLimits

0xf1e0,	// (0x0009c927) cale_week_time_pane_t_ParamLimits

0x2a56,	// (0x0009019d) cell_cale_week_pane_g2_ParamLimits

0xad93,	// (0x000984da) bg_cale_side_pane_cp01_ParamLimits

0x3d94,	// (0x000914db) cale_month_week_pane_t1_ParamLimits

0x3dad,	// (0x000914f4) cale_month_week_pane_t2_ParamLimits

0x3dc6,	// (0x0009150d) cale_month_week_pane_t3_ParamLimits

0x3ddf,	// (0x00091526) cale_month_week_pane_t4_ParamLimits

0x3df8,	// (0x0009153f) cale_month_week_pane_t5_ParamLimits

0x3e19,	// (0x00091560) cale_month_week_pane_t6_ParamLimits

0xf2b5,	// (0x0009c9fc) cale_month_week_pane_t_ParamLimits

0x3f86,	// (0x000916cd) cell_cale_month_pane_g1_ParamLimits

0x2060,	// (0x0008f7a7) main_cale_event_viewer_pane

0xedcc,	// (0x0009c513) listscroll_cale_event_viewer_pane

0xdd18,	// (0x0009b45f) list_cale_ev_pane

0xdd20,	// (0x0009b467) scroll_pane_cp023

0xdd2c,	// (0x0009b473) field_cale_ev_pane_ParamLimits

0xdd2c,	// (0x0009b473) field_cale_ev_pane

0xdd4a,	// (0x0009b491) field_cale_ev_content_pane_ParamLimits

0xdd4a,	// (0x0009b491) field_cale_ev_content_pane

0xdd56,	// (0x0009b49d) field_cale_ev_pane_g1_ParamLimits

0xdd56,	// (0x0009b49d) field_cale_ev_pane_g1

0xdd62,	// (0x0009b4a9) field_cale_ev_pane_g2_ParamLimits

0xdd62,	// (0x0009b4a9) field_cale_ev_pane_g2

0xdd7a,	// (0x0009b4c1) field_cale_ev_pane_g3_ParamLimits

0xdd7a,	// (0x0009b4c1) field_cale_ev_pane_g3

0x0002,

0xf6f6,	// (0x0009ce3d) field_cale_ev_pane_g_ParamLimits

0xf6f6,	// (0x0009ce3d) field_cale_ev_pane_g

0xdd92,	// (0x0009b4d9) field_cale_ev_pane_t1_ParamLimits

0xdd92,	// (0x0009b4d9) field_cale_ev_pane_t1

0xdda9,	// (0x0009b4f0) field_cale_ev_content_pane_t1_ParamLimits

0xdda9,	// (0x0009b4f0) field_cale_ev_content_pane_t1

0xb9b7,	// (0x000990fe) bg_button_pane_cp01

0x2644,	// (0x0008fd8b) listscroll_cale_week_pane_ParamLimits

0xad3e,	// (0x00098485) popup_toolbar_window_cp01

0xad64,	// (0x000984ab) listscroll_cale_week_pane_t1_ParamLimits

0x2644,	// (0x0008fd8b) listscroll_cale_day_pane_ParamLimits

0xad3e,	// (0x00098485) popup_toolbar_window_cp02

0xb186,	// (0x000988cd) listscroll_cale_day_pane_t1_ParamLimits

0x2644,	// (0x0008fd8b) main_cale_month_pane_ParamLimits

0x53ab,	// (0x00092af2) popup_toolbar_window_cp03_ParamLimits

0x53ab,	// (0x00092af2) popup_toolbar_window_cp03

0x4cd7,	// (0x0009241e) main_image_pane_g2_ParamLimits

0x4cd7,	// (0x0009241e) main_image_pane_g2

0x4ce3,	// (0x0009242a) main_image_pane_g3_ParamLimits

0x4ce3,	// (0x0009242a) main_image_pane_g3

0x0002,

0xf4e7,	// (0x0009cc2e) main_image_pane_g_ParamLimits

0xf4e7,	// (0x0009cc2e) main_image_pane_g

0xbad1,	// (0x00099218) main_image_pane_t1_ParamLimits

0x4cef,	// (0x00092436) main_image_pane_t2_ParamLimits

0x4cef,	// (0x00092436) main_image_pane_t2

0x4d01,	// (0x00092448) main_image_pane_t3_ParamLimits

0x4d01,	// (0x00092448) main_image_pane_t3

0x4d13,	// (0x0009245a) main_image_pane_t4_ParamLimits

0x4d13,	// (0x0009245a) main_image_pane_t4

0x0003,

0xf4ee,	// (0x0009cc35) main_image_pane_t_ParamLimits

0xf4ee,	// (0x0009cc35) main_image_pane_t

0x4d25,	// (0x0009246c) popup_image_details_window_cp01

0x4d2f,	// (0x00092476) popup_toobar_trans_pane_cp01_ParamLimits

0x4d2f,	// (0x00092476) popup_toobar_trans_pane_cp01

0x52fb,	// (0x00092a42) popup_image_details_window_ParamLimits

0x52fb,	// (0x00092a42) popup_image_details_window

0x5309,	// (0x00092a50) popup_image_focus_window

0x564b,	// (0x00092d92) camera2_autofocus_pane_ParamLimits

0x564b,	// (0x00092d92) camera2_autofocus_pane

0xedcc,	// (0x0009c513) bg_popup_sub_pane_cp06

0xddc7,	// (0x0009b50e) popup_image_focus_window_g1

0xddcf,	// (0x0009b516) popup_image_focus_window_g2

0xddd7,	// (0x0009b51e) popup_image_focus_window_g3

0xdddf,	// (0x0009b526) popup_image_focus_window_g4

0x0003,

0xf6fd,	// (0x0009ce44) popup_image_focus_window_g

0xdde7,	// (0x0009b52e) popup_image_focus_window_t1

0xddf5,	// (0x0009b53c) popup_image_focus_window_t2

0xde05,	// (0x0009b54c) popup_image_focus_window_t3

0x0002,

0xf706,	// (0x0009ce4d) popup_image_focus_window_t

0xde13,	// (0x0009b55a) camera2_autofocus_pane_g1

0xcba8,	// (0x0009a2ef) bg_tb_trans_pane_cp01

0xde21,	// (0x0009b568) popup_image_details_window_g1

0xde34,	// (0x0009b57b) popup_image_details_window_g2

0x0002,

0xf718,	// (0x0009ce5f) popup_image_details_window_g

0xde5d,	// (0x0009b5a4) popup_image_details_window_t1

0xde6f,	// (0x0009b5b6) popup_image_details_window_t2

0xde88,	// (0x0009b5cf) popup_image_details_window_t3

0xde9c,	// (0x0009b5e3) popup_image_details_window_t4

0xdeb7,	// (0x0009b5fe) popup_image_details_window_t5

0x0004,

0xf71f,	// (0x0009ce66) popup_image_details_window_t

0xac15,	// (0x0009835c) bg_calc_paper_pane_ParamLimits

0x2060,	// (0x0008f7a7) grid_highlight_pane_cp013

0x23cb,	// (0x0008fb12) list_calc_pane_ParamLimits

0x23dd,	// (0x0008fb24) scroll_pane_cp024

0xac29,	// (0x00098370) bg_calc_display_pane_ParamLimits

0x23e5,	// (0x0008fb2c) calc_display_pane_t1_ParamLimits

0x23fa,	// (0x0008fb41) calc_display_pane_t2_ParamLimits

0x240f,	// (0x0008fb56) calc_display_pane_t3_ParamLimits

0xf151,	// (0x0009c898) calc_display_pane_t_ParamLimits

0x24eb,	// (0x0008fc32) cell_calc_pane_g2

0x0001,

0xf16e,	// (0x0009c8b5) cell_calc_pane_g

0x24f4,	// (0x0008fc3b) cell_calc_pane_t1

0xac88,	// (0x000983cf) grid_highlight_pane_cp02_ParamLimits

0xac9e,	// (0x000983e5) toolbar_button_pane_cp01_ParamLimits

0xac9e,	// (0x000983e5) toolbar_button_pane_cp01

0xc6fc,	// (0x00099e43) temp_image_control_pane_ParamLimits

0xc6fc,	// (0x00099e43) temp_image_control_pane

0x5273,	// (0x000929ba) main_mp3_pane

0xded1,	// (0x0009b618) temp_image_control_pane_g1_ParamLimits

0xded1,	// (0x0009b618) temp_image_control_pane_g1

0xdedf,	// (0x0009b626) temp_image_control_pane_g2_ParamLimits

0xdedf,	// (0x0009b626) temp_image_control_pane_g2

0xdef1,	// (0x0009b638) temp_image_control_pane_g3_ParamLimits

0xdef1,	// (0x0009b638) temp_image_control_pane_g3

0x5c9d,	// (0x000933e4) temp_image_control_pane_g4_ParamLimits

0x5c9d,	// (0x000933e4) temp_image_control_pane_g4

0x0003,

0xf72a,	// (0x0009ce71) temp_image_control_pane_g_ParamLimits

0xf72a,	// (0x0009ce71) temp_image_control_pane_g

0xded1,	// (0x0009b618) main_mp3_pane_g1

0x5cae,	// (0x000933f5) main_mp3_pane_g2

0x0007,

0xf733,	// (0x0009ce7a) main_mp3_pane_g

0xdf34,	// (0x0009b67b) main_mp3_pane_t1

0xadf6,	// (0x0009853d) main_camera_pane_g8_ParamLimits

0xadf6,	// (0x0009853d) main_camera_pane_g8

0x2ce3,	// (0x0009042a) main_video_pane_g7_ParamLimits

0x2ce3,	// (0x0009042a) main_video_pane_g7

0x5793,	// (0x00092eda) main_camera2_pane_t7_ParamLimits

0x5793,	// (0x00092eda) main_camera2_pane_t7

0xaf3e,	// (0x00098685) scroll_pane_cp025_ParamLimits

0xaf3e,	// (0x00098685) scroll_pane_cp025

0xaf52,	// (0x00098699) scroll_pane_cp026_ParamLimits

0xaf52,	// (0x00098699) scroll_pane_cp026

0xaf61,	// (0x000986a8) wml_content_pane_ParamLimits

0x2060,	// (0x0008f7a7) main_touch_calib_pane

0x5d52,	// (0x00093499) main_touch_calib_pane_g1

0x5d5e,	// (0x000934a5) main_touch_calib_pane_g2

0x5d6a,	// (0x000934b1) main_touch_calib_pane_g3

0x5d76,	// (0x000934bd) main_touch_calib_pane_g4

0x0003,

0xf751,	// (0x0009ce98) main_touch_calib_pane_g

0x5d82,	// (0x000934c9) main_touch_calib_pane_t1

0x5d9b,	// (0x000934e2) main_touch_calib_pane_t2

0x0004,

0xf75a,	// (0x0009cea1) main_touch_calib_pane_t

0xb6f1,	// (0x00098e38) mup_progress_pane_cp02

0xb726,	// (0x00098e6d) navi_pane_g1

0xb7e1,	// (0x00098f28) navi_pane_mp_t3

0x5273,	// (0x000929ba) main_mp3_pane_ParamLimits

0x53e8,	// (0x00092b2f) navi_pane_ParamLimits

0xded1,	// (0x0009b618) main_mp3_pane_g1_ParamLimits

0x5cae,	// (0x000933f5) main_mp3_pane_g2_ParamLimits

0x5cba,	// (0x00093401) main_mp3_pane_g3_ParamLimits

0x5cba,	// (0x00093401) main_mp3_pane_g3

0x5cc6,	// (0x0009340d) main_mp3_pane_g4_ParamLimits

0x5cc6,	// (0x0009340d) main_mp3_pane_g4

0xdf01,	// (0x0009b648) main_mp3_pane_g5_ParamLimits

0xdf01,	// (0x0009b648) main_mp3_pane_g5

0xdf0f,	// (0x0009b656) main_mp3_pane_g6_ParamLimits

0xdf0f,	// (0x0009b656) main_mp3_pane_g6

0xdf1c,	// (0x0009b663) main_mp3_pane_g7_ParamLimits

0xdf1c,	// (0x0009b663) main_mp3_pane_g7

0xdf28,	// (0x0009b66f) main_mp3_pane_g8_ParamLimits

0xdf28,	// (0x0009b66f) main_mp3_pane_g8

0xf733,	// (0x0009ce7a) main_mp3_pane_g_ParamLimits

0x5cd2,	// (0x00093419) main_mp3_pane_t2

0x5ce2,	// (0x00093429) main_mp3_pane_t3

0xdf42,	// (0x0009b689) main_mp3_pane_t4

0xdf50,	// (0x0009b697) main_mp3_pane_t5

0x0005,

0xf744,	// (0x0009ce8b) main_mp3_pane_t

0xdf5e,	// (0x0009b6a5) mup_progress_pane_cp01

0x1ddd,	// (0x0008f524) aid_zoom_text_secondary2

0xdd18,	// (0x0009b45f) list_cale_ev2_pane

0xdd20,	// (0x0009b467) scroll_pane_cp023_ParamLimits

0x5df6,	// (0x0009353d) field_cale_ev2_pane_ParamLimits

0x5df6,	// (0x0009353d) field_cale_ev2_pane

0x5e1f,	// (0x00093566) field_cale_ev2_pane_g1_ParamLimits

0x5e1f,	// (0x00093566) field_cale_ev2_pane_g1

0x5e2b,	// (0x00093572) field_cale_ev2_pane_g2_ParamLimits

0x5e2b,	// (0x00093572) field_cale_ev2_pane_g2

0x5e43,	// (0x0009358a) field_cale_ev2_pane_g3_ParamLimits

0x5e43,	// (0x0009358a) field_cale_ev2_pane_g3

0x0003,

0xf765,	// (0x0009ceac) field_cale_ev2_pane_g_ParamLimits

0xf765,	// (0x0009ceac) field_cale_ev2_pane_g

0xdf72,	// (0x0009b6b9) field_cale_ev2_pane_t1_ParamLimits

0xdf72,	// (0x0009b6b9) field_cale_ev2_pane_t1

0xdf89,	// (0x0009b6d0) field_cale_ev2_pane_t2_ParamLimits

0xdf89,	// (0x0009b6d0) field_cale_ev2_pane_t2

0x0001,

0xf76e,	// (0x0009ceb5) field_cale_ev2_pane_t_ParamLimits

0xf76e,	// (0x0009ceb5) field_cale_ev2_pane_t

0x4bb7,	// (0x000922fe) main_postcard_pane_g5_ParamLimits

0x4bb7,	// (0x000922fe) main_postcard_pane_g5

0x4bc5,	// (0x0009230c) main_postcard_pane_g6_ParamLimits

0x4bc5,	// (0x0009230c) main_postcard_pane_g6

0x2b2d,	// (0x00090274) camera2_autofocus_pane_cp_ParamLimits

0x2b2d,	// (0x00090274) camera2_autofocus_pane_cp

0x5273,	// (0x000929ba) main_mup3_pane

0x5e5b,	// (0x000935a2) main_mup3_pane_g1_ParamLimits

0x5e5b,	// (0x000935a2) main_mup3_pane_g1

0x5e7c,	// (0x000935c3) main_mup3_pane_g2_ParamLimits

0x5e7c,	// (0x000935c3) main_mup3_pane_g2

0x5ef4,	// (0x0009363b) main_mup3_pane_g3_ParamLimits

0x5ef4,	// (0x0009363b) main_mup3_pane_g3

0x5f37,	// (0x0009367e) main_mup3_pane_g4_ParamLimits

0x5f37,	// (0x0009367e) main_mup3_pane_g4

0x5f7a,	// (0x000936c1) main_mup3_pane_g5_ParamLimits

0x5f7a,	// (0x000936c1) main_mup3_pane_g5

0x5fbd,	// (0x00093704) main_mup3_pane_g6_ParamLimits

0x5fbd,	// (0x00093704) main_mup3_pane_g6

0xdfbe,	// (0x0009b705) main_mup3_pane_g7_ParamLimits

0xdfbe,	// (0x0009b705) main_mup3_pane_g7

0x0007,

0xf77e,	// (0x0009cec5) main_mup3_pane_g_ParamLimits

0xf77e,	// (0x0009cec5) main_mup3_pane_g

0x6033,	// (0x0009377a) main_mup3_pane_t1_ParamLimits

0x6033,	// (0x0009377a) main_mup3_pane_t1

0x60a2,	// (0x000937e9) main_mup3_pane_t2_ParamLimits

0x60a2,	// (0x000937e9) main_mup3_pane_t2

0x616b,	// (0x000938b2) main_mup3_pane_t4_ParamLimits

0x616b,	// (0x000938b2) main_mup3_pane_t4

0x61b9,	// (0x00093900) main_mup3_pane_t5_ParamLimits

0x61b9,	// (0x00093900) main_mup3_pane_t5

0x6269,	// (0x000939b0) main_mup3_pane_t6_ParamLimits

0x6269,	// (0x000939b0) main_mup3_pane_t6

0x0005,

0xf78f,	// (0x0009ced6) main_mup3_pane_t_ParamLimits

0xf78f,	// (0x0009ced6) main_mup3_pane_t

0x6315,	// (0x00093a5c) mup3_progress_pane_ParamLimits

0x6315,	// (0x00093a5c) mup3_progress_pane

0x6393,	// (0x00093ada) popup_mup3_control_window_ParamLimits

0x6393,	// (0x00093ada) popup_mup3_control_window

0xdfcc,	// (0x0009b713) popup_mup3_text_window

0x63ac,	// (0x00093af3) mup3_progress_pane_t1

0x63cb,	// (0x00093b12) mup3_progress_pane_t2

0xdfd4,	// (0x0009b71b) mup3_progress_pane_t3

0x0002,

0xf79c,	// (0x0009cee3) mup3_progress_pane_t

0xdff1,	// (0x0009b738) mup_progress_pane_cp03

0xedcc,	// (0x0009c513) bg_tb_trans_pane_cp04

0x63ea,	// (0x00093b31) mup3_volume_pane

0x63f2,	// (0x00093b39) popup_mup3_control_window_g1

0x63fb,	// (0x00093b42) mup3_volume_pane_g1

0x6404,	// (0x00093b4b) mup3_volume_pane_g2

0x640d,	// (0x00093b54) mup3_volume_pane_g3

0x0002,

0xf7a3,	// (0x0009ceea) mup3_volume_pane_g

0xedcc,	// (0x0009c513) bg_tb_trans_pane_cp03

0xe001,	// (0x0009b748) popup_mup3_text_window_g1

0xe009,	// (0x0009b750) popup_mup3_text_window_t1

0xac71,	// (0x000983b8) list_calc_item_pane_g1_ParamLimits

0xd9e8,	// (0x0009b12f) mup_volume_pane_cp_g1

0x5db4,	// (0x000934fb) main_touch_calib_pane_t3

0x5dca,	// (0x00093511) main_touch_calib_pane_t4

0x5de0,	// (0x00093527) main_touch_calib_pane_t5

0x1d95,	// (0x0008f4dc) aid_cell_size_toolbar2

0x1d9d,	// (0x0008f4e4) aid_popup3_width_pane

0x1ca5,	// (0x0008f3ec) aid_zoom_text_msg_primary

0x2b02,	// (0x00090249) vorec_t7

0xac35,	// (0x0009837c) bg_calc_paper_pane_g1_ParamLimits

0xac41,	// (0x00098388) bg_calc_paper_pane_g2_ParamLimits

0xac4d,	// (0x00098394) bg_calc_paper_pane_g3_ParamLimits

0xac59,	// (0x000983a0) bg_calc_paper_pane_g4_ParamLimits

0xac65,	// (0x000983ac) bg_calc_paper_pane_g5_ParamLimits

0x244e,	// (0x0008fb95) bg_calc_paper_pane_g6_ParamLimits

0x245f,	// (0x0008fba6) bg_calc_paper_pane_g7_ParamLimits

0x2470,	// (0x0008fbb7) bg_calc_paper_pane_g8_ParamLimits

0xf158,	// (0x0009c89f) bg_calc_paper_pane_g_ParamLimits

0x2481,	// (0x0008fbc8) calc_bg_paper_pane_g9_ParamLimits

0x2c14,	// (0x0009035b) image_qvga_pane_ParamLimits

0x2c14,	// (0x0009035b) image_qvga_pane

0xab64,	// (0x000982ab) bg_popup_sub_pane_cp04_ParamLimits

0xba4d,	// (0x00099194) popup_mup_playback_window_g1_ParamLimits

0xba59,	// (0x000991a0) popup_mup_playback_window_t1_ParamLimits

0xba6e,	// (0x000991b5) popup_mup_playback_window_t2_ParamLimits

0xf4e2,	// (0x0009cc29) popup_mup_playback_window_t_ParamLimits

0x58c2,	// (0x00093009) main_mup2_pane_g3_ParamLimits

0x58c2,	// (0x00093009) main_mup2_pane_g3

0x2fc3,	// (0x0009070a) popup_toolbar_window_cp04

0xca36,	// (0x0009a17d) popup_call2_audio_second_window_g3_ParamLimits

0xca36,	// (0x0009a17d) popup_call2_audio_second_window_g3

0xcea1,	// (0x0009a5e8) popup_call2_audio_first_window_g4_ParamLimits

0xcea1,	// (0x0009a5e8) popup_call2_audio_first_window_g4

0xd520,	// (0x0009ac67) popup_call2_audio_in_window_g4_ParamLimits

0xd520,	// (0x0009ac67) popup_call2_audio_in_window_g4

0x4cca,	// (0x00092411) aid_area_sk_bg_cut_ParamLimits

0x4cca,	// (0x00092411) aid_area_sk_bg_cut

0xba83,	// (0x000991ca) aid_area_sk_bg_cut_2_ParamLimits

0xba83,	// (0x000991ca) aid_area_sk_bg_cut_2

0x5c43,	// (0x0009338a) aid_placing_details_win

0x5c4b,	// (0x00093392) aid_placing_details_win_2

0xde13,	// (0x0009b55a) camera2_autofocus_pane_g1_ParamLimits

0x1fec,	// (0x0008f733) popup_fixed_preview_cale_window_ParamLimits

0x1fec,	// (0x0008f733) popup_fixed_preview_cale_window

0xb85f,	// (0x00098fa6) navi_slider_pane_g3

0xb868,	// (0x00098faf) navi_slider_pane_g4

0xb871,	// (0x00098fb8) navi_slider_pane_g5

0xb85f,	// (0x00098fa6) navi_slider_pane_g6

0x4520,	// (0x00091c67) navi_slider_pane_g7

0xb984,	// (0x000990cb) mup_scale_pane_g3

0xb98d,	// (0x000990d4) mup_scale_pane_g4

0xb996,	// (0x000990dd) mup_scale_pane_g5

0x4961,	// (0x000920a8) mup_scale_pane_g6

0x496a,	// (0x000920b1) mup_scale_pane_g7

0xb85f,	// (0x00098fa6) cams2_slider_pane_g3

0xda73,	// (0x0009b1ba) cams2_slider_pane_g4

0x5b9b,	// (0x000932e2) cams2_slider_pane_g5

0xb85f,	// (0x00098fa6) cams2_slider_pane_g6

0x5ba3,	// (0x000932ea) cams2_slider_pane_g7

0xdc9e,	// (0x0009b3e5) camera2_autofocus_pane_cp_g1

0xd881,	// (0x0009afc8) bg_popup_preview_window_pane_cp02_ParamLimits

0xd881,	// (0x0009afc8) bg_popup_preview_window_pane_cp02

0xe017,	// (0x0009b75e) list_fp_cale_pane_ParamLimits

0xe017,	// (0x0009b75e) list_fp_cale_pane

0xe023,	// (0x0009b76a) popup_fixed_preview_cale_window_t1_ParamLimits

0xe023,	// (0x0009b76a) popup_fixed_preview_cale_window_t1

0x6416,	// (0x00093b5d) popup_fixed_preview_cale_window_t2_ParamLimits

0x6416,	// (0x00093b5d) popup_fixed_preview_cale_window_t2

0x642b,	// (0x00093b72) popup_fixed_preview_cale_window_t3_ParamLimits

0x642b,	// (0x00093b72) popup_fixed_preview_cale_window_t3

0x0002,

0xf7aa,	// (0x0009cef1) popup_fixed_preview_cale_window_t_ParamLimits

0xf7aa,	// (0x0009cef1) popup_fixed_preview_cale_window_t

0x6440,	// (0x00093b87) list_single_fp_cale_pane_ParamLimits

0x6440,	// (0x00093b87) list_single_fp_cale_pane

0xe041,	// (0x0009b788) list_single_fp_cale_pane_g1_ParamLimits

0xe041,	// (0x0009b788) list_single_fp_cale_pane_g1

0xe04d,	// (0x0009b794) list_single_fp_cale_pane_g2_ParamLimits

0xe04d,	// (0x0009b794) list_single_fp_cale_pane_g2

0x0002,

0xf7b1,	// (0x0009cef8) list_single_fp_cale_pane_g_ParamLimits

0xf7b1,	// (0x0009cef8) list_single_fp_cale_pane_g

0xe066,	// (0x0009b7ad) list_single_fp_cale_pane_t1_ParamLimits

0xe066,	// (0x0009b7ad) list_single_fp_cale_pane_t1

0xe078,	// (0x0009b7bf) list_single_fp_cale_pane_t2_ParamLimits

0xe078,	// (0x0009b7bf) list_single_fp_cale_pane_t2

0x0001,

0xf7b8,	// (0x0009ceff) list_single_fp_cale_pane_t_ParamLimits

0xf7b8,	// (0x0009ceff) list_single_fp_cale_pane_t

0x0000,

0x0000,

0x0000,

0x0000,

0x2060,	// (0x0008f7a7) main_dialer_pane

0x6453,	// (0x00093b9a) aid_cell_size_keypad

0x645d,	// (0x00093ba4) dialer_ne_pane

0x6467,	// (0x00093bae) grid_dialer_command_1_pane

0x646f,	// (0x00093bb6) grid_dialer_command_2_pane

0x6477,	// (0x00093bbe) grid_dialer_keypad_pane

0x6489,	// (0x00093bd0) bg_popup_call_pane_cp06_ParamLimits

0x6489,	// (0x00093bd0) bg_popup_call_pane_cp06

0x6495,	// (0x00093bdc) dialer_ne_clear_pane_ParamLimits

0x6495,	// (0x00093bdc) dialer_ne_clear_pane

0xe0ab,	// (0x0009b7f2) dialer_ne_pane_g1

0xe0b3,	// (0x0009b7fa) dialer_ne_pane_t1_ParamLimits

0xe0b3,	// (0x0009b7fa) dialer_ne_pane_t1

0x64a1,	// (0x00093be8) dialer_ne_pane_t2_ParamLimits

0x64a1,	// (0x00093be8) dialer_ne_pane_t2

0x64be,	// (0x00093c05) dialer_ne_pane_t3_ParamLimits

0x64be,	// (0x00093c05) dialer_ne_pane_t3

0x0002,

0xf7bd,	// (0x0009cf04) dialer_ne_pane_t_ParamLimits

0xf7bd,	// (0x0009cf04) dialer_ne_pane_t

0x64e2,	// (0x00093c29) dialer_ne_pane_t3_copy1_ParamLimits

0x64e2,	// (0x00093c29) dialer_ne_pane_t3_copy1

0x6506,	// (0x00093c4d) cell_dialer_keypad_pane_ParamLimits

0x6506,	// (0x00093c4d) cell_dialer_keypad_pane

0x651d,	// (0x00093c64) cell_dialer_command_1_pane_ParamLimits

0x651d,	// (0x00093c64) cell_dialer_command_1_pane

0x6533,	// (0x00093c7a) cell_dialer_command_2_pane_ParamLimits

0x6533,	// (0x00093c7a) cell_dialer_command_2_pane

0xe0c5,	// (0x0009b80c) bg_button_pane_cp02_ParamLimits

0xe0c5,	// (0x0009b80c) bg_button_pane_cp02

0x6542,	// (0x00093c89) cell_dialer_keypad_pane_g1_ParamLimits

0x6542,	// (0x00093c89) cell_dialer_keypad_pane_g1

0xe0c5,	// (0x0009b80c) bg_button_pane_cp03_ParamLimits

0xe0c5,	// (0x0009b80c) bg_button_pane_cp03

0x6557,	// (0x00093c9e) cell_dialer_command_1_pane_g1_ParamLimits

0x6557,	// (0x00093c9e) cell_dialer_command_1_pane_g1

0xe0d1,	// (0x0009b818) bg_button_pane_cp04

0x656b,	// (0x00093cb2) cell_dialer_command_2_pane_g1

0xadee,	// (0x00098535) bg_button_pane_cp06

0xe0d9,	// (0x0009b820) dialer_ne_clear_pane_g1

0xb732,	// (0x00098e79) navi_pane_g2

0xb760,	// (0x00098ea7) navi_pane_g3

0x0002,

0xf3e5,	// (0x0009cb2c) navi_pane_g

0xb7ef,	// (0x00098f36) navi_pane_mv_g2

0xb816,	// (0x00098f5d) navi_pane_mv_g5

0x44eb,	// (0x00091c32) navi_pane_mv_t1

0xac29,	// (0x00098370) main_clock2_pane

0x65ab,	// (0x00093cf2) main_clock2_list_pane_ParamLimits

0x65ab,	// (0x00093cf2) main_clock2_list_pane

0x65d3,	// (0x00093d1a) main_clock2_pane_t1_ParamLimits

0x65d3,	// (0x00093d1a) main_clock2_pane_t1

0x65f5,	// (0x00093d3c) main_clock2_pane_t2_ParamLimits

0x65f5,	// (0x00093d3c) main_clock2_pane_t2

0x0004,

0xf7c9,	// (0x0009cf10) main_clock2_pane_t_ParamLimits

0xf7c9,	// (0x0009cf10) main_clock2_pane_t

0x6650,	// (0x00093d97) popup_clock_analogue_window_cp03_ParamLimits

0x6650,	// (0x00093d97) popup_clock_analogue_window_cp03

0x666e,	// (0x00093db5) popup_clock_digital_window_cp02_ParamLimits

0x666e,	// (0x00093db5) popup_clock_digital_window_cp02

0x66db,	// (0x00093e22) main_clock2_list_single_pane_ParamLimits

0x66db,	// (0x00093e22) main_clock2_list_single_pane

0xadee,	// (0x00098535) list_highlight_pane_cp05

0xe117,	// (0x0009b85e) main_clock2_list_single_pane_t1

0x2fc3,	// (0x0009070a) popup_toolbar_window_cp04_ParamLimits

0x5c6d,	// (0x000933b4) camera2_autofocus_pane_g2_ParamLimits

0x5c6d,	// (0x000933b4) camera2_autofocus_pane_g2

0x5c79,	// (0x000933c0) camera2_autofocus_pane_g3_ParamLimits

0x5c79,	// (0x000933c0) camera2_autofocus_pane_g3

0x5c85,	// (0x000933cc) camera2_autofocus_pane_g4_ParamLimits

0x5c85,	// (0x000933cc) camera2_autofocus_pane_g4

0x5c91,	// (0x000933d8) camera2_autofocus_pane_g5_ParamLimits

0x5c91,	// (0x000933d8) camera2_autofocus_pane_g5

0x0004,

0xf70d,	// (0x0009ce54) camera2_autofocus_pane_g_ParamLimits

0xf70d,	// (0x0009ce54) camera2_autofocus_pane_g

0xdf9e,	// (0x0009b6e5) camera2_autofocus_pane_cp_g2

0xdfa6,	// (0x0009b6ed) camera2_autofocus_pane_cp_g3

0xdfae,	// (0x0009b6f5) camera2_autofocus_pane_cp_g4

0xdfb6,	// (0x0009b6fd) camera2_autofocus_pane_cp_g5

0x0004,

0xf773,	// (0x0009ceba) camera2_autofocus_pane_cp_g

0x6481,	// (0x00093bc8) popup_dialer_spcha_window

0xedcc,	// (0x0009c513) bg_popup_sub_pane_cp07

0xe125,	// (0x0009b86c) list_spcha_pane

0xe12d,	// (0x0009b874) list_single_spcha_pane_ParamLimits

0xe12d,	// (0x0009b874) list_single_spcha_pane

0xedcc,	// (0x0009c513) list_highlight_pane_cp06

0xe13e,	// (0x0009b885) list_single_spcha_pane_t1

0xd2ca,	// (0x0009aa11) popup_call2_audio_out_window_g4_ParamLimits

0xd2ca,	// (0x0009aa11) popup_call2_audio_out_window_g4

0x2060,	// (0x0008f7a7) main_imed2_pane

0x5311,	// (0x00092a58) popup_imed_adjust2_window

0x5324,	// (0x00092a6b) popup_imed_trans_window_ParamLimits

0x5324,	// (0x00092a6b) popup_imed_trans_window

0xdadc,	// (0x0009b223) popup_blid_sat_info2_window_t1

0xdaea,	// (0x0009b231) popup_blid_sat_info2_window_t2

0x000a,

0xf6a2,	// (0x0009cde9) popup_blid_sat_info2_window_t

0x6784,	// (0x00093ecb) aid_size_cell_colour_35

0x679e,	// (0x00093ee5) aid_size_cell_colour_112

0x67b5,	// (0x00093efc) aid_size_cell_effect

0xcba8,	// (0x0009a2ef) bg_tb_trans_pane_cp02

0xcbb6,	// (0x0009a2fd) heading_imed_pane

0x67cf,	// (0x00093f16) listscroll_imed_pane

0xe14c,	// (0x0009b893) heading_imed_pane_g1

0xe154,	// (0x0009b89b) heading_imed_pane_t1

0xe162,	// (0x0009b8a9) grid_imed_colour_35_pane_ParamLimits

0xe162,	// (0x0009b8a9) grid_imed_colour_35_pane

0x67db,	// (0x00093f22) grid_imed_effect_pane

0xe179,	// (0x0009b8c0) list_imed_aspect_pane

0x67eb,	// (0x00093f32) scroll_pane_cp027_ParamLimits

0x67eb,	// (0x00093f32) scroll_pane_cp027

0x67f7,	// (0x00093f3e) cell_imed_effect_pane_ParamLimits

0x67f7,	// (0x00093f3e) cell_imed_effect_pane

0xe181,	// (0x0009b8c8) cell_imed_colour_pane_ParamLimits

0xe181,	// (0x0009b8c8) cell_imed_colour_pane

0xe1c3,	// (0x0009b90a) cell_imed_colour_pane_g1_ParamLimits

0xe1c3,	// (0x0009b90a) cell_imed_colour_pane_g1

0xe1d4,	// (0x0009b91b) hgihlgiht_grid_pane_cp016_ParamLimits

0xe1d4,	// (0x0009b91b) hgihlgiht_grid_pane_cp016

0x680f,	// (0x00093f56) cell_imed_effect_pane_g1

0x6817,	// (0x00093f5e) grid_highlight_pane_cp017

0xe1e5,	// (0x0009b92c) list_imed_single_pane_ParamLimits

0xe1e5,	// (0x0009b92c) list_imed_single_pane

0xedcc,	// (0x0009c513) list_highlight_pane_cp07

0xe1fa,	// (0x0009b941) list_imed_aspect_pane_comp1_t1

0xd88d,	// (0x0009afd4) bg_tb_trans_pane_cp05

0xe21c,	// (0x0009b963) popup_imed_adjust2_window_g1

0xe243,	// (0x0009b98a) popup_imed_adjust2_window_t1

0xe25b,	// (0x0009b9a2) slider_imed_adjust_pane

0xe26f,	// (0x0009b9b6) slider_imed_adjust_pane_g1

0xe27f,	// (0x0009b9c6) slider_imed_adjust_pane_g2

0xe28f,	// (0x0009b9d6) slider_imed_adjust_pane_g3

0xe2a0,	// (0x0009b9e7) slider_imed_adjust_pane_g4

0x0003,

0xf7e6,	// (0x0009cf2d) slider_imed_adjust_pane_g

0x6820,	// (0x00093f67) aid_size_cell_clipart2

0x682c,	// (0x00093f73) grid_imed_clipart_pane

0xe2b1,	// (0x0009b9f8) scroll_pane_cp031

0x6836,	// (0x00093f7d) cell_imed_clipart_pane_ParamLimits

0x6836,	// (0x00093f7d) cell_imed_clipart_pane

0x6858,	// (0x00093f9f) cell_imed_clipart_pane_g1

0xedcc,	// (0x0009c513) grid_highlight_pane_cp014

0x65b7,	// (0x00093cfe) main_clock2_pane_g1_ParamLimits

0x65b7,	// (0x00093cfe) main_clock2_pane_g1

0x6686,	// (0x00093dcd) aid_call2_pane_cp10

0x6698,	// (0x00093ddf) aid_call_pane_cp10

0xb693,	// (0x00098dda) popup_clock_analogue_window_cp10_g1

0xb693,	// (0x00098dda) popup_clock_analogue_window_cp10_g2

0x66aa,	// (0x00093df1) popup_clock_analogue_window_cp10_g3

0x66aa,	// (0x00093df1) popup_clock_analogue_window_cp10_g4

0xb693,	// (0x00098dda) popup_clock_analogue_window_cp10_g5

0x0004,

0xf7d4,	// (0x0009cf1b) popup_clock_analogue_window_cp10_g

0x66bc,	// (0x00093e03) popup_clock_analogue_window_cp10_t1

0x66ed,	// (0x00093e34) clock_digital_number_pane_cp10_ParamLimits

0x66ed,	// (0x00093e34) clock_digital_number_pane_cp10

0x6705,	// (0x00093e4c) clock_digital_number_pane_cp11_ParamLimits

0x6705,	// (0x00093e4c) clock_digital_number_pane_cp11

0x671d,	// (0x00093e64) clock_digital_number_pane_cp12_ParamLimits

0x671d,	// (0x00093e64) clock_digital_number_pane_cp12

0x6735,	// (0x00093e7c) clock_digital_number_pane_cp13_ParamLimits

0x6735,	// (0x00093e7c) clock_digital_number_pane_cp13

0x674d,	// (0x00093e94) clock_digital_separator_pane_cp10_ParamLimits

0x674d,	// (0x00093e94) clock_digital_separator_pane_cp10

0x6765,	// (0x00093eac) popup_clock_digital_window_cp02_t1_ParamLimits

0x6765,	// (0x00093eac) popup_clock_digital_window_cp02_t1

0xab5c,	// (0x000982a3) clock_digital_number_pane_cp10_g1

0xab5c,	// (0x000982a3) clock_digital_number_pane_cp10_g2

0x0001,

0xf7ef,	// (0x0009cf36) clock_digital_number_pane_cp10_g

0xab5c,	// (0x000982a3) clock_digital_separator_pane_cp10_g1

0xab5c,	// (0x000982a3) clock_digital_separator_pane_g2_cp10

0xb81e,	// (0x00098f65) navi_pane_vded_g4

0xb827,	// (0x00098f6e) navi_pane_vded_g5

0xb830,	// (0x00098f77) navi_pane_vded_t1

0x2060,	// (0x0008f7a7) main_vded_pane

0x6861,	// (0x00093fa8) main_vded_pane_g1

0x686d,	// (0x00093fb4) main_vded_pane_g2

0x6877,	// (0x00093fbe) main_vded_pane_g3

0x0002,

0xf7f4,	// (0x0009cf3b) main_vded_pane_g

0x6881,	// (0x00093fc8) main_vded_pane_t1

0x688f,	// (0x00093fd6) main_vded_pane_t2

0x0001,

0xf7fb,	// (0x0009cf42) main_vded_pane_t

0x689d,	// (0x00093fe4) vded_slider_pane

0x68a7,	// (0x00093fee) vded_video_pane

0xe2b9,	// (0x0009ba00) vded_video_pane_g1

0x68b1,	// (0x00093ff8) vded_video_pane_g2

0xdc9e,	// (0x0009b3e5) vded_video_pane_g3

0x0002,

0xf800,	// (0x0009cf47) vded_video_pane_g

0xe2c3,	// (0x0009ba0a) vded_slider_pane_g1

0xd9e8,	// (0x0009b12f) vded_slider_pane_g2

0xe2cc,	// (0x0009ba13) vded_slider_pane_g3

0xe2d5,	// (0x0009ba1c) vded_slider_pane_g4

0xe2de,	// (0x0009ba25) vded_slider_pane_g5

0x0004,

0xf807,	// (0x0009cf4e) vded_slider_pane_g

0x6385,	// (0x00093acc) mup3_rocker_pane_ParamLimits

0x6385,	// (0x00093acc) mup3_rocker_pane

0x68ba,	// (0x00094001) mup3_control_keys_pane_g1

0x68c2,	// (0x00094009) mup3_control_keys_pane_g2

0x68ca,	// (0x00094011) mup3_control_keys_pane_g3

0x68d2,	// (0x00094019) mup3_control_keys_pane_g4

0x0003,

0xf812,	// (0x0009cf59) mup3_control_keys_pane_g

0x2014,	// (0x0008f75b) popup_toolbar2_fixed_window_cp01_ParamLimits

0x2014,	// (0x0008f75b) popup_toolbar2_fixed_window_cp01

0x639f,	// (0x00093ae6) popup_toolbar2_fixed_window_cp02_ParamLimits

0x639f,	// (0x00093ae6) popup_toolbar2_fixed_window_cp02

0xcc09,	// (0x0009a350) popup_call2_audio_second_window_t4_ParamLimits

0xcc09,	// (0x0009a350) popup_call2_audio_second_window_t4

0xd137,	// (0x0009a87e) popup_call2_audio_first_window_t6_ParamLimits

0xd137,	// (0x0009a87e) popup_call2_audio_first_window_t6

0xd3cd,	// (0x0009ab14) popup_call2_audio_out_window_t6_ParamLimits

0xd3cd,	// (0x0009ab14) popup_call2_audio_out_window_t6

0x2060,	// (0x0008f7a7) main_vitu_pane

0x68e2,	// (0x00094029) aid_size_cell_itu_ParamLimits

0x68e2,	// (0x00094029) aid_size_cell_itu

0x0939,	// (0x0008e080) bg_popup_window_pane_cp08_ParamLimits

0x0939,	// (0x0008e080) bg_popup_window_pane_cp08

0x68f0,	// (0x00094037) field_vitu_entry_pane_ParamLimits

0x68f0,	// (0x00094037) field_vitu_entry_pane

0x68ff,	// (0x00094046) grid_vitu_function_pane_ParamLimits

0x68ff,	// (0x00094046) grid_vitu_function_pane

0x690f,	// (0x00094056) grid_vitu_itu_pane_ParamLimits

0x690f,	// (0x00094056) grid_vitu_itu_pane

0x691f,	// (0x00094066) cell_vitu_itu_pane_ParamLimits

0x691f,	// (0x00094066) cell_vitu_itu_pane

0x6934,	// (0x0009407b) cell_vitu_function_pane_ParamLimits

0x6934,	// (0x0009407b) cell_vitu_function_pane

0xcba8,	// (0x0009a2ef) bg_popup_sub_pane_cp08_ParamLimits

0xcba8,	// (0x0009a2ef) bg_popup_sub_pane_cp08

0x6946,	// (0x0009408d) field_vitu_entry_pane_t1_ParamLimits

0x6946,	// (0x0009408d) field_vitu_entry_pane_t1

0xe2ff,	// (0x0009ba46) field_vitu_entry_pane_t2_ParamLimits

0xe2ff,	// (0x0009ba46) field_vitu_entry_pane_t2

0x0001,

0xf820,	// (0x0009cf67) field_vitu_entry_pane_t_ParamLimits

0xf820,	// (0x0009cf67) field_vitu_entry_pane_t

0xe31c,	// (0x0009ba63) bg_button_pane_cp05_ParamLimits

0xe31c,	// (0x0009ba63) bg_button_pane_cp05

0x6962,	// (0x000940a9) cell_vitu_itu_pane_g1

0x697a,	// (0x000940c1) cell_vitu_itu_pane_t1_ParamLimits

0x697a,	// (0x000940c1) cell_vitu_itu_pane_t1

0x698c,	// (0x000940d3) cell_vitu_itu_pane_t2_ParamLimits

0x698c,	// (0x000940d3) cell_vitu_itu_pane_t2

0x0002,

0xf825,	// (0x0009cf6c) cell_vitu_itu_pane_t_ParamLimits

0xf825,	// (0x0009cf6c) cell_vitu_itu_pane_t

0xe32a,	// (0x0009ba71) bg_button_pane_cp07

0x69c1,	// (0x00094108) cell_vitu_function_pane_g1

0x22f2,	// (0x0008fa39) main_calc_pane_g1

0x1dd1,	// (0x0008f518) aid_visual_content_pane

0x2060,	// (0x0008f7a7) main_vradio_pane

0x69ca,	// (0x00094111) main_vradio_pane_g1_ParamLimits

0x69ca,	// (0x00094111) main_vradio_pane_g1

0xe334,	// (0x0009ba7b) main_vradio_pane_g2_ParamLimits

0xe334,	// (0x0009ba7b) main_vradio_pane_g2

0x0001,

0xf82c,	// (0x0009cf73) main_vradio_pane_g_ParamLimits

0xf82c,	// (0x0009cf73) main_vradio_pane_g

0x69da,	// (0x00094121) main_vradio_pane_t1_ParamLimits

0x69da,	// (0x00094121) main_vradio_pane_t1

0x69ec,	// (0x00094133) main_vradio_pane_t2_ParamLimits

0x69ec,	// (0x00094133) main_vradio_pane_t2

0xe341,	// (0x0009ba88) main_vradio_pane_t3_ParamLimits

0xe341,	// (0x0009ba88) main_vradio_pane_t3

0x0002,

0xf831,	// (0x0009cf78) main_vradio_pane_t_ParamLimits

0xf831,	// (0x0009cf78) main_vradio_pane_t

0x69fe,	// (0x00094145) vradio_rocker_control_pane_ParamLimits

0x69fe,	// (0x00094145) vradio_rocker_control_pane

0x6a0a,	// (0x00094151) vradio_station_info_pane_ParamLimits

0x6a0a,	// (0x00094151) vradio_station_info_pane

0xe355,	// (0x0009ba9c) vradio_frequency_info_pane_ParamLimits

0xe355,	// (0x0009ba9c) vradio_frequency_info_pane

0xdc9e,	// (0x0009b3e5) vradio_station_info_pane_g1

0xe364,	// (0x0009baab) vradio_station_info_pane_t1_ParamLimits

0xe364,	// (0x0009baab) vradio_station_info_pane_t1

0xe386,	// (0x0009bacd) vradio_station_info_pane_t2_ParamLimits

0xe386,	// (0x0009bacd) vradio_station_info_pane_t2

0x0001,

0xf838,	// (0x0009cf7f) vradio_station_info_pane_t_ParamLimits

0xf838,	// (0x0009cf7f) vradio_station_info_pane_t

0xe398,	// (0x0009badf) vradio_tuning_pane

0xe3a0,	// (0x0009bae7) vradio_rocker_control_pane_g1

0xe3a8,	// (0x0009baef) vradio_rocker_control_pane_g2

0xe3b0,	// (0x0009baf7) vradio_rocker_control_pane_g3

0xe3b8,	// (0x0009baff) vradio_rocker_control_pane_g4

0xe3c0,	// (0x0009bb07) vradio_rocker_control_pane_g5

0x0004,

0xf83d,	// (0x0009cf84) vradio_rocker_control_pane_g

0x6a19,	// (0x00094160) vradio_frequency_info_pane_g1

0xe3c8,	// (0x0009bb0f) vradio_frequency_info_pane_t1_ParamLimits

0xe3c8,	// (0x0009bb0f) vradio_frequency_info_pane_t1

0x6a23,	// (0x0009416a) vradio_tuning_pane_g1

0x6a2c,	// (0x00094173) vradio_tuning_pane_t1

0x1e1a,	// (0x0008f561) area_side_right_pane_ParamLimits

0x1e1a,	// (0x0008f561) area_side_right_pane

0xd848,	// (0x0009af8f) status_small_pane_g1

0xd850,	// (0x0009af97) status_small_pane_g2

0xd859,	// (0x0009afa0) status_small_pane_g3

0xd862,	// (0x0009afa9) status_small_pane_g4

0x0003,

0xf5f8,	// (0x0009cd3f) status_small_pane_g

0xd86b,	// (0x0009afb2) status_small_pane_t1

0x2060,	// (0x0008f7a7) main_video3_pane

0xe3dc,	// (0x0009bb23) cams_zoom_vslider_pane

0xe3e4,	// (0x0009bb2b) image3_wide_pane_ParamLimits

0xe3e4,	// (0x0009bb2b) image3_wide_pane

0xe3fe,	// (0x0009bb45) image3_wide_small_pane

0xe40a,	// (0x0009bb51) main_video3_pane_g1_ParamLimits

0xe40a,	// (0x0009bb51) main_video3_pane_g1

0xe426,	// (0x0009bb6d) main_video3_pane_g2_ParamLimits

0xe426,	// (0x0009bb6d) main_video3_pane_g2

0x0001,

0xf848,	// (0x0009cf8f) main_video3_pane_g_ParamLimits

0xf848,	// (0x0009cf8f) main_video3_pane_g

0xe442,	// (0x0009bb89) main_video3_pane_t1_ParamLimits

0xe442,	// (0x0009bb89) main_video3_pane_t1

0xe46d,	// (0x0009bbb4) main_video3_pane_t2_ParamLimits

0xe46d,	// (0x0009bbb4) main_video3_pane_t2

0xe498,	// (0x0009bbdf) main_video3_pane_t3_ParamLimits

0xe498,	// (0x0009bbdf) main_video3_pane_t3

0x0002,

0xf84d,	// (0x0009cf94) main_video3_pane_t_ParamLimits

0xf84d,	// (0x0009cf94) main_video3_pane_t

0xe4c5,	// (0x0009bc0c) cams_zoom_vslider_pane_g1

0xe4ce,	// (0x0009bc15) cams_zoom_vslider_pane_g2

0x0001,

0xf854,	// (0x0009cf9b) cams_zoom_vslider_pane_g

0xe4d6,	// (0x0009bc1d) small_slider_vertical_pane

0xdc9e,	// (0x0009b3e5) small_slider_vertical_pane_g1

0xdc9e,	// (0x0009b3e5) small_slider_vertical_pane_g2

0xe4de,	// (0x0009bc25) small_slider_vertical_pane_g3

0x0002,

0xf859,	// (0x0009cfa0) small_slider_vertical_pane_g

0x2060,	// (0x0008f7a7) main_hwr_training_pane

0xe4e7,	// (0x0009bc2e) hwr_training_instruct_pane_ParamLimits

0xe4e7,	// (0x0009bc2e) hwr_training_instruct_pane

0x6a3b,	// (0x00094182) hwr_training_navi_pane_ParamLimits

0x6a3b,	// (0x00094182) hwr_training_navi_pane

0x6a55,	// (0x0009419c) hwr_training_write_pane_ParamLimits

0x6a55,	// (0x0009419c) hwr_training_write_pane

0xedcc,	// (0x0009c513) bg_frame_shadow_pane

0xe51e,	// (0x0009bc65) hwr_training_write_pane_g1

0xe526,	// (0x0009bc6d) hwr_training_write_pane_g2

0xe52e,	// (0x0009bc75) hwr_training_write_pane_g3

0xe536,	// (0x0009bc7d) hwr_training_write_pane_g4

0xe53e,	// (0x0009bc85) hwr_training_write_pane_g5

0xe546,	// (0x0009bc8d) hwr_training_write_pane_g6

0xe54e,	// (0x0009bc95) hwr_training_write_pane_g7

0x0006,

0xf860,	// (0x0009cfa7) hwr_training_write_pane_g

0x6a8d,	// (0x000941d4) hwr_training_navi_pane_g1_ParamLimits

0x6a8d,	// (0x000941d4) hwr_training_navi_pane_g1

0x6a9f,	// (0x000941e6) hwr_training_navi_pane_g2_ParamLimits

0x6a9f,	// (0x000941e6) hwr_training_navi_pane_g2

0x6ab1,	// (0x000941f8) hwr_training_navi_pane_g3_ParamLimits

0x6ab1,	// (0x000941f8) hwr_training_navi_pane_g3

0x6ac1,	// (0x00094208) hwr_training_navi_pane_g4_ParamLimits

0x6ac1,	// (0x00094208) hwr_training_navi_pane_g4

0x0004,

0xf86f,	// (0x0009cfb6) hwr_training_navi_pane_g_ParamLimits

0xf86f,	// (0x0009cfb6) hwr_training_navi_pane_g

0x6adb,	// (0x00094222) hwr_training_navi_pane_t1

0x6ae9,	// (0x00094230) list_single_hwr_training_instruct_pane_ParamLimits

0x6ae9,	// (0x00094230) list_single_hwr_training_instruct_pane

0xe556,	// (0x0009bc9d) list_single_hwr_training_instruct_pane_t1

0xdbde,	// (0x0009b325) bg_frame_shadow_pane_g1

0xe565,	// (0x0009bcac) bg_frame_shadow_pane_g2

0xe56d,	// (0x0009bcb4) bg_frame_shadow_pane_g3

0xe575,	// (0x0009bcbc) bg_frame_shadow_pane_g4

0xe57d,	// (0x0009bcc4) bg_frame_shadow_pane_g5

0xe585,	// (0x0009bccc) bg_frame_shadow_pane_g6

0xe58d,	// (0x0009bcd4) bg_frame_shadow_pane_g7

0xace2,	// (0x00098429) bg_frame_shadow_pane_g8

0x0007,

0xf87a,	// (0x0009cfc1) bg_frame_shadow_pane_g

0x2060,	// (0x0008f7a7) main_video_tele_dialer_pane

0x6b0e,	// (0x00094255) aid_size_cell_video_keypad_ParamLimits

0x6b0e,	// (0x00094255) aid_size_cell_video_keypad

0x6b1e,	// (0x00094265) grid_video_dialer_keypad_pane_ParamLimits

0x6b1e,	// (0x00094265) grid_video_dialer_keypad_pane

0x6b52,	// (0x00094299) video_down_pane_cp_ParamLimits

0x6b52,	// (0x00094299) video_down_pane_cp

0x6b7c,	// (0x000942c3) cell_video_dialer_keypad_pane_ParamLimits

0x6b7c,	// (0x000942c3) cell_video_dialer_keypad_pane

0xe595,	// (0x0009bcdc) bg_button_pane_cp08_ParamLimits

0xe595,	// (0x0009bcdc) bg_button_pane_cp08

0x6b91,	// (0x000942d8) cell_video_dialer_keypad_pane_g1_ParamLimits

0x6b91,	// (0x000942d8) cell_video_dialer_keypad_pane_g1

0x6379,	// (0x00093ac0) mup3_rocker2_pane_ParamLimits

0x6379,	// (0x00093ac0) mup3_rocker2_pane

0xdc9e,	// (0x0009b3e5) mup3_rocker2_pane_g1

0x5281,	// (0x000929c8) main_dialer2_pane

0x2060,	// (0x0008f7a7) main_mp4_pane

0x6bd0,	// (0x00094317) main_mp4_pane_g1_ParamLimits

0x6bd0,	// (0x00094317) main_mp4_pane_g1

0x6bde,	// (0x00094325) main_mp4_pane_g2_ParamLimits

0x6bde,	// (0x00094325) main_mp4_pane_g2

0x6bec,	// (0x00094333) main_mp4_pane_g3_ParamLimits

0x6bec,	// (0x00094333) main_mp4_pane_g3

0x6c31,	// (0x00094378) main_mp4_pane_g4_ParamLimits

0x6c31,	// (0x00094378) main_mp4_pane_g4

0x6c59,	// (0x000943a0) main_mp4_pane_g5_ParamLimits

0x6c59,	// (0x000943a0) main_mp4_pane_g5

0x0005,

0xf89a,	// (0x0009cfe1) main_mp4_pane_g_ParamLimits

0xf89a,	// (0x0009cfe1) main_mp4_pane_g

0x6ca9,	// (0x000943f0) main_mp4_pane_t1_ParamLimits

0x6ca9,	// (0x000943f0) main_mp4_pane_t1

0x6d05,	// (0x0009444c) main_mp4_pane_t2_ParamLimits

0x6d05,	// (0x0009444c) main_mp4_pane_t2

0xe5a1,	// (0x0009bce8) main_mp4_pane_t3_ParamLimits

0xe5a1,	// (0x0009bce8) main_mp4_pane_t3

0x6d57,	// (0x0009449e) main_mp4_pane_t4_ParamLimits

0x6d57,	// (0x0009449e) main_mp4_pane_t4

0x0003,

0xf8a7,	// (0x0009cfee) main_mp4_pane_t_ParamLimits

0xf8a7,	// (0x0009cfee) main_mp4_pane_t

0x6d9b,	// (0x000944e2) mp4_progress_pane_ParamLimits

0x6d9b,	// (0x000944e2) mp4_progress_pane

0x6de5,	// (0x0009452c) mp4_rocker_pane_ParamLimits

0x6de5,	// (0x0009452c) mp4_rocker_pane

0xe5c9,	// (0x0009bd10) mp4_progress_pane_t1

0xe5e2,	// (0x0009bd29) mp4_progress_pane_t2

0x0001,

0xf8b0,	// (0x0009cff7) mp4_progress_pane_t

0xe5fb,	// (0x0009bd42) mup_progress_pane_cp04

0x01b2,	// (0x0008d8f9) mp4_rocker_pane_g1

0x6e05,	// (0x0009454c) aid_cell_size_keypad2_ParamLimits

0x6e05,	// (0x0009454c) aid_cell_size_keypad2

0x6e15,	// (0x0009455c) dialer2_ne_pane_ParamLimits

0x6e15,	// (0x0009455c) dialer2_ne_pane

0x6e23,	// (0x0009456a) grid_dialer2_keypad_pane_ParamLimits

0x6e23,	// (0x0009456a) grid_dialer2_keypad_pane

0x021b,	// (0x0008d962) bg_popup_call_pane_cp07_ParamLimits

0x021b,	// (0x0008d962) bg_popup_call_pane_cp07

0x6e33,	// (0x0009457a) dialer2_ne_pane_t1_ParamLimits

0x6e33,	// (0x0009457a) dialer2_ne_pane_t1

0x6e58,	// (0x0009459f) cell_dialer2_keypad_pane_ParamLimits

0x6e58,	// (0x0009459f) cell_dialer2_keypad_pane

0xe619,	// (0x0009bd60) bg_button_pane_pane_cp04_ParamLimits

0xe619,	// (0x0009bd60) bg_button_pane_pane_cp04

0x6e6d,	// (0x000945b4) cell_dialer2_keypad_pane_g1_ParamLimits

0x6e6d,	// (0x000945b4) cell_dialer2_keypad_pane_g1

0x2e85,	// (0x000905cc) aid_placing_vt_set_content_ParamLimits

0x2e85,	// (0x000905cc) aid_placing_vt_set_content

0x2eb1,	// (0x000905f8) aid_placing_vt_set_title_ParamLimits

0x2eb1,	// (0x000905f8) aid_placing_vt_set_title

0x2060,	// (0x0008f7a7) main_image3_pane

0x6f07,	// (0x0009464e) area_side_right_pane_cp01_ParamLimits

0x6f07,	// (0x0009464e) area_side_right_pane_cp01

0x6f34,	// (0x0009467b) main_image3_pane_g1_ParamLimits

0x6f34,	// (0x0009467b) main_image3_pane_g1

0x6f42,	// (0x00094689) main_image3_pane_g2_ParamLimits

0x6f42,	// (0x00094689) main_image3_pane_g2

0x6f5b,	// (0x000946a2) main_image3_pane_g3_ParamLimits

0x6f5b,	// (0x000946a2) main_image3_pane_g3

0x6f74,	// (0x000946bb) main_image3_pane_g4_ParamLimits

0x6f74,	// (0x000946bb) main_image3_pane_g4

0x0003,

0xf8bf,	// (0x0009d006) main_image3_pane_g_ParamLimits

0xf8bf,	// (0x0009d006) main_image3_pane_g

0x6f8d,	// (0x000946d4) main_image3_pane_t1_ParamLimits

0x6f8d,	// (0x000946d4) main_image3_pane_t1

0x6fb2,	// (0x000946f9) main_image3_pane_t2_ParamLimits

0x6fb2,	// (0x000946f9) main_image3_pane_t2

0x6fd1,	// (0x00094718) main_image3_pane_t3_ParamLimits

0x6fd1,	// (0x00094718) main_image3_pane_t3

0x0003,

0xf8c8,	// (0x0009d00f) main_image3_pane_t_ParamLimits

0xf8c8,	// (0x0009d00f) main_image3_pane_t

0x0939,	// (0x0008e080) grid_sctrl_middle_pane_cp01_ParamLimits

0x0939,	// (0x0008e080) grid_sctrl_middle_pane_cp01

0x7032,	// (0x00094779) cell_sctrl_middle_pane_cp01_ParamLimits

0x7032,	// (0x00094779) cell_sctrl_middle_pane_cp01

0x7043,	// (0x0009478a) cell_sctrl_middle_pane_cp01_g1_ParamLimits

0x7043,	// (0x0009478a) cell_sctrl_middle_pane_cp01_g1

0x2060,	// (0x0008f7a7) main_call4_pane

0x7050,	// (0x00094797) aid_size_button_call4_ParamLimits

0x7050,	// (0x00094797) aid_size_button_call4

0x7080,	// (0x000947c7) call4_windows_pane_ParamLimits

0x7080,	// (0x000947c7) call4_windows_pane

0x709a,	// (0x000947e1) grid_call4_button_pane_ParamLimits

0x709a,	// (0x000947e1) grid_call4_button_pane

0xe625,	// (0x0009bd6c) call4_windows_conf_pane

0xe63c,	// (0x0009bd83) popup_call4_audio_first_window_ParamLimits

0xe63c,	// (0x0009bd83) popup_call4_audio_first_window

0xe688,	// (0x0009bdcf) popup_call4_audio_second_window_ParamLimits

0xe688,	// (0x0009bdcf) popup_call4_audio_second_window

0xe69c,	// (0x0009bde3) popup_call4_audio_wait_window_ParamLimits

0xe69c,	// (0x0009bde3) popup_call4_audio_wait_window

0x70be,	// (0x00094805) cell_call4_button_pane_ParamLimits

0x70be,	// (0x00094805) cell_call4_button_pane

0x70e3,	// (0x0009482a) bg_button_pane_cp09_ParamLimits

0x70e3,	// (0x0009482a) bg_button_pane_cp09

0x70ef,	// (0x00094836) cell_call4_button_pane_g1_ParamLimits

0x70ef,	// (0x00094836) cell_call4_button_pane_g1

0x70fc,	// (0x00094843) cell_call4_button_pane_t1_ParamLimits

0x70fc,	// (0x00094843) cell_call4_button_pane_t1

0xe6e4,	// (0x0009be2b) popup_call4_audio_conf_window_ParamLimits

0xe6e4,	// (0x0009be2b) popup_call4_audio_conf_window

0x63ac,	// (0x00093af3) mup3_progress_pane_t1_ParamLimits

0x63cb,	// (0x00093b12) mup3_progress_pane_t2_ParamLimits

0xdfd4,	// (0x0009b71b) mup3_progress_pane_t3_ParamLimits

0xf79c,	// (0x0009cee3) mup3_progress_pane_t_ParamLimits

0xdff1,	// (0x0009b738) mup_progress_pane_cp03_ParamLimits

0x68da,	// (0x00094021) mup3_control_keys_pane_g4_copy1

0x6dc9,	// (0x00094510) mp4_rocker2_pane_ParamLimits

0x6dc9,	// (0x00094510) mp4_rocker2_pane

0xe6f8,	// (0x0009be3f) mp4_rocker2_pane_g1

0xe700,	// (0x0009be47) mp4_rocker2_pane_g2

0x710e,	// (0x00094855) mp4_rocker2_pane_g3

0x7116,	// (0x0009485d) mp4_rocker2_pane_g4

0x711e,	// (0x00094865) mp4_rocker2_pane_g5

0x0004,

0xf8d1,	// (0x0009d018) mp4_rocker2_pane_g

0x2060,	// (0x0008f7a7) main_camera4_pane

0x2060,	// (0x0008f7a7) main_video4_pane

0x6b2e,	// (0x00094275) main_video_tele_dialer_pane_t1_ParamLimits

0x6b2e,	// (0x00094275) main_video_tele_dialer_pane_t1

0x6b40,	// (0x00094287) main_video_tele_dialer_pane_t2_ParamLimits

0x6b40,	// (0x00094287) main_video_tele_dialer_pane_t2

0x0001,

0xf88b,	// (0x0009cfd2) main_video_tele_dialer_pane_t_ParamLimits

0xf88b,	// (0x0009cfd2) main_video_tele_dialer_pane_t

0x713e,	// (0x00094885) cam4_autofocus_pane_ParamLimits

0x713e,	// (0x00094885) cam4_autofocus_pane

0x7158,	// (0x0009489f) cam4_image_uncrop_pane_ParamLimits

0x7158,	// (0x0009489f) cam4_image_uncrop_pane

0x716f,	// (0x000948b6) cam4_indicators_pane_ParamLimits

0x716f,	// (0x000948b6) cam4_indicators_pane

0x718b,	// (0x000948d2) main_camera4_pane_g1_ParamLimits

0x718b,	// (0x000948d2) main_camera4_pane_g1

0x7197,	// (0x000948de) main_camera4_pane_g2_ParamLimits

0x7197,	// (0x000948de) main_camera4_pane_g2

0x7197,	// (0x000948de) main_camera4_pane_g3_ParamLimits

0x7197,	// (0x000948de) main_camera4_pane_g3

0x71a3,	// (0x000948ea) main_camera4_pane_g4_ParamLimits

0x71a3,	// (0x000948ea) main_camera4_pane_g4

0x71af,	// (0x000948f6) main_camera4_pane_g5_ParamLimits

0x71af,	// (0x000948f6) main_camera4_pane_g5

0x0005,

0xf8dc,	// (0x0009d023) main_camera4_pane_g_ParamLimits

0xf8dc,	// (0x0009d023) main_camera4_pane_g

0x71c9,	// (0x00094910) main_camera4_pane_t1_ParamLimits

0x71c9,	// (0x00094910) main_camera4_pane_t1

0x7211,	// (0x00094958) bg_tb_trans_pane_cp06

0x7227,	// (0x0009496e) cam4_indicators_pane_g1

0x7238,	// (0x0009497f) cam4_indicators_pane_g2

0x0002,

0xf8f7,	// (0x0009d03e) cam4_indicators_pane_g

0x7256,	// (0x0009499d) cam4_indicators_pane_t1

0x7280,	// (0x000949c7) main_video4_pane_g1_ParamLimits

0x7280,	// (0x000949c7) main_video4_pane_g1

0x728c,	// (0x000949d3) main_video4_pane_g2_ParamLimits

0x728c,	// (0x000949d3) main_video4_pane_g2

0x7298,	// (0x000949df) main_video4_pane_g3_ParamLimits

0x7298,	// (0x000949df) main_video4_pane_g3

0x72a4,	// (0x000949eb) main_video4_pane_g4_ParamLimits

0x72a4,	// (0x000949eb) main_video4_pane_g4

0x0004,

0xf8fe,	// (0x0009d045) main_video4_pane_g_ParamLimits

0xf8fe,	// (0x0009d045) main_video4_pane_g

0x72c4,	// (0x00094a0b) vid4_indicators_pane_ParamLimits

0x72c4,	// (0x00094a0b) vid4_indicators_pane

0x72e3,	// (0x00094a2a) video4_image_uncrop_cif_pane_ParamLimits

0x72e3,	// (0x00094a2a) video4_image_uncrop_cif_pane

0x72f2,	// (0x00094a39) video4_image_uncrop_nhd_pane_ParamLimits

0x72f2,	// (0x00094a39) video4_image_uncrop_nhd_pane

0x7158,	// (0x0009489f) video4_image_uncrop_vga_pane_ParamLimits

0x7158,	// (0x0009489f) video4_image_uncrop_vga_pane

0x5273,	// (0x000929ba) bg_tb_trans_pane_cp07

0x7309,	// (0x00094a50) vid4_indicators_pane_g1

0x731d,	// (0x00094a64) vid4_indicators_pane_g2

0x7331,	// (0x00094a78) vid4_indicators_pane_g3

0x0004,

0xf909,	// (0x0009d050) vid4_indicators_pane_g

0x7360,	// (0x00094aa7) vid4_indicators_pane_t1

0x7377,	// (0x00094abe) cam4_autofocus_pane_g1

0x737f,	// (0x00094ac6) cam4_autofocus_pane_g2

0x7387,	// (0x00094ace) cam4_autofocus_pane_g3

0x0002,

0xf914,	// (0x0009d05b) cam4_autofocus_pane_g

0x738f,	// (0x00094ad6) cam4_autofocus_pane_g3_copy1

0x6b60,	// (0x000942a7) video_down_pane_cp_t1

0x6b6e,	// (0x000942b5) video_down_pane_cp_t2

0x0001,

0xf890,	// (0x0009cfd7) video_down_pane_cp_t

0x2046,	// (0x0008f78d) popup_vitu2_window_ParamLimits

0x2046,	// (0x0008f78d) popup_vitu2_window

0x7397,	// (0x00094ade) aid_size_cell2_itu2_ParamLimits

0x7397,	// (0x00094ade) aid_size_cell2_itu2

0x73b9,	// (0x00094b00) aid_size_cell_itu2_ParamLimits

0x73b9,	// (0x00094b00) aid_size_cell_itu2

0x73fd,	// (0x00094b44) bg_popup_window_pane_cp09_ParamLimits

0x73fd,	// (0x00094b44) bg_popup_window_pane_cp09

0x740b,	// (0x00094b52) field_vitu2_entry_pane_ParamLimits

0x740b,	// (0x00094b52) field_vitu2_entry_pane

0x742b,	// (0x00094b72) grid_vitu2_function_pane_ParamLimits

0x742b,	// (0x00094b72) grid_vitu2_function_pane

0x746f,	// (0x00094bb6) grid_vitu2_itu_pane_ParamLimits

0x746f,	// (0x00094bb6) grid_vitu2_itu_pane

0x74eb,	// (0x00094c32) cell_vitu2_itu_pane_ParamLimits

0x74eb,	// (0x00094c32) cell_vitu2_itu_pane

0x7504,	// (0x00094c4b) cell_vitu2_function_pane_ParamLimits

0x7504,	// (0x00094c4b) cell_vitu2_function_pane

0xe708,	// (0x0009be4f) bg_popup_call_pane_cp08_ParamLimits

0xe708,	// (0x0009be4f) bg_popup_call_pane_cp08

0xe71f,	// (0x0009be66) field_vitu2_entry_pane_g1

0xe72b,	// (0x0009be72) field_vitu2_entry_pane_g2

0x0002,

0xf91b,	// (0x0009d062) field_vitu2_entry_pane_g

0x7545,	// (0x00094c8c) field_vitu2_entry_pane_t1_ParamLimits

0x7545,	// (0x00094c8c) field_vitu2_entry_pane_t1

0xe745,	// (0x0009be8c) field_vitu2_entry_pane_t2_ParamLimits

0xe745,	// (0x0009be8c) field_vitu2_entry_pane_t2

0x0001,

0xf922,	// (0x0009d069) field_vitu2_entry_pane_t_ParamLimits

0xf922,	// (0x0009d069) field_vitu2_entry_pane_t

0x7575,	// (0x00094cbc) bg_button_pane_cp010_ParamLimits

0x7575,	// (0x00094cbc) bg_button_pane_cp010

0x7583,	// (0x00094cca) cell_vitu2_itu_pane_g1

0x75a3,	// (0x00094cea) cell_vitu2_itu_pane_t1_ParamLimits

0x75a3,	// (0x00094cea) cell_vitu2_itu_pane_t1

0x1cb5,	// (0x0008f3fc) cell_vitu2_itu_pane_t2_ParamLimits

0x1cb5,	// (0x0008f3fc) cell_vitu2_itu_pane_t2

0x0002,

0xf92c,	// (0x0009d073) cell_vitu2_itu_pane_t_ParamLimits

0xf92c,	// (0x0009d073) cell_vitu2_itu_pane_t

0x5273,	// (0x000929ba) bg_button_pane_cp011

0x75ef,	// (0x00094d36) cell_vitu2_function_pane_g1

0x2060,	// (0x0008f7a7) main_myfav_hc_pane

0x7013,	// (0x0009475a) popup_image3_note_pane_ParamLimits

0x7013,	// (0x0009475a) popup_image3_note_pane

0x7021,	// (0x00094768) popup_image3_tool_bar_pane_ParamLimits

0x7021,	// (0x00094768) popup_image3_tool_bar_pane

0x1d2b,	// (0x0008f472) cell_vitu2_itu_pane_t3_ParamLimits

0x1d2b,	// (0x0008f472) cell_vitu2_itu_pane_t3

0xedcc,	// (0x0009c513) bg_popup_trans_pane

0xe76a,	// (0x0009beb1) grid_image3_tool_bar_pane

0xe774,	// (0x0009bebb) bg_popup_trans_pane_g1

0xb047,	// (0x0009878e) bg_popup_trans_pane_g2

0xe77c,	// (0x0009bec3) bg_popup_trans_pane_g3

0xe784,	// (0x0009becb) bg_popup_trans_pane_g4

0xe78c,	// (0x0009bed3) bg_popup_trans_pane_g5

0xe794,	// (0x0009bedb) bg_popup_trans_pane_g6

0xe79c,	// (0x0009bee3) bg_popup_trans_pane_g7

0xe7a4,	// (0x0009beeb) bg_popup_trans_pane_g8

0xb027,	// (0x0009876e) bg_popup_trans_pane_g9

0x0008,

0xf933,	// (0x0009d07a) bg_popup_trans_pane_g

0xe7ac,	// (0x0009bef3) cell_image3_tool_bar_pane_ParamLimits

0xe7ac,	// (0x0009bef3) cell_image3_tool_bar_pane

0xdc9e,	// (0x0009b3e5) cell_image3_tool_bar_pane_g1

0xedcc,	// (0x0009c513) bg_popup_trans_pane_cp1

0xe7c0,	// (0x0009bf07) popup_image3_note_pane_t1

0xe7ce,	// (0x0009bf15) popup_image3_note_pane_t2

0xe7dc,	// (0x0009bf23) popup_image3_note_pane_t3

0x0002,

0xf946,	// (0x0009d08d) popup_image3_note_pane_t

0xe7ea,	// (0x0009bf31) popup_image3_note_pane_t3_copy1

0x7603,	// (0x00094d4a) bg_myfav_hc_instruction_pane_ParamLimits

0x7603,	// (0x00094d4a) bg_myfav_hc_instruction_pane

0x761b,	// (0x00094d62) cell_myfav_contact_pane_ParamLimits

0x761b,	// (0x00094d62) cell_myfav_contact_pane

0x7635,	// (0x00094d7c) cell_myfav_contact_pane_cp1_ParamLimits

0x7635,	// (0x00094d7c) cell_myfav_contact_pane_cp1

0x764d,	// (0x00094d94) cell_myfav_contact_pane_cp2_ParamLimits

0x764d,	// (0x00094d94) cell_myfav_contact_pane_cp2

0x7665,	// (0x00094dac) cell_myfav_contact_pane_cp3_ParamLimits

0x7665,	// (0x00094dac) cell_myfav_contact_pane_cp3

0x767c,	// (0x00094dc3) cell_myfav_contact_pane_cp4_ParamLimits

0x767c,	// (0x00094dc3) cell_myfav_contact_pane_cp4

0x7692,	// (0x00094dd9) cell_myfav_contact_pane_cp5_ParamLimits

0x7692,	// (0x00094dd9) cell_myfav_contact_pane_cp5

0x76a6,	// (0x00094ded) cell_myfav_contact_pane_cp6_ParamLimits

0x76a6,	// (0x00094ded) cell_myfav_contact_pane_cp6

0x76ba,	// (0x00094e01) cell_myfav_contact_pane_cp7_ParamLimits

0x76ba,	// (0x00094e01) cell_myfav_contact_pane_cp7

0xe7f8,	// (0x0009bf3f) listscroll_gen_pane_cp05

0x76d2,	// (0x00094e19) main_myfav_hc_pane_g1_ParamLimits

0x76d2,	// (0x00094e19) main_myfav_hc_pane_g1

0x76e8,	// (0x00094e2f) main_myfav_hc_pane_g2_ParamLimits

0x76e8,	// (0x00094e2f) main_myfav_hc_pane_g2

0x0002,

0xf94d,	// (0x0009d094) main_myfav_hc_pane_g_ParamLimits

0xf94d,	// (0x0009d094) main_myfav_hc_pane_g

0x7716,	// (0x00094e5d) main_myfav_hc_pane_t1_ParamLimits

0x7716,	// (0x00094e5d) main_myfav_hc_pane_t1

0xe801,	// (0x0009bf48) main_myfav_hc_pane_t2_ParamLimits

0xe801,	// (0x0009bf48) main_myfav_hc_pane_t2

0xe813,	// (0x0009bf5a) main_myfav_hc_pane_t3_ParamLimits

0xe813,	// (0x0009bf5a) main_myfav_hc_pane_t3

0x772d,	// (0x00094e74) main_myfav_hc_pane_t4_ParamLimits

0x772d,	// (0x00094e74) main_myfav_hc_pane_t4

0x0004,

0xf954,	// (0x0009d09b) main_myfav_hc_pane_t_ParamLimits

0xf954,	// (0x0009d09b) main_myfav_hc_pane_t

0xdc9e,	// (0x0009b3e5) bg_myfav_hc_instruction_pane_g1

0xe825,	// (0x0009bf6c) cell_myfav_contact_pane_g1_ParamLimits

0xe825,	// (0x0009bf6c) cell_myfav_contact_pane_g1

0xe825,	// (0x0009bf6c) cell_myfav_contact_pane_g2_ParamLimits

0xe825,	// (0x0009bf6c) cell_myfav_contact_pane_g2

0xe831,	// (0x0009bf78) cell_myfav_contact_pane_g3_ParamLimits

0xe831,	// (0x0009bf78) cell_myfav_contact_pane_g3

0xdfbe,	// (0x0009b705) cell_myfav_contact_pane_g4_ParamLimits

0xdfbe,	// (0x0009b705) cell_myfav_contact_pane_g4

0xe83e,	// (0x0009bf85) cell_myfav_contact_pane_g5_ParamLimits

0xe83e,	// (0x0009bf85) cell_myfav_contact_pane_g5

0x0004,

0xf95f,	// (0x0009d0a6) cell_myfav_contact_pane_g_ParamLimits

0xf95f,	// (0x0009d0a6) cell_myfav_contact_pane_g

0x76fe,	// (0x00094e45) main_myfav_hc_pane_g3_ParamLimits

0x76fe,	// (0x00094e45) main_myfav_hc_pane_g3

0x1f4f,	// (0x0008f696) popup_adpt_find_window

0x7757,	// (0x00094e9e) afind_page_pane_ParamLimits

0x7757,	// (0x00094e9e) afind_page_pane

0x7764,	// (0x00094eab) aid_size_cell_afind_ParamLimits

0x7764,	// (0x00094eab) aid_size_cell_afind

0x777e,	// (0x00094ec5) bg_popup_sub_pane_cp09_ParamLimits

0x777e,	// (0x00094ec5) bg_popup_sub_pane_cp09

0x778b,	// (0x00094ed2) find_pane_cp01_ParamLimits

0x778b,	// (0x00094ed2) find_pane_cp01

0xe84a,	// (0x0009bf91) grid_afind_control_pane_ParamLimits

0xe84a,	// (0x0009bf91) grid_afind_control_pane

0x7798,	// (0x00094edf) grid_afind_pane_ParamLimits

0x7798,	// (0x00094edf) grid_afind_pane

0x77b4,	// (0x00094efb) cell_afind_pane_ParamLimits

0x77b4,	// (0x00094efb) cell_afind_pane

0xdc9e,	// (0x0009b3e5) afind_page_pane_g1

0x77fc,	// (0x00094f43) afind_page_pane_g2

0x7805,	// (0x00094f4c) afind_page_pane_g3

0x0002,

0xf96a,	// (0x0009d0b1) afind_page_pane_g

0x780e,	// (0x00094f55) afind_page_pane_t1

0xe85e,	// (0x0009bfa5) cell_afind_grid_control_pane_ParamLimits

0xe85e,	// (0x0009bfa5) cell_afind_grid_control_pane

0xe619,	// (0x0009bd60) bg_button_pane_cp69_ParamLimits

0xe619,	// (0x0009bd60) bg_button_pane_cp69

0x782e,	// (0x00094f75) cell_afind_pane_g1_ParamLimits

0x782e,	// (0x00094f75) cell_afind_pane_g1

0x783b,	// (0x00094f82) cell_afind_pane_t1_ParamLimits

0x783b,	// (0x00094f82) cell_afind_pane_t1

0xae40,	// (0x00098587) bg_button_pane_cp72

0xe86d,	// (0x0009bfb4) cell_afind_grid_control_pane_g1

0x4df1,	// (0x00092538) aid_image_placing_area_ParamLimits

0x4df1,	// (0x00092538) aid_image_placing_area

0xe2e7,	// (0x0009ba2e) field_vitu_entry_pane_g1_ParamLimits

0xe2e7,	// (0x0009ba2e) field_vitu_entry_pane_g1

0xe2f3,	// (0x0009ba3a) field_vitu_entry_pane_g2_ParamLimits

0xe2f3,	// (0x0009ba3a) field_vitu_entry_pane_g2

0x0001,

0xf81b,	// (0x0009cf62) field_vitu_entry_pane_g_ParamLimits

0xf81b,	// (0x0009cf62) field_vitu_entry_pane_g

0x6962,	// (0x000940a9) cell_vitu_itu_pane_g1_ParamLimits

0x69a4,	// (0x000940eb) cell_vitu_itu_pane_t3_ParamLimits

0x69a4,	// (0x000940eb) cell_vitu_itu_pane_t3

0xe5c9,	// (0x0009bd10) mp4_progress_pane_t1_ParamLimits

0xe5e2,	// (0x0009bd29) mp4_progress_pane_t2_ParamLimits

0xf8b0,	// (0x0009cff7) mp4_progress_pane_t_ParamLimits

0xe5fb,	// (0x0009bd42) mup_progress_pane_cp04_ParamLimits

0x7741,	// (0x00094e88) main_myfav_hc_pane_t5_ParamLimits

0x7741,	// (0x00094e88) main_myfav_hc_pane_t5

0x1cad,	// (0x0008f3f4) aid_zoom_text_primary

0x1f4f,	// (0x0008f696) popup_adpt_find_window_ParamLimits

0x5273,	// (0x000929ba) main_cam_set_pane

0x717d,	// (0x000948c4) cam4_zoom_pane_ParamLimits

0x717d,	// (0x000948c4) cam4_zoom_pane

0x784d,	// (0x00094f94) main_cam_set_pane_g1_ParamLimits

0x784d,	// (0x00094f94) main_cam_set_pane_g1

0x785b,	// (0x00094fa2) main_cam_set_pane_g2_ParamLimits

0x785b,	// (0x00094fa2) main_cam_set_pane_g2

0x0001,

0xf971,	// (0x0009d0b8) main_cam_set_pane_g_ParamLimits

0xf971,	// (0x0009d0b8) main_cam_set_pane_g

0x7867,	// (0x00094fae) main_cam_set_pane_t1_ParamLimits

0x7867,	// (0x00094fae) main_cam_set_pane_t1

0x7883,	// (0x00094fca) main_cset_listscroll_pane_ParamLimits

0x7883,	// (0x00094fca) main_cset_listscroll_pane

0x78ae,	// (0x00094ff5) main_cset_slider_pane_ParamLimits

0x78ae,	// (0x00094ff5) main_cset_slider_pane

0xe87e,	// (0x0009bfc5) main_cset_list_pane_ParamLimits

0xe87e,	// (0x0009bfc5) main_cset_list_pane

0xe88e,	// (0x0009bfd5) scroll_pane_cp028

0x78cd,	// (0x00095014) aid_area_touch_slider

0x78e9,	// (0x00095030) cset_slider_pane

0x7913,	// (0x0009505a) main_cset_slider_pane_g1

0x7928,	// (0x0009506f) main_cset_slider_pane_g2

0x0011,

0xf976,	// (0x0009d0bd) main_cset_slider_pane_g

0xe8c7,	// (0x0009c00e) main_cset_slider_pane_t1

0x79ea,	// (0x00095131) main_cset_slider_pane_t2

0x7a04,	// (0x0009514b) main_cset_slider_pane_t3

0x7a1e,	// (0x00095165) main_cset_slider_pane_t4

0x7a38,	// (0x0009517f) main_cset_slider_pane_t5

0x7a56,	// (0x0009519d) main_cset_slider_pane_t6

0x7a6d,	// (0x000951b4) main_cset_slider_pane_t7

0x000e,

0xf99b,	// (0x0009d0e2) main_cset_slider_pane_t

0x7b79,	// (0x000952c0) cset_list_set_pane_ParamLimits

0x7b79,	// (0x000952c0) cset_list_set_pane

0x7b8f,	// (0x000952d6) aid_position_infowindow_above

0x7b97,	// (0x000952de) aid_position_infowindow_below

0xe967,	// (0x0009c0ae) cset_list_set_pane_g1_ParamLimits

0xe967,	// (0x0009c0ae) cset_list_set_pane_g1

0xe973,	// (0x0009c0ba) cset_list_set_pane_g3_ParamLimits

0xe973,	// (0x0009c0ba) cset_list_set_pane_g3

0x0001,

0xf9ba,	// (0x0009d101) cset_list_set_pane_g_ParamLimits

0xf9ba,	// (0x0009d101) cset_list_set_pane_g

0xe982,	// (0x0009c0c9) cset_list_set_pane_t1_ParamLimits

0xe982,	// (0x0009c0c9) cset_list_set_pane_t1

0xcba8,	// (0x0009a2ef) list_highlight_pane_cp021_ParamLimits

0xcba8,	// (0x0009a2ef) list_highlight_pane_cp021

0xb984,	// (0x000990cb) cset_slider_pane_g1

0xb996,	// (0x000990dd) cset_slider_pane_g2

0xb98d,	// (0x000990d4) cset_slider_pane_g3

0x0002,

0xf9bf,	// (0x0009d106) cset_slider_pane_g

0x7b9f,	// (0x000952e6) aid_area_touch_cam4_zoom

0x7ba7,	// (0x000952ee) cam4_zoom_cont_pane

0x7baf,	// (0x000952f6) cam4_zoom_pane_g1

0x7bb7,	// (0x000952fe) cam4_zoom_pane_g2

0x7bbf,	// (0x00095306) cam4_zoom_pane_g3

0x0002,

0xf9c6,	// (0x0009d10d) cam4_zoom_pane_g

0x7bc7,	// (0x0009530e) cam4_zoom_cont_pane_g1

0x7bd0,	// (0x00095317) cam4_zoom_cont_pane_g2

0x7bd9,	// (0x00095320) cam4_zoom_cont_pane_g3

0x0002,

0xf9cd,	// (0x0009d114) cam4_zoom_cont_pane_g

0x706a,	// (0x000947b1) call4_image_pane_ParamLimits

0x706a,	// (0x000947b1) call4_image_pane

0xe625,	// (0x0009bd6c) call4_windows_conf_pane_ParamLimits

0xe666,	// (0x0009bdad) popup_call4_audio_in_window_ParamLimits

0xe666,	// (0x0009bdad) popup_call4_audio_in_window

0xedcc,	// (0x0009c513) bg_popup_call2_act_pane_cp02

0xe6dc,	// (0x0009be23) call4_list_conf_pane

0xdc9e,	// (0x0009b3e5) call4_image_pane_g1

0xdc9e,	// (0x0009b3e5) call4_image_pane_g2

0x0001,

0xf6dc,	// (0x0009ce23) call4_image_pane_g

0xe997,	// (0x0009c0de) list_single_graphic_popup_conf4_pane_ParamLimits

0xe997,	// (0x0009c0de) list_single_graphic_popup_conf4_pane

0xedcc,	// (0x0009c513) list_highlight_pane_cp022

0xe9aa,	// (0x0009c0f1) list_single_graphic_popup_conf4_pane_g1

0xb563,	// (0x00098caa) list_single_graphic_popup_conf4_pane_g2

0x0001,

0xf9d4,	// (0x0009d11b) list_single_graphic_popup_conf4_pane_g

0xe9b2,	// (0x0009c0f9) list_single_graphic_popup_conf4_pane_t1

0x3015,	// (0x0009075c) popup_vtel_slider_window_ParamLimits

0x3015,	// (0x0009075c) popup_vtel_slider_window

0xe607,	// (0x0009bd4e) dialer2_ne_pane_t2_ParamLimits

0xe607,	// (0x0009bd4e) dialer2_ne_pane_t2

0x0001,

0xf8b5,	// (0x0009cffc) dialer2_ne_pane_t_ParamLimits

0xf8b5,	// (0x0009cffc) dialer2_ne_pane_t

0xcba8,	// (0x0009a2ef) bg_popup_sub_pane_cp010_ParamLimits

0xcba8,	// (0x0009a2ef) bg_popup_sub_pane_cp010

0x7be2,	// (0x00095329) popup_vtel_slider_window_g1_ParamLimits

0x7be2,	// (0x00095329) popup_vtel_slider_window_g1

0x7bee,	// (0x00095335) popup_vtel_slider_window_g2_ParamLimits

0x7bee,	// (0x00095335) popup_vtel_slider_window_g2

0x0003,

0xf9d9,	// (0x0009d120) popup_vtel_slider_window_g_ParamLimits

0xf9d9,	// (0x0009d120) popup_vtel_slider_window_g

0x7c36,	// (0x0009537d) vtel_slider_pane_ParamLimits

0x7c36,	// (0x0009537d) vtel_slider_pane

0x7c45,	// (0x0009538c) vtel_slider_pane_g1_ParamLimits

0x7c45,	// (0x0009538c) vtel_slider_pane_g1

0x7c52,	// (0x00095399) vtel_slider_pane_g2_ParamLimits

0x7c52,	// (0x00095399) vtel_slider_pane_g2

0x7c5f,	// (0x000953a6) vtel_slider_pane_g3_ParamLimits

0x7c5f,	// (0x000953a6) vtel_slider_pane_g3

0x7c45,	// (0x0009538c) vtel_slider_pane_g4_ParamLimits

0x7c45,	// (0x0009538c) vtel_slider_pane_g4

0x7c6c,	// (0x000953b3) vtel_slider_pane_g5_ParamLimits

0x7c6c,	// (0x000953b3) vtel_slider_pane_g5

0x0004,

0xf9e2,	// (0x0009d129) vtel_slider_pane_g_ParamLimits

0xf9e2,	// (0x0009d129) vtel_slider_pane_g

0x5273,	// (0x000929ba) main_gallery2_pane

0x73df,	// (0x00094b26) aid_size_row_itut2_dropdow_list_ParamLimits

0x73df,	// (0x00094b26) aid_size_row_itut2_dropdow_list

0x744d,	// (0x00094b94) grid_vitu2_function_top_pane_ParamLimits

0x744d,	// (0x00094b94) grid_vitu2_function_top_pane

0x74a7,	// (0x00094bee) popup_vitu2_dropdown_list_window_ParamLimits

0x74a7,	// (0x00094bee) popup_vitu2_dropdown_list_window

0x74c7,	// (0x00094c0e) popup_vitu2_match_list_window

0x7c87,	// (0x000953ce) cell_vitu2_function_top_pane_ParamLimits

0x7c87,	// (0x000953ce) cell_vitu2_function_top_pane

0x7ca1,	// (0x000953e8) cell_vitu2_function_top_pane_cp01_ParamLimits

0x7ca1,	// (0x000953e8) cell_vitu2_function_top_pane_cp01

0x7cbd,	// (0x00095404) cell_vitu2_function_top_wide_pane_ParamLimits

0x7cbd,	// (0x00095404) cell_vitu2_function_top_wide_pane

0x5273,	// (0x000929ba) bg_button_pane_cp012

0x7cd9,	// (0x00095420) cell_vitu2_function_top_pane_g1

0x7ced,	// (0x00095434) bg_button_pane_cp013_ParamLimits

0x7ced,	// (0x00095434) bg_button_pane_cp013

0x7d09,	// (0x00095450) cell_vitu2_function_top_wide_pane_g1_ParamLimits

0x7d09,	// (0x00095450) cell_vitu2_function_top_wide_pane_g1

0x2046,	// (0x0008f78d) bg_popup_sub_pane_cp20

0x7d21,	// (0x00095468) list_vitu2_match_list_pane

0xe774,	// (0x0009bebb) bg_popup_sub_pane_cp20_g1

0xe77c,	// (0x0009bec3) bg_popup_sub_pane_cp20_g2

0xb047,	// (0x0009878e) bg_popup_sub_pane_cp20_g3

0xe784,	// (0x0009becb) bg_popup_sub_pane_cp20_g4

0xb027,	// (0x0009876e) bg_popup_sub_pane_cp20_g5

0xe9e3,	// (0x0009c12a) bg_popup_sub_pane_cp20_g6

0xe794,	// (0x0009bedb) bg_popup_sub_pane_cp20_g7

0xe79c,	// (0x0009bee3) bg_popup_sub_pane_cp20_g8

0xe7a4,	// (0x0009beeb) bg_popup_sub_pane_cp20_g9

0x0008,

0xf9ed,	// (0x0009d134) bg_popup_sub_pane_cp20_g

0x7d39,	// (0x00095480) list_vitu2_match_list_item_pane_ParamLimits

0x7d39,	// (0x00095480) list_vitu2_match_list_item_pane

0x7d4b,	// (0x00095492) list_vitu2_match_list_item_pane_t1

0x2060,	// (0x0008f7a7) bg_popup_sub_pane_cp21

0x7da1,	// (0x000954e8) grid_vitu2_dropdown_list_pane

0x7da9,	// (0x000954f0) cell_vitu2_dropdown_list_char_pane_ParamLimits

0x7da9,	// (0x000954f0) cell_vitu2_dropdown_list_char_pane

0x7dca,	// (0x00095511) cell_vitu2_dropdown_list_ctrl_pane_ParamLimits

0x7dca,	// (0x00095511) cell_vitu2_dropdown_list_ctrl_pane

0xee60,	// (0x0009c5a7) cell_vitu2_dropdown_list_char_pane_g1

0xee4e,	// (0x0009c595) cell_vitu2_dropdown_list_char_pane_g2

0xee57,	// (0x0009c59e) cell_vitu2_dropdown_list_char_pane_g3

0x0002,

0xfa0a,	// (0x0009d151) cell_vitu2_dropdown_list_char_pane_g

0x7df6,	// (0x0009553d) cell_vitu2_dropdown_list_char_pane_t1

0x7e04,	// (0x0009554b) cell_vitu2_dropdown_list_ctrl_pane_g1_ParamLimits

0x7e04,	// (0x0009554b) cell_vitu2_dropdown_list_ctrl_pane_g1

0x7e14,	// (0x0009555b) cell_vitu2_dropdown_list_ctrl_pane_g2_ParamLimits

0x7e14,	// (0x0009555b) cell_vitu2_dropdown_list_ctrl_pane_g2

0x7e25,	// (0x0009556c) cell_vitu2_dropdown_list_ctrl_pane_g3_ParamLimits

0x7e25,	// (0x0009556c) cell_vitu2_dropdown_list_ctrl_pane_g3

0x7e35,	// (0x0009557c) cell_vitu2_dropdown_list_ctrl_pane_g4_ParamLimits

0x7e35,	// (0x0009557c) cell_vitu2_dropdown_list_ctrl_pane_g4

0x7211,	// (0x00094958) cell_vitu2_dropdown_list_ctrl_pane_g5_ParamLimits

0x7211,	// (0x00094958) cell_vitu2_dropdown_list_ctrl_pane_g5

0x0004,

0xfa11,	// (0x0009d158) cell_vitu2_dropdown_list_ctrl_pane_g_ParamLimits

0xfa11,	// (0x0009d158) cell_vitu2_dropdown_list_ctrl_pane_g

0x7e51,	// (0x00095598) aid_size_cell_gallery2_ParamLimits

0x7e51,	// (0x00095598) aid_size_cell_gallery2

0x7e6b,	// (0x000955b2) grid_gallery2_pane_ParamLimits

0x7e6b,	// (0x000955b2) grid_gallery2_pane

0x67eb,	// (0x00093f32) scroll_pane_cp029_ParamLimits

0x67eb,	// (0x00093f32) scroll_pane_cp029

0x7e82,	// (0x000955c9) cell_gallery2_pane_ParamLimits

0x7e82,	// (0x000955c9) cell_gallery2_pane

0xee69,	// (0x0009c5b0) cell_gallery2_pane_g2

0xbef3,	// (0x0009963a) cell_gallery2_pane_g3

0xee71,	// (0x0009c5b8) cell_gallery2_pane_g4

0xee79,	// (0x0009c5c0) cell_gallery2_pane_g5

0xadee,	// (0x00098535) grid_highlight_pane_cp10

0x74c7,	// (0x00094c0e) popup_vitu2_match_list_window_ParamLimits

0x74db,	// (0x00094c22) popup_vitu2_query_window_ParamLimits

0x74db,	// (0x00094c22) popup_vitu2_query_window

0x2060,	// (0x0008f7a7) bg_vitu2_candi_button_pane

0xee60,	// (0x0009c5a7) cell_vitu2_dropdown_list_char_pane_g1_copy1

0xee4e,	// (0x0009c595) cell_vitu2_dropdown_list_char_pane_g2_copy1

0xee57,	// (0x0009c59e) cell_vitu2_dropdown_list_char_pane_g2_copy2

0x7ed4,	// (0x0009561b) bg_button_pane_cp015

0x7ee6,	// (0x0009562d) bg_button_pane_cp016

0x7ef9,	// (0x00095640) bg_button_pane_cp017

0xd88d,	// (0x0009afd4) bg_popup_sub_pane_cp22

0xee81,	// (0x0009c5c8) popup_vitu2_query_window_g1

0x7f3e,	// (0x00095685) popup_vitu2_query_window_g2

0x0002,

0xfa1c,	// (0x0009d163) popup_vitu2_query_window_g

0x7f5b,	// (0x000956a2) popup_vitu2_query_window_t1_ParamLimits

0x7f5b,	// (0x000956a2) popup_vitu2_query_window_t1

0x7f8e,	// (0x000956d5) popup_vitu2_query_window_t2_ParamLimits

0x7f8e,	// (0x000956d5) popup_vitu2_query_window_t2

0x7fa0,	// (0x000956e7) popup_vitu2_query_window_t3_ParamLimits

0x7fa0,	// (0x000956e7) popup_vitu2_query_window_t3

0x7fc8,	// (0x0009570f) popup_vitu2_query_window_t4_ParamLimits

0x7fc8,	// (0x0009570f) popup_vitu2_query_window_t4

0x7fe9,	// (0x00095730) popup_vitu2_query_window_t5_ParamLimits

0x7fe9,	// (0x00095730) popup_vitu2_query_window_t5

0x0006,

0xfa23,	// (0x0009d16a) popup_vitu2_query_window_t_ParamLimits

0xfa23,	// (0x0009d16a) popup_vitu2_query_window_t

0xe876,	// (0x0009bfbd) main_cset_text_pane

0x78cd,	// (0x00095014) aid_area_touch_slider_ParamLimits

0x78e9,	// (0x00095030) cset_slider_pane_ParamLimits

0x7913,	// (0x0009505a) main_cset_slider_pane_g1_ParamLimits

0x7928,	// (0x0009506f) main_cset_slider_pane_g2_ParamLimits

0xe897,	// (0x0009bfde) main_cset_slider_pane_g3_ParamLimits

0xe897,	// (0x0009bfde) main_cset_slider_pane_g3

0x793d,	// (0x00095084) main_cset_slider_pane_g4_ParamLimits

0x793d,	// (0x00095084) main_cset_slider_pane_g4

0x794c,	// (0x00095093) main_cset_slider_pane_g5_ParamLimits

0x794c,	// (0x00095093) main_cset_slider_pane_g5

0x795a,	// (0x000950a1) main_cset_slider_pane_g6_ParamLimits

0x795a,	// (0x000950a1) main_cset_slider_pane_g6

0xf976,	// (0x0009d0bd) main_cset_slider_pane_g_ParamLimits

0xe8c7,	// (0x0009c00e) main_cset_slider_pane_t1_ParamLimits

0x79ea,	// (0x00095131) main_cset_slider_pane_t2_ParamLimits

0x7a04,	// (0x0009514b) main_cset_slider_pane_t3_ParamLimits

0x7a1e,	// (0x00095165) main_cset_slider_pane_t4_ParamLimits

0x7a38,	// (0x0009517f) main_cset_slider_pane_t5_ParamLimits

0x7a56,	// (0x0009519d) main_cset_slider_pane_t6_ParamLimits

0x7a6d,	// (0x000951b4) main_cset_slider_pane_t7_ParamLimits

0x7a9b,	// (0x000951e2) main_cset_slider_pane_t8_ParamLimits

0x7a9b,	// (0x000951e2) main_cset_slider_pane_t8

0x7ac3,	// (0x0009520a) main_cset_slider_pane_t9_ParamLimits

0x7ac3,	// (0x0009520a) main_cset_slider_pane_t9

0x7aeb,	// (0x00095232) main_cset_slider_pane_t10_ParamLimits

0x7aeb,	// (0x00095232) main_cset_slider_pane_t10

0x7b13,	// (0x0009525a) main_cset_slider_pane_t11_ParamLimits

0x7b13,	// (0x0009525a) main_cset_slider_pane_t11

0x7b3d,	// (0x00095284) main_cset_slider_pane_t12_ParamLimits

0x7b3d,	// (0x00095284) main_cset_slider_pane_t12

0x7b5a,	// (0x000952a1) main_cset_slider_pane_t13_ParamLimits

0x7b5a,	// (0x000952a1) main_cset_slider_pane_t13

0xf99b,	// (0x0009d0e2) main_cset_slider_pane_t_ParamLimits

0xedcc,	// (0x0009c513) bg_popup_sub_pane_cp011

0xee8d,	// (0x0009c5d4) main_cset_text_pane_g1

0xee95,	// (0x0009c5dc) main_cset_text_pane_t1

0xeea3,	// (0x0009c5ea) main_cset_text_pane_t2

0xeeb1,	// (0x0009c5f8) main_cset_text_pane_t3

0xeebf,	// (0x0009c606) main_cset_text_pane_t4

0xeecd,	// (0x0009c614) main_cset_text_pane_t5

0xeedb,	// (0x0009c622) main_cset_text_pane_t6

0xeee9,	// (0x0009c630) main_cset_text_pane_t7

0x0006,

0xfa32,	// (0x0009d179) main_cset_text_pane_t

0x2060,	// (0x0008f7a7) main_cam4_burst_pane

0x2060,	// (0x0008f7a7) main_cam5_pane

0x781c,	// (0x00094f63) bg_button_pane_cp019

0x7825,	// (0x00094f6c) bg_button_pane_cp020

0xe8a3,	// (0x0009bfea) main_cset_slider_pane_g7_ParamLimits

0xe8a3,	// (0x0009bfea) main_cset_slider_pane_g7

0xe8af,	// (0x0009bff6) main_cset_slider_pane_g8_ParamLimits

0xe8af,	// (0x0009bff6) main_cset_slider_pane_g8

0x796e,	// (0x000950b5) main_cset_slider_pane_g9_ParamLimits

0x796e,	// (0x000950b5) main_cset_slider_pane_g9

0x797a,	// (0x000950c1) main_cset_slider_pane_g10_ParamLimits

0x797a,	// (0x000950c1) main_cset_slider_pane_g10

0x7986,	// (0x000950cd) main_cset_slider_pane_g11_ParamLimits

0x7986,	// (0x000950cd) main_cset_slider_pane_g11

0x7992,	// (0x000950d9) main_cset_slider_pane_g12_ParamLimits

0x7992,	// (0x000950d9) main_cset_slider_pane_g12

0x799e,	// (0x000950e5) main_cset_slider_pane_g13_ParamLimits

0x799e,	// (0x000950e5) main_cset_slider_pane_g13

0x79aa,	// (0x000950f1) main_cset_slider_pane_g14_ParamLimits

0x79aa,	// (0x000950f1) main_cset_slider_pane_g14

0x79b6,	// (0x000950fd) main_cset_slider_pane_g15_ParamLimits

0x79b6,	// (0x000950fd) main_cset_slider_pane_g15

0xe8f5,	// (0x0009c03c) main_cset_slider_pane_t14_ParamLimits

0xe8f5,	// (0x0009c03c) main_cset_slider_pane_t14

0xe92e,	// (0x0009c075) main_cset_slider_pane_t15_ParamLimits

0xe92e,	// (0x0009c075) main_cset_slider_pane_t15

0x8060,	// (0x000957a7) aid_cam4_burst_size_cell_ParamLimits

0x8060,	// (0x000957a7) aid_cam4_burst_size_cell

0x807c,	// (0x000957c3) grid_cam4_burst_pane_ParamLimits

0x807c,	// (0x000957c3) grid_cam4_burst_pane

0x80ac,	// (0x000957f3) linegrid_cam4_burst_pane_ParamLimits

0x80ac,	// (0x000957f3) linegrid_cam4_burst_pane

0x80cc,	// (0x00095813) scroll_pane_cp30_ParamLimits

0x80cc,	// (0x00095813) scroll_pane_cp30

0x80d8,	// (0x0009581f) cell_cam4_burst_pane_ParamLimits

0x80d8,	// (0x0009581f) cell_cam4_burst_pane

0xef03,	// (0x0009c64a) linegrid_cam4_burst_pane_g1_ParamLimits

0xef03,	// (0x0009c64a) linegrid_cam4_burst_pane_g1

0x8114,	// (0x0009585b) linegrid_cam4_burst_pane_g2_ParamLimits

0x8114,	// (0x0009585b) linegrid_cam4_burst_pane_g2

0xef10,	// (0x0009c657) linegrid_cam4_burst_pane_g3_ParamLimits

0xef10,	// (0x0009c657) linegrid_cam4_burst_pane_g3

0x0002,

0xfa41,	// (0x0009d188) linegrid_cam4_burst_pane_g_ParamLimits

0xfa41,	// (0x0009d188) linegrid_cam4_burst_pane_g

0x8125,	// (0x0009586c) linegrid_cam4_burst_pane_g3_copy1_ParamLimits

0x8125,	// (0x0009586c) linegrid_cam4_burst_pane_g3_copy1

0xef1d,	// (0x0009c664) linegrid_cam4_burst_pane_g4_ParamLimits

0xef1d,	// (0x0009c664) linegrid_cam4_burst_pane_g4

0x813f,	// (0x00095886) linegrid_cam4_burst_pane_g5_ParamLimits

0x813f,	// (0x00095886) linegrid_cam4_burst_pane_g5

0x8150,	// (0x00095897) linegrid_cam4_burst_pane_g6_ParamLimits

0x8150,	// (0x00095897) linegrid_cam4_burst_pane_g6

0xef2a,	// (0x0009c671) linegrid_cam4_burst_pane_g7_ParamLimits

0xef2a,	// (0x0009c671) linegrid_cam4_burst_pane_g7

0x8161,	// (0x000958a8) cell_cam4_burst_pane_g1

0xef43,	// (0x0009c68a) main_cam5_pane_t1_ParamLimits

0xef43,	// (0x0009c68a) main_cam5_pane_t1

0xef55,	// (0x0009c69c) main_cam5_pane_t2_ParamLimits

0xef55,	// (0x0009c69c) main_cam5_pane_t2

0xef67,	// (0x0009c6ae) main_cam5_pane_t3_ParamLimits

0xef67,	// (0x0009c6ae) main_cam5_pane_t3

0xef79,	// (0x0009c6c0) main_cam5_pane_t4_ParamLimits

0xef79,	// (0x0009c6c0) main_cam5_pane_t4

0xef91,	// (0x0009c6d8) main_cam5_pane_t5_ParamLimits

0xef91,	// (0x0009c6d8) main_cam5_pane_t5

0xefa5,	// (0x0009c6ec) main_cam5_pane_t6_ParamLimits

0xefa5,	// (0x0009c6ec) main_cam5_pane_t6

0xefb9,	// (0x0009c700) main_cam5_pane_t7_ParamLimits

0xefb9,	// (0x0009c700) main_cam5_pane_t7

0xefcb,	// (0x0009c712) main_cam5_pane_t8_ParamLimits

0xefcb,	// (0x0009c712) main_cam5_pane_t8

0xefe7,	// (0x0009c72e) main_cam5_pane_t9_ParamLimits

0xefe7,	// (0x0009c72e) main_cam5_pane_t9

0xeff9,	// (0x0009c740) main_cam5_pane_t10_ParamLimits

0xeff9,	// (0x0009c740) main_cam5_pane_t10

0xf00b,	// (0x0009c752) main_cam5_pane_t11_ParamLimits

0xf00b,	// (0x0009c752) main_cam5_pane_t11

0xf01d,	// (0x0009c764) main_cam5_pane_t12_ParamLimits

0xf01d,	// (0x0009c764) main_cam5_pane_t12

0xf032,	// (0x0009c779) main_cam5_pane_t13_ParamLimits

0xf032,	// (0x0009c779) main_cam5_pane_t13

0x000c,

0xfa4d,	// (0x0009d194) main_cam5_pane_t_ParamLimits

0xfa4d,	// (0x0009d194) main_cam5_pane_t

0x2005,	// (0x0008f74c) popup_scut_keymap_window_ParamLimits

0x2005,	// (0x0008f74c) popup_scut_keymap_window

0x8174,	// (0x000958bb) aid_size_cell_brow_shortcut

0xadee,	// (0x00098535) bg_popup_window_pane_cp010

0x8180,	// (0x000958c7) grid_scut_pane

0x818c,	// (0x000958d3) cell_scut_pane_ParamLimits

0x818c,	// (0x000958d3) cell_scut_pane

0x81a3,	// (0x000958ea) cell_scut_pane_g1

0xf04f,	// (0x0009c796) cell_scut_pane_t1

0xf05e,	// (0x0009c7a5) cell_scut_pane_t2

0x81ac,	// (0x000958f3) cell_scut_pane_t3

0x0002,

0xfa68,	// (0x0009d1af) cell_scut_pane_t

0x5fcb,	// (0x00093712) main_mup3_pane_g8_ParamLimits

0x5fcb,	// (0x00093712) main_mup3_pane_g8

0x73ed,	// (0x00094b34) area_vitu2_query_pane_ParamLimits

0x73ed,	// (0x00094b34) area_vitu2_query_pane

0x7f0c,	// (0x00095653) input_focus_pane_cp08

0xf06d,	// (0x0009c7b4) area_vitu2_query_pane_g1

0x81ba,	// (0x00095901) area_vitu2_query_pane_g2

0x0001,

0xfa6f,	// (0x0009d1b6) area_vitu2_query_pane_g

0x81cb,	// (0x00095912) area_vitu2_query_pane_t1_ParamLimits

0x81cb,	// (0x00095912) area_vitu2_query_pane_t1

0x81df,	// (0x00095926) area_vitu2_query_pane_t2_ParamLimits

0x81df,	// (0x00095926) area_vitu2_query_pane_t2

0x81f3,	// (0x0009593a) area_vitu2_query_pane_t3_ParamLimits

0x81f3,	// (0x0009593a) area_vitu2_query_pane_t3

0xe9eb,	// (0x0009c132) area_vitu2_query_pane_t4_ParamLimits

0xe9eb,	// (0x0009c132) area_vitu2_query_pane_t4

0xea13,	// (0x0009c15a) area_vitu2_query_pane_t5_ParamLimits

0xea13,	// (0x0009c15a) area_vitu2_query_pane_t5

0xea3b,	// (0x0009c182) area_vitu2_query_pane_t6_ParamLimits

0xea3b,	// (0x0009c182) area_vitu2_query_pane_t6

0x0006,

0xfa74,	// (0x0009d1bb) area_vitu2_query_pane_t_ParamLimits

0xfa74,	// (0x0009d1bb) area_vitu2_query_pane_t

0x821b,	// (0x00095962) bg_button_pane_cp018

0x8229,	// (0x00095970) bg_button_pane_cp021

0x8235,	// (0x0009597c) bg_button_pane_cp022

0x8246,	// (0x0009598d) input_focus_pane_cp09

0xb69f,	// (0x00098de6) aid_size_touch_mv_arrow_left

0xb6c8,	// (0x00098e0f) aid_size_touch_mv_arrow_right

0x79ce,	// (0x00095115) main_cset_slider_pane_g16_ParamLimits

0x79ce,	// (0x00095115) main_cset_slider_pane_g16

0x79dc,	// (0x00095123) main_cset_slider_pane_g17_ParamLimits

0x79dc,	// (0x00095123) main_cset_slider_pane_g17

0x8161,	// (0x000958a8) cell_cam4_burst_pane_g1_ParamLimits

0xedcc,	// (0x0009c513) compa_mode_pane

0x7bfa,	// (0x00095341) popup_vtel_slider_window_g3_ParamLimits

0x7bfa,	// (0x00095341) popup_vtel_slider_window_g3

0x7c0e,	// (0x00095355) popup_vtel_slider_window_g4_ParamLimits

0x7c0e,	// (0x00095355) popup_vtel_slider_window_g4

0x7c22,	// (0x00095369) popup_vtel_slider_window_t1_ParamLimits

0x7c22,	// (0x00095369) popup_vtel_slider_window_t1

0x2060,	// (0x0008f7a7) main_cl_pane

0x5311,	// (0x00092a58) popup_imed_adjust2_window_ParamLimits

0xd88d,	// (0x0009afd4) bg_tb_trans_pane_cp05_ParamLimits

0xe21c,	// (0x0009b963) popup_imed_adjust2_window_g1_ParamLimits

0xe22b,	// (0x0009b972) popup_imed_adjust2_window_g2_ParamLimits

0xe22b,	// (0x0009b972) popup_imed_adjust2_window_g2

0xe237,	// (0x0009b97e) popup_imed_adjust2_window_g3_ParamLimits

0xe237,	// (0x0009b97e) popup_imed_adjust2_window_g3

0x0002,

0xf7df,	// (0x0009cf26) popup_imed_adjust2_window_g_ParamLimits

0xf7df,	// (0x0009cf26) popup_imed_adjust2_window_g

0xe243,	// (0x0009b98a) popup_imed_adjust2_window_t1_ParamLimits

0xe25b,	// (0x0009b9a2) slider_imed_adjust_pane_ParamLimits

0xe26f,	// (0x0009b9b6) slider_imed_adjust_pane_g1_ParamLimits

0xe27f,	// (0x0009b9c6) slider_imed_adjust_pane_g2_ParamLimits

0xe28f,	// (0x0009b9d6) slider_imed_adjust_pane_g3_ParamLimits

0xe2a0,	// (0x0009b9e7) slider_imed_adjust_pane_g4_ParamLimits

0xf7e6,	// (0x0009cf2d) slider_imed_adjust_pane_g_ParamLimits

0x7126,	// (0x0009486d) aid_touch_area_cam4_ParamLimits

0x7126,	// (0x0009486d) aid_touch_area_cam4

0x7136,	// (0x0009487d) battery_pane_cp01

0x71bd,	// (0x00094904) main_camera4_pane_g6_ParamLimits

0x71bd,	// (0x00094904) main_camera4_pane_g6

0x71db,	// (0x00094922) main_camera4_pane_t2_ParamLimits

0x71db,	// (0x00094922) main_camera4_pane_t2

0x0001,

0xf8e9,	// (0x0009d030) main_camera4_pane_t_ParamLimits

0xf8e9,	// (0x0009d030) main_camera4_pane_t

0x7270,	// (0x000949b7) aid_touch_area_vid4_ParamLimits

0x7270,	// (0x000949b7) aid_touch_area_vid4

0x72b0,	// (0x000949f7) main_video4_pane_g5_ParamLimits

0x72b0,	// (0x000949f7) main_video4_pane_g5

0x72d4,	// (0x00094a1b) vid4_progress_pane_ParamLimits

0x72d4,	// (0x00094a1b) vid4_progress_pane

0xe8bb,	// (0x0009c002) main_cset_slider_pane_g18_ParamLimits

0xe8bb,	// (0x0009c002) main_cset_slider_pane_g18

0xef37,	// (0x0009c67e) cell_cam4_burst_pane_g2_ParamLimits

0xef37,	// (0x0009c67e) cell_cam4_burst_pane_g2

0x0001,

0xfa48,	// (0x0009d18f) cell_cam4_burst_pane_g_ParamLimits

0xfa48,	// (0x0009d18f) cell_cam4_burst_pane_g

0x8257,	// (0x0009599e) bg_cl_pane_ParamLimits

0x8257,	// (0x0009599e) bg_cl_pane

0x8263,	// (0x000959aa) cl_header_pane_ParamLimits

0x8263,	// (0x000959aa) cl_header_pane

0x826f,	// (0x000959b6) cl_listscroll_pane_ParamLimits

0x826f,	// (0x000959b6) cl_listscroll_pane

0xf079,	// (0x0009c7c0) bg_cl_pane_g1

0xf081,	// (0x0009c7c8) bg_cl_pane_g2

0xf089,	// (0x0009c7d0) bg_cl_pane_g3

0xf091,	// (0x0009c7d8) bg_cl_pane_g4

0xf099,	// (0x0009c7e0) bg_cl_pane_g5

0xf0a1,	// (0x0009c7e8) bg_cl_pane_g6

0xf0a9,	// (0x0009c7f0) bg_cl_pane_g7

0xf0b1,	// (0x0009c7f8) bg_cl_pane_g8

0xf0b9,	// (0x0009c800) bg_cl_pane_g9

0x0008,

0xfa83,	// (0x0009d1ca) bg_cl_pane_g

0x827b,	// (0x000959c2) aid_height_cl_leading_ParamLimits

0x827b,	// (0x000959c2) aid_height_cl_leading

0x8287,	// (0x000959ce) aid_height_cl_text_ParamLimits

0x8287,	// (0x000959ce) aid_height_cl_text

0x0939,	// (0x0008e080) bg_cl_header_pane_ParamLimits

0x0939,	// (0x0008e080) bg_cl_header_pane

0x829f,	// (0x000959e6) cl_header_pane_g1_ParamLimits

0x829f,	// (0x000959e6) cl_header_pane_g1

0x82ac,	// (0x000959f3) cl_header_pane_t1_ParamLimits

0x82ac,	// (0x000959f3) cl_header_pane_t1

0xf0c1,	// (0x0009c808) cl_list_pane

0xe88e,	// (0x0009bfd5) hc_scroll_pane_cp01

0xb027,	// (0x0009876e) bg_cl_header_pane_g1

0xe774,	// (0x0009bebb) bg_cl_header_pane_g2

0xb047,	// (0x0009878e) bg_cl_header_pane_g3

0xe784,	// (0x0009becb) bg_cl_header_pane_g4

0xe77c,	// (0x0009bec3) bg_cl_header_pane_g5

0xe9e3,	// (0x0009c12a) bg_cl_header_pane_g6

0xe79c,	// (0x0009bee3) bg_cl_header_pane_g7

0xe7a4,	// (0x0009beeb) bg_cl_header_pane_g8

0xe794,	// (0x0009bedb) bg_cl_header_pane_g9

0x0008,

0xfa96,	// (0x0009d1dd) bg_cl_header_pane_g

0x82be,	// (0x00095a05) hc_cl_list_double_graphic_heading_pane_ParamLimits

0x82be,	// (0x00095a05) hc_cl_list_double_graphic_heading_pane

0x82cf,	// (0x00095a16) hc_cl_list_single_graphic_pane_ParamLimits

0x82cf,	// (0x00095a16) hc_cl_list_single_graphic_pane

0x82e8,	// (0x00095a2f) hc_cl_list_single_graphic_pane_g1_ParamLimits

0x82e8,	// (0x00095a2f) hc_cl_list_single_graphic_pane_g1

0x82f4,	// (0x00095a3b) hc_cl_list_single_graphic_pane_g2_ParamLimits

0x82f4,	// (0x00095a3b) hc_cl_list_single_graphic_pane_g2

0x0001,

0xfaa9,	// (0x0009d1f0) hc_cl_list_single_graphic_pane_g_ParamLimits

0xfaa9,	// (0x0009d1f0) hc_cl_list_single_graphic_pane_g

0x8308,	// (0x00095a4f) hc_cl_list_single_graphic_pane_t1_ParamLimits

0x8308,	// (0x00095a4f) hc_cl_list_single_graphic_pane_t1

0x82e8,	// (0x00095a2f) hc_cl_list_double_graphic_heading_pane_g1_ParamLimits

0x82e8,	// (0x00095a2f) hc_cl_list_double_graphic_heading_pane_g1

0x831d,	// (0x00095a64) hc_cl_list_double_graphic_heading_pane_g2_ParamLimits

0x831d,	// (0x00095a64) hc_cl_list_double_graphic_heading_pane_g2

0x8331,	// (0x00095a78) hc_cl_list_double_graphic_heading_pane_g3_ParamLimits

0x8331,	// (0x00095a78) hc_cl_list_double_graphic_heading_pane_g3

0x0002,

0xfaae,	// (0x0009d1f5) hc_cl_list_double_graphic_heading_pane_g_ParamLimits

0xfaae,	// (0x0009d1f5) hc_cl_list_double_graphic_heading_pane_g

0x8345,	// (0x00095a8c) hc_cl_list_double_graphic_heading_pane_t1_ParamLimits

0x8345,	// (0x00095a8c) hc_cl_list_double_graphic_heading_pane_t1

0x835a,	// (0x00095aa1) hc_cl_list_double_graphic_heading_pane_t2_ParamLimits

0x835a,	// (0x00095aa1) hc_cl_list_double_graphic_heading_pane_t2

0x0001,

0xfab5,	// (0x0009d1fc) hc_cl_list_double_graphic_heading_pane_t_ParamLimits

0xfab5,	// (0x0009d1fc) hc_cl_list_double_graphic_heading_pane_t

0x8377,	// (0x00095abe) vid4_progress_pane_g1

0x8387,	// (0x00095ace) vid4_progress_pane_g2

0x8397,	// (0x00095ade) vid4_progress_pane_g3

0x83a9,	// (0x00095af0) vid4_progress_pane_g4

0x0004,

0xfaba,	// (0x0009d201) vid4_progress_pane_g

0x83c1,	// (0x00095b08) vid4_progress_pane_t1

0x83d7,	// (0x00095b1e) vid4_progress_pane_t2

0x0002,

0xfac5,	// (0x0009d20c) vid4_progress_pane_t

0x8401,	// (0x00095b48) wait_bar_pane_cp07

0xda91,	// (0x0009b1d8) blid_firmament_pane_ParamLimits

0xdad4,	// (0x0009b21b) popup_blid_sat_info2_window_g1

0xdaf8,	// (0x0009b23f) popup_blid_sat_info2_window_t3

0xdb06,	// (0x0009b24d) popup_blid_sat_info2_window_t4

0xdb14,	// (0x0009b25b) popup_blid_sat_info2_window_t5

0xdb22,	// (0x0009b269) popup_blid_sat_info2_window_t6

0xdb32,	// (0x0009b279) popup_blid_sat_info2_window_t7

0xdb40,	// (0x0009b287) popup_blid_sat_info2_window_t8

0xdb4e,	// (0x0009b295) popup_blid_sat_info2_window_t9

0xdb5c,	// (0x0009b2a3) popup_blid_sat_info2_window_t10

0xdc1e,	// (0x0009b365) aid_firma_cardinal_ParamLimits

0xdc32,	// (0x0009b379) blid_firmament_pane_t1_ParamLimits

0xdc49,	// (0x0009b390) blid_firmament_pane_t2_ParamLimits

0xdc60,	// (0x0009b3a7) blid_firmament_pane_t3_ParamLimits

0xdc77,	// (0x0009b3be) blid_firmament_pane_t4_ParamLimits

0xf6d3,	// (0x0009ce1a) blid_firmament_pane_t_ParamLimits

0xdc8e,	// (0x0009b3d5) blid_sat_info_pane_ParamLimits

0x5273,	// (0x000929ba) main_cam_set_pane_ParamLimits

0x6784,	// (0x00093ecb) aid_size_cell_colour_35_ParamLimits

0x679e,	// (0x00093ee5) aid_size_cell_colour_112_ParamLimits

0x67b5,	// (0x00093efc) aid_size_cell_effect_ParamLimits

0xcba8,	// (0x0009a2ef) bg_tb_trans_pane_cp02_ParamLimits

0xcbb6,	// (0x0009a2fd) heading_imed_pane_ParamLimits

0x67cf,	// (0x00093f16) listscroll_imed_pane_ParamLimits

0xceb3,	// (0x0009a5fa) popup_call2_audio_first_window_g5_ParamLimits

0xceb3,	// (0x0009a5fa) popup_call2_audio_first_window_g5

0x6ed5,	// (0x0009461c) aid_size_touch_image3_arrow_left_ParamLimits

0x6ed5,	// (0x0009461c) aid_size_touch_image3_arrow_left

0x6eeb,	// (0x00094632) aid_size_touch_image3_arrow_right_ParamLimits

0x6eeb,	// (0x00094632) aid_size_touch_image3_arrow_right

0x83ec,	// (0x00095b33) vid4_progress_pane_t3

0x6a6d,	// (0x000941b4) main_hwr_training_symbol_option_pane_ParamLimits

0x6a6d,	// (0x000941b4) main_hwr_training_symbol_option_pane

0xe509,	// (0x0009bc50) popup_hwr_training_preview_window_ParamLimits

0xe509,	// (0x0009bc50) popup_hwr_training_preview_window

0x6ace,	// (0x00094215) hwr_training_navi_pane_g5_ParamLimits

0x6ace,	// (0x00094215) hwr_training_navi_pane_g5

0xe762,	// (0x0009bea9) popup_char_count_window

0x2046,	// (0x0008f78d) bg_popup_sub_pane_cp20_ParamLimits

0x7d21,	// (0x00095468) list_vitu2_match_list_pane_ParamLimits

0x7d2d,	// (0x00095474) vitu2_page_scroll_pane_ParamLimits

0x7d2d,	// (0x00095474) vitu2_page_scroll_pane

0x006f,	// (0x0008d7b6) list_single_hwr_training_symbol_option_pane_ParamLimits

0x006f,	// (0x0008d7b6) list_single_hwr_training_symbol_option_pane

0x0082,	// (0x0008d7c9) list_single_hwr_training_symbol_option_pane_g1

0x008a,	// (0x0008d7d1) list_single_hwr_training_symbol_option_pane_t1

0x0098,	// (0x0008d7df) bg_button_pane_cp023

0x00a1,	// (0x0008d7e8) bg_button_pane_cp024

0x8443,	// (0x00095b8a) vitu2_page_scroll_pane_g1

0x844b,	// (0x00095b92) vitu2_page_scroll_pane_g2

0x0001,

0xfacc,	// (0x0009d213) vitu2_page_scroll_pane_g

0x8453,	// (0x00095b9a) vitu2_page_scroll_pane_t1

0xd9e8,	// (0x0009b12f) popup_char_count_window_g1

0x00d4,	// (0x0008d81b) popup_char_count_window_g2

0x00dd,	// (0x0008d824) popup_char_count_window_g3

0x0002,

0xfad1,	// (0x0009d218) popup_char_count_window_g

0x00e6,	// (0x0008d82d) popup_char_count_window_t1

0x2060,	// (0x0008f7a7) main_vded2_pane

0xe208,	// (0x0009b94f) aid_size_cell_imed_line

0xe212,	// (0x0009b959) grid_imed_line_width_pane

0x7342,	// (0x00094a89) vid4_indicators_pane_g4

0x00f4,	// (0x0008d83b) cell_imed_line_width_pane_ParamLimits

0x00f4,	// (0x0008d83b) cell_imed_line_width_pane

0x0108,	// (0x0008d84f) cell_imed_line_width_pane_g1

0x0111,	// (0x0008d858) cell_imed_line_width_pane_g2

0x0001,

0xfad8,	// (0x0009d21f) cell_imed_line_width_pane_g

0x8462,	// (0x00095ba9) main_vded2_pane_g1_ParamLimits

0x8462,	// (0x00095ba9) main_vded2_pane_g1

0x846f,	// (0x00095bb6) main_vded2_pane_g2_ParamLimits

0x846f,	// (0x00095bb6) main_vded2_pane_g2

0x0001,

0xfadd,	// (0x0009d224) main_vded2_pane_g_ParamLimits

0xfadd,	// (0x0009d224) main_vded2_pane_g

0x847d,	// (0x00095bc4) vded2_slider_pane_ParamLimits

0x847d,	// (0x00095bc4) vded2_slider_pane

0x848a,	// (0x00095bd1) aid_size_touch_vded2_end

0x8494,	// (0x00095bdb) aid_size_touch_vded2_playhead

0x0119,	// (0x0008d860) aid_size_touch_vded2_start

0x0121,	// (0x0008d868) vded2_slider_bg_pane

0x012a,	// (0x0008d871) vded2_slider_pane_g1

0x0133,	// (0x0008d87a) vded2_slider_pane_g2

0x849c,	// (0x00095be3) vded2_slider_pane_g3

0x0002,

0xfae2,	// (0x0009d229) vded2_slider_pane_g

0x013b,	// (0x0008d882) vded2_slider_bg_pane_g1

0x0144,	// (0x0008d88b) vded2_slider_bg_pane_g2

0x014d,	// (0x0008d894) vded2_slider_bg_pane_g3

0x0002,

0xfae9,	// (0x0009d230) vded2_slider_bg_pane_g

0x4b5b,	// (0x000922a2) aid_postcard_touch_down_pane_ParamLimits

0x4b5b,	// (0x000922a2) aid_postcard_touch_down_pane

0x4b6b,	// (0x000922b2) aid_postcard_touch_up_pane_ParamLimits

0x4b6b,	// (0x000922b2) aid_postcard_touch_up_pane

0x2060,	// (0x0008f7a7) main_blid2_pane

0x529c,	// (0x000929e3) popup_blid2_search_window

0xedcc,	// (0x0009c513) blid2_gps_pane

0xedcc,	// (0x0009c513) blid2_navig_pane

0xedcc,	// (0x0009c513) blid2_search_pane

0xedcc,	// (0x0009c513) blid2_tripm_pane

0x84a5,	// (0x00095bec) blid2_search_pane_g1_ParamLimits

0x84a5,	// (0x00095bec) blid2_search_pane_g1

0x84b5,	// (0x00095bfc) blid2_search_pane_t1_ParamLimits

0x84b5,	// (0x00095bfc) blid2_search_pane_t1

0x84c7,	// (0x00095c0e) aid_size_cell_blid2_gps_ParamLimits

0x84c7,	// (0x00095c0e) aid_size_cell_blid2_gps

0x84d7,	// (0x00095c1e) blid2_gps_pane_g1_ParamLimits

0x84d7,	// (0x00095c1e) blid2_gps_pane_g1

0x84e3,	// (0x00095c2a) grid_blid2_satellite_pane_ParamLimits

0x84e3,	// (0x00095c2a) grid_blid2_satellite_pane

0x84f3,	// (0x00095c3a) blid2_navig_pane_g1_ParamLimits

0x84f3,	// (0x00095c3a) blid2_navig_pane_g1

0x84ff,	// (0x00095c46) blid2_navig_pane_t1_ParamLimits

0x84ff,	// (0x00095c46) blid2_navig_pane_t1

0x8511,	// (0x00095c58) blid2_navig_pane_t2_ParamLimits

0x8511,	// (0x00095c58) blid2_navig_pane_t2

0x0001,

0xfaf0,	// (0x0009d237) blid2_navig_pane_t_ParamLimits

0xfaf0,	// (0x0009d237) blid2_navig_pane_t

0x8523,	// (0x00095c6a) blid2_navig_ring_pane_ParamLimits

0x8523,	// (0x00095c6a) blid2_navig_ring_pane

0x8533,	// (0x00095c7a) blid2_speed_pane_ParamLimits

0x8533,	// (0x00095c7a) blid2_speed_pane

0x853f,	// (0x00095c86) blid2_tripm_pane_g1_ParamLimits

0x853f,	// (0x00095c86) blid2_tripm_pane_g1

0x854f,	// (0x00095c96) blid2_tripm_pane_g2_ParamLimits

0x854f,	// (0x00095c96) blid2_tripm_pane_g2

0x855b,	// (0x00095ca2) blid2_tripm_pane_g3_ParamLimits

0x855b,	// (0x00095ca2) blid2_tripm_pane_g3

0x8567,	// (0x00095cae) blid2_tripm_pane_g4_ParamLimits

0x8567,	// (0x00095cae) blid2_tripm_pane_g4

0x8573,	// (0x00095cba) blid2_tripm_pane_g5_ParamLimits

0x8573,	// (0x00095cba) blid2_tripm_pane_g5

0x0005,

0xfaf5,	// (0x0009d23c) blid2_tripm_pane_g_ParamLimits

0xfaf5,	// (0x0009d23c) blid2_tripm_pane_g

0x858f,	// (0x00095cd6) blid2_tripm_pane_t1_ParamLimits

0x858f,	// (0x00095cd6) blid2_tripm_pane_t1

0x85a3,	// (0x00095cea) blid2_tripm_pane_t2_ParamLimits

0x85a3,	// (0x00095cea) blid2_tripm_pane_t2

0x85b5,	// (0x00095cfc) blid2_tripm_pane_t3_ParamLimits

0x85b5,	// (0x00095cfc) blid2_tripm_pane_t3

0x0003,

0xfb02,	// (0x0009d249) blid2_tripm_pane_t_ParamLimits

0xfb02,	// (0x0009d249) blid2_tripm_pane_t

0x85e7,	// (0x00095d2e) cell_blid2_satellite_pane_ParamLimits

0x85e7,	// (0x00095d2e) cell_blid2_satellite_pane

0x8601,	// (0x00095d48) cell_blid2_satellite_pane_g1

0x0156,	// (0x0008d89d) cell_blid2_satellite_pane_t1

0xdc9e,	// (0x0009b3e5) blid2_speed_pane_g1

0x0164,	// (0x0008d8ab) blid2_speed_pane_t1

0x0172,	// (0x0008d8b9) blid2_speed_pane_t2

0x0001,

0xfb0b,	// (0x0009d252) blid2_speed_pane_t

0xdc9e,	// (0x0009b3e5) blid2_navig_ring_pane_g1

0x860a,	// (0x00095d51) blid2_navig_ring_pane_g2

0x8612,	// (0x00095d59) blid2_navig_ring_pane_g3

0x861a,	// (0x00095d61) blid2_navig_ring_pane_g4

0x8622,	// (0x00095d69) blid2_navig_ring_pane_g5

0x0004,

0xfb10,	// (0x0009d257) blid2_navig_ring_pane_g

0xedcc,	// (0x0009c513) bg_popup_window_pane_cp011

0x0180,	// (0x0008d8c7) popup_blid2_search_window_g1

0x0188,	// (0x0008d8cf) popup_blid2_search_window_t1

0x0196,	// (0x0008d8dd) popup_blid2_search_window_t2

0x0001,

0xfb1b,	// (0x0009d262) popup_blid2_search_window_t

0xaf36,	// (0x0009867d) main_browser_pane_g1

0xac29,	// (0x00098370) main_browser_pane_ParamLimits

0x5273,	// (0x000929ba) bg_button_pane_cp011_ParamLimits

0x75ef,	// (0x00094d36) cell_vitu2_function_pane_g1_ParamLimits

0xd88d,	// (0x0009afd4) bg_popup_sub_pane_cp22_ParamLimits

0x7f0c,	// (0x00095653) input_focus_pane_cp08_ParamLimits

0x7f23,	// (0x0009566a) popup_vitu2_query_button_pane_ParamLimits

0x7f23,	// (0x0009566a) popup_vitu2_query_button_pane

0x7f34,	// (0x0009567b) popup_vitu2_query_input_button_pane

0xee81,	// (0x0009c5c8) popup_vitu2_query_window_g1_ParamLimits

0x7f3e,	// (0x00095685) popup_vitu2_query_window_g2_ParamLimits

0xfa1c,	// (0x0009d163) popup_vitu2_query_window_g_ParamLimits

0xedcc,	// (0x0009c513) bg_button_pane_cp026

0x862a,	// (0x00095d71) popup_vitu2_query_input_button_pane_g1

0xedcc,	// (0x0009c513) bg_button_pane_cp025

0x01a4,	// (0x0008d8eb) popup_vitu2_query_button_pane_t1

0x5cf2,	// (0x00093439) main_mp3_pane_t6

0x5d02,	// (0x00093449) popup_slider_window_cp01

0x721f,	// (0x00094966) cam4_battery_pane

0x72ff,	// (0x00094a46) cam4_battery_pane_cp02

0x836f,	// (0x00095ab6) cam4_battery_pane_cp01

0x836f,	// (0x00095ab6) cam4_battery_pane_cp03

0x01b2,	// (0x0008d8f9) cam4_battery_pane_g1

0xdc9e,	// (0x0009b3e5) cam4_battery_pane_g2

0x0001,

0xfb20,	// (0x0009d267) cam4_battery_pane_g

0xdb6a,	// (0x0009b2b1) popup_blid_sat_info2_window_t11

0xb69f,	// (0x00098de6) aid_size_touch_mv_arrow_left_ParamLimits

0xb6c8,	// (0x00098e0f) aid_size_touch_mv_arrow_right_ParamLimits

0xb726,	// (0x00098e6d) navi_pane_g1_ParamLimits

0xb732,	// (0x00098e79) navi_pane_g2_ParamLimits

0xb760,	// (0x00098ea7) navi_pane_g3_ParamLimits

0xf3e5,	// (0x0009cb2c) navi_pane_g_ParamLimits

0x44eb,	// (0x00091c32) navi_pane_mv_t1_ParamLimits

0x67db,	// (0x00093f22) grid_imed_effect_pane_ParamLimits

0x2ed5,	// (0x0009061c) aid_placing_vt_slider_lsc

0xae85,	// (0x000985cc) aid_placing_vt_slider_prt

0xcba8,	// (0x0009a2ef) bg_tb_trans_pane_cp01_ParamLimits

0xde21,	// (0x0009b568) popup_image_details_window_g1_ParamLimits

0xde34,	// (0x0009b57b) popup_image_details_window_g2_ParamLimits

0xde49,	// (0x0009b590) popup_image_details_window_g3_ParamLimits

0xde49,	// (0x0009b590) popup_image_details_window_g3

0xf718,	// (0x0009ce5f) popup_image_details_window_g_ParamLimits

0xde5d,	// (0x0009b5a4) popup_image_details_window_t1_ParamLimits

0xde6f,	// (0x0009b5b6) popup_image_details_window_t2_ParamLimits

0xde88,	// (0x0009b5cf) popup_image_details_window_t3_ParamLimits

0xde9c,	// (0x0009b5e3) popup_image_details_window_t4_ParamLimits

0xdeb7,	// (0x0009b5fe) popup_image_details_window_t5_ParamLimits

0xf71f,	// (0x0009ce66) popup_image_details_window_t_ParamLimits

0x8293,	// (0x000959da) cl_header_name_pane_ParamLimits

0x8293,	// (0x000959da) cl_header_name_pane

0x8632,	// (0x00095d79) cl_header_name_pane_t1_ParamLimits

0x8632,	// (0x00095d79) cl_header_name_pane_t1

0x8649,	// (0x00095d90) cl_header_name_pane_t2_ParamLimits

0x8649,	// (0x00095d90) cl_header_name_pane_t2

0x8673,	// (0x00095dba) cl_header_name_pane_t3_ParamLimits

0x8673,	// (0x00095dba) cl_header_name_pane_t3

0x0002,

0xfb25,	// (0x0009d26c) cl_header_name_pane_t_ParamLimits

0xfb25,	// (0x0009d26c) cl_header_name_pane_t

0xb7ef,	// (0x00098f36) navi_pane_mv_g2_ParamLimits

0xe71f,	// (0x0009be66) field_vitu2_entry_pane_g1_ParamLimits

0xe72b,	// (0x0009be72) field_vitu2_entry_pane_g2_ParamLimits

0xe737,	// (0x0009be7e) field_vitu2_entry_pane_g3_ParamLimits

0xe737,	// (0x0009be7e) field_vitu2_entry_pane_g3

0xf91b,	// (0x0009d062) field_vitu2_entry_pane_g_ParamLimits

0x7583,	// (0x00094cca) cell_vitu2_itu_pane_g1_ParamLimits

0x7595,	// (0x00094cdc) cell_vitu2_itu_pane_g2_ParamLimits

0x7595,	// (0x00094cdc) cell_vitu2_itu_pane_g2

0x0001,

0xf927,	// (0x0009d06e) cell_vitu2_itu_pane_g_ParamLimits

0xf927,	// (0x0009d06e) cell_vitu2_itu_pane_g

0x5273,	// (0x000929ba) bg_vkb2_func_pane_cp05_ParamLimits

0x5273,	// (0x000929ba) bg_vkb2_func_pane_cp05

0x5273,	// (0x000929ba) bg_vkb2_func_pane_cp03

0x5273,	// (0x000929ba) bg_vkb2_func_pane_cp04

0x5273,	// (0x000929ba) bg_vkb2_func_pane_cp10_ParamLimits

0x5273,	// (0x000929ba) bg_vkb2_func_pane_cp10

0x8235,	// (0x0009597c) bg_vkb2_func_pane_cp08

0x821b,	// (0x00095962) bg_vkb2_func_pane_cp06

0x8229,	// (0x00095970) bg_vkb2_func_pane_cp07

0x00aa,	// (0x0008d7f1) bg_vkb2_func_pane_cp11_ParamLimits

0x00aa,	// (0x0008d7f1) bg_vkb2_func_pane_cp11

0x00bf,	// (0x0008d806) bg_vkb2_func_pane_cp12_ParamLimits

0x00bf,	// (0x0008d806) bg_vkb2_func_pane_cp12

0xedcc,	// (0x0009c513) bg_vkb2_func_pane_cp09

0xe774,	// (0x0009bebb) bg_vkb2_func_pane_g1

0xb047,	// (0x0009878e) bg_vkb2_func_pane_g2

0xe77c,	// (0x0009bec3) bg_vkb2_func_pane_g3

0xe784,	// (0x0009becb) bg_vkb2_func_pane_g4

0xe9e3,	// (0x0009c12a) bg_vkb2_func_pane_g5

0xe79c,	// (0x0009bee3) bg_vkb2_func_pane_g6

0xe7a4,	// (0x0009beeb) bg_vkb2_func_pane_g7

0xe794,	// (0x0009bedb) bg_vkb2_func_pane_g8

0xb027,	// (0x0009876e) bg_vkb2_func_pane_g9

0x0008,

0xfb2c,	// (0x0009d273) bg_vkb2_func_pane_g

0x8581,	// (0x00095cc8) blid2_tripm_pane_g6_ParamLimits

0x8581,	// (0x00095cc8) blid2_tripm_pane_g6

0xe5c1,	// (0x0009bd08) mp4_progress_pane_g1

0x85db,	// (0x00095d22) blid2_tripm_values_pane_ParamLimits

0x85db,	// (0x00095d22) blid2_tripm_values_pane

0x8698,	// (0x00095ddf) blid2_tripm_values_pane_t1

0x86a6,	// (0x00095ded) blid2_tripm_values_pane_t2

0x86b4,	// (0x00095dfb) blid2_tripm_values_pane_t3

0x86c2,	// (0x00095e09) blid2_tripm_values_pane_t4

0x86d0,	// (0x00095e17) blid2_tripm_values_pane_t5

0x86de,	// (0x00095e25) blid2_tripm_values_pane_t6

0x86ec,	// (0x00095e33) blid2_tripm_values_pane_t7

0x86fa,	// (0x00095e41) blid2_tripm_values_pane_t8

0x8708,	// (0x00095e4f) blid2_tripm_values_pane_t9

0x0008,

0xfb3f,	// (0x0009d286) blid2_tripm_values_pane_t

0x2f15,	// (0x0009065c) call_video_pane_t1_ParamLimits

0x2f36,	// (0x0009067d) call_video_pane_t2_ParamLimits

0xf26e,	// (0x0009c9b5) call_video_pane_t_ParamLimits

0x4a2c,	// (0x00092173) msg_header_pane_g1_ParamLimits

0xb9c9,	// (0x00099110) msg_header_pane_g2_ParamLimits

0xb9c9,	// (0x00099110) msg_header_pane_g2

0x0001,

0xf488,	// (0x0009cbcf) msg_header_pane_g_ParamLimits

0xf488,	// (0x0009cbcf) msg_header_pane_g

0xac29,	// (0x00098370) main_clock2_pane_ParamLimits

0x6573,	// (0x00093cba) grid_clock2_toolbar_pane_ParamLimits

0x6573,	// (0x00093cba) grid_clock2_toolbar_pane

0x6573,	// (0x00093cba) listscroll_clock2_pane_ParamLimits

0x6573,	// (0x00093cba) listscroll_clock2_pane

0x6619,	// (0x00093d60) main_clock2_pane_t3_ParamLimits

0x6619,	// (0x00093d60) main_clock2_pane_t3

0x662b,	// (0x00093d72) main_clock2_pane_t4_ParamLimits

0x662b,	// (0x00093d72) main_clock2_pane_t4

0x01bc,	// (0x0008d903) cell_clock2_toolbar_pane

0x01c4,	// (0x0008d90b) cell_clock2_toolbar_pane_cp01

0x01c4,	// (0x0008d90b) cell_clock2_toolbar_pane_cp02

0x01cc,	// (0x0008d913) cell_clock2_toolbar_pane_cp03

0x01d4,	// (0x0008d91b) list_clock2_pane

0xb615,	// (0x00098d5c) scroll_pane_cp10

0x01dc,	// (0x0008d923) list_single_clock2_pane_ParamLimits

0x01dc,	// (0x0008d923) list_single_clock2_pane

0xadee,	// (0x00098535) list_highlight_pane_cp08

0x01e9,	// (0x0008d930) list_single_clock2_pane_t1

0x01f7,	// (0x0008d93e) list_single_clock2_pane_t2

0x0001,

0xfb52,	// (0x0009d299) list_single_clock2_pane_t

0xedcc,	// (0x0009c513) bg_button_pane_cp10

0x0205,	// (0x0008d94c) cell_clock2_toolbar_pane_g1

0x4ac9,	// (0x00092210) aid_main_viewer_pane_g1_ParamLimits

0x4ac9,	// (0x00092210) aid_main_viewer_pane_g1

0x4ad5,	// (0x0009221c) aid_main_viewer_pane_g2_ParamLimits

0x4ad5,	// (0x0009221c) aid_main_viewer_pane_g2

0x4ae1,	// (0x00092228) aid_main_viewer_pane_g3_ParamLimits

0x4ae1,	// (0x00092228) aid_main_viewer_pane_g3

0x4af2,	// (0x00092239) aid_main_viewer_pane_g4_ParamLimits

0x4af2,	// (0x00092239) aid_main_viewer_pane_g4

0x0003,

0xf499,	// (0x0009cbe0) aid_main_viewer_pane_g_ParamLimits

0xf499,	// (0x0009cbe0) aid_main_viewer_pane_g

0x5266,	// (0x000929ad) main_calc_pane_ParamLimits

0x5281,	// (0x000929c8) main_dialer2_pane_ParamLimits

0x2060,	// (0x0008f7a7) main_cam6_pane

0x2060,	// (0x0008f7a7) main_vid6_pane

0x657f,	// (0x00093cc6) listscroll_gen_pane_cp06_ParamLimits

0x657f,	// (0x00093cc6) listscroll_gen_pane_cp06

0x663d,	// (0x00093d84) main_clock2_pane_t5_ParamLimits

0x663d,	// (0x00093d84) main_clock2_pane_t5

0x6686,	// (0x00093dcd) aid_call2_pane_cp10_ParamLimits

0x6698,	// (0x00093ddf) aid_call_pane_cp10_ParamLimits

0xb693,	// (0x00098dda) popup_clock_analogue_window_cp10_g1_ParamLimits

0xb693,	// (0x00098dda) popup_clock_analogue_window_cp10_g2_ParamLimits

0x66aa,	// (0x00093df1) popup_clock_analogue_window_cp10_g3_ParamLimits

0x66aa,	// (0x00093df1) popup_clock_analogue_window_cp10_g4_ParamLimits

0xb693,	// (0x00098dda) popup_clock_analogue_window_cp10_g5_ParamLimits

0xf7d4,	// (0x0009cf1b) popup_clock_analogue_window_cp10_g_ParamLimits

0x66bc,	// (0x00093e03) popup_clock_analogue_window_cp10_t1_ParamLimits

0x6e82,	// (0x000945c9) cell_dialer2_keypad_pane_g2_ParamLimits

0x6e82,	// (0x000945c9) cell_dialer2_keypad_pane_g2

0x0001,

0xf8ba,	// (0x0009d001) cell_dialer2_keypad_pane_g_ParamLimits

0xf8ba,	// (0x0009d001) cell_dialer2_keypad_pane_g

0x6e9e,	// (0x000945e5) cell_dialer2_keypad_pane_t1

0x78ba,	// (0x00095001) main_cset_text2_pane_ParamLimits

0x78ba,	// (0x00095001) main_cset_text2_pane

0xf06d,	// (0x0009c7b4) area_vitu2_query_pane_g1_ParamLimits

0x81ba,	// (0x00095901) area_vitu2_query_pane_g2_ParamLimits

0xfa6f,	// (0x0009d1b6) area_vitu2_query_pane_g_ParamLimits

0xea63,	// (0x0009c1aa) area_vitu2_query_pane_t7_ParamLimits

0xea63,	// (0x0009c1aa) area_vitu2_query_pane_t7

0x821b,	// (0x00095962) bg_button_pane_cp018_ParamLimits

0x8229,	// (0x00095970) bg_button_pane_cp021_ParamLimits

0x8235,	// (0x0009597c) bg_button_pane_cp022_ParamLimits

0x8235,	// (0x0009597c) bg_vkb2_func_pane_cp08_ParamLimits

0x821b,	// (0x00095962) bg_vkb2_func_pane_cp06_ParamLimits

0x8229,	// (0x00095970) bg_vkb2_func_pane_cp07_ParamLimits

0x8246,	// (0x0009598d) input_focus_pane_cp09_ParamLimits

0x8716,	// (0x00095e5d) cam6_autofocus_pane_ParamLimits

0x8716,	// (0x00095e5d) cam6_autofocus_pane

0x8738,	// (0x00095e7f) cam6_image_uncrop_pane_ParamLimits

0x8738,	// (0x00095e7f) cam6_image_uncrop_pane

0x8765,	// (0x00095eac) cam6_indi_pane_ParamLimits

0x8765,	// (0x00095eac) cam6_indi_pane

0x877f,	// (0x00095ec6) cam6_mode_pane_ParamLimits

0x877f,	// (0x00095ec6) cam6_mode_pane

0x8793,	// (0x00095eda) cam6_timer_pane_ParamLimits

0x8793,	// (0x00095eda) cam6_timer_pane

0x879f,	// (0x00095ee6) cam6_zoom_pane_ParamLimits

0x879f,	// (0x00095ee6) cam6_zoom_pane

0x87b7,	// (0x00095efe) cam6_mode_pane_g1_ParamLimits

0x87b7,	// (0x00095efe) cam6_mode_pane_g1

0x87c3,	// (0x00095f0a) cam6_mode_pane_g2_ParamLimits

0x87c3,	// (0x00095f0a) cam6_mode_pane_g2

0x87cf,	// (0x00095f16) cam6_mode_pane_g3_ParamLimits

0x87cf,	// (0x00095f16) cam6_mode_pane_g3

0x87db,	// (0x00095f22) cam6_mode_pane_g4_ParamLimits

0x87db,	// (0x00095f22) cam6_mode_pane_g4

0x0003,

0xfb57,	// (0x0009d29e) cam6_mode_pane_g_ParamLimits

0xfb57,	// (0x0009d29e) cam6_mode_pane_g

0x021b,	// (0x0008d962) bg_tb_trans_pane_cp08_ParamLimits

0x021b,	// (0x0008d962) bg_tb_trans_pane_cp08

0x0229,	// (0x0008d970) cam6_battery_pane_ParamLimits

0x0229,	// (0x0008d970) cam6_battery_pane

0x023f,	// (0x0008d986) cam6_indi_pane_g1_ParamLimits

0x023f,	// (0x0008d986) cam6_indi_pane_g1

0x0251,	// (0x0008d998) cam6_indi_pane_g2_ParamLimits

0x0251,	// (0x0008d998) cam6_indi_pane_g2

0x0263,	// (0x0008d9aa) cam6_indi_pane_g3_ParamLimits

0x0263,	// (0x0008d9aa) cam6_indi_pane_g3

0x0002,

0xfb60,	// (0x0009d2a7) cam6_indi_pane_g_ParamLimits

0xfb60,	// (0x0009d2a7) cam6_indi_pane_g

0x0275,	// (0x0008d9bc) cam6_indi_pane_t1_ParamLimits

0x0275,	// (0x0008d9bc) cam6_indi_pane_t1

0x737f,	// (0x00094ac6) cam6_autofocus_pane_g1

0x7377,	// (0x00094abe) cam6_autofocus_pane_g2

0x738f,	// (0x00094ad6) cam6_autofocus_pane_g3

0x7387,	// (0x00094ace) cam6_autofocus_pane_g4

0x0003,

0xfb67,	// (0x0009d2ae) cam6_autofocus_pane_g

0x029b,	// (0x0008d9e2) cam6_timer_pane_g1

0x02a3,	// (0x0008d9ea) cam6_timer_pane_t1

0x02b1,	// (0x0008d9f8) cam6_zoom_cont_pane

0x02b9,	// (0x0008da00) cam6_zoom_pane_g1

0x02c1,	// (0x0008da08) cam6_zoom_pane_g2

0x87e7,	// (0x00095f2e) cam6_zoom_pane_g3

0x0002,

0xfb70,	// (0x0009d2b7) cam6_zoom_pane_g

0xdc9e,	// (0x0009b3e5) cam6_battery_pane_g1

0xdc9e,	// (0x0009b3e5) cam6_battery_pane_g2

0x0001,

0xf6dc,	// (0x0009ce23) cam6_battery_pane_g

0x02c9,	// (0x0008da10) cam6_zoom_cont_pane_g1

0x02d2,	// (0x0008da19) cam6_zoom_cont_pane_g2

0x02db,	// (0x0008da22) cam6_zoom_cont_pane_g3

0x0002,

0xfb77,	// (0x0009d2be) cam6_zoom_cont_pane_g

0x8804,	// (0x00095f4b) cam6_mode_pane_cp_ParamLimits

0x8804,	// (0x00095f4b) cam6_mode_pane_cp

0x8818,	// (0x00095f5f) cam6_zoom_pane_cp_ParamLimits

0x8818,	// (0x00095f5f) cam6_zoom_pane_cp

0x8830,	// (0x00095f77) vid6_image_uncrop_cif_pane_ParamLimits

0x8830,	// (0x00095f77) vid6_image_uncrop_cif_pane

0x885c,	// (0x00095fa3) vid6_image_uncrop_nhd_pane_ParamLimits

0x885c,	// (0x00095fa3) vid6_image_uncrop_nhd_pane

0x8879,	// (0x00095fc0) vid6_image_uncrop_vga_pane_ParamLimits

0x8879,	// (0x00095fc0) vid6_image_uncrop_vga_pane

0x8898,	// (0x00095fdf) vid6_image_uncrop_wvga_pane_ParamLimits

0x8898,	// (0x00095fdf) vid6_image_uncrop_wvga_pane

0x88b5,	// (0x00095ffc) vid6_indi_pane_ParamLimits

0x88b5,	// (0x00095ffc) vid6_indi_pane

0x021b,	// (0x0008d962) bg_tb_trans_pane_cp09_ParamLimits

0x021b,	// (0x0008d962) bg_tb_trans_pane_cp09

0x02f3,	// (0x0008da3a) cam6_battery_pane_cp_ParamLimits

0x02f3,	// (0x0008da3a) cam6_battery_pane_cp

0x02ff,	// (0x0008da46) vid6_indi_pane_g1_ParamLimits

0x02ff,	// (0x0008da46) vid6_indi_pane_g1

0x0311,	// (0x0008da58) vid6_indi_pane_g2_ParamLimits

0x0311,	// (0x0008da58) vid6_indi_pane_g2

0x0323,	// (0x0008da6a) vid6_indi_pane_g3_ParamLimits

0x0323,	// (0x0008da6a) vid6_indi_pane_g3

0x0338,	// (0x0008da7f) vid6_indi_pane_g4_ParamLimits

0x0338,	// (0x0008da7f) vid6_indi_pane_g4

0x034d,	// (0x0008da94) vid6_indi_pane_g5_ParamLimits

0x034d,	// (0x0008da94) vid6_indi_pane_g5

0x0004,

0xfb7e,	// (0x0009d2c5) vid6_indi_pane_g_ParamLimits

0xfb7e,	// (0x0009d2c5) vid6_indi_pane_g

0x0367,	// (0x0008daae) vid6_indi_pane_t1_ParamLimits

0x0367,	// (0x0008daae) vid6_indi_pane_t1

0x037d,	// (0x0008dac4) vid6_indi_pane_t2_ParamLimits

0x037d,	// (0x0008dac4) vid6_indi_pane_t2

0x03a5,	// (0x0008daec) vid6_indi_pane_t3_ParamLimits

0x03a5,	// (0x0008daec) vid6_indi_pane_t3

0x03cd,	// (0x0008db14) vid6_indi_pane_t4_ParamLimits

0x03cd,	// (0x0008db14) vid6_indi_pane_t4

0x0003,

0xfb89,	// (0x0009d2d0) vid6_indi_pane_t_ParamLimits

0xfb89,	// (0x0009d2d0) vid6_indi_pane_t

0x03f1,	// (0x0008db38) wait_bar_pane_cp08

0x88da,	// (0x00096021) main_cset_text2_pane_t1_ParamLimits

0x88da,	// (0x00096021) main_cset_text2_pane_t1

0x87ef,	// (0x00095f36) listscroll_gen_pane_cp06_t1_ParamLimits

0x87ef,	// (0x00095f36) listscroll_gen_pane_cp06_t1

0x2060,	// (0x0008f7a7) main_cam6_set_pane

0x7211,	// (0x00094958) bg_tb_trans_pane_cp06_ParamLimits

0x7227,	// (0x0009496e) cam4_indicators_pane_g1_ParamLimits

0x7238,	// (0x0009497f) cam4_indicators_pane_g2_ParamLimits

0xf8f7,	// (0x0009d03e) cam4_indicators_pane_g_ParamLimits

0x7256,	// (0x0009499d) cam4_indicators_pane_t1_ParamLimits

0x5273,	// (0x000929ba) bg_tb_trans_pane_cp07_ParamLimits

0x7309,	// (0x00094a50) vid4_indicators_pane_g1_ParamLimits

0x731d,	// (0x00094a64) vid4_indicators_pane_g2_ParamLimits

0x7331,	// (0x00094a78) vid4_indicators_pane_g3_ParamLimits

0x7342,	// (0x00094a89) vid4_indicators_pane_g4_ParamLimits

0xf909,	// (0x0009d050) vid4_indicators_pane_g_ParamLimits

0x7360,	// (0x00094aa7) vid4_indicators_pane_t1_ParamLimits

0x8377,	// (0x00095abe) vid4_progress_pane_g1_ParamLimits

0x8387,	// (0x00095ace) vid4_progress_pane_g2_ParamLimits

0x8397,	// (0x00095ade) vid4_progress_pane_g3_ParamLimits

0x83a9,	// (0x00095af0) vid4_progress_pane_g4_ParamLimits

0xfaba,	// (0x0009d201) vid4_progress_pane_g_ParamLimits

0x83c1,	// (0x00095b08) vid4_progress_pane_t1_ParamLimits

0x83d7,	// (0x00095b1e) vid4_progress_pane_t2_ParamLimits

0x83ec,	// (0x00095b33) vid4_progress_pane_t3_ParamLimits

0xfac5,	// (0x0009d20c) vid4_progress_pane_t_ParamLimits

0x8401,	// (0x00095b48) wait_bar_pane_cp07_ParamLimits

0x890d,	// (0x00096054) main_cam6_set_pane_g2_ParamLimits

0x890d,	// (0x00096054) main_cam6_set_pane_g2

0x8919,	// (0x00096060) main_cset6_listscroll_pane_ParamLimits

0x8919,	// (0x00096060) main_cset6_listscroll_pane

0x8944,	// (0x0009608b) main_cset6_slider_pane_ParamLimits

0x8944,	// (0x0009608b) main_cset6_slider_pane

0x8950,	// (0x00096097) main_cset6_text2_pane_ParamLimits

0x8950,	// (0x00096097) main_cset6_text2_pane

0x0400,	// (0x0008db47) main_cset6_text_pane

0x0408,	// (0x0008db4f) main_cset_list_pane_copy1_ParamLimits

0x0408,	// (0x0008db4f) main_cset_list_pane_copy1

0x0418,	// (0x0008db5f) scroll_pane_cp028_copy1

0x8963,	// (0x000960aa) cset_list_set_pane_copy1

0x8976,	// (0x000960bd) aid_position_infowindow_above_copy1

0x897e,	// (0x000960c5) aid_position_infowindow_below_copy1

0x8986,	// (0x000960cd) cset_list_set_pane_g1_copy1

0xe973,	// (0x0009c0ba) cset_list_set_pane_g3_copy1_ParamLimits

0xe973,	// (0x0009c0ba) cset_list_set_pane_g3_copy1

0xe982,	// (0x0009c0c9) cset_list_set_pane_t1_copy1_ParamLimits

0xe982,	// (0x0009c0c9) cset_list_set_pane_t1_copy1

0xcba8,	// (0x0009a2ef) list_highlight_pane_cp021_copy1_ParamLimits

0xcba8,	// (0x0009a2ef) list_highlight_pane_cp021_copy1

0x0421,	// (0x0008db68) cset6_slider_pane_ParamLimits

0x0421,	// (0x0008db68) cset6_slider_pane

0x044d,	// (0x0008db94) main_cset6_slider_pane_g1_ParamLimits

0x044d,	// (0x0008db94) main_cset6_slider_pane_g1

0x898e,	// (0x000960d5) main_cset6_slider_pane_g2_ParamLimits

0x898e,	// (0x000960d5) main_cset6_slider_pane_g2

0x0475,	// (0x0008dbbc) main_cset6_slider_pane_g3_ParamLimits

0x0475,	// (0x0008dbbc) main_cset6_slider_pane_g3

0x89b6,	// (0x000960fd) main_cset6_slider_pane_g4_ParamLimits

0x89b6,	// (0x000960fd) main_cset6_slider_pane_g4

0x89c2,	// (0x00096109) main_cset6_slider_pane_g5_ParamLimits

0x89c2,	// (0x00096109) main_cset6_slider_pane_g5

0xe8a3,	// (0x0009bfea) main_cset6_slider_pane_g7_ParamLimits

0xe8a3,	// (0x0009bfea) main_cset6_slider_pane_g7

0xe8af,	// (0x0009bff6) main_cset6_slider_pane_g8_ParamLimits

0xe8af,	// (0x0009bff6) main_cset6_slider_pane_g8

0x89d0,	// (0x00096117) main_cset6_slider_pane_g9_ParamLimits

0x89d0,	// (0x00096117) main_cset6_slider_pane_g9

0x89dc,	// (0x00096123) main_cset6_slider_pane_g10_ParamLimits

0x89dc,	// (0x00096123) main_cset6_slider_pane_g10

0x89e8,	// (0x0009612f) main_cset6_slider_pane_g11_ParamLimits

0x89e8,	// (0x0009612f) main_cset6_slider_pane_g11

0x89f4,	// (0x0009613b) main_cset6_slider_pane_g12_ParamLimits

0x89f4,	// (0x0009613b) main_cset6_slider_pane_g12

0x8a00,	// (0x00096147) main_cset6_slider_pane_g13_ParamLimits

0x8a00,	// (0x00096147) main_cset6_slider_pane_g13

0x8a0c,	// (0x00096153) main_cset6_slider_pane_g14_ParamLimits

0x8a0c,	// (0x00096153) main_cset6_slider_pane_g14

0x8a18,	// (0x0009615f) main_cset6_slider_pane_g15_ParamLimits

0x8a18,	// (0x0009615f) main_cset6_slider_pane_g15

0x8a30,	// (0x00096177) main_cset6_slider_pane_g16_ParamLimits

0x8a30,	// (0x00096177) main_cset6_slider_pane_g16

0x8a3e,	// (0x00096185) main_cset6_slider_pane_g17_ParamLimits

0x8a3e,	// (0x00096185) main_cset6_slider_pane_g17

0x0011,

0xfb92,	// (0x0009d2d9) main_cset6_slider_pane_g_ParamLimits

0xfb92,	// (0x0009d2d9) main_cset6_slider_pane_g

0x0481,	// (0x0008dbc8) main_cset6_slider_pane_t1_ParamLimits

0x0481,	// (0x0008dbc8) main_cset6_slider_pane_t1

0x8a64,	// (0x000961ab) main_cset6_slider_pane_t2_ParamLimits

0x8a64,	// (0x000961ab) main_cset6_slider_pane_t2

0x8a8f,	// (0x000961d6) main_cset6_slider_pane_t3_ParamLimits

0x8a8f,	// (0x000961d6) main_cset6_slider_pane_t3

0x8aba,	// (0x00096201) main_cset6_slider_pane_t4_ParamLimits

0x8aba,	// (0x00096201) main_cset6_slider_pane_t4

0x8ae5,	// (0x0009622c) main_cset6_slider_pane_t5_ParamLimits

0x8ae5,	// (0x0009622c) main_cset6_slider_pane_t5

0x04c2,	// (0x0008dc09) main_cset6_slider_pane_t7_ParamLimits

0x04c2,	// (0x0008dc09) main_cset6_slider_pane_t7

0x8b12,	// (0x00096259) main_cset6_slider_pane_t8_ParamLimits

0x8b12,	// (0x00096259) main_cset6_slider_pane_t8

0x8b36,	// (0x0009627d) main_cset6_slider_pane_t9_ParamLimits

0x8b36,	// (0x0009627d) main_cset6_slider_pane_t9

0x8b5a,	// (0x000962a1) main_cset6_slider_pane_t10_ParamLimits

0x8b5a,	// (0x000962a1) main_cset6_slider_pane_t10

0x8b7e,	// (0x000962c5) main_cset6_slider_pane_t11_ParamLimits

0x8b7e,	// (0x000962c5) main_cset6_slider_pane_t11

0x04f8,	// (0x0008dc3f) main_cset6_slider_pane_t14_ParamLimits

0x04f8,	// (0x0008dc3f) main_cset6_slider_pane_t14

0x0531,	// (0x0008dc78) main_cset6_slider_pane_t15_ParamLimits

0x0531,	// (0x0008dc78) main_cset6_slider_pane_t15

0x000b,

0xfbb7,	// (0x0009d2fe) main_cset6_slider_pane_t_ParamLimits

0xfbb7,	// (0x0009d2fe) main_cset6_slider_pane_t

0xe9c8,	// (0x0009c10f) cset_slider_pane_g1_copy1

0xe9d1,	// (0x0009c118) cset_slider_pane_g2_copy1

0xe9da,	// (0x0009c121) cset_slider_pane_g3_copy1

0xedcc,	// (0x0009c513) bg_popup_sub_pane_cp011_copy1

0x056a,	// (0x0008dcb1) main_cset_text_pane_g1_copy1

0xee95,	// (0x0009c5dc) main_cset_text_pane_t1_copy1

0xeea3,	// (0x0009c5ea) main_cset_text_pane_t2_copy1

0xeeb1,	// (0x0009c5f8) main_cset_text_pane_t3_copy1

0xeebf,	// (0x0009c606) main_cset_text_pane_t4_copy1

0xeecd,	// (0x0009c614) main_cset_text_pane_t5_copy1

0x0572,	// (0x0008dcb9) main_cset_text_pane_t6_copy1

0x0580,	// (0x0008dcc7) main_cset_text_pane_t7_copy1

0x8c72,	// (0x000963b9) main_cset_text2_pane_t1_copy1

0x5273,	// (0x000929ba) main_ncimui_pane

0x52d2,	// (0x00092a19) popup_query_ncimui_window_ParamLimits

0x52d2,	// (0x00092a19) popup_query_ncimui_window

0xdf66,	// (0x0009b6ad) field_cale_ev2_pane_g4_ParamLimits

0xdf66,	// (0x0009b6ad) field_cale_ev2_pane_g4

0x6ba2,	// (0x000942e9) cell_video_dialer_keypad_pane_g2_ParamLimits

0x6ba2,	// (0x000942e9) cell_video_dialer_keypad_pane_g2

0x0001,

0xf895,	// (0x0009cfdc) cell_video_dialer_keypad_pane_g_ParamLimits

0xf895,	// (0x0009cfdc) cell_video_dialer_keypad_pane_g

0x6bba,	// (0x00094301) cell_video_dialer_keypad_pane_t1

0xedcc,	// (0x0009c513) bg_popup_window_pane_cp012

0xb4e2,	// (0x00098c29) heading_pane_cp06

0x05ac,	// (0x0008dcf3) ncim_query_content_pane

0xedcc,	// (0x0009c513) bg_popup_heading_pane_cp01

0x05b4,	// (0x0008dcfb) ncim_heading_pane_t1

0x05c2,	// (0x0008dd09) ncim_indicator_popup_pane

0x05d4,	// (0x0008dd1b) ncim_query_button_pane

0x05e8,	// (0x0008dd2f) ncim_query_content_pane_t1

0x05fa,	// (0x0008dd41) ncim_query_content_pane_t2

0x0005,

0xfbfb,	// (0x0009d342) ncim_query_content_pane_t

0x0634,	// (0x0008dd7b) ncim_query_list_pane

0x0646,	// (0x0008dd8d) ncim_query_popup_pane

0x05c2,	// (0x0008dd09) ncim_indicator_popup_pane_ParamLimits

0x8dc5,	// (0x0009650c) ncim_query_content_pane_g1_ParamLimits

0x8dc5,	// (0x0009650c) ncim_query_content_pane_g1

0x05e8,	// (0x0008dd2f) ncim_query_content_pane_t1_ParamLimits

0x05fa,	// (0x0008dd41) ncim_query_content_pane_t2_ParamLimits

0x8dd1,	// (0x00096518) ncim_query_content_pane_t3_ParamLimits

0x8dd1,	// (0x00096518) ncim_query_content_pane_t3

0x8dee,	// (0x00096535) ncim_query_content_pane_t4_ParamLimits

0x8dee,	// (0x00096535) ncim_query_content_pane_t4

0x8e0b,	// (0x00096552) ncim_query_content_pane_t5_ParamLimits

0x8e0b,	// (0x00096552) ncim_query_content_pane_t5

0x060c,	// (0x0008dd53) ncim_query_content_pane_t6_ParamLimits

0x060c,	// (0x0008dd53) ncim_query_content_pane_t6

0xfbfb,	// (0x0009d342) ncim_query_content_pane_t_ParamLimits

0x0634,	// (0x0008dd7b) ncim_query_list_pane_ParamLimits

0x0646,	// (0x0008dd8d) ncim_query_popup_pane_ParamLimits

0x065a,	// (0x0008dda1) wait_bar_pane_cp04

0xedcc,	// (0x0009c513) input_focus_pane_cp011

0x0662,	// (0x0008dda9) ncim_query_popup_pane_t1

0x0670,	// (0x0008ddb7) ncim_list_query_list_pane_ParamLimits

0x0670,	// (0x0008ddb7) ncim_list_query_list_pane

0xedcc,	// (0x0009c513) bg_button_pane_cp027

0x067d,	// (0x0008ddc4) ncim_query_button_pane_g1

0xedcc,	// (0x0009c513) list_highlight_pane_cp012

0x0687,	// (0x0008ddce) ncim_list_query_list_pane_g1

0x068f,	// (0x0008ddd6) ncim_list_query_list_pane_t1

0x7247,	// (0x0009498e) cam4_indicators_pane_g3_ParamLimits

0x7247,	// (0x0009498e) cam4_indicators_pane_g3

0x734e,	// (0x00094a95) vid4_indicators_pane_g5_ParamLimits

0x734e,	// (0x00094a95) vid4_indicators_pane_g5

0x83b5,	// (0x00095afc) vid4_progress_pane_g5_ParamLimits

0x83b5,	// (0x00095afc) vid4_progress_pane_g5

0x8cb1,	// (0x000963f8) main_ncimui_pane_g1

0x8d19,	// (0x00096460) ncimui_group_query_pane_ParamLimits

0x8d19,	// (0x00096460) ncimui_group_query_pane

0x8d61,	// (0x000964a8) ncimui_list_pane_ParamLimits

0x8d61,	// (0x000964a8) ncimui_list_pane

0x8d88,	// (0x000964cf) ncimui_text_pane_ParamLimits

0x8d88,	// (0x000964cf) ncimui_text_pane

0x8e28,	// (0x0009656f) ncimui_text_pane_t1_ParamLimits

0x8e28,	// (0x0009656f) ncimui_text_pane_t1

0x069d,	// (0x0008dde4) ncimui_list_single_graphic_pane_ParamLimits

0x069d,	// (0x0008dde4) ncimui_list_single_graphic_pane

0x8e47,	// (0x0009658e) ncimui_query_pane_ParamLimits

0x8e47,	// (0x0009658e) ncimui_query_pane

0xedcc,	// (0x0009c513) list_highlight_pane_cp013

0x06ad,	// (0x0008ddf4) ncim_list_query_list_pane_t1_copy1

0x0687,	// (0x0008ddce) ncim_list_single_graphic_pane_g1

0x8e5a,	// (0x000965a1) ncim_query_button_pane_cp01

0x8e66,	// (0x000965ad) ncim_query_entry_pane_ParamLimits

0x8e66,	// (0x000965ad) ncim_query_entry_pane

0x8e79,	// (0x000965c0) ncimui_query_pane_g1

0x8e85,	// (0x000965cc) ncimui_query_pane_t1_ParamLimits

0x8e85,	// (0x000965cc) ncimui_query_pane_t1

0xcba8,	// (0x0009a2ef) input_focus_pane_cp012

0x06bb,	// (0x0008de02) ncim_query_entry_pane_t1

0xac29,	// (0x00098370) main_im_pane_ParamLimits

0x5273,	// (0x000929ba) main_mobtv_pane_ParamLimits

0x5273,	// (0x000929ba) main_mobtv_pane

0x8a4c,	// (0x00096193) main_cset6_slider_pane_g18_ParamLimits

0x8a4c,	// (0x00096193) main_cset6_slider_pane_g18

0x8a58,	// (0x0009619f) main_cset6_slider_pane_g19_ParamLimits

0x8a58,	// (0x0009619f) main_cset6_slider_pane_g19

0xe737,	// (0x0009be7e) bg_main_mobtv_pane_ParamLimits

0xe737,	// (0x0009be7e) bg_main_mobtv_pane

0x8e9e,	// (0x000965e5) main_mobtv_info_pane

0x8ea9,	// (0x000965f0) main_mobtv_loading_pane_ParamLimits

0x8ea9,	// (0x000965f0) main_mobtv_loading_pane

0x06db,	// (0x0008de22) main_mobtv_pg_channel_list_pane

0x06e5,	// (0x0008de2c) main_mobtv_pg_hdr_pane

0x8eb6,	// (0x000965fd) main_mobtv_programe_curr_pane_ParamLimits

0x8eb6,	// (0x000965fd) main_mobtv_programe_curr_pane

0x8ec3,	// (0x0009660a) main_mobtv_programe_next_pane_ParamLimits

0x8ec3,	// (0x0009660a) main_mobtv_programe_next_pane

0x06ee,	// (0x0008de35) popup_mobtv_noti_window

0xdc9e,	// (0x0009b3e5) main_tv_pg_hdr_pane_g1

0x06f6,	// (0x0008de3d) main_tv_pg_hdr_pane_g2

0x06fe,	// (0x0008de45) main_tv_pg_hdr_pane_g3

0x0706,	// (0x0008de4d) main_tv_pg_hdr_pane_g4

0x070e,	// (0x0008de55) main_tv_pg_hdr_pane_g5

0x0718,	// (0x0008de5f) main_tv_pg_hdr_pane_g6

0x0722,	// (0x0008de69) main_tv_pg_hdr_pane_g7

0x072c,	// (0x0008de73) main_tv_pg_hdr_pane_g8

0x0736,	// (0x0008de7d) main_tv_pg_hdr_pane_g9

0x0740,	// (0x0008de87) main_tv_pg_hdr_pane_g10

0x074a,	// (0x0008de91) main_tv_pg_hdr_pane_g11

0x000a,

0xfc08,	// (0x0009d34f) main_tv_pg_hdr_pane_g

0x0754,	// (0x0008de9b) main_tv_pg_hdr_pane_t1

0x0762,	// (0x0008dea9) main_tv_pg_hdr_pane_t2

0x0770,	// (0x0008deb7) main_tv_pg_hdr_pane_t3

0x0780,	// (0x0008dec7) main_tv_pg_hdr_pane_t4

0x0790,	// (0x0008ded7) main_tv_pg_hdr_pane_t5

0x0004,

0xfc1f,	// (0x0009d366) main_tv_pg_hdr_pane_t

0x07a0,	// (0x0008dee7) single_mobtv_pg_channel_pane_ParamLimits

0x07a0,	// (0x0008dee7) single_mobtv_pg_channel_pane

0x07b2,	// (0x0008def9) single_mobtv_pg_channel_table_pane

0x07bb,	// (0x0008df02) single_mobtv_pg_channel_thumb_pane

0x07c4,	// (0x0008df0b) single_tv_pg_channel_pane_g1

0x07cd,	// (0x0008df14) single_tv_pg_channel_pane_g2

0x0001,

0xfc2a,	// (0x0009d371) single_tv_pg_channel_pane_g

0xdf01,	// (0x0009b648) bg_single_mobtv_pg_channel_thumb_pane_ParamLimits

0xdf01,	// (0x0009b648) bg_single_mobtv_pg_channel_thumb_pane

0x07d6,	// (0x0008df1d) single_mobtv_pg_channel_thumb_pane_g1_ParamLimits

0x07d6,	// (0x0008df1d) single_mobtv_pg_channel_thumb_pane_g1

0x07e4,	// (0x0008df2b) single_mobtv_pg_channel_thumb_pane_g2_ParamLimits

0x07e4,	// (0x0008df2b) single_mobtv_pg_channel_thumb_pane_g2

0x07f0,	// (0x0008df37) single_mobtv_pg_channel_thumb_pane_g3_ParamLimits

0x07f0,	// (0x0008df37) single_mobtv_pg_channel_thumb_pane_g3

0x0002,

0xfc2f,	// (0x0009d376) single_mobtv_pg_channel_thumb_pane_g_ParamLimits

0xfc2f,	// (0x0009d376) single_mobtv_pg_channel_thumb_pane_g

0x07fc,	// (0x0008df43) single_mobtv_pg_channel_thumb_pane_t1

0x080a,	// (0x0008df51) single_mobtv_pg_channel_thumb_pane_t2

0x0001,

0xfc36,	// (0x0009d37d) single_mobtv_pg_channel_thumb_pane_t

0xdc9e,	// (0x0009b3e5) bg_single_mobtv_pg_channel_table_pane_g1

0xdc9e,	// (0x0009b3e5) bg_single_mobtv_pg_channel_table_pane_g2

0x0001,

0xf6dc,	// (0x0009ce23) bg_single_mobtv_pg_channel_table_pane_g

0x0818,	// (0x0008df5f) single_mobtv_pg_channel_table_pane_t1

0x0826,	// (0x0008df6d) single_mobtv_pg_channel_table_pane_t2

0x0001,

0xfc3b,	// (0x0009d382) single_mobtv_pg_channel_table_pane_t

0x8ed8,	// (0x0009661f) main_mobtv_info_pane_g1_ParamLimits

0x8ed8,	// (0x0009661f) main_mobtv_info_pane_g1

0x8ef4,	// (0x0009663b) main_mobtv_info_pane_t1_ParamLimits

0x8ef4,	// (0x0009663b) main_mobtv_info_pane_t1

0x8f6c,	// (0x000966b3) main_mobtv_info_pane_t2_ParamLimits

0x8f6c,	// (0x000966b3) main_mobtv_info_pane_t2

0x0002,

0xfc45,	// (0x0009d38c) main_mobtv_info_pane_t_ParamLimits

0xfc45,	// (0x0009d38c) main_mobtv_info_pane_t

0x8ffb,	// (0x00096742) wait_bar_pane_cp05

0x900d,	// (0x00096754) main_mobtv_loading_pane_g1_ParamLimits

0x900d,	// (0x00096754) main_mobtv_loading_pane_g1

0x901b,	// (0x00096762) main_mobtv_loading_pane_g2_ParamLimits

0x901b,	// (0x00096762) main_mobtv_loading_pane_g2

0x9027,	// (0x0009676e) main_mobtv_loading_pane_g3_ParamLimits

0x9027,	// (0x0009676e) main_mobtv_loading_pane_g3

0x0002,

0xfc4c,	// (0x0009d393) main_mobtv_loading_pane_g_ParamLimits

0xfc4c,	// (0x0009d393) main_mobtv_loading_pane_g

0x0834,	// (0x0008df7b) main_mobtv_loading_pane_t1_ParamLimits

0x0834,	// (0x0008df7b) main_mobtv_loading_pane_t1

0x084c,	// (0x0008df93) main_mobtv_loading_pane_t2_ParamLimits

0x084c,	// (0x0008df93) main_mobtv_loading_pane_t2

0x0001,

0xfc53,	// (0x0009d39a) main_mobtv_loading_pane_t_ParamLimits

0xfc53,	// (0x0009d39a) main_mobtv_loading_pane_t

0x9035,	// (0x0009677c) wait_bar_pane_cp06_ParamLimits

0x9035,	// (0x0009677c) wait_bar_pane_cp06

0x0870,	// (0x0008dfb7) main_mobtv_programe_curr_pane_t1

0x087e,	// (0x0008dfc5) main_mobtv_programe_curr_pane_t2

0x0001,

0xfc58,	// (0x0009d39f) main_mobtv_programe_curr_pane_t

0x088c,	// (0x0008dfd3) main_mobtv_programe_next_pane_t1

0x089a,	// (0x0008dfe1) main_mobtv_programe_next_pane_t2

0x08a8,	// (0x0008dfef) main_mobtv_programe_next_pane_t3

0x0002,

0xfc5d,	// (0x0009d3a4) main_mobtv_programe_next_pane_t

0xedcc,	// (0x0009c513) bg_popup_mobtv_noti_window_pane

0x08b6,	// (0x0008dffd) popup_mobtv_noti_window_g1

0x08be,	// (0x0008e005) popup_mobtv_noti_window_t1

0x08cc,	// (0x0008e013) popup_mobtv_noti_window_t2

0x0001,

0xfc64,	// (0x0009d3ab) popup_mobtv_noti_window_t

0xdc9e,	// (0x0009b3e5) bg_popup_mobtv_noti_window_pane_g1

0x2060,	// (0x0008f7a7) sc_clock_pane

0x2060,	// (0x0008f7a7) main_fs_bigclock_pane

0x85c9,	// (0x00095d10) blid2_tripm_pane_t4_ParamLimits

0x85c9,	// (0x00095d10) blid2_tripm_pane_t4

0x9041,	// (0x00096788) sc_clock_pane_g1_ParamLimits

0x9041,	// (0x00096788) sc_clock_pane_g1

0x904f,	// (0x00096796) sc_clock_pane_t1_ParamLimits

0x904f,	// (0x00096796) sc_clock_pane_t1

0x9062,	// (0x000967a9) sc_clock_pane_t2_ParamLimits

0x9062,	// (0x000967a9) sc_clock_pane_t2

0x9074,	// (0x000967bb) sc_clock_pane_t3_ParamLimits

0x9074,	// (0x000967bb) sc_clock_pane_t3

0x0004,

0xfc69,	// (0x0009d3b0) sc_clock_pane_t_ParamLimits

0xfc69,	// (0x0009d3b0) sc_clock_pane_t

0x9fb1,	// (0x000976f8) main_fs_bigclock_indicator_pane_ParamLimits

0x9fb1,	// (0x000976f8) main_fs_bigclock_indicator_pane

0x90f7,	// (0x0009683e) main_fs_bigclock_pane_g1_ParamLimits

0x90f7,	// (0x0009683e) main_fs_bigclock_pane_g1

0x9fbd,	// (0x00097704) main_fs_bigclock_pane_t1_ParamLimits

0x9fbd,	// (0x00097704) main_fs_bigclock_pane_t1

0x9fcf,	// (0x00097716) main_fs_bigclock_pane_t2_ParamLimits

0x9fcf,	// (0x00097716) main_fs_bigclock_pane_t2

0x9fe3,	// (0x0009772a) main_fs_bigclock_pane_t3_ParamLimits

0x9fe3,	// (0x0009772a) main_fs_bigclock_pane_t3

0x0002,

0xfe73,	// (0x0009d5ba) main_fs_bigclock_pane_t_ParamLimits

0xfe73,	// (0x0009d5ba) main_fs_bigclock_pane_t

0xc2f9,	// (0x00099a40) main_fs_bigclock_indicator_pane_g1

0x05dc,	// (0x0008dd23) ncim_query_content_pane_g2_ParamLimits

0x05dc,	// (0x0008dd23) ncim_query_content_pane_g2

0x0001,

0xfbf6,	// (0x0009d33d) ncim_query_content_pane_g_ParamLimits

0xfbf6,	// (0x0009d33d) ncim_query_content_pane_g

0x9088,	// (0x000967cf) sc_clock_pane_t4_ParamLimits

0x9088,	// (0x000967cf) sc_clock_pane_t4

0x5273,	// (0x000929ba) main_radioblah_pane

0xe6aa,	// (0x0009bdf1) cell_call4_button_pane_t1_copy1_ParamLimits

0xe6aa,	// (0x0009bdf1) cell_call4_button_pane_t1_copy1

0x8ccb,	// (0x00096412) main_ncimui_pane_t1_ParamLimits

0x8ccb,	// (0x00096412) main_ncimui_pane_t1

0x8ce5,	// (0x0009642c) main_ncimui_pane_t2_ParamLimits

0x8ce5,	// (0x0009642c) main_ncimui_pane_t2

0x0002,

0xfbef,	// (0x0009d336) main_ncimui_pane_t_ParamLimits

0xfbef,	// (0x0009d336) main_ncimui_pane_t

0xbc1c,	// (0x00099363) main_radioblah_anim_pane_ParamLimits

0xbc1c,	// (0x00099363) main_radioblah_anim_pane

0xbc2d,	// (0x00099374) main_radioblah_info_pane_ParamLimits

0xbc2d,	// (0x00099374) main_radioblah_info_pane

0xbc41,	// (0x00099388) main_radioblah_pane_t1_ParamLimits

0xbc41,	// (0x00099388) main_radioblah_pane_t1

0xbc5d,	// (0x000993a4) main_radioblah_pane_t2_ParamLimits

0xbc5d,	// (0x000993a4) main_radioblah_pane_t2

0x0003,

0xfc8a,	// (0x0009d3d1) main_radioblah_pane_t_ParamLimits

0xfc8a,	// (0x0009d3d1) main_radioblah_pane_t

0x914d,	// (0x00096894) main_radioblah_rocker_ctrl_pane_ParamLimits

0x914d,	// (0x00096894) main_radioblah_rocker_ctrl_pane

0xbca5,	// (0x000993ec) main_radioblah_info_pane_t1_ParamLimits

0xbca5,	// (0x000993ec) main_radioblah_info_pane_t1

0x9192,	// (0x000968d9) main_radioblah_info_pane_t2_ParamLimits

0x9192,	// (0x000968d9) main_radioblah_info_pane_t2

0x0003,

0xfc93,	// (0x0009d3da) main_radioblah_info_pane_t_ParamLimits

0xfc93,	// (0x0009d3da) main_radioblah_info_pane_t

0xdc9e,	// (0x0009b3e5) main_radioblah_rocker_ctrl_pane_g1

0x9242,	// (0x00096989) main_radioblah_rocker_ctrl_pane_g2

0x924a,	// (0x00096991) main_radioblah_rocker_ctrl_pane_g3

0x9252,	// (0x00096999) main_radioblah_rocker_ctrl_pane_g4

0x925a,	// (0x000969a1) main_radioblah_rocker_ctrl_pane_g5

0x9262,	// (0x000969a9) main_radioblah_rocker_ctrl_pane_g6

0x0005,

0xfc9c,	// (0x0009d3e3) main_radioblah_rocker_ctrl_pane_g

0x8c72,	// (0x000963b9) main_cset_text2_pane_t1_copy1_ParamLimits

0x7167,	// (0x000948ae) cam4_image_uncrop_qvga_pane

0x72bc,	// (0x00094a03) vid4_image_uncrop_qcif_pane

0x8757,	// (0x00095e9e) cam6_image_uncrop_qvga_pane_ParamLimits

0x8757,	// (0x00095e9e) cam6_image_uncrop_qvga_pane

0x02e3,	// (0x0008da2a) vid6_image_uncrop_qcif_pane_ParamLimits

0x02e3,	// (0x0008da2a) vid6_image_uncrop_qcif_pane

0xedcc,	// (0x0009c513) bg_popup_preview_window_pane_cp03

0x058e,	// (0x0008dcd5) list_cset_text2_pane

0x0596,	// (0x0008dcdd) main_cset6_text2_pane_g1

0x059e,	// (0x0008dce5) main_cset6_text2_pane_t1

0x926a,	// (0x000969b1) list_cset_text2_pane_t1_ParamLimits

0x926a,	// (0x000969b1) list_cset_text2_pane_t1

0x5273,	// (0x000929ba) main_radioblah_pane_ParamLimits

0x8fe7,	// (0x0009672e) main_mobtv_info_pane_t3_ParamLimits

0x8fe7,	// (0x0009672e) main_mobtv_info_pane_t3

0x913b,	// (0x00096882) main_radioblah_pane_g1

0x9166,	// (0x000968ad) main_radioblah_info_pane_g1

0x91e7,	// (0x0009692e) main_radioblah_info_pane_t3_ParamLimits

0x91e7,	// (0x0009692e) main_radioblah_info_pane_t3

0x3f36,	// (0x0009167d) highlight_cell_cale_month_pane_ParamLimits

0x3f36,	// (0x0009167d) highlight_cell_cale_month_pane

0x2060,	// (0x0008f7a7) main_phob_fisheye_pane

0xe035,	// (0x0009b77c) scroll_pane_cp0031_ParamLimits

0xe035,	// (0x0009b77c) scroll_pane_cp0031

0x03f1,	// (0x0008db38) wait_bar_pane_cp08_ParamLimits

0x8963,	// (0x000960aa) cset_list_set_pane_copy1_ParamLimits

0xbcdf,	// (0x00099426) highlight_cell_cale_month_pane_g1

0x9287,	// (0x000969ce) highlight_cell_cale_month_pane_t1

0xf0c1,	// (0x0009c808) list_gen_pane_cp01

0xe88e,	// (0x0009bfd5) scroll_pane_01

0x9295,	// (0x000969dc) list_single_double_fisheye_pane

0x929e,	// (0x000969e5) list_double_fisheye_pane_g1_ParamLimits

0x929e,	// (0x000969e5) list_double_fisheye_pane_g1

0x92aa,	// (0x000969f1) list_double_fisheye_pane_g2_ParamLimits

0x92aa,	// (0x000969f1) list_double_fisheye_pane_g2

0x92be,	// (0x00096a05) list_double_fisheye_pane_g3_ParamLimits

0x92be,	// (0x00096a05) list_double_fisheye_pane_g3

0x0004,

0xfca9,	// (0x0009d3f0) list_double_fisheye_pane_g_ParamLimits

0xfca9,	// (0x0009d3f0) list_double_fisheye_pane_g

0x92e7,	// (0x00096a2e) list_double_fisheye_pane_t1_ParamLimits

0x92e7,	// (0x00096a2e) list_double_fisheye_pane_t1

0x9302,	// (0x00096a49) list_double_fisheye_pane_t2_ParamLimits

0x9302,	// (0x00096a49) list_double_fisheye_pane_t2

0x0001,

0xfcb4,	// (0x0009d3fb) list_double_fisheye_pane_t_ParamLimits

0xfcb4,	// (0x0009d3fb) list_double_fisheye_pane_t

0x2060,	// (0x0008f7a7) main_call5_pane

0x90ae,	// (0x000967f5) sc_swipe_pane_ParamLimits

0x90ae,	// (0x000967f5) sc_swipe_pane

0x9330,	// (0x00096a77) call5_image_pane_ParamLimits

0x9330,	// (0x00096a77) call5_image_pane

0x9340,	// (0x00096a87) call5_swipe_1_pane_ParamLimits

0x9340,	// (0x00096a87) call5_swipe_1_pane

0x934c,	// (0x00096a93) call5_swipe_2_pane_ParamLimits

0x934c,	// (0x00096a93) call5_swipe_2_pane

0x9366,	// (0x00096aad) popup_call5_audio_first_window_ParamLimits

0x9366,	// (0x00096aad) popup_call5_audio_first_window

0xdf01,	// (0x0009b648) call5_swipe_1_pane_g1_ParamLimits

0xdf01,	// (0x0009b648) call5_swipe_1_pane_g1

0xbce7,	// (0x0009942e) call5_swipe_1_pane_g2_ParamLimits

0xbce7,	// (0x0009942e) call5_swipe_1_pane_g2

0x0001,

0xfcb9,	// (0x0009d400) call5_swipe_1_pane_g_ParamLimits

0xfcb9,	// (0x0009d400) call5_swipe_1_pane_g

0xbcf3,	// (0x0009943a) call5_swipe_1_pane_t1_ParamLimits

0xbcf3,	// (0x0009943a) call5_swipe_1_pane_t1

0xdf01,	// (0x0009b648) call5_swipe_2_pane_g1_ParamLimits

0xdf01,	// (0x0009b648) call5_swipe_2_pane_g1

0xbd08,	// (0x0009944f) call5_swipe_2_pane_g2_ParamLimits

0xbd08,	// (0x0009944f) call5_swipe_2_pane_g2

0x0001,

0xfcbe,	// (0x0009d405) call5_swipe_2_pane_g_ParamLimits

0xfcbe,	// (0x0009d405) call5_swipe_2_pane_g

0xbd14,	// (0x0009945b) call5_swipe_2_pane_t1_ParamLimits

0xbd14,	// (0x0009945b) call5_swipe_2_pane_t1

0xbd29,	// (0x00099470) sc_swipe_pane_g1_ParamLimits

0xbd29,	// (0x00099470) sc_swipe_pane_g1

0xbd36,	// (0x0009947d) sc_swipe_pane_g2_ParamLimits

0xbd36,	// (0x0009947d) sc_swipe_pane_g2

0x0001,

0xfcc3,	// (0x0009d40a) sc_swipe_pane_g_ParamLimits

0xfcc3,	// (0x0009d40a) sc_swipe_pane_g

0xbd42,	// (0x00099489) sc_swipe_pane_t1_ParamLimits

0xbd42,	// (0x00099489) sc_swipe_pane_t1

0x2060,	// (0x0008f7a7) main_cmail_launcher_pane

0x9374,	// (0x00096abb) aid_size_cell_cmail_l_ParamLimits

0x9374,	// (0x00096abb) aid_size_cell_cmail_l

0x9384,	// (0x00096acb) grid_cmail_l_pane_ParamLimits

0x9384,	// (0x00096acb) grid_cmail_l_pane

0x9394,	// (0x00096adb) cell_cmail_l_pane_ParamLimits

0x9394,	// (0x00096adb) cell_cmail_l_pane

0x93a8,	// (0x00096aef) cell_cmail_l_pane_g1_ParamLimits

0x93a8,	// (0x00096aef) cell_cmail_l_pane_g1

0x93b4,	// (0x00096afb) cell_cmail_l_pane_t1_ParamLimits

0x93b4,	// (0x00096afb) cell_cmail_l_pane_t1

0xbd57,	// (0x0009949e) cell_cmail_l_pane_t2_ParamLimits

0xbd57,	// (0x0009949e) cell_cmail_l_pane_t2

0x0001,

0xfcc8,	// (0x0009d40f) cell_cmail_l_pane_t_ParamLimits

0xfcc8,	// (0x0009d40f) cell_cmail_l_pane_t

0xcba8,	// (0x0009a2ef) grid_highlight_pane_cp018_ParamLimits

0xcba8,	// (0x0009a2ef) grid_highlight_pane_cp018

0x1eb6,	// (0x0008f5fd) main2_pane_ParamLimits

0x1eb6,	// (0x0008f5fd) main2_pane

0xacc2,	// (0x00098409) popup_sp_fs_action_menu_bg_pane_g1

0xacca,	// (0x00098411) popup_sp_fs_action_menu_bg_pane_g2

0xacd2,	// (0x00098419) popup_sp_fs_action_menu_bg_pane_g3

0xacda,	// (0x00098421) popup_sp_fs_action_menu_bg_pane_g4

0xace2,	// (0x00098429) popup_sp_fs_action_menu_bg_pane_g5

0xacea,	// (0x00098431) popup_sp_fs_action_menu_bg_pane_g6

0xacf2,	// (0x00098439) popup_sp_fs_action_menu_bg_pane_g7

0xacfa,	// (0x00098441) popup_sp_fs_action_menu_bg_pane_g8

0xad02,	// (0x00098449) popup_sp_fs_action_menu_bg_pane_g9

0xad0a,	// (0x00098451) popup_sp_fs_action_menu_bg_pane_g10

0xad0a,	// (0x00098451) popup_sp_fs_action_menu_bg_pane_g11

0x000a,

0xf18a,	// (0x0009c8d1) popup_sp_fs_action_menu_bg_pane_g

0x2d68,	// (0x000904af) list_medium_line_x2_t3_g3_g1_ParamLimits

0x2d68,	// (0x000904af) list_medium_line_x2_t3_g3_g1

0x2d74,	// (0x000904bb) list_medium_line_x2_t3_g3_g2_ParamLimits

0x2d74,	// (0x000904bb) list_medium_line_x2_t3_g3_g2

0x2d80,	// (0x000904c7) list_medium_line_x2_t3_g3_g3_ParamLimits

0x2d80,	// (0x000904c7) list_medium_line_x2_t3_g3_g3

0x0002,

0xf238,	// (0x0009c97f) list_medium_line_x2_t3_g3_g_ParamLimits

0xf238,	// (0x0009c97f) list_medium_line_x2_t3_g3_g

0x2d8c,	// (0x000904d3) list_medium_line_x2_t3_g3_t1_ParamLimits

0x2d8c,	// (0x000904d3) list_medium_line_x2_t3_g3_t1

0x2da1,	// (0x000904e8) list_medium_line_x2_t3_g3_t2_ParamLimits

0x2da1,	// (0x000904e8) list_medium_line_x2_t3_g3_t2

0x2db3,	// (0x000904fa) list_medium_line_x2_t3_g3_t3_ParamLimits

0x2db3,	// (0x000904fa) list_medium_line_x2_t3_g3_t3

0x0002,

0xf23f,	// (0x0009c986) list_medium_line_x2_t3_g3_t_ParamLimits

0xf23f,	// (0x0009c986) list_medium_line_x2_t3_g3_t

0x2d68,	// (0x000904af) list_medium_line_x2_t3_g2_g1_ParamLimits

0x2d68,	// (0x000904af) list_medium_line_x2_t3_g2_g1

0x2d80,	// (0x000904c7) list_medium_line_x2_t3_g2_g2_ParamLimits

0x2d80,	// (0x000904c7) list_medium_line_x2_t3_g2_g2

0x0001,

0xf246,	// (0x0009c98d) list_medium_line_x2_t3_g2_g_ParamLimits

0xf246,	// (0x0009c98d) list_medium_line_x2_t3_g2_g

0x2dc8,	// (0x0009050f) list_medium_line_x2_t3_g2_t1_ParamLimits

0x2dc8,	// (0x0009050f) list_medium_line_x2_t3_g2_t1

0x2dde,	// (0x00090525) list_medium_line_x2_t3_g2_t2_ParamLimits

0x2dde,	// (0x00090525) list_medium_line_x2_t3_g2_t2

0x2db3,	// (0x000904fa) list_medium_line_x2_t3_g2_t3_ParamLimits

0x2db3,	// (0x000904fa) list_medium_line_x2_t3_g2_t3

0x0002,

0xf24b,	// (0x0009c992) list_medium_line_x2_t3_g2_t_ParamLimits

0xf24b,	// (0x0009c992) list_medium_line_x2_t3_g2_t

0x2d68,	// (0x000904af) list_medium_line_x2_t4_g4_g1_ParamLimits

0x2d68,	// (0x000904af) list_medium_line_x2_t4_g4_g1

0x2df0,	// (0x00090537) list_medium_line_x2_t4_g4_g2_ParamLimits

0x2df0,	// (0x00090537) list_medium_line_x2_t4_g4_g2

0x2d74,	// (0x000904bb) list_medium_line_x2_t4_g4_g3_ParamLimits

0x2d74,	// (0x000904bb) list_medium_line_x2_t4_g4_g3

0x2dfc,	// (0x00090543) list_medium_line_x2_t4_g4_g4_ParamLimits

0x2dfc,	// (0x00090543) list_medium_line_x2_t4_g4_g4

0x0003,

0xf252,	// (0x0009c999) list_medium_line_x2_t4_g4_g_ParamLimits

0xf252,	// (0x0009c999) list_medium_line_x2_t4_g4_g

0x2e08,	// (0x0009054f) list_medium_line_x2_t4_g4_t1_ParamLimits

0x2e08,	// (0x0009054f) list_medium_line_x2_t4_g4_t1

0x2e22,	// (0x00090569) list_medium_line_x2_t4_g4_t2_ParamLimits

0x2e22,	// (0x00090569) list_medium_line_x2_t4_g4_t2

0x2e38,	// (0x0009057f) list_medium_line_x2_t4_g4_t3_ParamLimits

0x2e38,	// (0x0009057f) list_medium_line_x2_t4_g4_t3

0x2e4d,	// (0x00090594) list_medium_line_x2_t4_g4_t4_ParamLimits

0x2e4d,	// (0x00090594) list_medium_line_x2_t4_g4_t4

0x0003,

0xf25b,	// (0x0009c9a2) list_medium_line_x2_t4_g4_t_ParamLimits

0xf25b,	// (0x0009c9a2) list_medium_line_x2_t4_g4_t

0x2d68,	// (0x000904af) list_medium_line_x2_t2_g4_g1_ParamLimits

0x2d68,	// (0x000904af) list_medium_line_x2_t2_g4_g1

0x2df0,	// (0x00090537) list_medium_line_x2_t2_g4_g2_ParamLimits

0x2df0,	// (0x00090537) list_medium_line_x2_t2_g4_g2

0x2d74,	// (0x000904bb) list_medium_line_x2_t2_g4_g3_ParamLimits

0x2d74,	// (0x000904bb) list_medium_line_x2_t2_g4_g3

0x2d80,	// (0x000904c7) list_medium_line_x2_t2_g4_g4_ParamLimits

0x2d80,	// (0x000904c7) list_medium_line_x2_t2_g4_g4

0x0003,

0xf2c2,	// (0x0009ca09) list_medium_line_x2_t2_g4_g_ParamLimits

0xf2c2,	// (0x0009ca09) list_medium_line_x2_t2_g4_g

0x3f5c,	// (0x000916a3) list_medium_line_x2_t2_g4_t1_ParamLimits

0x3f5c,	// (0x000916a3) list_medium_line_x2_t2_g4_t1

0x2db3,	// (0x000904fa) list_medium_line_x2_t2_g4_t2_ParamLimits

0x2db3,	// (0x000904fa) list_medium_line_x2_t2_g4_t2

0x0001,

0xf2cb,	// (0x0009ca12) list_medium_line_x2_t2_g4_t_ParamLimits

0xf2cb,	// (0x0009ca12) list_medium_line_x2_t2_g4_t

0x2d68,	// (0x000904af) list_medium_line_x2_t2_g3_g1_ParamLimits

0x2d68,	// (0x000904af) list_medium_line_x2_t2_g3_g1

0x2d74,	// (0x000904bb) list_medium_line_x2_t2_g3_g2_ParamLimits

0x2d74,	// (0x000904bb) list_medium_line_x2_t2_g3_g2

0x2d80,	// (0x000904c7) list_medium_line_x2_t2_g3_g3_ParamLimits

0x2d80,	// (0x000904c7) list_medium_line_x2_t2_g3_g3

0x0002,

0xf238,	// (0x0009c97f) list_medium_line_x2_t2_g3_g_ParamLimits

0xf238,	// (0x0009c97f) list_medium_line_x2_t2_g3_g

0x3f71,	// (0x000916b8) list_medium_line_x2_t2_g3_t1_ParamLimits

0x3f71,	// (0x000916b8) list_medium_line_x2_t2_g3_t1

0x2db3,	// (0x000904fa) list_medium_line_x2_t2_g3_t2_ParamLimits

0x2db3,	// (0x000904fa) list_medium_line_x2_t2_g3_t2

0x0001,

0xf2d0,	// (0x0009ca17) list_medium_line_x2_t2_g3_t_ParamLimits

0xf2d0,	// (0x0009ca17) list_medium_line_x2_t2_g3_t

0x4138,	// (0x0009187f) main_sp_fs_list_pane_ParamLimits

0x4138,	// (0x0009187f) main_sp_fs_list_pane

0x4144,	// (0x0009188b) sp_fs_scroll_pane_ParamLimits

0x4144,	// (0x0009188b) sp_fs_scroll_pane

0x4150,	// (0x00091897) list_medium_line_x2_t3_t1

0x4160,	// (0x000918a7) list_medium_line_x2_t3_t2

0x416e,	// (0x000918b5) list_medium_line_x2_t3_t3

0x0002,

0xf31b,	// (0x0009ca62) list_medium_line_x2_t3_t

0x417c,	// (0x000918c3) list_medium_line_x3_t4_t1

0x418c,	// (0x000918d3) list_medium_line_x3_t4_t2

0x419a,	// (0x000918e1) list_medium_line_x3_t4_t3

0x416e,	// (0x000918b5) list_medium_line_x3_t4_t4

0x0003,

0xf322,	// (0x0009ca69) list_medium_line_x3_t4_t

0x41a8,	// (0x000918ef) list_medium_line_x4_t5_t1

0x41b8,	// (0x000918ff) list_medium_line_x4_t5_t2

0x419a,	// (0x000918e1) list_medium_line_x4_t5_t3

0x41c6,	// (0x0009190d) list_medium_line_x4_t5_t4

0x416e,	// (0x000918b5) list_medium_line_x4_t5_t5

0x0004,

0xf32b,	// (0x0009ca72) list_medium_line_x4_t5_t

0x2d68,	// (0x000904af) list_medium_line_t4_g4_g1_ParamLimits

0x2d68,	// (0x000904af) list_medium_line_t4_g4_g1

0x41d4,	// (0x0009191b) list_medium_line_t4_g4_g2_ParamLimits

0x41d4,	// (0x0009191b) list_medium_line_t4_g4_g2

0x41e0,	// (0x00091927) list_medium_line_t4_g4_g3_ParamLimits

0x41e0,	// (0x00091927) list_medium_line_t4_g4_g3

0x2d80,	// (0x000904c7) list_medium_line_t4_g4_g4_ParamLimits

0x2d80,	// (0x000904c7) list_medium_line_t4_g4_g4

0x0003,

0xf336,	// (0x0009ca7d) list_medium_line_t4_g4_g_ParamLimits

0xf336,	// (0x0009ca7d) list_medium_line_t4_g4_g

0x41ec,	// (0x00091933) list_medium_line_t4_g4_t1_ParamLimits

0x41ec,	// (0x00091933) list_medium_line_t4_g4_t1

0x4201,	// (0x00091948) list_medium_line_t4_g4_t2_ParamLimits

0x4201,	// (0x00091948) list_medium_line_t4_g4_t2

0x4216,	// (0x0009195d) list_medium_line_t4_g4_t3_ParamLimits

0x4216,	// (0x0009195d) list_medium_line_t4_g4_t3

0x2db3,	// (0x000904fa) list_medium_line_t4_g4_t4_ParamLimits

0x2db3,	// (0x000904fa) list_medium_line_t4_g4_t4

0x0003,

0xf33f,	// (0x0009ca86) list_medium_line_t4_g4_t_ParamLimits

0xf33f,	// (0x0009ca86) list_medium_line_t4_g4_t

0x432c,	// (0x00091a73) chi_dic_find_pane_g1

0x528f,	// (0x000929d6) main_tport_pane

0x7c79,	// (0x000953c0) list_medium_line_plain_t1

0x7d59,	// (0x000954a0) list_medium_line_t2_g2_g1_ParamLimits

0x7d59,	// (0x000954a0) list_medium_line_t2_g2_g1

0x7d65,	// (0x000954ac) list_medium_line_t2_g2_g2_ParamLimits

0x7d65,	// (0x000954ac) list_medium_line_t2_g2_g2

0x0001,

0xfa00,	// (0x0009d147) list_medium_line_t2_g2_g_ParamLimits

0xfa00,	// (0x0009d147) list_medium_line_t2_g2_g

0x7d71,	// (0x000954b8) list_medium_line_t2_g2_t1_ParamLimits

0x7d71,	// (0x000954b8) list_medium_line_t2_g2_t1

0x7d8b,	// (0x000954d2) list_medium_line_t2_g2_t2_ParamLimits

0x7d8b,	// (0x000954d2) list_medium_line_t2_g2_t2

0x0001,

0xfa05,	// (0x0009d14c) list_medium_line_t2_g2_t_ParamLimits

0xfa05,	// (0x0009d14c) list_medium_line_t2_g2_t

0xea87,	// (0x0009c1ce) aid_sp_fs_list_icon_a_sm

0x005e,	// (0x0008d7a5) aid_sp_fs_list_icon_d

0x0066,	// (0x0008d7ad) aid_sp_fs_text_primary

0xea8f,	// (0x0009c1d6) aid_sp_fs_text_secondary

0x8414,	// (0x00095b5b) list_medium_line

0x8414,	// (0x00095b5b) list_medium_line_g2

0x8414,	// (0x00095b5b) list_medium_line_g3

0x8414,	// (0x00095b5b) list_medium_line_plain

0x8414,	// (0x00095b5b) list_medium_line_plain_t2

0x8414,	// (0x00095b5b) list_medium_line_plain_t3

0x8414,	// (0x00095b5b) list_medium_line_right_icon

0x8414,	// (0x00095b5b) list_medium_line_right_iconx2

0x8414,	// (0x00095b5b) list_medium_line_t2

0x8414,	// (0x00095b5b) list_medium_line_t2_g2

0x8414,	// (0x00095b5b) list_medium_line_t2_g3

0x8414,	// (0x00095b5b) list_medium_line_t2_right_icon

0x8414,	// (0x00095b5b) list_medium_line_t2_right_iconx2

0x8414,	// (0x00095b5b) list_medium_line_t3

0x8414,	// (0x00095b5b) list_medium_line_t3_g2

0x8414,	// (0x00095b5b) list_medium_line_t3_g3

0x8414,	// (0x00095b5b) list_medium_line_t3_right_iconx2

0x841d,	// (0x00095b64) list_medium_line_t4_g4

0x08f5,	// (0x0008e03c) list_medium_line_x2

0x08f5,	// (0x0008e03c) list_medium_line_x2_t2_g2

0x08f5,	// (0x0008e03c) list_medium_line_x2_t2_g3

0x08f5,	// (0x0008e03c) list_medium_line_x2_t2_g4

0x08f5,	// (0x0008e03c) list_medium_line_x2_t3

0x08f5,	// (0x0008e03c) list_medium_line_x2_t3_g2

0x08f5,	// (0x0008e03c) list_medium_line_x2_t3_g3

0x08f5,	// (0x0008e03c) list_medium_line_x2_t3_g4

0x08f5,	// (0x0008e03c) list_medium_line_x2_t4_g2

0x08f5,	// (0x0008e03c) list_medium_line_x2_t4_g4

0x8426,	// (0x00095b6d) list_medium_line_x3

0x8426,	// (0x00095b6d) list_medium_line_x3_t4

0x8426,	// (0x00095b6d) list_medium_line_x3_t4_g4

0x841d,	// (0x00095b64) list_medium_line_x4_t4

0x841d,	// (0x00095b64) list_medium_line_x4_t4_g7

0x841d,	// (0x00095b64) list_medium_line_x4_t5

0x842f,	// (0x00095b76) list_single_fs_dyc_pane_ParamLimits

0x842f,	// (0x00095b76) list_single_fs_dyc_pane

0x2d68,	// (0x000904af) list_medium_line_x4_t4_g7_g1_ParamLimits

0x2d68,	// (0x000904af) list_medium_line_x4_t4_g7_g1

0x8ba2,	// (0x000962e9) list_medium_line_x4_t4_g7_g2_ParamLimits

0x8ba2,	// (0x000962e9) list_medium_line_x4_t4_g7_g2

0x8bae,	// (0x000962f5) list_medium_line_x4_t4_g7_g3_ParamLimits

0x8bae,	// (0x000962f5) list_medium_line_x4_t4_g7_g3

0x8bbd,	// (0x00096304) list_medium_line_x4_t4_g7_g4_ParamLimits

0x8bbd,	// (0x00096304) list_medium_line_x4_t4_g7_g4

0x8bc9,	// (0x00096310) list_medium_line_x4_t4_g7_g5_ParamLimits

0x8bc9,	// (0x00096310) list_medium_line_x4_t4_g7_g5

0x8bd8,	// (0x0009631f) list_medium_line_x4_t4_g7_g6_ParamLimits

0x8bd8,	// (0x0009631f) list_medium_line_x4_t4_g7_g6

0x8be7,	// (0x0009632e) list_medium_line_x4_t4_g7_g7_ParamLimits

0x8be7,	// (0x0009632e) list_medium_line_x4_t4_g7_g7

0x0006,

0xfbd0,	// (0x0009d317) list_medium_line_x4_t4_g7_g_ParamLimits

0xfbd0,	// (0x0009d317) list_medium_line_x4_t4_g7_g

0x8bf3,	// (0x0009633a) list_medium_line_x4_t4_g7_t1_ParamLimits

0x8bf3,	// (0x0009633a) list_medium_line_x4_t4_g7_t1

0x8c08,	// (0x0009634f) list_medium_line_x4_t4_g7_t2_ParamLimits

0x8c08,	// (0x0009634f) list_medium_line_x4_t4_g7_t2

0x8c1d,	// (0x00096364) list_medium_line_x4_t4_g7_t3_ParamLimits

0x8c1d,	// (0x00096364) list_medium_line_x4_t4_g7_t3

0x8c32,	// (0x00096379) list_medium_line_x4_t4_g7_t4_ParamLimits

0x8c32,	// (0x00096379) list_medium_line_x4_t4_g7_t4

0x8c44,	// (0x0009638b) list_medium_line_x4_t4_g7_t5_ParamLimits

0x8c44,	// (0x0009638b) list_medium_line_x4_t4_g7_t5

0x0004,

0xfbdf,	// (0x0009d326) list_medium_line_x4_t4_g7_t_ParamLimits

0xfbdf,	// (0x0009d326) list_medium_line_x4_t4_g7_t

0x8c56,	// (0x0009639d) list_single_dyc_row_pane_ParamLimits

0x8c56,	// (0x0009639d) list_single_dyc_row_pane

0x9324,	// (0x00096a6b) call5_gesture_pane_ParamLimits

0x9324,	// (0x00096a6b) call5_gesture_pane

0x9358,	// (0x00096a9f) call5_windows_pane_ParamLimits

0x9358,	// (0x00096a9f) call5_windows_pane

0x93ca,	// (0x00096b11) call5_swipe_1_pane_cp_ParamLimits

0x93ca,	// (0x00096b11) call5_swipe_1_pane_cp

0x93d6,	// (0x00096b1d) call5_swipe_2_pane_cp_ParamLimits

0x93d6,	// (0x00096b1d) call5_swipe_2_pane_cp

0xadee,	// (0x00098535) call5_image_pane_cp

0x93e2,	// (0x00096b29) popup_call5_audio_first_window_cp_ParamLimits

0x93e2,	// (0x00096b29) popup_call5_audio_first_window_cp

0xbd29,	// (0x00099470) call5_swipe_1_pane_g1_cp_ParamLimits

0xbd29,	// (0x00099470) call5_swipe_1_pane_g1_cp

0xbd69,	// (0x000994b0) call5_swipe_1_pane_g2_cp

0xbd42,	// (0x00099489) call5_swipe_1_pane_t1_cp_ParamLimits

0xbd42,	// (0x00099489) call5_swipe_1_pane_t1_cp

0xbd29,	// (0x00099470) call5_swipe_2_pane_g1_cp_ParamLimits

0xbd29,	// (0x00099470) call5_swipe_2_pane_g1_cp

0xbd71,	// (0x000994b8) call5_swipe_2_pane_g2_cp

0xbd79,	// (0x000994c0) call5_swipe_2_pane_t1_cp_ParamLimits

0xbd79,	// (0x000994c0) call5_swipe_2_pane_t1_cp

0xcba8,	// (0x0009a2ef) main_sp_fs_email_pane

0xbd8e,	// (0x000994d5) main_sp_fs_listscroll_pane_te

0x93f0,	// (0x00096b37) popup_sp_fs_action_menu_pane_ParamLimits

0x93f0,	// (0x00096b37) popup_sp_fs_action_menu_pane

0xdc9e,	// (0x0009b3e5) bg_sp_fs_ctrlbar_pane_g1

0xbd97,	// (0x000994de) bg_sp_fs_ctrlbar_ddmenu_pane_g1

0xbda0,	// (0x000994e7) bg_sp_fs_ctrlbar_ddmenu_pane_g2

0xbda9,	// (0x000994f0) bg_sp_fs_ctrlbar_ddmenu_pane_g3

0xdc9e,	// (0x0009b3e5) bg_sp_fs_ctrlbar_ddmenu_pane_g4

0x0003,

0xfccd,	// (0x0009d414) bg_sp_fs_ctrlbar_ddmenu_pane_g

0xda83,	// (0x0009b1ca) bg_sp_fs_ctrlbar_ddmenu_pane_ParamLimits

0xda83,	// (0x0009b1ca) bg_sp_fs_ctrlbar_ddmenu_pane

0xbdb2,	// (0x000994f9) main_sp_fs_ctrlbar_ddmenu_pane_g1_ParamLimits

0xbdb2,	// (0x000994f9) main_sp_fs_ctrlbar_ddmenu_pane_g1

0xbdbe,	// (0x00099505) main_sp_fs_ctrlbar_ddmenu_pane_g2_ParamLimits

0xbdbe,	// (0x00099505) main_sp_fs_ctrlbar_ddmenu_pane_g2

0x0001,

0xfcd6,	// (0x0009d41d) main_sp_fs_ctrlbar_ddmenu_pane_g_ParamLimits

0xfcd6,	// (0x0009d41d) main_sp_fs_ctrlbar_ddmenu_pane_g

0xbdca,	// (0x00099511) main_sp_fs_ctrlbar_ddmenu_pane_t1_ParamLimits

0xbdca,	// (0x00099511) main_sp_fs_ctrlbar_ddmenu_pane_t1

0x9434,	// (0x00096b7b) list_medium_line_t2_right_icon_g1

0x943c,	// (0x00096b83) list_medium_line_t2_right_icon_t1

0x944c,	// (0x00096b93) list_medium_line_t2_right_icon_t2

0x0001,

0xfcdb,	// (0x0009d422) list_medium_line_t2_right_icon_t

0xd88d,	// (0x0009afd4) bg_sp_fs_ctrlbar_pane_ParamLimits

0xd88d,	// (0x0009afd4) bg_sp_fs_ctrlbar_pane

0x94b1,	// (0x00096bf8) main_sp_fs_ctrlbar_button_pane_cp01

0x94b9,	// (0x00096c00) main_sp_fs_ctrlbar_ddmenu_pane

0xbe1c,	// (0x00099563) main_sp_fs_ctrlbar_pane_g1

0xbe28,	// (0x0009956f) main_sp_fs_ctrlbar_pane_g2

0x0001,

0xfce0,	// (0x0009d427) main_sp_fs_ctrlbar_pane_g

0xbe34,	// (0x0009957b) main_sp_fs_ctrlbar_pane_t1

0x94c3,	// (0x00096c0a) main_sp_fs_ctrlbar_pane

0x94d9,	// (0x00096c20) main_sp_fs_listscroll_pane_te_cp01

0x94ea,	// (0x00096c31) popup_sp_fs_action_menu_pane_cp01_ParamLimits

0x94ea,	// (0x00096c31) popup_sp_fs_action_menu_pane_cp01

0xcba8,	// (0x0009a2ef) bg_sp_fs_highlight_list_pane_cp01_ParamLimits

0xcba8,	// (0x0009a2ef) bg_sp_fs_highlight_list_pane_cp01

0xea98,	// (0x0009c1df) sp_fs_action_menu_list_gene_pane_g1_ParamLimits

0xea98,	// (0x0009c1df) sp_fs_action_menu_list_gene_pane_g1

0xbe64,	// (0x000995ab) sp_fs_action_menu_list_gene_pane_g2_ParamLimits

0xbe64,	// (0x000995ab) sp_fs_action_menu_list_gene_pane_g2

0x0001,

0xfcea,	// (0x0009d431) sp_fs_action_menu_list_gene_pane_g_ParamLimits

0xfcea,	// (0x0009d431) sp_fs_action_menu_list_gene_pane_g

0xeaa7,	// (0x0009c1ee) sp_fs_action_menu_list_gene_pane_t1_ParamLimits

0xeaa7,	// (0x0009c1ee) sp_fs_action_menu_list_gene_pane_t1

0xeabf,	// (0x0009c206) sp_fs_action_menu_list_gene_pane_ParamLimits

0xeabf,	// (0x0009c206) sp_fs_action_menu_list_gene_pane

0xbe71,	// (0x000995b8) popup_sp_fs_action_menu_bg_pane_ParamLimits

0xbe71,	// (0x000995b8) popup_sp_fs_action_menu_bg_pane

0xeae0,	// (0x0009c227) sp_fs_action_menu_list_pane_ParamLimits

0xeae0,	// (0x0009c227) sp_fs_action_menu_list_pane

0x08fe,	// (0x0008e045) sp_fs_scroll_pane_cp01_ParamLimits

0x08fe,	// (0x0008e045) sp_fs_scroll_pane_cp01

0x9514,	// (0x00096c5b) list_medium_line_plain_t2_t1

0x9524,	// (0x00096c6b) list_medium_line_plain_t2_t2

0x0001,

0xfcef,	// (0x0009d436) list_medium_line_plain_t2_t

0x9532,	// (0x00096c79) list_medium_line_plain_t3_t1

0x9542,	// (0x00096c89) list_medium_line_plain_t3_t2

0x9550,	// (0x00096c97) list_medium_line_plain_t3_t3

0x0002,

0xfcf4,	// (0x0009d43b) list_medium_line_plain_t3_t

0x2d68,	// (0x000904af) list_medium_line_x2_t2_g2_g1_ParamLimits

0x2d68,	// (0x000904af) list_medium_line_x2_t2_g2_g1

0x2d80,	// (0x000904c7) list_medium_line_x2_t2_g2_g2_ParamLimits

0x2d80,	// (0x000904c7) list_medium_line_x2_t2_g2_g2

0x0001,

0xf246,	// (0x0009c98d) list_medium_line_x2_t2_g2_g_ParamLimits

0xf246,	// (0x0009c98d) list_medium_line_x2_t2_g2_g

0x41ec,	// (0x00091933) list_medium_line_x2_t2_g2_t1_ParamLimits

0x41ec,	// (0x00091933) list_medium_line_x2_t2_g2_t1

0x2db3,	// (0x000904fa) list_medium_line_x2_t2_g2_t2_ParamLimits

0x2db3,	// (0x000904fa) list_medium_line_x2_t2_g2_t2

0x0001,

0xfcfb,	// (0x0009d442) list_medium_line_x2_t2_g2_t_ParamLimits

0xfcfb,	// (0x0009d442) list_medium_line_x2_t2_g2_t

0x2d68,	// (0x000904af) list_medium_line_x2_t4_g2_g1_ParamLimits

0x2d68,	// (0x000904af) list_medium_line_x2_t4_g2_g1

0x955e,	// (0x00096ca5) list_medium_line_x2_t4_g2_g2_ParamLimits

0x955e,	// (0x00096ca5) list_medium_line_x2_t4_g2_g2

0x0001,

0xfd00,	// (0x0009d447) list_medium_line_x2_t4_g2_g_ParamLimits

0xfd00,	// (0x0009d447) list_medium_line_x2_t4_g2_g

0x9570,	// (0x00096cb7) list_medium_line_x2_t4_g2_t1_ParamLimits

0x9570,	// (0x00096cb7) list_medium_line_x2_t4_g2_t1

0x958a,	// (0x00096cd1) list_medium_line_x2_t4_g2_t2_ParamLimits

0x958a,	// (0x00096cd1) list_medium_line_x2_t4_g2_t2

0x95a0,	// (0x00096ce7) list_medium_line_x2_t4_g2_t3_ParamLimits

0x95a0,	// (0x00096ce7) list_medium_line_x2_t4_g2_t3

0x2db3,	// (0x000904fa) list_medium_line_x2_t4_g2_t4_ParamLimits

0x2db3,	// (0x000904fa) list_medium_line_x2_t4_g2_t4

0x0003,

0xfd05,	// (0x0009d44c) list_medium_line_x2_t4_g2_t_ParamLimits

0xfd05,	// (0x0009d44c) list_medium_line_x2_t4_g2_t

0x95b5,	// (0x00096cfc) list_medium_line_t3_right_iconx2_g1

0x9434,	// (0x00096b7b) list_medium_line_t3_right_iconx2_g2

0x95bd,	// (0x00096d04) list_medium_line_t3_right_iconx2_g3

0x0002,

0xfd0e,	// (0x0009d455) list_medium_line_t3_right_iconx2_g

0x95c5,	// (0x00096d0c) list_medium_line_t3_right_iconx2_t1

0x95d5,	// (0x00096d1c) list_medium_line_t3_right_iconx2_t2

0x0001,

0xfd15,	// (0x0009d45c) list_medium_line_t3_right_iconx2_t

0x2d68,	// (0x000904af) list_medium_line_x3_t4_g4_g1_ParamLimits

0x2d68,	// (0x000904af) list_medium_line_x3_t4_g4_g1

0x2d74,	// (0x000904bb) list_medium_line_x3_t4_g4_g2_ParamLimits

0x2d74,	// (0x000904bb) list_medium_line_x3_t4_g4_g2

0x41d4,	// (0x0009191b) list_medium_line_x3_t4_g4_g3_ParamLimits

0x41d4,	// (0x0009191b) list_medium_line_x3_t4_g4_g3

0x95e3,	// (0x00096d2a) list_medium_line_x3_t4_g4_g4_ParamLimits

0x95e3,	// (0x00096d2a) list_medium_line_x3_t4_g4_g4

0x0003,

0xfd1a,	// (0x0009d461) list_medium_line_x3_t4_g4_g_ParamLimits

0xfd1a,	// (0x0009d461) list_medium_line_x3_t4_g4_g

0x95ef,	// (0x00096d36) list_medium_line_x3_t4_g4_t1_ParamLimits

0x95ef,	// (0x00096d36) list_medium_line_x3_t4_g4_t1

0x9606,	// (0x00096d4d) list_medium_line_x3_t4_g4_t2_ParamLimits

0x9606,	// (0x00096d4d) list_medium_line_x3_t4_g4_t2

0x4201,	// (0x00091948) list_medium_line_x3_t4_g4_t3_ParamLimits

0x4201,	// (0x00091948) list_medium_line_x3_t4_g4_t3

0x961b,	// (0x00096d62) list_medium_line_x3_t4_g4_t4_ParamLimits

0x961b,	// (0x00096d62) list_medium_line_x3_t4_g4_t4

0x0003,

0xfd23,	// (0x0009d46a) list_medium_line_x3_t4_g4_t_ParamLimits

0xfd23,	// (0x0009d46a) list_medium_line_x3_t4_g4_t

0x9638,	// (0x00096d7f) list_single_dyc_row_text_pane_t1_ParamLimits

0x9638,	// (0x00096d7f) list_single_dyc_row_text_pane_t1

0x966f,	// (0x00096db6) list_single_dyc_row_text_pane_t2_ParamLimits

0x966f,	// (0x00096db6) list_single_dyc_row_text_pane_t2

0xeb02,	// (0x0009c249) list_single_dyc_row_text_pane_t3_ParamLimits

0xeb02,	// (0x0009c249) list_single_dyc_row_text_pane_t3

0x0005,

0xfd2c,	// (0x0009d473) list_single_dyc_row_text_pane_t_ParamLimits

0xfd2c,	// (0x0009d473) list_single_dyc_row_text_pane_t

0xeb26,	// (0x0009c26d) list_single_dyc_row_pane_g1_ParamLimits

0xeb26,	// (0x0009c26d) list_single_dyc_row_pane_g1

0xeb32,	// (0x0009c279) list_single_dyc_row_pane_g2_ParamLimits

0xeb32,	// (0x0009c279) list_single_dyc_row_pane_g2

0xeb3e,	// (0x0009c285) list_single_dyc_row_pane_g3_ParamLimits

0xeb3e,	// (0x0009c285) list_single_dyc_row_pane_g3

0xeb4a,	// (0x0009c291) list_single_dyc_row_pane_g4_ParamLimits

0xeb4a,	// (0x0009c291) list_single_dyc_row_pane_g4

0x0003,

0xfd39,	// (0x0009d480) list_single_dyc_row_pane_g_ParamLimits

0xfd39,	// (0x0009d480) list_single_dyc_row_pane_g

0xeb56,	// (0x0009c29d) list_single_dyc_row_text_pane_ParamLimits

0xeb56,	// (0x0009c29d) list_single_dyc_row_text_pane

0xedcc,	// (0x0009c513) bg_sp_fs_scroll_pane

0xbe7f,	// (0x000995c6) thumb_sp_fs_scroll_pane

0x7d59,	// (0x000954a0) list_medium_line_g1_ParamLimits

0x7d59,	// (0x000954a0) list_medium_line_g1

0x9792,	// (0x00096ed9) list_medium_line_t1_ParamLimits

0x9792,	// (0x00096ed9) list_medium_line_t1

0x2d68,	// (0x000904af) list_medium_line_x2_g1_ParamLimits

0x2d68,	// (0x000904af) list_medium_line_x2_g1

0x2d74,	// (0x000904bb) list_medium_line_x2_g2_ParamLimits

0x2d74,	// (0x000904bb) list_medium_line_x2_g2

0x0001,

0xfd42,	// (0x0009d489) list_medium_line_x2_g_ParamLimits

0xfd42,	// (0x0009d489) list_medium_line_x2_g

0xeb75,	// (0x0009c2bc) list_medium_line_x2_t1_ParamLimits

0xeb75,	// (0x0009c2bc) list_medium_line_x2_t1

0x2d68,	// (0x000904af) list_medium_line_x3_g1_ParamLimits

0x2d68,	// (0x000904af) list_medium_line_x3_g1

0x2d74,	// (0x000904bb) list_medium_line_x3_g2_ParamLimits

0x2d74,	// (0x000904bb) list_medium_line_x3_g2

0x0001,

0xfd42,	// (0x0009d489) list_medium_line_x3_g_ParamLimits

0xfd42,	// (0x0009d489) list_medium_line_x3_g

0xeb75,	// (0x0009c2bc) list_medium_line_x3_t1_ParamLimits

0xeb75,	// (0x0009c2bc) list_medium_line_x3_t1

0xbe88,	// (0x000995cf) thumb_sp_fs_scroll_pane_g1

0xbe91,	// (0x000995d8) thumb_sp_fs_scroll_pane_g2

0xbe9a,	// (0x000995e1) thumb_sp_fs_scroll_pane_g3

0x0002,

0xfd47,	// (0x0009d48e) thumb_sp_fs_scroll_pane_g

0xbe88,	// (0x000995cf) bg_sp_fs_scroll_pane_g1

0xbe91,	// (0x000995d8) bg_sp_fs_scroll_pane_g2

0xbe9a,	// (0x000995e1) bg_sp_fs_scroll_pane_g3

0x0002,

0xfd47,	// (0x0009d48e) bg_sp_fs_scroll_pane_g

0x2d68,	// (0x000904af) list_medium_line_x2_t3_g4_g1_ParamLimits

0x2d68,	// (0x000904af) list_medium_line_x2_t3_g4_g1

0x2df0,	// (0x00090537) list_medium_line_x2_t3_g4_g2_ParamLimits

0x2df0,	// (0x00090537) list_medium_line_x2_t3_g4_g2

0x2d74,	// (0x000904bb) list_medium_line_x2_t3_g4_g3_ParamLimits

0x2d74,	// (0x000904bb) list_medium_line_x2_t3_g4_g3

0x2d80,	// (0x000904c7) list_medium_line_x2_t3_g4_g4_ParamLimits

0x2d80,	// (0x000904c7) list_medium_line_x2_t3_g4_g4

0x0003,

0xf2c2,	// (0x0009ca09) list_medium_line_x2_t3_g4_g_ParamLimits

0xf2c2,	// (0x0009ca09) list_medium_line_x2_t3_g4_g

0x97a7,	// (0x00096eee) list_medium_line_x2_t3_g4_t1_ParamLimits

0x97a7,	// (0x00096eee) list_medium_line_x2_t3_g4_t1

0x97bd,	// (0x00096f04) list_medium_line_x2_t3_g4_t2_ParamLimits

0x97bd,	// (0x00096f04) list_medium_line_x2_t3_g4_t2

0x2db3,	// (0x000904fa) list_medium_line_x2_t3_g4_t3_ParamLimits

0x2db3,	// (0x000904fa) list_medium_line_x2_t3_g4_t3

0x0002,

0xfd4e,	// (0x0009d495) list_medium_line_x2_t3_g4_t_ParamLimits

0xfd4e,	// (0x0009d495) list_medium_line_x2_t3_g4_t

0x7d59,	// (0x000954a0) list_medium_line_g2_g1_ParamLimits

0x7d59,	// (0x000954a0) list_medium_line_g2_g1

0x7d65,	// (0x000954ac) list_medium_line_g2_g2_ParamLimits

0x7d65,	// (0x000954ac) list_medium_line_g2_g2

0x0001,

0xfa00,	// (0x0009d147) list_medium_line_g2_g_ParamLimits

0xfa00,	// (0x0009d147) list_medium_line_g2_g

0x97d7,	// (0x00096f1e) list_medium_line_g2_t1_ParamLimits

0x97d7,	// (0x00096f1e) list_medium_line_g2_t1

0x7d59,	// (0x000954a0) list_medium_line_t3_g2_g1_ParamLimits

0x7d59,	// (0x000954a0) list_medium_line_t3_g2_g1

0x7d65,	// (0x000954ac) list_medium_line_t3_g2_g2_ParamLimits

0x7d65,	// (0x000954ac) list_medium_line_t3_g2_g2

0x0001,

0xfa00,	// (0x0009d147) list_medium_line_t3_g2_g_ParamLimits

0xfa00,	// (0x0009d147) list_medium_line_t3_g2_g

0x97ec,	// (0x00096f33) list_medium_line_t3_g2_t1_ParamLimits

0x97ec,	// (0x00096f33) list_medium_line_t3_g2_t1

0x9806,	// (0x00096f4d) list_medium_line_t3_g2_t2_ParamLimits

0x9806,	// (0x00096f4d) list_medium_line_t3_g2_t2

0x981c,	// (0x00096f63) list_medium_line_t3_g2_t3_ParamLimits

0x981c,	// (0x00096f63) list_medium_line_t3_g2_t3

0x0002,

0xfd55,	// (0x0009d49c) list_medium_line_t3_g2_t_ParamLimits

0xfd55,	// (0x0009d49c) list_medium_line_t3_g2_t

0x9434,	// (0x00096b7b) list_medium_line_right_icon_g1

0x9832,	// (0x00096f79) list_medium_line_right_icon_t1

0x7d59,	// (0x000954a0) list_medium_line_t2_g1_ParamLimits

0x7d59,	// (0x000954a0) list_medium_line_t2_g1

0x9840,	// (0x00096f87) list_medium_line_t2_t1_ParamLimits

0x9840,	// (0x00096f87) list_medium_line_t2_t1

0x985a,	// (0x00096fa1) list_medium_line_t2_t2_ParamLimits

0x985a,	// (0x00096fa1) list_medium_line_t2_t2

0x0001,

0xfd5c,	// (0x0009d4a3) list_medium_line_t2_t_ParamLimits

0xfd5c,	// (0x0009d4a3) list_medium_line_t2_t

0x7d59,	// (0x000954a0) list_medium_line_t3_g1_ParamLimits

0x7d59,	// (0x000954a0) list_medium_line_t3_g1

0x986f,	// (0x00096fb6) list_medium_line_t3_t1_ParamLimits

0x986f,	// (0x00096fb6) list_medium_line_t3_t1

0x9889,	// (0x00096fd0) list_medium_line_t3_t2_ParamLimits

0x9889,	// (0x00096fd0) list_medium_line_t3_t2

0x989f,	// (0x00096fe6) list_medium_line_t3_t3_ParamLimits

0x989f,	// (0x00096fe6) list_medium_line_t3_t3

0x0002,

0xfd61,	// (0x0009d4a8) list_medium_line_t3_t_ParamLimits

0xfd61,	// (0x0009d4a8) list_medium_line_t3_t

0x7d59,	// (0x000954a0) list_medium_line_g3_g1_ParamLimits

0x7d59,	// (0x000954a0) list_medium_line_g3_g1

0x98b4,	// (0x00096ffb) list_medium_line_g3_g2_ParamLimits

0x98b4,	// (0x00096ffb) list_medium_line_g3_g2

0x7d65,	// (0x000954ac) list_medium_line_g3_g3_ParamLimits

0x7d65,	// (0x000954ac) list_medium_line_g3_g3

0x0002,

0xfd68,	// (0x0009d4af) list_medium_line_g3_g_ParamLimits

0xfd68,	// (0x0009d4af) list_medium_line_g3_g

0x98c0,	// (0x00097007) list_medium_line_g3_t1_ParamLimits

0x98c0,	// (0x00097007) list_medium_line_g3_t1

0x7d59,	// (0x000954a0) list_medium_line_t2_g3_g1_ParamLimits

0x7d59,	// (0x000954a0) list_medium_line_t2_g3_g1

0x98b4,	// (0x00096ffb) list_medium_line_t2_g3_g2_ParamLimits

0x98b4,	// (0x00096ffb) list_medium_line_t2_g3_g2

0x7d65,	// (0x000954ac) list_medium_line_t2_g3_g3_ParamLimits

0x7d65,	// (0x000954ac) list_medium_line_t2_g3_g3

0x0002,

0xfd68,	// (0x0009d4af) list_medium_line_t2_g3_g_ParamLimits

0xfd68,	// (0x0009d4af) list_medium_line_t2_g3_g

0x98d5,	// (0x0009701c) list_medium_line_t2_g3_t1_ParamLimits

0x98d5,	// (0x0009701c) list_medium_line_t2_g3_t1

0x98ef,	// (0x00097036) list_medium_line_t2_g3_t2_ParamLimits

0x98ef,	// (0x00097036) list_medium_line_t2_g3_t2

0x0001,

0xfd6f,	// (0x0009d4b6) list_medium_line_t2_g3_t_ParamLimits

0xfd6f,	// (0x0009d4b6) list_medium_line_t2_g3_t

0x7d59,	// (0x000954a0) list_medium_line_t3_g3_g1_ParamLimits

0x7d59,	// (0x000954a0) list_medium_line_t3_g3_g1

0x98b4,	// (0x00096ffb) list_medium_line_t3_g3_g2_ParamLimits

0x98b4,	// (0x00096ffb) list_medium_line_t3_g3_g2

0x7d65,	// (0x000954ac) list_medium_line_t3_g3_g3_ParamLimits

0x7d65,	// (0x000954ac) list_medium_line_t3_g3_g3

0x0002,

0xfd68,	// (0x0009d4af) list_medium_line_t3_g3_g_ParamLimits

0xfd68,	// (0x0009d4af) list_medium_line_t3_g3_g

0x9905,	// (0x0009704c) list_medium_line_t3_g3_t1_ParamLimits

0x9905,	// (0x0009704c) list_medium_line_t3_g3_t1

0x991e,	// (0x00097065) list_medium_line_t3_g3_t2_ParamLimits

0x991e,	// (0x00097065) list_medium_line_t3_g3_t2

0x9934,	// (0x0009707b) list_medium_line_t3_g3_t3_ParamLimits

0x9934,	// (0x0009707b) list_medium_line_t3_g3_t3

0x0002,

0xfd74,	// (0x0009d4bb) list_medium_line_t3_g3_t_ParamLimits

0xfd74,	// (0x0009d4bb) list_medium_line_t3_g3_t

0x95b5,	// (0x00096cfc) list_medium_line_right_iconx2_g1

0x9434,	// (0x00096b7b) list_medium_line_right_iconx2_g2

0x0001,

0xfd7b,	// (0x0009d4c2) list_medium_line_right_iconx2_g

0x994a,	// (0x00097091) list_medium_line_right_iconx2_t1

0x95b5,	// (0x00096cfc) list_medium_line_t2_right_iconx2_g1

0x9434,	// (0x00096b7b) list_medium_line_t2_right_iconx2_g2

0x0001,

0xfd7b,	// (0x0009d4c2) list_medium_line_t2_right_iconx2_g

0x9958,	// (0x0009709f) list_medium_line_t2_right_iconx2_t1

0x9968,	// (0x000970af) list_medium_line_t2_right_iconx2_t2

0x0001,

0xfd80,	// (0x0009d4c7) list_medium_line_t2_right_iconx2_t

0x9976,	// (0x000970bd) list_medium_line_x4_t4_t1

0x9984,	// (0x000970cb) list_medium_line_x4_t4_t2

0x9994,	// (0x000970db) list_medium_line_x4_t4_t3

0x99a4,	// (0x000970eb) list_medium_line_x4_t4_t4

0x0003,

0xfd85,	// (0x0009d4cc) list_medium_line_x4_t4_t

0x99de,	// (0x00097125) tport_appsw_pane_ParamLimits

0x99de,	// (0x00097125) tport_appsw_pane

0x99ec,	// (0x00097133) tport_contact_pane_ParamLimits

0x99ec,	// (0x00097133) tport_contact_pane

0x99fc,	// (0x00097143) tport_listscroll_pane_ParamLimits

0x99fc,	// (0x00097143) tport_listscroll_pane

0x9a0c,	// (0x00097153) cell_tport_appsw_pane_ParamLimits

0x9a0c,	// (0x00097153) cell_tport_appsw_pane

0xdfbe,	// (0x0009b705) tport_appsw_pane_g1_ParamLimits

0xdfbe,	// (0x0009b705) tport_appsw_pane_g1

0xbea3,	// (0x000995ea) tport_contact_pane_g1

0x0662,	// (0x0008dda9) tport_contact_pane_t1

0xbeac,	// (0x000995f3) tport_contact_pane_t2

0x0001,

0xfd8e,	// (0x0009d4d5) tport_contact_pane_t

0xbeba,	// (0x00099601) list_tport_pane

0xbec3,	// (0x0009960a) scroll_pane_cp_030

0x9a3f,	// (0x00097186) cell_tport_appsw_pane_g1

0x9a4f,	// (0x00097196) cell_tport_appsw_pane_t1

0x9a5d,	// (0x000971a4) grid_highlight_pane_cp019

0x9a65,	// (0x000971ac) list_tport_double_graphic_pane_ParamLimits

0x9a65,	// (0x000971ac) list_tport_double_graphic_pane

0xcba8,	// (0x0009a2ef) list_highlight_pane_cp023_ParamLimits

0xcba8,	// (0x0009a2ef) list_highlight_pane_cp023

0x9a76,	// (0x000971bd) list_tport_double_graphic_pane_g1_ParamLimits

0x9a76,	// (0x000971bd) list_tport_double_graphic_pane_g1

0x9a83,	// (0x000971ca) list_tport_double_graphic_pane_t1_ParamLimits

0x9a83,	// (0x000971ca) list_tport_double_graphic_pane_t1

0x9a98,	// (0x000971df) list_tport_double_graphic_pane_t2_ParamLimits

0x9a98,	// (0x000971df) list_tport_double_graphic_pane_t2

0x0001,

0xfd9a,	// (0x0009d4e1) list_tport_double_graphic_pane_t_ParamLimits

0xfd9a,	// (0x0009d4e1) list_tport_double_graphic_pane_t

0xedcc,	// (0x0009c513) main_cale_note_pane

0x752b,	// (0x00094c72) cell_vitu2_function_top_wide_pane_cp01_ParamLimits

0x752b,	// (0x00094c72) cell_vitu2_function_top_wide_pane_cp01

0x8ffb,	// (0x00096742) wait_bar_pane_cp05_ParamLimits

0xcba8,	// (0x0009a2ef) listscroll_cmail_pane

0xbecc,	// (0x00099613) list_cmail_pane

0x9aaa,	// (0x000971f1) list_cmail_body_pane

0x9ad1,	// (0x00097218) list_single_cmail_header_caption_pane

0x9afc,	// (0x00097243) list_single_cmail_header_detail_pane_ParamLimits

0x9afc,	// (0x00097243) list_single_cmail_header_detail_pane

0xbedc,	// (0x00099623) list_single_cmail_header_caption_pane_t1

0x9b32,	// (0x00097279) list_single_cmail_header_detail_pane_g1_ParamLimits

0x9b32,	// (0x00097279) list_single_cmail_header_detail_pane_g1

0x0924,	// (0x0008e06b) list_single_cmail_header_detail_pane_g2_ParamLimits

0x0924,	// (0x0008e06b) list_single_cmail_header_detail_pane_g2

0x0002,

0xfd9f,	// (0x0009d4e6) list_single_cmail_header_detail_pane_g_ParamLimits

0xfd9f,	// (0x0009d4e6) list_single_cmail_header_detail_pane_g

0xeb8b,	// (0x0009c2d2) list_single_cmail_header_detail_pane_t1_ParamLimits

0xeb8b,	// (0x0009c2d2) list_single_cmail_header_detail_pane_t1

0xebeb,	// (0x0009c332) list_single_cmail_header_editor_pane_bg_ParamLimits

0xebeb,	// (0x0009c332) list_single_cmail_header_editor_pane_bg

0x07cd,	// (0x0008df14) list_cmail_body_pane_g1

0xbf08,	// (0x0009964f) list_cmail_body_pane_t1

0xe774,	// (0x0009bebb) list_single_cmail_header_editor_pane_bg_g1

0xb047,	// (0x0009878e) list_single_cmail_header_editor_pane_bg_g1_copy1

0xe784,	// (0x0009becb) list_single_cmail_header_editor_pane_bg_g1_copy2

0xe77c,	// (0x0009bec3) list_single_cmail_header_editor_pane_bg_g1_copy3

0xe9e3,	// (0x0009c12a) list_single_cmail_header_editor_pane_bg_g1_copy4

0xe7a4,	// (0x0009beeb) list_single_cmail_header_editor_pane_bg_g1_copy4_copy1

0xe794,	// (0x0009bedb) list_single_cmail_header_editor_pane_bg_g1_copy4_copy2

0xe79c,	// (0x0009bee3) list_single_cmail_header_editor_pane_bg_g1_copy4_copy3

0xb027,	// (0x0009876e) list_single_cmail_header_editor_pane_bg_g1_copy4_copy3_copy1

0x9b48,	// (0x0009728f) calenote_gesture_pane_ParamLimits

0x9b48,	// (0x0009728f) calenote_gesture_pane

0x9b62,	// (0x000972a9) calenote_window_pane_ParamLimits

0x9b62,	// (0x000972a9) calenote_window_pane

0xbf16,	// (0x0009965d) popup_note_window_cp01

0x9b7a,	// (0x000972c1) calenote_swipe_1_pane_ParamLimits

0x9b7a,	// (0x000972c1) calenote_swipe_1_pane

0x93d6,	// (0x00096b1d) calenote_swipe_2_pane_ParamLimits

0x93d6,	// (0x00096b1d) calenote_swipe_2_pane

0xbd29,	// (0x00099470) calenote_swipe_1_pane_g1_ParamLimits

0xbd29,	// (0x00099470) calenote_swipe_1_pane_g1

0xbd36,	// (0x0009947d) calenote_swipe_1_pane_g2_ParamLimits

0xbd36,	// (0x0009947d) calenote_swipe_1_pane_g2

0x0001,

0xfcc3,	// (0x0009d40a) calenote_swipe_1_pane_g_ParamLimits

0xfcc3,	// (0x0009d40a) calenote_swipe_1_pane_g

0xbf28,	// (0x0009966f) calenote_swipe_1_pane_t1_ParamLimits

0xbf28,	// (0x0009966f) calenote_swipe_1_pane_t1

0xbd29,	// (0x00099470) calenote_swipe_2_pane_g1_ParamLimits

0xbd29,	// (0x00099470) calenote_swipe_2_pane_g1

0xbf47,	// (0x0009968e) calenote_swipe_2_pane_g2_ParamLimits

0xbf47,	// (0x0009968e) calenote_swipe_2_pane_g2

0x0001,

0xfdab,	// (0x0009d4f2) calenote_swipe_2_pane_g_ParamLimits

0xfdab,	// (0x0009d4f2) calenote_swipe_2_pane_g

0xbf53,	// (0x0009969a) calenote_swipe_2_pane_t1_ParamLimits

0xbf53,	// (0x0009969a) calenote_swipe_2_pane_t1

0xedcc,	// (0x0009c513) main_mup_navstr_pane

0x627b,	// (0x000939c2) main_mup3_pane_t7_ParamLimits

0x627b,	// (0x000939c2) main_mup3_pane_t7

0x6c81,	// (0x000943c8) main_mp4_pane_g6_ParamLimits

0x6c81,	// (0x000943c8) main_mp4_pane_g6

0x7001,	// (0x00094748) main_image3_pane_t4_ParamLimits

0x7001,	// (0x00094748) main_image3_pane_t4

0x9b8d,	// (0x000972d4) popup_navstr_preview_pane_ParamLimits

0x9b8d,	// (0x000972d4) popup_navstr_preview_pane

0x9b99,	// (0x000972e0) scroll_navstr_pane_ParamLimits

0x9b99,	// (0x000972e0) scroll_navstr_pane

0xedcc,	// (0x0009c513) bg_popup_preview_window_pane_cp04

0xbf7a,	// (0x000996c1) popup_navstr_preview_pane_t1

0x9ba5,	// (0x000972ec) scroll_navstr_pane_g1_ParamLimits

0x9ba5,	// (0x000972ec) scroll_navstr_pane_g1

0x9bb2,	// (0x000972f9) scroll_navstr_pane_t1_ParamLimits

0x9bb2,	// (0x000972f9) scroll_navstr_pane_t1

0xbf1f,	// (0x00099666) bg_button_pane_cp014

0xbf1f,	// (0x00099666) bg_button_pane_cp030

0x92ca,	// (0x00096a11) list_double_fisheye_pane_g4_ParamLimits

0x92ca,	// (0x00096a11) list_double_fisheye_pane_g4

0x92d6,	// (0x00096a1d) list_double_fisheye_pane_g5_ParamLimits

0x92d6,	// (0x00096a1d) list_double_fisheye_pane_g5

0xcbc2,	// (0x0009a309) sp_fs_scroll_pane_cp03

0xbe1c,	// (0x00099563) main_sp_fs_ctrlbar_pane_g1_ParamLimits

0xbe28,	// (0x0009956f) main_sp_fs_ctrlbar_pane_g2_ParamLimits

0xfce0,	// (0x0009d427) main_sp_fs_ctrlbar_pane_g_ParamLimits

0xbe34,	// (0x0009957b) main_sp_fs_ctrlbar_pane_t1_ParamLimits

0xbed4,	// (0x0009961b) sp_fs_scroll_pane_cp02

0xad2d,	// (0x00098474) popup_sp_fs_calendar_preview_list_single_pane_ParamLimits

0xad2d,	// (0x00098474) popup_sp_fs_calendar_preview_list_single_pane

0xedcc,	// (0x0009c513) main_cam6_pano_pane

0x5273,	// (0x000929ba) main_mup3_pane_ParamLimits

0xedcc,	// (0x0009c513) main_phacti_pane

0x8ed0,	// (0x00096617) bg_button_pane_cp11

0x8ee8,	// (0x0009662f) main_mobtv_info_pane_g2_ParamLimits

0x8ee8,	// (0x0009662f) main_mobtv_info_pane_g2

0x0001,

0xfc40,	// (0x0009d387) main_mobtv_info_pane_g_ParamLimits

0xfc40,	// (0x0009d387) main_mobtv_info_pane_g

0x909a,	// (0x000967e1) sc_clock_pane_t5_ParamLimits

0x909a,	// (0x000967e1) sc_clock_pane_t5

0x913b,	// (0x00096882) main_radioblah_pane_g1_ParamLimits

0xbc75,	// (0x000993bc) main_radioblah_pane_t3_ParamLimits

0xbc75,	// (0x000993bc) main_radioblah_pane_t3

0xbc8d,	// (0x000993d4) main_radioblah_pane_t4_ParamLimits

0xbc8d,	// (0x000993d4) main_radioblah_pane_t4

0x9159,	// (0x000968a0) main_radioblah_text_pane_ParamLimits

0x9159,	// (0x000968a0) main_radioblah_text_pane

0x9166,	// (0x000968ad) main_radioblah_info_pane_g1_ParamLimits

0x91fb,	// (0x00096942) main_radioblah_info_pane_t4_ParamLimits

0x91fb,	// (0x00096942) main_radioblah_info_pane_t4

0xcba8,	// (0x0009a2ef) main_sp_fs_calendar_pane

0x9bc4,	// (0x0009730b) main_phacti_pane_g1

0x9bcc,	// (0x00097313) phacti_note_pane_ParamLimits

0x9bcc,	// (0x00097313) phacti_note_pane

0xbf91,	// (0x000996d8) phacti_term_pane_ParamLimits

0xbf91,	// (0x000996d8) phacti_term_pane

0xbfa6,	// (0x000996ed) phacti_note_pane_t1_ParamLimits

0xbfa6,	// (0x000996ed) phacti_note_pane_t1

0xec02,	// (0x0009c349) phacti_term_pane_g1

0xec0a,	// (0x0009c351) phacti_term_pane_t1_ParamLimits

0xec0a,	// (0x0009c351) phacti_term_pane_t1

0xbfbd,	// (0x00099704) popup_sp_fs_calendar_preview_list_single_pane_g1

0xadcc,	// (0x00098513) popup_sp_fs_calendar_preview_list_single_pane_g2

0x0001,

0xfdb5,	// (0x0009d4fc) popup_sp_fs_calendar_preview_list_single_pane_g

0xbfc5,	// (0x0009970c) popup_sp_fs_calendar_preview_list_single_pane_t1_ParamLimits

0xbfc5,	// (0x0009970c) popup_sp_fs_calendar_preview_list_single_pane_t1

0xbfdb,	// (0x00099722) aid_popup_sp_fs_bg_corner_pane

0xdc9e,	// (0x0009b3e5) popup_sp_fs_calendar_preview_bg_pane_g1

0xedcc,	// (0x0009c513) popup_sp_fs_calendar_preview_bg_pane

0xbfe3,	// (0x0009972a) popup_sp_fs_calendar_preview_list_pane

0xd88d,	// (0x0009afd4) bg_main_sp_fs_cale_pane_ParamLimits

0xd88d,	// (0x0009afd4) bg_main_sp_fs_cale_pane

0xec34,	// (0x0009c37b) listscroll_cale_mrui_pane_ParamLimits

0xec34,	// (0x0009c37b) listscroll_cale_mrui_pane

0xec49,	// (0x0009c390) listscroll_sp_fs_schedule_track_pane

0xec52,	// (0x0009c399) main_sp_fs_ctrlbar_pane_cp01_ParamLimits

0xec52,	// (0x0009c399) main_sp_fs_ctrlbar_pane_cp01

0xbfeb,	// (0x00099732) main_sp_fs_ribbon_pane

0xec65,	// (0x0009c3ac) popup_sp_fs_cale_preview_window

0x9c2f,	// (0x00097376) list_single_sp_fs_schedule_track_pane_ParamLimits

0x9c2f,	// (0x00097376) list_single_sp_fs_schedule_track_pane

0x0939,	// (0x0008e080) bg_sp_fs_highlight_list_pane_cp03_ParamLimits

0x0939,	// (0x0008e080) bg_sp_fs_highlight_list_pane_cp03

0x9c51,	// (0x00097398) list_single_sp_fs_schedule_track_pane_g1_ParamLimits

0x9c51,	// (0x00097398) list_single_sp_fs_schedule_track_pane_g1

0x9c5d,	// (0x000973a4) list_single_sp_fs_schedule_track_pane_g2_ParamLimits

0x9c5d,	// (0x000973a4) list_single_sp_fs_schedule_track_pane_g2

0x0001,

0xfdba,	// (0x0009d501) list_single_sp_fs_schedule_track_pane_g_ParamLimits

0xfdba,	// (0x0009d501) list_single_sp_fs_schedule_track_pane_g

0x9c69,	// (0x000973b0) list_single_sp_fs_schedule_track_pane_t1_ParamLimits

0x9c69,	// (0x000973b0) list_single_sp_fs_schedule_track_pane_t1

0x9c81,	// (0x000973c8) sp_fs_schedule_track_pane_ParamLimits

0x9c81,	// (0x000973c8) sp_fs_schedule_track_pane

0xbff3,	// (0x0009973a) sp_fs_schedule_track_pane_g1

0xbffb,	// (0x00099742) sp_fs_schedule_track_pane_g2

0xc003,	// (0x0009974a) sp_fs_schedule_track_pane_g3

0xc00b,	// (0x00099752) sp_fs_schedule_track_pane_g4

0xc013,	// (0x0009975a) sp_fs_schedule_track_pane_g5

0x0004,

0xfdbf,	// (0x0009d506) sp_fs_schedule_track_pane_g

0xe774,	// (0x0009bebb) bg_sp_fs_schedule_viewer_highlight_g1

0xb047,	// (0x0009878e) bg_sp_fs_schedule_viewer_highlight_g2

0xe77c,	// (0x0009bec3) bg_sp_fs_schedule_viewer_highlight_g3

0xe784,	// (0x0009becb) bg_sp_fs_schedule_viewer_highlight_g4

0xe9e3,	// (0x0009c12a) bg_sp_fs_schedule_viewer_highlight_g5

0xe794,	// (0x0009bedb) bg_sp_fs_schedule_viewer_highlight_g6

0xe79c,	// (0x0009bee3) bg_sp_fs_schedule_viewer_highlight_g7

0xe7a4,	// (0x0009beeb) bg_sp_fs_schedule_viewer_highlight_g8

0xb027,	// (0x0009876e) bg_sp_fs_schedule_viewer_highlight_g9

0x0008,

0xfdca,	// (0x0009d511) bg_sp_fs_schedule_viewer_highlight_g

0xedcc,	// (0x0009c513) bg_main_sp_fs_ribbon_pane

0x9c91,	// (0x000973d8) main_sp_fs_ribbon_pane_g1

0xc01b,	// (0x00099762) main_sp_fs_ribbon_pane_t1

0x9c9a,	// (0x000973e1) main_sp_fs_ribbon_pane_t2

0xc02a,	// (0x00099771) main_sp_fs_ribbon_pane_t3

0x0002,

0xfddd,	// (0x0009d524) main_sp_fs_ribbon_pane_t

0xc039,	// (0x00099780) main_sp_fs_ribbon_scheduler_pane

0xc041,	// (0x00099788) bg_main_sp_fs_ribbon_pane_g1

0xc04a,	// (0x00099791) bg_main_sp_fs_ribbon_pane_g2

0xc053,	// (0x0009979a) bg_main_sp_fs_ribbon_pane_g3

0x0002,

0xfde4,	// (0x0009d52b) bg_main_sp_fs_ribbon_pane_g

0xc05b,	// (0x000997a2) main_sp_fs_ribbon_scheduler_pane_g1

0xc064,	// (0x000997ab) main_sp_fs_ribbon_scheduler_pane_g2

0xc06d,	// (0x000997b4) main_sp_fs_ribbon_scheduler_pane_g3

0x0002,

0xfdeb,	// (0x0009d532) main_sp_fs_ribbon_scheduler_pane_g

0xc076,	// (0x000997bd) list_cale_mrui_pane

0x9ca9,	// (0x000973f0) sp_fs_scroll_pane_cp07_ParamLimits

0x9ca9,	// (0x000973f0) sp_fs_scroll_pane_cp07

0x9cc5,	// (0x0009740c) bg_sp_fs_schedule_viewer_highlight_ParamLimits

0x9cc5,	// (0x0009740c) bg_sp_fs_schedule_viewer_highlight

0xc083,	// (0x000997ca) list_single_sp_fs_schedule_track_pane_cp01

0xc08b,	// (0x000997d2) list_sp_fs_schedule_track_pane

0xc093,	// (0x000997da) sp_fs_scroll_pane_cp06_ParamLimits

0xc093,	// (0x000997da) sp_fs_scroll_pane_cp06

0xdc9e,	// (0x0009b3e5) bgmain_sp_fs_calendar_pane_g1

0x9cd2,	// (0x00097419) list_single_cale_mrui_pane_ParamLimits

0x9cd2,	// (0x00097419) list_single_cale_mrui_pane

0xec77,	// (0x0009c3be) list_single_cale_mrui_row_pane_ParamLimits

0xec77,	// (0x0009c3be) list_single_cale_mrui_row_pane

0xec84,	// (0x0009c3cb) list_single_cale_mrui_row_pane_g1_ParamLimits

0xec84,	// (0x0009c3cb) list_single_cale_mrui_row_pane_g1

0xecbc,	// (0x0009c403) list_single_cale_mrui_row_pane_t1_ParamLimits

0xecbc,	// (0x0009c403) list_single_cale_mrui_row_pane_t1

0x9cff,	// (0x00097446) list_single_cale_mrui_row_pane_t2_ParamLimits

0x9cff,	// (0x00097446) list_single_cale_mrui_row_pane_t2

0xecce,	// (0x0009c415) list_single_cale_mrui_row_pane_t3_ParamLimits

0xecce,	// (0x0009c415) list_single_cale_mrui_row_pane_t3

0xecfd,	// (0x0009c444) list_single_cale_mrui_row_pane_t4_ParamLimits

0xecfd,	// (0x0009c444) list_single_cale_mrui_row_pane_t4

0x0003,

0xfdf9,	// (0x0009d540) list_single_cale_mrui_row_pane_t_ParamLimits

0xfdf9,	// (0x0009d540) list_single_cale_mrui_row_pane_t

0x9d65,	// (0x000974ac) list_single_cmail_header_editor_pane_bg_cp01_ParamLimits

0x9d65,	// (0x000974ac) list_single_cmail_header_editor_pane_bg_cp01

0x9d85,	// (0x000974cc) list_single_cmail_header_editor_pane_bg_cp02_ParamLimits

0x9d85,	// (0x000974cc) list_single_cmail_header_editor_pane_bg_cp02

0x9da1,	// (0x000974e8) main_radioblah_text_pane_t1_ParamLimits

0x9da1,	// (0x000974e8) main_radioblah_text_pane_t1

0xc0b2,	// (0x000997f9) cam6_indi_pane_cp01

0xc0ba,	// (0x00099801) cam6_mode_pane_cp01

0xc0c2,	// (0x00099809) cam6_pano_pane

0xc0cb,	// (0x00099812) cam6_zoom_pane_cp01

0xc0d3,	// (0x0009981a) cam6_pano_image_pane

0xc0de,	// (0x00099825) cam6_pano_pane_g1

0x07cd,	// (0x0008df14) cam6_pano_pane_g2

0xc0e7,	// (0x0009982e) cam6_pano_pane_g3

0xc0f0,	// (0x00099837) cam6_pano_pane_g4

0xe2b9,	// (0x0009ba00) cam6_pano_pane_g5

0xc0f9,	// (0x00099840) cam6_pano_pane_g6

0xbef3,	// (0x0009963a) cam6_pano_pane_g7

0xc103,	// (0x0009984a) cam6_pano_pane_g8

0xc10c,	// (0x00099853) cam6_pano_pane_g9

0x0008,

0xfe02,	// (0x0009d549) cam6_pano_pane_g

0xedcc,	// (0x0009c513) main_browser_tag_pane

0xbf72,	// (0x000996b9) grid_navstr_albumart_pane

0xc117,	// (0x0009985e) cell_navstr_albumart_pane_ParamLimits

0xc117,	// (0x0009985e) cell_navstr_albumart_pane

0xc137,	// (0x0009987e) cell_navstr_albumart_pane_g1

0xd69e,	// (0x0009ade5) cell_navstr_albumart_pane_g2

0xd6ae,	// (0x0009adf5) cell_navstr_albumart_pane_g3

0xd6a6,	// (0x0009aded) cell_navstr_albumart_pane_g4

0x0003,

0xfe15,	// (0x0009d55c) cell_navstr_albumart_pane_g

0x9dbc,	// (0x00097503) bt_list_pane_ParamLimits

0x9dbc,	// (0x00097503) bt_list_pane

0x9ddc,	// (0x00097523) bt_list_pane_t1

0x9deb,	// (0x00097532) bt_list_pane_t2

0x0001,

0xfe1e,	// (0x0009d565) bt_list_pane_t

0xedcc,	// (0x0009c513) main_cale_prevew_pane

0x9dfa,	// (0x00097541) popup_cale_preview_window_ParamLimits

0x9dfa,	// (0x00097541) popup_cale_preview_window

0xcba8,	// (0x0009a2ef) bg_popup_preview_window_pane_cp05_ParamLimits

0xcba8,	// (0x0009a2ef) bg_popup_preview_window_pane_cp05

0xc13f,	// (0x00099886) list_cale_preview_pane_ParamLimits

0xc13f,	// (0x00099886) list_cale_preview_pane

0x9e13,	// (0x0009755a) list_double_cale_preview_pane_ParamLimits

0x9e13,	// (0x0009755a) list_double_cale_preview_pane

0x9e25,	// (0x0009756c) list_single_cale_preview_pane_ParamLimits

0x9e25,	// (0x0009756c) list_single_cale_preview_pane

0x9e3b,	// (0x00097582) list_single_cale_preview_pane_g1

0x9e43,	// (0x0009758a) list_single_cale_preview_pane_t1_ParamLimits

0x9e43,	// (0x0009758a) list_single_cale_preview_pane_t1

0x9e58,	// (0x0009759f) list_double_cale_preview_pane_g1

0x9e60,	// (0x000975a7) list_double_cale_preview_pane_t1_ParamLimits

0x9e60,	// (0x000975a7) list_double_cale_preview_pane_t1

0x9e75,	// (0x000975bc) list_double_cale_preview_pane_t2_ParamLimits

0x9e75,	// (0x000975bc) list_double_cale_preview_pane_t2

0x0001,

0xfe23,	// (0x0009d56a) list_double_cale_preview_pane_t_ParamLimits

0xfe23,	// (0x0009d56a) list_double_cale_preview_pane_t

0xedcc,	// (0x0009c513) main_ezdial_pane

0xcba8,	// (0x0009a2ef) main_sp_fs_email_pane_ParamLimits

0x945a,	// (0x00096ba1) cmail_ddmenu_btn01_pane_ParamLimits

0x945a,	// (0x00096ba1) cmail_ddmenu_btn01_pane

0x9477,	// (0x00096bbe) cmail_ddmenu_btn02_pane_ParamLimits

0x9477,	// (0x00096bbe) cmail_ddmenu_btn02_pane

0x9495,	// (0x00096bdc) cmail_ddmenu_btn03_pane_ParamLimits

0x9495,	// (0x00096bdc) cmail_ddmenu_btn03_pane

0x94c3,	// (0x00096c0a) main_sp_fs_ctrlbar_pane_ParamLimits

0x94d9,	// (0x00096c20) main_sp_fs_listscroll_pane_te_cp01_ParamLimits

0x9aaa,	// (0x000971f1) list_cmail_body_pane_ParamLimits

0xbeea,	// (0x00099631) bg_button_pane_cp12

0xbefb,	// (0x00099642) list_single_cmail_header_detail_pane_g3_ParamLimits

0xbefb,	// (0x00099642) list_single_cmail_header_detail_pane_g3

0xebc7,	// (0x0009c30e) list_single_cmail_header_detail_pane_t2_ParamLimits

0xebc7,	// (0x0009c30e) list_single_cmail_header_detail_pane_t2

0x0001,

0xfda6,	// (0x0009d4ed) list_single_cmail_header_detail_pane_t_ParamLimits

0xfda6,	// (0x0009d4ed) list_single_cmail_header_detail_pane_t

0xec1f,	// (0x0009c366) phacti_term_pane_t2_ParamLimits

0xec1f,	// (0x0009c366) phacti_term_pane_t2

0x0001,

0xfdb0,	// (0x0009d4f7) phacti_term_pane_t_ParamLimits

0xfdb0,	// (0x0009d4f7) phacti_term_pane_t

0xc14b,	// (0x00099892) aid_size_list_single_double

0x9e8d,	// (0x000975d4) popup_ezdial_listscroll_window

0x9eae,	// (0x000975f5) popup_number_entry_window_cp01

0xadee,	// (0x00098535) bg_popup_call_pane_cp09

0xc157,	// (0x0009989e) ezdial_list_pane

0xc15f,	// (0x000998a6) scroll_pane_cp23

0xda83,	// (0x0009b1ca) bg_button_pane_cp028_ParamLimits

0xda83,	// (0x0009b1ca) bg_button_pane_cp028

0x9ebc,	// (0x00097603) cmail_ddmenu_btn01_pane_g1_ParamLimits

0x9ebc,	// (0x00097603) cmail_ddmenu_btn01_pane_g1

0x9ecc,	// (0x00097613) cmail_ddmenu_btn01_pane_g2_ParamLimits

0x9ecc,	// (0x00097613) cmail_ddmenu_btn01_pane_g2

0x0001,

0xfe28,	// (0x0009d56f) cmail_ddmenu_btn01_pane_g_ParamLimits

0xfe28,	// (0x0009d56f) cmail_ddmenu_btn01_pane_g

0xc167,	// (0x000998ae) cmail_ddmenu_btn01_pane_t1_ParamLimits

0xc167,	// (0x000998ae) cmail_ddmenu_btn01_pane_t1

0xd88d,	// (0x0009afd4) bg_button_pane_cp029_ParamLimits

0xd88d,	// (0x0009afd4) bg_button_pane_cp029

0x9ecc,	// (0x00097613) cmail_ddmenu_btn02_pane_g1_ParamLimits

0x9ecc,	// (0x00097613) cmail_ddmenu_btn02_pane_g1

0x9ee5,	// (0x0009762c) cmail_ddmenu_btn02_pane_t1_ParamLimits

0x9ee5,	// (0x0009762c) cmail_ddmenu_btn02_pane_t1

0x0939,	// (0x0008e080) bg_button_pane_cp031_ParamLimits

0x0939,	// (0x0008e080) bg_button_pane_cp031

0x9ecc,	// (0x00097613) cmail_ddmenu_btn03_pane_g1_ParamLimits

0x9ecc,	// (0x00097613) cmail_ddmenu_btn03_pane_g1

0x9ee5,	// (0x0009762c) cmail_ddmenu_btn03_pane_t1_ParamLimits

0x9ee5,	// (0x0009762c) cmail_ddmenu_btn03_pane_t1

0x6e9e,	// (0x000945e5) cell_dialer2_keypad_pane_t1_ParamLimits

0x6eb8,	// (0x000945ff) cell_dialer2_keypad_pane_t1_copy1_ParamLimits

0x6eb8,	// (0x000945ff) cell_dialer2_keypad_pane_t1_copy1

0x8d11,	// (0x00096458) ncimui_group_button_pane

0xcba8,	// (0x0009a2ef) main_sp_fs_calendar_pane_ParamLimits

0x9ad1,	// (0x00097218) list_single_cmail_header_caption_pane_ParamLimits

0x0930,	// (0x0008e077) aid_recal_txt_sm_pane

0xedcc,	// (0x0009c513) mian_recal_day_pane

0xec65,	// (0x0009c3ac) popup_sp_fs_cale_preview_window_ParamLimits

0xc17c,	// (0x000998c3) list_recal_day_pane

0xed47,	// (0x0009c48e) list_single_recal_day_pane_ParamLimits

0xed47,	// (0x0009c48e) list_single_recal_day_pane

0xc1a3,	// (0x000998ea) list_single_recal_day_pane_g1_ParamLimits

0xc1a3,	// (0x000998ea) list_single_recal_day_pane_g1

0xed59,	// (0x0009c4a0) list_single_recal_day_pane_g2_ParamLimits

0xed59,	// (0x0009c4a0) list_single_recal_day_pane_g2

0xed65,	// (0x0009c4ac) list_single_recal_day_pane_g3_ParamLimits

0xed65,	// (0x0009c4ac) list_single_recal_day_pane_g3

0x9f09,	// (0x00097650) list_single_recal_day_pane_g4_ParamLimits

0x9f09,	// (0x00097650) list_single_recal_day_pane_g4

0xed71,	// (0x0009c4b8) list_single_recal_day_pane_g5_ParamLimits

0xed71,	// (0x0009c4b8) list_single_recal_day_pane_g5

0xed7d,	// (0x0009c4c4) list_single_recal_day_pane_g6_ParamLimits

0xed7d,	// (0x0009c4c4) list_single_recal_day_pane_g6

0x0004,

0xfe37,	// (0x0009d57e) list_single_recal_day_pane_g_ParamLimits

0xfe37,	// (0x0009d57e) list_single_recal_day_pane_g

0xed91,	// (0x0009c4d8) list_single_recal_day_pane_t1

0xeda3,	// (0x0009c4ea) list_single_recal_day_pane_t2

0x0001,

0xfe42,	// (0x0009d589) list_single_recal_day_pane_t

0x9f21,	// (0x00097668) ncimui_query_button_pane_ParamLimits

0x9f21,	// (0x00097668) ncimui_query_button_pane

0x9f31,	// (0x00097678) ncimui_query_button_pane_t1_ParamLimits

0x9f31,	// (0x00097678) ncimui_query_button_pane_t1

0xc1af,	// (0x000998f6) ncimui_query_button_pane_t2_ParamLimits

0xc1af,	// (0x000998f6) ncimui_query_button_pane_t2

0x0001,

0xfe47,	// (0x0009d58e) ncimui_query_button_pane_t_ParamLimits

0xfe47,	// (0x0009d58e) ncimui_query_button_pane_t

0x9f44,	// (0x0009768b) query_button_pane_ParamLimits

0x9f44,	// (0x0009768b) query_button_pane

0xedcc,	// (0x0009c513) bg_button_pane_cp0028

0xc1c2,	// (0x00099909) query_button_pane_t1

0x528f,	// (0x000929d6) main_tport_pane_ParamLimits

0x99b4,	// (0x000970fb) bg_popup_window_pane_cp01_ParamLimits

0x99b4,	// (0x000970fb) bg_popup_window_pane_cp01

0x99c2,	// (0x00097109) heading_pane_cp08_ParamLimits

0x99c2,	// (0x00097109) heading_pane_cp08

0x99d0,	// (0x00097117) heading_pane_cp07_ParamLimits

0x99d0,	// (0x00097117) heading_pane_cp07

0x9a3f,	// (0x00097186) cell_tport_appsw_pane_g2

0x0002,

0xfd93,	// (0x0009d4da) cell_tport_appsw_pane_g

0x4991,	// (0x000920d8) input_candi_list_open_g1

0xb20a,	// (0x00098951) list_cale_time_pane_g6_ParamLimits

0xb20a,	// (0x00098951) list_cale_time_pane_g6

0x5d0c,	// (0x00093453) aid_size_touch_calib_1_ParamLimits

0x5d0c,	// (0x00093453) aid_size_touch_calib_1

0x5d18,	// (0x0009345f) aid_size_touch_calib_2_ParamLimits

0x5d18,	// (0x0009345f) aid_size_touch_calib_2

0x5d26,	// (0x0009346d) aid_size_touch_calib_3_ParamLimits

0x5d26,	// (0x0009346d) aid_size_touch_calib_3

0x5d36,	// (0x0009347d) aid_size_touch_calib_4_ParamLimits

0x5d36,	// (0x0009347d) aid_size_touch_calib_4

0x5d44,	// (0x0009348b) main_touch_calib_button_group_pane_ParamLimits

0x5d44,	// (0x0009348b) main_touch_calib_button_group_pane

0x5d52,	// (0x00093499) main_touch_calib_pane_g1_ParamLimits

0x5d5e,	// (0x000934a5) main_touch_calib_pane_g2_ParamLimits

0x5d6a,	// (0x000934b1) main_touch_calib_pane_g3_ParamLimits

0x5d76,	// (0x000934bd) main_touch_calib_pane_g4_ParamLimits

0xf751,	// (0x0009ce98) main_touch_calib_pane_g_ParamLimits

0x5d82,	// (0x000934c9) main_touch_calib_pane_t1_ParamLimits

0x5d9b,	// (0x000934e2) main_touch_calib_pane_t2_ParamLimits

0x5db4,	// (0x000934fb) main_touch_calib_pane_t3_ParamLimits

0x5dca,	// (0x00093511) main_touch_calib_pane_t4_ParamLimits

0x5de0,	// (0x00093527) main_touch_calib_pane_t5_ParamLimits

0xf75a,	// (0x0009cea1) main_touch_calib_pane_t_ParamLimits

0xe059,	// (0x0009b7a0) list_single_fp_cale_pane_g3_ParamLimits

0xe059,	// (0x0009b7a0) list_single_fp_cale_pane_g3

0x5273,	// (0x000929ba) bg_button_pane_cp012_ParamLimits

0x5273,	// (0x000929ba) bg_vkb2_func_pane_cp03_ParamLimits

0x7cd9,	// (0x00095420) cell_vitu2_function_top_pane_g1_ParamLimits

0x5273,	// (0x000929ba) bg_vkb2_func_pane_cp04_ParamLimits

0x8c99,	// (0x000963e0) main_ncimui_button_group_pane_ParamLimits

0x8c99,	// (0x000963e0) main_ncimui_button_group_pane

0x8cff,	// (0x00096446) main_ncimui_pane_t3_ParamLimits

0x8cff,	// (0x00096446) main_ncimui_pane_t3

0xbf88,	// (0x000996cf) phacti_button_group_pane

0xc14b,	// (0x00099892) aid_size_list_single_double_ParamLimits

0x9e8d,	// (0x000975d4) popup_ezdial_listscroll_window_ParamLimits

0x9eae,	// (0x000975f5) popup_number_entry_window_cp01_ParamLimits

0x9f51,	// (0x00097698) phacti_button_pane_ParamLimits

0x9f51,	// (0x00097698) phacti_button_pane

0xedcc,	// (0x0009c513) bg_button_pane_cp14

0xc1d0,	// (0x00099917) phacti_button_pane_t1

0x9f62,	// (0x000976a9) main_touch_calib_button_pane_ParamLimits

0x9f62,	// (0x000976a9) main_touch_calib_button_pane

0xac29,	// (0x00098370) bg_button_pane_cp18_ParamLimits

0xac29,	// (0x00098370) bg_button_pane_cp18

0xc1de,	// (0x00099925) main_touch_calib_button_pane_t1_ParamLimits

0xc1de,	// (0x00099925) main_touch_calib_button_pane_t1

0xc1f4,	// (0x0009993b) main_touch_calib_button_pane_t2_ParamLimits

0xc1f4,	// (0x0009993b) main_touch_calib_button_pane_t2

0x0001,

0xfe4c,	// (0x0009d593) main_touch_calib_button_pane_t_ParamLimits

0xfe4c,	// (0x0009d593) main_touch_calib_button_pane_t

0xedcc,	// (0x0009c513) cell_ncimui_button_pane

0xedcc,	// (0x0009c513) bg_button_pane_cp032

0xc212,	// (0x00099959) cell_ncimui_button_pane_t1

0x6f14,	// (0x0009465b) image3_infobar_pane_ParamLimits

0x6f14,	// (0x0009465b) image3_infobar_pane

0x90bc,	// (0x00096803) fs_bigclock_status_pane_ParamLimits

0x90bc,	// (0x00096803) fs_bigclock_status_pane

0x90c9,	// (0x00096810) main_fs_bigclock_clock_pane_ParamLimits

0x90c9,	// (0x00096810) main_fs_bigclock_clock_pane

0x90dd,	// (0x00096824) main_fs_bigclock_indi_pane_ParamLimits

0x90dd,	// (0x00096824) main_fs_bigclock_indi_pane

0x9105,	// (0x0009684c) main_fs_bigclock_swipe_pane_ParamLimits

0x9105,	// (0x0009684c) main_fs_bigclock_swipe_pane

0xedcc,	// (0x0009c513) main_fs_clock_dumped_data

0x08da,	// (0x0008e021) list_single_fs_bigclock_indicator_pane_g1_ParamLimits

0x08da,	// (0x0008e021) list_single_fs_bigclock_indicator_pane_g1

0xbb00,	// (0x00099247) list_single_fs_bigclock_indicator_pane_g2_ParamLimits

0xbb00,	// (0x00099247) list_single_fs_bigclock_indicator_pane_g2

0xbb1a,	// (0x00099261) list_single_fs_bigclock_indicator_pane_g3_ParamLimits

0xbb1a,	// (0x00099261) list_single_fs_bigclock_indicator_pane_g3

0xbb34,	// (0x0009927b) list_single_fs_bigclock_indicator_pane_g4_ParamLimits

0xbb34,	// (0x0009927b) list_single_fs_bigclock_indicator_pane_g4

0x0004,

0xfc74,	// (0x0009d3bb) list_single_fs_bigclock_indicator_pane_g_ParamLimits

0xfc74,	// (0x0009d3bb) list_single_fs_bigclock_indicator_pane_g

0xbb5f,	// (0x000992a6) list_single_fs_bigclock_indicator_pane_t1_ParamLimits

0xbb5f,	// (0x000992a6) list_single_fs_bigclock_indicator_pane_t1

0xbb87,	// (0x000992ce) list_single_fs_bigclock_indicator_pane_t2_ParamLimits

0xbb87,	// (0x000992ce) list_single_fs_bigclock_indicator_pane_t2

0xbbaf,	// (0x000992f6) list_single_fs_bigclock_indicator_pane_t3_ParamLimits

0xbbaf,	// (0x000992f6) list_single_fs_bigclock_indicator_pane_t3

0xbbd7,	// (0x0009931e) list_single_fs_bigclock_indicator_pane_t4_ParamLimits

0xbbd7,	// (0x0009931e) list_single_fs_bigclock_indicator_pane_t4

0x0004,

0xfc7f,	// (0x0009d3c6) list_single_fs_bigclock_indicator_pane_t_ParamLimits

0xfc7f,	// (0x0009d3c6) list_single_fs_bigclock_indicator_pane_t

0xc220,	// (0x00099967) image3_infobar_fav_pane_ParamLimits

0xc220,	// (0x00099967) image3_infobar_fav_pane

0xc230,	// (0x00099977) image3_infobar_loc_pane_ParamLimits

0xc230,	// (0x00099977) image3_infobar_loc_pane

0xc244,	// (0x0009998b) image3_infobar_time_pane_ParamLimits

0xc244,	// (0x0009998b) image3_infobar_time_pane

0xdc9e,	// (0x0009b3e5) image3_infobar_time_pane_g1

0xc254,	// (0x0009999b) image3_infobar_time_pane_t1

0xdc9e,	// (0x0009b3e5) image3_infobar_loc_pane_g1

0xc262,	// (0x000999a9) image3_infobar_loc_pane_g2

0x0001,

0xfe51,	// (0x0009d598) image3_infobar_loc_pane_g

0xc26a,	// (0x000999b1) image3_infobar_loc_pane_t1

0xdc9e,	// (0x0009b3e5) image3_infobar_fav_pane_g1

0xc278,	// (0x000999bf) image3_infobar_fav_pane_g2

0x0001,

0xfe56,	// (0x0009d59d) image3_infobar_fav_pane_g

0xc280,	// (0x000999c7) fs_bigclock_status_battery_pane

0xc289,	// (0x000999d0) fs_bigclock_status_signal_pane

0xc292,	// (0x000999d9) fs_bigclock_status_title_pane

0xc29b,	// (0x000999e2) fs_bigclock_status_signal_pane_g1

0xc2a4,	// (0x000999eb) fs_bigclock_status_signal_pane_g2

0x0001,

0xfe5b,	// (0x0009d5a2) fs_bigclock_status_signal_pane_g

0xc2ac,	// (0x000999f3) fs_bigclock_status_battery_pane_g1

0xc2b5,	// (0x000999fc) fs_bigclock_status_battery_pane_g2

0x0001,

0xfe60,	// (0x0009d5a7) fs_bigclock_status_battery_pane_g

0xc2bd,	// (0x00099a04) fs_bigclock_status_title_pane_t1

0x9f72,	// (0x000976b9) main_fs_bigclock_clock_pane_g1

0x9f72,	// (0x000976b9) main_fs_bigclock_clock_pane_g2

0x9f7f,	// (0x000976c6) main_fs_bigclock_clock_pane_g3

0x9f7f,	// (0x000976c6) main_fs_bigclock_clock_pane_g4

0x0003,

0xfe65,	// (0x0009d5ac) main_fs_bigclock_clock_pane_g

0x9f8b,	// (0x000976d2) main_fs_bigclock_clock_pane_t1

0x9f9e,	// (0x000976e5) main_fs_bigclock_clock_pane_t2

0x0001,

0xfe6e,	// (0x0009d5b5) main_fs_bigclock_clock_pane_t

0xc2cb,	// (0x00099a12) list_single_fs_bigclock_indicator_pane_ParamLimits

0xc2cb,	// (0x00099a12) list_single_fs_bigclock_indicator_pane

0xc2dc,	// (0x00099a23) list_single_fs_bigclock_pane_ParamLimits

0xc2dc,	// (0x00099a23) list_single_fs_bigclock_pane

0xc302,	// (0x00099a49) main_fs_bigclock_indicator_pane_t1

0xc311,	// (0x00099a58) list_single_fs_bigclock_pane_g1

0xc319,	// (0x00099a60) list_single_fs_bigclock_pane_t1

0xdc9e,	// (0x0009b3e5) main_fs_bigclock_swipe_pane_g1

0xc35c,	// (0x00099aa3) main_fs_bigclock_swipe_pane_g2

0x0001,

0xfe7f,	// (0x0009d5c6) main_fs_bigclock_swipe_pane_g

0xc364,	// (0x00099aab) main_fs_bigclock_swipe_pane_t1_ParamLimits

0xc364,	// (0x00099aab) main_fs_bigclock_swipe_pane_t1

0x422b,	// (0x00091972) call_type_pane_ParamLimits

0xedcc,	// (0x0009c513) main_btmg_pane

0xecb0,	// (0x0009c3f7) list_single_cale_mrui_row_pane_g2_ParamLimits

0xecb0,	// (0x0009c3f7) list_single_cale_mrui_row_pane_g2

0x0002,

0xfdf2,	// (0x0009d539) list_single_cale_mrui_row_pane_g_ParamLimits

0xfdf2,	// (0x0009d539) list_single_cale_mrui_row_pane_g

0xed36,	// (0x0009c47d) list_recal_vselct_arw_lo_pane

0xc19b,	// (0x000998e2) list_recal_vselct_arw_up_pane

0xed3e,	// (0x0009c485) list_recal_vselct_pane

0x9ff5,	// (0x0009773c) btmg_button_pane

0xa001,	// (0x00097748) main_btmg_pane_g1

0xedcc,	// (0x0009c513) bg_button_pane_cp044

0xc381,	// (0x00099ac8) btmg_button_pane_t1

0xd879,	// (0x0009afc0) aid_listscroll_gen

0xcba8,	// (0x0009a2ef) main_cntbar_detail_pane

0xbecc,	// (0x00099613) list_cmail_folder_pane

0xcbc2,	// (0x0009a309) sp_fs_scroll_pane_cp03_ParamLimits

0xa009,	// (0x00097750) list_single_fs_dyc_pane_cp01_ParamLimits

0xa009,	// (0x00097750) list_single_fs_dyc_pane_cp01

0xc38f,	// (0x00099ad6) aid_size_cmail_indent

0xedb5,	// (0x0009c4fc) list_single_dyc_row_pane_cp01

0xa04e,	// (0x00097795) cntbar_detail_list_pane_ParamLimits

0xa04e,	// (0x00097795) cntbar_detail_list_pane

0xa088,	// (0x000977cf) main_cntbar_detail_cont_pane_ParamLimits

0xa088,	// (0x000977cf) main_cntbar_detail_cont_pane

0x4144,	// (0x0009188b) scroll_pane_cp032_ParamLimits

0x4144,	// (0x0009188b) scroll_pane_cp032

0xa094,	// (0x000977db) cntbar_detail_list_event_pane_ParamLimits

0xa094,	// (0x000977db) cntbar_detail_list_event_pane

0xa05a,	// (0x000977a1) cntbar_detail_list_shct_pane

0xb095,	// (0x000987dc) aid_list_gen

0xc398,	// (0x00099adf) aid_scroll

0xc3a1,	// (0x00099ae8) aid_size_touch_scroll_bar

0x08f5,	// (0x0008e03c) aid_list_double

0xa0a8,	// (0x000977ef) aid_list_single

0x8414,	// (0x00095b5b) aid_list_single_lg

0xa0b1,	// (0x000977f8) aid_list_z_g_a_sm

0xa0b9,	// (0x00097800) aid_list_z_g_d

0xa0c1,	// (0x00097808) aid_txt_z_prm

0xa0cf,	// (0x00097816) aid_txt_z_prm_cp01

0xa0dd,	// (0x00097824) aid_txt_z_sec

0xa0eb,	// (0x00097832) main_cntbar_detail_cont_pane_g1_ParamLimits

0xa0eb,	// (0x00097832) main_cntbar_detail_cont_pane_g1

0xa0f8,	// (0x0009783f) main_cntbar_detail_cont_pane_g2_ParamLimits

0xa0f8,	// (0x0009783f) main_cntbar_detail_cont_pane_g2

0x0001,

0xfe84,	// (0x0009d5cb) main_cntbar_detail_cont_pane_g_ParamLimits

0xfe84,	// (0x0009d5cb) main_cntbar_detail_cont_pane_g

0xc3aa,	// (0x00099af1) main_cntbar_detail_cont_pane_t1

0xc3b8,	// (0x00099aff) main_cntbar_detail_cont_pane_t2

0xc3c6,	// (0x00099b0d) main_cntbar_detail_cont_pane_t3

0x0002,

0xfe89,	// (0x0009d5d0) main_cntbar_detail_cont_pane_t

0xa104,	// (0x0009784b) cell_cntbar_detail_list_shct_pane_ParamLimits

0xa104,	// (0x0009784b) cell_cntbar_detail_list_shct_pane

0xc3d4,	// (0x00099b1b) cntbar_detail_list_shct_pane_g1

0xc3dd,	// (0x00099b24) cntbar_detail_list_shct_pane_g2

0x0001,

0xfe90,	// (0x0009d5d7) cntbar_detail_list_shct_pane_g

0xa118,	// (0x0009785f) cntbar_detail_list_event_pane_g1_ParamLimits

0xa118,	// (0x0009785f) cntbar_detail_list_event_pane_g1

0xa124,	// (0x0009786b) cntbar_detail_list_event_pane_g2_ParamLimits

0xa124,	// (0x0009786b) cntbar_detail_list_event_pane_g2

0x0005,

0xfe95,	// (0x0009d5dc) cntbar_detail_list_event_pane_g_ParamLimits

0xfe95,	// (0x0009d5dc) cntbar_detail_list_event_pane_g

0xa190,	// (0x000978d7) cntbar_detail_list_event_pane_t1_ParamLimits

0xa190,	// (0x000978d7) cntbar_detail_list_event_pane_t1

0xa1a5,	// (0x000978ec) cntbar_detail_list_event_pane_t2_ParamLimits

0xa1a5,	// (0x000978ec) cntbar_detail_list_event_pane_t2

0x0002,

0xfea2,	// (0x0009d5e9) cntbar_detail_list_event_pane_t_ParamLimits

0xfea2,	// (0x0009d5e9) cntbar_detail_list_event_pane_t

0xdc9e,	// (0x0009b3e5) cell_cntbar_detail_list_shct_pane_g1

0xb80e,	// (0x00098f55) navi_pane_mv_g3

0xcba8,	// (0x0009a2ef) main_cntbar_detail_pane_ParamLimits

0xedcc,	// (0x0009c513) main_notif_wgt_pane

0x6bc8,	// (0x0009430f) aid_tch_main_mp4_pane_g4

0x6dfd,	// (0x00094544) popup_slider_window_cp02

0xed2c,	// (0x0009c473) list_recal_day_event_pane

0xa02e,	// (0x00097775) cntbar_detail_btn_pane_ParamLimits

0xa02e,	// (0x00097775) cntbar_detail_btn_pane

0xa03e,	// (0x00097785) cntbar_detail_btn_pane_cp01_ParamLimits

0xa03e,	// (0x00097785) cntbar_detail_btn_pane_cp01

0xa05a,	// (0x000977a1) cntbar_detail_list_shct_pane_ParamLimits

0xa066,	// (0x000977ad) cntbar_detail_pane_g1_ParamLimits

0xa066,	// (0x000977ad) cntbar_detail_pane_g1

0xa072,	// (0x000977b9) cntbar_detail_pane_t1_ParamLimits

0xa072,	// (0x000977b9) cntbar_detail_pane_t1

0xa130,	// (0x00097877) cntbar_detail_list_event_pane_g3_ParamLimits

0xa130,	// (0x00097877) cntbar_detail_list_event_pane_g3

0xa148,	// (0x0009788f) cntbar_detail_list_event_pane_g4_ParamLimits

0xa148,	// (0x0009788f) cntbar_detail_list_event_pane_g4

0xa160,	// (0x000978a7) cntbar_detail_list_event_pane_g5_ParamLimits

0xa160,	// (0x000978a7) cntbar_detail_list_event_pane_g5

0xa178,	// (0x000978bf) cntbar_detail_list_event_pane_g6_ParamLimits

0xa178,	// (0x000978bf) cntbar_detail_list_event_pane_g6

0xa1ba,	// (0x00097901) cntbar_detail_list_event_pane_t3_ParamLimits

0xa1ba,	// (0x00097901) cntbar_detail_list_event_pane_t3

0xa1cc,	// (0x00097913) popup_notif_wgt_window_ParamLimits

0xa1cc,	// (0x00097913) popup_notif_wgt_window

0xa1dc,	// (0x00097923) popup_submenu_window_cp01_ParamLimits

0xa1dc,	// (0x00097923) popup_submenu_window_cp01

0xadee,	// (0x00098535) bg_popup_window_pane_cp10

0xc3e6,	// (0x00099b2d) listscroll_notif_wgt_pane

0xc3f8,	// (0x00099b3f) list_notif_wgt_window

0xc401,	// (0x00099b48) scroll_pane_cp033

0xa1ee,	// (0x00097935) list_notif_wgt_row_pane_ParamLimits

0xa1ee,	// (0x00097935) list_notif_wgt_row_pane

0xc40a,	// (0x00099b51) aid_size_list_notif_wgt_del

0xc417,	// (0x00099b5e) list_notif_wgt_row_pane_g1

0xc423,	// (0x00099b6a) list_notif_wgt_row_pane_g2

0xc432,	// (0x00099b79) list_notif_wgt_row_pane_g3

0x0002,

0xfea9,	// (0x0009d5f0) list_notif_wgt_row_pane_g

0xc43f,	// (0x00099b86) list_notif_wgt_row_pane_t1

0xc455,	// (0x00099b9c) list_notif_wgt_row_pane_t2

0xc467,	// (0x00099bae) list_notif_wgt_row_pane_t3

0x0002,

0xfeb0,	// (0x0009d5f7) list_notif_wgt_row_pane_t

0xee57,	// (0x0009c59e) list_recal_day_event_pane_g1

0xc479,	// (0x00099bc0) list_recal_day_event_pane_t1

0xedcc,	// (0x0009c513) bg_button_pane_cp045

0xa200,	// (0x00097947) cntbar_detail_btn_pane_t1

0xd88d,	// (0x0009afd4) main_callh_pane_ParamLimits

0xd88d,	// (0x0009afd4) main_callh_pane

0xedcc,	// (0x0009c513) main_coverflow0_pane

0xedcc,	// (0x0009c513) main_wgtman_pane

0x911d,	// (0x00096864) main_fs_bigclock_unlock_btn_pane_ParamLimits

0x911d,	// (0x00096864) main_fs_bigclock_unlock_btn_pane

0x9a37,	// (0x0009717e) bg_button_pane_cp16

0x9a47,	// (0x0009718e) cell_tport_appsw_pane_g3

0xa20e,	// (0x00097955) cf0_flow_pane_ParamLimits

0xa20e,	// (0x00097955) cf0_flow_pane

0xc488,	// (0x00099bcf) listscroll_cf0_pane

0xc493,	// (0x00099bda) main_cf0_pane_g1

0xa21d,	// (0x00097964) main_cf0_pane_t1_ParamLimits

0xa21d,	// (0x00097964) main_cf0_pane_t1

0xa231,	// (0x00097978) main_cf0_pane_t2_ParamLimits

0xa231,	// (0x00097978) main_cf0_pane_t2

0x0001,

0xfebc,	// (0x0009d603) main_cf0_pane_t_ParamLimits

0xfebc,	// (0x0009d603) main_cf0_pane_t

0xc4a5,	// (0x00099bec) scroll_pane_cp11

0xa245,	// (0x0009798c) cf0_flow_pane_g1

0xa24d,	// (0x00097994) cf0_flow_pane_g2

0x0001,

0xfec1,	// (0x0009d608) cf0_flow_pane_g

0xa255,	// (0x0009799c) cf0_flow_pane_t1

0xedcc,	// (0x0009c513) main_call6_pane

0xedcc,	// (0x0009c513) main_calllock_pane

0xa263,	// (0x000979aa) call6_btn_grp_pane_ParamLimits

0xa263,	// (0x000979aa) call6_btn_grp_pane

0xa272,	// (0x000979b9) call6_pane_g1_ParamLimits

0xa272,	// (0x000979b9) call6_pane_g1

0xa281,	// (0x000979c8) popup_call6_1st_window_ParamLimits

0xa281,	// (0x000979c8) popup_call6_1st_window

0xa28f,	// (0x000979d6) popup_call6_2nd_window_ParamLimits

0xa28f,	// (0x000979d6) popup_call6_2nd_window

0xa29d,	// (0x000979e4) cell_call6_btn_pane_ParamLimits

0xa29d,	// (0x000979e4) cell_call6_btn_pane

0xadee,	// (0x00098535) bg_popup_call2_in_pane_cp03

0xc4b0,	// (0x00099bf7) popup_call6_1st_window_g1

0xc4b8,	// (0x00099bff) popup_call6_1st_window_g2

0xc4c0,	// (0x00099c07) popup_call6_1st_window_g3

0x0002,

0xfec6,	// (0x0009d60d) popup_call6_1st_window_g

0xc4c8,	// (0x00099c0f) popup_call6_1st_window_t1

0xc4d7,	// (0x00099c1e) popup_call6_1st_window_t2

0xc4e7,	// (0x00099c2e) popup_call6_1st_window_t3

0x0002,

0xfecd,	// (0x0009d614) popup_call6_1st_window_t

0xadee,	// (0x00098535) bg_popup_call2_in_pane_cp04

0xc4b0,	// (0x00099bf7) popup_call6_2nd_window_g1

0xc4b8,	// (0x00099bff) popup_call6_2nd_window_g2

0xc4c0,	// (0x00099c07) popup_call6_2nd_window_g3

0x0002,

0xfec6,	// (0x0009d60d) popup_call6_2nd_window_g

0xc4c8,	// (0x00099c0f) popup_call6_2nd_window_t1

0xedcc,	// (0x0009c513) bg_button_pane_cp15

0xc4f7,	// (0x00099c3e) cell_call6_btn_pane_g1

0xc500,	// (0x00099c47) cell_call6_btn_pane_t1

0xa2ac,	// (0x000979f3) listscroll_wgtman_pane_ParamLimits

0xa2ac,	// (0x000979f3) listscroll_wgtman_pane

0xa2c8,	// (0x00097a0f) wgtman_btn_pane_ParamLimits

0xa2c8,	// (0x00097a0f) wgtman_btn_pane

0xb615,	// (0x00098d5c) aid_scroll_copy1

0xc50f,	// (0x00099c56) list_wgtman_pane

0xa2fd,	// (0x00097a44) wgtman_btn_pane_g1_ParamLimits

0xa2fd,	// (0x00097a44) wgtman_btn_pane_g1

0xa325,	// (0x00097a6c) wgtman_btn_pane_t1_ParamLimits

0xa325,	// (0x00097a6c) wgtman_btn_pane_t1

0xc519,	// (0x00099c60) wgtman_btn_pane_t2_ParamLimits

0xc519,	// (0x00099c60) wgtman_btn_pane_t2

0x0001,

0xfed4,	// (0x0009d61b) wgtman_btn_pane_t_ParamLimits

0xfed4,	// (0x0009d61b) wgtman_btn_pane_t

0xa35c,	// (0x00097aa3) listrow_wgtman_pane_ParamLimits

0xa35c,	// (0x00097aa3) listrow_wgtman_pane

0xa377,	// (0x00097abe) listrow_wgtman_pane_g1

0xa384,	// (0x00097acb) listrow_wgtman_pane_g2

0x0001,

0xfed9,	// (0x0009d620) listrow_wgtman_pane_g

0xa3a2,	// (0x00097ae9) listrow_wgtman_pane_t1

0xa3ba,	// (0x00097b01) listrow_wgtman_pane_t2

0x0001,

0xfede,	// (0x0009d625) listrow_wgtman_pane_t

0xa3e0,	// (0x00097b27) wait_bar_pane_cp09

0xc530,	// (0x00099c77) main_calllock_btn_pane

0xc53a,	// (0x00099c81) main_calllock_pane_g1

0xedcc,	// (0x0009c513) bg_button_pane_cp17

0xc546,	// (0x00099c8d) main_calllock_btn_pane_g1

0xc54f,	// (0x00099c96) main_calllock_btn_pane_t1

0xedcc,	// (0x0009c513) main_dialer3_pane

0xedcc,	// (0x0009c513) main_fmrd2_pane

0xdc9e,	// (0x0009b3e5) main_fs_bigclock_unlock_btn_pane_g1

0xa3fa,	// (0x00097b41) main_fs_bigclock_unlock_btn_pane_t1

0xa408,	// (0x00097b4f) area_fmrd2_info_pane_ParamLimits

0xa408,	// (0x00097b4f) area_fmrd2_info_pane

0xa416,	// (0x00097b5d) area_fmrd2_visual_pane_ParamLimits

0xa416,	// (0x00097b5d) area_fmrd2_visual_pane

0xa424,	// (0x00097b6b) fmrd2_indi_pane_ParamLimits

0xa424,	// (0x00097b6b) fmrd2_indi_pane

0xa431,	// (0x00097b78) area_fmrd2_visual_pane_g1

0xa439,	// (0x00097b80) area_fmrd2_visual_pane_t1

0xa449,	// (0x00097b90) area_fmrd2_visual_pane_t2

0xa459,	// (0x00097ba0) area_fmrd2_visual_pane_t3

0x0002,

0xfee8,	// (0x0009d62f) area_fmrd2_visual_pane_t

0xa469,	// (0x00097bb0) area_fmrd2_info_pane_g1

0xa471,	// (0x00097bb8) area_fmrd2_info_pane_t1

0xa481,	// (0x00097bc8) area_fmrd2_info_pane_t2

0xa491,	// (0x00097bd8) area_fmrd2_info_pane_t3

0xa4a1,	// (0x00097be8) area_fmrd2_info_pane_t4

0x0003,

0xfeef,	// (0x0009d636) area_fmrd2_info_pane_t

0xa4af,	// (0x00097bf6) fmrd2_indi_pane_t1

0xa4bf,	// (0x00097c06) fmrd2_indi_pane_t2

0xa4cf,	// (0x00097c16) fmrd2_indi_pane_t3

0x0002,

0xfef8,	// (0x0009d63f) fmrd2_indi_pane_t

0xbb43,	// (0x0009928a) list_single_fs_bigclock_indicator_pane_g5_ParamLimits

0xbb43,	// (0x0009928a) list_single_fs_bigclock_indicator_pane_g5

0xbbf4,	// (0x0009933b) list_single_fs_bigclock_indicator_pane_t5_ParamLimits

0xbbf4,	// (0x0009933b) list_single_fs_bigclock_indicator_pane_t5

0x9be2,	// (0x00097329) aid_cell_bcale_month_pane_ParamLimits

0x9be2,	// (0x00097329) aid_cell_bcale_month_pane

0x9c00,	// (0x00097347) bcale_month_pane_ParamLimits

0x9c00,	// (0x00097347) bcale_month_pane

0x9c1e,	// (0x00097365) bcale_preview_pane_ParamLimits

0x9c1e,	// (0x00097365) bcale_preview_pane

0xc319,	// (0x00099a60) list_single_fs_bigclock_pane_t1_ParamLimits

0xc338,	// (0x00099a7f) list_single_fs_bigclock_pane_t2_ParamLimits

0xc338,	// (0x00099a7f) list_single_fs_bigclock_pane_t2

0x0001,

0xfe7a,	// (0x0009d5c1) list_single_fs_bigclock_pane_t_ParamLimits

0xfe7a,	// (0x0009d5c1) list_single_fs_bigclock_pane_t

0xa3f2,	// (0x00097b39) main_fs_bigclock_unlock_btn_pane_g2

0x0001,

0xfee3,	// (0x0009d62a) main_fs_bigclock_unlock_btn_pane_g

0xa4dd,	// (0x00097c24) aid_dia3_key_size_ParamLimits

0xa4dd,	// (0x00097c24) aid_dia3_key_size

0xa4e9,	// (0x00097c30) aid_dia3_listrow_size_ParamLimits

0xa4e9,	// (0x00097c30) aid_dia3_listrow_size

0xa4f9,	// (0x00097c40) dia3_keypad_fun_pane_ParamLimits

0xa4f9,	// (0x00097c40) dia3_keypad_fun_pane

0xa50b,	// (0x00097c52) dia3_keypad_num_pane_ParamLimits

0xa50b,	// (0x00097c52) dia3_keypad_num_pane

0xa51d,	// (0x00097c64) dia3_listscroll_pane_ParamLimits

0xa51d,	// (0x00097c64) dia3_listscroll_pane

0xa52b,	// (0x00097c72) dia3_numentry_pane_ParamLimits

0xa52b,	// (0x00097c72) dia3_numentry_pane

0xc55e,	// (0x00099ca5) dia3_list_pane

0xc569,	// (0x00099cb0) scroll_pane_cp12

0xedcc,	// (0x0009c513) bg_dia3_numentry_pane

0xa539,	// (0x00097c80) dia3_numentry_pane_t1

0xa548,	// (0x00097c8f) cell_dia3_key_num_pane

0xa550,	// (0x00097c97) cell_dia3_key0_fun_pane_ParamLimits

0xa550,	// (0x00097c97) cell_dia3_key0_fun_pane

0xa55d,	// (0x00097ca4) cell_dia3_key1_fun_pane_ParamLimits

0xa55d,	// (0x00097ca4) cell_dia3_key1_fun_pane

0xa56a,	// (0x00097cb1) dia3_listrow_pane

0x067d,	// (0x0008ddc4) bg_dia3_numentry_pane_g1

0xedcc,	// (0x0009c513) bg_button_pane_cp21

0xc574,	// (0x00099cbb) cell_dia3_key_num_pane_t1

0xc582,	// (0x00099cc9) cell_dia3_key_num_pane_t2

0xc591,	// (0x00099cd8) cell_dia3_key_num_pane_t3

0xc5a0,	// (0x00099ce7) cell_dia3_key_num_pane_t4

0x0003,

0xfeff,	// (0x0009d646) cell_dia3_key_num_pane_t

0xedcc,	// (0x0009c513) bg_button_pane_cp19

0xa577,	// (0x00097cbe) cell_dia3_key0_fun_pane_g1

0xedcc,	// (0x0009c513) bg_button_pane_cp20

0xa57f,	// (0x00097cc6) cell_dia3_key1_fun_pane_g1

0xa587,	// (0x00097cce) area_left_week_number_pane

0xa59a,	// (0x00097ce1) area_top_day_name_pane

0xa5a8,	// (0x00097cef) frame_month_view_pane

0xc5af,	// (0x00099cf6) grid_month_view_pane

0xa5bd,	// (0x00097d04) cell_top_day_name_pane_ParamLimits

0xa5bd,	// (0x00097d04) cell_top_day_name_pane

0xa5d7,	// (0x00097d1e) cell_area_left_week_number_pane_ParamLimits

0xa5d7,	// (0x00097d1e) cell_area_left_week_number_pane

0xa5fa,	// (0x00097d41) cell_month_view_pane_ParamLimits

0xa5fa,	// (0x00097d41) cell_month_view_pane

0xc5bd,	// (0x00099d04) frm_month_g1

0xa626,	// (0x00097d6d) frm_month_g2

0xa637,	// (0x00097d7e) frm_month_g3

0xa648,	// (0x00097d8f) frm_month_g4

0xa659,	// (0x00097da0) frm_month_g5

0xa66c,	// (0x00097db3) frm_month_g6

0xa67f,	// (0x00097dc6) frm_month_g7

0xc5ca,	// (0x00099d11) frm_month_g8

0xa692,	// (0x00097dd9) frm_month_g9

0xa69f,	// (0x00097de6) frm_month_g10

0xa6ac,	// (0x00097df3) frm_month_g11

0xa6b9,	// (0x00097e00) frm_month_g12

0xa6c6,	// (0x00097e0d) frm_month_g13

0xa6d3,	// (0x00097e1a) frm_month_g14

0xa6e2,	// (0x00097e29) frm_month_g15

0xa6f1,	// (0x00097e38) frm_month_g16

0x000f,

0xff08,	// (0x0009d64f) frm_month_g

0xc5d7,	// (0x00099d1e) cell_top_day_name_pane_t1

0xa700,	// (0x00097e47) cell_area_left_week_number_pane_g1

0xa70f,	// (0x00097e56) cell_area_left_week_number_pane_t1

0xdf01,	// (0x0009b648) cell_month_view_pane_g1

0xa725,	// (0x00097e6c) cell_month_view_pane_t1

0xedcc,	// (0x0009c513) main_fps_pane

0xbde4,	// (0x0009952b) cmail_ddmenu_btn02_pane_cp1_ParamLimits

0xbde4,	// (0x0009952b) cmail_ddmenu_btn02_pane_cp1

0xbe00,	// (0x00099547) cmail_ddmenu_btn02_pane_cp2_ParamLimits

0xbe00,	// (0x00099547) cmail_ddmenu_btn02_pane_cp2

0x9ed8,	// (0x0009761f) cmail_ddmenu_btn02_pane_g2_ParamLimits

0x9ed8,	// (0x0009761f) cmail_ddmenu_btn02_pane_g2

0x0001,

0xfe2d,	// (0x0009d574) cmail_ddmenu_btn02_pane_g_ParamLimits

0xfe2d,	// (0x0009d574) cmail_ddmenu_btn02_pane_g

0x9ef7,	// (0x0009763e) cmail_ddmenu_btn02_pane_t2_ParamLimits

0x9ef7,	// (0x0009763e) cmail_ddmenu_btn02_pane_t2

0x0001,

0xfe32,	// (0x0009d579) cmail_ddmenu_btn02_pane_t_ParamLimits

0xfe32,	// (0x0009d579) cmail_ddmenu_btn02_pane_t

0xa73b,	// (0x00097e82) fps_text_pane_ParamLimits

0xa73b,	// (0x00097e82) fps_text_pane

0xa748,	// (0x00097e8f) main_fps_pane_g1_ParamLimits

0xa748,	// (0x00097e8f) main_fps_pane_g1

0xa756,	// (0x00097e9d) wait_bar_pane_cp010_ParamLimits

0xa756,	// (0x00097e9d) wait_bar_pane_cp010

0xa762,	// (0x00097ea9) fps_text_pane_t1_ParamLimits

0xa762,	// (0x00097ea9) fps_text_pane_t1

0x71ed,	// (0x00094934) cam4_image_uncrop_pane_g1

0x71f6,	// (0x0009493d) cam4_image_uncrop_pane_g2

0x71ff,	// (0x00094946) cam4_image_uncrop_pane_g3

0x7208,	// (0x0009494f) cam4_image_uncrop_pane_g4

0x0003,

0xf8ee,	// (0x0009d035) cam4_image_uncrop_pane_g

0xa56a,	// (0x00097cb1) dia3_listrow_pane_ParamLimits

0xedcc,	// (0x0009c513) main_phob2_pane

0x9a19,	// (0x00097160) cell_tport_appsw_pane_cp02_ParamLimits

0x9a19,	// (0x00097160) cell_tport_appsw_pane_cp02

0x9a28,	// (0x0009716f) cell_tport_appsw_pane_cp03_ParamLimits

0x9a28,	// (0x0009716f) cell_tport_appsw_pane_cp03

0xedcc,	// (0x0009c513) phob2_contact_card_pane

0xedcc,	// (0x0009c513) phob2_listscroll_pane

0xc5ea,	// (0x00099d31) phob2_list_pane

0xc5f2,	// (0x00099d39) scroll_pane_cp034

0xa77b,	// (0x00097ec2) phob2_cc_data_pane_ParamLimits

0xa77b,	// (0x00097ec2) phob2_cc_data_pane

0xa795,	// (0x00097edc) phob2_cc_listscroll_pane_ParamLimits

0xa795,	// (0x00097edc) phob2_cc_listscroll_pane

0xa35c,	// (0x00097aa3) list_double_large_graphic_phob2_pane_ParamLimits

0xa35c,	// (0x00097aa3) list_double_large_graphic_phob2_pane

0xa7af,	// (0x00097ef6) list_double_large_graphic_phob2_pane_g1_ParamLimits

0xa7af,	// (0x00097ef6) list_double_large_graphic_phob2_pane_g1

0xa7c5,	// (0x00097f0c) list_double_large_graphic_phob2_pane_g2_ParamLimits

0xa7c5,	// (0x00097f0c) list_double_large_graphic_phob2_pane_g2

0x0001,

0xff29,	// (0x0009d670) list_double_large_graphic_phob2_pane_g_ParamLimits

0xff29,	// (0x0009d670) list_double_large_graphic_phob2_pane_g

0xa7d1,	// (0x00097f18) list_double_large_graphic_phob2_pane_t1_ParamLimits

0xa7d1,	// (0x00097f18) list_double_large_graphic_phob2_pane_t1

0xa7e6,	// (0x00097f2d) list_double_large_graphic_phob2_pane_t2_ParamLimits

0xa7e6,	// (0x00097f2d) list_double_large_graphic_phob2_pane_t2

0x0001,

0xff2e,	// (0x0009d675) list_double_large_graphic_phob2_pane_t_ParamLimits

0xff2e,	// (0x0009d675) list_double_large_graphic_phob2_pane_t

0xedcc,	// (0x0009c513) list_highlight_pane_cp024

0xa7f8,	// (0x00097f3f) phob2_cc_button_pane

0xa800,	// (0x00097f47) phob2_cc_data_pane_g1_ParamLimits

0xa800,	// (0x00097f47) phob2_cc_data_pane_g1

0xa80c,	// (0x00097f53) phob2_cc_data_pane_g2_ParamLimits

0xa80c,	// (0x00097f53) phob2_cc_data_pane_g2

0x0001,

0xff33,	// (0x0009d67a) phob2_cc_data_pane_g_ParamLimits

0xff33,	// (0x0009d67a) phob2_cc_data_pane_g

0xa818,	// (0x00097f5f) phob2_cc_data_pane_t1_ParamLimits

0xa818,	// (0x00097f5f) phob2_cc_data_pane_t1

0xa82a,	// (0x00097f71) phob2_cc_data_pane_t2_ParamLimits

0xa82a,	// (0x00097f71) phob2_cc_data_pane_t2

0xa83c,	// (0x00097f83) phob2_cc_data_pane_t3_ParamLimits

0xa83c,	// (0x00097f83) phob2_cc_data_pane_t3

0x0002,

0xff38,	// (0x0009d67f) phob2_cc_data_pane_t_ParamLimits

0xff38,	// (0x0009d67f) phob2_cc_data_pane_t

0xc5fa,	// (0x00099d41) phob2_cc_list_pane_ParamLimits

0xc5fa,	// (0x00099d41) phob2_cc_list_pane

0xeef7,	// (0x0009c63e) scroll_pane_cp035_ParamLimits

0xeef7,	// (0x0009c63e) scroll_pane_cp035

0xcba8,	// (0x0009a2ef) bg_button_pane_cp033

0xc606,	// (0x00099d4d) phob2_cc_button_pane_g1

0xc612,	// (0x00099d59) phob2_cc_button_pane_t1

0xc627,	// (0x00099d6e) phob2_cc_button_pane_t2

0x0001,

0xff3f,	// (0x0009d686) phob2_cc_button_pane_t

0xa84e,	// (0x00097f95) list_double_large_graphic_phob2_cc_pane_ParamLimits

0xa84e,	// (0x00097f95) list_double_large_graphic_phob2_cc_pane

0xa875,	// (0x00097fbc) list_double_large_graphic_phob2_cc_pane_g1_ParamLimits

0xa875,	// (0x00097fbc) list_double_large_graphic_phob2_cc_pane_g1

0xa886,	// (0x00097fcd) list_double_large_graphic_phob2_cc_pane_g2_ParamLimits

0xa886,	// (0x00097fcd) list_double_large_graphic_phob2_cc_pane_g2

0xa892,	// (0x00097fd9) list_double_large_graphic_phob2_cc_pane_g3_ParamLimits

0xa892,	// (0x00097fd9) list_double_large_graphic_phob2_cc_pane_g3

0xa89e,	// (0x00097fe5) list_double_large_graphic_phob2_cc_pane_g4_ParamLimits

0xa89e,	// (0x00097fe5) list_double_large_graphic_phob2_cc_pane_g4

0xa8aa,	// (0x00097ff1) list_double_large_graphic_phob2_cc_pane_g5_ParamLimits

0xa8aa,	// (0x00097ff1) list_double_large_graphic_phob2_cc_pane_g5

0x0004,

0xff44,	// (0x0009d68b) list_double_large_graphic_phob2_cc_pane_g_ParamLimits

0xff44,	// (0x0009d68b) list_double_large_graphic_phob2_cc_pane_g

0xa8b6,	// (0x00097ffd) list_double_large_graphic_phob2_cc_pane_t1_ParamLimits

0xa8b6,	// (0x00097ffd) list_double_large_graphic_phob2_cc_pane_t1

0xa8df,	// (0x00098026) list_double_large_graphic_phob2_cc_pane_t2_ParamLimits

0xa8df,	// (0x00098026) list_double_large_graphic_phob2_cc_pane_t2

0x0001,

0xff4f,	// (0x0009d696) list_double_large_graphic_phob2_cc_pane_t_ParamLimits

0xff4f,	// (0x0009d696) list_double_large_graphic_phob2_cc_pane_t

0xc639,	// (0x00099d80) list_highlight_pane_cp025_ParamLimits

0xc639,	// (0x00099d80) list_highlight_pane_cp025

0xcba8,	// (0x0009a2ef) bg_button_pane_cp033_ParamLimits

0xc606,	// (0x00099d4d) phob2_cc_button_pane_g1_ParamLimits

0xc612,	// (0x00099d59) phob2_cc_button_pane_t1_ParamLimits

0xc627,	// (0x00099d6e) phob2_cc_button_pane_t2_ParamLimits

0xff3f,	// (0x0009d686) phob2_cc_button_pane_t_ParamLimits

0x2054,	// (0x0008f79b) popup_wgtman_window

0xe88e,	// (0x0009bfd5) scroll_pane_cp038

0xa2e5,	// (0x00097a2c) wgtman_btn_pane_cp_01_ParamLimits

0xa2e5,	// (0x00097a2c) wgtman_btn_pane_cp_01

0xc647,	// (0x00099d8e) wgtman_content_pane

0xc650,	// (0x00099d97) wgtman_heading_pane

0xedcc,	// (0x0009c513) bg_heading_pane_cp02

0xc659,	// (0x00099da0) wgtman_heading_pane_g1

0xc661,	// (0x00099da8) wgtman_heading_pane_t1

0xc66f,	// (0x00099db6) scroll_pane_cp036

0xc677,	// (0x00099dbe) wgtman_list_pane

0xc67f,	// (0x00099dc6) wgtman_list_pane_t1_ParamLimits

0xc67f,	// (0x00099dc6) wgtman_list_pane_t1

0x714c,	// (0x00094893) cam4_grid_pane

0x7ed4,	// (0x0009561b) bg_button_pane_cp015_ParamLimits

0x7ee6,	// (0x0009562d) bg_button_pane_cp016_ParamLimits

0x7ef9,	// (0x00095640) bg_button_pane_cp017_ParamLimits

0x7f4f,	// (0x00095696) popup_vitu2_query_window_g3_ParamLimits

0x7f4f,	// (0x00095696) popup_vitu2_query_window_g3

0x800a,	// (0x00095751) popup_vitu2_query_window_t6_ParamLimits

0x800a,	// (0x00095751) popup_vitu2_query_window_t6

0x8035,	// (0x0009577c) popup_vitu2_query_window_t7_ParamLimits

0x8035,	// (0x0009577c) popup_vitu2_query_window_t7

0x0df6,	// (0x0008e53d) cam4_grid_pane_g1

0x0dff,	// (0x0008e546) cam4_grid_pane_g2

0xc699,	// (0x00099de0) cam4_grid_pane_g3

0xc6a2,	// (0x00099de9) cam4_grid_pane_g4

0x0003,

0xff54,	// (0x0009d69b) cam4_grid_pane_g

0x2ed5,	// (0x0009061c) aid_placing_vt_slider_lsc_ParamLimits

0x3221,	// (0x00090968) vidtel_button_pane_ParamLimits

0x3221,	// (0x00090968) vidtel_button_pane

0xedcc,	// (0x0009c513) bg_button_pane_cp034

0xa908,	// (0x0009804f) vidtel_button_pane_g1

0xc6ad,	// (0x00099df4) vidtel_button_pane_t1

0xe9c0,	// (0x0009c107) aid_size_vtel_slider_touch

0xeef7,	// (0x0009c63e) scroll_pane_cp039

0x8e5a,	// (0x000965a1) ncim_query_button_pane_cp01_ParamLimits

0x8e79,	// (0x000965c0) ncimui_query_pane_g1_ParamLimits

0xcba8,	// (0x0009a2ef) input_focus_pane_cp012_ParamLimits

0x06bb,	// (0x0008de02) ncim_query_entry_pane_t1_ParamLimits

0xeef7,	// (0x0009c63e) scroll_pane_cp039_ParamLimits

0xb6f9,	// (0x00098e40) navi_pane_bcale_mc_g1

0xb701,	// (0x00098e48) navi_pane_bcale_mc_t1

0xbe49,	// (0x00099590) main_sp_fs_email_pane_g1

0xbe55,	// (0x0009959c) main_sp_fs_email_pane_g2

0x0001,

0xfce5,	// (0x0009d42c) main_sp_fs_email_pane_g

0xc0a5,	// (0x000997ec) list_single_cale_mrui_row_pane_g3_ParamLimits

0xc0a5,	// (0x000997ec) list_single_cale_mrui_row_pane_g3

0x9f17,	// (0x0009765e) list_single_recal_day_pane_g5_event_pane

0xed89,	// (0x0009c4d0) list_single_recal_day_pane_g7

0xc6c3,	// (0x00099e0a) list_recal_day_event_pane_cp01

0xc6cc,	// (0x00099e13) list_recal_vselct_arw_lo_pane_cp01

0xc6d4,	// (0x00099e1b) list_recal_vselct_arw_up_pane_cp01

0xc6dc,	// (0x00099e23) list_recal_vselct_pane_cp01

0xee57,	// (0x0009c59e) list_recal_day_event_pane_cp01_g1

0xedbe,	// (0x0009c505) list_recal_day_event_pane_cp01_t1

0xed91,	// (0x0009c4d8) list_single_recal_day_pane_t1_ParamLimits

0xeda3,	// (0x0009c4ea) list_single_recal_day_pane_t2_ParamLimits

0xfe42,	// (0x0009d589) list_single_recal_day_pane_t_ParamLimits

0xab64,	// (0x000982ab) bg_notes_pane_ParamLimits

0xac07,	// (0x0009834e) list_notes_pane_ParamLimits

0x23bc,	// (0x0008fb03) scroll_pane_cp06_ParamLimits

0xac29,	// (0x00098370) main_notes_pane_ParamLimits

0xedcc,	// (0x0009c513) main_welc_pane

0xa910,	// (0x00098057) main_welc_body_pane_ParamLimits

0xa910,	// (0x00098057) main_welc_body_pane

0xa92a,	// (0x00098071) main_welc_opti_pane_ParamLimits

0xa92a,	// (0x00098071) main_welc_opti_pane

0xa95d,	// (0x000980a4) main_welc_pane_t1_ParamLimits

0xa95d,	// (0x000980a4) main_welc_pane_t1

0xa977,	// (0x000980be) main_welc_body_row_pane_ParamLimits

0xa977,	// (0x000980be) main_welc_body_row_pane

0x0939,	// (0x0008e080) main_welc_opti_row_pane_ParamLimits

0x0939,	// (0x0008e080) main_welc_opti_row_pane

0xcbce,	// (0x0009a315) main_welc_opti_row_pane_g1

0xa99c,	// (0x000980e3) main_welc_opti_row_pane_t1

0xcbd6,	// (0x0009a31d) main_welc_body_row_pane_t1

0xc3f0,	// (0x00099b37) popup_notif_wgt_heading_pane

0xc40a,	// (0x00099b51) aid_size_list_notif_wgt_del_ParamLimits

0xc417,	// (0x00099b5e) list_notif_wgt_row_pane_g1_ParamLimits

0xc423,	// (0x00099b6a) list_notif_wgt_row_pane_g2_ParamLimits

0xc432,	// (0x00099b79) list_notif_wgt_row_pane_g3_ParamLimits

0xfea9,	// (0x0009d5f0) list_notif_wgt_row_pane_g_ParamLimits

0xc43f,	// (0x00099b86) list_notif_wgt_row_pane_t1_ParamLimits

0xc455,	// (0x00099b9c) list_notif_wgt_row_pane_t2_ParamLimits

0xc467,	// (0x00099bae) list_notif_wgt_row_pane_t3_ParamLimits

0xfeb0,	// (0x0009d5f7) list_notif_wgt_row_pane_t_ParamLimits

0xa377,	// (0x00097abe) listrow_wgtman_pane_g1_ParamLimits

0xa384,	// (0x00097acb) listrow_wgtman_pane_g2_ParamLimits

0xfed9,	// (0x0009d620) listrow_wgtman_pane_g_ParamLimits

0xa3a2,	// (0x00097ae9) listrow_wgtman_pane_t1_ParamLimits

0xa3ba,	// (0x00097b01) listrow_wgtman_pane_t2_ParamLimits

0xfede,	// (0x0009d625) listrow_wgtman_pane_t_ParamLimits

0xa3e0,	// (0x00097b27) wait_bar_pane_cp09_ParamLimits

0xedcc,	// (0x0009c513) bg_popup_heading_pane_cp02

0xcbe5,	// (0x0009a32c) popup_notif_wgt_heading_pane_g1

0xcbed,	// (0x0009a334) popup_notif_wgt_heading_pane_t1

0xedcc,	// (0x0009c513) main_vids_pane

0xedcc,	// (0x0009c513) vids_listscroll_pane

0xa9ab,	// (0x000980f2) scroll_pane_cp040

0xedcc,	// (0x0009c513) vids_list_pane

0xa9b6,	// (0x000980fd) vids_list_double_pane_ParamLimits

0xa9b6,	// (0x000980fd) vids_list_double_pane

0xa9d0,	// (0x00098117) vids_list_double_pane_g1

0xa9d9,	// (0x00098120) vids_list_double_pane_t1

0xa9e9,	// (0x00098130) vids_list_double_pane_t2

0x0001,

0xff62,	// (0x0009d6a9) vids_list_double_pane_t

0x5273,	// (0x000929ba) main_ncimui_pane_ParamLimits

0x8cb1,	// (0x000963f8) main_ncimui_pane_g1_ParamLimits

0x8cbd,	// (0x00096404) main_ncimui_pane_g2_ParamLimits

0x8cbd,	// (0x00096404) main_ncimui_pane_g2

0x0001,

0xfbea,	// (0x0009d331) main_ncimui_pane_g_ParamLimits

0xfbea,	// (0x0009d331) main_ncimui_pane_g

0xa943,	// (0x0009808a) main_welc_pane_g1_ParamLimits

0xa943,	// (0x0009808a) main_welc_pane_g1

0xa94f,	// (0x00098096) main_welc_pane_g2_ParamLimits

0xa94f,	// (0x00098096) main_welc_pane_g2

0x0001,

0xff5d,	// (0x0009d6a4) main_welc_pane_g_ParamLimits

0xff5d,	// (0x0009d6a4) main_welc_pane_g

0xab64,	// (0x000982ab) listscroll_mce_pane_ParamLimits

0xb84e,	// (0x00098f95) wait_bar_pane_cp10

0xd881,	// (0x0009afc8) main_cale_day_pane_ParamLimits

0xd881,	// (0x0009afc8) main_cale_week_pane_ParamLimits

0xab64,	// (0x000982ab) main_messa_pane_ParamLimits

0x659f,	// (0x00093ce6) main_clock2_btn_pane_ParamLimits

0x659f,	// (0x00093ce6) main_clock2_btn_pane

0xe0e1,	// (0x0009b828) main_clock2_btn_pane_cp01_ParamLimits

0xe0e1,	// (0x0009b828) main_clock2_btn_pane_cp01

0xc076,	// (0x000997bd) list_cale_mrui_pane_ParamLimits

0xc49d,	// (0x00099be4) main_cf0_pane_g2

0x0001,

0xfeb7,	// (0x0009d5fe) main_cf0_pane_g

0xa587,	// (0x00097cce) area_left_week_number_pane_ParamLimits

0xa59a,	// (0x00097ce1) area_top_day_name_pane_ParamLimits

0xa5a8,	// (0x00097cef) frame_month_view_pane_ParamLimits

0xc5af,	// (0x00099cf6) grid_month_view_pane_ParamLimits

0xc5bd,	// (0x00099d04) frm_month_g1_ParamLimits

0xa626,	// (0x00097d6d) frm_month_g2_ParamLimits

0xa637,	// (0x00097d7e) frm_month_g3_ParamLimits

0xa648,	// (0x00097d8f) frm_month_g4_ParamLimits

0xa659,	// (0x00097da0) frm_month_g5_ParamLimits

0xa66c,	// (0x00097db3) frm_month_g6_ParamLimits

0xa67f,	// (0x00097dc6) frm_month_g7_ParamLimits

0xc5ca,	// (0x00099d11) frm_month_g8_ParamLimits

0xa692,	// (0x00097dd9) frm_month_g9_ParamLimits

0xa69f,	// (0x00097de6) frm_month_g10_ParamLimits

0xa6ac,	// (0x00097df3) frm_month_g11_ParamLimits

0xa6b9,	// (0x00097e00) frm_month_g12_ParamLimits

0xa6c6,	// (0x00097e0d) frm_month_g13_ParamLimits

0xa6d3,	// (0x00097e1a) frm_month_g14_ParamLimits

0xa6e2,	// (0x00097e29) frm_month_g15_ParamLimits

0xa6f1,	// (0x00097e38) frm_month_g16_ParamLimits

0xff08,	// (0x0009d64f) frm_month_g_ParamLimits

0xc5d7,	// (0x00099d1e) cell_top_day_name_pane_t1_ParamLimits

0xa700,	// (0x00097e47) cell_area_left_week_number_pane_g1_ParamLimits

0xa70f,	// (0x00097e56) cell_area_left_week_number_pane_t1_ParamLimits

0xdf01,	// (0x0009b648) cell_month_view_pane_g1_ParamLimits

0xa725,	// (0x00097e6c) cell_month_view_pane_t1_ParamLimits

0xab5c,	// (0x000982a3) main_clock2_btn_pane_g1

0xcbfb,	// (0x0009a342) main_clock2_btn_pane_t1

0xcba8,	// (0x0009a2ef) listscroll_cmail_pane_ParamLimits

0xbe49,	// (0x00099590) main_sp_fs_email_pane_g1_ParamLimits

0xbe55,	// (0x0009959c) main_sp_fs_email_pane_g2_ParamLimits

0xfce5,	// (0x0009d42c) main_sp_fs_email_pane_g_ParamLimits

0xc17c,	// (0x000998c3) list_recal_day_pane_ParamLimits

0xc18d,	// (0x000998d4) mian_recal_day_pane_t1

0x96e5,	// (0x00096e2c) list_single_dyc_row_text_pane_t4_ParamLimits

0x96e5,	// (0x00096e2c) list_single_dyc_row_text_pane_t4

0x971c,	// (0x00096e63) list_single_dyc_row_text_pane_t5_ParamLimits

0x971c,	// (0x00096e63) list_single_dyc_row_text_pane_t5

0xeb14,	// (0x0009c25b) list_single_dyc_row_text_pane_t6_ParamLimits

0xeb14,	// (0x0009c25b) list_single_dyc_row_text_pane_t6

0x4076,	// (0x000917bd) aid_mgn_list_cale_time_pane

0x5273,	// (0x000929ba) main_gallery2_pane_ParamLimits

0xe0f7,	// (0x0009b83e) main_clock2_pane_cp01_t1

0xe107,	// (0x0009b84e) main_clock2_pane_cp01_t3

0x0001,

0xf7c4,	// (0x0009cf0b) main_clock2_pane_cp01_t

0x2808,	// (0x0008ff4f) cale_week_scroll_pane_g16_ParamLimits

0x2808,	// (0x0008ff4f) cale_week_scroll_pane_g16

0xadee,	// (0x00098535) vorec_slider_pane

0xc6ad,	// (0x00099df4) vidtel_button_pane_t1_ParamLimits

0x9f72,	// (0x000976b9) main_fs_bigclock_clock_pane_g1_ParamLimits

0x9f72,	// (0x000976b9) main_fs_bigclock_clock_pane_g2_ParamLimits

0x9f7f,	// (0x000976c6) main_fs_bigclock_clock_pane_g3_ParamLimits

0x9f7f,	// (0x000976c6) main_fs_bigclock_clock_pane_g4_ParamLimits

0xfe65,	// (0x0009d5ac) main_fs_bigclock_clock_pane_g_ParamLimits

0x9f8b,	// (0x000976d2) main_fs_bigclock_clock_pane_t1_ParamLimits

0x9f9e,	// (0x000976e5) main_fs_bigclock_clock_pane_t2_ParamLimits

0xfe6e,	// (0x0009d5b5) main_fs_bigclock_clock_pane_t_ParamLimits
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
	};

} // end of namespace AknLayoutScalable_Abrw_php_apps_qhd_prt_tch_Large
